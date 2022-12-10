#pragma once

class Fw::cMutex
{
public:
	cMutex();
	~cMutex();
	bool Startup();
	void Shutdown();
	void ClearInitializeFlag();
	void Lock();
	void Unlock();
private:
	AgMutex m_Mutex; // 0x0
	bool m_InitializeFlag; // 0x28
};
class Fw::cMutexProxy
{
public:
	cMutexProxy(Fw::cMutex &);
	~cMutexProxy();
private:
	Fw::cMutex & m_mx; // 0x0
};
Fw::cMutexProxy::~cMutexProxy(); // 0x140095090