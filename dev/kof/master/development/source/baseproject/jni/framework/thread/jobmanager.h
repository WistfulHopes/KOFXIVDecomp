#pragma once

class Fw::cJobManager
{
	enum <unnamed-enum-JOB_WORK_MAX>
	{
		JOB_WORK_MAX = 5,
	};
public:
	cJobManager(const Fw::cJobManager &);
	cJobManager();
	~cJobManager();
	bool Startup(Fw::HeapMemory &, long, const char *, unsigned long long *);
	void Shutdown();
	void SetJobFunction(void(*)(void *), void *, long);
	void Execute(long);
	long GetCurrentJobNo();
	long GetExecuteWorkNum();
	enum FLAG
	{
		FLAG_STARTUP = 1,
		FLAG_SHUTDOWN = 2,
	};
	class cWork;
private:
	bool isRunning();
	static void jobThread(void *);
	static void jobProc(Fw::cJobManager::cWork &);
	bool isCleanup();
	Fw::cJobManager::cWork * m_pWork[5]; // 0x0
	long m_WorkNum; // 0x28
	unsigned long m_Flag; // 0x2C
	long m_ExecuteWorkNum; // 0x30
	volatile long m_RunningFlag; // 0x34
public:
	Fw::cJobManager & operator=(const Fw::cJobManager &);
};
class Fw::cJobManager::cWork
{
public:
	Fw::cJobManager * m_pManager; // 0x0
	Fw::THREAD_HANDLE m_Handle; // 0x8
	Fw::Semaphore m_SyncStart; // 0x10
	Fw::Semaphore m_SyncEnd; // 0x18
	void(*m_pJobFunc)(void *); // 0x20
	void * m_pJobParam; // 0x28
	cWork();
	~cWork();
};