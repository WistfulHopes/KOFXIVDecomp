#pragma once

struct Scaleform::AllocAddrNode :
	Scaleform::ListNode<Scaleform::AllocAddrNode>
{
	Scaleform::AllocAddrNode * AddrParent; // 0x10
	Scaleform::AllocAddrNode * AddrChild[2]; // 0x18
	Scaleform::AllocAddrNode * SizeParent; // 0x28
	Scaleform::AllocAddrNode * SizeChild[2]; // 0x30
	unsigned long long Addr; // 0x40
	unsigned long long Size; // 0x48
	AllocAddrNode();
};
struct Scaleform::ListNode<Scaleform::AllocAddrNode>
{
	Scaleform::AllocAddrNode * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::AllocAddrNode * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::AllocAddrNode>();
	Scaleform::AllocAddrNode * GetPrev();
	Scaleform::AllocAddrNode * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::AllocAddrNode *);
	void InsertNodeAfter(Scaleform::AllocAddrNode *);
	void InsertNodeBefore(Scaleform::AllocAddrNode *);
};
class Scaleform::AllocAddr
{
	struct FreeNode;
	struct SizeAccessor;
	struct AddrAccessor;
public:
	AllocAddr(Scaleform::MemoryHeap *, unsigned long long, unsigned long long);
	AllocAddr(Scaleform::MemoryHeap *);
	~AllocAddr();
	void AddSegment(unsigned long long, unsigned long long);
	void RemoveSegment(unsigned long long, unsigned long long);
	unsigned long long Alloc(unsigned long long, unsigned long long);
	unsigned long long Alloc(unsigned long long);
	unsigned long long Free(unsigned long long, unsigned long long);
	unsigned long long GetLargestAvailable();
	unsigned long long GetFreeSize();
	class SizeTreeType;
	class AddrTreeType;
private:
	void destroyAll();
	void pushNode(Scaleform::AllocAddrNode *, unsigned long long, unsigned long long);
	void pullNode(Scaleform::AllocAddrNode *);
	Scaleform::AllocAddrNode * pullBest(unsigned long long);
	void splitNode(Scaleform::AllocAddrNode *, unsigned long long, unsigned long long);
	unsigned long long mergeNodes(Scaleform::AllocAddrNode *, Scaleform::AllocAddrNode *, unsigned long long, unsigned long long);
	Scaleform::MemoryHeap * pNodeHeap; // 0x0
	Scaleform::RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor> SizeTree; // 0x8
	Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor> AddrTree; // 0x10
};
struct Scaleform::AllocAddr::SizeAccessor
{
	static unsigned long long GetKey(const Scaleform::AllocAddrNode *);
	static const Scaleform::AllocAddrNode * GetChild(const Scaleform::AllocAddrNode *, unsigned long long);
	static Scaleform::AllocAddrNode * GetChild(Scaleform::AllocAddrNode *, unsigned long long);
	static Scaleform::AllocAddrNode * * GetChildPtr(Scaleform::AllocAddrNode *, unsigned long long);
	static const Scaleform::AllocAddrNode * GetParent(const Scaleform::AllocAddrNode *);
	static Scaleform::AllocAddrNode * GetParent(Scaleform::AllocAddrNode *);
	static void SetParent(Scaleform::AllocAddrNode *, Scaleform::AllocAddrNode *);
	static void SetChild(Scaleform::AllocAddrNode *, unsigned long long, Scaleform::AllocAddrNode *);
	static void ClearLinks(Scaleform::AllocAddrNode *);
};
struct Scaleform::AllocAddr::AddrAccessor
{
	static unsigned long long GetKey(const Scaleform::AllocAddrNode *);
	static const Scaleform::AllocAddrNode * GetChild(const Scaleform::AllocAddrNode *, unsigned long long);
	static Scaleform::AllocAddrNode * GetChild(Scaleform::AllocAddrNode *, unsigned long long);
	static Scaleform::AllocAddrNode * * GetChildPtr(Scaleform::AllocAddrNode *, unsigned long long);
	static const Scaleform::AllocAddrNode * GetParent(const Scaleform::AllocAddrNode *);
	static Scaleform::AllocAddrNode * GetParent(Scaleform::AllocAddrNode *);
	static void SetParent(Scaleform::AllocAddrNode *, Scaleform::AllocAddrNode *);
	static void SetChild(Scaleform::AllocAddrNode *, unsigned long long, Scaleform::AllocAddrNode *);
	static void ClearLinks(Scaleform::AllocAddrNode *);
};
class Scaleform::RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>
{
public:
	void Insert(Scaleform::AllocAddrNode *);
	void Remove(Scaleform::AllocAddrNode *);
	const Scaleform::AllocAddrNode * FindBestGrEq(unsigned long long);
	const Scaleform::AllocAddrNode * FindBestLeEq(unsigned long long);
	Scaleform::AllocAddrNode * PullBestGrEq(unsigned long long);
	Scaleform::AllocAddrNode * PullBestLeEq(unsigned long long);
	Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor> Tree; // 0x0
	RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>();
};
class Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>
{
	enum <unnamed-enum-KeyBits>
	{
		KeyBits = 64,
	};
public:
	RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>();
	void Clear();
	Scaleform::AllocAddrNode * Insert(Scaleform::AllocAddrNode *);
	void Remove(Scaleform::AllocAddrNode *);
	void Remove(Scaleform::AllocAddrNode *, Scaleform::AllocAddrNode *);
	const Scaleform::AllocAddrNode * FindEqual(unsigned long long);
	static const Scaleform::AllocAddrNode * GetLeftmost(const Scaleform::AllocAddrNode *);
	static const Scaleform::AllocAddrNode * GetRightmost(const Scaleform::AllocAddrNode *);
	const Scaleform::AllocAddrNode * FindGrEq(unsigned long long);
	const Scaleform::AllocAddrNode * FindLeEq(unsigned long long);
	Scaleform::AllocAddrNode * Root; // 0x0
};