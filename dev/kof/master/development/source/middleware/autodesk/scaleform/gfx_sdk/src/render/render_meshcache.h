#pragma once

enum Scaleform::Render::MeshCacheListType
{
	MCL_Uncached = 0,
	MCL_InFlight = 1,
	MCL_ThisFrame = 2,
	MCL_PrevFrame = 3,
	MCL_LRUTail = 4,
	MCL_PendingFree = 5,
	MCL_ItemCount = 6,
};
class Scaleform::Render::MeshCacheItem :
	Scaleform::ListNode<Scaleform::Render::MeshCacheItem>,
	Scaleform::Render::FenceResource
{
	enum MeshType
	{
		Mesh_Regular = 0,
		Mesh_Complex = 1,
		Mesh_Destroyed = 2,
	};
public:
	static Scaleform::Render::MeshCacheItem * FindMeshSourceBatch(Scaleform::Render::Mesh *, unsigned long *, unsigned long *, Scaleform::Render::MeshCacheItem *);
	void NotifyMeshRelease(Scaleform::Render::MeshBase *);
	void MoveToCacheListFront(Scaleform::Render::MeshCacheListType);
	Scaleform::Render::MeshUseStatus GetUseStatus();
	Scaleform::Render::MeshCacheListType GetListType();
	static unsigned long long CalcHashKey(const Scaleform::Render::StrideArray<Scaleform::Render::MeshBase *> &);
	static unsigned long long CalcHashKey(Scaleform::Render::MeshBase * *, unsigned long);
	struct MeshBaseContent;
	struct MeshContent;
	class HashFunctor;
	struct AltLookupKey;
	bool Equals(const Scaleform::Render::StrideArray<Scaleform::Render::MeshBase *> &);
protected:
	Scaleform::Render::MeshCache * getCache();
	MeshCacheItem(Scaleform::Render::MeshCacheItem::MeshType, Scaleform::Render::MeshCacheListSet *, Scaleform::Render::MeshCacheItem::MeshBaseContent &, unsigned long long, unsigned long long, unsigned long, unsigned long);
	~MeshCacheItem();
	static unsigned char * alloc(Scaleform::MemoryHeap *, unsigned long long, Scaleform::Render::MeshCacheItem::MeshBaseContent &);
	void destroy(Scaleform::Render::MeshBase *, bool);
	Scaleform::List<Scaleform::Render::MeshCacheItemUseNode,Scaleform::Render::MeshCacheItemUseNode,Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode> > PrimitiveBatches; // 0x20
	Scaleform::Render::MeshCacheItem::MeshType Type; // 0x30
	unsigned long HashKey; // 0x34
	Scaleform::Render::MeshCacheListSet * pCacheList; // 0x38
	Scaleform::Render::MeshCacheListType ListType; // 0x40
	Scaleform::Render::MeshBase * * pMeshes; // 0x48
public:
	unsigned long long AllocSize; // 0x50
	unsigned long MeshCount; // 0x58
	unsigned long VertexCount; // 0x5C
	unsigned long IndexCount; // 0x60
};
struct Scaleform::ListNode<Scaleform::Render::MeshCacheItem>
{
	Scaleform::Render::MeshCacheItem * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::MeshCacheItem * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::MeshCacheItem>();
	Scaleform::Render::MeshCacheItem * GetPrev();
	Scaleform::Render::MeshCacheItem * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::MeshCacheItem *);
	void InsertNodeAfter(Scaleform::Render::MeshCacheItem *);
	void InsertNodeBefore(Scaleform::Render::MeshCacheItem *);
};
unsigned long long Scaleform::Render::MeshCacheItem::CalcHashKey(Scaleform::Render::MeshBase * * pmeshes, unsigned long meshCount); // 0x14041B3F0
struct Scaleform::Render::MeshCacheItem::MeshBaseContent
{
	Scaleform::Render::StrideArray<Scaleform::Render::MeshBase *> Meshes; // 0x0
	unsigned long HashKey; // 0x18
	MeshBaseContent(const Scaleform::Render::StrideArray<Scaleform::Render::MeshBase *> &);
	MeshBaseContent(Scaleform::Render::MeshBase * *, unsigned long);
	unsigned long GetMeshCount();
	Scaleform::Render::MeshBase * operator[](unsigned long);
};
struct Scaleform::Render::MeshCacheItem::MeshContent :
	Scaleform::Render::MeshCacheItem::MeshBaseContent
{
	MeshContent(Scaleform::Render::PrimitiveBatch *);
	MeshContent(Scaleform::Render::Mesh * *, unsigned long);
	Scaleform::Render::Mesh * operator[](unsigned long);
	bool IsLargeMesh();
};
class Scaleform::Render::MeshCacheItem::HashFunctor
{
public:
	unsigned long long operator()(const Scaleform::Render::MeshCacheItem::MeshBaseContent &);
	unsigned long long operator()(Scaleform::Render::MeshCacheItem *);
};
class Scaleform::List<Scaleform::Render::MeshCacheItemUseNode,Scaleform::Render::MeshCacheItemUseNode,Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode> >
{
	struct ValueType;
private:
	List<Scaleform::Render::MeshCacheItemUseNode,Scaleform::Render::MeshCacheItemUseNode,Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode> >(const Scaleform::List<Scaleform::Render::MeshCacheItemUseNode,Scaleform::Render::MeshCacheItemUseNode,Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode> > &);
public:
	List<Scaleform::Render::MeshCacheItemUseNode,Scaleform::Render::MeshCacheItemUseNode,Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode> >();
	void Clear();
	Scaleform::Render::MeshCacheItemUseNode * GetFirst();
	Scaleform::Render::MeshCacheItemUseNode * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::MeshCacheItemUseNode *);
	bool IsLast(const Scaleform::Render::MeshCacheItemUseNode *);
	bool IsNull(const Scaleform::Render::MeshCacheItemUseNode *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::MeshCacheItemUseNode * GetPrev(const Scaleform::Render::MeshCacheItemUseNode *);
	static Scaleform::Render::MeshCacheItemUseNode * GetNext(const Scaleform::Render::MeshCacheItemUseNode *);
	void PushFront(Scaleform::Render::MeshCacheItemUseNode *);
	void PushBack(Scaleform::Render::MeshCacheItemUseNode *);
	static void Remove(Scaleform::Render::MeshCacheItemUseNode *);
	void BringToFront(Scaleform::Render::MeshCacheItemUseNode *);
	void SendToBack(Scaleform::Render::MeshCacheItemUseNode *);
	void PushListToFront(Scaleform::List<Scaleform::Render::MeshCacheItemUseNode,Scaleform::Render::MeshCacheItemUseNode,Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::MeshCacheItemUseNode,Scaleform::Render::MeshCacheItemUseNode,Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::MeshCacheItemUseNode,Scaleform::Render::MeshCacheItemUseNode,Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode> > &, Scaleform::Render::MeshCacheItemUseNode *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::MeshCacheItemUseNode,Scaleform::Render::MeshCacheItemUseNode,Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode> > &, Scaleform::Render::MeshCacheItemUseNode *);
	void PushListItemsToFront(Scaleform::Render::MeshCacheItemUseNode *, Scaleform::Render::MeshCacheItemUseNode *);
private:
	const Scaleform::List<Scaleform::Render::MeshCacheItemUseNode,Scaleform::Render::MeshCacheItemUseNode,Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode> > & operator=(const Scaleform::List<Scaleform::Render::MeshCacheItemUseNode,Scaleform::Render::MeshCacheItemUseNode,Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode> > &);
	Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode> Root; // 0x0
};
class Scaleform::Render::MeshCacheListSet
{
	struct ListSlot;
private:
	Scaleform::Render::MeshCache * pCache; // 0x0
	Scaleform::Render::MeshCacheListSet::ListSlot Slots[6]; // 0x8
public:
	MeshCacheListSet(Scaleform::Render::MeshCache *);
	~MeshCacheListSet();
	void PushFront(Scaleform::Render::MeshCacheListType, Scaleform::Render::MeshCacheItem *);
	void RemoveNode(Scaleform::Render::MeshCacheItem *);
	void PushListToFront(Scaleform::Render::MeshCacheListType, Scaleform::Render::MeshCacheListType);
	Scaleform::Render::MeshCache * GetCache();
	Scaleform::Render::MeshCacheListSet::ListSlot & GetSlot(Scaleform::Render::MeshCacheListType);
	Scaleform::Render::MeshCacheListSet::ListSlot * GetSlots();
	unsigned long long GetSlotSize(Scaleform::Render::MeshCacheListType);
	bool EvictLRU(Scaleform::Render::MeshCacheListType, Scaleform::AllocAddr &, unsigned long long);
	bool EvictLRU(Scaleform::Render::MeshCacheListSet::ListSlot &, Scaleform::AllocAddr &, unsigned long long);
	bool EvictLRUTillLimit(Scaleform::Render::MeshCacheListType, Scaleform::AllocAddr &, unsigned long long, unsigned long long);
	bool EvictLRUTillLimit(Scaleform::Render::MeshCacheListSet::ListSlot &, Scaleform::AllocAddr &, unsigned long long, unsigned long long);
	bool EvictPendingFree(Scaleform::AllocAddr &, bool);
	void EvictAll();
	void EndFrame();
};
struct Scaleform::Render::MeshCacheListSet::ListSlot :
	Scaleform::List<Scaleform::Render::MeshCacheItem,Scaleform::Render::MeshCacheItem,Scaleform::ListNode<Scaleform::Render::MeshCacheItem> >
{
	unsigned long long Size; // 0x10
	ListSlot();
};
class Scaleform::List<Scaleform::Render::MeshCacheItem,Scaleform::Render::MeshCacheItem,Scaleform::ListNode<Scaleform::Render::MeshCacheItem> >
{
	class ValueType;
private:
	List<Scaleform::Render::MeshCacheItem,Scaleform::Render::MeshCacheItem,Scaleform::ListNode<Scaleform::Render::MeshCacheItem> >(const Scaleform::List<Scaleform::Render::MeshCacheItem,Scaleform::Render::MeshCacheItem,Scaleform::ListNode<Scaleform::Render::MeshCacheItem> > &);
public:
	List<Scaleform::Render::MeshCacheItem,Scaleform::Render::MeshCacheItem,Scaleform::ListNode<Scaleform::Render::MeshCacheItem> >();
	void Clear();
	Scaleform::Render::MeshCacheItem * GetFirst();
	Scaleform::Render::MeshCacheItem * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::MeshCacheItem *);
	bool IsLast(const Scaleform::Render::MeshCacheItem *);
	bool IsNull(const Scaleform::Render::MeshCacheItem *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::MeshCacheItem * GetPrev(const Scaleform::Render::MeshCacheItem *);
	static Scaleform::Render::MeshCacheItem * GetNext(const Scaleform::Render::MeshCacheItem *);
	void PushFront(Scaleform::Render::MeshCacheItem *);
	void PushBack(Scaleform::Render::MeshCacheItem *);
	static void Remove(Scaleform::Render::MeshCacheItem *);
	void BringToFront(Scaleform::Render::MeshCacheItem *);
	void SendToBack(Scaleform::Render::MeshCacheItem *);
	void PushListToFront(Scaleform::List<Scaleform::Render::MeshCacheItem,Scaleform::Render::MeshCacheItem,Scaleform::ListNode<Scaleform::Render::MeshCacheItem> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::MeshCacheItem,Scaleform::Render::MeshCacheItem,Scaleform::ListNode<Scaleform::Render::MeshCacheItem> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::MeshCacheItem,Scaleform::Render::MeshCacheItem,Scaleform::ListNode<Scaleform::Render::MeshCacheItem> > &, Scaleform::Render::MeshCacheItem *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::MeshCacheItem,Scaleform::Render::MeshCacheItem,Scaleform::ListNode<Scaleform::Render::MeshCacheItem> > &, Scaleform::Render::MeshCacheItem *);
	void PushListItemsToFront(Scaleform::Render::MeshCacheItem *, Scaleform::Render::MeshCacheItem *);
private:
	const Scaleform::List<Scaleform::Render::MeshCacheItem,Scaleform::Render::MeshCacheItem,Scaleform::ListNode<Scaleform::Render::MeshCacheItem> > & operator=(const Scaleform::List<Scaleform::Render::MeshCacheItem,Scaleform::Render::MeshCacheItem,Scaleform::ListNode<Scaleform::Render::MeshCacheItem> > &);
	Scaleform::ListNode<Scaleform::Render::MeshCacheItem> Root; // 0x0
};
class Scaleform::Render::MeshStagingBuffer
{
private:
	unsigned char * pBuffer; // 0x0
	unsigned long long BufferSize; // 0x8
	unsigned long long TotalPinnedSize; // 0x10
	unsigned long long PinSizeLimit; // 0x18
	Scaleform::List<Scaleform::Render::MeshStagingNode,Scaleform::Render::MeshStagingNode,Scaleform::ListNode<Scaleform::Render::MeshStagingNode> > MeshList; // 0x20
	bool AllocateBufferSpace(unsigned long long *, unsigned long long);
public:
	MeshStagingBuffer();
	~MeshStagingBuffer();
	bool Initialize(Scaleform::MemoryHeap *, unsigned long long);
	void Reset();
	unsigned char * GetBuffer();
	unsigned long long GetBufferSize();
	bool IsCached(Scaleform::Render::MeshBase *);
	void PinMesh(Scaleform::Render::MeshBase *);
	void UnpinMesh(Scaleform::Render::MeshBase *);
	bool AllocateMesh(Scaleform::Render::Mesh *, unsigned long long, unsigned long long, unsigned long long);
};
class Scaleform::List<Scaleform::Render::MeshStagingNode,Scaleform::Render::MeshStagingNode,Scaleform::ListNode<Scaleform::Render::MeshStagingNode> >
{
	struct ValueType;
private:
	List<Scaleform::Render::MeshStagingNode,Scaleform::Render::MeshStagingNode,Scaleform::ListNode<Scaleform::Render::MeshStagingNode> >(const Scaleform::List<Scaleform::Render::MeshStagingNode,Scaleform::Render::MeshStagingNode,Scaleform::ListNode<Scaleform::Render::MeshStagingNode> > &);
public:
	List<Scaleform::Render::MeshStagingNode,Scaleform::Render::MeshStagingNode,Scaleform::ListNode<Scaleform::Render::MeshStagingNode> >();
	void Clear();
	Scaleform::Render::MeshStagingNode * GetFirst();
	Scaleform::Render::MeshStagingNode * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::MeshStagingNode *);
	bool IsLast(const Scaleform::Render::MeshStagingNode *);
	bool IsNull(const Scaleform::Render::MeshStagingNode *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::MeshStagingNode * GetPrev(const Scaleform::Render::MeshStagingNode *);
	static Scaleform::Render::MeshStagingNode * GetNext(const Scaleform::Render::MeshStagingNode *);
	void PushFront(Scaleform::Render::MeshStagingNode *);
	void PushBack(Scaleform::Render::MeshStagingNode *);
	static void Remove(Scaleform::Render::MeshStagingNode *);
	void BringToFront(Scaleform::Render::MeshStagingNode *);
	void SendToBack(Scaleform::Render::MeshStagingNode *);
	void PushListToFront(Scaleform::List<Scaleform::Render::MeshStagingNode,Scaleform::Render::MeshStagingNode,Scaleform::ListNode<Scaleform::Render::MeshStagingNode> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::MeshStagingNode,Scaleform::Render::MeshStagingNode,Scaleform::ListNode<Scaleform::Render::MeshStagingNode> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::MeshStagingNode,Scaleform::Render::MeshStagingNode,Scaleform::ListNode<Scaleform::Render::MeshStagingNode> > &, Scaleform::Render::MeshStagingNode *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::MeshStagingNode,Scaleform::Render::MeshStagingNode,Scaleform::ListNode<Scaleform::Render::MeshStagingNode> > &, Scaleform::Render::MeshStagingNode *);
	void PushListItemsToFront(Scaleform::Render::MeshStagingNode *, Scaleform::Render::MeshStagingNode *);
private:
	const Scaleform::List<Scaleform::Render::MeshStagingNode,Scaleform::Render::MeshStagingNode,Scaleform::ListNode<Scaleform::Render::MeshStagingNode> > & operator=(const Scaleform::List<Scaleform::Render::MeshStagingNode,Scaleform::Render::MeshStagingNode,Scaleform::ListNode<Scaleform::Render::MeshStagingNode> > &);
	Scaleform::ListNode<Scaleform::Render::MeshStagingNode> Root; // 0x0
};
struct Scaleform::ListNode<Scaleform::Render::MeshBuffer>
{
	Scaleform::Render::MeshBuffer * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::MeshBuffer * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::MeshBuffer>();
	Scaleform::Render::MeshBuffer * GetPrev();
	Scaleform::Render::MeshBuffer * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::MeshBuffer *);
	void InsertNodeAfter(Scaleform::Render::MeshBuffer *);
	void InsertNodeBefore(Scaleform::Render::MeshBuffer *);
};
class Scaleform::Render::MeshBuffer :
	Scaleform::ListNode<Scaleform::Render::MeshBuffer>,
	Scaleform::NewOverrideBase<2>
{
	enum AllocType
	{
		AT_None = 0,
		AT_Reserve = 1,
		AT_Chunk = 2,
		AT_Direct = 3,
	};
public:
	MeshBuffer(const Scaleform::Render::MeshBuffer &);
	MeshBuffer(unsigned long long, Scaleform::Render::MeshBuffer::AllocType, unsigned long);
	~MeshBuffer();
	Scaleform::Render::MeshBuffer::AllocType GetType();
	unsigned long long GetSize();
	unsigned long GetArena();
	unsigned long Arena; // 0x18
	Scaleform::Render::MeshBuffer::AllocType Type; // 0x1C
	unsigned long long Size; // 0x20
	void * pData; // 0x28
	struct MeshBufferUpdateEntry;
	struct NeverShrinkPolicy;
	Scaleform::ArrayLH<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,68,Scaleform::ArrayConstPolicy<0,8,1> > MeshBufferUpdates; // 0x30
	Scaleform::Render::MeshBuffer & operator=(const Scaleform::Render::MeshBuffer &);
};
struct Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry
{
	MeshBufferUpdateEntry(unsigned long long, unsigned long long, void *);
	MeshBufferUpdateEntry();
	long operator int();
	unsigned long long Offset; // 0x0
	unsigned long long Size; // 0x8
	void * Data; // 0x10
};
struct Scaleform::ArrayConstPolicy<0,8,1>
{
	struct SelfType;
	ArrayConstPolicy<0,8,1>(const Scaleform::ArrayConstPolicy<0,8,1> &);
	ArrayConstPolicy<0,8,1>();
	unsigned long long GetMinCapacity();
	unsigned long long GetGranularity();
	bool NeverShrinking();
	unsigned long long GetCapacity();
	void SetCapacity(unsigned long long);
private:
	unsigned long long Capacity; // 0x0
};
class Scaleform::ArrayLH<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,68,Scaleform::ArrayConstPolicy<0,8,1> > :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,Scaleform::AllocatorLH<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,68>,Scaleform::ArrayConstPolicy<0,8,1> > >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,68,Scaleform::ArrayConstPolicy<0,8,1> >(const Scaleform::ArrayLH<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,68,Scaleform::ArrayConstPolicy<0,8,1> > &);
	ArrayLH<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,68,Scaleform::ArrayConstPolicy<0,8,1> >(const Scaleform::ArrayConstPolicy<0,8,1> &);
	ArrayLH<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,68,Scaleform::ArrayConstPolicy<0,8,1> >(long);
	ArrayLH<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,68,Scaleform::ArrayConstPolicy<0,8,1> >();
	const Scaleform::ArrayLH<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,68,Scaleform::ArrayConstPolicy<0,8,1> > & operator=(const Scaleform::ArrayLH<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,68,Scaleform::ArrayConstPolicy<0,8,1> > &);
	~ArrayLH<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,68,Scaleform::ArrayConstPolicy<0,8,1> >();
};
class Scaleform::Render::MeshCache :
	Scaleform::Render::CacheBase,
	Scaleform::Render::MeshCacheConfig
{
	class CacheItemHashType;
	enum QueueMode
	{
		QM_WaitForFences = 0,
		QM_ExtendLocks = 1,
	};
	enum MeshCacheCapsType
	{
		Cap_ConvertGPUBuffers = 1,
	};
	class StagingBufferPrep;
public:
	MeshCache(Scaleform::MemoryHeap *, const Scaleform::Render::MeshCacheParams &);
	virtual ~MeshCache();
	void SetRQCacheInterface(Scaleform::Render::RQCacheInterface *);
	Scaleform::Render::MeshCache::QueueMode GetQueueMode();
	void BeginFrame();
	void EndFrame();
	virtual const Scaleform::Render::MeshCacheParams & GetParams();
	bool LockBuffers();
	virtual void UnlockBuffers();
	bool AreBuffersLocked();
	Scaleform::Render::MeshUseStatus GetItemUseStatus(const Scaleform::Render::MeshCacheItem *);
	void MoveToCacheListFront(Scaleform::Render::MeshCacheListType, Scaleform::Render::MeshCacheItem *);
	bool GetHashPrimitive(Scaleform::Render::PrimitiveBatch *, Scaleform::Render::MeshCacheItem::MeshContent &);
	unsigned long long Evict(Scaleform::Render::MeshCacheItem *, Scaleform::AllocAddr *, Scaleform::Render::MeshBase *);
	bool PreparePrimitive(Scaleform::Render::HAL *, Scaleform::Render::PrimitiveBatch *, Scaleform::Render::MeshCacheItem::MeshContent &, bool);
	bool SetLargeMeshVertices(Scaleform::Render::MeshCacheItem *, const Scaleform::Render::VertexFormat *, unsigned long long, unsigned char *, unsigned long, const Scaleform::Render::VertexFormat *, unsigned char *);
	bool SetLargeMeshIndices(Scaleform::Render::MeshCacheItem *, const Scaleform::Render::VertexFormat *, unsigned long long, const unsigned short *, unsigned long, const Scaleform::Render::VertexFormat *, unsigned char *);
	struct MeshResult;
	Scaleform::Render::MeshCache::MeshResult GenerateMesh(Scaleform::Render::HAL *, Scaleform::Render::Mesh *, const Scaleform::Render::VertexFormat *, const Scaleform::Render::VertexFormat *, const Scaleform::Render::VertexFormat *, bool);
	bool PrepareComplexMesh(Scaleform::Render::HAL *, Scaleform::Render::ComplexMesh *, bool);
	enum AllocResult
	{
		Alloc_Fail = 0,
		Alloc_Fail_TooBig = 1,
		Alloc_Fail_ThisFrame = 2,
		Alloc_Success = 3,
		Alloc_StateError = 4,
	};
	Scaleform::Render::MeshCache::AllocResult AllocCacheItem(Scaleform::Render::MeshCacheItem * *, Scaleform::Render::MeshCacheItem::MeshType, Scaleform::Render::MeshCacheItem::MeshBaseContent &, unsigned long long, unsigned long, unsigned long, bool, const Scaleform::Render::VertexFormat *);
	void LockMeshCacheItem(Scaleform::Render::MeshCacheItem *, unsigned char * *, unsigned short * *);
	void PostUpdateMesh(Scaleform::Render::MeshCacheItem *);
	enum StatType
	{
		MeshBuffer_Common = 0,
		MeshBuffer_Vertex = 1,
		MeshBuffer_Index = 2,
		MeshBuffer_GpuMem = 4,
		MeshBuffer_StatCount = 7,
	};
	struct Stats;
	void GetStats(Scaleform::Render::MeshCache::Stats *);
	unsigned long GetThrashing();
	void ClearThrashing();
protected:
	void copyAndConvertGPUBuffers(Scaleform::Render::Mesh *, unsigned long, Scaleform::Render::PrimitiveBatch *, unsigned long long, unsigned long long, unsigned long);
	Scaleform::MemoryHeap * pHeap; // 0x10
	Scaleform::Render::RQCacheInterface * pRQCaches; // 0x18
	Scaleform::Render::MeshCacheParams Params; // 0x20
	Scaleform::Render::MeshStagingBuffer StagingBuffer; // 0x68
	Scaleform::HashSetLH<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> > BatchCacheItemHash; // 0x98
	unsigned long Thrashing; // 0xA0
	unsigned long MeshCacheCaps; // 0xA4
	unsigned short VBAlignment; // 0xA8
	unsigned short IBAlignment; // 0xAA
	unsigned short BufferAlignment; // 0xAC
};
class Scaleform::HashSetLH<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> > :
	Scaleform::HashSet<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> >
{
	class SelfType;
	class BaseType;
	typedef Scaleform::Render::MeshCacheItem ValueType;
public:
	HashSetLH<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> >(const Scaleform::HashSetLH<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> > &);
	HashSetLH<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> >(long);
	HashSetLH<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> >();
	~HashSetLH<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> >();
	void operator=(const Scaleform::HashSetLH<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> > &);
};
class Scaleform::Render::MeshCache::StagingBufferPrep
{
private:
	Scaleform::Render::MeshCache * pCache; // 0x0
	Scaleform::Render::MeshCacheItem::MeshContent & MC; // 0x8
	bool CanCopyData; // 0x10
	bool PinMeshes; // 0x11
	const Scaleform::Render::VertexFormat * pVertexFormat; // 0x18
	bool PinnedFlagArray[256]; // 0x20
public:
	StagingBufferPrep(Scaleform::Render::HAL *, Scaleform::Render::MeshCache *, Scaleform::Render::MeshCacheItem::MeshContent &, const Scaleform::Render::VertexFormat *, bool);
private:
	StagingBufferPrep(const Scaleform::Render::MeshCache::StagingBufferPrep &);
	void operator=(Scaleform::Render::MeshCache::StagingBufferPrep &);
public:
	void GenerateMeshes(Scaleform::Render::HAL *, Scaleform::Render::MeshCacheItem *);
	~StagingBufferPrep();
};
Scaleform::Render::MeshCache::QueueMode Scaleform::Render::MeshCache::GetQueueMode(); // 0x1400470F0
const Scaleform::Render::MeshCacheParams & Scaleform::Render::MeshCache::GetParams(); // 0x14041BC80
bool Scaleform::Render::MeshCache::AreBuffersLocked(); // 0x14004BBE0
void Scaleform::Render::MeshCache::BeginFrame(); // 0x14002E7C0
void Scaleform::Render::MeshCache::MoveToCacheListFront(Scaleform::Render::MeshCacheListType list, Scaleform::Render::MeshCacheItem * p); // 0x14041BD30
struct Scaleform::Render::MeshCache::MeshResult
{
	enum ResultType
	{
		Success_Staging = 0,
		Success_LargeMesh = 1,
		Fail_Staging_NoBuffer = 2,
		Fail_LargeMesh_NeedCache = 3,
		Fail_LargeMesh_TooBig = 5,
		Fail_LargeMesh_ThisFrame = 7,
		Fail_General = 6,
	};
	MeshResult(const Scaleform::Render::MeshCache::MeshResult &);
	MeshResult(Scaleform::Render::MeshCache::MeshResult::ResultType);
	bool operator==(Scaleform::Render::MeshCache::MeshResult::ResultType);
	bool operator==(const Scaleform::Render::MeshCache::MeshResult &);
	bool operator!=(Scaleform::Render::MeshCache::MeshResult::ResultType);
	bool operator!=(const Scaleform::Render::MeshCache::MeshResult &);
	bool IsLargeMesh();
	bool Succeded();
	Scaleform::Render::MeshCache::MeshResult::ResultType Value; // 0x0
};
struct Scaleform::Render::MeshCache::Stats
{
	unsigned long long TotalSize[7]; // 0x0
	unsigned long long UsedSize[7]; // 0x38
	Stats();
	unsigned long long GetTotal(long);
	unsigned long long GetUsed(long);
};
unsigned long Scaleform::Render::MeshCache::GetThrashing(); // 0x1403B9FC0
void Scaleform::Render::MeshCache::ClearThrashing(); // 0x14041B490