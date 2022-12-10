#pragma once

class Scaleform::Render::RenderQueue
{
private:
	unsigned long QueueSize; // 0x0
	Scaleform::Render::RenderQueueItem * pQueue; // 0x8
	unsigned long QueueHead; // 0x10
	unsigned long QueueTail; // 0x14
	bool HeadReserved; // 0x18
	enum <unnamed-enum-DefaultQueueSize>
	{
		DefaultQueueSize = 256,
	};
public:
	RenderQueue();
	~RenderQueue();
	bool Initialize(unsigned long long);
	void Shutdown();
	Scaleform::Render::RenderQueueItem * ReserveHead();
	void AdvanceHead();
	Scaleform::Render::RenderQueueItem * GetTailItem();
	void AdvanceTail();
	class Iterator;
	Scaleform::Render::RenderQueue::Iterator GetHead();
	Scaleform::Render::RenderQueue::Iterator GetTail();
};
class Scaleform::Render::RenderQueue::Iterator
{
private:
	Scaleform::Render::RenderQueue * pQueue; // 0x0
	unsigned long QueuePos; // 0x8
public:
	Iterator(const Scaleform::Render::RenderQueue::Iterator &);
	Iterator(Scaleform::Render::RenderQueue *, unsigned long);
	void operator=(const Scaleform::Render::RenderQueue::Iterator &);
	bool operator==(const Scaleform::Render::RenderQueue::Iterator &);
	bool operator!=(const Scaleform::Render::RenderQueue::Iterator &);
	void operator++();
	Scaleform::Render::RenderQueueItem * GetItem();
	bool IsAtTail();
	bool IsAtHead();
	void __dflt_ctor_closure();
};
struct Scaleform::Render::RQPrepareBuffer
{
	enum <unnamed-enum-BufferSize>
	{
		BufferSize = 192,
	};
	bool IsProcessing(void *);
	void StartProcessing(void *);
	void ClearItem();
	void * GetItem();
private:
	void * pItem; // 0x0
};
struct Scaleform::Render::RQEmitBuffer
{
	enum <unnamed-enum-BufferSize>
	{
		BufferSize = 64,
	};
	bool IsEmitting(void *);
	void StartEmitting(void *);
	void ClearItem();
	void * GetItem();
private:
	void * pItem; // 0x0
};
class Scaleform::Render::RenderQueueProcessor :
	Unassignable
{
public:
	RenderQueueProcessor(const Scaleform::Render::RenderQueueProcessor &);
	RenderQueueProcessor(Scaleform::Render::RenderQueue &, Scaleform::Render::HAL *);
	~RenderQueueProcessor();
	enum QueueProcessMode
	{
		QPM_Any = 0,
		QPM_One = 1,
		QPM_All = 2,
	};
	enum QueueProcessFilter
	{
		QPF_All = 0,
		QPF_CacheableOnly = 1,
	};
	Scaleform::Render::HAL * GetHAL();
	Scaleform::Render::MeshCache * GetMeshCache();
	void BeginFrame();
	void Flush();
	void ProcessQueue(Scaleform::Render::RenderQueueProcessor::QueueProcessMode);
	Scaleform::Render::RenderQueueProcessor::QueueProcessFilter GetQueuePrepareFilter();
	void SetQueuePrepareFilter(Scaleform::Render::RenderQueueProcessor::QueueProcessFilter);
	Scaleform::Render::RenderQueueProcessor::QueueProcessFilter GetQueueEmitFilter();
	void SetQueueEmitFilter(Scaleform::Render::RenderQueueProcessor::QueueProcessFilter);
	Scaleform::Render::RQPrepareBuffer * GetPrepareItemBuffer();
	Scaleform::Render::RQEmitBuffer * GetEmitItemBuffer();
	Scaleform::Render::RQCacheInterface & GetQueueCachesRef();
private:
	void drawProcessedPrimitives();
	void resetBufferItems();
	Scaleform::Render::HAL * pHAL; // 0x0
	Scaleform::Render::RQCacheInterface Caches; // 0x8
	Scaleform::Render::RenderQueue & Queue; // 0x20
	Scaleform::Render::MeshCache::QueueMode QueueMode; // 0x28
	Scaleform::Render::RenderQueueProcessor::QueueProcessFilter QueuePrepareFilter; // 0x2C
	Scaleform::Render::RenderQueueProcessor::QueueProcessFilter QueueEmitFilter; // 0x30
	Scaleform::Render::RenderQueue::Iterator CurrentItem; // 0x38
	Scaleform::Render::RQPrepareBuffer PrepareItemBuffer; // 0x48
	unsigned char PrepareItemBufferBytes[192]; // 0x48
	Scaleform::Render::RQEmitBuffer EmitItemBuffer; // 0x108
	unsigned char EmitItemBufferBytes[64]; // 0x108
};