#pragma once

template <typename T>
class AgScopedLock
{
private:
	AgScopedLock<T>(const AgScopedLock<T> &);
public:
	AgScopedLock<T>(const T &);
	~AgScopedLock<T>();
	void lock();
	void unlock();
private:
	AgScopedLock<T> & operator=(const AgScopedLock<T> &);
public:
	long m_locked; // 0x0
	const T & m_lockable; // 0x8
};