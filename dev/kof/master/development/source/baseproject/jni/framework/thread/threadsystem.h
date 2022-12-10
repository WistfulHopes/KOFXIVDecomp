#pragma once

enum Fw::THREAD_HANDLE
{
	THREAD_HANDLE_INVALID = 0,
};
enum Fw::THREAD_OPTION
{
	THREAD_OPTION_NO_JOIN = 1,
};
class Fw::ThreadSystem
{
public:
	static bool Startup(Fw::HeapMemory &);
	static void Shutdown();
	static Fw::THREAD_HANDLE Create(void(*)(void *), void *, const char *);
	static Fw::THREAD_HANDLE Create(void(*)(void *), void *, const char *, unsigned long long *);
	static Fw::THREAD_HANDLE Create(void(*)(void *), void *, const char *, const unsigned long);
	static Fw::THREAD_HANDLE Create(void(*)(void *), void *, const char *, unsigned long long *, const unsigned long);
	static void Join(Fw::THREAD_HANDLE);
	static void Exit();
	static Fw::THREAD_HANDLE GetCurrentId();
	static unsigned long ThreadProcAlt(void *);
	class cWork;
private:
	static void CleanupAllThread();
	static Fw::ThreadSystem::cWork * FindEmptyWork();
	static Fw::ThreadSystem::cWork * FindWorkByHandle(Fw::THREAD_HANDLE);
	static Fw::ThreadSystem::cWork * FindWorkByThreadId(unsigned long long);
	static Fw::ThreadSystem::cWork * GetCurrentWork();
	static bool BeginWork(Fw::ThreadSystem::cWork *, const char *);
	static bool BeginWorkNoJoin(Fw::ThreadSystem::cWork *, const char *);
	static void ReleaseWork(Fw::ThreadSystem::cWork *);
	static Fw::cMutex m_Mutex; // 0xFFFFFFFFFFFFFFFF
	static Fw::ThreadSystem::cWork * m_pWork[16]; // 0xFFFFFFFFFFFFFFFF
	static unsigned long m_WorkNum; // 0xFFFFFFFFFFFFFFFF
	static unsigned long m_CycleThreadHandle; // 0xFFFFFFFFFFFFFFFF
	static bool m_AllThreadCleanupFlag; // 0xFFFFFFFFFFFFFFFF
	static void setAffinity(Fw::ThreadSystem::cWork *, unsigned long long *);
};
class Fw::ThreadSystem::cWork
{
public:
	Fw::THREAD_HANDLE m_Handle; // 0x0
	AgPointer<AgThread> m_ThreadId; // 0x8
	void(*m_pFunc)(void *); // 0x18
	void * m_pParam; // 0x20
	cWork(Fw::ThreadSystem::cWork &);
	cWork(const Fw::ThreadSystem::cWork &);
	cWork();
	~cWork();
	Fw::ThreadSystem::cWork & operator=(Fw::ThreadSystem::cWork &);
	Fw::ThreadSystem::cWork & operator=(const Fw::ThreadSystem::cWork &);
};
class AgPointer<AgThread>
{
public:
	AgPointer<AgThread>(const AgReference<AgThread> &);
	AgPointer<AgThread>(AgPointer<AgThread> &);
	AgPointer<AgThread>(const AgPointer<AgThread> &);
	AgPointer<AgThread>(AgThread *);
	AgPointer<AgThread>();
	~AgPointer<AgThread>();
	AgPointer<AgThread> & operator=(AgPointer<AgThread> &);
	AgPointer<AgThread> & operator=(const AgReference<AgThread> &);
	AgPointer<AgThread> & operator=(const AgPointer<AgThread> &);
	AgPointer<AgThread> & operator=(AgThread *);
	bool operator<(const AgPointer<AgThread> &);
	AgThread * operator->();
	AgThread & operator*();
	bool operator==(const AgPointer<AgThread> &);
	bool operator==(AgThread *);
	bool operator!=(const AgPointer<AgThread> &);
	bool operator!=(AgThread *);
	AgThread * getObject();
	void swap(AgPointer<AgThread> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgThread * m_ptr; // 0x8
};