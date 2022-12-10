#pragma once

struct AgShutdownEvent
{
};
class AgProgram :
	AgReferencedObject,
	protected AgIThreadHost
{
public:
	AgProgram(const AgProgram &);
	AgProgram();
	virtual ~AgProgram();
	void run();
	void runAsynchronously();
	void requestShutdown();
	long getShutdownRequested();
	virtual void onExecuteThread();
	virtual void onJoinThread();
	virtual long getThreadIsRunning();
	static AgProgram * getInstance();
protected:
	void onShutdown(const AgShutdownEvent &);
	void onExecuteImpl();
private:
	long m_asynchronous; // 0x10
	long m_shutdownRequested; // 0x14
	AgPointer<AgThread> m_thread; // 0x18
	struct InternalData;
	AgProgram::InternalData * m_internalData; // 0x28
	static AgProgram * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgProgram & operator=(const AgProgram &);
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