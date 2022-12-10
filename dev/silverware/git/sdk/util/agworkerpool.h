#pragma once

class AgWorkerPool :
	AgSingleton<AgWorkerPool>
{
protected:
	AgWorkerPool();
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	void initThreadPool();
public:
	void update();
	unsigned long getUniqueGroupID();
	AgJobCompletion pushJob(AgThreadPool::Job *);
	void waitUntilEmpty();
	void waitForJob(unsigned long);
	void waitForGroup(unsigned long);
	void waitForSpace(unsigned long);
	AgPointer<AgService> getService();
	void post(AgServiceCommandBase *);
private:
	AgThreadPool m_threadPool; // 0x8
	AgPointer<AgService> m_service; // 0xF0
public:
	virtual ~AgWorkerPool();
};
class AgSingleton<AgWorkerPool>
{
protected:
	~AgSingleton<AgWorkerPool>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgWorkerPool & getInstance();
	static long hasInstance();
private:
	static AgWorkerPool * createSingleton();
	static void destroySingleton(AgWorkerPool *);
	static AgSingleton<AgWorkerPool> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgWorkerPool>(const AgSingleton<AgWorkerPool> &);
	AgSingleton<AgWorkerPool>();
	AgSingleton<AgWorkerPool> & operator=(const AgSingleton<AgWorkerPool> &);
};
AgWorkerPool::AgWorkerPool(); // 0x140659060
long AgWorkerPool::onSingletonInit(); // 0x1400482A0
long AgWorkerPool::onSingletonExit(); // 0x140659C10
AgPointer<AgService> AgWorkerPool::getService(); // 0x1406587B0