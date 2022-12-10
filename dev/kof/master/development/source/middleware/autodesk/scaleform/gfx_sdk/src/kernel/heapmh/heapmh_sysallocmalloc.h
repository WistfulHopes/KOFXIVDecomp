#pragma once

class Scaleform::SysAllocMalloc :
	Scaleform::SysAllocBase_SingletonSupport<Scaleform::SysAllocMalloc,Scaleform::SysAlloc>
{
public:
	SysAllocMalloc(const Scaleform::SysAllocMalloc &);
	SysAllocMalloc();
	virtual ~SysAllocMalloc();
	virtual void * Alloc(unsigned long long, unsigned long long);
	virtual void Free(void *, unsigned long long, unsigned long long);
	virtual void * Realloc(void *, unsigned long long, unsigned long long, unsigned long long);
	Scaleform::SysAllocMalloc & operator=(const Scaleform::SysAllocMalloc &);
};
class Scaleform::SysAllocBase_SingletonSupport<Scaleform::SysAllocMalloc,Scaleform::SysAlloc> :
	Scaleform::SysAlloc
{
	struct SysAllocContainer;
private:
	Scaleform::SysAllocBase_SingletonSupport<Scaleform::SysAllocMalloc,Scaleform::SysAlloc>::SysAllocContainer * pContainer; // 0x8
public:
	SysAllocBase_SingletonSupport<Scaleform::SysAllocMalloc,Scaleform::SysAlloc>(Scaleform::SysAllocBase_SingletonSupport<Scaleform::SysAllocMalloc,Scaleform::SysAlloc> &);
	SysAllocBase_SingletonSupport<Scaleform::SysAllocMalloc,Scaleform::SysAlloc>(const Scaleform::SysAllocBase_SingletonSupport<Scaleform::SysAllocMalloc,Scaleform::SysAlloc> &);
	SysAllocBase_SingletonSupport<Scaleform::SysAllocMalloc,Scaleform::SysAlloc>();
	static Scaleform::SysAlloc * InitSystemSingleton();
protected:
	virtual bool shutdownHeapEngine();
public:
	virtual ~SysAllocBase_SingletonSupport<Scaleform::SysAllocMalloc,Scaleform::SysAlloc>();
	Scaleform::SysAllocBase_SingletonSupport<Scaleform::SysAllocMalloc,Scaleform::SysAlloc> & operator=(Scaleform::SysAllocBase_SingletonSupport<Scaleform::SysAllocMalloc,Scaleform::SysAlloc> &);
	Scaleform::SysAllocBase_SingletonSupport<Scaleform::SysAllocMalloc,Scaleform::SysAlloc> & operator=(const Scaleform::SysAllocBase_SingletonSupport<Scaleform::SysAllocMalloc,Scaleform::SysAlloc> &);
};