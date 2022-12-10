#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"

Scaleform::Render::TreeCacheNode::TreeCacheNode(Scaleform::Render::TreeNode * pnode, unsigned long flags); // 0x140380430
Scaleform::Render::TreeCacheNode::~TreeCacheNode(); // 0x1403805C0
void Scaleform::Render::TreeCacheNode::UpdateInsertIntoParent(Scaleform::Render::HAL * hal, Scaleform::Render::TreeCacheNode * pparent, Scaleform::Render::TreeCacheNode * pinsert, const Scaleform::Render::TreeNode::NodeData * nodeData, unsigned short depth); // 0x140382EE0
void Scaleform::Render::TreeCacheNode::RemoveFromParent(Scaleform::Render::HAL * hal); // 0x140382850
void Scaleform::Render::TreeCacheNode::HandleRemoveNode(); // 0x140382560
void Scaleform::Render::TreeCacheNode::UpdateChildSubtree(Scaleform::Render::HAL * hal, const Scaleform::Render::TreeNode::NodeData * data, unsigned short depth); // 0x140382E30
void Scaleform::Render::TreeCacheNode::updateMaskCache(Scaleform::Render::HAL * hal, const Scaleform::Render::TreeNode::NodeData * data, unsigned short depth, bool updateSubtree); // 0x140385C00
void Scaleform::Render::TreeCacheNode::updateMaskTransform(Scaleform::Render::HAL * hal, Scaleform::Render::TransformArgs & t, Scaleform::Render::TransformFlags flags); // 0x140385D90
void Scaleform::Render::TreeCacheNode::updateEffectChain(Scaleform::Render::HAL * hal, Scaleform::Render::BundleEntryRange * contentChain); // 0x1403859E0
void Scaleform::Render::TreeCacheNode::propagateMaskFlag(Scaleform::Render::HAL * hal, unsigned long partOfMask); // 0x140385030
void Scaleform::Render::TreeCacheNode::propagateScale9Flag(Scaleform::Render::HAL * hal, unsigned long partOfScale9); // 0x140385120
void Scaleform::Render::TreeCacheNode::propagateEdgeAA(Scaleform::Render::HAL * hal, Scaleform::Render::EdgeAAMode parentEdgeAA); // 0x140384F30
Scaleform::Render::Rect<float> Scaleform::Render::TransformBounds3D(const Scaleform::Render::Matrix4x4<float> & viewproj, const Scaleform::Render::Viewport & vp, const Scaleform::Render::Matrix3x4<float> & viewMatrix, const Scaleform::Render::Rect<float> & inputBounds, bool orient); // 0x1403829E0
Scaleform::Render::TransformFlags Scaleform::Render::TreeCacheNode::updateCulling(Scaleform::Render::HAL * hal, const Scaleform::Render::TreeNode::NodeData * data, const Scaleform::Render::TransformArgs & t, Scaleform::Render::Rect<float> * cullRect, Scaleform::Render::TransformFlags flags); // 0x140385330
enum Scaleform::Render::TreeCacheNode::updateCulling::__l2::CullReason
{
	NotCulled = 0,
	MaskCulled = 1,
	AlphaCulled = 2,
	TransformCulled = 3,
	TransformCulled_NearFar = 4,
	TransformCulled_3D = 5,
};
bool Check_Address; // 0x140A723F8
unsigned long BundlePatternFrameId; // 0x140A723FC
unsigned long BuildPatternCount; // 0x140A72400
const Scaleform::Render::TreeCacheNode * TCN_This; // 0x140A72408
const Scaleform::Render::TreeNode::NodeData * TCN_ThisData; // 0x140A72410
const Scaleform::Render::TreeNode * TCN_ChildNode; // 0x140A72418
const Scaleform::Render::TreeCacheNode * TCN_Child; // 0x140A72420
const Scaleform::Render::TreeCacheNode * TCN_Parent; // 0x140A72428
volatile unsigned long long TCN_Index; // 0x140A72430
typedef Scaleform::Render::FixedSizeArrayRect2F Scaleform::Render::FixedSizeArrayRectFImpl;
bool Scaleform::Render::TreeCacheNode::calcChildMaskBounds(Scaleform::Render::Rect<float> * bounds, Scaleform::Render::TreeCacheNode * child); // 0x140384300
Scaleform::Render::MaskEffectState Scaleform::Render::TreeCacheNode::calcMaskBounds(Scaleform::Render::Rect<float> * maskBounds, Scaleform::Render::Matrix2x4<float> * boundAreaMatrix, const Scaleform::Render::Matrix3x4<float> & viewMatrix, const Scaleform::Render::Matrix4x4<float> & viewProjMatrix); // 0x140384610
Scaleform::Render::TreeCacheNode::CacheableBoundResult Scaleform::Render::TreeCacheNode::calcCacheableBounds(Scaleform::Render::Rect<float> * returnBounds, Scaleform::Render::Matrix2x4<float> * areaMatrix, const Scaleform::Render::Matrix3x4<float> & viewMatrix, const Scaleform::Render::Matrix4x4<float> & viewProjMatrix, Scaleform::Render::Rect<float> * cullRect); // 0x140383DE0
void Scaleform::Render::TreeCacheNode::CalcViewMatrix(Scaleform::Render::Matrix2x4<float> * pviewMatrix); // 0x1403810A0
void Scaleform::Render::TreeCacheNode::CalcViewMatrix(Scaleform::Render::Matrix3x4<float> * pviewMatrix, Scaleform::Render::Matrix4x4<float> * pviewProj); // 0x1403811A0
void Scaleform::Render::TreeCacheNode::CalcCxform(Scaleform::Render::Cxform & dest); // 0x140380F80
Scaleform::Render::Matrix4x4<float> Scaleform::Render::TreeCacheNode::GetViewProj(); // 0x140381D90
void Scaleform::Render::TreeCacheNode::updateFilterCache(Scaleform::Render::HAL * hal, const Scaleform::Render::TreeNode::NodeData * data, const Scaleform::Render::TransformArgs & t, Scaleform::Render::TransformFlags flags, Scaleform::Render::Rect<float> * cullRect, const Scaleform::Render::Matrix3x4<float> & m3, bool is3d); // 0x140385A60
void Scaleform::Render::TreeCacheNode::updateBlendCache(Scaleform::Render::HAL * hal, const Scaleform::Render::TreeNode::NodeData * data, const Scaleform::Render::TransformArgs & t, Scaleform::Render::TransformFlags flags, Scaleform::Render::Rect<float> * cullRect, const Scaleform::Render::Matrix3x4<float> & m3, bool is3d); // 0x1403851A0
Scaleform::Render::TreeCacheContainer::~TreeCacheContainer(); // 0x140380490
void Scaleform::Render::TreeCacheContainer::UpdateTransform(Scaleform::Render::HAL * hal, const Scaleform::Render::TreeNode::NodeData * pbaseData, const Scaleform::Render::TransformArgs & t, Scaleform::Render::TransformFlags flags); // 0x140383070
void Scaleform::Render::TreeCacheContainer::HandleChanges(Scaleform::Render::HAL * hal, unsigned long changeBits); // 0x140382070
void Scaleform::Render::TreeCacheContainer::HandleRemoveNode(); // 0x1403824E0
void Scaleform::Render::TreeCacheContainer::UpdateChildSubtree(Scaleform::Render::HAL * hal, const Scaleform::Render::TreeNode::NodeData * pdata, unsigned short depth); // 0x140382D30
void Scaleform::Render::TreeCacheContainer::propagateMaskFlag(Scaleform::Render::HAL * hal, unsigned long partOfMask); // 0x140384FB0
void Scaleform::Render::TreeCacheContainer::propagateScale9Flag(Scaleform::Render::HAL * hal, unsigned long partOfScale9); // 0x140385040
void Scaleform::Render::TreeCacheContainer::propagateEdgeAA(Scaleform::Render::HAL * hal, Scaleform::Render::EdgeAAMode parentEdgeAA); // 0x140384E50
void Scaleform::Render::TreeCacheContainer::propagate3DFlag(Scaleform::Render::HAL * hal, unsigned long parent3D); // 0x140384DD0
bool Scaleform::Render::FixedSizeArrayRect2F::Intersects(const Scaleform::Render::Rect<float> & bounds); // 0x140382600
void Scaleform::Render::TreeCacheContainer::BuildChildPattern(Scaleform::Render::HAL * hal, Scaleform::Render::BundleEntryRange * pattern, unsigned long flags); // 0x1403807B0
void Scaleform::Render::TreeCacheContainer::UpdateBundlePattern(Scaleform::Render::HAL * hal, unsigned long flags); // 0x140382AF0
bool Scaleform::Render::TreeCacheContainer::GetPatternChain(Scaleform::Render::HAL * hal, Scaleform::Render::BundleEntryRange * range, unsigned long flags); // 0x140381AF0
bool Scaleform::Render::TreeCacheContainer::IsPatternChainValid(); // 0x1403827A0
void Scaleform::Render::TreeCacheContainer::forceUpdateImages(Scaleform::Render::HAL * hal); // 0x140384C20
void Scaleform::Render::TreeCacheRoot::ChainUpdatesByDepth(); // 0x140381530
void Scaleform::Render::TreeCacheRoot::AddToUpdate(Scaleform::Render::TreeCacheNode * pnode, unsigned long flags); // 0x140380780
void Scaleform::Render::TreeCacheRoot::AddToDepthUpdate(Scaleform::Render::TreeCacheNode * pnode, unsigned long flags); // 0x140380700
void Scaleform::Render::TreeCacheRoot::HandleChanges(Scaleform::Render::HAL * hal, unsigned long changeBits); // 0x140382400
void Scaleform::Render::TreeCacheRoot::UpdateTreeData(Scaleform::Render::HAL * hal); // 0x140383470
void Scaleform::Render::TreeCacheRoot::Draw(Scaleform::Render::HAL * hal); // 0x1403817B0
Scaleform::Render::TreeCacheMeshBase::TreeCacheMeshBase(Scaleform::Render::TreeNode * pnode, const Scaleform::Render::SortKey & key, unsigned long flags); // 0x140380370
Scaleform::Render::TreeCacheMeshBase::~TreeCacheMeshBase(); // 0x140380510
void Scaleform::Render::TreeCacheMeshBase::ComputeFinalMatrix(const Scaleform::Render::TransformArgs & t, Scaleform::Render::MatrixPoolImpl::MatrixPool & mpool, Scaleform::Render::TransformFlags flags); // 0x1403815F0
bool Scaleform::Render::TreeCacheMeshBase::GetPatternChain(Scaleform::Render::HAL * hal, Scaleform::Render::BundleEntryRange * range, unsigned long __formal); // 0x140381C50
void Scaleform::Render::TreeCacheMeshBase::UpdateBundlePattern(Scaleform::Render::HAL * hal, unsigned long __formal); // 0x140382CB0//decompilation failure at 140A723F8!
//decompilation failure at 140A723FC!
//decompilation failure at 140A72400!
//decompilation failure at 140A72408!
//decompilation failure at 140A72410!
//decompilation failure at 140A72418!
//decompilation failure at 140A72420!
//decompilation failure at 140A72428!
//decompilation failure at 140A72430!
__m128 __fastcall Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,0>(__m128 *result)
{
  if ( __TSS0__1____Constant__0A__0A__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&__TSS0__1____Constant__0A__0A__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    if ( __TSS0__1____Constant__0A__0A__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA == -1 )
    {
      `Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,0>'::`2'::v = 0i64;
      Init_thread_footer(&__TSS0__1____Constant__0A__0A__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    }
  }
  return (__m128)`Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,0>'::`2'::v;
}

__m128 __fastcall Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,4294967295,0,0>(__m128 *result)
{
  if ( __TSS0__1____Constant__0PPPPPPPP__0PPPPPPPP__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&__TSS0__1____Constant__0PPPPPPPP__0PPPPPPPP__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    if ( __TSS0__1____Constant__0PPPPPPPP__0PPPPPPPP__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA == -1 )
    {
      `Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,4294967295,0,0>'::`2'::v = _mm_load_si128((const __m128i *)&_xmm);
      Init_thread_footer(&__TSS0__1____Constant__0PPPPPPPP__0PPPPPPPP__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    }
  }
  return (__m128)`Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,4294967295,0,0>'::`2'::v;
}

void __fastcall Scaleform::Render::TransformArgs::TransformArgs(
        Scaleform::Render::TransformArgs *this,
        const Scaleform::Render::TransformArgs *copy,
        const Scaleform::Render::Matrix3x4<float> *mat)
{
  float x2; // xmm1_4
  float y1; // xmm0_4
  float y2; // xmm2_4

  x2 = copy->CullRect.x2;
  y1 = copy->CullRect.y1;
  y2 = copy->CullRect.y2;
  this->CullRect.x1 = copy->CullRect.x1;
  this->CullRect.y1 = y1;
  this->CullRect.x2 = x2;
  this->CullRect.y2 = y2;
  this->Mat3D = *mat;
  this->Mat = *(Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152];
  this->Cx = copy->Cx;
  this->viewState = copy->viewState;
  this->projState = copy->projState;
  this->bRecomputeViewProj = copy->bRecomputeViewProj;
  this->ViewProj = copy->ViewProj;
}

void __fastcall Scaleform::Render::TreeCacheMeshBase::TreeCacheMeshBase(
        Scaleform::Render::TreeCacheMeshBase *this,
        Scaleform::Render::TreeNode *pnode,
        const Scaleform::Render::SortKey *key,
        unsigned int flags)
{
  Scaleform::Render::SortKeyInterface *pImpl; // rcx

  this->pPrev = (Scaleform::Render::TreeCacheNode *)-1i64;
  this->pNext = (Scaleform::Render::TreeCacheNode *)-1i64;
  this->pRoot = 0i64;
  this->pParent = 0i64;
  this->pNode = pnode;
  this->Effects.pEffect = 0i64;
  this->pMask = 0i64;
  this->Depth = 0;
  this->Flags = flags;
  this->UpdateFlags = 8257536;
  this->pNextUpdate = 0i64;
  *(_QWORD *)&this->SortParentBounds.x1 = 0i64;
  *(_QWORD *)&this->SortParentBounds.x2 = 0i64;
  this->pNext = 0i64;
  this->pPrev = 0i64;
  this->__vftable = (Scaleform::Render::TreeCacheMeshBase_vtbl *)&Scaleform::Render::TreeCacheMeshBase::`vftable';
  this->SorterShapeNode.pNextPattern = 0i64;
  this->SorterShapeNode.pChain = 0i64;
  *(_DWORD *)&this->SorterShapeNode.ChainHeight = 0;
  pImpl = key->pImpl;
  this->SorterShapeNode.Key = *key;
  ((void (__fastcall *)(Scaleform::Render::SortKeyInterface *))pImpl->AddRef)(pImpl);
  this->SorterShapeNode.pBundle.pObject = 0i64;
  this->SorterShapeNode.pSourceNode = this;
  this->SorterShapeNode.Removed = 0;
  this->M.pHandle = &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle;
}

void __fastcall Scaleform::Render::TreeCacheNode::TreeCacheNode(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::TreeNode *pnode,
        unsigned int flags)
{
  this->pPrev = (Scaleform::Render::TreeCacheNode *)-1i64;
  this->pNext = (Scaleform::Render::TreeCacheNode *)-1i64;
  this->__vftable = (Scaleform::Render::TreeCacheNode_vtbl *)&Scaleform::Render::TreeCacheNode::`vftable';
  this->pRoot = 0i64;
  this->pParent = 0i64;
  this->pNode = pnode;
  this->Effects.pEffect = 0i64;
  this->pMask = 0i64;
  this->Depth = 0;
  this->pNextUpdate = 0i64;
  this->Flags = flags;
  this->UpdateFlags = 8257536;
  *(_QWORD *)&this->SortParentBounds.x1 = 0i64;
  *(_QWORD *)&this->SortParentBounds.x2 = 0i64;
  this->pNext = 0i64;
  this->pPrev = 0i64;
}

void __fastcall Scaleform::Render::TreeCacheContainer::~TreeCacheContainer(Scaleform::Render::TreeCacheContainer *this)
{
  Scaleform::Render::TreeCacheNode *pNext; // rcx
  Scaleform::Render::Rect<float> *p_SortParentBounds; // rdi
  Scaleform::Render::TreeCacheNode *v4; // rbx

  this->__vftable = (Scaleform::Render::TreeCacheContainer_vtbl *)&Scaleform::Render::TreeCacheContainer::`vftable';
  pNext = this->Children.Root.pNext;
  p_SortParentBounds = &this->SortParentBounds;
  if ( this == (Scaleform::Render::TreeCacheContainer *)-112i64 )
    p_SortParentBounds = 0i64;
  while ( pNext != (Scaleform::Render::TreeCacheNode *)p_SortParentBounds )
  {
    v4 = pNext->pNext;
    pNext->pNext = 0i64;
    pNext->pParent = 0i64;
    pNext->pPrev = 0i64;
    if ( pNext->pRoot )
      pNext->HandleRemoveNode(pNext);
    pNext = v4;
  }
  Scaleform::Render::TreeCacheNode::~TreeCacheNode(this);
}

void __fastcall Scaleform::Render::TreeCacheMeshBase::~TreeCacheMeshBase(Scaleform::Render::TreeCacheMeshBase *this)
{
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rcx
  Scaleform::Render::Bundle *pObject; // rax
  Scaleform::Render::Bundle *v4; // rbx
  Scaleform::Render::Bundle *v5; // rcx

  this->__vftable = (Scaleform::Render::TreeCacheMeshBase_vtbl *)&Scaleform::Render::TreeCacheMeshBase::`vftable';
  pHandle = this->M.pHandle;
  if ( pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release(pHandle->pHeader);
  if ( this->SorterShapeNode.pBundle.pObject )
  {
    pObject = this->SorterShapeNode.pBundle.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v4 = this->SorterShapeNode.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v4, &this->SorterShapeNode);
    if ( v4 )
      Scaleform::RefCountNTSImpl::Release(v4);
  }
  v5 = this->SorterShapeNode.pBundle.pObject;
  if ( v5 )
    Scaleform::RefCountNTSImpl::Release(v5);
  this->SorterShapeNode.Key.pImpl->Release(this->SorterShapeNode.Key.pImpl, this->SorterShapeNode.Key.Data);
  Scaleform::Render::TreeCacheNode::~TreeCacheNode(this);
}

void __fastcall Scaleform::Render::TreeCacheNode::~TreeCacheNode(Scaleform::Render::TreeCacheNode *this)
{
  bool v1; // zf
  Scaleform::Render::TreeCacheNode *pParent; // rax
  Scaleform::Render::TreeCacheNode *pMask; // rcx

  v1 = this->pPrev == 0i64;
  this->__vftable = (Scaleform::Render::TreeCacheNode_vtbl *)&Scaleform::Render::TreeCacheNode::`vftable';
  if ( v1 )
  {
    pParent = this->pParent;
    if ( pParent )
    {
      pParent->pMask = 0i64;
      pParent->Flags &= ~0x10u;
    }
  }
  else
  {
    this->pPrev->pNext = this->pNext;
    this->pNext->pPrev = this->pPrev;
    this->pPrev = (Scaleform::Render::TreeCacheNode *)-1i64;
    this->pNext = (Scaleform::Render::TreeCacheNode *)-1i64;
  }
  pMask = this->pMask;
  if ( pMask )
    Scaleform::Render::TreeCacheNode::RemoveFromParent(pMask, 0i64);
  Scaleform::Render::CacheEffectChain::~CacheEffectChain(&this->Effects);
}

void __fastcall Scaleform::Render::TreeCacheRoot::AddToDepthUpdate(
        Scaleform::Render::TreeCacheRoot *this,
        Scaleform::Render::TreeCacheNode *pnode,
        unsigned int flags)
{
  if ( (pnode->UpdateFlags & 0x80000000) != 0 )
  {
    pnode->UpdateFlags |= flags;
  }
  else if ( this->DepthUpdatesChained )
  {
    Scaleform::Render::DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode *>::Link(
      &this->DepthUpdates,
      pnode->Depth,
      &pnode->pNextUpdate,
      pnode);
    pnode->UpdateFlags |= flags | 0x80000000;
  }
  else
  {
    pnode->pNextUpdate = this->pUpdateList;
    this->pUpdateList = pnode;
    pnode->UpdateFlags |= flags | 0x80000000;
  }
}

void __fastcall Scaleform::Render::TreeCacheRoot::AddToUpdate(
        Scaleform::Render::TreeCacheRoot *this,
        Scaleform::Render::TreeCacheNode *pnode,
        unsigned int flags)
{
  if ( (pnode->UpdateFlags & 0x80000000) == 0 )
  {
    flags |= 0x80000000;
    pnode->pNextUpdate = this->pUpdateList;
    this->pUpdateList = pnode;
  }
  pnode->UpdateFlags |= flags;
}

void __fastcall Scaleform::Render::TreeCacheContainer::BuildChildPattern(
        Scaleform::Render::TreeCacheContainer *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::BundleEntryRange *pattern,
        unsigned int flags)
{
  Scaleform::Render::HAL *v4; // rdi
  Scaleform::Render::TreeNode *pNode; // rcx
  char v9; // r15
  Scaleform::Render::StateBag *State; // rax
  _BYTE *pData; // rax
  bool v12; // zf
  int v13; // eax
  Scaleform::Render::TreeCacheNode *pNext; // rsi
  Scaleform::Render::Rect<float> *p_SortParentBounds; // r12
  Scaleform::Render::TreeCacheNode_vtbl *v16; // rax
  float x1; // xmm9_4
  float y1; // xmm7_4
  float x2; // xmm8_4
  float y2; // xmm6_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm4_4
  Scaleform::Render::BundleEntry *pLast; // rdi
  bool HalfRect; // al
  unsigned __int64 Size; // rcx
  Scaleform::Render::Rect2F *v27; // rax
  unsigned __int64 v28; // rcx
  __m128 v29; // xmm1
  Scaleform::Render::Rect2F *v30; // rax
  __m128 v31; // xmm1
  Scaleform::Render::BundleEntry *v32; // rax
  Scaleform::Render::TreeNode::NodeData *v33; // rcx
  Scaleform::Render::Matrix2x4<float> *v34; // rax
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm2_4
  Scaleform::Render::HAL *bounds; // [rsp+30h] [rbp-D8h]
  Scaleform::Render::Rect<float> bounds_8; // [rsp+38h] [rbp-D0h] BYREF
  Scaleform::Render::BundleEntryRange other_8; // [rsp+48h] [rbp-C0h] BYREF
  Scaleform::Render::BundleEntryRangeMatcher v41; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-48h]
  Scaleform::Render::Rect2F *v43; // [rsp+C8h] [rbp-40h]
  Scaleform::Render::Rect<float> pr; // [rsp+D8h] [rbp-30h] BYREF
  Scaleform::Render::Rect<float> v45; // [rsp+E8h] [rbp-20h] BYREF
  Scaleform::Render::FixedSizeArrayRect2F v46; // [rsp+F8h] [rbp-10h] BYREF

  pattern->pLast = 0i64;
  v4 = hal;
  pattern->pFirst = 0i64;
  pattern->Length = 0;
  v46.pData = (Scaleform::Render::Rect2F *)&v46.DataReserve[8];
  v43 = (Scaleform::Render::Rect2F *)&v46.DataReserve[8];
  memset(&v41.pLastEntries[1], 0, 64);
  bounds = hal;
  pNode = this->pNode;
  v46.Size = 0i64;
  v46.Reserve = 32i64;
  v46.HalfRect = 0;
  memset(&v41.pLast, 0, 20);
  pr = 0i64;
  v42 = 0i64;
  v9 = 0;
  State = Scaleform::Render::StateBag::GetState(
            (Scaleform::Render::StateBag *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                   + 0x28)
                                                       + 8i64
                                                       * (unsigned int)((int)((_DWORD)pNode
                                                                            - ((unsigned int)pNode & 0xFFFFF000)
                                                                            - 56)
                                                                      / 56)
                                                       + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                          + 64),
            State_UserData);
  if ( State )
  {
    pData = State->pData;
    if ( (pData[32] & 4) == 0 || (v12 = pData[28] == 0, v13 = 1, v12) )
      v13 = 0;
    flags |= v13;
  }
  pNext = this->Children.Root.pNext;
  p_SortParentBounds = &this->SortParentBounds;
  if ( this == (Scaleform::Render::TreeCacheContainer *)-112i64 )
    p_SortParentBounds = 0i64;
  while ( pNext != (Scaleform::Render::TreeCacheNode *)p_SortParentBounds )
  {
    v16 = pNext->__vftable;
    memset(&other_8, 0, 20);
    if ( !v16->GetPatternChain(pNext, v4, &other_8, flags) )
      goto LABEL_85;
    if ( (other_8.Length & 0x7FFFFFFF) <= 8 )
    {
      v12 = pNext->pNode == 0i64;
      v45 = 0i64;
      if ( v12 )
      {
        y2 = v45.y2;
        x2 = v45.x2;
        y1 = v45.y1;
        x1 = v45.x1;
      }
      else
      {
        x1 = pNext->SortParentBounds.x1;
        y1 = pNext->SortParentBounds.y1;
        x2 = pNext->SortParentBounds.x2;
        y2 = pNext->SortParentBounds.y2;
        v45.x1 = x1;
        v45.y1 = y1;
        v45.x2 = x2;
        v45.y2 = y2;
      }
      if ( (pNext->Flags & 0x410) == 0 )
        goto LABEL_60;
      if ( !pNext->pMask )
        goto LABEL_50;
      bounds_8 = 0i64;
      if ( !Scaleform::Render::TreeCacheNode::calcChildMaskBounds(this, &bounds_8, pNext) )
        goto LABEL_50;
      if ( v9 )
      {
        v21 = bounds_8.y1;
        v22 = bounds_8.x2;
        v23 = bounds_8.y2;
        pr.y1 = bounds_8.y1;
        pr.x2 = bounds_8.x2;
        pr.x1 = bounds_8.x1;
      }
      else
      {
        v9 = 1;
        if ( pr.x1 > bounds_8.x1 )
          pr.x1 = bounds_8.x1;
        v22 = bounds_8.x2;
        if ( pr.x2 <= bounds_8.x2 )
          pr.x2 = bounds_8.x2;
        v21 = bounds_8.y1;
        if ( pr.y1 > bounds_8.y1 )
          pr.y1 = bounds_8.y1;
        v23 = bounds_8.y2;
        if ( pr.y2 > bounds_8.y2 )
          goto LABEL_38;
      }
      pr.y2 = v23;
LABEL_38:
      if ( x1 >= x2 || y1 >= y2 )
      {
        v45.x1 = bounds_8.x1;
        x1 = bounds_8.x1;
        v45.y1 = v21;
        y1 = v21;
        v45.x2 = v22;
        x2 = v22;
      }
      else
      {
        if ( x1 > bounds_8.x1 )
        {
          v45.x1 = bounds_8.x1;
          x1 = bounds_8.x1;
        }
        if ( x2 <= v22 )
        {
          v45.x2 = v22;
          x2 = v22;
        }
        if ( y1 > v21 )
        {
          v45.y1 = v21;
          y1 = v21;
        }
        if ( y2 > v23 )
          goto LABEL_50;
      }
      v45.y2 = v23;
      y2 = v23;
LABEL_50:
      if ( v9 )
      {
        pr.x1 = x1;
        pr.y1 = y1;
        pr.x2 = x2;
LABEL_59:
        pr.y2 = y2;
        goto LABEL_60;
      }
      v9 = 1;
      if ( pr.x1 > x1 )
        pr.x1 = x1;
      if ( pr.x2 <= x2 )
        pr.x2 = x2;
      if ( pr.y1 > y1 )
        pr.y1 = y1;
      if ( pr.y2 <= y2 )
        goto LABEL_59;
LABEL_60:
      pLast = v41.pLast;
      if ( v41.pLast )
      {
        if ( (flags & 1) == 0 && (pNext->Flags & 0x200) == 0 )
        {
          if ( Scaleform::Render::FixedSizeArrayRect2F::Intersects(&v46, &v45) )
          {
            if ( ((__int64)v41.pLastEntries[0] & 0x7FFFFFFF) != 1 || (other_8.Length & 0x7FFFFFFF) != 1 )
              goto LABEL_65;
            pLast = v41.pLast;
            if ( Scaleform::Render::SortKey::MatchSingleItemOverlap(&v41.pLast->Key, &other_8.pFirst->Key) )
            {
LABEL_73:
              LODWORD(v41.pFirst) = this->Depth;
              Scaleform::Render::BundleEntryRangeMatcher::Match(
                (Scaleform::Render::BundleEntryRangeMatcher *)&v41.pLast,
                &other_8,
                (unsigned int *)&v41);
              HalfRect = v46.HalfRect;
              Size = v46.Size;
              y2 = v45.y2;
              x2 = v45.x2;
              y1 = v45.y1;
              x1 = v45.x1;
              goto LABEL_77;
            }
          }
          else
          {
            if ( Scaleform::Render::BundleEntryRangeMatcher::Match(
                   (Scaleform::Render::BundleEntryRangeMatcher *)&v41.pLast,
                   &other_8,
                   0i64) )
            {
              goto LABEL_73;
            }
LABEL_65:
            pLast = v41.pLast;
          }
          y2 = v45.y2;
          x2 = v45.x2;
          y1 = v45.y1;
          x1 = v45.x1;
        }
        if ( pLast )
        {
          if ( pattern->pFirst )
            pattern->pLast->pNextPattern = pLast;
          else
            pattern->pFirst = pLast;
          pattern->pLast = *(Scaleform::Render::BundleEntry **)&v41.Length;
          pattern->Length += LODWORD(v41.pLastEntries[0]);
        }
      }
      HalfRect = 0;
      *(Scaleform::Render::BundleEntryRange *)&v41.pLast = other_8;
      Size = 0i64;
      v46.HalfRect = 0;
      v42 = 0i64;
      v46.Size = 0i64;
LABEL_77:
      if ( x1 >= x2 || y1 >= y2 )
      {
LABEL_81:
        v4 = bounds;
        pNext = pNext->pNext;
      }
      else
      {
        if ( HalfRect )
        {
          v27 = v46.pData;
          v28 = Size;
          v29 = _mm_shuffle_ps(v46.pData[v28 - 1].r1, (__m128)v45, 228);
          v46.pData[v28 - 1].r0 = _mm_shuffle_ps(v46.pData[v28 - 1].r0, (__m128)v45, 68);
          v27[v28 - 1].r1 = v29;
          v46.HalfRect = 0;
          goto LABEL_81;
        }
        if ( Size == v46.Reserve )
        {
          Scaleform::Render::FixedSizeArray<Scaleform::Render::Rect2F>::grow(&v46, 2 * Size);
          Size = v46.Size;
        }
        v4 = bounds;
        v30 = &v46.pData[Size];
        v46.Size = Size + 1;
        v31 = _mm_shuffle_ps((__m128)v45, v30->r1, 238);
        v30->r0 = _mm_shuffle_ps((__m128)v45, v30->r0, 228);
        v30->r1 = v31;
        v46.HalfRect = 1;
LABEL_85:
        pNext = pNext->pNext;
      }
    }
    else
    {
      if ( v41.pLast )
      {
        if ( pattern->pFirst )
          pattern->pLast->pNextPattern = v41.pLast;
        else
          pattern->pFirst = v41.pLast;
        pattern->pLast = *(Scaleform::Render::BundleEntry **)&v41.Length;
        pattern->Length += LODWORD(v41.pLastEntries[0]);
      }
      if ( other_8.pFirst )
      {
        if ( pattern->pFirst )
          pattern->pLast->pNextPattern = other_8.pFirst;
        else
          pattern->pFirst = other_8.pFirst;
        pattern->pLast = other_8.pLast;
        pattern->Length += other_8.Length;
      }
      memset(&v41.pLast, 0, 20);
      v46.Size = 0i64;
      v46.HalfRect = 0;
      pNext = pNext->pNext;
    }
  }
  if ( v41.pLast )
  {
    if ( pattern->pFirst )
      pattern->pLast->pNextPattern = v41.pLast;
    else
      pattern->pFirst = v41.pLast;
    v32 = *(Scaleform::Render::BundleEntry **)&v41.Length;
    pattern->Length += LODWORD(v41.pLastEntries[0]);
    pattern->pLast = v32;
  }
  if ( v9 )
  {
    v33 = (Scaleform::Render::TreeNode::NodeData *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                          + 0x28)
                                                              + 8i64
                                                              * (unsigned int)((int)(LODWORD(this->pNode)
                                                                                   - ((__int64)this->pNode & 0xFFFFF000)
                                                                                   - 56)
                                                                             / 56)
                                                              + 40) & 0xFFFFFFFFFFFFFFFEui64);
    if ( v33->AproxLocalBounds.x1 < v33->AproxLocalBounds.x2 && v33->AproxLocalBounds.y1 < v33->AproxLocalBounds.y2 )
    {
      if ( pr.x1 > v33->AproxLocalBounds.x1 )
        pr.x1 = v33->AproxLocalBounds.x1;
      if ( pr.x2 <= v33->AproxLocalBounds.x2 )
        pr.x2 = v33->AproxLocalBounds.x2;
      if ( pr.y1 > v33->AproxLocalBounds.y1 )
        pr.y1 = v33->AproxLocalBounds.y1;
      if ( pr.y2 <= v33->AproxLocalBounds.y2 )
        pr.y2 = v33->AproxLocalBounds.y2;
    }
    v34 = (Scaleform::Render::Matrix2x4<float> *)Scaleform::Render::TreeNode::NodeData::M2D(v33);
    Scaleform::Render::Matrix2x4<float>::EncloseTransform(v34, &pr, &pr);
    v35 = pr.y2;
    v36 = pr.x2;
    v37 = pr.y1;
    if ( pr.x1 != this->SortParentBounds.x1
      || pr.x2 != this->SortParentBounds.x2
      || pr.y1 != this->SortParentBounds.y1
      || pr.y2 != this->SortParentBounds.y2 )
    {
      this->SortParentBounds.x1 = pr.x1;
      this->SortParentBounds.y1 = v37;
      this->SortParentBounds.x2 = v36;
      this->SortParentBounds.y2 = v35;
      this->Flags |= 0x400u;
    }
  }
  ++BuildPatternCount;
  v46.Size = 0i64;
  if ( v46.pData != v43 )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
}

void __fastcall Scaleform::Render::TreeCacheNode::CalcCxform(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::Cxform *dest)
{
  Scaleform::Render::TreeCacheNode *i; // rbx
  Scaleform::Render::TreeNode *pNode; // rcx

  *dest = *(Scaleform::Render::Cxform *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                + 0x28)
                                                    + 8i64
                                                    * (unsigned int)((int)(LODWORD(this->pNode)
                                                                         - ((__int64)this->pNode & 0xFFFFF000)
                                                                         - 56)
                                                                   / 56)
                                                    + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                       + 80);
  for ( i = this->pParent; i; i = i->pParent )
  {
    pNode = i->pNode;
    if ( (*(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                + 8i64
                                * (unsigned int)((int)(LODWORD(i->pNode) - ((unsigned int)pNode & 0xFFFFF000) - 56) / 56)
                                + 40) & 0xFFFFFFFFFFFFFFFEui64)
                   + 10) & 0x400) != 0 )
      break;
    Scaleform::Render::Cxform::Prepend(
      dest,
      (const Scaleform::Render::Cxform *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                 + 0x28)
                                                     + 8i64
                                                     * (unsigned int)((int)((_DWORD)pNode
                                                                          - ((unsigned int)pNode & 0xFFFFF000)
                                                                          - 56)
                                                                    / 56)
                                                     + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                        + 80));
  }
}

void __fastcall Scaleform::Render::TreeCacheNode::CalcViewMatrix(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::Matrix2x4<float> *pviewMatrix)
{
  Scaleform::Render::Matrix2x4<float> *v4; // rax
  Scaleform::Render::TreeCacheNode *pParent; // rbx
  const Scaleform::Render::Matrix2x4<float> *v6; // rax

  v4 = (Scaleform::Render::Matrix2x4<float> *)Scaleform::Render::TreeNode::NodeData::M2D((Scaleform::Render::TreeNode::NodeData *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28) + 8i64 * (unsigned int)((int)(LODWORD(this->pNode) - ((__int64)this->pNode & 0xFFFFF000) - 56) / 56) + 40) & 0xFFFFFFFFFFFFFFFEui64));
  pParent = this->pParent;
  for ( *pviewMatrix = *v4; pParent; pParent = pParent->pParent )
  {
    v6 = Scaleform::Render::TreeNode::NodeData::M2D((Scaleform::Render::TreeNode::NodeData *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pParent->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28) + 8i64 * (unsigned int)((int)(LODWORD(pParent->pNode) - ((__int64)pParent->pNode & 0xFFFFF000) - 56) / 56) + 40) & 0xFFFFFFFFFFFFFFFEui64));
    Scaleform::Render::Matrix2x4<float>::Append(pviewMatrix, v6);
  }
}

void __fastcall Scaleform::Render::TreeCacheNode::CalcViewMatrix(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::Matrix3x4<float> *pviewMatrix,
        Scaleform::Render::Matrix4x4<float> *pviewProj)
{
  Scaleform::Render::TreeNode *pNode; // r9
  Scaleform::Render::StateBag *v4; // rdi
  unsigned __int64 v8; // rbx
  Scaleform::Render::StateBag *State; // rbp
  Scaleform::Render::TreeCacheNode **p_pParent; // rax
  Scaleform::Render::TreeCacheNode *v11; // rbx
  __int128 v12; // xmm1
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int128 v15; // xmm0
  __int64 v16; // rax
  Scaleform::Render::TreeNode *v17; // r9
  Scaleform::Render::TreeNode *v18; // r9
  _OWORD *pData; // rax
  __int128 v20; // xmm0
  char *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  Scaleform::Render::Matrix3x4<float> m2; // [rsp+20h] [rbp-E8h] BYREF
  Scaleform::Render::Matrix4x4<float> m1; // [rsp+50h] [rbp-B8h] BYREF
  Scaleform::Render::Matrix4x4<float> v27; // [rsp+90h] [rbp-78h] BYREF

  pNode = this->pNode;
  v4 = 0i64;
  if ( !pNode )
  {
    v8 = 0i64;
LABEL_6:
    State = 0i64;
    goto LABEL_7;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                 + 8i64 * (unsigned int)((int)((_DWORD)pNode - ((unsigned int)pNode & 0xFFFFF000) - 56) / 56)
                 + 40) & 0xFFFFFFFFFFFFFFFEui64;
  if ( !v8 || (*(_WORD *)(v8 + 10) & 0x800) == 0 )
    goto LABEL_6;
  State = Scaleform::Render::StateBag::GetState((Scaleform::Render::StateBag *)(v8 + 64), State_ViewMatrix3D);
LABEL_7:
  if ( v8 && (*(_WORD *)(v8 + 10) & 0x1000) != 0 )
    v4 = Scaleform::Render::StateBag::GetState((Scaleform::Render::StateBag *)(v8 + 64), State_ProjectionMatrix3D);
  p_pParent = &this->pParent;
  *(_OWORD *)&pviewMatrix->M[0][0] = *(_OWORD *)(v8 + 16);
  *(_OWORD *)&pviewMatrix->M[1][0] = *(_OWORD *)(v8 + 32);
  *(_OWORD *)&pviewMatrix->M[2][0] = *(_OWORD *)(v8 + 48);
  if ( this->pParent )
  {
    do
    {
      v11 = *p_pParent;
      v12 = *(_OWORD *)&pviewMatrix->M[1][0];
      v13 = (unsigned __int64)(*p_pParent)->pNode & 0xFFFFFFFFFFFFF000ui64;
      v14 = (unsigned __int128)((__int64)((__int64)&(*p_pParent)->pNode[-1] - v13) * (__int128)0x4924924924924925i64) >> 64;
      *(_OWORD *)&m2.M[0][0] = *(_OWORD *)&pviewMatrix->M[0][0];
      v15 = *(_OWORD *)&pviewMatrix->M[2][0];
      v16 = *(_QWORD *)(v13 + 40);
      *(_OWORD *)&m2.M[1][0] = v12;
      *(_OWORD *)&m2.M[2][0] = v15;
      Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(
        pviewMatrix,
        (const Scaleform::Render::Matrix3x4<float> *)((*(_QWORD *)(v16
                                                                 + 8
                                                                 * ((unsigned int)(v14 >> 4)
                                                                  + ((unsigned __int64)v14 >> 63))
                                                                 + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                                    + 16),
        &m2);
      if ( !State )
      {
        v17 = v11->pNode;
        if ( (*(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                    + 8i64
                                    * (unsigned int)((int)(LODWORD(v11->pNode) - ((unsigned int)v17 & 0xFFFFF000) - 56)
                                                   / 56)
                                    + 40) & 0xFFFFFFFFFFFFFFFEui64)
                       + 10) & 0x800) != 0 )
          State = Scaleform::Render::StateBag::GetState(
                    (Scaleform::Render::StateBag *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFF000ui64)
                                                                           + 0x28)
                                                               + 8i64
                                                               * (unsigned int)((int)((_DWORD)v17
                                                                                    - ((unsigned int)v17 & 0xFFFFF000)
                                                                                    - 56)
                                                                              / 56)
                                                               + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                                  + 64),
                    State_ViewMatrix3D);
      }
      if ( !v4 )
      {
        v18 = v11->pNode;
        if ( (*(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                    + 8i64
                                    * (unsigned int)((int)(LODWORD(v11->pNode) - ((unsigned int)v18 & 0xFFFFF000) - 56)
                                                   / 56)
                                    + 40) & 0xFFFFFFFFFFFFFFFEui64)
                       + 10) & 0x1000) != 0 )
          v4 = Scaleform::Render::StateBag::GetState(
                 (Scaleform::Render::StateBag *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFF000ui64)
                                                                        + 0x28)
                                                            + 8i64
                                                            * (unsigned int)((int)((_DWORD)v18
                                                                                 - ((unsigned int)v18 & 0xFFFFF000)
                                                                                 - 56)
                                                                           / 56)
                                                            + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                               + 64),
                 State_ProjectionMatrix3D);
      }
      p_pParent = &v11->pParent;
    }
    while ( v11->pParent );
  }
  if ( State && v4 )
  {
    pData = State->pData;
    *(_OWORD *)&m2.M[0][0] = pData[1];
    *(_OWORD *)&m2.M[1][0] = pData[2];
    v20 = pData[3];
    v21 = (char *)v4->pData;
    *(_OWORD *)&m2.M[2][0] = v20;
    m1 = *(Scaleform::Render::Matrix4x4<float> *)(v21 + 16);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&v27, &m1, &m2);
    v22 = *(_OWORD *)&v27.M[1][0];
    *(_OWORD *)&pviewProj->M[0][0] = *(_OWORD *)&v27.M[0][0];
    v23 = *(_OWORD *)&v27.M[2][0];
    *(_OWORD *)&pviewProj->M[1][0] = v22;
    v24 = *(_OWORD *)&v27.M[3][0];
    *(_OWORD *)&pviewProj->M[2][0] = v23;
  }
  else
  {
    *(_OWORD *)&pviewProj->M[0][0] = *(_OWORD *)&Scaleform::Render::Matrix4x4<float>::Identity.M[0][0];
    *(_OWORD *)&pviewProj->M[1][0] = *(_OWORD *)&Scaleform::Render::Matrix4x4<float>::Identity.M[1][0];
    *(_OWORD *)&pviewProj->M[2][0] = *(_OWORD *)&Scaleform::Render::Matrix4x4<float>::Identity.M[2][0];
    v24 = *(_OWORD *)&Scaleform::Render::Matrix4x4<float>::Identity.M[3][0];
  }
  *(_OWORD *)&pviewProj->M[3][0] = v24;
}

void __fastcall Scaleform::Render::TreeCacheRoot::ChainUpdatesByDepth(Scaleform::Render::TreeCacheRoot *this)
{
  Scaleform::Render::TreeCacheNode *pUpdateList; // rbx
  Scaleform::Render::DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode *> *p_DepthUpdates; // rdi
  __int64 Depth; // rsi
  Scaleform::Render::TreeCacheNode *pNextUpdate; // rbp
  __int64 v6; // rdx
  unsigned int v7; // esi

  pUpdateList = this->pUpdateList;
  this->pUpdateList = 0i64;
  if ( pUpdateList )
  {
    p_DepthUpdates = &this->DepthUpdates;
    do
    {
      Depth = pUpdateList->Depth;
      pNextUpdate = pUpdateList->pNextUpdate;
      if ( (unsigned int)Depth < p_DepthUpdates->DepthAvailable
        || Scaleform::Render::DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode *>::grow(p_DepthUpdates, Depth + 1) )
      {
        v6 = Depth;
        v7 = Depth + 1;
        pUpdateList->pNextUpdate = p_DepthUpdates->pDepth[v6];
        p_DepthUpdates->pDepth[v6] = pUpdateList;
        if ( p_DepthUpdates->DepthUsed < v7 )
          p_DepthUpdates->DepthUsed = v7;
      }
      pUpdateList = pNextUpdate;
    }
    while ( pNextUpdate );
    this->DepthUpdatesChained = 1;
  }
  else
  {
    this->DepthUpdatesChained = 1;
  }
}

void __fastcall Scaleform::Render::TreeCacheMeshBase::ComputeFinalMatrix(
        Scaleform::Render::TreeCacheMeshBase *this,
        const Scaleform::Render::TransformArgs *t,
        Scaleform::Render::MatrixPoolImpl::MatrixPool *mpool,
        Scaleform::Render::TransformFlags flags)
{
  Scaleform::Render::MatrixPoolImpl::HMatrix *p_M; // rsi
  char v5; // di
  BOOL formatBits; // ebp
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  const Scaleform::Render::MatrixPoolImpl::HMatrix *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  Scaleform::Render::MatrixPoolImpl::HMatrix result; // [rsp+30h] [rbp-88h] BYREF
  Scaleform::Render::Matrix3x4<float> m; // [rsp+40h] [rbp-78h] BYREF

  p_M = &this->M;
  v5 = flags;
  if ( this->M.pHandle == &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
  {
    formatBits = !Scaleform::Render::Cxform::operator==(&t->Cx, &Scaleform::Render::Cxform::Identity);
    if ( v5 >= 0 )
    {
      v11 = Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(mpool, &result, &t->Mat, &t->Cx, formatBits);
    }
    else
    {
      if ( (v5 & 0x40) != 0 )
      {
        Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&m, &t->Mat3D, &t->Mat);
      }
      else
      {
        v9 = *(_OWORD *)&t->Mat3D.M[1][0];
        *(_OWORD *)&m.M[0][0] = *(_OWORD *)&t->Mat3D.M[0][0];
        v10 = *(_OWORD *)&t->Mat3D.M[2][0];
        *(_OWORD *)&m.M[1][0] = v9;
        *(_OWORD *)&m.M[2][0] = v10;
      }
      v11 = Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(mpool, &result, &m, &t->Cx, formatBits | 0x10u);
    }
    Scaleform::Render::MatrixPoolImpl::HMatrix::operator=(p_M, v11);
    if ( result.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
      Scaleform::Render::MatrixPoolImpl::DataHeader::Release(result.pHandle->pHeader);
  }
  else
  {
    if ( (flags & 0x80u) == 0 )
    {
      Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix2D(&this->M, &t->Mat);
    }
    else if ( (flags & 0x40) != 0 )
    {
      Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&m, &t->Mat3D, &t->Mat);
      Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix3D(p_M, &m);
    }
    else
    {
      v12 = *(_OWORD *)&t->Mat3D.M[1][0];
      *(_OWORD *)&m.M[0][0] = *(_OWORD *)&t->Mat3D.M[0][0];
      v13 = *(_OWORD *)&t->Mat3D.M[2][0];
      *(_OWORD *)&m.M[1][0] = v12;
      *(_OWORD *)&m.M[2][0] = v13;
      Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix3D(&this->M, &m);
    }
    if ( (v5 & 2) != 0 )
      Scaleform::Render::MatrixPoolImpl::HMatrix::SetCxform(p_M, &t->Cx);
  }
}

void __fastcall Scaleform::Render::TreeCacheRoot::Draw(
        Scaleform::Render::TreeCacheRoot *this,
        Scaleform::Render::HAL *hal)
{
  unsigned __int16 Flags; // cx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  const Scaleform::Render::Matrix2x4<float> *v7; // rax
  bool EnableBlendTarget; // r9
  float v9; // xmm8_4
  Scaleform::Render::Color backgroundColor; // [rsp+30h] [rbp-98h] BYREF
  __int64 v11[3]; // [rsp+38h] [rbp-90h] BYREF
  Scaleform::Render::Matrix2x4<float> viewMatrix; // [rsp+50h] [rbp-78h] BYREF

  Flags = this->Flags;
  if ( (Flags & 3) == 1 || (Flags & 0x40) != 0 )
  {
    v5 = (__int64)((unsigned __int128)((__int64)((__int64)&this->pNode[-1]
                                               - ((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64))
                                     * (__int128)0x4924924924924925i64) >> 64) >> 4;
    v6 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                   + 8 * ((unsigned int)v5 + (v5 >> 63))
                   + 40) & 0xFFFFFFFFFFFFFFFEui64;
    if ( *(_DWORD *)(v6 + 160) && *(_DWORD *)(v6 + 164) )
    {
      v7 = Scaleform::Render::TreeNode::NodeData::M2D((Scaleform::Render::TreeNode::NodeData *)v6);
      EnableBlendTarget = this->EnableBlendTarget;
      *(_OWORD *)&viewMatrix.M[0][0] = *(_OWORD *)&v7->M[0][0];
      *(_QWORD *)&viewMatrix.M[1][0] = *(_QWORD *)&v7->M[1][0];
      viewMatrix.M[1][2] = v7->M[1][2];
      v9 = v7->M[1][3] * 20.0;
      backgroundColor = *(Scaleform::Render::Color *)(v6 + 204);
      viewMatrix.M[1][3] = v9;
      viewMatrix.M[0][0] = viewMatrix.M[0][0] * 20.0;
      viewMatrix.M[0][1] = viewMatrix.M[0][1] * 20.0;
      viewMatrix.M[0][2] = viewMatrix.M[0][2] * 20.0;
      viewMatrix.M[0][3] = viewMatrix.M[0][3] * 20.0;
      viewMatrix.M[1][0] = viewMatrix.M[1][0] * 20.0;
      viewMatrix.M[1][1] = viewMatrix.M[1][1] * 20.0;
      viewMatrix.M[1][2] = viewMatrix.M[1][2] * 20.0;
      Scaleform::Render::HAL::BeginDisplay(
        hal,
        &backgroundColor.Raw,
        (const Scaleform::Render::Viewport *)(v6 + 160),
        EnableBlendTarget,
        &viewMatrix);
    }
    v11[0] = (__int64)this->CachedChildPattern.pFirst;
    v11[1] = (__int64)this->CachedChildPattern.pLast;
    hal->DrawBundleEntries(hal, (Scaleform::Render::BundleIterator *)v11);
    if ( *(_DWORD *)(v6 + 160) )
    {
      if ( *(_DWORD *)(v6 + 164) )
        Scaleform::Render::HAL::EndDisplay(hal);
    }
  }
}

bool __fastcall Scaleform::Render::Viewport::GetCullRectF(
        Scaleform::Render::Viewport *this,
        Scaleform::Render::Rect<float> *prect,
        bool orient)
{
  bool result; // al
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  Scaleform::Render::Rect<int> precta; // [rsp+20h] [rbp-18h] BYREF

  precta = 0i64;
  result = Scaleform::Render::Viewport::GetClippedRect<int>(this, &precta, orient);
  if ( result )
  {
    v6 = (float)(precta.y2 - this->Top);
    v7 = (float)(precta.x2 - this->Left);
    result = 1;
    v8 = (float)(precta.x1 - this->Left);
    prect->y1 = (float)(precta.y1 - this->Top);
    prect->x1 = v8;
    prect->x2 = v7;
    prect->y2 = v6;
  }
  return result;
}

void __fastcall Scaleform::Render::TransformArgs::GetMatrix3D(
        Scaleform::Render::TransformArgs *this,
        Scaleform::Render::TransformFlags flags,
        Scaleform::Render::Matrix3x4<float> *m)
{
  __int128 v3; // xmm1

  if ( (flags & 0x80u) == 0 )
  {
    v3 = *(_OWORD *)&this->Mat.M[1][0];
    *(_OWORD *)&m->M[0][0] = *(_OWORD *)&this->Mat.M[0][0];
    *(_OWORD *)&m->M[1][0] = v3;
    *(_OWORD *)&m->M[2][0] = _xmm;
  }
  else if ( (flags & 0x40) != 0 )
  {
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(m, &this->Mat3D, &this->Mat);
  }
  else
  {
    *m = this->Mat3D;
  }
}

bool __fastcall Scaleform::Render::TreeCacheContainer::GetPatternChain(
        Scaleform::Render::TreeCacheContainer *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::BundleEntryRange *range,
        __int64 flags)
{
  unsigned __int16 v6; // cx
  bool result; // al
  unsigned int v9; // ebp
  Scaleform::Render::CacheEffect *pEffect; // rcx
  Scaleform::Render::BundleEntryRange *p_CachedChildPattern; // rsi

  v6 = this->Flags;
  if ( (v6 & 3) != 1 && (v6 & 0x40) == 0 )
  {
    result = 0;
    range->pLast = 0i64;
    range->pFirst = 0i64;
    range->Length = 0;
    return result;
  }
  v9 = this->UpdateFlags & 0x7E0000;
  if ( this->CachedChildPattern.Length == 0x80000000 )
  {
    p_CachedChildPattern = &this->CachedChildPattern;
    Scaleform::Render::TreeCacheContainer::BuildChildPattern(this, hal, &this->CachedChildPattern, flags);
    goto LABEL_12;
  }
  if ( v9 )
  {
    p_CachedChildPattern = &this->CachedChildPattern;
    Scaleform::Render::BundleEntryRange::StripChainsByDepth(&this->CachedChildPattern, this->Depth);
LABEL_12:
    *(_OWORD *)&range->pFirst = *(_OWORD *)&p_CachedChildPattern->pFirst;
    *(_QWORD *)&range->Length = *(_QWORD *)&p_CachedChildPattern->Length;
    if ( v9 )
    {
      Scaleform::Render::CacheEffectChain::UpdateEffects(&this->Effects, hal, this, v9);
      this->UpdateFlags &= 0xFF81FFFF;
    }
    if ( p_CachedChildPattern->pFirst )
      Scaleform::Render::TreeCacheNode::updateEffectChain(this, hal, range);
    return (range->Length & 0x7FFFFFFF) != 0;
  }
  if ( this->CachedChildPattern.pFirst )
  {
    pEffect = this->Effects.pEffect;
    if ( pEffect )
    {
      ((void (__fastcall *)(Scaleform::Render::CacheEffect *, Scaleform::Render::BundleEntryRange *, Scaleform::Render::BundleEntryRange *, __int64))pEffect->GetRange)(
        pEffect,
        range,
        range,
        flags);
      Scaleform::Render::BundleEntryRange::StripChainsByDepth(range, this->Depth);
    }
    else
    {
      *range = this->CachedChildPattern;
      Scaleform::Render::BundleEntryRange::StripChainsByDepth(range, this->Depth);
    }
  }
  return (range->Length & 0x7FFFFFFF) != 0;
}

bool __fastcall Scaleform::Render::TreeCacheMeshBase::GetPatternChain(
        Scaleform::Render::TreeCacheMeshBase *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::BundleEntryRange *range,
        unsigned int __formal)
{
  unsigned __int16 Flags; // cx
  bool result; // al
  Scaleform::Render::CacheEffectChain *p_Effects; // rcx
  bool v10; // zf
  Scaleform::Render::Bundle *pObject; // rax
  Scaleform::Render::CacheEffectChain v12; // rcx

  Flags = this->Flags;
  if ( (Flags & 3) == 1 || (Flags & 0x40) != 0 )
  {
    range->Length = 1;
    range->pLast = &this->SorterShapeNode;
    p_Effects = &this->Effects;
    range->pFirst = &this->SorterShapeNode;
    v10 = this->Effects.pEffect == 0i64;
    this->SorterShapeNode.Removed = 0;
    if ( !v10 || (this->UpdateFlags & 0x7E0000) != 0 )
    {
      if ( (this->UpdateFlags & 0x7E0000) != 0 )
      {
        Scaleform::Render::CacheEffectChain::UpdateEffects(p_Effects, hal, this, this->UpdateFlags & 0x7E0000);
        Scaleform::Render::TreeCacheNode::updateEffectChain(this, hal, range);
        this->UpdateFlags &= 0xFF81FFFF;
      }
      else
      {
        v12.pEffect = p_Effects->pEffect;
        if ( v12.pEffect )
          ((void (__fastcall *)(Scaleform::Render::CacheEffectChain, Scaleform::Render::BundleEntryRange *))v12.pEffect->GetRange)(
            v12,
            range);
      }
      Scaleform::Render::BundleEntryRange::StripChainsByDepth(range, this->Depth);
      return 1;
    }
    else
    {
      pObject = this->SorterShapeNode.pBundle.pObject;
      if ( pObject )
        pObject->NeedUpdate = 1;
      result = 1;
      this->SorterShapeNode.pChain = 0i64;
      this->SorterShapeNode.ChainHeight = 0;
    }
  }
  else
  {
    result = 0;
    range->pLast = 0i64;
    range->pFirst = 0i64;
    range->Length = 0;
  }
  return result;
}

__int64 __fastcall Scaleform::Render::TreeCacheNode::GetPatternChain(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::BundleEntryRange *range,
        unsigned int flags)
{
  __int64 result; // rax

  result = 0i64;
  range->pLast = 0i64;
  range->pFirst = 0i64;
  range->Length = 0;
  return result;
}

__int64 __fastcall Scaleform::Render::TreeNodeArray::GetSize(Scaleform::Render::TreeNodeArray *this)
{
  __int64 result; // rax

  result = this->pData[0];
  if ( this->pData[0] )
  {
    if ( (result & 1) != 0 )
      return *(_QWORD *)((result & 0xFFFFFFFFFFFFFFFEui64) + 8);
    else
      return (this->pData[1] != 0) + 1i64;
  }
  return result;
}

Scaleform::Render::Matrix4x4<float> *__fastcall Scaleform::Render::TreeCacheNode::GetViewProj(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::Matrix4x4<float> *result)
{
  Scaleform::Render::StateBag *v3; // rbx
  Scaleform::Render::TreeNode *pNode; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  Scaleform::Render::StateBag *State; // rdi
  Scaleform::Render::TreeCacheNode **p_pParent; // rax
  Scaleform::Render::TreeCacheNode *v11; // rsi
  Scaleform::Render::TreeNode *v12; // r9
  Scaleform::Render::TreeNode *v13; // r9
  char *pData; // rcx
  Scaleform::Render::Matrix3x4<float> m2; // [rsp+20h] [rbp-98h] BYREF
  Scaleform::Render::Matrix4x4<float> m1; // [rsp+50h] [rbp-68h] BYREF

  v3 = 0i64;
  pNode = this->pNode;
  if ( !pNode )
  {
    v8 = 0i64;
LABEL_6:
    State = 0i64;
    goto LABEL_7;
  }
  v6 = *(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28);
  v7 = (__int64)((unsigned __int128)((__int64)((__int64)&pNode[-1] - ((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64))
                                   * (__int128)0x4924924924924925i64) >> 64) >> 4;
  v8 = *(_QWORD *)(v6 + 8 * ((unsigned int)v7 + (v7 >> 63)) + 40) & 0xFFFFFFFFFFFFFFFEui64;
  if ( !v8 || (*(_WORD *)(v8 + 10) & 0x800) == 0 )
    goto LABEL_6;
  State = Scaleform::Render::StateBag::GetState((Scaleform::Render::StateBag *)(v8 + 64), State_ViewMatrix3D);
LABEL_7:
  if ( v8 && (*(_WORD *)(v8 + 10) & 0x1000) != 0 )
    v3 = Scaleform::Render::StateBag::GetState((Scaleform::Render::StateBag *)(v8 + 64), State_ProjectionMatrix3D);
  p_pParent = &this->pParent;
  if ( this->pParent )
  {
    do
    {
      if ( State && v3 )
        break;
      v11 = *p_pParent;
      if ( !State )
      {
        v12 = v11->pNode;
        if ( (*(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                    + 8i64
                                    * (unsigned int)((int)(LODWORD(v11->pNode) - ((unsigned int)v12 & 0xFFFFF000) - 56)
                                                   / 56)
                                    + 40) & 0xFFFFFFFFFFFFFFFEui64)
                       + 10) & 0x800) != 0 )
          State = Scaleform::Render::StateBag::GetState(
                    (Scaleform::Render::StateBag *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFF000ui64)
                                                                           + 0x28)
                                                               + 8i64
                                                               * (unsigned int)((int)((_DWORD)v12
                                                                                    - ((unsigned int)v12 & 0xFFFFF000)
                                                                                    - 56)
                                                                              / 56)
                                                               + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                                  + 64),
                    State_ViewMatrix3D);
      }
      if ( !v3 )
      {
        v13 = v11->pNode;
        if ( (*(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                    + 8i64
                                    * (unsigned int)((int)(LODWORD(v11->pNode) - ((unsigned int)v13 & 0xFFFFF000) - 56)
                                                   / 56)
                                    + 40) & 0xFFFFFFFFFFFFFFFEui64)
                       + 10) & 0x1000) != 0 )
          v3 = Scaleform::Render::StateBag::GetState(
                 (Scaleform::Render::StateBag *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFF000ui64)
                                                                        + 0x28)
                                                            + 8i64
                                                            * (unsigned int)((int)((_DWORD)v13
                                                                                 - ((unsigned int)v13 & 0xFFFFF000)
                                                                                 - 56)
                                                                           / 56)
                                                            + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                               + 64),
                 State_ProjectionMatrix3D);
      }
      p_pParent = &v11->pParent;
    }
    while ( v11->pParent );
  }
  if ( State && v3 )
  {
    pData = (char *)v3->pData;
    m2 = *(Scaleform::Render::Matrix3x4<float> *)(State->DataValue + 16);
    m1 = *(Scaleform::Render::Matrix4x4<float> *)(pData + 16);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(result, &m1, &m2);
  }
  else
  {
    *result = Scaleform::Render::Matrix4x4<float>::Identity;
  }
  return result;
}

void __fastcall Scaleform::Render::TreeCacheContainer::HandleChanges(
        Scaleform::Render::TreeCacheContainer *this,
        Scaleform::Render::HAL *hal,
        unsigned int changeBits)
{
  __int16 v3; // bx
  Scaleform::Render::TreeCacheNode *pParent; // rcx
  unsigned int v7; // er9
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  char v10; // r9
  __int64 v11; // rdx
  _QWORD *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  Scaleform::Render::TreeCacheNode *pNext; // rbx
  unsigned int v16; // er14
  unsigned __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v19; // rbp
  Scaleform::Render::TreeCacheContainer *v20; // rdi
  Scaleform::Render::TreeCacheNode *v21; // rdi
  Scaleform::Render::Rect<float> *v22; // rcx
  Scaleform::Render::TreeCacheRoot *pRoot; // rcx
  int v24; // eax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  Scaleform::Render::Rect<float> *p_SortParentBounds; // rcx
  Scaleform::Render::Rect<float> *v31; // rbp
  Scaleform::Render::TreeCacheNode *v32; // rdi
  Scaleform::Render::TreeCacheRoot *v33; // rcx
  int v34; // [rsp+28h] [rbp-40h]
  _QWORD *v35; // [rsp+30h] [rbp-38h]
  unsigned __int64 v36; // [rsp+88h] [rbp+20h]

  v3 = changeBits;
  if ( (changeBits & 0x20) != 0 )
  {
    pParent = this->pParent;
    if ( pParent )
    {
      v7 = pParent->Flags & 0xC;
      if ( v7 == 12 )
      {
        v8 = 12i64;
LABEL_8:
        this->propagateEdgeAA(this, hal, (Scaleform::Render::EdgeAAMode)v8);
        goto LABEL_9;
      }
    }
    else
    {
      v7 = 4;
    }
    v9 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                   + 8i64
                   * (unsigned int)((__int64)((__int64)&this->pNode[-1]
                                            - ((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64))
                                  / 56)
                   + 40) & 0xFFFFFFFFFFFFFFFEui64;
    v8 = *(_WORD *)(v9 + 10) & 0xC;
    if ( (*(_WORD *)(v9 + 10) & 0xC) == 0 )
      v8 = v7;
    goto LABEL_8;
  }
LABEL_9:
  if ( (v3 & 0x300) != 0 )
  {
    v10 = 0;
    v11 = 0i64;
    v12 = (_QWORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                + 8i64
                                * (unsigned int)((int)((int)&this->pNode[-1] - ((__int64)this->pNode & 0xFFFFF000)) / 56)
                                + 40) & 0xFFFFFFFFFFFFFFFEui64)
                   + 144);
    v35 = v12;
    v13 = *v12;
    if ( *v12 )
    {
      if ( (v13 & 1) != 0 )
        v14 = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFFEui64) + 8);
      else
        v14 = (*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                      + 8i64
                                      * (unsigned int)((int)((int)&this->pNode[-1] - ((__int64)this->pNode & 0xFFFFF000))
                                                     / 56)
                                      + 40) & 0xFFFFFFFFFFFFFFFEui64)
                         + 152) != 0i64)
            + 1i64;
      v36 = v14;
    }
    else
    {
      v14 = 0i64;
      v36 = 0i64;
    }
    pNext = this->Children.Root.pNext;
    v16 = 0;
    if ( v14 )
    {
      do
      {
        if ( (*(_BYTE *)v12 & 1) != 0 )
          v17 = (*v12 & 0xFFFFFFFFFFFFFFFEui64) + 16;
        else
          v17 = (unsigned __int64)v12;
        v18 = *(_QWORD *)(v17 + 8i64 * v16);
        v19 = *(_QWORD *)(v18 + 24);
        if ( (Scaleform::Render::TreeCacheNode *)v19 == pNext )
        {
          pNext = pNext->pNext;
        }
        else
        {
          if ( !v19 )
            goto LABEL_35;
          v20 = *(Scaleform::Render::TreeCacheContainer **)(v19 + 48);
          if ( v20 != this || !*(_QWORD *)(v19 + 16) )
          {
            if ( v20 )
            {
              Scaleform::Render::TreeCacheNode::RemoveFromParent(*(Scaleform::Render::TreeCacheNode **)(v18 + 24), hal);
              pRoot = v20->pRoot;
              if ( pRoot )
              {
                v24 = 0x1000000;
                if ( (v20->UpdateFlags & 0x80000000) == 0 )
                {
                  v20->pNextUpdate = pRoot->pUpdateList;
                  v24 = -2130706432;
                  pRoot->pUpdateList = v20;
                }
                v20->UpdateFlags |= v24;
              }
            }
LABEL_35:
            v25 = *(_QWORD *)(*(_QWORD *)((v18 & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                            + 8i64 * (unsigned int)((int)(v18 - (v18 & 0xFFFFF000) - 56) / 56)
                            + 40) & 0xFFFFFFFFFFFFFFFEui64;
            LOWORD(v34) = this->Depth + 1;
            v26 = (*(__int64 (__fastcall **)(unsigned __int64, Scaleform::Render::HAL *, Scaleform::Render::TreeCacheContainer *, Scaleform::Render::TreeCacheNode *, __int64, int))(*(_QWORD *)v25 + 48i64))(
                    v25,
                    hal,
                    this,
                    pNext->pPrev,
                    v18,
                    v34);
            v27 = v26;
            if ( v26 )
            {
              v28 = *(_QWORD *)(v26 + 32);
              if ( v28 )
              {
                v29 = 3;
                if ( *(int *)(v27 + 76) >= 0 )
                {
                  *(_QWORD *)(v27 + 80) = *(_QWORD *)(v28 + 176);
                  v29 = -2147483645;
                  *(_QWORD *)(v28 + 176) = v27;
                }
                *(_DWORD *)(v27 + 76) |= v29;
              }
            }
            v11 = 0i64;
            p_SortParentBounds = &this->SortParentBounds;
            v10 = 1;
            if ( this == (Scaleform::Render::TreeCacheContainer *)-112i64 )
              p_SortParentBounds = 0i64;
            if ( pNext != (Scaleform::Render::TreeCacheNode *)p_SortParentBounds && pNext->pParent != this )
            {
              pNext = this->Children.Root.pNext;
              v16 = -1;
            }
            goto LABEL_45;
          }
          do
          {
            v21 = pNext->pNext;
            Scaleform::Render::TreeCacheNode::RemoveFromParent(pNext, hal);
            pNext = v21;
            if ( v21 == (Scaleform::Render::TreeCacheNode *)v19 )
              break;
            v22 = &this->SortParentBounds;
            if ( this == (Scaleform::Render::TreeCacheContainer *)-112i64 )
              v22 = 0i64;
          }
          while ( v21 != (Scaleform::Render::TreeCacheNode *)v22 );
          v12 = v35;
          --v16;
          v11 = 0i64;
          v10 = 1;
        }
LABEL_45:
        ++v16;
      }
      while ( v16 < v36 );
    }
    v31 = &this->SortParentBounds;
    if ( this == (Scaleform::Render::TreeCacheContainer *)-112i64 )
      v31 = 0i64;
    while ( pNext != (Scaleform::Render::TreeCacheNode *)v31 )
    {
      v32 = pNext->pNext;
      Scaleform::Render::TreeCacheNode::RemoveFromParent(pNext, hal);
      v10 = 1;
      pNext = v32;
    }
    if ( v10
      && ((unsigned __int8 (__fastcall *)(Scaleform::Render::TreeCacheContainer *, __int64))this->IsPatternChainValid)(
           this,
           v11) )
    {
      v33 = this->pRoot;
      if ( (this->UpdateFlags & 0x80000000) != 0 )
      {
        this->UpdateFlags |= 0x1000000u;
      }
      else
      {
        this->pNextUpdate = v33->pUpdateList;
        v33->pUpdateList = this;
        this->UpdateFlags |= 0x81000000;
      }
    }
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::Render::TreeCacheRoot::HandleChanges(
        Scaleform::Render::TreeCacheRoot *this,
        Scaleform::Render::HAL *hal,
        unsigned int changeBits)
{
  Scaleform::Render::TreeNode *pNode; // r10

  if ( (changeBits & 0x1000) != 0 )
  {
    pNode = this->pNode;
    if ( (*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                    + 8i64 * (unsigned int)((int)((_DWORD)pNode - ((unsigned int)pNode & 0xFFFFF000) - 56) / 56)
                    + 40) & 0xFFFFFFFFFFFFFFFEui64) != 0 )
      this->ViewValid = Scaleform::Render::Viewport::GetCullRectF(
                          (Scaleform::Render::Viewport *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                                 + 0x28)
                                                                     + 8i64
                                                                     * (unsigned int)((int)((_DWORD)pNode
                                                                                          - ((unsigned int)pNode & 0xFFFFF000)
                                                                                          - 56)
                                                                                    / 56)
                                                                     + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                                        + 160),
                          &this->ViewCullRect,
                          0);
  }
  Scaleform::Render::TreeCacheContainer::HandleChanges(this, hal, changeBits & 0xFFFFEFFF);
}

void __fastcall Scaleform::Render::TreeCacheContainer::HandleRemoveNode(Scaleform::Render::TreeCacheContainer *this)
{
  Scaleform::Render::TreeCacheNode *pMask; // rcx
  bool v3; // zf
  Scaleform::Render::TreeCacheNode *pNext; // rbx
  Scaleform::Render::Rect<float> *p_SortParentBounds; // rdi

  this->pRoot = 0i64;
  pMask = this->pMask;
  if ( pMask )
    pMask->HandleRemoveNode(pMask);
  this->CachedChildPattern.pLast = 0i64;
  this->CachedChildPattern.pFirst = 0i64;
  v3 = &this->Children == 0i64;
  this->CachedChildPattern.Length = 0x80000000;
  pNext = this->Children.Root.pNext;
  p_SortParentBounds = &this->SortParentBounds;
  if ( v3 )
    p_SortParentBounds = 0i64;
  while ( pNext != (Scaleform::Render::TreeCacheNode *)p_SortParentBounds )
  {
    pNext->HandleRemoveNode(pNext);
    pNext = pNext->pNext;
  }
}

void __fastcall Scaleform::Render::TreeCacheNode::HandleRemoveNode(Scaleform::Render::TreeCacheNode *this)
{
  Scaleform::Render::TreeCacheNode *pMask; // rcx

  this->pRoot = 0i64;
  pMask = this->pMask;
  if ( pMask )
    pMask->HandleRemoveNode(pMask);
}

bool __fastcall Scaleform::Render::Rect<float>::IntersectRect(
        Scaleform::Render::Rect<float> *this,
        Scaleform::Render::Rect<float> *pdest,
        const Scaleform::Render::Rect<float> *r)
{
  bool result; // al

  if ( this->y2 < r->y1 || r->y2 < this->y1 || r->x2 < this->x1 || this->x2 < r->x1 )
    return 0;
  result = 1;
  pdest->x1 = fmaxf(this->x1, r->x1);
  pdest->x2 = fminf(r->x2, this->x2);
  pdest->y1 = fmaxf(this->y1, r->y1);
  pdest->y2 = fminf(r->y2, this->y2);
  return result;
}

bool __fastcall Scaleform::Render::FixedSizeArrayRect2F::Intersects(
        Scaleform::Render::FixedSizeArrayRect2F *this,
        const Scaleform::Render::Rect<float> *bounds)
{
  Scaleform::Render::Rect<float> v4; // xmm2
  unsigned __int64 v5; // rcx
  bool HalfRect; // r9
  unsigned __int64 Size; // r8
  __m128 v8; // xmm5
  __m128 v9; // xmm2
  Scaleform::Render::Rect2F *pData; // rdx
  __m128 v11; // xmm1
  __m128 *v13; // rcx
  __m128 *v14; // rcx
  __m128 *v15; // rcx

  if ( bounds->x1 >= bounds->x2 || bounds->y1 >= bounds->y2 )
    return 0;
  if ( dword_140A72450 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&dword_140A72450);
    if ( dword_140A72450 == -1 )
    {
      c0000 = Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,0>(v13);
      c1100 = Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,4294967295,0,0>(v14);
      c0011 = Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,4294967295,4294967295>(v15);
      Init_thread_footer(&dword_140A72450);
    }
  }
  v4 = *bounds;
  v5 = 0i64;
  HalfRect = this->HalfRect;
  Size = this->Size;
  v8 = _mm_shuffle_ps((__m128)v4, (__m128)v4, 68);
  v9 = _mm_shuffle_ps((__m128)v4, (__m128)v4, 238);
  if ( HalfRect )
    --Size;
  if ( Size )
  {
    pData = this->pData;
    do
    {
      v11 = _mm_or_ps(_mm_cmple_ps(pData->r1, v8), _mm_cmple_ps(v9, pData->r0));
      if ( (_mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps(c1100, v11), c0000)) & 0xF) == 15
        || (_mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps(c0011, v11), c0000)) & 0xF) == 15 )
      {
        return 1;
      }
      ++v5;
      ++pData;
    }
    while ( v5 < Size );
  }
  return HalfRect
      && (_mm_movemask_ps(
            _mm_cmpeq_ps(
              _mm_and_ps(_mm_or_ps(_mm_cmple_ps(this->pData[v5].r1, v8), _mm_cmple_ps(v9, this->pData[v5].r0)), c1100),
              c0000)) & 0xF) == 15;
}

bool __fastcall Scaleform::Render::TreeCacheContainer::IsPatternChainValid(Scaleform::Render::TreeCacheContainer *this)
{
  return this->CachedChildPattern.Length != 0x80000000;
}

void __fastcall Scaleform::Render::DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode *>::Link(
        Scaleform::Render::DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode *> *this,
        unsigned int index,
        Scaleform::Render::TreeCacheNode **pnext,
        Scaleform::Render::TreeCacheNode *val)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned int v9; // edi

  v7 = index;
  if ( index < this->DepthAvailable
    || Scaleform::Render::DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode *>::grow(this, index + 1) )
  {
    v8 = v7;
    v9 = v7 + 1;
    *pnext = this->pDepth[v8];
    this->pDepth[v8] = val;
    if ( this->DepthUsed < v9 )
      this->DepthUsed = v9;
  }
}

bool __fastcall Scaleform::Render::SortKey::MatchSingleItemOverlap(
        Scaleform::Render::SortKey *this,
        const Scaleform::Render::SortKey *other)
{
  unsigned int Flags; // er8

  Flags = this->pImpl->Flags;
  if ( (Flags & 0x8000) != 0 )
    return 0;
  return this->Data == other->Data && this->pImpl == other->pImpl && (Flags & 0x4000) != 0;
}

void __fastcall Scaleform::Render::TreeCacheNode::RemoveFromParent(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::HAL *hal)
{
  Scaleform::Render::TreeCacheNode *pParent; // rax
  bool v5; // zf

  if ( this->pPrev )
  {
    this->pPrev->pNext = this->pNext;
    this->pNext->pPrev = this->pPrev;
    this->pPrev = (Scaleform::Render::TreeCacheNode *)-1i64;
    this->pNext = (Scaleform::Render::TreeCacheNode *)-1i64;
  }
  else
  {
    pParent = this->pParent;
    if ( pParent )
    {
      pParent->pMask = 0i64;
      pParent->Flags &= ~0x10u;
      this->Flags &= ~0x20u;
    }
  }
  v5 = (this->Flags & 0x40) == 0;
  this->pPrev = 0i64;
  this->pNext = 0i64;
  this->pParent = 0i64;
  this->Depth = 0;
  if ( !v5 )
    this->propagateMaskFlag(this, hal, 0);
  if ( SLOBYTE(this->Flags) < 0 )
    this->propagateScale9Flag(this, hal, 0);
  this->HandleRemoveNode(this);
}

void __fastcall Scaleform::Render::TransformArgs::SetViewProj(
        Scaleform::Render::TransformArgs *this,
        const Scaleform::Render::TreeNode::NodeData *data,
        const Scaleform::Render::TransformArgs *t)
{
  Scaleform::Render::StateBag *v5; // rsi
  Scaleform::Render::StateBag *State; // rbp

  if ( t )
  {
    this->viewState = t->viewState;
    this->projState = t->projState;
    this->bRecomputeViewProj = t->bRecomputeViewProj;
    this->ViewProj = t->ViewProj;
  }
  if ( data )
  {
    v5 = 0i64;
    if ( (data->Flags & 0x800) != 0 )
      State = Scaleform::Render::StateBag::GetState(&data->States, State_ViewMatrix3D);
    else
      State = 0i64;
    if ( (data->Flags & 0x1000) != 0 )
      v5 = Scaleform::Render::StateBag::GetState(&data->States, State_ProjectionMatrix3D);
    if ( State )
    {
      this->viewState = (const Scaleform::Render::ViewMatrix3DState *)State;
      this->bRecomputeViewProj = 1;
    }
    if ( v5 )
    {
      this->projState = (const Scaleform::Render::ProjectionMatrix3DState *)v5;
      this->bRecomputeViewProj = 1;
    }
  }
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::TransformBounds3D(
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix4x4<float> *viewproj,
        const Scaleform::Render::Viewport *vp,
        const Scaleform::Render::Matrix3x4<float> *viewMatrix,
        const Scaleform::Render::Rect<float> *inputBounds,
        bool orient)
{
  int Height; // eax
  __m128i v9; // xmm3
  __m128i v10; // xmm2
  float v11; // xmm3_4
  Scaleform::Render::Rect<float> *v12; // rax
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm5_4
  Scaleform::Render::Rect<float> pr; // [rsp+20h] [rbp-78h] BYREF
  Scaleform::Render::Matrix4x4<float> v17; // [rsp+30h] [rbp-68h] BYREF

  pr = 0i64;
  Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&v17, viewproj, viewMatrix);
  Scaleform::Render::Matrix4x4<float>::EncloseTransformHomogeneous(&v17, &pr, inputBounds);
  if ( (((vp->Flags & 0x30) - 16) & 0xFFFFFFDF) != 0 || !orient )
  {
    Height = vp->Height;
    v9 = _mm_cvtsi32_si128(vp->Width);
  }
  else
  {
    Height = vp->Width;
    v9 = _mm_cvtsi32_si128(vp->Height);
  }
  v10 = _mm_cvtsi32_si128(Height);
  v11 = _mm_cvtepi32_ps(v9).m128_f32[0];
  v12 = result;
  *(float *)v10.m128i_i32 = _mm_cvtepi32_ps(v10).m128_f32[0];
  v13 = (float)((float)(pr.x2 + 1.0) * v11) * 0.5;
  result->x1 = (float)((float)(pr.x1 + 1.0) * v11) * 0.5;
  v14 = 1.0 - pr.y2;
  v15 = 1.0 - pr.y1;
  result->x2 = v13;
  result->y1 = (float)(v14 * *(float *)v10.m128i_i32) * 0.5;
  result->y2 = (float)(v15 * *(float *)v10.m128i_i32) * 0.5;
  return v12;
}

void __fastcall Scaleform::Render::TreeCacheContainer::UpdateBundlePattern(
        Scaleform::Render::TreeCacheContainer *this,
        Scaleform::Render::HAL *hal,
        unsigned int flags)
{
  __int64 v6; // xmm7_8
  Scaleform::Render::BundleEntry *pFirst; // rsi
  __m128i v8; // xmm6
  Scaleform::Render::TreeCacheNode *pMask; // rcx
  Scaleform::Render::CacheEffect *pEffect; // rdx
  Scaleform::Render::BundleEntryRange *v11; // r9
  unsigned __int16 v12; // cx
  unsigned int v13; // ecx
  Scaleform::Render::TreeCacheNode *pParent; // rcx
  Scaleform::Render::TreeCacheNode *v15; // rdx
  Scaleform::Render::TreeCacheRoot *pRoot; // rcx
  Scaleform::Render::BundleEntryRange pattern; // [rsp+20h] [rbp-78h] BYREF
  __int128 v18; // [rsp+38h] [rbp-60h] BYREF
  int v19; // [rsp+48h] [rbp-50h]
  Scaleform::Render::BundleEntryRange chain; // [rsp+50h] [rbp-48h] BYREF

  if ( this->IsPatternChainValid(this) )
  {
    pattern.Length = 0x80000000;
    *(_OWORD *)&pattern.pFirst = 0i64;
    Scaleform::Render::TreeCacheContainer::BuildChildPattern(this, hal, &pattern, flags);
    v6 = *(_QWORD *)&pattern.Length;
    pFirst = pattern.pFirst;
    v8 = _mm_loadu_si128((const __m128i *)&pattern);
    if ( this->Effects.pEffect && pattern.pFirst )
    {
      pMask = this->pMask;
      *(_QWORD *)&chain.Length = *(_QWORD *)&pattern.Length;
      *(__m128i *)&chain.pFirst = v8;
      if ( pMask )
      {
        v19 = 0;
        v18 = 0i64;
        pMask->GetPatternChain(pMask, hal, (Scaleform::Render::BundleEntryRange *)&v18, 0);
        pEffect = this->Effects.pEffect;
        if ( pEffect )
        {
          v11 = (Scaleform::Render::BundleEntryRange *)&v18;
LABEL_9:
          Scaleform::Render::CacheEffectChain::updateBundleChain(&this->Effects, pEffect, &chain, v11);
        }
      }
      else
      {
        pEffect = this->Effects.pEffect;
        if ( pEffect )
        {
          v11 = 0i64;
          goto LABEL_9;
        }
      }
    }
    v12 = this->Flags;
    if ( (v12 & 3) != 1 && (v12 & 0x40) == 0 )
      goto LABEL_26;
    v13 = this->CachedChildPattern.Length & 0x7FFFFFFF;
    if ( v13 > 8
      && (pattern.Length & 0x7FFFFFFF) > 8
      && this->CachedChildPattern.pFirst == pFirst
      && this->CachedChildPattern.pLast == (Scaleform::Render::BundleEntry *)_mm_srli_si128(v8, 8).m128i_i64[0] )
    {
      if ( v13 == (pattern.Length & 0x7FFFFFFF) )
        goto LABEL_26;
      pParent = this->pParent;
      if ( !pParent )
        goto LABEL_26;
      if ( !pParent->IsPatternChainValid(pParent) )
        goto LABEL_26;
      v15 = this->pParent;
      if ( (v15->UpdateFlags & 0x3000000) != 0 )
        goto LABEL_26;
      pRoot = this->pRoot;
      if ( !pRoot )
        goto LABEL_26;
    }
    else
    {
      pRoot = this->pRoot;
      if ( !pRoot )
      {
LABEL_26:
        *(__m128i *)&this->CachedChildPattern.pFirst = v8;
        *(_QWORD *)&this->CachedChildPattern.Length = v6;
        return;
      }
      v15 = this->pParent;
    }
    if ( v15 )
      Scaleform::Render::TreeCacheRoot::AddToDepthUpdate(pRoot, v15, 0x1000000u);
    goto LABEL_26;
  }
}

void __fastcall Scaleform::Render::TreeCacheMeshBase::UpdateBundlePattern(
        Scaleform::Render::TreeCacheMeshBase *this,
        Scaleform::Render::HAL *hal,
        unsigned int __formal)
{
  Scaleform::Render::TreeCacheNode *pMask; // r10
  Scaleform::Render::CacheEffectChain *p_Effects; // rbx
  Scaleform::Render::BundleEntryRange maskChain; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::Render::BundleEntryRange chain; // [rsp+38h] [rbp-20h] BYREF

  pMask = this->pMask;
  if ( pMask )
  {
    p_Effects = &this->Effects;
    if ( this->Effects.pEffect )
    {
      chain.Length = 1;
      chain.pLast = &this->SorterShapeNode;
      chain.pFirst = &this->SorterShapeNode;
      memset(&maskChain, 0, 20);
      pMask->GetPatternChain(pMask, hal, &maskChain, 0);
      if ( p_Effects->pEffect )
        Scaleform::Render::CacheEffectChain::updateBundleChain(p_Effects, p_Effects->pEffect, &chain, &maskChain);
    }
  }
}

void __fastcall Scaleform::Render::TreeCacheContainer::UpdateChildSubtree(
        Scaleform::Render::TreeCacheContainer *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::TreeNode::NodeData *pdata,
        unsigned __int16 depth)
{
  Scaleform::Render::TreeNodeArray *v8; // rbx
  unsigned __int64 v9; // rdi
  Scaleform::Render::TreeCacheNode *i; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+28h] [rbp-20h]

  Scaleform::Render::TreeCacheNode::UpdateChildSubtree(this, hal, pdata, depth);
  v8 = (Scaleform::Render::TreeNodeArray *)&pdata[1];
  v9 = 0i64;
  for ( i = this->Children.Root.pNext->pPrev;
        v9 < Scaleform::Render::TreeNodeArray::GetSize(v8);
        i = (Scaleform::Render::TreeCacheNode *)(*(__int64 (__fastcall **)(unsigned __int64, Scaleform::Render::HAL *, Scaleform::Render::TreeCacheContainer *, Scaleform::Render::TreeCacheNode *, __int64, int))(*(_QWORD *)v12 + 48i64))(
                                                  v12,
                                                  hal,
                                                  this,
                                                  i,
                                                  v13,
                                                  v14) )
  {
    if ( ((__int64)v8->pNodes[0] & 1) != 0 )
      v11 = (v8->pData[0] & 0xFFFFFFFFFFFFFFFEui64) + 16;
    else
      v11 = (unsigned __int64)v8;
    LOWORD(v14) = depth;
    v13 = *(_QWORD *)(v11 + 8 * v9);
    v12 = *(_QWORD *)(*(_QWORD *)((v13 & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                    + 8i64 * (unsigned int)((int)(v13 - (*(_DWORD *)(v11 + 8 * v9++) & 0xFFFFF000) - 56) / 56)
                    + 40) & 0xFFFFFFFFFFFFFFFEui64;
  }
}

void __fastcall Scaleform::Render::TreeCacheNode::UpdateChildSubtree(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::TreeNode::NodeData *data,
        unsigned __int16 depth)
{
  unsigned __int16 v8; // bx
  Scaleform::Render::TreeCacheNode *pParent; // rax

  v8 = this->Flags ^ ((unsigned __int8)this->Flags ^ (unsigned __int8)(2 * this->Flags)) & 0x40;
  if ( Scaleform::Render::StateBag::GetState(&data->States, State_Scale9) )
    v8 |= 0x80u;
  pParent = this->pParent;
  if ( pParent )
    v8 |= pParent->Flags & 0xC0;
  if ( (data->Flags & 0x200) != 0 )
    v8 |= 0x200u;
  this->Flags = v8;
  Scaleform::Render::TreeCacheNode::updateMaskCache(this, hal, data, depth, 1);
}

void __fastcall Scaleform::Render::TreeCacheNode::UpdateInsertIntoParent(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TreeCacheNode *pparent,
        Scaleform::Render::TreeCacheNode *pinsert,
        const Scaleform::Render::TreeNode::NodeData *nodeData,
        unsigned __int16 depth)
{
  Scaleform::Render::TreeCacheNode *v6; // rbx
  int v11; // eax
  Scaleform::Render::TreeCacheRoot *pRoot; // rcx
  Scaleform::Render::TreeCacheNode *pMask; // rcx
  Scaleform::Render::TreeCacheNode_vtbl *v14; // rax
  int v15; // ebx

  v6 = this->pParent;
  if ( v6 == pparent )
  {
    if ( pinsert )
    {
      if ( pparent->pMask != this )
        goto LABEL_24;
    }
    else if ( pparent->pMask == this )
    {
      goto LABEL_24;
    }
  }
  if ( v6 )
  {
    Scaleform::Render::TreeCacheNode::RemoveFromParent(this, hal);
    if ( v6->pRoot )
    {
      if ( v6->IsPatternChainValid(v6) )
      {
        v11 = 0x1000000;
        pRoot = v6->pRoot;
        if ( (v6->UpdateFlags & 0x80000000) == 0 )
        {
          v6->pNextUpdate = pRoot->pUpdateList;
          v11 = -2130706432;
          pRoot->pUpdateList = v6;
        }
        v6->UpdateFlags |= v11;
      }
    }
  }
  if ( pinsert )
  {
    this->pPrev = pinsert->pNext->pPrev;
    this->pNext = pinsert->pNext;
    pinsert->pNext->pPrev = this;
    pinsert->pNext = this;
  }
  if ( nodeData )
  {
    if ( (nodeData->Flags & 0x20) != 0 )
    {
      pMask = pparent->pMask;
      if ( pMask && pMask != this )
        Scaleform::Render::TreeCacheNode::RemoveFromParent(pMask, hal);
      pparent->Flags |= 0x10u;
      pparent->pMask = this;
      v14 = this->__vftable;
      this->Flags |= 0x20u;
      v14->propagateMaskFlag(this, hal, 64u);
    }
    v15 = pparent->Flags & 0x80;
    if ( Scaleform::Render::StateBag::GetState(&nodeData->States, State_Scale9) )
      v15 = 128;
    this->propagateScale9Flag(this, hal, v15);
    this->propagateEdgeAA(this, hal, (Scaleform::Render::EdgeAAMode)(pparent->Flags & 0xC));
  }
  this->pParent = pparent;
LABEL_24:
  this->Depth = depth;
  this->pRoot = pparent->pRoot;
  this->UpdateChildSubtree(this, hal, nodeData, depth + 1);
}

void __fastcall Scaleform::Render::TreeCacheContainer::UpdateTransform(
        Scaleform::Render::TreeCacheContainer *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::TreeNode::NodeData *pbaseData,
        const Scaleform::Render::TransformArgs *t,
        Scaleform::Render::TransformFlags flags)
{
  Scaleform::Render::Rect<float> v5; // xmm0
  __int128 v7; // xmm1
  const Scaleform::Render::TreeNode::NodeData *v8; // r13
  bool bRecomputeViewProj; // al
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  Scaleform::Render::TransformFlags updated; // er15
  float y2; // xmm2_4
  Scaleform::Render::TreeCacheNode *pNext; // r12
  Scaleform::Render::Rect<float> *p_SortParentBounds; // rcx
  unsigned __int64 v18; // rdx
  Scaleform::Render::TreeNode::NodeData *v19; // r14
  char UpdateFlags; // si
  int v21; // esi
  const Scaleform::Render::Matrix2x4<float> *v22; // rax
  int v23; // esi
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  bool v29; // bl
  Scaleform::Render::StateBag *State; // rax
  Scaleform::Render::FilterSet *Log; // rax
  Scaleform::Render::StateBag *v32; // rax
  Scaleform::Render::StateBag *v33; // r13
  Scaleform::Render::TreeCacheRoot *pRoot; // rax
  Scaleform::Render::Rect<float> *v38; // [rsp+48h] [rbp-B8h]
  __int128 v39; // [rsp+50h] [rbp-B0h]
  Scaleform::Render::TransformArgs cullRect; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::Render::Matrix3x4<float> m1; // [rsp+160h] [rbp+60h] BYREF
  Scaleform::Render::Matrix3x4<float> v42; // [rsp+190h] [rbp+90h] BYREF

  v5 = t->CullRect;
  v7 = *(_OWORD *)&t->ViewProj.M[1][0];
  cullRect.viewState = t->viewState;
  v8 = pbaseData;
  cullRect.projState = t->projState;
  bRecomputeViewProj = t->bRecomputeViewProj;
  cullRect.CullRect = v5;
  v11 = *(_OWORD *)&t->ViewProj.M[0][0];
  cullRect.bRecomputeViewProj = bRecomputeViewProj;
  *(_OWORD *)&cullRect.ViewProj.M[0][0] = v11;
  v12 = *(_OWORD *)&t->ViewProj.M[2][0];
  *(_OWORD *)&cullRect.ViewProj.M[1][0] = v7;
  v13 = *(_OWORD *)&t->ViewProj.M[3][0];
  *(_OWORD *)&cullRect.ViewProj.M[2][0] = v12;
  *(_OWORD *)&cullRect.ViewProj.M[3][0] = v13;
  updated = Scaleform::Render::TreeCacheNode::updateCulling(this, hal, pbaseData, t, &cullRect.CullRect, flags);
  y2 = v8->AproxParentBounds.y2;
  *(float *)&v13 = v8->AproxParentBounds.x2;
  *(float *)&v12 = v8->AproxParentBounds.y1;
  this->SortParentBounds.x1 = v8->AproxParentBounds.x1;
  LODWORD(this->SortParentBounds.y1) = v12;
  LODWORD(this->SortParentBounds.x2) = v13;
  this->SortParentBounds.y2 = y2;
  this->Flags &= ~0x400u;
  pNext = this->Children.Root.pNext;
  p_SortParentBounds = &this->SortParentBounds;
  if ( this == (Scaleform::Render::TreeCacheContainer *)-112i64 )
    p_SortParentBounds = 0i64;
  v38 = p_SortParentBounds;
  while ( pNext != (Scaleform::Render::TreeCacheNode *)p_SortParentBounds )
  {
    v18 = (__int64)((unsigned __int128)((__int64)((__int64)&pNext->pNode[-1]
                                                - ((unsigned __int64)pNext->pNode & 0xFFFFFFFFFFFFF000ui64))
                                      * (__int128)0x4924924924924925i64) >> 64) >> 4;
    v19 = (Scaleform::Render::TreeNode::NodeData *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNext->pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                          + 0x28)
                                                              + 8 * ((unsigned int)v18 + (v18 >> 63))
                                                              + 40) & 0xFFFFFFFFFFFFFFFEui64);
    UpdateFlags = pNext->UpdateFlags;
    pNext->UpdateFlags &= 0xFFFFFFFC;
    v21 = updated | UpdateFlags & 3;
    if ( (v19->Flags & 0x200) != 0 )
    {
      if ( (updated & 0x40) != 0 )
      {
        if ( (updated & 0x80u) == 0 )
        {
          v39 = *(_OWORD *)&t->Mat.M[0][0];
          v26 = *(_OWORD *)&t->Mat.M[1][0];
          *(_OWORD *)&m1.M[2][0] = _xmm;
          *(_OWORD *)&m1.M[0][0] = v39;
          *(_OWORD *)&m1.M[1][0] = v26;
        }
        else
        {
          Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&m1, &t->Mat3D, &t->Mat);
        }
        Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&cullRect.Mat3D, &m1, &v19->M34);
        v21 &= ~0x40u;
      }
      else if ( (updated & 0x80u) != 0 )
      {
        v27 = *(_OWORD *)&t->Mat3D.M[1][0];
        *(_OWORD *)&v42.M[0][0] = *(_OWORD *)&t->Mat3D.M[0][0];
        v28 = *(_OWORD *)&t->Mat3D.M[2][0];
        *(_OWORD *)&v42.M[1][0] = v27;
        *(_OWORD *)&v42.M[2][0] = v28;
        Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&cullRect.Mat3D, &v42, &v19->M34);
      }
      v23 = v21 | 0x80;
    }
    else
    {
      v22 = Scaleform::Render::TreeNode::NodeData::M2D(v19);
      if ( (updated & 0x40) != 0 )
        Scaleform::Render::Matrix2x4<float>::SetToAppend(&cullRect.Mat, v22, &t->Mat);
      else
        cullRect.Mat = *v22;
      v23 = v21 | 0x40;
      if ( (updated & 0x80u) != 0 )
      {
        v24 = *(_OWORD *)&t->Mat3D.M[1][0];
        *(_OWORD *)&cullRect.Mat3D.M[0][0] = *(_OWORD *)&t->Mat3D.M[0][0];
        v25 = *(_OWORD *)&t->Mat3D.M[2][0];
        *(_OWORD *)&cullRect.Mat3D.M[1][0] = v24;
        *(_OWORD *)&cullRect.Mat3D.M[2][0] = v25;
      }
    }
    Scaleform::Render::TransformArgs::SetViewProj(&cullRect, v19, t);
    v29 = 1;
    if ( (v8->Flags & 0x400) != 0 )
    {
      State = Scaleform::Render::StateBag::GetState(&v8->States, State_Filter);
      if ( State )
      {
        Log = (Scaleform::Render::FilterSet *)Scaleform::GFx::Stream::GetLog((AgDisplay *)State);
        if ( Log )
          v29 = Scaleform::Render::FilterSet::IsContributing(Log) == 0;
      }
      v23 |= 0x100u;
    }
    v32 = Scaleform::Render::StateBag::GetState(&v8->States, State_BlendMode);
    v33 = v32;
    if ( v32
      && Scaleform::Render::BlendState::IsTargetAllocationNeededForBlendMode((Scaleform::Render::BlendMode)v32->pData) )
    {
      v23 |= 0x100u;
      if ( LODWORD(v33->pData) == 2 )
      {
        v23 |= 0x400u;
      }
      else if ( (updated & 0x400) == 0 )
      {
        pRoot = this->pRoot;
        if ( pRoot )
          pRoot->EnableBlendTarget = 1;
      }
LABEL_28:
      cullRect.Cx = v19->Cx;
      goto LABEL_29;
    }
    if ( !v29 )
      goto LABEL_28;
    Scaleform::Render::Cxform::SetToAppend(&cullRect.Cx, &v19->Cx, &t->Cx);
LABEL_29:
    pNext->UpdateTransform(pNext, hal, v19, &cullRect, (Scaleform::Render::TransformFlags)v23);
    p_SortParentBounds = v38;
    pNext = pNext->pNext;
    v8 = pbaseData;
  }
}

void __fastcall Scaleform::Render::TreeCacheRoot::UpdateTreeData(
        Scaleform::Render::TreeCacheRoot *this,
        Scaleform::Render::HAL *hal)
{
  unsigned int DepthUsed; // eax
  Scaleform::Render::TreeCacheRoot *v3; // rsi
  Scaleform::Render::HAL *v4; // r14
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // r9
  Scaleform::Render::TreeCacheNode *v8; // r13
  int v9; // ebx
  Scaleform::Render::TreeCacheNode *pParent; // rax
  __int64 v11; // r8
  Scaleform::Render::TreeCacheNode_vtbl *v12; // rax
  int v13; // esi
  Scaleform::Render::TreeCacheNode *v14; // rdi
  unsigned __int64 v15; // rbx
  Scaleform::Render::StateBag *State; // rax
  Scaleform::Render::FilterSet *Log; // rax
  Scaleform::Render::StateBag *v18; // rax
  Scaleform::Render::TreeNode::NodeData *v19; // r15
  Scaleform::Render::TreeCacheRoot *v20; // rcx
  char v21; // r14
  int v22; // er12
  bool v23; // di
  Scaleform::Render::Matrix3x4<float> *p_M34; // rbx
  Scaleform::Render::Matrix2x4<float> *v25; // rax
  __int128 v26; // xmm0
  Scaleform::Render::StateBag *v27; // rbx
  Scaleform::Render::StateBag *v28; // rax
  int v29; // eax
  unsigned int v30; // er12
  Scaleform::Render::StateBag *v31; // r15
  Scaleform::Render::TreeNode::NodeData *v32; // rbx
  Scaleform::Render::StateBag *v33; // rdx
  Scaleform::Render::TreeCacheNode *v34; // rdi
  unsigned __int16 Flags; // cx
  __int64 v36; // rcx
  unsigned __int64 v37; // rsi
  Scaleform::Render::Matrix3x4<float> *p_m1; // rdx
  const Scaleform::Render::Matrix2x4<float> *v39; // rax
  const Scaleform::Render::Matrix2x4<float> *v40; // rax
  Scaleform::Render::StateBag *v41; // rax
  Scaleform::Render::FilterSet *v42; // rax
  Scaleform::Render::TreeCacheRoot *pRoot; // rcx
  Scaleform::Render::TreeCacheNode *v44; // rbx
  int v45; // eax
  Scaleform::Render::StateBag *v46; // rbx
  Scaleform::Render::StateBag *v47; // rax
  Scaleform::Render::StateBag *v48; // r13
  Scaleform::Render::TreeCacheRoot *v49; // rcx
  Scaleform::Render::TreeCacheNode *v50; // rbx
  int v51; // eax
  __int64 Depth; // r15
  Scaleform::Render::DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode *> *p_DepthUpdates; // r14
  unsigned int v54; // er15
  __int64 v55; // rdi
  Scaleform::Render::TreeCacheNode *i; // rbx
  __int64 j; // r8
  Scaleform::Render::BundleEntry *pFirst; // rbx
  Scaleform::Render::BundleEntry *k; // rdi
  char v60; // [rsp+38h] [rbp-D0h]
  unsigned int v61; // [rsp+3Ch] [rbp-CCh]
  unsigned int v62; // [rsp+40h] [rbp-C8h]
  Scaleform::Render::StateBag *v63; // [rsp+48h] [rbp-C0h]
  Scaleform::Render::StateBag *v64; // [rsp+50h] [rbp-B8h]
  Scaleform::Render::TreeNode::NodeData *v66; // [rsp+60h] [rbp-A8h]
  Scaleform::Render::TreeCacheNode *v67; // [rsp+68h] [rbp-A0h]
  __int64 v68; // [rsp+70h] [rbp-98h]
  Scaleform::Render::Matrix3x4<float> m1; // [rsp+88h] [rbp-80h] BYREF
  Scaleform::Render::Rect<float> ViewCullRect; // [rsp+B8h] [rbp-50h] BYREF
  Scaleform::Render::Matrix3x4<float> v72; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v73; // [rsp+F8h] [rbp-10h]
  char v74; // [rsp+148h] [rbp+40h]
  Scaleform::Render::Matrix2x4<float> v75; // [rsp+158h] [rbp+50h] BYREF
  Scaleform::Render::Cxform Cx; // [rsp+178h] [rbp+70h] BYREF
  Scaleform::Render::Matrix3x4<float> m2; // [rsp+198h] [rbp+90h] BYREF
  Scaleform::Render::Matrix3x4<float> v78; // [rsp+1C8h] [rbp+C0h] BYREF

  DepthUsed = this->DepthUpdates.DepthUsed;
  v3 = this;
  v4 = hal;
  v5 = 0;
  v62 = DepthUsed;
  v61 = 0;
  if ( !DepthUsed )
    goto LABEL_107;
  v6 = 0i64;
  v7 = 128i64;
  v68 = 0i64;
  do
  {
    v8 = v3->DepthUpdates.pDepth[v6];
    v67 = v8;
    if ( !v8 )
      goto LABEL_106;
    do
    {
      v9 = v8->UpdateFlags & 3;
      if ( (v8->UpdateFlags & 0x10000) != 0 )
      {
        pParent = v8->pParent;
        if ( pParent )
          v11 = pParent->Flags & 0x80;
        else
          v11 = 0i64;
        ((void (__fastcall *)(Scaleform::Render::TreeCacheNode *, Scaleform::Render::HAL *, __int64, __int64))v8->propagateScale9Flag)(
          v8,
          v4,
          v11,
          128i64);
        v8->UpdateFlags &= ~0x10000u;
        v9 |= 1u;
      }
      if ( (v8->UpdateFlags & 0x2000) != 0 )
      {
        v12 = v8->__vftable;
        v8->Flags = v8->Flags & 0xFDFF | (((*(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v8->pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                              + 0x28)
                                                                  + 8i64
                                                                  * (unsigned int)((int)(LODWORD(v8->pNode)
                                                                                       - ((__int64)v8->pNode & 0xFFFFF000)
                                                                                       - 56)
                                                                                 / 56)
                                                                  + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                                     + 10) & 0x200) != 0) << 9);
        ((void (__fastcall *)(Scaleform::Render::TreeCacheNode *, Scaleform::Render::HAL *, _QWORD, __int64))v12->propagate3DFlag)(
          v8,
          v4,
          0i64,
          v7);
        v8->UpdateFlags &= ~0x2000u;
        v9 |= 1u;
      }
      v13 = v9 | 1;
      v14 = v8;
      if ( (v8->UpdateFlags & 0x40000) == 0 )
        v13 = v9;
      while ( 1 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v14->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                        + 8i64
                        * (unsigned int)((int)(LODWORD(v14->pNode) - ((__int64)v14->pNode & 0xFFFFF000) - 56) / 56)
                        + 40) & 0xFFFFFFFFFFFFFFFEui64;
        if ( (*(_WORD *)(v15 + 10) & 0x400) != 0 )
        {
          State = Scaleform::Render::StateBag::GetState((Scaleform::Render::StateBag *)(v15 + 64), State_Filter);
          if ( State )
          {
            Log = (Scaleform::Render::FilterSet *)Scaleform::GFx::Stream::GetLog((AgDisplay *)State);
            if ( Log )
            {
              if ( Scaleform::Render::FilterSet::IsContributing(Log) )
                break;
            }
          }
        }
        v18 = Scaleform::Render::StateBag::GetState((Scaleform::Render::StateBag *)(v15 + 64), State_BlendMode);
        if ( v18 )
        {
          if ( Scaleform::Render::BlendState::IsTargetAllocationNeededForBlendMode((Scaleform::Render::BlendMode)v18->pData) )
            break;
        }
        v14 = v14->pParent;
        if ( !v14 )
          goto LABEL_22;
      }
      v13 |= 0x200u;
LABEL_22:
      if ( v13 )
      {
        v19 = (Scaleform::Render::TreeNode::NodeData *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v8->pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                              + 0x28)
                                                                  + 8i64
                                                                  * (unsigned int)((int)(LODWORD(v8->pNode)
                                                                                       - ((__int64)v8->pNode & 0xFFFFF000)
                                                                                       - 56)
                                                                                 / 56)
                                                                  + 40) & 0xFFFFFFFFFFFFFFFEui64);
        v66 = v19;
        if ( !v19 )
          goto LABEL_104;
        v20 = this;
        v21 = 1;
        v22 = v13 | (this->ViewValid ? 0x10 : 0);
        v23 = (v19->Flags & 0x200) != 0;
        if ( (v19->Flags & 0x200) != 0 )
        {
          p_M34 = &v19->M34;
          v25 = (Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152];
        }
        else
        {
          p_M34 = &Scaleform::Render::Matrix3x4<float>::Identity;
          v25 = (Scaleform::Render::Matrix2x4<float> *)Scaleform::Render::TreeNode::NodeData::M2D(v19);
          v20 = this;
        }
        ViewCullRect = v20->ViewCullRect;
        *(_OWORD *)&v72.M[0][0] = *(_OWORD *)&p_M34->M[0][0];
        *(_OWORD *)&v72.M[1][0] = *(_OWORD *)&p_M34->M[1][0];
        v26 = *(_OWORD *)&p_M34->M[2][0];
        v74 = 0;
        *(_OWORD *)&v72.M[2][0] = v26;
        v73 = 0i64;
        v75 = *v25;
        Cx = v19->Cx;
        if ( (v19->Flags & 0x800) != 0 )
          v27 = Scaleform::Render::StateBag::GetState(&v19->States, State_ViewMatrix3D);
        else
          v27 = 0i64;
        if ( (v19->Flags & 0x1000) != 0 )
          v28 = Scaleform::Render::StateBag::GetState(&v19->States, State_ProjectionMatrix3D);
        else
          v28 = 0i64;
        if ( v27 )
        {
          *(_QWORD *)&v73 = v27;
          v74 = 1;
        }
        if ( v28 )
        {
          *((_QWORD *)&v73 + 1) = v28;
          v74 = 1;
        }
        v29 = 64;
        if ( v23 )
          v29 = 128;
        v30 = v29 | v22;
        if ( (v19->Flags & 0x800) != 0 )
          v31 = Scaleform::Render::StateBag::GetState(&v19->States, State_ViewMatrix3D);
        else
          v31 = 0i64;
        v32 = v66;
        v63 = v31;
        if ( (v66->Flags & 0x1000) != 0 )
          v33 = Scaleform::Render::StateBag::GetState(&v66->States, State_ProjectionMatrix3D);
        else
          v33 = 0i64;
        v34 = v8->pParent;
        v64 = v33;
        if ( v34 )
        {
          do
          {
            Flags = v34->Flags;
            if ( (Flags & 3) != 1 && (Flags & 0x40) == 0 )
              v30 &= ~0x10u;
            v36 = (unsigned int)((int)(LODWORD(v34->pNode) - ((__int64)v34->pNode & 0xFFFFF000) - 56) / 56);
            v37 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v34->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28) + 8 * v36 + 40) & 0xFFFFFFFFFFFFFFFEui64;
            if ( (v30 & 0x80u) == 0 )
            {
              if ( (*(_WORD *)(v37 + 10) & 0x200) != 0 )
              {
                *(_OWORD *)&m1.M[0][0] = *(_OWORD *)&v75.M[0][0];
                *(_OWORD *)&m1.M[1][0] = *(_OWORD *)&v75.M[1][0];
                *(_OWORD *)&v72.M[1][0] = *(_OWORD *)&v75.M[1][0];
                *(_OWORD *)&v72.M[0][0] = *(_OWORD *)&v75.M[0][0];
                *(_OWORD *)&v72.M[2][0] = _xmm;
                *(_OWORD *)&v78.M[2][0] = _xmm;
                *(_OWORD *)&v78.M[0][0] = *(_OWORD *)&v75.M[0][0];
                *(_OWORD *)&v78.M[1][0] = *(_OWORD *)&v75.M[1][0];
                Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(
                  &v72,
                  (const Scaleform::Render::Matrix3x4<float> *)(v37 + 16),
                  &v78);
                v30 = v30 & 0xFFFFFF3F | 0x80;
                *(_OWORD *)&v75.M[0][0] = _xmm;
                *(_OWORD *)&v75.M[1][0] = _xmm;
              }
              else
              {
                v40 = Scaleform::Render::TreeNode::NodeData::M2D((Scaleform::Render::TreeNode::NodeData *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v34->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28) + 8 * v36 + 40) & 0xFFFFFFFFFFFFFFFEui64));
                Scaleform::Render::Matrix2x4<float>::Append(&v75, v40);
              }
            }
            else
            {
              if ( (*(_WORD *)(v37 + 10) & 0x200) != 0 )
              {
                p_m1 = (Scaleform::Render::Matrix3x4<float> *)(v37 + 16);
              }
              else
              {
                v39 = Scaleform::Render::TreeNode::NodeData::M2D((Scaleform::Render::TreeNode::NodeData *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v34->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28) + 8 * v36 + 40) & 0xFFFFFFFFFFFFFFFEui64));
                p_m1 = &m1;
                *(_OWORD *)&m1.M[0][0] = *(_OWORD *)&v39->M[0][0];
                *(_OWORD *)&m1.M[1][0] = *(_OWORD *)&v39->M[1][0];
                *(_OWORD *)&m1.M[2][0] = _xmm;
              }
              m2 = v72;
              Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&v72, p_m1, &m2);
            }
            v21 |= (v34->UpdateFlags & 3) != 0;
            v60 = v21;
            if ( (*(_WORD *)(v37 + 10) & 0x400) != 0 )
            {
              v41 = Scaleform::Render::StateBag::GetState((Scaleform::Render::StateBag *)(v37 + 64), State_Filter);
              if ( v41 )
              {
                v42 = (Scaleform::Render::FilterSet *)Scaleform::GFx::Stream::GetLog((AgDisplay *)v41);
                if ( v42 )
                {
                  if ( Scaleform::Render::FilterSet::IsContributing(v42) )
                  {
                    if ( v21 )
                    {
                      v34->UpdateFlags |= 0x1200000u;
                      pRoot = v34->pRoot;
                      if ( pRoot )
                      {
                        v44 = v34->pParent;
                        if ( v44 )
                        {
                          v45 = 0x1000000;
                          if ( (v44->UpdateFlags & 0x80000000) == 0 )
                          {
                            if ( pRoot->DepthUpdatesChained )
                            {
                              Scaleform::Render::DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode *>::Link(
                                &pRoot->DepthUpdates,
                                v44->Depth,
                                &v44->pNextUpdate,
                                v34->pParent);
                            }
                            else
                            {
                              v44->pNextUpdate = pRoot->pUpdateList;
                              pRoot->pUpdateList = v44;
                            }
                            v45 = -2130706432;
                          }
                          v44->UpdateFlags |= v45;
                        }
                      }
                    }
                    v30 |= 0x100u;
                  }
                }
              }
            }
            v46 = (Scaleform::Render::StateBag *)(v37 + 64);
            v47 = Scaleform::Render::StateBag::GetState((Scaleform::Render::StateBag *)(v37 + 64), State_BlendMode);
            v48 = v47;
            if ( v47
              && Scaleform::Render::BlendState::IsTargetAllocationNeededForBlendMode((Scaleform::Render::BlendMode)v47->pData) )
            {
              if ( v21 )
              {
                v34->UpdateFlags |= 0x1020000u;
                v49 = v34->pRoot;
                if ( v49 )
                {
                  v50 = v34->pParent;
                  if ( v50 )
                  {
                    v51 = 0x1000000;
                    if ( (v50->UpdateFlags & 0x80000000) == 0 )
                    {
                      if ( v49->DepthUpdatesChained )
                      {
                        Depth = v50->Depth;
                        p_DepthUpdates = &v49->DepthUpdates;
                        if ( (unsigned int)Depth < v49->DepthUpdates.DepthAvailable
                          || Scaleform::Render::DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode *>::grow(
                               &v49->DepthUpdates,
                               Depth + 1) )
                        {
                          v50->pNextUpdate = p_DepthUpdates->pDepth[Depth];
                          p_DepthUpdates->pDepth[Depth] = v50;
                          v54 = Depth + 1;
                          if ( p_DepthUpdates->DepthUsed < v54 )
                            p_DepthUpdates->DepthUsed = v54;
                        }
                        v21 = v60;
                      }
                      else
                      {
                        v50->pNextUpdate = v49->pUpdateList;
                        v49->pUpdateList = v50;
                      }
                      v51 = -2130706432;
                    }
                    v50->UpdateFlags |= v51;
                  }
                  v46 = (Scaleform::Render::StateBag *)(v37 + 64);
                }
              }
              v30 |= 0x100u;
              if ( LODWORD(v48->pData) == 2 )
                v30 |= 0x400u;
            }
            if ( (v30 & 0x100) == 0 )
              Scaleform::Render::Cxform::Prepend(&Cx, (const Scaleform::Render::Cxform *)(v37 + 80));
            v31 = v63;
            if ( !v63 && (*(_WORD *)(v37 + 10) & 0x800) != 0 )
            {
              v31 = Scaleform::Render::StateBag::GetState(v46, State_ViewMatrix3D);
              v63 = v31;
            }
            v33 = v64;
            if ( !v64 && (*(_WORD *)(v37 + 10) & 0x1000) != 0 )
            {
              v33 = Scaleform::Render::StateBag::GetState(v46, State_ProjectionMatrix3D);
              v64 = v33;
            }
            v34 = v34->pParent;
          }
          while ( v34 );
          v8 = v67;
          v32 = v66;
        }
        if ( v31 )
        {
          *(_QWORD *)&v73 = v31;
          v74 = 1;
        }
        if ( v33 )
        {
          *((_QWORD *)&v73 + 1) = v33;
          v74 = 1;
        }
        v4 = hal;
        v8->UpdateTransform(
          v8,
          hal,
          v32,
          (const Scaleform::Render::TransformArgs *)&ViewCullRect,
          (Scaleform::Render::TransformFlags)v30);
        v8->UpdateFlags &= 0xFFFFFFFC;
      }
      v8 = v8->pNextUpdate;
      v67 = v8;
LABEL_104:
      v7 = 128i64;
    }
    while ( v8 );
    v3 = this;
    v5 = v61;
    v6 = v68;
LABEL_106:
    ++v5;
    ++v6;
    v61 = v5;
    v68 = v6;
  }
  while ( v5 < v62 );
LABEL_107:
  LODWORD(v55) = v3->DepthUpdates.DepthUsed;
  while ( (_DWORD)v55 )
  {
    v55 = (unsigned int)(v55 - 1);
    for ( i = v3->DepthUpdates.pDepth[v55]; i; i = i->pNextUpdate )
    {
      if ( (i->UpdateFlags & 0x3000000) != 0 )
      {
        i->UpdateBundlePattern(i, v4, 0);
        i->UpdateFlags &= 0xFCFFFFFF;
      }
      i->UpdateFlags &= ~0x80000000;
    }
  }
  for ( j = 0i64; (unsigned int)j < v3->DepthUpdates.DepthUsed; j = (unsigned int)(j + 1) )
    v3->DepthUpdates.pDepth[j] = v3->DepthUpdates.NullValue;
  v3->DepthUpdates.DepthUsed = 0;
  v3->DepthUpdatesChained = 0;
  pFirst = v3->CachedChildPattern.pFirst;
  for ( k = v3->CachedChildPattern.pLast; pFirst; pFirst = pFirst->pNextPattern )
  {
    Scaleform::Render::BundleEntry::UpdateBundleEntry(pFirst, v4, v3);
    if ( pFirst == k )
      break;
  }
  ++BundlePatternFrameId;
}

__int64 __fastcall Scaleform::Render::TreeCacheNode::calcCacheableBounds(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::Rect<float> *returnBounds,
        Scaleform::Render::Matrix2x4<float> *areaMatrix,
        const Scaleform::Render::Matrix3x4<float> *viewMatrix,
        const Scaleform::Render::Matrix4x4<float> *viewProjMatrix,
        Scaleform::Render::Rect<float> *cullRect)
{
  Scaleform::Render::TreeCacheNode *v9; // r9
  Scaleform::Render::TreeCacheRoot **p_pRoot; // r12
  Scaleform::Render::TreeCacheRoot *pRoot; // r11
  unsigned __int64 v12; // r14
  __int64 result; // rax
  bool v14; // al
  Scaleform::Render::TreeNode *pNode; // rcx
  float v16; // eax
  float v17; // xmm2_4
  float v18; // xmm1_4
  Scaleform::Render::TreeNode *v19; // rcx
  unsigned __int64 v20; // rbx
  float v21; // xmm2_4
  float v22; // xmm1_4
  Scaleform::Render::TreeCacheRoot *v23; // rcx
  Scaleform::Render::Viewport *v24; // rbx
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm3_4
  Scaleform::Render::Rect<float> *v29; // rax
  float x1; // xmm7_4
  float y1; // xmm6_4
  float x2; // xmm11_4
  float y2; // xmm8_4
  char v34; // bl
  float v35; // xmm10_4
  float v36; // xmm11_4
  float v37; // xmm12_4
  float v38; // xmm7_4
  float v39; // xmm9_4
  float v40; // xmm6_4
  float v41; // xmm8_4
  float v42; // xmm0_4
  float v43; // xmm7_4
  float v44; // xmm8_4
  float v45; // xmm6_4
  float v46; // xmm0_4
  Scaleform::Render::Matrix2x4<float> v47; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v48; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::Render::Rect<float> pr; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::Render::Rect<float> bounds; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::Render::Matrix4x4<float> v51; // [rsp+70h] [rbp-90h] BYREF

  v9 = this;
  p_pRoot = &this->pRoot;
  pRoot = this->pRoot;
  v12 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                  + 8i64 * (unsigned int)((int)((int)&this->pNode[-1] - ((__int64)this->pNode & 0xFFFFF000)) / 56)
                  + 40) & 0xFFFFFFFFFFFFFFFEui64;
  if ( !pRoot )
    return 0i64;
  v14 = (*(_WORD *)(v12 + 10) & 0x200) != 0;
  do
  {
    if ( v14 )
      break;
    pNode = v9->pNode;
    v9 = v9->pParent;
    v14 = (*(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                 + 8i64
                                 * (unsigned int)((int)((_DWORD)pNode - ((unsigned int)pNode & 0xFFFFF000) - 56) / 56)
                                 + 40) & 0xFFFFFFFFFFFFFFFEui64)
                    + 10) & 0x200) != 0;
  }
  while ( v9 );
  v48 = 0i64;
  pr = 0i64;
  if ( v14 )
  {
    v19 = pRoot->pNode;
    *(_OWORD *)&v47.M[0][0] = 0i64;
    v20 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                    + 8i64 * (unsigned int)((int)((_DWORD)v19 - ((unsigned int)v19 & 0xFFFFF000) - 56) / 56)
                    + 40) & 0xFFFFFFFFFFFFFFFEui64;
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&v51, viewProjMatrix, viewMatrix);
    Scaleform::Render::Matrix4x4<float>::EncloseTransformHomogeneous(
      &v51,
      (Scaleform::Render::Rect<float> *)&v47,
      (const Scaleform::Render::Rect<float> *)(v12 + 112));
    v21 = (float)*(int *)(v20 + 176);
    v22 = (float)*(int *)(v20 + 180);
    pr.x1 = (float)((float)(v47.M[0][0] + 1.0) * v21) * 0.5;
    pr.y1 = (float)((float)(1.0 - v47.M[0][3]) * v22) * 0.5;
    pr.x2 = (float)((float)(v47.M[0][2] + 1.0) * v21) * 0.5;
    pr.y2 = (float)((float)(1.0 - v47.M[0][1]) * v22) * 0.5;
  }
  else
  {
    v16 = *(float *)(v12 + 112);
    v17 = *(float *)(v12 + 124);
    v18 = *(float *)(v12 + 120);
    v47 = *(Scaleform::Render::Matrix2x4<float> *)&viewMatrix->M[0][0];
    returnBounds->y1 = *(float *)(v12 + 116);
    returnBounds->x2 = v18;
    returnBounds->y2 = v17;
    returnBounds->x1 = v16;
    Scaleform::Render::Matrix2x4<float>::EncloseTransform(&v47, &pr, returnBounds);
  }
  v23 = *p_pRoot;
  *(_OWORD *)&v47.M[0][0] = 0i64;
  v24 = (Scaleform::Render::Viewport *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v23->pNode & 0xFFFFFFFFFFFFF000ui64)
                                                               + 0x28)
                                                   + 8i64
                                                   * (unsigned int)((int)(LODWORD(v23->pNode)
                                                                        - ((__int64)v23->pNode & 0xFFFFF000)
                                                                        - 56)
                                                                  / 56)
                                                   + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                      + 160);
  if ( Scaleform::Render::Viewport::GetClippedRect<int>(v24, (Scaleform::Render::Rect<int> *)&v47, 1) )
  {
    v25 = (float)(LODWORD(v47.M[0][0]) - v24->Left);
    v26 = (float)(LODWORD(v47.M[0][1]) - v24->Top);
    v27 = (float)(LODWORD(v47.M[0][2]) - v24->Left);
    v28 = (float)(LODWORD(v47.M[0][3]) - v24->Top);
    *(float *)&v48 = v25;
    *((float *)&v48 + 1) = v26;
    *((_QWORD *)&v48 + 1) = __PAIR64__(LODWORD(v28), LODWORD(v27));
  }
  else
  {
    v28 = *((float *)&v48 + 3);
    v27 = *((float *)&v48 + 2);
    v26 = *((float *)&v48 + 1);
    v25 = *(float *)&v48;
  }
  v29 = (Scaleform::Render::Rect<float> *)&v48;
  if ( cullRect )
    v29 = cullRect;
  x1 = v29->x1;
  y1 = v29->y1;
  x2 = v29->x2;
  y2 = v29->y2;
  if ( (((v24->Flags & 0x30) - 16) & 0xFFFFFFDF) == 0 )
  {
    x1 = v26;
    y1 = v25;
    x2 = v28;
    y2 = v27;
  }
  bounds.x1 = x1;
  bounds.y1 = y1;
  bounds.x2 = x2;
  bounds.y2 = y2;
  Scaleform::Render::TreeNode::NodeData::expandByFilterBounds((Scaleform::Render::TreeNode::NodeData *)v12, &bounds, 0);
  v34 = 1;
  v35 = pr.x2;
  v36 = x2 + 32.0;
  v37 = pr.y1;
  v38 = x1 - 32.0;
  v39 = pr.y2;
  v40 = y1 - 32.0;
  v41 = y2 + 32.0;
  v42 = pr.x1;
  if ( v36 >= pr.x2 && v41 >= pr.y2 && pr.x1 >= v38 && pr.y1 >= v40 )
    goto LABEL_27;
  v34 = 0;
  if ( v41 >= pr.y1 && pr.y2 >= v40 && pr.x2 >= v38 && v36 >= pr.x1 )
  {
    if ( v38 > pr.x1 )
      v42 = v38;
    v35 = fminf(pr.x2, v36);
    v39 = fminf(pr.y2, v41);
    v37 = fmaxf(v40, pr.y1);
LABEL_27:
    v43 = floorf(v42);
    v44 = floorf(v37);
    v45 = ceilf(v35);
    v46 = ceilf(v39);
    returnBounds->y2 = v46;
    returnBounds->x2 = v45;
    returnBounds->x1 = v43;
    returnBounds->y1 = v44;
    *(_QWORD *)&areaMatrix->M[0][1] = 0i64;
    areaMatrix->M[1][0] = 0.0;
    areaMatrix->M[1][2] = 0.0;
    areaMatrix->M[1][1] = v46 - v44;
    result = (unsigned int)(v34 != 0) + 1;
    areaMatrix->M[0][0] = v45 - v43;
    areaMatrix->M[0][3] = v43;
    areaMatrix->M[1][3] = v44;
    return result;
  }
  return 0i64;
}

bool __fastcall Scaleform::Render::TreeCacheNode::calcChildMaskBounds(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::Rect<float> *bounds,
        Scaleform::Render::TreeCacheNode *child)
{
  Scaleform::Render::TreeCacheNode *pMask; // r15
  Scaleform::Render::TreeNode::NodeData *v7; // rdi
  Scaleform::Render::TreeCacheNode *v8; // r9
  bool v9; // al
  Scaleform::Render::TreeNode *pNode; // rcx
  unsigned int *v11; // rdx
  __m128i v12; // xmm5
  __m128i v13; // xmm2
  bool result; // al
  float v15; // xmm1_4
  float v16; // xmm3_4
  unsigned __int64 v17; // rdx
  Scaleform::Render::TreeNode::NodeData *v18; // rbp
  Scaleform::Render::TreeCacheNode *pParent; // rax
  Scaleform::Render::Matrix2x4<float> *p_m; // rdx
  Scaleform::Render::Matrix2x4<float> pviewMatrix; // [rsp+20h] [rbp-78h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+40h] [rbp-58h] BYREF

  pMask = child->pMask;
  v7 = (Scaleform::Render::TreeNode::NodeData *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pMask->pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                       + 0x28)
                                                           + 8i64
                                                           * (unsigned int)((int)(LODWORD(pMask->pNode)
                                                                                - ((__int64)pMask->pNode & 0xFFFFF000)
                                                                                - 56)
                                                                          / 56)
                                                           + 40) & 0xFFFFFFFFFFFFFFFEui64);
  if ( v7->AproxParentBounds.x1 >= v7->AproxParentBounds.x2 || v7->AproxParentBounds.y1 >= v7->AproxParentBounds.y2 )
    return 0;
  v8 = this;
  v9 = (v7->Flags & 0x200) != 0;
  if ( this )
  {
    while ( !v9 )
    {
      pNode = v8->pNode;
      v8 = v8->pParent;
      v9 = (*(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                  + 8i64
                                  * (unsigned int)((int)((_DWORD)pNode - ((unsigned int)pNode & 0xFFFFF000) - 56) / 56)
                                  + 40) & 0xFFFFFFFFFFFFFFFEui64)
                     + 10) & 0x200) != 0;
      if ( !v8 )
        goto LABEL_6;
    }
    goto LABEL_7;
  }
LABEL_6:
  if ( v9 )
  {
LABEL_7:
    v11 = (unsigned int *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pRoot->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                     + 8i64
                                     * (unsigned int)((int)(LODWORD(this->pRoot->pNode)
                                                          - ((__int64)this->pRoot->pNode & 0xFFFFF000)
                                                          - 56)
                                                    / 56)
                                     + 40) & 0xFFFFFFFFFFFFFFFEui64);
    if ( (((v11[50] & 0x30) - 16) & 0xFFFFFFDF) != 0 )
    {
      v12 = _mm_cvtsi32_si128(v11[44]);
      v13 = _mm_cvtsi32_si128(v11[45]);
    }
    else
    {
      v12 = _mm_cvtsi32_si128(v11[45]);
      v13 = _mm_cvtsi32_si128(v11[44]);
    }
    result = 1;
    v15 = _mm_cvtepi32_ps(v13).m128_f32[0];
    v16 = _mm_cvtepi32_ps(v12).m128_f32[0];
    bounds->y1 = (float)(v15 * 0.0) * 0.5;
    bounds->x1 = (float)(v16 * 0.0) * 0.5;
    bounds->y2 = (float)(v15 * 2.0) * 0.5;
    bounds->x2 = (float)(v16 * 2.0) * 0.5;
    return result;
  }
  v17 = (__int64)((unsigned __int128)((__int64)((__int64)&child->pNode[-1]
                                              - ((unsigned __int64)child->pNode & 0xFFFFFFFFFFFFF000ui64))
                                    * (__int128)0x4924924924924925i64) >> 64) >> 4;
  v18 = (Scaleform::Render::TreeNode::NodeData *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)child->pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                        + 0x28)
                                                            + 8 * ((unsigned int)v17 + (v17 >> 63))
                                                            + 40) & 0xFFFFFFFFFFFFFFFEui64);
  pviewMatrix = *Scaleform::Render::TreeNode::NodeData::M2D(v7);
  pParent = pMask->pParent;
  if ( pParent != this )
  {
    if ( pParent == child )
    {
      p_m = (Scaleform::Render::Matrix2x4<float> *)Scaleform::Render::TreeNode::NodeData::M2D(v18);
    }
    else
    {
      Scaleform::Render::TreeCacheNode::CalcViewMatrix(pMask, &pviewMatrix);
      *(_OWORD *)&m.M[0][0] = _xmm;
      *(_OWORD *)&m.M[1][0] = _xmm;
      Scaleform::Render::TreeCacheNode::CalcViewMatrix(this, &m);
      p_m = &m;
    }
    Scaleform::Render::Matrix2x4<float>::Append(&pviewMatrix, p_m);
  }
  Scaleform::Render::Matrix2x4<float>::EncloseTransform(
    &pviewMatrix,
    (Scaleform::Render::Rect<float> *)&m,
    &v7->AproxLocalBounds);
  result = 1;
  *bounds = *(Scaleform::Render::Rect<float> *)&m.M[0][0];
  return result;
}

__int64 __fastcall Scaleform::Render::TreeCacheNode::calcMaskBounds(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::Rect<float> *maskBounds,
        Scaleform::Render::Matrix2x4<float> *boundAreaMatrix,
        const Scaleform::Render::Matrix3x4<float> *viewMatrix,
        const Scaleform::Render::Matrix4x4<float> *viewProjMatrix)
{
  Scaleform::Render::TreeCacheNode *v8; // r9
  Scaleform::Render::TreeCacheRoot **p_pRoot; // rbx
  Scaleform::Render::TreeCacheNode *pMask; // r10
  const Scaleform::Render::Rect<float> *v11; // rdi
  Scaleform::Render::TreeNode::NodeData *v12; // r15
  __int64 result; // rax
  bool v14; // al
  Scaleform::Render::TreeNode *pNode; // rcx
  const Scaleform::Render::Matrix2x4<float> *v16; // rax
  float y2; // xmm11_4
  float x1; // xmm1_4
  float y1; // xmm2_4
  float v20; // xmm10_4
  float v21; // xmm10_4
  float v22; // xmm11_4
  float v23; // xmm6_4
  float v24; // xmm8_4
  float v25; // xmm9_4
  float v26; // xmm6_4
  float v27; // xmm0_4
  Scaleform::Render::TreeCacheRoot *v28; // rcx
  unsigned __int64 v29; // rbx
  float v30; // xmm1_4
  float v31; // xmm4_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm10_4
  float v37; // xmm9_4
  float v38; // xmm1_4
  float x2; // xmm6_4
  float v40; // xmm6_4
  float v41; // xmm8_4
  float v42; // xmm9_4
  float v43; // xmm6_4
  float v44; // xmm0_4
  Scaleform::Render::Rect<float> pr; // [rsp+20h] [rbp-E0h] BYREF
  Scaleform::Render::Matrix3x4<float> m; // [rsp+30h] [rbp-D0h] BYREF
  Scaleform::Render::Matrix4x4<float> v47; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::Render::Matrix4x4<float> v48; // [rsp+A0h] [rbp-60h] BYREF

  v8 = this;
  p_pRoot = &this->pRoot;
  pMask = this->pMask;
  v11 = (const Scaleform::Render::Rect<float> *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                       + 0x28)
                                                           + 8i64
                                                           * (unsigned int)((int)((int)&this->pNode[-1]
                                                                                - ((__int64)this->pNode & 0xFFFFF000))
                                                                          / 56)
                                                           + 40) & 0xFFFFFFFFFFFFFFFEui64);
  v12 = (Scaleform::Render::TreeNode::NodeData *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pMask->pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                        + 0x28)
                                                            + 8i64
                                                            * (unsigned int)((int)(LODWORD(pMask->pNode)
                                                                                 - ((__int64)pMask->pNode & 0xFFFFF000)
                                                                                 - 56)
                                                                           / 56)
                                                            + 40) & 0xFFFFFFFFFFFFFFFEui64);
  if ( !this->pRoot )
    return 0i64;
  v14 = (v12->Flags & 0x200) != 0;
  do
  {
    if ( v14 )
      goto LABEL_14;
    pNode = v8->pNode;
    v8 = v8->pParent;
    v14 = (*(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                 + 8i64
                                 * (unsigned int)((int)((_DWORD)pNode - ((unsigned int)pNode & 0xFFFFF000) - 56) / 56)
                                 + 40) & 0xFFFFFFFFFFFFFFFEui64)
                    + 10) & 0x200) != 0;
  }
  while ( v8 );
  if ( (*(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                              + 8i64
                              * (unsigned int)((int)((_DWORD)pNode - ((unsigned int)pNode & 0xFFFFF000) - 56) / 56)
                              + 40) & 0xFFFFFFFFFFFFFFFEui64)
                 + 10) & 0x200) != 0 )
  {
LABEL_14:
    *(_OWORD *)&v47.M[1][0] = 0x3F80000000000000ui64;
    *(_QWORD *)&v47.M[3][2] = 0x3F80000000000000i64;
    *(_OWORD *)&m.M[1][0] = 0x3F80000000000000ui64;
    *(_OWORD *)&v47.M[0][0] = 0x3F800000ui64;
    *(_QWORD *)&v47.M[2][2] = 1065353216i64;
    *(_OWORD *)&m.M[0][0] = 0x3F800000ui64;
    *(_QWORD *)&m.M[2][2] = 1065353216i64;
    *(_QWORD *)&v47.M[2][0] = 0i64;
    *(_QWORD *)&v47.M[3][0] = 0i64;
    *(_QWORD *)&m.M[2][0] = 0i64;
    Scaleform::Render::TreeCacheNode::CalcViewMatrix(pMask, &m, &v47);
    v28 = *p_pRoot;
    pr = 0i64;
    v29 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v28->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                    + 8i64 * (unsigned int)((int)(LODWORD(v28->pNode) - ((__int64)v28->pNode & 0xFFFFF000) - 56) / 56)
                    + 40) & 0xFFFFFFFFFFFFFFFEui64;
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&v48, &v47, &m);
    Scaleform::Render::Matrix4x4<float>::EncloseTransformHomogeneous(&v48, &pr, &v12->AproxLocalBounds);
    v30 = (float)*(int *)(v29 + 180);
    v31 = (float)((float)(pr.x1 + 1.0) * (float)*(int *)(v29 + 176)) * 0.5;
    v32 = (float)((float)(1.0 - pr.y2) * v30) * 0.5;
    v33 = (float)((float)(pr.x2 + 1.0) * (float)*(int *)(v29 + 176)) * 0.5;
    maskBounds->y2 = (float)((float)(1.0 - pr.y1) * v30) * 0.5;
    pr = 0i64;
    maskBounds->x1 = v31;
    maskBounds->y1 = v32;
    maskBounds->x2 = v33;
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&v48, viewProjMatrix, viewMatrix);
    Scaleform::Render::Matrix4x4<float>::EncloseTransformHomogeneous(&v48, &pr, v11 + 7);
    v34 = (float)*(int *)(v29 + 176);
    v35 = fminf((float)((float)(pr.x1 + 1.0) * v34) * 0.5, maskBounds->x1);
    v36 = fmaxf(maskBounds->y2, (float)((float)(1.0 - pr.y1) * (float)*(int *)(v29 + 180)) * 0.5);
    v37 = fminf((float)((float)(1.0 - pr.y2) * (float)*(int *)(v29 + 180)) * 0.5, maskBounds->y1);
    v38 = (float)((float)(pr.x2 + 1.0) * v34) * 0.5;
    x2 = maskBounds->x2;
    maskBounds->x1 = v35;
    v40 = fmaxf(x2, v38);
    maskBounds->y1 = v37;
    maskBounds->y2 = v36;
    maskBounds->x2 = v40;
    v41 = floorf(v35 - 8.0);
    v42 = floorf(v37 - 8.0);
    v43 = ceilf(v40 + 8.0);
    v44 = ceilf(v36 + 8.0);
    boundAreaMatrix->M[0][3] = v41;
    *(_QWORD *)&boundAreaMatrix->M[0][1] = 0i64;
    boundAreaMatrix->M[1][0] = 0.0;
    boundAreaMatrix->M[1][2] = 0.0;
    result = 2i64;
    boundAreaMatrix->M[1][3] = v42;
    boundAreaMatrix->M[1][1] = v44 - v42;
    boundAreaMatrix->M[0][0] = v43 - v41;
    return result;
  }
  *(_OWORD *)&m.M[0][0] = *(_OWORD *)&viewMatrix->M[0][0];
  *(_OWORD *)&m.M[1][0] = *(_OWORD *)&viewMatrix->M[1][0];
  v16 = Scaleform::Render::TreeNode::NodeData::M2D(v12);
  *(_OWORD *)&v47.M[0][0] = *(_OWORD *)&v16->M[0][0];
  *(_OWORD *)&v47.M[1][0] = *(_OWORD *)&v16->M[1][0];
  Scaleform::Render::Matrix2x4<float>::EncloseTransform(
    (Scaleform::Render::Matrix2x4<float> *)&v47,
    &pr,
    &v12->AproxLocalBounds);
  y2 = pr.y2;
  x1 = pr.x1;
  y1 = pr.y1;
  v20 = pr.x2;
  maskBounds->x1 = pr.x1;
  maskBounds->y1 = y1;
  maskBounds->x2 = v20;
  maskBounds->y2 = y2;
  if ( y2 < v11[7].y1 || v11[7].y2 < y1 || v11[7].x2 < x1 || v20 < v11[7].x1 )
    return 1i64;
  v21 = fmaxf(v20, v11[7].x2);
  v22 = fmaxf(y2, v11[7].y2);
  v23 = fminf(v11[7].y1, y1);
  v24 = floorf(fminf(v11[7].x1, x1) - 160.0);
  v25 = floorf(v23 - 160.0);
  v26 = ceilf(v21 + 160.0);
  v27 = ceilf(v22 + 160.0);
  boundAreaMatrix->M[0][3] = v24;
  boundAreaMatrix->M[1][3] = v25;
  *(_QWORD *)&boundAreaMatrix->M[0][1] = 0i64;
  boundAreaMatrix->M[1][0] = 0.0;
  boundAreaMatrix->M[1][2] = 0.0;
  boundAreaMatrix->M[1][1] = v27 - v25;
  boundAreaMatrix->M[0][0] = v26 - v24;
  Scaleform::Render::Matrix2x4<float>::Append(boundAreaMatrix, (const Scaleform::Render::Matrix2x4<float> *)&m);
  return 2i64;
}

void __fastcall Scaleform::Render::TreeCacheContainer::forceUpdateImages(
        Scaleform::Render::TreeCacheContainer *this,
        Scaleform::Render::HAL *hal)
{
  Scaleform::Render::TreeCacheNode *pNext; // rbx
  Scaleform::Render::Rect<float> *p_SortParentBounds; // rdi

  pNext = this->Children.Root.pNext;
  p_SortParentBounds = &this->SortParentBounds;
  if ( this == (Scaleform::Render::TreeCacheContainer *)-112i64 )
    p_SortParentBounds = 0i64;
  while ( pNext != (Scaleform::Render::TreeCacheNode *)p_SortParentBounds )
  {
    pNext->forceUpdateImages(pNext, hal);
    pNext = pNext->pNext;
  }
}

bool __fastcall Scaleform::Render::DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode *>::grow(
        Scaleform::Render::DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode *> *this,
        unsigned int depth)
{
  unsigned int v4; // edi
  Scaleform::Render::TreeCacheNode **v5; // rax
  Scaleform::Render::TreeCacheNode **v6; // rsi
  unsigned int v7; // edx
  unsigned int v8; // edi
  __int64 v9; // rcx

  v4 = (depth + 31) & 0xFFFFFFE0;
  v5 = (Scaleform::Render::TreeCacheNode **)this->pHeap->Alloc(this->pHeap, 8i64 * v4, 0i64);
  v6 = v5;
  if ( v5 )
  {
    memmove(v5, this->pDepth, 8i64 * this->DepthUsed);
    v7 = 0;
    v8 = v4 - this->DepthUsed;
    if ( v8 )
    {
      do
      {
        v9 = v7 + this->DepthUsed;
        ++v7;
        v6[v9] = this->NullValue;
      }
      while ( v7 < v8 );
    }
    if ( this->pDepth != this->ArrayReserve )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->pDepth = v6;
    LOBYTE(v5) = 1;
    this->DepthAvailable = depth;
  }
  return (char)v5;
}

bool __fastcall Scaleform::Render::FixedSizeArray<Scaleform::Render::Rect2F>::grow(
        Scaleform::Render::FixedSizeArray<Scaleform::Render::Rect2F> *this,
        unsigned __int64 reserve)
{
  unsigned __int64 v3; // rsi
  Scaleform::Render::Rect2F *v4; // rax
  Scaleform::Render::Rect2F *v5; // rdi

  v3 = (reserve + 31) & 0xFFFFFFFFFFFFFFE0ui64;
  v4 = (Scaleform::Render::Rect2F *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, unsigned __int64, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                      Scaleform::Memory::pGlobalHeap,
                                      32 * v3,
                                      16i64);
  v5 = v4;
  if ( v4 )
  {
    memmove(v4, this->pData, 32 * this->Size);
    if ( this->pData != (Scaleform::Render::Rect2F *)((unsigned __int64)&this->DataReserve[15] & 0xFFFFFFFFFFFFFFF0ui64) )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->pData = v5;
    LOBYTE(v4) = 1;
    this->Reserve = v3;
  }
  return (char)v4;
}

void __fastcall Scaleform::Render::TreeCacheContainer::propagate3DFlag(
        Scaleform::Render::TreeCacheContainer *this,
        Scaleform::Render::HAL *hal,
        unsigned int parent3D)
{
  unsigned int v4; // esi
  Scaleform::Render::TreeCacheNode *pNext; // rbx
  Scaleform::Render::Rect<float> *p_SortParentBounds; // rdi

  if ( parent3D != 512 || (this->Flags & 0x200) == 0 )
  {
    v4 = this->Flags & 0x200 | parent3D;
    pNext = this->Children.Root.pNext;
    p_SortParentBounds = &this->SortParentBounds;
    if ( this == (Scaleform::Render::TreeCacheContainer *)-112i64 )
      p_SortParentBounds = 0i64;
    while ( pNext != (Scaleform::Render::TreeCacheNode *)p_SortParentBounds )
    {
      pNext->propagate3DFlag(pNext, hal, v4);
      pNext = pNext->pNext;
    }
  }
}

void __fastcall Scaleform::Render::TreeCacheContainer::propagateEdgeAA(
        Scaleform::Render::TreeCacheContainer *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::EdgeAAMode parentEdgeAA)
{
  unsigned int v5; // edi
  unsigned __int16 Flags; // cx
  Scaleform::Render::TreeCacheNode *pNext; // rbx
  Scaleform::Render::Rect<float> *p_SortParentBounds; // rsi

  if ( parentEdgeAA == EdgeAA_Disable )
  {
    v5 = 12;
  }
  else
  {
    v5 = *(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                               + 8i64
                               * (unsigned int)((__int64)((__int64)&this->pNode[-1]
                                                        - ((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64))
                                              / 56)
                               + 40) & 0xFFFFFFFFFFFFFFFEui64)
                  + 10) & 0xC;
    if ( !v5 )
      v5 = parentEdgeAA;
  }
  Flags = this->Flags;
  if ( (this->Flags & 0xC) != v5 )
  {
    pNext = this->Children.Root.pNext;
    this->Flags = v5 | Flags & 0xFFF3;
    p_SortParentBounds = &this->SortParentBounds;
    if ( this == (Scaleform::Render::TreeCacheContainer *)-112i64 )
      p_SortParentBounds = 0i64;
    while ( pNext != (Scaleform::Render::TreeCacheNode *)p_SortParentBounds )
    {
      pNext->propagateEdgeAA(pNext, hal, (Scaleform::Render::EdgeAAMode)v5);
      pNext = pNext->pNext;
    }
  }
}

void __fastcall Scaleform::Render::TreeCacheNode::propagateEdgeAA(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::EdgeAAMode parentEdgeAA)
{
  unsigned __int64 v3; // rdx
  __int16 v4; // ax

  if ( parentEdgeAA == EdgeAA_Disable )
  {
    this->Flags &= 0xFFF3u;
    this->Flags |= 0xCu;
  }
  else
  {
    v3 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                   + 8i64
                   * (unsigned int)((__int64)((__int64)&this->pNode[-1]
                                            - ((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64))
                                  / 56)
                   + 40) & 0xFFFFFFFFFFFFFFFEui64;
    v4 = *(_WORD *)(v3 + 10) & 0xC;
    if ( (*(_WORD *)(v3 + 10) & 0xC) == 0 )
      v4 = parentEdgeAA;
    this->Flags &= 0xFFF3u;
    this->Flags |= v4;
  }
}

void __fastcall Scaleform::Render::TreeCacheContainer::propagateMaskFlag(
        Scaleform::Render::TreeCacheContainer *this,
        Scaleform::Render::HAL *hal,
        unsigned int partOfMask)
{
  Scaleform::Render::TreeCacheNode *pNext; // rbx
  Scaleform::Render::Rect<float> *p_SortParentBounds; // rdi

  pNext = this->Children.Root.pNext;
  this->Flags &= ~0x40u;
  this->Flags |= partOfMask;
  p_SortParentBounds = &this->SortParentBounds;
  if ( this == (Scaleform::Render::TreeCacheContainer *)-112i64 )
    p_SortParentBounds = 0i64;
  while ( pNext != (Scaleform::Render::TreeCacheNode *)p_SortParentBounds )
  {
    if ( (pNext->Flags & 0x20) == 0 )
      pNext->propagateMaskFlag(pNext, hal, partOfMask);
    pNext = pNext->pNext;
  }
}

void __fastcall Scaleform::Render::TreeCacheNode::propagateMaskFlag(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::HAL *hal,
        unsigned int partOfMask)
{
  this->Flags &= ~0x40u;
  this->Flags |= partOfMask;
}

void __fastcall Scaleform::Render::TreeCacheContainer::propagateScale9Flag(
        Scaleform::Render::TreeCacheContainer *this,
        Scaleform::Render::HAL *hal,
        unsigned int partOfScale9)
{
  Scaleform::Render::TreeCacheNode *pNext; // rbx
  bool v7; // zf
  Scaleform::Render::Rect<float> *p_SortParentBounds; // rsi

  if ( Scaleform::Render::StateBag::GetState(
         (Scaleform::Render::StateBag *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                + 0x28)
                                                    + 8i64
                                                    * (unsigned int)((int)(LODWORD(this->pNode)
                                                                         - ((__int64)this->pNode & 0xFFFFF000)
                                                                         - 56)
                                                                   / 56)
                                                    + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                       + 64),
         State_Scale9) )
  {
    partOfScale9 |= 0x80u;
  }
  if ( (this->Flags & 0x80) != partOfScale9 )
  {
    pNext = this->Children.Root.pNext;
    this->Flags = partOfScale9 | this->Flags & 0xFF7F;
    v7 = &this->Children == 0i64;
    p_SortParentBounds = &this->SortParentBounds;
    if ( v7 )
      p_SortParentBounds = 0i64;
    while ( pNext != (Scaleform::Render::TreeCacheNode *)p_SortParentBounds )
    {
      pNext->propagateScale9Flag(pNext, hal, partOfScale9);
      pNext = pNext->pNext;
    }
  }
}

void __fastcall Scaleform::Render::TreeCacheNode::propagateScale9Flag(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::HAL *hal,
        unsigned int partOfScale9)
{
  __int16 v4; // di

  v4 = partOfScale9;
  if ( Scaleform::Render::StateBag::GetState(
         (Scaleform::Render::StateBag *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                + 0x28)
                                                    + 8i64
                                                    * (unsigned int)((int)(LODWORD(this->pNode)
                                                                         - ((__int64)this->pNode & 0xFFFFF000)
                                                                         - 56)
                                                                   / 56)
                                                    + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                       + 64),
         State_Scale9) )
  {
    v4 |= 0x80u;
  }
  this->Flags &= ~0x80u;
  this->Flags |= v4;
}

void __fastcall Scaleform::Render::TreeCacheNode::updateBlendCache(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::TreeNode::NodeData *data,
        const Scaleform::Render::TransformArgs *t,
        Scaleform::Render::TransformFlags flags,
        Scaleform::Render::Rect<float> *cullRect,
        const Scaleform::Render::Matrix3x4<float> *m3,
        bool is3d)
{
  Scaleform::Render::StateBag *p_States; // r15
  Scaleform::Render::CacheableTargetEffect *pEffect; // rbx
  const Scaleform::Render::Matrix4x4<float> *viewProjMatrix; // rax
  int v14; // ebp
  bool updated; // si
  bool v16; // r9
  Scaleform::Render::StateBag *State; // rax
  Scaleform::Render::Rect<float> returnBounds; // [rsp+30h] [rbp-88h] BYREF
  Scaleform::Render::Matrix2x4<float> areaMatrix; // [rsp+40h] [rbp-78h] BYREF

  p_States = &data->States;
  if ( Scaleform::Render::StateBag::GetState(&data->States, State_BlendMode) )
  {
    if ( (flags & 3) != 0 )
    {
      pEffect = (Scaleform::Render::CacheableTargetEffect *)this->Effects.pEffect;
      *(_OWORD *)&areaMatrix.M[0][0] = _xmm;
      returnBounds = 0i64;
      *(_OWORD *)&areaMatrix.M[1][0] = _xmm;
      if ( pEffect )
      {
        while ( pEffect->GetType(pEffect) != State_BlendMode )
        {
          pEffect = (Scaleform::Render::CacheableTargetEffect *)pEffect->pNext;
          if ( !pEffect )
            return;
        }
        viewProjMatrix = Scaleform::Render::TransformArgs::GetViewProj((Scaleform::Render::TransformArgs *)t);
        v14 = Scaleform::Render::TreeCacheNode::calcCacheableBounds(
                this,
                &returnBounds,
                &areaMatrix,
                m3,
                viewProjMatrix,
                cullRect);
        if ( v14 )
        {
          updated = 0;
          Scaleform::Render::CacheableTargetEffect::UpdateCxform(pEffect, &t->Cx);
          if ( (flags & 1) != 0 )
          {
            v16 = is3d || v14 == 1;
            updated = Scaleform::Render::CacheableTargetEffect::UpdateMatrix(pEffect, &areaMatrix, &t->Mat, v16);
          }
          if ( updated || (flags & 0x200) != 0 )
          {
            State = Scaleform::Render::StateBag::GetState(p_States, State_BlendMode);
            pEffect->Update(pEffect, hal, (const Scaleform::Render::State *)State);
          }
        }
      }
    }
  }
}

__int64 __fastcall Scaleform::Render::TreeCacheNode::updateCulling(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::TreeNode::NodeData *data,
        const Scaleform::Render::TransformArgs *t,
        Scaleform::Render::Rect<float> *cullRect,
        Scaleform::Render::TransformFlags flags)
{
  Scaleform::Render::TransformFlags v6; // er15
  int v7; // er10
  char v8; // r13
  bool is3d; // di
  const Scaleform::Render::TreeNode::NodeData *v11; // r11
  Scaleform::Render::HAL *v12; // rbx
  bool v14; // cl
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  Scaleform::Render::MaskEffect *pEffect; // rbx
  const Scaleform::Render::Matrix4x4<float> *viewProjMatrix; // rax
  int v19; // er9
  const Scaleform::Render::Matrix4x4<float> *ViewProj; // rax
  Scaleform::Render::TreeCacheRoot *pRoot; // rcx
  Scaleform::Render::TreeCacheNode *pParent; // rdx
  Scaleform::Render::TreeCacheRoot *v23; // rcx
  float v24; // xmm1_4
  float v25; // xmm1_4
  unsigned __int64 v26; // rdi
  const Scaleform::Render::Matrix4x4<float> *v27; // rax
  Scaleform::Render::TreeCacheRoot *v28; // r9
  unsigned __int16 v29; // ax
  Scaleform::Render::TreeCacheNode *v30; // rdx
  unsigned __int16 v31; // ax
  Scaleform::Render::TreeCacheNode *v32; // rdx
  Scaleform::Render::Rect<float> v33; // xmm0
  __int128 v34; // xmm1
  const Scaleform::Render::ProjectionMatrix3DState *projState; // rax
  __int128 v36; // xmm0
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  int v45; // [rsp+40h] [rbp-C0h]
  Scaleform::Render::MaskEffectState v48; // [rsp+58h] [rbp-A8h]
  Scaleform::Render::Rect<float> maskBounds; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::Render::Matrix2x4<float> boundAreaMatrix; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::Render::Matrix3x4<float> viewMatrix; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::Render::TransformArgs ta; // [rsp+D0h] [rbp-30h] BYREF

  v6 = flags;
  v7 = 0;
  v8 = 0;
  is3d = (flags & 0x80) != 0;
  v45 = 0;
  v11 = data;
  v12 = hal;
  if ( (flags & 0x10) == 0 )
    goto LABEL_51;
  maskBounds = 0i64;
  v14 = Scaleform::Render::StateBag::GetState(&data->States, State_BlendMode) != 0i64;
  if ( this->pMask || (data->Flags & 0x400) != 0 || v14 )
  {
    if ( (flags & 0x80u) == 0 )
    {
      *(_OWORD *)&boundAreaMatrix.M[0][0] = *(_OWORD *)&t->Mat.M[0][0];
      v16 = *(_OWORD *)&t->Mat.M[1][0];
      *(_OWORD *)&viewMatrix.M[2][0] = _xmm;
      *(_OWORD *)&boundAreaMatrix.M[1][0] = v16;
      v15 = v16;
      *(_OWORD *)&viewMatrix.M[0][0] = *(_OWORD *)&boundAreaMatrix.M[0][0];
    }
    else
    {
      if ( (flags & 0x40) != 0 )
      {
        Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&viewMatrix, &t->Mat3D, &t->Mat);
        goto LABEL_11;
      }
      v15 = *(_OWORD *)&t->Mat3D.M[1][0];
      *(_OWORD *)&viewMatrix.M[0][0] = *(_OWORD *)&t->Mat3D.M[0][0];
      *(_OWORD *)&viewMatrix.M[2][0] = *(_OWORD *)&t->Mat3D.M[2][0];
    }
    *(_OWORD *)&viewMatrix.M[1][0] = v15;
  }
LABEL_11:
  if ( this->pMask )
  {
    pEffect = (Scaleform::Render::MaskEffect *)this->Effects.pEffect;
    *(_OWORD *)&boundAreaMatrix.M[0][0] = _xmm;
    *(_OWORD *)&boundAreaMatrix.M[1][0] = _xmm;
    if ( pEffect )
    {
      while ( pEffect->GetType(pEffect) != State_MaskNode )
      {
        pEffect = (Scaleform::Render::MaskEffect *)pEffect->pNext;
        if ( !pEffect )
          goto LABEL_15;
      }
      ViewProj = Scaleform::Render::TransformArgs::GetViewProj((Scaleform::Render::TransformArgs *)t);
      v48 = (unsigned int)Scaleform::Render::TreeCacheNode::calcMaskBounds(
                            this,
                            &maskBounds,
                            &boundAreaMatrix,
                            &viewMatrix,
                            ViewProj);
      if ( Scaleform::Render::MaskEffect::UpdateMatrix(pEffect, v48, &boundAreaMatrix) )
      {
        this->UpdateFlags |= 0x40000u;
        pRoot = this->pRoot;
        if ( pRoot )
        {
          pParent = this->pParent;
          if ( pParent )
            Scaleform::Render::TreeCacheRoot::AddToDepthUpdate(pRoot, pParent, 0x1000000u);
        }
      }
      v19 = v48;
    }
    else
    {
LABEL_15:
      viewProjMatrix = Scaleform::Render::TransformArgs::GetViewProj((Scaleform::Render::TransformArgs *)t);
      v19 = Scaleform::Render::TreeCacheNode::calcMaskBounds(
              this,
              &maskBounds,
              &boundAreaMatrix,
              &viewMatrix,
              viewProjMatrix);
    }
    if ( (flags & 0x80) == 0 )
    {
      v23 = this->pRoot;
      if ( v23 )
      {
        if ( (*(_BYTE *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v23->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                    + 8i64
                                    * (unsigned int)((int)((int)&v23->pNode[-1] - ((__int64)v23->pNode & 0xFFFFF000))
                                                   / 56)
                                    + 40) & 0xFFFFFFFFFFFFFFFEui64)
                       + 200) & 0x30) == 0 )
        {
          if ( v19 )
          {
            if ( v19 == 1
              || (Scaleform::Render::Matrix2x4<float>::EncloseTransform(&t->Mat, &maskBounds, &maskBounds),
                  !Scaleform::Render::Rect<float>::IntersectRect(cullRect, cullRect, &maskBounds)) )
            {
              v45 = 1;
              v8 = 1;
            }
          }
        }
      }
    }
  }
  Scaleform::Render::TreeCacheNode::updateFilterCache(this, hal, data, t, flags, cullRect, &viewMatrix, is3d);
  Scaleform::Render::TreeCacheNode::updateBlendCache(this, hal, data, t, flags, cullRect, &viewMatrix, is3d);
  if ( (flags & 0x20) == 0 )
  {
    if ( v8 )
      goto LABEL_48;
    goto LABEL_35;
  }
  if ( v8 )
    goto LABEL_48;
  v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(t->Cx.M[0][3]) & _xmm);
  if ( v24 >= 0.001
    || (v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(t->Cx.M[1][3]) & _xmm), v25 >= 0.0039215689)
    || (this->Flags & 0x40) != 0 )
  {
LABEL_35:
    if ( this->pRoot )
    {
      if ( (flags & 0x80) != 0 )
      {
        Scaleform::Render::TransformArgs::GetMatrix3D((Scaleform::Render::TransformArgs *)t, flags, &viewMatrix);
        v26 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pRoot->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                        + 8i64
                        * (unsigned int)((int)(LODWORD(this->pRoot->pNode)
                                             - ((__int64)this->pRoot->pNode & 0xFFFFF000)
                                             - 56)
                                       / 56)
                        + 40) & 0xFFFFFFFFFFFFFFFEui64;
        v27 = Scaleform::Render::TransformArgs::GetViewProj((Scaleform::Render::TransformArgs *)t);
        Scaleform::Render::TransformBounds3D(
          (Scaleform::Render::Rect<float> *)&boundAreaMatrix,
          v27,
          (const Scaleform::Render::Viewport *)(v26 + 160),
          &viewMatrix,
          &data->AproxLocalBounds,
          1);
        if ( cullRect->y2 >= boundAreaMatrix.M[0][1]
          && boundAreaMatrix.M[0][3] >= cullRect->y1
          && boundAreaMatrix.M[0][2] >= cullRect->x1
          && cullRect->x2 >= boundAreaMatrix.M[0][0] )
        {
          v7 = v45;
          v11 = data;
        }
        else
        {
          v11 = data;
          v7 = 5;
          v8 = 1;
        }
        goto LABEL_50;
      }
      Scaleform::Render::Matrix2x4<float>::EncloseTransform(&t->Mat, &maskBounds, &data->AproxLocalBounds);
      if ( cullRect->y2 < maskBounds.y1
        || maskBounds.y2 < cullRect->y1
        || maskBounds.x2 < cullRect->x1
        || cullRect->x2 < maskBounds.x1 )
      {
        v8 = 1;
        v7 = 3;
        goto LABEL_49;
      }
    }
LABEL_48:
    v7 = v45;
    goto LABEL_49;
  }
  v8 = 1;
  v7 = 2;
LABEL_49:
  v11 = data;
LABEL_50:
  v12 = hal;
LABEL_51:
  v28 = this->pRoot;
  if ( v28
    && (*(_BYTE *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v28->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                              + 8i64
                              * (unsigned int)((int)(LODWORD(v28->pNode) - ((__int64)v28->pNode & 0xFFFFF000) - 56) / 56)
                              + 40) & 0xFFFFFFFFFFFFFFFEui64)
                 + 200) & 0x30) != 0
    || !v8
    || v7 == 5
    || v7 == 3 && (v11->Flags & 0x4000) != 0
    || this == v28 )
  {
    v31 = this->Flags;
    if ( (v31 & 2) != 0 )
    {
      this->Flags = v31 & 0xFFFD;
      if ( v28 )
      {
        v32 = this->pParent;
        if ( v32 )
          Scaleform::Render::TreeCacheRoot::AddToDepthUpdate(v28, v32, 0x1000000u);
      }
    }
  }
  else
  {
    v29 = this->Flags;
    if ( (v29 & 2) == 0 )
    {
      this->Flags = v29 | 2;
      if ( v28 )
      {
        v30 = this->pParent;
        if ( v30 )
          Scaleform::Render::TreeCacheRoot::AddToDepthUpdate(v28, v30, 0x1000000u);
      }
    }
    v6 = flags & 0xFFFFFFEF;
  }
  if ( this->pMask )
  {
    if ( (v6 & 0x80u) != 0 )
    {
      if ( (v6 & 0x40) != 0 )
      {
        Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&viewMatrix, &t->Mat3D, &t->Mat);
      }
      else
      {
        v42 = *(_OWORD *)&t->Mat3D.M[1][0];
        *(_OWORD *)&viewMatrix.M[0][0] = *(_OWORD *)&t->Mat3D.M[0][0];
        v43 = *(_OWORD *)&t->Mat3D.M[2][0];
        *(_OWORD *)&viewMatrix.M[1][0] = v42;
        *(_OWORD *)&viewMatrix.M[2][0] = v43;
      }
      Scaleform::Render::TransformArgs::TransformArgs(&ta, t, &viewMatrix);
      ta.Mat = *(Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152];
    }
    else
    {
      v33 = t->CullRect;
      v34 = *(_OWORD *)&t->Cx.M[1][0];
      ta.viewState = t->viewState;
      projState = t->projState;
      ta.CullRect = v33;
      v36 = *(_OWORD *)&t->Mat.M[0][0];
      ta.projState = projState;
      LOBYTE(projState) = t->bRecomputeViewProj;
      *(_OWORD *)&ta.Mat.M[0][0] = v36;
      v37 = *(_OWORD *)&t->Mat.M[1][0];
      ta.bRecomputeViewProj = (char)projState;
      *(_OWORD *)&ta.Cx.M[1][0] = v34;
      v38 = *(_OWORD *)&t->ViewProj.M[1][0];
      *(_OWORD *)&ta.Mat.M[1][0] = v37;
      v39 = *(_OWORD *)&t->Cx.M[0][0];
      *(_OWORD *)&ta.ViewProj.M[1][0] = v38;
      v40 = *(_OWORD *)&t->ViewProj.M[3][0];
      *(_OWORD *)&ta.Cx.M[0][0] = v39;
      v41 = *(_OWORD *)&t->ViewProj.M[0][0];
      *(_OWORD *)&ta.ViewProj.M[3][0] = v40;
      *(_OWORD *)&ta.ViewProj.M[0][0] = v41;
      *(_OWORD *)&ta.ViewProj.M[2][0] = *(_OWORD *)&t->ViewProj.M[2][0];
    }
    Scaleform::Render::TreeCacheNode::updateMaskTransform(this, v12, &ta, v6);
  }
  return (unsigned int)v6;
}

void __fastcall Scaleform::Render::TreeCacheNode::updateEffectChain(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::BundleEntryRange *contentChain)
{
  Scaleform::Render::TreeCacheNode *pMask; // rcx
  Scaleform::Render::CacheEffect *pEffect; // rdx
  Scaleform::Render::CacheEffect *v7; // rdx
  Scaleform::Render::BundleEntryRange maskChain; // [rsp+20h] [rbp-28h] BYREF

  pMask = this->pMask;
  if ( pMask )
  {
    memset(&maskChain, 0, 20);
    pMask->GetPatternChain(pMask, hal, &maskChain, 0);
    pEffect = this->Effects.pEffect;
    if ( pEffect )
      Scaleform::Render::CacheEffectChain::updateBundleChain(&this->Effects, pEffect, contentChain, &maskChain);
  }
  else
  {
    v7 = this->Effects.pEffect;
    if ( v7 )
      Scaleform::Render::CacheEffectChain::updateBundleChain(&this->Effects, v7, contentChain, 0i64);
  }
}

void __fastcall Scaleform::Render::TreeCacheNode::updateFilterCache(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::TreeNode::NodeData *data,
        const Scaleform::Render::TransformArgs *t,
        Scaleform::Render::TransformFlags flags,
        Scaleform::Render::Rect<float> *cullRect,
        const Scaleform::Render::Matrix3x4<float> *m3,
        bool is3d)
{
  Scaleform::Render::CacheableTargetEffect *pEffect; // rbx
  const Scaleform::Render::Matrix4x4<float> *viewProjMatrix; // rax
  int v14; // er14
  bool updated; // si
  bool v16; // r9
  Scaleform::Render::StateBag *State; // rax
  Scaleform::Render::Rect<float> returnBounds; // [rsp+30h] [rbp-88h] BYREF
  Scaleform::Render::Matrix2x4<float> areaMatrix; // [rsp+40h] [rbp-78h] BYREF

  if ( (data->Flags & 0x400) != 0 && (flags & 0x203) != 0 )
  {
    pEffect = (Scaleform::Render::CacheableTargetEffect *)this->Effects.pEffect;
    *(_OWORD *)&areaMatrix.M[0][0] = _xmm;
    returnBounds = 0i64;
    *(_OWORD *)&areaMatrix.M[1][0] = _xmm;
    if ( pEffect )
    {
      while ( pEffect->GetType(pEffect) != State_Filter )
      {
        pEffect = (Scaleform::Render::CacheableTargetEffect *)pEffect->pNext;
        if ( !pEffect )
          return;
      }
      viewProjMatrix = Scaleform::Render::TransformArgs::GetViewProj((Scaleform::Render::TransformArgs *)t);
      v14 = Scaleform::Render::TreeCacheNode::calcCacheableBounds(
              this,
              &returnBounds,
              &areaMatrix,
              m3,
              viewProjMatrix,
              cullRect);
      if ( v14 || is3d )
      {
        updated = 0;
        Scaleform::Render::CacheableTargetEffect::UpdateCxform(pEffect, &t->Cx);
        if ( (flags & 1) != 0 )
        {
          v16 = is3d || v14 == 1;
          updated = Scaleform::Render::CacheableTargetEffect::UpdateMatrix(pEffect, &areaMatrix, &t->Mat, v16);
        }
        if ( updated || (flags & 0x200) != 0 )
        {
          State = Scaleform::Render::StateBag::GetState(&data->States, State_Filter);
          pEffect->Update(pEffect, hal, (const Scaleform::Render::State *)State);
        }
      }
    }
  }
}

void __fastcall Scaleform::Render::TreeCacheNode::updateMaskCache(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::TreeNode::NodeData *data,
        unsigned __int16 depth,
        bool updateSubtree)
{
  const volatile Scaleform::Render::TreeNode *pData; // r9
  unsigned __int64 v9; // rcx
  Scaleform::Render::TreeCacheNode *v10; // rax
  unsigned __int64 v11; // rcx
  Scaleform::Render::TreeCacheNode *pMask; // rcx
  int v13; // eax
  Scaleform::Render::TreeCacheRoot *pRoot; // rcx

  TCN_This = this;
  TCN_ThisData = data;
  if ( (data->Flags & 0x10) == 0 )
  {
    pMask = this->pMask;
    if ( !pMask )
      return;
    Scaleform::Render::TreeCacheNode::RemoveFromParent(pMask, hal);
    goto $update_on_mask_change;
  }
  pData = (const volatile Scaleform::Render::TreeNode *)Scaleform::Render::StateBag::GetState(
                                                          &data->States,
                                                          State_MaskNode)->pData;
  TCN_ChildNode = pData;
  if ( updateSubtree )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)pData & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                   + 8i64 * (unsigned int)((int)((_DWORD)pData - ((unsigned int)pData & 0xFFFFF000) - 56) / 56)
                   + 40) & 0xFFFFFFFFFFFFFFFEui64;
    (*(void (__fastcall **)(unsigned __int64, Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, _QWORD, const volatile Scaleform::Render::TreeNode *, unsigned __int16))(*(_QWORD *)v9 + 48i64))(
      v9,
      hal,
      this,
      0i64,
      pData,
      depth);
    return;
  }
  v10 = this->pMask;
  if ( pData->pRenderer != v10 || !v10 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)pData & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                    + 8i64 * (unsigned int)((int)((_DWORD)pData - ((unsigned int)pData & 0xFFFFF000) - 56) / 56)
                    + 40) & 0xFFFFFFFFFFFFFFFEui64;
    (*(void (__fastcall **)(unsigned __int64, Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, _QWORD, const volatile Scaleform::Render::TreeNode *, unsigned __int16))(*(_QWORD *)v11 + 48i64))(
      v11,
      hal,
      this,
      0i64,
      pData,
      depth);
$update_on_mask_change:
    if ( this->pRoot && this->IsPatternChainValid(this) )
    {
      v13 = 0x1000000;
      pRoot = this->pRoot;
      if ( (this->UpdateFlags & 0x80000000) == 0 )
      {
        this->pNextUpdate = pRoot->pUpdateList;
        v13 = -2130706432;
        pRoot->pUpdateList = this;
      }
      this->UpdateFlags |= v13;
    }
  }
}

void __fastcall Scaleform::Render::TreeCacheNode::updateMaskTransform(
        Scaleform::Render::TreeCacheNode *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TransformArgs *t,
        Scaleform::Render::TransformFlags flags)
{
  Scaleform::Render::TreeCacheNode *pMask; // rdx
  Scaleform::Render::TreeNode *pNode; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  const Scaleform::Render::TreeNode::NodeData *v13; // rbx
  const Scaleform::Render::Matrix2x4<float> *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  Scaleform::Render::Matrix3x4<float> m1; // [rsp+30h] [rbp-68h] BYREF

  pMask = this->pMask;
  if ( pMask )
  {
    pNode = pMask->pNode;
    v10 = *(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28);
    v11 = (__int64)((unsigned __int128)((__int64)((__int64)&pNode[-1]
                                                - ((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64))
                                      * (__int128)0x4924924924924925i64) >> 64) >> 4;
    v12 = (unsigned int)v11 + (v11 >> 63);
    v13 = (const Scaleform::Render::TreeNode::NodeData *)(*(_QWORD *)(v10 + 8 * v12 + 40) & 0xFFFFFFFFFFFFFFFEui64);
    if ( (flags & 0x80u) != 0 )
    {
      v15 = *(_OWORD *)&t->Mat3D.M[1][0];
      *(_OWORD *)&m1.M[0][0] = *(_OWORD *)&t->Mat3D.M[0][0];
      v16 = *(_OWORD *)&t->Mat3D.M[2][0];
      *(_OWORD *)&m1.M[1][0] = v15;
      *(_OWORD *)&m1.M[2][0] = v16;
      Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&t->Mat3D, &m1, &v13->M34);
    }
    else
    {
      v14 = Scaleform::Render::TreeNode::NodeData::M2D((Scaleform::Render::TreeNode::NodeData *)(*(_QWORD *)(v10 + 8 * v12 + 40) & 0xFFFFFFFFFFFFFFFEui64));
      Scaleform::Render::Matrix2x4<float>::Prepend(&t->Mat, v14);
    }
    this->pMask->UpdateTransform(this->pMask, hal, v13, t, flags);
  }
}

