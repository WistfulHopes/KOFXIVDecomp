#pragma once

AgScopedLock<AgMutex>::~AgScopedLock<AgMutex>(); // 0x14002F1D0
class AgScopedLock<void>
{
private:
	AgScopedLock<void>(const AgScopedLock<void> &);
public:
	void lock();
	void unlock();
private:
	AgScopedLock<void> & operator=(const AgScopedLock<void> &);
};