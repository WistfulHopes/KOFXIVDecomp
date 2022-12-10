#pragma once

class extension::ExSemaphore
{
public:
	ExSemaphore(long);
private:
	ExSemaphore(const extension::ExSemaphore &);
	extension::ExSemaphore & operator=(const extension::ExSemaphore &);
public:
	~ExSemaphore();
	void acquire();
	bool timedAcquire(long);
	void release(long);
	void release();
private:
	AgSemaphore m_agSem; // 0x0
};