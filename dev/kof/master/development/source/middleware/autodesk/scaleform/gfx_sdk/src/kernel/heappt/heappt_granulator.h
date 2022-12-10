#pragma once

struct Scaleform::HeapPT::HdrPage :
	Scaleform::ListNode<Scaleform::HeapPT::HdrPage>
{
	unsigned long long UseCount; // 0x10
	unsigned long long Filler[5]; // 0x18
	HdrPage();
};
struct Scaleform::ListNode<Scaleform::HeapPT::HdrPage>
{
	Scaleform::HeapPT::HdrPage * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::HeapPT::HdrPage * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::HeapPT::HdrPage>();
	Scaleform::HeapPT::HdrPage * GetPrev();
	Scaleform::HeapPT::HdrPage * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::HeapPT::HdrPage *);
	void InsertNodeAfter(Scaleform::HeapPT::HdrPage *);
	void InsertNodeBefore(Scaleform::HeapPT::HdrPage *);
};
class Scaleform::HeapPT::Granulator
{
	struct Segment;
	struct SegListAccessor;
	struct SegTreeAccessor;
	class HdrListType;
	class SegListType;
	class SegTreeType;
public:
	Granulator(Scaleform::SysAllocPaged *, unsigned long long, unsigned long long, unsigned long long);
	Scaleform::SysAllocPaged * GetSysAlloc();
	unsigned long long GetGranularity();
	void * Alloc(unsigned long long, unsigned long long);
	bool ReallocInPlace(void *, unsigned long long, unsigned long long, unsigned long long);
	bool Free(void *, unsigned long long, unsigned long long);
	unsigned long long GetFootprint();
	unsigned long long GetUsedSpace();
	unsigned long long GetBase();
	unsigned long long GetSize();
	const Scaleform::HeapPT::TreeSeg * GetAllocSegment(const void *);
	void VisitMem(Scaleform::Heap::MemVisitor *, Scaleform::Heap::MemVisitor::Category, Scaleform::Heap::MemVisitor::Category);
	void VisitSegments(Scaleform::Heap::SegVisitor *, unsigned long, unsigned long);
	unsigned long long GetMinBase();
private:
	bool allocSegment(unsigned long long, unsigned long long);
	bool freeSegment(Scaleform::HeapPT::TreeSeg *);
	void * alloc(unsigned long long, unsigned long long);
	bool hasHeaders(const Scaleform::HeapPT::TreeSeg *);
	unsigned char * getSegBase(Scaleform::HeapPT::TreeSeg *);
	unsigned long long getSegSize(const Scaleform::HeapPT::TreeSeg *);
	void visitSegments(const Scaleform::HeapPT::TreeSeg *, Scaleform::Heap::SegVisitor *, unsigned long);
	Scaleform::SysAllocPaged * pSysAlloc; // 0x0
	unsigned long long Granularity; // 0x8
	unsigned long long HdrPageSize; // 0x10
	unsigned long long HdrCapacity; // 0x18
	unsigned long long MinAlign; // 0x20
	unsigned long long MaxAlign; // 0x28
	bool HasRealloc; // 0x30
	Scaleform::List<Scaleform::HeapPT::HdrPage,Scaleform::HeapPT::HdrPage,Scaleform::ListNode<Scaleform::HeapPT::HdrPage> > HdrList; // 0x38
	Scaleform::List2<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegListAccessor> FreeSeg; // 0x48
	Scaleform::RadixTree<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegTreeAccessor> UsedSeg; // 0x88
	unsigned long long Footprint; // 0x90
	Scaleform::HeapPT::AllocLite Allocator; // 0x98
};
struct Scaleform::HeapPT::Granulator::SegListAccessor
{
	static void SetPrev(Scaleform::HeapPT::TreeSeg *, Scaleform::HeapPT::TreeSeg *);
	static void SetNext(Scaleform::HeapPT::TreeSeg *, Scaleform::HeapPT::TreeSeg *);
	static Scaleform::HeapPT::TreeSeg * GetPrev(Scaleform::HeapPT::TreeSeg *);
	static const Scaleform::HeapPT::TreeSeg * GetPrev(const Scaleform::HeapPT::TreeSeg *);
	static Scaleform::HeapPT::TreeSeg * GetNext(Scaleform::HeapPT::TreeSeg *);
	static const Scaleform::HeapPT::TreeSeg * GetNext(const Scaleform::HeapPT::TreeSeg *);
};
struct Scaleform::HeapPT::Granulator::SegTreeAccessor
{
	static unsigned long long GetKey(const Scaleform::HeapPT::TreeSeg *);
	static const Scaleform::HeapPT::TreeSeg * GetChild(const Scaleform::HeapPT::TreeSeg *, unsigned long long);
	static Scaleform::HeapPT::TreeSeg * GetChild(Scaleform::HeapPT::TreeSeg *, unsigned long long);
	static Scaleform::HeapPT::TreeSeg * * GetChildPtr(Scaleform::HeapPT::TreeSeg *, unsigned long long);
	static const Scaleform::HeapPT::TreeSeg * GetParent(const Scaleform::HeapPT::TreeSeg *);
	static Scaleform::HeapPT::TreeSeg * GetParent(Scaleform::HeapPT::TreeSeg *);
	static void SetParent(Scaleform::HeapPT::TreeSeg *, Scaleform::HeapPT::TreeSeg *);
	static void SetChild(Scaleform::HeapPT::TreeSeg *, unsigned long long, Scaleform::HeapPT::TreeSeg *);
	static void ClearLinks(Scaleform::HeapPT::TreeSeg *);
};
class Scaleform::List<Scaleform::HeapPT::HdrPage,Scaleform::HeapPT::HdrPage,Scaleform::ListNode<Scaleform::HeapPT::HdrPage> >
{
	struct ValueType;
private:
	List<Scaleform::HeapPT::HdrPage,Scaleform::HeapPT::HdrPage,Scaleform::ListNode<Scaleform::HeapPT::HdrPage> >(const Scaleform::List<Scaleform::HeapPT::HdrPage,Scaleform::HeapPT::HdrPage,Scaleform::ListNode<Scaleform::HeapPT::HdrPage> > &);
public:
	List<Scaleform::HeapPT::HdrPage,Scaleform::HeapPT::HdrPage,Scaleform::ListNode<Scaleform::HeapPT::HdrPage> >();
	void Clear();
	Scaleform::HeapPT::HdrPage * GetFirst();
	Scaleform::HeapPT::HdrPage * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::HeapPT::HdrPage *);
	bool IsLast(const Scaleform::HeapPT::HdrPage *);
	bool IsNull(const Scaleform::HeapPT::HdrPage *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::HeapPT::HdrPage * GetPrev(const Scaleform::HeapPT::HdrPage *);
	static Scaleform::HeapPT::HdrPage * GetNext(const Scaleform::HeapPT::HdrPage *);
	void PushFront(Scaleform::HeapPT::HdrPage *);
	void PushBack(Scaleform::HeapPT::HdrPage *);
	static void Remove(Scaleform::HeapPT::HdrPage *);
	void BringToFront(Scaleform::HeapPT::HdrPage *);
	void SendToBack(Scaleform::HeapPT::HdrPage *);
	void PushListToFront(Scaleform::List<Scaleform::HeapPT::HdrPage,Scaleform::HeapPT::HdrPage,Scaleform::ListNode<Scaleform::HeapPT::HdrPage> > &);
	void PushListToBack(Scaleform::List<Scaleform::HeapPT::HdrPage,Scaleform::HeapPT::HdrPage,Scaleform::ListNode<Scaleform::HeapPT::HdrPage> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::HeapPT::HdrPage,Scaleform::HeapPT::HdrPage,Scaleform::ListNode<Scaleform::HeapPT::HdrPage> > &, Scaleform::HeapPT::HdrPage *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::HeapPT::HdrPage,Scaleform::HeapPT::HdrPage,Scaleform::ListNode<Scaleform::HeapPT::HdrPage> > &, Scaleform::HeapPT::HdrPage *);
	void PushListItemsToFront(Scaleform::HeapPT::HdrPage *, Scaleform::HeapPT::HdrPage *);
private:
	const Scaleform::List<Scaleform::HeapPT::HdrPage,Scaleform::HeapPT::HdrPage,Scaleform::ListNode<Scaleform::HeapPT::HdrPage> > & operator=(const Scaleform::List<Scaleform::HeapPT::HdrPage,Scaleform::HeapPT::HdrPage,Scaleform::ListNode<Scaleform::HeapPT::HdrPage> > &);
	Scaleform::ListNode<Scaleform::HeapPT::HdrPage> Root; // 0x0
};
class Scaleform::List2<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegListAccessor>
{
	struct ValueType;
public:
	static void SetPrev(Scaleform::HeapPT::TreeSeg *, Scaleform::HeapPT::TreeSeg *);
	static void SetNext(Scaleform::HeapPT::TreeSeg *, Scaleform::HeapPT::TreeSeg *);
	static Scaleform::HeapPT::TreeSeg * GetPrev(Scaleform::HeapPT::TreeSeg *);
	static const Scaleform::HeapPT::TreeSeg * GetPrev(const Scaleform::HeapPT::TreeSeg *);
	static Scaleform::HeapPT::TreeSeg * GetNext(Scaleform::HeapPT::TreeSeg *);
	static const Scaleform::HeapPT::TreeSeg * GetNext(const Scaleform::HeapPT::TreeSeg *);
private:
	List2<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegListAccessor>(const Scaleform::List2<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegListAccessor> &);
public:
	List2<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegListAccessor>();
	void Clear();
	Scaleform::HeapPT::TreeSeg * GetFirst();
	const Scaleform::HeapPT::TreeSeg * GetFirst();
	Scaleform::HeapPT::TreeSeg * GetLast();
	const Scaleform::HeapPT::TreeSeg * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::HeapPT::TreeSeg *);
	bool IsLast(const Scaleform::HeapPT::TreeSeg *);
	bool IsNull(const Scaleform::HeapPT::TreeSeg *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	void PushFront(Scaleform::HeapPT::TreeSeg *);
	void PushBack(Scaleform::HeapPT::TreeSeg *);
	void InsertBefore(Scaleform::HeapPT::TreeSeg *, Scaleform::HeapPT::TreeSeg *);
	void InsertAfter(Scaleform::HeapPT::TreeSeg *, Scaleform::HeapPT::TreeSeg *);
	static void Remove(Scaleform::HeapPT::TreeSeg *);
	void BringToFront(Scaleform::HeapPT::TreeSeg *);
	void SendToBack(Scaleform::HeapPT::TreeSeg *);
	void PushListToFront(Scaleform::List2<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegListAccessor> &);
private:
	const Scaleform::List2<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegListAccessor> & operator=(const Scaleform::List2<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegListAccessor> &);
	Scaleform::HeapPT::TreeSeg Root; // 0x0
};
class Scaleform::RadixTree<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegTreeAccessor>
{
	enum <unnamed-enum-KeyBits>
	{
		KeyBits = 64,
	};
public:
	RadixTree<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegTreeAccessor>();
	void Clear();
	Scaleform::HeapPT::TreeSeg * Insert(Scaleform::HeapPT::TreeSeg *);
	void Remove(Scaleform::HeapPT::TreeSeg *);
	void Remove(Scaleform::HeapPT::TreeSeg *, Scaleform::HeapPT::TreeSeg *);
	const Scaleform::HeapPT::TreeSeg * FindEqual(unsigned long long);
	static const Scaleform::HeapPT::TreeSeg * GetLeftmost(const Scaleform::HeapPT::TreeSeg *);
	static const Scaleform::HeapPT::TreeSeg * GetRightmost(const Scaleform::HeapPT::TreeSeg *);
	const Scaleform::HeapPT::TreeSeg * FindGrEq(unsigned long long);
	const Scaleform::HeapPT::TreeSeg * FindLeEq(unsigned long long);
	Scaleform::HeapPT::TreeSeg * Root; // 0x0
};