#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asimemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displaylist.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_statictext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_textfielddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/ime/gfx_imemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_textfield.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/text/text_editorkit.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"

Scaleform::GFx::Sprite::Sprite(Scaleform::GFx::TimelineDef * pdef, Scaleform::GFx::MovieDefImpl * pdefImpl, Scaleform::GFx::ASMovieRootBase * pr, Scaleform::GFx::InteractiveObject * pparent, Scaleform::GFx::ResourceId id, bool loadedSeparately); // 0x14035DFB0
Scaleform::GFx::Sprite::~Sprite(); // 0x14035E1E0
void Scaleform::GFx::Sprite::SetLoadedSeparately(bool v); // 0x140360240
void Scaleform::GFx::Sprite::SetIMECandidateListFont(Scaleform::GFx::FontHandle * pfontHandle); // 0x140360220
void Scaleform::GFx::Sprite::ForceShutdown(); // 0x14035E940
Scaleform::GFx::InteractiveObject * Scaleform::GFx::Sprite::GetTopParent(bool ignoreLockRoot); // 0x14035F0B0
unsigned long Scaleform::GFx::Sprite::GetLoadingFrame(); // 0x14035EDB0
Scaleform::Render::Rect<float> Scaleform::GFx::Sprite::GetBounds(const Scaleform::Render::Matrix2x4<float> & transform); // 0x14035E980
Scaleform::Render::Rect<float> Scaleform::GFx::Sprite::GetRectBounds(const Scaleform::Render::Matrix2x4<float> & transform); // 0x140349370
Scaleform::Render::Rect<float> Scaleform::GFx::Sprite::GetFocusRect(); // 0x14035EBE0
void Scaleform::GFx::Sprite::GetTextSnapshot(Scaleform::GFx::StaticTextSnapshotData * pdata); // 0x14035EE80
void Scaleform::GFx::Sprite::Restart(); // 0x140360080
Scaleform::GFx::DisplayObjectBase::TopMostResult Scaleform::GFx::Sprite::GetTopMostMouseEntity(const Scaleform::Render::Point<float> & pt, Scaleform::GFx::DisplayObjectBase::TopMostDescr * pdescr); // 0x14035EF20
void Scaleform::GFx::Sprite::IncrementFrameAndCheckForLoop(); // 0x14035F450
void Scaleform::GFx::Sprite::AdvanceFrame(bool nextFrame, float framePos); // 0x14035E4F0
void Scaleform::GFx::Sprite::ExecuteFrame0Events(); // 0x14035E710
void Scaleform::GFx::Sprite::ExecuteFrameTags(unsigned long frame); // 0x14035E790
void Scaleform::GFx::Sprite::ExecuteImportedInitActions(Scaleform::GFx::MovieDef * psourceMovie); // 0x14035E850
void Scaleform::GFx::Sprite::GotoFrame(unsigned long targetFrameNumber); // 0x14035F100
bool Scaleform::GFx::Sprite::GotoLabeledFrame(const char * label, long offset); // 0x14035F3B0
void Scaleform::GFx::Sprite::SetPlayState(Scaleform::GFx::PlayState s); // 0x140360290
void Scaleform::GFx::Sprite::CloneInternalData(const Scaleform::GFx::InteractiveObject * src); // 0x14035E650
long Scaleform::GFx::Sprite::CheckAdvanceStatus(bool playingNow); // 0x14035E570
Scaleform::GFx::DisplayObjectBase * Scaleform::GFx::Sprite::AddDisplayObject(const Scaleform::GFx::CharPosInfo & pos, const Scaleform::GFx::ASString & name, const Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> * peventHandlers, const void * pinitSource, unsigned long createFrame, unsigned long addFlags, Scaleform::GFx::CharacterCreateInfo * pcharCreateOverride, Scaleform::GFx::InteractiveObject * origChar); // 0x14035E480
void Scaleform::GFx::Sprite::CreateAndReplaceDisplayObject(const Scaleform::GFx::CharPosInfo & pos, const Scaleform::GFx::ASString & name, Scaleform::GFx::DisplayObjectBase * * newChar); // 0x14035E6A0
bool Scaleform::GFx::Sprite::IsLevelMovie(); // 0x14035F730
long Scaleform::GFx::Sprite::GetLevel(); // 0x14035ED80
bool Scaleform::GFx::Sprite::OnEvent(const Scaleform::GFx::EventId & id); // 0x14035F7D0
bool Scaleform::GFx::Sprite::OnMouseEvent(const Scaleform::GFx::EventId & id); // 0x14035FC90
void Scaleform::GFx::Sprite::OnEventUnload(); // 0x14035F860
bool Scaleform::GFx::Sprite::OnUnloading(); // 0x14035FD20
bool Scaleform::GFx::Sprite::OnKeyEvent(const Scaleform::GFx::EventId & id, long * pkeyMask); // 0x14035FA10
void Scaleform::GFx::Sprite::DefaultOnEventLoad(); // 0x14035E6F0
void Scaleform::GFx::Sprite::OnEventXmlsocketOnxml(); // 0x14035F920
void Scaleform::GFx::Sprite::OnEventIntervalTimer(); // 0x14002E7C0
void Scaleform::GFx::Sprite::OnEventLoadProgress(); // 0x14035F810
bool Scaleform::GFx::Sprite::PointTestLocal(const Scaleform::Render::Point<float> & pt, unsigned char hitTestMask); // 0x14035FD60
void Scaleform::GFx::Sprite::OnGettingKeyboardFocus(unsigned long controllerIdx, Scaleform::GFx::FocusMovedType fmt); // 0x14035F970
bool Scaleform::GFx::Sprite::OnLosingKeyboardFocus(Scaleform::GFx::InteractiveObject * __formal, unsigned long controllerIdx, Scaleform::GFx::FocusMovedType fmt); // 0x14035FBD0
void Scaleform::GFx::Sprite::PropagateNoAdvanceGlobalFlag(); // 0x14035FE60
void Scaleform::GFx::Sprite::PropagateNoAdvanceLocalFlag(); // 0x14035FF70
void Scaleform::GFx::Sprite::SetVisible(bool visible); // 0x1403602C0
Scaleform::GFx::DrawingContext * Scaleform::GFx::Sprite::GetDrawingContext(); // 0x14035EB10
class Scaleform::Ptr<Scaleform::GFx::DisplayObject>
{
protected:
	Scaleform::GFx::DisplayObject * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::DisplayObject>(const Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
	Ptr<Scaleform::GFx::DisplayObject>(Scaleform::GFx::DisplayObject *);
	Ptr<Scaleform::GFx::DisplayObject>(Scaleform::Ptr<Scaleform::GFx::DisplayObject> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::DisplayObject>(Scaleform::Pickable<Scaleform::GFx::DisplayObject>);
	Ptr<Scaleform::GFx::DisplayObject>(Scaleform::GFx::DisplayObject &);
	Ptr<Scaleform::GFx::DisplayObject>();
	~Ptr<Scaleform::GFx::DisplayObject>();
	bool operator==(Scaleform::GFx::DisplayObject *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
	bool operator!=(Scaleform::GFx::DisplayObject *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> & operator=(Scaleform::Pickable<Scaleform::GFx::DisplayObject>);
	const Scaleform::Ptr<Scaleform::GFx::DisplayObject> & operator=(Scaleform::GFx::DisplayObject &);
	const Scaleform::Ptr<Scaleform::GFx::DisplayObject> & operator=(Scaleform::GFx::DisplayObject *);
	const Scaleform::Ptr<Scaleform::GFx::DisplayObject> & operator=(const Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> & SetPtr(Scaleform::Pickable<Scaleform::GFx::DisplayObject>);
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> & SetPtr(Scaleform::GFx::DisplayObject &);
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> & SetPtr(Scaleform::GFx::DisplayObject *);
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::DisplayObject * & GetRawRef();
	Scaleform::GFx::DisplayObject * GetPtr();
	Scaleform::GFx::DisplayObject & operator*();
	Scaleform::GFx::DisplayObject * operator->();
	Scaleform::GFx::DisplayObject * operator class Scaleform::GFx::DisplayObject *();
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> & Pick(Scaleform::GFx::DisplayObject *);
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> & Pick(Scaleform::Pickable<Scaleform::GFx::DisplayObject>);
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> & Pick(Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
};
Scaleform::Render::TreeContainer * Scaleform::GFx::Sprite::GetRenderContainer(); // 0x14035EE00
void Scaleform::GFx::Sprite::SetHitArea(Scaleform::GFx::Sprite * phitArea); // 0x140360120
Scaleform::GFx::Sprite * Scaleform::GFx::Sprite::GetHitArea(); // 0x14035ED10
void Scaleform::GFx::Sprite::SetName(const Scaleform::GFx::ASString & name); // 0x140360270
bool Scaleform::GFx::Sprite::IsFocusEnabled(Scaleform::GFx::FocusMovedType fmt); // 0x14035F5A0void __fastcall Scaleform::GFx::InteractiveObject::ModifyOptimizedPlayListLocal<Scaleform::GFx::Sprite>(
        Scaleform::GFx::InteractiveObject *this)
{
  unsigned int Flags; // ecx
  bool v3; // dl
  int v4; // eax

  Flags = this->Flags;
  v3 = (Flags & 0x200000) != 0 && (Flags & 0x400000) == 0;
  v4 = Scaleform::GFx::Sprite::CheckAdvanceStatus((Scaleform::GFx::Sprite *)this, v3);
  if ( v4 == -1 )
  {
    this->Flags |= 0x400000u;
  }
  else if ( v4 == 1 )
  {
    Scaleform::GFx::InteractiveObject::AddToOptimizedPlayList(this);
  }
}

void __fastcall Scaleform::Render::Text::FontHandle::FontHandle(
        Scaleform::Render::Text::FontHandle *this,
        Scaleform::Render::Text::FontManagerBase *pmanager,
        Scaleform::Render::Font *pfont,
        const char *pfontName,
        unsigned int overridenFontFlags)
{
  const char *v8; // rax

  this->pFontManager = pmanager;
  this->__vftable = (Scaleform::Render::Text::FontHandle_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::Text::FontHandle_vtbl *)&Scaleform::Render::Text::FontHandle::`vftable';
  this->OverridenFontFlags = overridenFontFlags;
  Scaleform::StringLH::StringLH(&this->FontName);
  this->FontScaleFactor = 1.0;
  if ( pfont )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfont);
  this->pFont.pObject = pfont;
  if ( pfontName )
  {
    v8 = pfont->GetName(pfont);
    if ( Scaleform::String::CompareNoCase(v8, pfontName) )
      Scaleform::String::operator=(&this->FontName, pfontName);
  }
}

void __fastcall Scaleform::GFx::Sprite::Sprite(
        Scaleform::GFx::Sprite *this,
        Scaleform::GFx::TimelineDef *pdef,
        Scaleform::GFx::MovieDefImpl *pdefImpl,
        Scaleform::GFx::ASMovieRootBase *pr,
        Scaleform::GFx::InteractiveObject *pparent,
        unsigned int *id,
        bool loadedSeparately)
{
  Scaleform::GFx::ResourceLibBase *pLib; // rax
  Scaleform::Render::Rect<float> v12; // xmm0
  unsigned __int8 v13; // al
  unsigned __int8 v14; // al
  bool v15; // dl
  Scaleform::GFx::ResourceId v16; // [rsp+30h] [rbp-68h] BYREF
  Scaleform::Render::Rect<float> v17; // [rsp+40h] [rbp-58h]
  Scaleform::Render::Rect<float> rect; // [rsp+50h] [rbp-48h] BYREF

  v16.Id = *id;
  Scaleform::GFx::DisplayObjContainer::DisplayObjContainer(this, pdefImpl, pr, pparent, &v16);
  this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::Sprite_vtbl *)&Scaleform::GFx::Sprite::`vftable'{for `Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>'};
  this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::Sprite::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>'};
  if ( pdef )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pdef);
  this->pDef.pObject = pdef;
  *(_QWORD *)&this->PlayStatePriv = 0i64;
  this->pDrawingAPI.pObject = 0i64;
  this->pHitAreaHandle.pObject = 0i64;
  this->pHitAreaHolder = 0i64;
  *(_WORD *)&this->Flags = 0;
  this->MouseStatePriv = UP;
  this->pASRoot = pr;
  if ( (((__int64 (__fastcall *)(Scaleform::GFx::TimelineDef *))pdef->GetResourceTypeCode)(pdef) & 0xFF00) == 33792 )
  {
    pLib = pdef[2].pLib;
    if ( pLib )
      v12 = (Scaleform::Render::Rect<float>)*pLib;
    else
      v12 = 0i64;
    v17 = v12;
    rect = v12;
    Scaleform::GFx::DisplayObjContainer::SetScale9Grid(this, &rect);
    this->Flags |= 0x40u;
  }
  this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags |= 0x400u;
  v13 = this->Flags & 0xDC | 1;
  this->Flags = v13;
  if ( loadedSeparately )
    v14 = v13 | 0x10;
  else
    v14 = v13 & 0xEF;
  this->Flags = v14;
  if ( !pparent || loadedSeparately || pparent->GetResourceMovieDef(pparent) == pdefImpl )
  {
    v15 = 0;
    if ( !loadedSeparately )
      return;
  }
  else
  {
    v15 = 1;
  }
  Scaleform::GFx::DisplayObjContainer::AssignRootNode(this, v15);
}

void __fastcall Scaleform::GFx::FontHandle::~FontHandle(Scaleform::GFx::FontHandle *this)
{
  Scaleform::GFx::FontManager *pFontManager; // rcx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::GFx::MovieDef *v4; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  volatile int *v6; // rbx

  this->__vftable = (Scaleform::GFx::FontHandle_vtbl *)&Scaleform::GFx::FontHandle::`vftable';
  pFontManager = (Scaleform::GFx::FontManager *)this->pFontManager;
  if ( pFontManager )
    Scaleform::GFx::FontManager::RemoveFontHandle(pFontManager, this);
  pObject = (Scaleform::RefCountVImpl *)this->pFont.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pFont.pObject = 0i64;
  v4 = this->pSourceMovieDef.pObject;
  if ( v4 )
    Scaleform::GFx::Resource::Release(v4);
  this->__vftable = (Scaleform::GFx::FontHandle_vtbl *)&Scaleform::Render::Text::FontHandle::`vftable';
  v5 = (Scaleform::RefCountVImpl *)this->pFont.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  v6 = (volatile int *)(this->FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v6 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v6);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::Sprite::~Sprite(Scaleform::GFx::Sprite *this)
{
  Scaleform::GFx::CharacterHandle *pObject; // rdi
  Scaleform::GFx::DrawingContext *v3; // rcx
  Scaleform::GFx::TimelineDef *v4; // rcx

  this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::Sprite_vtbl *)&Scaleform::GFx::Sprite::`vftable'{for `Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>'};
  this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::Sprite::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>'};
  Scaleform::GFx::DisplayList::Clear(&this->mDisplayList, this);
  ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)this);
  pObject = this->pHitAreaHandle.pObject;
  if ( pObject )
  {
    if ( --pObject->RefCount <= 0 )
    {
      Scaleform::GFx::CharacterHandle::~CharacterHandle(pObject);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
  }
  v3 = this->pDrawingAPI.pObject;
  if ( v3 )
    Scaleform::RefCountNTSImpl::Release(v3);
  v4 = this->pDef.pObject;
  if ( v4 )
    Scaleform::GFx::Resource::Release(v4);
  Scaleform::GFx::DisplayObjContainer::~DisplayObjContainer(this);
}

void __fastcall Scaleform::GFx::TimelineSnapshot::~TimelineSnapshot(Scaleform::GFx::TimelineSnapshot *this)
{
  Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::NodeType *pNext; // r8
  Scaleform::List<Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement> > *p_SnapshotList; // rcx
  Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::NodeType *v4; // rdx
  Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::PageType *FirstPage; // rdx
  Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::PageType *v6; // rbx

  pNext = (Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::NodeType *)this->SnapshotList.Root.pNext;
  p_SnapshotList = &this->SnapshotList;
  if ( pNext != (Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::NodeType *)p_SnapshotList )
  {
    do
    {
      v4 = pNext[1].pNext;
      pNext->pNext = this->SnapshotHeap.FirstEmptySlot;
      this->SnapshotHeap.FirstEmptySlot = pNext;
      pNext = v4;
    }
    while ( v4 != (Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::NodeType *)p_SnapshotList );
  }
  p_SnapshotList->Root.pPrev = (Scaleform::GFx::TimelineSnapshot::SnapshotElement *)p_SnapshotList;
  p_SnapshotList->Root.pNext = (Scaleform::GFx::TimelineSnapshot::SnapshotElement *)p_SnapshotList;
  ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::GFx::TimelineSnapshot::SnapshotElement **, Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::NodeType *))Scaleform::Memory::pGlobalHeap->Free)(
    Scaleform::Memory::pGlobalHeap,
    this->SnapshotSortedArray.Data.Data,
    pNext);
  FirstPage = this->SnapshotHeap.FirstPage;
  if ( this->SnapshotHeap.FirstPage )
  {
    do
    {
      v6 = FirstPage->pNext;
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      FirstPage = v6;
    }
    while ( v6 );
  }
}

Scaleform::GFx::DisplayObjectBase *__fastcall Scaleform::GFx::Sprite::AddDisplayObject(
        Scaleform::GFx::Sprite *this,
        const Scaleform::GFx::CharPosInfo *pos,
        const Scaleform::GFx::ASString *name,
        const struct Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> *peventHandlers)
{
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix2x4<float> *v8; // rax

  AvmObjOffset = this->AvmObjOffset;
  if ( !AvmObjOffset )
    return 0i64;
  v8 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                        + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
  return (Scaleform::GFx::DisplayObjectBase *)(*(__int64 (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, const Scaleform::GFx::CharPosInfo *, const Scaleform::GFx::ASString *, const struct Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> *))(*(_QWORD *)&v8->M[0][0] + 192i64))(
                                                v8,
                                                pos,
                                                name,
                                                peventHandlers);
}

void __fastcall Scaleform::GFx::Sprite::AdvanceFrame(Scaleform::GFx::Sprite *this, bool nextFrame, float framePos)
{
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix2x4<float> *v6; // rax

  if ( (this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Flags & 0xC) == 0
    && (this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x1000) == 0
    && this->Depth >= -1 )
  {
    ++this->RefCount;
    AvmObjOffset = this->AvmObjOffset;
    if ( AvmObjOffset )
    {
      v6 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                            + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
      (*(void (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, bool))(*(_QWORD *)&v6->M[0][0] + 200i64))(
        v6,
        nextFrame);
    }
    Scaleform::RefCountNTSImpl::Release(this);
  }
}

__int64 __fastcall Scaleform::GFx::Sprite::CheckAdvanceStatus(Scaleform::GFx::Sprite *this, bool playingNow)
{
  unsigned int v2; // edi
  char v5; // si
  unsigned __int8 v6; // al
  const Scaleform::Render::Matrix2x4<float> *v7; // rax
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix2x4<float> *v10; // rax

  v2 = 0;
  if ( (this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Flags & 0xC) != 0
    || (this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x40) != 0 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    if ( this->GetPlayState(this) == State_Playing )
    {
      LOBYTE(v2) = !playingNow;
      return v2;
    }
  }
  if ( !playingNow )
  {
    if ( !v5 )
    {
      AvmObjOffset = this->AvmObjOffset;
      if ( AvmObjOffset )
      {
        v10 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                               + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
        if ( (*(unsigned __int8 (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *))(*(_QWORD *)&v10->M[0][0]
                                                                                            + 256i64))(v10) )
          return 1;
      }
    }
    return v2;
  }
  if ( v5 )
    return 0xFFFFFFFFi64;
  v6 = this->AvmObjOffset;
  if ( !v6 )
    return 0xFFFFFFFFi64;
  v7 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                        + 4 * v6))->GetMatrix((char *)this + 4 * v6);
  return (unsigned int)((*(unsigned __int8 (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *))(*(_QWORD *)&v7->M[0][0] + 256i64))(v7) != 0)
       - 1;
}

void __fastcall Scaleform::GFx::Sprite::CloneInternalData(
        Scaleform::GFx::Sprite *this,
        const Scaleform::GFx::InteractiveObject *src)
{
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix2x4<float> *v5; // rax

  Scaleform::GFx::InteractiveObject::CloneInternalData(this, src);
  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v5 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                          + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
    (*(void (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, const Scaleform::GFx::InteractiveObject *))(*(_QWORD *)&v5->M[0][0] + 112i64))(
      v5,
      src);
  }
}

void __fastcall Scaleform::GFx::Sprite::CreateAndReplaceDisplayObject(
        Scaleform::GFx::Sprite *this,
        const Scaleform::GFx::CharPosInfo *pos,
        const Scaleform::GFx::ASString *name,
        Scaleform::GFx::DisplayObjectBase **newChar)
{
  if ( newChar )
    *newChar = 0i64;
  Scaleform::GFx::DisplayObjContainer::CreateAndReplaceDisplayObject(this, pos, name, newChar);
  if ( newChar )
  {
    if ( *newChar )
      (*newChar)->CreateFrame = this->CurrentFrame;
  }
}

void __fastcall Scaleform::GFx::Sprite::DefaultOnEventLoad(Scaleform::GFx::Sprite *this)
{
  Scaleform::GFx::Sprite::ExecuteFrameTags(this, 0);
  this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags |= 0x20u;
}

void __fastcall Scaleform::GFx::Sprite::ExecuteFrame0Events(Scaleform::GFx::Sprite *this)
{
  unsigned __int8 Flags; // al
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix2x4<float> *v4; // rax
  unsigned __int8 v5; // al
  const Scaleform::Render::Matrix2x4<float> *v6; // rax

  Flags = this->Flags;
  if ( (Flags & 8) == 0 )
  {
    this->Flags = Flags | 8;
    AvmObjOffset = this->AvmObjOffset;
    if ( AvmObjOffset )
    {
      v4 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                            + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
      (*(void (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, _QWORD))(*(_QWORD *)&v4->M[0][0] + 224i64))(
        v4,
        0i64);
    }
    Scaleform::GFx::Sprite::ExecuteFrameTags(this, 0);
    v5 = this->AvmObjOffset;
    if ( v5 )
    {
      v6 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                            + 4 * v5))->GetMatrix((char *)this + 4 * v5);
      (*(void (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *))(*(_QWORD *)&v6->M[0][0] + 208i64))(v6);
    }
  }
}

void __fastcall Scaleform::GFx::Sprite::ExecuteFrameTags(Scaleform::GFx::Sprite *this, unsigned int frame)
{
  Scaleform::GFx::Sprite_vtbl *v4; // rax
  __int64 i; // rdi
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix2x4<float> *v7; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-10h]

  if ( (this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x800) != 0
    || !frame )
  {
    v4 = this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    ++this->RefCount;
    if ( frame < ((unsigned int (*)(void))v4->GetLoadingFrame)() )
    {
      this->pDef.pObject->GetPlaylist(this->pDef.pObject, (const Scaleform::GFx::TimelineDef::Frame *)&v8, frame);
      for ( i = 0i64; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
        (*(void (__fastcall **)(_QWORD, Scaleform::GFx::Sprite *, __int64))(**(_QWORD **)(v8 + 8 * i) + 16i64))(
          *(_QWORD *)(v8 + 8 * i),
          this,
          4i64);
      AvmObjOffset = this->AvmObjOffset;
      if ( AvmObjOffset )
      {
        v7 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                              + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
        (*(void (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, _QWORD))(*(_QWORD *)&v7->M[0][0] + 216i64))(
          v7,
          frame);
      }
    }
    Scaleform::RefCountNTSImpl::Release(this);
  }
}

void __fastcall Scaleform::GFx::Sprite::ExecuteImportedInitActions(
        Scaleform::GFx::Sprite *this,
        Scaleform::GFx::MovieDef *psourceMovie)
{
  unsigned __int64 v4; // rbp
  __int64 *v5; // r15
  unsigned int InitActionListSize; // eax
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  unsigned int i; // ebx
  Scaleform::GFx::GFxInitImportActions *v10; // rdi
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-30h]

  v4 = 0i64;
  v5 = *(__int64 **)&psourceMovie[3].pLib[1].RefCount;
  InitActionListSize = Scaleform::GFx::MovieDataDef::LoadTaskData::GetInitActionListSize((Scaleform::GFx::MovieDataDef::LoadTaskData *)v5[8]);
  v7 = InitActionListSize;
  if ( InitActionListSize )
  {
    do
    {
      v8 = *v5;
      v11 = 0i64;
      v12 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v8 + 96))(v5, &v11, (unsigned int)v4) )
      {
        for ( i = 0; i < v12; ++i )
        {
          v10 = *(Scaleform::GFx::GFxInitImportActions **)(v11 + 8i64 * i);
          if ( v10->IsInitImportActionsTag(v10) )
            Scaleform::GFx::GFxInitImportActions::ExecuteInContext(
              v10,
              this,
              (Scaleform::GFx::MovieDefImpl *)psourceMovie,
              1);
          else
            v10->ExecuteWithPriority(v10, this, AP_Highest);
        }
      }
      ++v4;
    }
    while ( v4 < v7 );
  }
}

void __fastcall Scaleform::GFx::Sprite::ForceShutdown(Scaleform::GFx::Sprite *this)
{
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix2x4<float> *v3; // rax

  Scaleform::GFx::DisplayObjContainer::ForceShutdown(this);
  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v3 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                          + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
    (*(void (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *))(*(_QWORD *)&v3->M[0][0] + 232i64))(v3);
  }
  Scaleform::GFx::InteractiveObject::RemoveFromPlayList(this);
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::Sprite::GetBounds(
        Scaleform::GFx::Sprite *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *transform)
{
  Scaleform::GFx::DrawingContext *pObject; // rcx
  float x2; // xmm2_4
  float y1; // xmm4_4
  float y2; // xmm3_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  Scaleform::GFx::DisplayObject::ScrollRectInfo *pScrollRect; // rax
  float v14; // xmm3_4
  float v15; // xmm2_4
  float x1; // xmm0_4
  Scaleform::Render::Rect<float> pr; // [rsp+30h] [rbp-30h] BYREF
  Scaleform::Render::Rect<float> pRect; // [rsp+40h] [rbp-20h] BYREF

  Scaleform::GFx::DisplayList::GetBounds(&this->mDisplayList, result, transform);
  pObject = this->pDrawingAPI.pObject;
  if ( pObject )
  {
    pRect = 0i64;
    Scaleform::GFx::DrawingContext::ComputeBound(pObject, &pRect);
    if ( pRect.x1 < pRect.x2 && pRect.y1 < pRect.y2 )
    {
      Scaleform::Render::Matrix2x4<float>::EncloseTransform(
        (Scaleform::Render::Matrix2x4<float> *)transform,
        &pr,
        &pRect);
      x2 = result->x2;
      if ( result->x1 >= x2 || (y1 = result->y1, y2 = result->y2, y1 >= y2) )
      {
        *result = pr;
      }
      else
      {
        v10 = fmaxf(y2, pr.y2);
        v11 = fminf(pr.x1, result->x1);
        v12 = fminf(pr.y1, y1);
        result->x2 = fmaxf(x2, pr.x2);
        result->y2 = v10;
        result->x1 = v11;
        result->y1 = v12;
      }
    }
  }
  pScrollRect = this->pScrollRect;
  if ( pScrollRect )
  {
    v14 = pScrollRect->Rectangle.y2;
    v15 = pScrollRect->Rectangle.x2;
    x1 = pScrollRect->Rectangle.x1;
    pRect.y1 = pScrollRect->Rectangle.y1;
    pRect.x1 = x1;
    pRect.x2 = v15;
    pRect.y2 = v14;
    Scaleform::Render::Matrix2x4<float>::EncloseTransform((Scaleform::Render::Matrix2x4<float> *)transform, &pr, &pRect);
    Scaleform::Render::Rect<float>::Intersect(result, pr.x1, pr.y1, pr.x2, pr.y2);
  }
  return result;
}

Scaleform::GFx::TimelineDef *__fastcall Scaleform::GFx::Sprite::GetCharacterDef(Scaleform::GFx::Sprite *this)
{
  return this->pDef.pObject;
}

__int64 __fastcall Scaleform::GFx::Sprite::GetCurrentFrame(Scaleform::GFx::Sprite *this)
{
  return this->CurrentFrame;
}

Scaleform::GFx::DrawingContext *__fastcall Scaleform::GFx::Sprite::GetDrawingContext(Scaleform::GFx::Sprite *this)
{
  Scaleform::GFx::DisplayObject *Mask; // rax
  Scaleform::GFx::DisplayObject *v3; // rdi
  Scaleform::GFx::DrawingContext *DrawingContext; // rax
  Scaleform::GFx::DrawingContext *pObject; // rcx
  Scaleform::GFx::DrawingContext *v6; // rsi
  Scaleform::Render::TreeContainer *v7; // rax

  if ( this->pDrawingAPI.pObject )
    return this->pDrawingAPI.pObject;
  Mask = Scaleform::GFx::DisplayObject::GetMask(this);
  v3 = Mask;
  if ( Mask )
  {
    ++Mask->RefCount;
    Scaleform::GFx::DisplayObject::SetMask(this, 0i64, 1);
  }
  DrawingContext = Scaleform::GFx::MovieImpl::CreateDrawingContext(this->pASRoot->pMovieImpl);
  pObject = this->pDrawingAPI.pObject;
  v6 = DrawingContext;
  if ( pObject )
    Scaleform::RefCountNTSImpl::Release(pObject);
  this->pDrawingAPI.pObject = v6;
  v7 = Scaleform::GFx::DisplayObjectBase::ConvertToTreeContainer(this);
  Scaleform::Render::TreeContainer::Insert(v7, 0i64, this->pDrawingAPI.pObject->pTreeContainer.pObject);
  if ( v3 )
  {
    Scaleform::GFx::DisplayObject::SetMask(this, v3, 1);
    Scaleform::RefCountNTSImpl::Release(v3);
  }
  return this->pDrawingAPI.pObject;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::Sprite::GetFocusRect(
        Scaleform::GFx::Sprite *this,
        Scaleform::Render::Rect<float> *result)
{
  Scaleform::GFx::Sprite *v4; // rax
  Scaleform::GFx::Sprite *v5; // rsi
  Scaleform::GFx::Sprite_vtbl *v6; // rax
  Scaleform::Render::Matrix2x4<float> v8; // [rsp+20h] [rbp-58h] BYREF
  Scaleform::Render::Rect<float> r; // [rsp+40h] [rbp-38h] BYREF
  __int128 v10; // [rsp+50h] [rbp-28h]

  v4 = this->GetHitArea(this);
  v5 = v4;
  *(_OWORD *)&v8.M[0][0] = _xmm;
  *(_OWORD *)&v8.M[1][0] = _xmm;
  if ( v4 )
  {
    v8 = *v4->GetMatrix(v4);
    v5->GetFocusRect(v5, &r);
    Scaleform::Render::Matrix2x4<float>::EncloseTransform(&v8, result, &r);
  }
  else
  {
    v6 = this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    r = (Scaleform::Render::Rect<float>)_xmm;
    v10 = _xmm;
    v6->GetBounds(this, result, (const Scaleform::Render::Matrix2x4<float> *)&r);
  }
  return result;
}

Scaleform::GFx::Sprite *__fastcall Scaleform::GFx::Sprite::GetHitArea(Scaleform::GFx::Sprite *this)
{
  Scaleform::GFx::InteractiveObject *v1; // rax
  Scaleform::GFx::InteractiveObject *v2; // rdx
  unsigned __int16 Flags; // cx
  Scaleform::GFx::Sprite *result; // rax

  if ( !this->pHitAreaHandle.pObject )
    return 0i64;
  v1 = Scaleform::GFx::CharacterHandle::ResolveCharacter(this->pHitAreaHandle.pObject, this->pASRoot->pMovieImpl);
  v2 = v1;
  if ( !v1 )
    return 0i64;
  Flags = v1->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags;
  result = 0i64;
  if ( (Flags & 0x400) != 0 )
    return (Scaleform::GFx::Sprite *)v2;
  return result;
}

Scaleform::GFx::Sprite *__fastcall Scaleform::GFx::Sprite::GetHitAreaHolder(Scaleform::GFx::Sprite *this)
{
  return this->pHitAreaHolder;
}

__int64 __fastcall Scaleform::GFx::Sprite::GetLabeledFrame(
        Scaleform::GFx::Sprite *this,
        const char *label,
        unsigned int *frameNumber,
        __int64 translateNumbers)
{
  return ((__int64 (__fastcall *)(Scaleform::GFx::TimelineDef *, const char *, unsigned int *, __int64))this->pDef.pObject->GetLabeledFrame)(
           this->pDef.pObject,
           label,
           frameNumber,
           translateNumbers);
}

__int64 __fastcall Scaleform::GFx::Sprite::GetLevel(Scaleform::GFx::Sprite *this)
{
  char *v1; // rcx
  __int64 v2; // rax

  v1 = (char *)this + 4 * this->AvmObjOffset;
  v2 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 16i64))(v1);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 240i64))(v2);
}

__int64 __fastcall Scaleform::GFx::Sprite::GetLoadingFrame(Scaleform::GFx::Sprite *this)
{
  Scaleform::GFx::MovieDefRootNode *pRootNode; // rax

  pRootNode = this->pRootNode;
  if ( !pRootNode || pRootNode->ImportFlag )
    return ((__int64 (__fastcall *)(Scaleform::GFx::TimelineDef *))this->pDef.pObject->GetFrameCount)(this->pDef.pObject);
  else
    return pRootNode->LoadingFrame;
}

__int64 __fastcall Scaleform::GFx::Sprite::GetPlayState(Scaleform::GFx::Sprite *this)
{
  if ( (this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x800) != 0 )
    return (unsigned int)this->PlayStatePriv;
  else
    return 1i64;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::Sprite::GetRectBounds(
        Scaleform::GFx::Sprite *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *transform)
{
  Scaleform::GFx::DisplayList::GetRectBounds(&this->mDisplayList, result, transform);
  return result;
}

Scaleform::Render::TreeContainer *__fastcall Scaleform::GFx::Sprite::GetRenderContainer(Scaleform::GFx::Sprite *this)
{
  Scaleform::Render::TreeContainer *result; // rax
  _QWORD *v3; // rax

  result = (Scaleform::Render::TreeContainer *)Scaleform::GFx::InteractiveObject::GetRenderContainer(this);
  if ( this->pDrawingAPI.pObject )
  {
    v3 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)result & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                              + 8i64
                              * (unsigned int)((int)((_DWORD)result - ((unsigned int)result & 0xFFFFF000) - 56) / 56)
                              + 40)
                  + 144i64);
    if ( (*(_BYTE *)v3 & 1) != 0 )
      v3 = (_QWORD *)((*v3 & 0xFFFFFFFFFFFFFFFEui64) + 16);
    return (Scaleform::Render::TreeContainer *)v3[1];
  }
  return result;
}

void __fastcall Scaleform::GFx::Sprite::GetTextSnapshot(
        Scaleform::GFx::Sprite *this,
        Scaleform::GFx::StaticTextSnapshotData *pdata)
{
  unsigned __int64 Size; // rsi
  __int64 v5; // rdi
  Scaleform::GFx::StaticTextCharacter *pCharacter; // rbx
  __int64 v7; // rax

  Size = this->mDisplayList.DisplayObjectArray.Data.Size;
  if ( Size )
  {
    v5 = 0i64;
    do
    {
      pCharacter = (Scaleform::GFx::StaticTextCharacter *)this->mDisplayList.DisplayObjectArray.Data.Data[v5].pCharacter;
      if ( pCharacter )
      {
        v7 = (__int64)pCharacter->GetCharacterDef(this->mDisplayList.DisplayObjectArray.Data.Data[v5].pCharacter);
        if ( v7 )
        {
          if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7) & 0xFF00) == 33280 )
            Scaleform::GFx::StaticTextSnapshotData::Add(pdata, pCharacter);
        }
      }
      ++v5;
      --Size;
    }
    while ( Size );
  }
}

__int64 __fastcall Scaleform::GFx::Sprite::GetTopMostMouseEntity(
        Scaleform::GFx::Sprite *this,
        const Scaleform::Render::Point<float> *pt,
        Scaleform::GFx::DisplayObjectBase::TopMostDescr *pdescr)
{
  unsigned int TopMostMouseEntity; // ebp
  Scaleform::GFx::Sprite *v6; // rsi
  unsigned __int8 v7; // al
  __int64 v8; // rax
  unsigned __int8 v9; // al
  __int64 v10; // rax
  unsigned __int8 AvmObjOffset; // al
  __int64 v12; // rax
  __int64 result; // rax
  Scaleform::GFx::Sprite *v14; // rax
  const Scaleform::GFx::DisplayObject *v15; // rdx
  Scaleform::GFx::Sprite *pParent; // rcx
  Scaleform::GFx::InteractiveObject *pResult; // rax

  TopMostMouseEntity = Scaleform::GFx::DisplayObjContainer::GetTopMostMouseEntity(this, pt, pdescr);
  if ( TopMostMouseEntity == 3 && this->pDrawingAPI.pObject )
  {
    if ( (v6 = this->GetHitAreaHolder(this), this->pASRoot->AVMVersion == 2) && pdescr->TestAll
      || (v7 = this->AvmObjOffset) != 0
      && (v8 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                                 + 4 * v7))->CreateRenderNode)((char *)this + 4 * v7),
          (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 96i64))(v8))
      || v6
      && (pdescr->TestAll
       || (v9 = v6->AvmObjOffset) != 0
       && (v10 = ((__int64 (__fastcall *)(__int64))(*(Scaleform::GFx::Sprite_vtbl **)((char *)&v6->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                                    + 4 * v9))->CreateRenderNode)((__int64)v6 + 4 * v9),
           (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 96i64))(v10))) )
    {
      if ( Scaleform::GFx::DrawingContext::DefPointTestLocal(this->pDrawingAPI.pObject, &pdescr->LocalPt, 1, this) )
      {
        if ( v6 )
        {
          if ( pdescr->TestAll
            || (AvmObjOffset = v6->AvmObjOffset) != 0
            && (v12 = ((__int64 (__fastcall *)(__int64))(*(Scaleform::GFx::Sprite_vtbl **)((char *)&v6->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                                         + 4 * AvmObjOffset))->CreateRenderNode)((__int64)v6 + 4 * AvmObjOffset),
                (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 96i64))(v12)) )
          {
            pdescr->pResult = v6;
            result = 1i64;
            pdescr->pHitArea = this;
            return result;
          }
        }
        v14 = this->GetHitArea(this);
        v15 = v14;
        if ( this->pASRoot->AVMVersion == 1 )
        {
          if ( v14 )
          {
            pParent = v14;
            while ( 1 )
            {
              pParent = (Scaleform::GFx::Sprite *)pParent->pParent;
              if ( !pParent )
                goto LABEL_24;
              if ( pParent == this )
                goto LABEL_22;
            }
          }
          goto LABEL_23;
        }
        if ( !v14 )
          goto LABEL_23;
        pResult = pdescr->pResult;
        if ( !pdescr->pResult
          || pResult == this
          || SLOBYTE(pResult->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags) >= 0 )
        {
LABEL_22:
          if ( v15 != pdescr->pHitArea )
          {
LABEL_24:
            pdescr->pResult = 0i64;
            return 2i64;
          }
LABEL_23:
          pdescr->pResult = this;
          return 1i64;
        }
      }
    }
  }
  return TopMostMouseEntity;
}

Scaleform::GFx::Sprite *__fastcall Scaleform::GFx::Sprite::GetTopParent(
        Scaleform::GFx::Sprite *this,
        bool ignoreLockRoot)
{
  Scaleform::GFx::InteractiveObject *pParent; // r8

  pParent = this->pParent;
  if ( !pParent || !ignoreLockRoot && (this->Flags & 0x30) == 48 )
    return this;
  if ( (this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x10) != 0 )
    return (Scaleform::GFx::Sprite *)this->pASRoot->pMovieImpl->pMainMovie;
  return (Scaleform::GFx::Sprite *)((__int64 (__fastcall *)(Scaleform::GFx::InteractiveObject *))pParent->GetTopParent)(this->pParent);
}

__int64 __fastcall Scaleform::Render::DICommand_Clear::GetType(Scaleform::GFx::AS3::Instances::fl::XMLComment *this)
{
  return 3i64;
}

void __fastcall Scaleform::GFx::Sprite::GotoFrame(Scaleform::GFx::Sprite *this, unsigned int targetFrameNumber)
{
  unsigned __int16 Flags; // cx
  unsigned int v5; // edi
  unsigned int CurrentFrame; // eax
  unsigned int v7; // er8
  Scaleform::MemoryHeap *v8; // rax
  Scaleform::GFx::TimelineDef *v9; // rdx
  unsigned __int8 v10; // al
  const Scaleform::Render::Matrix2x4<float> *v11; // rax
  Scaleform::GFx::TimelineDef *pObject; // rdx
  unsigned int i; // esi
  char *v14; // rcx
  __int64 v15; // rax
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix2x4<float> *v17; // rax
  Scaleform::GFx::TimelineSnapshot v18; // [rsp+28h] [rbp-29h] BYREF

  Flags = this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags;
  if ( (Flags & 0x800) != 0 && (Flags & 0x1000) == 0 && this->Depth >= -1 )
  {
    v5 = ((__int64 (__fastcall *)(Scaleform::GFx::Sprite *))this->GetLoadingFrame)(this) - 1;
    CurrentFrame = this->CurrentFrame;
    if ( (int)targetFrameNumber < (int)v5 )
      v5 = targetFrameNumber;
    if ( (v5 & 0x80000000) != 0 )
      v5 = 0;
    if ( v5 >= CurrentFrame )
    {
      if ( v5 > CurrentFrame )
      {
        if ( v5 <= 1 || v5 <= CurrentFrame + 1 )
        {
          this->CurrentFrame = v5;
        }
        else
        {
          pObject = this->pDef.pObject;
          v18.SnapshotHeap.pHeapOrPtr = this->pASRoot->pMovieImpl->pHeap;
          v18.SnapshotSortedArray.Data.pHeap = (const Scaleform::MemoryHeap *)v18.SnapshotHeap.pHeapOrPtr;
          v18.SnapshotList.Root.pPrev = (Scaleform::GFx::TimelineSnapshot::SnapshotElement *)&v18.SnapshotList;
          v18.SnapshotList.Root.pNext = (Scaleform::GFx::TimelineSnapshot::SnapshotElement *)&v18.SnapshotList;
          *(_OWORD *)&v18.SnapshotHeap.FirstPage = 0i64;
          v18.SnapshotHeap.NumElementsInPage = 50;
          v18.SnapshotHeap.FirstEmptySlot = 0i64;
          memset(&v18.SnapshotSortedArray, 0, 24);
          v18.pOwnerSprite = this;
          v18.Direction = Direction_Forward;
          Scaleform::GFx::TimelineSnapshot::MakeSnapshot(&v18, pObject, CurrentFrame + 1, v5 - 1);
          if ( this->AvmObjOffset )
          {
            for ( i = this->CurrentFrame + 1; i < v5; ++i )
            {
              v14 = (char *)this + 4 * this->AvmObjOffset;
              v15 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v14 + 16i64))(v14);
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 224i64))(v15, i);
            }
          }
          this->CurrentFrame = v5;
          Scaleform::GFx::TimelineSnapshot::ExecuteSnapshot(&v18, this);
          Scaleform::GFx::TimelineSnapshot::~TimelineSnapshot(&v18);
        }
        AvmObjOffset = this->AvmObjOffset;
        if ( AvmObjOffset )
        {
          v17 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                 + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
          (*(void (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, _QWORD))(*(_QWORD *)&v17->M[0][0] + 224i64))(
            v17,
            v5);
        }
        Scaleform::GFx::Sprite::ExecuteFrameTags(this, v5);
      }
    }
    else
    {
      v7 = v5 - 1;
      if ( !v5 )
        v7 = 0;
      Scaleform::GFx::DisplayList::MarkAllEntriesForRemoval(&this->mDisplayList, this, v7);
      if ( v5 )
      {
        v8 = this->pASRoot->pMovieImpl->GetHeap(this->pASRoot->pMovieImpl);
        v9 = this->pDef.pObject;
        v18.SnapshotHeap.pHeapOrPtr = v8;
        v18.SnapshotSortedArray.Data.pHeap = v8;
        *(_OWORD *)&v18.SnapshotHeap.FirstPage = 0i64;
        v18.SnapshotList.Root.pPrev = (Scaleform::GFx::TimelineSnapshot::SnapshotElement *)&v18.SnapshotList;
        v18.SnapshotHeap.NumElementsInPage = 50;
        v18.SnapshotList.Root.pNext = (Scaleform::GFx::TimelineSnapshot::SnapshotElement *)&v18.SnapshotList;
        v18.SnapshotHeap.FirstEmptySlot = 0i64;
        memset(&v18.SnapshotSortedArray, 0, 24);
        v18.pOwnerSprite = this;
        v18.Direction = Direction_Backward;
        Scaleform::GFx::TimelineSnapshot::MakeSnapshot(&v18, v9, 0, v5 - 1);
        this->CurrentFrame = v5;
        Scaleform::GFx::TimelineSnapshot::ExecuteSnapshot(&v18, this);
        Scaleform::GFx::TimelineSnapshot::~TimelineSnapshot(&v18);
      }
      else
      {
        this->CurrentFrame = 0;
      }
      v10 = this->AvmObjOffset;
      if ( v10 )
      {
        v11 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                               + 4 * v10))->GetMatrix((char *)this + 4 * v10);
        (*(void (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, _QWORD))(*(_QWORD *)&v11->M[0][0] + 224i64))(
          v11,
          v5);
      }
      Scaleform::GFx::Sprite::ExecuteFrameTags(this, v5);
      Scaleform::GFx::DisplayList::UnloadMarkedObjects(&this->mDisplayList, this);
    }
    this->PlayStatePriv = State_Stopped;
  }
}

char __fastcall Scaleform::GFx::Sprite::GotoLabeledFrame(Scaleform::GFx::Sprite *this, const char *label, int offset)
{
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = -1;
  if ( this->pDef.pObject->GetLabeledFrame(this->pDef.pObject, label, (unsigned int *)&v7, 0) )
  {
    this->GotoFrame(this, v7 + offset);
    return 1;
  }
  else
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::LogWarning(
      &this->Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>,
      "MovieImpl::GotoLabeledFrame('%s') unknown label",
      label);
    return 0;
  }
}

__int64 __fastcall Scaleform::GFx::Sprite::HasLooped(Scaleform::GFx::Sprite *this)
{
  return (this->Flags >> 1) & 1;
}

void __fastcall Scaleform::GFx::Sprite::IncrementFrameAndCheckForLoop(Scaleform::GFx::Sprite *this)
{
  Scaleform::GFx::Sprite_vtbl *v1; // rax
  unsigned int v3; // edi
  unsigned int v4; // ecx

  v1 = this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
  ++this->CurrentFrame;
  v3 = ((__int64 (*)(void))v1->GetLoadingFrame)();
  v4 = this->pDef.pObject->GetFrameCount(this->pDef.pObject);
  if ( v3 >= v4 || this->CurrentFrame < v3 )
  {
    if ( this->CurrentFrame >= v4 )
    {
      this->Flags |= 2u;
      this->CurrentFrame = 0;
      if ( v4 <= 1 )
        this->SetPlayState(this, State_Stopped);
      else
        Scaleform::GFx::DisplayList::MarkAllEntriesForRemoval(&this->mDisplayList, this, 0);
    }
  }
  else if ( v3 )
  {
    this->CurrentFrame = v3 - 1;
  }
  else
  {
    this->CurrentFrame = 0;
  }
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::Rect<float>::Intersect(
        Scaleform::Render::Rect<float> *this,
        float left,
        float top,
        float right,
        float bottom)
{
  float y2; // xmm6_4
  float y1; // xmm4_4
  float x2; // xmm1_4
  Scaleform::Render::Rect<float> *result; // rax

  y2 = this->y2;
  if ( y2 < top || (y1 = this->y1, bottom < y1) || right < this->x1 || (x2 = this->x2, x2 < left) )
  {
    *(_QWORD *)&this->x1 = 0i64;
    *(_QWORD *)&this->x2 = 0i64;
    return this;
  }
  else
  {
    result = this;
    this->x1 = fmaxf(this->x1, left);
    this->x2 = fminf(right, x2);
    this->y1 = fmaxf(y1, top);
    this->y2 = fminf(bottom, y2);
  }
  return result;
}

char __fastcall Scaleform::GFx::Sprite::IsFocusEnabled(
        Scaleform::GFx::Sprite *this,
        Scaleform::GFx::FocusMovedType fmt)
{
  unsigned __int8 Value; // al
  unsigned __int8 v5; // dl
  const Scaleform::Render::Matrix2x4<float> *v6; // rax
  unsigned __int8 AvmObjOffset; // al
  __int64 v8; // rax

  if ( fmt == GFx_FocusMovedByMouse )
    return Scaleform::GFx::InteractiveObject::IsFocusEnabled(this, GFx_FocusMovedByMouse);
  Value = this->FocusEnabled.Value;
  if ( Value || (v5 = this->AvmObjOffset) == 0 )
  {
    if ( Value == 2 )
    {
      AvmObjOffset = this->AvmObjOffset;
      if ( AvmObjOffset )
      {
        v8 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                               + 4 * AvmObjOffset))->CreateRenderNode)((char *)this + 4 * AvmObjOffset);
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 96i64))(v8);
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return Value == 1;
    }
  }
  else
  {
    v6 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                          + 4 * v5))->GetMatrix((char *)this + 4 * v5);
    return (*(__int64 (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, _QWORD))(*(_QWORD *)&v6->M[0][0]
                                                                                          + 160i64))(
             v6,
             (unsigned int)fmt);
  }
}

_BOOL8 __fastcall Scaleform::GFx::FocusGroupDescr::IsFocused(
        Scaleform::GFx::FocusGroupDescr *this,
        const Scaleform::GFx::InteractiveObject *ch)
{
  Scaleform::GFx::InteractiveObject *v3; // rbx
  Scaleform::WeakPtrProxy *pObject; // rdx
  Scaleform::RefCountWeakSupportImpl *v6; // rax
  int RefCount; // eax

  v3 = 0i64;
  pObject = this->LastFocused.pProxy.pObject;
  if ( pObject )
  {
    v6 = pObject->pObject;
    if ( v6 )
    {
      v3 = (Scaleform::GFx::InteractiveObject *)pObject->pObject;
      RefCount = v6->RefCount;
      if ( RefCount )
      {
        v3->RefCount = RefCount + 1;
        ++v3->RefCount;
        Scaleform::RefCountNTSImpl::Release(v3);
      }
      else
      {
        v3 = 0i64;
      }
    }
    else
    {
      if ( pObject->RefCount-- == 1 )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      this->LastFocused.pProxy.pObject = 0i64;
    }
  }
  if ( v3 )
    Scaleform::RefCountNTSImpl::Release(v3);
  return v3 == ch;
}

bool __fastcall Scaleform::GFx::MovieImpl::IsKeyboardFocused(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::GFx::InteractiveObject *ch,
        unsigned int controllerIdx)
{
  __int64 v3; // rdi

  v3 = controllerIdx;
  return Scaleform::GFx::FocusGroupDescr::IsFocused(&this->FocusGroups[this->FocusGroupIndexes[controllerIdx]], ch)
      && this->FocusGroups[this->FocusGroupIndexes[v3]].FocusRectShown;
}

bool __fastcall Scaleform::GFx::Sprite::IsLevelMovie(Scaleform::GFx::Sprite *this)
{
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix2x4<float> *v2; // rax

  AvmObjOffset = this->AvmObjOffset;
  if ( !AvmObjOffset )
    return 0;
  v2 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                        + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
  return (*(__int64 (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *))(*(_QWORD *)&v2->M[0][0] + 248i64))(v2);
}

void Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::LogWarning(
        Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase> *this,
        const char *pfmt,
        ...)
{
  Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase> *v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // r10
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, pfmt);
  v3 = this - 3;
  if ( !this )
    v3 = 0i64;
  v4 = (__int64 *)((__int64 (__fastcall *)(Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase> *))v3->__vftable[38].~LogBase<Scaleform::GFx::DisplayObjectBase>)(v3);
  if ( v4 )
  {
    v5 = *v4;
    v6[0] = 135168;
    (*(void (__fastcall **)(__int64 *, int *, const char *, __int64 *))(v5 + 8))(v4, v6, pfmt, (__int64 *)va);
  }
}

bool __fastcall Scaleform::GFx::Sprite::OnEvent(Scaleform::GFx::Sprite *this, const Scaleform::GFx::EventId *id)
{
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix2x4<float> *v4; // rax

  AvmObjOffset = this->AvmObjOffset;
  if ( !AvmObjOffset )
    return 0;
  v4 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                        + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
  return (*(__int64 (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, const Scaleform::GFx::EventId *))(*(_QWORD *)&v4->M[0][0] + 64i64))(
           v4,
           id);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::GFx::Sprite::OnEventLoadProgress(Scaleform::GFx::Sprite *this)
{
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix2x4<float> *v2; // rax
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  char v5; // [rsp+2Ch] [rbp-1Ch]
  int v6; // [rsp+30h] [rbp-18h]

  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v3 = 16777218i64;
    v4 = 0;
    v5 = 0;
    v6 = 65280;
    v2 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                          + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
    (*(void (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, __int64 *))(*(_QWORD *)&v2->M[0][0] + 64i64))(
      v2,
      &v3);
  }
}

void __fastcall Scaleform::GFx::Sprite::OnEventUnload(Scaleform::GFx::Sprite *this)
{
  __int64 v2; // rax
  Scaleform::GFx::CharacterHandle *pObject; // rdi
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix2x4<float> *v5; // rax

  this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags |= 0x1000u;
  if ( this->pHitAreaHandle.pObject )
  {
    v2 = ((__int64 (*)(void))this->GetHitArea)();
    if ( v2 )
      *(_QWORD *)(v2 + 304) = 0i64;
    pObject = this->pHitAreaHandle.pObject;
    if ( pObject )
    {
      if ( --pObject->RefCount <= 0 )
      {
        Scaleform::GFx::CharacterHandle::~CharacterHandle(pObject);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      }
    }
    this->pHitAreaHandle.pObject = 0i64;
    AvmObjOffset = this->AvmObjOffset;
    if ( AvmObjOffset )
    {
      v5 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                            + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
      (*(void (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, _QWORD))(*(_QWORD *)&v5->M[0][0] + 264i64))(
        v5,
        0i64);
    }
  }
  Scaleform::GFx::DisplayList::Clear(&this->mDisplayList, this);
  Scaleform::GFx::InteractiveObject::OnEventUnload(this);
}

void __fastcall Scaleform::GFx::Sprite::OnEventXmlsocketOnxml(Scaleform::GFx::Sprite *this)
{
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix2x4<float> *v2; // rax
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  char v5; // [rsp+2Ch] [rbp-1Ch]
  int v6; // [rsp+30h] [rbp-18h]

  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v3 = 16777223i64;
    v4 = 0;
    v5 = 0;
    v6 = 65280;
    v2 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                          + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
    (*(void (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, __int64 *))(*(_QWORD *)&v2->M[0][0] + 64i64))(
      v2,
      &v3);
  }
}

void __fastcall Scaleform::GFx::Sprite::OnGettingKeyboardFocus(
        Scaleform::GFx::Sprite *this,
        unsigned int controllerIdx,
        Scaleform::GFx::FocusMovedType fmt)
{
  unsigned __int8 AvmObjOffset; // al
  char v4; // di
  __int64 v6; // rax
  unsigned int v7; // eax
  Scaleform::GFx::Sprite_vtbl *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+2Ch] [rbp-1Ch]
  char v12; // [rsp+30h] [rbp-18h]
  char v13; // [rsp+31h] [rbp-17h]
  __int16 v14; // [rsp+32h] [rbp-16h]

  if ( fmt == GFx_FocusMovedByKeyboard )
  {
    AvmObjOffset = this->AvmObjOffset;
    v4 = controllerIdx;
    if ( AvmObjOffset )
    {
      v6 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                             + 4 * AvmObjOffset))->CreateRenderNode)((char *)this + 4 * AvmObjOffset);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 96i64))(v6) )
      {
        v7 = (this->pASRoot->pMovieImpl->Flags >> 28) & 3;
        if ( v7 == 3 )
          v7 = -1;
        if ( v7 != 1 )
        {
          v9 = 0x2000i64;
          v10 = 0;
          v11 = 0;
          v12 = 0;
          v14 = 0;
          v8 = this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
          v13 = v4;
          v8->OnMouseEvent(this, (const Scaleform::GFx::EventId *)&v9);
        }
      }
    }
  }
}

__int64 __fastcall Scaleform::GFx::Sprite::OnKeyEvent(
        Scaleform::GFx::Sprite *this,
        const Scaleform::GFx::EventId *id,
        int *pkeyMask)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int8 v9; // r14
  int v10; // eax
  __int16 v11; // bp
  const Scaleform::Render::Matrix2x4<float> *v12; // rax
  Scaleform::GFx::MovieImpl *pMovieImpl; // rsi
  unsigned int KeyCode; // eax
  int v15; // eax
  __int128 v16; // xmm0
  __int64 AvmObjOffset; // rax
  const Scaleform::Render::Matrix2x4<float> *v18; // rax
  __int64 v19; // rax
  const Scaleform::Render::Matrix2x4<float> *v20; // rax
  __int64 v21; // rax
  __int128 v22; // [rsp+20h] [rbp-28h] BYREF
  int v23; // [rsp+30h] [rbp-18h]

  result = this->AvmObjOffset;
  if ( (_BYTE)result )
  {
    v7 = *(__int64 *)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                    + 4 * (unsigned __int8)result);
    if ( id->Id == 64 )
    {
      v8 = (*(__int64 (**)(void))(v7 + 16))();
      v9 = (*(__int64 (__fastcall **)(__int64, const Scaleform::GFx::EventId *))(*(_QWORD *)v8 + 64i64))(v8, id);
      if ( (*pkeyMask & 0x10000) == 0 )
      {
        v10 = Scaleform::GFx::EventId::ConvertToButtonKeyCode((Scaleform::GFx::EventId *)id);
        v11 = v10;
        if ( v10 )
        {
          v12 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                 + 4 * this->AvmObjOffset))->GetMatrix((char *)this + 4 * this->AvmObjOffset);
          DWORD2(v22) = v11;
          *(_QWORD *)&v22 = 0x20000i64;
          BYTE12(v22) = 0;
          v23 = 0;
          v9 = (*(__int64 (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, __int128 *))(*(_QWORD *)&v12->M[0][0]
                                                                                                  + 64i64))(
                 v12,
                 &v22);
          if ( v9 )
            *pkeyMask |= 0x10000u;
        }
      }
      pMovieImpl = this->pASRoot->pMovieImpl;
      if ( Scaleform::GFx::MovieImpl::IsKeyboardFocused(pMovieImpl, this, id->ControllerIndex) )
      {
        KeyCode = id->KeyCode;
        if ( KeyCode == 13 || KeyCode == 32 )
        {
          if ( this->IsFocusRectEnabled(this) )
            goto LABEL_14;
          v15 = (pMovieImpl->Flags >> 26) & 3;
          if ( v15 == 3 )
            v15 = -1;
          if ( v15 == 1 )
          {
LABEL_14:
            v16 = *(_OWORD *)&id->Id;
            v23 = *(_DWORD *)&id->RollOverCnt;
            AvmObjOffset = this->AvmObjOffset;
            v22 = v16;
            LODWORD(v22) = 1024;
            v18 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                   + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
            (*(void (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, __int128 *))(*(_QWORD *)&v18->M[0][0]
                                                                                            + 64i64))(
              v18,
              &v22);
            v19 = this->AvmObjOffset;
            LODWORD(v22) = 2048;
            v20 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                   + 4 * v19))->GetMatrix((char *)this + 4 * v19);
            (*(void (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, __int128 *))(*(_QWORD *)&v20->M[0][0]
                                                                                            + 64i64))(
              v20,
              &v22);
          }
        }
      }
      return v9;
    }
    else
    {
      v21 = (*(__int64 (**)(void))(v7 + 16))();
      return (*(__int64 (__fastcall **)(__int64, const Scaleform::GFx::EventId *))(*(_QWORD *)v21 + 64i64))(v21, id);
    }
  }
  return result;
}

char __fastcall Scaleform::GFx::Sprite::OnLosingKeyboardFocus(
        Scaleform::GFx::Sprite *this,
        Scaleform::GFx::InteractiveObject *__formal,
        unsigned int controllerIdx,
        Scaleform::GFx::FocusMovedType fmt)
{
  __int64 v4; // rdi
  unsigned __int8 AvmObjOffset; // al
  __int64 v7; // rax
  Scaleform::GFx::MovieImpl *pMovieImpl; // rdx
  int v9; // eax
  Scaleform::GFx::Sprite_vtbl *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  char v14; // [rsp+2Ch] [rbp-1Ch]
  char v15; // [rsp+30h] [rbp-18h]
  char v16; // [rsp+31h] [rbp-17h]
  __int16 v17; // [rsp+32h] [rbp-16h]

  v4 = controllerIdx;
  if ( fmt == GFx_FocusMovedByKeyboard )
  {
    AvmObjOffset = this->AvmObjOffset;
    if ( AvmObjOffset )
    {
      v7 = ((__int64 (__fastcall *)(char *, Scaleform::GFx::InteractiveObject *))(*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable + 4 * AvmObjOffset))->CreateRenderNode)(
             (char *)this + 4 * AvmObjOffset,
             __formal);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 96i64))(v7) )
      {
        pMovieImpl = this->pASRoot->pMovieImpl;
        if ( pMovieImpl->FocusGroups[pMovieImpl->FocusGroupIndexes[v4]].FocusRectShown )
        {
          v9 = (pMovieImpl->Flags >> 28) & 3;
          if ( v9 == 3 )
            v9 = -1;
          if ( v9 != 1 )
          {
            v12 = 0x4000i64;
            v13 = 0;
            v14 = 0;
            v15 = 0;
            v17 = 0;
            v10 = this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
            v16 = v4;
            v10->OnMouseEvent(this, (const Scaleform::GFx::EventId *)&v12);
          }
        }
      }
    }
  }
  return 1;
}

bool __fastcall Scaleform::GFx::Sprite::OnMouseEvent(Scaleform::GFx::Sprite *this, const Scaleform::GFx::EventId *id)
{
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix2x4<float> *v5; // rax
  unsigned __int8 v6; // al
  const Scaleform::Render::Matrix2x4<float> *v7; // rax
  Scaleform::GFx::InteractiveObject *pParent; // rcx

  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v5 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                          + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
    if ( (*(unsigned __int8 (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *))(*(_QWORD *)&v5->M[0][0]
                                                                                        + 248i64))(v5) )
      return 0;
  }
  v6 = this->AvmObjOffset;
  if ( v6 )
  {
    v7 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                          + 4 * v6))->GetMatrix((char *)this + 4 * v6);
    if ( (*(unsigned __int8 (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, const Scaleform::GFx::EventId *))(*(_QWORD *)&v7->M[0][0] + 64i64))(
           v7,
           id) )
    {
      return 0;
    }
  }
  pParent = this->pParent;
  return pParent && pParent->OnMouseEvent(pParent, id);
}

__int64 __fastcall Scaleform::GFx::Sprite::OnUnloading(Scaleform::GFx::Sprite *this)
{
  __int64 result; // rax
  unsigned __int8 AvmObjOffset; // cl

  result = Scaleform::GFx::DisplayList::UnloadAll(&this->mDisplayList, this);
  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
    return ((__int64 (__fastcall *)(char *, _QWORD))(*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                                     + 4 * AvmObjOffset))->ClearViewMatrix3D)(
             (char *)this + 4 * AvmObjOffset,
             (unsigned __int8)result);
  return result;
}

bool __fastcall Scaleform::GFx::Sprite::PointTestLocal(
        Scaleform::GFx::Sprite *this,
        const Scaleform::Render::Point<float> *pt,
        unsigned __int8 hitTestMask)
{
  Scaleform::GFx::Sprite_vtbl *v6; // rax
  float *v7; // rax
  float y; // xmm1_4
  bool result; // al
  Scaleform::GFx::DrawingContext *pObject; // rcx
  __int128 v11[2]; // [rsp+20h] [rbp-58h] BYREF
  Scaleform::Render::Rect<float> v12; // [rsp+40h] [rbp-38h] BYREF

  result = 0;
  if ( (this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Flags & 0x800) == 0 )
  {
    if ( (this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 1) != 0
      || (v6 = this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable,
          v11[0] = _xmm,
          v11[1] = _xmm,
          v7 = (float *)v6->GetBounds(this, &v12, (const Scaleform::Render::Matrix2x4<float> *)v11),
          v7[2] >= pt->x)
      && pt->x >= *v7
      && (y = pt->y, v7[3] >= y)
      && y >= v7[1] )
    {
      if ( (hitTestMask & 2) == 0 || this->GetVisible(this) )
      {
        if ( Scaleform::GFx::DisplayObjContainer::PointTestLocal(this, pt, hitTestMask) )
          return 1;
        pObject = this->pDrawingAPI.pObject;
        if ( pObject )
        {
          if ( Scaleform::GFx::DrawingContext::DefPointTestLocal(pObject, pt, hitTestMask & 1, this) )
            return 1;
        }
      }
    }
  }
  return result;
}

void __fastcall Scaleform::GFx::Sprite::PropagateNoAdvanceGlobalFlag(Scaleform::GFx::Sprite *this)
{
  unsigned __int64 Size; // rsi
  bool v3; // bp
  __int64 v4; // rdi
  Scaleform::GFx::InteractiveObject *pCharacter; // rbx
  _BOOL8 v6; // rdx
  unsigned int Flags; // ecx
  int v8; // eax

  Size = this->mDisplayList.DisplayObjectArray.Data.Size;
  v3 = (this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Flags & 8) != 0;
  if ( Size )
  {
    v4 = 0i64;
    do
    {
      pCharacter = 0i64;
      if ( SLOBYTE(this->mDisplayList.DisplayObjectArray.Data.Data[v4].pCharacter->Flags) < 0 )
        pCharacter = (Scaleform::GFx::InteractiveObject *)this->mDisplayList.DisplayObjectArray.Data.Data[v4].pCharacter;
      if ( pCharacter )
      {
        if ( (this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Flags & 8) != 0 || v3 )
          pCharacter->Flags |= 8u;
        else
          pCharacter->Flags &= ~8u;
        pCharacter->PropagateNoAdvanceGlobalFlag(pCharacter);
        Flags = pCharacter->Flags;
        if ( (Flags & 0x200000) == 0 || (Flags & 0x400000) != 0 )
          v6 = 0i64;
        else
          LOBYTE(v6) = 1;
        v8 = pCharacter->CheckAdvanceStatus(pCharacter, v6);
        if ( v8 == -1 )
        {
          pCharacter->Flags |= 0x400000u;
        }
        else if ( v8 == 1 )
        {
          Scaleform::GFx::InteractiveObject::AddToOptimizedPlayList(pCharacter);
        }
      }
      ++v4;
      --Size;
    }
    while ( Size );
  }
}

void __fastcall Scaleform::GFx::Sprite::PropagateNoAdvanceLocalFlag(Scaleform::GFx::Sprite *this)
{
  unsigned __int64 Size; // rsi
  bool v3; // bp
  __int64 v4; // rdi
  Scaleform::GFx::InteractiveObject *pCharacter; // rbx
  _BOOL8 v6; // rdx
  unsigned int Flags; // ecx
  int v8; // eax

  Size = this->mDisplayList.DisplayObjectArray.Data.Size;
  v3 = (this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Flags & 4) != 0;
  if ( Size )
  {
    v4 = 0i64;
    do
    {
      pCharacter = 0i64;
      if ( SLOBYTE(this->mDisplayList.DisplayObjectArray.Data.Data[v4].pCharacter->Flags) < 0 )
        pCharacter = (Scaleform::GFx::InteractiveObject *)this->mDisplayList.DisplayObjectArray.Data.Data[v4].pCharacter;
      if ( pCharacter )
      {
        if ( (this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Flags & 4) != 0 || v3 )
          pCharacter->Flags |= 4u;
        else
          pCharacter->Flags &= ~4u;
        pCharacter->PropagateNoAdvanceLocalFlag(pCharacter);
        Flags = pCharacter->Flags;
        if ( (Flags & 0x200000) == 0 || (Flags & 0x400000) != 0 )
          v6 = 0i64;
        else
          LOBYTE(v6) = 1;
        v8 = pCharacter->CheckAdvanceStatus(pCharacter, v6);
        if ( v8 == -1 )
        {
          pCharacter->Flags |= 0x400000u;
        }
        else if ( v8 == 1 )
        {
          Scaleform::GFx::InteractiveObject::AddToOptimizedPlayList(pCharacter);
        }
      }
      ++v4;
      --Size;
    }
    while ( Size );
  }
}

void __fastcall Scaleform::GFx::Sprite::Restart(Scaleform::GFx::Sprite *this)
{
  char v2; // al
  char v3; // cl
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix2x4<float> *v5; // rax

  Scaleform::GFx::DisplayList::MarkAllEntriesForRemoval(&this->mDisplayList, this, 0);
  v2 = this->Flags | 1;
  *(_QWORD *)&this->PlayStatePriv = 0i64;
  v3 = v2;
  AvmObjOffset = this->AvmObjOffset;
  this->RollOverCnt = 0;
  this->Flags = v3 & 0xFD;
  if ( AvmObjOffset )
  {
    v5 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                          + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
    (*(void (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, _QWORD))(*(_QWORD *)&v5->M[0][0] + 224i64))(
      v5,
      this->CurrentFrame);
  }
  Scaleform::GFx::Sprite::ExecuteFrameTags(this, this->CurrentFrame);
  Scaleform::GFx::DisplayList::UnloadMarkedObjects(&this->mDisplayList, this);
}

void __fastcall Scaleform::GFx::Sprite::SetHitArea(Scaleform::GFx::Sprite *this, Scaleform::GFx::Sprite *phitArea)
{
  __int64 v4; // rax
  Scaleform::GFx::CharacterHandle *CharacterHandle; // rdi
  Scaleform::GFx::CharacterHandle *v6; // rbp
  Scaleform::GFx::CharacterHandle *pObject; // rdi
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix2x4<float> *v9; // rax

  v4 = ((__int64 (*)(void))this->GetHitArea)();
  if ( v4 )
    *(_QWORD *)(v4 + 304) = 0i64;
  if ( !phitArea || phitArea == this )
  {
    pObject = this->pHitAreaHandle.pObject;
    if ( pObject )
    {
      if ( --pObject->RefCount <= 0 )
      {
        Scaleform::GFx::CharacterHandle::~CharacterHandle(pObject);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      }
    }
    this->pHitAreaHandle.pObject = 0i64;
  }
  else
  {
    CharacterHandle = phitArea->pNameHandle.pObject;
    if ( CharacterHandle || (CharacterHandle = Scaleform::GFx::DisplayObject::CreateCharacterHandle(phitArea)) != 0i64 )
      ++CharacterHandle->RefCount;
    v6 = this->pHitAreaHandle.pObject;
    if ( v6 )
    {
      if ( --v6->RefCount <= 0 )
      {
        Scaleform::GFx::CharacterHandle::~CharacterHandle(v6);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v6);
      }
    }
    this->pHitAreaHandle.pObject = CharacterHandle;
    phitArea->pHitAreaHolder = this;
  }
  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v9 = (*(Scaleform::GFx::Sprite_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                          + 4 * AvmObjOffset))->GetMatrix((char *)this + 4 * AvmObjOffset);
    (*(void (__fastcall **)(const Scaleform::Render::Matrix2x4<float> *, Scaleform::GFx::Sprite *))(*(_QWORD *)&v9->M[0][0]
                                                                                                  + 264i64))(
      v9,
      phitArea);
  }
}

void __fastcall Scaleform::GFx::Sprite::SetIMECandidateListFont(
        Scaleform::GFx::Sprite *this,
        Scaleform::GFx::FontHandle *pfontHandle)
{
  if ( pfontHandle )
    Scaleform::GFx::FontManager::SetIMECandidateFont(this->pRootNode->pFontManager.pObject, pfontHandle);
}

void __fastcall Scaleform::GFx::Sprite::SetLoadedSeparately(Scaleform::GFx::Sprite *this, bool v)
{
  unsigned __int8 Flags; // al
  unsigned __int8 v3; // al

  Flags = this->Flags;
  if ( v )
    v3 = Flags | 0x10;
  else
    v3 = Flags & 0xEF;
  this->Flags = v3;
  if ( v )
    Scaleform::GFx::DisplayObjContainer::AssignRootNode(this, 0);
}

void __fastcall Scaleform::GFx::Sprite::SetName(Scaleform::GFx::Sprite *this, const Scaleform::GFx::ASString *name)
{
  Scaleform::GFx::DisplayObject::SetName(this, name);
  this->mDisplayList.pCachedChar = 0i64;
}

void __fastcall Scaleform::GFx::Sprite::SetPlayState(Scaleform::GFx::Sprite *this, Scaleform::GFx::PlayState s)
{
  unsigned __int16 Flags; // ax

  Flags = this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags;
  this->PlayStatePriv = s;
  if ( (Flags & 0x1000) == 0 && this->Depth >= -1 && (Flags & 0x10) == 0 )
    Scaleform::GFx::InteractiveObject::ModifyOptimizedPlayListLocal<Scaleform::GFx::Sprite>(this);
}

void __fastcall Scaleform::GFx::Sprite::SetVisible(Scaleform::GFx::Sprite *this, bool visible)
{
  bool v4; // dl
  unsigned int Flags; // ecx
  unsigned int v6; // ecx
  bool v7; // dl
  int v8; // eax

  Scaleform::GFx::DisplayObjectBase::SetVisible(this, visible);
  v4 = !visible && (this->pASRoot->pMovieImpl->Flags & 0x800) != 0;
  Flags = this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Flags;
  if ( v4 != ((Flags & 8) != 0) )
  {
    if ( v4 )
      v6 = Flags | 8;
    else
      v6 = Flags & 0xFFFFFFF7;
    this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Flags = v6;
    v7 = (v6 & 0x200000) != 0 && (v6 & 0x400000) == 0;
    v8 = Scaleform::GFx::Sprite::CheckAdvanceStatus(this, v7);
    if ( v8 == -1 )
    {
      this->Scaleform::GFx::DisplayObjContainer::Scaleform::GFx::InteractiveObject::Flags |= 0x400000u;
    }
    else if ( v8 == 1 )
    {
      Scaleform::GFx::InteractiveObject::AddToOptimizedPlayList(this);
    }
  }
  this->PropagateNoAdvanceGlobalFlag(this);
}

