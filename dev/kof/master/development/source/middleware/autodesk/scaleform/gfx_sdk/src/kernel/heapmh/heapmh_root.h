#pragma once

struct Scaleform::ListNode<Scaleform::HeapMH::PageMH>
{
	Scaleform::HeapMH::PageMH * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::HeapMH::PageMH * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::HeapMH::PageMH>();
	Scaleform::HeapMH::PageMH * GetPrev();
	Scaleform::HeapMH::PageMH * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::HeapMH::PageMH *);
	void InsertNodeAfter(Scaleform::HeapMH::PageMH *);
	void InsertNodeBefore(Scaleform::HeapMH::PageMH *);
};
struct Scaleform::HeapMH::PageMH :
	Scaleform::ListNode<Scaleform::HeapMH::PageMH>
{
	enum <unnamed-enum-PageSize>
	{
		PageSize = 4096,
		PageMask = 4095,
		UnitShift = 4,
		UnitSize = 16,
		UnitMask = 15,
		BitSetBytes = 64,
		MaxBytes = 512,
	};
	Scaleform::MemoryHeapMH * pHeap; // 0x10
	unsigned char * Start; // 0x18
	PageMH();
};
struct Scaleform::HeapMH::PageTableMH
{
	enum <unnamed-enum-Index1Shift>
	{
		Index1Shift = 7,
		TableSize = 128,
		Index0Mask = 127,
	};
	struct Level0Entry;
	Scaleform::HeapMH::PageTableMH::Level0Entry Entries[128]; // 0x0
};
struct Scaleform::HeapMH::PageTableMH::Level0Entry
{
	Scaleform::HeapMH::PageMH * FirstPage; // 0x0
	unsigned long long SizeMask; // 0x8
};
struct Scaleform::HeapMH::MagicHeader
{
	enum <unnamed-enum-MagicValue>
	{
		MagicValue = 24512,
	};
	unsigned short Magic; // 0x0
	unsigned short UseCount; // 0x2
	unsigned long Index; // 0x4
	Scaleform::HeapMH::DebugDataMH * DebugHeader; // 0x8
	unsigned long GetIndex0();
	unsigned long GetIndex1();
};
struct Scaleform::HeapMH::NodeMH
{
	enum <unnamed-enum-Align4>
	{
		Align4 = 0,
		Align8 = 1,
		Align16 = 2,
		MoreInfo = 3,
	};
	Scaleform::HeapMH::NodeMH * Parent; // 0x0
	Scaleform::HeapMH::NodeMH * Child[2]; // 0x8
	unsigned long long pHeap; // 0x18
	unsigned long long Align; // 0x20
	static unsigned long long GetNodeSize(unsigned long long);
	Scaleform::MemoryHeapMH * GetHeap();
	unsigned long long GetAlign();
	void SetHeap(Scaleform::MemoryHeapMH *, unsigned long long);
};
struct Scaleform::HeapMH::TreeNodeAccessor
{
	static unsigned long long GetKey(const Scaleform::HeapMH::NodeMH *);
	static const Scaleform::HeapMH::NodeMH * GetChild(const Scaleform::HeapMH::NodeMH *, unsigned long long);
	static Scaleform::HeapMH::NodeMH * GetChild(Scaleform::HeapMH::NodeMH *, unsigned long long);
	static Scaleform::HeapMH::NodeMH * * GetChildPtr(Scaleform::HeapMH::NodeMH *, unsigned long long);
	static const Scaleform::HeapMH::NodeMH * GetParent(const Scaleform::HeapMH::NodeMH *);
	static Scaleform::HeapMH::NodeMH * GetParent(Scaleform::HeapMH::NodeMH *);
	static void SetParent(Scaleform::HeapMH::NodeMH *, Scaleform::HeapMH::NodeMH *);
	static void SetChild(Scaleform::HeapMH::NodeMH *, unsigned long long, Scaleform::HeapMH::NodeMH *);
	static void ClearLinks(Scaleform::HeapMH::NodeMH *);
};
struct Scaleform::HeapMH::MagicHeadersInfo
{
	Scaleform::HeapMH::MagicHeader * Header1; // 0x0
	Scaleform::HeapMH::MagicHeader * Header2; // 0x8
	unsigned long * BitSet; // 0x10
	unsigned char * AlignedStart; // 0x18
	unsigned char * AlignedEnd; // 0x20
	unsigned char * Bound; // 0x28
	Scaleform::HeapMH::PageMH * Page; // 0x30
};
struct Scaleform::HeapMH::PageInfoMH
{
	Scaleform::HeapMH::PageMH * Page; // 0x0
	Scaleform::HeapMH::NodeMH * Node; // 0x8
	unsigned long long UsableSize; // 0x10
};
class Scaleform::HeapMH::RootMH
{
	class HeapTreeType;
public:
	RootMH(Scaleform::SysAlloc *);
	~RootMH();
	void FreeTables();
	Scaleform::SysAlloc * GetSysAlloc();
	Scaleform::MemoryHeapMH * CreateHeap(const char *, Scaleform::MemoryHeapMH *, const Scaleform::MemoryHeap::HeapDesc &);
	void DestroyHeap(Scaleform::MemoryHeapMH *);
	Scaleform::LockSafe * GetLock();
	Scaleform::HeapMH::PageMH * AllocPage(Scaleform::MemoryHeapMH *);
	void FreePage(Scaleform::HeapMH::PageMH *);
	unsigned long GetPageIndex(const Scaleform::HeapMH::PageMH *);
	Scaleform::HeapMH::PageMH * ResolveAddress(unsigned long long);
	Scaleform::HeapMH::NodeMH * AddToGlobalTree(unsigned char *, unsigned long long, unsigned long long, Scaleform::MemoryHeapMH *);
	Scaleform::HeapMH::NodeMH * FindNodeInGlobalTree(unsigned char *);
	void RemoveFromGlobalTree(Scaleform::HeapMH::NodeMH *);
private:
	bool allocPagePool();
	static void setMagic(unsigned char *, unsigned long);
	static void clearMagic(unsigned char *);
	Scaleform::SysAlloc * pSysAlloc; // 0x0
	Scaleform::LockSafe RootLock; // 0x8
	Scaleform::List<Scaleform::HeapMH::PageMH,Scaleform::HeapMH::PageMH,Scaleform::ListNode<Scaleform::HeapMH::PageMH> > FreePages; // 0x38
	unsigned long TableCount; // 0x48
	Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor> HeapTree; // 0x50
public:
	static Scaleform::MemoryHeap::HeapTracer * pTracer; // 0xFFFFFFFFFFFFFFFF
};
class Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor>
{
	enum <unnamed-enum-KeyBits>
	{
		KeyBits = 64,
	};
public:
	RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor>();
	void Clear();
	Scaleform::HeapMH::NodeMH * Insert(Scaleform::HeapMH::NodeMH *);
	void Remove(Scaleform::HeapMH::NodeMH *);
	void Remove(Scaleform::HeapMH::NodeMH *, Scaleform::HeapMH::NodeMH *);
	const Scaleform::HeapMH::NodeMH * FindEqual(unsigned long long);
	static const Scaleform::HeapMH::NodeMH * GetLeftmost(const Scaleform::HeapMH::NodeMH *);
	static const Scaleform::HeapMH::NodeMH * GetRightmost(const Scaleform::HeapMH::NodeMH *);
	const Scaleform::HeapMH::NodeMH * FindGrEq(unsigned long long);
	const Scaleform::HeapMH::NodeMH * FindLeEq(unsigned long long);
	Scaleform::HeapMH::NodeMH * Root; // 0x0
};
Scaleform::HeapMH::NodeMH * Scaleform::HeapMH::RootMH::AddToGlobalTree(unsigned char * ptr, unsigned long long size, unsigned long long align, Scaleform::MemoryHeapMH * heap); // 0x1403BE900
class Scaleform::List<Scaleform::HeapMH::PageMH,Scaleform::HeapMH::PageMH,Scaleform::ListNode<Scaleform::HeapMH::PageMH> >
{
	struct ValueType;
private:
	List<Scaleform::HeapMH::PageMH,Scaleform::HeapMH::PageMH,Scaleform::ListNode<Scaleform::HeapMH::PageMH> >(const Scaleform::List<Scaleform::HeapMH::PageMH,Scaleform::HeapMH::PageMH,Scaleform::ListNode<Scaleform::HeapMH::PageMH> > &);
public:
	List<Scaleform::HeapMH::PageMH,Scaleform::HeapMH::PageMH,Scaleform::ListNode<Scaleform::HeapMH::PageMH> >();
	void Clear();
	Scaleform::HeapMH::PageMH * GetFirst();
	Scaleform::HeapMH::PageMH * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::HeapMH::PageMH *);
	bool IsLast(const Scaleform::HeapMH::PageMH *);
	bool IsNull(const Scaleform::HeapMH::PageMH *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::HeapMH::PageMH * GetPrev(const Scaleform::HeapMH::PageMH *);
	static Scaleform::HeapMH::PageMH * GetNext(const Scaleform::HeapMH::PageMH *);
	void PushFront(Scaleform::HeapMH::PageMH *);
	void PushBack(Scaleform::HeapMH::PageMH *);
	static void Remove(Scaleform::HeapMH::PageMH *);
	void BringToFront(Scaleform::HeapMH::PageMH *);
	void SendToBack(Scaleform::HeapMH::PageMH *);
	void PushListToFront(Scaleform::List<Scaleform::HeapMH::PageMH,Scaleform::HeapMH::PageMH,Scaleform::ListNode<Scaleform::HeapMH::PageMH> > &);
	void PushListToBack(Scaleform::List<Scaleform::HeapMH::PageMH,Scaleform::HeapMH::PageMH,Scaleform::ListNode<Scaleform::HeapMH::PageMH> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::HeapMH::PageMH,Scaleform::HeapMH::PageMH,Scaleform::ListNode<Scaleform::HeapMH::PageMH> > &, Scaleform::HeapMH::PageMH *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::HeapMH::PageMH,Scaleform::HeapMH::PageMH,Scaleform::ListNode<Scaleform::HeapMH::PageMH> > &, Scaleform::HeapMH::PageMH *);
	void PushListItemsToFront(Scaleform::HeapMH::PageMH *, Scaleform::HeapMH::PageMH *);
private:
	const Scaleform::List<Scaleform::HeapMH::PageMH,Scaleform::HeapMH::PageMH,Scaleform::ListNode<Scaleform::HeapMH::PageMH> > & operator=(const Scaleform::List<Scaleform::HeapMH::PageMH,Scaleform::HeapMH::PageMH,Scaleform::ListNode<Scaleform::HeapMH::PageMH> > &);
	Scaleform::ListNode<Scaleform::HeapMH::PageMH> Root; // 0x0
};