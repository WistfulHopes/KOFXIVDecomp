#pragma once

struct AgAchievementPlatformData
{
	AgString m_achievementId; // 0x0
	AgAchievementPlatformData(AgAchievementPlatformData &);
	AgAchievementPlatformData(const AgAchievementPlatformData &);
	AgAchievementPlatformData();
	~AgAchievementPlatformData();
	AgAchievementPlatformData & operator=(AgAchievementPlatformData &);
	AgAchievementPlatformData & operator=(const AgAchievementPlatformData &);
};
class AgSingleton<AgAchievementsManager>
{
protected:
	~AgSingleton<AgAchievementsManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgAchievementsManager & getInstance();
	static long hasInstance();
private:
	static AgAchievementsManager * createSingleton();
	static void destroySingleton(AgAchievementsManager *);
	static AgSingleton<AgAchievementsManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgAchievementsManager>(const AgSingleton<AgAchievementsManager> &);
	AgSingleton<AgAchievementsManager>();
	AgSingleton<AgAchievementsManager> & operator=(const AgSingleton<AgAchievementsManager> &);
};
class AgAchievementsManager :
	AgSingleton<AgAchievementsManager>,
	AgIThreadHost
{
public:
	AgAchievementsManager();
	virtual ~AgAchievementsManager();
	void unlock(AgAchievementPlatformData *);
	virtual void onExecuteThread();
	virtual void onJoinThread();
	virtual long getThreadIsRunning();
	void waitInitialized();
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
private:
	long _internalUnlock(const AgAchievementPlatformData &);
	static void _internalUnlockSteam(AgAchievementPlatformData);
	AgQueue<AgAchievementPlatformData> m_unlockQueue; // 0x10
	AgPointer<AgThread> m_workerThread; // 0x38
	volatile long m_shutdownThread; // 0x48
};
class AgQueue<AgAchievementPlatformData>
{
	class TRingBuffer;
private:
	AgAlignedPointer<AgRingBufferLocked<AgAchievementPlatformData>,1> m_buffer; // 0x0
	AgSemaphore m_sem; // 0x18
public:
	AgQueue<AgAchievementPlatformData>(AgAchievementPlatformData *, unsigned long);
	AgQueue<AgAchievementPlatformData>(unsigned long);
	AgQueue<AgAchievementPlatformData>();
private:
	AgQueue<AgAchievementPlatformData>(const AgQueue<AgAchievementPlatformData> &);
	AgQueue<AgAchievementPlatformData> & operator=(const AgQueue<AgAchievementPlatformData> &);
public:
	~AgQueue<AgAchievementPlatformData>();
	void init(AgAchievementPlatformData *, unsigned long);
	void init(unsigned long);
	void free();
	void abort();
	long aborted();
	long empty();
	unsigned long used();
	unsigned long capacity();
	unsigned long available();
	long push(AgAchievementPlatformData *, unsigned long);
	long push(AgAchievementPlatformData);
	long pop(AgAchievementPlatformData *, unsigned long, long);
	long pop(AgAchievementPlatformData &, long);
	long peek(AgAchievementPlatformData *, unsigned long);
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