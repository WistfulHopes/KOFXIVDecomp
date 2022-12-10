#pragma once

class Scaleform::RefCountImplCore
{
protected:
	volatile long RefCount; // 0x8
public:
	RefCountImplCore(const Scaleform::RefCountImplCore &);
	RefCountImplCore();
	~RefCountImplCore();
	long GetRefCount();
	static void checkInvalidDelete(Scaleform::RefCountImplCore *);
	void operator=(const Scaleform::RefCountImplCore &);
};
class Scaleform::RefCountNTSImplCore
{
protected:
	long RefCount; // 0x8
public:
	RefCountNTSImplCore(const Scaleform::RefCountNTSImplCore &);
	RefCountNTSImplCore();
	~RefCountNTSImplCore();
	long GetRefCount();
	static void checkInvalidDelete(Scaleform::RefCountNTSImplCore *);
	void operator=(const Scaleform::RefCountNTSImplCore &);
};
class Scaleform::RefCountImpl :
	Scaleform::RefCountImplCore
{
public:
	void AddRef();
	void Release();
	RefCountImpl(Scaleform::RefCountImpl &);
	RefCountImpl(const Scaleform::RefCountImpl &);
	RefCountImpl();
	virtual ~RefCountImpl();
	Scaleform::RefCountImpl & operator=(Scaleform::RefCountImpl &);
	Scaleform::RefCountImpl & operator=(const Scaleform::RefCountImpl &);
};
class Scaleform::RefCountVImpl :
	Scaleform::RefCountImplCore
{
public:
	void AddRef();
	void Release();
	RefCountVImpl(Scaleform::RefCountVImpl &);
	RefCountVImpl(const Scaleform::RefCountVImpl &);
	RefCountVImpl();
	virtual ~RefCountVImpl();
	Scaleform::RefCountVImpl & operator=(Scaleform::RefCountVImpl &);
	Scaleform::RefCountVImpl & operator=(const Scaleform::RefCountVImpl &);
};
class Scaleform::RefCountNTSImpl :
	Scaleform::RefCountNTSImplCore
{
public:
	void AddRef();
	void Release();
	RefCountNTSImpl(Scaleform::RefCountNTSImpl &);
	RefCountNTSImpl(const Scaleform::RefCountNTSImpl &);
	RefCountNTSImpl();
	virtual ~RefCountNTSImpl();
	Scaleform::RefCountNTSImpl & operator=(Scaleform::RefCountNTSImpl &);
	Scaleform::RefCountNTSImpl & operator=(const Scaleform::RefCountNTSImpl &);
};
class Scaleform::RefCountWeakSupportImpl :
	Scaleform::RefCountNTSImpl
{
protected:
	Scaleform::WeakPtrProxy * pWeakProxy; // 0x10
public:
	RefCountWeakSupportImpl(const Scaleform::RefCountWeakSupportImpl &);
	RefCountWeakSupportImpl();
	virtual ~RefCountWeakSupportImpl();
	Scaleform::WeakPtrProxy * CreateWeakProxy();
	Scaleform::RefCountWeakSupportImpl & operator=(const Scaleform::RefCountWeakSupportImpl &);
};
void Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::operator delete(void * p); // 0x140270F10
void Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2>::operator delete(void * p); // 0x140270F10
void Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::operator delete(void * p); // 0x140270F10
void * Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74>::operator new(unsigned long long sz, Scaleform::MemAddressStub * adr); // 0x1404567C0
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,2>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,2>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,2>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,2>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,327>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,327>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,327>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,327>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,75> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,75>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,75> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,75>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,75> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,75>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,75>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,75> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,75> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,75> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,75> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,74> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,74>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,74> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,74>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,74> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,74>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,74>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,74> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,74> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,74> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,74> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,324> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,324>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,324> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,324>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,324> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,324>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,324>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,324> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,324> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,324> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,324> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,257> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,257>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,257> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,257>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,257> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,257>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,257>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,257> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,257> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,257> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,257> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,73> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,73>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,73> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,73>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,73> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,73>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,73>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,73> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,73> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,73> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,73> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,65>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,65>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,65>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,65>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,72>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,72>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,72>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,72>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,71> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,71>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,71> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,71>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,71> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,71>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,71>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,71> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,71> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,71> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,71> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,67>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,67>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,67>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,67>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,68>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,68>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,68>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,68>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,69> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,69>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,69> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,69>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,69> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,69>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,69>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,69> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,69> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,69> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,69> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,264> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,264>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,264> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,264>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,264> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,264>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,264>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,264> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,264> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,264> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,264> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,513> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,513>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,513> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,513>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,513> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,513>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,513>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,513> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,513> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,513> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,513> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,323> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,323>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,323> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,323>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,323> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,323>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,323>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,323> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,323> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,323> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,323> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,258> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,258>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,258> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,258>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,258> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,258>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,258>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,258> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,258> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,258> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,258> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,261> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,261>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,261> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,261>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,261> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,261>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,261>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,261> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,261> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,261> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,261> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,263> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,263>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,263> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,263>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,263> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,263>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,263>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,263> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,263> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,263> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,263> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,328> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,328>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,328> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,328>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,328> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,328>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,328>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,328> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,328> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,328> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,328> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,337> :
	Scaleform::RefCountImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountImpl,337>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,337> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,337>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,337> &);
	RefCountBaseStatImpl<Scaleform::RefCountImpl,337>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountImpl,337>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,337> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,337> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,337> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,337> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountVImpl,3> :
	Scaleform::RefCountVImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountVImpl,3>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountVImpl,3> &);
	RefCountBaseStatImpl<Scaleform::RefCountVImpl,3>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountVImpl,3> &);
	RefCountBaseStatImpl<Scaleform::RefCountVImpl,3>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountVImpl,3>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountVImpl,3> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountVImpl,3> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountVImpl,3> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountVImpl,3> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,71> :
	Scaleform::RefCountNTSImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,71>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,71> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,71>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,71> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,71>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,71>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,71> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,71> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,71> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,71> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74> :
	Scaleform::RefCountNTSImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67> :
	Scaleform::RefCountNTSImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,75> :
	Scaleform::RefCountNTSImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,75>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,75> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,75>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,75> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,75>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,75>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,75> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,75> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,75> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,75> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2> :
	Scaleform::RefCountNTSImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,325> :
	Scaleform::RefCountNTSImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,325>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,325> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,325>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,325> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,325>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,325>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,325> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,325> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,325> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,325> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,261> :
	Scaleform::RefCountNTSImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,261>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,261> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,261>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,261> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,261>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,261>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,261> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,261> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,261> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,261> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,327> :
	Scaleform::RefCountNTSImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,327>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,327> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,327>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,327> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,327>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,327>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,327> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,327> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,327> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,327> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,322> :
	Scaleform::RefCountNTSImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,322>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,322> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,322>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,322> &);
	RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,322>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,322>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,322> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,322> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,322> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,322> &);
};
class Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322> :
	Scaleform::RefCountWeakSupportImpl
{
public:
	RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322> &);
	RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322> &);
	RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	virtual ~RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>();
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322> & operator=(Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322> &);
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322> & operator=(const Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322> &);
};
enum Scaleform::PickType
{
	PickValue = 0,
};
class Scaleform::Pickable<extension::gfxi_detail::CustomFileOpener>
{
public:
	Pickable<extension::gfxi_detail::CustomFileOpener>(extension::gfxi_detail::CustomFileOpener *, Scaleform::PickType);
	Pickable<extension::gfxi_detail::CustomFileOpener>(extension::gfxi_detail::CustomFileOpener *);
	Pickable<extension::gfxi_detail::CustomFileOpener>();
	Scaleform::Pickable<extension::gfxi_detail::CustomFileOpener> & operator=(const Scaleform::Pickable<extension::gfxi_detail::CustomFileOpener> &);
	extension::gfxi_detail::CustomFileOpener * GetPtr();
	extension::gfxi_detail::CustomFileOpener * operator->();
	extension::gfxi_detail::CustomFileOpener & operator*();
private:
	extension::gfxi_detail::CustomFileOpener * pV; // 0x0
};
class Scaleform::Pickable<extension::gfxi_detail::CustomPS4FontProvider>
{
public:
	Pickable<extension::gfxi_detail::CustomPS4FontProvider>(extension::gfxi_detail::CustomPS4FontProvider *, Scaleform::PickType);
	Pickable<extension::gfxi_detail::CustomPS4FontProvider>(extension::gfxi_detail::CustomPS4FontProvider *);
	Pickable<extension::gfxi_detail::CustomPS4FontProvider>();
	Scaleform::Pickable<extension::gfxi_detail::CustomPS4FontProvider> & operator=(const Scaleform::Pickable<extension::gfxi_detail::CustomPS4FontProvider> &);
	extension::gfxi_detail::CustomPS4FontProvider * GetPtr();
	extension::gfxi_detail::CustomPS4FontProvider * operator->();
	extension::gfxi_detail::CustomPS4FontProvider & operator*();
private:
	extension::gfxi_detail::CustomPS4FontProvider * pV; // 0x0
};
class Scaleform::Pickable<extension::gfxi_detail::CustomImageCreator>
{
public:
	Pickable<extension::gfxi_detail::CustomImageCreator>(extension::gfxi_detail::CustomImageCreator *, Scaleform::PickType);
	Pickable<extension::gfxi_detail::CustomImageCreator>(extension::gfxi_detail::CustomImageCreator *);
	Pickable<extension::gfxi_detail::CustomImageCreator>();
	Scaleform::Pickable<extension::gfxi_detail::CustomImageCreator> & operator=(const Scaleform::Pickable<extension::gfxi_detail::CustomImageCreator> &);
	extension::gfxi_detail::CustomImageCreator * GetPtr();
	extension::gfxi_detail::CustomImageCreator * operator->();
	extension::gfxi_detail::CustomImageCreator & operator*();
private:
	extension::gfxi_detail::CustomImageCreator * pV; // 0x0
};
class Scaleform::Pickable<extension::gfxi_detail::CustomURLBuilder>
{
public:
	Pickable<extension::gfxi_detail::CustomURLBuilder>(extension::gfxi_detail::CustomURLBuilder *, Scaleform::PickType);
	Pickable<extension::gfxi_detail::CustomURLBuilder>(extension::gfxi_detail::CustomURLBuilder *);
	Pickable<extension::gfxi_detail::CustomURLBuilder>();
	Scaleform::Pickable<extension::gfxi_detail::CustomURLBuilder> & operator=(const Scaleform::Pickable<extension::gfxi_detail::CustomURLBuilder> &);
	extension::gfxi_detail::CustomURLBuilder * GetPtr();
	extension::gfxi_detail::CustomURLBuilder * operator->();
	extension::gfxi_detail::CustomURLBuilder & operator*();
private:
	extension::gfxi_detail::CustomURLBuilder * pV; // 0x0
};
class Scaleform::Pickable<extension::gfxi_detail::CustomLog>
{
public:
	Pickable<extension::gfxi_detail::CustomLog>(extension::gfxi_detail::CustomLog *, Scaleform::PickType);
	Pickable<extension::gfxi_detail::CustomLog>(extension::gfxi_detail::CustomLog *);
	Pickable<extension::gfxi_detail::CustomLog>();
	Scaleform::Pickable<extension::gfxi_detail::CustomLog> & operator=(const Scaleform::Pickable<extension::gfxi_detail::CustomLog> &);
	extension::gfxi_detail::CustomLog * GetPtr();
	extension::gfxi_detail::CustomLog * operator->();
	extension::gfxi_detail::CustomLog & operator*();
private:
	extension::gfxi_detail::CustomLog * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::AS3::UserDefinedFunction>
{
public:
	Pickable<Scaleform::GFx::AS3::UserDefinedFunction>(Scaleform::GFx::AS3::UserDefinedFunction *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::UserDefinedFunction>(Scaleform::GFx::AS3::UserDefinedFunction *);
	Pickable<Scaleform::GFx::AS3::UserDefinedFunction>();
	Scaleform::Pickable<Scaleform::GFx::AS3::UserDefinedFunction> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::UserDefinedFunction> &);
	Scaleform::GFx::AS3::UserDefinedFunction * GetPtr();
	Scaleform::GFx::AS3::UserDefinedFunction * operator->();
	Scaleform::GFx::AS3::UserDefinedFunction & operator*();
private:
	Scaleform::GFx::AS3::UserDefinedFunction * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Waitable::HandlerArray>
{
public:
	Pickable<Scaleform::Waitable::HandlerArray>(Scaleform::Waitable::HandlerArray *, Scaleform::PickType);
	Pickable<Scaleform::Waitable::HandlerArray>(Scaleform::Waitable::HandlerArray *);
	Pickable<Scaleform::Waitable::HandlerArray>();
	Scaleform::Pickable<Scaleform::Waitable::HandlerArray> & operator=(const Scaleform::Pickable<Scaleform::Waitable::HandlerArray> &);
	Scaleform::Waitable::HandlerArray * GetPtr();
	Scaleform::Waitable::HandlerArray * operator->();
	Scaleform::Waitable::HandlerArray & operator*();
private:
	Scaleform::Waitable::HandlerArray * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::DashArray>
{
public:
	Pickable<Scaleform::Render::DashArray>(Scaleform::Render::DashArray *, Scaleform::PickType);
	Pickable<Scaleform::Render::DashArray>(Scaleform::Render::DashArray *);
	Pickable<Scaleform::Render::DashArray>();
	Scaleform::Pickable<Scaleform::Render::DashArray> & operator=(const Scaleform::Pickable<Scaleform::Render::DashArray> &);
	Scaleform::Render::DashArray * GetPtr();
	Scaleform::Render::DashArray * operator->();
	Scaleform::Render::DashArray & operator*();
private:
	Scaleform::Render::DashArray * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::DepthStencilBuffer>
{
public:
	Pickable<Scaleform::Render::DepthStencilBuffer>(Scaleform::Render::DepthStencilBuffer *, Scaleform::PickType);
	Pickable<Scaleform::Render::DepthStencilBuffer>(Scaleform::Render::DepthStencilBuffer *);
	Pickable<Scaleform::Render::DepthStencilBuffer>();
	Scaleform::Pickable<Scaleform::Render::DepthStencilBuffer> & operator=(const Scaleform::Pickable<Scaleform::Render::DepthStencilBuffer> &);
	Scaleform::Render::DepthStencilBuffer * GetPtr();
	Scaleform::Render::DepthStencilBuffer * operator->();
	Scaleform::Render::DepthStencilBuffer & operator*();
private:
	Scaleform::Render::DepthStencilBuffer * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::VirtualKeyboardInterface>
{
public:
	Pickable<Scaleform::GFx::VirtualKeyboardInterface>(Scaleform::GFx::VirtualKeyboardInterface *, Scaleform::PickType);
	Pickable<Scaleform::GFx::VirtualKeyboardInterface>(Scaleform::GFx::VirtualKeyboardInterface *);
	Pickable<Scaleform::GFx::VirtualKeyboardInterface>();
	Scaleform::Pickable<Scaleform::GFx::VirtualKeyboardInterface> & operator=(const Scaleform::Pickable<Scaleform::GFx::VirtualKeyboardInterface> &);
	Scaleform::GFx::VirtualKeyboardInterface * GetPtr();
	Scaleform::GFx::VirtualKeyboardInterface * operator->();
	Scaleform::GFx::VirtualKeyboardInterface & operator*();
private:
	Scaleform::GFx::VirtualKeyboardInterface * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Text::HTMLImageTagDesc>
{
public:
	Pickable<Scaleform::Render::Text::HTMLImageTagDesc>(Scaleform::Render::Text::HTMLImageTagDesc *, Scaleform::PickType);
	Pickable<Scaleform::Render::Text::HTMLImageTagDesc>(Scaleform::Render::Text::HTMLImageTagDesc *);
	Pickable<Scaleform::Render::Text::HTMLImageTagDesc>();
	Scaleform::Pickable<Scaleform::Render::Text::HTMLImageTagDesc> & operator=(const Scaleform::Pickable<Scaleform::Render::Text::HTMLImageTagDesc> &);
	Scaleform::Render::Text::HTMLImageTagDesc * GetPtr();
	Scaleform::Render::Text::HTMLImageTagDesc * operator->();
	Scaleform::Render::Text::HTMLImageTagDesc & operator*();
private:
	Scaleform::Render::Text::HTMLImageTagDesc * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Texture>
{
public:
	Pickable<Scaleform::Render::Texture>(Scaleform::Render::Texture *, Scaleform::PickType);
	Pickable<Scaleform::Render::Texture>(Scaleform::Render::Texture *);
	Pickable<Scaleform::Render::Texture>();
	Scaleform::Pickable<Scaleform::Render::Texture> & operator=(const Scaleform::Pickable<Scaleform::Render::Texture> &);
	Scaleform::Render::Texture * GetPtr();
	Scaleform::Render::Texture * operator->();
	Scaleform::Render::Texture & operator*();
private:
	Scaleform::Render::Texture * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::TestStream>
{
public:
	Pickable<Scaleform::GFx::TestStream>(Scaleform::GFx::TestStream *, Scaleform::PickType);
	Pickable<Scaleform::GFx::TestStream>(Scaleform::GFx::TestStream *);
	Pickable<Scaleform::GFx::TestStream>();
	Scaleform::Pickable<Scaleform::GFx::TestStream> & operator=(const Scaleform::Pickable<Scaleform::GFx::TestStream> &);
	Scaleform::GFx::TestStream * GetPtr();
	Scaleform::GFx::TestStream * operator->();
	Scaleform::GFx::TestStream & operator*();
private:
	Scaleform::GFx::TestStream * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::MorphShapeData>
{
public:
	Pickable<Scaleform::Render::MorphShapeData>(Scaleform::Render::MorphShapeData *, Scaleform::PickType);
	Pickable<Scaleform::Render::MorphShapeData>(Scaleform::Render::MorphShapeData *);
	Pickable<Scaleform::Render::MorphShapeData>();
	Scaleform::Pickable<Scaleform::Render::MorphShapeData> & operator=(const Scaleform::Pickable<Scaleform::Render::MorphShapeData> &);
	Scaleform::Render::MorphShapeData * GetPtr();
	Scaleform::Render::MorphShapeData * operator->();
	Scaleform::Render::MorphShapeData & operator*();
private:
	Scaleform::Render::MorphShapeData * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::FontCompactorParams>
{
public:
	Pickable<Scaleform::GFx::FontCompactorParams>(Scaleform::GFx::FontCompactorParams *, Scaleform::PickType);
	Pickable<Scaleform::GFx::FontCompactorParams>(Scaleform::GFx::FontCompactorParams *);
	Pickable<Scaleform::GFx::FontCompactorParams>();
	Scaleform::Pickable<Scaleform::GFx::FontCompactorParams> & operator=(const Scaleform::Pickable<Scaleform::GFx::FontCompactorParams> &);
	Scaleform::GFx::FontCompactorParams * GetPtr();
	Scaleform::GFx::FontCompactorParams * operator->();
	Scaleform::GFx::FontCompactorParams & operator*();
private:
	Scaleform::GFx::FontCompactorParams * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Text::DocView::DocumentListener>
{
public:
	Pickable<Scaleform::Render::Text::DocView::DocumentListener>(Scaleform::Render::Text::DocView::DocumentListener *, Scaleform::PickType);
	Pickable<Scaleform::Render::Text::DocView::DocumentListener>(Scaleform::Render::Text::DocView::DocumentListener *);
	Pickable<Scaleform::Render::Text::DocView::DocumentListener>();
	Scaleform::Pickable<Scaleform::Render::Text::DocView::DocumentListener> & operator=(const Scaleform::Pickable<Scaleform::Render::Text::DocView::DocumentListener> &);
	Scaleform::Render::Text::DocView::DocumentListener * GetPtr();
	Scaleform::Render::Text::DocView::DocumentListener * operator->();
	Scaleform::Render::Text::DocView::DocumentListener & operator*();
private:
	Scaleform::Render::Text::DocView::DocumentListener * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Text::EditorKitBase>
{
public:
	Pickable<Scaleform::Render::Text::EditorKitBase>(Scaleform::Render::Text::EditorKitBase *, Scaleform::PickType);
	Pickable<Scaleform::Render::Text::EditorKitBase>(Scaleform::Render::Text::EditorKitBase *);
	Pickable<Scaleform::Render::Text::EditorKitBase>();
	Scaleform::Pickable<Scaleform::Render::Text::EditorKitBase> & operator=(const Scaleform::Pickable<Scaleform::Render::Text::EditorKitBase> &);
	Scaleform::Render::Text::EditorKitBase * GetPtr();
	Scaleform::Render::Text::EditorKitBase * operator->();
	Scaleform::Render::Text::EditorKitBase & operator*();
private:
	Scaleform::Render::Text::EditorKitBase * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::Translator>
{
public:
	Pickable<Scaleform::GFx::Translator>(Scaleform::GFx::Translator *, Scaleform::PickType);
	Pickable<Scaleform::GFx::Translator>(Scaleform::GFx::Translator *);
	Pickable<Scaleform::GFx::Translator>();
	Scaleform::Pickable<Scaleform::GFx::Translator> & operator=(const Scaleform::Pickable<Scaleform::GFx::Translator> &);
	Scaleform::GFx::Translator * GetPtr();
	Scaleform::GFx::Translator * operator->();
	Scaleform::GFx::Translator & operator*();
private:
	Scaleform::GFx::Translator * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::ContextImpl::RTHandle::HandleData>
{
public:
	Pickable<Scaleform::Render::ContextImpl::RTHandle::HandleData>(Scaleform::Render::ContextImpl::RTHandle::HandleData *, Scaleform::PickType);
	Pickable<Scaleform::Render::ContextImpl::RTHandle::HandleData>(Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	Pickable<Scaleform::Render::ContextImpl::RTHandle::HandleData>();
	Scaleform::Pickable<Scaleform::Render::ContextImpl::RTHandle::HandleData> & operator=(const Scaleform::Pickable<Scaleform::Render::ContextImpl::RTHandle::HandleData> &);
	Scaleform::Render::ContextImpl::RTHandle::HandleData * GetPtr();
	Scaleform::Render::ContextImpl::RTHandle::HandleData * operator->();
	Scaleform::Render::ContextImpl::RTHandle::HandleData & operator*();
private:
	Scaleform::Render::ContextImpl::RTHandle::HandleData * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::RenderSync>
{
public:
	Pickable<Scaleform::Render::RenderSync>(Scaleform::Render::RenderSync *, Scaleform::PickType);
	Pickable<Scaleform::Render::RenderSync>(Scaleform::Render::RenderSync *);
	Pickable<Scaleform::Render::RenderSync>();
	Scaleform::Pickable<Scaleform::Render::RenderSync> & operator=(const Scaleform::Pickable<Scaleform::Render::RenderSync> &);
	Scaleform::Render::RenderSync * GetPtr();
	Scaleform::Render::RenderSync * operator->();
	Scaleform::Render::RenderSync & operator*();
private:
	Scaleform::Render::RenderSync * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Text::Allocator>
{
public:
	Pickable<Scaleform::Render::Text::Allocator>(Scaleform::Render::Text::Allocator *, Scaleform::PickType);
	Pickable<Scaleform::Render::Text::Allocator>(Scaleform::Render::Text::Allocator *);
	Pickable<Scaleform::Render::Text::Allocator>();
	Scaleform::Pickable<Scaleform::Render::Text::Allocator> & operator=(const Scaleform::Pickable<Scaleform::Render::Text::Allocator> &);
	Scaleform::Render::Text::Allocator * GetPtr();
	Scaleform::Render::Text::Allocator * operator->();
	Scaleform::Render::Text::Allocator & operator*();
private:
	Scaleform::Render::Text::Allocator * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::FSCommandHandler>
{
public:
	Pickable<Scaleform::GFx::FSCommandHandler>(Scaleform::GFx::FSCommandHandler *, Scaleform::PickType);
	Pickable<Scaleform::GFx::FSCommandHandler>(Scaleform::GFx::FSCommandHandler *);
	Pickable<Scaleform::GFx::FSCommandHandler>();
	Scaleform::Pickable<Scaleform::GFx::FSCommandHandler> & operator=(const Scaleform::Pickable<Scaleform::GFx::FSCommandHandler> &);
	Scaleform::GFx::FSCommandHandler * GetPtr();
	Scaleform::GFx::FSCommandHandler * operator->();
	Scaleform::GFx::FSCommandHandler & operator*();
private:
	Scaleform::GFx::FSCommandHandler * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::Clipboard>
{
public:
	Pickable<Scaleform::GFx::Clipboard>(Scaleform::GFx::Clipboard *, Scaleform::PickType);
	Pickable<Scaleform::GFx::Clipboard>(Scaleform::GFx::Clipboard *);
	Pickable<Scaleform::GFx::Clipboard>();
	Scaleform::Pickable<Scaleform::GFx::Clipboard> & operator=(const Scaleform::Pickable<Scaleform::GFx::Clipboard> &);
	Scaleform::GFx::Clipboard * GetPtr();
	Scaleform::GFx::Clipboard * operator->();
	Scaleform::GFx::Clipboard & operator*();
private:
	Scaleform::GFx::Clipboard * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Bundle>
{
public:
	Pickable<Scaleform::Render::Bundle>(Scaleform::Render::Bundle *, Scaleform::PickType);
	Pickable<Scaleform::Render::Bundle>(Scaleform::Render::Bundle *);
	Pickable<Scaleform::Render::Bundle>();
	Scaleform::Pickable<Scaleform::Render::Bundle> & operator=(const Scaleform::Pickable<Scaleform::Render::Bundle> &);
	Scaleform::Render::Bundle * GetPtr();
	Scaleform::Render::Bundle * operator->();
	Scaleform::Render::Bundle & operator*();
private:
	Scaleform::Render::Bundle * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Fence>
{
public:
	Pickable<Scaleform::Render::Fence>(Scaleform::Render::Fence *, Scaleform::PickType);
	Pickable<Scaleform::Render::Fence>(Scaleform::Render::Fence *);
	Pickable<Scaleform::Render::Fence>();
	Scaleform::Pickable<Scaleform::Render::Fence> & operator=(const Scaleform::Pickable<Scaleform::Render::Fence> &);
	Scaleform::Render::Fence * GetPtr();
	Scaleform::Render::Fence * operator->();
	Scaleform::Render::Fence & operator*();
private:
	Scaleform::Render::Fence * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::FontMap>
{
public:
	Pickable<Scaleform::GFx::FontMap>(Scaleform::GFx::FontMap *, Scaleform::PickType);
	Pickable<Scaleform::GFx::FontMap>(Scaleform::GFx::FontMap *);
	Pickable<Scaleform::GFx::FontMap>();
	Scaleform::Pickable<Scaleform::GFx::FontMap> & operator=(const Scaleform::Pickable<Scaleform::GFx::FontMap> &);
	Scaleform::GFx::FontMap * GetPtr();
	Scaleform::GFx::FontMap * operator->();
	Scaleform::GFx::FontMap & operator*();
private:
	Scaleform::GFx::FontMap * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Text::DocView>
{
public:
	Pickable<Scaleform::Render::Text::DocView>(Scaleform::Render::Text::DocView *, Scaleform::PickType);
	Pickable<Scaleform::Render::Text::DocView>(Scaleform::Render::Text::DocView *);
	Pickable<Scaleform::Render::Text::DocView>();
	Scaleform::Pickable<Scaleform::Render::Text::DocView> & operator=(const Scaleform::Pickable<Scaleform::Render::Text::DocView> &);
	Scaleform::Render::Text::DocView * GetPtr();
	Scaleform::Render::Text::DocView * operator->();
	Scaleform::Render::Text::DocView & operator*();
private:
	Scaleform::Render::Text::DocView * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::ShapeDataInterface>
{
public:
	Pickable<Scaleform::Render::ShapeDataInterface>(Scaleform::Render::ShapeDataInterface *, Scaleform::PickType);
	Pickable<Scaleform::Render::ShapeDataInterface>(Scaleform::Render::ShapeDataInterface *);
	Pickable<Scaleform::Render::ShapeDataInterface>();
	Scaleform::Pickable<Scaleform::Render::ShapeDataInterface> & operator=(const Scaleform::Pickable<Scaleform::Render::ShapeDataInterface> &);
	Scaleform::Render::ShapeDataInterface * GetPtr();
	Scaleform::Render::ShapeDataInterface * operator->();
	Scaleform::Render::ShapeDataInterface & operator*();
private:
	Scaleform::Render::ShapeDataInterface * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::ShapeMeshProvider>
{
public:
	Pickable<Scaleform::Render::ShapeMeshProvider>(Scaleform::Render::ShapeMeshProvider *, Scaleform::PickType);
	Pickable<Scaleform::Render::ShapeMeshProvider>(Scaleform::Render::ShapeMeshProvider *);
	Pickable<Scaleform::Render::ShapeMeshProvider>();
	Scaleform::Pickable<Scaleform::Render::ShapeMeshProvider> & operator=(const Scaleform::Pickable<Scaleform::Render::ShapeMeshProvider> &);
	Scaleform::Render::ShapeMeshProvider * GetPtr();
	Scaleform::Render::ShapeMeshProvider * operator->();
	Scaleform::Render::ShapeMeshProvider & operator*();
private:
	Scaleform::Render::ShapeMeshProvider * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::FileOpenerBase>
{
public:
	Pickable<Scaleform::GFx::FileOpenerBase>(Scaleform::GFx::FileOpenerBase *, Scaleform::PickType);
	Pickable<Scaleform::GFx::FileOpenerBase>(Scaleform::GFx::FileOpenerBase *);
	Pickable<Scaleform::GFx::FileOpenerBase>();
	Scaleform::Pickable<Scaleform::GFx::FileOpenerBase> & operator=(const Scaleform::Pickable<Scaleform::GFx::FileOpenerBase> &);
	Scaleform::GFx::FileOpenerBase * GetPtr();
	Scaleform::GFx::FileOpenerBase * operator->();
	Scaleform::GFx::FileOpenerBase & operator*();
private:
	Scaleform::GFx::FileOpenerBase * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ParseControl>
{
public:
	Pickable<Scaleform::GFx::ParseControl>(Scaleform::GFx::ParseControl *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ParseControl>(Scaleform::GFx::ParseControl *);
	Pickable<Scaleform::GFx::ParseControl>();
	Scaleform::Pickable<Scaleform::GFx::ParseControl> & operator=(const Scaleform::Pickable<Scaleform::GFx::ParseControl> &);
	Scaleform::GFx::ParseControl * GetPtr();
	Scaleform::GFx::ParseControl * operator->();
	Scaleform::GFx::ParseControl & operator*();
private:
	Scaleform::GFx::ParseControl * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ASSupport>
{
public:
	Pickable<Scaleform::GFx::ASSupport>(Scaleform::GFx::ASSupport *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ASSupport>(Scaleform::GFx::ASSupport *);
	Pickable<Scaleform::GFx::ASSupport>();
	Scaleform::Pickable<Scaleform::GFx::ASSupport> & operator=(const Scaleform::Pickable<Scaleform::GFx::ASSupport> &);
	Scaleform::GFx::ASSupport * GetPtr();
	Scaleform::GFx::ASSupport * operator->();
	Scaleform::GFx::ASSupport & operator*();
private:
	Scaleform::GFx::ASSupport * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ExtensionContextInterface>
{
public:
	Pickable<Scaleform::GFx::ExtensionContextInterface>(Scaleform::GFx::ExtensionContextInterface *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ExtensionContextInterface>(Scaleform::GFx::ExtensionContextInterface *);
	Pickable<Scaleform::GFx::ExtensionContextInterface>();
	Scaleform::Pickable<Scaleform::GFx::ExtensionContextInterface> & operator=(const Scaleform::Pickable<Scaleform::GFx::ExtensionContextInterface> &);
	Scaleform::GFx::ExtensionContextInterface * GetPtr();
	Scaleform::GFx::ExtensionContextInterface * operator->();
	Scaleform::GFx::ExtensionContextInterface & operator*();
private:
	Scaleform::GFx::ExtensionContextInterface * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ImportVisitor>
{
public:
	Pickable<Scaleform::GFx::ImportVisitor>(Scaleform::GFx::ImportVisitor *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ImportVisitor>(Scaleform::GFx::ImportVisitor *);
	Pickable<Scaleform::GFx::ImportVisitor>();
	Scaleform::Pickable<Scaleform::GFx::ImportVisitor> & operator=(const Scaleform::Pickable<Scaleform::GFx::ImportVisitor> &);
	Scaleform::GFx::ImportVisitor * GetPtr();
	Scaleform::GFx::ImportVisitor * operator->();
	Scaleform::GFx::ImportVisitor & operator*();
private:
	Scaleform::GFx::ImportVisitor * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::TextLayout>
{
public:
	Pickable<Scaleform::Render::TextLayout>(Scaleform::Render::TextLayout *, Scaleform::PickType);
	Pickable<Scaleform::Render::TextLayout>(Scaleform::Render::TextLayout *);
	Pickable<Scaleform::Render::TextLayout>();
	Scaleform::Pickable<Scaleform::Render::TextLayout> & operator=(const Scaleform::Pickable<Scaleform::Render::TextLayout> &);
	Scaleform::Render::TextLayout * GetPtr();
	Scaleform::Render::TextLayout * operator->();
	Scaleform::Render::TextLayout & operator*();
private:
	Scaleform::Render::TextLayout * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ExternalInterface>
{
public:
	Pickable<Scaleform::GFx::ExternalInterface>(Scaleform::GFx::ExternalInterface *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ExternalInterface>(Scaleform::GFx::ExternalInterface *);
	Pickable<Scaleform::GFx::ExternalInterface>();
	Scaleform::Pickable<Scaleform::GFx::ExternalInterface> & operator=(const Scaleform::Pickable<Scaleform::GFx::ExternalInterface> &);
	Scaleform::GFx::ExternalInterface * GetPtr();
	Scaleform::GFx::ExternalInterface * operator->();
	Scaleform::GFx::ExternalInterface & operator*();
private:
	Scaleform::GFx::ExternalInterface * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::RenderBufferManager>
{
public:
	Pickable<Scaleform::Render::RenderBufferManager>(Scaleform::Render::RenderBufferManager *, Scaleform::PickType);
	Pickable<Scaleform::Render::RenderBufferManager>(Scaleform::Render::RenderBufferManager *);
	Pickable<Scaleform::Render::RenderBufferManager>();
	Scaleform::Pickable<Scaleform::Render::RenderBufferManager> & operator=(const Scaleform::Pickable<Scaleform::Render::RenderBufferManager> &);
	Scaleform::Render::RenderBufferManager * GetPtr();
	Scaleform::Render::RenderBufferManager * operator->();
	Scaleform::Render::RenderBufferManager & operator*();
private:
	Scaleform::Render::RenderBufferManager * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Text::FontHandle>
{
public:
	Pickable<Scaleform::Render::Text::FontHandle>(Scaleform::Render::Text::FontHandle *, Scaleform::PickType);
	Pickable<Scaleform::Render::Text::FontHandle>(Scaleform::Render::Text::FontHandle *);
	Pickable<Scaleform::Render::Text::FontHandle>();
	Scaleform::Pickable<Scaleform::Render::Text::FontHandle> & operator=(const Scaleform::Pickable<Scaleform::Render::Text::FontHandle> &);
	Scaleform::Render::Text::FontHandle * GetPtr();
	Scaleform::Render::Text::FontHandle * operator->();
	Scaleform::Render::Text::FontHandle & operator*();
private:
	Scaleform::Render::Text::FontHandle * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::MemoryManager>
{
public:
	Pickable<Scaleform::Render::MemoryManager>(Scaleform::Render::MemoryManager *, Scaleform::PickType);
	Pickable<Scaleform::Render::MemoryManager>(Scaleform::Render::MemoryManager *);
	Pickable<Scaleform::Render::MemoryManager>();
	Scaleform::Pickable<Scaleform::Render::MemoryManager> & operator=(const Scaleform::Pickable<Scaleform::Render::MemoryManager> &);
	Scaleform::Render::MemoryManager * GetPtr();
	Scaleform::Render::MemoryManager * operator->();
	Scaleform::Render::MemoryManager & operator*();
private:
	Scaleform::Render::MemoryManager * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ImagePackParams>
{
public:
	Pickable<Scaleform::GFx::ImagePackParams>(Scaleform::GFx::ImagePackParams *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ImagePackParams>(Scaleform::GFx::ImagePackParams *);
	Pickable<Scaleform::GFx::ImagePackParams>();
	Scaleform::Pickable<Scaleform::GFx::ImagePackParams> & operator=(const Scaleform::Pickable<Scaleform::GFx::ImagePackParams> &);
	Scaleform::GFx::ImagePackParams * GetPtr();
	Scaleform::GFx::ImagePackParams * operator->();
	Scaleform::GFx::ImagePackParams & operator*();
private:
	Scaleform::GFx::ImagePackParams * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::TextureManagerLocks>
{
public:
	Pickable<Scaleform::Render::TextureManagerLocks>(Scaleform::Render::TextureManagerLocks *, Scaleform::PickType);
	Pickable<Scaleform::Render::TextureManagerLocks>(Scaleform::Render::TextureManagerLocks *);
	Pickable<Scaleform::Render::TextureManagerLocks>();
	Scaleform::Pickable<Scaleform::Render::TextureManagerLocks> & operator=(const Scaleform::Pickable<Scaleform::Render::TextureManagerLocks> &);
	Scaleform::Render::TextureManagerLocks * GetPtr();
	Scaleform::Render::TextureManagerLocks * operator->();
	Scaleform::Render::TextureManagerLocks & operator*();
private:
	Scaleform::Render::TextureManagerLocks * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::FilterSet>
{
public:
	Pickable<Scaleform::Render::FilterSet>(Scaleform::Render::FilterSet *, Scaleform::PickType);
	Pickable<Scaleform::Render::FilterSet>(Scaleform::Render::FilterSet *);
	Pickable<Scaleform::Render::FilterSet>();
	Scaleform::Pickable<Scaleform::Render::FilterSet> & operator=(const Scaleform::Pickable<Scaleform::Render::FilterSet> &);
	Scaleform::Render::FilterSet * GetPtr();
	Scaleform::Render::FilterSet * operator->();
	Scaleform::Render::FilterSet & operator*();
private:
	Scaleform::Render::FilterSet * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::UrlNavigator>
{
public:
	Pickable<Scaleform::GFx::UrlNavigator>(Scaleform::GFx::UrlNavigator *, Scaleform::PickType);
	Pickable<Scaleform::GFx::UrlNavigator>(Scaleform::GFx::UrlNavigator *);
	Pickable<Scaleform::GFx::UrlNavigator>();
	Scaleform::Pickable<Scaleform::GFx::UrlNavigator> & operator=(const Scaleform::Pickable<Scaleform::GFx::UrlNavigator> &);
	Scaleform::GFx::UrlNavigator * GetPtr();
	Scaleform::GFx::UrlNavigator * operator->();
	Scaleform::GFx::UrlNavigator & operator*();
private:
	Scaleform::GFx::UrlNavigator * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::MeshKeyManager>
{
public:
	Pickable<Scaleform::Render::MeshKeyManager>(Scaleform::Render::MeshKeyManager *, Scaleform::PickType);
	Pickable<Scaleform::Render::MeshKeyManager>(Scaleform::Render::MeshKeyManager *);
	Pickable<Scaleform::Render::MeshKeyManager>();
	Scaleform::Pickable<Scaleform::Render::MeshKeyManager> & operator=(const Scaleform::Pickable<Scaleform::Render::MeshKeyManager> &);
	Scaleform::Render::MeshKeyManager * GetPtr();
	Scaleform::Render::MeshKeyManager * operator->();
	Scaleform::Render::MeshKeyManager & operator*();
private:
	Scaleform::Render::MeshKeyManager * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ProgressHandler>
{
public:
	Pickable<Scaleform::GFx::ProgressHandler>(Scaleform::GFx::ProgressHandler *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ProgressHandler>(Scaleform::GFx::ProgressHandler *);
	Pickable<Scaleform::GFx::ProgressHandler>();
	Scaleform::Pickable<Scaleform::GFx::ProgressHandler> & operator=(const Scaleform::Pickable<Scaleform::GFx::ProgressHandler> &);
	Scaleform::GFx::ProgressHandler * GetPtr();
	Scaleform::GFx::ProgressHandler * operator->();
	Scaleform::GFx::ProgressHandler & operator*();
private:
	Scaleform::GFx::ProgressHandler * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ZlibSupportBase>
{
public:
	Pickable<Scaleform::GFx::ZlibSupportBase>(Scaleform::GFx::ZlibSupportBase *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ZlibSupportBase>(Scaleform::GFx::ZlibSupportBase *);
	Pickable<Scaleform::GFx::ZlibSupportBase>();
	Scaleform::Pickable<Scaleform::GFx::ZlibSupportBase> & operator=(const Scaleform::Pickable<Scaleform::GFx::ZlibSupportBase> &);
	Scaleform::GFx::ZlibSupportBase * GetPtr();
	Scaleform::GFx::ZlibSupportBase * operator->();
	Scaleform::GFx::ZlibSupportBase & operator*();
private:
	Scaleform::GFx::ZlibSupportBase * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::TextureManager>
{
public:
	Pickable<Scaleform::Render::TextureManager>(Scaleform::Render::TextureManager *, Scaleform::PickType);
	Pickable<Scaleform::Render::TextureManager>(Scaleform::Render::TextureManager *);
	Pickable<Scaleform::Render::TextureManager>();
	Scaleform::Pickable<Scaleform::Render::TextureManager> & operator=(const Scaleform::Pickable<Scaleform::Render::TextureManager> &);
	Scaleform::Render::TextureManager * GetPtr();
	Scaleform::Render::TextureManager * operator->();
	Scaleform::Render::TextureManager & operator*();
private:
	Scaleform::Render::TextureManager * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::MeshProvider>
{
public:
	Pickable<Scaleform::Render::MeshProvider>(Scaleform::Render::MeshProvider *, Scaleform::PickType);
	Pickable<Scaleform::Render::MeshProvider>(Scaleform::Render::MeshProvider *);
	Pickable<Scaleform::Render::MeshProvider>();
	Scaleform::Pickable<Scaleform::Render::MeshProvider> & operator=(const Scaleform::Pickable<Scaleform::Render::MeshProvider> &);
	Scaleform::Render::MeshProvider * GetPtr();
	Scaleform::Render::MeshProvider * operator->();
	Scaleform::Render::MeshProvider & operator*();
private:
	Scaleform::Render::MeshProvider * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ActionControl>
{
public:
	Pickable<Scaleform::GFx::ActionControl>(Scaleform::GFx::ActionControl *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ActionControl>(Scaleform::GFx::ActionControl *);
	Pickable<Scaleform::GFx::ActionControl>();
	Scaleform::Pickable<Scaleform::GFx::ActionControl> & operator=(const Scaleform::Pickable<Scaleform::GFx::ActionControl> &);
	Scaleform::GFx::ActionControl * GetPtr();
	Scaleform::GFx::ActionControl * operator->();
	Scaleform::GFx::ActionControl & operator*();
private:
	Scaleform::GFx::ActionControl * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::FontProvider>
{
public:
	Pickable<Scaleform::Render::FontProvider>(Scaleform::Render::FontProvider *, Scaleform::PickType);
	Pickable<Scaleform::Render::FontProvider>(Scaleform::Render::FontProvider *);
	Pickable<Scaleform::Render::FontProvider>();
	Scaleform::Pickable<Scaleform::Render::FontProvider> & operator=(const Scaleform::Pickable<Scaleform::Render::FontProvider> &);
	Scaleform::Render::FontProvider * GetPtr();
	Scaleform::Render::FontProvider * operator->();
	Scaleform::Render::FontProvider & operator*();
private:
	Scaleform::Render::FontProvider * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::MultitouchInterface>
{
public:
	Pickable<Scaleform::GFx::MultitouchInterface>(Scaleform::GFx::MultitouchInterface *, Scaleform::PickType);
	Pickable<Scaleform::GFx::MultitouchInterface>(Scaleform::GFx::MultitouchInterface *);
	Pickable<Scaleform::GFx::MultitouchInterface>();
	Scaleform::Pickable<Scaleform::GFx::MultitouchInterface> & operator=(const Scaleform::Pickable<Scaleform::GFx::MultitouchInterface> &);
	Scaleform::GFx::MultitouchInterface * GetPtr();
	Scaleform::GFx::MultitouchInterface * operator->();
	Scaleform::GFx::MultitouchInterface & operator*();
private:
	Scaleform::GFx::MultitouchInterface * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::GeolocationInterface>
{
public:
	Pickable<Scaleform::GFx::GeolocationInterface>(Scaleform::GFx::GeolocationInterface *, Scaleform::PickType);
	Pickable<Scaleform::GFx::GeolocationInterface>(Scaleform::GFx::GeolocationInterface *);
	Pickable<Scaleform::GFx::GeolocationInterface>();
	Scaleform::Pickable<Scaleform::GFx::GeolocationInterface> & operator=(const Scaleform::Pickable<Scaleform::GFx::GeolocationInterface> &);
	Scaleform::GFx::GeolocationInterface * GetPtr();
	Scaleform::GFx::GeolocationInterface * operator->();
	Scaleform::GFx::GeolocationInterface & operator*();
private:
	Scaleform::GFx::GeolocationInterface * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GradientData>
{
public:
	Pickable<Scaleform::Render::GradientData>(Scaleform::Render::GradientData *, Scaleform::PickType);
	Pickable<Scaleform::Render::GradientData>(Scaleform::Render::GradientData *);
	Pickable<Scaleform::Render::GradientData>();
	Scaleform::Pickable<Scaleform::Render::GradientData> & operator=(const Scaleform::Pickable<Scaleform::Render::GradientData> &);
	Scaleform::Render::GradientData * GetPtr();
	Scaleform::Render::GradientData * operator->();
	Scaleform::Render::GradientData & operator*();
private:
	Scaleform::Render::GradientData * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::ComplexFill>
{
public:
	Pickable<Scaleform::Render::ComplexFill>(Scaleform::Render::ComplexFill *, Scaleform::PickType);
	Pickable<Scaleform::Render::ComplexFill>(Scaleform::Render::ComplexFill *);
	Pickable<Scaleform::Render::ComplexFill>();
	Scaleform::Pickable<Scaleform::Render::ComplexFill> & operator=(const Scaleform::Pickable<Scaleform::Render::ComplexFill> &);
	Scaleform::Render::ComplexFill * GetPtr();
	Scaleform::Render::ComplexFill * operator->();
	Scaleform::Render::ComplexFill & operator*();
private:
	Scaleform::Render::ComplexFill * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::AccelerometerInterface>
{
public:
	Pickable<Scaleform::GFx::AccelerometerInterface>(Scaleform::GFx::AccelerometerInterface *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AccelerometerInterface>(Scaleform::GFx::AccelerometerInterface *);
	Pickable<Scaleform::GFx::AccelerometerInterface>();
	Scaleform::Pickable<Scaleform::GFx::AccelerometerInterface> & operator=(const Scaleform::Pickable<Scaleform::GFx::AccelerometerInterface> &);
	Scaleform::GFx::AccelerometerInterface * GetPtr();
	Scaleform::GFx::AccelerometerInterface * operator->();
	Scaleform::GFx::AccelerometerInterface & operator*();
private:
	Scaleform::GFx::AccelerometerInterface * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::FontPackParams>
{
public:
	Pickable<Scaleform::GFx::FontPackParams>(Scaleform::GFx::FontPackParams *, Scaleform::PickType);
	Pickable<Scaleform::GFx::FontPackParams>(Scaleform::GFx::FontPackParams *);
	Pickable<Scaleform::GFx::FontPackParams>();
	Scaleform::Pickable<Scaleform::GFx::FontPackParams> & operator=(const Scaleform::Pickable<Scaleform::GFx::FontPackParams> &);
	Scaleform::GFx::FontPackParams * GetPtr();
	Scaleform::GFx::FontPackParams * operator->();
	Scaleform::GFx::FontPackParams & operator*();
private:
	Scaleform::GFx::FontPackParams * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::UserEventHandler>
{
public:
	Pickable<Scaleform::GFx::UserEventHandler>(Scaleform::GFx::UserEventHandler *, Scaleform::PickType);
	Pickable<Scaleform::GFx::UserEventHandler>(Scaleform::GFx::UserEventHandler *);
	Pickable<Scaleform::GFx::UserEventHandler>();
	Scaleform::Pickable<Scaleform::GFx::UserEventHandler> & operator=(const Scaleform::Pickable<Scaleform::GFx::UserEventHandler> &);
	Scaleform::GFx::UserEventHandler * GetPtr();
	Scaleform::GFx::UserEventHandler * operator->();
	Scaleform::GFx::UserEventHandler & operator*();
private:
	Scaleform::GFx::UserEventHandler * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::FontProvider>
{
public:
	Pickable<Scaleform::GFx::FontProvider>(Scaleform::GFx::FontProvider *, Scaleform::PickType);
	Pickable<Scaleform::GFx::FontProvider>(Scaleform::GFx::FontProvider *);
	Pickable<Scaleform::GFx::FontProvider>();
	Scaleform::Pickable<Scaleform::GFx::FontProvider> & operator=(const Scaleform::Pickable<Scaleform::GFx::FontProvider> &);
	Scaleform::GFx::FontProvider * GetPtr();
	Scaleform::GFx::FontProvider * operator->();
	Scaleform::GFx::FontProvider & operator*();
private:
	Scaleform::GFx::FontProvider * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Image>
{
public:
	Pickable<Scaleform::Render::Image>(Scaleform::Render::Image *, Scaleform::PickType);
	Pickable<Scaleform::Render::Image>(Scaleform::Render::Image *);
	Pickable<Scaleform::Render::Image>();
	Scaleform::Pickable<Scaleform::Render::Image> & operator=(const Scaleform::Pickable<Scaleform::Render::Image> &);
	Scaleform::Render::Image * GetPtr();
	Scaleform::Render::Image * operator->();
	Scaleform::Render::Image & operator*();
private:
	Scaleform::Render::Image * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::TextKeyMap>
{
public:
	Pickable<Scaleform::GFx::TextKeyMap>(Scaleform::GFx::TextKeyMap *, Scaleform::PickType);
	Pickable<Scaleform::GFx::TextKeyMap>(Scaleform::GFx::TextKeyMap *);
	Pickable<Scaleform::GFx::TextKeyMap>();
	Scaleform::Pickable<Scaleform::GFx::TextKeyMap> & operator=(const Scaleform::Pickable<Scaleform::GFx::TextKeyMap> &);
	Scaleform::GFx::TextKeyMap * GetPtr();
	Scaleform::GFx::TextKeyMap * operator->();
	Scaleform::GFx::TextKeyMap & operator*();
private:
	Scaleform::GFx::TextKeyMap * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::DepthStencilSurface>
{
public:
	Pickable<Scaleform::Render::DepthStencilSurface>(Scaleform::Render::DepthStencilSurface *, Scaleform::PickType);
	Pickable<Scaleform::Render::DepthStencilSurface>(Scaleform::Render::DepthStencilSurface *);
	Pickable<Scaleform::Render::DepthStencilSurface>();
	Scaleform::Pickable<Scaleform::Render::DepthStencilSurface> & operator=(const Scaleform::Pickable<Scaleform::Render::DepthStencilSurface> &);
	Scaleform::Render::DepthStencilSurface * GetPtr();
	Scaleform::Render::DepthStencilSurface * operator->();
	Scaleform::Render::DepthStencilSurface & operator*();
private:
	Scaleform::Render::DepthStencilSurface * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Font>
{
public:
	Pickable<Scaleform::Render::Font>(Scaleform::Render::Font *, Scaleform::PickType);
	Pickable<Scaleform::Render::Font>(Scaleform::Render::Font *);
	Pickable<Scaleform::Render::Font>();
	Scaleform::Pickable<Scaleform::Render::Font> & operator=(const Scaleform::Pickable<Scaleform::Render::Font> &);
	Scaleform::Render::Font * GetPtr();
	Scaleform::Render::Font * operator->();
	Scaleform::Render::Font & operator*();
private:
	Scaleform::Render::Font * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Scale9GridData>
{
public:
	Pickable<Scaleform::Render::Scale9GridData>(Scaleform::Render::Scale9GridData *, Scaleform::PickType);
	Pickable<Scaleform::Render::Scale9GridData>(Scaleform::Render::Scale9GridData *);
	Pickable<Scaleform::Render::Scale9GridData>();
	Scaleform::Pickable<Scaleform::Render::Scale9GridData> & operator=(const Scaleform::Pickable<Scaleform::Render::Scale9GridData> &);
	Scaleform::Render::Scale9GridData * GetPtr();
	Scaleform::Render::Scale9GridData * operator->();
	Scaleform::Render::Scale9GridData & operator*();
private:
	Scaleform::Render::Scale9GridData * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::URLBuilder>
{
public:
	Pickable<Scaleform::GFx::URLBuilder>(Scaleform::GFx::URLBuilder *, Scaleform::PickType);
	Pickable<Scaleform::GFx::URLBuilder>(Scaleform::GFx::URLBuilder *);
	Pickable<Scaleform::GFx::URLBuilder>();
	Scaleform::Pickable<Scaleform::GFx::URLBuilder> & operator=(const Scaleform::Pickable<Scaleform::GFx::URLBuilder> &);
	Scaleform::GFx::URLBuilder * GetPtr();
	Scaleform::GFx::URLBuilder * operator->();
	Scaleform::GFx::URLBuilder & operator*();
private:
	Scaleform::GFx::URLBuilder * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::File>
{
public:
	Pickable<Scaleform::File>(Scaleform::File *, Scaleform::PickType);
	Pickable<Scaleform::File>(Scaleform::File *);
	Pickable<Scaleform::File>();
	Scaleform::Pickable<Scaleform::File> & operator=(const Scaleform::Pickable<Scaleform::File> &);
	Scaleform::File * GetPtr();
	Scaleform::File * operator->();
	Scaleform::File & operator*();
private:
	Scaleform::File * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::UserDataState::Data>
{
public:
	Pickable<Scaleform::Render::UserDataState::Data>(Scaleform::Render::UserDataState::Data *, Scaleform::PickType);
	Pickable<Scaleform::Render::UserDataState::Data>(Scaleform::Render::UserDataState::Data *);
	Pickable<Scaleform::Render::UserDataState::Data>();
	Scaleform::Pickable<Scaleform::Render::UserDataState::Data> & operator=(const Scaleform::Pickable<Scaleform::Render::UserDataState::Data> &);
	Scaleform::Render::UserDataState::Data * GetPtr();
	Scaleform::Render::UserDataState::Data * operator->();
	Scaleform::Render::UserDataState::Data & operator*();
private:
	Scaleform::Render::UserDataState::Data * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Text::TextFormat>
{
public:
	Pickable<Scaleform::Render::Text::TextFormat>(Scaleform::Render::Text::TextFormat *, Scaleform::PickType);
	Pickable<Scaleform::Render::Text::TextFormat>(Scaleform::Render::Text::TextFormat *);
	Pickable<Scaleform::Render::Text::TextFormat>();
	Scaleform::Pickable<Scaleform::Render::Text::TextFormat> & operator=(const Scaleform::Pickable<Scaleform::Render::Text::TextFormat> &);
	Scaleform::Render::Text::TextFormat * GetPtr();
	Scaleform::Render::Text::TextFormat * operator->();
	Scaleform::Render::Text::TextFormat & operator*();
private:
	Scaleform::Render::Text::TextFormat * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::FontLib>
{
public:
	Pickable<Scaleform::GFx::FontLib>(Scaleform::GFx::FontLib *, Scaleform::PickType);
	Pickable<Scaleform::GFx::FontLib>(Scaleform::GFx::FontLib *);
	Pickable<Scaleform::GFx::FontLib>();
	Scaleform::Pickable<Scaleform::GFx::FontLib> & operator=(const Scaleform::Pickable<Scaleform::GFx::FontLib> &);
	Scaleform::GFx::FontLib * GetPtr();
	Scaleform::GFx::FontLib * operator->();
	Scaleform::GFx::FontLib & operator*();
private:
	Scaleform::GFx::FontLib * pV; // 0x0
};
class Scaleform::Pickable<extension::gfxi_detail::CustomFontProvider>
{
public:
	Pickable<extension::gfxi_detail::CustomFontProvider>(extension::gfxi_detail::CustomFontProvider *, Scaleform::PickType);
	Pickable<extension::gfxi_detail::CustomFontProvider>(extension::gfxi_detail::CustomFontProvider *);
	Pickable<extension::gfxi_detail::CustomFontProvider>();
	Scaleform::Pickable<extension::gfxi_detail::CustomFontProvider> & operator=(const Scaleform::Pickable<extension::gfxi_detail::CustomFontProvider> &);
	extension::gfxi_detail::CustomFontProvider * GetPtr();
	extension::gfxi_detail::CustomFontProvider * operator->();
	extension::gfxi_detail::CustomFontProvider & operator*();
private:
	extension::gfxi_detail::CustomFontProvider * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ImageCreator>
{
public:
	Pickable<Scaleform::GFx::ImageCreator>(Scaleform::GFx::ImageCreator *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ImageCreator>(Scaleform::GFx::ImageCreator *);
	Pickable<Scaleform::GFx::ImageCreator>();
	Scaleform::Pickable<Scaleform::GFx::ImageCreator> & operator=(const Scaleform::Pickable<Scaleform::GFx::ImageCreator> &);
	Scaleform::GFx::ImageCreator * GetPtr();
	Scaleform::GFx::ImageCreator * operator->();
	Scaleform::GFx::ImageCreator & operator*();
private:
	Scaleform::GFx::ImageCreator * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ImageFileHandlerRegistry>
{
public:
	Pickable<Scaleform::GFx::ImageFileHandlerRegistry>(Scaleform::GFx::ImageFileHandlerRegistry *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ImageFileHandlerRegistry>(Scaleform::GFx::ImageFileHandlerRegistry *);
	Pickable<Scaleform::GFx::ImageFileHandlerRegistry>();
	Scaleform::Pickable<Scaleform::GFx::ImageFileHandlerRegistry> & operator=(const Scaleform::Pickable<Scaleform::GFx::ImageFileHandlerRegistry> &);
	Scaleform::GFx::ImageFileHandlerRegistry * GetPtr();
	Scaleform::GFx::ImageFileHandlerRegistry * operator->();
	Scaleform::GFx::ImageFileHandlerRegistry & operator*();
private:
	Scaleform::GFx::ImageFileHandlerRegistry * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::DrawText>
{
public:
	Pickable<Scaleform::GFx::DrawText>(Scaleform::GFx::DrawText *, Scaleform::PickType);
	Pickable<Scaleform::GFx::DrawText>(Scaleform::GFx::DrawText *);
	Pickable<Scaleform::GFx::DrawText>();
	Scaleform::Pickable<Scaleform::GFx::DrawText> & operator=(const Scaleform::Pickable<Scaleform::GFx::DrawText> &);
	Scaleform::GFx::DrawText * GetPtr();
	Scaleform::GFx::DrawText * operator->();
	Scaleform::GFx::DrawText & operator*();
private:
	Scaleform::GFx::DrawText * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Log>
{
public:
	Pickable<Scaleform::Log>(Scaleform::Log *, Scaleform::PickType);
	Pickable<Scaleform::Log>(Scaleform::Log *);
	Pickable<Scaleform::Log>();
	Scaleform::Pickable<Scaleform::Log> & operator=(const Scaleform::Pickable<Scaleform::Log> &);
	Scaleform::Log * GetPtr();
	Scaleform::Log * operator->();
	Scaleform::Log & operator*();
private:
	Scaleform::Log * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::DrawTextManager>
{
public:
	Pickable<Scaleform::GFx::DrawTextManager>(Scaleform::GFx::DrawTextManager *, Scaleform::PickType);
	Pickable<Scaleform::GFx::DrawTextManager>(Scaleform::GFx::DrawTextManager *);
	Pickable<Scaleform::GFx::DrawTextManager>();
	Scaleform::Pickable<Scaleform::GFx::DrawTextManager> & operator=(const Scaleform::Pickable<Scaleform::GFx::DrawTextManager> &);
	Scaleform::GFx::DrawTextManager * GetPtr();
	Scaleform::GFx::DrawTextManager * operator->();
	Scaleform::GFx::DrawTextManager & operator*();
private:
	Scaleform::GFx::DrawTextManager * pV; // 0x0
};
class Scaleform::Pickable<extension::gfxi_detail::TranslatorImpl>
{
public:
	Pickable<extension::gfxi_detail::TranslatorImpl>(extension::gfxi_detail::TranslatorImpl *, Scaleform::PickType);
	Pickable<extension::gfxi_detail::TranslatorImpl>(extension::gfxi_detail::TranslatorImpl *);
	Pickable<extension::gfxi_detail::TranslatorImpl>();
	Scaleform::Pickable<extension::gfxi_detail::TranslatorImpl> & operator=(const Scaleform::Pickable<extension::gfxi_detail::TranslatorImpl> &);
	extension::gfxi_detail::TranslatorImpl * GetPtr();
	extension::gfxi_detail::TranslatorImpl * operator->();
	extension::gfxi_detail::TranslatorImpl & operator*();
private:
	extension::gfxi_detail::TranslatorImpl * pV; // 0x0
};
class Scaleform::Pickable<extension::gfxi_detail::GameInterfaceImpl::Fsc>
{
public:
	Pickable<extension::gfxi_detail::GameInterfaceImpl::Fsc>(extension::gfxi_detail::GameInterfaceImpl::Fsc *, Scaleform::PickType);
	Pickable<extension::gfxi_detail::GameInterfaceImpl::Fsc>(extension::gfxi_detail::GameInterfaceImpl::Fsc *);
	Pickable<extension::gfxi_detail::GameInterfaceImpl::Fsc>();
	Scaleform::Pickable<extension::gfxi_detail::GameInterfaceImpl::Fsc> & operator=(const Scaleform::Pickable<extension::gfxi_detail::GameInterfaceImpl::Fsc> &);
	extension::gfxi_detail::GameInterfaceImpl::Fsc * GetPtr();
	extension::gfxi_detail::GameInterfaceImpl::Fsc * operator->();
	extension::gfxi_detail::GameInterfaceImpl::Fsc & operator*();
private:
	extension::gfxi_detail::GameInterfaceImpl::Fsc * pV; // 0x0
};
class Scaleform::Pickable<extension::gfxi_detail::GameInterfaceImpl::Exi>
{
public:
	Pickable<extension::gfxi_detail::GameInterfaceImpl::Exi>(extension::gfxi_detail::GameInterfaceImpl::Exi *, Scaleform::PickType);
	Pickable<extension::gfxi_detail::GameInterfaceImpl::Exi>(extension::gfxi_detail::GameInterfaceImpl::Exi *);
	Pickable<extension::gfxi_detail::GameInterfaceImpl::Exi>();
	Scaleform::Pickable<extension::gfxi_detail::GameInterfaceImpl::Exi> & operator=(const Scaleform::Pickable<extension::gfxi_detail::GameInterfaceImpl::Exi> &);
	extension::gfxi_detail::GameInterfaceImpl::Exi * GetPtr();
	extension::gfxi_detail::GameInterfaceImpl::Exi * operator->();
	extension::gfxi_detail::GameInterfaceImpl::Exi & operator*();
private:
	extension::gfxi_detail::GameInterfaceImpl::Exi * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::TaskManager>
{
public:
	Pickable<Scaleform::GFx::TaskManager>(Scaleform::GFx::TaskManager *, Scaleform::PickType);
	Pickable<Scaleform::GFx::TaskManager>(Scaleform::GFx::TaskManager *);
	Pickable<Scaleform::GFx::TaskManager>();
	Scaleform::Pickable<Scaleform::GFx::TaskManager> & operator=(const Scaleform::Pickable<Scaleform::GFx::TaskManager> &);
	Scaleform::GFx::TaskManager * GetPtr();
	Scaleform::GFx::TaskManager * operator->();
	Scaleform::GFx::TaskManager & operator*();
private:
	Scaleform::GFx::TaskManager * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::AS3Support>
{
public:
	Pickable<Scaleform::GFx::AS3Support>(Scaleform::GFx::AS3Support *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3Support>(Scaleform::GFx::AS3Support *);
	Pickable<Scaleform::GFx::AS3Support>();
	Scaleform::Pickable<Scaleform::GFx::AS3Support> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3Support> &);
	Scaleform::GFx::AS3Support * GetPtr();
	Scaleform::GFx::AS3Support * operator->();
	Scaleform::GFx::AS3Support & operator*();
private:
	Scaleform::GFx::AS3Support * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ThreadedTaskManager>
{
public:
	Pickable<Scaleform::GFx::ThreadedTaskManager>(Scaleform::GFx::ThreadedTaskManager *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ThreadedTaskManager>(Scaleform::GFx::ThreadedTaskManager *);
	Pickable<Scaleform::GFx::ThreadedTaskManager>();
	Scaleform::Pickable<Scaleform::GFx::ThreadedTaskManager> & operator=(const Scaleform::Pickable<Scaleform::GFx::ThreadedTaskManager> &);
	Scaleform::GFx::ThreadedTaskManager * GetPtr();
	Scaleform::GFx::ThreadedTaskManager * operator->();
	Scaleform::GFx::ThreadedTaskManager & operator*();
private:
	Scaleform::GFx::ThreadedTaskManager * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::Movie>
{
public:
	Pickable<Scaleform::GFx::Movie>(Scaleform::GFx::Movie *, Scaleform::PickType);
	Pickable<Scaleform::GFx::Movie>(Scaleform::GFx::Movie *);
	Pickable<Scaleform::GFx::Movie>();
	Scaleform::Pickable<Scaleform::GFx::Movie> & operator=(const Scaleform::Pickable<Scaleform::GFx::Movie> &);
	Scaleform::GFx::Movie * GetPtr();
	Scaleform::GFx::Movie * operator->();
	Scaleform::GFx::Movie & operator*();
private:
	Scaleform::GFx::Movie * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::MovieDef>
{
public:
	Pickable<Scaleform::GFx::MovieDef>(Scaleform::GFx::MovieDef *, Scaleform::PickType);
	Pickable<Scaleform::GFx::MovieDef>(Scaleform::GFx::MovieDef *);
	Pickable<Scaleform::GFx::MovieDef>();
	Scaleform::Pickable<Scaleform::GFx::MovieDef> & operator=(const Scaleform::Pickable<Scaleform::GFx::MovieDef> &);
	Scaleform::GFx::MovieDef * GetPtr();
	Scaleform::GFx::MovieDef * operator->();
	Scaleform::GFx::MovieDef & operator*();
private:
	Scaleform::GFx::MovieDef * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GL::HALGLFramebuffer>
{
public:
	Pickable<Scaleform::Render::GL::HALGLFramebuffer>(Scaleform::Render::GL::HALGLFramebuffer *, Scaleform::PickType);
	Pickable<Scaleform::Render::GL::HALGLFramebuffer>(Scaleform::Render::GL::HALGLFramebuffer *);
	Pickable<Scaleform::Render::GL::HALGLFramebuffer>();
	Scaleform::Pickable<Scaleform::Render::GL::HALGLFramebuffer> & operator=(const Scaleform::Pickable<Scaleform::Render::GL::HALGLFramebuffer> &);
	Scaleform::Render::GL::HALGLFramebuffer * GetPtr();
	Scaleform::Render::GL::HALGLFramebuffer * operator->();
	Scaleform::Render::GL::HALGLFramebuffer & operator*();
private:
	Scaleform::Render::GL::HALGLFramebuffer * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::BlendPrimitive>
{
public:
	Pickable<Scaleform::Render::BlendPrimitive>(Scaleform::Render::BlendPrimitive *, Scaleform::PickType);
	Pickable<Scaleform::Render::BlendPrimitive>(Scaleform::Render::BlendPrimitive *);
	Pickable<Scaleform::Render::BlendPrimitive>();
	Scaleform::Pickable<Scaleform::Render::BlendPrimitive> & operator=(const Scaleform::Pickable<Scaleform::Render::BlendPrimitive> &);
	Scaleform::Render::BlendPrimitive * GetPtr();
	Scaleform::Render::BlendPrimitive * operator->();
	Scaleform::Render::BlendPrimitive & operator*();
private:
	Scaleform::Render::BlendPrimitive * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::RenderTarget>
{
public:
	Pickable<Scaleform::Render::RenderTarget>(Scaleform::Render::RenderTarget *, Scaleform::PickType);
	Pickable<Scaleform::Render::RenderTarget>(Scaleform::Render::RenderTarget *);
	Pickable<Scaleform::Render::RenderTarget>();
	Scaleform::Pickable<Scaleform::Render::RenderTarget> & operator=(const Scaleform::Pickable<Scaleform::Render::RenderTarget> &);
	Scaleform::Render::RenderTarget * GetPtr();
	Scaleform::Render::RenderTarget * operator->();
	Scaleform::Render::RenderTarget & operator*();
private:
	Scaleform::Render::RenderTarget * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::HAL>
{
public:
	Pickable<Scaleform::Render::HAL>(Scaleform::Render::HAL *, Scaleform::PickType);
	Pickable<Scaleform::Render::HAL>(Scaleform::Render::HAL *);
	Pickable<Scaleform::Render::HAL>();
	Scaleform::Pickable<Scaleform::Render::HAL> & operator=(const Scaleform::Pickable<Scaleform::Render::HAL> &);
	Scaleform::Render::HAL * GetPtr();
	Scaleform::Render::HAL * operator->();
	Scaleform::Render::HAL & operator*();
private:
	Scaleform::Render::HAL * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::ThreadCommand>
{
public:
	Pickable<Scaleform::Render::ThreadCommand>(Scaleform::Render::ThreadCommand *, Scaleform::PickType);
	Pickable<Scaleform::Render::ThreadCommand>(Scaleform::Render::ThreadCommand *);
	Pickable<Scaleform::Render::ThreadCommand>();
	Scaleform::Pickable<Scaleform::Render::ThreadCommand> & operator=(const Scaleform::Pickable<Scaleform::Render::ThreadCommand> &);
	Scaleform::Render::ThreadCommand * GetPtr();
	Scaleform::Render::ThreadCommand * operator->();
	Scaleform::Render::ThreadCommand & operator*();
private:
	Scaleform::Render::ThreadCommand * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::SystemVertexFormat>
{
public:
	Pickable<Scaleform::Render::SystemVertexFormat>(Scaleform::Render::SystemVertexFormat *, Scaleform::PickType);
	Pickable<Scaleform::Render::SystemVertexFormat>(Scaleform::Render::SystemVertexFormat *);
	Pickable<Scaleform::Render::SystemVertexFormat>();
	Scaleform::Pickable<Scaleform::Render::SystemVertexFormat> & operator=(const Scaleform::Pickable<Scaleform::Render::SystemVertexFormat> &);
	Scaleform::Render::SystemVertexFormat * GetPtr();
	Scaleform::Render::SystemVertexFormat * operator->();
	Scaleform::Render::SystemVertexFormat & operator*();
private:
	Scaleform::Render::SystemVertexFormat * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GL::HALGLBuffer>
{
public:
	Pickable<Scaleform::Render::GL::HALGLBuffer>(Scaleform::Render::GL::HALGLBuffer *, Scaleform::PickType);
	Pickable<Scaleform::Render::GL::HALGLBuffer>(Scaleform::Render::GL::HALGLBuffer *);
	Pickable<Scaleform::Render::GL::HALGLBuffer>();
	Scaleform::Pickable<Scaleform::Render::GL::HALGLBuffer> & operator=(const Scaleform::Pickable<Scaleform::Render::GL::HALGLBuffer> &);
	Scaleform::Render::GL::HALGLBuffer * GetPtr();
	Scaleform::Render::GL::HALGLBuffer * operator->();
	Scaleform::Render::GL::HALGLBuffer & operator*();
private:
	Scaleform::Render::GL::HALGLBuffer * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GL::HAL>
{
public:
	Pickable<Scaleform::Render::GL::HAL>(Scaleform::Render::GL::HAL *, Scaleform::PickType);
	Pickable<Scaleform::Render::GL::HAL>(Scaleform::Render::GL::HAL *);
	Pickable<Scaleform::Render::GL::HAL>();
	Scaleform::Pickable<Scaleform::Render::GL::HAL> & operator=(const Scaleform::Pickable<Scaleform::Render::GL::HAL> &);
	Scaleform::Render::GL::HAL * GetPtr();
	Scaleform::Render::GL::HAL * operator->();
	Scaleform::Render::GL::HAL & operator*();
private:
	Scaleform::Render::GL::HAL * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::Resource>
{
public:
	Pickable<Scaleform::GFx::Resource>(Scaleform::GFx::Resource *, Scaleform::PickType);
	Pickable<Scaleform::GFx::Resource>(Scaleform::GFx::Resource *);
	Pickable<Scaleform::GFx::Resource>();
	Scaleform::Pickable<Scaleform::GFx::Resource> & operator=(const Scaleform::Pickable<Scaleform::GFx::Resource> &);
	Scaleform::GFx::Resource * GetPtr();
	Scaleform::GFx::Resource * operator->();
	Scaleform::GFx::Resource & operator*();
private:
	Scaleform::GFx::Resource * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::InteractiveObject>
{
public:
	Pickable<Scaleform::GFx::InteractiveObject>(Scaleform::GFx::InteractiveObject *, Scaleform::PickType);
	Pickable<Scaleform::GFx::InteractiveObject>(Scaleform::GFx::InteractiveObject *);
	Pickable<Scaleform::GFx::InteractiveObject>();
	Scaleform::Pickable<Scaleform::GFx::InteractiveObject> & operator=(const Scaleform::Pickable<Scaleform::GFx::InteractiveObject> &);
	Scaleform::GFx::InteractiveObject * GetPtr();
	Scaleform::GFx::InteractiveObject * operator->();
	Scaleform::GFx::InteractiveObject & operator*();
private:
	Scaleform::GFx::InteractiveObject * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::Text::CompositionString>
{
public:
	Pickable<Scaleform::GFx::Text::CompositionString>(Scaleform::GFx::Text::CompositionString *, Scaleform::PickType);
	Pickable<Scaleform::GFx::Text::CompositionString>(Scaleform::GFx::Text::CompositionString *);
	Pickable<Scaleform::GFx::Text::CompositionString>();
	Scaleform::Pickable<Scaleform::GFx::Text::CompositionString> & operator=(const Scaleform::Pickable<Scaleform::GFx::Text::CompositionString> &);
	Scaleform::GFx::Text::CompositionString * GetPtr();
	Scaleform::GFx::Text::CompositionString * operator->();
	Scaleform::GFx::Text::CompositionString & operator*();
private:
	Scaleform::GFx::Text::CompositionString * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ResourceWeakLib>
{
public:
	Pickable<Scaleform::GFx::ResourceWeakLib>(Scaleform::GFx::ResourceWeakLib *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ResourceWeakLib>(Scaleform::GFx::ResourceWeakLib *);
	Pickable<Scaleform::GFx::ResourceWeakLib>();
	Scaleform::Pickable<Scaleform::GFx::ResourceWeakLib> & operator=(const Scaleform::Pickable<Scaleform::GFx::ResourceWeakLib> &);
	Scaleform::GFx::ResourceWeakLib * GetPtr();
	Scaleform::GFx::ResourceWeakLib * operator->();
	Scaleform::GFx::ResourceWeakLib & operator*();
private:
	Scaleform::GFx::ResourceWeakLib * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::StateBagImpl>
{
public:
	Pickable<Scaleform::GFx::StateBagImpl>(Scaleform::GFx::StateBagImpl *, Scaleform::PickType);
	Pickable<Scaleform::GFx::StateBagImpl>(Scaleform::GFx::StateBagImpl *);
	Pickable<Scaleform::GFx::StateBagImpl>();
	Scaleform::Pickable<Scaleform::GFx::StateBagImpl> & operator=(const Scaleform::Pickable<Scaleform::GFx::StateBagImpl> &);
	Scaleform::GFx::StateBagImpl * GetPtr();
	Scaleform::GFx::StateBagImpl * operator->();
	Scaleform::GFx::StateBagImpl & operator*();
private:
	Scaleform::GFx::StateBagImpl * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::State>
{
public:
	Pickable<Scaleform::GFx::State>(Scaleform::GFx::State *, Scaleform::PickType);
	Pickable<Scaleform::GFx::State>(Scaleform::GFx::State *);
	Pickable<Scaleform::GFx::State>();
	Scaleform::Pickable<Scaleform::GFx::State> & operator=(const Scaleform::Pickable<Scaleform::GFx::State> &);
	Scaleform::GFx::State * GetPtr();
	Scaleform::GFx::State * operator->();
	Scaleform::GFx::State & operator*();
private:
	Scaleform::GFx::State * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::TextureGlyphData>
{
public:
	Pickable<Scaleform::GFx::TextureGlyphData>(Scaleform::GFx::TextureGlyphData *, Scaleform::PickType);
	Pickable<Scaleform::GFx::TextureGlyphData>(Scaleform::GFx::TextureGlyphData *);
	Pickable<Scaleform::GFx::TextureGlyphData>();
	Scaleform::Pickable<Scaleform::GFx::TextureGlyphData> & operator=(const Scaleform::Pickable<Scaleform::GFx::TextureGlyphData> &);
	Scaleform::GFx::TextureGlyphData * GetPtr();
	Scaleform::GFx::TextureGlyphData * operator->();
	Scaleform::GFx::TextureGlyphData & operator*();
private:
	Scaleform::GFx::TextureGlyphData * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::LoadUpdateSync>
{
public:
	Pickable<Scaleform::GFx::LoadUpdateSync>(Scaleform::GFx::LoadUpdateSync *, Scaleform::PickType);
	Pickable<Scaleform::GFx::LoadUpdateSync>(Scaleform::GFx::LoadUpdateSync *);
	Pickable<Scaleform::GFx::LoadUpdateSync>();
	Scaleform::Pickable<Scaleform::GFx::LoadUpdateSync> & operator=(const Scaleform::Pickable<Scaleform::GFx::LoadUpdateSync> &);
	Scaleform::GFx::LoadUpdateSync * GetPtr();
	Scaleform::GFx::LoadUpdateSync * operator->();
	Scaleform::GFx::LoadUpdateSync & operator*();
private:
	Scaleform::GFx::LoadUpdateSync * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::FileOpener>
{
public:
	Pickable<Scaleform::GFx::FileOpener>(Scaleform::GFx::FileOpener *, Scaleform::PickType);
	Pickable<Scaleform::GFx::FileOpener>(Scaleform::GFx::FileOpener *);
	Pickable<Scaleform::GFx::FileOpener>();
	Scaleform::Pickable<Scaleform::GFx::FileOpener> & operator=(const Scaleform::Pickable<Scaleform::GFx::FileOpener> &);
	Scaleform::GFx::FileOpener * GetPtr();
	Scaleform::GFx::FileOpener * operator->();
	Scaleform::GFx::FileOpener & operator*();
private:
	Scaleform::GFx::FileOpener * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Text::StyledText>
{
public:
	Pickable<Scaleform::Render::Text::StyledText>(Scaleform::Render::Text::StyledText *, Scaleform::PickType);
	Pickable<Scaleform::Render::Text::StyledText>(Scaleform::Render::Text::StyledText *);
	Pickable<Scaleform::Render::Text::StyledText>();
	Scaleform::Pickable<Scaleform::Render::Text::StyledText> & operator=(const Scaleform::Pickable<Scaleform::Render::Text::StyledText> &);
	Scaleform::Render::Text::StyledText * GetPtr();
	Scaleform::Render::Text::StyledText * operator->();
	Scaleform::Render::Text::StyledText & operator*();
private:
	Scaleform::Render::Text::StyledText * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ImagePackParamsBase>
{
public:
	Pickable<Scaleform::GFx::ImagePackParamsBase>(Scaleform::GFx::ImagePackParamsBase *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ImagePackParamsBase>(Scaleform::GFx::ImagePackParamsBase *);
	Pickable<Scaleform::GFx::ImagePackParamsBase>();
	Scaleform::Pickable<Scaleform::GFx::ImagePackParamsBase> & operator=(const Scaleform::Pickable<Scaleform::GFx::ImagePackParamsBase> &);
	Scaleform::GFx::ImagePackParamsBase * GetPtr();
	Scaleform::GFx::ImagePackParamsBase * operator->();
	Scaleform::GFx::ImagePackParamsBase & operator*();
private:
	Scaleform::GFx::ImagePackParamsBase * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::WeakPtrProxy>
{
public:
	Pickable<Scaleform::WeakPtrProxy>(Scaleform::WeakPtrProxy *, Scaleform::PickType);
	Pickable<Scaleform::WeakPtrProxy>(Scaleform::WeakPtrProxy *);
	Pickable<Scaleform::WeakPtrProxy>();
	Scaleform::Pickable<Scaleform::WeakPtrProxy> & operator=(const Scaleform::Pickable<Scaleform::WeakPtrProxy> &);
	Scaleform::WeakPtrProxy * GetPtr();
	Scaleform::WeakPtrProxy * operator->();
	Scaleform::WeakPtrProxy & operator*();
private:
	Scaleform::WeakPtrProxy * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::DisplayObjectBase>
{
public:
	Pickable<Scaleform::GFx::DisplayObjectBase>(Scaleform::GFx::DisplayObjectBase *, Scaleform::PickType);
	Pickable<Scaleform::GFx::DisplayObjectBase>(Scaleform::GFx::DisplayObjectBase *);
	Pickable<Scaleform::GFx::DisplayObjectBase>();
	Scaleform::Pickable<Scaleform::GFx::DisplayObjectBase> & operator=(const Scaleform::Pickable<Scaleform::GFx::DisplayObjectBase> &);
	Scaleform::GFx::DisplayObjectBase * GetPtr();
	Scaleform::GFx::DisplayObjectBase * operator->();
	Scaleform::GFx::DisplayObjectBase & operator*();
private:
	Scaleform::GFx::DisplayObjectBase * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ASIMEManager>
{
public:
	Pickable<Scaleform::GFx::ASIMEManager>(Scaleform::GFx::ASIMEManager *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ASIMEManager>(Scaleform::GFx::ASIMEManager *);
	Pickable<Scaleform::GFx::ASIMEManager>();
	Scaleform::Pickable<Scaleform::GFx::ASIMEManager> & operator=(const Scaleform::Pickable<Scaleform::GFx::ASIMEManager> &);
	Scaleform::GFx::ASIMEManager * GetPtr();
	Scaleform::GFx::ASIMEManager * operator->();
	Scaleform::GFx::ASIMEManager & operator*();
private:
	Scaleform::GFx::ASIMEManager * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::IMEManagerBase>
{
public:
	Pickable<Scaleform::GFx::IMEManagerBase>(Scaleform::GFx::IMEManagerBase *, Scaleform::PickType);
	Pickable<Scaleform::GFx::IMEManagerBase>(Scaleform::GFx::IMEManagerBase *);
	Pickable<Scaleform::GFx::IMEManagerBase>();
	Scaleform::Pickable<Scaleform::GFx::IMEManagerBase> & operator=(const Scaleform::Pickable<Scaleform::GFx::IMEManagerBase> &);
	Scaleform::GFx::IMEManagerBase * GetPtr();
	Scaleform::GFx::IMEManagerBase * operator->();
	Scaleform::GFx::IMEManagerBase & operator*();
private:
	Scaleform::GFx::IMEManagerBase * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::MovieDefImpl>
{
public:
	Pickable<Scaleform::GFx::MovieDefImpl>(Scaleform::GFx::MovieDefImpl *, Scaleform::PickType);
	Pickable<Scaleform::GFx::MovieDefImpl>(Scaleform::GFx::MovieDefImpl *);
	Pickable<Scaleform::GFx::MovieDefImpl>();
	Scaleform::Pickable<Scaleform::GFx::MovieDefImpl> & operator=(const Scaleform::Pickable<Scaleform::GFx::MovieDefImpl> &);
	Scaleform::GFx::MovieDefImpl * GetPtr();
	Scaleform::GFx::MovieDefImpl * operator->();
	Scaleform::GFx::MovieDefImpl & operator*();
private:
	Scaleform::GFx::MovieDefImpl * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::TreeNode>
{
public:
	Pickable<Scaleform::Render::TreeNode>(Scaleform::Render::TreeNode *, Scaleform::PickType);
	Pickable<Scaleform::Render::TreeNode>(Scaleform::Render::TreeNode *);
	Pickable<Scaleform::Render::TreeNode>();
	Scaleform::Pickable<Scaleform::Render::TreeNode> & operator=(const Scaleform::Pickable<Scaleform::Render::TreeNode> &);
	Scaleform::Render::TreeNode * GetPtr();
	Scaleform::Render::TreeNode * operator->();
	Scaleform::Render::TreeNode & operator*();
private:
	Scaleform::Render::TreeNode * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ASIMEManager::IMEFuncHandler>
{
public:
	Pickable<Scaleform::GFx::ASIMEManager::IMEFuncHandler>(Scaleform::GFx::ASIMEManager::IMEFuncHandler *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ASIMEManager::IMEFuncHandler>(Scaleform::GFx::ASIMEManager::IMEFuncHandler *);
	Pickable<Scaleform::GFx::ASIMEManager::IMEFuncHandler>();
	Scaleform::Pickable<Scaleform::GFx::ASIMEManager::IMEFuncHandler> & operator=(const Scaleform::Pickable<Scaleform::GFx::ASIMEManager::IMEFuncHandler> &);
	Scaleform::GFx::ASIMEManager::IMEFuncHandler * GetPtr();
	Scaleform::GFx::ASIMEManager::IMEFuncHandler * operator->();
	Scaleform::GFx::ASIMEManager::IMEFuncHandler & operator*();
private:
	Scaleform::GFx::ASIMEManager::IMEFuncHandler * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::DisplayObjContainer>
{
public:
	Pickable<Scaleform::GFx::DisplayObjContainer>(Scaleform::GFx::DisplayObjContainer *, Scaleform::PickType);
	Pickable<Scaleform::GFx::DisplayObjContainer>(Scaleform::GFx::DisplayObjContainer *);
	Pickable<Scaleform::GFx::DisplayObjContainer>();
	Scaleform::Pickable<Scaleform::GFx::DisplayObjContainer> & operator=(const Scaleform::Pickable<Scaleform::GFx::DisplayObjContainer> &);
	Scaleform::GFx::DisplayObjContainer * GetPtr();
	Scaleform::GFx::DisplayObjContainer * operator->();
	Scaleform::GFx::DisplayObjContainer & operator*();
private:
	Scaleform::GFx::DisplayObjContainer * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::TextField>
{
public:
	Pickable<Scaleform::GFx::TextField>(Scaleform::GFx::TextField *, Scaleform::PickType);
	Pickable<Scaleform::GFx::TextField>(Scaleform::GFx::TextField *);
	Pickable<Scaleform::GFx::TextField>();
	Scaleform::Pickable<Scaleform::GFx::TextField> & operator=(const Scaleform::Pickable<Scaleform::GFx::TextField> &);
	Scaleform::GFx::TextField * GetPtr();
	Scaleform::GFx::TextField * operator->();
	Scaleform::GFx::TextField & operator*();
private:
	Scaleform::GFx::TextField * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::LogState>
{
public:
	Pickable<Scaleform::GFx::LogState>(Scaleform::GFx::LogState *, Scaleform::PickType);
	Pickable<Scaleform::GFx::LogState>(Scaleform::GFx::LogState *);
	Pickable<Scaleform::GFx::LogState>();
	Scaleform::Pickable<Scaleform::GFx::LogState> & operator=(const Scaleform::Pickable<Scaleform::GFx::LogState> &);
	Scaleform::GFx::LogState * GetPtr();
	Scaleform::GFx::LogState * operator->();
	Scaleform::GFx::LogState & operator*();
private:
	Scaleform::GFx::LogState * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::JPEG::TablesHeader>
{
public:
	Pickable<Scaleform::Render::JPEG::TablesHeader>(Scaleform::Render::JPEG::TablesHeader *, Scaleform::PickType);
	Pickable<Scaleform::Render::JPEG::TablesHeader>(Scaleform::Render::JPEG::TablesHeader *);
	Pickable<Scaleform::Render::JPEG::TablesHeader>();
	Scaleform::Pickable<Scaleform::Render::JPEG::TablesHeader> & operator=(const Scaleform::Pickable<Scaleform::Render::JPEG::TablesHeader> &);
	Scaleform::Render::JPEG::TablesHeader * GetPtr();
	Scaleform::Render::JPEG::TablesHeader * operator->();
	Scaleform::Render::JPEG::TablesHeader & operator*();
private:
	Scaleform::Render::JPEG::TablesHeader * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::MovieBindProcess>
{
public:
	Pickable<Scaleform::GFx::MovieBindProcess>(Scaleform::GFx::MovieBindProcess *, Scaleform::PickType);
	Pickable<Scaleform::GFx::MovieBindProcess>(Scaleform::GFx::MovieBindProcess *);
	Pickable<Scaleform::GFx::MovieBindProcess>();
	Scaleform::Pickable<Scaleform::GFx::MovieBindProcess> & operator=(const Scaleform::Pickable<Scaleform::GFx::MovieBindProcess> &);
	Scaleform::GFx::MovieBindProcess * GetPtr();
	Scaleform::GFx::MovieBindProcess * operator->();
	Scaleform::GFx::MovieBindProcess & operator*();
private:
	Scaleform::GFx::MovieBindProcess * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::TreeContainer>
{
public:
	Pickable<Scaleform::Render::TreeContainer>(Scaleform::Render::TreeContainer *, Scaleform::PickType);
	Pickable<Scaleform::Render::TreeContainer>(Scaleform::Render::TreeContainer *);
	Pickable<Scaleform::Render::TreeContainer>();
	Scaleform::Pickable<Scaleform::Render::TreeContainer> & operator=(const Scaleform::Pickable<Scaleform::Render::TreeContainer> &);
	Scaleform::Render::TreeContainer * GetPtr();
	Scaleform::Render::TreeContainer * operator->();
	Scaleform::Render::TreeContainer & operator*();
private:
	Scaleform::Render::TreeContainer * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::FontManager>
{
public:
	Pickable<Scaleform::GFx::FontManager>(Scaleform::GFx::FontManager *, Scaleform::PickType);
	Pickable<Scaleform::GFx::FontManager>(Scaleform::GFx::FontManager *);
	Pickable<Scaleform::GFx::FontManager>();
	Scaleform::Pickable<Scaleform::GFx::FontManager> & operator=(const Scaleform::Pickable<Scaleform::GFx::FontManager> &);
	Scaleform::GFx::FontManager * GetPtr();
	Scaleform::GFx::FontManager * operator->();
	Scaleform::GFx::FontManager & operator*();
private:
	Scaleform::GFx::FontManager * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::DrawingContext>
{
public:
	Pickable<Scaleform::GFx::DrawingContext>(Scaleform::GFx::DrawingContext *, Scaleform::PickType);
	Pickable<Scaleform::GFx::DrawingContext>(Scaleform::GFx::DrawingContext *);
	Pickable<Scaleform::GFx::DrawingContext>();
	Scaleform::Pickable<Scaleform::GFx::DrawingContext> & operator=(const Scaleform::Pickable<Scaleform::GFx::DrawingContext> &);
	Scaleform::GFx::DrawingContext * GetPtr();
	Scaleform::GFx::DrawingContext * operator->();
	Scaleform::GFx::DrawingContext & operator*();
private:
	Scaleform::GFx::DrawingContext * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::CharacterHandle>
{
public:
	Pickable<Scaleform::GFx::CharacterHandle>(Scaleform::GFx::CharacterHandle *, Scaleform::PickType);
	Pickable<Scaleform::GFx::CharacterHandle>(Scaleform::GFx::CharacterHandle *);
	Pickable<Scaleform::GFx::CharacterHandle>();
	Scaleform::Pickable<Scaleform::GFx::CharacterHandle> & operator=(const Scaleform::Pickable<Scaleform::GFx::CharacterHandle> &);
	Scaleform::GFx::CharacterHandle * GetPtr();
	Scaleform::GFx::CharacterHandle * operator->();
	Scaleform::GFx::CharacterHandle & operator*();
private:
	Scaleform::GFx::CharacterHandle * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ResourceLib>
{
public:
	Pickable<Scaleform::GFx::ResourceLib>(Scaleform::GFx::ResourceLib *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ResourceLib>(Scaleform::GFx::ResourceLib *);
	Pickable<Scaleform::GFx::ResourceLib>();
	Scaleform::Pickable<Scaleform::GFx::ResourceLib> & operator=(const Scaleform::Pickable<Scaleform::GFx::ResourceLib> &);
	Scaleform::GFx::ResourceLib * GetPtr();
	Scaleform::GFx::ResourceLib * operator->();
	Scaleform::GFx::ResourceLib & operator*();
private:
	Scaleform::GFx::ResourceLib * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ImageResource>
{
public:
	Pickable<Scaleform::GFx::ImageResource>(Scaleform::GFx::ImageResource *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ImageResource>(Scaleform::GFx::ImageResource *);
	Pickable<Scaleform::GFx::ImageResource>();
	Scaleform::Pickable<Scaleform::GFx::ImageResource> & operator=(const Scaleform::Pickable<Scaleform::GFx::ImageResource> &);
	Scaleform::GFx::ImageResource * GetPtr();
	Scaleform::GFx::ImageResource * operator->();
	Scaleform::GFx::ImageResource & operator*();
private:
	Scaleform::GFx::ImageResource * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::FontManagerStates>
{
public:
	Pickable<Scaleform::GFx::FontManagerStates>(Scaleform::GFx::FontManagerStates *, Scaleform::PickType);
	Pickable<Scaleform::GFx::FontManagerStates>(Scaleform::GFx::FontManagerStates *);
	Pickable<Scaleform::GFx::FontManagerStates>();
	Scaleform::Pickable<Scaleform::GFx::FontManagerStates> & operator=(const Scaleform::Pickable<Scaleform::GFx::FontManagerStates> &);
	Scaleform::GFx::FontManagerStates * GetPtr();
	Scaleform::GFx::FontManagerStates * operator->();
	Scaleform::GFx::FontManagerStates & operator*();
private:
	Scaleform::GFx::FontManagerStates * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::TreeText>
{
public:
	Pickable<Scaleform::Render::TreeText>(Scaleform::Render::TreeText *, Scaleform::PickType);
	Pickable<Scaleform::Render::TreeText>(Scaleform::Render::TreeText *);
	Pickable<Scaleform::Render::TreeText>();
	Scaleform::Pickable<Scaleform::Render::TreeText> & operator=(const Scaleform::Pickable<Scaleform::Render::TreeText> &);
	Scaleform::Render::TreeText * GetPtr();
	Scaleform::Render::TreeText * operator->();
	Scaleform::Render::TreeText & operator*();
private:
	Scaleform::Render::TreeText * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::TreeRoot>
{
public:
	Pickable<Scaleform::Render::TreeRoot>(Scaleform::Render::TreeRoot *, Scaleform::PickType);
	Pickable<Scaleform::Render::TreeRoot>(Scaleform::Render::TreeRoot *);
	Pickable<Scaleform::Render::TreeRoot>();
	Scaleform::Pickable<Scaleform::Render::TreeRoot> & operator=(const Scaleform::Pickable<Scaleform::Render::TreeRoot> &);
	Scaleform::Render::TreeRoot * GetPtr();
	Scaleform::Render::TreeRoot * operator->();
	Scaleform::Render::TreeRoot & operator*();
private:
	Scaleform::Render::TreeRoot * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::DrawingContext::PackedShape>
{
public:
	Pickable<Scaleform::GFx::DrawingContext::PackedShape>(Scaleform::GFx::DrawingContext::PackedShape *, Scaleform::PickType);
	Pickable<Scaleform::GFx::DrawingContext::PackedShape>(Scaleform::GFx::DrawingContext::PackedShape *);
	Pickable<Scaleform::GFx::DrawingContext::PackedShape>();
	Scaleform::Pickable<Scaleform::GFx::DrawingContext::PackedShape> & operator=(const Scaleform::Pickable<Scaleform::GFx::DrawingContext::PackedShape> &);
	Scaleform::GFx::DrawingContext::PackedShape * GetPtr();
	Scaleform::GFx::DrawingContext::PackedShape * operator->();
	Scaleform::GFx::DrawingContext::PackedShape & operator*();
private:
	Scaleform::GFx::DrawingContext::PackedShape * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::TreeShape>
{
public:
	Pickable<Scaleform::Render::TreeShape>(Scaleform::Render::TreeShape *, Scaleform::PickType);
	Pickable<Scaleform::Render::TreeShape>(Scaleform::Render::TreeShape *);
	Pickable<Scaleform::Render::TreeShape>();
	Scaleform::Pickable<Scaleform::Render::TreeShape> & operator=(const Scaleform::Pickable<Scaleform::Render::TreeShape> &);
	Scaleform::Render::TreeShape * GetPtr();
	Scaleform::Render::TreeShape * operator->();
	Scaleform::Render::TreeShape & operator*();
private:
	Scaleform::Render::TreeShape * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::ColorMatrixFilter>
{
public:
	Pickable<Scaleform::Render::ColorMatrixFilter>(Scaleform::Render::ColorMatrixFilter *, Scaleform::PickType);
	Pickable<Scaleform::Render::ColorMatrixFilter>(Scaleform::Render::ColorMatrixFilter *);
	Pickable<Scaleform::Render::ColorMatrixFilter>();
	Scaleform::Pickable<Scaleform::Render::ColorMatrixFilter> & operator=(const Scaleform::Pickable<Scaleform::Render::ColorMatrixFilter> &);
	Scaleform::Render::ColorMatrixFilter * GetPtr();
	Scaleform::Render::ColorMatrixFilter * operator->();
	Scaleform::Render::ColorMatrixFilter & operator*();
private:
	Scaleform::Render::ColorMatrixFilter * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Filter>
{
public:
	Pickable<Scaleform::Render::Filter>(Scaleform::Render::Filter *, Scaleform::PickType);
	Pickable<Scaleform::Render::Filter>(Scaleform::Render::Filter *);
	Pickable<Scaleform::Render::Filter>();
	Scaleform::Pickable<Scaleform::Render::Filter> & operator=(const Scaleform::Pickable<Scaleform::Render::Filter> &);
	Scaleform::Render::Filter * GetPtr();
	Scaleform::Render::Filter * operator->();
	Scaleform::Render::Filter & operator*();
private:
	Scaleform::Render::Filter * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::FontGlyphPacker>
{
public:
	Pickable<Scaleform::GFx::FontGlyphPacker>(Scaleform::GFx::FontGlyphPacker *, Scaleform::PickType);
	Pickable<Scaleform::GFx::FontGlyphPacker>(Scaleform::GFx::FontGlyphPacker *);
	Pickable<Scaleform::GFx::FontGlyphPacker>();
	Scaleform::Pickable<Scaleform::GFx::FontGlyphPacker> & operator=(const Scaleform::Pickable<Scaleform::GFx::FontGlyphPacker> &);
	Scaleform::GFx::FontGlyphPacker * GetPtr();
	Scaleform::GFx::FontGlyphPacker * operator->();
	Scaleform::GFx::FontGlyphPacker & operator*();
private:
	Scaleform::GFx::FontGlyphPacker * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::RawImage>
{
public:
	Pickable<Scaleform::Render::RawImage>(Scaleform::Render::RawImage *, Scaleform::PickType);
	Pickable<Scaleform::Render::RawImage>(Scaleform::Render::RawImage *);
	Pickable<Scaleform::Render::RawImage>();
	Scaleform::Pickable<Scaleform::Render::RawImage> & operator=(const Scaleform::Pickable<Scaleform::Render::RawImage> &);
	Scaleform::Render::RawImage * GetPtr();
	Scaleform::Render::RawImage * operator->();
	Scaleform::Render::RawImage & operator*();
private:
	Scaleform::Render::RawImage * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::MovieDefBindStates>
{
public:
	Pickable<Scaleform::GFx::MovieDefBindStates>(Scaleform::GFx::MovieDefBindStates *, Scaleform::PickType);
	Pickable<Scaleform::GFx::MovieDefBindStates>(Scaleform::GFx::MovieDefBindStates *);
	Pickable<Scaleform::GFx::MovieDefBindStates>();
	Scaleform::Pickable<Scaleform::GFx::MovieDefBindStates> & operator=(const Scaleform::Pickable<Scaleform::GFx::MovieDefBindStates> &);
	Scaleform::GFx::MovieDefBindStates * GetPtr();
	Scaleform::GFx::MovieDefBindStates * operator->();
	Scaleform::GFx::MovieDefBindStates & operator*();
private:
	Scaleform::GFx::MovieDefBindStates * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::LoaderImpl>
{
public:
	Pickable<Scaleform::GFx::LoaderImpl>(Scaleform::GFx::LoaderImpl *, Scaleform::PickType);
	Pickable<Scaleform::GFx::LoaderImpl>(Scaleform::GFx::LoaderImpl *);
	Pickable<Scaleform::GFx::LoaderImpl>();
	Scaleform::Pickable<Scaleform::GFx::LoaderImpl> & operator=(const Scaleform::Pickable<Scaleform::GFx::LoaderImpl> &);
	Scaleform::GFx::LoaderImpl * GetPtr();
	Scaleform::GFx::LoaderImpl * operator->();
	Scaleform::GFx::LoaderImpl & operator*();
private:
	Scaleform::GFx::LoaderImpl * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::LoadStates>
{
public:
	Pickable<Scaleform::GFx::LoadStates>(Scaleform::GFx::LoadStates *, Scaleform::PickType);
	Pickable<Scaleform::GFx::LoadStates>(Scaleform::GFx::LoadStates *);
	Pickable<Scaleform::GFx::LoadStates>();
	Scaleform::Pickable<Scaleform::GFx::LoadStates> & operator=(const Scaleform::Pickable<Scaleform::GFx::LoadStates> &);
	Scaleform::GFx::LoadStates * GetPtr();
	Scaleform::GFx::LoadStates * operator->();
	Scaleform::GFx::LoadStates & operator*();
private:
	Scaleform::GFx::LoadStates * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::DefaultFontLibNameState>
{
public:
	Pickable<Scaleform::GFx::DefaultFontLibNameState>(Scaleform::GFx::DefaultFontLibNameState *, Scaleform::PickType);
	Pickable<Scaleform::GFx::DefaultFontLibNameState>(Scaleform::GFx::DefaultFontLibNameState *);
	Pickable<Scaleform::GFx::DefaultFontLibNameState>();
	Scaleform::Pickable<Scaleform::GFx::DefaultFontLibNameState> & operator=(const Scaleform::Pickable<Scaleform::GFx::DefaultFontLibNameState> &);
	Scaleform::GFx::DefaultFontLibNameState * GetPtr();
	Scaleform::GFx::DefaultFontLibNameState * operator->();
	Scaleform::GFx::DefaultFontLibNameState & operator*();
private:
	Scaleform::GFx::DefaultFontLibNameState * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::FontData>
{
public:
	Pickable<Scaleform::GFx::FontData>(Scaleform::GFx::FontData *, Scaleform::PickType);
	Pickable<Scaleform::GFx::FontData>(Scaleform::GFx::FontData *);
	Pickable<Scaleform::GFx::FontData>();
	Scaleform::Pickable<Scaleform::GFx::FontData> & operator=(const Scaleform::Pickable<Scaleform::GFx::FontData> &);
	Scaleform::GFx::FontData * GetPtr();
	Scaleform::GFx::FontData * operator->();
	Scaleform::GFx::FontData & operator*();
private:
	Scaleform::GFx::FontData * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::FontHandle>
{
public:
	Pickable<Scaleform::GFx::FontHandle>(Scaleform::GFx::FontHandle *, Scaleform::PickType);
	Pickable<Scaleform::GFx::FontHandle>(Scaleform::GFx::FontHandle *);
	Pickable<Scaleform::GFx::FontHandle>();
	Scaleform::Pickable<Scaleform::GFx::FontHandle> & operator=(const Scaleform::Pickable<Scaleform::GFx::FontHandle> &);
	Scaleform::GFx::FontHandle * GetPtr();
	Scaleform::GFx::FontHandle * operator->();
	Scaleform::GFx::FontHandle & operator*();
private:
	Scaleform::GFx::FontHandle * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::FontResource>
{
public:
	Pickable<Scaleform::GFx::FontResource>(Scaleform::GFx::FontResource *, Scaleform::PickType);
	Pickable<Scaleform::GFx::FontResource>(Scaleform::GFx::FontResource *);
	Pickable<Scaleform::GFx::FontResource>();
	Scaleform::Pickable<Scaleform::GFx::FontResource> & operator=(const Scaleform::Pickable<Scaleform::GFx::FontResource> &);
	Scaleform::GFx::FontResource * GetPtr();
	Scaleform::GFx::FontResource * operator->();
	Scaleform::GFx::FontResource & operator*();
private:
	Scaleform::GFx::FontResource * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::GFxSystemFontResourceKey>
{
public:
	Pickable<Scaleform::GFx::GFxSystemFontResourceKey>(Scaleform::GFx::GFxSystemFontResourceKey *, Scaleform::PickType);
	Pickable<Scaleform::GFx::GFxSystemFontResourceKey>(Scaleform::GFx::GFxSystemFontResourceKey *);
	Pickable<Scaleform::GFx::GFxSystemFontResourceKey>();
	Scaleform::Pickable<Scaleform::GFx::GFxSystemFontResourceKey> & operator=(const Scaleform::Pickable<Scaleform::GFx::GFxSystemFontResourceKey> &);
	Scaleform::GFx::GFxSystemFontResourceKey * GetPtr();
	Scaleform::GFx::GFxSystemFontResourceKey * operator->();
	Scaleform::GFx::GFxSystemFontResourceKey & operator*();
private:
	Scaleform::GFx::GFxSystemFontResourceKey * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ConstShapeNoStyles>
{
public:
	Pickable<Scaleform::GFx::ConstShapeNoStyles>(Scaleform::GFx::ConstShapeNoStyles *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ConstShapeNoStyles>(Scaleform::GFx::ConstShapeNoStyles *);
	Pickable<Scaleform::GFx::ConstShapeNoStyles>();
	Scaleform::Pickable<Scaleform::GFx::ConstShapeNoStyles> & operator=(const Scaleform::Pickable<Scaleform::GFx::ConstShapeNoStyles> &);
	Scaleform::GFx::ConstShapeNoStyles * GetPtr();
	Scaleform::GFx::ConstShapeNoStyles * operator->();
	Scaleform::GFx::ConstShapeNoStyles & operator*();
private:
	Scaleform::GFx::ConstShapeNoStyles * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ShapeDataBase>
{
public:
	Pickable<Scaleform::GFx::ShapeDataBase>(Scaleform::GFx::ShapeDataBase *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ShapeDataBase>(Scaleform::GFx::ShapeDataBase *);
	Pickable<Scaleform::GFx::ShapeDataBase>();
	Scaleform::Pickable<Scaleform::GFx::ShapeDataBase> & operator=(const Scaleform::Pickable<Scaleform::GFx::ShapeDataBase> &);
	Scaleform::GFx::ShapeDataBase * GetPtr();
	Scaleform::GFx::ShapeDataBase * operator->();
	Scaleform::GFx::ShapeDataBase & operator*();
private:
	Scaleform::GFx::ShapeDataBase * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::ImageSource>
{
public:
	Pickable<Scaleform::Render::ImageSource>(Scaleform::Render::ImageSource *, Scaleform::PickType);
	Pickable<Scaleform::Render::ImageSource>(Scaleform::Render::ImageSource *);
	Pickable<Scaleform::Render::ImageSource>();
	Scaleform::Pickable<Scaleform::Render::ImageSource> & operator=(const Scaleform::Pickable<Scaleform::Render::ImageSource> &);
	Scaleform::Render::ImageSource * GetPtr();
	Scaleform::Render::ImageSource * operator->();
	Scaleform::Render::ImageSource & operator*();
private:
	Scaleform::Render::ImageSource * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ImageFileInfoKeyData>
{
public:
	Pickable<Scaleform::GFx::ImageFileInfoKeyData>(Scaleform::GFx::ImageFileInfoKeyData *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ImageFileInfoKeyData>(Scaleform::GFx::ImageFileInfoKeyData *);
	Pickable<Scaleform::GFx::ImageFileInfoKeyData>();
	Scaleform::Pickable<Scaleform::GFx::ImageFileInfoKeyData> & operator=(const Scaleform::Pickable<Scaleform::GFx::ImageFileInfoKeyData> &);
	Scaleform::GFx::ImageFileInfoKeyData * GetPtr();
	Scaleform::GFx::ImageFileInfoKeyData * operator->();
	Scaleform::GFx::ImageFileInfoKeyData & operator*();
private:
	Scaleform::GFx::ImageFileInfoKeyData * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ImageFileInfo>
{
public:
	Pickable<Scaleform::GFx::ImageFileInfo>(Scaleform::GFx::ImageFileInfo *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ImageFileInfo>(Scaleform::GFx::ImageFileInfo *);
	Pickable<Scaleform::GFx::ImageFileInfo>();
	Scaleform::Pickable<Scaleform::GFx::ImageFileInfo> & operator=(const Scaleform::Pickable<Scaleform::GFx::ImageFileInfo> &);
	Scaleform::GFx::ImageFileInfo * GetPtr();
	Scaleform::GFx::ImageFileInfo * operator->();
	Scaleform::GFx::ImageFileInfo & operator*();
private:
	Scaleform::GFx::ImageFileInfo * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::MovieDataDef::LoadTaskData>
{
public:
	Pickable<Scaleform::GFx::MovieDataDef::LoadTaskData>(Scaleform::GFx::MovieDataDef::LoadTaskData *, Scaleform::PickType);
	Pickable<Scaleform::GFx::MovieDataDef::LoadTaskData>(Scaleform::GFx::MovieDataDef::LoadTaskData *);
	Pickable<Scaleform::GFx::MovieDataDef::LoadTaskData>();
	Scaleform::Pickable<Scaleform::GFx::MovieDataDef::LoadTaskData> & operator=(const Scaleform::Pickable<Scaleform::GFx::MovieDataDef::LoadTaskData> &);
	Scaleform::GFx::MovieDataDef::LoadTaskData * GetPtr();
	Scaleform::GFx::MovieDataDef::LoadTaskData * operator->();
	Scaleform::GFx::MovieDataDef::LoadTaskData & operator*();
private:
	Scaleform::GFx::MovieDataDef::LoadTaskData * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::WrapperImageSource>
{
public:
	Pickable<Scaleform::Render::WrapperImageSource>(Scaleform::Render::WrapperImageSource *, Scaleform::PickType);
	Pickable<Scaleform::Render::WrapperImageSource>(Scaleform::Render::WrapperImageSource *);
	Pickable<Scaleform::Render::WrapperImageSource>();
	Scaleform::Pickable<Scaleform::Render::WrapperImageSource> & operator=(const Scaleform::Pickable<Scaleform::Render::WrapperImageSource> &);
	Scaleform::Render::WrapperImageSource * GetPtr();
	Scaleform::Render::WrapperImageSource * operator->();
	Scaleform::Render::WrapperImageSource & operator*();
private:
	Scaleform::Render::WrapperImageSource * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::MovieDataDef>
{
public:
	Pickable<Scaleform::GFx::MovieDataDef>(Scaleform::GFx::MovieDataDef *, Scaleform::PickType);
	Pickable<Scaleform::GFx::MovieDataDef>(Scaleform::GFx::MovieDataDef *);
	Pickable<Scaleform::GFx::MovieDataDef>();
	Scaleform::Pickable<Scaleform::GFx::MovieDataDef> & operator=(const Scaleform::Pickable<Scaleform::GFx::MovieDataDef> &);
	Scaleform::GFx::MovieDataDef * GetPtr();
	Scaleform::GFx::MovieDataDef * operator->();
	Scaleform::GFx::MovieDataDef & operator*();
private:
	Scaleform::GFx::MovieDataDef * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::MovieImageLoadTask>
{
public:
	Pickable<Scaleform::GFx::MovieImageLoadTask>(Scaleform::GFx::MovieImageLoadTask *, Scaleform::PickType);
	Pickable<Scaleform::GFx::MovieImageLoadTask>(Scaleform::GFx::MovieImageLoadTask *);
	Pickable<Scaleform::GFx::MovieImageLoadTask>();
	Scaleform::Pickable<Scaleform::GFx::MovieImageLoadTask> & operator=(const Scaleform::Pickable<Scaleform::GFx::MovieImageLoadTask> &);
	Scaleform::GFx::MovieImageLoadTask * GetPtr();
	Scaleform::GFx::MovieImageLoadTask * operator->();
	Scaleform::GFx::MovieImageLoadTask & operator*();
private:
	Scaleform::GFx::MovieImageLoadTask * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::LoadProcess>
{
public:
	Pickable<Scaleform::GFx::LoadProcess>(Scaleform::GFx::LoadProcess *, Scaleform::PickType);
	Pickable<Scaleform::GFx::LoadProcess>(Scaleform::GFx::LoadProcess *);
	Pickable<Scaleform::GFx::LoadProcess>();
	Scaleform::Pickable<Scaleform::GFx::LoadProcess> & operator=(const Scaleform::Pickable<Scaleform::GFx::LoadProcess> &);
	Scaleform::GFx::LoadProcess * GetPtr();
	Scaleform::GFx::LoadProcess * operator->();
	Scaleform::GFx::LoadProcess & operator*();
private:
	Scaleform::GFx::LoadProcess * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::LoaderImpl::HttpFileCache>
{
public:
	Pickable<Scaleform::GFx::LoaderImpl::HttpFileCache>(Scaleform::GFx::LoaderImpl::HttpFileCache *, Scaleform::PickType);
	Pickable<Scaleform::GFx::LoaderImpl::HttpFileCache>(Scaleform::GFx::LoaderImpl::HttpFileCache *);
	Pickable<Scaleform::GFx::LoaderImpl::HttpFileCache>();
	Scaleform::Pickable<Scaleform::GFx::LoaderImpl::HttpFileCache> & operator=(const Scaleform::Pickable<Scaleform::GFx::LoaderImpl::HttpFileCache> &);
	Scaleform::GFx::LoaderImpl::HttpFileCache * GetPtr();
	Scaleform::GFx::LoaderImpl::HttpFileCache * operator->();
	Scaleform::GFx::LoaderImpl::HttpFileCache & operator*();
private:
	Scaleform::GFx::LoaderImpl::HttpFileCache * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ConstShapeWithStyles>
{
public:
	Pickable<Scaleform::GFx::ConstShapeWithStyles>(Scaleform::GFx::ConstShapeWithStyles *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ConstShapeWithStyles>(Scaleform::GFx::ConstShapeWithStyles *);
	Pickable<Scaleform::GFx::ConstShapeWithStyles>();
	Scaleform::Pickable<Scaleform::GFx::ConstShapeWithStyles> & operator=(const Scaleform::Pickable<Scaleform::GFx::ConstShapeWithStyles> &);
	Scaleform::GFx::ConstShapeWithStyles * GetPtr();
	Scaleform::GFx::ConstShapeWithStyles * operator->();
	Scaleform::GFx::ConstShapeWithStyles & operator*();
private:
	Scaleform::GFx::ConstShapeWithStyles * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Scale9GridInfo>
{
public:
	Pickable<Scaleform::Render::Scale9GridInfo>(Scaleform::Render::Scale9GridInfo *, Scaleform::PickType);
	Pickable<Scaleform::Render::Scale9GridInfo>(Scaleform::Render::Scale9GridInfo *);
	Pickable<Scaleform::Render::Scale9GridInfo>();
	Scaleform::Pickable<Scaleform::Render::Scale9GridInfo> & operator=(const Scaleform::Pickable<Scaleform::Render::Scale9GridInfo> &);
	Scaleform::Render::Scale9GridInfo * GetPtr();
	Scaleform::Render::Scale9GridInfo * operator->();
	Scaleform::Render::Scale9GridInfo & operator*();
private:
	Scaleform::Render::Scale9GridInfo * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::SwfShapeCharacterDef>
{
public:
	Pickable<Scaleform::GFx::SwfShapeCharacterDef>(Scaleform::GFx::SwfShapeCharacterDef *, Scaleform::PickType);
	Pickable<Scaleform::GFx::SwfShapeCharacterDef>(Scaleform::GFx::SwfShapeCharacterDef *);
	Pickable<Scaleform::GFx::SwfShapeCharacterDef>();
	Scaleform::Pickable<Scaleform::GFx::SwfShapeCharacterDef> & operator=(const Scaleform::Pickable<Scaleform::GFx::SwfShapeCharacterDef> &);
	Scaleform::GFx::SwfShapeCharacterDef * GetPtr();
	Scaleform::GFx::SwfShapeCharacterDef * operator->();
	Scaleform::GFx::SwfShapeCharacterDef & operator*();
private:
	Scaleform::GFx::SwfShapeCharacterDef * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::MemoryHeap>
{
public:
	Pickable<Scaleform::MemoryHeap>(Scaleform::MemoryHeap *, Scaleform::PickType);
	Pickable<Scaleform::MemoryHeap>(Scaleform::MemoryHeap *);
	Pickable<Scaleform::MemoryHeap>();
	Scaleform::Pickable<Scaleform::MemoryHeap> & operator=(const Scaleform::Pickable<Scaleform::MemoryHeap> &);
	Scaleform::MemoryHeap * GetPtr();
	Scaleform::MemoryHeap * operator->();
	Scaleform::MemoryHeap & operator*();
private:
	Scaleform::MemoryHeap * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::TextFieldDef>
{
public:
	Pickable<Scaleform::GFx::TextFieldDef>(Scaleform::GFx::TextFieldDef *, Scaleform::PickType);
	Pickable<Scaleform::GFx::TextFieldDef>(Scaleform::GFx::TextFieldDef *);
	Pickable<Scaleform::GFx::TextFieldDef>();
	Scaleform::Pickable<Scaleform::GFx::TextFieldDef> & operator=(const Scaleform::Pickable<Scaleform::GFx::TextFieldDef> &);
	Scaleform::GFx::TextFieldDef * GetPtr();
	Scaleform::GFx::TextFieldDef * operator->();
	Scaleform::GFx::TextFieldDef & operator*();
private:
	Scaleform::GFx::TextFieldDef * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ImageShapeCharacterDef>
{
public:
	Pickable<Scaleform::GFx::ImageShapeCharacterDef>(Scaleform::GFx::ImageShapeCharacterDef *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ImageShapeCharacterDef>(Scaleform::GFx::ImageShapeCharacterDef *);
	Pickable<Scaleform::GFx::ImageShapeCharacterDef>();
	Scaleform::Pickable<Scaleform::GFx::ImageShapeCharacterDef> & operator=(const Scaleform::Pickable<Scaleform::GFx::ImageShapeCharacterDef> &);
	Scaleform::GFx::ImageShapeCharacterDef * GetPtr();
	Scaleform::GFx::ImageShapeCharacterDef * operator->();
	Scaleform::GFx::ImageShapeCharacterDef & operator*();
private:
	Scaleform::GFx::ImageShapeCharacterDef * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::GFxMovieDataDefFileKeyData>
{
public:
	Pickable<Scaleform::GFx::GFxMovieDataDefFileKeyData>(Scaleform::GFx::GFxMovieDataDefFileKeyData *, Scaleform::PickType);
	Pickable<Scaleform::GFx::GFxMovieDataDefFileKeyData>(Scaleform::GFx::GFxMovieDataDefFileKeyData *);
	Pickable<Scaleform::GFx::GFxMovieDataDefFileKeyData>();
	Scaleform::Pickable<Scaleform::GFx::GFxMovieDataDefFileKeyData> & operator=(const Scaleform::Pickable<Scaleform::GFx::GFxMovieDataDefFileKeyData> &);
	Scaleform::GFx::GFxMovieDataDefFileKeyData * GetPtr();
	Scaleform::GFx::GFxMovieDataDefFileKeyData * operator->();
	Scaleform::GFx::GFxMovieDataDefFileKeyData & operator*();
private:
	Scaleform::GFx::GFxMovieDataDefFileKeyData * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::GFxMovieDefImplKey>
{
public:
	Pickable<Scaleform::GFx::GFxMovieDefImplKey>(Scaleform::GFx::GFxMovieDefImplKey *, Scaleform::PickType);
	Pickable<Scaleform::GFx::GFxMovieDefImplKey>(Scaleform::GFx::GFxMovieDefImplKey *);
	Pickable<Scaleform::GFx::GFxMovieDefImplKey>();
	Scaleform::Pickable<Scaleform::GFx::GFxMovieDefImplKey> & operator=(const Scaleform::Pickable<Scaleform::GFx::GFxMovieDefImplKey> &);
	Scaleform::GFx::GFxMovieDefImplKey * GetPtr();
	Scaleform::GFx::GFxMovieDefImplKey * operator->();
	Scaleform::GFx::GFxMovieDefImplKey & operator*();
private:
	Scaleform::GFx::GFxMovieDefImplKey * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::SpriteDef>
{
public:
	Pickable<Scaleform::GFx::SpriteDef>(Scaleform::GFx::SpriteDef *, Scaleform::PickType);
	Pickable<Scaleform::GFx::SpriteDef>(Scaleform::GFx::SpriteDef *);
	Pickable<Scaleform::GFx::SpriteDef>();
	Scaleform::Pickable<Scaleform::GFx::SpriteDef> & operator=(const Scaleform::Pickable<Scaleform::GFx::SpriteDef> &);
	Scaleform::GFx::SpriteDef * GetPtr();
	Scaleform::GFx::SpriteDef * operator->();
	Scaleform::GFx::SpriteDef & operator*();
private:
	Scaleform::GFx::SpriteDef * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ImagePacker>
{
public:
	Pickable<Scaleform::GFx::ImagePacker>(Scaleform::GFx::ImagePacker *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ImagePacker>(Scaleform::GFx::ImagePacker *);
	Pickable<Scaleform::GFx::ImagePacker>();
	Scaleform::Pickable<Scaleform::GFx::ImagePacker> & operator=(const Scaleform::Pickable<Scaleform::GFx::ImagePacker> &);
	Scaleform::GFx::ImagePacker * GetPtr();
	Scaleform::GFx::ImagePacker * operator->();
	Scaleform::GFx::ImagePacker & operator*();
private:
	Scaleform::GFx::ImagePacker * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::MovieDefImpl::BindTaskData>
{
public:
	Pickable<Scaleform::GFx::MovieDefImpl::BindTaskData>(Scaleform::GFx::MovieDefImpl::BindTaskData *, Scaleform::PickType);
	Pickable<Scaleform::GFx::MovieDefImpl::BindTaskData>(Scaleform::GFx::MovieDefImpl::BindTaskData *);
	Pickable<Scaleform::GFx::MovieDefImpl::BindTaskData>();
	Scaleform::Pickable<Scaleform::GFx::MovieDefImpl::BindTaskData> & operator=(const Scaleform::Pickable<Scaleform::GFx::MovieDefImpl::BindTaskData> &);
	Scaleform::GFx::MovieDefImpl::BindTaskData * GetPtr();
	Scaleform::GFx::MovieDefImpl::BindTaskData * operator->();
	Scaleform::GFx::MovieDefImpl::BindTaskData & operator*();
private:
	Scaleform::GFx::MovieDefImpl::BindTaskData * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ButtonDef>
{
public:
	Pickable<Scaleform::GFx::ButtonDef>(Scaleform::GFx::ButtonDef *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ButtonDef>(Scaleform::GFx::ButtonDef *);
	Pickable<Scaleform::GFx::ButtonDef>();
	Scaleform::Pickable<Scaleform::GFx::ButtonDef> & operator=(const Scaleform::Pickable<Scaleform::GFx::ButtonDef> &);
	Scaleform::GFx::ButtonDef * GetPtr();
	Scaleform::GFx::ButtonDef * operator->();
	Scaleform::GFx::ButtonDef & operator*();
private:
	Scaleform::GFx::ButtonDef * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::DrawableImageContext>
{
public:
	Pickable<Scaleform::Render::DrawableImageContext>(Scaleform::Render::DrawableImageContext *, Scaleform::PickType);
	Pickable<Scaleform::Render::DrawableImageContext>(Scaleform::Render::DrawableImageContext *);
	Pickable<Scaleform::Render::DrawableImageContext>();
	Scaleform::Pickable<Scaleform::Render::DrawableImageContext> & operator=(const Scaleform::Pickable<Scaleform::Render::DrawableImageContext> &);
	Scaleform::Render::DrawableImageContext * GetPtr();
	Scaleform::Render::DrawableImageContext * operator->();
	Scaleform::Render::DrawableImageContext & operator*();
private:
	Scaleform::Render::DrawableImageContext * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>
{
public:
	Pickable<Scaleform::Render::ShapeDataFloat>(Scaleform::Render::ShapeDataFloat *, Scaleform::PickType);
	Pickable<Scaleform::Render::ShapeDataFloat>(Scaleform::Render::ShapeDataFloat *);
	Pickable<Scaleform::Render::ShapeDataFloat>();
	Scaleform::Pickable<Scaleform::Render::ShapeDataFloat> & operator=(const Scaleform::Pickable<Scaleform::Render::ShapeDataFloat> &);
	Scaleform::Render::ShapeDataFloat * GetPtr();
	Scaleform::Render::ShapeDataFloat * operator->();
	Scaleform::Render::ShapeDataFloat & operator*();
private:
	Scaleform::Render::ShapeDataFloat * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ASMovieRootBase>
{
public:
	Pickable<Scaleform::GFx::ASMovieRootBase>(Scaleform::GFx::ASMovieRootBase *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ASMovieRootBase>(Scaleform::GFx::ASMovieRootBase *);
	Pickable<Scaleform::GFx::ASMovieRootBase>();
	Scaleform::Pickable<Scaleform::GFx::ASMovieRootBase> & operator=(const Scaleform::Pickable<Scaleform::GFx::ASMovieRootBase> &);
	Scaleform::GFx::ASMovieRootBase * GetPtr();
	Scaleform::GFx::ASMovieRootBase * operator->();
	Scaleform::GFx::ASMovieRootBase & operator*();
private:
	Scaleform::GFx::ASMovieRootBase * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::MemoryContext>
{
public:
	Pickable<Scaleform::GFx::MemoryContext>(Scaleform::GFx::MemoryContext *, Scaleform::PickType);
	Pickable<Scaleform::GFx::MemoryContext>(Scaleform::GFx::MemoryContext *);
	Pickable<Scaleform::GFx::MemoryContext>();
	Scaleform::Pickable<Scaleform::GFx::MemoryContext> & operator=(const Scaleform::Pickable<Scaleform::GFx::MemoryContext> &);
	Scaleform::GFx::MemoryContext * GetPtr();
	Scaleform::GFx::MemoryContext * operator->();
	Scaleform::GFx::MemoryContext & operator*();
private:
	Scaleform::GFx::MemoryContext * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ASIntervalTimerIntf>
{
public:
	Pickable<Scaleform::GFx::ASIntervalTimerIntf>(Scaleform::GFx::ASIntervalTimerIntf *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ASIntervalTimerIntf>(Scaleform::GFx::ASIntervalTimerIntf *);
	Pickable<Scaleform::GFx::ASIntervalTimerIntf>();
	Scaleform::Pickable<Scaleform::GFx::ASIntervalTimerIntf> & operator=(const Scaleform::Pickable<Scaleform::GFx::ASIntervalTimerIntf> &);
	Scaleform::GFx::ASIntervalTimerIntf * GetPtr();
	Scaleform::GFx::ASIntervalTimerIntf * operator->();
	Scaleform::GFx::ASIntervalTimerIntf & operator*();
private:
	Scaleform::GFx::ASIntervalTimerIntf * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::DisplayObject>
{
public:
	Pickable<Scaleform::GFx::DisplayObject>(Scaleform::GFx::DisplayObject *, Scaleform::PickType);
	Pickable<Scaleform::GFx::DisplayObject>(Scaleform::GFx::DisplayObject *);
	Pickable<Scaleform::GFx::DisplayObject>();
	Scaleform::Pickable<Scaleform::GFx::DisplayObject> & operator=(const Scaleform::Pickable<Scaleform::GFx::DisplayObject> &);
	Scaleform::GFx::DisplayObject * GetPtr();
	Scaleform::GFx::DisplayObject * operator->();
	Scaleform::GFx::DisplayObject & operator*();
private:
	Scaleform::GFx::DisplayObject * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::AmpMovieObjectDesc>
{
public:
	Pickable<Scaleform::AmpMovieObjectDesc>(Scaleform::AmpMovieObjectDesc *, Scaleform::PickType);
	Pickable<Scaleform::AmpMovieObjectDesc>(Scaleform::AmpMovieObjectDesc *);
	Pickable<Scaleform::AmpMovieObjectDesc>();
	Scaleform::Pickable<Scaleform::AmpMovieObjectDesc> & operator=(const Scaleform::Pickable<Scaleform::AmpMovieObjectDesc> &);
	Scaleform::AmpMovieObjectDesc * GetPtr();
	Scaleform::AmpMovieObjectDesc * operator->();
	Scaleform::AmpMovieObjectDesc & operator*();
private:
	Scaleform::AmpMovieObjectDesc * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::LoadVarsTask>
{
public:
	Pickable<Scaleform::GFx::LoadVarsTask>(Scaleform::GFx::LoadVarsTask *, Scaleform::PickType);
	Pickable<Scaleform::GFx::LoadVarsTask>(Scaleform::GFx::LoadVarsTask *);
	Pickable<Scaleform::GFx::LoadVarsTask>();
	Scaleform::Pickable<Scaleform::GFx::LoadVarsTask> & operator=(const Scaleform::Pickable<Scaleform::GFx::LoadVarsTask> &);
	Scaleform::GFx::LoadVarsTask * GetPtr();
	Scaleform::GFx::LoadVarsTask * operator->();
	Scaleform::GFx::LoadVarsTask & operator*();
private:
	Scaleform::GFx::LoadVarsTask * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::LoadBinaryTask>
{
public:
	Pickable<Scaleform::GFx::LoadBinaryTask>(Scaleform::GFx::LoadBinaryTask *, Scaleform::PickType);
	Pickable<Scaleform::GFx::LoadBinaryTask>(Scaleform::GFx::LoadBinaryTask *);
	Pickable<Scaleform::GFx::LoadBinaryTask>();
	Scaleform::Pickable<Scaleform::GFx::LoadBinaryTask> & operator=(const Scaleform::Pickable<Scaleform::GFx::LoadBinaryTask> &);
	Scaleform::GFx::LoadBinaryTask * GetPtr();
	Scaleform::GFx::LoadBinaryTask * operator->();
	Scaleform::GFx::LoadBinaryTask & operator*();
private:
	Scaleform::GFx::LoadBinaryTask * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::Sprite>
{
public:
	Pickable<Scaleform::GFx::Sprite>(Scaleform::GFx::Sprite *, Scaleform::PickType);
	Pickable<Scaleform::GFx::Sprite>(Scaleform::GFx::Sprite *);
	Pickable<Scaleform::GFx::Sprite>();
	Scaleform::Pickable<Scaleform::GFx::Sprite> & operator=(const Scaleform::Pickable<Scaleform::GFx::Sprite> &);
	Scaleform::GFx::Sprite * GetPtr();
	Scaleform::GFx::Sprite * operator->();
	Scaleform::GFx::Sprite & operator*();
private:
	Scaleform::GFx::Sprite * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::TimelineDef>
{
public:
	Pickable<Scaleform::GFx::TimelineDef>(Scaleform::GFx::TimelineDef *, Scaleform::PickType);
	Pickable<Scaleform::GFx::TimelineDef>(Scaleform::GFx::TimelineDef *);
	Pickable<Scaleform::GFx::TimelineDef>();
	Scaleform::Pickable<Scaleform::GFx::TimelineDef> & operator=(const Scaleform::Pickable<Scaleform::GFx::TimelineDef> &);
	Scaleform::GFx::TimelineDef * GetPtr();
	Scaleform::GFx::TimelineDef * operator->();
	Scaleform::GFx::TimelineDef & operator*();
private:
	Scaleform::GFx::TimelineDef * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::StaticTextDef>
{
public:
	Pickable<Scaleform::GFx::StaticTextDef>(Scaleform::GFx::StaticTextDef *, Scaleform::PickType);
	Pickable<Scaleform::GFx::StaticTextDef>(Scaleform::GFx::StaticTextDef *);
	Pickable<Scaleform::GFx::StaticTextDef>();
	Scaleform::Pickable<Scaleform::GFx::StaticTextDef> & operator=(const Scaleform::Pickable<Scaleform::GFx::StaticTextDef> &);
	Scaleform::GFx::StaticTextDef * GetPtr();
	Scaleform::GFx::StaticTextDef * operator->();
	Scaleform::GFx::StaticTextDef & operator*();
private:
	Scaleform::GFx::StaticTextDef * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::StaticTextCharacter>
{
public:
	Pickable<Scaleform::GFx::StaticTextCharacter>(Scaleform::GFx::StaticTextCharacter *, Scaleform::PickType);
	Pickable<Scaleform::GFx::StaticTextCharacter>(Scaleform::GFx::StaticTextCharacter *);
	Pickable<Scaleform::GFx::StaticTextCharacter>();
	Scaleform::Pickable<Scaleform::GFx::StaticTextCharacter> & operator=(const Scaleform::Pickable<Scaleform::GFx::StaticTextCharacter> &);
	Scaleform::GFx::StaticTextCharacter * GetPtr();
	Scaleform::GFx::StaticTextCharacter * operator->();
	Scaleform::GFx::StaticTextCharacter & operator*();
private:
	Scaleform::GFx::StaticTextCharacter * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::MorphCharacterDef>
{
public:
	Pickable<Scaleform::GFx::MorphCharacterDef>(Scaleform::GFx::MorphCharacterDef *, Scaleform::PickType);
	Pickable<Scaleform::GFx::MorphCharacterDef>(Scaleform::GFx::MorphCharacterDef *);
	Pickable<Scaleform::GFx::MorphCharacterDef>();
	Scaleform::Pickable<Scaleform::GFx::MorphCharacterDef> & operator=(const Scaleform::Pickable<Scaleform::GFx::MorphCharacterDef> &);
	Scaleform::GFx::MorphCharacterDef * GetPtr();
	Scaleform::GFx::MorphCharacterDef * operator->();
	Scaleform::GFx::MorphCharacterDef & operator*();
private:
	Scaleform::GFx::MorphCharacterDef * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::SubImageResourceInfo>
{
public:
	Pickable<Scaleform::GFx::SubImageResourceInfo>(Scaleform::GFx::SubImageResourceInfo *, Scaleform::PickType);
	Pickable<Scaleform::GFx::SubImageResourceInfo>(Scaleform::GFx::SubImageResourceInfo *);
	Pickable<Scaleform::GFx::SubImageResourceInfo>();
	Scaleform::Pickable<Scaleform::GFx::SubImageResourceInfo> & operator=(const Scaleform::Pickable<Scaleform::GFx::SubImageResourceInfo> &);
	Scaleform::GFx::SubImageResourceInfo * GetPtr();
	Scaleform::GFx::SubImageResourceInfo * operator->();
	Scaleform::GFx::SubImageResourceInfo & operator*();
private:
	Scaleform::GFx::SubImageResourceInfo * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ThreadedTaskManagerImpl>
{
public:
	Pickable<Scaleform::GFx::ThreadedTaskManagerImpl>(Scaleform::GFx::ThreadedTaskManagerImpl *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ThreadedTaskManagerImpl>(Scaleform::GFx::ThreadedTaskManagerImpl *);
	Pickable<Scaleform::GFx::ThreadedTaskManagerImpl>();
	Scaleform::Pickable<Scaleform::GFx::ThreadedTaskManagerImpl> & operator=(const Scaleform::Pickable<Scaleform::GFx::ThreadedTaskManagerImpl> &);
	Scaleform::GFx::ThreadedTaskManagerImpl * GetPtr();
	Scaleform::GFx::ThreadedTaskManagerImpl * operator->();
	Scaleform::GFx::ThreadedTaskManagerImpl & operator*();
private:
	Scaleform::GFx::ThreadedTaskManagerImpl * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::Task>
{
public:
	Pickable<Scaleform::GFx::Task>(Scaleform::GFx::Task *, Scaleform::PickType);
	Pickable<Scaleform::GFx::Task>(Scaleform::GFx::Task *);
	Pickable<Scaleform::GFx::Task>();
	Scaleform::Pickable<Scaleform::GFx::Task> & operator=(const Scaleform::Pickable<Scaleform::GFx::Task> &);
	Scaleform::GFx::Task * GetPtr();
	Scaleform::GFx::Task * operator->();
	Scaleform::GFx::Task & operator*();
private:
	Scaleform::GFx::Task * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::TaskThread>
{
public:
	Pickable<Scaleform::GFx::TaskThread>(Scaleform::GFx::TaskThread *, Scaleform::PickType);
	Pickable<Scaleform::GFx::TaskThread>(Scaleform::GFx::TaskThread *);
	Pickable<Scaleform::GFx::TaskThread>();
	Scaleform::Pickable<Scaleform::GFx::TaskThread> & operator=(const Scaleform::Pickable<Scaleform::GFx::TaskThread> &);
	Scaleform::GFx::TaskThread * GetPtr();
	Scaleform::GFx::TaskThread * operator->();
	Scaleform::GFx::TaskThread & operator*();
private:
	Scaleform::GFx::TaskThread * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::TaskThreadInPool>
{
public:
	Pickable<Scaleform::GFx::TaskThreadInPool>(Scaleform::GFx::TaskThreadInPool *, Scaleform::PickType);
	Pickable<Scaleform::GFx::TaskThreadInPool>(Scaleform::GFx::TaskThreadInPool *);
	Pickable<Scaleform::GFx::TaskThreadInPool>();
	Scaleform::Pickable<Scaleform::GFx::TaskThreadInPool> & operator=(const Scaleform::Pickable<Scaleform::GFx::TaskThreadInPool> &);
	Scaleform::GFx::TaskThreadInPool * GetPtr();
	Scaleform::GFx::TaskThreadInPool * operator->();
	Scaleform::GFx::TaskThreadInPool & operator*();
private:
	Scaleform::GFx::TaskThreadInPool * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::Text::EditorKit>
{
public:
	Pickable<Scaleform::GFx::Text::EditorKit>(Scaleform::GFx::Text::EditorKit *, Scaleform::PickType);
	Pickable<Scaleform::GFx::Text::EditorKit>(Scaleform::GFx::Text::EditorKit *);
	Pickable<Scaleform::GFx::Text::EditorKit>();
	Scaleform::Pickable<Scaleform::GFx::Text::EditorKit> & operator=(const Scaleform::Pickable<Scaleform::GFx::Text::EditorKit> &);
	Scaleform::GFx::Text::EditorKit * GetPtr();
	Scaleform::GFx::Text::EditorKit * operator->();
	Scaleform::GFx::Text::EditorKit & operator*();
private:
	Scaleform::GFx::Text::EditorKit * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::ShadowFilter>
{
public:
	Pickable<Scaleform::Render::ShadowFilter>(Scaleform::Render::ShadowFilter *, Scaleform::PickType);
	Pickable<Scaleform::Render::ShadowFilter>(Scaleform::Render::ShadowFilter *);
	Pickable<Scaleform::Render::ShadowFilter>();
	Scaleform::Pickable<Scaleform::Render::ShadowFilter> & operator=(const Scaleform::Pickable<Scaleform::Render::ShadowFilter> &);
	Scaleform::Render::ShadowFilter * GetPtr();
	Scaleform::Render::ShadowFilter * operator->();
	Scaleform::Render::ShadowFilter & operator*();
private:
	Scaleform::Render::ShadowFilter * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GlowFilter>
{
public:
	Pickable<Scaleform::Render::GlowFilter>(Scaleform::Render::GlowFilter *, Scaleform::PickType);
	Pickable<Scaleform::Render::GlowFilter>(Scaleform::Render::GlowFilter *);
	Pickable<Scaleform::Render::GlowFilter>();
	Scaleform::Pickable<Scaleform::Render::GlowFilter> & operator=(const Scaleform::Pickable<Scaleform::Render::GlowFilter> &);
	Scaleform::Render::GlowFilter * GetPtr();
	Scaleform::Render::GlowFilter * operator->();
	Scaleform::Render::GlowFilter & operator*();
private:
	Scaleform::Render::GlowFilter * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Text::ImageDesc>
{
public:
	Pickable<Scaleform::Render::Text::ImageDesc>(Scaleform::Render::Text::ImageDesc *, Scaleform::PickType);
	Pickable<Scaleform::Render::Text::ImageDesc>(Scaleform::Render::Text::ImageDesc *);
	Pickable<Scaleform::Render::Text::ImageDesc>();
	Scaleform::Pickable<Scaleform::Render::Text::ImageDesc> & operator=(const Scaleform::Pickable<Scaleform::Render::Text::ImageDesc> &);
	Scaleform::Render::Text::ImageDesc * GetPtr();
	Scaleform::Render::Text::ImageDesc * operator->();
	Scaleform::Render::Text::ImageDesc & operator*();
private:
	Scaleform::Render::Text::ImageDesc * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::BlurFilter>
{
public:
	Pickable<Scaleform::Render::BlurFilter>(Scaleform::Render::BlurFilter *, Scaleform::PickType);
	Pickable<Scaleform::Render::BlurFilter>(Scaleform::Render::BlurFilter *);
	Pickable<Scaleform::Render::BlurFilter>();
	Scaleform::Pickable<Scaleform::Render::BlurFilter> & operator=(const Scaleform::Pickable<Scaleform::Render::BlurFilter> &);
	Scaleform::Render::BlurFilter * GetPtr();
	Scaleform::Render::BlurFilter * operator->();
	Scaleform::Render::BlurFilter & operator*();
private:
	Scaleform::Render::BlurFilter * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::FontProviderWinAPI>
{
public:
	Pickable<Scaleform::Render::FontProviderWinAPI>(Scaleform::Render::FontProviderWinAPI *, Scaleform::PickType);
	Pickable<Scaleform::Render::FontProviderWinAPI>(Scaleform::Render::FontProviderWinAPI *);
	Pickable<Scaleform::Render::FontProviderWinAPI>();
	Scaleform::Pickable<Scaleform::Render::FontProviderWinAPI> & operator=(const Scaleform::Pickable<Scaleform::Render::FontProviderWinAPI> &);
	Scaleform::Render::FontProviderWinAPI * GetPtr();
	Scaleform::Render::FontProviderWinAPI * operator->();
	Scaleform::Render::FontProviderWinAPI & operator*();
private:
	Scaleform::Render::FontProviderWinAPI * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Palette>
{
public:
	Pickable<Scaleform::Render::Palette>(Scaleform::Render::Palette *, Scaleform::PickType);
	Pickable<Scaleform::Render::Palette>(Scaleform::Render::Palette *);
	Pickable<Scaleform::Render::Palette>();
	Scaleform::Pickable<Scaleform::Render::Palette> & operator=(const Scaleform::Pickable<Scaleform::Render::Palette> &);
	Scaleform::Render::Palette * GetPtr();
	Scaleform::Render::Palette * operator->();
	Scaleform::Render::Palette & operator*();
private:
	Scaleform::Render::Palette * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Text::FontManagerBase>
{
public:
	Pickable<Scaleform::Render::Text::FontManagerBase>(Scaleform::Render::Text::FontManagerBase *, Scaleform::PickType);
	Pickable<Scaleform::Render::Text::FontManagerBase>(Scaleform::Render::Text::FontManagerBase *);
	Pickable<Scaleform::Render::Text::FontManagerBase>();
	Scaleform::Pickable<Scaleform::Render::Text::FontManagerBase> & operator=(const Scaleform::Pickable<Scaleform::Render::Text::FontManagerBase> &);
	Scaleform::Render::Text::FontManagerBase * GetPtr();
	Scaleform::Render::Text::FontManagerBase * operator->();
	Scaleform::Render::Text::FontManagerBase & operator*();
private:
	Scaleform::Render::Text::FontManagerBase * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Text::CompositionStringBase>
{
public:
	Pickable<Scaleform::Render::Text::CompositionStringBase>(Scaleform::Render::Text::CompositionStringBase *, Scaleform::PickType);
	Pickable<Scaleform::Render::Text::CompositionStringBase>(Scaleform::Render::Text::CompositionStringBase *);
	Pickable<Scaleform::Render::Text::CompositionStringBase>();
	Scaleform::Pickable<Scaleform::Render::Text::CompositionStringBase> & operator=(const Scaleform::Pickable<Scaleform::Render::Text::CompositionStringBase> &);
	Scaleform::Render::Text::CompositionStringBase * GetPtr();
	Scaleform::Render::Text::CompositionStringBase * operator->();
	Scaleform::Render::Text::CompositionStringBase & operator*();
private:
	Scaleform::Render::Text::CompositionStringBase * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Text::DocView::DocumentText>
{
public:
	Pickable<Scaleform::Render::Text::DocView::DocumentText>(Scaleform::Render::Text::DocView::DocumentText *, Scaleform::PickType);
	Pickable<Scaleform::Render::Text::DocView::DocumentText>(Scaleform::Render::Text::DocView::DocumentText *);
	Pickable<Scaleform::Render::Text::DocView::DocumentText>();
	Scaleform::Pickable<Scaleform::Render::Text::DocView::DocumentText> & operator=(const Scaleform::Pickable<Scaleform::Render::Text::DocView::DocumentText> &);
	Scaleform::Render::Text::DocView::DocumentText * GetPtr();
	Scaleform::Render::Text::DocView::DocumentText * operator->();
	Scaleform::Render::Text::DocView::DocumentText & operator*();
private:
	Scaleform::Render::Text::DocView::DocumentText * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Text::ParagraphFormat>
{
public:
	Pickable<Scaleform::Render::Text::ParagraphFormat>(Scaleform::Render::Text::ParagraphFormat *, Scaleform::PickType);
	Pickable<Scaleform::Render::Text::ParagraphFormat>(Scaleform::Render::Text::ParagraphFormat *);
	Pickable<Scaleform::Render::Text::ParagraphFormat>();
	Scaleform::Pickable<Scaleform::Render::Text::ParagraphFormat> & operator=(const Scaleform::Pickable<Scaleform::Render::Text::ParagraphFormat> &);
	Scaleform::Render::Text::ParagraphFormat * GetPtr();
	Scaleform::Render::Text::ParagraphFormat * operator->();
	Scaleform::Render::Text::ParagraphFormat & operator*();
private:
	Scaleform::Render::Text::ParagraphFormat * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::ContextImpl::ContextLock>
{
public:
	Pickable<Scaleform::Render::ContextImpl::ContextLock>(Scaleform::Render::ContextImpl::ContextLock *, Scaleform::PickType);
	Pickable<Scaleform::Render::ContextImpl::ContextLock>(Scaleform::Render::ContextImpl::ContextLock *);
	Pickable<Scaleform::Render::ContextImpl::ContextLock>();
	Scaleform::Pickable<Scaleform::Render::ContextImpl::ContextLock> & operator=(const Scaleform::Pickable<Scaleform::Render::ContextImpl::ContextLock> &);
	Scaleform::Render::ContextImpl::ContextLock * GetPtr();
	Scaleform::Render::ContextImpl::ContextLock * operator->();
	Scaleform::Render::ContextImpl::ContextLock & operator*();
private:
	Scaleform::Render::ContextImpl::ContextLock * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::DrawableImage>
{
public:
	Pickable<Scaleform::Render::DrawableImage>(Scaleform::Render::DrawableImage *, Scaleform::PickType);
	Pickable<Scaleform::Render::DrawableImage>(Scaleform::Render::DrawableImage *);
	Pickable<Scaleform::Render::DrawableImage>();
	Scaleform::Pickable<Scaleform::Render::DrawableImage> & operator=(const Scaleform::Pickable<Scaleform::Render::DrawableImage> &);
	Scaleform::Render::DrawableImage * GetPtr();
	Scaleform::Render::DrawableImage * operator->();
	Scaleform::Render::DrawableImage & operator*();
private:
	Scaleform::Render::DrawableImage * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::DICommandQueue>
{
public:
	Pickable<Scaleform::Render::DICommandQueue>(Scaleform::Render::DICommandQueue *, Scaleform::PickType);
	Pickable<Scaleform::Render::DICommandQueue>(Scaleform::Render::DICommandQueue *);
	Pickable<Scaleform::Render::DICommandQueue>();
	Scaleform::Pickable<Scaleform::Render::DICommandQueue> & operator=(const Scaleform::Pickable<Scaleform::Render::DICommandQueue> &);
	Scaleform::Render::DICommandQueue * GetPtr();
	Scaleform::Render::DICommandQueue * operator->();
	Scaleform::Render::DICommandQueue & operator*();
private:
	Scaleform::Render::DICommandQueue * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::ImageBase>
{
public:
	Pickable<Scaleform::Render::ImageBase>(Scaleform::Render::ImageBase *, Scaleform::PickType);
	Pickable<Scaleform::Render::ImageBase>(Scaleform::Render::ImageBase *);
	Pickable<Scaleform::Render::ImageBase>();
	Scaleform::Pickable<Scaleform::Render::ImageBase> & operator=(const Scaleform::Pickable<Scaleform::Render::ImageBase> &);
	Scaleform::Render::ImageBase * GetPtr();
	Scaleform::Render::ImageBase * operator->();
	Scaleform::Render::ImageBase & operator*();
private:
	Scaleform::Render::ImageBase * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::DestroyDrawableImageThreadCommand>
{
public:
	Pickable<Scaleform::Render::DestroyDrawableImageThreadCommand>(Scaleform::Render::DestroyDrawableImageThreadCommand *, Scaleform::PickType);
	Pickable<Scaleform::Render::DestroyDrawableImageThreadCommand>(Scaleform::Render::DestroyDrawableImageThreadCommand *);
	Pickable<Scaleform::Render::DestroyDrawableImageThreadCommand>();
	Scaleform::Pickable<Scaleform::Render::DestroyDrawableImageThreadCommand> & operator=(const Scaleform::Pickable<Scaleform::Render::DestroyDrawableImageThreadCommand> &);
	Scaleform::Render::DestroyDrawableImageThreadCommand * GetPtr();
	Scaleform::Render::DestroyDrawableImageThreadCommand * operator->();
	Scaleform::Render::DestroyDrawableImageThreadCommand & operator*();
private:
	Scaleform::Render::DestroyDrawableImageThreadCommand * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::ShapeDataFloatMP>
{
public:
	Pickable<Scaleform::Render::ShapeDataFloatMP>(Scaleform::Render::ShapeDataFloatMP *, Scaleform::PickType);
	Pickable<Scaleform::Render::ShapeDataFloatMP>(Scaleform::Render::ShapeDataFloatMP *);
	Pickable<Scaleform::Render::ShapeDataFloatMP>();
	Scaleform::Pickable<Scaleform::Render::ShapeDataFloatMP> & operator=(const Scaleform::Pickable<Scaleform::Render::ShapeDataFloatMP> &);
	Scaleform::Render::ShapeDataFloatMP * GetPtr();
	Scaleform::Render::ShapeDataFloatMP * operator->();
	Scaleform::Render::ShapeDataFloatMP & operator*();
private:
	Scaleform::Render::ShapeDataFloatMP * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::FilterPrimitive>
{
public:
	Pickable<Scaleform::Render::FilterPrimitive>(Scaleform::Render::FilterPrimitive *, Scaleform::PickType);
	Pickable<Scaleform::Render::FilterPrimitive>(Scaleform::Render::FilterPrimitive *);
	Pickable<Scaleform::Render::FilterPrimitive>();
	Scaleform::Pickable<Scaleform::Render::FilterPrimitive> & operator=(const Scaleform::Pickable<Scaleform::Render::FilterPrimitive> &);
	Scaleform::Render::FilterPrimitive * GetPtr();
	Scaleform::Render::FilterPrimitive * operator->();
	Scaleform::Render::FilterPrimitive & operator*();
private:
	Scaleform::Render::FilterPrimitive * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::DICommandQueue::ExecuteCommand>
{
public:
	Pickable<Scaleform::Render::DICommandQueue::ExecuteCommand>(Scaleform::Render::DICommandQueue::ExecuteCommand *, Scaleform::PickType);
	Pickable<Scaleform::Render::DICommandQueue::ExecuteCommand>(Scaleform::Render::DICommandQueue::ExecuteCommand *);
	Pickable<Scaleform::Render::DICommandQueue::ExecuteCommand>();
	Scaleform::Pickable<Scaleform::Render::DICommandQueue::ExecuteCommand> & operator=(const Scaleform::Pickable<Scaleform::Render::DICommandQueue::ExecuteCommand> &);
	Scaleform::Render::DICommandQueue::ExecuteCommand * GetPtr();
	Scaleform::Render::DICommandQueue::ExecuteCommand * operator->();
	Scaleform::Render::DICommandQueue::ExecuteCommand & operator*();
private:
	Scaleform::Render::DICommandQueue::ExecuteCommand * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::CacheAsBitmapFilter>
{
public:
	Pickable<Scaleform::Render::CacheAsBitmapFilter>(Scaleform::Render::CacheAsBitmapFilter *, Scaleform::PickType);
	Pickable<Scaleform::Render::CacheAsBitmapFilter>(Scaleform::Render::CacheAsBitmapFilter *);
	Pickable<Scaleform::Render::CacheAsBitmapFilter>();
	Scaleform::Pickable<Scaleform::Render::CacheAsBitmapFilter> & operator=(const Scaleform::Pickable<Scaleform::Render::CacheAsBitmapFilter> &);
	Scaleform::Render::CacheAsBitmapFilter * GetPtr();
	Scaleform::Render::CacheAsBitmapFilter * operator->();
	Scaleform::Render::CacheAsBitmapFilter & operator*();
private:
	Scaleform::Render::CacheAsBitmapFilter * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::VectorGlyphShape>
{
public:
	Pickable<Scaleform::Render::VectorGlyphShape>(Scaleform::Render::VectorGlyphShape *, Scaleform::PickType);
	Pickable<Scaleform::Render::VectorGlyphShape>(Scaleform::Render::VectorGlyphShape *);
	Pickable<Scaleform::Render::VectorGlyphShape>();
	Scaleform::Pickable<Scaleform::Render::VectorGlyphShape> & operator=(const Scaleform::Pickable<Scaleform::Render::VectorGlyphShape> &);
	Scaleform::Render::VectorGlyphShape * GetPtr();
	Scaleform::Render::VectorGlyphShape * operator->();
	Scaleform::Render::VectorGlyphShape & operator*();
private:
	Scaleform::Render::VectorGlyphShape * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GlyphShape>
{
public:
	Pickable<Scaleform::Render::GlyphShape>(Scaleform::Render::GlyphShape *, Scaleform::PickType);
	Pickable<Scaleform::Render::GlyphShape>(Scaleform::Render::GlyphShape *);
	Pickable<Scaleform::Render::GlyphShape>();
	Scaleform::Pickable<Scaleform::Render::GlyphShape> & operator=(const Scaleform::Pickable<Scaleform::Render::GlyphShape> &);
	Scaleform::Render::GlyphShape * GetPtr();
	Scaleform::Render::GlyphShape * operator->();
	Scaleform::Render::GlyphShape & operator*();
private:
	Scaleform::Render::GlyphShape * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GlyphTextureImage>
{
public:
	Pickable<Scaleform::Render::GlyphTextureImage>(Scaleform::Render::GlyphTextureImage *, Scaleform::PickType);
	Pickable<Scaleform::Render::GlyphTextureImage>(Scaleform::Render::GlyphTextureImage *);
	Pickable<Scaleform::Render::GlyphTextureImage>();
	Scaleform::Pickable<Scaleform::Render::GlyphTextureImage> & operator=(const Scaleform::Pickable<Scaleform::Render::GlyphTextureImage> &);
	Scaleform::Render::GlyphTextureImage * GetPtr();
	Scaleform::Render::GlyphTextureImage * operator->();
	Scaleform::Render::GlyphTextureImage & operator*();
private:
	Scaleform::Render::GlyphTextureImage * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::FontCacheHandleManager>
{
public:
	Pickable<Scaleform::Render::FontCacheHandleManager>(Scaleform::Render::FontCacheHandleManager *, Scaleform::PickType);
	Pickable<Scaleform::Render::FontCacheHandleManager>(Scaleform::Render::FontCacheHandleManager *);
	Pickable<Scaleform::Render::FontCacheHandleManager>();
	Scaleform::Pickable<Scaleform::Render::FontCacheHandleManager> & operator=(const Scaleform::Pickable<Scaleform::Render::FontCacheHandleManager> &);
	Scaleform::Render::FontCacheHandleManager * GetPtr();
	Scaleform::Render::FontCacheHandleManager * operator->();
	Scaleform::Render::FontCacheHandleManager & operator*();
private:
	Scaleform::Render::FontCacheHandleManager * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::PrimitiveFill>
{
public:
	Pickable<Scaleform::Render::PrimitiveFill>(Scaleform::Render::PrimitiveFill *, Scaleform::PickType);
	Pickable<Scaleform::Render::PrimitiveFill>(Scaleform::Render::PrimitiveFill *);
	Pickable<Scaleform::Render::PrimitiveFill>();
	Scaleform::Pickable<Scaleform::Render::PrimitiveFill> & operator=(const Scaleform::Pickable<Scaleform::Render::PrimitiveFill> &);
	Scaleform::Render::PrimitiveFill * GetPtr();
	Scaleform::Render::PrimitiveFill * operator->();
	Scaleform::Render::PrimitiveFill & operator*();
private:
	Scaleform::Render::PrimitiveFill * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GlyphRaster>
{
public:
	Pickable<Scaleform::Render::GlyphRaster>(Scaleform::Render::GlyphRaster *, Scaleform::PickType);
	Pickable<Scaleform::Render::GlyphRaster>(Scaleform::Render::GlyphRaster *);
	Pickable<Scaleform::Render::GlyphRaster>();
	Scaleform::Pickable<Scaleform::Render::GlyphRaster> & operator=(const Scaleform::Pickable<Scaleform::Render::GlyphRaster> &);
	Scaleform::Render::GlyphRaster * GetPtr();
	Scaleform::Render::GlyphRaster * operator->();
	Scaleform::Render::GlyphRaster & operator*();
private:
	Scaleform::Render::GlyphRaster * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::MaskPrimitive>
{
public:
	Pickable<Scaleform::Render::MaskPrimitive>(Scaleform::Render::MaskPrimitive *, Scaleform::PickType);
	Pickable<Scaleform::Render::MaskPrimitive>(Scaleform::Render::MaskPrimitive *);
	Pickable<Scaleform::Render::MaskPrimitive>();
	Scaleform::Pickable<Scaleform::Render::MaskPrimitive> & operator=(const Scaleform::Pickable<Scaleform::Render::MaskPrimitive> &);
	Scaleform::Render::MaskPrimitive * GetPtr();
	Scaleform::Render::MaskPrimitive * operator->();
	Scaleform::Render::MaskPrimitive & operator*();
private:
	Scaleform::Render::MaskPrimitive * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::StereoImplBase>
{
public:
	Pickable<Scaleform::Render::StereoImplBase>(Scaleform::Render::StereoImplBase *, Scaleform::PickType);
	Pickable<Scaleform::Render::StereoImplBase>(Scaleform::Render::StereoImplBase *);
	Pickable<Scaleform::Render::StereoImplBase>();
	Scaleform::Pickable<Scaleform::Render::StereoImplBase> & operator=(const Scaleform::Pickable<Scaleform::Render::StereoImplBase> &);
	Scaleform::Render::StereoImplBase * GetPtr();
	Scaleform::Render::StereoImplBase * operator->();
	Scaleform::Render::StereoImplBase & operator*();
private:
	Scaleform::Render::StereoImplBase * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::MatrixState>
{
public:
	Pickable<Scaleform::Render::MatrixState>(Scaleform::Render::MatrixState *, Scaleform::PickType);
	Pickable<Scaleform::Render::MatrixState>(Scaleform::Render::MatrixState *);
	Pickable<Scaleform::Render::MatrixState>();
	Scaleform::Pickable<Scaleform::Render::MatrixState> & operator=(const Scaleform::Pickable<Scaleform::Render::MatrixState> &);
	Scaleform::Render::MatrixState * GetPtr();
	Scaleform::Render::MatrixState * operator->();
	Scaleform::Render::MatrixState & operator*();
private:
	Scaleform::Render::MatrixState * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GlyphCache>
{
public:
	Pickable<Scaleform::Render::GlyphCache>(Scaleform::Render::GlyphCache *, Scaleform::PickType);
	Pickable<Scaleform::Render::GlyphCache>(Scaleform::Render::GlyphCache *);
	Pickable<Scaleform::Render::GlyphCache>();
	Scaleform::Pickable<Scaleform::Render::GlyphCache> & operator=(const Scaleform::Pickable<Scaleform::Render::GlyphCache> &);
	Scaleform::Render::GlyphCache * GetPtr();
	Scaleform::Render::GlyphCache * operator->();
	Scaleform::Render::GlyphCache & operator*();
private:
	Scaleform::Render::GlyphCache * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::TextureCache>
{
public:
	Pickable<Scaleform::Render::TextureCache>(Scaleform::Render::TextureCache *, Scaleform::PickType);
	Pickable<Scaleform::Render::TextureCache>(Scaleform::Render::TextureCache *);
	Pickable<Scaleform::Render::TextureCache>();
	Scaleform::Pickable<Scaleform::Render::TextureCache> & operator=(const Scaleform::Pickable<Scaleform::Render::TextureCache> &);
	Scaleform::Render::TextureCache * GetPtr();
	Scaleform::Render::TextureCache * operator->();
	Scaleform::Render::TextureCache & operator*();
private:
	Scaleform::Render::TextureCache * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Mesh>
{
public:
	Pickable<Scaleform::Render::Mesh>(Scaleform::Render::Mesh *, Scaleform::PickType);
	Pickable<Scaleform::Render::Mesh>(Scaleform::Render::Mesh *);
	Pickable<Scaleform::Render::Mesh>();
	Scaleform::Pickable<Scaleform::Render::Mesh> & operator=(const Scaleform::Pickable<Scaleform::Render::Mesh> &);
	Scaleform::Render::Mesh * GetPtr();
	Scaleform::Render::Mesh * operator->();
	Scaleform::Render::Mesh & operator*();
private:
	Scaleform::Render::Mesh * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::MaskBundle>
{
public:
	Pickable<Scaleform::Render::MaskBundle>(Scaleform::Render::MaskBundle *, Scaleform::PickType);
	Pickable<Scaleform::Render::MaskBundle>(Scaleform::Render::MaskBundle *);
	Pickable<Scaleform::Render::MaskBundle>();
	Scaleform::Pickable<Scaleform::Render::MaskBundle> & operator=(const Scaleform::Pickable<Scaleform::Render::MaskBundle> &);
	Scaleform::Render::MaskBundle * GetPtr();
	Scaleform::Render::MaskBundle * operator->();
	Scaleform::Render::MaskBundle & operator*();
private:
	Scaleform::Render::MaskBundle * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::DrawableBundle>
{
public:
	Pickable<Scaleform::Render::DrawableBundle>(Scaleform::Render::DrawableBundle *, Scaleform::PickType);
	Pickable<Scaleform::Render::DrawableBundle>(Scaleform::Render::DrawableBundle *);
	Pickable<Scaleform::Render::DrawableBundle>();
	Scaleform::Pickable<Scaleform::Render::DrawableBundle> & operator=(const Scaleform::Pickable<Scaleform::Render::DrawableBundle> &);
	Scaleform::Render::DrawableBundle * GetPtr();
	Scaleform::Render::DrawableBundle * operator->();
	Scaleform::Render::DrawableBundle & operator*();
private:
	Scaleform::Render::DrawableBundle * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::FilterBundle>
{
public:
	Pickable<Scaleform::Render::FilterBundle>(Scaleform::Render::FilterBundle *, Scaleform::PickType);
	Pickable<Scaleform::Render::FilterBundle>(Scaleform::Render::FilterBundle *);
	Pickable<Scaleform::Render::FilterBundle>();
	Scaleform::Pickable<Scaleform::Render::FilterBundle> & operator=(const Scaleform::Pickable<Scaleform::Render::FilterBundle> &);
	Scaleform::Render::FilterBundle * GetPtr();
	Scaleform::Render::FilterBundle * operator->();
	Scaleform::Render::FilterBundle & operator*();
private:
	Scaleform::Render::FilterBundle * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::ComplexMesh>
{
public:
	Pickable<Scaleform::Render::ComplexMesh>(Scaleform::Render::ComplexMesh *, Scaleform::PickType);
	Pickable<Scaleform::Render::ComplexMesh>(Scaleform::Render::ComplexMesh *);
	Pickable<Scaleform::Render::ComplexMesh>();
	Scaleform::Pickable<Scaleform::Render::ComplexMesh> & operator=(const Scaleform::Pickable<Scaleform::Render::ComplexMesh> &);
	Scaleform::Render::ComplexMesh * GetPtr();
	Scaleform::Render::ComplexMesh * operator->();
	Scaleform::Render::ComplexMesh & operator*();
private:
	Scaleform::Render::ComplexMesh * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::ComplexPrimitiveBundle>
{
public:
	Pickable<Scaleform::Render::ComplexPrimitiveBundle>(Scaleform::Render::ComplexPrimitiveBundle *, Scaleform::PickType);
	Pickable<Scaleform::Render::ComplexPrimitiveBundle>(Scaleform::Render::ComplexPrimitiveBundle *);
	Pickable<Scaleform::Render::ComplexPrimitiveBundle>();
	Scaleform::Pickable<Scaleform::Render::ComplexPrimitiveBundle> & operator=(const Scaleform::Pickable<Scaleform::Render::ComplexPrimitiveBundle> &);
	Scaleform::Render::ComplexPrimitiveBundle * GetPtr();
	Scaleform::Render::ComplexPrimitiveBundle * operator->();
	Scaleform::Render::ComplexPrimitiveBundle & operator*();
private:
	Scaleform::Render::ComplexPrimitiveBundle * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::UserDataBundle>
{
public:
	Pickable<Scaleform::Render::UserDataBundle>(Scaleform::Render::UserDataBundle *, Scaleform::PickType);
	Pickable<Scaleform::Render::UserDataBundle>(Scaleform::Render::UserDataBundle *);
	Pickable<Scaleform::Render::UserDataBundle>();
	Scaleform::Pickable<Scaleform::Render::UserDataBundle> & operator=(const Scaleform::Pickable<Scaleform::Render::UserDataBundle> &);
	Scaleform::Render::UserDataBundle * GetPtr();
	Scaleform::Render::UserDataBundle * operator->();
	Scaleform::Render::UserDataBundle & operator*();
private:
	Scaleform::Render::UserDataBundle * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::ViewMatrix3DBundle>
{
public:
	Pickable<Scaleform::Render::ViewMatrix3DBundle>(Scaleform::Render::ViewMatrix3DBundle *, Scaleform::PickType);
	Pickable<Scaleform::Render::ViewMatrix3DBundle>(Scaleform::Render::ViewMatrix3DBundle *);
	Pickable<Scaleform::Render::ViewMatrix3DBundle>();
	Scaleform::Pickable<Scaleform::Render::ViewMatrix3DBundle> & operator=(const Scaleform::Pickable<Scaleform::Render::ViewMatrix3DBundle> &);
	Scaleform::Render::ViewMatrix3DBundle * GetPtr();
	Scaleform::Render::ViewMatrix3DBundle * operator->();
	Scaleform::Render::ViewMatrix3DBundle & operator*();
private:
	Scaleform::Render::ViewMatrix3DBundle * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::ProjectionMatrix3DBundle>
{
public:
	Pickable<Scaleform::Render::ProjectionMatrix3DBundle>(Scaleform::Render::ProjectionMatrix3DBundle *, Scaleform::PickType);
	Pickable<Scaleform::Render::ProjectionMatrix3DBundle>(Scaleform::Render::ProjectionMatrix3DBundle *);
	Pickable<Scaleform::Render::ProjectionMatrix3DBundle>();
	Scaleform::Pickable<Scaleform::Render::ProjectionMatrix3DBundle> & operator=(const Scaleform::Pickable<Scaleform::Render::ProjectionMatrix3DBundle> &);
	Scaleform::Render::ProjectionMatrix3DBundle * GetPtr();
	Scaleform::Render::ProjectionMatrix3DBundle * operator->();
	Scaleform::Render::ProjectionMatrix3DBundle & operator*();
private:
	Scaleform::Render::ProjectionMatrix3DBundle * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::BlendModeBundle>
{
public:
	Pickable<Scaleform::Render::BlendModeBundle>(Scaleform::Render::BlendModeBundle *, Scaleform::PickType);
	Pickable<Scaleform::Render::BlendModeBundle>(Scaleform::Render::BlendModeBundle *);
	Pickable<Scaleform::Render::BlendModeBundle>();
	Scaleform::Pickable<Scaleform::Render::BlendModeBundle> & operator=(const Scaleform::Pickable<Scaleform::Render::BlendModeBundle> &);
	Scaleform::Render::BlendModeBundle * GetPtr();
	Scaleform::Render::BlendModeBundle * operator->();
	Scaleform::Render::BlendModeBundle & operator*();
private:
	Scaleform::Render::BlendModeBundle * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::MeshKey>
{
public:
	Pickable<Scaleform::Render::MeshKey>(Scaleform::Render::MeshKey *, Scaleform::PickType);
	Pickable<Scaleform::Render::MeshKey>(Scaleform::Render::MeshKey *);
	Pickable<Scaleform::Render::MeshKey>();
	Scaleform::Pickable<Scaleform::Render::MeshKey> & operator=(const Scaleform::Pickable<Scaleform::Render::MeshKey> &);
	Scaleform::Render::MeshKey * GetPtr();
	Scaleform::Render::MeshKey * operator->();
	Scaleform::Render::MeshKey & operator*();
private:
	Scaleform::Render::MeshKey * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::MeshBase>
{
public:
	Pickable<Scaleform::Render::MeshBase>(Scaleform::Render::MeshBase *, Scaleform::PickType);
	Pickable<Scaleform::Render::MeshBase>(Scaleform::Render::MeshBase *);
	Pickable<Scaleform::Render::MeshBase>();
	Scaleform::Pickable<Scaleform::Render::MeshBase> & operator=(const Scaleform::Pickable<Scaleform::Render::MeshBase> &);
	Scaleform::Render::MeshBase * GetPtr();
	Scaleform::Render::MeshBase * operator->();
	Scaleform::Render::MeshBase & operator*();
private:
	Scaleform::Render::MeshBase * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::TextPrimitiveBundle>
{
public:
	Pickable<Scaleform::Render::TextPrimitiveBundle>(Scaleform::Render::TextPrimitiveBundle *, Scaleform::PickType);
	Pickable<Scaleform::Render::TextPrimitiveBundle>(Scaleform::Render::TextPrimitiveBundle *);
	Pickable<Scaleform::Render::TextPrimitiveBundle>();
	Scaleform::Pickable<Scaleform::Render::TextPrimitiveBundle> & operator=(const Scaleform::Pickable<Scaleform::Render::TextPrimitiveBundle> &);
	Scaleform::Render::TextPrimitiveBundle * GetPtr();
	Scaleform::Render::TextPrimitiveBundle * operator->();
	Scaleform::Render::TextPrimitiveBundle & operator*();
private:
	Scaleform::Render::TextPrimitiveBundle * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Scale9GridRect>
{
public:
	Pickable<Scaleform::Render::Scale9GridRect>(Scaleform::Render::Scale9GridRect *, Scaleform::PickType);
	Pickable<Scaleform::Render::Scale9GridRect>(Scaleform::Render::Scale9GridRect *);
	Pickable<Scaleform::Render::Scale9GridRect>();
	Scaleform::Pickable<Scaleform::Render::Scale9GridRect> & operator=(const Scaleform::Pickable<Scaleform::Render::Scale9GridRect> &);
	Scaleform::Render::Scale9GridRect * GetPtr();
	Scaleform::Render::Scale9GridRect * operator->();
	Scaleform::Render::Scale9GridRect & operator*();
private:
	Scaleform::Render::Scale9GridRect * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::RectRef<float> >
{
public:
	Pickable<Scaleform::Render::RectRef<float> >(Scaleform::Render::RectRef<float> *, Scaleform::PickType);
	Pickable<Scaleform::Render::RectRef<float> >(Scaleform::Render::RectRef<float> *);
	Pickable<Scaleform::Render::RectRef<float> >();
	Scaleform::Pickable<Scaleform::Render::RectRef<float> > & operator=(const Scaleform::Pickable<Scaleform::Render::RectRef<float> > &);
	Scaleform::Render::RectRef<float> * GetPtr();
	Scaleform::Render::RectRef<float> * operator->();
	Scaleform::Render::RectRef<float> & operator*();
private:
	Scaleform::Render::RectRef<float> * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Matrix3x4Ref<float> >
{
public:
	Pickable<Scaleform::Render::Matrix3x4Ref<float> >(Scaleform::Render::Matrix3x4Ref<float> *, Scaleform::PickType);
	Pickable<Scaleform::Render::Matrix3x4Ref<float> >(Scaleform::Render::Matrix3x4Ref<float> *);
	Pickable<Scaleform::Render::Matrix3x4Ref<float> >();
	Scaleform::Pickable<Scaleform::Render::Matrix3x4Ref<float> > & operator=(const Scaleform::Pickable<Scaleform::Render::Matrix3x4Ref<float> > &);
	Scaleform::Render::Matrix3x4Ref<float> * GetPtr();
	Scaleform::Render::Matrix3x4Ref<float> * operator->();
	Scaleform::Render::Matrix3x4Ref<float> & operator*();
private:
	Scaleform::Render::Matrix3x4Ref<float> * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::Matrix4x4Ref<float> >
{
public:
	Pickable<Scaleform::Render::Matrix4x4Ref<float> >(Scaleform::Render::Matrix4x4Ref<float> *, Scaleform::PickType);
	Pickable<Scaleform::Render::Matrix4x4Ref<float> >(Scaleform::Render::Matrix4x4Ref<float> *);
	Pickable<Scaleform::Render::Matrix4x4Ref<float> >();
	Scaleform::Pickable<Scaleform::Render::Matrix4x4Ref<float> > & operator=(const Scaleform::Pickable<Scaleform::Render::Matrix4x4Ref<float> > &);
	Scaleform::Render::Matrix4x4Ref<float> * GetPtr();
	Scaleform::Render::Matrix4x4Ref<float> * operator->();
	Scaleform::Render::Matrix4x4Ref<float> & operator*();
private:
	Scaleform::Render::Matrix4x4Ref<float> * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::AS3::NotifyLoadInitC>
{
public:
	Pickable<Scaleform::GFx::AS3::NotifyLoadInitC>(Scaleform::GFx::AS3::NotifyLoadInitC *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::NotifyLoadInitC>(Scaleform::GFx::AS3::NotifyLoadInitC *);
	Pickable<Scaleform::GFx::AS3::NotifyLoadInitC>();
	Scaleform::Pickable<Scaleform::GFx::AS3::NotifyLoadInitC> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::NotifyLoadInitC> &);
	Scaleform::GFx::AS3::NotifyLoadInitC * GetPtr();
	Scaleform::GFx::AS3::NotifyLoadInitC * operator->();
	Scaleform::GFx::AS3::NotifyLoadInitC & operator*();
private:
	Scaleform::GFx::AS3::NotifyLoadInitC * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::AS3::PtrReleaseProxy<328> >
{
public:
	Pickable<Scaleform::GFx::AS3::PtrReleaseProxy<328> >(Scaleform::GFx::AS3::PtrReleaseProxy<328> *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::PtrReleaseProxy<328> >(Scaleform::GFx::AS3::PtrReleaseProxy<328> *);
	Pickable<Scaleform::GFx::AS3::PtrReleaseProxy<328> >();
	Scaleform::Pickable<Scaleform::GFx::AS3::PtrReleaseProxy<328> > & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::PtrReleaseProxy<328> > &);
	Scaleform::GFx::AS3::PtrReleaseProxy<328> * GetPtr();
	Scaleform::GFx::AS3::PtrReleaseProxy<328> * operator->();
	Scaleform::GFx::AS3::PtrReleaseProxy<328> & operator*();
private:
	Scaleform::GFx::AS3::PtrReleaseProxy<328> * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::AS3::AbcDataBuffer>
{
public:
	Pickable<Scaleform::GFx::AS3::AbcDataBuffer>(Scaleform::GFx::AS3::AbcDataBuffer *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::AbcDataBuffer>(Scaleform::GFx::AS3::AbcDataBuffer *);
	Pickable<Scaleform::GFx::AS3::AbcDataBuffer>();
	Scaleform::Pickable<Scaleform::GFx::AS3::AbcDataBuffer> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::AbcDataBuffer> &);
	Scaleform::GFx::AS3::AbcDataBuffer * GetPtr();
	Scaleform::GFx::AS3::AbcDataBuffer * operator->();
	Scaleform::GFx::AS3::AbcDataBuffer & operator*();
private:
	Scaleform::GFx::AS3::AbcDataBuffer * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::XML::SupportBase>
{
public:
	Pickable<Scaleform::GFx::XML::SupportBase>(Scaleform::GFx::XML::SupportBase *, Scaleform::PickType);
	Pickable<Scaleform::GFx::XML::SupportBase>(Scaleform::GFx::XML::SupportBase *);
	Pickable<Scaleform::GFx::XML::SupportBase>();
	Scaleform::Pickable<Scaleform::GFx::XML::SupportBase> & operator=(const Scaleform::Pickable<Scaleform::GFx::XML::SupportBase> &);
	Scaleform::GFx::XML::SupportBase * GetPtr();
	Scaleform::GFx::XML::SupportBase * operator->();
	Scaleform::GFx::XML::SupportBase & operator*();
private:
	Scaleform::GFx::XML::SupportBase * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::AS3::MemoryContextImpl>
{
public:
	Pickable<Scaleform::GFx::AS3::MemoryContextImpl>(Scaleform::GFx::AS3::MemoryContextImpl *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::MemoryContextImpl>(Scaleform::GFx::AS3::MemoryContextImpl *);
	Pickable<Scaleform::GFx::AS3::MemoryContextImpl>();
	Scaleform::Pickable<Scaleform::GFx::AS3::MemoryContextImpl> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::MemoryContextImpl> &);
	Scaleform::GFx::AS3::MemoryContextImpl * GetPtr();
	Scaleform::GFx::AS3::MemoryContextImpl * operator->();
	Scaleform::GFx::AS3::MemoryContextImpl & operator*();
private:
	Scaleform::GFx::AS3::MemoryContextImpl * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::AS3::IMEManager>
{
public:
	Pickable<Scaleform::GFx::AS3::IMEManager>(Scaleform::GFx::AS3::IMEManager *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::IMEManager>(Scaleform::GFx::AS3::IMEManager *);
	Pickable<Scaleform::GFx::AS3::IMEManager>();
	Scaleform::Pickable<Scaleform::GFx::AS3::IMEManager> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::IMEManager> &);
	Scaleform::GFx::AS3::IMEManager * GetPtr();
	Scaleform::GFx::AS3::IMEManager * operator->();
	Scaleform::GFx::AS3::IMEManager & operator*();
private:
	Scaleform::GFx::AS3::IMEManager * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GradientFilter>
{
public:
	Pickable<Scaleform::Render::GradientFilter>(Scaleform::Render::GradientFilter *, Scaleform::PickType);
	Pickable<Scaleform::Render::GradientFilter>(Scaleform::Render::GradientFilter *);
	Pickable<Scaleform::Render::GradientFilter>();
	Scaleform::Pickable<Scaleform::Render::GradientFilter> & operator=(const Scaleform::Pickable<Scaleform::Render::GradientFilter> &);
	Scaleform::Render::GradientFilter * GetPtr();
	Scaleform::Render::GradientFilter * operator->();
	Scaleform::Render::GradientFilter & operator*();
private:
	Scaleform::Render::GradientFilter * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::DisplacementMapFilter>
{
public:
	Pickable<Scaleform::Render::DisplacementMapFilter>(Scaleform::Render::DisplacementMapFilter *, Scaleform::PickType);
	Pickable<Scaleform::Render::DisplacementMapFilter>(Scaleform::Render::DisplacementMapFilter *);
	Pickable<Scaleform::Render::DisplacementMapFilter>();
	Scaleform::Pickable<Scaleform::Render::DisplacementMapFilter> & operator=(const Scaleform::Pickable<Scaleform::Render::DisplacementMapFilter> &);
	Scaleform::Render::DisplacementMapFilter * GetPtr();
	Scaleform::Render::DisplacementMapFilter * operator->();
	Scaleform::Render::DisplacementMapFilter & operator*();
private:
	Scaleform::Render::DisplacementMapFilter * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::RefCountNTSImpl>
{
public:
	Pickable<Scaleform::RefCountNTSImpl>(Scaleform::RefCountNTSImpl *, Scaleform::PickType);
	Pickable<Scaleform::RefCountNTSImpl>(Scaleform::RefCountNTSImpl *);
	Pickable<Scaleform::RefCountNTSImpl>();
	Scaleform::Pickable<Scaleform::RefCountNTSImpl> & operator=(const Scaleform::Pickable<Scaleform::RefCountNTSImpl> &);
	Scaleform::RefCountNTSImpl * GetPtr();
	Scaleform::RefCountNTSImpl * operator->();
	Scaleform::RefCountNTSImpl & operator*();
private:
	Scaleform::RefCountNTSImpl * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::BevelFilter>
{
public:
	Pickable<Scaleform::Render::BevelFilter>(Scaleform::Render::BevelFilter *, Scaleform::PickType);
	Pickable<Scaleform::Render::BevelFilter>(Scaleform::Render::BevelFilter *);
	Pickable<Scaleform::Render::BevelFilter>();
	Scaleform::Pickable<Scaleform::Render::BevelFilter> & operator=(const Scaleform::Pickable<Scaleform::Render::BevelFilter> &);
	Scaleform::Render::BevelFilter * GetPtr();
	Scaleform::Render::BevelFilter * operator->();
	Scaleform::Render::BevelFilter & operator*();
private:
	Scaleform::Render::BevelFilter * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ASStringNode>
{
public:
	Pickable<Scaleform::GFx::ASStringNode>(Scaleform::GFx::ASStringNode *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ASStringNode>(Scaleform::GFx::ASStringNode *);
	Pickable<Scaleform::GFx::ASStringNode>();
	Scaleform::Pickable<Scaleform::GFx::ASStringNode> & operator=(const Scaleform::Pickable<Scaleform::GFx::ASStringNode> &);
	Scaleform::GFx::ASStringNode * GetPtr();
	Scaleform::GFx::ASStringNode * operator->();
	Scaleform::GFx::ASStringNode & operator*();
private:
	Scaleform::GFx::ASStringNode * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::SharedObjectManagerBase>
{
public:
	Pickable<Scaleform::GFx::SharedObjectManagerBase>(Scaleform::GFx::SharedObjectManagerBase *, Scaleform::PickType);
	Pickable<Scaleform::GFx::SharedObjectManagerBase>(Scaleform::GFx::SharedObjectManagerBase *);
	Pickable<Scaleform::GFx::SharedObjectManagerBase>();
	Scaleform::Pickable<Scaleform::GFx::SharedObjectManagerBase> & operator=(const Scaleform::Pickable<Scaleform::GFx::SharedObjectManagerBase> &);
	Scaleform::GFx::SharedObjectManagerBase * GetPtr();
	Scaleform::GFx::SharedObjectManagerBase * operator->();
	Scaleform::GFx::SharedObjectManagerBase & operator*();
private:
	Scaleform::GFx::SharedObjectManagerBase * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::SharedObject3ManagerBase>
{
public:
	Pickable<Scaleform::GFx::SharedObject3ManagerBase>(Scaleform::GFx::SharedObject3ManagerBase *, Scaleform::PickType);
	Pickable<Scaleform::GFx::SharedObject3ManagerBase>(Scaleform::GFx::SharedObject3ManagerBase *);
	Pickable<Scaleform::GFx::SharedObject3ManagerBase>();
	Scaleform::Pickable<Scaleform::GFx::SharedObject3ManagerBase> & operator=(const Scaleform::Pickable<Scaleform::GFx::SharedObject3ManagerBase> &);
	Scaleform::GFx::SharedObject3ManagerBase * GetPtr();
	Scaleform::GFx::SharedObject3ManagerBase * operator->();
	Scaleform::GFx::SharedObject3ManagerBase & operator*();
private:
	Scaleform::GFx::SharedObject3ManagerBase * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::AS3::IntervalTimer>
{
public:
	Pickable<Scaleform::GFx::AS3::IntervalTimer>(Scaleform::GFx::AS3::IntervalTimer *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::IntervalTimer>(Scaleform::GFx::AS3::IntervalTimer *);
	Pickable<Scaleform::GFx::AS3::IntervalTimer>();
	Scaleform::Pickable<Scaleform::GFx::AS3::IntervalTimer> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::IntervalTimer> &);
	Scaleform::GFx::AS3::IntervalTimer * GetPtr();
	Scaleform::GFx::AS3::IntervalTimer * operator->();
	Scaleform::GFx::AS3::IntervalTimer & operator*();
private:
	Scaleform::GFx::AS3::IntervalTimer * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::AS3::NamespaceInstanceFactory>
{
public:
	Pickable<Scaleform::GFx::AS3::NamespaceInstanceFactory>(Scaleform::GFx::AS3::NamespaceInstanceFactory *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::NamespaceInstanceFactory>(Scaleform::GFx::AS3::NamespaceInstanceFactory *);
	Pickable<Scaleform::GFx::AS3::NamespaceInstanceFactory>();
	Scaleform::Pickable<Scaleform::GFx::AS3::NamespaceInstanceFactory> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::NamespaceInstanceFactory> &);
	Scaleform::GFx::AS3::NamespaceInstanceFactory * GetPtr();
	Scaleform::GFx::AS3::NamespaceInstanceFactory * operator->();
	Scaleform::GFx::AS3::NamespaceInstanceFactory & operator*();
private:
	Scaleform::GFx::AS3::NamespaceInstanceFactory * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::AS3::Abc::File>
{
public:
	Pickable<Scaleform::GFx::AS3::Abc::File>(Scaleform::GFx::AS3::Abc::File *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::Abc::File>(Scaleform::GFx::AS3::Abc::File *);
	Pickable<Scaleform::GFx::AS3::Abc::File>();
	Scaleform::Pickable<Scaleform::GFx::AS3::Abc::File> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::Abc::File> &);
	Scaleform::GFx::AS3::Abc::File * GetPtr();
	Scaleform::GFx::AS3::Abc::File * operator->();
	Scaleform::GFx::AS3::Abc::File & operator*();
private:
	Scaleform::GFx::AS3::Abc::File * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::MovieImpl::WideStringStorage>
{
public:
	Pickable<Scaleform::GFx::MovieImpl::WideStringStorage>(Scaleform::GFx::MovieImpl::WideStringStorage *, Scaleform::PickType);
	Pickable<Scaleform::GFx::MovieImpl::WideStringStorage>(Scaleform::GFx::MovieImpl::WideStringStorage *);
	Pickable<Scaleform::GFx::MovieImpl::WideStringStorage>();
	Scaleform::Pickable<Scaleform::GFx::MovieImpl::WideStringStorage> & operator=(const Scaleform::Pickable<Scaleform::GFx::MovieImpl::WideStringStorage> &);
	Scaleform::GFx::MovieImpl::WideStringStorage * GetPtr();
	Scaleform::GFx::MovieImpl::WideStringStorage * operator->();
	Scaleform::GFx::MovieImpl::WideStringStorage & operator*();
private:
	Scaleform::GFx::MovieImpl::WideStringStorage * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::FunctionHandler>
{
public:
	Pickable<Scaleform::GFx::FunctionHandler>(Scaleform::GFx::FunctionHandler *, Scaleform::PickType);
	Pickable<Scaleform::GFx::FunctionHandler>(Scaleform::GFx::FunctionHandler *);
	Pickable<Scaleform::GFx::FunctionHandler>();
	Scaleform::Pickable<Scaleform::GFx::FunctionHandler> & operator=(const Scaleform::Pickable<Scaleform::GFx::FunctionHandler> &);
	Scaleform::GFx::FunctionHandler * GetPtr();
	Scaleform::GFx::FunctionHandler * operator->();
	Scaleform::GFx::FunctionHandler & operator*();
private:
	Scaleform::GFx::FunctionHandler * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::AS3::AvmBitmap>
{
public:
	Pickable<Scaleform::GFx::AS3::AvmBitmap>(Scaleform::GFx::AS3::AvmBitmap *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::AvmBitmap>(Scaleform::GFx::AS3::AvmBitmap *);
	Pickable<Scaleform::GFx::AS3::AvmBitmap>();
	Scaleform::Pickable<Scaleform::GFx::AS3::AvmBitmap> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::AvmBitmap> &);
	Scaleform::GFx::AS3::AvmBitmap * GetPtr();
	Scaleform::GFx::AS3::AvmBitmap * operator->();
	Scaleform::GFx::AS3::AvmBitmap & operator*();
private:
	Scaleform::GFx::AS3::AvmBitmap * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::AmpStats>
{
public:
	Pickable<Scaleform::AmpStats>(Scaleform::AmpStats *, Scaleform::PickType);
	Pickable<Scaleform::AmpStats>(Scaleform::AmpStats *);
	Pickable<Scaleform::AmpStats>();
	Scaleform::Pickable<Scaleform::AmpStats> & operator=(const Scaleform::Pickable<Scaleform::AmpStats> &);
	Scaleform::AmpStats * GetPtr();
	Scaleform::AmpStats * operator->();
	Scaleform::AmpStats & operator*();
private:
	Scaleform::AmpStats * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::MoviePreloadTask>
{
public:
	Pickable<Scaleform::GFx::MoviePreloadTask>(Scaleform::GFx::MoviePreloadTask *, Scaleform::PickType);
	Pickable<Scaleform::GFx::MoviePreloadTask>(Scaleform::GFx::MoviePreloadTask *);
	Pickable<Scaleform::GFx::MoviePreloadTask>();
	Scaleform::Pickable<Scaleform::GFx::MoviePreloadTask> & operator=(const Scaleform::Pickable<Scaleform::GFx::MoviePreloadTask> &);
	Scaleform::GFx::MoviePreloadTask * GetPtr();
	Scaleform::GFx::MoviePreloadTask * operator->();
	Scaleform::GFx::MoviePreloadTask & operator*();
private:
	Scaleform::GFx::MoviePreloadTask * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::AS3::Stage>
{
public:
	Pickable<Scaleform::GFx::AS3::Stage>(Scaleform::GFx::AS3::Stage *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::Stage>(Scaleform::GFx::AS3::Stage *);
	Pickable<Scaleform::GFx::AS3::Stage>();
	Scaleform::Pickable<Scaleform::GFx::AS3::Stage> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::Stage> &);
	Scaleform::GFx::AS3::Stage * GetPtr();
	Scaleform::GFx::AS3::Stage * operator->();
	Scaleform::GFx::AS3::Stage & operator*();
private:
	Scaleform::GFx::AS3::Stage * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ShapeBaseCharacterDef>
{
public:
	Pickable<Scaleform::GFx::ShapeBaseCharacterDef>(Scaleform::GFx::ShapeBaseCharacterDef *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ShapeBaseCharacterDef>(Scaleform::GFx::ShapeBaseCharacterDef *);
	Pickable<Scaleform::GFx::ShapeBaseCharacterDef>();
	Scaleform::Pickable<Scaleform::GFx::ShapeBaseCharacterDef> & operator=(const Scaleform::Pickable<Scaleform::GFx::ShapeBaseCharacterDef> &);
	Scaleform::GFx::ShapeBaseCharacterDef * GetPtr();
	Scaleform::GFx::ShapeBaseCharacterDef * operator->();
	Scaleform::GFx::ShapeBaseCharacterDef & operator*();
private:
	Scaleform::GFx::ShapeBaseCharacterDef * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::ASStringManager>
{
public:
	Pickable<Scaleform::GFx::ASStringManager>(Scaleform::GFx::ASStringManager *, Scaleform::PickType);
	Pickable<Scaleform::GFx::ASStringManager>(Scaleform::GFx::ASStringManager *);
	Pickable<Scaleform::GFx::ASStringManager>();
	Scaleform::Pickable<Scaleform::GFx::ASStringManager> & operator=(const Scaleform::Pickable<Scaleform::GFx::ASStringManager> &);
	Scaleform::GFx::ASStringManager * GetPtr();
	Scaleform::GFx::ASStringManager * operator->();
	Scaleform::GFx::ASStringManager & operator*();
private:
	Scaleform::GFx::ASStringManager * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::AS3::ASRefCountCollector>
{
public:
	Pickable<Scaleform::GFx::AS3::ASRefCountCollector>(Scaleform::GFx::AS3::ASRefCountCollector *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::ASRefCountCollector>(Scaleform::GFx::AS3::ASRefCountCollector *);
	Pickable<Scaleform::GFx::AS3::ASRefCountCollector>();
	Scaleform::Pickable<Scaleform::GFx::AS3::ASRefCountCollector> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::ASRefCountCollector> &);
	Scaleform::GFx::AS3::ASRefCountCollector * GetPtr();
	Scaleform::GFx::AS3::ASRefCountCollector * operator->();
	Scaleform::GFx::AS3::ASRefCountCollector & operator*();
private:
	Scaleform::GFx::AS3::ASRefCountCollector * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GL::HALGLProgram>
{
public:
	Pickable<Scaleform::Render::GL::HALGLProgram>(Scaleform::Render::GL::HALGLProgram *, Scaleform::PickType);
	Pickable<Scaleform::Render::GL::HALGLProgram>(Scaleform::Render::GL::HALGLProgram *);
	Pickable<Scaleform::Render::GL::HALGLProgram>();
	Scaleform::Pickable<Scaleform::Render::GL::HALGLProgram> & operator=(const Scaleform::Pickable<Scaleform::Render::GL::HALGLProgram> &);
	Scaleform::Render::GL::HALGLProgram * GetPtr();
	Scaleform::Render::GL::HALGLProgram * operator->();
	Scaleform::Render::GL::HALGLProgram & operator*();
private:
	Scaleform::Render::GL::HALGLProgram * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GL::HALGLShader>
{
public:
	Pickable<Scaleform::Render::GL::HALGLShader>(Scaleform::Render::GL::HALGLShader *, Scaleform::PickType);
	Pickable<Scaleform::Render::GL::HALGLShader>(Scaleform::Render::GL::HALGLShader *);
	Pickable<Scaleform::Render::GL::HALGLShader>();
	Scaleform::Pickable<Scaleform::Render::GL::HALGLShader> & operator=(const Scaleform::Pickable<Scaleform::Render::GL::HALGLShader> &);
	Scaleform::Render::GL::HALGLShader * GetPtr();
	Scaleform::Render::GL::HALGLShader * operator->();
	Scaleform::Render::GL::HALGLShader & operator*();
private:
	Scaleform::Render::GL::HALGLShader * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GL::HALGLUniformLocation>
{
public:
	Pickable<Scaleform::Render::GL::HALGLUniformLocation>(Scaleform::Render::GL::HALGLUniformLocation *, Scaleform::PickType);
	Pickable<Scaleform::Render::GL::HALGLUniformLocation>(Scaleform::Render::GL::HALGLUniformLocation *);
	Pickable<Scaleform::Render::GL::HALGLUniformLocation>();
	Scaleform::Pickable<Scaleform::Render::GL::HALGLUniformLocation> & operator=(const Scaleform::Pickable<Scaleform::Render::GL::HALGLUniformLocation> &);
	Scaleform::Render::GL::HALGLUniformLocation * GetPtr();
	Scaleform::Render::GL::HALGLUniformLocation * operator->();
	Scaleform::Render::GL::HALGLUniformLocation & operator*();
private:
	Scaleform::Render::GL::HALGLUniformLocation * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GL::HALGLTexture>
{
public:
	Pickable<Scaleform::Render::GL::HALGLTexture>(Scaleform::Render::GL::HALGLTexture *, Scaleform::PickType);
	Pickable<Scaleform::Render::GL::HALGLTexture>(Scaleform::Render::GL::HALGLTexture *);
	Pickable<Scaleform::Render::GL::HALGLTexture>();
	Scaleform::Pickable<Scaleform::Render::GL::HALGLTexture> & operator=(const Scaleform::Pickable<Scaleform::Render::GL::HALGLTexture> &);
	Scaleform::Render::GL::HALGLTexture * GetPtr();
	Scaleform::Render::GL::HALGLTexture * operator->();
	Scaleform::Render::GL::HALGLTexture & operator*();
private:
	Scaleform::Render::GL::HALGLTexture * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GL::HALGLVertexArray>
{
public:
	Pickable<Scaleform::Render::GL::HALGLVertexArray>(Scaleform::Render::GL::HALGLVertexArray *, Scaleform::PickType);
	Pickable<Scaleform::Render::GL::HALGLVertexArray>(Scaleform::Render::GL::HALGLVertexArray *);
	Pickable<Scaleform::Render::GL::HALGLVertexArray>();
	Scaleform::Pickable<Scaleform::Render::GL::HALGLVertexArray> & operator=(const Scaleform::Pickable<Scaleform::Render::GL::HALGLVertexArray> &);
	Scaleform::Render::GL::HALGLVertexArray * GetPtr();
	Scaleform::Render::GL::HALGLVertexArray * operator->();
	Scaleform::Render::GL::HALGLVertexArray & operator*();
private:
	Scaleform::Render::GL::HALGLVertexArray * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GL::HALGLRenderbuffer>
{
public:
	Pickable<Scaleform::Render::GL::HALGLRenderbuffer>(Scaleform::Render::GL::HALGLRenderbuffer *, Scaleform::PickType);
	Pickable<Scaleform::Render::GL::HALGLRenderbuffer>(Scaleform::Render::GL::HALGLRenderbuffer *);
	Pickable<Scaleform::Render::GL::HALGLRenderbuffer>();
	Scaleform::Pickable<Scaleform::Render::GL::HALGLRenderbuffer> & operator=(const Scaleform::Pickable<Scaleform::Render::GL::HALGLRenderbuffer> &);
	Scaleform::Render::GL::HALGLRenderbuffer * GetPtr();
	Scaleform::Render::GL::HALGLRenderbuffer * operator->();
	Scaleform::Render::GL::HALGLRenderbuffer & operator*();
private:
	Scaleform::Render::GL::HALGLRenderbuffer * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GL::HALGLProgramPipeline>
{
public:
	Pickable<Scaleform::Render::GL::HALGLProgramPipeline>(Scaleform::Render::GL::HALGLProgramPipeline *, Scaleform::PickType);
	Pickable<Scaleform::Render::GL::HALGLProgramPipeline>(Scaleform::Render::GL::HALGLProgramPipeline *);
	Pickable<Scaleform::Render::GL::HALGLProgramPipeline>();
	Scaleform::Pickable<Scaleform::Render::GL::HALGLProgramPipeline> & operator=(const Scaleform::Pickable<Scaleform::Render::GL::HALGLProgramPipeline> &);
	Scaleform::Render::GL::HALGLProgramPipeline * GetPtr();
	Scaleform::Render::GL::HALGLProgramPipeline * operator->();
	Scaleform::Render::GL::HALGLProgramPipeline & operator*();
private:
	Scaleform::Render::GL::HALGLProgramPipeline * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::TextureCacheGeneric>
{
public:
	Pickable<Scaleform::Render::TextureCacheGeneric>(Scaleform::Render::TextureCacheGeneric *, Scaleform::PickType);
	Pickable<Scaleform::Render::TextureCacheGeneric>(Scaleform::Render::TextureCacheGeneric *);
	Pickable<Scaleform::Render::TextureCacheGeneric>();
	Scaleform::Pickable<Scaleform::Render::TextureCacheGeneric> & operator=(const Scaleform::Pickable<Scaleform::Render::TextureCacheGeneric> &);
	Scaleform::Render::TextureCacheGeneric * GetPtr();
	Scaleform::Render::TextureCacheGeneric * operator->();
	Scaleform::Render::TextureCacheGeneric & operator*();
private:
	Scaleform::Render::TextureCacheGeneric * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GL::GraphicsDeviceRecorder>
{
public:
	Pickable<Scaleform::Render::GL::GraphicsDeviceRecorder>(Scaleform::Render::GL::GraphicsDeviceRecorder *, Scaleform::PickType);
	Pickable<Scaleform::Render::GL::GraphicsDeviceRecorder>(Scaleform::Render::GL::GraphicsDeviceRecorder *);
	Pickable<Scaleform::Render::GL::GraphicsDeviceRecorder>();
	Scaleform::Pickable<Scaleform::Render::GL::GraphicsDeviceRecorder> & operator=(const Scaleform::Pickable<Scaleform::Render::GL::GraphicsDeviceRecorder> &);
	Scaleform::Render::GL::GraphicsDeviceRecorder * GetPtr();
	Scaleform::Render::GL::GraphicsDeviceRecorder * operator->();
	Scaleform::Render::GL::GraphicsDeviceRecorder & operator*();
private:
	Scaleform::Render::GL::GraphicsDeviceRecorder * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::Render::GL::TextureManager>
{
public:
	Pickable<Scaleform::Render::GL::TextureManager>(Scaleform::Render::GL::TextureManager *, Scaleform::PickType);
	Pickable<Scaleform::Render::GL::TextureManager>(Scaleform::Render::GL::TextureManager *);
	Pickable<Scaleform::Render::GL::TextureManager>();
	Scaleform::Pickable<Scaleform::Render::GL::TextureManager> & operator=(const Scaleform::Pickable<Scaleform::Render::GL::TextureManager> &);
	Scaleform::Render::GL::TextureManager * GetPtr();
	Scaleform::Render::GL::TextureManager * operator->();
	Scaleform::Render::GL::TextureManager & operator*();
private:
	Scaleform::Render::GL::TextureManager * pV; // 0x0
};
Scaleform::Ptr<Scaleform::File>::~Ptr<Scaleform::File>(); // 0x140270EF0
Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider>::~Ptr<extension::gfxi_detail::CustomFontProvider>(); // 0x140270EF0
Scaleform::Ptr<Scaleform::GFx::ImageCreator>::~Ptr<Scaleform::GFx::ImageCreator>(); // 0x140270EF0
Scaleform::Ptr<Scaleform::GFx::URLBuilder>::~Ptr<Scaleform::GFx::URLBuilder>(); // 0x140270EF0
Scaleform::Ptr<Scaleform::Render::Text::DocView>::~Ptr<Scaleform::Render::Text::DocView>(); // 0x140270EF0
Scaleform::Ptr<Scaleform::GFx::DrawText>::~Ptr<Scaleform::GFx::DrawText>(); // 0x1402743C0
Scaleform::Ptr<Scaleform::GFx::DrawTextManager>::~Ptr<Scaleform::GFx::DrawTextManager>(); // 0x1402743C0
Scaleform::Ptr<Scaleform::GFx::FontLib>::~Ptr<Scaleform::GFx::FontLib>(); // 0x140270EF0
Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi>::~Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi>(); // 0x140270EF0
Scaleform::Ptr<Scaleform::GFx::Movie>::~Ptr<Scaleform::GFx::Movie>(); // 0x140278D10
Scaleform::Ptr<Scaleform::GFx::AS3Support>::~Ptr<Scaleform::GFx::AS3Support>(); // 0x140270EF0
Scaleform::Ptr<Scaleform::GFx::MovieDef>::~Ptr<Scaleform::GFx::MovieDef>(); // 0x14027B5A0
Scaleform::Ptr<Scaleform::Render::GL::HAL>::~Ptr<Scaleform::Render::GL::HAL>(); // 0x140270EF0
Scaleform::Ptr<Scaleform::Render::RenderTarget>::~Ptr<Scaleform::Render::RenderTarget>(); // 0x14027F3F0
class Scaleform::WeakPtrProxy :
	Scaleform::NewOverrideBase<2>
{
private:
	WeakPtrProxy(const Scaleform::WeakPtrProxy &);
public:
	WeakPtrProxy(Scaleform::RefCountWeakSupportImpl *);
	bool IsAlive();
	void NotifyObjectDied();
	Scaleform::RefCountWeakSupportImpl * GetObject();
	void AddRef();
	void Release();
private:
	void operator=(const Scaleform::WeakPtrProxy &);
	long RefCount; // 0x0
	Scaleform::RefCountWeakSupportImpl * pObject; // 0x8
};
class Scaleform::NewOverrideBase<2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
};
Scaleform::Ptr<Scaleform::GFx::InteractiveObject> Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>::operator Scaleform::Ptr<Scaleform::GFx::InteractiveObject>(); // 0x1402DE370
class Scaleform::Ptr<Scaleform::WeakPtrProxy>
{
protected:
	Scaleform::WeakPtrProxy * pObject; // 0x0
public:
	Ptr<Scaleform::WeakPtrProxy>(const Scaleform::Ptr<Scaleform::WeakPtrProxy> &);
	Ptr<Scaleform::WeakPtrProxy>(Scaleform::WeakPtrProxy *);
	Ptr<Scaleform::WeakPtrProxy>(Scaleform::Ptr<Scaleform::WeakPtrProxy> &, Scaleform::PickType);
	Ptr<Scaleform::WeakPtrProxy>(Scaleform::Pickable<Scaleform::WeakPtrProxy>);
	Ptr<Scaleform::WeakPtrProxy>(Scaleform::WeakPtrProxy &);
	Ptr<Scaleform::WeakPtrProxy>();
	~Ptr<Scaleform::WeakPtrProxy>();
	bool operator==(Scaleform::WeakPtrProxy *);
	bool operator==(const Scaleform::Ptr<Scaleform::WeakPtrProxy> &);
	bool operator!=(Scaleform::WeakPtrProxy *);
	bool operator!=(const Scaleform::Ptr<Scaleform::WeakPtrProxy> &);
	bool operator<(const Scaleform::Ptr<Scaleform::WeakPtrProxy> &);
	Scaleform::Ptr<Scaleform::WeakPtrProxy> & operator=(Scaleform::Pickable<Scaleform::WeakPtrProxy>);
	const Scaleform::Ptr<Scaleform::WeakPtrProxy> & operator=(Scaleform::WeakPtrProxy &);
	const Scaleform::Ptr<Scaleform::WeakPtrProxy> & operator=(Scaleform::WeakPtrProxy *);
	const Scaleform::Ptr<Scaleform::WeakPtrProxy> & operator=(const Scaleform::Ptr<Scaleform::WeakPtrProxy> &);
	Scaleform::Ptr<Scaleform::WeakPtrProxy> & SetPtr(Scaleform::Pickable<Scaleform::WeakPtrProxy>);
	Scaleform::Ptr<Scaleform::WeakPtrProxy> & SetPtr(Scaleform::WeakPtrProxy &);
	Scaleform::Ptr<Scaleform::WeakPtrProxy> & SetPtr(Scaleform::WeakPtrProxy *);
	Scaleform::Ptr<Scaleform::WeakPtrProxy> & SetPtr(const Scaleform::Ptr<Scaleform::WeakPtrProxy> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::WeakPtrProxy * & GetRawRef();
	Scaleform::WeakPtrProxy * GetPtr();
	Scaleform::WeakPtrProxy & operator*();
	Scaleform::WeakPtrProxy * operator->();
	Scaleform::WeakPtrProxy * operator class Scaleform::WeakPtrProxy *();
	Scaleform::Ptr<Scaleform::WeakPtrProxy> & Pick(Scaleform::WeakPtrProxy *);
	Scaleform::Ptr<Scaleform::WeakPtrProxy> & Pick(Scaleform::Pickable<Scaleform::WeakPtrProxy>);
	Scaleform::Ptr<Scaleform::WeakPtrProxy> & Pick(Scaleform::Ptr<Scaleform::WeakPtrProxy> &);
};