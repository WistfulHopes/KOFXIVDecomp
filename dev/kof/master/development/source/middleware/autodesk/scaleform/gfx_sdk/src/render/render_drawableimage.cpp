#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage_queue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"

Scaleform::Render::DrawableImageContext::DrawableImageContext(Scaleform::Render::ContextImpl::Context * controlContext, Scaleform::Render::ThreadCommandQueue * commandQueue, const Scaleform::Render::Interfaces & i); // 0x14032BC70
Scaleform::Render::DrawableImageContext::~DrawableImageContext(); // 0x14032BFA0
void Scaleform::Render::DrawableImageContext::OnCapture(); // 0x14032EC40
void Scaleform::Render::DrawableImageContext::OnNextCapture(Scaleform::Render::ContextImpl::RenderNotify * notify); // 0x14032EC80
void Scaleform::Render::DrawableImageContext::OnShutdown(bool waitFlag); // 0x14032ECC0
void Scaleform::Render::DrawableImageContext::ExecuteNextCapture(Scaleform::Render::ContextImpl::RenderNotify * notify); // 0x14032D900
void Scaleform::Render::DrawableImageContext::processTreeRootKillList(); // 0x140330730
void Scaleform::Render::DrawableImageContext::AddTreeRootToKillList(Scaleform::Render::TreeRoot * proot); // 0x14032C6A0
Scaleform::Render::DrawableImage::DrawableImage(bool transparent, Scaleform::Render::ImageBase * originalData, Scaleform::Render::DrawableImageContext * dicontext); // 0x14032BB50
Scaleform::Render::DrawableImage::DrawableImage(Scaleform::Render::ImageFormat format, Scaleform::Render::Size<unsigned long> size, bool transparent, Scaleform::Render::Color fillColor, Scaleform::Render::DrawableImageContext * dicontext); // 0x14032B990
class Scaleform::Render::DestroyDrawableImageThreadCommand :
	Scaleform::Render::ThreadCommand
{
public:
	DestroyDrawableImageThreadCommand(Scaleform::Render::DestroyDrawableImageThreadCommand &);
	DestroyDrawableImageThreadCommand(const Scaleform::Render::DestroyDrawableImageThreadCommand &);
	DestroyDrawableImageThreadCommand(Scaleform::Render::DrawableImage *);
	virtual void Execute();
private:
	Scaleform::Render::DrawableImage * pDrawableImage; // 0x10
public:
	virtual ~DestroyDrawableImageThreadCommand();
	Scaleform::Render::DestroyDrawableImageThreadCommand & operator=(Scaleform::Render::DestroyDrawableImageThreadCommand &);
	Scaleform::Render::DestroyDrawableImageThreadCommand & operator=(const Scaleform::Render::DestroyDrawableImageThreadCommand &);
};
void Scaleform::Render::DestroyDrawableImageThreadCommand::Execute(); // 0x14032D820
void Scaleform::Render::DrawableImage::Release(); // 0x14032F260
class Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand>
{
protected:
	Scaleform::Render::DestroyDrawableImageThreadCommand * pObject; // 0x0
public:
	Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand>(const Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> &);
	Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand>(Scaleform::Render::DestroyDrawableImageThreadCommand *);
	Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand>(Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> &, Scaleform::PickType);
	Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand>(Scaleform::Pickable<Scaleform::Render::DestroyDrawableImageThreadCommand>);
	Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand>(Scaleform::Render::DestroyDrawableImageThreadCommand &);
	Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand>();
	~Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand>();
	bool operator==(Scaleform::Render::DestroyDrawableImageThreadCommand *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> &);
	bool operator!=(Scaleform::Render::DestroyDrawableImageThreadCommand *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> &);
	Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> & operator=(Scaleform::Pickable<Scaleform::Render::DestroyDrawableImageThreadCommand>);
	const Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> & operator=(Scaleform::Render::DestroyDrawableImageThreadCommand &);
	const Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> & operator=(Scaleform::Render::DestroyDrawableImageThreadCommand *);
	const Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> & operator=(const Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> &);
	Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> & SetPtr(Scaleform::Pickable<Scaleform::Render::DestroyDrawableImageThreadCommand>);
	Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> & SetPtr(Scaleform::Render::DestroyDrawableImageThreadCommand &);
	Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> & SetPtr(Scaleform::Render::DestroyDrawableImageThreadCommand *);
	Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> & SetPtr(const Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::DestroyDrawableImageThreadCommand * & GetRawRef();
	Scaleform::Render::DestroyDrawableImageThreadCommand * GetPtr();
	Scaleform::Render::DestroyDrawableImageThreadCommand & operator*();
	Scaleform::Render::DestroyDrawableImageThreadCommand * operator->();
	Scaleform::Render::DestroyDrawableImageThreadCommand * operator class Scaleform::Render::DestroyDrawableImageThreadCommand *();
	Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> & Pick(Scaleform::Render::DestroyDrawableImageThreadCommand *);
	Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> & Pick(Scaleform::Pickable<Scaleform::Render::DestroyDrawableImageThreadCommand>);
	Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> & Pick(Scaleform::Ptr<Scaleform::Render::DestroyDrawableImageThreadCommand> &);
};
Scaleform::Render::DrawableImage::~DrawableImage(); // 0x14032BE20
bool Scaleform::Render::DrawableImage::MapImageSource(Scaleform::Render::ImageData * data, Scaleform::Render::ImageBase * i); // 0x14032E850
void Scaleform::Render::DrawableImage::initialize(Scaleform::Render::ImageFormat format, const Scaleform::Render::Size<unsigned long> & size, Scaleform::Render::DrawableImageContext * dicontext); // 0x1403303F0
bool Scaleform::Render::DrawableImage::isMapped(); // 0x140330640
class Scaleform::AtomicOps<unsigned int>
{
	struct Ops;
	typedef long T;
	typedef volatile long PT;
	union C2T_union;
public:
	static unsigned long Exchange_Sync(volatile unsigned long *, unsigned long);
	static unsigned long Exchange_Release(volatile unsigned long *, unsigned long);
	static unsigned long Exchange_Acquire(volatile unsigned long *, unsigned long);
	static unsigned long Exchange_NoSync(volatile unsigned long *, unsigned long);
	static unsigned long ExchangeAdd_Sync(volatile unsigned long *, unsigned long);
	static unsigned long ExchangeAdd_Release(volatile unsigned long *, unsigned long);
	static unsigned long ExchangeAdd_Acquire(volatile unsigned long *, unsigned long);
	static unsigned long ExchangeAdd_NoSync(volatile unsigned long *, unsigned long);
	static bool CompareAndSet_Sync(volatile unsigned long *, unsigned long, unsigned long);
	static bool CompareAndSet_Release(volatile unsigned long *, unsigned long, unsigned long);
	static bool CompareAndSet_Acquire(volatile unsigned long *, unsigned long, unsigned long);
	static bool CompareAndSet_NoSync(volatile unsigned long *, unsigned long, unsigned long);
	static void Store_Release(volatile unsigned long *, unsigned long);
	static unsigned long Load_Acquire(const unsigned long *);
};
void Scaleform::Render::DrawableImage::addToCPUModifiedList(); // 0x14032FC50
void Scaleform::Render::DrawableImage::addToGPUModifiedListRT(); // 0x14032FD10
bool Scaleform::Render::DrawableImage::createTextureFromManager(Scaleform::Render::HAL * phal, Scaleform::Render::TextureManager * tmanager); // 0x14032FDD0
Scaleform::Render::Texture * Scaleform::Render::DrawableImage::GetTexture(Scaleform::Render::TextureManager * pmanager); // 0x14032E1A0
bool Scaleform::Render::DrawableImage::Decode(Scaleform::Render::ImageData * pdest, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * arg); // 0x14004BBE0
void Scaleform::Render::DrawableImage::TextureLost(Scaleform::Render::Image::TextureLossReason reason); // 0x14032FA30
bool Scaleform::Render::DrawableImage::mapTextureRT(bool readOnly); // 0x140330650
bool Scaleform::Render::DrawableImage::ensureRenderableRT(); // 0x14032FF30
void Scaleform::Render::DrawableImage::unmapTextureRT(); // 0x1403309B0
void Scaleform::Render::DrawableImage::updateRenderTargetRT(); // 0x140330A00
void Scaleform::Render::DrawableImage::updateStagingTargetRT(); // 0x140330B00
void Scaleform::Render::DrawableImage::addCommand<Scaleform::Render::DICommand_ColorTransform>(const Scaleform::Render::DICommand_ColorTransform & cmd); // 0x14032B050
void Scaleform::Render::DrawableImage::addCommand<Scaleform::Render::DICommand_Draw>(const Scaleform::Render::DICommand_Draw & cmd); // 0x14032B100
void Scaleform::Render::DrawableImage::addCommand<Scaleform::Render::DICommand_PaletteMap>(const Scaleform::Render::DICommand_PaletteMap & cmd); // 0x14032B190
Scaleform::Render::DICommand_Draw::DICommand_Draw(const Scaleform::Render::DICommand_Draw & __that); // 0x14032B2E0
Scaleform::Render::DICommand_HitTest::DICommand_HitTest(const Scaleform::Render::DICommand_HitTest & __that); // 0x14032B400
Scaleform::Render::DICommand_SourceRect::DICommand_SourceRect(const Scaleform::Render::DICommand_SourceRect & __that); // 0x14032B860
Scaleform::Render::ImageData & Scaleform::Render::DrawableImage::getMappedData(); // 0x140330390
void Scaleform::Render::DrawableImage::setViewProj3DHelper(Scaleform::Render::TreeNode * subtree, Scaleform::Render::TreeRoot * root); // 0x140330810
void Scaleform::Render::DrawableImage::ApplyFilter(Scaleform::Render::DrawableImage * source, const Scaleform::Render::Rect<long> & sourceRect, const Scaleform::Render::Point<long> & destPoint, Scaleform::Render::Filter * filter); // 0x14032C740
void Scaleform::Render::DrawableImage::CalcFilterRect(Scaleform::Render::Rect<float> * result, const Scaleform::Render::Rect<long> & sourceRect, Scaleform::Render::Filter * filter); // 0x14032C930
void Scaleform::Render::DrawableImage::ColorTransform(const Scaleform::Render::Rect<long> & rect, const Scaleform::Render::Cxform & cxform); // 0x14032C9B0
void Scaleform::Render::DrawableImage::Compare(Scaleform::Render::DrawableImage * image0, Scaleform::Render::DrawableImage * image1); // 0x14032CA30
void Scaleform::Render::DrawableImage::CopyChannel(Scaleform::Render::DrawableImage * source, const Scaleform::Render::Rect<long> & sourceRect, const Scaleform::Render::Point<long> & destPoint, Scaleform::Render::DrawableImage::ChannelBits sourceChannel, Scaleform::Render::DrawableImage::ChannelBits destChannel); // 0x14032CC10
void Scaleform::Render::DrawableImage::CopyPixels(Scaleform::Render::DrawableImage * source, const Scaleform::Render::Rect<long> & sourceRect, const Scaleform::Render::Point<long> & destPoint, Scaleform::Render::DrawableImage * alphaSource, const Scaleform::Render::Point<long> * alphaPoint, bool mergeAlpha); // 0x14032CDD0
void Scaleform::Render::DrawableImage::Draw(Scaleform::Render::TreeNode * subtree, const Scaleform::Render::Matrix2x4<float> & matrix, const Scaleform::Render::Cxform & cform, Scaleform::Render::BlendMode blendMode, const Scaleform::Render::Rect<long> * clipRect); // 0x14032D570
class Scaleform::Ptr<Scaleform::Render::TreeRoot>
{
protected:
	Scaleform::Render::TreeRoot * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TreeRoot>(const Scaleform::Ptr<Scaleform::Render::TreeRoot> &);
	Ptr<Scaleform::Render::TreeRoot>(Scaleform::Render::TreeRoot *);
	Ptr<Scaleform::Render::TreeRoot>(Scaleform::Ptr<Scaleform::Render::TreeRoot> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TreeRoot>(Scaleform::Pickable<Scaleform::Render::TreeRoot>);
	Ptr<Scaleform::Render::TreeRoot>(Scaleform::Render::TreeRoot &);
	Ptr<Scaleform::Render::TreeRoot>();
	~Ptr<Scaleform::Render::TreeRoot>();
	bool operator==(Scaleform::Render::TreeRoot *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TreeRoot> &);
	bool operator!=(Scaleform::Render::TreeRoot *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TreeRoot> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TreeRoot> &);
	Scaleform::Ptr<Scaleform::Render::TreeRoot> & operator=(Scaleform::Pickable<Scaleform::Render::TreeRoot>);
	const Scaleform::Ptr<Scaleform::Render::TreeRoot> & operator=(Scaleform::Render::TreeRoot &);
	const Scaleform::Ptr<Scaleform::Render::TreeRoot> & operator=(Scaleform::Render::TreeRoot *);
	const Scaleform::Ptr<Scaleform::Render::TreeRoot> & operator=(const Scaleform::Ptr<Scaleform::Render::TreeRoot> &);
	Scaleform::Ptr<Scaleform::Render::TreeRoot> & SetPtr(Scaleform::Pickable<Scaleform::Render::TreeRoot>);
	Scaleform::Ptr<Scaleform::Render::TreeRoot> & SetPtr(Scaleform::Render::TreeRoot &);
	Scaleform::Ptr<Scaleform::Render::TreeRoot> & SetPtr(Scaleform::Render::TreeRoot *);
	Scaleform::Ptr<Scaleform::Render::TreeRoot> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TreeRoot> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TreeRoot * & GetRawRef();
	Scaleform::Render::TreeRoot * GetPtr();
	Scaleform::Render::TreeRoot & operator*();
	Scaleform::Render::TreeRoot * operator->();
	Scaleform::Render::TreeRoot * operator class Scaleform::Render::TreeRoot *();
	Scaleform::Ptr<Scaleform::Render::TreeRoot> & Pick(Scaleform::Render::TreeRoot *);
	Scaleform::Ptr<Scaleform::Render::TreeRoot> & Pick(Scaleform::Pickable<Scaleform::Render::TreeRoot>);
	Scaleform::Ptr<Scaleform::Render::TreeRoot> & Pick(Scaleform::Ptr<Scaleform::Render::TreeRoot> &);
};
class Scaleform::Ptr<Scaleform::Render::TreeNode>
{
protected:
	Scaleform::Render::TreeNode * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TreeNode>(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	Ptr<Scaleform::Render::TreeNode>(Scaleform::Render::TreeNode *);
	Ptr<Scaleform::Render::TreeNode>(Scaleform::Ptr<Scaleform::Render::TreeNode> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TreeNode>(Scaleform::Pickable<Scaleform::Render::TreeNode>);
	Ptr<Scaleform::Render::TreeNode>(Scaleform::Render::TreeNode &);
	Ptr<Scaleform::Render::TreeNode>();
	~Ptr<Scaleform::Render::TreeNode>();
	bool operator==(Scaleform::Render::TreeNode *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	bool operator!=(Scaleform::Render::TreeNode *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & operator=(Scaleform::Pickable<Scaleform::Render::TreeNode>);
	const Scaleform::Ptr<Scaleform::Render::TreeNode> & operator=(Scaleform::Render::TreeNode &);
	const Scaleform::Ptr<Scaleform::Render::TreeNode> & operator=(Scaleform::Render::TreeNode *);
	const Scaleform::Ptr<Scaleform::Render::TreeNode> & operator=(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & SetPtr(Scaleform::Pickable<Scaleform::Render::TreeNode>);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & SetPtr(Scaleform::Render::TreeNode &);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & SetPtr(Scaleform::Render::TreeNode *);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TreeNode * & GetRawRef();
	Scaleform::Render::TreeNode * GetPtr();
	Scaleform::Render::TreeNode & operator*();
	Scaleform::Render::TreeNode * operator->();
	Scaleform::Render::TreeNode * operator class Scaleform::Render::TreeNode *();
	Scaleform::Ptr<Scaleform::Render::TreeNode> & Pick(Scaleform::Render::TreeNode *);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & Pick(Scaleform::Pickable<Scaleform::Render::TreeNode>);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & Pick(Scaleform::Ptr<Scaleform::Render::TreeNode> &);
};
void Scaleform::Render::DrawableImage::Draw(Scaleform::Render::Image * source, const Scaleform::Render::Matrix2x4<float> & matrix, const Scaleform::Render::Cxform & cform, Scaleform::Render::BlendMode blendMode, const Scaleform::Render::Rect<long> * clipRect, bool smoothing); // 0x14032D110
class Scaleform::Ptr<Scaleform::Render::TreeShape>
{
protected:
	Scaleform::Render::TreeShape * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TreeShape>(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	Ptr<Scaleform::Render::TreeShape>(Scaleform::Render::TreeShape *);
	Ptr<Scaleform::Render::TreeShape>(Scaleform::Ptr<Scaleform::Render::TreeShape> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TreeShape>(Scaleform::Pickable<Scaleform::Render::TreeShape>);
	Ptr<Scaleform::Render::TreeShape>(Scaleform::Render::TreeShape &);
	Ptr<Scaleform::Render::TreeShape>();
	~Ptr<Scaleform::Render::TreeShape>();
	bool operator==(Scaleform::Render::TreeShape *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	bool operator!=(Scaleform::Render::TreeShape *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & operator=(Scaleform::Pickable<Scaleform::Render::TreeShape>);
	const Scaleform::Ptr<Scaleform::Render::TreeShape> & operator=(Scaleform::Render::TreeShape &);
	const Scaleform::Ptr<Scaleform::Render::TreeShape> & operator=(Scaleform::Render::TreeShape *);
	const Scaleform::Ptr<Scaleform::Render::TreeShape> & operator=(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & SetPtr(Scaleform::Pickable<Scaleform::Render::TreeShape>);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & SetPtr(Scaleform::Render::TreeShape &);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & SetPtr(Scaleform::Render::TreeShape *);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TreeShape * & GetRawRef();
	Scaleform::Render::TreeShape * GetPtr();
	Scaleform::Render::TreeShape & operator*();
	Scaleform::Render::TreeShape * operator->();
	Scaleform::Render::TreeShape * operator class Scaleform::Render::TreeShape *();
	Scaleform::Ptr<Scaleform::Render::TreeShape> & Pick(Scaleform::Render::TreeShape *);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & Pick(Scaleform::Pickable<Scaleform::Render::TreeShape>);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & Pick(Scaleform::Ptr<Scaleform::Render::TreeShape> &);
};
class Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP>
{
protected:
	Scaleform::Render::ShapeDataFloatMP * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ShapeDataFloatMP>(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> &);
	Ptr<Scaleform::Render::ShapeDataFloatMP>(Scaleform::Render::ShapeDataFloatMP *);
	Ptr<Scaleform::Render::ShapeDataFloatMP>(Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ShapeDataFloatMP>(Scaleform::Pickable<Scaleform::Render::ShapeDataFloatMP>);
	Ptr<Scaleform::Render::ShapeDataFloatMP>(Scaleform::Render::ShapeDataFloatMP &);
	Ptr<Scaleform::Render::ShapeDataFloatMP>();
	~Ptr<Scaleform::Render::ShapeDataFloatMP>();
	bool operator==(Scaleform::Render::ShapeDataFloatMP *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> &);
	bool operator!=(Scaleform::Render::ShapeDataFloatMP *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> & operator=(Scaleform::Pickable<Scaleform::Render::ShapeDataFloatMP>);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> & operator=(Scaleform::Render::ShapeDataFloatMP &);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> & operator=(Scaleform::Render::ShapeDataFloatMP *);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> & operator=(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> & SetPtr(Scaleform::Pickable<Scaleform::Render::ShapeDataFloatMP>);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> & SetPtr(Scaleform::Render::ShapeDataFloatMP &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> & SetPtr(Scaleform::Render::ShapeDataFloatMP *);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ShapeDataFloatMP * & GetRawRef();
	Scaleform::Render::ShapeDataFloatMP * GetPtr();
	Scaleform::Render::ShapeDataFloatMP & operator*();
	Scaleform::Render::ShapeDataFloatMP * operator->();
	Scaleform::Render::ShapeDataFloatMP * operator class Scaleform::Render::ShapeDataFloatMP *();
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> & Pick(Scaleform::Render::ShapeDataFloatMP *);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> & Pick(Scaleform::Pickable<Scaleform::Render::ShapeDataFloatMP>);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> & Pick(Scaleform::Ptr<Scaleform::Render::ShapeDataFloatMP> &);
};
void Scaleform::Render::DrawableImage::Dispose(); // 0x14032D010
void Scaleform::Render::DrawableImage::FillRect(const Scaleform::Render::Rect<long> & rect, Scaleform::Render::Color color); // 0x14032D920
void Scaleform::Render::DrawableImage::FloodFill(const Scaleform::Render::Point<long> & pt, Scaleform::Render::Color color); // 0x14032DA80
Scaleform::Render::Rect<long> Scaleform::Render::DrawableImage::GetColorBoundsRect(unsigned long mask, unsigned long color, bool findColor); // 0x14032DBB0
Scaleform::Render::Color Scaleform::Render::DrawableImage::GetPixel(long x, long y); // 0x14032DE90
Scaleform::Render::Color Scaleform::Render::DrawableImage::GetPixel32(long x, long y); // 0x14032DD20
bool Scaleform::Render::DrawableImage::GetPixels(Scaleform::Render::DIPixelProvider & provider, const Scaleform::Render::Rect<long> & sourceRect); // 0x14032DEB0
void Scaleform::Render::DrawableImage::Histogram(Scaleform::Render::Rect<long> * rect, unsigned long[256] * colors); // 0x14032E3E0
bool Scaleform::Render::DrawableImage::HitTest(const Scaleform::Render::Point<long> & firstPoint, Scaleform::Render::Rect<long> & secondImage, unsigned long alphaThreshold); // 0x14032E580
bool Scaleform::Render::DrawableImage::HitTest(Scaleform::Render::ImageBase * secondImage, const Scaleform::Render::Point<long> & firstPoint, const Scaleform::Render::Point<long> & secondPoint, unsigned long firstThreshold, unsigned long secondThreshold); // 0x14032E6F0
void Scaleform::Render::DrawableImage::Merge(Scaleform::Render::DrawableImage * source, const Scaleform::Render::Rect<long> & sourceRect, const Scaleform::Render::Point<long> & destPoint, unsigned long redMult, unsigned long greenMult, unsigned long blueMult, unsigned long alphaMult); // 0x14032E910
void Scaleform::Render::DrawableImage::Noise(unsigned long randomSeed, unsigned long low, unsigned long high, unsigned long channelMask, bool grayscale); // 0x14032EAF0
void Scaleform::Render::DrawableImage::PaletteMap(Scaleform::Render::DrawableImage * source, const Scaleform::Render::Rect<long> & sourceRect, const Scaleform::Render::Point<long> & destPoint, unsigned long * * channels); // 0x14032ED50
void Scaleform::Render::DrawableImage::PerlinNoise(float frequencyX, float frequencyY, unsigned long numOctaves, unsigned long randomSeed, bool stitch, bool fractal, unsigned long channelMask, bool grayScale, float * offsets, unsigned long offsetCount); // 0x14032EE10
unsigned long Scaleform::Render::DrawableImage::PixelDissolve(Scaleform::Render::DrawableImage * source, const Scaleform::Render::Rect<long> & sourceRect, const Scaleform::Render::Point<long> & destPoint, unsigned long randomSeed, unsigned long numPixels, Scaleform::Render::Color fill); // 0x14032EFB0
void Scaleform::Render::DrawableImage::Scroll(long x, long y); // 0x14032F3B0
void Scaleform::Render::DrawableImage::SetPixel(long x, long y, Scaleform::Render::Color c); // 0x14032F6F0
void Scaleform::Render::DrawableImage::SetPixel32(long x, long y, Scaleform::Render::Color c); // 0x14032F580
bool Scaleform::Render::DrawableImage::SetPixels(const Scaleform::Render::Rect<long> & inputRect, Scaleform::Render::DIPixelProvider & provider); // 0x14032F860
void Scaleform::Render::DrawableImage::Threshold(Scaleform::Render::DrawableImage * source, const Scaleform::Render::Rect<long> & sourceRect, const Scaleform::Render::Point<long> & destPoint, Scaleform::Render::DrawableImage::OperationType op, unsigned long threshold, unsigned long color, unsigned long mask, bool copySource); // 0x14032FA60void __fastcall Scaleform::Render::DrawableImage::addCommand<Scaleform::Render::DICommand_ColorTransform>(
        Scaleform::Render::DrawableImage *this,
        const Scaleform::Render::DICommand_ColorTransform *cmd)
{
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  Scaleform::Render::DICommand_SourceRect *v6; // rax
  Scaleform::Render::DICommand_SourceRect *v7; // rsi

  pObject = this->pContext.pObject;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(
          &cmd->Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform>,
          this) )
  {
    v6 = (Scaleform::Render::DICommand_SourceRect *)Scaleform::Render::DICommandQueue::allocCommandFromPage(
                                                      this->pQueue.pObject,
                                                      0x50u,
                                                      &this->pQueue.pObject->QueueLock);
    v7 = v6;
    if ( v6 )
    {
      Scaleform::Render::DICommand_SourceRect::DICommand_SourceRect(v6, cmd);
      v7->__vftable = (Scaleform::Render::DICommand_SourceRect_vtbl *)&Scaleform::Render::DICommand_ColorTransform::`vftable';
      v7[1].Scaleform::Render::DICommand = *(Scaleform::Render::DICommand *)cmd->CxBuffer;
      *(_OWORD *)&v7[1].pSource.pObject = *(_OWORD *)&cmd->CxBuffer[16];
    }
    if ( (((__int64 (__fastcall *)(const Scaleform::Render::DICommand_ColorTransform *))cmd->GetRenderCaps)(cmd) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
}

void __fastcall Scaleform::Render::DrawableImage::addCommand<Scaleform::Render::DICommand_Draw>(
        Scaleform::Render::DrawableImage *this,
        const Scaleform::Render::DICommand_Draw *cmd)
{
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  Scaleform::Render::DICommand_Draw *v6; // rax

  pObject = this->pContext.pObject;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(
          &cmd->Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Draw,Scaleform::Render::DICommand>,
          this) )
  {
    v6 = (Scaleform::Render::DICommand_Draw *)Scaleform::Render::DICommandQueue::allocCommandFromPage(
                                                this->pQueue.pObject,
                                                0x30u,
                                                &this->pQueue.pObject->QueueLock);
    if ( v6 )
      Scaleform::Render::DICommand_Draw::DICommand_Draw(v6, cmd);
    if ( (((__int64 (__fastcall *)(const Scaleform::Render::DICommand_Draw *))cmd->GetRenderCaps)(cmd) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
}

void __fastcall Scaleform::Render::DrawableImage::addCommand<Scaleform::Render::DICommand_PaletteMap>(
        Scaleform::Render::DrawableImage *this,
        const Scaleform::Render::DICommand_PaletteMap *cmd)
{
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  Scaleform::Render::DICommand_PaletteMap *v6; // rax

  pObject = this->pContext.pObject;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(
          &cmd->Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_PaletteMap>,
          this) )
  {
    v6 = (Scaleform::Render::DICommand_PaletteMap *)Scaleform::Render::DICommandQueue::allocCommandFromPage(
                                                      this->pQueue.pObject,
                                                      0x40u,
                                                      &this->pQueue.pObject->QueueLock);
    if ( v6 )
      Scaleform::Render::DICommand_PaletteMap::DICommand_PaletteMap(v6, cmd);
    if ( (((__int64 (__fastcall *)(const Scaleform::Render::DICommand_PaletteMap *))cmd->GetRenderCaps)(cmd) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
}

void __fastcall Scaleform::Render::DICommand_ColorTransform::DICommand_ColorTransform(
        Scaleform::Render::DICommand_ColorTransform *this,
        Scaleform::Render::DrawableImage *image,
        const Scaleform::Render::Rect<long> *rect,
        const Scaleform::Render::Cxform *cxform)
{
  int x1; // er14
  int y1; // er15
  int y2; // er8
  int x2; // edx
  int v12; // ecx

  x1 = rect->x1;
  y1 = rect->y1;
  this->__vftable = (Scaleform::Render::DICommand_ColorTransform_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( image )
    image->AddRef(image);
  this->pImage.pObject = image;
  this->__vftable = (Scaleform::Render::DICommand_ColorTransform_vtbl *)&Scaleform::Render::DICommand_SourceRect::`vftable';
  if ( image )
    image->AddRef(image);
  this->pSource.pObject = image;
  y2 = rect->y2;
  x2 = rect->x2;
  v12 = rect->y1;
  this->SourceRect.x1 = rect->x1;
  this->SourceRect.y1 = v12;
  this->SourceRect.x2 = x2;
  this->SourceRect.y2 = y2;
  this->DestPoint.x = x1;
  this->DestPoint.y = y1;
  this->__vftable = (Scaleform::Render::DICommand_ColorTransform_vtbl *)&Scaleform::Render::DICommand_ColorTransform::`vftable';
  *(_OWORD *)this->CxBuffer = *(_OWORD *)&cxform->M[0][0];
  *(_OWORD *)&this->CxBuffer[16] = *(_OWORD *)&cxform->M[1][0];
}

void __fastcall Scaleform::Render::DICommand_Draw::DICommand_Draw(
        Scaleform::Render::DICommand_Draw *this,
        const Scaleform::Render::DICommand_Draw *__that)
{
  Scaleform::Render::DrawableImage *pObject; // rcx
  int y2; // er8
  int x2; // edx
  int y1; // ecx

  this->__vftable = (Scaleform::Render::DICommand_Draw_vtbl *)&Scaleform::Render::DICommand::`vftable';
  pObject = __that->pImage.pObject;
  if ( pObject )
    pObject->AddRef(pObject);
  this->pImage.pObject = __that->pImage.pObject;
  this->__vftable = (Scaleform::Render::DICommand_Draw_vtbl *)&Scaleform::Render::DICommand_Draw::`vftable';
  this->pRoot = __that->pRoot;
  y2 = __that->ClipRect.y2;
  x2 = __that->ClipRect.x2;
  y1 = __that->ClipRect.y1;
  this->ClipRect.x1 = __that->ClipRect.x1;
  this->ClipRect.y1 = y1;
  this->ClipRect.x2 = x2;
  this->ClipRect.y2 = y2;
  this->HasClipRect = __that->HasClipRect;
}

void __fastcall Scaleform::Render::DICommand_Draw::DICommand_Draw(
        Scaleform::Render::DICommand_Draw *this,
        Scaleform::Render::DrawableImage *image,
        Scaleform::Render::TreeRoot *root,
        const Scaleform::Render::Rect<long> *clipRect)
{
  int y2; // er8
  int x2; // edx
  int y1; // ecx

  this->__vftable = (Scaleform::Render::DICommand_Draw_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( image )
    image->AddRef(image);
  this->pImage.pObject = image;
  this->__vftable = (Scaleform::Render::DICommand_Draw_vtbl *)&Scaleform::Render::DICommand_Draw::`vftable';
  this->pRoot = root;
  *(_QWORD *)&this->ClipRect.x1 = 0i64;
  *(_QWORD *)&this->ClipRect.x2 = 0i64;
  this->HasClipRect = clipRect != 0i64;
  if ( clipRect )
  {
    y2 = clipRect->y2;
    x2 = clipRect->x2;
    y1 = clipRect->y1;
    this->ClipRect.x1 = clipRect->x1;
    this->ClipRect.y1 = y1;
    this->ClipRect.x2 = x2;
    this->ClipRect.y2 = y2;
  }
}

void __fastcall Scaleform::Render::DICommand_HitTest::DICommand_HitTest(
        Scaleform::Render::DICommand_HitTest *this,
        const Scaleform::Render::DICommand_HitTest *__that)
{
  Scaleform::Render::DrawableImage *pObject; // rcx
  Scaleform::Render::Image *v5; // rcx
  int y1; // ecx
  int y2; // er8
  int x2; // edx
  int y; // ecx
  int v10; // ecx

  this->__vftable = (Scaleform::Render::DICommand_HitTest_vtbl *)&Scaleform::Render::DICommand::`vftable';
  pObject = __that->pImage.pObject;
  if ( pObject )
    pObject->AddRef(pObject);
  this->pImage.pObject = __that->pImage.pObject;
  this->__vftable = (Scaleform::Render::DICommand_HitTest_vtbl *)&Scaleform::Render::DICommand_HitTest::`vftable';
  v5 = __that->SecondImage.pObject;
  if ( v5 )
    v5->AddRef(v5);
  this->SecondImage.pObject = __that->SecondImage.pObject;
  y1 = __that->SecondArea.y1;
  y2 = __that->SecondArea.y2;
  x2 = __that->SecondArea.x2;
  this->SecondArea.x1 = __that->SecondArea.x1;
  this->SecondArea.y1 = y1;
  this->SecondArea.x2 = x2;
  this->SecondArea.y2 = y2;
  y = __that->FirstPoint.y;
  this->FirstPoint.x = __that->FirstPoint.x;
  this->FirstPoint.y = y;
  v10 = __that->SecondPoint.y;
  this->SecondPoint.x = __that->SecondPoint.x;
  this->SecondPoint.y = v10;
  this->FirstThreshold = __that->FirstThreshold;
  this->SecondThreshold = __that->SecondThreshold;
  this->Result = __that->Result;
}

void __fastcall Scaleform::Render::DICommand_PaletteMap::DICommand_PaletteMap(
        Scaleform::Render::DICommand_PaletteMap *this,
        const Scaleform::Render::DICommand_PaletteMap *other)
{
  unsigned int *v4; // rax
  __int64 v5; // rdx
  unsigned int *Channels; // rcx
  __int128 v7; // xmm0

  Scaleform::Render::DICommand_SourceRect::DICommand_SourceRect(this, other);
  this->__vftable = (Scaleform::Render::DICommand_PaletteMap_vtbl *)&Scaleform::Render::DICommand_PaletteMap::`vftable';
  this->ChannelMask = other->ChannelMask;
  v4 = (unsigned int *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 4096i64, 0i64);
  this->Channels = v4;
  v5 = 32i64;
  Channels = other->Channels;
  do
  {
    v4 += 32;
    v7 = *(_OWORD *)Channels;
    Channels += 32;
    *((_OWORD *)v4 - 8) = v7;
    *((_OWORD *)v4 - 7) = *((_OWORD *)Channels - 7);
    *((_OWORD *)v4 - 6) = *((_OWORD *)Channels - 6);
    *((_OWORD *)v4 - 5) = *((_OWORD *)Channels - 5);
    *((_OWORD *)v4 - 4) = *((_OWORD *)Channels - 4);
    *((_OWORD *)v4 - 3) = *((_OWORD *)Channels - 3);
    *((_OWORD *)v4 - 2) = *((_OWORD *)Channels - 2);
    *((_OWORD *)v4 - 1) = *((_OWORD *)Channels - 1);
    --v5;
  }
  while ( v5 );
}

void __fastcall Scaleform::Render::DICommand_PaletteMap::DICommand_PaletteMap(
        Scaleform::Render::DICommand_PaletteMap *this,
        Scaleform::Render::DrawableImage *image,
        Scaleform::Render::DrawableImage *source,
        const Scaleform::Render::Rect<long> *sr,
        const Scaleform::Render::Point<long> *dp,
        unsigned int **channels)
{
  unsigned int *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int *v10; // rax
  unsigned int *v11; // rcx
  __int128 v12; // xmm0
  int v13; // edx
  __int64 v14; // r9
  unsigned int *v15; // rcx
  unsigned int *v16; // rax
  __int128 v17; // xmm0
  int v18; // edx
  __int64 v19; // r9
  unsigned int *v20; // rcx
  unsigned int *v21; // rax
  __int128 v22; // xmm0
  unsigned int *v23; // rax
  unsigned int *v24; // rcx
  unsigned int *v25; // rax
  __int128 v26; // xmm0

  Scaleform::Render::DICommand_SourceRect::DICommand_SourceRect(this, image, source, sr, dp);
  this->ChannelMask = 0;
  this->__vftable = (Scaleform::Render::DICommand_PaletteMap_vtbl *)&Scaleform::Render::DICommand_PaletteMap::`vftable';
  v7 = (unsigned int *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 4096i64, 0i64);
  this->Channels = v7;
  memset(v7, 0, 0x1000ui64);
  v8 = 8i64;
  if ( *channels )
  {
    this->ChannelMask |= 1u;
    v9 = 8i64;
    v10 = *channels;
    v11 = this->Channels;
    do
    {
      v11 += 32;
      v12 = *(_OWORD *)v10;
      v10 += 32;
      *((_OWORD *)v11 - 8) = v12;
      *((_OWORD *)v11 - 7) = *((_OWORD *)v10 - 7);
      *((_OWORD *)v11 - 6) = *((_OWORD *)v10 - 6);
      *((_OWORD *)v11 - 5) = *((_OWORD *)v10 - 5);
      *((_OWORD *)v11 - 4) = *((_OWORD *)v10 - 4);
      *((_OWORD *)v11 - 3) = *((_OWORD *)v10 - 3);
      *((_OWORD *)v11 - 2) = *((_OWORD *)v10 - 2);
      *((_OWORD *)v11 - 1) = *((_OWORD *)v10 - 1);
      --v9;
    }
    while ( v9 );
  }
  v13 = __ROL4__(1, 1);
  if ( channels[1] )
  {
    this->ChannelMask |= v13;
    v14 = 8i64;
    v15 = channels[1];
    v16 = this->Channels + 256;
    do
    {
      v16 += 32;
      v17 = *(_OWORD *)v15;
      v15 += 32;
      *((_OWORD *)v16 - 8) = v17;
      *((_OWORD *)v16 - 7) = *((_OWORD *)v15 - 7);
      *((_OWORD *)v16 - 6) = *((_OWORD *)v15 - 6);
      *((_OWORD *)v16 - 5) = *((_OWORD *)v15 - 5);
      *((_OWORD *)v16 - 4) = *((_OWORD *)v15 - 4);
      *((_OWORD *)v16 - 3) = *((_OWORD *)v15 - 3);
      *((_OWORD *)v16 - 2) = *((_OWORD *)v15 - 2);
      *((_OWORD *)v16 - 1) = *((_OWORD *)v15 - 1);
      --v14;
    }
    while ( v14 );
  }
  v18 = __ROL4__(v13, 1);
  if ( channels[2] )
  {
    this->ChannelMask |= v18;
    v19 = 8i64;
    v20 = channels[2];
    v21 = this->Channels + 512;
    do
    {
      v21 += 32;
      v22 = *(_OWORD *)v20;
      v20 += 32;
      *((_OWORD *)v21 - 8) = v22;
      *((_OWORD *)v21 - 7) = *((_OWORD *)v20 - 7);
      *((_OWORD *)v21 - 6) = *((_OWORD *)v20 - 6);
      *((_OWORD *)v21 - 5) = *((_OWORD *)v20 - 5);
      *((_OWORD *)v21 - 4) = *((_OWORD *)v20 - 4);
      *((_OWORD *)v21 - 3) = *((_OWORD *)v20 - 3);
      *((_OWORD *)v21 - 2) = *((_OWORD *)v20 - 2);
      *((_OWORD *)v21 - 1) = *((_OWORD *)v20 - 1);
      --v19;
    }
    while ( v19 );
  }
  if ( channels[3] )
  {
    v23 = this->Channels;
    this->ChannelMask |= __ROL4__(v18, 1);
    v24 = channels[3];
    v25 = v23 + 768;
    do
    {
      v25 += 32;
      v26 = *(_OWORD *)v24;
      v24 += 32;
      *((_OWORD *)v25 - 8) = v26;
      *((_OWORD *)v25 - 7) = *((_OWORD *)v24 - 7);
      *((_OWORD *)v25 - 6) = *((_OWORD *)v24 - 6);
      *((_OWORD *)v25 - 5) = *((_OWORD *)v24 - 5);
      *((_OWORD *)v25 - 4) = *((_OWORD *)v24 - 4);
      *((_OWORD *)v25 - 3) = *((_OWORD *)v24 - 3);
      *((_OWORD *)v25 - 2) = *((_OWORD *)v24 - 2);
      *((_OWORD *)v25 - 1) = *((_OWORD *)v24 - 1);
      --v8;
    }
    while ( v8 );
  }
}

void __fastcall Scaleform::Render::DICommand_PerlinNoise::DICommand_PerlinNoise(
        Scaleform::Render::DICommand_PerlinNoise *this,
        const Scaleform::Render::DICommand_PerlinNoise *other)
{
  Scaleform::Render::DrawableImage *pObject; // rcx
  unsigned int OffsetCount; // eax
  size_t v6; // r8

  this->__vftable = (Scaleform::Render::DICommand_PerlinNoise_vtbl *)&Scaleform::Render::DICommand::`vftable';
  pObject = other->pImage.pObject;
  if ( pObject )
    pObject->AddRef(pObject);
  this->pImage.pObject = other->pImage.pObject;
  this->__vftable = (Scaleform::Render::DICommand_PerlinNoise_vtbl *)&Scaleform::Render::DICommand_PerlinNoise::`vftable';
  this->FrequencyX = other->FrequencyX;
  this->FrequencyY = other->FrequencyY;
  this->NumOctaves = other->NumOctaves;
  this->RandomSeed = other->RandomSeed;
  this->Stitch = other->Stitch;
  this->FractalNoise = other->FractalNoise;
  this->ChannelMask = other->ChannelMask;
  this->GrayScale = other->GrayScale;
  this->OffsetCount = other->OffsetCount;
  OffsetCount = other->OffsetCount;
  if ( OffsetCount )
  {
    v6 = 4i64 * OffsetCount;
    if ( v6 > 0x80 )
      v6 = 128i64;
    memmove(this->Offsets, other->Offsets, v6);
  }
}

void __fastcall Scaleform::Render::DICommand_SourceRect::DICommand_SourceRect(
        Scaleform::Render::DICommand_SourceRect *this,
        const Scaleform::Render::DICommand_SourceRect *__that)
{
  Scaleform::Render::DrawableImage *pObject; // rcx
  Scaleform::Render::DrawableImage *v5; // rcx
  int y1; // ecx
  int y2; // er8
  int x2; // edx
  int y; // ecx

  this->__vftable = (Scaleform::Render::DICommand_SourceRect_vtbl *)&Scaleform::Render::DICommand::`vftable';
  pObject = __that->pImage.pObject;
  if ( pObject )
    pObject->AddRef(pObject);
  this->pImage.pObject = __that->pImage.pObject;
  this->__vftable = (Scaleform::Render::DICommand_SourceRect_vtbl *)&Scaleform::Render::DICommand_SourceRect::`vftable';
  v5 = __that->pSource.pObject;
  if ( v5 )
    v5->AddRef(v5);
  this->pSource.pObject = __that->pSource.pObject;
  y1 = __that->SourceRect.y1;
  y2 = __that->SourceRect.y2;
  x2 = __that->SourceRect.x2;
  this->SourceRect.x1 = __that->SourceRect.x1;
  this->SourceRect.y1 = y1;
  this->SourceRect.x2 = x2;
  this->SourceRect.y2 = y2;
  y = __that->DestPoint.y;
  this->DestPoint.x = __that->DestPoint.x;
  this->DestPoint.y = y;
}

void __fastcall Scaleform::Render::DICommand_SourceRect::DICommand_SourceRect(
        Scaleform::Render::DICommand_SourceRect *this,
        Scaleform::Render::DrawableImage *image,
        Scaleform::Render::DrawableImage *source,
        const Scaleform::Render::Rect<long> *sr,
        const Scaleform::Render::Point<long> *dp)
{
  int y1; // ecx
  int y2; // er8
  int x2; // edx
  int y; // ecx

  this->__vftable = (Scaleform::Render::DICommand_SourceRect_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( image )
    image->AddRef(image);
  this->pImage.pObject = image;
  this->__vftable = (Scaleform::Render::DICommand_SourceRect_vtbl *)&Scaleform::Render::DICommand_SourceRect::`vftable';
  if ( source )
    source->AddRef(source);
  this->pSource.pObject = source;
  y1 = sr->y1;
  y2 = sr->y2;
  x2 = sr->x2;
  this->SourceRect.x1 = sr->x1;
  this->SourceRect.y1 = y1;
  this->SourceRect.x2 = x2;
  this->SourceRect.y2 = y2;
  y = dp->y;
  this->DestPoint.x = dp->x;
  this->DestPoint.y = y;
}

void __fastcall Scaleform::Render::DrawableImage::DrawableImage(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::ImageFormat format,
        Scaleform::Render::Size<unsigned long> size,
        bool transparent,
        __int64 fillColor,
        Scaleform::Render::DrawableImageContext *dicontext)
{
  Scaleform::Render::DrawableImage_vtbl *v7; // rax
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  Scaleform::Render::DrawableImage *v12; // rax
  Scaleform::Render::DICommand v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+68h] [rbp+20h]

  this->__vftable = (Scaleform::Render::DrawableImage_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::DrawableImage_vtbl *)&Scaleform::Render::Image::`vftable';
  this->RefCount = 1;
  this->pTexture.Value = 0i64;
  this->pUpdateSync = 0i64;
  this->pInverseMatrix = 0i64;
  this->pPrev = (Scaleform::Render::DrawableImage *)-1i64;
  this->pNext = (Scaleform::Render::DrawableImage *)-1i64;
  this->GPUFence.pObject = 0i64;
  this->__vftable = (Scaleform::Render::DrawableImage_vtbl *)&Scaleform::Render::DrawableImage::`vftable';
  this->Transparent = transparent;
  this->DrawableImageState = 0;
  this->pQueue.pObject = 0i64;
  *(_QWORD *)&this->MappedData.Format = 0i64;
  *(_DWORD *)&this->MappedData.Flags = 0x10000;
  this->MappedData.pPlanes = &this->MappedData.Plane0;
  this->MappedData.pPalette.pObject = 0i64;
  *(_QWORD *)&this->MappedData.Plane0.Width = 0i64;
  this->MappedData.Plane0.Pitch = 0i64;
  this->MappedData.Plane0.DataSize = 0i64;
  this->MappedData.Plane0.pData = 0i64;
  this->pCPUModifiedNext.pObject = 0i64;
  this->pGPUModifiedNext.pObject = 0i64;
  this->pDelegateImage.pObject = 0i64;
  this->pContext.pObject = 0i64;
  this->pRT.pObject = 0i64;
  Scaleform::Render::DrawableImage::initialize(
    this,
    format,
    *(const Scaleform::Render::Size<unsigned long> **)&size,
    dicontext);
  if ( !this->Transparent )
    *(_BYTE *)(fillColor + 3) = -1;
  v7 = this->__vftable;
  v15 = *(_DWORD *)fillColor;
  v13.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  v7->AddRef(this);
  pObject = this->pContext.pObject;
  v13.pImage.pObject = this;
  v13.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_Clear::`vftable';
  v14 = v15;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v13, this) )
  {
    v10 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
            this->pQueue.pObject,
            0x18u,
            &this->pQueue.pObject->QueueLock);
    v11 = v10;
    if ( v10 )
    {
      *v10 = &Scaleform::Render::DICommand::`vftable';
      v12 = v13.pImage.pObject;
      if ( v13.pImage.pObject )
      {
        v13.pImage.pObject->AddRef(v13.pImage.pObject);
        v12 = v13.pImage.pObject;
      }
      v11[1] = v12;
      *v11 = &Scaleform::Render::DICommand_Clear::`vftable';
      *((_DWORD *)v11 + 4) = v14;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v13.GetRenderCaps)(&v13) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  v13.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v13.pImage.pObject )
    v13.pImage.pObject->Release(v13.pImage.pObject);
}

void __fastcall Scaleform::Render::DrawableImage::DrawableImage(
        Scaleform::Render::DrawableImage *this,
        bool transparent,
        Scaleform::Render::ImageBase *originalData,
        Scaleform::Render::DrawableImageContext *dicontext)
{
  const Scaleform::Render::Size<unsigned long> *v7; // rbx
  Scaleform::Render::ImageFormat v8; // eax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  this->__vftable = (Scaleform::Render::DrawableImage_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::DrawableImage_vtbl *)&Scaleform::Render::Image::`vftable';
  this->RefCount = 1;
  this->pTexture.Value = 0i64;
  this->pUpdateSync = 0i64;
  this->pInverseMatrix = 0i64;
  this->pPrev = (Scaleform::Render::DrawableImage *)-1i64;
  this->pNext = (Scaleform::Render::DrawableImage *)-1i64;
  this->GPUFence.pObject = 0i64;
  this->__vftable = (Scaleform::Render::DrawableImage_vtbl *)&Scaleform::Render::DrawableImage::`vftable';
  this->DrawableImageState = 0;
  this->Transparent = transparent;
  this->pQueue.pObject = 0i64;
  *(_QWORD *)&this->MappedData.Format = 0i64;
  *(_DWORD *)&this->MappedData.Flags = 0x10000;
  this->MappedData.pPlanes = &this->MappedData.Plane0;
  this->MappedData.pPalette.pObject = 0i64;
  *(_QWORD *)&this->MappedData.Plane0.Width = 0i64;
  this->MappedData.Plane0.Pitch = 0i64;
  this->MappedData.Plane0.DataSize = 0i64;
  this->MappedData.Plane0.pData = 0i64;
  this->pCPUModifiedNext.pObject = 0i64;
  this->pGPUModifiedNext.pObject = 0i64;
  if ( originalData )
    originalData->AddRef(originalData);
  this->pDelegateImage.pObject = originalData;
  if ( dicontext )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)dicontext);
  this->pContext.pObject = dicontext;
  this->pRT.pObject = 0i64;
  v7 = originalData->GetSize(originalData, &v9);
  v8 = originalData->GetFormat(originalData);
  Scaleform::Render::DrawableImage::initialize(this, v8, v7, dicontext);
}

void __fastcall Scaleform::Render::DrawableImageContext::DrawableImageContext(
        Scaleform::Render::DrawableImageContext *this,
        Scaleform::Render::ContextImpl::Context *controlContext,
        Scaleform::Render::ThreadCommandQueue *commandQueue,
        const Scaleform::Render::Interfaces *i)
{
  Scaleform::Render::DICommandQueue *v5; // rsi
  Scaleform::MemoryHeap *v7; // rax
  Scaleform::Render::ContextImpl::Context *v8; // rax
  Scaleform::Render::DICommandQueue *v9; // rax
  Scaleform::Render::DICommandQueue *v10; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::ContextImpl::Context *pControlContext; // rcx
  int v13; // [rsp+30h] [rbp+8h] BYREF

  this->__vftable = (Scaleform::Render::DrawableImageContext_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  v5 = 0i64;
  this->RefCount = 1;
  this->pPrev = (Scaleform::Render::ContextImpl::ContextCaptureNotify *)-1i64;
  this->pNext = (Scaleform::Render::ContextImpl::ContextCaptureNotify *)-1i64;
  this->pControlContext = controlContext;
  this->__vftable = (Scaleform::Render::DrawableImageContext_vtbl *)&Scaleform::Render::DrawableImageContext::`vftable';
  this->RContext = 0i64;
  this->pRTCommandQueue = commandQueue;
  Scaleform::Lock::Lock(&this->TreeRootKillListLock, 0);
  this->TreeRootKillList.Data.Data = 0i64;
  this->TreeRootKillList.Data.Size = 0i64;
  this->TreeRootKillList.Data.Policy.Capacity = 0i64;
  this->Queue.pObject = 0i64;
  this->DisallowTextureMapping = 0;
  this->IDefaults = *i;
  if ( this == (Scaleform::Render::DrawableImageContext *)-40i64 )
  {
    v8 = 0i64;
  }
  else
  {
    v7 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
    Scaleform::Render::ContextImpl::Context::Context(
      (Scaleform::Render::ContextImpl::Context *)this->RContextBacking,
      v7);
  }
  this->RContext = v8;
  v13 = 2;
  v9 = (Scaleform::Render::DICommandQueue *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                              Scaleform::Memory::pGlobalHeap,
                                              this,
                                              248i64,
                                              &v13);
  if ( v9 )
  {
    Scaleform::Render::DICommandQueue::DICommandQueue(v9, this);
    v5 = v10;
  }
  pObject = (Scaleform::RefCountVImpl *)this->Queue.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->Queue.pObject = v5;
  pControlContext = this->pControlContext;
  if ( pControlContext )
    Scaleform::Render::ContextImpl::Context::AddCaptureNotify(pControlContext, this);
}

void __fastcall Scaleform::Render::DICommand_PaletteMap::~DICommand_PaletteMap(
        Scaleform::Render::DICommand_PaletteMap *this)
{
  unsigned int *Channels; // rdx
  Scaleform::Render::DrawableImage *pObject; // rcx
  Scaleform::Render::DrawableImage *v4; // rcx

  Channels = this->Channels;
  this->__vftable = (Scaleform::Render::DICommand_PaletteMap_vtbl *)&Scaleform::Render::DICommand_PaletteMap::`vftable';
  if ( Channels )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  this->Channels = 0i64;
  pObject = this->pSource.pObject;
  if ( pObject )
    pObject->Release(pObject);
  this->__vftable = (Scaleform::Render::DICommand_PaletteMap_vtbl *)&Scaleform::Render::DICommand::`vftable';
  v4 = this->pImage.pObject;
  if ( v4 )
    v4->Release(v4);
}

void __fastcall Scaleform::Render::DrawableImage::~DrawableImage(Scaleform::Render::DrawableImage *this)
{
  Scaleform::Render::DrawableImageContext *pObject; // rbx
  Scaleform::Render::TextureManager *pTextureManager; // rax
  Scaleform::Render::HAL *pHAL; // rax
  int RenderThreadID; // eax
  Scaleform::Render::DICommandQueue *v6; // rbx
  Scaleform::Render::RenderTarget *v7; // rcx
  Scaleform::RefCountVImpl *v8; // rcx
  Scaleform::Render::ImageBase *v9; // rcx
  Scaleform::Render::DrawableImage *v10; // rcx
  Scaleform::Render::DrawableImage *v11; // rcx
  Scaleform::Render::Palette *v12; // rbx
  Scaleform::RefCountVImpl *v13; // rcx
  Scaleform::Render::Fence *v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+30h] [rbp-18h]

  pObject = this->pContext.pObject;
  this->__vftable = (Scaleform::Render::DrawableImage_vtbl *)&Scaleform::Render::DrawableImage::`vftable';
  v16 = 0;
  v15 = 0i64;
  pObject->pRTCommandQueue->GetRenderInterfaces(pObject->pRTCommandQueue, (Scaleform::Render::Interfaces *)&v15);
  pTextureManager = (Scaleform::Render::TextureManager *)v15;
  if ( pObject->IDefaults.pTextureManager )
    pTextureManager = pObject->IDefaults.pTextureManager;
  *(_QWORD *)&v15 = pTextureManager;
  pHAL = (Scaleform::Render::HAL *)*((_QWORD *)&v15 + 1);
  if ( pObject->IDefaults.pHAL )
    pHAL = pObject->IDefaults.pHAL;
  *((_QWORD *)&v15 + 1) = pHAL;
  RenderThreadID = v16;
  if ( pObject->IDefaults.RenderThreadID )
    RenderThreadID = pObject->IDefaults.RenderThreadID;
  v16 = RenderThreadID;
  if ( (this->DrawableImageState & 3) != 0 )
  {
    v6 = this->pQueue.pObject;
    Scaleform::Lock::DoLock(&v6->QueueLock);
    if ( (this->DrawableImageState & 3) != 0 && this->pTexture.Value )
    {
      this->pTexture.Value->Unmap(this->pTexture.Value);
      this->DrawableImageState &= 0xFFFFFFFC;
    }
    Scaleform::Lock::Unlock(&v6->QueueLock);
  }
  v7 = this->pRT.pObject;
  if ( v7 )
    v7->Release(v7);
  v8 = (Scaleform::RefCountVImpl *)this->pContext.pObject;
  if ( v8 )
    Scaleform::RefCountImpl::Release(v8);
  v9 = this->pDelegateImage.pObject;
  if ( v9 )
    v9->Release(v9);
  v10 = this->pGPUModifiedNext.pObject;
  if ( v10 )
    v10->Release(v10);
  v11 = this->pCPUModifiedNext.pObject;
  if ( v11 )
    v11->Release(v11);
  Scaleform::Render::ImageData::freePlanes(&this->MappedData);
  v12 = this->MappedData.pPalette.pObject;
  if ( v12
    && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                       &this->MappedData.pPalette.pObject->RefCount.Value,
                       -1) == 1 )
  {
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v12);
  }
  v13 = (Scaleform::RefCountVImpl *)this->pQueue.pObject;
  if ( v13 )
    Scaleform::RefCountImpl::Release(v13);
  v14 = this->GPUFence.pObject;
  if ( v14 )
    Scaleform::Render::Fence::Release(v14);
  Scaleform::Render::Image::~Image(this);
}

void __fastcall Scaleform::Render::DrawableImageContext::~DrawableImageContext(
        Scaleform::Render::DrawableImageContext *this)
{
  bool v1; // zf
  Scaleform::RefCountVImpl *pObject; // rcx

  v1 = this->RContext == 0i64;
  this->__vftable = (Scaleform::Render::DrawableImageContext_vtbl *)&Scaleform::Render::DrawableImageContext::`vftable';
  if ( !v1 )
  {
    Scaleform::Render::DrawableImageContext::processTreeRootKillList(this);
    Scaleform::Render::ContextImpl::Context::~Context(this->RContext);
    this->RContext = 0i64;
  }
  pObject = (Scaleform::RefCountVImpl *)this->Queue.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->TreeRootKillList.Data.Data);
  Scaleform::Lock::~Lock(&this->TreeRootKillListLock);
  Scaleform::Render::ContextImpl::ContextCaptureNotify::~ContextCaptureNotify(this);
}

void __fastcall Scaleform::Render::DrawableImageContext::AddTreeRootToKillList(
        Scaleform::Render::DrawableImageContext *this,
        Scaleform::Render::TreeRoot *proot)
{
  Scaleform::Lock *p_TreeRootKillListLock; // rbx
  Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *p_TreeRootKillList; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  Scaleform::Render::TreeRoot **v9; // rcx

  p_TreeRootKillListLock = &this->TreeRootKillListLock;
  Scaleform::Lock::DoLock(&this->TreeRootKillListLock);
  p_TreeRootKillList = (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)&this->TreeRootKillList;
  v6 = p_TreeRootKillList->Size + 1;
  if ( v6 >= p_TreeRootKillList->Size )
  {
    if ( v6 <= p_TreeRootKillList->Policy.Capacity )
      goto LABEL_7;
    v7 = v6 + (v6 >> 2);
  }
  else
  {
    if ( v6 >= p_TreeRootKillList->Policy.Capacity >> 1 )
      goto LABEL_7;
    v7 = p_TreeRootKillList->Size + 1;
  }
  Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    p_TreeRootKillList,
    p_TreeRootKillList,
    v7);
LABEL_7:
  v8 = (__int64)(p_TreeRootKillList->Data - 1);
  p_TreeRootKillList->Size = v6;
  v9 = (Scaleform::Render::TreeRoot **)(v8 + 8 * v6);
  if ( v9 )
    *v9 = proot;
  Scaleform::Lock::Unlock(p_TreeRootKillListLock);
}

void __fastcall Scaleform::Render::DrawableImage::ApplyFilter(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::DrawableImage *source,
        const Scaleform::Render::Rect<long> *sourceRect,
        const Scaleform::Render::Point<long> *destPoint,
        Scaleform::Render::Filter *filter)
{
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  Scaleform::Render::DrawableImage *v13; // rax
  Scaleform::Render::DrawableImage *v14; // rcx
  int v15; // ecx
  int v16; // er8
  int v17; // edx
  int v18; // ecx
  Scaleform::RefCountVImpl *v19; // rax
  Scaleform::Render::DICommand v20; // [rsp+20h] [rbp-40h] BYREF
  Scaleform::Render::DrawableImage *v21; // [rsp+30h] [rbp-30h]
  int x1; // [rsp+38h] [rbp-28h]
  int y1; // [rsp+3Ch] [rbp-24h]
  int x2; // [rsp+40h] [rbp-20h]
  int y2; // [rsp+44h] [rbp-1Ch]
  int x; // [rsp+48h] [rbp-18h]
  int y; // [rsp+4Ch] [rbp-14h]
  Scaleform::RefCountVImpl *v28; // [rsp+50h] [rbp-10h]

  v20.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( this )
    this->AddRef(this);
  v20.pImage.pObject = this;
  v20.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_SourceRect::`vftable';
  if ( source )
    source->AddRef(source);
  x1 = sourceRect->x1;
  y1 = sourceRect->y1;
  x2 = sourceRect->x2;
  y2 = sourceRect->y2;
  x = destPoint->x;
  y = destPoint->y;
  v21 = source;
  v20.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_ApplyFilter::`vftable';
  if ( filter )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)filter);
  pObject = this->pContext.pObject;
  v28 = (Scaleform::RefCountVImpl *)filter;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v20, this) )
  {
    v11 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
            this->pQueue.pObject,
            0x38u,
            &this->pQueue.pObject->QueueLock);
    v12 = v11;
    if ( v11 )
    {
      *v11 = &Scaleform::Render::DICommand::`vftable';
      v13 = v20.pImage.pObject;
      if ( v20.pImage.pObject )
      {
        v20.pImage.pObject->AddRef(v20.pImage.pObject);
        v13 = v20.pImage.pObject;
      }
      v12[1] = v13;
      *v12 = &Scaleform::Render::DICommand_SourceRect::`vftable';
      v14 = v21;
      if ( v21 )
      {
        v21->AddRef(v21);
        v14 = v21;
      }
      v12[2] = v14;
      v15 = y1;
      v16 = y2;
      v17 = x2;
      *((_DWORD *)v12 + 6) = x1;
      *((_DWORD *)v12 + 7) = v15;
      *((_DWORD *)v12 + 8) = v17;
      *((_DWORD *)v12 + 9) = v16;
      v18 = y;
      *((_DWORD *)v12 + 10) = x;
      *((_DWORD *)v12 + 11) = v18;
      *v12 = &Scaleform::Render::DICommand_ApplyFilter::`vftable';
      v19 = v28;
      if ( v28 )
      {
        Scaleform::Render::RenderBuffer::AddRef(v28);
        v19 = v28;
      }
      v12[6] = v19;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v20.GetRenderCaps)(&v20) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  if ( v28 )
    Scaleform::RefCountImpl::Release(v28);
  if ( v21 )
    v21->Release(v21);
  v20.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v20.pImage.pObject )
    v20.pImage.pObject->Release(v20.pImage.pObject);
}

void __fastcall Scaleform::Render::DrawableImage::CalcFilterRect(
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Rect<long> *sourceRect,
        Scaleform::Render::Filter *filter)
{
  __m128i v4; // xmm2
  float y1; // xmm1_4
  Scaleform::Render::Rect<float> bounds; // [rsp+20h] [rbp-28h] BYREF

  v4 = _mm_cvtsi32_si128(sourceRect->x2);
  y1 = (float)sourceRect->y1;
  bounds.x1 = (float)sourceRect->x1;
  bounds.y2 = (float)sourceRect->y2;
  bounds.y1 = y1;
  LODWORD(bounds.x2) = _mm_cvtepi32_ps(v4).m128_u32[0];
  Scaleform::Render::TreeNode::NodeData::expandByFilterBounds(filter, &bounds);
  if ( result )
    *result = bounds;
}

void __fastcall Scaleform::Render::DrawableImage::ColorTransform(
        Scaleform::Render::DrawableImage *this,
        const Scaleform::Render::Rect<long> *rect,
        const Scaleform::Render::Cxform *cxform)
{
  const Scaleform::Render::DICommand_ColorTransform *v4; // rax
  Scaleform::Render::DICommand_ColorTransform v5; // [rsp+20h] [rbp-68h] BYREF

  Scaleform::Render::DICommand_ColorTransform::DICommand_ColorTransform(&v5, this, rect, cxform);
  Scaleform::Render::DrawableImage::addCommand<Scaleform::Render::DICommand_ColorTransform>(this, v4);
  if ( v5.pSource.pObject )
    v5.pSource.pObject->Release(v5.pSource.pObject);
  v5.__vftable = (Scaleform::Render::DICommand_ColorTransform_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v5.pImage.pObject )
    v5.pImage.pObject->Release(v5.pImage.pObject);
}

void __fastcall Scaleform::Render::DrawableImage::Compare(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::DrawableImage *image0,
        Scaleform::Render::DrawableImage *image1)
{
  Scaleform::Render::Size<unsigned long> *v6; // rax
  int Width; // er14
  int Height; // er15
  Scaleform::Render::DrawableImage_vtbl *v9; // rax
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  Scaleform::Render::DrawableImage *v14; // rax
  Scaleform::Render::DrawableImage *v15; // rcx
  int v16; // ecx
  int v17; // er8
  int v18; // edx
  int v19; // ecx
  Scaleform::Render::DrawableImage *v20; // rcx
  char v21[8]; // [rsp+20h] [rbp-50h] BYREF
  Scaleform::Render::DICommand v22; // [rsp+28h] [rbp-48h] BYREF
  Scaleform::Render::DrawableImage *v23; // [rsp+38h] [rbp-38h]
  __int64 v24; // [rsp+40h] [rbp-30h]
  int v25; // [rsp+48h] [rbp-28h]
  int v26; // [rsp+4Ch] [rbp-24h]
  __int64 v27; // [rsp+50h] [rbp-20h]
  Scaleform::Render::DrawableImage *v28; // [rsp+58h] [rbp-18h]

  v6 = this->GetSize(this, v21);
  Width = v6->Width;
  Height = v6->Height;
  v9 = this->__vftable;
  v22.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  v9->AddRef(this);
  v22.pImage.pObject = this;
  v22.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_SourceRect::`vftable';
  if ( image0 )
    image0->AddRef(image0);
  v23 = image0;
  v24 = 0i64;
  v22.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_Compare::`vftable';
  v25 = Width;
  v26 = Height;
  v27 = 0i64;
  if ( image1 )
    image1->AddRef(image1);
  pObject = this->pContext.pObject;
  v28 = image1;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v22, this) )
  {
    v12 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
            this->pQueue.pObject,
            0x38u,
            &this->pQueue.pObject->QueueLock);
    v13 = v12;
    if ( v12 )
    {
      *v12 = &Scaleform::Render::DICommand::`vftable';
      v14 = v22.pImage.pObject;
      if ( v22.pImage.pObject )
      {
        v22.pImage.pObject->AddRef(v22.pImage.pObject);
        v14 = v22.pImage.pObject;
      }
      v13[1] = v14;
      *v13 = &Scaleform::Render::DICommand_SourceRect::`vftable';
      v15 = v23;
      if ( v23 )
      {
        v23->AddRef(v23);
        v15 = v23;
      }
      v13[2] = v15;
      v16 = HIDWORD(v24);
      v17 = v26;
      v18 = v25;
      *((_DWORD *)v13 + 6) = v24;
      *((_DWORD *)v13 + 7) = v16;
      *((_DWORD *)v13 + 8) = v18;
      *((_DWORD *)v13 + 9) = v17;
      v19 = HIDWORD(v27);
      *((_DWORD *)v13 + 10) = v27;
      *((_DWORD *)v13 + 11) = v19;
      *v13 = &Scaleform::Render::DICommand_Compare::`vftable';
      v20 = v28;
      if ( v28 )
      {
        v28->AddRef(v28);
        v20 = v28;
      }
      v13[6] = v20;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v22.GetRenderCaps)(&v22) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  if ( v28 )
    v28->Release(v28);
  if ( v23 )
    v23->Release(v23);
  v22.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v22.pImage.pObject )
    v22.pImage.pObject->Release(v22.pImage.pObject);
}

void __fastcall Scaleform::Render::DrawableImage::CopyChannel(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::DrawableImage *source,
        const Scaleform::Render::Rect<long> *sourceRect,
        const Scaleform::Render::Point<long> *destPoint,
        Scaleform::Render::DrawableImage::ChannelBits sourceChannel,
        Scaleform::Render::DrawableImage::ChannelBits destChannel)
{
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  Scaleform::Render::DrawableImage *v14; // rax
  Scaleform::Render::DrawableImage *v15; // rcx
  int v16; // ecx
  int v17; // er8
  int v18; // edx
  int v19; // ecx
  Scaleform::Render::DICommand v20; // [rsp+20h] [rbp-40h] BYREF
  Scaleform::Render::DrawableImage *v21; // [rsp+30h] [rbp-30h]
  int x1; // [rsp+38h] [rbp-28h]
  int y1; // [rsp+3Ch] [rbp-24h]
  int x2; // [rsp+40h] [rbp-20h]
  int y2; // [rsp+44h] [rbp-1Ch]
  int x; // [rsp+48h] [rbp-18h]
  int y; // [rsp+4Ch] [rbp-14h]
  Scaleform::Render::DrawableImage::ChannelBits v28; // [rsp+50h] [rbp-10h]
  Scaleform::Render::DrawableImage::ChannelBits v29; // [rsp+54h] [rbp-Ch]

  v20.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( this )
    this->AddRef(this);
  v20.pImage.pObject = this;
  v20.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_SourceRect::`vftable';
  if ( source )
    source->AddRef(source);
  x1 = sourceRect->x1;
  y1 = sourceRect->y1;
  x2 = sourceRect->x2;
  y2 = sourceRect->y2;
  x = destPoint->x;
  y = destPoint->y;
  v28 = sourceChannel;
  v29 = destChannel;
  pObject = this->pContext.pObject;
  v21 = source;
  v20.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_CopyChannel::`vftable';
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v20, this) )
  {
    v12 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
            this->pQueue.pObject,
            0x38u,
            &this->pQueue.pObject->QueueLock);
    v13 = v12;
    if ( v12 )
    {
      *v12 = &Scaleform::Render::DICommand::`vftable';
      v14 = v20.pImage.pObject;
      if ( v20.pImage.pObject )
      {
        v20.pImage.pObject->AddRef(v20.pImage.pObject);
        v14 = v20.pImage.pObject;
      }
      v13[1] = v14;
      *v13 = &Scaleform::Render::DICommand_SourceRect::`vftable';
      v15 = v21;
      if ( v21 )
      {
        v21->AddRef(v21);
        v15 = v21;
      }
      v13[2] = v15;
      v16 = y1;
      v17 = y2;
      v18 = x2;
      *((_DWORD *)v13 + 6) = x1;
      *((_DWORD *)v13 + 7) = v16;
      *((_DWORD *)v13 + 8) = v18;
      *((_DWORD *)v13 + 9) = v17;
      v19 = y;
      *((_DWORD *)v13 + 10) = x;
      *((_DWORD *)v13 + 11) = v19;
      *v13 = &Scaleform::Render::DICommand_CopyChannel::`vftable';
      *((_DWORD *)v13 + 12) = v28;
      *((_DWORD *)v13 + 13) = v29;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v20.GetRenderCaps)(&v20) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  if ( v21 )
    v21->Release(v21);
  v20.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v20.pImage.pObject )
    v20.pImage.pObject->Release(v20.pImage.pObject);
}

void __fastcall Scaleform::Render::DrawableImage::CopyPixels(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::DrawableImage *source,
        const Scaleform::Render::Rect<long> *sourceRect,
        const Scaleform::Render::Point<long> *destPoint,
        Scaleform::Render::DrawableImage *alphaSource,
        const Scaleform::Render::Point<long> *alphaPoint,
        bool mergeAlpha)
{
  int x; // eax
  Scaleform::Render::Point<long> *v12; // rcx
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  Scaleform::Render::DrawableImage *v17; // rax
  Scaleform::Render::DrawableImage *v18; // rcx
  int v19; // ecx
  int v20; // er8
  int v21; // edx
  int v22; // ecx
  Scaleform::Render::DrawableImage *v23; // rcx
  int v24; // ecx
  Scaleform::Render::Point<long> v25; // [rsp+20h] [rbp-61h] BYREF
  __int64 v26; // [rsp+28h] [rbp-59h] BYREF
  Scaleform::Render::DICommand v27; // [rsp+30h] [rbp-51h] BYREF
  Scaleform::Render::DrawableImage *v28; // [rsp+40h] [rbp-41h]
  int x1; // [rsp+48h] [rbp-39h]
  int y1; // [rsp+4Ch] [rbp-35h]
  int x2; // [rsp+50h] [rbp-31h]
  int y2; // [rsp+54h] [rbp-2Dh]
  int v33; // [rsp+58h] [rbp-29h]
  int y; // [rsp+5Ch] [rbp-25h]
  Scaleform::Render::DrawableImage *v35; // [rsp+60h] [rbp-21h]
  int v36; // [rsp+68h] [rbp-19h]
  int v37; // [rsp+6Ch] [rbp-15h]
  bool v38; // [rsp+70h] [rbp-11h]

  v27.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( this )
    this->AddRef(this);
  v27.pImage.pObject = this;
  v27.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_SourceRect::`vftable';
  if ( source )
    source->AddRef(source);
  x1 = sourceRect->x1;
  y1 = sourceRect->y1;
  x2 = sourceRect->x2;
  y2 = sourceRect->y2;
  x = destPoint->x;
  v28 = source;
  v33 = x;
  y = destPoint->y;
  v27.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_CopyPixels::`vftable';
  if ( alphaSource )
    alphaSource->AddRef(alphaSource);
  v35 = alphaSource;
  if ( alphaPoint )
  {
    v25 = *alphaPoint;
    v12 = &v25;
  }
  else
  {
    v12 = (Scaleform::Render::Point<long> *)&v26;
    v26 = 0i64;
  }
  v36 = v12->x;
  v37 = v12->y;
  v38 = mergeAlpha;
  pObject = this->pContext.pObject;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v27, this) )
  {
    v15 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
            this->pQueue.pObject,
            0x48u,
            &this->pQueue.pObject->QueueLock);
    v16 = v15;
    if ( v15 )
    {
      *v15 = &Scaleform::Render::DICommand::`vftable';
      v17 = v27.pImage.pObject;
      if ( v27.pImage.pObject )
      {
        v27.pImage.pObject->AddRef(v27.pImage.pObject);
        v17 = v27.pImage.pObject;
      }
      v16[1] = v17;
      *v16 = &Scaleform::Render::DICommand_SourceRect::`vftable';
      v18 = v28;
      if ( v28 )
      {
        v28->AddRef(v28);
        v18 = v28;
      }
      v16[2] = v18;
      v19 = y1;
      v20 = y2;
      v21 = x2;
      *((_DWORD *)v16 + 6) = x1;
      *((_DWORD *)v16 + 7) = v19;
      *((_DWORD *)v16 + 8) = v21;
      *((_DWORD *)v16 + 9) = v20;
      v22 = y;
      *((_DWORD *)v16 + 10) = v33;
      *((_DWORD *)v16 + 11) = v22;
      *v16 = &Scaleform::Render::DICommand_CopyPixels::`vftable';
      v23 = v35;
      if ( v35 )
      {
        v35->AddRef(v35);
        v23 = v35;
      }
      v16[6] = v23;
      v24 = v37;
      *((_DWORD *)v16 + 14) = v36;
      *((_DWORD *)v16 + 15) = v24;
      *((_BYTE *)v16 + 64) = v38;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v27.GetRenderCaps)(&v27) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  if ( v35 )
    v35->Release(v35);
  if ( v28 )
    v28->Release(v28);
  v27.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v27.pImage.pObject )
    v27.pImage.pObject->Release(v27.pImage.pObject);
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

void __fastcall Scaleform::Render::DrawableImage::Dispose(Scaleform::Render::DrawableImage *this)
{
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  Scaleform::Render::DrawableImage *v6; // rcx
  Scaleform::Render::DICommand v7; // [rsp+20h] [rbp-18h] BYREF

  v7.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( this )
    this->AddRef(this);
  pObject = this->pContext.pObject;
  v7.pImage.pObject = this;
  v7.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_Dispose::`vftable';
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v7, this) )
  {
    v4 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
           this->pQueue.pObject,
           0x10u,
           &this->pQueue.pObject->QueueLock);
    v5 = v4;
    if ( v4 )
    {
      *v4 = &Scaleform::Render::DICommand::`vftable';
      v6 = v7.pImage.pObject;
      if ( v7.pImage.pObject )
      {
        v7.pImage.pObject->AddRef(v7.pImage.pObject);
        v6 = v7.pImage.pObject;
      }
      v5[1] = v6;
      *v5 = &Scaleform::Render::DICommand_Dispose::`vftable';
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v7.GetRenderCaps)(&v7) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  v7.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v7.pImage.pObject )
    v7.pImage.pObject->Release(v7.pImage.pObject);
}

void __fastcall Scaleform::Render::DrawableImage::Draw(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::Image *source,
        const Scaleform::Render::Matrix2x4<float> *matrix,
        const Scaleform::Render::Cxform *cform,
        Scaleform::Render::BlendMode blendMode,
        const Scaleform::Render::Rect<long> *clipRect)
{
  Scaleform::Render::DrawableImageContext *pObject; // rbx
  Scaleform::Render::ContextImpl::Context *RContext; // rbx
  Scaleform::Render::TreeRoot::NodeData *v10; // rax
  Scaleform::Render::ContextImpl::EntryData *v11; // rdi
  Scaleform::Render::TreeRoot *EntryHelper; // rbx
  Scaleform::Render::TreeShape *v13; // rdi
  char *v14; // rax
  Scaleform::RefCountVImpl *v15; // r13
  Scaleform::RefCountVImpl_vtbl *v16; // rcx
  Scaleform::Render::ShapeDataFloatMP *v17; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy> *v20; // rsi
  __int64 v21; // rsi
  Scaleform::Render::Size<unsigned long> *v22; // rsi
  Scaleform::Render::Size<unsigned long> *v23; // rax
  Scaleform::Render::Rect<long> *v24; // rax
  Scaleform::Render::Size<unsigned long> *v25; // rax
  int Width; // ecx
  int y1; // er12
  int x2; // esi
  int y2; // er15
  Scaleform::Render::DrawableImage_vtbl *v30; // rax
  int *v31; // rax
  int v32; // ecx
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  const Scaleform::Render::Cxform *v34; // rcx
  Scaleform::Render::ContextImpl::Context *pControlContext; // rcx
  const Scaleform::Render::DICommand_Draw *v36; // rax
  bool v37; // zf
  __int64 v39; // [rsp+40h] [rbp-C0h]
  Scaleform::Render::Viewport vp; // [rsp+48h] [rbp-B8h] BYREF
  Scaleform::Render::Matrix2x4<float> *m; // [rsp+78h] [rbp-88h]
  const Scaleform::Render::Cxform *v42; // [rsp+80h] [rbp-80h]
  int x1; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+8Ch] [rbp-74h]
  int v45; // [rsp+90h] [rbp-70h]
  int v46; // [rsp+94h] [rbp-6Ch]
  int v47; // [rsp+A0h] [rbp-60h]
  Scaleform::RefCountVImpl *v48; // [rsp+A8h] [rbp-58h]
  int v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B4h] [rbp-4Ch]
  char v51[8]; // [rsp+C0h] [rbp-40h] BYREF
  char v52[8]; // [rsp+C8h] [rbp-38h] BYREF
  char v53[8]; // [rsp+D0h] [rbp-30h] BYREF
  Scaleform::Render::Size<unsigned long> v54; // [rsp+D8h] [rbp-28h] BYREF
  Scaleform::Render::Rect<long> v55; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v56; // [rsp+F0h] [rbp-10h] BYREF
  int v57; // [rsp+F8h] [rbp-8h]
  unsigned int Height; // [rsp+FCh] [rbp-4h]
  Scaleform::Render::DICommand_Draw v59; // [rsp+100h] [rbp+0h] BYREF

  pObject = this->pContext.pObject;
  v42 = cform;
  m = (Scaleform::Render::Matrix2x4<float> *)matrix;
  if ( pObject )
  {
    RContext = pObject->RContext;
    if ( RContext )
    {
      v10 = (Scaleform::Render::TreeRoot::NodeData *)RContext->pHeap->Alloc(RContext->pHeap, 208ui64, 0i64);
      v11 = v10;
      if ( v10 )
        Scaleform::Render::TreeRoot::NodeData::NodeData(v10);
      EntryHelper = (Scaleform::Render::TreeRoot *)Scaleform::Render::ContextImpl::Context::createEntryHelper(
                                                     RContext,
                                                     v11);
      if ( EntryHelper )
      {
        v13 = (Scaleform::Render::TreeShape *)Scaleform::Render::ContextImpl::Context::CreateEntry<Scaleform::Render::TreeShape>(this->pContext.pObject->RContext);
        Scaleform::Render::TreeContainer::Add(EntryHelper, v13);
        v48 = 0i64;
        v47 = 0;
        v14 = (char *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 80i64, 0i64);
        v15 = (Scaleform::RefCountVImpl *)v14;
        if ( v14 )
        {
          *(_QWORD *)v14 = &Scaleform::RefCountImplCore::`vftable';
          *(_QWORD *)v14 = &Scaleform::Render::ComplexFill::`vftable';
          *((_DWORD *)v14 + 2) = 1;
          *((_QWORD *)v14 + 2) = 0i64;
          *((_QWORD *)v14 + 3) = 0i64;
          *((_QWORD *)v14 + 4) = 1065353216i64;
          *((_QWORD *)v14 + 5) = 0i64;
          *((_DWORD *)v14 + 12) = 0;
          *(_QWORD *)(v14 + 52) = 1065353216i64;
          *((_DWORD *)v14 + 15) = 0;
          v14[64] = 0;
          *((_DWORD *)v14 + 17) = -1;
        }
        else
        {
          v15 = 0i64;
        }
        v48 = v15;
        if ( source )
          source->AddRef(source);
        v16 = v15[1].__vftable;
        if ( v16 )
          (*((void (__fastcall **)(Scaleform::RefCountVImpl_vtbl *))v16->~RefCountImplCore + 2))(v16);
        v15[1].__vftable = (Scaleform::RefCountVImpl_vtbl *)source;
        v17 = (Scaleform::Render::ShapeDataFloatMP *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                       Scaleform::Memory::pGlobalHeap,
                                                       144i64,
                                                       0i64);
        if ( v17 )
        {
          Scaleform::Render::ShapeDataFloatMP::ShapeDataFloatMP(v17);
          v19 = v18;
        }
        else
        {
          v19 = 0i64;
        }
        v20 = *(Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy> **)(v19 + 136);
        v39 = v19;
        Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
          v20 + 1,
          &v20[1],
          v20[1].Size + 1);
        v21 = (__int64)&v20[1].Data[v20[1].Size - 1];
        if ( v21 )
        {
          *(_DWORD *)v21 = 0;
          if ( v15 )
            Scaleform::Render::RenderBuffer::AddRef(v15);
          *(_QWORD *)(v21 + 8) = v15;
        }
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartLayer(*(Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > **)(v19 + 136));
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
          *(Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > **)(v19 + 136),
          1u,
          0,
          0);
        v22 = source->GetSize(source, v51);
        v23 = source->GetSize(source, v52);
        Scaleform::Render::ShapeDataFloatMP::RectanglePath(
          (Scaleform::Render::ShapeDataFloatMP *)v19,
          0.0,
          0.0,
          (float)(int)v22->Width,
          (float)(int)v23->Height);
        Scaleform::Render::ShapeDataFloatMP::CountLayers((Scaleform::Render::ShapeDataFloatMP *)v19);
        Scaleform::Render::TreeShape::SetShape(v13, (Scaleform::Render::ShapeMeshProvider *)v19);
        if ( clipRect )
        {
          v55 = *clipRect;
          v24 = &v55;
        }
        else
        {
          v25 = this->GetSize(this, v53);
          v56 = 0i64;
          Width = v25->Width;
          Height = v25->Height;
          v24 = (Scaleform::Render::Rect<long> *)&v56;
          v57 = Width;
        }
        y1 = v24->y1;
        x2 = v24->x2;
        y2 = v24->y2;
        x1 = v24->x1;
        v44 = y1;
        v45 = x2;
        v30 = this->__vftable;
        v46 = y2;
        v31 = (int *)v30->GetSize(this, &v54);
        v32 = v31[1];
        v49 = *v31;
        v50 = v32;
        vp.BufferWidth = v49;
        vp.BufferHeight = v32;
        *(_QWORD *)&vp.ScissorWidth = 0i64;
        vp.ScissorTop = 0;
        vp.Left = x1;
        vp.Top = y1;
        vp.Width = x2 - x1;
        *(_QWORD *)&vp.Height = (unsigned int)(y2 - y1);
        vp.Flags = 1;
        Scaleform::Render::TreeRoot::SetViewport(EntryHelper, &vp);
        Scaleform::Render::TreeNode::SetMatrix(EntryHelper, m);
        Scaleform::Render::TreeNode::SetMatrix(
          v13,
          (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152]);
        WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(v13, 2u);
        v34 = v42;
        WritableData[5] = *(Scaleform::Render::ContextImpl::EntryData *)&v42->M[0][0];
        WritableData[6] = *(Scaleform::Render::ContextImpl::EntryData *)&v34->M[1][0];
        Scaleform::Render::TreeNode::SetBlendMode(v13, blendMode);
        ++EntryHelper->RefCount;
        pControlContext = this->pContext.pObject->pControlContext;
        if ( pControlContext )
          pControlContext->DIChangesRequired = 1;
        this->pContext.pObject->OnCapture(this->pContext.pObject);
        Scaleform::Render::DICommand_Draw::DICommand_Draw(&v59, this, EntryHelper, clipRect);
        Scaleform::Render::DrawableImage::addCommand<Scaleform::Render::DICommand_Draw>(this, v36);
        v59.__vftable = (Scaleform::Render::DICommand_Draw_vtbl *)&Scaleform::Render::DICommand::`vftable';
        if ( v59.pImage.pObject )
          v59.pImage.pObject->Release(v59.pImage.pObject);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v39 + 16) + 16i64))(v39 + 16);
        if ( v15 )
          Scaleform::RefCountImpl::Release(v15);
        if ( v13 )
        {
          v37 = v13->RefCount-- == 1;
          if ( v37 )
            Scaleform::Render::ContextImpl::Entry::destroyHelper(v13);
        }
        v37 = EntryHelper->RefCount-- == 1;
        if ( v37 )
          Scaleform::Render::ContextImpl::Entry::destroyHelper(EntryHelper);
      }
    }
  }
}

void __fastcall Scaleform::Render::DrawableImage::Draw(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::TreeNode *subtree,
        const Scaleform::Render::Matrix2x4<float> *matrix,
        const Scaleform::Render::Cxform *cform,
        Scaleform::Render::BlendMode blendMode,
        const Scaleform::Render::Rect<long> *clipRect)
{
  Scaleform::Render::DrawableImageContext *pObject; // rbx
  Scaleform::Render::ContextImpl::Context *RContext; // rbx
  Scaleform::Render::TreeRoot::NodeData *v10; // rax
  Scaleform::Render::ContextImpl::EntryData *v11; // rdi
  Scaleform::Render::TreeRoot *EntryHelper; // rbx
  Scaleform::Render::TreeNode *v13; // rdi
  Scaleform::Render::Rect<long> *v14; // rax
  Scaleform::Render::Size<unsigned long> *v15; // rax
  int Width; // ecx
  int x1; // er14
  int y1; // er12
  int x2; // esi
  int y2; // er15
  Scaleform::Render::DrawableImage_vtbl *v21; // rax
  int *v22; // rax
  int v23; // ecx
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  const Scaleform::Render::Cxform *v25; // rcx
  Scaleform::Render::ContextImpl::Context *pControlContext; // rcx
  const Scaleform::Render::DICommand_Draw *v27; // rax
  bool v28; // zf
  Scaleform::Render::Viewport vp; // [rsp+20h] [rbp-E0h] BYREF
  Scaleform::Render::Matrix2x4<float> *m; // [rsp+50h] [rbp-B0h]
  Scaleform::Render::TreeNode *subtreea; // [rsp+58h] [rbp-A8h]
  const Scaleform::Render::Cxform *v32; // [rsp+60h] [rbp-A0h]
  Scaleform::Render::Rect<long> *v33; // [rsp+68h] [rbp-98h]
  int v34; // [rsp+70h] [rbp-90h]
  int v35; // [rsp+74h] [rbp-8Ch]
  int v36; // [rsp+78h] [rbp-88h]
  int v37; // [rsp+7Ch] [rbp-84h]
  int v38; // [rsp+88h] [rbp-78h]
  int v39; // [rsp+8Ch] [rbp-74h]
  char v40[8]; // [rsp+98h] [rbp-68h] BYREF
  Scaleform::Render::Size<unsigned long> v41; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::Render::Rect<long> v42; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-48h] BYREF
  int v44; // [rsp+C0h] [rbp-40h]
  unsigned int Height; // [rsp+C4h] [rbp-3Ch]
  Scaleform::Render::DICommand_Draw v46; // [rsp+C8h] [rbp-38h] BYREF

  pObject = this->pContext.pObject;
  v32 = cform;
  m = (Scaleform::Render::Matrix2x4<float> *)matrix;
  subtreea = subtree;
  v33 = (Scaleform::Render::Rect<long> *)clipRect;
  if ( pObject )
  {
    RContext = pObject->RContext;
    if ( RContext )
    {
      v10 = (Scaleform::Render::TreeRoot::NodeData *)RContext->pHeap->Alloc(RContext->pHeap, 208ui64, 0i64);
      v11 = v10;
      if ( v10 )
        Scaleform::Render::TreeRoot::NodeData::NodeData(v10);
      EntryHelper = (Scaleform::Render::TreeRoot *)Scaleform::Render::ContextImpl::Context::createEntryHelper(
                                                     RContext,
                                                     v11);
      if ( EntryHelper )
      {
        v13 = Scaleform::Render::TreeNode::Clone(subtree, this->pContext.pObject->RContext);
        Scaleform::Render::TreeContainer::Add(EntryHelper, v13);
        if ( clipRect )
        {
          v42 = *clipRect;
          v14 = &v42;
        }
        else
        {
          v15 = this->GetSize(this, v40);
          v43 = 0i64;
          Width = v15->Width;
          Height = v15->Height;
          v14 = (Scaleform::Render::Rect<long> *)&v43;
          v44 = Width;
        }
        x1 = v14->x1;
        y1 = v14->y1;
        x2 = v14->x2;
        y2 = v14->y2;
        v21 = this->__vftable;
        v34 = x1;
        v35 = y1;
        v36 = x2;
        v37 = y2;
        v22 = (int *)v21->GetSize(this, &v41);
        v23 = v22[1];
        v38 = *v22;
        v39 = v23;
        vp.BufferWidth = v38;
        vp.BufferHeight = v23;
        *(_QWORD *)&vp.ScissorWidth = 0i64;
        vp.ScissorTop = 0;
        vp.Left = x1;
        vp.Top = y1;
        vp.Width = x2 - x1;
        *(_QWORD *)&vp.Height = (unsigned int)(y2 - y1);
        vp.Flags = 1;
        Scaleform::Render::TreeRoot::SetViewport(EntryHelper, &vp);
        Scaleform::Render::TreeNode::SetMatrix(EntryHelper, m);
        Scaleform::Render::DrawableImage::setViewProj3DHelper(this, subtreea, EntryHelper);
        Scaleform::Render::TreeNode::SetMatrix(
          v13,
          (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152]);
        Scaleform::Render::TreeNode::SetVisible(v13, 1);
        WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(v13, 2u);
        v25 = v32;
        WritableData[5] = *(Scaleform::Render::ContextImpl::EntryData *)&v32->M[0][0];
        WritableData[6] = *(Scaleform::Render::ContextImpl::EntryData *)&v25->M[1][0];
        Scaleform::Render::TreeNode::SetBlendMode(v13, blendMode);
        ++EntryHelper->RefCount;
        pControlContext = this->pContext.pObject->pControlContext;
        if ( pControlContext )
          pControlContext->DIChangesRequired = 1;
        this->pContext.pObject->OnCapture(this->pContext.pObject);
        Scaleform::Render::DICommand_Draw::DICommand_Draw(&v46, this, EntryHelper, v33);
        Scaleform::Render::DrawableImage::addCommand<Scaleform::Render::DICommand_Draw>(this, v27);
        v46.__vftable = (Scaleform::Render::DICommand_Draw_vtbl *)&Scaleform::Render::DICommand::`vftable';
        if ( v46.pImage.pObject )
          v46.pImage.pObject->Release(v46.pImage.pObject);
        if ( v13 )
        {
          v28 = v13->RefCount-- == 1;
          if ( v28 )
            Scaleform::Render::ContextImpl::Entry::destroyHelper(v13);
        }
        v28 = EntryHelper->RefCount-- == 1;
        if ( v28 )
          Scaleform::Render::ContextImpl::Entry::destroyHelper(EntryHelper);
      }
    }
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::Render::DestroyDrawableImageThreadCommand::Execute(
        Scaleform::Render::DestroyDrawableImageThreadCommand *this)
{
  Scaleform::Render::DrawableImage *pDrawableImage; // rcx

  pDrawableImage = this->pDrawableImage;
  if ( pDrawableImage )
    ((void (__fastcall *)(Scaleform::Render::DrawableImage *, __int64))pDrawableImage->~RefCountImplCore)(
      pDrawableImage,
      1i64);
}

void __fastcall Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform>::ExecuteHWGetImages(
        Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Threshold> *this,
        Scaleform::Render::DrawableImage **images,
        Scaleform::Render::Size<float> *readOffsets,
        const Scaleform::Render::Rect<long> *destClippedRect)
{
  int v8; // ebp
  float x1; // xmm0_4
  int v10; // edx
  int v11; // er8
  signed int v12; // edx
  int v13; // eax
  __m128i v14; // xmm0

  v8 = 0;
  if ( this->GetRequireSourceRead(this) )
  {
    v8 = 1;
    *images = this->pImage.pObject;
    x1 = (float)destClippedRect->x1;
    readOffsets->Height = (float)destClippedRect->y1;
    readOffsets->Width = x1;
  }
  images[v8] = this->pSource.pObject;
  v10 = -this->DestPoint.x;
  if ( this->DestPoint.x > 0 )
    v10 = 0;
  v11 = -this->DestPoint.y;
  if ( this->DestPoint.y > 0 )
    v11 = 0;
  v12 = this->SourceRect.x1 + v10;
  if ( v12 < 0 )
    v12 = 0;
  v13 = this->SourceRect.y1 + v11;
  v14 = _mm_cvtsi32_si128(v12);
  if ( v13 < 0 )
    v13 = 0;
  LODWORD(readOffsets[v8].Width) = _mm_cvtepi32_ps(v14).m128_u32[0];
  readOffsets[v8].Height = (float)v13;
}

void __fastcall Scaleform::Render::DrawableImageContext::ExecuteNextCapture(
        Scaleform::Render::DrawableImageContext *this,
        Scaleform::Render::ContextImpl::RenderNotify *notify)
{
  Scaleform::Render::ContextImpl::Context *RContext; // rcx

  RContext = this->RContext;
  if ( RContext )
    Scaleform::Render::ContextImpl::Context::NextCapture(RContext, notify, Capture_Immediate);
}

void __fastcall Scaleform::Render::DrawableImage::FillRect(
        Scaleform::Render::DrawableImage *this,
        const Scaleform::Render::Rect<long> *rect,
        int *color)
{
  int v3; // ebx
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  Scaleform::Render::DrawableImage *v10; // rax
  int v11; // er8
  int v12; // edx
  int v13; // ecx
  Scaleform::Render::DICommand v14; // [rsp+28h] [rbp-50h] BYREF
  int x1; // [rsp+38h] [rbp-40h]
  int y1; // [rsp+3Ch] [rbp-3Ch]
  int x2; // [rsp+40h] [rbp-38h]
  int y2; // [rsp+44h] [rbp-34h]
  int v19; // [rsp+48h] [rbp-30h]

  v3 = *color;
  v14.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( this )
    this->AddRef(this);
  x1 = rect->x1;
  y1 = rect->y1;
  x2 = rect->x2;
  y2 = rect->y2;
  pObject = this->pContext.pObject;
  v14.pImage.pObject = this;
  v14.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_FillRect::`vftable';
  v19 = v3;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v14, this) )
  {
    v8 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
           this->pQueue.pObject,
           0x28u,
           &this->pQueue.pObject->QueueLock);
    v9 = v8;
    if ( v8 )
    {
      *v8 = &Scaleform::Render::DICommand::`vftable';
      v10 = v14.pImage.pObject;
      if ( v14.pImage.pObject )
      {
        v14.pImage.pObject->AddRef(v14.pImage.pObject);
        v10 = v14.pImage.pObject;
      }
      v9[1] = v10;
      *v9 = &Scaleform::Render::DICommand_FillRect::`vftable';
      v11 = y2;
      v12 = x2;
      v13 = y1;
      *((_DWORD *)v9 + 4) = x1;
      *((_DWORD *)v9 + 5) = v13;
      *((_DWORD *)v9 + 6) = v12;
      *((_DWORD *)v9 + 7) = v11;
      *((_DWORD *)v9 + 8) = v19;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v14.GetRenderCaps)(&v14) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  v14.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v14.pImage.pObject )
    v14.pImage.pObject->Release(v14.pImage.pObject);
}

void __fastcall Scaleform::Render::DrawableImage::FloodFill(
        Scaleform::Render::DrawableImage *this,
        const Scaleform::Render::Point<long> *pt,
        int *color)
{
  int v3; // ebx
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  Scaleform::Render::DrawableImage *v10; // rax
  int v11; // ecx
  Scaleform::Render::DICommand v12; // [rsp+20h] [rbp-38h] BYREF
  int x; // [rsp+30h] [rbp-28h]
  int y; // [rsp+34h] [rbp-24h]
  int v15; // [rsp+38h] [rbp-20h]

  v3 = *color;
  v12.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( this )
    this->AddRef(this);
  x = pt->x;
  y = pt->y;
  pObject = this->pContext.pObject;
  v12.pImage.pObject = this;
  v12.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_FloodFill::`vftable';
  v15 = v3;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v12, this) )
  {
    v8 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
           this->pQueue.pObject,
           0x20u,
           &this->pQueue.pObject->QueueLock);
    v9 = v8;
    if ( v8 )
    {
      *v8 = &Scaleform::Render::DICommand::`vftable';
      v10 = v12.pImage.pObject;
      if ( v12.pImage.pObject )
      {
        v12.pImage.pObject->AddRef(v12.pImage.pObject);
        v10 = v12.pImage.pObject;
      }
      v9[1] = v10;
      *v9 = &Scaleform::Render::DICommand_FloodFill::`vftable';
      v11 = y;
      *((_DWORD *)v9 + 4) = x;
      *((_DWORD *)v9 + 5) = v11;
      *((_DWORD *)v9 + 6) = v15;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v12.GetRenderCaps)(&v12) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  v12.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v12.pImage.pObject )
    v12.pImage.pObject->Release(v12.pImage.pObject);
}

void __fastcall Scaleform::Render::SubImage::GetAsImage(std::_Wrap_alloc<std::allocator<AgString> > *this)
{
  ;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

__int64 __fastcall Scaleform::Render::DICommand_Histogram::GetCPUCaps(Scaleform::Render::DICommand_HitTest *this)
{
  return 49i64;
}

__int64 __fastcall Scaleform::Render::DICommand_PixelDissolve::GetCPUCaps(Scaleform::Render::DICommand_HitTest *this)
{
  return 17i64;
}

Scaleform::Render::Rect<long> *__fastcall Scaleform::Render::DrawableImage::GetColorBoundsRect(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::Rect<long> *result,
        unsigned int mask,
        unsigned int color,
        bool findColor)
{
  bool v9; // zf
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  Scaleform::Render::DrawableImage *v14; // rax
  Scaleform::Render::DICommand v16; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+30h] [rbp-38h]
  unsigned int v18; // [rsp+34h] [rbp-34h]
  bool v19; // [rsp+38h] [rbp-30h]
  Scaleform::Render::Rect<long> *v20; // [rsp+40h] [rbp-28h]

  *(_QWORD *)&result->x1 = 0i64;
  *(_QWORD *)&result->x2 = 0i64;
  v16.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( this )
    this->AddRef(this);
  v9 = !this->Transparent;
  v16.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_GetColorBoundsRect::`vftable';
  v19 = findColor;
  v16.pImage.pObject = this;
  v17 = mask;
  v18 = color;
  v20 = result;
  if ( v9 )
    v17 = mask & 0xFFFFFF;
  pObject = this->pContext.pObject;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v16, this) )
  {
    v12 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
            this->pQueue.pObject,
            0x28u,
            &this->pQueue.pObject->QueueLock);
    v13 = v12;
    if ( v12 )
    {
      *v12 = &Scaleform::Render::DICommand::`vftable';
      v14 = v16.pImage.pObject;
      if ( v16.pImage.pObject )
      {
        v16.pImage.pObject->AddRef(v16.pImage.pObject);
        v14 = v16.pImage.pObject;
      }
      v13[1] = v14;
      *v13 = &Scaleform::Render::DICommand_GetColorBoundsRect::`vftable';
      *((_DWORD *)v13 + 4) = v17;
      *((_DWORD *)v13 + 5) = v18;
      *((_BYTE *)v13 + 24) = v19;
      v13[4] = v20;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v16.GetRenderCaps)(&v16) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  v16.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v16.pImage.pObject )
    v16.pImage.pObject->Release(v16.pImage.pObject);
  return result;
}

__int64 __fastcall Concurrency::details::ExecutionResource::GetNodeId(Concurrency::details::ExecutionResource *this)
{
  return this->m_nodeId;
}

__int64 __fastcall Scaleform::Render::DICommand_Dispose::GetType(Scaleform::Render::DICommand_Dispose *this)
{
  return 6i64;
}

Scaleform::Render::Color *__fastcall Scaleform::Render::DrawableImage::GetPixel32(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::Color *result,
        int x,
        int y)
{
  Scaleform::Render::DrawableImage_vtbl *v8; // rax
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  Scaleform::Render::DrawableImage *v13; // rax
  Scaleform::Render::DrawableImage *v14; // rcx
  Scaleform::Render::DICommand v16; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+30h] [rbp-28h]
  int v18; // [rsp+34h] [rbp-24h]
  unsigned int *v19; // [rsp+38h] [rbp-20h]
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF

  if ( x >= this->ISize.Width || y >= this->ISize.Height || x < 0 || y < 0 )
  {
    result->Raw = 0;
  }
  else
  {
    v8 = this->__vftable;
    v20 = 0;
    v16.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
    v8->AddRef(this);
    v16.pImage.pObject = this;
    v19 = &v20;
    pObject = this->pContext.pObject;
    v16.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_GetPixel32::`vftable';
    v17 = x;
    v18 = y;
    if ( pObject )
    {
      pControlContext = pObject->pControlContext;
      if ( pControlContext )
        pControlContext->DIChangesRequired = 1;
    }
    if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v16, this) )
    {
      v11 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
              this->pQueue.pObject,
              0x20u,
              &this->pQueue.pObject->QueueLock);
      v12 = v11;
      if ( v11 )
      {
        *v11 = &Scaleform::Render::DICommand::`vftable';
        v13 = v16.pImage.pObject;
        if ( v16.pImage.pObject )
        {
          v16.pImage.pObject->AddRef(v16.pImage.pObject);
          v13 = v16.pImage.pObject;
        }
        v12[1] = v13;
        *v12 = &Scaleform::Render::DICommand_GetPixel32::`vftable';
        *((_DWORD *)v12 + 4) = v17;
        *((_DWORD *)v12 + 5) = v18;
        v12[3] = v19;
      }
      if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v16.GetRenderCaps)(&v16) & 0x10) != 0 )
        Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
    }
    v14 = v16.pImage.pObject;
    v16.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
    result->Raw = v20;
    if ( v14 )
    {
      v14->Release(v14);
      return result;
    }
  }
  return result;
}

Scaleform::Render::Color *__fastcall Scaleform::Render::DrawableImage::GetPixel(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::Color *result,
        int x,
        int y)
{
  Scaleform::Render::Color *v5; // rax

  Scaleform::Render::DrawableImage::GetPixel32(this, result, x, y);
  v5 = result;
  result->Channels.Alpha = 0;
  return v5;
}

char __fastcall Scaleform::Render::DrawableImage::GetPixels(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::DIPixelProvider *provider,
        const Scaleform::Render::Rect<long> *sourceRect)
{
  int x2; // er15
  int y2; // esi
  int x1; // ebx
  int y1; // er14
  Scaleform::Render::DrawableImage_vtbl *v9; // rax
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  Scaleform::Render::DrawableImage *v14; // rax
  int v15; // er8
  int v16; // edx
  int v17; // ecx
  char v18; // bl
  char v20; // [rsp+20h] [rbp-60h] BYREF
  int v21; // [rsp+28h] [rbp-58h]
  int v22; // [rsp+2Ch] [rbp-54h]
  int v23; // [rsp+30h] [rbp-50h]
  int v24; // [rsp+34h] [rbp-4Ch]
  Scaleform::Render::DICommand v25; // [rsp+40h] [rbp-40h] BYREF
  int v26; // [rsp+50h] [rbp-30h]
  int v27; // [rsp+54h] [rbp-2Ch]
  int v28; // [rsp+58h] [rbp-28h]
  int v29; // [rsp+5Ch] [rbp-24h]
  Scaleform::Render::DIPixelProvider *v30; // [rsp+60h] [rbp-20h]
  char *v31; // [rsp+68h] [rbp-18h]

  x2 = sourceRect->x2;
  if ( (signed int)this->ISize.Width < x2 )
    return 0;
  y2 = sourceRect->y2;
  if ( (signed int)this->ISize.Height < y2 )
    return 0;
  x1 = sourceRect->x1;
  if ( sourceRect->x1 < 0 )
    return 0;
  y1 = sourceRect->y1;
  if ( y1 < 0 )
    return 0;
  v9 = this->__vftable;
  v20 = 0;
  v21 = x1;
  v22 = y1;
  v23 = x2;
  v24 = y2;
  v25.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  ((void (*)(void))v9->AddRef)();
  v25.pImage.pObject = this;
  v25.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_GetPixels::`vftable';
  v31 = &v20;
  pObject = this->pContext.pObject;
  v26 = x1;
  v27 = y1;
  v28 = x2;
  v29 = y2;
  v30 = provider;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v25, this) )
  {
    v12 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
            this->pQueue.pObject,
            0x30u,
            &this->pQueue.pObject->QueueLock);
    v13 = v12;
    if ( v12 )
    {
      *v12 = &Scaleform::Render::DICommand::`vftable';
      v14 = v25.pImage.pObject;
      if ( v25.pImage.pObject )
      {
        v25.pImage.pObject->AddRef(v25.pImage.pObject);
        v14 = v25.pImage.pObject;
      }
      v13[1] = v14;
      *v13 = &Scaleform::Render::DICommand_GetPixels::`vftable';
      v15 = v29;
      v16 = v28;
      v17 = v27;
      *((_DWORD *)v13 + 4) = v26;
      *((_DWORD *)v13 + 5) = v17;
      *((_DWORD *)v13 + 6) = v16;
      *((_DWORD *)v13 + 7) = v15;
      v13[4] = v30;
      v13[5] = v31;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v25.GetRenderCaps)(&v25) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  v18 = v20;
  v25.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v25.pImage.pObject )
    v25.pImage.pObject->Release(v25.pImage.pObject);
  return v18;
}

Scaleform::Render::RenderTarget *__fastcall Scaleform::Render::DrawableImage::GetRenderTarget(
        Scaleform::Render::DrawableImage *this)
{
  return this->pRT.pObject;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

bool __fastcall Scaleform::Render::DICommand_Compare::GetRequireSourceRead(Scaleform::Render::DICommand_Compare *this)
{
  Scaleform::Render::DrawableImage *pObject; // rax

  pObject = this->pImage.pObject;
  return this->pSource.pObject == pObject || this->pImageCompare1.pObject == pObject;
}

bool __fastcall Scaleform::Render::DICommand_PaletteMap::GetRequireSourceRead(
        Scaleform::Render::DICommand_PaletteMap *this)
{
  return this->pImage.pObject == this->pSource.pObject;
}

_BOOL8 __fastcall Scaleform::Render::DICommand_Threshold::GetRequireSourceRead(
        Scaleform::Render::DICommand_Threshold *this)
{
  return this->CopySource;
}

__int64 __fastcall CCallbackImpl<24>::GetCallbackSizeBytes(Scaleform::Render::DICommand_SetPixels *this)
{
  return 24i64;
}

__int64 __fastcall Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand>::GetSize(
        Scaleform::Render::DICommand_Histogram *this)
{
  return 16i64;
}

__int64 __fastcall Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Draw,Scaleform::Render::DICommand>::GetSize(
        Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixels,Scaleform::Render::DICommand> *this)
{
  return 48i64;
}

__int64 __fastcall Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetColorBoundsRect,Scaleform::Render::DICommand>::GetSize(
        Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Noise,Scaleform::Render::DICommand> *this)
{
  return 40i64;
}

__int64 __fastcall Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FloodFill,Scaleform::Render::DICommand>::GetSize(
        Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixel32,Scaleform::Render::DICommand> *this)
{
  return 32i64;
}

__int64 __fastcall Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_HitTest,Scaleform::Render::DICommand>::GetSize(
        Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript *this)
{
  return 72i64;
}

__int64 __fastcall Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PerlinNoise,Scaleform::Render::DICommand>::GetSize(
        Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PerlinNoise,Scaleform::Render::DICommand> *this)
{
  return 176i64;
}

__int64 __fastcall Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Scroll>::GetSize(
        Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Scroll> *this)
{
  return 56i64;
}

__int64 __fastcall Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform>::GetSize(
        Scaleform::GFx::AS3::ClassTraits::UserDefined *this)
{
  return 80i64;
}

__int64 __fastcall Scaleform::GFx::AS3::InstanceTraits::Activation::GetFixedMemSize(
        Scaleform::GFx::AS3::InstanceTraits::Activation *this)
{
  return 64i64;
}

Scaleform::Render::Size<unsigned long> *__fastcall Scaleform::Render::DrawableImage::GetSize(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::Size<unsigned long> *result)
{
  *result = this->ISize;
  return result;
}

__int64 __fastcall Scaleform::Render::DICommand_Compare::GetSourceImages(
        Scaleform::Render::DICommand_Compare *this,
        Scaleform::Render::DISourceImages *ps)
{
  ps->pImages[0] = this->pSource.pObject;
  ps->pImages[1] = this->pImageCompare1.pObject;
  return 2i64;
}

__int64 __fastcall Scaleform::Render::DICommand_CopyPixels::GetSourceImages(
        Scaleform::Render::DICommand_CopyPixels *this,
        Scaleform::Render::DISourceImages *ps)
{
  Scaleform::Render::DrawableImage *pObject; // rax

  ps->pImages[0] = this->pSource.pObject;
  pObject = this->pAlphaSource.pObject;
  if ( !pObject )
    return 1i64;
  ps->pImages[1] = pObject;
  return 2i64;
}

Scaleform::Render::Image *__fastcall Scaleform::Render::DICommand_HitTest::GetSourceImages(
        Scaleform::Render::DICommand_HitTest *this,
        Scaleform::Render::DISourceImages *ps)
{
  Scaleform::Render::Image *result; // rax

  result = this->SecondImage.pObject;
  if ( result )
  {
    ps->pImages[0] = result;
    return (Scaleform::Render::Image *)1;
  }
  return result;
}

__int64 __fastcall Scaleform::Render::DICommand_SourceRect::GetSourceImages(
        Scaleform::Render::DICommand_SourceRect *this,
        Scaleform::Render::DISourceImages *ps)
{
  ps->pImages[0] = this->pSource.pObject;
  return 1i64;
}

Scaleform::Render::ImageBase_vtbl *__fastcall Scaleform::Render::DrawableImage::GetTexture(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::TextureManager *pmanager)
{
  Scaleform::Render::ImageBase *pObject; // rcx
  Scaleform::Render::ImageBase *v5; // rsi
  Scaleform::Render::DrawableImageContext *v6; // rbx
  Scaleform::Render::HAL *pHAL; // rax
  int RenderThreadID; // eax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-18h]

  pObject = this->pDelegateImage.pObject;
  if ( pObject
    && pObject->GetImageType(pObject)
    && this->pDelegateImage.pObject->GetImageType(this->pDelegateImage.pObject) != Type_Other )
  {
    v5 = this->pDelegateImage.pObject;
    if ( !pmanager )
    {
      v11 = 0;
      v6 = this->pContext.pObject;
      v10 = 0i64;
      v6->pRTCommandQueue->GetRenderInterfaces(v6->pRTCommandQueue, (Scaleform::Render::Interfaces *)&v10);
      pmanager = (Scaleform::Render::TextureManager *)v10;
      if ( v6->IDefaults.pTextureManager )
        pmanager = v6->IDefaults.pTextureManager;
      pHAL = (Scaleform::Render::HAL *)*((_QWORD *)&v10 + 1);
      *(_QWORD *)&v10 = pmanager;
      if ( v6->IDefaults.pHAL )
        pHAL = v6->IDefaults.pHAL;
      *((_QWORD *)&v10 + 1) = pHAL;
      RenderThreadID = v11;
      if ( v6->IDefaults.RenderThreadID )
        RenderThreadID = v6->IDefaults.RenderThreadID;
      v11 = RenderThreadID;
    }
    if ( (this->DrawableImageState & 0x20) == 0 )
    {
      if ( pmanager )
        return (Scaleform::Render::ImageBase_vtbl *)((__int64 (__fastcall *)(Scaleform::Render::ImageBase *, Scaleform::Render::TextureManager *))v5->__vftable[1].IsDelegate)(
                                                      v5,
                                                      pmanager);
      if ( v5[1].__vftable )
        return v5[1].__vftable;
    }
    return 0i64;
  }
  else if ( (this->DrawableImageState & 0x20) != 0 )
  {
    return 0i64;
  }
  else
  {
    return (Scaleform::Render::ImageBase_vtbl *)this->pTexture.Value;
  }
}

__int64 __fastcall ActorOption::GetActorType(Scaleform::GFx::AS3::Instances::fl::XMLProcInstr *this)
{
  return 4i64;
}

__int64 __fastcall Scaleform::Render::DICommand_Clear::GetType(Scaleform::GFx::AS3::Instances::fl::XMLComment *this)
{
  return 3i64;
}

__int64 __fastcall CCallbackImpl<9>::GetCallbackSizeBytes(Scaleform::Render::DICommand_ColorTransform *this)
{
  return 9i64;
}

__int64 __fastcall Scaleform::Render::DICommand_Compare::GetType(Scaleform::Render::DICommand_Compare *this)
{
  return 10i64;
}

__int64 __fastcall Scaleform::Render::UserDataEffect::GetType(Scaleform::Render::DICommand_CopyChannel *this)
{
  return 7i64;
}

__int64 __fastcall CCallbackImpl<8>::GetCallbackSizeBytes(Scaleform::Render::DICommand_CopyPixels *this)
{
  return 8i64;
}

__int64 __fastcall ActorShot::GetActorType(Scaleform::GFx::AS3::Instances::fl::XMLText *this)
{
  return 2i64;
}

__int64 __fastcall Scaleform::Render::DICommand_Draw::GetType(Scaleform::GFx::AS3::Instances::fl::XMLAttr *this)
{
  return 5i64;
}

__int64 __fastcall Scaleform::Render::DICommand_FillRect::GetType(Scaleform::Render::DICommand_FillRect *this)
{
  return 11i64;
}

__int64 __fastcall Scaleform::Render::DICommand_FloodFill::GetType(Scaleform::Render::DICommand_FloodFill *this)
{
  return 12i64;
}

__int64 __fastcall Scaleform::Render::DICommand_GetColorBoundsRect::GetType(
        Scaleform::Render::DICommand_GetColorBoundsRect *this)
{
  return 13i64;
}

__int64 __fastcall Scaleform::Render::DICommand_GetPixel32::GetType(Scaleform::Render::DICommand_GetPixel32 *this)
{
  return 14i64;
}

__int64 __fastcall Scaleform::Render::DICommand_GetPixels::GetType(Scaleform::Render::DICommand_GetPixels *this)
{
  return 15i64;
}

__int64 __fastcall Scaleform::Render::DICommand_Merge::GetType(Scaleform::Render::DICommand_Merge *this)
{
  return 18i64;
}

__int64 __fastcall Scaleform::Render::DICommand_Noise::GetType(Scaleform::Render::DICommand_Noise *this)
{
  return 19i64;
}

__int64 __fastcall Scaleform::Render::DICommand_PaletteMap::GetType(Scaleform::Render::DICommand_PaletteMap *this)
{
  return 20i64;
}

__int64 __fastcall Scaleform::Render::DICommand_PerlinNoise::GetType(Scaleform::Render::DICommand_PerlinNoise *this)
{
  return 21i64;
}

__int64 __fastcall Scaleform::Render::DICommand_PixelDissolve::GetType(
        Scaleform::Render::DICommand_PixelDissolve *this)
{
  return 22i64;
}

__int64 __fastcall Scaleform::Render::DICommand_Scroll::GetType(Scaleform::Render::DICommand_Scroll *this)
{
  return 25i64;
}

__int64 __fastcall Scaleform::Render::DICommand_SetPixel32::GetType(Scaleform::Render::DICommand_SetPixel32 *this)
{
  return 23i64;
}

__int64 __fastcall Scaleform::Render::DICommand_Threshold::GetType(Scaleform::Render::DICommand_Threshold *this)
{
  return 26i64;
}

void __fastcall Scaleform::Render::DrawableImage::Histogram(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::Rect<long> *rect,
        unsigned int (*colors)[256])
{
  int x1; // esi
  int y1; // er14
  int x2; // er15
  int y2; // edi
  Scaleform::Render::Size<unsigned long> *v10; // rax
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  Scaleform::Render::DrawableImage *v15; // rax
  int v16; // er8
  int v17; // edx
  int v18; // ecx
  char v19[8]; // [rsp+38h] [rbp-38h] BYREF
  Scaleform::Render::DICommand v20; // [rsp+40h] [rbp-30h] BYREF
  int v21; // [rsp+50h] [rbp-20h]
  int v22; // [rsp+54h] [rbp-1Ch]
  int v23; // [rsp+58h] [rbp-18h]
  int v24; // [rsp+5Ch] [rbp-14h]
  unsigned int (*v25)[256]; // [rsp+60h] [rbp-10h]

  memset(colors, 0, 0x1000ui64);
  if ( rect )
  {
    x1 = rect->x1;
    y1 = rect->y1;
    x2 = rect->x2;
    y2 = rect->y2;
  }
  else
  {
    v10 = this->GetSize(this, v19);
    x1 = 0;
    y1 = 0;
    x2 = v10->Width;
    y2 = v10->Height;
  }
  v20.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( this )
    this->AddRef(this);
  v20.pImage.pObject = this;
  v20.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_Histogram::`vftable';
  pObject = this->pContext.pObject;
  v21 = x1;
  v22 = y1;
  v23 = x2;
  v24 = y2;
  v25 = colors;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v20, this) )
  {
    v13 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
            this->pQueue.pObject,
            0x28u,
            &this->pQueue.pObject->QueueLock);
    v14 = v13;
    if ( v13 )
    {
      *v13 = &Scaleform::Render::DICommand::`vftable';
      v15 = v20.pImage.pObject;
      if ( v20.pImage.pObject )
      {
        v20.pImage.pObject->AddRef(v20.pImage.pObject);
        v15 = v20.pImage.pObject;
      }
      v14[1] = v15;
      *v14 = &Scaleform::Render::DICommand_Histogram::`vftable';
      v16 = v24;
      v17 = v23;
      v18 = v22;
      *((_DWORD *)v14 + 4) = v21;
      *((_DWORD *)v14 + 5) = v18;
      *((_DWORD *)v14 + 6) = v17;
      *((_DWORD *)v14 + 7) = v16;
      v14[4] = v25;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v20.GetRenderCaps)(&v20) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  v20.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v20.pImage.pObject )
    v20.pImage.pObject->Release(v20.pImage.pObject);
}

__int64 __fastcall Scaleform::Render::DrawableImage::HitTest(
        Scaleform::Render::DrawableImage *this,
        const Scaleform::Render::Point<long> *firstPoint,
        Scaleform::Render::Rect<long> *secondImage,
        unsigned int alphaThreshold)
{
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  Scaleform::Render::DICommand_HitTest *v10; // rax
  unsigned __int8 v11; // bl
  unsigned __int8 v13; // [rsp+20h] [rbp-88h] BYREF
  Scaleform::Render::DICommand_HitTest v14; // [rsp+30h] [rbp-78h] BYREF

  v13 = 0;
  v14.__vftable = (Scaleform::Render::DICommand_HitTest_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( this )
    this->AddRef(this);
  v14.pImage.pObject = this;
  v14.__vftable = (Scaleform::Render::DICommand_HitTest_vtbl *)&Scaleform::Render::DICommand_HitTest::`vftable';
  v14.SecondArea = *secondImage;
  v14.FirstPoint = *firstPoint;
  v14.Result = (bool *)&v13;
  pObject = this->pContext.pObject;
  v14.SecondImage.pObject = 0i64;
  v14.FirstThreshold = alphaThreshold;
  v14.SecondThreshold = 0;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v14, this) )
  {
    v10 = (Scaleform::Render::DICommand_HitTest *)Scaleform::Render::DICommandQueue::allocCommandFromPage(
                                                    this->pQueue.pObject,
                                                    0x48u,
                                                    &this->pQueue.pObject->QueueLock);
    if ( v10 )
      Scaleform::Render::DICommand_HitTest::DICommand_HitTest(v10, &v14);
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand_HitTest *))v14.GetRenderCaps)(&v14) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  v11 = v13;
  if ( v14.SecondImage.pObject )
    v14.SecondImage.pObject->Release(v14.SecondImage.pObject);
  v14.__vftable = (Scaleform::Render::DICommand_HitTest_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v14.pImage.pObject )
    v14.pImage.pObject->Release(v14.pImage.pObject);
  return v11;
}

__int64 __fastcall Scaleform::Render::DrawableImage::HitTest(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::ImageBase *secondImage,
        const Scaleform::Render::Point<long> *firstPoint,
        const Scaleform::Render::Point<long> *secondPoint,
        unsigned int firstThreshold,
        unsigned int secondThreshold)
{
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  Scaleform::Render::DICommand_HitTest *v12; // rax
  unsigned __int8 v13; // bl
  unsigned __int8 v15; // [rsp+20h] [rbp-49h] BYREF
  Scaleform::Render::DICommand_HitTest v16; // [rsp+30h] [rbp-39h] BYREF

  v15 = 0;
  v16.__vftable = (Scaleform::Render::DICommand_HitTest_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( this )
    this->AddRef(this);
  v16.pImage.pObject = this;
  v16.__vftable = (Scaleform::Render::DICommand_HitTest_vtbl *)&Scaleform::Render::DICommand_HitTest::`vftable';
  if ( secondImage )
    secondImage->AddRef(secondImage);
  v16.SecondImage.pObject = (Scaleform::Render::Image *)secondImage;
  *(_QWORD *)&v16.SecondArea.x1 = 0i64;
  *(_QWORD *)&v16.SecondArea.x2 = 0i64;
  v16.FirstPoint = *firstPoint;
  v16.SecondPoint = *secondPoint;
  v16.FirstThreshold = firstThreshold;
  v16.SecondThreshold = secondThreshold;
  v16.Result = (bool *)&v15;
  pObject = this->pContext.pObject;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v16, this) )
  {
    v12 = (Scaleform::Render::DICommand_HitTest *)Scaleform::Render::DICommandQueue::allocCommandFromPage(
                                                    this->pQueue.pObject,
                                                    0x48u,
                                                    &this->pQueue.pObject->QueueLock);
    if ( v12 )
      Scaleform::Render::DICommand_HitTest::DICommand_HitTest(v12, &v16);
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand_HitTest *))v16.GetRenderCaps)(&v16) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  v13 = v15;
  if ( v16.SecondImage.pObject )
    v16.SecondImage.pObject->Release(v16.SecondImage.pObject);
  v16.__vftable = (Scaleform::Render::DICommand_HitTest_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v16.pImage.pObject )
    v16.pImage.pObject->Release(v16.pImage.pObject);
  return v13;
}

char __fastcall Scaleform::Render::DrawableImage::MapImageSource(
        Scaleform::Render::ImageData *data,
        Scaleform::Render::ImageBase *i)
{
  const Scaleform::Render::ImageData *MappedData; // rax
  Scaleform::Render::RawImage *v6; // rbx

  if ( data && i )
  {
    if ( i->GetImageType(i) == Type_DrawableImage )
    {
      if ( (*(&i[4].RefCount + 1) & 3) != 0
        || Scaleform::Render::DrawableImage::mapTextureRT((Scaleform::Render::DrawableImage *)i, 1) )
      {
        MappedData = Scaleform::Render::DrawableImage::getMappedData((Scaleform::Render::DrawableImage *)i);
        Scaleform::Render::ImageData::operator=(data, MappedData);
        return 1;
      }
    }
    else if ( i->GetImageType(i) == Type_RawImage )
    {
      v6 = (Scaleform::Render::RawImage *)i->GetAsImage(i);
      if ( v6->GetFormat(v6) == Image_B8G8R8A8 || v6->GetFormat(v6) == Image_R8G8B8A8 )
      {
        Scaleform::Render::RawImage::GetImageData(v6, data);
        return 1;
      }
    }
  }
  return 0;
}

void __fastcall Scaleform::Render::DrawableImage::Merge(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::DrawableImage *source,
        const Scaleform::Render::Rect<long> *sourceRect,
        const Scaleform::Render::Point<long> *destPoint,
        unsigned int redMult,
        unsigned int greenMult,
        unsigned int blueMult,
        unsigned int alphaMult)
{
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  Scaleform::Render::DrawableImage *v16; // rax
  Scaleform::Render::DrawableImage *v17; // rcx
  int v18; // ecx
  int v19; // er8
  int v20; // edx
  int v21; // ecx
  Scaleform::Render::DICommand v22; // [rsp+20h] [rbp-50h] BYREF
  Scaleform::Render::DrawableImage *v23; // [rsp+30h] [rbp-40h]
  int x1; // [rsp+38h] [rbp-38h]
  int y1; // [rsp+3Ch] [rbp-34h]
  int x2; // [rsp+40h] [rbp-30h]
  int y2; // [rsp+44h] [rbp-2Ch]
  int x; // [rsp+48h] [rbp-28h]
  int y; // [rsp+4Ch] [rbp-24h]
  unsigned int v30; // [rsp+50h] [rbp-20h]
  unsigned int v31; // [rsp+54h] [rbp-1Ch]
  unsigned int v32; // [rsp+58h] [rbp-18h]
  unsigned int v33; // [rsp+5Ch] [rbp-14h]

  v22.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( this )
    this->AddRef(this);
  v22.pImage.pObject = this;
  v22.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_SourceRect::`vftable';
  if ( source )
    source->AddRef(source);
  x1 = sourceRect->x1;
  y1 = sourceRect->y1;
  x2 = sourceRect->x2;
  y2 = sourceRect->y2;
  x = destPoint->x;
  y = destPoint->y;
  v30 = redMult;
  v31 = greenMult;
  v32 = blueMult;
  v33 = alphaMult;
  pObject = this->pContext.pObject;
  v23 = source;
  v22.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_Merge::`vftable';
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v22, this) )
  {
    v14 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
            this->pQueue.pObject,
            0x40u,
            &this->pQueue.pObject->QueueLock);
    v15 = v14;
    if ( v14 )
    {
      *v14 = &Scaleform::Render::DICommand::`vftable';
      v16 = v22.pImage.pObject;
      if ( v22.pImage.pObject )
      {
        v22.pImage.pObject->AddRef(v22.pImage.pObject);
        v16 = v22.pImage.pObject;
      }
      v15[1] = v16;
      *v15 = &Scaleform::Render::DICommand_SourceRect::`vftable';
      v17 = v23;
      if ( v23 )
      {
        v23->AddRef(v23);
        v17 = v23;
      }
      v15[2] = v17;
      v18 = y1;
      v19 = y2;
      v20 = x2;
      *((_DWORD *)v15 + 6) = x1;
      *((_DWORD *)v15 + 7) = v18;
      *((_DWORD *)v15 + 8) = v20;
      *((_DWORD *)v15 + 9) = v19;
      v21 = y;
      *((_DWORD *)v15 + 10) = x;
      *((_DWORD *)v15 + 11) = v21;
      *v15 = &Scaleform::Render::DICommand_Merge::`vftable';
      *((_DWORD *)v15 + 12) = v30;
      *((_DWORD *)v15 + 13) = v31;
      *((_DWORD *)v15 + 14) = v32;
      *((_DWORD *)v15 + 15) = v33;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v22.GetRenderCaps)(&v22) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  if ( v23 )
    v23->Release(v23);
  v22.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v22.pImage.pObject )
    v22.pImage.pObject->Release(v22.pImage.pObject);
}

void __fastcall Scaleform::Render::DrawableImage::Noise(
        Scaleform::Render::DrawableImage *this,
        unsigned int randomSeed,
        unsigned int low,
        unsigned int high,
        unsigned int channelMask,
        bool grayscale)
{
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  Scaleform::Render::DrawableImage *v14; // rax
  Scaleform::Render::DICommand v15; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+30h] [rbp-38h]
  unsigned int v17; // [rsp+34h] [rbp-34h]
  unsigned int v18; // [rsp+38h] [rbp-30h]
  unsigned int v19; // [rsp+3Ch] [rbp-2Ch]
  bool v20; // [rsp+40h] [rbp-28h]

  v15.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( this )
    this->AddRef(this);
  v19 = channelMask;
  v20 = grayscale;
  pObject = this->pContext.pObject;
  v15.pImage.pObject = this;
  v15.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_Noise::`vftable';
  v16 = randomSeed;
  v17 = low;
  v18 = high;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v15, this) )
  {
    v12 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
            this->pQueue.pObject,
            0x28u,
            &this->pQueue.pObject->QueueLock);
    v13 = v12;
    if ( v12 )
    {
      *v12 = &Scaleform::Render::DICommand::`vftable';
      v14 = v15.pImage.pObject;
      if ( v15.pImage.pObject )
      {
        v15.pImage.pObject->AddRef(v15.pImage.pObject);
        v14 = v15.pImage.pObject;
      }
      v13[1] = v14;
      *v13 = &Scaleform::Render::DICommand_Noise::`vftable';
      *((_DWORD *)v13 + 4) = v16;
      *((_DWORD *)v13 + 5) = v17;
      *((_DWORD *)v13 + 6) = v18;
      *((_DWORD *)v13 + 7) = v19;
      *((_BYTE *)v13 + 32) = v20;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v15.GetRenderCaps)(&v15) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  v15.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v15.pImage.pObject )
    v15.pImage.pObject->Release(v15.pImage.pObject);
}

void __fastcall Scaleform::Render::DrawableImageContext::OnCapture(Scaleform::Render::DrawableImageContext *this)
{
  Scaleform::Render::ContextImpl::Context *RContext; // rcx
  Scaleform::Render::DICommandQueue *pObject; // rcx

  RContext = this->RContext;
  if ( RContext )
    Scaleform::Render::ContextImpl::Context::Capture(RContext);
  pObject = this->Queue.pObject;
  if ( pObject )
    Scaleform::Render::DICommandQueue::OnCapture(pObject);
  Scaleform::Render::DrawableImageContext::processTreeRootKillList(this);
}

void __fastcall Scaleform::Render::DrawableImageContext::OnNextCapture(
        Scaleform::Render::DrawableImageContext *this,
        Scaleform::Render::ContextImpl::RenderNotify *notify)
{
  Scaleform::Render::ContextImpl::Context *RContext; // rcx
  Scaleform::Render::DICommandQueue *pObject; // rcx

  RContext = this->RContext;
  if ( RContext )
    Scaleform::Render::ContextImpl::Context::NextCapture(RContext, notify, Capture_Immediate);
  pObject = this->Queue.pObject;
  if ( pObject )
    Scaleform::Render::DICommandQueue::OnNextCapture(pObject, notify);
}

void __fastcall Scaleform::Render::DrawableImageContext::OnShutdown(
        Scaleform::Render::DrawableImageContext *this,
        bool waitFlag)
{
  Scaleform::Render::DICommandQueue *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::Render::ContextImpl::Context *RContext; // rcx

  pObject = this->Queue.pObject;
  if ( pObject )
  {
    if ( waitFlag )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(pObject);
    else
      Scaleform::Render::DICommandQueue::DiscardCommands(pObject);
    v5 = (Scaleform::RefCountVImpl *)this->Queue.pObject;
    if ( v5 )
      Scaleform::RefCountImpl::Release(v5);
    this->Queue.pObject = 0i64;
  }
  if ( this->RContext )
  {
    Scaleform::Render::DrawableImageContext::processTreeRootKillList(this);
    RContext = this->RContext;
    if ( waitFlag )
    {
      Scaleform::Render::ContextImpl::Context::~Context(RContext);
      this->RContext = 0i64;
    }
    else
    {
      Scaleform::Render::ContextImpl::Context::Shutdown(RContext, 0);
    }
  }
}

void __fastcall Scaleform::Render::DrawableImage::PaletteMap(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::DrawableImage *source,
        const Scaleform::Render::Rect<long> *sourceRect,
        const Scaleform::Render::Point<long> *destPoint,
        unsigned int **channels)
{
  const Scaleform::Render::DICommand_PaletteMap *v6; // rax
  Scaleform::Render::DICommand_PaletteMap v7; // [rsp+30h] [rbp-58h] BYREF

  Scaleform::Render::DICommand_PaletteMap::DICommand_PaletteMap(&v7, this, source, sourceRect, destPoint, channels);
  Scaleform::Render::DrawableImage::addCommand<Scaleform::Render::DICommand_PaletteMap>(this, v6);
  v7.__vftable = (Scaleform::Render::DICommand_PaletteMap_vtbl *)&Scaleform::Render::DICommand_PaletteMap::`vftable';
  if ( v7.Channels )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  v7.Channels = 0i64;
  if ( v7.pSource.pObject )
    v7.pSource.pObject->Release(v7.pSource.pObject);
  v7.__vftable = (Scaleform::Render::DICommand_PaletteMap_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v7.pImage.pObject )
    v7.pImage.pObject->Release(v7.pImage.pObject);
}

void __fastcall Scaleform::Render::DrawableImage::PerlinNoise(
        Scaleform::Render::DrawableImage *this,
        float frequencyX,
        float frequencyY,
        unsigned int numOctaves,
        unsigned int randomSeed,
        bool stitch,
        bool fractal,
        unsigned int channelMask,
        bool grayScale,
        float *offsets,
        unsigned int offsetCount)
{
  unsigned int v13; // eax
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rcx
  Scaleform::Render::DICommand_PerlinNoise *v16; // rax
  Scaleform::Render::DICommand_PerlinNoise v17; // [rsp+20h] [rbp-F8h] BYREF

  v17.__vftable = (Scaleform::Render::DICommand_PerlinNoise_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( this )
    this->AddRef(this);
  v17.FrequencyX = frequencyX;
  v17.__vftable = (Scaleform::Render::DICommand_PerlinNoise_vtbl *)&Scaleform::Render::DICommand_PerlinNoise::`vftable';
  v17.RandomSeed = randomSeed;
  v17.Stitch = stitch;
  v17.FractalNoise = fractal;
  v17.ChannelMask = channelMask;
  v17.GrayScale = grayScale;
  v13 = 16;
  v17.FrequencyY = frequencyY;
  v17.pImage.pObject = this;
  if ( offsetCount < 0x10 )
    v13 = offsetCount;
  v17.NumOctaves = numOctaves;
  v17.OffsetCount = v13;
  if ( offsetCount )
    memmove(v17.Offsets, offsets, 4i64 * offsetCount);
  pObject = this->pContext.pObject;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v17, this) )
  {
    v16 = (Scaleform::Render::DICommand_PerlinNoise *)Scaleform::Render::DICommandQueue::allocCommandFromPage(
                                                        this->pQueue.pObject,
                                                        0xB0u,
                                                        &this->pQueue.pObject->QueueLock);
    if ( v16 )
      Scaleform::Render::DICommand_PerlinNoise::DICommand_PerlinNoise(v16, &v17);
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand_PerlinNoise *))v17.GetRenderCaps)(&v17) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  v17.__vftable = (Scaleform::Render::DICommand_PerlinNoise_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v17.pImage.pObject )
    v17.pImage.pObject->Release(v17.pImage.pObject);
}

__int64 __fastcall Scaleform::Render::DrawableImage::PixelDissolve(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::DrawableImage *source,
        const Scaleform::Render::Rect<long> *sourceRect,
        const Scaleform::Render::Point<long> *destPoint,
        unsigned int randomSeed,
        unsigned int numPixels,
        int *fill)
{
  int v11; // ebx
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  Scaleform::Render::DrawableImage *v16; // rax
  Scaleform::Render::DrawableImage *v17; // rcx
  int v18; // ecx
  int v19; // er8
  int v20; // edx
  int v21; // ecx
  unsigned int v22; // ebx
  int v24[4]; // [rsp+20h] [rbp-61h] BYREF
  Scaleform::Render::DICommand v25; // [rsp+30h] [rbp-51h] BYREF
  Scaleform::Render::DrawableImage *v26; // [rsp+40h] [rbp-41h]
  int x1; // [rsp+48h] [rbp-39h]
  int y1; // [rsp+4Ch] [rbp-35h]
  int x2; // [rsp+50h] [rbp-31h]
  int y2; // [rsp+54h] [rbp-2Dh]
  int x; // [rsp+58h] [rbp-29h]
  int y; // [rsp+5Ch] [rbp-25h]
  unsigned int v33; // [rsp+60h] [rbp-21h]
  unsigned int v34; // [rsp+64h] [rbp-1Dh]
  int v35; // [rsp+68h] [rbp-19h]
  int *v36; // [rsp+70h] [rbp-11h]

  v24[0] = 0;
  v25.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  v11 = *fill;
  v24[1] = *fill;
  if ( this )
    this->AddRef(this);
  v25.pImage.pObject = this;
  v25.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_PixelDissolve::`vftable';
  if ( source )
    source->AddRef(source);
  x1 = sourceRect->x1;
  y1 = sourceRect->y1;
  x2 = sourceRect->x2;
  y2 = sourceRect->y2;
  x = destPoint->x;
  y = destPoint->y;
  v33 = randomSeed;
  v34 = numPixels;
  v36 = v24;
  pObject = this->pContext.pObject;
  v26 = source;
  v35 = v11;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v25, this) )
  {
    v14 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
            this->pQueue.pObject,
            0x48u,
            &this->pQueue.pObject->QueueLock);
    v15 = v14;
    if ( v14 )
    {
      *v14 = &Scaleform::Render::DICommand::`vftable';
      v16 = v25.pImage.pObject;
      if ( v25.pImage.pObject )
      {
        v25.pImage.pObject->AddRef(v25.pImage.pObject);
        v16 = v25.pImage.pObject;
      }
      v15[1] = v16;
      *v15 = &Scaleform::Render::DICommand_PixelDissolve::`vftable';
      v17 = v26;
      if ( v26 )
      {
        v26->AddRef(v26);
        v17 = v26;
      }
      v15[2] = v17;
      v18 = y1;
      v19 = y2;
      v20 = x2;
      *((_DWORD *)v15 + 6) = x1;
      *((_DWORD *)v15 + 7) = v18;
      *((_DWORD *)v15 + 8) = v20;
      *((_DWORD *)v15 + 9) = v19;
      v21 = y;
      *((_DWORD *)v15 + 10) = x;
      *((_DWORD *)v15 + 11) = v21;
      *((_DWORD *)v15 + 12) = v33;
      *((_DWORD *)v15 + 13) = v34;
      *((_DWORD *)v15 + 14) = v35;
      v15[8] = v36;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v25.GetRenderCaps)(&v25) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  v22 = v24[0];
  if ( v26 )
    v26->Release(v26);
  v25.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v25.pImage.pObject )
    v25.pImage.pObject->Release(v25.pImage.pObject);
  return v22;
}

void __fastcall Scaleform::Render::ShapeDataFloatMP::RectanglePath(
        Scaleform::Render::ShapeDataFloatMP *this,
        float x1,
        float y1,
        float x2,
        float y2)
{
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *v6; // rcx
  float StartX; // xmm1_4

  Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::MoveTo(
    *(Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > **)(&this->Strokes + 7),
    x1,
    y1);
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
    *(Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > **)(&this->Strokes + 7),
    x2,
    y1);
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
    *(Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > **)(&this->Strokes + 7),
    x2,
    y2);
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
    *(Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > **)(&this->Strokes + 7),
    x1,
    y2);
  v6 = *(Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > **)(&this->Strokes + 7);
  StartX = v6->StartX;
  if ( v6->LastX != StartX || v6->LastY != v6->StartY )
    Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
      v6,
      StartX,
      v6->StartY);
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndPath(*(Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > **)(&this->Strokes + 7));
}

void __fastcall Scaleform::Render::DrawableImage::Release(Scaleform::Render::DrawableImage *this)
{
  Scaleform::Render::ImageBase *pObject; // rcx
  Scaleform::Render::DrawableImageContext *v3; // rbx
  Scaleform::Render::TextureManager *pTextureManager; // rax
  Scaleform::Render::HAL *pHAL; // rax
  int RenderThreadID; // eax
  __int64 v7; // rax
  Scaleform::Render::ThreadCommand *v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&this->RefCount, -1) == 1 )
  {
    pObject = this->pDelegateImage.pObject;
    if ( pObject )
      pObject->Release(pObject);
    this->pDelegateImage.pObject = 0i64;
    v3 = this->pContext.pObject;
    v9 = 0i64;
    v10 = 0;
    v3->pRTCommandQueue->GetRenderInterfaces(v3->pRTCommandQueue, (Scaleform::Render::Interfaces *)&v9);
    pTextureManager = (Scaleform::Render::TextureManager *)v9;
    if ( v3->IDefaults.pTextureManager )
      pTextureManager = v3->IDefaults.pTextureManager;
    *(_QWORD *)&v9 = pTextureManager;
    pHAL = (Scaleform::Render::HAL *)*((_QWORD *)&v9 + 1);
    if ( v3->IDefaults.pHAL )
      pHAL = v3->IDefaults.pHAL;
    *((_QWORD *)&v9 + 1) = pHAL;
    RenderThreadID = v10;
    if ( v3->IDefaults.RenderThreadID )
      RenderThreadID = v3->IDefaults.RenderThreadID;
    v10 = RenderThreadID;
    if ( RenderThreadID == Concurrency::details::platform::GetCurrentThreadId() || !v10 )
    {
      ((void (__fastcall *)(Scaleform::Render::DrawableImage *, __int64))this->~RefCountImplCore)(this, 1i64);
    }
    else
    {
      v7 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
             Scaleform::Memory::pGlobalHeap,
             24i64);
      v8 = (Scaleform::Render::ThreadCommand *)v7;
      if ( v7 )
      {
        *(_QWORD *)(v7 + 16) = this;
        *(_QWORD *)v7 = &Scaleform::RefCountImplCore::`vftable';
        *(_QWORD *)v7 = &Scaleform::Render::DestroyDrawableImageThreadCommand::`vftable';
        *(_DWORD *)(v7 + 8) = 1;
      }
      else
      {
        v8 = 0i64;
      }
      this->pContext.pObject->pRTCommandQueue->PushThreadCommand(this->pContext.pObject->pRTCommandQueue, v8);
      if ( v8 )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v8);
    }
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

void __fastcall Scaleform::Render::DrawableImage::Scroll(Scaleform::Render::DrawableImage *this, int x, int y)
{
  unsigned int Height; // edi
  unsigned int Width; // ebx
  Scaleform::Render::DrawableImage_vtbl *v8; // rax
  Scaleform::Render::DrawableImage_vtbl *v9; // rax
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  Scaleform::Render::DrawableImage *v14; // rax
  Scaleform::Render::DrawableImage *v15; // rcx
  int v16; // ecx
  int v17; // er8
  int v18; // edx
  int v19; // ecx
  char v20[8]; // [rsp+20h] [rbp-50h] BYREF
  char v21[8]; // [rsp+28h] [rbp-48h] BYREF
  Scaleform::Render::DICommand v22; // [rsp+30h] [rbp-40h] BYREF
  Scaleform::Render::DrawableImage *v23; // [rsp+40h] [rbp-30h]
  __int64 v24; // [rsp+48h] [rbp-28h]
  int v25; // [rsp+50h] [rbp-20h]
  int v26; // [rsp+54h] [rbp-1Ch]
  int v27; // [rsp+58h] [rbp-18h]
  int v28; // [rsp+5Ch] [rbp-14h]
  int v29; // [rsp+60h] [rbp-10h]
  int v30; // [rsp+64h] [rbp-Ch]

  Height = this->GetSize(this, v20)->Height;
  Width = this->GetSize(this, v21)->Width;
  v8 = this->__vftable;
  v22.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  v8->AddRef(this);
  v9 = this->__vftable;
  v22.pImage.pObject = this;
  v22.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_SourceRect::`vftable';
  v9->AddRef(this);
  v26 = Height;
  v24 = 0i64;
  pObject = this->pContext.pObject;
  v23 = this;
  v25 = Width;
  v27 = x;
  v28 = y;
  v22.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_Scroll::`vftable';
  v29 = x;
  v30 = y;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v22, this) )
  {
    v12 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
            this->pQueue.pObject,
            0x38u,
            &this->pQueue.pObject->QueueLock);
    v13 = v12;
    if ( v12 )
    {
      *v12 = &Scaleform::Render::DICommand::`vftable';
      v14 = v22.pImage.pObject;
      if ( v22.pImage.pObject )
      {
        v22.pImage.pObject->AddRef(v22.pImage.pObject);
        v14 = v22.pImage.pObject;
      }
      v13[1] = v14;
      *v13 = &Scaleform::Render::DICommand_SourceRect::`vftable';
      v15 = v23;
      if ( v23 )
      {
        v23->AddRef(v23);
        v15 = v23;
      }
      v13[2] = v15;
      v16 = HIDWORD(v24);
      v17 = v26;
      v18 = v25;
      *((_DWORD *)v13 + 6) = v24;
      *((_DWORD *)v13 + 7) = v16;
      *((_DWORD *)v13 + 8) = v18;
      *((_DWORD *)v13 + 9) = v17;
      v19 = v28;
      *((_DWORD *)v13 + 10) = v27;
      *((_DWORD *)v13 + 11) = v19;
      *v13 = &Scaleform::Render::DICommand_Scroll::`vftable';
      *((_DWORD *)v13 + 12) = v29;
      *((_DWORD *)v13 + 13) = v30;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v22.GetRenderCaps)(&v22) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  if ( v23 )
    v23->Release(v23);
  v22.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v22.pImage.pObject )
    v22.pImage.pObject->Release(v22.pImage.pObject);
}

void __fastcall Scaleform::Render::DrawableImage::SetPixel32(
        Scaleform::Render::DrawableImage *this,
        int x,
        int y,
        int *c)
{
  int v5; // eax
  int v6; // ecx
  Scaleform::Render::DrawableImage_vtbl *v9; // rax
  int v10; // ebx
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  Scaleform::Render::DrawableImage *v15; // rax
  Scaleform::Render::DICommand v16; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+30h] [rbp-28h]
  int v18; // [rsp+34h] [rbp-24h]
  int v19; // [rsp+38h] [rbp-20h]
  __int16 v20; // [rsp+3Ch] [rbp-1Ch]

  v5 = this->ISize.Width - 1;
  v6 = this->ISize.Height - 1;
  if ( x <= v5 && x >= 0 && y <= v6 && y >= 0 )
  {
    v9 = this->__vftable;
    v10 = *c;
    v16.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
    v9->AddRef(this);
    pObject = this->pContext.pObject;
    v16.pImage.pObject = this;
    v16.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_SetPixel32::`vftable';
    v17 = x;
    v18 = y;
    v19 = v10;
    v20 = 1;
    if ( pObject )
    {
      pControlContext = pObject->pControlContext;
      if ( pControlContext )
        pControlContext->DIChangesRequired = 1;
    }
    if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v16, this) )
    {
      v13 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
              this->pQueue.pObject,
              0x20u,
              &this->pQueue.pObject->QueueLock);
      v14 = v13;
      if ( v13 )
      {
        *v13 = &Scaleform::Render::DICommand::`vftable';
        v15 = v16.pImage.pObject;
        if ( v16.pImage.pObject )
        {
          v16.pImage.pObject->AddRef(v16.pImage.pObject);
          v15 = v16.pImage.pObject;
        }
        v14[1] = v15;
        *v14 = &Scaleform::Render::DICommand_SetPixel32::`vftable';
        *((_DWORD *)v14 + 4) = v17;
        *((_DWORD *)v14 + 5) = v18;
        *((_DWORD *)v14 + 6) = v19;
        *((_WORD *)v14 + 14) = v20;
      }
      if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v16.GetRenderCaps)(&v16) & 0x10) != 0 )
        Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
    }
    v16.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
    if ( v16.pImage.pObject )
      v16.pImage.pObject->Release(v16.pImage.pObject);
  }
}

void __fastcall Scaleform::Render::DrawableImage::SetPixel(
        Scaleform::Render::DrawableImage *this,
        int x,
        int y,
        int *c)
{
  int v5; // eax
  int v6; // ecx
  Scaleform::Render::DrawableImage_vtbl *v9; // rax
  int v10; // ebx
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  Scaleform::Render::DrawableImage *v15; // rax
  Scaleform::Render::DICommand v16; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+30h] [rbp-28h]
  int v18; // [rsp+34h] [rbp-24h]
  int v19; // [rsp+38h] [rbp-20h]
  __int16 v20; // [rsp+3Ch] [rbp-1Ch]

  v5 = this->ISize.Width - 1;
  v6 = this->ISize.Height - 1;
  if ( x <= v5 && x >= 0 && y <= v6 && y >= 0 )
  {
    v9 = this->__vftable;
    v10 = *c;
    v16.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
    v9->AddRef(this);
    pObject = this->pContext.pObject;
    v16.pImage.pObject = this;
    v16.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_SetPixel32::`vftable';
    v17 = x;
    v18 = y;
    v19 = v10;
    v20 = 0;
    if ( pObject )
    {
      pControlContext = pObject->pControlContext;
      if ( pControlContext )
        pControlContext->DIChangesRequired = 1;
    }
    if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v16, this) )
    {
      v13 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
              this->pQueue.pObject,
              0x20u,
              &this->pQueue.pObject->QueueLock);
      v14 = v13;
      if ( v13 )
      {
        *v13 = &Scaleform::Render::DICommand::`vftable';
        v15 = v16.pImage.pObject;
        if ( v16.pImage.pObject )
        {
          v16.pImage.pObject->AddRef(v16.pImage.pObject);
          v15 = v16.pImage.pObject;
        }
        v14[1] = v15;
        *v14 = &Scaleform::Render::DICommand_SetPixel32::`vftable';
        *((_DWORD *)v14 + 4) = v17;
        *((_DWORD *)v14 + 5) = v18;
        *((_DWORD *)v14 + 6) = v19;
        *((_WORD *)v14 + 14) = v20;
      }
      if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v16.GetRenderCaps)(&v16) & 0x10) != 0 )
        Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
    }
    v16.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
    if ( v16.pImage.pObject )
      v16.pImage.pObject->Release(v16.pImage.pObject);
  }
}

char __fastcall Scaleform::Render::DrawableImage::SetPixels(
        Scaleform::Render::DrawableImage *this,
        const Scaleform::Render::Rect<long> *inputRect,
        Scaleform::Render::DIPixelProvider *provider)
{
  signed int Height; // er15
  int y1; // er14
  int Width; // esi
  int y2; // eax
  int x2; // ecx
  int x1; // ebx
  Scaleform::Render::DrawableImage_vtbl *v11; // rax
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  Scaleform::Render::DrawableImage *v16; // rax
  int v17; // er8
  int v18; // edx
  int v19; // ecx
  char v20; // bl
  char v22; // [rsp+20h] [rbp-60h] BYREF
  int v23; // [rsp+28h] [rbp-58h]
  int v24; // [rsp+2Ch] [rbp-54h]
  int v25; // [rsp+30h] [rbp-50h]
  int v26; // [rsp+34h] [rbp-4Ch]
  Scaleform::Render::DICommand v27; // [rsp+40h] [rbp-40h] BYREF
  int v28; // [rsp+50h] [rbp-30h]
  int v29; // [rsp+54h] [rbp-2Ch]
  int v30; // [rsp+58h] [rbp-28h]
  int v31; // [rsp+5Ch] [rbp-24h]
  Scaleform::Render::DIPixelProvider *v32; // [rsp+60h] [rbp-20h]
  char *v33; // [rsp+68h] [rbp-18h]

  Height = this->ISize.Height;
  y1 = inputRect->y1;
  Width = this->ISize.Width;
  if ( Height < y1 )
    return 0;
  y2 = inputRect->y2;
  if ( y2 < 0 )
    return 0;
  x2 = inputRect->x2;
  if ( x2 < 0 )
    return 0;
  x1 = inputRect->x1;
  if ( Width < inputRect->x1 )
    return 0;
  v22 = 0;
  if ( x1 < 0 )
    x1 = 0;
  v27.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  v23 = x1;
  if ( Width > x2 )
    Width = x2;
  v25 = Width;
  if ( y1 < 0 )
    y1 = 0;
  v24 = y1;
  if ( Height > y2 )
    Height = y2;
  v11 = this->__vftable;
  v26 = Height;
  ((void (__fastcall *)(Scaleform::Render::DrawableImage *, _QWORD))v11->AddRef)(this, 0i64);
  v27.pImage.pObject = this;
  v27.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_SetPixels::`vftable';
  v33 = &v22;
  pObject = this->pContext.pObject;
  v28 = x1;
  v29 = y1;
  v30 = Width;
  v31 = Height;
  v32 = provider;
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v27, this) )
  {
    v14 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
            this->pQueue.pObject,
            0x30u,
            &this->pQueue.pObject->QueueLock);
    v15 = v14;
    if ( v14 )
    {
      *v14 = &Scaleform::Render::DICommand::`vftable';
      v16 = v27.pImage.pObject;
      if ( v27.pImage.pObject )
      {
        v27.pImage.pObject->AddRef(v27.pImage.pObject);
        v16 = v27.pImage.pObject;
      }
      v15[1] = v16;
      *v15 = &Scaleform::Render::DICommand_SetPixels::`vftable';
      v17 = v31;
      v18 = v30;
      v19 = v29;
      *((_DWORD *)v15 + 4) = v28;
      *((_DWORD *)v15 + 5) = v19;
      *((_DWORD *)v15 + 6) = v18;
      *((_DWORD *)v15 + 7) = v17;
      v15[4] = v32;
      v15[5] = v33;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v27.GetRenderCaps)(&v27) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  v20 = v22;
  v27.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v27.pImage.pObject )
    v27.pImage.pObject->Release(v27.pImage.pObject);
  return v20;
}

void __fastcall Scaleform::Render::DrawableImage::TextureLost(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::Image::TextureLossReason reason)
{
  Scaleform::Render::RenderTarget *pObject; // rcx

  if ( reason == TLR_DeviceLost )
  {
    pObject = this->pRT.pObject;
    if ( pObject )
      pObject->Release(pObject);
    this->pRT.pObject = 0i64;
  }
}

void __fastcall Scaleform::Render::DrawableImage::Threshold(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::DrawableImage *source,
        const Scaleform::Render::Rect<long> *sourceRect,
        const Scaleform::Render::Point<long> *destPoint,
        Scaleform::Render::DrawableImage::OperationType op,
        unsigned int threshold,
        unsigned int color,
        unsigned int mask,
        bool copySource)
{
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  Scaleform::Render::DrawableImage *v17; // rax
  Scaleform::Render::DrawableImage *v18; // rcx
  int v19; // ecx
  int v20; // er8
  int v21; // edx
  int v22; // ecx
  Scaleform::Render::DICommand v23; // [rsp+20h] [rbp-60h] BYREF
  Scaleform::Render::DrawableImage *v24; // [rsp+30h] [rbp-50h]
  int x1; // [rsp+38h] [rbp-48h]
  int y1; // [rsp+3Ch] [rbp-44h]
  int x2; // [rsp+40h] [rbp-40h]
  int y2; // [rsp+44h] [rbp-3Ch]
  int x; // [rsp+48h] [rbp-38h]
  int y; // [rsp+4Ch] [rbp-34h]
  Scaleform::Render::DrawableImage::OperationType v31; // [rsp+50h] [rbp-30h]
  unsigned int v32; // [rsp+54h] [rbp-2Ch]
  unsigned int v33; // [rsp+58h] [rbp-28h]
  unsigned int v34; // [rsp+5Ch] [rbp-24h]
  bool v35; // [rsp+60h] [rbp-20h]

  v23.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( this )
    this->AddRef(this);
  v23.pImage.pObject = this;
  v23.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_SourceRect::`vftable';
  if ( source )
    source->AddRef(source);
  x1 = sourceRect->x1;
  y1 = sourceRect->y1;
  x2 = sourceRect->x2;
  y2 = sourceRect->y2;
  x = destPoint->x;
  y = destPoint->y;
  v31 = op;
  v32 = threshold;
  v33 = color;
  v34 = mask;
  v35 = copySource;
  pObject = this->pContext.pObject;
  v24 = source;
  v23.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_Threshold::`vftable';
  if ( pObject )
  {
    pControlContext = pObject->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v23, this) )
  {
    v15 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
            this->pQueue.pObject,
            0x48u,
            &this->pQueue.pObject->QueueLock);
    v16 = v15;
    if ( v15 )
    {
      *v15 = &Scaleform::Render::DICommand::`vftable';
      v17 = v23.pImage.pObject;
      if ( v23.pImage.pObject )
      {
        v23.pImage.pObject->AddRef(v23.pImage.pObject);
        v17 = v23.pImage.pObject;
      }
      v16[1] = v17;
      *v16 = &Scaleform::Render::DICommand_SourceRect::`vftable';
      v18 = v24;
      if ( v24 )
      {
        v24->AddRef(v24);
        v18 = v24;
      }
      v16[2] = v18;
      v19 = y1;
      v20 = y2;
      v21 = x2;
      *((_DWORD *)v16 + 6) = x1;
      *((_DWORD *)v16 + 7) = v19;
      *((_DWORD *)v16 + 8) = v21;
      *((_DWORD *)v16 + 9) = v20;
      v22 = y;
      *((_DWORD *)v16 + 10) = x;
      *((_DWORD *)v16 + 11) = v22;
      *v16 = &Scaleform::Render::DICommand_Threshold::`vftable';
      *((_DWORD *)v16 + 12) = v31;
      *((_DWORD *)v16 + 13) = v32;
      *((_DWORD *)v16 + 14) = v33;
      *((_DWORD *)v16 + 15) = v34;
      *((_BYTE *)v16 + 64) = v35;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v23.GetRenderCaps)(&v23) & 0x10) != 0 )
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
  }
  if ( v24 )
    v24->Release(v24);
  v23.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
  if ( v23.pImage.pObject )
    v23.pImage.pObject->Release(v23.pImage.pObject);
}

void __fastcall Scaleform::Render::DrawableImage::addToCPUModifiedList(Scaleform::Render::DrawableImage *this)
{
  Scaleform::Render::DICommandQueue *pObject; // rbx
  Scaleform::Render::DrawableImageContext *v3; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  Scaleform::Render::DICommandQueue *v5; // rsi
  Scaleform::Render::DrawableImage *v6; // rcx
  Scaleform::Render::DrawableImage *v7; // rcx
  Scaleform::Render::DICommandQueue *v8; // rsi
  Scaleform::Render::DrawableImage *v9; // rcx

  pObject = this->pQueue.pObject;
  Scaleform::Lock::DoLock(&pObject->QueueLock);
  v3 = this->pContext.pObject;
  if ( v3 )
  {
    pControlContext = v3->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( (this->DrawableImageState & 8) == 0 )
  {
    this->DrawableImageState |= 8u;
    v5 = this->pQueue.pObject;
    v6 = v5->pCPUModifiedImageList.pObject;
    if ( v6 )
      v6->AddRef(v6);
    v7 = this->pCPUModifiedNext.pObject;
    if ( v7 )
      v7->Release(v7);
    this->pCPUModifiedNext.pObject = v5->pCPUModifiedImageList.pObject;
    v8 = this->pQueue.pObject;
    this->AddRef(this);
    v9 = v8->pCPUModifiedImageList.pObject;
    if ( v9 )
      v9->Release(v9);
    v8->pCPUModifiedImageList.pObject = this;
  }
  Scaleform::Lock::Unlock(&pObject->QueueLock);
}

void __fastcall Scaleform::Render::DrawableImage::addToGPUModifiedListRT(Scaleform::Render::DrawableImage *this)
{
  Scaleform::Render::DICommandQueue *pObject; // rbx
  Scaleform::Render::DrawableImageContext *v3; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  Scaleform::Render::DICommandQueue *v5; // rsi
  Scaleform::Render::DrawableImage *v6; // rcx
  Scaleform::Render::DrawableImage *v7; // rcx
  Scaleform::Render::DICommandQueue *v8; // rsi
  Scaleform::Render::DrawableImage *v9; // rcx

  pObject = this->pQueue.pObject;
  Scaleform::Lock::DoLock(&pObject->QueueLock);
  v3 = this->pContext.pObject;
  if ( v3 )
  {
    pControlContext = v3->pControlContext;
    if ( pControlContext )
      pControlContext->DIChangesRequired = 1;
  }
  if ( (this->DrawableImageState & 0x10) == 0 )
  {
    this->DrawableImageState |= 0x10u;
    v5 = this->pQueue.pObject;
    v6 = v5->pGPUModifiedImageList.pObject;
    if ( v6 )
      v6->AddRef(v6);
    v7 = this->pGPUModifiedNext.pObject;
    if ( v7 )
      v7->Release(v7);
    this->pGPUModifiedNext.pObject = v5->pGPUModifiedImageList.pObject;
    v8 = this->pQueue.pObject;
    this->AddRef(this);
    v9 = v8->pGPUModifiedImageList.pObject;
    if ( v9 )
      v9->Release(v9);
    v8->pGPUModifiedImageList.pObject = this;
  }
  Scaleform::Lock::Unlock(&pObject->QueueLock);
}

bool __fastcall Scaleform::Render::DrawableImage::createTextureFromManager(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::HAL *phal,
        Scaleform::Render::TextureManager *tmanager)
{
  unsigned int Width; // eax
  unsigned int Height; // er9
  Scaleform::Render::TextureManager_vtbl *v5; // rbx
  Scaleform::Render::ImageFormat v9; // eax
  Scaleform::Render::DrawableImage *pObject; // rcx
  Scaleform::GFx::MovieImpl *v11; // rax
  Scaleform::Render::Texture *v12; // rbx
  Scaleform::Render::RenderTarget *v13; // rax
  Scaleform::Render::RenderTarget *v14; // rcx
  Scaleform::Render::RenderTarget *v15; // rbx
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+64h] [rbp+Ch]

  Width = this->ISize.Width;
  Height = this->ISize.Height;
  v5 = tmanager->Scaleform::RefCountBase<Scaleform::Render::TextureManager,72>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  if ( !Width )
    Width = 1;
  v17 = Width;
  if ( !Height )
    Height = 1;
  v18 = Height;
  v9 = v5->GetDrawableImageFormat(tmanager);
  if ( !v5->IsNonPow2Supported(tmanager, v9, 1152u) )
  {
    v17 = (((((((((v17 - 1) >> 1) | (v17 - 1)) >> 2) | ((v17 - 1) >> 1) | (v17 - 1)) >> 4) | ((((v17 - 1) >> 1) | (v17 - 1)) >> 2) | ((v17 - 1) >> 1) | (v17 - 1)) >> 8) | ((((((v17 - 1) >> 1) | (v17 - 1)) >> 2) | ((v17 - 1) >> 1) | (v17 - 1)) >> 4) | ((((v17 - 1) >> 1) | (v17 - 1)) >> 2) | ((v17 - 1) >> 1) | (v17 - 1) | ((((((((((v17 - 1) >> 1) | (v17 - 1)) >> 2) | ((v17 - 1) >> 1) | (v17 - 1)) >> 4) | ((((v17 - 1) >> 1) | (v17 - 1)) >> 2) | ((v17 - 1) >> 1) | (v17 - 1)) >> 8) | ((((((v17 - 1) >> 1) | (v17 - 1)) >> 2) | ((v17 - 1) >> 1) | (v17 - 1)) >> 4) | ((((v17 - 1) >> 1) | (v17 - 1)) >> 2) | ((v17 - 1) >> 1) | (v17 - 1)) >> 16))
        + 1;
    v18 = (((((((((v18 - 1) >> 1) | (v18 - 1)) >> 2) | ((v18 - 1) >> 1) | (v18 - 1)) >> 4) | ((((v18 - 1) >> 1) | (v18 - 1)) >> 2) | ((v18 - 1) >> 1) | (v18 - 1)) >> 8) | ((((((v18 - 1) >> 1) | (v18 - 1)) >> 2) | ((v18 - 1) >> 1) | (v18 - 1)) >> 4) | ((((v18 - 1) >> 1) | (v18 - 1)) >> 2) | ((v18 - 1) >> 1) | (v18 - 1) | ((((((((((v18 - 1) >> 1) | (v18 - 1)) >> 2) | ((v18 - 1) >> 1) | (v18 - 1)) >> 4) | ((((v18 - 1) >> 1) | (v18 - 1)) >> 2) | ((v18 - 1) >> 1) | (v18 - 1)) >> 8) | ((((((v18 - 1) >> 1) | (v18 - 1)) >> 2) | ((v18 - 1) >> 1) | (v18 - 1)) >> 4) | ((((v18 - 1) >> 1) | (v18 - 1)) >> 2) | ((v18 - 1) >> 1) | (v18 - 1)) >> 16))
        + 1;
  }
  pObject = this;
  if ( this->pDelegateImage.pObject )
    pObject = (Scaleform::Render::DrawableImage *)this->pDelegateImage.pObject;
  v11 = (Scaleform::GFx::MovieImpl *)tmanager->CreateTexture(
                                       tmanager,
                                       (unsigned int)this->Format,
                                       1i64,
                                       &v17,
                                       1152,
                                       pObject,
                                       0i64);
  v12 = (Scaleform::Render::Texture *)v11;
  if ( v11 )
  {
    Scaleform::GFx::KeyboardState::SetListener((Scaleform::GFx::ASMovieRootBase *)this, v11);
    v13 = phal->CreateRenderTarget(phal, v12, 0i64);
    v14 = this->pRT.pObject;
    v15 = v13;
    if ( v14 )
      v14->Release(v14);
    this->pRT.pObject = v15;
    LOBYTE(v11) = v15 != 0i64;
  }
  return (char)v11;
}

char __fastcall Scaleform::Render::DrawableImage::ensureRenderableRT(Scaleform::Render::DrawableImage *this)
{
  Scaleform::Render::DrawableImageContext *pObject; // rbx
  Scaleform::Render::HAL *pTextureManager; // rax
  Scaleform::Render::HAL *pHAL; // rax
  int RenderThreadID; // eax
  Scaleform::Render::ImageBase *v7; // rcx
  Scaleform::Render::Texture *v8; // r15
  Scaleform::Render::ImageBase *v9; // rbx
  Scaleform::Render::RenderTarget *v10; // rax
  Scaleform::Render::RenderTarget *v11; // rcx
  Scaleform::Render::RenderTarget *v12; // rdi
  Scaleform::Render::ImageBase *v13; // rcx
  unsigned int *v14; // rax
  Scaleform::Render::ImageBase *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  Scaleform::Render::ImageBase *v18; // rcx
  Scaleform::Render::HAL *v19; // rcx
  Scaleform::Render::DrawableImageContext *v20; // rdi
  Scaleform::Render::ImageFormat v21; // eax
  char v22; // di
  bool v23; // r14
  bool v24; // di
  Scaleform::Render::RenderTarget *v25; // rdx
  int v26; // eax
  Scaleform::Render::RenderTarget *v27; // rdx
  int v28; // eax
  Scaleform::Render::MatrixState *v29; // rax
  int *v30; // rax
  Scaleform::Render::RenderTarget *v31; // rdx
  int v32; // xmm1_4
  float v33; // xmm3_4
  Scaleform::Render::ImageBase_vtbl *v34; // rdi
  Scaleform::Render::ImageData *MappedData; // rax
  Scaleform::Render::HAL *v36[2]; // [rsp+30h] [rbp-69h] BYREF
  int v37; // [rsp+40h] [rbp-59h]
  Scaleform::Render::Size<unsigned long> size; // [rsp+48h] [rbp-51h] BYREF
  int v39; // [rsp+50h] [rbp-49h] BYREF
  int v40[3]; // [rsp+54h] [rbp-45h] BYREF
  __int64 v41; // [rsp+60h] [rbp-39h] BYREF
  int v42; // [rsp+68h] [rbp-31h]
  int v43; // [rsp+6Ch] [rbp-2Dh]
  Scaleform::Render::Size<unsigned long> v44; // [rsp+78h] [rbp-21h] BYREF
  __int128 v45; // [rsp+80h] [rbp-19h] BYREF
  __int128 v46; // [rsp+90h] [rbp-9h]
  int v47[8]; // [rsp+A0h] [rbp+7h] BYREF

  if ( this->pRT.pObject )
    return 1;
  pObject = this->pContext.pObject;
  *(_OWORD *)v36 = 0i64;
  v37 = 0;
  pObject->pRTCommandQueue->GetRenderInterfaces(pObject->pRTCommandQueue, (Scaleform::Render::Interfaces *)v36);
  pTextureManager = v36[0];
  if ( pObject->IDefaults.pTextureManager )
    pTextureManager = (Scaleform::Render::HAL *)pObject->IDefaults.pTextureManager;
  v36[0] = pTextureManager;
  pHAL = v36[1];
  if ( pObject->IDefaults.pHAL )
    pHAL = pObject->IDefaults.pHAL;
  v36[1] = pHAL;
  RenderThreadID = v37;
  if ( pObject->IDefaults.RenderThreadID )
    RenderThreadID = pObject->IDefaults.RenderThreadID;
  v7 = this->pDelegateImage.pObject;
  v37 = RenderThreadID;
  size = this->ISize;
  if ( v7 )
    v7->AddRef(v7);
  v8 = 0i64;
  v9 = this->pDelegateImage.pObject;
  if ( this->pTexture.Value )
  {
    v10 = v36[1]->CreateRenderTarget(v36[1], this->pTexture.Value, 0i64);
    v11 = this->pRT.pObject;
    v12 = v10;
    if ( v11 )
      v11->Release(v11);
    this->pRT.pObject = v12;
    if ( !v12 )
      goto LABEL_21;
  }
  else
  {
    v13 = this->pDelegateImage.pObject;
    if ( v13 )
    {
      v14 = (unsigned int *)v13->GetSize(v13, &v44);
      size.Width = *v14;
      v15 = this->pDelegateImage.pObject;
      size.Height = v14[1];
      v16 = (__int64)v15->GetAsImage(v15);
      v17 = (*(__int64 (__fastcall **)(__int64, Scaleform::Render::HAL *))(*(_QWORD *)v16 + 168i64))(v16, v36[0]);
      v18 = this->pDelegateImage.pObject;
      v8 = (Scaleform::Render::Texture *)v17;
      if ( v18 )
        v18->Release(v18);
      v19 = v36[0];
      this->pDelegateImage.pObject = 0i64;
      v20 = this->pContext.pObject;
      v21 = ((unsigned int (__fastcall *)(Scaleform::Render::HAL *))v19->BeginScene)(v19);
      Scaleform::Render::DrawableImage::initialize(this, v21, &size, v20);
    }
  }
  if ( this->pRT.pObject )
  {
    if ( v8 )
    {
      v23 = (v36[1]->HALState & 4) == 0;
      v24 = (v36[1]->HALState & 2) == 0;
      if ( (v36[1]->HALState & 2) == 0 )
        v36[1]->BeginFrame(v36[1]);
      if ( !v23 )
        v36[1]->EndScene(v36[1]);
      v36[1]->BeginScene(v36[1]);
      v25 = this->pRT.pObject;
      v26 = v25->ViewRect.y2 - v25->ViewRect.y1;
      v42 = v25->ViewRect.x2 - v25->ViewRect.x1;
      v39 = 0;
      v41 = 0i64;
      v43 = v26;
      ((void (__fastcall *)(Scaleform::Render::HAL *, Scaleform::Render::RenderTarget *, __int64, __int64 *, int *))v36[1]->PushRenderTarget)(
        v36[1],
        v25,
        2i64,
        &v41,
        &v39);
      v27 = this->pRT.pObject;
      v28 = v27->ViewRect.x2 - v27->ViewRect.x1;
      v40[1] = v27->ViewRect.y2 - v27->ViewRect.y1;
      v40[0] = v28;
      v29 = v36[1]->GetMatrices(v36[1]);
      v30 = (int *)v29->GetFullViewportMatrix(v29, (const Scaleform::Render::Size<int> *)v40);
      v31 = this->pRT.pObject;
      v47[0] = *v30;
      v47[1] = v30[1];
      v47[2] = v30[2];
      v47[3] = v30[3];
      v47[4] = v30[4];
      v47[5] = v30[5];
      v47[6] = v30[6];
      v32 = v30[7];
      v45 = _xmm;
      v47[7] = v32;
      v46 = _xmm;
      v33 = (float)(v31->ViewRect.y2 - v31->ViewRect.y1) / (float)(int)v31->BufferSize.Height;
      *(float *)&v45 = (float)(v31->ViewRect.x2 - v31->ViewRect.x1) / (float)(int)v31->BufferSize.Width;
      *((float *)&v46 + 1) = v33;
      *((float *)&v45 + 1) = *(float *)&v45 * 0.0;
      *((float *)&v45 + 2) = *(float *)&v45 * 0.0;
      *((float *)&v45 + 3) = *(float *)&v45 * 0.0;
      *(float *)&v46 = v33 * 0.0;
      *((float *)&v46 + 2) = v33 * 0.0;
      *((float *)&v46 + 3) = v33 * 0.0;
      Scaleform::Render::HAL::ApplyBlendMode(v36[1], Blend_OverwriteAll, 1, 1);
      v36[1]->DrawableCopyback(
        v36[1],
        v8,
        (const Scaleform::Render::Matrix2x4<float> *)v47,
        (const Scaleform::Render::Matrix2x4<float> *)&v45,
        -1u);
      v36[1]->PopRenderTarget(v36[1], 2u);
      Scaleform::Render::DrawableImage::updateStagingTargetRT(this);
      v36[1]->EndScene(v36[1]);
      if ( !v23 )
        v36[1]->BeginScene(v36[1]);
      if ( v24 )
        v36[1]->EndFrame(v36[1]);
    }
    else if ( v9 && Scaleform::Render::DrawableImage::mapTextureRT(this, 0) )
    {
      v34 = v9->__vftable;
      MappedData = Scaleform::Render::DrawableImage::getMappedData(this);
      v34->Decode(v9, MappedData, Scaleform::Render::ImageBase::CopyScanlineDefault, 0i64);
      Scaleform::Render::DrawableImage::unmapTextureRT(this);
    }
    v22 = 1;
    goto LABEL_35;
  }
LABEL_21:
  v22 = 0;
LABEL_35:
  if ( v9 )
    v9->Release(v9);
  return v22;
}

Scaleform::Render::ImageData *__fastcall Scaleform::Render::DrawableImage::getMappedData(
        Scaleform::Render::DrawableImage *this)
{
  Scaleform::Render::Fence *pObject; // rax
  Scaleform::Render::Fence *v3; // rax

  pObject = this->GPUFence.pObject;
  if ( pObject )
  {
    if ( pObject->HasData )
    {
      if ( pObject->Data )
      {
        if ( Scaleform::Render::FenceImpl::IsPending(pObject->Data, FenceType_Fragment) )
        {
          v3 = this->GPUFence.pObject;
          if ( v3 )
          {
            if ( v3->HasData && v3->Data )
              Scaleform::Render::FenceImpl::WaitFence(v3->Data, FenceType_Fragment);
          }
        }
      }
    }
  }
  return &this->MappedData;
}

void __fastcall Scaleform::Render::DrawableImage::initialize(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::ImageFormat format,
        const Scaleform::Render::Size<unsigned long> *size,
        Scaleform::Render::DrawableImageContext *dicontext)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::RenderTarget *v9; // rcx
  Scaleform::Render::DrawableImageContext *v10; // rbx
  Scaleform::Render::HAL *pTextureManager; // rax
  Scaleform::Render::HAL *v12; // rax
  int RenderThreadID; // eax
  unsigned int Height; // ecx
  Scaleform::Render::DrawableImage *v15; // rcx
  Scaleform::Render::DrawableImage *v16; // rcx
  Scaleform::RefCountVImpl *v17; // rcx
  Scaleform::RefCountVImpl *v18; // rcx
  Scaleform::Render::DrawableImage_vtbl *v19; // rax
  Scaleform::Render::DrawableImageContext *v20; // rax
  Scaleform::Render::ContextImpl::Context *pControlContext; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  Scaleform::Render::DrawableImage *v24; // rcx
  Scaleform::Render::DICommand v25; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::Render::HAL *phal[2]; // [rsp+30h] [rbp-38h] BYREF
  int v27; // [rsp+40h] [rbp-28h]

  if ( dicontext )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)dicontext);
  pObject = (Scaleform::RefCountVImpl *)this->pContext.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pContext.pObject = dicontext;
  v9 = this->pRT.pObject;
  if ( v9 )
    v9->Release(v9);
  this->pRT.pObject = 0i64;
  v10 = this->pContext.pObject;
  *(_OWORD *)phal = 0i64;
  v27 = 0;
  v10->pRTCommandQueue->GetRenderInterfaces(v10->pRTCommandQueue, (Scaleform::Render::Interfaces *)phal);
  pTextureManager = phal[0];
  if ( v10->IDefaults.pTextureManager )
    pTextureManager = (Scaleform::Render::HAL *)v10->IDefaults.pTextureManager;
  phal[0] = pTextureManager;
  v12 = phal[1];
  if ( v10->IDefaults.pHAL )
    v12 = v10->IDefaults.pHAL;
  phal[1] = v12;
  RenderThreadID = v27;
  if ( v10->IDefaults.RenderThreadID )
    RenderThreadID = v10->IDefaults.RenderThreadID;
  this->Format = format;
  Height = size->Height;
  v27 = RenderThreadID;
  this->ISize.Width = size->Width;
  this->ISize.Height = Height;
  v15 = this->pCPUModifiedNext.pObject;
  if ( v15 )
    v15->Release(v15);
  this->pCPUModifiedNext.pObject = 0i64;
  v16 = this->pGPUModifiedNext.pObject;
  if ( v16 )
    v16->Release(v16);
  this->pGPUModifiedNext.pObject = 0i64;
  v17 = (Scaleform::RefCountVImpl *)dicontext->Queue.pObject;
  if ( v17 )
    Scaleform::Render::RenderBuffer::AddRef(v17);
  v18 = (Scaleform::RefCountVImpl *)this->pQueue.pObject;
  if ( v18 )
    Scaleform::RefCountImpl::Release(v18);
  this->pQueue.pObject = dicontext->Queue.pObject;
  if ( !this->pDelegateImage.pObject )
  {
    if ( phal[0] && phal[0]->ShutdownHAL(phal[0]) )
    {
      Scaleform::Render::DrawableImage::createTextureFromManager(
        this,
        phal[1],
        (Scaleform::Render::TextureManager *)phal[0]);
    }
    else
    {
      v19 = this->__vftable;
      v25.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
      v19->AddRef(this);
      v20 = this->pContext.pObject;
      v25.pImage.pObject = this;
      v25.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand_CreateTexture::`vftable';
      if ( v20 )
      {
        pControlContext = v20->pControlContext;
        if ( pControlContext )
          pControlContext->DIChangesRequired = 1;
      }
      if ( !Scaleform::Render::DICommand::ExecuteSWOnAddCommand(&v25, this) )
      {
        v22 = Scaleform::Render::DICommandQueue::allocCommandFromPage(
                this->pQueue.pObject,
                0x10u,
                &this->pQueue.pObject->QueueLock);
        v23 = v22;
        if ( v22 )
        {
          *v22 = &Scaleform::Render::DICommand::`vftable';
          v24 = v25.pImage.pObject;
          if ( v25.pImage.pObject )
          {
            v25.pImage.pObject->AddRef(v25.pImage.pObject);
            v24 = v25.pImage.pObject;
          }
          v23[1] = v24;
          *v23 = &Scaleform::Render::DICommand_CreateTexture::`vftable';
        }
        if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))v25.GetRenderCaps)(&v25) & 0x10) != 0 )
          Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this->pQueue.pObject);
      }
      v25.__vftable = (Scaleform::Render::DICommand_vtbl *)&Scaleform::Render::DICommand::`vftable';
      if ( v25.pImage.pObject )
        v25.pImage.pObject->Release(v25.pImage.pObject);
    }
  }
}

bool __fastcall Scaleform::Render::DrawableImage::isMapped(Scaleform::Render::DrawableImage *this)
{
  return (this->DrawableImageState & 3) != 0;
}

_BOOL8 __fastcall Scaleform::Render::DrawableImage::mapTextureRT(Scaleform::Render::DrawableImage *this, bool readOnly)
{
  Scaleform::Render::DICommandQueue *pObject; // rbx
  bool v5; // di
  Scaleform::Render::DrawableImageContext *v6; // rax

  pObject = this->pQueue.pObject;
  Scaleform::Lock::DoLock(&pObject->QueueLock);
  if ( (this->DrawableImageState & 3) != 0 )
  {
    v5 = 1;
  }
  else
  {
    v6 = this->pContext.pObject;
    if ( !v6 || v6->DisallowTextureMapping )
      goto LABEL_14;
    if ( readOnly && Scaleform::Render::DrawableImage::MapImageSource(&this->MappedData, this->pDelegateImage.pObject) )
    {
      this->DrawableImageState |= 2u;
      v5 = (this->DrawableImageState & 3) != 0;
      goto LABEL_15;
    }
    if ( this->pDelegateImage.pObject && !Scaleform::Render::DrawableImage::ensureRenderableRT(this) )
    {
LABEL_14:
      v5 = 0;
      goto LABEL_15;
    }
    if ( this->pTexture.Value && this->pTexture.Value->Map(this->pTexture.Value, &this->MappedData, 0, 0) )
      this->DrawableImageState |= 3u;
    v5 = (this->DrawableImageState & 3) != 0;
  }
LABEL_15:
  Scaleform::Lock::Unlock(&pObject->QueueLock);
  return v5;
}

void __fastcall Scaleform::Render::DrawableImageContext::processTreeRootKillList(
        Scaleform::Render::DrawableImageContext *this)
{
  unsigned __int64 i; // rsi
  Scaleform::Render::TreeRoot *v3; // rcx
  unsigned __int64 Capacity; // rax

  if ( this->RContext )
  {
    Scaleform::Lock::DoLock(&this->TreeRootKillListLock);
    for ( i = 0i64; i < this->TreeRootKillList.Data.Size; ++i )
    {
      v3 = this->TreeRootKillList.Data.Data[i];
      if ( v3->RefCount-- == 1 )
        Scaleform::Render::ContextImpl::Entry::destroyHelper(v3);
    }
    if ( this->TreeRootKillList.Data.Size )
    {
      Capacity = this->TreeRootKillList.Data.Policy.Capacity;
      if ( (Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 )
      {
        if ( Capacity )
        {
          if ( this->TreeRootKillList.Data.Data )
          {
            ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
            this->TreeRootKillList.Data.Data = 0i64;
          }
          this->TreeRootKillList.Data.Policy.Capacity = 0i64;
        }
      }
    }
    this->TreeRootKillList.Data.Size = 0i64;
    Scaleform::Lock::Unlock(&this->TreeRootKillListLock);
  }
}

void __fastcall Scaleform::Render::DrawableImage::setViewProj3DHelper(
        Scaleform::Render::DrawableImage *this,
        Scaleform::Render::TreeNode *subtree,
        Scaleform::Render::TreeRoot *root)
{
  Scaleform::Render::TreeNode *i; // rbx
  __int64 v5; // r9
  const Scaleform::Render::State *State; // rax
  _OWORD *pData; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  const Scaleform::Render::State *v10; // rax
  _OWORD *v11; // rax
  __int128 v12; // xmm3
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  Scaleform::Render::Matrix3x4<float> mat3D; // [rsp+20h] [rbp-88h] BYREF
  Scaleform::Render::Matrix4x4<float> v16; // [rsp+50h] [rbp-58h] BYREF

  for ( i = subtree; i; i = (Scaleform::Render::TreeNode *)i->pParent )
  {
    v5 = *(_QWORD *)(((unsigned __int64)i & 0xFFFFFFFFFFFFF000ui64) + 0x20);
    if ( (*(_WORD *)(*(_QWORD *)(v5
                               + 8i64 * (unsigned int)((int)((_DWORD)i - ((unsigned int)i & 0xFFFFF000) - 56) / 56)
                               + 40)
                   + 10i64) & 0x1000) != 0 )
      break;
    if ( (*(_WORD *)(*(_QWORD *)(v5
                               + 8i64
                               * (unsigned int)((__int64)((__int64)&i[-1]
                                                        - ((unsigned __int64)i & 0xFFFFFFFFFFFFF000ui64))
                                              / 56)
                               + 40)
                   + 10i64) & 0x800) != 0 )
      break;
  }
  mat3D = Scaleform::Render::Matrix3x4<float>::Identity;
  v16 = Scaleform::Render::Matrix4x4<float>::Identity;
  if ( i )
  {
    State = Scaleform::Render::TreeNode::GetState(i, State_ViewMatrix3D);
    if ( State )
    {
      pData = State->pData;
      v8 = pData[2];
      v9 = pData[3];
      *(_OWORD *)&mat3D.M[0][0] = pData[1];
      *(_OWORD *)&mat3D.M[1][0] = v8;
      *(_OWORD *)&mat3D.M[2][0] = v9;
    }
    v10 = Scaleform::Render::TreeNode::GetState(i, State_ProjectionMatrix3D);
    if ( v10 )
    {
      v11 = v10->pData;
      v12 = v11[2];
      v13 = v11[3];
      v14 = v11[4];
      *(_OWORD *)&v16.M[0][0] = v11[1];
      *(_OWORD *)&v16.M[1][0] = v12;
      *(_OWORD *)&v16.M[2][0] = v13;
      *(_OWORD *)&v16.M[3][0] = v14;
    }
  }
  Scaleform::Render::TreeNode::SetViewMatrix3D(root, &mat3D);
  Scaleform::Render::TreeNode::SetProjectionMatrix3D(root, &v16);
}

void __fastcall Scaleform::Render::DrawableImage::unmapTextureRT(Scaleform::Render::DrawableImage *this)
{
  Scaleform::Render::DICommandQueue *pObject; // rbx

  pObject = this->pQueue.pObject;
  Scaleform::Lock::DoLock(&pObject->QueueLock);
  if ( (this->DrawableImageState & 3) != 0 && this->pTexture.Value )
  {
    this->pTexture.Value->Unmap(this->pTexture.Value);
    this->DrawableImageState &= 0xFFFFFFFC;
  }
  Scaleform::Lock::Unlock(&pObject->QueueLock);
}

void __fastcall Scaleform::Render::DrawableImage::updateRenderTargetRT(Scaleform::Render::DrawableImage *this)
{
  Scaleform::Render::DICommandQueue *pObject; // rbx
  Scaleform::Render::RenderTarget *v3; // rax
  Scaleform::Render::DrawableImageContext *v4; // rbx
  Scaleform::Render::TextureManager *pTextureManager; // rax
  Scaleform::Render::HAL *pHAL; // rax
  int RenderThreadID; // eax
  Scaleform::Render::Texture *volatile Value; // rcx
  Scaleform::Render::RenderTarget *v9; // rdx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-18h]

  if ( this->pTexture.Value )
  {
    pObject = this->pQueue.pObject;
    Scaleform::Lock::DoLock(&pObject->QueueLock);
    if ( (this->DrawableImageState & 3) != 0 && this->pTexture.Value )
    {
      this->pTexture.Value->Unmap(this->pTexture.Value);
      this->DrawableImageState &= 0xFFFFFFFC;
    }
    Scaleform::Lock::Unlock(&pObject->QueueLock);
    v3 = this->pRT.pObject;
    if ( v3 && v3->pRenderTargetData )
    {
      v4 = this->pContext.pObject;
      v11 = 0;
      v10 = 0i64;
      v4->pRTCommandQueue->GetRenderInterfaces(v4->pRTCommandQueue, (Scaleform::Render::Interfaces *)&v10);
      pTextureManager = (Scaleform::Render::TextureManager *)v10;
      if ( v4->IDefaults.pTextureManager )
        pTextureManager = v4->IDefaults.pTextureManager;
      *(_QWORD *)&v10 = pTextureManager;
      pHAL = (Scaleform::Render::HAL *)*((_QWORD *)&v10 + 1);
      if ( v4->IDefaults.pHAL )
        pHAL = v4->IDefaults.pHAL;
      *((_QWORD *)&v10 + 1) = pHAL;
      RenderThreadID = v11;
      if ( v4->IDefaults.RenderThreadID )
        RenderThreadID = v4->IDefaults.RenderThreadID;
      Value = this->pTexture.Value;
      v9 = this->pRT.pObject;
      v11 = RenderThreadID;
      Value->UpdateRenderTargetData(Value, v9->pRenderTargetData, *((Scaleform::Render::HAL **)&v10 + 1));
    }
  }
}

void __fastcall Scaleform::Render::DrawableImage::updateStagingTargetRT(Scaleform::Render::DrawableImage *this)
{
  Scaleform::Render::DICommandQueue *pObject; // rbx
  Scaleform::Render::RenderTarget *v3; // rax
  Scaleform::Render::DrawableImageContext *v4; // rbx
  Scaleform::Render::TextureManager *pTextureManager; // rax
  Scaleform::Render::HAL *pHAL; // rax
  int RenderThreadID; // eax
  Scaleform::Render::Texture *volatile Value; // rcx
  Scaleform::Render::RenderTarget *v9; // rdx
  Scaleform::Render::RenderSync *v10; // rax
  Scaleform::Render::Fence *inserted; // rax
  Scaleform::Render::Fence *v12; // rbx
  Scaleform::Render::Fence *v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+30h] [rbp-18h]

  if ( this->pTexture.Value )
  {
    pObject = this->pQueue.pObject;
    Scaleform::Lock::DoLock(&pObject->QueueLock);
    if ( (this->DrawableImageState & 3) != 0 && this->pTexture.Value )
    {
      this->pTexture.Value->Unmap(this->pTexture.Value);
      this->DrawableImageState &= 0xFFFFFFFC;
    }
    Scaleform::Lock::Unlock(&pObject->QueueLock);
    v3 = this->pRT.pObject;
    if ( v3 && v3->pRenderTargetData )
    {
      v4 = this->pContext.pObject;
      v15 = 0;
      v14 = 0i64;
      v4->pRTCommandQueue->GetRenderInterfaces(v4->pRTCommandQueue, (Scaleform::Render::Interfaces *)&v14);
      pTextureManager = (Scaleform::Render::TextureManager *)v14;
      if ( v4->IDefaults.pTextureManager )
        pTextureManager = v4->IDefaults.pTextureManager;
      *(_QWORD *)&v14 = pTextureManager;
      pHAL = (Scaleform::Render::HAL *)*((_QWORD *)&v14 + 1);
      if ( v4->IDefaults.pHAL )
        pHAL = v4->IDefaults.pHAL;
      *((_QWORD *)&v14 + 1) = pHAL;
      RenderThreadID = v15;
      if ( v4->IDefaults.RenderThreadID )
        RenderThreadID = v4->IDefaults.RenderThreadID;
      Value = this->pTexture.Value;
      v9 = this->pRT.pObject;
      v15 = RenderThreadID;
      Value->UpdateStagingData(Value, v9->pRenderTargetData);
      if ( (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 208i64))(*((_QWORD *)&v14 + 1)) )
      {
        v10 = (Scaleform::Render::RenderSync *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 208i64))(*((_QWORD *)&v14 + 1));
        inserted = Scaleform::Render::RenderSync::InsertFence(v10);
        v12 = inserted;
        if ( inserted )
          ++inserted->RefCount;
        v13 = this->GPUFence.pObject;
        if ( v13 )
          Scaleform::Render::Fence::Release(v13);
        this->GPUFence.pObject = v12;
      }
    }
  }
}

