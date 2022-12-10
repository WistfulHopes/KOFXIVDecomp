#pragma once

struct AgActivatedEvent
{
};
struct AgDeactivatedEvent
{
};
struct AgSuspendingEvent
{
};
struct AgResumingEvent
{
};
struct AgShutdownEvent
{
};
struct AgDisplayChangedEvent
{
};
enum AgApi
{
	AgApi_Platform = 0,
	AgApi_Direct3d9 = 1,
	AgApi_GL_SDL2 = 2,
};
enum AgWindowMode
{
	AgWindowMode_Windowed = 0,
	AgWindowMode_Fullscreen = 1,
	AgWindowMode_BorderlessWindowed = 2,
	kNumAgWindowModes = 3,
};
class AgSystemManager :
	AgSingleton<AgSystemManager>
{
protected:
	AgSystemManager();
public:
	long run();
	AgAsyncEventDispatcher<AgActivatedEvent> Activated; // 0x8
	AgAsyncEventDispatcher<AgDeactivatedEvent> Deactivated; // 0x88
	AgAsyncEventDispatcher<AgSuspendingEvent> Suspending; // 0x108
	AgAsyncEventDispatcher<AgResumingEvent> Resuming; // 0x188
	AgAsyncEventDispatcher<AgShutdownEvent> Shutdown; // 0x208
	AgAsyncEventDispatcher<AgDisplayChangedEvent> DisplayChanged; // 0x288
	static AgSystemManager * createSingleton();
	static AgPCSystemConfig & getSystemConfig();
	static AgPCSystemInfo & getSystemInfo();
	static std::vector<AgString,std::allocator<AgString> > & getCommandArguments();
	static AgApi getApi();
	static void loadSystemConfigs();
	static void parseCommandArguments(long, char * *);
	static void parseCommandArguments(const AgString &);
	unsigned long long getProcessTime();
	void update(double);
	void createWindow(const AgWindowConfig &);
	void createDisplay();
	void setWindowProperties(unsigned long, unsigned long, long, AgWindowMode);
	AgSilverWareDebugChannel & getChannel();
	unsigned long long getVideoMemorySize();
protected:
	static AgPCSystemConfig ms_config; // 0xFFFFFFFFFFFFFFFF
	static AgPCSystemInfo ms_systemInfo; // 0xFFFFFFFFFFFFFFFF
	static std::vector<AgString,std::allocator<AgString> > ms_commandArguments; // 0xFFFFFFFFFFFFFFFF
	bool m_running; // 0x308
	AgSilverWareDebugChannel m_channel; // 0x310
	double m_startTime; // 0x348
	double m_totalSuspendedTime; // 0x350
	double m_suspendTime; // 0x358
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	void onActivated();
	void onDeactivated();
	void onSuspending();
	void onResuming();
	void onShutdown();
	void onDisplayChanged();
public:
	virtual ~AgSystemManager();
};
class AgSingleton<AgSystemManager>
{
protected:
	~AgSingleton<AgSystemManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgSystemManager & getInstance();
	static long hasInstance();
private:
	static AgSystemManager * createSingleton();
	static void destroySingleton(AgSystemManager *);
	static AgSingleton<AgSystemManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgSystemManager>(const AgSingleton<AgSystemManager> &);
	AgSingleton<AgSystemManager>();
	AgSingleton<AgSystemManager> & operator=(const AgSingleton<AgSystemManager> &);
};
class AgAsyncEventDispatcher<AgActivatedEvent> :
	AgEventDispatcherBase<AgActivatedEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgActivatedEvent &);
	void invoke(const AgActivatedEvent &);
	void operator()(AgActivatedEvent &);
	void operator()(const AgActivatedEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgActivatedEvent,std::allocator<AgActivatedEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgActivatedEvent>();
	~AgAsyncEventDispatcher<AgActivatedEvent>();
};
class AgAsyncEventDispatcher<AgDeactivatedEvent> :
	AgEventDispatcherBase<AgDeactivatedEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgDeactivatedEvent &);
	void invoke(const AgDeactivatedEvent &);
	void operator()(AgDeactivatedEvent &);
	void operator()(const AgDeactivatedEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgDeactivatedEvent>();
	~AgAsyncEventDispatcher<AgDeactivatedEvent>();
};
class AgAsyncEventDispatcher<AgSuspendingEvent> :
	AgEventDispatcherBase<AgSuspendingEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgSuspendingEvent &);
	void invoke(const AgSuspendingEvent &);
	void operator()(AgSuspendingEvent &);
	void operator()(const AgSuspendingEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgSuspendingEvent>();
	~AgAsyncEventDispatcher<AgSuspendingEvent>();
};
class AgAsyncEventDispatcher<AgResumingEvent> :
	AgEventDispatcherBase<AgResumingEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgResumingEvent &);
	void invoke(const AgResumingEvent &);
	void operator()(AgResumingEvent &);
	void operator()(const AgResumingEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgResumingEvent,std::allocator<AgResumingEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgResumingEvent>();
	~AgAsyncEventDispatcher<AgResumingEvent>();
};
class AgAsyncEventDispatcher<AgShutdownEvent> :
	AgEventDispatcherBase<AgShutdownEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgShutdownEvent &);
	void invoke(const AgShutdownEvent &);
	void operator()(AgShutdownEvent &);
	void operator()(const AgShutdownEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgShutdownEvent,std::allocator<AgShutdownEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgShutdownEvent>();
	~AgAsyncEventDispatcher<AgShutdownEvent>();
};
class AgAsyncEventDispatcher<AgDisplayChangedEvent> :
	AgEventDispatcherBase<AgDisplayChangedEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgDisplayChangedEvent &);
	void invoke(const AgDisplayChangedEvent &);
	void operator()(AgDisplayChangedEvent &);
	void operator()(const AgDisplayChangedEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgDisplayChangedEvent>();
	~AgAsyncEventDispatcher<AgDisplayChangedEvent>();
};
void std::_Vector_alloc<std::_Vec_base_types<AgString,std::allocator<AgString> > >::_Orphan_all(); // 0x14002E7C0
unsigned long long AgSystemManager::getVideoMemorySize(); // 0x1400470F0