#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_extensions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_graphicsdevice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_graphicsdevice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_events.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_events.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shaderhal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_texture.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_hal.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_meshcache.h"
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

Scaleform::Render::GL::MeshCacheItem * Scaleform::Render::GL::MeshCacheItem::Create(Scaleform::Render::MeshCacheItem::MeshType type, Scaleform::Render::MeshCacheListSet * pcacheList, Scaleform::Render::MeshCacheItem::MeshBaseContent & mc, Scaleform::Render::GL::MeshBuffer * pvb, Scaleform::Render::GL::MeshBuffer * pib, unsigned long long vertexOffset, unsigned long long vertexAllocSize, unsigned long vertexCount, unsigned long long indexOffset, unsigned long long indexAllocSize, unsigned long indexCount); // 0x1405ECBB0
Scaleform::Render::GL::MeshCacheItem::MeshCacheItem(Scaleform::Render::MeshCacheItem::MeshType type, Scaleform::Render::MeshCacheListSet * pcacheList, Scaleform::Render::MeshCacheItem::MeshBaseContent & mc, Scaleform::Render::GL::MeshBuffer * pvb, Scaleform::Render::GL::MeshBuffer * pib, unsigned long long vertexOffset, unsigned long long vertexAllocSize, unsigned long vertexCount, unsigned long long indexOffset, unsigned long long indexAllocSize, unsigned long indexCount); // 0x1405EC2E0
Scaleform::Render::GL::MeshBuffer::~MeshBuffer(); // 0x1405EC3A0
bool Scaleform::Render::GL::MeshBuffer::DoMap(unsigned long long offset, unsigned long long size); // 0x1405ECEA0
unsigned char * Scaleform::Render::GL::MeshBuffer::GetBufferBase(); // 0x1405ED400
bool Scaleform::Render::GL::MeshBuffer::allocBuffer(); // 0x1405EDD80
Scaleform::Render::GL::MeshCache::MeshCache(Scaleform::MemoryHeap * pheap, const Scaleform::Render::MeshCacheParams & params); // 0x1405EC0D0
Scaleform::Render::GL::MeshCache::~MeshCache(); // 0x1405EC450
bool Scaleform::Render::GL::MeshCache::Initialize(Scaleform::Render::GL::HAL * phal); // 0x1405ED570
void Scaleform::Render::GL::MeshCache::Reset(bool lost); // 0x1405ED930
void Scaleform::Render::GL::MeshCache::ClearCache(); // 0x1405ECA50
void Scaleform::Render::GL::MeshCache::destroyBuffers(Scaleform::Render::MeshBuffer::AllocType at, bool lost); // 0x1405EE640
bool Scaleform::Render::GL::MeshCache::SetParams(const Scaleform::Render::MeshCacheParams & argParams); // 0x1405EDA00
void Scaleform::Render::GL::MeshCache::destroyPendingBuffers(bool lost); // 0x1405EE6C0
void Scaleform::Render::GL::MeshCache::EndFrame(); // 0x1405ED060
bool Scaleform::Render::GL::MeshCache::allocCacheBuffers(unsigned long long size, Scaleform::Render::MeshBuffer::AllocType type, unsigned long arena); // 0x1405EE1E0
bool Scaleform::Render::GL::MeshCache::createMaskEraseBatchVertexBuffer(); // 0x1405EE340
bool Scaleform::Render::GL::MeshCache::LockBuffers(); // 0x1405ED740
void Scaleform::Render::GL::MeshCache::UnlockBuffers(); // 0x1405EDB90
bool Scaleform::Render::GL::MeshCache::evictMeshesInBuffer(Scaleform::Render::MeshCacheListSet::ListSlot * plist, unsigned long long count, Scaleform::Render::GL::MeshBuffer * pbuffer); // 0x1405EE860
unsigned long long Scaleform::Render::GL::MeshCache::Evict(Scaleform::Render::MeshCacheItem * pbatch, Scaleform::AllocAddr * pallocator, Scaleform::Render::MeshBase * pskipMesh); // 0x1405ED240
bool Scaleform::Render::GL::MeshCache::allocBuffer(unsigned long long * poffset, Scaleform::Render::GL::MeshBuffer * * pbuffer, Scaleform::Render::GL::MeshBufferSet & mbs, unsigned long long size, bool waitForCache); // 0x1405EDEF0
Scaleform::Render::MeshCache::AllocResult Scaleform::Render::GL::MeshCache::AllocCacheItem(Scaleform::Render::MeshCacheItem * * pdata, Scaleform::Render::MeshCacheItem::MeshType meshType, Scaleform::Render::MeshCacheItem::MeshBaseContent & mc, unsigned long long vertexBufferSize, unsigned long vertexCount, unsigned long indexCount, bool waitForCache, const Scaleform::Render::VertexFormat * __formal); // 0x1405EC760
void Scaleform::Render::GL::MeshCache::LockMeshCacheItem(Scaleform::Render::MeshCacheItem * pdataIn, unsigned char * * pvertexDataStart, unsigned short * * pindexDataStart); // 0x1405ED770
void Scaleform::Render::GL::MeshCache::GetStats(Scaleform::Render::MeshCache::Stats * stats); // 0x1405ED450void __fastcall Scaleform::Render::GL::MeshBuffer::MeshBuffer(
        Scaleform::Render::GL::MeshBuffer *this,
        Scaleform::Render::GL::HAL *phal,
        unsigned int btype,
        unsigned __int64 size,
        Scaleform::Render::MeshBuffer::AllocType type,
        unsigned int arena)
{
  Scaleform::Render::GL::HALGLBuffer *v8; // rax
  Scaleform::Render::GL::HALGLBuffer *v9; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx

  this->pPrev = (Scaleform::Render::MeshBuffer *)-1i64;
  this->pNext = (Scaleform::Render::MeshBuffer *)-1i64;
  this->Arena = arena;
  this->Scaleform::Render::MeshBuffer::Type = type;
  this->Size = size;
  this->pData = 0i64;
  this->MeshBufferUpdates.Data.Data = 0i64;
  this->MeshBufferUpdates.Data.Size = 0i64;
  this->MeshBufferUpdates.Data.Policy.Capacity = 0i64;
  this->__vftable = (Scaleform::Render::GL::MeshBuffer_vtbl *)&Scaleform::Render::GL::MeshBuffer::`vftable';
  this->Buffer.pObject = 0i64;
  this->pHal = phal;
  v8 = (Scaleform::Render::GL::HALGLBuffer *)Scaleform::Memory::pGlobalHeap->Alloc(
                                               Scaleform::Memory::pGlobalHeap,
                                               40i64,
                                               0i64);
  v9 = v8;
  if ( v8 )
  {
    v8->Name = 0;
    v8->__vftable = (Scaleform::Render::GL::HALGLBuffer_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    v8->__vftable = (Scaleform::Render::GL::HALGLBuffer_vtbl *)&Scaleform::Render::GL::HALGLBuffer::`vftable';
    v8->RefCount = 1;
    v8->Size = 0i64;
    v8->Usage = 0;
  }
  else
  {
    v9 = 0i64;
  }
  pObject = (Scaleform::RefCountVImpl *)this->Buffer.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->Buffer.pObject = v9;
  this->BufferData = 0i64;
  this->pNextLock = 0i64;
  this->Type = btype;
}

void __fastcall Scaleform::Render::GL::MeshCache::MeshCache(
        Scaleform::Render::GL::MeshCache *this,
        Scaleform::MemoryHeap *pheap,
        const Scaleform::Render::MeshCacheParams *params)
{
  Scaleform::Render::MeshCacheListSet::ListSlot *Slots; // rax
  __int64 v7; // rdx
  Scaleform::Render::MeshCacheItem *p_Size; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 MemGranularity; // rbx
  unsigned __int64 v13; // rbx

  Scaleform::Render::MeshCache::MeshCache(this, pheap, params);
  this->Scaleform::Render::MeshCache::Scaleform::Render::CacheBase::__vftable = (Scaleform::Render::GL::MeshCache_vtbl *)&Scaleform::Render::GL::MeshCache::`vftable'{for `Scaleform::Render::CacheBase'};
  this->Scaleform::Render::MeshCache::Scaleform::Render::MeshCacheConfig::__vftable = (Scaleform::Render::MeshCacheConfig_vtbl *)&Scaleform::Render::GL::MeshCache::`vftable'{for `Scaleform::Render::MeshCacheConfig'};
  Slots = this->CacheList.Slots;
  this->pHal = 0i64;
  this->CacheList.pCache = this;
  v7 = 6i64;
  do
  {
    p_Size = (Scaleform::Render::MeshCacheItem *)&Slots[-1].Size;
    if ( !Slots )
      p_Size = 0i64;
    Slots->Root.pPrev = p_Size;
    Slots->Root.pNext = p_Size;
    Slots->Size = 0i64;
    ++Slots;
    --v7;
  }
  while ( v7 );
  v9 = params->MemGranularity >> 4;
  this->VertexBuffers.BufferType = 34962;
  this->VertexBuffers.Buffers.Data.Data = 0i64;
  this->VertexBuffers.Buffers.Data.Size = 0i64;
  this->VertexBuffers.Buffers.Data.Policy.Capacity = 0i64;
  v10 = 16 * (5 * v9 / 9);
  Scaleform::AllocAddr::AllocAddr(&this->VertexBuffers.Allocator, pheap);
  this->VertexBuffers.Granularity = v10;
  this->VertexBuffers.TotalSize = 0i64;
  v11 = v10;
  MemGranularity = params->MemGranularity;
  this->IndexBuffers.BufferType = 34963;
  this->IndexBuffers.Buffers.Data.Data = 0i64;
  v13 = (MemGranularity & 0xFFFFFFFFFFFFFFF0ui64) - (v11 & 0xFFFFFFFFFFFFFFF0ui64);
  this->IndexBuffers.Buffers.Data.Size = 0i64;
  this->IndexBuffers.Buffers.Data.Policy.Capacity = 0i64;
  Scaleform::AllocAddr::AllocAddr(&this->IndexBuffers.Allocator, pheap);
  this->IndexBuffers.Granularity = v13;
  this->IndexBuffers.TotalSize = 0i64;
  this->UseSeparateIndexBuffers = 0;
  this->BufferUpdate = BufferUpdate_MapBufferUnsynchronized;
  this->Mapped = 0;
  this->VBSizeEvictedInMap = 0i64;
  this->MappedBuffers.pFirst = 0i64;
  this->ChunkBuffers.Root.pPrev = (Scaleform::Render::MeshBuffer *)&this->MappedBuffers;
  this->ChunkBuffers.Root.pNext = (Scaleform::Render::MeshBuffer *)&this->MappedBuffers;
  this->PendingDestructionBuffers.Root.pPrev = (Scaleform::Render::MeshBuffer *)&this->ChunkBuffers.Root.8;
  this->PendingDestructionBuffers.Root.pNext = (Scaleform::Render::MeshBuffer *)&this->ChunkBuffers.Root.8;
  this->MaskEraseBatchVertexBuffer.__vftable = (Scaleform::Render::GL::HALGLBuffer_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->MaskEraseBatchVertexBuffer.__vftable = (Scaleform::Render::GL::HALGLBuffer_vtbl *)&Scaleform::Render::GL::HALGLBuffer::`vftable';
  this->MaskEraseBatchVertexBuffer.RefCount = 1;
  this->MaskEraseBatchVertexBuffer.Name = 0;
  this->MaskEraseBatchVertexBuffer.Size = 0i64;
  this->MaskEraseBatchVertexBuffer.Usage = 0;
  this->MaskEraseBatchVAO.__vftable = (Scaleform::Render::GL::HALGLVertexArray_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->MaskEraseBatchVAO.__vftable = (Scaleform::Render::GL::HALGLVertexArray_vtbl *)&Scaleform::Render::GL::HALGLVertexArray::`vftable';
  this->MaskEraseBatchVAO.RefCount = 1;
  this->MaskEraseBatchVAO.Name = 0;
  this->MaskEraseBatchVAO.BindingIndexerBuffers.mHash.pTable = 0i64;
}

void __fastcall Scaleform::Render::GL::MeshCacheItem::MeshCacheItem(
        Scaleform::Render::GL::MeshCacheItem *this,
        Scaleform::Render::MeshCacheItem::MeshType type,
        Scaleform::Render::MeshCacheListSet *pcacheList,
        Scaleform::Render::MeshCacheItem::MeshBaseContent *mc,
        Scaleform::Render::GL::MeshBuffer *pvb,
        Scaleform::Render::GL::MeshBuffer *pib,
        unsigned __int64 vertexOffset,
        unsigned __int64 vertexAllocSize,
        unsigned int vertexCount,
        unsigned __int64 indexOffset,
        unsigned __int64 indexAllocSize,
        unsigned int indexCount)
{
  Scaleform::Render::MeshCacheItem::MeshCacheItem(
    this,
    type,
    pcacheList,
    mc,
    0xB0ui64,
    vertexAllocSize + indexAllocSize,
    vertexCount,
    indexCount);
  this->VBAllocSize = vertexAllocSize;
  this->__vftable = (Scaleform::Render::GL::MeshCacheItem_vtbl *)&Scaleform::Render::GL::MeshCacheItem::`vftable';
  this->pVertexBuffer = pvb;
  this->pIndexBuffer = pib;
  this->VBAllocOffset = vertexOffset;
  this->IBAllocOffset = indexOffset;
  this->IBAllocSize = indexAllocSize;
  this->VAO.pObject = 0i64;
  this->VAOFormat = 0i64;
  this->VAOOffset = 0i64;
}

void __fastcall Scaleform::Render::GL::MeshBuffer::~MeshBuffer(Scaleform::Render::GL::MeshBuffer *this)
{
  bool v1; // zf
  Scaleform::Render::GL::GraphicsDevice *v3; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx

  v1 = this->Buffer.pObject == 0i64;
  this->__vftable = (Scaleform::Render::GL::MeshBuffer_vtbl *)&Scaleform::Render::GL::MeshBuffer::`vftable';
  if ( !v1 )
  {
    v3 = this->pHal->GetGraphicsDevice(this->pHal);
    v3->glDeleteBuffers(v3, 1, &this->Buffer.pObject);
  }
  if ( this->BufferData )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  pObject = (Scaleform::RefCountVImpl *)this->Buffer.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->Buffer.pObject = 0i64;
  this->BufferData = 0i64;
  v5 = (Scaleform::RefCountVImpl *)this->Buffer.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  this->__vftable = (Scaleform::Render::GL::MeshBuffer_vtbl *)&Scaleform::Render::MeshBuffer::`vftable';
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->MeshBufferUpdates.Data.Data);
}

void __fastcall Scaleform::Render::GL::MeshCache::~MeshCache(Scaleform::Render::GL::MeshCache *this)
{
  this->Scaleform::Render::MeshCache::Scaleform::Render::CacheBase::__vftable = (Scaleform::Render::GL::MeshCache_vtbl *)&Scaleform::Render::GL::MeshCache::`vftable'{for `Scaleform::Render::CacheBase'};
  this->Scaleform::Render::MeshCache::Scaleform::Render::MeshCacheConfig::__vftable = (Scaleform::Render::MeshCacheConfig_vtbl *)&Scaleform::Render::GL::MeshCache::`vftable'{for `Scaleform::Render::MeshCacheConfig'};
  Scaleform::Render::GL::MeshCache::Reset(this, 0);
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>((Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->MaskEraseBatchVAO.BindingIndexerBuffers);
  Scaleform::RefCountImplCore::~RefCountImplCore(&this->MaskEraseBatchVAO);
  Scaleform::RefCountImplCore::~RefCountImplCore(&this->MaskEraseBatchVertexBuffer);
  Scaleform::AllocAddr::~AllocAddr(&this->IndexBuffers.Allocator);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->IndexBuffers.Buffers.Data.Data);
  Scaleform::AllocAddr::~AllocAddr(&this->VertexBuffers.Allocator);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->VertexBuffers.Buffers.Data.Data);
  Scaleform::Render::MeshCache::~MeshCache(this);
}

bool __fastcall Scaleform::Render::GL::MeshBufferSet::Alloc(
        Scaleform::Render::GL::MeshBufferSet *this,
        unsigned __int64 size,
        Scaleform::Render::GL::MeshBuffer **pbuffer,
        unsigned __int64 *poffset)
{
  unsigned __int64 v7; // rdx
  bool result; // al

  v7 = Scaleform::AllocAddr::Alloc(&this->Allocator, (size + 15) >> 4);
  if ( v7 == -1i64 )
    return 0;
  result = 1;
  *pbuffer = this->Buffers.Data.Data[v7 >> 24];
  *poffset = 16 * (v7 & 0xFFFFFF);
  return result;
}

__int64 __fastcall Scaleform::Render::GL::MeshCache::AllocCacheItem(
        Scaleform::Render::GL::MeshCache *this,
        Scaleform::Render::MeshCacheItem **pdata,
        Scaleform::Render::MeshCacheItem::MeshType meshType,
        Scaleform::Render::MeshCacheItem::MeshBaseContent *mc,
        unsigned __int64 vertexBufferSize,
        unsigned int vertexCount,
        unsigned int indexCount,
        bool waitForCache)
{
  unsigned __int64 v12; // rbx
  bool v13; // r15
  Scaleform::Render::GL::MeshBuffer *v14; // r14
  unsigned int v15; // edi
  bool v16; // al
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 i; // rax
  Scaleform::Render::GL::MeshBuffer *v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r10
  unsigned int v24; // ebp
  unsigned __int64 size; // rdi
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  Scaleform::Render::GL::MeshBuffer *v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int8 v30; // al
  Scaleform::Render::GL::MeshCacheItem *v31; // rax
  unsigned __int64 v32; // [rsp+60h] [rbp-58h] BYREF
  Scaleform::Render::GL::MeshBuffer *pib; // [rsp+68h] [rbp-50h] BYREF
  Scaleform::Render::GL::MeshBuffer *pbuffer; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 poffset; // [rsp+C0h] [rbp+8h] BYREF
  Scaleform::Render::MeshCacheItem **v36; // [rsp+C8h] [rbp+10h]

  v36 = pdata;
  if ( !this->AreBuffersMapped(this) && !this->LockBuffers(this) )
    return 4i64;
  v12 = 0i64;
  v13 = waitForCache;
  v14 = 0i64;
  v15 = 0;
  poffset = 0i64;
  v32 = 0i64;
  pbuffer = 0i64;
  pib = 0i64;
  v16 = Scaleform::Render::GL::MeshCache::allocBuffer(
          this,
          &poffset,
          &pbuffer,
          &this->VertexBuffers,
          vertexBufferSize,
          waitForCache);
  v17 = poffset;
  if ( !v16 )
  {
    v18 = this->VertexBuffers.Buffers.Data.Size;
    v19 = 0i64;
    for ( i = 0i64; i < v18; ++i )
    {
      v21 = this->VertexBuffers.Buffers.Data.Data[i];
      if ( v21 )
      {
        v22 = v21->Size;
        v23 = vertexBufferSize;
        if ( v22 > vertexBufferSize )
          goto LABEL_12;
        if ( v22 > v19 )
          v19 = v22;
      }
    }
    v23 = vertexBufferSize;
    v15 = 1;
    goto LABEL_12;
  }
  size = 2i64 * indexCount;
  if ( !Scaleform::Render::GL::MeshCache::allocBuffer(this, &v32, &pib, &this->IndexBuffers, size, v13) )
  {
    v26 = this->IndexBuffers.Buffers.Data.Size;
    v27 = 0i64;
    if ( !v26 )
    {
LABEL_25:
      v30 = 0;
      goto LABEL_26;
    }
    while ( 1 )
    {
      v28 = this->IndexBuffers.Buffers.Data.Data[v27];
      if ( v28 )
      {
        v29 = v28->Size;
        if ( v29 > size )
        {
          v30 = 1;
LABEL_26:
          v12 = v32;
          v14 = pib;
          v23 = vertexBufferSize;
          v17 = poffset;
          v15 = v30 ^ 1;
LABEL_12:
          v24 = indexCount;
$handle_alloc_fail:
          if ( pbuffer )
            Scaleform::AllocAddr::Free(
              &this->VertexBuffers.Allocator,
              (v17 >> 4) | (pbuffer->Index << 24),
              (v23 + 15) >> 4);
          if ( v14 )
            Scaleform::AllocAddr::Free(
              &this->IndexBuffers.Allocator,
              (v12 >> 4) | (v14->Index << 24),
              (2 * (unsigned __int64)v24 + 15) >> 4);
          return v15;
        }
        if ( v29 > v12 )
          v12 = v29;
      }
      if ( ++v27 >= v26 )
        goto LABEL_25;
    }
  }
  v12 = v32;
  v24 = indexCount;
  v14 = pib;
  v31 = Scaleform::Render::GL::MeshCacheItem::Create(
          meshType,
          &this->CacheList,
          mc,
          pbuffer,
          pib,
          (unsigned int)poffset,
          vertexBufferSize,
          vertexCount,
          (unsigned int)v32,
          size,
          indexCount);
  *v36 = v31;
  if ( !v31 )
  {
    v23 = vertexBufferSize;
    v15 = 4;
    v17 = poffset;
    goto $handle_alloc_fail;
  }
  return 3i64;
}

_BOOL8 __fastcall Scaleform::Render::GL::MeshCache::AreBuffersMapped(Scaleform::Render::GL::MeshCache *this)
{
  return this->Mapped;
}

void __fastcall Scaleform::Render::GL::MeshCache::ClearCache(Scaleform::Render::GL::MeshCache *this)
{
  Scaleform::Render::GL::MeshBuffer **i; // rdi
  __int64 v3; // rsi
  Scaleform::Render::GL::MeshBuffer **j; // rdi
  __int64 v5; // rsi
  unsigned __int64 *p_VBSizeEvictedInMap; // rax

  Scaleform::Render::MeshCacheListSet::EvictAll((Scaleform::Render::MeshCacheListSet *)&this->pHal);
  for ( i = 0i64; i < this->VertexBuffers.Buffers.Data.Data; i = (Scaleform::Render::GL::MeshBuffer **)((char *)i + 1) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)&this->VertexBuffers.BufferType + 8i64 * (_QWORD)i);
    if ( v3 && *(_DWORD *)(v3 + 28) == 2 )
    {
      Scaleform::AllocAddr::RemoveSegment(
        (Scaleform::AllocAddr *)&this->VertexBuffers.Buffers.Data.Policy,
        *(_QWORD *)(v3 + 104) << 24,
        (unsigned __int64)(*(_QWORD *)(v3 + 32) + 15i64) >> 4);
      this->VertexBuffers.Granularity -= *(_QWORD *)(v3 + 32);
      *(_QWORD *)(*(_QWORD *)&this->VertexBuffers.BufferType + 8i64 * *(_QWORD *)(v3 + 104)) = 0i64;
      (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1i64);
    }
  }
  for ( j = 0i64; j < this->IndexBuffers.Buffers.Data.Data; j = (Scaleform::Render::GL::MeshBuffer **)((char *)j + 1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)&this->IndexBuffers.BufferType + 8i64 * (_QWORD)j);
    if ( v5 && *(_DWORD *)(v5 + 28) == 2 )
    {
      Scaleform::AllocAddr::RemoveSegment(
        (Scaleform::AllocAddr *)&this->IndexBuffers.Buffers.Data.Policy,
        *(_QWORD *)(v5 + 104) << 24,
        (unsigned __int64)(*(_QWORD *)(v5 + 32) + 15i64) >> 4);
      this->IndexBuffers.Granularity -= *(_QWORD *)(v5 + 32);
      *(_QWORD *)(*(_QWORD *)&this->IndexBuffers.BufferType + 8i64 * *(_QWORD *)(v5 + 104)) = 0i64;
      (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1i64);
    }
  }
  p_VBSizeEvictedInMap = &this->VBSizeEvictedInMap;
  if ( this == (Scaleform::Render::GL::MeshCache *)-504i64 )
    p_VBSizeEvictedInMap = 0i64;
  this->MappedBuffers.pFirst = (Scaleform::Render::GL::MeshBuffer *)p_VBSizeEvictedInMap;
  this->ChunkBuffers.Root.pPrev = (Scaleform::Render::MeshBuffer *)p_VBSizeEvictedInMap;
  Scaleform::Render::MeshStagingBuffer::Reset((Scaleform::Render::MeshStagingBuffer *)&this->Params.MaxIndicesInBatch);
  Scaleform::Render::MeshStagingBuffer::Initialize(
    (Scaleform::Render::MeshStagingBuffer *)&this->Params.MaxIndicesInBatch,
    (Scaleform::MemoryHeap *)this->Scaleform::Render::MeshCache::Scaleform::Render::MeshCacheConfig::__vftable,
    this->Params.LRUTailSize);
}

void __fastcall Scaleform::Render::GL::MeshCacheItem::Create(
        Scaleform::Render::MeshCacheItem::MeshType type,
        Scaleform::Render::MeshCacheListSet *pcacheList,
        Scaleform::Render::MeshCacheItem::MeshBaseContent *mc,
        Scaleform::Render::GL::MeshBuffer *pvb,
        Scaleform::Render::GL::MeshBuffer *pib,
        unsigned __int64 vertexOffset,
        unsigned __int64 vertexAllocSize,
        unsigned int vertexCount,
        unsigned __int64 indexOffset,
        unsigned __int64 indexAllocSize,
        unsigned int indexCount)
{
  Scaleform::MemoryHeap *v15; // rax
  Scaleform::Render::GL::MeshCacheItem *v16; // r10

  v15 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, pcacheList->pCache);
  v16 = (Scaleform::Render::GL::MeshCacheItem *)Scaleform::Render::MeshCacheItem::alloc(v15, 0xB0ui64, mc);
  if ( v16 )
    Scaleform::Render::GL::MeshCacheItem::MeshCacheItem(
      v16,
      type,
      pcacheList,
      mc,
      pvb,
      pib,
      vertexOffset,
      vertexAllocSize,
      vertexCount,
      indexOffset,
      indexAllocSize,
      indexCount);
}

Scaleform::Render::GL::MeshBuffer *__fastcall Scaleform::Render::GL::MeshBufferSet::CreateBuffer(
        Scaleform::Render::GL::MeshBufferSet *this,
        unsigned __int64 size,
        Scaleform::Render::MeshBuffer::AllocType type,
        unsigned int arena,
        Scaleform::MemoryHeap *pheap,
        Scaleform::Render::GL::HAL *phal)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  Scaleform::Render::GL::MeshBuffer **Data; // rax
  unsigned __int64 v13; // rbp
  Scaleform::Render::GL::MeshBuffer *v14; // rax
  Scaleform::Render::GL::MeshBuffer *v15; // rax
  Scaleform::Render::GL::MeshBuffer *v16; // rsi
  Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *p_Buffers; // rbx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  Scaleform::Render::GL::MeshBuffer **v21; // rcx

  v7 = 0i64;
  v8 = this->Buffers.Data.Size;
  if ( v8 )
  {
    Data = this->Buffers.Data.Data;
    do
    {
      if ( !*Data )
        break;
      ++v7;
      ++Data;
    }
    while ( v7 < v8 );
    if ( v7 == 256 )
      return 0i64;
  }
  v13 = (size + 15) & 0xFFFFFFFFFFFFFFF0ui64;
  v14 = (Scaleform::Render::GL::MeshBuffer *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))pheap->Alloc)(
                                               pheap,
                                               120i64);
  if ( !v14 )
    return 0i64;
  Scaleform::Render::GL::MeshBuffer::MeshBuffer(v14, phal, this->BufferType, v13, type, arena);
  v16 = v15;
  if ( !v15 )
    return 0i64;
  if ( Scaleform::Render::GL::MeshBuffer::allocBuffer(v15) )
  {
    v16->Index = v7;
    Scaleform::AllocAddr::AddSegment(&this->Allocator, v7 << 24, v13 >> 4);
    this->TotalSize += v13;
    if ( v7 != this->Buffers.Data.Size )
    {
      this->Buffers.Data.Data[v7] = v16;
      return v16;
    }
    p_Buffers = (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)&this->Buffers;
    v18 = this->Buffers.Data.Size + 1;
    if ( v18 >= p_Buffers->Size )
    {
      if ( v18 <= p_Buffers->Policy.Capacity )
        goto LABEL_20;
      v19 = v18 + (v18 >> 2);
    }
    else
    {
      if ( v18 >= p_Buffers->Policy.Capacity >> 1 )
        goto LABEL_20;
      v19 = v18;
    }
    Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      p_Buffers,
      p_Buffers,
      v19);
LABEL_20:
    v20 = (__int64)(p_Buffers->Data - 1);
    p_Buffers->Size = v18;
    v21 = (Scaleform::Render::GL::MeshBuffer **)(v20 + 8 * v18);
    if ( v21 )
    {
      *v21 = v16;
      return v16;
    }
    return v16;
  }
  ((void (__fastcall *)(Scaleform::Render::GL::MeshBuffer *, __int64))v16->~MeshBuffer)(v16, 1i64);
  return 0i64;
}

void __fastcall Scaleform::Render::GL::MeshBufferSet::DestroyBuffers(
        Scaleform::Render::GL::MeshBufferSet *this,
        Scaleform::Render::MeshBuffer::AllocType type,
        bool lost)
{
  unsigned __int64 i; // rdi
  Scaleform::Render::GL::MeshBuffer *v7; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  for ( i = 0i64; i < this->Buffers.Data.Size; ++i )
  {
    v7 = this->Buffers.Data.Data[i];
    if ( v7 && (type == AT_None || v7->Scaleform::Render::MeshBuffer::Type == type) )
    {
      Scaleform::AllocAddr::RemoveSegment(&this->Allocator, v7->Index << 24, (v7->Size + 15) >> 4);
      this->TotalSize -= v7->Size;
      this->Buffers.Data.Data[v7->Index] = 0i64;
      if ( lost )
      {
        pObject = (Scaleform::RefCountVImpl *)v7->Buffer.pObject;
        if ( pObject )
          Scaleform::RefCountImpl::Release(pObject);
        v7->Buffer.pObject = 0i64;
      }
      ((void (__fastcall *)(Scaleform::Render::GL::MeshBuffer *, __int64))v7->~MeshBuffer)(v7, 1i64);
    }
  }
}

bool __fastcall Scaleform::Render::GL::MeshBuffer::DoMap(
        Scaleform::Render::GL::MeshBuffer *this,
        unsigned __int64 offset,
        unsigned __int64 size)
{
  Scaleform::Render::MeshCache *v6; // rax
  int v7; // eax
  int v8; // edi
  unsigned __int8 *BufferData; // rax
  Scaleform::Render::GL::GraphicsDevice *v10; // rax
  Scaleform::Render::GL::GraphicsDevice *v11; // rax
  Scaleform::Render::GL::GraphicsDevice *v12; // rax
  Scaleform::Render::GL::GraphicsDevice *v13; // rax
  bool v14; // zf
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry *Data; // rax
  Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry *v19; // rdx
  __int128 v21; // [rsp+30h] [rbp-28h]

  v6 = this->pHal->GetMeshCache(this->pHal);
  v7 = ((__int64 (__fastcall *)(Scaleform::Render::MeshCache *))v6->Scaleform::Render::CacheBase::__vftable[1].UnlockBuffers)(v6);
  v8 = v7;
  if ( this->pData )
  {
LABEL_14:
    if ( v8 != 3 && v8 )
    {
LABEL_24:
      v14 = this->pData == 0i64;
      return !v14;
    }
    v15 = this->MeshBufferUpdates.Data.Size;
    *((_QWORD *)&v21 + 1) = size;
    *(_QWORD *)&v21 = offset;
    v16 = v15 + 1;
    if ( v15 + 1 >= v15 )
    {
      if ( v16 <= this->MeshBufferUpdates.Data.Policy.Capacity )
        goto LABEL_22;
      v17 = v16 + (v16 >> 2);
    }
    else
    {
      if ( v16 >= this->MeshBufferUpdates.Data.Policy.Capacity >> 1 )
        goto LABEL_22;
      v17 = v15 + 1;
    }
    Scaleform::ArrayDataBase<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,Scaleform::AllocatorLH<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,68>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
      &this->MeshBufferUpdates.Data,
      &this->MeshBufferUpdates,
      v17);
LABEL_22:
    Data = this->MeshBufferUpdates.Data.Data;
    this->MeshBufferUpdates.Data.Size = v16;
    v19 = &Data[v16 - 1];
    if ( v19 )
    {
      *(_OWORD *)&v19->Offset = v21;
      v19->Data = 0i64;
    }
    goto LABEL_24;
  }
  if ( (v7 & 0xFFFFFFFD) != 0 )
  {
    if ( !this->BufferData )
      this->BufferData = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Alloc(
                                              Scaleform::Memory::pGlobalHeap,
                                              this->Size,
                                              0i64);
    BufferData = this->BufferData;
  }
  else
  {
    if ( Scaleform::Render::GL::HAL::ShouldUseVAOs(this->pHal) )
    {
      v10 = this->pHal->GetGraphicsDevice(this->pHal);
      v10->glBindVertexArray(v10, 0i64);
    }
    v11 = this->pHal->GetGraphicsDevice(this->pHal);
    v11->glBindBuffer(v11, this->Type, this->Buffer.pObject);
    if ( v8 )
    {
      if ( v8 != 2 )
        goto LABEL_13;
      v13 = this->pHal->GetGraphicsDevice(this->pHal);
      BufferData = (unsigned __int8 *)v13->glMapBuffer(v13, this->Type, 35001u);
    }
    else
    {
      v12 = this->pHal->GetGraphicsDevice(this->pHal);
      BufferData = (unsigned __int8 *)v12->glMapBufferRange(v12, this->Type, 0i64, this->Size, 50u);
    }
  }
  this->pData = BufferData;
LABEL_13:
  v14 = this->pData == 0i64;
  if ( this->pData )
    goto LABEL_14;
  return !v14;
}

void __fastcall Scaleform::Render::GL::MeshCache::EndFrame(Scaleform::Render::GL::MeshCache *this)
{
  unsigned __int64 LRUTailSize; // rcx
  signed __int64 v3; // r15
  Scaleform::List<Scaleform::Render::MeshBuffer,Scaleform::Render::MeshBuffer,Scaleform::ListNode<Scaleform::Render::MeshBuffer> > *p_ChunkBuffers; // r14
  Scaleform::Render::MeshBuffer *p_MappedBuffers; // rax
  Scaleform::Render::GL::MeshBuffer *pPrev; // rbx
  __int64 v7; // rsi
  char *v8; // rsi
  bool v9; // di

  Scaleform::Render::MeshCacheListSet::EndFrame(&this->CacheList);
  Scaleform::Render::MeshCacheListSet::EvictPendingFree(&this->CacheList, &this->IndexBuffers.Allocator, 0);
  Scaleform::Render::MeshCacheListSet::EvictPendingFree(&this->CacheList, &this->VertexBuffers.Allocator, 0);
  Scaleform::Render::GL::MeshCache::destroyPendingBuffers(this, 0);
  LRUTailSize = this->Params.LRUTailSize;
  if ( this->CacheList.Slots[4].Size < LRUTailSize )
    LRUTailSize = this->CacheList.Slots[4].Size;
  v3 = this->VertexBuffers.TotalSize
     + this->IndexBuffers.TotalSize
     - ((this->CacheList.Slots[3].Size + LRUTailSize) >> 2)
     - (this->CacheList.Slots[3].Size
      + LRUTailSize);
  if ( v3 > (signed __int64)this->Params.MemGranularity )
  {
    p_ChunkBuffers = &this->ChunkBuffers;
    while ( 1 )
    {
      p_MappedBuffers = (Scaleform::Render::MeshBuffer *)&this->MappedBuffers;
      if ( this == (Scaleform::Render::GL::MeshCache *)-512i64 )
        p_MappedBuffers = 0i64;
      if ( this->ChunkBuffers.Root.pNext == p_MappedBuffers || v3 <= (signed __int64)this->Params.MemGranularity )
        break;
      pPrev = (Scaleform::Render::GL::MeshBuffer *)p_ChunkBuffers->Root.pPrev;
      v7 = 408i64;
      p_ChunkBuffers->Root.pPrev->pPrev->pNext = p_ChunkBuffers->Root.pPrev->pNext;
      pPrev->pNext->Scaleform::Render::MeshBuffer::pPrev = pPrev->pPrev;
      pPrev->pPrev = (Scaleform::Render::MeshBuffer *)-1i64;
      pPrev->pNext = (Scaleform::Render::MeshBuffer *)-1i64;
      v3 -= pPrev->Size;
      if ( pPrev->Type == 34962 )
        v7 = 336i64;
      v8 = (char *)this + v7;
      v9 = Scaleform::Render::GL::MeshCache::evictMeshesInBuffer(this, this->CacheList.Slots, 6ui64, pPrev);
      Scaleform::AllocAddr::RemoveSegment(
        (Scaleform::AllocAddr *)(v8 + 32),
        pPrev->Index << 24,
        (pPrev->Size + 15) >> 4);
      *((_QWORD *)v8 + 8) -= pPrev->Size;
      *(_QWORD *)(*((_QWORD *)v8 + 1) + 8 * pPrev->Index) = 0i64;
      if ( v9 )
      {
        ((void (__fastcall *)(Scaleform::Render::GL::MeshBuffer *, __int64))pPrev->~MeshBuffer)(pPrev, 1i64);
      }
      else
      {
        pPrev->pPrev = this->PendingDestructionBuffers.Root.pPrev;
        pPrev->pNext = (Scaleform::Render::MeshBuffer *)&this->ChunkBuffers.Root.8;
        this->PendingDestructionBuffers.Root.pPrev->pNext = pPrev;
        this->PendingDestructionBuffers.Root.pPrev = pPrev;
      }
    }
  }
}

unsigned __int64 __fastcall Scaleform::Render::GL::MeshCache::Evict(
        Scaleform::Render::GL::MeshCache *this,
        Scaleform::Render::MeshCacheItem *pbatch,
        Scaleform::AllocAddr *pallocator,
        Scaleform::Render::MeshBase *pskipMesh)
{
  Scaleform::Render::Fence *pObject; // rax
  Scaleform::Render::MeshCacheItem_vtbl *v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  Scaleform::Render::MeshCacheItem *pPrev; // rdx
  Scaleform::Render::GL::GraphicsDevice *v14; // rax

  pObject = pbatch->GPUFence.pObject;
  if ( pObject && pObject->HasData && pObject->Data && Scaleform::Render::FenceImpl::IsPending(pObject->Data, 0i64) )
  {
    Scaleform::Render::MeshCacheItem::destroy(pbatch, pskipMesh, 0);
    pbatch->ListType = MCL_PendingFree;
    pbatch->pNext = this->CacheList.Slots[5].Root.pNext;
    pbatch->pPrev = (Scaleform::Render::MeshCacheItem *)&this->CacheList.Slots[4].Size;
    this->CacheList.Slots[5].Root.pNext->pPrev = pbatch;
    this->CacheList.Slots[5].Root.pNext = pbatch;
    this->CacheList.Slots[5].Size += pbatch->AllocSize;
    return 0i64;
  }
  else
  {
    v10 = pbatch[1].__vftable;
    v11 = 0i64;
    if ( v10 )
      v12 = 16
          * Scaleform::AllocAddr::Free(
              &this->VertexBuffers.Allocator,
              ((unsigned __int64)pbatch[1].pNext >> 4) | ((__int64)v10[13].~MeshCacheItem << 24),
              (unsigned __int64)(&pbatch[1].GPUFence.pObject->HasData + 5) >> 4);
    else
      v12 = 0i64;
    pPrev = pbatch[1].pPrev;
    if ( pPrev )
      v11 = 16
          * Scaleform::AllocAddr::Free(
              &this->IndexBuffers.Allocator,
              ((unsigned __int64)pbatch[1].PrimitiveBatches.Root.pPrev >> 4) | ((__int64)pPrev[1].__vftable << 24),
              ((unsigned __int64)&pbatch[1].PrimitiveBatches.Root.pNext->pVoidNext + 7) >> 4);
    if ( pallocator )
    {
      if ( &this->VertexBuffers.Allocator == pallocator )
        v11 = v12;
    }
    else
    {
      v11 += v12;
    }
    if ( Scaleform::Render::GL::HAL::ShouldUseVAOs(this->pHal) )
    {
      if ( *(_QWORD *)&pbatch[1].Type )
      {
        v14 = this->pHal->GetGraphicsDevice(this->pHal);
        v14->glDeleteVertexArrays(v14, 1, (Scaleform::Render::GL::HALGLVertexArray **)&pbatch[1].Type);
      }
    }
    this->VBSizeEvictedInMap += LODWORD(pbatch[1].GPUFence.pObject);
    Scaleform::Render::MeshCacheItem::destroy(pbatch, pskipMesh, 1);
    return v11;
  }
}

unsigned __int8 *__fastcall Scaleform::Render::GL::MeshBuffer::GetBufferBase(Scaleform::Render::GL::MeshBuffer *this)
{
  Scaleform::Render::MeshCache *v2; // rax

  v2 = this->pHal->GetMeshCache(this->pHal);
  if ( ((unsigned int (__fastcall *)(Scaleform::Render::MeshCache *))v2->Scaleform::Render::CacheBase::__vftable[1].UnlockBuffers)(v2) == 1 )
    return this->BufferData;
  else
    return 0i64;
}

__int64 __fastcall Scaleform::Render::GL::MeshCache::GetBufferUpdateType(Scaleform::Render::GL::MeshCache *this)
{
  return (unsigned int)this->BufferUpdate;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

void __fastcall Scaleform::Render::GL::MeshCache::GetStats(
        Scaleform::Render::GL::MeshCache *this,
        Scaleform::Render::MeshCache::Stats *stats)
{
  int v2; // edi
  __int64 v5; // rbx
  __int64 v6; // rbx

  v2 = 0;
  *(_OWORD *)stats->TotalSize = 0ui64;
  *(_OWORD *)&stats->TotalSize[2] = 0ui64;
  *(_OWORD *)&stats->TotalSize[4] = 0ui64;
  *(_OWORD *)&stats->TotalSize[6] = 0ui64;
  *(_OWORD *)&stats->UsedSize[1] = 0ui64;
  *(_OWORD *)&stats->UsedSize[3] = 0ui64;
  *(_OWORD *)&stats->UsedSize[5] = 0u;
  if ( this->BufferUpdate != BufferUpdate_ClientBuffers )
    v2 = 4;
  v5 = (unsigned int)(v2 + 1);
  stats->TotalSize[v5] = this->VertexBuffers.TotalSize;
  stats->UsedSize[v5] = 16 * Scaleform::AllocAddr::GetFreeSize(&this->VertexBuffers.Allocator);
  v6 = (unsigned int)(v2 + 2);
  stats->TotalSize[v6] = this->IndexBuffers.TotalSize;
  stats->UsedSize[v6] = 16 * Scaleform::AllocAddr::GetFreeSize(&this->IndexBuffers.Allocator);
}

char __fastcall Scaleform::Render::GL::MeshCache::Initialize(
        Scaleform::Render::GL::MeshCache *this,
        Scaleform::Render::GL::HAL *phal)
{
  unsigned __int64 v3; // rdx
  int v4; // edi
  Scaleform::Render::GL::GraphicsDevice *v5; // rax
  Scaleform::Render::GL::GraphicsDevice *v6; // rax
  unsigned __int64 MemGranularity; // r8
  unsigned __int64 MemReserve; // rdx

  this->pHal = phal;
  if ( this->Params.MaxBatchInstances > 0x18 )
    this->Params.MaxBatchInstances = 24;
  if ( this->Params.VBLockEvictSizeLimit < 0x40000 )
    this->Params.VBLockEvictSizeLimit = 0x40000i64;
  v3 = 2 * (this->Params.MaxVerticesSizeInBatch + 2i64 * this->Params.MaxIndicesInBatch);
  if ( v3 > this->Params.StagingBufferSize )
    this->Params.StagingBufferSize = v3;
  this->BufferUpdate = BufferUpdate_Count;
  v4 = 0;
  while ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( !Scaleform::Render::GL::HAL::ShouldUseVAOs(this->pHal) && (this->pHal->ConfigFlags & 0x80000000) == 0 )
      {
        this->BufferUpdate = BufferUpdate_ClientBuffers;
        goto LABEL_22;
      }
    }
    else
    {
      if ( v4 != 2 )
      {
        this->BufferUpdate = BufferUpdate_UpdateBuffer;
        goto LABEL_22;
      }
      v5 = this->pHal->GetGraphicsDevice(this->pHal);
      if ( (Scaleform::Render::GL::GraphicsDevice::GetCaps(v5) & 0x20) != 0 )
      {
        this->BufferUpdate = BufferUpdate_MapBuffer;
        goto LABEL_22;
      }
    }
LABEL_18:
    if ( this->BufferUpdate != BufferUpdate_Count )
      goto LABEL_23;
    if ( (unsigned int)++v4 >= 4 )
      goto LABEL_22;
  }
  v6 = this->pHal->GetGraphicsDevice(this->pHal);
  if ( (Scaleform::Render::GL::GraphicsDevice::GetCaps(v6) & 0x2040) != 8256 )
    goto LABEL_18;
  this->BufferUpdate = BufferUpdate_MapBufferUnsynchronized;
LABEL_22:
  if ( this->BufferUpdate == BufferUpdate_Count )
    return 0;
LABEL_23:
  if ( !Scaleform::Render::MeshStagingBuffer::Initialize(
          &this->StagingBuffer,
          this->pHeap,
          this->Params.StagingBufferSize) )
    return 0;
  MemGranularity = this->Params.MemGranularity;
  this->UseSeparateIndexBuffers = 1;
  this->VertexBuffers.Granularity = 16 * (5 * (MemGranularity >> 4) / 9);
  this->IndexBuffers.Granularity = (MemGranularity & 0xFFFFFFFFFFFFFFF0ui64) - 16 * (5 * (MemGranularity >> 4) / 9);
  if ( !Scaleform::Render::GL::MeshCache::createMaskEraseBatchVertexBuffer(this)
    || (MemReserve = this->Params.MemReserve) != 0
    && !Scaleform::Render::GL::MeshCache::allocCacheBuffers(this, MemReserve, AT_Reserve, 0) )
  {
    Scaleform::Render::GL::MeshCache::Reset(this, 0);
    return 0;
  }
  return 1;
}

char __fastcall Scaleform::Render::GL::MeshCache::LockBuffers(Scaleform::Render::GL::MeshCache *this)
{
  Scaleform::Render::RQCacheInterface *pRQCaches; // rax

  pRQCaches = this->pRQCaches;
  this->Mapped = 1;
  this->VBSizeEvictedInMap = 0i64;
  if ( pRQCaches )
    pRQCaches->LockFlags |= 1u;
  return 1;
}

void __fastcall Scaleform::Render::GL::MeshCache::LockMeshCacheItem(
        Scaleform::Render::GL::MeshCache *this,
        Scaleform::Render::MeshCacheItem *pdataIn,
        unsigned __int8 **pvertexDataStart,
        unsigned __int16 **pindexDataStart)
{
  Scaleform::Render::GL::MeshBuffer *v4; // rdi
  Scaleform::Render::GL::MeshBuffer *pPrev; // rsi
  Scaleform::Render::Fence *pObject; // r8
  Scaleform::Render::MeshCacheItem *pNext; // rdx
  char *v12; // r14
  char *pData; // rdi
  char v14; // cl
  Scaleform::Render::MeshCacheItemUseNode *v15; // r8
  Scaleform::Render::MeshCacheItemUseNode *v16; // rdx
  char v17; // cl

  v4 = (Scaleform::Render::GL::MeshBuffer *)pdataIn[1].__vftable;
  pPrev = (Scaleform::Render::GL::MeshBuffer *)pdataIn[1].pPrev;
  pObject = pdataIn[1].GPUFence.pObject;
  pNext = pdataIn[1].pNext;
  if ( !v4->pData )
  {
    v4->pNextLock = this->MappedBuffers.pFirst;
    this->MappedBuffers.pFirst = v4;
  }
  v12 = 0i64;
  if ( Scaleform::Render::GL::MeshBuffer::DoMap(v4, (unsigned __int64)pNext, (unsigned __int64)pObject) )
  {
    pData = (char *)v4->pData;
  }
  else
  {
    pData = 0i64;
    v14 = `Scaleform::Render::GL::MeshBuffer::Map'::`9'::warned;
    if ( !`Scaleform::Render::GL::MeshBuffer::Map'::`9'::warned )
      v14 = 1;
    `Scaleform::Render::GL::MeshBuffer::Map'::`9'::warned = v14;
  }
  v15 = pdataIn[1].PrimitiveBatches.Root.pNext;
  v16 = pdataIn[1].PrimitiveBatches.Root.pPrev;
  if ( !pPrev->pData )
  {
    pPrev->pNextLock = this->MappedBuffers.pFirst;
    this->MappedBuffers.pFirst = pPrev;
  }
  if ( Scaleform::Render::GL::MeshBuffer::DoMap(pPrev, (unsigned __int64)v16, (unsigned __int64)v15) )
  {
    v12 = (char *)pPrev->pData;
  }
  else
  {
    v17 = `Scaleform::Render::GL::MeshBuffer::Map'::`9'::warned;
    if ( !`Scaleform::Render::GL::MeshBuffer::Map'::`9'::warned )
      v17 = 1;
    `Scaleform::Render::GL::MeshBuffer::Map'::`9'::warned = v17;
  }
  *pvertexDataStart = (unsigned __int8 *)&pData[(unsigned __int64)pdataIn[1].pNext];
  *pindexDataStart = (unsigned __int16 *)&v12[(unsigned __int64)pdataIn[1].PrimitiveBatches.Root.pPrev];
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::TextureFormat **Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::Render::TextureFormat **v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 8 * v6;
      if ( Data )
      {
        v8 = (Scaleform::Render::TextureFormat **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    Data,
                                                    v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::Render::TextureFormat **)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                          Scaleform::Memory::pGlobalHeap,
                                                          pheapAddr,
                                                          v7,
                                                          &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,Scaleform::AllocatorLH<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,68>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,Scaleform::AllocatorLH<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry,68>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned __int64 Capacity; // rax
  Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry *Data; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry *v9; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  Capacity = this->Policy.Capacity;
  if ( newCapacity != Capacity && newCapacity >= Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v7 = (newCapacity + 7) & 0xFFFFFFFFFFFFFFF8ui64;
      v8 = 24 * v7;
      if ( Data )
      {
        v9 = (Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                       Scaleform::Memory::pGlobalHeap,
                                                                       Data,
                                                                       v8);
        this->Policy.Capacity = v7;
        this->Data = v9;
        return;
      }
      v10 = 68;
      this->Data = (Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                             Scaleform::Memory::pGlobalHeap,
                                                                             pheapAddr,
                                                                             v8,
                                                                             &v10);
    }
    else
    {
      v7 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v7;
  }
}

void __fastcall Scaleform::Render::GL::MeshCache::Reset(Scaleform::Render::GL::MeshCache *this, bool lost)
{
  Scaleform::Render::GL::HAL *pHal; // rcx
  __int64 v5; // rax
  Scaleform::Render::GL::HAL *v6; // rcx
  __int64 v7; // rax
  void *p_MaskEraseBatchVertexBuffer; // [rsp+30h] [rbp+8h] BYREF

  if ( this->pHal )
  {
    Scaleform::Render::GL::MeshCache::destroyBuffers(this, AT_None, lost);
    Scaleform::Render::GL::MeshCache::destroyPendingBuffers(this, lost);
    if ( !lost )
    {
      if ( this->MaskEraseBatchVertexBuffer.Name )
      {
        pHal = this->pHal;
        p_MaskEraseBatchVertexBuffer = &this->MaskEraseBatchVertexBuffer;
        v5 = (__int64)pHal->GetGraphicsDevice(pHal);
        (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v5 + 264i64))(
          v5,
          1i64,
          &p_MaskEraseBatchVertexBuffer);
      }
      if ( this->MaskEraseBatchVAO.Name )
      {
        v6 = this->pHal;
        p_MaskEraseBatchVertexBuffer = &this->MaskEraseBatchVAO;
        v7 = (__int64)v6->GetGraphicsDevice(v6);
        (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v7 + 328i64))(
          v7,
          1i64,
          &p_MaskEraseBatchVertexBuffer);
      }
    }
    this->pHal = 0i64;
  }
  Scaleform::Render::MeshStagingBuffer::Reset(&this->StagingBuffer);
}

bool __fastcall Scaleform::Render::GL::MeshCache::SetParams(
        Scaleform::Render::GL::MeshCache *this,
        const Scaleform::Render::MeshCacheParams *argParams)
{
  unsigned int MaxBatchInstances; // er8
  unsigned __int64 VBLockEvictSizeLimit; // r10
  unsigned __int64 StagingBufferSize; // rdi
  Scaleform::Render::RQCacheInterface *MemReserve; // rsi
  unsigned __int64 MemGranularity; // r14
  unsigned int NoBatchVerticesSizeThreshold; // eax
  __int64 MaxVerticesSizeInBatch; // rdx
  unsigned __int64 v11; // rdx
  bool result; // al
  Scaleform::Render::RQCacheInterface *pRQCaches; // rdx
  __int128 v14; // [rsp+20h] [rbp-58h]
  __int128 v15; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+40h] [rbp-38h]
  __int128 v17; // [rsp+50h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp-18h]

  MaxBatchInstances = argParams->MaxBatchInstances;
  VBLockEvictSizeLimit = argParams->VBLockEvictSizeLimit;
  StagingBufferSize = argParams->StagingBufferSize;
  MemReserve = (Scaleform::Render::RQCacheInterface *)argParams->MemReserve;
  MemGranularity = argParams->MemGranularity;
  if ( MaxBatchInstances > 0x18 )
    MaxBatchInstances = 24;
  *((_QWORD *)&v14 + 1) = argParams->MemLimit;
  *((_QWORD *)&v15 + 1) = argParams->LRUTailSize;
  if ( VBLockEvictSizeLimit < 0x40000 )
    VBLockEvictSizeLimit = 0x40000i64;
  *(_QWORD *)&v14 = argParams->MemReserve;
  *(_QWORD *)&v15 = argParams->MemGranularity;
  DWORD1(v17) = argParams->InstancingThreshold;
  NoBatchVerticesSizeThreshold = argParams->NoBatchVerticesSizeThreshold;
  MaxVerticesSizeInBatch = argParams->MaxVerticesSizeInBatch;
  *((_QWORD *)&v17 + 1) = __PAIR64__(MaxVerticesSizeInBatch, NoBatchVerticesSizeThreshold);
  LODWORD(v18) = argParams->MaxIndicesInBatch;
  LODWORD(v17) = MaxBatchInstances;
  *((_QWORD *)&v16 + 1) = VBLockEvictSizeLimit;
  v11 = 2 * (MaxVerticesSizeInBatch + 2i64 * (unsigned int)v18);
  if ( v11 > StagingBufferSize )
    StagingBufferSize = v11;
  *(_QWORD *)&v16 = StagingBufferSize;
  if ( !*(_QWORD *)&this->VBAlignment )
    goto LABEL_18;
  Scaleform::Render::MeshCacheListSet::EvictAll((Scaleform::Render::MeshCacheListSet *)&this->pHal);
  if ( this->Params.LRUTailSize != StagingBufferSize
    && !Scaleform::Render::MeshStagingBuffer::Initialize(
          (Scaleform::Render::MeshStagingBuffer *)&this->Params.MaxIndicesInBatch,
          (Scaleform::MemoryHeap *)this->Scaleform::Render::MeshCache::Scaleform::Render::MeshCacheConfig::__vftable,
          StagingBufferSize) )
  {
    Scaleform::Render::MeshStagingBuffer::Initialize(
      (Scaleform::Render::MeshStagingBuffer *)&this->Params.MaxIndicesInBatch,
      (Scaleform::MemoryHeap *)this->Scaleform::Render::MeshCache::Scaleform::Render::MeshCacheConfig::__vftable,
      this->Params.LRUTailSize);
    return 0;
  }
  if ( this->pRQCaches == MemReserve && this->Params.MemLimit == MemGranularity
    || (Scaleform::Render::GL::MeshCache::destroyBuffers(
          (Scaleform::Render::GL::MeshCache *)((char *)this - 8),
          AT_None,
          0),
        !MemReserve)
    || Scaleform::Render::GL::MeshCache::allocCacheBuffers(
         (Scaleform::Render::GL::MeshCache *)((char *)this - 8),
         (unsigned __int64)MemReserve,
         AT_Reserve,
         0) )
  {
LABEL_18:
    result = 1;
    *(_OWORD *)&this->pRQCaches = v14;
    *(_OWORD *)&this->Params.MemLimit = v15;
    *(_OWORD *)&this->Params.LRUTailSize = v16;
    *(_OWORD *)&this->Params.VBLockEvictSizeLimit = v17;
    *(_QWORD *)&this->Params.NoBatchVerticesSizeThreshold = v18;
  }
  else
  {
    pRQCaches = this->pRQCaches;
    if ( pRQCaches )
      Scaleform::Render::GL::MeshCache::allocCacheBuffers(
        (Scaleform::Render::GL::MeshCache *)((char *)this - 8),
        (unsigned __int64)pRQCaches,
        AT_Reserve,
        0);
    return 0;
  }
  return result;
}

void __fastcall Scaleform::Render::GL::MeshCache::UnlockBuffers(Scaleform::Render::GL::MeshCache *this)
{
  Scaleform::Render::RQCacheInterface *pRQCaches; // rax

  Scaleform::Render::GL::MeshBuffer::MapList::UnmapAll(&this->MappedBuffers);
  pRQCaches = this->pRQCaches;
  this->Mapped = 0;
  if ( pRQCaches )
    pRQCaches->LockFlags &= ~1u;
}

void __fastcall Scaleform::Render::GL::MeshBuffer::MapList::UnmapAll(Scaleform::Render::GL::MeshBuffer::MapList *this)
{
  Scaleform::Render::GL::MeshBuffer *pFirst; // rbx
  __int64 v3; // rax
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // rax
  Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebp
  __int64 v13; // rax
  Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry *v14; // rdi
  __int64 v15; // rax

  pFirst = this->pFirst;
  if ( this->pFirst )
  {
    while ( 1 )
    {
      v3 = (__int64)pFirst->pHal->GetMeshCache(pFirst->pHal);
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 160i64))(v3);
      if ( pFirst->pData && pFirst->Buffer.pObject )
      {
        if ( Scaleform::Render::GL::HAL::ShouldUseVAOs(pFirst->pHal) )
        {
          v5 = (__int64)pFirst->pHal->GetGraphicsDevice(pFirst->pHal);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 120i64))(v5, 0i64);
        }
        v6 = (__int64)pFirst->pHal->GetGraphicsDevice(pFirst->pHal);
        (*(void (__fastcall **)(__int64, _QWORD, Scaleform::Render::GL::HALGLBuffer *))(*(_QWORD *)v6 + 72i64))(
          v6,
          pFirst->Type,
          pFirst->Buffer.pObject);
        if ( v4 )
        {
          if ( v4 != 2 )
          {
            if ( v4 == 3 )
            {
              v12 = 0;
              if ( pFirst->MeshBufferUpdates.Data.Size )
              {
                v13 = 0i64;
                do
                {
                  v14 = &pFirst->MeshBufferUpdates.Data.Data[v13];
                  v15 = (__int64)pFirst->pHal->GetGraphicsDevice(pFirst->pHal);
                  (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64, char *))(*(_QWORD *)v15 + 168i64))(
                    v15,
                    pFirst->Type,
                    v14->Offset,
                    v14->Size,
                    (char *)pFirst->pData + v14->Offset);
                  v13 = ++v12;
                }
                while ( v12 < pFirst->MeshBufferUpdates.Data.Size );
              }
            }
            goto LABEL_11;
          }
        }
        else
        {
          v7 = 0;
          if ( pFirst->MeshBufferUpdates.Data.Size )
          {
            v8 = 0i64;
            do
            {
              v9 = &pFirst->MeshBufferUpdates.Data.Data[v8];
              v10 = (__int64)pFirst->pHal->GetGraphicsDevice(pFirst->pHal);
              (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)v10 + 424i64))(
                v10,
                pFirst->Type,
                v9->Offset,
                v9->Size);
              v8 = ++v7;
            }
            while ( v7 < pFirst->MeshBufferUpdates.Data.Size );
          }
        }
        v11 = (__int64)pFirst->pHal->GetGraphicsDevice(pFirst->pHal);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 968i64))(v11, pFirst->Type);
      }
LABEL_11:
      pFirst->MeshBufferUpdates.Data.Size = 0i64;
      pFirst->pData = 0i64;
      pFirst = pFirst->pNextLock;
      if ( !pFirst )
      {
        this->pFirst = 0i64;
        return;
      }
    }
  }
  this->pFirst = 0i64;
}

char __fastcall Scaleform::Render::GL::MeshBuffer::allocBuffer(Scaleform::Render::GL::MeshBuffer *this)
{
  Scaleform::Render::MeshCache *v2; // rax
  int v3; // ebx
  Scaleform::Render::GL::GraphicsDevice *v4; // rax
  Scaleform::Render::GL::GraphicsDevice *v5; // rax
  __int64 v6; // rax
  Scaleform::Render::GL::HALGLBuffer *v7; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::GL::GraphicsDevice *v9; // rax
  Scaleform::Render::GL::GraphicsDevice *v10; // rax
  Scaleform::Render::GL::GraphicsDevice *v11; // rax

  v2 = this->pHal->GetMeshCache(this->pHal);
  v3 = ((__int64 (__fastcall *)(Scaleform::Render::MeshCache *))v2->Scaleform::Render::CacheBase::__vftable[1].UnlockBuffers)(v2);
  if ( this->Buffer.pObject )
  {
    v4 = this->pHal->GetGraphicsDevice(this->pHal);
    v4->glDeleteBuffers(v4, 1, &this->Buffer.pObject);
  }
  if ( Scaleform::Render::GL::HAL::ShouldUseVAOs(this->pHal) )
  {
    v5 = this->pHal->GetGraphicsDevice(this->pHal);
    v5->glBindVertexArray(v5, 0i64);
  }
  if ( v3 != 1 )
  {
    if ( !this->Buffer.pObject )
    {
      v6 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
             Scaleform::Memory::pGlobalHeap,
             40i64);
      v7 = (Scaleform::Render::GL::HALGLBuffer *)v6;
      if ( v6 )
      {
        *(_QWORD *)v6 = &Scaleform::RefCountImplCore::`vftable';
        *(_QWORD *)v6 = &Scaleform::Render::GL::HALGLBuffer::`vftable';
        *(_DWORD *)(v6 + 16) = 0;
        *(_QWORD *)(v6 + 24) = 0i64;
        *(_DWORD *)(v6 + 32) = 0;
        *(_DWORD *)(v6 + 8) = 1;
      }
      else
      {
        v7 = 0i64;
      }
      pObject = (Scaleform::RefCountVImpl *)this->Buffer.pObject;
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      this->Buffer.pObject = v7;
    }
    v9 = this->pHal->GetGraphicsDevice(this->pHal);
    v9->glGenBuffers(v9, 1, &this->Buffer.pObject);
    v10 = this->pHal->GetGraphicsDevice(this->pHal);
    v10->glBindBuffer(v10, this->Type, this->Buffer.pObject);
    v11 = this->pHal->GetGraphicsDevice(this->pHal);
    v11->glBufferData(v11, this->Type, this->Size, 0i64, 35048u);
  }
  return 1;
}

char __fastcall Scaleform::Render::GL::MeshCache::allocBuffer(
        Scaleform::Render::GL::MeshCache *this,
        unsigned __int64 *poffset,
        Scaleform::Render::GL::MeshBuffer **pbuffer,
        Scaleform::Render::GL::MeshBufferSet *mbs,
        unsigned __int64 size,
        bool waitForCache)
{
  bool v9; // cl
  unsigned __int64 Granularity; // rdx
  Scaleform::Render::GL::MeshBuffer *Buffer; // rax
  Scaleform::Render::MeshCacheItem *i; // rbx
  unsigned __int64 *p_Size; // rax
  Scaleform::Render::Fence *pObject; // rax
  Scaleform::Render::MeshCacheItem *pNext; // rbx
  unsigned __int64 *v16; // rax
  Scaleform::Render::Fence *v17; // rax
  Scaleform::Render::Fence *v18; // rax

  if ( Scaleform::Render::GL::MeshBufferSet::Alloc(mbs, size, pbuffer, poffset) )
    return 1;
  if ( Scaleform::Render::MeshCacheListSet::EvictPendingFree(&this->CacheList, &mbs->Allocator, 0) )
  {
    v9 = 0;
    goto LABEL_15;
  }
  if ( this->IndexBuffers.TotalSize + this->VertexBuffers.TotalSize + 0x4000 > this->Params.MemLimit )
    goto LABEL_14;
  if ( Scaleform::Render::MeshCacheListSet::EvictLRUTillLimit(
         &this->CacheList,
         &this->CacheList.Slots[4],
         &mbs->Allocator,
         size,
         this->Params.LRUTailSize) )
  {
    v9 = 0;
    goto LABEL_15;
  }
  Granularity = mbs->Granularity;
  if ( size > Granularity )
    return 0;
  if ( this->Params.MemLimit - this->VertexBuffers.TotalSize - this->IndexBuffers.TotalSize < Granularity )
    Granularity = this->Params.MemLimit - this->VertexBuffers.TotalSize - this->IndexBuffers.TotalSize;
  if ( size <= Granularity
    && (Buffer = Scaleform::Render::GL::MeshBufferSet::CreateBuffer(
                   mbs,
                   Granularity,
                   AT_Chunk,
                   0,
                   this->pHeap,
                   this->pHal)) != 0i64 )
  {
    Buffer->pPrev = this->ChunkBuffers.Root.pPrev;
    Buffer->pNext = (Scaleform::Render::MeshBuffer *)&this->MappedBuffers;
    this->ChunkBuffers.Root.pPrev->pNext = Buffer;
    v9 = 0;
    this->ChunkBuffers.Root.pPrev = Buffer;
  }
  else
  {
LABEL_14:
    v9 = Scaleform::Render::MeshCacheListSet::EvictLRU(
           &this->CacheList,
           &this->CacheList.Slots[4],
           &mbs->Allocator,
           size) == 0;
  }
LABEL_15:
  if ( this->VBSizeEvictedInMap > this->Params.VBLockEvictSizeLimit )
    return 0;
  if ( !v9 )
    return Scaleform::Render::GL::MeshBufferSet::Alloc(mbs, size, pbuffer, poffset);
LABEL_18:
  for ( i = this->CacheList.Slots[3].Root.pNext; ; i = i->pNext )
  {
    p_Size = &this->CacheList.Slots[2].Size;
    if ( this == (Scaleform::Render::GL::MeshCache *)-264i64 )
      p_Size = 0i64;
    if ( i == (Scaleform::Render::MeshCacheItem *)p_Size )
      break;
    pObject = i->GPUFence.pObject;
    if ( !pObject
      || !pObject->HasData
      || !pObject->Data
      || !Scaleform::Render::FenceImpl::IsPending(pObject->Data, 0i64) )
    {
      if ( this->Evict(this, i, &mbs->Allocator, 0i64) >= size )
        return Scaleform::Render::GL::MeshBufferSet::Alloc(mbs, size, pbuffer, poffset);
      goto LABEL_18;
    }
  }
  pNext = this->CacheList.Slots[2].Root.pNext;
  if ( waitForCache )
  {
    while ( 1 )
    {
      v16 = &this->CacheList.Slots[1].Size;
      if ( this == (Scaleform::Render::GL::MeshCache *)-240i64 )
        v16 = 0i64;
      if ( pNext == (Scaleform::Render::MeshCacheItem *)v16 )
        break;
      v17 = pNext->GPUFence.pObject;
      if ( v17 )
      {
        if ( v17->HasData )
        {
          if ( v17->Data )
          {
            if ( Scaleform::Render::FenceImpl::IsPending(v17->Data, 0i64) )
            {
              v18 = pNext->GPUFence.pObject;
              if ( v18 )
              {
                if ( v18->HasData && v18->Data )
                  Scaleform::Render::FenceImpl::WaitFence(v18->Data, 0i64);
              }
            }
          }
        }
      }
      if ( this->Evict(this, pNext, &mbs->Allocator, 0i64) >= size )
        return Scaleform::Render::GL::MeshBufferSet::Alloc(mbs, size, pbuffer, poffset);
      pNext = this->CacheList.Slots[2].Root.pNext;
    }
    Scaleform::Render::MeshCacheListSet::EvictPendingFree(&this->CacheList, &mbs->Allocator, 1);
  }
  return 0;
}

char __fastcall Scaleform::Render::GL::MeshCache::allocCacheBuffers(
        Scaleform::Render::GL::MeshCache *this,
        unsigned __int64 size,
        Scaleform::Render::MeshBuffer::AllocType type,
        unsigned int arena)
{
  unsigned __int64 v8; // r12
  Scaleform::Render::GL::MeshBuffer *Buffer; // rsi

  if ( this->UseSeparateIndexBuffers )
  {
    v8 = 16 * (5 * (size >> 4) / 9);
    Buffer = Scaleform::Render::GL::MeshBufferSet::CreateBuffer(
               &this->VertexBuffers,
               v8,
               type,
               arena,
               this->pHeap,
               this->pHal);
    if ( !Buffer )
      return 0;
    if ( !Scaleform::Render::GL::MeshBufferSet::CreateBuffer(
            &this->IndexBuffers,
            (size & 0xFFFFFFFFFFFFFFF0ui64) - v8,
            type,
            arena,
            this->pHeap,
            this->pHal) )
    {
      Scaleform::AllocAddr::RemoveSegment(&this->VertexBuffers.Allocator, Buffer->Index << 24, (Buffer->Size + 15) >> 4);
      this->VertexBuffers.TotalSize -= Buffer->Size;
      this->VertexBuffers.Buffers.Data.Data[Buffer->Index] = 0i64;
      ((void (__fastcall *)(Scaleform::Render::GL::MeshBuffer *, __int64))Buffer->~MeshBuffer)(Buffer, 1i64);
      return 0;
    }
  }
  else if ( !Scaleform::Render::GL::MeshBufferSet::CreateBuffer(
               &this->VertexBuffers,
               size,
               type,
               arena,
               this->pHeap,
               this->pHal) )
  {
    return 0;
  }
  return 1;
}

__int64 __fastcall Scaleform::Render::GL::MeshCache::createMaskEraseBatchVertexBuffer(
        Scaleform::Render::GL::MeshCache *this,
        __int64 a2)
{
  char *v3; // r8
  char v4; // al
  unsigned int v5; // er9
  int v6; // ecx
  __int64 v7; // rcx
  Scaleform::Render::GL::HAL *pHal; // rcx
  __int64 v9; // rax
  Scaleform::Render::GL::HAL *v10; // rcx
  __int64 v11; // rax
  Scaleform::Render::GL::GraphicsDevice *v12; // rax
  Scaleform::Render::GL::GraphicsDevice *v13; // rax
  Scaleform::Render::GL::GraphicsDevice *v14; // rax
  Scaleform::Render::GL::GraphicsDevice *v15; // rax
  Scaleform::Render::GL::GraphicsDevice *v16; // rax
  Scaleform::Render::GL::GraphicsDevice *v17; // rax
  Scaleform::Render::GL::GraphicsDevice *v18; // rax
  Scaleform::Render::GL::GraphicsDevice *v19; // rax
  Scaleform::Render::GL::GraphicsDevice *v20; // rax
  Scaleform::Render::GL::GraphicsDevice *v21; // rax
  int v23; // [rsp+20h] [rbp-4D8h]
  int v24; // [rsp+20h] [rbp-4D8h]
  Scaleform::Render::GL::HALGLBuffer *p_MaskEraseBatchVertexBuffer; // [rsp+40h] [rbp-4B8h] BYREF
  Scaleform::Render::GL::HALGLVertexArray *p_MaskEraseBatchVAO; // [rsp+48h] [rbp-4B0h] BYREF
  char v27[10]; // [rsp+50h] [rbp-4A8h] BYREF
  char v28; // [rsp+5Ah] [rbp-49Eh] BYREF

  v3 = &v28;
  v4 = 0;
  v5 = 0;
  do
  {
    LOBYTE(a2) = 0;
    do
    {
      v6 = (unsigned __int8)a2;
      LOBYTE(a2) = a2 + 1;
      v7 = v5 + v6;
      v27[8 * v7 + 4] = v4;
      v27[8 * v7 + 5] = v4;
      v27[8 * v7 + 6] = v4;
      v27[8 * v7 + 7] = v4;
    }
    while ( (unsigned __int8)a2 < 6u );
    *(_DWORD *)(v3 - 10) = 0x10000;
    ++v4;
    *(_DWORD *)(v3 - 2) = 0;
    v5 += 6;
    *(_DWORD *)(v3 + 6) = 1;
    *(_DWORD *)(v3 + 14) = 0x10000;
    *(_DWORD *)(v3 + 22) = 1;
    *(_DWORD *)(v3 + 30) = 65537;
    v3 += 48;
  }
  while ( v5 < 0x90 );
  pHal = this->pHal;
  p_MaskEraseBatchVertexBuffer = &this->MaskEraseBatchVertexBuffer;
  v9 = ((__int64 (__fastcall *)(Scaleform::Render::GL::HAL *, __int64, char *))pHal->GetGraphicsDevice)(pHal, a2, v3);
  (*(void (__fastcall **)(__int64, __int64, Scaleform::Render::GL::HALGLBuffer **))(*(_QWORD *)v9 + 448i64))(
    v9,
    1i64,
    &p_MaskEraseBatchVertexBuffer);
  if ( Scaleform::Render::GL::HAL::ShouldUseVAOs(this->pHal) )
  {
    v10 = this->pHal;
    p_MaskEraseBatchVAO = &this->MaskEraseBatchVAO;
    v11 = (__int64)v10->GetGraphicsDevice(v10);
    (*(void (__fastcall **)(__int64, __int64, Scaleform::Render::GL::HALGLVertexArray **))(*(_QWORD *)v11 + 488i64))(
      v11,
      1i64,
      &p_MaskEraseBatchVAO);
    v12 = this->pHal->GetGraphicsDevice(this->pHal);
    v12->glBindVertexArray(v12, &this->MaskEraseBatchVAO);
  }
  v13 = this->pHal->GetGraphicsDevice(this->pHal);
  v13->glBindBuffer(v13, 34963u, 0i64);
  v14 = this->pHal->GetGraphicsDevice(this->pHal);
  v14->glBindBuffer(v14, 34962u, &this->MaskEraseBatchVertexBuffer);
  v15 = this->pHal->GetGraphicsDevice(this->pHal);
  v15->glBufferData(v15, 34962u, 1152i64, v27, 35044u);
  if ( Scaleform::Render::GL::HAL::ShouldUseVAOs(this->pHal) )
  {
    v16 = this->pHal->GetGraphicsDevice(this->pHal);
    v16->glEnableVertexAttribArray(v16, 0);
    v17 = this->pHal->GetGraphicsDevice(this->pHal);
    v17->glEnableVertexAttribArray(v17, 1u);
    v18 = this->pHal->GetGraphicsDevice(this->pHal);
    LOBYTE(v23) = 0;
    v18->glVertexAttribPointer(v18, 0, 2, 5122u, v23, Scaleform::Render::VertexXY16iInstance::Format.Size, 0i64);
    v19 = this->pHal->GetGraphicsDevice(this->pHal);
    LOBYTE(v24) = 0;
    v19->glVertexAttribPointer(
      v19,
      1u,
      4,
      5121u,
      v24,
      Scaleform::Render::VertexXY16iInstance::Format.Size,
      (const void *)4);
    v20 = this->pHal->GetGraphicsDevice(this->pHal);
    v20->glBindVertexArray(v20, 0i64);
  }
  v21 = this->pHal->GetGraphicsDevice(this->pHal);
  v21->glBindBuffer(v21, 34962u, 0i64);
  return 1i64;
}

void __fastcall Scaleform::Render::GL::MeshCache::destroyBuffers(
        Scaleform::Render::GL::MeshCache *this,
        Scaleform::Render::MeshBuffer::AllocType at,
        bool lost)
{
  Scaleform::Render::MeshBuffer *p_MappedBuffers; // rax

  Scaleform::Render::MeshCacheListSet::EvictAll(&this->CacheList);
  Scaleform::Render::GL::MeshBufferSet::DestroyBuffers(&this->VertexBuffers, at, lost);
  Scaleform::Render::GL::MeshBufferSet::DestroyBuffers(&this->IndexBuffers, at, lost);
  p_MappedBuffers = (Scaleform::Render::MeshBuffer *)&this->MappedBuffers;
  if ( this == (Scaleform::Render::GL::MeshCache *)-512i64 )
    p_MappedBuffers = 0i64;
  this->ChunkBuffers.Root.pPrev = p_MappedBuffers;
  this->ChunkBuffers.Root.pNext = p_MappedBuffers;
}

void __fastcall Scaleform::Render::GL::MeshCache::destroyPendingBuffers(
        Scaleform::Render::GL::MeshCache *this,
        bool lost)
{
  Scaleform::Render::MeshBuffer *pNext; // rdi
  Scaleform::Render::MeshBuffer *v3; // r8
  $F3843C9D635940E7712E8649E3411350 *v5; // r15
  Scaleform::Render::MeshBuffer *v7; // r14
  Scaleform::Render::GL::MeshCache *pHeap; // rbx
  Scaleform::Render::RQCacheInterface *pRQCaches; // rax
  Scaleform::RefCountVImpl *pPrev; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+18h] [rbp-50h] BYREF
  __int64 *v13; // [rsp+20h] [rbp-48h]
  Scaleform::Render::MeshBuffer *v14; // [rsp+28h] [rbp-40h]
  Scaleform::List<Scaleform::Render::MeshBuffer,Scaleform::Render::MeshBuffer,Scaleform::ListNode<Scaleform::Render::MeshBuffer> > *p_PendingDestructionBuffers; // [rsp+80h] [rbp+18h]

  pNext = this->PendingDestructionBuffers.Root.pNext;
  v3 = (Scaleform::Render::MeshBuffer *)&v12;
  v5 = &this->ChunkBuffers.Root.8;
  p_PendingDestructionBuffers = &this->PendingDestructionBuffers;
  if ( this == (Scaleform::Render::GL::MeshCache *)-528i64 )
    v5 = 0i64;
  v13 = &v12;
  v14 = (Scaleform::Render::MeshBuffer *)&v12;
LABEL_4:
  while ( pNext != (Scaleform::Render::MeshBuffer *)v5 )
  {
    v7 = pNext->pNext;
    pHeap = (Scaleform::Render::GL::MeshCache *)this->CacheList.Slots[5].Root.pNext;
    pNext->pPrev->pNext = v7;
    pNext->pNext->pPrev = pNext->pPrev;
    pNext->pPrev = (Scaleform::Render::MeshBuffer *)-1i64;
    pNext->pNext = (Scaleform::Render::MeshBuffer *)-1i64;
    while ( pHeap != (Scaleform::Render::GL::MeshCache *)&this->CacheList.Slots[4].Size )
    {
      if ( (Scaleform::Render::MeshBuffer *)pHeap->StagingBuffer.pBuffer == pNext
        || (Scaleform::Render::MeshBuffer *)pHeap->StagingBuffer.BufferSize == pNext )
      {
        pRQCaches = pHeap->pRQCaches;
        if ( pRQCaches )
        {
          if ( BYTE2(pRQCaches->pCaches[1])
            && pRQCaches->pCaches[0]
            && Scaleform::Render::FenceImpl::IsPending((Scaleform::Render::FenceImpl *)pRQCaches->pCaches[0], 0i64) )
          {
            v3 = pNext;
            pNext->pNext = v14;
            pNext->pPrev = (Scaleform::Render::MeshBuffer *)&v12;
            v14->pPrev = pNext;
            v14 = pNext;
            pNext = v7;
            goto LABEL_4;
          }
        }
      }
      pHeap = (Scaleform::Render::GL::MeshCache *)pHeap->pHeap;
    }
    if ( lost )
    {
      pPrev = (Scaleform::RefCountVImpl *)pNext[1].pPrev;
      if ( pPrev )
        Scaleform::RefCountImpl::Release(pPrev);
      pNext[1].pPrev = 0i64;
    }
    ((void (__fastcall *)(Scaleform::Render::MeshBuffer *, __int64, Scaleform::Render::MeshBuffer *))pNext->~MeshBuffer)(
      pNext,
      1i64,
      v3);
    v3 = v14;
    pNext = v7;
  }
  if ( v3 != (Scaleform::Render::MeshBuffer *)&v12 )
  {
    v11 = (__int64)v13;
    v13[2] = (__int64)p_PendingDestructionBuffers->Root.pNext;
    v3->pPrev = (Scaleform::Render::MeshBuffer *)&p_PendingDestructionBuffers[-1].Root.8;
    p_PendingDestructionBuffers->Root.pNext->pPrev = (Scaleform::Render::MeshBuffer *)v11;
    p_PendingDestructionBuffers->Root.pNext = v3;
  }
}

bool __fastcall Scaleform::Render::GL::MeshCache::evictMeshesInBuffer(
        Scaleform::Render::GL::MeshCache *this,
        Scaleform::Render::MeshCacheListSet::ListSlot *plist,
        unsigned __int64 count,
        Scaleform::Render::GL::MeshBuffer *pbuffer)
{
  char v5; // r15
  unsigned int v8; // er12
  __int64 v9; // rax
  __int64 v10; // rax
  Scaleform::Render::MeshCacheItem *pNext; // rbx
  Scaleform::Render::MeshCacheListSet::ListSlot *v12; // rbp
  Scaleform::Render::MeshCacheItem *p_Size; // r14
  Scaleform::Render::GL::MeshBuffer *v14; // rdx
  Scaleform::Render::GL::MeshBuffer *pPrev; // rdx
  Scaleform::Render::MeshCacheListSet::ListSlot *v17; // [rsp+58h] [rbp+10h]

  v17 = plist;
  v5 = 0;
  v8 = 0;
  if ( count )
  {
    v9 = 0i64;
    do
    {
      v10 = v9;
      pNext = plist[v10].Root.pNext;
      v12 = &plist[v10];
      p_Size = (Scaleform::Render::MeshCacheItem *)&v12[-1].Size;
      if ( !v12 )
        p_Size = 0i64;
      while ( pNext != p_Size )
      {
        if ( (Scaleform::Render::GL::MeshBuffer *)pNext[1].__vftable == pbuffer
          || (Scaleform::Render::GL::MeshBuffer *)pNext[1].pPrev == pbuffer )
        {
          if ( (__int64)this->Evict(this, pNext, 0i64, 0i64) )
            goto LABEL_14;
          v14 = (Scaleform::Render::GL::MeshBuffer *)pNext[1].__vftable;
          v5 = 1;
          if ( v14 == pbuffer )
          {
            Scaleform::AllocAddr::Free(
              &this->VertexBuffers.Allocator,
              ((unsigned __int64)pNext[1].pNext >> 4) | (v14->Index << 24),
              (unsigned __int64)(&pNext[1].GPUFence.pObject->HasData + 5) >> 4);
            pNext[1].__vftable = 0i64;
          }
          pPrev = (Scaleform::Render::GL::MeshBuffer *)pNext[1].pPrev;
          if ( pPrev != pbuffer )
          {
LABEL_14:
            pNext = v12->Root.pNext;
          }
          else
          {
            Scaleform::AllocAddr::Free(
              &this->IndexBuffers.Allocator,
              ((unsigned __int64)pNext[1].PrimitiveBatches.Root.pPrev >> 4) | (pPrev->Index << 24),
              ((unsigned __int64)&pNext[1].PrimitiveBatches.Root.pNext->pVoidNext + 7) >> 4);
            pNext[1].pPrev = 0i64;
            pNext = v12->Root.pNext;
          }
        }
        else
        {
          pNext = pNext->pNext;
        }
      }
      plist = v17;
      v9 = ++v8;
    }
    while ( v8 < count );
  }
  return v5 == 0;
}

