#pragma once

class Scaleform::Render::GL::MeshCacheItem :
	Scaleform::Render::MeshCacheItem
{
public:
	static Scaleform::Render::GL::MeshCacheItem * Create(Scaleform::Render::MeshCacheItem::MeshType, Scaleform::Render::MeshCacheListSet *, Scaleform::Render::MeshCacheItem::MeshBaseContent &, Scaleform::Render::GL::MeshBuffer *, Scaleform::Render::GL::MeshBuffer *, unsigned long long, unsigned long long, unsigned long, unsigned long long, unsigned long long, unsigned long);
protected:
	MeshCacheItem(Scaleform::Render::MeshCacheItem::MeshType, Scaleform::Render::MeshCacheListSet *, Scaleform::Render::MeshCacheItem::MeshBaseContent &, Scaleform::Render::GL::MeshBuffer *, Scaleform::Render::GL::MeshBuffer *, unsigned long long, unsigned long long, unsigned long, unsigned long long, unsigned long long, unsigned long);
	virtual ~MeshCacheItem();
	Scaleform::Render::GL::MeshBuffer * pVertexBuffer; // 0x68
	Scaleform::Render::GL::MeshBuffer * pIndexBuffer; // 0x70
	unsigned long long VBAllocOffset; // 0x78
	unsigned long long VBAllocSize; // 0x80
	unsigned long long IBAllocOffset; // 0x88
	unsigned long long IBAllocSize; // 0x90
	Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> VAO; // 0x98
	const Scaleform::Render::VertexFormat * VAOFormat; // 0xA0
	unsigned char * VAOOffset; // 0xA8
};
enum Scaleform::Render::GL::<unnamed-enum-MeshCache_MaxBufferCount>
{
	MeshCache_MaxBufferCount = 256,
	MeshCache_AddressToIndexShift = 24,
	MeshCache_AllocatorUnitShift = 4,
	MeshCache_AllocatorUnit = 16,
};
class Scaleform::Render::GL::MeshBuffer :
	Scaleform::Render::MeshBuffer
{
protected:
	Scaleform::Render::GL::HAL * pHal; // 0x48
	Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> Buffer; // 0x50
	unsigned char * BufferData; // 0x58
	unsigned long Type; // 0x60
	unsigned long long Index; // 0x68
	Scaleform::Render::GL::MeshBuffer * pNextLock; // 0x70
public:
	MeshBuffer(const Scaleform::Render::GL::MeshBuffer &);
	MeshBuffer(Scaleform::Render::GL::HAL *, unsigned long, unsigned long long, Scaleform::Render::MeshBuffer::AllocType, unsigned long);
	virtual ~MeshBuffer();
	unsigned long long GetIndex();
	Scaleform::Render::GL::HAL * GetHAL();
	bool allocBuffer();
	bool DoMap(unsigned long long, unsigned long long);
	void Unmap();
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> GetBuffer();
	unsigned char * GetBufferBase();
	unsigned long GetBufferType();
	struct MapList;
	unsigned char * Map(Scaleform::Render::GL::MeshBuffer::MapList &, unsigned long long, unsigned long long);
	Scaleform::Render::GL::MeshBuffer & operator=(const Scaleform::Render::GL::MeshBuffer &);
};
Scaleform::Render::GL::MeshBuffer::MeshBuffer(Scaleform::Render::GL::HAL * phal, unsigned long btype, unsigned long long size, Scaleform::Render::MeshBuffer::AllocType type, unsigned long arena); // 0x1405EBFF0
struct Scaleform::Render::GL::MeshBuffer::MapList
{
	Scaleform::Render::GL::MeshBuffer * pFirst; // 0x0
	MapList();
	void Add(Scaleform::Render::GL::MeshBuffer *);
	void UnmapAll();
};
void Scaleform::Render::GL::MeshBuffer::MapList::UnmapAll(); // 0x1405EDBC0
class Scaleform::Render::GL::MeshBufferSet
{
	enum AllocType
	{
		AT_None = 0,
		AT_Reserve = 1,
		AT_Chunk = 2,
		AT_Direct = 3,
	};
public:
	unsigned long BufferType; // 0x0
	Scaleform::ArrayLH<Scaleform::Render::GL::MeshBuffer *,2,Scaleform::ArrayDefaultPolicy> Buffers; // 0x8
	Scaleform::AllocAddr Allocator; // 0x20
	unsigned long long Granularity; // 0x38
	unsigned long long TotalSize; // 0x40
	MeshBufferSet(Scaleform::Render::GL::MeshBufferSet &);
	MeshBufferSet(const Scaleform::Render::GL::MeshBufferSet &);
	MeshBufferSet(unsigned long, Scaleform::MemoryHeap *, unsigned long long);
	void SetGranularity(unsigned long long);
	Scaleform::AllocAddr & GetAllocator();
	unsigned long long GetGranularity();
	unsigned long long GetTotalSize();
	Scaleform::Render::GL::MeshBuffer * CreateBuffer(unsigned long long, Scaleform::Render::MeshBuffer::AllocType, unsigned long, Scaleform::MemoryHeap *, Scaleform::Render::GL::HAL *);
	void DestroyBuffers(Scaleform::Render::MeshBuffer::AllocType, bool);
	static unsigned long long SizeToAllocatorUnit(unsigned long long);
	bool CheckAllocationSize(unsigned long long, const char *);
	void DestroyBuffer(Scaleform::Render::GL::MeshBuffer *, bool, bool);
	bool Alloc(unsigned long long, Scaleform::Render::GL::MeshBuffer * *, unsigned long long *);
	unsigned long long Free(unsigned long long, Scaleform::Render::GL::MeshBuffer *, unsigned long long);
	~MeshBufferSet();
	Scaleform::Render::GL::MeshBufferSet & operator=(Scaleform::Render::GL::MeshBufferSet &);
	Scaleform::Render::GL::MeshBufferSet & operator=(const Scaleform::Render::GL::MeshBufferSet &);
};
class Scaleform::ArrayLH<Scaleform::Render::GL::MeshBuffer *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::GL::MeshBuffer *,Scaleform::AllocatorLH<Scaleform::Render::GL::MeshBuffer *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::Render::GL::MeshBuffer ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::GL::MeshBuffer *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::GL::MeshBuffer *,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::GL::MeshBuffer *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::GL::MeshBuffer *,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::GL::MeshBuffer *,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::GL::MeshBuffer *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::GL::MeshBuffer *,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::GL::MeshBuffer *,2,Scaleform::ArrayDefaultPolicy>();
};
Scaleform::Render::GL::MeshBuffer * Scaleform::Render::GL::MeshBufferSet::CreateBuffer(unsigned long long size, Scaleform::Render::MeshBuffer::AllocType type, unsigned long arena, Scaleform::MemoryHeap * pheap, Scaleform::Render::GL::HAL * phal); // 0x1405ECC80
void Scaleform::Render::GL::MeshBufferSet::DestroyBuffers(Scaleform::Render::MeshBuffer::AllocType type, bool lost); // 0x1405ECDE0
bool Scaleform::Render::GL::MeshBufferSet::Alloc(unsigned long long size, Scaleform::Render::GL::MeshBuffer * * pbuffer, unsigned long long * poffset); // 0x1405EC6E0
class Scaleform::Render::GL::MeshCache :
	Scaleform::Render::MeshCache
{
	enum BufferUpdateType
	{
		BufferUpdate_MapBufferUnsynchronized = 0,
		BufferUpdate_ClientBuffers = 1,
		BufferUpdate_MapBuffer = 2,
		BufferUpdate_UpdateBuffer = 3,
		BufferUpdate_Count = 4,
	};
	enum <unnamed-enum-MinSupportedGranularity>
	{
		MinSupportedGranularity = 16384,
	};
protected:
	Scaleform::Render::GL::HAL * pHal; // 0xB0
	Scaleform::Render::MeshCacheListSet CacheList; // 0xB8
	Scaleform::Render::GL::MeshBufferSet VertexBuffers; // 0x150
	Scaleform::Render::GL::MeshBufferSet IndexBuffers; // 0x198
	bool UseSeparateIndexBuffers; // 0x1E0
	Scaleform::Render::GL::MeshCache::BufferUpdateType BufferUpdate; // 0x1E4
	bool Mapped; // 0x1E8
	unsigned long long VBSizeEvictedInMap; // 0x1F0
	Scaleform::Render::GL::MeshBuffer::MapList MappedBuffers; // 0x1F8
	Scaleform::List<Scaleform::Render::MeshBuffer,Scaleform::Render::MeshBuffer,Scaleform::ListNode<Scaleform::Render::MeshBuffer> > ChunkBuffers; // 0x200
	Scaleform::List<Scaleform::Render::MeshBuffer,Scaleform::Render::MeshBuffer,Scaleform::ListNode<Scaleform::Render::MeshBuffer> > PendingDestructionBuffers; // 0x210
	Scaleform::Render::GL::HALGLBuffer MaskEraseBatchVertexBuffer; // 0x220
	Scaleform::Render::GL::HALGLVertexArray MaskEraseBatchVAO; // 0x248
	Scaleform::Render::GL::MeshCache * getThis();
	Scaleform::Render::GL::HAL * GetHAL();
	unsigned long long getTotalSize();
	bool createStaticVertexBuffers();
	bool createInstancingVertexBuffer();
	bool createMaskEraseBatchVertexBuffer();
	bool allocCacheBuffers(unsigned long long, Scaleform::Render::MeshBuffer::AllocType, unsigned long);
	bool evictMeshesInBuffer(Scaleform::Render::MeshCacheListSet::ListSlot *, unsigned long long, Scaleform::Render::GL::MeshBuffer *);
	bool allocBuffer(unsigned long long *, Scaleform::Render::GL::MeshBuffer * *, Scaleform::Render::GL::MeshBufferSet &, unsigned long long, bool);
	void destroyBuffers(Scaleform::Render::MeshBuffer::AllocType, bool);
	void adjustMeshCacheParams(Scaleform::Render::MeshCacheParams *);
	void destroyPendingBuffers(bool);
public:
	MeshCache(Scaleform::MemoryHeap *, const Scaleform::Render::MeshCacheParams &);
	virtual ~MeshCache();
	bool Initialize(Scaleform::Render::GL::HAL *);
	void Reset(bool);
	virtual Scaleform::Render::MeshCache::QueueMode GetQueueMode();
	virtual void ClearCache();
	virtual bool SetParams(const Scaleform::Render::MeshCacheParams &);
	virtual void EndFrame();
	virtual bool LockBuffers();
	virtual void UnlockBuffers();
	bool AreBuffersMapped();
	virtual unsigned long long Evict(Scaleform::Render::MeshCacheItem *, Scaleform::AllocAddr *, Scaleform::Render::MeshBase *);
	virtual Scaleform::Render::MeshCache::AllocResult AllocCacheItem(Scaleform::Render::MeshCacheItem * *, Scaleform::Render::MeshCacheItem::MeshType, Scaleform::Render::MeshCacheItem::MeshBaseContent &, unsigned long long, unsigned long, unsigned long, bool, const Scaleform::Render::VertexFormat *);
	virtual void LockMeshCacheItem(Scaleform::Render::MeshCacheItem *, unsigned char * *, unsigned short * *);
	virtual void GetStats(Scaleform::Render::MeshCache::Stats *);
	Scaleform::Render::GL::MeshCache::BufferUpdateType GetBufferUpdateType();
};
class Scaleform::List<Scaleform::Render::MeshBuffer,Scaleform::Render::MeshBuffer,Scaleform::ListNode<Scaleform::Render::MeshBuffer> >
{
	class ValueType;
private:
	List<Scaleform::Render::MeshBuffer,Scaleform::Render::MeshBuffer,Scaleform::ListNode<Scaleform::Render::MeshBuffer> >(const Scaleform::List<Scaleform::Render::MeshBuffer,Scaleform::Render::MeshBuffer,Scaleform::ListNode<Scaleform::Render::MeshBuffer> > &);
public:
	List<Scaleform::Render::MeshBuffer,Scaleform::Render::MeshBuffer,Scaleform::ListNode<Scaleform::Render::MeshBuffer> >();
	void Clear();
	Scaleform::Render::MeshBuffer * GetFirst();
	Scaleform::Render::MeshBuffer * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::MeshBuffer *);
	bool IsLast(const Scaleform::Render::MeshBuffer *);
	bool IsNull(const Scaleform::Render::MeshBuffer *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::MeshBuffer * GetPrev(const Scaleform::Render::MeshBuffer *);
	static Scaleform::Render::MeshBuffer * GetNext(const Scaleform::Render::MeshBuffer *);
	void PushFront(Scaleform::Render::MeshBuffer *);
	void PushBack(Scaleform::Render::MeshBuffer *);
	static void Remove(Scaleform::Render::MeshBuffer *);
	void BringToFront(Scaleform::Render::MeshBuffer *);
	void SendToBack(Scaleform::Render::MeshBuffer *);
	void PushListToFront(Scaleform::List<Scaleform::Render::MeshBuffer,Scaleform::Render::MeshBuffer,Scaleform::ListNode<Scaleform::Render::MeshBuffer> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::MeshBuffer,Scaleform::Render::MeshBuffer,Scaleform::ListNode<Scaleform::Render::MeshBuffer> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::MeshBuffer,Scaleform::Render::MeshBuffer,Scaleform::ListNode<Scaleform::Render::MeshBuffer> > &, Scaleform::Render::MeshBuffer *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::MeshBuffer,Scaleform::Render::MeshBuffer,Scaleform::ListNode<Scaleform::Render::MeshBuffer> > &, Scaleform::Render::MeshBuffer *);
	void PushListItemsToFront(Scaleform::Render::MeshBuffer *, Scaleform::Render::MeshBuffer *);
private:
	const Scaleform::List<Scaleform::Render::MeshBuffer,Scaleform::Render::MeshBuffer,Scaleform::ListNode<Scaleform::Render::MeshBuffer> > & operator=(const Scaleform::List<Scaleform::Render::MeshBuffer,Scaleform::Render::MeshBuffer,Scaleform::ListNode<Scaleform::Render::MeshBuffer> > &);
	Scaleform::ListNode<Scaleform::Render::MeshBuffer> Root; // 0x0
};
Scaleform::Render::MeshCache::QueueMode Scaleform::Render::GL::MeshCache::GetQueueMode(); // 0x1400482A0
bool Scaleform::Render::GL::MeshCache::AreBuffersMapped(); // 0x1405ECA40
Scaleform::Render::GL::MeshCache::BufferUpdateType Scaleform::Render::GL::MeshCache::GetBufferUpdateType(); // 0x1405ED440