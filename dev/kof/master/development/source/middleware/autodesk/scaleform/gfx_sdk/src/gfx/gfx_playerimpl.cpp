#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displaylist.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stackmempool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_morphcharacter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/ime/gfx_imemanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_textfield.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_textfielddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_msgformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_locale.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loadprocess.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/text/text_editorkit.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asimemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

void Scaleform::GFx::ASUserData::SetLastObjectValue(Scaleform::GFx::Value::ObjectInterface * pobjIfc, void * pdata, bool isdobj); // 0x1402EA5A0
bool Scaleform::GFx::Movie::GetVariable(Scaleform::GFx::Value * pval, const char * ppathToVar); // 0x1402E3640
bool Scaleform::GFx::Movie::SetVariable(const char * ppathToVar, const Scaleform::GFx::Value & value, Scaleform::GFx::Movie::SetVarType setType); // 0x1402EADC0
bool Scaleform::GFx::Movie::SetVariableArray(Scaleform::GFx::Movie::SetArrayType type, const char * ppathToVar, unsigned long index, const void * pdata, unsigned long count, Scaleform::GFx::Movie::SetVarType setType); // 0x1402EADD0
bool Scaleform::GFx::Movie::Invoke(const char * pmethodName, Scaleform::GFx::Value * presult, const Scaleform::GFx::Value * pargs, unsigned long numArgs); // 0x1402E46B0
void Scaleform::GFx::Movie::CreateString(Scaleform::GFx::Value * pvalue, const char * pstring); // 0x1402E1560
void Scaleform::GFx::Movie::CreateObject(Scaleform::GFx::Value * pvalue, const char * className, const Scaleform::GFx::Value * pargs, unsigned long nargs); // 0x1402E1550
void Scaleform::GFx::Movie::CreateArray(Scaleform::GFx::Value * pvalue); // 0x1402E1140
void Scaleform::GFx::Movie::CreateFunction(Scaleform::GFx::Value * pvalue, Scaleform::GFx::FunctionHandler * pfc, void * puserData); // 0x1402E1210
bool Scaleform::GFx::Movie::IsAvailable(const char * ppathToVar); // 0x1402E4760
void Scaleform::GFx::Movie::SetExternalInterfaceRetVal(const Scaleform::GFx::Value & v); // 0x1402EA030
void Scaleform::GFx::Movie::Release(); // 0x1402E8300
class Scaleform::Ptr<Scaleform::GFx::MemoryContext>
{
protected:
	Scaleform::GFx::MemoryContext * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::MemoryContext>(const Scaleform::Ptr<Scaleform::GFx::MemoryContext> &);
	Ptr<Scaleform::GFx::MemoryContext>(Scaleform::GFx::MemoryContext *);
	Ptr<Scaleform::GFx::MemoryContext>(Scaleform::Ptr<Scaleform::GFx::MemoryContext> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::MemoryContext>(Scaleform::Pickable<Scaleform::GFx::MemoryContext>);
	Ptr<Scaleform::GFx::MemoryContext>(Scaleform::GFx::MemoryContext &);
	Ptr<Scaleform::GFx::MemoryContext>();
	~Ptr<Scaleform::GFx::MemoryContext>();
	bool operator==(Scaleform::GFx::MemoryContext *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::MemoryContext> &);
	bool operator!=(Scaleform::GFx::MemoryContext *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::MemoryContext> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::MemoryContext> &);
	Scaleform::Ptr<Scaleform::GFx::MemoryContext> & operator=(Scaleform::Pickable<Scaleform::GFx::MemoryContext>);
	const Scaleform::Ptr<Scaleform::GFx::MemoryContext> & operator=(Scaleform::GFx::MemoryContext &);
	const Scaleform::Ptr<Scaleform::GFx::MemoryContext> & operator=(Scaleform::GFx::MemoryContext *);
	const Scaleform::Ptr<Scaleform::GFx::MemoryContext> & operator=(const Scaleform::Ptr<Scaleform::GFx::MemoryContext> &);
	Scaleform::Ptr<Scaleform::GFx::MemoryContext> & SetPtr(Scaleform::Pickable<Scaleform::GFx::MemoryContext>);
	Scaleform::Ptr<Scaleform::GFx::MemoryContext> & SetPtr(Scaleform::GFx::MemoryContext &);
	Scaleform::Ptr<Scaleform::GFx::MemoryContext> & SetPtr(Scaleform::GFx::MemoryContext *);
	Scaleform::Ptr<Scaleform::GFx::MemoryContext> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::MemoryContext> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::MemoryContext * & GetRawRef();
	Scaleform::GFx::MemoryContext * GetPtr();
	Scaleform::GFx::MemoryContext & operator*();
	Scaleform::GFx::MemoryContext * operator->();
	Scaleform::GFx::MemoryContext * operator class Scaleform::GFx::MemoryContext *();
	Scaleform::Ptr<Scaleform::GFx::MemoryContext> & Pick(Scaleform::GFx::MemoryContext *);
	Scaleform::Ptr<Scaleform::GFx::MemoryContext> & Pick(Scaleform::Pickable<Scaleform::GFx::MemoryContext>);
	Scaleform::Ptr<Scaleform::GFx::MemoryContext> & Pick(Scaleform::Ptr<Scaleform::GFx::MemoryContext> &);
};
Scaleform::GFx::MovieImpl::MovieImpl(Scaleform::MemoryHeap * pheap); // 0x1402DCA80
Scaleform::Render::TreeNode::NodeData::NodeData(const Scaleform::Render::TreeNode::NodeData & __that); // 0x1402DD130
Scaleform::Render::TreeRoot::NodeData::NodeData(const Scaleform::Render::TreeRoot::NodeData & __that); // 0x1402DD2A0
Scaleform::ArrayDataLHCC<Scaleform::GFx::ASString,Scaleform::AllocatorLH<Scaleform::GFx::ASString,323>,Scaleform::ArrayDefaultPolicy>::~ArrayDataLHCC<Scaleform::GFx::ASString,Scaleform::AllocatorLH<Scaleform::GFx::ASString,323>,Scaleform::ArrayDefaultPolicy>(); // 0x1402DD720
Scaleform::GFx::FocusGroupDescr::~FocusGroupDescr(); // 0x1402DD790
Scaleform::GFx::MovieImpl::~MovieImpl(); // 0x1402DD8C0
Scaleform::Render::TreeNode::NodeData & Scaleform::Render::TreeNode::NodeData::operator=(const Scaleform::Render::TreeNode::NodeData & __that); // 0x1402DE190
Scaleform::Render::TreeRoot::NodeData & Scaleform::Render::TreeRoot::NodeData::operator=(const Scaleform::Render::TreeRoot::NodeData & __that); // 0x1402DE260
Scaleform::Render::StrokeStyleType & Scaleform::Render::StrokeStyleType::operator=(const Scaleform::Render::StrokeStyleType & __that); // 0x1402DE2E0
void Scaleform::GFx::MovieImpl::ClearPlayList(); // 0x1402E0DE0
void Scaleform::GFx::MovieImpl::SortPlayList(Scaleform::GFx::InteractiveObject * changedObj); // 0x1402EB310
void Scaleform::GFx::MovieImpl::SetASMovieRoot(Scaleform::GFx::ASMovieRootBase * pasmgr); // 0x1402E9D00
bool Scaleform::GFx::MovieImpl::GetMainMoviePath(Scaleform::String * ppath); // 0x1402E2C90
void Scaleform::GFx::MovieImpl::AddLoadQueueEntry(Scaleform::GFx::LoadQueueEntry * pentry); // 0x1402DEE80
void Scaleform::GFx::MovieImpl::AddLoadQueueEntryMT(Scaleform::GFx::LoadQueueEntryMT * pentryMT); // 0x1402DEEC0
Scaleform::GFx::MovieDefImpl * Scaleform::GFx::MovieImpl::CreateImageMovieDef(Scaleform::GFx::ImageResource * pimageResource, bool bilinear, const char * purl, Scaleform::GFx::LoadStates * pls); // 0x1402E1220
void Scaleform::GFx::MovieImpl::ProcessLoadQueue(); // 0x1402E70C0
void Scaleform::GFx::MovieImpl::DragState::InitCenterDelta(bool lockCenter, unsigned long mouseIndex); // 0x1402E4310
void Scaleform::GFx::MovieImpl::SetViewport(const Scaleform::GFx::Viewport & viewDesc); // 0x1402EAFE0
void Scaleform::GFx::MovieImpl::SetBackgroundColor(const Scaleform::Render::Color color); // 0x1402E9EA0
void Scaleform::GFx::MovieImpl::SetBackgroundAlpha(float alpha); // 0x1402E9E60
void Scaleform::GFx::MovieImpl::UpdateViewport(); // 0x1402ECBD0
void Scaleform::GFx::MovieImpl::ResetViewportMatrix(); // 0x1402E8F90
void Scaleform::GFx::MovieImpl::RestoreViewport(); // 0x1402E9B40
void Scaleform::GFx::MovieImpl::MakeViewAndPersp3D(Scaleform::Render::Matrix3x4<float> * matView, Scaleform::Render::Matrix4x4<float> * matPersp, const Scaleform::Render::Rect<float> & frameRect, const Scaleform::Render::Point<float> & projCenter, float fieldOfView, float focalLength, bool bInvertY); // 0x1402E51F0
void Scaleform::GFx::MovieImpl::UpdateViewAndPerspective(); // 0x1402ECB60
void Scaleform::GFx::MovieImpl::GetViewMatrix3D(Scaleform::Render::Matrix3x4<float> * viewMat); // 0x1402E3660
void Scaleform::GFx::MovieImpl::SetViewMatrix3D(const Scaleform::Render::Matrix3x4<float> & viewMat); // 0x1402EAEB0
void Scaleform::GFx::MovieImpl::GetProjectionMatrix3D(Scaleform::Render::Matrix4x4<float> * projMat); // 0x1402E2E70
void Scaleform::GFx::MovieImpl::SetProjectionMatrix3D(const Scaleform::Render::Matrix4x4<float> & projMat); // 0x1402EAAD0
void Scaleform::GFx::MovieImpl::GetViewport(Scaleform::GFx::Viewport * pviewDesc); // 0x1402E36B0
void Scaleform::GFx::MovieImpl::SetViewScaleMode(Scaleform::GFx::Movie::ScaleModeType scaleMode); // 0x1402EAEF0
void Scaleform::GFx::MovieImpl::SetViewAlignment(Scaleform::GFx::Movie::AlignType align); // 0x1402EAE00
Scaleform::GFx::InteractiveObject * Scaleform::GFx::MovieImpl::GetTopMostEntity(const Scaleform::Render::Point<float> & mousePos, unsigned long controllerIdx, bool testAll, const Scaleform::GFx::InteractiveObject * ignoreMC); // 0x1402E3310
float Scaleform::GFx::MovieImpl::Advance(float deltaT, unsigned long frameCatchUpCount, bool capture); // 0x1402DF4D0
void Scaleform::GFx::MovieImpl::Capture(bool onChangeOnly); // 0x1402E0440
void Scaleform::GFx::MovieImpl::ProcessInput(); // 0x1402E6C30
void Scaleform::GFx::MovieImpl::ProcessStatus(const Scaleform::GFx::InputEventsQueueEntry * qe); // 0x1402E7690
void Scaleform::GFx::MovieImpl::ProcessAccelerometer(const Scaleform::GFx::InputEventsQueueEntry * qe); // 0x1402E5D90
void Scaleform::GFx::MovieImpl::ProcessGeolocation(const Scaleform::GFx::InputEventsQueueEntry * qe); // 0x1402E6BC0
void Scaleform::GFx::MovieImpl::ProcessKeyboard(const Scaleform::GFx::InputEventsQueueEntry * qe, Scaleform::GFx::ProcessFocusKeyInfo * focusKeyInfo); // 0x1402E6F00
void Scaleform::GFx::MovieImpl::ProcessMouse(const Scaleform::GFx::InputEventsQueueEntry * qe, unsigned long * miceProceededMask, bool avm2); // 0x1402E7230
void Scaleform::GFx::MovieImpl::SetDragState(const Scaleform::GFx::MovieImpl::DragState & st); // 0x1402E9F90
void Scaleform::GFx::MovieImpl::GetDragState(unsigned long mouseIndex, Scaleform::GFx::MovieImpl::DragState * st); // 0x1402E2210
void Scaleform::GFx::MovieImpl::SetDragStateTopmostEntity(unsigned long mouseIndex, Scaleform::GFx::InteractiveObject * topmostEntity); // 0x1402EA000
void Scaleform::GFx::MovieImpl::StopDrag(unsigned long mouseIndex); // 0x1402EB520
void Scaleform::GFx::MovieImpl::StopDragCharacter(const Scaleform::GFx::InteractiveObject * ch); // 0x1402EB560
bool Scaleform::GFx::MovieImpl::IsDragging(unsigned long mouseIndex); // 0x1402E4770
void Scaleform::GFx::MovieImpl::AdvanceFrame(bool nextFrame, float framePos); // 0x1402DFE40
class Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy>();
};
void Scaleform::GFx::MovieImpl::CheckMouseCursorType(unsigned long mouseIdx, Scaleform::GFx::InteractiveObject * ptopMouseCharacter); // 0x1402E0B30
void Scaleform::GFx::MovieImpl::ChangeMouseCursorType(unsigned long mouseIdx, unsigned long newCursorType); // 0x1402E0A90
unsigned long Scaleform::GFx::MovieImpl::HandleEvent(const Scaleform::GFx::Event & event); // 0x1402E3810
union Scaleform::GFx::MovieImpl::HandleEvent::__l2::<unnamed-type-$S4>
{
public:
	const Scaleform::GFx::Event * pevent; // 0x0
	const Scaleform::GFx::KeyEvent * pkeyEvent; // 0x0
	const Scaleform::GFx::MouseEvent * pmouseEvent; // 0x0
	const Scaleform::GFx::TouchEvent * ptouchEvent; // 0x0
	const Scaleform::GFx::GestureEvent * pgestureEvent; // 0x0
	const Scaleform::GFx::OrientationEvent * porientationEvent; // 0x0
	const Scaleform::GFx::CharEvent * pcharEvent; // 0x0
	const Scaleform::GFx::GamePadAnalogEvent * pgamepadAnalogEvent; // 0x0
	const Scaleform::GFx::IMEEvent * pimeEvent; // 0x0
	const Scaleform::GFx::SetFocusEvent * pfocusEvent; // 0x0
	const Scaleform::GFx::AccelerometerEvent * paccelerometerEvent; // 0x0
	const Scaleform::GFx::GeolocationEvent * pgeolocationEvent; // 0x0
	const Scaleform::GFx::StatusEvent * pstatusEvent; // 0x0
};
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_Instance_Mem; // 0x140A720FD
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_AbcFile_Mem; // 0x140A720E0
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_AbcConstPool_Mem; // 0x140A720FE
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_VMAbcFile_Mem; // 0x140A720EB
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_VMAbcFileIntNs_Mem; // 0x140A720EE
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_VMAbcFileIntNsSet_Mem; // 0x140A720F0
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_VMAbcFileIntStr_Mem; // 0x140A720F3
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_VMAbcFileBubble_Mem; // 0x140A720E6
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_VMAbcFileMBIArray_Mem; // 0x140A720C2
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_VMAbcFileWordCode_Mem; // 0x140A72101
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_Tracer_Mem; // 0x140A720E1
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_DebugInfo_Mem; // 0x140A720FB
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatIME_Mem; // 0x140A720E3
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatAmp_Mem; // 0x140A720F1
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatAmp_ProfileFrame; // 0x140A720ED
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatAmp_Message; // 0x140A720DC
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatAmp_Server; // 0x140A720CB
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatAmp_Callstack; // 0x140A720F8
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatAmp_InstrBuffer; // 0x140A720F2
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatFC_Mem; // 0x140A720E8
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatFC_Batch_Mem; // 0x140A720FA
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatFC_GlyphCache_Mem; // 0x140A720FC
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatFC_Other_Mem; // 0x140A72102
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_Tks; // 0x140A720C0
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_Advance_Tks; // 0x140A720EF
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_Action_Tks; // 0x140A720DB
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_Seek_Tks; // 0x140A720D5
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_Timeline_Tks; // 0x140A720F6
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_Input_Tks; // 0x140A720E9
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_Mouse_Tks; // 0x140A720CA
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_ScriptCommunication_Tks; // 0x140A720DE
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_GetVariable_Tks; // 0x140A720D2
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_SetVariable_Tks; // 0x140A720DA
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_Invoke_Tks; // 0x140A720EA
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_InvokeAction_Tks; // 0x140A720C7
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_Display_Tks; // 0x140A72104
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_FontThrash_Tks; // 0x140A720D1
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_GradientGen_Tks; // 0x140A72100
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_FontMiss_Tks; // 0x140A720CD
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_Counters; // 0x140A720C3
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_Invoke_Cnt; // 0x140A720E7
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_MCAdvance_Cnt; // 0x140A720F4
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_Tessellate_Cnt; // 0x140A720F5
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMD_Mem; // 0x140A72106
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMD_CharDefs_Mem; // 0x140A720EC
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMD_ShapeData_Mem; // 0x140A720C6
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMD_Tags_Mem; // 0x140A720D6
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMD_Fonts_Mem; // 0x140A720CC
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMD_Images_Mem; // 0x140A720D3
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMD_ASBinaryData_Mem; // 0x140A720C4
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMD_Other_Mem; // 0x140A720DD
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMD_Time; // 0x140A720D8
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMD_Load_Tks; // 0x140A720CE
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMD_Bind_Tks; // 0x140A720D7
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_Mem; // 0x140A72103
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_MovieClip_Mem; // 0x140A720C9
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_ActionScript_Mem; // 0x140A720C1
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_ASString_Mem; // 0x140A720D9
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_Text_Mem; // 0x140A720E5
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_XML_Mem; // 0x140A720C8
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_Other_Mem; // 0x140A720C5
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM; // 0x140A720F7
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_VM_Mem; // 0x140A720E4
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_CallFrame_Mem; // 0x140A720DF
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_VTable_Mem; // 0x140A720F9
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_DynAttrHash_Mem; // 0x140A720D4
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_SlotInfo_Mem; // 0x140A720D0
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_SlotInfoHash_Mem; // 0x140A72105
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_CTraits_Mem; // 0x140A720FF
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_Class_Mem; // 0x140A720CF
Scaleform::StatDesc Scaleform::GFx::SF_STAT_StatMV_VM_ITraits_Mem; // 0x140A720E2
void Scaleform::GFx::MovieImpl::NotifyMouseState(float x, float y, unsigned long buttons, unsigned long mouseIndex); // 0x1402E56B0
void Scaleform::GFx::MovieImpl::GetMouseState(unsigned long mouseIndex, float * x, float * y, unsigned long * buttons); // 0x1402E2DC0
bool Scaleform::GFx::MovieImpl::HitTest(float x, float y, Scaleform::GFx::Movie::HitTestType testCond, unsigned long controllerIdx); // 0x1402E4080
long Scaleform::GFx::MovieImpl::AddIntervalTimer(Scaleform::GFx::ASIntervalTimerIntf * timer); // 0x1402DEDE0
void Scaleform::GFx::MovieImpl::ClearIntervalTimer(long timerId); // 0x1402E0D60
void Scaleform::GFx::MovieImpl::ShutdownTimersForMovieDef(Scaleform::GFx::MovieDefImpl * defimpl); // 0x1402EB230
Scaleform::GFx::MovieDef * Scaleform::GFx::MovieImpl::GetMovieDef(); // 0x140370730
unsigned long Scaleform::GFx::MovieImpl::GetCurrentFrame(); // 0x1402E2190
bool Scaleform::GFx::MovieImpl::HasLooped(); // 0x1402E3F70
bool Scaleform::GFx::MovieImpl::ReleaseLevelMovie(long level); // 0x1402E8370
void Scaleform::GFx::MovieImpl::Restart(bool advance0); // 0x1402E97B0
void Scaleform::GFx::MovieImpl::SetKeyboardListener(Scaleform::GFx::KeyboardState::IListener * l); // 0x1402EA550
void Scaleform::GFx::MovieImpl::GotoFrame(unsigned long targetFrameNumber); // 0x1402E3730
bool Scaleform::GFx::MovieImpl::GotoLabeledFrame(const char * label, long offset); // 0x1402E3750
void Scaleform::GFx::MovieImpl::SetPause(bool pause); // 0x1402EA9D0
void Scaleform::GFx::MovieImpl::SetPlayState(Scaleform::GFx::PlayState s); // 0x1402EAAB0
Scaleform::GFx::PlayState Scaleform::GFx::MovieImpl::GetPlayState(); // 0x1402E2E50
void Scaleform::GFx::MovieImpl::SetVisible(bool visible); // 0x1402EB200
bool Scaleform::GFx::MovieImpl::GetVisible(); // 0x1402E36E0
void Scaleform::GFx::MovieImpl::AddStickyVariableNode(const Scaleform::GFx::ASString & path, Scaleform::GFx::MovieImpl::StickyVarNode * p); // 0x1402DF000
void Scaleform::GFx::MovieImpl::ClearStickyVariables(); // 0x1402E0E30
void Scaleform::GFx::MovieImpl::OnMovieFocus(bool set); // 0x1402E57B0
void Scaleform::GFx::MovieImpl::ResetFocusStates(); // 0x1402E8EB0
bool Scaleform::GFx::MovieImpl::SetControllerFocusGroup(unsigned long controllerIdx, unsigned long focusGroupIndex); // 0x1402E9F60
unsigned long Scaleform::GFx::MovieImpl::GetControllerFocusGroup(unsigned long controllerIdx); // 0x1402E20E0
void Scaleform::GFx::MovieImpl::FillTabableArray(const Scaleform::GFx::ProcessFocusKeyInfo * pfocusInfo); // 0x1402E1950
void Scaleform::GFx::MovieImpl::InitFocusKeyInfo(Scaleform::GFx::ProcessFocusKeyInfo * pfocusInfo, const Scaleform::GFx::InputEventsQueueEntry::KeyEntry & keyEntry, bool inclFocusEnabled, Scaleform::GFx::FocusGroupDescr * pfocusGroup); // 0x1402E44F0
void Scaleform::GFx::MovieImpl::ProcessFocusKey(Scaleform::GFx::Event::EventType event, const Scaleform::GFx::InputEventsQueueEntry::KeyEntry & keyEntry, Scaleform::GFx::ProcessFocusKeyInfo * pfocusInfo); // 0x1402E5DF0
void Scaleform::GFx::MovieImpl::FinalizeProcessFocusKey(Scaleform::GFx::ProcessFocusKeyInfo * pfocusInfo); // 0x1402E1AF0
void Scaleform::GFx::MovieImpl::SetModalClip(Scaleform::GFx::Sprite * pmovie, unsigned long controllerIdx); // 0x1402EA880
Scaleform::GFx::Sprite * Scaleform::GFx::MovieImpl::GetModalClip(unsigned long controllerIdx); // 0x1402E2D50
unsigned long Scaleform::GFx::MovieImpl::GetControllerMaskByFocusGroup(unsigned long focusGroupIndex); // 0x1402E2100
void Scaleform::GFx::MovieImpl::UpdateFocusRectRenderNodes(); // 0x1402EC3E0
class Scaleform::Ptr<Scaleform::Render::ShapeDataFloat>
{
protected:
	Scaleform::Render::ShapeDataFloat * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ShapeDataFloat>(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	Ptr<Scaleform::Render::ShapeDataFloat>(Scaleform::Render::ShapeDataFloat *);
	Ptr<Scaleform::Render::ShapeDataFloat>(Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ShapeDataFloat>(Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>);
	Ptr<Scaleform::Render::ShapeDataFloat>(Scaleform::Render::ShapeDataFloat &);
	Ptr<Scaleform::Render::ShapeDataFloat>();
	~Ptr<Scaleform::Render::ShapeDataFloat>();
	bool operator==(Scaleform::Render::ShapeDataFloat *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	bool operator!=(Scaleform::Render::ShapeDataFloat *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & operator=(Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & operator=(Scaleform::Render::ShapeDataFloat &);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & operator=(Scaleform::Render::ShapeDataFloat *);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & operator=(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & SetPtr(Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & SetPtr(Scaleform::Render::ShapeDataFloat &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & SetPtr(Scaleform::Render::ShapeDataFloat *);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ShapeDataFloat * & GetRawRef();
	Scaleform::Render::ShapeDataFloat * GetPtr();
	Scaleform::Render::ShapeDataFloat & operator*();
	Scaleform::Render::ShapeDataFloat * operator->();
	Scaleform::Render::ShapeDataFloat * operator class Scaleform::Render::ShapeDataFloat *();
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & Pick(Scaleform::Render::ShapeDataFloat *);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & Pick(Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & Pick(Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
};
void Scaleform::GFx::MovieImpl::HideFocusRect(unsigned long controllerIdx); // 0x1402E3FA0
bool Scaleform::GFx::MovieImpl::SetFocusTo(Scaleform::GFx::InteractiveObject * ch, unsigned long controllerIdx, Scaleform::GFx::FocusMovedType fmt); // 0x1402EA040
void Scaleform::GFx::MovieImpl::ResetInputFocus(unsigned long controllerIdx); // 0x1402E8F80
bool Scaleform::GFx::MovieImpl::QueueSetFocusTo(Scaleform::GFx::InteractiveObject * ch, Scaleform::GFx::InteractiveObject * ptopMostCh, unsigned long controllerIdx, Scaleform::GFx::FocusMovedType fmt, Scaleform::GFx::ProcessFocusKeyInfo * pfocusKeyInfo); // 0x1402E77F0
void Scaleform::GFx::MovieImpl::TransferFocus(Scaleform::GFx::InteractiveObject * pNewFocus, unsigned long controllerIdx, Scaleform::GFx::FocusMovedType fmt); // 0x1402EB650
void Scaleform::GFx::MovieImpl::SetKeyboardFocusTo(Scaleform::GFx::InteractiveObject * ch, unsigned long controllerIdx, Scaleform::GFx::FocusMovedType fmt); // 0x1402EA360
void Scaleform::GFx::MovieImpl::ResetFocusForChar(Scaleform::GFx::InteractiveObject * ch); // 0x1402E8D00
bool Scaleform::GFx::MovieImpl::IsFocused(const Scaleform::GFx::InteractiveObject * ch); // 0x1402E47A0
void Scaleform::GFx::MovieImpl::AddTopmostLevelCharacter(Scaleform::GFx::InteractiveObject * pch); // 0x1402DF0D0
class Scaleform::ArrayDH<Scaleform::GFx::DisplayObject *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::GFx::DisplayObject *,Scaleform::AllocatorDH<Scaleform::GFx::DisplayObject *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::GFx::DisplayObject ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH<Scaleform::GFx::DisplayObject *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH<Scaleform::GFx::DisplayObject *,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH<Scaleform::GFx::DisplayObject *,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH<Scaleform::GFx::DisplayObject *,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH<Scaleform::GFx::DisplayObject *,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH<Scaleform::GFx::DisplayObject *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH<Scaleform::GFx::DisplayObject *,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH<Scaleform::GFx::DisplayObject *,2,Scaleform::ArrayDefaultPolicy>();
};
void Scaleform::GFx::MovieImpl::RemoveTopmostLevelCharacter(Scaleform::GFx::DisplayObjectBase * pch); // 0x1402E8960
void Scaleform::GFx::MovieImpl::SetIMECandidateListStyle(const Scaleform::GFx::IMECandidateListStyle & st); // 0x1402EA1C0
void Scaleform::GFx::MovieImpl::GetIMECandidateListStyle(Scaleform::GFx::IMECandidateListStyle * pst); // 0x1402E23C0
bool Scaleform::GFx::MovieImpl::GetDirtyFlag(bool doReset); // 0x1402E21B0
Scaleform::Render::Text::Allocator * Scaleform::GFx::MovieImpl::GetTextAllocator(); // 0x1402E32D0
unsigned long long Scaleform::GFx::MovieImpl::GetASTimerMs(); // 0x1402E1E90
Scaleform::Render::Point<float> Scaleform::GFx::MovieImpl::TranslateToScreen(const Scaleform::Render::Point<float> & p, Scaleform::Render::Matrix2x4<float> * puserMatrix); // 0x1402EBCB0
Scaleform::Render::Rect<float> Scaleform::GFx::MovieImpl::TranslateToScreen(const Scaleform::Render::Rect<float> & r, Scaleform::Render::Matrix2x4<float> * puserMatrix); // 0x1402EBF00
bool Scaleform::GFx::MovieImpl::TranslateLocalToScreen(const char * pathToMovieClip, const Scaleform::Render::Point<float> & pt, Scaleform::Render::Point<float> * presPt, Scaleform::Render::Matrix2x4<float> * userMatrix); // 0x1402EB9A0
void Scaleform::GFx::MovieImpl::GetStats(Scaleform::StatBag * pbag, bool reset); // 0x1402E3260
void Scaleform::GFx::MovieImpl::ForceCollectGarbage(unsigned long gcFlags); // 0x1402E1E50
void Scaleform::GFx::MovieImpl::SuspendGC(bool suspend); // 0x1402EB630
void Scaleform::GFx::MovieImpl::ScheduleGC(unsigned long gcFlags); // 0x1402E9BF0
void Scaleform::GFx::MovieImpl::PrintObjectsReport(unsigned long flags, Scaleform::Log * log, const char * swfName, Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> * root, Scaleform::MemoryHeap * heap); // 0x1402E5D30
bool Scaleform::GFx::MovieImpl::SetLevelMovie(long level, Scaleform::GFx::DisplayObjContainer * psprite); // 0x1402EA5B0
Scaleform::GFx::ASString Scaleform::GFx::MovieImpl::CreateNewInstanceName(); // 0x1402E1450
Scaleform::Ptr<Scaleform::GFx::ImageResource> Scaleform::GFx::MovieImpl::GetImageResourceByLinkageId(Scaleform::GFx::MovieDefImpl * md, const char * linkageId); // 0x1402E2420
bool Scaleform::GFx::MovieImpl::ReadTextData(Scaleform::String * pdata, Scaleform::File * pfile, long * pfileLen, bool urlEncoded); // 0x1402E7F90
bool Scaleform::GFx::MovieImpl::ReadBinaryData(Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> * pdata, Scaleform::File * pfile, long * pfileLen); // 0x1402E79C0
void Scaleform::GFx::MovieImpl::ProcessUnloadQueue(); // 0x1402E76F0
Scaleform::GFx::FontManager * Scaleform::GFx::MovieImpl::FindFontManager(Scaleform::GFx::MovieDefImpl * pdefImpl); // 0x1402E1D30
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
bool Scaleform::GFx::MovieImpl::FindExportedResource(Scaleform::GFx::MovieDefImpl * localDef, Scaleform::GFx::ResourceBindData * presBindData, const Scaleform::String & symbol); // 0x1402E1C70
Scaleform::Render::DrawableImageContext * Scaleform::GFx::MovieImpl::GetDrawableImageContext(); // 0x1402E2280
Scaleform::GFx::DrawingContext * Scaleform::GFx::MovieImpl::CreateDrawingContext(); // 0x1402E1150
void Scaleform::GFx::MovieImpl::UpdateAllRenderNodes(); // 0x1402EC370
void Scaleform::GFx::MovieImpl::AddMovieDefToKillList(Scaleform::GFx::MovieDefImpl * md); // 0x1402DEF10
void Scaleform::GFx::MovieImpl::ProcessMovieDefToKillList(); // 0x1402E75C0
bool Scaleform::GFx::MovieImpl::Call(const char * extensionID, const char * contextID, const char * methodName, unsigned long argc, const Scaleform::GFx::Value * argv, Scaleform::GFx::Value * result); // 0x1402E03B0
const char * Scaleform::GFx::MovieImpl::GetExtensionDirectory(const char * extensionID); // 0x1402E2360
void Scaleform::GFx::MovieImpl::InitializeExtensionContext(const char * extensionID, const char * contextID); // 0x1402E4650
void Scaleform::GFx::MovieImpl::FinalizeExtensionContext(const char * extensionID, const char * contextID); // 0x1402E1A90
Scaleform::GFx::Value * Scaleform::GFx::MovieImpl::GetActionScriptData(const char * extensionID, const char * contextID); // 0x1402E2020
void Scaleform::GFx::MovieImpl::SetActionScriptData(const char * extensionID, const char * contextID, Scaleform::GFx::Value * data); // 0x1402E9DF0
Scaleform::GFx::MovieImpl::MultitouchInputMode Scaleform::GFx::MovieImpl::GetMultitouchInputMode(); // 0x1402E2E40
void Scaleform::GFx::MovieImpl::SetMultitouchInputMode(Scaleform::GFx::MovieImpl::MultitouchInputMode mode); // 0x1402EA970
unsigned long Scaleform::GFx::MovieImpl::GetMaxTouchPoints(); // 0x1402E2CF0
unsigned long Scaleform::GFx::MovieImpl::GetSupportedGesturesMask(); // 0x1402E3280
bool Scaleform::GFx::MovieImpl::RegisterAccelerometer(long accelerometerId); // 0x1402E8120
bool Scaleform::GFx::MovieImpl::UnregisterAccelerometer(long accelerometerId); // 0x1402EC180
bool Scaleform::GFx::MovieImpl::IsAccelerometerMuted(); // 0x1402E46C0
bool Scaleform::GFx::MovieImpl::IsAccelerometerSupported(); // 0x1402E4710
void Scaleform::GFx::MovieImpl::SetAccelerometerInterval(long accelerometerId, long interval); // 0x1402E9D70
bool Scaleform::GFx::MovieImpl::RegisterGeolocation(long geolocationId); // 0x1402E8290
bool Scaleform::GFx::MovieImpl::UnregisterGeolocation(long geolocationId); // 0x1402EC290
bool Scaleform::GFx::MovieImpl::IsGeolocationMuted(); // 0x1402E4870
bool Scaleform::GFx::MovieImpl::IsGeolocationSupported(); // 0x1402E48C0
void Scaleform::GFx::MovieImpl::SetGeolocationInterval(long geolocationId, long interval); // 0x1402EA160
Scaleform::GFx::MovieImpl::ReturnValueHolder * Scaleform::GFx::MovieImpl::GetRetValHolder(); // 0x1402E2F10
void Scaleform::GFx::MovieImpl::ForceUpdateImages(); // 0x1402E1E60
void Scaleform::GFx::MovieImpl::AddIndirectTransformPair(Scaleform::GFx::DisplayObjContainer * origParent, Scaleform::Render::TreeNode * transformParent, Scaleform::GFx::DisplayObjectBase * obj); // 0x1402DED00
Scaleform::GFx::MovieImpl::IndirectTransPair Scaleform::GFx::MovieImpl::RemoveIndirectTransformPair(Scaleform::GFx::DisplayObjectBase * obj); // 0x1402E8830
void Scaleform::GFx::MovieImpl::ClearIndirectTransformPairs(); // 0x1402E0C60
void Scaleform::GFx::MovieImpl::UpdateTransformParent(Scaleform::GFx::DisplayObjectBase * obj, Scaleform::GFx::DisplayObjectBase * transfParent); // 0x1402ECAD0
bool Scaleform::GFx::MovieImpl::RegisterFont(Scaleform::GFx::MovieDef * md, Scaleform::GFx::FontResource * fontRes); // 0x1402E8180
void Scaleform::GFx::MovieImpl::UnregisterFonts(Scaleform::GFx::MovieDefImpl * pdefImpl); // 0x1402EC1E0
Scaleform::GFx::FontResource * Scaleform::GFx::MovieImpl::FindRegisteredFont(const char * pfontName, unsigned long matchFontFlags, Scaleform::GFx::MovieDef * * ppsrcMovieDef); // 0x1402E1D70
void Scaleform::GFx::MovieImpl::LoadRegisteredFonts(Scaleform::HashSet<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > & fonts); // 0x1402E4BB0
void Scaleform::GFx::MovieImpl::MakeAreaVisible(const Scaleform::Render::Rect<float> & screenRect, const Scaleform::Render::Rect<float> & box, unsigned long flags); // 0x1402E4CB0//decompilation failure at 140A720FD!
//decompilation failure at 140A720E0!
//decompilation failure at 140A720FE!
//decompilation failure at 140A720EB!
//decompilation failure at 140A720EE!
//decompilation failure at 140A720F0!
//decompilation failure at 140A720F3!
//decompilation failure at 140A720E6!
//decompilation failure at 140A720C2!
//decompilation failure at 140A72101!
//decompilation failure at 140A720E1!
//decompilation failure at 140A720FB!
//decompilation failure at 140A720E3!
//decompilation failure at 140A720F1!
//decompilation failure at 140A720ED!
//decompilation failure at 140A720DC!
//decompilation failure at 140A720CB!
//decompilation failure at 140A720F8!
//decompilation failure at 140A720F2!
//decompilation failure at 140A720E8!
//decompilation failure at 140A720FA!
//decompilation failure at 140A720FC!
//decompilation failure at 140A72102!
//decompilation failure at 140A720C0!
//decompilation failure at 140A720EF!
//decompilation failure at 140A720DB!
//decompilation failure at 140A720D5!
//decompilation failure at 140A720F6!
//decompilation failure at 140A720E9!
//decompilation failure at 140A720CA!
//decompilation failure at 140A720DE!
//decompilation failure at 140A720D2!
//decompilation failure at 140A720DA!
//decompilation failure at 140A720EA!
//decompilation failure at 140A720C7!
//decompilation failure at 140A72104!
//decompilation failure at 140A720D1!
//decompilation failure at 140A72100!
//decompilation failure at 140A720CD!
//decompilation failure at 140A720C3!
//decompilation failure at 140A720E7!
//decompilation failure at 140A720F4!
//decompilation failure at 140A720F5!
//decompilation failure at 140A72106!
//decompilation failure at 140A720EC!
//decompilation failure at 140A720C6!
//decompilation failure at 140A720D6!
//decompilation failure at 140A720CC!
//decompilation failure at 140A720D3!
//decompilation failure at 140A720C4!
//decompilation failure at 140A720DD!
//decompilation failure at 140A720D8!
//decompilation failure at 140A720CE!
//decompilation failure at 140A720D7!
//decompilation failure at 140A72103!
//decompilation failure at 140A720C9!
//decompilation failure at 140A720C1!
//decompilation failure at 140A720D9!
//decompilation failure at 140A720E5!
//decompilation failure at 140A720C8!
//decompilation failure at 140A720C5!
//decompilation failure at 140A720F7!
//decompilation failure at 140A720E4!
//decompilation failure at 140A720DF!
//decompilation failure at 140A720F9!
//decompilation failure at 140A720D4!
//decompilation failure at 140A720D0!
//decompilation failure at 140A72105!
//decompilation failure at 140A720FF!
//decompilation failure at 140A720CF!
//decompilation failure at 140A720E2!
Scaleform::Render::ContextImpl::Entry *__fastcall Scaleform::Render::ContextImpl::Context::CreateEntry<Scaleform::Render::TreeContainer>(
        Scaleform::Render::ContextImpl::Context *this)
{
  Scaleform::Render::TreeNode::NodeData *v2; // rax
  Scaleform::Render::TreeNode::NodeData *v3; // rbx

  v2 = (Scaleform::Render::TreeNode::NodeData *)this->pHeap->Alloc(this->pHeap, 160i64, 0i64);
  v3 = v2;
  if ( v2 )
  {
    Scaleform::Render::TreeNode::NodeData::NodeData(v2, ET_Container);
    v3->__vftable = (Scaleform::Render::TreeNode::NodeData_vtbl *)&Scaleform::Render::TreeContainer::NodeData::`vftable';
    *(_QWORD *)&v3[1].Type = 0i64;
    v3[1].__vftable = 0i64;
  }
  return Scaleform::Render::ContextImpl::Context::createEntryHelper(this, v3);
}

Scaleform::Render::ContextImpl::Entry *__fastcall Scaleform::Render::ContextImpl::Context::CreateEntry<Scaleform::Render::TreeShape>(
        Scaleform::Render::ContextImpl::Context *this)
{
  Scaleform::Render::TreeNode::NodeData *v2; // rax
  Scaleform::Render::TreeNode::NodeData *v3; // rbx

  v2 = (Scaleform::Render::TreeNode::NodeData *)this->pHeap->Alloc(this->pHeap, 160i64, 0i64);
  v3 = v2;
  if ( v2 )
  {
    Scaleform::Render::TreeNode::NodeData::NodeData(v2, ET_Shape);
    v3->__vftable = (Scaleform::Render::TreeNode::NodeData_vtbl *)&Scaleform::Render::TreeShape::NodeData::`vftable';
    v3[1].__vftable = 0i64;
    *(_DWORD *)&v3[1].Type = 0;
  }
  return Scaleform::Render::ContextImpl::Context::createEntryHelper(this, v3);
}

void __fastcall Scaleform::MsgFormat::FormatD1<unsigned long>(Scaleform::MsgFormat *this, const unsigned int *v)
{
  Scaleform::StackMemPool<512,8,Scaleform::MemPoolImmediateFree> *p_MemPool; // rdi
  char *BuffPtr; // r9
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  Scaleform::MemoryHeap *pHeap; // rcx
  Scaleform::Formatter *v9; // rax

  if ( Scaleform::MsgFormat::NextFormatter(this) )
  {
    p_MemPool = &this->MemPool;
    do
    {
      if ( this->MemPool.BuffSize < 0x60 )
      {
        pHeap = p_MemPool->pHeap;
        if ( !p_MemPool->pHeap )
          pHeap = Scaleform::Memory::pGlobalHeap;
        BuffPtr = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))pHeap->Alloc)(
                            pHeap,
                            96i64,
                            8i64);
      }
      else
      {
        BuffPtr = this->MemPool.BuffPtr;
        this->MemPool.BuffPtr = (char *)(((unsigned __int64)(BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
        v6 = ((unsigned __int64)(BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) - (_QWORD)p_MemPool;
        v7 = 512 - v6;
        if ( v6 >= 0x200 )
          v7 = 0i64;
        this->MemPool.BuffSize = v7;
      }
      if ( BuffPtr )
        Scaleform::LongFormatter::LongFormatter((Scaleform::LongFormatter *)BuffPtr, this, *v);
      else
        v9 = 0i64;
      Scaleform::MsgFormat::Bind(this, v9, 1);
    }
    while ( Scaleform::MsgFormat::NextFormatter(this) );
  }
  ++this->FirstArgNum;
}

void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy>,Scaleform::GFx::AutoTabSortFunctor>(
        Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        Scaleform::GFx::AutoTabSortFunctor less)
{
  signed __int64 v4; // r15
  unsigned __int64 v5; // r13
  char *v7; // rbp
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v8; // rsi
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v9; // rdi
  Scaleform::RefCountNTSImpl *pObject; // rbx
  signed __int64 v11; // rsi
  signed __int64 v12; // rdi
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v13; // r14
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v14; // r15
  Scaleform::RefCountNTSImpl *v15; // rbx
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v16; // r14
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v17; // r15
  Scaleform::RefCountNTSImpl *v18; // rbx
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v19; // r15
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v20; // r14
  Scaleform::RefCountNTSImpl *v21; // rbx
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *Data; // rax
  Scaleform::RefCountNTSImpl **p_pObject; // r14
  Scaleform::RefCountNTSImpl **v24; // r15
  Scaleform::RefCountNTSImpl **v25; // r15
  Scaleform::RefCountNTSImpl **v26; // r14
  Scaleform::RefCountNTSImpl *v27; // rbx
  signed __int64 v28; // r14
  unsigned __int64 i; // rbp
  unsigned __int64 j; // rsi
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v31; // rdi
  Scaleform::GFx::InteractiveObject *v32; // rax
  Scaleform::GFx::InteractiveObject *v33; // rax
  Scaleform::RefCountNTSImpl *v34; // rbx
  Scaleform::RefCountNTSImpl *v35; // rcx
  Scaleform::RefCountNTSImpl *v36; // rcx
  Scaleform::GFx::AutoTabSortFunctor v37; // [rsp+20h] [rbp-2F8h] BYREF
  char *v38; // [rsp+28h] [rbp-2F0h]
  unsigned __int64 v39; // [rsp+30h] [rbp-2E8h]
  char v40[640]; // [rsp+40h] [rbp-2D8h] BYREF

  v39 = end;
  v4 = end;
  v5 = start;
  if ( end - start >= 2 )
  {
    v7 = v40;
    while ( 1 )
    {
      while ( 1 )
      {
        v38 = v7;
        if ( (__int64)(v4 - v5) <= 9 )
          break;
        v8 = &arr->Data.Data[v5];
        v9 = &arr->Data.Data[v5 + (__int64)(v4 - v5) / 2];
        if ( v8->pObject )
          ++v8->pObject->RefCount;
        pObject = v8->pObject;
        if ( v9->pObject )
          ++v9->pObject->RefCount;
        if ( v8->pObject )
          Scaleform::RefCountNTSImpl::Release(v8->pObject);
        v8->pObject = v9->pObject;
        if ( pObject )
          ++pObject->RefCount;
        if ( v9->pObject )
          Scaleform::RefCountNTSImpl::Release(v9->pObject);
        v9->pObject = (Scaleform::GFx::InteractiveObject *)pObject;
        if ( pObject )
          Scaleform::RefCountNTSImpl::Release(pObject);
        v11 = v5 + 1;
        v12 = v4 - 1;
        if ( Scaleform::GFx::AutoTabSortFunctor::operator()(
               &v37,
               arr->Data.Data[v4 - 1].pObject,
               arr->Data.Data[v5 + 1].pObject) )
        {
          v13 = &arr->Data.Data[v12];
          v14 = &arr->Data.Data[v11];
          if ( v13->pObject )
            ++v13->pObject->RefCount;
          v15 = v13->pObject;
          if ( v14->pObject )
            ++v14->pObject->RefCount;
          if ( v13->pObject )
            Scaleform::RefCountNTSImpl::Release(v13->pObject);
          v13->pObject = v14->pObject;
          if ( v15 )
            ++v15->RefCount;
          if ( v14->pObject )
            Scaleform::RefCountNTSImpl::Release(v14->pObject);
          v14->pObject = (Scaleform::GFx::InteractiveObject *)v15;
          if ( v15 )
            Scaleform::RefCountNTSImpl::Release(v15);
        }
        if ( Scaleform::GFx::AutoTabSortFunctor::operator()(
               &v37,
               arr->Data.Data[v5].pObject,
               arr->Data.Data[v11].pObject) )
        {
          v16 = &arr->Data.Data[v5];
          v17 = &arr->Data.Data[v11];
          if ( v16->pObject )
            ++v16->pObject->RefCount;
          v18 = v16->pObject;
          if ( v17->pObject )
            ++v17->pObject->RefCount;
          if ( v16->pObject )
            Scaleform::RefCountNTSImpl::Release(v16->pObject);
          v16->pObject = v17->pObject;
          if ( v18 )
            ++v18->RefCount;
          if ( v17->pObject )
            Scaleform::RefCountNTSImpl::Release(v17->pObject);
          v17->pObject = (Scaleform::GFx::InteractiveObject *)v18;
          if ( v18 )
            Scaleform::RefCountNTSImpl::Release(v18);
        }
        if ( Scaleform::GFx::AutoTabSortFunctor::operator()(
               &v37,
               arr->Data.Data[v12].pObject,
               arr->Data.Data[v5].pObject) )
        {
          v19 = &arr->Data.Data[v12];
          v20 = &arr->Data.Data[v5];
          if ( v19->pObject )
            ++v19->pObject->RefCount;
          v21 = v19->pObject;
          if ( v20->pObject )
            ++v20->pObject->RefCount;
          if ( v19->pObject )
            Scaleform::RefCountNTSImpl::Release(v19->pObject);
          v19->pObject = v20->pObject;
          if ( v21 )
            ++v21->RefCount;
          if ( v20->pObject )
            Scaleform::RefCountNTSImpl::Release(v20->pObject);
          v20->pObject = (Scaleform::GFx::InteractiveObject *)v21;
          goto LABEL_54;
        }
        while ( 1 )
        {
          do
            ++v11;
          while ( Scaleform::GFx::AutoTabSortFunctor::operator()(
                    &v37,
                    arr->Data.Data[v11].pObject,
                    arr->Data.Data[v5].pObject) );
          do
            --v12;
          while ( Scaleform::GFx::AutoTabSortFunctor::operator()(
                    &v37,
                    arr->Data.Data[v5].pObject,
                    arr->Data.Data[v12].pObject) );
          Data = arr->Data.Data;
          if ( v11 > v12 )
            break;
          p_pObject = &Data[v11].pObject;
          v24 = &Data[v12].pObject;
          if ( *p_pObject )
            ++(*p_pObject)->RefCount;
          v21 = *p_pObject;
          if ( *v24 )
            ++(*v24)->RefCount;
          if ( *p_pObject )
            Scaleform::RefCountNTSImpl::Release(*p_pObject);
          *p_pObject = *v24;
          if ( v21 )
            ++v21->RefCount;
          if ( *v24 )
            Scaleform::RefCountNTSImpl::Release(*v24);
          *v24 = v21;
LABEL_54:
          if ( v21 )
            Scaleform::RefCountNTSImpl::Release(v21);
        }
        v25 = &Data[v5].pObject;
        v26 = &Data[v12].pObject;
        if ( *v25 )
          ++(*v25)->RefCount;
        v27 = *v25;
        if ( *v26 )
          ++(*v26)->RefCount;
        if ( *v25 )
          Scaleform::RefCountNTSImpl::Release(*v25);
        *v25 = *v26;
        if ( v27 )
          ++v27->RefCount;
        if ( *v26 )
          Scaleform::RefCountNTSImpl::Release(*v26);
        *v26 = v27;
        if ( v27 )
          Scaleform::RefCountNTSImpl::Release(v27);
        v4 = v39;
        if ( (__int64)(v12 - v5) <= (__int64)(v39 - v11) )
        {
          *((_QWORD *)v7 + 1) = v39;
          v4 = v12;
          *(_QWORD *)v7 = v11;
          v7 += 16;
          v39 = v12;
        }
        else
        {
          *(_QWORD *)v7 = v5;
          v5 = v11;
          *((_QWORD *)v7 + 1) = v12;
          v7 += 16;
        }
      }
      v28 = v5 + 1;
      for ( i = v5; v28 < v4; ++v28 )
      {
        for ( j = i;
              Scaleform::GFx::AutoTabSortFunctor::operator()(
                &v37,
                arr->Data.Data[i + 1].pObject,
                arr->Data.Data[i].pObject);
              j = i )
        {
          v31 = arr->Data.Data;
          v32 = arr->Data.Data[j + 1].pObject;
          if ( v32 )
            ++v32->RefCount;
          v33 = v31[j].pObject;
          v34 = v31[j + 1].pObject;
          if ( v33 )
            ++v33->RefCount;
          v35 = v31[j + 1].pObject;
          if ( v35 )
            Scaleform::RefCountNTSImpl::Release(v35);
          v31[j + 1] = v31[j];
          if ( v34 )
            ++v34->RefCount;
          v36 = v31[j].pObject;
          if ( v36 )
            Scaleform::RefCountNTSImpl::Release(v36);
          v31[j].pObject = (Scaleform::GFx::InteractiveObject *)v34;
          if ( v34 )
            Scaleform::RefCountNTSImpl::Release(v34);
          if ( i == v5 )
            break;
          --i;
        }
        i = v28;
      }
      if ( v38 <= v40 )
        break;
      v4 = *((_QWORD *)v38 - 1);
      v7 = v38 - 16;
      v39 = v4;
      v5 = *((_QWORD *)v38 - 2);
    }
  }
}

void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy>,Scaleform::GFx::TabIndexSortFunctor>(
        Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        Scaleform::GFx::TabIndexSortFunctor less)
{
  signed __int64 v4; // r12
  unsigned __int64 v5; // r13
  Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> *v6; // r14
  char *v7; // r15
  Scaleform::RefCountNTSImpl **p_pObject; // rsi
  Scaleform::RefCountNTSImpl **v9; // rdi
  Scaleform::RefCountNTSImpl *v10; // rbx
  signed __int64 v11; // rsi
  signed __int64 v12; // rdi
  unsigned __int64 v13; // r12
  signed __int64 v14; // r13
  Scaleform::GFx::InteractiveObject *pObject; // rcx
  Scaleform::RefCountNTSImpl **v16; // r15
  Scaleform::RefCountNTSImpl **v17; // r14
  Scaleform::RefCountNTSImpl *v18; // rbx
  Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> *v19; // rbp
  Scaleform::GFx::InteractiveObject *v20; // rdx
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v21; // r14
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v22; // r15
  Scaleform::RefCountNTSImpl *v23; // rbx
  unsigned __int64 v24; // rdx
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v25; // r14
  Scaleform::RefCountNTSImpl *v26; // rcx
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v27; // r15
  Scaleform::RefCountNTSImpl *v28; // rbx
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *Data; // rbp
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v30; // rcx
  __int16 TabIndex; // dx
  Scaleform::GFx::InteractiveObject *v32; // rax
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v33; // rcx
  Scaleform::GFx::InteractiveObject *v34; // rax
  Scaleform::GFx::InteractiveObject *v35; // rax
  Scaleform::GFx::InteractiveObject *v36; // rax
  Scaleform::RefCountNTSImpl *v37; // rcx
  Scaleform::RefCountNTSImpl *v38; // rcx
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v39; // r15
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v40; // r14
  Scaleform::RefCountNTSImpl *v41; // rbx
  signed __int64 *v42; // r15
  signed __int64 v43; // rbp
  unsigned __int64 i; // rsi
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *j; // rdi
  Scaleform::GFx::InteractiveObject *v46; // rax
  Scaleform::RefCountNTSImpl *v47; // rbx
  Scaleform::RefCountNTSImpl *v48; // rcx
  unsigned __int64 v49; // [rsp+20h] [rbp-2E8h]
  signed __int64 *v51; // [rsp+30h] [rbp-2D8h]
  unsigned __int64 v52; // [rsp+38h] [rbp-2D0h]
  char v53[640]; // [rsp+40h] [rbp-2C8h] BYREF

  v52 = end;
  v49 = start;
  v4 = end;
  v5 = start;
  v6 = arr;
  if ( end - start >= 2 )
  {
    v7 = v53;
    while ( 1 )
    {
      while ( 1 )
      {
        v51 = (signed __int64 *)v7;
        if ( (__int64)(v4 - v5) <= 9 )
          break;
        p_pObject = &v6->Data.Data[v5].pObject;
        v9 = &v6->Data.Data[v5 + (__int64)(v4 - v5) / 2].pObject;
        if ( *p_pObject )
          ++(*p_pObject)->RefCount;
        v10 = *p_pObject;
        if ( *v9 )
          ++(*v9)->RefCount;
        if ( *p_pObject )
          Scaleform::RefCountNTSImpl::Release(*p_pObject);
        *p_pObject = *v9;
        if ( v10 )
          ++v10->RefCount;
        if ( *v9 )
          Scaleform::RefCountNTSImpl::Release(*v9);
        *v9 = v10;
        if ( v10 )
          Scaleform::RefCountNTSImpl::Release(v10);
        v11 = v5 + 1;
        v12 = v4 - 1;
        v13 = v5 + 1;
        v14 = v12;
        pObject = v6->Data.Data[v12].pObject;
        v16 = &v6->Data.Data[v13].pObject;
        v17 = &v6->Data.Data[v12].pObject;
        if ( pObject->TabIndex < *((_WORD *)&(*v16)[11].RefCount + 2) )
        {
          if ( pObject )
            ++pObject->RefCount;
          v18 = *v17;
          if ( *v16 )
            ++(*v16)->RefCount;
          if ( *v17 )
            Scaleform::RefCountNTSImpl::Release(*v17);
          *v17 = *v16;
          if ( v18 )
            ++v18->RefCount;
          if ( *v16 )
            Scaleform::RefCountNTSImpl::Release(*v16);
          *v16 = v18;
          if ( v18 )
            Scaleform::RefCountNTSImpl::Release(v18);
        }
        v19 = arr;
        v20 = arr->Data.Data[v49].pObject;
        v21 = &arr->Data.Data[v49];
        v22 = &arr->Data.Data[v13];
        if ( v20->TabIndex < v22->pObject->TabIndex )
        {
          if ( v20 )
            ++v20->RefCount;
          v23 = v21->pObject;
          if ( v22->pObject )
            ++v22->pObject->RefCount;
          if ( v21->pObject )
            Scaleform::RefCountNTSImpl::Release(v21->pObject);
          v21->pObject = v22->pObject;
          if ( v23 )
            ++v23->RefCount;
          if ( v22->pObject )
            Scaleform::RefCountNTSImpl::Release(v22->pObject);
          v22->pObject = (Scaleform::GFx::InteractiveObject *)v23;
          if ( v23 )
            Scaleform::RefCountNTSImpl::Release(v23);
        }
        v24 = v49;
        v25 = &arr->Data.Data[v14];
        v26 = v25->pObject;
        v27 = &arr->Data.Data[v49];
        if ( v25->pObject->TabIndex < v27->pObject->TabIndex )
        {
          if ( v26 )
            ++v26->RefCount;
          v28 = v25->pObject;
          if ( v27->pObject )
            ++v27->pObject->RefCount;
          if ( v25->pObject )
            Scaleform::RefCountNTSImpl::Release(v25->pObject);
          v25->pObject = v27->pObject;
          if ( v28 )
            ++v28->RefCount;
          if ( v27->pObject )
            Scaleform::RefCountNTSImpl::Release(v27->pObject);
          v27->pObject = (Scaleform::GFx::InteractiveObject *)v28;
          if ( v28 )
LABEL_54:
            Scaleform::RefCountNTSImpl::Release(v28);
          v24 = v49;
        }
        while ( 1 )
        {
          Data = v19->Data.Data;
          v30 = &Data[v13];
          TabIndex = Data[v24].pObject->TabIndex;
          do
          {
            v32 = v30[1].pObject;
            ++v30;
            ++v11;
          }
          while ( v32->TabIndex < TabIndex );
          v33 = &Data[v14];
          do
          {
            v34 = v33[-1].pObject;
            --v33;
            --v12;
          }
          while ( TabIndex < v34->TabIndex );
          if ( v11 > v12 )
            break;
          v13 = v11;
          v35 = Data[v11].pObject;
          v14 = v12;
          if ( v35 )
            ++v35->RefCount;
          v36 = Data[v12].pObject;
          v28 = Data[v13].pObject;
          if ( v36 )
            ++v36->RefCount;
          v37 = Data[v13].pObject;
          if ( v37 )
            Scaleform::RefCountNTSImpl::Release(v37);
          Data[v13] = Data[v12];
          if ( v28 )
            ++v28->RefCount;
          v38 = Data[v12].pObject;
          if ( v38 )
            Scaleform::RefCountNTSImpl::Release(v38);
          v24 = v49;
          Data[v12].pObject = (Scaleform::GFx::InteractiveObject *)v28;
          v19 = arr;
          if ( v28 )
            goto LABEL_54;
        }
        v5 = v49;
        v39 = &arr->Data.Data[v49];
        v40 = &arr->Data.Data[v12];
        if ( v39->pObject )
          ++v39->pObject->RefCount;
        v41 = v39->pObject;
        if ( v40->pObject )
          ++v40->pObject->RefCount;
        if ( v39->pObject )
          Scaleform::RefCountNTSImpl::Release(v39->pObject);
        v39->pObject = v40->pObject;
        if ( v41 )
          ++v41->RefCount;
        if ( v40->pObject )
          Scaleform::RefCountNTSImpl::Release(v40->pObject);
        v40->pObject = (Scaleform::GFx::InteractiveObject *)v41;
        if ( v41 )
          Scaleform::RefCountNTSImpl::Release(v41);
        v4 = v52;
        v42 = v51;
        v6 = arr;
        if ( (__int64)(v12 - v49) <= (__int64)(v52 - v11) )
        {
          v51[1] = v52;
          v4 = v12;
          *v42 = v11;
          v7 = (char *)(v42 + 2);
          v52 = v12;
        }
        else
        {
          *v51 = v49;
          v5 = v11;
          v42[1] = v12;
          v7 = (char *)(v42 + 2);
          v49 = v11;
        }
      }
      v43 = v5 + 1;
      for ( i = v5; v43 < v4; ++v43 )
      {
        for ( j = &v6->Data.Data[i]; j[1].pObject->TabIndex < j->pObject->TabIndex; j = &v6->Data.Data[i] )
        {
          v46 = j[1].pObject;
          if ( v46 )
            ++v46->RefCount;
          v47 = j[1].pObject;
          if ( j->pObject )
            ++j->pObject->RefCount;
          v48 = j[1].pObject;
          if ( v48 )
            Scaleform::RefCountNTSImpl::Release(v48);
          j[1].pObject = j->pObject;
          if ( v47 )
            ++v47->RefCount;
          if ( j->pObject )
            Scaleform::RefCountNTSImpl::Release(j->pObject);
          j->pObject = (Scaleform::GFx::InteractiveObject *)v47;
          if ( v47 )
            Scaleform::RefCountNTSImpl::Release(v47);
          if ( i == v5 )
            break;
          --i;
        }
        i = v43;
      }
      if ( v7 <= v53 )
        break;
      v5 = *((_QWORD *)v7 - 2);
      v7 -= 16;
      v49 = v5;
      v4 = *((_QWORD *)v7 + 1);
      v52 = v4;
    }
  }
}

char __fastcall Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp>>::RemoveAlt<enum Scaleform::GFx::State::StateType>(
        Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> > *this,
        const Scaleform::GFx::State::StateType *key)
{
  Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> >::TableType *pTable; // r8
  __int64 v5; // r10
  __int64 NextInChain; // rcx
  Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> *v7; // rbx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  char *v12; // rdi
  Scaleform::RefCountVImpl *v13; // rcx

  pTable = this->pTable;
  if ( !this->pTable )
    return 0;
  v5 = *(int *)key;
  NextInChain = v5 & pTable->SizeMask;
  v7 = (Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> *)((char *)&pTable[1] + 24 * NextInChain);
  if ( v7->NextInChain == -2 || v7->HashValue != NextInChain )
    return 0;
  v8 = v5 & pTable->SizeMask;
  v9 = -1i64;
  while ( v7->HashValue != v8 || v7->Value.pState.pObject->SType != (_DWORD)v5 )
  {
    v9 = NextInChain;
    NextInChain = v7->NextInChain;
    if ( v7->NextInChain == -1 )
      return 0;
    v7 = (Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> *)((char *)&pTable[1] + 24 * NextInChain);
  }
  v10 = v7->NextInChain;
  if ( v8 == NextInChain )
  {
    if ( v10 != -1 )
    {
      pObject = (Scaleform::RefCountVImpl *)v7->Value.pState.pObject;
      v12 = (char *)pTable + 24 * v10;
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      v7->NextInChain = -2i64;
      Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp>::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp>(
        v7,
        (const Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> *)(v12 + 16));
      v7 = (Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> *)(v12 + 16);
    }
  }
  else
  {
    *(&pTable[1].EntryCount + 3 * v9) = v10;
  }
  v13 = (Scaleform::RefCountVImpl *)v7->Value.pState.pObject;
  if ( v13 )
    Scaleform::RefCountImpl::Release(v13);
  v7->NextInChain = -2i64;
  --this->pTable->EntryCount;
  return 1;
}

void __fastcall Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::Set<Scaleform::Render::Font *>(
        Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > *this,
        void *pmemAddr,
        Scaleform::Render::Font *const *key)
{
  Scaleform::RefCountVImpl *v3; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // rdx
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > >::TableType *pTable; // r9
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  bool v14; // zf
  unsigned __int64 *v15; // rdx
  Scaleform::RefCountVImpl *v16; // rbx
  char *v17; // rdi
  Scaleform::RefCountVImpl *v18; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (Scaleform::RefCountVImpl *)*key;
  if ( *key )
    Scaleform::Render::RenderBuffer::AddRef(*(Scaleform::RefCountVImpl **)key);
  v7 = 5381i64;
  v8 = 8i64;
  do
  {
    v9 = *((unsigned __int8 *)&retaddr + v8-- + 7);
    v7 = v9 + 65599 * v7;
  }
  while ( v8 );
  if ( v3 )
    Scaleform::RefCountImpl::Release(v3);
  pTable = this->pTable;
  if ( !this->pTable )
    goto LABEL_20;
  v11 = v7 & pTable->SizeMask;
  v12 = v11;
  v13 = v11 + 2 * (v11 + 1);
  v14 = *(&pTable->EntryCount + v13) == -2i64;
  v15 = &pTable->EntryCount + v13;
  if ( v14 || v15[1] != v11 )
    goto LABEL_20;
  while ( v15[1] != v11 || (Scaleform::Render::Font *const)v15[2] != *key )
  {
    v12 = *v15;
    if ( *v15 == -1i64 )
      goto LABEL_20;
    v15 = &pTable[v12 + 1].EntryCount + v12;
  }
  if ( v12 >= 0 )
  {
    v16 = (Scaleform::RefCountVImpl *)*key;
    v17 = (char *)pTable + 24 * v12;
    if ( *key )
      Scaleform::Render::RenderBuffer::AddRef(v16);
    v18 = (Scaleform::RefCountVImpl *)*((_QWORD *)v17 + 4);
    if ( v18 )
      Scaleform::RefCountImpl::Release(v18);
    *((_QWORD *)v17 + 4) = v16;
  }
  else
  {
LABEL_20:
    Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::add<Scaleform::Render::Font *>(
      this,
      pmemAddr,
      key,
      v7);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::add<Scaleform::Render::Font *>(
        Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > *this,
        void *pmemAddr,
        Scaleform::Render::Font *const *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rsi
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > >::TableType *v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 *v13; // rbx
  Scaleform::RefCountVImpl *v14; // rdi
  __int64 v15; // rdi
  unsigned __int64 *v16; // r15
  unsigned __int64 v17; // rax
  Scaleform::RefCountVImpl *v18; // rcx
  Scaleform::RefCountVImpl *v19; // rbp
  Scaleform::RefCountVImpl *v20; // rcx
  unsigned __int64 v21; // r14
  bool v22; // zf
  unsigned __int64 *i; // r14
  __int64 v24; // r14
  Scaleform::RefCountVImpl *v25; // rcx
  Scaleform::Render::Font *v26; // rdi
  Scaleform::RefCountVImpl *v27; // rcx

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
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::setRawCapacity(
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
    v14 = (Scaleform::RefCountVImpl *)*key;
    if ( *key )
      Scaleform::Render::RenderBuffer::AddRef(*(Scaleform::RefCountVImpl **)key);
    v13[2] = -1i64;
    v13[3] = 0i64;
    if ( v14 )
      Scaleform::Render::RenderBuffer::AddRef(v14);
    v13[4] = (unsigned __int64)v14;
    if ( v14 )
      Scaleform::RefCountImpl::Release(v14);
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
        v18 = (Scaleform::RefCountVImpl *)v13[4];
        if ( v18 )
          Scaleform::Render::RenderBuffer::AddRef(v18);
        v16[2] = v13[4];
      }
      v19 = (Scaleform::RefCountVImpl *)*key;
      if ( v19 )
        Scaleform::Render::RenderBuffer::AddRef(v19);
      v20 = (Scaleform::RefCountVImpl *)v13[4];
      if ( v20 )
        Scaleform::RefCountImpl::Release(v20);
      v13[4] = (unsigned __int64)v19;
      v13[2] = v15;
    }
    else
    {
      v21 = v17 + 2 * (v17 + 1);
      v22 = *(&v11->EntryCount + v21) == v10;
      for ( i = &v11->EntryCount + v21; !v22; i = &v11->EntryCount + v24 )
      {
        v24 = *i + 2 * (*i + 1);
        v22 = *(&v11->EntryCount + v24) == v10;
      }
      if ( v16 )
      {
        *v16 = v12;
        v16[1] = v13[3];
        v25 = (Scaleform::RefCountVImpl *)v13[4];
        if ( v25 )
          Scaleform::Render::RenderBuffer::AddRef(v25);
        v16[2] = v13[4];
      }
      *i = v15;
      v26 = *key;
      if ( *key )
        Scaleform::Render::RenderBuffer::AddRef(*(Scaleform::RefCountVImpl **)key);
      v27 = (Scaleform::RefCountVImpl *)v13[4];
      if ( v27 )
        Scaleform::RefCountImpl::Release(v27);
      v13[4] = (unsigned __int64)v26;
      v13[2] = -1i64;
    }
  }
  v13[3] = v10;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor> *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::TableType *pTable; // rdx
  unsigned __int64 v9; // r10
  unsigned __int64 *v10; // rdi
  Scaleform::GFx::ASStringNode *pNode; // rax
  unsigned __int64 SizeMask; // rcx
  __int64 v13; // rbx
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  Scaleform::GFx::ASStringNode *v17; // rsi
  Scaleform::GFx::ASStringNode *v18; // rcx
  bool v19; // zf
  __int64 v20; // rcx
  unsigned __int64 *i; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  Scaleform::GFx::ASStringNode *v24; // rbx
  Scaleform::GFx::ASStringNode *v25; // rcx

  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = *(&this->pTable[1].EntryCount + 3 * v7);
  v10 = &this->pTable->EntryCount + 3 * v7;
  if ( v9 == -2i64 )
  {
    v10[2] = -1i64;
    pNode = key->First.pNode;
    v10[3] = (unsigned __int64)key->First.pNode;
    ++pNode->RefCount;
    v10[4] = (unsigned __int64)key->Second;
  }
  else
  {
    SizeMask = pTable->SizeMask;
    v13 = v7;
    do
      v13 = SizeMask & (v13 + 1);
    while ( *(&pTable[1].EntryCount + 3 * v13) != -2i64 );
    v14 = &pTable[v13 + 1].EntryCount + v13;
    v15 = (unsigned int)SizeMask & *(_DWORD *)(v10[3] + 28);
    if ( v15 == v7 )
    {
      if ( v14 )
      {
        *v14 = v9;
        v16 = v10[3];
        v14[1] = v16;
        ++*(_DWORD *)(v16 + 24);
        v14[2] = v10[4];
      }
      v17 = key->First.pNode;
      ++key->First.pNode->RefCount;
      v18 = (Scaleform::GFx::ASStringNode *)v10[3];
      v19 = v18->RefCount-- == 1;
      if ( v19 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v18);
      v10[3] = (unsigned __int64)v17;
      v10[4] = (unsigned __int64)key->Second;
      v10[2] = v13;
    }
    else
    {
      v20 = v15 + 2 * (v15 + 1);
      v19 = *(&pTable->EntryCount + v20) == v7;
      for ( i = &pTable->EntryCount + v20; !v19; i = &pTable->EntryCount + v22 )
      {
        v22 = *i + 2 * (*i + 1);
        v19 = *(&pTable->EntryCount + v22) == v7;
      }
      if ( v14 )
      {
        *v14 = v9;
        v23 = v10[3];
        v14[1] = v23;
        ++*(_DWORD *)(v23 + 24);
        v14[2] = v10[4];
      }
      *i = v13;
      v24 = key->First.pNode;
      ++key->First.pNode->RefCount;
      v25 = (Scaleform::GFx::ASStringNode *)v10[3];
      v19 = v25->RefCount-- == 1;
      if ( v19 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v25);
      v10[3] = (unsigned __int64)v24;
      v10[4] = (unsigned __int64)key->Second;
      v10[2] = -1i64;
    }
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::TableType *v11; // rdx
  unsigned __int64 v12; // r10
  unsigned __int64 *v13; // rdi
  Scaleform::GFx::ASStringNode *pNode; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned __int64 *v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  Scaleform::GFx::ASStringNode *v20; // rsi
  Scaleform::GFx::ASStringNode *v21; // rcx
  bool v22; // zf
  __int64 v23; // rcx
  unsigned __int64 *i; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  Scaleform::GFx::ASStringNode *v27; // rbx
  Scaleform::GFx::ASStringNode *v28; // rcx

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
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>::setRawCapacity(
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
    pNode = key->pFirst->pNode;
    v13[3] = (unsigned __int64)pNode;
    ++pNode->RefCount;
    v13[4] = (unsigned __int64)*key->pSecond;
  }
  else
  {
    v15 = v11->SizeMask;
    v16 = v10;
    do
      v16 = v15 & (v16 + 1);
    while ( *(&v11[1].EntryCount + 3 * v16) != -2i64 );
    v17 = &v11[v16 + 1].EntryCount + v16;
    v18 = (unsigned int)v15 & *(_DWORD *)(v13[3] + 28);
    if ( v18 == v10 )
    {
      if ( v17 )
      {
        *v17 = v12;
        v19 = v13[3];
        v17[1] = v19;
        ++*(_DWORD *)(v19 + 24);
        v17[2] = v13[4];
      }
      v20 = key->pFirst->pNode;
      ++v20->RefCount;
      v21 = (Scaleform::GFx::ASStringNode *)v13[3];
      v22 = v21->RefCount-- == 1;
      if ( v22 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v21);
      v13[3] = (unsigned __int64)v20;
      v13[4] = (unsigned __int64)*key->pSecond;
      v13[2] = v16;
    }
    else
    {
      v23 = v18 + 2 * (v18 + 1);
      v22 = *(&v11->EntryCount + v23) == v10;
      for ( i = &v11->EntryCount + v23; !v22; i = &v11->EntryCount + v25 )
      {
        v25 = *i + 2 * (*i + 1);
        v22 = *(&v11->EntryCount + v25) == v10;
      }
      if ( v17 )
      {
        *v17 = v12;
        v26 = v13[3];
        v17[1] = v26;
        ++*(_DWORD *)(v26 + 24);
        v17[2] = v13[4];
      }
      *i = v16;
      v27 = key->pFirst->pNode;
      ++v27->RefCount;
      v28 = (Scaleform::GFx::ASStringNode *)v13[3];
      v22 = v28->RefCount-- == 1;
      if ( v22 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v28);
      v13[3] = (unsigned __int64)v27;
      v13[4] = (unsigned __int64)*key->pSecond;
      v13[2] = -1i64;
    }
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp>>::add<Scaleform::GFx::StateBagImpl::StatePtr>(
        Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> > *this,
        void *pmemAddr,
        const Scaleform::GFx::StateBagImpl::StatePtr *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rsi
  Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> >::TableType *v11; // rdx
  unsigned __int64 v12; // r8
  Scaleform::GFx::StateBagImpl::StatePtr *v13; // rbx
  __int64 v14; // rdi
  unsigned __int64 *v15; // r15
  Scaleform::GFx::State *pObject; // rax
  Scaleform::RefCountVImpl *v17; // rcx
  Scaleform::RefCountVImpl *v18; // rcx
  char *v19; // r14
  bool v20; // zf
  unsigned __int64 *i; // r14
  __int64 v22; // r14
  Scaleform::RefCountVImpl *v23; // rcx
  Scaleform::RefCountVImpl *v24; // rcx

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
  Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 3 * v10);
  v13 = (Scaleform::GFx::StateBagImpl::StatePtr *)this->pTable + 3 * v10;
  if ( v12 == -2i64 )
  {
    v13[2].pState.pObject = (Scaleform::GFx::State *)-1i64;
    v13[3].pState.pObject = 0i64;
    if ( key->pState.pObject )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)key->pState.pObject);
    v13[4].pState.pObject = key->pState.pObject;
    v13[3].pState.pObject = (Scaleform::GFx::State *)v10;
  }
  else
  {
    v14 = v10;
    do
      v14 = v11->SizeMask & (v14 + 1);
    while ( *(&v11[1].EntryCount + 3 * v14) != -2i64 );
    v15 = &v11[v14 + 1].EntryCount + v14;
    pObject = v13[3].pState.pObject;
    if ( pObject == (Scaleform::GFx::State *)v10 )
    {
      if ( v15 )
      {
        *v15 = v12;
        v15[1] = (unsigned __int64)v13[3].pState.pObject;
        v17 = (Scaleform::RefCountVImpl *)v13[4].pState.pObject;
        if ( v17 )
          Scaleform::Render::RenderBuffer::AddRef(v17);
        v15[2] = (unsigned __int64)v13[4].pState.pObject;
      }
      if ( key->pState.pObject )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)key->pState.pObject);
      v18 = (Scaleform::RefCountVImpl *)v13[4].pState.pObject;
      if ( v18 )
        Scaleform::RefCountImpl::Release(v18);
      v13[4].pState.pObject = key->pState.pObject;
      v13[2].pState.pObject = (Scaleform::GFx::State *)v14;
    }
    else
    {
      v19 = (char *)pObject + 2 * ((_QWORD)&pObject->__vftable + 1);
      v20 = *(&v11->EntryCount + (_QWORD)v19) == v10;
      for ( i = &v11->EntryCount + (_QWORD)v19; !v20; i = &v11->EntryCount + v22 )
      {
        v22 = *i + 2 * (*i + 1);
        v20 = *(&v11->EntryCount + v22) == v10;
      }
      if ( v15 )
      {
        *v15 = v12;
        v15[1] = (unsigned __int64)v13[3].pState.pObject;
        v23 = (Scaleform::RefCountVImpl *)v13[4].pState.pObject;
        if ( v23 )
          Scaleform::Render::RenderBuffer::AddRef(v23);
        v15[2] = (unsigned __int64)v13[4].pState.pObject;
      }
      *i = v14;
      if ( key->pState.pObject )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)key->pState.pObject);
      v24 = (Scaleform::RefCountVImpl *)v13[4].pState.pObject;
      if ( v24 )
        Scaleform::RefCountImpl::Release(v24);
      v13[4].pState.pObject = key->pState.pObject;
      v13[2].pState.pObject = (Scaleform::GFx::State *)-1i64;
    }
    v13[3].pState.pObject = (Scaleform::GFx::State *)v10;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::add<Scaleform::Ptr<Scaleform::Render::Font>>(
        Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > *this,
        void *pmemAddr,
        const Scaleform::Ptr<Scaleform::Render::Font> *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // r14
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > >::TableType *pTable; // rdx
  unsigned __int64 v9; // r8
  Scaleform::Ptr<Scaleform::Render::Font> *v10; // rdi
  __int64 v11; // rbx
  unsigned __int64 *v12; // r15
  Scaleform::Render::Font *pObject; // rax
  Scaleform::RefCountVImpl *v14; // rcx
  Scaleform::RefCountVImpl *v15; // rcx
  char *v16; // rsi
  bool v17; // zf
  unsigned __int64 *i; // rsi
  __int64 v19; // rsi
  Scaleform::RefCountVImpl *v20; // rcx
  Scaleform::RefCountVImpl *v21; // rcx

  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = *(&this->pTable[1].EntryCount + 3 * v7);
  v10 = (Scaleform::Ptr<Scaleform::Render::Font> *)this->pTable + 3 * v7;
  if ( v9 == -2i64 )
  {
    v10[2].pObject = (Scaleform::Render::Font *)-1i64;
    v10[3].pObject = 0i64;
    if ( key->pObject )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)key->pObject);
    v10[4].pObject = key->pObject;
    v10[3].pObject = (Scaleform::Render::Font *)v7;
  }
  else
  {
    v11 = v7;
    do
      v11 = pTable->SizeMask & (v11 + 1);
    while ( *(&pTable[1].EntryCount + 3 * v11) != -2i64 );
    v12 = &pTable[v11 + 1].EntryCount + v11;
    pObject = v10[3].pObject;
    if ( pObject == (Scaleform::Render::Font *)v7 )
    {
      if ( v12 )
      {
        *v12 = v9;
        v12[1] = (unsigned __int64)v10[3].pObject;
        v14 = (Scaleform::RefCountVImpl *)v10[4].pObject;
        if ( v14 )
          Scaleform::Render::RenderBuffer::AddRef(v14);
        v12[2] = (unsigned __int64)v10[4].pObject;
      }
      if ( key->pObject )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)key->pObject);
      v15 = (Scaleform::RefCountVImpl *)v10[4].pObject;
      if ( v15 )
        Scaleform::RefCountImpl::Release(v15);
      v10[4].pObject = key->pObject;
      v10[2].pObject = (Scaleform::Render::Font *)v11;
    }
    else
    {
      v16 = (char *)pObject + 2 * ((_QWORD)&pObject->__vftable + 1);
      v17 = *(&pTable->EntryCount + (_QWORD)v16) == v7;
      for ( i = &pTable->EntryCount + (_QWORD)v16; !v17; i = &pTable->EntryCount + v19 )
      {
        v19 = *i + 2 * (*i + 1);
        v17 = *(&pTable->EntryCount + v19) == v7;
      }
      if ( v12 )
      {
        *v12 = v9;
        v12[1] = (unsigned __int64)v10[3].pObject;
        v20 = (Scaleform::RefCountVImpl *)v10[4].pObject;
        if ( v20 )
          Scaleform::Render::RenderBuffer::AddRef(v20);
        v12[2] = (unsigned __int64)v10[4].pObject;
      }
      *i = v11;
      if ( key->pObject )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)key->pObject);
      v21 = (Scaleform::RefCountVImpl *)v10[4].pObject;
      if ( v21 )
        Scaleform::RefCountImpl::Release(v21);
      v10[4].pObject = key->pObject;
      v10[2].pObject = (Scaleform::Render::Font *)-1i64;
    }
    v10[3].pObject = (Scaleform::Render::Font *)v7;
  }
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,329>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF>>::findIndexCore<Scaleform::GFx::ASString>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,329>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF> > *this,
        const Scaleform::GFx::ASString *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,329>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF> >::TableType *pTable; // r11
  unsigned __int64 v4; // r10
  bool v6; // zf
  __int64 *v7; // r10
  unsigned __int64 result; // rax
  Scaleform::GFx::ASStringNode *v9; // rdx

  pTable = this->pTable;
  v4 = hashValue + 2 * (hashValue + 1);
  v6 = *(&this->pTable->EntryCount + v4) == -2i64;
  v7 = (__int64 *)(&this->pTable->EntryCount + v4);
  result = hashValue;
  if ( v6 || (pTable->SizeMask & *(unsigned int *)(v7[1] + 28)) != hashValue )
    return -1i64;
  while ( 1 )
  {
    v9 = (Scaleform::GFx::ASStringNode *)v7[1];
    if ( (pTable->SizeMask & v9->HashFlags) == hashValue && v9 == key->pNode )
      break;
    result = *v7;
    if ( *v7 == -1 )
      return -1i64;
    v7 = (__int64 *)(&pTable[result + 1].EntryCount + result);
  }
  return result;
}

void __fastcall Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp>::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp>(
        Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> *this,
        const Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> *e)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  this->NextInChain = e->NextInChain;
  this->HashValue = e->HashValue;
  pObject = (Scaleform::RefCountVImpl *)e->Value.pState.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  this->Value.pState.pObject = e->Value.pState.pObject;
}

void __fastcall Scaleform::GFx::ImageResource::ImageResource(
        Scaleform::GFx::ImageResource *this,
        Scaleform::Render::Image *pimage,
        Scaleform::GFx::Resource::ResourceUse use)
{
  Scaleform::GFx::ImageResource::ImageDelegate *p_Delegate; // rdi
  Scaleform::Render::ImageBase *v7; // rcx
  Scaleform::Render::Image *pObject; // rcx

  this->__vftable = (Scaleform::GFx::ImageResource_vtbl *)&Scaleform::GFx::Resource::`vftable';
  p_Delegate = &this->Delegate;
  this->RefCount.Value = 1;
  this->__vftable = (Scaleform::GFx::ImageResource_vtbl *)&Scaleform::GFx::ImageResource::`vftable';
  this->pLib = 0i64;
  this->pImage = 0i64;
  this->Delegate.__vftable = (Scaleform::GFx::ImageResource::ImageDelegate_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->Delegate.__vftable = (Scaleform::GFx::ImageResource::ImageDelegate_vtbl *)&Scaleform::Render::Image::`vftable';
  this->Delegate.RefCount = 1;
  this->Delegate.pTexture.Value = 0i64;
  this->Delegate.pUpdateSync = 0i64;
  this->Delegate.pInverseMatrix = 0i64;
  this->Delegate.pImage.pObject = 0i64;
  this->Delegate.__vftable = (Scaleform::GFx::ImageResource::ImageDelegate_vtbl *)&Scaleform::GFx::ImageResource::ImageDelegate::`vftable';
  AgPointer<AgController>::AgPointer<AgController>((AgPointer<AgMemoryStream> *)&this->Key);
  v7 = this->pImage;
  if ( v7 && v7 != p_Delegate )
    v7->Release(v7);
  if ( pimage )
    pimage->AddRef(pimage);
  pObject = this->Delegate.pImage.pObject;
  if ( pObject )
    pObject->Release(pObject);
  this->Delegate.pImage.pObject = pimage;
  this->UseType = use;
  this->pImage = p_Delegate;
}

void __fastcall Scaleform::GFx::MovieImpl::MovieImpl(Scaleform::GFx::MovieImpl *this, Scaleform::MemoryHeap *pheap)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  Scaleform::GFx::MouseState *mMouseState; // rsi
  Scaleform::GFx::KeyboardState *KeyboardStates; // rsi
  __int64 v7; // rdi
  Scaleform::GFx::MovieImpl::DragState *CurrentDragStates; // rcx
  float *p_y; // rax
  Scaleform::GFx::FocusGroupDescr *FocusGroups; // rsi
  Scaleform::ArrayDefaultPolicy *p_Policy; // rdi
  __int64 v12; // rbp
  Scaleform::MemoryHeap *v13; // rax
  Scaleform::Render::ContextImpl::Context *p_RenderContext; // rsi
  Scaleform::Render::TreeRoot::NodeData *v15; // rax
  Scaleform::Render::ContextImpl::EntryData *v16; // rdi
  Scaleform::Render::ContextImpl::Entry *EntryHelper; // rax
  Scaleform::Render::TreeRoot *pObject; // rcx
  Scaleform::Render::TreeRoot *v19; // rdi
  bool v20; // zf
  Scaleform::Render::ContextImpl::RTHandle::HandleData *v21; // rax
  Scaleform::RefCountVImpl *v22; // rcx
  Scaleform::Render::TreeNode::NodeData *v23; // rax
  Scaleform::Render::TreeNode::NodeData *v24; // rdi
  Scaleform::Render::ContextImpl::Entry *v25; // rax
  Scaleform::Render::TreeContainer *v26; // rcx
  Scaleform::Render::TreeContainer *v27; // rdi
  Scaleform::MemoryHeap *v28; // rcx
  __int64 v29; // rax
  Scaleform::GFx::StateBagImpl *v30; // rdi
  Scaleform::RefCountVImpl *v31; // rcx
  Scaleform::RefCountVImpl *v32; // rcx
  unsigned __int8 *p_KeyboardIndex; // rcx
  unsigned __int8 i; // al
  Scaleform::MemoryHeap *v35; // rcx
  __int64 v36; // rax
  Scaleform::GFx::FontManagerStates *v37; // rdi
  Scaleform::GFx::StateBagImpl *v38; // rcx
  Scaleform::GFx::StateBag *v39; // rax
  Scaleform::GFx::FontManagerStates *v40; // rcx
  unsigned __int64 Ticks; // rcx
  Scaleform::Render::ContextImpl::RTHandle v42; // [rsp+40h] [rbp+8h] BYREF

  this->Scaleform::GFx::Movie::Scaleform::RefCountBase<Scaleform::GFx::Movie,327>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::MovieImpl_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->pASMovieRoot.pObject = 0i64;
  this->Scaleform::GFx::Movie::Scaleform::RefCountBase<Scaleform::GFx::Movie,327>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::MovieImpl_vtbl *)&Scaleform::GFx::MovieImpl::`vftable'{for `Scaleform::RefCountBase<Scaleform::GFx::Movie,327>'};
  this->Scaleform::GFx::Movie::Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::MovieImpl::`vftable'{for `Scaleform::GFx::StateBag'};
  this->AdvanceStats.pObject = 0i64;
  this->pHeap = pheap;
  this->pMainMovieDef.pObject = 0i64;
  this->MovieLevels.Data.Data = 0i64;
  this->MovieLevels.Data.Size = 0i64;
  this->MovieLevels.Data.Policy.Capacity = 0i64;
  this->RootMovieDefNodes.Root.pPrev = (Scaleform::GFx::MovieDefRootNode *)&this->MovieLevels.Data.Policy;
  this->RootMovieDefNodes.Root.pNext = (Scaleform::GFx::MovieDefRootNode *)&this->MovieLevels.Data.Policy;
  this->pStateBag.pObject = 0i64;
  this->pRenderRoot.pObject = 0i64;
  this->hDisplayRoot.pData.pObject = 0i64;
  this->pTopMostRoot.pObject = 0i64;
  *(_QWORD *)&this->mViewport.BufferWidth = 0i64;
  *(_QWORD *)&this->mViewport.Left = 0i64;
  this->mViewport.Height = 1;
  this->mViewport.Width = 1;
  *(_QWORD *)&this->mViewport.ScissorWidth = 0i64;
  *(_QWORD *)&this->mViewport.ScissorLeft = 0i64;
  this->mViewport.Flags = 0;
  this->mViewport.AspectRatio = 1.0;
  this->mViewport.Scale = 1.0;
  this->PixelScale = 1.0;
  *(_QWORD *)&this->VisibleFrameRect.x1 = 0i64;
  *(_QWORD *)&this->VisibleFrameRect.x2 = 0i64;
  *(_QWORD *)&this->SafeRect.x1 = 0i64;
  *(_QWORD *)&this->SafeRect.x2 = 0i64;
  *(_OWORD *)&this->ViewportMatrix.M[0][0] = 0x3F800000ui64;
  this->ViewportMatrix.M[1][0] = 0.0;
  *(_QWORD *)&this->ViewportMatrix.M[1][1] = 1065353216i64;
  this->ViewportMatrix.M[1][3] = 0.0;
  Scaleform::Render::ScreenToWorld::ScreenToWorld(&this->ScreenToWorld);
  this->pCachedLog.pObject = 0i64;
  this->pUserEventHandler.pObject = 0i64;
  this->pFSCommandHandler.pObject = 0i64;
  this->pExtIntfHandler.pObject = 0i64;
  this->pExtContextHandler.pObject = 0i64;
  this->pFontManagerStates.pObject = 0i64;
  this->pXMLObjectManager = 0i64;
  Scaleform::GFx::InputEventsQueue::InputEventsQueue(&this->InputEventsQueue);
  v3 = 6i64;
  *(_WORD *)&this->BackgroundColor.Channels.Green = 0;
  v4 = 6i64;
  this->BackgroundColor.Channels.Blue = 0;
  this->BackgroundColor.Channels.Alpha = -1;
  mMouseState = this->mMouseState;
  do
  {
    Scaleform::GFx::MouseState::MouseState(mMouseState++);
    --v4;
  }
  while ( v4 );
  this->MouseCursorCount = 1;
  KeyboardStates = this->KeyboardStates;
  this->ControllerCount = 1;
  v7 = 6i64;
  this->UserData = 0i64;
  do
  {
    Scaleform::GFx::KeyboardState::KeyboardState(KeyboardStates++);
    --v7;
  }
  while ( v7 );
  CurrentDragStates = this->CurrentDragStates;
  p_y = &this->CurrentDragStates[0].BoundRB.y;
  do
  {
    CurrentDragStates->pCharacter = 0i64;
    ++CurrentDragStates;
    *((_QWORD *)p_y - 3) = 0i64;
    *((_WORD *)p_y - 8) = 0;
    *(_QWORD *)(p_y - 3) = 0i64;
    *(_QWORD *)(p_y - 1) = 0i64;
    *(_QWORD *)(p_y + 1) = 0i64;
    p_y[3] = NAN;
    p_y += 12;
    --v3;
  }
  while ( v3 );
  this->StickyVariables.mHash.pTable = 0i64;
  FocusGroups = this->FocusGroups;
  this->TopmostLevelCharacters.Data.Data = 0i64;
  p_Policy = &this->FocusGroups[0].TabableArray.Data.Policy;
  this->TopmostLevelCharacters.Data.Size = 0i64;
  v12 = 16i64;
  this->TopmostLevelCharacters.Data.Policy.Capacity = 0i64;
  this->IntervalTimers.Data.Data = 0i64;
  this->IntervalTimers.Data.Size = 0i64;
  this->IntervalTimers.Data.Policy.Capacity = 0i64;
  this->FocusRectContainerNode.pObject = 0i64;
  do
  {
    FocusGroups->FocusRectNode.pObject = 0i64;
    v13 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, FocusGroups);
    p_Policy[-2].Capacity = 0i64;
    ++FocusGroups;
    p_Policy[-1].Capacity = 0i64;
    p_Policy->Capacity = 0i64;
    p_Policy[1].Capacity = (unsigned __int64)v13;
    p_Policy[2].Capacity = 0i64;
    p_Policy[3].Capacity = 0i64;
    LODWORD(p_Policy[4].Capacity) = 0;
    p_Policy[5].Capacity = 0i64;
    p_Policy[6].Capacity = 0i64;
    LOWORD(p_Policy[7].Capacity) = 0;
    p_Policy += 12;
    --v12;
  }
  while ( v12 );
  *(_QWORD *)&this->Flags = 0i64;
  this->RegisteredFonts.Data.Data = 0i64;
  p_RenderContext = &this->RenderContext;
  this->RegisteredFonts.Data.Size = 0i64;
  this->RegisteredFonts.Data.Policy.Capacity = 0i64;
  this->DrawingContextList.Root.pPrev = (Scaleform::GFx::DrawingContext *)&this->RegisteredFonts.Data.Size;
  this->DrawingContextList.Root.pNext = (Scaleform::GFx::DrawingContext *)&this->RegisteredFonts.Data.Size;
  this->MovieDefKillList.Data.Data = 0i64;
  this->MovieDefKillList.Data.Size = 0i64;
  this->MovieDefKillList.Data.Policy.Capacity = 0i64;
  this->pSavedASMovieRoot.pObject = 0i64;
  Scaleform::Render::ContextImpl::Context::Context(&this->RenderContext, Scaleform::Memory::pGlobalHeap);
  this->DIContext.pObject = 0i64;
  this->pRTCommandQueue = 0i64;
  this->MultitouchHAL.pObject = 0i64;
  this->GestureTopMostChar.pObject = 0i64;
  this->IndirectTransformPairs.Data.Data = 0i64;
  this->IndirectTransformPairs.Data.Size = 0i64;
  this->IndirectTransformPairs.Data.Policy.Capacity = 0i64;
  v15 = (Scaleform::Render::TreeRoot::NodeData *)p_RenderContext->pHeap->Alloc(p_RenderContext->pHeap, 208ui64, 0i64);
  v16 = v15;
  if ( v15 )
    Scaleform::Render::TreeRoot::NodeData::NodeData(v15);
  EntryHelper = Scaleform::Render::ContextImpl::Context::createEntryHelper(&this->RenderContext, v16);
  pObject = this->pRenderRoot.pObject;
  v19 = (Scaleform::Render::TreeRoot *)EntryHelper;
  if ( pObject )
  {
    v20 = pObject->RefCount-- == 1;
    if ( v20 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(pObject);
  }
  this->pRenderRoot.pObject = v19;
  Scaleform::Render::ContextImpl::RTHandle::RTHandle(&v42, v19);
  v21 = v42.pData.pObject;
  if ( v42.pData.pObject )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v42.pData.pObject);
    v21 = v42.pData.pObject;
  }
  v22 = (Scaleform::RefCountVImpl *)this->hDisplayRoot.pData.pObject;
  if ( v22 )
  {
    Scaleform::RefCountImpl::Release(v22);
    v21 = v42.pData.pObject;
  }
  this->hDisplayRoot.pData.pObject = v21;
  Scaleform::Render::ContextImpl::RTHandle::~RTHandle(&v42);
  v23 = (Scaleform::Render::TreeNode::NodeData *)p_RenderContext->pHeap->Alloc(p_RenderContext->pHeap, 160ui64, 0i64);
  v24 = v23;
  if ( v23 )
  {
    Scaleform::Render::TreeNode::NodeData::NodeData(v23, ET_Container);
    v24->__vftable = (Scaleform::Render::TreeNode::NodeData_vtbl *)&Scaleform::Render::TreeContainer::NodeData::`vftable';
    *(_QWORD *)&v24[1].Type = 0i64;
    v24[1].__vftable = 0i64;
  }
  v25 = Scaleform::Render::ContextImpl::Context::createEntryHelper(&this->RenderContext, v24);
  v26 = this->pTopMostRoot.pObject;
  v27 = (Scaleform::Render::TreeContainer *)v25;
  if ( v26 )
  {
    v20 = v26->RefCount-- == 1;
    if ( v20 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v26);
  }
  this->pTopMostRoot.pObject = v27;
  Scaleform::Render::TreeContainer::Add(this->pRenderRoot.pObject, v27);
  Scaleform::Render::ContextImpl::Context::Capture(&this->RenderContext);
  this->pMainMovie = 0i64;
  this->Flags |= 0x40180u;
  v28 = this->pHeap;
  this->pPlayListOptHead = 0i64;
  this->pPlayListHead = 0i64;
  this->TimeElapsed = 0i64;
  this->TimeRemainder = 0.0;
  *(_QWORD *)&this->FrameTime = 1034594987i64;
  this->pLoadQueueHead = 0i64;
  this->pLoadQueueMTHead = 0i64;
  v29 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v28->Alloc)(v28, 96i64);
  v30 = (Scaleform::GFx::StateBagImpl *)v29;
  if ( v29 )
  {
    *(_QWORD *)v29 = &Scaleform::RefCountImplCore::`vftable';
    *(_DWORD *)(v29 + 8) = 1;
    *(_QWORD *)(v29 + 16) = &Scaleform::GFx::StateBag::`vftable';
    *(_QWORD *)v29 = &Scaleform::GFx::StateBagImpl::`vftable'{for `Scaleform::RefCountBase<Scaleform::GFx::StateBagImpl,2>'};
    *(_QWORD *)(v29 + 16) = &Scaleform::GFx::StateBagImpl::`vftable'{for `Scaleform::GFx::StateBag'};
    *(_QWORD *)(v29 + 24) = &Scaleform::GFx::StateBagImpl::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>'};
    *(_QWORD *)(v29 + 32) = 0i64;
    *(_QWORD *)(v29 + 40) = 0i64;
    Scaleform::Lock::Lock((Scaleform::Lock *)(v29 + 48), 0);
    v31 = (Scaleform::RefCountVImpl *)v30->pDelegate.pObject;
    if ( v31 )
      Scaleform::RefCountImpl::Release(v31);
    v30->pDelegate.pObject = 0i64;
  }
  else
  {
    v30 = 0i64;
  }
  v32 = (Scaleform::RefCountVImpl *)this->pStateBag.pObject;
  if ( v32 )
    Scaleform::RefCountImpl::Release(v32);
  this->pStateBag.pObject = v30;
  p_KeyboardIndex = &this->KeyboardStates[0].KeyboardIndex;
  for ( i = 0; i < 6u; ++i )
  {
    *p_KeyboardIndex = i;
    p_KeyboardIndex += 1672;
  }
  v35 = this->pHeap;
  this->pRetValHolder = 0i64;
  v36 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v35->Alloc)(v35, 64i64);
  v37 = (Scaleform::GFx::FontManagerStates *)v36;
  if ( v36 )
  {
    v38 = this->pStateBag.pObject;
    *(_DWORD *)(v36 + 8) = 1;
    *(_QWORD *)(v36 + 16) = &Scaleform::GFx::StateBag::`vftable';
    *(_QWORD *)v36 = &Scaleform::GFx::FontManagerStates::`vftable'{for `Scaleform::RefCountBaseNTS<Scaleform::GFx::FontManagerStates,327>'};
    *(_QWORD *)(v36 + 16) = &Scaleform::GFx::FontManagerStates::`vftable'{for `Scaleform::GFx::StateBag'};
    v39 = &v38->Scaleform::GFx::StateBag;
    v37->pFontLib.pObject = 0i64;
    if ( !v38 )
      v39 = 0i64;
    v37->pFontMap.pObject = 0i64;
    v37->pFontProvider.pObject = 0i64;
    v37->pTranslator.pObject = 0i64;
    v37->pDelegate = v39;
  }
  else
  {
    v37 = 0i64;
  }
  v40 = this->pFontManagerStates.pObject;
  if ( v40 )
    Scaleform::RefCountNTSImpl::Release(v40);
  this->pFontManagerStates.pObject = v37;
  this->InstanceNameCount = 0;
  this->ViewScaleX = 1.0;
  *(_QWORD *)&this->ViewScaleY = 1065353216i64;
  this->ViewOffsetY = 0.0;
  *(_QWORD *)&this->ViewScaleMode = 1i64;
  this->FocusGroupsCnt = 1;
  *(_QWORD *)this->FocusGroupIndexes = 0i64;
  *(_QWORD *)&this->FocusGroupIndexes[8] = 0i64;
  this->LastIntervalTimerId = 0;
  this->pIMECandidateListStyle = 0i64;
  Ticks = Scaleform::Timer::GetTicks();
  this->PauseTickMs = 0i64;
  this->StartTickMs = Ticks / 0x3E8;
  *(_QWORD *)&this->SafeRect.x1 = 0i64;
  *(_QWORD *)&this->SafeRect.x2 = 0i64;
  this->pObjectInterface = 0i64;
  this->LastLoadQueueEntryCnt = 0;
  this->pUnloadListHead = 0i64;
  this->MultitouchMode = MTI_None;
  this->FocusRectChanged = 1;
  this->PreviouslyCaptured = 0;
}

void __fastcall Scaleform::Render::TreeNode::NodeData::NodeData(
        Scaleform::Render::TreeNode::NodeData *this,
        const Scaleform::Render::TreeNode::NodeData *__that)
{
  float y2; // xmm2_4
  float x2; // xmm1_4
  float y1; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4

  this->__vftable = (Scaleform::Render::TreeNode::NodeData_vtbl *)&Scaleform::Render::ContextImpl::EntryData::`vftable';
  this->Type = __that->Type;
  this->Flags = __that->Flags;
  this->__vftable = (Scaleform::Render::TreeNode::NodeData_vtbl *)&Scaleform::Render::TreeNode::NodeData::`vftable';
  this->M34 = __that->M34;
  Scaleform::Render::StateBag::StateBag(&this->States, &__that->States);
  this->Cx = __that->Cx;
  y2 = __that->AproxLocalBounds.y2;
  x2 = __that->AproxLocalBounds.x2;
  y1 = __that->AproxLocalBounds.y1;
  this->AproxLocalBounds.x1 = __that->AproxLocalBounds.x1;
  this->AproxLocalBounds.y1 = y1;
  this->AproxLocalBounds.x2 = x2;
  this->AproxLocalBounds.y2 = y2;
  v7 = __that->AproxParentBounds.y2;
  v8 = __that->AproxParentBounds.x2;
  v9 = __that->AproxParentBounds.y1;
  this->AproxParentBounds.x1 = __that->AproxParentBounds.x1;
  this->AproxParentBounds.y1 = v9;
  this->AproxParentBounds.x2 = v8;
  this->AproxParentBounds.y2 = v7;
}

void __fastcall Scaleform::Render::TreeNode::NodeData::NodeData(
        Scaleform::Render::TreeNode::NodeData *this,
        Scaleform::Render::ContextImpl::EntryData::EntryType type)
{
  this->Type = type;
  this->Flags = 1;
  this->__vftable = (Scaleform::Render::TreeNode::NodeData_vtbl *)&Scaleform::Render::TreeNode::NodeData::`vftable';
  *(_OWORD *)&this->M34.M[0][0] = 0ui64;
  *(_OWORD *)&this->M34.M[1][0] = 0ui64;
  *(_OWORD *)&this->M34.M[2][0] = 0ui64;
  this->M34.M[0][0] = 1.0;
  this->M34.M[1][1] = 1.0;
  this->M34.M[2][2] = 1.0;
  this->States.ArraySize = 0i64;
  this->States.DataValue = 0i64;
  Scaleform::Render::Cxform::Cxform(&this->Cx);
  *(_QWORD *)&this->AproxLocalBounds.x1 = 0i64;
  *(_QWORD *)&this->AproxLocalBounds.x2 = 0i64;
  *(_QWORD *)&this->AproxParentBounds.x1 = 0i64;
  *(_QWORD *)&this->AproxParentBounds.x2 = 0i64;
}

void __fastcall Scaleform::Render::TreeRoot::NodeData::NodeData(
        Scaleform::Render::TreeRoot::NodeData *this,
        const Scaleform::Render::TreeRoot::NodeData *__that)
{
  Scaleform::Render::TreeNode::NodeData::NodeData(this, __that);
  this->__vftable = (Scaleform::Render::TreeRoot::NodeData_vtbl *)&Scaleform::Render::TreeContainer::NodeData::`vftable';
  Scaleform::Render::TreeNodeArray::TreeNodeArray(&this->Children, &__that->Children);
  this->__vftable = (Scaleform::Render::TreeRoot::NodeData_vtbl *)&Scaleform::Render::TreeRoot::NodeData::`vftable';
  this->VP = __that->VP;
  this->BGColor.Raw = __that->BGColor.Raw;
}

void __fastcall Scaleform::Render::TreeRoot::NodeData::NodeData(Scaleform::Render::TreeRoot::NodeData *this)
{
  Scaleform::Render::TreeNode::NodeData::NodeData(this, ET_Root);
  this->Children.pData[1] = 0i64;
  this->Children.pData[0] = 0i64;
  this->__vftable = (Scaleform::Render::TreeRoot::NodeData_vtbl *)&Scaleform::Render::TreeRoot::NodeData::`vftable';
  *(_QWORD *)&this->VP.BufferWidth = 0i64;
  *(_QWORD *)&this->VP.Left = 0i64;
  this->VP.Height = 1;
  this->VP.Width = 1;
  *(_QWORD *)&this->VP.ScissorWidth = 0i64;
  *(_QWORD *)&this->VP.ScissorLeft = 0i64;
  *(_QWORD *)&this->VP.Flags = 0i64;
}

void __fastcall Scaleform::GFx::MovieImpl::ReturnValueHolder::ReturnValueHolder(
        Scaleform::GFx::MovieImpl::ReturnValueHolder *this,
        Scaleform::GFx::ASStringManager *pmgr)
{
  Scaleform::GFx::ASStringNode *ConstStringNode; // rax
  unsigned int RefCount; // ecx

  this->CharBuffer = 0i64;
  this->CharBufferSize = 0;
  ConstStringNode = Scaleform::GFx::ASStringManager::CreateConstStringNode(pmgr, &pnewText, 0i64, 0);
  ++ConstStringNode->RefCount;
  this->StringArray.Data.Data = 0i64;
  this->StringArray.Data.Size = 0i64;
  this->StringArray.Data.Policy.Capacity = 0i64;
  this->StringArray.Data.DefaultValue.pNode = ConstStringNode;
  RefCount = ConstStringNode->RefCount;
  ConstStringNode->RefCount = RefCount;
  if ( !RefCount )
    Scaleform::GFx::ASStringNode::ReleaseNode(ConstStringNode);
  this->StringArrayPos = 0;
}

void __fastcall Scaleform::Render::ScreenToWorld::ScreenToWorld(Scaleform::Render::ScreenToWorld *this)
{
  this->Sx = 3.4028235e38;
  this->Sy = 3.4028235e38;
  this->LastX = 3.4028235e38;
  this->LastY = 3.4028235e38;
  *(_OWORD *)&this->MatProj.M[0][0] = 0ui64;
  *(_OWORD *)&this->MatProj.M[1][0] = 0ui64;
  *(_OWORD *)&this->MatProj.M[2][0] = 0ui64;
  *(_OWORD *)&this->MatProj.M[3][0] = 0ui64;
  this->MatProj.M[0][0] = 1.0;
  this->MatProj.M[1][1] = 1.0;
  this->MatProj.M[2][2] = 1.0;
  this->MatProj.M[3][3] = 1.0;
  *(_OWORD *)&this->MatView.M[0][0] = 0ui64;
  *(_OWORD *)&this->MatView.M[1][0] = 0ui64;
  *(_OWORD *)&this->MatView.M[2][0] = 0ui64;
  this->MatView.M[0][0] = 1.0;
  this->MatView.M[1][1] = 1.0;
  this->MatView.M[2][2] = 1.0;
  *(_OWORD *)&this->MatWorld.M[0][0] = 0ui64;
  *(_OWORD *)&this->MatWorld.M[1][0] = 0ui64;
  *(_OWORD *)&this->MatWorld.M[2][0] = 0ui64;
  this->MatWorld.M[0][0] = 1.0;
  this->MatWorld.M[1][1] = 1.0;
  this->MatWorld.M[2][2] = 1.0;
  *(_OWORD *)&this->MatInvProj.M[0][0] = 0ui64;
  *(_OWORD *)&this->MatInvProj.M[1][0] = 0ui64;
  *(_OWORD *)&this->MatInvProj.M[2][0] = 0ui64;
  *(_OWORD *)&this->MatInvProj.M[3][0] = 0ui64;
  this->MatInvProj.M[0][0] = 1.0;
  this->MatInvProj.M[1][1] = 1.0;
  this->MatInvProj.M[2][2] = 1.0;
  this->MatInvProj.M[3][3] = 1.0;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::RefCountVImpl **p_pFill; // rbx

  Size = this->Size;
  if ( Size )
  {
    p_pFill = (Scaleform::RefCountVImpl **)&this->Data[this->Size - 1].pFill;
    do
    {
      if ( *p_pFill )
        Scaleform::RefCountImpl::Release(*p_pFill);
      p_pFill -= 2;
      --Size;
    }
    while ( Size );
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::IndirectTransPair,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::GFx::MovieImpl::IndirectTransPair,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::IndirectTransPair,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::GFx::MovieImpl::IndirectTransPair *i; // rbx
  Scaleform::RefCountNTSImpl *pObject; // rcx
  Scaleform::RefCountNTSImpl *v5; // rcx
  Scaleform::Render::ContextImpl::Entry *v6; // rcx

  Size = this->Size;
  for ( i = &this->Data[Size - 1]; Size; --Size )
  {
    pObject = i->OriginalParent.pObject;
    if ( pObject )
      Scaleform::RefCountNTSImpl::Release(pObject);
    v5 = i->Obj.pObject;
    if ( v5 )
      Scaleform::RefCountNTSImpl::Release(v5);
    v6 = i->TransformParent.pObject;
    if ( i->TransformParent.pObject )
    {
      if ( v6->RefCount-- == 1 )
        Scaleform::Render::ContextImpl::Entry::destroyHelper(v6);
    }
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::Ptr<Scaleform::Render::ComplexFill> *p_pFill; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  Size = this->Size;
  if ( Size )
  {
    p_pFill = &this->Data[Size - 1].pFill;
    do
    {
      pObject = (Scaleform::RefCountVImpl *)p_pFill[1].pObject;
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      if ( p_pFill->pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)p_pFill->pObject);
      p_pFill -= 5;
      --Size;
    }
    while ( Size );
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::ArrayDataLHCC<Scaleform::GFx::ASString,Scaleform::AllocatorLH<Scaleform::GFx::ASString,323>,Scaleform::ArrayDefaultPolicy>::~ArrayDataLHCC<Scaleform::GFx::ASString,Scaleform::AllocatorLH<Scaleform::GFx::ASString,323>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataLHCC<Scaleform::GFx::ASString,Scaleform::AllocatorLH<Scaleform::GFx::ASString,323>,Scaleform::ArrayDefaultPolicy> *this)
{
  Scaleform::GFx::ASStringNode *pNode; // rcx
  bool v3; // zf
  unsigned __int64 Size; // rdi
  Scaleform::GFx::ASString *i; // rbx
  Scaleform::GFx::ASStringNode *v6; // rcx

  pNode = this->DefaultValue.pNode;
  v3 = pNode->RefCount-- == 1;
  if ( v3 )
    Scaleform::GFx::ASStringNode::ReleaseNode(pNode);
  Size = this->Size;
  for ( i = &this->Data[Size - 1]; Size; --Size )
  {
    v6 = i->pNode;
    v3 = i->pNode->RefCount-- == 1;
    if ( v3 )
      Scaleform::GFx::ASStringNode::ReleaseNode(v6);
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,329>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF> > *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,329>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF> >::TableType *pTable; // rbx
  Scaleform::GFx::ASStringNode *v5; // rcx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      pTable = this->pTable;
      if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) != -2i64 )
      {
        v5 = *(Scaleform::GFx::ASStringNode **)((char *)&pTable[1].SizeMask + v2);
        if ( v5->RefCount-- == 1 )
          Scaleform::GFx::ASStringNode::ReleaseNode(v5);
        *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v2) = -2i64;
      }
      v2 += 24i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::Clear(
        Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > >::TableType *pTable; // rbx
  Scaleform::RefCountVImpl *v5; // rcx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      pTable = this->pTable;
      if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) != -2i64 )
      {
        v5 = *(Scaleform::RefCountVImpl **)((char *)&pTable[2].EntryCount + v2);
        if ( v5 )
          Scaleform::RefCountImpl::Release(v5);
        *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v2) = -2i64;
      }
      v2 += 24i64;
      --v3;
    }
    while ( v3 );
    if ( this->pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::GFx::FocusGroupDescr::~FocusGroupDescr(Scaleform::GFx::FocusGroupDescr *this)
{
  Scaleform::GFx::CharacterHandle *pObject; // rbx
  Scaleform::WeakPtrProxy *v3; // rdx
  bool v4; // zf
  unsigned __int64 Size; // rdi
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *i; // rbx
  Scaleform::Render::TreeShape *v7; // rcx

  pObject = this->ModalClip.pObject;
  if ( pObject )
  {
    if ( --pObject->RefCount <= 0 )
    {
      Scaleform::GFx::CharacterHandle::~CharacterHandle(pObject);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
  }
  v3 = this->LastFocused.pProxy.pObject;
  if ( v3 )
  {
    v4 = v3->RefCount-- == 1;
    if ( v4 )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  }
  Size = this->TabableArray.Data.Size;
  for ( i = &this->TabableArray.Data.Data[Size - 1]; Size; --Size )
  {
    if ( i->pObject )
      Scaleform::RefCountNTSImpl::Release(i->pObject);
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->TabableArray.Data.Data);
  v7 = this->FocusRectNode.pObject;
  if ( this->FocusRectNode.pObject )
  {
    v4 = v7->RefCount-- == 1;
    if ( v4 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v7);
  }
}

void __fastcall Scaleform::GFx::ImageResource::~ImageResource(Scaleform::GFx::ImageResource *this)
{
  Scaleform::Render::ImageBase *pImage; // rcx
  Scaleform::GFx::ResourceKey::KeyInterface *pKeyInterface; // rcx
  Scaleform::Render::Image *pObject; // rcx

  this->__vftable = (Scaleform::GFx::ImageResource_vtbl *)&Scaleform::GFx::ImageResource::`vftable';
  pImage = this->pImage;
  if ( pImage && pImage != &this->Delegate )
    pImage->Release(pImage);
  pKeyInterface = this->Key.pKeyInterface;
  if ( pKeyInterface )
    pKeyInterface->Release(pKeyInterface, this->Key.hKeyData);
  pObject = this->Delegate.pImage.pObject;
  if ( pObject )
    pObject->Release(pObject);
  Scaleform::Render::Image::~Image(&this->Delegate);
  this->__vftable = (Scaleform::GFx::ImageResource_vtbl *)&Scaleform::GFx::Resource::`vftable';
}

void __fastcall Scaleform::GFx::MovieImpl::~MovieImpl(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::Render::TreeContainer *pObject; // rbx
  Scaleform::GFx::StateBag *v2; // rdi
  unsigned __int64 Size; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  Scaleform::Render::TreeShape *v7; // rcx
  bool v8; // zf
  Scaleform::Render::TreeContainer *v9; // rcx
  Scaleform::GFx::DrawingContext *pNext; // rcx
  unsigned __int64 *p_Size; // rdx
  Scaleform::GFx::DrawingContext *v12; // rax
  unsigned __int64 *v13; // rax
  Scaleform::Render::TreeRoot *v14; // rcx
  __int64 v15; // rax
  Scaleform::RefCountVImpl *v16; // rbx
  Scaleform::GFx::FontManagerStates *v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rbp
  Scaleform::GFx::ASIntervalTimerIntf *v20; // rcx
  Scaleform::GFx::MovieImpl::ReturnValueHolder **p_pRetValHolder; // r15
  Scaleform::GFx::MovieImpl::ReturnValueHolder *pRetValHolder; // r14
  Scaleform::GFx::ASStringNode *pNode; // rcx
  unsigned __int64 v24; // rbp
  __int64 i; // rdi
  Scaleform::GFx::ASStringNode *v26; // rcx
  Scaleform::GFx::LoadQueueEntryMT *pLoadQueueMTHead; // rdi
  unsigned int v28; // er14
  Scaleform::GFx::LoadQueueEntryMT *v29; // rdi
  unsigned int j; // ebp
  Scaleform::GFx::LoadQueueEntry *pLoadQueueHead; // rcx
  Scaleform::GFx::LoadQueueEntryMT *v32; // rcx
  Scaleform::GFx::Value::ObjectInterface *pObjectInterface; // rdi
  Scaleform::List<Scaleform::GFx::Value,Scaleform::GFx::Value,Scaleform::ListNode<Scaleform::GFx::Value> > *p_ExternalObjRefs; // rax
  Scaleform::GFx::Value *v35; // rdi
  Scaleform::GFx::Value::ObjectInterface *v36; // rcx
  Scaleform::RefCountVImpl *v37; // rcx
  Scaleform::Render::TreeContainer *v38; // rcx
  Scaleform::RefCountVImpl *v39; // rcx
  Scaleform::RefCountVImpl *v40; // rcx
  Scaleform::GFx::InteractiveObject *v41; // rcx
  Scaleform::RefCountVImpl *v42; // rcx
  Scaleform::RefCountVImpl *v43; // rcx
  Scaleform::RefCountVImpl *v44; // rcx
  unsigned __int64 v45; // rdi
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *p_pMovieDef; // rbx
  unsigned __int64 v47; // rdi
  Scaleform::GFx::MovieImpl::FontDesc *k; // rbx
  Scaleform::GFx::Resource *v49; // rcx
  __int64 v50; // rbx
  unsigned int *p_FocusGroupsCnt; // rdi
  Scaleform::Render::TreeContainer *v52; // rcx
  unsigned __int64 v53; // rdi
  Scaleform::RefCountVImpl **m; // rbx
  unsigned __int64 v55; // rdi
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *n; // rbx
  __int64 v57; // rbp
  __int64 v58; // rbx
  unsigned int *p_MouseCursorCount; // r14
  __int64 v60; // rdi
  _DWORD **ii; // rbx
  _DWORD *v62; // rdx
  _DWORD *v63; // rdx
  _DWORD *v64; // rdx
  _DWORD *v65; // rdx
  Scaleform::GFx::FontManagerStates *v66; // rcx
  Scaleform::RefCountVImpl *v67; // rcx
  Scaleform::RefCountVImpl *v68; // rcx
  Scaleform::RefCountVImpl *v69; // rcx
  Scaleform::RefCountVImpl *v70; // rcx
  Scaleform::RefCountVImpl *v71; // rcx
  Scaleform::Render::TreeContainer *v72; // rcx
  Scaleform::Render::TreeRoot *v73; // rcx
  Scaleform::RefCountVImpl *v74; // rcx
  unsigned __int64 v75; // rdi
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *p_pSprite; // rbx
  Scaleform::GFx::MovieDefImpl *v77; // rcx
  Scaleform::RefCountVImpl *v78; // rcx
  Scaleform::RefCountVImpl *v79; // rcx

  pObject = this->FocusRectContainerNode.pObject;
  this->Scaleform::GFx::Movie::Scaleform::RefCountBase<Scaleform::GFx::Movie,327>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::MovieImpl_vtbl *)&Scaleform::GFx::MovieImpl::`vftable'{for `Scaleform::RefCountBase<Scaleform::GFx::Movie,327>'};
  v2 = &this->Scaleform::GFx::StateBag;
  this->Scaleform::GFx::Movie::Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::MovieImpl::`vftable'{for `Scaleform::GFx::StateBag'};
  if ( pObject )
  {
    Size = Scaleform::Render::TreeContainer::GetSize(pObject);
    Scaleform::Render::TreeContainer::Remove(pObject, 0i64, Size);
    v5 = 0;
    if ( this->FocusGroupsCnt )
    {
      do
      {
        v6 = v5;
        v7 = this->FocusGroups[v6].FocusRectNode.pObject;
        if ( v7 )
        {
          v8 = v7->RefCount-- == 1;
          if ( v8 )
            Scaleform::Render::ContextImpl::Entry::destroyHelper(v7);
        }
        ++v5;
        this->FocusGroups[v6].FocusRectNode.pObject = 0i64;
      }
      while ( v5 < this->FocusGroupsCnt );
      v2 = &this->Scaleform::GFx::StateBag;
    }
    v9 = this->FocusRectContainerNode.pObject;
    if ( v9 )
    {
      v8 = v9->RefCount-- == 1;
      if ( v8 )
        Scaleform::Render::ContextImpl::Entry::destroyHelper(v9);
    }
    this->FocusRectContainerNode.pObject = 0i64;
  }
  pNext = this->DrawingContextList.Root.pNext;
  p_Size = &this->RegisteredFonts.Data.Size;
  if ( this == (Scaleform::GFx::MovieImpl *)-21264i64 )
    p_Size = 0i64;
  while ( pNext != (Scaleform::GFx::DrawingContext *)p_Size )
  {
    v12 = pNext->pNext;
    pNext->pNext = 0i64;
    pNext->pPrev = 0i64;
    pNext = v12;
  }
  v13 = &this->RegisteredFonts.Data.Size;
  if ( this == (Scaleform::GFx::MovieImpl *)-21264i64 )
    v13 = 0i64;
  this->DrawingContextList.Root.pPrev = (Scaleform::GFx::DrawingContext *)v13;
  this->DrawingContextList.Root.pNext = (Scaleform::GFx::DrawingContext *)v13;
  Scaleform::GFx::MovieImpl::ProcessUnloadQueue(this);
  v14 = this->pRenderRoot.pObject;
  if ( v14 )
  {
    v8 = v14->RefCount-- == 1;
    if ( v8 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v14);
  }
  this->pRenderRoot.pObject = 0i64;
  v15 = (__int64)v2->GetStateAddRef(v2, State_Type_Count|0x10);
  v16 = (Scaleform::RefCountVImpl *)v15;
  if ( v15
    && (*(unsigned __int8 (__fastcall **)(__int64, Scaleform::GFx::MovieImpl *))(*(_QWORD *)v15 + 240i64))(v15, this) )
  {
    v16->__vftable[10].Release(v16);
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pIMECandidateListStyle);
  v17 = this->pFontManagerStates.pObject;
  if ( v17 )
    Scaleform::RefCountNTSImpl::Release(v17);
  this->pFontManagerStates.pObject = 0i64;
  v18 = 0i64;
  v19 = this->IntervalTimers.Data.Size;
  if ( v19 )
  {
    do
    {
      v20 = this->IntervalTimers.Data.Data[v18].pObject;
      v20->Clear(v20);
      ++v18;
    }
    while ( v18 < v19 );
  }
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->IntervalTimers.Data,
    &this->IntervalTimers,
    0i64);
  this->Flags |= 0x80000u;
  this->pASMovieRoot.pObject->ClearDisplayList(this->pASMovieRoot.pObject);
  Scaleform::GFx::MovieImpl::ClearIndirectTransformPairs(this);
  Scaleform::GFx::MovieImpl::ClearStickyVariables(this);
  p_pRetValHolder = &this->pRetValHolder;
  pRetValHolder = this->pRetValHolder;
  if ( pRetValHolder )
  {
    if ( pRetValHolder->CharBuffer )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    pNode = pRetValHolder->StringArray.Data.DefaultValue.pNode;
    v8 = pNode->RefCount-- == 1;
    if ( v8 )
      Scaleform::GFx::ASStringNode::ReleaseNode(pNode);
    v24 = pRetValHolder->StringArray.Data.Size;
    for ( i = (__int64)&pRetValHolder->StringArray.Data.Data[v24 - 1]; v24; --v24 )
    {
      v26 = *(Scaleform::GFx::ASStringNode **)i;
      v8 = (*(_DWORD *)(*(_QWORD *)i + 24i64))-- == 1;
      if ( v8 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v26);
      i -= 8i64;
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pRetValHolder->StringArray.Data.Data);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pRetValHolder);
  }
  pLoadQueueMTHead = this->pLoadQueueMTHead;
  v28 = 0;
  if ( pLoadQueueMTHead )
  {
    do
    {
      ++v28;
      Scaleform::GFx::LoadQueueEntryMT::Cancel(pLoadQueueMTHead);
      pLoadQueueMTHead = pLoadQueueMTHead->pNext;
    }
    while ( pLoadQueueMTHead );
    if ( v28 )
    {
      do
      {
        v29 = this->pLoadQueueMTHead;
        for ( j = 0; v29; v29 = v29->pNext )
        {
          if ( v29->LoadFinished(v29) )
            ++j;
        }
      }
      while ( v28 > j );
    }
  }
  while ( this->pLoadQueueHead )
  {
    pLoadQueueHead = this->pLoadQueueHead;
    this->pLoadQueueHead = pLoadQueueHead->pNext;
    ((void (__fastcall *)(Scaleform::GFx::LoadQueueEntry *, __int64))pLoadQueueHead->~LoadQueueEntry)(
      pLoadQueueHead,
      1i64);
  }
  while ( this->pLoadQueueMTHead )
  {
    v32 = this->pLoadQueueMTHead;
    this->pLoadQueueMTHead = v32->pNext;
    ((void (__fastcall *)(Scaleform::GFx::LoadQueueEntryMT *, __int64))v32->~LoadQueueEntryMT)(v32, 1i64);
  }
  pObjectInterface = this->pObjectInterface;
  if ( pObjectInterface )
  {
    p_ExternalObjRefs = &pObjectInterface->ExternalObjRefs;
    if ( (Scaleform::List<Scaleform::GFx::Value,Scaleform::GFx::Value,Scaleform::ListNode<Scaleform::GFx::Value> > *)pObjectInterface->ExternalObjRefs.Root.pNext != &pObjectInterface->ExternalObjRefs )
    {
      v35 = pObjectInterface->ExternalObjRefs.Root.pNext;
      if ( v35 != (Scaleform::GFx::Value *)p_ExternalObjRefs )
      {
        do
        {
          if ( (v35->Type & 0x40) != 0 )
          {
            Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
              v35->pObjectInterface,
              v35,
              v35->mValue.pStringManaged);
            v35->pObjectInterface = 0i64;
          }
          v35->Type = 32;
          v35 = v35->pNext;
        }
        while ( v35 != (Scaleform::GFx::Value *)&this->pObjectInterface->ExternalObjRefs );
      }
    }
  }
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->TopmostLevelCharacters.Data,
    &this->TopmostLevelCharacters,
    0i64);
  v36 = this->pObjectInterface;
  if ( v36 )
    ((void (__fastcall *)(Scaleform::GFx::Value::ObjectInterface *, __int64))v36->~ObjectInterface)(v36, 1i64);
  this->pASMovieRoot.pObject->Shutdown(this->pASMovieRoot.pObject);
  v37 = (Scaleform::RefCountVImpl *)this->pASMovieRoot.pObject;
  if ( v37 )
    Scaleform::RefCountImpl::Release(v37);
  this->pASMovieRoot.pObject = 0i64;
  v38 = this->pTopMostRoot.pObject;
  if ( v38 )
  {
    v8 = v38->RefCount-- == 1;
    if ( v8 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v38);
  }
  this->pTopMostRoot.pObject = 0i64;
  v39 = (Scaleform::RefCountVImpl *)this->DIContext.pObject;
  if ( v39 )
    Scaleform::RefCountImpl::Release(v39);
  this->DIContext.pObject = 0i64;
  Scaleform::Render::ContextImpl::Context::Shutdown(&this->RenderContext, 1);
  v40 = (Scaleform::RefCountVImpl *)this->hDisplayRoot.pData.pObject;
  if ( v40 )
    Scaleform::RefCountImpl::Release(v40);
  this->hDisplayRoot.pData.pObject = 0i64;
  if ( v16 )
    Scaleform::RefCountImpl::Release(v16);
  Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::IndirectTransPair,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::GFx::MovieImpl::IndirectTransPair,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2>,Scaleform::ArrayDefaultPolicy>(&this->IndirectTransformPairs.Data);
  v41 = this->GestureTopMostChar.pObject;
  if ( v41 )
    Scaleform::RefCountNTSImpl::Release(v41);
  v42 = (Scaleform::RefCountVImpl *)this->MultitouchHAL.pObject;
  if ( v42 )
    Scaleform::RefCountImpl::Release(v42);
  v43 = (Scaleform::RefCountVImpl *)this->DIContext.pObject;
  if ( v43 )
    Scaleform::RefCountImpl::Release(v43);
  Scaleform::Render::ContextImpl::Context::~Context(&this->RenderContext);
  v44 = (Scaleform::RefCountVImpl *)this->pSavedASMovieRoot.pObject;
  if ( v44 )
    Scaleform::RefCountImpl::Release(v44);
  v45 = this->MovieDefKillList.Data.Size;
  if ( v45 )
  {
    p_pMovieDef = &this->MovieDefKillList.Data.Data[this->MovieDefKillList.Data.Size - 1].pMovieDef;
    do
    {
      if ( p_pMovieDef->pObject )
        Scaleform::GFx::Resource::Release(p_pMovieDef->pObject);
      p_pMovieDef -= 2;
      --v45;
    }
    while ( v45 );
  }
  if ( this->MovieDefKillList.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  v47 = this->RegisteredFonts.Data.Size;
  for ( k = &this->RegisteredFonts.Data.Data[v47 - 1]; v47; --v47 )
  {
    v49 = k->pFont.pObject;
    if ( v49 )
      Scaleform::GFx::Resource::Release(v49);
    if ( k->pMovieDef.pObject )
      Scaleform::GFx::Resource::Release(k->pMovieDef.pObject);
    --k;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->RegisteredFonts.Data.Data);
  v50 = 16i64;
  p_FocusGroupsCnt = &this->FocusGroupsCnt;
  do
  {
    p_FocusGroupsCnt -= 24;
    Scaleform::GFx::FocusGroupDescr::~FocusGroupDescr((Scaleform::GFx::FocusGroupDescr *)p_FocusGroupsCnt);
    --v50;
  }
  while ( v50 );
  v52 = this->FocusRectContainerNode.pObject;
  if ( v52 )
  {
    v8 = v52->RefCount-- == 1;
    if ( v8 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v52);
  }
  v53 = this->IntervalTimers.Data.Size;
  for ( m = (Scaleform::RefCountVImpl **)&this->IntervalTimers.Data.Data[v53 - 1]; v53; --v53 )
  {
    if ( *m )
      Scaleform::RefCountImpl::Release(*m);
    --m;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->IntervalTimers.Data.Data);
  v55 = this->TopmostLevelCharacters.Data.Size;
  for ( n = &this->TopmostLevelCharacters.Data.Data[v55 - 1]; v55; --v55 )
  {
    if ( n->pObject )
      Scaleform::RefCountNTSImpl::Release(n->pObject);
    --n;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->TopmostLevelCharacters.Data.Data);
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>((Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,329>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF> > *)&this->StickyVariables);
  v57 = 6i64;
  v58 = 6i64;
  do
  {
    p_pRetValHolder -= 209;
    Scaleform::RefCountImplCore::~RefCountImplCore((Scaleform::RefCountImplCore *)p_pRetValHolder);
    --v58;
  }
  while ( v58 );
  p_MouseCursorCount = &this->MouseCursorCount;
  do
  {
    v60 = *((_QWORD *)p_MouseCursorCount - 6);
    p_MouseCursorCount -= 20;
    --v57;
    for ( ii = (_DWORD **)(*((_QWORD *)p_MouseCursorCount + 3) + 8 * (v60 - 1)); v60; --v60 )
    {
      v62 = *ii;
      if ( *ii )
      {
        v8 = (*v62)-- == 1;
        if ( v8 )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      }
      --ii;
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)*((_QWORD *)p_MouseCursorCount + 3));
    v63 = (_DWORD *)*((_QWORD *)p_MouseCursorCount + 2);
    if ( v63 )
    {
      v8 = (*v63)-- == 1;
      if ( v8 )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    v64 = (_DWORD *)*((_QWORD *)p_MouseCursorCount + 1);
    if ( v64 )
    {
      v8 = (*v64)-- == 1;
      if ( v8 )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    v65 = *(_DWORD **)p_MouseCursorCount;
    if ( *(_QWORD *)p_MouseCursorCount )
    {
      v8 = (*v65)-- == 1;
      if ( v8 )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
  }
  while ( v57 );
  v66 = this->pFontManagerStates.pObject;
  if ( v66 )
    Scaleform::RefCountNTSImpl::Release(v66);
  v67 = (Scaleform::RefCountVImpl *)this->pExtContextHandler.pObject;
  if ( v67 )
    Scaleform::RefCountImpl::Release(v67);
  v68 = (Scaleform::RefCountVImpl *)this->pExtIntfHandler.pObject;
  if ( v68 )
    Scaleform::RefCountImpl::Release(v68);
  v69 = (Scaleform::RefCountVImpl *)this->pFSCommandHandler.pObject;
  if ( v69 )
    Scaleform::RefCountImpl::Release(v69);
  v70 = (Scaleform::RefCountVImpl *)this->pUserEventHandler.pObject;
  if ( v70 )
    Scaleform::RefCountImpl::Release(v70);
  v71 = (Scaleform::RefCountVImpl *)this->pCachedLog.pObject;
  if ( v71 )
    Scaleform::RefCountImpl::Release(v71);
  v72 = this->pTopMostRoot.pObject;
  if ( v72 )
  {
    v8 = v72->RefCount-- == 1;
    if ( v8 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v72);
  }
  Scaleform::Render::ContextImpl::RTHandle::~RTHandle(&this->hDisplayRoot);
  v73 = this->pRenderRoot.pObject;
  if ( v73 )
  {
    v8 = v73->RefCount-- == 1;
    if ( v8 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v73);
  }
  v74 = (Scaleform::RefCountVImpl *)this->pStateBag.pObject;
  if ( v74 )
    Scaleform::RefCountImpl::Release(v74);
  v75 = this->MovieLevels.Data.Size;
  if ( v75 )
  {
    p_pSprite = &this->MovieLevels.Data.Data[this->MovieLevels.Data.Size - 1].pSprite;
    do
    {
      if ( p_pSprite->pObject )
        Scaleform::RefCountNTSImpl::Release(p_pSprite->pObject);
      p_pSprite -= 2;
      --v75;
    }
    while ( v75 );
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->MovieLevels.Data.Data);
  v77 = this->pMainMovieDef.pObject;
  if ( v77 )
    Scaleform::GFx::Resource::Release(v77);
  v78 = (Scaleform::RefCountVImpl *)this->AdvanceStats.pObject;
  if ( v78 )
    Scaleform::RefCountImpl::Release(v78);
  this->Scaleform::GFx::Movie::Scaleform::RefCountBase<Scaleform::GFx::Movie,327>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::MovieImpl_vtbl *)&Scaleform::GFx::Movie::`vftable'{for `Scaleform::RefCountBase<Scaleform::GFx::Movie,327>'};
  this->Scaleform::GFx::Movie::Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::Movie::`vftable'{for `Scaleform::GFx::StateBag'};
  v79 = (Scaleform::RefCountVImpl *)this->pASMovieRoot.pObject;
  if ( v79 )
    Scaleform::RefCountImpl::Release(v79);
  this->Scaleform::GFx::Movie::Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::StateBag::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::StateBagImpl::~StateBagImpl(Scaleform::GFx::StateBagImpl *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  this->Scaleform::RefCountBase<Scaleform::GFx::StateBagImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::StateBagImpl_vtbl *)&Scaleform::GFx::StateBagImpl::`vftable'{for `Scaleform::RefCountBase<Scaleform::GFx::StateBagImpl,2>'};
  this->Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::StateBagImpl::`vftable'{for `Scaleform::GFx::StateBag'};
  this->Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>_vtbl *)&Scaleform::GFx::StateBagImpl::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>'};
  Scaleform::Lock::~Lock(&this->StateLock);
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::Clear((Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > *)&this->States);
  pObject = (Scaleform::RefCountVImpl *)this->pDelegate.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>_vtbl *)&Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::`vftable';
  this->Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::StateBag::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

Scaleform::Render::TreeNode::NodeData *__fastcall Scaleform::Render::TreeNode::NodeData::operator=(
        Scaleform::Render::TreeNode::NodeData *this,
        const Scaleform::Render::TreeNode::NodeData *__that)
{
  __int128 v4; // xmm0
  Scaleform::Render::StateBag *p_States; // rdx
  Scaleform::Render::StateBag *v6; // rcx
  float y2; // xmm2_4
  float x2; // xmm1_4
  float y1; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  Scaleform::Render::TreeNode::NodeData *result; // rax

  this->Type = __that->Type;
  this->Flags = __that->Flags;
  *(_OWORD *)&this->M34.M[0][0] = *(_OWORD *)&__that->M34.M[0][0];
  *(_OWORD *)&this->M34.M[1][0] = *(_OWORD *)&__that->M34.M[1][0];
  v4 = *(_OWORD *)&__that->M34.M[2][0];
  p_States = &__that->States;
  *(_OWORD *)&this->M34.M[2][0] = v4;
  v6 = &this->States;
  if ( v6->ArraySize | p_States->ArraySize )
    Scaleform::Render::StateData::assignBag(v6, p_States);
  *(_OWORD *)&this->Cx.M[0][0] = *(_OWORD *)&__that->Cx.M[0][0];
  *(_OWORD *)&this->Cx.M[1][0] = *(_OWORD *)&__that->Cx.M[1][0];
  y2 = __that->AproxLocalBounds.y2;
  x2 = __that->AproxLocalBounds.x2;
  y1 = __that->AproxLocalBounds.y1;
  this->AproxLocalBounds.x1 = __that->AproxLocalBounds.x1;
  this->AproxLocalBounds.y1 = y1;
  this->AproxLocalBounds.x2 = x2;
  this->AproxLocalBounds.y2 = y2;
  v10 = __that->AproxParentBounds.y2;
  v11 = __that->AproxParentBounds.x2;
  v12 = __that->AproxParentBounds.y1;
  this->AproxParentBounds.x1 = __that->AproxParentBounds.x1;
  result = this;
  this->AproxParentBounds.y1 = v12;
  this->AproxParentBounds.x2 = v11;
  this->AproxParentBounds.y2 = v10;
  return result;
}

Scaleform::Render::TreeRoot::NodeData *__fastcall Scaleform::Render::TreeRoot::NodeData::operator=(
        Scaleform::Render::TreeRoot::NodeData *this,
        const Scaleform::Render::TreeRoot::NodeData *__that)
{
  Scaleform::Render::TreeNode::NodeData::operator=(this, __that);
  Scaleform::Render::TreeNodeArray::operator=(&this->Children, &__that->Children);
  this->VP = __that->VP;
  this->BGColor.Raw = __that->BGColor.Raw;
  return this;
}

Scaleform::Render::StrokeStyleType *__fastcall Scaleform::Render::StrokeStyleType::operator=(
        Scaleform::Render::StrokeStyleType *this,
        const Scaleform::Render::StrokeStyleType *__that)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx

  this->Width = __that->Width;
  this->Units = __that->Units;
  this->Flags = __that->Flags;
  this->Miter = __that->Miter;
  this->Color = __that->Color;
  pObject = (Scaleform::RefCountVImpl *)__that->pFill.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v5 = (Scaleform::RefCountVImpl *)this->pFill.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  this->pFill.pObject = __that->pFill.pObject;
  v6 = (Scaleform::RefCountVImpl *)__that->pDashes.pObject;
  if ( v6 )
    Scaleform::Render::RenderBuffer::AddRef(v6);
  v7 = (Scaleform::RefCountVImpl *)this->pDashes.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  this->pDashes.pObject = __that->pDashes.pObject;
  return this;
}

Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *__fastcall Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>::operator Scaleform::Ptr<Scaleform::GFx::InteractiveObject>(
        Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> *this,
        Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *result)
{
  Scaleform::WeakPtrProxy *pObject; // r8
  Scaleform::GFx::InteractiveObject *v5; // rdx
  int RefCount; // eax

  pObject = this->pProxy.pObject;
  if ( this->pProxy.pObject )
  {
    v5 = (Scaleform::GFx::InteractiveObject *)pObject->pObject;
    if ( v5 )
    {
      RefCount = v5->RefCount;
      if ( RefCount )
      {
        result->pObject = v5;
        v5->RefCount = RefCount + 1;
        return result;
      }
    }
    else
    {
      if ( pObject->RefCount-- == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      this->pProxy.pObject = 0i64;
    }
    result->pObject = 0i64;
    return result;
  }
  else
  {
    result->pObject = 0i64;
    return result;
  }
}

bool __fastcall Scaleform::GFx::AutoTabSortFunctor::operator()(
        Scaleform::GFx::AutoTabSortFunctor *this,
        const Scaleform::GFx::InteractiveObject *a,
        const Scaleform::GFx::InteractiveObject *b)
{
  const Scaleform::Render::Rect<float> *v5; // rax
  const Scaleform::Render::Rect<float> *v6; // rax
  float v7; // xmm4_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm5_4
  bool v11; // cf
  bool v12; // zf
  Scaleform::Render::Rect<float> v14; // [rsp+20h] [rbp-B8h] BYREF
  Scaleform::Render::Rect<float> pr; // [rsp+30h] [rbp-A8h] BYREF
  char v16[16]; // [rsp+40h] [rbp-98h] BYREF
  Scaleform::Render::Matrix2x4<float> pmat; // [rsp+50h] [rbp-88h] BYREF
  Scaleform::Render::Matrix2x4<float> v18; // [rsp+70h] [rbp-68h] BYREF

  *(_OWORD *)&pmat.M[0][0] = _xmm;
  *(_OWORD *)&pmat.M[1][0] = _xmm;
  Scaleform::GFx::DisplayObjectBase::GetLevelMatrix(&a->Scaleform::GFx::DisplayObject, &pmat);
  *(_OWORD *)&v18.M[0][0] = _xmm;
  *(_OWORD *)&v18.M[1][0] = _xmm;
  Scaleform::GFx::DisplayObjectBase::GetLevelMatrix(&b->Scaleform::GFx::DisplayObject, &v18);
  v5 = a->GetFocusRect(a, v16);
  Scaleform::Render::Matrix2x4<float>::EncloseTransform(&pmat, &pr, v5);
  v6 = b->GetFocusRect(b, v16);
  Scaleform::Render::Matrix2x4<float>::EncloseTransform(&v18, &v14, v6);
  v7 = (float)(pr.y2 + pr.y1) * 0.5;
  v8 = (float)(pr.x2 + pr.x1) * 0.5;
  v9 = (float)(v14.x2 + v14.x1) * 0.5;
  v10 = (float)(v14.y2 + v14.y1) * 0.5;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(pr.y1 - v14.y1) & _xmm) <= 20.0
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(pr.y2 - v14.y2) & _xmm) <= 20.0
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - v10) & _xmm) <= 20.0 )
  {
    v11 = v9 < v8;
    v12 = v9 == v8;
  }
  else
  {
    v11 = v10 < v7;
    v12 = v10 == v7;
  }
  return !v11 && !v12;
}

__int64 __fastcall Scaleform::GFx::MovieImpl::AcceptAnimMovesWith3D(Scaleform::GFx::MovieImpl *this)
{
  return this->Flags2 & 1;
}

bool __fastcall Scaleform::Render::TreeContainer::Add(
        Scaleform::Render::TreeContainer *this,
        Scaleform::Render::TreeNode *node)
{
  __int64 v3; // r8
  __int64 v4; // rdx

  v3 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                 + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                 + 40);
  v4 = *(_QWORD *)(v3 + 144);
  if ( !v4 )
    return Scaleform::Render::TreeContainer::Insert(this, 0i64, node);
  if ( (v4 & 1) != 0 )
    return Scaleform::Render::TreeContainer::Insert(this, *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFEui64) + 8), node);
  return Scaleform::Render::TreeContainer::Insert(this, (*(_QWORD *)(v3 + 152) != 0i64) + 1i64, node);
}

void __fastcall Scaleform::GFx::MovieImpl::AddIndirectTransformPair(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::DisplayObjContainer *origParent,
        Scaleform::Render::TreeNode *transformParent,
        Scaleform::GFx::DisplayObjectBase *obj)
{
  Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2,Scaleform::ArrayDefaultPolicy> *p_IndirectTransformPairs; // rbx
  __int64 v8; // rdx

  if ( transformParent )
    ++transformParent->RefCount;
  if ( obj )
    ++obj->RefCount;
  if ( origParent )
    ++origParent->RefCount;
  p_IndirectTransformPairs = &this->IndirectTransformPairs;
  Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::IndirectTransPair,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->IndirectTransformPairs.Data,
    &this->IndirectTransformPairs,
    this->IndirectTransformPairs.Data.Size + 1);
  v8 = (__int64)&p_IndirectTransformPairs->Data.Data[p_IndirectTransformPairs->Data.Size - 1];
  if ( v8 )
  {
    if ( transformParent )
      ++transformParent->RefCount;
    *(_QWORD *)v8 = transformParent;
    if ( obj )
      ++obj->RefCount;
    *(_QWORD *)(v8 + 8) = obj;
    if ( origParent )
      ++origParent->RefCount;
    *(_QWORD *)(v8 + 16) = origParent;
    *(_DWORD *)(v8 + 24) = -1;
  }
  if ( origParent )
    Scaleform::RefCountNTSImpl::Release(origParent);
  if ( obj )
    Scaleform::RefCountNTSImpl::Release(obj);
  if ( transformParent )
  {
    if ( transformParent->RefCount-- == 1 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(transformParent);
  }
}

__int64 __fastcall Scaleform::GFx::MovieImpl::AddIntervalTimer(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::ASIntervalTimerIntf *timer)
{
  Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> *v4; // rbx

  timer->SetId(timer, ++this->LastIntervalTimerId);
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)timer);
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->IntervalTimers.Data,
    &this->IntervalTimers,
    this->IntervalTimers.Data.Size + 1);
  v4 = &this->IntervalTimers.Data.Data[this->IntervalTimers.Data.Size - 1];
  if ( v4 )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)timer);
    v4->pObject = timer;
  }
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)timer);
  return (unsigned int)this->LastIntervalTimerId;
}

void __fastcall Scaleform::GFx::MovieImpl::AddLoadQueueEntry(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::LoadQueueEntry *pentry)
{
  Scaleform::GFx::LoadQueueEntry *pLoadQueueHead; // r8
  __int64 p_pNext; // rax
  bool v4; // zf

  pentry->EntryTime = ++this->LastLoadQueueEntryCnt;
  pLoadQueueHead = this->pLoadQueueHead;
  if ( pLoadQueueHead )
  {
    p_pNext = (__int64)&pLoadQueueHead->pNext;
    if ( pLoadQueueHead->pNext )
    {
      do
      {
        pLoadQueueHead = *(Scaleform::GFx::LoadQueueEntry **)p_pNext;
        v4 = *(_QWORD *)(*(_QWORD *)p_pNext + 8i64) == 0i64;
        p_pNext = *(_QWORD *)p_pNext + 8i64;
      }
      while ( !v4 );
    }
    pLoadQueueHead->pNext = pentry;
  }
  else
  {
    this->pLoadQueueHead = pentry;
  }
}

void __fastcall Scaleform::GFx::MovieImpl::AddLoadQueueEntryMT(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::LoadQueueEntryMT *pentryMT)
{
  Scaleform::GFx::LoadQueueEntryMT *pLoadQueueMTHead; // r8
  __int64 p_pNext; // rax
  bool v4; // zf

  pentryMT->pQueueEntry->EntryTime = ++this->LastLoadQueueEntryCnt;
  pLoadQueueMTHead = this->pLoadQueueMTHead;
  if ( pLoadQueueMTHead )
  {
    p_pNext = (__int64)&pLoadQueueMTHead->pNext;
    if ( pLoadQueueMTHead->pNext )
    {
      do
      {
        pLoadQueueMTHead = *(Scaleform::GFx::LoadQueueEntryMT **)p_pNext;
        v4 = *(_QWORD *)(*(_QWORD *)p_pNext + 8i64) == 0i64;
        p_pNext = *(_QWORD *)p_pNext + 8i64;
      }
      while ( !v4 );
    }
    pLoadQueueMTHead->pNext = pentryMT;
    pentryMT->pPrev = pLoadQueueMTHead;
  }
  else
  {
    this->pLoadQueueMTHead = pentryMT;
  }
}

void __fastcall Scaleform::GFx::MovieImpl::AddMovieDefToKillList(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::MovieDefImpl *md)
{
  unsigned __int64 v3; // rax
  unsigned __int64 Size; // rdx
  Scaleform::GFx::MovieImpl::MDKillListEntry *Data; // r9
  Scaleform::GFx::MovieDefImpl **p_pObject; // r8
  unsigned __int64 v8; // rsi
  Scaleform::GFx::MovieImpl::MDKillListEntry *v9; // rbx

  if ( md )
  {
    v3 = 0i64;
    Size = this->MovieDefKillList.Data.Size;
    if ( Size )
    {
      Data = this->MovieDefKillList.Data.Data;
      p_pObject = &Data->pMovieDef.pObject;
      while ( *p_pObject != md )
      {
        ++v3;
        p_pObject += 2;
        if ( v3 >= Size )
          goto LABEL_6;
      }
      Data[v3].KillFrameId = this->RenderContext.SnapshotFrameIds[0];
    }
    else
    {
LABEL_6:
      v8 = this->RenderContext.SnapshotFrameIds[0];
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)md);
      Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::MDKillListEntry,Scaleform::AllocatorGH<Scaleform::GFx::MovieImpl::MDKillListEntry,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        &this->MovieDefKillList.Data,
        &this->MovieDefKillList,
        this->MovieDefKillList.Data.Size + 1);
      v9 = &this->MovieDefKillList.Data.Data[this->MovieDefKillList.Data.Size - 1];
      if ( v9 )
      {
        v9->KillFrameId = v8;
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)md);
        v9->pMovieDef.pObject = md;
      }
      Scaleform::GFx::Resource::Release(md);
    }
  }
}

void __fastcall Scaleform::GFx::ImageResource::ImageDelegate::AddRef(
        Scaleform::GFx::ImageResource::ImageDelegate *this)
{
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::GFx::ImageResource::ImageDelegate *)((char *)this - 32));
}

void __fastcall Scaleform::GFx::MovieImpl::AddStickyVariableNode(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::GFx::ASString *path,
        Scaleform::GFx::MovieImpl::StickyVarNode *p)
{
  Scaleform::GFx::ASStringHash<Scaleform::GFx::MovieImpl::StickyVarNode *> *p_StickyVariables; // rdi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::TableType *pTable; // rsi
  signed __int64 v7; // rax
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  Scaleform::GFx::MovieImpl::StickyVarNode *value; // [rsp+40h] [rbp+18h] BYREF

  value = p;
  p_StickyVariables = &this->StickyVariables;
  pTable = this->StickyVariables.mHash.pTable;
  if ( pTable
    && (v7 = Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,329>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF>>::findIndexCore<Scaleform::GFx::ASString>(
               (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,329>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF> > *)&this->StickyVariables,
               path,
               pTable->SizeMask & path->pNode->HashFlags),
        v7 >= 0)
    && (v8 = &pTable[1].SizeMask + 3 * v7) != 0i64
    && (v9 = v8[1]) != 0 )
  {
    v10 = v9;
    while ( *(Scaleform::GFx::ASStringNode **)(v10 + 8) != p->Name.pNode )
    {
      v10 = *(_QWORD *)(v10 + 16);
      if ( !v10 )
      {
        p->pNext = *(Scaleform::GFx::MovieImpl::StickyVarNode **)(v9 + 16);
        *(_QWORD *)(v9 + 16) = value;
        return;
      }
    }
    (*(void (__fastcall **)(unsigned __int64, Scaleform::GFx::MovieImpl::StickyVarNode *))(*(_QWORD *)v10 + 8i64))(
      v10,
      p);
    if ( value )
      ((void (__fastcall *)(Scaleform::GFx::MovieImpl::StickyVarNode *, __int64))value->~StickyVarNode)(value, 1i64);
  }
  else
  {
    Scaleform::Hash<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>>::Set(
      p_StickyVariables,
      path,
      &value);
  }
}

void __fastcall Scaleform::GFx::MovieImpl::AddTopmostLevelCharacter(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::InteractiveObject *pch)
{
  Scaleform::GFx::InteractiveObject *v2; // r14
  Scaleform::GFx::MovieImpl *v3; // rdi
  Scaleform::GFx::ASString *v4; // r15
  unsigned __int64 Capacity; // r12
  Scaleform::GFx::MovieImpl_vtbl *v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  Scaleform::GFx::MovieImpl_vtbl *v9; // rdx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rsi
  const void *v12; // r13
  Scaleform::MemoryHeap *v13; // rax
  Scaleform::GFx::Sprite *pParent; // rdi
  Scaleform::GFx::ASString *Data; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  _QWORD *p_pNode; // rax
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v19; // rax
  Scaleform::GFx::Sprite *v20; // rcx
  Scaleform::GFx::Sprite *i; // rdi
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r8
  Scaleform::GFx::ASString *v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  Scaleform::GFx::ASStringNode *pNode; // rax
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy> *p_Data; // rdi
  unsigned __int64 v29; // rsi
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v30; // rcx
  __int64 v31; // rbx
  unsigned __int64 v32; // r8
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v33; // rcx
  Scaleform::Render::TreeNode *pObject; // rcx
  int Level; // ebx
  Scaleform::Ptr<Scaleform::Render::TreeNode> result; // [rsp+20h] [rbp-49h] BYREF
  Scaleform::GFx::Sprite *v38; // [rsp+28h] [rbp-41h]
  unsigned __int64 Size; // [rsp+30h] [rbp-39h]
  Scaleform::ArrayDataBase<Scaleform::GFx::ASString,Scaleform::AllocatorDH<Scaleform::GFx::ASString,2>,Scaleform::ArrayDefaultPolicy> v40; // [rsp+38h] [rbp-31h] BYREF
  const void *v41; // [rsp+50h] [rbp-19h]
  Scaleform::ArrayDataBase<Scaleform::GFx::ASString,Scaleform::AllocatorDH<Scaleform::GFx::ASString,2>,Scaleform::ArrayDefaultPolicy> v42; // [rsp+58h] [rbp-11h] BYREF
  void *pheapAddr; // [rsp+70h] [rbp+7h]
  unsigned __int64 v46; // [rsp+E0h] [rbp+77h]

  v2 = pch;
  v3 = this;
  if ( (pch->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x400) != 0
    && Scaleform::GFx::Sprite::IsLevelMovie((Scaleform::GFx::Sprite *)pch) )
  {
    return;
  }
  v4 = 0i64;
  Capacity = 0i64;
  if ( !v3->TopmostLevelCharacters.Data.Size )
    goto LABEL_42;
  v6 = v3->Scaleform::GFx::Movie::Scaleform::RefCountBase<Scaleform::GFx::Movie,327>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  v7 = 0i64;
  memset(&v40, 0, sizeof(v40));
  v8 = (__int64)v6->GetHeap(v3);
  v9 = v3->Scaleform::GFx::Movie::Scaleform::RefCountBase<Scaleform::GFx::Movie,327>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  v10 = 0i64;
  v11 = 0i64;
  v41 = (const void *)v8;
  v42.Data = 0i64;
  v12 = (const void *)v8;
  v42.Policy.Capacity = 0i64;
  v13 = v9->GetHeap(v3);
  pParent = (Scaleform::GFx::Sprite *)pch;
  Data = 0i64;
  pheapAddr = v13;
  do
  {
    v16 = v7 + 1;
    v46 = v7 + 1;
    if ( v7 + 1 >= v7 )
    {
      if ( v16 <= Capacity )
        goto LABEL_12;
      v17 = v16 + (v16 >> 2);
      goto LABEL_10;
    }
    if ( v16 < Capacity >> 1 )
    {
      v17 = v7 + 1;
LABEL_10:
      Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &v40,
        v12,
        v17);
      v16 = v7 + 1;
      Capacity = v40.Policy.Capacity;
      v12 = v41;
    }
    Data = v40.Data;
LABEL_12:
    v7 = v16;
    v40.Size = v16;
    p_pNode = &Data[v16 - 1].pNode;
    if ( p_pNode )
      *p_pNode = pParent;
    v38 = pParent;
    pParent = (Scaleform::GFx::Sprite *)pParent->pParent;
  }
  while ( pParent );
  v3 = this;
  Capacity = 0i64;
  Size = this->TopmostLevelCharacters.Data.Size;
  if ( !Size )
  {
LABEL_41:
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v4);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v40.Data);
    v2 = pch;
LABEL_42:
    ++v2->RefCount;
    p_Data = &v3->TopmostLevelCharacters.Data;
    v29 = p_Data->Size;
    Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      p_Data,
      p_Data,
      v29 + 1);
    if ( v29 + 1 > v29 )
    {
      v30 = &p_Data->Data[v29];
      v31 = 1i64;
      do
      {
        if ( v30 )
          v30->pObject = 0i64;
        ++v30;
        --v31;
      }
      while ( v31 );
    }
    v32 = p_Data->Size;
    if ( Capacity < v32 - 1 )
      memmove(&p_Data->Data[Capacity + 1], &p_Data->Data[Capacity], 8 * (v32 - Capacity) - 8);
    v33 = &p_Data->Data[Capacity];
    if ( v33 )
    {
      ++v2->RefCount;
      v33->pObject = v2;
    }
    Scaleform::RefCountNTSImpl::Release(v2);
    Scaleform::GFx::DisplayObjectBase::SetIndirectTransform(v2, &result, this->pTopMostRoot.pObject);
    if ( result.pObject )
    {
      Scaleform::Render::TreeContainer::Insert(this->pTopMostRoot.pObject, Capacity, result.pObject);
      pObject = result.pObject;
      if ( result.pObject )
      {
        if ( result.pObject->RefCount-- == 1 )
          Scaleform::Render::ContextImpl::Entry::destroyHelper(pObject);
      }
    }
    return;
  }
  while ( v3->TopmostLevelCharacters.Data.Data[Capacity].pObject != pch )
  {
    if ( v11 && (v10 & 0xFFFFFFFFFFFFFFFEui64) != 0 && v10 )
    {
      if ( v4 )
      {
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v4);
        v4 = 0i64;
        v42.Data = 0i64;
      }
      v10 = 0i64;
      v42.Policy.Capacity = 0i64;
    }
    v19 = v3->TopmostLevelCharacters.Data.Data;
    v11 = 0i64;
    v20 = 0i64;
    v42.Size = 0i64;
    for ( i = (Scaleform::GFx::Sprite *)v19[Capacity].pObject; i; i = (Scaleform::GFx::Sprite *)i->pParent )
    {
      v22 = v11 + 1;
      if ( v11 + 1 >= v11 )
      {
        if ( v22 > v10 )
        {
          v23 = v22 + (v22 >> 2);
          goto LABEL_29;
        }
      }
      else if ( v22 < v10 >> 1 )
      {
        v23 = v11 + 1;
LABEL_29:
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &v42,
          pheapAddr,
          v23);
        v4 = v42.Data;
        v10 = v42.Policy.Capacity;
      }
      v42.Size = v11 + 1;
      v24 = &v4[v11++];
      if ( v24 )
        v24->pNode = (Scaleform::GFx::ASStringNode *)i;
      v20 = i;
    }
    if ( v20 == v38 )
    {
      v25 = v46 - 1;
      v26 = v11 - 1;
      if ( (__int64)(v46 - 1) >= 0 )
      {
        while ( v26 >= 0 )
        {
          pNode = v4[v26].pNode;
          if ( v40.Data[v25].pNode != pNode )
          {
            if ( (signed int)*(&v40.Data[v25].pNode->LastIndexAccessed + 1) >= (signed int)*(&pNode->LastIndexAccessed
                                                                                           + 1) )
              break;
            goto LABEL_40;
          }
          --v26;
          if ( (--v25 & 0x8000000000000000ui64) != 0i64 )
            break;
        }
      }
    }
    else
    {
      Level = Scaleform::GFx::Sprite::GetLevel(v20);
      if ( Level > Scaleform::GFx::Sprite::GetLevel(v38) )
      {
LABEL_40:
        v3 = this;
        goto LABEL_41;
      }
    }
    v3 = this;
    if ( ++Capacity >= Size )
      goto LABEL_41;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v4);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v40.Data);
}

float __fastcall Scaleform::GFx::MovieImpl::Advance(
        Scaleform::GFx::MovieImpl *this,
        float deltaT,
        unsigned int frameCatchUpCount,
        bool capture)
{
  Scaleform::GFx::MovieDefImpl *pObject; // rcx
  Scaleform::GFx::StateBag *v7; // rcx
  float v8; // xmm10_4
  float v9; // xmm7_4
  Scaleform::RefCountVImpl *v10; // rcx
  Scaleform::GFx::UserEventHandler *v11; // rbx
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::GFx::FSCommandHandler *v13; // rbx
  Scaleform::RefCountVImpl *v14; // rcx
  Scaleform::GFx::ExternalInterface *v15; // rbx
  Scaleform::RefCountVImpl *v16; // r14
  unsigned int v17; // er12
  Scaleform::RefCountVImpl *v18; // rax
  Scaleform::RefCountVImpl *GlobalLog; // rbx
  Scaleform::RefCountVImpl *v20; // rcx
  Scaleform::RefCountVImpl *v21; // rsi
  Scaleform::RefCountVImpl *v22; // rdi
  Scaleform::GFx::FontLib *v23; // rdx
  Scaleform::GFx::Translator *ptranslator; // rbp
  Scaleform::GFx::FontMap *v25; // r8
  Scaleform::RefCountVImpl *v26; // rbx
  unsigned __int8 v27; // r13
  Scaleform::RefCountVImpl *v28; // rsi
  Scaleform::GFx::MovieDefRootNode *pNext; // rbx
  Scaleform::ArrayDefaultPolicy *p_Policy; // rdi
  _QWORD *v31; // rcx
  unsigned int v32; // ebx
  __int64 v33; // rcx
  Scaleform::GFx::InteractiveObject *v34; // rcx
  int Size; // ebx
  Scaleform::GFx::InteractiveObject *v36; // rcx
  float v37; // xmm0_4
  unsigned __int64 v38; // rcx
  unsigned __int64 RawTicks; // rax
  unsigned __int64 v40; // rbp
  unsigned __int64 v41; // r13
  float FrameTime; // xmm8_4
  float v43; // xmm8_4
  unsigned __int64 v44; // rcx
  int v45; // esi
  unsigned __int64 v46; // rdi
  __int64 v47; // r13
  Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327,Scaleform::ArrayDefaultPolicy> *p_IntervalTimers; // rbx
  Scaleform::GFx::ASIntervalTimerIntf *v49; // rcx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rbp
  unsigned int i; // esi
  Scaleform::GFx::ASIntervalTimerIntf *v53; // rcx
  Scaleform::GFx::ASIntervalTimerIntf *v54; // rcx
  Scaleform::RefCountVImpl *v55; // rcx
  float v56; // xmm8_4
  float TimeRemainder; // xmm2_4
  float v58; // xmm0_4
  unsigned int v59; // edi
  bool v60; // si
  float v61; // xmm6_4
  float v62; // xmm0_4
  float v63; // xmm0_4
  float v64; // xmm2_4
  Scaleform::GFx::InteractiveObject *pUnloadListHead; // rbx
  Scaleform::GFx::InteractiveObject *pPlayNextOpt; // rdi
  Scaleform::GFx::InteractiveObject_vtbl *v67; // rax
  Scaleform::GFx::InteractiveObject *pParent; // rcx
  _BOOL8 v69; // rdx
  unsigned int ForceFrameCatchUp; // eax
  unsigned int v71; // eax
  float v72; // xmm0_4
  Scaleform::GFx::ASMovieRootBase *v73; // rcx
  Scaleform::GFx::DrawingContext *v74; // rbx
  unsigned __int64 *p_Size; // rdi
  __int64 v76; // rbx
  __int64 v77; // rax
  double v78; // xmm6_8
  __int64 RawFrequency; // rax
  double v80; // xmm0_8
  float v81; // xmm10_4
  Scaleform::RefCountVImpl *v84; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v85; // [rsp+40h] [rbp-D8h]
  __int128 v86; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v87; // [rsp+60h] [rbp-B8h]
  Scaleform::GFx::FontLib *pfontLib[2]; // [rsp+70h] [rbp-A8h]
  Scaleform::GFx::FontProvider *pfontProvider[2]; // [rsp+80h] [rbp-98h]
  Scaleform::GFx::Translator *v90[2]; // [rsp+90h] [rbp-88h]

  if ( (this->Flags & 0x100000) != 0 )
  {
    if ( capture )
      Scaleform::GFx::MovieImpl::Capture(this, 1);
    return *(float *)&FLOAT_0_050000001;
  }
  if ( !this->pMainMovie )
  {
    if ( capture )
      Scaleform::GFx::MovieImpl::Capture(this, 1);
    pObject = this->pMainMovieDef.pObject;
    if ( pObject )
      return 1.0 / pObject->GetFrameRate(pObject);
    else
      return 0.0;
  }
  Scaleform::GFx::MovieImpl::ProcessMovieDefToKillList(this);
  this->Flags |= 0x200u;
  v7 = &this->pStateBag.pObject->Scaleform::GFx::StateBag;
  v86 = 0i64;
  v87 = 0i64;
  v8 = 0.0;
  *(_OWORD *)pfontLib = 0i64;
  *(_OWORD *)pfontProvider = 0i64;
  v9 = fmaxf(0.0, deltaT);
  *(_OWORD *)v90 = 0i64;
  v7->GetStatesAddRef(v7, (Scaleform::GFx::State **)&v86, stateQuery, 9u);
  v10 = (Scaleform::RefCountVImpl *)this->pUserEventHandler.pObject;
  v11 = (Scaleform::GFx::UserEventHandler *)v86;
  if ( v10 )
    Scaleform::RefCountImpl::Release(v10);
  this->pUserEventHandler.pObject = v11;
  v12 = (Scaleform::RefCountVImpl *)this->pFSCommandHandler.pObject;
  v13 = (Scaleform::GFx::FSCommandHandler *)*((_QWORD *)&v86 + 1);
  if ( v12 )
    Scaleform::RefCountImpl::Release(v12);
  this->pFSCommandHandler.pObject = v13;
  v14 = (Scaleform::RefCountVImpl *)this->pExtIntfHandler.pObject;
  v15 = (Scaleform::GFx::ExternalInterface *)v87;
  if ( v14 )
    Scaleform::RefCountImpl::Release(v14);
  v16 = (Scaleform::RefCountVImpl *)pfontLib[0];
  v17 = 0;
  v18 = (Scaleform::RefCountVImpl *)*((_QWORD *)&v87 + 1);
  this->pExtIntfHandler.pObject = v15;
  v84 = v18;
  if ( v16 )
  {
    GlobalLog = (Scaleform::RefCountVImpl *)v16[2].__vftable;
    if ( GlobalLog )
    {
LABEL_22:
      Scaleform::Render::RenderBuffer::AddRef(GlobalLog);
      goto LABEL_23;
    }
    GlobalLog = (Scaleform::RefCountVImpl *)Scaleform::Log::GetGlobalLog();
  }
  else
  {
    GlobalLog = 0i64;
  }
  if ( GlobalLog )
    goto LABEL_22;
LABEL_23:
  v20 = (Scaleform::RefCountVImpl *)this->pCachedLog.pObject;
  if ( v20 )
    Scaleform::RefCountImpl::Release(v20);
  v21 = (Scaleform::RefCountVImpl *)pfontLib[1];
  v22 = (Scaleform::RefCountVImpl *)pfontProvider[0];
  v23 = pfontLib[1];
  ptranslator = v90[0];
  v25 = (Scaleform::GFx::FontMap *)pfontProvider[0];
  this->pCachedLog.pObject = (Scaleform::Log *)GlobalLog;
  v26 = (Scaleform::RefCountVImpl *)pfontProvider[1];
  v27 = Scaleform::GFx::FontManagerStates::CheckStateChange(
          this->pFontManagerStates.pObject,
          v23,
          v25,
          pfontProvider[1],
          ptranslator);
  if ( ptranslator )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)ptranslator);
  if ( v26 )
    Scaleform::RefCountImpl::Release(v26);
  if ( v22 )
    Scaleform::RefCountImpl::Release(v22);
  if ( v21 )
    Scaleform::RefCountImpl::Release(v21);
  this->Flags |= 2u;
  v28 = v84;
  if ( v84 )
  {
    if ( (v84[1].RefCount & 1) != 0 )
      this->Flags |= 4u;
    else
      this->Flags &= ~4u;
    if ( (v84[1].RefCount & 2) != 0 )
      this->Flags |= 0x40u;
    else
      this->Flags &= ~0x40u;
    if ( (v84[1].RefCount & 4) != 0 )
      this->Flags |= 8u;
    else
      this->Flags &= ~8u;
    if ( (v84[1].RefCount & 0x10) != 0 )
      this->Flags |= 0x20u;
    else
      this->Flags &= ~0x20u;
    if ( (v84[1].RefCount & 8) != 0 )
      this->Flags |= 0x10u;
    else
      this->Flags &= ~0x10u;
  }
  else
  {
    this->Flags &= 0xFFFFFF83;
  }
  pNext = this->RootMovieDefNodes.Root.pNext;
  p_Policy = &this->MovieLevels.Data.Policy;
  if ( this == (Scaleform::GFx::MovieImpl *)-112i64 )
    p_Policy = 0i64;
  while ( pNext != (Scaleform::GFx::MovieDefRootNode *)p_Policy )
  {
    if ( !pNext->ImportFlag )
    {
      v31 = &pNext->pDefImpl->__vftable;
      pNext->BytesLoaded = *(_DWORD *)(v31[14] + 260i64);
      pNext->LoadingFrame = (*(__int64 (__fastcall **)(_QWORD *))(*v31 + 40i64))(v31);
    }
    if ( v27 )
      pNext->pFontManager.pObject->CleanCache(pNext->pFontManager.pObject);
    pNext = pNext->pNext;
  }
  if ( this->pMainMovieDef.pObject->GetLoadingFrame(this->pMainMovieDef.pObject) )
  {
    if ( v27 || (this->Flags2 & 2) != 0 )
    {
      v32 = 0;
      if ( this->MovieLevels.Data.Size )
      {
        v33 = 0i64;
        do
        {
          v34 = this->MovieLevels.Data.Data[v33].pSprite.pObject;
          v34->SetStateChangeFlags(v34, v27);
          v33 = ++v32;
        }
        while ( v32 < this->MovieLevels.Data.Size );
      }
    }
    if ( this->pMainMovie->GetLoadingFrame(this->pMainMovie) )
    {
      if ( (this->Flags & 0x100) != 0 && this->pMainMovie->GetLoadingFrame(this->pMainMovie) )
      {
        this->Flags &= ~0x100u;
        Size = this->MovieLevels.Data.Size;
        while ( Size )
        {
          v36 = this->MovieLevels.Data.Data[--Size].pSprite.pObject;
          v36->ExecuteFrame0Events(v36);
        }
        this->pASMovieRoot.pObject->DoActions(this->pASMovieRoot.pObject);
        Scaleform::GFx::MovieImpl::ProcessUnloadQueue(this);
        Scaleform::GFx::MovieImpl::ProcessLoadQueue(this);
      }
      v37 = v9 * 1000000.0;
      v38 = 0i64;
      if ( (float)(v9 * 1000000.0) >= 9.223372e18 )
      {
        v37 = v37 - 9.223372e18;
        if ( v37 < 9.223372e18 )
          v38 = 0x8000000000000000ui64;
      }
      this->TimeRemainder = v9 + this->TimeRemainder;
      this->TimeElapsed += v38 + (unsigned int)(int)v37;
      RawTicks = Scaleform::Timer::GetRawTicks();
      v40 = this->IntervalTimers.Data.Size;
      v41 = RawTicks;
      FrameTime = this->FrameTime;
      v85 = RawTicks;
      if ( v40 )
      {
        v43 = FrameTime * 1000000.0;
        v44 = 0i64;
        if ( v43 >= 9.223372e18 )
        {
          v43 = v43 - 9.223372e18;
          if ( v43 < 9.223372e18 )
            v44 = 0x8000000000000000ui64;
        }
        v45 = 0;
        v46 = 0i64;
        v47 = v44 + (unsigned int)(int)v43;
        p_IntervalTimers = &this->IntervalTimers;
        do
        {
          v49 = p_IntervalTimers->Data.Data[v46].pObject;
          if ( v49 && v49->IsActive(v49) )
          {
            ((void (__fastcall *)(Scaleform::GFx::ASIntervalTimerIntf *, Scaleform::GFx::MovieImpl *))p_IntervalTimers->Data.Data[v46].pObject->Invoke)(
              p_IntervalTimers->Data.Data[v46].pObject,
              this);
            v50 = p_IntervalTimers->Data.Data[v46].pObject->GetNextInvokeTime(p_IntervalTimers->Data.Data[v46].pObject)
                - this->TimeElapsed;
            if ( v50 >= v47 )
              v50 = v47;
            v47 = v50;
          }
          else
          {
            ++v45;
          }
          ++v46;
        }
        while ( v46 < v40 );
        if ( v45 )
        {
          v51 = this->IntervalTimers.Data.Size;
          for ( i = 0; v51; --v51 )
          {
            v53 = p_IntervalTimers->Data.Data[i].pObject;
            if ( v53 && v53->IsActive(v53) )
            {
              ++i;
            }
            else
            {
              v54 = p_IntervalTimers->Data.Data[i].pObject;
              v54->Clear(v54);
              if ( this->IntervalTimers.Data.Size == 1 )
              {
                Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
                  &this->IntervalTimers.Data,
                  &this->IntervalTimers,
                  0i64);
              }
              else
              {
                v55 = (Scaleform::RefCountVImpl *)p_IntervalTimers->Data.Data[i].pObject;
                if ( v55 )
                  Scaleform::RefCountImpl::Release(v55);
                memmove(
                  &p_IntervalTimers->Data.Data[i],
                  &p_IntervalTimers->Data.Data[i + 1],
                  8 * (this->IntervalTimers.Data.Size - i) - 8);
                --this->IntervalTimers.Data.Size;
              }
            }
          }
        }
        v56 = (float)(int)v47;
        if ( v47 < 0 )
          v56 = v56 + 1.8446744e19;
        FrameTime = v56 * 1000000.0;
        v41 = v85;
      }
      Scaleform::GFx::MovieImpl::ProcessInput(this);
      TimeRemainder = this->TimeRemainder;
      v58 = this->FrameTime;
      if ( TimeRemainder < v58 )
      {
        Scaleform::GFx::MovieImpl::AdvanceFrame(this, 0, TimeRemainder / v58);
        v72 = fmodf(this->TimeRemainder, this->FrameTime);
        v73 = this->pASMovieRoot.pObject;
        this->TimeRemainder = v72;
        v73->DoActions(v73);
        Scaleform::GFx::MovieImpl::ProcessUnloadQueue(this);
        Scaleform::GFx::MovieImpl::ProcessLoadQueue(this);
        v69 = 0i64;
      }
      else
      {
        this->pASMovieRoot.pObject->DoActions(this->pASMovieRoot.pObject);
        v59 = frameCatchUpCount;
        v60 = frameCatchUpCount || this->ForceFrameCatchUp;
        do
        {
          v61 = this->FrameTime;
          v62 = this->TimeRemainder;
          if ( v60 )
            v63 = v62 - v61;
          else
            v63 = fmodf(v62, v61);
          this->TimeRemainder = v63;
          if ( v63 < v61 )
            v64 = v63 / v61;
          else
            v64 = 0.0;
          Scaleform::GFx::MovieImpl::AdvanceFrame(this, 1, v64);
          this->pASMovieRoot.pObject->DoActions(this->pASMovieRoot.pObject);
          pUnloadListHead = this->pUnloadListHead;
          if ( pUnloadListHead )
          {
            do
            {
              pPlayNextOpt = pUnloadListHead->pPlayNextOpt;
              v67 = pUnloadListHead->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
              pUnloadListHead->pPlayNextOpt = 0i64;
              v67->OnEventUnload(pUnloadListHead);
              pParent = pUnloadListHead->pParent;
              if ( pParent )
                pParent->RemoveDisplayObject(pParent, pUnloadListHead);
              Scaleform::RefCountNTSImpl::Release(pUnloadListHead);
              pUnloadListHead = pPlayNextOpt;
            }
            while ( pPlayNextOpt );
            v59 = frameCatchUpCount;
            this->pUnloadListHead = 0i64;
          }
          Scaleform::GFx::MovieImpl::ProcessLoadQueue(this);
          ForceFrameCatchUp = this->ForceFrameCatchUp;
          if ( ForceFrameCatchUp )
            this->ForceFrameCatchUp = ForceFrameCatchUp - 1;
          v71 = v59--;
          frameCatchUpCount = v59;
        }
        while ( v71 && this->TimeRemainder >= this->FrameTime || this->ForceFrameCatchUp );
        this->Flags |= 0x80u;
        LOBYTE(v69) = 1;
      }
      this->pASMovieRoot.pObject->AdvanceFrame(this->pASMovieRoot.pObject, v69);
      v74 = this->DrawingContextList.Root.pNext;
      p_Size = &this->RegisteredFonts.Data.Size;
      if ( this == (Scaleform::GFx::MovieImpl *)-21264i64 )
        p_Size = 0i64;
      while ( v74 != (Scaleform::GFx::DrawingContext *)p_Size )
      {
        if ( v74->States >= 0x80u )
          Scaleform::GFx::DrawingContext::UpdateRenderNode(v74);
        v74 = v74->pNext;
      }
      if ( this->FocusRectChanged )
        Scaleform::GFx::MovieImpl::UpdateFocusRectRenderNodes(this);
      if ( this->FocusGroupsCnt )
      {
        do
        {
          v76 = v17;
          if ( (this->FocusGroups[v76].TabableArrayStatus & 1) != 0 )
          {
            Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
              &this->FocusGroups[v76].TabableArray.Data,
              this->FocusGroups[v76].TabableArray.Data.pHeap,
              0i64);
            this->FocusGroups[v76].TabableArrayStatus = 0;
          }
          ++v17;
        }
        while ( v17 < this->FocusGroupsCnt );
      }
      this->Flags &= ~2u;
      v77 = Scaleform::Timer::GetRawTicks() - v41;
      v78 = (double)(int)v77;
      if ( v77 < 0 )
        v78 = v78 + 1.844674407370955e19;
      RawFrequency = Scaleform::Timer::GetRawFrequency();
      v80 = (double)(int)RawFrequency;
      if ( RawFrequency < 0 )
        v80 = v80 + 1.844674407370955e19;
      v81 = fmaxf(0.0, FrameTime - (float)(v78 / v80));
      if ( capture )
        Scaleform::GFx::MovieImpl::Capture(this, 1);
      v28 = v84;
      v8 = fminf(v81, this->FrameTime - this->TimeRemainder);
    }
    else
    {
      if ( capture )
        Scaleform::GFx::MovieImpl::Capture(this, 1);
      this->Flags &= ~2u;
    }
  }
  if ( v16 )
    Scaleform::RefCountImpl::Release(v16);
  if ( v28 )
    Scaleform::RefCountImpl::Release(v28);
  return v8;
}

void __fastcall Scaleform::GFx::MovieImpl::AdvanceFrame(
        Scaleform::GFx::MovieImpl *this,
        bool nextFrame,
        float framePos)
{
  unsigned __int64 v5; // rsi
  bool v7; // r13
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *Data; // r15
  unsigned __int64 Size; // rdi
  Scaleform::GFx::InteractiveObject *i; // rbx
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v11; // rax
  unsigned __int64 j; // r14
  Scaleform::GFx::InteractiveObject *pObject; // rbx
  unsigned int Flags; // eax
  unsigned int v16; // eax
  Scaleform::RefCountNTSImpl **k; // rbx
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v19; // r14
  unsigned __int64 m; // rdi
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v21; // rax
  Scaleform::GFx::InteractiveObject *v22; // rcx
  unsigned __int16 v23; // dx
  unsigned int v24; // er8
  Scaleform::RefCountNTSImpl **n; // rbx
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,2>,Scaleform::ArrayDefaultPolicy> pheapAddr; // [rsp+20h] [rbp-58h] BYREF

  if ( nextFrame )
    this->pASMovieRoot.pObject->OnNextFrame(this->pASMovieRoot.pObject);
  v5 = 0i64;
  if ( (this->Flags & 0x80000) != 0 )
  {
    _RAX = this->pPlayListHead;
    __asm
    {
      prefetcht1 byte ptr [rax+0C0h]
      prefetcht1 byte ptr [rax+0A0h]
      prefetcht1 byte ptr [rax+80h]
      prefetcht1 byte ptr [rax+60h]
      prefetcht1 byte ptr [rax+40h]
      prefetcht1 byte ptr [rax+20h]
      prefetcht1 byte ptr [rax]
    }
    this->pPlayListOptHead = 0i64;
    this->Flags &= ~0x80000u;
    v7 = (this->Flags2 & 8) == 0;
    if ( (this->Flags2 & 8) != 0 )
      this->Flags2 &= ~8u;
    else
      this->Flags2 |= 8u;
    memset(&pheapAddr, 0, sizeof(pheapAddr));
    Data = 0i64;
    Size = 0i64;
    for ( i = _RAX; i; i = i->pPlayNext )
    {
      ++i->RefCount;
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        &pheapAddr,
        &pheapAddr,
        Size + 1);
      Size = pheapAddr.Size;
      Data = pheapAddr.Data;
      v11 = &pheapAddr.Data[pheapAddr.Size - 1];
      if ( v11 )
      {
        if ( i )
          ++i->RefCount;
        v11->pObject = i;
      }
      if ( i )
        Scaleform::RefCountNTSImpl::Release(i);
    }
    for ( j = 0i64; j < Size; ++j )
    {
      pObject = Data[j].pObject;
      _RAX = pObject->pPlayNext;
      __asm
      {
        prefetcht1 byte ptr [rax+0C0h]
        prefetcht1 byte ptr [rax+0A0h]
        prefetcht1 byte ptr [rax+80h]
        prefetcht1 byte ptr [rax+60h]
        prefetcht1 byte ptr [rax+40h]
        prefetcht1 byte ptr [rax+20h]
        prefetcht1 byte ptr [rax]
      }
      if ( !Scaleform::GFx::InteractiveObject::IsValidOptAdvListMember(pObject, this) )
      {
        pObject->Flags &= ~0x200000u;
        Flags = pObject->Flags;
        if ( v7 )
          v16 = Flags | 0x800000;
        else
          v16 = Flags & 0xFF7FFFFF;
        pObject->Flags = v16;
        pObject->pPlayPrevOpt = 0i64;
        pObject->pPlayNextOpt = 0i64;
      }
      if ( (pObject->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x40) == 0
        && (pObject->DOFlags & 0x20) == 0 )
      {
        if ( !Scaleform::GFx::InteractiveObject::IsValidOptAdvListMember(pObject, this)
          && pObject->CheckAdvanceStatus(pObject, 0) == 1 )
        {
          Scaleform::GFx::InteractiveObject::AddToOptimizedPlayList(pObject);
        }
        if ( nextFrame || (pObject->Flags & 0x100000) != 0 )
          ((void (__fastcall *)(Scaleform::GFx::InteractiveObject *, bool))pObject->AdvanceFrame)(pObject, nextFrame);
      }
    }
    for ( k = &Data[Size - 1].pObject; Size; --Size )
    {
      if ( *k )
        Scaleform::RefCountNTSImpl::Release(*k);
      --k;
    }
    if ( Data )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, Data);
    this->Flags2 &= ~2u;
  }
  else
  {
    _RBX = this->pPlayListOptHead;
    __asm
    {
      prefetcht1 byte ptr [rbx+0C0h]
      prefetcht1 byte ptr [rbx+0A0h]
      prefetcht1 byte ptr [rbx+80h]
      prefetcht1 byte ptr [rbx+60h]
      prefetcht1 byte ptr [rbx+40h]
      prefetcht1 byte ptr [rbx+20h]
      prefetcht1 byte ptr [rbx]
    }
    memset(&pheapAddr, 0, sizeof(pheapAddr));
    v19 = 0i64;
    for ( m = 0i64; _RBX; _RBX = _RBX->pPlayNextOpt )
    {
      ++_RBX->RefCount;
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        &pheapAddr,
        &pheapAddr,
        m + 1);
      m = pheapAddr.Size;
      v19 = pheapAddr.Data;
      v21 = &pheapAddr.Data[pheapAddr.Size - 1];
      if ( v21 )
      {
        ++_RBX->RefCount;
        v21->pObject = _RBX;
      }
      Scaleform::RefCountNTSImpl::Release(_RBX);
    }
    if ( m )
    {
      do
      {
        v22 = v19[v5].pObject;
        v23 = v22->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags;
        if ( (v23 & 0x10) == 0 )
        {
          v24 = v22->Flags;
          if ( (v24 & 0x200000) != 0 )
          {
            _RAX = v22->pPlayNextOpt;
            __asm
            {
              prefetcht1 byte ptr [rax+0C0h]
              prefetcht1 byte ptr [rax+0A0h]
              prefetcht1 byte ptr [rax+80h]
              prefetcht1 byte ptr [rax+60h]
              prefetcht1 byte ptr [rax+40h]
              prefetcht1 byte ptr [rax+20h]
              prefetcht1 byte ptr [rax]
            }
            if ( (v24 & 0x400000) != 0 )
            {
              Scaleform::GFx::InteractiveObject::RemoveFromOptimizedPlayList(v22);
            }
            else if ( (v23 & 0x40) == 0 && (nextFrame || (v24 & 0x100000) != 0) && (v22->DOFlags & 0x20) == 0 )
            {
              ((void (__fastcall *)(Scaleform::GFx::InteractiveObject *, bool))v22->AdvanceFrame)(v22, nextFrame);
            }
          }
        }
        ++v5;
      }
      while ( v5 < m );
    }
    for ( n = &v19[m - 1].pObject; m; --m )
    {
      if ( *n )
        Scaleform::RefCountNTSImpl::Release(*n);
      --n;
    }
    if ( v19 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v19);
    this->Flags2 &= ~2u;
  }
}

void *__fastcall Scaleform::Render::LinearHeap::Alloc(Scaleform::Render::LinearHeap *this, unsigned __int64 size)
{
  unsigned __int64 v3; // rbp
  void *result; // rax
  Scaleform::Render::LinearHeap::PageType *v5; // rax
  signed __int64 MaxPages; // rdx
  signed __int64 v7; // rsi
  Scaleform::Render::LinearHeap::PageType *v8; // rbx
  unsigned __int64 v9; // rax

  v3 = (size + 7) & 0xFFFFFFFFFFFFFFF8ui64;
  if ( this->pLastPage )
  {
    result = Scaleform::Render::LinearHeap::allocFromLastPage(this, (size + 7) & 0xFFFFFFFFFFFFFFF8ui64);
    if ( result )
      return result;
    ++this->pLastPage;
  }
  else
  {
    v5 = (Scaleform::Render::LinearHeap::PageType *)this->pHeap->Alloc(this->pHeap, 1536i64, 0i64);
    this->pPagePool = v5;
    this->pLastPage = v5;
    memset(v5, 0, 0x600ui64);
    this->MaxPages = 64i64;
  }
  MaxPages = this->MaxPages;
  v7 = this->pLastPage - this->pPagePool;
  if ( v7 >= MaxPages )
  {
    v8 = (Scaleform::Render::LinearHeap::PageType *)this->pHeap->Alloc(this->pHeap, 48 * MaxPages, 0i64);
    memmove(v8, this->pPagePool, 24 * this->MaxPages);
    memset(&v8[this->MaxPages], 0, 24 * this->MaxPages);
    this->pHeap->Free(this->pHeap, this->pPagePool);
    v9 = this->MaxPages;
    this->pPagePool = v8;
    this->MaxPages = 2 * v9;
    this->pLastPage = &v8[v7];
  }
  return Scaleform::Render::LinearHeap::allocFromLastPage(this, v3);
}

Scaleform::GFx::State *__fastcall Scaleform::GFx::MovieImpl::Call(
        Scaleform::GFx::MovieImpl *this,
        const char *extensionID,
        const char *contextID,
        const char *methodName,
        unsigned int argc,
        const Scaleform::GFx::Value *const argv,
        Scaleform::GFx::Value *const result)
{
  Scaleform::GFx::State *v10; // rax
  Scaleform::RefCountVImpl *v11; // rbx
  unsigned __int8 v12; // di

  v10 = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 8i64);
  v11 = (Scaleform::RefCountVImpl *)v10;
  if ( v10 )
  {
    v12 = ((__int64 (__fastcall *)(Scaleform::GFx::State *, const char *, const char *, const char *, unsigned int, const Scaleform::GFx::Value *const, Scaleform::GFx::Value *const))v10->__vftable[1].~RefCountImplCore)(
            v10,
            extensionID,
            contextID,
            methodName,
            argc,
            argv,
            result);
    Scaleform::RefCountImpl::Release(v11);
    return (Scaleform::GFx::State *)v12;
  }
  return v10;
}

void __fastcall Scaleform::GFx::MovieImpl::Capture(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::Render::TreeRoot *onChangeOnly)
{
  unsigned __int64 Size; // r12
  __int64 v4; // r14
  Scaleform::GFx::MovieImpl::IndirectTransPair *Data; // rbx
  Scaleform::Render::TreeNode *RenderNode; // r15
  Scaleform::Render::ContextImpl::Entry *pPrev; // rcx
  bool v8; // r8
  Scaleform::Render::TreeRoot *pObject; // rcx
  Scaleform::GFx::DisplayObjectBase *v10; // rax
  Scaleform::Render::TreeRoot *pParent; // rbx
  Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *pIndXFormData; // rcx
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int128 v15; // xmm1
  char IsOrig3D; // si
  __int64 v17; // r9
  __int64 v18; // rax
  const Scaleform::Render::Matrix3x4<float> *v19; // rdx
  Scaleform::Render::TreeRoot *v20; // rcx
  const Scaleform::Render::Matrix2x4<float> *v21; // rax
  Scaleform::Render::TreeRoot *v22; // rbx
  float v23; // xmm0_4
  float v24; // xmm2_4
  __int64 v25; // r9
  __int64 v26; // rax
  const Scaleform::Render::Matrix3x4<float> *v27; // rdx
  const Scaleform::Render::Matrix2x4<float> *v28; // rax
  Scaleform::Render::Matrix3x4<float> *Inverse; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  float v32; // xmm7_4
  float v33; // xmm5_4
  float v34; // xmm4_4
  float v35; // xmm0_4
  float v36; // xmm3_4
  Scaleform::Render::Matrix3x4<float> result; // [rsp+20h] [rbp-E0h] BYREF
  Scaleform::Render::Matrix3x4<float> m; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::Render::Matrix3x4<float> OrigTransformMatrix; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::Render::Matrix3x4<float> m2; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::Render::Matrix3x4<float> v41; // [rsp+E0h] [rbp-20h] BYREF
  Scaleform::Render::Matrix3x4<float> v42; // [rsp+110h] [rbp+10h] BYREF
  Scaleform::Render::Matrix3x4<float> v43; // [rsp+140h] [rbp+40h] BYREF
  Scaleform::Render::Matrix3x4<float> m1; // [rsp+170h] [rbp+70h] BYREF

  if ( (_BYTE)onChangeOnly
    && !Scaleform::Render::ContextImpl::Context::HasChanges(&this->RenderContext)
    && !this->MovieDefKillList.Data.Size )
  {
    if ( this->PreviouslyCaptured > 0 )
    {
      LOBYTE(onChangeOnly) = 1;
      this->pASMovieRoot.pObject->SuspendGC(this->pASMovieRoot.pObject, (bool)onChangeOnly);
      Scaleform::Render::ContextImpl::Context::Capture(&this->RenderContext);
      this->pASMovieRoot.pObject->SuspendGC(this->pASMovieRoot.pObject, 0);
      --this->PreviouslyCaptured;
    }
    return;
  }
  Size = this->IndirectTransformPairs.Data.Size;
  if ( Size )
  {
    v4 = 0i64;
    do
    {
      Data = this->IndirectTransformPairs.Data.Data;
      RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(Data[v4].Obj.pObject);
      pPrev = RenderNode->pPrev;
      if ( RenderNode->pPrev )
      {
        v8 = ((__int64)pPrev->pNext & 0x80040181) != 0;
        if ( ((__int64)pPrev->pNext & 0x80040181) != 0 )
          goto LABEL_23;
      }
      else
      {
        v8 = 0;
      }
      pObject = (Scaleform::Render::TreeRoot *)Data[v4].TransformParent.pObject;
      onChangeOnly = 0i64;
      if ( pObject )
      {
        while ( pObject != this->pRenderRoot.pObject )
        {
          if ( pObject->pPrev && ((__int64)pObject->pPrev->pNext & 0x80040181) != 0 )
          {
            v8 = 1;
            break;
          }
          pObject = (Scaleform::Render::TreeRoot *)pObject->pParent;
          onChangeOnly = (Scaleform::Render::TreeRoot *)(unsigned int)((_DWORD)onChangeOnly + 1);
          if ( !pObject )
            break;
        }
      }
      if ( (_DWORD)onChangeOnly == Data[v4].OrigParentDepth )
      {
        if ( v8 )
        {
LABEL_23:
          v10 = Data[v4].Obj.pObject;
          pParent = (Scaleform::Render::TreeRoot *)Data[v4].TransformParent.pObject;
          pIndXFormData = v10->pIndXFormData;
          OrigTransformMatrix = pIndXFormData->OrigTransformMatrix;
          v13 = *(_OWORD *)&OrigTransformMatrix.M[0][0];
          v14 = *(_OWORD *)&OrigTransformMatrix.M[1][0];
          v15 = *(_OWORD *)&OrigTransformMatrix.M[2][0];
          IsOrig3D = pIndXFormData->IsOrig3D;
          if ( pParent )
          {
            while ( pParent != this->pRenderRoot.pObject )
            {
              v17 = *(_QWORD *)(((unsigned __int64)pParent & 0xFFFFFFFFFFFFF000ui64) + 0x20);
              v18 = (unsigned int)((int)((_DWORD)pParent - ((unsigned int)pParent & 0xFFFFF000) - 56) / 56);
              if ( (*(_WORD *)(*(_QWORD *)(v17 + 8 * v18 + 40) + 10i64) & 0x200) != 0 )
              {
                v19 = (const Scaleform::Render::Matrix3x4<float> *)(*(_QWORD *)(v17 + 8 * v18 + 40) + 16i64);
                *(_OWORD *)&m2.M[0][0] = v13;
                *(_OWORD *)&m2.M[1][0] = v14;
                *(_OWORD *)&m2.M[2][0] = v15;
                Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&OrigTransformMatrix, v19, &m2);
                IsOrig3D = 1;
              }
              else
              {
                v21 = Scaleform::Render::TreeNode::NodeData::M2D(*(Scaleform::Render::TreeNode::NodeData **)(v17 + 8 * v18 + 40));
                v41 = OrigTransformMatrix;
                Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&OrigTransformMatrix, v21, &v41);
              }
              pParent = (Scaleform::Render::TreeRoot *)pParent->pParent;
              if ( !pParent )
                break;
              v15 = *(_OWORD *)&OrigTransformMatrix.M[2][0];
              v14 = *(_OWORD *)&OrigTransformMatrix.M[1][0];
              v13 = *(_OWORD *)&OrigTransformMatrix.M[0][0];
            }
          }
          v22 = (Scaleform::Render::TreeRoot *)RenderNode->pParent;
          v23 = *(float *)&FLOAT_1_0;
          m.M[1][0] = 0.0;
          v24 = *(float *)&FLOAT_1_0;
          *(_OWORD *)&m.M[0][0] = (unsigned int)FLOAT_1_0;
          LODWORD(m.M[1][1]) = FLOAT_1_0;
          *(_QWORD *)&m.M[2][2] = 1065353216i64;
          *(_QWORD *)&m.M[1][2] = 0i64;
          *(_QWORD *)&m.M[2][0] = 0i64;
          if ( v22 )
          {
            do
            {
              if ( v22 == this->pRenderRoot.pObject )
                break;
              v25 = *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFF000ui64) + 0x20);
              v26 = (unsigned int)((int)((_DWORD)v22 - ((unsigned int)v22 & 0xFFFFF000) - 56) / 56);
              if ( (*(_WORD *)(*(_QWORD *)(v25 + 8 * v26 + 40) + 10i64) & 0x200) != 0 )
              {
                v27 = (const Scaleform::Render::Matrix3x4<float> *)(*(_QWORD *)(v25 + 8 * v26 + 40) + 16i64);
                v42 = m;
                Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&m, v27, &v42);
                IsOrig3D = 1;
              }
              else
              {
                v28 = Scaleform::Render::TreeNode::NodeData::M2D(*(Scaleform::Render::TreeNode::NodeData **)(v25 + 8 * v26 + 40));
                v43 = m;
                Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&m, v28, &v43);
              }
              v22 = (Scaleform::Render::TreeRoot *)v22->pParent;
            }
            while ( v22 );
            v24 = m.M[1][1];
            v23 = m.M[0][0];
          }
          if ( IsOrig3D )
          {
            Inverse = Scaleform::Render::Matrix3x4<float>::GetInverse(&m, &result);
            *(_OWORD *)&m.M[0][0] = *(_OWORD *)&Inverse->M[0][0];
            v30 = *(_OWORD *)&Inverse->M[1][0];
            *(_OWORD *)&m1.M[0][0] = *(_OWORD *)&m.M[0][0];
            *(_OWORD *)&m.M[1][0] = v30;
            v31 = *(_OWORD *)&Inverse->M[2][0];
            *(_OWORD *)&m1.M[1][0] = v30;
            *(_OWORD *)&m.M[2][0] = v31;
            *(_OWORD *)&m1.M[2][0] = v31;
            Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&m, &m1, &OrigTransformMatrix);
            Scaleform::Render::TreeNode::SetMatrix3D(RenderNode, &m);
          }
          else
          {
            result.M[0][0] = v23;
            result.M[1][1] = v24;
            *(_OWORD *)&result.M[0][1] = *(_OWORD *)&m.M[0][1];
            *(_QWORD *)&result.M[1][2] = *(_QWORD *)&m.M[1][2];
            Scaleform::Render::Matrix2x4<float>::SetInverse(
              (Scaleform::Render::Matrix2x4<float> *)&m,
              (const Scaleform::Render::Matrix2x4<float> *)&result);
            v32 = m.M[1][0];
            v33 = m.M[0][0];
            m.M[0][2] = 0.0;
            m.M[0][0] = (float)(OrigTransformMatrix.M[0][0] * m.M[0][0])
                      + (float)(m.M[0][1] * OrigTransformMatrix.M[1][0]);
            v34 = OrigTransformMatrix.M[0][1] * m.M[1][0];
            m.M[1][0] = (float)(OrigTransformMatrix.M[1][0] * m.M[1][1])
                      + (float)(OrigTransformMatrix.M[0][0] * m.M[1][0]);
            v35 = OrigTransformMatrix.M[1][3] * m.M[0][1];
            v36 = OrigTransformMatrix.M[1][3] * m.M[1][1];
            m.M[0][1] = (float)(OrigTransformMatrix.M[0][1] * v33) + (float)(OrigTransformMatrix.M[1][1] * m.M[0][1]);
            *(_QWORD *)&m.M[1][1] = COERCE_UNSIGNED_INT((float)(OrigTransformMatrix.M[1][1] * m.M[1][1]) + v34);
            m.M[0][3] = m.M[0][3] + (float)((float)(OrigTransformMatrix.M[0][3] * v33) + v35);
            m.M[1][3] = m.M[1][3] + (float)((float)(OrigTransformMatrix.M[0][3] * v32) + v36);
            Scaleform::Render::TreeNode::SetMatrix(RenderNode, (const Scaleform::Render::Matrix2x4<float> *)&m);
          }
          goto LABEL_48;
        }
        v20 = (Scaleform::Render::TreeRoot *)RenderNode->pParent;
        if ( v20 )
        {
          onChangeOnly = this->pRenderRoot.pObject;
          while ( v20 != onChangeOnly )
          {
            if ( v20->pPrev && ((__int64)v20->pPrev->pNext & 0x80040181) != 0 )
              goto LABEL_21;
            v20 = (Scaleform::Render::TreeRoot *)v20->pParent;
            if ( !v20 )
              break;
          }
        }
      }
      else
      {
        Data[v4].OrigParentDepth = (int)onChangeOnly;
LABEL_21:
        v8 = 1;
      }
      if ( v8 )
        goto LABEL_23;
LABEL_48:
      ++v4;
      --Size;
    }
    while ( Size );
  }
  if ( (this->Flags & 0x400) != 0 || Scaleform::Render::ContextImpl::Context::HasChanges(&this->RenderContext) )
    this->Flags |= 0x400u;
  else
    this->Flags &= ~0x400u;
  LOBYTE(onChangeOnly) = 1;
  this->pASMovieRoot.pObject->SuspendGC(this->pASMovieRoot.pObject, (bool)onChangeOnly);
  Scaleform::Render::ContextImpl::Context::Capture(&this->RenderContext);
  this->pASMovieRoot.pObject->SuspendGC(this->pASMovieRoot.pObject, 0);
  this->PreviouslyCaptured = 1;
}

void __fastcall Scaleform::GFx::MovieImpl::ChangeMouseCursorType(
        Scaleform::GFx::MovieImpl *this,
        unsigned int mouseIdx,
        unsigned int newCursorType)
{
  char *v4; // rbx
  unsigned int v5; // eax

  v4 = (char *)this + 80 * mouseIdx;
  if ( *((_DWORD *)v4 + 2193) != newCursorType )
    ((void (__fastcall *)(Scaleform::GFx::ASMovieRootBase *))this->pASMovieRoot.pObject->ChangeMouseCursorType)(this->pASMovieRoot.pObject);
  v5 = *((_DWORD *)v4 + 2192);
  if ( v5 == -1 )
    v5 = newCursorType;
  *((_DWORD *)v4 + 2193) = v5;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::GFx::MovieImpl::CheckMouseCursorType(
        Scaleform::GFx::MovieImpl *this,
        unsigned int mouseIdx,
        Scaleform::GFx::InteractiveObject *ptopMouseCharacter)
{
  char *v6; // rbp
  unsigned int v7; // ebx
  unsigned int v8; // eax

  v6 = (char *)this + 80 * mouseIdx;
  if ( Scaleform::GFx::MouseState::IsTopmostEntityChanged((Scaleform::GFx::MouseState *)(v6 + 8704)) )
  {
    v7 = 0;
    if ( ptopMouseCharacter )
      v7 = ptopMouseCharacter->GetCursorType(ptopMouseCharacter);
    if ( *((_DWORD *)v6 + 2193) != v7 )
      this->pASMovieRoot.pObject->ChangeMouseCursorType(this->pASMovieRoot.pObject, mouseIdx, v7);
    v8 = *((_DWORD *)v6 + 2192);
    if ( v8 == -1 )
      v8 = v7;
    *((_DWORD *)v6 + 2193) = v8;
  }
}

void __fastcall Scaleform::GFx::MovieImpl::ClearIndirectTransformPairs(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2,Scaleform::ArrayDefaultPolicy> *p_IndirectTransformPairs; // rsi
  __int64 v3; // rbx
  Scaleform::Render::ContextImpl::Entry *v4; // rcx
  Scaleform::RefCountNTSImpl *v6; // rcx
  Scaleform::RefCountNTSImpl *v7; // rcx
  unsigned __int64 Size; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx

  if ( this->IndirectTransformPairs.Data.Size )
  {
    p_IndirectTransformPairs = &this->IndirectTransformPairs;
    do
    {
      v3 = (__int64)&p_IndirectTransformPairs->Data.Data[p_IndirectTransformPairs->Data.Size];
      v4 = *(Scaleform::Render::ContextImpl::Entry **)(v3 - 32);
      if ( v4 )
      {
        if ( v4->RefCount-- == 1 )
          Scaleform::Render::ContextImpl::Entry::destroyHelper(v4);
      }
      *(_QWORD *)(v3 - 32) = 0i64;
      v6 = *(Scaleform::RefCountNTSImpl **)(v3 - 24);
      if ( v6 )
        Scaleform::RefCountNTSImpl::Release(v6);
      *(_QWORD *)(v3 - 24) = 0i64;
      v7 = *(Scaleform::RefCountNTSImpl **)(v3 - 16);
      if ( v7 )
        Scaleform::RefCountNTSImpl::Release(v7);
      *(_QWORD *)(v3 - 16) = 0i64;
      *(_DWORD *)(v3 - 8) = 0;
      Size = p_IndirectTransformPairs->Data.Size;
      Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::IndirectTransPair,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        &p_IndirectTransformPairs->Data,
        p_IndirectTransformPairs,
        Size - 1);
      if ( Size - 1 > Size )
      {
        v9 = (__int64)&p_IndirectTransformPairs->Data.Data[Size];
        v10 = -1i64;
        do
        {
          if ( v9 )
          {
            *(_QWORD *)v9 = 0i64;
            *(_QWORD *)(v9 + 8) = 0i64;
            *(_QWORD *)(v9 + 16) = 0i64;
            *(_DWORD *)(v9 + 24) = -1;
          }
          v9 += 32i64;
          --v10;
        }
        while ( v10 );
      }
    }
    while ( this->IndirectTransformPairs.Data.Size );
  }
}

void __fastcall Scaleform::GFx::MovieImpl::ClearIntervalTimer(Scaleform::GFx::MovieImpl *this, int timerId)
{
  unsigned __int64 Size; // rsi
  __int64 v3; // rbx
  Scaleform::GFx::ASIntervalTimerIntf *pObject; // rcx
  Scaleform::GFx::ASIntervalTimerIntf *v7; // rcx

  Size = this->IntervalTimers.Data.Size;
  v3 = 0i64;
  if ( Size )
  {
    while ( 1 )
    {
      pObject = this->IntervalTimers.Data.Data[v3].pObject;
      if ( pObject )
      {
        if ( pObject->GetId(pObject) == timerId )
          break;
      }
      if ( ++v3 >= Size )
        return;
    }
    v7 = this->IntervalTimers.Data.Data[v3].pObject;
    v7->Clear(v7);
  }
}

void __fastcall Scaleform::GFx::MovieImpl::ClearPlayList(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::InteractiveObject *pPlayListHead; // r8
  Scaleform::GFx::InteractiveObject *pPlayNext; // rdx

  pPlayListHead = this->pPlayListHead;
  if ( pPlayListHead )
  {
    do
    {
      pPlayNext = pPlayListHead->pPlayNext;
      pPlayListHead->pPlayPrevOpt = 0i64;
      pPlayListHead->pPlayNextOpt = 0i64;
      pPlayListHead->pPlayPrev = 0i64;
      pPlayListHead->pPlayNext = 0i64;
      pPlayListHead = pPlayNext;
    }
    while ( pPlayNext );
  }
  this->pPlayListHead = 0i64;
  this->pPlayListOptHead = 0i64;
}

void __fastcall Scaleform::GFx::MovieImpl::ClearStickyVariables(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::ASStringHash<Scaleform::GFx::MovieImpl::StickyVarNode *> *p_StickyVariables; // r14
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v3; // rbx
  Scaleform::GFx::ASStringHash<Scaleform::GFx::MovieImpl::StickyVarNode *> *v4; // rsi
  unsigned __int64 SizeMask; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::TableType *v6; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::TableType *v7; // rdi
  __int64 v8; // rdi
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // rcx

  p_StickyVariables = &this->StickyVariables;
  pTable = this->StickyVariables.mHash.pTable;
  if ( pTable )
  {
    SizeMask = pTable->SizeMask;
    v3 = 0i64;
    v6 = pTable + 1;
    do
    {
      if ( v6->EntryCount != -2i64 )
        break;
      ++v3;
      v6 = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::TableType *)((char *)v6 + 24);
    }
    while ( v3 <= SizeMask );
    v4 = p_StickyVariables;
  }
  else
  {
    v3 = 0i64;
    v4 = 0i64;
  }
  while ( v4 )
  {
    v7 = v4->mHash.pTable;
    if ( !v4->mHash.pTable || (signed __int64)v3 > (signed __int64)v7->SizeMask )
      break;
    v8 = *(&v7[2].EntryCount + 3 * v3);
    while ( v8 )
    {
      v9 = (void (__fastcall ***)(_QWORD, __int64))v8;
      v8 = *(_QWORD *)(v8 + 16);
      (**v9)(v9, 1i64);
    }
    v10 = v4->mHash.pTable->SizeMask;
    if ( (__int64)v3 <= (__int64)v10 && ++v3 <= v10 )
    {
      v11 = &v4->mHash.pTable[1].EntryCount + 3 * v3;
      do
      {
        if ( *v11 != -2i64 )
          break;
        ++v3;
        v11 += 3;
      }
      while ( v3 <= v10 );
    }
  }
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>((Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,329>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF> > *)p_StickyVariables);
}

Scaleform::Render::TreeNode::NodeData *__fastcall Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData>::ConstructCopy(
        Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData> *this,
        Scaleform::Render::LinearHeap *heap)
{
  Scaleform::Render::TreeNode::NodeData *result; // rax
  Scaleform::Render::TreeNodeArray *v4; // rbx

  ++Scaleform::Render::ContextImpl::ConstructCopyCalls;
  result = (Scaleform::Render::TreeNode::NodeData *)Scaleform::Render::LinearHeap::Alloc(heap, 0xA0ui64);
  v4 = (Scaleform::Render::TreeNodeArray *)result;
  if ( result )
  {
    Scaleform::Render::TreeNode::NodeData::NodeData(result, this);
    v4->pData[0] = (unsigned __int64)&Scaleform::Render::TreeContainer::NodeData::`vftable';
    Scaleform::Render::TreeNodeArray::TreeNodeArray(v4 + 9, (const Scaleform::Render::TreeNodeArray *)&this[1]);
    return (Scaleform::Render::TreeNode::NodeData *)v4;
  }
  return result;
}

void __fastcall Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData>::ConstructCopy(
        Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData> *this,
        Scaleform::Render::LinearHeap *heap)
{
  Scaleform::Render::TreeRoot::NodeData *v3; // rax

  ++Scaleform::Render::ContextImpl::ConstructCopyCalls;
  v3 = (Scaleform::Render::TreeRoot::NodeData *)Scaleform::Render::LinearHeap::Alloc(heap, 0xD0ui64);
  if ( v3 )
    Scaleform::Render::TreeRoot::NodeData::NodeData(v3, (const Scaleform::Render::TreeRoot::NodeData *)this);
}

Scaleform::Render::TreeNode::NodeData *__fastcall Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData>::ConstructCopy(
        Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData> *this,
        Scaleform::Render::LinearHeap *heap)
{
  Scaleform::Render::TreeNode::NodeData *result; // rax
  Scaleform::Render::TreeNode::NodeData *v4; // rbx
  Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData>_vtbl *v5; // rcx

  ++Scaleform::Render::ContextImpl::ConstructCopyCalls;
  result = (Scaleform::Render::TreeNode::NodeData *)Scaleform::Render::LinearHeap::Alloc(heap, 0xA0ui64);
  v4 = result;
  if ( result )
  {
    Scaleform::Render::TreeNode::NodeData::NodeData(result, this);
    v4->__vftable = (Scaleform::Render::TreeNode::NodeData_vtbl *)&Scaleform::Render::TreeShape::NodeData::`vftable';
    v5 = this[1].__vftable;
    if ( v5 )
      (*((void (__fastcall **)(void (__fastcall **)(Scaleform::Render::ContextImpl::EntryData *, void *)))v5->CopyTo + 1))(&v5->CopyTo);
    v4[1].__vftable = (Scaleform::Render::TreeNode::NodeData_vtbl *)this[1].__vftable;
    *(_DWORD *)&v4[1].Type = *(_DWORD *)&this[1].Type;
    return v4;
  }
  return result;
}

void __fastcall Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData>::CopyTo(
        Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData> *this,
        void *pdest)
{
  Scaleform::Render::TreeNode::NodeData::operator=((Scaleform::Render::TreeNode::NodeData *)pdest, this);
  Scaleform::Render::TreeNodeArray::operator=(
    (Scaleform::Render::TreeNodeArray *)pdest + 9,
    (const Scaleform::Render::TreeNodeArray *)&this[1]);
  ++Scaleform::Render::ContextImpl::CopyCalls;
}

void __fastcall Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData>::CopyTo(
        Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData> *this,
        void *pdest)
{
  Scaleform::Render::TreeRoot::NodeData::operator=(
    (Scaleform::Render::TreeRoot::NodeData *)pdest,
    (const Scaleform::Render::TreeRoot::NodeData *)this);
  ++Scaleform::Render::ContextImpl::CopyCalls;
}

void __fastcall Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData>::CopyTo(
        Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData> *this,
        void *pdest)
{
  Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData>_vtbl *v4; // rcx
  __int64 v5; // rcx

  Scaleform::Render::TreeNode::NodeData::operator=((Scaleform::Render::TreeNode::NodeData *)pdest, this);
  v4 = this[1].__vftable;
  if ( v4 )
    (*((void (__fastcall **)(void (__fastcall **)(Scaleform::Render::ContextImpl::EntryData *, void *)))v4->CopyTo + 1))(&v4->CopyTo);
  v5 = *((_QWORD *)pdest + 18);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 16) + 16i64))(v5 + 16);
  *((_QWORD *)pdest + 18) = this[1].__vftable;
  *((_DWORD *)pdest + 38) = *(_DWORD *)&this[1].Type;
  ++Scaleform::Render::ContextImpl::CopyCalls;
}

void __fastcall Scaleform::GFx::Movie::CreateArray(Scaleform::GFx::Movie *this, Scaleform::GFx::Value *pvalue)
{
  this->pASMovieRoot.pObject->CreateArray(this->pASMovieRoot.pObject, pvalue);
}

Scaleform::GFx::DrawingContext *__fastcall Scaleform::GFx::MovieImpl::CreateDrawingContext(
        Scaleform::GFx::MovieImpl *this)
{
  char v2; // bp
  Scaleform::GFx::DrawingContext *v3; // rdi
  Scaleform::GFx::ImageCreator *v4; // rbx
  Scaleform::GFx::DrawingContext *v5; // rax
  Scaleform::GFx::DrawingContext *v6; // rdi
  Scaleform::GFx::DrawingContext *result; // rax
  Scaleform::GFx::ImageCreator *v8; // [rsp+30h] [rbp+8h]

  v2 = 0;
  LODWORD(v8) = 0;
  v3 = (Scaleform::GFx::DrawingContext *)this->pHeap->Alloc(this->pHeap, 216i64, 0i64);
  if ( v3 )
  {
    v4 = (Scaleform::GFx::ImageCreator *)this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 14i64);
    Scaleform::GFx::DrawingContext::DrawingContext(v3, &this->RenderContext, v4);
    v6 = v5;
    v2 = 1;
  }
  else
  {
    v4 = v8;
    v6 = 0i64;
  }
  if ( (v2 & 1) != 0 && v4 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v4);
  v6->pPrev = this->DrawingContextList.Root.pPrev;
  v6->pNext = (Scaleform::GFx::DrawingContext *)&this->RegisteredFonts.Data.Size;
  this->DrawingContextList.Root.pPrev->pNext = v6;
  result = v6;
  this->DrawingContextList.Root.pPrev = v6;
  return result;
}

void __fastcall Scaleform::GFx::Movie::CreateFunction(
        Scaleform::GFx::Movie *this,
        Scaleform::GFx::Value *pvalue,
        Scaleform::GFx::FunctionHandler *pfc,
        void *puserData)
{
  this->pASMovieRoot.pObject->CreateFunction(this->pASMovieRoot.pObject, pvalue, pfc, puserData);
}

Scaleform::GFx::MovieDefImpl *__fastcall Scaleform::GFx::MovieImpl::CreateImageMovieDef(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::ImageResource *pimageResource,
        bool bilinear,
        const char *purl,
        Scaleform::GFx::LoadStates *pls)
{
  __int64 v5; // rsi
  Scaleform::GFx::LoadStates *v9; // r14
  Scaleform::RefCountVImpl *v10; // rbx
  Scaleform::GFx::LoadStates *v11; // rax
  Scaleform::GFx::StateBagImpl *pObject; // r9
  Scaleform::GFx::StateBag *v13; // r8
  Scaleform::RefCountVImpl *v14; // rax
  Scaleform::MemoryHeap *pHeap; // r12
  Scaleform::MemoryHeap *v16; // rcx
  Scaleform::GFx::MovieDataDef *v17; // rax
  Scaleform::GFx::MovieDataDef *v18; // rax
  Scaleform::GFx::MovieDataDef *v19; // rbp
  Scaleform::GFx::LogState *v20; // r15
  Scaleform::Log *GlobalLog; // r15
  Scaleform::GFx::ImageCreator *v22; // rdi
  bool v23; // r15
  Scaleform::GFx::MovieDefImpl *v24; // rax
  __int64 v25; // rax
  Scaleform::GFx::ResourceKey result; // [rsp+50h] [rbp-48h] BYREF

  v5 = 0i64;
  v9 = pls;
  v10 = 0i64;
  if ( !pls )
  {
    v11 = (Scaleform::GFx::LoadStates *)Scaleform::Memory::pGlobalHeap->Alloc(
                                          Scaleform::Memory::pGlobalHeap,
                                          144i64,
                                          0i64);
    if ( v11 )
    {
      pObject = this->pStateBag.pObject;
      v13 = &pObject->Scaleform::GFx::StateBag;
      if ( !pObject )
        v13 = 0i64;
      Scaleform::GFx::LoadStates::LoadStates(v11, this->pMainMovieDef.pObject->pLoaderImpl.pObject, v13, 0i64);
      v10 = v14;
    }
    v9 = (Scaleform::GFx::LoadStates *)v10;
  }
  if ( pimageResource )
  {
    Scaleform::GFx::MovieDataDef::CreateMovieFileKey(&result, purl, 0i64, 0i64, 0i64);
    pHeap = this->pHeap;
    v16 = Scaleform::Memory::pGlobalHeap;
    if ( pHeap )
      v16 = this->pHeap;
    v17 = (Scaleform::GFx::MovieDataDef *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v16->Alloc)(
                                            v16,
                                            72i64);
    if ( v17 )
    {
      Scaleform::GFx::MovieDataDef::MovieDataDef(v17, &result, MT_Image, purl, pHeap, 0, 0i64);
      v19 = v18;
      if ( v18 )
      {
        v20 = v9->pLog.pObject;
        if ( v20 )
        {
          GlobalLog = v20->pLog.pObject;
          if ( !GlobalLog )
            GlobalLog = Scaleform::Log::GetGlobalLog();
        }
        else
        {
          GlobalLog = 0i64;
        }
        v22 = (Scaleform::GFx::ImageCreator *)this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 14i64);
        v23 = !Scaleform::GFx::MovieDataDef::LoadTaskData::InitImageFileMovieDef(
                 v19->pData.pObject,
                 0,
                 pimageResource,
                 v22,
                 GlobalLog,
                 bilinear);
        if ( v22 )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v22);
        if ( !v23 )
        {
          Scaleform::GFx::LoadStates::SetRelativePathForDataDef(v9, v19);
          v24 = (Scaleform::GFx::MovieDefImpl *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))pHeap->Alloc)(
                                                  pHeap,
                                                  120i64);
          if ( v24 )
          {
            Scaleform::GFx::MovieDefImpl::MovieDefImpl(
              v24,
              v19,
              v9->pBindStates.pObject,
              v9->pLoaderImpl.pObject,
              0,
              this->pStateBag.pObject->pDelegate.pObject,
              pHeap,
              1,
              0i64);
            v5 = v25;
          }
        }
        Scaleform::GFx::Resource::Release(v19);
      }
    }
    if ( result.pKeyInterface )
      result.pKeyInterface->Release(result.pKeyInterface, result.hKeyData);
  }
  if ( v10 )
    Scaleform::RefCountImpl::Release(v10);
  return (Scaleform::GFx::MovieDefImpl *)v5;
}

Scaleform::GFx::ASString *__fastcall Scaleform::GFx::MovieImpl::CreateNewInstanceName(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::ASString *result)
{
  Scaleform::GFx::ASStringManager *v4; // rax
  Scaleform::GFx::ASStringNode *StringNode; // rax
  Scaleform::MsgFormat::Sink r; // [rsp+20h] [rbp-468h] BYREF
  Scaleform::MsgFormat v8; // [rsp+40h] [rbp-448h] BYREF
  __int64 pstr[6]; // [rsp+440h] [rbp-48h] BYREF

  ++this->InstanceNameCount;
  memset(pstr, 0, sizeof(pstr));
  r.SinkData.pStr = (Scaleform::String *)pstr;
  r.Type = tDataPtr;
  r.SinkData.DataPtr.Size = 48i64;
  Scaleform::MsgFormat::MsgFormat(&v8, &r);
  Scaleform::MsgFormat::Parse(&v8, "instance{0}");
  Scaleform::MsgFormat::FormatD1<unsigned long>(&v8, &this->InstanceNameCount);
  Scaleform::MsgFormat::FinishFormatD(&v8);
  Scaleform::MsgFormat::~MsgFormat(&v8);
  v4 = this->pASMovieRoot.pObject->GetStringManager(this->pASMovieRoot.pObject);
  StringNode = Scaleform::GFx::ASStringManager::CreateStringNode(v4, (const char *)pstr);
  result->pNode = StringNode;
  ++StringNode->RefCount;
  return result;
}

void __fastcall Scaleform::GFx::Movie::CreateObject(
        Scaleform::GFx::Movie *this,
        Scaleform::GFx::Value *pvalue,
        const char *className,
        const Scaleform::GFx::Value *pargs,
        unsigned int nargs)
{
  ((void (__fastcall *)(Scaleform::GFx::ASMovieRootBase *, Scaleform::GFx::Value *, const char *, const Scaleform::GFx::Value *))this->pASMovieRoot.pObject->CreateObject)(
    this->pASMovieRoot.pObject,
    pvalue,
    className,
    pargs);
}

void __fastcall Scaleform::GFx::Movie::CreateString(
        Scaleform::GFx::Movie *this,
        Scaleform::GFx::Value *pvalue,
        const char *pstring)
{
  this->pASMovieRoot.pObject->CreateString(this->pASMovieRoot.pObject, pvalue, pstring);
}

Scaleform::Render::Image *__fastcall Scaleform::Render::ImageDelegate::CreateSubImage(
        Scaleform::Render::ImageDelegate *this,
        const Scaleform::Render::Rect<unsigned long> *rect,
        Scaleform::MemoryHeap *pheap)
{
  return this->pImage.pObject->CreateSubImage(this->pImage.pObject, rect, pheap);
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

__int64 __fastcall Scaleform::Render::ImageDelegate::Decode(
        Scaleform::Render::SubImage *this,
        Scaleform::Render::ImageData *pdest,
        void (__fastcall *csf)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *),
        void *arg)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Image *, Scaleform::Render::ImageData *, void (__fastcall *)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *), void *))this->pImage.pObject->Decode)(
           this->pImage.pObject,
           pdest,
           csf,
           arg);
}

void __fastcall Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData>::Destroy(
        Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> *this)
{
  ++Scaleform::Render::ContextImpl::DestroyCalls;
  ((void (__fastcall *)(Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> *, _QWORD))this->~EntryData)(
    this,
    0i64);
}

void __fastcall Scaleform::ConstructorMov<Scaleform::GFx::MovieImpl::IndirectTransPair>::DestructArray(
        Scaleform::GFx::MovieImpl::IndirectTransPair *p,
        unsigned __int64 count)
{
  unsigned __int64 v2; // rdi
  Scaleform::GFx::MovieImpl::IndirectTransPair *v3; // rbx
  Scaleform::RefCountNTSImpl *pObject; // rcx
  Scaleform::RefCountNTSImpl *v5; // rcx
  Scaleform::Render::ContextImpl::Entry *v6; // rcx

  if ( count )
  {
    v2 = count;
    v3 = &p[count - 1];
    do
    {
      pObject = v3->OriginalParent.pObject;
      if ( pObject )
        Scaleform::RefCountNTSImpl::Release(pObject);
      v5 = v3->Obj.pObject;
      if ( v5 )
        Scaleform::RefCountNTSImpl::Release(v5);
      v6 = v3->TransformParent.pObject;
      if ( v3->TransformParent.pObject )
      {
        if ( v6->RefCount-- == 1 )
          Scaleform::Render::ContextImpl::Entry::destroyHelper(v6);
      }
      --v3;
      --v2;
    }
    while ( v2 );
  }
}

void __fastcall Scaleform::Render::Matrix3x4<float>::EncloseTransform(
        Scaleform::Render::Matrix3x4<float> *this,
        Scaleform::Render::Rect<float> *pr,
        const Scaleform::Render::Rect<float> *r)
{
  float y1; // xmm1_4
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm10_4
  float v8; // xmm11_4
  float v9; // xmm12_4
  float v10; // xmm15_4
  float v11; // xmm5_4
  float v12; // xmm14_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float y2; // xmm1_4
  float v16; // xmm14_4
  float x2; // xmm2_4
  float v18; // xmm11_4
  float v19; // xmm9_4
  float v20; // xmm5_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm15_4
  float v24; // [rsp+B0h] [rbp+8h]
  float v25; // [rsp+B8h] [rbp+10h]

  y1 = r->y1;
  v4 = this->M[1][2];
  v5 = this->M[1][0];
  v6 = this->M[1][3];
  v7 = this->M[0][2];
  v8 = this->M[0][1];
  v9 = this->M[0][3];
  v10 = this->M[1][1];
  v11 = v10 * y1;
  v12 = (float)(v10 * y1) + (float)(v5 * r->x1);
  v13 = v8 * y1;
  v14 = (float)((float)(this->M[0][0] * r->x1) + (float)(v8 * y1)) + v7;
  y2 = r->y2;
  v16 = (float)(v12 + v4) + v6;
  v25 = v14 + v9;
  x2 = r->x2;
  v18 = v8 * y2;
  v19 = (float)((float)((float)(this->M[0][0] * x2) + v13) + v7) + v9;
  v20 = (float)((float)(v11 + (float)(v5 * x2)) + v4) + v6;
  v21 = (float)((float)((float)(this->M[0][0] * x2) + v18) + v7) + v9;
  v22 = (float)((float)((float)(v10 * y2) + (float)(v5 * x2)) + v4) + v6;
  v23 = (float)((float)((float)(v10 * y2) + (float)(v5 * r->x1)) + v4) + v6;
  v24 = (float)((float)((float)(this->M[0][0] * r->x1) + v18) + v7) + v9;
  pr->x1 = fminf(fminf(fminf(v25, v19), v21), v24);
  pr->x2 = fmaxf(fmaxf(fmaxf(v25, v19), v21), v24);
  pr->y2 = fmaxf(fmaxf(fmaxf(v16, v20), v22), v23);
  pr->y1 = fminf(fminf(fminf(v16, v20), v22), v23);
}

void __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndPath(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this)
{
  Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r8
  __int64 v5; // rcx
  _BYTE *v6; // rcx

  Data = this->Data;
  v3 = Data->Data.Size + 1;
  if ( v3 >= Data->Data.Size )
  {
    if ( v3 <= Data->Data.Policy.Capacity )
      goto LABEL_7;
    v4 = v3 + (v3 >> 2);
  }
  else
  {
    if ( v3 >= Data->Data.Policy.Capacity >> 1 )
      goto LABEL_7;
    v4 = Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this->Data,
    this->Data,
    v4);
LABEL_7:
  v5 = (__int64)(Data->Data.Data - 1);
  Data->Data.Size = v3;
  v6 = (_BYTE *)(v3 + v5);
  if ( v6 )
    *v6 = 6;
  this->Status = Status_EndPath;
}

void __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndShape(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this)
{
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::DataStatus Status; // eax
  Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r8
  unsigned __int8 *v6; // rcx

  Status = this->Status;
  if ( Status == Status_EndShape || Status == Status_Clean )
    return;
  if ( Status != Status_EndPath )
    Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndPath(this);
  Data = this->Data;
  v4 = Data->Data.Size + 1;
  if ( v4 >= Data->Data.Size )
  {
    if ( v4 > Data->Data.Policy.Capacity )
    {
      v5 = v4 + (v4 >> 2);
      goto LABEL_10;
    }
  }
  else if ( v4 < Data->Data.Policy.Capacity >> 1 )
  {
    v5 = Data->Data.Size + 1;
LABEL_10:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this->Data,
      this->Data,
      v5);
  }
  Data->Data.Size = v4;
  v6 = &Data->Data.Data[v4 - 1];
  if ( v6 )
    *v6 = 7;
  this->Status = Status_EndShape;
}

void __fastcall Scaleform::GFx::MovieImpl::FillTabableArray(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::GFx::ProcessFocusKeyInfo *pfocusInfo)
{
  Scaleform::GFx::FocusGroupDescr *pFocusGroup; // rsi
  Scaleform::GFx::CharacterHandle *pObject; // rcx
  bool InclFocusEnabled; // al
  Scaleform::GFx::InteractiveObject *v7; // rax
  Scaleform::GFx::DisplayObjContainer *v8; // rbx
  __int64 Size_low; // rbx
  __int64 v10; // rdi
  Scaleform::GFx::DisplayObjContainer *v11; // rcx
  Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> *p_TabableArray; // rcx
  unsigned __int64 Size; // r8
  char TabableArrayStatus; // al
  Scaleform::GFx::InteractiveObject::FillTabableParams params; // [rsp+20h] [rbp-38h] BYREF

  pFocusGroup = pfocusInfo->pFocusGroup;
  if ( pfocusInfo->InclFocusEnabled && (pFocusGroup->TabableArrayStatus & 3) == 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &pFocusGroup->TabableArray.Data,
      pFocusGroup->TabableArray.Data.pHeap,
      0i64);
    pFocusGroup->TabableArrayStatus = 0;
  }
  if ( (pFocusGroup->TabableArrayStatus & 1) == 0 )
  {
    pObject = pFocusGroup->ModalClip.pObject;
    InclFocusEnabled = pfocusInfo->InclFocusEnabled;
    params.Array = &pFocusGroup->TabableArray;
    params.TabIndexed = 0;
    params.TabChildrenInProto.Value = 0;
    params.InclFocusEnabled = InclFocusEnabled;
    if ( pObject
      && (v7 = Scaleform::GFx::CharacterHandle::ResolveCharacter(pObject, this),
          (v8 = (Scaleform::GFx::DisplayObjContainer *)v7) != 0i64) )
    {
      ++v7->RefCount;
      Scaleform::RefCountNTSImpl::Release(v7);
      Scaleform::GFx::DisplayObjContainer::FillTabableArray(v8, &params);
    }
    else
    {
      Size_low = SLODWORD(this->MovieLevels.Data.Size);
      if ( Size_low > 0 )
      {
        v10 = 16 * Size_low - 16;
        do
        {
          v11 = *(Scaleform::GFx::DisplayObjContainer **)((char *)&this->MovieLevels.Data.Data->pSprite.pObject + v10);
          if ( (v11->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x200) != 0 )
            Scaleform::GFx::DisplayObjContainer::FillTabableArray(v11, &params);
          --Size_low;
          v10 -= 16i64;
        }
        while ( Size_low > 0 );
      }
    }
    p_TabableArray = &pFocusGroup->TabableArray;
    Size = pFocusGroup->TabableArray.Data.Size;
    if ( params.TabIndexed )
      Scaleform::Alg::QuickSortSliced<Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy>,Scaleform::GFx::TabIndexSortFunctor>(
        p_TabableArray,
        0i64,
        Size,
        byte_140A72107);
    else
      Scaleform::Alg::QuickSortSliced<Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy>,Scaleform::GFx::AutoTabSortFunctor>(
        p_TabableArray,
        0i64,
        Size,
        byte_140A72108);
    pFocusGroup->TabableArrayStatus = 1;
    TabableArrayStatus = pFocusGroup->TabableArrayStatus;
    if ( pfocusInfo->InclFocusEnabled )
      TabableArrayStatus = 3;
    pFocusGroup->TabableArrayStatus = TabableArrayStatus;
  }
}

void __fastcall Scaleform::GFx::MovieImpl::FinalizeExtensionContext(
        Scaleform::GFx::MovieImpl *this,
        const char *extensionID,
        const char *contextID)
{
  Scaleform::GFx::State *v5; // rax
  Scaleform::RefCountVImpl *v6; // rbx

  v5 = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 8i64);
  v6 = (Scaleform::RefCountVImpl *)v5;
  if ( v5 )
  {
    ((void (__fastcall *)(Scaleform::GFx::State *, const char *, const char *))v5->__vftable[3].~RefCountImplCore)(
      v5,
      extensionID,
      contextID);
    Scaleform::RefCountImpl::Release(v6);
  }
}

void __fastcall Scaleform::GFx::MovieImpl::FinalizeProcessFocusKey(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::ProcessFocusKeyInfo *pfocusInfo)
{
  __int64 v4; // rsi
  int CurFocusIdx; // eax
  Scaleform::GFx::InteractiveObject *pObject; // r14
  Scaleform::GFx::InteractiveObject *v7; // rbx
  float y2; // xmm2_4
  float x2; // xmm1_4
  float x1; // eax
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> result; // [rsp+58h] [rbp+10h] BYREF

  if ( pfocusInfo )
  {
    if ( pfocusInfo->Initialized )
    {
      v4 = this->FocusGroupIndexes[pfocusInfo->KeyboardIndex];
      if ( (this->FocusGroups[v4].TabableArrayStatus & 1) != 0 )
      {
        CurFocusIdx = pfocusInfo->CurFocusIdx;
        if ( CurFocusIdx >= 0 && CurFocusIdx < SLODWORD(this->FocusGroups[v4].TabableArray.Data.Size) )
        {
          pObject = this->FocusGroups[v4].TabableArray.Data.Data[pfocusInfo->CurFocusIdx].pObject;
          Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>::operator Scaleform::Ptr<Scaleform::GFx::InteractiveObject>(
            &this->FocusGroups[v4].LastFocused,
            &result);
          v7 = result.pObject;
          if ( result.pObject )
          {
            ++result.pObject->RefCount;
            Scaleform::RefCountNTSImpl::Release(v7);
          }
          if ( v7 != pObject )
          {
            this->FocusGroups[v4].LastFocusKeyCode = pfocusInfo->PrevKeyCode;
            y2 = pfocusInfo->Prev_aRect.y2;
            x2 = pfocusInfo->Prev_aRect.x2;
            x1 = pfocusInfo->Prev_aRect.x1;
            this->FocusGroups[v4].LastFocusedRect.y1 = pfocusInfo->Prev_aRect.y1;
            this->FocusGroups[v4].LastFocusedRect.x2 = x2;
            this->FocusGroups[v4].LastFocusedRect.y2 = y2;
            this->FocusGroups[v4].LastFocusedRect.x1 = x1;
            Scaleform::GFx::MovieImpl::QueueSetFocusTo(
              this,
              pObject,
              0i64,
              pfocusInfo->KeyboardIndex,
              GFx_FocusMovedByKeyboard,
              pfocusInfo);
          }
          if ( pObject && pObject->GetType(pObject) == MouseWheel )
          {
            if ( this->FocusGroups[v4].FocusRectShown )
              this->FocusRectChanged = 1;
            this->FocusGroups[v4].FocusRectShown = 0;
          }
          else
          {
            if ( !this->FocusGroups[v4].FocusRectShown )
              this->FocusRectChanged = 1;
            this->FocusGroups[v4].FocusRectShown = 1;
          }
          if ( v7 )
            Scaleform::RefCountNTSImpl::Release(v7);
        }
      }
    }
  }
}

char __fastcall Scaleform::GFx::MovieImpl::FindExportedResource(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::MovieDefImpl *localDef,
        Scaleform::GFx::ResourceBindData *presBindData,
        const Scaleform::String *symbol)
{
  Scaleform::GFx::MovieDefRootNode *pNext; // rbx
  bool v10; // zf
  Scaleform::ArrayDefaultPolicy *p_Policy; // rsi
  Scaleform::GFx::MovieDefImpl *v12; // rdi
  Scaleform::GFx::MovieDefImpl *pDefImpl; // rcx

  if ( Scaleform::GFx::MovieDefImpl::GetExportedResource(localDef, presBindData, symbol, 0i64) )
    return 1;
  pNext = this->RootMovieDefNodes.Root.pNext;
  v10 = &this->RootMovieDefNodes == 0i64;
  p_Policy = &this->MovieLevels.Data.Policy;
  v12 = localDef;
  if ( v10 )
    p_Policy = 0i64;
  while ( pNext != (Scaleform::GFx::MovieDefRootNode *)p_Policy )
  {
    pDefImpl = pNext->pDefImpl;
    if ( pDefImpl != localDef && (unsigned __int8)Scaleform::GFx::MovieDefImpl::DoesDirectlyImport(pDefImpl, v12) )
    {
      if ( Scaleform::GFx::MovieDefImpl::GetExportedResource(pNext->pDefImpl, presBindData, symbol, 0i64) )
        return 1;
      v12 = pNext->pDefImpl;
    }
    pNext = pNext->pNext;
  }
  return 0;
}

Scaleform::GFx::FontManager *__fastcall Scaleform::GFx::MovieImpl::FindFontManager(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::MovieDefImpl *pdefImpl)
{
  Scaleform::GFx::MovieDefRootNode *pNext; // rax
  Scaleform::ArrayDefaultPolicy *p_Policy; // r8

  pNext = this->RootMovieDefNodes.Root.pNext;
  p_Policy = &this->MovieLevels.Data.Policy;
  if ( this == (Scaleform::GFx::MovieImpl *)-112i64 )
    p_Policy = 0i64;
  while ( pNext != (Scaleform::GFx::MovieDefRootNode *)p_Policy )
  {
    if ( (pNext->pDefImpl == pdefImpl || !pdefImpl) && pNext->pFontManager.pObject )
      return pNext->pFontManager.pObject;
    pNext = pNext->pNext;
  }
  return 0i64;
}

Scaleform::GFx::FontResource *__fastcall Scaleform::GFx::MovieImpl::FindRegisteredFont(
        Scaleform::GFx::MovieImpl *this,
        const char *pfontName,
        unsigned int matchFontFlags,
        Scaleform::GFx::MovieDef **ppsrcMovieDef)
{
  unsigned __int64 Size; // rbp
  unsigned __int64 v5; // rbx
  int v9; // er15
  __int64 v10; // rdi
  unsigned int v11; // er15
  unsigned int v12; // er14
  Scaleform::Render::Font *pObject; // rcx
  const char *v14; // rax
  unsigned __int64 v16; // rbx

  Size = this->RegisteredFonts.Data.Size;
  v5 = 0i64;
  if ( !Size )
    return 0i64;
  v9 = 3;
  v10 = 0i64;
  if ( (matchFontFlags & 0x300) != 0 )
    v9 = 771;
  v11 = matchFontFlags & 0x10 | v9;
  v12 = matchFontFlags & 0x313;
  while ( 1 )
  {
    pObject = this->RegisteredFonts.Data.Data[v10].pFont.pObject->pFont.pObject;
    if ( (v11 & pObject->Flags) == v12 )
    {
      v14 = pObject->GetName(pObject);
      if ( !Scaleform::String::CompareNoCase(v14, pfontName) )
        break;
    }
    ++v5;
    ++v10;
    if ( v5 >= Size )
      return 0i64;
  }
  v16 = v5;
  *ppsrcMovieDef = this->RegisteredFonts.Data.Data[v16].pMovieDef.pObject;
  return this->RegisteredFonts.Data.Data[v16].pFont.pObject;
}

void __fastcall Scaleform::GFx::MovieImpl::ForceCollectGarbage(Scaleform::GFx::MovieImpl *this, __int64 gcFlags)
{
  this->pASMovieRoot.pObject->ForceCollect(this->pASMovieRoot.pObject, gcFlags);
}

void __fastcall Scaleform::GFx::MovieImpl::ForceUpdateImages(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::Render::ContextImpl::Context::ForceUpdateImages(&this->RenderContext);
  ++this->PreviouslyCaptured;
}

unsigned __int64 __fastcall Scaleform::GFx::MovieImpl::GetASTimerMs(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::RefCountVImpl *v2; // rax
  Scaleform::RefCountVImpl *v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // rax
  void *v7; // rbx
  Scaleform::String v8; // [rsp+20h] [rbp-88h] BYREF
  Scaleform::LongFormatter v9; // [rsp+30h] [rbp-78h] BYREF

  v2 = (Scaleform::RefCountVImpl *)this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 34i64);
  v3 = v2;
  if ( !v2 )
    return Scaleform::Timer::GetTicks() / 0x3E8 - this->StartTickMs;
  Scaleform::RefCountImpl::Release(v2);
  if ( v3[1].RefCount )
  {
    Scaleform::String::String(&v8);
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, const char *, Scaleform::String *))v3->AddRef)(v3, "timer", &v8);
    v6 = strtoull((const char *)((v8.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12), 0i64, 10);
    v7 = (void *)(v8.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    v4 = v6;
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v8.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v7);
  }
  else
  {
    v4 = Scaleform::Timer::GetTicks() / 0x3E8 - this->StartTickMs;
    Scaleform::LongFormatter::LongFormatter(&v9, v4);
    Scaleform::LongFormatter::Convert(&v9);
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, const char *, char *))v3->Release)(v3, "timer", v9.ValueStr);
    v9.Scaleform::String::InitStruct::__vftable = (Scaleform::String::InitStruct_vtbl *)&Scaleform::GFx::AS3::VectorBase<unsigned long>::ArrayFunc::`vftable';
    Scaleform::Formatter::~Formatter(&v9);
  }
  return v4;
}

Scaleform::GFx::State *__fastcall Scaleform::GFx::MovieImpl::GetActionScriptData(
        Scaleform::GFx::MovieImpl *this,
        const char *extensionID,
        const char *contextID)
{
  Scaleform::GFx::State *result; // rax
  Scaleform::RefCountVImpl *v6; // rbx
  __int64 v7; // rdi

  result = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 8i64);
  v6 = (Scaleform::RefCountVImpl *)result;
  if ( result )
  {
    v7 = ((__int64 (__fastcall *)(Scaleform::GFx::State *, const char *, const char *))result->__vftable[5].~RefCountImplCore)(
           result,
           extensionID,
           contextID);
    Scaleform::RefCountImpl::Release(v6);
    return (Scaleform::GFx::State *)v7;
  }
  return result;
}

Scaleform::GFx::AS3::VMAppDomain *__fastcall Scaleform::GFx::FontManagerStates::GetStateBagImpl(
        Scaleform::GFx::AS3::VMAppDomain *this)
{
  return this->ParentDomain;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

Scaleform::Render::MemoryBufferImage *__fastcall Scaleform::Render::ImageDelegate::GetAsMemoryImage(
        Scaleform::Render::ImageDelegate *this)
{
  return this->pImage.pObject->GetAsMemoryImage(this->pImage.pObject);
}

float __fastcall Scaleform::GFx::MovieImpl::GetBackgroundAlpha(Scaleform::GFx::MovieImpl *this)
{
  return (float)this->BackgroundColor.Channels.Alpha / 255.0;
}

Scaleform::GFx::ResourceId *__fastcall Scaleform::GFx::ImageResource::GetBaseImageId(
        Scaleform::GFx::ImageResource *this,
        Scaleform::GFx::ResourceId *result)
{
  result->Id = 0;
  return result;
}

__int64 __fastcall Scaleform::GFx::MovieImpl::GetControllerCount(Scaleform::GFx::MovieImpl *this)
{
  return this->ControllerCount;
}

__int64 __fastcall Scaleform::GFx::MovieImpl::GetControllerFocusGroup(
        Scaleform::GFx::MovieImpl *this,
        unsigned int controllerIdx)
{
  if ( controllerIdx < 0x10 )
    return this->FocusGroupIndexes[controllerIdx];
  else
    return 0i64;
}

__int64 __fastcall Scaleform::GFx::MovieImpl::GetControllerMaskByFocusGroup(
        Scaleform::GFx::MovieImpl *this,
        unsigned int focusGroupIndex)
{
  unsigned int v2; // er10
  unsigned __int8 *v3; // r11
  int v5; // er8
  __int64 v6; // rdi
  int v7; // eax
  int v8; // ecx
  int v9; // er8
  int v10; // edx
  int v11; // er8
  int v12; // er9
  int v13; // er8

  v2 = 0;
  v3 = &this->FocusGroupIndexes[1];
  v5 = 1;
  v6 = 4i64;
  do
  {
    v7 = *(v3 - 1);
    v3 += 4;
    v8 = v2 | v5;
    if ( v7 != focusGroupIndex )
      v8 = v2;
    v9 = 2 * v5;
    v10 = v9 | v8;
    if ( *(v3 - 4) != focusGroupIndex )
      v10 = v8;
    v11 = 2 * v9;
    v12 = v11 | v10;
    if ( *(v3 - 3) != focusGroupIndex )
      v12 = v10;
    v13 = 2 * v11;
    v2 = v13 | v12;
    if ( *(v3 - 2) != focusGroupIndex )
      v2 = v12;
    v5 = 2 * v13;
    --v6;
  }
  while ( v6 );
  return v2;
}

__int64 __fastcall Scaleform::GFx::MovieImpl::GetCurrentFrame(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::InteractiveObject *pMainMovie; // rcx

  pMainMovie = this->pMainMovie;
  if ( pMainMovie )
    return ((__int64 (__fastcall *)(Scaleform::GFx::InteractiveObject *))pMainMovie->GetCurrentFrame)(pMainMovie);
  else
    return 0i64;
}

bool __fastcall Scaleform::GFx::MovieImpl::GetDirtyFlag(Scaleform::GFx::MovieImpl *this, bool doReset)
{
  bool result; // al

  if ( (this->Flags & 0x400) != 0
    || (result = Scaleform::Render::ContextImpl::Context::HasChanges(&this->RenderContext)) )
  {
    result = 1;
  }
  if ( doReset )
    this->Flags &= ~0x400u;
  return result;
}

Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> *__fastcall Scaleform::GFx::MovieImpl::GetDisplayHandle(
        Scaleform::GFx::MovieImpl *this)
{
  return &this->hDisplayRoot;
}

void __fastcall Scaleform::GFx::MovieImpl::GetDragState(
        Scaleform::GFx::MovieImpl *this,
        unsigned int mouseIndex,
        Scaleform::GFx::MovieImpl::DragState *st)
{
  Scaleform::GFx::MovieImpl::DragState *v3; // rdx
  float x; // eax
  float v5; // eax
  float v6; // eax

  v3 = &this->CurrentDragStates[mouseIndex];
  st->pCharacter = v3->pCharacter;
  st->pTopmostEntity = v3->pTopmostEntity;
  st->LockCenter = v3->LockCenter;
  st->Bound = v3->Bound;
  x = v3->BoundLT.x;
  st->BoundLT.y = v3->BoundLT.y;
  st->BoundLT.x = x;
  v5 = v3->BoundRB.x;
  st->BoundRB.y = v3->BoundRB.y;
  st->BoundRB.x = v5;
  v6 = v3->CenterDelta.x;
  st->CenterDelta.y = v3->CenterDelta.y;
  st->CenterDelta.x = v6;
  st->MouseIndex = v3->MouseIndex;
}

Scaleform::Render::DrawableImageContext *__fastcall Scaleform::GFx::MovieImpl::GetDrawableImageContext(
        Scaleform::GFx::MovieImpl *this)
{
  Scaleform::Render::DrawableImageContext *result; // rax
  Scaleform::Render::DrawableImageContext *v3; // rax
  Scaleform::Render::DrawableImageContext *v4; // rdi
  Scaleform::Render::ThreadCommandQueue *pRTCommandQueue; // r8
  Scaleform::Render::DrawableImageContext *v6; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::Interfaces i; // [rsp+20h] [rbp-28h] BYREF

  result = this->DIContext.pObject;
  if ( !result )
  {
    v3 = (Scaleform::Render::DrawableImageContext *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                      Scaleform::Memory::pGlobalHeap,
                                                      448i64,
                                                      0i64);
    v4 = 0i64;
    if ( v3 )
    {
      pRTCommandQueue = this->pRTCommandQueue;
      memset(&i, 0, 20);
      Scaleform::Render::DrawableImageContext::DrawableImageContext(v3, &this->RenderContext, pRTCommandQueue, &i);
      v4 = v6;
    }
    pObject = (Scaleform::RefCountVImpl *)this->DIContext.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->DIContext.pObject = v4;
    return v4;
  }
  return result;
}

__int64 __fastcall Scaleform::GFx::MovieImpl::GetEdgeAAMode(Scaleform::GFx::MovieImpl *this)
{
  return *(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pRenderRoot.pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                              + 8i64
                              * (unsigned int)((int)(LODWORD(this->pRenderRoot.pObject)
                                                   - ((__int64)this->pRenderRoot.pObject & 0xFFFFF000)
                                                   - 56)
                                             / 56)
                              + 40)
                  + 10i64) & 0xC;
}

Scaleform::GFx::State *__fastcall Scaleform::GFx::MovieImpl::GetExtensionDirectory(
        Scaleform::GFx::MovieImpl *this,
        const char *extensionID)
{
  Scaleform::GFx::State *result; // rax
  Scaleform::RefCountVImpl *v4; // rbx
  __int64 v5; // rdi

  result = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 8i64);
  v4 = (Scaleform::RefCountVImpl *)result;
  if ( result )
  {
    v5 = ((__int64 (__fastcall *)(Scaleform::GFx::State *, const char *))result->__vftable[2].~RefCountImplCore)(
           result,
           extensionID);
    Scaleform::RefCountImpl::Release(v4);
    return (Scaleform::GFx::State *)v5;
  }
  return result;
}

void __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int idx,
        Scaleform::Render::FillStyleType *p)
{
  Scaleform::Render::FillStyleType *v4; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v6; // rcx

  v4 = &this->Fills.Data.Data[idx - 1];
  p->Color = v4->Color;
  pObject = (Scaleform::RefCountVImpl *)v4->pFill.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v6 = (Scaleform::RefCountVImpl *)p->pFill.pObject;
  if ( v6 )
    Scaleform::RefCountImpl::Release(v6);
  p->pFill.pObject = v4->pFill.pObject;
}

__int64 __fastcall Scaleform::Render::ShapeMeshProvider::GetLayerCount(Concurrency::details::ContextBase *this)
{
  return this->m_id;
}

__int64 __fastcall Scaleform::Render::ImageDelegate::GetFormat(Scaleform::Render::SubImage *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Image *))this->pImage.pObject->GetFormat)(this->pImage.pObject);
}

Scaleform::GFx::AS3::ClassTraits::fl::XMLList *__fastcall Scaleform::GFx::MovieImpl::GetHeap(
        Scaleform::GFx::AS3::XMLSupportImpl *this)
{
  return this->TraitsXMLList.pObject;
}

void __fastcall Scaleform::GFx::MovieImpl::GetIMECandidateListStyle(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::IMECandidateListStyle *pst)
{
  Scaleform::GFx::IMECandidateListStyle *pIMECandidateListStyle; // rax
  int v3; // eax
  __int128 v4; // [rsp+0h] [rbp-38h]
  __int128 v5; // [rsp+10h] [rbp-28h]
  __int64 v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+28h] [rbp-10h]

  pIMECandidateListStyle = this->pIMECandidateListStyle;
  if ( pIMECandidateListStyle )
  {
    *(_OWORD *)&pst->TextColor = *(_OWORD *)&pIMECandidateListStyle->TextColor;
    *(_OWORD *)&pst->SelectedBackgroundColor = *(_OWORD *)&pIMECandidateListStyle->SelectedBackgroundColor;
    *(_QWORD *)&pst->FontSize = *(_QWORD *)&pIMECandidateListStyle->FontSize;
    v3 = *(_DWORD *)&pIMECandidateListStyle->Flags;
  }
  else
  {
    LOWORD(v7) = 0;
    v3 = v7;
    *(_OWORD *)&pst->TextColor = v4;
    *(_OWORD *)&pst->SelectedBackgroundColor = v5;
    *(_QWORD *)&pst->FontSize = v6;
  }
  *(_DWORD *)&pst->Flags = v3;
}

Scaleform::Ptr<Scaleform::GFx::ImageResource> *__fastcall Scaleform::GFx::MovieImpl::GetImageResourceByLinkageId(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::Ptr<Scaleform::GFx::ImageResource> *result,
        Scaleform::GFx::MovieDefImpl *md,
        const char *linkageId)
{
  Scaleform::RefCountVImpl *v4; // rbx
  const Scaleform::String *v9; // rax
  char IsProtocolImage; // al
  void *v11; // rdi
  char v12; // r15
  Scaleform::GFx::StateBagImpl *v13; // rax
  Scaleform::MemoryHeap *pHeap; // rsi
  Scaleform::GFx::StateBag *v15; // r15
  Scaleform::RefCountVImpl *v16; // rax
  Scaleform::RefCountVImpl *v17; // rdi
  Scaleform::GFx::StateBag_vtbl *v18; // rax
  Scaleform::RefCountVImpl *v19; // r14
  Scaleform::RefCountVImpl *v20; // rsi
  __int64 v21; // rax
  void *v22; // rsi
  Scaleform::Render::Image *v23; // rdi
  Scaleform::GFx::ImageResource *v24; // rax
  Scaleform::RefCountVImpl *v25; // rax
  char v26; // si
  Scaleform::GFx::MovieDefRootNode *pNext; // rdi
  Scaleform::ArrayDefaultPolicy *p_Policy; // r15
  Scaleform::GFx::MovieDefImpl *v29; // rsi
  Scaleform::GFx::MovieDefImpl *pDefImpl; // rcx
  void *v31; // rdi
  Scaleform::GFx::Resource *pObject; // rcx
  __int16 v33; // ax
  Scaleform::GFx::Resource *v34; // rcx
  Scaleform::GFx::ResourceBindData v36; // [rsp+20h] [rbp-50h] BYREF
  int v37; // [rsp+30h] [rbp-40h] BYREF
  Scaleform::MemoryHeap *v38; // [rsp+38h] [rbp-38h]
  int v39; // [rsp+40h] [rbp-30h]
  int v40; // [rsp+44h] [rbp-2Ch]
  __int128 v41; // [rsp+48h] [rbp-28h]
  __int128 v42; // [rsp+58h] [rbp-18h]
  Scaleform::String symbol; // [rsp+C0h] [rbp+50h] BYREF
  char *pdata; // [rsp+C8h] [rbp+58h]

  pdata = (char *)linkageId;
  v4 = 0i64;
  if ( !md )
    goto LABEL_43;
  Scaleform::String::String(&symbol, linkageId);
  IsProtocolImage = Scaleform::GFx::LoaderImpl::IsProtocolImage(v9, 0i64, 0i64);
  v11 = (void *)(symbol.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  v12 = IsProtocolImage;
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((symbol.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v11);
  if ( !v12 )
  {
    v36 = 0i64;
    Scaleform::String::String(&symbol, linkageId);
    if ( Scaleform::GFx::MovieDefImpl::GetExportedResource(md, &v36, &symbol, 0i64) )
    {
LABEL_21:
      v26 = 1;
    }
    else
    {
      pNext = this->RootMovieDefNodes.Root.pNext;
      p_Policy = &this->MovieLevels.Data.Policy;
      v29 = md;
      if ( this == (Scaleform::GFx::MovieImpl *)-112i64 )
        p_Policy = 0i64;
      while ( pNext != (Scaleform::GFx::MovieDefRootNode *)p_Policy )
      {
        pDefImpl = pNext->pDefImpl;
        if ( pDefImpl != md && (unsigned __int8)Scaleform::GFx::MovieDefImpl::DoesDirectlyImport(pDefImpl, v29) )
        {
          if ( Scaleform::GFx::MovieDefImpl::GetExportedResource(pNext->pDefImpl, &v36, &symbol, 0i64) )
            goto LABEL_21;
          v29 = pNext->pDefImpl;
        }
        pNext = pNext->pNext;
      }
      v26 = 0;
    }
    v31 = (void *)(symbol.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((symbol.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v31);
    pObject = v36.pResource.pObject;
    if ( !v26 )
    {
      result->pObject = 0i64;
      if ( pObject )
        goto LABEL_45;
      return result;
    }
    v33 = v36.pResource.pObject->GetResourceTypeCode(v36.pResource.pObject);
    v34 = v36.pResource.pObject;
    if ( (v33 & 0xFF00) == 256 )
    {
      v4 = (Scaleform::RefCountVImpl *)v36.pResource.pObject;
      if ( !v36.pResource.pObject )
      {
LABEL_41:
        if ( v4 )
          Scaleform::Render::RenderBuffer::AddRef(v4);
        goto LABEL_43;
      }
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v36.pResource.pObject);
      v34 = v36.pResource.pObject;
    }
    if ( v34 )
      Scaleform::GFx::Resource::Release(v34);
    goto LABEL_41;
  }
  v13 = this->pStateBag.pObject;
  pHeap = this->pHeap;
  v36.pResource.pObject = (Scaleform::GFx::Resource *)pHeap;
  v15 = &v13->Scaleform::GFx::StateBag;
  if ( !v13 )
    v15 = 0i64;
  v16 = (Scaleform::RefCountVImpl *)v15->GetStateAddRef(v15, State_OrigNodeBounds|State_MaskNode);
  v17 = v16;
  if ( v16 )
  {
    Scaleform::RefCountImpl::Release(v16);
    v18 = v15->__vftable;
    v37 = 0;
    v38 = pHeap;
    v39 = 1;
    v40 = 1;
    v41 = 0i64;
    v42 = 0i64;
    v19 = (Scaleform::RefCountVImpl *)v18->GetStateAddRef(v15, State_Type_Count|State_MaskNode);
    v20 = (Scaleform::RefCountVImpl *)v15->GetStateAddRef(v15, State_OrigScale9Parent|State_MaskNode);
    *(Scaleform::Ptr<Scaleform::Log> *)&v41 = (Scaleform::Ptr<Scaleform::Log>)Scaleform::GFx::StateBag::GetLog(
                                                                                v15,
                                                                                (Scaleform::Ptr<Scaleform::Log> *)&symbol)->pObject;
    *((_QWORD *)&v41 + 1) = v20;
    *(_QWORD *)&v42 = v19;
    if ( symbol.pData )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)symbol.pData);
    if ( v20 )
      Scaleform::RefCountImpl::Release(v20);
    if ( v19 )
      Scaleform::RefCountImpl::Release(v19);
    *((_QWORD *)&v42 + 1) = this;
    Scaleform::String::String(&symbol, pdata);
    v21 = ((__int64 (__fastcall *)(Scaleform::RefCountVImpl *, int *, Scaleform::String *))v17->AddRef)(
            v17,
            &v37,
            &symbol);
    v22 = (void *)(symbol.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    v23 = (Scaleform::Render::Image *)v21;
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((symbol.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v22);
    if ( v23 )
    {
      v24 = (Scaleform::GFx::ImageResource *)((__int64 (__fastcall *)(Scaleform::GFx::Resource *, __int64))v36.pResource.pObject->__vftable[2].GetResourceTypeCode)(
                                               v36.pResource.pObject,
                                               104i64);
      if ( v24 )
      {
        Scaleform::GFx::ImageResource::ImageResource(v24, v23, Use_Bitmap);
        v4 = v25;
      }
      v23->Release(v23);
      goto LABEL_41;
    }
  }
LABEL_43:
  result->pObject = (Scaleform::GFx::ImageResource *)v4;
  if ( v4 )
  {
    pObject = (Scaleform::GFx::Resource *)v4;
LABEL_45:
    Scaleform::GFx::Resource::Release(pObject);
  }
  return result;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

__int64 __fastcall Scaleform::Render::ImageDelegate::GetImageType(Scaleform::Render::ImageDelegate *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Image *))this->pImage.pObject->GetImageType)(this->pImage.pObject);
}

__int64 __fastcall Scaleform::GFx::ImageResource::GetImageUse(Scaleform::GFx::ImageResource *this)
{
  return (unsigned int)this->UseType;
}

Scaleform::Render::Matrix3x4<float> *__fastcall Scaleform::Render::Matrix3x4<float>::GetInverse(
        Scaleform::Render::Matrix3x4<float> *this,
        Scaleform::Render::Matrix3x4<float> *result)
{
  float v2; // xmm1_4
  float v3; // xmm11_4
  float v4; // xmm5_4
  float v5; // xmm10_4
  float v6; // xmm4_4
  float v7; // xmm10_4
  float v8; // xmm14_4
  float v9; // xmm5_4
  float v10; // xmm15_4
  float v11; // xmm8_4
  float v12; // xmm12_4
  float v13; // xmm6_4
  float v14; // xmm3_4
  float v15; // xmm10_4
  float v16; // xmm8_4
  float v17; // xmm5_4
  float v18; // xmm2_4
  float v19; // xmm7_4
  float v20; // xmm4_4
  float v21; // xmm9_4
  float v22; // xmm4_4
  float v23; // xmm2_4
  float v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm9_4
  float v27; // xmm5_4
  float v28; // xmm6_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  float v31; // xmm9_4
  float v32; // xmm7_4
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm14_4
  float v36; // xmm0_4
  float v37; // xmm7_4
  float v38; // xmm3_4
  float v39; // xmm0_4
  float v40; // xmm2_4
  float v41; // xmm0_4
  float v42; // xmm11_4
  float v43; // xmm1_4
  float v44; // xmm14_4
  float v45; // xmm1_4
  float v46; // xmm0_4
  float v47; // xmm3_4
  float v48; // xmm2_4
  float v49; // xmm1_4
  float v50; // xmm0_4
  float v51; // xmm7_4
  float v52; // xmm3_4
  float v53; // xmm14_4
  float v55; // [rsp+0h] [rbp-E8h]
  float v56; // [rsp+4h] [rbp-E4h]
  float v57; // [rsp+8h] [rbp-E0h]
  Scaleform::Render::Matrix3x4<float> v58; // [rsp+10h] [rbp-D8h]
  float v59; // [rsp+F0h] [rbp+8h]
  float v60; // [rsp+100h] [rbp+18h]
  float v61; // [rsp+100h] [rbp+18h]
  float v62; // [rsp+108h] [rbp+20h]

  v2 = this->M[2][2] * 0.0;
  v3 = this->M[1][3];
  v4 = this->M[2][1] * 0.0;
  v5 = this->M[2][0] * 0.0;
  v6 = v5 - v2;
  v7 = v5 - v4;
  v8 = this->M[2][3];
  v9 = v4 - v2;
  v10 = this->M[0][3];
  v55 = v7;
  v11 = this->M[2][2] - (float)(v8 * 0.0);
  v62 = this->M[2][0] - (float)(v8 * 0.0);
  v60 = this->M[2][1] - (float)(v8 * 0.0);
  v56 = (float)((float)(v11 * this->M[1][1]) - (float)(v60 * this->M[1][2])) + (float)(v9 * v3);
  LODWORD(v12) = COERCE_UNSIGNED_INT((float)((float)(v11 * this->M[1][0]) - (float)(v62 * this->M[1][2])) + (float)(v6 * v3)) ^ _xmm;
  v13 = this->M[0][0];
  v57 = (float)((float)(v60 * this->M[1][0]) - (float)(v62 * this->M[1][1])) + (float)(v7 * v3);
  v14 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(
                               (float)((float)(v9 * this->M[1][0]) - (float)(v6 * this->M[1][1]))
                             + (float)(v7 * this->M[1][2])) ^ _xmm)
              * v10)
      + (float)((float)((float)(v12 * this->M[0][1]) + (float)(v56 * this->M[0][0])) + (float)(v57 * this->M[0][2]));
  if ( v14 == 0.0 )
  {
    v58.M[0][2] = 0.0;
    *(_QWORD *)&v58.M[1][0] = 0x3F80000000000000i64;
    v58.M[1][2] = 0.0;
    LODWORD(v58.M[0][3]) = LODWORD(v10) ^ _xmm;
    *(_QWORD *)&v58.M[0][0] = 1065353216i64;
    LODWORD(v58.M[1][3]) = LODWORD(v3) ^ _xmm;
    LODWORD(v58.M[2][3]) = LODWORD(v8) ^ _xmm;
    *(_QWORD *)&v58.M[2][0] = 0i64;
    v58.M[2][2] = 1.0;
    *result = v58;
  }
  else
  {
    v15 = 1.0 / v14;
    v16 = (float)((float)(v11 * this->M[0][1]) - (float)(v60 * this->M[0][2])) + (float)(v9 * v10);
    v17 = this->M[1][0] - (float)(v3 * 0.0);
    v59 = (float)((float)((float)((float)(this->M[2][2] - (float)(v8 * 0.0)) * v13) - (float)(v62 * this->M[0][2]))
                + (float)(v6 * v10))
        * (float)(1.0 / v14);
    v18 = this->M[1][2];
    LODWORD(v61) = COERCE_UNSIGNED_INT(
                     (float)((float)((float)(v60 * v13) - (float)(v62 * this->M[0][1])) + (float)(v55 * v10))
                   * (float)(1.0 / v14)) ^ _xmm;
    v19 = v18 - (float)(v3 * 0.0);
    v20 = this->M[1][1];
    v21 = v20 - (float)(v3 * 0.0);
    v22 = v20 * 0.0;
    v23 = v18 * 0.0;
    v24 = (float)(v19 * this->M[0][1]) - (float)(v21 * this->M[0][2]);
    v25 = v17 * this->M[0][2];
    v26 = (float)(v21 * this->M[0][0]) - (float)(v17 * this->M[0][1]);
    v27 = this->M[1][0];
    v28 = v24 + (float)((float)(v22 - v23) * v10);
    v29 = (float)(v27 * 0.0) - v22;
    v30 = (float)(v8 * v27) - (float)(this->M[2][0] * v3);
    v31 = (float)(v26 + (float)(v29 * v10)) * v15;
    LODWORD(v32) = COERCE_UNSIGNED_INT(
                     (float)((float)((float)(v19 * this->M[0][0]) - v25)
                           + (float)((float)((float)(v27 * 0.0) - v23) * v10))
                   * v15) ^ _xmm;
    v33 = this->M[2][2];
    v34 = v8 * this->M[1][1];
    v35 = v8 * this->M[1][2];
    v36 = this->M[2][1] * v3;
    result->M[1][2] = v32;
    v37 = this->M[2][0];
    v38 = v34 - v36;
    LODWORD(result->M[0][1]) = COERCE_UNSIGNED_INT(v16 * v15) ^ _xmm;
    v39 = v33;
    v40 = v33 * this->M[1][1];
    v41 = v39 * v3;
    v42 = this->M[2][1];
    result->M[0][2] = v28 * v15;
    result->M[1][1] = v59;
    result->M[2][2] = v31;
    v43 = v35 - v41;
    v44 = (float)(v35 - v41) * this->M[0][0];
    v45 = v43 * this->M[0][1];
    result->M[0][0] = v15 * v56;
    v46 = v38 * this->M[0][2];
    v47 = v38 * this->M[0][0];
    v48 = (float)((float)(v40 - (float)(v42 * this->M[1][2])) * v10) + (float)(v45 - v46);
    v49 = this->M[2][2];
    result->M[1][0] = v15 * v12;
    v50 = v37 * this->M[1][2];
    v51 = v37 * this->M[1][1];
    v52 = v47 - (float)(v30 * this->M[0][1]);
    v53 = v44 - (float)(v30 * this->M[0][2]);
    LODWORD(result->M[0][3]) = COERCE_UNSIGNED_INT(v48 * v15) ^ _xmm;
    result->M[2][1] = v61;
    result->M[2][0] = v15 * v57;
    LODWORD(result->M[2][3]) = COERCE_UNSIGNED_INT((float)((float)((float)((float)(v42 * v27) - v51) * v10) + v52) * v15) ^ _xmm;
    result->M[1][3] = (float)((float)((float)((float)(v49 * v27) - v50) * v10) + v53) * v15;
  }
  return result;
}

Scaleform::GFx::ResourceKey *__fastcall Scaleform::GFx::ImageResource::GetKey(
        Scaleform::GFx::ImageResource *this,
        Scaleform::GFx::ResourceKey *result)
{
  Scaleform::GFx::ResourceKey::ResourceKey(result, &this->Key);
  return result;
}

Scaleform::GFx::ResourceKey *__fastcall Scaleform::GFx::Resource::GetKey(
        Scaleform::GFx::Resource *this,
        Scaleform::GFx::ResourceKey *result)
{
  AgPointer<AgController>::AgPointer<AgController>((AgPointer<AgMemoryStream> *)result);
  return result;
}

char __fastcall Scaleform::GFx::MovieImpl::GetMainMoviePath(Scaleform::GFx::MovieImpl *this, Scaleform::String *ppath)
{
  const char *v4; // rax

  if ( this->pMainMovie )
  {
    v4 = this->pMainMovieDef.pObject->GetFileURL(this->pMainMovieDef.pObject);
    Scaleform::String::operator=(ppath, v4);
    if ( Scaleform::GFx::URLBuilder::ExtractFilePath(ppath) )
      return 1;
  }
  Scaleform::String::Clear(ppath);
  return 0;
}

void __fastcall Scaleform::Render::ImageDelegate::GetMatrix(
        Scaleform::GFx::SwfShapeCharacterDef *this,
        const Scaleform::Render::Rect<float> *r)
{
  this->pShape.pObject->SetRectBoundsLocal(this->pShape.pObject, r);
}

__int64 __fastcall Scaleform::Render::ImageDelegate::GetMatrixInverse(
        Scaleform::Render::ImageDelegate *this,
        Scaleform::Render::Matrix2x4<float> *mat)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Image *, Scaleform::Render::Matrix2x4<float> *))this->pImage.pObject->GetMatrixInverse)(
           this->pImage.pObject,
           mat);
}

Scaleform::GFx::State *__fastcall Scaleform::GFx::MovieImpl::GetMaxTouchPoints(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::State *result; // rax
  Scaleform::RefCountVImpl *v2; // rbx
  unsigned int v3; // edi

  result = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 7i64);
  v2 = (Scaleform::RefCountVImpl *)result;
  if ( result )
  {
    v3 = ((__int64 (__fastcall *)(Scaleform::GFx::State *))result->__vftable[1].~RefCountImplCore)(result);
    Scaleform::RefCountImpl::Release(v2);
    return (Scaleform::GFx::State *)v3;
  }
  return result;
}

__int64 __fastcall Scaleform::Render::SubImage::GetMipmapCount(Scaleform::Render::SubImage *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Image *))this->pImage.pObject->GetMipmapCount)(this->pImage.pObject);
}

Scaleform::GFx::InteractiveObject *__fastcall Scaleform::GFx::MovieImpl::GetModalClip(
        Scaleform::GFx::MovieImpl *this,
        unsigned int controllerIdx)
{
  Scaleform::GFx::CharacterHandle *pObject; // r8
  Scaleform::GFx::InteractiveObject *v3; // rax
  Scaleform::GFx::InteractiveObject *v4; // rbx

  pObject = this->FocusGroups[this->FocusGroupIndexes[controllerIdx]].ModalClip.pObject;
  if ( !pObject )
    return 0i64;
  v3 = Scaleform::GFx::CharacterHandle::ResolveCharacter(pObject, this);
  v4 = v3;
  if ( !v3 )
    return 0i64;
  ++v3->RefCount;
  Scaleform::RefCountNTSImpl::Release(v3);
  return v4;
}

__int64 __fastcall Scaleform::GFx::MovieImpl::GetMouseCursorCount(Scaleform::GFx::MovieImpl *this)
{
  return this->MouseCursorCount;
}

void __fastcall Scaleform::GFx::MovieImpl::GetMouseState(
        Scaleform::GFx::MovieImpl *this,
        unsigned int mouseIndex,
        float *x,
        float *y,
        unsigned int *buttons)
{
  float v5; // xmm1_4

  if ( mouseIndex < this->MouseCursorCount )
  {
    v5 = (float)((float)(this->mMouseState[mouseIndex].LastPosition.y * 0.050000001) - this->ViewOffsetY)
       / this->ViewScaleY;
    if ( x )
      *x = (float)((float)(this->mMouseState[mouseIndex].LastPosition.x * 0.050000001) - this->ViewOffsetX)
         / this->ViewScaleX;
    if ( y )
      *y = v5;
    if ( buttons )
      *buttons = this->mMouseState[mouseIndex].CurButtonsState;
  }
}

Scaleform::GFx::AS3::MemoryContextImpl *__fastcall Scaleform::Render::ExternalFontWinAPI::GetName(
        Scaleform::GFx::AS3::MovieRoot *this)
{
  return this->MemContext.pObject;
}

__int64 __fastcall Scaleform::GFx::MovieImpl::GetMultitouchInputMode(Scaleform::GFx::MovieImpl *this)
{
  return (unsigned int)this->MultitouchMode;
}

__int64 __fastcall Scaleform::GFx::MovieImpl::GetPlayState(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::InteractiveObject *pMainMovie; // rcx

  pMainMovie = this->pMainMovie;
  if ( pMainMovie )
    return ((__int64 (__fastcall *)(Scaleform::GFx::InteractiveObject *))pMainMovie->GetPlayState)(pMainMovie);
  else
    return 1i64;
}

void __fastcall Scaleform::GFx::MovieImpl::GetProjectionMatrix3D(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::Render::Matrix4x4<float> *projMat)
{
  Scaleform::GFx::DisplayObjContainer *v3; // rax

  v3 = this->pASMovieRoot.pObject->GetRootMovie(this->pASMovieRoot.pObject, 0i64);
  if ( v3 )
    v3->GetProjectionMatrix3D(v3, projMat, 0);
}

Scaleform::Render::Rect<unsigned long> *__fastcall Scaleform::Render::ImageBase::GetRect(
        Scaleform::Render::ImageBase *this,
        Scaleform::Render::Rect<unsigned long> *result)
{
  Scaleform::Render::Size<unsigned long> *v3; // rax
  unsigned int Width; // ecx
  Scaleform::Render::Rect<unsigned long> *v5; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = this->GetSize(this, &v6);
  *(_QWORD *)&result->x1 = 0i64;
  Width = v3->Width;
  result->y2 = v3->Height;
  v5 = result;
  result->x2 = Width;
  return v5;
}

Scaleform::Render::Rect<unsigned long> *__fastcall Scaleform::Render::ImageDelegate::GetRect(
        Scaleform::Render::ImageDelegate *this,
        Scaleform::Render::Rect<unsigned long> *result)
{
  ((void (__fastcall *)(Scaleform::Render::Image *))this->pImage.pObject->GetRect)(this->pImage.pObject);
  return result;
}

__int32 __fastcall Scaleform::GFx::ImageResource::GetResourceTypeCode(Scaleform::GFx::ImageResource *this)
{
  return this->UseType | 0x100;
}

void __fastcall Scaleform::GFx::MovieImpl::GetRetValHolder(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::MovieImpl::ReturnValueHolder *v2; // rax
  Scaleform::GFx::MovieImpl::ReturnValueHolder *v3; // rdi
  Scaleform::GFx::ASStringManager *v4; // rax

  if ( !this->pRetValHolder )
  {
    v2 = (Scaleform::GFx::MovieImpl::ReturnValueHolder *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pHeap->Alloc)(
                                                           this->pHeap,
                                                           56i64);
    v3 = v2;
    if ( v2 )
    {
      v4 = this->pASMovieRoot.pObject->GetStringManager(this->pASMovieRoot.pObject);
      Scaleform::GFx::MovieImpl::ReturnValueHolder::ReturnValueHolder(v3, v4);
    }
    this->pRetValHolder = v2;
  }
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::MovieImpl::GetSafeRect(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::Render::Rect<float> *result)
{
  *result = this->SafeRect;
  return result;
}

Scaleform::GFx::ASString *__fastcall Scaleform::Render::SubImage::GetSize(
        Scaleform::GFx::AS3::Object *this,
        Scaleform::GFx::ASString *result,
        __int64 f)
{
  this->pTraits.pObject->GetQualifiedName(this->pTraits.pObject, result, (Scaleform::GFx::AS3::QNameFormat)f);
  return result;
}

__int64 __fastcall Scaleform::Render::TreeContainer::GetSize(Scaleform::Render::TreeContainer *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                 + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                 + 40);
  result = *(_QWORD *)(v1 + 144);
  if ( result )
  {
    if ( (result & 1) != 0 )
      return *(_QWORD *)((result & 0xFFFFFFFFFFFFFFFEui64) + 8);
    else
      return (*(_QWORD *)(v1 + 152) != 0i64) + 1i64;
  }
  return result;
}

__int64 __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyleCount(
        Concurrency::details::VirtualProcessorRoot *this)
{
  return this->m_executionResource.m_nodeId;
}

Scaleform::RefCountVImpl *__fastcall Scaleform::GFx::StateBagImpl::GetStateAddRef(
        Scaleform::GFx::StateBagImpl *this,
        Scaleform::GFx::State::StateType state)
{
  __int64 v3; // rsi
  Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>_vtbl *v4; // r9
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf
  void (__fastcall **v9)(Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl> *); // rcx
  Scaleform::RefCountVImpl **v10; // rdi
  Scaleform::RefCountVImpl *v11; // rdi
  Scaleform::GFx::StateBag_vtbl *v13; // rcx

  v3 = state;
  Scaleform::Lock::DoLock((Scaleform::Lock *)&this->pDelegate);
  v4 = this->Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>::__vftable;
  if ( !v4 )
    goto LABEL_11;
  v5 = v3 & (__int64)v4->IsVerboseActionErrors;
  v6 = v5;
  v7 = v5 + 2 * (v5 + 1);
  v8 = *((_QWORD *)&v4->~LogBase<Scaleform::GFx::StateBagImpl> + v7) == -2i64;
  v9 = &v4->~LogBase<Scaleform::GFx::StateBagImpl> + v7;
  if ( v8 || v9[1] != (void (__fastcall *)(Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl> *))v5 )
    goto LABEL_11;
  while ( v9[1] != (void (__fastcall *)(Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl> *))v5
       || *((_DWORD *)v9[2] + 4) != (_DWORD)v3 )
  {
    v6 = (__int64)*v9;
    if ( *v9 == (void (__fastcall *)(Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl> *))-1i64 )
      goto LABEL_11;
    v9 = &v4[v6 + 1].~LogBase<Scaleform::GFx::StateBagImpl> + v6;
  }
  if ( v6 >= 0 && (v10 = (Scaleform::RefCountVImpl **)(&v4[v6 + 2].~LogBase<Scaleform::GFx::StateBagImpl> + v6)) != 0i64 )
  {
    Scaleform::Render::RenderBuffer::AddRef(*v10);
    v11 = *v10;
    Scaleform::Lock::Unlock((Scaleform::Lock *)&this->pDelegate);
    return v11;
  }
  else
  {
LABEL_11:
    Scaleform::Lock::Unlock((Scaleform::Lock *)&this->pDelegate);
    v13 = this->Scaleform::GFx::StateBag::__vftable;
    if ( v13 )
      return (Scaleform::RefCountVImpl *)(*((__int64 (__fastcall **)(void (__fastcall **)(Scaleform::GFx::StateBag *, Scaleform::GFx::State::StateType, Scaleform::GFx::State *), _QWORD))v13->SetState
                                          + 3))(
                                           &v13->SetState,
                                           (unsigned int)v3);
    else
      return 0i64;
  }
}

$7ACAD65D674145EE2940377319CBF3FC *__fastcall Scaleform::GFx::MovieImpl::GetStateBagImpl(
        Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::MovieDefRootNode *pPrev; // rdx
  $7ACAD65D674145EE2940377319CBF3FC *result; // rax

  pPrev = this->RootMovieDefNodes.Root.pPrev;
  result = &pPrev->8;
  if ( !pPrev )
    return 0i64;
  return result;
}

void __fastcall Scaleform::GFx::StateBagImpl::GetStatesAddRef(
        Scaleform::GFx::StateBagImpl *this,
        Scaleform::GFx::State **pstateList,
        const Scaleform::GFx::State::StateType *pstates,
        unsigned int count)
{
  char v5; // r12
  const Scaleform::GFx::State::StateType *v7; // rdi
  Scaleform::GFx::State **v8; // rsi
  __int64 v9; // rbp
  const Scaleform::GFx::State::StateType *v10; // r14
  Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>_vtbl *v11; // r9
  __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  bool v16; // zf
  void (__fastcall **v17)(Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl> *); // rax
  Scaleform::RefCountVImpl **v18; // rdi
  Scaleform::GFx::StateBag_vtbl *v19; // rcx

  v5 = 0;
  v7 = pstates;
  v8 = pstateList;
  Scaleform::Lock::DoLock((Scaleform::Lock *)&this->pDelegate);
  if ( count )
  {
    v9 = count;
    v10 = v7;
    do
    {
      if ( !*v8 )
      {
        v11 = this->Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>::__vftable;
        if ( !v11 )
          goto LABEL_14;
        v12 = *(int *)v10;
        v13 = v12 & (__int64)v11->IsVerboseActionErrors;
        v14 = v13;
        v15 = v13 + 2 * (v13 + 1);
        v16 = *((_QWORD *)&v11->~LogBase<Scaleform::GFx::StateBagImpl> + v15) == -2i64;
        v17 = &v11->~LogBase<Scaleform::GFx::StateBagImpl> + v15;
        if ( v16 || v17[1] != (void (__fastcall *)(Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl> *))v13 )
          goto LABEL_14;
        while ( v17[1] != (void (__fastcall *)(Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl> *))v13
             || *((_DWORD *)v17[2] + 4) != (_DWORD)v12 )
        {
          v14 = (__int64)*v17;
          if ( *v17 == (void (__fastcall *)(Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl> *))-1i64 )
            goto LABEL_14;
          v17 = &v11[v14 + 1].~LogBase<Scaleform::GFx::StateBagImpl> + v14;
        }
        if ( v14 >= 0
          && (v18 = (Scaleform::RefCountVImpl **)(&v11[v14 + 2].~LogBase<Scaleform::GFx::StateBagImpl> + v14)) != 0i64 )
        {
          Scaleform::Render::RenderBuffer::AddRef(*v18);
          *v8 = (Scaleform::GFx::State *)*v18;
        }
        else
        {
LABEL_14:
          v5 = 1;
        }
      }
      ++v10;
      ++v8;
      --v9;
    }
    while ( v9 );
    v7 = pstates;
    v8 = pstateList;
  }
  Scaleform::Lock::Unlock((Scaleform::Lock *)&this->pDelegate);
  if ( v5 )
  {
    v19 = this->Scaleform::GFx::StateBag::__vftable;
    if ( v19 )
      (*((void (__fastcall **)(void (__fastcall **)(Scaleform::GFx::StateBag *, Scaleform::GFx::State::StateType, Scaleform::GFx::State *), Scaleform::GFx::State **, const Scaleform::GFx::State::StateType *, _QWORD))v19->SetState
       + 4))(
        &v19->SetState,
        v8,
        v7,
        count);
  }
}

void __fastcall Scaleform::GFx::MovieImpl::GetStats(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::StatBag *pbag,
        _BOOL8 reset)
{
  Scaleform::AmpStats *pObject; // rcx

  pObject = this->AdvanceStats.pObject;
  if ( pObject )
    pObject->GetStats(pObject, pbag, reset);
}

void __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int idx,
        Scaleform::Render::StrokeStyleType *p)
{
  Scaleform::Render::StrokeStyleType::operator=(p, &this->Strokes.Data.Data[idx - 1]);
}

__int64 __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyleCount(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this)
{
  return LODWORD(this->Strokes.Data.Size);
}

Scaleform::GFx::State *__fastcall Scaleform::GFx::MovieImpl::GetSupportedGesturesMask(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::State *result; // rax
  Scaleform::RefCountVImpl *v2; // rbx
  unsigned int v3; // edi

  result = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 7i64);
  v2 = (Scaleform::RefCountVImpl *)result;
  if ( result )
  {
    v3 = ((__int64 (__fastcall *)(Scaleform::GFx::State *))result->__vftable[2].~RefCountImplCore)(result);
    Scaleform::RefCountImpl::Release(v2);
    return (Scaleform::GFx::State *)v3;
  }
  return result;
}

Scaleform::Render::Text::Allocator *__fastcall Scaleform::GFx::MovieImpl::GetTextAllocator(
        Scaleform::GFx::MovieImpl *this)
{
  return this->pASMovieRoot.pObject->GetTextAllocator(this->pASMovieRoot.pObject);
}

Scaleform::Render::Texture *__fastcall Scaleform::Render::Image::GetTexture(
        Scaleform::Render::Image *this,
        Scaleform::Render::TextureManager *pmanager)
{
  if ( this->pTexture.Value && this->pTexture.Value->State == State_Disposed )
    return 0i64;
  else
    return this->pTexture.Value;
}

Scaleform::Render::Texture *__fastcall Scaleform::Render::ImageDelegate::GetTexture(
        Scaleform::Render::SubImage *this,
        Scaleform::Render::TextureManager *pm)
{
  return this->pImage.pObject->GetTexture(this->pImage.pObject, pm);
}

Scaleform::GFx::InteractiveObject *__fastcall Scaleform::GFx::MovieImpl::GetTopMostEntity(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::Render::Point<float> *mousePos,
        unsigned int controllerIdx,
        bool testAll,
        const Scaleform::GFx::InteractiveObject *ignoreMC)
{
  float x; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  Scaleform::GFx::MovieImpl_vtbl *v18; // rax
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  int v22; // eax
  __int64 v23; // rdi
  Scaleform::GFx::InteractiveObject *pObject; // rbx
  Scaleform::GFx::DisplayObjectBase *pParent; // rcx
  __int64 Size_low; // rdi
  __int64 i; // rbx
  __int64 v28; // rcx
  __int64 v30; // [rsp+20h] [rbp-E0h]
  __int64 v31[2]; // [rsp+28h] [rbp-D8h] BYREF
  const Scaleform::GFx::InteractiveObject *v32; // [rsp+38h] [rbp-C8h]
  __int64 v33; // [rsp+40h] [rbp-C0h]
  unsigned int v34; // [rsp+48h] [rbp-B8h]
  bool v35; // [rsp+4Ch] [rbp-B4h]
  Scaleform::Render::Point<float> result; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v37; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v38; // [rsp+70h] [rbp-90h]
  __int128 v39; // [rsp+80h] [rbp-80h]
  __int128 v40; // [rsp+90h] [rbp-70h] BYREF
  __int128 v41; // [rsp+A0h] [rbp-60h]
  __int128 v42; // [rsp+B0h] [rbp-50h]
  __int128 v43; // [rsp+C0h] [rbp-40h]
  Scaleform::Render::Matrix2x4<float> pmat; // [rsp+D0h] [rbp-30h] BYREF

  x = mousePos->x;
  v10 = mousePos->y - (float)(this->ViewOffsetY * 20.0);
  v11 = this->VisibleFrameRect.y2 - this->VisibleFrameRect.y1;
  v12 = this->VisibleFrameRect.x2 - this->VisibleFrameRect.x1;
  v41 = 0x3F80000000000000ui64;
  v13 = v10 / v11;
  *((_QWORD *)&v43 + 1) = 0x3F80000000000000i64;
  *(_QWORD *)&v42 = 0i64;
  *(_QWORD *)&v43 = 0i64;
  v40 = 0x3F800000ui64;
  *((_QWORD *)&v42 + 1) = 1065353216i64;
  v14 = this->ViewOffsetX * 20.0;
  LODWORD(this->ScreenToWorld.Sy) = COERCE_UNSIGNED_INT((float)(v13 + v13) - 1.0) ^ _xmm;
  this->ScreenToWorld.Sx = (float)((float)((float)(x - v14) / v12) + (float)((float)(x - v14) / v12)) - 1.0;
  this->GetProjectionMatrix3D(this, (Scaleform::Render::Matrix4x4<float> *)&v40);
  v15 = v41;
  *(_OWORD *)&this->ScreenToWorld.MatProj.M[0][0] = v40;
  *(_QWORD *)&v37 = 0i64;
  v16 = v42;
  *(_OWORD *)&this->ScreenToWorld.MatProj.M[1][0] = v15;
  *(_QWORD *)&v38 = 0i64;
  v17 = v43;
  *(_OWORD *)&this->ScreenToWorld.MatProj.M[2][0] = v16;
  *((_QWORD *)&v39 + 1) = 0i64;
  *(_OWORD *)&this->ScreenToWorld.MatProj.M[3][0] = v17;
  *((_QWORD *)&v37 + 1) = 0i64;
  *((_QWORD *)&v38 + 1) = 0i64;
  *(_QWORD *)&v39 = 0i64;
  v18 = this->Scaleform::GFx::Movie::Scaleform::RefCountBase<Scaleform::GFx::Movie,327>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  LODWORD(v37) = 1065353216;
  DWORD1(v38) = 1065353216;
  DWORD2(v39) = 1065353216;
  v18->GetViewMatrix3D(this, (Scaleform::Render::Matrix3x4<float> *)&v37);
  v19 = 0i64;
  v20 = v38;
  *(_OWORD *)&this->ScreenToWorld.MatView.M[0][0] = v37;
  v30 = 0i64;
  v21 = v39;
  *(_OWORD *)&this->ScreenToWorld.MatView.M[1][0] = v20;
  *(_OWORD *)&this->ScreenToWorld.MatView.M[2][0] = v21;
  v22 = LODWORD(this->TopmostLevelCharacters.Data.Size) - 1;
  v23 = v22;
  if ( v22 >= 0 )
  {
    while ( 1 )
    {
      pObject = this->TopmostLevelCharacters.Data.Data[v23].pObject;
      pParent = pObject->pParent;
      if ( pParent )
      {
        *(_OWORD *)&pmat.M[0][0] = _xmm;
        *(_OWORD *)&pmat.M[1][0] = _xmm;
        Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(pParent, &pmat);
        Scaleform::Render::Matrix2x4<float>::TransformByInverse(&pmat, &result, mousePos);
        v33 = 0i64;
        v32 = ignoreMC;
        v35 = testAll;
        v34 = controllerIdx;
        if ( pObject->GetTopMostMouseEntity(pObject, &result, (Scaleform::GFx::DisplayObjectBase::TopMostDescr *)v31) == TopMost_Found )
          break;
      }
      if ( --v23 < 0 )
      {
        v19 = 0i64;
        goto LABEL_6;
      }
    }
    v19 = v31[0];
    v30 = v31[0];
    if ( v31[0] )
      return (Scaleform::GFx::InteractiveObject *)v19;
  }
LABEL_6:
  Size_low = SLODWORD(this->MovieLevels.Data.Size);
  if ( Size_low <= 0 )
    return (Scaleform::GFx::InteractiveObject *)v19;
  for ( i = 16 * Size_low - 16; ; i -= 16i64 )
  {
    v28 = *(__int64 *)((char *)&this->MovieLevels.Data.Data->pSprite.pObject + i);
    v33 = 0i64;
    v32 = ignoreMC;
    v35 = testAll;
    v34 = controllerIdx;
    if ( (*(unsigned int (__fastcall **)(__int64, const Scaleform::Render::Point<float> *, __int64 *))(*(_QWORD *)v28 + 512i64))(
           v28,
           mousePos,
           v31) == 1 )
      break;
    if ( --Size_low <= 0 )
      return (Scaleform::GFx::InteractiveObject *)v30;
  }
  return (Scaleform::GFx::InteractiveObject *)v31[0];
}

void __fastcall Scaleform::Render::ImageDelegate::GetUVGenMatrix(
        Scaleform::Render::ImageDelegate *this,
        Scaleform::Render::Matrix2x4<float> *mat,
        Scaleform::Render::TextureManager *manager)
{
  this->pImage.pObject->GetUVGenMatrix(this->pImage.pObject, mat, manager);
}

void __fastcall Scaleform::Render::ImageDelegate::GetUVNormMatrix(
        Scaleform::Render::ImageDelegate *this,
        Scaleform::Render::Matrix2x4<float> *mat,
        Scaleform::Render::TextureManager *manager)
{
  this->pImage.pObject->GetUVNormMatrix(this->pImage.pObject, mat, manager);
}

__int64 __fastcall Scaleform::Render::SubImage::GetUse(Scaleform::Render::SubImage *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Image *))this->pImage.pObject->GetUse)(this->pImage.pObject);
}

void *__fastcall Scaleform::GFx::MovieImpl::GetUserData(Scaleform::GFx::MovieImpl *this)
{
  return this->UserData;
}

__int64 __fastcall Scaleform::GFx::Movie::GetVariable(
        Scaleform::GFx::Movie *this,
        Scaleform::GFx::Value *pval,
        const char *ppathToVar)
{
  return ((__int64 (__fastcall *)(Scaleform::GFx::ASMovieRootBase *, Scaleform::GFx::Value *, const char *))this->pASMovieRoot.pObject->GetVariable)(
           this->pASMovieRoot.pObject,
           pval,
           ppathToVar);
}

__int64 __fastcall Scaleform::GFx::MovieImpl::GetViewAlignment(Scaleform::GFx::MovieImpl *this)
{
  return (unsigned int)this->ViewAlignment;
}

void __fastcall Scaleform::GFx::MovieImpl::GetViewMatrix3D(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::Render::Matrix3x4<float> *viewMat)
{
  Scaleform::GFx::DisplayObjContainer *v3; // rax

  v3 = this->pASMovieRoot.pObject->GetRootMovie(this->pASMovieRoot.pObject, 0i64);
  if ( v3 )
    v3->GetViewMatrix3D(v3, viewMat, 0);
}

__int64 __fastcall Scaleform::GFx::MovieImpl::GetViewScaleMode(Scaleform::GFx::MovieImpl *this)
{
  return (unsigned int)this->ViewScaleMode;
}

void __fastcall Scaleform::GFx::MovieImpl::GetViewport(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::Viewport *pviewDesc)
{
  *pviewDesc = this->mViewport;
}

bool __fastcall Scaleform::GFx::MovieImpl::GetVisible(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::InteractiveObject *pMainMovie; // rcx

  pMainMovie = this->pMainMovie;
  return pMainMovie && pMainMovie->GetVisible(pMainMovie);
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::MovieImpl::GetVisibleFrameRect(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::Render::Rect<float> *result)
{
  Scaleform::Render::Rect<float> *v2; // rax

  v2 = result;
  *(__m128 *)result = _mm_mul_ps((__m128)this->VisibleFrameRect, (__m128)_xmm);
  return v2;
}

void __fastcall Scaleform::GFx::MovieImpl::GotoFrame(Scaleform::GFx::MovieImpl *this, __int64 targetFrameNumber)
{
  Scaleform::GFx::InteractiveObject *pMainMovie; // rcx

  pMainMovie = this->pMainMovie;
  if ( pMainMovie )
    pMainMovie->GotoFrame(pMainMovie, targetFrameNumber);
}

char __fastcall Scaleform::GFx::MovieImpl::GotoLabeledFrame(
        Scaleform::GFx::MovieImpl *this,
        const char *label,
        int offset)
{
  Scaleform::GFx::MovieDefImpl *pObject; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  Scaleform::Ptr<Scaleform::GFx::LogState> result; // [rsp+48h] [rbp+20h] BYREF

  if ( this->pMainMovie )
  {
    pObject = this->pMainMovieDef.pObject;
    v8 = -1;
    if ( pObject->pBindData.pObject->pDataDef.pObject->GetLabeledFrame(
           pObject->pBindData.pObject->pDataDef.pObject,
           label,
           (unsigned int *)&v8,
           0) )
    {
      this->GotoFrame(this, v8 + offset);
      return 1;
    }
    Scaleform::GFx::StateBag::GetLogState(&this->Scaleform::GFx::StateBag, &result);
    if ( result.pObject )
    {
      Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogScriptError(
        &result.pObject->Scaleform::GFx::LogBase<Scaleform::GFx::LogState>,
        "MovieImpl::GotoLabeledFrame('%s') unknown label",
        label);
      if ( result.pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)result.pObject);
    }
  }
  return 0;
}

__int64 __fastcall Scaleform::GFx::MovieImpl::HandleEvent(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::GFx::Event *event)
{
  __int64 v4; // rax
  unsigned int v5; // er14
  __int64 v6; // rbp
  Scaleform::GFx::KeyboardState *KeyboardStates; // r15
  char v8; // r8
  Scaleform::GFx::State *v9; // rax
  _BOOL8 v10; // rdx
  Scaleform::RefCountVImpl *v11; // rbx
  __int64 States; // rax
  Scaleform::GFx::KeyboardState *v13; // rbx
  unsigned __int8 v14; // r8
  Scaleform::GFx::Event::EventType Type; // ebx
  float v16; // xmm1_4
  Scaleform::GFx::Event::EventType v17; // ebx
  float v18; // xmm1_4
  Scaleform::GFx::Event::EventType v19; // ebx
  float v20; // xmm1_4
  Scaleform::GFx::Event::EventType v21; // ebx
  float v22; // xmm1_4
  __int64 v23; // rax
  Scaleform::GFx::KeyboardState *v24; // rbx
  Scaleform::GFx::KeyboardState *v25; // rcx
  int v26; // edx
  unsigned int v27; // er9
  __int64 v28; // rax
  Scaleform::GFx::KeyboardState *v29; // rbx
  Scaleform::GFx::KeyboardState *v30; // rcx
  int v31; // edx
  Scaleform::GFx::State *v32; // rax
  Scaleform::RefCountVImpl *v33; // rbx
  unsigned int v34; // edi
  Scaleform::Render::Point<float> p; // [rsp+80h] [rbp+8h] BYREF
  Scaleform::Render::Point<float> result; // [rsp+90h] [rbp+18h] BYREF

  if ( !this->IsMovieFocused(this) )
  {
    if ( event->Type != SetFocus )
      return 0i64;
    goto LABEL_5;
  }
  if ( event->Type == SetFocus )
  {
LABEL_5:
    v5 = 0;
    v6 = 0i64;
    KeyboardStates = this->KeyboardStates;
    do
    {
      v8 = *((_BYTE *)&event[1].Type + v6);
      if ( v8 )
      {
        Scaleform::GFx::KeyboardState::SetKeyToggled(KeyboardStates, 144, (v8 & 0x10) != 0);
        Scaleform::GFx::KeyboardState::SetKeyToggled(KeyboardStates, 20, (*((_BYTE *)&event[1].Type + v6) & 8) != 0);
        Scaleform::GFx::KeyboardState::SetKeyToggled(KeyboardStates, 145, (*((_BYTE *)&event[1].Type + v6) & 0x20) != 0);
      }
      ++v5;
      ++v6;
      ++KeyboardStates;
    }
    while ( v5 < 6 );
    this->Flags |= 0x40000u;
    v9 = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 27i64);
    v11 = (Scaleform::RefCountVImpl *)v9;
    if ( v9 )
      ((void (__fastcall *)(Scaleform::GFx::State *, Scaleform::GFx::MovieImpl *))v9->__vftable[29].~RefCountImplCore)(
        v9,
        this);
    LOBYTE(v10) = 1;
    this->pASMovieRoot.pObject->OnMovieFocus(this->pASMovieRoot.pObject, v10);
    if ( v11 )
      Scaleform::RefCountImpl::Release(v11);
    return 1i64;
  }
  if ( (unsigned int)(event->Type - 5) <= 1 )
  {
    States = event[2].Modifiers.States;
    if ( (unsigned int)States < 6 )
    {
      v13 = &this->KeyboardStates[States];
      if ( v13 )
      {
        v14 = event->Modifiers.States;
        if ( v14 )
        {
          Scaleform::GFx::KeyboardState::SetKeyToggled(&this->KeyboardStates[States], 144, (v14 & 0x10) != 0);
          Scaleform::GFx::KeyboardState::SetKeyToggled(v13, 20, (event->Modifiers.States & 8) != 0);
          Scaleform::GFx::KeyboardState::SetKeyToggled(v13, 145, (event->Modifiers.States & 0x20) != 0);
        }
      }
    }
  }
  switch ( event->Type )
  {
    case MouseMove:
      Type = event[3].Type;
      if ( Type >= this->MouseCursorCount )
        return 0i64;
      v16 = *(float *)&event[1].Modifiers.States;
      LODWORD(p.x) = event[1].Type;
      p.y = v16;
      Scaleform::Render::Matrix2x4<float>::TransformByInverse(&this->ViewportMatrix, &result, &p);
      Scaleform::GFx::InputEventsQueue::AddMouseMove(&this->InputEventsQueue, Type, &result);
      return 3i64;
    case MouseDown:
      v19 = event[3].Type;
      if ( v19 >= this->MouseCursorCount )
        return 0i64;
      v20 = *(float *)&event[1].Modifiers.States;
      LODWORD(p.x) = event[1].Type;
      p.y = v20;
      Scaleform::Render::Matrix2x4<float>::TransformByInverse(&this->ViewportMatrix, &result, &p);
      Scaleform::GFx::InputEventsQueue::AddMouseButtonEvent(
        &this->InputEventsQueue,
        v19,
        &result,
        1 << *(_DWORD *)&event[2].Modifiers.States,
        0);
      return 3i64;
    case MouseUp:
      v17 = event[3].Type;
      if ( v17 >= this->MouseCursorCount )
        return 0i64;
      v18 = *(float *)&event[1].Modifiers.States;
      LODWORD(p.x) = event[1].Type;
      p.y = v18;
      Scaleform::Render::Matrix2x4<float>::TransformByInverse(&this->ViewportMatrix, &result, &p);
      Scaleform::GFx::InputEventsQueue::AddMouseButtonEvent(
        &this->InputEventsQueue,
        v17,
        &result,
        1 << *(_DWORD *)&event[2].Modifiers.States,
        0x80u);
      return 3i64;
    case MouseWheel:
      v21 = event[3].Type;
      if ( v21 >= this->MouseCursorCount )
        return 0i64;
      v22 = *(float *)&event[1].Modifiers.States;
      LODWORD(p.x) = event[1].Type;
      p.y = v22;
      Scaleform::Render::Matrix2x4<float>::TransformByInverse(&this->ViewportMatrix, &result, &p);
      Scaleform::GFx::InputEventsQueue::AddMouseWheel(
        &this->InputEventsQueue,
        v21,
        &result,
        (int)*(float *)&event[2].Type);
      return 3i64;
    case KeyDown:
      v23 = event[2].Modifiers.States;
      if ( (unsigned int)v23 >= 6 )
        goto LABEL_43;
      v24 = &this->KeyboardStates[v23];
      if ( !v24 )
        goto LABEL_43;
      Scaleform::GFx::KeyboardState::SetKeyDown(
        &this->KeyboardStates[v23],
        event[1].Type,
        event[1].Modifiers.States,
        event->Modifiers,
        1);
      switch ( event[1].Type )
      {
        case GestureEnd:
          v25 = v24;
          v26 = 160;
          if ( (event->Modifiers.States & 0x40) != 0 )
            v26 = 161;
          break;
        case GestureSimple:
          v25 = v24;
          if ( (event->Modifiers.States & 0x40) != 0 )
            v26 = 163;
          else
            v26 = 162;
          break;
        case GamePadAnalog:
          v25 = v24;
          if ( (event->Modifiers.States & 0x40) != 0 )
            v26 = 165;
          else
            v26 = 164;
          break;
        default:
          goto LABEL_43;
      }
      Scaleform::GFx::KeyboardState::SetKeyDown(v25, v26, 0, (Scaleform::KeyModifiers)0x80, 0);
LABEL_43:
      Scaleform::GFx::InputEventsQueue::AddKeyEvent(
        &this->InputEventsQueue,
        event[1].Type,
        event[1].Modifiers.States,
        0,
        1,
        event->Modifiers,
        event[2].Modifiers.States);
      v27 = event[2].Type;
      if ( v27 != 13 && (v27 < 0x20 || v27 == 127) )
        return 3i64;
      Scaleform::GFx::InputEventsQueue::AddKeyEvent(
        &this->InputEventsQueue,
        0,
        0,
        v27,
        1,
        (Scaleform::KeyModifiers)0x80,
        event[2].Modifiers.States);
      return 3i64;
    case KeyUp:
      v28 = event[2].Modifiers.States;
      if ( (unsigned int)v28 >= 6 )
        goto LABEL_61;
      v29 = &this->KeyboardStates[v28];
      if ( !v29 )
        goto LABEL_61;
      Scaleform::GFx::KeyboardState::SetKeyUp(
        &this->KeyboardStates[v28],
        event[1].Type,
        event[1].Modifiers.States,
        event->Modifiers,
        1);
      switch ( event[1].Type )
      {
        case GestureEnd:
          v30 = v29;
          v31 = 160;
          if ( (event->Modifiers.States & 0x40) != 0 )
            v31 = 161;
          break;
        case GestureSimple:
          v30 = v29;
          if ( (event->Modifiers.States & 0x40) != 0 )
            v31 = 163;
          else
            v31 = 162;
          break;
        case GamePadAnalog:
          v30 = v29;
          if ( (event->Modifiers.States & 0x40) != 0 )
            v31 = 165;
          else
            v31 = 164;
          break;
        default:
          goto LABEL_61;
      }
      Scaleform::GFx::KeyboardState::SetKeyUp(v30, v31, 0, (Scaleform::KeyModifiers)0x80, 0);
LABEL_61:
      Scaleform::GFx::InputEventsQueue::AddKeyEvent(
        &this->InputEventsQueue,
        event[1].Type,
        event[1].Modifiers.States,
        0,
        0,
        event->Modifiers,
        event[2].Modifiers.States);
      v4 = 3i64;
      break;
    case KillFocus:
      Scaleform::GFx::MovieImpl::OnMovieFocus(this, 0);
      return 0i64;
    case GamePadAnalog:
      Scaleform::GFx::InputEventsQueue::AddGamePadAnalogEvent(
        &this->InputEventsQueue,
        event[1].Type,
        *(float *)&event[2].Type,
        *(float *)&event[2].Modifiers.States,
        event[1].Modifiers.States);
      return 3i64;
    case Accelerometer:
      Scaleform::GFx::InputEventsQueue::AddAccelerometerEvent(
        &this->InputEventsQueue,
        event[1].Type,
        *(long double *)&event[2],
        *(long double *)&event[3],
        *(long double *)&event[4],
        *(long double *)&event[5]);
      return 3i64;
    case Geolocation:
      Scaleform::GFx::InputEventsQueue::AddGeolocationEvent(
        &this->InputEventsQueue,
        event[1].Type,
        *(long double *)&event[2],
        *(long double *)&event[3],
        *(long double *)&event[4],
        *(long double *)&event[5],
        *(long double *)&event[6],
        *(long double *)&event[7],
        *(long double *)&event[8],
        *(long double *)&event[9]);
      return 3i64;
    case Status:
      Scaleform::GFx::InputEventsQueue::AddStatusEvent(
        &this->InputEventsQueue,
        *(Scaleform::String **)&event[1],
        *(Scaleform::String **)&event[2],
        *(Scaleform::String **)&event[3],
        *(Scaleform::String **)&event[4]);
      return 3i64;
    case Char:
      Scaleform::GFx::InputEventsQueue::AddKeyEvent(
        &this->InputEventsQueue,
        0,
        0,
        event[1].Type,
        1,
        (Scaleform::KeyModifiers)0x80,
        event[1].Modifiers.States);
      return 3i64;
    case IME:
      v32 = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 27i64);
      v33 = (Scaleform::RefCountVImpl *)v32;
      if ( !v32 )
        return 0i64;
      v34 = ((__int64 (__fastcall *)(Scaleform::GFx::State *, Scaleform::GFx::MovieImpl *, const Scaleform::GFx::Event *))v32->__vftable[4].~RefCountImplCore)(
              v32,
              this,
              event);
      Scaleform::RefCountImpl::Release(v33);
      return v34;
    default:
      return 0i64;
  }
  return v4;
}

bool __fastcall Scaleform::GFx::MovieImpl::HasLooped(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::InteractiveObject *pMainMovie; // rcx

  pMainMovie = this->pMainMovie;
  return pMainMovie && pMainMovie->HasLooped(pMainMovie);
}

void __fastcall Scaleform::GFx::MovieImpl::HideFocusRect(Scaleform::GFx::MovieImpl *this, unsigned int controllerIdx)
{
  char *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // eax
  Scaleform::RefCountNTSImpl *v8; // rcx

  v4 = (char *)this + 96 * this->FocusGroupIndexes[controllerIdx];
  if ( v4[19712] )
  {
    v5 = *((_QWORD *)v4 + 2459);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 8);
      if ( v6 )
      {
        v7 = *(_DWORD *)(v6 + 8);
        if ( v7 )
        {
          v8 = *(Scaleform::RefCountNTSImpl **)(v5 + 8);
          *(_DWORD *)(v6 + 8) = v7 + 1;
          ++*(_DWORD *)(v6 + 8);
          Scaleform::RefCountNTSImpl::Release(v8);
          if ( *(_QWORD *)(v6 + 56)
            && !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v6 + 736i64))(
                  v6,
                  0i64,
                  controllerIdx,
                  2i64) )
          {
            Scaleform::RefCountNTSImpl::Release((Scaleform::RefCountNTSImpl *)v6);
            return;
          }
          Scaleform::RefCountNTSImpl::Release((Scaleform::RefCountNTSImpl *)v6);
        }
      }
      else
      {
        if ( (*(_DWORD *)v5)-- == 1 )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        *((_QWORD *)v4 + 2459) = 0i64;
      }
    }
  }
  v4[19712] = 0;
  this->FocusRectChanged = 1;
}

char __fastcall Scaleform::GFx::MovieImpl::HitTest(
        Scaleform::GFx::MovieImpl *this,
        float x,
        float y,
        Scaleform::GFx::Movie::HitTestType testCond,
        unsigned int controllerIdx)
{
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  int Size; // edi
  Scaleform::GFx::MovieImpl::LevelInfo *Data; // rax
  Scaleform::GFx::DisplayObjectBase *pObject; // rbx
  __int64 v13; // r8
  Scaleform::GFx::ASMovieRootBase *v14; // rax
  bool v15; // zf
  Scaleform::GFx::DisplayObjectBase_vtbl *v16; // rax
  __int64 v18; // rbx
  unsigned __int8 v19; // al
  __int64 v20; // rax
  Scaleform::Render::Point<float> p; // [rsp+30h] [rbp-31h] BYREF
  Scaleform::Render::Point<float> result; // [rsp+38h] [rbp-29h] BYREF
  int v23[4]; // [rsp+40h] [rbp-21h] BYREF
  __int128 v24; // [rsp+50h] [rbp-11h] BYREF
  __int128 v25; // [rsp+60h] [rbp-1h]
  unsigned int v26; // [rsp+70h] [rbp+Fh]
  char v27; // [rsp+74h] [rbp+13h]

  p.x = x;
  p.y = y;
  Scaleform::Render::Matrix2x4<float>::TransformByInverse(&this->ViewportMatrix, &result, &p);
  v7 = this->VisibleFrameRect.x2 - this->VisibleFrameRect.x1;
  v8 = (float)(result.y - (float)(this->ViewOffsetY * 20.0))
     / (float)(this->VisibleFrameRect.y2 - this->VisibleFrameRect.y1);
  v9 = (float)((float)(result.x - (float)(this->ViewOffsetX * 20.0)) / v7)
     + (float)((float)(result.x - (float)(this->ViewOffsetX * 20.0)) / v7);
  LODWORD(this->ScreenToWorld.Sy) = COERCE_UNSIGNED_INT((float)(v8 + v8) - 1.0) ^ _xmm;
  this->ScreenToWorld.Sx = v9 - 1.0;
  Size = this->MovieLevels.Data.Size;
  if ( !Size )
    return 0;
  while ( 1 )
  {
    Data = this->MovieLevels.Data.Data;
    --Size;
    v24 = _xmm;
    v25 = _xmm;
    pObject = Data[Size].pSprite.pObject;
    pObject->GetBounds(
      pObject,
      (Scaleform::Render::Rect<float> *)v23,
      (const Scaleform::Render::Matrix2x4<float> *)&v24);
    Scaleform::GFx::DisplayObjectBase::TransformPointToLocal(pObject, &p, &result, 0, 0i64);
    if ( (*(float *)&v23[2] < p.x || p.x < *(float *)v23 || *(float *)&v23[3] < p.y || p.y < *(float *)&v23[1])
      && !pObject->Has3D(pObject) )
    {
      goto LABEL_24;
    }
    if ( testCond )
      break;
    v13 = 0i64;
LABEL_23:
    if ( pObject->PointTestLocal(pObject, &p, v13) )
      return 1;
LABEL_24:
    if ( !Size )
      return 0;
  }
  if ( testCond == HitTest_Shapes )
  {
    LOBYTE(v13) = 1;
    goto LABEL_23;
  }
  if ( testCond != HitTest_ButtonEvents )
  {
    if ( testCond != HitTest_ShapesNoInvisible )
      goto LABEL_24;
    LOBYTE(v13) = 3;
    goto LABEL_23;
  }
  v14 = this->pASMovieRoot.pObject;
  v27 = 0;
  v25 = 0i64;
  v26 = controllerIdx;
  v15 = v14->AVMVersion == 1;
  v16 = pObject->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
  if ( v15 )
  {
    if ( v16->GetTopMostMouseEntity(pObject, &p, (Scaleform::GFx::DisplayObjectBase::TopMostDescr *)&v24) == TopMost_Found )
      return 1;
    goto LABEL_24;
  }
  v27 = 1;
  if ( v16->GetTopMostMouseEntity(pObject, &p, (Scaleform::GFx::DisplayObjectBase::TopMostDescr *)&v24) != TopMost_Found )
    goto LABEL_24;
  v18 = v24;
  if ( !(_QWORD)v24 )
    goto LABEL_24;
  while ( 1 )
  {
    v19 = *(_BYTE *)(v18 + 109);
    if ( v19 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v18 + 4i64 * v19) + 8i64))(v18 + 4i64 * v19);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 96i64))(v20) )
        return 1;
    }
    v18 = *(_QWORD *)(v18 + 56);
    if ( !v18 )
      goto LABEL_24;
  }
}

void __fastcall Scaleform::GFx::MovieImpl::DragState::InitCenterDelta(
        Scaleform::GFx::MovieImpl::DragState *this,
        bool lockCenter,
        unsigned int mouseIndex)
{
  __int64 v3; // rdi
  Scaleform::GFx::InteractiveObject *pCharacter; // rsi
  Scaleform::GFx::InteractiveObject *pParent; // rcx
  __int64 v7; // rax
  float v8; // xmm8_4
  float v9; // xmm9_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  __int64 v12; // rax
  float v13; // xmm1_4
  Scaleform::Render::Matrix2x4<float> m; // [rsp+28h] [rbp-39h] BYREF
  Scaleform::Render::Matrix2x4<float> pmat; // [rsp+48h] [rbp-19h] BYREF

  v3 = mouseIndex;
  this->MouseIndex = mouseIndex;
  this->LockCenter = lockCenter;
  if ( !lockCenter )
  {
    pCharacter = this->pCharacter;
    pParent = this->pCharacter->pParent;
    *(_OWORD *)&pmat.M[0][0] = _xmm;
    *(_OWORD *)&pmat.M[1][0] = _xmm;
    if ( pParent )
    {
      *(_OWORD *)&pmat.M[0][0] = _xmm;
      *(_OWORD *)&pmat.M[1][0] = _xmm;
      Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(pParent, &pmat);
    }
    if ( (unsigned int)v3 < 6 )
      v7 = (__int64)&pCharacter->pASRoot->pMovieImpl->mMouseState[v3];
    else
      v7 = 0i64;
    v8 = *(float *)(v7 + 56);
    v9 = *(float *)(v7 + 60);
    m = pmat;
    Scaleform::Render::Matrix2x4<float>::SetInverse(&pmat, &m);
    v10 = (float)((float)(pmat.M[0][1] * v9) + (float)(pmat.M[0][0] * v8)) + pmat.M[0][3];
    v11 = (float)((float)(pmat.M[1][0] * v8) + (float)(pmat.M[1][1] * v9)) + pmat.M[1][3];
    v12 = (__int64)pCharacter->GetMatrix(pCharacter);
    v13 = *(float *)(v12 + 28) - v11;
    this->CenterDelta.x = *(float *)(v12 + 12) - v10;
    this->CenterDelta.y = v13;
  }
}

void __fastcall Scaleform::GFx::MovieImpl::InitFocusKeyInfo(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::ProcessFocusKeyInfo *pfocusInfo,
        const Scaleform::GFx::InputEventsQueueEntry::KeyEntry *keyEntry,
        bool inclFocusEnabled,
        Scaleform::GFx::FocusGroupDescr *pfocusGroup)
{
  Scaleform::GFx::FocusGroupDescr *v6; // rbp
  float x1; // eax
  float y2; // xmm2_4
  float x2; // xmm1_4
  unsigned __int64 v10; // rbx
  Scaleform::WeakPtrProxy *pObject; // rdx
  Scaleform::GFx::InteractiveObject *v12; // rdi
  Scaleform::RefCountWeakSupportImpl *v13; // rax
  int RefCount; // eax
  Scaleform::GFx::InteractiveObject *v16; // rcx
  Scaleform::GFx::InteractiveObject *v17; // rcx
  unsigned __int64 Size; // rdx
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *Data; // rax

  if ( !pfocusInfo->Initialized )
  {
    v6 = pfocusGroup;
    if ( !pfocusGroup )
      v6 = &this->FocusGroups[this->FocusGroupIndexes[keyEntry->KeyboardIndex]];
    pfocusInfo->pFocusGroup = v6;
    pfocusInfo->PrevKeyCode = v6->LastFocusKeyCode;
    x1 = v6->LastFocusedRect.x1;
    y2 = v6->LastFocusedRect.y2;
    x2 = v6->LastFocusedRect.x2;
    pfocusInfo->Prev_aRect.y1 = v6->LastFocusedRect.y1;
    pfocusInfo->Prev_aRect.x2 = x2;
    pfocusInfo->Prev_aRect.y2 = y2;
    pfocusInfo->Prev_aRect.x1 = x1;
    pfocusInfo->InclFocusEnabled = inclFocusEnabled;
    pfocusInfo->ManualFocus = 0;
    pfocusInfo->KeyboardIndex = keyEntry->KeyboardIndex;
    pfocusInfo->KeyCode = keyEntry->Code;
    pfocusInfo->KeysState = keyEntry->KeysState;
    Scaleform::GFx::MovieImpl::FillTabableArray(this, pfocusInfo);
    v10 = 0i64;
    pfocusInfo->CurFocusIdx = -1;
    pObject = v6->LastFocused.pProxy.pObject;
    v12 = 0i64;
    if ( pObject )
    {
      v13 = pObject->pObject;
      if ( v13 )
      {
        v12 = (Scaleform::GFx::InteractiveObject *)pObject->pObject;
        RefCount = v13->RefCount;
        if ( RefCount )
          v12->RefCount = RefCount + 1;
        else
          v12 = 0i64;
      }
      else
      {
        if ( pObject->RefCount-- == 1 )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        v6->LastFocused.pProxy.pObject = 0i64;
      }
    }
    if ( v12 )
      ++v12->RefCount;
    v16 = pfocusInfo->CurFocused.pObject;
    if ( v16 )
      Scaleform::RefCountNTSImpl::Release(v16);
    pfocusInfo->CurFocused.pObject = v12;
    if ( v12 )
      Scaleform::RefCountNTSImpl::Release(v12);
    v17 = pfocusInfo->CurFocused.pObject;
    if ( v17 )
    {
      Size = v6->TabableArray.Data.Size;
      if ( Size )
      {
        Data = v6->TabableArray.Data.Data;
        while ( Data->pObject != v17 )
        {
          ++v10;
          ++Data;
          if ( v10 >= Size )
            goto LABEL_25;
        }
        pfocusInfo->CurFocusIdx = v10;
      }
    }
LABEL_25:
    pfocusInfo->Initialized = 1;
  }
}

void __fastcall Scaleform::GFx::MovieImpl::InitializeExtensionContext(
        Scaleform::GFx::MovieImpl *this,
        const char *extensionID,
        const char *contextID)
{
  Scaleform::GFx::State *v5; // rax
  Scaleform::RefCountVImpl *v6; // rbx

  v5 = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 8i64);
  v6 = (Scaleform::RefCountVImpl *)v5;
  if ( v5 )
  {
    ((void (__fastcall *)(Scaleform::GFx::State *, const char *, const char *))v5->__vftable[4].~RefCountImplCore)(
      v5,
      extensionID,
      contextID);
    Scaleform::RefCountImpl::Release(v6);
  }
}

__int64 __fastcall Scaleform::GFx::Movie::Invoke(
        Scaleform::GFx::Movie *this,
        const char *pmethodName,
        Scaleform::GFx::Value *presult,
        const Scaleform::GFx::Value *pargs,
        unsigned int numArgs)
{
  return ((__int64 (__fastcall *)(Scaleform::GFx::ASMovieRootBase *, const char *, Scaleform::GFx::Value *, const Scaleform::GFx::Value *))this->pASMovieRoot.pObject->Invoke)(
           this->pASMovieRoot.pObject,
           pmethodName,
           presult,
           pargs);
}

Scaleform::GFx::State *__fastcall Scaleform::GFx::MovieImpl::IsAccelerometerMuted(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::State *result; // rax
  Scaleform::RefCountVImpl *v2; // rbx
  unsigned __int8 v3; // di

  result = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 10i64);
  v2 = (Scaleform::RefCountVImpl *)result;
  if ( result )
  {
    v3 = ((__int64 (__fastcall *)(Scaleform::GFx::State *))result->__vftable[3].~RefCountImplCore)(result);
    Scaleform::RefCountImpl::Release(v2);
    return (Scaleform::GFx::State *)v3;
  }
  return result;
}

Scaleform::GFx::State *__fastcall Scaleform::GFx::MovieImpl::IsAccelerometerSupported(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::State *result; // rax
  Scaleform::RefCountVImpl *v2; // rbx
  unsigned __int8 v3; // di

  result = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 10i64);
  v2 = (Scaleform::RefCountVImpl *)result;
  if ( result )
  {
    v3 = ((__int64 (__fastcall *)(Scaleform::GFx::State *))result->__vftable[4].~RefCountImplCore)(result);
    Scaleform::RefCountImpl::Release(v2);
    return (Scaleform::GFx::State *)v3;
  }
  return result;
}

__int64 __fastcall Scaleform::GFx::Movie::IsAvailable(Scaleform::GFx::Movie *this, const char *ppathToVar)
{
  return ((__int64 (__fastcall *)(Scaleform::GFx::ASMovieRootBase *, const char *))this->pASMovieRoot.pObject->IsAvailable)(
           this->pASMovieRoot.pObject,
           ppathToVar);
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

bool __fastcall Scaleform::GFx::MovieImpl::IsDragging(Scaleform::GFx::MovieImpl *this, unsigned int mouseIndex)
{
  return this->CurrentDragStates[mouseIndex].pCharacter != 0i64;
}

__int64 __fastcall Scaleform::GFx::MovieImpl::IsExitRequested(Scaleform::GFx::MovieImpl *this)
{
  return (this->Flags >> 21) & 1;
}

char __fastcall Scaleform::GFx::MovieImpl::IsFocused(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::GFx::InteractiveObject *ch)
{
  unsigned int v4; // edi
  Scaleform::GFx::InteractiveObject *v5; // rbx
  __int64 v6; // rsi
  Scaleform::WeakPtrProxy *pObject; // rdx
  Scaleform::RefCountNTSImpl *v8; // rax

  v4 = 0;
  if ( !this->FocusGroupsCnt )
    return 0;
  while ( 1 )
  {
    v5 = 0i64;
    v6 = v4;
    pObject = this->FocusGroups[v6].LastFocused.pProxy.pObject;
    if ( pObject )
    {
      v8 = pObject->pObject;
      if ( v8 )
      {
        v5 = (Scaleform::GFx::InteractiveObject *)pObject->pObject;
        if ( v8->RefCount )
        {
          ++v8->RefCount;
          ++v8->RefCount;
          Scaleform::RefCountNTSImpl::Release(v8);
          Scaleform::RefCountNTSImpl::Release(v5);
        }
        else
        {
          v5 = 0i64;
        }
      }
      else
      {
        if ( pObject->RefCount-- == 1 )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->FocusGroups[v6].LastFocused.pProxy.pObject = 0i64;
      }
    }
    if ( v5 == ch )
      break;
    if ( ++v4 >= this->FocusGroupsCnt )
      return 0;
  }
  return 1;
}

Scaleform::GFx::State *__fastcall Scaleform::GFx::MovieImpl::IsGeolocationMuted(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::State *result; // rax
  Scaleform::RefCountVImpl *v2; // rbx
  unsigned __int8 v3; // di

  result = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 11i64);
  v2 = (Scaleform::RefCountVImpl *)result;
  if ( result )
  {
    v3 = ((__int64 (__fastcall *)(Scaleform::GFx::State *))result->__vftable[3].~RefCountImplCore)(result);
    Scaleform::RefCountImpl::Release(v2);
    return (Scaleform::GFx::State *)v3;
  }
  return result;
}

Scaleform::GFx::State *__fastcall Scaleform::GFx::MovieImpl::IsGeolocationSupported(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::State *result; // rax
  Scaleform::RefCountVImpl *v2; // rbx
  unsigned __int8 v3; // di

  result = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 11i64);
  v2 = (Scaleform::RefCountVImpl *)result;
  if ( result )
  {
    v3 = ((__int64 (__fastcall *)(Scaleform::GFx::State *))result->__vftable[4].~RefCountImplCore)(result);
    Scaleform::RefCountImpl::Release(v2);
    return (Scaleform::GFx::State *)v3;
  }
  return result;
}

__int64 __fastcall Scaleform::GFx::MovieImpl::IsMovieFocused(Scaleform::GFx::MovieImpl *this)
{
  return (this->Flags >> 18) & 1;
}

__int64 __fastcall Scaleform::GFx::MovieImpl::IsPaused(Scaleform::GFx::MovieImpl *this)
{
  return (this->Flags >> 20) & 1;
}

bool __fastcall Scaleform::GFx::MovieImpl::IsShutdownRenderingComplete(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::Render::DrawableImageContext *pObject; // rax
  Scaleform::Render::ContextImpl::Context *RContext; // rcx
  bool result; // al

  result = 0;
  if ( Scaleform::Render::ContextImpl::Context::IsShutdownComplete(&this->RenderContext) )
  {
    pObject = this->DIContext.pObject;
    if ( !pObject )
      return 1;
    RContext = pObject->RContext;
    if ( !RContext || Scaleform::Render::ContextImpl::Context::IsShutdownComplete(RContext) )
      return 1;
  }
  return result;
}

bool __fastcall Scaleform::GFx::MovieImpl::IsShutdowning(Scaleform::GFx::MovieImpl *this)
{
  return !this->pRenderRoot.pObject || (this->Flags2 & 4) != 0;
}

_BOOL8 __fastcall Scaleform::GFx::MouseState::IsTopmostEntityChanged(Scaleform::GFx::MouseState *this)
{
  Scaleform::WeakPtrProxy *pObject; // rdx
  Scaleform::RefCountNTSImpl *v2; // rdi
  Scaleform::RefCountWeakSupportImpl *v4; // rax
  int RefCount; // eax
  bool v6; // zf
  Scaleform::WeakPtrProxy *v7; // rdx
  Scaleform::RefCountNTSImpl *v8; // rbx
  Scaleform::RefCountWeakSupportImpl *v9; // rax
  int v10; // eax
  bool v11; // si

  pObject = this->TopmostEntity.pProxy.pObject;
  v2 = 0i64;
  if ( this->TopmostEntity.pProxy.pObject )
  {
    v4 = pObject->pObject;
    if ( v4 )
    {
      v2 = pObject->pObject;
      RefCount = v4->RefCount;
      if ( RefCount )
      {
        v2->RefCount = RefCount + 1;
        ++v2->RefCount;
        Scaleform::RefCountNTSImpl::Release(v2);
      }
      else
      {
        v2 = 0i64;
      }
    }
    else
    {
      v6 = pObject->RefCount-- == 1;
      if ( v6 )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      this->TopmostEntity.pProxy.pObject = 0i64;
    }
  }
  v7 = this->PrevTopmostEntity.pProxy.pObject;
  v8 = 0i64;
  if ( v7 )
  {
    v9 = v7->pObject;
    if ( v9 )
    {
      v8 = v7->pObject;
      v10 = v9->RefCount;
      if ( v10 )
      {
        v8->RefCount = v10 + 1;
        ++v8->RefCount;
        Scaleform::RefCountNTSImpl::Release(v8);
      }
      else
      {
        v8 = 0i64;
      }
    }
    else
    {
      v6 = v7->RefCount-- == 1;
      if ( v6 )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      this->PrevTopmostEntity.pProxy.pObject = 0i64;
    }
  }
  v11 = v2 != v8 || !v2 && (*((_BYTE *)this + 76) & 1) == 0 || !v8 && (*((_BYTE *)this + 76) & 2) == 0;
  if ( v8 )
    Scaleform::RefCountNTSImpl::Release(v8);
  if ( v2 )
    Scaleform::RefCountNTSImpl::Release(v2);
  return v11;
}

void __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        float x,
        float y)
{
  Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rbx
  unsigned __int64 Size; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  _BYTE *v9; // rcx
  float val; // [rsp+58h] [rbp+10h] BYREF

  Data = this->Data;
  Size = Data->Data.Size;
  v6 = Size + 1;
  if ( Size + 1 >= Size )
  {
    if ( v6 <= Data->Data.Policy.Capacity )
      goto LABEL_7;
    v7 = v6 + (v6 >> 2);
  }
  else
  {
    if ( v6 >= Data->Data.Policy.Capacity >> 1 )
      goto LABEL_7;
    v7 = Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this->Data,
    this->Data,
    v7);
LABEL_7:
  v8 = (__int64)(Data->Data.Data - 1);
  Data->Data.Size = v6;
  v9 = (_BYTE *)(v6 + v8);
  if ( v9 )
    *v9 = 3;
  val = x;
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
    &Data->Data,
    (const unsigned __int8 *)&val);
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
    &Data->Data,
    (const unsigned __int8 *)&val + 1);
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
    &Data->Data,
    (const unsigned __int8 *)&val + 2);
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
    &Data->Data,
    (const unsigned __int8 *)&val + 3);
  val = y;
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
    &Data->Data,
    (const unsigned __int8 *)&val);
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
    &Data->Data,
    (const unsigned __int8 *)&val + 1);
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
    &Data->Data,
    (const unsigned __int8 *)&val + 2);
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
    &Data->Data,
    (const unsigned __int8 *)&val + 3);
  this->LastX = x;
  this->LastY = y;
  this->Status = Status_EdgeTo;
}

void __fastcall Scaleform::GFx::MovieImpl::LoadRegisteredFonts(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::HashSet<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > *fonts)
{
  unsigned __int64 Size; // rdi
  __int64 v5; // rbx
  Scaleform::Render::Font *key; // [rsp+30h] [rbp+8h] BYREF

  Size = this->RegisteredFonts.Data.Size;
  if ( Size )
  {
    v5 = 0i64;
    do
    {
      key = this->RegisteredFonts.Data.Data[v5].pFont.pObject->pFont.pObject;
      Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::Set<Scaleform::Render::Font *>(
        fonts,
        fonts,
        &key);
      ++v5;
      --Size;
    }
    while ( Size );
  }
}

void Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogScriptError(
        Scaleform::GFx::LogBase<Scaleform::GFx::LogState> *this,
        const char *pfmt,
        ...)
{
  Scaleform::GFx::LogBase<Scaleform::GFx::LogState> *v2; // rbx
  Scaleform::GFx::LogBase<Scaleform::GFx::LogState> *v3; // rcx
  Scaleform::Log *GlobalLog; // rcx
  Scaleform::Log_vtbl *v5; // rax
  int v6[10]; // [rsp+20h] [rbp-28h] BYREF
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, pfmt);
  v2 = this - 3;
  if ( !this )
    v2 = 0i64;
  v3 = v2;
  if ( v2 == (Scaleform::GFx::LogBase<Scaleform::GFx::LogState> *)-24i64 )
    v3 = 0i64;
  if ( v3[3].IsVerboseActionErrors(v3 + 3) )
  {
    GlobalLog = (Scaleform::Log *)v2[4].__vftable;
    if ( !GlobalLog )
      GlobalLog = Scaleform::Log::GetGlobalLog();
    v5 = GlobalLog->__vftable;
    v6[0] = 212992;
    ((void (__fastcall *)(Scaleform::Log *, int *, const char *, __int64 *))v5->LogMessageVarg)(
      GlobalLog,
      v6,
      pfmt,
      (__int64 *)va);
  }
}

void __fastcall Scaleform::GFx::MovieImpl::MakeAreaVisible(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::Render::Rect<float> *screenRect,
        const Scaleform::Render::Rect<float> *box,
        unsigned int flags)
{
  char v4; // si
  Scaleform::Render::Matrix2x4<float> *p_ViewportMatrix; // r14
  double v9; // xmm4_8
  double v10; // xmm6_8
  float v11; // xmm11_4
  float v12; // xmm12_4
  float v13; // xmm8_4
  float v14; // xmm7_4
  float v15; // xmm9_4
  float v16; // xmm10_4
  float v17; // xmm7_4
  float v18; // xmm8_4
  double v19; // xmm1_8
  long double v20; // xmm0_8
  float v21; // xmm7_4
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm6_4
  float v25; // xmm9_4
  float v26; // xmm10_4
  float v27; // xmm0_4
  float v28; // xmm12_4
  float v29; // xmm7_4
  float v30; // xmm11_4
  float v31; // xmm1_4
  float v32; // xmm3_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm3_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  Scaleform::Render::Rect<float> pr; // [rsp+20h] [rbp-E0h] BYREF
  Scaleform::Render::Matrix2x4<float> v41; // [rsp+30h] [rbp-D0h] BYREF
  Scaleform::Render::Rect<float> v42; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::Render::Rect<float> r; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::Render::Matrix2x4<float> v44; // [rsp+70h] [rbp-90h] BYREF

  v4 = flags;
  if ( screenRect->x2 < box->x2 || screenRect->y2 < box->y2 || box->x1 < screenRect->x1 || box->y1 < screenRect->y1 )
  {
    *(_OWORD *)&v44.M[0][0] = _xmm;
    *(_OWORD *)&v44.M[1][0] = _xmm;
    Scaleform::GFx::MovieImpl::ResetViewportMatrix(this);
    p_ViewportMatrix = &this->ViewportMatrix;
    Scaleform::Render::Matrix2x4<float>::SetInverse(&v44, &this->ViewportMatrix);
    pr = 0i64;
    Scaleform::Render::Matrix2x4<float>::EncloseTransform(&v44, &pr, screenRect);
    v9 = DOUBLE_1_0;
    v10 = DOUBLE_1_0;
    v11 = box->x1 * 20.0;
    v12 = box->y1 * 20.0;
    v13 = box->x2 * 20.0;
    v14 = box->y2 * 20.0;
    r.x1 = v11;
    r.y1 = v12;
    r.x2 = v13;
    r.y2 = v14;
    if ( (v4 & 1) == 0 )
    {
      if ( (float)(v13 - v11) > (float)(pr.x2 - pr.x1) )
        v9 = pr.x2 / v13;
      if ( (float)(v14 - v12) > (float)(pr.y2 - pr.y1) )
        v10 = pr.y2 / v14;
    }
    if ( (v4 & 2) != 0 && v9 == 1.0 && v10 == 1.0 )
    {
      v15 = pr.y2 - pr.y1;
      v16 = pr.x2 - pr.x1;
      v17 = v14 - v12;
      v18 = v13 - v11;
      v19 = (float)((float)(pr.y2 - pr.y1) * (float)(pr.x2 - pr.x1));
      if ( v19 > (float)((float)(v17 * v18) + (float)(v17 * v18)) )
      {
        v20 = sqrt(v18 / v17 * (v19 * 0.5));
        v9 = v20 / v18;
        v10 = v19 * 0.5 / v20 / v17;
        if ( v18 * v9 > v16 )
          v9 = v16 / v18;
        if ( v17 * v10 > v15 )
          v10 = v15 / v17;
      }
    }
    v21 = 0.0;
    v22 = fmin(v9, v10);
    v41.M[0][0] = v22;
    v41.M[1][1] = v22;
    v41.M[0][1] = v22 * 0.0;
    v41.M[0][2] = v22 * 0.0;
    v41.M[1][0] = v22 * 0.0;
    v41.M[1][2] = v22 * 0.0;
    v42 = 0i64;
    v41.M[0][3] = (float)((float)(COERCE_FLOAT(LODWORD(v11) ^ _xmm) + 0.0) * v22) + v11;
    v41.M[1][3] = (float)((float)(COERCE_FLOAT(LODWORD(v12) ^ _xmm) + 0.0) * v22) + v12;
    Scaleform::Render::Matrix2x4<float>::EncloseTransform(&v41, &v42, &r);
    v23 = 0.0;
    if ( v42.x1 > pr.x2 || pr.x1 > v42.x2 || v42.x2 > pr.x2 || pr.x1 > v42.x1 )
    {
      if ( (v4 & 4) != 0 )
        v21 = v42.x1 - pr.x1;
      else
        v21 = (float)((float)((float)(v42.x2 - v42.x1) * 0.5) + v42.x1)
            - (float)(pr.x2 - (float)((float)(pr.x2 - pr.x1) * 0.5));
    }
    if ( v42.y1 > pr.y2 || pr.y1 > v42.y2 || v42.y2 > pr.y2 || pr.y1 > v42.y1 )
    {
      if ( (v4 & 4) != 0 )
        v23 = v42.y1 - pr.y1;
      else
        v23 = (float)((float)((float)(v42.y2 - v42.y1) * 0.5) + v42.y1)
            - (float)(pr.y2 - (float)((float)(pr.y2 - pr.y1) * 0.5));
    }
    v24 = p_ViewportMatrix->M[0][0];
    v25 = this->ViewportMatrix.M[1][0];
    v26 = this->ViewportMatrix.M[1][1];
    v27 = p_ViewportMatrix->M[0][0] * v41.M[0][0];
    v28 = v41.M[0][3] + COERCE_FLOAT(LODWORD(v21) ^ _xmm);
    v29 = this->ViewportMatrix.M[0][1];
    v30 = v41.M[1][3] + COERCE_FLOAT(LODWORD(v23) ^ _xmm);
    this->ViewportMatrix.M[1][2] = 0.0;
    v31 = v29 * v41.M[1][0];
    this->ViewportMatrix.M[0][2] = 0.0;
    v32 = v29 * v41.M[1][1];
    v33 = v31 + v27;
    v41.M[0][3] = v28;
    v34 = v25 * v41.M[0][0];
    p_ViewportMatrix->M[0][0] = v33;
    v41.M[1][3] = v30;
    v35 = (float)(v26 * v41.M[1][0]) + v34;
    v36 = v24 * v41.M[0][1];
    this->ViewportMatrix.M[1][0] = v35;
    v37 = v32 + v36;
    v38 = v25 * v41.M[0][1];
    v39 = v26 * v41.M[1][1];
    this->ViewportMatrix.M[0][1] = v37;
    this->ViewportMatrix.M[1][1] = v39 + v38;
    this->ViewportMatrix.M[0][3] = (float)((float)(v29 * v30) + (float)(v24 * v28)) + this->ViewportMatrix.M[0][3];
    this->ViewportMatrix.M[1][3] = (float)((float)(v26 * v30) + (float)(v25 * v28)) + this->ViewportMatrix.M[1][3];
    Scaleform::Render::TreeNode::SetMatrix(this->pRenderRoot.pObject, &this->ViewportMatrix);
  }
}

void __fastcall Scaleform::GFx::MovieImpl::MakeViewAndPersp3D(
        Scaleform::Render::Matrix3x4<float> *matView,
        Scaleform::Render::Matrix4x4<float> *matPersp,
        const Scaleform::Render::Rect<float> *frameRect,
        const Scaleform::Render::Point<float> *projCenter,
        float fieldOfView,
        float focalLength,
        bool bInvertY)
{
  float v8; // xmm2_4
  float v11; // xmm10_4
  float fNearZ; // xmm9_4
  float fFarZ; // xmm6_4
  float x; // xmm7_4
  float y; // xmm8_4
  float v16; // xmm12_4
  int v17; // xmm1_4
  float viewMaxY; // xmm11_4
  float v19; // xmm10_4
  float v20; // xmm13_4
  float v21; // xmm14_4
  float v22; // xmm11_4
  float v23; // xmm7_4
  float v24; // xmm8_4
  float v25; // xmm2_4
  long double v26; // xmm0_8
  float v27; // xmm1_4
  float v28; // xmm11_4
  long double v29; // xmm0_8
  Scaleform::Render::Point3<float> zAxis; // [rsp+48h] [rbp-C0h] BYREF
  Scaleform::Render::Point3<float> upVec; // [rsp+58h] [rbp-B0h] BYREF
  Scaleform::Render::Point3<float> eyePt; // [rsp+68h] [rbp-A0h] BYREF
  float focalLengtha; // [rsp+150h] [rbp+48h]

  v8 = *(float *)&FLOAT_1_0;
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(frameRect->x2 - frameRect->x1)) & _xmm);
  if ( focalLength == 0.0 )
    fNearZ = *(float *)&FLOAT_1_0;
  else
    fNearZ = focalLength / 100.0;
  if ( focalLength == 0.0 )
    fFarZ = fmaxf(v11, 100000.0);
  else
    fFarZ = focalLength * 100.0;
  x = projCenter->x;
  y = projCenter->y;
  v16 = frameRect->x2 - projCenter->x;
  v17 = _xmm;
  viewMaxY = y - frameRect->y1;
  v19 = v11 * 0.5;
  LODWORD(v20) = COERCE_UNSIGNED_INT(projCenter->x - frameRect->x1) ^ _xmm;
  LODWORD(v21) = COERCE_UNSIGNED_INT(frameRect->y2 - y) ^ _xmm;
  focalLengtha = viewMaxY;
  if ( focalLength == 0.0 )
  {
    if ( fieldOfView > 0.0 )
    {
      v8 = *(float *)&FLOAT_1_0;
      v17 = _xmm;
      v19 = v19 / tanf((float)(fieldOfView * 3.141592653589793 / 180.0) * 0.5);
    }
  }
  else
  {
    v19 = focalLength;
  }
  if ( matView )
  {
    eyePt.x = x;
    eyePt.y = y;
    v22 = fmaxf(COERCE_FLOAT(LODWORD(fFarZ) ^ v17), COERCE_FLOAT(LODWORD(v19) ^ v17));
    eyePt.z = v22;
    if ( !bInvertY )
      v8 = FLOAT_N1_0;
    upVec.y = v8;
    v23 = x - x;
    upVec.x = 0.0;
    v24 = y - y;
    upVec.z = 0.0;
    zAxis.x = v23;
    zAxis.y = v24;
    v25 = (float)(v24 * v24) + (float)(v23 * v23);
    if ( bInvertY )
    {
      zAxis.z = 0.0 - v22;
      v26 = (float)(v25 + (float)((float)(0.0 - v22) * (float)(0.0 - v22)));
      if ( v26 >= 9.999999999999999e-25 )
      {
        v27 = sqrt(v26);
        zAxis.z = (float)(0.0 - v22) / v27;
LABEL_19:
        zAxis.x = v23 / v27;
        zAxis.y = v24 / v27;
      }
    }
    else
    {
      v28 = v22 - 0.0;
      zAxis.z = v28;
      v29 = (float)(v25 + (float)(v28 * v28));
      if ( v29 >= 9.999999999999999e-25 )
      {
        v27 = sqrt(v29);
        zAxis.z = v28 / v27;
        goto LABEL_19;
      }
    }
    Scaleform::Render::Matrix3x4<float>::View(matView, &eyePt, &zAxis, &upVec);
    viewMaxY = focalLengtha;
  }
  if ( matPersp )
  {
    if ( fieldOfView > 0.0 )
    {
      if ( bInvertY )
        Scaleform::Render::Matrix4x4<float>::PerspectiveOffCenterLH(
          matPersp,
          v19,
          v20,
          v16,
          v21,
          viewMaxY,
          fNearZ,
          fFarZ);
      else
        Scaleform::Render::Matrix4x4<float>::PerspectiveOffCenterRH(
          matPersp,
          v19,
          v20,
          v16,
          v21,
          viewMaxY,
          fNearZ,
          fFarZ);
    }
    else if ( bInvertY )
    {
      Scaleform::Render::Matrix4x4<float>::OrthoOffCenterLH(matPersp, v20, v16, v21, viewMaxY, fNearZ, fFarZ);
    }
    else
    {
      Scaleform::Render::Matrix4x4<float>::OrthoOffCenterRH(matPersp, v20, v16, v21, viewMaxY, fNearZ, fFarZ);
    }
  }
}

__int64 __fastcall Scaleform::Render::ImageDelegate::Map(
        Scaleform::Render::ImageDelegate *this,
        Scaleform::Render::ImageData *pdata,
        __int64 levelIndex,
        __int64 levelCount)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Image *, Scaleform::Render::ImageData *, __int64, __int64))this->pImage.pObject->Map)(
           this->pImage.pObject,
           pdata,
           levelIndex,
           levelCount);
}

void __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::MoveTo(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        float x,
        float y)
{
  Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rbx
  unsigned __int64 Size; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  _BYTE *v9; // rcx
  float val; // [rsp+58h] [rbp+10h] BYREF

  Data = this->Data;
  Size = Data->Data.Size;
  v6 = Size + 1;
  if ( Size + 1 >= Size )
  {
    if ( v6 <= Data->Data.Policy.Capacity )
      goto LABEL_7;
    v7 = v6 + (v6 >> 2);
  }
  else
  {
    if ( v6 >= Data->Data.Policy.Capacity >> 1 )
      goto LABEL_7;
    v7 = Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this->Data,
    this->Data,
    v7);
LABEL_7:
  v8 = (__int64)(Data->Data.Data - 1);
  Data->Data.Size = v6;
  v9 = (_BYTE *)(v6 + v8);
  if ( v9 )
    *v9 = 2;
  val = x;
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
    &Data->Data,
    (const unsigned __int8 *)&val);
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
    &Data->Data,
    (const unsigned __int8 *)&val + 1);
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
    &Data->Data,
    (const unsigned __int8 *)&val + 2);
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
    &Data->Data,
    (const unsigned __int8 *)&val + 3);
  val = y;
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
    &Data->Data,
    (const unsigned __int8 *)&val);
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
    &Data->Data,
    (const unsigned __int8 *)&val + 1);
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
    &Data->Data,
    (const unsigned __int8 *)&val + 2);
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
    &Data->Data,
    (const unsigned __int8 *)&val + 3);
  this->StartX = x;
  this->StartY = y;
  this->LastX = x;
  this->LastY = y;
  this->Status = Status_MoveTo;
}

void __fastcall Scaleform::GFx::MovieImpl::NotifyMouseState(
        Scaleform::GFx::MovieImpl *this,
        float x,
        float y,
        unsigned int buttons,
        unsigned int mouseIndex)
{
  __int64 v7; // rbp
  Scaleform::GFx::InputEventsQueue *p_InputEventsQueue; // r14
  unsigned int CurButtonsState; // esi
  int v10; // ebx
  __int64 v11; // rdi
  unsigned int v12; // eax
  Scaleform::Render::Point<float> p; // [rsp+30h] [rbp-38h] BYREF
  Scaleform::Render::Point<float> result; // [rsp+70h] [rbp+8h] BYREF

  p.x = x;
  p.y = y;
  Scaleform::Render::Matrix2x4<float>::TransformByInverse(&this->ViewportMatrix, &result, &p);
  v7 = mouseIndex;
  if ( mouseIndex < this->MouseCursorCount )
  {
    p_InputEventsQueue = &this->InputEventsQueue;
    Scaleform::GFx::InputEventsQueue::AddMouseMove(&this->InputEventsQueue, mouseIndex, &result);
    CurButtonsState = this->mMouseState[v7].CurButtonsState;
    v10 = 1;
    v11 = 16i64;
    do
    {
      v12 = buttons & v10;
      if ( (buttons & v10) == 0 || (v10 & CurButtonsState) != 0 )
      {
        if ( (CurButtonsState & v10) != 0 && !v12 )
          Scaleform::GFx::InputEventsQueue::AddMouseButtonEvent(
            p_InputEventsQueue,
            v7,
            &result,
            CurButtonsState & v10,
            0x80u);
      }
      else
      {
        Scaleform::GFx::InputEventsQueue::AddMouseButtonEvent(p_InputEventsQueue, v7, &result, v12, 0);
      }
      v10 *= 2;
      --v11;
    }
    while ( v11 );
  }
}

void __fastcall Scaleform::GFx::MovieImpl::OnMovieFocus(Scaleform::GFx::MovieImpl *this, bool set)
{
  Scaleform::GFx::KeyboardState *KeyboardStates; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbp
  Scaleform::GFx::MouseState *mMouseState; // rbx
  Scaleform::GFx::State *v8; // rax
  Scaleform::RefCountVImpl *v9; // rbx
  Scaleform::GFx::State_vtbl *v10; // rax
  Scaleform::GFx::MovieImpl *v11; // rdx

  if ( !set )
  {
    KeyboardStates = this->KeyboardStates;
    v5 = 6i64;
    v6 = 6i64;
    do
    {
      Scaleform::GFx::KeyboardState::ResetState(KeyboardStates++);
      --v6;
    }
    while ( v6 );
    mMouseState = this->mMouseState;
    do
    {
      Scaleform::GFx::MouseState::ResetState(mMouseState++);
      --v5;
    }
    while ( v5 );
  }
  if ( set )
    this->Flags |= 0x40000u;
  else
    this->Flags &= ~0x40000u;
  v8 = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 27i64);
  v9 = (Scaleform::RefCountVImpl *)v8;
  if ( v8 )
  {
    v10 = v8->__vftable;
    v11 = 0i64;
    if ( set )
      v11 = this;
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, Scaleform::GFx::MovieImpl *))v10[29].~RefCountImplCore)(v9, v11);
  }
  this->pASMovieRoot.pObject->OnMovieFocus(this->pASMovieRoot.pObject, set);
  if ( v9 )
    Scaleform::RefCountImpl::Release(v9);
}

void __fastcall Scaleform::Render::Matrix4x4<float>::OrthoOffCenterLH(
        Scaleform::Render::Matrix4x4<float> *this,
        float viewMinX,
        float viewMaxX,
        float viewMinY,
        float viewMaxY,
        float fNearZ,
        float fFarZ)
{
  *(_OWORD *)&this->M[0][0] = 0ui64;
  *(_OWORD *)&this->M[1][0] = 0ui64;
  *(_OWORD *)&this->M[2][0] = 0ui64;
  *(_OWORD *)&this->M[3][0] = 0ui64;
  this->M[3][3] = 1.0;
  this->M[0][0] = 2.0 / (float)(viewMaxX - viewMinX);
  this->M[1][1] = 2.0 / (float)(viewMaxY - viewMinY);
  this->M[2][2] = 1.0 / (float)(fFarZ - fNearZ);
  this->M[0][3] = (float)(viewMinX + viewMaxX) / (float)(viewMinX - viewMaxX);
  this->M[2][3] = fNearZ / (float)(fNearZ - fFarZ);
  this->M[1][3] = (float)(viewMinY + viewMaxY) / (float)(viewMinY - viewMaxY);
}

void __fastcall Scaleform::Render::Matrix4x4<float>::OrthoOffCenterRH(
        Scaleform::Render::Matrix4x4<float> *this,
        float viewMinX,
        float viewMaxX,
        float viewMinY,
        float viewMaxY,
        float fNearZ,
        float fFarZ)
{
  *(_OWORD *)&this->M[0][0] = 0ui64;
  *(_OWORD *)&this->M[1][0] = 0ui64;
  *(_OWORD *)&this->M[2][0] = 0ui64;
  *(_OWORD *)&this->M[3][0] = 0ui64;
  this->M[3][3] = 1.0;
  this->M[0][0] = 2.0 / (float)(viewMaxX - viewMinX);
  this->M[2][2] = 1.0 / (float)(fNearZ - fFarZ);
  this->M[1][1] = 2.0 / (float)(viewMaxY - viewMinY);
  this->M[0][3] = (float)(viewMinX + viewMaxX) / (float)(viewMinX - viewMaxX);
  this->M[2][3] = fNearZ / (float)(fNearZ - fFarZ);
  this->M[1][3] = (float)(viewMinY + viewMaxY) / (float)(viewMinY - viewMaxY);
}

void __fastcall Scaleform::Render::Matrix4x4<float>::PerspectiveOffCenterLH(
        Scaleform::Render::Matrix4x4<float> *this,
        float focalLength,
        float viewMinX,
        float viewMaxX,
        float viewMinY,
        float viewMaxY,
        float fNearZ,
        float fFarZ)
{
  *(_OWORD *)&this->M[0][0] = 0ui64;
  *(_OWORD *)&this->M[1][0] = 0ui64;
  *(_OWORD *)&this->M[2][0] = 0ui64;
  *(_OWORD *)&this->M[3][0] = 0ui64;
  this->M[3][2] = 1.0;
  this->M[0][0] = (float)(focalLength + focalLength) / (float)(viewMaxX - viewMinX);
  this->M[1][1] = (float)(focalLength + focalLength) / (float)(viewMaxY - viewMinY);
  this->M[2][2] = fFarZ / (float)(fFarZ - fNearZ);
  this->M[2][3] = (float)(fNearZ * fFarZ) / (float)(fNearZ - fFarZ);
  this->M[1][2] = (float)(viewMinY + viewMaxY) / (float)(viewMinY - viewMaxY);
  this->M[0][2] = (float)(viewMinX + viewMaxX) / (float)(viewMinX - viewMaxX);
}

void __fastcall Scaleform::Render::Matrix4x4<float>::PerspectiveOffCenterRH(
        Scaleform::Render::Matrix4x4<float> *this,
        float focalLength,
        float viewMinX,
        float viewMaxX,
        float viewMinY,
        float viewMaxY,
        float fNearZ,
        float fFarZ)
{
  *(_OWORD *)&this->M[0][0] = 0ui64;
  *(_OWORD *)&this->M[1][0] = 0ui64;
  *(_OWORD *)&this->M[2][0] = 0ui64;
  *(_OWORD *)&this->M[3][0] = 0ui64;
  this->M[3][2] = -1.0;
  this->M[0][0] = (float)(focalLength + focalLength) / (float)(viewMaxX - viewMinX);
  this->M[1][1] = (float)(focalLength + focalLength) / (float)(viewMaxY - viewMinY);
  this->M[2][3] = (float)(fNearZ * fFarZ) / (float)(fNearZ - fFarZ);
  this->M[0][2] = (float)(viewMinX + viewMaxX) / (float)(viewMaxX - viewMinX);
  this->M[2][2] = fFarZ / (float)(fNearZ - fFarZ);
  this->M[1][2] = (float)(viewMinY + viewMaxY) / (float)(viewMaxY - viewMinY);
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::Matrix2x4<float>::Prepend(
        Scaleform::Render::Matrix2x4<float> *this,
        const Scaleform::Render::Matrix2x4<float> *m)
{
  float v2; // xmm4_4
  float v3; // xmm5_4
  float v4; // xmm6_4
  float v5; // xmm8_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  Scaleform::Render::Matrix2x4<float> *result; // rax

  v2 = this->M[0][0];
  v3 = this->M[0][1];
  v4 = this->M[1][1];
  v5 = this->M[1][0];
  this->M[0][0] = (float)(this->M[0][0] * m->M[0][0]) + (float)(v3 * m->M[1][0]);
  this->M[1][0] = (float)(v5 * m->M[0][0]) + (float)(v4 * m->M[1][0]);
  this->M[0][1] = (float)(v3 * m->M[1][1]) + (float)(v2 * m->M[0][1]);
  v6 = v5 * m->M[0][1];
  v7 = v4 * m->M[1][1];
  this->M[1][2] = 0.0;
  this->M[0][2] = 0.0;
  result = this;
  this->M[1][1] = v6 + v7;
  this->M[0][3] = (float)((float)(v3 * m->M[1][3]) + (float)(v2 * m->M[0][3])) + this->M[0][3];
  this->M[1][3] = (float)((float)(v5 * m->M[0][3]) + (float)(v4 * m->M[1][3])) + this->M[1][3];
  return result;
}

void __fastcall Scaleform::GFx::MovieImpl::PrintObjectsReport(
        Scaleform::GFx::MovieImpl *this,
        __int64 flags,
        Scaleform::Log *log,
        const char *swfName,
        Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> *root,
        Scaleform::MemoryHeap *heap)
{
  Scaleform::AmpMovieObjectDesc *v7; // rdi

  this->pASMovieRoot.pObject->PrintObjectsReport(this->pASMovieRoot.pObject, flags, log, swfName);
  if ( root )
  {
    v7 = this->pASMovieRoot.pObject->GetDisplayObjectsTree(this->pASMovieRoot.pObject, heap);
    if ( root->pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)root->pObject);
    root->pObject = v7;
  }
}

void __fastcall Scaleform::GFx::MovieImpl::ProcessAccelerometer(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::GFx::InputEventsQueueEntry *qe)
{
  unsigned int WcharCode; // er8
  Scaleform::GFx::ASMovieRootBase *pObject; // rcx
  __int128 v4; // xmm0
  __int64 v5; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+28h] [rbp-40h]
  char v7; // [rsp+2Ch] [rbp-3Ch]
  int v8; // [rsp+30h] [rbp-38h]
  unsigned int v9; // [rsp+34h] [rbp-34h]
  __int128 v10; // [rsp+38h] [rbp-30h]
  __int128 v11; // [rsp+48h] [rbp-20h]

  WcharCode = qe->u.keyEntry.WcharCode;
  pObject = this->pASMovieRoot.pObject;
  v10 = *(_OWORD *)&qe->u.statusEntry.Level;
  v5 = 16777252i64;
  v4 = *(_OWORD *)&qe->u.statusEntry.ContextId;
  v6 = 0;
  v7 = 0;
  v11 = v4;
  v8 = 65280;
  v9 = WcharCode;
  ((void (__fastcall *)(Scaleform::GFx::ASMovieRootBase *, __int64 *))pObject->NotifyAccelerometerEvent)(pObject, &v5);
}

void __fastcall Scaleform::GFx::MovieImpl::ProcessFocusKey(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::Event::EventType event,
        const Scaleform::GFx::InputEventsQueueEntry::KeyEntry *keyEntry,
        Scaleform::GFx::ProcessFocusKeyInfo *pfocusInfo)
{
  unsigned int Code; // edx
  const Scaleform::GFx::InputEventsQueueEntry::KeyEntry *v5; // rbx
  Scaleform::GFx::FocusGroupDescr *pFocusGroup; // r15
  __int64 Size_low; // r13
  __int64 v10; // rdx
  __int64 CurFocusIdx; // rdi
  int v12; // er14
  __int64 v13; // rbx
  Scaleform::GFx::InteractiveObject *pObject; // rcx
  Scaleform::GFx::InteractiveObject *v15; // rcx
  Scaleform::GFx::InteractiveObject *v16; // rcx
  int v17; // eax
  Scaleform::GFx::InteractiveObject *v18; // rcx
  const Scaleform::Render::Rect<float> *v19; // rax
  unsigned int v20; // ecx
  float y2; // xmm1_4
  float x2; // xmm1_4
  unsigned int v23; // ecx
  float v24; // xmm9_4
  int v25; // edi
  char v26; // r15
  int v27; // er13
  float v28; // xmm7_4
  __int64 v29; // r14
  float v30; // xmm8_4
  double v31; // xmm6_8
  __int64 v32; // r12
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v33; // rbx
  Scaleform::GFx::InteractiveObject *v34; // rax
  Scaleform::GFx::DisplayObjectBase *v35; // rbx
  const Scaleform::Render::Rect<float> *v36; // rax
  float v37; // xmm15_4
  unsigned int v38; // eax
  float v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm14_4
  float v42; // xmm11_4
  float v43; // xmm13_4
  float v44; // xmm10_4
  float v45; // xmm2_4
  float v46; // xmm1_4
  float v47; // xmm7_4
  float v48; // xmm1_4
  float v49; // xmm12_4
  float v50; // xmm8_4
  float v51; // xmm0_4
  double v52; // xmm1_8
  double v53; // xmm1_8
  float v54; // xmm6_4
  float v55; // xmm9_4
  float v56; // xmm8_4
  float v57; // xmm6_4
  bool v58; // cc
  float v59; // xmm2_4
  float v60; // xmm8_4
  float v61; // xmm12_4
  float v62; // xmm0_4
  float v63; // xmm0_4
  double v64; // xmm1_8
  double v65; // xmm1_8
  float v66; // xmm6_4
  float v67; // xmm9_4
  int v68; // edi
  float v69; // xmm6_4
  char v70; // r15
  int v71; // er13
  float v72; // xmm8_4
  __int64 v73; // r14
  float v74; // xmm10_4
  double v75; // xmm7_8
  __int64 v76; // r12
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *Data; // rbx
  Scaleform::GFx::InteractiveObject *v78; // rax
  Scaleform::GFx::DisplayObjectBase *v79; // rbx
  const Scaleform::Render::Rect<float> *v80; // rax
  float v81; // xmm15_4
  unsigned int v82; // eax
  float v83; // xmm1_4
  float v84; // xmm2_4
  float v85; // xmm12_4
  float v86; // xmm13_4
  float y1; // xmm11_4
  float x1; // xmm14_4
  float v89; // xmm2_4
  float v90; // xmm1_4
  float v91; // xmm8_4
  float v92; // xmm2_4
  float v93; // xmm10_4
  float v94; // xmm0_4
  float v95; // xmm0_4
  double v96; // xmm1_8
  double v97; // xmm1_8
  float v98; // xmm6_4
  float v99; // xmm7_4
  float v100; // xmm9_4
  float v101; // xmm6_4
  float v102; // xmm10_4
  float v103; // xmm2_4
  bool v104; // cc
  float v105; // xmm1_4
  float v106; // xmm2_4
  float v107; // xmm10_4
  float v108; // xmm0_4
  double v109; // xmm1_8
  double v110; // xmm1_8
  float v111; // xmm7_4
  float v112; // xmm6_4
  __int64 v113; // rax
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v114; // rdi
  __int64 v115; // rbx
  Scaleform::GFx::InteractiveObject *v116; // rax
  Scaleform::GFx::InteractiveObject *v117; // rcx
  Scaleform::GFx::InteractiveObject *v118; // rcx
  float v119; // [rsp+30h] [rbp-D0h]
  float v120; // [rsp+30h] [rbp-D0h]
  float v121; // [rsp+40h] [rbp-C0h]
  float v122; // [rsp+40h] [rbp-C0h]
  float v123; // [rsp+48h] [rbp-B8h]
  float v124; // [rsp+48h] [rbp-B8h]
  float v125; // [rsp+50h] [rbp-B0h]
  float v126; // [rsp+50h] [rbp-B0h]
  int Size; // [rsp+60h] [rbp-A0h]
  Scaleform::GFx::FocusGroupDescr *v128; // [rsp+68h] [rbp-98h]
  __int64 v130; // [rsp+78h] [rbp-88h]
  Scaleform::Render::Rect<float> pr; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::Render::Rect<float> v133; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::Render::Matrix2x4<float> v134; // [rsp+B0h] [rbp-50h] BYREF
  char v135[16]; // [rsp+D0h] [rbp-30h] BYREF
  Scaleform::Render::Matrix2x4<float> pmat; // [rsp+E0h] [rbp-20h] BYREF

  if ( event != KeyDown )
    return;
  Code = keyEntry->Code;
  v5 = keyEntry;
  if ( Code != 9
    && (!this->FocusGroups[this->FocusGroupIndexes[keyEntry->KeyboardIndex]].FocusRectShown && !pfocusInfo->ManualFocus
     || Code - 37 > 3) )
  {
    return;
  }
  Scaleform::GFx::MovieImpl::InitFocusKeyInfo(this, pfocusInfo, keyEntry, 0, 0i64);
  pFocusGroup = pfocusInfo->pFocusGroup;
  v128 = pfocusInfo->pFocusGroup;
  Size_low = SLODWORD(pfocusInfo->pFocusGroup->TabableArray.Data.Size);
  v10 = Size_low;
  Size = pfocusInfo->pFocusGroup->TabableArray.Data.Size;
  v130 = Size_low;
  if ( v5->Code == 9 )
  {
    CurFocusIdx = pfocusInfo->CurFocusIdx;
    v12 = 0;
    pfocusInfo->CurFocusIdx = -1;
    if ( (int)Size_low <= 0 )
      goto LABEL_164;
    v13 = CurFocusIdx;
    while ( 1 )
    {
      if ( (keyEntry->KeysState & 1) != 0 )
      {
        LODWORD(CurFocusIdx) = CurFocusIdx - 1;
        if ( --v13 < 0 )
        {
          LODWORD(CurFocusIdx) = Size_low - 1;
          v13 = v10 - 1;
        }
      }
      else
      {
        LODWORD(CurFocusIdx) = CurFocusIdx + 1;
        if ( ++v13 >= v10 )
        {
          LODWORD(CurFocusIdx) = 0;
          v13 = 0i64;
        }
      }
      pObject = pFocusGroup->TabableArray.Data.Data[v13].pObject;
      if ( pObject )
      {
        if ( pfocusInfo->InclFocusEnabled || pObject->IsTabable(pObject) )
        {
          v15 = pFocusGroup->TabableArray.Data.Data[v13].pObject;
          if ( v15->IsFocusAllowed(v15, this, pfocusInfo->KeyboardIndex) )
          {
            pfocusInfo->CurFocusIdx = CurFocusIdx;
            goto LABEL_164;
          }
        }
        v10 = Size_low;
      }
      if ( ++v12 >= (int)Size_low )
        goto LABEL_164;
    }
  }
  v16 = pfocusInfo->CurFocused.pObject;
  if ( !v16 )
    goto LABEL_164;
  if ( !v16->IsFocusRectEnabled(v16) )
  {
    v17 = HIBYTE(this->Flags) & 3;
    if ( v17 == 3 )
      v17 = -1;
    if ( v17 != 1 && !pfocusInfo->ManualFocus )
      goto LABEL_164;
  }
  v18 = pfocusInfo->CurFocused.pObject;
  *(_OWORD *)&pmat.M[0][0] = _xmm;
  *(_OWORD *)&pmat.M[1][0] = _xmm;
  Scaleform::GFx::DisplayObjectBase::GetLevelMatrix(v18, &pmat);
  v19 = pfocusInfo->CurFocused.pObject->GetFocusRect(pfocusInfo->CurFocused.pObject, &v133);
  Scaleform::Render::Matrix2x4<float>::EncloseTransform(&pmat, &pr, v19);
  v20 = v5->Code;
  if ( pfocusInfo->PrevKeyCode == v20 )
  {
    if ( ((v20 - 38) & 0xFFFFFFFD) != 0 )
    {
      if ( ((v20 - 37) & 0xFFFFFFFD) == 0 )
      {
        y2 = pfocusInfo->Prev_aRect.y2;
        pr.y1 = pfocusInfo->Prev_aRect.y1;
        pr.y2 = y2;
      }
    }
    else
    {
      x2 = pfocusInfo->Prev_aRect.x2;
      pr.x1 = pfocusInfo->Prev_aRect.x1;
      pr.x2 = x2;
    }
  }
  else
  {
    pfocusInfo->Prev_aRect = pr;
    pfocusInfo->PrevKeyCode = v5->Code;
  }
  v23 = v5->Code;
  if ( ((v23 - 37) & 0xFFFFFFFD) == 0 )
  {
    v67 = FLOAT_2_1474836e9;
    v68 = pfocusInfo->CurFocusIdx;
    v122 = FLOAT_2_1474836e9;
    if ( v23 == 39 )
      v69 = FLOAT_2_1474836e9;
    else
      v69 = FLOAT_N2_1474836e9;
    v70 = 0;
    v120 = v69;
    v71 = Size_low - 1;
    v126 = v69;
    v124 = FLOAT_2_1474836e9;
    if ( v71 <= 0 )
    {
LABEL_163:
      LODWORD(Size_low) = Size;
      pFocusGroup = v128;
      goto LABEL_164;
    }
    v72 = *(float *)&FLOAT_1_0;
    v73 = pfocusInfo->CurFocusIdx;
    v74 = FLOAT_0_5;
    v75 = DOUBLE_0_5;
    v76 = (unsigned int)v71;
    while ( 1 )
    {
      if ( v5->Code == 39 )
      {
        ++v68;
        ++v73;
      }
      else
      {
        --v68;
        --v73;
      }
      if ( v73 < v130 )
      {
        if ( v68 < 0 )
        {
          v68 = v71;
          v73 = v130 - 1;
        }
      }
      else
      {
        v68 = 0;
        v73 = 0i64;
      }
      Data = v128->TabableArray.Data.Data;
      v78 = Data[v73].pObject;
      if ( v78 )
        ++v78->RefCount;
      v79 = Data[v73].pObject;
      if ( pfocusInfo->InclFocusEnabled
        || ((unsigned __int8 (__fastcall *)(Scaleform::GFx::DisplayObjectBase *))v79->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable[1].SetMatrix3D)(v79) )
      {
        if ( ((unsigned __int8 (__fastcall *)(Scaleform::GFx::DisplayObjectBase *, Scaleform::GFx::MovieImpl *, _QWORD))v79->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable[1].SetMatrix)(
               v79,
               this,
               pfocusInfo->KeyboardIndex) )
        {
          break;
        }
      }
      Scaleform::RefCountNTSImpl::Release(v79);
LABEL_162:
      v5 = keyEntry;
      if ( !--v76 )
        goto LABEL_163;
    }
    *(_OWORD *)&v134.M[0][0] = _xmm;
    *(_OWORD *)&v134.M[1][0] = _xmm;
    Scaleform::GFx::DisplayObjectBase::GetLevelMatrix(v79, &v134);
    v80 = (const Scaleform::Render::Rect<float> *)((__int64 (__fastcall *)(Scaleform::GFx::DisplayObjectBase *, char *))v79->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable[1].ClearViewMatrix3D)(
                                                    v79,
                                                    v135);
    Scaleform::Render::Matrix2x4<float>::EncloseTransform(&v134, &v133, v80);
    v81 = pr.x2;
    v82 = keyEntry->Code;
    if ( v82 == 39 )
    {
      v83 = FLOAT_3_4028235e38;
      v84 = pr.x2 + v72;
    }
    else
    {
      v84 = FLOAT_1_1754944eN38;
      v83 = pr.x1 - v72;
    }
    v85 = v133.y2;
    v86 = v133.x2;
    y1 = v133.y1;
    x1 = v133.x1;
    if ( v133.y2 < pr.y1 || pr.y2 < v133.y1 || v83 < v133.x1 || v133.x2 < v84 )
      goto LABEL_132;
    v89 = v133.y1;
    v90 = v133.y2;
    if ( v133.y1 <= pr.y1 )
      v89 = pr.y1;
    if ( v133.y2 > pr.y2 )
      v90 = pr.y2;
    if ( (float)(v90 - v89) < 40.0 )
    {
LABEL_132:
      if ( v70 )
      {
        Scaleform::RefCountNTSImpl::Release(v79);
        goto LABEL_161;
      }
    }
    else if ( !v70 )
    {
      v69 = v133.x2;
      v126 = v133.x1;
      v120 = v133.x2;
      v124 = v133.y1;
      v67 = v133.y2;
      v122 = v133.y2;
      v70 = 1;
      pfocusInfo->CurFocusIdx = v68;
      Scaleform::RefCountNTSImpl::Release(v79);
LABEL_161:
      v72 = *(float *)&FLOAT_1_0;
      goto LABEL_162;
    }
    v91 = (float)((float)(pr.y2 - pr.y1) * v74) + pr.y1;
    if ( v82 == 39 )
    {
      v92 = fmaxf(pr.x2, v133.x1);
      v93 = fmaxf(pr.x2, v126);
      v94 = fminf(v133.x2, v133.x2);
      if ( v94 >= v92 && v133.y2 >= v133.y1 )
      {
        v95 = (float)(v94 - v92) * 0.050000001;
        v96 = v95;
        v97 = v95 <= 0.0 ? v96 - v75 : v96 + v75;
        if ( (int)v97 > 3 )
        {
          v98 = (float)((float)(v133.y2 - v133.y1) * 0.5) + v133.y1;
          v99 = (float)((float)(v67 - v124) * 0.5) + v124;
          v100 = floorf((float)(v92 - pr.x2) * 0.050000001);
          v101 = floorf((float)(v98 - v91) * 0.050000001);
          v102 = floorf((float)(v93 - v81) * 0.050000001);
          v103 = floorf((float)(v99 - v91) * 0.050000001);
          v104 = v100 >= 0.0;
          goto LABEL_142;
        }
      }
    }
    else
    {
      v105 = fmaxf(v133.x1, v133.x1);
      v106 = fminf(pr.x1, v133.x2);
      v107 = fminf(pr.x1, v69);
      if ( v106 >= v105 && v133.y2 >= v133.y1 )
      {
        v108 = (float)(v106 - v105) * 0.050000001;
        v109 = v108;
        v110 = v108 <= 0.0 ? v109 - v75 : v109 + v75;
        if ( (int)v110 > 3 )
        {
          v111 = (float)((float)(v67 - v124) * 0.5) + v124;
          v112 = (float)((float)(v133.y2 - v133.y1) * 0.5) + v133.y1;
          v100 = floorf((float)(v106 - pr.x1) * 0.050000001);
          v101 = floorf((float)(v112 - v91) * 0.050000001);
          v102 = floorf((float)(v107 - pr.x1) * 0.050000001);
          v104 = v100 <= 0.0;
          v103 = floorf((float)(v111 - v91) * 0.050000001);
LABEL_142:
          if ( !v104 )
          {
            Scaleform::RefCountNTSImpl::Release(v79);
            v69 = v120;
            v75 = DOUBLE_0_5;
            v67 = v122;
LABEL_160:
            v74 = FLOAT_0_5;
            goto LABEL_161;
          }
          if ( v70 )
          {
            if ( COERCE_FLOAT(LODWORD(v102) & _xmm) <= COERCE_FLOAT(LODWORD(v100) & _xmm)
              && (v100 != v102 || COERCE_FLOAT(LODWORD(v103) & _xmm) <= COERCE_FLOAT(LODWORD(v101) & _xmm)) )
            {
              goto LABEL_155;
            }
          }
          else if ( (float)((float)(v103 * v103) + (float)(v102 * v102)) <= (float)((float)(v101 * v101)
                                                                                  + (float)(v100 * v100)) )
          {
LABEL_155:
            v67 = v122;
            v69 = v120;
LABEL_156:
            Scaleform::RefCountNTSImpl::Release(v79);
            v75 = DOUBLE_0_5;
            goto LABEL_160;
          }
          v69 = v86;
          v126 = x1;
          v120 = v86;
          v67 = v85;
          v124 = y1;
          v122 = v85;
          pfocusInfo->CurFocusIdx = v68;
          goto LABEL_156;
        }
      }
    }
    Scaleform::RefCountNTSImpl::Release(v79);
    goto LABEL_160;
  }
  if ( ((v23 - 38) & 0xFFFFFFFD) == 0 )
  {
    v24 = FLOAT_2_1474836e9;
    v25 = pfocusInfo->CurFocusIdx;
    v123 = 0.0;
    v125 = 0.0;
    v119 = FLOAT_2_1474836e9;
    if ( v23 == 40 )
      v121 = FLOAT_2_1474836e9;
    else
      v121 = FLOAT_N2_1474836e9;
    v26 = 0;
    v27 = Size_low - 1;
    if ( v27 > 0 )
    {
      v28 = *(float *)&FLOAT_1_0;
      v29 = pfocusInfo->CurFocusIdx;
      v30 = FLOAT_0_5;
      v31 = DOUBLE_0_5;
      v32 = (unsigned int)v27;
      while ( 1 )
      {
        if ( v5->Code == 40 )
        {
          ++v25;
          ++v29;
        }
        else
        {
          --v25;
          --v29;
        }
        if ( v29 < v130 )
        {
          if ( v25 < 0 )
          {
            v25 = v27;
            v29 = v130 - 1;
          }
        }
        else
        {
          v25 = 0;
          v29 = 0i64;
        }
        v33 = v128->TabableArray.Data.Data;
        v34 = v33[v29].pObject;
        if ( v34 )
          ++v34->RefCount;
        v35 = v33[v29].pObject;
        if ( pfocusInfo->InclFocusEnabled
          || ((unsigned __int8 (__fastcall *)(Scaleform::GFx::DisplayObjectBase *))v35->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable[1].SetMatrix3D)(v35) )
        {
          if ( ((unsigned __int8 (__fastcall *)(Scaleform::GFx::DisplayObjectBase *, Scaleform::GFx::MovieImpl *, _QWORD))v35->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable[1].SetMatrix)(
                 v35,
                 this,
                 pfocusInfo->KeyboardIndex) )
          {
            break;
          }
        }
        Scaleform::RefCountNTSImpl::Release(v35);
LABEL_98:
        v5 = keyEntry;
        if ( !--v32 )
          goto LABEL_163;
      }
      *(_OWORD *)&v134.M[0][0] = _xmm;
      *(_OWORD *)&v134.M[1][0] = _xmm;
      Scaleform::GFx::DisplayObjectBase::GetLevelMatrix(v35, &v134);
      v36 = (const Scaleform::Render::Rect<float> *)((__int64 (__fastcall *)(Scaleform::GFx::DisplayObjectBase *, char *))v35->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable[1].ClearViewMatrix3D)(
                                                      v35,
                                                      v135);
      Scaleform::Render::Matrix2x4<float>::EncloseTransform(&v134, &v133, v36);
      v37 = pr.y1;
      v38 = keyEntry->Code;
      if ( v38 == 40 )
      {
        v39 = FLOAT_3_4028235e38;
        v40 = pr.y2 + v28;
      }
      else
      {
        v40 = FLOAT_1_1754944eN38;
        v39 = pr.y1 - v28;
      }
      v41 = v133.y2;
      v42 = v133.x2;
      v43 = v133.y1;
      v44 = v133.x1;
      if ( v133.y2 < v40 || v39 < v133.y1 || pr.x2 < v133.x1 || v133.x2 < pr.x1 )
        goto LABEL_68;
      v45 = v133.x1;
      v46 = v133.x2;
      if ( v133.x1 <= pr.x1 )
        v45 = pr.x1;
      if ( v133.x2 > pr.x2 )
        v46 = pr.x2;
      if ( (float)(v46 - v45) < 40.0 )
      {
LABEL_68:
        if ( v26 )
        {
          Scaleform::RefCountNTSImpl::Release(v35);
          goto LABEL_97;
        }
      }
      else if ( !v26 )
      {
        v119 = v133.x1;
        v121 = v133.y1;
        v24 = v133.x1;
        v123 = v133.x2;
        v26 = 1;
        v125 = v133.y2;
        pfocusInfo->CurFocusIdx = v25;
        Scaleform::RefCountNTSImpl::Release(v35);
LABEL_97:
        v28 = *(float *)&FLOAT_1_0;
        goto LABEL_98;
      }
      v47 = (float)((float)(pr.x2 - pr.x1) * v30) + pr.x1;
      if ( v38 == 38 )
      {
        v48 = fmaxf(v133.y1, v133.y1);
        v49 = fminf(pr.y1, v125);
        v50 = fminf(pr.y1, v133.y2);
        if ( v133.x2 >= v133.x1 && v50 >= v48 )
        {
          v51 = (float)(v50 - v48) * 0.050000001;
          v52 = v51;
          v53 = v51 <= 0.0 ? v52 - v31 : v52 + v31;
          if ( (int)v53 > 3 )
          {
            v54 = (float)((float)(v123 - v24) * 0.5) + v24;
            v55 = floorf((float)((float)((float)((float)(v133.x2 - v133.x1) * 0.5) + v133.x1) - v47) * 0.050000001);
            v56 = floorf((float)(v50 - v37) * 0.050000001);
            v57 = floorf((float)(v54 - v47) * 0.050000001);
            v58 = v56 <= 0.0;
            v59 = floorf((float)(v49 - v37) * 0.050000001);
            goto LABEL_78;
          }
        }
      }
      else
      {
        v60 = fmaxf(pr.y2, v133.y1);
        v61 = fmaxf(pr.y2, v121);
        v62 = fminf(v133.y2, v133.y2);
        if ( v133.x2 >= v133.x1 && v62 >= v60 )
        {
          v63 = (float)(v62 - v60) * 0.050000001;
          v64 = v63;
          v65 = v63 <= 0.0 ? v64 - v31 : v64 + v31;
          if ( (int)v65 > 3 )
          {
            v66 = (float)((float)(v123 - v24) * 0.5) + v24;
            v55 = floorf((float)((float)((float)((float)(v133.x2 - v133.x1) * 0.5) + v133.x1) - v47) * 0.050000001);
            v56 = floorf((float)(v60 - pr.y2) * 0.050000001);
            v57 = floorf((float)(v66 - v47) * 0.050000001);
            v59 = floorf((float)(v61 - pr.y2) * 0.050000001);
            v58 = v56 >= 0.0;
LABEL_78:
            if ( !v58 )
            {
              Scaleform::RefCountNTSImpl::Release(v35);
              v31 = DOUBLE_0_5;
              v24 = v119;
LABEL_96:
              v30 = FLOAT_0_5;
              goto LABEL_97;
            }
            if ( v26 )
            {
              if ( COERCE_FLOAT(LODWORD(v59) & _xmm) <= COERCE_FLOAT(LODWORD(v56) & _xmm)
                && (v56 != v59 || COERCE_FLOAT(LODWORD(v57) & _xmm) <= COERCE_FLOAT(LODWORD(v55) & _xmm)) )
              {
                goto LABEL_91;
              }
            }
            else if ( (float)((float)(v59 * v59) + (float)(v57 * v57)) <= (float)((float)(v56 * v56) + (float)(v55 * v55)) )
            {
LABEL_91:
              v24 = v119;
LABEL_92:
              Scaleform::RefCountNTSImpl::Release(v35);
              v31 = DOUBLE_0_5;
              goto LABEL_96;
            }
            v119 = v44;
            v24 = v44;
            v121 = v43;
            v123 = v42;
            v125 = v41;
            pfocusInfo->CurFocusIdx = v25;
            goto LABEL_92;
          }
        }
      }
      Scaleform::RefCountNTSImpl::Release(v35);
      goto LABEL_96;
    }
    goto LABEL_163;
  }
LABEL_164:
  v113 = pfocusInfo->CurFocusIdx;
  if ( (int)v113 < 0 || (int)v113 >= (int)Size_low )
  {
    v118 = pfocusInfo->CurFocused.pObject;
    if ( v118 )
      Scaleform::RefCountNTSImpl::Release(v118);
    pfocusInfo->CurFocused.pObject = 0i64;
  }
  else
  {
    v114 = pFocusGroup->TabableArray.Data.Data;
    v115 = pfocusInfo->CurFocusIdx;
    v116 = v114[v113].pObject;
    if ( v116 )
      ++v116->RefCount;
    v117 = pfocusInfo->CurFocused.pObject;
    if ( v117 )
      Scaleform::RefCountNTSImpl::Release(v117);
    pfocusInfo->CurFocused = v114[v115];
  }
}

void __fastcall Scaleform::GFx::MovieImpl::ProcessGeolocation(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::GFx::InputEventsQueueEntry *qe)
{
  unsigned int WcharCode; // er8
  Scaleform::GFx::ASMovieRootBase *pObject; // rcx
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  __int64 v6; // [rsp+20h] [rbp-68h] BYREF
  int v7; // [rsp+28h] [rbp-60h]
  char v8; // [rsp+2Ch] [rbp-5Ch]
  int v9; // [rsp+30h] [rbp-58h]
  unsigned int v10; // [rsp+34h] [rbp-54h]
  __int128 v11; // [rsp+38h] [rbp-50h]
  __int128 v12; // [rsp+48h] [rbp-40h]
  __int128 v13; // [rsp+58h] [rbp-30h]
  __int128 v14; // [rsp+68h] [rbp-20h]

  WcharCode = qe->u.keyEntry.WcharCode;
  pObject = this->pASMovieRoot.pObject;
  v11 = *(_OWORD *)&qe->u.statusEntry.Level;
  v6 = 16777253i64;
  v4 = *(_OWORD *)&qe->u.statusEntry.ContextId;
  v7 = 0;
  v8 = 0;
  v12 = v4;
  v9 = 65280;
  v5 = *(_OWORD *)((char *)&qe->u.statusEntry + 40);
  v10 = WcharCode;
  v13 = v5;
  v14 = *(_OWORD *)((char *)&qe->u.statusEntry + 56);
  ((void (__fastcall *)(Scaleform::GFx::ASMovieRootBase *, __int64 *))pObject->NotifyGeolocationEvent)(pObject, &v6);
}

void __fastcall Scaleform::GFx::MovieImpl::ProcessInput(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::ASMovieRootBase *pObject; // rax
  unsigned int MouseCursorCount; // ecx
  bool v4; // r13
  int v5; // er14
  int v6; // esi
  Scaleform::GFx::InputEventsQueueEntry *Entry; // rdx
  Scaleform::GFx::InputEventsQueueEntry::QueueEntryType t; // eax
  int Code; // xmm0_4
  int PosY_low; // xmm1_4
  Scaleform::GFx::ASMovieRootBase *v11; // rcx
  float x; // er12
  __int64 i; // rdi
  char *v14; // r15
  float v15; // xmm1_4
  Scaleform::GFx::InteractiveObject *TopMostEntity; // rax
  Scaleform::GFx::InteractiveObject *v17; // rsi
  Scaleform::GFx::InteractiveObject *v18; // rcx
  Scaleform::Render::Point<float> miceProceededMask; // [rsp+38h] [rbp-49h] BYREF
  __int64 v20; // [rsp+40h] [rbp-41h] BYREF
  int IdAcc; // [rsp+48h] [rbp-39h]
  char v22; // [rsp+4Ch] [rbp-35h]
  char v23; // [rsp+50h] [rbp-31h]
  unsigned __int8 MouseIndex; // [rsp+51h] [rbp-30h]
  __int16 v25; // [rsp+52h] [rbp-2Fh]
  int v26; // [rsp+54h] [rbp-2Dh]
  int v27; // [rsp+58h] [rbp-29h]
  Scaleform::GFx::ProcessFocusKeyInfo focusKeyInfo; // [rsp+68h] [rbp-19h] BYREF

  if ( this->pMainMovie )
  {
    pObject = this->pASMovieRoot.pObject;
    MouseCursorCount = this->MouseCursorCount;
    v4 = pObject->AVMVersion == 2;
    v5 = 1;
    *(_OWORD *)&focusKeyInfo.pFocusGroup = 0i64;
    v6 = (1 << MouseCursorCount) - 1;
    focusKeyInfo.CurFocusIdx = -1;
    memset(&focusKeyInfo.Prev_aRect, 0, 29);
    miceProceededMask.x = 0.0;
    while ( this->InputEventsQueue.UsedEntries || this->InputEventsQueue.LastMousePosMask )
    {
      Entry = Scaleform::GFx::InputEventsQueue::GetEntry(&this->InputEventsQueue);
      t = Entry->t;
      if ( Entry->t == QE_Key )
      {
        Scaleform::GFx::MovieImpl::ProcessKeyboard(this, Entry, &focusKeyInfo);
      }
      else if ( t )
      {
        switch ( t )
        {
          case QE_AnalogGamePad:
            Code = Entry->u.keyEntry.Code;
            PosY_low = LODWORD(Entry->u.touchEntry.PosY);
            v11 = this->pASMovieRoot.pObject;
            IdAcc = Entry->u.accelerometerEntry.IdAcc;
            MouseIndex = Entry->u.mouseEntry.MouseIndex;
            v26 = Code;
            v27 = PosY_low;
            v20 = 16777251i64;
            v22 = 0;
            v23 = 0;
            v25 = 0;
            v11->NotifyGamePadAnalogEvent(v11, (const Scaleform::GFx::EventId *)&v20);
            break;
          case QE_Status:
            Scaleform::GFx::MovieImpl::ProcessStatus(this, Entry);
            break;
          case QE_Accelerometer:
            Scaleform::GFx::MovieImpl::ProcessAccelerometer(this, Entry);
            break;
          case QE_Geolocation:
            Scaleform::GFx::MovieImpl::ProcessGeolocation(this, Entry);
            break;
        }
      }
      else
      {
        Scaleform::GFx::MovieImpl::ProcessMouse(this, Entry, (unsigned int *)&miceProceededMask, v4);
      }
    }
    if ( (this->Flags & 0x80) != 0 )
    {
      x = miceProceededMask.x;
      if ( (LODWORD(miceProceededMask.x) & v6) != v6 )
      {
        for ( i = 0i64; (unsigned int)i < this->MouseCursorCount; v5 *= 2 )
        {
          if ( (v5 & LODWORD(x)) == 0 && (*((_BYTE *)&this->mMouseState[i] + 76) & 0x10) != 0 )
          {
            v14 = (char *)this + 80 * i;
            *((_DWORD *)v14 + 2189) = *((_DWORD *)v14 + 2188);
            v15 = *((float *)v14 + 2191);
            miceProceededMask.x = *((float *)v14 + 2190);
            miceProceededMask.y = v15;
            TopMostEntity = Scaleform::GFx::MovieImpl::GetTopMostEntity(this, &miceProceededMask, i, v4, 0i64);
            v17 = TopMostEntity;
            if ( TopMostEntity )
              ++TopMostEntity->RefCount;
            Scaleform::GFx::MouseState::SetTopmostEntity((Scaleform::GFx::MouseState *)(v14 + 8704), TopMostEntity);
            Scaleform::GFx::MovieImpl::CheckMouseCursorType(this, i, v17);
            this->pASMovieRoot.pObject->GenerateMouseEvents(this->pASMovieRoot.pObject, i);
            if ( v17 )
              Scaleform::RefCountNTSImpl::Release(v17);
          }
          i = (unsigned int)(i + 1);
        }
      }
    }
    Scaleform::GFx::MovieImpl::FinalizeProcessFocusKey(this, &focusKeyInfo);
    v18 = focusKeyInfo.CurFocused.pObject;
    this->Flags &= ~0x80u;
    if ( v18 )
      Scaleform::RefCountNTSImpl::Release(v18);
  }
}

void __fastcall Scaleform::GFx::MovieImpl::ProcessKeyboard(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::GFx::InputEventsQueueEntry *qe,
        Scaleform::GFx::ProcessFocusKeyInfo *focusKeyInfo)
{
  Scaleform::GFx::KeyboardState *v3; // rbp
  Scaleform::GFx::InputEventsQueueEntry::Entry *p_u; // rdi
  unsigned int Code; // ecx
  unsigned __int8 Flags; // al
  unsigned __int8 v9; // dl
  unsigned __int8 AsciiCode; // cl
  int v11; // er14
  unsigned __int8 v12; // al
  int Size; // esi
  Scaleform::GFx::InteractiveObject *pObject; // rcx
  __int64 KeyboardIndex; // rax
  unsigned int v16; // eax
  char *v17; // rsi
  __int64 v18; // rdx
  Scaleform::RefCountNTSImpl *v19; // rbx
  int RefCount; // eax
  Scaleform::RefCountNTSImpl *v21; // rcx
  Scaleform::GFx::EventId evt; // [rsp+20h] [rbp-38h] BYREF
  int keyMask; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0i64;
  p_u = &qe->u;
  keyMask = 0;
  Code = qe->u.keyEntry.Code;
  if ( Code )
  {
    Flags = qe->u.mouseEntry.Flags;
    v9 = 0x80;
    evt.KeyCode = Code;
    AsciiCode = p_u->keyEntry.AsciiCode;
    if ( Flags )
      v9 = 64;
    evt.AsciiCode = p_u->keyEntry.AsciiCode;
    evt.Id = v9;
    v11 = -(Flags != 0);
    evt.WcharCode = p_u->keyEntry.WcharCode;
    evt.ControllerIndex = p_u->mouseEntry.WheelScrollDelta;
    v12 = p_u->keyEntry.KeysState | 0x80;
    evt.RollOverCnt = 0;
    evt.MouseWheelDelta = 0;
    evt.KeysState.States = v12;
    if ( !AsciiCode )
      evt.AsciiCode = Scaleform::GFx::EventId::ConvertKeyCodeToAscii(&evt);
    Size = this->MovieLevels.Data.Size;
    while ( Size )
    {
      pObject = this->MovieLevels.Data.Data[--Size].pSprite.pObject;
      pObject->PropagateKeyEvent(pObject, &evt, &keyMask);
    }
    KeyboardIndex = p_u->keyEntry.KeyboardIndex;
    if ( (unsigned int)KeyboardIndex < 6 )
      v3 = &this->KeyboardStates[KeyboardIndex];
    Scaleform::GFx::KeyboardState::NotifyListeners(v3, this->pMainMovie, &evt, (unsigned int)keyMask);
    v16 = this->Flags >> 30;
    if ( v16 == 3 )
      v16 = -1;
    if ( v16 != 1 )
      Scaleform::GFx::MovieImpl::ProcessFocusKey(
        this,
        (Scaleform::GFx::Event::EventType)(v11 + 6),
        (const Scaleform::GFx::InputEventsQueueEntry::KeyEntry *)p_u,
        focusKeyInfo);
  }
  else if ( p_u->keyEntry.WcharCode )
  {
    v17 = (char *)this + 96 * this->FocusGroupIndexes[qe->u.keyEntry.KeyboardIndex];
    v18 = *((_QWORD *)v17 + 2459);
    if ( v18 )
    {
      v19 = *(Scaleform::RefCountNTSImpl **)(v18 + 8);
      if ( v19 )
      {
        RefCount = v19->RefCount;
        if ( RefCount )
        {
          v21 = *(Scaleform::RefCountNTSImpl **)(v18 + 8);
          v19->RefCount = RefCount + 1;
          ++v19->RefCount;
          Scaleform::RefCountNTSImpl::Release(v21);
          ((void (__fastcall *)(Scaleform::RefCountNTSImpl *, _QWORD, _QWORD))v19->__vftable[97].~RefCountNTSImplCore)(
            v19,
            p_u->keyEntry.WcharCode,
            p_u->keyEntry.KeyboardIndex);
          Scaleform::RefCountNTSImpl::Release(v19);
        }
      }
      else
      {
        if ( (*(_DWORD *)v18)-- == 1 )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        *((_QWORD *)v17 + 2459) = 0i64;
      }
    }
  }
}

void __fastcall Scaleform::GFx::MovieImpl::ProcessLoadQueue(Scaleform::GFx::MovieImpl *this)
{
  unsigned int LastLoadQueueEntryCnt; // ebp
  Scaleform::GFx::LoadQueueEntry *pLoadQueueHead; // rbx
  Scaleform::GFx::LoadStates *v4; // rax
  Scaleform::GFx::StateBagImpl *pObject; // r9
  Scaleform::GFx::StateBag *v6; // r8
  Scaleform::GFx::LoadStates *v7; // rax
  Scaleform::GFx::LoadStates *v8; // rsi
  Scaleform::GFx::LoadQueueEntryMT *pLoadQueueMTHead; // rbx
  Scaleform::GFx::LoadQueueEntryMT *v10; // rbx
  Scaleform::GFx::LoadQueueEntryMT *pNext; // rsi
  Scaleform::GFx::LoadQueueEntryMT *pPrev; // rax

  LastLoadQueueEntryCnt = this->LastLoadQueueEntryCnt;
  while ( this->pLoadQueueHead )
  {
    pLoadQueueHead = this->pLoadQueueHead;
    if ( pLoadQueueHead->EntryTime > LastLoadQueueEntryCnt )
      break;
    this->pLoadQueueHead = pLoadQueueHead->pNext;
    v4 = (Scaleform::GFx::LoadStates *)Scaleform::Memory::pGlobalHeap->Alloc(
                                         Scaleform::Memory::pGlobalHeap,
                                         144i64,
                                         0i64);
    if ( v4 )
    {
      pObject = this->pStateBag.pObject;
      v6 = &pObject->Scaleform::GFx::StateBag;
      if ( !pObject )
        v6 = 0i64;
      Scaleform::GFx::LoadStates::LoadStates(v4, this->pMainMovieDef.pObject->pLoaderImpl.pObject, v6, 0i64);
      v8 = v7;
    }
    else
    {
      v8 = 0i64;
    }
    this->pASMovieRoot.pObject->ProcessLoadQueueEntry(this->pASMovieRoot.pObject, pLoadQueueHead, v8);
    ((void (__fastcall *)(Scaleform::GFx::LoadQueueEntry *, __int64))pLoadQueueHead->~LoadQueueEntry)(
      pLoadQueueHead,
      1i64);
    if ( v8 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v8);
  }
  pLoadQueueMTHead = this->pLoadQueueMTHead;
  if ( pLoadQueueMTHead )
  {
    while ( pLoadQueueMTHead->IsPreloadingFinished(pLoadQueueMTHead) )
    {
      pLoadQueueMTHead = pLoadQueueMTHead->pNext;
      if ( !pLoadQueueMTHead )
        goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    v10 = this->pLoadQueueMTHead;
    while ( v10 )
    {
      if ( v10->LoadFinished(v10) )
      {
        pNext = v10->pNext;
        if ( pNext )
          pNext->pPrev = v10->pPrev;
        pPrev = v10->pPrev;
        if ( pPrev )
          pPrev->pNext = pNext;
        if ( this->pLoadQueueMTHead == v10 )
          this->pLoadQueueMTHead = pNext;
        ((void (__fastcall *)(Scaleform::GFx::LoadQueueEntryMT *, __int64))v10->~LoadQueueEntryMT)(v10, 1i64);
        v10 = pNext;
      }
      else
      {
        v10 = v10->pNext;
      }
    }
  }
}

void __fastcall Scaleform::GFx::MovieImpl::ProcessMouse(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::GFx::InputEventsQueueEntry *qe,
        unsigned int *miceProceededMask,
        bool avm2)
{
  __int64 MouseIndex; // r12
  __int64 v8; // r13
  char *v9; // r15
  float PosY; // xmm1_4
  Scaleform::GFx::InteractiveObject *TopMostEntity; // rax
  Scaleform::GFx::InteractiveObject *v12; // r14
  Scaleform::GFx::InteractiveObject *pCharacter; // rcx
  unsigned int CurButtonsState; // esi
  Scaleform::GFx::State *v15; // rax
  _SETJMP_FLOAT128 *v16; // rbx
  int v17; // er15
  char v18; // al
  int Size; // esi
  Scaleform::GFx::InteractiveObject *pObject; // rbx
  Scaleform::GFx::InteractiveObject_vtbl *v21; // rax
  Scaleform::GFx::InteractiveObject_vtbl *v22; // rax
  unsigned int v23; // ecx
  Scaleform::RefCountNTSImpl *v24; // rbx
  __int64 v25; // rsi
  Scaleform::WeakPtrProxy *v26; // rdx
  Scaleform::RefCountWeakSupportImpl *v27; // rax
  int RefCount; // eax
  _BYTE v30[12]; // [rsp+30h] [rbp-48h] BYREF
  char v31; // [rsp+3Ch] [rbp-3Ch]
  char v32; // [rsp+40h] [rbp-38h]
  char v33; // [rsp+41h] [rbp-37h]
  __int16 v34; // [rsp+42h] [rbp-36h]
  Scaleform::Render::Point<float> mousePos; // [rsp+80h] [rbp+8h] BYREF

  *miceProceededMask |= 1 << qe->u.mouseEntry.MouseIndex;
  MouseIndex = qe->u.mouseEntry.MouseIndex;
  v8 = MouseIndex;
  v9 = (char *)this + 80 * MouseIndex;
  Scaleform::GFx::MouseState::UpdateState((Scaleform::GFx::MouseState *)(v9 + 8704), qe);
  PosY = qe->u.mouseEntry.PosY;
  LODWORD(mousePos.x) = qe->u.keyEntry.WcharCode;
  mousePos.y = PosY;
  TopMostEntity = Scaleform::GFx::MovieImpl::GetTopMostEntity(this, &mousePos, MouseIndex, avm2, 0i64);
  v12 = TopMostEntity;
  if ( TopMostEntity )
    ++TopMostEntity->RefCount;
  Scaleform::GFx::MouseState::SetTopmostEntity((Scaleform::GFx::MouseState *)(v9 + 8704), TopMostEntity);
  pCharacter = this->CurrentDragStates[MouseIndex].pCharacter;
  if ( pCharacter )
    Scaleform::GFx::InteractiveObject::DoMouseDrag(pCharacter, MouseIndex);
  CurButtonsState = this->mMouseState[v8].CurButtonsState;
  if ( qe->u.mouseEntry.ButtonsState )
  {
    v15 = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 27i64);
    v16 = (_SETJMP_FLOAT128 *)v15;
    if ( v15 )
    {
      if ( ((unsigned __int8 (__fastcall *)(Scaleform::GFx::State *, Scaleform::GFx::MovieImpl *))v15->__vftable[30].~RefCountImplCore)(
             v15,
             this) )
      {
        if ( (qe->u.mouseEntry.Flags & 0xC0) != 0 || !qe->u.mouseEntry.ButtonsState )
          ActorWeapon::ActionFlagCheck(v16);
        else
          Scaleform::GFx::IMEManagerBase::OnMouseDown((Scaleform::GFx::IMEManagerBase *)v16, this, CurButtonsState, v12);
      }
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v16);
    }
  }
  v17 = 0;
  if ( qe->u.mouseEntry.ButtonsState && (qe->u.keyEntry.AsciiCode & 1) != 0 )
  {
    if ( (qe->u.mouseEntry.Flags & 0xC0) != 0 || (v18 = 1, !qe->u.mouseEntry.ButtonsState) )
      v18 = 0;
    v17 = 32;
    if ( v18 )
      v17 = 16;
  }
  Size = this->MovieLevels.Data.Size;
  while ( Size )
  {
    pObject = this->MovieLevels.Data.Data[--Size].pSprite.pObject;
    if ( v17 )
    {
      v21 = pObject->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
      *(_DWORD *)v30 = v17;
      *(_QWORD *)&v30[4] = 0i64;
      v34 = 0;
      v31 = 0;
      v33 = MouseIndex;
      v32 = 0;
      v21->PropagateMouseEvent(pObject, (const Scaleform::GFx::EventId *)v30);
    }
    if ( (*((_BYTE *)&this->mMouseState[v8] + 76) & 8) != 0 )
    {
      v22 = pObject->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
      *(_DWORD *)&v30[8] = 0;
      *(_QWORD *)v30 = 8i64;
      v34 = 0;
      v31 = 0;
      v33 = MouseIndex;
      v32 = 0;
      v22->PropagateMouseEvent(pObject, (const Scaleform::GFx::EventId *)v30);
    }
  }
  if ( (this->Flags & 0x10000) == 0 && qe->u.mouseEntry.ButtonsState )
    goto LABEL_32;
  v23 = (this->Flags >> 22) & 3;
  if ( v23 == 3 )
    v23 = -1;
  if ( v23 != 1 && (*((_BYTE *)&this->mMouseState[v8] + 76) & 8) != 0 )
LABEL_32:
    Scaleform::GFx::MovieImpl::HideFocusRect(this, MouseIndex);
  if ( (qe->u.mouseEntry.Flags & 0x20) != 0 && v12 )
    v12->OnMouseWheelEvent(v12, qe->u.mouseEntry.WheelScrollDelta);
  this->pASMovieRoot.pObject->NotifyMouseEvent(this->pASMovieRoot.pObject, qe, &this->mMouseState[v8], MouseIndex);
  Scaleform::GFx::MovieImpl::CheckMouseCursorType(this, MouseIndex, v12);
  if ( (qe->u.mouseEntry.Flags & 0xC0) == 0 && qe->u.mouseEntry.ButtonsState && (qe->u.keyEntry.AsciiCode & 1) != 0 )
  {
    v24 = 0i64;
    v25 = this->FocusGroupIndexes[MouseIndex];
    v26 = this->FocusGroups[v25].LastFocused.pProxy.pObject;
    if ( v26 )
    {
      v27 = v26->pObject;
      if ( v27 )
      {
        v24 = v26->pObject;
        RefCount = v27->RefCount;
        if ( RefCount )
        {
          v24->RefCount = RefCount + 1;
          ++v24->RefCount;
          Scaleform::RefCountNTSImpl::Release(v24);
        }
        else
        {
          v24 = 0i64;
        }
      }
      else
      {
        if ( v26->RefCount-- == 1 )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->FocusGroups[v25].LastFocused.pProxy.pObject = 0i64;
      }
    }
    if ( v12 != v24 )
      Scaleform::GFx::MovieImpl::QueueSetFocusTo(this, v12, v12, MouseIndex, GFx_FocusMovedByMouse, 0i64);
    if ( v24 )
      Scaleform::RefCountNTSImpl::Release(v24);
  }
  this->pASMovieRoot.pObject->GenerateMouseEvents(this->pASMovieRoot.pObject, MouseIndex);
  if ( v12 )
    Scaleform::RefCountNTSImpl::Release(v12);
}

void __fastcall Scaleform::GFx::MovieImpl::ProcessMovieDefToKillList(Scaleform::GFx::MovieImpl *this)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 FinalizedFrameId; // r14
  Scaleform::Array<Scaleform::GFx::MovieImpl::MDKillListEntry,327,Scaleform::ArrayDefaultPolicy> *p_MovieDefKillList; // rbx
  __int64 v5; // rdi
  Scaleform::GFx::Resource *pObject; // rcx

  if ( this->MovieDefKillList.Data.Size )
  {
    v2 = 0i64;
    FinalizedFrameId = this->RenderContext.FinalizedFrameId;
    p_MovieDefKillList = &this->MovieDefKillList;
    v5 = 0i64;
    do
    {
      if ( FinalizedFrameId <= p_MovieDefKillList->Data.Data[v5].KillFrameId )
      {
        ++v2;
        ++v5;
      }
      else if ( p_MovieDefKillList->Data.Size == 1 )
      {
        Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::MDKillListEntry,Scaleform::AllocatorGH<Scaleform::GFx::MovieImpl::MDKillListEntry,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
          &p_MovieDefKillList->Data,
          p_MovieDefKillList,
          0i64);
      }
      else
      {
        pObject = p_MovieDefKillList->Data.Data[v5].pMovieDef.pObject;
        if ( pObject )
          Scaleform::GFx::Resource::Release(pObject);
        memmove(
          &p_MovieDefKillList->Data.Data[v5],
          &p_MovieDefKillList->Data.Data[v5 + 1],
          16 * (p_MovieDefKillList->Data.Size - v2) - 16);
        --p_MovieDefKillList->Data.Size;
      }
    }
    while ( v2 < this->MovieDefKillList.Data.Size );
  }
}

void __fastcall Scaleform::GFx::MovieImpl::ProcessStatus(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::GFx::InputEventsQueueEntry *qe)
{
  Scaleform::GFx::ASMovieRootBase *pObject; // rcx
  __int64 v3; // [rsp+20h] [rbp-48h] BYREF
  int v4; // [rsp+28h] [rbp-40h]
  char v5; // [rsp+2Ch] [rbp-3Ch]
  int v6; // [rsp+30h] [rbp-38h]
  Scaleform::GFx::InputEventsQueueEntry::MouseEntry mouseEntry; // [rsp+38h] [rbp-30h]
  __int128 v8; // [rsp+48h] [rbp-20h]

  pObject = this->pASMovieRoot.pObject;
  v4 = 0;
  v5 = 0;
  mouseEntry = qe->u.mouseEntry;
  v8 = *(_OWORD *)&qe->u.statusEntry.ExtensionId;
  v3 = 16777254i64;
  v6 = 65280;
  pObject->NotifyStatusEvent(pObject, (const Scaleform::GFx::EventId *)&v3);
}

void __fastcall Scaleform::GFx::MovieImpl::ProcessUnloadQueue(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::InteractiveObject *pUnloadListHead; // rbx
  Scaleform::GFx::InteractiveObject *pPlayNextOpt; // rdi
  Scaleform::GFx::InteractiveObject_vtbl *v4; // rax
  Scaleform::GFx::InteractiveObject *pParent; // rcx

  pUnloadListHead = this->pUnloadListHead;
  if ( pUnloadListHead )
  {
    do
    {
      pPlayNextOpt = pUnloadListHead->pPlayNextOpt;
      v4 = pUnloadListHead->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
      pUnloadListHead->pPlayNextOpt = 0i64;
      v4->OnEventUnload(pUnloadListHead);
      pParent = pUnloadListHead->pParent;
      if ( pParent )
        pParent->RemoveDisplayObject(pParent, pUnloadListHead);
      Scaleform::RefCountNTSImpl::Release(pUnloadListHead);
      pUnloadListHead = pPlayNextOpt;
    }
    while ( pPlayNextOpt );
    this->pUnloadListHead = 0i64;
  }
}

void __fastcall Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
        Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy> *this,
        const unsigned __int8 *val)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v5; // r8
  unsigned __int8 *v6; // rcx
  unsigned __int8 *v7; // rcx

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
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this,
    this,
    v5);
LABEL_7:
  v6 = this->Data - 1;
  this->Size = v3;
  v7 = &v6[v3];
  if ( v7 )
    *v7 = *val;
}

__int64 __fastcall Scaleform::GFx::MovieImpl::QueueSetFocusTo(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::InteractiveObject *ch,
        Scaleform::GFx::InteractiveObject *ptopMostCh,
        unsigned int controllerIdx,
        Scaleform::GFx::FocusMovedType fmt,
        Scaleform::GFx::ProcessFocusKeyInfo *pfocusKeyInfo)
{
  Scaleform::GFx::InteractiveObject *v10; // rdi
  char *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  unsigned __int8 v16; // si
  Scaleform::GFx::State *v17; // rax
  Scaleform::RefCountVImpl *v18; // rbx
  Scaleform::GFx::State_vtbl *v19; // rcx

  v10 = 0i64;
  v11 = (char *)this + 96 * this->FocusGroupIndexes[controllerIdx];
  v12 = *((_QWORD *)v11 + 2459);
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 8);
    if ( v13 )
    {
      v10 = *(Scaleform::GFx::InteractiveObject **)(v12 + 8);
      v14 = *(_DWORD *)(v13 + 8);
      if ( v14 )
      {
        v10->RefCount = v14 + 1;
        ++v10->RefCount;
        Scaleform::RefCountNTSImpl::Release(v10);
      }
      else
      {
        v10 = 0i64;
      }
    }
    else
    {
      if ( (*(_DWORD *)v12)-- == 1 )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      *((_QWORD *)v11 + 2459) = 0i64;
    }
  }
  if ( v10 == ch )
  {
    v16 = 0;
  }
  else
  {
    this->FocusRectChanged = 1;
    v17 = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 27i64);
    v18 = (Scaleform::RefCountVImpl *)v17;
    if ( v17 )
    {
      v19 = v17[1].__vftable;
      if ( v19 )
        ch = (Scaleform::GFx::InteractiveObject *)(*((__int64 (__fastcall **)(Scaleform::GFx::State_vtbl *, Scaleform::GFx::MovieImpl *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::InteractiveObject *))v19->~RefCountImplCore
                                                   + 16))(
                                                    v19,
                                                    this,
                                                    v10,
                                                    ch,
                                                    ptopMostCh);
      if ( v10 == ch )
        goto LABEL_25;
    }
    if ( !this->pASMovieRoot.pObject->NotifyOnFocusChange(
            this->pASMovieRoot.pObject,
            v10,
            ch,
            controllerIdx,
            fmt,
            pfocusKeyInfo) )
      goto LABEL_25;
    if ( ch && !ch->IsFocusEnabled(ch, fmt) )
      ch = 0i64;
    if ( v10 && v10->pParent && !v10->OnLosingKeyboardFocus(v10, ch, controllerIdx, fmt) )
    {
LABEL_25:
      v16 = 0;
    }
    else
    {
      if ( ch )
        ch->OnGettingKeyboardFocus(ch, controllerIdx, fmt);
      this->pASMovieRoot.pObject->NotifyQueueSetFocus(this->pASMovieRoot.pObject, ch, controllerIdx, fmt);
      v16 = 1;
    }
    if ( v18 )
      Scaleform::RefCountImpl::Release(v18);
  }
  if ( v10 )
    Scaleform::RefCountNTSImpl::Release(v10);
  return v16;
}

bool __fastcall Scaleform::GFx::MovieImpl::ReadBinaryData(
        Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *pdata,
        Scaleform::File *pfile,
        int *pfileLen)
{
  int v6; // eax

  v6 = pfile->GetLength(pfile);
  *pfileLen = v6;
  if ( v6 )
  {
    Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
      (Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy> *)pdata,
      v6);
    LOBYTE(v6) = pfile->Read(pfile, pdata->Data.Data, *pfileLen) == *pfileLen;
  }
  return v6;
}

__int64 __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadEdge(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos,
        float *coord)
{
  __int64 v3; // r9
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rax
  __int64 v6; // r11
  unsigned __int8 v7; // bl
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 result; // rax
  int v14; // [rsp+10h] [rbp+10h]
  int v15; // [rsp+10h] [rbp+10h]
  int v16; // [rsp+10h] [rbp+10h]

  v3 = pos->Pos;
  Data = this->Data;
  v6 = (unsigned int)(v3 + 1);
  v7 = Data->Data.Data[v3];
  pos->Pos = v6;
  if ( v7 == 6 )
    return 0i64;
  BYTE1(v14) = Data->Data.Data[(unsigned int)(v3 + 2)];
  LOBYTE(v14) = Data->Data.Data[v6];
  BYTE2(v14) = Data->Data.Data[(unsigned int)(v3 + 3)];
  HIBYTE(v14) = Data->Data.Data[(unsigned int)(v3 + 4)];
  *(_DWORD *)coord = v14;
  pos->Pos += 4;
  v8 = pos->Pos;
  BYTE1(v14) = Data->Data.Data[(unsigned int)(v8 + 1)];
  LOBYTE(v14) = Data->Data.Data[v8];
  BYTE2(v14) = Data->Data.Data[(unsigned int)(v8 + 2)];
  HIBYTE(v14) = Data->Data.Data[(unsigned int)(v8 + 3)];
  *((_DWORD *)coord + 1) = v14;
  pos->Pos += 4;
  v9 = pos->Pos;
  if ( (unsigned __int8)(v7 - 4) > 1u )
    return 1i64;
  BYTE1(v15) = Data->Data.Data[(unsigned int)(v9 + 1)];
  LOBYTE(v15) = Data->Data.Data[v9];
  BYTE2(v15) = Data->Data.Data[(unsigned int)(v9 + 2)];
  HIBYTE(v15) = Data->Data.Data[(unsigned int)(v9 + 3)];
  *((_DWORD *)coord + 2) = v15;
  pos->Pos += 4;
  v10 = pos->Pos;
  BYTE1(v15) = Data->Data.Data[(unsigned int)(v10 + 1)];
  LOBYTE(v15) = Data->Data.Data[v10];
  BYTE2(v15) = Data->Data.Data[(unsigned int)(v10 + 2)];
  HIBYTE(v15) = Data->Data.Data[(unsigned int)(v10 + 3)];
  *((_DWORD *)coord + 3) = v15;
  pos->Pos += 4;
  v11 = pos->Pos;
  if ( v7 != 5 )
    return 2i64;
  BYTE1(v16) = Data->Data.Data[(unsigned int)(v11 + 1)];
  LOBYTE(v16) = Data->Data.Data[v11];
  BYTE2(v16) = Data->Data.Data[(unsigned int)(v11 + 2)];
  HIBYTE(v16) = Data->Data.Data[(unsigned int)(v11 + 3)];
  *((_DWORD *)coord + 4) = v16;
  pos->Pos += 4;
  v12 = pos->Pos;
  BYTE1(v16) = Data->Data.Data[(unsigned int)(v12 + 1)];
  LOBYTE(v16) = Data->Data.Data[v12];
  BYTE2(v16) = Data->Data.Data[(unsigned int)(v12 + 2)];
  HIBYTE(v16) = Data->Data.Data[(unsigned int)(v12 + 3)];
  result = 3i64;
  *((_DWORD *)coord + 5) = v16;
  pos->Pos += 4;
  return result;
}

__int64 __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadPathInfo(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos,
        float *coord,
        unsigned int *styles)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rax
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  unsigned int v10; // ebp
  unsigned __int8 v11; // r8
  __int64 v12; // rbx
  int v13; // esi
  unsigned __int8 *v14; // rdi
  unsigned int v15; // er9
  unsigned int v16; // er9
  int v17; // ecx
  int v18; // er8
  __int64 v19; // rbx
  unsigned __int8 *v20; // rdi
  unsigned int v21; // er9
  unsigned int v22; // er9
  int v23; // ecx
  int v24; // er8
  __int64 v25; // rbx
  unsigned __int8 *v26; // rdi
  unsigned int v27; // er9
  unsigned int v28; // er9
  int v29; // er8
  __int64 v30; // r9
  __int64 v31; // r9
  unsigned __int8 *v32; // r8
  int v33; // [rsp+20h] [rbp+8h]

  Data = this->Data;
  v6 = pos->Pos;
  if ( v6 >= Data->Data.Size )
    return 0i64;
  v10 = 1;
  v11 = Data->Data.Data[v6];
  pos->Pos = v6 + 1;
  if ( v11 == 7 )
    return 0i64;
  if ( !v11 )
  {
    v10 = 2;
    pos->Pos = v6 + 2;
  }
  v12 = pos->Pos;
  v13 = 4;
  v14 = Data->Data.Data;
  v15 = Data->Data.Data[v12];
  if ( (Data->Data.Data[v12] & 3) != 0 )
  {
    if ( (Data->Data.Data[v12] & 3) == 1 )
    {
      *styles = (v15 >> 2) | (v14[(unsigned int)(v12 + 1)] << 6);
      v17 = 2;
    }
    else
    {
      v16 = v15 >> 2;
      if ( (Data->Data.Data[v12] & 3) == 2 )
      {
        v17 = 3;
        v18 = v16 | ((v14[(unsigned int)(v12 + 1)] | (v14[(unsigned int)(v12 + 2)] << 8)) << 6);
      }
      else
      {
        v17 = 4;
        v18 = v16 | ((v14[(unsigned int)(v12 + 1)] | ((v14[(unsigned int)(v12 + 2)] | (v14[(unsigned int)(v12 + 3)] << 8)) << 8)) << 6);
      }
      *styles = v18;
    }
  }
  else
  {
    v17 = 1;
    *styles = v15 >> 2;
  }
  pos->Pos += v17;
  v19 = pos->Pos;
  v20 = Data->Data.Data;
  v21 = Data->Data.Data[v19];
  if ( (Data->Data.Data[v19] & 3) != 0 )
  {
    if ( (Data->Data.Data[v19] & 3) == 1 )
    {
      styles[1] = (v21 >> 2) | (v20[(unsigned int)(v19 + 1)] << 6);
      v23 = 2;
    }
    else
    {
      v22 = v21 >> 2;
      if ( (Data->Data.Data[v19] & 3) == 2 )
      {
        v23 = 3;
        v24 = v22 | ((v20[(unsigned int)(v19 + 1)] | (v20[(unsigned int)(v19 + 2)] << 8)) << 6);
      }
      else
      {
        v23 = 4;
        v24 = v22 | ((v20[(unsigned int)(v19 + 1)] | ((v20[(unsigned int)(v19 + 2)] | (v20[(unsigned int)(v19 + 3)] << 8)) << 8)) << 6);
      }
      styles[1] = v24;
    }
  }
  else
  {
    v23 = 1;
    styles[1] = v21 >> 2;
  }
  pos->Pos += v23;
  v25 = pos->Pos;
  v26 = Data->Data.Data;
  v27 = Data->Data.Data[v25];
  if ( (Data->Data.Data[v25] & 3) != 0 )
  {
    if ( (Data->Data.Data[v25] & 3) == 1 )
    {
      v13 = 2;
      styles[2] = (v27 >> 2) | (v26[(unsigned int)(v25 + 1)] << 6);
    }
    else
    {
      v28 = v27 >> 2;
      if ( (Data->Data.Data[v25] & 3) == 2 )
      {
        v13 = 3;
        v29 = v28 | ((v26[(unsigned int)(v25 + 1)] | (v26[(unsigned int)(v25 + 2)] << 8)) << 6);
      }
      else
      {
        v29 = v28 | ((v26[(unsigned int)(v25 + 1)] | ((v26[(unsigned int)(v25 + 2)] | (v26[(unsigned int)(v25 + 3)] << 8)) << 8)) << 6);
      }
      styles[2] = v29;
    }
  }
  else
  {
    v13 = 1;
    styles[2] = v27 >> 2;
  }
  pos->Pos += v13 + 1;
  v30 = pos->Pos;
  BYTE1(v33) = Data->Data.Data[(unsigned int)(v30 + 1)];
  LOBYTE(v33) = Data->Data.Data[v30];
  BYTE2(v33) = Data->Data.Data[(unsigned int)(v30 + 2)];
  HIBYTE(v33) = Data->Data.Data[(unsigned int)(v30 + 3)];
  *(_DWORD *)coord = v33;
  pos->Pos += 4;
  v31 = pos->Pos;
  v32 = Data->Data.Data;
  result = v10;
  LOBYTE(v33) = v32[v31];
  BYTE1(v33) = v32[(unsigned int)(v31 + 1)];
  BYTE2(v33) = v32[(unsigned int)(v31 + 2)];
  HIBYTE(v33) = v32[(unsigned int)(v31 + 3)];
  *((_DWORD *)coord + 1) = v33;
  pos->Pos += 4;
  return result;
}

bool __fastcall Scaleform::GFx::MovieImpl::ReadTextData(
        Scaleform::String *pdata,
        Scaleform::File *pfile,
        int *pfileLen,
        bool urlEncoded)
{
  int v8; // eax
  char *v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  const char *v13; // rdx
  __int64 v14; // r8
  void *v15; // rbx
  Scaleform::String src; // [rsp+48h] [rbp+10h] BYREF

  v8 = pfile->GetLength(pfile);
  *pfileLen = v8;
  if ( v8 )
  {
    Scaleform::String::String(&src);
    v9 = (char *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, *pfileLen, 0i64);
    pfile->Read(pfile, (unsigned __int8 *)v9, *pfileLen);
    v10 = *pfileLen;
    if ( *(_WORD *)v9 == 0xFEFF )
    {
      Scaleform::String::AppendString(&src, (const wchar_t *)v9 + 1, v10 / 2 - 1);
    }
    else if ( *(_WORD *)v9 == 0xFFFE )
    {
      v11 = 0i64;
      v12 = v10 / 2 - 1;
      if ( v12 > 0 )
      {
        do
        {
          *(_WORD *)&v9[2 * v11 + 2] = __ROL2__(*(_WORD *)&v9[2 * v11 + 2], 8);
          ++v11;
        }
        while ( v11 < v12 );
      }
      Scaleform::String::AppendString(&src, (const wchar_t *)v9 + 1, v12);
    }
    else
    {
      if ( v10 > 2 && *v9 == -17 && v9[1] == -69 && v9[2] == -65 )
      {
        v13 = v9 + 3;
        v14 = v10 - 3;
      }
      else
      {
        v14 = *pfileLen;
        v13 = v9;
      }
      Scaleform::String::AppendString(&src, v13, v14);
    }
    if ( urlEncoded )
      Scaleform::GFx::ASUtils::Unescape(
        (const char *)((src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
        *(_QWORD *)(src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
        pdata);
    else
      Scaleform::String::operator=(pdata, &src);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v9);
    v15 = (void *)(src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v15);
    LOBYTE(v8) = 1;
  }
  return v8;
}

Scaleform::GFx::State *__fastcall Scaleform::GFx::MovieImpl::RegisterAccelerometer(
        Scaleform::GFx::MovieImpl *this,
        int accelerometerId)
{
  Scaleform::GFx::State *result; // rax
  Scaleform::RefCountVImpl *v4; // rbx
  unsigned __int8 v5; // di

  result = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 10i64);
  v4 = (Scaleform::RefCountVImpl *)result;
  if ( result )
  {
    v5 = ((__int64 (__fastcall *)(Scaleform::GFx::State *, _QWORD))result->__vftable[1].~RefCountImplCore)(
           result,
           (unsigned int)accelerometerId);
    Scaleform::RefCountImpl::Release(v4);
    return (Scaleform::GFx::State *)v5;
  }
  return result;
}

char __fastcall Scaleform::GFx::MovieImpl::RegisterFont(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::MovieDef *md,
        Scaleform::GFx::FontResource *fontRes)
{
  unsigned __int64 Size; // r8
  unsigned __int64 v6; // rdx
  Scaleform::GFx::MovieImpl::FontDesc *Data; // rax
  Scaleform::GFx::MovieImpl::FontDesc *v9; // rbx

  Size = this->RegisteredFonts.Data.Size;
  v6 = 0i64;
  if ( Size )
  {
    Data = this->RegisteredFonts.Data.Data;
    while ( Data->pFont.pObject != fontRes || Data->pMovieDef.pObject != md )
    {
      ++v6;
      ++Data;
      if ( v6 >= Size )
        goto LABEL_6;
    }
    return 0;
  }
  else
  {
LABEL_6:
    if ( fontRes )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)fontRes);
    if ( md )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)md);
    Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::FontDesc,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::FontDesc,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->RegisteredFonts.Data,
      &this->RegisteredFonts,
      this->RegisteredFonts.Data.Size + 1);
    v9 = &this->RegisteredFonts.Data.Data[this->RegisteredFonts.Data.Size - 1];
    if ( v9 )
    {
      if ( md )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)md);
      v9->pMovieDef.pObject = md;
      if ( fontRes )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)fontRes);
      v9->pFont.pObject = fontRes;
    }
    this->Flags2 |= 2u;
    if ( fontRes )
      Scaleform::GFx::Resource::Release(fontRes);
    if ( md )
      Scaleform::GFx::Resource::Release(md);
    return 1;
  }
}

Scaleform::GFx::State *__fastcall Scaleform::GFx::MovieImpl::RegisterGeolocation(
        Scaleform::GFx::MovieImpl *this,
        int geolocationId)
{
  Scaleform::GFx::State *result; // rax
  Scaleform::RefCountVImpl *v4; // rbx
  unsigned __int8 v5; // di

  result = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 11i64);
  v4 = (Scaleform::RefCountVImpl *)result;
  if ( result )
  {
    v5 = ((__int64 (__fastcall *)(Scaleform::GFx::State *, _QWORD))result->__vftable[1].~RefCountImplCore)(
           result,
           (unsigned int)geolocationId);
    Scaleform::RefCountImpl::Release(v4);
    return (Scaleform::GFx::State *)v5;
  }
  return result;
}

void __fastcall Scaleform::GFx::ImageResource::ImageDelegate::Release(
        Scaleform::GFx::ImageResource::ImageDelegate *this)
{
  Scaleform::GFx::Resource::Release((Scaleform::GFx::Resource *)&this[-1].pTexture);
}

void __fastcall Scaleform::GFx::Movie::Release(Scaleform::GFx::Movie *this)
{
  Scaleform::RefCountVImpl *v2; // rax
  Scaleform::RefCountVImpl *v3; // rbx

  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&this->RefCount, -1) == 1 )
  {
    v2 = (Scaleform::RefCountVImpl *)this->pASMovieRoot.pObject->GetMemoryContext(this->pASMovieRoot.pObject);
    v3 = v2;
    if ( v2 )
      Scaleform::Render::RenderBuffer::AddRef(v2);
    ((void (__fastcall *)(Scaleform::GFx::Movie *, __int64))this->~RefCountImplCore)(this, 1i64);
    if ( v3 )
      Scaleform::RefCountImpl::Release(v3);
  }
}

bool __fastcall Scaleform::GFx::MovieImpl::ReleaseLevelMovie(Scaleform::GFx::MovieImpl *this, int level)
{
  unsigned int v2; // esi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  Scaleform::GFx::ASIntervalTimerIntf *v6; // rcx
  Scaleform::GFx::InteractiveObject *v7; // rbp
  Scaleform::GFx::InteractiveObject *v8; // rbx
  unsigned __int64 v9; // r15
  Scaleform::GFx::InteractiveObject *v10; // rcx
  Scaleform::Render::TreeNode *v11; // rax
  Scaleform::Render::TreeContainer *v12; // rbx
  __int64 v13; // rax
  bool result; // al
  unsigned __int64 Size; // rcx
  Scaleform::GFx::MovieImpl::LevelInfo *Data; // rbx
  __int64 v17; // rax
  Scaleform::GFx::InteractiveObject *pObject; // rcx
  Scaleform::GFx::DisplayObjectBase *v19; // rbx
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::Render::TreeContainer *pParent; // rcx

  v2 = 0;
  if ( level )
  {
    Size = this->MovieLevels.Data.Size;
    if ( Size )
    {
      Data = this->MovieLevels.Data.Data;
      v17 = 0i64;
      while ( Data[v17].Level != level )
      {
        v17 = ++v2;
        if ( v2 >= Size )
          return 0;
      }
      pObject = Data[v2].pSprite.pObject;
      if ( pObject )
        ++pObject->RefCount;
      v19 = Data[v2].pSprite.pObject;
      v19->OnEventUnload(v19);
      this->pASMovieRoot.pObject->DoActions(this->pASMovieRoot.pObject);
      v19->ForceShutdown(v19);
      Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::MovieImpl::LevelInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::LevelInfo,327>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
        &this->MovieLevels,
        v2);
      this->Flags |= 0x100u;
      RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(v19);
      if ( RenderNode )
      {
        pParent = (Scaleform::Render::TreeContainer *)RenderNode->pParent;
        if ( pParent )
          Scaleform::Render::TreeContainer::Remove(pParent, v2, 1ui64);
      }
      Scaleform::RefCountNTSImpl::Release(v19);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v4 = 0i64;
    this->CurrentDragStates[0].pCharacter = 0i64;
    this->CurrentDragStates[0].pTopmostEntity = 0i64;
    this->CurrentDragStates[0].MouseIndex = -1;
    this->CurrentDragStates[1].pCharacter = 0i64;
    this->CurrentDragStates[1].pTopmostEntity = 0i64;
    this->CurrentDragStates[1].MouseIndex = -1;
    this->CurrentDragStates[2].pCharacter = 0i64;
    this->CurrentDragStates[2].pTopmostEntity = 0i64;
    this->CurrentDragStates[2].MouseIndex = -1;
    this->CurrentDragStates[3].pCharacter = 0i64;
    this->CurrentDragStates[3].pTopmostEntity = 0i64;
    this->CurrentDragStates[3].MouseIndex = -1;
    this->CurrentDragStates[4].pCharacter = 0i64;
    this->CurrentDragStates[4].pTopmostEntity = 0i64;
    this->CurrentDragStates[4].MouseIndex = -1;
    this->CurrentDragStates[5].pCharacter = 0i64;
    this->CurrentDragStates[5].pTopmostEntity = 0i64;
    this->CurrentDragStates[5].MouseIndex = -1;
    v5 = this->IntervalTimers.Data.Size;
    if ( v5 )
    {
      do
      {
        v6 = this->IntervalTimers.Data.Data[v4].pObject;
        v6->Clear(v6);
        ++v4;
      }
      while ( v4 < v5 );
    }
    Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->IntervalTimers.Data,
      &this->IntervalTimers,
      0i64);
    if ( this->MovieLevels.Data.Size )
    {
      v7 = this->MovieLevels.Data.Data->pSprite.pObject;
      if ( v7 )
        ++v7->RefCount;
    }
    else
    {
      v7 = 0i64;
    }
    while ( this->MovieLevels.Data.Size )
    {
      v8 = this->MovieLevels.Data.Data[this->MovieLevels.Data.Size - 1].pSprite.pObject;
      v8->OnEventUnload(v8);
      this->pASMovieRoot.pObject->DoActions(this->pASMovieRoot.pObject);
      v8->ForceShutdown(v8);
      v9 = this->MovieLevels.Data.Size - 1;
      if ( this->MovieLevels.Data.Size == 1 )
      {
        Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::LevelInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::LevelInfo,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
          &this->MovieLevels.Data,
          &this->MovieLevels,
          0i64);
      }
      else
      {
        v10 = this->MovieLevels.Data.Data[v9].pSprite.pObject;
        if ( v10 )
          Scaleform::RefCountNTSImpl::Release(v10);
        memmove(
          &this->MovieLevels.Data.Data[v9],
          &this->MovieLevels.Data.Data[v9 + 1],
          16 * (this->MovieLevels.Data.Size - v9) - 16);
        --this->MovieLevels.Data.Size;
      }
    }
    v11 = Scaleform::GFx::DisplayObjectBase::GetRenderNode(v7);
    if ( v11 )
    {
      v12 = (Scaleform::Render::TreeContainer *)v11->pParent;
      if ( v12 )
      {
        v13 = Scaleform::Render::TreeContainer::GetSize((Scaleform::Render::TreeContainer *)v11->pParent);
        Scaleform::Render::TreeContainer::Remove(v12, 0i64, v13);
      }
    }
    if ( v7 )
      Scaleform::RefCountNTSImpl::Release(v7);
    result = 1;
    this->pMainMovie = 0i64;
    this->FrameTime = 0.083333336;
    this->Flags |= 0x100u;
  }
  return result;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::MovieImpl::FontDesc,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::FontDesc,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::MovieImpl::FontDesc,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::FontDesc,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index)
{
  Scaleform::GFx::MovieImpl::FontDesc *Data; // rsi
  unsigned __int64 v5; // rdi
  Scaleform::GFx::FontResource *pObject; // rcx
  Scaleform::GFx::Resource *v7; // rcx

  if ( this->Data.Size == 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::FontDesc,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::FontDesc,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->Data,
      this,
      0i64);
  }
  else
  {
    Data = this->Data.Data;
    v5 = index;
    pObject = this->Data.Data[index].pFont.pObject;
    if ( pObject )
      Scaleform::GFx::Resource::Release(pObject);
    v7 = Data[index].pMovieDef.pObject;
    if ( v7 )
      Scaleform::GFx::Resource::Release(v7);
    memmove(&this->Data.Data[v5], &this->Data.Data[v5 + 1], 16 * (this->Data.Size - index) - 16);
    --this->Data.Size;
  }
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::MovieImpl::IndirectTransPair,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::MovieImpl::IndirectTransPair,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index)
{
  unsigned __int64 v4; // rsi
  Scaleform::GFx::MovieImpl::IndirectTransPair *Data; // rdi
  Scaleform::GFx::DisplayObjContainer *pObject; // rcx
  Scaleform::RefCountNTSImpl *v7; // rcx
  Scaleform::Render::ContextImpl::Entry *v8; // rcx

  if ( this->Data.Size == 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::IndirectTransPair,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->Data,
      this,
      0i64);
  }
  else
  {
    v4 = index;
    Data = this->Data.Data;
    pObject = this->Data.Data[index].OriginalParent.pObject;
    if ( pObject )
      Scaleform::RefCountNTSImpl::Release(pObject);
    v7 = Data[v4].Obj.pObject;
    if ( v7 )
      Scaleform::RefCountNTSImpl::Release(v7);
    v8 = Data[index].TransformParent.pObject;
    if ( v8 )
    {
      if ( v8->RefCount-- == 1 )
        Scaleform::Render::ContextImpl::Entry::destroyHelper(v8);
    }
    memmove(&this->Data.Data[v4], &this->Data.Data[v4 + 1], 32 * (this->Data.Size - index) - 32);
    --this->Data.Size;
  }
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::MovieImpl::LevelInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::LevelInfo,327>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::MovieImpl::LevelInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::LevelInfo,327>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index)
{
  unsigned __int64 v4; // rdi
  Scaleform::GFx::InteractiveObject *pObject; // rcx

  if ( this->Data.Size == 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::LevelInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::LevelInfo,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->Data,
      this,
      0i64);
  }
  else
  {
    v4 = index;
    pObject = this->Data.Data[index].pSprite.pObject;
    if ( pObject )
      Scaleform::RefCountNTSImpl::Release(pObject);
    memmove(&this->Data.Data[v4], &this->Data.Data[v4 + 1], 16 * (this->Data.Size - index) - 16);
    --this->Data.Size;
  }
}

Scaleform::GFx::MovieImpl::IndirectTransPair *__fastcall Scaleform::GFx::MovieImpl::RemoveIndirectTransformPair(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::MovieImpl::IndirectTransPair *result,
        Scaleform::GFx::DisplayObjectBase *obj)
{
  unsigned __int64 Size; // r9
  unsigned __int64 v5; // rdx
  Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2,Scaleform::ArrayDefaultPolicy> *p_IndirectTransformPairs; // r10
  Scaleform::GFx::MovieImpl::IndirectTransPair *Data; // rcx
  Scaleform::GFx::DisplayObjectBase **p_pObject; // rax
  Scaleform::GFx::MovieImpl::IndirectTransPair *v9; // rax
  Scaleform::GFx::MovieImpl::IndirectTransPair *v10; // rax
  Scaleform::GFx::DisplayObjectBase *pObject; // rcx
  Scaleform::Render::TreeNode *v12; // rdi
  Scaleform::GFx::DisplayObjContainer *v13; // r8
  Scaleform::GFx::DisplayObjectBase *v14; // rsi
  Scaleform::GFx::DisplayObjContainer *v15; // rbp
  int OrigParentDepth; // er14

  Size = this->IndirectTransformPairs.Data.Size;
  v5 = 0i64;
  if ( Size )
  {
    p_IndirectTransformPairs = &this->IndirectTransformPairs;
    Data = this->IndirectTransformPairs.Data.Data;
    p_pObject = &Data->Obj.pObject;
    while ( *p_pObject != obj )
    {
      ++v5;
      p_pObject += 4;
      if ( v5 >= Size )
        goto LABEL_5;
    }
    v10 = &Data[v5];
    if ( v10->TransformParent.pObject )
      ++v10->TransformParent.pObject->RefCount;
    pObject = v10->Obj.pObject;
    v12 = v10->TransformParent.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v13 = v10->OriginalParent.pObject;
    v14 = v10->Obj.pObject;
    if ( v13 )
      ++v13->RefCount;
    v15 = v10->OriginalParent.pObject;
    OrigParentDepth = v10->OrigParentDepth;
    Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::MovieImpl::IndirectTransPair,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
      p_IndirectTransformPairs,
      v5);
    if ( v12 )
      ++v12->RefCount;
    result->TransformParent.pObject = v12;
    if ( v14 )
      ++v14->RefCount;
    result->Obj.pObject = v14;
    if ( v15 )
      ++v15->RefCount;
    result->OriginalParent.pObject = v15;
    result->OrigParentDepth = OrigParentDepth;
    if ( v15 )
      Scaleform::RefCountNTSImpl::Release(v15);
    if ( v14 )
      Scaleform::RefCountNTSImpl::Release(v14);
    if ( v12 )
    {
      if ( v12->RefCount-- == 1 )
        Scaleform::Render::ContextImpl::Entry::destroyHelper(v12);
    }
    return result;
  }
  else
  {
LABEL_5:
    result->TransformParent.pObject = 0i64;
    v9 = result;
    result->Obj.pObject = 0i64;
    result->OriginalParent.pObject = 0i64;
    result->OrigParentDepth = -1;
  }
  return v9;
}

void __fastcall Scaleform::GFx::MovieImpl::RemoveTopmostLevelCharacter(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::DisplayObjectBase *pch)
{
  unsigned __int64 Size; // r8
  unsigned __int64 v3; // rbx
  Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> *p_TopmostLevelCharacters; // rdi
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *i; // rax
  Scaleform::RefCountNTSImpl *pObject; // rcx

  Size = this->TopmostLevelCharacters.Data.Size;
  v3 = 0i64;
  if ( Size )
  {
    p_TopmostLevelCharacters = &this->TopmostLevelCharacters;
    for ( i = this->TopmostLevelCharacters.Data.Data; i->pObject != pch; ++i )
    {
      if ( ++v3 >= Size )
        return;
    }
    Scaleform::Render::TreeContainer::Remove(this->pTopMostRoot.pObject, v3, 1ui64);
    Scaleform::GFx::DisplayObjectBase::RemoveIndirectTransform(pch, 1);
    if ( p_TopmostLevelCharacters->Data.Size == 1 )
    {
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        &p_TopmostLevelCharacters->Data,
        p_TopmostLevelCharacters,
        0i64);
    }
    else
    {
      pObject = p_TopmostLevelCharacters->Data.Data[v3].pObject;
      if ( pObject )
        Scaleform::RefCountNTSImpl::Release(pObject);
      memmove(
        &p_TopmostLevelCharacters->Data.Data[v3],
        &p_TopmostLevelCharacters->Data.Data[v3 + 1],
        8 * (p_TopmostLevelCharacters->Data.Size - v3) - 8);
      --p_TopmostLevelCharacters->Data.Size;
    }
  }
}

void __fastcall Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  char *Data; // rdx
  unsigned __int64 v5; // rdi
  char *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (char *)Scaleform::Memory::pGlobalHeap->Realloc(
                       Scaleform::Memory::pGlobalHeap,
                       Data,
                       (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (char *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, v5, &v7);
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::ASString,Scaleform::AllocatorDH<Scaleform::GFx::ASString,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::ASString *Data; // rdx
  unsigned __int64 v6; // rdi
  Scaleform::GFx::ASString *v7; // rax
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v7 = (Scaleform::GFx::ASString *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::GFx::ASString *, unsigned __int64, const void *))Scaleform::Memory::pGlobalHeap->Realloc)(
                                           Scaleform::Memory::pGlobalHeap,
                                           Data,
                                           8 * v6,
                                           pheapAddr);
        this->Policy.Capacity = v6;
        this->Data = v7;
        return;
      }
      v8 = *(_QWORD *)pheapAddr;
      v9 = 2;
      this->Data = (Scaleform::GFx::ASString *)(*(__int64 (__fastcall **)(const void *, unsigned __int64, int *))(v8 + 80))(
                                                 pheapAddr,
                                                 8 * v6,
                                                 &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::GFx::ASString *, _QWORD, const void *))Scaleform::Memory::pGlobalHeap->Free)(
          Scaleform::Memory::pGlobalHeap,
          Data,
          0i64,
          pheapAddr);
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::LevelInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::LevelInfo,327>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::LevelInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::LevelInfo,327>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::MovieImpl::LevelInfo *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::GFx::MovieImpl::LevelInfo *v8; // rax
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
        v8 = (Scaleform::GFx::MovieImpl::LevelInfo *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                       Scaleform::Memory::pGlobalHeap,
                                                       Data,
                                                       v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 327;
      this->Data = (Scaleform::GFx::MovieImpl::LevelInfo *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::MDKillListEntry,Scaleform::AllocatorGH<Scaleform::GFx::MovieImpl::MDKillListEntry,327>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::MDKillListEntry,Scaleform::AllocatorGH<Scaleform::GFx::MovieImpl::MDKillListEntry,327>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::MovieImpl::MDKillListEntry *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::GFx::MovieImpl::MDKillListEntry *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::GFx::MovieImpl::MDKillListEntry *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                             Scaleform::Memory::pGlobalHeap,
                                                             Data,
                                                             16 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 327;
      this->Data = (Scaleform::GFx::MovieImpl::MDKillListEntry *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                                   Scaleform::Memory::pGlobalHeap,
                                                                   16 * v5,
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v8; // rax
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
        v8 = (Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                    Scaleform::Memory::pGlobalHeap,
                                                                    Data,
                                                                    v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 327;
      this->Data = (Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *Data; // rdx
  unsigned __int64 v6; // rdi
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *v7; // rax
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v7 = (Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *, unsigned __int64, const void *))Scaleform::Memory::pGlobalHeap->Realloc)(
                                                                    Scaleform::Memory::pGlobalHeap,
                                                                    Data,
                                                                    8 * v6,
                                                                    pheapAddr);
        this->Policy.Capacity = v6;
        this->Data = v7;
        return;
      }
      v8 = *(_QWORD *)pheapAddr;
      v9 = 327;
      this->Data = (Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *)(*(__int64 (__fastcall **)(const void *, unsigned __int64, int *))(v8 + 80))(
                                                                          pheapAddr,
                                                                          8 * v6,
                                                                          &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *, _QWORD, const void *))Scaleform::Memory::pGlobalHeap->Free)(
          Scaleform::Memory::pGlobalHeap,
          Data,
          0i64,
          pheapAddr);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                            Scaleform::Memory::pGlobalHeap,
                                                                            Data,
                                                                            8 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                                                  Scaleform::Memory::pGlobalHeap,
                                                                                  8 * v5,
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

void __fastcall Scaleform::GFx::MovieImpl::ResetFocusForChar(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::InteractiveObject *ch)
{
  __int64 i; // r12
  Scaleform::GFx::InteractiveObject *v5; // rbx
  Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> *p_LastFocused; // r15
  Scaleform::WeakPtrProxy *pObject; // rdx
  Scaleform::RefCountNTSImpl *v8; // rax
  bool v9; // zf
  Scaleform::WeakPtrProxy *v10; // rdx
  Scaleform::RefCountNTSImpl *v11; // rdi
  Scaleform::RefCountWeakSupportImpl *v12; // rax
  int RefCount; // eax
  unsigned int ControllerMaskByFocusGroup; // esi
  unsigned int v15; // ebx
  unsigned int j; // ebp
  Scaleform::WeakPtrProxy *v17; // rdx

  for ( i = 0i64; (unsigned int)i < this->FocusGroupsCnt; i = (unsigned int)(i + 1) )
  {
    v5 = 0i64;
    p_LastFocused = &this->FocusGroups[i].LastFocused;
    pObject = p_LastFocused->pProxy.pObject;
    if ( p_LastFocused->pProxy.pObject )
    {
      v8 = pObject->pObject;
      if ( v8 )
      {
        v5 = (Scaleform::GFx::InteractiveObject *)pObject->pObject;
        if ( v8->RefCount )
        {
          ++v8->RefCount;
          ++v8->RefCount;
          Scaleform::RefCountNTSImpl::Release(v8);
          Scaleform::RefCountNTSImpl::Release(v5);
        }
        else
        {
          v5 = 0i64;
        }
      }
      else
      {
        v9 = pObject->RefCount-- == 1;
        if ( v9 )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        p_LastFocused->pProxy.pObject = 0i64;
      }
    }
    if ( v5 == ch )
    {
      v10 = p_LastFocused->pProxy.pObject;
      v11 = 0i64;
      if ( p_LastFocused->pProxy.pObject )
      {
        v12 = v10->pObject;
        if ( v12 )
        {
          v11 = v10->pObject;
          RefCount = v12->RefCount;
          if ( RefCount )
          {
            v11->RefCount = RefCount + 1;
            ++v11->RefCount;
            Scaleform::RefCountNTSImpl::Release(v11);
            if ( !Scaleform::GFx::MovieImpl::IsShutdowning(this) )
            {
              ControllerMaskByFocusGroup = Scaleform::GFx::MovieImpl::GetControllerMaskByFocusGroup(this, i);
              v15 = 0;
              for ( j = this->GetControllerCount(this); ControllerMaskByFocusGroup; ControllerMaskByFocusGroup >>= 1 )
              {
                if ( v15 >= j )
                  break;
                Scaleform::GFx::MovieImpl::SetFocusTo(this, 0i64, v15++, GFx_FocusMovedByKeyboard);
              }
            }
          }
          else
          {
            v11 = 0i64;
          }
        }
        else
        {
          v9 = v10->RefCount-- == 1;
          if ( v9 )
            ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
          p_LastFocused->pProxy.pObject = 0i64;
        }
      }
      v17 = p_LastFocused->pProxy.pObject;
      if ( p_LastFocused->pProxy.pObject )
      {
        v9 = v17->RefCount-- == 1;
        if ( v9 )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      }
      p_LastFocused->pProxy.pObject = 0i64;
      if ( v11 )
        Scaleform::RefCountNTSImpl::Release(v11);
    }
  }
}

void __fastcall Scaleform::GFx::MovieImpl::ResetFocusStates(Scaleform::GFx::MovieImpl *this)
{
  unsigned int i; // esi
  __int64 v3; // rdi
  Scaleform::GFx::CharacterHandle *v4; // rbx
  char *v5; // rbx

  for ( i = 0; i < this->FocusGroupsCnt; *((_DWORD *)v5 + 4922) = 0 )
  {
    v3 = 96 * (i + 205i64);
    v4 = *(Scaleform::GFx::CharacterHandle **)((char *)&this->Scaleform::GFx::Movie::Scaleform::RefCountBase<Scaleform::GFx::Movie,327>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable
                                             + v3);
    if ( v4 )
    {
      if ( --v4->RefCount <= 0 )
      {
        Scaleform::GFx::CharacterHandle::~CharacterHandle(v4);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v4);
      }
    }
    *(Scaleform::GFx::MovieImpl_vtbl **)((char *)&this->Scaleform::GFx::Movie::Scaleform::RefCountBase<Scaleform::GFx::Movie,327>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable
                                       + v3) = 0i64;
    v5 = (char *)this + 96 * i;
    if ( (v5[19713] & 1) != 0 )
    {
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        (Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy> *)(v5 + 19640),
        *((const void **)v5 + 2458),
        0i64);
      v5[19713] = 0;
    }
    ++i;
  }
}

void __fastcall Scaleform::GFx::MovieImpl::ResetInputFocus(Scaleform::GFx::MovieImpl *this, unsigned int controllerIdx)
{
  Scaleform::GFx::MovieImpl::SetFocusTo(this, 0i64, controllerIdx, GFx_FocusMovedByAS);
}

void __fastcall Scaleform::GFx::MovieImpl::ResetViewportMatrix(Scaleform::GFx::MovieImpl *this)
{
  float v1; // xmm1_4
  float v2; // xmm2_4
  float v3; // xmm3_4
  float v4; // xmm2_4

  LODWORD(v1) = LODWORD(this->VisibleFrameRect.x1) ^ _xmm;
  LODWORD(v2) = LODWORD(this->VisibleFrameRect.y1) ^ _xmm;
  *(_QWORD *)&this->ViewportMatrix.M[0][0] = 1065353216i64;
  this->ViewportMatrix.M[0][2] = 0.0;
  this->ViewportMatrix.M[0][3] = v1;
  this->ViewportMatrix.M[1][0] = 0.0;
  *(_QWORD *)&this->ViewportMatrix.M[1][1] = 1065353216i64;
  this->ViewportMatrix.M[1][3] = v2;
  v3 = (float)this->mViewport.Height / (float)(this->VisibleFrameRect.y2 - this->VisibleFrameRect.y1);
  v4 = (float)this->mViewport.Width / (float)(this->VisibleFrameRect.x2 - this->VisibleFrameRect.x1);
  this->ViewportMatrix.M[0][0] = v4 * this->ViewportMatrix.M[0][0];
  this->ViewportMatrix.M[0][1] = v4 * this->ViewportMatrix.M[0][1];
  this->ViewportMatrix.M[0][2] = v4 * this->ViewportMatrix.M[0][2];
  this->ViewportMatrix.M[0][3] = v4 * this->ViewportMatrix.M[0][3];
  this->ViewportMatrix.M[1][0] = v3 * this->ViewportMatrix.M[1][0];
  this->ViewportMatrix.M[1][1] = v3 * this->ViewportMatrix.M[1][1];
  this->ViewportMatrix.M[1][2] = v3 * this->ViewportMatrix.M[1][2];
  this->ViewportMatrix.M[1][3] = v3 * this->ViewportMatrix.M[1][3];
}

void __fastcall Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  if ( newSize >= this->Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this,
        this,
        newSize + (newSize >> 2));
      this->Size = newSize;
      return;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this,
      this,
      newSize);
    this->Size = newSize;
    return;
  }
  this->Size = newSize;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 v7; // rdi
  Scaleform::RefCountVImpl **p_pFill; // rbx

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
    v7 = Size - newSize;
    if ( v7 )
    {
      p_pFill = (Scaleform::RefCountVImpl **)&this->Data[v7 - 1 + newSize].pFill;
      do
      {
        if ( *p_pFill )
          Scaleform::RefCountImpl::Release(*p_pFill);
        p_pFill -= 2;
        --v7;
      }
      while ( v7 );
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::FontDesc,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::FontDesc,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::FontDesc,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::FontDesc,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 v7; // rdi
  Scaleform::GFx::MovieImpl::FontDesc *i; // rbx
  Scaleform::GFx::Resource *pObject; // rcx

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
    v7 = Size - newSize;
    for ( i = &this->Data[v7 - 1 + newSize]; v7; --v7 )
    {
      pObject = i->pFont.pObject;
      if ( pObject )
        Scaleform::GFx::Resource::Release(pObject);
      if ( i->pMovieDef.pObject )
        Scaleform::GFx::Resource::Release(i->pMovieDef.pObject);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::IndirectTransPair,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::IndirectTransPair,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2>,Scaleform::ArrayDefaultPolicy> *this,
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
      Scaleform::ArrayDataBase<Scaleform::Render::ExternalFontWinAPI::GlyphType,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Value,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Value,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    Scaleform::ConstructorMov<Scaleform::GFx::MovieImpl::IndirectTransPair>::DestructArray(
      &this->Data[newSize],
      Size - newSize);
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::ExternalFontWinAPI::GlyphType,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Value,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Value,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::LevelInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::LevelInfo,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::LevelInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::LevelInfo,327>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 v7; // rdi
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *p_pSprite; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::LevelInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::LevelInfo,327>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
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
      p_pSprite = &this->Data[v7 - 1 + newSize].pSprite;
      do
      {
        if ( p_pSprite->pObject )
          Scaleform::RefCountNTSImpl::Release(p_pSprite->pObject);
        p_pSprite -= 2;
        --v7;
      }
      while ( v7 );
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::LevelInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::LevelInfo,327>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::MDKillListEntry,Scaleform::AllocatorGH<Scaleform::GFx::MovieImpl::MDKillListEntry,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::MDKillListEntry,Scaleform::AllocatorGH<Scaleform::GFx::MovieImpl::MDKillListEntry,327>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 v7; // rdi
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *p_pMovieDef; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::MDKillListEntry,Scaleform::AllocatorGH<Scaleform::GFx::MovieImpl::MDKillListEntry,327>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
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
      p_pMovieDef = &this->Data[v7 - 1 + newSize].pMovieDef;
      do
      {
        if ( p_pMovieDef->pObject )
          Scaleform::GFx::Resource::Release(p_pMovieDef->pObject);
        p_pMovieDef -= 2;
        --v7;
      }
      while ( v7 );
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::MDKillListEntry,Scaleform::AllocatorGH<Scaleform::GFx::MovieImpl::MDKillListEntry,327>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
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
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = (Scaleform::RefCountVImpl **)&this->Data[newSize - 1 + v7]; v7; --v7 )
    {
      if ( *i )
        Scaleform::RefCountImpl::Release(*i);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
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
        Scaleform::RefCountNTSImpl::Release(i->pObject);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)this,
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
        Scaleform::RefCountNTSImpl::Release(i->pObject);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
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
        Scaleform::RefCountNTSImpl::Release(i->pObject);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::GFx::MovieImpl::Restart(Scaleform::GFx::MovieImpl *this, bool advance0)
{
  Scaleform::RefCountVImpl *v4; // rax
  Scaleform::GFx::MovieDefImpl *v5; // r12
  int i; // ebx
  Scaleform::GFx::LoadQueueEntryMT *pLoadQueueMTHead; // rbx
  unsigned int v8; // ebp
  Scaleform::GFx::LoadQueueEntryMT *v9; // rbx
  unsigned int j; // esi
  Scaleform::GFx::LoadQueueEntry *pLoadQueueHead; // rcx
  Scaleform::GFx::LoadQueueEntryMT *v12; // rcx
  char v13; // r15
  Scaleform::GFx::State *v14; // rax
  Scaleform::RefCountVImpl *v15; // rbx
  Scaleform::GFx::ASMovieRootBase *pObject; // rcx
  Scaleform::GFx::MovieImpl::ReturnValueHolder *pRetValHolder; // rsi
  Scaleform::GFx::MouseState *mMouseState; // rsi
  __int64 v19; // r14
  __int64 v20; // rbp
  unsigned int k; // esi
  Scaleform::GFx::UserEventHandler *v22; // rcx
  Scaleform::GFx::UserEventHandler *v23; // rcx
  Scaleform::GFx::KeyboardState *KeyboardStates; // rsi
  __int64 v25; // rdx
  __int64 v26; // r9
  int v27; // [rsp+20h] [rbp-48h] BYREF
  char v28; // [rsp+24h] [rbp-44h]
  int v29; // [rsp+28h] [rbp-40h]
  unsigned int v30; // [rsp+2Ch] [rbp-3Ch]
  int v31; // [rsp+30h] [rbp-38h] BYREF
  char v32; // [rsp+34h] [rbp-34h]
  int v33; // [rsp+38h] [rbp-30h]
  unsigned int v34; // [rsp+3Ch] [rbp-2Ch]

  if ( this->pMainMovie )
  {
    this->Flags2 |= 4u;
    Scaleform::GFx::MovieImpl::ProcessUnloadQueue(this);
    v4 = (Scaleform::RefCountVImpl *)this->pMainMovie->GetResourceMovieDef(this->pMainMovie);
    v5 = (Scaleform::GFx::MovieDefImpl *)v4;
    if ( v4 )
      Scaleform::Render::RenderBuffer::AddRef(v4);
    for ( i = LODWORD(this->MovieLevels.Data.Size) - 1; i >= 0; --i )
      Scaleform::GFx::MovieImpl::ReleaseLevelMovie(this, i);
    Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::LevelInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::LevelInfo,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->MovieLevels.Data,
      &this->MovieLevels,
      0i64);
    pLoadQueueMTHead = this->pLoadQueueMTHead;
    v8 = 0;
    if ( pLoadQueueMTHead )
    {
      do
      {
        ++v8;
        Scaleform::GFx::LoadQueueEntryMT::Cancel(pLoadQueueMTHead);
        pLoadQueueMTHead = pLoadQueueMTHead->pNext;
      }
      while ( pLoadQueueMTHead );
      if ( v8 )
      {
        do
        {
          v9 = this->pLoadQueueMTHead;
          for ( j = 0; v9; v9 = v9->pNext )
          {
            if ( v9->LoadFinished(v9) )
              ++j;
          }
        }
        while ( v8 > j );
      }
    }
    while ( this->pLoadQueueHead )
    {
      pLoadQueueHead = this->pLoadQueueHead;
      this->pLoadQueueHead = pLoadQueueHead->pNext;
      ((void (__fastcall *)(Scaleform::GFx::LoadQueueEntry *, __int64))pLoadQueueHead->~LoadQueueEntry)(
        pLoadQueueHead,
        1i64);
    }
    while ( this->pLoadQueueMTHead )
    {
      v12 = this->pLoadQueueMTHead;
      this->pLoadQueueMTHead = v12->pNext;
      ((void (__fastcall *)(Scaleform::GFx::LoadQueueEntryMT *, __int64))v12->~LoadQueueEntryMT)(v12, 1i64);
    }
    this->pLoadQueueHead = 0i64;
    this->pLoadQueueMTHead = 0i64;
    this->Flags |= 0x80000u;
    v13 = 0;
    this->pPlayListOptHead = 0i64;
    this->pPlayListHead = 0i64;
    v14 = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 27i64);
    v15 = (Scaleform::RefCountVImpl *)v14;
    if ( v14
      && ((unsigned __int8 (__fastcall *)(Scaleform::GFx::State *, Scaleform::GFx::MovieImpl *))v14->__vftable[30].~RefCountImplCore)(
           v14,
           this) )
    {
      v13 = 1;
      ((void (__fastcall *)(Scaleform::RefCountVImpl *, _QWORD))v15->__vftable[9].Release)(v15, 0i64);
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pIMECandidateListStyle);
    pObject = this->pASMovieRoot.pObject;
    this->pIMECandidateListStyle = 0i64;
    pObject->Shutdown(pObject);
    Scaleform::GFx::MovieImpl::ClearIndirectTransformPairs(this);
    pRetValHolder = this->pRetValHolder;
    if ( pRetValHolder )
    {
      if ( pRetValHolder->CharBuffer )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      Scaleform::ArrayDataLHCC<Scaleform::GFx::ASString,Scaleform::AllocatorLH<Scaleform::GFx::ASString,323>,Scaleform::ArrayDefaultPolicy>::~ArrayDataLHCC<Scaleform::GFx::ASString,Scaleform::AllocatorLH<Scaleform::GFx::ASString,323>,Scaleform::ArrayDefaultPolicy>(&pRetValHolder->StringArray.Data);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pRetValHolder);
    }
    this->pRetValHolder = 0i64;
    Scaleform::GFx::MovieImpl::ResetFocusStates(this);
    this->Flags &= 0x3FFFFFu;
    mMouseState = this->mMouseState;
    v19 = 6i64;
    v20 = 6i64;
    do
    {
      Scaleform::GFx::MouseState::ResetState(mMouseState++);
      --v20;
    }
    while ( v20 );
    this->pASMovieRoot.pObject->ForceCollect(this->pASMovieRoot.pObject, 2u);
    this->Flags2 &= ~4u;
    this->pASMovieRoot.pObject->Init(this->pASMovieRoot.pObject, v5);
    if ( this->pMainMovie )
    {
      if ( this->pUserEventHandler.pObject )
      {
        for ( k = 0; k < this->MouseCursorCount; ++k )
        {
          v22 = this->pUserEventHandler.pObject;
          v28 = 0;
          v27 = 21;
          v29 = 0;
          v30 = k;
          v22->HandleEvent(v22, this, (const Scaleform::GFx::Event *)&v27);
          v23 = this->pUserEventHandler.pObject;
          v32 = 0;
          v31 = 23;
          v33 = 0;
          v34 = k;
          v23->HandleEvent(v23, this, (const Scaleform::GFx::Event *)&v31);
        }
      }
      this->FocusRectChanged = 1;
      KeyboardStates = this->KeyboardStates;
      do
      {
        Scaleform::GFx::KeyboardState::ResetState(KeyboardStates++);
        --v19;
      }
      while ( v19 );
      if ( v13 )
        ((void (__fastcall *)(Scaleform::RefCountVImpl *, Scaleform::GFx::MovieImpl *))v15->__vftable[9].Release)(
          v15,
          this);
      if ( advance0 )
      {
        LOBYTE(v26) = 1;
        ((void (__fastcall *)(Scaleform::GFx::MovieImpl *, __int64, _QWORD, __int64))this->Advance)(
          this,
          v25,
          0i64,
          v26);
      }
      this->pASMovieRoot.pObject->ForceCollect(this->pASMovieRoot.pObject, 2u);
    }
    if ( v15 )
      Scaleform::RefCountImpl::Release(v15);
    if ( v5 )
      Scaleform::GFx::Resource::Release(v5);
  }
}

void __fastcall Scaleform::GFx::MovieImpl::RestoreViewport(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::MovieImpl::ResetViewportMatrix(this);
  Scaleform::Render::TreeNode::SetMatrix(this->pRenderRoot.pObject, &this->ViewportMatrix);
}

unsigned __int64 Scaleform::SFsprintf(char *dest, unsigned __int64 destsize, const char *format, ...)
{
  unsigned __int64 *v6; // rax
  unsigned __int64 result; // rax
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, format);
  v6 = _local_stdio_printf_options();
  LODWORD(result) = _stdio_common_vsnprintf_s(*v6, dest, destsize, 0xFFFFFFFFFFFFFFFFui64, format, 0i64, va);
  if ( (result & 0x80000000) != 0i64 )
    LODWORD(result) = -1;
  if ( (_DWORD)result != -1 )
    return (int)result;
  dest[destsize - 1] = 0;
  return destsize - 1;
}

void __fastcall Scaleform::GFx::MovieImpl::ScheduleGC(Scaleform::GFx::MovieImpl *this, __int64 gcFlags)
{
  this->pASMovieRoot.pObject->ScheduleGC(this->pASMovieRoot.pObject, gcFlags);
}

void __fastcall Scaleform::Hash<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>>::Set(
        Scaleform::Hash<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> > > *this,
        const Scaleform::GFx::ASString *key,
        Scaleform::GFx::MovieImpl::StickyVarNode *const *value)
{
  Scaleform::GFx::ASStringNode *pNode; // rdi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::TableType *pTable; // r9
  unsigned __int64 SizeMask; // r11
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r8
  bool v11; // zf
  unsigned __int64 *v12; // r8
  Scaleform::GFx::ASStringNode *v13; // rcx
  Scaleform::GFx::ASStringNode *v14; // rcx
  Scaleform::GFx::MovieImpl::StickyVarNode **v15; // rbx
  Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeRef keya; // [rsp+20h] [rbp-18h] BYREF

  pNode = key->pNode;
  pTable = this->mHash.pTable;
  keya.pFirst = key;
  keya.pSecond = (Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *const *)value;
  if ( !pTable )
    goto LABEL_12;
  SizeMask = pTable->SizeMask;
  v8 = pNode->HashFlags & (unsigned int)SizeMask;
  v9 = v8;
  v10 = v8 + 2 * (v8 + 1);
  v11 = *(&pTable->EntryCount + v10) == -2i64;
  v12 = &pTable->EntryCount + v10;
  if ( v11 || ((unsigned int)SizeMask & *(_DWORD *)(v12[1] + 28)) != v8 )
    goto LABEL_12;
  while ( 1 )
  {
    v13 = (Scaleform::GFx::ASStringNode *)v12[1];
    if ( ((unsigned int)SizeMask & v13->HashFlags) == v8 && v13 == pNode )
      break;
    v9 = *v12;
    if ( *v12 == -1i64 )
      goto LABEL_12;
    v12 = &pTable[v9 + 1].EntryCount + v9;
  }
  if ( v9 >= 0 )
  {
    ++pNode->RefCount;
    v14 = (Scaleform::GFx::ASStringNode *)*(&pTable[1].SizeMask + 3 * v9);
    v15 = (Scaleform::GFx::MovieImpl::StickyVarNode **)(&pTable[1].SizeMask + 3 * v9);
    v11 = v14->RefCount-- == 1;
    if ( v11 )
      Scaleform::GFx::ASStringNode::ReleaseNode(v14);
    *v15 = (Scaleform::GFx::MovieImpl::StickyVarNode *)pNode;
    v15[1] = *value;
  }
  else
  {
LABEL_12:
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeRef>(
      (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> > *)this,
      this,
      &keya,
      pNode->HashFlags);
  }
}

void __fastcall Scaleform::GFx::MovieImpl::SetASMovieRoot(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::ASMovieRootBase *pasmgr)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx

  if ( pasmgr )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pasmgr);
  pObject = (Scaleform::RefCountVImpl *)this->pSavedASMovieRoot.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pSavedASMovieRoot.pObject = pasmgr;
  if ( pasmgr )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pasmgr);
  v5 = (Scaleform::RefCountVImpl *)this->pASMovieRoot.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  this->pASMovieRoot.pObject = this->pSavedASMovieRoot.pObject;
}

void __fastcall Scaleform::GFx::MovieImpl::SetAccelerometerInterval(
        Scaleform::GFx::MovieImpl *this,
        int accelerometerId,
        int interval)
{
  Scaleform::GFx::State *v5; // rax
  Scaleform::RefCountVImpl *v6; // rbx

  v5 = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 10i64);
  v6 = (Scaleform::RefCountVImpl *)v5;
  if ( v5 )
  {
    ((void (__fastcall *)(Scaleform::GFx::State *, _QWORD, _QWORD))v5->__vftable[5].~RefCountImplCore)(
      v5,
      (unsigned int)accelerometerId,
      (unsigned int)interval);
    Scaleform::RefCountImpl::Release(v6);
  }
}

void __fastcall Scaleform::GFx::MovieImpl::SetActionErrorsSuppress(
        Scaleform::GFx::MovieImpl *this,
        bool suppressActionErrors)
{
  if ( suppressActionErrors )
    this->Flags |= 0x40u;
  else
    this->Flags &= ~0x40u;
}

void __fastcall Scaleform::GFx::MovieImpl::SetActionScriptData(
        Scaleform::GFx::MovieImpl *this,
        const char *extensionID,
        const char *contextID,
        Scaleform::GFx::Value *data)
{
  Scaleform::GFx::State *v7; // rax
  Scaleform::RefCountVImpl *v8; // rbx

  v7 = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 8i64);
  v8 = (Scaleform::RefCountVImpl *)v7;
  if ( v7 )
  {
    ((void (__fastcall *)(Scaleform::GFx::State *, const char *, const char *, Scaleform::GFx::Value *))v7->__vftable[6].~RefCountImplCore)(
      v7,
      extensionID,
      contextID,
      data);
    Scaleform::RefCountImpl::Release(v8);
  }
}

void __fastcall Scaleform::GFx::MovieImpl::SetBackgroundAlpha(Scaleform::GFx::MovieImpl *this, float alpha)
{
  unsigned __int8 v2; // r8

  v2 = -1;
  if ( (unsigned __int8)(int)(float)(alpha * 255.0) != 0xFF )
    v2 = (int)(float)(alpha * 255.0);
  this->BackgroundColor.Channels.Alpha = v2;
  Scaleform::Render::TreeRoot::SetBackgroundColor(this->pRenderRoot.pObject, &this->BackgroundColor);
}

void __fastcall Scaleform::GFx::MovieImpl::SetBackgroundColor(Scaleform::GFx::MovieImpl *this, unsigned int *color)
{
  this->BackgroundColor.Raw = *color;
  Scaleform::Render::TreeRoot::SetBackgroundColor(this->pRenderRoot.pObject, &this->BackgroundColor);
}

void __fastcall Scaleform::Render::TreeRoot::SetBackgroundColor(
        Scaleform::Render::TreeRoot *this,
        const Scaleform::Render::Color *color)
{
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 204i64) != color->Raw )
    *(Scaleform::Render::Color *)(&Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x1000u)[12].Flags + 1) = *color;
}

void __fastcall Scaleform::GFx::MovieImpl::SetCaptureThread(
        Scaleform::GFx::MovieImpl *this,
        unsigned int captureThreadId)
{
  ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)&this->RenderContext);
}

void __fastcall Scaleform::GFx::MovieImpl::SetControllerCount(Scaleform::GFx::MovieImpl *this, unsigned int n)
{
  unsigned int v2; // eax

  v2 = 6;
  if ( n <= 6 )
    v2 = n;
  this->ControllerCount = v2;
}

char __fastcall Scaleform::GFx::MovieImpl::SetControllerFocusGroup(
        Scaleform::GFx::MovieImpl *this,
        unsigned int controllerIdx,
        unsigned int focusGroupIndex)
{
  if ( controllerIdx >= 0x10 || focusGroupIndex >= 0x10 )
    return 0;
  this->FocusGroupIndexes[controllerIdx] = focusGroupIndex;
  if ( focusGroupIndex >= this->FocusGroupsCnt )
    this->FocusGroupsCnt = focusGroupIndex + 1;
  return 1;
}

void __fastcall Scaleform::GFx::MovieImpl::SetDragState(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::GFx::MovieImpl::DragState *st)
{
  Scaleform::GFx::MovieImpl::DragState *v2; // r8
  float x; // eax
  float v4; // eax
  float v5; // eax

  v2 = &this->CurrentDragStates[st->MouseIndex];
  v2->pCharacter = st->pCharacter;
  v2->pTopmostEntity = st->pTopmostEntity;
  v2->LockCenter = st->LockCenter;
  v2->Bound = st->Bound;
  x = st->BoundLT.x;
  v2->BoundLT.y = st->BoundLT.y;
  v2->BoundLT.x = x;
  v4 = st->BoundRB.x;
  v2->BoundRB.y = st->BoundRB.y;
  v2->BoundRB.x = v4;
  v5 = st->CenterDelta.x;
  v2->CenterDelta.y = st->CenterDelta.y;
  v2->CenterDelta.x = v5;
  v2->MouseIndex = st->MouseIndex;
}

void __fastcall Scaleform::GFx::MovieImpl::SetDragStateTopmostEntity(
        Scaleform::GFx::MovieImpl *this,
        unsigned int mouseIndex,
        Scaleform::GFx::InteractiveObject *topmostEntity)
{
  this->CurrentDragStates[mouseIndex].pTopmostEntity = topmostEntity;
}

void __fastcall Scaleform::GFx::MovieImpl::SetEdgeAAMode(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::Render::EdgeAAMode edgeAA)
{
  Scaleform::Render::TreeNode::SetEdgeAAMode(this->pRenderRoot.pObject, edgeAA);
}

void __fastcall Scaleform::GFx::Movie::SetExternalInterfaceRetVal(
        Scaleform::GFx::Movie *this,
        const Scaleform::GFx::Value *v)
{
  this->pASMovieRoot.pObject->SetExternalInterfaceRetVal(this->pASMovieRoot.pObject, v);
}

__int64 __fastcall Scaleform::GFx::MovieImpl::SetFocusTo(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::InteractiveObject *ch,
        unsigned int controllerIdx,
        Scaleform::GFx::FocusMovedType fmt)
{
  Scaleform::GFx::InteractiveObject *v6; // rbx
  char *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  unsigned __int8 v14; // di

  v6 = 0i64;
  v9 = (char *)this + 96 * this->FocusGroupIndexes[controllerIdx];
  v10 = *((_QWORD *)v9 + 2459);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( v11 )
    {
      v6 = *(Scaleform::GFx::InteractiveObject **)(v10 + 8);
      v12 = *(_DWORD *)(v11 + 8);
      if ( v12 )
      {
        v6->RefCount = v12 + 1;
        ++v6->RefCount;
        Scaleform::RefCountNTSImpl::Release(v6);
      }
      else
      {
        v6 = 0i64;
      }
    }
    else
    {
      if ( (*(_DWORD *)v10)-- == 1 )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      *((_QWORD *)v9 + 2459) = 0i64;
    }
  }
  if ( v6 == ch
    || (this->FocusRectChanged = 1, v6) && v6->pParent && !v6->OnLosingKeyboardFocus(v6, ch, controllerIdx, fmt) )
  {
    v14 = 0;
  }
  else
  {
    Scaleform::GFx::MovieImpl::TransferFocus(this, ch, controllerIdx, fmt);
    if ( ch )
      ch->OnGettingKeyboardFocus(ch, controllerIdx, fmt);
    v14 = 1;
  }
  if ( v6 )
    Scaleform::RefCountNTSImpl::Release(v6);
  return v14;
}

void __fastcall Scaleform::GFx::MovieImpl::SetGeolocationInterval(
        Scaleform::GFx::MovieImpl *this,
        int geolocationId,
        int interval)
{
  Scaleform::GFx::State *v5; // rax
  Scaleform::RefCountVImpl *v6; // rbx

  v5 = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 11i64);
  v6 = (Scaleform::RefCountVImpl *)v5;
  if ( v5 )
  {
    ((void (__fastcall *)(Scaleform::GFx::State *, _QWORD, _QWORD))v5->__vftable[5].~RefCountImplCore)(
      v5,
      (unsigned int)geolocationId,
      (unsigned int)interval);
    Scaleform::RefCountImpl::Release(v6);
  }
}

void __fastcall Scaleform::GFx::MovieImpl::SetIMECandidateListStyle(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::GFx::IMECandidateListStyle *st)
{
  Scaleform::GFx::IMECandidateListStyle *pIMECandidateListStyle; // rdx
  __int64 v5; // rax

  pIMECandidateListStyle = this->pIMECandidateListStyle;
  if ( pIMECandidateListStyle )
  {
    *(_OWORD *)&pIMECandidateListStyle->TextColor = *(_OWORD *)&st->TextColor;
    *(_OWORD *)&pIMECandidateListStyle->SelectedBackgroundColor = *(_OWORD *)&st->SelectedBackgroundColor;
    *(_QWORD *)&pIMECandidateListStyle->FontSize = *(_QWORD *)&st->FontSize;
    *(_DWORD *)&pIMECandidateListStyle->Flags = *(_DWORD *)&st->Flags;
  }
  else
  {
    v5 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pHeap->Alloc)(this->pHeap, 44i64);
    if ( v5 )
    {
      *(_OWORD *)v5 = *(_OWORD *)&st->TextColor;
      *(_OWORD *)(v5 + 16) = *(_OWORD *)&st->SelectedBackgroundColor;
      *(_QWORD *)(v5 + 32) = *(_QWORD *)&st->FontSize;
      *(_DWORD *)(v5 + 40) = *(_DWORD *)&st->Flags;
      this->pIMECandidateListStyle = (Scaleform::GFx::IMECandidateListStyle *)v5;
    }
    else
    {
      this->pIMECandidateListStyle = 0i64;
    }
  }
}

void __fastcall Scaleform::Render::Matrix2x4<float>::SetInverse(
        Scaleform::Render::Matrix2x4<float> *this,
        const Scaleform::Render::Matrix2x4<float> *m)
{
  float v2; // xmm1_4
  float v3; // xmm6_4
  float v4; // xmm4_4
  float v5; // xmm2_4
  float v6; // xmm5_4

  v2 = (float)(m->M[1][1] * m->M[0][0]) - (float)(m->M[0][1] * m->M[1][0]);
  if ( v2 == 0.0 )
  {
    *(_OWORD *)&this->M[0][0] = 0x3F800000ui64;
    this->M[1][3] = 0.0;
    this->M[1][0] = 0.0;
    *(_QWORD *)&this->M[1][1] = 1065353216i64;
    LODWORD(this->M[0][3]) = LODWORD(m->M[0][3]) ^ _xmm;
    LODWORD(this->M[1][3]) = LODWORD(m->M[1][3]) ^ _xmm;
  }
  else
  {
    v3 = m->M[1][1] * (float)(1.0 / v2);
    this->M[0][0] = v3;
    v4 = (float)(1.0 / v2) * m->M[0][0];
    this->M[1][1] = v4;
    LODWORD(v5) = COERCE_UNSIGNED_INT((float)(1.0 / v2) * m->M[0][1]) ^ _xmm;
    this->M[0][1] = v5;
    LODWORD(v6) = COERCE_UNSIGNED_INT((float)(1.0 / v2) * m->M[1][0]) ^ _xmm;
    this->M[1][0] = v6;
    LODWORD(this->M[0][3]) = COERCE_UNSIGNED_INT((float)(m->M[0][3] * v3) + (float)(m->M[1][3] * v5)) ^ _xmm;
    LODWORD(this->M[1][3]) = COERCE_UNSIGNED_INT((float)(m->M[1][3] * v4) + (float)(m->M[0][3] * v6)) ^ _xmm;
  }
}

void __fastcall Scaleform::GFx::MovieImpl::SetKeyboardFocusTo(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::InteractiveObject *ch,
        unsigned int controllerIdx,
        Scaleform::GFx::FocusMovedType fmt)
{
  __int64 v7; // r12
  Scaleform::GFx::State *v8; // rax
  int v9; // er14
  Scaleform::GFx::State *v10; // rbx
  Scaleform::GFx::InteractiveObject *v11; // rsi
  __int64 v12; // r15
  Scaleform::WeakPtrProxy *pObject; // rdx
  Scaleform::RefCountWeakSupportImpl *v14; // rax
  int RefCount; // eax
  Scaleform::GFx::State_vtbl *v16; // rcx
  Scaleform::GFx::FocusGroupDescr *v17; // rsi
  bool v18; // zf

  v7 = controllerIdx;
  v8 = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 27i64);
  v9 = 0;
  v10 = v8;
  if ( v8 && v8[1].__vftable )
  {
    v11 = 0i64;
    v12 = this->FocusGroupIndexes[v7];
    pObject = this->FocusGroups[v12].LastFocused.pProxy.pObject;
    if ( pObject )
    {
      v14 = pObject->pObject;
      if ( v14 )
      {
        v11 = (Scaleform::GFx::InteractiveObject *)pObject->pObject;
        RefCount = v14->RefCount;
        if ( RefCount )
        {
          v11->RefCount = RefCount + 1;
          ++v11->RefCount;
          Scaleform::RefCountNTSImpl::Release(v11);
        }
        else
        {
          v11 = 0i64;
        }
      }
      else
      {
        v18 = pObject->RefCount-- == 1;
        if ( v18 )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->FocusGroups[v12].LastFocused.pProxy.pObject = 0i64;
      }
    }
    if ( v11 != ch )
    {
      v16 = v10[1].__vftable;
      if ( v16 )
        ch = (Scaleform::GFx::InteractiveObject *)(*((__int64 (__fastcall **)(Scaleform::GFx::State_vtbl *, Scaleform::GFx::MovieImpl *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::InteractiveObject *, _QWORD))v16->~RefCountImplCore
                                                   + 16))(
                                                    v16,
                                                    this,
                                                    v11,
                                                    ch,
                                                    0i64);
    }
    if ( v11 )
      Scaleform::RefCountNTSImpl::Release(v11);
  }
  v17 = &this->FocusGroups[this->FocusGroupIndexes[v7]];
  if ( ch && ch->GetType(ch) == MouseWheel )
  {
    if ( v17->FocusRectShown )
      this->FocusRectChanged = 1;
    v17->FocusRectShown = 0;
  }
  else
  {
    if ( !v17->FocusRectShown )
      this->FocusRectChanged = 1;
    v17->FocusRectShown = 1;
  }
  v17->LastFocusKeyCode = 0;
  if ( (unsigned __int8)Scaleform::GFx::MovieImpl::SetFocusTo(this, ch, v7, fmt) && v17->FocusRectShown )
  {
    v18 = ch == 0i64;
    if ( ch )
    {
      do
      {
        if ( !ch->GetVisible(ch) )
          break;
        ch = ch->pParent;
      }
      while ( ch );
      v18 = ch == 0i64;
    }
    LOBYTE(v9) = v18;
    if ( v17->FocusRectShown != v9 )
      this->FocusRectChanged = 1;
    v17->FocusRectShown = ch == 0i64;
  }
  if ( v10 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v10);
}

void __fastcall Scaleform::GFx::MovieImpl::SetKeyboardListener(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::KeyboardState::IListener *l)
{
  Scaleform::GFx::ASMovieRootBase *KeyboardStates; // rbx
  __int64 v4; // rdi

  KeyboardStates = (Scaleform::GFx::ASMovieRootBase *)this->KeyboardStates;
  v4 = 6i64;
  do
  {
    Scaleform::GFx::KeyboardState::SetListener(KeyboardStates, (Scaleform::GFx::MovieImpl *)l);
    KeyboardStates = (Scaleform::GFx::ASMovieRootBase *)((char *)KeyboardStates + 1672);
    --v4;
  }
  while ( v4 );
}

void __fastcall Scaleform::GFx::ASUserData::SetLastObjectValue(
        Scaleform::GFx::ASUserData *this,
        Scaleform::GFx::Value::ObjectInterface *pobjIfc,
        void *pdata,
        bool isdobj)
{
  this->pLastObjectInterface = pobjIfc;
  this->pLastData = pdata;
  this->IsLastDispObj = isdobj;
}

char __fastcall Scaleform::GFx::MovieImpl::SetLevelMovie(
        Scaleform::GFx::MovieImpl *this,
        int level,
        Scaleform::GFx::DisplayObjContainer *psprite)
{
  unsigned int v6; // ecx
  unsigned __int64 Size; // r8
  Scaleform::GFx::MovieImpl::LevelInfo *Data; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdi
  Scaleform::GFx::MovieImpl::LevelInfo *v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // r8
  Scaleform::GFx::MovieImpl::LevelInfo *v15; // rdi
  Scaleform::RefCountVImpl *v16; // rax
  Scaleform::GFx::MovieDefImpl *v17; // rbx
  Scaleform::GFx::MovieDefImpl *pObject; // rcx
  Scaleform::GFx::MovieDefImpl *v19; // rcx
  Scaleform::AmpStats *v20; // rdi
  Scaleform::AmpStats_vtbl *v21; // rbx
  __int64 v22; // rax
  Scaleform::GFx::MovieDefImpl *v23; // rax
  Scaleform::GFx::StateBagImpl *v24; // rbx
  Scaleform::GFx::StateBagImpl *v25; // rdi
  Scaleform::RefCountVImpl *v26; // rcx
  Scaleform::GFx::MovieDef *v27; // rax
  float v28; // xmm0_4
  bool v29; // zf
  Scaleform::GFx::MovieDefImpl *v30; // rsi
  int v31; // ebp
  int v32; // edi
  int v33; // ebx
  float v34; // xmm0_4
  Scaleform::GFx::MovieImpl_vtbl *v35; // rax
  int v37[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v38; // [rsp+28h] [rbp-60h]
  int v39; // [rsp+30h] [rbp-58h]
  int v40; // [rsp+34h] [rbp-54h]
  int v41; // [rsp+38h] [rbp-50h]
  __int64 v42; // [rsp+3Ch] [rbp-4Ch]
  __int64 v43; // [rsp+44h] [rbp-44h]
  int v44; // [rsp+4Ch] [rbp-3Ch]
  int v45; // [rsp+50h] [rbp-38h]

  v6 = 0;
  Size = this->MovieLevels.Data.Size;
  if ( Size )
  {
    Data = this->MovieLevels.Data.Data;
    v9 = 0i64;
    while ( Data[v9].Level < level )
    {
      v9 = ++v6;
      if ( v6 >= Size )
        goto LABEL_5;
    }
    if ( Data[v6].Level == level )
      return 0;
  }
LABEL_5:
  this->Flags |= 0x100u;
  if ( psprite )
    ++psprite->RefCount;
  v10 = this->MovieLevels.Data.Size;
  v11 = v6;
  Scaleform::ArrayDataBase<Scaleform::GFx::MovieImpl::LevelInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::LevelInfo,327>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->MovieLevels.Data,
    &this->MovieLevels,
    v10 + 1);
  if ( v10 + 1 > v10 )
  {
    v12 = &this->MovieLevels.Data.Data[v10];
    v13 = 1i64;
    do
    {
      if ( v12 )
        v12->pSprite.pObject = 0i64;
      ++v12;
      --v13;
    }
    while ( v13 );
  }
  v14 = this->MovieLevels.Data.Size;
  if ( v11 < v14 - 1 )
    memmove(&this->MovieLevels.Data.Data[v11 + 1], &this->MovieLevels.Data.Data[v11], 16 * (v14 - v11) - 16);
  v15 = &this->MovieLevels.Data.Data[v11];
  if ( v15 )
  {
    v15->Level = level;
    if ( psprite )
      ++psprite->RefCount;
    v15->pSprite.pObject = psprite;
  }
  psprite->OnInsertionAsLevel(psprite, level);
  if ( !level )
  {
    this->pMainMovie = psprite;
    v16 = (Scaleform::RefCountVImpl *)psprite->GetResourceMovieDef(psprite);
    v17 = (Scaleform::GFx::MovieDefImpl *)v16;
    if ( v16 )
      Scaleform::Render::RenderBuffer::AddRef(v16);
    pObject = this->pMainMovieDef.pObject;
    if ( pObject )
      Scaleform::GFx::Resource::Release(pObject);
    this->pMainMovieDef.pObject = v17;
    v19 = v17;
    if ( v17 )
    {
      v20 = this->AdvanceStats.pObject;
      if ( v20 )
      {
        v21 = v20->__vftable;
        v22 = (__int64)v19->GetFileURL(v19);
        v21->SetName(v20, (const char *)v22);
      }
    }
    v23 = this->pMainMovieDef.pObject;
    v24 = this->pStateBag.pObject;
    v25 = v23->pStateBag.pObject;
    if ( v25 )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v23->pStateBag.pObject);
    v26 = (Scaleform::RefCountVImpl *)v24->pDelegate.pObject;
    if ( v26 )
      Scaleform::RefCountImpl::Release(v26);
    v24->pDelegate.pObject = v25;
    v27 = this->GetMovieDef(this);
    v28 = v27->GetFrameRate(v27);
    v29 = (this->Flags & 1) == 0;
    this->FrameTime = 1.0 / v28;
    if ( v29 )
    {
      v30 = psprite->GetResourceMovieDef(psprite);
      v31 = (int)v30->GetHeight(v30);
      v32 = (int)v30->GetWidth(v30);
      v33 = (int)v30->GetHeight(v30);
      v34 = v30->GetWidth(v30);
      v37[1] = v33;
      v38 = 0i64;
      v39 = v32;
      v40 = v31;
      v43 = 0i64;
      v42 = 0i64;
      v41 = 0;
      v45 = 1065353216;
      v37[0] = (int)v34;
      v35 = this->Scaleform::GFx::Movie::Scaleform::RefCountBase<Scaleform::GFx::Movie,327>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
      v44 = 1065353216;
      v35->SetViewport(this, (const Scaleform::GFx::Viewport *)v37);
    }
  }
  this->Flags |= 0x80u;
  Scaleform::RefCountNTSImpl::Release(psprite);
  return 1;
}

void __fastcall Scaleform::Render::ImageDelegate::SetMatrix(
        Scaleform::Render::ImageDelegate *this,
        const Scaleform::Render::Matrix2x4<float> *mat,
        Scaleform::MemoryHeap *heap)
{
  this->pImage.pObject->SetMatrix(this->pImage.pObject, mat, heap);
}

void __fastcall Scaleform::Render::ImageDelegate::SetMatrixInverse(
        Scaleform::Render::ImageDelegate *this,
        const Scaleform::Render::Matrix2x4<float> *mat,
        Scaleform::MemoryHeap *heap)
{
  this->pImage.pObject->SetMatrixInverse(this->pImage.pObject, mat, heap);
}

void __fastcall Scaleform::GFx::MovieImpl::SetModalClip(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::Sprite *pmovie,
        unsigned int controllerIdx)
{
  char *v3; // rsi
  Scaleform::GFx::CharacterHandle *v4; // rbx
  Scaleform::GFx::CharacterHandle *pObject; // rbx
  Scaleform::GFx::CharacterHandle *v6; // rdi

  v3 = (char *)this + 96 * this->FocusGroupIndexes[controllerIdx];
  if ( pmovie )
  {
    pObject = pmovie->pNameHandle.pObject;
    if ( pObject || (pObject = Scaleform::GFx::DisplayObject::CreateCharacterHandle(pmovie)) != 0i64 )
      ++pObject->RefCount;
    v6 = (Scaleform::GFx::CharacterHandle *)*((_QWORD *)v3 + 2460);
    if ( v6 )
    {
      if ( --v6->RefCount <= 0 )
      {
        Scaleform::GFx::CharacterHandle::~CharacterHandle(v6);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v6);
      }
    }
    *((_QWORD *)v3 + 2460) = pObject;
  }
  else
  {
    v4 = (Scaleform::GFx::CharacterHandle *)*((_QWORD *)v3 + 2460);
    if ( v4 )
    {
      if ( --v4->RefCount <= 0 )
      {
        Scaleform::GFx::CharacterHandle::~CharacterHandle(v4);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v4);
      }
    }
    *((_QWORD *)v3 + 2460) = 0i64;
  }
}

void __fastcall Scaleform::GFx::MovieImpl::SetMouseCursorCount(Scaleform::GFx::MovieImpl *this, unsigned int n)
{
  unsigned int v2; // eax

  v2 = 6;
  if ( n <= 6 )
    v2 = n;
  this->MouseCursorCount = v2;
}

void __fastcall Scaleform::GFx::MovieImpl::SetMultitouchInputMode(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::MovieImpl::MultitouchInputMode mode)
{
  Scaleform::GFx::State *v4; // rax
  Scaleform::RefCountVImpl *v5; // rbx

  v4 = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 7i64);
  v5 = (Scaleform::RefCountVImpl *)v4;
  if ( v4 )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::GFx::State *, _QWORD))v4->__vftable[3].~RefCountImplCore)(
           v4,
           (unsigned int)mode) )
    {
      this->MultitouchMode = mode;
    }
    Scaleform::RefCountImpl::Release(v5);
  }
}

void __fastcall Scaleform::GFx::MovieImpl::SetPause(Scaleform::GFx::MovieImpl *this, bool pause)
{
  Scaleform::GFx::InteractiveObject *pPlayListHead; // rcx
  Scaleform::GFx::InteractiveObject *pPlayNext; // rbx

  if ( ((this->Flags & 0x100000) == 0 || !pause) && ((this->Flags & 0x100000) != 0 || pause) )
  {
    if ( pause )
    {
      this->Flags |= 0x100000u;
      this->PauseTickMs = Scaleform::Timer::GetTicks() / 0x3E8;
    }
    else
    {
      this->Flags &= ~0x100000u;
      this->StartTickMs += Scaleform::Timer::GetTicks() / 0x3E8 - this->PauseTickMs;
    }
    pPlayListHead = this->pPlayListHead;
    if ( pPlayListHead )
    {
      do
      {
        pPlayNext = pPlayListHead->pPlayNext;
        pPlayListHead->SetPause(pPlayListHead, pause);
        pPlayListHead = pPlayNext;
      }
      while ( pPlayNext );
    }
  }
}

void __fastcall Scaleform::GFx::MovieImpl::SetPlayState(Scaleform::GFx::MovieImpl *this, __int64 s)
{
  Scaleform::GFx::InteractiveObject *pMainMovie; // rcx

  pMainMovie = this->pMainMovie;
  if ( pMainMovie )
    pMainMovie->SetPlayState(pMainMovie, (Scaleform::GFx::PlayState)s);
}

void __fastcall Scaleform::GFx::MovieImpl::SetProjectionMatrix3D(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::Render::Matrix4x4<float> *projMat)
{
  Scaleform::GFx::DisplayObjContainer *v3; // rax

  v3 = this->pASMovieRoot.pObject->GetRootMovie(this->pASMovieRoot.pObject, 0i64);
  if ( v3 )
    v3->SetProjectionMatrix3D(v3, projMat);
}

void __fastcall Scaleform::GFx::MovieImpl::SetSafeRect(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::Render::Rect<float> *rect)
{
  float y2; // xmm2_4
  float x2; // xmm1_4
  float x1; // eax

  y2 = rect->y2;
  x2 = rect->x2;
  x1 = rect->x1;
  this->SafeRect.y1 = rect->y1;
  this->SafeRect.x2 = x2;
  this->SafeRect.y2 = y2;
  this->SafeRect.x1 = x1;
}

void __fastcall Scaleform::Render::TreeShape::SetShape(
        Scaleform::Render::TreeShape *this,
        Scaleform::Render::ShapeMeshProvider *pshape)
{
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rbx
  Scaleform::Render::ContextImpl::EntryData_vtbl *v5; // rcx

  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  if ( pshape )
    pshape->AddRef(&pshape->Scaleform::Render::MeshProvider);
  v5 = WritableData[9].__vftable;
  if ( v5 )
    (*((void (__fastcall **)(void (__fastcall **)(Scaleform::Render::ContextImpl::EntryData *, void *)))v5->CopyTo + 2))(&v5->CopyTo);
  WritableData[9].__vftable = (Scaleform::Render::ContextImpl::EntryData_vtbl *)pshape;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::GFx::MovieImpl::SetStageAutoOrients(Scaleform::GFx::MovieImpl *this, bool v)
{
  if ( v )
    this->Flags |= 0x4000u;
  else
    this->Flags &= ~0x4000u;
}

void __fastcall Scaleform::GFx::StateBagImpl::SetState(
        Scaleform::GFx::StateBagImpl *this,
        Scaleform::GFx::State::StateType state,
        Scaleform::GFx::State *pstate)
{
  Scaleform::Lock *p_pDelegate; // rdi
  Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>_vtbl *v6; // r9
  unsigned __int64 SType; // r10
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  void (__fastcall **v12)(Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl> *); // rcx
  char *v13; // rsi
  Scaleform::RefCountVImpl *v14; // rcx
  Scaleform::GFx::StateBagImpl::StatePtr key; // [rsp+30h] [rbp+8h] BYREF
  Scaleform::GFx::State::StateType v16; // [rsp+38h] [rbp+10h] BYREF

  v16 = state;
  p_pDelegate = (Scaleform::Lock *)&this->pDelegate;
  Scaleform::Lock::DoLock((Scaleform::Lock *)&this->pDelegate);
  if ( pstate )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pstate);
    v6 = this->Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>::__vftable;
    SType = pstate->SType;
    key.pState.pObject = pstate;
    if ( !v6 )
      goto LABEL_13;
    v8 = SType & (unsigned __int64)v6->IsVerboseActionErrors;
    v9 = v8;
    v10 = v8 + 2 * (v8 + 1);
    v11 = *((_QWORD *)&v6->~LogBase<Scaleform::GFx::StateBagImpl> + v10) == -2i64;
    v12 = &v6->~LogBase<Scaleform::GFx::StateBagImpl> + v10;
    if ( v11 || v12[1] != (void (__fastcall *)(Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl> *))v8 )
      goto LABEL_13;
    while ( v12[1] != (void (__fastcall *)(Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl> *))v8
         || *((_DWORD *)v12[2] + 4) != (_DWORD)SType )
    {
      v9 = (__int64)*v12;
      if ( *v12 == (void (__fastcall *)(Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl> *))-1i64 )
        goto LABEL_13;
      v12 = &v6[v9 + 1].~LogBase<Scaleform::GFx::StateBagImpl> + v9;
    }
    if ( v9 >= 0 )
    {
      v13 = (char *)v6 + 24 * v9;
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pstate);
      v14 = (Scaleform::RefCountVImpl *)*((_QWORD *)v13 + 4);
      if ( v14 )
        Scaleform::RefCountImpl::Release(v14);
      *((_QWORD *)v13 + 4) = pstate;
    }
    else
    {
LABEL_13:
      Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp>>::add<Scaleform::GFx::StateBagImpl::StatePtr>(
        (Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> > *)&this->Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>,
        &this->Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>,
        &key,
        SType);
      pstate = key.pState.pObject;
    }
    if ( pstate )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pstate);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp>>::RemoveAlt<enum Scaleform::GFx::State::StateType>(
      (Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> > *)&this->Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>,
      &v16);
  }
  Scaleform::Lock::Unlock(p_pDelegate);
}

void __fastcall Scaleform::GFx::MouseState::SetTopmostEntity(
        Scaleform::GFx::MouseState *this,
        Scaleform::GFx::InteractiveObject *pch)
{
  Scaleform::WeakPtrProxy *pObject; // rdx
  bool v5; // zf
  Scaleform::WeakPtrProxy *WeakProxy; // rax
  Scaleform::WeakPtrProxy *v7; // rdx
  Scaleform::WeakPtrProxy *v8; // rsi
  Scaleform::WeakPtrProxy *v9; // rdx

  if ( this->TopmostEntity.pProxy.pObject )
    ++this->TopmostEntity.pProxy.pObject->RefCount;
  pObject = this->PrevTopmostEntity.pProxy.pObject;
  if ( pObject )
  {
    v5 = pObject->RefCount-- == 1;
    if ( v5 )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  }
  this->PrevTopmostEntity.pProxy.pObject = this->TopmostEntity.pProxy.pObject;
  *((_BYTE *)this + 76) ^= (*((_BYTE *)this + 76) ^ (2 * *((_BYTE *)this + 76))) & 2;
  if ( pch )
  {
    WeakProxy = Scaleform::RefCountWeakSupportImpl::CreateWeakProxy(pch);
    v7 = this->TopmostEntity.pProxy.pObject;
    v8 = WeakProxy;
    if ( this->TopmostEntity.pProxy.pObject )
    {
      v5 = v7->RefCount-- == 1;
      if ( v5 )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    this->TopmostEntity.pProxy.pObject = v8;
  }
  else
  {
    v9 = this->TopmostEntity.pProxy.pObject;
    if ( this->TopmostEntity.pProxy.pObject )
    {
      v5 = v9->RefCount-- == 1;
      if ( v5 )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    this->TopmostEntity.pProxy.pObject = 0i64;
  }
  *((_BYTE *)this + 76) &= ~1u;
  *((_BYTE *)this + 76) |= pch == 0i64;
}

void __fastcall Scaleform::GFx::MovieImpl::SetUserData(Scaleform::GFx::MovieImpl *this, void *ud)
{
  this->UserData = ud;
}

__int64 __fastcall Scaleform::GFx::Movie::SetVariable(
        Scaleform::GFx::Movie *this,
        const char *ppathToVar,
        const Scaleform::GFx::Value *value,
        __int64 setType)
{
  return ((__int64 (__fastcall *)(Scaleform::GFx::ASMovieRootBase *, const char *, const Scaleform::GFx::Value *, __int64))this->pASMovieRoot.pObject->SetVariable)(
           this->pASMovieRoot.pObject,
           ppathToVar,
           value,
           setType);
}

__int64 __fastcall Scaleform::GFx::Movie::SetVariableArray(
        Scaleform::GFx::Movie *this,
        __int64 type,
        const char *ppathToVar,
        __int64 index,
        const void *pdata,
        unsigned int count,
        Scaleform::GFx::Movie::SetVarType setType)
{
  return ((__int64 (__fastcall *)(Scaleform::GFx::ASMovieRootBase *, __int64, const char *, __int64))this->pASMovieRoot.pObject->SetVariableArray)(
           this->pASMovieRoot.pObject,
           type,
           ppathToVar,
           index);
}

void __fastcall Scaleform::GFx::MovieImpl::SetVerboseAction(Scaleform::GFx::MovieImpl *this, bool verboseAction)
{
  if ( verboseAction )
    this->Flags |= 4u;
  else
    this->Flags &= ~4u;
}

void __fastcall Scaleform::GFx::MovieImpl::SetViewAlignment(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::Movie::AlignType align)
{
  float Scale; // xmm0_4
  float AspectRatio; // xmm1_4
  int ScissorHeight; // eax
  Scaleform::GFx::MovieImpl_vtbl *v5; // rax
  int v6[18]; // [rsp+20h] [rbp-48h] BYREF

  this->ViewAlignment = align;
  Scale = this->mViewport.Scale;
  AspectRatio = this->mViewport.AspectRatio;
  v6[0] = this->mViewport.BufferWidth;
  v6[1] = this->mViewport.BufferHeight;
  v6[2] = this->mViewport.Left;
  v6[3] = this->mViewport.Top;
  v6[4] = this->mViewport.Width;
  v6[5] = this->mViewport.Height;
  v6[10] = this->mViewport.Flags;
  v6[6] = this->mViewport.ScissorLeft;
  v6[7] = this->mViewport.ScissorTop;
  v6[8] = this->mViewport.ScissorWidth;
  ScissorHeight = this->mViewport.ScissorHeight;
  ++this->mViewport.Flags;
  v6[9] = ScissorHeight;
  v5 = this->Scaleform::GFx::Movie::Scaleform::RefCountBase<Scaleform::GFx::Movie,327>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  *(float *)&v6[11] = Scale;
  *(float *)&v6[12] = AspectRatio;
  v5->SetViewport(this, (const Scaleform::GFx::Viewport *)v6);
}

void __fastcall Scaleform::GFx::MovieImpl::SetViewMatrix3D(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::Render::Matrix3x4<float> *viewMat)
{
  Scaleform::GFx::DisplayObjContainer *v3; // rax

  v3 = this->pASMovieRoot.pObject->GetRootMovie(this->pASMovieRoot.pObject, 0i64);
  if ( v3 )
    v3->SetViewMatrix3D(v3, viewMat);
}

void __fastcall Scaleform::GFx::MovieImpl::SetViewScaleMode(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::Movie::ScaleModeType scaleMode)
{
  Scaleform::GFx::UserEventHandler *pObject; // rcx
  float Scale; // xmm0_4
  float AspectRatio; // xmm1_4
  int ScissorHeight; // eax
  Scaleform::GFx::MovieImpl_vtbl *v8; // rax
  int v9[18]; // [rsp+20h] [rbp-48h] BYREF
  int v10; // [rsp+70h] [rbp+8h] BYREF
  char v11; // [rsp+74h] [rbp+Ch]

  pObject = this->pUserEventHandler.pObject;
  if ( pObject )
  {
    v11 = 0;
    v10 = 25 - (scaleMode != SM_NoScale);
    pObject->HandleEvent(pObject, this, (const Scaleform::GFx::Event *)&v10);
  }
  this->ViewScaleMode = scaleMode;
  Scale = this->mViewport.Scale;
  AspectRatio = this->mViewport.AspectRatio;
  v9[0] = this->mViewport.BufferWidth;
  v9[1] = this->mViewport.BufferHeight;
  v9[2] = this->mViewport.Left;
  v9[3] = this->mViewport.Top;
  v9[4] = this->mViewport.Width;
  v9[5] = this->mViewport.Height;
  v9[10] = this->mViewport.Flags;
  v9[6] = this->mViewport.ScissorLeft;
  v9[7] = this->mViewport.ScissorTop;
  v9[8] = this->mViewport.ScissorWidth;
  ScissorHeight = this->mViewport.ScissorHeight;
  ++this->mViewport.Flags;
  v9[9] = ScissorHeight;
  v8 = this->Scaleform::GFx::Movie::Scaleform::RefCountBase<Scaleform::GFx::Movie,327>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  *(float *)&v9[11] = Scale;
  *(float *)&v9[12] = AspectRatio;
  v8->SetViewport(this, (const Scaleform::GFx::Viewport *)v9);
}

void __fastcall Scaleform::GFx::MovieImpl::SetViewport(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::GFx::Viewport *viewDesc)
{
  Scaleform::GFx::Viewport *p_mViewport; // rsi
  int Height; // ebp
  int Left; // er12
  int Width; // er14
  int Top; // er15
  float AspectRatio; // xmm7_4
  float Scale; // xmm11_4
  float x1; // xmm6_4
  float y1; // xmm9_4
  float x2; // xmm8_4
  float y2; // xmm10_4
  Scaleform::GFx::Movie::ScaleModeType ViewScaleMode; // eax

  p_mViewport = &this->mViewport;
  if ( memcmp(viewDesc, &this->mViewport, 0x34ui64) )
  {
    Height = this->mViewport.Height;
    Left = this->mViewport.Left;
    Width = this->mViewport.Width;
    Top = this->mViewport.Top;
    AspectRatio = this->mViewport.AspectRatio;
    Scale = this->mViewport.Scale;
    this->Flags |= 1u;
    *(_OWORD *)&p_mViewport->BufferWidth = *(_OWORD *)&viewDesc->BufferWidth;
    *(_OWORD *)&p_mViewport->Width = *(_OWORD *)&viewDesc->Width;
    *(_OWORD *)&p_mViewport->ScissorWidth = *(_OWORD *)&viewDesc->ScissorWidth;
    p_mViewport->AspectRatio = viewDesc->AspectRatio;
    x1 = this->VisibleFrameRect.x1;
    y1 = this->VisibleFrameRect.y1;
    x2 = this->VisibleFrameRect.x2;
    y2 = this->VisibleFrameRect.y2;
    Scaleform::GFx::MovieImpl::UpdateViewport(this);
    if ( x1 != this->VisibleFrameRect.x1
      || x2 != this->VisibleFrameRect.x2
      || y1 != this->VisibleFrameRect.y1
      || y2 != this->VisibleFrameRect.y2
      || (ViewScaleMode = this->ViewScaleMode) == SM_NoScale
      && (Width != this->mViewport.Width
       || Height != this->mViewport.Height
       || Left != this->mViewport.Left
       || Top != this->mViewport.Top
       || Scale != this->mViewport.Scale
       || AspectRatio != this->mViewport.AspectRatio)
      || ViewScaleMode != SM_ExactFit
      && (Width != this->mViewport.Width
       || Height != this->mViewport.Height
       || AspectRatio != this->mViewport.AspectRatio) )
    {
      this->pASMovieRoot.pObject->NotifyOnResize(this->pASMovieRoot.pObject);
    }
    Scaleform::Render::TreeRoot::SetViewport(this->pRenderRoot.pObject, p_mViewport);
    Scaleform::Render::TreeRoot::SetBackgroundColor(this->pRenderRoot.pObject, &this->BackgroundColor);
    Scaleform::Render::TreeNode::SetMatrix(this->pRenderRoot.pObject, &this->ViewportMatrix);
  }
}

void __fastcall Scaleform::GFx::MovieImpl::SetVisible(Scaleform::GFx::MovieImpl *this, _BOOL8 visible)
{
  Scaleform::GFx::InteractiveObject *pMainMovie; // rcx

  pMainMovie = this->pMainMovie;
  if ( pMainMovie )
    pMainMovie->SetVisible(pMainMovie, visible);
}

void __fastcall Scaleform::GFx::MovieImpl::ShutdownRendering(Scaleform::GFx::MovieImpl *this, bool wait)
{
  Scaleform::Render::ContextImpl::Context::Shutdown(&this->RenderContext, wait);
}

void __fastcall Scaleform::GFx::MovieImpl::ShutdownTimersForMovieDef(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::MovieDefImpl *defimpl)
{
  unsigned __int64 Size; // rbp
  unsigned __int64 i; // rbx
  Scaleform::GFx::ASIntervalTimerIntf *pObject; // rcx
  Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> *Data; // rax
  Scaleform::RefCountVImpl *v8; // rcx
  Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> *v9; // rdi

  Size = this->IntervalTimers.Data.Size;
  for ( i = 0i64; i < Size; ++i )
  {
    pObject = this->IntervalTimers.Data.Data[i].pObject;
    if ( pObject->ClearFor(pObject, this, defimpl) )
    {
      Data = this->IntervalTimers.Data.Data;
      v8 = (Scaleform::RefCountVImpl *)Data[i].pObject;
      v9 = &Data[i];
      if ( v8 )
        Scaleform::RefCountImpl::Release(v8);
      v9->pObject = 0i64;
    }
  }
}

void __fastcall Scaleform::Render::ShapeDataInterface::SkipPathData(
        Scaleform::Render::ShapeDataInterface *this,
        Scaleform::Render::ShapePosInfo *pos)
{
  char v4[24]; // [rsp+20h] [rbp-28h] BYREF

  while ( this->ReadEdge(this, pos, (float *)v4) )
    ;
}

void __fastcall Scaleform::GFx::MovieImpl::SortPlayList(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::InteractiveObject *changedObj)
{
  Scaleform::GFx::InteractiveObject *v2; // rbp
  Scaleform::GFx::InteractiveObject *v5; // rdi
  Scaleform::GFx::InteractiveObject *i; // rax
  Scaleform::GFx::InteractiveObject *pPlayListHead; // rbx
  Scaleform::GFx::InteractiveObject *pPlayNext; // r14
  Scaleform::GFx::InteractiveObject *pParent; // rax

  v2 = 0i64;
  v5 = 0i64;
  for ( i = changedObj; i; i = i->pParent )
    v5 = i;
  pPlayListHead = this->pPlayListHead;
  if ( pPlayListHead )
  {
    do
    {
      pPlayNext = pPlayListHead->pPlayNext;
      pParent = pPlayListHead;
      while ( pParent != changedObj && pParent != v5 )
      {
        pParent = pParent->pParent;
        if ( !pParent )
          goto LABEL_13;
      }
      Scaleform::GFx::InteractiveObject::RemoveFromPlayList(pPlayListHead);
      if ( v2 )
        Scaleform::GFx::InteractiveObject::InsertToPlayListAfter(pPlayListHead, v2);
      else
        Scaleform::GFx::InteractiveObject::AddToPlayList(pPlayListHead);
      v2 = pPlayListHead;
LABEL_13:
      pPlayListHead = pPlayNext;
    }
    while ( pPlayNext );
    if ( v2 )
      this->Flags |= 0x80000u;
  }
}

void __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartLayer(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this)
{
  Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r8
  __int64 v5; // rcx
  _BYTE *v6; // rcx

  Data = this->Data;
  v3 = Data->Data.Size + 1;
  if ( v3 >= Data->Data.Size )
  {
    if ( v3 <= Data->Data.Policy.Capacity )
      goto LABEL_7;
    v4 = v3 + (v3 >> 2);
  }
  else
  {
    if ( v3 >= Data->Data.Policy.Capacity >> 1 )
      goto LABEL_7;
    v4 = Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this->Data,
    this->Data,
    v4);
LABEL_7:
  v5 = (__int64)(Data->Data.Data - 1);
  Data->Data.Size = v3;
  v6 = (_BYTE *)(v3 + v5);
  if ( v6 )
    *v6 = 0;
  this->Status = Status_StartLayer;
}

void __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int leftStyle,
        unsigned int rightStyle,
        unsigned int strokeStyle)
{
  bool v4; // zf
  Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rbx
  unsigned __int64 Size; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  _BYTE *v14; // rcx
  Scaleform::Render::PathDataEncoder<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = this->Status == Status_Clean;
  Data = this->Data;
  v15.Data = Data;
  if ( v4 )
    Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartLayer(this);
  Size = Data->Data.Size;
  v11 = Size + 1;
  if ( Size + 1 >= Size )
  {
    if ( v11 <= Data->Data.Policy.Capacity )
      goto LABEL_9;
    v12 = v11 + (v11 >> 2);
  }
  else
  {
    if ( v11 >= Data->Data.Policy.Capacity >> 1 )
      goto LABEL_9;
    v12 = Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)Data,
    Data,
    v12);
LABEL_9:
  v13 = (__int64)(Data->Data.Data - 1);
  Data->Data.Size = v11;
  v14 = (_BYTE *)(v11 + v13);
  if ( v14 )
    *v14 = 1;
  Scaleform::Render::PathDataEncoder<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
    &v15,
    leftStyle);
  Scaleform::Render::PathDataEncoder<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
    &v15,
    rightStyle);
  Scaleform::Render::PathDataEncoder<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
    &v15,
    strokeStyle);
  this->Status = Status_StartPath;
}

void __fastcall Scaleform::GFx::MovieImpl::StopDrag(Scaleform::GFx::MovieImpl *this, unsigned int mouseIndex)
{
  __int64 v2; // rax

  this->CurrentDragStates[mouseIndex].pCharacter = 0i64;
  v2 = mouseIndex;
  this->CurrentDragStates[v2].pTopmostEntity = 0i64;
  this->CurrentDragStates[v2].MouseIndex = -1;
}

void __fastcall Scaleform::GFx::MovieImpl::StopDragCharacter(
        Scaleform::GFx::MovieImpl *this,
        const Scaleform::GFx::InteractiveObject *ch)
{
  if ( this->CurrentDragStates[0].pCharacter == ch )
  {
    this->CurrentDragStates[0].pCharacter = 0i64;
    this->CurrentDragStates[0].pTopmostEntity = 0i64;
    this->CurrentDragStates[0].MouseIndex = -1;
  }
  if ( this->CurrentDragStates[1].pCharacter == ch )
  {
    this->CurrentDragStates[1].pCharacter = 0i64;
    this->CurrentDragStates[1].pTopmostEntity = 0i64;
    this->CurrentDragStates[1].MouseIndex = -1;
  }
  if ( this->CurrentDragStates[2].pCharacter == ch )
  {
    this->CurrentDragStates[2].pCharacter = 0i64;
    this->CurrentDragStates[2].pTopmostEntity = 0i64;
    this->CurrentDragStates[2].MouseIndex = -1;
  }
  if ( this->CurrentDragStates[3].pCharacter == ch )
  {
    this->CurrentDragStates[3].pCharacter = 0i64;
    this->CurrentDragStates[3].pTopmostEntity = 0i64;
    this->CurrentDragStates[3].MouseIndex = -1;
  }
  if ( this->CurrentDragStates[4].pCharacter == ch )
  {
    this->CurrentDragStates[4].pCharacter = 0i64;
    this->CurrentDragStates[4].pTopmostEntity = 0i64;
    this->CurrentDragStates[4].MouseIndex = -1;
  }
  if ( this->CurrentDragStates[5].pCharacter == ch )
  {
    this->CurrentDragStates[5].pCharacter = 0i64;
    this->CurrentDragStates[5].pTopmostEntity = 0i64;
    this->CurrentDragStates[5].MouseIndex = -1;
  }
}

void __fastcall Scaleform::GFx::MovieImpl::SuspendGC(Scaleform::GFx::MovieImpl *this, _BOOL8 suspend)
{
  this->pASMovieRoot.pObject->SuspendGC(this->pASMovieRoot.pObject, suspend);
}

void __fastcall Scaleform::Render::Image::TextureLost(
        Scaleform::Render::Image *this,
        Scaleform::Render::Image::TextureLossReason reason)
{
  if ( reason == TLR_ManagerDestroyed )
    Scaleform::Render::TextureImage::TextureLost(this);
}

void __fastcall Scaleform::Render::ImageDelegate::TextureLost(Scaleform::Render::SubImage *this, __int64 reason)
{
  this->pImage.pObject->TextureLost(this->pImage.pObject, (Scaleform::Render::Image::TextureLossReason)reason);
}

void __fastcall Scaleform::GFx::MovieImpl::TransferFocus(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::InteractiveObject *pNewFocus,
        unsigned int controllerIdx,
        Scaleform::GFx::FocusMovedType fmt)
{
  Scaleform::GFx::InteractiveObject *v4; // rbx
  Scaleform::GFx::FocusGroupDescr *v9; // rsi
  Scaleform::WeakPtrProxy *pObject; // rdx
  Scaleform::RefCountWeakSupportImpl *v11; // rax
  int RefCount; // eax
  bool v13; // zf
  Scaleform::GFx::ASMovieRootBase *v14; // rax
  int AVMVersion; // er14
  Scaleform::WeakPtrProxy *v16; // rdx
  Scaleform::WeakPtrProxy *WeakProxy; // rax
  Scaleform::WeakPtrProxy *v18; // rdx
  Scaleform::WeakPtrProxy *v19; // rbp
  Scaleform::WeakPtrProxy *v20; // rdx
  Scaleform::WeakPtrProxy *v21; // rax
  Scaleform::WeakPtrProxy *v22; // rdx
  Scaleform::WeakPtrProxy *v23; // rbp
  Scaleform::WeakPtrProxy *v24; // rdx

  v4 = 0i64;
  v9 = &this->FocusGroups[this->FocusGroupIndexes[controllerIdx]];
  pObject = v9->LastFocused.pProxy.pObject;
  if ( pObject )
  {
    v11 = pObject->pObject;
    if ( v11 )
    {
      v4 = (Scaleform::GFx::InteractiveObject *)pObject->pObject;
      RefCount = v11->RefCount;
      if ( RefCount )
      {
        v4->RefCount = RefCount + 1;
        ++v4->RefCount;
        Scaleform::RefCountNTSImpl::Release(v4);
      }
      else
      {
        v4 = 0i64;
      }
    }
    else
    {
      v13 = pObject->RefCount-- == 1;
      if ( v13 )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      v9->LastFocused.pProxy.pObject = 0i64;
    }
  }
  if ( v4 != pNewFocus )
  {
    v14 = this->pASMovieRoot.pObject;
    this->FocusRectChanged = 1;
    AVMVersion = v14->AVMVersion;
    if ( AVMVersion == 2 )
    {
      if ( !pNewFocus )
      {
        v20 = v9->LastFocused.pProxy.pObject;
        if ( v20 )
        {
          v13 = v20->RefCount-- == 1;
          if ( v13 )
            ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        }
        goto LABEL_24;
      }
      if ( !pNewFocus->IsFocusEnabled(pNewFocus, fmt) )
      {
        v16 = v9->LastFocused.pProxy.pObject;
        if ( v16 )
        {
          v13 = v16->RefCount-- == 1;
          if ( v13 )
            ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        }
        pNewFocus = 0i64;
LABEL_24:
        v9->LastFocused.pProxy.pObject = 0i64;
        goto LABEL_25;
      }
      WeakProxy = Scaleform::RefCountWeakSupportImpl::CreateWeakProxy(pNewFocus);
      v18 = v9->LastFocused.pProxy.pObject;
      v19 = WeakProxy;
      if ( v18 )
      {
        v13 = v18->RefCount-- == 1;
        if ( v13 )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      }
      v9->LastFocused.pProxy.pObject = v19;
    }
LABEL_25:
    if ( v4 && v4->pParent )
      v4->OnFocus(v4, Unknown, pNewFocus, controllerIdx, fmt);
    if ( AVMVersion == 1 )
    {
      if ( !pNewFocus )
      {
        v24 = v9->LastFocused.pProxy.pObject;
        if ( v24 )
        {
          v13 = v24->RefCount-- == 1;
          if ( v13 )
            ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        }
        v9->LastFocused.pProxy.pObject = 0i64;
        goto LABEL_36;
      }
      v21 = Scaleform::RefCountWeakSupportImpl::CreateWeakProxy(pNewFocus);
      v22 = v9->LastFocused.pProxy.pObject;
      v23 = v21;
      if ( v22 )
      {
        v13 = v22->RefCount-- == 1;
        if ( v13 )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      }
      v9->LastFocused.pProxy.pObject = v23;
    }
    if ( pNewFocus )
      pNewFocus->OnFocus(pNewFocus, MouseMove, v4, controllerIdx, fmt);
LABEL_36:
    this->pASMovieRoot.pObject->NotifyTransferFocus(this->pASMovieRoot.pObject, v4, pNewFocus, controllerIdx);
  }
  if ( v4 )
    Scaleform::RefCountNTSImpl::Release(v4);
}

void __fastcall Scaleform::Render::Matrix2x4<float>::TransformByInverse(
        Scaleform::Render::Matrix2x4<float> *this,
        Scaleform::Render::Point<float> *result,
        const Scaleform::Render::Point<float> *p)
{
  float v3; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  Scaleform::Render::Matrix2x4<float> v14; // [rsp+20h] [rbp-60h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+40h] [rbp-40h] BYREF

  v3 = this->M[0][2];
  v5 = this->M[0][3];
  v6 = this->M[1][0];
  v8 = this->M[1][1];
  v9 = this->M[1][2];
  v10 = this->M[1][3];
  v11 = this->M[0][1];
  v14.M[0][0] = this->M[0][0];
  *(_QWORD *)&m.M[0][0] = __PAIR64__(LODWORD(v11), LODWORD(v14.M[0][0]));
  *(_QWORD *)&v14.M[0][1] = __PAIR64__(LODWORD(v3), LODWORD(v11));
  v14.M[0][3] = v5;
  *(_QWORD *)&v14.M[1][0] = __PAIR64__(LODWORD(v8), LODWORD(v6));
  *(_QWORD *)&v14.M[1][2] = __PAIR64__(LODWORD(v10), LODWORD(v9));
  *(_QWORD *)&m.M[0][2] = __PAIR64__(LODWORD(v5), LODWORD(v3));
  *(_QWORD *)&m.M[1][0] = __PAIR64__(LODWORD(v8), LODWORD(v6));
  *(_QWORD *)&m.M[1][2] = __PAIR64__(LODWORD(v10), LODWORD(v9));
  Scaleform::Render::Matrix2x4<float>::SetInverse(&v14, &m);
  v12 = v14.M[1][0];
  v13 = v14.M[1][1];
  result->x = (float)((float)(v14.M[0][0] * p->x) + (float)(v14.M[0][1] * p->y)) + v14.M[0][3];
  result->y = (float)((float)(v12 * p->x) + (float)(v13 * p->y)) + v14.M[1][3];
}

__int64 __fastcall Scaleform::GFx::MovieImpl::TranslateLocalToScreen(
        Scaleform::GFx::MovieImpl *this,
        const char *pathToMovieClip,
        const Scaleform::Render::Point<float> *pt,
        Scaleform::Render::Point<float> *presPt,
        Scaleform::Render::Matrix2x4<float> *userMatrix)
{
  Scaleform::GFx::ASMovieRootBase *pObject; // rcx
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm12_4
  float v12; // xmm9_4
  float v13; // xmm7_4
  float v14; // xmm11_4
  float v15; // xmm10_4
  float v16; // xmm8_4
  unsigned __int8 v17; // bl
  float v18; // xmm12_4
  float v19; // xmm5_4
  Scaleform::Render::Matrix2x4<float> v21; // [rsp+28h] [rbp-E0h] BYREF
  Scaleform::GFx::Value val; // [rsp+48h] [rbp-C0h] BYREF
  Scaleform::Render::Matrix2x4<float> v23; // [rsp+78h] [rbp-90h] BYREF

  pObject = this->pASMovieRoot.pObject;
  val.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  val.pObjectInterface = 0i64;
  val.Type = VT_None;
  if ( pObject->GetVariable(pObject, &val, pathToMovieClip)
    && (*(_OWORD *)&v23.M[0][0] = _xmm,
        *(_OWORD *)&v23.M[1][0] = _xmm,
        Scaleform::GFx::Value::ObjectInterface::GetWorldMatrix(val.pObjectInterface, val.mValue.pStringManaged, &v23)) )
  {
    v9 = this->ViewportMatrix.M[0][2];
    v10 = this->ViewportMatrix.M[1][2];
    v11 = this->ViewportMatrix.M[1][3] * 20.0;
    v12 = this->ViewportMatrix.M[0][0] * 20.0;
    v13 = this->ViewportMatrix.M[0][1] * 20.0;
    v14 = this->ViewportMatrix.M[0][3] * 20.0;
    v15 = this->ViewportMatrix.M[1][0] * 20.0;
    v16 = this->ViewportMatrix.M[1][1] * 20.0;
    v21.M[1][3] = v11;
    *(_QWORD *)&v21.M[0][0] = __PAIR64__(LODWORD(v13), LODWORD(v12));
    v21.M[0][2] = v9 * 20.0;
    v21.M[0][3] = v14;
    *(_QWORD *)&v21.M[1][0] = __PAIR64__(LODWORD(v16), LODWORD(v15));
    v21.M[1][2] = v10 * 20.0;
    if ( userMatrix )
    {
      Scaleform::Render::Matrix2x4<float>::Prepend(&v21, userMatrix);
      v11 = v21.M[1][3];
      v16 = v21.M[1][1];
      v15 = v21.M[1][0];
      v14 = v21.M[0][3];
      v13 = v21.M[0][1];
      v12 = v21.M[0][0];
    }
    v17 = 1;
    v18 = v11 + (float)((float)(v16 * v23.M[1][3]) + (float)(v15 * v23.M[0][3]));
    v19 = (float)((float)((float)(v16 * v23.M[1][0]) + (float)(v15 * v23.M[0][0])) * pt->x)
        + (float)((float)((float)(v16 * v23.M[1][1]) + (float)(v15 * v23.M[0][1])) * pt->y);
    presPt->x = (float)((float)((float)((float)(v13 * v23.M[1][0]) + (float)(v12 * v23.M[0][0])) * pt->x)
                      + (float)((float)((float)(v13 * v23.M[1][1]) + (float)(v12 * v23.M[0][1])) * pt->y))
              + (float)(v14 + (float)((float)(v13 * v23.M[1][3]) + (float)(v12 * v23.M[0][3])));
    presPt->y = v19 + v18;
  }
  else
  {
    v17 = 0;
  }
  if ( (val.Type & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
  return v17;
}

Scaleform::Render::Point<float> *__fastcall Scaleform::GFx::MovieImpl::TranslateToScreen(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::Render::Point<float> *result,
        const Scaleform::Render::Point<float> *p,
        Scaleform::Render::Matrix2x4<float> *puserMatrix)
{
  Scaleform::GFx::InteractiveObject *pMainMovie; // rcx
  float v9; // xmm9_4
  float v10; // xmm7_4
  float v11; // xmm11_4
  float v12; // xmm10_4
  float v13; // xmm8_4
  float v14; // xmm12_4
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm0_4
  float v18; // xmm6_4
  Scaleform::Render::Point<float> *v19; // rax
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm4_4
  Scaleform::Render::Matrix2x4<float> pmat; // [rsp+20h] [rbp-B8h] BYREF

  *(_OWORD *)&pmat.M[0][0] = _xmm;
  pMainMovie = this->pMainMovie;
  *(_OWORD *)&pmat.M[1][0] = _xmm;
  Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(pMainMovie, &pmat);
  v9 = this->ViewportMatrix.M[0][0];
  v10 = this->ViewportMatrix.M[0][1];
  v11 = this->ViewportMatrix.M[0][3];
  v12 = this->ViewportMatrix.M[1][0];
  v13 = this->ViewportMatrix.M[1][1];
  v14 = this->ViewportMatrix.M[1][3];
  if ( puserMatrix )
  {
    v9 = (float)(v9 * puserMatrix->M[0][0]) + (float)(v10 * puserMatrix->M[1][0]);
    v12 = (float)(v12 * puserMatrix->M[0][0]) + (float)(v13 * puserMatrix->M[1][0]);
    v15 = this->ViewportMatrix.M[0][0];
    v16 = (float)(v10 * puserMatrix->M[1][3]) + (float)(v15 * puserMatrix->M[0][3]);
    v10 = (float)(v10 * puserMatrix->M[1][1]) + (float)(v15 * puserMatrix->M[0][1]);
    v17 = this->ViewportMatrix.M[1][0];
    v11 = v11 + v16;
    v18 = (float)(v13 * puserMatrix->M[1][3]) + (float)(v17 * puserMatrix->M[0][3]);
    v13 = (float)(v13 * puserMatrix->M[1][1]) + (float)(v17 * puserMatrix->M[0][1]);
    v14 = v14 + v18;
  }
  v19 = result;
  v20 = p->x * 20.0;
  v21 = p->y * 20.0;
  v22 = (float)((float)((float)((float)(v12 * pmat.M[0][1]) + (float)(v13 * pmat.M[1][1])) * v21)
              + (float)((float)((float)(v13 * pmat.M[1][0]) + (float)(v12 * pmat.M[0][0])) * v20))
      + (float)(v14 + (float)((float)(v13 * pmat.M[1][3]) + (float)(v12 * pmat.M[0][3])));
  result->x = (float)((float)((float)((float)(v9 * pmat.M[0][1]) + (float)(v10 * pmat.M[1][1])) * v21)
                    + (float)((float)((float)(v10 * pmat.M[1][0]) + (float)(v9 * pmat.M[0][0])) * v20))
            + (float)(v11 + (float)((float)(v10 * pmat.M[1][3]) + (float)(v9 * pmat.M[0][3])));
  result->y = v22;
  return v19;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::MovieImpl::TranslateToScreen(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Rect<float> *r,
        Scaleform::Render::Matrix2x4<float> *puserMatrix)
{
  Scaleform::GFx::InteractiveObject *pMainMovie; // rcx
  float v9; // xmm9_4
  float v10; // xmm7_4
  float v11; // xmm11_4
  float v12; // xmm10_4
  float v13; // xmm8_4
  float v14; // xmm12_4
  float v15; // xmm3_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  Scaleform::Render::Rect<float> v18; // xmm0
  Scaleform::Render::Rect<float> ra; // [rsp+20h] [rbp-E8h] BYREF
  Scaleform::Render::Matrix2x4<float> pmat; // [rsp+30h] [rbp-D8h] BYREF
  Scaleform::Render::Matrix2x4<float> v22; // [rsp+50h] [rbp-B8h] BYREF

  *(_OWORD *)&pmat.M[0][0] = _xmm;
  pMainMovie = this->pMainMovie;
  *(_OWORD *)&pmat.M[1][0] = _xmm;
  Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(pMainMovie, &pmat);
  v9 = this->ViewportMatrix.M[0][0];
  v10 = this->ViewportMatrix.M[0][1];
  v11 = this->ViewportMatrix.M[0][3];
  v12 = this->ViewportMatrix.M[1][0];
  v13 = this->ViewportMatrix.M[1][1];
  v14 = this->ViewportMatrix.M[1][3];
  if ( puserMatrix )
  {
    v15 = this->ViewportMatrix.M[0][0];
    v16 = this->ViewportMatrix.M[1][0];
    v17 = v13 * puserMatrix->M[1][3];
    v9 = (float)(v9 * puserMatrix->M[0][0]) + (float)(v10 * puserMatrix->M[1][0]);
    v12 = (float)(v12 * puserMatrix->M[0][0]) + (float)(v13 * puserMatrix->M[1][0]);
    v10 = (float)(v10 * puserMatrix->M[1][1]) + (float)(v15 * puserMatrix->M[0][1]);
    v13 = (float)(v13 * puserMatrix->M[1][1]) + (float)(v16 * puserMatrix->M[0][1]);
    v11 = v11
        + (float)((float)(this->ViewportMatrix.M[0][1] * puserMatrix->M[1][3]) + (float)(v15 * puserMatrix->M[0][3]));
    v14 = v14 + (float)(v17 + (float)(v16 * puserMatrix->M[0][3]));
  }
  v22.M[0][0] = (float)(v10 * pmat.M[1][0]) + (float)(v9 * pmat.M[0][0]);
  v22.M[1][0] = (float)(v13 * pmat.M[1][0]) + (float)(v12 * pmat.M[0][0]);
  *(_QWORD *)&v22.M[0][1] = COERCE_UNSIGNED_INT((float)(v10 * pmat.M[1][1]) + (float)(v9 * pmat.M[0][1]));
  v18 = *r;
  v22.M[0][3] = v11 + (float)((float)(v10 * pmat.M[1][3]) + (float)(v9 * pmat.M[0][3]));
  *(_QWORD *)&v22.M[1][1] = COERCE_UNSIGNED_INT((float)(v13 * pmat.M[1][1]) + (float)(v12 * pmat.M[0][1]));
  v22.M[1][3] = v14 + (float)((float)(v13 * pmat.M[1][3]) + (float)(v12 * pmat.M[0][3]));
  ra = (Scaleform::Render::Rect<float>)_mm_mul_ps((__m128)v18, (__m128)_xmm);
  Scaleform::Render::Matrix2x4<float>::EncloseTransform(&v22, result, &ra);
  return result;
}

__int64 __fastcall Scaleform::Render::ImageDelegate::Unmap(Scaleform::Render::ImageDelegate *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Image *))this->pImage.pObject->Unmap)(this->pImage.pObject);
}

Scaleform::GFx::State *__fastcall Scaleform::GFx::MovieImpl::UnregisterAccelerometer(
        Scaleform::GFx::MovieImpl *this,
        int accelerometerId)
{
  Scaleform::GFx::State *result; // rax
  Scaleform::RefCountVImpl *v4; // rbx
  unsigned __int8 v5; // di

  result = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 10i64);
  v4 = (Scaleform::RefCountVImpl *)result;
  if ( result )
  {
    v5 = ((__int64 (__fastcall *)(Scaleform::GFx::State *, _QWORD))result->__vftable[2].~RefCountImplCore)(
           result,
           (unsigned int)accelerometerId);
    Scaleform::RefCountImpl::Release(v4);
    return (Scaleform::GFx::State *)v5;
  }
  return result;
}

void __fastcall Scaleform::GFx::MovieImpl::UnregisterFonts(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::MovieDefImpl *pdefImpl)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  Scaleform::GFx::MovieDefRootNode *pNext; // rbx
  Scaleform::ArrayDefaultPolicy *p_Policy; // rdi

  v4 = 0i64;
  if ( this->RegisteredFonts.Data.Size )
  {
    v5 = 0i64;
    do
    {
      if ( this->RegisteredFonts.Data.Data[v5].pMovieDef.pObject == pdefImpl )
      {
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::MovieImpl::FontDesc,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::FontDesc,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
          &this->RegisteredFonts,
          v4);
      }
      else
      {
        ++v4;
        ++v5;
      }
    }
    while ( v4 < this->RegisteredFonts.Data.Size );
  }
  pNext = this->RootMovieDefNodes.Root.pNext;
  p_Policy = &this->MovieLevels.Data.Policy;
  if ( this == (Scaleform::GFx::MovieImpl *)-112i64 )
    p_Policy = 0i64;
  while ( pNext != (Scaleform::GFx::MovieDefRootNode *)p_Policy )
  {
    Scaleform::GFx::FontManager::CleanCacheFor(pNext->pFontManager.pObject, pdefImpl);
    pNext = pNext->pNext;
  }
  this->Flags2 |= 2u;
}

Scaleform::GFx::State *__fastcall Scaleform::GFx::MovieImpl::UnregisterGeolocation(
        Scaleform::GFx::MovieImpl *this,
        int geolocationId)
{
  Scaleform::GFx::State *result; // rax
  Scaleform::RefCountVImpl *v4; // rbx
  unsigned __int8 v5; // di

  result = this->GetStateAddRef(&this->Scaleform::GFx::StateBag, 11i64);
  v4 = (Scaleform::RefCountVImpl *)result;
  if ( result )
  {
    v5 = ((__int64 (__fastcall *)(Scaleform::GFx::State *, _QWORD))result->__vftable[2].~RefCountImplCore)(
           result,
           (unsigned int)geolocationId);
    Scaleform::RefCountImpl::Release(v4);
    return (Scaleform::GFx::State *)v5;
  }
  return result;
}

char __fastcall Scaleform::Render::Image::Update(
        Scaleform::Render::Image *this,
        Scaleform::Render::ImageUpdate *pupdate)
{
  Scaleform::Render::ImageUpdateSync *pUpdateSync; // rcx

  pUpdateSync = this->pUpdateSync;
  if ( !pUpdateSync )
    return 0;
  pUpdateSync->UpdateImage(pUpdateSync, pupdate);
  return 1;
}

char __fastcall Scaleform::Render::Image::Update(Scaleform::Render::Image *this)
{
  Scaleform::Render::ImageUpdateSync *pUpdateSync; // rcx

  pUpdateSync = this->pUpdateSync;
  if ( !pUpdateSync )
    return 0;
  pUpdateSync->UpdateImage(pUpdateSync, this);
  return 1;
}

__int64 __fastcall Scaleform::Render::ImageDelegate::Update(
        Scaleform::Render::ImageDelegate *this,
        Scaleform::Render::ImageUpdate *pupdate)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Image *, Scaleform::Render::ImageUpdate *))this->pImage.pObject->Update)(
           this->pImage.pObject,
           pupdate);
}

__int64 __fastcall Scaleform::Render::ImageDelegate::Update(Scaleform::Render::ImageDelegate *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Image *))this->pImage.pObject->Update)(this->pImage.pObject);
}

void __fastcall Scaleform::GFx::MovieImpl::UpdateAllRenderNodes(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::DrawingContext *pNext; // rbx
  unsigned __int64 *p_Size; // rdi

  pNext = this->DrawingContextList.Root.pNext;
  p_Size = &this->RegisteredFonts.Data.Size;
  if ( this == (Scaleform::GFx::MovieImpl *)-21264i64 )
    p_Size = 0i64;
  while ( pNext != (Scaleform::GFx::DrawingContext *)p_Size )
  {
    if ( pNext->States >= 0x80u )
      Scaleform::GFx::DrawingContext::UpdateRenderNode(pNext);
    pNext = pNext->pNext;
  }
  if ( this->FocusRectChanged )
    Scaleform::GFx::MovieImpl::UpdateFocusRectRenderNodes(this);
}

void __fastcall Scaleform::GFx::MovieImpl::UpdateFocusRectRenderNodes(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::Render::TreeContainer *pObject; // rbx
  Scaleform::Render::ContextImpl::Entry *v3; // rax
  Scaleform::Render::TreeContainer *v4; // rcx
  Scaleform::Render::TreeContainer *v5; // rbx
  bool v6; // zf
  __int64 Size; // rax
  unsigned int v8; // er13
  int v9; // ebx
  __int64 v10; // r12
  Scaleform::WeakPtrProxy *v11; // rdx
  Scaleform::GFx::DisplayObjectBase *v12; // rsi
  int RefCount; // eax
  Scaleform::RefCountNTSImpl *v14; // rcx
  Scaleform::MemoryHeap *pHeap; // rcx
  Scaleform::MemoryHeap_vtbl *v16; // rax
  float v17; // xmm0_4
  float v18; // xmm8_4
  float v19; // xmm7_4
  float v20; // xmm9_4
  float v21; // xmm10_4
  __int64 v22; // rax
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *v23; // rdi
  unsigned __int64 v24; // r8
  __int64 v25; // rdx
  float StartX; // xmm1_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm8_4
  float v30; // xmm1_4
  Scaleform::Render::ShapeMeshProvider *v31; // rax
  Scaleform::Render::ShapeMeshProvider *v32; // rax
  Scaleform::Render::ShapeMeshProvider *v33; // r15
  Scaleform::Render::TreeShape *v34; // rbx
  Scaleform::Render::TreeShape *v35; // rcx
  int v36; // [rsp+28h] [rbp-E0h]
  Scaleform::Render::Rect<float> pr; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-C0h]
  _QWORD v39[7]; // [rsp+50h] [rbp-B8h] BYREF
  Scaleform::Render::Rect<float> r; // [rsp+88h] [rbp-80h] BYREF
  Scaleform::Render::Matrix3x4<float> pmat; // [rsp+98h] [rbp-70h] BYREF

  if ( this->pMainMovie )
  {
    pObject = this->FocusRectContainerNode.pObject;
    if ( pObject )
    {
      Size = Scaleform::Render::TreeContainer::GetSize(pObject);
      Scaleform::Render::TreeContainer::Remove(pObject, 0i64, Size);
    }
    else
    {
      v3 = Scaleform::Render::ContextImpl::Context::CreateEntry<Scaleform::Render::TreeContainer>(&this->RenderContext);
      v4 = this->FocusRectContainerNode.pObject;
      v5 = (Scaleform::Render::TreeContainer *)v3;
      if ( v4 )
      {
        v6 = v4->RefCount-- == 1;
        if ( v6 )
          Scaleform::Render::ContextImpl::Entry::destroyHelper(v4);
      }
      this->FocusRectContainerNode.pObject = v5;
      Scaleform::Render::TreeContainer::Add(this->pRenderRoot.pObject, v5);
    }
    v8 = 0;
    if ( this->FocusGroupsCnt )
    {
      v9 = 0;
      v36 = 0;
      do
      {
        v10 = v8;
        v11 = this->FocusGroups[v10].LastFocused.pProxy.pObject;
        if ( v11 )
        {
          v12 = (Scaleform::GFx::DisplayObjectBase *)v11->pObject;
          if ( v12 )
          {
            RefCount = v12->RefCount;
            if ( RefCount )
            {
              v14 = v11->pObject;
              v12->RefCount = RefCount + 1;
              ++v12->RefCount;
              Scaleform::RefCountNTSImpl::Release(v14);
              if ( this->FocusGroups[v10].FocusRectShown
                && ((unsigned __int8 (__fastcall *)(Scaleform::GFx::DisplayObjectBase *))v12->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable[1].GetProjectionMatrix3D)(v12) )
              {
                ((void (__fastcall *)(Scaleform::GFx::DisplayObjectBase *, Scaleform::Render::Rect<float> *))v12->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable[1].ClearViewMatrix3D)(
                  v12,
                  &r);
                if ( r.x2 == r.x1 && r.y2 == r.y1 )
                {
                  Scaleform::RefCountNTSImpl::Release(v12);
                  return;
                }
                *(_OWORD *)&pmat.M[1][0] = 0x3F80000000000000ui64;
                *(_OWORD *)&pmat.M[0][0] = 0x3F800000ui64;
                *(_QWORD *)&pmat.M[2][2] = 1065353216i64;
                *(_QWORD *)&pmat.M[2][0] = 0i64;
                Scaleform::GFx::DisplayObjectBase::GetWorldMatrix3D(v12, &pmat);
                *(Scaleform::Render::Matrix3x4<float> *)&v39[1] = pmat;
                Scaleform::Render::Matrix3x4<float>::EncloseTransform(
                  (Scaleform::Render::Matrix3x4<float> *)&v39[1],
                  &pr,
                  &r);
                pHeap = this->RenderContext.pHeap;
                v16 = pHeap->__vftable;
                v17 = (float)(int)v8 * 20.0;
                v18 = pr.x1 - v17;
                v19 = pr.x2 + v17;
                v20 = pr.y1 - v17;
                v21 = pr.y2 + v17;
                pr.x1 = pr.x1 - v17;
                pr.x2 = pr.x2 + v17;
                pr.y1 = pr.y1 - v17;
                pr.y2 = pr.y2 + v17;
                v22 = (__int64)v16->Alloc(pHeap, 128ui64, 0i64);
                v23 = (Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *)v22;
                if ( v22 )
                {
                  *(_DWORD *)(v22 + 16) = 0;
                  *(_QWORD *)v22 = &Scaleform::RefCountImplCore::`vftable';
                  *(_DWORD *)(v22 + 8) = 1;
                  *(_QWORD *)(v22 + 24) = 0i64;
                  *(_QWORD *)(v22 + 32) = 0i64;
                  *(_QWORD *)(v22 + 40) = 0i64;
                  *(_QWORD *)(v22 + 48) = 0i64;
                  *(_QWORD *)(v22 + 56) = 0i64;
                  *(_QWORD *)(v22 + 64) = 0i64;
                  *(_QWORD *)(v22 + 72) = v22 + 104;
                  *(_QWORD *)(v22 + 80) = 0i64;
                  *(_QWORD *)(v22 + 88) = 0i64;
                  *(_DWORD *)(v22 + 96) = 0;
                  *(_QWORD *)v22 = &Scaleform::Render::ShapeDataFloat::`vftable';
                  *(_QWORD *)(v22 + 104) = 0i64;
                  *(_QWORD *)(v22 + 112) = 0i64;
                  *(_QWORD *)(v22 + 120) = 0i64;
                }
                else
                {
                  v23 = 0i64;
                }
                v24 = v23->Fills.Data.Size;
                v39[0] = 0i64;
                LODWORD(v38) = v9 ^ 0xFFFFFF00 | 0xFF000000;
                Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
                  &v23->Fills.Data,
                  &v23->Fills,
                  v24 + 1);
                v25 = (__int64)&v23->Fills.Data.Data[v23->Fills.Data.Size - 1];
                if ( v25 )
                {
                  *(_DWORD *)v25 = v9 ^ 0xFFFFFF00 | 0xFF000000;
                  *(_QWORD *)(v25 + 8) = 0i64;
                }
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
                  v23,
                  1u,
                  0,
                  0);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::MoveTo(
                  v23,
                  v18,
                  v20);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
                  v23,
                  v19,
                  v20);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
                  v23,
                  v19,
                  v20 + 20.0);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
                  v23,
                  v18,
                  v20 + 20.0);
                StartX = v23->StartX;
                if ( v23->LastX != StartX || v23->LastY != v23->StartY )
                  Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
                    v23,
                    StartX,
                    v23->StartY);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndPath(v23);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
                  v23,
                  1u,
                  0,
                  0);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::MoveTo(
                  v23,
                  v19,
                  v20);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
                  v23,
                  v19,
                  v21);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
                  v23,
                  v19 - 20.0,
                  v21);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
                  v23,
                  v19 - 20.0,
                  v20);
                v27 = v23->StartX;
                if ( v23->LastX != v27 || v23->LastY != v23->StartY )
                  Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
                    v23,
                    v27,
                    v23->StartY);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndPath(v23);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
                  v23,
                  1u,
                  0,
                  0);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::MoveTo(
                  v23,
                  v19,
                  v21);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
                  v23,
                  v18,
                  v21);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
                  v23,
                  v18,
                  v21 - 20.0);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
                  v23,
                  v19,
                  v21 - 20.0);
                v28 = v23->StartX;
                if ( v23->LastX != v28 || v23->LastY != v23->StartY )
                  Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
                    v23,
                    v28,
                    v23->StartY);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndPath(v23);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
                  v23,
                  1u,
                  0,
                  0);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::MoveTo(
                  v23,
                  v18,
                  v21);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
                  v23,
                  v18,
                  v20);
                v29 = v18 + 20.0;
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
                  v23,
                  v29,
                  v20);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
                  v23,
                  v29,
                  v21);
                v30 = v23->StartX;
                if ( v23->LastX != v30 || v23->LastY != v23->StartY )
                  Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
                    v23,
                    v30,
                    v23->StartY);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndPath(v23);
                Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndShape(v23);
                v31 = (Scaleform::Render::ShapeMeshProvider *)this->RenderContext.pHeap->Alloc(
                                                                this->RenderContext.pHeap,
                                                                144i64,
                                                                0i64);
                if ( v31 )
                {
                  Scaleform::Render::ShapeMeshProvider::ShapeMeshProvider(v31, v23, 0i64);
                  v33 = v32;
                }
                else
                {
                  v33 = 0i64;
                }
                v34 = (Scaleform::Render::TreeShape *)Scaleform::Render::ContextImpl::Context::CreateEntry<Scaleform::Render::TreeShape>(&this->RenderContext);
                Scaleform::Render::TreeShape::SetShape(v34, v33);
                Scaleform::Render::TreeContainer::Add(this->FocusRectContainerNode.pObject, v34);
                if ( v34 )
                  ++v34->RefCount;
                v35 = this->FocusGroups[v10].FocusRectNode.pObject;
                if ( v35 )
                {
                  v6 = v35->RefCount-- == 1;
                  if ( v6 )
                    Scaleform::Render::ContextImpl::Entry::destroyHelper(v35);
                }
                this->FocusGroups[v10].FocusRectNode.pObject = v34;
                if ( v34 )
                {
                  v6 = v34->RefCount-- == 1;
                  if ( v6 )
                    Scaleform::Render::ContextImpl::Entry::destroyHelper(v34);
                }
                if ( v33 )
                  v33->Release(&v33->Scaleform::Render::MeshProvider);
                Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v23);
                v9 = v36;
              }
              Scaleform::RefCountNTSImpl::Release(v12);
            }
          }
          else
          {
            v6 = v11->RefCount-- == 1;
            if ( v6 )
              ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
            this->FocusGroups[v10].LastFocused.pProxy.pObject = 0i64;
          }
        }
        v9 += 1081552;
        ++v8;
        v36 = v9;
      }
      while ( v8 < this->FocusGroupsCnt );
    }
    this->FocusRectChanged = 0;
  }
}

void __fastcall Scaleform::GFx::MovieImpl::UpdateTransformParent(
        Scaleform::GFx::MovieImpl *this,
        Scaleform::GFx::DisplayObjectBase *obj,
        Scaleform::GFx::DisplayObjectBase *transfParent)
{
  unsigned __int64 Size; // r9
  Scaleform::Render::TreeNode *v4; // rdi
  __int64 v5; // rbx
  Scaleform::GFx::MovieImpl::IndirectTransPair *Data; // r10
  Scaleform::GFx::DisplayObjectBase **i; // rax
  Scaleform::GFx::MovieImpl::IndirectTransPair *v8; // rbx
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::Render::ContextImpl::Entry *pObject; // rcx

  Size = this->IndirectTransformPairs.Data.Size;
  v4 = 0i64;
  v5 = 0i64;
  if ( Size )
  {
    Data = this->IndirectTransformPairs.Data.Data;
    for ( i = &Data->Obj.pObject; *i != obj; i += 4 )
    {
      if ( ++v5 >= Size )
        return;
    }
    v8 = &Data[v5];
    if ( transfParent )
    {
      RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(transfParent);
      v4 = RenderNode;
      if ( RenderNode )
        ++RenderNode->RefCount;
    }
    pObject = v8->TransformParent.pObject;
    if ( v8->TransformParent.pObject )
    {
      if ( pObject->RefCount-- == 1 )
        Scaleform::Render::ContextImpl::Entry::destroyHelper(pObject);
    }
    v8->TransformParent.pObject = v4;
    v8->OrigParentDepth = -1;
  }
}

void __fastcall Scaleform::GFx::MovieImpl::UpdateViewAndPerspective(Scaleform::GFx::MovieImpl *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  Scaleform::GFx::InteractiveObject *pObject; // rcx

  if ( this->VisibleFrameRect.x2 != this->VisibleFrameRect.x1 || this->VisibleFrameRect.y2 != this->VisibleFrameRect.y1 )
  {
    v2 = 0;
    if ( this->MovieLevels.Data.Size )
    {
      v3 = 0i64;
      do
      {
        pObject = this->MovieLevels.Data.Data[v3].pSprite.pObject;
        if ( pObject )
          pObject->UpdateViewAndPerspective(pObject);
        v3 = ++v2;
      }
      while ( v2 < this->MovieLevels.Data.Size );
    }
  }
}

void __fastcall Scaleform::GFx::MovieImpl::UpdateViewport(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::GFx::MovieDefImpl *pObject; // r8
  float ViewOffsetY; // xmm6_4
  float ViewScaleX; // xmm7_4
  float x2; // xmm10_4
  float y1; // xmm11_4
  float y2; // xmm12_4
  float PixelScale; // xmm13_4
  float ViewOffsetX; // xmm14_4
  float ViewScaleY; // xmm15_4
  float x1; // xmm9_4
  int Top; // edx
  __m128i v13; // xmm1
  int v14; // eax
  Scaleform::GFx::Movie::ScaleModeType ViewScaleMode; // edx
  float v16; // xmm7_4
  float *v17; // rax
  float v18; // xmm5_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm7_4
  float v22; // xmm6_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // xmm3_4
  float v27; // xmm4_4
  float v28; // xmm0_4
  float v29; // xmm6_4
  float v30; // xmm3_4
  float v31; // xmm1_4
  float v32; // xmm4_4
  float Scale; // xmm2_4
  float v34; // xmm5_4
  float v35; // xmm2_4
  float v36; // xmm4_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm2_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm2_4
  float v44; // [rsp+D0h] [rbp+8h]
  float v45; // [rsp+D8h] [rbp+10h]

  pObject = this->pMainMovieDef.pObject;
  ViewOffsetY = this->ViewOffsetY;
  ViewScaleX = this->ViewScaleX;
  x2 = this->VisibleFrameRect.x2;
  y1 = this->VisibleFrameRect.y1;
  y2 = this->VisibleFrameRect.y2;
  PixelScale = this->PixelScale;
  ViewOffsetX = this->ViewOffsetX;
  ViewScaleY = this->ViewScaleY;
  x1 = this->VisibleFrameRect.x1;
  v44 = ViewOffsetY;
  v45 = ViewScaleX;
  if ( !pObject )
  {
    this->ViewScaleY = 1.0;
    *(_QWORD *)&this->ViewOffsetX = 0i64;
    this->ViewScaleX = 1.0;
    this->PixelScale = 1.0;
    goto LABEL_45;
  }
  Top = this->mViewport.Top;
  v13 = _mm_cvtsi32_si128(Top);
  v14 = Top + this->mViewport.Height;
  ViewScaleMode = this->ViewScaleMode;
  v16 = (float)v14;
  v17 = (float *)pObject->pBindData.pObject->pDataDef.pObject->pData.pObject;
  v18 = (float)((float)(this->mViewport.Left + this->mViewport.Width) * 20.0)
      - (float)((float)this->mViewport.Left * 20.0);
  v19 = v17[26] - v17[24];
  v20 = v17[27] - v17[25];
  v21 = (float)(v16 * 20.0) - (float)(_mm_cvtepi32_ps(v13).m128_f32[0] * 20.0);
  switch ( ViewScaleMode )
  {
    case SM_NoScale:
      Scale = this->mViewport.Scale;
      v34 = (float)(v18 * this->mViewport.AspectRatio) * Scale;
      v35 = Scale * v21;
      switch ( this->ViewAlignment )
      {
        case Align_Center:
          this->VisibleFrameRect.x1 = (float)(20
                                            * (int)(float)((float)((float)(v19 * 0.5) - (float)(v34 * 0.5)) * 0.050000001));
          v36 = (float)(v20 * 0.5) - (float)(v35 * 0.5);
          goto LABEL_35;
        case Align_TopCenter:
          this->VisibleFrameRect.y1 = 0.0;
          this->VisibleFrameRect.x1 = (float)(20
                                            * (int)(float)((float)((float)(v19 * 0.5) - (float)(v34 * 0.5)) * 0.050000001));
          break;
        case Align_BottomCenter:
          this->VisibleFrameRect.y1 = v20 - v35;
          this->VisibleFrameRect.x1 = (float)(20
                                            * (int)(float)((float)((float)(v19 * 0.5) - (float)(v34 * 0.5)) * 0.050000001));
          break;
        case Align_CenterLeft:
          this->VisibleFrameRect.x1 = 0.0;
          goto LABEL_34;
        case Align_CenterRight:
          this->VisibleFrameRect.x1 = v19 - v34;
LABEL_34:
          v36 = (float)(v20 * 0.5) - (float)(v35 * 0.5);
LABEL_35:
          this->VisibleFrameRect.y1 = (float)(20 * (int)(float)(v36 * 0.050000001));
          break;
        case Align_TopLeft:
          *(_QWORD *)&this->VisibleFrameRect.x1 = 0i64;
          break;
        case Align_TopRight:
          this->VisibleFrameRect.y1 = 0.0;
          this->VisibleFrameRect.x1 = v19 - v34;
          break;
        case Align_BottomLeft:
          this->VisibleFrameRect.x1 = 0.0;
          this->VisibleFrameRect.y1 = v20 - v35;
          break;
        case Align_BottomRight:
          this->VisibleFrameRect.x1 = v19 - v34;
          this->VisibleFrameRect.y1 = v20 - v35;
          break;
        default:
          break;
      }
      this->VisibleFrameRect.x2 = v34 + this->VisibleFrameRect.x1;
      this->VisibleFrameRect.y2 = v35 + this->VisibleFrameRect.y1;
      v37 = this->mViewport.Scale;
      v38 = this->VisibleFrameRect.y1 * 0.050000001;
      this->ViewOffsetX = this->VisibleFrameRect.x1 * 0.050000001;
      v39 = v37 * this->mViewport.AspectRatio;
      this->ViewOffsetY = v38;
      this->ViewScaleY = v37;
      this->ViewScaleX = v39;
      goto LABEL_37;
    case SM_ShowAll:
      goto LABEL_6;
    case SM_ExactFit:
      *(_QWORD *)&this->VisibleFrameRect.x1 = 0i64;
      v26 = v19 + this->VisibleFrameRect.x1;
      this->VisibleFrameRect.x2 = v26;
      v27 = v20 + this->VisibleFrameRect.y1;
      this->VisibleFrameRect.y2 = v27;
      *(_QWORD *)&this->ViewOffsetX = 0i64;
      if ( v18 == 0.0 )
        v28 = 0.0;
      else
        v28 = (float)(v26 - this->VisibleFrameRect.x1) / v18;
      this->ViewScaleX = v28;
      if ( v21 == 0.0 )
        this->ViewScaleY = 0.0;
      else
        this->ViewScaleY = (float)(v27 - this->VisibleFrameRect.y1) / v21;
      break;
    case SM_NoBorder:
LABEL_6:
      v22 = v18 * this->mViewport.AspectRatio;
      if ( ViewScaleMode == SM_ShowAll && (float)(v21 / v20) > (float)(v22 / v19)
        || ViewScaleMode == SM_NoBorder && (float)(v22 / v19) > (float)(v21 / v20) )
      {
        this->VisibleFrameRect.x1 = 0.0;
        v23 = (float)(v19 * v21) / v22;
        this->VisibleFrameRect.y1 = (float)(v20 * 0.5) - (float)(v23 * 0.5);
        this->VisibleFrameRect.x2 = v19 + this->VisibleFrameRect.x1;
        this->VisibleFrameRect.y2 = v23 + this->VisibleFrameRect.y1;
        v24 = this->VisibleFrameRect.y1 * 0.050000001;
        this->ViewOffsetX = 0.0;
        this->ViewOffsetY = v24;
        if ( v18 == 0.0 )
          v25 = 0.0;
        else
          v25 = v19 / v18;
        this->ViewScaleX = v25;
        this->ViewScaleY = v25 / this->mViewport.AspectRatio;
      }
      else
      {
        this->VisibleFrameRect.y1 = 0.0;
        v29 = (float)(v22 * v20) / v21;
        v30 = (float)(v19 * 0.5) - (float)(v29 * 0.5);
        this->VisibleFrameRect.x1 = v30;
        this->VisibleFrameRect.x2 = v29 + v30;
        this->VisibleFrameRect.y2 = v20 + this->VisibleFrameRect.y1;
        v31 = this->VisibleFrameRect.x1 * 0.050000001;
        this->ViewOffsetY = 0.0;
        this->ViewOffsetX = v31;
        if ( v21 == 0.0 )
          v32 = 0.0;
        else
          v32 = v20 / v21;
        this->ViewScaleY = v32;
        this->ViewScaleX = v32 * this->mViewport.AspectRatio;
      }
LABEL_37:
      ViewOffsetY = v44;
      break;
  }
  v40 = this->ViewScaleY;
  v41 = FLOAT_0_0049999999;
  if ( v40 == 0.0 )
    v42 = FLOAT_0_0049999999;
  else
    v42 = 1.0 / v40;
  v43 = this->ViewScaleX;
  if ( v43 != 0.0 )
    v41 = 1.0 / v43;
  ViewScaleX = v45;
  this->PixelScale = fmaxf(v41, v42);
LABEL_45:
  Scaleform::GFx::MovieImpl::ResetViewportMatrix(this);
  if ( x1 != this->VisibleFrameRect.x1
    || x2 != this->VisibleFrameRect.x2
    || y1 != this->VisibleFrameRect.y1
    || y2 != this->VisibleFrameRect.y2
    || ViewOffsetX != this->ViewOffsetX
    || ViewOffsetY != this->ViewOffsetY
    || ViewScaleX != this->ViewScaleX
    || ViewScaleY != this->ViewScaleY
    || PixelScale != this->PixelScale )
  {
    Scaleform::GFx::MovieImpl::UpdateViewAndPerspective(this);
  }
}

void __fastcall Scaleform::Render::Matrix3x4<float>::View(
        Scaleform::Render::Matrix3x4<float> *this,
        const Scaleform::Render::Point3<float> *eyePt,
        const Scaleform::Render::Point3<float> *zAxis,
        const Scaleform::Render::Point3<float> *upVec)
{
  float z; // xmm0_4
  float v8; // xmm9_4
  float x; // xmm10_4
  float y; // xmm11_4
  float v11; // xmm6_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  long double v14; // xmm0_8
  float v15; // xmm1_4
  float v16; // xmm4_4
  float v17; // xmm9_4
  float v18; // xmm10_4
  float v19; // xmm6_4
  float v20; // xmm8_4
  float v21; // xmm7_4

  z = upVec->z;
  v8 = zAxis->z;
  x = zAxis->x;
  y = zAxis->y;
  v11 = (float)(upVec->y * v8) - (float)(z * y);
  v12 = (float)(zAxis->x * z) - (float)(upVec->x * v8);
  v13 = (float)(upVec->x * y) - (float)(zAxis->x * upVec->y);
  v14 = (float)((float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v13 * v13));
  if ( v14 >= 9.999999999999999e-25 )
  {
    v15 = sqrt(v14);
    v11 = v11 / v15;
    v12 = v12 / v15;
    v13 = v13 / v15;
  }
  v16 = (float)(y * v13) - (float)(v8 * v12);
  v17 = (float)(v8 * v11) - (float)(x * v13);
  v18 = (float)(x * v12) - (float)(y * v11);
  if ( (float)((float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v13 * v13)) > 1.4210855e-14
    && (float)((float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v18 * v18)) > 1.4210855e-14 )
  {
    this->M[0][0] = v11;
    this->M[0][1] = v12;
    this->M[0][2] = v13;
    v19 = v11 * eyePt->x;
    v20 = v12 * eyePt->y;
    v21 = v13 * eyePt->z;
    this->M[1][0] = v16;
    this->M[1][1] = v17;
    this->M[1][2] = v18;
    LODWORD(this->M[0][3]) = COERCE_UNSIGNED_INT((float)(v19 + v20) + v21) ^ _xmm;
    LODWORD(this->M[1][3]) = COERCE_UNSIGNED_INT((float)((float)(v16 * eyePt->x) + (float)(v17 * eyePt->y)) + (float)(v18 * eyePt->z)) ^ _xmm;
    this->M[2][0] = zAxis->x;
    this->M[2][1] = zAxis->y;
    this->M[2][2] = zAxis->z;
    LODWORD(this->M[2][3]) = COERCE_UNSIGNED_INT(
                               (float)((float)(zAxis->y * eyePt->y) + (float)(eyePt->x * zAxis->x))
                             + (float)(eyePt->z * zAxis->z)) ^ _xmm;
  }
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
        Scaleform::Render::PathDataEncoder<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int v)
{
  Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *Data; // rdi
  unsigned __int64 v5; // rsi
  char v6; // bl
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  _BYTE *v9; // rcx
  char v11; // bp
  char v12; // bp
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  _BYTE *v15; // rcx
  Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *v16; // rdi
  unsigned int v17; // ebx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  _BYTE *v21; // rcx
  char v22; // bp
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  _BYTE *v25; // rcx
  Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *v26; // rdi
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // r8
  __int64 v29; // rcx
  _BYTE *v30; // rcx
  Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *v31; // rdi
  unsigned int v32; // ebx
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // r8
  __int64 v35; // rcx
  _BYTE *v36; // rcx
  char v37; // bp
  unsigned __int64 v38; // r8
  __int64 v39; // rcx
  _BYTE *v40; // rcx
  Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *v41; // rdi
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r8
  __int64 v44; // rcx
  _BYTE *v45; // rcx
  Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *v46; // rdi
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // r8
  __int64 v49; // rcx
  _BYTE *v50; // rcx
  Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *v51; // rdi
  unsigned int v52; // ebx
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // r8
  __int64 v55; // rcx
  _BYTE *v56; // rcx

  Data = (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this->Data;
  v5 = this->Data->Data.Size + 1;
  if ( v <= 0x3F )
  {
    v6 = 4 * v;
    if ( v5 >= Data->Size )
    {
      if ( v5 > Data->Policy.Capacity )
      {
        v7 = v5 + (v5 >> 2);
        goto LABEL_7;
      }
    }
    else if ( v5 < Data->Policy.Capacity >> 1 )
    {
      v7 = this->Data->Data.Size + 1;
LABEL_7:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Data,
        Data,
        v7);
    }
    v8 = (__int64)(Data->Data - 1);
    Data->Size = v5;
    v9 = (_BYTE *)(v5 + v8);
    if ( v9 )
      *v9 = v6;
    return 1i64;
  }
  v11 = 4 * v;
  if ( v <= 0x3FFF )
  {
    v12 = v11 | 1;
    if ( v5 >= Data->Size )
    {
      if ( v5 <= Data->Policy.Capacity )
        goto LABEL_18;
      v13 = v5 + (v5 >> 2);
    }
    else
    {
      if ( v5 >= Data->Policy.Capacity >> 1 )
        goto LABEL_18;
      v13 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      Data,
      Data,
      v13);
LABEL_18:
    v14 = (__int64)(Data->Data - 1);
    Data->Size = v5;
    v15 = (_BYTE *)(v5 + v14);
    if ( v15 )
      *v15 = v12;
    v16 = (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this->Data;
    v17 = v >> 6;
    v18 = this->Data->Data.Size + 1;
    if ( v18 >= this->Data->Data.Size )
    {
      if ( v18 > v16->Policy.Capacity )
      {
        v19 = v18 + (v18 >> 2);
        goto LABEL_25;
      }
    }
    else if ( v18 < v16->Policy.Capacity >> 1 )
    {
      v19 = this->Data->Data.Size + 1;
LABEL_25:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        v16,
        v16,
        v19);
    }
    v20 = (__int64)(v16->Data - 1);
    v16->Size = v18;
    v21 = (_BYTE *)(v18 + v20);
    if ( v21 )
      *v21 = v17;
    return 2i64;
  }
  if ( v <= 0x3FFFFF )
  {
    v22 = v11 | 2;
    if ( v5 >= Data->Size )
    {
      if ( v5 <= Data->Policy.Capacity )
        goto LABEL_36;
      v23 = v5 + (v5 >> 2);
    }
    else
    {
      if ( v5 >= Data->Policy.Capacity >> 1 )
        goto LABEL_36;
      v23 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      Data,
      Data,
      v23);
LABEL_36:
    v24 = (__int64)(Data->Data - 1);
    Data->Size = v5;
    v25 = (_BYTE *)(v5 + v24);
    if ( v25 )
      *v25 = v22;
    v26 = (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this->Data;
    v27 = this->Data->Data.Size + 1;
    if ( v27 >= this->Data->Data.Size )
    {
      if ( v27 <= v26->Policy.Capacity )
        goto LABEL_44;
      v28 = v27 + (v27 >> 2);
    }
    else
    {
      if ( v27 >= v26->Policy.Capacity >> 1 )
        goto LABEL_44;
      v28 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      v26,
      v26,
      v28);
LABEL_44:
    v29 = (__int64)(v26->Data - 1);
    v26->Size = v27;
    v30 = (_BYTE *)(v27 + v29);
    if ( v30 )
      *v30 = v >> 6;
    v31 = (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this->Data;
    v32 = v >> 14;
    v33 = this->Data->Data.Size + 1;
    if ( v33 >= this->Data->Data.Size )
    {
      if ( v33 > v31->Policy.Capacity )
      {
        v34 = v33 + (v33 >> 2);
        goto LABEL_51;
      }
    }
    else if ( v33 < v31->Policy.Capacity >> 1 )
    {
      v34 = this->Data->Data.Size + 1;
LABEL_51:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        v31,
        v31,
        v34);
    }
    v35 = (__int64)(v31->Data - 1);
    v31->Size = v33;
    v36 = (_BYTE *)(v33 + v35);
    if ( v36 )
      *v36 = v32;
    return 3i64;
  }
  v37 = v11 | 3;
  if ( v5 >= Data->Size )
  {
    if ( v5 <= Data->Policy.Capacity )
      goto LABEL_61;
    v38 = v5 + (v5 >> 2);
  }
  else
  {
    if ( v5 >= Data->Policy.Capacity >> 1 )
      goto LABEL_61;
    v38 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    Data,
    Data,
    v38);
LABEL_61:
  v39 = (__int64)(Data->Data - 1);
  Data->Size = v5;
  v40 = (_BYTE *)(v5 + v39);
  if ( v40 )
    *v40 = v37;
  v41 = (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this->Data;
  v42 = this->Data->Data.Size + 1;
  if ( v42 >= this->Data->Data.Size )
  {
    if ( v42 <= v41->Policy.Capacity )
      goto LABEL_69;
    v43 = v42 + (v42 >> 2);
  }
  else
  {
    if ( v42 >= v41->Policy.Capacity >> 1 )
      goto LABEL_69;
    v43 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    v41,
    v41,
    v43);
LABEL_69:
  v44 = (__int64)(v41->Data - 1);
  v41->Size = v42;
  v45 = (_BYTE *)(v42 + v44);
  if ( v45 )
    *v45 = v >> 6;
  v46 = (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this->Data;
  v47 = this->Data->Data.Size + 1;
  if ( v47 >= this->Data->Data.Size )
  {
    if ( v47 <= v46->Policy.Capacity )
      goto LABEL_77;
    v48 = v47 + (v47 >> 2);
  }
  else
  {
    if ( v47 >= v46->Policy.Capacity >> 1 )
      goto LABEL_77;
    v48 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    v46,
    v46,
    v48);
LABEL_77:
  v49 = (__int64)(v46->Data - 1);
  v46->Size = v47;
  v50 = (_BYTE *)(v47 + v49);
  if ( v50 )
    *v50 = v >> 14;
  v51 = (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this->Data;
  v52 = v >> 22;
  v53 = this->Data->Data.Size + 1;
  if ( v53 >= this->Data->Data.Size )
  {
    if ( v53 > v51->Policy.Capacity )
    {
      v54 = v53 + (v53 >> 2);
      goto LABEL_84;
    }
  }
  else if ( v53 < v51->Policy.Capacity >> 1 )
  {
    v54 = this->Data->Data.Size + 1;
LABEL_84:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      v51,
      v51,
      v54);
  }
  v55 = (__int64)(v51->Data - 1);
  v51->Size = v53;
  v56 = (_BYTE *)(v53 + v55);
  if ( v56 )
    *v56 = v52;
  return 4i64;
}

unsigned __int8 *__fastcall Scaleform::Render::LinearHeap::allocFromLastPage(
        Scaleform::Render::LinearHeap *this,
        unsigned __int64 size)
{
  Scaleform::Render::LinearHeap::PageType *pLastPage; // rcx
  unsigned __int8 *pFree; // rdx

  pLastPage = this->pLastPage;
  pFree = pLastPage->pFree;
  if ( pLastPage->pEnd - pFree < (signed __int64)size )
  {
    if ( pFree == pLastPage->pStart )
    {
      Scaleform::Render::LinearHeap::allocPage(this, size);
      this->pLastPage->pFree += size;
      return this->pLastPage->pStart;
    }
    else
    {
      return 0i64;
    }
  }
  else
  {
    pLastPage->pFree = &pFree[size];
    return &this->pLastPage->pFree[-size];
  }
}

void __fastcall Scaleform::Render::LinearHeap::allocPage(Scaleform::Render::LinearHeap *this, unsigned __int64 size)
{
  unsigned __int64 v4; // rbx
  unsigned __int8 *v5; // rax

  if ( this->pLastPage->pStart )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))this->pHeap->Free)(this->pHeap);
  v4 = this->Granularity * ((this->Granularity + size - 1) / this->Granularity);
  v5 = (unsigned __int8 *)this->pHeap->Alloc(this->pHeap, v4, 0i64);
  this->pLastPage->pFree = v5;
  this->pLastPage->pStart = v5;
  this->pLastPage->pEnd = &this->pLastPage->pStart[v4];
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  char *v9; // rsi
  Scaleform::GFx::ASStringNode *v10; // rcx
  int v12; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> > v13; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v12 = 324;
    v6 = 0i64;
    v13.pTable = 0i64;
    v13.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 24 * v5 + 16, &v12);
    v13.pTable->EntryCount = 0i64;
    v13.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 24i64;
        *(_QWORD *)((char *)v13.pTable + v7 - 8) = -2i64;
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
          Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>>(
            &v13,
            pheapAddr,
            (const Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor> *)(v9 + 24),
            *(unsigned int *)(*((_QWORD *)v9 + 3) + 28i64));
          v10 = (Scaleform::GFx::ASStringNode *)*((_QWORD *)v9 + 3);
          if ( v10->RefCount-- == 1 )
            Scaleform::GFx::ASStringNode::ReleaseNode(v10);
          *((_QWORD *)v9 + 2) = -2i64;
        }
        v6 += 24i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v13.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>>((Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,329>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF> > *)this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  const Scaleform::GFx::StateBagImpl::StatePtr *v9; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  int v11; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> > v12; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v11 = 2;
    v6 = 0i64;
    v12.pTable = 0i64;
    v12.pTable = (Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> >::TableType *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 24 * v5 + 16, &v11);
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
        v9 = (const Scaleform::GFx::StateBagImpl::StatePtr *)((char *)this->pTable + v6);
        if ( v9[2].pState.pObject != (Scaleform::GFx::State *)-2i64 )
        {
          Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp>>::add<Scaleform::GFx::StateBagImpl::StatePtr>(
            &v12,
            pheapAddr,
            v9 + 4,
            v9[4].pState.pObject->SType);
          pObject = (Scaleform::RefCountVImpl *)v9[4].pState.pObject;
          if ( pObject )
            Scaleform::RefCountImpl::Release(pObject);
          v9[2].pState.pObject = (Scaleform::GFx::State *)-2i64;
        }
        v6 += 24i64;
        --v8;
      }
      while ( v8 );
      if ( this->pTable )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    this->pTable = v12.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::Clear((Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > *)this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  const Scaleform::Ptr<Scaleform::Render::Font> *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  Scaleform::RefCountVImpl *pObject; // rcx
  int v14; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > v15; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v14 = 2;
    v6 = 0i64;
    v15.pTable = 0i64;
    v15.pTable = (Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > >::TableType *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 24 * v5 + 16, &v14);
    v15.pTable->EntryCount = 0i64;
    v15.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 24i64;
        *(_QWORD *)((char *)v15.pTable + v7 - 8) = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = (const Scaleform::Ptr<Scaleform::Render::Font> *)((char *)this->pTable + v6);
        if ( v9[2].pObject != (Scaleform::Render::Font *)-2i64 )
        {
          v10 = 8i64;
          v11 = 5381i64;
          do
          {
            v12 = *((unsigned __int8 *)&v9[3].pObject + v10 + 7);
            --v10;
            v11 = v12 + 65599 * v11;
          }
          while ( v10 );
          Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::add<Scaleform::Ptr<Scaleform::Render::Font>>(
            &v15,
            pheapAddr,
            v9 + 4,
            v11);
          pObject = (Scaleform::RefCountVImpl *)v9[4].pObject;
          if ( pObject )
            Scaleform::RefCountImpl::Release(pObject);
          v9[2].pObject = (Scaleform::Render::Font *)-2i64;
        }
        v6 += 24i64;
        --v8;
      }
      while ( v8 );
      if ( this->pTable )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    this->pTable = v15.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::Clear(this);
  }
}

