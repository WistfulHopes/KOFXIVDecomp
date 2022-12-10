#pragma once

class AgReferenceCount
{
private:
	AgReferenceCount(const AgReferenceCount &);
	AgReferenceCount();
public:
	AgReferenceCount(void *);
	long incRef();
	long decRef(long &, long &);
	long incWeakRef();
	long decWeakRef(long &);
	long getRefCount();
	long getWeakRefCount();
	void setObject(void *);
	void * getObject();
	static void * operator new(unsigned long long);
	static void operator delete(void *);
private:
	volatile long m_strongCount; // 0x0
	volatile long m_weakCount; // 0x4
	void * m_data; // 0x8
	AgReferenceCount & operator=(const AgReferenceCount &);
};