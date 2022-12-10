#pragma once

struct Scaleform::HeapPT::TreeSeg
{
	Scaleform::HeapPT::TreeSeg * AddrParent; // 0x0
	Scaleform::HeapPT::TreeSeg * AddrChild[2]; // 0x8
	Scaleform::HeapPT::HdrPage * Headers; // 0x18
	unsigned char * Buffer; // 0x20
	unsigned long long Size; // 0x28
	unsigned long long UseCount; // 0x30
	unsigned long AlignShift; // 0x38
	unsigned long HeadBytes; // 0x3C
};
struct Scaleform::HeapPT::DualTNode :
	Scaleform::ListNode<Scaleform::HeapPT::DualTNode>
{
	Scaleform::HeapPT::DualTNode * Parent; // 0x10
	Scaleform::HeapPT::DualTNode * Child[2]; // 0x18
	Scaleform::HeapPT::DualTNode * AddrParent; // 0x28
	Scaleform::HeapPT::DualTNode * AddrChild[2]; // 0x30
	Scaleform::HeapPT::TreeSeg * ParentSeg; // 0x40
	unsigned long long Size; // 0x48
	static unsigned char * GetAlignedPtr(unsigned char *, unsigned long long);
	bool AlignmentIsOK(unsigned long long, unsigned long long, unsigned long long);
	DualTNode();
};
struct Scaleform::ListNode<Scaleform::HeapPT::DualTNode>
{
	Scaleform::HeapPT::DualTNode * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::HeapPT::DualTNode * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::HeapPT::DualTNode>();
	Scaleform::HeapPT::DualTNode * GetPrev();
	Scaleform::HeapPT::DualTNode * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::HeapPT::DualTNode *);
	void InsertNodeAfter(Scaleform::HeapPT::DualTNode *);
	void InsertNodeBefore(Scaleform::HeapPT::DualTNode *);
};
class Scaleform::HeapPT::AllocLite
{
	struct FreeNode;
	struct SizeAccessor;
	struct AddrAccessor;
	enum ReallocResult
	{
		ReallocSucceeded = 0,
		ReallocShrinkedAtTail = 1,
		ReallocFailed = 2,
		ReallocFailedAtTail = 3,
	};
public:
	AllocLite(unsigned long long);
	void InitSegment(Scaleform::HeapPT::TreeSeg *);
	void ReleaseSegment(Scaleform::HeapPT::TreeSeg *);
	void * Alloc(unsigned long long, unsigned long long, Scaleform::HeapPT::TreeSeg * *);
	void Free(Scaleform::HeapPT::TreeSeg *, void *, unsigned long long, unsigned long long);
	Scaleform::HeapPT::AllocLite::ReallocResult ReallocInPlace(Scaleform::HeapPT::TreeSeg *, void *, unsigned long long, unsigned long long, unsigned long long);
	void Extend(Scaleform::HeapPT::TreeSeg *, unsigned long long);
	bool TrimAt(Scaleform::HeapPT::TreeSeg *, unsigned char *);
	unsigned long long GetMinSize();
	unsigned long long GetFreeBytes();
	void VisitMem(Scaleform::Heap::MemVisitor *, Scaleform::Heap::MemVisitor::Category);
	void VisitUnused(Scaleform::Heap::SegVisitor *, unsigned long);
	class SizeTreeType;
	class AddrTreeType;
private:
	void pushNode(Scaleform::HeapPT::DualTNode *, Scaleform::HeapPT::TreeSeg *, unsigned long long);
	void pullNode(Scaleform::HeapPT::DualTNode *);
	Scaleform::HeapPT::DualTNode * pullBest(unsigned long long, unsigned long long);
	Scaleform::HeapPT::DualTNode * pullBest(unsigned long long);
	void splitNode(Scaleform::HeapPT::DualTNode *, unsigned char *, unsigned long long);
	void visitTree(const Scaleform::HeapPT::DualTNode *, Scaleform::Heap::HeapSegment *, Scaleform::Heap::MemVisitor *, Scaleform::Heap::MemVisitor::Category);
	void visitUnusedNode(const Scaleform::HeapPT::DualTNode *, Scaleform::Heap::SegVisitor *, unsigned long);
	void visitUnusedInTree(const Scaleform::HeapPT::DualTNode *, Scaleform::Heap::SegVisitor *, unsigned long);
	unsigned long long MinShift; // 0x0
	unsigned long long MinSize; // 0x8
	unsigned long long MinMask; // 0x10
	Scaleform::RadixTreeMulti<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor> SizeTree; // 0x18
	Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor> AddrTree; // 0x20
	unsigned long long FreeBlocks; // 0x28
};
struct Scaleform::HeapPT::AllocLite::SizeAccessor
{
	static unsigned long long GetKey(const Scaleform::HeapPT::DualTNode *);
	static const Scaleform::HeapPT::DualTNode * GetChild(const Scaleform::HeapPT::DualTNode *, unsigned long long);
	static Scaleform::HeapPT::DualTNode * GetChild(Scaleform::HeapPT::DualTNode *, unsigned long long);
	static Scaleform::HeapPT::DualTNode * * GetChildPtr(Scaleform::HeapPT::DualTNode *, unsigned long long);
	static const Scaleform::HeapPT::DualTNode * GetParent(const Scaleform::HeapPT::DualTNode *);
	static Scaleform::HeapPT::DualTNode * GetParent(Scaleform::HeapPT::DualTNode *);
	static void SetParent(Scaleform::HeapPT::DualTNode *, Scaleform::HeapPT::DualTNode *);
	static void SetChild(Scaleform::HeapPT::DualTNode *, unsigned long long, Scaleform::HeapPT::DualTNode *);
	static void ClearLinks(Scaleform::HeapPT::DualTNode *);
};
struct Scaleform::HeapPT::AllocLite::AddrAccessor
{
	static unsigned long long GetKey(const Scaleform::HeapPT::DualTNode *);
	static const Scaleform::HeapPT::DualTNode * GetChild(const Scaleform::HeapPT::DualTNode *, unsigned long long);
	static Scaleform::HeapPT::DualTNode * GetChild(Scaleform::HeapPT::DualTNode *, unsigned long long);
	static Scaleform::HeapPT::DualTNode * * GetChildPtr(Scaleform::HeapPT::DualTNode *, unsigned long long);
	static const Scaleform::HeapPT::DualTNode * GetParent(const Scaleform::HeapPT::DualTNode *);
	static Scaleform::HeapPT::DualTNode * GetParent(Scaleform::HeapPT::DualTNode *);
	static void SetParent(Scaleform::HeapPT::DualTNode *, Scaleform::HeapPT::DualTNode *);
	static void SetChild(Scaleform::HeapPT::DualTNode *, unsigned long long, Scaleform::HeapPT::DualTNode *);
	static void ClearLinks(Scaleform::HeapPT::DualTNode *);
};
class Scaleform::RadixTreeMulti<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>
{
public:
	void Insert(Scaleform::HeapPT::DualTNode *);
	void Remove(Scaleform::HeapPT::DualTNode *);
	const Scaleform::HeapPT::DualTNode * FindBestGrEq(unsigned long long);
	const Scaleform::HeapPT::DualTNode * FindBestLeEq(unsigned long long);
	Scaleform::HeapPT::DualTNode * PullBestGrEq(unsigned long long);
	Scaleform::HeapPT::DualTNode * PullBestLeEq(unsigned long long);
	Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor> Tree; // 0x0
	RadixTreeMulti<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>();
};
class Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>
{
	enum <unnamed-enum-KeyBits>
	{
		KeyBits = 64,
	};
public:
	RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>();
	void Clear();
	Scaleform::HeapPT::DualTNode * Insert(Scaleform::HeapPT::DualTNode *);
	void Remove(Scaleform::HeapPT::DualTNode *);
	void Remove(Scaleform::HeapPT::DualTNode *, Scaleform::HeapPT::DualTNode *);
	const Scaleform::HeapPT::DualTNode * FindEqual(unsigned long long);
	static const Scaleform::HeapPT::DualTNode * GetLeftmost(const Scaleform::HeapPT::DualTNode *);
	static const Scaleform::HeapPT::DualTNode * GetRightmost(const Scaleform::HeapPT::DualTNode *);
	const Scaleform::HeapPT::DualTNode * FindGrEq(unsigned long long);
	const Scaleform::HeapPT::DualTNode * FindLeEq(unsigned long long);
	Scaleform::HeapPT::DualTNode * Root; // 0x0
};