#pragma once

namespace AgDetail 
{
	namespace Win32 
	{
		enum Wait
		{
			Wait_Failed = 255,
			Wait_Object0 = 0,
			Wait_Abandoned = 128,
		};
	}
}

struct AgSemaphoreInternalData
{
	volatile long m_aborted; // 0x0
	void * m_sem; // 0x8
	AgSemaphoreInternalData(AgSemaphoreInternalData &);
	AgSemaphoreInternalData(const AgSemaphoreInternalData &);
	AgSemaphoreInternalData();
	AgSemaphoreInternalData & operator=(AgSemaphoreInternalData &);
	AgSemaphoreInternalData & operator=(const AgSemaphoreInternalData &);
};
class AgSemaphore
{
private:
	AgSemaphore(const AgSemaphore &);
public:
	AgSemaphore(unsigned long, unsigned long);
	~AgSemaphore();
	long increment(unsigned long);
	long wait(unsigned long, long);
	void abort();
	long aborted();
private:
	AgSemaphore & operator=(const AgSemaphore &);
	AgSemaphoreInternalData m_data; // 0x0
public:
	void __dflt_ctor_closure();
};