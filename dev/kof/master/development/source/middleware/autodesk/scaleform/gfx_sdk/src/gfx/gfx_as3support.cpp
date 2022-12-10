#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_textfield.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_textfielddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_gc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_value.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_as3support.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_stringmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/text/text_editorkit.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_avmstage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_vm.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/as3_obj_function.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_avmdisplayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_avminteractiveobj.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/display/as3_obj_display_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_statictext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/display/as3_obj_display_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/events/as3_obj_events_eventdispatcher.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/as3_obj_object.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_instance.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/as3_obj_classclass.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_traits.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_object.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_slot.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_index.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/abc/as3_abc_type.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_avmstatictext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/text/as3_obj_text_stylesheet.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/as3_obj_namespace.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/abc/as3_abc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/abc/as3_abc_constpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_hashtable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/ime/as3_imemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/ime/gfx_imemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/xml/xml_support.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asimemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_avmbutton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displaylist.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_movieroot.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_avmsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_avmbitmap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_bitset.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_avmtextfield.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/text/text_stylesheet.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_avmdisplayobj.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/events/as3_obj_events_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_valuestack.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_button.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loadprocess.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_multiname.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_buttondef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_flashui.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_abcdatabuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"

class Scaleform::GFx::AS3::DoAbc :
	Scaleform::GFx::ExecuteTag
{
public:
	DoAbc(Scaleform::GFx::AS3::DoAbc &);
	DoAbc(const Scaleform::GFx::AS3::DoAbc &);
	DoAbc();
	Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> pAbc; // 0x8
	virtual void Execute(Scaleform::GFx::DisplayObjContainer *);
	virtual void ExecuteWithPriority(Scaleform::GFx::DisplayObjContainer *, Scaleform::GFx::ActionPriority::Priority);
	virtual bool IsActionTag();
	virtual void Trace(const char *);
	virtual ~DoAbc();
	Scaleform::GFx::AS3::DoAbc & operator=(Scaleform::GFx::AS3::DoAbc &);
	Scaleform::GFx::AS3::DoAbc & operator=(const Scaleform::GFx::AS3::DoAbc &);
};
void Scaleform::GFx::AS3::DoAbc::Execute(Scaleform::GFx::DisplayObjContainer * m); // 0x1404C46A0
void Scaleform::GFx::AS3::DoAbc::ExecuteWithPriority(Scaleform::GFx::DisplayObjContainer * m, Scaleform::GFx::ActionPriority::Priority __formal); // 0x14002DF00
bool Scaleform::GFx::AS3::DoAbc::IsActionTag(); // 0x1400B8180
void Scaleform::GFx::AS3Support::DoActionLoader(Scaleform::GFx::LoadProcess * __formal, const Scaleform::GFx::TagInfo & __formal); // 0x14002E7C0
void Scaleform::GFx::AS3::SymbolClassLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x1404C4790
void Scaleform::GFx::AS3::DoAbcLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x1404C4460
Scaleform::GFx::AS3Support::AS3Support(); // 0x1404C3880
Scaleform::GFx::AS3::AbcDataBuffer::~AbcDataBuffer(); // 0x1404C3930
Scaleform::GFx::MovieImpl * Scaleform::GFx::AS3Support::CreateMovie(Scaleform::GFx::MemoryContext * memContext); // 0x1404C43C0
Scaleform::Ptr<Scaleform::GFx::ASIMEManager> Scaleform::GFx::AS3Support::CreateASIMEManager(); // 0x1404C3E40
Scaleform::GFx::MemoryContext * Scaleform::GFx::AS3Support::CreateMemoryContext(const char * heapName, const Scaleform::GFx::MemoryParams & memParams, bool debugHeap); // 0x1404C41E0
Scaleform::GFx::DisplayObjectBase * Scaleform::GFx::AS3Support::CreateCharacterInstance(Scaleform::GFx::MovieImpl * proot, const Scaleform::GFx::CharacterCreateInfo & ccinfo, Scaleform::GFx::InteractiveObject * pparent, Scaleform::GFx::ResourceId rid, Scaleform::GFx::CharacterDef::CharacterDefType type); // 0x1404C3E90
Scaleform::GFx::PlaceObject2Tag * Scaleform::GFx::AS3Support::AllocPlaceObject2Tag(Scaleform::GFx::LoadProcess * p, unsigned long long dataSz, unsigned char __formal); // 0x1404C3CC0
Scaleform::GFx::PlaceObject3Tag * Scaleform::GFx::AS3Support::AllocPlaceObject3Tag(Scaleform::GFx::LoadProcess * p, unsigned long long dataSz); // 0x1404C3D20
Scaleform::GFx::RemoveObjectTag * Scaleform::GFx::AS3Support::AllocRemoveObjectTag(Scaleform::GFx::LoadProcess * p); // 0x1404C3DE0
Scaleform::GFx::RemoveObject2Tag * Scaleform::GFx::AS3Support::AllocRemoveObject2Tag(Scaleform::GFx::LoadProcess * p); // 0x1404C3D80Scaleform::GFx::AS3::DoAbc *__fastcall Scaleform::GFx::LoadProcess::AllocTag<Scaleform::GFx::AS3::DoAbc>(
        Scaleform::GFx::LoadProcess *this)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // r8
  unsigned __int64 BytesLeft; // rdx
  Scaleform::GFx::AS3::DoAbc *pCurrent; // rcx
  Scaleform::GFx::AS3::DoAbc *result; // rax

  pObject = this->pLoadData.pObject;
  BytesLeft = pObject->TagMemAllocator.BytesLeft;
  if ( BytesLeft < 0x10 )
  {
    pCurrent = (Scaleform::GFx::AS3::DoAbc *)Scaleform::GFx::DataAllocator::OverflowAlloc(
                                               &pObject->TagMemAllocator,
                                               0x10ui64);
  }
  else
  {
    pCurrent = (Scaleform::GFx::AS3::DoAbc *)pObject->TagMemAllocator.pCurrent;
    pObject->TagMemAllocator.pCurrent = (unsigned __int8 *)&pCurrent[1];
    pObject->TagMemAllocator.BytesLeft = BytesLeft - 16;
  }
  if ( !pCurrent )
    return 0i64;
  pCurrent->__vftable = (Scaleform::GFx::AS3::DoAbc_vtbl *)&Scaleform::GFx::AS3::DoAbc::`vftable';
  result = pCurrent;
  pCurrent->pAbc.pObject = 0i64;
  return result;
}

void __fastcall Scaleform::GFx::AS3Support::AS3Support(Scaleform::GFx::AS3Support *this)
{
  this->SType = 40;
  this->__vftable = (Scaleform::GFx::AS3Support_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::AS3Support_vtbl *)&Scaleform::GFx::AS3Support::`vftable';
  Scaleform::GFx::RegisterTagLoader(0x4Cu, Scaleform::GFx::AS3::SymbolClassLoader);
  Scaleform::GFx::RegisterTagLoader(0x52u, Scaleform::GFx::AS3::DoAbcLoader);
}

void __fastcall Scaleform::GFx::AS3::AvmMovieClip::AvmMovieClip(
        Scaleform::GFx::AS3::AvmMovieClip *this,
        Scaleform::GFx::Sprite *psprite)
{
  Scaleform::GFx::AS3::AvmSprite::AvmSprite(this, psprite);
  this->Scaleform::GFx::AS3::AvmSprite::Scaleform::GFx::AS3::AvmDisplayObjContainer::Scaleform::GFx::AS3::AvmInteractiveObj::Scaleform::GFx::AS3::AvmDisplayObj::Scaleform::GFx::AvmDisplayObjBase::__vftable = (Scaleform::GFx::AS3::AvmMovieClip_vtbl *)&Scaleform::GFx::AS3::AvmMovieClip::`vftable'{for `Scaleform::GFx::AS3::AvmDisplayObj'};
  this->Scaleform::GFx::AS3::AvmSprite::Scaleform::GFx::AS3::AvmDisplayObjContainer::Scaleform::GFx::AS3::AvmInteractiveObj::Scaleform::GFx::AvmInteractiveObjBase::Scaleform::GFx::AvmDisplayObjBase::__vftable = (Scaleform::GFx::AvmInteractiveObjBase_vtbl *)&Scaleform::GFx::AS3::AvmMovieClip::`vftable'{for `Scaleform::GFx::AvmInteractiveObjBase'};
  this->Scaleform::GFx::AS3::AvmSprite::Scaleform::GFx::AS3::AvmDisplayObjContainer::Scaleform::GFx::AvmDisplayObjContainerBase::Scaleform::GFx::AvmInteractiveObjBase::Scaleform::GFx::AvmDisplayObjBase::__vftable = (Scaleform::GFx::AvmDisplayObjContainerBase_vtbl *)&Scaleform::GFx::AS3::AvmMovieClip::`vftable'{for `Scaleform::GFx::AS3::AvmDisplayObjContainer'};
  this->Scaleform::GFx::AS3::AvmSprite::Scaleform::GFx::AvmSpriteBase::Scaleform::GFx::AvmDisplayObjContainerBase::Scaleform::GFx::AvmInteractiveObjBase::Scaleform::GFx::AvmDisplayObjBase::__vftable = (Scaleform::GFx::AvmSpriteBase_vtbl *)&Scaleform::GFx::AS3::AvmMovieClip::`vftable'{for `Scaleform::GFx::AvmSpriteBase'};
}

void __fastcall Scaleform::GFx::AS3::AbcDataBuffer::~AbcDataBuffer(Scaleform::GFx::AS3::AbcDataBuffer *this)
{
  volatile int *v2; // rbx
  volatile int *v3; // rbx

  v2 = (volatile int *)(this->FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v2 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v2);
  v3 = (volatile int *)(this->Name.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::AS3::MemoryContextImpl::~MemoryContextImpl(
        Scaleform::GFx::AS3::MemoryContextImpl *this)
{
  Scaleform::Render::Text::Allocator *pObject; // rcx
  Scaleform::RefCountVImpl *v3; // rcx
  Scaleform::RefCountVImpl *v4; // rcx

  this->__vftable = (Scaleform::GFx::AS3::MemoryContextImpl_vtbl *)&Scaleform::GFx::AS3::MemoryContextImpl::`vftable';
  this->Heap->SetLimitHandler(this->Heap, 0i64);
  this->LimHandler.__vftable = (Scaleform::GFx::AS3::MemoryContextImpl::HeapLimit_vtbl *)&Scaleform::Render::StateData::Interface::`vftable';
  pObject = this->TextAllocator.pObject;
  if ( pObject )
    Scaleform::RefCountNTSImpl::Release(pObject);
  v3 = (Scaleform::RefCountVImpl *)this->ASGC.pObject;
  if ( v3 )
    Scaleform::RefCountImpl::Release(v3);
  v4 = (Scaleform::RefCountVImpl *)this->StringMgr.pObject;
  if ( v4 )
    Scaleform::RefCountImpl::Release(v4);
  this->__vftable = (Scaleform::GFx::AS3::MemoryContextImpl_vtbl *)&Scaleform::GFx::MemoryContext::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::LoadProcess::AddInitAction(
        Scaleform::GFx::LoadProcess *this,
        Scaleform::GFx::ResourceId spriteId,
        Scaleform::GFx::ExecuteTag *ptag)
{
  Scaleform::Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> > *p_InitActionTags; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  Scaleform::GFx::ExecuteTag **v8; // rcx

  p_InitActionTags = &this->InitActionTags;
  v5 = this->InitActionTags.Data.Size + 1;
  if ( v5 >= this->InitActionTags.Data.Size )
  {
    if ( v5 <= this->InitActionTags.Data.Policy.Capacity )
      goto LABEL_7;
    v6 = v5 + (v5 >> 2);
  }
  else
  {
    if ( v5 >= this->InitActionTags.Data.Policy.Capacity >> 1 )
      goto LABEL_7;
    v6 = this->InitActionTags.Data.Size + 1;
  }
  Scaleform::ArrayDataBase<Scaleform::GFx::ExecuteTag *,Scaleform::AllocatorGH<Scaleform::GFx::ExecuteTag *,2>,Scaleform::ArrayConstPolicy<32,16,0>>::Reserve(
    &this->InitActionTags.Data,
    &this->InitActionTags,
    v6);
LABEL_7:
  v7 = (__int64)(p_InitActionTags->Data.Data - 1);
  p_InitActionTags->Data.Size = v5;
  v8 = (Scaleform::GFx::ExecuteTag **)(v7 + 8 * v5);
  if ( v8 )
    *v8 = ptag;
}

Scaleform::GFx::PlaceObject2Tag *__fastcall Scaleform::GFx::AS3Support::AllocPlaceObject2Tag(
        Scaleform::GFx::AS3Support *this,
        Scaleform::GFx::LoadProcess *p,
        unsigned __int64 dataSz,
        unsigned __int8 __formal)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // r9
  unsigned __int64 v5; // rdx
  unsigned __int64 BytesLeft; // r8
  unsigned __int8 *pCurrent; // rcx

  pObject = p->pLoadData.pObject;
  v5 = (dataSz + 22) & 0xFFFFFFFFFFFFFFF8ui64;
  BytesLeft = pObject->TagMemAllocator.BytesLeft;
  if ( v5 > BytesLeft )
  {
    pCurrent = Scaleform::GFx::DataAllocator::OverflowAlloc(&pObject->TagMemAllocator, v5);
  }
  else
  {
    pCurrent = pObject->TagMemAllocator.pCurrent;
    pObject->TagMemAllocator.BytesLeft = BytesLeft - v5;
    pObject->TagMemAllocator.pCurrent = &pCurrent[v5];
  }
  if ( !pCurrent )
    return 0i64;
  *(_QWORD *)pCurrent = &Scaleform::GFx::PlaceObject2Tag::`vftable';
  return (Scaleform::GFx::PlaceObject2Tag *)pCurrent;
}

Scaleform::GFx::PlaceObject3Tag *__fastcall Scaleform::GFx::AS3Support::AllocPlaceObject3Tag(
        Scaleform::GFx::AS3Support *this,
        Scaleform::GFx::LoadProcess *p,
        unsigned __int64 dataSz)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 BytesLeft; // r8
  unsigned __int8 *pCurrent; // rcx

  pObject = p->pLoadData.pObject;
  v4 = (dataSz + 22) & 0xFFFFFFFFFFFFFFF8ui64;
  BytesLeft = pObject->TagMemAllocator.BytesLeft;
  if ( v4 > BytesLeft )
  {
    pCurrent = Scaleform::GFx::DataAllocator::OverflowAlloc(&pObject->TagMemAllocator, v4);
  }
  else
  {
    pCurrent = pObject->TagMemAllocator.pCurrent;
    pObject->TagMemAllocator.BytesLeft = BytesLeft - v4;
    pObject->TagMemAllocator.pCurrent = &pCurrent[v4];
  }
  if ( !pCurrent )
    return 0i64;
  *(_QWORD *)pCurrent = &Scaleform::GFx::PlaceObject3Tag::`vftable';
  return (Scaleform::GFx::PlaceObject3Tag *)pCurrent;
}

Scaleform::GFx::RemoveObject2Tag *__fastcall Scaleform::GFx::AS3Support::AllocRemoveObject2Tag(
        Scaleform::GFx::AS3Support *this,
        Scaleform::GFx::LoadProcess *p)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // r8
  unsigned __int64 BytesLeft; // rdx
  unsigned __int8 *pCurrent; // rcx

  pObject = p->pLoadData.pObject;
  BytesLeft = pObject->TagMemAllocator.BytesLeft;
  if ( BytesLeft < 0x10 )
  {
    pCurrent = Scaleform::GFx::DataAllocator::OverflowAlloc(&pObject->TagMemAllocator, 0x10ui64);
  }
  else
  {
    pCurrent = pObject->TagMemAllocator.pCurrent;
    pObject->TagMemAllocator.pCurrent = pCurrent + 16;
    pObject->TagMemAllocator.BytesLeft = BytesLeft - 16;
  }
  if ( !pCurrent )
    return 0i64;
  *(_QWORD *)pCurrent = &Scaleform::GFx::RemoveObject2Tag::`vftable';
  return (Scaleform::GFx::RemoveObject2Tag *)pCurrent;
}

Scaleform::GFx::RemoveObjectTag *__fastcall Scaleform::GFx::AS3Support::AllocRemoveObjectTag(
        Scaleform::GFx::AS3Support *this,
        Scaleform::GFx::LoadProcess *p)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // r8
  unsigned __int64 BytesLeft; // rdx
  unsigned __int8 *pCurrent; // rcx

  pObject = p->pLoadData.pObject;
  BytesLeft = pObject->TagMemAllocator.BytesLeft;
  if ( BytesLeft < 0x18 )
  {
    pCurrent = Scaleform::GFx::DataAllocator::OverflowAlloc(&pObject->TagMemAllocator, 0x18ui64);
  }
  else
  {
    pCurrent = pObject->TagMemAllocator.pCurrent;
    pObject->TagMemAllocator.pCurrent = pCurrent + 24;
    pObject->TagMemAllocator.BytesLeft = BytesLeft - 24;
  }
  if ( !pCurrent )
    return 0i64;
  *(_QWORD *)pCurrent = &Scaleform::GFx::RemoveObjectTag::`vftable';
  return (Scaleform::GFx::RemoveObjectTag *)pCurrent;
}

Scaleform::Ptr<Scaleform::GFx::ASIMEManager> *__fastcall Scaleform::GFx::AS3Support::CreateASIMEManager(
        Scaleform::GFx::AS3Support *this,
        Scaleform::Ptr<Scaleform::GFx::ASIMEManager> *result)
{
  Scaleform::GFx::AS3::IMEManager *v3; // rax
  Scaleform::GFx::ASIMEManager *v4; // rax

  v3 = (Scaleform::GFx::AS3::IMEManager *)Scaleform::Memory::pGlobalHeap->Alloc(
                                            Scaleform::Memory::pGlobalHeap,
                                            272i64,
                                            0i64);
  if ( v3 )
  {
    Scaleform::GFx::AS3::IMEManager::IMEManager(v3);
    result->pObject = v4;
  }
  else
  {
    result->pObject = 0i64;
  }
  return result;
}

void __fastcall Scaleform::GFx::AS3Support::CreateCharacterInstance(
        Scaleform::GFx::AS3Support *this,
        Scaleform::GFx::MovieImpl *proot,
        const Scaleform::GFx::CharacterCreateInfo *ccinfo,
        Scaleform::GFx::InteractiveObject *pparent,
        Scaleform::GFx::CharacterDef::CharacterDefType *rid,
        Scaleform::GFx::CharacterDef::CharacterDefType type)
{
  Scaleform::GFx::CharacterDef::CharacterDefType v6; // eax
  Scaleform::GFx::AS3::ShapeObject *v10; // rax
  Scaleform::GFx::ASMovieRootBase *pObject; // r8
  char *v12; // rsi
  Scaleform::GFx::ASMovieRootBase *v13; // r9
  Scaleform::GFx::MovieDefImpl *pBindDefImpl; // r8
  Scaleform::GFx::Sprite *v15; // rax
  Scaleform::GFx::Sprite *v16; // rbx
  char *v17; // rsi
  Scaleform::GFx::ASMovieRootBase *v18; // r9
  Scaleform::GFx::MovieDefImpl *v19; // r8
  Scaleform::GFx::Sprite *v20; // rax
  Scaleform::GFx::Sprite *v21; // rbx
  char *v22; // rsi
  Scaleform::GFx::ASMovieRootBase *v23; // r9
  Scaleform::GFx::MovieDefImpl *v24; // r8
  Scaleform::GFx::Button *v25; // rax
  Scaleform::GFx::Button *v26; // rbx
  char *v27; // rsi
  Scaleform::GFx::ASMovieRootBase *v28; // r9
  Scaleform::GFx::MovieDefImpl *v29; // r8
  Scaleform::GFx::TextField *v30; // rax
  Scaleform::GFx::TextField *v31; // rbx
  char *v32; // rsi
  Scaleform::GFx::ASMovieRootBase *v33; // r9
  Scaleform::GFx::MovieDefImpl *v34; // r8
  Scaleform::GFx::StaticTextCharacter *v35; // rax
  Scaleform::GFx::StaticTextCharacter *v36; // rbx
  Scaleform::GFx::AS3::AvmBitmap *v37; // rax

  v6 = type;
  if ( type == Unknown )
    v6 = ccinfo->pCharDef->GetType(ccinfo->pCharDef);
  switch ( v6 )
  {
    case MouseMove:
      v10 = (Scaleform::GFx::AS3::ShapeObject *)proot->pHeap->Alloc(proot->pHeap, 216i64, 0i64);
      if ( v10 )
      {
        pObject = proot->pASMovieRoot.pObject;
        type = *rid;
        Scaleform::GFx::AS3::ShapeObject::ShapeObject(v10, ccinfo->pCharDef, pObject, pparent, &type);
      }
      break;
    case MouseUp:
      v12 = (char *)proot->pHeap->Alloc(proot->pHeap, 432i64, 0i64);
      if ( v12 )
      {
        v13 = proot->pASMovieRoot.pObject;
        pBindDefImpl = ccinfo->pBindDefImpl;
        type = *rid;
        Scaleform::GFx::Sprite::Sprite(
          (Scaleform::GFx::Sprite *)v12,
          (Scaleform::GFx::TimelineDef *)ccinfo->pCharDef,
          pBindDefImpl,
          v13,
          pparent,
          (unsigned int *)&type,
          0);
        v16 = v15;
      }
      else
      {
        v16 = 0i64;
      }
      if ( v12 != (char *)-320i64 )
        Scaleform::GFx::AS3::AvmMovieClip::AvmMovieClip((Scaleform::GFx::AS3::AvmMovieClip *)(v12 + 320), v16);
      break;
    case MouseWheel:
      v27 = (char *)proot->pHeap->Alloc(proot->pHeap, 408i64, 0i64);
      if ( v27 )
      {
        v28 = proot->pASMovieRoot.pObject;
        v29 = ccinfo->pBindDefImpl;
        type = *rid;
        Scaleform::GFx::TextField::TextField(
          (Scaleform::GFx::TextField *)v27,
          (Scaleform::GFx::TextFieldDef *)ccinfo->pCharDef,
          v29,
          v28,
          pparent,
          (Scaleform::Ptr<Scaleform::GFx::Text::EditorKit>)&type);
        v31 = v30;
      }
      else
      {
        v31 = 0i64;
      }
      if ( v27 != (char *)-328i64 )
        Scaleform::GFx::AS3::AvmTextField::AvmTextField((Scaleform::GFx::AS3::AvmTextField *)(v27 + 328), v31);
      break;
    case KeyDown:
      v32 = (char *)proot->pHeap->Alloc(proot->pHeap, 456i64, 0i64);
      if ( v32 )
      {
        v33 = proot->pASMovieRoot.pObject;
        v34 = ccinfo->pBindDefImpl;
        type = *rid;
        Scaleform::GFx::StaticTextCharacter::StaticTextCharacter(
          (Scaleform::GFx::StaticTextCharacter *)v32,
          (Scaleform::GFx::StaticTextDef *)ccinfo->pCharDef,
          v34,
          v33,
          pparent,
          (unsigned int *)&type);
        v36 = v35;
      }
      else
      {
        v36 = 0i64;
      }
      if ( v32 != (char *)-400i64 )
        Scaleform::GFx::AS3::AvmStaticText::AvmStaticText((Scaleform::GFx::AS3::AvmStaticText *)(v32 + 400), v36);
      break;
    case KeyUp:
      v22 = (char *)proot->pHeap->Alloc(proot->pHeap, 448i64, 0i64);
      if ( v22 )
      {
        v23 = proot->pASMovieRoot.pObject;
        v24 = ccinfo->pBindDefImpl;
        type = *rid;
        Scaleform::GFx::Button::Button(
          (Scaleform::GFx::Button *)v22,
          (Scaleform::GFx::ButtonDef *)ccinfo->pCharDef,
          v24,
          v23,
          pparent,
          (unsigned int *)&type);
        v26 = v25;
      }
      else
      {
        v26 = 0i64;
      }
      if ( v22 != (char *)-368i64 )
        Scaleform::GFx::AS3::AvmButton::AvmButton((Scaleform::GFx::AS3::AvmButton *)(v22 + 368), v26);
      break;
    case SetFocus:
      v37 = (Scaleform::GFx::AS3::AvmBitmap *)proot->pHeap->Alloc(proot->pHeap, 216i64, 0i64);
      if ( v37 )
      {
        type = *rid;
        Scaleform::GFx::AS3::AvmBitmap::AvmBitmap(v37, proot->pASMovieRoot.pObject, ccinfo, pparent, (int *)&type);
      }
      break;
    case KillFocus:
      v17 = (char *)proot->pHeap->Alloc(proot->pHeap, 432i64, 0i64);
      if ( v17 )
      {
        v18 = proot->pASMovieRoot.pObject;
        v19 = ccinfo->pBindDefImpl;
        type = *rid;
        Scaleform::GFx::Sprite::Sprite(
          (Scaleform::GFx::Sprite *)v17,
          (Scaleform::GFx::TimelineDef *)ccinfo->pCharDef,
          v19,
          v18,
          pparent,
          (unsigned int *)&type,
          0);
        v21 = v20;
      }
      else
      {
        v21 = 0i64;
      }
      if ( v17 != (char *)-320i64 )
        Scaleform::GFx::AS3::AvmSprite::AvmSprite((Scaleform::GFx::AS3::AvmSprite *)(v17 + 320), v21);
      break;
    default:
      return;
  }
}

Scaleform::GFx::MemoryContext *__fastcall Scaleform::GFx::AS3Support::CreateMemoryContext(
        Scaleform::GFx::AS3Support *this,
        const char *heapName,
        const Scaleform::GFx::MemoryParams *memParams,
        bool debugHeap)
{
  __m128i v5; // xmm2
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 InitialDynamicLimit; // rax
  Scaleform::MemoryHeap *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  Scaleform::GFx::AS3::ASRefCountCollector *v13; // rax
  Scaleform::GFx::AS3::ASRefCountCollector *v14; // rax
  Scaleform::GFx::AS3::ASRefCountCollector *v15; // r14
  Scaleform::RefCountVImpl *v16; // rcx
  Scaleform::GFx::ASStringManager *v17; // rax
  __int64 v18; // rax
  Scaleform::RefCountVImpl *v19; // rcx
  __m128i v21[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v22; // [rsp+50h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-18h]
  __int64 v24; // [rsp+68h] [rbp-10h]

  v5 = *(__m128i *)&memParams->Desc.Flags;
  v6 = *(_OWORD *)&memParams->Desc.Threshold;
  v21[1] = *(__m128i *)&memParams->Desc.Granularity;
  v7 = *(_OWORD *)&memParams->Desc.HeapId;
  v21[0] = v5;
  v24 = *((_QWORD *)&v7 + 1);
  v22 = v6;
  v23 = 3i64;
  v21[0].m128i_i32[0] = (debugHeap ? 0x1000 : 0) | 3 | _mm_cvtsi128_si32(v5);
  InitialDynamicLimit = memParams->InitialDynamicLimit;
  if ( (_DWORD)InitialDynamicLimit == -1 )
    InitialDynamicLimit = 0x20000i64;
  *((_QWORD *)&v22 + 1) = InitialDynamicLimit;
  v9 = Scaleform::Memory::pGlobalHeap->CreateHeap(Scaleform::Memory::pGlobalHeap, heapName, v21);
  Scaleform::MemoryHeap::AssignToCurrentThread(v9);
  v10 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v9->Alloc)(v9, 104i64);
  v11 = 0i64;
  v12 = v10;
  if ( v10 )
  {
    *(_QWORD *)(v10 + 16) = 0i64;
    *(_QWORD *)v10 = &Scaleform::RefCountImplCore::`vftable';
    *(_QWORD *)v10 = &Scaleform::GFx::AS3::MemoryContextImpl::`vftable';
    *(_DWORD *)(v10 + 8) = 1;
    *(_QWORD *)(v10 + 24) = 0i64;
    *(_QWORD *)(v10 + 32) = 0i64;
    *(_QWORD *)(v10 + 40) = 0i64;
    *(_DWORD *)(v10 + 56) = 0;
    *(_QWORD *)(v10 + 48) = &Scaleform::GFx::AS3::MemoryContextImpl::HeapLimit::`vftable';
    *(_QWORD *)(v10 + 72) = 0i64;
    *(_QWORD *)(v10 + 80) = 0i64;
    *(_QWORD *)(v10 + 88) = 0i64;
    *(_DWORD *)(v10 + 96) = 1048576000;
    *(_QWORD *)(v10 + 64) = v10;
  }
  else
  {
    v12 = 0i64;
  }
  *(_QWORD *)(v12 + 16) = v9;
  v13 = (Scaleform::GFx::AS3::ASRefCountCollector *)v9->Alloc(v9, 232ui64, 0i64);
  if ( v13 )
  {
    Scaleform::GFx::AS3::ASRefCountCollector::ASRefCountCollector(v13);
    v15 = v14;
  }
  else
  {
    v15 = 0i64;
  }
  v16 = *(Scaleform::RefCountVImpl **)(v12 + 32);
  if ( v16 )
    Scaleform::RefCountImpl::Release(v16);
  *(_QWORD *)(v12 + 32) = v15;
  Scaleform::GFx::AS3::ASRefCountCollector::SetParams(
    v15,
    memParams->FramesBetweenCollections,
    memParams->MaxCollectionRoots,
    memParams->RunsToUpgradeGen,
    memParams->RunsToCollectYoung,
    memParams->RunsToCollectOld);
  v17 = (Scaleform::GFx::ASStringManager *)v9->Alloc(v9, 200ui64, 0i64);
  if ( v17 )
  {
    Scaleform::GFx::ASStringManager::ASStringManager(v17, v9);
    v11 = v18;
  }
  v19 = *(Scaleform::RefCountVImpl **)(v12 + 24);
  if ( v19 )
    Scaleform::RefCountImpl::Release(v19);
  *(_QWORD *)(v12 + 24) = v11;
  *(_QWORD *)(v12 + 72) = memParams->Desc.Limit;
  *(float *)(v12 + 96) = memParams->HeapLimitMultiplier;
  v9->SetLimitHandler(v9, (Scaleform::MemoryHeap::LimitHandler *)(v12 + 48));
  Scaleform::MemoryHeap::ReleaseOnFree(v9, (void *)v12);
  return (Scaleform::GFx::MemoryContext *)v12;
}

Scaleform::GFx::MovieImpl *__fastcall Scaleform::GFx::AS3Support::CreateMovie(
        Scaleform::GFx::AS3Support *this,
        Scaleform::GFx::MemoryContext *memContext)
{
  Scaleform::MemoryHeap *v3; // rdi
  Scaleform::GFx::MovieImpl *v5; // rax
  Scaleform::GFx::MovieImpl *v6; // rax
  Scaleform::GFx::MovieImpl *v7; // rbx
  Scaleform::GFx::AS3::MovieRoot *v8; // rax
  Scaleform::RefCountVImpl *v9; // rax

  v3 = (Scaleform::MemoryHeap *)memContext[1].__vftable;
  v5 = (Scaleform::GFx::MovieImpl *)v3->Alloc(v3, 21680ui64, 0i64);
  if ( v5 )
  {
    Scaleform::GFx::MovieImpl::MovieImpl(v5, v3);
    v7 = v6;
  }
  else
  {
    v7 = 0i64;
  }
  v8 = (Scaleform::GFx::AS3::MovieRoot *)v3->Alloc(v3, 2336ui64, 0i64);
  if ( v8 )
  {
    Scaleform::GFx::AS3::MovieRoot::MovieRoot(v8, (Scaleform::GFx::AS3::MemoryContextImpl *)memContext, v7, this);
    if ( v9 )
      Scaleform::RefCountImpl::Release(v9);
  }
  return v7;
}

void __fastcall Scaleform::GFx::AS3::DoAbcLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rdi
  int v5; // eax
  __int64 Pos; // r8
  unsigned __int8 v7; // r14
  unsigned int v8; // ebp
  __int64 ASInitActionTagsNum; // r9
  Scaleform::String *v10; // rax
  Scaleform::GFx::AS3::AbcDataBuffer *v11; // rbx
  Scaleform::GFx::AS3::DoAbc *v12; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  void *v14; // rbx
  Scaleform::StringDH v15; // [rsp+20h] [rbp-68h] BYREF
  Scaleform::GFx::ResourceId spriteId; // [rsp+30h] [rbp-58h] BYREF
  char dest[24]; // [rsp+38h] [rbp-50h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v5 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v5 < 4 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
  Pos = pAltStream->Stream.Pos;
  v7 = pAltStream->Stream.pBuffer[Pos];
  pAltStream->Stream.Pos = Pos + 4;
  Scaleform::StringDH::StringDH(&v15, p->pLoadData.pObject->pHeap);
  Scaleform::GFx::Stream::ReadString(&pAltStream->Stream, &v15);
  v8 = pAltStream->Stream.DataSize
     + tagInfo->TagLength
     + tagInfo->TagDataOffset
     - pAltStream->Stream.FilePos
     - pAltStream->Stream.Pos;
  if ( (*(_QWORD *)(v15.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) == 0 )
  {
    ASInitActionTagsNum = p->ASInitActionTagsNum;
    if ( (_DWORD)ASInitActionTagsNum )
    {
      Scaleform::SFsprintf(dest, 0x14ui64, "%d", ASInitActionTagsNum);
      Scaleform::String::operator=(&v15, dest);
    }
  }
  v10 = (Scaleform::String *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, v8 + 47i64, 0i64);
  v11 = (Scaleform::GFx::AS3::AbcDataBuffer *)v10;
  if ( v10 )
  {
    v10->HeapTypeBits = (unsigned __int64)&Scaleform::RefCountImplCore::`vftable';
    LODWORD(v10[1].pData) = 1;
    v10->HeapTypeBits = (unsigned __int64)&Scaleform::GFx::AS3::AbcDataBuffer::`vftable';
    Scaleform::String::String(v10 + 2, &v15);
    v11->DataSize = v8;
    v11->Flags = v7;
    Scaleform::StringLH::StringLH(&v11->FileName);
  }
  else
  {
    v11 = 0i64;
  }
  Scaleform::String::operator=(
    &v11->FileName,
    (const char *)((p->pDataDef_Unsafe->pData.pObject->FileURL.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
  if ( (unsigned int)Scaleform::GFx::Stream::ReadToBuffer(&pAltStream->Stream, v11->Data, v11->DataSize) == v11->DataSize )
  {
    v12 = Scaleform::GFx::LoadProcess::AllocTag<Scaleform::GFx::AS3::DoAbc>(p);
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v11);
    pObject = (Scaleform::RefCountVImpl *)v12->pAbc.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    v12->pAbc.pObject = v11;
    Scaleform::GFx::LoadProcess::AddInitAction(p, (Scaleform::GFx::ResourceId)&spriteId, v12);
    ++p->ASInitActionTagsNum;
  }
  else
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogError(
      &pAltStream->Stream,
      "Can't read completely ABCData at offset %d",
      (unsigned int)tagInfo->TagOffset);
  }
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v11);
  v14 = (void *)(v15.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                       (volatile int *)((v15.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                       -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v14);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::GFx::AS3::DoAbc::Execute(
        Scaleform::GFx::AS3::DoAbc *this,
        Scaleform::GFx::DisplayObjContainer *m)
{
  Scaleform::GFx::AS3::AbcDataBuffer *pObject; // rbx
  Scaleform::GFx::AS3::AvmDisplayObj *v4; // rsi
  Scaleform::GFx::AS3::MovieRoot *AS3Root; // rax
  Scaleform::Log *v6; // rbx
  Scaleform::GFx::MovieDefImpl *v7; // rdi
  Scaleform::Log *v8; // rbx
  const char *v9; // rax
  Scaleform::Ptr<Scaleform::Log> result; // [rsp+30h] [rbp+8h] BYREF

  pObject = this->pAbc.pObject;
  v4 = (Scaleform::GFx::AS3::AvmDisplayObj *)((char *)m + 4 * m->AvmObjOffset);
  AS3Root = (Scaleform::GFx::AS3::MovieRoot *)Scaleform::GFx::AS3::AvmDisplayObj::GetAS3Root(v4);
  if ( !Scaleform::GFx::AS3::MovieRoot::ExecuteAbc(AS3Root, pObject, m) )
  {
    v6 = Scaleform::GFx::StateBag::GetLog(&v4->pDispObj->pASRoot->pMovieImpl->Scaleform::GFx::StateBag, &result)->pObject;
    if ( result.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)result.pObject);
    if ( v6 )
    {
      v7 = m->GetResourceMovieDef(m);
      v8 = Scaleform::GFx::StateBag::GetLog(&v4->pDispObj->pASRoot->pMovieImpl->Scaleform::GFx::StateBag, &result)->pObject;
      v9 = v7->GetFileURL(v7);
      Scaleform::Log::LogError(v8, "Can't execute ABC from %s", v9);
      if ( result.pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)result.pObject);
    }
  }
}

void __fastcall Scaleform::GFx::ExecuteTag::ExecuteWithPriority(
        Scaleform::GFx::AS3::DoAbc *this,
        Scaleform::GFx::DisplayObjContainer *m,
        __int64 __formal)
{
  ((void (__fastcall *)(Scaleform::GFx::AS3::DoAbc *, Scaleform::GFx::DisplayObjContainer *, __int64))this->Execute)(
    this,
    m,
    __formal);
}

unsigned __int8 __fastcall Scaleform::GFx::AS3Support::GetAVMVersion(Scaleform::GFx::AS3Support *this)
{
  return 2;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

void __fastcall Scaleform::GFx::AS3::SymbolClassLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rdi
  int v4; // eax
  __int64 Pos; // r9
  unsigned int v6; // ebx
  __int64 v7; // r14
  int v8; // eax
  __int64 v9; // r8
  unsigned __int16 v10; // si
  Scaleform::GFx::MovieDataDef::LoadTaskData *v11; // rcx
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  void *v13; // rbx
  Scaleform::GFx::ResourceHandle phandle; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::StringDH v15; // [rsp+30h] [rbp-38h] BYREF
  Scaleform::GFx::ResourceId rid; // [rsp+70h] [rbp+8h] BYREF

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
    "  SymbolClassLoader: num = %d\n");
  if ( v6 )
  {
    v7 = v6;
    do
    {
      v8 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
      pAltStream->Stream.UnusedBits = 0;
      if ( v8 < 2 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
      v9 = pAltStream->Stream.Pos;
      v10 = pAltStream->Stream.pBuffer[v9] | (pAltStream->Stream.pBuffer[(unsigned int)(v9 + 1)] << 8);
      pAltStream->Stream.Pos = v9 + 2;
      Scaleform::StringDH::StringDH(&v15, p->pLoadData.pObject->pHeap);
      Scaleform::GFx::Stream::ReadString(&pAltStream->Stream, &v15);
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "       id = %d, symbol = '%s'\n");
      phandle.HType = RH_Pointer;
      phandle.pResource = 0i64;
      if ( !v10
        || (v11 = p->pLoadData.pObject,
            rid.Id = v10,
            (unsigned __int8)Scaleform::GFx::MovieDataDef::LoadTaskData::GetResourceHandle(v11, &phandle, &rid)) )
      {
        pObject = p->pLoadData.pObject;
        rid.Id = v10;
        Scaleform::GFx::MovieDataDef::LoadTaskData::ExportResource(pObject, &v15, &rid, &phandle);
      }
      else
      {
        Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
          &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
          "SymbolClassLoader can't find Resource with id = %d, name = '%s'",
          v10,
          (const char *)((v15.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
      }
      if ( phandle.HType == RH_Pointer && phandle.pResource )
        Scaleform::GFx::Resource::Release(phandle.pResource);
      v13 = (void *)(v15.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                           (volatile int *)((v15.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                           -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v13);
      --v7;
    }
    while ( v7 );
  }
}

