#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displaylist.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/text/text_stylesheet.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stringhash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/ime/gfx_imemanager.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asimemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_textfielddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/text/text_editorkit.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_textfield.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"

Scaleform::GFx::TextField::TextField(Scaleform::GFx::TextFieldDef * def, Scaleform::GFx::MovieDefImpl * pbindingDefImpl, Scaleform::GFx::ASMovieRootBase * pasRoot, Scaleform::GFx::InteractiveObject * parent, Scaleform::GFx::ResourceId id); // 0x1403F1970
Scaleform::GFx::TextField::~TextField(); // 0x1403F1DC0
Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> & Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>::operator=(const Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> & __that); // 0x1403F1F20
bool Scaleform::GFx::TextField::IsSelectable(); // 0x1403F4D70
bool Scaleform::GFx::TextField::IsReadOnly(); // 0x1403F4D30
void Scaleform::GFx::TextField::SetFilters(const Scaleform::Render::FilterSet * filters); // 0x1403F6FD0
double Scaleform::GFx::TextField::GetTextWidth(); // 0x1403F44F0
double Scaleform::GFx::TextField::GetTextHeight(); // 0x1403F44C0
Scaleform::GFx::TextField::CSSHolderBase * Scaleform::GFx::TextField::GetCSSData(); // 0x1403F36C0
void Scaleform::GFx::TextField::SetCSSData(Scaleform::GFx::TextField::CSSHolderBase * css); // 0x1403F6D00
void Scaleform::GFx::TextField::SetDirtyFlag(); // 0x1403F6FB0
void Scaleform::GFx::TextField::SetSelectable(bool v); // 0x1403F7B10
Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> Scaleform::GFx::TextField::CreateEditorKit(); // 0x1403F3040
void Scaleform::GFx::TextField::GetInitialFormats(Scaleform::Render::Text::TextFormat * ptextFmt, Scaleform::Render::Text::ParagraphFormat * pparaFmt); // 0x1403F3D10
void Scaleform::GFx::TextField::SetInitialFormatsAsDefault(); // 0x1403F72B0
long Scaleform::GFx::TextField::CheckAdvanceStatus(bool playingNow); // 0x1403F2950
void Scaleform::GFx::TextField::SetStateChangeFlags(unsigned char flags); // 0x1403F7C80
void Scaleform::GFx::TextField::UpdateTransform3D(); // 0x1403F8DE0
void Scaleform::GFx::TextField::AdvanceFrame(bool nextFrame, float framePos); // 0x1403F2130
bool Scaleform::GFx::TextField::HasStyleSheet(); // 0x1403F4B70
const Scaleform::GFx::Text::StyleManager * Scaleform::GFx::TextField::GetStyleSheet(); // 0x1403F4320
bool Scaleform::GFx::TextField::IsTabable(); // 0x1403F4DB0
bool Scaleform::GFx::TextField::SetTextValue(const char * pnewText, bool html, bool notifyVariable); // 0x1403F7DF0
class Scaleform::GFx::TextField::SetTextValue::__l14::TranslateInfo :
	Scaleform::GFx::Translator::TranslateInfo
{
public:
	Scaleform::WStringBuffer::Reserve<512> Res1; // 0x20
	Scaleform::WStringBuffer::Reserve<512> Res2; // 0x430
	Scaleform::WStringBuffer ResultBuf; // 0x840
	Scaleform::WStringBuffer KeyBuf; // 0x860
	TranslateInfo(Scaleform::GFx::TextField::SetTextValue::__l14::TranslateInfo &);
	TranslateInfo(const Scaleform::GFx::TextField::SetTextValue::__l14::TranslateInfo &);
	TranslateInfo(const char *);
	void SetKey();
	void SetKey(const char *);
	bool IsResultHtml();
	bool IsTranslated();
	void SetKeyHtml();
	~TranslateInfo();
	Scaleform::GFx::TextField::SetTextValue::__l14::TranslateInfo & operator=(Scaleform::GFx::TextField::SetTextValue::__l14::TranslateInfo &);
	Scaleform::GFx::TextField::SetTextValue::__l14::TranslateInfo & operator=(const Scaleform::GFx::TextField::SetTextValue::__l14::TranslateInfo &);
};
struct Scaleform::WStringBuffer::Reserve<512> :
	Scaleform::WStringBuffer::ReserveHeader
{
	wchar_t Buffer[512]; // 0x10
	Reserve<512>();
};
Scaleform::GFx::ASString Scaleform::GFx::TextField::GetText(bool reqHtml); // 0x1403F4360
Scaleform::GFx::ASString Scaleform::GFx::TextField::GetHtml(); // 0x1403F3C70
Scaleform::GFx::DisplayObjectBase::TopMostResult Scaleform::GFx::TextField::GetTopMostMouseEntity(const Scaleform::Render::Point<float> & pt, Scaleform::GFx::DisplayObjectBase::TopMostDescr * pdescr); // 0x1403F4520
unsigned long Scaleform::GFx::TextField::GetCursorType(); // 0x1403F37C0
bool Scaleform::GFx::TextField::IsUrlUnderMouseCursor(unsigned long mouseIndex, Scaleform::Render::Point<float> * pPnt, Scaleform::Range * purlRangePos); // 0x1403F4F10
bool Scaleform::GFx::TextField::IsUrlTheSame(unsigned long mouseIndex, const Scaleform::Range & urlRange); // 0x1403F4E70
void Scaleform::GFx::TextField::CollectUrlZones(); // 0x1403F2C80
void Scaleform::GFx::TextField::PropagateMouseEvent(const Scaleform::GFx::EventId & id); // 0x1403F6070
bool Scaleform::GFx::TextField::OnMouseEvent(const Scaleform::GFx::EventId & event); // 0x1403F58C0
bool Scaleform::GFx::TextField::IsFocusAllowed(Scaleform::GFx::MovieImpl * proot, unsigned long controllerIdx); // 0x1403F4CA0
bool Scaleform::GFx::TextField::IsFocusAllowed(Scaleform::GFx::MovieImpl * proot, unsigned long controllerIdx); // 0x1403F4C50
void Scaleform::GFx::TextField::OnFocus(Scaleform::GFx::InteractiveObject::FocusEventType event, Scaleform::GFx::InteractiveObject * oldOrNewFocusCh, unsigned long controllerIdx, Scaleform::GFx::FocusMovedType fmt); // 0x1403F5350
bool Scaleform::GFx::TextField::OnLosingKeyboardFocus(Scaleform::GFx::InteractiveObject * __formal, unsigned long __formal, Scaleform::GFx::FocusMovedType fmt); // 0x1400B8180
Scaleform::Render::Rect<float> Scaleform::GFx::TextField::GetBounds(const Scaleform::Render::Matrix2x4<float> & t); // 0x1403F3680
bool Scaleform::GFx::TextField::PointTestLocal(const Scaleform::Render::Point<float> & pt, unsigned char hitTestMask); // 0x1403F59C0
void Scaleform::GFx::TextField::ResetBlink(bool state, bool blocked); // 0x1403F6A20
void Scaleform::GFx::TextField::SetSelection(long long beginIndex, long long endIndex); // 0x1403F7BC0
long long Scaleform::GFx::TextField::GetCaretIndex(); // 0x1403F36D0
unsigned long long Scaleform::GFx::TextField::GetBeginIndex(); // 0x1403F3650
unsigned long long Scaleform::GFx::TextField::GetEndIndex(); // 0x1403F3820
void Scaleform::GFx::TextField::OnEventLoad(); // 0x1403F51F0
void Scaleform::GFx::TextField::OnEventUnload(); // 0x1403F52F0
Scaleform::GFx::DisplayObjectBase::GeomDataType & Scaleform::GFx::TextField::UpdateAndGetGeomData(Scaleform::GFx::DisplayObjectBase::GeomDataType * pgeomData, bool force); // 0x1403F8CC0
bool Scaleform::GFx::TextField::OnKeyEvent(const Scaleform::GFx::EventId & id, long * pkeyMask); // 0x1403F5700
bool Scaleform::GFx::TextField::OnCharEvent(unsigned long wcharCode, unsigned long controllerIdx); // 0x1403F5120
void Scaleform::GFx::TextField::SetOverwriteMode(bool overwMode); // 0x1403F7500
bool Scaleform::GFx::TextField::OnMouseWheelEvent(long mwDelta); // 0x1403F5930
void Scaleform::GFx::TextField::AddIdImageDescAssoc(const char * idStr, Scaleform::Render::Text::ImageDesc * pdesc); // 0x1403F2040
void Scaleform::GFx::TextField::RemoveIdImageDescAssoc(const char * idStr); // 0x1403F6830
void Scaleform::GFx::TextField::ClearIdImageDescAssoc(); // 0x1403F2C00
void Scaleform::GFx::TextField::ProcessImageTags(Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> & imageInfoArray); // 0x1403F5A50
void Scaleform::GFx::TextField::ReplaceText(const wchar_t * ptext, unsigned long long beginPos, unsigned long long endPos, unsigned long long textLen); // 0x1403F6890
void Scaleform::GFx::TextField::SetCandidateListFont(Scaleform::GFx::Sprite * psprite); // 0x1403F6D60
void Scaleform::GFx::TextField::UpdateUrlStyles(); // 0x1403F9270
bool Scaleform::GFx::TextField::ChangeUrlFormat(Scaleform::GFx::TextField::LinkEvent event, unsigned long mouseIndex, const Scaleform::Range * purlRange); // 0x1403F23A0
void Scaleform::GFx::TextField::SetX(double x); // 0x1403F8720
void Scaleform::GFx::TextField::SetY(double y); // 0x1403F89B0
double Scaleform::GFx::TextField::GetX(); // 0x1403F4A30
double Scaleform::GFx::TextField::GetY(); // 0x1403F4AD0
void Scaleform::GFx::TextField::SetWidth(double width); // 0x1403F8670
void Scaleform::GFx::TextField::SetHeight(double height); // 0x1403F7200
void Scaleform::GFx::TextField::SetXScale(double xscale); // 0x1403F8970
void Scaleform::GFx::TextField::SetYScale(double yscale); // 0x1403F8C00
void Scaleform::GFx::TextField::SetRotation(double rotation); // 0x1403F7AD0
void Scaleform::GFx::TextField::SetBackground(bool b); // 0x1403F6BE0
void Scaleform::GFx::TextField::SetBackgroundColor(unsigned long rgb); // 0x1403F6C30
void Scaleform::GFx::TextField::SetBorder(bool b); // 0x1403F6C70
void Scaleform::GFx::TextField::SetBorderColor(unsigned long rgb); // 0x1403F6CC0
void Scaleform::GFx::TextField::SetTextColor(unsigned long rgb); // 0x1403F7D10
unsigned long Scaleform::GFx::TextField::GetTextColor32(); // 0x1403F4480
bool Scaleform::GFx::TextField::SetRestrict(const Scaleform::GFx::ASString & restrStr); // 0x1403F7A30
const Scaleform::String * Scaleform::GFx::TextField::GetRestrict(); // 0x1403F4300
void Scaleform::GFx::TextField::ClearRestrict(); // 0x1403F2C60
Scaleform::Ptr<Scaleform::Render::TreeNode> Scaleform::GFx::TextField::CreateRenderNode(Scaleform::Render::ContextImpl::Context & context); // 0x1403F3200
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
void Scaleform::GFx::TextField::NotifyChanged(); // 0x1403F50E0
bool Scaleform::GFx::TextField::IsFocusEnabled(Scaleform::GFx::FocusMovedType fmt); // 0x1403F4CF0
Scaleform::GFx::TextField::TextDocumentListener::TextDocumentListener(); // 0x1403F18F0
void Scaleform::GFx::TextField::TextDocumentListener::TranslatorChanged(); // 0x1403F8C40
void Scaleform::GFx::TextField::TextDocumentListener::View_OnHScroll(Scaleform::Render::Text::DocView & view, unsigned long newScroll); // 0x1403F9460
bool Scaleform::GFx::TextField::TextDocumentListener::View_OnLineFormat(Scaleform::Render::Text::DocView & __formal, Scaleform::Render::Text::DocView::LineFormatDesc & desc); // 0x1403F94A0
bool Scaleform::GFx::TextField::TextDocumentListener::View_PrepareBidiText(Scaleform::Render::Text::DocView & __formal, const wchar_t * paraText, unsigned long long textLen, wchar_t * newParaText, unsigned long * indexMap, bool * mirroredBits); // 0x1403F95A0
void Scaleform::GFx::TextField::TextDocumentListener::View_OnChanged(Scaleform::Render::Text::DocView & __formal); // 0x1403F9440
void Scaleform::GFx::TextField::TextDocumentListener::Editor_OnChanged(Scaleform::Render::Text::EditorKitBase & editor); // 0x1403F32A0
void Scaleform::GFx::TextField::TextDocumentListener::Editor_OnCursorBlink(Scaleform::Render::Text::EditorKitBase & editor, bool cursorState); // 0x1403F3330
bool Scaleform::GFx::TextField::TextDocumentListener::Editor_OnInsertingText(Scaleform::Render::Text::EditorKitBase & __formal, unsigned long long pos, unsigned long long len, const wchar_t * wstr); // 0x1403F3360
bool Scaleform::GFx::TextField::TextDocumentListener::Editor_OnRemovingText(Scaleform::Render::Text::EditorKitBase & __formal, unsigned long long pos, unsigned long long len); // 0x1403F33D0
Scaleform::String Scaleform::GFx::TextField::TextDocumentListener::GetCharacterPath(); // 0x1403F3780
const Scaleform::Render::FilterSet * Scaleform::GFx::TextField::GetFilters(); // 0x1403F3850
class Scaleform::Ptr<Scaleform::Render::BlurFilter>
{
protected:
	Scaleform::Render::BlurFilter * pObject; // 0x0
public:
	Ptr<Scaleform::Render::BlurFilter>(const Scaleform::Ptr<Scaleform::Render::BlurFilter> &);
	Ptr<Scaleform::Render::BlurFilter>(Scaleform::Render::BlurFilter *);
	Ptr<Scaleform::Render::BlurFilter>(Scaleform::Ptr<Scaleform::Render::BlurFilter> &, Scaleform::PickType);
	Ptr<Scaleform::Render::BlurFilter>(Scaleform::Pickable<Scaleform::Render::BlurFilter>);
	Ptr<Scaleform::Render::BlurFilter>(Scaleform::Render::BlurFilter &);
	Ptr<Scaleform::Render::BlurFilter>();
	~Ptr<Scaleform::Render::BlurFilter>();
	bool operator==(Scaleform::Render::BlurFilter *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::BlurFilter> &);
	bool operator!=(Scaleform::Render::BlurFilter *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::BlurFilter> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::BlurFilter> &);
	Scaleform::Ptr<Scaleform::Render::BlurFilter> & operator=(Scaleform::Pickable<Scaleform::Render::BlurFilter>);
	const Scaleform::Ptr<Scaleform::Render::BlurFilter> & operator=(Scaleform::Render::BlurFilter &);
	const Scaleform::Ptr<Scaleform::Render::BlurFilter> & operator=(Scaleform::Render::BlurFilter *);
	const Scaleform::Ptr<Scaleform::Render::BlurFilter> & operator=(const Scaleform::Ptr<Scaleform::Render::BlurFilter> &);
	Scaleform::Ptr<Scaleform::Render::BlurFilter> & SetPtr(Scaleform::Pickable<Scaleform::Render::BlurFilter>);
	Scaleform::Ptr<Scaleform::Render::BlurFilter> & SetPtr(Scaleform::Render::BlurFilter &);
	Scaleform::Ptr<Scaleform::Render::BlurFilter> & SetPtr(Scaleform::Render::BlurFilter *);
	Scaleform::Ptr<Scaleform::Render::BlurFilter> & SetPtr(const Scaleform::Ptr<Scaleform::Render::BlurFilter> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::BlurFilter * & GetRawRef();
	Scaleform::Render::BlurFilter * GetPtr();
	Scaleform::Render::BlurFilter & operator*();
	Scaleform::Render::BlurFilter * operator->();
	Scaleform::Render::BlurFilter * operator class Scaleform::Render::BlurFilter *();
	Scaleform::Ptr<Scaleform::Render::BlurFilter> & Pick(Scaleform::Render::BlurFilter *);
	Scaleform::Ptr<Scaleform::Render::BlurFilter> & Pick(Scaleform::Pickable<Scaleform::Render::BlurFilter>);
	Scaleform::Ptr<Scaleform::Render::BlurFilter> & Pick(Scaleform::Ptr<Scaleform::Render::BlurFilter> &);
};
class Scaleform::Ptr<Scaleform::Render::ShadowFilter>
{
protected:
	Scaleform::Render::ShadowFilter * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ShadowFilter>(const Scaleform::Ptr<Scaleform::Render::ShadowFilter> &);
	Ptr<Scaleform::Render::ShadowFilter>(Scaleform::Render::ShadowFilter *);
	Ptr<Scaleform::Render::ShadowFilter>(Scaleform::Ptr<Scaleform::Render::ShadowFilter> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ShadowFilter>(Scaleform::Pickable<Scaleform::Render::ShadowFilter>);
	Ptr<Scaleform::Render::ShadowFilter>(Scaleform::Render::ShadowFilter &);
	Ptr<Scaleform::Render::ShadowFilter>();
	~Ptr<Scaleform::Render::ShadowFilter>();
	bool operator==(Scaleform::Render::ShadowFilter *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ShadowFilter> &);
	bool operator!=(Scaleform::Render::ShadowFilter *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ShadowFilter> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ShadowFilter> &);
	Scaleform::Ptr<Scaleform::Render::ShadowFilter> & operator=(Scaleform::Pickable<Scaleform::Render::ShadowFilter>);
	const Scaleform::Ptr<Scaleform::Render::ShadowFilter> & operator=(Scaleform::Render::ShadowFilter &);
	const Scaleform::Ptr<Scaleform::Render::ShadowFilter> & operator=(Scaleform::Render::ShadowFilter *);
	const Scaleform::Ptr<Scaleform::Render::ShadowFilter> & operator=(const Scaleform::Ptr<Scaleform::Render::ShadowFilter> &);
	Scaleform::Ptr<Scaleform::Render::ShadowFilter> & SetPtr(Scaleform::Pickable<Scaleform::Render::ShadowFilter>);
	Scaleform::Ptr<Scaleform::Render::ShadowFilter> & SetPtr(Scaleform::Render::ShadowFilter &);
	Scaleform::Ptr<Scaleform::Render::ShadowFilter> & SetPtr(Scaleform::Render::ShadowFilter *);
	Scaleform::Ptr<Scaleform::Render::ShadowFilter> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ShadowFilter> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ShadowFilter * & GetRawRef();
	Scaleform::Render::ShadowFilter * GetPtr();
	Scaleform::Render::ShadowFilter & operator*();
	Scaleform::Render::ShadowFilter * operator->();
	Scaleform::Render::ShadowFilter * operator class Scaleform::Render::ShadowFilter *();
	Scaleform::Ptr<Scaleform::Render::ShadowFilter> & Pick(Scaleform::Render::ShadowFilter *);
	Scaleform::Ptr<Scaleform::Render::ShadowFilter> & Pick(Scaleform::Pickable<Scaleform::Render::ShadowFilter>);
	Scaleform::Ptr<Scaleform::Render::ShadowFilter> & Pick(Scaleform::Ptr<Scaleform::Render::ShadowFilter> &);
};
class Scaleform::Ptr<Scaleform::Render::GlowFilter>
{
protected:
	Scaleform::Render::GlowFilter * pObject; // 0x0
public:
	Ptr<Scaleform::Render::GlowFilter>(const Scaleform::Ptr<Scaleform::Render::GlowFilter> &);
	Ptr<Scaleform::Render::GlowFilter>(Scaleform::Render::GlowFilter *);
	Ptr<Scaleform::Render::GlowFilter>(Scaleform::Ptr<Scaleform::Render::GlowFilter> &, Scaleform::PickType);
	Ptr<Scaleform::Render::GlowFilter>(Scaleform::Pickable<Scaleform::Render::GlowFilter>);
	Ptr<Scaleform::Render::GlowFilter>(Scaleform::Render::GlowFilter &);
	Ptr<Scaleform::Render::GlowFilter>();
	~Ptr<Scaleform::Render::GlowFilter>();
	bool operator==(Scaleform::Render::GlowFilter *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::GlowFilter> &);
	bool operator!=(Scaleform::Render::GlowFilter *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::GlowFilter> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::GlowFilter> &);
	Scaleform::Ptr<Scaleform::Render::GlowFilter> & operator=(Scaleform::Pickable<Scaleform::Render::GlowFilter>);
	const Scaleform::Ptr<Scaleform::Render::GlowFilter> & operator=(Scaleform::Render::GlowFilter &);
	const Scaleform::Ptr<Scaleform::Render::GlowFilter> & operator=(Scaleform::Render::GlowFilter *);
	const Scaleform::Ptr<Scaleform::Render::GlowFilter> & operator=(const Scaleform::Ptr<Scaleform::Render::GlowFilter> &);
	Scaleform::Ptr<Scaleform::Render::GlowFilter> & SetPtr(Scaleform::Pickable<Scaleform::Render::GlowFilter>);
	Scaleform::Ptr<Scaleform::Render::GlowFilter> & SetPtr(Scaleform::Render::GlowFilter &);
	Scaleform::Ptr<Scaleform::Render::GlowFilter> & SetPtr(Scaleform::Render::GlowFilter *);
	Scaleform::Ptr<Scaleform::Render::GlowFilter> & SetPtr(const Scaleform::Ptr<Scaleform::Render::GlowFilter> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::GlowFilter * & GetRawRef();
	Scaleform::Render::GlowFilter * GetPtr();
	Scaleform::Render::GlowFilter & operator*();
	Scaleform::Render::GlowFilter * operator->();
	Scaleform::Render::GlowFilter * operator class Scaleform::Render::GlowFilter *();
	Scaleform::Ptr<Scaleform::Render::GlowFilter> & Pick(Scaleform::Render::GlowFilter *);
	Scaleform::Ptr<Scaleform::Render::GlowFilter> & Pick(Scaleform::Pickable<Scaleform::Render::GlowFilter>);
	Scaleform::Ptr<Scaleform::Render::GlowFilter> & Pick(Scaleform::Ptr<Scaleform::Render::GlowFilter> &);
};void __fastcall Scaleform::GFx::InteractiveObject::ModifyOptimizedPlayListLocal<Scaleform::GFx::TextField>(
        Scaleform::GFx::InteractiveObject *this)
{
  unsigned int Flags; // ecx
  bool v3; // dl
  int v4; // eax

  Flags = this->Flags;
  v3 = (Flags & 0x200000) != 0 && (Flags & 0x400000) == 0;
  v4 = Scaleform::GFx::TextField::CheckAdvanceStatus((Scaleform::GFx::TextField *)this, v3);
  if ( v4 == -1 )
  {
    this->Flags |= 0x400000u;
  }
  else if ( v4 == 1 )
  {
    Scaleform::GFx::InteractiveObject::AddToOptimizedPlayList(this);
  }
}

char __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::RemoveAlt<Scaleform::String>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        const Scaleform::String *key)
{
  unsigned __int64 v5; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // r11
  unsigned __int64 NextInChain; // r9
  Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *v8; // rdi
  __int64 v9; // r10
  unsigned __int64 v10; // rbx
  unsigned __int8 *v11; // rax
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v15; // rbx

  if ( !this->pTable )
    return 0;
  v5 = Scaleform::String::BernsteinHashFunctionCIS(
         (const void *)((key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
         *(_QWORD *)(key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
         0x1505ui64);
  pTable = this->pTable;
  NextInChain = v5 & this->pTable->SizeMask;
  v8 = (Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&this->pTable[2 * NextInChain + 1];
  if ( v8->NextInChain == -2 || v8->HashValue != NextInChain )
    return 0;
  v9 = -1i64;
  v10 = v5 & this->pTable->SizeMask;
  while ( 1 )
  {
    if ( v8->HashValue == v10 )
    {
      v11 = (unsigned __int8 *)((v8->Value.First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
      do
      {
        v12 = v11[(key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) - (v8->Value.First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64)];
        v13 = *v11 - v12;
        if ( v13 )
          break;
        ++v11;
      }
      while ( v12 );
      if ( !v13 )
        break;
    }
    v9 = NextInChain;
    NextInChain = v8->NextInChain;
    if ( v8->NextInChain == -1 )
      return 0;
    v8 = (Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&pTable[2 * NextInChain + 1];
  }
  v14 = v8->NextInChain;
  if ( v10 == NextInChain )
  {
    if ( v14 != -1 )
    {
      v15 = &pTable[2 * v14];
      Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::Clear(v8);
      Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
        v8,
        (const Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&v15[1]);
      v8 = (Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&v15[1];
    }
  }
  else
  {
    pTable[2 * v9 + 1].EntryCount = v14;
  }
  Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::Clear(v8);
  --this->pTable->EntryCount;
  return 1;
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::Set<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeRef *key)
{
  unsigned __int64 v6; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rsi
  unsigned __int64 v8; // rbp
  signed __int64 v9; // rax
  Scaleform::String *v10; // rbx
  const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> *pSecond; // rdi
  Scaleform::RefCountNTSImpl *pData; // rcx

  v6 = Scaleform::String::BernsteinHashFunctionCIS(
         (const void *)(((unsigned __int64)key->pFirst->pData & 0xFFFFFFFFFFFFFFFCui64) + 12),
         *(_QWORD *)((unsigned __int64)key->pFirst->pData & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
         0x1505ui64);
  pTable = this->pTable;
  v8 = v6;
  if ( this->pTable
    && (v9 = Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
               this,
               key,
               v6 & pTable->SizeMask),
        v9 >= 0) )
  {
    v10 = (Scaleform::String *)&pTable[2 * v9 + 2];
    Scaleform::String::operator=(v10, key->pFirst);
    pSecond = key->pSecond;
    if ( pSecond->pObject )
      ++pSecond->pObject->RefCount;
    pData = (Scaleform::RefCountNTSImpl *)v10[1].pData;
    if ( pData )
      Scaleform::RefCountNTSImpl::Release(pData);
    v10[1].pData = (Scaleform::String::DataDesc *)pSecond->pObject;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
      this,
      pmemAddr,
      key,
      v8);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor> *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rbp
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rcx
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v9; // rdi
  unsigned __int64 EntryCount; // r9
  Scaleform::Render::Text::ImageDesc *pObject; // rax
  __int64 v12; // rbx
  Scaleform::StringLH *v13; // r8
  unsigned __int64 SizeMask; // rax
  Scaleform::Render::Text::ImageDesc *v15; // rax
  Scaleform::RefCountNTSImpl *v16; // rcx
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *i; // rsi
  Scaleform::StringLH *v18; // r13
  unsigned __int64 v19; // rax
  Scaleform::Render::Text::ImageDesc *v20; // rax
  Scaleform::RefCountNTSImpl *v21; // rcx

  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = &this->pTable[2 * v7];
  EntryCount = v9[1].EntryCount;
  if ( EntryCount == -2i64 )
  {
    v9[1].EntryCount = -1i64;
    v9[1].SizeMask = 0i64;
    Scaleform::StringLH::CopyConstructHelper((Scaleform::StringLH *)&v9[2], &key->First);
    pObject = key->Second.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v9[2].SizeMask = (unsigned __int64)key->Second.pObject;
    v9[1].SizeMask = v7;
  }
  else
  {
    v12 = v7;
    do
      v12 = pTable->SizeMask & (v12 + 1);
    while ( pTable[2 * v12 + 1].EntryCount != -2i64 );
    v13 = (Scaleform::StringLH *)&pTable[2 * v12 + 1];
    SizeMask = v9[1].SizeMask;
    if ( SizeMask == v7 )
    {
      if ( v13 )
        Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
          (Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&pTable[2 * v12 + 1],
          (const Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&v9[1]);
      Scaleform::String::operator=((Scaleform::String *)&v9[2], &key->First);
      v15 = key->Second.pObject;
      if ( v15 )
        ++v15->RefCount;
      v16 = (Scaleform::RefCountNTSImpl *)v9[2].SizeMask;
      if ( v16 )
        Scaleform::RefCountNTSImpl::Release(v16);
      v9[2].SizeMask = (unsigned __int64)key->Second.pObject;
      v9[1].EntryCount = v12;
    }
    else
    {
      for ( i = &pTable[2 * SizeMask + 1]; i->EntryCount != v7; i = &pTable[2 * i->EntryCount + 1] )
        ;
      if ( v13 )
      {
        v18 = v13 + 2;
        v13->HeapTypeBits = EntryCount;
        v13[1].pData = (Scaleform::String::DataDesc *)v9[1].SizeMask;
        Scaleform::StringLH::CopyConstructHelper(v13 + 2, (const Scaleform::String *)&v9[2]);
        v19 = v9[2].SizeMask;
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        v18[1].pData = (Scaleform::String::DataDesc *)v9[2].SizeMask;
      }
      i->EntryCount = v12;
      Scaleform::String::operator=((Scaleform::String *)&v9[2], &key->First);
      v20 = key->Second.pObject;
      if ( v20 )
        ++v20->RefCount;
      v21 = (Scaleform::RefCountNTSImpl *)v9[2].SizeMask;
      if ( v21 )
        Scaleform::RefCountNTSImpl::Release(v21);
      v9[2].SizeMask = (unsigned __int64)key->Second.pObject;
      v9[1].EntryCount = -1i64;
    }
    v9[1].SizeMask = v7;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rsi
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v11; // rcx
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v12; // rdi
  unsigned __int64 EntryCount; // r9
  const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> *pSecond; // rcx
  __int64 v15; // rbx
  Scaleform::StringLH *v16; // r8
  unsigned __int64 v17; // rax
  const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> *v18; // r14
  Scaleform::RefCountNTSImpl *v19; // rcx
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *i; // r14
  Scaleform::StringLH *v21; // r13
  unsigned __int64 v22; // rax
  const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> *v23; // r14
  Scaleform::RefCountNTSImpl *v24; // rcx

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
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = &this->pTable[2 * v10];
  EntryCount = v12[1].EntryCount;
  if ( EntryCount == -2i64 )
  {
    v12[1].EntryCount = -1i64;
    v12[1].SizeMask = 0i64;
    Scaleform::StringLH::CopyConstructHelper((Scaleform::StringLH *)&v12[2], key->pFirst);
    pSecond = key->pSecond;
    if ( pSecond->pObject )
      ++pSecond->pObject->RefCount;
    v12[2].SizeMask = (unsigned __int64)pSecond->pObject;
    v12[1].SizeMask = v10;
  }
  else
  {
    v15 = v10;
    do
      v15 = v11->SizeMask & (v15 + 1);
    while ( v11[2 * v15 + 1].EntryCount != -2i64 );
    v16 = (Scaleform::StringLH *)&v11[2 * v15 + 1];
    v17 = v12[1].SizeMask;
    if ( v17 == v10 )
    {
      if ( v16 )
        Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
          (Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&v11[2 * v15 + 1],
          (const Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&v12[1]);
      Scaleform::String::operator=((Scaleform::String *)&v12[2], key->pFirst);
      v18 = key->pSecond;
      if ( v18->pObject )
        ++v18->pObject->RefCount;
      v19 = (Scaleform::RefCountNTSImpl *)v12[2].SizeMask;
      if ( v19 )
        Scaleform::RefCountNTSImpl::Release(v19);
      v12[2].SizeMask = (unsigned __int64)v18->pObject;
      v12[1].EntryCount = v15;
    }
    else
    {
      for ( i = &v11[2 * v17 + 1]; i->EntryCount != v10; i = &v11[2 * i->EntryCount + 1] )
        ;
      if ( v16 )
      {
        v16->HeapTypeBits = EntryCount;
        v21 = v16 + 2;
        v16[1].pData = (Scaleform::String::DataDesc *)v12[1].SizeMask;
        Scaleform::StringLH::CopyConstructHelper(v16 + 2, (const Scaleform::String *)&v12[2]);
        v22 = v12[2].SizeMask;
        if ( v22 )
          ++*(_DWORD *)(v22 + 8);
        v21[1].pData = (Scaleform::String::DataDesc *)v12[2].SizeMask;
      }
      i->EntryCount = v15;
      Scaleform::String::operator=((Scaleform::String *)&v12[2], key->pFirst);
      v23 = key->pSecond;
      if ( v23->pObject )
        ++v23->pObject->RefCount;
      v24 = (Scaleform::RefCountNTSImpl *)v12[2].SizeMask;
      if ( v24 )
        Scaleform::RefCountNTSImpl::Release(v24);
      v12[2].SizeMask = (unsigned __int64)v23->pObject;
      v12[1].EntryCount = -1i64;
    }
    v12[1].SizeMask = v10;
  }
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        const Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rbx
  unsigned __int64 EntryCount; // r10
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v6; // r9
  unsigned __int8 *v7; // rax
  int v8; // ecx
  int v9; // edx

  pTable = this->pTable;
  EntryCount = hashValue;
  v6 = &this->pTable[2 * hashValue + 1];
  if ( v6->EntryCount == -2i64 || v6->SizeMask != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( v6->SizeMask == hashValue )
    {
      v7 = (unsigned __int8 *)((v6[1].EntryCount & 0xFFFFFFFFFFFFFFFCui64) + 12);
      do
      {
        v8 = v7[((unsigned __int64)key->pFirst->pData & 0xFFFFFFFFFFFFFFFCui64)
              - (v6[1].EntryCount & 0xFFFFFFFFFFFFFFFCui64)];
        v9 = *v7 - v8;
        if ( v9 )
          break;
        ++v7;
      }
      while ( v8 );
      if ( !v9 )
        break;
    }
    EntryCount = v6->EntryCount;
    if ( v6->EntryCount == -1i64 )
      return -1i64;
    v6 = &pTable[2 * EntryCount + 1];
  }
  return EntryCount;
}

void __fastcall Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
        Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *this,
        const Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *e)
{
  Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor> *p_Value; // rdi
  Scaleform::Render::Text::ImageDesc *pObject; // rax

  p_Value = &e->Value;
  this->NextInChain = e->NextInChain;
  this->HashValue = e->HashValue;
  Scaleform::StringLH::CopyConstructHelper(&this->Value.First, &e->Value.First);
  pObject = p_Value->Second.pObject;
  if ( pObject )
    ++pObject->RefCount;
  this->Value.Second.pObject = p_Value->Second.pObject;
}

void __fastcall Scaleform::Render::GlowFilter::GlowFilter(
        Scaleform::Render::GlowFilter *this,
        float blurx,
        float blury,
        unsigned int passes)
{
  this->__vftable = (Scaleform::Render::GlowFilter_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->Type = Filter_Glow;
  this->Frozen = 0;
  this->Params.Mode = 0;
  this->Params.Passes = 1;
  this->Params.BlurX = 100.0;
  *(_QWORD *)&this->Params.BlurY = 1120403456i64;
  this->Params.Offset.y = 0.0;
  this->Params.Strength = 1.0;
  this->Params.Gradient.pObject = 0i64;
  *(_WORD *)&this->Params.Colors[0].Channels.Green = 0;
  *(_WORD *)&this->Params.Colors[0].Channels.Blue = 0;
  *(unsigned int *)((char *)&this->Params.Colors[0].Raw + 3) = 255;
  this->Params.Colors[1].Channels.Alpha = 0;
  this->Params.Mode &= 0xFFFFFFFA;
  this->Params.Mode |= 2u;
  this->__vftable = (Scaleform::Render::GlowFilter_vtbl *)&Scaleform::Render::GlowFilter::`vftable';
  this->Params.BlurX = blurx * 20.0;
  this->Params.BlurY = blury * 20.0;
  *(_QWORD *)&this->Distance = 0i64;
  this->Params.Passes = passes;
  this->Params.Offset = 0i64;
  HIWORD(this->Params.Colors[0].Raw) = -1;
  this->Params.Colors[0].Channels.Blue = 0;
  this->Params.Strength = 2.0;
}

void __fastcall Scaleform::Render::ShadowFilter::ShadowFilter(
        Scaleform::Render::ShadowFilter *this,
        float angle,
        float dist,
        float blurx,
        float blury,
        unsigned int passes)
{
  float v7; // xmm6_4
  float v8; // xmm0_4

  this->__vftable = (Scaleform::Render::ShadowFilter_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->Type = Filter_Shadow;
  this->Frozen = 0;
  this->Params.Mode = 0;
  this->Params.Passes = 1;
  this->Params.BlurX = 100.0;
  *(_QWORD *)&this->Params.BlurY = 1120403456i64;
  this->Params.Offset.y = 0.0;
  this->Params.Strength = 1.0;
  this->Params.Gradient.pObject = 0i64;
  this->Params.Colors[0].Channels.Blue = 0;
  *(_DWORD *)&this->Params.Colors[0].Channels.Green = 16711680;
  *(_WORD *)&this->Params.Colors[1].Channels.Green = 0;
  this->Params.Colors[1].Channels.Alpha = 0;
  this->Params.Mode &= 0xFFFFFFF9;
  this->Params.Mode |= 1u;
  this->__vftable = (Scaleform::Render::ShadowFilter_vtbl *)&Scaleform::Render::ShadowFilter::`vftable';
  this->Params.Passes = passes;
  this->Params.BlurY = blury * 20.0;
  this->Params.BlurX = blurx * 20.0;
  this->Angle = angle;
  this->Distance = dist * 20.0;
  v7 = cosf(angle);
  v8 = sinf(angle);
  this->Params.Offset.x = v7 * (float)(dist * 20.0);
  this->Params.Offset.y = v8 * (float)(dist * 20.0);
  *(_WORD *)&this->Params.Colors[0].Channels.Green = 0;
  this->Params.Colors[0].Channels.Blue = 0;
  this->Params.Colors[0].Channels.Alpha = -1;
}

void __fastcall Scaleform::GFx::TextField::TextDocumentListener::TextDocumentListener(
        Scaleform::GFx::TextField::TextDocumentListener *this)
{
  Scaleform::RefCountVImpl *v2; // rax
  Scaleform::RefCountVImpl *v3; // rbx

  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::TextField::TextDocumentListener_vtbl *)&Scaleform::GFx::TextField::TextDocumentListener::`vftable';
  this->HandlersMask = 14;
  v2 = (Scaleform::RefCountVImpl *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[-12].HandlersMask + 16i64)
                                                                                           + 16i64)
                                                                               + 24i64))(
                                     *(_QWORD *)(*(_QWORD *)&this[-12].HandlersMask + 16i64) + 16i64,
                                     1i64);
  v3 = v2;
  if ( v2 )
  {
    if ( v2[1].RefCount )
      this->HandlersMask |= 1u;
    if ( (((__int64 (__fastcall *)(Scaleform::RefCountVImpl *))v2->AddRef)(v2) & 4) != 0 )
      this->HandlersMask |= 0x10u;
    Scaleform::RefCountImpl::Release(v3);
  }
}

void __fastcall Scaleform::GFx::TextField::TextField(
        Scaleform::GFx::TextField *this,
        Scaleform::GFx::TextFieldDef *def,
        Scaleform::GFx::MovieDefImpl *pbindingDefImpl,
        Scaleform::GFx::ASMovieRootBase *pasRoot,
        Scaleform::GFx::InteractiveObject *parent,
        Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> id)
{
  Scaleform::Render::Text::DocView *v10; // rsi
  Scaleform::GFx::MovieImpl *pMovieImpl; // r15
  Scaleform::Render::Text::Allocator *TextAllocator; // rax
  Scaleform::Render::Text::Allocator *v13; // r12
  Scaleform::GFx::FontManager *FontManager; // rbp
  Scaleform::Render::Text::DocView *v15; // r15
  Scaleform::Log *Log; // rax
  Scaleform::Render::Text::DocView *v17; // rax
  Scaleform::Render::Text::DocView *pObject; // rcx
  Scaleform::RefCountNTSImpl **p_pObject; // rsi
  Scaleform::Render::Text::DocView *v20; // rcx
  Scaleform::Render::TreeText *RenderNode; // rax
  Scaleform::Render::Text::DocView *v22; // rcx
  Scaleform::Render::TreeText *v23; // rax
  int MaxLength; // ecx
  Scaleform::Render::Text::DocView *v25; // rax
  unsigned __int16 Flags; // ax
  bool v27; // si
  Scaleform::Render::Text::EditorKitBase *v29; // rcx
  bool v30; // al

  LODWORD(id.pObject) = id.pObject->__vftable;
  Scaleform::GFx::InteractiveObject::InteractiveObject(this, pbindingDefImpl, pasRoot, parent, &id);
  this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::TextField_vtbl *)&Scaleform::GFx::TextField::`vftable'{for `Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>'};
  this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::TextField::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>'};
  if ( def )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)def);
  this->pDef.pObject = def;
  v10 = 0i64;
  this->pDocument.pObject = 0i64;
  this->pFilters.pObject = 0i64;
  Scaleform::StringLH::StringLH(&this->OriginalTextValue);
  this->pCSSData.pObject = 0i64;
  this->pCSSData.Owner = 1;
  Scaleform::GFx::TextField::TextDocumentListener::TextDocumentListener(&this->TextDocListener);
  this->pImageDescAssoc = 0i64;
  if ( pbindingDefImpl )
    this->pBinding = &pbindingDefImpl->pBindData.pObject->ResourceBinding;
  else
    this->pBinding = 0i64;
  this->Flags = 0;
  this->FocusedControllerIdx = -1;
  this->Alignment = def->Alignment;
  this->Flags = 4 * ((LOBYTE(def->Flags) >> 2) & 1);
  if ( SLOBYTE(def->Flags) >= 0 )
    this->Flags &= ~2u;
  else
    this->Flags |= 2u;
  this->Flags |= 0x80u;
  this->pShadow = 0i64;
  pMovieImpl = pasRoot->pMovieImpl;
  TextAllocator = Scaleform::GFx::MovieImpl::GetTextAllocator(pMovieImpl);
  v13 = TextAllocator;
  if ( TextAllocator )
    ++TextAllocator->RefCount;
  FontManager = Scaleform::GFx::MovieImpl::FindFontManager(pMovieImpl, pbindingDefImpl);
  if ( !FontManager && (!parent || (FontManager = parent->GetFontManager(parent)) == 0i64) )
    FontManager = Scaleform::GFx::MovieImpl::FindFontManager(pMovieImpl, 0i64);
  v15 = (Scaleform::Render::Text::DocView *)pMovieImpl->pHeap->Alloc(pMovieImpl->pHeap, 352ui64, 0i64);
  if ( v15 )
  {
    Log = Scaleform::GFx::DisplayObjectBase::GetLog(this);
    Scaleform::Render::Text::DocView::DocView(v15, v13, FontManager, Log);
    v10 = v17;
  }
  pObject = this->pDocument.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pObject);
  this->pDocument.pObject = v10;
  p_pObject = &v10->pDocumentListener.pObject;
  if ( this != (Scaleform::GFx::TextField *)-304i64 )
    ++this->TextDocListener.RefCount;
  if ( *p_pObject )
    Scaleform::RefCountNTSImpl::Release(*p_pObject);
  *p_pObject = &this->TextDocListener;
  this->pDocument.pObject->pDocument.pObject->RTFlags |= 2u;
  this->pDocument.pObject->FlagsEx |= 4u;
  if ( (def->Flags & 0x40) != 0 )
  {
    v20 = this->pDocument.pObject;
    *(_WORD *)((char *)&id.pObject + 1) = -1;
    LOBYTE(id.pObject) = -1;
    BYTE3(id.pObject) = -1;
    v20->BackgroundColor = (unsigned int)id.pObject;
    RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
    v22 = this->pDocument.pObject;
    *(_WORD *)((char *)&id.pObject + 1) = 0;
    LOBYTE(id.pObject) = 0;
    BYTE3(id.pObject) = -1;
    v22->BorderColor = (unsigned int)id.pObject;
    v23 = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    Scaleform::Render::TreeText::NotifyLayoutChanged(v23);
  }
  Scaleform::GFx::TextField::SetInitialFormatsAsDefault(this);
  MaxLength = def->MaxLength;
  if ( MaxLength > 0 )
    this->pDocument.pObject->MaxLength = MaxLength;
  Scaleform::Render::Text::DocView::SetViewRect(this->pDocument.pObject, &def->TextRect, UseExternally);
  if ( (def->Flags & 0x100) != 0 )
  {
    this->pDocument.pObject->Flags |= 0x20u;
    this->pDocument.pObject->Flags |= 0x40u;
  }
  v25 = this->pDocument.pObject;
  if ( (def->Flags & 2) != 0 )
    v25->Flags |= 4u;
  else
    v25->Flags &= ~4u;
  Flags = def->Flags;
  v27 = (Flags & 0x10) != 0;
  if ( (Flags & 0x10) != 0 && (Flags & 3) != 3 )
    Scaleform::Render::Text::DocView::SetAutoSizeX(this->pDocument.pObject);
  if ( v27 )
    Scaleform::Render::Text::DocView::SetAutoSizeY(this->pDocument.pObject);
  if ( (def->Flags & 1) != 0 )
    Scaleform::Render::Text::DocView::SetWordWrap(this->pDocument.pObject);
  if ( (this->Flags & 4) != 0 )
    this->pDocument.pObject->Flags |= 0x10u;
  if ( (def->Flags & 0x400) != 0 )
    this->pDocument.pObject->Flags |= 0x40u;
  v29 = this->pDocument.pObject->pEditorKit.pObject;
  if ( v29 )
    v30 = v29->IsReadOnly(v29);
  else
    v30 = (this->pDef.pObject->Flags & 8) != 0;
  if ( !v30 || (def->Flags & 0x20) != 0 )
  {
    Scaleform::GFx::TextField::CreateEditorKit(this, &id);
    if ( id.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)id.pObject);
  }
  this->Flags |= 0x10000u;
  if ( v13 )
    Scaleform::RefCountNTSImpl::Release(v13);
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rdi
  Scaleform::RefCountNTSImpl *SizeMask; // rcx
  volatile int *v6; // rbx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      pTable = this->pTable;
      if ( this->pTable[v2 + 1].EntryCount != -2i64 )
      {
        SizeMask = (Scaleform::RefCountNTSImpl *)pTable[v2 + 2].SizeMask;
        if ( SizeMask )
          Scaleform::RefCountNTSImpl::Release(SizeMask);
        v6 = (volatile int *)(pTable[v2 + 2].EntryCount & 0xFFFFFFFFFFFFFFFCui64);
        if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v6 + 2, -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v6);
        pTable[v2 + 1].EntryCount = -2i64;
      }
      v2 += 2i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::GFx::TextField::~TextField(Scaleform::GFx::TextField *this)
{
  Scaleform::StringHashLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *pImageDescAssoc; // rbx
  Scaleform::Render::Text::DocView *pObject; // rcx
  Scaleform::GFx::TextField::ShadowParams *pShadow; // rbx
  Scaleform::GFx::ASStringNode *pNode; // rcx
  Scaleform::GFx::TextField::CSSHolderBase *v7; // rcx
  volatile int *v8; // rbx
  Scaleform::RefCountVImpl *v9; // rcx
  Scaleform::Render::Text::DocView *v10; // rcx
  Scaleform::GFx::TextFieldDef *v11; // rcx

  pImageDescAssoc = this->pImageDescAssoc;
  this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::TextField_vtbl *)&Scaleform::GFx::TextField::`vftable'{for `Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>'};
  this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::TextField::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>'};
  if ( pImageDescAssoc )
  {
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::Clear(&pImageDescAssoc->mHash);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pImageDescAssoc);
  }
  pObject = this->pDocument.pObject;
  this->pImageDescAssoc = 0i64;
  Scaleform::Render::Text::DocView::Close(pObject);
  pShadow = this->pShadow;
  if ( pShadow )
  {
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pShadow->TextOffsets.Data.Data);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pShadow->ShadowOffsets.Data.Data);
    pNode = pShadow->ShadowStyleStr.pNode;
    if ( pNode->RefCount-- == 1 )
      Scaleform::GFx::ASStringNode::ReleaseNode(pNode);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pShadow);
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(&this->TextDocListener);
  v7 = this->pCSSData.pObject;
  if ( v7 )
  {
    if ( this->pCSSData.Owner )
    {
      this->pCSSData.Owner = 0;
      ((void (__fastcall *)(Scaleform::GFx::TextField::CSSHolderBase *, __int64))v7->~CSSHolderBase)(v7, 1i64);
    }
    this->pCSSData.pObject = 0i64;
  }
  this->pCSSData.Owner = 0;
  v8 = (volatile int *)(this->OriginalTextValue.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v8 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v8);
  v9 = (Scaleform::RefCountVImpl *)this->pFilters.pObject;
  if ( v9 )
    Scaleform::RefCountImpl::Release(v9);
  v10 = this->pDocument.pObject;
  if ( v10 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v10);
  v11 = this->pDef.pObject;
  if ( v11 )
    Scaleform::GFx::Resource::Release(v11);
  Scaleform::GFx::InteractiveObject::~InteractiveObject(this);
}

Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *__fastcall Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>::operator=(
        Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *this,
        const Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *__that)
{
  Scaleform::Render::Text::StyledText *pObject; // rax
  Scaleform::Render::Text::StyledText *v5; // rcx

  this->Scaleform::Range = __that->Scaleform::Range;
  pObject = __that->Data.SavedFmt.pObject;
  if ( pObject )
    ++pObject->RefCount;
  v5 = this->Data.SavedFmt.pObject;
  if ( v5 )
    Scaleform::RefCountNTSImpl::Release(v5);
  this->Data.SavedFmt.pObject = __that->Data.SavedFmt.pObject;
  this->Data.HitCount = __that->Data.HitCount;
  this->Data.OverCount = __that->Data.OverCount;
  return this;
}

void __fastcall Scaleform::GFx::TextField::AddIdImageDescAssoc(
        Scaleform::GFx::TextField *this,
        const char *idStr,
        Scaleform::Render::Text::ImageDesc *pdesc)
{
  Scaleform::StringHashLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *v6; // rax
  Scaleform::StringHashLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *pImageDescAssoc; // rcx
  void *v8; // rbx
  Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeRef key; // [rsp+20h] [rbp-18h] BYREF
  Scaleform::String v10; // [rsp+40h] [rbp+8h] BYREF
  Scaleform::RefCountNTSImpl *v11; // [rsp+50h] [rbp+18h] BYREF

  if ( !this->pImageDescAssoc )
  {
    LODWORD(v10.pData) = 2;
    v6 = (Scaleform::StringHashLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 8i64, &v10);
    if ( v6 )
      v6->mHash.pTable = 0i64;
    this->pImageDescAssoc = v6;
  }
  if ( pdesc )
    ++pdesc->RefCount;
  v11 = pdesc;
  Scaleform::String::String(&v10, idStr);
  pImageDescAssoc = this->pImageDescAssoc;
  key.pFirst = &v10;
  key.pSecond = (const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> *)&v11;
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::Set<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
    &pImageDescAssoc->mHash,
    pImageDescAssoc,
    &key);
  v8 = (void *)(v10.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v10.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8);
  if ( v11 )
    Scaleform::RefCountNTSImpl::Release(v11);
}

void __fastcall Scaleform::GFx::TextField::AdvanceFrame(
        Scaleform::GFx::TextField *this,
        bool nextFrame,
        float framePos)
{
  char v5; // di
  unsigned __int8 v6; // cl
  Scaleform::Render::Text::DocView *pObject; // rax
  unsigned int Flags; // ecx
  bool v9; // dl
  int v10; // eax
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix3x4<float> *v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  unsigned __int8 v15; // al
  const Scaleform::Render::Matrix3x4<float> *v16; // rax
  Scaleform::Render::Text::EditorKitBase *v17; // rdi
  Scaleform::GFx::MovieImpl *pMovieImpl; // rsi
  __int64 TimeElapsed; // rax
  double v20; // xmm1_8
  Scaleform::Render::TreeText *RenderNode; // rax

  v5 = 0;
  v6 = this->GetStateChangeFlags(this);
  if ( (v6 & 0xF) != 0 || (this->pASRoot->pMovieImpl->Flags2 & 2) != 0 )
  {
    pObject = this->pDocument.pObject;
    if ( pObject )
    {
      this->Scaleform::GFx::InteractiveObject::Flags &= ~0x100000u;
      pObject->RTFlags |= 2u;
      this->Flags |= 0x10000u;
      if ( (v6 & 8) != 0 )
      {
        Scaleform::GFx::TextField::TextDocumentListener::TranslatorChanged(&this->TextDocListener);
        Scaleform::GFx::TextField::SetTextValue(
          this,
          (const char *)((this->OriginalTextValue.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
          (this->Flags & 0x1000) != 0,
          1);
        v5 = 1;
      }
    }
  }
  this->Scaleform::GFx::InteractiveObject::Flags &= 0xFFF0FFFF;
  Flags = this->Scaleform::GFx::InteractiveObject::Flags;
  if ( (this->Flags & 0x4000) != 0 )
  {
    this->Flags &= ~0x4000u;
    v9 = (Flags & 0x200000) != 0 && (Flags & 0x400000) == 0;
    v10 = Scaleform::GFx::TextField::CheckAdvanceStatus(this, v9);
    if ( v10 == -1 )
    {
      this->Scaleform::GFx::InteractiveObject::Flags |= 0x400000u;
    }
    else if ( v10 == 1 )
    {
      Scaleform::GFx::InteractiveObject::AddToOptimizedPlayList(this);
    }
  }
  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v12 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                              + 4 * AvmObjOffset))->GetMatrix3D((char *)this + 4 * AvmObjOffset);
    v13 = (*(__int64 (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v12->M[0][0] + 176i64))(v12);
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 40);
      if ( v14 == 2 )
      {
        *(_DWORD *)(v13 + 40) = 0;
        Scaleform::GFx::InteractiveObject::ModifyOptimizedPlayListLocal<Scaleform::GFx::TextField>(this);
        if ( !v5 )
        {
          this->Flags |= 0x10000u;
          Scaleform::GFx::TextField::SetTextValue(
            this,
            (const char *)((this->OriginalTextValue.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
            (this->Flags & 0x1000) != 0,
            1);
        }
      }
      else if ( v14 == 3 )
      {
        *(_DWORD *)(v13 + 40) = 0;
        Scaleform::GFx::InteractiveObject::ModifyOptimizedPlayListLocal<Scaleform::GFx::TextField>(this);
      }
    }
  }
  if ( nextFrame )
  {
    if ( (this->Flags & 0x8000) != 0 )
    {
      v15 = this->AvmObjOffset;
      if ( v15 )
      {
        v16 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                  + 4 * v15))->GetMatrix3D((char *)this + 4 * v15);
        (*(void (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v16->M[0][0] + 248i64))(v16);
      }
    }
    this->Flags |= 0x40u;
  }
  else
  {
    this->Flags &= ~0x40u;
  }
  v17 = this->pDocument.pObject->pEditorKit.pObject;
  if ( v17 )
  {
    pMovieImpl = this->pASRoot->pMovieImpl;
    if ( Scaleform::GFx::MovieImpl::IsFocused(pMovieImpl, this) || ((__int64)v17[10].__vftable & 0x20) != 0 )
    {
      TimeElapsed = pMovieImpl->TimeElapsed;
      v20 = (double)(int)TimeElapsed;
      if ( TimeElapsed < 0 )
        v20 = v20 + 1.844674407370955e19;
      Scaleform::GFx::Text::EditorKit::Advance((Scaleform::GFx::Text::EditorKit *)v17, v20 / 1000000.0);
    }
  }
  if ( (this->Flags & 0x10000) != 0 )
  {
    RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
  }
}

char __fastcall Scaleform::GFx::TextField::ChangeUrlFormat(
        Scaleform::GFx::TextField *this,
        Scaleform::GFx::TextField::LinkEvent event,
        unsigned int mouseIndex,
        const Scaleform::Range *purlRange)
{
  unsigned __int8 AvmObjOffset; // al
  __int64 v6; // rdi
  const Scaleform::Render::Matrix3x4<float> *v9; // rax
  char v10; // r12
  const char *v11; // rbp
  __int32 v12; // ebx
  __int32 v13; // ebx
  Scaleform::GFx::TextField::CSSHolderBase *pObject; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  Scaleform::GFx::TextField::CSSHolderBase *v17; // rcx
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v18; // rbx
  unsigned int OverCount; // eax
  unsigned __int8 v20; // al
  const Scaleform::Render::Matrix3x4<float> *v21; // rax
  Scaleform::GFx::TextField::CSSHolderBase *v22; // rax
  unsigned int v23; // eax
  unsigned __int8 v24; // al
  const Scaleform::Render::Matrix3x4<float> *v25; // rax
  unsigned int Size; // er9
  unsigned int v28; // edx
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *Data; // r10
  __int64 v30; // r8
  signed __int64 v31; // rcx
  unsigned __int8 v32; // al
  const Scaleform::Render::Matrix3x4<float> *v33; // rax
  unsigned int v34; // ecx
  Scaleform::GFx::TextField::CSSHolderBase *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  Scaleform::GFx::TextField::CSSHolderBase *v38; // rcx
  __int64 v39; // rbx
  unsigned int HitCount; // eax
  unsigned int v41; // eax
  Scaleform::GFx::TextField::CSSHolderBase *v42; // rax
  unsigned int v43; // eax
  unsigned int v44; // er9
  unsigned int v45; // edx
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v46; // r10
  __int64 v47; // r8
  signed __int64 v48; // rcx
  unsigned int v49; // ecx
  unsigned __int64 Index; // rdi
  unsigned __int64 Length; // r8
  const Scaleform::Render::Text::StyleManagerBase *v52; // rax
  const Scaleform::Render::Text::TextFormat *v53; // rbp
  const Scaleform::Render::Text::StyleManagerBase *v54; // rax
  const Scaleform::Render::Text::TextFormat *v55; // r14
  const Scaleform::Render::Text::StyleManagerBase *v56; // rax
  const Scaleform::Render::Text::TextFormat *v57; // rdi
  Scaleform::MemoryHeap *v58; // rax
  const Scaleform::Render::Text::TextFormat *v59; // rax
  const Scaleform::Render::Text::TextFormat *v60; // rax
  const Scaleform::Render::Text::TextFormat *v61; // rax
  Scaleform::Render::Text::TextFormat fmt; // [rsp+20h] [rbp-C8h] BYREF
  Scaleform::Render::Text::TextFormat result; // [rsp+70h] [rbp-78h] BYREF

  AvmObjOffset = this->AvmObjOffset;
  v6 = mouseIndex;
  if ( !AvmObjOffset )
    return 0;
  v9 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                           + 4 * AvmObjOffset))->GetMatrix3D((char *)this + 4 * AvmObjOffset);
  if ( !(*(unsigned __int8 (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v9->M[0][0] + 184i64))(v9) )
    return 0;
  v10 = 0;
  v11 = 0i64;
  if ( event )
  {
    v12 = event - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          pObject = this->pCSSData.pObject;
          v15 = 8 * v6 + 32;
          if ( *(_DWORD *)((char *)&pObject->__vftable + v15) )
          {
            v16 = v6;
            if ( pObject->MouseState[v6].OverBit )
            {
              pObject->MouseState[v16].OverBit = 0;
              v17 = this->pCSSData.pObject;
              v18 = &v17->UrlZones.Ranges.Data.Data[*(_DWORD *)((char *)&v17->__vftable + v15) - 1];
              if ( !v17->MouseState[v16].HitBit )
                *(_DWORD *)((char *)&v17->__vftable + v15) = 0;
              OverCount = v18->Data.OverCount;
              if ( !OverCount )
                goto LABEL_58;
              v18->Data.OverCount = OverCount - 1;
              v20 = this->AvmObjOffset;
              if ( v20 )
              {
                v21 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                          + 4 * v20))->GetMatrix3D((char *)this + 4 * v20);
                (*(void (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *, __int64, _QWORD, _QWORD))(*(_QWORD *)&v21->M[0][0] + 200i64))(
                  v21,
                  3i64,
                  LODWORD(v18->Index),
                  (unsigned int)v6);
              }
              if ( !v18->Data.OverCount )
              {
                if ( v18->Data.HitCount )
                  goto LABEL_57;
LABEL_58:
                if ( v18->Data.SavedFmt.pObject )
                {
                  Index = v18->Index;
                  Length = v18->Length;
                  if ( v18->Index + Length < v18->Index )
                    Length = 0i64;
                  Scaleform::Render::Text::StyledText::Remove(
                    this->pDocument.pObject->pDocument.pObject,
                    v18->Index,
                    Length);
                  Scaleform::Render::Text::StyledText::InsertStyledText(
                    this->pDocument.pObject->pDocument.pObject,
                    v18->Data.SavedFmt.pObject,
                    Index,
                    0xFFFFFFFFFFFFFFFFui64);
                  v10 = 1;
                }
                if ( v11 )
                {
                  v52 = this->pCSSData.pObject->GetTextStyleManager(this->pCSSData.pObject);
                  v53 = (const Scaleform::Render::Text::TextFormat *)v52->GetStyle(v52, CSS_Tag, v11, -1ui64);
                  if ( v53 )
                  {
                    v54 = this->pCSSData.pObject->GetTextStyleManager(this->pCSSData.pObject);
                    v55 = (const Scaleform::Render::Text::TextFormat *)v54->GetStyle(v54, CSS_Tag, "a", -1ui64);
                    v56 = this->pCSSData.pObject->GetTextStyleManager(this->pCSSData.pObject);
                    v57 = (const Scaleform::Render::Text::TextFormat *)v56->GetStyle(v56, CSS_Tag, "a:link", -1ui64);
                    v58 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
                    Scaleform::Render::Text::TextFormat::TextFormat(&fmt, v58);
                    if ( v55 )
                    {
                      v59 = Scaleform::Render::Text::TextFormat::Merge(&fmt, &result, v55);
                      Scaleform::Render::Text::TextFormat::operator=(&fmt, v59);
                      Scaleform::Render::Text::TextFormat::~TextFormat(&result);
                    }
                    if ( v57 )
                    {
                      v60 = Scaleform::Render::Text::TextFormat::Merge(&fmt, &result, v57);
                      Scaleform::Render::Text::TextFormat::operator=(&fmt, v60);
                      Scaleform::Render::Text::TextFormat::~TextFormat(&result);
                    }
                    v61 = Scaleform::Render::Text::TextFormat::Merge(&fmt, &result, v53);
                    Scaleform::Render::Text::TextFormat::operator=(&fmt, v61);
                    Scaleform::Render::Text::TextFormat::~TextFormat(&result);
                    Scaleform::Render::Text::DocView::SetTextFormat(
                      this->pDocument.pObject,
                      &fmt,
                      v18->Index,
                      v18->Index + v18->Length);
                    v10 = 1;
                    Scaleform::Render::Text::TextFormat::~TextFormat(&fmt);
                  }
                }
                return v10;
              }
            }
            return 0;
          }
        }
        return v10;
      }
      v22 = this->pCSSData.pObject;
      if ( !v22->MouseState[v6].UrlZoneIndex )
      {
        Size = v22->UrlZones.Ranges.Data.Size;
        v28 = 0;
        if ( !Size )
          return v10;
        Data = v22->UrlZones.Ranges.Data.Data;
        while ( 1 )
        {
          v30 = v28;
          v31 = Data[v30].Index;
          if ( (signed __int64)(purlRange->Length + purlRange->Index) > v31
            && (signed __int64)(Data[v30].Length + v31) > purlRange->Index )
          {
            break;
          }
          if ( ++v28 >= Size )
            return 0;
        }
        v22->MouseState[v6].UrlZoneIndex = v28 + 1;
        v18 = &Data[v30];
        this->pCSSData.pObject->MouseState[v6].OverBit = 1;
        v32 = this->AvmObjOffset;
        if ( v32 )
        {
          v33 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                    + 4 * v32))->GetMatrix3D((char *)this + 4 * v32);
          (*(void (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *, __int64, _QWORD, _QWORD))(*(_QWORD *)&v33->M[0][0] + 200i64))(
            v33,
            2i64,
            LODWORD(v18->Index),
            (unsigned int)v6);
        }
        goto LABEL_32;
      }
      if ( !v22->MouseState[v6].OverBit )
      {
        v22->MouseState[v6].OverBit = 1;
        v18 = &this->pCSSData.pObject->UrlZones.Ranges.Data.Data[this->pCSSData.pObject->MouseState[v6].UrlZoneIndex - 1];
        v23 = v18->Data.OverCount;
        if ( v23 )
        {
          v18->Data.OverCount = v23 + 1;
          v24 = this->AvmObjOffset;
          if ( v24 )
          {
            v25 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                      + 4 * v24))->GetMatrix3D((char *)this + 4 * v24);
            (*(void (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *, __int64, _QWORD, _QWORD))(*(_QWORD *)&v25->M[0][0] + 200i64))(
              v25,
              2i64,
              LODWORD(v18->Index),
              (unsigned int)v6);
          }
          return 0;
        }
LABEL_32:
        if ( v18 )
        {
          if ( !v18->Data.HitCount )
          {
            v34 = v18->Data.OverCount;
            v18->Data.OverCount = v34 + 1;
            if ( !v34 )
            {
              v11 = "a:hover";
              goto LABEL_58;
            }
          }
          return 0;
        }
        return v10;
      }
    }
    else
    {
      v35 = this->pCSSData.pObject;
      v36 = 8 * v6 + 32;
      if ( !*(_DWORD *)((char *)&v35->__vftable + v36) )
        return v10;
      v37 = v6;
      if ( v35->MouseState[v6].HitBit )
      {
        v35->MouseState[v37].HitBit = 0;
        v38 = this->pCSSData.pObject;
        v39 = (unsigned int)(*(_DWORD *)((char *)&v38->__vftable + v36) - 1);
        if ( !v38->MouseState[v37].OverBit )
          *(_DWORD *)((char *)&v38->__vftable + v36) = 0;
        v18 = &this->pCSSData.pObject->UrlZones.Ranges.Data.Data[v39];
        HitCount = v18->Data.HitCount;
        if ( !HitCount )
          goto LABEL_58;
        v41 = HitCount - 1;
        v18->Data.HitCount = v41;
        if ( !v41 )
        {
          if ( v18->Data.OverCount )
            v11 = "a:hover";
          goto LABEL_58;
        }
      }
    }
  }
  else
  {
    v42 = this->pCSSData.pObject;
    if ( v42->MouseState[v6].UrlZoneIndex )
    {
      if ( v42->MouseState[v6].HitBit )
        return 0;
      v42->MouseState[v6].HitBit = 1;
      v18 = &this->pCSSData.pObject->UrlZones.Ranges.Data.Data[this->pCSSData.pObject->MouseState[v6].UrlZoneIndex - 1];
      v43 = v18->Data.HitCount;
      if ( v43 )
      {
        v18->Data.HitCount = v43 + 1;
        return 0;
      }
    }
    else
    {
      v44 = v42->UrlZones.Ranges.Data.Size;
      v45 = 0;
      if ( !v44 )
        return v10;
      v46 = v42->UrlZones.Ranges.Data.Data;
      while ( 1 )
      {
        v47 = v45;
        v48 = v46[v47].Index;
        if ( (signed __int64)(purlRange->Length + purlRange->Index) > v48
          && (signed __int64)(v46[v47].Length + v48) > purlRange->Index )
        {
          break;
        }
        if ( ++v45 >= v44 )
          return 0;
      }
      v42->MouseState[v6].UrlZoneIndex = v45 + 1;
      v18 = &v46[v47];
      this->pCSSData.pObject->MouseState[v6].HitBit = 1;
    }
    if ( !v18 )
      return v10;
    v49 = v18->Data.HitCount;
    v18->Data.HitCount = v49 + 1;
    if ( !v49 )
    {
LABEL_57:
      v11 = "a:active";
      goto LABEL_58;
    }
  }
  return 0;
}

__int64 __fastcall Scaleform::GFx::TextField::CheckAdvanceStatus(Scaleform::GFx::TextField *this, bool playingNow)
{
  unsigned int v2; // ebx
  unsigned __int16 Flags; // dx
  bool v6; // bp
  bool v7; // cl
  Scaleform::GFx::MovieImpl *pMovieImpl; // r15
  Scaleform::Render::Text::EditorKitBase *pObject; // r14
  int v11; // eax
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix3x4<float> *v13; // rax
  __int64 v14; // rax

  v2 = 0;
  if ( (this->Scaleform::GFx::InteractiveObject::Flags & 0xC) != 0
    || (Flags = this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags,
        (Flags & 0x40) != 0)
    || (this->pDef.pObject->Flags & 0x1000) != 0 )
  {
    v11 = 0;
    if ( playingNow )
      v11 = -1;
    v2 = v11;
  }
  else
  {
    v6 = (this->Flags & 0xC000) != 0;
    v7 = v6;
    if ( (this->Flags & 0xC000) == 0
      && (pMovieImpl = this->pASRoot->pMovieImpl,
          pObject = this->pDocument.pObject->pEditorKit.pObject,
          (Flags & 0x4000) != 0)
      && pObject
      && (!pObject->IsReadOnly(pObject) && Scaleform::GFx::MovieImpl::IsFocused(pMovieImpl, this)
       || (v7 = v6, ((__int64)pObject[10].__vftable & 0x20) != 0))
      || v7 )
    {
      if ( !playingNow )
        return 1i64;
    }
    else if ( playingNow )
    {
      v2 = -1;
    }
  }
  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v13 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                              + 4 * AvmObjOffset))->GetMatrix3D((char *)this + 4 * AvmObjOffset);
    v14 = (*(__int64 (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v13->M[0][0] + 176i64))(v13);
    if ( v14 )
    {
      if ( (unsigned int)(*(_DWORD *)(v14 + 40) - 1) <= 1 )
        return 1;
    }
  }
  return v2;
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::Clear(
        Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *this)
{
  Scaleform::Render::Text::ImageDesc *pObject; // rcx
  volatile int *v3; // rbx

  pObject = this->Value.Second.pObject;
  if ( pObject )
    Scaleform::RefCountNTSImpl::Release(pObject);
  v3 = (volatile int *)(this->Value.First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
  this->NextInChain = -2i64;
}

void __fastcall Scaleform::GFx::TextField::ClearIdImageDescAssoc(Scaleform::GFx::TextField *this)
{
  Scaleform::StringHashLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *pImageDescAssoc; // rdi

  pImageDescAssoc = this->pImageDescAssoc;
  if ( pImageDescAssoc )
  {
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::Clear(&this->pImageDescAssoc->mHash);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pImageDescAssoc);
    this->pImageDescAssoc = 0i64;
  }
  else
  {
    this->pImageDescAssoc = 0i64;
  }
}

void __fastcall Scaleform::GFx::TextField::ClearRestrict(Scaleform::GFx::TextField *this)
{
  Scaleform::GFx::Text::EditorKit *pObject; // rcx

  pObject = (Scaleform::GFx::Text::EditorKit *)this->pDocument.pObject->pEditorKit.pObject;
  if ( pObject )
    Scaleform::GFx::Text::EditorKit::ClearRestrict(pObject);
}

void __fastcall Scaleform::GFx::TextField::CollectUrlZones(Scaleform::GFx::TextField *this)
{
  Scaleform::GFx::TextField::CSSHolderBase *pObject; // rax
  Scaleform::GFx::TextField *v2; // rdi
  __int64 v3; // rbx
  unsigned int Size; // er14
  unsigned int v5; // er13
  unsigned __int64 v6; // r15
  unsigned __int64 Length; // rsi
  __int64 v8; // rdi
  Scaleform::Render::Text::Paragraph *v9; // r12
  __int64 v10; // r14
  Scaleform::Render::Text::TextFormat *v11; // rcx
  Scaleform::Render::Text::TextFormat *v12; // rcx
  unsigned __int8 *v13; // rax
  unsigned __int64 v14; // r8
  int v15; // ecx
  int v16; // edx
  Scaleform::Render::Text::StyledText *v17; // rax
  Scaleform::GFx::TextField::CSSHolderBase *v18; // rdi
  Scaleform::Render::Text::StyledText *v19; // rbx
  const Scaleform::Render::Text::Paragraph::StyledTextRun *v20; // rax
  Scaleform::Render::Text::TextFormat *v21; // rbx
  Scaleform::Render::Text::StyledText *v23; // rax
  Scaleform::GFx::TextField::CSSHolderBase *v24; // rdi
  Scaleform::Render::Text::StyledText *v25; // rbx
  void *v26; // rbx
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> range; // [rsp+28h] [rbp-79h] BYREF
  __int64 v28; // [rsp+50h] [rbp-51h]
  Scaleform::Render::Text::DocView::DocumentText *v29; // [rsp+58h] [rbp-49h]
  Scaleform::Render::Text::Paragraph::FormatRunIterator result; // [rsp+68h] [rbp-39h] BYREF
  unsigned int v32; // [rsp+110h] [rbp+6Fh]
  unsigned int v33; // [rsp+118h] [rbp+77h]
  Scaleform::String v34; // [rsp+120h] [rbp+7Fh] BYREF

  pObject = this->pCSSData.pObject;
  v2 = this;
  if ( pObject )
  {
    pObject->MouseState[0] = 0i64;
    pObject->MouseState[1] = 0i64;
    pObject->MouseState[2] = 0i64;
    pObject->MouseState[3] = 0i64;
    pObject->MouseState[4] = 0i64;
    pObject->MouseState[5] = 0i64;
    Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->pCSSData.pObject->UrlZones.Ranges.Data,
      &this->pCSSData.pObject->UrlZones,
      0i64);
    v29 = v2->pDocument.pObject->pDocument.pObject;
    v3 = (__int64)v29;
    Scaleform::String::String(&v34);
    Size = v29->Paragraphs.Data.Size;
    v5 = 0;
    v6 = 0i64;
    v33 = Size;
    Length = 0i64;
    v32 = 0;
    if ( Size )
    {
      v8 = 0i64;
      v28 = 0i64;
      do
      {
        if ( v5 >= *(_DWORD *)(v3 + 32) )
          v9 = 0i64;
        else
          v9 = *(Scaleform::Render::Text::Paragraph **)(v8 + *(_QWORD *)(v3 + 24));
        Scaleform::Render::Text::Paragraph::GetIterator(v9, &result);
        if ( result.CurTextIndex < result.pText->Size )
        {
          do
          {
            v10 = v9->StartIndex + Scaleform::Render::Text::Paragraph::FormatRunIterator::operator*(&result)->Index;
            v11 = Scaleform::Render::Text::Paragraph::FormatRunIterator::operator*(&result)->pFormat.pObject;
            if ( (v11->PresentMask & 0x100) != 0 && Scaleform::String::GetLength(&v11->Url) )
            {
              if ( (*(_QWORD *)(v34.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) != 0 )
              {
                if ( v10 != Length + v6 )
                  goto LABEL_17;
                v12 = Scaleform::Render::Text::Paragraph::FormatRunIterator::operator*(&result)->pFormat.pObject;
                v13 = (unsigned __int8 *)((v34.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
                v14 = (v12->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) - (v34.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
                do
                {
                  v15 = v13[v14];
                  v16 = *v13 - v15;
                  if ( v16 )
                    break;
                  ++v13;
                }
                while ( v15 );
                if ( v16 )
                {
LABEL_17:
                  v17 = Scaleform::Render::Text::StyledText::CopyStyledText(
                          this->pDocument.pObject->pDocument.pObject,
                          v6,
                          Length + v6);
                  v18 = this->pCSSData.pObject;
                  v19 = v17;
                  Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy>>::ExpandRange(
                    &v18->UrlZones,
                    v6,
                    Length);
                  range.Index = v6;
                  range.Length = Length;
                  if ( v19 )
                    ++v19->RefCount;
                  range.Data.SavedFmt.pObject = v19;
                  *(_QWORD *)&range.Data.HitCount = 0i64;
                  Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy>>::SetRange(
                    &v18->UrlZones,
                    &range);
                  if ( range.Data.SavedFmt.pObject )
                    Scaleform::RefCountNTSImpl::Release(range.Data.SavedFmt.pObject);
                  Scaleform::String::Clear(&v34);
                  if ( v19 )
                    Scaleform::RefCountNTSImpl::Release(v19);
                }
                else
                {
                  Length += Scaleform::Render::Text::Paragraph::FormatRunIterator::operator*(&result)->Length;
                }
              }
              if ( (*(_QWORD *)(v34.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) == 0 )
              {
                v6 = v10;
                Length = Scaleform::Render::Text::Paragraph::FormatRunIterator::operator*(&result)->Length;
                v20 = Scaleform::Render::Text::Paragraph::FormatRunIterator::operator*(&result);
                Scaleform::String::operator=(&v34, &v20->pFormat.pObject->Url);
              }
            }
            Scaleform::Render::Text::Paragraph::FormatRunIterator::operator++(&result);
          }
          while ( result.CurTextIndex < result.pText->Size );
          v5 = v32;
          v8 = v28;
          Size = v33;
        }
        v21 = result.PlaceHolder.pFormat.pObject;
        if ( result.PlaceHolder.pFormat.pObject )
        {
          if ( result.PlaceHolder.pFormat.pObject->RefCount-- == 1 )
          {
            Scaleform::Render::Text::TextFormat::~TextFormat(v21);
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v21);
          }
        }
        v3 = (__int64)v29;
        ++v5;
        v8 += 8i64;
        v32 = v5;
        v28 = v8;
      }
      while ( v5 < Size );
      v2 = this;
    }
    if ( (*(_QWORD *)(v34.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) != 0 )
    {
      v23 = Scaleform::Render::Text::StyledText::CopyStyledText(
              v2->pDocument.pObject->pDocument.pObject,
              v6,
              Length + v6);
      v24 = v2->pCSSData.pObject;
      v25 = v23;
      Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy>>::ExpandRange(
        &v24->UrlZones,
        v6,
        Length);
      range.Index = v6;
      range.Length = Length;
      if ( v25 )
        ++v25->RefCount;
      range.Data.SavedFmt.pObject = v25;
      *(_QWORD *)&range.Data.HitCount = 0i64;
      Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy>>::SetRange(
        &v24->UrlZones,
        &range);
      if ( range.Data.SavedFmt.pObject )
        Scaleform::RefCountNTSImpl::Release(range.Data.SavedFmt.pObject);
      if ( v25 )
        Scaleform::RefCountNTSImpl::Release(v25);
    }
    v26 = (void *)(v34.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v34.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v26);
  }
}

Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> *__fastcall Scaleform::GFx::TextField::CreateEditorKit(
        Scaleform::GFx::TextField *this,
        Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> *result)
{
  Scaleform::Render::Text::DocView *pObject; // rax
  Scaleform::GFx::Text::EditorKit *v5; // rbx
  Scaleform::GFx::Text::EditorKit *v6; // rax
  Scaleform::GFx::Text::EditorKit *v7; // rax
  Scaleform::GFx::Text::EditorKit *v8; // rbx
  __int64 v9; // rax
  Scaleform::RefCountVImpl *v10; // rax
  Scaleform::GFx::Text::EditorKit *v11; // rbx
  Scaleform::RefCountVImpl *v12; // rdi
  Scaleform::RefCountVImpl *v13; // rcx
  __int64 v14; // rax
  Scaleform::RefCountVImpl *v15; // rax
  Scaleform::GFx::Text::EditorKit *v16; // r14
  Scaleform::RefCountVImpl *v17; // rbx
  Scaleform::RefCountVImpl *v18; // rcx
  Scaleform::GFx::Text::EditorKit *v19; // rax
  int v21; // [rsp+40h] [rbp+8h] BYREF

  pObject = this->pDocument.pObject;
  v5 = (Scaleform::GFx::Text::EditorKit *)pObject->pEditorKit.pObject;
  if ( v5 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pObject->pEditorKit.pObject);
  result->pObject = v5;
  if ( v5 )
    return result;
  v21 = 74;
  v6 = (Scaleform::GFx::Text::EditorKit *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                            Scaleform::Memory::pGlobalHeap,
                                            this,
                                            176i64,
                                            &v21);
  if ( v6 )
  {
    Scaleform::GFx::Text::EditorKit::EditorKit(v6, this->pDocument.pObject);
    v8 = v7;
  }
  else
  {
    v8 = 0i64;
  }
  if ( result->pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)result->pObject);
  result->pObject = v8;
  if ( (this->pDef.pObject->Flags & 8) != 0 )
    v8->Flags |= 1u;
  if ( (this->pDef.pObject->Flags & 0x20) != 0 )
    result->pObject->Flags |= 2u;
  v9 = this->pASRoot->pMovieImpl->GetStateBagImpl(&this->pASRoot->pMovieImpl->Scaleform::GFx::StateBag);
  v10 = (Scaleform::RefCountVImpl *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24i64))(v9, 25i64);
  v11 = result->pObject;
  v12 = v10;
  if ( v10 )
    Scaleform::Render::RenderBuffer::AddRef(v10);
  v13 = (Scaleform::RefCountVImpl *)v11->pClipboard.pObject;
  if ( v13 )
    Scaleform::RefCountImpl::Release(v13);
  v11->pClipboard.pObject = (Scaleform::GFx::Clipboard *)v12;
  v14 = this->pASRoot->pMovieImpl->GetStateBagImpl(&this->pASRoot->pMovieImpl->Scaleform::GFx::StateBag);
  v15 = (Scaleform::RefCountVImpl *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24i64))(v14, 26i64);
  v16 = result->pObject;
  v17 = v15;
  if ( v15 )
    Scaleform::Render::RenderBuffer::AddRef(v15);
  v18 = (Scaleform::RefCountVImpl *)v16->pKeyMap.pObject;
  if ( v18 )
    Scaleform::RefCountImpl::Release(v18);
  v16->pKeyMap.pObject = (Scaleform::GFx::TextKeyMap *)v17;
  v19 = result->pObject;
  if ( (this->Flags & 0x100) != 0 )
    v19->Flags |= 4u;
  else
    v19->Flags &= ~4u;
  if ( v17 )
    Scaleform::RefCountImpl::Release(v17);
  if ( v12 )
    Scaleform::RefCountImpl::Release(v12);
  return result;
}

Scaleform::Ptr<Scaleform::Render::TreeNode> *__fastcall Scaleform::GFx::TextField::CreateRenderNode(
        Scaleform::GFx::TextField *this,
        Scaleform::Ptr<Scaleform::Render::TreeNode> *result,
        Scaleform::Render::ContextImpl::Context *context)
{
  Scaleform::Render::TreeText::NodeData *v6; // rax
  Scaleform::Render::ContextImpl::EntryData *v7; // rbx
  Scaleform::Render::TreeText *EntryHelper; // rbx

  v6 = (Scaleform::Render::TreeText::NodeData *)context->pHeap->Alloc(context->pHeap, 176i64, 0i64);
  v7 = v6;
  if ( v6 )
    Scaleform::Render::TreeText::NodeData::NodeData(v6);
  EntryHelper = (Scaleform::Render::TreeText *)Scaleform::Render::ContextImpl::Context::createEntryHelper(context, v7);
  Scaleform::Render::TreeText::Init(EntryHelper, this->pDocument.pObject);
  if ( EntryHelper )
    ++EntryHelper->RefCount;
  result->pObject = EntryHelper;
  if ( EntryHelper )
  {
    if ( EntryHelper->RefCount-- == 1 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(EntryHelper);
  }
  return result;
}

void __fastcall Scaleform::GFx::TextField::TextDocumentListener::Editor_OnChanged(
        Scaleform::GFx::TextField::TextDocumentListener *this,
        Scaleform::Render::Text::EditorKitBase *editor)
{
  Scaleform::GFx::DisplayObjectBase *p_RefCount; // rbx
  unsigned __int8 AvmObjOffset; // al
  __int64 v4; // rax
  unsigned __int8 v5; // al
  __int64 v6; // rax
  Scaleform::Render::TreeText *RenderNode; // rax

  p_RefCount = (Scaleform::GFx::DisplayObjectBase *)&this[-13].RefCount;
  Scaleform::Render::Text::DocView::GetText(
    *(Scaleform::Render::Text::DocView **)&this[-4].HandlersMask,
    (Scaleform::String *)&this[-13].RefCount + 32);
  AvmObjOffset = p_RefCount->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v4 = (__int64)(*(Scaleform::GFx::DisplayObjectBase_vtbl **)((char *)&p_RefCount->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                              + 4 * AvmObjOffset))->GetMatrix3D((Scaleform::GFx::DisplayObjectBase *)((char *)p_RefCount + 4 * AvmObjOffset));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 256i64))(v4);
  }
  v5 = p_RefCount->AvmObjOffset;
  if ( v5 )
  {
    v6 = (__int64)(*(Scaleform::GFx::DisplayObjectBase_vtbl **)((char *)&p_RefCount->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                              + 4 * v5))->GetMatrix3D((Scaleform::GFx::DisplayObjectBase *)((char *)p_RefCount + 4 * v5));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 192i64))(v6);
  }
  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(p_RefCount);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
}

__int64 __fastcall Scaleform::Render::Text::DocView::DocumentListener::Editor_OnCharacter(
        Scaleform::Render::Text::DocView::DocumentListener *this,
        Scaleform::Render::Text::EditorKitBase *__formal,
        wchar_t srcChar)
{
  return srcChar;
}

void __fastcall Scaleform::GFx::TextField::TextDocumentListener::Editor_OnCursorBlink(
        Scaleform::GFx::TextField::TextDocumentListener *this,
        Scaleform::Render::Text::EditorKitBase *editor)
{
  Scaleform::Render::TreeText *RenderNode; // rax

  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode((Scaleform::GFx::DisplayObjectBase *)&this[-13].RefCount);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
}

char __fastcall Scaleform::GFx::TextField::TextDocumentListener::Editor_OnInsertingText(
        Scaleform::GFx::TextField::TextDocumentListener *this,
        Scaleform::Render::Text::EditorKitBase *__formal,
        unsigned __int64 pos,
        unsigned __int64 len,
        const wchar_t *wstr)
{
  unsigned __int8 v5; // al
  __int64 v8; // rax

  v5 = *(&this[-9].HandlersMask + 5);
  if ( !v5 )
    return 1;
  v8 = (*(__int64 (__fastcall **)(char *, Scaleform::Render::Text::EditorKitBase *))(*(_QWORD *)((char *)&this[-12]
                                                                                               + 4 * v5
                                                                                               - 16)
                                                                                   + 32i64))(
         (char *)&this[-12] + 4 * v5 - 16,
         __formal);
  return (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64, const wchar_t *))(*(_QWORD *)v8 + 232i64))(
           v8,
           pos,
           len,
           wstr);
}

__int64 __fastcall Scaleform::Render::ProfileModifier::GetBlendMode(
        Scaleform::Render::ProfileModifier *this,
        Scaleform::Render::DrawModeType __formal,
        Scaleform::Render::PrimitiveFillType fill)
{
  return (unsigned int)fill;
}

char __fastcall Scaleform::GFx::TextField::TextDocumentListener::Editor_OnRemovingText(
        Scaleform::GFx::TextField::TextDocumentListener *this,
        Scaleform::Render::Text::EditorKitBase *__formal,
        unsigned __int64 pos,
        unsigned __int64 len)
{
  unsigned __int8 v4; // al
  __int64 v7; // rax

  v4 = *(&this[-9].HandlersMask + 5);
  if ( !v4 )
    return 1;
  v7 = (*(__int64 (__fastcall **)(char *, Scaleform::Render::Text::EditorKitBase *))(*(_QWORD *)((char *)&this[-12]
                                                                                               + 4 * v4
                                                                                               - 16)
                                                                                   + 32i64))(
         (char *)&this[-12] + 4 * v4 - 16,
         __formal);
  return (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64, _QWORD))(*(_QWORD *)v7 + 240i64))(
           v7,
           pos,
           len,
           0i64);
}

void __fastcall Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy>>::ExpandRange(
        Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> > *this,
        __int64 startPos,
        unsigned __int64 length)
{
  unsigned __int64 Size; // rdi
  __int64 NearestRangeIndex; // rax
  signed __int64 v8; // r9
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v9; // rcx
  __int64 Index; // r8
  __int64 v11; // rdx
  signed __int64 v12; // rax
  __int64 v13; // rcx

  Size = this->Ranges.Data.Size;
  if ( Size )
  {
    NearestRangeIndex = Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy>>::FindNearestRangeIndex(
                          this,
                          startPos);
    v8 = NearestRangeIndex;
    if ( NearestRangeIndex >= 0 )
    {
      if ( NearestRangeIndex >= Size )
        v8 = Size - 1;
    }
    else
    {
      v8 = 0i64;
    }
    if ( v8 < (__int64)Size )
    {
      v9 = &this->Ranges.Data.Data[v8];
      if ( v9 )
      {
        if ( (Index = v9->Index, startPos >= v9->Index) && (v11 = v9->Length, startPos <= v11 + Index - 1)
          || (v11 = v9->Length, v11 + Index == startPos) )
        {
          v9->Length = v11 + length;
        }
      }
    }
    v12 = this->Ranges.Data.Size;
    if ( v8 < v12 )
      ++v8;
    v13 = v8;
    while ( v13 >= 0 && v8 < (unsigned __int64)v12 )
    {
      this->Ranges.Data.Data[v13].Index += length;
      v12 = this->Ranges.Data.Size;
      if ( v8 < v12 )
      {
        ++v8;
        ++v13;
      }
    }
  }
}

unsigned __int64 __fastcall Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy>>::FindNearestRangeIndex(
        Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> > *this,
        __int64 index)
{
  unsigned __int64 Size; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rbx
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v9; // rdx
  __int64 v10; // rdi
  int v11; // eax
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v12; // rbx
  __int64 v13; // rdx
  int v14; // eax
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v15; // r9
  __int64 v16; // rdx
  int v17; // eax

  Size = this->Ranges.Data.Size;
  if ( !Size )
    return 0i64;
  v5 = 0i64;
  v6 = 0i64;
  v7 = Size - 1;
  if ( v7 )
  {
    while ( v7 != -1i64 )
    {
      v8 = (v7 + v5) >> 1;
      v9 = &this->Ranges.Data.Data[v8];
      v10 = v9->Index;
      if ( index < v9->Index )
        goto LABEL_8;
      if ( index <= (signed __int64)(v9->Length + v10 - 1) )
        return (v7 + v5) >> 1;
      if ( index >= v10 )
        v11 = LODWORD(v9->Length) - index + v10 - 1;
      else
LABEL_8:
        v11 = v10 - index;
      if ( !v11 )
        return (v7 + v5) >> 1;
      if ( v11 >= 0 )
      {
        v7 = v8 - 1;
      }
      else
      {
        v6 = v5;
        v5 = v8 + 1;
      }
      if ( v5 >= v7 )
        break;
    }
  }
  if ( v5 == v7 )
  {
    v12 = &this->Ranges.Data.Data[v5];
    v13 = v12->Index;
    if ( index < v12->Index )
      goto LABEL_19;
    if ( index <= (signed __int64)(v12->Length + v13 - 1) )
      return v5;
    if ( index >= v13 )
      v14 = LODWORD(v12->Length) - index + LODWORD(v12->Index) - 1;
    else
LABEL_19:
      v14 = v13 - index;
    if ( !v14 )
      return v5;
  }
  if ( v6 < v7 )
  {
    v15 = &this->Ranges.Data.Data[v6 + 1];
    do
    {
      v16 = v15->Index;
      if ( index < v15->Index )
        goto LABEL_29;
      if ( index <= (signed __int64)(v15->Length + v16 - 1) )
        return v6;
      if ( index >= v16 )
        v17 = LODWORD(v15->Length) - index + LODWORD(v15->Index) - 1;
      else
LABEL_29:
        v17 = v16 - index;
      if ( v17 >= 0 )
        break;
      ++v6;
      ++v15;
    }
    while ( v6 < v7 );
  }
  return v6;
}

Scaleform::Render::Text::CompositionStringBase *(__fastcall *__fastcall Scaleform::GFx::TextField::GetBeginIndex(
        Scaleform::GFx::TextField *this))(Scaleform::Render::Text::EditorKitBase *this)
{
  Scaleform::Render::Text::EditorKitBase *pObject; // rcx
  Scaleform::Render::Text::EditorKitBase_vtbl *v2; // rcx
  Scaleform::Render::Text::CompositionStringBase *(__fastcall *result)(Scaleform::Render::Text::EditorKitBase *); // rax

  pObject = this->pDocument.pObject->pEditorKit.pObject;
  if ( !pObject )
    return 0i64;
  v2 = pObject[1].__vftable;
  result = (Scaleform::Render::Text::CompositionStringBase *(__fastcall *)(Scaleform::Render::Text::EditorKitBase *))v2[1].~RefCountImplCore;
  if ( (char *)v2->GetCompositionString < (char *)result )
    return v2->GetCompositionString;
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::TextField::GetBounds(
        Scaleform::GFx::TextField *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *t)
{
  const Scaleform::Render::Rect<float> *ViewRect; // rax

  ViewRect = Scaleform::Render::Text::DocView::GetViewRect(this->pDocument.pObject);
  Scaleform::Render::Matrix2x4<float>::EncloseTransform((Scaleform::Render::Matrix2x4<float> *)t, result, ViewRect);
  return result;
}

Scaleform::GFx::TextField::CSSHolderBase *__fastcall Scaleform::GFx::TextField::GetCSSData(
        Scaleform::GFx::TextField *this)
{
  return this->pCSSData.pObject;
}

Scaleform::GFx::AS3::ClassTraits::fl::XMLList *__fastcall Scaleform::GFx::TextField::GetCaretIndex(
        Scaleform::GFx::TextField *this)
{
  Scaleform::Render::Text::EditorKitBase *pObject; // rcx
  bool v3; // al
  Scaleform::Render::Text::EditorKitBase *v4; // rcx
  Scaleform::Render::Text::EditorKitBase *v5; // rcx

  pObject = this->pDocument.pObject->pEditorKit.pObject;
  if ( pObject )
    v3 = pObject->IsReadOnly(pObject);
  else
    v3 = (this->pDef.pObject->Flags & 8) != 0;
  if ( (!v3
     || ((v4 = this->pDocument.pObject->pEditorKit.pObject) == 0i64 ? (v4 = (Scaleform::Render::Text::EditorKitBase *)(this->pDef.pObject->Flags >> 5)) : (Scaleform::Render::Text::EditorKitBase *)(LOWORD(v4) = LOWORD(v4[10].__vftable) >> 1),
         ((unsigned __int8)v4 & 1) != 0))
    && (v5 = this->pDocument.pObject->pEditorKit.pObject) != 0i64 )
  {
    return Scaleform::GFx::MovieImpl::GetHeap((Scaleform::GFx::AS3::XMLSupportImpl *)v5);
  }
  else
  {
    return (Scaleform::GFx::AS3::ClassTraits::fl::XMLList *)-1i64;
  }
}

Scaleform::GFx::TextFieldDef *__fastcall Scaleform::GFx::Button::GetCharacterDef(Scaleform::GFx::TextField *this)
{
  return this->pDef.pObject;
}

Scaleform::String *__fastcall Scaleform::GFx::TextField::TextDocumentListener::GetCharacterPath(
        Scaleform::GFx::TextField::TextDocumentListener *this,
        Scaleform::String *result)
{
  Scaleform::String::String(result);
  Scaleform::GFx::DisplayObject::GetAbsolutePath((Scaleform::GFx::DisplayObject *)&this[-13].RefCount, result);
  return result;
}

__int64 __fastcall Scaleform::GFx::TextField::GetCursorType(Scaleform::GFx::TextField *this)
{
  Scaleform::Render::Text::EditorKitBase *pObject; // rcx

  if ( (this->Flags & 0x20) != 0 )
    return 1i64;
  pObject = this->pDocument.pObject->pEditorKit.pObject;
  if ( pObject )
    LOWORD(pObject) = LOWORD(pObject[10].__vftable) >> 1;
  else
    pObject = (Scaleform::Render::Text::EditorKitBase *)(this->pDef.pObject->Flags >> 5);
  if ( ((unsigned __int8)pObject & 1) != 0 )
    return 2i64;
  else
    return Scaleform::GFx::InteractiveObject::GetCursorType(this);
}

Scaleform::Render::Text::CompositionStringBase *(__fastcall *__fastcall Scaleform::GFx::TextField::GetEndIndex(
        Scaleform::GFx::TextField *this))(Scaleform::Render::Text::EditorKitBase *this)
{
  Scaleform::Render::Text::EditorKitBase *pObject; // rcx
  Scaleform::Render::Text::EditorKitBase_vtbl *v2; // rcx
  Scaleform::Render::Text::CompositionStringBase *(__fastcall *result)(Scaleform::Render::Text::EditorKitBase *); // rax

  pObject = this->pDocument.pObject->pEditorKit.pObject;
  if ( !pObject )
    return 0i64;
  v2 = pObject[1].__vftable;
  result = (Scaleform::Render::Text::CompositionStringBase *(__fastcall *)(Scaleform::Render::Text::EditorKitBase *))v2[1].~RefCountImplCore;
  if ( (char *)result < (char *)v2->GetCompositionString )
    return v2->GetCompositionString;
  return result;
}

Scaleform::Render::FilterSet *__fastcall Scaleform::GFx::TextField::GetFilters(Scaleform::GFx::TextField *this)
{
  Scaleform::Render::TreeText *RenderNode; // rbp
  Scaleform::Render::TreeText::Filter *p_filtersBuf; // rbx
  __int64 v4; // rdi
  unsigned __int64 Filters; // rbp
  Scaleform::Render::FilterSet *v6; // rax
  Scaleform::Render::FilterSet *v7; // rax
  Scaleform::Render::FilterSet *v8; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  $8EDA14245F84505F2E4421D0FC94AFAE *i; // rdi
  Scaleform::Render::GlowFilter *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int8 v14; // r8
  int v15; // edx
  int v16; // eax
  __int64 v17; // rax
  float BlurX; // xmm0_4
  float BlurY; // xmm1_4
  Scaleform::Render::ShadowFilter *v20; // rax
  __int64 v21; // rax
  unsigned int Flags; // er8
  int v23; // edx
  int v24; // ecx
  Scaleform::RefCountVImpl *v26; // rcx
  Scaleform::Render::TreeText::Filter filtersBuf; // [rsp+30h] [rbp-D8h] BYREF

  if ( !Scaleform::GFx::DisplayObjectBase::GetRenderNode(this) || this->pFilters.pObject )
    return this->pFilters.pObject;
  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  p_filtersBuf = &filtersBuf;
  v4 = 3i64;
  do
  {
    p_filtersBuf->Type = 0;
    Scaleform::Render::TreeText::Filter::InitByDefaultValues(p_filtersBuf++);
    --v4;
  }
  while ( v4 );
  Filters = Scaleform::Render::TreeText::GetFilters(RenderNode, &filtersBuf, 3ui64);
  if ( Filters )
  {
    v6 = (Scaleform::Render::FilterSet *)Scaleform::Memory::pGlobalHeap->Alloc(
                                           Scaleform::Memory::pGlobalHeap,
                                           56i64,
                                           0i64);
    if ( v6 )
    {
      Scaleform::Render::FilterSet::FilterSet(v6, 0i64);
      v8 = v7;
    }
    else
    {
      v8 = 0i64;
    }
    pObject = (Scaleform::RefCountVImpl *)this->pFilters.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->pFilters.pObject = v8;
    for ( i = &filtersBuf.4; ; i = ($8EDA14245F84505F2E4421D0FC94AFAE *)((char *)i + 32) )
    {
      if ( LODWORD(i[-1].DropShadow.Distance) == 1 )
      {
        v20 = (Scaleform::Render::ShadowFilter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   80i64);
        if ( v20 )
        {
          Scaleform::Render::ShadowFilter::ShadowFilter(
            v20,
            i->DropShadow.Angle * 3.141592653589793 / 180.0,
            i->DropShadow.Distance,
            i->Blur.BlurX,
            i->Blur.BlurY,
            1u);
          v13 = v21;
        }
        else
        {
          v13 = 0i64;
        }
        *(float *)(v13 + 48) = i->Blur.Strength / 100.0;
        *(_DWORD *)(v13 + 52) = i->Glow.Color;
        Flags = i->Glow.Flags;
        v23 = (Flags >> 1) & 0x10 | 0x40;
        if ( (Flags & 0x40) == 0 )
          v23 = (Flags >> 1) & 0x10;
        v24 = v23 | 0x80;
        if ( (Flags & 0x80u) == 0 )
          v24 = v23;
        *(_DWORD *)(v13 + 24) = v24;
        goto LABEL_34;
      }
      if ( LODWORD(i[-1].DropShadow.Distance) == 2 )
        break;
      if ( LODWORD(i[-1].DropShadow.Distance) == 3 )
      {
        v11 = (Scaleform::Render::GlowFilter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 80i64);
        if ( v11 )
        {
          Scaleform::Render::GlowFilter::GlowFilter(v11, i->Blur.BlurX, i->Blur.BlurY, 1u);
          v13 = v12;
        }
        else
        {
          v13 = 0i64;
        }
        *(float *)(v13 + 48) = i->Blur.Strength / 100.0;
        *(_DWORD *)(v13 + 52) = i->Glow.Color;
        v14 = i->Glow.Flags;
        v15 = (v14 >> 1) & 0x10 | 0x40;
        if ( (v14 & 0x40) == 0 )
          v15 = (i->Glow.Flags >> 1) & 0x10;
        v16 = v15 | 0x80;
        if ( (v14 & 0x80u) == 0 )
          v16 = v15;
        *(_DWORD *)(v13 + 24) = v16;
        goto LABEL_34;
      }
LABEL_35:
      if ( !--Filters )
        return this->pFilters.pObject;
    }
    v17 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
            Scaleform::Memory::pGlobalHeap,
            80i64);
    v13 = v17;
    if ( v17 )
    {
      BlurX = i->Blur.BlurX;
      BlurY = i->Blur.BlurY;
      *(_QWORD *)v17 = &Scaleform::RefCountImplCore::`vftable';
      *(_DWORD *)(v17 + 8) = 1;
      *(_DWORD *)(v17 + 16) = 0;
      *(_BYTE *)(v17 + 20) = 0;
      *(_DWORD *)(v17 + 24) = 0;
      *(_DWORD *)(v17 + 28) = 1;
      *(_DWORD *)(v17 + 32) = 1120403456;
      *(_QWORD *)(v17 + 36) = 1120403456i64;
      *(_DWORD *)(v17 + 44) = 0;
      *(_DWORD *)(v17 + 48) = 1065353216;
      *(_QWORD *)(v17 + 64) = 0i64;
      *(_DWORD *)(v17 + 53) = 16711680;
      *(_BYTE *)(v17 + 52) = 0;
      *(_WORD *)(v17 + 57) = 0;
      *(_BYTE *)(v17 + 59) = 0;
      *(_DWORD *)(v17 + 24) &= 0xFFFFFFF8;
      *(_QWORD *)(v17 + 72) = 0i64;
      *(_QWORD *)v17 = &Scaleform::Render::BlurFilter::`vftable';
      *(_DWORD *)(v17 + 28) = 1;
      *(float *)(v17 + 32) = BlurX * 20.0;
      *(float *)(v17 + 36) = BlurY * 20.0;
      *(float *)(v17 + 48) = i->Blur.Strength / 100.0;
    }
    else
    {
      v13 = 0i64;
      MEMORY[0x30] = i->Blur.Strength / 100.0;
    }
LABEL_34:
    Scaleform::Render::FilterSet::AddFilter(this->pFilters.pObject, (Scaleform::Render::Filter *)v13);
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v13);
    goto LABEL_35;
  }
  v26 = (Scaleform::RefCountVImpl *)this->pFilters.pObject;
  if ( v26 )
    Scaleform::RefCountImpl::Release(v26);
  this->pFilters.pObject = 0i64;
  return 0i64;
}

Scaleform::GFx::ASString *__fastcall Scaleform::GFx::TextField::GetHtml(
        Scaleform::GFx::TextField *this,
        Scaleform::GFx::ASString *result)
{
  Scaleform::GFx::ASStringManager *StringManager; // rdi
  Scaleform::String *Html; // rax
  Scaleform::GFx::ASStringNode *StringNode; // rax
  void *v7; // rbx
  Scaleform::String resulta; // [rsp+30h] [rbp+8h] BYREF

  StringManager = Scaleform::GFx::InteractiveObject::GetStringManager(this);
  Html = Scaleform::Render::Text::DocView::GetHtml(this->pDocument.pObject, &resulta);
  StringNode = Scaleform::GFx::ASStringManager::CreateStringNode(
                 StringManager,
                 (const char *)((Html->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                 *(_QWORD *)(Html->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64);
  result->pNode = StringNode;
  ++StringNode->RefCount;
  v7 = (void *)(resulta.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((resulta.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v7);
  return result;
}

void __fastcall Scaleform::GFx::TextField::GetInitialFormats(
        Scaleform::GFx::TextField *this,
        Scaleform::Render::Text::TextFormat *ptextFmt,
        Scaleform::Render::Text::ParagraphFormat *pparaFmt)
{
  Scaleform::GFx::TextFieldDef *pObject; // rcx
  char v7; // r14
  unsigned __int16 TextHeight; // r12
  __int64 v9; // rdx
  Scaleform::GFx::ResourceBinding *pBinding; // r9
  unsigned int BindIndex; // er8
  Scaleform::RefCountVImpl **v12; // r14
  Scaleform::GFx::Resource *pResource; // rbx
  Scaleform::RefCountVImpl *v14; // rax
  Scaleform::GFx::MovieDefImpl *v15; // rbx
  Scaleform::GFx::TextFieldDef *v16; // rcx
  Scaleform::RefCountVImpl *v17; // rax
  __int64 v18; // rbx
  Scaleform::GFx::TextFieldDef *v19; // r8
  __int64 Id_low; // r9
  Scaleform::RefCountVImpl *v21; // rax
  Scaleform::GFx::Resource_vtbl *v22; // r14
  const char *v23; // rax
  Scaleform::GFx::TextFieldDef *v24; // rcx
  __int64 v25; // rax
  Scaleform::RefCountVImpl *pOwnerDefRes; // r15
  unsigned int Raw; // ecx
  Scaleform::GFx::TextFieldDef *v28; // rcx
  Scaleform::GFx::TextFieldDef::alignment Alignment; // edx
  __int32 v30; // edx
  __int32 v31; // edx
  Scaleform::GFx::TextFieldDef *v32; // rcx
  float LeftMargin; // xmm0_4
  unsigned __int16 v34; // cx
  float RightMargin; // xmm0_4
  float Indent; // xmm0_4
  float v37; // xmm0_4
  Scaleform::GFx::ResourceBindData pdata; // [rsp+38h] [rbp-19h] BYREF
  Scaleform::GFx::ResourceBindData presBindData; // [rsp+48h] [rbp-9h] BYREF
  Scaleform::Render::Text::ParagraphFormat v40; // [rsp+58h] [rbp+7h] BYREF

  Scaleform::Render::Text::TextFormat::InitByDefaultValues(ptextFmt);
  Scaleform::Render::Text::ParagraphFormat::InitByDefaultValues(pparaFmt);
  pObject = this->pDef.pObject;
  presBindData = 0i64;
  v7 = 1;
  TextHeight = -1;
  v9 = 0x7FFFFFFFFFFFFFFFi64;
  if ( !LOWORD(pObject->FontId.Id) )
  {
    if ( (*(_QWORD *)(pObject->FontClass.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) != 0 )
    {
      v14 = (Scaleform::RefCountVImpl *)((__int64 (__fastcall *)(Scaleform::GFx::TextField *, __int64))this->GetResourceMovieDef)(
                                          this,
                                          0x7FFFFFFFFFFFFFFFi64);
      v15 = (Scaleform::GFx::MovieDefImpl *)v14;
      if ( v14 )
        Scaleform::Render::RenderBuffer::AddRef(v14);
      if ( !Scaleform::GFx::MovieImpl::FindExportedResource(
              this->pASRoot->pMovieImpl,
              v15,
              &presBindData,
              &this->pDef.pObject->FontClass) )
      {
        Scaleform::Render::Text::TextFormat::SetFontName(ptextFmt, &this->pDef.pObject->FontClass);
        v7 = 0;
      }
      if ( v15 )
        Scaleform::GFx::Resource::Release(v15);
      if ( !v7 )
        goto LABEL_53;
    }
    goto LABEL_30;
  }
  pBinding = this->pBinding;
  pdata = 0i64;
  if ( pObject->pFont.HType == RH_Index )
  {
    BindIndex = pObject->pFont.BindIndex;
    if ( pBinding->Frozen && BindIndex < pBinding->ResourceCount )
    {
      v12 = (Scaleform::RefCountVImpl **)&pBinding->pResources[BindIndex];
      if ( *v12 )
      {
        Scaleform::Render::RenderBuffer::AddRef(*v12);
        if ( pdata.pResource.pObject )
          Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
      }
      pResource = (Scaleform::GFx::Resource *)*v12;
      pdata = *(Scaleform::GFx::ResourceBindData *)v12;
    }
    else
    {
      Scaleform::GFx::ResourceBinding::GetResourceData_Locked(pBinding, &pdata, BindIndex);
      pResource = pdata.pResource.pObject;
    }
  }
  else
  {
    pdata.pBinding = pBinding;
    if ( pObject->pFont.HType )
    {
      pResource = 0i64;
    }
    else
    {
      pResource = pObject->pFont.pResource;
      if ( pResource )
      {
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pObject->pFont.pResource);
        if ( pdata.pResource.pObject )
          Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
      }
    }
    pdata.pResource.pObject = pResource;
  }
  if ( pResource )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pResource);
    pResource = pdata.pResource.pObject;
  }
  if ( presBindData.pResource.pObject )
  {
    Scaleform::GFx::Resource::Release(presBindData.pResource.pObject);
    pResource = pdata.pResource.pObject;
  }
  presBindData.pBinding = pdata.pBinding;
  presBindData.pResource.pObject = pResource;
  if ( pResource )
  {
    Scaleform::GFx::Resource::Release(pResource);
LABEL_30:
    pResource = presBindData.pResource.pObject;
  }
  v16 = this->pDef.pObject;
  if ( LOWORD(v16->FontId.Id)
    || (*(_QWORD *)(v16->FontClass.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) != 0 )
  {
    if ( !pResource )
    {
      v17 = (Scaleform::RefCountVImpl *)((__int64 (__fastcall *)(Scaleform::GFx::TextField *, __int64))this->GetLog)(
                                          this,
                                          v9);
      v18 = (__int64)v17;
      if ( !v17 )
        goto LABEL_53;
      Scaleform::Render::RenderBuffer::AddRef(v17);
      v19 = this->pDef.pObject;
      Id_low = LOWORD(this->Id.Id);
      if ( (unsigned __int16)v19->FontId.Id )
        Scaleform::Log::LogError(
          (Scaleform::Log *)v18,
          "Resource for font id = %d is not found in text field id = %d, def text = '%s'",
          (unsigned __int16)v19->FontId.Id,
          Id_low,
          (const char *)((v19->DefaultText.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
      else
        Scaleform::Log::LogError(
          (Scaleform::Log *)v18,
          "Resource for font class = '%s' is not found in text field id = %d, def text = '%s'",
          (const char *)((v19->FontClass.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
          Id_low,
          (const char *)((v19->DefaultText.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
      goto LABEL_52;
    }
    if ( (((__int64 (__fastcall *)(Scaleform::GFx::Resource *, __int64))pResource->GetResourceTypeCode)(pResource, v9) & 0xFF00) != 512 )
    {
      v21 = (Scaleform::RefCountVImpl *)this->GetLog(this);
      v18 = (__int64)v21;
      if ( !v21 )
        goto LABEL_53;
      Scaleform::Render::RenderBuffer::AddRef(v21);
      Scaleform::Log::LogError(
        (Scaleform::Log *)v18,
        "Font id = %d is referring to non-font resource in text field id = %d, def text = '%s'",
        LOWORD(this->pDef.pObject->FontId.Id),
        LOWORD(this->Id.Id),
        (const char *)((this->pDef.pObject->DefaultText.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
      goto LABEL_52;
    }
    if ( presBindData.pResource.pObject )
    {
      v22 = presBindData.pResource.pObject[1].__vftable;
      v23 = (const char *)(*((__int64 (__fastcall **)(Scaleform::GFx::Resource_vtbl *))v22->~Resource + 1))(v22);
      Scaleform::Render::Text::TextFormat::SetFontName(ptextFmt, v23, 0xFFFFFFFFFFFFFFFFui64);
      v24 = this->pDef.pObject;
      if ( SLOBYTE(v24->Flags) >= 0
        || (*(_QWORD *)(v24->FontClass.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) != 0 )
      {
        Scaleform::Render::Text::TextFormat::SetBold(ptextFmt, (HIDWORD(v22->GetResourceReport) & 2) != 0);
        Scaleform::Render::Text::TextFormat::SetItalic(ptextFmt, BYTE4(v22->GetResourceReport) & 1);
        if ( (this->pDef.pObject->Flags & 0x100) == 0 && (HIDWORD(v22->GetResourceReport) & 0x40) == 0 )
        {
          v25 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                  Scaleform::Memory::pGlobalHeap,
                  64i64);
          v18 = v25;
          if ( v25 )
          {
            pOwnerDefRes = (Scaleform::RefCountVImpl *)presBindData.pBinding->pOwnerDefRes;
            *(_QWORD *)v25 = &Scaleform::RefCountImplCore::`vftable';
            *(_QWORD *)v25 = &Scaleform::Render::Text::FontHandle::`vftable';
            *(_QWORD *)(v25 + 16) = 0i64;
            *(_DWORD *)(v25 + 24) = 0;
            *(_DWORD *)(v25 + 8) = 1;
            Scaleform::StringLH::StringLH((Scaleform::StringLH *)(v25 + 32));
            *(_DWORD *)(v18 + 40) = 1065353216;
            Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v22);
            *(_QWORD *)(v18 + 48) = v22;
            *(_QWORD *)v18 = &Scaleform::GFx::FontHandle::`vftable';
            if ( pOwnerDefRes )
              Scaleform::Render::RenderBuffer::AddRef(pOwnerDefRes);
            *(_QWORD *)(v18 + 56) = pOwnerDefRes;
          }
          else
          {
            v18 = 0i64;
          }
          Scaleform::Render::Text::TextFormat::SetFontHandle(ptextFmt, (Scaleform::Render::Text::FontHandle *)v18);
          if ( v18 )
LABEL_52:
            Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v18);
        }
      }
    }
  }
LABEL_53:
  if ( (unsigned int)(int)this->pDef.pObject->TextHeight <= 0x10000 )
    TextHeight = (int)this->pDef.pObject->TextHeight;
  ptextFmt->PresentMask |= 8u;
  ptextFmt->FontSize = TextHeight;
  Raw = this->pDef.pObject->ColorV.Raw;
  ptextFmt->PresentMask |= 1u;
  ptextFmt->ColorV = Raw;
  v28 = this->pDef.pObject;
  v40.pAllocator = 0i64;
  memset(&v40.pTabStops, 0, 20);
  v40.RefCount = 1;
  Alignment = v28->Alignment;
  if ( Alignment )
  {
    v30 = Alignment - 1;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        if ( v31 == 1 )
        {
          pparaFmt->PresentMask &= ~0x200u;
          pparaFmt->PresentMask |= 0x401u;
        }
      }
      else
      {
        pparaFmt->PresentMask |= 0x601u;
      }
    }
    else
    {
      pparaFmt->PresentMask &= ~0x400u;
      pparaFmt->PresentMask |= 0x201u;
    }
  }
  else
  {
    pparaFmt->PresentMask &= 0xF9FFu;
    pparaFmt->PresentMask |= 1u;
  }
  v32 = this->pDef.pObject;
  if ( (v32->Flags & 0x200) != 0 )
  {
    LeftMargin = v32->LeftMargin;
    pparaFmt->PresentMask |= 0x10u;
    v34 = pparaFmt->PresentMask | 0x20;
    pparaFmt->LeftMargin = (int)(float)(LeftMargin * 0.050000001);
    RightMargin = this->pDef.pObject->RightMargin;
    pparaFmt->PresentMask = v34;
    v34 |= 4u;
    pparaFmt->RightMargin = (int)(float)(RightMargin * 0.050000001);
    Indent = this->pDef.pObject->Indent;
    pparaFmt->PresentMask = v34;
    pparaFmt->Indent = (int)(float)(Indent * 0.050000001);
    v37 = this->pDef.pObject->Leading * 0.050000001;
    pparaFmt->PresentMask = v34 | 8;
    pparaFmt->Leading = (int)v37;
  }
  Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&v40);
  if ( presBindData.pResource.pObject )
    Scaleform::GFx::Resource::Release(presBindData.pResource.pObject);
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::TextField::GetRectBounds(
        Scaleform::GFx::AS3::AvmBitmap *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *transform)
{
  this->GetBounds(this, result, transform);
  return result;
}

Scaleform::GFx::Text::EditorKit::RestrictParams *__fastcall Scaleform::GFx::TextField::GetRestrict(
        Scaleform::GFx::TextField *this)
{
  Scaleform::GFx::Text::EditorKit *pObject; // rcx

  pObject = (Scaleform::GFx::Text::EditorKit *)this->pDocument.pObject->pEditorKit.pObject;
  if ( pObject )
    return Scaleform::GFx::Text::EditorKit::GetRestrict(pObject);
  else
    return 0i64;
}

const Scaleform::GFx::Text::StyleManager *__fastcall Scaleform::GFx::TextField::GetStyleSheet(
        Scaleform::GFx::TextField *this)
{
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix3x4<float> *v2; // rax

  AvmObjOffset = this->AvmObjOffset;
  if ( !AvmObjOffset )
    return 0i64;
  v2 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                           + 4 * AvmObjOffset))->GetMatrix3D((char *)this + 4 * AvmObjOffset);
  return (const Scaleform::GFx::Text::StyleManager *)(*(__int64 (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v2->M[0][0] + 176i64))(v2);
}

Scaleform::GFx::ASString *__fastcall Scaleform::GFx::TextField::GetText(
        Scaleform::GFx::TextField *this,
        Scaleform::GFx::ASString *result,
        bool reqHtml)
{
  Scaleform::GFx::ASStringManager *StringManager; // rbp
  unsigned __int8 AvmObjOffset; // cl
  const Scaleform::Render::Matrix3x4<float> *v8; // rax
  Scaleform::GFx::ASStringNode *StringNode; // rax
  Scaleform::Render::Text::DocView *pObject; // rcx
  Scaleform::String *Html; // rax
  Scaleform::GFx::ASStringNode *v12; // rax
  void *v13; // rbx
  Scaleform::String resulta; // [rsp+48h] [rbp+20h] BYREF

  StringManager = Scaleform::GFx::InteractiveObject::GetStringManager(this);
  if ( reqHtml )
  {
    AvmObjOffset = this->AvmObjOffset;
    if ( AvmObjOffset )
    {
      v8 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                               + 4 * AvmObjOffset))->GetMatrix3D((char *)this + 4 * AvmObjOffset);
      if ( (*(unsigned __int8 (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v8->M[0][0]
                                                                                          + 184i64))(v8) )
      {
        StringNode = Scaleform::GFx::ASStringManager::CreateStringNode(
                       StringManager,
                       (const char *)((this->OriginalTextValue.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                       *(_QWORD *)(this->OriginalTextValue.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64);
        result->pNode = StringNode;
        ++StringNode->RefCount;
        return result;
      }
    }
    pObject = this->pDocument.pObject;
    if ( (this->Flags & 2) != 0 )
    {
      Html = Scaleform::Render::Text::DocView::GetHtml(pObject, &resulta);
      goto LABEL_9;
    }
  }
  else
  {
    pObject = this->pDocument.pObject;
  }
  Html = Scaleform::Render::Text::DocView::GetText(pObject, &resulta);
LABEL_9:
  v12 = Scaleform::GFx::ASStringManager::CreateStringNode(
          StringManager,
          (const char *)((Html->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
          *(_QWORD *)(Html->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64);
  result->pNode = v12;
  ++v12->RefCount;
  v13 = (void *)(resulta.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((resulta.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v13);
  return result;
}

__int64 __fastcall Scaleform::GFx::TextField::GetTextColor32(Scaleform::GFx::TextField *this)
{
  unsigned int ColorV; // ecx

  ColorV = this->pDocument.pObject->pDocument.pObject->pDefaultTextFormat.pObject->ColorV;
  return (unsigned __int8)ColorV | ((BYTE1(ColorV) | (BYTE2(ColorV) << 8)) << 8);
}

long double __fastcall Scaleform::GFx::TextField::GetTextHeight(Scaleform::GFx::TextField *this)
{
  return (float)(Scaleform::Render::Text::DocView::GetTextHeight(this->pDocument.pObject) * 0.050000001);
}

long double __fastcall Scaleform::GFx::TextField::GetTextWidth(Scaleform::GFx::TextField *this)
{
  return (float)(Scaleform::Render::Text::DocView::GetTextWidth(this->pDocument.pObject) * 0.050000001);
}

__int64 __fastcall Scaleform::GFx::TextField::GetTopMostMouseEntity(
        Scaleform::GFx::TextField *this,
        const Scaleform::Render::Point<float> *pt,
        Scaleform::GFx::DisplayObjectBase::TopMostDescr *pdescr)
{
  Scaleform::GFx::TextField *pParent; // rbx
  __int64 result; // rax
  Scaleform::GFx::DisplayObject *Mask; // rax
  __int64 v8; // r8
  Scaleform::GFx::DisplayObject *v9; // r14
  __int64 v10; // r8
  __int64 p_ScreenToWorld; // rsi
  Scaleform::Render::Text::DocView *pObject; // rcx
  unsigned __int8 AvmObjOffset; // al
  __int64 v14; // rax
  const Scaleform::GFx::InteractiveObject *pIgnoreMC; // rax
  float y; // xmm1_4
  Scaleform::Render::Point<float> p; // [rsp+30h] [rbp-D0h] BYREF
  Scaleform::Render::Point<float> ptOut; // [rsp+38h] [rbp-C8h] BYREF
  Scaleform::Render::Matrix3x4<float> pmat; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::Render::Matrix2x4<float> v20; // [rsp+70h] [rbp-90h] BYREF
  __int128 v21; // [rsp+90h] [rbp-70h]
  __int128 v22; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v23; // [rsp+B0h] [rbp-50h]
  __int128 v24; // [rsp+C0h] [rbp-40h]
  __int128 v25; // [rsp+D0h] [rbp-30h]

  pdescr->pResult = 0i64;
  pParent = this;
  if ( (this->pDef.pObject->Flags & 0x1000) != 0
    || (this->Scaleform::GFx::InteractiveObject::Flags & 0x800) != 0
    || !this->GetVisible(this)
    || pdescr->pIgnoreMC == pParent )
  {
    return 2i64;
  }
  Scaleform::GFx::DisplayObjectBase::TransformPointToLocal(pParent, &p, pt, 1, 0i64);
  Mask = Scaleform::GFx::DisplayObject::GetMask(pParent);
  v9 = Mask;
  if ( !Mask || !Mask->IsUsedAsMask(Mask) || (v9->Flags & 0x10) != 0 )
    goto LABEL_40;
  if ( Scaleform::GFx::DisplayObjectBase::Has3D(v9) )
  {
    *(_OWORD *)&v20.M[1][0] = 0x3F80000000000000ui64;
    v23 = 0x3F80000000000000ui64;
    *((_QWORD *)&v25 + 1) = 0x3F80000000000000i64;
    *(_OWORD *)&pmat.M[1][0] = 0x3F80000000000000ui64;
    *(_OWORD *)&v20.M[0][0] = 0x3F800000ui64;
    *((_QWORD *)&v21 + 1) = 1065353216i64;
    v22 = 0x3F800000ui64;
    *((_QWORD *)&v24 + 1) = 1065353216i64;
    *(_OWORD *)&pmat.M[0][0] = 0x3F800000ui64;
    *(_QWORD *)&pmat.M[2][2] = 1065353216i64;
    *(_QWORD *)&v21 = 0i64;
    *(_QWORD *)&v24 = 0i64;
    *(_QWORD *)&v25 = 0i64;
    *(_QWORD *)&pmat.M[2][0] = 0i64;
    Scaleform::GFx::DisplayObjectBase::GetWorldMatrix3D(v9, &pmat);
    p_ScreenToWorld = (__int64)&pParent->pASRoot->pMovieImpl->ScreenToWorld;
    if ( v9->GetProjectionMatrix3D(v9, (Scaleform::Render::Matrix4x4<float> *)&v22, 0) )
    {
      *(_OWORD *)(p_ScreenToWorld + 16) = v22;
      *(_OWORD *)(p_ScreenToWorld + 32) = v23;
      *(_OWORD *)(p_ScreenToWorld + 48) = v24;
      *(_OWORD *)(p_ScreenToWorld + 64) = v25;
    }
    if ( v9->GetViewMatrix3D(v9, (Scaleform::Render::Matrix3x4<float> *)&v20, 0) )
    {
      *(Scaleform::Render::Matrix2x4<float> *)(p_ScreenToWorld + 80) = v20;
      *(_OWORD *)(p_ScreenToWorld + 112) = v21;
    }
    *(Scaleform::Render::Matrix3x4<float> *)(p_ScreenToWorld + 128) = pmat;
    Scaleform::Render::ScreenToWorld::GetWorldPoint((Scaleform::Render::ScreenToWorld *)p_ScreenToWorld, &ptOut);
  }
  else
  {
    *(_OWORD *)&v20.M[0][0] = _xmm;
    *(_OWORD *)&v20.M[1][0] = _xmm;
    *(_OWORD *)&pmat.M[0][0] = _xmm;
    *(_OWORD *)&pmat.M[1][0] = _xmm;
    Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(v9, (Scaleform::Render::Matrix2x4<float> *)&pmat);
    Scaleform::Render::Matrix2x4<float>::SetInverse(&v20, (const Scaleform::Render::Matrix2x4<float> *)&pmat);
    *(_OWORD *)&pmat.M[0][0] = _xmm;
    *(_OWORD *)&pmat.M[1][0] = _xmm;
    Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(pParent, (Scaleform::Render::Matrix2x4<float> *)&pmat);
    ptOut.x = (float)((float)((float)((float)(pmat.M[1][0] * v20.M[0][1]) + (float)(pmat.M[0][0] * v20.M[0][0])) * p.x)
                    + (float)((float)((float)(pmat.M[1][1] * v20.M[0][1]) + (float)(v20.M[0][0] * pmat.M[0][1])) * p.y))
            + (float)(v20.M[0][3] + (float)((float)(v20.M[0][1] * pmat.M[1][3]) + (float)(v20.M[0][0] * pmat.M[0][3])));
    ptOut.y = (float)((float)((float)((float)(pmat.M[1][0] * v20.M[1][1]) + (float)(pmat.M[0][0] * v20.M[1][0])) * p.x)
                    + (float)((float)((float)(pmat.M[1][1] * v20.M[1][1]) + (float)(v20.M[1][0] * pmat.M[0][1])) * p.y))
            + (float)(v20.M[1][3] + (float)((float)(v20.M[1][1] * pmat.M[1][3]) + (float)(v20.M[1][0] * pmat.M[0][3])));
  }
  LOBYTE(v10) = 1;
  if ( v9->PointTestLocal(v9, &ptOut, v10) )
  {
LABEL_40:
    if ( !pParent->ClipDepth )
    {
      LOBYTE(v8) = 1;
      if ( pParent->PointTestLocal(pParent, &p, v8) )
      {
        if ( pdescr->TestAll
          || Scaleform::GFx::TextField::IsSelectable(pParent)
          || !Scaleform::GFx::TextField::IsSelectable(pParent)
          && (pParent->Flags & 2) != 0
          && (pObject = pParent->pDocument.pObject, (pObject->pDocument.pObject->RTFlags & 1) != 0)
          && Scaleform::Render::Text::DocView::IsUrlAtPoint(pObject, p.x, p.y, 0i64) )
        {
LABEL_37:
          pdescr->pResult = pParent;
          return 1i64;
        }
        pParent = (Scaleform::GFx::TextField *)pParent->pParent;
        if ( pParent )
        {
          while ( (pParent->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x400) != 0 )
          {
            if ( pdescr->TestAll
              || (AvmObjOffset = pParent->AvmObjOffset) != 0
              && (v14 = ((__int64 (__fastcall *)(__int64))(*(Scaleform::GFx::TextField_vtbl **)((char *)&pParent->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                                              + 4 * AvmObjOffset))->CreateRenderNode)((__int64)pParent + 4 * AvmObjOffset),
                  (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 96i64))(v14)) )
            {
              pIgnoreMC = pdescr->pIgnoreMC;
              if ( !pIgnoreMC || pParent != pIgnoreMC )
                goto LABEL_37;
            }
            pParent = (Scaleform::GFx::TextField *)pParent->pParent;
            if ( !pParent )
              break;
          }
        }
      }
    }
    result = 3i64;
    y = p.y;
    pdescr->LocalPt.x = p.x;
    pdescr->LocalPt.y = y;
  }
  else
  {
    result = 2i64;
  }
  pdescr->pResult = 0i64;
  return result;
}

__int64 __fastcall ActorOption::GetActorType(Scaleform::GFx::AS3::Instances::fl::XMLProcInstr *this)
{
  return 4i64;
}

double __fastcall Scaleform::GFx::TextField::GetX(Scaleform::GFx::TextField *this)
{
  Scaleform::GFx::DisplayObjectBase::GeomDataType pgeomData; // [rsp+20h] [rbp-78h] BYREF

  *(_OWORD *)&pgeomData.OrigMatrix.M[0][0] = _xmm;
  *(_OWORD *)&pgeomData.XScale = _xmm;
  *(_QWORD *)&pgeomData.X = 0i64;
  *(_OWORD *)&pgeomData.OrigMatrix.M[1][0] = _xmm;
  *(_OWORD *)&pgeomData.Z = _xmm;
  pgeomData.Rotation = 0.0;
  *(_OWORD *)&pgeomData.XRotation = 0i64;
  Scaleform::GFx::TextField::UpdateAndGetGeomData(this, &pgeomData, 0);
  return (double)pgeomData.X * 0.05;
}

double __fastcall Scaleform::GFx::TextField::GetY(Scaleform::GFx::TextField *this)
{
  Scaleform::GFx::DisplayObjectBase::GeomDataType pgeomData; // [rsp+20h] [rbp-78h] BYREF

  *(_OWORD *)&pgeomData.OrigMatrix.M[0][0] = _xmm;
  *(_OWORD *)&pgeomData.XScale = _xmm;
  *(_QWORD *)&pgeomData.X = 0i64;
  *(_OWORD *)&pgeomData.OrigMatrix.M[1][0] = _xmm;
  *(_OWORD *)&pgeomData.Z = _xmm;
  pgeomData.Rotation = 0.0;
  *(_OWORD *)&pgeomData.XRotation = 0i64;
  Scaleform::GFx::TextField::UpdateAndGetGeomData(this, &pgeomData, 0);
  return (double)pgeomData.Y * 0.05;
}

bool __fastcall Scaleform::GFx::TextField::HasStyleSheet(Scaleform::GFx::TextField *this)
{
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix3x4<float> *v2; // rax

  AvmObjOffset = this->AvmObjOffset;
  if ( !AvmObjOffset )
    return 0;
  v2 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                           + 4 * AvmObjOffset))->GetMatrix3D((char *)this + 4 * AvmObjOffset);
  return (*(__int64 (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v2->M[0][0] + 184i64))(v2);
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index,
        const Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *val)
{
  unsigned __int64 Size; // r8
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v7; // rbx
  unsigned __int64 Length; // rcx
  Scaleform::Render::Text::StyledText *pObject; // rax

  Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Data,
    this->Data.Size + 1);
  Size = this->Data.Size;
  if ( index < Size - 1 )
    memmove(&this->Data.Data[index + 1], &this->Data.Data[index], 32 * (Size - index) - 32);
  v7 = &this->Data.Data[index];
  if ( v7 )
  {
    Length = val->Length;
    v7->Index = val->Index;
    v7->Length = Length;
    pObject = val->Data.SavedFmt.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v7->Data.SavedFmt.pObject = val->Data.SavedFmt.pObject;
    v7->Data.HitCount = val->Data.HitCount;
    v7->Data.OverCount = val->Data.OverCount;
  }
}

bool __fastcall Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::Iterator::IsFinished(
        Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator *this)
{
  __int64 Index; // rdx

  Index = this->Index;
  return Index < 0 || Index >= this->pArray->Ranges.Data.Size;
}

bool __fastcall Scaleform::GFx::TextField::IsFocusAllowed(
        Scaleform::GFx::TextField *this,
        Scaleform::GFx::MovieImpl *proot,
        unsigned int controllerIdx)
{
  unsigned int FocusedControllerIdx; // eax

  if ( (this->pDef.pObject->Flags & 0x1000) != 0 )
    return 0;
  FocusedControllerIdx = this->FocusedControllerIdx;
  return (FocusedControllerIdx == -1 || FocusedControllerIdx == controllerIdx)
      && Scaleform::GFx::InteractiveObject::IsFocusAllowed(this, proot, controllerIdx);
}

bool __fastcall Scaleform::GFx::TextField::IsFocusAllowed(
        Scaleform::GFx::TextField *this,
        Scaleform::GFx::MovieImpl *proot,
        unsigned int controllerIdx)
{
  unsigned int FocusedControllerIdx; // eax

  if ( (this->pDef.pObject->Flags & 0x1000) != 0 )
    return 0;
  FocusedControllerIdx = this->FocusedControllerIdx;
  return (FocusedControllerIdx == -1 || FocusedControllerIdx == controllerIdx)
      && Scaleform::GFx::InteractiveObject::IsFocusAllowed(this, proot, controllerIdx);
}

bool __fastcall Scaleform::GFx::TextField::IsFocusEnabled(
        Scaleform::GFx::TextField *this,
        Scaleform::GFx::FocusMovedType fmt)
{
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix3x4<float> *v4; // rax

  AvmObjOffset = this->AvmObjOffset;
  if ( !AvmObjOffset )
    return 0;
  v4 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                           + 4 * AvmObjOffset))->GetMatrix3D((char *)this + 4 * AvmObjOffset);
  return (*(__int64 (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *, _QWORD))(*(_QWORD *)&v4->M[0][0]
                                                                                        + 160i64))(
           v4,
           (unsigned int)fmt);
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

bool __fastcall Scaleform::GFx::TextField::IsReadOnly(Scaleform::GFx::TextField *this)
{
  Scaleform::Render::Text::EditorKitBase *pObject; // rcx

  pObject = this->pDocument.pObject->pEditorKit.pObject;
  if ( pObject )
    return ((__int64 (__fastcall *)(Scaleform::Render::Text::EditorKitBase *, Scaleform::GFx::TextField *))pObject->IsReadOnly)(
             pObject,
             this);
  else
    return (this->pDef.pObject->Flags & 8) != 0;
}

__int64 __fastcall Scaleform::GFx::TextField::IsSelectable(Scaleform::GFx::TextField *this)
{
  Scaleform::Render::Text::EditorKitBase *pObject; // rdx
  __int16 v2; // cx

  pObject = this->pDocument.pObject->pEditorKit.pObject;
  if ( pObject )
    v2 = LOWORD(pObject[10].__vftable) >> 1;
  else
    v2 = this->pDef.pObject->Flags >> 5;
  return v2 & 1;
}

bool __fastcall Scaleform::GFx::TextField::IsTabable(Scaleform::GFx::TextField *this)
{
  Scaleform::Render::Text::EditorKitBase *pObject; // rcx
  unsigned int v4; // eax
  unsigned __int8 AvmObjOffset; // cl
  const Scaleform::Render::Matrix3x4<float> *v6; // rax
  bool v8; // zf
  char v9; // al

  if ( (this->pDef.pObject->Flags & 0x1000) != 0 || !this->GetVisible(this) )
    return 0;
  pObject = this->pDocument.pObject->pEditorKit.pObject;
  if ( pObject ? pObject->IsReadOnly(pObject) : (this->pDef.pObject->Flags & 8) != 0 )
    return 0;
  v4 = this->Scaleform::GFx::InteractiveObject::Flags & 0x60;
  if ( v4 || (AvmObjOffset = this->AvmObjOffset) == 0 )
  {
    if ( !v4 || (v8 = v4 == 96, v9 = 1, v8) )
      v9 = 0;
    return v9 == 0;
  }
  else
  {
    v6 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                             + 4 * AvmObjOffset))->GetMatrix3D((char *)this + 4 * AvmObjOffset);
    return (*(__int64 (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v6->M[0][0] + 168i64))(v6);
  }
}

char __fastcall Scaleform::GFx::TextField::IsUrlTheSame(
        Scaleform::GFx::TextField *this,
        unsigned int mouseIndex,
        const Scaleform::Range *urlRange)
{
  Scaleform::GFx::TextField::CSSHolderBase *pObject; // r10
  unsigned int Size; // er9
  unsigned int v5; // eax
  __int64 Index; // rbx
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *Data; // rdi
  Scaleform::GFx::TextField::CSSHolderBase_vtbl **v8; // r11
  __int64 v9; // rcx
  signed __int64 v10; // rdx

  pObject = this->pCSSData.pObject;
  if ( !pObject )
    return 1;
  Size = pObject->UrlZones.Ranges.Data.Size;
  v5 = 0;
  if ( !Size )
    return 1;
  Index = urlRange->Index;
  Data = pObject->UrlZones.Ranges.Data.Data;
  v8 = &pObject->__vftable + mouseIndex;
  while ( 1 )
  {
    v9 = v5;
    v10 = Data[v9].Index;
    if ( (signed __int64)(urlRange->Length + Index) > v10
      && (signed __int64)(Data[v9].Length + v10) > Index
      && *((_DWORD *)v8 + 8) != v5 + 1 )
    {
      break;
    }
    if ( ++v5 >= Size )
      return 1;
  }
  return 0;
}

bool __fastcall Scaleform::GFx::TextField::IsUrlUnderMouseCursor(
        Scaleform::GFx::TextField *this,
        unsigned int mouseIndex,
        Scaleform::Render::Point<float> *pPnt,
        Scaleform::Range *purlRangePos)
{
  Scaleform::GFx::MovieImpl *pMovieImpl; // r8
  __int64 v9; // rax
  float v10; // xmm9_4
  float v11; // xmm8_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  Scaleform::Render::Matrix2x4<float> v14; // [rsp+20h] [rbp-69h] BYREF
  Scaleform::Render::Matrix2x4<float> v15; // [rsp+40h] [rbp-49h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+60h] [rbp-29h] BYREF

  pMovieImpl = this->pASRoot->pMovieImpl;
  if ( !pMovieImpl )
    return 0;
  if ( mouseIndex < 6 )
    v9 = (__int64)&pMovieImpl->mMouseState[mouseIndex];
  else
    v9 = 0i64;
  v10 = *(float *)(v9 + 56);
  v11 = *(float *)(v9 + 60);
  *(_OWORD *)&m.M[0][0] = _xmm;
  *(_OWORD *)&m.M[1][0] = _xmm;
  Scaleform::GFx::DisplayObject::GetWorldMatrixWithScroll(this, &m);
  v14 = m;
  v15 = m;
  Scaleform::Render::Matrix2x4<float>::SetInverse(&v14, &v15);
  v12 = (float)((float)(v14.M[0][1] * v11) + (float)(v14.M[0][0] * v10)) + v14.M[0][3];
  v13 = (float)((float)(v14.M[1][1] * v11) + (float)(v14.M[1][0] * v10)) + v14.M[1][3];
  if ( pPnt )
  {
    pPnt->x = v12;
    pPnt->y = v13;
  }
  return Scaleform::Render::Text::DocView::IsUrlAtPoint(this->pDocument.pObject, v12, v13, purlRangePos);
}

void __fastcall Scaleform::GFx::TextField::NotifyChanged(Scaleform::GFx::TextField *this)
{
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix3x4<float> *v3; // rax
  Scaleform::Render::TreeText *RenderNode; // rax

  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v3 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                             + 4 * AvmObjOffset))->GetMatrix3D((char *)this + 4 * AvmObjOffset);
    (*(void (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v3->M[0][0] + 192i64))(v3);
  }
  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
}

char __fastcall Scaleform::GFx::TextField::OnCharEvent(
        Scaleform::GFx::TextField *this,
        unsigned int wcharCode,
        unsigned int controllerIdx)
{
  Scaleform::Render::Text::EditorKitBase *pObject; // rcx
  char *v8; // rcx
  __int64 v9; // rax

  if ( (this->pDef.pObject->Flags & 0x1000) != 0 )
    return 0;
  if ( this->pASRoot->pMovieImpl )
  {
    pObject = this->pDocument.pObject->pEditorKit.pObject;
    if ( pObject )
    {
      if ( (!pObject->IsReadOnly(pObject) || (unsigned __int8)Scaleform::GFx::TextField::IsSelectable(this))
        && this->FocusedControllerIdx == controllerIdx )
      {
        v8 = (char *)this + 4 * this->AvmObjOffset;
        v9 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 32i64))(v8);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 216i64))(
               v9,
               (unsigned __int16)wcharCode,
               controllerIdx) )
        {
          Scaleform::GFx::Text::EditorKit::OnChar(
            (Scaleform::GFx::Text::EditorKit *)this->pDocument.pObject->pEditorKit.pObject,
            wcharCode);
        }
      }
    }
  }
  return 1;
}

void __fastcall Scaleform::GFx::TextField::OnEventLoad(Scaleform::GFx::TextField *this)
{
  const char *v2; // rdx
  Scaleform::GFx::DisplayObjectBase::GeomDataType pgeomData; // [rsp+20h] [rbp-78h] BYREF

  if ( Scaleform::String::GetLength(&this->pDef.pObject->DefaultText) )
    v2 = (const char *)((this->pDef.pObject->DefaultText.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  else
    v2 = &pnewText;
  Scaleform::GFx::TextField::SetTextValue(this, v2, (this->Flags & 2) != 0, 0);
  Scaleform::Render::Text::DocView::Format(this->pDocument.pObject);
  Scaleform::GFx::InteractiveObject::OnEventLoad(this);
  if ( !this->pGeomData )
  {
    *(_OWORD *)&pgeomData.OrigMatrix.M[0][0] = _xmm;
    *(_OWORD *)&pgeomData.XScale = _xmm;
    *(_QWORD *)&pgeomData.X = 0i64;
    *(_OWORD *)&pgeomData.OrigMatrix.M[1][0] = _xmm;
    *(_OWORD *)&pgeomData.Z = _xmm;
    pgeomData.Rotation = 0.0;
    *(_OWORD *)&pgeomData.XRotation = 0i64;
    Scaleform::GFx::TextField::UpdateAndGetGeomData(this, &pgeomData, 1);
  }
}

void __fastcall Scaleform::GFx::TextField::OnEventUnload(Scaleform::GFx::TextField *this)
{
  Scaleform::GFx::MovieImpl *pMovieImpl; // rcx
  Scaleform::RefCountVImpl *v3; // rax
  Scaleform::Render::TreeText *RenderNode; // rax

  this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags |= 0x1000u;
  pMovieImpl = this->pASRoot->pMovieImpl;
  if ( pMovieImpl )
  {
    v3 = (Scaleform::RefCountVImpl *)pMovieImpl->GetStateAddRef(
                                       &pMovieImpl->Scaleform::GFx::StateBag,
                                       State_Type_Count|0x10);
    if ( v3 )
      Scaleform::RefCountImpl::Release(v3);
  }
  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
  Scaleform::GFx::InteractiveObject::OnEventUnload(this);
}

void __fastcall Scaleform::GFx::TextField::OnFocus(
        Scaleform::GFx::TextField *this,
        Scaleform::GFx::InteractiveObject::FocusEventType event,
        Scaleform::GFx::InteractiveObject *oldOrNewFocusCh,
        unsigned int controllerIdx,
        Scaleform::GFx::FocusMovedType fmt)
{
  unsigned __int16 Flags; // cx
  Scaleform::Render::Text::DocView *pObject; // rdx
  Scaleform::Render::Text::EditorKitBase *v11; // rax
  __int16 v12; // ax
  __int64 Length; // rax
  Scaleform::Render::Text::DocView *v14; // rax
  Scaleform::GFx::Text::EditorKit *v15; // rcx
  Scaleform::Render::TreeText *RenderNode; // rax
  Scaleform::Render::Text::EditorKitBase *v17; // rcx
  Scaleform::RefCountVImpl *v19; // rax
  __int64 *v20; // rbx
  Scaleform::Render::Rect<float> *v21; // rax
  __int64 v22; // r9
  __m128 v23; // xmm0
  Scaleform::Render::Text::DocView *v24; // rax
  Scaleform::Render::Text::DocView *v25; // rax
  Scaleform::Render::Text::EditorKitBase *v26; // rbx
  Scaleform::Render::TreeText *v27; // rax
  Scaleform::RefCountVImpl *v28; // rax
  Scaleform::RefCountVImpl *v29; // rbx
  Scaleform::Render::Text::EditorKitBase *v30; // rcx
  bool v31; // al
  Scaleform::Render::Text::EditorKitBase *v32; // rcx
  bool v33; // r8
  bool v34; // dl
  Scaleform::Render::Text::EditorKitBase *v35; // rcx
  __m128 v36; // [rsp+30h] [rbp-88h] BYREF
  Scaleform::Render::Matrix2x4<float> pmat; // [rsp+40h] [rbp-78h] BYREF
  char v38[16]; // [rsp+60h] [rbp-58h] BYREF

  Flags = this->pDef.pObject->Flags;
  if ( (Flags & 0x1000) == 0 )
  {
    if ( event == MouseMove )
    {
      pObject = this->pDocument.pObject;
      v11 = pObject->pEditorKit.pObject;
      if ( v11 )
        v12 = LOWORD(v11[10].__vftable) >> 1;
      else
        LOBYTE(v12) = Flags >> 5;
      if ( (v12 & 1) != 0 && (this->Flags & 0x400) == 0 && fmt == GFx_FocusMovedByKeyboard )
      {
        Length = Scaleform::Render::Text::StyledText::GetLength(pObject->pDocument.pObject);
        Scaleform::GFx::TextField::SetSelection(this, 0i64, Length);
      }
      v14 = this->pDocument.pObject;
      this->FocusedControllerIdx = controllerIdx;
      v15 = (Scaleform::GFx::Text::EditorKit *)v14->pEditorKit.pObject;
      if ( v15 )
      {
        Scaleform::GFx::Text::EditorKit::OnSetFocus(v15);
        RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
        Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
        v17 = this->pDocument.pObject->pEditorKit.pObject;
        if ( !(v17 ? v17->IsReadOnly(v17) : (this->pDef.pObject->Flags & 8) != 0) )
        {
          v19 = (Scaleform::RefCountVImpl *)this->pASRoot->pMovieImpl->GetStateAddRef(
                                              &this->pASRoot->pMovieImpl->Scaleform::GFx::StateBag,
                                              9i64);
          v20 = (__int64 *)v19;
          if ( v19 )
          {
            Scaleform::RefCountImpl::Release(v19);
            *(_OWORD *)&pmat.M[0][0] = _xmm;
            *(_OWORD *)&pmat.M[1][0] = _xmm;
            Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(this, &pmat);
            v21 = this->GetBounds(this, v38, &pmat);
            v22 = *v20;
            v23 = *(__m128 *)v21;
            v24 = this->pDocument.pObject;
            v36 = _mm_mul_ps(v23, (__m128)_xmm);
            (*(void (__fastcall **)(__int64 *, bool, __m128 *))(v22 + 8))(v20, (v24->Flags & 4) != 0, &v36);
          }
        }
      }
    }
    else if ( event == Unknown )
    {
      v25 = this->pDocument.pObject;
      this->FocusedControllerIdx = -1;
      v26 = v25->pEditorKit.pObject;
      if ( v26 )
      {
        if ( (unsigned __int8)Scaleform::GFx::TextField::IsSelectable(this) && (this->Flags & 0x200) == 0 )
          Scaleform::Render::Text::DocView::SetSelection(
            (Scaleform::Render::Text::DocView *)v26[1].__vftable,
            0i64,
            0i64,
            1);
        Scaleform::GFx::Text::EditorKit::OnKillFocus((Scaleform::GFx::Text::EditorKit *)this->pDocument.pObject->pEditorKit.pObject);
        v27 = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
        Scaleform::Render::TreeText::NotifyLayoutChanged(v27);
        if ( !Scaleform::GFx::TextField::IsReadOnly(this) )
        {
          v28 = (Scaleform::RefCountVImpl *)this->pASRoot->pMovieImpl->GetStateAddRef(
                                              &this->pASRoot->pMovieImpl->Scaleform::GFx::StateBag,
                                              9i64);
          v29 = v28;
          if ( v28 )
          {
            Scaleform::RefCountImpl::Release(v28);
            v29->Release(v29);
          }
        }
      }
    }
    v30 = this->pDocument.pObject->pEditorKit.pObject;
    if ( v30 )
      v31 = v30->IsReadOnly(v30);
    else
      v31 = (this->pDef.pObject->Flags & 8) != 0;
    if ( !v31
      || ((v32 = this->pDocument.pObject->pEditorKit.pObject) == 0i64 ? (v32 = (Scaleform::Render::Text::EditorKitBase *)(this->pDef.pObject->Flags >> 5)) : (Scaleform::Render::Text::EditorKitBase *)(LOWORD(v32) = LOWORD(v32[10].__vftable) >> 1),
          ((unsigned __int8)v32 & 1) != 0) )
    {
      if ( event == MouseMove )
      {
        v33 = 1;
        v34 = 1;
      }
      else
      {
        v33 = 0;
        v34 = 0;
      }
      Scaleform::GFx::TextField::ResetBlink(this, v34, v33);
      Scaleform::GFx::InteractiveObject::OnFocus(this, event, oldOrNewFocusCh, controllerIdx, fmt);
      v35 = this->pDocument.pObject->pEditorKit.pObject;
      if ( v35 && !v35->IsReadOnly(v35) )
      {
        this->Flags |= 0x4000u;
        if ( !Scaleform::GFx::InteractiveObject::IsInPlayList(this) )
          Scaleform::GFx::InteractiveObject::AddToPlayList(this);
        Scaleform::GFx::InteractiveObject::ModifyOptimizedPlayListLocal<Scaleform::GFx::TextField>(this);
      }
    }
    else if ( event == Unknown || this->IsFocusEnabled(this, fmt) )
    {
      Scaleform::GFx::InteractiveObject::OnFocus(this, event, oldOrNewFocusCh, controllerIdx, fmt);
    }
  }
}

char __fastcall Scaleform::GFx::TextField::OnKeyEvent(
        Scaleform::GFx::TextField *this,
        const Scaleform::GFx::EventId *id,
        int *pkeyMask)
{
  Scaleform::GFx::MovieImpl *pMovieImpl; // rdx
  __int64 v8; // rcx
  int v9; // ebp
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix3x4<float> *v11; // rax
  Scaleform::Render::Text::DocView *v12; // rcx
  int v13; // edx
  Scaleform::Render::Text::EditorKitBase *v14; // rcx
  Scaleform::Render::Text::DocView *pObject; // rcx
  int KeyCode; // edx
  Scaleform::KeyModifiers specKeysState; // [rsp+30h] [rbp+8h] BYREF

  if ( (this->pDef.pObject->Flags & 0x1000) != 0 )
    return 0;
  pMovieImpl = this->pASRoot->pMovieImpl;
  if ( !pMovieImpl )
    return 0;
  v8 = pMovieImpl->FocusGroupIndexes[id->ControllerIndex];
  v9 = 1 << v8;
  if ( (*(_WORD *)pkeyMask & (unsigned __int16)(1 << v8)) != 0
    || !Scaleform::GFx::FocusGroupDescr::IsFocused(&pMovieImpl->FocusGroups[v8], this) )
  {
    return 0;
  }
  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v11 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                              + 4 * AvmObjOffset))->GetMatrix3D((char *)this + 4 * AvmObjOffset);
    (*(void (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *, const Scaleform::GFx::EventId *, int *))(*(_QWORD *)&v11->M[0][0] + 144i64))(
      v11,
      id,
      pkeyMask);
  }
  if ( !this->pDocument.pObject->pEditorKit.pObject
    || Scaleform::GFx::TextField::IsReadOnly(this) && !(unsigned __int8)Scaleform::GFx::TextField::IsSelectable(this) )
  {
    goto LABEL_19;
  }
  if ( id->Id != 64 )
  {
    if ( id->Id == 128 )
    {
      pObject = this->pDocument.pObject;
      KeyCode = id->KeyCode;
      specKeysState.States = id->KeysState.States | 0x80;
      Scaleform::GFx::Text::EditorKit::OnKeyUp(
        (Scaleform::GFx::Text::EditorKit *)pObject->pEditorKit.pObject,
        KeyCode,
        &specKeysState);
    }
    goto LABEL_19;
  }
  v12 = this->pDocument.pObject;
  v13 = id->KeyCode;
  specKeysState.States = id->KeysState.States | 0x80;
  Scaleform::GFx::Text::EditorKit::OnKeyDown(
    (Scaleform::GFx::Text::EditorKit *)v12->pEditorKit.pObject,
    v13,
    &specKeysState);
  if ( id->KeyCode != 45 )
  {
LABEL_19:
    *pkeyMask |= (unsigned __int16)v9;
    return 1;
  }
  v14 = this->pDocument.pObject->pEditorKit.pObject;
  if ( v14 )
    Scaleform::GFx::TextField::SetOverwriteMode(this, !(LOBYTE(v14[10].__vftable) >> 7));
  else
    Scaleform::GFx::TextField::SetOverwriteMode(this, 1);
  *pkeyMask |= (unsigned __int16)v9;
  return 1;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

bool __fastcall Scaleform::GFx::TextField::OnMouseEvent(
        Scaleform::GFx::TextField *this,
        const Scaleform::GFx::EventId *event)
{
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix3x4<float> *v5; // rax

  if ( (this->pDef.pObject->Flags & 0x1000) != 0 )
    return 0;
  ((void (__fastcall *)(Scaleform::GFx::TextField *))this->PropagateMouseEvent)(this);
  AvmObjOffset = this->AvmObjOffset;
  if ( !AvmObjOffset )
    return 0;
  v5 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                           + 4 * AvmObjOffset))->GetMatrix3D((char *)this + 4 * AvmObjOffset);
  return (*(__int64 (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *, const Scaleform::GFx::EventId *))(*(_QWORD *)&v5->M[0][0] + 208i64))(
           v5,
           event);
}

char __fastcall Scaleform::GFx::TextField::OnMouseWheelEvent(Scaleform::GFx::TextField *this, int mwDelta)
{
  signed int v3; // eax
  signed int MaxVScroll; // edi
  Scaleform::Render::TreeText *RenderNode; // rax

  if ( (this->Flags & 0x80) == 0 )
    return 0;
  v3 = Scaleform::Render::Text::DocView::GetVScrollOffset(this->pDocument.pObject) - mwDelta;
  MaxVScroll = 0;
  if ( v3 >= 0 )
    MaxVScroll = v3;
  if ( MaxVScroll > (int)Scaleform::Render::Text::DocView::GetMaxVScroll(this->pDocument.pObject) )
    MaxVScroll = Scaleform::Render::Text::DocView::GetMaxVScroll(this->pDocument.pObject);
  Scaleform::Render::Text::DocView::SetVScrollOffset(this->pDocument.pObject, MaxVScroll);
  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
  return 1;
}

bool __fastcall Scaleform::GFx::TextField::PointTestLocal(
        Scaleform::GFx::TextField *this,
        const Scaleform::Render::Point<float> *pt,
        unsigned __int8 hitTestMask)
{
  bool result; // al
  const Scaleform::Render::Rect<float> *ViewRect; // rax
  float y; // xmm1_4

  if ( (this->Scaleform::GFx::InteractiveObject::Flags & 0x800) != 0
    || (hitTestMask & 2) != 0 && !this->GetVisible(this) )
  {
    return 0;
  }
  ViewRect = Scaleform::Render::Text::DocView::GetViewRect(this->pDocument.pObject);
  result = 0;
  if ( ViewRect->x2 >= pt->x && pt->x >= ViewRect->x1 )
  {
    y = pt->y;
    if ( ViewRect->y2 >= y && y >= ViewRect->y1 )
      return 1;
  }
  return result;
}

void __fastcall Scaleform::GFx::TextField::ProcessImageTags(
        Scaleform::GFx::TextField *this,
        Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *imageInfoArray)
{
  unsigned __int64 Size; // rdi
  Scaleform::Render::TreeText *RenderNode; // rax
  Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *v5; // rax
  __int64 i; // r13
  __int64 Data; // rbx
  Scaleform::GFx::TextField_vtbl *v8; // rax
  Scaleform::RefCountVImpl *v9; // rax
  Scaleform::GFx::MovieDefImpl *v10; // r15
  const Scaleform::String *v11; // r12
  char IsProtocolImage; // bl
  unsigned __int64 v13; // rbx
  Scaleform::Log *v14; // rax
  Scaleform::Render::ImageBase *pImage; // rdi
  unsigned __int64 v16; // rbx
  Scaleform::GFx::MovieImpl *pMovieImpl; // rsi
  Scaleform::GFx::MovieDefImpl *v18; // rax
  unsigned __int64 v19; // rbx
  Scaleform::Log *v20; // rax
  Scaleform::RefCountVImpl *v21; // rax
  bool v22; // si
  Scaleform::MemoryHeap *v23; // rax
  Scaleform::GFx::StateBag_vtbl *v24; // rax
  Scaleform::RefCountVImpl *v25; // rbx
  Scaleform::GFx::StateBag_vtbl *v26; // rax
  Scaleform::RefCountVImpl *v27; // rdi
  Scaleform::RefCountVImpl *v28; // rbx
  Scaleform::GFx::StateBag_vtbl *v29; // rax
  Scaleform::RefCountVImpl *v30; // rax
  Scaleform::RefCountVImpl *v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // rcx
  int v35; // eax
  float v36; // xmm5_4
  float v37; // xmm4_4
  __m128 v38; // xmm3
  int v39; // eax
  __m128i v40; // xmm0
  __m128 v41; // xmm2
  __int64 v42; // rax
  __m128 *v43; // rax
  unsigned __int64 v44; // r8
  Scaleform::LogMessageId id; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v46; // [rsp+28h] [rbp-D8h]
  Scaleform::Ptr<Scaleform::GFx::ImageResource> result; // [rsp+30h] [rbp-D0h] BYREF
  Scaleform::GFx::ResourceBindData presBindData; // [rsp+38h] [rbp-C8h] BYREF
  Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *v49; // [rsp+48h] [rbp-B8h]
  Scaleform::Ptr<Scaleform::Log> v50; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+58h] [rbp-A8h]
  int v52; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::MemoryHeap *pObject; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+70h] [rbp-90h]
  int v55; // [rsp+74h] [rbp-8Ch]
  __int128 v56; // [rsp+78h] [rbp-88h]
  __int128 v57; // [rsp+88h] [rbp-78h]
  int v58; // [rsp+98h] [rbp-68h] BYREF
  Scaleform::MemoryHeap *v59; // [rsp+A0h] [rbp-60h]
  int v60; // [rsp+A8h] [rbp-58h]
  int v61; // [rsp+ACh] [rbp-54h]
  __int128 v62; // [rsp+B0h] [rbp-50h]
  __int128 v63; // [rsp+C0h] [rbp-40h]
  int v64; // [rsp+D0h] [rbp-30h] BYREF
  int v65; // [rsp+D4h] [rbp-2Ch]
  int v66; // [rsp+D8h] [rbp-28h]
  int v67; // [rsp+DCh] [rbp-24h]

  Size = imageInfoArray->Data.Size;
  v49 = imageInfoArray;
  v46 = Size;
  if ( Size )
  {
    RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
    v5 = v49;
    for ( i = 0i64; ; i += 64i64 )
    {
      Data = (__int64)v5->Data.Data;
      v8 = this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
      v51 = Data;
      presBindData = 0i64;
      v9 = (Scaleform::RefCountVImpl *)v8->GetResourceMovieDef(this);
      v10 = (Scaleform::GFx::MovieDefImpl *)v9;
      if ( !v9 )
        goto LABEL_9;
      Scaleform::Render::RenderBuffer::AddRef(v9);
      v11 = (const Scaleform::String *)(Data + i + 8);
      IsProtocolImage = Scaleform::GFx::LoaderImpl::IsProtocolImage(v11, 0i64, 0i64);
      if ( IsProtocolImage )
        break;
      if ( Scaleform::GFx::MovieImpl::FindExportedResource(this->pASRoot->pMovieImpl, v10, &presBindData, v11) )
      {
        if ( (((__int64 (__fastcall *)(Scaleform::GFx::Resource *))presBindData.pResource.pObject->GetResourceTypeCode)(presBindData.pResource.pObject) & 0xFF00) == 256 )
          break;
        presBindData.pResource.pObject->GetResourceTypeCode(presBindData.pResource.pObject);
      }
      else if ( this->GetLog(this) )
      {
        v13 = v11->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
        v14 = this->GetLog(this);
        Scaleform::Log::LogWarning(
          v14,
          "ProcessImageTags: can't find a resource for export name '%s'\n",
          (const char *)(v13 + 12));
      }
LABEL_8:
      Scaleform::GFx::Resource::Release(v10);
LABEL_9:
      if ( presBindData.pResource.pObject )
        Scaleform::GFx::Resource::Release(presBindData.pResource.pObject);
LABEL_22:
      v5 = v49;
      v46 = --Size;
      if ( !Size )
        return;
    }
    pImage = 0i64;
    if ( IsProtocolImage )
    {
      pObject = v10->pLoaderImpl.pObject->pWeakResourceLib.pObject->pImageHeap.pObject;
      v26 = v10->Scaleform::GFx::MovieDef::Scaleform::GFx::StateBag::__vftable;
      v52 = 1;
      v54 = 0;
      v55 = 1;
      v56 = 0i64;
      v57 = 0i64;
      v27 = (Scaleform::RefCountVImpl *)v26->GetStateAddRef(
                                          &v10->Scaleform::GFx::StateBag,
                                          State_Type_Count|State_MaskNode);
      v28 = (Scaleform::RefCountVImpl *)v10->GetStateAddRef(
                                          &v10->Scaleform::GFx::StateBag,
                                          State_OrigScale9Parent|State_MaskNode);
      *(Scaleform::Ptr<Scaleform::Log> *)&v56 = (Scaleform::Ptr<Scaleform::Log>)Scaleform::GFx::StateBag::GetLog(
                                                                                  &v10->Scaleform::GFx::StateBag,
                                                                                  &v50)->pObject;
      *((_QWORD *)&v56 + 1) = v28;
      *(_QWORD *)&v57 = v27;
      if ( v50.pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v50.pObject);
      if ( v28 )
        Scaleform::RefCountImpl::Release(v28);
      if ( v27 )
        Scaleform::RefCountImpl::Release(v27);
      v29 = v10->Scaleform::GFx::MovieDef::Scaleform::GFx::StateBag::__vftable;
      *((_QWORD *)&v57 + 1) = this->pASRoot->pMovieImpl;
      v30 = (Scaleform::RefCountVImpl *)v29->GetStateAddRef(
                                          &v10->Scaleform::GFx::StateBag,
                                          State_OrigNodeBounds|State_MaskNode);
      v31 = v30;
      if ( !v30 )
      {
        id.Id = 135168;
        Scaleform::LogDebugMessage(
          (Scaleform::LogMessageId)&id,
          "Image resource creation failed - ImageCreator not installed");
LABEL_51:
        v44 = v11->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
        id.Id = 135168;
        Scaleform::LogDebugMessage(
          (Scaleform::LogMessageId)&id,
          "Image '%s' wasn't created in ProcessImageTags",
          (const char *)(v44 + 12));
LABEL_19:
        Scaleform::GFx::Resource::Release(v10);
        if ( presBindData.pResource.pObject )
          Scaleform::GFx::Resource::Release(presBindData.pResource.pObject);
        Size = v46;
        goto LABEL_22;
      }
      Scaleform::RefCountImpl::Release(v30);
      pImage = (Scaleform::Render::ImageBase *)((__int64 (__fastcall *)(Scaleform::RefCountVImpl *, int *, const Scaleform::String *))v31->AddRef)(
                                                 v31,
                                                 &v52,
                                                 v11);
    }
    else
    {
      v16 = v11->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
      pMovieImpl = this->pASRoot->pMovieImpl;
      v18 = this->GetResourceMovieDef(this);
      Scaleform::GFx::MovieImpl::GetImageResourceByLinkageId(pMovieImpl, &result, v18, (const char *)(v16 + 12));
      if ( !result.pObject )
      {
        if ( this->GetLog(this) )
        {
          v19 = v11->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
          v20 = this->GetLog(this);
          Scaleform::Log::LogWarning(v20, "ProcessImageTags: can't load the image '%s'\n", (const char *)(v19 + 12));
        }
        if ( result.pObject )
          Scaleform::GFx::Resource::Release(result.pObject);
        goto LABEL_19;
      }
      if ( result.pObject->pImage->GetImageType(result.pObject->pImage) )
      {
        pImage = result.pObject->pImage;
        if ( pImage )
          pImage->AddRef(result.pObject->pImage);
      }
      else
      {
        v21 = (Scaleform::RefCountVImpl *)v10->GetStateAddRef(
                                            &v10->Scaleform::GFx::StateBag,
                                            State_OrigNodeBounds|State_MaskNode);
        v22 = v21 == 0i64;
        if ( v21 )
          Scaleform::RefCountImpl::Release(v21);
        if ( v22 )
        {
          id.Id = 135168;
          Scaleform::LogDebugMessage((Scaleform::LogMessageId)&id, "ImageCreator is null in ProcessImageTags");
        }
        else
        {
          v23 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
          v58 = 3;
          v59 = v23;
          v24 = v10->Scaleform::GFx::MovieDef::Scaleform::GFx::StateBag::__vftable;
          v60 = 1;
          v61 = 1;
          v62 = 0i64;
          v63 = 0i64;
          v25 = (Scaleform::RefCountVImpl *)v24->GetStateAddRef(
                                              &v10->Scaleform::GFx::StateBag,
                                              State_OrigNodeBounds|State_MaskNode);
          pImage = (Scaleform::Render::ImageBase *)((__int64 (__fastcall *)(Scaleform::RefCountVImpl *, int *, Scaleform::Render::ImageBase *))v25->__vftable[1].AddRef)(
                                                     v25,
                                                     &v58,
                                                     result.pObject->pImage);
          Scaleform::RefCountImpl::Release(v25);
        }
      }
      if ( result.pObject )
        Scaleform::GFx::Resource::Release(result.pObject);
    }
    if ( !pImage )
      goto LABEL_51;
    pImage->GetRect(pImage, (Scaleform::Render::Rect<unsigned long> *)&v64);
    v32 = v51;
    v33 = *(_QWORD *)(v51 + i);
    pImage->AddRef(pImage);
    v34 = *(_QWORD *)(v33 + 16);
    if ( v34 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16i64))(v34);
    *(_QWORD *)(v33 + 16) = pImage;
    v35 = *(_DWORD *)(v32 + i + 40);
    v36 = (float)(v66 - v64);
    v37 = (float)(v67 - v65);
    if ( !v35 )
      v35 = 20 * (v66 - v64);
    v38 = 0i64;
    v38.m128_f32[0] = (float)v35;
    v39 = *(_DWORD *)(v32 + i + 44);
    if ( !v39 )
      v39 = 20 * (v67 - v65);
    v40 = _mm_cvtsi32_si128(*(_DWORD *)(v32 + i + 48));
    v41 = 0i64;
    *(_DWORD *)(*(_QWORD *)(v32 + i) + 32i64) = v38.m128_i32[0];
    *(float *)(*(_QWORD *)(v32 + i) + 36i64) = (float)v39;
    v41.m128_f32[0] = (float)v39 / v37;
    v38.m128_f32[0] = v38.m128_f32[0] / v36;
    *(float *)(*(_QWORD *)(v32 + i) + 28i64) = (float)((float)(v37 * 20.0) + _mm_cvtepi32_ps(v40).m128_f32[0])
                                             * 0.050000001;
    v42 = *(_QWORD *)(v32 + i);
    *(float *)v40.m128i_i32 = *(float *)(v42 + 60) + 0.0;
    *(float *)(v42 + 76) = COERCE_FLOAT(*(_DWORD *)(v42 + 28) ^ _xmm) + *(float *)(v42 + 76);
    *(_DWORD *)(v42 + 60) = v40.m128i_i32[0];
    v43 = *(__m128 **)(v32 + i);
    v43[3] = _mm_mul_ps(_mm_shuffle_ps(v38, v38, 0), v43[3]);
    v43[4] = _mm_mul_ps(_mm_shuffle_ps(v41, v41, 0), v43[4]);
    this->pDocument.pObject->RTFlags |= 2u;
    pImage->Release(pImage);
    Size = v46;
    goto LABEL_8;
  }
}

void __fastcall Scaleform::GFx::TextField::PropagateMouseEvent(
        Scaleform::GFx::TextField *this,
        const Scaleform::GFx::EventId *id)
{
  Scaleform::GFx::MovieImpl *pMovieImpl; // r12
  __int64 ControllerIndex; // rax
  __int64 v6; // r14
  Scaleform::GFx::MouseState *v7; // rdi
  Scaleform::WeakPtrProxy *pObject; // rdx
  Scaleform::GFx::TextField *v9; // r15
  Scaleform::RefCountWeakSupportImpl *v10; // rax
  int RefCount; // eax
  bool v13; // di
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix3x4<float> *v15; // rax
  Scaleform::Render::Text::EditorKitBase *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r13
  Scaleform::GFx::TextField::CSSHolderBase *v20; // rcx
  __int64 v21; // rax
  float v22; // xmm1_4
  __int64 v23; // rdx
  __int64 v24; // r13
  Scaleform::GFx::TextField::CSSHolderBase *v25; // rcx
  __int64 v26; // rax
  int v27; // xmm1_4
  __int64 v28; // rax
  Scaleform::GFx::MouseState *v29; // r13
  float y; // xmm1_4
  unsigned int v31; // edx
  unsigned int v32; // er14
  unsigned int Flags; // edx
  unsigned int v34; // eax
  Scaleform::Range purlRangePos; // [rsp+28h] [rbp-29h] BYREF
  Scaleform::Render::Point<float> p; // [rsp+38h] [rbp-19h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+48h] [rbp-9h] BYREF

  pMovieImpl = this->pASRoot->pMovieImpl;
  if ( pMovieImpl && (this->pDef.pObject->Flags & 0x1000) == 0 )
  {
    if ( id->Id == 8 )
      Scaleform::GFx::InteractiveObject::DoMouseDrag(this, id->ControllerIndex);
    ControllerIndex = (unsigned int)id->ControllerIndex;
    v6 = 0i64;
    if ( (unsigned int)ControllerIndex < 6 )
      v7 = &pMovieImpl->mMouseState[ControllerIndex];
    else
      v7 = 0i64;
    pObject = v7->TopmostEntity.pProxy.pObject;
    v9 = 0i64;
    if ( v7->TopmostEntity.pProxy.pObject )
    {
      v10 = pObject->pObject;
      if ( v10 )
      {
        v9 = (Scaleform::GFx::TextField *)pObject->pObject;
        RefCount = v10->RefCount;
        if ( RefCount )
        {
          v9->RefCount = RefCount + 1;
          ++v9->RefCount;
          Scaleform::RefCountNTSImpl::Release(v9);
        }
        else
        {
          v9 = 0i64;
        }
      }
      else
      {
        if ( pObject->RefCount-- == 1 )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        v7->TopmostEntity.pProxy.pObject = 0i64;
      }
    }
    v13 = 0;
    if ( v9 != this || id->Id == 0x4000 )
    {
      AvmObjOffset = this->AvmObjOffset;
      if ( AvmObjOffset )
      {
        v15 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                  + 4 * AvmObjOffset))->GetMatrix3D((char *)this + 4 * AvmObjOffset);
        if ( (*(unsigned __int8 (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v15->M[0][0]
                                                                                            + 184i64))(v15) )
        {
          if ( (this->Flags & 2) != 0 && (this->pDocument.pObject->pDocument.pObject->RTFlags & 1) != 0 )
          {
            v13 = Scaleform::GFx::TextField::ChangeUrlFormat(this, Link_release, id->ControllerIndex, 0i64) != 0;
            if ( Scaleform::GFx::TextField::ChangeUrlFormat(this, Link_rollout, id->ControllerIndex, 0i64) || v13 )
              v13 = 1;
          }
        }
      }
    }
    if ( v9 != this )
    {
      v16 = this->pDocument.pObject->pEditorKit.pObject;
      if ( !v16 || ((__int64)v16[10].__vftable & 0x20) == 0 )
        goto LABEL_106;
    }
    if ( !this->GetVisible(this) )
    {
LABEL_109:
      if ( v9 )
        Scaleform::RefCountNTSImpl::Release(v9);
      return;
    }
    v17 = id->Id;
    if ( id->Id != 8 )
    {
      if ( v17 == 16 )
      {
        if ( Scaleform::GFx::TextField::HasStyleSheet(this)
          && (this->Flags & 2) != 0
          && (this->pDocument.pObject->pDocument.pObject->RTFlags & 1) != 0 )
        {
          v23 = (unsigned int)id->ControllerIndex;
          v24 = (unsigned int)v23 < 6 ? (__int64)&pMovieImpl->mMouseState[v23] : 0i64;
          purlRangePos.Index = 0i64;
          purlRangePos.Length = 0i64;
          if ( Scaleform::GFx::TextField::IsUrlUnderMouseCursor(this, v23, 0i64, &purlRangePos) )
          {
            v25 = this->pCSSData.pObject;
            if ( v25 )
            {
              if ( v25->HasASStyleSheet(v25)
                && (*(_BYTE *)(v24 + 48) & 1) != 0
                && (Scaleform::GFx::TextField::ChangeUrlFormat(this, Link_press, id->ControllerIndex, &purlRangePos)
                 || v13) )
              {
                v13 = 1;
              }
            }
          }
        }
        if ( !this->pDocument.pObject->pEditorKit.pObject )
          goto LABEL_106;
        v26 = (unsigned int)id->ControllerIndex;
        if ( (unsigned int)v26 < 6 )
          v6 = (__int64)&pMovieImpl->mMouseState[v26];
        *(_OWORD *)&m.M[0][0] = _xmm;
        *(_OWORD *)&m.M[1][0] = _xmm;
        Scaleform::GFx::DisplayObject::GetWorldMatrixWithScroll(this, &m);
        v27 = *(_DWORD *)(v6 + 60);
        LODWORD(purlRangePos.Index) = *(_DWORD *)(v6 + 56);
        HIDWORD(purlRangePos.Index) = v27;
        Scaleform::Render::Matrix2x4<float>::TransformByInverse(
          &m,
          &p,
          (const Scaleform::Render::Point<float> *)&purlRangePos);
        Scaleform::GFx::Text::EditorKit::OnMouseDown(
          (Scaleform::GFx::Text::EditorKit *)this->pDocument.pObject->pEditorKit.pObject,
          p.x,
          p.y,
          *(_DWORD *)(v6 + 48));
      }
      else
      {
        if ( v17 != 32 && v17 != 4096 )
          goto LABEL_106;
        if ( Scaleform::GFx::TextField::HasStyleSheet(this)
          && (this->Flags & 2) != 0
          && (this->pDocument.pObject->pDocument.pObject->RTFlags & 1) != 0 )
        {
          v18 = (unsigned int)id->ControllerIndex;
          if ( (unsigned int)v18 < 6 )
            v19 = (__int64)&pMovieImpl->mMouseState[v18];
          else
            v19 = 0i64;
          purlRangePos.Index = 0i64;
          purlRangePos.Length = 0i64;
          if ( Scaleform::GFx::TextField::IsUrlUnderMouseCursor(this, v18, 0i64, &purlRangePos) )
          {
            v20 = this->pCSSData.pObject;
            if ( v20 )
            {
              if ( v20->HasASStyleSheet(v20)
                && (*(_BYTE *)(v19 + 48) & 1) == 0
                && (Scaleform::GFx::TextField::ChangeUrlFormat(this, Link_release, id->ControllerIndex, &purlRangePos)
                 || v13) )
              {
                v13 = 1;
              }
            }
          }
          if ( Scaleform::GFx::TextField::ChangeUrlFormat(this, Link_release, id->ControllerIndex, 0i64) || v13 )
            v13 = 1;
        }
        if ( !this->pDocument.pObject->pEditorKit.pObject )
          goto LABEL_106;
        v21 = (unsigned int)id->ControllerIndex;
        if ( (unsigned int)v21 < 6 )
          v6 = (__int64)&pMovieImpl->mMouseState[v21];
        *(_OWORD *)&m.M[0][0] = _xmm;
        *(_OWORD *)&m.M[1][0] = _xmm;
        Scaleform::GFx::DisplayObject::GetWorldMatrixWithScroll(this, &m);
        v22 = *(float *)(v6 + 60);
        p.x = *(float *)(v6 + 56);
        p.y = v22;
        Scaleform::Render::Matrix2x4<float>::TransformByInverse(
          &m,
          (Scaleform::Render::Point<float> *)&purlRangePos,
          &p);
        Scaleform::GFx::Text::EditorKit::OnMouseUp(
          (Scaleform::GFx::Text::EditorKit *)this->pDocument.pObject->pEditorKit.pObject,
          *(float *)&purlRangePos.Index,
          *((float *)&purlRangePos.Index + 1),
          *(_DWORD *)(v6 + 48));
      }
      if ( !Scaleform::GFx::InteractiveObject::IsInPlayList(this) )
        Scaleform::GFx::InteractiveObject::AddToPlayList(this);
      Scaleform::GFx::InteractiveObject::ModifyOptimizedPlayListLocal<Scaleform::GFx::TextField>(this);
LABEL_106:
      if ( v13 )
        Scaleform::GFx::TextField::NotifyChanged(this);
      this->OnEvent(this, id);
      goto LABEL_109;
    }
    v28 = (unsigned int)id->ControllerIndex;
    if ( (unsigned int)v28 < 6 )
      v29 = &pMovieImpl->mMouseState[v28];
    else
      v29 = 0i64;
    if ( this->pDocument.pObject->pEditorKit.pObject )
    {
      *(_OWORD *)&m.M[0][0] = _xmm;
      *(_OWORD *)&m.M[1][0] = _xmm;
      Scaleform::GFx::DisplayObject::GetWorldMatrixWithScroll(this, &m);
      y = v29->LastPosition.y;
      *(float *)&purlRangePos.Index = v29->LastPosition.x;
      *((float *)&purlRangePos.Index + 1) = y;
      Scaleform::Render::Matrix2x4<float>::TransformByInverse(
        &m,
        &p,
        (const Scaleform::Render::Point<float> *)&purlRangePos);
      Scaleform::GFx::Text::EditorKit::OnMouseMove(
        (Scaleform::GFx::Text::EditorKit *)this->pDocument.pObject->pEditorKit.pObject,
        p.x,
        p.y);
    }
    if ( Scaleform::GFx::TextField::HasStyleSheet(this)
      && (this->Flags & 2) != 0
      && (this->pDocument.pObject->pDocument.pObject->RTFlags & 1) != 0 )
    {
      v31 = id->ControllerIndex;
      purlRangePos.Index = 0i64;
      purlRangePos.Length = 0i64;
      if ( Scaleform::GFx::TextField::IsUrlUnderMouseCursor(this, v31, 0i64, &purlRangePos) )
      {
        v32 = id->ControllerIndex;
        if ( !Scaleform::GFx::TextField::IsUrlTheSame(this, v32, &purlRangePos) )
        {
          if ( Scaleform::GFx::TextField::ChangeUrlFormat(this, Link_release, v32, 0i64) || v13 )
            v13 = 1;
          if ( Scaleform::GFx::TextField::ChangeUrlFormat(this, Link_rollout, id->ControllerIndex, 0i64) || v13 )
            v13 = 1;
        }
        if ( Scaleform::GFx::TextField::ChangeUrlFormat(
               this,
               (Scaleform::GFx::TextField::LinkEvent)(~(2 * (unsigned __int8)v29->CurButtonsState) & 2),
               id->ControllerIndex,
               &purlRangePos)
          || v13 )
        {
          this->Flags |= 0x20u;
          v13 = 1;
        }
        else
        {
          this->Flags |= 0x20u;
        }
        goto LABEL_105;
      }
      if ( Scaleform::GFx::TextField::ChangeUrlFormat(this, Link_release, id->ControllerIndex, 0i64) || v13 )
        v13 = 1;
    }
    else
    {
      Flags = this->Flags;
      if ( (Flags & 2) != 0 && (this->pDocument.pObject->pDocument.pObject->RTFlags & 1) != 0 )
      {
        if ( Scaleform::GFx::TextField::IsUrlUnderMouseCursor(this, id->ControllerIndex, 0i64, 0i64) )
        {
          this->Flags |= 0x20u;
LABEL_105:
          v34 = this->GetCursorType(this);
          Scaleform::GFx::MovieImpl::ChangeMouseCursorType(pMovieImpl, id->ControllerIndex, v34);
          goto LABEL_106;
        }
LABEL_104:
        this->Flags &= ~0x20u;
        goto LABEL_105;
      }
      if ( (Flags & 0x20) == 0 )
        goto LABEL_106;
    }
    if ( Scaleform::GFx::TextField::ChangeUrlFormat(this, Link_rollout, id->ControllerIndex, 0i64) || v13 )
      v13 = 1;
    goto LABEL_104;
  }
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index)
{
  unsigned __int64 v4; // rdi
  Scaleform::Render::Text::StyledText *pObject; // rcx

  if ( this->Data.Size == 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->Data,
      this,
      0i64);
  }
  else
  {
    v4 = index;
    pObject = this->Data.Data[index].Data.SavedFmt.pObject;
    if ( pObject )
      Scaleform::RefCountNTSImpl::Release(pObject);
    memmove(&this->Data.Data[v4], &this->Data.Data[v4 + 1], 32 * (this->Data.Size - index) - 32);
    --this->Data.Size;
  }
}

void __fastcall Scaleform::GFx::TextField::RemoveIdImageDescAssoc(Scaleform::GFx::TextField *this, const char *idStr)
{
  void *v3; // rbx
  Scaleform::String key; // [rsp+30h] [rbp+8h] BYREF

  if ( this->pImageDescAssoc )
  {
    Scaleform::String::String(&key, idStr);
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::RemoveAlt<Scaleform::String>(
      &this->pImageDescAssoc->mHash,
      &key);
    v3 = (void *)(key.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((key.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v3);
  }
}

void __fastcall Scaleform::GFx::TextField::ReplaceText(
        Scaleform::GFx::TextField *this,
        const wchar_t *ptext,
        unsigned __int64 beginPos,
        unsigned __int64 endPos,
        unsigned __int64 textLen)
{
  Scaleform::Render::Text::DocView *pObject; // rcx
  unsigned __int64 Length; // rdi
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix3x4<float> *v9; // rax
  unsigned __int8 v10; // al
  const Scaleform::Render::Matrix3x4<float> *v11; // rax
  Scaleform::Render::TreeText *RenderNode; // rax

  Scaleform::Render::Text::DocView::ReplaceText(this->pDocument.pObject, ptext, beginPos, endPos, textLen);
  pObject = this->pDocument.pObject;
  if ( pObject->pEditorKit.pObject )
  {
    Length = Scaleform::Render::Text::StyledText::GetLength(pObject->pDocument.pObject);
    if ( (unsigned __int64)Scaleform::GFx::MovieImpl::GetHeap((Scaleform::GFx::AS3::XMLSupportImpl *)this->pDocument.pObject->pEditorKit.pObject) > Length )
      Scaleform::GFx::Text::EditorKit::SetCursorPos(
        (Scaleform::GFx::Text::EditorKit *)this->pDocument.pObject->pEditorKit.pObject,
        Length,
        0);
  }
  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v9 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                             + 4 * AvmObjOffset))->GetMatrix3D((char *)this + 4 * AvmObjOffset);
    (*(void (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v9->M[0][0] + 256i64))(v9);
  }
  this->Flags |= 0x10000u;
  v10 = this->AvmObjOffset;
  if ( v10 )
  {
    v11 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                              + 4 * v10))->GetMatrix3D((char *)this + 4 * v10);
    (*(void (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v11->M[0][0] + 192i64))(v11);
  }
  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Value,Scaleform::AllocatorGH<Scaleform::GFx::AS3::Value,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::AS3::Value *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::GFx::AS3::Value *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::GFx::AS3::Value *)Scaleform::Memory::pGlobalHeap->Realloc(
                                             Scaleform::Memory::pGlobalHeap,
                                             Data,
                                             32 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (Scaleform::GFx::AS3::Value *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   32 * v5,
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

void __fastcall Scaleform::GFx::TextField::ResetBlink(Scaleform::GFx::TextField *this, bool state, bool blocked)
{
  Scaleform::Render::Text::EditorKitBase *pObject; // rcx
  Scaleform::Render::TreeText *RenderNode; // rax

  pObject = this->pDocument.pObject->pEditorKit.pObject;
  if ( pObject )
  {
    if ( !pObject->IsReadOnly(pObject) )
    {
      Scaleform::GFx::Text::EditorKit::ResetBlink(
        (Scaleform::GFx::Text::EditorKit *)this->pDocument.pObject->pEditorKit.pObject,
        state,
        blocked);
      RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
      Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
    }
  }
}

void __fastcall Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v5; // r8
  unsigned __int64 v6; // rbx
  unsigned int *p_OverCount; // rax

  Size = this->Size;
  Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    this,
    this,
    newSize);
  if ( newSize > Size )
  {
    v5 = &this->Data[Size];
    v6 = newSize - Size;
    if ( v6 )
    {
      p_OverCount = &v5->Data.OverCount;
      do
      {
        if ( v5 )
        {
          v5->Index = 0i64;
          *(_QWORD *)(p_OverCount - 5) = 0i64;
          *(_QWORD *)(p_OverCount - 3) = 0i64;
          *(_QWORD *)(p_OverCount - 1) = 0i64;
        }
        ++v5;
        p_OverCount += 8;
        --v6;
      }
      while ( v6 );
    }
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 v7; // rdi
  Scaleform::GFx::TextField::CSSHolderBase::UrlZone *p_Data; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Value,Scaleform::AllocatorGH<Scaleform::GFx::AS3::Value,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    if ( v7 )
    {
      p_Data = &this->Data[v7 - 1 + newSize].Data;
      do
      {
        if ( p_Data->SavedFmt.pObject )
          Scaleform::RefCountNTSImpl::Release(p_Data->SavedFmt.pObject);
        p_Data -= 2;
        --v7;
      }
      while ( v7 );
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Value,Scaleform::AllocatorGH<Scaleform::GFx::AS3::Value,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::GFx::TextField::SetBackground(Scaleform::GFx::TextField *this, bool b)
{
  Scaleform::Render::Text::DocView *pObject; // r8
  Scaleform::Render::TreeText *RenderNode; // rax
  Scaleform::Render::TreeText *v5; // rax
  unsigned int BackgroundColor; // [rsp+38h] [rbp+10h]

  pObject = this->pDocument.pObject;
  BackgroundColor = pObject->BackgroundColor;
  HIBYTE(BackgroundColor) = -b;
  pObject->BackgroundColor = BackgroundColor;
  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
  v5 = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(v5);
}

void __fastcall Scaleform::GFx::TextField::SetBackgroundColor(Scaleform::GFx::TextField *this, unsigned int rgb)
{
  Scaleform::Render::TreeText *RenderNode; // rax

  this->pDocument.pObject->BackgroundColor ^= (rgb ^ this->pDocument.pObject->BackgroundColor) & 0xFFFFFF;
  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
}

void __fastcall Scaleform::GFx::TextField::SetBorder(Scaleform::GFx::TextField *this, bool b)
{
  Scaleform::Render::Text::DocView *pObject; // r8
  Scaleform::Render::TreeText *RenderNode; // rax
  Scaleform::Render::TreeText *v5; // rax
  unsigned int BorderColor; // [rsp+38h] [rbp+10h]

  pObject = this->pDocument.pObject;
  BorderColor = pObject->BorderColor;
  HIBYTE(BorderColor) = -b;
  pObject->BorderColor = BorderColor;
  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
  v5 = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(v5);
}

void __fastcall Scaleform::GFx::TextField::SetBorderColor(Scaleform::GFx::TextField *this, unsigned int rgb)
{
  Scaleform::Render::TreeText *RenderNode; // rax

  this->pDocument.pObject->BorderColor ^= (rgb ^ this->pDocument.pObject->BorderColor) & 0xFFFFFF;
  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
}

void __fastcall Scaleform::GFx::TextField::SetCSSData(
        Scaleform::GFx::TextField *this,
        Scaleform::GFx::TextField::CSSHolderBase *css)
{
  Scaleform::GFx::TextField::CSSHolderBase *pObject; // rcx

  pObject = this->pCSSData.pObject;
  if ( pObject != css )
  {
    if ( pObject && this->pCSSData.Owner )
    {
      this->pCSSData.Owner = 0;
      ((void (__fastcall *)(Scaleform::GFx::TextField::CSSHolderBase *, __int64))pObject->~CSSHolderBase)(pObject, 1i64);
    }
    this->pCSSData.pObject = css;
  }
  this->pCSSData.Owner = css != 0i64;
}

void __fastcall Scaleform::GFx::TextField::SetCandidateListFont(
        Scaleform::GFx::TextField *this,
        Scaleform::GFx::Sprite *psprite)
{
  Scaleform::GFx::FontHandle *v2; // rbx
  char v5; // r15
  Scaleform::Render::Text::EditorKitBase *pObject; // rcx
  unsigned __int64 Heap; // rax
  const Scaleform::String *FontList; // rax
  unsigned int v9; // esi
  Scaleform::GFx::InteractiveObject *pParent; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // rsi
  Scaleform::Render::Text::FontHandle *v15; // r12
  Scaleform::RefCountVImpl *v16; // rcx
  Scaleform::Render::Text::TextFormat *v17; // rdi
  Scaleform::Render::Text::TextFormat *v18; // rbp
  Scaleform::RefCountVImpl *v19; // r14
  void *v20; // rdi
  Scaleform::Render::Text::TextFormat *ppdestTextFmt; // [rsp+70h] [rbp+8h] BYREF
  Scaleform::String v22; // [rsp+80h] [rbp+18h] BYREF
  Scaleform::Render::Text::ParagraphFormat *ppdestParaFmt; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0i64;
  LODWORD(ppdestTextFmt) = 0;
  v5 = 0;
  pObject = this->pDocument.pObject->pEditorKit.pObject;
  if ( pObject )
    Heap = (unsigned __int64)Scaleform::GFx::MovieImpl::GetHeap((Scaleform::GFx::AS3::XMLSupportImpl *)pObject);
  else
    Heap = -1i64;
  Scaleform::Render::Text::StyledText::GetTextAndParagraphFormat(
    this->pDocument.pObject->pDocument.pObject,
    (const Scaleform::Render::Text::TextFormat **)&ppdestTextFmt,
    (const Scaleform::Render::Text::ParagraphFormat **)&ppdestParaFmt,
    Heap);
  FontList = Scaleform::Render::Text::TextFormat::GetFontList(ppdestTextFmt);
  Scaleform::String::String(&v22, FontList);
  v9 = (2 * (ppdestTextFmt->FormatFlags & 1)) | (ppdestTextFmt->FormatFlags >> 1) & 1;
  pParent = this->pParent;
  if ( pParent )
  {
    v11 = ((__int64 (*)(void))pParent->GetFontManager)();
    v13 = v11;
    if ( v11 )
    {
      LOBYTE(v12) = 1;
      v14 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 8i64))(
              v11,
              (v22.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12,
              v9,
              v12,
              0i64);
      if ( v14 )
      {
        v15 = (Scaleform::Render::Text::FontHandle *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))psprite->pASRoot->pMovieImpl->pHeap->Alloc)(
                                                       psprite->pASRoot->pMovieImpl->pHeap,
                                                       64i64);
        if ( v15 )
        {
          if ( *(_QWORD *)(v14 + 56) )
          {
            v16 = *(Scaleform::RefCountVImpl **)(v14 + 56);
            if ( v16 )
              Scaleform::Render::RenderBuffer::AddRef(v16);
            v17 = *(Scaleform::Render::Text::TextFormat **)(v14 + 56);
            v5 = 1;
            v18 = ppdestTextFmt;
            v19 = (Scaleform::RefCountVImpl *)v17;
          }
          else
          {
            v19 = *(Scaleform::RefCountVImpl **)(v13 + 48);
            if ( v19 )
              Scaleform::Render::RenderBuffer::AddRef(v19);
            v17 = ppdestTextFmt;
            v18 = (Scaleform::Render::Text::TextFormat *)v19;
            v5 = 2;
          }
          Scaleform::Render::Text::FontHandle::FontHandle(
            v15,
            0i64,
            *(Scaleform::Render::Font **)(v14 + 48),
            "$IMECandidateListFont",
            0);
          v15->__vftable = (Scaleform::Render::Text::FontHandle_vtbl *)&Scaleform::GFx::FontHandle::`vftable';
          if ( v19 )
            Scaleform::Render::RenderBuffer::AddRef(v19);
          v15[1].__vftable = (Scaleform::Render::Text::FontHandle_vtbl *)v19;
          v2 = (Scaleform::GFx::FontHandle *)v15;
        }
        else
        {
          v17 = ppdestTextFmt;
          v18 = ppdestTextFmt;
        }
        if ( (v5 & 2) != 0 )
        {
          v5 &= ~2u;
          if ( v18 )
            Scaleform::GFx::Resource::Release((Scaleform::GFx::Resource *)v18);
        }
        if ( (v5 & 1) != 0 && v17 )
          Scaleform::GFx::Resource::Release((Scaleform::GFx::Resource *)v17);
        Scaleform::GFx::Sprite::SetIMECandidateListFont(psprite, v2);
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v14);
      }
    }
  }
  v20 = (void *)(v22.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v22.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v20);
  if ( v2 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v2);
}

void __fastcall Scaleform::GFx::TextField::SetDirtyFlag(Scaleform::GFx::TextField *this)
{
  Scaleform::Render::TreeText *RenderNode; // rax

  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
}

void __fastcall Scaleform::GFx::TextField::SetFilters(
        Scaleform::GFx::TextField *this,
        const Scaleform::Render::FilterSet *filters)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  unsigned int v5; // ebx
  const Scaleform::Render::Filter *Filter; // rax
  Scaleform::Render::Text::DocView *v7; // rbx
  float BlurX; // xmm1_4
  Scaleform::Render::TreeText *RenderNode; // rax
  Scaleform::Render::Text::TextFilter v10; // [rsp+20h] [rbp-29h] BYREF

  if ( !filters )
    return;
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)filters);
  pObject = (Scaleform::RefCountVImpl *)this->pFilters.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v5 = 0;
  LODWORD(v10.ShadowParams.Strength) = FLOAT_1_0;
  v10.__vftable = (Scaleform::Render::Text::TextFilter_vtbl *)&Scaleform::Render::Text::TextFilter::`vftable';
  v10.ShadowParams.Mode = 0;
  v10.ShadowParams.Offset.y = 0.0;
  v10.ShadowParams.Gradient.pObject = 0i64;
  v10.ShadowParams.Colors[0].Channels.Blue = 0;
  *(_WORD *)&v10.ShadowParams.Colors[1].Channels.Green = 0;
  v10.ShadowParams.Colors[1].Channels.Alpha = 0;
  this->pFilters.pObject = (Scaleform::Render::FilterSet *)filters;
  v10.RefCount = 1;
  v10.ShadowParams.Passes = 1;
  v10.ShadowParams.BlurX = 100.0;
  *(_QWORD *)&v10.ShadowParams.BlurY = 1120403456i64;
  *(_DWORD *)&v10.ShadowParams.Colors[0].Channels.Green = 16711680;
  Scaleform::Render::Text::TextFilter::SetDefaultShadow(&v10);
  if ( Scaleform::Render::FilterSet::GetFilterCount((Scaleform::Render::FilterSet *)filters) )
  {
    do
    {
      Filter = Scaleform::Render::FilterSet::GetFilter((Scaleform::Render::FilterSet *)filters, v5);
      if ( Filter )
        Scaleform::Render::Text::TextFilter::LoadFilterDesc(&v10, Filter);
      ++v5;
    }
    while ( v5 < Scaleform::Render::FilterSet::GetFilterCount((Scaleform::Render::FilterSet *)filters) );
  }
  v7 = this->pDocument.pObject;
  if ( v7 )
  {
    BlurX = v10.BlurX;
    if ( v7->Filter.BlurX != v10.BlurX || v7->Filter.BlurY != v10.BlurY || v7->Filter.BlurStrength != v10.BlurStrength )
      goto LABEL_18;
    if ( !Scaleform::Render::BlurFilterParams::EqualsAll(&v7->Filter.ShadowParams, &v10.ShadowParams)
      || v7->Filter.ShadowFlags != v10.ShadowFlags
      || v7->Filter.ShadowAngle != v10.ShadowAngle
      || v7->Filter.ShadowDistance != v10.ShadowDistance
      || v7->Filter.ShadowAlpha != v10.ShadowAlpha )
    {
      BlurX = v10.BlurX;
LABEL_18:
      v7->Filter.BlurX = BlurX;
      v7->Filter.BlurY = v10.BlurY;
      v7->Filter.BlurStrength = v10.BlurStrength;
      Scaleform::Render::BlurFilterParams::operator=(&v7->Filter.ShadowParams, &v10.ShadowParams);
      v7->Filter.ShadowFlags = v10.ShadowFlags;
      v7->Filter.ShadowAngle = v10.ShadowAngle;
      v7->Filter.ShadowDistance = v10.ShadowDistance;
      v7->Filter.ShadowAlpha = v10.ShadowAlpha;
      RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
      Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
    }
  }
  if ( v10.ShadowParams.Gradient.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v10.ShadowParams.Gradient.pObject);
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(&v10);
}

void __fastcall Scaleform::GFx::TextField::SetHeight(Scaleform::GFx::TextField *this, long double height)
{
  const Scaleform::Render::Rect<float> *ViewRect; // rax
  Scaleform::Render::Text::DocView *pObject; // rcx
  float y1; // xmm3_4
  float x2; // xmm2_4
  float v7; // xmm0_4
  Scaleform::Render::TreeText *RenderNode; // rax
  Scaleform::Render::Rect<float> rect; // [rsp+20h] [rbp-38h] BYREF

  ViewRect = Scaleform::Render::Text::DocView::GetViewRect(this->pDocument.pObject);
  pObject = this->pDocument.pObject;
  y1 = ViewRect->y1;
  x2 = ViewRect->x2;
  rect.x1 = ViewRect->x1;
  v7 = height * 20.0;
  rect.y1 = y1;
  rect.x2 = x2;
  rect.y2 = v7 + y1;
  Scaleform::Render::Text::DocView::SetViewRect(pObject, &rect, UseExternally);
  this->Flags |= 0x2000u;
  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
}

void __fastcall Scaleform::GFx::TextField::SetInitialFormatsAsDefault(Scaleform::GFx::TextField *this)
{
  Scaleform::MemoryHeap *v2; // rax
  Scaleform::Render::Text::DocView *pObject; // rax
  Scaleform::Render::Text::DocView::DocumentText *v4; // rcx
  Scaleform::Render::Text::TextFormat *v5; // rsi
  Scaleform::Render::Text::ParagraphFormat *v6; // rdi
  const Scaleform::Render::Text::TextFormat *v7; // rax
  const Scaleform::Render::Text::ParagraphFormat *v8; // rax
  Scaleform::MemoryHeap *v9; // rax
  const Scaleform::Render::Text::TextFormat *v10; // rax
  const Scaleform::Render::Text::ParagraphFormat *v11; // rax
  Scaleform::Render::Text::DocView *v12; // rcx
  Scaleform::Render::Text::ParagraphFormat pparaFmt; // [rsp+20h] [rbp-E0h] BYREF
  Scaleform::Render::Text::ParagraphFormat v14; // [rsp+48h] [rbp-B8h] BYREF
  Scaleform::Render::Text::TextFormat ptextFmt; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::Render::Text::TextFormat result; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::Render::Text::TextFormat v17; // [rsp+110h] [rbp+10h] BYREF

  v2 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  Scaleform::Render::Text::TextFormat::TextFormat(&ptextFmt, v2);
  pObject = this->pDocument.pObject;
  pparaFmt.pAllocator = 0i64;
  pparaFmt.RefCount = 1;
  memset(&pparaFmt.pTabStops, 0, 20);
  v4 = pObject->pDocument.pObject;
  v5 = v4->pDefaultTextFormat.pObject;
  v6 = v4->pDefaultParagraphFormat.pObject;
  if ( (this->pDef.pObject->Flags & 0x800) != 0 )
  {
    if ( v5 )
      Scaleform::Render::Text::TextFormat::operator=(&ptextFmt, v4->pDefaultTextFormat.pObject);
    if ( v6 )
      Scaleform::Render::Text::ParagraphFormat::operator=(&pparaFmt, v6);
    v9 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
    Scaleform::Render::Text::TextFormat::TextFormat(&result, v9);
    v14.pAllocator = 0i64;
    v14.RefCount = 1;
    memset(&v14.pTabStops, 0, 20);
    Scaleform::Render::Text::TextFormat::InitByDefaultValues(&result);
    Scaleform::Render::Text::ParagraphFormat::InitByDefaultValues(&v14);
    v10 = Scaleform::Render::Text::TextFormat::Merge(&result, &v17, &ptextFmt);
    Scaleform::Render::Text::TextFormat::operator=(&ptextFmt, v10);
    Scaleform::Render::Text::TextFormat::~TextFormat(&v17);
    v11 = Scaleform::Render::Text::ParagraphFormat::Merge(
            &v14,
            (Scaleform::Render::Text::ParagraphFormat *)&v17,
            &pparaFmt);
    Scaleform::Render::Text::ParagraphFormat::operator=(&pparaFmt, v11);
    Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat((Scaleform::Render::Text::ParagraphFormat *)&v17);
    Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&v14);
    Scaleform::Render::Text::TextFormat::~TextFormat(&result);
  }
  else
  {
    Scaleform::GFx::TextField::GetInitialFormats(this, &ptextFmt, &pparaFmt);
    if ( v5 )
    {
      v7 = Scaleform::Render::Text::TextFormat::Merge(v5, &result, &ptextFmt);
      Scaleform::Render::Text::TextFormat::operator=(&ptextFmt, v7);
      Scaleform::Render::Text::TextFormat::~TextFormat(&result);
    }
    if ( v6 )
    {
      v8 = Scaleform::Render::Text::ParagraphFormat::Merge(v6, &v14, &pparaFmt);
      Scaleform::Render::Text::ParagraphFormat::operator=(&pparaFmt, v8);
      Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&v14);
    }
  }
  Scaleform::Render::Text::StyledText::SetDefaultTextFormat(this->pDocument.pObject->pDocument.pObject, &ptextFmt);
  v12 = this->pDocument.pObject;
  this->Flags |= 0x10000u;
  Scaleform::Render::Text::StyledText::SetDefaultParagraphFormat(v12->pDocument.pObject, &pparaFmt);
  this->Flags |= 0x10000u;
  Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&pparaFmt);
  Scaleform::Render::Text::TextFormat::~TextFormat(&ptextFmt);
}

void __fastcall Scaleform::GFx::TextField::SetOverwriteMode(Scaleform::GFx::TextField *this, bool overwMode)
{
  Scaleform::Render::Text::EditorKitBase *pObject; // rcx

  pObject = this->pDocument.pObject->pEditorKit.pObject;
  if ( pObject )
  {
    if ( overwMode )
      LOWORD(pObject[10].__vftable) |= 0x80u;
    else
      LOWORD(pObject[10].__vftable) &= ~0x80u;
  }
}

void __fastcall Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy>>::SetRange(
        Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> > *this,
        const Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *range)
{
  unsigned __int64 Size; // rbp
  __int64 Index; // rdi
  __int64 NearestRangeIndex; // rax
  __int64 v7; // rsi
  __int64 v8; // r9
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v9; // rdx
  unsigned __int64 v10; // r8
  signed __int64 v11; // rax
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v12; // rcx
  Scaleform::Render::Text::StyledText *pObject; // rax
  signed __int64 v14; // r12
  __int64 v15; // r13
  Scaleform::RefCountNTSImpl *v16; // rbp
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  signed __int64 v20; // rcx
  __int64 v21; // r13
  unsigned __int64 v22; // r12
  signed __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // r15
  unsigned __int64 v26; // r8
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 Length; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rsi
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v41; // rcx
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *Data; // r8
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v46; // rcx
  unsigned __int64 v47; // r9
  __int64 v48; // rdi
  Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator v49; // [rsp+20h] [rbp-48h] BYREF
  unsigned int HitCount; // [rsp+70h] [rbp+8h]
  unsigned int OverCount; // [rsp+80h] [rbp+18h]

  Size = this->Ranges.Data.Size;
  if ( !Size )
  {
    Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
      &this->Ranges,
      0i64,
      range);
    return;
  }
  Index = range->Index;
  NearestRangeIndex = Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy>>::FindNearestRangeIndex(
                        this,
                        range->Index);
  v49.pArray = (Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *)this;
  v7 = NearestRangeIndex;
  if ( NearestRangeIndex >= 0 )
  {
    if ( NearestRangeIndex < Size )
    {
      v49.Index = NearestRangeIndex;
    }
    else
    {
      v7 = Size - 1;
      v49.Index = Size - 1;
    }
  }
  else
  {
    v7 = 0i64;
    v49.Index = 0i64;
  }
  v8 = v7;
  v9 = &this->Ranges.Data.Data[v7];
  if ( Index < v9->Index
    || (v10 = range->Length, (__int64)(v10 + Index - 1) > (signed __int64)(v9->Length - 1 + v9->Index)) )
  {
    if ( Index >= v9->Index )
    {
      Length = v9->Length;
      if ( Index <= (__int64)(Length + v9->Index - 1) )
      {
        v30 = v9->Length;
        v31 = v9->Index + Length - Index;
        if ( v31 <= v30 )
          v9->Length = v30 - v31;
        else
          v9->Length = 0i64;
        if ( v7 < (signed __int64)this->Ranges.Data.Size )
          v49.Index = ++v7;
LABEL_39:
        v24 = v7;
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
          &this->Ranges,
          v7,
          range);
        goto LABEL_59;
      }
    }
    v32 = v9->Index;
    if ( Index < v9->Index )
      goto LABEL_51;
    if ( Index <= (signed __int64)(v9->Length + v32 - 1) )
      goto LABEL_55;
    if ( Index >= v32 )
      v33 = LODWORD(v9->Length) - Index + v32 - 1;
    else
LABEL_51:
      v33 = v32 - Index;
    if ( v33 > 0 )
    {
LABEL_54:
      Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        &this->Ranges,
        v7,
        range);
      goto LABEL_58;
    }
LABEL_55:
    Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
      &this->Ranges,
      v7 + 1,
      range);
    if ( v7 < (signed __int64)this->Ranges.Data.Size )
      ++v7;
    v49.Index = v7;
    goto LABEL_58;
  }
  v11 = v9->Length;
  if ( v9->Index != Index )
  {
    if ( v9->Index + v11 > (__int64)(v10 + Index) )
    {
      pObject = v9->Data.SavedFmt.pObject;
      v14 = v9->Length;
      v15 = v9->Index;
      if ( pObject )
        ++pObject->RefCount;
      v16 = v9->Data.SavedFmt.pObject;
      v17 = &this->Ranges.Data.Data[v8];
      HitCount = v9->Data.HitCount;
      OverCount = v9->Data.OverCount;
      v18 = v17->Index + v17->Length - range->Index;
      v19 = v17->Length;
      if ( v18 <= v19 )
        v17->Length = v19 - v18;
      else
        v17->Length = 0i64;
      v20 = range->Length + this->Ranges.Data.Data[v8].Length;
      if ( v20 > v14 )
        v20 = v14;
      v21 = v20 + v15;
      v22 = v14 - v20;
      Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        &this->Ranges,
        v7 + 1,
        range);
      v23 = this->Ranges.Data.Size;
      if ( v7 < v23 )
        ++v7;
      v24 = v7;
      v25 = v7 + 1;
      Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        &this->Ranges.Data,
        v23 + 1);
      v26 = this->Ranges.Data.Size;
      if ( v7 + 1 < v26 - 1 )
        memmove(&this->Ranges.Data.Data[v25 + 1], &this->Ranges.Data.Data[v25], 32 * (v26 - v25) - 32);
      v27 = &this->Ranges.Data.Data[v25];
      if ( v27 )
      {
        v27->Index = v21;
        v27->Length = v22;
        if ( v16 )
          ++v16->RefCount;
        v27->Data.SavedFmt.pObject = (Scaleform::Render::Text::StyledText *)v16;
        v27->Data.HitCount = HitCount;
        v27->Data.OverCount = OverCount;
      }
      if ( v7 < (signed __int64)this->Ranges.Data.Size )
        ++v7;
      v49.Index = v7;
      if ( v16 )
        Scaleform::RefCountNTSImpl::Release(v16);
      goto LABEL_61;
    }
    v28 = v9->Length;
    if ( v10 <= v28 )
      v9->Length = v28 - v10;
    else
      v9->Length = 0i64;
    if ( v7 < (signed __int64)this->Ranges.Data.Size )
      v49.Index = ++v7;
    goto LABEL_39;
  }
  if ( (__int64)v10 > v11 )
    v10 = v9->Length;
  v9->Index += v10;
  v9->Length = v11 - v10;
  v12 = &this->Ranges.Data.Data[v8];
  if ( v12->Length )
    goto LABEL_54;
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>::operator=(v12, range);
LABEL_58:
  v24 = v7;
LABEL_59:
  if ( v7 < (signed __int64)this->Ranges.Data.Size )
    v49.Index = ++v7;
LABEL_61:
  while ( !Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::Iterator::IsFinished(&v49) )
  {
    v34 = this->Ranges.Data.Data[v7].Index;
    if ( v34 < range->Index
      || (signed __int64)(this->Ranges.Data.Data[v7].Length + v34 - 1) > (signed __int64)(range->Length
                                                                                        - 1
                                                                                        + range->Index) )
    {
      break;
    }
    if ( v7 >= 0 && v7 < this->Ranges.Data.Size )
      Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
        &this->Ranges,
        v7);
  }
  if ( v7 >= 0 && v7 < this->Ranges.Data.Size )
  {
    v35 = range->Length;
    v36 = &this->Ranges.Data.Data[v7];
    v37 = v35 + range->Index - 1;
    if ( v37 >= v36->Index )
    {
      v38 = v36->Length;
      if ( v37 <= v38 + v36->Index - 1 )
      {
        v39 = range->Index + v35 - v36->Index;
        if ( v39 > v38 )
          v39 = v36->Length;
        v36->Index += v39;
        v36->Length = v38 - v39;
      }
    }
  }
  if ( v24 >= 0 )
  {
    v40 = v24 - 1;
    if ( v24 - 1 >= 0 && v40 < this->Ranges.Data.Size )
    {
      v41 = &this->Ranges.Data.Data[v40];
      if ( v41->Length )
      {
        if ( v41->Index + v41->Length == range->Index )
        {
          v42 = &this->Ranges.Data.Data[v24];
          if ( v41->Data.SavedFmt.pObject == v42->Data.SavedFmt.pObject
            && v41->Data.HitCount == v42->Data.HitCount
            && v41->Data.OverCount == v42->Data.OverCount )
          {
            v41->Length += range->Length;
            if ( v24 < this->Ranges.Data.Size )
              Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
                &this->Ranges,
                v24);
            --v24;
          }
        }
      }
      else
      {
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
          &this->Ranges,
          --v24);
      }
    }
  }
  v43 = this->Ranges.Data.Size;
  v44 = v24;
  if ( v24 < (__int64)v43 )
    v44 = v24 + 1;
  if ( v44 >= 0 && v44 < v43 )
  {
    Data = this->Ranges.Data.Data;
    v46 = &this->Ranges.Data.Data[v44];
    v47 = v46->Length;
    if ( !v47
      || (v48 = v24, Data[v48].Index + Data[v48].Length == v46->Index)
      && Data[v48].Data.SavedFmt.pObject == v46->Data.SavedFmt.pObject
      && Data[v48].Data.HitCount == v46->Data.HitCount
      && Data[v48].Data.OverCount == v46->Data.OverCount
      && (Data[v48].Length += v47, v44 < this->Ranges.Data.Size) )
    {
      Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
        &this->Ranges,
        v44);
    }
  }
}

__int64 __fastcall Scaleform::GFx::TextField::SetRestrict(
        Scaleform::GFx::TextField *this,
        const Scaleform::GFx::ASString *restrStr)
{
  Scaleform::GFx::Text::EditorKit *pObject; // rbx
  const Scaleform::String *v5; // rax
  unsigned __int8 v6; // al
  void *v7; // rbx
  unsigned __int8 v8; // di
  Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> result; // [rsp+30h] [rbp+8h] BYREF

  if ( !this->pDocument.pObject->pEditorKit.pObject )
  {
    Scaleform::GFx::TextField::CreateEditorKit(this, &result);
    if ( result.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)result.pObject);
  }
  pObject = (Scaleform::GFx::Text::EditorKit *)this->pDocument.pObject->pEditorKit.pObject;
  Scaleform::String::String((Scaleform::String *)&result, restrStr->pNode->pData);
  v6 = Scaleform::GFx::Text::EditorKit::SetRestrict(pObject, v5);
  v7 = (void *)((unsigned __int64)result.pObject & 0xFFFFFFFFFFFFFFFCui64);
  v8 = v6;
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)(((unsigned __int64)result.pObject & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v7);
  return v8;
}

void __fastcall Scaleform::GFx::TextField::SetRotation(Scaleform::GFx::TextField *this, long double rotation)
{
  Scaleform::Render::TreeText *RenderNode; // rax

  this->Flags |= 0x2000u;
  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
  Scaleform::GFx::DisplayObjectBase::SetRotation(this, rotation);
}

void __fastcall Scaleform::GFx::TextField::SetSelectable(Scaleform::GFx::TextField *this, bool v)
{
  Scaleform::RefCountVImpl *pObject; // rbx
  Scaleform::RefCountVImpl **v5; // rdi
  Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> result; // [rsp+30h] [rbp+8h] BYREF

  pObject = (Scaleform::RefCountVImpl *)this->pDocument.pObject->pEditorKit.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)this->pDocument.pObject->pEditorKit.pObject);
  if ( v )
  {
    v5 = (Scaleform::RefCountVImpl **)Scaleform::GFx::TextField::CreateEditorKit(this, &result);
    if ( *v5 )
      Scaleform::Render::RenderBuffer::AddRef(*v5);
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    pObject = *v5;
    if ( result.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)result.pObject);
    LOWORD(pObject[10].__vftable) |= 2u;
  }
  else
  {
    if ( !pObject )
      return;
    LOWORD(pObject[10].__vftable) &= ~2u;
  }
  Scaleform::RefCountImpl::Release(pObject);
}

void __fastcall Scaleform::GFx::TextField::SetSelection(
        Scaleform::GFx::TextField *this,
        __int64 beginIndex,
        __int64 endIndex)
{
  Scaleform::Render::Text::DocView *pObject; // rcx
  Scaleform::Render::Text::StyledText *v7; // rcx
  signed __int64 Length; // rax
  Scaleform::Render::TreeText *RenderNode; // rax
  Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> result; // [rsp+30h] [rbp+8h] BYREF

  if ( !this->pDocument.pObject->pEditorKit.pObject )
  {
    Scaleform::GFx::TextField::CreateEditorKit(this, &result);
    if ( result.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)result.pObject);
  }
  pObject = this->pDocument.pObject;
  if ( pObject->pEditorKit.pObject )
  {
    v7 = pObject->pDocument.pObject;
    if ( beginIndex < 0 )
      beginIndex = 0i64;
    if ( endIndex < 0 )
      endIndex = 0i64;
    Length = Scaleform::Render::Text::StyledText::GetLength(v7);
    if ( Length < endIndex )
      endIndex = Length;
    if ( Length < beginIndex )
      beginIndex = Length;
    Scaleform::GFx::Text::EditorKit::SetSelection(
      (Scaleform::GFx::Text::EditorKit *)this->pDocument.pObject->pEditorKit.pObject,
      beginIndex,
      endIndex);
    RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
  }
}

void __fastcall Scaleform::GFx::TextField::SetStateChangeFlags(Scaleform::GFx::TextField *this, unsigned __int8 flags)
{
  unsigned int v3; // ecx
  bool v4; // dl
  int v5; // eax

  this->Scaleform::GFx::InteractiveObject::Flags &= 0xFFF0FFFF;
  this->Flags |= 0x4000u;
  this->Scaleform::GFx::InteractiveObject::Flags |= (flags & 0xF | 0x10) << 16;
  if ( !Scaleform::GFx::InteractiveObject::IsInPlayList(this) )
    Scaleform::GFx::InteractiveObject::AddToPlayList(this);
  v3 = this->Scaleform::GFx::InteractiveObject::Flags;
  v4 = (v3 & 0x200000) != 0 && (v3 & 0x400000) == 0;
  v5 = Scaleform::GFx::TextField::CheckAdvanceStatus(this, v4);
  if ( v5 == -1 )
  {
    this->Scaleform::GFx::InteractiveObject::Flags |= 0x400000u;
  }
  else if ( v5 == 1 )
  {
    Scaleform::GFx::InteractiveObject::AddToOptimizedPlayList(this);
  }
}

void __fastcall Scaleform::GFx::TextField::SetTextColor(Scaleform::GFx::TextField *this, unsigned int rgb)
{
  Scaleform::MemoryHeap *v4; // rax
  Scaleform::Render::Text::DocView *pObject; // rcx
  Scaleform::Render::Text::DocView *v6; // rcx
  Scaleform::Render::TreeText *RenderNode; // rax
  Scaleform::Render::Text::TextFormat fmt; // [rsp+20h] [rbp-58h] BYREF

  v4 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  Scaleform::Render::Text::TextFormat::TextFormat(&fmt, v4);
  pObject = this->pDocument.pObject;
  fmt.PresentMask |= 1u;
  rgb &= 0xFFFFFFu;
  fmt.ColorV = rgb | fmt.ColorV & 0xFF000000;
  Scaleform::Render::Text::DocView::SetTextFormat(pObject, &fmt, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  Scaleform::Render::Text::TextFormat::operator=(
    &fmt,
    this->pDocument.pObject->pDocument.pObject->pDefaultTextFormat.pObject);
  v6 = this->pDocument.pObject;
  fmt.PresentMask |= 1u;
  fmt.ColorV = rgb | fmt.ColorV & 0xFF000000;
  Scaleform::Render::Text::StyledText::SetDefaultTextFormat(v6->pDocument.pObject, &fmt);
  this->Flags |= 0x10000u;
  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
  Scaleform::Render::Text::TextFormat::~TextFormat(&fmt);
}

char __fastcall Scaleform::GFx::TextField::SetTextValue(
        Scaleform::GFx::TextField *this,
        const char *pnewText,
        bool html,
        bool notifyVariable)
{
  const Scaleform::Render::Text::StyleManagerBase *v4; // r15
  unsigned __int64 v7; // rax
  const char *v9; // r8
  char v10; // si
  int v11; // ecx
  int v12; // edx
  unsigned __int8 AvmObjOffset; // al
  const Scaleform::Render::Matrix3x4<float> *v15; // rax
  char v16; // r14
  const char *v17; // r12
  Scaleform::RefCountVImpl *v18; // rbx
  const char *pData; // rax
  Scaleform::GFx::ASStringNode *pNode; // rcx
  Scaleform::Render::Text::DocView *pObject; // rsi
  bool v23; // r14
  const Scaleform::GFx::Text::StyleManager *pstyleMgr; // rax
  unsigned __int64 v25; // rsi
  char v26; // si
  Scaleform::MemoryHeap *v27; // rax
  const Scaleform::Render::Text::TextFormat *v28; // rax
  const Scaleform::Render::Text::ParagraphFormat *v29; // rax
  const Scaleform::MemoryHeap *v30; // rax
  Scaleform::GFx::ASStringNode *pText; // rcx
  Scaleform::Render::Text::DocView *v32; // rsi
  unsigned int v33; // er14
  bool v34; // r14
  const Scaleform::GFx::Text::StyleManager *StyleSheet; // rax
  unsigned __int64 Size; // rdx
  wchar_t *v37; // rdx
  Scaleform::MemoryHeap *v38; // rax
  const Scaleform::Render::Text::TextFormat *v39; // rax
  const Scaleform::Render::Text::ParagraphFormat *v40; // rax
  unsigned __int8 v41; // al
  const Scaleform::Render::Matrix3x4<float> *v42; // rax
  unsigned __int64 v43; // rdx
  Scaleform::Render::Text::EditorKitBase *v44; // rcx
  unsigned __int64 Length; // rbx
  unsigned __int8 v46; // al
  const Scaleform::Render::Matrix3x4<float> *v47; // rax
  Scaleform::GFx::TextField::CSSHolderBase *v48; // rax
  unsigned __int8 v49; // al
  const Scaleform::Render::Matrix3x4<float> *v50; // rax
  unsigned __int8 v51; // al
  const Scaleform::Render::Matrix3x4<float> *v52; // rax
  Scaleform::Render::TreeText *RenderNode; // rax
  Scaleform::Render::TreeText *v54; // rax
  char v55; // [rsp+40h] [rbp-C0h]
  Scaleform::GFx::ASString result; // [rsp+48h] [rbp-B8h] BYREF
  Scaleform::Render::Text::ParagraphFormat pparaFmt; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> imageInfoArray; // [rsp+78h] [rbp-88h] BYREF
  Scaleform::Render::Text::ParagraphFormat *ppdestParaFmt; // [rsp+98h] [rbp-68h] BYREF
  Scaleform::Render::Text::TextFormat ptextFmt; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::Render::Text::TextFormat v62; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v63[3]; // [rsp+140h] [rbp+40h] BYREF
  char v64; // [rsp+158h] [rbp+58h]
  Scaleform::WStringBuffer::ReserveHeader v65; // [rsp+160h] [rbp+60h]
  char v66[1024]; // [rsp+170h] [rbp+70h] BYREF
  Scaleform::WStringBuffer::ReserveHeader v67; // [rsp+570h] [rbp+470h]
  char v68[1024]; // [rsp+580h] [rbp+480h] BYREF
  Scaleform::WStringBuffer pstring; // [rsp+980h] [rbp+880h] BYREF
  Scaleform::WStringBuffer pBuffer; // [rsp+9A0h] [rbp+8A0h] BYREF

  v4 = 0i64;
  LODWORD(result.pNode) = 0;
  v7 = (this->OriginalTextValue.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12;
  v9 = &pnewText[-v7];
  v10 = 0;
  do
  {
    v11 = (unsigned __int8)v9[v7];
    v12 = *(unsigned __int8 *)v7 - v11;
    if ( v12 )
      break;
    ++v7;
  }
  while ( v11 );
  if ( !v12 && (this->Flags & 0x10000) == 0 )
    return 0;
  this->Flags &= ~0x10000u;
  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v15 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                              + 4 * AvmObjOffset))->GetMatrix3D((char *)this + 4 * AvmObjOffset);
    if ( (*(unsigned __int8 (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v15->M[0][0]
                                                                                        + 184i64))(v15) )
    {
      this->Flags |= 2u;
      html = 1;
    }
  }
  Scaleform::String::operator=(&this->OriginalTextValue, pnewText);
  if ( html )
    this->Flags |= 0x1000u;
  else
    this->Flags &= ~0x1000u;
  v16 = 0;
  v17 = (const char *)((this->OriginalTextValue.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  if ( (this->Flags & 8) != 0 )
    goto LABEL_43;
  v18 = (Scaleform::RefCountVImpl *)this->pASRoot->pMovieImpl->GetStateAddRef(
                                      &this->pASRoot->pMovieImpl->Scaleform::GFx::StateBag,
                                      1i64);
  if ( !v18 )
    goto LABEL_43;
  if ( (this->DOFlags & 2) != 0 )
  {
    pData = &::pnewText;
  }
  else
  {
    v10 = 1;
    pData = Scaleform::GFx::DisplayObject::GetName(this, &result)->pNode->pData;
  }
  v65.Size = 512i64;
  v65.pBuffer = (wchar_t *)v66;
  v67.pBuffer = (wchar_t *)v68;
  pstring.pText = (wchar_t *)v66;
  pBuffer.pText = (wchar_t *)v68;
  v67.Size = 512i64;
  pstring.Reserved = v65;
  v63[1] = (__int64)&pstring;
  v63[0] = 0i64;
  v64 = 0;
  pstring.Length = 0i64;
  pBuffer.Length = 0i64;
  pBuffer.Reserved = v67;
  v63[2] = (__int64)pData;
  if ( (v10 & 1) != 0 )
  {
    pNode = result.pNode;
    if ( result.pNode->RefCount-- == 1 )
      Scaleform::GFx::ASStringNode::ReleaseNode(pNode);
  }
  if ( !html || (((__int64 (__fastcall *)(Scaleform::RefCountVImpl *))v18->AddRef)(v18) & 1) != 0 )
  {
    v25 = (int)(Scaleform::UTF8Util::GetLength(v17, -1i64) + 1);
    Scaleform::WStringBuffer::Resize(&pBuffer, v25);
    Scaleform::UTF8Util::DecodeStringSafe(pBuffer.pText, v25, v17, -1i64);
    v63[0] = (__int64)pBuffer.pText;
    if ( html )
      v64 |= 4u;
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int64 *))v18->Release)(v18, v63);
  }
  else
  {
    pObject = this->pDocument.pObject;
    v23 = (this->Flags & 0x10) != 0;
    pstyleMgr = Scaleform::GFx::TextField::GetStyleSheet(this);
    Scaleform::Render::Text::DocView::ParseHtml(pObject, v17, 0xFFFFFFFFFFFFFFFFui64, v23, 0i64, pstyleMgr, 0i64, 0i64);
    Scaleform::Render::Text::StyledText::GetText(this->pDocument.pObject->pDocument.pObject, &pBuffer);
    if ( (((__int64 (__fastcall *)(Scaleform::RefCountVImpl *))v18->AddRef)(v18) & 2) != 0 )
      Scaleform::WStringBuffer::StripTrailingNewLines(&pBuffer);
    v63[0] = (__int64)pBuffer.pText;
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int64 *))v18->Release)(v18, v63);
    v16 = 0;
  }
  v26 = v64 & 1;
  v55 = v64 & 1;
  if ( (v64 & 1) != 0 )
  {
    if ( (v64 & 2) != 0 )
    {
      v27 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
      Scaleform::Render::Text::TextFormat::TextFormat(&ptextFmt, v27);
      pparaFmt.pAllocator = 0i64;
      pparaFmt.RefCount = 1;
      memset(&pparaFmt.pTabStops, 0, 20);
      Scaleform::GFx::TextField::GetInitialFormats(this, &ptextFmt, &pparaFmt);
      if ( (this->DOFlags & 1) == 0 )
      {
        v28 = Scaleform::Render::Text::TextFormat::Merge(
                &ptextFmt,
                &v62,
                this->pDocument.pObject->pDocument.pObject->pDefaultTextFormat.pObject);
        Scaleform::Render::Text::TextFormat::operator=(&ptextFmt, v28);
        Scaleform::Render::Text::TextFormat::~TextFormat(&v62);
        v29 = Scaleform::Render::Text::ParagraphFormat::Merge(
                &pparaFmt,
                (Scaleform::Render::Text::ParagraphFormat *)&v62,
                this->pDocument.pObject->pDocument.pObject->pDefaultParagraphFormat.pObject);
        Scaleform::Render::Text::ParagraphFormat::operator=(&pparaFmt, v29);
        Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat((Scaleform::Render::Text::ParagraphFormat *)&v62);
      }
      v30 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
      pText = (Scaleform::GFx::ASStringNode *)&unk_140740B00;
      v32 = this->pDocument.pObject;
      v33 = this->Flags >> 4;
      imageInfoArray.Data.pHeap = v30;
      v34 = v33 & 1;
      imageInfoArray.Data.Data = 0i64;
      imageInfoArray.Data.Size = 0i64;
      if ( pstring.pText )
        pText = (Scaleform::GFx::ASStringNode *)pstring.pText;
      imageInfoArray.Data.Policy.Capacity = 0i64;
      result.pNode = pText;
      StyleSheet = Scaleform::GFx::TextField::GetStyleSheet(this);
      Scaleform::Render::Text::DocView::ParseHtml(
        v32,
        (const wchar_t *)result.pNode,
        0xFFFFFFFFFFFFFFFFui64,
        v34,
        &imageInfoArray,
        StyleSheet,
        &ptextFmt,
        &pparaFmt);
      Size = imageInfoArray.Data.Size;
      if ( imageInfoArray.Data.Size )
      {
        Scaleform::GFx::TextField::ProcessImageTags(this, &imageInfoArray);
        Size = imageInfoArray.Data.Size;
      }
      Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::HTMLImageTagInfo>::DestructArray(
        imageInfoArray.Data.Data,
        Size);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, imageInfoArray.Data.Data);
      Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&pparaFmt);
      Scaleform::Render::Text::TextFormat::~TextFormat(&ptextFmt);
      v26 = v55;
    }
    else
    {
      Scaleform::Render::Text::StyledText::GetTextAndParagraphFormat(
        this->pDocument.pObject->pDocument.pObject,
        (const Scaleform::Render::Text::TextFormat **)&result,
        (const Scaleform::Render::Text::ParagraphFormat **)&ppdestParaFmt,
        0i64);
      Scaleform::Render::Text::StyledText::SetDefaultTextFormat(
        this->pDocument.pObject->pDocument.pObject,
        (const Scaleform::Render::Text::TextFormat *)result.pNode);
      Scaleform::Render::Text::StyledText::SetDefaultParagraphFormat(
        this->pDocument.pObject->pDocument.pObject,
        ppdestParaFmt);
      v37 = (wchar_t *)&unk_140740B00;
      if ( pstring.pText )
        v37 = pstring.pText;
      Scaleform::Render::Text::DocView::SetText(this->pDocument.pObject, v37, 0xFFFFFFFFFFFFFFFFui64);
    }
    v16 = 1;
  }
  Scaleform::WStringBuffer::~WStringBuffer(&pBuffer);
  Scaleform::WStringBuffer::~WStringBuffer(&pstring);
  Scaleform::RefCountImpl::Release(v18);
  if ( !v26 )
  {
LABEL_43:
    if ( html )
    {
      v38 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
      Scaleform::Render::Text::TextFormat::TextFormat(&ptextFmt, v38);
      pparaFmt.pAllocator = 0i64;
      pparaFmt.RefCount = 1;
      memset(&pparaFmt.pTabStops, 0, 20);
      Scaleform::GFx::TextField::GetInitialFormats(this, &ptextFmt, &pparaFmt);
      if ( (this->DOFlags & 1) == 0 )
      {
        v39 = Scaleform::Render::Text::TextFormat::Merge(
                &ptextFmt,
                &v62,
                this->pDocument.pObject->pDocument.pObject->pDefaultTextFormat.pObject);
        Scaleform::Render::Text::TextFormat::operator=(&ptextFmt, v39);
        Scaleform::Render::Text::TextFormat::~TextFormat(&v62);
        v40 = Scaleform::Render::Text::ParagraphFormat::Merge(
                &pparaFmt,
                (Scaleform::Render::Text::ParagraphFormat *)&v62,
                this->pDocument.pObject->pDocument.pObject->pDefaultParagraphFormat.pObject);
        Scaleform::Render::Text::ParagraphFormat::operator=(&pparaFmt, v40);
        Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat((Scaleform::Render::Text::ParagraphFormat *)&v62);
      }
      imageInfoArray.Data.pHeap = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(
                                    Scaleform::Memory::pGlobalHeap,
                                    this);
      v41 = this->AvmObjOffset;
      memset(&imageInfoArray, 0, 24);
      if ( v41 )
      {
        v42 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                  + 4 * v41))->GetMatrix3D((char *)this + 4 * v41);
        v4 = (const Scaleform::Render::Text::StyleManagerBase *)(*(__int64 (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v42->M[0][0] + 176i64))(v42);
      }
      Scaleform::Render::Text::DocView::ParseHtml(
        this->pDocument.pObject,
        v17,
        0xFFFFFFFFFFFFFFFFui64,
        (this->Flags & 0x10) != 0,
        &imageInfoArray,
        v4,
        &ptextFmt,
        &pparaFmt);
      v43 = imageInfoArray.Data.Size;
      if ( imageInfoArray.Data.Size )
      {
        Scaleform::GFx::TextField::ProcessImageTags(this, &imageInfoArray);
        v43 = imageInfoArray.Data.Size;
      }
      Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::HTMLImageTagInfo>::DestructArray(
        imageInfoArray.Data.Data,
        v43);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, imageInfoArray.Data.Data);
      Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&pparaFmt);
      Scaleform::Render::Text::TextFormat::~TextFormat(&ptextFmt);
    }
    else
    {
      Scaleform::Render::Text::DocView::SetText(this->pDocument.pObject, v17, 0xFFFFFFFFFFFFFFFFui64);
    }
  }
  v44 = this->pDocument.pObject->pEditorKit.pObject;
  if ( v44 )
  {
    if ( !v44->IsReadOnly(v44) )
    {
      Length = Scaleform::Render::Text::StyledText::GetLength(this->pDocument.pObject->pDocument.pObject);
      if ( (unsigned __int64)Scaleform::GFx::MovieImpl::GetHeap((Scaleform::GFx::AS3::XMLSupportImpl *)this->pDocument.pObject->pEditorKit.pObject) > Length )
        Scaleform::GFx::Text::EditorKit::SetCursorPos(
          (Scaleform::GFx::Text::EditorKit *)this->pDocument.pObject->pEditorKit.pObject,
          Length,
          0);
    }
  }
  v46 = this->AvmObjOffset;
  if ( v46
    && (v47 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                  + 4 * v46))->GetMatrix3D((char *)this + 4 * v46),
        (*(unsigned __int8 (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v47->M[0][0]
                                                                                       + 184i64))(v47))
    && (this->pDocument.pObject->pDocument.pObject->RTFlags & 1) != 0 )
  {
    Scaleform::GFx::TextField::CollectUrlZones(this);
  }
  else
  {
    v48 = this->pCSSData.pObject;
    if ( v48 )
    {
      v48->MouseState[0] = 0i64;
      v48->MouseState[1] = 0i64;
      v48->MouseState[2] = 0i64;
      v48->MouseState[3] = 0i64;
      v48->MouseState[4] = 0i64;
      v48->MouseState[5] = 0i64;
      Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        &this->pCSSData.pObject->UrlZones.Ranges.Data,
        &this->pCSSData.pObject->UrlZones,
        0i64);
    }
  }
  if ( notifyVariable )
  {
    v49 = this->AvmObjOffset;
    if ( v49 )
    {
      v50 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                + 4 * v49))->GetMatrix3D((char *)this + 4 * v49);
      (*(void (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v50->M[0][0] + 256i64))(v50);
    }
  }
  if ( v16 )
  {
    v51 = this->AvmObjOffset;
    if ( v51 )
    {
      v52 = (*(Scaleform::GFx::TextField_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                + 4 * v51))->GetMatrix3D((char *)this + 4 * v51);
      (*(void (__fastcall **)(const Scaleform::Render::Matrix3x4<float> *))(*(_QWORD *)&v52->M[0][0] + 192i64))(v52);
    }
    RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
  }
  this->Flags |= 0x2000u;
  v54 = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(v54);
  return 1;
}

void __fastcall Scaleform::GFx::TextField::SetWidth(Scaleform::GFx::TextField *this, long double width)
{
  const Scaleform::Render::Rect<float> *ViewRect; // rax
  Scaleform::Render::Text::DocView *pObject; // rcx
  float x1; // xmm3_4
  float y2; // xmm2_4
  float v7; // xmm0_4
  Scaleform::Render::TreeText *RenderNode; // rax
  Scaleform::Render::Rect<float> rect; // [rsp+20h] [rbp-38h] BYREF

  ViewRect = Scaleform::Render::Text::DocView::GetViewRect(this->pDocument.pObject);
  pObject = this->pDocument.pObject;
  x1 = ViewRect->x1;
  y2 = ViewRect->y2;
  rect.y1 = ViewRect->y1;
  v7 = width * 20.0;
  rect.x1 = x1;
  rect.y2 = y2;
  rect.x2 = v7 + x1;
  Scaleform::Render::Text::DocView::SetViewRect(pObject, &rect, UseExternally);
  this->Flags |= 0x2000u;
  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
}

void __fastcall Scaleform::GFx::TextField::SetX(Scaleform::GFx::TextField *this, long double x)
{
  double v3; // xmm12_8
  const Scaleform::Render::Matrix2x4<float> *v4; // rax
  double v5; // xmm12_8
  float v6; // xmm10_4
  float v7; // xmm11_4
  float v8; // xmm0_4
  float v9; // xmm9_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm8_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  const Scaleform::Render::Rect<float> *ViewRect; // rax
  Scaleform::GFx::DisplayObjectBase::GeomDataType *pGeomData; // rcx
  double v19; // xmm12_8
  Scaleform::Render::Matrix2x4<float> v20; // [rsp+20h] [rbp-69h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+40h] [rbp-49h] BYREF

  v3 = x;
  if ( (*(_QWORD *)&x & 0x7FF0000000000000i64) != 0x7FF0000000000000i64 || (*(_QWORD *)&x & 0xFFFFFFFFFFFFFi64) == 0 )
  {
    if ( x == -INFINITY || x == INFINITY )
      v3 = 0.0;
    v4 = this->GetMatrix(this);
    v5 = v3 * 20.0;
    v6 = v4->M[0][0];
    v7 = v4->M[0][1];
    v8 = v4->M[0][2];
    v9 = v4->M[0][3];
    v10 = v4->M[1][0];
    v11 = v4->M[1][1];
    v12 = v4->M[1][2];
    v13 = v4->M[1][3];
    *(_QWORD *)&v20.M[0][0] = __PAIR64__(LODWORD(v7), LODWORD(v6));
    *(_QWORD *)&v20.M[0][2] = __PAIR64__(LODWORD(v9), LODWORD(v8));
    *(_QWORD *)&v20.M[1][0] = __PAIR64__(LODWORD(v11), LODWORD(v10));
    *(_QWORD *)&v20.M[1][2] = __PAIR64__(LODWORD(v13), LODWORD(v12));
    *(_QWORD *)&m.M[0][0] = __PAIR64__(LODWORD(v7), LODWORD(v6));
    *(_QWORD *)&m.M[0][2] = __PAIR64__(LODWORD(v9), LODWORD(v8));
    *(_QWORD *)&m.M[1][0] = __PAIR64__(LODWORD(v11), LODWORD(v10));
    *(_QWORD *)&m.M[1][2] = __PAIR64__(LODWORD(v13), LODWORD(v12));
    v14 = v5;
    Scaleform::Render::Matrix2x4<float>::SetInverse(&v20, &m);
    v15 = (float)((float)(v20.M[1][0] * v14) + (float)(v20.M[1][1] * v14)) + v20.M[1][3];
    v16 = (float)((float)(v20.M[0][0] * v14) + (float)(v20.M[0][1] * v14)) + v20.M[0][3];
    ViewRect = Scaleform::Render::Text::DocView::GetViewRect(this->pDocument.pObject);
    Scaleform::GFx::DisplayObjectBase::SetX(
      this,
      (float)((float)((float)((float)(v7 * v15) + (float)(v6 * (float)(v16 - ViewRect->x1))) + v9) * 0.050000001));
    pGeomData = this->pGeomData;
    if ( pGeomData )
    {
      if ( v5 <= 0.0 )
        v19 = v5 - 0.5;
      else
        v19 = v5 + 0.5;
      pGeomData->X = (int)v19;
    }
  }
}

void __fastcall Scaleform::GFx::TextField::SetXScale(Scaleform::GFx::TextField *this, long double xscale)
{
  Scaleform::Render::TreeText *RenderNode; // rax

  this->Flags |= 0x2000u;
  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
  Scaleform::GFx::DisplayObjectBase::SetXScale(this, xscale);
}

void __fastcall Scaleform::GFx::TextField::SetY(Scaleform::GFx::TextField *this, long double y)
{
  double v3; // xmm12_8
  double v4; // xmm12_8
  const Scaleform::Render::Matrix2x4<float> *v5; // rax
  float v6; // xmm8_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm11_4
  float v11; // xmm9_4
  float v12; // xmm4_4
  float v13; // xmm10_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  const Scaleform::Render::Rect<float> *ViewRect; // rax
  Scaleform::GFx::DisplayObjectBase::GeomDataType *pGeomData; // rcx
  double v18; // xmm12_8
  Scaleform::Render::Matrix2x4<float> v19; // [rsp+20h] [rbp-69h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+40h] [rbp-49h] BYREF

  v3 = y;
  if ( (*(_QWORD *)&y & 0x7FF0000000000000i64) != 0x7FF0000000000000i64 || (*(_QWORD *)&y & 0xFFFFFFFFFFFFFi64) == 0 )
  {
    if ( y == -INFINITY || y == INFINITY )
      v3 = 0.0;
    v4 = v3 * 20.0;
    v5 = this->GetMatrix(this);
    v6 = v4;
    v7 = v5->M[0][1];
    v8 = v5->M[0][2];
    v9 = v5->M[0][3];
    v10 = v5->M[1][0];
    v11 = v5->M[1][1];
    v12 = v5->M[1][2];
    v13 = v5->M[1][3];
    v19.M[0][0] = v5->M[0][0];
    *(_QWORD *)&v19.M[0][1] = __PAIR64__(LODWORD(v8), LODWORD(v7));
    v19.M[0][3] = v9;
    *(_QWORD *)&v19.M[1][0] = __PAIR64__(LODWORD(v11), LODWORD(v10));
    *(_QWORD *)&v19.M[1][2] = __PAIR64__(LODWORD(v13), LODWORD(v12));
    *(_QWORD *)&m.M[0][0] = __PAIR64__(LODWORD(v7), LODWORD(v19.M[0][0]));
    *(_QWORD *)&m.M[0][2] = __PAIR64__(LODWORD(v9), LODWORD(v8));
    *(_QWORD *)&m.M[1][0] = __PAIR64__(LODWORD(v11), LODWORD(v10));
    *(_QWORD *)&m.M[1][2] = __PAIR64__(LODWORD(v13), LODWORD(v12));
    Scaleform::Render::Matrix2x4<float>::SetInverse(&v19, &m);
    v14 = (float)((float)(v19.M[1][1] * v6) + (float)(v19.M[1][0] * 0.0)) + v19.M[1][3];
    v15 = (float)((float)(v19.M[0][1] * v6) + (float)(v19.M[0][0] * 0.0)) + v19.M[0][3];
    ViewRect = Scaleform::Render::Text::DocView::GetViewRect(this->pDocument.pObject);
    Scaleform::GFx::DisplayObjectBase::SetY(
      this,
      (float)((float)((float)((float)(v10 * v15) + (float)(v11 * (float)(v14 - ViewRect->y1))) + v13) * 0.050000001));
    pGeomData = this->pGeomData;
    if ( pGeomData )
    {
      if ( v4 <= 0.0 )
        v18 = v4 - 0.5;
      else
        v18 = v4 + 0.5;
      pGeomData->Y = (int)v18;
    }
  }
}

void __fastcall Scaleform::GFx::TextField::SetYScale(Scaleform::GFx::TextField *this, long double yscale)
{
  Scaleform::Render::TreeText *RenderNode; // rax

  this->Flags |= 0x2000u;
  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
  Scaleform::GFx::DisplayObjectBase::SetYScale(this, yscale);
}

void __fastcall Scaleform::GFx::TextField::TextDocumentListener::TranslatorChanged(
        Scaleform::GFx::TextField::TextDocumentListener *this)
{
  Scaleform::RefCountVImpl *v2; // rax
  Scaleform::RefCountVImpl *v3; // rbx

  v2 = (Scaleform::RefCountVImpl *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[-12].HandlersMask + 16i64)
                                                                                           + 16i64)
                                                                               + 24i64))(
                                     *(_QWORD *)(*(_QWORD *)&this[-12].HandlersMask + 16i64) + 16i64,
                                     1i64);
  v3 = v2;
  if ( v2 && v2[1].RefCount )
    this->HandlersMask |= 1u;
  else
    this->HandlersMask &= ~1u;
  if ( v2 && (((__int64 (__fastcall *)(Scaleform::RefCountVImpl *))v2->AddRef)(v2) & 4) != 0 )
    this->HandlersMask |= 0x10u;
  else
    this->HandlersMask &= ~0x10u;
  if ( v3 )
    Scaleform::RefCountImpl::Release(v3);
}

Scaleform::GFx::DisplayObjectBase::GeomDataType *__fastcall Scaleform::GFx::TextField::UpdateAndGetGeomData(
        Scaleform::GFx::TextField *this,
        Scaleform::GFx::DisplayObjectBase::GeomDataType *pgeomData,
        bool force)
{
  const Scaleform::Render::Rect<float> *ViewRect; // rax
  float x1; // xmm6_4
  float y1; // xmm7_4
  float *v9; // rax
  double v10; // xmm4_8
  double v11; // xmm3_8
  double v12; // xmm4_8
  double v13; // xmm3_8

  Scaleform::GFx::DisplayObjectBase::GetGeomData(this, pgeomData);
  if ( force || (this->Flags & 0x2000) != 0 )
  {
    ViewRect = Scaleform::Render::Text::DocView::GetViewRect(this->pDocument.pObject);
    x1 = ViewRect->x1;
    y1 = ViewRect->y1;
    v9 = (float *)this->GetMatrix(this);
    v10 = *v9 * x1 + v9[1] * y1 + v9[3];
    v11 = v9[4] * x1 + v9[5] * y1 + v9[7];
    if ( v10 <= 0.0 )
      v12 = v10 - 0.5;
    else
      v12 = v10 + 0.5;
    pgeomData->X = (int)v12;
    if ( v11 <= 0.0 )
      v13 = v11 - 0.5;
    else
      v13 = v11 + 0.5;
    pgeomData->Y = (int)v13;
    Scaleform::GFx::DisplayObjectBase::SetGeomData(this, pgeomData);
    this->Flags &= ~0x2000u;
  }
  return pgeomData;
}

void __fastcall Scaleform::GFx::TextField::UpdateTransform3D(Scaleform::GFx::TextField *this)
{
  const Scaleform::Render::Rect<float> *ViewRect; // rax
  Scaleform::GFx::DisplayObjectBase::GeomDataType *pGeomData; // rbx
  __int128 v4; // xmm8
  __int128 v5; // xmm9
  __m128i v6; // xmm1
  __int128 v7; // xmm10
  float X; // xmm0_4
  __int128 v9; // xmm1
  float XScale; // xmm0_4
  float YScale; // xmm0_4
  double XRotation; // xmm1_8
  float v13; // xmm6_4
  float v14; // xmm7_4
  double YRotation; // xmm1_8
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm0_4
  double Rotation; // xmm1_8
  float v20; // xmm7_4
  float v21; // xmm6_4
  Scaleform::Render::Matrix3x4<float> v22; // [rsp+28h] [rbp-E0h] BYREF
  Scaleform::Render::Matrix3x4<float> m2_8; // [rsp+58h] [rbp-B0h] BYREF
  Scaleform::Render::Matrix3x4<float> m1; // [rsp+88h] [rbp-80h] BYREF
  Scaleform::Render::Matrix3x4<float> v25; // [rsp+B8h] [rbp-50h] BYREF
  Scaleform::Render::Matrix3x4<float> v26; // [rsp+E8h] [rbp-20h] BYREF
  Scaleform::Render::Matrix3x4<float> v27; // [rsp+118h] [rbp+10h] BYREF
  Scaleform::Render::Matrix3x4<float> v28; // [rsp+148h] [rbp+40h] BYREF
  Scaleform::Render::Matrix3x4<float> v29; // [rsp+178h] [rbp+70h] BYREF
  Scaleform::Render::Matrix3x4<float> v30; // [rsp+1A8h] [rbp+A0h] BYREF

  ViewRect = Scaleform::Render::Text::DocView::GetViewRect(this->pDocument.pObject);
  pGeomData = this->pGeomData;
  v4 = *(_OWORD *)&Scaleform::Render::Matrix3x4<float>::Identity.M[2][0];
  v5 = *(_OWORD *)&Scaleform::Render::Matrix3x4<float>::Identity.M[1][0];
  v6 = _mm_cvtsi32_si128(pGeomData->Y);
  v7 = *(_OWORD *)&Scaleform::Render::Matrix3x4<float>::Identity.M[0][0];
  X = (float)pGeomData->X;
  memset(&v22.M[1][2], 0, 24);
  *(_OWORD *)&v22.M[0][0] = 0x3F800000ui64;
  v22.M[1][1] = 1.0;
  *(float *)v6.m128i_i32 = _mm_cvtepi32_ps(v6).m128_f32[0] - ViewRect->y1;
  *(_QWORD *)&v22.M[0][3] = COERCE_UNSIGNED_INT(X - ViewRect->x1);
  LODWORD(v22.M[1][3]) = v6.m128i_i32[0];
  v9 = *(_OWORD *)&v22.M[0][0];
  *(_OWORD *)&v27.M[1][0] = *(_OWORD *)&v22.M[1][0];
  memset(&v22, 0, sizeof(v22));
  *(_OWORD *)&v27.M[0][0] = v9;
  *(_OWORD *)&v27.M[2][0] = *(_OWORD *)&v22.M[2][0];
  XScale = pGeomData->XScale;
  *(float *)&v9 = pGeomData->ZScale;
  v22.M[0][0] = XScale / 100.0;
  YScale = pGeomData->YScale;
  v22.M[2][2] = *(float *)&v9 / 100.0;
  v22.M[1][1] = YScale / 100.0;
  m2_8 = v22;
  XRotation = pGeomData->XRotation;
  if ( XRotation == 0.0 )
  {
    v22 = Scaleform::Render::Matrix3x4<float>::Identity;
  }
  else
  {
    v22.M[0][3] = 0.0;
    v22.M[1][3] = 0.0;
    v13 = XRotation * 3.141592653589793 / 180.0;
    v14 = cosf(v13);
    v22.M[2][1] = sinf(v13);
    LODWORD(v22.M[1][2]) = LODWORD(v22.M[2][1]) ^ _xmm;
    v22.M[1][1] = v14;
    *(_QWORD *)&v22.M[2][2] = LODWORD(v14);
    *(_QWORD *)&v22.M[0][0] = 1065353216i64;
    v22.M[1][0] = 0.0;
    v22.M[2][0] = 0.0;
    v22.M[0][2] = 0.0;
  }
  m1 = v22;
  YRotation = pGeomData->YRotation;
  if ( YRotation == 0.0 )
  {
    *(_OWORD *)&v22.M[0][0] = v7;
    *(_OWORD *)&v22.M[1][0] = v5;
    *(_OWORD *)&v22.M[2][0] = v4;
  }
  else
  {
    v22.M[0][3] = 0.0;
    v22.M[1][3] = 0.0;
    v16 = YRotation * 3.141592653589793 / 180.0;
    v17 = cosf(v16);
    v18 = sinf(v16);
    *(_QWORD *)&v22.M[0][0] = LODWORD(v17);
    *(_QWORD *)&v22.M[2][0] = LODWORD(v18) ^ (unsigned int)_xmm;
    v22.M[0][2] = v18;
    *(_QWORD *)&v22.M[2][2] = LODWORD(v17);
    v22.M[1][0] = 0.0;
    *(_QWORD *)&v22.M[1][1] = 1065353216i64;
  }
  v25 = v22;
  Rotation = pGeomData->Rotation;
  if ( Rotation == 0.0 )
  {
    *(_OWORD *)&v22.M[0][0] = v7;
    *(_OWORD *)&v22.M[1][0] = v5;
    *(_OWORD *)&v22.M[2][0] = v4;
  }
  else
  {
    v22.M[0][3] = 0.0;
    v20 = Rotation * 3.141592653589793 / 180.0;
    v21 = cosf(v20);
    *(_QWORD *)&v22.M[1][0] = __PAIR64__(LODWORD(v21), COERCE_UNSIGNED_INT(sinf(v20)));
    *(_QWORD *)&v22.M[0][1] = LODWORD(v22.M[1][0]) ^ (unsigned __int64)(unsigned int)_xmm;
    v22.M[0][0] = v21;
    *(_OWORD *)&v22.M[1][2] = 0ui64;
    *(_QWORD *)&v22.M[2][2] = 1065353216i64;
  }
  v26 = v22;
  Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&v22, &m1, &m2_8);
  Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&v29, &v26, &v25);
  Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&v30, &v29, &v22);
  Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&v28, &v27, &v30);
  if ( Scaleform::Render::Matrix3x4<float>::IsValid(&v28) )
    this->SetMatrix3D(this, &v28);
}

void __fastcall Scaleform::GFx::TextField::UpdateUrlStyles(Scaleform::GFx::TextField *this)
{
  Scaleform::GFx::TextField::CSSHolderBase *pObject; // rax
  unsigned int Size; // ecx
  __int64 v4; // rbp
  __int64 v5; // r14
  const Scaleform::Render::Text::StyleManagerBase *v6; // rax
  const Scaleform::Render::Text::TextFormat *v7; // rsi
  const Scaleform::Render::Text::StyleManagerBase *v8; // rax
  const Scaleform::Render::Text::TextFormat *v9; // rdi
  Scaleform::MemoryHeap *v10; // rax
  const Scaleform::Render::Text::TextFormat *v11; // rax
  const Scaleform::Render::Text::TextFormat *v12; // rax
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *Data; // rcx
  unsigned __int64 Index; // rsi
  unsigned __int64 v15; // rdi
  Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *v16; // r15
  Scaleform::Render::Text::StyledText *v17; // rax
  Scaleform::RefCountNTSImpl *v18; // rcx
  Scaleform::Render::Text::StyledText *v19; // rdi
  Scaleform::Render::Text::TextFormat fmt; // [rsp+20h] [rbp-B8h] BYREF
  Scaleform::Render::Text::TextFormat result; // [rsp+70h] [rbp-68h] BYREF

  pObject = this->pCSSData.pObject;
  if ( pObject )
  {
    Size = pObject->UrlZones.Ranges.Data.Size;
    if ( Size )
    {
      v4 = Size;
      v5 = 0i64;
      do
      {
        if ( this->pCSSData.pObject->HasASStyleSheet(this->pCSSData.pObject) )
        {
          v6 = this->pCSSData.pObject->GetTextStyleManager(this->pCSSData.pObject);
          v7 = (const Scaleform::Render::Text::TextFormat *)v6->GetStyle(v6, CSS_Tag, "a", -1ui64);
          v8 = this->pCSSData.pObject->GetTextStyleManager(this->pCSSData.pObject);
          v9 = (const Scaleform::Render::Text::TextFormat *)v8->GetStyle(v8, CSS_Tag, "a:link", -1ui64);
          v10 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
          Scaleform::Render::Text::TextFormat::TextFormat(&fmt, v10);
          if ( v7 )
          {
            v11 = Scaleform::Render::Text::TextFormat::Merge(&fmt, &result, v7);
            Scaleform::Render::Text::TextFormat::operator=(&fmt, v11);
            Scaleform::Render::Text::TextFormat::~TextFormat(&result);
          }
          if ( v9 )
          {
            v12 = Scaleform::Render::Text::TextFormat::Merge(&fmt, &result, v9);
            Scaleform::Render::Text::TextFormat::operator=(&fmt, v12);
            Scaleform::Render::Text::TextFormat::~TextFormat(&result);
          }
          Data = this->pCSSData.pObject->UrlZones.Ranges.Data.Data;
          Index = Data[v5].Index;
          v15 = Index + Data[v5].Length;
          Scaleform::Render::Text::DocView::SetTextFormat(this->pDocument.pObject, &fmt, Index, v15);
          v16 = this->pCSSData.pObject->UrlZones.Ranges.Data.Data;
          v17 = Scaleform::Render::Text::StyledText::CopyStyledText(
                  this->pDocument.pObject->pDocument.pObject,
                  Index,
                  v15);
          v18 = v16[v5].Data.SavedFmt.pObject;
          v19 = v17;
          if ( v18 )
            Scaleform::RefCountNTSImpl::Release(v18);
          v16[v5].Data.SavedFmt.pObject = v19;
          Scaleform::Render::Text::TextFormat::~TextFormat(&fmt);
        }
        ++v5;
        --v4;
      }
      while ( v4 );
    }
  }
}

void __fastcall Scaleform::GFx::TextField::TextDocumentListener::View_OnChanged(
        Scaleform::GFx::TextField::TextDocumentListener *this,
        Scaleform::Render::Text::DocView *__formal)
{
  Scaleform::Render::TreeText *RenderNode; // rax

  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode((Scaleform::GFx::DisplayObjectBase *)&this[-13].RefCount);
  Scaleform::Render::TreeText::NotifyLayoutChanged(RenderNode);
}

void __fastcall Scaleform::GFx::TextField::TextDocumentListener::View_OnMaxScrollChanged(
        Scaleform::GFx::TextField::TextDocumentListener *this,
        Scaleform::Render::Text::DocView *view,
        __int64 newScroll)
{
  unsigned __int8 v3; // al
  __int64 v4; // rax

  v3 = *(&this[-9].HandlersMask + 5);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(char *, Scaleform::Render::Text::DocView *, __int64))(*(_QWORD *)((char *)&this[-12] + 4 * v3 - 16)
                                                                                        + 32i64))(
           (char *)&this[-12] + 4 * v3 - 16,
           view,
           newScroll);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 224i64))(v4);
  }
}

__int64 __fastcall Scaleform::GFx::TextField::TextDocumentListener::View_OnLineFormat(
        Scaleform::GFx::TextField::TextDocumentListener *this,
        Scaleform::Render::Text::DocView *__formal,
        Scaleform::Render::Text::DocView::LineFormatDesc *desc)
{
  Scaleform::RefCountVImpl *v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 NumCharsInLine; // rcx
  unsigned __int8 v7; // di
  __int64 v9[4]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-38h]
  __m128 v11; // [rsp+48h] [rbp-30h]
  unsigned __int8 Alignment; // [rsp+58h] [rbp-20h]
  unsigned __int64 ProposedWordWrapPoint; // [rsp+60h] [rbp-18h]
  bool UseHyphenation; // [rsp+68h] [rbp-10h]

  v4 = (Scaleform::RefCountVImpl *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[-12].HandlersMask + 16i64)
                                                                                           + 16i64)
                                                                               + 24i64))(
                                     *(_QWORD *)(*(_QWORD *)&this[-12].HandlersMask + 16i64) + 16i64,
                                     1i64);
  if ( !v4 )
    goto LABEL_6;
  v5 = 0i64;
  NumCharsInLine = desc->NumCharsInLine;
  v9[3] = desc->LineStartPos;
  v9[2] = (__int64)desc->pWidths;
  v9[0] = (__int64)desc->pParaText;
  v9[1] = desc->ParaTextLen;
  ProposedWordWrapPoint = desc->ProposedWordWrapPoint;
  UseHyphenation = desc->UseHyphenation;
  Alignment = desc->Alignment;
  v10 = NumCharsInLine;
  v11 = _mm_mul_ps(*(__m128 *)&desc->VisibleRectWidth, (__m128)_xmm);
  if ( NumCharsInLine )
  {
    do
    {
      desc->pWidths[v5] = desc->pWidths[v5] * 0.050000001;
      ++v5;
    }
    while ( v5 < v10 );
  }
  if ( ((unsigned __int8 (__fastcall *)(Scaleform::RefCountVImpl *, __int64 *))v4->__vftable[1].~RefCountImplCore)(
         v4,
         v9) )
  {
    desc->ProposedWordWrapPoint = ProposedWordWrapPoint;
    desc->UseHyphenation = UseHyphenation;
    v7 = 1;
  }
  else
  {
LABEL_6:
    v7 = 0;
  }
  if ( v4 )
    Scaleform::RefCountImpl::Release(v4);
  return v7;
}

__int64 __fastcall Scaleform::GFx::TextField::TextDocumentListener::View_PrepareBidiText(
        Scaleform::GFx::TextField::TextDocumentListener *this,
        Scaleform::Render::Text::DocView *__formal,
        const wchar_t *paraText,
        unsigned __int64 textLen,
        wchar_t *newParaText,
        unsigned int *indexMap,
        bool *mirroredBits)
{
  __int64 v9; // rax
  Scaleform::RefCountVImpl *v10; // rbx
  unsigned __int8 v11; // di

  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[-12].HandlersMask + 16i64)
                                                               + 16i64)
                                                   + 24i64))(
         *(_QWORD *)(*(_QWORD *)&this[-12].HandlersMask + 16i64) + 16i64,
         1i64);
  v10 = (Scaleform::RefCountVImpl *)v9;
  if ( v9 && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8i64))(v9) & 4) != 0 )
    v11 = ((__int64 (__fastcall *)(Scaleform::RefCountVImpl *, const wchar_t *, unsigned __int64, wchar_t *, unsigned int *, bool *))v10->__vftable[1].AddRef)(
            v10,
            paraText,
            textLen,
            newParaText,
            indexMap,
            mirroredBits);
  else
    v11 = 0;
  if ( v10 )
    Scaleform::RefCountImpl::Release(v10);
  return v11;
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  const Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor> *v9; // rsi
  unsigned __int64 v10; // rax
  Scaleform::RefCountNTSImpl *pObject; // rcx
  volatile int *v12; // rbx
  int v13; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > v14; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v13 = 2;
    v6 = 0i64;
    v14.pTable = 0i64;
    v14.pTable = (Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 32 * v5 + 16, &v13);
    v14.pTable->EntryCount = 0i64;
    v14.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 2i64;
        v14.pTable[v7 - 1].EntryCount = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = (const Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor> *)&this->pTable[v6];
        if ( v9[1].First.HeapTypeBits != -2i64 )
        {
          v10 = Scaleform::String::BernsteinHashFunctionCIS(
                  (const void *)((v9[2].First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                  *(_QWORD *)(v9[2].First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
                  0x1505ui64);
          Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>>(
            &v14,
            pheapAddr,
            v9 + 2,
            v10);
          pObject = v9[2].Second.pObject;
          if ( pObject )
            Scaleform::RefCountNTSImpl::Release(pObject);
          v12 = (volatile int *)(v9[2].First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
          if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v12 + 2, -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v12);
          v9[1].First.HeapTypeBits = -2i64;
        }
        v6 += 2i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v14.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::Clear(this);
  }
}

