#pragma once

class Scaleform::Render::SimpleMeshBuffer :
	Scaleform::Render::MeshBuffer
{
	enum <unnamed-enum-MinGranularity>
	{
		MinGranularity = 16384,
		AllocSizeDelta = 8,
	};
public:
	SimpleMeshBuffer(Scaleform::Render::SimpleMeshBuffer &);
	SimpleMeshBuffer(const Scaleform::Render::SimpleMeshBuffer &);
	SimpleMeshBuffer(unsigned long long, Scaleform::Render::MeshBuffer::AllocType, unsigned long);
	unsigned long long GetFullSize();
	static unsigned long long GetUsableSize(unsigned long long);
	virtual ~SimpleMeshBuffer();
	Scaleform::Render::SimpleMeshBuffer & operator=(Scaleform::Render::SimpleMeshBuffer &);
	Scaleform::Render::SimpleMeshBuffer & operator=(const Scaleform::Render::SimpleMeshBuffer &);
};
class Scaleform::Render::SimpleMeshCacheItem :
	Scaleform::Render::MeshCacheItem
{
public:
	static Scaleform::Render::SimpleMeshCacheItem * Create(Scaleform::Render::MeshCacheItem::MeshType, Scaleform::Render::MeshCacheListSet *, unsigned long long, Scaleform::Render::MeshCacheItem::MeshBaseContent &, Scaleform::Render::SimpleMeshBuffer *, unsigned long long, unsigned long long, unsigned long long, unsigned long, unsigned long long, unsigned long, const Scaleform::Render::VertexFormat *);
	SimpleMeshCacheItem(Scaleform::Render::MeshCacheItem::MeshType, Scaleform::Render::MeshCacheListSet *, unsigned long long, Scaleform::Render::MeshCacheItem::MeshBaseContent &, Scaleform::Render::SimpleMeshBuffer *, unsigned long long, unsigned long long, unsigned long long, unsigned long, unsigned long long, unsigned long, const Scaleform::Render::VertexFormat *);
	Scaleform::Render::SimpleMeshBuffer * GetBuffer();
	unsigned long long GetAllocAddr();
	unsigned long long GetVertexOffset();
	unsigned long long GetIndexOffset();
	const Scaleform::Render::VertexFormat * GetVertexFormat();
protected:
	Scaleform::Render::SimpleMeshBuffer * pBuffer; // 0x68
	unsigned long long AllocAddress; // 0x70
	unsigned long long VertexOffset; // 0x78
	unsigned long long IndexOffset; // 0x80
	const Scaleform::Render::VertexFormat * pFormat; // 0x88
public:
	virtual ~SimpleMeshCacheItem();
};
class Scaleform::Render::SimpleMeshCache :
	Scaleform::Render::MeshCache
{
	enum AllocType
	{
		AT_None = 0,
		AT_Reserve = 1,
		AT_Chunk = 2,
		AT_Direct = 3,
	};
	enum <unnamed-enum-Cache_NeverShrink>
	{
		Cache_NeverShrink = 1,
	};
protected:
	Scaleform::Render::MeshCacheListSet CacheList; // 0xB0
	Scaleform::AllocAddr Allocator; // 0x148
	unsigned long long TotalSize; // 0x160
	Scaleform::List<Scaleform::Render::MeshBuffer,Scaleform::Render::MeshBuffer,Scaleform::ListNode<Scaleform::Render::MeshBuffer> > Buffers; // 0x168
	Scaleform::Render::RenderSync * pRenderSync; // 0x178
	unsigned long CacheFlags; // 0x180
	Scaleform::Render::MeshCache * getThis();
	Scaleform::Render::SimpleMeshBuffer * allocMeshBuffer(unsigned long long, Scaleform::Render::MeshBuffer::AllocType, unsigned long);
	bool releaseMeshBuffer(Scaleform::Render::SimpleMeshBuffer *);
	bool allocateReserve();
	void releaseAllBuffers();
	bool evictMeshesInBuffer(Scaleform::Render::MeshCacheListSet::ListSlot *, unsigned long long, Scaleform::Render::SimpleMeshBuffer *);
	bool allocBuffer(unsigned long long *, unsigned long long, bool);
	Scaleform::Render::SimpleMeshBuffer * findBuffer(unsigned long long);
	Scaleform::Render::SimpleMeshBuffer * createHWBuffer(unsigned long long, Scaleform::Render::MeshBuffer::AllocType, unsigned long);
	void destroyHWBuffer(Scaleform::Render::SimpleMeshBuffer *);
	virtual void copyAndConvertGPUBuffers(Scaleform::Render::Mesh *, unsigned long, Scaleform::Render::PrimitiveBatch *, unsigned long long, unsigned long long, unsigned long);
public:
	SimpleMeshCache(Scaleform::MemoryHeap *, const Scaleform::Render::MeshCacheParams &, Scaleform::Render::RenderSync *, unsigned long);
	virtual ~SimpleMeshCache();
	virtual void ClearCache();
	virtual void EndFrame();
	virtual unsigned long long Evict(Scaleform::Render::MeshCacheItem *, Scaleform::AllocAddr *, Scaleform::Render::MeshBase *);
	virtual Scaleform::Render::MeshCache::AllocResult AllocCacheItem(Scaleform::Render::MeshCacheItem * *, Scaleform::Render::MeshCacheItem::MeshType, Scaleform::Render::MeshCacheItem::MeshBaseContent &, unsigned long long, unsigned long, unsigned long, bool, const Scaleform::Render::VertexFormat *);
	virtual void LockMeshCacheItem(Scaleform::Render::MeshCacheItem *, unsigned char * *, unsigned short * *);
	Scaleform::Render::RenderSync * GetRenderSync();
	virtual void GetStats(Scaleform::Render::MeshCache::Stats *);
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