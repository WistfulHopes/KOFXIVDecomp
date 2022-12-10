#pragma once

class Scaleform::SysAllocBase
{
protected:
	~SysAllocBase();
	bool initHeapEngine(const void *);
	bool shutdownHeapEngine();
public:
	SysAllocBase(const Scaleform::SysAllocBase &);
	SysAllocBase();
	Scaleform::SysAllocBase & operator=(const Scaleform::SysAllocBase &);
};
bool Scaleform::SysAllocBase::initHeapEngine(const void * heapDesc); // 0x14004BBE0
bool Scaleform::SysAllocBase::shutdownHeapEngine(); // 0x1400B8180
class Scaleform::SysAlloc :
	Scaleform::SysAllocBase
{
public:
	SysAlloc(const Scaleform::SysAlloc &);
	SysAlloc();
	virtual ~SysAlloc();
	void * Alloc(unsigned long long, unsigned long long);
	void Free(void *, unsigned long long, unsigned long long);
	void * Realloc(void *, unsigned long long, unsigned long long, unsigned long long);
protected:
	virtual bool initHeapEngine(const void *);
	virtual bool shutdownHeapEngine();
public:
	Scaleform::SysAlloc & operator=(const Scaleform::SysAlloc &);
};
Scaleform::SysAlloc::~SysAlloc(); // 0x14027F7D0
class Scaleform::SysAllocPaged :
	Scaleform::SysAllocBase
{
	struct Info;
public:
	SysAllocPaged(const Scaleform::SysAllocPaged &);
	SysAllocPaged();
	void GetInfo(Scaleform::SysAllocPaged::Info *);
	void * Alloc(unsigned long long, unsigned long long);
	bool Free(void *, unsigned long long, unsigned long long);
	bool ReallocInPlace(void *, unsigned long long, unsigned long long, unsigned long long);
	void * AllocSysDirect(unsigned long long, unsigned long long, unsigned long long *, unsigned long long *);
	bool FreeSysDirect(void *, unsigned long long, unsigned long long);
	unsigned long long GetBase();
	unsigned long long GetSize();
	unsigned long long GetFootprint();
	unsigned long long GetUsedSpace();
	void VisitMem(Scaleform::Heap::MemVisitor *);
	void VisitSegments(Scaleform::Heap::SegVisitor *, unsigned long long, unsigned long long);
	virtual ~SysAllocPaged();
protected:
	virtual bool initHeapEngine(const void *);
	virtual bool shutdownHeapEngine();
public:
	Scaleform::SysAllocPaged & operator=(const Scaleform::SysAllocPaged &);
};
struct Scaleform::SysAllocPaged::Info
{
	unsigned long long MinAlign; // 0x0
	unsigned long long MaxAlign; // 0x8
	unsigned long long Granularity; // 0x10
	unsigned long long SysDirectThreshold; // 0x18
	unsigned long long MaxHeapGranularity; // 0x20
	bool HasRealloc; // 0x28
};
void * Scaleform::SysAllocPaged::AllocSysDirect(unsigned long long __formal, unsigned long long __formal, unsigned long long * __formal, unsigned long long * __formal); // 0x1400470F0
bool Scaleform::SysAllocPaged::FreeSysDirect(void * __formal, unsigned long long __formal, unsigned long long __formal); // 0x14004BBE0
void Scaleform::SysAllocPaged::VisitSegments(Scaleform::Heap::SegVisitor * __formal, unsigned long long __formal, unsigned long long __formal); // 0x14002E7C0
class Scaleform::SysAllocStatic :
	Scaleform::SysAllocPaged
{
	enum <unnamed-enum-MaxSegments>
	{
		MaxSegments = 4,
	};
public:
	SysAllocStatic(Scaleform::SysAllocStatic &);
	SysAllocStatic(const Scaleform::SysAllocStatic &);
	SysAllocStatic(unsigned long long);
	SysAllocStatic(void *, unsigned long long, void *, unsigned long long, void *, unsigned long long, void *, unsigned long long);
	void AddMemSegment(void *, unsigned long long);
	virtual void GetInfo(Scaleform::SysAllocPaged::Info *);
	virtual void * Alloc(unsigned long long, unsigned long long);
	virtual bool ReallocInPlace(void *, unsigned long long, unsigned long long, unsigned long long);
	virtual bool Free(void *, unsigned long long, unsigned long long);
	virtual void VisitMem(Scaleform::Heap::MemVisitor *);
	virtual unsigned long long GetFootprint();
	virtual unsigned long long GetUsedSpace();
	virtual unsigned long long GetBase();
	virtual unsigned long long GetSize();
private:
	unsigned long long MinSize; // 0x8
	unsigned long long NumSegments; // 0x10
	Scaleform::HeapPT::AllocLite * pAllocator; // 0x18
	unsigned long long PrivateData[8]; // 0x20
	unsigned long long Segments[8][4]; // 0x60
	unsigned long long TotalSpace; // 0x160
public:
	virtual ~SysAllocStatic();
	Scaleform::SysAllocStatic & operator=(Scaleform::SysAllocStatic &);
	Scaleform::SysAllocStatic & operator=(const Scaleform::SysAllocStatic &);
	void __dflt_ctor_closure();
};
struct Scaleform::SysAllocBase_SingletonSupport<Scaleform::SysAllocMalloc,Scaleform::SysAlloc>::SysAllocContainer
{
	unsigned long long Data[2]; // 0x0
	bool Initialized; // 0x10
	SysAllocContainer();
};
class Scaleform::SysMemMapper
{
public:
	unsigned long long GetPageSize();
	void * ReserveAddrSpace(unsigned long long);
	bool ReleaseAddrSpace(void *, unsigned long long);
	void * MapPages(void *, unsigned long long);
	bool UnmapPages(void *, unsigned long long);
	~SysMemMapper();
	SysMemMapper(const Scaleform::SysMemMapper &);
	SysMemMapper();
	Scaleform::SysMemMapper & operator=(const Scaleform::SysMemMapper &);
};