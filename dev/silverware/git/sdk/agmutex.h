#pragma once

struct AgMutexInternalData
{
	AgMutexInternalData();
	AgDetail::Win32::CRITICAL_SECTION m_criticalSection; // 0x0
};
enum AgMutexAttribute
{
	AgMutexAttribute_Fifo = 0,
	AgMutexAttribute_PriorityProtect = 2,
	AgMutexAttribute_PriorityInherit = 4,
	AgMutexAttribute_NonRecursive = 0,
	AgMutexAttribute_Recursive = 4,
	AgMutexAttribute_Default = 4,
};
class AgMutex
{
	class ScopedLock;
private:
	AgMutex(const AgMutex &);
public:
	AgMutex(long);
	~AgMutex();
	void lock();
	void unlock();
	long tryLock();
private:
	AgMutex & operator=(const AgMutex &);
	AgMutexInternalData m_data; // 0x0
public:
	void __dflt_ctor_closure();
};
class AgScopedLock<AgMutex>
{
private:
	AgScopedLock<AgMutex>(const AgScopedLock<AgMutex> &);
public:
	AgScopedLock<AgMutex>(const AgMutex &);
	~AgScopedLock<AgMutex>();
	void lock();
	void unlock();
private:
	AgScopedLock<AgMutex> & operator=(const AgScopedLock<AgMutex> &);
public:
	long m_locked; // 0x0
	const AgMutex & m_lockable; // 0x8
};