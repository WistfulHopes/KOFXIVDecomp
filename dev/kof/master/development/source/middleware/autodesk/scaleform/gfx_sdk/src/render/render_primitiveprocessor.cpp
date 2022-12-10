#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitiveprocessor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Render::RenderQueueItem::QIPrepareResult Scaleform::Render::Primitive::Prepare(Scaleform::Render::RenderQueueItem & item, Scaleform::Render::RenderQueueProcessor & qp, bool waitForCache); // 0x140419DB0
void Scaleform::Render::Primitive::EmitToHAL(Scaleform::Render::RenderQueueItem & item, Scaleform::Render::RenderQueueProcessor & qp); // 0x140419D70
Scaleform::Render::RenderQueueItem::QIPrepareResult Scaleform::Render::Primitive::prepare(Scaleform::Render::HAL * hal, void * item, Scaleform::Render::PrimitivePrepareBuffer * prepareBuffer, Scaleform::Render::PrimitiveEmitBuffer * emitBuffer, Scaleform::Render::MeshCache * cache, bool waitForCache); // 0x14041A7F0
void Scaleform::Render::Primitive::emitToHAL(Scaleform::Render::HAL * hal, void * item, Scaleform::Render::PrimitivePrepareBuffer * prepareBuffer, Scaleform::Render::PrimitiveEmitBuffer * emitBuffer); // 0x14041A760
void Scaleform::Render::PrimitivePrepareBuffer::StartPrimitive(Scaleform::Render::HAL * hal, void * item, Scaleform::Render::Primitive * p, Scaleform::Render::PrimitiveEmitBuffer * emitBuffer, Scaleform::Render::MeshCache * cache); // 0x14041A0B0
Scaleform::Render::RenderQueueItem::QIPrepareResult Scaleform::Render::PrimitivePrepareBuffer::ProcessPrimitive(bool waitForCache); // 0x140419E20
void Scaleform::Render::PrimitivePrepareBuffer::batchConvertStep(); // 0x14041A2E0
bool Scaleform::Render::PrimitivePrepareBuffer::attemptMergeBatches(Scaleform::Render::PrimitiveBatch * pfirst, Scaleform::Render::PrimitiveBatch * psecond, Scaleform::Render::PrimitiveBatch * pother, Scaleform::Render::PrimitiveBatch * pknown, unsigned long & knownVerticesSize, unsigned long & knownIndexCount); // 0x14041A1A0unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor>>::findIndexCore<Scaleform::Render::MeshCacheItem::MeshContent>(
        Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> > *this,
        const Scaleform::Render::MeshCacheItem::MeshContent *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> >::TableType *pTable; // rbp
  unsigned __int64 v5; // r10
  Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> >::TableType *v6; // r9
  bool v7; // zf
  unsigned __int64 *v8; // r9
  unsigned __int64 v9; // rcx
  unsigned int v10; // er8
  __int64 v11; // rax

  pTable = this->pTable;
  v5 = hashValue;
  v6 = this->pTable + 1;
  v7 = *(&v6->EntryCount + 3 * hashValue) == -2i64;
  v8 = &v6->EntryCount + 3 * hashValue;
  if ( v7 || v8[1] != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( v8[1] == hashValue )
    {
      v9 = v8[2];
      v10 = *(_DWORD *)(v9 + 88);
      if ( v10 == LODWORD(key->Meshes.Size) )
      {
        v11 = 0i64;
        if ( !v10 )
          return v5;
        while ( *(Scaleform::Render::MeshBase **)(*(_QWORD *)(v9 + 72) + 8 * v11) == *(Scaleform::Render::MeshBase **)((char *)key->Meshes.pData + (unsigned int)v11 * key->Meshes.StrideSize) )
        {
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= v10 )
            return v5;
        }
      }
    }
    v5 = *v8;
    if ( *v8 == -1i64 )
      break;
    v8 = &pTable[1].EntryCount + 3 * v5;
  }
  return -1i64;
}

void __fastcall Scaleform::Render::PrimitiveBatch::ClearCacheItem(Scaleform::Render::PrimitiveBatch *this)
{
  if ( this->MeshNode.pMeshItem )
  {
    this->MeshNode.pPrev->pNext = this->MeshNode.pNext;
    this->MeshNode.pNext->pPrev = this->MeshNode.pPrev;
    this->MeshNode.pPrev = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
    this->MeshNode.pNext = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
    this->MeshNode.pMeshItem = 0i64;
  }
}

void __fastcall Scaleform::Render::Primitive::EmitToHAL(
        Scaleform::Render::Primitive *this,
        Scaleform::Render::RenderQueueItem *item,
        Scaleform::Render::RenderQueueProcessor *qp)
{
  if ( qp->QueueEmitFilter == QPF_All )
    Scaleform::Render::Primitive::emitToHAL(
      (Scaleform::Render::Primitive *)((char *)this - 16),
      qp->pHAL,
      item,
      (Scaleform::Render::PrimitivePrepareBuffer *)&qp->72,
      (Scaleform::Render::PrimitiveEmitBuffer *)&qp->264);
}

Scaleform::Render::RenderQueueItem::QIPrepareResult __fastcall Scaleform::Render::Primitive::Prepare(
        Scaleform::Render::Primitive *this,
        Scaleform::Render::RenderQueueItem *item,
        Scaleform::Render::RenderQueueProcessor *qp,
        bool waitForCache)
{
  $176B5A3B7F51D3CE37785D0F43521823 *v6; // rbx

  if ( qp->QueuePrepareFilter )
    return 0;
  v6 = &qp->72;
  if ( item != qp->PrepareItemBuffer.pItem )
    Scaleform::Render::PrimitivePrepareBuffer::StartPrimitive(
      (Scaleform::Render::PrimitivePrepareBuffer *)&qp->72,
      qp->pHAL,
      item,
      (Scaleform::Render::Primitive *)((char *)this - 16),
      (Scaleform::Render::PrimitiveEmitBuffer *)&qp->264,
      (Scaleform::Render::MeshCache *)qp->Caches.pCaches[0]);
  return Scaleform::Render::PrimitivePrepareBuffer::ProcessPrimitive(
           (Scaleform::Render::PrimitivePrepareBuffer *)v6,
           waitForCache);
}

__int64 __fastcall Scaleform::Render::PrimitivePrepareBuffer::ProcessPrimitive(
        Scaleform::Render::PrimitivePrepareBuffer *this,
        bool waitForCache)
{
  Scaleform::Render::PrimitiveBatch *p_Batches; // r14
  Scaleform::Render::PrimitiveBatch *pPrepare; // rdi
  Scaleform::Render::Primitive *v6; // rcx
  unsigned int MeshCount; // er9
  __int64 v8; // rcx
  Scaleform::Ptr<Scaleform::Render::Mesh> *p_pMesh; // r8
  __int64 v10; // rdx
  Scaleform::Render::Mesh *pObject; // rax
  Scaleform::Render::PrimitiveBatch *v12; // rdi
  Scaleform::HashSetLH<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> > *p_BatchCacheItemHash; // rcx
  Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor> > v14; // rsi
  signed __int64 v15; // rax
  Scaleform::Render::MeshCacheItem *pMeshItem; // r8
  Scaleform::Render::MeshCacheListSet *pCacheList; // rdx
  unsigned __int64 *p_Size; // rcx
  Scaleform::Render::MeshCacheListSet *v19; // rcx
  Scaleform::Render::PrimitiveBatch *v20; // rcx
  Scaleform::Render::PrimitiveBatch *pConvert; // rax
  Scaleform::Render::PrimitiveBatch *pNext; // rcx
  Scaleform::Render::PrimitiveBatch *v23; // rax
  Scaleform::Render::Primitive *pPrimitive; // rcx
  BOOL v26; // [rsp+20h] [rbp-68h]
  __int128 v27; // [rsp+30h] [rbp-58h]
  Scaleform::Render::MeshCacheItem::MeshContent key; // [rsp+48h] [rbp-40h] BYREF

  p_Batches = (Scaleform::Render::PrimitiveBatch *)&this->pPrimitive->Batches;
  if ( this->pPrepare == p_Batches )
    return 0i64;
  while ( this->pPrepare == this->pPrepareTail )
  {
LABEL_20:
    if ( this->Converting )
      goto LABEL_30;
    if ( this->pConvert != p_Batches )
    {
      do
      {
        pConvert = this->pConvert;
        if ( pConvert->Type == DP_Virtual )
          break;
        this->pPrepareTail = pConvert;
        pNext = pConvert->pNext;
        this->pConvert = pNext;
      }
      while ( pNext != p_Batches );
    }
    v23 = this->pConvert;
    if ( v23 != p_Batches )
    {
      pPrimitive = v23->pPrimitive;
      if ( pPrimitive->ModifyIndex < LODWORD(pPrimitive->Meshes.Data.Size) )
        Scaleform::Render::Primitive::updateMeshIndicies_Impl(pPrimitive);
      if ( !this->pConvert->MeshCount )
        goto LABEL_31;
      this->Converting = 1;
LABEL_30:
      Scaleform::Render::PrimitivePrepareBuffer::batchConvertStep(this);
      goto LABEL_31;
    }
    this->pPrepareTail = v23;
LABEL_31:
    if ( this->pPrepare == p_Batches )
      return 0i64;
  }
  while ( 1 )
  {
    pPrepare = this->pPrepare;
    if ( pPrepare->MeshNode.pMeshItem )
      goto LABEL_17;
    v6 = pPrepare->pPrimitive;
    if ( v6->ModifyIndex < LODWORD(v6->Meshes.Data.Size) )
      Scaleform::Render::Primitive::updateMeshIndicies_Impl(v6);
    MeshCount = 1;
    if ( pPrepare->Type != DP_Instanced )
      MeshCount = pPrepare->MeshCount;
    v8 = MeshCount;
    p_pMesh = &pPrepare->pPrimitive->Meshes.Data.Data[pPrepare->MeshIndex].pMesh;
    *((_QWORD *)&v27 + 1) = MeshCount;
    *(_QWORD *)&v27 = p_pMesh;
    v10 = 0i64;
    key.Meshes.StrideSize = 16i64;
    *(_OWORD *)&key.Meshes.pData = v27;
    if ( MeshCount )
    {
      do
      {
        pObject = p_pMesh->pObject;
        p_pMesh += 2;
        v10 ^= (unsigned __int64)pObject >> 5;
        --v8;
      }
      while ( v8 );
    }
    v12 = this->pPrepare;
    key.HashKey = v10;
    if ( v12->Type == DP_Failed )
      goto LABEL_16;
    if ( this->State )
      break;
    p_BatchCacheItemHash = &this->pCache->BatchCacheItemHash;
    v14.pTable = p_BatchCacheItemHash->pTable;
    if ( !p_BatchCacheItemHash->pTable )
      break;
    v15 = Scaleform::HashSetBase<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::Render::MeshCacheItem::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::MeshCacheItem *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::MeshCacheItem *,Scaleform::Render::MeshCacheItem::HashFunctor>>::findIndexCore<Scaleform::Render::MeshCacheItem::MeshContent>(
            p_BatchCacheItemHash,
            &key,
            (unsigned int)v10 & v14.pTable->SizeMask);
    if ( v15 < 0 )
      break;
    Scaleform::Render::MeshCacheItemUseNode::SetMeshItem(
      &v12->MeshNode,
      *((Scaleform::Render::MeshCacheItem **)&v14.pTable[2].EntryCount + 3 * v15));
LABEL_16:
    this->State = PS_Loop;
    waitForCache = 0;
LABEL_17:
    pMeshItem = this->pPrepare->MeshNode.pMeshItem;
    if ( pMeshItem )
    {
      pCacheList = pMeshItem->pCacheList;
      pMeshItem->pPrev->Scaleform::Render::FenceResource::pNext = pMeshItem->pNext;
      pMeshItem->pNext->Scaleform::Render::FenceResource::pPrev = pMeshItem->pPrev;
      pMeshItem->pPrev = (Scaleform::Render::MeshCacheItem *)-1i64;
      pMeshItem->pNext = (Scaleform::Render::MeshCacheItem *)-1i64;
      p_Size = &pCacheList->Slots[pMeshItem->ListType].Size;
      *p_Size -= pMeshItem->AllocSize;
      v19 = pMeshItem->pCacheList;
      pMeshItem->ListType = MCL_InFlight;
      pMeshItem->pNext = v19->Slots[1].Root.pNext;
      pMeshItem->pPrev = (Scaleform::Render::MeshCacheItem *)&v19->Slots[0].Size;
      v19->Slots[1].Root.pNext->pPrev = pMeshItem;
      v19->Slots[1].Root.pNext = pMeshItem;
      v19->Slots[1].Size += pMeshItem->AllocSize;
    }
    v20 = this->pPrepare->pNext;
    this->pPrepare = v20;
    if ( v20 == this->pPrepareTail )
      goto LABEL_20;
  }
  LOBYTE(v26) = waitForCache;
  if ( this->pCache->PreparePrimitive(this->pCache, this->pHal, v12, &key, v26) )
    goto LABEL_16;
  this->State = PS_NeedCache;
  return 1i64;
}

void __fastcall Scaleform::Render::PrimitivePrepareBuffer::StartPrimitive(
        Scaleform::Render::PrimitivePrepareBuffer *this,
        Scaleform::Render::HAL *hal,
        void *item,
        Scaleform::Render::Primitive *p,
        Scaleform::Render::PrimitiveEmitBuffer *emitBuffer,
        Scaleform::Render::MeshCache *cache)
{
  const Scaleform::Render::VertexFormat **p_pInstancedVFormat; // rsi
  const Scaleform::Render::VertexFormat **p_pBatchVFormat; // r14
  const Scaleform::Render::VertexFormat *pFormat; // rcx
  Scaleform::Render::PrimitiveBatch *pNext; // rax

  this->pEmitBuffer = emitBuffer;
  p_pInstancedVFormat = &this->pInstancedVFormat;
  this->pItem = item;
  p_pBatchVFormat = &this->pBatchVFormat;
  this->pCache = cache;
  this->pHal = hal;
  this->pPrimitive = p;
  this->MaximumBatchCount = 0;
  pFormat = p->pFill.pObject->Data.pFormat;
  this->pSourceVFormat = pFormat;
  *p_pInstancedVFormat = 0i64;
  *p_pBatchVFormat = 0i64;
  this->pSingleVFormat = 0i64;
  if ( pFormat
    && (hal->MapVertexFormat(
          hal,
          p->pFill.pObject->Data.Type,
          pFormat,
          &this->pSingleVFormat,
          p_pBatchVFormat,
          p_pInstancedVFormat,
          0),
        this->pSingleVFormat) )
  {
    this->MaximumBatchCount = this->pHal->GetMaximumBatchCount(this->pHal, p);
  }
  else
  {
    this->pSingleVFormat = 0i64;
    *p_pBatchVFormat = 0i64;
    *p_pInstancedVFormat = 0i64;
  }
  this->State = PS_Loop;
  pNext = p->Batches.Root.pNext;
  this->pConvert = pNext;
  this->pPrepareTail = pNext;
  this->pPrepare = pNext;
  this->Converting = 0;
}

bool __fastcall Scaleform::Render::PrimitivePrepareBuffer::attemptMergeBatches(
        Scaleform::Render::PrimitivePrepareBuffer *this,
        Scaleform::Render::PrimitiveBatch *pfirst,
        Scaleform::Render::PrimitiveBatch *psecond,
        Scaleform::Render::PrimitiveBatch *pother,
        Scaleform::Render::PrimitiveBatch *pknown,
        unsigned int *knownVerticesSize,
        unsigned int *knownIndexCount)
{
  const Scaleform::Render::MeshCacheParams *v11; // rdi
  unsigned int v12; // er12
  unsigned int *v14; // r15
  unsigned int *v15; // r14
  Scaleform::Render::PrimitiveBatch *v16; // rdi
  Scaleform::Render::PrimitiveBatch *v17; // rcx
  Scaleform::Render::PrimitiveEmitBuffer *pEmitBuffer; // rcx
  const Scaleform::Render::VertexFormat *pBatchVFormat; // rax
  unsigned int v20; // ecx
  unsigned int ptotalIndices[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int ptotalVertices; // [rsp+78h] [rbp+20h] BYREF

  if ( pother->LargeMesh || !this->pBatchVFormat || pother->Type > (unsigned int)DP_Batch )
    return 0;
  v11 = this->pCache->GetParams(&this->pCache->Scaleform::Render::MeshCacheConfig);
  v12 = psecond->MeshCount + pfirst->MeshCount;
  if ( v12 > this->MaximumBatchCount )
    return 0;
  Scaleform::Render::PrimitiveBatch::CalcMeshSizes(pother, &ptotalVertices, ptotalIndices);
  v14 = knownVerticesSize;
  if ( *knownVerticesSize + ptotalVertices * this->pBatchVFormat->Size <= v11->MaxVerticesSizeInBatch )
  {
    v15 = knownIndexCount;
    if ( ptotalIndices[0] + *knownIndexCount <= v11->MaxIndicesInBatch )
    {
      v16 = pknown;
      v17 = pknown;
      pknown->MeshCount = v12;
      v17->MeshIndex = pfirst->MeshIndex;
      v17->Type = DP_Batch;
      Scaleform::Render::PrimitiveBatch::ClearCacheItem(v17);
      Scaleform::Render::PrimitiveBatch::RemoveAndFree(pother);
      pEmitBuffer = this->pEmitBuffer;
      if ( this->pItem == pEmitBuffer->pItem && pEmitBuffer->pDraw == pfirst )
        pEmitBuffer->pDraw = v16;
      if ( this->pPrepare == pfirst )
        this->pPrepare = v16;
      pBatchVFormat = this->pBatchVFormat;
      this->pConvert = v16;
      v20 = ptotalVertices * pBatchVFormat->Size;
      LODWORD(pBatchVFormat) = ptotalIndices[0];
      *v14 += v20;
      *v15 += (unsigned int)pBatchVFormat;
      this->Converting = 0;
    }
  }
  return 0;
}

void __fastcall Scaleform::Render::PrimitivePrepareBuffer::batchConvertStep(
        Scaleform::Render::PrimitivePrepareBuffer *this)
{
  char v2; // r13
  Scaleform::Render::MeshCacheConfig *v3; // rcx
  unsigned int v4; // er15
  unsigned int v5; // er12
  unsigned int v6; // edi
  Scaleform::Render::PrimitiveBatch::BatchType v7; // er14
  __int64 v8; // rax
  const Scaleform::Render::VertexFormat *batchFormat; // rdx
  __int64 v10; // r8
  unsigned int v11; // er11
  Scaleform::Render::PrimitiveBatch *pConvert; // rcx
  unsigned int v13; // ebp
  const Scaleform::Render::VertexFormat *pInstancedVFormat; // r9
  __int64 v15; // r10
  unsigned int MeshCount; // eax
  Scaleform::Render::Mesh **v17; // r13
  __int64 v18; // rcx
  Scaleform::Render::Mesh *v19; // rsi
  unsigned int MaximumBatchCount; // eax
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // esi
  Scaleform::Render::PrimitiveBatch *v25; // rcx
  Scaleform::Render::PrimitiveBatch *v26; // r8
  Scaleform::Render::PrimitiveBatch *v27; // rdx
  Scaleform::Render::PrimitiveBatch *pNext; // r8
  Scaleform::Render::PrimitiveBatch *v29; // r9
  Scaleform::Render::PrimitiveBatch *v30; // rax
  Scaleform::Render::PrimitiveBatch *v31; // r8
  Scaleform::Render::PrimitiveEmitBuffer *pEmitBuffer; // rcx
  Scaleform::Render::PrimitiveBatch *v33; // rax
  Scaleform::Render::PrimitiveBatch *v34; // rsi
  Scaleform::Render::PrimitiveBatch *v35; // rdx
  Scaleform::Render::PrimitiveEmitBuffer *v36; // rcx
  Scaleform::Render::PrimitiveBatch *v37; // rcx
  unsigned int Size; // [rsp+40h] [rbp-78h]
  unsigned int v39; // [rsp+44h] [rbp-74h]
  Scaleform::Render::MeshCache::MeshResult result; // [rsp+48h] [rbp-70h] BYREF
  Scaleform::Render::Mesh *v41; // [rsp+50h] [rbp-68h]
  __int64 v42; // [rsp+58h] [rbp-60h]
  const Scaleform::Render::VertexFormat *v43; // [rsp+60h] [rbp-58h]
  __int64 v44; // [rsp+68h] [rbp-50h]
  char v45; // [rsp+C0h] [rbp+8h]
  unsigned int v46; // [rsp+C8h] [rbp+10h]
  unsigned int knownIndexCount; // [rsp+D0h] [rbp+18h] BYREF
  unsigned int knownVerticesSize; // [rsp+D8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = &this->pCache->Scaleform::Render::MeshCacheConfig;
  knownVerticesSize = 0;
  knownIndexCount = 0;
  v4 = 0;
  v5 = 0;
  v41 = 0i64;
  v6 = 0;
  v45 = 0;
  v7 = DP_Batch;
  v8 = (__int64)v3->GetParams(v3);
  batchFormat = this->pBatchVFormat;
  v10 = v8;
  v44 = v8;
  v11 = *(_DWORD *)(v8 + 52);
  v46 = v11;
  if ( batchFormat )
    Size = batchFormat->Size;
  else
    Size = 0;
  pConvert = this->pConvert;
  v13 = 0;
  pInstancedVFormat = this->pInstancedVFormat;
  v43 = pInstancedVFormat;
  v15 = (__int64)&pConvert->pPrimitive->Meshes.Data.Data[pConvert->MeshIndex];
  MeshCount = pConvert->MeshCount;
  v42 = v15;
  v39 = MeshCount;
  if ( !MeshCount )
    goto LABEL_16;
  v17 = (Scaleform::Render::Mesh **)(v15 + 8);
  v18 = 0i64;
  while ( 1 )
  {
    v19 = *v17;
    if ( *v17 == (Scaleform::Render::Mesh *)v18 )
    {
      if ( pInstancedVFormat )
      {
        MaximumBatchCount = this->MaximumBatchCount;
        if ( v6 == MaximumBatchCount )
          goto LABEL_14;
        if ( ++v6 >= MaximumBatchCount )
        {
          ++v13;
LABEL_14:
          LOBYTE(v4) = 0;
          goto LABEL_15;
        }
      }
      else
      {
        ++v6;
      }
    }
    else
    {
      if ( pInstancedVFormat && v6 >= v11 )
        goto LABEL_14;
      v6 = 1;
    }
    if ( !v19->IndexCount )
    {
      Scaleform::Render::MeshCache::GenerateMesh(
        this->pCache,
        &result,
        this->pHal,
        *v17,
        this->pSourceVFormat,
        this->pSingleVFormat,
        batchFormat,
        0);
      if ( result.Value <= Success_LargeMesh || result.Value == Fail_LargeMesh_NeedCache )
        goto LABEL_30;
      if ( result.Value == Fail_LargeMesh_TooBig )
      {
        v45 = 1;
      }
      else if ( result.Value == Fail_LargeMesh_ThisFrame )
      {
LABEL_30:
        v11 = v46;
        v10 = v44;
        v18 = (__int64)v41;
        pInstancedVFormat = v43;
        goto LABEL_31;
      }
      v7 = DP_Failed;
      goto LABEL_30;
    }
LABEL_31:
    if ( v19->LargeMesh )
      break;
    if ( v7 == DP_Failed )
      break;
    batchFormat = this->pBatchVFormat;
    if ( !batchFormat )
      break;
    v5 += v19->IndexCount;
    if ( v5 > *(_DWORD *)(v10 + 64)
      || (v4 += Size * v19->VertexCount, v4 > *(_DWORD *)(v10 + 60))
      || v13 >= this->MaximumBatchCount )
    {
      v23 = v6 - 1;
      if ( v19 != (Scaleform::Render::Mesh *)v18 )
        v23 = v6;
      v6 = v23;
      goto LABEL_14;
    }
    ++v13;
    knownIndexCount = v5;
    v17 += 2;
    knownVerticesSize = v4;
    v18 = (__int64)v19;
    v41 = v19;
    if ( v13 >= v39 )
      goto LABEL_14;
  }
  v11 = 1;
  ++v13;
  LOBYTE(v4) = 1;
LABEL_15:
  v2 = v45;
  v15 = v42;
LABEL_16:
  v21 = v13;
  if ( pInstancedVFormat )
  {
    v22 = this->pConvert->MeshCount;
    if ( v13 < v22 )
    {
      do
      {
        if ( *(_QWORD *)(v15 + 16i64 * v21 + 8) != *(_QWORD *)(v15 + 16i64 * (v13 - 1) + 8) )
          break;
        if ( v6 >= this->MaximumBatchCount )
          break;
        ++v6;
        ++v21;
      }
      while ( v21 < v22 );
    }
  }
  else if ( v6 > 1 )
  {
    v6 = 0;
  }
  if ( v6 >= v11 || v21 == v6 && v6 != 1 )
    v13 = v21;
  else
    v6 = 0;
  v24 = v13 - v6;
  if ( v13 != v6 )
  {
    v25 = this->pConvert;
    if ( v13 != v25->MeshCount || v6 )
    {
      v30 = Scaleform::Render::PrimitiveBatch::Create(v25->pPrimitive, DP_Batch, v25->MeshIndex, v24);
      v31 = this->pConvert;
      v29 = v30;
      v30->pNext = v31->pNext->Scaleform::ListNode<Scaleform::Render::PrimitiveBatch>::$B97D8B60C1ACCDCC2E89E5A3140D94B3::pPrev;
      v30->pPrev = v31->pPrev;
      v31->pPrev->pNext = v30;
      v31->pPrev = v30;
      this->pConvert->MeshIndex += v24;
      this->pConvert->MeshCount -= v24;
      pEmitBuffer = this->pEmitBuffer;
      if ( this->pItem == pEmitBuffer->pItem && pEmitBuffer->pDraw == this->pConvert )
        pEmitBuffer->pDraw = v30;
      if ( this->pPrepare == this->pConvert )
        this->pPrepare = v30;
    }
    else
    {
      v25->Type = DP_Batch;
      v26 = this->pConvert;
      if ( this->pPrepareTail != v26 )
        Scaleform::Render::PrimitivePrepareBuffer::attemptMergeBatches(
          this,
          v26->pPrev,
          v26,
          v26->pPrev,
          v26,
          &knownVerticesSize,
          &knownIndexCount);
      v27 = this->pConvert;
      pNext = v27->pNext;
      if ( pNext != (Scaleform::Render::PrimitiveBatch *)&this->pPrimitive->Batches )
        Scaleform::Render::PrimitivePrepareBuffer::attemptMergeBatches(
          this,
          v27,
          pNext,
          v27->pNext,
          v27,
          &knownVerticesSize,
          &knownIndexCount);
      v29 = this->pConvert;
    }
    if ( v29->MeshCount == 1 )
    {
      v29->Type = DP_Single;
      v29->pFormat = this->pSingleVFormat;
    }
    else
    {
      v29->pFormat = this->pBatchVFormat;
    }
    this->pPrepareTail = this->pConvert;
  }
  if ( v6 )
  {
    if ( v6 <= 1 || v7 == DP_Failed )
    {
      if ( !v2 )
        v7 = DP_Single;
    }
    else
    {
      v7 = DP_Instanced;
    }
    v33 = Scaleform::Render::PrimitiveBatch::Create(this->pConvert->pPrimitive, v7, this->pConvert->MeshIndex, v6);
    v34 = v33;
    v33->LargeMesh = v4;
    if ( v7 == DP_Instanced )
    {
      v33->pFormat = this->pInstancedVFormat;
    }
    else if ( (v7 & 0xFFFFFFFB) == 0 )
    {
      v33->pFormat = this->pSingleVFormat;
    }
    v35 = this->pConvert;
    v33->pNext = v35->pNext->Scaleform::ListNode<Scaleform::Render::PrimitiveBatch>::$B97D8B60C1ACCDCC2E89E5A3140D94B3::pPrev;
    v33->pPrev = v35->pPrev;
    v35->pPrev->pNext = v33;
    v35->pPrev = v33;
    this->pConvert->MeshIndex += v6;
    this->pConvert->MeshCount -= v6;
    v36 = this->pEmitBuffer;
    if ( this->pItem == v36->pItem && v36->pDraw == this->pConvert )
      v36->pDraw = v33;
    v37 = this->pConvert;
    if ( this->pPrepare == v37 )
      this->pPrepare = v33;
    if ( !v37->MeshCount )
    {
      Scaleform::Render::PrimitiveBatch::RemoveAndFree(v37);
      this->pConvert = v34;
    }
    this->pPrepareTail = v34;
  }
  if ( v13 >= v39 )
    this->Converting = 0;
}

void __fastcall Scaleform::Render::Primitive::emitToHAL(
        Scaleform::Render::Primitive *this,
        Scaleform::Render::HAL *hal,
        void *item,
        Scaleform::Render::PrimitivePrepareBuffer *prepareBuffer,
        Scaleform::Render::PrimitiveEmitBuffer *emitBuffer)
{
  Scaleform::Render::PrimitiveBatch *pDraw; // rsi
  Scaleform::Render::PrimitiveBatch *pPrepare; // rdi

  if ( item == emitBuffer->pItem )
  {
    pDraw = emitBuffer->pDraw;
  }
  else
  {
    pDraw = this->Batches.Root.pNext;
    emitBuffer->pDraw = pDraw;
    emitBuffer->pItem = item;
  }
  if ( item == prepareBuffer->pItem )
  {
    pPrepare = prepareBuffer->pPrepare;
    emitBuffer->pDraw = pPrepare;
  }
  else
  {
    pPrepare = this->Batches.Root.pPrev->pNext;
  }
  if ( this->ModifyIndex < LODWORD(this->Meshes.Data.Size) )
    Scaleform::Render::Primitive::updateMeshIndicies_Impl(this);
  hal->DrawProcessedPrimitive(hal, this, pDraw, pPrepare);
}

__int64 __fastcall Scaleform::Render::Primitive::prepare(
        Scaleform::Render::Primitive *this,
        Scaleform::Render::HAL *hal,
        void *item,
        Scaleform::Render::PrimitivePrepareBuffer *prepareBuffer,
        Scaleform::Render::PrimitiveEmitBuffer *emitBuffer,
        Scaleform::Render::MeshCache *cache,
        bool waitForCache)
{
  if ( item != prepareBuffer->pItem )
    Scaleform::Render::PrimitivePrepareBuffer::StartPrimitive(prepareBuffer, hal, item, this, emitBuffer, cache);
  return Scaleform::Render::PrimitivePrepareBuffer::ProcessPrimitive(prepareBuffer, waitForCache);
}

