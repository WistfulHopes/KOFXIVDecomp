#pragma once

enum Scaleform::StatHeap
{
	StatHeap_Summary = 16,
	StatHeap_TotalFootprint = 17,
	StatHeap_LocalFootprint = 18,
	StatHeap_ChildFootprint = 19,
	StatHeap_ChildHeaps = 20,
	StatHeap_LocalUsedSpace = 21,
	StatHeap_SysDirectSpace = 22,
	StatHeap_Bookkeeping = 23,
	StatHeap_DebugInfo = 24,
	StatHeap_Segments = 25,
	StatHeap_Granularity = 26,
	StatHeap_DynamicGranularity = 27,
	StatHeap_Reserve = 28,
};
struct Scaleform::ListNode<Scaleform::MemoryHeap>
{
	Scaleform::MemoryHeap * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::MemoryHeap * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::MemoryHeap>();
	Scaleform::MemoryHeap * GetPrev();
	Scaleform::MemoryHeap * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::MemoryHeap *);
	void InsertNodeAfter(Scaleform::MemoryHeap *);
	void InsertNodeBefore(Scaleform::MemoryHeap *);
};
class Scaleform::MemoryHeap :
	Scaleform::ListNode<Scaleform::MemoryHeap>
{
	enum MemReportType
	{
		MemReportBrief = 0,
		MemReportFull = 1,
		MemReportFileSummary = 2,
		MemReportHeapDetailed = 3,
	};
	enum HeapFlags
	{
		Heap_ThreadUnsafe = 1,
		Heap_FastTinyBlocks = 2,
		Heap_FixedGranularity = 4,
		Heap_Root = 8,
		Heap_NoDebugInfo = 16,
		Heap_UserDebug = 4096,
	};
	enum RootHeapParameters
	{
		RootHeap_MinAlign = 16,
		RootHeap_Granularity = 16384,
		RootHeap_Reserve = 16384,
		RootHeap_Threshold = 262144,
		RootHeap_Limit = 0,
	};
	struct HeapDesc;
	struct RootHeapDesc;
	struct HeapInfo;
	struct HeapVisitor;
	struct LimitHandler;
	struct HeapTracer;
	struct RootStats;
protected:
	MemoryHeap();
	~MemoryHeap();
public:
	static void InitPT(Scaleform::SysAllocPaged *);
	static void InitMH(Scaleform::SysAlloc *);
	static void CleanUpPT();
	static void CleanUpMH();
	static Scaleform::MemoryHeap * CreateRootHeapPT(const Scaleform::MemoryHeap::HeapDesc &);
	static Scaleform::MemoryHeap * CreateRootHeapPT();
	static Scaleform::MemoryHeap * CreateRootHeapMH(const Scaleform::MemoryHeap::HeapDesc &);
	static Scaleform::MemoryHeap * CreateRootHeapMH();
	static bool ReleaseRootHeapPT();
	static bool ReleaseRootHeapMH();
	void CreateArena(unsigned long long, Scaleform::SysAllocPaged *);
	void DestroyArena(unsigned long long);
	bool ArenaIsEmpty(unsigned long long);
	Scaleform::MemoryHeap * CreateHeap(const char *, unsigned long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long);
	Scaleform::MemoryHeap * CreateHeap(const char *, const Scaleform::MemoryHeap::HeapDesc &);
	void GetHeapInfo(Scaleform::MemoryHeap::HeapInfo *);
	const char * GetName();
	unsigned long long GetId();
	Scaleform::MemoryHeap * GetParentHeap();
	unsigned long GetFlags();
	unsigned long long GetGranularity();
	unsigned long long GetMinAlign();
	void SetLimitHandler(Scaleform::MemoryHeap::LimitHandler *);
	void SetLimit(unsigned long long);
	unsigned long long GetLimit();
	bool IsThreadSafe();
	void AddRef();
	void Release();
	void ReleaseOnFree(void *);
	void AssignToCurrentThread();
	void * Alloc(unsigned long long, unsigned long long, const Scaleform::AllocInfo *);
	void * Alloc(unsigned long long, const Scaleform::AllocInfo *);
	void * Realloc(void *, unsigned long long);
	void Free(void *);
	void * AllocAutoHeap(const void *, unsigned long long, unsigned long long, const Scaleform::AllocInfo *);
	void * AllocAutoHeap(const void *, unsigned long long, const Scaleform::AllocInfo *);
	Scaleform::MemoryHeap * GetAllocHeap(const void *);
	Scaleform::MemoryHeap * GetAllocHeapOrNULL(const void *);
	unsigned long long GetUsableSize(const void *);
	void * AllocSysDirect(unsigned long long);
	void FreeSysDirect(void *, unsigned long long);
	bool GetStats(Scaleform::StatBag *);
	unsigned long long GetFootprint();
	unsigned long long GetTotalFootprint();
	unsigned long long GetUsedSpace();
	unsigned long long GetTotalUsedSpace();
	void GetRootStats(Scaleform::MemoryHeap::RootStats *);
	void VisitMem(Scaleform::Heap::MemVisitor *, unsigned long);
	void VisitRootSegments(Scaleform::Heap::SegVisitor *);
	void VisitHeapSegments(Scaleform::Heap::SegVisitor *);
	void SetTracer(Scaleform::MemoryHeap::HeapTracer *);
	void MemReport(Scaleform::MemItem *, Scaleform::MemoryHeap::MemReportType);
	void MemReport(Scaleform::StringBuffer &, Scaleform::MemoryHeap::MemReportType, bool);
	bool DumpMemoryLeaks();
	void UltimateCheck();
	void VisitChildHeaps(Scaleform::MemoryHeap::HeapVisitor *);
	void LockAndVisit(Scaleform::MemoryHeap::HeapVisitor *);
	void CheckIntegrity();
	void ReleaseCachedMem();
	long CheckRead(long);
protected:
	void destroyItself();
	void ultimateCheck();
	void releaseCachedMem();
	bool dumpMemoryLeaks();
	void checkIntegrity();
	void getUserDebugStats(Scaleform::MemoryHeap::RootStats *);
	class ChildListType;
	unsigned long long SelfSize; // 0x18
	volatile unsigned long RefCount; // 0x20
	unsigned long long OwnerThreadId; // 0x28
	void * pAutoRelease; // 0x30
	Scaleform::MemoryHeap::HeapInfo Info; // 0x38
	Scaleform::List<Scaleform::MemoryHeap,Scaleform::MemoryHeap,Scaleform::ListNode<Scaleform::MemoryHeap> > ChildHeaps; // 0x88
	Scaleform::Lock HeapLock; // 0x98
	bool UseLocks; // 0xC8
	bool TrackDebugInfo; // 0xC9
};
struct Scaleform::MemoryHeap::HeapDesc
{
	unsigned long Flags; // 0x0
	unsigned long long MinAlign; // 0x8
	unsigned long long Granularity; // 0x10
	unsigned long long Reserve; // 0x18
	unsigned long long Threshold; // 0x20
	unsigned long long Limit; // 0x28
	unsigned long long HeapId; // 0x30
	unsigned long long Arena; // 0x38
	HeapDesc(unsigned long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long);
	void Clear();
	void __dflt_ctor_closure();
};
struct Scaleform::MemoryHeap::RootHeapDesc :
	Scaleform::MemoryHeap::HeapDesc
{
	RootHeapDesc();
};
struct Scaleform::MemoryHeap::HeapInfo
{
	Scaleform::MemoryHeap::HeapDesc Desc; // 0x0
	Scaleform::MemoryHeap * pParent; // 0x40
	char * pName; // 0x48
	HeapInfo();
};
struct Scaleform::MemoryHeap::HeapVisitor
{
	~HeapVisitor();
	void Visit(Scaleform::MemoryHeap *, Scaleform::MemoryHeap *);
	HeapVisitor(const Scaleform::MemoryHeap::HeapVisitor &);
	HeapVisitor();
	Scaleform::MemoryHeap::HeapVisitor & operator=(const Scaleform::MemoryHeap::HeapVisitor &);
};
struct Scaleform::MemoryHeap::LimitHandler
{
	LimitHandler(const Scaleform::MemoryHeap::LimitHandler &);
	LimitHandler();
	~LimitHandler();
	bool OnExceedLimit(Scaleform::MemoryHeap *, unsigned long long);
	void OnFreeSegment(Scaleform::MemoryHeap *, unsigned long long);
	bool IsInsideAlloc();
	long AllocCount; // 0x8
	Scaleform::MemoryHeap::LimitHandler & operator=(const Scaleform::MemoryHeap::LimitHandler &);
};
struct Scaleform::MemoryHeap::HeapTracer
{
	~HeapTracer();
	void OnCreateHeap(const Scaleform::MemoryHeap *);
	void OnDestroyHeap(const Scaleform::MemoryHeap *);
	void OnAlloc(const Scaleform::MemoryHeap *, unsigned long long, unsigned long long, unsigned long, const void *);
	void OnRealloc(const Scaleform::MemoryHeap *, const void *, unsigned long long, const void *);
	void OnFree(const Scaleform::MemoryHeap *, const void *);
	HeapTracer(const Scaleform::MemoryHeap::HeapTracer &);
	HeapTracer();
	Scaleform::MemoryHeap::HeapTracer & operator=(const Scaleform::MemoryHeap::HeapTracer &);
};
struct Scaleform::MemoryHeap::RootStats
{
	unsigned long long SysMemFootprint; // 0x0
	unsigned long long SysMemUsedSpace; // 0x8
	unsigned long long PageMapFootprint; // 0x10
	unsigned long long PageMapUsedSpace; // 0x18
	unsigned long long BookkeepingFootprint; // 0x20
	unsigned long long BookkeepingUsedSpace; // 0x28
	unsigned long long DebugInfoFootprint; // 0x30
	unsigned long long DebugInfoUsedSpace; // 0x38
	unsigned long long UserDebugFootprint; // 0x40
	unsigned long long UserDebugUsedSpace; // 0x48
};
class Scaleform::List<Scaleform::MemoryHeap,Scaleform::MemoryHeap,Scaleform::ListNode<Scaleform::MemoryHeap> >
{
	class ValueType;
private:
	List<Scaleform::MemoryHeap,Scaleform::MemoryHeap,Scaleform::ListNode<Scaleform::MemoryHeap> >(const Scaleform::List<Scaleform::MemoryHeap,Scaleform::MemoryHeap,Scaleform::ListNode<Scaleform::MemoryHeap> > &);
public:
	List<Scaleform::MemoryHeap,Scaleform::MemoryHeap,Scaleform::ListNode<Scaleform::MemoryHeap> >();
	void Clear();
	Scaleform::MemoryHeap * GetFirst();
	Scaleform::MemoryHeap * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::MemoryHeap *);
	bool IsLast(const Scaleform::MemoryHeap *);
	bool IsNull(const Scaleform::MemoryHeap *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::MemoryHeap * GetPrev(const Scaleform::MemoryHeap *);
	static Scaleform::MemoryHeap * GetNext(const Scaleform::MemoryHeap *);
	void PushFront(Scaleform::MemoryHeap *);
	void PushBack(Scaleform::MemoryHeap *);
	static void Remove(Scaleform::MemoryHeap *);
	void BringToFront(Scaleform::MemoryHeap *);
	void SendToBack(Scaleform::MemoryHeap *);
	void PushListToFront(Scaleform::List<Scaleform::MemoryHeap,Scaleform::MemoryHeap,Scaleform::ListNode<Scaleform::MemoryHeap> > &);
	void PushListToBack(Scaleform::List<Scaleform::MemoryHeap,Scaleform::MemoryHeap,Scaleform::ListNode<Scaleform::MemoryHeap> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::MemoryHeap,Scaleform::MemoryHeap,Scaleform::ListNode<Scaleform::MemoryHeap> > &, Scaleform::MemoryHeap *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::MemoryHeap,Scaleform::MemoryHeap,Scaleform::ListNode<Scaleform::MemoryHeap> > &, Scaleform::MemoryHeap *);
	void PushListItemsToFront(Scaleform::MemoryHeap *, Scaleform::MemoryHeap *);
private:
	const Scaleform::List<Scaleform::MemoryHeap,Scaleform::MemoryHeap,Scaleform::ListNode<Scaleform::MemoryHeap> > & operator=(const Scaleform::List<Scaleform::MemoryHeap,Scaleform::MemoryHeap,Scaleform::ListNode<Scaleform::MemoryHeap> > &);
	Scaleform::ListNode<Scaleform::MemoryHeap> Root; // 0x0
};