#include "slience/netio/netio.hpp"
#include "slience/netio/tcp_socket.h"
#include "slience/netio/tcp_connector.h"
#include "slience/netio/http_socket.h"
#include "slience/netio/http_connector.h"


M_NETIO_NAMESPACE_BEGIN

NetIo::NetIo()
	:_backlog(20) {
	_endian = SocketLib::detail::Util::LocalEndian();
	m_function_t<void()> handler = m_bind_t(&NetIo::RunHandler, this);
	_ioservice.SetRunCallback(handler);
}

NetIo::NetIo(base::s_uint32_t backlog)
	: _backlog(backlog) {
	_endian = SocketLib::detail::Util::LocalEndian();
	m_function_t<void()> handler = m_bind_t(&NetIo::RunHandler, this);
	_ioservice.SetRunCallback(handler);
}

NetIo::~NetIo() {}

bool NetIo::ListenOne(const std::string& addr,
	base::s_uint16_t port, 
	int listen_type,
	int listen_num) {
	try {
		SocketLib::Tcp::EndPoint ep(SocketLib::AddressV4(addr), port);
		TcpAcceptorPtr acceptor(new SocketLib::TcpAcceptor<SocketLib::IoService>(_ioservice, ep, _backlog));
		TcpSocketPtr clisock(new TcpSocket(*this));
		clisock->SetListenConn(listen_type, listen_num);
		acceptor->AsyncAccept(m_bind_t(&NetIo::_AcceptHandler, this, placeholder_1, clisock, acceptor),
			clisock->GetSocket());
	}
	catch (SocketLib::SocketError& error) {
		lasterror = error;
		return false;
	}
	return true;
}

bool NetIo::ListenOneHttp(const std::string& addr,
	base::s_uint16_t port,
	int listen_type,
	int listen_num) {
	try {
		SocketLib::Tcp::EndPoint ep(SocketLib::AddressV4(addr), port);
		TcpAcceptorPtr acceptor(new SocketLib::TcpAcceptor<SocketLib::IoService>(_ioservice, ep, _backlog));
		HttpSocketPtr clisock(new HttpSocket(*this));
		clisock->SetListenConn(listen_type, listen_num);
		acceptor->AsyncAccept(m_bind_t(&NetIo::_AcceptHttpHandler, this, placeholder_1, clisock, acceptor), 
			clisock->GetSocket());
	}
	catch (SocketLib::SocketError& error) {
		lasterror = error;
		return false;
	}
	return true;
}

void NetIo::ConnectOne(const std::string& addr,
	base::s_uint16_t port,
	int conn_type,
	int conn_num) {
	SocketLib::Tcp::EndPoint ep(SocketLib::AddressV4(addr), port);
	netiolib::TcpConnectorPtr connector(new netiolib::TcpConnector(*this));

	connector->SetListenConn(conn_type, conn_num);
	SocketLib::SocketError error;
	connector->AsyncConnect(ep, error);
}

void NetIo::ConnectOneHttp(const std::string& addr,
	base::s_uint16_t port,
	int conn_type,
	int conn_num) {
	SocketLib::Tcp::EndPoint ep(SocketLib::AddressV4(addr), port);
	netiolib::HttpConnectorPtr connector(new netiolib::HttpConnector(*this));

	connector->SetListenConn(conn_type, conn_num);
	SocketLib::SocketError error;
	connector->AsyncConnect(ep);
}

void NetIo::Start(unsigned int thread_cnt, bool isco) {
	if (_threadlist.empty()) {
		for (unsigned int idx = 0; idx < thread_cnt; ++idx) {
			bool* pb = new bool(isco);
			base::thread* pthread = new base::thread(&NetIo::_Start, this, pb);
			_threadlist.push_back(pthread);
		}
	}
	while (_ioservice.ServiceCount()
		!= _threadlist.size());
}

void NetIo::Stop() {
	try {
		_ioservice.Stop();
		while (_threadlist.size()) {
			base::thread* pthread = _threadlist.front();
			pthread->join();
			_threadlist.pop_front();
		}
	}
	catch (SocketLib::SocketError& error) {
		lasterror = error;
		M_NETIO_LOGGER("stop happend error:" << M_ERROR_DESC_STR(error));
	}
}

void NetIo::RunHandler() {
}

size_t NetIo::ServiceCount() {
	return _ioservice.ServiceCount();
}

SocketLib::SocketError NetIo::GetLastError()const {
	return lasterror;
}

SocketLib::IoService& NetIo::GetIoService() {
	return _ioservice;
}

base::s_uint32_t NetIo::LocalEndian()const {
	return _endian;
}

void NetIo::_Start(void*p) {
	printf("%d thread is starting..............\n", base::thread::ctid());
	bool* pb = (bool*)p;
	try {
		if (*pb)
			_ioservice.CoRun();
		else
			_ioservice.Run();
	}
	catch (SocketLib::SocketError& error) {
		lasterror = error;
		printf("run happend error:%d|%s", error.Code(), error.What().c_str());
	}
	delete pb;
	printf("%d thread is leaving..............\n", base::thread::ctid());
}

void NetIo::_AcceptHandler(SocketLib::SocketError error, TcpSocketPtr& clisock, TcpAcceptorPtr& acceptor) {
	if (error) {
		printf("accept handler happend error:%d|%s", error.Code(), error.What().c_str());
	}
	else {
		clisock->Init();
	}
	TcpSocketPtr newclisock(new TcpSocket(*this));
	acceptor->AsyncAccept(m_bind_t(&NetIo::_AcceptHandler, this, placeholder_1, newclisock, acceptor), newclisock->GetSocket(), error);
	if (error)
		lasterror = error;
}

void NetIo::_AcceptHttpHandler(SocketLib::SocketError error, HttpSocketPtr& clisock, TcpAcceptorPtr& acceptor) {
	if (error) {
		printf("accept handler happend error:%d|%s", error.Code(), error.What().c_str());
	}
	else {
		clisock->Init();
	}
	HttpSocketPtr newclisock(new HttpSocket(*this));
	acceptor->AsyncAccept(m_bind_t(&NetIo::_AcceptHttpHandler, this, placeholder_1, newclisock, acceptor), newclisock->GetSocket(), error);
	if (error)
		lasterror = error;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
*以下三个函数定义为虚函数，以便根据实际业务的模式来做具体模式的消息包分发处理。
*保证同一个socket，以下三个函数的调用遵循OnConnected -> OnReceiveData -> OnDisconnected的顺序。
*保证同一个socket，以下后两个函数的调用都在同一个线程中
*/

// 连线通知,这个函数里不要处理业务，防止堵塞
void NetIo::OnConnected(TcpSocketPtr& clisock) {
	M_PRINT("tcp socket | OnConnected one : %s %d\n", clisock->RemoteEndpoint().Address().c_str(),
		clisock->RemoteEndpoint().Port());
}

void NetIo::OnConnected(TcpConnectorPtr& clisock, SocketLib::SocketError error) {
	if (error) {
		M_PRINT("tcp connector | connect fail :%d %s\n", error.Code(), error.What().c_str());
	}
	else {
		M_PRINT("tcp connector | connect success : %s %d\n", clisock->RemoteEndpoint().Address().c_str(),
			clisock->RemoteEndpoint().Port());
	}
}

void NetIo::OnConnected(HttpSocketPtr& clisock) {
	M_PRINT("http socket | OnConnected one : %s %d\n", clisock->RemoteEndpoint().Address().c_str(),
		clisock->RemoteEndpoint().Port());
}

void NetIo::OnConnected(HttpConnectorPtr& clisock, SocketLib::SocketError error) {
	if (error) {
		M_PRINT("http connector | connect fail :%d %s\n", error.Code(), error.What().c_str());
	}
	else {
		M_PRINT("http connector | connect success : %s %d\n", clisock->RemoteEndpoint().Address().c_str(),
			clisock->RemoteEndpoint().Port());
	}
}


// 掉线通知,这个函数里不要处理业务，防止堵塞
void NetIo::OnDisconnected(TcpSocketPtr& clisock) {
	M_PRINT("tcp socket | OnDisconnected one : %s %d\n", clisock->RemoteEndpoint().Address().c_str(),
		clisock->RemoteEndpoint().Port())
}

void NetIo::OnDisconnected(TcpConnectorPtr& clisock) {
	M_PRINT("tcp connector | OnDisconnected one : %s %d\n", clisock->RemoteEndpoint().Address().c_str(),
		clisock->RemoteEndpoint().Port())
}

void NetIo::OnDisconnected(HttpSocketPtr& clisock) {
	M_PRINT("http socket | OnDisconnected one : %s %d\n", clisock->RemoteEndpoint().Address().c_str(),
		clisock->RemoteEndpoint().Port())
}

void NetIo::OnDisconnected(HttpConnectorPtr& clisock) {
	M_PRINT("http connector | OnDisconnected one : %s %d\n", clisock->RemoteEndpoint().Address().c_str(),
		clisock->RemoteEndpoint().Port())
}

// 数据包通知,这个函数里不要处理业务，防止堵塞
void NetIo::OnReceiveData(TcpSocketPtr& clisock, const base::s_byte_t* data, base::s_uint32_t len) {
	M_PRINT("tcp socket | OnReceiveData one : %s %d %d\n", clisock->RemoteEndpoint().Address().c_str(),
		clisock->RemoteEndpoint().Port(), len);
}

void NetIo::OnReceiveData(TcpConnectorPtr& clisock, const base::s_byte_t* data, base::s_uint32_t len) {
	M_PRINT("tcp connector | OnReceiveData one : %s %d %d\n", clisock->RemoteEndpoint().Address().c_str(),
		clisock->RemoteEndpoint().Port(), len);
}

void NetIo::OnReceiveData(HttpSocketPtr& clisock, HttpSvrRecvMsg& httpmsg) {
	M_PRINT("http socket | OnReceiveData one : %s %d\n", clisock->RemoteEndpoint().Address().c_str(),
		clisock->RemoteEndpoint().Port());
}

void NetIo::OnReceiveData(HttpConnectorPtr& clisock, HttpCliRecvMsg& httpmsg) {
	M_PRINT("http connector | OnReceiveData one : %s %d\n", clisock->RemoteEndpoint().Address().c_str(),
		clisock->RemoteEndpoint().Port());
}

M_NETIO_NAMESPACE_END