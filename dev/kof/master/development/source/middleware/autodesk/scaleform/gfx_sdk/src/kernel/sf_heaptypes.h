#pragma once

struct Scaleform::ListNode<Scaleform::Heap::HeapSegment>
{
	Scaleform::Heap::HeapSegment * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Heap::HeapSegment * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Heap::HeapSegment>();
	Scaleform::Heap::HeapSegment * GetPrev();
	Scaleform::Heap::HeapSegment * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Heap::HeapSegment *);
	void InsertNodeAfter(Scaleform::Heap::HeapSegment *);
	void InsertNodeBefore(Scaleform::Heap::HeapSegment *);
};
struct Scaleform::Heap::HeapSegment :
	Scaleform::ListNode<Scaleform::Heap::HeapSegment>
{
	unsigned long long SelfSize; // 0x10
	unsigned long SegType; // 0x18
	unsigned long Alignment; // 0x1C
	unsigned long long UseCount; // 0x20
	Scaleform::MemoryHeapPT * pHeap; // 0x28
	unsigned long long DataSize; // 0x30
	unsigned char * pData; // 0x38
	HeapSegment();
};
enum Scaleform::Heap::HeapConstants
{
	Heap_AllowTinyBlocks = 16,
	Heap_AllowDynaSize = 32,
	Heap_StarterGranularity = 32768,
	Heap_StarterHeaderPageSize = 8192,
	Heap_GranulatorHeaderPageSize = 8192,
	Heap_BookkeeperGranularity = 32768,
	Heap_Lv1_PageShift = 12,
	Heap_Lv2_PageShift = 20,
	Heap_Lv3_PageShift = 28,
	Heap_Lv4_PageShift = 40,
	Heap_Lv5_PageShift = 52,
	Heap_Lv6_PageShift = 64,
	Heap_Lv1_TableSize = 256,
	Heap_Lv2_TableSize = 256,
	Heap_Lv3_TableSize = 4096,
	Heap_Lv4_TableSize = 4096,
	Heap_Lv5_TableSize = 4096,
	Heap_Root_TableSize = 4096,
	Heap_Root_PageShift = 52,
	Heap_PageShift = 12,
	Heap_PageSize = 4096,
	Heap_PageMask = 4095,
	Heap_SegmentTiny1 = 0,
	Heap_SegmentTiny2 = 1,
	Heap_SegmentTiny3 = 2,
	Heap_SegmentTiny4 = 3,
	Heap_SegmentTiny5 = 4,
	Heap_SegmentTiny6 = 5,
	Heap_SegmentTiny7 = 6,
	Heap_SegmentTiny8 = 7,
	Heap_SegmentBookkeeper = 8,
	Heap_SegmentSystem = 9,
	Heap_SegmentBitSet = 10,
	Heap_SegmentUndefined = 16,
	Heap_MinShift = 5,
	Heap_MinSize = 32,
	Heap_MinMask = 31,
	Heap_TinyBinSize = 8,
	Heap_DummyValue = 9,
};
class Scaleform::Heap::MemVisitor
{
	enum Category
	{
		Cat_SysAlloc = 0,
		Cat_SysAllocFree = 1,
		Cat_Starter = 2,
		Cat_StarterFree = 3,
		Cat_Bookkeeper = 4,
		Cat_BookkeeperFree = 5,
		Cat_SystemDirect = 6,
		Cat_AllocBitSet = 7,
		Cat_AllocBitSetFree = 8,
		Cat_AllocTiny = 9,
		Cat_AllocTinyFree = 10,
		Cat_DebugInfo = 11,
		Cat_DebugInfoFree = 12,
		Cat_DebugPagePool = 13,
		Cat_DebugPageFree = 14,
		Cat_DebugDataPool = 15,
		Cat_DebugDataBusy = 16,
		Cat_DebugDataFree = 17,
		Cat_Other = 18,
	};
	enum VisitingFlags
	{
		VF_SysAlloc = 1,
		VF_Starter = 2,
		VF_Bookkeeper = 4,
		VF_BookkeeperFree = 8,
		VF_BookkeeperDetailed = 12,
		VF_Heap = 16,
		VF_HeapFree = 32,
		VF_HeapDetailed = 48,
		VF_DebugInfo = 64,
		VF_DebugInfoDetailed = 192,
		VF_All = 255,
	};
public:
	~MemVisitor();
	void Visit(const Scaleform::Heap::HeapSegment *, unsigned long long, unsigned long long, Scaleform::Heap::MemVisitor::Category);
	MemVisitor(const Scaleform::Heap::MemVisitor &);
	MemVisitor();
	Scaleform::Heap::MemVisitor & operator=(const Scaleform::Heap::MemVisitor &);
};
class Scaleform::Heap::SegVisitor
{
	enum Seg_Category
	{
		Seg_SysMem = 1,
		Seg_PageMap = 2,
		Seg_Bookkeeper = 3,
		Seg_DebugInfo = 4,
		Seg_Heap = 5,
		Seg_UnusedMask = 128,
		Seg_SysMemUnused = 129,
		Seg_PageMapUnused = 130,
		Seg_BookkeeperUnused = 131,
		Seg_DebugInfoUnused = 132,
		Seg_HeapUnused = 133,
	};
public:
	~SegVisitor();
	void Visit(unsigned long, const Scaleform::MemoryHeap *, unsigned long long, unsigned long long);
	SegVisitor(const Scaleform::Heap::SegVisitor &);
	SegVisitor();
	Scaleform::Heap::SegVisitor & operator=(const Scaleform::Heap::SegVisitor &);
};