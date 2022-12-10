#pragma once

class Scaleform::Render::TextureCacheGeneric :
	Scaleform::Render::TextureCache
{
	enum TrackingMethod
	{
		TrackingMethod_All = 0,
		TrackingMethod_OnlyEvictable = 1,
		TrackingMethod_Count = 2,
	};
public:
	static const unsigned long Megabyte; // 0xFFFFFFFFFFFFFFFF
	enum DefaultLimitSizes
	{
		DefaultLimitSize = 8388608,
	};
	TextureCacheGeneric(unsigned long long, Scaleform::Render::TextureCacheGeneric::TrackingMethod);
	virtual ~TextureCacheGeneric();
	virtual void EndFrame();
	void SetLimitSize(unsigned long long);
	unsigned long long GetLimitSize();
	unsigned long long GetUsageSize();
	unsigned long long GetCurrentFrame();
	Scaleform::Render::TextureCacheGeneric::TrackingMethod GetTrackingMethod();
	bool CanEvictTexture(Scaleform::Render::Texture *);
	virtual void TextureCreation(Scaleform::Render::Texture *);
	virtual void TextureDestroyed(Scaleform::Render::Texture *);
	virtual void TextureReference(Scaleform::Render::Texture *);
	virtual void TextureEvicted(Scaleform::Render::Texture *);
	virtual void PerformEvictionCheck();
	struct TextureReferenceNode;
	class ReferenceListType;
	class UsageHashType;
protected:
	unsigned long long CurrentFrame; // 0x10
	unsigned long long EvictionMemoryLimit; // 0x18
	unsigned long long CurrentMemoryUsage; // 0x20
	Scaleform::HashLH<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *>,2,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >::NodeHashF> > TextureUsageHash; // 0x28
	Scaleform::List<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::ListNode<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode> > TextureEvictionList; // 0x30
	Scaleform::List<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::ListNode<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode> > TextureTrackedList; // 0x40
	Scaleform::Render::TextureCacheGeneric::TrackingMethod TextureTrackingMethod; // 0x50
public:
	void __dflt_ctor_closure();
};
struct Scaleform::ListNode<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode>
{
	Scaleform::Render::TextureCacheGeneric::TextureReferenceNode * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::TextureCacheGeneric::TextureReferenceNode * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode>();
	Scaleform::Render::TextureCacheGeneric::TextureReferenceNode * GetPrev();
	Scaleform::Render::TextureCacheGeneric::TextureReferenceNode * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *);
	void InsertNodeAfter(Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *);
	void InsertNodeBefore(Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *);
};
struct Scaleform::Render::TextureCacheGeneric::TextureReferenceNode :
	Scaleform::ListNode<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode>,
	Scaleform::NewOverrideBase<72>
{
	TextureReferenceNode(Scaleform::Render::Texture *, unsigned long long, bool);
	bool Evictable; // 0x10
	Scaleform::Render::Texture * pTexture; // 0x18
	unsigned long long LastFrameReference; // 0x20
};
class Scaleform::NewOverrideBase<72>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 72,
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
class Scaleform::List<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::ListNode<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode> >
{
	struct ValueType;
private:
	List<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::ListNode<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode> >(const Scaleform::List<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::ListNode<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode> > &);
public:
	List<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::ListNode<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode> >();
	void Clear();
	Scaleform::Render::TextureCacheGeneric::TextureReferenceNode * GetFirst();
	Scaleform::Render::TextureCacheGeneric::TextureReferenceNode * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *);
	bool IsLast(const Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *);
	bool IsNull(const Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::TextureCacheGeneric::TextureReferenceNode * GetPrev(const Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *);
	static Scaleform::Render::TextureCacheGeneric::TextureReferenceNode * GetNext(const Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *);
	void PushFront(Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *);
	void PushBack(Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *);
	static void Remove(Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *);
	void BringToFront(Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *);
	void SendToBack(Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *);
	void PushListToFront(Scaleform::List<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::ListNode<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::ListNode<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::ListNode<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode> > &, Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::ListNode<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode> > &, Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *);
	void PushListItemsToFront(Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *, Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *);
private:
	const Scaleform::List<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::ListNode<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode> > & operator=(const Scaleform::List<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode,Scaleform::ListNode<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode> > &);
	Scaleform::ListNode<Scaleform::Render::TextureCacheGeneric::TextureReferenceNode> Root; // 0x0
};
class Scaleform::HashLH<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *>,2,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >::NodeHashF> > :
	Scaleform::Hash<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *>,Scaleform::AllocatorLH<Scaleform::Render::Texture *,2>,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::Texture *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *>,2,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureRefe(const Scaleform::HashLH<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *>,2,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >::NodeHashF> > &);
	HashLH<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *>,2,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureRefe(long);
	HashLH<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *>,2,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureRefe();
	~HashLH<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *>,2,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureRef();
	void operator=(const Scaleform::HashLH<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *>,2,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >,Scaleform::HashNode<Scaleform::Render::Texture *,Scaleform::Render::TextureCacheGeneric::TextureReferenceNode *,Scaleform::FixedSizeHash<Scaleform::Render::Texture *> >::NodeHashF> > &);
};