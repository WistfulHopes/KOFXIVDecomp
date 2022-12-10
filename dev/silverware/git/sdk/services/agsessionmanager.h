#pragma once

class AgSingleton<AgSessionManager>
{
protected:
	~AgSingleton<AgSessionManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgSessionManager & getInstance();
	static long hasInstance();
private:
	static AgSessionManager * createSingleton();
	static void destroySingleton(AgSessionManager *);
	static AgSingleton<AgSessionManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgSessionManager>(const AgSingleton<AgSessionManager> &);
	AgSingleton<AgSessionManager>();
	AgSingleton<AgSessionManager> & operator=(const AgSingleton<AgSessionManager> &);
};
class AgSessionManager :
	AgSingleton<AgSessionManager>
{
public:
	AgSessionManager();
	AgPointer<AgSession> getPrimarySession();
	static void setConfig(void *);
	static void * getConfig();
	AgAsyncEventDispatcher<AgPointer<AgSession> > InvalidSession; // 0x8
protected:
	AgPointer<AgSession> m_primarySession; // 0x88
	static void * s_config; // 0xFFFFFFFFFFFFFFFF
public:
	static AgSessionManager * createSingleton();
	void update();
	AgPointer<AgSession> createSession(const AgString &, long);
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
public:
	virtual ~AgSessionManager();
};
class AgAsyncEventDispatcher<AgPointer<AgSession> > :
	AgEventDispatcherBase<AgPointer<AgSession> >
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgPointer<AgSession> &);
	void invoke(const AgPointer<AgSession> &);
	void operator()(AgPointer<AgSession> &);
	void operator()(const AgPointer<AgSession> &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgPointer<AgSession> >();
	~AgAsyncEventDispatcher<AgPointer<AgSession> >();
};