#pragma once

class AgIThreadHost
{
public:
	~AgIThreadHost();
	void onExecuteThread();
	void onJoinThread();
	void onDetachThread();
	long getThreadIsRunning();
	AgIThreadHost(const AgIThreadHost &);
	AgIThreadHost();
	AgIThreadHost & operator=(const AgIThreadHost &);
};
AgIThreadHost::~AgIThreadHost(); // 0x1400305A0
enum AgThreadPriority
{
	AgThreadPriority_Highest = 0,
	AgThreadPriority_Lowest = 100,
};
class AgThread :
	AgReferencedObject
{
public:
	static const unsigned long long DefaultStackSize; // 0xFFFFFFFFFFFFFFFF
	static const long DefaultPriority; // 0xFFFFFFFFFFFFFFFF
	enum CreateSuspended
	{
		Suspended = 0,
	};
	AgThread(const AgThread &);
	AgThread(AgThread::CreateSuspended);
	AgThread(AgIThreadHost *, unsigned long long, long, const char *);
	~AgThread();
	void join();
	void detach();
	void start(AgIThreadHost *, unsigned long long, long, const char *);
	void startDetached(AgIThreadHost *, unsigned long long, long, const char *);
	long getIsRunning();
	void setPriority(long);
	unsigned long long getId();
	static void sleep(unsigned long);
	static unsigned long long getCurrentId();
private:
	static unsigned long _onPreExecute(void *);
	void _onExecute();
	long m_started; // 0x10
	AgIThreadHost * m_host; // 0x18
	struct InternalData;
	AgThread::InternalData * m_internalData; // 0x20
public:
	AgThread & operator=(const AgThread &);
};
class AgSimpleThreadHost :
	AgIThreadHost
{
public:
	AgSimpleThreadHost(AgSimpleThreadHost &);
	AgSimpleThreadHost(const AgSimpleThreadHost &);
	AgSimpleThreadHost();
	virtual void onJoinThread();
	virtual long getThreadIsRunning();
	long getThreadIsStopping();
protected:
	volatile long m_abort; // 0x8
	volatile long m_running; // 0xC
public:
	virtual ~AgSimpleThreadHost();
	AgSimpleThreadHost & operator=(AgSimpleThreadHost &);
	AgSimpleThreadHost & operator=(const AgSimpleThreadHost &);
};
void AgSimpleThreadHost::onJoinThread(); // 0x1400305E0
long AgSimpleThreadHost::getThreadIsRunning(); // 0x1400305F0
long AgSimpleThreadHost::getThreadIsStopping(); // 0x140030600