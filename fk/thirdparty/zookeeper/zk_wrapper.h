#pragma once

#include "zookeeper.h"
#include <memory>
#include <unordered_map>
#include <string>
#include "objectpool.h"

class ZkConnMgr;
class ZkBaseConnection;

#ifndef WIN32
typedef int SOCKET;
#endif

struct ZkSelectCtxt {
	zhandle_t* handler;
	SOCKET fd;
};

struct ZkContext {
	ZkConnMgr* mgr;
	std::shared_ptr<ZkBaseConnection> ptr;
};

struct ZkRequestContext {
	ZkContext* ctxt;
	std::string path;
	std::string op;
};

////////////////////////////////////////////////////////////////////////

class ZkBaseConnection {
	friend class ZkConnMgr;
public:
	ZkBaseConnection();

	ZkBaseConnection(void* watcherCtx);

	virtual ~ZkBaseConnection();

	bool IsConnected() const;

	// @acl: ZOO_OPEN_ACL_UNSAFE etc
	// @flags: ZOO_EPHEMERAL,ZOO_SEQUENCE
	int acreate(const char *path,
		const char *value, int valuelen,
		const struct ACL_vector *acl, int flags);

	// Ĭ��ʹ��digestģʽ
	int acreate(const char *path, const char *value, int valuelen, const char* user,
		const char* passwd, int flags);

	int adelete(const char *path, int version);

	int aexists(const char *path, int watch);

	int aget(const char *path, int watch);

	int aset(const char *path, const char *buffer, int buflen, int version);

	int aget_children(const char *path, int watch);

	int aget_acl(const char* path);

	int aset_acl(const char* path, int version, struct ACL_vector *acl);

	int aset_acl(const char* path, int version, const char* user,
		const char* passwd);

	// �������ζ�������Ͽ�����
	void close();

protected:
	// a node has been created.
	virtual void OnCreateNode(const char* path) {}

	// a node has been deleted.
	virtual void OnDeletedNode(const char* path) {}

	// a node has changed.
	virtual void OnChangedNode(const char* path) {}

	// a change as occurred in the list of children.
	virtual void OnChild(const char* path) {}

	virtual void OnSeesion(int state, const char* path) {}

	////////////////////////////////////////////////////////////////////////////////////////

	// ���� Stat �ṹ�Ļص�����
	virtual void OnVoidCompletionCb(int rc, const char* op, const char* path) {}

	// ���� Stat �ṹ�Ļص�����
	virtual void OnStatCompletionCb(int rc, const char* op, const char* path, const struct Stat *stat) {}

	// �����ַ����Ļص�����
	virtual void OnStringCompletionCb(int rc, const char* op, const char* path, const char *value) {}

	// �������ݵĻص�����
	virtual void OnDataCompletionCb(int rc, const char* op, const char* path, const char *value, int value_len, const struct Stat *stat){}

	// �����ַ����б�(a list of string)�Ļص�����
	virtual void OnStringsCompletionCb(int rc, const char* op, const char* path, const struct String_vector *strings) {}

	// ͬʱ�����ַ����б�(a list of string)�� Stat �ṹ�Ļص�����
	virtual void OnStringsStatCompletionCb(int rc, const char* op, const char* path, const struct String_vector *strings,
		const struct Stat *stat) {}

	// �Լ����� ACL ��Ϣ�Ļص�����
	virtual void OnAclCompletionCb(int rc, const char* op, const char* path, struct ACL_vector *acl, struct Stat *stat) {}

private:
	ZkContext* ctxt;
	zhandle_t* handler;
	void* watcherCtx;
	bool connected;
	std::string host;
	int timeout;
	int flags;
};

/////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////

class ZkConnMgr {
	friend class ZkBaseConnection;

public:
	ZkConnMgr();

	~ZkConnMgr();

	int update();

	// ֻ��������64��(windows)
	template<typename T>
	int connect(const char *host, int timeout, int flags);

	static void SetLog(ZooLogLevel lvl);

private:
	template<typename T>
	static void watcher_cb(zhandle_t* zh, int type, int state,
		const char* path, void* watcherCtx);

	// ���� void ���͵Ļص�����
	static void void_completion_cb(int rc, const void *data);

	// ���� Stat �ṹ�Ļص�����
	static void stat_completion_cb(int rc, const struct Stat *stat, const void *data);

	// �����ַ����Ļص�����
	static void string_completion_cb(int rc, const char *value, const void *data);

	// �������ݵĻص�����
	static void data_completion_cb(int rc, const char *value, int value_len, const struct Stat *stat, const void *data);

	// �����ַ����б�(a list of string)�Ļص�����
	static void strings_completion_cb(int rc, const struct String_vector *strings, const void *data);

	// ͬʱ�����ַ����б�(a list of string)�� Stat �ṹ�Ļص�����
	static void strings_stat_completion_cb(int rc, const struct String_vector *strings, const struct Stat *stat, const void *data);

	// �Լ����� ACL ��Ϣ�Ļص�����
	static void acl_completion_cb(int rc, struct ACL_vector *acl, struct Stat *stat, const void *data);

private:
	std::unordered_map<zhandle_t*, ZkContext*> container;
	ZkObjPool<ZkRequestContext, 1000> request_alloc;
};

////////////////////////////////////////////////////////////////////////////

template<typename T>
int ZkConnMgr::connect(const char *host, int timeout, int flags) {
	if (container.size() >= FD_SETSIZE) {
		return -1;
	}

	auto ptr = std::make_shared<T>();
	ZkContext* ctxt = new ZkContext;

	ctxt->ptr = ptr;
	ctxt->mgr = this;

	ptr->ctxt = ctxt;
	ptr->connected = false;
	ptr->host = host;
	ptr->timeout = timeout;
	ptr->flags = flags;

	ptr->handler = zookeeper_init(host, &ZkConnMgr::watcher_cb<T>, timeout, 0, (void*)ctxt, flags);
	if (ptr->handler == NULL) {
		delete ctxt;
		return -1;
	}

	container.insert(std::make_pair(ptr->handler, ctxt));
	return 0;
}

template<typename T>
void ZkConnMgr::watcher_cb(zhandle_t* zh, int type, int state,
	const char* path, void* watcherCtx) {
	ZkContext* ctxt = (ZkContext*)watcherCtx;
	ZkConnMgr* mgr = (ZkConnMgr*)ctxt->mgr;

	if (type == ZOO_SESSION_EVENT) {
		if (state == ZOO_CONNECTED_STATE) {
			ctxt->ptr->connected = true;
		}
		else if (state == ZOO_CONNECTING_STATE) {
			ctxt->ptr->connected = false;
		}
	}

	if (type == ZOO_SESSION_EVENT) {
		ctxt->ptr->OnSeesion(state, path);
	}
	else if (type == ZOO_CREATED_EVENT) {
		ctxt->ptr->OnCreateNode(path);
	}
	else if (type == ZOO_DELETED_EVENT) {
		ctxt->ptr->OnDeletedNode(path);
	}
	else if (type == ZOO_CHANGED_EVENT) {
		ctxt->ptr->OnChangedNode(path);
	}
	else if (type == ZOO_CHILD_EVENT) {
		ctxt->ptr->OnChild(path);
	}

	// �Ự�¼�
	if (type == ZOO_SESSION_EVENT
		&& state == ZOO_EXPIRED_SESSION_STATE) {
		// ���������Ͽ�,������
		if (ctxt->ptr->handler != 0) {
			mgr->connect<T>(ctxt->ptr->host.c_str(), ctxt->ptr->timeout, ctxt->ptr->flags);
		}

		// ���
		mgr->container.erase(ctxt->ptr->handler);
		delete ctxt;
	}
}