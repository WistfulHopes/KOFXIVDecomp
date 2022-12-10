#pragma once

struct Scaleform::HeapPT::BinLNode
{
	Scaleform::HeapPT::BinLNode * pPrev; // 0x0
	Scaleform::HeapPT::BinLNode * pNext; // 0x8
	Scaleform::Heap::HeapSegment * pSegment; // 0x10
	unsigned long ShortSize; // 0x18
	unsigned long Filler; // 0x1C
};
struct Scaleform::HeapPT::BinTNode :
	Scaleform::HeapPT::BinLNode
{
	unsigned long long Size; // 0x20
	Scaleform::HeapPT::BinTNode * Parent; // 0x28
	Scaleform::HeapPT::BinTNode * Child[2]; // 0x30
	unsigned long long Index; // 0x40
};
struct Scaleform::HeapPT::ListBin
{
	enum <unnamed-enum-BinSize>
	{
		BinSize = 64,
	};
	ListBin();
	void Reset();
	void PushNode(unsigned long long, Scaleform::HeapPT::BinLNode *);
	void PullNode(unsigned long long, Scaleform::HeapPT::BinLNode *);
	Scaleform::HeapPT::BinLNode * PullBest(unsigned long long, unsigned long long, unsigned long long, unsigned long long);
	Scaleform::HeapPT::BinLNode * PullBest(unsigned long long);
	Scaleform::HeapPT::BinLNode * FindAligned(Scaleform::HeapPT::BinLNode *, unsigned long long, unsigned long long, unsigned long long);
	static unsigned char * GetAlignedPtr(unsigned char *, unsigned long long);
	static bool AlignmentIsOK(const Scaleform::HeapPT::BinLNode *, unsigned long long, unsigned long long, unsigned long long);
	unsigned long long Mask; // 0x0
	Scaleform::HeapPT::BinLNode * Roots[64]; // 0x8
};
struct Scaleform::HeapPT::TreeBin
{
	enum <unnamed-enum-BinSize>
	{
		BinSize = 64,
		SizeShift = 6,
		SizeLimit = 255,
	};
	TreeBin();
	void Reset();
	static unsigned long long ShiftForTreeIndex(unsigned long long);
	static unsigned long long ComputeTreeIndex(unsigned long long);
	void PushNode(Scaleform::HeapPT::BinTNode *);
	void PullNode(Scaleform::HeapPT::BinTNode *);
	Scaleform::HeapPT::BinTNode * FindBest(unsigned long long);
	Scaleform::HeapPT::BinTNode * PullBest(unsigned long long);
	const Scaleform::HeapPT::BinTNode * FindExactSize(unsigned long long);
	unsigned long long Mask; // 0x0
	Scaleform::HeapPT::BinTNode * Roots[64]; // 0x8
};
class Scaleform::HeapPT::FreeBin
{
	enum <unnamed-enum-BinSize>
	{
		BinSize = 64,
	};
public:
	FreeBin();
	void Reset();
	static unsigned long * GetBitSet(const Scaleform::Heap::HeapSegment *);
	static unsigned long long GetSize(const void *);
	static unsigned long long GetBytes(const void *, unsigned long long);
	static void SetSize(unsigned char *, unsigned long long, unsigned long long);
	static void MakeNode(Scaleform::Heap::HeapSegment *, unsigned char *, unsigned long long, unsigned long long);
	unsigned char * PullBest(unsigned long long, unsigned long long, unsigned long long);
	unsigned char * PullBest(unsigned long long);
	void Push(Scaleform::Heap::HeapSegment *, unsigned char *, unsigned long long, unsigned long long);
	void Push(unsigned char *);
	void Pull(unsigned char *);
	void Merge(unsigned char *, unsigned long long, bool, bool);
	unsigned long long GetTotalFreeSpace(unsigned long long);
	void VisitMem(Scaleform::Heap::MemVisitor *, unsigned long long, Scaleform::Heap::MemVisitor::Category);
	void VisitUnused(Scaleform::Heap::SegVisitor *, unsigned long long, unsigned long);
	void CheckIntegrity(unsigned long long);
private:
	static void compilerAsserts();
	static Scaleform::HeapPT::BinLNode * getPrevAdjacent(unsigned char *, unsigned long long);
	static Scaleform::HeapPT::BinLNode * getNextAdjacent(unsigned char *, unsigned long long);
	void visitTree(const Scaleform::HeapPT::BinTNode *, Scaleform::Heap::MemVisitor *, unsigned long long, Scaleform::Heap::MemVisitor::Category);
	void visitUnusedNode(const Scaleform::HeapPT::BinLNode *, Scaleform::Heap::SegVisitor *, unsigned long long, unsigned long);
	void visitUnusedInTree(const Scaleform::HeapPT::BinTNode *, Scaleform::Heap::SegVisitor *, unsigned long long, unsigned long);
	void checkBlockIntegrity(const Scaleform::HeapPT::BinLNode *, unsigned long long);
	void checkTreeIntegrity(const Scaleform::HeapPT::BinTNode *, unsigned long long);
	Scaleform::HeapPT::ListBin ListBin1; // 0x0
	Scaleform::HeapPT::ListBin ListBin2; // 0x208
	Scaleform::HeapPT::TreeBin TreeBin1; // 0x410
	unsigned long long FreeBlocks; // 0x618
};