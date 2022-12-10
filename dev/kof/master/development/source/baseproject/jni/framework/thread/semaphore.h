#pragma once

class Fw::Semaphore
{
public:
	Semaphore();
	~Semaphore();
	bool Startup(unsigned long, unsigned long);
	void Shutdown();
	void Wait();
	void Post();
private:
	AgSemaphore * m_hSemaphore; // 0x0
};