/*
 * ��Ƶĳ����ǿ��Զ����ã���߳�����ڴ�Ч�ʣ�����������Ч�ʣ�����ͬʱ�ֲ���Ҫ��ֱ��
 * ʹ�ö����������Ҫ��ʾ�Ļ��ն���stackobject�������ֻ������ջ�У����Ǳ������stackobject
 * ����������ڴ���Ƭ���������Ҫ����ȷ�ĳ�����ʹ�á�
 * stackobject�����������ԭ��
 * 1��֧�ֶ��йܶ�����ڴ渴��
 * 2���йܶ�����ڴ��Զ�����
 * 3��������Ȼ
 * 4��֧�ֲ�������
 * 5����֧��new
 * 6����֧�ָ�ֵ����
*/
#pragma once

#include "slience/base/object_pool.h"

M_BASE_NAMESPACE_BEGIN

/*
 * 1��Ŀǰֻ֧�����������캯��
 * 2��AllocatorĬ����ObjectPool<T, 1000, base::MutexLock>
*/
template<typename T, typename Allocator = ObjectPool<T, 1000, base::MutexLock>>
class StackObject {
public:
	~StackObject() {
		*_refs -= 1;
		if (*_refs == 0) {
			delete _refs;
			Allocator::Dealloc(_obj);
		}
	}

	T* operator ->() {
		return _obj;
	}

	const T* operator ->() const {
		return _obj;
	}

	StackObject(const StackObject& other) {
		_refs = other._refs;
		*_refs += 1;
		_obj = other._obj;
	}

	StackObject() {
		_obj = Allocator::Alloc();
		initref();
	}

	template<class P>
	StackObject(const P& p) {
		_obj = Allocator::Alloc(p);
		initref();
	}

	template<class P1, class P2>
	StackObject(const P1& p1, const P2& p2) {
		_obj = Allocator::Alloc(p1, p2);
		initref();
	}
	
	template<class P1, class P2, class P3>
	StackObject(const P1& p1, const P2& p2, const P3& p3) {
		_obj = Allocator::Alloc(p1, p2, p3);
		initref();
	}

	template<class P1, class P2, class P3, class P4>
	StackObject(const P1& p1, const P2& p2, const P3& p3, const P4& p4) {
		_obj = Allocator::Alloc(p1, p2, p3, p4);
		initref();
	}

	template<class P1, class P2, class P3, class P4, class P5>
	StackObject(const P1& p1, const P2& p2, const P3& p3, const P4& p4, const P5& p5) {
		_obj = Allocator::Alloc(p1, p2, p3, p4, p5);
		initref();
	}

protected:
	void initref() {
		_refs = new int;
		*_refs = 1;
	}

protected:
	// ����new
	void* operator new(size_t size);
	void* operator new[](size_t size);
	// ��֧�ָ�ֵ,���ⱻ����Ӱ������
	StackObject& operator = (const StackObject& other);
protected:
	T* _obj;
	int* _refs;
};

M_BASE_NAMESPACE_END
