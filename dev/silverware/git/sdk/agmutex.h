#pragma once

#include "platforms\pc\system\agpcsysteminfo.h"

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