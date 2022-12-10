#pragma once

class AgDelayedSaveDataMount :
	AgVirtualMount,
	protected AgIThreadHost
{
public:
	AgDelayedSaveDataMount(const AgString &, AgPointer<AgMount>, const AgPath &, AgPointer<AgUser>);
	virtual void onExecuteThread();
	virtual void onJoinThread();
	virtual long getThreadIsRunning();
protected:
	virtual void mount();
	virtual void update();
	virtual void retry(const AgMountErrorEvent &);
	virtual long removeDirectory(const AgPath &);
private:
	void readSaveData();
	void writeSaveData();
	void deleteSaveData();
	AgPointer<AgMount> m_target; // 0x158
	AgPath m_path; // 0x168
	AgCondition m_condition; // 0x178
	AgPointer<AgThread> m_workerThread; // 0x1B0
	volatile long m_running; // 0x1C0
	long m_shouldRead; // 0x1C4
	AgPointer<AgBuffer<AgAllocator<1> > > m_writeBuffer; // 0x1C8
public:
	virtual ~AgDelayedSaveDataMount();
};