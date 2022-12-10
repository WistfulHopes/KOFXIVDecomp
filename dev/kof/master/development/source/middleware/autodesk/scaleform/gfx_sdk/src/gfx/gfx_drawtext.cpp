#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"

class Scaleform::NewOverrideBase<325>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 325,
	};
public:
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
};
class Scaleform::GFx::DrawTextManagerImpl :
	Scaleform::NewOverrideBase<325>
{
public:
	Scaleform::Ptr<Scaleform::Render::TreeRoot> pRootNode; // 0x0
	Scaleform::Ptr<Scaleform::GFx::StateBagImpl> pStateBag; // 0x8
	Scaleform::Ptr<Scaleform::GFx::MovieDef> pMovieDef; // 0x10
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> pTextAllocator; // 0x18
	Scaleform::Ptr<Scaleform::GFx::FontManager> pFontManager; // 0x20
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> pFontStates; // 0x28
	Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> pWeakLib; // 0x30
	Scaleform::GFx::DrawTextManager::TextParams DefaultTextParams; // 0x38
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl> pLoaderImpl; // 0x60
	enum <unnamed-enum-RTFlags_BeginDisplayInvoked>
	{
		RTFlags_BeginDisplayInvoked = 1,
	};
	unsigned char RTFlags; // 0x68
	Scaleform::Render::ContextImpl::Context RenderContext; // 0x70
	Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> DispHandle; // 0x188
	DrawTextManagerImpl();
	~DrawTextManagerImpl();
	void ShutdownRendering(bool);
	bool IsShutdownRenderingComplete();
};
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
class Scaleform::Ptr<Scaleform::GFx::FontManager>
{
protected:
	Scaleform::GFx::FontManager * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FontManager>(const Scaleform::Ptr<Scaleform::GFx::FontManager> &);
	Ptr<Scaleform::GFx::FontManager>(Scaleform::GFx::FontManager *);
	Ptr<Scaleform::GFx::FontManager>(Scaleform::Ptr<Scaleform::GFx::FontManager> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FontManager>(Scaleform::Pickable<Scaleform::GFx::FontManager>);
	Ptr<Scaleform::GFx::FontManager>(Scaleform::GFx::FontManager &);
	Ptr<Scaleform::GFx::FontManager>();
	~Ptr<Scaleform::GFx::FontManager>();
	bool operator==(Scaleform::GFx::FontManager *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FontManager> &);
	bool operator!=(Scaleform::GFx::FontManager *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FontManager> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FontManager> &);
	Scaleform::Ptr<Scaleform::GFx::FontManager> & operator=(Scaleform::Pickable<Scaleform::GFx::FontManager>);
	const Scaleform::Ptr<Scaleform::GFx::FontManager> & operator=(Scaleform::GFx::FontManager &);
	const Scaleform::Ptr<Scaleform::GFx::FontManager> & operator=(Scaleform::GFx::FontManager *);
	const Scaleform::Ptr<Scaleform::GFx::FontManager> & operator=(const Scaleform::Ptr<Scaleform::GFx::FontManager> &);
	Scaleform::Ptr<Scaleform::GFx::FontManager> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FontManager>);
	Scaleform::Ptr<Scaleform::GFx::FontManager> & SetPtr(Scaleform::GFx::FontManager &);
	Scaleform::Ptr<Scaleform::GFx::FontManager> & SetPtr(Scaleform::GFx::FontManager *);
	Scaleform::Ptr<Scaleform::GFx::FontManager> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FontManager> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FontManager * & GetRawRef();
	Scaleform::GFx::FontManager * GetPtr();
	Scaleform::GFx::FontManager & operator*();
	Scaleform::GFx::FontManager * operator->();
	Scaleform::GFx::FontManager * operator class Scaleform::GFx::FontManager *();
	Scaleform::Ptr<Scaleform::GFx::FontManager> & Pick(Scaleform::GFx::FontManager *);
	Scaleform::Ptr<Scaleform::GFx::FontManager> & Pick(Scaleform::Pickable<Scaleform::GFx::FontManager>);
	Scaleform::Ptr<Scaleform::GFx::FontManager> & Pick(Scaleform::Ptr<Scaleform::GFx::FontManager> &);
};
class Scaleform::Ptr<Scaleform::GFx::FontManagerStates>
{
protected:
	Scaleform::GFx::FontManagerStates * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FontManagerStates>(const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> &);
	Ptr<Scaleform::GFx::FontManagerStates>(Scaleform::GFx::FontManagerStates *);
	Ptr<Scaleform::GFx::FontManagerStates>(Scaleform::Ptr<Scaleform::GFx::FontManagerStates> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FontManagerStates>(Scaleform::Pickable<Scaleform::GFx::FontManagerStates>);
	Ptr<Scaleform::GFx::FontManagerStates>(Scaleform::GFx::FontManagerStates &);
	Ptr<Scaleform::GFx::FontManagerStates>();
	~Ptr<Scaleform::GFx::FontManagerStates>();
	bool operator==(Scaleform::GFx::FontManagerStates *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> &);
	bool operator!=(Scaleform::GFx::FontManagerStates *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> &);
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & operator=(Scaleform::Pickable<Scaleform::GFx::FontManagerStates>);
	const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & operator=(Scaleform::GFx::FontManagerStates &);
	const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & operator=(Scaleform::GFx::FontManagerStates *);
	const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & operator=(const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> &);
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FontManagerStates>);
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & SetPtr(Scaleform::GFx::FontManagerStates &);
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & SetPtr(Scaleform::GFx::FontManagerStates *);
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FontManagerStates * & GetRawRef();
	Scaleform::GFx::FontManagerStates * GetPtr();
	Scaleform::GFx::FontManagerStates & operator*();
	Scaleform::GFx::FontManagerStates * operator->();
	Scaleform::GFx::FontManagerStates * operator class Scaleform::GFx::FontManagerStates *();
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & Pick(Scaleform::GFx::FontManagerStates *);
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & Pick(Scaleform::Pickable<Scaleform::GFx::FontManagerStates>);
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & Pick(Scaleform::Ptr<Scaleform::GFx::FontManagerStates> &);
};
Scaleform::GFx::DrawTextManagerImpl::DrawTextManagerImpl(); // 0x1402F0FE0
Scaleform::GFx::DrawTextManagerImpl::~DrawTextManagerImpl(); // 0x1402F12F0
class Scaleform::GFx::DrawTextImpl :
	Scaleform::GFx::DrawText
{
public:
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> pDrawTextCtxt; // 0x10
	Scaleform::Ptr<Scaleform::Render::TreeText> pTextNode; // 0x18
	Scaleform::MemoryHeap * pHeap; // 0x20
	DrawTextImpl(const Scaleform::GFx::DrawTextImpl &);
	DrawTextImpl(Scaleform::GFx::DrawTextManager *);
	virtual ~DrawTextImpl();
	virtual void SetText(const Scaleform::String &);
	virtual void SetText(const wchar_t *, unsigned long long);
	virtual void SetText(const char *, unsigned long long);
	virtual Scaleform::String GetText();
	virtual void SetHtmlText(const Scaleform::String &);
	virtual void SetHtmlText(const wchar_t *, unsigned long long);
	virtual void SetHtmlText(const char *, unsigned long long);
	virtual Scaleform::String GetHtmlText();
	virtual void SetRect(const Scaleform::Render::Rect<float> &);
	virtual Scaleform::Render::Rect<float> GetRect();
	virtual void SetMatrix(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::Render::Matrix2x4<float> GetMatrix();
	virtual void SetCxform(const Scaleform::Render::Cxform &);
	virtual const Scaleform::Render::Cxform & GetCxform();
	virtual void SetColor(Scaleform::Render::Color, unsigned long long, unsigned long long);
	virtual void SetFont(const char *, unsigned long long, unsigned long long);
	virtual void SetFontSize(float, unsigned long long, unsigned long long);
	virtual void SetLetterSpacing(float, unsigned long long, unsigned long long);
	virtual void SetFontStyle(Scaleform::GFx::DrawText::FontStyle, unsigned long long, unsigned long long);
	virtual void SetUnderline(bool, unsigned long long, unsigned long long);
	virtual void SetMultiline(bool);
	virtual bool IsMultiline();
	virtual void SetWordWrap(bool);
	virtual bool IsWordWrap();
	virtual void SetAlignment(Scaleform::GFx::DrawText::Alignment);
	virtual Scaleform::GFx::DrawText::Alignment GetAlignment();
	virtual void SetVAlignment(Scaleform::GFx::DrawText::VAlignment);
	virtual Scaleform::GFx::DrawText::VAlignment GetVAlignment();
	virtual void SetBorderColor(const Scaleform::Render::Color &);
	virtual Scaleform::Render::Color GetBorderColor();
	virtual void SetBackgroundColor(const Scaleform::Render::Color &);
	virtual Scaleform::Render::Color GetBackgroundColor();
	virtual void SetAAMode(Scaleform::GFx::DrawText::AAMode);
	virtual Scaleform::GFx::DrawText::AAMode GetAAMode();
	virtual void SetFilters(const Scaleform::GFx::DrawText::Filter *, unsigned long long);
	virtual void ClearFilters();
	virtual void SetDepth(unsigned long);
	virtual unsigned long GetDepth();
	virtual void SetVisible(bool);
	virtual bool IsVisible();
	virtual Scaleform::Render::Text::DocView * GetDocView();
	static void ProcessImageTags(Scaleform::Render::Text::DocView *, const Scaleform::GFx::DrawTextManager *, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> &);
	Scaleform::GFx::DrawTextImpl & operator=(const Scaleform::GFx::DrawTextImpl &);
};
class Scaleform::Ptr<Scaleform::GFx::DrawTextManager>
{
protected:
	Scaleform::GFx::DrawTextManager * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::DrawTextManager>(const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> &);
	Ptr<Scaleform::GFx::DrawTextManager>(Scaleform::GFx::DrawTextManager *);
	Ptr<Scaleform::GFx::DrawTextManager>(Scaleform::Ptr<Scaleform::GFx::DrawTextManager> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::DrawTextManager>(Scaleform::Pickable<Scaleform::GFx::DrawTextManager>);
	Ptr<Scaleform::GFx::DrawTextManager>(Scaleform::GFx::DrawTextManager &);
	Ptr<Scaleform::GFx::DrawTextManager>();
	~Ptr<Scaleform::GFx::DrawTextManager>();
	bool operator==(Scaleform::GFx::DrawTextManager *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> &);
	bool operator!=(Scaleform::GFx::DrawTextManager *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> &);
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & operator=(Scaleform::Pickable<Scaleform::GFx::DrawTextManager>);
	const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & operator=(Scaleform::GFx::DrawTextManager &);
	const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & operator=(Scaleform::GFx::DrawTextManager *);
	const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & operator=(const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> &);
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & SetPtr(Scaleform::Pickable<Scaleform::GFx::DrawTextManager>);
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & SetPtr(Scaleform::GFx::DrawTextManager &);
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & SetPtr(Scaleform::GFx::DrawTextManager *);
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::DrawTextManager * & GetRawRef();
	Scaleform::GFx::DrawTextManager * GetPtr();
	Scaleform::GFx::DrawTextManager & operator*();
	Scaleform::GFx::DrawTextManager * operator->();
	Scaleform::GFx::DrawTextManager * operator class Scaleform::GFx::DrawTextManager *();
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & Pick(Scaleform::GFx::DrawTextManager *);
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & Pick(Scaleform::Pickable<Scaleform::GFx::DrawTextManager>);
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & Pick(Scaleform::Ptr<Scaleform::GFx::DrawTextManager> &);
};
class Scaleform::Ptr<Scaleform::Render::TreeText>
{
protected:
	Scaleform::Render::TreeText * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TreeText>(const Scaleform::Ptr<Scaleform::Render::TreeText> &);
	Ptr<Scaleform::Render::TreeText>(Scaleform::Render::TreeText *);
	Ptr<Scaleform::Render::TreeText>(Scaleform::Ptr<Scaleform::Render::TreeText> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TreeText>(Scaleform::Pickable<Scaleform::Render::TreeText>);
	Ptr<Scaleform::Render::TreeText>(Scaleform::Render::TreeText &);
	Ptr<Scaleform::Render::TreeText>();
	~Ptr<Scaleform::Render::TreeText>();
	bool operator==(Scaleform::Render::TreeText *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TreeText> &);
	bool operator!=(Scaleform::Render::TreeText *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TreeText> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TreeText> &);
	Scaleform::Ptr<Scaleform::Render::TreeText> & operator=(Scaleform::Pickable<Scaleform::Render::TreeText>);
	const Scaleform::Ptr<Scaleform::Render::TreeText> & operator=(Scaleform::Render::TreeText &);
	const Scaleform::Ptr<Scaleform::Render::TreeText> & operator=(Scaleform::Render::TreeText *);
	const Scaleform::Ptr<Scaleform::Render::TreeText> & operator=(const Scaleform::Ptr<Scaleform::Render::TreeText> &);
	Scaleform::Ptr<Scaleform::Render::TreeText> & SetPtr(Scaleform::Pickable<Scaleform::Render::TreeText>);
	Scaleform::Ptr<Scaleform::Render::TreeText> & SetPtr(Scaleform::Render::TreeText &);
	Scaleform::Ptr<Scaleform::Render::TreeText> & SetPtr(Scaleform::Render::TreeText *);
	Scaleform::Ptr<Scaleform::Render::TreeText> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TreeText> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TreeText * & GetRawRef();
	Scaleform::Render::TreeText * GetPtr();
	Scaleform::Render::TreeText & operator*();
	Scaleform::Render::TreeText * operator->();
	Scaleform::Render::TreeText * operator class Scaleform::Render::TreeText *();
	Scaleform::Ptr<Scaleform::Render::TreeText> & Pick(Scaleform::Render::TreeText *);
	Scaleform::Ptr<Scaleform::Render::TreeText> & Pick(Scaleform::Pickable<Scaleform::Render::TreeText>);
	Scaleform::Ptr<Scaleform::Render::TreeText> & Pick(Scaleform::Ptr<Scaleform::Render::TreeText> &);
};
void Scaleform::GFx::DrawTextImpl::SetText(const char * putf8Str, unsigned long long lengthInBytes); // 0x1402F2A70
void Scaleform::GFx::DrawTextImpl::SetText(const wchar_t * pstr, unsigned long long lengthInChars); // 0x1402F2AB0
void Scaleform::GFx::DrawTextImpl::SetText(const Scaleform::String & str); // 0x1402F2A20
Scaleform::String Scaleform::GFx::DrawTextImpl::GetText(); // 0x1402F1DD0
void Scaleform::GFx::DrawTextImpl::SetHtmlText(const char * putf8Str, unsigned long long lengthInBytes); // 0x1402F27B0
void Scaleform::GFx::DrawTextImpl::SetHtmlText(const wchar_t * pstr, unsigned long long lengthInChars); // 0x1402F2860
void Scaleform::GFx::DrawTextImpl::SetHtmlText(const Scaleform::String & str); // 0x1402F26E0
Scaleform::String Scaleform::GFx::DrawTextImpl::GetHtmlText(); // 0x1402F1C90
void Scaleform::GFx::DrawTextImpl::SetRect(const Scaleform::Render::Rect<float> & viewRect); // 0x1402F29D0
Scaleform::Render::Rect<float> Scaleform::GFx::DrawTextImpl::GetRect(); // 0x1402F1D60
void Scaleform::GFx::DrawTextImpl::SetMatrix(const Scaleform::Render::Matrix2x4<float> & matrix); // 0x1402F2920
Scaleform::Render::Matrix2x4<float> Scaleform::GFx::DrawTextImpl::GetMatrix(); // 0x1402F1CB0
void Scaleform::GFx::DrawTextImpl::SetCxform(const Scaleform::Render::Cxform & cx); // 0x1402F2530
const Scaleform::Render::Cxform & Scaleform::GFx::DrawTextImpl::GetCxform(); // 0x1402F1B20
void Scaleform::GFx::DrawTextImpl::SetColor(Scaleform::Render::Color c, unsigned long long startPos, unsigned long long endPos); // 0x1402F2510
void Scaleform::GFx::DrawTextImpl::SetFont(const char * pfontName, unsigned long long startPos, unsigned long long endPos); // 0x1402F26B0
void Scaleform::GFx::DrawTextImpl::SetFontSize(float fontSize, unsigned long long startPos, unsigned long long endPos); // 0x1402F26C0
void Scaleform::GFx::DrawTextImpl::SetLetterSpacing(float letterSpacing, unsigned long long startPos, unsigned long long endPos); // 0x1402F2910
void Scaleform::GFx::DrawTextImpl::SetFontStyle(Scaleform::GFx::DrawText::FontStyle fontStyle, unsigned long long startPos, unsigned long long endPos); // 0x1402F26D0
void Scaleform::GFx::DrawTextImpl::SetUnderline(bool underline, unsigned long long startPos, unsigned long long endPos); // 0x1402F2D10
void Scaleform::GFx::DrawTextImpl::SetMultiline(bool multiline); // 0x1402F29C0
bool Scaleform::GFx::DrawTextImpl::IsMultiline(); // 0x1402F1E00
void Scaleform::GFx::DrawTextImpl::SetWordWrap(bool wordWrap); // 0x1402F2DC0
bool Scaleform::GFx::DrawTextImpl::IsWordWrap(); // 0x1402F1E60
void Scaleform::GFx::DrawTextImpl::SetAlignment(Scaleform::GFx::DrawText::Alignment a); // 0x1402F24D0
Scaleform::GFx::DrawText::Alignment Scaleform::GFx::DrawTextImpl::GetAlignment(); // 0x1402F1AD0
void Scaleform::GFx::DrawTextImpl::SetVAlignment(Scaleform::GFx::DrawText::VAlignment a); // 0x1402F2D20
Scaleform::GFx::DrawText::VAlignment Scaleform::GFx::DrawTextImpl::GetVAlignment(); // 0x1402F1DF0
void Scaleform::GFx::DrawTextImpl::SetBorderColor(const Scaleform::Render::Color & borderColor); // 0x1402F24F0
Scaleform::Render::Color Scaleform::GFx::DrawTextImpl::GetBorderColor(); // 0x1402F1B00
void Scaleform::GFx::DrawTextImpl::SetBackgroundColor(const Scaleform::Render::Color & bkgColor); // 0x1402F24E0
Scaleform::Render::Color Scaleform::GFx::DrawTextImpl::GetBackgroundColor(); // 0x1402F1AE0
void Scaleform::GFx::DrawTextImpl::SetAAMode(Scaleform::GFx::DrawText::AAMode aa); // 0x1402F24C0
Scaleform::GFx::DrawText::AAMode Scaleform::GFx::DrawTextImpl::GetAAMode(); // 0x1402F1AC0
void Scaleform::GFx::DrawTextImpl::SetFilters(const Scaleform::GFx::DrawText::Filter * filters, unsigned long long filtersCnt); // 0x1402F26A0
void Scaleform::GFx::DrawTextImpl::ClearFilters(); // 0x1402F16B0
void Scaleform::GFx::DrawTextImpl::SetDepth(unsigned long newDepth); // 0x1402F25C0
unsigned long Scaleform::GFx::DrawTextImpl::GetDepth(); // 0x1402F1B70
void Scaleform::GFx::DrawTextImpl::SetVisible(bool visible); // 0x1402F2DB0
bool Scaleform::GFx::DrawTextImpl::IsVisible(); // 0x1402F1E10
Scaleform::Render::Text::DocView * Scaleform::GFx::DrawTextImpl::GetDocView(); // 0x1402F1C80
Scaleform::GFx::DrawTextImpl::DrawTextImpl(Scaleform::GFx::DrawTextManager * pdtMgr); // 0x1402F08E0
Scaleform::GFx::DrawTextImpl::~DrawTextImpl(); // 0x1402F1210
void Scaleform::GFx::DrawTextImpl::ProcessImageTags(Scaleform::Render::Text::DocView * ptextDocView, const Scaleform::GFx::DrawTextManager * pmgr, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> & imageInfoArray); // 0x1402F1E70
Scaleform::GFx::DrawTextManager::DrawTextManager(Scaleform::GFx::Loader * ploader); // 0x1402F09D0
class Scaleform::Ptr<Scaleform::GFx::ResourceLib>
{
protected:
	Scaleform::GFx::ResourceLib * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ResourceLib>(const Scaleform::Ptr<Scaleform::GFx::ResourceLib> &);
	Ptr<Scaleform::GFx::ResourceLib>(Scaleform::GFx::ResourceLib *);
	Ptr<Scaleform::GFx::ResourceLib>(Scaleform::Ptr<Scaleform::GFx::ResourceLib> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ResourceLib>(Scaleform::Pickable<Scaleform::GFx::ResourceLib>);
	Ptr<Scaleform::GFx::ResourceLib>(Scaleform::GFx::ResourceLib &);
	Ptr<Scaleform::GFx::ResourceLib>();
	~Ptr<Scaleform::GFx::ResourceLib>();
	bool operator==(Scaleform::GFx::ResourceLib *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ResourceLib> &);
	bool operator!=(Scaleform::GFx::ResourceLib *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ResourceLib> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ResourceLib> &);
	Scaleform::Ptr<Scaleform::GFx::ResourceLib> & operator=(Scaleform::Pickable<Scaleform::GFx::ResourceLib>);
	const Scaleform::Ptr<Scaleform::GFx::ResourceLib> & operator=(Scaleform::GFx::ResourceLib &);
	const Scaleform::Ptr<Scaleform::GFx::ResourceLib> & operator=(Scaleform::GFx::ResourceLib *);
	const Scaleform::Ptr<Scaleform::GFx::ResourceLib> & operator=(const Scaleform::Ptr<Scaleform::GFx::ResourceLib> &);
	Scaleform::Ptr<Scaleform::GFx::ResourceLib> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ResourceLib>);
	Scaleform::Ptr<Scaleform::GFx::ResourceLib> & SetPtr(Scaleform::GFx::ResourceLib &);
	Scaleform::Ptr<Scaleform::GFx::ResourceLib> & SetPtr(Scaleform::GFx::ResourceLib *);
	Scaleform::Ptr<Scaleform::GFx::ResourceLib> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ResourceLib> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ResourceLib * & GetRawRef();
	Scaleform::GFx::ResourceLib * GetPtr();
	Scaleform::GFx::ResourceLib & operator*();
	Scaleform::GFx::ResourceLib * operator->();
	Scaleform::GFx::ResourceLib * operator class Scaleform::GFx::ResourceLib *();
	Scaleform::Ptr<Scaleform::GFx::ResourceLib> & Pick(Scaleform::GFx::ResourceLib *);
	Scaleform::Ptr<Scaleform::GFx::ResourceLib> & Pick(Scaleform::Pickable<Scaleform::GFx::ResourceLib>);
	Scaleform::Ptr<Scaleform::GFx::ResourceLib> & Pick(Scaleform::Ptr<Scaleform::GFx::ResourceLib> &);
};
Scaleform::GFx::DrawTextManager::~DrawTextManager(); // 0x1402F1280
Scaleform::GFx::DrawTextManager::TextParams::TextParams(); // 0x1402F10D0
void Scaleform::GFx::DrawTextManager::SetDefaultTextParams(const Scaleform::GFx::DrawTextManager::TextParams & params); // 0x1402F2560
const Scaleform::GFx::DrawTextManager::TextParams & Scaleform::GFx::DrawTextManager::GetDefaultTextParams(); // 0x1402F1B60
void Scaleform::GFx::DrawTextManager::SetTextParams(Scaleform::Render::Text::DocView * pdoc, const Scaleform::GFx::DrawTextManager::TextParams & txtParams, const Scaleform::Render::Text::TextFormat * tfmt, const Scaleform::Render::Text::ParagraphFormat * pfmt); // 0x1402F2AF0
Scaleform::GFx::DrawText * Scaleform::GFx::DrawTextManager::CreateText(const Scaleform::String & str, const Scaleform::Render::Rect<float> & viewRect, const Scaleform::GFx::DrawTextManager::TextParams * ptxtParams, unsigned long depth); // 0x1402F1920
Scaleform::GFx::DrawText * Scaleform::GFx::DrawTextManager::CreateHtmlText(const Scaleform::String & str, const Scaleform::Render::Rect<float> & viewRect, const Scaleform::GFx::DrawTextManager::TextParams * ptxtParams, unsigned long depth); // 0x1402F16C0
Scaleform::Render::Text::DocView * Scaleform::GFx::DrawTextManager::CreateTempDoc(const Scaleform::GFx::DrawTextManager::TextParams & txtParams, Scaleform::Render::Text::TextFormat * tfmt, Scaleform::Render::Text::ParagraphFormat * pfmt, float width, float height); // 0x1402F17B0
Scaleform::GFx::StateBag * Scaleform::GFx::DrawTextManager::GetStateBagImpl(); // 0x1402F1DB0
void Scaleform::GFx::DrawTextManager::CheckFontStatesChange(); // 0x1402F15E0
void Scaleform::GFx::DrawTextManager::SetViewport(const Scaleform::Render::Viewport & vp); // 0x1402F2D30
void Scaleform::GFx::DrawTextManager::Capture(bool onChangeOnly); // 0x1402F15A0
const Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> & Scaleform::GFx::DrawTextManager::GetDisplayHandle(); // 0x1402F1C70
void Scaleform::GFx::DrawTextManager::SetCaptureThread(unsigned long captureThreadId); // 0x1402F2500void __fastcall Scaleform::Render::Text::Allocator::Allocator(
        Scaleform::Render::Text::Allocator *this,
        Scaleform::MemoryHeap *pheap,
        unsigned __int8 flags)
{
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::Text::Allocator_vtbl *)&Scaleform::Render::Text::Allocator::`vftable';
  this->TextFormatStorage.pTable = 0i64;
  this->ParagraphFormatStorage.pTable = 0i64;
  this->TextFormatStorageCap = 100;
  this->ParagraphFormatStorageCap = 100;
  this->NewParagraphId = 1;
  this->pHeap = pheap;
  Scaleform::Render::Text::TextFormat::TextFormat(&this->EntryTextFormat, pheap);
  this->Flags = flags;
}

void __fastcall Scaleform::GFx::DrawTextImpl::DrawTextImpl(
        Scaleform::GFx::DrawTextImpl *this,
        Scaleform::GFx::DrawTextManager *pdtMgr)
{
  Scaleform::GFx::DrawTextManagerImpl *pImpl; // rsi
  Scaleform::Render::TreeText::NodeData *v5; // rax
  Scaleform::Render::ContextImpl::EntryData *v6; // rdi
  Scaleform::Render::ContextImpl::Entry *EntryHelper; // rax
  Scaleform::Render::TreeText *pObject; // rcx
  Scaleform::Render::TreeText *v9; // rdi
  Scaleform::Ptr<Scaleform::Log> *Log; // rax
  Scaleform::Ptr<Scaleform::Log> result; // [rsp+30h] [rbp+8h] BYREF

  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::DrawTextImpl_vtbl *)&Scaleform::GFx::DrawTextImpl::`vftable';
  if ( pdtMgr )
    ++pdtMgr->RefCount;
  this->pDrawTextCtxt.pObject = pdtMgr;
  this->pTextNode.pObject = 0i64;
  this->pHeap = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  pImpl = pdtMgr->pImpl;
  v5 = (Scaleform::Render::TreeText::NodeData *)pImpl->RenderContext.pHeap->Alloc(
                                                  pImpl->RenderContext.pHeap,
                                                  176ui64,
                                                  0i64);
  v6 = v5;
  if ( v5 )
    Scaleform::Render::TreeText::NodeData::NodeData(v5);
  EntryHelper = Scaleform::Render::ContextImpl::Context::createEntryHelper(&pImpl->RenderContext, v6);
  pObject = this->pTextNode.pObject;
  v9 = (Scaleform::Render::TreeText *)EntryHelper;
  if ( pObject )
  {
    if ( pObject->RefCount-- == 1 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(pObject);
  }
  this->pTextNode.pObject = v9;
  Log = Scaleform::GFx::StateBag::GetLog(&this->pDrawTextCtxt.pObject->Scaleform::GFx::StateBag, &result);
  Scaleform::Render::TreeText::Init(
    this->pTextNode.pObject,
    this->pDrawTextCtxt.pObject->pImpl->pTextAllocator.pObject,
    this->pDrawTextCtxt.pObject->pImpl->pFontManager.pObject,
    Log->pObject);
  if ( result.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)result.pObject);
}

void __fastcall Scaleform::GFx::DrawTextManager::DrawTextManager(
        Scaleform::GFx::DrawTextManager *this,
        Scaleform::GFx::Loader *ploader)
{
  Scaleform::MemoryHeap *v4; // rax
  int v5; // ecx
  Scaleform::MemoryHeap *v6; // rax
  Scaleform::GFx::DrawTextManagerImpl *v7; // rax
  Scaleform::GFx::DrawTextManagerImpl *v8; // rax
  Scaleform::GFx::DrawTextManagerImpl *v9; // rbx
  Scaleform::GFx::Resource *pObject; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  Scaleform::RefCountVImpl *v13; // rcx
  Scaleform::GFx::DrawTextManagerImpl *pImpl; // r14
  Scaleform::RefCountVImpl *v15; // rcx
  Scaleform::Log *v16; // rbx
  Scaleform::Ptr<Scaleform::Log> *Log; // rax
  Scaleform::RefCountVImpl *v18; // rcx
  __int64 v19; // rax
  Scaleform::Log *v20; // rbx
  Scaleform::Render::Text::Allocator *v21; // rax
  Scaleform::Render::Text::Allocator *v22; // rbx
  Scaleform::MemoryHeap *pHeap; // rdx
  Scaleform::GFx::DrawTextManagerImpl *v24; // r14
  Scaleform::RefCountNTSImpl *v25; // rcx
  __int64 v26; // rax
  Scaleform::GFx::FontManagerStates *v27; // rbx
  Scaleform::GFx::StateBagImpl *v28; // rdx
  Scaleform::GFx::StateBag *v29; // rax
  Scaleform::GFx::DrawTextManagerImpl *v30; // r14
  Scaleform::RefCountNTSImpl *v31; // rcx
  Scaleform::RefCountVImpl *v32; // rax
  Scaleform::GFx::State *v33; // rbx
  Scaleform::RefCountVImpl *v34; // rax
  Scaleform::GFx::State *v35; // rbx
  Scaleform::RefCountVImpl *v36; // rax
  Scaleform::GFx::State *v37; // rbx
  Scaleform::RefCountVImpl *InternalData; // rax
  Scaleform::RefCountVImpl *v39; // rsi
  Scaleform::GFx::ResourceWeakLib *v40; // rbp
  Scaleform::GFx::DrawTextManagerImpl *v41; // rbx
  Scaleform::GFx::ResourceWeakLib *v42; // rax
  Scaleform::GFx::ResourceWeakLib *v43; // rax
  Scaleform::RefCountVImpl *v44; // rcx
  Scaleform::GFx::FontManager *v45; // rax
  Scaleform::GFx::FontManager *v46; // rax
  Scaleform::GFx::FontManager *v47; // rbp
  Scaleform::GFx::DrawTextManagerImpl *v48; // rbx
  Scaleform::RefCountVImpl *v49; // rcx
  Scaleform::GFx::DrawTextManagerImpl *v50; // rbx
  Scaleform::Render::TreeRoot::NodeData *v51; // rax
  Scaleform::Render::ContextImpl::EntryData *v52; // rbp
  Scaleform::Render::ContextImpl::Entry *EntryHelper; // rax
  Scaleform::GFx::DrawTextManagerImpl *v54; // rbx
  Scaleform::Render::TreeRoot *v55; // rbp
  Scaleform::Render::ContextImpl::Entry *v56; // rcx
  Scaleform::Render::ContextImpl::RTHandle::HandleData *v58; // rax
  Scaleform::GFx::DrawTextManagerImpl *v59; // rbx
  Scaleform::RefCountVImpl *v60; // rcx
  int v61; // [rsp+20h] [rbp-78h] BYREF
  __int64 v62; // [rsp+28h] [rbp-70h]
  __int64 v63; // [rsp+30h] [rbp-68h]
  __int64 v64; // [rsp+38h] [rbp-60h]
  __int64 v65; // [rsp+40h] [rbp-58h]
  __int64 v66; // [rsp+48h] [rbp-50h]
  __int64 v67; // [rsp+50h] [rbp-48h]
  __int64 v68; // [rsp+58h] [rbp-40h]
  Scaleform::Render::ContextImpl::RTHandle v69; // [rsp+A0h] [rbp+8h] BYREF
  Scaleform::Ptr<Scaleform::Log> result; // [rsp+A8h] [rbp+10h] BYREF
  Scaleform::Ptr<Scaleform::Log> v71; // [rsp+B0h] [rbp+18h] BYREF

  this->RefCount = 1;
  this->Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2>::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::DrawTextManager_vtbl *)&Scaleform::GFx::DrawTextManager::`vftable'{for `Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2>'};
  this->Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::DrawTextManager::`vftable'{for `Scaleform::GFx::StateBag'};
  v4 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  v62 = 16i64;
  v63 = 0x4000i64;
  v64 = 0x4000i64;
  v5 = v4->Info.Desc.Flags & 0x1000;
  v65 = -1i64;
  v61 = v5;
  v66 = 0i64;
  v67 = 0i64;
  v68 = 0i64;
  v6 = Scaleform::Memory::pGlobalHeap->CreateHeap(Scaleform::Memory::pGlobalHeap, "DrawText Manager", &v61);
  this->pHeap = v6;
  v7 = (Scaleform::GFx::DrawTextManagerImpl *)v6->Alloc(v6, 400ui64, 0i64);
  if ( v7 )
  {
    Scaleform::GFx::DrawTextManagerImpl::DrawTextManagerImpl(v7);
    v9 = v8;
  }
  else
  {
    v9 = 0i64;
  }
  this->pImpl = v9;
  pObject = v9->pMovieDef.pObject;
  if ( pObject )
    Scaleform::GFx::Resource::Release(pObject);
  v9->pMovieDef.pObject = 0i64;
  v11 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
          Scaleform::Memory::pGlobalHeap,
          96i64);
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)v11 = &Scaleform::RefCountImplCore::`vftable';
    *(_DWORD *)(v11 + 8) = 1;
    *(_QWORD *)(v11 + 16) = &Scaleform::GFx::StateBag::`vftable';
    *(_QWORD *)v11 = &Scaleform::GFx::StateBagImpl::`vftable'{for `Scaleform::RefCountBase<Scaleform::GFx::StateBagImpl,2>'};
    *(_QWORD *)(v11 + 16) = &Scaleform::GFx::StateBagImpl::`vftable'{for `Scaleform::GFx::StateBag'};
    *(_QWORD *)(v11 + 24) = &Scaleform::GFx::StateBagImpl::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>'};
    *(_QWORD *)(v11 + 32) = 0i64;
    *(_QWORD *)(v11 + 40) = 0i64;
    Scaleform::Lock::Lock((Scaleform::Lock *)(v11 + 48), 0);
    v13 = *(Scaleform::RefCountVImpl **)(v12 + 32);
    if ( v13 )
      Scaleform::RefCountImpl::Release(v13);
    *(_QWORD *)(v12 + 32) = 0i64;
  }
  else
  {
    v12 = 0i64;
  }
  pImpl = this->pImpl;
  v15 = (Scaleform::RefCountVImpl *)pImpl->pStateBag.pObject;
  if ( v15 )
    Scaleform::RefCountImpl::Release(v15);
  pImpl->pStateBag.pObject = (Scaleform::GFx::StateBagImpl *)v12;
  v16 = Scaleform::GFx::StateBag::GetLog(ploader, &result)->pObject;
  if ( result.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)result.pObject);
  if ( v16 )
  {
    Log = Scaleform::GFx::StateBag::GetLog(ploader, &v71);
    Scaleform::GFx::StateBag::SetLog(&this->pImpl->pStateBag.pObject->Scaleform::GFx::StateBag, Log->pObject);
    v18 = (Scaleform::RefCountVImpl *)v71.pObject;
    if ( !v71.pObject )
      goto LABEL_24;
    goto LABEL_23;
  }
  v19 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
          Scaleform::Memory::pGlobalHeap,
          16i64);
  v20 = (Scaleform::Log *)v19;
  if ( v19 )
  {
    *(_QWORD *)v19 = &Scaleform::RefCountImplCore::`vftable';
    *(_DWORD *)(v19 + 8) = 1;
    *(_QWORD *)v19 = &Scaleform::Log::`vftable';
  }
  else
  {
    v20 = 0i64;
  }
  Scaleform::GFx::StateBag::SetLog(&this->pImpl->pStateBag.pObject->Scaleform::GFx::StateBag, v20);
  if ( v20 )
  {
    v18 = (Scaleform::RefCountVImpl *)v20;
LABEL_23:
    Scaleform::RefCountImpl::Release(v18);
  }
LABEL_24:
  v21 = (Scaleform::Render::Text::Allocator *)this->pHeap->Alloc(this->pHeap, 144i64, 0i64);
  v22 = v21;
  if ( v21 )
  {
    pHeap = this->pHeap;
    v21->RefCount = 1;
    v21->__vftable = (Scaleform::Render::Text::Allocator_vtbl *)&Scaleform::Render::Text::Allocator::`vftable';
    v21->TextFormatStorage.pTable = 0i64;
    v21->ParagraphFormatStorage.pTable = 0i64;
    v21->TextFormatStorageCap = 100;
    v21->ParagraphFormatStorageCap = 100;
    v21->NewParagraphId = 1;
    v21->pHeap = pHeap;
    Scaleform::Render::Text::TextFormat::TextFormat(&v21->EntryTextFormat, pHeap);
    v22->Flags = 0;
  }
  else
  {
    v22 = 0i64;
  }
  v24 = this->pImpl;
  v25 = v24->pTextAllocator.pObject;
  if ( v25 )
    Scaleform::RefCountNTSImpl::Release(v25);
  v24->pTextAllocator.pObject = v22;
  v26 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
          Scaleform::Memory::pGlobalHeap,
          64i64);
  v27 = (Scaleform::GFx::FontManagerStates *)v26;
  if ( v26 )
  {
    v28 = this->pImpl->pStateBag.pObject;
    *(_DWORD *)(v26 + 8) = 1;
    *(_QWORD *)(v26 + 16) = &Scaleform::GFx::StateBag::`vftable';
    *(_QWORD *)v26 = &Scaleform::GFx::FontManagerStates::`vftable'{for `Scaleform::RefCountBaseNTS<Scaleform::GFx::FontManagerStates,327>'};
    *(_QWORD *)(v26 + 16) = &Scaleform::GFx::FontManagerStates::`vftable'{for `Scaleform::GFx::StateBag'};
    v29 = &v28->Scaleform::GFx::StateBag;
    v27->pFontLib.pObject = 0i64;
    if ( !v28 )
      v29 = 0i64;
    v27->pFontMap.pObject = 0i64;
    v27->pFontProvider.pObject = 0i64;
    v27->pTranslator.pObject = 0i64;
    v27->pDelegate = v29;
  }
  else
  {
    v27 = 0i64;
  }
  v30 = this->pImpl;
  v31 = v30->pFontStates.pObject;
  if ( v31 )
    Scaleform::RefCountNTSImpl::Release(v31);
  v30->pFontStates.pObject = v27;
  v32 = (Scaleform::RefCountVImpl *)ploader->GetStateAddRef(ploader, 20i64);
  if ( v32 )
  {
    Scaleform::RefCountImpl::Release(v32);
    v33 = ploader->GetStateAddRef(ploader, 20i64);
    this->pImpl->pStateBag.pObject->SetState(
      &this->pImpl->pStateBag.pObject->Scaleform::GFx::StateBag,
      (Scaleform::GFx::State::StateType)20i64,
      v33);
    if ( v33 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v33);
  }
  v34 = (Scaleform::RefCountVImpl *)ploader->GetStateAddRef(ploader, 23i64);
  if ( v34 )
  {
    Scaleform::RefCountImpl::Release(v34);
    v35 = ploader->GetStateAddRef(ploader, 23i64);
    this->pImpl->pStateBag.pObject->SetState(
      &this->pImpl->pStateBag.pObject->Scaleform::GFx::StateBag,
      State_UserData|0x10,
      v35);
    if ( v35 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v35);
  }
  v36 = (Scaleform::RefCountVImpl *)ploader->GetStateAddRef(ploader, 22i64);
  if ( v36 )
  {
    Scaleform::RefCountImpl::Release(v36);
    v37 = ploader->GetStateAddRef(ploader, 22i64);
    this->pImpl->pStateBag.pObject->SetState(
      &this->pImpl->pStateBag.pObject->Scaleform::GFx::StateBag,
      State_ProjectionMatrix3D|0x10,
      v37);
    if ( v37 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v37);
  }
  InternalData = (Scaleform::RefCountVImpl *)AgAudioChannel::getInternalData((AgAudioChannel *)ploader);
  v39 = InternalData;
  if ( InternalData )
  {
    Scaleform::Render::RenderBuffer::AddRef(InternalData);
    v40 = (Scaleform::GFx::ResourceWeakLib *)v39[1].__vftable;
    v41 = this->pImpl;
    if ( v40 )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v39[1].__vftable);
  }
  else
  {
    v42 = (Scaleform::GFx::ResourceWeakLib *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                               Scaleform::Memory::pGlobalHeap,
                                               88i64);
    if ( v42 )
    {
      Scaleform::GFx::ResourceWeakLib::ResourceWeakLib(v42, 0i64);
      v40 = v43;
    }
    else
    {
      v40 = 0i64;
    }
    v41 = this->pImpl;
  }
  v44 = (Scaleform::RefCountVImpl *)v41->pWeakLib.pObject;
  if ( v44 )
    Scaleform::RefCountImpl::Release(v44);
  v41->pWeakLib.pObject = v40;
  v45 = (Scaleform::GFx::FontManager *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pHeap->Alloc)(
                                         this->pHeap,
                                         112i64);
  if ( v45 )
  {
    Scaleform::GFx::FontManager::FontManager(v45, this->pImpl->pWeakLib.pObject, this->pImpl->pFontStates.pObject);
    v47 = v46;
  }
  else
  {
    v47 = 0i64;
  }
  v48 = this->pImpl;
  v49 = (Scaleform::RefCountVImpl *)v48->pFontManager.pObject;
  if ( v49 )
    Scaleform::RefCountImpl::Release(v49);
  v48->pFontManager.pObject = v47;
  v50 = this->pImpl;
  v51 = (Scaleform::Render::TreeRoot::NodeData *)v50->RenderContext.pHeap->Alloc(
                                                   v50->RenderContext.pHeap,
                                                   208ui64,
                                                   0i64);
  v52 = v51;
  if ( v51 )
    Scaleform::Render::TreeRoot::NodeData::NodeData(v51);
  EntryHelper = Scaleform::Render::ContextImpl::Context::createEntryHelper(&v50->RenderContext, v52);
  v54 = this->pImpl;
  v55 = (Scaleform::Render::TreeRoot *)EntryHelper;
  v56 = v54->pRootNode.pObject;
  if ( v54->pRootNode.pObject )
  {
    if ( v56->RefCount-- == 1 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v56);
  }
  v54->pRootNode.pObject = v55;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pImpl->pRootNode.pObject & 0xFFFFFFFFFFFFF000ui64)
                                         + 0x20)
                             + 8i64
                             * (unsigned int)((int)((int)&this->pImpl->pRootNode.pObject[-1]
                                                  - ((__int64)this->pImpl->pRootNode.pObject & 0xFFFFF000))
                                            / 56)
                             + 40)
                 + 204i64) )
    *(_DWORD *)(&Scaleform::Render::ContextImpl::Entry::getWritableData(this->pImpl->pRootNode.pObject, 0x1000u)[12].Flags
              + 1) = 0;
  Scaleform::Render::ContextImpl::RTHandle::RTHandle(&v69, this->pImpl->pRootNode.pObject);
  v58 = v69.pData.pObject;
  v59 = this->pImpl;
  if ( v69.pData.pObject )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v69.pData.pObject);
    v58 = v69.pData.pObject;
  }
  v60 = (Scaleform::RefCountVImpl *)v59->DispHandle.pData.pObject;
  if ( v60 )
  {
    Scaleform::RefCountImpl::Release(v60);
    v58 = v69.pData.pObject;
  }
  v59->DispHandle.pData.pObject = v58;
  Scaleform::Render::ContextImpl::RTHandle::~RTHandle(&v69);
  if ( v39 )
    Scaleform::RefCountImpl::Release(v39);
}

void __fastcall Scaleform::GFx::DrawTextManagerImpl::DrawTextManagerImpl(Scaleform::GFx::DrawTextManagerImpl *this)
{
  this->pRootNode.pObject = 0i64;
  this->pStateBag.pObject = 0i64;
  this->pMovieDef.pObject = 0i64;
  this->pTextAllocator.pObject = 0i64;
  this->pFontManager.pObject = 0i64;
  this->pFontStates.pObject = 0i64;
  this->pWeakLib.pObject = 0i64;
  Scaleform::GFx::DrawTextManager::TextParams::TextParams(&this->DefaultTextParams);
  this->pLoaderImpl.pObject = 0i64;
  this->RTFlags = 0;
  Scaleform::Render::ContextImpl::Context::Context(&this->RenderContext, Scaleform::Memory::pGlobalHeap);
  this->DispHandle.pData.pObject = 0i64;
}

void __fastcall Scaleform::GFx::StateBagImpl::StateBagImpl(
        Scaleform::GFx::StateBagImpl *this,
        Scaleform::GFx::StateBagImpl *pdelegate)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  this->Scaleform::RefCountBase<Scaleform::GFx::StateBagImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::StateBagImpl_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->Scaleform::RefCountBase<Scaleform::GFx::StateBagImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::StateBagImpl_vtbl *)&Scaleform::GFx::StateBagImpl::`vftable'{for `Scaleform::RefCountBase<Scaleform::GFx::StateBagImpl,2>'};
  this->Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::StateBagImpl::`vftable'{for `Scaleform::GFx::StateBag'};
  this->Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>_vtbl *)&Scaleform::GFx::StateBagImpl::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>'};
  this->pDelegate.pObject = 0i64;
  this->States.pTable = 0i64;
  Scaleform::Lock::Lock(&this->StateLock, 0);
  if ( pdelegate )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pdelegate);
  pObject = (Scaleform::RefCountVImpl *)this->pDelegate.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pDelegate.pObject = pdelegate;
}

void __fastcall Scaleform::GFx::DrawTextManager::TextParams::TextParams(
        Scaleform::GFx::DrawTextManager::TextParams *this)
{
  Scaleform::String::String(&this->FontName);
  this->TextColor.Raw = -16777216;
  *(_QWORD *)&this->HAlignment = 0i64;
  this->FontStyle = Normal;
  this->FontSize = 12.0;
  Scaleform::String::operator=(&this->FontName, "Times New Roman");
  *(_WORD *)&this->Underline = 256;
  this->WordWrap = 1;
}

void __fastcall Scaleform::Render::Text::Allocator::~Allocator(Scaleform::Render::Text::Allocator *this)
{
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *pTable; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *v5; // rax
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *v9; // rax

  this->__vftable = (Scaleform::Render::Text::Allocator_vtbl *)&Scaleform::Render::Text::Allocator::`vftable';
  Scaleform::Render::Text::TextFormat::~TextFormat(&this->EntryTextFormat);
  pTable = this->ParagraphFormatStorage.pTable;
  if ( pTable )
  {
    v3 = 0i64;
    v4 = pTable->SizeMask + 1;
    do
    {
      v5 = this->ParagraphFormatStorage.pTable;
      if ( *(unsigned __int64 *)((char *)&v5[1].EntryCount + v3) != -2i64 )
        *(unsigned __int64 *)((char *)&v5[1].EntryCount + v3) = -2i64;
      v3 += 24i64;
      --v4;
    }
    while ( v4 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->ParagraphFormatStorage.pTable);
    this->ParagraphFormatStorage.pTable = 0i64;
  }
  v6 = this->TextFormatStorage.pTable;
  if ( v6 )
  {
    v7 = 0i64;
    v8 = v6->SizeMask + 1;
    do
    {
      v9 = this->TextFormatStorage.pTable;
      if ( *(unsigned __int64 *)((char *)&v9[1].EntryCount + v7) != -2i64 )
        *(unsigned __int64 *)((char *)&v9[1].EntryCount + v7) = -2i64;
      v7 += 24i64;
      --v8;
    }
    while ( v8 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->TextFormatStorage.pTable);
    this->TextFormatStorage.pTable = 0i64;
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(this);
}

void __fastcall Scaleform::GFx::DrawTextImpl::~DrawTextImpl(Scaleform::GFx::DrawTextImpl *this)
{
  unsigned int Depth; // eax
  Scaleform::Render::TreeText *pObject; // rcx
  Scaleform::GFx::DrawTextManager *v5; // rcx

  this->__vftable = (Scaleform::GFx::DrawTextImpl_vtbl *)&Scaleform::GFx::DrawTextImpl::`vftable';
  Depth = Scaleform::GFx::DrawTextImpl::GetDepth(this);
  if ( Depth != -1 )
    Scaleform::Render::TreeContainer::Remove(this->pDrawTextCtxt.pObject->pImpl->pRootNode.pObject, Depth, 1ui64);
  pObject = this->pTextNode.pObject;
  if ( pObject )
  {
    if ( pObject->RefCount-- == 1 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(pObject);
  }
  v5 = this->pDrawTextCtxt.pObject;
  if ( v5 )
    Scaleform::RefCountNTSImpl::Release(v5);
  this->__vftable = (Scaleform::GFx::DrawTextImpl_vtbl *)&Scaleform::GFx::DrawText::`vftable';
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(this);
}

void __fastcall Scaleform::GFx::DrawTextManager::~DrawTextManager(Scaleform::GFx::DrawTextManager *this)
{
  Scaleform::GFx::DrawTextManagerImpl *pImpl; // rdi

  pImpl = this->pImpl;
  this->Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2>::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::DrawTextManager_vtbl *)&Scaleform::GFx::DrawTextManager::`vftable'{for `Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2>'};
  this->Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::DrawTextManager::`vftable'{for `Scaleform::GFx::StateBag'};
  if ( pImpl )
  {
    Scaleform::GFx::DrawTextManagerImpl::~DrawTextManagerImpl(pImpl);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pImpl);
  }
  this->pHeap->Release(this->pHeap);
  this->Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::StateBag::`vftable';
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(this);
}

void __fastcall Scaleform::GFx::DrawTextManagerImpl::~DrawTextManagerImpl(Scaleform::GFx::DrawTextManagerImpl *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::TreeRoot *v3; // rcx
  bool v4; // zf
  Scaleform::RefCountVImpl *v5; // rcx
  volatile int *v6; // rbx
  Scaleform::RefCountVImpl *v7; // rcx
  Scaleform::GFx::FontManagerStates *v8; // rcx
  Scaleform::RefCountVImpl *v9; // rcx
  Scaleform::Render::Text::Allocator *v10; // rcx
  Scaleform::GFx::MovieDef *v11; // rcx
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::Render::TreeRoot *v13; // rcx

  pObject = (Scaleform::RefCountVImpl *)this->DispHandle.pData.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->DispHandle.pData.pObject = 0i64;
  v3 = this->pRootNode.pObject;
  if ( this->pRootNode.pObject )
  {
    v4 = v3->RefCount-- == 1;
    if ( v4 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v3);
  }
  this->pRootNode.pObject = 0i64;
  Scaleform::Render::ContextImpl::Context::Shutdown(&this->RenderContext, 1);
  Scaleform::Render::ContextImpl::RTHandle::~RTHandle(&this->DispHandle);
  Scaleform::Render::ContextImpl::Context::~Context(&this->RenderContext);
  v5 = (Scaleform::RefCountVImpl *)this->pLoaderImpl.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  v6 = (volatile int *)(this->DefaultTextParams.FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v6 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v6);
  v7 = (Scaleform::RefCountVImpl *)this->pWeakLib.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  v8 = this->pFontStates.pObject;
  if ( v8 )
    Scaleform::RefCountNTSImpl::Release(v8);
  v9 = (Scaleform::RefCountVImpl *)this->pFontManager.pObject;
  if ( v9 )
    Scaleform::RefCountImpl::Release(v9);
  v10 = this->pTextAllocator.pObject;
  if ( v10 )
    Scaleform::RefCountNTSImpl::Release(v10);
  v11 = this->pMovieDef.pObject;
  if ( v11 )
    Scaleform::GFx::Resource::Release(v11);
  v12 = (Scaleform::RefCountVImpl *)this->pStateBag.pObject;
  if ( v12 )
    Scaleform::RefCountImpl::Release(v12);
  v13 = this->pRootNode.pObject;
  if ( this->pRootNode.pObject )
  {
    v4 = v13->RefCount-- == 1;
    if ( v4 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v13);
  }
}

void __fastcall Scaleform::GFx::DrawTextManager::Capture(Scaleform::GFx::DrawTextManager *this, bool onChangeOnly)
{
  if ( !onChangeOnly || Scaleform::Render::ContextImpl::Context::HasChanges(&this->pImpl->RenderContext) )
    Scaleform::Render::ContextImpl::Context::Capture(&this->pImpl->RenderContext);
}

void __fastcall Scaleform::GFx::DrawTextManager::CheckFontStatesChange(Scaleform::GFx::DrawTextManager *this)
{
  Scaleform::GFx::Translator *ptranslator; // rbx
  Scaleform::GFx::FontProvider *v3; // rdi
  Scaleform::GFx::FontMap *v4; // rsi
  Scaleform::GFx::FontLib *v5; // rbp

  ptranslator = (Scaleform::GFx::Translator *)this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 1i64);
  v3 = (Scaleform::GFx::FontProvider *)this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 22i64);
  v4 = (Scaleform::GFx::FontMap *)this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 23i64);
  v5 = (Scaleform::GFx::FontLib *)this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 20i64);
  Scaleform::GFx::FontManagerStates::CheckStateChange(this->pImpl->pFontStates.pObject, v5, v4, v3, ptranslator);
  if ( v5 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v5);
  if ( v4 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v4);
  if ( v3 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v3);
  if ( ptranslator )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)ptranslator);
}

void __fastcall Scaleform::GFx::DrawTextImpl::ClearFilters(Scaleform::GFx::DrawTextImpl *this)
{
  Scaleform::Render::TreeText::ClearFilters(this->pTextNode.pObject);
}

Scaleform::Render::TreeNode **__fastcall Scaleform::GFx::DrawTextManager::CreateHtmlText(
        Scaleform::GFx::DrawTextManager *this,
        const Scaleform::String *str,
        const Scaleform::Render::Rect<float> *viewRect,
        const Scaleform::GFx::DrawTextManager::TextParams *ptxtParams,
        unsigned int depth)
{
  Scaleform::GFx::DrawTextImpl *v9; // rax
  Scaleform::Render::TreeNode **v10; // rax
  Scaleform::Render::TreeNode **v11; // rbx
  Scaleform::Render::Text::DocView *v12; // rax
  Scaleform::Render::TreeRoot *pObject; // rcx

  v9 = (Scaleform::GFx::DrawTextImpl *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pHeap->Alloc)(
                                         this->pHeap,
                                         40i64);
  if ( v9 )
  {
    Scaleform::GFx::DrawTextImpl::DrawTextImpl(v9, this);
    v11 = v10;
  }
  else
  {
    v11 = 0i64;
  }
  ((void (__fastcall *)(Scaleform::Render::TreeNode **, const Scaleform::Render::Rect<float> *))(*v11)[2].PNode.Scaleform::Render::ContextImpl::Entry::pPrev)(
    v11,
    viewRect);
  if ( !ptxtParams )
    ptxtParams = &this->pImpl->DefaultTextParams;
  v12 = (Scaleform::Render::Text::DocView *)((__int64 (__fastcall *)(Scaleform::Render::TreeNode **))(*v11)[5].PNode.pNext)(v11);
  Scaleform::GFx::DrawTextManager::SetTextParams(this, v12, ptxtParams, 0i64, 0i64);
  ((void (__fastcall *)(Scaleform::Render::TreeNode **, const Scaleform::String *))(*v11)->PNode.Scaleform::Render::ContextImpl::Entry::pPrev)(
    v11,
    str);
  pObject = this->pImpl->pRootNode.pObject;
  if ( depth == -1 )
    Scaleform::Render::TreeContainer::Add(pObject, v11[3]);
  else
    Scaleform::Render::TreeContainer::Insert(pObject, depth, v11[3]);
  return v11;
}

Scaleform::Render::Text::DocView *__fastcall Scaleform::GFx::DrawTextManager::CreateTempDoc(
        Scaleform::GFx::DrawTextManager *this,
        const Scaleform::GFx::DrawTextManager::TextParams *txtParams,
        Scaleform::Render::Text::TextFormat *tfmt,
        Scaleform::Render::Text::ParagraphFormat *pfmt,
        float width,
        float height)
{
  char v9; // di
  Scaleform::Render::Text::DocView *v11; // rbp
  Scaleform::Ptr<Scaleform::Log> *Log; // rax
  Scaleform::Render::Text::DocView *v13; // rax
  Scaleform::Render::Text::DocView *v14; // rbx
  Scaleform::Ptr<Scaleform::Log> result; // [rsp+20h] [rbp-78h] BYREF
  Scaleform::Render::Rect<float> rect; // [rsp+30h] [rbp-68h] BYREF

  v9 = 0;
  LODWORD(result.pObject) = 0;
  v11 = (Scaleform::Render::Text::DocView *)this->pHeap->Alloc(this->pHeap, 352i64, 0i64);
  if ( v11 )
  {
    Log = Scaleform::GFx::StateBag::GetLog(&this->Scaleform::GFx::StateBag, &result);
    Scaleform::Render::Text::DocView::DocView(
      v11,
      this->pImpl->pTextAllocator.pObject,
      this->pImpl->pFontManager.pObject,
      Log->pObject);
    v14 = v13;
    v9 = 1;
  }
  else
  {
    v14 = 0i64;
  }
  if ( (v9 & 1) != 0 && result.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)result.pObject);
  Scaleform::Render::Text::TextFormat::InitByDefaultValues(tfmt);
  Scaleform::Render::Text::ParagraphFormat::InitByDefaultValues(pfmt);
  *(_QWORD *)&rect.x1 = 0i64;
  rect.x2 = width + 0.0;
  rect.y2 = height + 0.0;
  Scaleform::Render::Text::DocView::SetViewRect(v14, &rect, UseExternally);
  if ( txtParams->Multiline )
    v14->Flags |= 4u;
  else
    v14->Flags &= ~4u;
  if ( txtParams->WordWrap && width > 0.0 )
  {
    Scaleform::Render::Text::DocView::SetWordWrap(v14);
    if ( txtParams->Multiline )
      Scaleform::Render::Text::DocView::SetAutoSizeY(v14);
  }
  else
  {
    Scaleform::Render::Text::DocView::SetAutoSizeX(v14);
    Scaleform::Render::Text::DocView::ClearWordWrap(v14);
  }
  return v14;
}

Scaleform::Render::TreeNode **__fastcall Scaleform::GFx::DrawTextManager::CreateText(
        Scaleform::GFx::DrawTextManager *this,
        const Scaleform::String *str,
        const Scaleform::Render::Rect<float> *viewRect,
        const Scaleform::GFx::DrawTextManager::TextParams *ptxtParams,
        unsigned int depth)
{
  Scaleform::GFx::DrawTextImpl *v9; // rax
  Scaleform::Render::TreeNode **v10; // rax
  Scaleform::Render::TreeNode **v11; // rbx
  Scaleform::Render::Text::DocView *v12; // rax
  Scaleform::Render::TreeRoot *pObject; // rcx

  v9 = (Scaleform::GFx::DrawTextImpl *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pHeap->Alloc)(
                                         this->pHeap,
                                         40i64);
  if ( v9 )
  {
    Scaleform::GFx::DrawTextImpl::DrawTextImpl(v9, this);
    v11 = v10;
  }
  else
  {
    v11 = 0i64;
  }
  ((void (__fastcall *)(Scaleform::Render::TreeNode **, const Scaleform::Render::Rect<float> *))(*v11)[2].PNode.Scaleform::Render::ContextImpl::Entry::pPrev)(
    v11,
    viewRect);
  ((void (__fastcall *)(Scaleform::Render::TreeNode **, const Scaleform::String *))(*v11)->pNext)(v11, str);
  if ( !ptxtParams )
    ptxtParams = &this->pImpl->DefaultTextParams;
  v12 = (Scaleform::Render::Text::DocView *)((__int64 (__fastcall *)(Scaleform::Render::TreeNode **))(*v11)[5].PNode.pNext)(v11);
  Scaleform::GFx::DrawTextManager::SetTextParams(this, v12, ptxtParams, 0i64, 0i64);
  pObject = this->pImpl->pRootNode.pObject;
  if ( depth == -1 )
    Scaleform::Render::TreeContainer::Add(pObject, v11[3]);
  else
    Scaleform::Render::TreeContainer::Insert(pObject, depth, v11[3]);
  return v11;
}

void __fastcall Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::HTMLImageTagInfo>::DestructArray(
        Scaleform::Render::Text::StyledText::HTMLImageTagInfo *p,
        unsigned __int64 count)
{
  unsigned __int64 v2; // rsi
  Scaleform::Render::Text::StyledText::HTMLImageTagInfo *v3; // rdi
  volatile int *v4; // rbx
  volatile int *v5; // rbx

  if ( count )
  {
    v2 = count;
    v3 = &p[count - 1];
    do
    {
      v4 = (volatile int *)(v3->Id.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
      v5 = (volatile int *)(v3->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v5 + 2, -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v5);
      if ( v3->pTextImageDesc.pObject )
        Scaleform::RefCountNTSImpl::Release(v3->pTextImageDesc.pObject);
      --v3;
      --v2;
    }
    while ( v2 );
  }
}

Scaleform::GFx::DrawText::AAMode __fastcall Scaleform::GFx::DrawTextImpl::GetAAMode(Scaleform::GFx::DrawTextImpl *this)
{
  return Scaleform::Render::TreeText::GetAAMode(this->pTextNode.pObject);
}

Scaleform::Render::TreeText::Alignment __fastcall Scaleform::GFx::DrawTextImpl::GetAlignment(
        Scaleform::GFx::DrawTextImpl *this)
{
  return Scaleform::Render::TreeText::GetAlignment(this->pTextNode.pObject);
}

Scaleform::Render::Color *__fastcall Scaleform::GFx::DrawTextImpl::GetBackgroundColor(
        Scaleform::GFx::DrawTextImpl *this,
        Scaleform::Render::Color *result)
{
  Scaleform::Render::TreeText::GetBackgroundColor(this->pTextNode.pObject, result);
  return result;
}

Scaleform::Render::Color *__fastcall Scaleform::GFx::DrawTextImpl::GetBorderColor(
        Scaleform::GFx::DrawTextImpl *this,
        Scaleform::Render::Color *result)
{
  Scaleform::Render::TreeText::GetBorderColor(this->pTextNode.pObject, result);
  return result;
}

const Scaleform::Render::Cxform *__fastcall Scaleform::GFx::DrawTextImpl::GetCxform(Scaleform::GFx::DrawTextImpl *this)
{
  return (const Scaleform::Render::Cxform *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pTextNode.pObject & 0xFFFFFFFFFFFFF000ui64)
                                                                   + 0x20)
                                                       + 8i64
                                                       * (unsigned int)((int)(LODWORD(this->pTextNode.pObject)
                                                                            - ((__int64)this->pTextNode.pObject & 0xFFFFF000)
                                                                            - 56)
                                                                      / 56)
                                                       + 40)
                                           + 80i64);
}

Scaleform::GFx::DrawTextManager::TextParams *__fastcall Scaleform::GFx::DrawTextManager::GetDefaultTextParams(
        Scaleform::GFx::DrawTextManager *this)
{
  return &this->pImpl->DefaultTextParams;
}

__int64 __fastcall Scaleform::GFx::DrawTextImpl::GetDepth(Scaleform::GFx::DrawTextImpl *this)
{
  Scaleform::Render::TreeRoot *pObject; // r11
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  Scaleform::Render::TreeText *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r11
  __int64 v11; // rdx
  _QWORD *v12; // rax

  pObject = this->pDrawTextCtxt.pObject->pImpl->pRootNode.pObject;
  v3 = *(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20);
  v4 = (unsigned int)((int)((int)&this->pDrawTextCtxt.pObject->pImpl->pRootNode.pObject[-1]
                          - ((unsigned int)pObject & 0xFFFFF000))
                    / 56);
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 8 * v4 + 40) + 144i64);
  if ( !v5 )
    return 0xFFFFFFFFi64;
  v6 = 0i64;
  v7 = (v5 & 1) != 0 ? *(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFFEui64) + 8) : (*(_QWORD *)(*(_QWORD *)(v3 + 8 * v4 + 40)
                                                                                   + 152i64) != 0i64)
                                                                      + 1i64;
  if ( !v7 )
    return 0xFFFFFFFFi64;
  v8 = this->pTextNode.pObject;
  v9 = (unsigned __int128)((__int64)((__int64)&pObject[-1] - ((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64))
                         * (__int128)0x4924924924924925i64) >> 64;
  v10 = *(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20);
  v11 = ((unsigned __int64)v9 >> 63) + (v9 >> 4);
  while ( 1 )
  {
    v12 = (_QWORD *)(*(_QWORD *)(v10 + 8i64 * (unsigned int)v11 + 40) + 144i64);
    if ( (*(_BYTE *)v12 & 1) != 0 )
      v12 = (_QWORD *)((*v12 & 0xFFFFFFFFFFFFFFFEui64) + 16);
    if ( (Scaleform::Render::TreeText *)v12[v6] == v8 )
      break;
    if ( ++v6 >= v7 )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)v6;
}

Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> *__fastcall Scaleform::GFx::DrawTextManager::GetDisplayHandle(
        Scaleform::GFx::DrawTextManager *this)
{
  return &this->pImpl->DispHandle;
}

Scaleform::Render::Text::DocView *__fastcall Scaleform::GFx::DrawTextImpl::GetDocView(
        Scaleform::GFx::DrawTextImpl *this)
{
  return Scaleform::Render::TreeText::GetDocView(this->pTextNode.pObject);
}

Scaleform::String *__fastcall Scaleform::GFx::DrawTextImpl::GetHtmlText(
        Scaleform::GFx::DrawTextImpl *this,
        Scaleform::String *result)
{
  Scaleform::Render::TreeText::GetHtmlText(this->pTextNode.pObject, result);
  return result;
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::GFx::DrawTextImpl::GetMatrix(
        Scaleform::GFx::DrawTextImpl *this,
        Scaleform::Render::Matrix2x4<float> *result)
{
  const Scaleform::Render::Matrix2x4<float> *v3; // rax
  float v4; // ecx
  Scaleform::Render::Matrix2x4<float> *v5; // rax

  v3 = Scaleform::Render::TreeNode::NodeData::M2D(*(Scaleform::Render::TreeNode::NodeData **)(*(_QWORD *)(((unsigned __int64)this->pTextNode.pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                                                                            + 8i64
                                                                                            * (unsigned int)((int)(LODWORD(this->pTextNode.pObject) - ((__int64)this->pTextNode.pObject & 0xFFFFF000) - 56) / 56)
                                                                                            + 40));
  result->M[0][0] = v3->M[0][0];
  result->M[0][1] = v3->M[0][1];
  result->M[0][2] = v3->M[0][2];
  result->M[0][3] = v3->M[0][3];
  result->M[1][0] = v3->M[1][0];
  result->M[1][1] = v3->M[1][1];
  v4 = v3->M[1][2];
  *(float *)&v3 = v3->M[1][3];
  result->M[1][2] = v4;
  LODWORD(result->M[1][3]) = (_DWORD)v3;
  v5 = result;
  result->M[0][3] = result->M[0][3] * 0.050000001;
  result->M[1][3] = result->M[1][3] * 0.050000001;
  return v5;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::DrawTextImpl::GetRect(
        Scaleform::GFx::DrawTextImpl *this,
        Scaleform::Render::Rect<float> *result)
{
  __m128 v3; // xmm0
  Scaleform::Render::Rect<float> *v4; // rax
  Scaleform::Render::Rect<float> resulta; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(__m128 *)Scaleform::Render::TreeText::GetBounds(this->pTextNode.pObject, &resulta);
  v4 = result;
  *(__m128 *)result = _mm_mul_ps(v3, (__m128)_xmm);
  return v4;
}

Scaleform::GFx::StateBag *__fastcall Scaleform::GFx::DrawTextManager::GetStateBagImpl(
        Scaleform::GFx::DrawTextManager *this)
{
  Scaleform::GFx::StateBag *v1; // rcx
  Scaleform::GFx::StateBag *result; // rax

  v1 = *(Scaleform::GFx::StateBag **)(*(_QWORD *)&this->RefCount + 8i64);
  result = v1 + 2;
  if ( !v1 )
    return 0i64;
  return result;
}

Scaleform::String *__fastcall Scaleform::GFx::DrawTextImpl::GetText(
        Scaleform::GFx::DrawTextImpl *this,
        Scaleform::String *result)
{
  Scaleform::Render::TreeText::GetText(this->pTextNode.pObject, result);
  return result;
}

Scaleform::GFx::DrawText::VAlignment __fastcall Scaleform::GFx::DrawTextImpl::GetVAlignment(
        Scaleform::GFx::DrawTextImpl *this)
{
  return Scaleform::Render::TreeText::GetVAlignment(this->pTextNode.pObject);
}

bool __fastcall Scaleform::GFx::DrawTextImpl::IsMultiline(Scaleform::GFx::DrawTextImpl *this)
{
  return Scaleform::Render::TreeText::IsMultiline(this->pTextNode.pObject);
}

bool __fastcall Scaleform::GFx::DrawTextImpl::IsVisible(Scaleform::GFx::DrawTextImpl *this)
{
  return *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pTextNode.pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                              + 8i64
                              * (unsigned int)((int)(LODWORD(this->pTextNode.pObject)
                                                   - ((__int64)this->pTextNode.pObject & 0xFFFFF000)
                                                   - 56)
                                             / 56)
                              + 40)
                  + 10i64) & 1;
}

bool __fastcall Scaleform::GFx::DrawTextImpl::IsWordWrap(Scaleform::GFx::DrawTextImpl *this)
{
  return Scaleform::Render::TreeText::IsWordWrap(this->pTextNode.pObject);
}

void __fastcall Scaleform::GFx::DrawTextImpl::ProcessImageTags(
        Scaleform::Render::Text::DocView *ptextDocView,
        const Scaleform::GFx::DrawTextManager *pmgr,
        Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *imageInfoArray)
{
  Scaleform::GFx::DrawTextManagerImpl *pImpl; // rax
  Scaleform::GFx::StateBag *v4; // r14
  unsigned __int64 Size; // r15
  Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *v6; // r12
  Scaleform::RefCountVImpl *v7; // rdi
  Scaleform::GFx::MovieDefImpl *v8; // rsi
  Scaleform::GFx::MovieDefImpl *pObject; // r8
  Scaleform::GFx::StateBag_vtbl *v10; // rax
  Scaleform::RefCountVImpl *v11; // rax
  Scaleform::RefCountVImpl *v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // r13
  Scaleform::Render::Text::StyledText::HTMLImageTagInfo *Data; // r12
  const Scaleform::String *p_Url; // r15
  bool IsProtocolImage; // al
  Scaleform::Log *v18; // rbx
  Scaleform::Ptr<Scaleform::Log> *Log; // rax
  Scaleform::RefCountVImpl *v20; // rcx
  Scaleform::Log *v21; // rbx
  unsigned __int64 v22; // rbx
  Scaleform::Ptr<Scaleform::Log> *v23; // rax
  Scaleform::GFx::Resource *v24; // rsi
  __int64 v25; // rbx
  Scaleform::GFx::Resource_vtbl *v26; // r8
  Scaleform::RefCountVImpl_vtbl *v27; // rax
  Scaleform::Log *v28; // rbx
  unsigned __int64 v29; // rbx
  Scaleform::Ptr<Scaleform::Log> *v30; // rax
  Scaleform::GFx::StateBag_vtbl *v31; // rax
  __int64 v32; // rax
  Scaleform::RefCountVImpl *v33; // rsi
  __int64 v34; // rax
  Scaleform::RefCountVImpl *v35; // rbx
  unsigned __int64 v36; // r8
  Scaleform::Render::Text::ImageDesc *v37; // rsi
  Scaleform::Render::Image *v38; // rcx
  int Width; // eax
  float v40; // xmm5_4
  float v41; // xmm4_4
  float v42; // xmm3_4
  int Height; // eax
  __m128i v44; // xmm0
  float v45; // xmm3_4
  float v46; // xmm2_4
  Scaleform::Render::Text::ImageDesc *v47; // rax
  float *v48; // rax
  Scaleform::LogMessageId id; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v50; // [rsp+28h] [rbp-D8h]
  Scaleform::GFx::ResourceBindData pdata; // [rsp+30h] [rbp-D0h] BYREF
  const Scaleform::GFx::DrawTextManager *v52; // [rsp+40h] [rbp-C0h]
  Scaleform::Ptr<Scaleform::Log> result; // [rsp+48h] [rbp-B8h] BYREF
  Scaleform::Ptr<Scaleform::Log> v54; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::Ptr<Scaleform::Log> v55; // [rsp+58h] [rbp-A8h] BYREF
  Scaleform::Ptr<Scaleform::Log> v56; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::Ptr<Scaleform::Log> v57; // [rsp+68h] [rbp-98h] BYREF
  Scaleform::Ptr<Scaleform::Log> v58; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::Ptr<Scaleform::Log> v59; // [rsp+78h] [rbp-88h] BYREF
  Scaleform::Render::Text::DocView *v60; // [rsp+80h] [rbp-80h]
  unsigned __int64 v61; // [rsp+88h] [rbp-78h]
  Scaleform::GFx::MovieDefImpl *v62; // [rsp+90h] [rbp-70h]
  Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *v63; // [rsp+98h] [rbp-68h]
  int v64; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::MemoryHeap *v65; // [rsp+A8h] [rbp-58h]
  int v66; // [rsp+B0h] [rbp-50h]
  int v67; // [rsp+B4h] [rbp-4Ch]
  __int128 v68; // [rsp+B8h] [rbp-48h]
  __int128 v69; // [rsp+C8h] [rbp-38h]
  int v70; // [rsp+D8h] [rbp-28h] BYREF
  Scaleform::MemoryHeap *pHeap; // [rsp+E0h] [rbp-20h]
  int v72; // [rsp+E8h] [rbp-18h]
  int v73; // [rsp+ECh] [rbp-14h]
  __int128 v74; // [rsp+F0h] [rbp-10h]
  __int128 v75; // [rsp+100h] [rbp+0h]
  int v76; // [rsp+110h] [rbp+10h] BYREF
  int v77; // [rsp+114h] [rbp+14h]
  int v78; // [rsp+118h] [rbp+18h]
  int v79; // [rsp+11Ch] [rbp+1Ch]

  pImpl = pmgr->pImpl;
  v4 = &pmgr->Scaleform::GFx::StateBag;
  Size = imageInfoArray->Data.Size;
  v6 = imageInfoArray;
  v63 = imageInfoArray;
  v7 = 0i64;
  v8 = 0i64;
  v52 = pmgr;
  pObject = (Scaleform::GFx::MovieDefImpl *)pImpl->pMovieDef.pObject;
  v10 = pmgr->Scaleform::GFx::StateBag::__vftable;
  v60 = ptextDocView;
  if ( pObject )
    v8 = pObject;
  v61 = Size;
  v62 = v8;
  v11 = (Scaleform::RefCountVImpl *)v10->GetStateAddRef(v4, State_OrigNodeBounds|State_MaskNode);
  if ( v11 )
  {
    Scaleform::RefCountImpl::Release(v11);
    v12 = (Scaleform::RefCountVImpl *)v4->GetStateAddRef(v4, State_OrigNodeBounds|State_MaskNode);
    v7 = v12;
    if ( v12 )
      Scaleform::Render::RenderBuffer::AddRef(v12);
    if ( v7 )
      Scaleform::RefCountImpl::Release(v7);
  }
  v13 = 0i64;
  v50 = 0i64;
  if ( !Size )
  {
LABEL_63:
    if ( v7 )
      Scaleform::RefCountImpl::Release(v7);
    return;
  }
  v14 = 0i64;
  while ( 1 )
  {
    Data = v6->Data.Data;
    p_Url = &Data[v14].Url;
    IsProtocolImage = Scaleform::GFx::LoaderImpl::IsProtocolImage(p_Url, 0i64, 0i64);
    pdata = 0i64;
    if ( IsProtocolImage )
      break;
    if ( !v8 )
    {
      v18 = Scaleform::GFx::StateBag::GetLog(v4, &result)->pObject;
      if ( result.pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)result.pObject);
      if ( !v18 )
        goto LABEL_18;
      Log = Scaleform::GFx::StateBag::GetLog(v4, &v54);
      Scaleform::Log::LogWarning(
        Log->pObject,
        "DrawText::ProcessImageTags: can't find a resource since there is no moviedef\n");
      v20 = (Scaleform::RefCountVImpl *)v54.pObject;
      goto LABEL_16;
    }
    if ( !Scaleform::GFx::MovieDefImpl::GetExportedResource(v8, &pdata, &Data[v14].Url, 0i64) )
    {
      v21 = Scaleform::GFx::StateBag::GetLog(v4, &v55)->pObject;
      if ( v55.pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v55.pObject);
      if ( !v21 )
        goto LABEL_18;
      v22 = p_Url->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
      v23 = Scaleform::GFx::StateBag::GetLog(v4, &v56);
      Scaleform::Log::LogWarning(
        v23->pObject,
        "DrawText::ProcessImageTags: can't find a resource for export name '%s'\n",
        (const char *)(v22 + 12));
      v20 = (Scaleform::RefCountVImpl *)v56.pObject;
      goto LABEL_16;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::GFx::Resource *))pdata.pResource.pObject->GetResourceTypeCode)(pdata.pResource.pObject) & 0xFF00) == 256 )
    {
      v24 = pdata.pResource.pObject;
      if ( !pdata.pResource.pObject )
      {
        v28 = Scaleform::GFx::StateBag::GetLog(v4, &v57)->pObject;
        if ( v57.pObject )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v57.pObject);
        if ( !v28 )
          goto LABEL_18;
        v29 = p_Url->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
        v30 = Scaleform::GFx::StateBag::GetLog(v4, &v58);
        Scaleform::Log::LogWarning(
          v30->pObject,
          "DrawText::ProcessImageTags: can't load the image '%s'\n",
          (const char *)(v29 + 12));
        v20 = (Scaleform::RefCountVImpl *)v58.pObject;
LABEL_16:
        if ( v20 )
          Scaleform::RefCountImpl::Release(v20);
        goto LABEL_18;
      }
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pdata.pResource.pObject);
      if ( (*((unsigned int (__fastcall **)(Scaleform::GFx::Resource_vtbl *))v24[1].~Resource + 3))(v24[1].__vftable) )
      {
        v25 = (__int64)v24[1].__vftable;
        if ( v25 )
        {
          (*(void (__fastcall **)(Scaleform::GFx::Resource_vtbl *))(*(_QWORD *)v25 + 8i64))(v24[1].__vftable);
          Scaleform::GFx::Resource::Release(v24);
LABEL_48:
          if ( !v25 )
          {
            v36 = p_Url->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
            id.Id = 135168;
            Scaleform::LogDebugMessage(
              (Scaleform::LogMessageId)&id,
              "Image '%s' wasn't created in ProcessImageTags",
              (const char *)(v36 + 12));
LABEL_18:
            if ( pdata.pResource.pObject )
              Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
            v13 = v50;
            goto LABEL_21;
          }
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 48i64))(v25, &v76);
          v37 = Data[v14].pTextImageDesc.pObject;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8i64))(v25);
          v38 = v37->pImage.pObject;
          if ( v38 )
            v38->Release(v38);
          v37->pImage.pObject = (Scaleform::Render::Image *)v25;
          Width = Data[v14].Width;
          v40 = (float)(v78 - v76);
          v41 = (float)(v79 - v77);
          if ( !Width )
            Width = 20 * (v78 - v76);
          v42 = (float)Width;
          Height = Data[v14].Height;
          if ( !Height )
            Height = 20 * (v79 - v77);
          v44 = _mm_cvtsi32_si128(Data[v14].VSpace);
          Data[v14].pTextImageDesc.pObject->ScreenWidth = v42;
          Data[v14].pTextImageDesc.pObject->ScreenHeight = (float)Height;
          v45 = v42 / v40;
          v46 = (float)Height / v41;
          Data[v14].pTextImageDesc.pObject->BaseLineY = (float)((float)(v41 * 20.0) + _mm_cvtepi32_ps(v44).m128_f32[0])
                                                      * 0.050000001;
          v47 = Data[v14].pTextImageDesc.pObject;
          *(float *)v44.m128i_i32 = v47->Matrix.M[0][3] + 0.0;
          v47->Matrix.M[1][3] = COERCE_FLOAT(LODWORD(v47->BaseLineY) ^ _xmm) + v47->Matrix.M[1][3];
          LODWORD(v47->Matrix.M[0][3]) = v44.m128i_i32[0];
          v48 = (float *)Data[v14].pTextImageDesc.pObject;
          v48[12] = v45 * v48[12];
          v48[13] = v45 * v48[13];
          v48[14] = v45 * v48[14];
          v48[15] = v45 * v48[15];
          v48[16] = v46 * v48[16];
          v48[17] = v46 * v48[17];
          v48[18] = v46 * v48[18];
          v48[19] = v46 * v48[19];
          v60->RTFlags |= 2u;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16i64))(v25);
          v13 = v50;
          goto LABEL_57;
        }
      }
      else
      {
        if ( !v7 )
        {
          id.Id = 135168;
          Scaleform::LogDebugMessage((Scaleform::LogMessageId)&id, "ImageCreator is null in DrawText::ProcessImageTags");
          Scaleform::GFx::Resource::Release(v24);
          goto LABEL_61;
        }
        v26 = v24[1].__vftable;
        v70 = 3;
        v72 = 1;
        pHeap = v52->pHeap;
        v27 = v7->__vftable;
        v73 = 1;
        v74 = 0i64;
        v75 = 0i64;
        v25 = ((__int64 (__fastcall *)(Scaleform::RefCountVImpl *, int *, Scaleform::GFx::Resource_vtbl *))v27[1].AddRef)(
                v7,
                &v70,
                v26);
      }
      Scaleform::GFx::Resource::Release(v24);
      goto LABEL_48;
    }
LABEL_57:
    if ( pdata.pResource.pObject )
      Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
LABEL_21:
    ++v13;
    ++v14;
    v50 = v13;
    if ( v13 >= v61 )
      goto LABEL_63;
    v8 = v62;
    v6 = v63;
  }
  v65 = v52->pImpl->pWeakLib.pObject->pImageHeap.pObject;
  v31 = v4->__vftable;
  v64 = 1;
  v66 = 0;
  v67 = 1;
  v68 = 0i64;
  v69 = 0i64;
  v32 = (__int64)v31->GetStateBagImpl(v4);
  v33 = (Scaleform::RefCountVImpl *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 24i64))(v32, 15i64);
  v34 = v4->GetStateBagImpl(v4);
  v35 = (Scaleform::RefCountVImpl *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 24i64))(v34, 12i64);
  *(Scaleform::Ptr<Scaleform::Log> *)&v68 = (Scaleform::Ptr<Scaleform::Log>)Scaleform::GFx::StateBag::GetLog(v4, &v59)->pObject;
  *((_QWORD *)&v68 + 1) = v35;
  *(_QWORD *)&v69 = v33;
  if ( v59.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v59.pObject);
  if ( v35 )
    Scaleform::RefCountImpl::Release(v35);
  if ( v33 )
    Scaleform::RefCountImpl::Release(v33);
  if ( v7 )
  {
    v25 = ((__int64 (__fastcall *)(Scaleform::RefCountVImpl *, int *, Scaleform::StringDH *))v7->AddRef)(
            v7,
            &v64,
            &Data[v14].Url);
    goto LABEL_48;
  }
  id.Id = 135168;
  Scaleform::LogDebugMessage(
    (Scaleform::LogMessageId)&id,
    "Image resource creation failed - ImageCreator not installed");
LABEL_61:
  if ( pdata.pResource.pObject )
    Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetAAMode(
        Scaleform::GFx::DrawTextImpl *this,
        Scaleform::GFx::DrawText::AAMode aa)
{
  Scaleform::Render::TreeText::SetAAMode(this->pTextNode.pObject, aa);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetAlignment(
        Scaleform::GFx::DrawTextImpl *this,
        Scaleform::GFx::DrawText::Alignment a)
{
  Scaleform::Render::TreeText::SetAlignment(this->pTextNode.pObject, (Scaleform::Render::TreeText::Alignment)a);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetBackgroundColor(
        Scaleform::GFx::DrawTextImpl *this,
        const Scaleform::Render::Color *bkgColor)
{
  Scaleform::Render::TreeText::SetBackgroundColor(this->pTextNode.pObject, bkgColor);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetBorderColor(
        Scaleform::GFx::DrawTextImpl *this,
        const Scaleform::Render::Color *borderColor)
{
  Scaleform::Render::TreeText::SetBorderColor(this->pTextNode.pObject, borderColor);
}

void __fastcall Scaleform::GFx::DrawTextManager::SetCaptureThread(
        Scaleform::GFx::DrawTextManager *this,
        unsigned int captureThreadId)
{
  ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)&this->pImpl->RenderContext);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetColor(
        Scaleform::GFx::DrawTextImpl *this,
        Scaleform::Render::Color *c,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  Scaleform::Render::TreeText *pObject; // rcx
  Scaleform::Render::Color ca; // [rsp+30h] [rbp+8h] BYREF

  pObject = this->pTextNode.pObject;
  ca = (Scaleform::Render::Color)c->Raw;
  Scaleform::Render::TreeText::SetColor(pObject, (Scaleform::Render::Color)&ca, startPos, endPos);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetCxform(
        Scaleform::GFx::DrawTextImpl *this,
        const Scaleform::Render::Cxform *cx)
{
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this->pTextNode.pObject, 2u);
  WritableData[5] = *(Scaleform::Render::ContextImpl::EntryData *)&cx->M[0][0];
  WritableData[6] = *(Scaleform::Render::ContextImpl::EntryData *)&cx->M[1][0];
}

void __fastcall Scaleform::GFx::DrawTextManager::SetDefaultTextParams(
        Scaleform::GFx::DrawTextManager *this,
        const Scaleform::GFx::DrawTextManager::TextParams *params)
{
  Scaleform::GFx::DrawTextManagerImpl *pImpl; // rbx

  pImpl = this->pImpl;
  pImpl->DefaultTextParams.TextColor.Raw = params->TextColor.Raw;
  pImpl->DefaultTextParams.HAlignment = params->HAlignment;
  pImpl->DefaultTextParams.VAlignment = params->VAlignment;
  pImpl->DefaultTextParams.FontStyle = params->FontStyle;
  pImpl->DefaultTextParams.FontSize = params->FontSize;
  Scaleform::String::operator=(&pImpl->DefaultTextParams.FontName, &params->FontName);
  pImpl->DefaultTextParams.Underline = params->Underline;
  pImpl->DefaultTextParams.Multiline = params->Multiline;
  pImpl->DefaultTextParams.WordWrap = params->WordWrap;
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetDepth(Scaleform::GFx::DrawTextImpl *this, unsigned int newDepth)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  Scaleform::Render::TreeRoot *pObject; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx

  v3 = newDepth;
  v4 = this->GetDepth(this);
  pObject = this->pDrawTextCtxt.pObject->pImpl->pRootNode.pObject;
  v6 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                 + 8i64
                 * (unsigned int)((int)((int)&this->pDrawTextCtxt.pObject->pImpl->pRootNode.pObject[-1]
                                      - ((unsigned int)pObject & 0xFFFFF000))
                                / 56)
                 + 40);
  v7 = *(_QWORD *)(v6 + 144);
  if ( v7 )
  {
    if ( (v7 & 1) != 0 )
      v7 = *(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFFEui64) + 8);
    else
      v7 = (*(_QWORD *)(v6 + 152) != 0i64) + 1i64;
  }
  if ( v3 > v7 )
    LODWORD(v3) = Scaleform::Render::TreeContainer::GetSize(this->pDrawTextCtxt.pObject->pImpl->pRootNode.pObject);
  Scaleform::Render::TreeContainer::Remove(pObject, v4, 1ui64);
  Scaleform::Render::TreeContainer::Insert(
    this->pDrawTextCtxt.pObject->pImpl->pRootNode.pObject,
    (unsigned int)v3,
    this->pTextNode.pObject);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetFilters(
        Scaleform::GFx::DrawTextImpl *this,
        const Scaleform::GFx::DrawText::Filter *filters,
        unsigned __int64 filtersCnt)
{
  Scaleform::Render::TreeText::SetFilters(this->pTextNode.pObject, filters, filtersCnt);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetFont(
        Scaleform::GFx::DrawTextImpl *this,
        const char *pfontName,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  Scaleform::Render::TreeText::SetFont(this->pTextNode.pObject, pfontName, startPos, endPos);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetFontSize(
        Scaleform::GFx::DrawTextImpl *this,
        float fontSize,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  Scaleform::Render::TreeText::SetFontSize(this->pTextNode.pObject, fontSize, startPos, endPos);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetFontStyle(
        Scaleform::GFx::DrawTextImpl *this,
        Scaleform::GFx::DrawText::FontStyle fontStyle,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  Scaleform::Render::TreeText::SetFontStyle(this->pTextNode.pObject, fontStyle, startPos, endPos);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetHtmlText(
        Scaleform::GFx::DrawTextImpl *this,
        const Scaleform::String *str)
{
  Scaleform::Render::TreeText *pObject; // rdi
  unsigned __int64 v5; // rbx
  Scaleform::MemoryHeap *pHeap; // r8
  unsigned __int64 Length; // rax
  unsigned __int64 Size; // rdx
  Scaleform::GFx::DrawTextManager *v9; // rbx
  Scaleform::Render::Text::DocView *DocView; // rax
  Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> pimgInfoArr; // [rsp+20h] [rbp-28h] BYREF

  Scaleform::GFx::DrawTextManager::CheckFontStatesChange(this->pDrawTextCtxt.pObject);
  pObject = this->pTextNode.pObject;
  v5 = str->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
  pHeap = this->pDrawTextCtxt.pObject->pHeap;
  memset(&pimgInfoArr, 0, 24);
  pimgInfoArr.Data.pHeap = pHeap;
  Length = Scaleform::String::GetLength((Scaleform::String *)str);
  Scaleform::Render::TreeText::SetHtmlText(pObject, (const char *)(v5 + 12), Length, &pimgInfoArr);
  Size = pimgInfoArr.Data.Size;
  if ( pimgInfoArr.Data.Size )
  {
    v9 = this->pDrawTextCtxt.pObject;
    DocView = Scaleform::Render::TreeText::GetDocView(this->pTextNode.pObject);
    Scaleform::GFx::DrawTextImpl::ProcessImageTags(DocView, v9, &pimgInfoArr);
    Size = pimgInfoArr.Data.Size;
  }
  Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::HTMLImageTagInfo>::DestructArray(
    pimgInfoArr.Data.Data,
    Size);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pimgInfoArr.Data.Data);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetHtmlText(
        Scaleform::GFx::DrawTextImpl *this,
        const char *putf8Str,
        unsigned __int64 lengthInBytes)
{
  Scaleform::Render::TreeText *pObject; // rcx
  unsigned __int64 Size; // rdx
  Scaleform::GFx::DrawTextManager *v8; // rbx
  Scaleform::Render::Text::DocView *DocView; // rax
  Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> pimgInfoArr; // [rsp+20h] [rbp-28h] BYREF

  Scaleform::GFx::DrawTextManager::CheckFontStatesChange(this->pDrawTextCtxt.pObject);
  pObject = this->pTextNode.pObject;
  pimgInfoArr.Data.pHeap = this->pDrawTextCtxt.pObject->pHeap;
  memset(&pimgInfoArr, 0, 24);
  Scaleform::Render::TreeText::SetHtmlText(pObject, putf8Str, lengthInBytes, &pimgInfoArr);
  Size = pimgInfoArr.Data.Size;
  if ( pimgInfoArr.Data.Size )
  {
    v8 = this->pDrawTextCtxt.pObject;
    DocView = Scaleform::Render::TreeText::GetDocView(this->pTextNode.pObject);
    Scaleform::GFx::DrawTextImpl::ProcessImageTags(DocView, v8, &pimgInfoArr);
    Size = pimgInfoArr.Data.Size;
  }
  Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::HTMLImageTagInfo>::DestructArray(
    pimgInfoArr.Data.Data,
    Size);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pimgInfoArr.Data.Data);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetHtmlText(
        Scaleform::GFx::DrawTextImpl *this,
        const wchar_t *pstr,
        unsigned __int64 lengthInChars)
{
  Scaleform::Render::TreeText *pObject; // rcx
  unsigned __int64 Size; // rdx
  Scaleform::GFx::DrawTextManager *v8; // rbx
  Scaleform::Render::Text::DocView *DocView; // rax
  Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> pimgInfoArr; // [rsp+20h] [rbp-28h] BYREF

  Scaleform::GFx::DrawTextManager::CheckFontStatesChange(this->pDrawTextCtxt.pObject);
  pObject = this->pTextNode.pObject;
  pimgInfoArr.Data.pHeap = this->pDrawTextCtxt.pObject->pHeap;
  memset(&pimgInfoArr, 0, 24);
  Scaleform::Render::TreeText::SetHtmlText(pObject, pstr, lengthInChars, &pimgInfoArr);
  Size = pimgInfoArr.Data.Size;
  if ( pimgInfoArr.Data.Size )
  {
    v8 = this->pDrawTextCtxt.pObject;
    DocView = Scaleform::Render::TreeText::GetDocView(this->pTextNode.pObject);
    Scaleform::GFx::DrawTextImpl::ProcessImageTags(DocView, v8, &pimgInfoArr);
    Size = pimgInfoArr.Data.Size;
  }
  Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::HTMLImageTagInfo>::DestructArray(
    pimgInfoArr.Data.Data,
    Size);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pimgInfoArr.Data.Data);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetLetterSpacing(
        Scaleform::GFx::DrawTextImpl *this,
        float letterSpacing,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  Scaleform::Render::TreeText::SetLetterSpacing(this->pTextNode.pObject, letterSpacing, startPos, endPos);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetMatrix(
        Scaleform::GFx::DrawTextImpl *this,
        const Scaleform::Render::Matrix2x4<float> *matrix)
{
  float v2; // xmm1_4
  float v3; // xmm3_4
  Scaleform::Render::TreeText *pObject; // rcx
  unsigned int v5; // xmm2_4
  Scaleform::Render::Matrix2x4<float> m; // [rsp+20h] [rbp-38h] BYREF

  v2 = matrix->M[0][1];
  v3 = matrix->M[0][3] * 20.0;
  pObject = this->pTextNode.pObject;
  *(float *)&v5 = matrix->M[1][3] * 20.0;
  m.M[0][0] = matrix->M[0][0];
  *(_QWORD *)&m.M[0][1] = __PAIR64__(LODWORD(matrix->M[0][2]), LODWORD(v2));
  *(_QWORD *)&m.M[1][0] = *(_QWORD *)&matrix->M[1][0];
  *(_QWORD *)&m.M[1][2] = __PAIR64__(v5, LODWORD(matrix->M[1][2]));
  m.M[0][3] = v3;
  Scaleform::Render::TreeNode::SetMatrix(pObject, &m);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetMultiline(Scaleform::GFx::DrawTextImpl *this, bool multiline)
{
  Scaleform::Render::TreeText::SetMultiline(this->pTextNode.pObject, multiline);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetRect(
        Scaleform::GFx::DrawTextImpl *this,
        const Scaleform::Render::Rect<float> *viewRect)
{
  Scaleform::Render::TreeText *pObject; // rcx
  Scaleform::Render::Rect<float> r; // [rsp+20h] [rbp-28h] BYREF

  pObject = this->pTextNode.pObject;
  r = (Scaleform::Render::Rect<float>)_mm_mul_ps(*(__m128 *)viewRect, (__m128)_xmm);
  Scaleform::Render::TreeText::SetBounds(pObject, &r);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetText(Scaleform::GFx::DrawTextImpl *this, const Scaleform::String *str)
{
  Scaleform::GFx::DrawTextManager::CheckFontStatesChange(this->pDrawTextCtxt.pObject);
  Scaleform::Render::TreeText::SetText(
    this->pTextNode.pObject,
    (const char *)((str->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
    *(_QWORD *)(str->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetText(
        Scaleform::GFx::DrawTextImpl *this,
        const char *putf8Str,
        unsigned __int64 lengthInBytes)
{
  Scaleform::GFx::DrawTextManager::CheckFontStatesChange(this->pDrawTextCtxt.pObject);
  Scaleform::Render::TreeText::SetText(this->pTextNode.pObject, putf8Str, lengthInBytes);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetText(
        Scaleform::GFx::DrawTextImpl *this,
        const wchar_t *pstr,
        unsigned __int64 lengthInChars)
{
  Scaleform::GFx::DrawTextManager::CheckFontStatesChange(this->pDrawTextCtxt.pObject);
  Scaleform::Render::TreeText::SetText(this->pTextNode.pObject, pstr, lengthInChars);
}

void __fastcall Scaleform::GFx::DrawTextManager::SetTextParams(
        Scaleform::GFx::DrawTextManager *this,
        Scaleform::Render::Text::DocView *pdoc,
        const Scaleform::GFx::DrawTextManager::TextParams *txtParams,
        const Scaleform::Render::Text::TextFormat *tfmt,
        const Scaleform::Render::Text::ParagraphFormat *pfmt)
{
  __int16 v8; // bx
  char v9; // r14
  Scaleform::GFx::DrawText::FontStyle FontStyle; // ecx
  __int32 v11; // ecx
  __int32 v12; // ecx
  bool v13; // dl
  bool v14; // dl
  float FontSize; // xmm1_4
  int v16; // eax
  bool Underline; // dl
  Scaleform::GFx::DrawText::VAlignment VAlignment; // ecx
  __int32 v19; // ecx
  Scaleform::Render::Text::ParagraphFormat defaultParagraphFmt; // [rsp+20h] [rbp-41h] BYREF
  Scaleform::Render::Text::TextFormat fmt; // [rsp+50h] [rbp-11h] BYREF

  Scaleform::Render::Text::TextFormat::TextFormat(&fmt, this->pHeap);
  v8 = 0;
  v9 = 1;
  defaultParagraphFmt.pAllocator = 0i64;
  defaultParagraphFmt.RefCount = 1;
  memset(&defaultParagraphFmt.pTabStops, 0, 20);
  if ( tfmt )
    Scaleform::Render::Text::TextFormat::operator=(&fmt, tfmt);
  if ( pfmt )
    Scaleform::Render::Text::ParagraphFormat::operator=(&defaultParagraphFmt, pfmt);
  fmt.PresentMask |= 1u;
  FontStyle = txtParams->FontStyle;
  fmt.ColorV = txtParams->TextColor.Raw;
  if ( FontStyle == Normal )
  {
    v14 = 0;
    goto LABEL_13;
  }
  v11 = FontStyle - 1;
  if ( !v11 )
  {
    v14 = 1;
LABEL_13:
    Scaleform::Render::Text::TextFormat::SetBold(&fmt, v14);
    v13 = 0;
    goto LABEL_14;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 != 1 )
      goto LABEL_15;
    Scaleform::Render::Text::TextFormat::SetBold(&fmt, 1);
    v13 = 1;
  }
  else
  {
    Scaleform::Render::Text::TextFormat::SetBold(&fmt, 0);
    v13 = 1;
  }
LABEL_14:
  Scaleform::Render::Text::TextFormat::SetItalic(&fmt, v13);
LABEL_15:
  Scaleform::Render::Text::TextFormat::SetFontName(&fmt, &txtParams->FontName);
  FontSize = txtParams->FontSize;
  if ( FontSize >= 3276.8 )
    LOWORD(v16) = -1;
  else
    v16 = (int)(float)(FontSize * 20.0);
  Underline = txtParams->Underline;
  fmt.PresentMask |= 8u;
  fmt.FontSize = v16;
  Scaleform::Render::Text::TextFormat::SetUnderline(&fmt, Underline);
  switch ( txtParams->HAlignment )
  {
    case Align_Right:
      v8 = 1;
      break;
    case Align_Left:
      v8 = 3;
      break;
    case Align_Left|Align_Right:
      v8 = 2;
      break;
  }
  VAlignment = txtParams->VAlignment;
  defaultParagraphFmt.PresentMask = defaultParagraphFmt.PresentMask ^ (defaultParagraphFmt.PresentMask ^ (v8 << 9)) & 0x600 | 1;
  v19 = VAlignment - 1;
  if ( v19 )
  {
    if ( v19 == 1 )
      v9 = 2;
  }
  else
  {
    v9 = 3;
  }
  pdoc->AlignProps &= 0xF3u;
  pdoc->RTFlags |= 1u;
  pdoc->AlignProps |= 4 * (v9 & 3);
  if ( txtParams->Multiline )
  {
    pdoc->Flags |= 4u;
    if ( txtParams->WordWrap )
      Scaleform::Render::Text::DocView::SetWordWrap(pdoc);
  }
  Scaleform::Render::Text::DocView::SetTextFormat(pdoc, &fmt, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  Scaleform::Render::Text::DocView::SetParagraphFormat(pdoc, &defaultParagraphFmt, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  Scaleform::Render::Text::StyledText::SetDefaultTextFormat(pdoc->pDocument.pObject, &fmt);
  Scaleform::Render::Text::StyledText::SetDefaultParagraphFormat(pdoc->pDocument.pObject, &defaultParagraphFmt);
  Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&defaultParagraphFmt);
  Scaleform::Render::Text::TextFormat::~TextFormat(&fmt);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetUnderline(
        Scaleform::GFx::DrawTextImpl *this,
        bool underline,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  Scaleform::Render::TreeText::SetUnderline(this->pTextNode.pObject, underline, startPos, endPos);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetVAlignment(
        Scaleform::GFx::DrawTextImpl *this,
        Scaleform::GFx::DrawText::VAlignment a)
{
  Scaleform::Render::TreeText::SetVAlignment(this->pTextNode.pObject, a);
}

void __fastcall Scaleform::GFx::DrawTextManager::SetViewport(
        Scaleform::GFx::DrawTextManager *this,
        const Scaleform::Render::Viewport *vp)
{
  Scaleform::GFx::DrawTextManagerImpl *pImpl; // rcx
  Scaleform::Render::Matrix2x4<float> m; // [rsp+20h] [rbp-38h] BYREF

  Scaleform::Render::TreeRoot::SetViewport(this->pImpl->pRootNode.pObject, vp);
  pImpl = this->pImpl;
  *(_OWORD *)&m.M[0][0] = 0x3D4CCCCDui64;
  m.M[1][0] = 0.0;
  *(_QWORD *)&m.M[1][1] = 1028443341i64;
  m.M[1][3] = 0.0;
  Scaleform::Render::TreeNode::SetMatrix(pImpl->pRootNode.pObject, &m);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetVisible(Scaleform::GFx::DrawTextImpl *this, bool visible)
{
  Scaleform::Render::TreeNode::SetVisible(this->pTextNode.pObject, visible);
}

void __fastcall Scaleform::GFx::DrawTextImpl::SetWordWrap(Scaleform::GFx::DrawTextImpl *this, bool wordWrap)
{
  Scaleform::Render::TreeText::SetWordWrap(this->pTextNode.pObject, wordWrap);
}

