#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitiveprocessor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"

Scaleform::Render::Mesh::Mesh(Scaleform::Render::MeshProvider * provider, const Scaleform::Render::Matrix2x4<float> & viewMatrix, float morphRatio, unsigned long layer, unsigned long meshGenFlags); // 0x1403976B0
Scaleform::Render::Mesh::~Mesh(); // 0x140397C60
Scaleform::Render::MeshUseStatus Scaleform::Render::Mesh::GetUseStatus(); // 0x140398E70
Scaleform::Render::PrimitiveFill::~PrimitiveFill(); // 0x140397E50
bool Scaleform::Render::PrimitiveFill::IsSolid(Scaleform::Render::PrimitiveFillType type); // 0x1403997A0
void Scaleform::Render::PrimitiveFillManager::removeGradient(Scaleform::Render::GradientImage * img); // 0x14039A420
Scaleform::Render::Image * Scaleform::Render::PrimitiveFillManager::createGradientImage(Scaleform::Render::GradientData * data, float morphRatio); // 0x14039A2F0
Scaleform::Render::PrimitiveFill * Scaleform::Render::PrimitiveFillManager::CreateFill(const Scaleform::Render::PrimitiveFillData & initdata); // 0x1403983F0
Scaleform::Render::PrimitiveFill * Scaleform::Render::PrimitiveFillManager::CreateFill(const Scaleform::Render::FillData & initdata, Scaleform::Ptr<Scaleform::Render::Image> * gradientImg, Scaleform::Render::TextureManager * mng, float morphRatio); // 0x140398550
struct Scaleform::Render::FillTypeMergeInfo
{
	unsigned char F0; // 0x0
	unsigned char F1; // 0x1
	unsigned char MergeFlags; // 0x2
	unsigned char Result; // 0x3
};
const char * Scaleform::Render::PrimitiveFill_FormatCheck[14]; // 0x1409F9CB0
Scaleform::Render::FillTypeMergeInfo Scaleform::Render::FillTypeMergeTable[11]; // 0x1409F9D20
unsigned long Scaleform::Render::Primitive_CreateCount; // 0x140A72574
unsigned long Scaleform::Render::Primitive_Total; // 0x140A72578
unsigned long Scaleform::Render::Primitive_Insert; // 0x140A7257C
Scaleform::Render::PrimitiveFill * Scaleform::Render::PrimitiveFillManager::CreateMergedFill(unsigned long mergeFlags, const Scaleform::Render::VertexFormat * vformat, const Scaleform::Render::FillData * fd0, const Scaleform::Render::FillData * fd1, Scaleform::Ptr<Scaleform::Render::Image> * gradientImg0, Scaleform::Ptr<Scaleform::Render::Image> * gradientImg1, Scaleform::Render::TextureManager * textureManager, float morphRatio); // 0x1403988F0
Scaleform::Render::FillData::FillData(Scaleform::Render::FillType type); // 0x140397670
Scaleform::Render::FillData::FillData(Scaleform::Render::Image * p, Scaleform::Render::ImageFillMode fm); // 0x140397640
Scaleform::Render::FillData::FillData(Scaleform::Render::GradientData * p); // 0x140397610
Scaleform::Render::Primitive::Primitive(Scaleform::Render::PrimitiveFill * pfill); // 0x140397820
Scaleform::Render::Primitive::~Primitive(); // 0x140397D60
bool Scaleform::Render::Primitive::Insert(Scaleform::Render::HAL * hal, unsigned long index, Scaleform::Render::Mesh * pmesh, const Scaleform::Render::MatrixPoolImpl::HMatrix & m); // 0x1403993D0
void Scaleform::Render::Primitive::Remove(unsigned long index, unsigned long count); // 0x140399990
void Scaleform::Render::Primitive::SetMesh(unsigned long index, Scaleform::Render::Mesh * pmesh); // 0x14039A220
void Scaleform::Render::Primitive::updateMeshIndicies_Impl(); // 0x14039AA90
Scaleform::Render::PrimitiveBatch * Scaleform::Render::PrimitiveBatch::Create(Scaleform::Render::Primitive * p, Scaleform::Render::PrimitiveBatch::BatchType type, unsigned long meshIndex, unsigned long meshCount); // 0x140398380
void Scaleform::Render::PrimitiveBatch::RemoveAndFree(); // 0x140399B40
void Scaleform::Render::PrimitiveBatch::CalcMeshSizes(unsigned long * ptotalVertices, unsigned long * ptotalIndices); // 0x140398240
Scaleform::Render::ComplexMesh::ComplexMesh(Scaleform::Render::MeshProvider * meshProvider, Scaleform::Render::PrimitiveFillManager * fillManager, const Scaleform::Render::Matrix2x4<float> & viewMatrix, float morphRatio, unsigned long layer, unsigned long meshGenFlags); // 0x140397530
Scaleform::Render::ComplexMesh::~ComplexMesh(); // 0x140397B30
bool Scaleform::Render::ComplexMesh::InitFillRecords(Scaleform::Render::HAL * hal, const Scaleform::Render::VertexOutput::Fill * fills, unsigned long fillRecordCount, const Scaleform::Render::Matrix2x4<float> & vertexMatrix, unsigned long long * vbSize, unsigned long * vertexCount, unsigned long * indexCount); // 0x140398EE0
void Scaleform::Render::ComplexMesh::updateFillMatrixCache(Scaleform::Render::HAL * hal, const Scaleform::Render::Matrix2x4<float> & vertexMatrix); // 0x14039A760
bool Scaleform::Render::ComplexMesh::updateFills(Scaleform::Render::HAL * hal); // 0x14039A830
void Scaleform::Render::MaskPrimitive::Insert(unsigned long long index, const Scaleform::Render::MatrixPoolImpl::HMatrix & m); // 0x1403993C0
void Scaleform::Render::MaskPrimitive::Remove(unsigned long long index, unsigned long long count); // 0x140399980
void Scaleform::Render::MaskPrimitive::EmitToHAL(Scaleform::Render::RenderQueueItem & __formal, Scaleform::Render::RenderQueueProcessor & qp); // 0x140398D70
Scaleform::Render::CacheablePrimitive::CacheablePrimitive(); // 0x140397490
Scaleform::Render::CacheablePrimitive::~CacheablePrimitive(); // 0x140397A40
void Scaleform::Render::CacheablePrimitive::GetCacheResults(Scaleform::Render::RenderTarget * * results, unsigned long count); // 0x140398DF0
void Scaleform::Render::CacheablePrimitive::SetCacheResults(Scaleform::Render::CacheablePrimitive::CacheState state, Scaleform::Render::RenderTarget * * results, unsigned long count); // 0x14039A140
void Scaleform::Render::CacheablePrimitive::Insert(unsigned long long index, const Scaleform::Render::MatrixPoolImpl::HMatrix & m); // 0x1403993B0
void Scaleform::Render::CacheablePrimitive::Remove(unsigned long long index, unsigned long long count); // 0x1403998A0
void Scaleform::Render::CacheablePrimitive::uncachePrimitive(unsigned long long index); // 0x14039A6C0
void Scaleform::Render::FilterPrimitive::EmitToHAL(Scaleform::Render::RenderQueueItem & item, Scaleform::Render::RenderQueueProcessor & qp); // 0x140398D20
Scaleform::Render::RenderQueueItem::QIPrepareResult Scaleform::Render::FilterPrimitive::Prepare(Scaleform::Render::RenderQueueItem & __formal, Scaleform::Render::RenderQueueProcessor & qp, bool __formal); // 0x140399840
void Scaleform::Render::BlendPrimitive::EmitToHAL(Scaleform::Render::RenderQueueItem & item, Scaleform::Render::RenderQueueProcessor & qp); // 0x140398CE0
Scaleform::Render::RenderQueueItem::QIPrepareResult Scaleform::Render::BlendPrimitive::Prepare(Scaleform::Render::RenderQueueItem & __formal, Scaleform::Render::RenderQueueProcessor & qp, bool __formal); // 0x1403997F0
void Scaleform::Render::ViewMatrix3DPrimitive::EmitToHAL(Scaleform::Render::RenderQueueItem & __formal, Scaleform::Render::RenderQueueProcessor & qp); // 0x140398DD0
void Scaleform::Render::ProjectionMatrix3DPrimitive::EmitToHAL(Scaleform::Render::RenderQueueItem & __formal, Scaleform::Render::RenderQueueProcessor & qp); // 0x140398D90
void Scaleform::Render::UserDataPrimitive::EmitToHAL(Scaleform::Render::RenderQueueItem & __formal, Scaleform::Render::RenderQueueProcessor & qp); // 0x140398DB0//decompilation failure at 1409F9CB0!
//decompilation failure at 1409F9D20!
//decompilation failure at 140A72574!
//decompilation failure at 140A72578!
//decompilation failure at 140A7257C!
void __fastcall Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor>>::Add<Scaleform::Render::GradientImage *>(
        Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> > *this,
        void *pmemAddr,
        Scaleform::Render::GradientImage *const *key)
{
  Scaleform::Render::GradientData *pObject; // rcx
  unsigned __int64 HashValue; // rax

  pObject = (*key)->pData.pObject;
  if ( pObject )
    HashValue = Scaleform::Render::GradientData::GetHashValue(pObject, (*key)->MorphRatio);
  else
    HashValue = 0i64;
  Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor>>::add<Scaleform::Render::GradientImage *>(
    this,
    pmemAddr,
    key,
    HashValue);
}

char __fastcall Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor>>::RemoveAlt<Scaleform::Render::GradientImage *>(
        Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> > *this,
        Scaleform::Render::GradientImage *const *key)
{
  Scaleform::Render::GradientData *pObject; // rcx
  unsigned __int64 v5; // rax
  Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> >::TableType *pTable; // r8
  Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> >::TableType *v7; // rdx
  unsigned __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rdx
  unsigned __int64 v11; // r10
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 *v14; // rcx

  if ( !this->pTable )
    return 0;
  pObject = (*key)->pData.pObject;
  v5 = pObject ? Scaleform::Render::GradientData::GetHashValue(pObject, (*key)->MorphRatio) : 0i64;
  pTable = this->pTable;
  v7 = this->pTable + 1;
  v8 = v5 & this->pTable->SizeMask;
  v9 = *(&v7->EntryCount + 3 * v8) == -2i64;
  v10 = (__int64)v7 + 24 * v8;
  if ( v9 || *(_QWORD *)(v10 + 8) != v8 )
    return 0;
  v11 = v5 & this->pTable->SizeMask;
  v12 = -1i64;
  while ( *(_QWORD *)(v10 + 8) != v11 || *(Scaleform::Render::GradientImage *const *)(v10 + 16) != *key )
  {
    v12 = v8;
    v8 = *(_QWORD *)v10;
    if ( *(_QWORD *)v10 == -1i64 )
      return 0;
    v10 = (__int64)&pTable[1] + 24 * v8;
  }
  v13 = *(_QWORD *)v10;
  if ( v11 == v8 )
  {
    if ( v13 != -1i64 )
    {
      *(_QWORD *)v10 = -2i64;
      v14 = &pTable->EntryCount + 3 * v13;
      *(_QWORD *)v10 = v14[2];
      *(_QWORD *)(v10 + 8) = v14[3];
      *(_QWORD *)(v10 + 16) = v14[4];
      v14[2] = -2i64;
      --this->pTable->EntryCount;
      return 1;
    }
  }
  else
  {
    *(&pTable[1].EntryCount + 3 * v12) = v13;
  }
  *(_QWORD *)v10 = -2i64;
  --this->pTable->EntryCount;
  return 1;
}

char __fastcall Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor>>::RemoveAlt<Scaleform::Render::PrimitiveFill *>(
        Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> > *this,
        Scaleform::Render::PrimitiveFill *const *key)
{
  Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> >::TableType *pTable; // r8
  Scaleform::Render::PrimitiveFill *v4; // r11
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  bool v7; // zf
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 *v12; // rcx

  pTable = this->pTable;
  if ( !this->pTable )
    return 0;
  v4 = *key;
  v5 = pTable->SizeMask & ((__int64)(*key)->Data.Textures[1].pObject ^ (unsigned int)(*key)->Data.Type ^ (*key)->Data.SolidColor.Raw ^ ((unsigned __int64)(*key)->Data.Textures[0].pObject >> 2) ^ (*key)->Data.pFormat->Size ^ (4i64 * (((*key)->Data.FillModes[0].Fill ^ (4 * (*key)->Data.FillModes[1].Fill)) & 0x3FFFFFFF)));
  v6 = v5 + 2 * (v5 + 1);
  v7 = *(&pTable->EntryCount + v6) == -2i64;
  v8 = &pTable->EntryCount + v6;
  if ( v7 || v8[1] != v5 )
    return 0;
  v9 = v5;
  v10 = -1i64;
  while ( v8[1] != v9 || (Scaleform::Render::PrimitiveFill *)v8[2] != v4 )
  {
    v10 = v5;
    v5 = *v8;
    if ( *v8 == -1i64 )
      return 0;
    v8 = &pTable[v5 + 1].EntryCount + v5;
  }
  v7 = v9 == v5;
  v11 = *v8;
  if ( v7 )
  {
    if ( v11 != -1i64 )
    {
      *v8 = -2i64;
      v12 = &pTable->EntryCount + 3 * v11;
      *v8 = v12[2];
      v8[1] = v12[3];
      v8[2] = v12[4];
      v12[2] = -2i64;
      --this->pTable->EntryCount;
      return 1;
    }
  }
  else
  {
    *(&pTable[1].EntryCount + 3 * v10) = v11;
  }
  *v8 = -2i64;
  --this->pTable->EntryCount;
  return 1;
}

void __fastcall Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor>>::add<Scaleform::Render::GradientImage *>(
        Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> > *this,
        void *pmemAddr,
        Scaleform::Render::GradientImage *const *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> >::TableType *v11; // r9
  unsigned __int64 v12; // r11
  unsigned __int64 *v13; // r8
  Scaleform::Render::GradientImage *v14; // rax
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
  Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor>>::setRawCapacity(
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

void __fastcall Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor>>::add<Scaleform::Render::PrimitiveFill *>(
        Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> > *this,
        void *pmemAddr,
        Scaleform::Render::PrimitiveFill *const *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> >::TableType *v11; // r9
  unsigned __int64 v12; // r11
  unsigned __int64 *v13; // r8
  Scaleform::Render::PrimitiveFill *v14; // rax
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
  Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor>>::setRawCapacity(
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

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor>>::findIndexCore<Scaleform::Render::GradientKey>(
        Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> > *this,
        const Scaleform::Render::GradientKey *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v3; // rdi
  bool v5; // zf
  unsigned __int64 *v6; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbp

  v3 = hashValue + 2 * (hashValue + 1);
  v5 = *(&this->pTable->EntryCount + v3) == -2i64;
  v6 = &this->pTable->EntryCount + v3;
  v9 = hashValue;
  if ( v5 || v6[1] != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( v6[1] == hashValue )
    {
      v10 = v6[2];
      if ( Scaleform::Render::GradientData::operator==(*(Scaleform::Render::GradientData **)(v10 + 48), key->pData) )
      {
        if ( !key->pData->pMorphTo || *(float *)(v10 + 64) == key->MorphRatio )
          return v9;
      }
    }
    v9 = *v6;
    if ( *v6 == -1i64 )
      break;
    v6 = &this->pTable[v9 + 1].EntryCount + v9;
  }
  return -1i64;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor>>::findIndexCore<Scaleform::Render::PrimitiveFillData>(
        Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> > *this,
        const Scaleform::Render::PrimitiveFillData *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> >::TableType *pTable; // rbp
  unsigned __int64 v6; // rsi
  Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> >::TableType *v7; // rdi
  bool v8; // zf
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rcx
  Scaleform::Render::VertexFormat *v11; // rcx
  const Scaleform::Render::VertexFormat *pFormat; // rdx

  pTable = this->pTable;
  v6 = hashValue;
  v7 = this->pTable + 1;
  v8 = *(&v7->EntryCount + 3 * hashValue) == -2i64;
  v9 = &v7->EntryCount + 3 * hashValue;
  if ( v8 || v9[1] != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( v9[1] == hashValue )
    {
      v10 = v9[2];
      if ( *(_DWORD *)(v10 + 16) == key->Type
        && *(_DWORD *)(v10 + 20) == key->SolidColor.Raw
        && *(_BYTE *)(v10 + 24) == key->FillModes[0].Fill
        && *(_BYTE *)(v10 + 25) == key->FillModes[1].Fill
        && *(Scaleform::Render::Texture **)(v10 + 32) == key->Textures[0].pObject
        && *(Scaleform::Render::Texture **)(v10 + 40) == key->Textures[1].pObject )
      {
        v11 = *(Scaleform::Render::VertexFormat **)(v10 + 48);
        pFormat = key->pFormat;
        if ( v11 == pFormat || Scaleform::Render::VertexFormat::operator==(v11, pFormat) )
          break;
      }
    }
    v6 = *v9;
    if ( *v9 == -1i64 )
      return -1i64;
    v9 = &pTable[1].EntryCount + 3 * v6;
  }
  return v6;
}

void __fastcall Scaleform::Render::CacheablePrimitive::CacheablePrimitive(Scaleform::Render::CacheablePrimitive *this)
{
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *CacheResults; // rbx
  __int64 v3; // rdi

  this->Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::CacheablePrimitive_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  CacheResults = this->CacheResults;
  this->RefCount = 1;
  this->Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::CacheablePrimitive_vtbl *)&Scaleform::Render::CacheablePrimitive::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67>'};
  this->Scaleform::Render::RenderQueueItem::Interface::__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::CacheablePrimitive::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
  v3 = 2i64;
  this->CacheResults[0].pObject = 0i64;
  this->CacheResults[1].pObject = 0i64;
  this->PrimitiveArea.Data.Data = 0i64;
  this->PrimitiveArea.Data.Size = 0i64;
  this->PrimitiveArea.Data.Policy.Capacity = 0i64;
  this->Caching = Cache_Mesh;
  do
  {
    if ( CacheResults->pObject )
      CacheResults->pObject->Release(CacheResults->pObject);
    CacheResults->pObject = 0i64;
    ++CacheResults;
    --v3;
  }
  while ( v3 );
  this->uncachePrimitive(this, 0i64);
}

void __fastcall Scaleform::Render::ComplexMesh::ComplexMesh(
        Scaleform::Render::ComplexMesh *this,
        Scaleform::Render::MeshProvider *meshProvider,
        Scaleform::Render::PrimitiveFillManager *fillManager,
        const Scaleform::Render::Matrix2x4<float> *viewMatrix,
        float morphRatio,
        unsigned int layer,
        unsigned int meshGenFlags)
{
  Scaleform::Render::MeshBase::MeshBase(this, meshProvider, viewMatrix, morphRatio, layer, meshGenFlags);
  this->Scaleform::Render::MeshBase::Scaleform::RefCountBase<Scaleform::Render::MeshBase,68>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::ComplexMesh_vtbl *)&Scaleform::Render::ComplexMesh::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::MeshBase,68>'};
  this->Scaleform::Render::MeshBase::Scaleform::Render::MeshStagingNode::__vftable = (Scaleform::Render::MeshStagingNode_vtbl *)&Scaleform::Render::ComplexMesh::`vftable'{for `Scaleform::Render::MeshStagingNode'};
  this->UpdateListNode.pPrev = 0i64;
  this->UpdateListNode.pNext = 0i64;
  this->pFillManager = fillManager;
  this->pCacheMeshItem = 0i64;
  this->AllocTooBig = 0;
  *(_QWORD *)&this->VertexMatrix.M[0][2] = 0i64;
  this->VertexMatrix.M[1][0] = 0.0;
  this->VertexMatrix.M[1][3] = 0.0;
  *(_QWORD *)&this->VertexMatrix.M[0][0] = 1065353216i64;
  *(_QWORD *)&this->VertexMatrix.M[1][1] = 1065353216i64;
  this->FillRecords.Data.Data = 0i64;
  this->FillRecords.Data.Size = 0i64;
  this->FillRecords.Data.Policy.Capacity = 0i64;
  this->FillMatrixCache.Data.Data = 0i64;
  this->FillMatrixCache.Data.Size = 0i64;
  this->FillMatrixCache.Data.Policy.Capacity = 0i64;
  this->GradientImages.Data.Data = 0i64;
  this->GradientImages.Data.Size = 0i64;
  this->GradientImages.Data.Policy.Capacity = 0i64;
}

void __fastcall Scaleform::Render::FillData::FillData(
        Scaleform::Render::FillData *this,
        Scaleform::Render::GradientData *p)
{
  this->Type = Fill_Gradient;
  this->pGradient = p;
  this->PrimFill = PrimFill_Texture_EAlpha;
  this->FillMode.Fill = 3;
  this->pVFormat = &Scaleform::Render::VertexXY16iCF32::Format;
}

void __fastcall Scaleform::Render::FillData::FillData(
        Scaleform::Render::FillData *this,
        Scaleform::Render::Image *p,
        unsigned __int8 *fm)
{
  this->Type = Fill_Image;
  this->pGradient = (Scaleform::Render::GradientData *)p;
  this->PrimFill = PrimFill_Texture_EAlpha;
  this->FillMode.Fill = *fm;
  this->pVFormat = &Scaleform::Render::VertexXY16iCF32::Format;
}

void __fastcall Scaleform::Render::FillData::FillData(
        Scaleform::Render::FillData *this,
        Scaleform::Render::FillType type)
{
  this->Type = type;
  this->Color = 0;
  this->PrimFill = PrimFill_VColor_EAlpha;
  this->FillMode.Fill = 0;
  this->pVFormat = &Scaleform::Render::VertexXY16iCF32::Format;
  if ( type == Fill_Mask )
  {
    this->PrimFill = PrimFill_Mask;
    this->pVFormat = &Scaleform::Render::VertexXY16i::Format;
  }
}

void __fastcall Scaleform::Render::Mesh::Mesh(
        Scaleform::Render::Mesh *this,
        Scaleform::Render::MeshProvider *provider,
        const Scaleform::Render::Matrix2x4<float> *viewMatrix,
        float morphRatio,
        unsigned int layer,
        unsigned int meshGenFlags)
{
  Scaleform::Render::MeshBase::MeshBase(this, provider, viewMatrix, morphRatio, layer, meshGenFlags);
  this->Scaleform::Render::MeshBase::Scaleform::RefCountBase<Scaleform::Render::MeshBase,68>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::Mesh_vtbl *)&Scaleform::Render::Mesh::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::MeshBase,68>'};
  this->Scaleform::Render::MeshBase::Scaleform::Render::MeshStagingNode::__vftable = (Scaleform::Render::MeshStagingNode_vtbl *)&Scaleform::Render::Mesh::`vftable'{for `Scaleform::Render::MeshStagingNode'};
  this->CacheItems.Size = 0i64;
  *(_QWORD *)&this->VertexMatrix.M[0][2] = 0i64;
  this->VertexMatrix.M[1][0] = 0.0;
  this->VertexMatrix.M[1][3] = 0.0;
  *(_QWORD *)&this->VertexMatrix.M[0][0] = 1065353216i64;
  *(_QWORD *)&this->VertexMatrix.M[1][1] = 1065353216i64;
  this->LargeMesh = 0;
}

void __fastcall Scaleform::Render::MeshBase::MeshBase(
        Scaleform::Render::MeshBase *this,
        Scaleform::Render::MeshProvider *provider,
        const Scaleform::Render::Matrix2x4<float> *viewMatrix,
        float morphRatio,
        unsigned int layer,
        unsigned int meshGenFlags)
{
  this->Scaleform::RefCountBase<Scaleform::Render::MeshBase,68>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::MeshBase_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->pPrev = (Scaleform::Render::MeshStagingNode *)-1i64;
  this->pNext = (Scaleform::Render::MeshStagingNode *)-1i64;
  this->StagingBufferSize = 0i64;
  this->StagingBufferOffset = 0i64;
  this->StagingBufferIndexOffset = 0i64;
  *(_QWORD *)&this->PinCount = 0i64;
  this->IndexCount = 0;
  this->Scaleform::RefCountBase<Scaleform::Render::MeshBase,68>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::MeshBase_vtbl *)&Scaleform::Render::MeshBase::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::MeshBase,68>'};
  this->Scaleform::Render::MeshStagingNode::__vftable = (Scaleform::Render::MeshStagingNode_vtbl *)&Scaleform::Render::MeshBase::`vftable'{for `Scaleform::Render::MeshStagingNode'};
  if ( provider )
    provider->AddRef(provider);
  this->ViewMatrix.M[0][0] = viewMatrix->M[0][0];
  this->ViewMatrix.M[0][1] = viewMatrix->M[0][1];
  this->ViewMatrix.M[0][2] = viewMatrix->M[0][2];
  this->ViewMatrix.M[0][3] = viewMatrix->M[0][3];
  this->ViewMatrix.M[1][0] = viewMatrix->M[1][0];
  this->ViewMatrix.M[1][1] = viewMatrix->M[1][1];
  this->ViewMatrix.M[1][2] = viewMatrix->M[1][2];
  this->ViewMatrix.M[1][3] = viewMatrix->M[1][3];
  this->pProvider.pObject = provider;
  this->pScale9Grid.pObject = 0i64;
  this->Layer = layer;
  this->MGFlags = meshGenFlags;
  this->MorphRatio = morphRatio;
}

void __fastcall Scaleform::Render::Primitive::Primitive(
        Scaleform::Render::Primitive *this,
        Scaleform::Render::PrimitiveFill *pfill)
{
  Scaleform::Render::PrimitiveFillType Type; // er8
  char v3; // al

  this->Scaleform::RefCountBase<Scaleform::Render::Primitive,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::Primitive_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->Scaleform::RefCountBase<Scaleform::Render::Primitive,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::Primitive_vtbl *)&Scaleform::Render::Primitive::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::Primitive,67>'};
  this->Scaleform::Render::RenderQueueItem::Interface::__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::Primitive::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
  this->RefCount = 1;
  if ( pfill )
    ++pfill->RefCount;
  this->pFill.pObject = pfill;
  this->Batches.Root.pPrev = (Scaleform::Render::PrimitiveBatch *)&this->Batches;
  this->Batches.Root.pNext = (Scaleform::Render::PrimitiveBatch *)&this->Batches;
  Type = pfill->Data.Type;
  if ( (unsigned int)(Type - 5) > 5 )
    v3 = 0;
  else
    v3 = ((unsigned int)(Type - 9) <= 1) + 1;
  ++Scaleform::Render::Primitive_CreateCount;
  ++Scaleform::Render::Primitive_Total;
  this->MatricesPerMesh = v3 + 1;
  this->Meshes.Data.Data = 0i64;
  this->Meshes.Data.Size = 0i64;
  this->Meshes.Data.Policy.Capacity = 0i64;
  this->ModifyIndex = 0;
}

void __fastcall Scaleform::Render::PrimitiveFillData::PrimitiveFillData(
        Scaleform::Render::PrimitiveFillData *this,
        const Scaleform::Render::PrimitiveFillData *src)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx

  this->Type = src->Type;
  this->SolidColor.Raw = src->SolidColor.Raw;
  *(_WORD *)&this->FillModes[0].Fill = 0;
  this->Textures[0].pObject = 0i64;
  this->Textures[1].pObject = 0i64;
  this->pFormat = src->pFormat;
  *(_WORD *)&this->FillModes[0].Fill = *(_WORD *)&src->FillModes[0].Fill;
  pObject = (Scaleform::RefCountVImpl *)src->Textures[0].pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v5 = (Scaleform::RefCountVImpl *)this->Textures[0].pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  this->Textures[0].pObject = src->Textures[0].pObject;
  v6 = (Scaleform::RefCountVImpl *)src->Textures[1].pObject;
  if ( v6 )
    Scaleform::Render::RenderBuffer::AddRef(v6);
  v7 = (Scaleform::RefCountVImpl *)this->Textures[1].pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  this->Textures[1].pObject = src->Textures[1].pObject;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::ComplexMesh::FillRecord,Scaleform::AllocatorLH<Scaleform::Render::ComplexMesh::FillRecord,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::ComplexMesh::FillRecord,Scaleform::AllocatorLH<Scaleform::Render::ComplexMesh::FillRecord,2>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataBase<Scaleform::Render::ComplexMesh::FillRecord,Scaleform::AllocatorLH<Scaleform::Render::ComplexMesh::FillRecord,2>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::Render::ComplexMesh::FillRecord *i; // rbx

  Size = this->Size;
  for ( i = &this->Data[Size - 1]; Size; --Size )
  {
    if ( i->pFill.pObject )
      Scaleform::RefCountNTSImpl::Release(i->pFill.pObject);
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataBase<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *i; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  Size = this->Size;
  for ( i = &this->Data[Size - 1]; Size; --Size )
  {
    pObject = (Scaleform::RefCountVImpl *)i->pMesh.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    if ( i->M.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
      Scaleform::Render::MatrixPoolImpl::DataHeader::Release(i->M.pHandle->pHeader);
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::Render::CacheablePrimitive::~CacheablePrimitive(Scaleform::Render::CacheablePrimitive *this)
{
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *CacheResults; // rbx
  __int64 v2; // rdi
  __int64 v4; // rsi
  unsigned __int64 Size; // rbp
  Scaleform::ArrayLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2,Scaleform::ArrayDefaultPolicy> *p_PrimitiveArea; // rbx
  Scaleform::Render::MatrixPoolImpl::HMatrix *i; // rsi
  unsigned __int64 Capacity; // rcx

  this->Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::CacheablePrimitive_vtbl *)&Scaleform::Render::CacheablePrimitive::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67>'};
  CacheResults = this->CacheResults;
  v2 = 2i64;
  this->Scaleform::Render::RenderQueueItem::Interface::__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::CacheablePrimitive::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
  v4 = 2i64;
  do
  {
    if ( CacheResults->pObject )
      CacheResults->pObject->Release(CacheResults->pObject);
    CacheResults->pObject = 0i64;
    ++CacheResults;
    --v4;
  }
  while ( v4 );
  Size = this->PrimitiveArea.Data.Size;
  p_PrimitiveArea = &this->PrimitiveArea;
  for ( i = &this->PrimitiveArea.Data.Data[Size - 1]; Size; --Size )
  {
    if ( i->pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
      Scaleform::Render::MatrixPoolImpl::DataHeader::Release(i->pHandle->pHeader);
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, p_PrimitiveArea->Data.Data);
  do
  {
    Capacity = p_PrimitiveArea[-1].Data.Policy.Capacity;
    p_PrimitiveArea = (Scaleform::ArrayLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2,Scaleform::ArrayDefaultPolicy> *)((char *)p_PrimitiveArea - 8);
    --v2;
    if ( Capacity )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)Capacity + 16i64))(Capacity);
  }
  while ( v2 );
  this->Scaleform::Render::RenderQueueItem::Interface::__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::RenderQueueItem::Interface::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::ComplexMesh::~ComplexMesh(Scaleform::Render::ComplexMesh *this)
{
  bool v1; // zf
  Scaleform::Render::MeshCacheItem *pCacheMeshItem; // rcx
  unsigned __int64 Size; // rsi
  Scaleform::Ptr<Scaleform::Render::Image> *i; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::MeshProvider *v7; // rcx

  v1 = this->UpdateListNode.pPrev == 0i64;
  this->Scaleform::Render::MeshBase::Scaleform::RefCountBase<Scaleform::Render::MeshBase,68>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::ComplexMesh_vtbl *)&Scaleform::Render::ComplexMesh::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::MeshBase,68>'};
  this->Scaleform::Render::MeshBase::Scaleform::Render::MeshStagingNode::__vftable = (Scaleform::Render::MeshStagingNode_vtbl *)&Scaleform::Render::ComplexMesh::`vftable'{for `Scaleform::Render::MeshStagingNode'};
  if ( !v1 )
  {
    this->UpdateListNode.pPrev->pNext = this->UpdateListNode.pNext;
    this->UpdateListNode.pNext->pPrev = this->UpdateListNode.pPrev;
    this->UpdateListNode.pPrev = (Scaleform::Render::ComplexMesh::UpdateNode *)-1i64;
    this->UpdateListNode.pNext = (Scaleform::Render::ComplexMesh::UpdateNode *)-1i64;
  }
  pCacheMeshItem = this->pCacheMeshItem;
  if ( pCacheMeshItem )
    Scaleform::Render::MeshCacheItem::NotifyMeshRelease(pCacheMeshItem, this);
  Size = this->GradientImages.Data.Size;
  for ( i = &this->GradientImages.Data.Data[Size - 1]; Size; --Size )
  {
    if ( i->pObject )
      i->pObject->Release(i->pObject);
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->GradientImages.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->FillMatrixCache.Data.Data);
  Scaleform::ArrayDataBase<Scaleform::Render::ComplexMesh::FillRecord,Scaleform::AllocatorLH<Scaleform::Render::ComplexMesh::FillRecord,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::ComplexMesh::FillRecord,Scaleform::AllocatorLH<Scaleform::Render::ComplexMesh::FillRecord,2>,Scaleform::ArrayDefaultPolicy>(&this->FillRecords.Data);
  pObject = (Scaleform::RefCountVImpl *)this->pScale9Grid.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v7 = this->pProvider.pObject;
  if ( v7 )
    v7->Release(v7);
  this->Scaleform::Render::MeshBase::Scaleform::Render::MeshStagingNode::__vftable = (Scaleform::Render::MeshStagingNode_vtbl *)&Scaleform::Render::MeshStagingNode::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::Mesh::~Mesh(Scaleform::Render::Mesh *this)
{
  unsigned __int64 Size; // rsi
  Scaleform::Render::MeshCacheItem **pData; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::MeshProvider *v5; // rcx

  Size = this->CacheItems.Size;
  this->Scaleform::Render::MeshBase::Scaleform::RefCountBase<Scaleform::Render::MeshBase,68>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::Mesh_vtbl *)&Scaleform::Render::Mesh::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::MeshBase,68>'};
  this->Scaleform::Render::MeshBase::Scaleform::Render::MeshStagingNode::__vftable = (Scaleform::Render::MeshStagingNode_vtbl *)&Scaleform::Render::Mesh::`vftable'{for `Scaleform::Render::MeshStagingNode'};
  if ( Size <= 2 )
    pData = (Scaleform::Render::MeshCacheItem **)&this->CacheItems.8;
  else
    pData = this->CacheItems.AD.pData;
  for ( ; Size; ++pData )
  {
    --Size;
    if ( *pData )
      Scaleform::Render::MeshCacheItem::NotifyMeshRelease(*pData, this);
  }
  if ( this->StagingBufferSize )
  {
    this->pPrev->Scaleform::Render::MeshBase::Scaleform::Render::MeshStagingNode::pNext = this->pNext;
    this->pNext->Scaleform::Render::MeshBase::Scaleform::Render::MeshStagingNode::pPrev = this->pPrev;
    this->pPrev = (Scaleform::Render::MeshStagingNode *)-1i64;
    this->pNext = (Scaleform::Render::MeshStagingNode *)-1i64;
  }
  if ( this->CacheItems.Size > 2 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->CacheItems.AD.pData);
  pObject = (Scaleform::RefCountVImpl *)this->pScale9Grid.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v5 = this->pProvider.pObject;
  if ( v5 )
    v5->Release(v5);
  this->Scaleform::Render::MeshBase::Scaleform::Render::MeshStagingNode::__vftable = (Scaleform::Render::MeshStagingNode_vtbl *)&Scaleform::Render::MeshStagingNode::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::Primitive::~Primitive(Scaleform::Render::Primitive *this)
{
  Scaleform::List<Scaleform::Render::PrimitiveBatch,Scaleform::Render::PrimitiveBatch,Scaleform::ListNode<Scaleform::Render::PrimitiveBatch> > *p_Batches; // rdi
  Scaleform::Render::PrimitiveBatch *pNext; // rdx
  Scaleform::Render::PrimitiveFill *pObject; // rcx

  --Scaleform::Render::Primitive_Total;
  this->Scaleform::RefCountBase<Scaleform::Render::Primitive,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::Primitive_vtbl *)&Scaleform::Render::Primitive::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::Primitive,67>'};
  p_Batches = &this->Batches;
  this->Scaleform::Render::RenderQueueItem::Interface::__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::Primitive::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
  if ( (Scaleform::List<Scaleform::Render::PrimitiveBatch,Scaleform::Render::PrimitiveBatch,Scaleform::ListNode<Scaleform::Render::PrimitiveBatch> > *)this->Batches.Root.pNext != &this->Batches )
  {
    do
    {
      pNext = this->Batches.Root.pNext;
      pNext->pPrev->pNext = pNext->pNext;
      pNext->pNext->Scaleform::ListNode<Scaleform::Render::PrimitiveBatch>::$B97D8B60C1ACCDCC2E89E5A3140D94B3::pPrev = pNext->pPrev;
      pNext->pPrev = (Scaleform::Render::PrimitiveBatch *)-1i64;
      pNext->pNext = (Scaleform::Render::PrimitiveBatch *)-1i64;
      if ( pNext->MeshNode.pMeshItem )
      {
        pNext->MeshNode.pPrev->pNext = pNext->MeshNode.pNext;
        pNext->MeshNode.pNext->pPrev = pNext->MeshNode.pPrev;
        pNext->MeshNode.pPrev = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
        pNext->MeshNode.pNext = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
        pNext->MeshNode.pMeshItem = 0i64;
      }
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    while ( (Scaleform::List<Scaleform::Render::PrimitiveBatch,Scaleform::Render::PrimitiveBatch,Scaleform::ListNode<Scaleform::Render::PrimitiveBatch> > *)p_Batches->Root.pNext != p_Batches );
  }
  Scaleform::ArrayDataBase<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy>((Scaleform::ArrayDataBase<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy> *)&this->Meshes);
  pObject = this->pFill.pObject;
  if ( pObject )
    Scaleform::RefCountNTSImpl::Release(pObject);
  this->Scaleform::Render::RenderQueueItem::Interface::__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::RenderQueueItem::Interface::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::PrimitiveFill::~PrimitiveFill(Scaleform::Render::PrimitiveFill *this)
{
  Scaleform::Render::PrimitiveFillManager *pManager; // rcx
  __int64 v3; // rbx
  const Scaleform::Render::VertexFormat **p_pFormat; // rdi
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::Render::PrimitiveFill *key; // [rsp+30h] [rbp+8h] BYREF

  this->__vftable = (Scaleform::Render::PrimitiveFill_vtbl *)&Scaleform::Render::PrimitiveFill::`vftable';
  pManager = this->pManager;
  if ( pManager )
  {
    key = this;
    Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor>>::RemoveAlt<Scaleform::Render::PrimitiveFill *>(
      &pManager->FillSet,
      &key);
  }
  v3 = 2i64;
  p_pFormat = &this->Data.pFormat;
  do
  {
    v5 = (Scaleform::RefCountVImpl *)*--p_pFormat;
    --v3;
    if ( v5 )
      Scaleform::RefCountImpl::Release(v5);
  }
  while ( v3 );
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(this);
}

bool __fastcall Scaleform::Render::VertexFormat::operator==(
        Scaleform::Render::VertexFormat *this,
        const Scaleform::Render::VertexFormat *o)
{
  Scaleform::Render::VertexElement *pElements; // rax
  Scaleform::Render::VertexElement *i; // r8
  unsigned int Attribute; // edx
  unsigned int v5; // er9

  pElements = this->pElements;
  for ( i = o->pElements; ; ++i )
  {
    if ( (((pElements->Attribute & 0xF0) - 112) & 0xFFFFFFEF) == 0 )
      ++pElements;
    if ( (((i->Attribute & 0xF0) - 112) & 0xFFFFFFEF) == 0 )
      ++i;
    Attribute = pElements->Attribute;
    if ( !Attribute )
      break;
    v5 = i->Attribute;
    if ( !v5 )
      break;
    if ( pElements->Offset != i->Offset || Attribute != v5 )
      return 0;
    ++pElements;
  }
  return pElements->Offset == i->Offset && Attribute == i->Attribute;
}

void __fastcall Scaleform::Render::PrimitiveBatch::CalcMeshSizes(
        Scaleform::Render::PrimitiveBatch *this,
        unsigned int *ptotalVertices,
        unsigned int *ptotalIndices)
{
  Scaleform::Render::Primitive *pPrimitive; // r10
  unsigned int *v5; // rsi
  unsigned int Size; // er9
  Scaleform::Render::PrimitiveBatch *i; // rax
  unsigned int MeshCount; // er9
  int v10; // er8
  int v11; // er10
  int v12; // er11
  int v13; // edi
  unsigned int VertexCount; // er15
  unsigned int IndexCount; // er12
  unsigned int v16; // er14
  unsigned int v17; // edx
  Scaleform::Render::Primitive::MeshEntry *Data; // rbp
  unsigned int v19; // eax
  __int64 v20; // rsi
  Scaleform::Render::Mesh *pObject; // rax
  __int64 v22; // rax
  Scaleform::Render::Mesh *v23; // rcx
  Scaleform::Render::Mesh *v24; // rax

  pPrimitive = this->pPrimitive;
  v5 = ptotalVertices;
  Size = pPrimitive->Meshes.Data.Size;
  if ( pPrimitive->ModifyIndex < Size )
  {
    for ( i = pPrimitive->Batches.Root.pPrev; i != (Scaleform::Render::PrimitiveBatch *)&pPrimitive->Batches; i = i->pPrev )
    {
      Size -= i->MeshCount;
      i->MeshIndex = Size;
      if ( Size < pPrimitive->ModifyIndex )
        break;
    }
    pPrimitive->ModifyIndex = pPrimitive->Meshes.Data.Size;
  }
  MeshCount = 1;
  if ( this->Type != DP_Instanced )
    MeshCount = this->MeshCount;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  VertexCount = 0;
  IndexCount = 0;
  v16 = 0;
  if ( MeshCount >= 2 )
  {
    v17 = this->MeshIndex + 1;
    Data = this->pPrimitive->Meshes.Data.Data;
    v19 = ((MeshCount - 2) >> 1) + 1;
    v20 = v19;
    v16 = 2 * v19;
    do
    {
      pObject = Data[v17 - 1].pMesh.pObject;
      v10 += pObject->VertexCount;
      v12 += pObject->IndexCount;
      v22 = v17;
      v17 += 2;
      v23 = Data[v22].pMesh.pObject;
      v11 += v23->VertexCount;
      v13 += v23->IndexCount;
      --v20;
    }
    while ( v20 );
    v5 = ptotalVertices;
  }
  if ( v16 < MeshCount )
  {
    v24 = this->pPrimitive->Meshes.Data.Data[v16 + this->MeshIndex].pMesh.pObject;
    VertexCount = v24->VertexCount;
    IndexCount = v24->IndexCount;
  }
  *v5 = VertexCount + v10 + v11;
  *ptotalIndices = IndexCount + v12 + v13;
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

Scaleform::Render::PrimitiveBatch *__fastcall Scaleform::Render::PrimitiveBatch::Create(
        Scaleform::Render::Primitive *p,
        Scaleform::Render::PrimitiveBatch::BatchType type,
        unsigned int meshIndex,
        unsigned int meshCount)
{
  Scaleform::Render::PrimitiveBatch *result; // rax

  result = (Scaleform::Render::PrimitiveBatch *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::Primitive *, __int64))Scaleform::Memory::pGlobalHeap->AllocAutoHeap)(
                                                  Scaleform::Memory::pGlobalHeap,
                                                  p,
                                                  80i64);
  result->Type = type;
  result->MeshCount = meshCount;
  result->MeshIndex = meshIndex;
  result->MeshNode.pMeshItem = 0i64;
  result->pFormat = 0i64;
  result->LargeMesh = 0;
  result->pPrimitive = p;
  return result;
}

Scaleform::Render::PrimitiveFill *__fastcall Scaleform::Render::PrimitiveFillManager::CreateFill(
        Scaleform::Render::PrimitiveFillManager *this,
        const Scaleform::Render::PrimitiveFillData *initdata)
{
  Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> >::TableType *pTable; // rdx
  signed __int64 v5; // rax
  Scaleform::Render::PrimitiveFill *result; // rax
  Scaleform::Render::PrimitiveFill *v7; // rdi
  __int64 Raw; // rdx
  int v9; // er9
  Scaleform::Render::PrimitiveFill *key; // [rsp+40h] [rbp+8h] BYREF

  pTable = this->FillSet.pTable;
  if ( pTable
    && (v5 = Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor>>::findIndexCore<Scaleform::Render::PrimitiveFillData>(
               &this->FillSet,
               initdata,
               pTable->SizeMask & ((unsigned int)initdata->Type ^ (__int64)initdata->Textures[1].pObject ^ initdata->SolidColor.Raw ^ ((unsigned __int64)initdata->Textures[0].pObject >> 2) ^ initdata->pFormat->Size ^ (4i64 * ((initdata->FillModes[0].Fill ^ (4 * initdata->FillModes[1].Fill)) & 0x3FFFFFFF)))),
        v5 >= 0) )
  {
    result = (Scaleform::Render::PrimitiveFill *)*(&this->FillSet.pTable[2].EntryCount + 3 * v5);
    ++result->RefCount;
  }
  else
  {
    result = (Scaleform::Render::PrimitiveFill *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pHeap->Alloc)(
                                                   this->pHeap,
                                                   64i64);
    v7 = result;
    if ( result )
    {
      result->RefCount = 1;
      result->__vftable = (Scaleform::Render::PrimitiveFill_vtbl *)&Scaleform::Render::PrimitiveFill::`vftable';
      Scaleform::Render::PrimitiveFillData::PrimitiveFillData(
        (Scaleform::Render::PrimitiveFillData *)&result->Data,
        initdata);
      v7->pManager = 0i64;
      Raw = v7->Data.SolidColor.Raw;
      v9 = v7->Data.FillModes[0].Fill ^ (4 * v7->Data.FillModes[1].Fill);
      key = v7;
      Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor>>::add<Scaleform::Render::PrimitiveFill *>(
        &this->FillSet,
        &this->FillSet,
        &key,
        (unsigned int)v7->Data.Type ^ (__int64)v7->Data.Textures[1].pObject ^ Raw ^ ((unsigned __int64)v7->Data.Textures[0].pObject >> 2) ^ v7->Data.pFormat->Size ^ (4i64 * (v9 & 0x3FFFFFFF)));
      result = v7;
      v7->pManager = this;
    }
  }
  return result;
}

Scaleform::Render::PrimitiveFill *__fastcall Scaleform::Render::PrimitiveFillManager::CreateFill(
        Scaleform::Render::PrimitiveFillManager *this,
        const Scaleform::Render::FillData *initdata,
        Scaleform::Ptr<Scaleform::Render::Image> *gradientImg,
        Scaleform::Render::TextureManager *mng,
        float morphRatio)
{
  Scaleform::Render::FillType Type; // er8
  Scaleform::Render::PrimitiveFill *v10; // rsi
  const Scaleform::Render::VertexFormat **p_pFormat; // rdi
  __int64 v12; // rbx
  Scaleform::RefCountVImpl *v13; // rcx
  Scaleform::Render::PrimitiveFill *result; // rax
  unsigned int Color; // eax
  __int64 v16; // rbx
  Scaleform::Render::PrimitiveFill *v17; // rsi
  const Scaleform::Render::VertexFormat **v18; // rdi
  Scaleform::RefCountVImpl *v19; // rcx
  const Scaleform::Render::VertexFormat *pVFormat; // rcx
  Scaleform::Render::PrimitiveFill *v21; // rsi
  const Scaleform::Render::VertexFormat **v22; // rdi
  __int64 v23; // rbx
  Scaleform::RefCountVImpl *v24; // rcx
  Scaleform::Render::GradientData *pGradient; // rcx
  Scaleform::RefCountVImpl *v26; // rax
  Scaleform::Render::Texture *v27; // rbx
  const Scaleform::Render::VertexFormat *v28; // r8
  Scaleform::Render::PrimitiveFillType PrimFill; // edx
  Scaleform::Render::PrimitiveFill *v30; // rsi
  const Scaleform::Render::VertexFormat **v31; // rdi
  __int64 v32; // rbx
  Scaleform::RefCountVImpl *v33; // rcx
  __int64 v34; // rbx
  Scaleform::Render::PrimitiveFill *v35; // rsi
  const Scaleform::Render::VertexFormat **v36; // rdi
  Scaleform::RefCountVImpl *v37; // rcx
  Scaleform::Render::Image *GradientImage; // rdi
  unsigned __int8 Fill; // bl
  Scaleform::RefCountVImpl *v40; // rax
  Scaleform::Render::PrimitiveFillType v41; // ecx
  Scaleform::Render::Texture *v42; // r15
  Scaleform::Render::PrimitiveFill *v43; // rsi
  const Scaleform::Render::VertexFormat **v44; // rdi
  __int64 v45; // rbx
  Scaleform::RefCountVImpl *v46; // rcx
  Scaleform::Render::PrimitiveFillData initdataa; // [rsp+20h] [rbp-38h] BYREF

  Type = initdata->Type;
  switch ( initdata->Type )
  {
    case Fill_Mask:
      initdataa.pFormat = initdata->pVFormat;
      *(_WORD *)&initdataa.FillModes[0].Fill = 0;
      initdataa.Textures[0].pObject = 0i64;
      initdataa.Textures[1].pObject = 0i64;
      *(_QWORD *)&initdataa.Type = 1i64;
      v10 = Scaleform::Render::PrimitiveFillManager::CreateFill(this, &initdataa);
      p_pFormat = &initdataa.pFormat;
      v12 = 2i64;
      do
      {
        v13 = (Scaleform::RefCountVImpl *)*--p_pFormat;
        --v12;
        if ( v13 )
          Scaleform::RefCountImpl::Release(v13);
      }
      while ( v12 );
      result = v10;
      break;
    case Fill_SolidColor:
      Color = initdata->Color;
      initdataa.pFormat = initdata->pVFormat;
      v16 = 2i64;
      initdataa.Type = PrimFill_SolidColor;
      initdataa.SolidColor.Raw = Color;
      *(_WORD *)&initdataa.FillModes[0].Fill = 0;
      initdataa.Textures[0].pObject = 0i64;
      initdataa.Textures[1].pObject = 0i64;
      v17 = Scaleform::Render::PrimitiveFillManager::CreateFill(this, &initdataa);
      v18 = &initdataa.pFormat;
      do
      {
        v19 = (Scaleform::RefCountVImpl *)*--v18;
        --v16;
        if ( v19 )
          Scaleform::RefCountImpl::Release(v19);
      }
      while ( v16 );
      result = v17;
      break;
    case Fill_VColor:
    case Fill_VColor_TestKey:
      pVFormat = initdata->pVFormat;
      initdataa.Type = initdata->PrimFill;
      initdataa.SolidColor.Raw = 0;
      *(_WORD *)&initdataa.FillModes[0].Fill = 0;
      initdataa.Textures[0].pObject = 0i64;
      initdataa.Textures[1].pObject = 0i64;
      initdataa.pFormat = pVFormat;
      if ( Type == Fill_VColor_TestKey )
        initdataa.SolidColor.Raw = initdata->Color;
      v21 = Scaleform::Render::PrimitiveFillManager::CreateFill(this, &initdataa);
      v22 = &initdataa.pFormat;
      v23 = 2i64;
      do
      {
        v24 = (Scaleform::RefCountVImpl *)*--v22;
        --v23;
        if ( v24 )
          Scaleform::RefCountImpl::Release(v24);
      }
      while ( v23 );
      result = v21;
      break;
    case Fill_Image:
      pGradient = initdata->pGradient;
      if ( pGradient
        && (v26 = (Scaleform::RefCountVImpl *)((__int64 (__fastcall *)(Scaleform::Render::GradientData *, Scaleform::Render::TextureManager *))pGradient->__vftable[21].~RefCountImplCore)(
                                                pGradient,
                                                mng),
            (v27 = (Scaleform::Render::Texture *)v26) != 0i64) )
      {
        v28 = initdata->pVFormat;
        PrimFill = initdata->PrimFill;
        initdataa.FillModes[0].Fill = initdata->FillMode.Fill;
        initdataa.Type = PrimFill;
        initdataa.SolidColor.Raw = 0;
        initdataa.pFormat = v28;
        initdataa.FillModes[1].Fill = 0;
        Scaleform::Render::RenderBuffer::AddRef(v26);
        initdataa.Textures[0].pObject = v27;
        initdataa.Textures[1].pObject = 0i64;
        v30 = Scaleform::Render::PrimitiveFillManager::CreateFill(this, &initdataa);
        v31 = &initdataa.pFormat;
        v32 = 2i64;
        do
        {
          v33 = (Scaleform::RefCountVImpl *)*--v31;
          --v32;
          if ( v33 )
            Scaleform::RefCountImpl::Release(v33);
        }
        while ( v32 );
        result = v30;
      }
      else
      {
        initdataa.pFormat = initdata->pVFormat;
        v34 = 2i64;
        *(_WORD *)&initdataa.FillModes[0].Fill = 0;
        *(_QWORD *)&initdataa.Type = 2i64;
        initdataa.Textures[0].pObject = 0i64;
        initdataa.Textures[1].pObject = 0i64;
        v35 = Scaleform::Render::PrimitiveFillManager::CreateFill(this, &initdataa);
        v36 = &initdataa.pFormat;
        do
        {
          v37 = (Scaleform::RefCountVImpl *)*--v36;
          --v34;
          if ( v37 )
            Scaleform::RefCountImpl::Release(v37);
        }
        while ( v34 );
        result = v35;
      }
      break;
    case Fill_Gradient:
      GradientImage = Scaleform::Render::PrimitiveFillManager::createGradientImage(
                        this,
                        initdata->pGradient,
                        morphRatio);
      if ( gradientImg->pObject )
        gradientImg->pObject->Release(gradientImg->pObject);
      gradientImg->pObject = GradientImage;
      if ( !GradientImage )
        goto LABEL_41;
      Fill = initdata->FillMode.Fill;
      v40 = (Scaleform::RefCountVImpl *)GradientImage->GetTexture(GradientImage, mng);
      v41 = initdata->PrimFill;
      v42 = (Scaleform::Render::Texture *)v40;
      initdataa.pFormat = initdata->pVFormat;
      initdataa.FillModes[0].Fill = Fill;
      initdataa.FillModes[1].Fill = 0;
      initdataa.Type = v41;
      initdataa.SolidColor.Raw = 0;
      if ( v40 )
        Scaleform::Render::RenderBuffer::AddRef(v40);
      initdataa.Textures[0].pObject = v42;
      initdataa.Textures[1].pObject = 0i64;
      v43 = Scaleform::Render::PrimitiveFillManager::CreateFill(this, &initdataa);
      v44 = &initdataa.pFormat;
      v45 = 2i64;
      do
      {
        v46 = (Scaleform::RefCountVImpl *)*--v44;
        --v45;
        if ( v46 )
          Scaleform::RefCountImpl::Release(v46);
      }
      while ( v45 );
      result = v43;
      break;
    default:
LABEL_41:
      result = 0i64;
      break;
  }
  return result;
}

Scaleform::Render::PrimitiveFill *__fastcall Scaleform::Render::PrimitiveFillManager::CreateMergedFill(
        Scaleform::Render::PrimitiveFillManager *this,
        unsigned int mergeFlags,
        const Scaleform::Render::VertexFormat *vformat,
        const Scaleform::Render::FillData *fd0,
        const Scaleform::Render::FillData *fd1,
        Scaleform::Ptr<Scaleform::Render::Image> *gradientImg0,
        Scaleform::Ptr<Scaleform::Render::Image> *gradientImg1,
        Scaleform::Render::TextureManager *textureManager,
        float morphRatio)
{
  Scaleform::Render::FillType Type; // esi
  Scaleform::Render::PrimitiveFillManager *v12; // r8
  const Scaleform::Render::FillData *v13; // rcx
  Scaleform::Render::FillType v14; // edi
  Scaleform::Render::Image *pImage; // r12
  Scaleform::Render::Image *GradientImage; // rax
  Scaleform::Render::FillTypeMergeInfo *v17; // rcx
  unsigned __int8 F0; // al
  Scaleform::Render::PrimitiveFillType v19; // ebx
  Scaleform::Render::PrimitiveFill *v20; // rdi
  const Scaleform::Render::VertexFormat *v21; // r8
  Scaleform::RefCountVImpl *v22; // r14
  Scaleform::RefCountVImpl *v23; // r15
  __int64 v24; // rsi
  Scaleform::RefCountVImpl *v25; // rax
  Scaleform::Render::Texture *v26; // r12
  Scaleform::RefCountVImpl *v27; // rax
  Scaleform::Render::Texture *v28; // r12
  unsigned int v29; // edx
  __int64 v30; // rbx
  __int64 *v31; // rdi
  Scaleform::RefCountVImpl *v32; // rcx
  const Scaleform::Render::VertexFormat **p_pFormat; // rbx
  Scaleform::RefCountVImpl *v34; // rcx
  Scaleform::Render::GradientData *pGradient; // [rsp+20h] [rbp-89h]
  Scaleform::Render::PrimitiveFillData initdata; // [rsp+48h] [rbp-61h] BYREF
  int v40; // [rsp+70h] [rbp-39h]
  int v41; // [rsp+74h] [rbp-35h]
  __int16 v42; // [rsp+78h] [rbp-31h]
  __int64 v43; // [rsp+80h] [rbp-29h]
  __int64 v44; // [rsp+88h] [rbp-21h]
  const Scaleform::Render::VertexFormat *v45; // [rsp+90h] [rbp-19h] BYREF

  Type = fd0->Type;
  v12 = this;
  v13 = fd1;
  v14 = fd1->Type;
  pImage = fd1->pImage;
  pGradient = fd0->pGradient;
  if ( fd0->Type == Fill_Gradient )
  {
    GradientImage = Scaleform::Render::PrimitiveFillManager::createGradientImage(v12, fd0->pGradient, morphRatio);
    pGradient = (Scaleform::Render::GradientData *)GradientImage;
    if ( gradientImg0->pObject )
    {
      gradientImg0->pObject->Release(gradientImg0->pObject);
      GradientImage = (Scaleform::Render::Image *)pGradient;
    }
    v13 = fd1;
    Type = Fill_Image;
    v12 = this;
    gradientImg0->pObject = GradientImage;
  }
  if ( v14 == Fill_Gradient )
  {
    pImage = Scaleform::Render::PrimitiveFillManager::createGradientImage(v12, v13->pGradient, morphRatio);
    if ( gradientImg1->pObject )
      gradientImg1->pObject->Release(gradientImg1->pObject);
    gradientImg1->pObject = pImage;
    v14 = Fill_Image;
  }
  v17 = Scaleform::Render::FillTypeMergeTable;
  if ( Type == Fill_VColor_TestKey )
    Type = Fill_VColor;
  if ( v14 == Fill_VColor_TestKey )
    v14 = Fill_VColor;
  F0 = Scaleform::Render::FillTypeMergeTable[0].F0;
  do
  {
    if ( F0 == Type && mergeFlags == v17->MergeFlags && (v17->F1 == v14 || (mergeFlags & 2) == 0) )
      break;
    F0 = v17[1].F0;
    ++v17;
  }
  while ( F0 );
  v19 = v17->Result;
  v20 = 0i64;
  v21 = vformat;
  v22 = 0i64;
  initdata.Type = v19;
  v23 = 0i64;
  initdata.SolidColor.Raw = 0;
  *(_WORD *)&initdata.FillModes[0].Fill = 0;
  initdata.Textures[0].pObject = 0i64;
  v24 = 2i64;
  initdata.Textures[1].pObject = 0i64;
  initdata.pFormat = vformat;
  switch ( v19 )
  {
    case PrimFill_Mask:
      goto $LN2_5;
    case PrimFill_SolidColor:
      initdata.SolidColor.Raw = fd0->Color;
      goto $LN2_5;
    case PrimFill_VColor:
    case PrimFill_VColor_EAlpha:
      if ( fd0->Type == Fill_VColor_TestKey )
        initdata.SolidColor.Raw = fd0->Color;
      goto $LN2_5;
    case PrimFill_Texture:
    case PrimFill_Texture_EAlpha:
    case PrimFill_Texture_VColor:
    case PrimFill_Texture_VColor_EAlpha:
      goto $LN16_69;
    case PrimFill_2Texture:
    case PrimFill_2Texture_EAlpha:
      v25 = (Scaleform::RefCountVImpl *)pImage->GetTexture(pImage, textureManager);
      v26 = (Scaleform::Render::Texture *)v25;
      if ( v25 )
        Scaleform::Render::RenderBuffer::AddRef(v25);
      v23 = (Scaleform::RefCountVImpl *)v26;
      initdata.Textures[1].pObject = v26;
      initdata.FillModes[1].Fill = fd1->FillMode.Fill;
$LN16_69:
      v27 = (Scaleform::RefCountVImpl *)((__int64 (__fastcall *)(Scaleform::Render::GradientData *, Scaleform::Render::TextureManager *))pGradient->__vftable[21].~RefCountImplCore)(
                                          pGradient,
                                          textureManager);
      v28 = (Scaleform::Render::Texture *)v27;
      if ( v27 )
        Scaleform::Render::RenderBuffer::AddRef(v27);
      v22 = (Scaleform::RefCountVImpl *)v28;
      v21 = vformat;
      initdata.FillModes[0].Fill = fd0->FillMode.Fill;
      initdata.Textures[0].pObject = v28;
$LN2_5:
      v29 = 0;
      break;
    default:
      goto LABEL_43;
  }
  while ( v19 >= PrimFill_Texture && v29 < (unsigned int)((unsigned int)(v19 - 9) <= 1) + 1 )
  {
    if ( !initdata.Textures[v29].pObject )
    {
      v42 = 0;
      initdata.FillModes[0].Fill = 0;
      initdata.FillModes[1].Fill = 0;
      v40 = 2;
      v41 = -65536;
      v43 = 0i64;
      v44 = 0i64;
      v45 = v21;
      initdata.Type = PrimFill_SolidColor;
      initdata.SolidColor.Raw = -65536;
      if ( v22 )
        Scaleform::RefCountImpl::Release(v22);
      initdata.Textures[0].pObject = 0i64;
      if ( v23 )
        Scaleform::RefCountImpl::Release(v23);
      v30 = 2i64;
      initdata.Textures[1].pObject = 0i64;
      v31 = (__int64 *)&v45;
      initdata.pFormat = vformat;
      do
      {
        v32 = (Scaleform::RefCountVImpl *)*--v31;
        --v30;
        if ( v32 )
          Scaleform::RefCountImpl::Release(v32);
      }
      while ( v30 );
      break;
    }
    ++v29;
  }
  v20 = Scaleform::Render::PrimitiveFillManager::CreateFill(this, &initdata);
LABEL_43:
  p_pFormat = &initdata.pFormat;
  do
  {
    v34 = (Scaleform::RefCountVImpl *)*--p_pFormat;
    --v24;
    if ( v34 )
      Scaleform::RefCountImpl::Release(v34);
  }
  while ( v24 );
  return v20;
}

void __fastcall Scaleform::ConstructorMov<Scaleform::Render::Primitive::MeshEntry>::DestructArray(
        Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *p,
        unsigned __int64 count)
{
  unsigned __int64 v2; // rdi
  Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *v3; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  if ( count )
  {
    v2 = count;
    v3 = &p[count - 1];
    do
    {
      pObject = (Scaleform::RefCountVImpl *)v3->pMesh.pObject;
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      if ( v3->M.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
        Scaleform::Render::MatrixPoolImpl::DataHeader::Release(v3->M.pHandle->pHeader);
      --v3;
      --v2;
    }
    while ( v2 );
  }
}

void __fastcall Scaleform::Render::BlendPrimitive::EmitToHAL(
        Scaleform::Render::BlendPrimitive *this,
        Scaleform::Render::RenderQueueItem *item,
        Scaleform::Render::RenderQueueProcessor *qp)
{
  bool v5; // cc
  Scaleform::Render::HAL *pHAL; // rcx
  Scaleform::Render::HAL_vtbl *v7; // rax

  if ( item != qp->EmitItemBuffer.pItem )
  {
    *(_OWORD *)&qp->EmitItemBuffer.pItem = (unsigned __int64)item;
    v5 = SLODWORD(this->PrimitiveArea.Data.Size) < 20;
    pHAL = qp->pHAL;
    v7 = qp->pHAL->__vftable;
    if ( v5 )
      v7->PushBlendMode(pHAL, (Scaleform::Render::BlendPrimitive *)((char *)this - 16));
    else
      ((void (__fastcall *)(Scaleform::Render::HAL *, Scaleform::Render::BlendPrimitive *))v7->PopBlendMode)(pHAL, this);
  }
}

void __fastcall Scaleform::Render::FilterPrimitive::EmitToHAL(
        Scaleform::Render::FilterPrimitive *this,
        Scaleform::Render::RenderQueueItem *item,
        Scaleform::Render::RenderQueueProcessor *qp)
{
  bool v5; // zf
  Scaleform::Render::HAL *pHAL; // rcx
  Scaleform::Render::HAL_vtbl *v7; // rax

  if ( item != qp->EmitItemBuffer.pItem )
  {
    *(_OWORD *)&qp->EmitItemBuffer.pItem = (unsigned __int64)item;
    v5 = this->PrimitiveArea.Data.Size == 0;
    pHAL = qp->pHAL;
    v7 = qp->pHAL->__vftable;
    if ( v5 )
      ((void (__fastcall *)(Scaleform::Render::HAL *, Scaleform::Render::FilterPrimitive *))v7->PopFilters)(pHAL, this);
    else
      v7->PushFilters(pHAL, (Scaleform::Render::FilterPrimitive *)((char *)this - 16));
  }
}

void __fastcall Scaleform::Render::MaskPrimitive::EmitToHAL(
        Scaleform::Render::MaskPrimitive *this,
        Scaleform::Render::RenderQueueItem *__formal,
        Scaleform::Render::RenderQueueProcessor *qp)
{
  if ( qp->QueueEmitFilter == QPF_All )
    qp->pHAL->PushMask_BeginSubmit(qp->pHAL, (Scaleform::Render::MaskPrimitive *)&this[-1].MaskAreas.Data.Size);
}

void __fastcall Scaleform::Render::ProjectionMatrix3DPrimitive::EmitToHAL(
        Scaleform::Render::ProjectionMatrix3DPrimitive *this,
        Scaleform::Render::RenderQueueItem *__formal,
        Scaleform::Render::RenderQueueProcessor *qp)
{
  if ( LOBYTE(this->ProjectionMatrix.M[3][0]) )
    Scaleform::Render::HAL::PushProj3D(
      qp->pHAL,
      (const Scaleform::Render::Matrix4x4<float> *)&this->Scaleform::Render::RenderQueueItem::Interface);
  else
    Scaleform::Render::HAL::PopProj3D(qp->pHAL);
}

void __fastcall Scaleform::Render::UserDataPrimitive::EmitToHAL(
        Scaleform::Render::UserDataPrimitive *this,
        Scaleform::Render::RenderQueueItem *__formal,
        Scaleform::Render::RenderQueueProcessor *qp)
{
  Scaleform::Render::HAL_vtbl *v3; // rax

  v3 = qp->pHAL->__vftable;
  if ( *(_QWORD *)&this->RefCount )
    ((void (*)(void))v3->PushUserData)();
  else
    ((void (*)(void))v3->PopUserData)();
}

void __fastcall Scaleform::Render::ViewMatrix3DPrimitive::EmitToHAL(
        Scaleform::Render::ViewMatrix3DPrimitive *this,
        Scaleform::Render::RenderQueueItem *__formal,
        Scaleform::Render::RenderQueueProcessor *qp)
{
  if ( LOBYTE(this->ViewMatrix.M[2][0]) )
    Scaleform::Render::HAL::PushView3D(
      qp->pHAL,
      (const Scaleform::Render::Matrix3x4<float> *)&this->Scaleform::Render::RenderQueueItem::Interface);
  else
    Scaleform::Render::HAL::PopView3D(qp->pHAL);
}

void __fastcall Scaleform::Render::CacheablePrimitive::GetCacheResults(
        Scaleform::Render::CacheablePrimitive *this,
        Scaleform::Render::RenderTarget **results,
        unsigned int count)
{
  unsigned int v3; // er9
  signed __int64 v4; // rcx

  v3 = 0;
  if ( count )
  {
    v4 = (char *)this - (char *)results;
    do
    {
      *results = *(Scaleform::Render::RenderTarget **)((char *)results + v4 + 32);
      ++v3;
      ++results;
    }
    while ( v3 < count );
  }
}

unsigned __int64 __fastcall Scaleform::Render::PrimitiveFillData::GetHashValue(
        Scaleform::Render::PrimitiveFillData *this)
{
  return (unsigned int)this->Type ^ (__int64)this->Textures[1].pObject ^ this->SolidColor.Raw ^ ((unsigned __int64)this->Textures[0].pObject >> 2) ^ (4i64 * ((this->FillModes[0].Fill ^ (4 * this->FillModes[1].Fill)) & 0x3FFFFFFF)) ^ this->pFormat->Size;
}

__int64 __fastcall Scaleform::Render::Mesh::GetUseStatus(Scaleform::Render::Mesh *this)
{
  unsigned __int64 Size; // rbp
  unsigned int v2; // ebx
  Scaleform::Render::MeshCacheItem **pData; // rsi
  unsigned __int64 i; // rdi
  int UseStatus; // eax

  Size = this->CacheItems.Size;
  v2 = 0;
  if ( Size <= 2 )
    pData = (Scaleform::Render::MeshCacheItem **)&this->CacheItems.8;
  else
    pData = this->CacheItems.AD.pData;
  for ( i = 0i64; i < Size; ++i )
  {
    UseStatus = Scaleform::Render::MeshCacheItem::GetUseStatus(pData[i]);
    if ( UseStatus > (int)v2 )
      v2 = UseStatus;
  }
  return v2;
}

char __fastcall Scaleform::Render::ComplexMesh::InitFillRecords(
        Scaleform::Render::ComplexMesh *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::VertexOutput::Fill *fills,
        unsigned int fillRecordCount,
        const Scaleform::Render::Matrix2x4<float> *vertexMatrix,
        unsigned __int64 *vbSize,
        unsigned int *vertexCount,
        unsigned int *indexCount)
{
  Scaleform::ArrayLH<Scaleform::Render::ComplexMesh::FillRecord,2,Scaleform::ArrayDefaultPolicy> *p_FillRecords; // rbp
  unsigned __int64 v9; // r15
  unsigned __int64 Size; // rdi
  __int64 v13; // rbx
  Scaleform::Render::ComplexMesh::FillRecord *v14; // rax
  unsigned __int64 v15; // rcx
  Scaleform::Render::HAL *v17; // rdi
  Scaleform::Render::ComplexMesh::UpdateNode *p_UpdateListNode; // r13
  Scaleform::Render::TextureManager *textureManager; // rbx
  __int64 v20; // r15
  __int64 v21; // r12
  Scaleform::Render::ComplexMesh::FillRecord *Data; // rbp
  Scaleform::Render::PrimitiveFillType *p_PrimFill; // rax
  __int64 v24; // rcx
  Scaleform::Render::MeshProvider *pObject; // rcx
  unsigned int MGFlags; // eax
  __int64 FillIndex0; // r9
  __int64 Layer; // r8
  Scaleform::Render::MeshProvider_vtbl *v29; // r10
  Scaleform::Render::PrimitiveFill *v30; // rax
  Scaleform::RefCountNTSImpl *v31; // rcx
  Scaleform::Render::PrimitiveFill *v32; // rbx
  Scaleform::Render::Image *v33; // rdi
  Scaleform::Ptr<Scaleform::Render::Image> *v34; // rbx
  Scaleform::Render::Image *v35; // rdi
  Scaleform::Ptr<Scaleform::Render::Image> *v36; // rbx
  Scaleform::Render::FillData *p_fd0; // rdi
  __int64 v38; // rbx
  const Scaleform::Render::VertexFormat *pVFormat; // rcx
  Scaleform::Render::FillData *v40; // rbx
  const Scaleform::Render::VertexFormat *v41; // rcx
  __int64 v42; // [rsp+50h] [rbp-98h]
  char v43[8]; // [rsp+58h] [rbp-90h] BYREF
  Scaleform::Ptr<Scaleform::Render::Image> gradientImg0; // [rsp+60h] [rbp-88h] BYREF
  Scaleform::Ptr<Scaleform::Render::Image> gradientImg1; // [rsp+68h] [rbp-80h] BYREF
  Scaleform::Render::FillData fd0; // [rsp+70h] [rbp-78h] BYREF
  Scaleform::Render::FillData fd1; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v48; // [rsp+F0h] [rbp+8h]

  p_FillRecords = &this->FillRecords;
  v9 = fillRecordCount;
  Size = this->FillRecords.Data.Size;
  v13 = fillRecordCount;
  Scaleform::ArrayDataBase<Scaleform::Render::ComplexMesh::FillRecord,Scaleform::AllocatorLH<Scaleform::Render::ComplexMesh::FillRecord,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->FillRecords.Data,
    &this->FillRecords,
    fillRecordCount);
  if ( v9 > Size )
  {
    v14 = &p_FillRecords->Data.Data[Size];
    v15 = (unsigned int)v13 - Size;
    if ( (unsigned int)v13 != Size )
    {
      do
      {
        if ( v14 )
          v14->pFill.pObject = 0i64;
        ++v14;
        --v15;
      }
      while ( v15 );
    }
  }
  if ( this->FillRecords.Data.Size != v13 )
    return 0;
  v17 = hal;
  p_UpdateListNode = &this->UpdateListNode;
  v42 = ((__int64 (__fastcall *)(Scaleform::Render::HAL *, _QWORD))hal->GetTextureManager)(hal, 0i64);
  textureManager = (Scaleform::Render::TextureManager *)v42;
  if ( this->UpdateListNode.pPrev )
  {
    this->UpdateListNode.pPrev->pNext = this->UpdateListNode.pNext;
    this->UpdateListNode.pNext->pPrev = this->UpdateListNode.pPrev;
    p_UpdateListNode->pPrev = (Scaleform::Render::ComplexMesh::UpdateNode *)-1i64;
    this->UpdateListNode.pNext = (Scaleform::Render::ComplexMesh::UpdateNode *)-1i64;
    this->UpdateListNode.pNext = 0i64;
    p_UpdateListNode->pPrev = 0i64;
  }
  v48 = 0;
  *vbSize = 0i64;
  *indexCount = 0;
  *vertexCount = 0;
  if ( (_DWORD)v9 )
  {
    v20 = 0i64;
    v21 = 2i64;
    while ( 1 )
    {
      Data = p_FillRecords->Data.Data;
      p_PrimFill = &fd0.PrimFill;
      v24 = 2i64;
      do
      {
        *((_DWORD *)p_PrimFill - 4) = 3;
        *((_DWORD *)p_PrimFill - 2) = 0;
        *p_PrimFill = PrimFill_VColor_EAlpha;
        *((_BYTE *)p_PrimFill + 4) = 0;
        *((_QWORD *)p_PrimFill + 1) = &Scaleform::Render::VertexXY16iCF32::Format;
        p_PrimFill += 8;
        --v24;
      }
      while ( v24 );
      pObject = this->pProvider.pObject;
      MGFlags = this->MGFlags;
      FillIndex0 = fills->FillIndex0;
      Layer = this->Layer;
      v29 = pObject->__vftable;
      gradientImg0.pObject = 0i64;
      gradientImg1.pObject = 0i64;
      v29->GetFillData(pObject, &fd0, Layer, FillIndex0, MGFlags);
      if ( (fills->MergeFlags & 2) != 0 )
        this->pProvider.pObject->GetFillData(
          this->pProvider.pObject,
          &fd1,
          this->Layer,
          fills->FillIndex1,
          this->MGFlags);
      v30 = Scaleform::Render::PrimitiveFillManager::CreateMergedFill(
              this->pFillManager,
              fills->MergeFlags,
              fills->pFormat,
              &fd0,
              &fd1,
              &gradientImg0,
              &gradientImg1,
              textureManager,
              this->MorphRatio);
      v31 = Data[v20].pFill.pObject;
      v32 = v30;
      if ( v31 )
        Scaleform::RefCountNTSImpl::Release(v31);
      Data[v20].pFill.pObject = v32;
      if ( !v32 )
        break;
      if ( !p_UpdateListNode->pPrev && (fd0.Type == Fill_Image || fd1.Type == Fill_Image) )
        Scaleform::Render::HAL::addComplexMeshToUpdateList(v17, &this->UpdateListNode);
      v33 = gradientImg0.pObject;
      Data[v20].IndexOffset = *indexCount;
      Data[v20].IndexCount = fills->IndexCount;
      Data[v20].VertexByteOffset = *vbSize;
      Data[v20].VertexCount = fills->VertexCount;
      Data[v20].FillMatrixIndex[0] = fills->FillIndex0;
      Data[v20].FillMatrixIndex[1] = fills->FillIndex1;
      Data[v20].MergeFlags = fills->MergeFlags;
      if ( v33 )
      {
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Image>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Image>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
          &this->GradientImages.Data,
          &this->GradientImages,
          this->GradientImages.Data.Size + 1);
        v34 = &this->GradientImages.Data.Data[this->GradientImages.Data.Size - 1];
        if ( v34 )
        {
          v33->AddRef(v33);
          v34->pObject = v33;
        }
      }
      v35 = gradientImg1.pObject;
      if ( gradientImg1.pObject )
      {
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Image>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Image>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
          &this->GradientImages.Data,
          &this->GradientImages,
          this->GradientImages.Data.Size + 1);
        v36 = &this->GradientImages.Data.Data[this->GradientImages.Data.Size - 1];
        if ( v36 )
        {
          v35->AddRef(v35);
          v36->pObject = v35;
        }
      }
      hal->MapVertexFormat(
        hal,
        Data[v20].pFill.pObject->Data.Type,
        Data[v20].pFill.pObject->Data.pFormat,
        (const Scaleform::Render::VertexFormat **)Data[v20].pFormats,
        (const Scaleform::Render::VertexFormat **)v43,
        (const Scaleform::Render::VertexFormat **)&Data[v20].pFormats[1],
        1u);
      p_fd0 = &fd0;
      v38 = 2i64;
      *vbSize += fills->VertexCount * Data[v20].pFormats[0]->Size;
      *vertexCount += fills->VertexCount;
      *indexCount += fills->IndexCount;
      do
      {
        pVFormat = p_fd0[-1].pVFormat;
        p_fd0 = (Scaleform::Render::FillData *)((char *)p_fd0 - 8);
        --v38;
        if ( pVFormat )
          (*(void (__fastcall **)(const Scaleform::Render::VertexFormat *))(*(_QWORD *)&pVFormat->Size + 16i64))(pVFormat);
      }
      while ( v38 );
      p_FillRecords = &this->FillRecords;
      v17 = hal;
      textureManager = (Scaleform::Render::TextureManager *)v42;
      ++fills;
      ++v48;
      ++v20;
      if ( v48 >= fillRecordCount )
        goto LABEL_34;
    }
    v40 = &fd0;
    do
    {
      v41 = v40[-1].pVFormat;
      v40 = (Scaleform::Render::FillData *)((char *)v40 - 8);
      --v21;
      if ( v41 )
        (*(void (__fastcall **)(const Scaleform::Render::VertexFormat *))(*(_QWORD *)&v41->Size + 16i64))(v41);
    }
    while ( v21 );
    return 0;
  }
  else
  {
LABEL_34:
    this->VertexMatrix = *vertexMatrix;
    Scaleform::Render::ComplexMesh::updateFillMatrixCache(this, v17, vertexMatrix);
    return 1;
  }
}

void __fastcall Scaleform::Render::CacheablePrimitive::Insert(
        Scaleform::Render::CacheablePrimitive *this,
        unsigned __int64 index,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *m)
{
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::MatrixPoolImpl::HMatrix,Scaleform::AllocatorLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
    &this->PrimitiveArea,
    index,
    m);
}

void __fastcall Scaleform::Render::MaskPrimitive::Insert(
        Scaleform::Render::MaskPrimitive *this,
        unsigned __int64 index,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *m)
{
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::MatrixPoolImpl::HMatrix,Scaleform::AllocatorLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
    &this->MaskAreas,
    index,
    m);
}

char __fastcall Scaleform::Render::Primitive::Insert(
        Scaleform::Render::Primitive *this,
        Scaleform::Render::HAL *hal,
        unsigned int index,
        Scaleform::Render::Mesh *pmesh,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *m)
{
  Scaleform::Render::PrimitiveBatch *pNext; // rbx
  unsigned __int64 v8; // r14
  Scaleform::Render::PrimitiveBatch *v9; // rsi
  int v10; // edi
  Scaleform::Render::MeshCache *v11; // rax
  __int64 v12; // r8
  unsigned int MeshCount; // ecx
  __int64 v14; // rax
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rax
  Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry val; // [rsp+20h] [rbp-28h] BYREF

  pNext = this->Batches.Root.pNext;
  v8 = index;
  v9 = 0i64;
  v10 = 0;
  v11 = hal->GetMeshCache(hal);
  v12 = (__int64)v11->GetParams(&v11->Scaleform::Render::MeshCacheConfig);
  while ( 1 )
  {
    if ( v10 == (_DWORD)v8 )
    {
      if ( v9 && v9->Type == DP_Virtual )
      {
        ++v9->MeshCount;
        goto LABEL_17;
      }
      if ( pNext == (Scaleform::Render::PrimitiveBatch *)&this->Batches || pNext->Type != DP_Virtual )
      {
        v14 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::Primitive *, __int64))Scaleform::Memory::pGlobalHeap->AllocAutoHeap)(
                Scaleform::Memory::pGlobalHeap,
                this,
                80i64);
        *(_QWORD *)(v14 + 32) = 0i64;
        *(_DWORD *)(v14 + 40) = 3;
        *(_QWORD *)(v14 + 48) = 0i64;
        *(_BYTE *)(v14 + 56) = 0;
        *(_QWORD *)(v14 + 64) = this;
        *(_DWORD *)(v14 + 72) = 1;
        *(_DWORD *)(v14 + 76) = v10;
        *(_QWORD *)(v14 + 8) = pNext->pNext->Scaleform::ListNode<Scaleform::Render::PrimitiveBatch>::$B97D8B60C1ACCDCC2E89E5A3140D94B3::pPrev;
        *(_QWORD *)v14 = pNext->pPrev;
        pNext->pPrev->pNext = (Scaleform::Render::PrimitiveBatch *)v14;
        pNext->pPrev = (Scaleform::Render::PrimitiveBatch *)v14;
        goto LABEL_17;
      }
    }
    if ( pNext == (Scaleform::Render::PrimitiveBatch *)&this->Batches )
      goto LABEL_17;
    MeshCount = pNext->MeshCount;
    if ( (int)v8 - v10 < MeshCount )
      break;
    v9 = pNext;
    v10 += MeshCount;
    pNext = pNext->pNext;
  }
  ++pNext->MeshCount;
  if ( pNext->Type != DP_Instanced
    || this->Meshes.Data.Data[v10].pMesh.pObject != pmesh
    || pNext->MeshCount > *(_DWORD *)(v12 + 48) )
  {
    pNext->Type = DP_Virtual;
    if ( pNext->MeshNode.pMeshItem )
    {
      pNext->MeshNode.pPrev->pNext = pNext->MeshNode.pNext;
      pNext->MeshNode.pNext->pPrev = pNext->MeshNode.pPrev;
      pNext->MeshNode.pPrev = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
      pNext->MeshNode.pNext = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
      pNext->MeshNode.pMeshItem = 0i64;
    }
  }
LABEL_17:
  pHandle = m->pHandle;
  val.M.pHandle = pHandle;
  if ( pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    ++pHandle->pHeader->RefCount;
  if ( pmesh )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pmesh);
  val.pMesh.pObject = (Scaleform::Render::ComplexMesh *)pmesh;
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
    (Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy> > *)&this->Meshes,
    v8,
    &val);
  if ( (unsigned int)v8 < this->ModifyIndex )
    this->ModifyIndex = v8;
  ++Scaleform::Render::Primitive_Insert;
  if ( val.pMesh.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)val.pMesh.pObject);
  if ( val.M.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release(val.M.pHandle->pHeader);
  return 1;
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index,
        const Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *val)
{
  unsigned __int64 Size; // rbp
  Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *v10; // rdi
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rax
  Scaleform::RefCountVImpl *pObject; // rcx

  Size = this->Data.Size;
  Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Data,
    this,
    Size + 1);
  if ( Size + 1 > Size )
  {
    v7 = &this->Data.Data[Size];
    v8 = 1i64;
    do
    {
      if ( v7 )
      {
        v7->M.pHandle = &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle;
        v7->pMesh.pObject = 0i64;
      }
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  v9 = this->Data.Size;
  if ( index < v9 - 1 )
    memmove(&this->Data.Data[index + 1], &this->Data.Data[index], 16 * (v9 - index) - 16);
  v10 = &this->Data.Data[index];
  if ( v10 )
  {
    pHandle = val->M.pHandle;
    v10->M.pHandle = val->M.pHandle;
    if ( pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
      ++pHandle->pHeader->RefCount;
    pObject = (Scaleform::RefCountVImpl *)val->pMesh.pObject;
    if ( pObject )
      Scaleform::Render::RenderBuffer::AddRef(pObject);
    v10->pMesh.pObject = val->pMesh.pObject;
  }
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::MatrixPoolImpl::HMatrix,Scaleform::AllocatorLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::MatrixPoolImpl::HMatrix,Scaleform::AllocatorLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *val)
{
  unsigned __int64 Size; // rbp
  Scaleform::Render::MatrixPoolImpl::HMatrix *v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  Scaleform::Render::MatrixPoolImpl::HMatrix *v10; // rcx
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rax

  Size = this->Data.Size;
  Scaleform::ArrayDataBase<Scaleform::Render::MatrixPoolImpl::HMatrix,Scaleform::AllocatorLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Data,
    this,
    Size + 1);
  if ( Size + 1 > Size )
  {
    v7 = &this->Data.Data[Size];
    v8 = 1i64;
    do
    {
      if ( v7 )
        v7->pHandle = &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle;
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  v9 = this->Data.Size;
  if ( index < v9 - 1 )
    memmove(&this->Data.Data[index + 1], &this->Data.Data[index], 8 * (v9 - index) - 8);
  v10 = &this->Data.Data[index];
  if ( v10 )
  {
    pHandle = val->pHandle;
    v10->pHandle = val->pHandle;
    if ( pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
      ++pHandle->pHeader->RefCount;
  }
}

bool __fastcall Scaleform::Render::ComplexMesh::IsEvicted(Scaleform::Render::ComplexMesh *this)
{
  return !this->pCacheMeshItem && !this->StagingBufferSize;
}

bool __fastcall Scaleform::Render::Mesh::IsEvicted(Scaleform::Render::Mesh *this)
{
  return !this->CacheItems.Size && !this->StagingBufferSize;
}

bool __fastcall Scaleform::Render::MeshBase::IsEvicted(Scaleform::Render::MeshBase *this)
{
  return this->StagingBufferSize == 0;
}

bool __fastcall Scaleform::Render::PrimitiveFill::IsSolid(Scaleform::Render::PrimitiveFillType type)
{
  return (unsigned int)type <= PrimFill_SolidColor;
}

void __fastcall Scaleform::Render::Mesh::OnStagingNodeEvict(Scaleform::Render::Mesh *this)
{
  bool v1; // zf
  bool *p_LargeMesh; // rdx
  __int64 v3; // rcx

  v1 = *(_QWORD *)&this->MorphRatio == 0i64;
  this->pPrev = 0i64;
  if ( v1 )
  {
    p_LargeMesh = &this[-1].LargeMesh;
    v3 = *(_QWORD *)&this->PinCount;
    if ( v3 )
      (*(void (__fastcall **)(__int64, bool *))(*(_QWORD *)v3 + 32i64))(v3, p_LargeMesh);
  }
}

void __fastcall Scaleform::Render::MeshStagingNode::OnStagingNodeEvict(Scaleform::Render::MeshStagingNode *this)
{
  this->StagingBufferSize = 0i64;
}

__int64 __fastcall Scaleform::Render::BlendPrimitive::Prepare(
        Scaleform::Render::BlendPrimitive *this,
        Scaleform::Render::RenderQueueItem *__formal,
        Scaleform::Render::RenderQueueProcessor *qp,
        __int64 a4)
{
  Scaleform::Render::RenderQueueProcessor *v5; // rdi
  Scaleform::Render::BlendMode Size; // ecx
  Scaleform::Render::HAL *pHAL; // rcx

  v5 = qp;
  Size = this->PrimitiveArea.Data.Size;
  if ( Size == Blend_Invalid )
  {
    pHAL = qp->pHAL;
    LOBYTE(qp) = 1;
LABEL_5:
    ((void (__fastcall *)(Scaleform::Render::HAL *, Scaleform::ArrayDefaultPolicy *, Scaleform::Render::RenderQueueProcessor *, __int64))pHAL->PrepareCacheable)(
      pHAL,
      &this[-1].PrimitiveArea.Data.Policy,
      qp,
      a4);
    return 0i64;
  }
  if ( Scaleform::Render::BlendState::IsTargetAllocationNeededForBlendMode(Size) )
  {
    pHAL = v5->pHAL;
    qp = 0i64;
    goto LABEL_5;
  }
  return 0i64;
}

__int64 __fastcall Scaleform::Render::FilterPrimitive::Prepare(
        Scaleform::Render::FilterPrimitive *this,
        Scaleform::Render::RenderQueueItem *__formal,
        Scaleform::Render::RenderQueueProcessor *qp,
        bool a4)
{
  _BOOL8 v6; // r8

  if ( qp->pHAL->ShouldRenderFilters(
         qp->pHAL,
         (const Scaleform::Render::FilterPrimitive *)&this[-1].PrimitiveArea.Data.Policy) )
  {
    LOBYTE(v6) = this->PrimitiveArea.Data.Size == 0;
    qp->pHAL->PrepareCacheable(
      qp->pHAL,
      (Scaleform::Render::CacheablePrimitive *)&this[-1].PrimitiveArea.Data.Policy,
      v6);
  }
  return 0i64;
}

void __fastcall Scaleform::Render::CacheablePrimitive::Remove(
        Scaleform::Render::CacheablePrimitive *this,
        unsigned __int64 index,
        unsigned __int64 count)
{
  unsigned __int64 i; // rbx
  Scaleform::ArrayLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2,Scaleform::ArrayDefaultPolicy> *p_PrimitiveArea; // r14
  unsigned __int64 v8; // rbp
  Scaleform::Render::MatrixPoolImpl::DataHeader ***v9; // rbx
  unsigned __int64 v10; // rdi

  for ( i = index; i < count; ++i )
    this->uncachePrimitive(this, i);
  p_PrimitiveArea = &this->PrimitiveArea;
  if ( this->PrimitiveArea.Data.Size == count )
  {
    Scaleform::ArrayDataBase<Scaleform::Render::MatrixPoolImpl::HMatrix,Scaleform::AllocatorLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->PrimitiveArea.Data,
      &this->PrimitiveArea,
      0i64);
  }
  else
  {
    v8 = index + count;
    v9 = (Scaleform::Render::MatrixPoolImpl::DataHeader ***)&p_PrimitiveArea->Data.Data[v8 - 1];
    if ( count )
    {
      v10 = count;
      do
      {
        if ( *v9 != (Scaleform::Render::MatrixPoolImpl::DataHeader **)&Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
          Scaleform::Render::MatrixPoolImpl::DataHeader::Release(**v9);
        --v9;
        --v10;
      }
      while ( v10 );
    }
    memmove(
      &p_PrimitiveArea->Data.Data[index],
      &p_PrimitiveArea->Data.Data[v8],
      8 * (p_PrimitiveArea->Data.Size - index - count));
    p_PrimitiveArea->Data.Size -= count;
  }
}

void __fastcall Scaleform::Render::MaskPrimitive::Remove(
        Scaleform::Render::MaskPrimitive *this,
        unsigned __int64 index,
        unsigned __int64 count)
{
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::MatrixPoolImpl::HMatrix,Scaleform::AllocatorLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2>,Scaleform::ArrayDefaultPolicy>>::RemoveMultipleAt(
    &this->MaskAreas,
    index,
    count);
}

void __fastcall Scaleform::Render::Primitive::Remove(
        Scaleform::Render::Primitive *this,
        unsigned int index,
        unsigned int count)
{
  Scaleform::Render::PrimitiveBatch *pNext; // rbx
  int v4; // esi
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbp
  unsigned int v8; // edi
  unsigned int MeshCount; // er9
  Scaleform::Render::PrimitiveBatch *v10; // r8
  $B97D8B60C1ACCDCC2E89E5A3140D94B3 *v11; // rdx
  unsigned int v12; // edx
  bool v13; // zf

  pNext = this->Batches.Root.pNext;
  v4 = 0;
  v5 = count;
  v6 = index;
  v8 = count;
  while ( 1 )
  {
    MeshCount = pNext->MeshCount;
    if ( (int)v6 - v4 < MeshCount )
      break;
LABEL_14:
    v4 += pNext->MeshCount;
    pNext = pNext->pNext;
LABEL_15:
    if ( !v8 || pNext == (Scaleform::Render::PrimitiveBatch *)&this->Batches )
      goto LABEL_21;
  }
  if ( (_DWORD)v6 != v4 )
  {
    v12 = v8;
    if ( v8 > v4 + MeshCount - (unsigned int)v6 )
      v12 = v4 + MeshCount - v6;
    v13 = pNext->Type == DP_Instanced;
    pNext->MeshCount = MeshCount - v12;
    if ( !v13 )
    {
      pNext->Type = DP_Virtual;
      if ( pNext->MeshNode.pMeshItem )
      {
        pNext->MeshNode.pPrev->pNext = pNext->MeshNode.pNext;
        pNext->MeshNode.pNext->pPrev = pNext->MeshNode.pPrev;
        pNext->MeshNode.pPrev = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
        pNext->MeshNode.pNext = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
        pNext->MeshNode.pMeshItem = 0i64;
      }
    }
    v8 -= v12;
    goto LABEL_14;
  }
  if ( v8 >= MeshCount )
  {
    v10 = pNext;
    v11 = &pNext->8;
    pNext = pNext->pNext;
    v8 -= MeshCount;
    v10->pPrev->pNext = pNext;
    v11->pNext->pPrev = v10->pPrev;
    v10->pPrev = (Scaleform::Render::PrimitiveBatch *)-1i64;
    v11->pNext = (Scaleform::Render::PrimitiveBatch *)-1i64;
    if ( v10->MeshNode.pMeshItem )
    {
      v10->MeshNode.pPrev->pNext = v10->MeshNode.pNext;
      v10->MeshNode.pNext->pPrev = v10->MeshNode.pPrev;
      v10->MeshNode.pPrev = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
      v10->MeshNode.pNext = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
      v10->MeshNode.pMeshItem = 0i64;
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v10);
    goto LABEL_15;
  }
  pNext->MeshCount -= v8;
  if ( pNext->Type != DP_Instanced )
  {
    pNext->Type = DP_Virtual;
    if ( pNext->MeshNode.pMeshItem )
    {
      pNext->MeshNode.pPrev->pNext = pNext->MeshNode.pNext;
      pNext->MeshNode.pNext->pPrev = pNext->MeshNode.pPrev;
      pNext->MeshNode.pPrev = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
      pNext->MeshNode.pNext = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
      pNext->MeshNode.pMeshItem = 0i64;
    }
  }
LABEL_21:
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>>::RemoveMultipleAt(
    (Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy> > *)&this->Meshes,
    v6,
    v5);
  if ( (unsigned int)v6 < this->ModifyIndex )
    this->ModifyIndex = v6;
}

void __fastcall Scaleform::Render::PrimitiveBatch::RemoveAndFree(Scaleform::Render::PrimitiveBatch *this)
{
  this->pPrev->pNext = this->pNext;
  this->pNext->Scaleform::ListNode<Scaleform::Render::PrimitiveBatch>::$B97D8B60C1ACCDCC2E89E5A3140D94B3::pPrev = this->pPrev;
  this->pPrev = (Scaleform::Render::PrimitiveBatch *)-1i64;
  this->pNext = (Scaleform::Render::PrimitiveBatch *)-1i64;
  if ( this->MeshNode.pMeshItem )
  {
    this->MeshNode.pPrev->pNext = this->MeshNode.pNext;
    this->MeshNode.pNext->pPrev = this->MeshNode.pPrev;
    this->MeshNode.pPrev = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
    this->MeshNode.pNext = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
    this->MeshNode.pMeshItem = 0i64;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this);
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>>::RemoveMultipleAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index,
        unsigned __int64 num)
{
  if ( this->Data.Size == num )
  {
    Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->Data,
      this,
      0i64);
  }
  else
  {
    Scaleform::ConstructorMov<Scaleform::Render::Primitive::MeshEntry>::DestructArray(&this->Data.Data[index], num);
    memmove(&this->Data.Data[index], &this->Data.Data[index + num], 16 * (this->Data.Size - index - num));
    this->Data.Size -= num;
  }
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::MatrixPoolImpl::HMatrix,Scaleform::AllocatorLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2>,Scaleform::ArrayDefaultPolicy>>::RemoveMultipleAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::MatrixPoolImpl::HMatrix,Scaleform::AllocatorLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index,
        unsigned __int64 num)
{
  unsigned __int64 v6; // r15
  Scaleform::Render::MatrixPoolImpl::HMatrix *v7; // rbx
  unsigned __int64 v8; // rdi

  if ( this->Data.Size == num )
  {
    Scaleform::ArrayDataBase<Scaleform::Render::MatrixPoolImpl::HMatrix,Scaleform::AllocatorLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->Data,
      this,
      0i64);
  }
  else
  {
    v6 = index + num;
    v7 = &this->Data.Data[v6 - 1];
    if ( num )
    {
      v8 = num;
      do
      {
        if ( v7->pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
          Scaleform::Render::MatrixPoolImpl::DataHeader::Release(v7->pHandle->pHeader);
        --v7;
        --v8;
      }
      while ( v8 );
    }
    memmove(&this->Data.Data[index], &this->Data.Data[v6], 8 * (this->Data.Size - index - num));
    this->Data.Size -= num;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::ComplexMesh::FillRecord,Scaleform::AllocatorLH<Scaleform::Render::ComplexMesh::FillRecord,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::ComplexMesh::FillRecord *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::Render::ComplexMesh::FillRecord *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 56 * v6;
      if ( Data )
      {
        v8 = (Scaleform::Render::ComplexMesh::FillRecord *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                             Scaleform::Memory::pGlobalHeap,
                                                             Data,
                                                             v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::Render::ComplexMesh::FillRecord *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::Button::CharToRec *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::GFx::Button::CharToRec *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 16 * v6;
      if ( Data )
      {
        v8 = (Scaleform::GFx::Button::CharToRec *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    Data,
                                                    v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::GFx::Button::CharToRec *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::ExternalFontWinAPI::GlyphType,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Value,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Value,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::AS3::Value *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::GFx::AS3::Value *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 32 * v6;
      if ( Data )
      {
        v8 = (Scaleform::GFx::AS3::Value *)Scaleform::Memory::pGlobalHeap->Realloc(
                                             Scaleform::Memory::pGlobalHeap,
                                             Data,
                                             v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::GFx::AS3::Value *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayData<Scaleform::Render::Matrix2x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix2x4<float>,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<Scaleform::Render::Matrix2x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix2x4<float>,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v5; // r8
  Scaleform::Render::Matrix2x4<float> *v6; // rax
  unsigned __int64 i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      v5 = newSize + (newSize >> 2);
      goto LABEL_6;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    v5 = newSize;
LABEL_6:
    Scaleform::ArrayDataBase<Scaleform::Render::ExternalFontWinAPI::GlyphType,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Value,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Value,2>,Scaleform::ArrayDefaultPolicy> *)this,
      this,
      v5);
  }
  this->Size = newSize;
  if ( newSize > Size )
  {
    v6 = &this->Data[Size];
    for ( i = newSize - Size; i; --i )
    {
      if ( v6 )
      {
        *(_QWORD *)&v6->M[0][0] = 1065353216i64;
        *(_QWORD *)&v6->M[0][2] = 0i64;
        v6->M[1][0] = 0.0;
        *(_QWORD *)&v6->M[1][1] = 1065353216i64;
        v6->M[1][3] = 0.0;
      }
      ++v6;
    }
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::ComplexMesh::FillRecord,Scaleform::AllocatorLH<Scaleform::Render::ComplexMesh::FillRecord,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::ComplexMesh::FillRecord,Scaleform::AllocatorLH<Scaleform::Render::ComplexMesh::FillRecord,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 v7; // rdi
  Scaleform::Render::ComplexMesh::FillRecord *i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = &this->Data[v7 - 1 + newSize]; v7; --v7 )
    {
      if ( i->pFill.pObject )
        Scaleform::RefCountNTSImpl::Release(i->pFill.pObject);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    Scaleform::ConstructorMov<Scaleform::Render::Primitive::MeshEntry>::DestructArray(
      &this->Data[newSize],
      Size - newSize);
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Image>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Image>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Image>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Image>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::Ptr<Scaleform::Render::Image> *i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = &this->Data[newSize - 1 + v7]; v7; --v7 )
    {
      if ( i->pObject )
        i->pObject->Release(i->pObject);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::MatrixPoolImpl::HMatrix,Scaleform::AllocatorLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::MatrixPoolImpl::HMatrix,Scaleform::AllocatorLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::Render::MatrixPoolImpl::HMatrix *i; // rdi

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = &this->Data[newSize - 1 + v7]; v7; --v7 )
    {
      if ( i->pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
        Scaleform::Render::MatrixPoolImpl::DataHeader::Release(i->pHandle->pHeader);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::Render::CacheablePrimitive::SetCacheResults(
        Scaleform::Render::CacheablePrimitive *this,
        Scaleform::Render::CacheablePrimitive::CacheState state,
        Scaleform::Render::RenderTarget **results,
        unsigned int count)
{
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *CacheResults; // rbx
  unsigned int v7; // esi
  signed __int64 v8; // r12
  Scaleform::Render::RenderTarget *v11; // rdi

  CacheResults = this->CacheResults;
  v7 = 0;
  v8 = (char *)results - (char *)this;
  this->Caching = state;
  do
  {
    if ( v7 < count && results )
    {
      v11 = *(Scaleform::Render::RenderTarget **)((char *)&CacheResults[-4].pObject + v8);
      if ( v11 )
        v11->AddRef(*(Scaleform::Render::RenderTarget **)((char *)&CacheResults[-4].pObject + v8));
      if ( CacheResults->pObject )
        CacheResults->pObject->Release(CacheResults->pObject);
      CacheResults->pObject = v11;
    }
    else
    {
      if ( CacheResults->pObject )
        CacheResults->pObject->Release(CacheResults->pObject);
      CacheResults->pObject = 0i64;
    }
    ++v7;
    ++CacheResults;
  }
  while ( v7 < 2 );
  if ( state == Cache_Mesh )
    this->uncachePrimitive(this, 0i64);
}

void __fastcall Scaleform::Render::Primitive::SetMesh(
        Scaleform::Render::Primitive *this,
        unsigned int index,
        Scaleform::Render::Mesh *pmesh)
{
  Scaleform::Render::Primitive::MeshEntry *v5; // rsi
  Scaleform::RefCountVImpl *pObject; // rcx
  int v8; // er8
  Scaleform::Render::PrimitiveBatch *pNext; // rdx

  v5 = &this->Meshes.Data.Data[index];
  if ( v5->pMesh.pObject != pmesh )
  {
    if ( pmesh )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pmesh);
    pObject = (Scaleform::RefCountVImpl *)v5->pMesh.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    v5->pMesh.pObject = pmesh;
    v8 = 0;
    pNext = this->Batches.Root.pNext;
    if ( index >= pNext->MeshCount )
    {
      do
      {
        v8 += pNext->MeshCount;
        pNext = pNext->pNext;
      }
      while ( index >= v8 + pNext->MeshCount );
    }
    pNext->Type = DP_Virtual;
    if ( pNext->MeshNode.pMeshItem )
    {
      pNext->MeshNode.pPrev->pNext = pNext->MeshNode.pNext;
      pNext->MeshNode.pNext->pPrev = pNext->MeshNode.pPrev;
      pNext->MeshNode.pPrev = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
      pNext->MeshNode.pNext = (Scaleform::Render::MeshCacheItemUseNode *)-1i64;
      pNext->MeshNode.pMeshItem = 0i64;
    }
  }
}

Scaleform::Render::GradientImage *__fastcall Scaleform::Render::PrimitiveFillManager::createGradientImage(
        Scaleform::Render::PrimitiveFillManager *this,
        Scaleform::Render::GradientData *data,
        float morphRatio)
{
  bool v6; // zf
  unsigned __int64 v7; // rax
  signed __int64 v8; // rax
  Scaleform::Render::GradientImage *v9; // rbx
  Scaleform::Render::GradientImage *v10; // rax
  unsigned __int64 HashValue; // rsi
  Scaleform::Render::GradientImage *v12; // rax
  Scaleform::Render::GradientData *pObject; // rcx
  Scaleform::Render::GradientKey key; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::Render::GradientImage *v15; // [rsp+58h] [rbp+10h] BYREF

  if ( !data )
    return 0i64;
  v6 = this->Gradients.pTable == 0i64;
  key.MorphRatio = morphRatio;
  key.pData = data;
  if ( v6
    || (v7 = Scaleform::Render::GradientData::GetHashValue(data, morphRatio),
        v8 = Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor>>::findIndexCore<Scaleform::Render::GradientKey>(
               &this->Gradients,
               &key,
               v7 & this->Gradients.pTable->SizeMask),
        v8 < 0) )
  {
    LODWORD(v15) = 3;
    v10 = (Scaleform::Render::GradientImage *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::PrimitiveFillManager *, __int64, Scaleform::Render::GradientImage **, const Scaleform::Render::GradientData *, _DWORD))Scaleform::Memory::pGlobalHeap->AllocAutoHeap)(
                                                Scaleform::Memory::pGlobalHeap,
                                                this,
                                                72i64,
                                                &v15,
                                                key.pData,
                                                LODWORD(key.MorphRatio));
    HashValue = 0i64;
    if ( v10 )
    {
      Scaleform::Render::GradientImage::GradientImage(v10, this, data, morphRatio);
      v9 = v12;
      v15 = v12;
    }
    else
    {
      v9 = 0i64;
      v15 = 0i64;
    }
    pObject = v9->pData.pObject;
    if ( pObject )
      HashValue = Scaleform::Render::GradientData::GetHashValue(pObject, v9->MorphRatio);
    Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor>>::add<Scaleform::Render::GradientImage *>(
      &this->Gradients,
      &this->Gradients,
      &v15,
      HashValue);
  }
  else
  {
    v9 = (Scaleform::Render::GradientImage *)*(&this->Gradients.pTable[2].EntryCount + 3 * v8);
    v9->AddRef(v9);
  }
  return v9;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

void __fastcall Scaleform::Render::PrimitiveFillManager::removeGradient(
        Scaleform::Render::PrimitiveFillManager *this,
        Scaleform::Render::GradientImage *img)
{
  Scaleform::Render::GradientImage *key; // [rsp+38h] [rbp+10h] BYREF

  key = img;
  Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor>>::RemoveAlt<Scaleform::Render::GradientImage *>(
    &this->Gradients,
    &key);
}

void __fastcall Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> >::TableType *pTable; // rbx
  int v10; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> > v11; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v10 = 2;
    v6 = 0i64;
    v11.pTable = 0i64;
    v11.pTable = (Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 24 * v5 + 16, &v10);
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
          Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor>>::Add<Scaleform::Render::GradientImage *>(
            &v11,
            pheapAddr,
            (Scaleform::Render::GradientImage *const *)((char *)&pTable[2] + v6));
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

void __fastcall Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  char *v9; // rsi
  unsigned __int64 HashValue; // rax
  int v11; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> > v12; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v11 = 2;
    v6 = 0i64;
    v12.pTable = 0i64;
    v12.pTable = (Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 24 * v5 + 16, &v11);
    v12.pTable->EntryCount = 0i64;
    v12.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 24i64;
        *(_QWORD *)((char *)v12.pTable + v7 - 8) = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = (char *)this->pTable + v6;
        if ( *((_QWORD *)v9 + 2) != -2i64 )
        {
          HashValue = Scaleform::Render::PrimitiveFillData::GetHashValue((Scaleform::Render::PrimitiveFillData *)(*((_QWORD *)v9 + 4) + 16i64));
          Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor>>::add<Scaleform::Render::PrimitiveFill *>(
            &v12,
            pheapAddr,
            (Scaleform::Render::PrimitiveFill *const *)v9 + 4,
            HashValue);
          *((_QWORD *)v9 + 2) = -2i64;
        }
        v6 += 24i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v12.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>>::Clear((Scaleform::HashSetBase<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::AllocatorDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,348>,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> > *)this);
  }
}

void __fastcall Scaleform::Render::CacheablePrimitive::uncachePrimitive(
        Scaleform::Render::CacheablePrimitive *this,
        unsigned __int64 index)
{
  Scaleform::Render::MatrixPoolImpl::HMatrix *v4; // rcx
  const Scaleform::Render::Matrix2x4<float> *TextureMatrix; // rax
  Scaleform::Render::MatrixPoolImpl::HMatrix *Data; // rax
  Scaleform::Render::Matrix2x4<float> m; // [rsp+20h] [rbp-38h] BYREF

  if ( index < this->PrimitiveArea.Data.Size )
  {
    v4 = &this->PrimitiveArea.Data.Data[index];
    if ( v4->pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    {
      if ( (v4->pHandle->pHeader->Format & 2) != 0 )
      {
        TextureMatrix = Scaleform::Render::MatrixPoolImpl::HMatrix::GetTextureMatrix(v4, 0);
        Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix2D(&this->PrimitiveArea.Data.Data[index], TextureMatrix);
      }
      Data = this->PrimitiveArea.Data.Data;
      memset(&m, 0, sizeof(m));
      Scaleform::Render::MatrixPoolImpl::HMatrix::SetTextureMatrix(&Data[index], &m, 1u);
    }
  }
}

void __fastcall Scaleform::Render::ComplexMesh::updateFillMatrixCache(
        Scaleform::Render::ComplexMesh *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::Matrix2x4<float> *vertexMatrix)
{
  unsigned __int64 v6; // rbp
  unsigned int v7; // ebx
  __int64 v8; // rsi

  v6 = this->pProvider.pObject->GetFillCount(this->pProvider.pObject, this->Layer, this->MGFlags);
  Scaleform::ArrayData<Scaleform::Render::Matrix2x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix2x4<float>,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->FillMatrixCache.Data,
    v6);
  if ( this->FillMatrixCache.Data.Size == v6 )
  {
    v7 = 0;
    if ( (_DWORD)v6 )
    {
      v8 = 0i64;
      do
      {
        this->pProvider.pObject->GetFillMatrix(
          this->pProvider.pObject,
          hal,
          this,
          &this->FillMatrixCache.Data.Data[v8],
          this->Layer,
          v7,
          this->MGFlags);
        Scaleform::Render::Matrix2x4<float>::Prepend(&this->FillMatrixCache.Data.Data[v8], vertexMatrix);
        ++v7;
        ++v8;
      }
      while ( v7 < (unsigned int)v6 );
    }
  }
}

bool __fastcall Scaleform::Render::ComplexMesh::updateFills(
        Scaleform::Render::ComplexMesh *this,
        Scaleform::Render::HAL *hal)
{
  bool result; // al
  Scaleform::Render::TextureManager *textureManager; // r15
  unsigned int v6; // ebp
  __int64 v7; // rcx
  Scaleform::Render::ComplexMesh::FillRecord *v8; // rdi
  __int64 v9; // rcx
  Scaleform::Render::PrimitiveFillType *p_PrimFill; // rax
  Scaleform::Render::MeshProvider *pObject; // rcx
  unsigned int MGFlags; // eax
  __int64 v13; // r9
  __int64 Layer; // r8
  Scaleform::Render::MeshProvider_vtbl *v15; // r10
  Scaleform::Render::PrimitiveFill *v16; // rax
  Scaleform::RefCountNTSImpl *v17; // rbx
  __int64 v18; // rbx
  Scaleform::Render::FillData *v19; // rdi
  const Scaleform::Render::VertexFormat *v20; // rcx
  __int64 v21; // rbx
  Scaleform::Render::FillData *p_fd0; // rdi
  const Scaleform::Render::VertexFormat *pVFormat; // rcx
  Scaleform::Ptr<Scaleform::Render::Image> gradientImg0; // [rsp+50h] [rbp-78h] BYREF
  Scaleform::Ptr<Scaleform::Render::Image> gradientImg1; // [rsp+58h] [rbp-70h] BYREF
  Scaleform::Render::FillData fd0; // [rsp+60h] [rbp-68h] BYREF
  Scaleform::Render::FillData fd1; // [rsp+80h] [rbp-48h] BYREF

  result = this->pProvider.pObject->IsValid(this->pProvider.pObject);
  if ( result )
  {
    textureManager = hal->GetTextureManager(hal);
    v6 = 0;
    if ( this->FillRecords.Data.Size )
    {
      v7 = 0i64;
      do
      {
        v8 = &this->FillRecords.Data.Data[v7];
        if ( v8->pFill.pObject )
        {
          v9 = 2i64;
          p_PrimFill = &fd0.PrimFill;
          do
          {
            *((_DWORD *)p_PrimFill - 4) = 3;
            *((_DWORD *)p_PrimFill - 2) = 0;
            *p_PrimFill = PrimFill_VColor_EAlpha;
            *((_BYTE *)p_PrimFill + 4) = 0;
            *((_QWORD *)p_PrimFill + 1) = &Scaleform::Render::VertexXY16iCF32::Format;
            p_PrimFill += 8;
            --v9;
          }
          while ( v9 );
          pObject = this->pProvider.pObject;
          MGFlags = this->MGFlags;
          v13 = v8->FillMatrixIndex[0];
          Layer = this->Layer;
          v15 = pObject->__vftable;
          gradientImg0.pObject = 0i64;
          gradientImg1.pObject = 0i64;
          v15->GetFillData(pObject, &fd0, Layer, v13, MGFlags);
          this->pProvider.pObject->GetFillData(
            this->pProvider.pObject,
            &fd1,
            this->Layer,
            v8->FillMatrixIndex[1],
            this->MGFlags);
          v16 = Scaleform::Render::PrimitiveFillManager::CreateMergedFill(
                  this->pFillManager,
                  v8->MergeFlags,
                  v8->pFill.pObject->Data.pFormat,
                  &fd0,
                  &fd1,
                  &gradientImg0,
                  &gradientImg1,
                  textureManager,
                  this->MorphRatio);
          v17 = v16;
          if ( v16 )
          {
            ++v16->RefCount;
            if ( v8->pFill.pObject )
              Scaleform::RefCountNTSImpl::Release(v8->pFill.pObject);
            v8->pFill.pObject = (Scaleform::Render::PrimitiveFill *)v17;
            Scaleform::RefCountNTSImpl::Release(v17);
            v21 = 2i64;
            p_fd0 = &fd0;
            do
            {
              pVFormat = p_fd0[-1].pVFormat;
              p_fd0 = (Scaleform::Render::FillData *)((char *)p_fd0 - 8);
              --v21;
              if ( pVFormat )
                (*(void (__fastcall **)(const Scaleform::Render::VertexFormat *))(*(_QWORD *)&pVFormat->Size + 16i64))(pVFormat);
            }
            while ( v21 );
          }
          else
          {
            v18 = 2i64;
            v19 = &fd0;
            do
            {
              v20 = v19[-1].pVFormat;
              v19 = (Scaleform::Render::FillData *)((char *)v19 - 8);
              --v18;
              if ( v20 )
                (*(void (__fastcall **)(const Scaleform::Render::VertexFormat *))(*(_QWORD *)&v20->Size + 16i64))(v20);
            }
            while ( v18 );
          }
        }
        v7 = ++v6;
      }
      while ( v6 < this->FillRecords.Data.Size );
    }
    Scaleform::Render::ComplexMesh::updateFillMatrixCache(this, hal, &this->VertexMatrix);
    return 1;
  }
  return result;
}

void __fastcall Scaleform::Render::Primitive::updateMeshIndicies_Impl(Scaleform::Render::Primitive *this)
{
  unsigned int Size; // edx
  Scaleform::Render::PrimitiveBatch *i; // rax

  Size = this->Meshes.Data.Size;
  if ( this->ModifyIndex < Size )
  {
    for ( i = this->Batches.Root.pPrev; i != (Scaleform::Render::PrimitiveBatch *)&this->Batches; i = i->pPrev )
    {
      Size -= i->MeshCount;
      i->MeshIndex = Size;
      if ( Size < this->ModifyIndex )
        break;
    }
    this->ModifyIndex = this->Meshes.Data.Size;
  }
}

