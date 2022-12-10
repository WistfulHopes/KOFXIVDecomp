#pragma once

class Fw::ResourceManager
{
public:
	static bool Startup(Fw::HeapMemory &, unsigned long);
	static void Shutdown();
	static long SetResource(void *, const char *);
	static void * GetResource(long);
	static void UnsetResource(long);
	static bool SetResourceByName(void *, const char *, bool);
	static void * GetResourceByName(const char *);
	static void UnsetResourceByName(void *);
	class Work;
private:
	static Fw::ResourceManager::Work * m_pWork; // 0xFFFFFFFFFFFFFFFF
	static unsigned long m_MaxNum; // 0xFFFFFFFFFFFFFFFF
	static Fw::ResourceManager::Work * getEmptyWork(long *);
};
class Fw::ResourceManager::Work
{
public:
	void * m_pData; // 0x0
	char m_Name[255]; // 0x8
	void set(void *, const char *);
	void clear();
};