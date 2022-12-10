#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_buttondef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagesupport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_morphcharacter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loadprocess.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displaylist.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"

bool Scaleform::GFx::RegisterTagLoader(unsigned long tagType, void(*tagLoaderFunc)(Scaleform::GFx::LoadProcess *, const Scaleform::GFx::TagInfo &)); // 0x14036E710
void Scaleform::GFx::GFx_FrameLabelLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036D4E0
void Scaleform::GFx::GFx_SetBackgroundColorLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036BAD0
void Scaleform::GFx::GFx_JpegTablesLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036BB40
void Scaleform::GFx::GFx_DefineBitsJpegLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036BC70
class Scaleform::Ptr<Scaleform::Render::ImageSource>
{
protected:
	Scaleform::Render::ImageSource * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ImageSource>(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	Ptr<Scaleform::Render::ImageSource>(Scaleform::Render::ImageSource *);
	Ptr<Scaleform::Render::ImageSource>(Scaleform::Ptr<Scaleform::Render::ImageSource> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ImageSource>(Scaleform::Pickable<Scaleform::Render::ImageSource>);
	Ptr<Scaleform::Render::ImageSource>(Scaleform::Render::ImageSource &);
	Ptr<Scaleform::Render::ImageSource>();
	~Ptr<Scaleform::Render::ImageSource>();
	bool operator==(Scaleform::Render::ImageSource *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	bool operator!=(Scaleform::Render::ImageSource *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & operator=(Scaleform::Pickable<Scaleform::Render::ImageSource>);
	const Scaleform::Ptr<Scaleform::Render::ImageSource> & operator=(Scaleform::Render::ImageSource &);
	const Scaleform::Ptr<Scaleform::Render::ImageSource> & operator=(Scaleform::Render::ImageSource *);
	const Scaleform::Ptr<Scaleform::Render::ImageSource> & operator=(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & SetPtr(Scaleform::Pickable<Scaleform::Render::ImageSource>);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & SetPtr(Scaleform::Render::ImageSource &);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & SetPtr(Scaleform::Render::ImageSource *);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ImageSource * & GetRawRef();
	Scaleform::Render::ImageSource * GetPtr();
	Scaleform::Render::ImageSource & operator*();
	Scaleform::Render::ImageSource * operator->();
	Scaleform::Render::ImageSource * operator class Scaleform::Render::ImageSource *();
	Scaleform::Ptr<Scaleform::Render::ImageSource> & Pick(Scaleform::Render::ImageSource *);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & Pick(Scaleform::Pickable<Scaleform::Render::ImageSource>);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & Pick(Scaleform::Ptr<Scaleform::Render::ImageSource> &);
};
void Scaleform::GFx::GFx_DefineBitsJpeg2Loader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036BEB0
void Scaleform::GFx::GFx_DefineBitsJpeg3Loader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036C090
void Scaleform::GFx::GFx_DefineBitsLossless2Loader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036CBB0
void Scaleform::GFx::GFx_DefineShapeLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036C210
class Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef>
{
protected:
	Scaleform::GFx::SwfShapeCharacterDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::SwfShapeCharacterDef>(const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> &);
	Ptr<Scaleform::GFx::SwfShapeCharacterDef>(Scaleform::GFx::SwfShapeCharacterDef *);
	Ptr<Scaleform::GFx::SwfShapeCharacterDef>(Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::SwfShapeCharacterDef>(Scaleform::Pickable<Scaleform::GFx::SwfShapeCharacterDef>);
	Ptr<Scaleform::GFx::SwfShapeCharacterDef>(Scaleform::GFx::SwfShapeCharacterDef &);
	Ptr<Scaleform::GFx::SwfShapeCharacterDef>();
	~Ptr<Scaleform::GFx::SwfShapeCharacterDef>();
	bool operator==(Scaleform::GFx::SwfShapeCharacterDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> &);
	bool operator!=(Scaleform::GFx::SwfShapeCharacterDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> &);
	Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & operator=(Scaleform::Pickable<Scaleform::GFx::SwfShapeCharacterDef>);
	const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & operator=(Scaleform::GFx::SwfShapeCharacterDef &);
	const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & operator=(Scaleform::GFx::SwfShapeCharacterDef *);
	const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> &);
	Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::SwfShapeCharacterDef>);
	Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & SetPtr(Scaleform::GFx::SwfShapeCharacterDef &);
	Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & SetPtr(Scaleform::GFx::SwfShapeCharacterDef *);
	Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::SwfShapeCharacterDef * & GetRawRef();
	Scaleform::GFx::SwfShapeCharacterDef * GetPtr();
	Scaleform::GFx::SwfShapeCharacterDef & operator*();
	Scaleform::GFx::SwfShapeCharacterDef * operator->();
	Scaleform::GFx::SwfShapeCharacterDef * operator class Scaleform::GFx::SwfShapeCharacterDef *();
	Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & Pick(Scaleform::GFx::SwfShapeCharacterDef *);
	Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & Pick(Scaleform::Pickable<Scaleform::GFx::SwfShapeCharacterDef>);
	Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & Pick(Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> &);
};
void Scaleform::GFx::GFx_DefineShapeMorphLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036C3D0
class Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef>
{
protected:
	Scaleform::GFx::MorphCharacterDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::MorphCharacterDef>(const Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> &);
	Ptr<Scaleform::GFx::MorphCharacterDef>(Scaleform::GFx::MorphCharacterDef *);
	Ptr<Scaleform::GFx::MorphCharacterDef>(Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::MorphCharacterDef>(Scaleform::Pickable<Scaleform::GFx::MorphCharacterDef>);
	Ptr<Scaleform::GFx::MorphCharacterDef>(Scaleform::GFx::MorphCharacterDef &);
	Ptr<Scaleform::GFx::MorphCharacterDef>();
	~Ptr<Scaleform::GFx::MorphCharacterDef>();
	bool operator==(Scaleform::GFx::MorphCharacterDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> &);
	bool operator!=(Scaleform::GFx::MorphCharacterDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> &);
	Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> & operator=(Scaleform::Pickable<Scaleform::GFx::MorphCharacterDef>);
	const Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> & operator=(Scaleform::GFx::MorphCharacterDef &);
	const Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> & operator=(Scaleform::GFx::MorphCharacterDef *);
	const Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> &);
	Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::MorphCharacterDef>);
	Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> & SetPtr(Scaleform::GFx::MorphCharacterDef &);
	Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> & SetPtr(Scaleform::GFx::MorphCharacterDef *);
	Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::MorphCharacterDef * & GetRawRef();
	Scaleform::GFx::MorphCharacterDef * GetPtr();
	Scaleform::GFx::MorphCharacterDef & operator*();
	Scaleform::GFx::MorphCharacterDef * operator->();
	Scaleform::GFx::MorphCharacterDef * operator class Scaleform::GFx::MorphCharacterDef *();
	Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> & Pick(Scaleform::GFx::MorphCharacterDef *);
	Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> & Pick(Scaleform::Pickable<Scaleform::GFx::MorphCharacterDef>);
	Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> & Pick(Scaleform::Ptr<Scaleform::GFx::MorphCharacterDef> &);
};
void Scaleform::GFx::GFx_DefineFontLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036C4D0
void Scaleform::GFx::GFx_DebugIDLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036C690
void Scaleform::GFx::GFx_DefineFontInfoLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036C750
void Scaleform::GFx::GFx_PlaceObjectLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036C820
void Scaleform::GFx::GFx_PlaceObject2Loader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036C8F0
void Scaleform::GFx::GFx_PlaceObject3Loader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036CA70
void Scaleform::GFx::GFx_SpriteLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036D100
class Scaleform::Ptr<Scaleform::GFx::SpriteDef>
{
protected:
	Scaleform::GFx::SpriteDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::SpriteDef>(const Scaleform::Ptr<Scaleform::GFx::SpriteDef> &);
	Ptr<Scaleform::GFx::SpriteDef>(Scaleform::GFx::SpriteDef *);
	Ptr<Scaleform::GFx::SpriteDef>(Scaleform::Ptr<Scaleform::GFx::SpriteDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::SpriteDef>(Scaleform::Pickable<Scaleform::GFx::SpriteDef>);
	Ptr<Scaleform::GFx::SpriteDef>(Scaleform::GFx::SpriteDef &);
	Ptr<Scaleform::GFx::SpriteDef>();
	~Ptr<Scaleform::GFx::SpriteDef>();
	bool operator==(Scaleform::GFx::SpriteDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::SpriteDef> &);
	bool operator!=(Scaleform::GFx::SpriteDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::SpriteDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::SpriteDef> &);
	Scaleform::Ptr<Scaleform::GFx::SpriteDef> & operator=(Scaleform::Pickable<Scaleform::GFx::SpriteDef>);
	const Scaleform::Ptr<Scaleform::GFx::SpriteDef> & operator=(Scaleform::GFx::SpriteDef &);
	const Scaleform::Ptr<Scaleform::GFx::SpriteDef> & operator=(Scaleform::GFx::SpriteDef *);
	const Scaleform::Ptr<Scaleform::GFx::SpriteDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::SpriteDef> &);
	Scaleform::Ptr<Scaleform::GFx::SpriteDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::SpriteDef>);
	Scaleform::Ptr<Scaleform::GFx::SpriteDef> & SetPtr(Scaleform::GFx::SpriteDef &);
	Scaleform::Ptr<Scaleform::GFx::SpriteDef> & SetPtr(Scaleform::GFx::SpriteDef *);
	Scaleform::Ptr<Scaleform::GFx::SpriteDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::SpriteDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::SpriteDef * & GetRawRef();
	Scaleform::GFx::SpriteDef * GetPtr();
	Scaleform::GFx::SpriteDef & operator*();
	Scaleform::GFx::SpriteDef * operator->();
	Scaleform::GFx::SpriteDef * operator class Scaleform::GFx::SpriteDef *();
	Scaleform::Ptr<Scaleform::GFx::SpriteDef> & Pick(Scaleform::GFx::SpriteDef *);
	Scaleform::Ptr<Scaleform::GFx::SpriteDef> & Pick(Scaleform::Pickable<Scaleform::GFx::SpriteDef>);
	Scaleform::Ptr<Scaleform::GFx::SpriteDef> & Pick(Scaleform::Ptr<Scaleform::GFx::SpriteDef> &);
};
void Scaleform::GFx::GFx_RemoveObjectLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036D1F0
void Scaleform::GFx::GFx_RemoveObject2Loader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036D2C0
void Scaleform::GFx::GFx_ButtonCharacterLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036D3E0
class Scaleform::Ptr<Scaleform::GFx::ButtonDef>
{
protected:
	Scaleform::GFx::ButtonDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ButtonDef>(const Scaleform::Ptr<Scaleform::GFx::ButtonDef> &);
	Ptr<Scaleform::GFx::ButtonDef>(Scaleform::GFx::ButtonDef *);
	Ptr<Scaleform::GFx::ButtonDef>(Scaleform::Ptr<Scaleform::GFx::ButtonDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ButtonDef>(Scaleform::Pickable<Scaleform::GFx::ButtonDef>);
	Ptr<Scaleform::GFx::ButtonDef>(Scaleform::GFx::ButtonDef &);
	Ptr<Scaleform::GFx::ButtonDef>();
	~Ptr<Scaleform::GFx::ButtonDef>();
	bool operator==(Scaleform::GFx::ButtonDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ButtonDef> &);
	bool operator!=(Scaleform::GFx::ButtonDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ButtonDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ButtonDef> &);
	Scaleform::Ptr<Scaleform::GFx::ButtonDef> & operator=(Scaleform::Pickable<Scaleform::GFx::ButtonDef>);
	const Scaleform::Ptr<Scaleform::GFx::ButtonDef> & operator=(Scaleform::GFx::ButtonDef &);
	const Scaleform::Ptr<Scaleform::GFx::ButtonDef> & operator=(Scaleform::GFx::ButtonDef *);
	const Scaleform::Ptr<Scaleform::GFx::ButtonDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::ButtonDef> &);
	Scaleform::Ptr<Scaleform::GFx::ButtonDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ButtonDef>);
	Scaleform::Ptr<Scaleform::GFx::ButtonDef> & SetPtr(Scaleform::GFx::ButtonDef &);
	Scaleform::Ptr<Scaleform::GFx::ButtonDef> & SetPtr(Scaleform::GFx::ButtonDef *);
	Scaleform::Ptr<Scaleform::GFx::ButtonDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ButtonDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ButtonDef * & GetRawRef();
	Scaleform::GFx::ButtonDef * GetPtr();
	Scaleform::GFx::ButtonDef & operator*();
	Scaleform::GFx::ButtonDef * operator->();
	Scaleform::GFx::ButtonDef * operator class Scaleform::GFx::ButtonDef *();
	Scaleform::Ptr<Scaleform::GFx::ButtonDef> & Pick(Scaleform::GFx::ButtonDef *);
	Scaleform::Ptr<Scaleform::GFx::ButtonDef> & Pick(Scaleform::Pickable<Scaleform::GFx::ButtonDef>);
	Scaleform::Ptr<Scaleform::GFx::ButtonDef> & Pick(Scaleform::Ptr<Scaleform::GFx::ButtonDef> &);
};
void Scaleform::GFx::GFx_SetTabIndexLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036DAE0
void Scaleform::GFx::GFx_ExportLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036D5A0
void Scaleform::GFx::GFx_ImportLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036D790
void Scaleform::GFx::GFx_FileAttributesLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036DCA0
void Scaleform::GFx::GFx_MetadataLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036DB70
void Scaleform::GFx::RemoveObject2Tag::CheckEventHandlers(void * * pse, Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> * pevts); // 0x14002E7C0
Scaleform::GFx::ResourceHandle Scaleform::GFx::GFx_CreateImageFileResourceHandle(Scaleform::GFx::LoadProcess * p, Scaleform::GFx::ResourceId rid, const char * pimageFileName, const char * pimageExportName, unsigned short bitmapFormat, unsigned short targetWidth, unsigned short targetHeight); // 0x14036E340
class Scaleform::Ptr<Scaleform::GFx::ImageFileInfo>
{
protected:
	Scaleform::GFx::ImageFileInfo * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ImageFileInfo>(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	Ptr<Scaleform::GFx::ImageFileInfo>(Scaleform::GFx::ImageFileInfo *);
	Ptr<Scaleform::GFx::ImageFileInfo>(Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ImageFileInfo>(Scaleform::Pickable<Scaleform::GFx::ImageFileInfo>);
	Ptr<Scaleform::GFx::ImageFileInfo>(Scaleform::GFx::ImageFileInfo &);
	Ptr<Scaleform::GFx::ImageFileInfo>();
	~Ptr<Scaleform::GFx::ImageFileInfo>();
	bool operator==(Scaleform::GFx::ImageFileInfo *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	bool operator!=(Scaleform::GFx::ImageFileInfo *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & operator=(Scaleform::Pickable<Scaleform::GFx::ImageFileInfo>);
	const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & operator=(Scaleform::GFx::ImageFileInfo &);
	const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & operator=(Scaleform::GFx::ImageFileInfo *);
	const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & operator=(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ImageFileInfo>);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & SetPtr(Scaleform::GFx::ImageFileInfo &);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & SetPtr(Scaleform::GFx::ImageFileInfo *);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ImageFileInfo * & GetRawRef();
	Scaleform::GFx::ImageFileInfo * GetPtr();
	Scaleform::GFx::ImageFileInfo & operator*();
	Scaleform::GFx::ImageFileInfo * operator->();
	Scaleform::GFx::ImageFileInfo * operator struct Scaleform::GFx::ImageFileInfo *();
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & Pick(Scaleform::GFx::ImageFileInfo *);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & Pick(Scaleform::Pickable<Scaleform::GFx::ImageFileInfo>);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & Pick(Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
};
void Scaleform::GFx::GFx_DefineExternalImageLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036A390
void Scaleform::GFx::GFx_DefineSubImageLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036B3E0
class Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo>
{
protected:
	Scaleform::GFx::SubImageResourceInfo * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::SubImageResourceInfo>(const Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> &);
	Ptr<Scaleform::GFx::SubImageResourceInfo>(Scaleform::GFx::SubImageResourceInfo *);
	Ptr<Scaleform::GFx::SubImageResourceInfo>(Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::SubImageResourceInfo>(Scaleform::Pickable<Scaleform::GFx::SubImageResourceInfo>);
	Ptr<Scaleform::GFx::SubImageResourceInfo>(Scaleform::GFx::SubImageResourceInfo &);
	Ptr<Scaleform::GFx::SubImageResourceInfo>();
	~Ptr<Scaleform::GFx::SubImageResourceInfo>();
	bool operator==(Scaleform::GFx::SubImageResourceInfo *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> &);
	bool operator!=(Scaleform::GFx::SubImageResourceInfo *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> &);
	Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> & operator=(Scaleform::Pickable<Scaleform::GFx::SubImageResourceInfo>);
	const Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> & operator=(Scaleform::GFx::SubImageResourceInfo &);
	const Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> & operator=(Scaleform::GFx::SubImageResourceInfo *);
	const Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> & operator=(const Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> &);
	Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> & SetPtr(Scaleform::Pickable<Scaleform::GFx::SubImageResourceInfo>);
	Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> & SetPtr(Scaleform::GFx::SubImageResourceInfo &);
	Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> & SetPtr(Scaleform::GFx::SubImageResourceInfo *);
	Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::SubImageResourceInfo * & GetRawRef();
	Scaleform::GFx::SubImageResourceInfo * GetPtr();
	Scaleform::GFx::SubImageResourceInfo & operator*();
	Scaleform::GFx::SubImageResourceInfo * operator->();
	Scaleform::GFx::SubImageResourceInfo * operator struct Scaleform::GFx::SubImageResourceInfo *();
	Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> & Pick(Scaleform::GFx::SubImageResourceInfo *);
	Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> & Pick(Scaleform::Pickable<Scaleform::GFx::SubImageResourceInfo>);
	Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> & Pick(Scaleform::Ptr<Scaleform::GFx::SubImageResourceInfo> &);
};
void Scaleform::GFx::GFx_FontTextureInfoLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036A690
class Scaleform::Array<Scaleform::Render::TextureGlyph,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::TextureGlyph,Scaleform::AllocatorGH<Scaleform::Render::TextureGlyph,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Render::TextureGlyph,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Render::TextureGlyph,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Render::TextureGlyph,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Render::TextureGlyph,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Render::TextureGlyph,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Render::TextureGlyph,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Render::TextureGlyph,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Render::TextureGlyph,2,Scaleform::ArrayDefaultPolicy>();
};
void(*Scaleform::GFx::SWF_TagLoaderTable)(Scaleform::GFx::LoadProcess *, const Scaleform::GFx::TagInfo &)[92]; // 0x1409F95F0
void(*Scaleform::GFx::GFx_GFX_TagLoaderTable)(Scaleform::GFx::LoadProcess *, const Scaleform::GFx::TagInfo &)[10]; // 0x1409F98D0
typedef void CURL;
typedef long long curl_off_t;
void Scaleform::GFx::GFx_DefineExternalGradientImageLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036B1E0
void Scaleform::GFx::GFx_DefineGradientMapLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036B3D0
void Scaleform::GFx::GFx_Scale9GridLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036A190
void Scaleform::GFx::GFx_DoActionLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036D390
void Scaleform::GFx::GFx_DoInitActionLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036DA90
void Scaleform::GFx::GFx_DefineSceneAndFrameLabelData(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036B6F0
void Scaleform::GFx::GFx_DefineBinaryData(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14036B9D0//decompilation failure at 1409F95F0!
//decompilation failure at 1409F98D0!
Scaleform::GFx::ImportData *__fastcall Scaleform::GFx::LoadProcess::AllocMovieDefClass<Scaleform::GFx::ImportData>(
        Scaleform::GFx::LoadProcess *this)
{
  Scaleform::GFx::DataAllocator *p_TagMemAllocator; // rcx
  unsigned __int64 BytesLeft; // rdx
  unsigned __int8 *pCurrent; // rbx
  Scaleform::GFx::ImportData *result; // rax

  p_TagMemAllocator = &this->pLoadData.pObject->TagMemAllocator;
  BytesLeft = p_TagMemAllocator->BytesLeft;
  if ( BytesLeft < 0x30 )
  {
    pCurrent = Scaleform::GFx::DataAllocator::OverflowAlloc(p_TagMemAllocator, 0x30ui64);
  }
  else
  {
    pCurrent = p_TagMemAllocator->pCurrent;
    p_TagMemAllocator->pCurrent += 48;
    p_TagMemAllocator->BytesLeft = BytesLeft - 48;
  }
  if ( !pCurrent )
    return 0i64;
  *(_QWORD *)pCurrent = 0i64;
  *((_QWORD *)pCurrent + 1) = 0i64;
  *((_QWORD *)pCurrent + 2) = 0i64;
  Scaleform::StringLH::StringLH((Scaleform::StringLH *)pCurrent + 3);
  *((_QWORD *)pCurrent + 4) = 0i64;
  result = (Scaleform::GFx::ImportData *)pCurrent;
  *((_QWORD *)pCurrent + 5) = 0i64;
  return result;
}

void __fastcall Scaleform::Render::JPEG::TablesHeader::TablesHeader(
        Scaleform::Render::JPEG::TablesHeader *this,
        Scaleform::MemoryHeap *heap,
        unsigned __int64 sz)
{
  this->Size = sz;
  this->__vftable = (Scaleform::Render::JPEG::TablesHeader_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::JPEG::TablesHeader_vtbl *)&Scaleform::Render::JPEG::ExtraData::`vftable';
  this->Data = (unsigned __int8 *)heap->Alloc(heap, sz, 0i64);
  this->__vftable = (Scaleform::Render::JPEG::TablesHeader_vtbl *)&Scaleform::Render::JPEG::TablesHeader::`vftable';
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataBase<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::Render::TextureGlyph *i; // rbx

  Size = this->Size;
  for ( i = &this->Data[Size - 1]; Size; --Size )
  {
    ((void (__fastcall *)(Scaleform::Render::TextureGlyph *, _QWORD))i->~RefCountImplCore)(i, 0i64);
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  char *v4; // rbx
  Scaleform::GFx::Resource *v5; // rcx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      v4 = (char *)this->pTable + v2;
      if ( *((_QWORD *)v4 + 2) != -2i64 )
      {
        if ( !*((_DWORD *)v4 + 10) )
        {
          v5 = (Scaleform::GFx::Resource *)*((_QWORD *)v4 + 6);
          if ( v5 )
            Scaleform::GFx::Resource::Release(v5);
        }
        *((_QWORD *)v4 + 2) = -2i64;
      }
      v2 += 40i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::GFx::LoadProcess::AddExecuteTag(
        Scaleform::GFx::LoadProcess *this,
        Scaleform::GFx::ExecuteTag *ptag)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  Scaleform::ArrayDataBase<Scaleform::GFx::ExecuteTag *,Scaleform::AllocatorGH<Scaleform::GFx::ExecuteTag *,2>,Scaleform::ArrayConstPolicy<32,16,0> > *v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  Scaleform::GFx::ExecuteTag **v9; // rcx

  v3 = (int)this->LoadState + 2i64 * (int)this->LoadState + 121;
  v4 = *((_QWORD *)&this->RefCount + v3);
  v5 = (Scaleform::ArrayDataBase<Scaleform::GFx::ExecuteTag *,Scaleform::AllocatorGH<Scaleform::GFx::ExecuteTag *,2>,Scaleform::ArrayConstPolicy<32,16,0> > *)(&this->Scaleform::GFx::LoaderTask::Scaleform::GFx::Task::Scaleform::RefCountBase<Scaleform::GFx::Task,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable + v3);
  v6 = v4 + 1;
  if ( v6 >= v5->Size )
  {
    if ( v6 <= v5->Policy.Capacity )
      goto LABEL_7;
    v7 = v6 + (v6 >> 2);
  }
  else
  {
    if ( v6 >= v5->Policy.Capacity >> 1 )
      goto LABEL_7;
    v7 = v6;
  }
  Scaleform::ArrayDataBase<Scaleform::GFx::ExecuteTag *,Scaleform::AllocatorGH<Scaleform::GFx::ExecuteTag *,2>,Scaleform::ArrayConstPolicy<32,16,0>>::Reserve(
    v5,
    v5,
    v7);
LABEL_7:
  v8 = (__int64)(v5->Data - 1);
  v5->Size = v6;
  v9 = (Scaleform::GFx::ExecuteTag **)(v8 + 8 * v6);
  if ( v9 )
    *v9 = ptag;
}

void __fastcall Scaleform::GFx::ImportData::AddSymbol(
        Scaleform::GFx::ImportData *this,
        const char *psymbolName,
        int characterId,
        unsigned int bindIndex)
{
  unsigned __int64 v8; // r8
  Scaleform::GFx::ImportData::Symbol *v9; // rbx
  void *v10; // rbx
  Scaleform::String src; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  unsigned int v13; // [rsp+2Ch] [rbp-Ch]

  Scaleform::String::String(&src);
  Scaleform::String::operator=(&src, psymbolName);
  v8 = this->Imports.Data.Size + 1;
  v12 = characterId;
  v13 = bindIndex;
  Scaleform::ArrayDataBase<Scaleform::GFx::ImportData::Symbol,Scaleform::AllocatorLH<Scaleform::GFx::ImportData::Symbol,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Imports.Data,
    this,
    v8);
  v9 = &this->Imports.Data.Data[this->Imports.Data.Size - 1];
  if ( v9 )
  {
    Scaleform::String::String(&v9->SymbolName, &src);
    v9->CharacterId = v12;
    v9->BindIndex = v13;
  }
  v10 = (void *)(src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v10);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::ConstructorMov<Scaleform::GFx::ImportData::Symbol>::DestructArray(
        Scaleform::GFx::ImportData::Symbol *p,
        unsigned __int64 count)
{
  unsigned __int64 v2; // rsi
  Scaleform::GFx::ImportData::Symbol *v3; // rdi
  volatile int *v4; // rbx

  if ( count )
  {
    v2 = count;
    v3 = &p[count - 1];
    do
    {
      v4 = (volatile int *)(v3->SymbolName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
      --v3;
      --v2;
    }
    while ( v2 );
  }
}

void __fastcall Scaleform::GFx::PlaceObject2Tag::Execute(
        Scaleform::GFx::PlaceObject2Tag *this,
        Scaleform::GFx::DisplayObjContainer *m)
{
  Scaleform::GFx::PlaceObject2Tag::ExecuteBase(this, m, 6u);
}

void __fastcall Scaleform::GFx::PlaceObject2Taga::Execute(
        Scaleform::GFx::PlaceObject2Taga *this,
        Scaleform::GFx::DisplayObjContainer *m)
{
  Scaleform::GFx::PlaceObject2Tag::ExecuteBase(this, m, 3u);
}

void __fastcall Scaleform::GFx::GFx_ButtonCharacterLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v5; // eax
  __int64 Pos; // r9
  int v7; // esi
  Scaleform::GFx::ButtonDef *v8; // rax
  Scaleform::GFx::ButtonDef *v9; // rax
  Scaleform::GFx::ButtonDef *v10; // rbx
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  Scaleform::GFx::ResourceId rid; // [rsp+30h] [rbp+8h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v5 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v5 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  v7 = pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8);
  pAltStream->Stream.Pos = Pos + 2;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  button GFxCharacter loader: CharId = %d\n");
  v8 = (Scaleform::GFx::ButtonDef *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))p->pLoadData.pObject->pHeap->Alloc)(
                                      p->pLoadData.pObject->pHeap,
                                      96i64);
  if ( v8 )
  {
    Scaleform::GFx::ButtonDef::ButtonDef(v8);
    v10 = v9;
  }
  else
  {
    v10 = 0i64;
  }
  Scaleform::GFx::ButtonDef::Read(v10, p, tagInfo->TagType);
  if ( p->LoadState == LS_LoadingRoot )
  {
    pObject = p->pLoadData.pObject;
    rid.Id = v7;
    Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(pObject, &rid, v10);
  }
  if ( v10 )
    Scaleform::GFx::Resource::Release(v10);
}

Scaleform::GFx::ResourceHandle *__fastcall Scaleform::GFx::GFx_CreateImageFileResourceHandle(
        Scaleform::GFx::ResourceHandle *result,
        Scaleform::GFx::LoadProcess *p,
        unsigned int *rid,
        const char *pimageFileName,
        const char *pimageExportName,
        unsigned __int16 bitmapFormat,
        unsigned __int16 targetWidth,
        unsigned __int16 targetHeight)
{
  Scaleform::GFx::ExporterInfoImpl *p_mExporterInfo; // rbp
  Scaleform::GFx::ResourceFileInfo *v13; // rax
  Scaleform::GFx::ResourceFileInfo *v14; // rsi
  const Scaleform::GFx::ResourceData *v15; // rax
  Scaleform::GFx::ResourceHandle *v16; // rax
  Scaleform::GFx::ResourceHandle *v17; // rbx
  Scaleform::RefCountVImpl *pResource; // rcx
  Scaleform::GFx::Resource *v19; // rcx
  bool v20; // zf
  Scaleform::GFx::ResourceHandle v22; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::GFx::ResourceData resulta; // [rsp+30h] [rbp-38h] BYREF
  Scaleform::GFx::ResourceId rida; // [rsp+70h] [rbp+8h] BYREF

  p_mExporterInfo = 0i64;
  result->HType = RH_Pointer;
  result->pResource = 0i64;
  v13 = (Scaleform::GFx::ResourceFileInfo *)Scaleform::Memory::pGlobalHeap->Alloc(
                                              Scaleform::Memory::pGlobalHeap,
                                              56i64,
                                              0i64);
  v14 = v13;
  if ( v13 )
  {
    Scaleform::GFx::ResourceFileInfo::ResourceFileInfo(v13);
    v14->__vftable = (Scaleform::GFx::ResourceFileInfo_vtbl *)&Scaleform::GFx::ImageFileInfo::`vftable';
    Scaleform::String::String((Scaleform::String *)&v14[1].RefCount);
    LODWORD(v14[1].__vftable) = 0;
    HIDWORD(v14[1].__vftable) = 1;
    Scaleform::String::operator=(&v14->FileName, pimageFileName);
    Scaleform::String::operator=((Scaleform::String *)&v14[1].RefCount, pimageExportName);
    if ( p->pLoadData.pObject->Header.mExporterInfo.SI.Format )
      p_mExporterInfo = &p->pLoadData.pObject->Header.mExporterInfo;
    v14->Format = bitmapFormat;
    LOWORD(v14[1].__vftable) = targetWidth;
    WORD1(v14[1].__vftable) = targetHeight;
    v14->pExporterInfo = &p_mExporterInfo->SI;
    if ( (*rid & 0xFFF0000) == 393216 )
      HIDWORD(v14[1].__vftable) = 3;
    rida.Id = *rid;
    v15 = Scaleform::GFx::ImageFileResourceCreator::CreateImageFileResourceData(
            &resulta,
            (Scaleform::GFx::ImageFileInfo *)v14);
    v16 = Scaleform::GFx::LoadProcess::AddDataResource(p, &v22, &rida.Id, v15);
    v17 = v16;
    if ( v16->HType == RH_Pointer )
    {
      pResource = (Scaleform::RefCountVImpl *)v16->pResource;
      if ( pResource )
        Scaleform::Render::RenderBuffer::AddRef(pResource);
    }
    if ( result->HType == RH_Pointer )
    {
      v19 = result->pResource;
      if ( v19 )
        Scaleform::GFx::Resource::Release(v19);
    }
    v20 = v22.HType == RH_Pointer;
    result->HType = v17->HType;
    result->pResource = v17->pResource;
    if ( v20 && v22.pResource )
      Scaleform::GFx::Resource::Release(v22.pResource);
    if ( resulta.pInterface )
      resulta.pInterface->Release(resulta.pInterface, resulta.hData);
    Scaleform::RefCountNTSImpl::Release(v14);
  }
  return result;
}

void __fastcall Scaleform::GFx::GFx_DebugIDLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  __int64 v3; // rsi
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v5; // eax
  __int64 Pos; // rdx
  int v7; // ecx
  void *v8; // rbx
  char buffer; // [rsp+40h] [rbp+18h] BYREF
  Scaleform::String v10; // [rsp+48h] [rbp+20h] BYREF

  Scaleform::String::String(&v10);
  v3 = 16i64;
  do
  {
    pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
    if ( !pAltStream )
      pAltStream = &p->ProcessInfo;
    v5 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
    pAltStream->Stream.UnusedBits = 0;
    if ( v5 < 1 )
      Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
    Pos = pAltStream->Stream.Pos;
    v7 = pAltStream->Stream.pBuffer[Pos];
    pAltStream->Stream.Pos = Pos + 1;
    itoa_s(v7, &buffer, 3ui64, 16);
    Scaleform::String::AppendString(&v10, &buffer, -1i64);
    --v3;
  }
  while ( v3 );
  v8 = (void *)(v10.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v10.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8);
}

void __fastcall Scaleform::GFx::GFx_DefineBinaryData(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v4; // eax
  __int64 Pos; // r10
  int v6; // ebp
  Scaleform::GFx::ButtonDef *v7; // rax
  Scaleform::GFx::Resource *v8; // rax
  Scaleform::GFx::Resource *v9; // rbx
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  Scaleform::GFx::ResourceId rid; // [rsp+30h] [rbp+8h] BYREF

  Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "Tag 'DefineBinaryData' (87) is not supported, potentially 'TLF text' fields are used. Switch to 'Classic Text'.");
  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v4 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v4 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  v6 = pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8);
  pAltStream->Stream.Pos = Pos + 2;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  DefineBinaryData: CharId = %d\n");
  Scaleform::GFx::LoadProcess::ReadU32(p);
  v7 = (Scaleform::GFx::ButtonDef *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))p->pLoadData.pObject->pHeap->Alloc)(
                                      p->pLoadData.pObject->pHeap,
                                      96i64);
  if ( v7 )
  {
    Scaleform::GFx::ButtonDef::ButtonDef(v7);
    v9 = v8;
  }
  else
  {
    v9 = 0i64;
  }
  if ( p->LoadState == LS_LoadingRoot )
  {
    pObject = p->pLoadData.pObject;
    rid.Id = v6;
    Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(pObject, &rid, v9);
  }
  if ( v9 )
    Scaleform::GFx::Resource::Release(v9);
}

void __fastcall Scaleform::GFx::GFx_DefineBitsJpeg2Loader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v5; // eax
  __int64 Pos; // r8
  unsigned __int16 v7; // r9
  unsigned int v8; // er15
  Scaleform::GFx::LoadStates *pObject; // rax
  Scaleform::Render::ImageSource *v10; // rbx
  Scaleform::GFx::ImageFileHandlerRegistry *v11; // rbp
  Scaleform::Render::ImageFileReader *Reader; // r14
  Scaleform::GFx::MovieDataDef::LoadTaskData *v13; // rax
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rbx
  Scaleform::File *v15; // rdx
  int v16; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+38h] [rbp-50h]
  __int64 v18; // [rsp+48h] [rbp-40h]
  int v19; // [rsp+50h] [rbp-38h]
  Scaleform::GFx::ResourceId rid; // [rsp+90h] [rbp+8h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v5 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v5 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  v7 = pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8);
  pAltStream->Stream.Pos = Pos + 2;
  v8 = v7;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  GFx_DefineBitsJpeg2Loader: charid = %d pos = 0x%x\n");
  pObject = p->pLoadStates.pObject;
  v10 = 0i64;
  v11 = pObject->pImageFileHandlerRegistry.pObject;
  if ( v11 )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pObject->pImageFileHandlerRegistry.pObject);
    Reader = Scaleform::Render::ImageFileHandlerRegistry::GetReader(
               &v11->Scaleform::Render::ImageFileHandlerRegistry,
               ImageFile_JPEG);
    if ( Reader )
    {
      v13 = p->pLoadData.pObject;
      v16 = 0;
      v18 = 0i64;
      v19 = 0;
      p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
      v17 = 0i64;
      *(_QWORD *)&v17 = v13->pHeap;
      if ( !p_ProcessInfo )
        p_ProcessInfo = &p->ProcessInfo;
      Scaleform::GFx::Stream::SyncFileStream(&p_ProcessInfo->Stream);
      v15 = p_ProcessInfo->Stream.pInput.pObject;
      p_ProcessInfo->Stream.ResyncFile = 1;
      v10 = (Scaleform::Render::ImageSource *)((__int64 (__fastcall *)(Scaleform::Render::ImageFileReader *, Scaleform::File *, int *, _QWORD, _QWORD, char))Reader->__vftable[1].~ImageFileHandler)(
                                                Reader,
                                                v15,
                                                &v16,
                                                0i64,
                                                tagInfo->TagLength - 2,
                                                1);
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v11);
    }
    else
    {
      Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "Jpeg System is not installed - can't load jpeg image data");
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v11);
    }
  }
  else
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "Image file handler registry is not installed - can't load jpeg image data");
  }
  rid.Id = v8;
  Scaleform::GFx::LoadProcess::AddImageResource(p, &rid.Id, v10);
  if ( v10 )
    v10->Release(v10);
}

void __fastcall Scaleform::GFx::GFx_DefineBitsJpeg3Loader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rdi
  int v5; // eax
  __int64 Pos; // r8
  unsigned __int16 v7; // si
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rdi
  int v9; // eax
  unsigned int v10; // edi
  Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *v11; // rsi
  Scaleform::GFx::ResourceId rid; // [rsp+40h] [rbp+8h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v5 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v5 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  v7 = pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8);
  pAltStream->Stream.Pos = Pos + 2;
  Scaleform::GFx::LoadProcess::ReadU32(p);
  if ( tagInfo->TagType == Tag_DefineBitsJpeg4 )
  {
    p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
    if ( !p_ProcessInfo )
      p_ProcessInfo = &p->ProcessInfo;
    v9 = p_ProcessInfo->Stream.DataSize - p_ProcessInfo->Stream.Pos;
    p_ProcessInfo->Stream.UnusedBits = 0;
    if ( v9 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(&p_ProcessInfo->Stream, 2);
    p_ProcessInfo->Stream.Pos += 2;
    v10 = v7;
    v11 = &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>;
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "  GFx_DefineBitsJpeg4Loader: charid = %d pos = %d deblocking = %d\n");
  }
  else
  {
    v10 = v7;
    v11 = &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>;
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "  GFx_DefineBitsJpeg3Loader: charid = %d pos = %d\n");
  }
  Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
    v11,
    "zlib or jpeglib are not linked - can't load jpeg+zipped image data!");
  rid.Id = v10;
  Scaleform::GFx::LoadProcess::AddImageResource(p, &rid.Id, 0i64);
}

void __fastcall Scaleform::GFx::GFx_DefineBitsJpegLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v5; // eax
  __int64 Pos; // r9
  unsigned __int8 *pBuffer; // r8
  unsigned __int8 v8; // r12
  unsigned __int8 v9; // r13
  Scaleform::Render::ImageSource *v10; // rbx
  Scaleform::GFx::LoadStates *pObject; // rax
  Scaleform::GFx::ImageFileHandlerRegistry *v12; // rsi
  Scaleform::Render::ImageFileReader *Reader; // r14
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rcx
  Scaleform::Render::JPEG::TablesHeader *v15; // rbp
  Scaleform::GFx::MovieDataDef::LoadTaskData *v16; // rax
  Scaleform::GFx::SWFProcessInfo *v17; // rbx
  __int64 v18; // rax
  Scaleform::GFx::SWFProcessInfo *v19; // rbx
  int v20; // [rsp+30h] [rbp-78h] BYREF
  __int128 v21; // [rsp+38h] [rbp-70h]
  __int64 v22; // [rsp+48h] [rbp-60h]
  int v23; // [rsp+50h] [rbp-58h]
  int v24; // [rsp+58h] [rbp-50h] BYREF
  __int128 v25; // [rsp+60h] [rbp-48h]
  __int64 v26; // [rsp+70h] [rbp-38h]
  int v27; // [rsp+78h] [rbp-30h]
  Scaleform::GFx::ResourceId rid; // [rsp+B0h] [rbp+8h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v5 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v5 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  pBuffer = pAltStream->Stream.pBuffer;
  v8 = pBuffer[(unsigned int)(Pos + 1)];
  v9 = pBuffer[Pos];
  pAltStream->Stream.Pos = Pos + 2;
  v10 = 0i64;
  pObject = p->pLoadStates.pObject;
  v12 = pObject->pImageFileHandlerRegistry.pObject;
  if ( v12 )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pObject->pImageFileHandlerRegistry.pObject);
    Reader = Scaleform::Render::ImageFileHandlerRegistry::GetReader(
               &v12->Scaleform::Render::ImageFileHandlerRegistry,
               ImageFile_JPEG);
    if ( Reader )
    {
      p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
      if ( !p_ProcessInfo )
        p_ProcessInfo = &p->ProcessInfo;
      Scaleform::GFx::Stream::SyncFileStream(&p_ProcessInfo->Stream);
      v15 = p->pJpegTables.pObject;
      v16 = p->pLoadData.pObject;
      if ( v15 )
      {
        v20 = 0;
        v22 = 0i64;
        v23 = 0;
        v17 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
        v21 = 0i64;
        *(_QWORD *)&v21 = v16->pHeap;
        if ( !v17 )
          v17 = &p->ProcessInfo;
        Scaleform::GFx::Stream::SyncFileStream(&v17->Stream);
        v17->Stream.ResyncFile = 1;
        v18 = ((__int64 (__fastcall *)(Scaleform::Render::ImageFileReader *, Scaleform::File *, int *, Scaleform::Render::JPEG::TablesHeader *, _QWORD, _BYTE, int, _QWORD, _QWORD, __int64, int, int, _QWORD, _QWORD, __int64, int))Reader->__vftable[1].~ImageFileHandler)(
                Reader,
                v17->Stream.pInput.pObject,
                &v20,
                v15,
                tagInfo->TagLength - 2,
                0,
                v20,
                v21,
                *((_QWORD *)&v21 + 1),
                v22,
                v23,
                v24,
                v25,
                *((_QWORD *)&v25 + 1),
                v26,
                v27);
      }
      else
      {
        v24 = 0;
        v26 = 0i64;
        v27 = 0;
        v19 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
        v25 = 0i64;
        *(_QWORD *)&v25 = v16->pHeap;
        if ( !v19 )
          v19 = &p->ProcessInfo;
        Scaleform::GFx::Stream::SyncFileStream(&v19->Stream);
        v19->Stream.ResyncFile = 1;
        v18 = ((__int64 (__fastcall *)(Scaleform::Render::ImageFileReader *, Scaleform::File *, int *, _QWORD, _QWORD, _BYTE, int, _QWORD, _QWORD, __int64, int, int, _QWORD, _QWORD, __int64, int))Reader->__vftable[1].~ImageFileHandler)(
                Reader,
                v19->Stream.pInput.pObject,
                &v24,
                0i64,
                tagInfo->TagLength - 2,
                0,
                v20,
                v21,
                *((_QWORD *)&v21 + 1),
                v22,
                v23,
                v24,
                v25,
                *((_QWORD *)&v25 + 1),
                v26,
                v27);
      }
      v10 = (Scaleform::Render::ImageSource *)v18;
    }
    else
    {
      Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "Jpeg System is not installed - can't load jpeg image data");
    }
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v12);
  }
  else
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "Image file handler registry is not installed - can't load jpeg image data");
  }
  rid.Id = v9 | (v8 << 8);
  Scaleform::GFx::LoadProcess::AddImageResource(p, &rid.Id, v10);
  if ( v10 )
    v10->Release(v10);
}

void __fastcall Scaleform::GFx::GFx_DefineBitsLossless2Loader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v5; // eax
  __int64 Pos; // r8
  unsigned __int16 v7; // r15
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int8 v11; // bp
  Scaleform::GFx::SWFProcessInfo *v12; // rbx
  int v13; // eax
  __int64 v14; // r8
  unsigned __int16 v15; // r14
  Scaleform::GFx::SWFProcessInfo *v16; // rbx
  int v17; // eax
  __int64 v18; // r9
  unsigned __int8 *pBuffer; // rdx
  unsigned int v20; // er13
  unsigned int v21; // er12
  Scaleform::Render::ImageSource *v22; // rbx
  Scaleform::GFx::ZlibSupportBase *pObject; // r15
  __int16 U8; // r14
  Scaleform::GFx::SWFProcessInfo *v25; // rax
  unsigned __int16 colorTableSize; // r14
  int v27; // ebp
  Scaleform::File *UnderlyingFile; // rax
  Scaleform::Render::ImageSource *v29; // rax
  Scaleform::GFx::SWFProcessInfo *v30; // rax
  int v31; // ebp
  Scaleform::GFx::ZlibImageSource *v32; // r14
  Scaleform::File *v33; // rax
  Scaleform::Render::Size<unsigned long> *p_size; // r9
  Scaleform::GFx::SWFProcessInfo *v35; // rax
  int v36; // ebp
  __int16 v37; // r14
  Scaleform::GFx::SWFProcessInfo *v38; // rax
  unsigned __int16 v39; // r14
  int v40; // ebp
  Scaleform::GFx::ZlibImageSource *v41; // rdi
  Scaleform::File *v42; // rax
  Scaleform::GFx::SWFProcessInfo *v43; // rax
  int v44; // ebp
  Scaleform::GFx::SWFProcessInfo *v45; // rax
  int v46; // ebp
  Scaleform::GFx::ZlibImageSource::SourceBitmapDataFormat bmpFormatId; // [rsp+20h] [rbp-88h]
  Scaleform::Render::ImageFormat format; // [rsp+28h] [rbp-80h]
  unsigned __int64 uncompressedLen; // [rsp+38h] [rbp-70h]
  Scaleform::Render::Size<unsigned long> v50; // [rsp+40h] [rbp-68h] BYREF
  int v51[2]; // [rsp+48h] [rbp-60h] BYREF
  Scaleform::Render::Size<unsigned long> size; // [rsp+50h] [rbp-58h] BYREF
  Scaleform::GFx::ResourceId rid; // [rsp+B0h] [rbp+8h] BYREF
  Scaleform::Render::Size<unsigned long> v54; // [rsp+B8h] [rbp+10h] BYREF
  Scaleform::GFx::ZlibImageSource *v55; // [rsp+C0h] [rbp+18h] BYREF
  unsigned int v56; // [rsp+C8h] [rbp+20h] BYREF
  unsigned int v57; // [rsp+CCh] [rbp+24h]

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v5 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v5 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  v7 = pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8);
  pAltStream->Stream.Pos = Pos + 2;
  p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !p_ProcessInfo )
    p_ProcessInfo = &p->ProcessInfo;
  v9 = p_ProcessInfo->Stream.DataSize - p_ProcessInfo->Stream.Pos;
  p_ProcessInfo->Stream.UnusedBits = 0;
  if ( v9 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer1(&p_ProcessInfo->Stream);
  v10 = p_ProcessInfo->Stream.Pos;
  v11 = p_ProcessInfo->Stream.pBuffer[v10];
  p_ProcessInfo->Stream.Pos = v10 + 1;
  v12 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !v12 )
    v12 = &p->ProcessInfo;
  v13 = v12->Stream.DataSize - v12->Stream.Pos;
  v12->Stream.UnusedBits = 0;
  if ( v13 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&v12->Stream, 2);
  v14 = v12->Stream.Pos;
  v15 = v12->Stream.pBuffer[v14] | (v12->Stream.pBuffer[(unsigned int)(v14 + 1)] << 8);
  v12->Stream.Pos = v14 + 2;
  v16 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !v16 )
    v16 = &p->ProcessInfo;
  v17 = v16->Stream.DataSize - v16->Stream.Pos;
  v16->Stream.UnusedBits = 0;
  if ( v17 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&v16->Stream, 2);
  v18 = v16->Stream.Pos;
  pBuffer = v16->Stream.pBuffer;
  v20 = v15;
  rid.Id = v7;
  v21 = (unsigned __int16)(pBuffer[v18] | (pBuffer[(unsigned int)(v18 + 1)] << 8));
  v16->Stream.Pos = v18 + 2;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  DefBitsLossless2: tagInfo.TagType = %d, id = %d, fmt = %d, w = %d, h = %d\n");
  v22 = 0i64;
  pObject = p->pLoadStates.pObject->pZlibSupport.pObject;
  if ( !pObject )
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "Error: GFxZlibState is not set - can't load zipped image data\n");
    goto LABEL_52;
  }
  if ( tagInfo->TagType == Tag_DefineBitsLossless )
  {
    switch ( v11 )
    {
      case 3u:
        U8 = Scaleform::GFx::LoadProcess::ReadU8(p);
        v25 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
        colorTableSize = U8 + 1;
        if ( !v25 )
          v25 = &p->ProcessInfo;
        v27 = tagInfo->TagLength + tagInfo->TagDataOffset + v25->Stream.DataSize - v25->Stream.FilePos - v25->Stream.Pos;
        v55 = (Scaleform::GFx::ZlibImageSource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   72i64);
        if ( v55 )
        {
          v54.Width = v20;
          v54.Height = v21;
          UnderlyingFile = Scaleform::GFx::LoadProcess::GetUnderlyingFile(p);
          Scaleform::GFx::ZlibImageSource::ZlibImageSource(
            v55,
            pObject,
            UnderlyingFile,
            &v54,
            ColorMappedRGB,
            Image_R8G8B8,
            colorTableSize,
            v27);
LABEL_51:
          v22 = v29;
          goto LABEL_52;
        }
        goto LABEL_52;
      case 4u:
        v30 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
        if ( !v30 )
          v30 = &p->ProcessInfo;
        v31 = tagInfo->TagLength + tagInfo->TagDataOffset + v30->Stream.DataSize - v30->Stream.FilePos - v30->Stream.Pos;
        v32 = (Scaleform::GFx::ZlibImageSource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   72i64);
        if ( !v32 )
          goto LABEL_52;
        v55 = (Scaleform::GFx::ZlibImageSource *)__PAIR64__(v21, v20);
        v33 = Scaleform::GFx::LoadProcess::GetUnderlyingFile(p);
        uncompressedLen = v31;
        p_size = (Scaleform::Render::Size<unsigned long> *)&v55;
        format = Image_R8G8B8;
        bmpFormatId = RGB16;
        break;
      case 5u:
        v35 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
        if ( !v35 )
          v35 = &p->ProcessInfo;
        v36 = tagInfo->TagLength + tagInfo->TagDataOffset + v35->Stream.DataSize - v35->Stream.FilePos - v35->Stream.Pos;
        v32 = (Scaleform::GFx::ZlibImageSource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   72i64);
        if ( !v32 )
          goto LABEL_52;
        v56 = v20;
        v57 = v21;
        v33 = Scaleform::GFx::LoadProcess::GetUnderlyingFile(p);
        uncompressedLen = v36;
        p_size = (Scaleform::Render::Size<unsigned long> *)&v56;
        format = Image_R8G8B8;
        bmpFormatId = RGB24;
        break;
      default:
        goto LABEL_52;
    }
LABEL_50:
    Scaleform::GFx::ZlibImageSource::ZlibImageSource(v32, pObject, v33, p_size, bmpFormatId, format, 0, uncompressedLen);
    goto LABEL_51;
  }
  if ( v11 != 3 )
  {
    if ( v11 == 4 )
    {
      v43 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
      if ( !v43 )
        v43 = &p->ProcessInfo;
      v44 = tagInfo->TagLength + tagInfo->TagDataOffset + v43->Stream.DataSize - v43->Stream.FilePos - v43->Stream.Pos;
      v32 = (Scaleform::GFx::ZlibImageSource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 72i64);
      if ( !v32 )
        goto LABEL_52;
      v51[0] = v20;
      v51[1] = v21;
      v33 = Scaleform::GFx::LoadProcess::GetUnderlyingFile(p);
      uncompressedLen = v44;
      p_size = (Scaleform::Render::Size<unsigned long> *)v51;
      format = Image_R8G8B8A8;
      bmpFormatId = RGB16;
    }
    else
    {
      if ( v11 != 5 )
        goto LABEL_52;
      v45 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
      if ( !v45 )
        v45 = &p->ProcessInfo;
      v46 = tagInfo->TagLength + tagInfo->TagDataOffset + v45->Stream.DataSize - v45->Stream.FilePos - v45->Stream.Pos;
      v32 = (Scaleform::GFx::ZlibImageSource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 72i64);
      if ( !v32 )
        goto LABEL_52;
      size.Width = v20;
      size.Height = v21;
      v33 = Scaleform::GFx::LoadProcess::GetUnderlyingFile(p);
      uncompressedLen = v46;
      p_size = &size;
      format = Image_R8G8B8A8;
      bmpFormatId = RGBA;
    }
    goto LABEL_50;
  }
  v37 = Scaleform::GFx::LoadProcess::ReadU8(p);
  v38 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  v39 = v37 + 1;
  if ( !v38 )
    v38 = &p->ProcessInfo;
  v40 = tagInfo->TagLength + tagInfo->TagDataOffset + v38->Stream.DataSize - v38->Stream.FilePos - v38->Stream.Pos;
  v41 = (Scaleform::GFx::ZlibImageSource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                             Scaleform::Memory::pGlobalHeap,
                                             72i64);
  if ( v41 )
  {
    v50.Width = v20;
    v50.Height = v21;
    v42 = Scaleform::GFx::LoadProcess::GetUnderlyingFile(p);
    Scaleform::GFx::ZlibImageSource::ZlibImageSource(v41, pObject, v42, &v50, ColorMappedRGBA, Image_R8G8B8A8, v39, v40);
    goto LABEL_51;
  }
LABEL_52:
  Scaleform::GFx::LoadProcess::AddImageResource(p, &rid.Id, v22);
  if ( v22 )
    v22->Release(v22);
}

void __fastcall Scaleform::GFx::GFx_DefineExternalGradientImageLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rsi
  int v4; // eax
  __int64 Pos; // r8
  int v6; // eax
  int v7; // ebp
  __int64 v8; // r9
  unsigned __int16 bitmapFormat; // r14
  int v10; // eax
  void *v11; // rbx
  Scaleform::GFx::ResourceHandle result; // [rsp+40h] [rbp-38h] BYREF
  Scaleform::GFx::ResourceId rid; // [rsp+80h] [rbp+8h] BYREF
  Scaleform::String pstr; // [rsp+88h] [rbp+10h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v4 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v4 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  v6 = pAltStream->Stream.DataSize - (Pos + 2);
  v7 = pAltStream->Stream.pBuffer[Pos] | ((pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] | 0x500) << 8);
  pAltStream->Stream.Pos = Pos + 2;
  pAltStream->Stream.UnusedBits = 0;
  if ( v6 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  v8 = pAltStream->Stream.Pos;
  bitmapFormat = pAltStream->Stream.pBuffer[v8] | (pAltStream->Stream.pBuffer[(unsigned int)(v8 + 1)] << 8);
  pAltStream->Stream.Pos = v8 + 2;
  v10 = pAltStream->Stream.DataSize - (v8 + 2);
  pAltStream->Stream.UnusedBits = 0;
  if ( v10 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  pAltStream->Stream.Pos += 2;
  Scaleform::String::String(&pstr);
  Scaleform::GFx::Stream::ReadStringWithLength(&pAltStream->Stream, &pstr);
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "  DefineExternalGradientImage: tagInfo.TagType = %d, id = 0x%X, fmt = %d, name = '%s', size = %d\n");
  rid.Id = v7;
  Scaleform::GFx::GFx_CreateImageFileResourceHandle(
    &result,
    p,
    &rid.Id,
    (const char *)((pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
    &pnewText,
    bitmapFormat,
    0,
    0);
  if ( result.HType == RH_Pointer && result.pResource )
    Scaleform::GFx::Resource::Release(result.pResource);
  v11 = (void *)(pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v11);
}

void __fastcall Scaleform::GFx::GFx_DefineExternalImageLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // r12
  int v5; // eax
  __int64 Pos; // r8
  int v7; // esi
  Scaleform::GFx::SWFProcessInfo *v8; // rbx
  int v9; // eax
  __int64 v10; // r8
  unsigned __int16 bitmapFormat; // r15
  Scaleform::GFx::SWFProcessInfo *v12; // rbx
  int v13; // eax
  __int64 v14; // r8
  unsigned __int16 targetWidth; // r14
  Scaleform::GFx::SWFProcessInfo *v16; // rbp
  int v17; // eax
  __int64 v18; // r8
  unsigned __int16 targetHeight; // bx
  void *v20; // rbx
  void *v21; // rbx
  Scaleform::GFx::ResourceHandle result; // [rsp+50h] [rbp-48h] BYREF
  Scaleform::GFx::ResourceId rid; // [rsp+A0h] [rbp+8h] BYREF
  Scaleform::String v24; // [rsp+A8h] [rbp+10h] BYREF
  Scaleform::String pstr; // [rsp+B0h] [rbp+18h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  p_ProcessInfo = &p->ProcessInfo;
  if ( pAltStream )
    p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  else
    pAltStream = &p->ProcessInfo;
  v5 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v5 < 4 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
  Pos = pAltStream->Stream.Pos;
  v7 = pAltStream->Stream.pBuffer[Pos] | ((pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] | ((pAltStream->Stream.pBuffer[(unsigned int)(Pos + 2)] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 3)] << 8)) << 8)) << 8);
  pAltStream->Stream.Pos = Pos + 4;
  v8 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !v8 )
    v8 = &p->ProcessInfo;
  v9 = v8->Stream.DataSize - v8->Stream.Pos;
  v8->Stream.UnusedBits = 0;
  if ( v9 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&v8->Stream, 2);
  v10 = v8->Stream.Pos;
  bitmapFormat = v8->Stream.pBuffer[v10] | (v8->Stream.pBuffer[(unsigned int)(v10 + 1)] << 8);
  v8->Stream.Pos = v10 + 2;
  v12 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !v12 )
    v12 = &p->ProcessInfo;
  v13 = v12->Stream.DataSize - v12->Stream.Pos;
  v12->Stream.UnusedBits = 0;
  if ( v13 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&v12->Stream, 2);
  v14 = v12->Stream.Pos;
  targetWidth = v12->Stream.pBuffer[v14] | (v12->Stream.pBuffer[(unsigned int)(v14 + 1)] << 8);
  v12->Stream.Pos = v14 + 2;
  v16 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !v16 )
    v16 = &p->ProcessInfo;
  v17 = v16->Stream.DataSize - v16->Stream.Pos;
  v16->Stream.UnusedBits = 0;
  if ( v17 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&v16->Stream, 2);
  v18 = v16->Stream.Pos;
  targetHeight = v16->Stream.pBuffer[v18] | (v16->Stream.pBuffer[(unsigned int)(v18 + 1)] << 8);
  v16->Stream.Pos = v18 + 2;
  Scaleform::String::String(&pstr);
  Scaleform::String::String(&v24);
  Scaleform::GFx::Stream::ReadStringWithLength(&p_ProcessInfo->Stream, &pstr);
  Scaleform::GFx::Stream::ReadStringWithLength(&p_ProcessInfo->Stream, &v24);
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)p_ProcessInfo,
    "  DefineExternalImage: tagInfo.TagType = %d, id = 0x%X, fmt = %d, name = '%s', exp = '%s', w = %d, h = %d\n");
  rid.Id = v7 & 0x9FFFF;
  Scaleform::GFx::GFx_CreateImageFileResourceHandle(
    &result,
    p,
    &rid.Id,
    (const char *)((v24.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
    (const char *)((pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
    bitmapFormat,
    targetWidth,
    targetHeight);
  if ( result.HType == RH_Pointer && result.pResource )
    Scaleform::GFx::Resource::Release(result.pResource);
  v20 = (void *)(v24.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v24.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v20);
  v21 = (void *)(pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v21);
}

void __fastcall Scaleform::GFx::GFx_DefineFontInfoLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v5; // eax
  __int64 Pos; // r9
  unsigned __int16 v7; // r8
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  unsigned int v9; // ebx
  Scaleform::GFx::FontData *FontData; // rax
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rdx
  Scaleform::GFx::ResourceId rid; // [rsp+30h] [rbp+8h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v5 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v5 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  v7 = pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8);
  pAltStream->Stream.Pos = Pos + 2;
  pObject = p->pLoadData.pObject;
  v9 = v7;
  rid.Id = v7;
  FontData = (Scaleform::GFx::FontData *)Scaleform::GFx::MovieDataDef::LoadTaskData::GetFontData(pObject, &rid);
  if ( FontData )
  {
    p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
    if ( !p_ProcessInfo )
      p_ProcessInfo = &p->ProcessInfo;
    Scaleform::GFx::FontData::ReadFontInfo(FontData, &p_ProcessInfo->Stream, tagInfo->TagType);
  }
  else
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "GFx_DefineFontInfoLoader - can't find FontResource w/ id %d",
      v9);
  }
}

void __fastcall Scaleform::GFx::GFx_DefineFontLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v5; // eax
  __int64 Pos; // r9
  unsigned int v7; // ebp
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rdx
  Scaleform::GFx::FontDataCompactedGfx *v9; // rbx
  bool v10; // cl
  Scaleform::GFx::ExporterInfoImpl *p_mExporterInfo; // r8
  Scaleform::GFx::TagType TagType; // eax
  Scaleform::GFx::FontDataCompactedGfx *v13; // rax
  Scaleform::GFx::FontDataCompactedGfx *v14; // rax
  Scaleform::GFx::FontDataCompactedSwf *v15; // rax
  Scaleform::GFx::FontDataCompactedGfx *v16; // rax
  Scaleform::GFx::FontData *v17; // rax
  Scaleform::GFx::FontDataCompactedGfx *v18; // rax
  Scaleform::GFx::ResourceHandle result; // [rsp+20h] [rbp-18h] BYREF
  Scaleform::GFx::ResourceId rid; // [rsp+40h] [rbp+8h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v5 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v5 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  v7 = (unsigned __int16)(pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8));
  pAltStream->Stream.Pos = Pos + 2;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  Font: id = %d\n");
  pObject = p->pLoadData.pObject;
  v9 = 0i64;
  v10 = 0;
  p_mExporterInfo = 0i64;
  if ( pObject->Header.mExporterInfo.SI.Format )
    p_mExporterInfo = &pObject->Header.mExporterInfo;
  if ( p_mExporterInfo )
    v10 = (p_mExporterInfo->SI.ExportFlags & 0x10) != 0;
  TagType = tagInfo->TagType;
  if ( tagInfo->TagType == Tag_DefineCompactedFont )
  {
    v13 = (Scaleform::GFx::FontDataCompactedGfx *)pObject->pHeap->Alloc(pObject->pHeap, 168ui64, 0i64);
    if ( v13 )
    {
      Scaleform::GFx::FontDataCompactedGfx::FontDataCompactedGfx(v13);
      v9 = v14;
    }
    Scaleform::GFx::FontDataCompactedGfx::Read(v9, p, tagInfo);
  }
  else if ( (TagType == Tag_DefineFont2 || TagType == Tag_DefineFont3)
         && !v10
         && p->pLoadStates.pObject->pBindStates.pObject->pFontCompactorParams.pObject )
  {
    v15 = (Scaleform::GFx::FontDataCompactedSwf *)pObject->pHeap->Alloc(pObject->pHeap, 192ui64, 0i64);
    if ( v15 )
    {
      Scaleform::GFx::FontDataCompactedSwf::FontDataCompactedSwf(v15);
      v9 = v16;
    }
    Scaleform::GFx::FontDataCompactedSwf::Read((Scaleform::GFx::FontDataCompactedSwf *)v9, p, tagInfo);
  }
  else
  {
    v17 = (Scaleform::GFx::FontData *)pObject->pHeap->Alloc(pObject->pHeap, 136ui64, 0i64);
    if ( v17 )
    {
      Scaleform::GFx::FontData::FontData(v17);
      v9 = v18;
    }
    Scaleform::GFx::FontData::Read((Scaleform::GFx::FontData *)v9, p, tagInfo);
  }
  rid.Id = v7;
  Scaleform::GFx::LoadProcess::AddFontDataResource(p, &result, &rid.Id, v9);
  if ( result.HType == RH_Pointer && result.pResource )
    Scaleform::GFx::Resource::Release(result.pResource);
  if ( v9 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v9);
}

void __fastcall Scaleform::GFx::GFx_DefineGradientMapLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogWarning(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "Deprecated tag 1004 - DefineGradientMapLoader encountered, ignored");
}

void __fastcall Scaleform::GFx::GFx_DefineSceneAndFrameLabelData(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // r12
  unsigned int VU32; // er14
  int v5; // esi
  unsigned int i; // edi
  unsigned int v7; // ebx
  void *v8; // rbx
  unsigned int v9; // er13
  Scaleform::GFx::MovieDataDef::SceneInfo *Scene; // rdi
  unsigned int j; // er15
  unsigned int v12; // er14
  unsigned int v13; // ebx
  Scaleform::GFx::MovieDataDef::SceneInfo *k; // rax
  unsigned int Offset; // ecx
  const Scaleform::MemoryHeap *pHeap; // rdx
  unsigned __int64 v17; // r8
  Scaleform::GFx::MovieDataDef::FrameLabelInfo *Data; // rax
  Scaleform::GFx::MovieDataDef::FrameLabelInfo *v19; // rbx
  void *v20; // rbx
  void *v21; // rbx
  Scaleform::StringDH v22; // [rsp+30h] [rbp-58h] BYREF
  Scaleform::StringDH v23; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+50h] [rbp-38h]

  if ( !p->pLoadData.pObject->Scenes.pObject )
  {
    pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
    if ( !pAltStream )
      pAltStream = &p->ProcessInfo;
    VU32 = Scaleform::GFx::Stream::ReadVU32(&pAltStream->Stream);
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "  Scene and Frame Label Data, numscenes = %d\n");
    v5 = 0;
    for ( i = 0; i < VU32; ++i )
    {
      v7 = Scaleform::GFx::Stream::ReadVU32(&pAltStream->Stream);
      Scaleform::StringDH::StringDH(&v22, p->pLoadData.pObject->pHeap);
      Scaleform::GFx::Stream::ReadString(&pAltStream->Stream, &v22);
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "   Scene[%d] = { %d, \"%s\" }\n");
      Scaleform::GFx::MovieDataDef::LoadTaskData::AddScene(p->pLoadData.pObject, &v22, v7);
      v8 = (void *)(v22.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
             (volatile int *)((v22.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
             -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8);
    }
    v9 = Scaleform::GFx::Stream::ReadVU32(&pAltStream->Stream);
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "  frameLabelCount = %d\n");
    Scene = Scaleform::GFx::MovieDataDef::LoadTaskData::GetScene(p->pLoadData.pObject, 0i64);
    for ( j = 0; j < v9; ++j )
    {
      v12 = Scaleform::GFx::Stream::ReadVU32(&pAltStream->Stream);
      Scaleform::StringDH::StringDH(&v22, p->pLoadData.pObject->pHeap);
      Scaleform::GFx::Stream::ReadString(&pAltStream->Stream, &v22);
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "   Label[%d] = { %d, \"%s\" }\n");
      v13 = v5 + 1;
      for ( k = Scaleform::GFx::MovieDataDef::LoadTaskData::GetScene(p->pLoadData.pObject, (unsigned int)(v5 + 1));
            k;
            k = Scaleform::GFx::MovieDataDef::LoadTaskData::GetScene(p->pLoadData.pObject, v13) )
      {
        Offset = k->Offset;
        if ( v12 < Offset )
          break;
        Scene->NumFrames = Offset;
        ++v13;
        Scene = k;
        ++v5;
      }
      Scaleform::StringDH::CopyConstructHelper(&v23, &v22, Scene->Name.pHeap);
      pHeap = Scene->Labels.Data.pHeap;
      v17 = Scene->Labels.Data.Size + 1;
      v24 = v12;
      Scaleform::ArrayDataBase<Scaleform::GFx::MovieDataDef::FrameLabelInfo,Scaleform::AllocatorDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        &Scene->Labels.Data,
        pHeap,
        v17);
      Data = Scene->Labels.Data.Data;
      v19 = &Data[Scene->Labels.Data.Size - 1];
      if ( v19 )
      {
        Scaleform::StringDH::CopyConstructHelper(&Data[Scene->Labels.Data.Size - 1].Name, &v23, v23.pHeap);
        v19->Number = v24;
      }
      v20 = (void *)(v23.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
             (volatile int *)((v23.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
             -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v20);
      v21 = (void *)(v22.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
             (volatile int *)((v22.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
             -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v21);
    }
    Scene->NumFrames = p->pLoadData.pObject->Header.FrameCount - Scene->Offset;
  }
}

void __fastcall Scaleform::GFx::GFx_DefineShapeLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v5; // eax
  __int64 Pos; // r9
  unsigned int v7; // ebp
  __int64 v8; // rax
  Scaleform::GFx::Resource *v9; // rbx
  Scaleform::GFx::ShapeDataBase *v10; // rdi
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rcx
  Scaleform::GFx::SwfShapeCharacterDef *v12; // rax
  Scaleform::GFx::Resource *v13; // rax
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  Scaleform::GFx::ResourceId rid; // [rsp+30h] [rbp-58h] BYREF
  char v16[16]; // [rsp+40h] [rbp-48h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v5 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v5 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  v7 = (unsigned __int16)(pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8));
  pAltStream->Stream.Pos = Pos + 2;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  ShapeLoader: id = %d\n");
  v8 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))p->pLoadData.pObject->pHeap->Alloc)(
         p->pLoadData.pObject->pHeap,
         80i64);
  v9 = 0i64;
  v10 = (Scaleform::GFx::ShapeDataBase *)v8;
  if ( v8 )
  {
    *(_QWORD *)(v8 + 16) = 0i64;
    *(_QWORD *)v8 = &Scaleform::RefCountImplCore::`vftable';
    *(_QWORD *)v8 = &Scaleform::GFx::ConstShapeWithStyles::`vftable';
    *(_DWORD *)(v8 + 8) = 1;
    *(_BYTE *)(v8 + 24) = 0;
    *(_QWORD *)(v8 + 32) = 0i64;
    *(_QWORD *)(v8 + 40) = 0i64;
    *(_QWORD *)(v8 + 48) = 0i64;
    *(_QWORD *)(v8 + 56) = 0i64;
    *(_QWORD *)(v8 + 64) = 0i64;
    *(_QWORD *)(v8 + 72) = 0i64;
  }
  else
  {
    v10 = 0i64;
  }
  p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !p_ProcessInfo )
    p_ProcessInfo = &p->ProcessInfo;
  v10->Read(
    v10,
    p,
    tagInfo->TagType,
    tagInfo->TagLength
  + tagInfo->TagDataOffset
  + p_ProcessInfo->Stream.DataSize
  - p_ProcessInfo->Stream.FilePos
  - p_ProcessInfo->Stream.Pos,
    1);
  v12 = (Scaleform::GFx::SwfShapeCharacterDef *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))p->pLoadData.pObject->pHeap->Alloc)(
                                                  p->pLoadData.pObject->pHeap,
                                                  48i64);
  if ( v12 )
  {
    Scaleform::GFx::SwfShapeCharacterDef::SwfShapeCharacterDef(v12, v10);
    v9 = v13;
  }
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  bound rect:");
  ((void (__fastcall *)(Scaleform::GFx::Resource *, char *))v9->__vftable[1].GetResourceReport)(v9, v16);
  if ( p->LoadState == LS_LoadingRoot )
  {
    pObject = p->pLoadData.pObject;
    rid.Id = v7;
    Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(pObject, &rid, v9);
  }
  Scaleform::GFx::Resource::Release(v9);
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v10);
}

void __fastcall Scaleform::GFx::GFx_DefineShapeMorphLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v5; // eax
  __int64 Pos; // r9
  unsigned int v7; // ebp
  Scaleform::GFx::MorphCharacterDef *v8; // rax
  Scaleform::GFx::MorphCharacterDef *v9; // rax
  Scaleform::GFx::MorphCharacterDef *v10; // rbx
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  Scaleform::GFx::ResourceId rid; // [rsp+30h] [rbp+8h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v5 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v5 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  v7 = (unsigned __int16)(pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8));
  pAltStream->Stream.Pos = Pos + 2;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  ShapeMorphLoader: id = %d\n");
  v8 = (Scaleform::GFx::MorphCharacterDef *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))p->pLoadData.pObject->pHeap->Alloc)(
                                              p->pLoadData.pObject->pHeap,
                                              56i64);
  if ( v8 )
  {
    Scaleform::GFx::MorphCharacterDef::MorphCharacterDef(v8);
    v10 = v9;
  }
  else
  {
    v10 = 0i64;
  }
  Scaleform::GFx::MorphCharacterDef::Read(v10, p, tagInfo, 1);
  if ( p->LoadState == LS_LoadingRoot )
  {
    pObject = p->pLoadData.pObject;
    rid.Id = v7;
    Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(pObject, &rid, v10);
  }
  if ( v10 )
    Scaleform::GFx::Resource::Release(v10);
}

void __fastcall Scaleform::GFx::GFx_DefineSubImageLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rdi
  int v4; // eax
  __int64 Pos; // r9
  unsigned __int8 *pBuffer; // rdx
  int v7; // ecx
  int v8; // ebp
  int v9; // ebp
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rdi
  int v11; // eax
  __int64 v12; // r9
  unsigned __int8 *v13; // rdx
  int v14; // ecx
  int v15; // esi
  int v16; // esi
  Scaleform::GFx::SWFProcessInfo *v17; // rdi
  int v18; // eax
  __int64 v19; // r8
  unsigned __int8 *v20; // rdx
  Scaleform::GFx::SWFProcessInfo *v21; // rdi
  int v22; // eax
  __int64 v23; // r8
  unsigned __int8 *v24; // rdx
  Scaleform::GFx::SWFProcessInfo *v25; // rdi
  int v26; // eax
  __int64 v27; // r8
  unsigned __int8 *v28; // rdx
  unsigned __int8 v29; // r12
  unsigned __int8 v30; // r13
  Scaleform::GFx::SWFProcessInfo *v31; // rdi
  int v32; // eax
  __int64 v33; // r8
  unsigned __int8 *v34; // rdx
  unsigned __int8 v35; // r14
  unsigned __int8 v36; // r15
  __int64 v37; // rax
  Scaleform::GFx::SubImageResourceInfo *v38; // rdi
  int v39; // eax
  int Id_low; // er9
  int v41; // er8
  unsigned __int8 v42; // [rsp+20h] [rbp-68h]
  Scaleform::GFx::ResourceData result; // [rsp+28h] [rbp-60h] BYREF
  Scaleform::GFx::ResourceHandle v44; // [rsp+38h] [rbp-50h] BYREF
  Scaleform::GFx::ResourceId rid; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int8 v46; // [rsp+A0h] [rbp+18h]
  unsigned __int8 v47; // [rsp+A8h] [rbp+20h]

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v4 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v4 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  pBuffer = pAltStream->Stream.pBuffer;
  v7 = pBuffer[Pos];
  v8 = pBuffer[(unsigned int)(Pos + 1)] << 8;
  pAltStream->Stream.Pos = Pos + 2;
  v9 = v7 | v8;
  p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !p_ProcessInfo )
    p_ProcessInfo = &p->ProcessInfo;
  v11 = p_ProcessInfo->Stream.DataSize - p_ProcessInfo->Stream.Pos;
  p_ProcessInfo->Stream.UnusedBits = 0;
  if ( v11 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&p_ProcessInfo->Stream, 2);
  v12 = p_ProcessInfo->Stream.Pos;
  v13 = p_ProcessInfo->Stream.pBuffer;
  v14 = v13[v12];
  v15 = v13[(unsigned int)(v12 + 1)] << 8;
  p_ProcessInfo->Stream.Pos = v12 + 2;
  v16 = v14 | v15;
  v17 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !v17 )
    v17 = &p->ProcessInfo;
  v18 = v17->Stream.DataSize - v17->Stream.Pos;
  v17->Stream.UnusedBits = 0;
  if ( v18 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&v17->Stream, 2);
  v19 = v17->Stream.Pos;
  v20 = v17->Stream.pBuffer;
  LOBYTE(rid.Id) = v20[(unsigned int)(v19 + 1)];
  v46 = v20[v19];
  v17->Stream.Pos = v19 + 2;
  v21 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !v21 )
    v21 = &p->ProcessInfo;
  v22 = v21->Stream.DataSize - v21->Stream.Pos;
  v21->Stream.UnusedBits = 0;
  if ( v22 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&v21->Stream, 2);
  v23 = v21->Stream.Pos;
  v24 = v21->Stream.pBuffer;
  v47 = v24[(unsigned int)(v23 + 1)];
  v42 = v24[v23];
  v21->Stream.Pos = v23 + 2;
  v25 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !v25 )
    v25 = &p->ProcessInfo;
  v26 = v25->Stream.DataSize - v25->Stream.Pos;
  v25->Stream.UnusedBits = 0;
  if ( v26 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&v25->Stream, 2);
  v27 = v25->Stream.Pos;
  v28 = v25->Stream.pBuffer;
  v29 = v28[(unsigned int)(v27 + 1)];
  v30 = v28[v27];
  v25->Stream.Pos = v27 + 2;
  v31 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !v31 )
    v31 = &p->ProcessInfo;
  v32 = v31->Stream.DataSize - v31->Stream.Pos;
  v31->Stream.UnusedBits = 0;
  if ( v32 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&v31->Stream, 2);
  v33 = v31->Stream.Pos;
  v34 = v31->Stream.pBuffer;
  v35 = v34[(unsigned int)(v33 + 1)];
  v36 = v34[v33];
  v31->Stream.Pos = v33 + 2;
  v37 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
          Scaleform::Memory::pGlobalHeap,
          48i64);
  v38 = (Scaleform::GFx::SubImageResourceInfo *)v37;
  if ( v37 )
  {
    *(_DWORD *)(v37 + 8) = 1;
    *(_QWORD *)v37 = &Scaleform::GFx::SubImageResourceInfo::`vftable';
    *(_DWORD *)(v37 + 16) = 0x40000;
    *(_QWORD *)(v37 + 24) = 0i64;
    *(_QWORD *)(v37 + 32) = 0i64;
    *(_QWORD *)(v37 + 40) = 0i64;
  }
  else
  {
    v38 = 0i64;
  }
  v39 = v46;
  Id_low = LOBYTE(rid.Id);
  v41 = v47;
  v38->ImageId.Id = v16 | 0x90000;
  v38->Rect.x2 = v30 | (v29 << 8);
  v38->Rect.y2 = v36 | (v35 << 8);
  v38->Rect.x1 = v39 | (Id_low << 8);
  v38->Rect.y1 = v42 | (v41 << 8);
  Scaleform::GFx::SubImageResourceCreator::CreateSubImageResourceData(&result, v38);
  rid.Id = v9;
  Scaleform::GFx::LoadProcess::AddDataResource(p, &v44, &rid.Id, &result);
  if ( v44.HType == RH_Pointer && v44.pResource )
    Scaleform::GFx::Resource::Release(v44.pResource);
  if ( result.pInterface )
    result.pInterface->Release(result.pInterface, result.hData);
  Scaleform::RefCountNTSImpl::Release(v38);
}

void __fastcall Scaleform::GFx::GFx_DoActionLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::ASSupport *pObject; // r9

  if ( (p->pLoadData.pObject->FileAttributes & 8) != 0 )
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "GFx_DoActionLoader - DoAction tag shouldn't appear in AS3 swf. Tag is skipped.");
  }
  else
  {
    pObject = p->pLoadStates.pObject->pAS2Support.pObject;
    if ( pObject )
      pObject->DoActionLoader(pObject, p, tagInfo);
    else
      Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "GFx_DoActionLoader - AS2 support is not installed. Tag is skipped.");
  }
}

void __fastcall Scaleform::GFx::GFx_DoInitActionLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::ASSupport *pObject; // r9

  if ( (p->pLoadData.pObject->FileAttributes & 8) != 0 )
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "GFx_DoInitActionLoader - DoInitAction tag shouldn't appear in AS3 swf. Tag is skipped.");
  }
  else
  {
    pObject = p->pLoadStates.pObject->pAS2Support.pObject;
    if ( pObject )
      pObject->DoInitActionLoader(pObject, p, tagInfo);
    else
      Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "GFx_DoInitActionLoader - AS2 support is not installed. Tag is skipped.");
  }
}

void __fastcall Scaleform::GFx::GFx_ExportLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v4; // eax
  __int64 Pos; // r9
  unsigned __int8 *pBuffer; // rdx
  int v7; // er8
  int v8; // ecx
  unsigned int v9; // ebx
  __int64 v10; // rbp
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rbx
  int v12; // eax
  __int64 v13; // r8
  unsigned __int16 v14; // di
  Scaleform::GFx::Stream *Stream; // rax
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  Scaleform::GFx::MovieDataDef::LoadTaskData *v17; // rcx
  void *v18; // rbx
  Scaleform::GFx::ResourceHandle phandle; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::StringDH v20; // [rsp+30h] [rbp-28h] BYREF
  Scaleform::GFx::ResourceId rid; // [rsp+60h] [rbp+8h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v4 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v4 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  pBuffer = pAltStream->Stream.pBuffer;
  v7 = pBuffer[(unsigned int)(Pos + 1)];
  v8 = pBuffer[Pos];
  pAltStream->Stream.Pos = Pos + 2;
  v9 = v8 | (v7 << 8);
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  export: count = %d\n");
  if ( v9 )
  {
    v10 = v9;
    do
    {
      p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
      if ( !p_ProcessInfo )
        p_ProcessInfo = &p->ProcessInfo;
      v12 = p_ProcessInfo->Stream.DataSize - p_ProcessInfo->Stream.Pos;
      p_ProcessInfo->Stream.UnusedBits = 0;
      if ( v12 < 2 )
        Scaleform::GFx::Stream::PopulateBuffer(&p_ProcessInfo->Stream, 2);
      v13 = p_ProcessInfo->Stream.Pos;
      v14 = p_ProcessInfo->Stream.pBuffer[v13] | (p_ProcessInfo->Stream.pBuffer[(unsigned int)(v13 + 1)] << 8);
      p_ProcessInfo->Stream.Pos = v13 + 2;
      Scaleform::StringDH::StringDH(&v20, p->pLoadData.pObject->pHeap);
      Stream = Scaleform::GFx::LoadProcess::GetStream(p);
      Scaleform::GFx::Stream::ReadString(Stream, &v20);
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "  export: id = %d, name = %s\n");
      pObject = p->pLoadData.pObject;
      phandle.HType = RH_Pointer;
      phandle.pResource = 0i64;
      rid.Id = v14;
      if ( (unsigned __int8)Scaleform::GFx::MovieDataDef::LoadTaskData::GetResourceHandle(pObject, &phandle, &rid) )
      {
        v17 = p->pLoadData.pObject;
        rid.Id = v14;
        Scaleform::GFx::MovieDataDef::LoadTaskData::ExportResource(v17, &v20, &rid, &phandle);
      }
      else
      {
        Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
          &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
          "Don't know how to export Resource '%s'",
          (const char *)((v20.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
      }
      if ( phandle.HType == RH_Pointer && phandle.pResource )
        Scaleform::GFx::Resource::Release(phandle.pResource);
      v18 = (void *)(v20.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
             (volatile int *)((v20.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
             -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v18);
      --v10;
    }
    while ( v10 );
  }
}

void __fastcall Scaleform::GFx::GFx_FileAttributesLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v4; // eax
  __int64 Pos; // r9
  unsigned __int8 *pBuffer; // rdx
  int v7; // ecx

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v4 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v4 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  pBuffer = pAltStream->Stream.pBuffer;
  v7 = pBuffer[Pos];
  LODWORD(pBuffer) = pBuffer[(unsigned int)(Pos + 1)];
  pAltStream->Stream.Pos = Pos + 2;
  p->pLoadData.pObject->FileAttributes = v7 | ((_DWORD)pBuffer << 8);
}

void __fastcall Scaleform::GFx::GFx_FontTextureInfoLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rdi
  int v3; // eax
  __int64 Pos; // r8
  int v5; // er9
  int v6; // eax
  __int64 v7; // rdx
  unsigned __int16 bitmapFormat; // r14
  int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // er8
  int v12; // ebx
  __int64 v13; // rax
  unsigned int v14; // er8
  int v15; // esi
  __int64 v16; // rdx
  int v17; // er12
  int v18; // eax
  __int64 v19; // rax
  int v20; // er15
  Scaleform::Render::TextureGlyph *Data; // r13
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // er14
  unsigned __int64 Size; // r12
  unsigned int v26; // esi
  int v27; // eax
  unsigned __int8 *pBuffer; // r9
  __int64 v29; // rcx
  int v30; // er8
  int v31; // eax
  int v32; // eax
  unsigned __int8 *v33; // r9
  __int64 v34; // rcx
  int v35; // er8
  int v36; // eax
  int v37; // eax
  unsigned __int8 *v38; // r9
  __int64 v39; // rcx
  int v40; // er8
  int v41; // eax
  int v42; // eax
  unsigned __int8 *v43; // r9
  __int64 v44; // rcx
  int v45; // er8
  int v46; // eax
  int v47; // eax
  unsigned __int8 *v48; // r9
  __int64 v49; // rcx
  int v50; // er8
  int v51; // eax
  int v52; // eax
  unsigned __int8 *v53; // r9
  __int64 v54; // rcx
  char IsVerboseParse; // al
  int v56; // xmm6_4
  int v57; // xmm7_4
  int v58; // xmm8_4
  int v59; // xmm9_4
  int v60; // xmm10_4
  Scaleform::GFx::Resource *pResource; // rax
  __int64 v62; // rbx
  Scaleform::Render::TextureGlyph *v63; // rbx
  __int64 v64; // rcx
  int v65; // xmm1_4
  int v66; // eax
  __int64 v67; // rax
  unsigned int v68; // ebx
  __int128 v69; // xmm6
  __int64 v70; // r15
  int v71; // eax
  __int64 v72; // rax
  int v73; // edx
  Scaleform::Render::Font *FontData; // rax
  Scaleform::Render::Font *v75; // rsi
  __int64 v76; // rax
  Scaleform::GFx::TextureGlyphData *v77; // rbx
  unsigned int v78; // eax
  int v79; // eax
  __int64 v80; // rax
  unsigned int v81; // er8
  __int64 v82; // r14
  int v83; // eax
  __int64 v84; // rax
  unsigned int v85; // er8
  int v86; // esi
  unsigned __int8 *v87; // rcx
  unsigned __int8 v88; // dl
  __int64 v89; // rax
  unsigned __int8 v90; // r9
  Scaleform::Render::TextureGlyph *i; // rbx
  void *v92; // rbx
  unsigned int v93; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v94; // [rsp+50h] [rbp-B8h]
  int v95; // [rsp+50h] [rbp-B8h]
  Scaleform::String pstr; // [rsp+58h] [rbp-B0h] BYREF
  Scaleform::GFx::ResourceHandle result; // [rsp+60h] [rbp-A8h] BYREF
  Scaleform::GFx::ResourceId rid; // [rsp+70h] [rbp-98h] BYREF
  int v99; // [rsp+74h] [rbp-94h]
  int v100; // [rsp+78h] [rbp-90h]
  int v101; // [rsp+7Ch] [rbp-8Ch]
  int v102; // [rsp+80h] [rbp-88h]
  int v103; // [rsp+84h] [rbp-84h]
  Scaleform::GFx::ResourceId v104; // [rsp+88h] [rbp-80h] BYREF
  Scaleform::GFx::ResourceId textureId; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int128 targetWidth; // [rsp+90h] [rbp-78h]
  Scaleform::GFx::LoadProcess *pa; // [rsp+A0h] [rbp-68h]
  Scaleform::ArrayDataBase<Scaleform::Render::TextureGlyph,Scaleform::AllocatorGH<Scaleform::Render::TextureGlyph,2>,Scaleform::ArrayDefaultPolicy> pheapAddr; // [rsp+A8h] [rbp-60h] BYREF
  Scaleform::MemoryHeap *pHeap; // [rsp+C0h] [rbp-48h]
  Scaleform::RefCountImplCore v110; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v111; // [rsp+D8h] [rbp-30h]
  Scaleform::Render::Rect<float> v112; // [rsp+E8h] [rbp-20h]
  int v113; // [rsp+F8h] [rbp-10h]
  int v114; // [rsp+FCh] [rbp-Ch]
  unsigned int BindIndex; // [rsp+100h] [rbp-8h]

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  pa = p;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v3 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pHeap = p->pLoadData.pObject->pHeap;
  pAltStream->Stream.UnusedBits = 0;
  if ( v3 < 4 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
  Pos = pAltStream->Stream.Pos;
  v5 = pAltStream->Stream.pBuffer[Pos] | ((pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] | ((pAltStream->Stream.pBuffer[(unsigned int)(Pos + 2)] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 3)] << 8)) << 8)) << 8);
  pAltStream->Stream.Pos = Pos + 4;
  v6 = pAltStream->Stream.DataSize - (Pos + 4);
  v93 = v5;
  pAltStream->Stream.UnusedBits = 0;
  if ( v6 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  v7 = pAltStream->Stream.Pos;
  bitmapFormat = pAltStream->Stream.pBuffer[v7] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
  pAltStream->Stream.Pos = v7 + 2;
  Scaleform::String::String(&pstr);
  Scaleform::GFx::Stream::ReadStringWithLength(&pAltStream->Stream, &pstr);
  v9 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v9 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  v10 = pAltStream->Stream.Pos;
  v11 = v10 + 2;
  v12 = pAltStream->Stream.pBuffer[v10] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
  LODWORD(v10) = pAltStream->Stream.DataSize - (v10 + 2);
  pAltStream->Stream.Pos = v11;
  DWORD2(targetWidth) = v12;
  pAltStream->Stream.UnusedBits = 0;
  if ( (int)v10 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  v13 = pAltStream->Stream.Pos;
  v14 = v13 + 2;
  v15 = pAltStream->Stream.pBuffer[v13] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
  LODWORD(v13) = pAltStream->Stream.DataSize - (v13 + 2);
  pAltStream->Stream.Pos = v14;
  HIDWORD(targetWidth) = v15;
  pAltStream->Stream.UnusedBits = 0;
  if ( (int)v13 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
  v16 = pAltStream->Stream.Pos;
  v17 = pAltStream->Stream.pBuffer[v16];
  v18 = pAltStream->Stream.DataSize - (v16 + 1);
  pAltStream->Stream.Pos = v16 + 1;
  DWORD1(targetWidth) = v17;
  pAltStream->Stream.UnusedBits = 0;
  if ( v18 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  v19 = pAltStream->Stream.Pos;
  v20 = pAltStream->Stream.pBuffer[v19] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
  pAltStream->Stream.Pos = v19 + 2;
  LODWORD(targetWidth) = v20;
  if ( (unsigned __int8)Scaleform::GFx::Stream::IsVerboseParse(&pAltStream->Stream) )
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
      "  FontTextureInfo: tagInfo.TagType = %d, id = 0x%X, fmt = %d, name = '%s', w = %d, h = %d\n");
  rid.Id = v93;
  Scaleform::GFx::GFx_CreateImageFileResourceHandle(
    &result,
    pa,
    &rid.Id,
    (const char *)((pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
    &pnewText,
    bitmapFormat,
    WORD4(targetWidth),
    WORD6(targetWidth));
  Data = 0i64;
  v94 = 0i64;
  pheapAddr.Size = 0i64;
  pheapAddr.Policy.Capacity = 0i64;
  pAltStream->Stream.UnusedBits = 0;
  v22 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pheapAddr.Data = 0i64;
  if ( v22 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  v23 = pAltStream->Stream.Pos;
  v24 = pAltStream->Stream.pBuffer[v23] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
  pAltStream->Stream.Pos = v23 + 2;
  if ( (unsigned __int8)Scaleform::GFx::Stream::IsVerboseParse(&pAltStream->Stream) )
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
      "  PadPixels = %d, nominal glyph size = %d, numTexGlyphs = %d\n");
  Size = 0i64;
  v26 = 0;
  if ( v24 )
  {
    do
    {
      v27 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
      pAltStream->Stream.UnusedBits = 0;
      if ( v27 < 4 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
      pBuffer = pAltStream->Stream.pBuffer;
      v29 = pAltStream->Stream.Pos;
      v30 = (pBuffer[pAltStream->Stream.Pos + 1] | ((pBuffer[pAltStream->Stream.Pos + 2] | (pBuffer[pAltStream->Stream.Pos + 3] << 8)) << 8)) << 8;
      v31 = pBuffer[v29];
      LODWORD(v29) = v29 + 4;
      pAltStream->Stream.Pos = v29;
      v99 = v30 | v31;
      v32 = pAltStream->Stream.DataSize - v29;
      pAltStream->Stream.UnusedBits = 0;
      if ( v32 < 4 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
      v33 = pAltStream->Stream.pBuffer;
      v34 = pAltStream->Stream.Pos;
      v35 = (v33[pAltStream->Stream.Pos + 1] | ((v33[pAltStream->Stream.Pos + 2] | (v33[pAltStream->Stream.Pos + 3] << 8)) << 8)) << 8;
      v36 = v33[v34];
      LODWORD(v34) = v34 + 4;
      pAltStream->Stream.Pos = v34;
      v100 = v35 | v36;
      v37 = pAltStream->Stream.DataSize - v34;
      pAltStream->Stream.UnusedBits = 0;
      if ( v37 < 4 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
      v38 = pAltStream->Stream.pBuffer;
      v39 = pAltStream->Stream.Pos;
      v40 = (v38[pAltStream->Stream.Pos + 1] | ((v38[pAltStream->Stream.Pos + 2] | (v38[pAltStream->Stream.Pos + 3] << 8)) << 8)) << 8;
      v41 = v38[v39];
      LODWORD(v39) = v39 + 4;
      pAltStream->Stream.Pos = v39;
      v101 = v40 | v41;
      v42 = pAltStream->Stream.DataSize - v39;
      pAltStream->Stream.UnusedBits = 0;
      if ( v42 < 4 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
      v43 = pAltStream->Stream.pBuffer;
      v44 = pAltStream->Stream.Pos;
      v45 = (v43[pAltStream->Stream.Pos + 1] | ((v43[pAltStream->Stream.Pos + 2] | (v43[pAltStream->Stream.Pos + 3] << 8)) << 8)) << 8;
      v46 = v43[v44];
      LODWORD(v44) = v44 + 4;
      pAltStream->Stream.Pos = v44;
      v102 = v45 | v46;
      v47 = pAltStream->Stream.DataSize - v44;
      pAltStream->Stream.UnusedBits = 0;
      if ( v47 < 4 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
      v48 = pAltStream->Stream.pBuffer;
      v49 = pAltStream->Stream.Pos;
      v50 = (v48[pAltStream->Stream.Pos + 1] | ((v48[pAltStream->Stream.Pos + 2] | (v48[pAltStream->Stream.Pos + 3] << 8)) << 8)) << 8;
      v51 = v48[v49];
      LODWORD(v49) = v49 + 4;
      pAltStream->Stream.Pos = v49;
      v103 = v50 | v51;
      v52 = pAltStream->Stream.DataSize - v49;
      pAltStream->Stream.UnusedBits = 0;
      if ( v52 < 4 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
      v53 = pAltStream->Stream.pBuffer;
      v54 = pAltStream->Stream.Pos;
      v95 = ((v53[pAltStream->Stream.Pos + 1] | ((v53[pAltStream->Stream.Pos + 2] | (v53[pAltStream->Stream.Pos + 3] << 8)) << 8)) << 8) | v53[v54];
      pAltStream->Stream.Pos = v54 + 4;
      IsVerboseParse = Scaleform::GFx::Stream::IsVerboseParse(&pAltStream->Stream);
      v56 = v99;
      v57 = v100;
      v58 = v101;
      v59 = v102;
      v60 = v103;
      if ( IsVerboseParse )
      {
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
          (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
          "  TEXGLYPH[%d]: uvBnd.x1 = %f, uvBnd.y1 = %f, uvBnd.x2 = %f, uvBnd.y2 = %f\n");
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
          (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
          "                uvOrigin.x = %f, uvOrigin.y = %f\n");
      }
      v112 = 0i64;
      v110.RefCount = 1;
      v110.__vftable = (Scaleform::RefCountImplCore_vtbl *)&Scaleform::Render::TextureGlyph::`vftable';
      v111 = 0i64;
      BindIndex = -1;
      if ( result.HType == RH_Index )
      {
        BindIndex = result.BindIndex;
      }
      else if ( result.HType == RH_Pointer
             && result.pResource
             && (((__int64 (__fastcall *)(Scaleform::GFx::Resource *))result.pResource->GetResourceTypeCode)(result.pResource) & 0xFF00) == 256 )
      {
        pResource = 0i64;
        if ( result.HType == RH_Pointer )
          pResource = result.pResource;
        v62 = (__int64)pResource[1].__vftable;
        if ( v62 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 8i64))(v62);
        if ( v111 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v111 + 16i64))(v111);
        v111 = v62;
      }
      *(_QWORD *)&v112.x1 = __PAIR64__(v57, v56);
      *(_QWORD *)&v112.x2 = __PAIR64__(v59, v58);
      v113 = v60;
      v114 = v95;
      Scaleform::ArrayDataBase<Scaleform::Render::TextureGlyph,Scaleform::AllocatorGH<Scaleform::Render::TextureGlyph,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        &pheapAddr,
        &pheapAddr,
        Size + 1);
      Data = pheapAddr.Data;
      Size = pheapAddr.Size;
      v63 = &pheapAddr.Data[pheapAddr.Size - 1];
      if ( v63 )
      {
        v63->__vftable = (Scaleform::Render::TextureGlyph_vtbl *)&Scaleform::RefCountImplCore::`vftable';
        v63->__vftable = (Scaleform::Render::TextureGlyph_vtbl *)&Scaleform::Render::TextureGlyph::`vftable';
        v63->RefCount = 1;
        v64 = v111;
        if ( v111 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v111 + 8i64))(v111);
          v64 = v111;
        }
        v63->pImage.pObject = (Scaleform::Render::Image *)v64;
        v63->UvBounds = v112;
        v65 = v114;
        LODWORD(v63->UvOrigin.x) = v113;
        LODWORD(v63->UvOrigin.y) = v65;
        v63->BindIndex = BindIndex;
      }
      if ( v111 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v111 + 16i64))(v111);
      Scaleform::RefCountImplCore::~RefCountImplCore(&v110);
      ++v26;
    }
    while ( v26 < v24 );
    v94 = Size;
  }
  v66 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v66 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  v67 = pAltStream->Stream.Pos;
  v68 = pAltStream->Stream.pBuffer[v67] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
  pAltStream->Stream.Pos = v67 + 2;
  if ( (unsigned __int8)Scaleform::GFx::Stream::IsVerboseParse(&pAltStream->Stream) )
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
      "  NumFonts = %d\n");
  if ( v68 )
  {
    v69 = targetWidth;
    v70 = v68;
    while ( 1 )
    {
      v71 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
      pAltStream->Stream.UnusedBits = 0;
      if ( v71 < 2 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
      v72 = pAltStream->Stream.Pos;
      v73 = pAltStream->Stream.pBuffer[v72] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
      pAltStream->Stream.Pos = v72 + 2;
      v104.Id = v73;
      FontData = Scaleform::GFx::MovieDataDef::LoadTaskData::GetFontData(pa->pLoadData.pObject, &v104);
      v75 = FontData;
      if ( !FontData )
        goto LABEL_86;
      v76 = (__int64)FontData->GetTextureGlyphData(FontData);
      v77 = (Scaleform::GFx::TextureGlyphData *)v76;
      if ( v76 )
      {
        ++*(_DWORD *)(v76 + 8);
      }
      else
      {
        v77 = (Scaleform::GFx::TextureGlyphData *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))pHeap->Alloc)(
                                                    pHeap,
                                                    72i64);
        if ( v77 )
        {
          v78 = v75->GetGlyphShapeCount(v75);
          v77->RefCount = 1;
          v77->__vftable = (Scaleform::GFx::TextureGlyphData_vtbl *)&Scaleform::GFx::TextureGlyphData::`vftable';
          v77->PackTextureConfig.NominalSize = 48;
          v77->PackTextureConfig.PadPixels = 3;
          v77->PackTextureConfig.TextureWidth = 1024;
          v77->PackTextureConfig.TextureHeight = 1024;
          v77->TextureGlyphs.Data.Data = 0i64;
          v77->TextureGlyphs.Data.Size = 0i64;
          v77->TextureGlyphs.Data.Policy.Capacity = 0i64;
          v77->GlyphsTextures.mHash.pTable = 0i64;
          v77->FileCreation = 1;
          Scaleform::ArrayData<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy>::Resize(
            &v77->TextureGlyphs.Data,
            v78);
        }
        else
        {
          v77 = 0i64;
        }
        if ( !v77 )
          goto LABEL_73;
        v77->PackTextureConfig = (Scaleform::GFx::FontPackParams::TextureConfig)v69;
        v75->SetTextureGlyphData(v75, v77);
      }
      textureId.Id = v93;
      Scaleform::GFx::TextureGlyphData::AddTexture(v77, &textureId, &result);
LABEL_73:
      v79 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
      pAltStream->Stream.UnusedBits = 0;
      if ( v79 < 2 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
      v80 = pAltStream->Stream.Pos;
      v81 = pAltStream->Stream.pBuffer[v80] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
      pAltStream->Stream.Pos = v80 + 2;
      if ( v81 )
      {
        v82 = v81;
        do
        {
          v83 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
          pAltStream->Stream.UnusedBits = 0;
          if ( v83 < 2 )
            Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
          v84 = pAltStream->Stream.Pos;
          v85 = v84 + 2;
          v86 = pAltStream->Stream.pBuffer[v84] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
          LODWORD(v84) = pAltStream->Stream.DataSize - (v84 + 2);
          pAltStream->Stream.Pos = v85;
          pAltStream->Stream.UnusedBits = 0;
          if ( (int)v84 < 2 )
            Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
          v87 = pAltStream->Stream.pBuffer;
          v88 = v87[pAltStream->Stream.Pos + 1];
          v89 = pAltStream->Stream.Pos;
          v90 = v87[v89];
          pAltStream->Stream.Pos = v89 + 2;
          if ( v77 )
            Scaleform::GFx::TextureGlyphData::AddTextureGlyph(v77, v86, &Data[v90 | ((unsigned __int64)v88 << 8)]);
          --v82;
        }
        while ( v82 );
      }
      if ( v77 )
        Scaleform::RefCountNTSImpl::Release(v77);
LABEL_86:
      if ( !--v70 )
      {
        Size = v94;
        break;
      }
    }
  }
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "\n");
  for ( i = &Data[Size - 1]; Size; --Size )
  {
    ((void (__fastcall *)(Scaleform::Render::TextureGlyph *, _QWORD))i->~RefCountImplCore)(i, 0i64);
    --i;
  }
  if ( Data )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, Data);
  if ( result.HType == RH_Pointer && result.pResource )
    Scaleform::GFx::Resource::Release(result.pResource);
  v92 = (void *)(pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v92);
}

void __fastcall Scaleform::GFx::GFx_FrameLabelLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rcx
  Scaleform::GFx::LogState *pObject; // r8
  void *v5; // rbx
  Scaleform::StringDH v6; // [rsp+20h] [rbp-18h] BYREF

  Scaleform::StringDH::StringDH(&v6, p->pLoadData.pObject->pHeap);
  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  Scaleform::GFx::Stream::ReadString(&pAltStream->Stream, &v6);
  pObject = p->pLoadStates.pObject->pLog.pObject;
  if ( p->LoadState == LS_LoadingSprite )
    p->pTimelineDef->AddFrameName(p->pTimelineDef, &v6, pObject);
  else
    p->pLoadData.pObject->AddFrameName(p->pLoadData.pObject, &v6, pObject);
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  Frame label: \"%s\"\n");
  v5 = (void *)(v6.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v6.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v5);
}

void __fastcall Scaleform::GFx::GFx_ImportLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rdi
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rbx
  int v6; // eax
  int v7; // eax
  __int64 Pos; // r9
  unsigned __int8 *pBuffer; // rdx
  int v10; // ebx
  int v11; // ecx
  const char *v12; // rdx
  unsigned int v13; // ebx
  Scaleform::GFx::ImportData *v14; // r14
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // r8
  unsigned __int16 v18; // bx
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  void *v20; // rbx
  Scaleform::GFx::DataAllocator *p_TagMemAllocator; // rcx
  unsigned __int64 BytesLeft; // rdx
  unsigned __int8 *pCurrent; // rsi
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // r8
  Scaleform::GFx::ExecuteTag **v26; // rcx
  unsigned __int8 **v27; // rcx
  void *v28; // rbx
  Scaleform::GFx::ResourceHandle result; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::GFx::ResourceId rid; // [rsp+60h] [rbp+8h] BYREF
  Scaleform::String v31; // [rsp+68h] [rbp+10h] BYREF
  Scaleform::String pstr; // [rsp+70h] [rbp+18h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  Scaleform::String::String(&pstr);
  Scaleform::GFx::Stream::ReadString(&pAltStream->Stream, &pstr);
  if ( tagInfo->TagType == Tag_Import2 )
  {
    p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
    if ( !p_ProcessInfo )
      p_ProcessInfo = &p->ProcessInfo;
    v6 = p_ProcessInfo->Stream.DataSize - p_ProcessInfo->Stream.Pos;
    p_ProcessInfo->Stream.UnusedBits = 0;
    if ( v6 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(&p_ProcessInfo->Stream, 2);
    p_ProcessInfo->Stream.Pos += 2;
  }
  v7 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v7 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  pBuffer = pAltStream->Stream.pBuffer;
  v10 = pBuffer[(unsigned int)(Pos + 1)];
  v11 = pBuffer[Pos];
  v12 = "  importAssets2: SourceUrl = %s, count = %d\n";
  pAltStream->Stream.Pos = Pos + 2;
  v13 = v11 | (v10 << 8);
  if ( tagInfo->TagType != Tag_Import2 )
    v12 = "  importAssets: SourceUrl = %s, count = %d\n";
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    v12);
  v14 = Scaleform::GFx::LoadProcess::AllocMovieDefClass<Scaleform::GFx::ImportData>(p);
  v14->Frame = p->pLoadData.pObject->LoadingFrame;
  Scaleform::String::operator=(&v14->SourceUrl, &pstr);
  if ( v13 )
  {
    v15 = v13;
    do
    {
      Scaleform::String::String(&v31);
      v16 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
      pAltStream->Stream.UnusedBits = 0;
      if ( v16 < 2 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
      v17 = pAltStream->Stream.Pos;
      v18 = pAltStream->Stream.pBuffer[v17] | (pAltStream->Stream.pBuffer[(unsigned int)(v17 + 1)] << 8);
      pAltStream->Stream.Pos = v17 + 2;
      Scaleform::GFx::Stream::ReadString(&pAltStream->Stream, &v31);
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "  import: id = %d, name = %s\n");
      pObject = p->pLoadData.pObject;
      rid.Id = v18;
      Scaleform::GFx::MovieDataDef::LoadTaskData::AddNewResourceHandle(pObject, &result, &rid);
      Scaleform::GFx::ImportData::AddSymbol(
        v14,
        (const char *)((v31.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
        v18,
        result.BindIndex);
      if ( result.HType == RH_Pointer && result.pResource )
        Scaleform::GFx::Resource::Release(result.pResource);
      v20 = (void *)(v31.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
             (volatile int *)((v31.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
             -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v20);
      --v15;
    }
    while ( v15 );
  }
  Scaleform::GFx::LoadProcess::AddImportData(p, v14);
  p_TagMemAllocator = &p->pLoadData.pObject->TagMemAllocator;
  BytesLeft = p->pLoadData.pObject->TagMemAllocator.BytesLeft;
  if ( BytesLeft < 0x10 )
  {
    pCurrent = Scaleform::GFx::DataAllocator::OverflowAlloc(p_TagMemAllocator, 0x10ui64);
  }
  else
  {
    pCurrent = p_TagMemAllocator->pCurrent;
    p_TagMemAllocator->pCurrent += 16;
    p_TagMemAllocator->BytesLeft = BytesLeft - 16;
  }
  if ( pCurrent )
  {
    *((_DWORD *)pCurrent + 2) = 0;
    *(_QWORD *)pCurrent = &Scaleform::GFx::GFxInitImportActions::`vftable';
  }
  *((_DWORD *)pCurrent + 2) = v14->ImportIndex;
  v24 = p->InitActionTags.Data.Size + 1;
  if ( v24 >= p->InitActionTags.Data.Size )
  {
    if ( v24 <= p->InitActionTags.Data.Policy.Capacity )
      goto LABEL_34;
    v25 = v24 + (v24 >> 2);
  }
  else
  {
    if ( v24 >= p->InitActionTags.Data.Policy.Capacity >> 1 )
      goto LABEL_34;
    v25 = p->InitActionTags.Data.Size + 1;
  }
  Scaleform::ArrayDataBase<Scaleform::GFx::ExecuteTag *,Scaleform::AllocatorGH<Scaleform::GFx::ExecuteTag *,2>,Scaleform::ArrayConstPolicy<32,16,0>>::Reserve(
    &p->InitActionTags.Data,
    &p->InitActionTags,
    v25);
LABEL_34:
  v26 = p->InitActionTags.Data.Data - 1;
  p->InitActionTags.Data.Size = v24;
  v27 = (unsigned __int8 **)&v26[v24];
  if ( v27 )
    *v27 = pCurrent;
  v28 = (void *)(pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v28);
}

void __fastcall Scaleform::GFx::GFx_JpegTablesLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::LoadStates *pObject; // rax
  Scaleform::GFx::ImageFileHandlerRegistry *v5; // rsi
  Scaleform::Render::JPEG::TablesHeader *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rcx
  Scaleform::RefCountVImpl *v10; // rcx

  pObject = p->pLoadStates.pObject;
  v5 = pObject->pImageFileHandlerRegistry.pObject;
  if ( v5 )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pObject->pImageFileHandlerRegistry.pObject);
    if ( Scaleform::Render::ImageFileHandlerRegistry::GetReader(
           &v5->Scaleform::Render::ImageFileHandlerRegistry,
           ImageFile_JPEG) )
    {
      if ( tagInfo->TagLength > 0 )
      {
        v6 = (Scaleform::Render::JPEG::TablesHeader *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))p->pLoadData.pObject->pHeap->Alloc)(
                                                        p->pLoadData.pObject->pHeap,
                                                        32i64);
        if ( v6 )
        {
          Scaleform::Render::JPEG::TablesHeader::TablesHeader(v6, p->pLoadData.pObject->pHeap, tagInfo->TagLength);
          v8 = v7;
        }
        else
        {
          v8 = 0i64;
        }
        pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
        if ( !pAltStream )
          pAltStream = &p->ProcessInfo;
        Scaleform::GFx::Stream::ReadToBuffer(&pAltStream->Stream, *(unsigned __int8 **)(v8 + 16), tagInfo->TagLength);
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v8);
        v10 = (Scaleform::RefCountVImpl *)p->pJpegTables.pObject;
        if ( v10 )
          Scaleform::RefCountImpl::Release(v10);
        p->pJpegTables.pObject = (Scaleform::Render::JPEG::TablesHeader *)v8;
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v8);
      }
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v5);
    }
    else
    {
      Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "Jpeg System is not installed - can't load jpeg image data");
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v5);
    }
  }
  else
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "Image file handler registry is not installed - can't load jpeg image data");
  }
}

void __fastcall Scaleform::GFx::GFx_MetadataLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rcx
  int TagEndPosition; // eax
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rcx
  signed int v6; // er15
  unsigned __int8 *v7; // r14
  __int64 i; // rsi
  Scaleform::GFx::SWFProcessInfo *v9; // rbx
  int v10; // eax
  __int64 Pos; // rdx
  unsigned __int8 v12; // cl
  int v13; // eax

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  TagEndPosition = Scaleform::GFx::Stream::GetTagEndPosition(&pAltStream->Stream);
  p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !p_ProcessInfo )
    p_ProcessInfo = &p->ProcessInfo;
  v6 = TagEndPosition + p_ProcessInfo->Stream.DataSize - p_ProcessInfo->Stream.FilePos - p_ProcessInfo->Stream.Pos;
  v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, v6 + 1, 0i64);
  if ( v7 )
  {
    for ( i = 0i64; i < v6; ++i )
    {
      v9 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
      if ( !v9 )
        v9 = &p->ProcessInfo;
      v10 = v9->Stream.DataSize - v9->Stream.Pos;
      v9->Stream.UnusedBits = 0;
      if ( v10 < 1 )
        Scaleform::GFx::Stream::PopulateBuffer1(&v9->Stream);
      Pos = v9->Stream.Pos;
      v12 = v9->Stream.pBuffer[Pos];
      v9->Stream.Pos = Pos + 1;
      v7[i] = v12;
    }
    Scaleform::GFx::MovieDataDef::LoadTaskData::SetMetadata(p->pLoadData.pObject, v7, v6);
    v13 = 255;
    if ( v6 < 255 )
      v13 = v6;
    v7[v13] = 0;
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "  metadata: %s\n");
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v7);
  }
}

void __fastcall Scaleform::GFx::GFx_PlaceObject2Loader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbp
  unsigned __int64 v4; // rsi
  char HasEventHandlers; // r14
  Scaleform::GFx::MovieDataDef::LoadTaskData *v6; // r8
  Scaleform::GFx::ASSupport *v7; // rcx
  unsigned __int8 *pCurrent; // rbx
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rax
  unsigned __int64 BytesLeft; // r8
  Scaleform::GFx::DataAllocator *p_TagMemAllocator; // rcx
  unsigned __int64 v12; // rdx
  void **v13; // rax

  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  PlaceObject2Tag\n");
  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v4 = Scaleform::GFx::PlaceObject3Tag::ComputeDataSize(&pAltStream->Stream);
  HasEventHandlers = Scaleform::GFx::PlaceObject2Tag::HasEventHandlers(&pAltStream->Stream);
  if ( !HasEventHandlers || (v6 = p->pLoadData.pObject, v4 += 8i64, (v6->FileAttributes & 8) != 0) )
  {
    pObject = p->pLoadData.pObject;
    BytesLeft = pObject->TagMemAllocator.BytesLeft;
    p_TagMemAllocator = &pObject->TagMemAllocator;
    v12 = (v4 + 22) & 0xFFFFFFFFFFFFFFF8ui64;
    if ( pObject->Header.Version < 6u )
    {
      if ( v12 > BytesLeft )
      {
        pCurrent = Scaleform::GFx::DataAllocator::OverflowAlloc(p_TagMemAllocator, v12);
      }
      else
      {
        pCurrent = p_TagMemAllocator->pCurrent;
        pObject->TagMemAllocator.BytesLeft = BytesLeft - v12;
        p_TagMemAllocator->pCurrent = &pCurrent[v12];
      }
      if ( !pCurrent )
        return;
      v13 = &Scaleform::GFx::PlaceObject2Taga::`vftable';
    }
    else
    {
      if ( v12 > BytesLeft )
      {
        pCurrent = Scaleform::GFx::DataAllocator::OverflowAlloc(p_TagMemAllocator, v12);
      }
      else
      {
        pCurrent = p_TagMemAllocator->pCurrent;
        pObject->TagMemAllocator.BytesLeft = BytesLeft - v12;
        p_TagMemAllocator->pCurrent = &pCurrent[v12];
      }
      if ( !pCurrent )
        return;
      v13 = &Scaleform::GFx::PlaceObject2Tag::`vftable';
    }
    *(_QWORD *)pCurrent = v13;
  }
  else
  {
    v7 = p->pLoadStates.pObject->pAS2Support.pObject;
    if ( !v7 )
    {
      Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "GFx_PlaceObject2Loader - AS2 support is not installed. Tag is skipped.");
      return;
    }
    pCurrent = (unsigned __int8 *)v7->AllocPlaceObject2Tag(v7, p, v4, v6->Header.Version);
  }
  if ( pCurrent )
  {
    if ( HasEventHandlers )
    {
      Scaleform::GFx::Stream::ReadToBuffer(&pAltStream->Stream, pCurrent + 16, v4 - 8);
      Scaleform::GFx::PlaceObject2Tag::RestructureForEventHandlers(pCurrent + 8);
    }
    else
    {
      Scaleform::GFx::Stream::ReadToBuffer(&pAltStream->Stream, pCurrent + 8, v4);
    }
    Scaleform::GFx::LoadProcess::AddExecuteTag(p, (Scaleform::GFx::ExecuteTag *)pCurrent);
  }
}

void __fastcall Scaleform::GFx::GFx_PlaceObject3Loader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rsi
  unsigned __int64 v4; // rbp
  char HasEventHandlers; // r14
  Scaleform::GFx::ASSupport *pObject; // rcx
  unsigned __int8 *pCurrent; // rbx
  Scaleform::GFx::DataAllocator *p_TagMemAllocator; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 BytesLeft; // r8

  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  PlaceObject3Tag\n");
  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v4 = Scaleform::GFx::PlaceObject3Tag::ComputeDataSize(&pAltStream->Stream);
  HasEventHandlers = Scaleform::GFx::PlaceObject2Tag::HasEventHandlers(&pAltStream->Stream);
  if ( !HasEventHandlers || (v4 += 8i64, (p->pLoadData.pObject->FileAttributes & 8) != 0) )
  {
    p_TagMemAllocator = &p->pLoadData.pObject->TagMemAllocator;
    v9 = (v4 + 22) & 0xFFFFFFFFFFFFFFF8ui64;
    BytesLeft = p->pLoadData.pObject->TagMemAllocator.BytesLeft;
    if ( v9 > BytesLeft )
    {
      pCurrent = Scaleform::GFx::DataAllocator::OverflowAlloc(p_TagMemAllocator, v9);
    }
    else
    {
      pCurrent = p_TagMemAllocator->pCurrent;
      p->pLoadData.pObject->TagMemAllocator.BytesLeft = BytesLeft - v9;
      p_TagMemAllocator->pCurrent = &pCurrent[v9];
    }
    if ( !pCurrent )
      return;
    *(_QWORD *)pCurrent = &Scaleform::GFx::PlaceObject3Tag::`vftable';
  }
  else
  {
    pObject = p->pLoadStates.pObject->pAS2Support.pObject;
    if ( !pObject )
    {
      Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "GFx_PlaceObject3Loader - AS2 support is not installed. Tag is skipped.");
      return;
    }
    pCurrent = (unsigned __int8 *)pObject->AllocPlaceObject3Tag(pObject, p, v4);
  }
  if ( pCurrent )
  {
    if ( HasEventHandlers )
    {
      Scaleform::GFx::Stream::ReadToBuffer(&pAltStream->Stream, pCurrent + 16, v4 - 8);
      Scaleform::GFx::PlaceObject2Tag::RestructureForEventHandlers(pCurrent + 8);
    }
    else
    {
      Scaleform::GFx::Stream::ReadToBuffer(&pAltStream->Stream, pCurrent + 8, v4);
    }
    Scaleform::GFx::LoadProcess::AddExecuteTag(p, (Scaleform::GFx::ExecuteTag *)pCurrent);
  }
}

void __fastcall Scaleform::GFx::GFx_PlaceObjectLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rdi
  unsigned __int64 v4; // rax
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // r8
  unsigned __int64 v6; // rbp
  unsigned __int64 BytesLeft; // r9
  unsigned __int64 v8; // rdx
  unsigned __int8 *pCurrent; // rax
  Scaleform::GFx::PlaceObjectTag *v10; // rax
  Scaleform::GFx::PlaceObjectTag *v11; // rsi

  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  PlaceObject\n");
  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v4 = Scaleform::GFx::PlaceObject3Tag::ComputeDataSize(&pAltStream->Stream);
  pObject = p->pLoadData.pObject;
  v6 = v4;
  BytesLeft = pObject->TagMemAllocator.BytesLeft;
  v8 = (v4 + 22) & 0xFFFFFFFFFFFFFFF8ui64;
  if ( v8 > BytesLeft )
  {
    pCurrent = Scaleform::GFx::DataAllocator::OverflowAlloc(&pObject->TagMemAllocator, v8);
  }
  else
  {
    pCurrent = pObject->TagMemAllocator.pCurrent;
    pObject->TagMemAllocator.BytesLeft = BytesLeft - v8;
    pObject->TagMemAllocator.pCurrent = &pCurrent[v8];
  }
  if ( pCurrent )
  {
    Scaleform::GFx::PlaceObjectTag::PlaceObjectTag((Scaleform::GFx::PlaceObjectTag *)pCurrent);
    v11 = v10;
  }
  else
  {
    v11 = 0i64;
  }
  Scaleform::GFx::Stream::ReadToBuffer(&pAltStream->Stream, v11->pData, v6);
  Scaleform::GFx::PlaceObjectTag::CheckForCxForm(v11, v6);
  Scaleform::GFx::LoadProcess::AddExecuteTag(p, v11);
}

void __fastcall Scaleform::GFx::GFx_RemoveObject2Loader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  Scaleform::GFx::ASSupport *v4; // rcx
  unsigned __int8 *pCurrent; // rbx
  unsigned __int64 BytesLeft; // rdx
  Scaleform::GFx::DataAllocator *p_TagMemAllocator; // rcx

  pObject = p->pLoadData.pObject;
  if ( (pObject->FileAttributes & 8) == 0 )
  {
    v4 = p->pLoadStates.pObject->pAS2Support.pObject;
    if ( !v4 )
    {
      Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "GFx_PlaceObject3Loader - AS2 support is not installed. Tag is skipped.");
      return;
    }
    pCurrent = (unsigned __int8 *)v4->AllocRemoveObject2Tag(v4, p);
    goto LABEL_10;
  }
  BytesLeft = pObject->TagMemAllocator.BytesLeft;
  p_TagMemAllocator = &pObject->TagMemAllocator;
  if ( BytesLeft < 0x10 )
  {
    pCurrent = Scaleform::GFx::DataAllocator::OverflowAlloc(p_TagMemAllocator, 0x10ui64);
  }
  else
  {
    pCurrent = p_TagMemAllocator->pCurrent;
    p_TagMemAllocator->pCurrent += 16;
    p_TagMemAllocator->BytesLeft = BytesLeft - 16;
  }
  if ( pCurrent )
  {
    *(_QWORD *)pCurrent = &Scaleform::GFx::RemoveObject2Tag::`vftable';
LABEL_10:
    if ( pCurrent )
    {
      (*(void (__fastcall **)(unsigned __int8 *, Scaleform::GFx::LoadProcess *))(*(_QWORD *)pCurrent + 64i64))(
        pCurrent,
        p);
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "  RemoveObject2(%d)\n");
      Scaleform::GFx::LoadProcess::AddExecuteTag(p, (Scaleform::GFx::ExecuteTag *)pCurrent);
    }
  }
}

void __fastcall Scaleform::GFx::GFx_RemoveObjectLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  Scaleform::GFx::ASSupport *v4; // rcx
  unsigned __int8 *pCurrent; // rbx
  unsigned __int64 BytesLeft; // rdx
  Scaleform::GFx::DataAllocator *p_TagMemAllocator; // rcx

  pObject = p->pLoadData.pObject;
  if ( (pObject->FileAttributes & 8) == 0 )
  {
    v4 = p->pLoadStates.pObject->pAS2Support.pObject;
    if ( !v4 )
    {
      Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "GFx_RemoveObjectLoader - AS2 support is not installed. Tag is skipped.");
      return;
    }
    pCurrent = (unsigned __int8 *)v4->AllocRemoveObjectTag(v4, p);
    goto LABEL_10;
  }
  BytesLeft = pObject->TagMemAllocator.BytesLeft;
  p_TagMemAllocator = &pObject->TagMemAllocator;
  if ( BytesLeft < 0x18 )
  {
    pCurrent = Scaleform::GFx::DataAllocator::OverflowAlloc(p_TagMemAllocator, 0x18ui64);
  }
  else
  {
    pCurrent = p_TagMemAllocator->pCurrent;
    p_TagMemAllocator->pCurrent += 24;
    p_TagMemAllocator->BytesLeft = BytesLeft - 24;
  }
  if ( pCurrent )
  {
    *(_QWORD *)pCurrent = &Scaleform::GFx::RemoveObjectTag::`vftable';
LABEL_10:
    if ( pCurrent )
    {
      (*(void (__fastcall **)(unsigned __int8 *, Scaleform::GFx::LoadProcess *))(*(_QWORD *)pCurrent + 64i64))(
        pCurrent,
        p);
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "  RemoveObject(%d, %d)\n");
      Scaleform::GFx::LoadProcess::AddExecuteTag(p, (Scaleform::GFx::ExecuteTag *)pCurrent);
    }
  }
}

void __fastcall Scaleform::GFx::GFx_Scale9GridLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v4; // eax
  __int64 Pos; // r10
  unsigned int v6; // esi
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  Scaleform::GFx::SpriteDef *pResource; // rbx
  Scaleform::GFx::ResourceId rid; // [rsp+40h] [rbp-48h] BYREF
  Scaleform::GFx::ResourceHandle phandle; // [rsp+48h] [rbp-40h] BYREF
  Scaleform::Render::Rect<float> pr; // [rsp+60h] [rbp-28h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  pr = 0i64;
  v4 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v4 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  v6 = pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8);
  pAltStream->Stream.Pos = Pos + 2;
  Scaleform::GFx::Stream::ReadRect(&pAltStream->Stream, &pr);
  if ( (unsigned __int8)Scaleform::GFx::Stream::IsVerboseParse(&pAltStream->Stream) )
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "Scale9GridLoader, id=%d, x1=%d, y1=%d, x2=%d, y2=%d\n");
  if ( pr.x1 >= pr.x2 )
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogWarning(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "Scale9Grid for resource=%d has negative width %f",
      v6,
      (float)((float)(pr.x2 - pr.x1) / 20.0));
    return;
  }
  if ( pr.y1 >= pr.y2 )
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogWarning(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "Scale9Grid for resource=%d has negative height %f",
      v6,
      (float)((float)(pr.y2 - pr.y1) / 20.0));
    return;
  }
  pObject = p->pLoadData.pObject;
  rid.Id = v6;
  phandle.HType = RH_Pointer;
  phandle.pResource = 0i64;
  if ( (unsigned __int8)Scaleform::GFx::MovieDataDef::LoadTaskData::GetResourceHandle(pObject, &phandle, &rid) )
  {
    if ( phandle.HType )
      return;
    pResource = (Scaleform::GFx::SpriteDef *)phandle.pResource;
    if ( !phandle.pResource )
      return;
    if ( (((__int64 (__fastcall *)(Scaleform::GFx::Resource *))phandle.pResource->GetResourceTypeCode)(phandle.pResource) & 0xFF00) == 33792 )
    {
      Scaleform::GFx::SpriteDef::SetScale9Grid(pResource, &pr);
    }
    else if ( (((__int64 (__fastcall *)(Scaleform::GFx::SpriteDef *))pResource->GetResourceTypeCode)(pResource) & 0xFF00) == 33024 )
    {
      Scaleform::GFx::ButtonDef::SetScale9Grid((Scaleform::GFx::ButtonDef *)pResource, &pr);
    }
  }
  if ( phandle.HType == RH_Pointer )
  {
    if ( phandle.pResource )
      Scaleform::GFx::Resource::Release(phandle.pResource);
  }
}

void __fastcall Scaleform::GFx::GFx_SetBackgroundColorLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::DataAllocator *p_TagMemAllocator; // rcx
  unsigned __int64 BytesLeft; // rdx
  Scaleform::GFx::SetBackgroundColorTag *pCurrent; // rbx

  p_TagMemAllocator = &p->pLoadData.pObject->TagMemAllocator;
  BytesLeft = p_TagMemAllocator->BytesLeft;
  if ( BytesLeft < 0x10 )
  {
    pCurrent = (Scaleform::GFx::SetBackgroundColorTag *)Scaleform::GFx::DataAllocator::OverflowAlloc(
                                                          p_TagMemAllocator,
                                                          0x10ui64);
  }
  else
  {
    pCurrent = (Scaleform::GFx::SetBackgroundColorTag *)p_TagMemAllocator->pCurrent;
    p_TagMemAllocator->pCurrent += 16;
    p_TagMemAllocator->BytesLeft = BytesLeft - 16;
  }
  if ( pCurrent )
    pCurrent->__vftable = (Scaleform::GFx::SetBackgroundColorTag_vtbl *)&Scaleform::GFx::SetBackgroundColorTag::`vftable';
  Scaleform::GFx::SetBackgroundColorTag::Read(pCurrent, p);
  Scaleform::GFx::LoadProcess::AddExecuteTag(p, pCurrent);
}

void __fastcall Scaleform::GFx::GFx_SetTabIndexLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v4; // eax
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rbx
  int v6; // eax

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v4 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v4 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  pAltStream->Stream.Pos += 2;
  p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !p_ProcessInfo )
    p_ProcessInfo = &p->ProcessInfo;
  v6 = p_ProcessInfo->Stream.DataSize - p_ProcessInfo->Stream.Pos;
  p_ProcessInfo->Stream.UnusedBits = 0;
  if ( v6 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&p_ProcessInfo->Stream, 2);
  p_ProcessInfo->Stream.Pos += 2;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "SetTabIndex (unused) \n");
}

void __fastcall Scaleform::GFx::GFx_SpriteLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v4; // eax
  __int64 Pos; // r9
  unsigned __int8 *pBuffer; // rdx
  int v7; // er8
  int v8; // ecx
  int v9; // ebx
  Scaleform::GFx::SpriteDef *v10; // rax
  Scaleform::GFx::SpriteDef *v11; // rax
  Scaleform::GFx::SpriteDef *v12; // rsi
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  Scaleform::GFx::ResourceId charId; // [rsp+30h] [rbp+8h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v4 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v4 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  pBuffer = pAltStream->Stream.pBuffer;
  v7 = pBuffer[(unsigned int)(Pos + 1)];
  v8 = pBuffer[Pos];
  pAltStream->Stream.Pos = Pos + 2;
  v9 = v8 | (v7 << 8);
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  sprite\n  char id = %d\n");
  v10 = (Scaleform::GFx::SpriteDef *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))p->pLoadData.pObject->pHeap->Alloc)(
                                       p->pLoadData.pObject->pHeap,
                                       96i64);
  if ( v10 )
  {
    Scaleform::GFx::SpriteDef::SpriteDef(v10, p->pDataDef_Unsafe);
    v12 = v11;
  }
  else
  {
    v12 = 0i64;
  }
  charId.Id = v9;
  Scaleform::GFx::SpriteDef::Read(v12, p, (unsigned __int16 *)&charId);
  pObject = p->pLoadData.pObject;
  v12->Id.Id = v9;
  charId.Id = v9;
  Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(pObject, &charId, v12);
  Scaleform::GFx::Resource::Release(v12);
}

Scaleform::Render::Rect<unsigned long> *__fastcall Scaleform::GFx::ConstShapeWithStyles::GetBoundsLocal(
        Scaleform::Render::SubImage *this,
        Scaleform::Render::Rect<unsigned long> *result)
{
  *result = this->SubRect;
  return result;
}

__int64 __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStartingPos(
        AgDisplay *this)
{
  return (unsigned int)this->m_windowMode;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::ConstShapeWithStyles::GetRectBoundsLocal(
        Scaleform::GFx::ConstShapeWithStyles *this,
        Scaleform::Render::Rect<float> *result)
{
  *result = this->RectBound;
  return result;
}

Scaleform::GFx::SWFProcessInfo *__fastcall Scaleform::GFx::LoadProcess::GetStream(Scaleform::GFx::LoadProcess *this)
{
  Scaleform::GFx::SWFProcessInfo *result; // rax

  result = (Scaleform::GFx::SWFProcessInfo *)this->pAltStream;
  if ( !result )
    return &this->ProcessInfo;
  return result;
}

__int64 __fastcall Scaleform::Render::RawImage::GetUse(Scaleform::Render::RawImage *this)
{
  return this->Data.Use;
}

Scaleform::File *__fastcall Scaleform::GFx::LoadProcess::GetUnderlyingFile(Scaleform::GFx::LoadProcess *this)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  Scaleform::File *result; // rax

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)this->pAltStream;
  if ( !pAltStream )
    pAltStream = &this->ProcessInfo;
  Scaleform::GFx::Stream::SyncFileStream(&pAltStream->Stream);
  result = pAltStream->Stream.pInput.pObject;
  pAltStream->Stream.ResyncFile = 1;
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

void Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
        Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *this,
        const char *pfmt,
        ...)
{
  Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *v2; // rax
  bool (__fastcall *IsVerboseActionErrors)(Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *); // rcx
  __int64 *v4; // rcx
  Scaleform::Log *GlobalLog; // rax
  __int64 v6; // rax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  const char *v8; // [rsp+48h] [rbp+10h]
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, pfmt);
  v8 = pfmt;
  v2 = this - 4;
  if ( !this )
    v2 = 0i64;
  IsVerboseActionErrors = v2[3].__vftable[1].IsVerboseActionErrors;
  if ( IsVerboseActionErrors )
  {
    v4 = (__int64 *)*((_QWORD *)IsVerboseActionErrors + 4);
    if ( v4 || (GlobalLog = Scaleform::Log::GetGlobalLog(), pfmt = v8, (v4 = (__int64 *)GlobalLog) != 0i64) )
    {
      v6 = *v4;
      v7[0] = 200704;
      (*(void (__fastcall **)(__int64 *, int *, const char *, __int64 *))(v6 + 8))(v4, v7, pfmt, (__int64 *)va);
    }
  }
}

void __fastcall Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *this,
        const char *pfmt)
{
  ;
}

void Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogWarning(
        Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *this,
        const char *pfmt,
        ...)
{
  Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *v2; // rax
  bool (__fastcall *IsVerboseActionErrors)(Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *); // rcx
  __int64 *v4; // rcx
  Scaleform::Log *GlobalLog; // rax
  __int64 v6; // rax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  const char *v8; // [rsp+48h] [rbp+10h]
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, pfmt);
  v8 = pfmt;
  v2 = this - 4;
  if ( !this )
    v2 = 0i64;
  IsVerboseActionErrors = v2[3].__vftable[1].IsVerboseActionErrors;
  if ( IsVerboseActionErrors )
  {
    v4 = (__int64 *)*((_QWORD *)IsVerboseActionErrors + 4);
    if ( v4 || (GlobalLog = Scaleform::Log::GetGlobalLog(), pfmt = v8, (v4 = (__int64 *)GlobalLog) != 0i64) )
    {
      v6 = *v4;
      v7[0] = 135168;
      (*(void (__fastcall **)(__int64 *, int *, const char *, __int64 *))(v6 + 8))(v4, v7, pfmt, (__int64 *)va);
    }
  }
}

__int64 __fastcall Scaleform::GFx::LoadProcess::ReadU32(Scaleform::GFx::LoadProcess *this)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v2; // eax
  __int64 Pos; // r10
  unsigned __int8 *pBuffer; // r8
  __int64 result; // rax

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)this->pAltStream;
  if ( !pAltStream )
    pAltStream = &this->ProcessInfo;
  v2 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v2 < 4 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
  Pos = pAltStream->Stream.Pos;
  pBuffer = pAltStream->Stream.pBuffer;
  result = pBuffer[Pos] | ((pBuffer[(unsigned int)(Pos + 1)] | (((pBuffer[(unsigned int)(Pos + 3)] << 8) | (unsigned int)pBuffer[(unsigned int)(Pos + 2)]) << 8)) << 8);
  pAltStream->Stream.Pos = Pos + 4;
  return result;
}

__int64 __fastcall Scaleform::GFx::LoadProcess::ReadU8(Scaleform::GFx::LoadProcess *this)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v2; // eax
  __int64 Pos; // rcx
  __int64 result; // rax

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)this->pAltStream;
  if ( !pAltStream )
    pAltStream = &this->ProcessInfo;
  v2 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v2 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
  Pos = pAltStream->Stream.Pos;
  result = pAltStream->Stream.pBuffer[Pos];
  pAltStream->Stream.Pos = Pos + 1;
  return result;
}

char __fastcall Scaleform::GFx::RegisterTagLoader(
        unsigned int tagType,
        void (__fastcall *tagLoaderFunc)(Scaleform::GFx::LoadProcess *, const Scaleform::GFx::TagInfo *))
{
  if ( tagType >= 0x5C )
    return 0;
  Scaleform::GFx::SWF_TagLoaderTable[tagType] = tagLoaderFunc;
  return 1;
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::Text::HighlightDesc *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::Render::Text::HighlightDesc *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::Render::Text::HighlightDesc *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         Data,
                                                         v5 << 6);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (Scaleform::Render::Text::HighlightDesc *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                               Scaleform::Memory::pGlobalHeap,
                                                               v5 << 6,
                                                               &v7);
    }
    else
    {
      v5 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v5;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::TextureGlyph *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::Render::TextureGlyph *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = v6 << 6;
      if ( Data )
      {
        v8 = (Scaleform::Render::TextureGlyph *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                  Scaleform::Memory::pGlobalHeap,
                                                  Data,
                                                  v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 261;
      this->Data = (Scaleform::Render::TextureGlyph *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayData<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  Scaleform::Render::TextureGlyph *v5; // r8
  unsigned __int64 v6; // rbx
  float *p_x2; // rax

  Size = this->Size;
  Scaleform::ArrayDataBase<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    this,
    this,
    newSize);
  if ( newSize > Size )
  {
    v5 = &this->Data[Size];
    v6 = newSize - Size;
    if ( v6 )
    {
      p_x2 = &v5->UvBounds.x2;
      do
      {
        if ( v5 )
        {
          v5->__vftable = (Scaleform::Render::TextureGlyph_vtbl *)&Scaleform::RefCountImplCore::`vftable';
          *((_DWORD *)p_x2 - 8) = 1;
          v5->__vftable = (Scaleform::Render::TextureGlyph_vtbl *)&Scaleform::Render::TextureGlyph::`vftable';
          *((_QWORD *)p_x2 - 3) = 0i64;
          *((_QWORD *)p_x2 - 1) = 0i64;
          *(_QWORD *)p_x2 = 0i64;
          p_x2[4] = NAN;
        }
        ++v5;
        p_x2 += 16;
        --v6;
      }
      while ( v6 );
    }
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::ImportData::Symbol,Scaleform::AllocatorLH<Scaleform::GFx::ImportData::Symbol,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::GFx::ImportData::Symbol,Scaleform::AllocatorLH<Scaleform::GFx::ImportData::Symbol,2>,Scaleform::ArrayDefaultPolicy> *this,
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
    Scaleform::ConstructorMov<Scaleform::GFx::ImportData::Symbol>::DestructArray(&this->Data[newSize], Size - newSize);
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::TextureGlyph,Scaleform::AllocatorGH<Scaleform::Render::TextureGlyph,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::TextureGlyph,Scaleform::AllocatorGH<Scaleform::Render::TextureGlyph,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // r14
  unsigned __int64 v7; // r14
  Scaleform::Render::TextureGlyph *i; // rdi

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = &this->Data[v7 + newSize - 1]; v7; --v7 )
    {
      ((void (__fastcall *)(Scaleform::Render::TextureGlyph *, _QWORD))i->~RefCountImplCore)(i, 0i64);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // r14
  unsigned __int64 v7; // r14
  Scaleform::Render::TextureGlyph *i; // rdi

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = &this->Data[v7 + newSize - 1]; v7; --v7 )
    {
      ((void (__fastcall *)(Scaleform::Render::TextureGlyph *, _QWORD))i->~RefCountImplCore)(i, 0i64);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::GFx::ConstShapeWithStyles::SetBoundsLocal(
        Scaleform::GFx::ConstShapeWithStyles *this,
        const Scaleform::Render::Rect<float> *r)
{
  float y2; // xmm2_4
  float x2; // xmm1_4
  float x1; // eax

  y2 = r->y2;
  x2 = r->x2;
  x1 = r->x1;
  this->Bound.y1 = r->y1;
  this->Bound.x2 = x2;
  this->Bound.y2 = y2;
  this->Bound.x1 = x1;
}

void __fastcall Scaleform::GFx::ConstShapeWithStyles::SetRectBoundsLocal(
        Scaleform::GFx::ConstShapeWithStyles *this,
        const Scaleform::Render::Rect<float> *r)
{
  float y2; // xmm2_4
  float x2; // xmm1_4
  float x1; // eax

  y2 = r->y2;
  x2 = r->x2;
  x1 = r->x1;
  this->RectBound.y1 = r->y1;
  this->RectBound.x2 = x2;
  this->RectBound.y2 = y2;
  this->RectBound.x1 = x1;
}

void __fastcall Scaleform::GFx::ButtonDef::SetScale9Grid(
        Scaleform::GFx::ButtonDef *this,
        const Scaleform::Render::Rect<float> *r)
{
  Scaleform::GFx::Scale9Grid *pScale9Grid; // rdx
  Scaleform::GFx::Scale9Grid *v5; // rax
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // ecx
  float y2; // xmm2_4
  float x2; // xmm1_4
  float x1; // eax
  int v12; // [rsp+30h] [rbp+8h] BYREF

  pScale9Grid = this->pScale9Grid;
  if ( pScale9Grid )
  {
    y2 = r->y2;
    x2 = r->x2;
    x1 = r->x1;
    pScale9Grid->Rect.y1 = r->y1;
    pScale9Grid->Rect.x2 = x2;
    pScale9Grid->Rect.y2 = y2;
    pScale9Grid->Rect.x1 = x1;
  }
  else
  {
    v12 = 258;
    v5 = (Scaleform::GFx::Scale9Grid *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                         Scaleform::Memory::pGlobalHeap,
                                         this,
                                         16i64,
                                         &v12);
    if ( v5 )
    {
      v6 = r->y2;
      v7 = r->x2;
      v8 = r->x1;
      v5->Rect.y1 = r->y1;
      v5->Rect.x2 = v7;
      v5->Rect.y2 = v6;
      v5->Rect.x1 = v8;
      this->pScale9Grid = v5;
    }
    else
    {
      this->pScale9Grid = 0i64;
    }
  }
}

void __fastcall Scaleform::GFx::SpriteDef::SetScale9Grid(
        Scaleform::GFx::SpriteDef *this,
        const Scaleform::Render::Rect<float> *r)
{
  Scaleform::GFx::Scale9Grid *v4; // rax
  Scaleform::GFx::Scale9Grid *pScale9Grid; // rcx
  float y2; // xmm2_4
  float x2; // xmm1_4
  float x1; // eax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !this->pScale9Grid )
  {
    v9 = 258;
    v4 = (Scaleform::GFx::Scale9Grid *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                         Scaleform::Memory::pGlobalHeap,
                                         this,
                                         16i64,
                                         &v9);
    if ( v4 )
    {
      *(_QWORD *)&v4->Rect.x1 = 0i64;
      *(_QWORD *)&v4->Rect.x2 = 0i64;
    }
    else
    {
      v4 = 0i64;
    }
    this->pScale9Grid = v4;
  }
  pScale9Grid = this->pScale9Grid;
  y2 = r->y2;
  x2 = r->x2;
  x1 = r->x1;
  pScale9Grid->Rect.y1 = r->y1;
  pScale9Grid->Rect.x2 = x2;
  pScale9Grid->Rect.y2 = y2;
  pScale9Grid->Rect.x1 = x1;
}

void __fastcall Scaleform::GFx::PlaceObject2Tag::Trace(Scaleform::GFx::PlaceObject2Tag *this, const char *str)
{
  ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)this);
}

void __fastcall Scaleform::GFx::PlaceObject2Taga::Trace(Scaleform::GFx::PlaceObject2Taga *this, const char *str)
{
  ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)this);
}

void __fastcall Scaleform::GFx::PlaceObject2Tag::Unpack(
        Scaleform::GFx::PlaceObject2Tag *this,
        Scaleform::GFx::GFxPlaceObjectBase::UnpackedData *data)
{
  Scaleform::GFx::PlaceObject2Tag::UnpackBase(this, data, 6u);
}

void __fastcall Scaleform::GFx::PlaceObject2Taga::Unpack(
        Scaleform::GFx::PlaceObject2Taga *this,
        Scaleform::GFx::GFxPlaceObjectBase::UnpackedData *data)
{
  Scaleform::GFx::PlaceObject2Tag::UnpackBase(this, data, 3u);
}

