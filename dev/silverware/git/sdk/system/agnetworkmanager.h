#pragma once

struct AgNetworkOnlineEvent
{
};
struct AgNetworkOfflineEvent
{
};
class AgSingleton<AgNetworkManager>
{
protected:
	~AgSingleton<AgNetworkManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgNetworkManager & getInstance();
	static long hasInstance();
private:
	static AgNetworkManager * createSingleton();
	static void destroySingleton(AgNetworkManager *);
	static AgSingleton<AgNetworkManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgNetworkManager>(const AgSingleton<AgNetworkManager> &);
	AgSingleton<AgNetworkManager>();
	AgSingleton<AgNetworkManager> & operator=(const AgSingleton<AgNetworkManager> &);
};
class AgNetworkManager :
	AgSingleton<AgNetworkManager>
{
protected:
	AgNetworkManager();
public:
	AgEventDispatcher<AgNetworkOnlineEvent> Online; // 0x8
	AgEventDispatcher<AgNetworkOfflineEvent> Offline; // 0x48
	long getIsOnline();
	static AgNetworkManager * createSingleton();
	void update();
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	void onOnline();
	void onOffline();
private:
	long m_isOnline; // 0x88
public:
	virtual ~AgNetworkManager();
};
class AgEventDispatcher<AgNetworkOnlineEvent> :
	AgEventDispatcherBase<AgNetworkOnlineEvent>
{
public:
	void invoke(const AgNetworkOnlineEvent &);
	void operator()(const AgNetworkOnlineEvent &);
	AgEventDispatcher<AgNetworkOnlineEvent>();
	~AgEventDispatcher<AgNetworkOnlineEvent>();
};
class AgEventDispatcher<AgNetworkOfflineEvent> :
	AgEventDispatcherBase<AgNetworkOfflineEvent>
{
public:
	void invoke(const AgNetworkOfflineEvent &);
	void operator()(const AgNetworkOfflineEvent &);
	AgEventDispatcher<AgNetworkOfflineEvent>();
	~AgEventDispatcher<AgNetworkOfflineEvent>();
};