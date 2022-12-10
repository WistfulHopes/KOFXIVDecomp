#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"

struct Scaleform::Render::ChainOrderRecord
{
	Scaleform::Render::StateType Type; // 0x0
	unsigned long ChangeFlag; // 0x4
	Scaleform::Render::CacheEffect *(*Factory)(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, const Scaleform::Render::State *, Scaleform::Render::CacheEffect *); // 0x8
};
Scaleform::Render::ChainOrderRecord Scaleform::Render::ChainOrderSequence[6]; // 0x1409FA420
enum Scaleform::Render::<unnamed-enum-ChainOrderSequenzeSize>
{
	ChainOrderSequenzeSize = 6,
};
Scaleform::Render::CacheEffectChain::~CacheEffectChain(); // 0x140417030
Scaleform::Render::FilterEffect::~FilterEffect(); // 0x140417060
Scaleform::Render::MaskEffect::~MaskEffect(); // 0x140417150
Scaleform::Render::ProjectionMatrix3DEffect::~ProjectionMatrix3DEffect(); // 0x140417290
bool Scaleform::Render::CacheEffectChain::UpdateEffects(Scaleform::Render::HAL * hal, Scaleform::Render::TreeCacheNode * node, unsigned long changeFlags); // 0x140418000
void Scaleform::Render::CacheEffectChain::updateBundleChain(Scaleform::Render::CacheEffect * effect, Scaleform::Render::BundleEntryRange * chain, Scaleform::Render::BundleEntryRange * maskChain); // 0x1404187A0
Scaleform::Render::MaskEffect::MaskEffect(Scaleform::Render::TreeCacheNode * node, const Scaleform::Render::MaskEffectState mes, const Scaleform::Render::MatrixPoolImpl::HMatrix & areaMatrix, Scaleform::Render::CacheEffect * next); // 0x140416AC0
bool Scaleform::Render::MaskEffect::UpdateMatrix(const Scaleform::Render::MaskEffectState mes, const Scaleform::Render::Matrix2x4<float> & areaMatrix); // 0x140418750
bool Scaleform::Render::MaskEffect::Update(Scaleform::Render::HAL * hal, const Scaleform::Render::State * stateArg); // 0x140417BE0
void Scaleform::Render::MaskEffect::ChainNext(Scaleform::Render::BundleEntryRange * chain, Scaleform::Render::BundleEntryRange * maskChain); // 0x1404176B0
void Scaleform::Render::MaskEffect::GetRange(Scaleform::Render::BundleEntryRange * result); // 0x140417830
Scaleform::Render::CacheEffect * Scaleform::Render::MaskEffect::Create(Scaleform::Render::HAL * hal, Scaleform::Render::TreeCacheNode * node, const Scaleform::Render::State * __formal, Scaleform::Render::CacheEffect * next); // 0x140416030
Scaleform::Render::CacheableTargetEffect::CacheableTargetEffect(const Scaleform::Render::MatrixPoolImpl::HMatrix & m, Scaleform::Render::CacheEffect * next); // 0x140416850
bool Scaleform::Render::CacheableTargetEffect::UpdateMatrix(const Scaleform::Render::Matrix2x4<float> & boundsMatrix, const Scaleform::Render::Matrix2x4<float> & newNodeMatrix, bool forceUncache); // 0x1404181C0
void Scaleform::Render::CacheableTargetEffect::UpdateCxform(const Scaleform::Render::Cxform & cx); // 0x140417FF0
Scaleform::Render::BlendModeEffect::BlendModeEffect(Scaleform::Render::TreeCacheNode * node, const Scaleform::Render::MatrixPoolImpl::HMatrix & m, const Scaleform::Render::BlendState & state, Scaleform::Render::CacheEffect * next); // 0x140416740
bool Scaleform::Render::BlendModeEffect::Update(Scaleform::Render::HAL * hal, const Scaleform::Render::State * stateArg); // 0x1404178A0
void Scaleform::Render::BlendModeEffect::ChainNext(Scaleform::Render::BundleEntryRange * chain, Scaleform::Render::BundleEntryRange * __formal); // 0x1404175B0
void Scaleform::Render::BlendModeEffect::GetRange(Scaleform::Render::BundleEntryRange * result); // 0x1404177D0
Scaleform::Render::CacheEffect * Scaleform::Render::BlendModeEffect::Create(Scaleform::Render::HAL * hal, Scaleform::Render::TreeCacheNode * node, const Scaleform::Render::State * stateArg, Scaleform::Render::CacheEffect * next); // 0x1404161C0
Scaleform::Render::FilterEffect::FilterEffect(Scaleform::Render::HAL * hal, Scaleform::Render::TreeCacheNode * node, const Scaleform::Render::MatrixPoolImpl::HMatrix & m, const Scaleform::Render::FilterState & state, Scaleform::Render::CacheEffect * next); // 0x140416920
bool Scaleform::Render::FilterEffect::Update(Scaleform::Render::HAL * hal, const Scaleform::Render::State * stateArg); // 0x140417A40
void Scaleform::Render::FilterEffect::ChainNext(Scaleform::Render::BundleEntryRange * chain, Scaleform::Render::BundleEntryRange * __formal); // 0x140417600
void Scaleform::Render::FilterEffect::GetRange(Scaleform::Render::BundleEntryRange * result); // 0x1404177F0
Scaleform::Render::CacheEffect * Scaleform::Render::FilterEffect::Create(Scaleform::Render::HAL * hal, Scaleform::Render::TreeCacheNode * node, const Scaleform::Render::State * stateArg, Scaleform::Render::CacheEffect * next); // 0x140416400
void Scaleform::Render::FilterEffect::updateGradientImages(Scaleform::Render::HAL * hal, const Scaleform::Render::FilterState & state); // 0x1404187F0
bool Scaleform::Render::FilterEffect::canCacheAcrossTransform(bool deltaTrans, bool deltaRot, bool deltaScale); // 0x140418790
Scaleform::Render::ViewMatrix3DEffect::ViewMatrix3DEffect(Scaleform::Render::TreeCacheNode * node, const Scaleform::Render::ViewMatrix3DState & state, Scaleform::Render::CacheEffect * next); // 0x140416E60
Scaleform::Render::BlendModeEffect::~BlendModeEffect(); // 0x140416F40
bool Scaleform::Render::ViewMatrix3DEffect::Update(Scaleform::Render::HAL * hal, const Scaleform::Render::State * stateArg); // 0x140417F20
void Scaleform::Render::ProjectionMatrix3DEffect::ChainNext(Scaleform::Render::BundleEntryRange * chain, Scaleform::Render::BundleEntryRange * __formal); // 0x140417780
void Scaleform::Render::ProjectionMatrix3DEffect::GetRange(Scaleform::Render::BundleEntryRange * result); // 0x140417870
Scaleform::Render::CacheEffect * Scaleform::Render::ViewMatrix3DEffect::Create(Scaleform::Render::HAL * hal, Scaleform::Render::TreeCacheNode * node, const Scaleform::Render::State * stateArg, Scaleform::Render::CacheEffect * next); // 0x1404165F0
Scaleform::Render::ProjectionMatrix3DEffect::ProjectionMatrix3DEffect(Scaleform::Render::TreeCacheNode * node, const Scaleform::Render::ProjectionMatrix3DState & state, Scaleform::Render::CacheEffect * next); // 0x140416C40
bool Scaleform::Render::ProjectionMatrix3DEffect::Update(Scaleform::Render::HAL * hal, const Scaleform::Render::State * stateArg); // 0x140417D80
Scaleform::Render::CacheEffect * Scaleform::Render::ProjectionMatrix3DEffect::Create(Scaleform::Render::HAL * hal, Scaleform::Render::TreeCacheNode * node, const Scaleform::Render::State * stateArg, Scaleform::Render::CacheEffect * next); // 0x140416660
Scaleform::Render::UserDataEffect::UserDataEffect(Scaleform::Render::TreeCacheNode * node, const Scaleform::Render::UserDataState & state, Scaleform::Render::CacheEffect * next); // 0x140416D20
bool Scaleform::Render::UserDataEffect::Update(Scaleform::Render::HAL * hal, const Scaleform::Render::State * stateArg); // 0x140417E50
Scaleform::Render::CacheEffect * Scaleform::Render::UserDataEffect::Create(Scaleform::Render::HAL * hal, Scaleform::Render::TreeCacheNode * node, const Scaleform::Render::State * stateArg, Scaleform::Render::CacheEffect * next); // 0x1404166D0//decompilation failure at 1409FA420!
void __fastcall Scaleform::Render::BlendModeEffect::BlendModeEffect(
        Scaleform::Render::BlendModeEffect *this,
        Scaleform::Render::TreeCacheNode *node,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *m,
        const Scaleform::Render::BlendState *state,
        Scaleform::Render::CacheEffect *next)
{
  Scaleform::Render::SortKey *v8; // rax
  Scaleform::Render::SortKeyInterface *pImpl; // rcx
  Scaleform::Render::SortKeyInterface *v10; // rcx
  void *Data; // rdx
  bool IsTargetAllocationNeededForBlendMode; // al
  Scaleform::Render::SortKey *v13; // rax
  Scaleform::Render::SortKeyInterface *v14; // rcx
  Scaleform::Render::SortKeyInterface *v15; // rcx
  void *v16; // rdx
  Scaleform::Render::SortKey v17; // [rsp+20h] [rbp-18h] BYREF

  Scaleform::Render::CacheableTargetEffect::CacheableTargetEffect(this, m, next);
  this->__vftable = (Scaleform::Render::BlendModeEffect_vtbl *)&Scaleform::Render::BlendModeEffect::`vftable';
  Scaleform::Render::SortKey::SortKey(&v17, SortKey_BlendModeStart, (Scaleform::Render::BlendMode)state->pData);
  this->StartEntry.pNextPattern = 0i64;
  this->StartEntry.pChain = 0i64;
  *(_DWORD *)&this->StartEntry.ChainHeight = 0;
  pImpl = v8->pImpl;
  this->StartEntry.Key = *v8;
  ((void (__fastcall *)(Scaleform::Render::SortKeyInterface *))pImpl->AddRef)(pImpl);
  v10 = v17.pImpl;
  Data = v17.Data;
  this->StartEntry.pBundle.pObject = 0i64;
  this->StartEntry.pSourceNode = node;
  this->StartEntry.Removed = 0;
  v10->Release(v10, Data);
  IsTargetAllocationNeededForBlendMode = Scaleform::Render::BlendState::IsTargetAllocationNeededForBlendMode((Scaleform::Render::BlendMode)state->pData);
  Scaleform::Render::SortKey::SortKey(
    &v17,
    SortKey_BlendModeEnd,
    (Scaleform::Render::BlendMode)(IsTargetAllocationNeededForBlendMode + 20));
  this->EndEntry.pNextPattern = 0i64;
  this->EndEntry.pChain = 0i64;
  *(_DWORD *)&this->EndEntry.ChainHeight = 0;
  v14 = v13->pImpl;
  this->EndEntry.Key = *v13;
  ((void (__fastcall *)(Scaleform::Render::SortKeyInterface *))v14->AddRef)(v14);
  v15 = v17.pImpl;
  v16 = v17.Data;
  this->EndEntry.pBundle.pObject = 0i64;
  this->EndEntry.pSourceNode = node;
  this->EndEntry.Removed = 0;
  v15->Release(v15, v16);
}

void __fastcall Scaleform::Render::CacheableTargetEffect::CacheableTargetEffect(
        Scaleform::Render::CacheableTargetEffect *this,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *m,
        Scaleform::Render::CacheEffect *next)
{
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rax
  Scaleform::Render::Matrix2x4<float> ma; // [rsp+20h] [rbp-38h] BYREF

  this->pNext = next;
  this->__vftable = (Scaleform::Render::CacheableTargetEffect_vtbl *)&Scaleform::Render::CacheableTargetEffect::`vftable';
  this->Length = 0;
  pHandle = m->pHandle;
  this->BoundsMatrix = (Scaleform::Render::MatrixPoolImpl::HMatrix)m->pHandle;
  if ( pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    ++pHandle->pHeader->RefCount;
  memset(&ma, 0, sizeof(ma));
  Scaleform::Render::MatrixPoolImpl::HMatrix::SetTextureMatrix(&this->BoundsMatrix, &ma, 1u);
  Scaleform::Render::MatrixPoolImpl::HMatrix::SetUserData(
    &this->BoundsMatrix,
    &m->pHandle->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[m->pHandle->pHeader->Format & 0xF].Offsets[4]
                       + 1],
    0x20ui64);
}

void __fastcall Scaleform::Render::FilterEffect::FilterEffect(
        Scaleform::Render::FilterEffect *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TreeCacheNode *node,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *m,
        const Scaleform::Render::FilterState *state,
        Scaleform::Render::CacheEffect *next)
{
  const Scaleform::Render::FilterSet *Log; // rax
  Scaleform::Render::SortKey *v11; // rax
  Scaleform::Render::SortKeyInterface *pImpl; // rcx
  Scaleform::Render::SortKeyInterface *v13; // rcx
  void *Data; // rdx
  Scaleform::Render::SortKey *v15; // rax
  Scaleform::Render::SortKeyInterface *v16; // rcx
  Scaleform::Render::SortKeyInterface *v17; // rcx
  void *v18; // rdx
  Scaleform::Render::SortKey v19; // [rsp+20h] [rbp-68h] BYREF
  Scaleform::Render::Matrix2x4<float> ma; // [rsp+30h] [rbp-58h] BYREF

  Scaleform::Render::CacheableTargetEffect::CacheableTargetEffect(this, m, next);
  this->Contributing = 1;
  this->__vftable = (Scaleform::Render::FilterEffect_vtbl *)&Scaleform::Render::FilterEffect::`vftable';
  Log = (const Scaleform::Render::FilterSet *)Scaleform::GFx::Stream::GetLog((AgDisplay *)state);
  Scaleform::Render::SortKey::SortKey(&v19, SortKey_FilterStart, Log);
  this->StartEntry.pNextPattern = 0i64;
  this->StartEntry.pChain = 0i64;
  *(_DWORD *)&this->StartEntry.ChainHeight = 0;
  pImpl = v11->pImpl;
  this->StartEntry.Key = *v11;
  ((void (__fastcall *)(Scaleform::Render::SortKeyInterface *))pImpl->AddRef)(pImpl);
  v13 = v19.pImpl;
  Data = v19.Data;
  this->StartEntry.pBundle.pObject = 0i64;
  this->StartEntry.pSourceNode = node;
  this->StartEntry.Removed = 0;
  v13->Release(v13, Data);
  Scaleform::Render::SortKey::SortKey(&v19, SortKey_FilterEnd, 0i64);
  this->EndEntry.pNextPattern = 0i64;
  this->EndEntry.pChain = 0i64;
  *(_DWORD *)&this->EndEntry.ChainHeight = 0;
  v16 = v15->pImpl;
  this->EndEntry.Key = *v15;
  ((void (__fastcall *)(Scaleform::Render::SortKeyInterface *))v16->AddRef)(v16);
  v17 = v19.pImpl;
  v18 = v19.Data;
  this->EndEntry.pBundle.pObject = 0i64;
  this->EndEntry.pSourceNode = node;
  this->EndEntry.Removed = 0;
  v17->Release(v17, v18);
  memset(&ma, 0, sizeof(ma));
  Scaleform::Render::MatrixPoolImpl::HMatrix::SetTextureMatrix(&this->BoundsMatrix, &ma, 1u);
  Scaleform::Render::MatrixPoolImpl::HMatrix::SetUserData(
    &this->BoundsMatrix,
    &m->pHandle->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[m->pHandle->pHeader->Format & 0xF].Offsets[4]
                       + 1],
    0x20ui64);
  Scaleform::Render::FilterEffect::updateGradientImages(this, hal, state);
}

void __fastcall Scaleform::Render::MaskEffect::MaskEffect(
        Scaleform::Render::MaskEffect *this,
        Scaleform::Render::TreeCacheNode *node,
        const Scaleform::Render::MaskEffectState mes,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *areaMatrix,
        Scaleform::Render::CacheEffect *next)
{
  Scaleform::Render::SortKey *v9; // rax
  Scaleform::Render::SortKeyInterface *pImpl; // rcx
  Scaleform::Render::SortKeyInterface *v11; // rcx
  void *Data; // rdx
  Scaleform::Render::SortKey *v13; // rax
  Scaleform::Render::SortKeyInterface *v14; // rcx
  Scaleform::Render::SortKeyInterface *v15; // rcx
  void *v16; // rdx
  Scaleform::Render::SortKey *v17; // rax
  Scaleform::Render::SortKeyInterface *v18; // rcx
  Scaleform::Render::SortKeyInterface *v19; // rcx
  void *v20; // rdx
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rax
  Scaleform::Render::SortKey v22; // [rsp+20h] [rbp-18h] BYREF

  this->pNext = next;
  this->__vftable = (Scaleform::Render::MaskEffect_vtbl *)&Scaleform::Render::MaskEffect::`vftable';
  this->Length = 0;
  Scaleform::Render::SortKey::SortKey(&v22, SortKeyMask_Push);
  this->StartEntry.pNextPattern = 0i64;
  this->StartEntry.pChain = 0i64;
  *(_DWORD *)&this->StartEntry.ChainHeight = 0;
  pImpl = v9->pImpl;
  this->StartEntry.Key = *v9;
  ((void (__fastcall *)(Scaleform::Render::SortKeyInterface *))pImpl->AddRef)(pImpl);
  v11 = v22.pImpl;
  Data = v22.Data;
  this->StartEntry.pBundle.pObject = 0i64;
  this->StartEntry.pSourceNode = node;
  this->StartEntry.Removed = 0;
  v11->Release(v11, Data);
  Scaleform::Render::SortKey::SortKey(&v22, SortKeyMask_End);
  this->EndEntry.pNextPattern = 0i64;
  this->EndEntry.pChain = 0i64;
  *(_DWORD *)&this->EndEntry.ChainHeight = 0;
  v14 = v13->pImpl;
  this->EndEntry.Key = *v13;
  ((void (__fastcall *)(Scaleform::Render::SortKeyInterface *))v14->AddRef)(v14);
  v15 = v22.pImpl;
  v16 = v22.Data;
  this->EndEntry.pBundle.pObject = 0i64;
  this->EndEntry.pSourceNode = node;
  this->EndEntry.Removed = 0;
  v15->Release(v15, v16);
  Scaleform::Render::SortKey::SortKey(&v22, SortKeyMask_Pop);
  this->PopEntry.pNextPattern = 0i64;
  this->PopEntry.pChain = 0i64;
  *(_DWORD *)&this->PopEntry.ChainHeight = 0;
  v18 = v17->pImpl;
  this->PopEntry.Key = *v17;
  ((void (__fastcall *)(Scaleform::Render::SortKeyInterface *))v18->AddRef)(v18);
  v19 = v22.pImpl;
  v20 = v22.Data;
  this->PopEntry.pBundle.pObject = 0i64;
  this->PopEntry.pSourceNode = node;
  this->PopEntry.Removed = 0;
  v19->Release(v19, v20);
  this->MES = mes;
  pHandle = areaMatrix->pHandle;
  this->BoundsMatrix = (Scaleform::Render::MatrixPoolImpl::HMatrix)areaMatrix->pHandle;
  if ( pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    ++pHandle->pHeader->RefCount;
}

void __fastcall Scaleform::Render::ProjectionMatrix3DEffect::ProjectionMatrix3DEffect(
        Scaleform::Render::ProjectionMatrix3DEffect *this,
        Scaleform::Render::TreeCacheNode *node,
        const Scaleform::Render::ProjectionMatrix3DState *state,
        Scaleform::Render::CacheEffect *next)
{
  Scaleform::Render::SortKey *v6; // rax
  Scaleform::Render::SortKeyInterface *pImpl; // rcx
  Scaleform::Render::SortKeyInterface *v8; // rcx
  void *Data; // rdx
  Scaleform::Render::SortKey *v10; // rax
  Scaleform::Render::SortKeyInterface *v11; // rcx
  Scaleform::Render::SortKeyInterface *v12; // rcx
  void *v13; // rdx
  Scaleform::Render::SortKey v14; // [rsp+20h] [rbp-18h] BYREF

  this->pNext = next;
  this->__vftable = (Scaleform::Render::ProjectionMatrix3DEffect_vtbl *)&Scaleform::Render::ProjectionMatrix3DEffect::`vftable';
  this->Length = 0;
  Scaleform::Render::SortKey::SortKey(
    &v14,
    SortKey_ProjectionMatrix3DStart,
    (const Scaleform::Render::Matrix4x4Ref<float> *)state->pData);
  this->StartEntry.pNextPattern = 0i64;
  this->StartEntry.pChain = 0i64;
  *(_DWORD *)&this->StartEntry.ChainHeight = 0;
  pImpl = v6->pImpl;
  this->StartEntry.Key = *v6;
  ((void (__fastcall *)(Scaleform::Render::SortKeyInterface *))pImpl->AddRef)(pImpl);
  v8 = v14.pImpl;
  Data = v14.Data;
  this->StartEntry.pBundle.pObject = 0i64;
  this->StartEntry.pSourceNode = node;
  this->StartEntry.Removed = 0;
  v8->Release(v8, Data);
  Scaleform::Render::SortKey::SortKey(&v14, SortKey_ProjectionMatrix3DEnd, 0i64);
  this->EndEntry.pNextPattern = 0i64;
  this->EndEntry.pChain = 0i64;
  *(_DWORD *)&this->EndEntry.ChainHeight = 0;
  v11 = v10->pImpl;
  this->EndEntry.Key = *v10;
  ((void (__fastcall *)(Scaleform::Render::SortKeyInterface *))v11->AddRef)(v11);
  v12 = v14.pImpl;
  v13 = v14.Data;
  this->EndEntry.pBundle.pObject = 0i64;
  this->EndEntry.pSourceNode = node;
  this->EndEntry.Removed = 0;
  v12->Release(v12, v13);
}

void __fastcall Scaleform::Render::UserDataEffect::UserDataEffect(
        Scaleform::Render::UserDataEffect *this,
        Scaleform::Render::TreeCacheNode *node,
        const Scaleform::Render::UserDataState *state,
        Scaleform::Render::CacheEffect *next)
{
  Scaleform::Render::SortKey *v7; // rax
  Scaleform::Render::SortKeyInterface *pImpl; // rcx
  Scaleform::Render::SortKeyInterface *v9; // rcx
  void *Data; // rdx
  Scaleform::Render::SortKey *v11; // rax
  Scaleform::Render::SortKeyInterface *v12; // rcx
  Scaleform::Render::SortKeyInterface *v13; // rcx
  void *v14; // rdx
  Scaleform::Render::SortKeyInterface **v15; // rax
  Scaleform::Render::SortKeyInterface **v16; // rbx
  void *v17; // rdx
  Scaleform::Render::SortKeyInterface *v18; // rcx
  Scaleform::Render::SortKey v19; // [rsp+20h] [rbp-18h] BYREF

  this->pNext = next;
  this->Length = 0;
  this->__vftable = (Scaleform::Render::UserDataEffect_vtbl *)&Scaleform::Render::UserDataEffect::`vftable';
  Scaleform::Render::SortKey::SortKey(&v19, SortKey_UserDataStart, 0i64);
  this->StartEntry.pNextPattern = 0i64;
  this->StartEntry.pChain = 0i64;
  *(_DWORD *)&this->StartEntry.ChainHeight = 0;
  pImpl = v7->pImpl;
  this->StartEntry.Key = *v7;
  ((void (__fastcall *)(Scaleform::Render::SortKeyInterface *))pImpl->AddRef)(pImpl);
  v9 = v19.pImpl;
  Data = v19.Data;
  this->StartEntry.pBundle.pObject = 0i64;
  this->StartEntry.pSourceNode = node;
  this->StartEntry.Removed = 0;
  v9->Release(v9, Data);
  Scaleform::Render::SortKey::SortKey(&v19, SortKey_UserDataEnd, 0i64);
  this->EndEntry.pNextPattern = 0i64;
  this->EndEntry.pChain = 0i64;
  *(_DWORD *)&this->EndEntry.ChainHeight = 0;
  v12 = v11->pImpl;
  this->EndEntry.Key = *v11;
  ((void (__fastcall *)(Scaleform::Render::SortKeyInterface *))v12->AddRef)(v12);
  v13 = v19.pImpl;
  v14 = v19.Data;
  this->EndEntry.pBundle.pObject = 0i64;
  this->EndEntry.pSourceNode = node;
  this->EndEntry.Removed = 0;
  v13->Release(v13, v14);
  Scaleform::Render::SortKey::SortKey(
    &v19,
    SortKey_UserDataStart,
    (Scaleform::Render::UserDataState::Data *)state->pData);
  v16 = v15;
  (*v15)->AddRef(*v15, v15[1]);
  this->StartEntry.Key.pImpl->Release(this->StartEntry.Key.pImpl, this->StartEntry.Key.Data);
  v17 = v19.Data;
  this->StartEntry.Key.pImpl = *v16;
  v18 = v19.pImpl;
  this->StartEntry.Key.Data = v16[1];
  v18->Release(v18, v17);
}

void __fastcall Scaleform::Render::ViewMatrix3DEffect::ViewMatrix3DEffect(
        Scaleform::Render::ViewMatrix3DEffect *this,
        Scaleform::Render::TreeCacheNode *node,
        const Scaleform::Render::ViewMatrix3DState *state,
        Scaleform::Render::CacheEffect *next)
{
  Scaleform::Render::SortKey *v6; // rax
  Scaleform::Render::SortKeyInterface *pImpl; // rcx
  Scaleform::Render::SortKeyInterface *v8; // rcx
  void *Data; // rdx
  Scaleform::Render::SortKey *v10; // rax
  Scaleform::Render::SortKeyInterface *v11; // rcx
  Scaleform::Render::SortKeyInterface *v12; // rcx
  void *v13; // rdx
  Scaleform::Render::SortKey v14; // [rsp+20h] [rbp-18h] BYREF

  this->pNext = next;
  this->__vftable = (Scaleform::Render::ViewMatrix3DEffect_vtbl *)&Scaleform::Render::ViewMatrix3DEffect::`vftable';
  this->Length = 0;
  Scaleform::Render::SortKey::SortKey(
    &v14,
    SortKey_ViewMatrix3DStart,
    (const Scaleform::Render::Matrix3x4Ref<float> *)state->pData);
  this->StartEntry.pNextPattern = 0i64;
  this->StartEntry.pChain = 0i64;
  *(_DWORD *)&this->StartEntry.ChainHeight = 0;
  pImpl = v6->pImpl;
  this->StartEntry.Key = *v6;
  ((void (__fastcall *)(Scaleform::Render::SortKeyInterface *))pImpl->AddRef)(pImpl);
  v8 = v14.pImpl;
  Data = v14.Data;
  this->StartEntry.pBundle.pObject = 0i64;
  this->StartEntry.pSourceNode = node;
  this->StartEntry.Removed = 0;
  v8->Release(v8, Data);
  Scaleform::Render::SortKey::SortKey(&v14, SortKey_ViewMatrix3DEnd, 0i64);
  this->EndEntry.pNextPattern = 0i64;
  this->EndEntry.pChain = 0i64;
  *(_DWORD *)&this->EndEntry.ChainHeight = 0;
  v11 = v10->pImpl;
  this->EndEntry.Key = *v10;
  ((void (__fastcall *)(Scaleform::Render::SortKeyInterface *))v11->AddRef)(v11);
  v12 = v14.pImpl;
  v13 = v14.Data;
  this->EndEntry.pBundle.pObject = 0i64;
  this->EndEntry.pSourceNode = node;
  this->EndEntry.Removed = 0;
  v12->Release(v12, v13);
}

void __fastcall Scaleform::Render::BlendModeEffect::~BlendModeEffect(Scaleform::Render::BlendModeEffect *this)
{
  Scaleform::Render::Bundle *pObject; // rax
  Scaleform::Render::Bundle *v3; // rbx
  Scaleform::Render::Bundle *v4; // rcx
  Scaleform::Render::Bundle *v5; // rax
  Scaleform::Render::Bundle *v6; // rbx
  Scaleform::Render::Bundle *v7; // rcx
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rcx

  if ( this->EndEntry.pBundle.pObject )
  {
    pObject = this->EndEntry.pBundle.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v3 = this->EndEntry.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v3, &this->EndEntry);
    if ( v3 )
      Scaleform::RefCountNTSImpl::Release(v3);
  }
  v4 = this->EndEntry.pBundle.pObject;
  if ( v4 )
    Scaleform::RefCountNTSImpl::Release(v4);
  this->EndEntry.Key.pImpl->Release(this->EndEntry.Key.pImpl, this->EndEntry.Key.Data);
  if ( this->StartEntry.pBundle.pObject )
  {
    v5 = this->StartEntry.pBundle.pObject;
    if ( v5 )
      ++v5->RefCount;
    v6 = this->StartEntry.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v6, &this->StartEntry);
    if ( v6 )
      Scaleform::RefCountNTSImpl::Release(v6);
  }
  v7 = this->StartEntry.pBundle.pObject;
  if ( v7 )
    Scaleform::RefCountNTSImpl::Release(v7);
  this->StartEntry.Key.pImpl->Release(this->StartEntry.Key.pImpl, this->StartEntry.Key.Data);
  pHandle = this->BoundsMatrix.pHandle;
  if ( pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release(pHandle->pHeader);
  this->__vftable = (Scaleform::Render::BlendModeEffect_vtbl *)&Scaleform::Render::CacheEffect::`vftable';
}

void __fastcall Scaleform::Render::CacheEffectChain::~CacheEffectChain(Scaleform::Render::CacheEffectChain *this)
{
  Scaleform::Render::CacheEffect *pEffect; // rbx
  Scaleform::Render::CacheEffect *v2; // rcx

  pEffect = this->pEffect;
  while ( pEffect )
  {
    v2 = pEffect;
    pEffect = pEffect->pNext;
    ((void (__fastcall *)(Scaleform::Render::CacheEffect *, __int64))v2->~CacheEffect)(v2, 1i64);
  }
}

void __fastcall Scaleform::Render::FilterEffect::~FilterEffect(Scaleform::Render::FilterEffect *this)
{
  Scaleform::Render::Bundle *pObject; // rax
  Scaleform::Render::Bundle *v3; // rbx
  Scaleform::Render::Bundle *v4; // rcx
  Scaleform::Render::Bundle *v5; // rax
  Scaleform::Render::Bundle *v6; // rbx
  Scaleform::Render::Bundle *v7; // rcx
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rcx

  if ( this->EndEntry.pBundle.pObject )
  {
    pObject = this->EndEntry.pBundle.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v3 = this->EndEntry.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v3, &this->EndEntry);
    if ( v3 )
      Scaleform::RefCountNTSImpl::Release(v3);
  }
  v4 = this->EndEntry.pBundle.pObject;
  if ( v4 )
    Scaleform::RefCountNTSImpl::Release(v4);
  this->EndEntry.Key.pImpl->Release(this->EndEntry.Key.pImpl, this->EndEntry.Key.Data);
  if ( this->StartEntry.pBundle.pObject )
  {
    v5 = this->StartEntry.pBundle.pObject;
    if ( v5 )
      ++v5->RefCount;
    v6 = this->StartEntry.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v6, &this->StartEntry);
    if ( v6 )
      Scaleform::RefCountNTSImpl::Release(v6);
  }
  v7 = this->StartEntry.pBundle.pObject;
  if ( v7 )
    Scaleform::RefCountNTSImpl::Release(v7);
  this->StartEntry.Key.pImpl->Release(this->StartEntry.Key.pImpl, this->StartEntry.Key.Data);
  pHandle = this->BoundsMatrix.pHandle;
  if ( pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release(pHandle->pHeader);
  this->__vftable = (Scaleform::Render::FilterEffect_vtbl *)&Scaleform::Render::CacheEffect::`vftable';
}

void __fastcall Scaleform::Render::MaskEffect::~MaskEffect(Scaleform::Render::MaskEffect *this)
{
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rcx
  Scaleform::Render::Bundle *pObject; // rax
  Scaleform::Render::Bundle *v4; // rbx
  Scaleform::Render::Bundle *v5; // rcx
  Scaleform::Render::Bundle *v6; // rax
  Scaleform::Render::Bundle *v7; // rbx
  Scaleform::Render::Bundle *v8; // rcx
  Scaleform::Render::Bundle *v9; // rax
  Scaleform::Render::Bundle *v10; // rbx
  Scaleform::Render::Bundle *v11; // rcx

  pHandle = this->BoundsMatrix.pHandle;
  if ( pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release(pHandle->pHeader);
  if ( this->PopEntry.pBundle.pObject )
  {
    pObject = this->PopEntry.pBundle.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v4 = this->PopEntry.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v4, &this->PopEntry);
    if ( v4 )
      Scaleform::RefCountNTSImpl::Release(v4);
  }
  v5 = this->PopEntry.pBundle.pObject;
  if ( v5 )
    Scaleform::RefCountNTSImpl::Release(v5);
  this->PopEntry.Key.pImpl->Release(this->PopEntry.Key.pImpl, this->PopEntry.Key.Data);
  if ( this->EndEntry.pBundle.pObject )
  {
    v6 = this->EndEntry.pBundle.pObject;
    if ( v6 )
      ++v6->RefCount;
    v7 = this->EndEntry.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v7, &this->EndEntry);
    if ( v7 )
      Scaleform::RefCountNTSImpl::Release(v7);
  }
  v8 = this->EndEntry.pBundle.pObject;
  if ( v8 )
    Scaleform::RefCountNTSImpl::Release(v8);
  this->EndEntry.Key.pImpl->Release(this->EndEntry.Key.pImpl, this->EndEntry.Key.Data);
  if ( this->StartEntry.pBundle.pObject )
  {
    v9 = this->StartEntry.pBundle.pObject;
    if ( v9 )
      ++v9->RefCount;
    v10 = this->StartEntry.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v10, &this->StartEntry);
    if ( v10 )
      Scaleform::RefCountNTSImpl::Release(v10);
  }
  v11 = this->StartEntry.pBundle.pObject;
  if ( v11 )
    Scaleform::RefCountNTSImpl::Release(v11);
  this->StartEntry.Key.pImpl->Release(this->StartEntry.Key.pImpl, this->StartEntry.Key.Data);
  this->__vftable = (Scaleform::Render::MaskEffect_vtbl *)&Scaleform::Render::CacheEffect::`vftable';
}

void __fastcall Scaleform::Render::UserDataEffect::~UserDataEffect(Scaleform::Render::ViewMatrix3DEffect *this)
{
  Scaleform::Render::Bundle *pObject; // rax
  Scaleform::Render::Bundle *v3; // rbx
  Scaleform::Render::Bundle *v4; // rcx
  Scaleform::Render::Bundle *v5; // rax
  Scaleform::Render::Bundle *v6; // rbx
  Scaleform::Render::Bundle *v7; // rcx

  if ( this->EndEntry.pBundle.pObject )
  {
    pObject = this->EndEntry.pBundle.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v3 = this->EndEntry.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v3, &this->EndEntry);
    if ( v3 )
      Scaleform::RefCountNTSImpl::Release(v3);
  }
  v4 = this->EndEntry.pBundle.pObject;
  if ( v4 )
    Scaleform::RefCountNTSImpl::Release(v4);
  this->EndEntry.Key.pImpl->Release(this->EndEntry.Key.pImpl, this->EndEntry.Key.Data);
  if ( this->StartEntry.pBundle.pObject )
  {
    v5 = this->StartEntry.pBundle.pObject;
    if ( v5 )
      ++v5->RefCount;
    v6 = this->StartEntry.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v6, &this->StartEntry);
    if ( v6 )
      Scaleform::RefCountNTSImpl::Release(v6);
  }
  v7 = this->StartEntry.pBundle.pObject;
  if ( v7 )
    Scaleform::RefCountNTSImpl::Release(v7);
  this->StartEntry.Key.pImpl->Release(this->StartEntry.Key.pImpl, this->StartEntry.Key.Data);
  this->__vftable = (Scaleform::Render::ViewMatrix3DEffect_vtbl *)&Scaleform::Render::CacheEffect::`vftable';
}

void __fastcall Scaleform::Render::BlendModeEffect::ChainNext(
        Scaleform::Render::BlendModeEffect *this,
        Scaleform::Render::BundleEntryRange *chain,
        Scaleform::Render::BundleEntryRange *__formal)
{
  unsigned int v3; // eax

  this->StartEntry.pNextPattern = chain->pFirst;
  this->StartEntry.pChain = 0i64;
  this->StartEntry.ChainHeight = 0;
  chain->pLast->pNextPattern = &this->EndEntry;
  this->EndEntry.pChain = 0i64;
  this->EndEntry.ChainHeight = 0;
  v3 = (chain->Length & 0x7FFFFFFF) + 2;
  this->Length = v3;
  chain->pFirst = &this->StartEntry;
  chain->pLast = &this->EndEntry;
  chain->Length = v3;
}

void __fastcall Scaleform::Render::FilterEffect::ChainNext(
        Scaleform::Render::FilterEffect *this,
        Scaleform::Render::BundleEntryRange *chain,
        Scaleform::Render::BundleEntryRange *__formal)
{
  Scaleform::Render::FilterSet *Data; // rcx
  bool v6; // zf
  bool v7; // al
  unsigned int v8; // eax

  Data = (Scaleform::Render::FilterSet *)this->StartEntry.Key.Data;
  if ( !Data || (v6 = !Scaleform::Render::FilterSet::IsContributing(Data), v7 = 1, v6) )
    v7 = 0;
  this->Contributing = v7;
  this->StartEntry.pNextPattern = chain->pFirst;
  if ( v7 )
  {
    this->StartEntry.pChain = 0i64;
    this->StartEntry.ChainHeight = 0;
    chain->pLast->pNextPattern = &this->EndEntry;
    this->EndEntry.pChain = 0i64;
    this->EndEntry.ChainHeight = 0;
    v8 = (chain->Length & 0x7FFFFFFF) + 2;
    this->Length = v8;
    chain->pFirst = &this->StartEntry;
    chain->pLast = &this->EndEntry;
    chain->Length = v8;
  }
  else
  {
    this->EndEntry.pNextPattern = chain->pLast;
    this->Length = chain->Length & 0x7FFFFFFF;
  }
}

void __fastcall Scaleform::Render::MaskEffect::ChainNext(
        Scaleform::Render::MaskEffect *this,
        Scaleform::Render::BundleEntryRange *chain,
        Scaleform::Render::BundleEntryRange *maskChain)
{
  Scaleform::Render::BundleEntry *p_StartEntry; // r9
  Scaleform::Render::BundleEntry *p_EndEntry; // rcx
  Scaleform::Render::BundleEntry *pFirst; // rax
  unsigned int v8; // edx

  if ( this->MES && maskChain && (maskChain->Length & 0x7FFFFFFF) != 0 )
  {
    p_StartEntry = &this->StartEntry;
    this->StartEntry.pNextPattern = maskChain->pFirst;
    this->StartEntry.pChain = 0i64;
    this->StartEntry.ChainHeight = 0;
    p_EndEntry = &this->EndEntry;
    maskChain->pLast->pNextPattern = p_EndEntry;
    pFirst = chain->pFirst;
    this->EndEntry.pChain = 0i64;
    this->EndEntry.ChainHeight = 0;
    p_EndEntry->pNextPattern = pFirst;
    chain->pLast->pNextPattern = &this->PopEntry;
    this->PopEntry.pChain = 0i64;
    this->PopEntry.ChainHeight = 0;
    v8 = (chain->Length & 0x7FFFFFFF) + (maskChain->Length & 0x7FFFFFFF) + 3;
    this->Length = v8;
    chain->pFirst = p_StartEntry;
    chain->pLast = &this->PopEntry;
    chain->Length = v8;
  }
  else
  {
    this->StartEntry.pNextPattern = 0i64;
    this->EndEntry.pNextPattern = chain->pFirst;
    this->PopEntry.pNextPattern = chain->pLast;
    this->Length = chain->Length & 0x7FFFFFFF;
  }
}

void __fastcall Scaleform::Render::UserDataEffect::ChainNext(
        Scaleform::Render::ViewMatrix3DEffect *this,
        Scaleform::Render::BundleEntryRange *chain,
        Scaleform::Render::BundleEntryRange *__formal)
{
  unsigned int v3; // eax

  this->StartEntry.pNextPattern = chain->pFirst;
  this->StartEntry.pChain = 0i64;
  this->StartEntry.ChainHeight = 0;
  chain->pLast->pNextPattern = &this->EndEntry;
  this->EndEntry.pChain = 0i64;
  this->EndEntry.ChainHeight = 0;
  v3 = (chain->Length & 0x7FFFFFFF) + 2;
  this->Length = v3;
  chain->pFirst = &this->StartEntry;
  chain->pLast = &this->EndEntry;
  chain->Length = v3;
}

Scaleform::Render::CacheEffect *__fastcall Scaleform::Render::BlendModeEffect::Create(
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TreeCacheNode *node,
        const Scaleform::Render::State *stateArg,
        Scaleform::Render::CacheEffect *next)
{
  Scaleform::Render::TreeNode *pNode; // rcx
  __int64 v9; // rbx
  Scaleform::Render::MatrixPoolImpl::MatrixPool *v10; // rax
  Scaleform::Render::BlendModeEffect *v11; // rax
  __int64 v12; // rax
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  Scaleform::Render::MatrixPoolImpl::HMatrix result; // [rsp+38h] [rbp-C8h] BYREF
  Scaleform::Render::Matrix3x4<float> pviewMatrix; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::Render::Matrix4x4<float> pviewProj; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::Render::Rect<float> returnBounds; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::Render::Matrix2x4<float> areaMatrix; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::Render::Cxform dest; // [rsp+E0h] [rbp-20h] BYREF

  pNode = node->pNode;
  *(_OWORD *)&pviewMatrix.M[1][0] = 0x3F80000000000000ui64;
  *(_OWORD *)&pviewProj.M[1][0] = 0x3F80000000000000ui64;
  *(_QWORD *)&pviewProj.M[3][2] = 0x3F80000000000000i64;
  *(_QWORD *)&pviewMatrix.M[2][0] = 0i64;
  *(_QWORD *)&pviewProj.M[2][0] = 0i64;
  *(_QWORD *)&pviewProj.M[3][0] = 0i64;
  *(_OWORD *)&areaMatrix.M[0][0] = _xmm;
  *(_OWORD *)&areaMatrix.M[1][0] = _xmm;
  returnBounds = 0i64;
  *(_OWORD *)&pviewMatrix.M[0][0] = 0x3F800000ui64;
  *(_QWORD *)&pviewMatrix.M[2][2] = 1065353216i64;
  *(_OWORD *)&pviewProj.M[0][0] = 0x3F800000ui64;
  *(_QWORD *)&pviewProj.M[2][2] = 1065353216i64;
  dest = *(Scaleform::Render::Cxform *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64)
                                                               + 0x28)
                                                   + 8i64
                                                   * (unsigned int)((int)((_DWORD)pNode
                                                                        - ((unsigned int)pNode & 0xFFFFF000)
                                                                        - 56)
                                                                  / 56)
                                                   + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                      + 80);
  Scaleform::Render::TreeCacheNode::CalcViewMatrix(node, &pviewMatrix, &pviewProj);
  v9 = 0i64;
  if ( Scaleform::Render::TreeCacheNode::calcCacheableBounds(
         node,
         &returnBounds,
         &areaMatrix,
         &pviewMatrix,
         &pviewProj,
         0i64) == CacheableBoundResult_CompletelyClipped )
  {
    returnBounds = 0i64;
    *(_OWORD *)&areaMatrix.M[1][0] = _xmm;
    *(_OWORD *)&areaMatrix.M[0][0] = _xmm;
  }
  v10 = hal->GetMatrixPool(hal);
  Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(v10, &result, &areaMatrix, 0);
  if ( Scaleform::Render::BlendState::IsTargetAllocationNeededForBlendMode((Scaleform::Render::BlendMode)stateArg->pData) )
    Scaleform::Render::TreeCacheNode::CalcCxform(node, &dest);
  Scaleform::Render::MatrixPoolImpl::HMatrix::SetCxform(&result, &dest);
  v14 = 71;
  v11 = (Scaleform::Render::BlendModeEffect *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                Scaleform::Memory::pGlobalHeap,
                                                node,
                                                160i64,
                                                &v14);
  if ( v11 )
  {
    Scaleform::Render::BlendModeEffect::BlendModeEffect(
      v11,
      node,
      &result,
      (const Scaleform::Render::BlendState *)stateArg,
      next);
    v9 = v12;
  }
  if ( result.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release(result.pHandle->pHeader);
  return (Scaleform::Render::CacheEffect *)v9;
}

Scaleform::Render::CacheEffect *__fastcall Scaleform::Render::FilterEffect::Create(
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TreeCacheNode *node,
        const Scaleform::Render::State *stateArg,
        Scaleform::Render::CacheEffect *next)
{
  __int64 v8; // rbx
  Scaleform::Render::MatrixPoolImpl::MatrixPool *v9; // rax
  Scaleform::Render::FilterEffect *v10; // rax
  __int64 v11; // rax
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  Scaleform::Render::MatrixPoolImpl::HMatrix result; // [rsp+38h] [rbp-C8h] BYREF
  Scaleform::Render::Matrix3x4<float> pviewMatrix; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::Render::Matrix4x4<float> pviewProj; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::Render::Rect<float> returnBounds; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::Render::Matrix2x4<float> areaMatrix; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::Render::Cxform dest; // [rsp+E0h] [rbp-20h] BYREF

  returnBounds = 0i64;
  *(_OWORD *)&areaMatrix.M[1][0] = _xmm;
  *(_OWORD *)&areaMatrix.M[0][0] = _xmm;
  Scaleform::Render::Cxform::Cxform(&dest);
  *(_OWORD *)&pviewMatrix.M[1][0] = 0x3F80000000000000ui64;
  *(_OWORD *)&pviewProj.M[1][0] = 0x3F80000000000000ui64;
  *(_QWORD *)&pviewProj.M[3][2] = 0x3F80000000000000i64;
  *(_OWORD *)&pviewMatrix.M[0][0] = 0x3F800000ui64;
  *(_QWORD *)&pviewMatrix.M[2][2] = 1065353216i64;
  *(_OWORD *)&pviewProj.M[0][0] = 0x3F800000ui64;
  *(_QWORD *)&pviewProj.M[2][2] = 1065353216i64;
  *(_QWORD *)&pviewMatrix.M[2][0] = 0i64;
  *(_QWORD *)&pviewProj.M[2][0] = 0i64;
  *(_QWORD *)&pviewProj.M[3][0] = 0i64;
  Scaleform::Render::TreeCacheNode::CalcViewMatrix(node, &pviewMatrix, &pviewProj);
  Scaleform::Render::TreeCacheNode::CalcCxform(node, &dest);
  v8 = 0i64;
  if ( Scaleform::Render::TreeCacheNode::calcCacheableBounds(
         node,
         &returnBounds,
         &areaMatrix,
         &pviewMatrix,
         &pviewProj,
         0i64) == CacheableBoundResult_CompletelyClipped )
  {
    returnBounds = 0i64;
    *(_OWORD *)&areaMatrix.M[1][0] = _xmm;
    *(_OWORD *)&areaMatrix.M[0][0] = _xmm;
  }
  v9 = hal->GetMatrixPool(hal);
  Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(v9, &result, &areaMatrix, 0);
  Scaleform::Render::MatrixPoolImpl::HMatrix::SetCxform(&result, &dest);
  v13 = 71;
  v10 = (Scaleform::Render::FilterEffect *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                             Scaleform::Memory::pGlobalHeap,
                                             node,
                                             168i64,
                                             &v13);
  if ( v10 )
  {
    Scaleform::Render::FilterEffect::FilterEffect(
      v10,
      hal,
      node,
      &result,
      (const Scaleform::Render::FilterState *)stateArg,
      next);
    v8 = v11;
  }
  if ( result.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release(result.pHandle->pHeader);
  return (Scaleform::Render::CacheEffect *)v8;
}

Scaleform::Render::CacheEffect *__fastcall Scaleform::Render::MaskEffect::Create(
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TreeCacheNode *node,
        const Scaleform::Render::State *__formal,
        Scaleform::Render::CacheEffect *next)
{
  Scaleform::Render::MaskEffectState v7; // er14
  Scaleform::Render::MatrixPoolImpl::MatrixPool *v8; // rax
  Scaleform::Render::MaskEffect *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  int v13; // [rsp+30h] [rbp-79h] BYREF
  Scaleform::Render::MatrixPoolImpl::HMatrix result; // [rsp+38h] [rbp-71h] BYREF
  Scaleform::Render::Matrix3x4<float> pviewMatrix; // [rsp+40h] [rbp-69h] BYREF
  Scaleform::Render::Matrix4x4<float> pviewProj; // [rsp+70h] [rbp-39h] BYREF
  Scaleform::Render::Rect<float> maskBounds; // [rsp+B0h] [rbp+7h] BYREF
  Scaleform::Render::Matrix2x4<float> boundAreaMatrix; // [rsp+C0h] [rbp+17h] BYREF

  *(_OWORD *)&boundAreaMatrix.M[0][0] = _xmm;
  maskBounds = 0i64;
  *(_OWORD *)&pviewMatrix.M[1][0] = 0x3F80000000000000ui64;
  *(_OWORD *)&pviewProj.M[1][0] = 0x3F80000000000000ui64;
  *(_QWORD *)&pviewProj.M[3][2] = 0x3F80000000000000i64;
  *(_OWORD *)&boundAreaMatrix.M[1][0] = _xmm;
  *(_QWORD *)&pviewMatrix.M[2][0] = 0i64;
  *(_OWORD *)&pviewMatrix.M[0][0] = 0x3F800000ui64;
  *(_QWORD *)&pviewMatrix.M[2][2] = 1065353216i64;
  *(_QWORD *)&pviewProj.M[2][0] = 0i64;
  *(_QWORD *)&pviewProj.M[3][0] = 0i64;
  *(_OWORD *)&pviewProj.M[0][0] = 0x3F800000ui64;
  *(_QWORD *)&pviewProj.M[2][2] = 1065353216i64;
  Scaleform::Render::TreeCacheNode::CalcViewMatrix(node, &pviewMatrix, &pviewProj);
  v7 = Scaleform::Render::TreeCacheNode::calcMaskBounds(node, &maskBounds, &boundAreaMatrix, &pviewMatrix, &pviewProj);
  v8 = hal->GetMatrixPool(hal);
  Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(v8, &result, &boundAreaMatrix, 0);
  v13 = 71;
  v9 = (Scaleform::Render::MaskEffect *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                          Scaleform::Memory::pGlobalHeap,
                                          node,
                                          232i64,
                                          &v13);
  if ( v9 )
  {
    Scaleform::Render::MaskEffect::MaskEffect(v9, node, v7, &result, next);
    v11 = v10;
  }
  else
  {
    v11 = 0i64;
  }
  if ( result.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release(result.pHandle->pHeader);
  return (Scaleform::Render::CacheEffect *)v11;
}

void __fastcall Scaleform::Render::ProjectionMatrix3DEffect::Create(
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TreeCacheNode *node,
        const Scaleform::Render::State *stateArg,
        Scaleform::Render::CacheEffect *next)
{
  Scaleform::Render::ProjectionMatrix3DEffect *v7; // rax
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 71;
  v7 = (Scaleform::Render::ProjectionMatrix3DEffect *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                        Scaleform::Memory::pGlobalHeap,
                                                        node,
                                                        152i64,
                                                        &v8);
  if ( v7 )
    Scaleform::Render::ProjectionMatrix3DEffect::ProjectionMatrix3DEffect(
      v7,
      node,
      (const Scaleform::Render::ProjectionMatrix3DState *)stateArg,
      next);
}

void __fastcall Scaleform::Render::UserDataEffect::Create(
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TreeCacheNode *node,
        const Scaleform::Render::State *stateArg,
        Scaleform::Render::CacheEffect *next)
{
  Scaleform::Render::UserDataEffect *v7; // rax
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 71;
  v7 = (Scaleform::Render::UserDataEffect *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                              Scaleform::Memory::pGlobalHeap,
                                              node,
                                              152i64,
                                              &v8);
  if ( v7 )
    Scaleform::Render::UserDataEffect::UserDataEffect(
      v7,
      node,
      (const Scaleform::Render::UserDataState *)stateArg,
      next);
}

void __fastcall Scaleform::Render::ViewMatrix3DEffect::Create(
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TreeCacheNode *node,
        const Scaleform::Render::State *stateArg,
        Scaleform::Render::CacheEffect *next)
{
  Scaleform::Render::ViewMatrix3DEffect *v7; // rax
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 71;
  v7 = (Scaleform::Render::ViewMatrix3DEffect *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                  Scaleform::Memory::pGlobalHeap,
                                                  node,
                                                  152i64,
                                                  &v8);
  if ( v7 )
    Scaleform::Render::ViewMatrix3DEffect::ViewMatrix3DEffect(
      v7,
      node,
      (const Scaleform::Render::ViewMatrix3DState *)stateArg,
      next);
}

void __fastcall Scaleform::Render::BlendModeEffect::GetRange(
        Scaleform::Render::BlendModeEffect *this,
        Scaleform::Render::BundleEntryRange *result)
{
  unsigned int Length; // er8

  Length = this->Length;
  result->pFirst = &this->StartEntry;
  result->pLast = &this->EndEntry;
  result->Length = Length;
}

void __fastcall Scaleform::Render::FilterEffect::GetRange(
        Scaleform::Render::FilterEffect *this,
        Scaleform::Render::BundleEntryRange *result)
{
  unsigned int Length; // er8
  Scaleform::Render::BundleEntry *pNextPattern; // rcx
  unsigned int v6; // edx

  if ( this->Contributing )
  {
    Length = this->Length;
    result->pFirst = &this->StartEntry;
    result->pLast = &this->EndEntry;
    result->Length = Length;
  }
  else
  {
    pNextPattern = this->EndEntry.pNextPattern;
    v6 = this->Length;
    result->pFirst = this->StartEntry.pNextPattern;
    result->pLast = pNextPattern;
    result->Length = v6;
  }
}

void __fastcall Scaleform::Render::MaskEffect::GetRange(
        Scaleform::Render::MaskEffect *this,
        Scaleform::Render::BundleEntryRange *result)
{
  Scaleform::Render::BundleEntry *p_StartEntry; // rcx
  unsigned int Length; // er8
  Scaleform::Render::BundleEntry *pNextPattern; // rcx
  unsigned int v7; // edx

  p_StartEntry = &this->StartEntry;
  if ( p_StartEntry->pNextPattern )
  {
    Length = this->Length;
    result->pLast = &this->PopEntry;
    result->pFirst = p_StartEntry;
    result->Length = Length;
  }
  else
  {
    pNextPattern = this->PopEntry.pNextPattern;
    v7 = this->Length;
    result->pFirst = this->EndEntry.pNextPattern;
    result->pLast = pNextPattern;
    result->Length = v7;
  }
}

void __fastcall Scaleform::Render::UserDataEffect::GetRange(
        Scaleform::Render::ViewMatrix3DEffect *this,
        Scaleform::Render::BundleEntryRange *result)
{
  unsigned int Length; // er8

  Length = this->Length;
  result->pFirst = &this->StartEntry;
  result->pLast = &this->EndEntry;
  result->Length = Length;
}

Scaleform::Render::TreeCacheNode *__fastcall Scaleform::Render::BlendModeEffect::GetSourceNode(
        Scaleform::Render::BlendModeEffect *this)
{
  return this->StartEntry.pSourceNode;
}

unsigned __int64 __fastcall Scaleform::GFx::AS3::IntervalTimer::GetNextInvokeTime(AgAsyncStreamReader *this)
{
  return this->m_readPosition;
}

unsigned __int64 __fastcall Scaleform::GFx::AS3::Instances::fl::XMLAttr::GetCurrNamespace(AgAsyncStreamReader *this)
{
  return this->m_streamSize;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

__int64 __fastcall Scaleform::Render::DICommand_Clear::GetType(Scaleform::GFx::AS3::Instances::fl::XMLComment *this)
{
  return 3i64;
}

__int64 __fastcall ActorOption::GetActorType(Scaleform::GFx::AS3::Instances::fl::XMLProcInstr *this)
{
  return 4i64;
}

__int64 __fastcall Scaleform::Render::DICommand_Dispose::GetType(Scaleform::Render::DICommand_Dispose *this)
{
  return 6i64;
}

__int64 __fastcall Scaleform::Render::UserDataEffect::GetType(Scaleform::Render::DICommand_CopyChannel *this)
{
  return 7i64;
}

__int64 __fastcall Scaleform::Render::DICommand_Draw::GetType(Scaleform::GFx::AS3::Instances::fl::XMLAttr *this)
{
  return 5i64;
}

char __fastcall Scaleform::Render::BlendModeEffect::Update(
        Scaleform::Render::BlendModeEffect *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::State *stateArg)
{
  bool IsTargetAllocationNeededForBlendMode; // r15
  Scaleform::Render::Bundle *pObject; // rdx
  Scaleform::Render::Bundle *v7; // rbx
  Scaleform::Render::Bundle *v8; // rcx
  int v9; // esi
  Scaleform::Render::Bundle *v10; // rax
  Scaleform::Render::Bundle *v11; // rbx
  Scaleform::Render::Bundle *v12; // rcx
  Scaleform::Render::SortKeyInterface **v13; // rax
  Scaleform::Render::SortKeyInterface **v14; // rbx
  void *Data; // rdx
  Scaleform::Render::SortKeyInterface *pImpl; // rcx
  Scaleform::Render::SortKeyInterface **v17; // rax
  Scaleform::Render::SortKeyInterface **v18; // rbx
  void *v19; // rdx
  Scaleform::Render::SortKeyInterface *v20; // rcx
  Scaleform::Render::SortKey v22; // [rsp+20h] [rbp-28h] BYREF

  IsTargetAllocationNeededForBlendMode = Scaleform::Render::BlendState::IsTargetAllocationNeededForBlendMode((Scaleform::Render::BlendMode)stateArg->pData);
  if ( this->StartEntry.pBundle.pObject )
  {
    pObject = this->StartEntry.pBundle.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v7 = this->StartEntry.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v7, &this->StartEntry);
    if ( v7 )
      Scaleform::RefCountNTSImpl::Release(v7);
  }
  v8 = this->StartEntry.pBundle.pObject;
  if ( v8 )
    Scaleform::RefCountNTSImpl::Release(v8);
  v9 = 0;
  this->StartEntry.pBundle.pObject = 0i64;
  this->StartEntry.IndexHint = 0;
  if ( this->EndEntry.pBundle.pObject )
  {
    v10 = this->EndEntry.pBundle.pObject;
    if ( v10 )
      ++v10->RefCount;
    v11 = this->EndEntry.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v11, &this->EndEntry);
    if ( v11 )
      Scaleform::RefCountNTSImpl::Release(v11);
  }
  v12 = this->EndEntry.pBundle.pObject;
  if ( v12 )
    Scaleform::RefCountNTSImpl::Release(v12);
  this->EndEntry.pBundle.pObject = 0i64;
  this->EndEntry.IndexHint = 0;
  Scaleform::Render::SortKey::SortKey(&v22, SortKey_BlendModeStart, (Scaleform::Render::BlendMode)stateArg->pData);
  v14 = v13;
  (*v13)->AddRef(*v13, v13[1]);
  this->StartEntry.Key.pImpl->Release(this->StartEntry.Key.pImpl, this->StartEntry.Key.Data);
  Data = v22.Data;
  this->StartEntry.Key.pImpl = *v14;
  pImpl = v22.pImpl;
  this->StartEntry.Key.Data = v14[1];
  pImpl->Release(pImpl, Data);
  LOBYTE(v9) = IsTargetAllocationNeededForBlendMode;
  Scaleform::Render::SortKey::SortKey(&v22, SortKey_BlendModeEnd, (Scaleform::Render::BlendMode)(v9 + 20));
  v18 = v17;
  (*v17)->AddRef(*v17, v17[1]);
  this->EndEntry.Key.pImpl->Release(this->EndEntry.Key.pImpl, this->EndEntry.Key.Data);
  v19 = v22.Data;
  this->EndEntry.Key.pImpl = *v18;
  v20 = v22.pImpl;
  this->EndEntry.Key.Data = v18[1];
  v20->Release(v20, v19);
  return 1;
}

char __fastcall Scaleform::Render::FilterEffect::Update(
        Scaleform::Render::FilterEffect *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::State *stateArg)
{
  Scaleform::Render::Bundle *pObject; // rax
  Scaleform::Render::Bundle *v7; // rbx
  Scaleform::Render::Bundle *v8; // rcx
  Scaleform::Render::Bundle *v9; // rax
  Scaleform::Render::Bundle *v10; // rbx
  Scaleform::Render::Bundle *v11; // rcx
  const Scaleform::Render::FilterSet *Log; // rax
  Scaleform::Render::SortKeyInterface **v13; // rax
  Scaleform::Render::SortKeyInterface **v14; // rbx
  void *Data; // rdx
  Scaleform::Render::SortKeyInterface *pImpl; // rcx
  Scaleform::Render::SortKeyInterface **v17; // rax
  Scaleform::Render::SortKeyInterface **v18; // rbx
  void *v19; // rdx
  Scaleform::Render::SortKeyInterface *v20; // rcx
  Scaleform::Render::SortKey v22; // [rsp+20h] [rbp-28h] BYREF

  if ( this->StartEntry.pBundle.pObject )
  {
    pObject = this->StartEntry.pBundle.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v7 = this->StartEntry.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v7, &this->StartEntry);
    if ( v7 )
      Scaleform::RefCountNTSImpl::Release(v7);
  }
  v8 = this->StartEntry.pBundle.pObject;
  if ( v8 )
    Scaleform::RefCountNTSImpl::Release(v8);
  this->StartEntry.pBundle.pObject = 0i64;
  this->StartEntry.IndexHint = 0;
  if ( this->EndEntry.pBundle.pObject )
  {
    v9 = this->EndEntry.pBundle.pObject;
    if ( v9 )
      ++v9->RefCount;
    v10 = this->EndEntry.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v10, &this->EndEntry);
    if ( v10 )
      Scaleform::RefCountNTSImpl::Release(v10);
  }
  v11 = this->EndEntry.pBundle.pObject;
  if ( v11 )
    Scaleform::RefCountNTSImpl::Release(v11);
  this->EndEntry.pBundle.pObject = 0i64;
  this->EndEntry.IndexHint = 0;
  Log = (const Scaleform::Render::FilterSet *)Scaleform::GFx::Stream::GetLog((AgDisplay *)stateArg);
  Scaleform::Render::SortKey::SortKey(&v22, SortKey_FilterStart, Log);
  v14 = v13;
  (*v13)->AddRef(*v13, v13[1]);
  this->StartEntry.Key.pImpl->Release(this->StartEntry.Key.pImpl, this->StartEntry.Key.Data);
  Data = v22.Data;
  this->StartEntry.Key.pImpl = *v14;
  pImpl = v22.pImpl;
  this->StartEntry.Key.Data = v14[1];
  pImpl->Release(pImpl, Data);
  Scaleform::Render::SortKey::SortKey(&v22, SortKey_FilterEnd, 0i64);
  v18 = v17;
  (*v17)->AddRef(*v17, v17[1]);
  this->EndEntry.Key.pImpl->Release(this->EndEntry.Key.pImpl, this->EndEntry.Key.Data);
  v19 = v22.Data;
  this->EndEntry.Key.pImpl = *v18;
  v20 = v22.pImpl;
  this->EndEntry.Key.Data = v18[1];
  v20->Release(v20, v19);
  Scaleform::Render::FilterEffect::updateGradientImages(this, hal, (const Scaleform::Render::FilterState *)stateArg);
  return 1;
}

char __fastcall Scaleform::Render::MaskEffect::Update(
        Scaleform::Render::MaskEffect *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::State *stateArg)
{
  Scaleform::Render::TreeCacheNode *pSourceNode; // rbx
  char v4; // si
  Scaleform::Render::MaskEffectState v7; // er14
  Scaleform::Render::SortKeyInterface **v8; // rax
  Scaleform::Render::SortKeyInterface **v9; // rbx
  Scaleform::Render::SortKeyInterface *pImpl; // rcx
  void *Data; // rdx
  Scaleform::Render::SortKey v12; // [rsp+30h] [rbp-79h] BYREF
  Scaleform::Render::Matrix3x4<float> pviewMatrix; // [rsp+40h] [rbp-69h] BYREF
  Scaleform::Render::Matrix4x4<float> pviewProj; // [rsp+70h] [rbp-39h] BYREF
  Scaleform::Render::Rect<float> maskBounds; // [rsp+B0h] [rbp+7h] BYREF
  Scaleform::Render::Matrix2x4<float> boundAreaMatrix; // [rsp+C0h] [rbp+17h] BYREF

  pSourceNode = this->StartEntry.pSourceNode;
  v4 = 0;
  if ( !pSourceNode )
    return 0;
  maskBounds = 0i64;
  *(_OWORD *)&pviewMatrix.M[1][0] = 0x3F80000000000000ui64;
  *(_OWORD *)&pviewProj.M[1][0] = 0x3F80000000000000ui64;
  *(_QWORD *)&pviewProj.M[3][2] = 0x3F80000000000000i64;
  *(_OWORD *)&boundAreaMatrix.M[1][0] = _xmm;
  *(_OWORD *)&boundAreaMatrix.M[0][0] = _xmm;
  *(_QWORD *)&pviewMatrix.M[2][0] = 0i64;
  *(_OWORD *)&pviewMatrix.M[0][0] = 0x3F800000ui64;
  *(_QWORD *)&pviewMatrix.M[2][2] = 1065353216i64;
  *(_QWORD *)&pviewProj.M[2][0] = 0i64;
  *(_QWORD *)&pviewProj.M[3][0] = 0i64;
  *(_OWORD *)&pviewProj.M[0][0] = 0x3F800000ui64;
  *(_QWORD *)&pviewProj.M[2][2] = 1065353216i64;
  Scaleform::Render::TreeCacheNode::CalcViewMatrix(pSourceNode, &pviewMatrix, &pviewProj);
  v7 = Scaleform::Render::TreeCacheNode::calcMaskBounds(
         pSourceNode,
         &maskBounds,
         &boundAreaMatrix,
         &pviewMatrix,
         &pviewProj);
  if ( this->StartEntry.Key.pImpl->Type != SortKey_MaskStart )
  {
    Scaleform::Render::BundleEntry::ClearBundle(&this->StartEntry);
    Scaleform::Render::SortKey::SortKey(&v12, SortKeyMask_Push);
    v9 = v8;
    (*v8)->AddRef(*v8, v8[1]);
    this->StartEntry.Key.pImpl->Release(this->StartEntry.Key.pImpl, this->StartEntry.Key.Data);
    pImpl = v12.pImpl;
    Data = v12.Data;
    this->StartEntry.Key.pImpl = *v9;
    this->StartEntry.Key.Data = v9[1];
    pImpl->Release(pImpl, Data);
    v4 = 1;
  }
  this->MES = v7;
  Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix2D(&this->BoundsMatrix, &boundAreaMatrix);
  return v4;
}

char __fastcall Scaleform::Render::ProjectionMatrix3DEffect::Update(
        Scaleform::Render::ProjectionMatrix3DEffect *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::State *stateArg)
{
  Scaleform::Render::Bundle *pObject; // rax
  Scaleform::Render::Bundle *v6; // rbx
  Scaleform::Render::Bundle *v7; // rcx
  Scaleform::Render::SortKeyInterface **v8; // rax
  Scaleform::Render::SortKeyInterface **v9; // rbx
  void *Data; // rdx
  Scaleform::Render::SortKeyInterface *pImpl; // rcx
  Scaleform::Render::SortKey v13; // [rsp+20h] [rbp-18h] BYREF

  if ( this->StartEntry.pBundle.pObject )
  {
    pObject = this->StartEntry.pBundle.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v6 = this->StartEntry.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v6, &this->StartEntry);
    if ( v6 )
      Scaleform::RefCountNTSImpl::Release(v6);
  }
  v7 = this->StartEntry.pBundle.pObject;
  if ( v7 )
    Scaleform::RefCountNTSImpl::Release(v7);
  this->StartEntry.pBundle.pObject = 0i64;
  this->StartEntry.IndexHint = 0;
  Scaleform::Render::SortKey::SortKey(
    &v13,
    SortKey_ProjectionMatrix3DStart,
    (const Scaleform::Render::Matrix4x4Ref<float> *)stateArg->pData);
  v9 = v8;
  (*v8)->AddRef(*v8, v8[1]);
  this->StartEntry.Key.pImpl->Release(this->StartEntry.Key.pImpl, this->StartEntry.Key.Data);
  Data = v13.Data;
  this->StartEntry.Key.pImpl = *v9;
  pImpl = v13.pImpl;
  this->StartEntry.Key.Data = v9[1];
  pImpl->Release(pImpl, Data);
  return 1;
}

char __fastcall Scaleform::Render::UserDataEffect::Update(
        Scaleform::Render::UserDataEffect *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::State *stateArg)
{
  Scaleform::Render::Bundle *pObject; // rax
  Scaleform::Render::Bundle *v6; // rbx
  Scaleform::Render::Bundle *v7; // rcx
  Scaleform::Render::SortKeyInterface **v8; // rax
  Scaleform::Render::SortKeyInterface **v9; // rbx
  void *Data; // rdx
  Scaleform::Render::SortKeyInterface *pImpl; // rcx
  Scaleform::Render::SortKey v13; // [rsp+20h] [rbp-18h] BYREF

  if ( this->StartEntry.pBundle.pObject )
  {
    pObject = this->StartEntry.pBundle.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v6 = this->StartEntry.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v6, &this->StartEntry);
    if ( v6 )
      Scaleform::RefCountNTSImpl::Release(v6);
  }
  v7 = this->StartEntry.pBundle.pObject;
  if ( v7 )
    Scaleform::RefCountNTSImpl::Release(v7);
  this->StartEntry.pBundle.pObject = 0i64;
  this->StartEntry.IndexHint = 0;
  Scaleform::Render::SortKey::SortKey(
    &v13,
    SortKey_UserDataStart,
    (Scaleform::Render::UserDataState::Data *)stateArg->pData);
  v9 = v8;
  (*v8)->AddRef(*v8, v8[1]);
  this->StartEntry.Key.pImpl->Release(this->StartEntry.Key.pImpl, this->StartEntry.Key.Data);
  Data = v13.Data;
  this->StartEntry.Key.pImpl = *v9;
  pImpl = v13.pImpl;
  this->StartEntry.Key.Data = v9[1];
  pImpl->Release(pImpl, Data);
  return 1;
}

char __fastcall Scaleform::Render::ViewMatrix3DEffect::Update(
        Scaleform::Render::ViewMatrix3DEffect *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::State *stateArg)
{
  Scaleform::Render::Bundle *pObject; // rax
  Scaleform::Render::Bundle *v6; // rbx
  Scaleform::Render::Bundle *v7; // rcx
  Scaleform::Render::SortKeyInterface **v8; // rax
  Scaleform::Render::SortKeyInterface **v9; // rbx
  void *Data; // rdx
  Scaleform::Render::SortKeyInterface *pImpl; // rcx
  Scaleform::Render::SortKey v13; // [rsp+20h] [rbp-18h] BYREF

  if ( this->StartEntry.pBundle.pObject )
  {
    pObject = this->StartEntry.pBundle.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v6 = this->StartEntry.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v6, &this->StartEntry);
    if ( v6 )
      Scaleform::RefCountNTSImpl::Release(v6);
  }
  v7 = this->StartEntry.pBundle.pObject;
  if ( v7 )
    Scaleform::RefCountNTSImpl::Release(v7);
  this->StartEntry.pBundle.pObject = 0i64;
  this->StartEntry.IndexHint = 0;
  Scaleform::Render::SortKey::SortKey(
    &v13,
    SortKey_ViewMatrix3DStart,
    (const Scaleform::Render::Matrix3x4Ref<float> *)stateArg->pData);
  v9 = v8;
  (*v8)->AddRef(*v8, v8[1]);
  this->StartEntry.Key.pImpl->Release(this->StartEntry.Key.pImpl, this->StartEntry.Key.Data);
  Data = v13.Data;
  this->StartEntry.Key.pImpl = *v9;
  pImpl = v13.pImpl;
  this->StartEntry.Key.Data = v9[1];
  pImpl->Release(pImpl, Data);
  return 1;
}

void __fastcall Scaleform::Render::CacheableTargetEffect::UpdateCxform(
        Scaleform::Render::CacheableTargetEffect *this,
        const Scaleform::Render::Cxform *cx)
{
  Scaleform::Render::MatrixPoolImpl::HMatrix::SetCxform(&this->BoundsMatrix, cx);
}

char __fastcall Scaleform::Render::CacheEffectChain::UpdateEffects(
        Scaleform::Render::CacheEffectChain *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TreeCacheNode *node,
        unsigned int changeFlags)
{
  char v5; // r12
  Scaleform::Render::TreeNode *pNode; // rcx
  unsigned int v7; // ebp
  Scaleform::Render::TreeCacheNode *v8; // r15
  Scaleform::Render::HAL *v9; // r14
  Scaleform::Render::CacheEffect *pEffect; // rbx
  Scaleform::Render::StateBag *v12; // r13
  unsigned __int64 i; // rdi
  Scaleform::Render::StateType Type; // er15
  Scaleform::Render::CacheEffect *pNext; // rbp
  const Scaleform::Render::State *v16; // r8
  Scaleform::Render::CacheEffect_vtbl *v17; // rax
  const Scaleform::Render::State *State; // rax
  Scaleform::Render::CacheEffect *v19; // rax

  v5 = 0;
  pNode = node->pNode;
  v7 = changeFlags;
  v8 = node;
  v9 = hal;
  if ( !pNode )
    return 0;
  pEffect = this->pEffect;
  v12 = (Scaleform::Render::StateBag *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                                  + 8i64
                                                  * (unsigned int)((int)((_DWORD)pNode
                                                                       - ((unsigned int)pNode & 0xFFFFF000)
                                                                       - 56)
                                                                 / 56)
                                                  + 40) & 0xFFFFFFFFFFFFFFFEui64);
  if ( !this->pEffect && !v12[4].ArraySize )
    return 0;
  for ( i = 0i64; i < 6; ++i )
  {
    if ( !pEffect )
      goto LABEL_15;
    Type = Scaleform::Render::ChainOrderSequence[i].Type;
    if ( pEffect->GetType(pEffect) != Type )
    {
      v8 = node;
LABEL_15:
      if ( (v7 & Scaleform::Render::ChainOrderSequence[i].ChangeFlag) != 0 )
      {
        State = Scaleform::Render::StateBag::GetState(v12 + 4, Scaleform::Render::ChainOrderSequence[i].Type);
        if ( State )
        {
          v19 = Scaleform::Render::ChainOrderSequence[i].Factory(v9, v8, State, pEffect);
          if ( v19 )
          {
            this->pEffect = v19;
            this = (Scaleform::Render::CacheEffectChain *)&v19->pNext;
          }
        }
      }
      goto LABEL_19;
    }
    pNext = pEffect->pNext;
    if ( (changeFlags & Scaleform::Render::ChainOrderSequence[i].ChangeFlag) != 0 )
    {
      v16 = Scaleform::Render::StateBag::GetState(v12 + 4, Type);
      v17 = pEffect->__vftable;
      if ( !v16 )
      {
        ((void (__fastcall *)(Scaleform::Render::CacheEffect *, __int64, _QWORD))v17->~CacheEffect)(pEffect, 1i64, 0i64);
        v9 = hal;
        pEffect = pNext;
        this->pEffect = pNext;
        v5 = 1;
        v7 = changeFlags;
        goto LABEL_19;
      }
      v5 |= ((__int64 (__fastcall *)(Scaleform::Render::CacheEffect *, Scaleform::Render::HAL *, const Scaleform::Render::State *))v17->Update)(
              pEffect,
              hal,
              v16);
    }
    v9 = hal;
    this = (Scaleform::Render::CacheEffectChain *)&pEffect->pNext;
    pEffect = pNext;
    v7 = changeFlags;
LABEL_19:
    v8 = node;
  }
  return v5;
}

bool __fastcall Scaleform::Render::CacheableTargetEffect::UpdateMatrix(
        Scaleform::Render::CacheableTargetEffect *this,
        const Scaleform::Render::Matrix2x4<float> *boundsMatrix,
        const Scaleform::Render::Matrix2x4<float> *newNodeMatrix,
        bool forceUncache)
{
  Scaleform::Render::MatrixPoolImpl::HMatrix *p_BoundsMatrix; // rsi
  bool v8; // r15
  float *TextureMatrix; // rdi
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // r13
  float v11; // xmm2_4
  float v12; // xmm2_4
  float v13; // xmm8_4
  float v14; // xmm9_4
  float v15; // xmm0_4
  float v16; // xmm10_4
  float v17; // xmm7_4
  float v18; // xmm11_4
  float v19; // xmm1_4
  float v20; // xmm7_4
  float v21; // xmm1_4
  bool v22; // r15
  float v23; // xmm7_4
  float v24; // xmm0_4
  Scaleform::Render::Matrix2x4<float> *v25; // rbx
  char v26; // al
  float *v27; // rdi
  float v28; // xmm2_4
  float v29; // xmm2_4
  char v30; // al
  float v31; // xmm8_4
  float v32; // xmm9_4
  char v33; // r13
  float v34; // xmm0_4
  float v35; // xmm10_4
  float v36; // xmm7_4
  float v37; // xmm11_4
  float v38; // xmm0_4
  float v39; // xmm7_4
  float v40; // xmm0_4
  char v41; // al
  char v42; // r15
  float v43; // xmm7_4
  _BOOL8 v44; // r8
  float v45; // xmm0_4
  char v46; // cl
  Scaleform::Render::MatrixPoolImpl::DataHeader *v47; // rdx
  const Scaleform::Render::Matrix2x4<float> *v48; // rdx
  char v50; // [rsp+28h] [rbp-B9h]
  bool v51; // [rsp+29h] [rbp-B8h]
  Scaleform::Render::CacheableTargetEffect *Buf2; // [rsp+30h] [rbp-B1h]
  Scaleform::Render::Matrix2x4<float> Buf2_8; // [rsp+38h] [rbp-A9h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+58h] [rbp-89h] BYREF
  Scaleform::Render::Matrix2x4<float> v55; // [rsp+78h] [rbp-69h] BYREF

  p_BoundsMatrix = &this->BoundsMatrix;
  Buf2 = this;
  v8 = 0;
  memset(&Buf2_8, 0, sizeof(Buf2_8));
  TextureMatrix = (float *)Scaleform::Render::MatrixPoolImpl::HMatrix::GetTextureMatrix(&this->BoundsMatrix, 1u);
  if ( forceUncache )
    goto LABEL_35;
  pHeader = p_BoundsMatrix->pHandle->pHeader;
  if ( (pHeader->Format & 4) == 0 || !memcmp(TextureMatrix, &Buf2_8, 0x20ui64) )
    goto LABEL_35;
  v11 = TextureMatrix[3];
  if ( (float)(newNodeMatrix->M[0][3] + 0.000099999997) < v11
    || v11 < (float)(newNodeMatrix->M[0][3] - 0.000099999997)
    || (v12 = TextureMatrix[7], (float)(newNodeMatrix->M[1][3] + 0.000099999997) < v12)
    || (v50 = 0, v12 < (float)(newNodeMatrix->M[1][3] - 0.000099999997)) )
  {
    v50 = 1;
  }
  v13 = TextureMatrix[4];
  v14 = *TextureMatrix;
  v15 = sqrtf((float)(v14 * v14) + (float)(v13 * v13));
  v16 = newNodeMatrix->M[1][0];
  v17 = v15;
  v18 = newNodeMatrix->M[0][0];
  v19 = sqrtf((float)(v18 * v18) + (float)(v16 * v16));
  v22 = 1;
  if ( (float)(v19 + 0.000099999997) >= v17 && v17 >= (float)(v19 - 0.000099999997) )
  {
    v20 = sqrtf((float)(TextureMatrix[1] * TextureMatrix[1]) + (float)(TextureMatrix[5] * TextureMatrix[5]));
    v21 = sqrtf(
            (float)(newNodeMatrix->M[0][1] * newNodeMatrix->M[0][1])
          + (float)(newNodeMatrix->M[1][1] * newNodeMatrix->M[1][1]));
    if ( (float)(v21 + 0.000099999997) >= v20 && v20 >= (float)(v21 - 0.000099999997) )
      v22 = 0;
  }
  v23 = atan2f(v13, v14);
  v24 = atan2f(v16, v18);
  v25 = 0i64;
  if ( (float)(v24 + 0.000099999997) < v23 || (v26 = 1, v23 < (float)(v24 - 0.000099999997)) )
    v26 = 0;
  v51 = v26 == 0;
  v27 = (float *)&pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[4]
                        + 1];
  v28 = v27[3];
  if ( (float)(boundsMatrix->M[0][3] + 0.000099999997) < v28
    || v28 < (float)(boundsMatrix->M[0][3] - 0.000099999997)
    || (v29 = v27[7], (float)(boundsMatrix->M[1][3] + 0.000099999997) < v29)
    || (v30 = 0, v29 < (float)(boundsMatrix->M[1][3] - 0.000099999997)) )
  {
    v30 = 1;
  }
  v31 = v27[4];
  v32 = *v27;
  v33 = v30 | v50;
  v34 = sqrtf((float)(v32 * v32) + (float)(v31 * v31));
  v35 = boundsMatrix->M[1][0];
  v36 = v34;
  v37 = boundsMatrix->M[0][0];
  v38 = sqrtf((float)(v37 * v37) + (float)(v35 * v35));
  if ( (float)(v38 + 0.000099999997) < v36
    || v36 < (float)(v38 - 0.000099999997)
    || (v39 = sqrtf((float)(v27[1] * v27[1]) + (float)(v27[5] * v27[5])),
        v40 = sqrtf(
                (float)(boundsMatrix->M[0][1] * boundsMatrix->M[0][1])
              + (float)(boundsMatrix->M[1][1] * boundsMatrix->M[1][1])),
        (float)(v40 + 0.000099999997) < v39)
    || (v41 = 0, v39 < (float)(v40 - 0.000099999997)) )
  {
    v41 = 1;
  }
  v42 = v41 | v22;
  v43 = atan2f(v31, v32);
  v45 = atan2f(v35, v37);
  if ( (float)(v45 + 0.000099999997) < v43 || (v46 = 1, v43 < (float)(v45 - 0.000099999997)) )
    v46 = 0;
  LOBYTE(v44) = v51 || v46 == 0;
  v8 = Buf2->canCacheAcrossTransform(Buf2, v33, v44, v42);
  if ( !v8 )
  {
LABEL_35:
    Scaleform::Render::MatrixPoolImpl::HMatrix::SetTextureMatrix(p_BoundsMatrix, newNodeMatrix, 1u);
    Scaleform::Render::MatrixPoolImpl::HMatrix::SetUserData(p_BoundsMatrix, boundsMatrix, 0x20ui64);
    v48 = boundsMatrix;
  }
  else
  {
    v47 = p_BoundsMatrix->pHandle->pHeader;
    if ( (v47->Format & 8) != 0 )
      v25 = (Scaleform::Render::Matrix2x4<float> *)&v47[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v47->Format & 0xF].Offsets[3]
                                                      + 1];
    v55 = *v25;
    m = *Scaleform::Render::MatrixPoolImpl::HMatrix::GetTextureMatrix(p_BoundsMatrix, 1u);
    Buf2_8 = m;
    Scaleform::Render::Matrix2x4<float>::SetInverse(&m, &Buf2_8);
    Scaleform::Render::Matrix2x4<float>::Append(&m, newNodeMatrix);
    Scaleform::Render::Matrix2x4<float>::Append(&v55, &m);
    v48 = &v55;
  }
  Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix2D(p_BoundsMatrix, v48);
  Scaleform::Render::MatrixPoolImpl::HMatrix::SetTextureMatrix(p_BoundsMatrix, boundsMatrix, 0);
  return !v8;
}

bool __fastcall Scaleform::Render::MaskEffect::UpdateMatrix(
        Scaleform::Render::MaskEffect *this,
        const Scaleform::Render::MaskEffectState mes,
        const Scaleform::Render::Matrix2x4<float> *areaMatrix)
{
  Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix2D(&this->BoundsMatrix, areaMatrix);
  return mes != this->MES;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

bool __fastcall Scaleform::Render::FilterEffect::canCacheAcrossTransform(
        Scaleform::Render::FilterEffect *this,
        bool deltaTrans,
        bool deltaRot,
        bool deltaScale)
{
  return Scaleform::Render::FilterSet::CanCacheAcrossTransform(
           (Scaleform::Render::FilterSet *)this->StartEntry.Key.Data,
           deltaTrans,
           deltaRot,
           deltaScale);
}

void __fastcall Scaleform::Render::CacheEffectChain::updateBundleChain(
        Scaleform::Render::CacheEffectChain *this,
        Scaleform::Render::CacheEffect *effect,
        Scaleform::Render::BundleEntryRange *chain,
        Scaleform::Render::BundleEntryRange *maskChain)
{
  Scaleform::Render::CacheEffect *pNext; // rdx

  pNext = effect->pNext;
  if ( pNext )
    Scaleform::Render::CacheEffectChain::updateBundleChain(this, pNext, chain, maskChain);
  effect->ChainNext(effect, chain, maskChain);
}

void __fastcall Scaleform::Render::FilterEffect::updateGradientImages(
        Scaleform::Render::FilterEffect *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::FilterState *state)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  Scaleform::Render::Filter *Filter; // rdi
  Scaleform::Render::PrimitiveFillManager *v8; // rax

  v5 = 0;
  if ( Scaleform::Render::FilterState::GetFilterCount((Scaleform::Render::FilterState *)state) )
  {
    v6 = 0i64;
    do
    {
      Filter = (Scaleform::Render::Filter *)Scaleform::Render::FilterState::GetFilter(
                                              (Scaleform::Render::FilterState *)state,
                                              v6);
      if ( (unsigned int)(Filter->Type - 4) <= 1 )
      {
        v8 = hal->GetPrimitiveFillManager(hal);
        Scaleform::Render::GradientFilter::GenerateGradientImage((Scaleform::Render::GradientFilter *)Filter, v8);
      }
      v6 = ++v5;
    }
    while ( v5 < Scaleform::Render::FilterState::GetFilterCount((Scaleform::Render::FilterState *)state) );
  }
}

