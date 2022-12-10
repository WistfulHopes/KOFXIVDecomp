#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memitem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_events.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_graphicsdevice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage_queue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"

class Scaleform::Render::HALBeginDisplayItem :
	Scaleform::Render::RenderQueueItem::Interface
{
public:
	static Scaleform::Render::HALBeginDisplayItem Instance; // 0xFFFFFFFFFFFFFFFF
	virtual void EmitToHAL(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &);
	HALBeginDisplayItem(Scaleform::Render::HALBeginDisplayItem &);
	HALBeginDisplayItem(const Scaleform::Render::HALBeginDisplayItem &);
	HALBeginDisplayItem();
	virtual ~HALBeginDisplayItem();
	Scaleform::Render::HALBeginDisplayItem & operator=(Scaleform::Render::HALBeginDisplayItem &);
	Scaleform::Render::HALBeginDisplayItem & operator=(const Scaleform::Render::HALBeginDisplayItem &);
};
void Scaleform::Render::HALBeginDisplayItem::EmitToHAL(Scaleform::Render::RenderQueueItem & item, Scaleform::Render::RenderQueueProcessor & qp); // 0x140317140
class Scaleform::Render::HALEndDisplayItem :
	Scaleform::Render::RenderQueueItem::Interface
{
public:
	static Scaleform::Render::HALEndDisplayItem Instance; // 0xFFFFFFFFFFFFFFFF
	virtual void EmitToHAL(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &);
	HALEndDisplayItem(Scaleform::Render::HALEndDisplayItem &);
	HALEndDisplayItem(const Scaleform::Render::HALEndDisplayItem &);
	HALEndDisplayItem();
	virtual ~HALEndDisplayItem();
	Scaleform::Render::HALEndDisplayItem & operator=(Scaleform::Render::HALEndDisplayItem &);
	Scaleform::Render::HALEndDisplayItem & operator=(const Scaleform::Render::HALEndDisplayItem &);
};
Scaleform::Render::HAL::HALDepthStencilDescriptor Scaleform::Render::HAL::DepthStencilModeTable[8]; // 0x1409F9130
Scaleform::Render::HAL::HALBlendModeDescriptor Scaleform::Render::HAL::BlendModeTable[20]; // 0x1409F9250
Scaleform::Render::HALBeginDisplayItem Scaleform::Render::HALBeginDisplayItem::Instance; // 0x1409F9430
Scaleform::Render::HALEndDisplayItem Scaleform::Render::HALEndDisplayItem::Instance; // 0x1409F9438
void(*Scaleform::Render::HALBeginDisplayItem::nstance$initializer$::operator&)(); // 0x140739C98
void Scaleform::Render::HALEndDisplayItem::EmitToHAL(Scaleform::Render::RenderQueueItem & __formal, Scaleform::Render::RenderQueueProcessor & qp); // 0x140317160
void(*Scaleform::Render::HALEndDisplayItem::nstance$initializer$::operator&)(); // 0x140739CA0
Scaleform::Render::Matrix4x4<float> Scaleform::Render::Matrix4x4<float>::Identity; // 0x140A72170
void(*Scaleform::Render::Matrix4x4<float>::dentity$initializer$::operator&)(); // 0x140739CA8
Scaleform::Render::HAL::HAL(Scaleform::Render::ThreadCommandQueue * commandQueue); // 0x1403172E0
Scaleform::Render::MatrixState::MatrixState(const Scaleform::Render::MatrixState & __that); // 0x140317820
Scaleform::Render::HAL::RenderTargetEntry::RenderTargetEntry(const Scaleform::Render::HAL::RenderTargetEntry & __that); // 0x140317DE0
Scaleform::Render::HAL::RenderTargetEntry::RenderTargetEntry(); // 0x140317FA0
Scaleform::Render::HAL::~HAL(); // 0x140318390
const Scaleform::Render::ToleranceParams & Scaleform::Render::HAL::GetToleranceParams(); // 0x140319F50
const Scaleform::Render::GlyphCacheParams & Scaleform::Render::HAL::GetGlyphCacheParams(); // 0x140319DA0
void Scaleform::Render::HAL::SetGlyphCacheParams(const Scaleform::Render::GlyphCacheParams & params); // 0x14031C4F0
bool Scaleform::Render::HAL::SetRenderTarget(Scaleform::Render::RenderTarget * prt, bool setState); // 0x14031C540
bool Scaleform::Render::HAL::PushRenderTarget(Scaleform::Render::RenderTarget * prt, unsigned long flags, const Scaleform::Render::Rect<int> frameRect, Scaleform::Render::Color clearColor); // 0x14031B550
bool Scaleform::Render::HAL::PopRenderTarget(unsigned long flags); // 0x14031A670
bool Scaleform::Render::HAL::InitHAL(const Scaleform::Render::HALInitParams & params); // 0x140319F80
bool Scaleform::Render::HAL::ShutdownHAL(); // 0x14031C700
bool Scaleform::Render::HAL::PrepareForReset(); // 0x14031ABF0
bool Scaleform::Render::HAL::RestoreAfterReset(); // 0x14031C440
bool Scaleform::Render::HAL::BeginFrame(); // 0x140318D60
void Scaleform::Render::HAL::EndFrame(); // 0x140319810
void Scaleform::Render::HAL::Flush(); // 0x140319BB0
bool Scaleform::Render::HAL::Submit(); // 0x14031C820
bool Scaleform::Render::HAL::BeginScene(); // 0x140318E40
bool Scaleform::Render::HAL::EndScene(); // 0x1403199C0
void Scaleform::Render::HAL::BeginDisplay(Scaleform::Render::Color backgroundColor, const Scaleform::Render::Viewport & vpin, bool fullSceneBlendTarget, const Scaleform::Render::Matrix2x4<float> & viewMatrix); // 0x140318B90
void Scaleform::Render::HAL::EndDisplay(); // 0x1403197B0
void Scaleform::Render::HAL::Draw(Scaleform::Render::TreeRoot * pnode); // 0x1403191B0
void Scaleform::Render::HAL::ForceUpdateImages(Scaleform::Render::ContextImpl::Context * pcontext); // 0x140319BD0
Scaleform::Render::RenderEvents & Scaleform::Render::HAL::GetEvents(); // 0x140319D10
void Scaleform::Render::HAL::GetStats(Scaleform::Render::HAL::Stats * pstats, bool clear); // 0x140319F00
void Scaleform::Render::HAL::SetStereoDisplay(Scaleform::Render::StereoDisplay sDisplay, bool setstate); // 0x14031C610
void Scaleform::Render::HAL::SetStereoParams(Scaleform::Render::StereoParams sParams); // 0x14031C680
void Scaleform::Render::HAL::SetStereoImpl(Scaleform::Render::StereoImplBase * simpl); // 0x14031C630
void Scaleform::Render::HAL::DrawBundleEntries(Scaleform::Render::BundleIterator & ibundles); // 0x1403195B0
void Scaleform::Render::HAL::Draw(const Scaleform::Render::RenderQueueItem & item); // 0x140319510
void Scaleform::Render::HAL::Draw(Scaleform::Render::RenderQueueItem::Interface * i, void * data); // 0x140319180
void Scaleform::Render::HAL::PushMask_BeginSubmit(Scaleform::Render::MaskPrimitive * prim); // 0x14031B1D0
void Scaleform::Render::HAL::EndMaskSubmit(); // 0x140319910
void Scaleform::Render::HAL::PopMask(); // 0x14031A520
void Scaleform::Render::HAL::PushBlendMode(Scaleform::Render::BlendPrimitive * prim); // 0x14031ADA0
void Scaleform::Render::HAL::PopBlendMode(); // 0x14031A220
void Scaleform::Render::HAL::ApplyBlendMode(Scaleform::Render::BlendMode mode, bool sourceAc, bool forceAc); // 0x140318AD0
void Scaleform::Render::HAL::PrepareCacheable(Scaleform::Render::CacheablePrimitive * prim, bool unprepare); // 0x14031AA10
void Scaleform::Render::HAL::PushFilters(Scaleform::Render::FilterPrimitive * prim); // 0x14031AED0
void Scaleform::Render::HAL::PopFilters(); // 0x14031A370
void Scaleform::Render::HAL::PushView3D(const Scaleform::Render::Matrix3x4<float> & m); // 0x14031BA00
void Scaleform::Render::HAL::PushProj3D(const Scaleform::Render::Matrix4x4<float> & m); // 0x14031B500
void Scaleform::Render::HAL::PopView3D(); // 0x14031A980
void Scaleform::Render::HAL::PopProj3D(); // 0x14031A5D0
void Scaleform::Render::HAL::PushUserData(const Scaleform::Render::UserDataState::Data * data); // 0x14031B980
void Scaleform::Render::HAL::PopUserData(); // 0x14031A960
unsigned long Scaleform::Render::HAL::DrawableCommandGetFlags(const Scaleform::Render::DICommand * pcmd); // 0x1403196F0
bool Scaleform::Render::HAL::checkState(unsigned long stateFlags, const char * funcName); // 0x14031CDB0
void Scaleform::Render::HAL::beginDisplay(Scaleform::Render::BeginDisplayData * data); // 0x14031C9C0
void Scaleform::Render::HAL::endDisplay(); // 0x14031CF70
void Scaleform::Render::HAL::calcHWViewMatrix(unsigned long vpFlags, Scaleform::Render::Matrix2x4<float> * pmatrix, const Scaleform::Render::Rect<int> & viewRect, long dx, long dy); // 0x14031CC80
void Scaleform::Render::HAL::destroyDefaultRenderBuffer(); // 0x14031CDC0
Scaleform::Render::BlendMode Scaleform::Render::HAL::getLastBlendModeOrDefault(); // 0x14031D5F0
void Scaleform::Render::HAL::applyBlendMode(const Scaleform::Render::HAL::HALBlendState & state); // 0x14031C920
void Scaleform::Render::HAL::applyBlendModeEnable(bool enabled); // 0x14031C940
void Scaleform::Render::HAL::drawMaskClearRectangles(const Scaleform::Render::MatrixPoolImpl::HMatrix * matrices, unsigned long long count); // 0x14031CDF0
void Scaleform::Render::HAL::beginMaskDisplay(); // 0x14031CC70
void Scaleform::Render::HAL::endMaskDisplay(); // 0x14031D280
void Scaleform::Render::HAL::applyRasterMode(Scaleform::Render::HAL::RasterModeType mode); // 0x14031C980
void Scaleform::Render::HAL::entryChanges(Scaleform::Render::ContextImpl::Context & context, Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63> & cb, bool forceUpdateImages); // 0x14031D2C0
void Scaleform::Render::HAL::entryDestroy(Scaleform::Render::ContextImpl::Entry * p); // 0x14031D5C0
void Scaleform::Render::HAL::entryFlush(Scaleform::Render::ContextImpl::Entry * p); // 0x14014DD80
void Scaleform::Render::HAL::addComplexMeshToUpdateList(Scaleform::Render::ComplexMesh::UpdateNode & meshNode); // 0x14031C830
void Scaleform::Render::HAL::updateComplexMeshes(); // 0x14031D620//decompilation failure at 1409F9130!
//decompilation failure at 1409F9250!
//decompilation failure at 1409F9430!
//decompilation failure at 1409F9438!
//decompilation failure at 140739C98!
//decompilation failure at 140739CA0!
//decompilation failure at 140A72170!
//decompilation failure at 140739CA8!
bool __fastcall Scaleform::Render::Viewport::GetClippedRect<int>(
        Scaleform::Render::Viewport *this,
        Scaleform::Render::Rect<int> *prect,
        bool orient)
{
  int Width; // eax
  int Height; // er8
  int Top; // ebx
  int Left; // er11
  int BufferWidth; // edi
  int BufferHeight; // esi
  int v9; // er10
  int v10; // er9
  int v11; // ebp
  int v12; // edi
  int ScissorTop; // ebx
  int ScissorLeft; // er11
  int v15; // esi
  int v16; // ecx
  bool result; // al

  if ( !orient || (((this->Flags & 0x30) - 16) & 0xFFFFFFDF) != 0 )
  {
    Height = this->Height;
    Width = this->Width;
  }
  else
  {
    Width = this->Height;
    Height = this->Width;
  }
  Top = this->Top;
  Left = this->Left;
  BufferWidth = this->BufferWidth;
  BufferHeight = this->BufferHeight;
  v9 = Top + Height;
  v10 = Left + Width;
  if ( Top + Height < 0 || BufferHeight < Top || BufferWidth < Left || v10 < 0 )
  {
    result = 0;
    *(_QWORD *)&prect->x1 = 0i64;
    *(_QWORD *)&prect->x2 = 0i64;
  }
  else
  {
    v11 = 0;
    if ( Left > 0 )
      v11 = this->Left;
    prect->x1 = v11;
    if ( v10 > BufferWidth )
      v10 = BufferWidth;
    v12 = 0;
    prect->x2 = v10;
    if ( Top > 0 )
      v12 = Top;
    prect->y1 = v12;
    if ( v9 > BufferHeight )
      v9 = BufferHeight;
    prect->y2 = v9;
    if ( (this->Flags & 4) == 0 )
      return 1;
    ScissorTop = this->ScissorTop;
    ScissorLeft = this->ScissorLeft;
    v15 = ScissorLeft + this->ScissorWidth;
    v16 = ScissorTop + this->ScissorHeight;
    if ( v9 >= ScissorTop && v16 >= v12 && v15 >= v11 && v10 >= ScissorLeft )
    {
      if ( v11 > ScissorLeft )
        ScissorLeft = v11;
      prect->x1 = ScissorLeft;
      if ( v10 > v15 )
        v10 = v15;
      prect->x2 = v10;
      if ( v12 > ScissorTop )
        ScissorTop = v12;
      prect->y1 = ScissorTop;
      if ( v9 > v16 )
        v9 = v16;
      prect->y2 = v9;
      return 1;
    }
    result = 0;
    *(_QWORD *)&prect->x1 = 0i64;
    *(_QWORD *)&prect->x2 = 0i64;
  }
  return result;
}

void __fastcall Scaleform::Render::HAL::HAL(
        Scaleform::Render::HAL *this,
        Scaleform::Render::ThreadCommandQueue *commandQueue)
{
  Scaleform::MemoryHeap *pHeap; // rax
  Scaleform::MemoryHeap *v4; // rax
  Scaleform::Render::MeshKeyManager *v5; // rax
  Scaleform::Render::MeshKeyManager *v6; // rax
  Scaleform::Render::GlyphCache *v7; // rax
  Scaleform::Render::GlyphCache *v8; // rax
  _SETJMP_FLOAT128 *v9; // rcx

  this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::HAL_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::HAL_vtbl *)&Scaleform::RefCountBase<Scaleform::Render::HAL,65>::`vftable';
  this->RefCount = 1;
  this->Scaleform::Render::ContextImpl::RenderNotify::__vftable = (Scaleform::Render::ContextImpl::RenderNotify_vtbl *)&Scaleform::Render::ContextImpl::RenderNotify::`vftable';
  this->ServiceCommandInstance.Scaleform::Render::ContextImpl::RenderNotify::__vftable = (Scaleform::Render::ContextImpl::RenderNotify::ServiceCommand_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->ServiceCommandInstance.Scaleform::Render::ContextImpl::RenderNotify::__vftable = (Scaleform::Render::ContextImpl::RenderNotify::ServiceCommand_vtbl *)&Scaleform::Render::ContextImpl::RenderNotify::ServiceCommand::`vftable';
  this->ServiceCommandInstance.RefCount = 1;
  this->ServiceCommandInstance.pNotify = &this->Scaleform::Render::ContextImpl::RenderNotify;
  this->ActiveContextSet.Root.pPrev = (Scaleform::Render::ContextImpl::RenderNotify::ContextNode *)&this->ActiveContextSet;
  this->ActiveContextSet.Root.pNext = (Scaleform::Render::ContextImpl::RenderNotify::ContextNode *)&this->ActiveContextSet;
  this->pRTCommandQueue = commandQueue;
  this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::HAL_vtbl *)&Scaleform::Render::HAL::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::HAL,65>'};
  this->Scaleform::Render::ContextImpl::RenderNotify::__vftable = (Scaleform::Render::ContextImpl::RenderNotify_vtbl *)&Scaleform::Render::HAL::`vftable'{for `Scaleform::Render::ContextImpl::RenderNotify'};
  this->pHeap = Scaleform::Memory::pGlobalHeap;
  *(_QWORD *)&this->RenderThreadID = 0i64;
  this->HALState = 0;
  this->CurrentPass = Display_Final;
  this->ToleranceParamsStore.Epsilon = 0.0000099999997;
  this->ToleranceParamsStore.CurveTolerance = 1.0;
  this->ToleranceParamsStore.CollinearityTolerance = 1.0;
  this->ToleranceParamsStore.IntersectionEpsilon = 0.001;
  this->ToleranceParamsStore.FillLowerScale = 0.70709997;
  this->ToleranceParamsStore.FillUpperScale = 1.4141999;
  this->ToleranceParamsStore.FillAliasedLowerScale = 0.5;
  this->ToleranceParamsStore.FillAliasedUpperScale = 2.0;
  this->ToleranceParamsStore.StrokeLowerScale = 0.99000001;
  this->ToleranceParamsStore.StrokeUpperScale = 1.01;
  this->ToleranceParamsStore.HintedStrokeLowerScale = 0.99900001;
  this->ToleranceParamsStore.HintedStrokeUpperScale = 1.001;
  this->ToleranceParamsStore.Scale9LowerScale = 0.995;
  this->ToleranceParamsStore.Scale9UpperScale = 1.005;
  this->ToleranceParamsStore.EdgeAAScale = 0.94999999;
  this->ToleranceParamsStore.MorphTolerance = 0.000099999997;
  this->ToleranceParamsStore.MinDet3D = 0.001;
  this->ToleranceParamsStore.MinScale3D = 0.050000001;
  this->ToleranceParamsStore.CurveRecursionLimit = 12;
  this->MeshCacheParamsStore.MemReserve = 3145728i64;
  this->MeshCacheParamsStore.MemLimit = 0x1000000i64;
  this->MeshCacheParamsStore.MemGranularity = 3145728i64;
  this->MeshCacheParamsStore.LRUTailSize = 10485760i64;
  this->MeshCacheParamsStore.StagingBufferSize = 0x200000i64;
  this->MeshCacheParamsStore.VBLockEvictSizeLimit = 0x40000i64;
  this->MeshCacheParamsStore.MaxBatchInstances = 24;
  this->MeshCacheParamsStore.InstancingThreshold = 5;
  this->MeshCacheParamsStore.NoBatchVerticesSizeThreshold = 0x2000;
  this->MeshCacheParamsStore.MaxVerticesSizeInBatch = 0x4000;
  this->MeshCacheParamsStore.MaxIndicesInBatch = 6144;
  this->GlyphCacheParamsStore.TextureWidth = 1024;
  this->GlyphCacheParamsStore.TextureHeight = 1024;
  this->GlyphCacheParamsStore.NumTextures = 1;
  this->GlyphCacheParamsStore.MaxSlotHeight = 48;
  this->GlyphCacheParamsStore.SlotPadding = 2;
  this->GlyphCacheParamsStore.TexUpdWidth = 256;
  this->GlyphCacheParamsStore.TexUpdHeight = 512;
  this->GlyphCacheParamsStore.MaxRasterScale = 1.0;
  this->GlyphCacheParamsStore.MaxVectorCacheSize = 500;
  this->GlyphCacheParamsStore.FauxItalicAngle = 0.25;
  this->GlyphCacheParamsStore.FauxBoldRatio = 0.045000002;
  this->GlyphCacheParamsStore.OutlineRatio = 0.0099999998;
  this->GlyphCacheParamsStore.ShadowQuality = 1.0;
  *(_WORD *)&this->GlyphCacheParamsStore.UseAutoFit = 257;
  this->GlyphCacheParamsStore.FenceWaitOnFullCache = 1;
  this->ComplexMeshUpdateList.Root.pPrev = (Scaleform::Render::ComplexMesh::UpdateNode *)&this->ComplexMeshUpdateList;
  this->ComplexMeshUpdateList.Root.pNext = (Scaleform::Render::ComplexMesh::UpdateNode *)&this->ComplexMeshUpdateList;
  this->RenderRoots.Root.pPrev = (Scaleform::Render::TreeCacheNode *)&this->ComplexMeshUpdateList;
  this->RenderRoots.Root.pNext = (Scaleform::Render::TreeCacheNode *)&this->ComplexMeshUpdateList;
  this->NotifyList.Root.pPrev = (Scaleform::Render::HALNotify *)&this->RenderRoots.Root.8;
  this->NotifyList.Root.pNext = (Scaleform::Render::HALNotify *)&this->RenderRoots.Root.8;
  this->BlendModeStack.Data.Data = 0i64;
  this->BlendModeStack.Data.Size = 0i64;
  this->BlendModeStack.Data.Policy.Capacity = 0i64;
  this->FilterStack.Data.Data = 0i64;
  this->FilterStack.Data.Size = 0i64;
  this->FilterStack.Data.Policy.Capacity = 0i64;
  this->ProjectionMatrix3DStack.Data.Data = 0i64;
  this->ProjectionMatrix3DStack.Data.Size = 0i64;
  this->ProjectionMatrix3DStack.Data.Policy.Capacity = 0i64;
  this->RenderTargetStack.Data.Data = 0i64;
  this->RenderTargetStack.Data.Size = 0i64;
  this->RenderTargetStack.Data.Policy.Capacity = 0i64;
  this->UserDataStack.Data.Data = 0i64;
  this->UserDataStack.Data.Size = 0i64;
  this->UserDataStack.Data.Policy.Capacity = 0i64;
  this->ViewMatrix3DStack.Data.Data = 0i64;
  this->ViewMatrix3DStack.Data.Size = 0i64;
  this->ViewMatrix3DStack.Data.Policy.Capacity = 0i64;
  this->FullSceneBlendTarget.pObject = 0i64;
  *(_QWORD *)&this->CurrentDepthStencilState = 1i64;
  *(_QWORD *)&this->NextSceneRasterMode = 0i64;
  *(_QWORD *)&this->AppliedSceneRasterMode = 0i64;
  *(_WORD *)&this->CurrentBlendState.SourceAc = 0;
  this->CurrentBlendState.BlendEnable = 0;
  pHeap = this->pHeap;
  this->FillFlags = 0;
  this->FillManager.__vftable = (Scaleform::Render::PrimitiveFillManager_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->FillManager.pHeap = pHeap;
  this->FillManager.__vftable = (Scaleform::Render::PrimitiveFillManager_vtbl *)&Scaleform::Render::PrimitiveFillManager::`vftable';
  this->FillManager.RefCount = 1;
  this->FillManager.FillSet.pTable = 0i64;
  this->FillManager.Gradients.pTable = 0i64;
  v4 = this->FillManager.pHeap;
  if ( !v4 )
    v4 = Scaleform::Memory::pGlobalHeap;
  this->FillManager.pHeap = v4;
  v5 = (Scaleform::Render::MeshKeyManager *)this->pHeap->Alloc(this->pHeap, 104i64, 0i64);
  if ( v5 )
    Scaleform::Render::MeshKeyManager::MeshKeyManager(v5, this->pHeap);
  else
    v6 = 0i64;
  this->pMeshKeyManager.pObject = v6;
  v7 = (Scaleform::Render::GlyphCache *)this->pHeap->Alloc(this->pHeap, 6808i64, 0i64);
  if ( v7 )
    Scaleform::Render::GlyphCache::GlyphCache(v7, this->pHeap);
  else
    v8 = 0i64;
  this->pGlyphCache.pObject = v8;
  this->pMatrixFactory = 0i64;
  this->Matrices.pObject = 0i64;
  this->pRenderBufferManager.pObject = 0i64;
  this->pMemoryManager.pObject = 0i64;
  *(_QWORD *)&this->AccumulatedStats.Primitives = 0i64;
  *(_QWORD *)&this->AccumulatedStats.Triangles = 0i64;
  *(_QWORD *)&this->AccumulatedStats.RTChanges = 0i64;
  this->Profiler.__vftable = (Scaleform::Render::ProfileViews_vtbl *)&Scaleform::Render::ProfileViews::`vftable';
  this->Profiler.PMDefault.__vftable = (Scaleform::Render::ProfileModifier_vtbl *)&Scaleform::Render::ProfileModifier::`vftable';
  this->Profiler.PMDefault.FillFlags = 0;
  Scaleform::Render::MeshGenerator::MeshGenerator(&this->MeshGen, this->pHeap);
  Scaleform::Render::StrokeGenerator::StrokeGenerator(&this->StrokeGen, this->pHeap);
  Scaleform::Render::MatrixPoolImpl::MatrixPool::MatrixPool(&this->MPool, this->pHeap);
  Scaleform::Render::RenderQueue::RenderQueue(&this->Queue);
  Scaleform::Render::RenderQueueProcessor::RenderQueueProcessor(&this->QueueProcessor, &this->Queue, this);
  this->BeginDisplayDataList.FirstPage = 0i64;
  this->BeginDisplayDataList.LastPage = 0i64;
  this->BeginDisplayDataList.NumElementsInPage = 127;
  this->BeginDisplayDataList.FirstEmptySlot = 0i64;
  this->BeginDisplayDataList.pHeapOrPtr = &this->BeginDisplayDataList;
  *(_QWORD *)&this->CacheableIndex = -1i64;
  this->CacheablePrepStart = -1;
  *(_QWORD *)&this->VP.BufferWidth = 0i64;
  *(_QWORD *)&this->VP.Left = 0i64;
  this->VP.Height = 1;
  this->VP.Width = 1;
  *(_QWORD *)&this->VP.ScissorWidth = 0i64;
  *(_QWORD *)&this->VP.ScissorLeft = 0i64;
  *(_QWORD *)&this->VP.Flags = 0i64;
  *(_QWORD *)&this->ViewRect.y1 = 0i64;
  this->ViewRect.y2 = 0;
  *(_QWORD *)&this->ViewportMatrix.M[0][0] = 1065353216i64;
  *(_QWORD *)&this->ViewportMatrix.M[0][2] = 0i64;
  this->ViewportMatrix.M[1][0] = 0.0;
  *(_QWORD *)&this->ViewportMatrix.M[1][1] = 1065353216i64;
  this->ViewportMatrix.M[1][3] = 0.0;
  ActorWeapon::ActionFlagCheck(v9);
}

void __fastcall Scaleform::Render::MatrixState::MatrixState(
        Scaleform::Render::MatrixState *this,
        const Scaleform::Render::MatrixState *__that)
{
  int y2; // er8
  int x2; // edx
  int y1; // ecx
  int v7; // er8
  int v8; // edx
  int v9; // ecx
  Scaleform::RefCountVImpl *pObject; // rcx

  this->__vftable = (Scaleform::Render::MatrixState_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::MatrixState_vtbl *)&Scaleform::Render::MatrixState::`vftable';
  this->View2D = __that->View2D;
  this->View3D = __that->View3D;
  this->Proj3D = __that->Proj3D;
  this->Proj3DLeft = __that->Proj3DLeft;
  this->Proj3DRight = __that->Proj3DRight;
  this->User = __that->User;
  this->User3D = __that->User3D;
  this->Orient2D = __that->Orient2D;
  this->Orient3D = __that->Orient3D;
  y2 = __that->ViewRectOriginal.y2;
  x2 = __that->ViewRectOriginal.x2;
  y1 = __that->ViewRectOriginal.y1;
  this->ViewRectOriginal.x1 = __that->ViewRectOriginal.x1;
  this->ViewRectOriginal.y1 = y1;
  this->ViewRectOriginal.x2 = x2;
  this->ViewRectOriginal.y2 = y2;
  v7 = __that->ViewRect.y2;
  v8 = __that->ViewRect.x2;
  v9 = __that->ViewRect.y1;
  this->ViewRect.x1 = __that->ViewRect.x1;
  this->ViewRect.y1 = v9;
  this->ViewRect.x2 = v8;
  this->ViewRect.y2 = v7;
  this->UserView = __that->UserView;
  this->UVPO = __that->UVPO;
  this->ViewRectCompensated3D = __that->ViewRectCompensated3D;
  this->UVPOChanged = __that->UVPOChanged;
  this->OrientationSet = __that->OrientationSet;
  this->S3DDisplay = __that->S3DDisplay;
  pObject = (Scaleform::RefCountVImpl *)__that->S3DImpl.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  this->S3DImpl.pObject = __that->S3DImpl.pObject;
  this->pHAL = __that->pHAL;
  this->FullViewportMVP.M[0][0] = __that->FullViewportMVP.M[0][0];
  this->FullViewportMVP.M[0][1] = __that->FullViewportMVP.M[0][1];
  this->FullViewportMVP.M[0][2] = __that->FullViewportMVP.M[0][2];
  this->FullViewportMVP.M[0][3] = __that->FullViewportMVP.M[0][3];
  this->FullViewportMVP.M[1][0] = __that->FullViewportMVP.M[1][0];
  this->FullViewportMVP.M[1][1] = __that->FullViewportMVP.M[1][1];
  this->FullViewportMVP.M[1][2] = __that->FullViewportMVP.M[1][2];
  this->FullViewportMVP.M[1][3] = __that->FullViewportMVP.M[1][3];
}

void __fastcall Scaleform::Render::MeshGenerator::MeshGenerator(
        Scaleform::Render::MeshGenerator *this,
        Scaleform::MemoryHeap *h)
{
  this->Heap1.pHeap = h;
  this->Heap1.Granularity = 0x2000i64;
  this->Heap1.pPagePool = 0i64;
  this->Heap1.pLastPage = 0i64;
  this->Heap1.MaxPages = 0i64;
  this->Heap2.pHeap = h;
  this->Heap2.Granularity = 0x2000i64;
  this->Heap2.pPagePool = 0i64;
  this->Heap2.pLastPage = 0i64;
  this->Heap2.MaxPages = 0i64;
  this->Heap3.pHeap = h;
  this->Heap3.Granularity = 0x2000i64;
  this->Heap3.pPagePool = 0i64;
  this->Heap3.pLastPage = 0i64;
  this->Heap3.MaxPages = 0i64;
  this->Heap4.pHeap = h;
  this->Heap4.Granularity = 0x2000i64;
  this->Heap4.pPagePool = 0i64;
  this->Heap4.pLastPage = 0i64;
  this->Heap4.MaxPages = 0i64;
  Scaleform::Render::Tessellator::Tessellator(&this->mTess, &this->Heap1, &this->Heap2);
  Scaleform::Render::Stroker::Stroker(&this->mStroker, &this->Heap3);
  Scaleform::Render::StrokeSorter::StrokeSorter(&this->mStrokeSorter, &this->Heap4);
  Scaleform::Render::Hairliner::Hairliner(&this->mHairliner, &this->Heap3);
  Scaleform::Render::StrokerAA::StrokerAA(&this->mStrokerAA, &this->Heap3);
}

void __fastcall Scaleform::Render::MeshKeyManager::MeshKeyManager(
        Scaleform::Render::MeshKeyManager *this,
        Scaleform::MemoryHeap *renderHeap)
{
  __int64 v4; // r8
  Scaleform::List<Scaleform::Render::MeshKeySet,Scaleform::Render::MeshKeySet,Scaleform::ListNode<Scaleform::Render::MeshKeySet> > *KeySets; // rax
  Scaleform::Render::MeshKeySet *v6; // rcx

  this->__vftable = (Scaleform::Render::MeshKeyManager_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::MeshKeyManager_vtbl *)&Scaleform::Render::MeshKeyManager::`vftable';
  Scaleform::Lock::Lock(&this->KeySetLock, 0);
  v4 = 2i64;
  KeySets = this->KeySets;
  do
  {
    v6 = (Scaleform::Render::MeshKeySet *)&KeySets[-1].Root.8;
    if ( !KeySets )
      v6 = 0i64;
    KeySets->Root.pPrev = v6;
    KeySets->Root.pNext = v6;
    ++KeySets;
    --v4;
  }
  while ( v4 );
  this->pRenderHeap = renderHeap;
}

void __fastcall Scaleform::Render::HAL::RenderTargetEntry::RenderTargetEntry(
        Scaleform::Render::HAL::RenderTargetEntry *this,
        const Scaleform::Render::HAL::RenderTargetEntry *__that)
{
  int y2; // er8
  int x2; // edx
  int y1; // ecx
  unsigned __int64 Size; // rbp
  Scaleform::Render::HAL::MaskStackEntry *Data; // r15

  if ( __that->pRenderTarget.pObject )
    __that->pRenderTarget.pObject->AddRef(__that->pRenderTarget.pObject);
  this->pRenderTarget.pObject = __that->pRenderTarget.pObject;
  Scaleform::Render::MatrixState::MatrixState(&this->OldMatrixState, &__that->OldMatrixState);
  y2 = __that->OldViewRect.y2;
  x2 = __that->OldViewRect.x2;
  y1 = __that->OldViewRect.y1;
  this->OldViewRect.x1 = __that->OldViewRect.x1;
  this->OldViewRect.y1 = y1;
  this->OldViewRect.x2 = x2;
  this->OldViewRect.y2 = y2;
  this->OldViewport.BufferWidth = __that->OldViewport.BufferWidth;
  this->OldViewport.BufferHeight = __that->OldViewport.BufferHeight;
  this->OldViewport.Left = __that->OldViewport.Left;
  this->OldViewport.Top = __that->OldViewport.Top;
  this->OldViewport.Width = __that->OldViewport.Width;
  this->OldViewport.Height = __that->OldViewport.Height;
  this->OldViewport.Flags = __that->OldViewport.Flags;
  this->OldViewport.ScissorLeft = __that->OldViewport.ScissorLeft;
  this->OldViewport.ScissorTop = __that->OldViewport.ScissorTop;
  this->OldViewport.ScissorWidth = __that->OldViewport.ScissorWidth;
  this->OldViewport.ScissorHeight = __that->OldViewport.ScissorHeight;
  this->PushFlags = __that->PushFlags;
  this->ClearColor.Raw = __that->ClearColor.Raw;
  this->MaskStackTop = __that->MaskStackTop;
  this->MaskStack.Data.Data = 0i64;
  this->MaskStack.Data.Size = 0i64;
  this->MaskStack.Data.Policy.Capacity = 0i64;
  Size = __that->MaskStack.Data.Size;
  Data = __that->MaskStack.Data.Data;
  if ( Size )
  {
    Scaleform::ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
      &this->MaskStack.Data,
      &this->MaskStack,
      Size);
    Scaleform::ConstructorMov<Scaleform::Render::HAL::MaskStackEntry>::ConstructArray(
      this->MaskStack.Data.Data,
      Size,
      Data);
  }
  this->StencilChecked = __that->StencilChecked;
  this->StencilAvailable = __that->StencilAvailable;
  this->MultiBitStencil = __that->MultiBitStencil;
  this->DepthBufferAvailable = __that->DepthBufferAvailable;
}

void __fastcall Scaleform::Render::HAL::RenderTargetEntry::RenderTargetEntry(
        Scaleform::Render::HAL::RenderTargetEntry *this)
{
  this->pRenderTarget.pObject = 0i64;
  Scaleform::Render::MatrixState::MatrixState(&this->OldMatrixState);
  *(_QWORD *)&this->OldViewRect.x1 = 0i64;
  *(_QWORD *)&this->OldViewRect.x2 = 0i64;
  *(_QWORD *)&this->OldViewport.BufferWidth = 0i64;
  *(_QWORD *)&this->OldViewport.Left = 0i64;
  this->OldViewport.Height = 1;
  this->OldViewport.Width = 1;
  *(_QWORD *)&this->OldViewport.ScissorWidth = 0i64;
  *(_QWORD *)&this->OldViewport.ScissorLeft = 0i64;
  this->OldViewport.Flags = 0;
  this->MaskStack.Data.Data = 0i64;
  this->MaskStack.Data.Size = 0i64;
  this->MaskStack.Data.Policy.Capacity = 0i64;
}

void __fastcall Scaleform::Render::StrokeGenerator::StrokeGenerator(
        Scaleform::Render::StrokeGenerator *this,
        Scaleform::MemoryHeap *h)
{
  this->Heap1.pHeap = h;
  this->Heap1.pPagePool = 0i64;
  this->Heap1.pLastPage = 0i64;
  this->Heap1.MaxPages = 0i64;
  this->Heap1.Granularity = 0x2000i64;
  this->Heap2.pHeap = h;
  this->Heap2.Granularity = 0x2000i64;
  this->Heap2.pPagePool = 0i64;
  this->Heap2.pLastPage = 0i64;
  this->Heap2.MaxPages = 0i64;
  Scaleform::Render::Stroker::Stroker(&this->mStroker, &this->Heap1);
  Scaleform::Render::StrokeSorter::StrokeSorter(&this->mStrokeSorter, &this->Heap2);
  this->mPath.__vftable = (Scaleform::Render::VertexPath_vtbl *)&Scaleform::Render::VertexPath::`vftable';
  this->mPath.Vertices.Size = 0i64;
  this->mPath.Vertices.NumPages = 0i64;
  this->mPath.Vertices.MaxPages = 0i64;
  this->mPath.Vertices.Pages = 0i64;
  this->mPath.Vertices.pHeap = &this->Heap1;
  this->mPath.Paths.Size = 0i64;
  this->mPath.Paths.NumPages = 0i64;
  this->mPath.Paths.MaxPages = 0i64;
  this->mPath.Paths.Pages = 0i64;
  this->mPath.Paths.pHeap = &this->Heap1;
  this->mPath.LastVertex = 0;
}

void __fastcall Scaleform::Render::TreeCacheRoot::TreeCacheRoot(
        Scaleform::Render::TreeCacheRoot *this,
        unsigned int flags,
        Scaleform::Render::TreeRoot *pnode)
{
  Scaleform::MemoryHeap *v4; // rax
  __int64 v5; // rdx
  Scaleform::Render::TreeCacheNode **v6; // rcx

  Scaleform::Render::TreeCacheNode::TreeCacheNode(this, pnode, flags);
  this->Children.Root.Scaleform::Render::TreeCacheContainer::pPrev = (Scaleform::Render::TreeCacheNode *)&this->SortParentBounds;
  this->Children.Root.pNext = (Scaleform::Render::TreeCacheNode *)&this->SortParentBounds;
  this->CachedChildPattern.pFirst = 0i64;
  this->CachedChildPattern.pLast = 0i64;
  this->CachedChildPattern.Length = 0x80000000;
  this->__vftable = (Scaleform::Render::TreeCacheRoot_vtbl *)&Scaleform::Render::TreeCacheRoot::`vftable';
  *(_QWORD *)&this->ViewCullRect.x1 = 0i64;
  *(_QWORD *)&this->ViewCullRect.x2 = 0i64;
  this->pUpdateList = 0i64;
  *(_WORD *)&this->ViewValid = 0;
  this->DepthUpdatesChained = 0;
  v4 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  this->DepthUpdates.DepthUsed = 0;
  this->DepthUpdates.pDepth = this->DepthUpdates.ArrayReserve;
  v5 = 16i64;
  v6 = &this->DepthUpdates.ArrayReserve[1];
  this->DepthUpdates.DepthAvailable = 32;
  this->DepthUpdates.pHeap = v4;
  this->DepthUpdates.NullValue = 0i64;
  do
  {
    *(v6 - 1) = this->DepthUpdates.NullValue;
    v6 += 2;
    *(v6 - 2) = this->DepthUpdates.NullValue;
    --v5;
  }
  while ( v5 );
  this->pRoot = this;
  this->CachedChildPattern.pLast = 0i64;
  this->CachedChildPattern.pFirst = 0i64;
  this->CachedChildPattern.Length = 0;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::~ArrayDataBase<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>(
        Scaleform::ArrayDataBase<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::Render::HAL::BlendModeStackEntry *i; // rbx
  Scaleform::Render::RenderTarget *pObject; // rcx
  Scaleform::Render::RenderTarget *v5; // rcx

  Size = this->Size;
  for ( i = &this->Data[Size - 1]; Size; --Size )
  {
    pObject = i->pLayerAlpha.pObject;
    if ( pObject )
      pObject->Release(pObject);
    v5 = i->pRenderTarget.pObject;
    if ( v5 )
      v5->Release(v5);
    if ( i->pPrimitive.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)i->pPrimitive.pObject);
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::~ArrayDataBase<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>(
        Scaleform::ArrayDataBase<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::Render::HAL::FilterStackEntry *i; // rbx
  Scaleform::Render::RenderTarget *pObject; // rcx

  Size = this->Size;
  for ( i = &this->Data[Size - 1]; Size; --Size )
  {
    pObject = i->pRenderTarget.pObject;
    if ( pObject )
      pObject->Release(pObject);
    if ( i->pPrimitive.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)i->pPrimitive.pObject);
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::~ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>(
        Scaleform::ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::RefCountVImpl **i; // rbx

  Size = this->Size;
  for ( i = (Scaleform::RefCountVImpl **)&this->Data[Size - 1]; Size; --Size )
  {
    if ( *i )
      Scaleform::RefCountImpl::Release(*i);
    i -= 4;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::Render::HAL::~HAL(Scaleform::Render::HAL *this)
{
  Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType *FirstPage; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType *pNext; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx
  Scaleform::RefCountVImpl *v8; // rcx
  Scaleform::Render::RenderTarget *v9; // rcx

  FirstPage = this->BeginDisplayDataList.FirstPage;
  this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::HAL_vtbl *)&Scaleform::Render::HAL::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::HAL,65>'};
  this->Scaleform::Render::ContextImpl::RenderNotify::__vftable = (Scaleform::Render::ContextImpl::RenderNotify_vtbl *)&Scaleform::Render::HAL::`vftable'{for `Scaleform::Render::ContextImpl::RenderNotify'};
  if ( FirstPage )
  {
    do
    {
      pNext = FirstPage->pNext;
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      FirstPage = pNext;
    }
    while ( pNext );
  }
  ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)&this->QueueProcessor);
  Scaleform::Render::RenderQueue::~RenderQueue(&this->Queue);
  Scaleform::Render::MatrixPoolImpl::MatrixPool::~MatrixPool(&this->MPool);
  this->StrokeGen.mPath.__vftable = (Scaleform::Render::VertexPath_vtbl *)&Scaleform::Render::TessBase::`vftable';
  this->StrokeGen.mStrokeSorter.__vftable = (Scaleform::Render::StrokeSorter_vtbl *)&Scaleform::Render::TessBase::`vftable';
  this->StrokeGen.mStroker.__vftable = (Scaleform::Render::Stroker_vtbl *)&Scaleform::Render::TessBase::`vftable';
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->StrokeGen.Heap2);
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->StrokeGen.Heap1);
  this->MeshGen.mStrokerAA.__vftable = (Scaleform::Render::StrokerAA_vtbl *)&Scaleform::Render::TessBase::`vftable';
  this->MeshGen.mHairliner.__vftable = (Scaleform::Render::Hairliner_vtbl *)&Scaleform::Render::TessBase::`vftable';
  this->MeshGen.mStrokeSorter.__vftable = (Scaleform::Render::StrokeSorter_vtbl *)&Scaleform::Render::TessBase::`vftable';
  this->MeshGen.mStroker.__vftable = (Scaleform::Render::Stroker_vtbl *)&Scaleform::Render::TessBase::`vftable';
  this->MeshGen.mTess.__vftable = (Scaleform::Render::Tessellator_vtbl *)&Scaleform::Render::TessBase::`vftable';
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->MeshGen.Heap4);
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->MeshGen.Heap3);
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->MeshGen.Heap2);
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->MeshGen.Heap1);
  this->Profiler.__vftable = (Scaleform::Render::ProfileViews_vtbl *)&Scaleform::Render::ProfileViews::`vftable';
  this->Profiler.PMDefault.__vftable = (Scaleform::Render::ProfileModifier_vtbl *)&Scaleform::Render::ProfileModifier::`vftable';
  pObject = (Scaleform::RefCountVImpl *)this->pMemoryManager.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v5 = (Scaleform::RefCountVImpl *)this->pRenderBufferManager.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  v6 = (Scaleform::RefCountVImpl *)this->Matrices.pObject;
  if ( v6 )
    Scaleform::RefCountImpl::Release(v6);
  v7 = (Scaleform::RefCountVImpl *)this->pGlyphCache.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  v8 = (Scaleform::RefCountVImpl *)this->pMeshKeyManager.pObject;
  if ( v8 )
    Scaleform::RefCountImpl::Release(v8);
  Scaleform::Render::PrimitiveFillManager::~PrimitiveFillManager(&this->FillManager);
  v9 = this->FullSceneBlendTarget.pObject;
  if ( v9 )
    v9->Release(v9);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->ViewMatrix3DStack.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->UserDataStack.Data.Data);
  Scaleform::ConstructorMov<Scaleform::Render::HAL::RenderTargetEntry>::DestructArray(
    this->RenderTargetStack.Data.Data,
    this->RenderTargetStack.Data.Size);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->RenderTargetStack.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->ProjectionMatrix3DStack.Data.Data);
  Scaleform::ArrayDataBase<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::~ArrayDataBase<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>(&this->FilterStack.Data);
  Scaleform::ArrayDataBase<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::~ArrayDataBase<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>(&this->BlendModeStack.Data);
  Scaleform::Render::ContextImpl::RenderNotify::~RenderNotify(&this->Scaleform::Render::ContextImpl::RenderNotify);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::PrimitiveFillManager::~PrimitiveFillManager(
        Scaleform::Render::PrimitiveFillManager *this)
{
  Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> >::TableType *pTable; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  Scaleform::HashSetBase<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> >::TableType *v5; // rax
  Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> >::TableType *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  Scaleform::HashSetBase<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> >::TableType *v9; // rax

  this->__vftable = (Scaleform::Render::PrimitiveFillManager_vtbl *)&Scaleform::Render::PrimitiveFillManager::`vftable';
  pTable = this->Gradients.pTable;
  if ( pTable )
  {
    v3 = 0i64;
    v4 = pTable->SizeMask + 1;
    do
    {
      v5 = this->Gradients.pTable;
      if ( *(unsigned __int64 *)((char *)&v5[1].EntryCount + v3) != -2i64 )
        *(unsigned __int64 *)((char *)&v5[1].EntryCount + v3) = -2i64;
      v3 += 24i64;
      --v4;
    }
    while ( v4 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Gradients.pTable);
    this->Gradients.pTable = 0i64;
  }
  v6 = this->FillSet.pTable;
  if ( v6 )
  {
    v7 = 0i64;
    v8 = v6->SizeMask + 1;
    do
    {
      v9 = this->FillSet.pTable;
      if ( *(unsigned __int64 *)((char *)&v9[1].EntryCount + v7) != -2i64 )
        *(unsigned __int64 *)((char *)&v9[1].EntryCount + v7) = -2i64;
      v7 += 24i64;
      --v8;
    }
    while ( v8 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->FillSet.pTable);
    this->FillSet.pTable = 0i64;
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::TreeCacheRoot::~TreeCacheRoot(Scaleform::Render::TreeCacheRoot *this)
{
  bool v1; // zf

  v1 = this->pPrev == 0i64;
  this->__vftable = (Scaleform::Render::TreeCacheRoot_vtbl *)&Scaleform::Render::TreeCacheRoot::`vftable';
  if ( !v1 )
  {
    this->pPrev->Scaleform::Render::TreeCacheContainer::Scaleform::Render::TreeCacheNode::pNext = this->pNext;
    this->pNext->Scaleform::Render::TreeCacheContainer::Scaleform::Render::TreeCacheNode::pPrev = this->pPrev;
    this->pPrev = (Scaleform::Render::TreeCacheNode *)-1i64;
    this->pNext = (Scaleform::Render::TreeCacheNode *)-1i64;
    this->pNext = 0i64;
    this->pPrev = 0i64;
  }
  if ( this->DepthUpdates.pDepth != this->DepthUpdates.ArrayReserve )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  Scaleform::Render::TreeCacheContainer::~TreeCacheContainer(this);
}

void __fastcall Scaleform::Render::HAL::ApplyBlendMode(
        Scaleform::Render::HAL *this,
        Scaleform::Render::BlendMode mode,
        bool sourceAc,
        bool forceAc)
{
  Scaleform::Render::ProfileViews *p_Profiler; // rcx
  __int64 v7; // rdx
  int v10; // eax
  Scaleform::Render::BlendMode v11; // er10
  unsigned int FillFlags; // edx
  Scaleform::Render::HAL_vtbl *v13; // rax

  p_Profiler = &this->Profiler;
  v7 = 0i64;
  if ( (unsigned int)mode < Blend_Count )
    v7 = (unsigned int)mode;
  v10 = p_Profiler->GetBlendMode(p_Profiler, (Scaleform::Render::BlendMode)v7);
  this->FillFlags &= 0xFFFFFFFC;
  v11 = v10;
  FillFlags = this->FillFlags;
  if ( (unsigned int)(v10 - 3) <= 1 )
  {
    this->FillFlags = FillFlags | 1;
  }
  else if ( v10 == 10 )
  {
    this->FillFlags = FillFlags | 2;
    this->FillFlags |= 0x20u;
    goto LABEL_10;
  }
  if ( v10 <= 1 )
    this->FillFlags &= ~0x20u;
  else
    this->FillFlags |= 0x20u;
LABEL_10:
  v13 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  this->CurrentBlendState.Mode = v11;
  this->CurrentBlendState.SourceAc = sourceAc;
  this->CurrentBlendState.ForceAc = forceAc;
  v13->applyBlendModeImpl(this, v11, sourceAc, forceAc);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::Render::HAL::BeginDisplay(
        Scaleform::Render::HAL *this,
        unsigned int *backgroundColor,
        const Scaleform::Render::Viewport *vpin,
        bool fullSceneBlendTarget,
        const Scaleform::Render::Matrix2x4<float> *viewMatrix)
{
  unsigned int Flags; // ebx
  unsigned int v8; // edi
  __m128i si128; // xmm14
  __int128 v10; // xmm6
  __int128 v11; // xmm10
  __int128 v12; // xmm0
  Scaleform::Render::BeginDisplayData *v13; // rcx
  __int128 v14; // xmm1
  __int64 v15[4]; // [rsp+20h] [rbp-118h] BYREF
  __int128 v16; // [rsp+44h] [rbp-F4h]
  __int128 v17; // [rsp+54h] [rbp-E4h]
  __int64 v18; // [rsp+64h] [rbp-D4h]

  if ( (this->HALState & 2) != 0 )
  {
    Flags = vpin->Flags;
    LODWORD(v16) = vpin->BufferWidth;
    v8 = *backgroundColor;
    *(_QWORD *)((char *)&v16 + 4) = *(_QWORD *)&vpin->BufferHeight;
    HIDWORD(v16) = vpin->Top;
    v17 = *(_OWORD *)&vpin->Width;
    v18 = *(_QWORD *)&vpin->ScissorWidth;
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    v10 = *(_OWORD *)&viewMatrix->M[0][0];
    v11 = *(_OWORD *)&viewMatrix->M[1][0];
    v12 = v16;
    v13 = Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2>>::allocate(&this->BeginDisplayDataList);
    v14 = v17;
    v13->Scaleform::ListNode<Scaleform::Render::BeginDisplayData> = (Scaleform::ListNode<Scaleform::Render::BeginDisplayData>)si128;
    v13->BackgroundColor.Raw = v8;
    *(_OWORD *)&v13->VP.BufferWidth = v12;
    v13->FullSceneBlendTarget = fullSceneBlendTarget;
    *(_QWORD *)&v12 = v18;
    *(_OWORD *)&v13->VP.Width = v14;
    *(_QWORD *)&v13->VP.ScissorWidth = v12;
    v13->VP.Flags = Flags;
    *(_OWORD *)&v13->ViewMatrix.M[0][0] = v10;
    *(_OWORD *)&v13->ViewMatrix.M[1][0] = v11;
    if ( (this->HALState & 4) != 0 )
    {
      v15[1] = (__int64)v13;
      v15[0] = (__int64)&Scaleform::Render::HALBeginDisplayItem::Instance;
      this->Draw(this, (const Scaleform::Render::RenderQueueItem *)v15);
    }
    else
    {
      this->beginDisplay(this, v13);
    }
  }
}

char __fastcall Scaleform::Render::HAL::BeginFrame(Scaleform::Render::HAL *this)
{
  Scaleform::Render::RenderEvents *v2; // rax
  Scaleform::Render::MeshKeyManager *v4; // rax
  Scaleform::Render::GlyphCache *v5; // rax
  Scaleform::Render::RenderQueueProcessor *v6; // rax
  Scaleform::Render::MeshCache *v7; // rax
  Scaleform::Render::TextureManager *v8; // rax
  Scaleform::Render::RenderSync *v9; // rax

  v2 = this->GetEvents(this);
  v2->Begin(v2, Event_Frame, "HAL::BeginFrame");
  if ( (this->HALState & 1) == 0 || (this->HALState & 0x2000) != 0 )
    return 0;
  this->HALState |= 2u;
  v4 = this->GetMeshKeyManager(this);
  Scaleform::Render::MeshKeyManager::ProcessKillList(v4);
  v5 = this->GetGlyphCache(this);
  Scaleform::Render::GlyphCache::OnBeginFrame(v5);
  v6 = this->GetRQProcessor(this);
  Scaleform::Render::RenderQueueProcessor::BeginFrame(v6);
  v7 = this->GetMeshCache(this);
  v7->BeginFrame(v7);
  v8 = this->GetTextureManager(this);
  v8->BeginFrame(v8);
  if ( this->GetRenderSync(this) )
  {
    v9 = this->GetRenderSync(this);
    v9->BeginFrame(v9);
  }
  return 1;
}

char __fastcall Scaleform::Render::HAL::BeginScene(Scaleform::Render::HAL *this)
{
  Scaleform::Render::GraphicsDevice *v3; // rax
  Scaleform::Render::RenderEvents *v4; // rax
  Scaleform::Render::TextureManager *v5; // rax
  _BOOL8 v6; // rdx
  Scaleform::Render::HAL_vtbl *v7; // rax
  Scaleform::Render::HAL::RasterModeType NextSceneRasterMode; // edi

  if ( !this->RenderTargetStack.Data.Size )
    return 0;
  if ( this->GetGraphicsDeviceBase(this) )
  {
    v3 = this->GetGraphicsDeviceBase(this);
    v3->Begin(v3);
  }
  v4 = this->GetEvents(this);
  v4->Begin(v4, Event_Scene, "HAL::BeginScene");
  if ( (this->HALState & 2) == 0 )
    return 0;
  if ( this->GetTextureManager(this) )
  {
    v5 = this->GetTextureManager(this);
    v5->BeginScene(v5);
  }
  this->CurrentBlendState.Mode = Blend_Count;
  this->CurrentBlendState.BlendEnable = 0;
  Scaleform::Render::HAL::ApplyBlendMode(this, Blend_None, 0, 0);
  LOBYTE(v6) = 1;
  this->applyBlendModeEnable(this, v6);
  v7 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  this->CurrentDepthStencilState = DepthStencil_Invalid;
  this->CurrentStencilRef = -1;
  ((void (__fastcall *)(Scaleform::Render::HAL *, __int64))v7->applyDepthStencilMode)(this, 1i64);
  NextSceneRasterMode = this->NextSceneRasterMode;
  this->CurrentSceneRasterMode = NextSceneRasterMode;
  this->AppliedSceneRasterMode = RasterMode_Count;
  if ( NextSceneRasterMode != RasterMode_Count )
  {
    this->applyRasterModeImpl(this, NextSceneRasterMode);
    this->AppliedSceneRasterMode = NextSceneRasterMode;
  }
  this->HALState |= 4u;
  return 1;
}

void __fastcall Scaleform::Render::LinearHeap::ClearAndRelease(Scaleform::Render::LinearHeap *this)
{
  unsigned __int64 MaxPages; // rax
  Scaleform::Render::LinearHeap::PageType *v3; // rdi
  Scaleform::MemoryHeap *pHeap; // rcx

  MaxPages = this->MaxPages;
  if ( MaxPages )
  {
    v3 = &this->pPagePool[MaxPages - 1];
    do
    {
      --this->MaxPages;
      if ( v3->pStart )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))this->pHeap->Free)(this->pHeap);
      --v3;
    }
    while ( this->MaxPages );
    pHeap = this->pHeap;
    --this->MaxPages;
    pHeap->Free(pHeap, this->pPagePool);
  }
  this->pLastPage = 0i64;
  this->pPagePool = 0i64;
  this->MaxPages = 0i64;
}

void __fastcall Scaleform::ConstructorMov<Scaleform::Render::HAL::MaskStackEntry>::ConstructArray(
        void *p,
        unsigned __int64 count,
        const Scaleform::Render::HAL::MaskStackEntry *psource)
{
  unsigned __int64 v3; // rsi
  int *v4; // rbx
  int *p_x2; // rdi
  signed __int64 v6; // r15
  Scaleform::RefCountVImpl *v7; // rcx
  int v8; // er8
  int v9; // edx
  int v10; // ecx

  if ( count )
  {
    v3 = count;
    v4 = (int *)((char *)p + 20);
    p_x2 = &psource->OldViewRect.x2;
    v6 = (char *)psource - (_BYTE *)p - 20;
    do
    {
      if ( v4 != (int *)20 )
      {
        v7 = *(Scaleform::RefCountVImpl **)((char *)v4 + v6);
        if ( v7 )
          Scaleform::Render::RenderBuffer::AddRef(v7);
        *(_QWORD *)(v4 - 5) = *(_QWORD *)((char *)v4 + v6);
        *((_BYTE *)v4 - 12) = *((_BYTE *)p_x2 - 12);
        v8 = p_x2[1];
        v9 = *p_x2;
        v10 = *(p_x2 - 1);
        *(v4 - 2) = *(p_x2 - 2);
        *(v4 - 1) = v10;
        *v4 = v9;
        v4[1] = v8;
      }
      p_x2 += 8;
      v4 += 8;
      --v3;
    }
    while ( v3 );
  }
}

void __fastcall Scaleform::ConstructorMov<Scaleform::Render::HAL::RenderTargetEntry>::DestructArray(
        Scaleform::Render::HAL::RenderTargetEntry *p,
        unsigned __int64 count)
{
  unsigned __int64 v2; // rbp
  Scaleform::Render::HAL::RenderTargetEntry *v3; // r14
  Scaleform::Ptr<Scaleform::Render::StereoImplBase> *p_S3DImpl; // rsi
  Scaleform::Render::StereoImplBase *pObject; // rdi
  Scaleform::RefCountVImpl **i; // rbx

  if ( count )
  {
    v2 = count;
    v3 = &p[count - 1];
    p_S3DImpl = &v3->OldMatrixState.S3DImpl;
    do
    {
      pObject = p_S3DImpl[17].pObject;
      for ( i = (Scaleform::RefCountVImpl **)(&p_S3DImpl[16].pObject[-1].RefCount + 8 * (_QWORD)pObject);
            pObject;
            pObject = (Scaleform::Render::StereoImplBase *)((char *)pObject - 1) )
      {
        if ( *i )
          Scaleform::RefCountImpl::Release(*i);
        i -= 4;
      }
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, p_S3DImpl[16].pObject);
      if ( p_S3DImpl->pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)p_S3DImpl->pObject);
      Scaleform::RefCountImplCore::~RefCountImplCore((Scaleform::RefCountImplCore *)&p_S3DImpl[-81]);
      if ( v3->pRenderTarget.pObject )
        v3->pRenderTarget.pObject->Release(v3->pRenderTarget.pObject);
      --v3;
      p_S3DImpl -= 104;
      --v2;
    }
    while ( v2 );
  }
}

void __fastcall Scaleform::Render::HAL::Draw(
        Scaleform::Render::HAL *this,
        Scaleform::Render::RenderQueueItem::Interface *i,
        void *data)
{
  Scaleform::Render::HAL_vtbl *v3; // rax
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  v4[0] = (__int64)i;
  v4[1] = (__int64)data;
  v3->Draw(this, (const Scaleform::Render::RenderQueueItem *)v4);
}

void __fastcall Scaleform::Render::HAL::Draw(Scaleform::Render::HAL *this, Scaleform::Render::TreeRoot *pnode)
{
  Scaleform::Render::TreeCacheRoot *pRenderer; // rbx
  unsigned __int64 v3; // r12
  __int64 v6; // r14
  unsigned __int64 v7; // r13
  Scaleform::Render::Viewport *p_VP; // rdi
  int v9; // er9
  int v10; // er8
  Scaleform::Render::MatrixState *pObject; // rax
  int v12; // edx
  int v13; // ecx
  float v14; // xmm6_4
  char v15; // bp
  float v16; // xmm7_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  bool v19; // zf
  int v20; // ebx
  int v21; // ebx
  Scaleform::Render::TreeCacheRoot *v22; // rax
  Scaleform::Render::TreeCacheRoot *v23; // rax
  Scaleform::Render::Rect<int> prect; // [rsp+20h] [rbp-88h] BYREF
  __int128 v25; // [rsp+30h] [rbp-78h]
  int v26; // [rsp+B8h] [rbp+10h] BYREF

  pRenderer = (Scaleform::Render::TreeCacheRoot *)pnode->pRenderer;
  v3 = (unsigned __int64)pnode & 0xFFFFFFFFFFFFF000ui64;
  v6 = (__int64)((__int64)&pnode[-1] - ((unsigned __int64)pnode & 0xFFFFFFFFFFFFF000ui64)) / 56;
  v7 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)pnode & 0xFFFFFFFFFFFFF000ui64) + 0x28) + 8i64 * (unsigned int)v6 + 40) & 0xFFFFFFFFFFFFFFFEui64;
  p_VP = (Scaleform::Render::Viewport *)(v7 + 160);
  if ( *(_DWORD *)(v7 + 160) && *(_DWORD *)(v7 + 164) )
  {
    v9 = *(_DWORD *)(v7 + 168);
    v10 = *(_DWORD *)(v7 + 172);
    pObject = this->Matrices.pObject;
    if ( (((*(_DWORD *)(v7 + 200) & 0x30) - 16) & 0xFFFFFFDF) != 0 )
    {
      v12 = *(_DWORD *)(v7 + 176);
      v13 = *(_DWORD *)(v7 + 180);
    }
    else
    {
      v12 = *(_DWORD *)(v7 + 180);
      v13 = *(_DWORD *)(v7 + 176);
    }
    pObject->ViewRectOriginal.x1 = v9;
    pObject->ViewRectOriginal.y1 = v10;
    pObject->ViewRectOriginal.x2 = v9 + v12;
    pObject->ViewRectOriginal.y2 = v10 + v13;
    this->Matrices.pObject->UVPOChanged = 1;
  }
  else
  {
    p_VP = &this->VP;
  }
  v25 = 0i64;
  prect = 0i64;
  if ( Scaleform::Render::Viewport::GetClippedRect<int>(p_VP, &prect, 1) )
  {
    v15 = 1;
    v18 = (float)(prect.x1 - p_VP->Left);
    v17 = (float)(prect.y1 - p_VP->Top);
    v16 = (float)(prect.x2 - p_VP->Left);
    v14 = (float)(prect.y2 - p_VP->Top);
  }
  else
  {
    v14 = *((float *)&v25 + 3);
    v15 = 0;
    v16 = *((float *)&v25 + 2);
    v17 = *((float *)&v25 + 1);
    v18 = *(float *)&v25;
  }
  if ( p_VP->BufferWidth && p_VP->BufferHeight )
  {
    if ( pRenderer )
    {
      if ( v15 == pRenderer->ViewValid
        && v18 == pRenderer->ViewCullRect.x1
        && v16 == pRenderer->ViewCullRect.x2
        && v17 == pRenderer->ViewCullRect.y1
        && v14 == pRenderer->ViewCullRect.y2 )
      {
        goto LABEL_26;
      }
      pRenderer->ViewValid = v15;
      pRenderer->ViewCullRect.x1 = v18;
      pRenderer->ViewCullRect.y1 = v17;
      pRenderer->ViewCullRect.x2 = v16;
      pRenderer->ViewCullRect.y2 = v14;
      Scaleform::Render::TreeCacheRoot::AddToUpdate(pRenderer, pRenderer, 1u);
LABEL_25:
      Scaleform::Render::TreeCacheRoot::UpdateTreeData(pRenderer, this);
LABEL_26:
      if ( v15 )
        Scaleform::Render::TreeCacheRoot::Draw(pRenderer, this);
      return;
    }
    v19 = (*(_WORD *)(v7 + 10) & 0xC) == 0;
    v20 = *(_WORD *)(v7 + 10) & 0xC;
    v26 = 71;
    if ( v19 )
      v20 = 4;
    v21 = *(_BYTE *)(v7 + 10) & 1 | v20;
    v22 = (Scaleform::Render::TreeCacheRoot *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                Scaleform::Memory::pGlobalHeap,
                                                this,
                                                480i64,
                                                &v26);
    if ( v22 )
    {
      Scaleform::Render::TreeCacheRoot::TreeCacheRoot(v22, v21, pnode);
      pRenderer = v23;
      if ( v23 )
      {
        pnode->pRenderer = v23;
        v23->pPrev = this->RenderRoots.Root.pPrev;
        v23->pNext = (Scaleform::Render::TreeCacheNode *)&this->ComplexMeshUpdateList;
        this->RenderRoots.Root.pPrev->pNext = v23;
        this->RenderRoots.Root.pPrev = v23;
        v23->ViewValid = v15;
        v23->ViewCullRect.x1 = v18;
        v23->ViewCullRect.y1 = v17;
        v23->ViewCullRect.x2 = v16;
        v23->ViewCullRect.y2 = v14;
        v23->UpdateChildSubtree(
          v23,
          this,
          (const Scaleform::Render::TreeNode::NodeData *)(*(_QWORD *)(*(_QWORD *)(v3 + 40) + 8i64 * (unsigned int)v6 + 40) & 0xFFFFFFFFFFFFFFFEui64),
          1u);
        Scaleform::Render::TreeCacheRoot::AddToUpdate(pRenderer, pRenderer, 0x1000003u);
        Scaleform::Render::TreeCacheRoot::ChainUpdatesByDepth(pRenderer);
        goto LABEL_25;
      }
    }
  }
}

void __fastcall Scaleform::Render::HAL::Draw(
        Scaleform::Render::HAL *this,
        const Scaleform::Render::RenderQueueItem *item)
{
  Scaleform::Render::RenderQueue *p_Queue; // rbx
  Scaleform::Render::RenderQueueProcessor *v4; // rsi
  Scaleform::Render::RenderQueueItem *v5; // rcx
  unsigned int v6; // ecx
  bool v7; // zf

  if ( item->pImpl == &Scaleform::Render::HALBeginDisplayItem::Instance || (this->HALState & 8) != 0 )
  {
    p_Queue = &this->Queue;
    v4 = (Scaleform::Render::RenderQueueProcessor *)((__int64 (*)(void))this->GetRQProcessor)();
    v5 = Scaleform::Render::RenderQueue::ReserveHead(p_Queue);
    if ( !v5 )
    {
      Scaleform::Render::RenderQueueProcessor::ProcessQueue(v4, QPM_One);
      v5 = Scaleform::Render::RenderQueue::ReserveHead(p_Queue);
    }
    v5->pImpl = item->pImpl;
    v5->Data = item->Data;
    v6 = ++p_Queue->QueueHead;
    v7 = v6 == p_Queue->QueueSize;
    p_Queue->HeadReserved = 0;
    if ( v7 )
      v6 = 0;
    p_Queue->QueueHead = v6;
    Scaleform::Render::RenderQueueProcessor::ProcessQueue(v4, QPM_Any);
  }
}

void __fastcall Scaleform::Render::HAL::DrawBundleEntries(
        Scaleform::Render::HAL *this,
        Scaleform::Render::BundleIterator *ibundles)
{
  Scaleform::Render::DisplayPass CurrentPass; // eax
  Scaleform::Render::BundleEntry *pFirst; // rax

  if ( this->CurrentPass == Display_All && this->IsPrepassRequired(this) )
  {
    this->SetDisplayPass(this, Display_Prepass);
    this->DrawBundleEntries(this, ibundles);
    this->SetDisplayPass(this, Display_Final);
    this->DrawBundleEntries(this, ibundles);
    this->SetDisplayPass(this, Display_All);
  }
  else
  {
    CurrentPass = this->CurrentPass;
    if ( CurrentPass == Display_Prepass )
    {
      this->GetRQProcessor(this)->QueueEmitFilter = QPF_CacheableOnly;
      this->GetRQProcessor(this)->QueuePrepareFilter = QPF_CacheableOnly;
    }
    else if ( (unsigned int)(CurrentPass - 2) <= 1 )
    {
      this->GetRQProcessor(this)->QueueEmitFilter = QPF_All;
      this->GetRQProcessor(this)->QueuePrepareFilter = QPF_All;
    }
    pFirst = ibundles->pFirst;
    if ( ibundles->pFirst )
    {
      while ( 1 )
      {
        pFirst->Key.pImpl->DrawBundleEntry(pFirst->Key.pImpl, this, pFirst->Key.Data, pFirst);
        if ( ibundles->pFirst == ibundles->pLast )
          break;
        pFirst = ibundles->pFirst->pNextPattern;
        ibundles->pFirst = pFirst;
        if ( !pFirst )
          return;
      }
      ibundles->pLast = 0i64;
      ibundles->pFirst = 0i64;
    }
  }
}

__int64 __fastcall Scaleform::Render::HAL::DrawableCommandGetFlags(
        Scaleform::Render::HAL *this,
        const Scaleform::Render::DICommand *pcmd)
{
  __int64 result; // rax

  if ( !pcmd )
    return 0i64;
  switch ( pcmd->GetType((Scaleform::Render::DICommand *)pcmd) )
  {
    case DICommandType_Map:
    case DICommandType_Unmap:
    case DICommandType_CreateTexture:
    case DICommandType_Dispose:
      result = 10i64;
      break;
    case DICommandType_Clear:
    case DICommandType_ApplyFilter:
    case DICommandType_Draw:
    case DICommandType_CopyChannel:
    case DICommandType_CopyPixels:
    case DICommandType_ColorTransform:
    case DICommandType_Compare:
    case DICommandType_FillRect:
    case DICommandType_Merge:
    case DICommandType_PaletteMap:
    case DICommandType_Scroll:
      result = 6i64;
      break;
    case DICommandType_Threshold:
      result = 2i64;
      break;
    default:
      return 0i64;
  }
  return result;
}

void __fastcall Scaleform::Render::HALBeginDisplayItem::EmitToHAL(
        Scaleform::Render::HALBeginDisplayItem *this,
        Scaleform::Render::RenderQueueItem *item,
        Scaleform::Render::RenderQueueProcessor *qp)
{
  qp->pHAL->beginDisplay(qp->pHAL, (Scaleform::Render::BeginDisplayData *)item->Data);
}

void __fastcall Scaleform::Render::HALEndDisplayItem::EmitToHAL(
        Scaleform::Render::HALEndDisplayItem *this,
        Scaleform::Render::RenderQueueItem *__formal,
        Scaleform::Render::RenderQueueProcessor *qp)
{
  ((void (__fastcall *)(Scaleform::Render::HAL *, Scaleform::Render::RenderQueueItem *))qp->pHAL->endDisplay)(
    qp->pHAL,
    __formal);
}

void __fastcall Scaleform::Render::HAL::EndDisplay(Scaleform::Render::HAL *this)
{
  __int64 v2[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (this->HALState & 0x400) != 0 )
  {
    this->Flush(this);
    this->endDisplay(this);
  }
  else
  {
    v2[1] = 0i64;
    v2[0] = (__int64)&Scaleform::Render::HALEndDisplayItem::Instance;
    this->Draw(this, (const Scaleform::Render::RenderQueueItem *)v2);
  }
}

void __fastcall Scaleform::Render::HAL::EndFrame(Scaleform::Render::HAL *this)
{
  Scaleform::Render::RenderEvents *v2; // rax
  Scaleform::Render::RenderEvents *v3; // rdi
  Scaleform::Render::RenderSync *v4; // rax
  Scaleform::Render::RenderBufferManager *v5; // rax
  Scaleform::Render::MeshCache *v6; // rax
  _SETJMP_FLOAT128 *v7; // rax
  Scaleform::Render::TextureManager *v8; // rax
  Scaleform::Render::RenderEvents *v9; // rax

  v2 = this->GetEvents(this);
  v3 = v2;
  if ( (this->HALState & 3) == 3 )
  {
    if ( this->GetRenderSync(this) )
    {
      v4 = this->GetRenderSync(this);
      v4->EndFrame(v4);
    }
    v5 = this->GetRenderBufferManager(this);
    if ( v5 )
      v5->EndFrame(v5);
    v6 = this->GetMeshCache(this);
    v6->EndFrame(v6);
    v7 = (_SETJMP_FLOAT128 *)this->GetGlyphCache(this);
    ActorWeapon::ActionFlagCheck(v7);
    v8 = this->GetTextureManager(this);
    v8->EndFrame(v8);
    Scaleform::Render::ContextImpl::RenderNotify::EndFrameContextNotify(&this->Scaleform::Render::ContextImpl::RenderNotify);
    this->HALState &= ~2u;
    v3->End(v3, Event_Frame);
    v9 = this->GetEvents(this);
    v9->EndFrame(v9);
  }
  else
  {
    v2->End(v2, Event_Frame);
  }
}

void __fastcall Scaleform::Render::HAL::EndMaskSubmit(Scaleform::Render::HAL *this)
{
  Scaleform::Render::RenderEvents *v2; // rsi
  unsigned __int64 Size; // rcx
  Scaleform::Render::HAL::RenderTargetEntry *Data; // rdx
  __int64 MaskStackTop; // r8
  __int64 v6; // rdx
  Scaleform::Render::HAL::RasterModeType CurrentSceneRasterMode; // edi

  v2 = this->GetEvents(this);
  if ( (this->HALState & 0x48) != 72 )
    goto LABEL_9;
  Size = this->RenderTargetStack.Data.Size;
  Data = this->RenderTargetStack.Data.Data;
  this->HALState &= ~0x40u;
  if ( Data[Size - 1].StencilAvailable )
  {
    MaskStackTop = Data[Size - 1].MaskStackTop;
    v6 = 5i64;
  }
  else
  {
    if ( !Data[Size - 1].DepthBufferAvailable )
      goto LABEL_7;
    MaskStackTop = 0i64;
    v6 = 7i64;
  }
  this->applyDepthStencilMode(this, (Scaleform::Render::HAL::DepthStencilMode)v6, MaskStackTop);
LABEL_7:
  CurrentSceneRasterMode = this->CurrentSceneRasterMode;
  if ( CurrentSceneRasterMode != this->AppliedSceneRasterMode )
  {
    this->applyRasterModeImpl(this, CurrentSceneRasterMode);
    this->AppliedSceneRasterMode = CurrentSceneRasterMode;
  }
LABEL_9:
  v2->End(v2, Event_Mask);
}

__int64 __fastcall Scaleform::Render::HAL::EndScene(Scaleform::Render::HAL *this)
{
  Scaleform::RefCountVImpl *v1; // rbp
  Scaleform::Render::RenderEvents *v3; // r13
  unsigned __int8 v4; // bl
  Scaleform::Render::TextureManager *v5; // rax
  Scaleform::Render::RenderSync *v6; // rax
  Scaleform::Render::HAL::RenderTargetEntry *Data; // r15
  _QWORD *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 *v12; // rbx
  char v13; // r12
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  Scaleform::RefCountVImpl *v16; // rax
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0i64;
  LODWORD(v18) = 0;
  v3 = this->GetEvents(this);
  if ( (this->HALState & 6) == 6 )
  {
    this->Flush(this);
    if ( this->GetTextureManager(this) )
    {
      v5 = this->GetTextureManager(this);
      v5->EndScene(v5);
    }
    if ( this->GetRenderSync(this) )
    {
      v6 = this->GetRenderSync(this);
      Scaleform::Render::RenderSync::NotifySubmission(v6, SubmissionType_Scene);
    }
    if ( this->RenderTargetStack.Data.Size )
    {
      Data = this->RenderTargetStack.Data.Data;
      if ( Data->pRenderTarget.pObject )
        Data->pRenderTarget.pObject->AddRef(Data->pRenderTarget.pObject);
      v8 = &Data->pRenderTarget.pObject->__vftable;
      if ( Data->pRenderTarget.pObject )
        v9 = v8[4];
      else
        v9 = 0i64;
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 8);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8i64))(v10);
        v11 = *(_QWORD *)(v9 + 8);
        v12 = &v19;
        v19 = v11;
        v13 = 1;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8i64))(v11);
        v14 = v18;
      }
      else
      {
        v11 = v19;
        v12 = &v18;
        v14 = 0i64;
        v13 = 2;
        v18 = 0i64;
      }
      v15 = (_DWORD *)*v12;
      if ( (v13 & 2) != 0 )
      {
        v13 &= ~2u;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
      }
      if ( (v13 & 1) != 0 && v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
      if ( v15 )
      {
        v16 = (Scaleform::RefCountVImpl *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 24i64))(v15);
        v1 = v16;
        if ( v16 )
          Scaleform::Render::RenderBuffer::AddRef(v16);
        if ( v15[5] == 5 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8[4] + 8i64))(v8[4]);
      }
      *(_DWORD *)&Data->StencilChecked = 0;
      if ( v1 )
        Scaleform::RefCountImpl::Release(v1);
      if ( v15 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 16i64))(v15);
      if ( v8 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 16i64))(v8);
    }
    this->HALState &= ~4u;
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  v3->End(v3, Event_Scene);
  return v4;
}

__int64 __fastcall Scaleform::Render::WrapperImageSource::GetImageType(Scaleform::Render::MorphInterpolator *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::ShapeDataInterface *))this->pShapeData.pObject->GetStrokeStyleCount)(this->pShapeData.pObject);
}

void __fastcall Scaleform::Render::HAL::Flush(Scaleform::Render::HAL *this)
{
  Scaleform::Render::RenderQueueProcessor *v1; // rax

  v1 = this->GetRQProcessor(this);
  Scaleform::Render::RenderQueueProcessor::Flush(v1);
}

void __fastcall Scaleform::Render::HAL::ForceUpdateImages(
        Scaleform::Render::HAL *this,
        Scaleform::Render::ContextImpl::Context *pcontext)
{
  Scaleform::Render::TreeCacheRoot *pNext; // rbx
  Scaleform::List<Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::ListNode<Scaleform::Render::ComplexMesh::UpdateNode> > *p_ComplexMeshUpdateList; // rbp

  Scaleform::Render::HAL::updateComplexMeshes(this);
  pNext = (Scaleform::Render::TreeCacheRoot *)this->RenderRoots.Root.pNext;
  p_ComplexMeshUpdateList = &this->ComplexMeshUpdateList;
  if ( this == (Scaleform::Render::HAL *)-320i64 )
    p_ComplexMeshUpdateList = 0i64;
  while ( pNext != (Scaleform::Render::TreeCacheRoot *)p_ComplexMeshUpdateList )
  {
    if ( !pcontext || pcontext == Scaleform::Render::ContextImpl::Entry::GetContext(pNext->pNode) )
    {
      pNext->forceUpdateImages(pNext, this);
      Scaleform::Render::TreeCacheRoot::ChainUpdatesByDepth(pNext);
      Scaleform::Render::TreeCacheRoot::UpdateTreeData(pNext, this);
    }
    pNext = (Scaleform::Render::TreeCacheRoot *)pNext->pNext;
  }
}

__int64 __fastcall Scaleform::Render::ProfileModifier::GetBlendMode(
        Scaleform::Render::ProfileModifier *this,
        Scaleform::Render::DrawModeType __formal,
        Scaleform::Render::PrimitiveFillType fill)
{
  return (unsigned int)fill;
}

__int64 __fastcall AgInputManager::getRealKey(AgInputManager *this, int button)
{
  return (unsigned int)button;
}

Scaleform::Render::Color *__fastcall Scaleform::Render::ProfileModifier::GetClearColor(
        Scaleform::Render::ProfileModifier *this,
        Scaleform::Render::Color *result,
        Scaleform::Render::DrawModeType __formal,
        Scaleform::Render::Color *color)
{
  *result = *color;
  return result;
}

Scaleform::Render::Color *__fastcall Scaleform::Render::ProfileViews::GetColor(
        Scaleform::Render::ProfileViews *this,
        Scaleform::Render::Color *result,
        Scaleform::Render::Color *color)
{
  *result = *color;
  return result;
}

Scaleform::Render::ContextImpl::RenderNotify *__fastcall Scaleform::Render::HAL::GetContextNotify(
        Scaleform::Render::HAL *this)
{
  Scaleform::Render::ContextImpl::RenderNotify *result; // rax

  result = &this->Scaleform::Render::ContextImpl::RenderNotify;
  if ( !this )
    return 0i64;
  return result;
}

std::_Align_type<double,64> *__fastcall __Get____Func_impl_U_unnamed_type_nothing___1__InstallGFxInterface_extension__YAXXZ_V__allocator_H_std__VValue_GFx_Scaleform__AEAVGFXIMovieContext_3_PEBV678_I_std__EEBAPEBXXZ(
        _Mtx_internal_imp_t *mtx)
{
  return &mtx->cs;
}

Scaleform::Render::Cxform *__fastcall Scaleform::Render::ProfileModifier::GetCxform(
        Scaleform::Render::ProfileModifier *this,
        Scaleform::Render::Cxform *result,
        Scaleform::Render::DrawModeType __formal,
        const Scaleform::Render::Cxform *cx)
{
  Scaleform::Render::Cxform *v4; // rax
  __int128 v5; // xmm1

  v4 = result;
  v5 = *(_OWORD *)&cx->M[1][0];
  *(_OWORD *)&result->M[0][0] = *(_OWORD *)&cx->M[0][0];
  *(_OWORD *)&result->M[1][0] = v5;
  return v4;
}

Scaleform::Render::Cxform *__fastcall Scaleform::Render::ProfileViews::GetCxform(
        Scaleform::Render::ProfileViews *this,
        Scaleform::Render::Cxform *result,
        const Scaleform::Render::Cxform *cx)
{
  Scaleform::Render::Cxform *v3; // rax
  __int128 v4; // xmm1

  v3 = result;
  v4 = *(_OWORD *)&cx->M[1][0];
  *(_OWORD *)&result->M[0][0] = *(_OWORD *)&cx->M[0][0];
  *(_OWORD *)&result->M[1][0] = v4;
  return v3;
}

__int64 __fastcall Scaleform::Render::HAL::GetDisplayPass(Scaleform::Render::HAL *this)
{
  return (unsigned int)this->CurrentPass;
}

__int64 __fastcall ActorOption::GetActorType(Scaleform::GFx::AS3::Instances::fl::XMLProcInstr *this)
{
  return 4i64;
}

Scaleform::Render::RenderEvents *__fastcall Scaleform::Render::HAL::GetEvents(Scaleform::Render::HAL *this)
{
  if ( dword_140A721B0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&dword_140A721B0);
    if ( dword_140A721B0 == -1 )
    {
      memset(defaultEvent.OpenCount, 0, 0x61ui64);
      atexit(Scaleform::Render::HAL::GetEvents_::_2_::_dynamic_atexit_destructor_for__defaultEvent__);
      Init_thread_footer(&dword_140A721B0);
    }
  }
  return &defaultEvent;
}

Scaleform::Render::GlyphCache *__fastcall Scaleform::Render::HAL::GetGlyphCache(Scaleform::Render::HAL *this)
{
  return this->pGlyphCache.pObject;
}

Scaleform::Render::GlyphCacheParams *__fastcall Scaleform::Render::HAL::GetGlyphCacheParams(
        Scaleform::Render::HAL *this)
{
  Scaleform::Render::GlyphCache *v2; // rax

  if ( !this->GetGlyphCache(this) )
    return &defaults;
  v2 = this->GetGlyphCache(this);
  return (Scaleform::Render::GlyphCacheParams *)v2->GetParams(&v2->Scaleform::Render::GlyphCacheConfig);
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

float __fastcall Scaleform::Render::VertexPath::GetLastX(Scaleform::Render::VertexPath *this)
{
  return this->Vertices.Pages[(this->Vertices.Size - 1) >> 4][(LODWORD(this->Vertices.Size) - 1) & 0xF].x;
}

float __fastcall Scaleform::Render::VertexPath::GetLastY(Scaleform::Render::VertexPath *this)
{
  return this->Vertices.Pages[(this->Vertices.Size - 1) >> 4][(LODWORD(this->Vertices.Size) - 1) & 0xF].y;
}

Scaleform::Render::MatrixState *__fastcall Scaleform::Render::HAL::GetMatrices(Scaleform::Render::HAL *this)
{
  return this->Matrices.pObject;
}

Scaleform::Render::MatrixPoolImpl::MatrixPool *__fastcall Scaleform::Render::HAL::GetMatrixPool(
        Scaleform::Render::HAL *this)
{
  return &this->MPool;
}

Scaleform::Render::MatrixStateFactory *__fastcall Scaleform::Render::HAL::GetMatrixStateFactory(
        Scaleform::Render::HAL *this)
{
  return this->pMatrixFactory;
}

Scaleform::Render::MemoryManager *__fastcall Scaleform::Render::HAL::GetMemoryManager(Scaleform::Render::HAL *this)
{
  return this->pMemoryManager.pObject;
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::MatrixState::GetFullViewportMatrix(
        Scaleform::Render::MatrixState *this,
        const Scaleform::Render::Size<int> *rtSize)
{
  return &this->FullViewportMVP;
}

Scaleform::Render::MeshKeyManager *__fastcall Scaleform::Render::HAL::GetMeshKeyManager(Scaleform::Render::HAL *this)
{
  return this->pMeshKeyManager.pObject;
}

Scaleform::Render::PrimitiveFillManager *__fastcall Scaleform::Render::HAL::GetPrimitiveFillManager(
        Scaleform::Render::HAL *this)
{
  return &this->FillManager;
}

Scaleform::Render::ProfileViews *__fastcall Scaleform::Render::HAL::GetProfiler(Scaleform::Render::HAL *this)
{
  return &this->Profiler;
}

Scaleform::Render::RQCacheInterface *__fastcall Scaleform::Render::HAL::GetRQCacheInterface(
        Scaleform::Render::HAL *this)
{
  return &this->QueueProcessor.Caches;
}

Scaleform::Render::RenderQueueProcessor *__fastcall Scaleform::Render::HAL::GetRQProcessor(
        Scaleform::Render::HAL *this)
{
  return &this->QueueProcessor;
}

Scaleform::Render::RenderBufferManager *__fastcall Scaleform::Render::HAL::GetRenderBufferManager(
        Scaleform::Render::HAL *this)
{
  return this->pRenderBufferManager.pObject;
}

void __fastcall Scaleform::Render::HAL::GetStats(
        Scaleform::Render::HAL *this,
        Scaleform::Render::HAL::Stats *pstats,
        bool clear)
{
  *pstats = this->AccumulatedStats;
  if ( clear )
  {
    *(_QWORD *)&this->AccumulatedStats.RTChanges = 0i64;
    *(_QWORD *)&this->AccumulatedStats.Triangles = 0i64;
    *(_QWORD *)&this->AccumulatedStats.Primitives = 0i64;
  }
}

Scaleform::Render::StrokeGenerator *__fastcall Scaleform::Render::HAL::GetStrokeGen(Scaleform::Render::HAL *this)
{
  return &this->StrokeGen;
}

Scaleform::Render::ToleranceParams *__fastcall Scaleform::Render::HAL::GetToleranceParams(Scaleform::Render::HAL *this)
{
  return &this->ToleranceParamsStore;
}

Scaleform::Render::Viewport *__fastcall Scaleform::Render::HAL::GetVP(Scaleform::Render::HAL *this)
{
  return &this->VP;
}

float __fastcall Scaleform::Render::HAL::GetViewportScaling(Scaleform::Render::HAL *this)
{
  return FLOAT_N1_0;
}

bool __fastcall Scaleform::Render::HAL::InitHAL(
        Scaleform::Render::HAL *this,
        const Scaleform::Render::HALInitParams *params)
{
  unsigned int ConfigFlags; // er8
  Scaleform::Render::MatrixStateFactory *v5; // rax
  Scaleform::Render::MatrixStateFactory *v6; // rax
  bool result; // al
  Scaleform::Render::MatrixStateFactory *v8; // rax
  __int64 v9; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::MatrixState *v11; // rsi
  Scaleform::Render::ThreadCommandQueue *pRTCommandQueue; // rcx
  Scaleform::RefCountVImpl *v13; // rsi
  Scaleform::Render::TextureManager *v14; // rdi
  Scaleform::RefCountVImpl *v15; // rcx
  Scaleform::Render::HALNotify *pNext; // rcx
  $E5DEF882A4211DACFE23170ED52532DA *v17; // rdi
  Scaleform::Render::HALNotify *v18; // rbx
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF
  int v20; // [rsp+30h] [rbp-18h]

  ConfigFlags = params->ConfigFlags;
  this->ConfigFlags = ConfigFlags;
  this->RenderThreadID = params->RenderThreadId;
  if ( (ConfigFlags & 0x40000000) != 0 )
    this->GetEvents(this)->Disabled = 1;
  if ( !this->pMatrixFactory )
  {
    v5 = (Scaleform::Render::MatrixStateFactory *)this->pHeap->Alloc(this->pHeap, 16i64, 0i64);
    if ( v5 )
      Scaleform::Render::MatrixStateFactory::MatrixStateFactory(v5, this->pHeap);
    else
      v6 = 0i64;
    this->pMatrixFactory = v6;
    if ( !v6 )
      return 0;
  }
  v8 = this->GetMatrixStateFactory(this);
  v9 = (__int64)v8->CreateMatrixState(v8);
  pObject = (Scaleform::RefCountVImpl *)this->Matrices.pObject;
  v11 = (Scaleform::Render::MatrixState *)v9;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->Matrices.pObject = v11;
  if ( !this->RenderThreadID )
    this->RenderThreadID = Concurrency::details::platform::GetCurrentThreadId();
  pRTCommandQueue = this->pRTCommandQueue;
  if ( pRTCommandQueue )
  {
    v20 = 0;
    v19 = 0i64;
    pRTCommandQueue->GetRenderInterfaces(pRTCommandQueue, (Scaleform::Render::Interfaces *)&v19);
  }
  this->GetProfiler(this);
  this->GetProfiler(this);
  if ( !this->RenderTargetStack.Data.Size )
    this->createDefaultRenderBuffer(this);
  Scaleform::Render::GlyphCache::Initialize(this->pGlyphCache.pObject, this, &this->FillManager);
  result = Scaleform::Render::RenderQueue::Initialize(&this->Queue, params->RenderQueueSize);
  if ( result )
  {
    if ( this->GetTextureManager(this) )
    {
      v13 = (Scaleform::RefCountVImpl *)this->GetRenderSync(this);
      v14 = this->GetTextureManager(this);
      if ( v13 )
        Scaleform::Render::RenderBuffer::AddRef(v13);
      v15 = (Scaleform::RefCountVImpl *)v14->pRenderSync.pObject;
      if ( v15 )
        Scaleform::RefCountImpl::Release(v15);
      v14->pRenderSync.pObject = (Scaleform::Render::RenderSync *)v13;
    }
    this->HALState |= 1u;
    pNext = this->NotifyList.Root.pNext;
    v17 = &this->RenderRoots.Root.8;
    if ( this == (Scaleform::Render::HAL *)-336i64 )
      v17 = 0i64;
    while ( pNext != (Scaleform::Render::HALNotify *)v17 )
    {
      v18 = pNext->pNext;
      pNext->OnHALEvent(pNext, HAL_Initialize);
      pNext = v18;
    }
    return 1;
  }
  return result;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

__int64 __fastcall Scaleform::Render::HAL::IsInitialized(Scaleform::Render::HAL *this)
{
  return this->HALState & 1;
}

Scaleform::Render::HAL::FilterStackEntry *__fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>>::Pop(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > > *this,
        Scaleform::Render::HAL::FilterStackEntry *result)
{
  Scaleform::Render::HAL::FilterStackEntry *v4; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::RenderTarget *v6; // rcx
  unsigned __int64 Size; // rbp
  Scaleform::Render::HAL::FilterStackEntry *v8; // rax
  __int64 v9; // rbx

  v4 = &this->Data.Data[this->Data.Size];
  pObject = (Scaleform::RefCountVImpl *)v4[-1].pPrimitive.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  result->pPrimitive.pObject = v4[-1].pPrimitive.pObject;
  v6 = v4[-1].pRenderTarget.pObject;
  if ( v6 )
    v6->AddRef(v6);
  result->pRenderTarget.pObject = v4[-1].pRenderTarget.pObject;
  Size = this->Data.Size;
  Scaleform::ArrayDataBase<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
    &this->Data,
    this,
    Size - 1);
  if ( Size - 1 > Size )
  {
    v8 = &this->Data.Data[Size];
    v9 = -1i64;
    do
    {
      if ( v8 )
      {
        v8->pPrimitive.pObject = 0i64;
        v8->pRenderTarget.pObject = 0i64;
      }
      ++v8;
      --v9;
    }
    while ( v9 );
  }
  return result;
}

void __fastcall Scaleform::Render::HAL::PopBlendMode(Scaleform::Render::HAL *this)
{
  Scaleform::ArrayLH<Scaleform::Render::HAL::BlendModeStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > *p_BlendModeStack; // rdi
  Scaleform::Render::HAL::BlendModeStackEntry *v3; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::RenderTarget *v5; // rcx
  Scaleform::Render::RenderTarget *v6; // rcx
  unsigned __int64 Size; // rbp
  Scaleform::Render::HAL::BlendModeStackEntry *v8; // rax
  __int64 v9; // rbx
  Scaleform::Render::BlendMode BlendModeValue; // edx
  Scaleform::RefCountVImpl *v11; // [rsp+20h] [rbp-28h]
  Scaleform::Render::RenderTarget *v12; // [rsp+28h] [rbp-20h]
  Scaleform::Render::RenderTarget *v13; // [rsp+30h] [rbp-18h]

  if ( (this->HALState & 8) != 0 )
  {
    p_BlendModeStack = &this->BlendModeStack;
    v3 = &this->BlendModeStack.Data.Data[this->BlendModeStack.Data.Size];
    pObject = (Scaleform::RefCountVImpl *)v3[-1].pPrimitive.pObject;
    if ( pObject )
      Scaleform::Render::RenderBuffer::AddRef(pObject);
    v5 = v3[-1].pRenderTarget.pObject;
    v11 = (Scaleform::RefCountVImpl *)v3[-1].pPrimitive.pObject;
    if ( v5 )
      v5->AddRef(v5);
    v6 = v3[-1].pLayerAlpha.pObject;
    v12 = v3[-1].pRenderTarget.pObject;
    if ( v6 )
      v6->AddRef(v6);
    Size = p_BlendModeStack->Data.Size;
    v13 = v3[-1].pLayerAlpha.pObject;
    Scaleform::ArrayDataBase<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
      &p_BlendModeStack->Data,
      p_BlendModeStack,
      Size - 1);
    if ( Size - 1 > Size )
    {
      v8 = &p_BlendModeStack->Data.Data[Size];
      v9 = -1i64;
      do
      {
        if ( v8 )
        {
          v8->pPrimitive.pObject = 0i64;
          v8->pRenderTarget.pObject = 0i64;
          v8->pLayerAlpha.pObject = 0i64;
        }
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    if ( this->BlendModeStack.Data.Size )
      BlendModeValue = p_BlendModeStack->Data.Data[p_BlendModeStack->Data.Size - 1].pPrimitive.pObject->BlendModeValue;
    else
      BlendModeValue = Blend_Normal;
    Scaleform::Render::HAL::ApplyBlendMode(this, BlendModeValue, 0, (this->HALState & 0x10) != 0);
    if ( v13 )
      v13->Release(v13);
    if ( v12 )
      v12->Release(v12);
    if ( v11 )
      Scaleform::RefCountImpl::Release(v11);
  }
}

void __fastcall Scaleform::Render::HAL::PopFilters(Scaleform::Render::HAL *this)
{
  Scaleform::Render::RenderEvents *v2; // rsi
  bool v3; // al
  Scaleform::ArrayLH<Scaleform::Render::HAL::FilterStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > *p_FilterStack; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::Render::HAL::FilterStackEntry *v6; // rdi
  Scaleform::Render::RenderTarget *pObject; // rcx
  bool v8; // zf
  Scaleform::Render::HAL_vtbl *v9; // rax
  Scaleform::RefCountVImpl *v10[2]; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::Render::HAL::FilterStackEntry result; // [rsp+30h] [rbp-28h] BYREF
  Scaleform::Render::HAL::FilterStackEntry v12; // [rsp+40h] [rbp-18h] BYREF

  v2 = this->GetEvents(this);
  v3 = this->ShouldRenderFilters(this, this->FilterStack.Data.Data[this->FilterStack.Data.Size - 1].pPrimitive.pObject);
  p_FilterStack = &this->FilterStack;
  if ( v3 )
  {
    *(_OWORD *)v10 = 0i64;
    v6 = Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>>::Pop(
           p_FilterStack,
           &v12);
    if ( v6->pPrimitive.pObject )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v6->pPrimitive.pObject);
    if ( v10[0] )
      Scaleform::RefCountImpl::Release(v10[0]);
    v10[0] = (Scaleform::RefCountVImpl *)v6->pPrimitive.pObject;
    pObject = v6->pRenderTarget.pObject;
    if ( pObject )
      pObject->AddRef(pObject);
    if ( v10[1] )
      v10[1]->Release(v10[1]);
    v10[1] = v6->pRenderTarget.pObject;
    if ( v12.pRenderTarget.pObject )
      v12.pRenderTarget.pObject->Release(v12.pRenderTarget.pObject);
    if ( v12.pPrimitive.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v12.pPrimitive.pObject);
    if ( (this->HALState & 0x200) == 0
      && ((this->HALState & 0x100) == 0 || this->CacheableIndex >= SLODWORD(this->FilterStack.Data.Size)) )
    {
      v8 = (this->HALState & 0x300) == 0;
      this->CacheableIndex = -1;
      v9 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
      if ( v8 )
      {
        v9->drawUncachedFilter(this, (const Scaleform::Render::HAL::FilterStackEntry *)v10);
      }
      else
      {
        v9->drawCachedFilter(this, (Scaleform::Render::FilterPrimitive *)v10[0]);
        this->GetRQProcessor(this)->QueueEmitFilter = QPF_All;
        this->HALState &= 0xFFFFFCFF;
      }
      if ( !this->FilterStack.Data.Size )
        this->HALState &= ~0x80u;
    }
    if ( v10[1] )
      v10[1]->Release(v10[1]);
    v5 = v10[0];
  }
  else
  {
    Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>>::Pop(
      p_FilterStack,
      &result);
    if ( result.pRenderTarget.pObject )
      result.pRenderTarget.pObject->Release(result.pRenderTarget.pObject);
    v5 = (Scaleform::RefCountVImpl *)result.pPrimitive.pObject;
  }
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  v2->End(v2, Event_Filter);
}

void __fastcall Scaleform::Render::HAL::PopMask(Scaleform::Render::HAL *this)
{
  Scaleform::Render::RenderEvents *v2; // rdi
  Scaleform::Render::HAL::RenderTargetEntry *v3; // rdx
  Scaleform::Render::HAL_vtbl *v4; // rax
  Scaleform::Render::HAL *v5; // rcx
  __int64 v6; // rdx

  v2 = this->GetEvents(this);
  v2->Begin(v2, Event_PopMask, "Scaleform::Render::HAL::PopMask");
  if ( (this->HALState & 8) != 0 && this->checkDepthStencilBufferCaps(this) )
  {
    v3 = &this->RenderTargetStack.Data.Data[this->RenderTargetStack.Data.Size];
    --v3[-1].MaskStackTop;
    if ( v3[-1].StencilAvailable )
    {
      v4 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
      v5 = this;
      if ( v3[-1].MaskStackTop )
      {
        v6 = 5i64;
LABEL_9:
        ((void (__fastcall *)(Scaleform::Render::HAL *, __int64))v4->applyDepthStencilMode)(v5, v6);
        goto LABEL_10;
      }
LABEL_8:
      v6 = 1i64;
      goto LABEL_9;
    }
    if ( v3[-1].DepthBufferAvailable )
    {
      v4 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
      v5 = this;
      goto LABEL_8;
    }
  }
LABEL_10:
  v2->End(v2, Event_PopMask);
}

void __fastcall Scaleform::Render::HAL::PopProj3D(Scaleform::Render::HAL *this)
{
  Scaleform::Render::Matrix4x4<float> *v2; // rcx
  Scaleform::Render::MatrixState *pObject; // rax

  Scaleform::ArrayData<Scaleform::Render::Matrix4x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix4x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Resize(
    &this->ProjectionMatrix3DStack.Data,
    this->ProjectionMatrix3DStack.Data.Size - 1);
  if ( this->ProjectionMatrix3DStack.Data.Size )
    v2 = &this->ProjectionMatrix3DStack.Data.Data[this->ProjectionMatrix3DStack.Data.Size - 1];
  else
    v2 = &Scaleform::Render::Matrix4x4<float>::Identity;
  pObject = this->Matrices.pObject;
  *(_OWORD *)&pObject->Proj3D.M[0][0] = *(_OWORD *)&v2->M[0][0];
  *(_OWORD *)&pObject->Proj3D.M[1][0] = *(_OWORD *)&v2->M[1][0];
  *(_OWORD *)&pObject->Proj3D.M[2][0] = *(_OWORD *)&v2->M[2][0];
  *(_OWORD *)&pObject->Proj3D.M[3][0] = *(_OWORD *)&v2->M[3][0];
  this->Matrices.pObject->UVPOChanged = 1;
}

char __fastcall Scaleform::Render::HAL::PopRenderTarget(Scaleform::Render::HAL *this, unsigned int flags)
{
  Scaleform::ArrayLH<Scaleform::Render::HAL::RenderTargetEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > *p_RenderTargetStack; // r15
  Scaleform::Render::HAL::RenderTargetEntry *v6; // r13
  _QWORD *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 *v11; // rbx
  char v12; // bp
  __int64 v13; // rcx
  _DWORD *v14; // rbx
  Scaleform::RefCountVImpl *v15; // rax
  Scaleform::RefCountVImpl *v16; // rbp
  __int64 v17; // rax
  Scaleform::Render::FenceResource *v18; // rdi
  Scaleform::Render::RenderSync *v19; // rax
  Scaleform::Render::RenderSync *v20; // rax
  int x2; // edx
  int x1; // eax
  int y2; // er8
  __int64 v24; // r8
  Scaleform::Render::RenderTargetData *v25; // rdx
  Scaleform::Render::HAL_vtbl *v26; // rax
  Scaleform::Render::RenderEvents *v27; // rax
  int v28; // [rsp+60h] [rbp+8h] BYREF
  __int64 v29; // [rsp+70h] [rbp+18h] BYREF
  __int64 v30; // [rsp+78h] [rbp+20h] BYREF

  v28 = 0;
  if ( !this->RenderTargetStack.Data.Size )
    return 0;
  p_RenderTargetStack = &this->RenderTargetStack;
  v6 = &this->RenderTargetStack.Data.Data[this->RenderTargetStack.Data.Size - 1];
  v7 = &v6->pRenderTarget.pObject->__vftable;
  if ( !v6->pRenderTarget.pObject )
    return 0;
  v8 = v7[4];
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8i64))(v9);
    v10 = *(_QWORD *)(v8 + 8);
    v11 = &v30;
    v30 = v10;
    v12 = 1;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8i64))(v10);
    v13 = v29;
  }
  else
  {
    v10 = v30;
    v11 = &v29;
    v13 = 0i64;
    v12 = 2;
    v29 = 0i64;
  }
  v14 = (_DWORD *)*v11;
  if ( (v12 & 2) != 0 )
  {
    v12 &= ~2u;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16i64))(v13);
  }
  if ( (v12 & 1) != 0 && v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
  if ( v14 )
  {
    v15 = (Scaleform::RefCountVImpl *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 24i64))(v14);
    v16 = v15;
    if ( v15 )
      Scaleform::Render::RenderBuffer::AddRef(v15);
  }
  else
  {
    v16 = 0i64;
  }
  if ( this->GetRenderSync(this) && (this->HALState & 2) != 0 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 24i64))(v7);
    if ( v17 )
    {
      v18 = (Scaleform::Render::FenceResource *)(v17 + 32);
      v19 = this->GetRenderSync(this);
      Scaleform::Render::RenderSync::AddFenceResource(v19, v18);
    }
    if ( v16 )
    {
      v20 = this->GetRenderSync(this);
      Scaleform::Render::RenderSync::AddFenceResource(v20, (Scaleform::Render::FenceResource *)&v16[2]);
    }
  }
  if ( v14 && v14[5] == 5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7[4] + 8i64))(v7[4]);
  this->Matrices.pObject->CopyFrom(this->Matrices.pObject, &v6->OldMatrixState);
  x2 = v6->OldViewRect.x2;
  x1 = v6->OldViewRect.x1;
  y2 = v6->OldViewRect.y2;
  this->ViewRect.y1 = v6->OldViewRect.y1;
  this->ViewRect.x2 = x2;
  this->ViewRect.x1 = x1;
  this->ViewRect.y2 = y2;
  *(_OWORD *)&this->VP.BufferWidth = *(_OWORD *)&v6->OldViewport.BufferWidth;
  *(_OWORD *)&this->VP.Width = *(_OWORD *)&v6->OldViewport.Width;
  *(_QWORD *)&this->VP.ScissorWidth = *(_QWORD *)&v6->OldViewport.ScissorWidth;
  this->VP.Flags = v6->OldViewport.Flags;
  Scaleform::ArrayData<Scaleform::Render::HAL::RenderTargetEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::RenderTargetEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Resize(
    &p_RenderTargetStack->Data,
    p_RenderTargetStack->Data.Size - 1);
  this->HALState &= 0xFFFFFFCF;
  if ( this->RenderTargetStack.Data.Size )
  {
    v24 = (__int64)&p_RenderTargetStack->Data.Data[p_RenderTargetStack->Data.Size];
    v25 = *(Scaleform::Render::RenderTargetData **)(*(_QWORD *)(v24 - 832) + 32i64);
    if ( (*(_BYTE *)(v24 - 52) & 8) != 0 )
      this->HALState |= 0x10u;
    v26 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
    v28 = 0;
    v26->setRenderTargetImpl(this, v25, flags | 1, (const Scaleform::Render::Color *)&v28);
    if ( (flags & 4) == 0 )
    {
      this->HALState |= 0x20u;
      this->updateViewport(this);
    }
  }
  if ( (flags & 0x10) == 0 )
  {
    v27 = this->GetEvents(this);
    v27->End(v27, Event_RenderTarget);
  }
  if ( v16 )
    Scaleform::RefCountImpl::Release(v16);
  if ( v14 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 16i64))(v14);
  return 1;
}

void __fastcall Scaleform::Render::HAL::PopUserData(Scaleform::Render::HAL *this)
{
  Scaleform::ArrayData<Scaleform::Render::UserDataState::Data const *,Scaleform::AllocatorLH<Scaleform::Render::UserDataState::Data const *,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Resize(
    &this->UserDataStack.Data,
    this->UserDataStack.Data.Size - 1);
}

void __fastcall Scaleform::Render::HAL::PopView3D(Scaleform::Render::HAL *this)
{
  Scaleform::Render::Matrix3x4<float> *v2; // rcx
  Scaleform::Render::MatrixState *pObject; // rax

  Scaleform::ArrayData<Scaleform::Render::Matrix3x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix3x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Resize(
    &this->ViewMatrix3DStack.Data,
    this->ViewMatrix3DStack.Data.Size - 1);
  if ( this->ViewMatrix3DStack.Data.Size )
    v2 = &this->ViewMatrix3DStack.Data.Data[this->ViewMatrix3DStack.Data.Size - 1];
  else
    v2 = &Scaleform::Render::Matrix3x4<float>::Identity;
  pObject = this->Matrices.pObject;
  *(_OWORD *)&pObject->View3D.M[0][0] = *(_OWORD *)&v2->M[0][0];
  *(_OWORD *)&pObject->View3D.M[1][0] = *(_OWORD *)&v2->M[1][0];
  *(_OWORD *)&pObject->View3D.M[2][0] = *(_OWORD *)&v2->M[2][0];
  this->Matrices.pObject->UVPOChanged = 1;
}

void __fastcall Scaleform::Render::HAL::PrepareCacheable(
        Scaleform::Render::HAL *this,
        Scaleform::Render::CacheablePrimitive *prim,
        bool unprepare)
{
  int CacheablePrepIndex; // eax
  __int64 v6; // rbp
  unsigned int v7; // esi
  Scaleform::Render::RenderTarget **v8; // rdi
  bool v9; // r15
  Scaleform::Render::RenderTarget **v10; // rdi
  int v11; // eax
  bool v12; // zf
  Scaleform::Render::HAL_vtbl *v13; // rax
  Scaleform::Render::RenderTarget *results[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( (this->HALState & 8) == 0 )
    return;
  if ( prim->Caching )
  {
    if ( !unprepare )
    {
      v6 = 2i64;
      Scaleform::Render::CacheablePrimitive::GetCacheResults(prim, results, 2u);
      v7 = 0;
      v8 = results;
      v9 = 1;
      while ( *v8 )
      {
        if ( (*v8)->GetStatus(*v8) == RTS_Lost
          || (*v8)->GetStatus(*v8) == RTS_Unresolved
          || (Scaleform::Render::CacheablePrimitive *)(*v8)->pRenderTargetData->CacheID != prim )
        {
          v9 = 0;
          goto LABEL_18;
        }
        ++v7;
        ++v8;
        if ( v7 >= 2 )
          goto LABEL_18;
      }
      v9 = v7 != 0;
LABEL_18:
      ++this->CacheablePrepIndex;
      if ( v9 )
      {
        if ( this->CacheablePrepStart < 0 )
        {
          v10 = results;
          do
          {
            if ( *v10 )
              (*v10)->SetInUse(*v10, RTUse_InUse);
            ++v10;
            --v6;
          }
          while ( v6 );
          this->GetRQProcessor(this)->QueuePrepareFilter = QPF_CacheableOnly;
          this->CacheablePrepStart = this->CacheablePrepIndex;
        }
      }
      else
      {
        Scaleform::Render::CacheablePrimitive::SetCacheResults(prim, Cache_Mesh, 0i64, 0);
      }
      return;
    }
  }
  else if ( !unprepare )
  {
    if ( this->CurrentPass == Display_Prepass )
      this->GetRQProcessor(this)->QueuePrepareFilter = QPF_All;
    CacheablePrepIndex = this->CacheablePrepIndex;
    if ( CacheablePrepIndex >= 0 )
      this->CacheablePrepIndex = CacheablePrepIndex + 1;
    return;
  }
  v11 = this->CacheablePrepIndex;
  if ( v11 >= 0 )
  {
    if ( v11 == this->CacheablePrepStart )
    {
      v12 = this->CurrentPass == Display_Prepass;
      v13 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
      this->CacheablePrepStart = -1;
      if ( !v12 )
      {
        *(_DWORD *)(((__int64 (*)(void))v13->GetRQProcessor)() + 44) = 0;
        --this->CacheablePrepIndex;
        return;
      }
      *(_DWORD *)(((__int64 (*)(void))v13->GetRQProcessor)() + 44) = 1;
    }
    --this->CacheablePrepIndex;
  }
}

char __fastcall Scaleform::Render::HAL::PrepareForReset(Scaleform::Render::HAL *this)
{
  Scaleform::Render::HALNotify *pNext; // rcx
  $E5DEF882A4211DACFE23170ED52532DA *v3; // rsi
  Scaleform::Render::HALNotify *v4; // rbx

  if ( (this->HALState & 0x2001) != 1 )
    return 0;
  Scaleform::Render::GlyphCache::Destroy(this->pGlyphCache.pObject);
  pNext = this->NotifyList.Root.pNext;
  v3 = &this->RenderRoots.Root.8;
  if ( this == (Scaleform::Render::HAL *)-336i64 )
    v3 = 0i64;
  while ( pNext != (Scaleform::Render::HALNotify *)v3 )
  {
    v4 = pNext->pNext;
    pNext->OnHALEvent(pNext, HAL_PrepareForReset);
    pNext = v4;
  }
  this->HALState |= 0x2000u;
  return 1;
}

void __fastcall Scaleform::ArrayData<Scaleform::Render::Matrix3x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix3x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1>>::PushBack(
        Scaleform::ArrayData<Scaleform::Render::Matrix3x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix3x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        const Scaleform::Render::Matrix3x4<float> *val)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // r8
  Scaleform::Render::Matrix3x4<float> *v6; // rdx
  Scaleform::Render::Matrix3x4<float> *v7; // rdx

  v3 = this->Size + 1;
  if ( v3 >= this->Size )
  {
    if ( v3 <= this->Policy.Capacity )
      goto LABEL_7;
    v5 = v3 + (v3 >> 2);
  }
  else
  {
    if ( v3 >= this->Policy.Capacity >> 1 )
      goto LABEL_7;
    v5 = this->Size + 1;
  }
  Scaleform::ArrayDataBase<Scaleform::Render::Matrix3x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix3x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
    this,
    this,
    v5);
LABEL_7:
  v6 = this->Data - 1;
  this->Size = v3;
  v7 = &v6[v3];
  if ( v7 )
  {
    *(_OWORD *)&v7->M[0][0] = *(_OWORD *)&val->M[0][0];
    *(_OWORD *)&v7->M[1][0] = *(_OWORD *)&val->M[1][0];
    *(_OWORD *)&v7->M[2][0] = *(_OWORD *)&val->M[2][0];
  }
}

void __fastcall Scaleform::ArrayData<Scaleform::Render::Matrix4x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix4x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1>>::PushBack(
        Scaleform::ArrayData<Scaleform::Render::Matrix4x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix4x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        const Scaleform::Render::Matrix4x4<float> *val)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // r8
  Scaleform::Render::Matrix4x4<float> *Data; // rcx
  Scaleform::Render::Matrix4x4<float> *v7; // rcx

  v3 = this->Size + 1;
  if ( v3 >= this->Size )
  {
    if ( v3 <= this->Policy.Capacity )
      goto LABEL_7;
    v5 = v3 + (v3 >> 2);
  }
  else
  {
    if ( v3 >= this->Policy.Capacity >> 1 )
      goto LABEL_7;
    v5 = this->Size + 1;
  }
  Scaleform::ArrayDataBase<Scaleform::Render::Matrix4x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix4x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
    this,
    this,
    v5);
LABEL_7:
  Data = this->Data;
  this->Size = v3;
  v7 = &Data[v3 - 1];
  if ( v7 )
  {
    *(_OWORD *)&v7->M[0][0] = *(_OWORD *)&val->M[0][0];
    *(_OWORD *)&v7->M[1][0] = *(_OWORD *)&val->M[1][0];
    *(_OWORD *)&v7->M[2][0] = *(_OWORD *)&val->M[2][0];
    *(_OWORD *)&v7->M[3][0] = *(_OWORD *)&val->M[3][0];
  }
}

void __fastcall Scaleform::Render::HAL::PushBlendMode(
        Scaleform::Render::HAL *this,
        Scaleform::Render::BlendPrimitive *prim)
{
  Scaleform::Render::BlendMode BlendModeValue; // ebp
  Scaleform::Render::HAL::BlendModeStackEntry *v5; // rbx

  if ( (this->HALState & 8) != 0 )
  {
    BlendModeValue = prim->BlendModeValue;
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)prim);
    Scaleform::ArrayDataBase<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
      &this->BlendModeStack.Data,
      &this->BlendModeStack,
      this->BlendModeStack.Data.Size + 1);
    v5 = &this->BlendModeStack.Data.Data[this->BlendModeStack.Data.Size - 1];
    if ( v5 )
    {
      if ( prim )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)prim);
      v5->pPrimitive.pObject = prim;
      v5->pRenderTarget.pObject = 0i64;
      v5->pLayerAlpha.pObject = 0i64;
      v5->NoLayerParent = 0;
      v5->LayerAlphaCleared = 0;
    }
    Scaleform::Render::HAL::ApplyBlendMode(this, BlendModeValue, 0, (this->HALState & 0x10) != 0);
    if ( prim )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)prim);
  }
}

void __fastcall Scaleform::Render::HAL::PushFilters(
        Scaleform::Render::HAL *this,
        Scaleform::Render::FilterPrimitive *prim)
{
  Scaleform::Render::RenderEvents *v4; // rax
  Scaleform::Render::HAL::FilterStackEntry *v5; // rbx
  float *v6; // rbp
  Scaleform::Render::RenderTarget *v7; // rax
  Scaleform::Render::RenderTarget *v8; // rsi
  Scaleform::Render::HAL::FilterStackEntry *v9; // rbx
  float v10; // xmm3_4
  Scaleform::Render::RenderTarget *v11; // rdx
  float v12; // xmm2_4
  float v13; // xmm1_4
  Scaleform::Render::HAL_vtbl *v14; // rax
  float v15; // xmm0_4
  Scaleform::Render::HAL::FilterStackEntry *v16; // rbx
  Scaleform::Render::RenderTarget *v17; // [rsp+38h] [rbp-40h]
  int v18[8]; // [rsp+40h] [rbp-38h] BYREF
  int v19; // [rsp+80h] [rbp+8h] BYREF
  int v20; // [rsp+90h] [rbp+18h] BYREF
  int v21; // [rsp+94h] [rbp+1Ch]

  v4 = this->GetEvents(this);
  v4->Begin(v4, Event_Filter, "HAL::PushFilters");
  if ( (this->HALState & 8) != 0 )
  {
    if ( prim )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)prim);
    v17 = 0i64;
    if ( !this->ShouldRenderFilters(this, prim) || (this->HALState & 0x300) != 0 )
    {
      Scaleform::ArrayDataBase<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
        &this->FilterStack.Data,
        &this->FilterStack,
        this->FilterStack.Data.Size + 1);
      v5 = &this->FilterStack.Data.Data[this->FilterStack.Data.Size - 1];
      if ( v5 )
      {
        if ( prim )
          Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)prim);
        v5->pPrimitive.pObject = prim;
        v5->pRenderTarget.pObject = 0i64;
      }
      goto LABEL_23;
    }
    ((void (__fastcall *)(Scaleform::Render::HAL *, __int64))this->applyDepthStencilMode)(this, 1i64);
    this->applyRasterModeImpl(this, RasterMode_Solid);
    if ( prim->Caching )
    {
      this->HALState |= 0x100u;
      this->CacheableIndex = this->FilterStack.Data.Size;
      this->GetRQProcessor(this)->QueueEmitFilter = QPF_CacheableOnly;
    }
    else
    {
      v6 = (float *)&prim->PrimitiveArea.Data.Data->pHandle->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[prim->PrimitiveArea.Data.Data->pHandle->pHeader->Format & 0xF].Offsets[4]
                                                                   + 1];
      v20 = (int)*v6;
      v21 = (int)v6[5];
      v7 = this->CreateTempRenderTarget(this, &v20, 0i64);
      v17 = v7;
      v8 = v7;
      if ( !v7 )
      {
        Scaleform::ArrayDataBase<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
          &this->FilterStack.Data,
          &this->FilterStack,
          this->FilterStack.Data.Size + 1);
        v9 = &this->FilterStack.Data.Data[this->FilterStack.Data.Size - 1];
        if ( v9 )
        {
          Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)prim);
          v9->pPrimitive.pObject = prim;
          v9->pRenderTarget.pObject = 0i64;
        }
LABEL_21:
        if ( v8 )
          v8->Release(v8);
LABEL_23:
        if ( prim )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)prim);
        return;
      }
      v10 = v6[3];
      v11 = v7;
      v12 = v6[7];
      v13 = v10 + *v6;
      v19 = 0;
      v18[0] = (int)v10;
      v14 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
      v15 = v12 + v6[5];
      v18[1] = (int)v12;
      v18[2] = (int)v13;
      v18[3] = (int)v15;
      ((void (__fastcall *)(Scaleform::Render::HAL *, Scaleform::Render::RenderTarget *, __int64, int *, int *))v14->PushRenderTarget)(
        this,
        v11,
        8i64,
        v18,
        &v19);
      Scaleform::Render::HAL::ApplyBlendMode(this, Blend_Normal, 0, 1);
    }
    this->HALState |= 0x80u;
    Scaleform::ArrayDataBase<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
      &this->FilterStack.Data,
      &this->FilterStack,
      this->FilterStack.Data.Size + 1);
    v16 = &this->FilterStack.Data.Data[this->FilterStack.Data.Size - 1];
    if ( v16 )
    {
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)prim);
      v8 = v17;
      v16->pPrimitive.pObject = prim;
      if ( v17 )
        v17->AddRef(v17);
      v16->pRenderTarget.pObject = v17;
    }
    else
    {
      v8 = v17;
    }
    goto LABEL_21;
  }
}

void __fastcall Scaleform::Render::HAL::PushMask_BeginSubmit(
        Scaleform::Render::HAL *this,
        Scaleform::Render::MaskPrimitive *prim)
{
  Scaleform::Render::RenderEvents *v4; // rax
  Scaleform::Render::HAL::RenderTargetEntry *v5; // rsi
  Scaleform::Render::RenderBufferManager *v6; // rax
  _BOOL8 v7; // r8
  __int64 v8; // rbx
  Scaleform::Render::RenderTargetData *pRenderTargetData; // r14
  Scaleform::Render::HAL_vtbl *v10; // rax
  unsigned __int64 MaskStackTop; // r8
  bool v12; // bp
  Scaleform::Render::MaskPrimitive *pObject; // rdx
  __int64 v14; // r14
  int y2; // er8
  int x2; // edx
  int y1; // ecx
  __int64 v18; // rdx
  Scaleform::Render::HAL_vtbl *v19; // rax
  int v20; // [rsp+40h] [rbp+8h] BYREF

  v4 = this->GetEvents(this);
  v4->Begin(v4, Event_Mask, "HAL::PushMask_BeginSubmit");
  if ( (this->HALState & 8) != 0 )
  {
    v5 = &this->RenderTargetStack.Data.Data[this->RenderTargetStack.Data.Size - 1];
    if ( !this->checkDepthStencilBufferCaps(this) )
    {
      v5->StencilChecked = 0;
      v6 = this->GetRenderBufferManager(this);
      if ( !v6 || !v5->pRenderTarget.pObject )
        return;
      LOBYTE(v7) = 1;
      v8 = (__int64)v6->CreateDepthStencilBuffer(v6, &v5->pRenderTarget.pObject->BufferSize, v7);
      pRenderTargetData = v5->pRenderTarget.pObject->pRenderTargetData;
      if ( !pRenderTargetData
        || !pRenderTargetData->ReplaceDepthStencilBuffer(
              v5->pRenderTarget.pObject->pRenderTargetData,
              (Scaleform::Render::DepthStencilBuffer *)v8) )
      {
LABEL_10:
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
        return;
      }
      v10 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
      v20 = 0;
      v10->setRenderTargetImpl(this, pRenderTargetData, 1u, (const Scaleform::Render::Color *)&v20);
      if ( !this->checkDepthStencilBufferCaps(this) )
      {
        if ( !warned )
          warned = 1;
        goto LABEL_10;
      }
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
    }
    if ( this->AppliedSceneRasterMode )
    {
      this->applyRasterModeImpl(this, RasterMode_Solid);
      this->AppliedSceneRasterMode = RasterMode_Solid;
    }
    MaskStackTop = v5->MaskStackTop;
    v12 = (this->HALState & 0x20) != 0;
    if ( (_DWORD)MaskStackTop
      && v5->MaskStack.Data.Size > MaskStackTop
      && (this->HALState & 0x20) != 0
      && v5->StencilAvailable
      && v5->MultiBitStencil )
    {
      ((void (__fastcall *)(Scaleform::Render::HAL *, __int64))this->applyDepthStencilMode)(this, 3i64);
      pObject = v5->MaskStack.Data.Data[v5->MaskStackTop].pPrimitive.pObject;
      this->drawMaskClearRectangles(this, pObject->MaskAreas.Data.Data, pObject->MaskAreas.Data.Size);
    }
    Scaleform::ArrayData<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Resize(
      &v5->MaskStack.Data,
      v5->MaskStackTop + 1);
    v14 = (__int64)&v5->MaskStack.Data.Data[v5->MaskStackTop];
    if ( prim )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)prim);
    if ( *(_QWORD *)v14 )
      Scaleform::RefCountImpl::Release(*(Scaleform::RefCountVImpl **)v14);
    *(_QWORD *)v14 = prim;
    *(_BYTE *)(v14 + 8) = v12;
    y2 = this->ViewRect.y2;
    x2 = this->ViewRect.x2;
    y1 = this->ViewRect.y1;
    *(_DWORD *)(v14 + 12) = this->ViewRect.x1;
    *(_DWORD *)(v14 + 16) = y1;
    *(_DWORD *)(v14 + 20) = x2;
    *(_DWORD *)(v14 + 24) = y2;
    ++v5->MaskStackTop;
    this->HALState |= 0x40u;
    if ( v5->MaskStackTop == 1 && v12 )
    {
      v18 = 2i64;
      if ( !v5->StencilAvailable )
        v18 = 6i64;
      ((void (__fastcall *)(Scaleform::Render::HAL *, __int64))this->applyDepthStencilMode)(this, v18);
      this->drawMaskClearRectangles(this, prim->MaskAreas.Data.Data, prim->MaskAreas.Data.Size);
    }
    if ( v5->StencilAvailable )
    {
      v19 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
      if ( v5->MultiBitStencil )
      {
        v19->applyDepthStencilMode(this, DepthStencil_StencilIncrementEqual, v5->MaskStackTop - 1);
      }
      else
      {
        v19->applyDepthStencilMode(this, DepthStencil_StencilClear, 1u);
        if ( !warned_0 )
          warned_0 = v5->MaskStackTop > 1;
      }
    }
    else if ( v5->DepthBufferAvailable )
    {
      ((void (__fastcall *)(Scaleform::Render::HAL *, __int64))this->applyDepthStencilMode)(this, 6i64);
      if ( !warned_1 )
        warned_1 = v5->MaskStackTop > 1;
    }
    ++this->AccumulatedStats.Masks;
  }
}

void __fastcall Scaleform::Render::HAL::PushProj3D(
        Scaleform::Render::HAL *this,
        const Scaleform::Render::Matrix4x4<float> *m)
{
  this->Matrices.pObject->Proj3D = *m;
  this->Matrices.pObject->UVPOChanged = 1;
  Scaleform::ArrayData<Scaleform::Render::Matrix4x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix4x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1>>::PushBack(
    &this->ProjectionMatrix3DStack.Data,
    m);
}

char __fastcall Scaleform::Render::HAL::PushRenderTarget(
        Scaleform::Render::HAL *this,
        Scaleform::Render::RenderTarget *prt,
        unsigned int flags,
        const Scaleform::Render::Rect<int> *frameRect,
        const Scaleform::Render::Color *clearColor)
{
  const Scaleform::Render::Color *v5; // rbx
  Scaleform::Render::RenderEvents *v9; // rax
  unsigned __int64 v11; // r8
  Scaleform::Render::HAL::RenderTargetEntry *v12; // rcx
  unsigned __int64 Size; // rsi
  Scaleform::Render::HAL::RenderTargetEntry *Data; // r14
  Scaleform::Render::RenderTarget *pObject; // rcx
  int x2; // edx
  int x1; // eax
  int y2; // er8
  int v19; // er11
  int y1; // ecx
  int v21; // er8
  int v22; // eax
  Scaleform::Render::MatrixState *v23; // rcx
  int v24; // eax
  int v25; // edx
  Scaleform::Render::Rect<int> *p_ViewRectOriginal; // rcx
  Scaleform::Render::MatrixState *v27; // rax
  Scaleform::Render::MatrixState *v28; // rax
  Scaleform::Render::MatrixState *v29; // rax
  __int128 v30; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v31; // [rsp+30h] [rbp-D0h]
  Scaleform::Render::HAL::RenderTargetEntry __that; // [rsp+60h] [rbp-A0h] BYREF

  v5 = clearColor;
  if ( (flags & 0x10) == 0 )
  {
    v9 = this->GetEvents(this);
    v9->Begin(v9, Event_RenderTarget, "HAL::PushRenderTarget");
  }
  if ( !prt )
    return 0;
  __that.pRenderTarget.pObject = 0i64;
  Scaleform::Render::MatrixState::MatrixState(&__that.OldMatrixState);
  v11 = this->RenderTargetStack.Data.Size + 1;
  memset(&__that.OldViewRect, 0, 32);
  __that.OldViewport.Height = 1;
  __that.OldViewport.Width = 1;
  memset(&__that.OldViewport.ScissorLeft, 0, 20);
  memset(&__that.MaskStack, 0, sizeof(__that.MaskStack));
  Scaleform::ArrayDataBase<Scaleform::Render::HAL::RenderTargetEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::RenderTargetEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
    &this->RenderTargetStack.Data,
    &this->RenderTargetStack,
    v11);
  v12 = &this->RenderTargetStack.Data.Data[this->RenderTargetStack.Data.Size - 1];
  if ( v12 )
    Scaleform::Render::HAL::RenderTargetEntry::RenderTargetEntry(v12, &__that);
  Size = this->RenderTargetStack.Data.Size;
  Data = this->RenderTargetStack.Data.Data;
  prt->AddRef(prt);
  pObject = Data[Size - 1].pRenderTarget.pObject;
  if ( pObject )
    pObject->Release(pObject);
  Data[Size - 1].pRenderTarget.pObject = prt;
  Data[Size - 1].PushFlags = flags;
  Data[Size - 1].ClearColor = *clearColor;
  *(_DWORD *)&Data[Size - 1].StencilChecked = 0;
  *(_OWORD *)&Data[Size - 1].OldViewport.BufferWidth = *(_OWORD *)&this->VP.BufferWidth;
  *(_OWORD *)&Data[Size - 1].OldViewport.Width = *(_OWORD *)&this->VP.Width;
  *(_QWORD *)&Data[Size - 1].OldViewport.ScissorWidth = *(_QWORD *)&this->VP.ScissorWidth;
  Data[Size - 1].OldViewport.Flags = this->VP.Flags;
  x2 = this->ViewRect.x2;
  x1 = this->ViewRect.x1;
  y2 = this->ViewRect.y2;
  Data[Size - 1].OldViewRect.y1 = this->ViewRect.y1;
  Data[Size - 1].OldViewRect.x1 = x1;
  Data[Size - 1].OldViewRect.x2 = x2;
  Data[Size - 1].OldViewRect.y2 = y2;
  Data[Size - 1].OldMatrixState.CopyFrom(&Data[Size - 1].OldMatrixState, this->Matrices.pObject);
  Data[Size - 1].MaskStackTop = 0;
  this->HALState &= ~0x10u;
  if ( (flags & 8) != 0 )
  {
    this->HALState |= 0x10u;
    v19 = prt->ViewRect.y2 - prt->ViewRect.y1;
    *((_QWORD *)&v30 + 1) = *(_QWORD *)&prt->ViewRect.x1;
    LODWORD(v31) = prt->ViewRect.x2 - DWORD2(v30);
    y1 = frameRect->y1;
    v21 = frameRect->y2;
    v22 = frameRect->x1;
    this->ViewRect.x2 = frameRect->x2;
    this->ViewRect.x1 = v22;
    this->ViewRect.y1 = y1;
    this->ViewRect.y2 = v21;
    v23 = this->Matrices.pObject;
    *(Scaleform::Render::Size<unsigned long> *)&v30 = prt->BufferSize;
    HIDWORD(v31) = v19;
    *(_OWORD *)&this->VP.BufferWidth = v30;
    *(_OWORD *)&this->VP.Width = v31;
    *(_QWORD *)&this->VP.ScissorWidth = 0i64;
    this->VP.Flags = 0;
    v23->SetUserMatrix(
      v23,
      (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152]);
    v24 = -Data[Size - 1].OldViewRect.x1;
    v25 = -Data[Size - 1].OldViewRect.y1;
    p_ViewRectOriginal = &this->Matrices.pObject->ViewRectOriginal;
    p_ViewRectOriginal->x1 -= Data[Size - 1].OldViewRect.x1;
    p_ViewRectOriginal->x2 += v24;
    p_ViewRectOriginal->y1 += v25;
    p_ViewRectOriginal->y2 += v25;
    v27 = this->Matrices.pObject;
    *(_QWORD *)&v27->Orient2D.M[0][2] = 0i64;
    v27->Orient2D.M[1][0] = 0.0;
    v27->Orient2D.M[1][3] = 0.0;
    v5 = clearColor;
    *(_QWORD *)&v27->Orient2D.M[0][0] = 1065353216i64;
    *(_QWORD *)&v27->Orient2D.M[1][1] = 1065353216i64;
    v28 = this->Matrices.pObject;
    *(_QWORD *)&v28->Orient3D.M[0][0] = 0i64;
    *(_QWORD *)&v28->Orient3D.M[0][2] = 0i64;
    *(_QWORD *)&v28->Orient3D.M[1][0] = 0i64;
    *(_QWORD *)&v28->Orient3D.M[1][2] = 0i64;
    *(_QWORD *)&v28->Orient3D.M[2][0] = 0i64;
    *(_QWORD *)&v28->Orient3D.M[2][2] = 0i64;
    *(_QWORD *)&v28->Orient3D.M[3][0] = 0i64;
    *(_QWORD *)&v28->Orient3D.M[3][2] = 0i64;
    v28->Orient3D.M[0][0] = 1.0;
    v28->Orient3D.M[1][1] = 1.0;
    v28->Orient3D.M[2][2] = 1.0;
    v28->Orient3D.M[3][3] = 1.0;
    v29 = this->Matrices.pObject;
    this->VP.Flags |= 1u;
    v29->UVPOChanged = 1;
  }
  this->HALState &= ~0x20u;
  if ( (flags & 4) == 0 )
  {
    this->setRenderTargetImpl(this, prt->pRenderTargetData, flags, v5);
    ++this->AccumulatedStats.RTChanges;
    if ( (flags & 8) != 0 )
    {
      this->HALState |= 0x20u;
      this->updateViewport(this);
    }
  }
  Scaleform::ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::~ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>(&__that.MaskStack.Data);
  if ( __that.OldMatrixState.S3DImpl.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)__that.OldMatrixState.S3DImpl.pObject);
  Scaleform::RefCountImplCore::~RefCountImplCore(&__that.OldMatrixState);
  if ( __that.pRenderTarget.pObject )
    __that.pRenderTarget.pObject->Release(__that.pRenderTarget.pObject);
  return 1;
}

void __fastcall Scaleform::Render::HAL::PushUserData(
        Scaleform::Render::HAL *this,
        const Scaleform::Render::UserDataState::Data *data)
{
  Scaleform::ArrayLH<Scaleform::Render::UserDataState::Data const *,2,Scaleform::ArrayConstPolicy<0,8,1> > *p_UserDataStack; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r8
  __int64 v6; // rcx
  const Scaleform::Render::UserDataState::Data **v7; // rcx

  p_UserDataStack = &this->UserDataStack;
  v4 = this->UserDataStack.Data.Size + 1;
  if ( v4 >= this->UserDataStack.Data.Size )
  {
    if ( v4 <= this->UserDataStack.Data.Policy.Capacity )
      goto LABEL_7;
    v5 = v4 + (v4 >> 2);
  }
  else
  {
    if ( v4 >= this->UserDataStack.Data.Policy.Capacity >> 1 )
      goto LABEL_7;
    v5 = this->UserDataStack.Data.Size + 1;
  }
  Scaleform::ArrayDataBase<Scaleform::Render::UserDataState::Data const *,Scaleform::AllocatorLH<Scaleform::Render::UserDataState::Data const *,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
    &this->UserDataStack.Data,
    &this->UserDataStack,
    v5);
LABEL_7:
  v6 = (__int64)(p_UserDataStack->Data.Data - 1);
  p_UserDataStack->Data.Size = v4;
  v7 = (const Scaleform::Render::UserDataState::Data **)(v6 + 8 * v4);
  if ( v7 )
    *v7 = data;
}

void __fastcall Scaleform::Render::HAL::PushView3D(
        Scaleform::Render::HAL *this,
        const Scaleform::Render::Matrix3x4<float> *m)
{
  this->Matrices.pObject->View3D = *m;
  this->Matrices.pObject->UVPOChanged = 1;
  Scaleform::ArrayData<Scaleform::Render::Matrix3x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix3x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1>>::PushBack(
    &this->ViewMatrix3DStack.Data,
    m);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::UserDataState::Data const *,Scaleform::AllocatorLH<Scaleform::Render::UserDataState::Data const *,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::UserDataState::Data const *,Scaleform::AllocatorLH<Scaleform::Render::UserDataState::Data const *,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned __int64 Capacity; // rax
  const Scaleform::Render::UserDataState::Data **Data; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  const Scaleform::Render::UserDataState::Data **v9; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  Capacity = this->Policy.Capacity;
  if ( newCapacity != Capacity && newCapacity >= Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v7 = (newCapacity + 7) & 0xFFFFFFFFFFFFFFF8ui64;
      v8 = 8 * v7;
      if ( Data )
      {
        v9 = (const Scaleform::Render::UserDataState::Data **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                Scaleform::Memory::pGlobalHeap,
                                                                Data,
                                                                v8);
        this->Policy.Capacity = v7;
        this->Data = v9;
        return;
      }
      v10 = 2;
      this->Data = (const Scaleform::Render::UserDataState::Data **)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned __int64 Capacity; // rax
  Scaleform::Render::HAL::MaskStackEntry *Data; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  Scaleform::Render::HAL::MaskStackEntry *v9; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  Capacity = this->Policy.Capacity;
  if ( newCapacity != Capacity && newCapacity >= Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v7 = (newCapacity + 7) & 0xFFFFFFFFFFFFFFF8ui64;
      v8 = 32 * v7;
      if ( Data )
      {
        v9 = (Scaleform::Render::HAL::MaskStackEntry *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         Data,
                                                         v8);
        this->Policy.Capacity = v7;
        this->Data = v9;
        return;
      }
      v10 = 2;
      this->Data = (Scaleform::Render::HAL::MaskStackEntry *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned __int64 Capacity; // rax
  Scaleform::Render::HAL::FilterStackEntry *Data; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  Scaleform::Render::HAL::FilterStackEntry *v9; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  Capacity = this->Policy.Capacity;
  if ( newCapacity != Capacity && newCapacity >= Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v7 = (newCapacity + 7) & 0xFFFFFFFFFFFFFFF8ui64;
      v8 = 16 * v7;
      if ( Data )
      {
        v9 = (Scaleform::Render::HAL::FilterStackEntry *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                           Scaleform::Memory::pGlobalHeap,
                                                           Data,
                                                           v8);
        this->Policy.Capacity = v7;
        this->Data = v9;
        return;
      }
      v10 = 2;
      this->Data = (Scaleform::Render::HAL::FilterStackEntry *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::HAL::RenderTargetEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::RenderTargetEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::HAL::RenderTargetEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::RenderTargetEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned __int64 Capacity; // rax
  Scaleform::Render::HAL::RenderTargetEntry *Data; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  Scaleform::Render::HAL::RenderTargetEntry *v9; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  Capacity = this->Policy.Capacity;
  if ( newCapacity != Capacity && newCapacity >= Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v7 = (newCapacity + 7) & 0xFFFFFFFFFFFFFFF8ui64;
      v8 = 832 * v7;
      if ( Data )
      {
        v9 = (Scaleform::Render::HAL::RenderTargetEntry *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                            Scaleform::Memory::pGlobalHeap,
                                                            Data,
                                                            v8);
        this->Policy.Capacity = v7;
        this->Data = v9;
        return;
      }
      v10 = 2;
      this->Data = (Scaleform::Render::HAL::RenderTargetEntry *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Matrix3x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix3x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::Matrix3x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix3x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned __int64 Capacity; // rax
  Scaleform::Render::Matrix3x4<float> *Data; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  Scaleform::Render::Matrix3x4<float> *v9; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  Capacity = this->Policy.Capacity;
  if ( newCapacity != Capacity && newCapacity >= Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v7 = (newCapacity + 7) & 0xFFFFFFFFFFFFFFF8ui64;
      v8 = 48 * v7;
      if ( Data )
      {
        v9 = (Scaleform::Render::Matrix3x4<float> *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                      Scaleform::Memory::pGlobalHeap,
                                                      Data,
                                                      v8);
        this->Policy.Capacity = v7;
        this->Data = v9;
        return;
      }
      v10 = 2;
      this->Data = (Scaleform::Render::Matrix3x4<float> *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Matrix4x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix4x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::Matrix4x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix4x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned __int64 Capacity; // rax
  Scaleform::Render::Matrix4x4<float> *Data; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  Scaleform::Render::Matrix4x4<float> *v9; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  Capacity = this->Policy.Capacity;
  if ( newCapacity != Capacity && newCapacity >= Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v7 = (newCapacity + 7) & 0xFFFFFFFFFFFFFFF8ui64;
      v8 = v7 << 6;
      if ( Data )
      {
        v9 = (Scaleform::Render::Matrix4x4<float> *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                      Scaleform::Memory::pGlobalHeap,
                                                      Data,
                                                      v8);
        this->Policy.Capacity = v7;
        this->Data = v9;
        return;
      }
      v10 = 2;
      this->Data = (Scaleform::Render::Matrix4x4<float> *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayData<Scaleform::Render::UserDataState::Data const *,Scaleform::AllocatorLH<Scaleform::Render::UserDataState::Data const *,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Resize(
        Scaleform::ArrayData<Scaleform::Render::UserDataState::Data const *,Scaleform::AllocatorLH<Scaleform::Render::UserDataState::Data const *,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        unsigned __int64 newSize)
{
  if ( newSize >= this->Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      Scaleform::ArrayDataBase<Scaleform::Render::UserDataState::Data const *,Scaleform::AllocatorLH<Scaleform::Render::UserDataState::Data const *,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
        this,
        this,
        newSize + (newSize >> 2));
      this->Size = newSize;
      return;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::Render::UserDataState::Data const *,Scaleform::AllocatorLH<Scaleform::Render::UserDataState::Data const *,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
      this,
      this,
      newSize);
    this->Size = newSize;
    return;
  }
  this->Size = newSize;
}

void __fastcall Scaleform::ArrayData<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Resize(
        Scaleform::ArrayData<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  Scaleform::Render::HAL::MaskStackEntry *v5; // r8
  unsigned __int64 v6; // rbx
  int *p_x2; // rax

  Size = this->Size;
  Scaleform::ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
    this,
    this,
    newSize);
  if ( newSize > Size )
  {
    v5 = &this->Data[Size];
    v6 = newSize - Size;
    if ( v6 )
    {
      p_x2 = &v5->OldViewRect.x2;
      do
      {
        if ( v5 )
        {
          v5->pPrimitive.pObject = 0i64;
          *((_QWORD *)p_x2 - 1) = 0i64;
          *(_QWORD *)p_x2 = 0i64;
        }
        ++v5;
        p_x2 += 8;
        --v6;
      }
      while ( v6 );
    }
  }
}

void __fastcall Scaleform::ArrayData<Scaleform::Render::HAL::RenderTargetEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::RenderTargetEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Resize(
        Scaleform::ArrayData<Scaleform::Render::HAL::RenderTargetEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::RenderTargetEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rbp
  Scaleform::Render::HAL::RenderTargetEntry *v5; // rbx
  unsigned __int64 i; // rdi

  Size = this->Size;
  Scaleform::ArrayDataBase<Scaleform::Render::HAL::RenderTargetEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::RenderTargetEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
    this,
    this,
    newSize);
  if ( newSize > Size )
  {
    v5 = &this->Data[Size];
    for ( i = newSize - Size; i; --i )
    {
      if ( v5 )
        Scaleform::Render::HAL::RenderTargetEntry::RenderTargetEntry(v5);
      ++v5;
    }
  }
}

void __fastcall Scaleform::ArrayData<Scaleform::Render::Matrix3x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix3x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Resize(
        Scaleform::ArrayData<Scaleform::Render::Matrix3x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix3x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v5; // r8
  Scaleform::Render::Matrix3x4<float> *v6; // rax
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
    Scaleform::ArrayDataBase<Scaleform::Render::Matrix3x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix3x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
      this,
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
        *(_QWORD *)&v6->M[0][0] = 0i64;
        *(_QWORD *)&v6->M[0][2] = 0i64;
        *(_QWORD *)&v6->M[1][0] = 0i64;
        *(_QWORD *)&v6->M[1][2] = 0i64;
        *(_QWORD *)&v6->M[2][0] = 0i64;
        *(_QWORD *)&v6->M[2][2] = 0i64;
        v6->M[0][0] = 1.0;
        v6->M[1][1] = 1.0;
        v6->M[2][2] = 1.0;
      }
      ++v6;
    }
  }
}

void __fastcall Scaleform::ArrayData<Scaleform::Render::Matrix4x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix4x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Resize(
        Scaleform::ArrayData<Scaleform::Render::Matrix4x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix4x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v5; // r8
  Scaleform::Render::Matrix4x4<float> *v6; // rax
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
    Scaleform::ArrayDataBase<Scaleform::Render::Matrix4x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix4x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
      this,
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
        *(_QWORD *)&v6->M[0][0] = 0i64;
        *(_QWORD *)&v6->M[0][2] = 0i64;
        *(_QWORD *)&v6->M[1][0] = 0i64;
        *(_QWORD *)&v6->M[1][2] = 0i64;
        *(_QWORD *)&v6->M[2][0] = 0i64;
        *(_QWORD *)&v6->M[2][2] = 0i64;
        *(_QWORD *)&v6->M[3][0] = 0i64;
        *(_QWORD *)&v6->M[3][2] = 0i64;
        v6->M[0][0] = 1.0;
        v6->M[1][1] = 1.0;
        v6->M[2][2] = 1.0;
        v6->M[3][3] = 1.0;
      }
      ++v6;
    }
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 v7; // rdi
  Scaleform::Render::HAL::BlendModeStackEntry *i; // rbx
  Scaleform::Render::RenderTarget *pObject; // rcx
  Scaleform::Render::RenderTarget *v10; // rcx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > *)this,
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
      pObject = i->pLayerAlpha.pObject;
      if ( pObject )
        pObject->Release(pObject);
      v10 = i->pRenderTarget.pObject;
      if ( v10 )
        v10->Release(v10);
      if ( i->pPrimitive.pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)i->pPrimitive.pObject);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 v7; // rdi
  Scaleform::Render::HAL::FilterStackEntry *i; // rbx
  Scaleform::Render::RenderTarget *pObject; // rcx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
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
      pObject = i->pRenderTarget.pObject;
      if ( pObject )
        pObject->Release(pObject);
      if ( i->pPrimitive.pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)i->pPrimitive.pObject);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 v7; // rdi
  Scaleform::RefCountVImpl **i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = (Scaleform::RefCountVImpl **)&this->Data[v7 - 1 + newSize]; v7; --v7 )
    {
      if ( *i )
        Scaleform::RefCountImpl::Release(*i);
      i -= 4;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::HAL::RenderTargetEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::RenderTargetEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::HAL::RenderTargetEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::RenderTargetEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > *this,
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
      Scaleform::ArrayDataBase<Scaleform::Render::HAL::RenderTargetEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::RenderTargetEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    Scaleform::ConstructorMov<Scaleform::Render::HAL::RenderTargetEntry>::DestructArray(
      &this->Data[newSize],
      Size - newSize);
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::HAL::RenderTargetEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::RenderTargetEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

char __fastcall Scaleform::Render::HAL::RestoreAfterReset(Scaleform::Render::HAL *this)
{
  Scaleform::Render::HALNotify *pNext; // rcx
  $E5DEF882A4211DACFE23170ED52532DA *v3; // rsi
  Scaleform::Render::HALNotify *v4; // rbx

  if ( (this->HALState & 0x2001) != 8193 )
    return 0;
  Scaleform::Render::GlyphCache::Initialize(this->pGlyphCache.pObject, this, &this->FillManager);
  pNext = this->NotifyList.Root.pNext;
  v3 = &this->RenderRoots.Root.8;
  if ( this == (Scaleform::Render::HAL *)-336i64 )
    v3 = 0i64;
  while ( pNext != (Scaleform::Render::HALNotify *)v3 )
  {
    v4 = pNext->pNext;
    pNext->OnHALEvent(pNext, HAL_RestoreAfterReset);
    pNext = v4;
  }
  this->HALState &= ~0x2000u;
  return 1;
}

void __fastcall Scaleform::Render::HAL::SetDisplayPass(
        Scaleform::Render::HAL *this,
        Scaleform::Render::DisplayPass pass)
{
  this->CurrentPass = pass;
}

void __fastcall Scaleform::Render::ProfileModifier::SetFillFlags(
        Scaleform::Render::ProfileModifier *this,
        Scaleform::Render::DrawModeType __formal,
        unsigned int flags)
{
  this->FillFlags = flags;
}

void __fastcall Scaleform::Render::HAL::SetGlyphCacheParams(
        Scaleform::Render::HAL *this,
        const Scaleform::Render::GlyphCacheParams *params)
{
  Scaleform::Render::GlyphCache *v4; // rax

  if ( this->GetGlyphCache(this) )
  {
    v4 = this->GetGlyphCache(this);
    v4->SetParams(&v4->Scaleform::Render::GlyphCacheConfig, params);
  }
}

char __fastcall Scaleform::Render::HAL::SetRenderTarget(
        Scaleform::Render::HAL *this,
        Scaleform::Render::RenderTarget *prt,
        bool setState)
{
  Scaleform::Render::HAL_vtbl *v7; // rax
  __int64 v8; // r8
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF

  if ( this->RenderTargetStack.Data.Size > 1 )
    return 0;
  if ( (this->HALState & 4) != 0 )
    this->Flush(this);
  if ( this->RenderTargetStack.Data.Size == 1 )
    this->PopRenderTarget(this, 16u);
  if ( (this->HALState & 0xC) == 12 )
    return 0;
  if ( !prt )
    return 1;
  v7 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  v10 = 0;
  v8 = 21i64;
  if ( setState )
    v8 = 17i64;
  v9 = 0i64;
  return ((__int64 (__fastcall *)(Scaleform::Render::HAL *, Scaleform::Render::RenderTarget *, __int64, __int128 *, int *))v7->PushRenderTarget)(
           this,
           prt,
           v8,
           &v9,
           &v10);
}

void __fastcall Scaleform::Render::HAL::SetStereoDisplay(
        Scaleform::Render::HAL *this,
        Scaleform::Render::StereoDisplay sDisplay,
        bool setstate)
{
  this->Matrices.pObject->S3DDisplay = sDisplay;
  this->Matrices.pObject->UVPOChanged = 1;
}

void __fastcall Scaleform::Render::HAL::SetStereoImpl(
        Scaleform::Render::HAL *this,
        Scaleform::Render::StereoImplBase *simpl)
{
  Scaleform::Render::MatrixState *pObject; // rbx
  Scaleform::RefCountVImpl *v4; // rcx

  pObject = this->Matrices.pObject;
  if ( simpl )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)simpl);
  v4 = (Scaleform::RefCountVImpl *)pObject->S3DImpl.pObject;
  if ( v4 )
    Scaleform::RefCountImpl::Release(v4);
  pObject->S3DImpl.pObject = simpl;
}

void __fastcall Scaleform::Render::HAL::SetStereoParams(
        Scaleform::Render::HAL *this,
        Scaleform::Render::StereoParams *sParams)
{
  Scaleform::Render::StereoImplBase *pObject; // rcx

  if ( sParams->DisplayWidthCm == 0.0 )
    sParams->DisplayWidthCm = sParams->DisplayDiagInches
                            / (float)(sqrtf(
                                        (float)((float)(1.0 / sParams->DisplayAspectRatio) / sParams->DisplayAspectRatio)
                                      + 1.0)
                                    * 2.54);
  pObject = this->Matrices.pObject->S3DImpl.pObject;
  if ( pObject )
    pObject->SetParams(pObject, sParams);
}

char __fastcall Scaleform::Render::HAL::ShutdownHAL(Scaleform::Render::HAL *this)
{
  Scaleform::Render::HALNotify *pNext; // rcx
  $E5DEF882A4211DACFE23170ED52532DA *v3; // rsi
  Scaleform::Render::HALNotify *v4; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::Render::MatrixStateFactory *pMatrixFactory; // rcx
  Scaleform::Render::HAL_vtbl *v8; // rax

  if ( (this->HALState & 1) != 0 )
  {
    pNext = this->NotifyList.Root.pNext;
    v3 = &this->RenderRoots.Root.8;
    if ( this == (Scaleform::Render::HAL *)-336i64 )
      v3 = 0i64;
    while ( pNext != (Scaleform::Render::HALNotify *)v3 )
    {
      v4 = pNext->pNext;
      pNext->OnHALEvent(pNext, HAL_Shutdown);
      pNext = v4;
    }
    Scaleform::Render::ContextImpl::RenderNotify::ReleaseAllContextData(&this->Scaleform::Render::ContextImpl::RenderNotify);
    Scaleform::Render::MeshKeyManager::DestroyAllKeys(this->pMeshKeyManager.pObject);
    pObject = (Scaleform::RefCountVImpl *)this->pMeshKeyManager.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->pMeshKeyManager.pObject = 0i64;
    Scaleform::Render::GlyphCache::Destroy(this->pGlyphCache.pObject);
    v6 = (Scaleform::RefCountVImpl *)this->pGlyphCache.pObject;
    if ( v6 )
      Scaleform::RefCountImpl::Release(v6);
    this->pGlyphCache.pObject = 0i64;
    pMatrixFactory = this->pMatrixFactory;
    if ( pMatrixFactory )
      ((void (__fastcall *)(Scaleform::Render::MatrixStateFactory *, __int64))pMatrixFactory->~MatrixStateFactory)(
        pMatrixFactory,
        1i64);
    this->pMatrixFactory = 0i64;
    Scaleform::Render::RenderQueue::~RenderQueue(&this->Queue);
    this->destroyDefaultRenderBuffer(this);
    v8 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
    this->HALState = 0;
    v8->GetProfiler(this);
    this->GetProfiler(this);
  }
  return 1;
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::GlyphFitter::StretchTo(
        Scaleform::Render::Stroker *this,
        Scaleform::Render::Matrix2x4<float> *result,
        float __formal,
        float a4)
{
  Scaleform::Render::Matrix2x4<float> *v4; // rax

  *(_OWORD *)&result->M[0][0] = 0x3F800000ui64;
  result->M[1][0] = 0.0;
  result->M[1][3] = 0.0;
  v4 = result;
  *(_QWORD *)&result->M[1][1] = 1065353216i64;
  return v4;
}

bool __fastcall Scaleform::Render::HAL::Submit(Scaleform::Render::HAL *this)
{
  return (this->HALState & 4) == 0;
}

void __fastcall Scaleform::Render::HAL::addComplexMeshToUpdateList(
        Scaleform::Render::HAL *this,
        Scaleform::Render::ComplexMesh::UpdateNode *meshNode)
{
  Scaleform::Render::ComplexMesh::UpdateNode *p_ComplexMeshUpdateList; // rcx

  if ( !meshNode->pPrev )
  {
    p_ComplexMeshUpdateList = (Scaleform::Render::ComplexMesh::UpdateNode *)&this->ComplexMeshUpdateList;
    meshNode->pPrev = p_ComplexMeshUpdateList->pPrev;
    meshNode->pNext = p_ComplexMeshUpdateList;
    p_ComplexMeshUpdateList->pPrev->pNext = meshNode;
    p_ComplexMeshUpdateList->pPrev = meshNode;
  }
}

Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType *__fastcall Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2>>::allocate(
        Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> > *this)
{
  Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType *result; // rax
  __int64 NumElementsInPage; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType *v4; // r8
  void *pHeapOrPtr; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType *LastPage; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  result = (Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType *)this->FirstEmptySlot;
  if ( result )
  {
    this->FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::NodeType *)result->Data[0].pPrev;
  }
  else
  {
    NumElementsInPage = this->NumElementsInPage;
    if ( (unsigned int)NumElementsInPage >= 0x7F )
    {
      pHeapOrPtr = this->pHeapOrPtr;
      v7 = 2;
      result = (Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pHeapOrPtr, 14240i64, &v7);
      result->pNext = 0i64;
      LastPage = this->LastPage;
      if ( LastPage )
        LastPage->pNext = result;
      else
        this->FirstPage = result;
      this->LastPage = result;
      this->NumElementsInPage = 1;
    }
    else
    {
      v4 = this->LastPage;
      if ( v4 )
      {
        this->NumElementsInPage = NumElementsInPage + 1;
        return (Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType *)((char *)v4 + 112 * NumElementsInPage);
      }
      else
      {
        return 0i64;
      }
    }
  }
  return result;
}

void __fastcall Scaleform::Render::HAL::applyBlendMode(
        Scaleform::Render::HAL *this,
        const Scaleform::Render::HAL::HALBlendState *state)
{
  Scaleform::Render::HAL::ApplyBlendMode(this, state->Mode, state->SourceAc, state->ForceAc);
}

void __fastcall Scaleform::Render::HAL::applyBlendModeEnable(Scaleform::Render::HAL *this, bool enabled)
{
  if ( this->CurrentBlendState.BlendEnable != enabled )
  {
    ((void (__fastcall *)(Scaleform::Render::HAL *))this->applyBlendModeEnableImpl)(this);
    this->CurrentBlendState.BlendEnable = enabled;
  }
}

void __fastcall Scaleform::Render::HAL::applyRasterMode(
        Scaleform::Render::HAL *this,
        Scaleform::Render::HAL::RasterModeType mode)
{
  if ( mode != this->AppliedSceneRasterMode )
  {
    ((void (__fastcall *)(Scaleform::Render::HAL *))this->applyRasterModeImpl)(this);
    this->AppliedSceneRasterMode = mode;
  }
}

void __fastcall Scaleform::Render::HAL::beginDisplay(
        Scaleform::Render::HAL *this,
        Scaleform::Render::BeginDisplayData *data)
{
  Scaleform::Render::RenderEvents *v4; // rax
  Scaleform::Render::Viewport *p_VP; // rbp
  char v6; // cl
  Scaleform::Render::HAL_vtbl *v7; // rax
  _BOOL8 ForceAc; // r9
  __int64 Mode; // rdx
  bool v10; // cl
  Scaleform::Render::Viewport *v11; // rax
  _BOOL8 v12; // r8
  __int64 v13; // r9
  Scaleform::Render::RenderTarget *v14; // rax
  Scaleform::Render::RenderTarget *pObject; // rcx
  Scaleform::Render::RenderTarget *v16; // rdi
  Scaleform::Render::HAL_vtbl *v17; // rax
  Scaleform::Render::HAL_vtbl *v18; // rax
  unsigned int Raw; // [rsp+30h] [rbp-98h]
  int v20; // [rsp+34h] [rbp-94h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-90h] BYREF
  int v22[3]; // [rsp+3Ch] [rbp-8Ch] BYREF
  __int64 v23; // [rsp+48h] [rbp-80h] BYREF
  int v24; // [rsp+50h] [rbp-78h]
  int v25; // [rsp+54h] [rbp-74h]
  char v26[48]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v27; // [rsp+90h] [rbp-38h] BYREF
  int Width; // [rsp+98h] [rbp-30h]
  int Height; // [rsp+9Ch] [rbp-2Ch]

  v4 = this->GetEvents(this);
  v4->Begin(v4, Event_Display, "HAL::beginDisplay");
  if ( (this->HALState & 2) == 0 )
    return;
  this->HALState |= 8u;
  Raw = data->BackgroundColor.Raw;
  data->pPrev = (Scaleform::Render::BeginDisplayData *)this->BeginDisplayDataList.FirstEmptySlot;
  this->BeginDisplayDataList.FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::NodeType *)data;
  p_VP = &data->VP;
  if ( (this->HALState & 4) == 0 )
  {
    if ( !this->BeginScene(this) )
    {
      v6 = warned_2;
      if ( !warned_2 )
        v6 = 1;
      warned_2 = v6;
      this->HALState &= ~8u;
      return;
    }
    this->HALState |= 0x400u;
  }
  v7 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  ForceAc = this->CurrentBlendState.ForceAc;
  Mode = (unsigned int)this->CurrentBlendState.Mode;
  v10 = (data->VP.Flags & 2) != 0;
  this->CurrentBlendState.SourceAc = v10;
  v7->applyBlendModeImpl(this, (Scaleform::Render::BlendMode)Mode, v10, ForceAc);
  this->beginMaskDisplay(this);
  this->ViewportMatrix.M[0][0] = data->ViewMatrix.M[0][0];
  this->ViewportMatrix.M[0][1] = data->ViewMatrix.M[0][1];
  this->ViewportMatrix.M[0][2] = data->ViewMatrix.M[0][2];
  this->ViewportMatrix.M[0][3] = data->ViewMatrix.M[0][3];
  this->ViewportMatrix.M[1][0] = data->ViewMatrix.M[1][0];
  this->ViewportMatrix.M[1][1] = data->ViewMatrix.M[1][1];
  this->ViewportMatrix.M[1][2] = data->ViewMatrix.M[1][2];
  this->ViewportMatrix.M[1][3] = data->ViewMatrix.M[1][3];
  v11 = this->Matrices.pObject->SetOrientation(this->Matrices.pObject, v26, &data->VP);
  *(_OWORD *)&this->VP.BufferWidth = *(_OWORD *)&v11->BufferWidth;
  *(_OWORD *)&this->VP.Width = *(_OWORD *)&v11->Width;
  *(_QWORD *)&this->VP.ScissorWidth = *(_QWORD *)&v11->ScissorWidth;
  this->VP.Flags = v11->Flags;
  if ( Scaleform::Render::Viewport::GetClippedRect<int>(&this->VP, &this->ViewRect, 0) )
    this->HALState |= 0x20u;
  else
    this->HALState &= ~0x20u;
  this->updateViewport(this);
  if ( data->FullSceneBlendTarget )
  {
    LOBYTE(v12) = 1;
    v22[0] = this->ViewRect.x2 - this->ViewRect.x1;
    v22[1] = this->ViewRect.y2 - this->ViewRect.y1;
    v14 = this->CreateTempRenderTarget(this, v22, v12);
    pObject = this->FullSceneBlendTarget.pObject;
    v16 = v14;
    if ( pObject )
      pObject->Release(pObject);
    this->FullSceneBlendTarget.pObject = v16;
    v24 = this->ViewRect.x2 - this->ViewRect.x1;
    v25 = this->ViewRect.y2 - this->ViewRect.y1;
    v17 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
    v20 = 0;
    v23 = 0i64;
    ((void (__fastcall *)(Scaleform::Render::HAL *, Scaleform::Render::RenderTarget *, __int64, __int64 *, int *))v17->PushRenderTarget)(
      this,
      v16,
      8i64,
      &v23,
      &v20);
  }
  if ( HIBYTE(Raw) && (p_VP->Flags & 0x200) == 0 )
  {
    v21 = Raw;
    LOBYTE(v13) = 1;
    Width = p_VP->Width;
    Height = p_VP->Height;
    v18 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
    v27 = 0i64;
    ((void (__fastcall *)(Scaleform::Render::HAL *, __int64 *, unsigned int *, __int64))v18->ClearSolidRectangle)(
      this,
      &v27,
      &v21,
      v13);
  }
}

void __fastcall Scaleform::Render::HAL::beginMaskDisplay(Scaleform::Render::HAL *this)
{
  this->HALState &= ~0x40u;
}

void __fastcall Scaleform::Render::HAL::calcHWViewMatrix(
        Scaleform::Render::HAL *this,
        unsigned int vpFlags,
        Scaleform::Render::Matrix2x4<float> *pmatrix,
        const Scaleform::Render::Rect<int> *viewRect,
        int dx,
        int dy)
{
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm2_4
  float v9; // xmm0_4

  v6 = 0.0;
  v7 = 0.0;
  v8 = (float)(viewRect->x2 - viewRect->x1);
  v9 = (float)(viewRect->y2 - viewRect->y1);
  if ( (vpFlags & 0x100) != 0 )
  {
    v7 = viewRect->x2 - viewRect->x1 <= 0 ? 0.0 : 1.0 / v8;
    if ( viewRect->y2 - viewRect->y1 > 0 )
      v6 = 1.0 / v9;
  }
  *(_OWORD *)&pmatrix->M[0][0] = 0x3F800000ui64;
  pmatrix->M[1][0] = 0.0;
  *(_QWORD *)&pmatrix->M[1][1] = 1065353216i64;
  pmatrix->M[1][3] = 0.0;
  pmatrix->M[0][0] = 2.0 / v8;
  if ( (vpFlags & 1) != 0 )
  {
    pmatrix->M[1][1] = 2.0 / v9;
    pmatrix->M[0][3] = (float)(-1.0 - (float)((float)dx * (float)(2.0 / v8))) - v7;
    pmatrix->M[1][3] = (float)(-1.0 - (float)((float)dy * (float)(2.0 / v9))) - v6;
  }
  else
  {
    pmatrix->M[1][1] = -2.0 / v9;
    pmatrix->M[0][3] = (float)(-1.0 - (float)((float)dx * (float)(2.0 / v8))) - v7;
    pmatrix->M[1][3] = (float)(1.0 - (float)((float)dy * (float)(-2.0 / v9))) + v6;
  }
}

bool __fastcall Scaleform::Render::HAL::checkState(
        Scaleform::Render::HAL *this,
        unsigned int stateFlags,
        const char *funcName)
{
  return (stateFlags & this->HALState) == stateFlags;
}

void __fastcall Scaleform::Render::HAL::destroyDefaultRenderBuffer(Scaleform::Render::HAL *this)
{
  Scaleform::Render::RenderTarget *pObject; // rdx

  if ( this->RenderTargetStack.Data.Size == 1 )
  {
    pObject = this->RenderTargetStack.Data.Data->pRenderTarget.pObject;
    if ( pObject )
    {
      if ( pObject->Type == RBuffer_Default )
        this->PopRenderTarget(this, 20u);
    }
  }
}

void __fastcall Scaleform::Render::HAL::drawMaskClearRectangles(
        Scaleform::Render::HAL *this,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *matrices,
        unsigned __int64 count)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rbp
  unsigned __int64 v7; // rdi
  char *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // er14
  __int64 v11; // rsi
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // r8
  const Scaleform::Render::Matrix2x4<float> *v13; // rbx
  Scaleform::Render::MatrixState *v14; // rax
  unsigned __int64 v15; // [rsp+20h] [rbp-458h]
  char v16[8]; // [rsp+30h] [rbp-448h] BYREF
  char v17; // [rsp+38h] [rbp-440h] BYREF

  if ( count )
  {
    v4 = 0i64;
    v5 = count;
    v15 = count;
    do
    {
      v7 = 32i64;
      v8 = &v17;
      v9 = 32i64;
      if ( v5 < 0x20 )
        v7 = v5;
      do
      {
        *((_QWORD *)v8 - 1) = 1065353216i64;
        *(_QWORD *)v8 = 0i64;
        *((_DWORD *)v8 + 2) = 0;
        *(_QWORD *)(v8 + 12) = 1065353216i64;
        *((_DWORD *)v8 + 5) = 0;
        v8 += 32;
        --v9;
      }
      while ( v9 );
      v10 = 0;
      v11 = 0i64;
      do
      {
        pHeader = matrices[v11 + v4].pHandle->pHeader;
        v13 = (const Scaleform::Render::Matrix2x4<float> *)&pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[4]
                                                                  + 1];
        v14 = this->GetMatrices(this);
        Scaleform::Render::Matrix2x4<float>::SetToAppend(
          (Scaleform::Render::Matrix2x4<float> *)&v16[32 * v11],
          v13,
          &v14->UserView);
        v11 = ++v10;
      }
      while ( v10 < v7 );
      this->drawMaskClearRectangles(this, (const Scaleform::Render::Matrix2x4<float> *)v16, v7);
      v5 = v15 - v7;
      v4 += v7;
      v15 = v5;
    }
    while ( v5 );
  }
}

void __fastcall Scaleform::Render::HAL::endDisplay(Scaleform::Render::HAL *this)
{
  Scaleform::Render::RenderEvents *v2; // rdi
  unsigned __int64 Size; // r14
  Scaleform::Render::HAL::RenderTargetEntry *Data; // r15
  __int64 v5; // rsi
  int *v6; // rax
  int v7; // xmm1_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  double v10; // xmm0_8
  float v11; // xmm2_4
  float v12; // xmm3_4
  Scaleform::Render::HAL_vtbl *v13; // rax
  __m128 v14; // xmm0
  Scaleform::Render::HAL_vtbl *v15; // rax
  __m128 v16; // xmm3
  int v17[8]; // [rsp+30h] [rbp-49h] BYREF
  Scaleform::Render::Matrix2x4<float> v18; // [rsp+50h] [rbp-29h] BYREF
  int v19[8]; // [rsp+70h] [rbp-9h] BYREF

  v2 = this->GetEvents(this);
  if ( (this->HALState & 8) != 0 )
  {
    this->endMaskDisplay(this);
    if ( this->RenderTargetStack.Data.Size
      && this->RenderTargetStack.Data.Data[this->RenderTargetStack.Data.Size - 1].pRenderTarget.pObject == this->FullSceneBlendTarget.pObject )
    {
      Size = this->RenderTargetStack.Data.Size;
      Data = this->RenderTargetStack.Data.Data;
      this->PopRenderTarget(this, 0);
      Scaleform::Render::HAL::ApplyBlendMode(this, Blend_Normal, 1, 1);
      v5 = (__int64)Data[Size - 1].pRenderTarget.pObject->GetTexture(Data[Size - 1].pRenderTarget.pObject);
      v17[0] = *(_DWORD *)(v5 + 56);
      v17[1] = *(_DWORD *)(v5 + 60);
      v6 = (int *)this->Matrices.pObject->GetFullViewportMatrix(this->Matrices.pObject, v17);
      v19[0] = *v6;
      v19[1] = v6[1];
      v19[2] = v6[2];
      v19[3] = v6[3];
      v19[4] = v6[4];
      v19[5] = v6[5];
      v19[6] = v6[6];
      v7 = v6[7];
      v18 = *(Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152];
      v19[7] = v7;
      v8 = (float)(Data[Size - 1].pRenderTarget.pObject->ViewRect.x2 - Data[Size - 1].pRenderTarget.pObject->ViewRect.x1)
         / (float)*(int *)(v5 + 56);
      v9 = (float)(Data[Size - 1].pRenderTarget.pObject->ViewRect.y2 - Data[Size - 1].pRenderTarget.pObject->ViewRect.y1)
         / (float)*(int *)(v5 + 60);
      v10 = ((double (__fastcall *)(Scaleform::Render::HAL *))this->GetViewportScaling)(this);
      v11 = v18.M[0][3];
      v12 = v18.M[1][3];
      if ( COERCE_FLOAT(LODWORD(v10) ^ _xmm) < 0.0 )
      {
        v12 = v18.M[1][3] + -1.0;
        v11 = v18.M[0][3] + 0.0;
      }
      v13 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
      v18.M[0][0] = v18.M[0][0] * v8;
      v18.M[0][1] = v18.M[0][1] * v8;
      v18.M[0][2] = v18.M[0][2] * v8;
      v18.M[1][0] = v18.M[1][0] * v9;
      v14 = (__m128)LODWORD(v18.M[1][2]);
      v18.M[1][2] = v18.M[1][2] * v9;
      *(float *)&v17[2] = v8;
      *(float *)&v17[3] = v9;
      v18.M[0][3] = v11 * v8;
      v18.M[1][1] = v18.M[1][1] * v9;
      v18.M[1][3] = v12 * v9;
      *(double *)v14.m128_u64 = ((double (__fastcall *)(Scaleform::Render::HAL *))v13->GetViewportScaling)(this);
      v15 = this->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
      v16 = _mm_xor_ps(v14, (__m128)_xmm);
      *(__m128 *)&v18.M[1][0] = _mm_mul_ps(*(__m128 *)&v18.M[1][0], _mm_shuffle_ps(v16, v16, 0));
      v15->DrawableCopyback(
        this,
        (Scaleform::Render::Texture *)v5,
        (const Scaleform::Render::Matrix2x4<float> *)v19,
        &v18,
        0);
      Data[Size - 1].pRenderTarget.pObject->SetInUse(Data[Size - 1].pRenderTarget.pObject, RTUse_Unused);
    }
    if ( (this->HALState & 0x400) != 0 )
    {
      this->EndScene(this);
      this->HALState &= ~0x400u;
    }
    this->HALState &= ~8u;
  }
  v2->End(v2, Event_Display);
}

void __fastcall Scaleform::Render::HAL::endMaskDisplay(Scaleform::Render::HAL *this)
{
  unsigned __int64 Size; // rdx
  Scaleform::Render::HAL::RenderTargetEntry *Data; // rax

  if ( this->RenderTargetStack.Data.Size )
  {
    Size = this->RenderTargetStack.Data.Size;
    Data = this->RenderTargetStack.Data.Data;
    Data[Size - 1].MaskStackTop = 0;
    Scaleform::ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
      &Data[Size - 1].MaskStack.Data,
      &Data[Size - 1].MaskStack,
      0i64);
  }
}

void __fastcall Scaleform::Render::HAL::entryChanges(
        Scaleform::Render::HAL *this,
        Scaleform::Render::ContextImpl::Context *context,
        Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63> *cb,
        bool forceUpdateImages)
{
  bool v5; // r12
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *pPages; // r15
  Scaleform::Render::ContextImpl::Context *v7; // r14
  unsigned int i; // ebp
  Scaleform::Render::ContextImpl::EntryChange *v9; // rbx
  Scaleform::Render::TreeCacheNode *pRenderer; // rdi
  unsigned int ChangeBits; // eax
  Scaleform::Render::TreeCacheRoot *pRoot; // rsi
  int v13; // er14
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // er8
  Scaleform::Render::TreeCacheNode *pParent; // rdx
  __int64 v19; // rbx
  __int64 j; // rdi
  Scaleform::Render::TreeCacheRoot *pNext; // rbx
  float *p_FauxBoldRatio; // rdi

  v5 = forceUpdateImages;
  pPages = cb->pPages;
  v7 = context;
  if ( cb->pPages )
  {
    do
    {
      for ( i = 0; i < pPages->Count; ++i )
      {
        v9 = &pPages->Items[i];
        if ( v9->pNode )
        {
          pRenderer = v9->pNode->pRenderer;
          if ( pRenderer )
          {
            if ( (v9->ChangeBits & 0x3730) != 0 )
              ((void (__fastcall *)(Scaleform::Render::TreeCacheNode *, float *))pRenderer->HandleChanges)(
                pRenderer,
                this[-1].ViewportMatrix.M[1]);
            ChangeBits = v9->ChangeBits;
            pRoot = pRenderer->pRoot;
            if ( (ChangeBits & 0x7E208C) != 0 )
            {
              v13 = 0;
              if ( (ChangeBits & 4) != 0 )
              {
                v13 = 0x1000000;
                pRenderer->Flags ^= (pRenderer->Flags ^ *(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pRenderer->pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                                          + 0x28)
                                                                              + 8i64
                                                                              * (unsigned int)((int)(LODWORD(pRenderer->pNode) - ((__int64)pRenderer->pNode & 0xFFFFF000) - 56)
                                                                                             / 56)
                                                                              + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                                                 + 10)) & 1;
              }
              if ( (v9->ChangeBits & 0x40000) != 0 )
                Scaleform::Render::TreeCacheNode::updateMaskCache(
                  pRenderer,
                  (Scaleform::Render::HAL *)((char *)this - 16),
                  (const Scaleform::Render::TreeNode::NodeData *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pRenderer->pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                                        + 0x28)
                                                                            + 8i64
                                                                            * (unsigned int)((int)((int)&pRenderer->pNode[-1]
                                                                                                 - ((__int64)pRenderer->pNode & 0xFFFFF000))
                                                                                           / 56)
                                                                            + 40) & 0xFFFFFFFFFFFFFFFEui64),
                  pRenderer->Depth + 1,
                  0);
              v14 = v9->ChangeBits;
              v15 = v13 | 0x2000000;
              if ( (v14 & 8) == 0 )
                v15 = v13;
              v16 = v14 & 0x7E0000;
              if ( v16 )
              {
                pRenderer->UpdateFlags |= v16;
                v15 |= 0x1000000u;
              }
              v17 = v15 | 0x1000000;
              if ( (v9->ChangeBits & 0x2000) == 0 )
                v17 = v15;
              if ( !pRoot )
                continue;
              if ( v17 )
              {
                pParent = pRenderer->pParent;
                if ( pParent )
                  Scaleform::Render::TreeCacheRoot::AddToUpdate(pRoot, pParent, v17);
              }
            }
            if ( pRoot )
            {
              if ( (v9->ChangeBits & 0x12003) != 0 )
              {
                Scaleform::Render::TreeCacheRoot::AddToUpdate(pRoot, pRenderer, v9->ChangeBits & 0x12003);
                if ( (v9->ChangeBits & 1) != 0 && (pRenderer->Flags & 0x20) != 0 )
                  Scaleform::Render::TreeCacheRoot::AddToUpdate(pRoot, pRenderer->pParent, 0x2000001u);
              }
            }
          }
        }
      }
      pPages = pPages->pNext;
    }
    while ( pPages );
    v5 = forceUpdateImages;
    v7 = context;
  }
  if ( v5 )
  {
    v19 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)&this[-1].ViewportMatrix.M[1][0] + 232i64))(this[-1].ViewportMatrix.M[1]);
    Scaleform::Lock::DoLock((Scaleform::Lock *)(v19 + 16));
    for ( j = *(_QWORD *)&this->GlyphCacheParamsStore.ShadowQuality;
          (Scaleform::Render::HAL *)j != (Scaleform::Render::HAL *)&this->GlyphCacheParamsStore.FauxBoldRatio;
          j = *(_QWORD *)(j + 8) )
    {
      Scaleform::Render::ComplexMesh::updateFills(
        (Scaleform::Render::ComplexMesh *)(j - 144),
        (Scaleform::Render::HAL *)((char *)this - 16));
    }
    Scaleform::Lock::Unlock((Scaleform::Lock *)(v19 + 16));
  }
  pNext = (Scaleform::Render::TreeCacheRoot *)this->ComplexMeshUpdateList.Root.pNext;
  p_FauxBoldRatio = &this->GlyphCacheParamsStore.FauxBoldRatio;
  if ( this == (Scaleform::Render::HAL *)-304i64 )
    p_FauxBoldRatio = 0i64;
  while ( pNext != (Scaleform::Render::TreeCacheRoot *)p_FauxBoldRatio )
  {
    if ( v5 && Scaleform::Render::ContextImpl::Entry::GetContext(pNext->pNode) == v7 )
      pNext->forceUpdateImages(pNext, (Scaleform::Render::HAL *)((char *)this - 16));
    Scaleform::Render::TreeCacheRoot::ChainUpdatesByDepth(pNext);
    Scaleform::Render::TreeCacheRoot::UpdateTreeData(pNext, (Scaleform::Render::HAL *)((char *)this - 16));
    pNext = (Scaleform::Render::TreeCacheRoot *)pNext->pNext;
  }
}

void __fastcall Scaleform::Render::HAL::entryDestroy(
        Scaleform::Render::HAL *this,
        Scaleform::Render::ContextImpl::Entry *p)
{
  Scaleform::Render::TreeCacheNode *pRenderer; // rcx

  pRenderer = p->pRenderer;
  if ( pRenderer )
  {
    ((void (__fastcall *)(Scaleform::Render::TreeCacheNode *, __int64))pRenderer->~TreeCacheNode)(pRenderer, 1i64);
    p->pRenderer = 0i64;
  }
}

__int64 __fastcall extension::ExThread::Runnable::onExecuteThread(void *datasource)
{
  return (*(__int64 (__fastcall **)(void *))(*(_QWORD *)datasource + 48i64))(datasource);
}

__int64 __fastcall Scaleform::Render::HAL::getLastBlendModeOrDefault(Scaleform::Render::HAL *this)
{
  if ( this->BlendModeStack.Data.Size )
    return (unsigned int)this->BlendModeStack.Data.Data[this->BlendModeStack.Data.Size - 1].pPrimitive.pObject->BlendModeValue;
  else
    return 1i64;
}

void __fastcall Scaleform::Render::HAL::updateComplexMeshes(Scaleform::Render::HAL *this)
{
  Scaleform::Render::MeshKeyManager *v2; // rbx
  Scaleform::Render::ComplexMesh::UpdateNode *i; // rdi

  v2 = this->GetMeshKeyManager(this);
  Scaleform::Lock::DoLock(&v2->KeySetLock);
  for ( i = this->ComplexMeshUpdateList.Root.pNext;
        i != (Scaleform::Render::ComplexMesh::UpdateNode *)&this->ComplexMeshUpdateList;
        i = i->pNext )
  {
    Scaleform::Render::ComplexMesh::updateFills((Scaleform::Render::ComplexMesh *)&i[-9], this);
  }
  Scaleform::Lock::Unlock(&v2->KeySetLock);
}

