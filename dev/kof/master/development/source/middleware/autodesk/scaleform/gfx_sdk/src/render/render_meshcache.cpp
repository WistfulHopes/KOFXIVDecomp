#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"

void Scaleform::Render::MeshCacheItemUseNode::SetMeshItem(Scaleform::Render::MeshCacheItem * p); // 0x14041C580
unsigned char * Scaleform::Render::MeshCacheItem::alloc(Scaleform::MemoryHeap * pheap, unsigned long long classSize, Scaleform::Render::MeshCacheItem::MeshBaseContent & content); // 0x14041C720
Scaleform::Render::MeshCacheItem::MeshCacheItem(Scaleform::Render::MeshCacheItem::MeshType type, Scaleform::Render::MeshCacheListSet * pcacheList, Scaleform::Render::MeshCacheItem::MeshBaseContent & content, unsigned long long classSize, unsigned long long allocSize, unsigned long vertexCount, unsigned long indexCount); // 0x14041AB50
void Scaleform::Render::MeshCacheItem::destroy(Scaleform::Render::MeshBase * pskipMesh, bool freeMemory); // 0x14041C740
Scaleform::Render::MeshCacheItem::~MeshCacheItem(); // 0x14041ADA0
void Scaleform::Render::MeshCacheItem::NotifyMeshRelease(Scaleform::Render::MeshBase * pmesh); // 0x14041BDD0
Scaleform::Render::MeshUseStatus Scaleform::Render::MeshCacheItem::GetUseStatus(); // 0x14041BC90
bool Scaleform::Render::MeshCacheListSet::EvictLRU(Scaleform::Render::MeshCacheListSet::ListSlot & list, Scaleform::AllocAddr & a, unsigned long long size); // 0x14041B760
bool Scaleform::Render::MeshCacheListSet::EvictLRUTillLimit(Scaleform::Render::MeshCacheListSet::ListSlot & list, Scaleform::AllocAddr & a, unsigned long long size, unsigned long long limit); // 0x14041B7E0
bool Scaleform::Render::MeshCacheListSet::EvictPendingFree(Scaleform::AllocAddr & a, bool forceWait); // 0x14041B880
void Scaleform::Render::MeshCacheListSet::EvictAll(); // 0x14041B650
void Scaleform::Render::MeshCacheListSet::EndFrame(); // 0x14041B4A0
class Scaleform::Render::MeshVertexOutput :
	Scaleform::Render::VertexOutput
{
	struct MeshResult;
public:
	MeshVertexOutput(Scaleform::Render::MeshVertexOutput &);
	MeshVertexOutput(const Scaleform::Render::MeshVertexOutput &);
	MeshVertexOutput(Scaleform::Render::Mesh *, Scaleform::Render::MeshCache *, const Scaleform::Render::VertexFormat *, const Scaleform::Render::VertexFormat *, const Scaleform::Render::VertexFormat *, bool);
	const Scaleform::Render::MeshCache::MeshResult & GetResult();
	virtual bool BeginOutput(const Scaleform::Render::VertexOutput::Fill *, unsigned long, const Scaleform::Render::Matrix2x4<float> &);
	virtual void EndOutput();
	virtual void SetVertices(unsigned long, unsigned long, void *, unsigned long);
	virtual void SetIndices(unsigned long, unsigned long, unsigned short *, unsigned long);
private:
	Scaleform::Render::MeshStagingBuffer * getStagingBuffer();
	unsigned char * getStagingBufferDest();
	void setResult(Scaleform::Render::MeshCache::MeshResult::ResultType);
	Scaleform::Render::MeshCache * pCache; // 0x8
	bool WaitForCache; // 0x10
	Scaleform::Render::Mesh * pMesh; // 0x18
	const Scaleform::Render::VertexFormat * pSourceFormat; // 0x20
	const Scaleform::Render::VertexFormat * pSingleFormat; // 0x28
	const Scaleform::Render::VertexFormat * pBatchFormat; // 0x30
	Scaleform::Render::MeshCache::MeshResult Result; // 0x38
	unsigned char * pVertexDataStart; // 0x40
	unsigned short * pIndexDataStart; // 0x48
	Scaleform::Render::MeshCacheItem * BatchData; // 0x50
public:
	virtual ~MeshVertexOutput();
	Scaleform::Render::MeshVertexOutput & operator=(Scaleform::Render::MeshVertexOutput &);
	Scaleform::Render::MeshVertexOutput & operator=(const Scaleform::Render::MeshVertexOutput &);
};
bool Scaleform::Render::MeshVertexOutput::BeginOutput(const Scaleform::Render::VertexOutput::Fill * fills, unsigned long fillCount, const Scaleform::Render::Matrix2x4<float> & vertexMatrix); // 0x14041B220
void Scaleform::Render::MeshVertexOutput::EndOutput(); // 0x14041B630
void Scaleform::Render::MeshVertexOutput::SetVertices(unsigned long fillIndex, unsigned long vertexOffset, void * vertices, unsigned long vertexCount); // 0x14041C690
void Scaleform::Render::MeshVertexOutput::SetIndices(unsigned long fillIndex, unsigned long indexOffset, unsigned short * indices, unsigned long indexCount); // 0x14041C490
bool Scaleform::Render::MeshStagingBuffer::Initialize(Scaleform::MemoryHeap * pheap, unsigned long long size); // 0x14041BCB0
void Scaleform::Render::MeshStagingBuffer::Reset(); // 0x14041C340
bool Scaleform::Render::MeshStagingBuffer::AllocateBufferSpace(unsigned long long * poffset, unsigned long long size); // 0x14041AEF0
bool Scaleform::Render::MeshStagingBuffer::AllocateMesh(Scaleform::Render::Mesh * pmesh, unsigned long long vertexCount, unsigned long long vertexSize, unsigned long long indexCount); // 0x14041B040
void Scaleform::Render::MeshCache::StagingBufferPrep::GenerateMeshes(Scaleform::Render::HAL * hal, Scaleform::Render::MeshCacheItem * skipBatch); // 0x14041BA10
class Scaleform::Render::ComplexMeshVertexOutput :
	Scaleform::Render::VertexOutput
{
	enum AllocResult
	{
		Alloc_Fail = 0,
		Alloc_Fail_TooBig = 1,
		Alloc_Fail_ThisFrame = 2,
		Alloc_Success = 3,
		Alloc_StateError = 4,
	};
public:
	ComplexMeshVertexOutput(Scaleform::Render::ComplexMeshVertexOutput &);
	ComplexMeshVertexOutput(const Scaleform::Render::ComplexMeshVertexOutput &);
	ComplexMeshVertexOutput(Scaleform::Render::HAL *, Scaleform::Render::ComplexMesh *, Scaleform::Render::MeshCache *, bool);
	Scaleform::Render::MeshCache::AllocResult GetResult();
	virtual bool BeginOutput(const Scaleform::Render::VertexOutput::Fill *, unsigned long, const Scaleform::Render::Matrix2x4<float> &);
	virtual void EndOutput();
	virtual void SetVertices(unsigned long, unsigned long, void *, unsigned long);
	virtual void SetIndices(unsigned long, unsigned long, unsigned short *, unsigned long);
private:
	Scaleform::Render::HAL * pHAL; // 0x8
	Scaleform::Render::ComplexMesh * pMesh; // 0x10
	Scaleform::Render::MeshCache * pCache; // 0x18
	bool WaitForCache; // 0x20
	const Scaleform::Render::VertexOutput::Fill * pFills; // 0x28
	Scaleform::Render::MeshCache::AllocResult AllocState; // 0x30
	unsigned char * pVertexDataStart; // 0x38
	unsigned short * pIndexDataStart; // 0x40
public:
	virtual ~ComplexMeshVertexOutput();
	Scaleform::Render::ComplexMeshVertexOutput & operator=(Scaleform::Render::ComplexMeshVertexOutput &);
	Scaleform::Render::ComplexMeshVertexOutput & operator=(const Scaleform::Render::ComplexMeshVertexOutput &);
};
bool Scaleform::Render::ComplexMeshVertexOutput::BeginOutput(const Scaleform::Render::VertexOutput::Fill * fills, unsigned long fillCount, const Scaleform::Render::Matrix2x4<float> & vertexMatrix); // 0x14041B0F0
void Scaleform::Render::ComplexMeshVertexOutput::EndOutput(); // 0x14041B610
void Scaleform::Render::ComplexMeshVertexOutput::SetVertices(unsigned long fillIndex, unsigned long vertexOffset, void * vertices, unsigned long vertexCount); // 0x14041C630
void Scaleform::Render::ComplexMeshVertexOutput::SetIndices(unsigned long fillIndex, unsigned long indexOffset, unsigned short * indices, unsigned long indexCount); // 0x14041C450
Scaleform::Render::MeshCache::MeshCache(Scaleform::MemoryHeap * pheap, const Scaleform::Render::MeshCacheParams & params); // 0x14041AA80
Scaleform::Render::MeshCache::~MeshCache(); // 0x14041ACF0
void Scaleform::Render::MeshCache::SetRQCacheInterface(Scaleform::Render::RQCacheInterface * rqCaches); // 0x14041C5E0
Scaleform::Render::MeshUseStatus Scaleform::Render::MeshCache::GetItemUseStatus(const Scaleform::Render::MeshCacheItem * item); // 0x14041BC40
Scaleform::Render::MeshCache::MeshResult Scaleform::Render::MeshCache::GenerateMesh(Scaleform::Render::HAL * hal, Scaleform::Render::Mesh * mesh, const Scaleform::Render::VertexFormat * sourceFormat, const Scaleform::Render::VertexFormat * singleFormat, const Scaleform::Render::VertexFormat * batchFormat, bool waitForCache); // 0x14041B950
bool Scaleform::Render::MeshCache::PrepareComplexMesh(Scaleform::Render::HAL * hal, Scaleform::Render::ComplexMesh * mesh, bool waitForCache); // 0x14041BDF0
bool Scaleform::Render::MeshCache::PreparePrimitive(Scaleform::Render::HAL * hal, Scaleform::Render::PrimitiveBatch * pbatch, Scaleform::Render::MeshCacheItem::MeshContent & mc, bool waitForCache); // 0x14041BEC0
bool Scaleform::Render::MeshCache::SetLargeMeshVertices(Scaleform::Render::MeshCacheItem * pcacheItem, const Scaleform::Render::VertexFormat * pSourceFormat, unsigned long long vertexOffset, unsigned char * pvertices, unsigned long vertexCount, const Scaleform::Render::VertexFormat * pDestFormat, unsigned char * pdestStart); // 0x14041C540
bool Scaleform::Render::MeshCache::SetLargeMeshIndices(Scaleform::Render::MeshCacheItem * pcacheItem, const Scaleform::Render::VertexFormat * pSourceFormat, unsigned long long indexOffset, const unsigned short * pindices, unsigned long indexCount, const Scaleform::Render::VertexFormat * pDestFormat, unsigned char * pdestIndex); // 0x14041C510char __fastcall Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor>>::RemoveAlt<Scaleform::Render::MeshCacheItem *>(
        Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> > *this,
        Scaleform::Render::MeshCacheItem *const *key)
{
  Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> >::TableType *pTable; // r8
  Scaleform::Render::MeshCacheItem *v4; // r11
  __int64 v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // r10
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 *v10; // rcx

  pTable = this->pTable;
  if ( !this->pTable )
    return 0;
  v4 = *key;
  v5 = pTable->SizeMask & (*key)->HashKey;
  v6 = (__int64 *)&pTable[1] + 3 * v5;
  if ( *v6 == -2 || v6[1] != v5 )
    return 0;
  v7 = v5;
  v8 = -1i64;
  while ( v6[1] != v7 || (Scaleform::Render::MeshCacheItem *)v6[2] != v4 )
  {
    v8 = v5;
    v5 = *v6;
    if ( *v6 == -1 )
      return 0;
    v6 = (__int64 *)&pTable[1] + 3 * v5;
  }
  v9 = *v6;
  if ( v7 == v5 )
  {
    if ( v9 != -1i64 )
    {
      *v6 = -2i64;
      v10 = &pTable->EntryCount + 3 * v9;
      *v6 = v10[2];
      v6[1] = v10[3];
      v6[2] = v10[4];
      v10[2] = -2i64;
      --this->pTable->EntryCount;
      return 1;
    }
  }
  else
  {
    *(&pTable[1].EntryCount + 3 * v8) = v9;
  }
  *v6 = -2i64;
  --this->pTable->EntryCount;
  return 1;
}

void __fastcall Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor>>::add<Scaleform::Render::MeshCacheItem *>(
        Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> > *this,
        void *pmemAddr,
        Scaleform::Render::MeshCacheItem *const *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> >::TableType *v11; // r9
  unsigned __int64 v12; // r11
  unsigned __int64 *v13; // r8
  Scaleform::Render::MeshCacheItem *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 *v16; // r10
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  bool v19; // zf
  unsigned __int64 *i; // rcx
  __int64 v21; // rcx

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount <= 4 * SizeMask + 4 )
      goto LABEL_6;
    v8 = 2 * SizeMask + 2;
  }
  else
  {
    v8 = 8i64;
  }
  Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 3 * v10);
  v13 = &this->pTable->EntryCount + 3 * v10;
  if ( v12 == -2i64 )
  {
    v13[2] = -1i64;
    v13[3] = 0i64;
    v14 = *key;
  }
  else
  {
    v15 = v10;
    do
      v15 = v11->SizeMask & (v15 + 1);
    while ( *(&v11[1].EntryCount + 3 * v15) != -2i64 );
    v16 = &v11[v15 + 1].EntryCount + v15;
    v17 = v13[3];
    if ( v17 == v10 )
    {
      if ( v16 )
      {
        *v16 = v12;
        v16[1] = v13[3];
        v16[2] = v13[4];
      }
      v14 = *key;
      v13[2] = v15;
    }
    else
    {
      v18 = v17 + 2 * (v17 + 1);
      v19 = *(&v11->EntryCount + v18) == v10;
      for ( i = &v11->EntryCount + v18; !v19; i = &v11->EntryCount + v21 )
      {
        v21 = *i + 2 * (*i + 1);
        v19 = *(&v11->EntryCount + v21) == v10;
      }
      if ( v16 )
      {
        *v16 = v12;
        v16[1] = v13[3];
        v16[2] = v13[4];
      }
      *i = v15;
      v14 = *key;
      v13[2] = -1i64;
    }
  }
  v13[3] = v10;
  v13[4] = (unsigned __int64)v14;
}

void __fastcall Scaleform::Render::MeshCache::MeshCache(
        Scaleform::Render::MeshCache *this,
        Scaleform::MemoryHeap *pheap,
        const Scaleform::Render::MeshCacheParams *params)
{
  this->pHeap = pheap;
  this->Scaleform::Render::CacheBase::__vftable = (Scaleform::Render::MeshCache_vtbl *)&Scaleform::Render::MeshCache::`vftable'{for `Scaleform::Render::CacheBase'};
  this->pRQCaches = 0i64;
  this->Scaleform::Render::MeshCacheConfig::__vftable = (Scaleform::Render::MeshCacheConfig_vtbl *)&Scaleform::Render::MeshCache::`vftable'{for `Scaleform::Render::MeshCacheConfig'};
  this->Params = *params;
  this->StagingBuffer.pBuffer = 0i64;
  this->StagingBuffer.BufferSize = 0i64;
  this->StagingBuffer.TotalPinnedSize = 0i64;
  this->StagingBuffer.PinSizeLimit = 0i64;
  this->StagingBuffer.MeshList.Root.pPrev = (Scaleform::Render::MeshStagingNode *)&this->StagingBuffer.PinSizeLimit;
  this->StagingBuffer.MeshList.Root.pNext = (Scaleform::Render::MeshStagingNode *)&this->StagingBuffer.PinSizeLimit;
  this->BatchCacheItemHash.pTable = 0i64;
  this->BufferAlignment = 16;
  *(_QWORD *)&this->Thrashing = 0i64;
  *(_DWORD *)&this->VBAlignment = 1048592;
}

void __fastcall Scaleform::Render::MeshCacheItem::MeshCacheItem(
        Scaleform::Render::MeshCacheItem *this,
        Scaleform::Render::MeshCacheItem::MeshType type,
        Scaleform::Render::MeshCacheListSet *pcacheList,
        Scaleform::Render::MeshCacheItem::MeshBaseContent *content,
        unsigned __int64 classSize,
        unsigned __int64 allocSize,
        unsigned int vertexCount,
        unsigned int indexCount)
{
  Scaleform::List<Scaleform::Render::MeshCacheItemUseNode,Scaleform::Render::MeshCacheItemUseNode,Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode> > *p_PrimitiveBatches; // r10
  unsigned int v13; // eax
  unsigned int Size; // ecx
  unsigned int v15; // er9
  Scaleform::Render::MeshCache *pCache; // rbp
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int i; // edi
  Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2> *v20; // rcx
  unsigned __int64 v21; // rdx
  volatile int *p_RefCount; // r8
  __int64 v23; // rax
  Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *inserted; // rax
  unsigned __int64 HashKey; // r9

  this->pPrev = (Scaleform::Render::MeshCacheItem *)-1i64;
  this->pNext = (Scaleform::Render::MeshCacheItem *)-1i64;
  p_PrimitiveBatches = &this->PrimitiveBatches;
  this->GPUFence.pObject = 0i64;
  this->__vftable = (Scaleform::Render::MeshCacheItem_vtbl *)&Scaleform::Render::MeshCacheItem::`vftable';
  this->PrimitiveBatches.Root.pPrev = (Scaleform::Render::MeshCacheItemUseNode *)&this->PrimitiveBatches;
  this->PrimitiveBatches.Root.pNext = (Scaleform::Render::MeshCacheItemUseNode *)&this->PrimitiveBatches;
  this->Type = type;
  this->HashKey = content->HashKey;
  this->AllocSize = allocSize;
  v13 = vertexCount;
  this->pMeshes = 0i64;
  this->pCacheList = pcacheList;
  this->ListType = MCL_Uncached;
  Size = content->Meshes.Size;
  v15 = 0;
  this->VertexCount = v13;
  this->IndexCount = indexCount;
  this->MeshCount = Size;
  pCache = pcacheList->pCache;
  for ( this->pMeshes = (Scaleform::Render::MeshBase **)((char *)this + ((classSize + 7) & 0xFFFFFFFFFFFFFFF8ui64));
        v15 < this->MeshCount;
        this->pMeshes[v18] = *(Scaleform::Render::MeshBase **)((char *)content->Meshes.pData + v17) )
  {
    v17 = content->Meshes.StrideSize * v15;
    v18 = v15++;
  }
  p_PrimitiveBatches->Root.pPrev = (Scaleform::Render::MeshCacheItemUseNode *)p_PrimitiveBatches;
  p_PrimitiveBatches->Root.pNext = (Scaleform::Render::MeshCacheItemUseNode *)p_PrimitiveBatches;
  if ( type )
  {
    (*this->pMeshes)[1].pPrev = (Scaleform::Render::MeshStagingNode *)this;
  }
  else
  {
    for ( i = 0; i < this->MeshCount; ++i )
    {
      v20 = (Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2> *)&(*(Scaleform::Render::MeshBase **)((char *)content->Meshes.pData + content->Meshes.StrideSize * i))[1];
      v21 = v20->Size;
      if ( v20->Size <= 2 )
        p_RefCount = &(*(Scaleform::Render::MeshBase **)((char *)content->Meshes.pData + content->Meshes.StrideSize * i))[1].RefCount;
      else
        p_RefCount = *(volatile int **)&(*(Scaleform::Render::MeshBase **)((char *)content->Meshes.pData
                                                                         + content->Meshes.StrideSize * i))[1].RefCount;
      v23 = 0i64;
      if ( v21 )
      {
        while ( *(Scaleform::Render::MeshCacheItem **)&p_RefCount[2 * v23] != this )
        {
          if ( ++v23 >= v21 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        inserted = Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>::insertSpot(
                     v20,
                     v21);
        if ( inserted )
          inserted->pObject = (Scaleform::Render::TextLayerPrimitive *)this;
      }
    }
    HashKey = this->HashKey;
    allocSize = (unsigned __int64)this;
    Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor>>::add<Scaleform::Render::MeshCacheItem *>(
      &pCache->BatchCacheItemHash,
      &pCache->BatchCacheItemHash,
      (Scaleform::Render::MeshCacheItem *const *)&allocSize,
      HashKey);
  }
  this->ListType = MCL_Uncached;
  this->pNext = pcacheList->Slots[0].Root.pNext;
  this->pPrev = (Scaleform::Render::MeshCacheItem *)pcacheList;
  pcacheList->Slots[0].Root.pNext->pPrev = this;
  pcacheList->Slots[0].Root.pNext = this;
  pcacheList->Slots[0].Size += this->AllocSize;
}

void __fastcall Scaleform::Render::MeshCache::~MeshCache(Scaleform::Render::MeshCache *this)
{
  Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> >::TableType *pTable; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> >::TableType *v5; // rax

  this->Scaleform::Render::CacheBase::__vftable = (Scaleform::Render::MeshCache_vtbl *)&Scaleform::Render::MeshCache::`vftable'{for `Scaleform::Render::CacheBase'};
  this->Scaleform::Render::MeshCacheConfig::__vftable = (Scaleform::Render::MeshCacheConfig_vtbl *)&Scaleform::Render::MeshCache::`vftable'{for `Scaleform::Render::MeshCacheConfig'};
  pTable = this->BatchCacheItemHash.pTable;
  if ( pTable )
  {
    v3 = 0i64;
    v4 = pTable->SizeMask + 1;
    do
    {
      v5 = this->BatchCacheItemHash.pTable;
      if ( *(unsigned __int64 *)((char *)&v5[1].EntryCount + v3) != -2i64 )
        *(unsigned __int64 *)((char *)&v5[1].EntryCount + v3) = -2i64;
      v3 += 24i64;
      --v4;
    }
    while ( v4 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->BatchCacheItemHash.pTable);
    this->BatchCacheItemHash.pTable = 0i64;
  }
  Scaleform::Render::MeshStagingBuffer::Reset(&this->StagingBuffer);
  this->Scaleform::Render::MeshCacheConfig::__vftable = (Scaleform::Render::MeshCacheConfig_vtbl *)&Scaleform::Render::GlyphCacheConfig::`vftable';
  this->Scaleform::Render::CacheBase::__vftable = (Scaleform::Render::MeshCache_vtbl *)&Scaleform::GFx::AS3::VectorBase<unsigned long>::ArrayFunc::`vftable';
}

void __fastcall Scaleform::Render::MeshCacheItem::~MeshCacheItem(Scaleform::Render::MeshCacheItem *this)
{
  Scaleform::Render::Fence *pObject; // rcx

  this->__vftable = (Scaleform::Render::MeshCacheItem_vtbl *)&Scaleform::Render::MeshCacheItem::`vftable';
  pObject = this->GPUFence.pObject;
  if ( pObject )
    Scaleform::Render::Fence::Release(pObject);
}

char __fastcall Scaleform::Render::MeshStagingBuffer::AllocateBufferSpace(
        Scaleform::Render::MeshStagingBuffer *this,
        unsigned __int64 *poffset,
        unsigned __int64 size)
{
  Scaleform::List<Scaleform::Render::MeshStagingNode,Scaleform::Render::MeshStagingNode,Scaleform::ListNode<Scaleform::Render::MeshStagingNode> > *p_MeshList; // rsi
  Scaleform::Render::MeshStagingNode *v8; // rax
  Scaleform::Render::MeshStagingNode *pPrev; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 StagingBufferOffset; // rdx
  unsigned __int64 v12; // rdi

  if ( size > this->PinSizeLimit )
    return 0;
  p_MeshList = &this->MeshList;
  while ( 1 )
  {
    v8 = (Scaleform::Render::MeshStagingNode *)&p_MeshList[-1].Root.8;
    if ( !p_MeshList )
      v8 = 0i64;
    if ( p_MeshList->Root.pNext == v8 )
      break;
    pPrev = p_MeshList->Root.pPrev;
    v10 = this->MeshList.Root.pNext->StagingBufferSize + this->MeshList.Root.pNext->StagingBufferOffset;
    StagingBufferOffset = p_MeshList->Root.pPrev->StagingBufferOffset;
    if ( v10 > StagingBufferOffset )
    {
      if ( this->BufferSize - v10 >= size )
      {
        *poffset = v10;
        return 1;
      }
      v12 = p_MeshList->Root.pPrev->StagingBufferOffset;
    }
    else
    {
      v12 = StagingBufferOffset - v10;
    }
    if ( v12 >= size )
    {
      *poffset = StagingBufferOffset - v12;
      return 1;
    }
    pPrev->pPrev->pNext = pPrev->pNext;
    pPrev->pNext->pPrev = pPrev->pPrev;
    pPrev->pPrev = (Scaleform::Render::MeshStagingNode *)-1i64;
    pPrev->pNext = (Scaleform::Render::MeshStagingNode *)-1i64;
    if ( pPrev->PinCount )
    {
      if ( v12 )
      {
        memmove(
          &this->pBuffer[pPrev->StagingBufferOffset - v12],
          &this->pBuffer[pPrev->StagingBufferOffset],
          pPrev->StagingBufferSize);
        pPrev->StagingBufferIndexOffset -= v12;
        pPrev->StagingBufferOffset -= v12;
      }
      pPrev->pNext = p_MeshList->Root.pNext;
      pPrev->pPrev = (Scaleform::Render::MeshStagingNode *)&p_MeshList[-1].Root.8;
      p_MeshList->Root.pNext->pPrev = pPrev;
      p_MeshList->Root.pNext = pPrev;
    }
    else
    {
      pPrev->OnStagingNodeEvict(pPrev);
    }
  }
  *poffset = 0i64;
  return 1;
}

char __fastcall Scaleform::Render::MeshStagingBuffer::AllocateMesh(
        Scaleform::Render::MeshStagingBuffer *this,
        Scaleform::Render::Mesh *pmesh,
        unsigned __int64 vertexCount,
        unsigned __int64 vertexSize,
        unsigned __int64 indexCount)
{
  unsigned int v5; // er15
  unsigned __int64 v6; // rsi
  unsigned int v7; // er14
  unsigned __int64 v10; // rbp
  char result; // al
  unsigned __int64 v12; // rax

  v5 = indexCount;
  v6 = vertexSize * vertexCount;
  v7 = vertexCount;
  v10 = (vertexSize * vertexCount + 2 * indexCount + 15) & 0xFFFFFFFFFFFFFFF0ui64;
  result = Scaleform::Render::MeshStagingBuffer::AllocateBufferSpace(this, &indexCount, v10);
  if ( result )
  {
    v12 = indexCount;
    pmesh->StagingBufferOffset = indexCount;
    pmesh->StagingBufferIndexOffset = v6 + v12;
    pmesh->StagingBufferSize = v10;
    pmesh->VertexCount = v7;
    pmesh->IndexCount = v5;
    pmesh->pNext = this->MeshList.Root.pNext;
    pmesh->pPrev = (Scaleform::Render::MeshStagingNode *)&this->PinSizeLimit;
    this->MeshList.Root.pNext->pPrev = &pmesh->Scaleform::Render::MeshStagingNode;
    result = 1;
    this->MeshList.Root.pNext = &pmesh->Scaleform::Render::MeshStagingNode;
  }
  return result;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

bool __fastcall Scaleform::Render::ComplexMeshVertexOutput::BeginOutput(
        Scaleform::Render::ComplexMeshVertexOutput *this,
        const Scaleform::Render::VertexOutput::Fill *fills,
        unsigned int fillCount,
        const Scaleform::Render::Matrix2x4<float> *vertexMatrix)
{
  Scaleform::Render::MeshBase **p_pMesh; // rdi
  int v8; // eax
  Scaleform::Render::MeshCache *pCache; // rcx
  Scaleform::Render::MeshCache::AllocResult v10; // eax
  bool v11; // zf
  BOOL v12; // [rsp+38h] [rbp-60h]
  unsigned int v13; // [rsp+50h] [rbp-48h] BYREF
  Scaleform::Render::MeshCacheItem *v14; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp-38h] BYREF
  __int64 v16[3]; // [rsp+68h] [rbp-30h] BYREF
  int v17; // [rsp+80h] [rbp-18h]
  unsigned int v18; // [rsp+A0h] [rbp+8h] BYREF

  p_pMesh = &this->pMesh;
  if ( Scaleform::Render::ComplexMesh::InitFillRecords(
         this->pMesh,
         this->pHAL,
         fills,
         fillCount,
         vertexMatrix,
         &v15,
         &v13,
         &v18) )
  {
    v14 = 0i64;
    v16[0] = (__int64)p_pMesh;
    v16[1] = 1i64;
    v16[2] = 8i64;
    v8 = Scaleform::Render::MeshCacheItem::CalcHashKey(p_pMesh, 1u);
    pCache = this->pCache;
    v17 = v8;
    LOBYTE(v12) = this->WaitForCache;
    v10 = pCache->AllocCacheItem(
            pCache,
            &v14,
            Mesh_Complex,
            (Scaleform::Render::MeshCacheItem::MeshBaseContent *)v16,
            v15,
            v13,
            v18,
            v12,
            0i64);
    this->AllocState = v10;
    this->pFills = fills;
    if ( v10 == Alloc_Fail_TooBig )
      LOBYTE((*p_pMesh)[1].pNext) = 1;
    v11 = this->AllocState == Alloc_Success;
    if ( this->AllocState == Alloc_Success )
    {
      this->pCache->LockMeshCacheItem(this->pCache, v14, &this->pVertexDataStart, &this->pIndexDataStart);
      return this->AllocState == Alloc_Success;
    }
    return v11;
  }
  else
  {
    LOBYTE((*p_pMesh)[1].pNext) = 1;
    return 0;
  }
}

bool __fastcall Scaleform::Render::MeshVertexOutput::BeginOutput(
        Scaleform::Render::MeshVertexOutput *this,
        const Scaleform::Render::VertexOutput::Fill *fills,
        unsigned int fillCount,
        const Scaleform::Render::Matrix2x4<float> *vertexMatrix)
{
  Scaleform::Render::Mesh *pMesh; // rbp
  Scaleform::Render::MeshBase **p_pMesh; // r14
  const Scaleform::Render::VertexFormat *pBatchFormat; // r8
  char Mesh; // al
  Scaleform::Render::MeshCache::MeshResult::ResultType v11; // edx
  int v12; // eax
  unsigned int VertexCount; // edx
  unsigned int Size; // er8
  Scaleform::Render::MeshCache::AllocResult v15; // eax
  Scaleform::Render::MeshCacheItem *BatchData; // r8
  Scaleform::Render::MeshCache *pCache; // rcx
  float *v18; // rcx
  __int64 v20[3]; // [rsp+50h] [rbp-38h] BYREF
  int v21; // [rsp+68h] [rbp-20h]

  pMesh = this->pMesh;
  p_pMesh = &this->pMesh;
  if ( !pMesh->LargeMesh )
  {
    pBatchFormat = this->pBatchFormat;
    if ( pBatchFormat )
    {
      if ( pBatchFormat->Size * fills->VertexCount <= this->pCache->Params.NoBatchVerticesSizeThreshold )
      {
LABEL_6:
        Mesh = Scaleform::Render::MeshStagingBuffer::AllocateMesh(
                 &this->pCache->StagingBuffer,
                 pMesh,
                 fills->VertexCount,
                 this->pSourceFormat->Size,
                 fills->IndexCount);
        v11 = Fail_Staging_NoBuffer;
        if ( Mesh )
          v11 = Success_Staging;
        this->Result.Value = v11;
        goto LABEL_17;
      }
    }
    else if ( !this->pSingleFormat )
    {
      goto LABEL_6;
    }
  }
  v20[0] = (__int64)&this->pMesh;
  v20[1] = 1i64;
  v20[2] = 8i64;
  v12 = Scaleform::Render::MeshCacheItem::CalcHashKey(p_pMesh, 1u);
  VertexCount = fills->VertexCount;
  v21 = v12;
  Size = this->pSingleFormat->Size;
  pMesh->VertexCount = VertexCount;
  (*p_pMesh)->IndexCount = fills->IndexCount;
  LOBYTE((*p_pMesh)[1].PinCount) = 1;
  v15 = this->pCache->AllocCacheItem(
          this->pCache,
          &this->BatchData,
          Mesh_Regular,
          (Scaleform::Render::MeshCacheItem::MeshBaseContent *)v20,
          VertexCount * Size,
          fills->VertexCount,
          fills->IndexCount,
          this->WaitForCache,
          this->pSingleFormat);
  if ( v15 == Alloc_Success )
  {
    BatchData = this->BatchData;
    pCache = this->pCache;
    this->Result.Value = Success_LargeMesh;
    Scaleform::Render::MeshCache::MoveToCacheListFront(pCache, MCL_ThisFrame, BatchData);
    this->pCache->LockMeshCacheItem(this->pCache, this->BatchData, &this->pVertexDataStart, &this->pIndexDataStart);
  }
  else if ( v15 )
  {
    if ( v15 == Alloc_Fail_TooBig )
    {
      this->Result.Value = Fail_LargeMesh_TooBig;
    }
    else if ( v15 == Alloc_Fail_ThisFrame )
    {
      this->Result.Value = Fail_LargeMesh_ThisFrame;
    }
  }
  else
  {
    this->Result.Value = Fail_LargeMesh_NeedCache;
  }
LABEL_17:
  v18 = (float *)&(*p_pMesh)[1].8;
  *v18 = vertexMatrix->M[0][0];
  v18[1] = vertexMatrix->M[0][1];
  v18[2] = vertexMatrix->M[0][2];
  v18[3] = vertexMatrix->M[0][3];
  v18[4] = vertexMatrix->M[1][0];
  v18[5] = vertexMatrix->M[1][1];
  v18[6] = vertexMatrix->M[1][2];
  v18[7] = vertexMatrix->M[1][3];
  return this->Result.Value <= Success_LargeMesh;
}

unsigned __int64 __fastcall Scaleform::Render::MeshCacheItem::CalcHashKey(
        Scaleform::Render::MeshBase **pmeshes,
        unsigned int meshCount)
{
  unsigned __int64 v2; // r8
  unsigned __int64 result; // rax
  __m128i v5; // xmm2
  __m128i v6; // xmm1
  __m128i v7; // xmm3
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  unsigned __int64 v11; // rcx

  v2 = 0i64;
  result = 0i64;
  if ( meshCount )
  {
    if ( meshCount >= 4ui64 )
    {
      v5 = 0i64;
      v6 = 0i64;
      v7 = _mm_cvtsi32_si128(5u);
      do
      {
        v5 = _mm_xor_si128(_mm_srl_epi64(_mm_loadu_si128((const __m128i *)&pmeshes[result]), v7), v5);
        v8 = _mm_loadu_si128((const __m128i *)&pmeshes[result + 2]);
        result += 4i64;
        v9 = _mm_xor_si128(_mm_srl_epi64(v8, v7), v6);
        v6 = v9;
      }
      while ( result < (meshCount & 0xFFFFFFFC) );
      v10 = _mm_xor_si128(v9, v5);
      v2 = _mm_xor_si128(v10, _mm_srli_si128(v10, 8)).m128i_u64[0];
    }
    for ( ; result < meshCount; v2 ^= v11 >> 5 )
      v11 = (unsigned __int64)pmeshes[result++];
    return v2;
  }
  return result;
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>>::Clear(
        Scaleform::HashSetBase<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::AllocatorDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,348>,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> > *this)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) != -2i64 )
        *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) = -2i64;
      v2 += 24i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::Render::MeshCache::ClearThrashing(Scaleform::Render::MeshCache *this)
{
  this->Thrashing = 0;
}

void __fastcall Scaleform::Render::MeshCacheListSet::EndFrame(Scaleform::Render::MeshCacheListSet *this)
{
  Scaleform::Render::MeshCacheListSet::ListSlot *v1; // rdx
  unsigned __int64 *p_Size; // rax
  Scaleform::Render::MeshCacheItem *pNext; // rcx
  Scaleform::Render::MeshCacheItem *v5; // r8
  Scaleform::Render::MeshCacheItem *v6; // rax
  Scaleform::Render::MeshCacheItem *v7; // r10
  Scaleform::Render::MeshCacheItem *pPrev; // rcx
  Scaleform::Render::MeshCacheItem *v9; // rcx
  Scaleform::Render::MeshCacheListSet::ListSlot *v10; // r8
  unsigned __int64 *v11; // rdx
  unsigned __int64 *v12; // rax
  Scaleform::Render::MeshCacheItem *v13; // r10
  Scaleform::Render::MeshCacheItem *v14; // rcx
  Scaleform::Render::MeshCacheListSet::ListSlot *v15; // rdx
  unsigned __int64 *v16; // r10
  Scaleform::Render::MeshCacheItem *i; // rcx
  unsigned __int64 *v18; // rax
  Scaleform::Render::MeshCacheItem *v19; // r11
  Scaleform::Render::MeshCacheItem *v20; // rcx

  v1 = &this->Slots[1];
  p_Size = &this->Slots[0].Size;
  if ( this == (Scaleform::Render::MeshCacheListSet *)-32i64 )
    p_Size = 0i64;
  if ( (unsigned __int64 *)this->Slots[1].Root.pNext != p_Size )
  {
    pNext = this->Slots[1].Root.pNext;
    v5 = (Scaleform::Render::MeshCacheItem *)&v1[-1].Size;
    while ( 1 )
    {
      v6 = (Scaleform::Render::MeshCacheItem *)&v1[-1].Size;
      if ( !v1 )
        v6 = 0i64;
      if ( pNext == v6 )
        break;
      pNext->ListType = MCL_PrevFrame;
      pNext = pNext->pNext;
    }
    v7 = v1->Root.pNext;
    if ( v7 != v5 )
    {
      pPrev = v1->Root.pPrev;
      v1->Root.pPrev = v5;
      v1->Root.pNext = v5;
      pPrev->pNext = this->Slots[3].Root.pNext;
      v7->pPrev = (Scaleform::Render::MeshCacheItem *)&this->Slots[2].Size;
      this->Slots[3].Root.pNext->pPrev = pPrev;
      this->Slots[3].Root.pNext = v7;
    }
    this->Slots[3].Size += v1->Size;
    v1->Size = 0i64;
  }
  v9 = this->Slots[3].Root.pNext;
  v10 = &this->Slots[3];
  v11 = &this->Slots[2].Size;
  while ( 1 )
  {
    v12 = &this->Slots[2].Size;
    if ( this == (Scaleform::Render::MeshCacheListSet *)-80i64 )
      v12 = 0i64;
    if ( v9 == (Scaleform::Render::MeshCacheItem *)v12 )
      break;
    v9->ListType = MCL_LRUTail;
    v9 = v9->pNext;
  }
  v13 = this->Slots[3].Root.pNext;
  if ( v13 != (Scaleform::Render::MeshCacheItem *)v11 )
  {
    v14 = v10->Root.pPrev;
    v10->Root.pPrev = (Scaleform::Render::MeshCacheItem *)v11;
    this->Slots[3].Root.pNext = (Scaleform::Render::MeshCacheItem *)v11;
    v14->pNext = this->Slots[4].Root.pNext;
    v13->pPrev = (Scaleform::Render::MeshCacheItem *)&this->Slots[3].Size;
    this->Slots[4].Root.pNext->pPrev = v14;
    this->Slots[4].Root.pNext = v13;
  }
  v15 = &this->Slots[2];
  this->Slots[4].Size += this->Slots[3].Size;
  v16 = &this->Slots[1].Size;
  this->Slots[3].Size = 0i64;
  for ( i = this->Slots[2].Root.pNext; ; i = i->pNext )
  {
    v18 = &this->Slots[1].Size;
    if ( this == (Scaleform::Render::MeshCacheListSet *)-56i64 )
      v18 = 0i64;
    if ( i == (Scaleform::Render::MeshCacheItem *)v18 )
      break;
    i->ListType = MCL_PrevFrame;
  }
  v19 = this->Slots[2].Root.pNext;
  if ( v19 != (Scaleform::Render::MeshCacheItem *)v16 )
  {
    v20 = v15->Root.pPrev;
    v15->Root.pPrev = (Scaleform::Render::MeshCacheItem *)v16;
    this->Slots[2].Root.pNext = (Scaleform::Render::MeshCacheItem *)v16;
    v20->pNext = this->Slots[3].Root.pNext;
    v19->pPrev = (Scaleform::Render::MeshCacheItem *)&this->Slots[2].Size;
    this->Slots[3].Root.pNext->pPrev = v20;
    this->Slots[3].Root.pNext = v19;
  }
  this->Slots[3].Size += this->Slots[2].Size;
  this->Slots[2].Size = 0i64;
}

void __fastcall Scaleform::Render::ComplexMeshVertexOutput::EndOutput(Scaleform::Render::ComplexMeshVertexOutput *this)
{
  this->pCache->PostUpdateMesh(this->pCache, this->pMesh->pCacheMeshItem);
}

void __fastcall Scaleform::Render::MeshVertexOutput::EndOutput(Scaleform::Render::MeshVertexOutput *this)
{
  if ( (this->Result.Value & 1) != 0 )
    this->pCache->PostUpdateMesh(this->pCache, this->BatchData);
}

void __fastcall Scaleform::Render::MeshCacheListSet::EvictAll(Scaleform::Render::MeshCacheListSet *this)
{
  $E405E2C0F2FB9372AA27ABA24B9E3CF7 *v1; // rbx
  unsigned int i; // esi
  Scaleform::Render::MeshCacheItem *v4; // rdi
  unsigned __int64 *p_Size; // rax
  unsigned __int64 *v6; // rdi
  Scaleform::Render::MeshCacheItem *pNext; // rbx
  Scaleform::Render::Fence *pObject; // rax
  Scaleform::Render::Fence *v9; // rax

  v1 = &this->Slots[0].Root.8;
  for ( i = 0; i < 6; ++i )
  {
    if ( i != 5 )
    {
      v4 = (Scaleform::Render::MeshCacheItem *)&v1[-2];
      if ( v1 == ($E405E2C0F2FB9372AA27ABA24B9E3CF7 *)8 )
        v4 = 0i64;
      while ( v1->pNext != v4 )
        this->pCache->Evict(this->pCache, v1->pNext, 0i64, 0i64);
    }
    v1 += 3;
  }
  while ( 1 )
  {
    p_Size = &this->Slots[4].Size;
    if ( this == (Scaleform::Render::MeshCacheListSet *)-128i64 )
      p_Size = 0i64;
    if ( (unsigned __int64 *)this->Slots[5].Root.pNext == p_Size )
      break;
    v6 = &this->Slots[4].Size;
    if ( this == (Scaleform::Render::MeshCacheListSet *)-128i64 )
      v6 = 0i64;
    while ( 1 )
    {
      pNext = this->Slots[5].Root.pNext;
      if ( pNext == (Scaleform::Render::MeshCacheItem *)v6 )
        break;
      pObject = pNext->GPUFence.pObject;
      if ( pObject )
      {
        if ( pObject->HasData )
        {
          if ( pObject->Data )
          {
            if ( Scaleform::Render::FenceImpl::IsPending(pObject->Data, FenceType_Vertex) )
            {
              v9 = pNext->GPUFence.pObject;
              if ( v9 )
              {
                if ( v9->HasData )
                {
                  if ( v9->Data )
                    Scaleform::Render::FenceImpl::WaitFence(v9->Data, FenceType_Vertex);
                }
              }
            }
          }
        }
      }
      this->pCache->Evict(this->pCache, pNext, 0i64, 0i64);
    }
  }
}

char __fastcall Scaleform::Render::MeshCacheListSet::EvictLRU(
        Scaleform::Render::MeshCacheListSet *this,
        Scaleform::Render::MeshCacheListSet::ListSlot *list,
        Scaleform::AllocAddr *a,
        unsigned __int64 size)
{
  Scaleform::Render::MeshCacheItem *i; // rdx
  unsigned __int64 *p_Size; // rax

  for ( i = list->Root.pPrev; ; i = list->Root.pPrev )
  {
    p_Size = &list[-1].Size;
    if ( !list )
      p_Size = 0i64;
    if ( i == (Scaleform::Render::MeshCacheItem *)p_Size )
      break;
    if ( this->pCache->Evict(this->pCache, i, a, 0i64) >= size )
      return 1;
  }
  return 0;
}

char __fastcall Scaleform::Render::MeshCacheListSet::EvictLRUTillLimit(
        Scaleform::Render::MeshCacheListSet *this,
        Scaleform::Render::MeshCacheListSet::ListSlot *list,
        Scaleform::AllocAddr *a,
        unsigned __int64 size,
        unsigned __int64 limit)
{
  Scaleform::Render::MeshCacheItem *i; // rdx
  unsigned __int64 *p_Size; // rax

  for ( i = list->Root.pPrev; ; i = list->Root.pPrev )
  {
    p_Size = &list[-1].Size;
    if ( !list )
      p_Size = 0i64;
    if ( i == (Scaleform::Render::MeshCacheItem *)p_Size || list->Size <= limit )
      break;
    if ( this->pCache->Evict(this->pCache, i, a, 0i64) >= size )
      return 1;
  }
  return 0;
}

bool __fastcall Scaleform::Render::MeshCacheListSet::EvictPendingFree(
        Scaleform::Render::MeshCacheListSet *this,
        Scaleform::AllocAddr *a,
        bool forceWait)
{
  Scaleform::Render::MeshCacheListSet::ListSlot *v3; // rsi
  Scaleform::Render::MeshCacheItem *i; // rbx
  Scaleform::Render::MeshCacheItem *p_Size; // rax
  Scaleform::Render::MeshCacheItem *pNext; // rdi
  Scaleform::Render::Fence *pObject; // rax
  Scaleform::Render::Fence *v11; // rax

  v3 = &this->Slots[5];
  for ( i = this->Slots[5].Root.pNext; ; i = pNext )
  {
    p_Size = (Scaleform::Render::MeshCacheItem *)&v3[-1].Size;
    if ( !v3 )
      p_Size = 0i64;
    if ( i == p_Size )
      break;
    pNext = i->pNext;
    if ( forceWait )
    {
      pObject = i->GPUFence.pObject;
      if ( pObject )
      {
        if ( pObject->HasData )
        {
          if ( pObject->Data )
          {
            if ( Scaleform::Render::FenceImpl::IsPending(pObject->Data, FenceType_Vertex) )
            {
              v11 = i->GPUFence.pObject;
              if ( v11 )
              {
                if ( v11->HasData )
                {
                  if ( v11->Data )
                    Scaleform::Render::FenceImpl::WaitFence(v11->Data, FenceType_Vertex);
                }
              }
            }
          }
        }
      }
    }
    this->pCache->Evict(this->pCache, i, a, 0i64);
  }
  return 0;
}

Scaleform::Render::MeshCache::MeshResult *__fastcall Scaleform::Render::MeshCache::GenerateMesh(
        Scaleform::Render::MeshCache *this,
        Scaleform::Render::MeshCache::MeshResult *result,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::Mesh *mesh,
        const Scaleform::Render::VertexFormat *sourceFormat,
        const Scaleform::Render::VertexFormat *singleFormat,
        const Scaleform::Render::VertexFormat *batchFormat,
        bool waitForCache)
{
  Scaleform::Render::MeshProvider *pObject; // rcx
  unsigned int MGFlags; // eax
  __int64 v12[2]; // [rsp+30h] [rbp-68h] BYREF
  bool v13; // [rsp+40h] [rbp-58h]
  Scaleform::Render::Mesh *v14; // [rsp+48h] [rbp-50h]
  const Scaleform::Render::VertexFormat *v15; // [rsp+50h] [rbp-48h]
  const Scaleform::Render::VertexFormat *v16; // [rsp+58h] [rbp-40h]
  const Scaleform::Render::VertexFormat *v17; // [rsp+60h] [rbp-38h]
  Scaleform::Render::MeshCache::MeshResult::ResultType v18; // [rsp+68h] [rbp-30h]
  __int128 v19; // [rsp+70h] [rbp-28h]
  __int64 v20; // [rsp+80h] [rbp-18h]

  v12[1] = (__int64)this;
  pObject = mesh->pProvider.pObject;
  v12[0] = (__int64)&Scaleform::Render::MeshVertexOutput::`vftable';
  v13 = waitForCache;
  v15 = sourceFormat;
  v16 = singleFormat;
  v17 = batchFormat;
  MGFlags = mesh->MGFlags;
  v14 = mesh;
  v18 = Fail_General;
  v19 = 0i64;
  v20 = 0i64;
  pObject->GetData(pObject, hal, mesh, (Scaleform::Render::VertexOutput *)v12, MGFlags);
  result->Value = v18;
  return result;
}

void __fastcall Scaleform::Render::MeshCache::StagingBufferPrep::GenerateMeshes(
        Scaleform::Render::MeshCache::StagingBufferPrep *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::MeshCacheItem *skipBatch)
{
  Scaleform::Render::MeshCacheItem::MeshContent *MC; // rax
  bool v6; // zf
  unsigned int Size; // ecx
  Scaleform::Render::MeshCache *pCache; // r15
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  const Scaleform::Render::VertexFormat *pVertexFormat; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 Size_low; // r14
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  void **v20; // [rsp+30h] [rbp-29h] BYREF
  Scaleform::Render::MeshCache *v21; // [rsp+38h] [rbp-21h]
  char v22; // [rsp+40h] [rbp-19h]
  __int64 v23; // [rsp+48h] [rbp-11h]
  const Scaleform::Render::VertexFormat *v24; // [rsp+50h] [rbp-9h]
  __int64 v25; // [rsp+58h] [rbp-1h]
  __int64 v26; // [rsp+60h] [rbp+7h]
  int v27; // [rsp+68h] [rbp+Fh]
  __int128 v28; // [rsp+70h] [rbp+17h]
  __int64 v29; // [rsp+80h] [rbp+27h]
  Scaleform::Render::HAL *v30; // [rsp+C8h] [rbp+6Fh]

  v30 = hal;
  MC = this->MC;
  v6 = !this->CanCopyData;
  Size = MC->Meshes.Size;
  pCache = this->pCache;
  if ( !v6 )
  {
    if ( Size )
    {
      v9 = Size;
      v10 = 0i64;
      do
      {
        v11 = *(__int64 *)((char *)this->MC->Meshes.pData + v10 * this->MC->Meshes.StrideSize);
        if ( !this->PinnedFlagArray[v10] )
        {
          v12 = *(_QWORD *)(v11 + 144);
          if ( !v12 || v12 == 1 && *(Scaleform::Render::MeshCacheItem **)(v11 + 152) == skipBatch )
          {
            if ( !*(_QWORD *)(v11 + 40) )
            {
              v21 = this->pCache;
              pVertexFormat = this->pVertexFormat;
              v20 = &Scaleform::Render::MeshVertexOutput::`vftable';
              v14 = *(_QWORD *)(v11 + 80);
              v24 = pVertexFormat;
              LODWORD(pVertexFormat) = *(_DWORD *)(v11 + 136);
              v22 = 0;
              v23 = v11;
              v25 = 0i64;
              v26 = 0i64;
              v27 = 6;
              v28 = 0i64;
              v29 = 0i64;
              (*(void (__fastcall **)(__int64, Scaleform::Render::HAL *, __int64, void ***, _DWORD))(*(_QWORD *)v14 + 24i64))(
                v14,
                hal,
                v11,
                &v20,
                (_DWORD)pVertexFormat);
              hal = v30;
            }
            if ( this->PinMeshes || !*(_DWORD *)(v11 + 64) )
            {
              if ( !*(_DWORD *)(v11 + 64) )
                pCache->StagingBuffer.TotalPinnedSize += *(_QWORD *)(v11 + 40);
              ++*(_DWORD *)(v11 + 64);
            }
          }
        }
        ++v10;
        --v9;
      }
      while ( v9 );
      this->PinMeshes = 0;
      return;
    }
LABEL_29:
    this->PinMeshes = 0;
    return;
  }
  if ( !Size )
    goto LABEL_29;
  v15 = 0i64;
  Size_low = LODWORD(MC->Meshes.Size);
  do
  {
    if ( !this->PinnedFlagArray[v15] )
    {
      v17 = *(__int64 *)((char *)this->MC->Meshes.pData + v15 * this->MC->Meshes.StrideSize);
      if ( !*(_QWORD *)(v17 + 40) )
      {
        v18 = *(_QWORD *)(v17 + 80);
        v21 = this->pCache;
        v24 = this->pVertexFormat;
        v19 = *(_DWORD *)(v17 + 136);
        v20 = &Scaleform::Render::MeshVertexOutput::`vftable';
        v22 = 0;
        v23 = v17;
        v25 = 0i64;
        v26 = 0i64;
        v27 = 6;
        v28 = 0i64;
        v29 = 0i64;
        (*(void (__fastcall **)(__int64, Scaleform::Render::HAL *, __int64, void ***, int))(*(_QWORD *)v18 + 24i64))(
          v18,
          hal,
          v17,
          &v20,
          v19);
        hal = v30;
      }
      if ( this->PinMeshes || !*(_DWORD *)(v17 + 64) )
      {
        if ( !*(_DWORD *)(v17 + 64) )
          pCache->StagingBuffer.TotalPinnedSize += *(_QWORD *)(v17 + 40);
        ++*(_DWORD *)(v17 + 64);
      }
    }
    ++v15;
    --Size_low;
  }
  while ( Size_low );
  this->PinMeshes = 0;
}

__int64 __fastcall Scaleform::Render::MeshCache::GetItemUseStatus(
        Scaleform::Render::MeshCache *this,
        const Scaleform::Render::MeshCacheItem *item)
{
  switch ( item->ListType )
  {
    case MCL_InFlight:
      return 4i64;
    case MCL_ThisFrame:
      return 3i64;
    case MCL_PrevFrame:
      return 2i64;
  }
  return item->ListType == MCL_LRUTail;
}

Scaleform::Render::RQCacheInterface **__fastcall Scaleform::GFx::Clipboard::GetText(Scaleform::Render::MeshCache *this)
{
  return &this->pRQCaches;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

__int64 __fastcall Scaleform::Render::Hairliner::GetMeshTriangleCount(Scaleform::Render::MeshCache *this)
{
  return this->Thrashing;
}

__int64 __fastcall Scaleform::Render::MeshCacheItem::GetUseStatus(Scaleform::Render::MeshCacheItem *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::MeshCache *, Scaleform::Render::MeshCacheItem *))this->pCacheList->pCache->GetItemUseStatus)(
           this->pCacheList->pCache,
           this);
}

bool __fastcall Scaleform::Render::MeshStagingBuffer::Initialize(
        Scaleform::Render::MeshStagingBuffer *this,
        Scaleform::MemoryHeap *pheap,
        unsigned __int64 size)
{
  unsigned __int8 *v6; // rax

  if ( this->pBuffer && size != this->BufferSize )
    Scaleform::Render::MeshStagingBuffer::Reset(this);
  v6 = (unsigned __int8 *)pheap->Alloc(pheap, size, 0i64);
  this->pBuffer = v6;
  if ( v6 )
  {
    LOBYTE(v6) = 1;
    this->BufferSize = size;
    this->PinSizeLimit = size >> 1;
    this->TotalPinnedSize = 0i64;
  }
  return (char)v6;
}

void __fastcall Scaleform::Render::MeshCache::MoveToCacheListFront(
        Scaleform::Render::MeshCache *this,
        Scaleform::Render::MeshCacheListType list,
        Scaleform::Render::MeshCacheItem *p)
{
  __int64 v4; // r8
  Scaleform::Render::MeshCacheListSet *pCacheList; // r9
  unsigned __int64 *p_Size; // rcx
  Scaleform::Render::MeshCacheListSet *v7; // rdx
  Scaleform::Render::MeshCacheItem *v8; // r8
  Scaleform::Render::MeshCacheItem *v9; // rax

  v4 = list;
  if ( p )
  {
    pCacheList = p->pCacheList;
    p->pPrev->Scaleform::Render::FenceResource::pNext = p->pNext;
    p->pNext->Scaleform::Render::FenceResource::pPrev = p->pPrev;
    p->pPrev = (Scaleform::Render::MeshCacheItem *)-1i64;
    p->pNext = (Scaleform::Render::MeshCacheItem *)-1i64;
    p_Size = &pCacheList->Slots[p->ListType].Size;
    *p_Size -= p->AllocSize;
    v7 = p->pCacheList;
    p->ListType = v4;
    v8 = (Scaleform::Render::MeshCacheItem *)((char *)v7 + 24 * v4);
    p->pNext = v8->pNext;
    v9 = v8;
    if ( v8 == (Scaleform::Render::MeshCacheItem *)-8i64 )
      v9 = 0i64;
    p->pPrev = v9;
    v8->pNext->Scaleform::Render::FenceResource::pPrev = p;
    v8->pNext = p;
    v8->GPUFence.pObject = (Scaleform::Render::Fence *)((char *)v8->GPUFence.pObject + p->AllocSize);
  }
}

void __fastcall Scaleform::Render::MeshCacheItem::NotifyMeshRelease(
        Scaleform::Render::MeshCacheItem *this,
        Scaleform::Render::MeshBase *pmesh)
{
  this->pCacheList->pCache->Evict(this->pCacheList->pCache, this, 0i64, pmesh);
}

char __fastcall Scaleform::Render::MeshCache::PrepareComplexMesh(
        Scaleform::Render::MeshCache *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::ComplexMesh *mesh,
        bool waitForCache)
{
  Scaleform::Render::MeshProvider *pObject; // rcx
  char result; // al
  Scaleform::Render::MeshCacheItem *pCacheMeshItem; // r8
  _QWORD v9[4]; // [rsp+30h] [rbp-58h] BYREF
  bool v10; // [rsp+50h] [rbp-38h]
  __int64 v11; // [rsp+58h] [rbp-30h]
  int v12; // [rsp+60h] [rbp-28h]
  __int64 v13; // [rsp+68h] [rbp-20h]
  __int64 v14; // [rsp+70h] [rbp-18h]

  if ( mesh && !mesh->AllocTooBig )
  {
    if ( mesh->pCacheMeshItem )
      goto LABEL_6;
    v9[3] = this;
    pObject = mesh->pProvider.pObject;
    v9[0] = &Scaleform::Render::ComplexMeshVertexOutput::`vftable';
    v11 = 0i64;
    v10 = waitForCache;
    v9[1] = hal;
    v9[2] = mesh;
    v12 = 4;
    v13 = 0i64;
    v14 = 0i64;
    pObject->GetData(pObject, hal, mesh, (Scaleform::Render::VertexOutput *)v9, mesh->MGFlags);
    result = v12;
    if ( !v12 )
      return result;
    if ( v12 == 3 )
    {
LABEL_6:
      pCacheMeshItem = mesh->pCacheMeshItem;
      if ( pCacheMeshItem )
        Scaleform::Render::MeshCache::MoveToCacheListFront(this, MCL_InFlight, pCacheMeshItem);
    }
  }
  return 1;
}

bool __fastcall Scaleform::Render::MeshCache::PreparePrimitive(
        Scaleform::Render::MeshCache *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::PrimitiveBatch *pbatch,
        Scaleform::Render::MeshCacheItem::MeshContent *mc,
        bool waitForCache)
{
  Scaleform::Render::Primitive *pPrimitive; // r14
  __int64 Size_low; // r9
  Scaleform::Render::MeshBase *v11; // r8
  Scaleform::Render::PrimitiveFill *pObject; // rax
  __int64 pFormat; // rcx
  const Scaleform::Render::VertexFormat *v14; // rax
  Scaleform::Render::MeshProvider *v15; // rcx
  int v16; // er9
  Scaleform::Render::MeshBase *v17; // rcx
  Scaleform::Render::MeshCacheItem **p_RefCount; // r8
  Scaleform::Render::MeshCacheItemUseNode *p_MeshNode; // rdx
  Scaleform::Render::MeshCacheItem *v20; // r8
  unsigned __int64 v22; // rdi
  bool v23; // al
  Scaleform::Render::MeshCacheItem::MeshContent *v24; // r8
  Scaleform::Render::PrimitiveFill *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  const Scaleform::Render::VertexFormat *v29; // r9
  unsigned __int64 VBAlignment; // rax
  __int64 v31; // rdx
  unsigned __int64 IBAlignment; // rax
  __int64 v33; // rcx
  unsigned __int64 BufferAlignment; // rax
  __int64 v35; // rdx
  Scaleform::Render::MeshCache_vtbl *v36; // r10
  Scaleform::Render::MeshCache::AllocResult v37; // eax
  bool v38; // r10
  __int64 v39; // rdx
  unsigned int v40; // er12
  unsigned __int64 v41; // r13
  Scaleform::Render::PrimitiveFill *v42; // rax
  unsigned int v43; // er14
  unsigned __int64 v44; // rcx
  __int64 v45; // rsi
  void *v46; // r9
  unsigned __int8 *v47; // rdx
  const Scaleform::Render::VertexFormat *v48; // r8
  Scaleform::Render::MeshCacheItem::MeshContent *v49; // r8
  Scaleform::Render::MeshCache *pCache; // r9
  __int64 v51; // rdx
  int v52; // ecx
  int v53; // ecx
  unsigned int count; // [rsp+20h] [rbp-E0h]
  const Scaleform::Render::VertexFormat *v55; // [rsp+40h] [rbp-C0h]
  char v56; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::Render::MeshCacheItem *p; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int ptotalVertices; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int ptotalIndices; // [rsp+64h] [rbp-9Ch] BYREF
  Scaleform::Render::PrimitiveBatch *v60; // [rsp+68h] [rbp-98h]
  __int64 v61; // [rsp+70h] [rbp-90h] BYREF
  void *pargs; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 *pBuffer; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+88h] [rbp-78h] BYREF
  Scaleform::Render::VertexFormat *sourceFormat; // [rsp+90h] [rbp-70h]
  __int64 v66[2]; // [rsp+A0h] [rbp-60h] BYREF
  bool v67; // [rsp+B0h] [rbp-50h]
  Scaleform::Render::MeshBase *v68; // [rsp+B8h] [rbp-48h]
  __int64 v69; // [rsp+C0h] [rbp-40h]
  const Scaleform::Render::VertexFormat *v70; // [rsp+C8h] [rbp-38h]
  __int64 v71; // [rsp+D0h] [rbp-30h]
  int v72; // [rsp+D8h] [rbp-28h]
  __int128 v73; // [rsp+E0h] [rbp-20h]
  __int64 v74; // [rsp+F0h] [rbp-10h]
  Scaleform::Render::MeshCache::StagingBufferPrep v75; // [rsp+100h] [rbp+0h] BYREF

  pPrimitive = pbatch->pPrimitive;
  Size_low = LODWORD(mc->Meshes.Size);
  v60 = pbatch;
  if ( (_DWORD)Size_low )
  {
    v11 = *mc->Meshes.pData;
    if ( LOBYTE(v11[1].PinCount) )
    {
      v66[1] = (__int64)this;
      v66[0] = (__int64)&Scaleform::Render::MeshVertexOutput::`vftable';
      v67 = waitForCache;
      pObject = pPrimitive->pFill.pObject;
      v68 = v11;
      v71 = 0i64;
      v72 = 6;
      pFormat = (__int64)pObject->Data.pFormat;
      v14 = pbatch->pFormat;
      v69 = pFormat;
      v15 = v11->pProvider.pObject;
      v70 = v14;
      LODWORD(v14) = v11->MGFlags;
      v73 = 0i64;
      v74 = 0i64;
      v15->GetData(v15, hal, v11, (Scaleform::Render::VertexOutput *)v66, (unsigned int)v14);
      v16 = v72;
      if ( v72 <= 1 )
      {
        v17 = *mc->Meshes.pData;
        if ( v17[1].Scaleform::RefCountBase<Scaleform::Render::MeshBase,68>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable <= (Scaleform::Render::MeshBase_vtbl *)2 )
          p_RefCount = (Scaleform::Render::MeshCacheItem **)&v17[1].RefCount;
        else
          p_RefCount = *(Scaleform::Render::MeshCacheItem ***)&v17[1].RefCount;
        p_MeshNode = &pbatch->MeshNode;
        v20 = *p_RefCount;
        if ( pbatch->MeshNode.pMeshItem )
        {
          pbatch->MeshNode.pPrev->pNext = pbatch->MeshNode.pNext;
          pbatch->MeshNode.pNext->pPrev = p_MeshNode->pPrev;
          p_MeshNode->pPrev = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
          pbatch->MeshNode.pNext = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
        }
        pbatch->MeshNode.pMeshItem = v20;
        if ( v20 )
        {
          pbatch->MeshNode.pNext = v20->PrimitiveBatches.Root.pNext;
          p_MeshNode->pPrev = (Scaleform::Render::MeshCacheItemUseNode *)&v20->PrimitiveBatches;
          v20->PrimitiveBatches.Root.pNext->pPrev = p_MeshNode;
          v20->PrimitiveBatches.Root.pNext = p_MeshNode;
        }
      }
      return v16 != 3;
    }
  }
  v22 = 0i64;
  v23 = this->MeshCacheCaps & 1;
  v75.pCache = this;
  v75.CanCopyData = v23;
  v24 = mc;
  v25 = pPrimitive->pFill.pObject;
  v75.MC = mc;
  v75.PinMeshes = 1;
  v75.pVertexFormat = v25->Data.pFormat;
  if ( (_DWORD)Size_low )
  {
    v26 = 0i64;
    while ( 1 )
    {
      v27 = *(__int64 *)((char *)v24->Meshes.pData + v26 * v24->Meshes.StrideSize);
      v28 = *(_QWORD *)(v27 + 40);
      if ( v28 )
      {
        if ( !*(_DWORD *)(v27 + 64) )
          this->StagingBuffer.TotalPinnedSize += v28;
        ++*(_DWORD *)(v27 + 64);
        v75.PinnedFlagArray[v26] = 1;
      }
      else
      {
        v75.PinnedFlagArray[v26] = 0;
      }
      ++v26;
      if ( !--Size_low )
        break;
      v24 = v75.MC;
    }
  }
  Scaleform::Render::MeshCache::StagingBufferPrep::GenerateMeshes(&v75, hal, 0i64);
  Scaleform::Render::PrimitiveBatch::CalcMeshSizes(pbatch, &ptotalVertices, &ptotalIndices);
  v29 = pbatch->pFormat;
  VBAlignment = this->VBAlignment;
  v31 = v29->Size * ptotalVertices;
  if ( VBAlignment > 1 )
    v31 = ~(VBAlignment - 1) & (VBAlignment - 1 + v31);
  IBAlignment = this->IBAlignment;
  v33 = 2i64 * ptotalIndices;
  if ( IBAlignment > 1 )
    v33 = ~(IBAlignment - 1) & (IBAlignment - 1 + v33);
  BufferAlignment = this->BufferAlignment;
  v35 = v33 + v31;
  if ( BufferAlignment > 1 )
    v35 = ~(BufferAlignment - 1) & (BufferAlignment - 1 + v35);
  if ( !v35 )
    goto LABEL_40;
  v36 = this->Scaleform::Render::CacheBase::__vftable;
  v55 = pbatch->pFormat;
  p = 0i64;
  v37 = v36->AllocCacheItem(
          this,
          &p,
          Mesh_Regular,
          mc,
          ptotalVertices * v29->Size,
          ptotalVertices,
          ptotalIndices,
          waitForCache,
          v55);
  if ( v37 == Alloc_Success )
  {
    Scaleform::Render::PrimitiveBatch::SetCacheItem(pbatch, p);
    Scaleform::Render::MeshCache::StagingBufferPrep::GenerateMeshes(&v75, hal, p);
    v39 = 0i64;
    v40 = 0;
    pBuffer = this->StagingBuffer.pBuffer;
    v41 = 0i64;
    v42 = pPrimitive->pFill.pObject;
    v43 = 0;
    sourceFormat = (Scaleform::Render::VertexFormat *)v42->Data.pFormat;
    v61 = 0i64;
    v64 = 0i64;
    if ( LODWORD(mc->Meshes.Size) )
    {
      while ( 1 )
      {
        v44 = mc->Meshes.StrideSize * v43;
        v45 = *(__int64 *)((char *)mc->Meshes.pData + v44);
        if ( *(_QWORD *)(v45 + 40) )
        {
          if ( !v39 )
          {
            this->LockMeshCacheItem(this, p, (unsigned __int8 **)&v61, (unsigned __int16 **)&v64);
            v39 = v61;
          }
          v46 = (void *)(v39 + v41);
          v47 = &pBuffer[*(_QWORD *)(v45 + 48)];
          pargs = &v56;
          v48 = v60->pFormat;
          count = *(_DWORD *)(v45 + 68);
          v56 = v43;
          Scaleform::Render::ConvertVertices(sourceFormat, v47, v48, v46, count, &pargs);
          Scaleform::Render::ConvertIndices(
            (unsigned __int16 *)(v64 + 2 * (v22 >> 1)),
            (unsigned __int16 *)&pBuffer[*(_QWORD *)(v45 + 56)],
            *(_DWORD *)(v45 + 72),
            v40);
        }
        else
        {
          this->copyAndConvertGPUBuffers(
            this,
            *(Scaleform::Render::Mesh **)((char *)mc->Meshes.pData + v44),
            v43,
            v60,
            v41,
            v22,
            v40);
        }
        ++v43;
        v40 += *(_DWORD *)(v45 + 68);
        v41 += *(_DWORD *)(v45 + 68) * v60->pFormat->Size;
        v22 += 2i64 * *(unsigned int *)(v45 + 72);
        if ( v43 >= LODWORD(mc->Meshes.Size) )
          break;
        v39 = v61;
      }
      LODWORD(v22) = 0;
    }
    this->PostUpdateMesh(this, p);
LABEL_40:
    v38 = 1;
    goto LABEL_41;
  }
  v38 = v37 != Alloc_Fail;
LABEL_41:
  v49 = v75.MC;
  pCache = v75.pCache;
  if ( LODWORD(v75.MC->Meshes.Size) )
  {
    do
    {
      v51 = *(__int64 *)((char *)v49->Meshes.pData + v49->Meshes.StrideSize * (unsigned int)v22);
      if ( *(_QWORD *)(v51 + 40) )
      {
        v52 = *(_DWORD *)(v51 + 64);
        if ( v52 )
        {
          v53 = v52 - 1;
          *(_DWORD *)(v51 + 64) = v53;
          if ( !v53 )
            pCache->StagingBuffer.TotalPinnedSize -= *(_QWORD *)(v51 + 40);
        }
      }
      LODWORD(v22) = v22 + 1;
    }
    while ( (unsigned int)v22 < LODWORD(v49->Meshes.Size) );
  }
  return v38;
}

void __fastcall Scaleform::Render::MeshStagingBuffer::Reset(Scaleform::Render::MeshStagingBuffer *this)
{
  Scaleform::List<Scaleform::Render::MeshStagingNode,Scaleform::Render::MeshStagingNode,Scaleform::ListNode<Scaleform::Render::MeshStagingNode> > *p_MeshList; // rdi
  unsigned __int64 *p_PinSizeLimit; // rsi
  Scaleform::Render::MeshStagingNode *pNext; // rcx

  if ( this->pBuffer )
  {
    p_MeshList = &this->MeshList;
    p_PinSizeLimit = &this->PinSizeLimit;
    if ( this == (Scaleform::Render::MeshStagingBuffer *)-32i64 )
      p_PinSizeLimit = 0i64;
    while ( (unsigned __int64 *)p_MeshList->Root.pNext != p_PinSizeLimit )
    {
      pNext = this->MeshList.Root.pNext;
      pNext->StagingBufferOffset = 0i64;
      pNext->StagingBufferIndexOffset = 0i64;
      pNext->pPrev->pNext = pNext->pNext;
      pNext->pNext->pPrev = pNext->pPrev;
      pNext->pPrev = (Scaleform::Render::MeshStagingNode *)-1i64;
      pNext->pNext = (Scaleform::Render::MeshStagingNode *)-1i64;
      pNext->OnStagingNodeEvict(pNext);
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pBuffer);
    this->pBuffer = 0i64;
    this->BufferSize = 0i64;
    this->TotalPinnedSize = 0i64;
  }
}

void __fastcall Scaleform::Render::PrimitiveBatch::SetCacheItem(
        Scaleform::Render::PrimitiveBatch *this,
        Scaleform::Render::MeshCacheItem *p)
{
  Scaleform::Render::MeshCacheItemUseNode *p_MeshNode; // r8

  p_MeshNode = &this->MeshNode;
  if ( this->MeshNode.pMeshItem )
  {
    this->MeshNode.pPrev->pNext = this->MeshNode.pNext;
    this->MeshNode.pNext->pPrev = p_MeshNode->pPrev;
    p_MeshNode->pPrev = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
    this->MeshNode.pNext = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
  }
  this->MeshNode.pMeshItem = p;
  if ( p )
  {
    this->MeshNode.pNext = p->PrimitiveBatches.Root.pNext;
    p_MeshNode->pPrev = (Scaleform::Render::MeshCacheItemUseNode *)&p->PrimitiveBatches;
    p->PrimitiveBatches.Root.pNext->pPrev = p_MeshNode;
    p->PrimitiveBatches.Root.pNext = p_MeshNode;
  }
}

void __fastcall Scaleform::Render::ComplexMeshVertexOutput::SetIndices(
        Scaleform::Render::ComplexMeshVertexOutput *this,
        unsigned int fillIndex,
        unsigned int indexOffset,
        unsigned __int16 *indices,
        unsigned int indexCount)
{
  if ( this->AllocState == Alloc_Success )
    memmove(
      &this->pIndexDataStart[indexOffset + (unsigned __int64)this->pMesh->FillRecords.Data.Data[fillIndex].IndexOffset],
      indices,
      2i64 * indexCount);
}

void __fastcall Scaleform::Render::MeshVertexOutput::SetIndices(
        Scaleform::Render::MeshVertexOutput *this,
        unsigned int fillIndex,
        unsigned int indexOffset,
        unsigned __int16 *indices,
        unsigned int indexCount)
{
  if ( !fillIndex && this->Result.Value <= Success_LargeMesh )
  {
    if ( (this->Result.Value & 1) != 0 )
      this->pCache->SetLargeMeshIndices(
        this->pCache,
        this->BatchData,
        this->pSourceFormat,
        indexOffset,
        indices,
        indexCount,
        this->pSingleFormat,
        (unsigned __int8 *)this->pIndexDataStart);
    else
      memmove(
        &this->pCache->StagingBuffer.pBuffer[2 * indexOffset + this->pMesh->StagingBufferIndexOffset],
        indices,
        2i64 * indexCount);
  }
}

char __fastcall Scaleform::Render::MeshCache::SetLargeMeshIndices(
        Scaleform::Render::MeshCache *this,
        Scaleform::Render::MeshCacheItem *pcacheItem,
        const Scaleform::Render::VertexFormat *pSourceFormat,
        unsigned __int64 indexOffset,
        const unsigned __int16 *pindices,
        unsigned int indexCount,
        const Scaleform::Render::VertexFormat *pDestFormat,
        unsigned __int8 *pdestIndex)
{
  memmove(&pdestIndex[2 * indexOffset], pindices, 2i64 * indexCount);
  return 1;
}

char __fastcall Scaleform::Render::MeshCache::SetLargeMeshVertices(
        Scaleform::Render::MeshCache *this,
        Scaleform::Render::MeshCacheItem *pcacheItem,
        const Scaleform::Render::VertexFormat *pSourceFormat,
        unsigned __int64 vertexOffset,
        unsigned __int8 *pvertices,
        unsigned int vertexCount,
        const Scaleform::Render::VertexFormat *pDestFormat,
        unsigned __int8 *pdestStart)
{
  Scaleform::Render::ConvertVertices_Buffered(
    pSourceFormat,
    pvertices,
    pDestFormat,
    &pdestStart[pDestFormat->Size * vertexOffset],
    vertexCount,
    0i64);
  return 1;
}

void __fastcall Scaleform::Render::MeshCacheItemUseNode::SetMeshItem(
        Scaleform::Render::MeshCacheItemUseNode *this,
        Scaleform::Render::MeshCacheItem *p)
{
  if ( this->pMeshItem )
  {
    this->pPrev->pNext = this->pNext;
    this->pNext->Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode>::$CF0E28E0A2F796630BBA007A3AFDCE0D::pPrev = this->pPrev;
    this->pPrev = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
    this->pNext = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
  }
  this->pMeshItem = p;
  if ( p )
  {
    this->pNext = p->PrimitiveBatches.Root.pNext;
    this->pPrev = (Scaleform::Render::MeshCacheItemUseNode *)&p->PrimitiveBatches;
    p->PrimitiveBatches.Root.pNext->pPrev = this;
    p->PrimitiveBatches.Root.pNext = this;
  }
}

void __fastcall Scaleform::Render::MeshCache::SetRQCacheInterface(
        Scaleform::Render::MeshCache *this,
        Scaleform::Render::RQCacheInterface *rqCaches)
{
  Scaleform::Render::RQCacheInterface *pRQCaches; // rax

  pRQCaches = this->pRQCaches;
  if ( pRQCaches != rqCaches )
  {
    if ( pRQCaches )
    {
      pRQCaches->LockFlags &= ~1u;
      this->pRQCaches->pCaches[0] = 0i64;
    }
    this->pRQCaches = rqCaches;
    if ( rqCaches )
    {
      rqCaches->pCaches[0] = this;
      if ( this->AreBuffersLocked(this) )
        this->pRQCaches->LockFlags |= 1u;
    }
  }
}

void __fastcall Scaleform::Render::ComplexMeshVertexOutput::SetVertices(
        Scaleform::Render::ComplexMeshVertexOutput *this,
        unsigned int fillIndex,
        unsigned int vertexOffset,
        void *vertices,
        unsigned int vertexCount)
{
  __int64 v5; // r10
  Scaleform::Render::ComplexMesh::FillRecord *v6; // rdx

  if ( this->AllocState == Alloc_Success )
  {
    v5 = fillIndex;
    v6 = &this->pMesh->FillRecords.Data.Data[fillIndex];
    Scaleform::Render::ConvertVertices_Buffered(
      this->pFills[v5].pFormat,
      vertices,
      v6->pFormats[0],
      &this->pVertexDataStart[v6->VertexByteOffset + v6->pFormats[0]->Size * vertexOffset],
      vertexCount,
      0i64);
  }
}

void __fastcall Scaleform::Render::MeshVertexOutput::SetVertices(
        Scaleform::Render::MeshVertexOutput *this,
        unsigned int fillIndex,
        unsigned int vertexOffset,
        void *vertices,
        unsigned int vertexCount)
{
  if ( !fillIndex && this->Result.Value <= Success_LargeMesh )
  {
    if ( (this->Result.Value & 1) != 0 )
      this->pCache->SetLargeMeshVertices(
        this->pCache,
        this->BatchData,
        this->pSourceFormat,
        vertexOffset,
        (unsigned __int8 *)vertices,
        vertexCount,
        this->pSingleFormat,
        this->pVertexDataStart);
    else
      memmove(
        &this->pCache->StagingBuffer.pBuffer[vertexOffset * this->pSourceFormat->Size + this->pMesh->StagingBufferOffset],
        vertices,
        vertexCount * this->pSourceFormat->Size);
  }
}

unsigned __int8 *__fastcall Scaleform::Render::MeshCacheItem::alloc(
        Scaleform::MemoryHeap *pheap,
        unsigned __int64 classSize,
        Scaleform::Render::MeshCacheItem::MeshBaseContent *content)
{
  return (unsigned __int8 *)pheap->Alloc(
                              pheap,
                              ((classSize + 7) & 0xFFFFFFFFFFFFFFF8ui64) + 8i64 * LODWORD(content->Meshes.Size),
                              0i64);
}

Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *__fastcall Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Render::MeshCacheItem *,2>::allocInsertCopy(
        Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2> *this,
        unsigned __int64 index,
        Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *source,
        unsigned __int64 size,
        unsigned __int64 allocSize)
{
  Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *result; // rax
  Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *v9; // rbx

  result = (Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                      Scaleform::Memory::pGlobalHeap,
                                                                      this,
                                                                      8 * allocSize,
                                                                      0i64);
  v9 = result;
  if ( result )
  {
    if ( index )
      memmove(result, source, 8 * index);
    if ( index < size )
      memmove(&v9[index + 1], &source[index], 8 * (size - index));
    return v9;
  }
  return result;
}

void __fastcall Scaleform::Render::MeshCacheItem::destroy(
        Scaleform::Render::MeshCacheItem *this,
        Scaleform::Render::MeshBase *pskipMesh,
        bool freeMemory)
{
  Scaleform::Render::MeshCacheListSet *pCacheList; // r10
  unsigned int v5; // esi
  unsigned __int64 *p_Size; // rcx
  Scaleform::Render::MeshCacheItemUseNode *pNext; // rax
  Scaleform::List<Scaleform::Render::MeshCacheItemUseNode,Scaleform::Render::MeshCacheItemUseNode,Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode> > *i; // rcx
  Scaleform::Render::MeshCacheItem::MeshType Type; // eax
  Scaleform::Render::MeshCacheListSet *v12; // rax
  unsigned int j; // edi
  Scaleform::RefCountVImpl *v14; // rcx
  unsigned int k; // ebp
  Scaleform::Render::MeshBase *v16; // rdi
  unsigned __int64 v17; // r8
  volatile int *p_RefCount; // r14
  Scaleform::Render::MeshCacheItem **v19; // rcx
  __int64 v20; // rax
  Scaleform::Render::MeshCacheItem **v21; // rcx
  Scaleform::Render::MeshProvider *v22; // rcx
  Scaleform::RefCountVImpl *v23; // rcx
  Scaleform::Render::MeshBase *v24; // rdx
  Scaleform::Render::MeshProvider *pObject; // rcx
  Scaleform::Render::MeshCacheItem *key; // [rsp+50h] [rbp+8h] BYREF

  pCacheList = this->pCacheList;
  v5 = 0;
  this->pPrev->Scaleform::Render::FenceResource::pNext = this->pNext;
  this->pNext->Scaleform::Render::FenceResource::pPrev = this->pPrev;
  this->pPrev = (Scaleform::Render::MeshCacheItem *)-1i64;
  this->pNext = (Scaleform::Render::MeshCacheItem *)-1i64;
  p_Size = &pCacheList->Slots[this->ListType].Size;
  *p_Size -= this->AllocSize;
  if ( this->Type <= (unsigned int)Mesh_Complex )
  {
    pNext = this->PrimitiveBatches.Root.pNext;
    for ( i = &this->PrimitiveBatches; pNext != (Scaleform::Render::MeshCacheItemUseNode *)i; pNext = pNext->pNext )
      pNext->pMeshItem = 0i64;
    i->Root.pPrev = (Scaleform::Render::MeshCacheItemUseNode *)i;
    this->PrimitiveBatches.Root.pNext = (Scaleform::Render::MeshCacheItemUseNode *)&this->PrimitiveBatches;
  }
  Type = this->Type;
  if ( Type )
  {
    if ( Type == Mesh_Complex )
    {
      v24 = *this->pMeshes;
      if ( v24 != pskipMesh )
      {
        pObject = v24->pProvider.pObject;
        v24[1].pPrev = 0i64;
        if ( pObject )
          ((void (__fastcall *)(Scaleform::Render::MeshProvider *))pObject->OnEvict)(pObject);
      }
    }
  }
  else
  {
    v12 = this->pCacheList;
    key = this;
    Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor>>::RemoveAlt<Scaleform::Render::MeshCacheItem *>(
      &v12->pCache->BatchCacheItemHash,
      &key);
    for ( j = 0; j < this->MeshCount; ++j )
    {
      v14 = (Scaleform::RefCountVImpl *)this->pMeshes[j];
      if ( v14 != (Scaleform::RefCountVImpl *)pskipMesh )
        Scaleform::Render::RenderBuffer::AddRef(v14);
    }
    for ( k = 0; k < this->MeshCount; ++k )
    {
      v16 = this->pMeshes[k];
      if ( v16 != pskipMesh )
      {
        v17 = (unsigned __int64)v16[1].Scaleform::RefCountBase<Scaleform::Render::MeshBase,68>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
        p_RefCount = &v16[1].RefCount;
        if ( v17 <= 2 )
          v19 = (Scaleform::Render::MeshCacheItem **)&v16[1].RefCount;
        else
          v19 = *(Scaleform::Render::MeshCacheItem ***)p_RefCount;
        v20 = 0i64;
        if ( v17 )
        {
          while ( v19[v20] != this )
          {
            if ( ++v20 >= v17 )
              goto LABEL_24;
          }
          if ( v17 <= 2 )
            v21 = (Scaleform::Render::MeshCacheItem **)&v16[1].RefCount;
          else
            v21 = *(Scaleform::Render::MeshCacheItem ***)p_RefCount;
          memmove(&v21[v20], &v21[v20 + 1], 8 * (v17 - v20) - 8);
          if ( --v16[1].Scaleform::RefCountBase<Scaleform::Render::MeshBase,68>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable == (Scaleform::Render::MeshBase_vtbl *)2 )
          {
            *(_OWORD *)p_RefCount = *(_OWORD *)*(_QWORD *)p_RefCount;
            ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
          }
        }
LABEL_24:
        if ( !v16[1].Scaleform::RefCountBase<Scaleform::Render::MeshBase,68>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable
          && !v16->StagingBufferSize )
        {
          v22 = v16->pProvider.pObject;
          if ( v22 )
            v22->OnEvict(v22, v16);
        }
      }
    }
    if ( this->MeshCount )
    {
      do
      {
        v23 = (Scaleform::RefCountVImpl *)this->pMeshes[v5];
        if ( v23 != (Scaleform::RefCountVImpl *)pskipMesh )
          Scaleform::RefCountImpl::Release(v23);
        ++v5;
      }
      while ( v5 < this->MeshCount );
    }
  }
  this->Type = Mesh_Destroyed;
  if ( freeMemory )
  {
    ((void (__fastcall *)(Scaleform::Render::MeshCacheItem *, _QWORD))this->~MeshCacheItem)(this, 0i64);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this);
  }
}

Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *__fastcall Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>::insertSpot(
        Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2> *this,
        unsigned __int64 index)
{
  unsigned __int64 Size; // r9
  Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *v5; // rdi
  Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *inserted; // rax
  unsigned __int64 allocSize; // rsi
  Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *v9; // rax
  Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *v10; // r14

  Size = this->Size;
  if ( this->Size < 2 )
  {
    if ( index < Size )
      memmove(&this->Raw[8 * index + 8], &(&this->AD.pData)[index], 8 * (Size - index));
    v5 = (Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *)&(&this->AD.pData)[index];
    goto LABEL_15;
  }
  if ( this->Size == 2 )
  {
    inserted = Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Render::MeshCacheItem *,2>::allocInsertCopy(
                 this,
                 index,
                 (Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *)&this->8,
                 2ui64,
                 4ui64);
    if ( !inserted )
      return 0i64;
    v5 = &inserted[index];
    this->AD.pData = inserted;
    this->AD.Reserve = 4i64;
  }
  else
  {
    if ( Size < this->AD.Reserve )
    {
      if ( index < Size )
        memmove(&this->AD.pData[index + 1], &this->AD.pData[index], 8 * (Size - index));
      v5 = &this->AD.pData[index];
      goto LABEL_15;
    }
    allocSize = (Size + 4) & 0xFFFFFFFFFFFFFFFCui64;
    v9 = Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Render::MeshCacheItem *,2>::allocInsertCopy(
           this,
           index,
           this->AD.pData,
           Size,
           allocSize);
    v10 = v9;
    if ( !v9 )
      return 0i64;
    v5 = &v9[index];
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->AD.pData);
    this->AD.pData = v10;
    this->AD.Reserve = allocSize;
  }
LABEL_15:
  ++this->Size;
  return v5;
}

void __fastcall Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> >::TableType *pTable; // rdi
  int v10; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> > v11; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v10 = 2;
    v6 = 0i64;
    v11.pTable = 0i64;
    v11.pTable = (Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 24 * v5 + 16, &v10);
    v11.pTable->EntryCount = 0i64;
    v11.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 24i64;
        *(_QWORD *)((char *)v11.pTable + v7 - 8) = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        pTable = this->pTable;
        if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v6) != -2i64 )
        {
          Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor>>::add<Scaleform::Render::MeshCacheItem *>(
            &v11,
            pheapAddr,
            (Scaleform::Render::MeshCacheItem *const *)((char *)&pTable[2] + v6),
            *(unsigned int *)(*(unsigned __int64 *)((char *)&pTable[2].EntryCount + v6) + 52));
          *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v6) = -2i64;
        }
        v6 += 24i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v11.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>>::Clear((Scaleform::HashSetBase<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::AllocatorDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,348>,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> > *)this);
  }
}

