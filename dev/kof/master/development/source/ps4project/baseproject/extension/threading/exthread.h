#pragma once

class extension::ExThread
{
public:
	ExThread();
private:
	ExThread(const extension::ExThread &);
	extension::ExThread & operator=(const extension::ExThread &);
public:
	~ExThread();
	enum ThreadState
	{
		ThreadState_Absence = 0,
		ThreadState_Running = 1,
		ThreadState_Dead = 2,
	};
	enum Priority
	{
		Priority_AboveHigher = 0,
		Priority_Higher = 1,
		Priority_Same = 2,
		Priority_Lower = 3,
		Priority_BelowLower = 4,
	};
	enum SchedPolicy
	{
		SchedPolicy_FIFO = 0,
		SchedPolicy_RR = 1,
	};
	struct StartParam;
	class Runnable;
	extension::ExThread::ThreadState status();
	void start(const extension::ExThread::StartParam &, extension::ExThread::Runnable *);
	long join();
	void requestForExit();
	struct CurrentThread;
protected:
	long run();
private:
	static void * StaticRunPThread(void *);
	void privateRun();
	enum StateFlags
	{
		StateFlags_Started = 1,
		StateFlags_Dead = 2,
		StateFlags_ExitRequested = 256,
	};
	extension::AtomicInt m_stateFlags; // 0x8
	extension::ExThread::Runnable * m_runnable; // 0x10
	long m_exitCode; // 0x18
	AgThread m_agThread; // 0x20
};
struct extension::ExThread::StartParam
{
	static const unsigned long long Default_Stack_Size; // 0xFFFFFFFFFFFFFFFF
	unsigned long long stackSize; // 0x0
	extension::ExThread::Priority priority; // 0x8
	extension::ExThread::SchedPolicy schedPolicy; // 0xC
	const char * name; // 0x10
	StartParam();
};
struct extension::ExThread::CurrentThread
{
	static void Sleep(long);
	static void Exit(long);
	static bool IsExitRequested();
};
class extension::ExThread::Runnable :
	AgSimpleThreadHost
{
public:
	virtual void onExecuteThread();
	virtual ~Runnable();
	struct CurrentThread;
	long run();
	Runnable(const extension::ExThread::Runnable &);
	Runnable();
	extension::ExThread::Runnable & operator=(const extension::ExThread::Runnable &);
};
void extension::ExThread::Runnable::onExecuteThread(); // 0x14014DD80
extension::ExThread::Runnable::~Runnable(); // 0x1400305A0
class std::unique_ptr<extension::ExThread [0],std::default_delete<extension::ExThread [0]> > :
	std::_Unique_ptr_base<extension::ExThread,std::default_delete<extension::ExThread [0]> >
{
	class _Myt;
	class _Mybase;
	typedef extension::ExThread pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::ExThread [0],std::default_delete<extension::ExThread [0]> >(const std::unique_ptr<extension::ExThread [0],std::default_delete<extension::ExThread [0]> > &);
	unique_ptr<extension::ExThread [0],std::default_delete<extension::ExThread [0]> >(void *);
	unique_ptr<extension::ExThread [0],std::default_delete<extension::ExThread [0]> >(std::unique_ptr<extension::ExThread [0],std::default_delete<extension::ExThread [0]> > &);
	unique_ptr<extension::ExThread [0],std::default_delete<extension::ExThread [0]> >();
	std::unique_ptr<extension::ExThread [0],std::default_delete<extension::ExThread [0]> > & operator=(const std::unique_ptr<extension::ExThread [0],std::default_delete<extension::ExThread [0]> > &);
	std::unique_ptr<extension::ExThread [0],std::default_delete<extension::ExThread [0]> > & operator=(void *);
	std::unique_ptr<extension::ExThread [0],std::default_delete<extension::ExThread [0]> > & operator=(std::unique_ptr<extension::ExThread [0],std::default_delete<extension::ExThread [0]> > &);
	void reset(void *);
	void swap(std::unique_ptr<extension::ExThread [0],std::default_delete<extension::ExThread [0]> > &);
	~unique_ptr<extension::ExThread [0],std::default_delete<extension::ExThread [0]> >();
	extension::ExThread & operator[](unsigned long long);
	extension::ExThread * get();
	bool operator bool();
	extension::ExThread * release();
private:
	void _Delete();
};
extension::ExSimpleThreadPool<extension::ExThread>::ExSimpleThreadPool<extension::ExThread>(long count); // 0x140246B50
extension::ExSimpleThreadPool<extension::ExThread>::~ExSimpleThreadPool<extension::ExThread>(); // 0x140246B10
void extension::ExSimpleThreadPool<extension::ExThread>::join(); // 0x140246A90