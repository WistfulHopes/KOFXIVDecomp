#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/display/as3_obj_display_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/display/as3_obj_display_displayobjectcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displaylist.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/as3_obj_namespace.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/ime/as3_imemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/ime/gfx_imemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/xml/xml_support.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asimemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/net/as3_obj_net_urlrequest.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_valuestack.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_avmdisplayobj.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/events/as3_obj_events_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_multiname.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_movieroot.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_as3support.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_gc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_value.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_textfield.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_textfielddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_avmdisplayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_avminteractiveobj.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/display/as3_obj_display_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/display/as3_obj_display_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/events/as3_obj_events_eventdispatcher.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/as3_obj_object.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_instance.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/text/text_editorkit.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_traits.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_flashui.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_abcdatabuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/gfx/as3_obj_gfx_imeeventex.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_object.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_slot.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_index.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/abc/as3_abc_type.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_stringmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_avmstage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_vm.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/as3_obj_function.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/abc/as3_abc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_avmsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/abc/as3_abc_constpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_bitset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_hashtable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/obj/as3_obj_classclass.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"

Scaleform::GFx::AS3::IMEManager::IMEManager(); // 0x1405A3F10
bool Scaleform::GFx::AS3::IMEManager::IsCandidateListLoaded(); // 0x1405A5D90
void Scaleform::GFx::AS3::IMEManager::OnOpenCandidateList(); // 0x1405A5FE0
bool Scaleform::GFx::AS3::IMEManager::IsTextFieldFocused(); // 0x1405A5F20
bool Scaleform::GFx::AS3::IMEManager::IsTextFieldFocused(Scaleform::GFx::InteractiveObject * ptextfield); // 0x1405A5E40
void Scaleform::GFx::AS3::IMEManager::SetIMEMoviePath(const char * pcandidateSwfPath); // 0x1405A60E0
class Scaleform::GFx::AS3::NotifyLoadInitCandidateList :
	Scaleform::GFx::AS3::NotifyLoadInitC
{
public:
	NotifyLoadInitCandidateList(Scaleform::GFx::AS3::NotifyLoadInitCandidateList &);
	NotifyLoadInitCandidateList(const Scaleform::GFx::AS3::NotifyLoadInitCandidateList &);
	NotifyLoadInitCandidateList(Scaleform::GFx::AS3::MovieRoot *, Scaleform::GFx::AS3::Instances::fl_display::Loader *, Scaleform::GFx::AS3::IMEManager *);
	virtual void OpenEventCallback();
	virtual void LoadEventCallback();
	virtual void InitEventCallback();
	virtual void ErrorEventCallback();
	Scaleform::GFx::AS3::MovieRoot * pMovieRoot; // 0x10
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader> pLoader; // 0x18
	Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> pASIMEManager; // 0x20
	virtual ~NotifyLoadInitCandidateList();
	Scaleform::GFx::AS3::NotifyLoadInitCandidateList & operator=(Scaleform::GFx::AS3::NotifyLoadInitCandidateList &);
	Scaleform::GFx::AS3::NotifyLoadInitCandidateList & operator=(const Scaleform::GFx::AS3::NotifyLoadInitCandidateList &);
};
Scaleform::GFx::AS3::NotifyLoadInitCandidateList::NotifyLoadInitCandidateList(Scaleform::GFx::AS3::MovieRoot * pmovieRoot, Scaleform::GFx::AS3::Instances::fl_display::Loader * loader, Scaleform::GFx::AS3::IMEManager * pASIMEManager); // 0x1405A3FB0
void Scaleform::GFx::AS3::NotifyLoadInitCandidateList::InitEventCallback(); // 0x1405A5670
class Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager>
{
protected:
	Scaleform::GFx::AS3::IMEManager * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::AS3::IMEManager>(const Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> &);
	Ptr<Scaleform::GFx::AS3::IMEManager>(Scaleform::GFx::AS3::IMEManager *);
	Ptr<Scaleform::GFx::AS3::IMEManager>(Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::AS3::IMEManager>(Scaleform::Pickable<Scaleform::GFx::AS3::IMEManager>);
	Ptr<Scaleform::GFx::AS3::IMEManager>(Scaleform::GFx::AS3::IMEManager &);
	Ptr<Scaleform::GFx::AS3::IMEManager>();
	~Ptr<Scaleform::GFx::AS3::IMEManager>();
	bool operator==(Scaleform::GFx::AS3::IMEManager *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> &);
	bool operator!=(Scaleform::GFx::AS3::IMEManager *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::IMEManager>);
	const Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> & operator=(Scaleform::GFx::AS3::IMEManager &);
	const Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> & operator=(Scaleform::GFx::AS3::IMEManager *);
	const Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> & operator=(const Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> & SetPtr(Scaleform::Pickable<Scaleform::GFx::AS3::IMEManager>);
	Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> & SetPtr(Scaleform::GFx::AS3::IMEManager &);
	Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> & SetPtr(Scaleform::GFx::AS3::IMEManager *);
	Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::AS3::IMEManager * & GetRawRef();
	Scaleform::GFx::AS3::IMEManager * GetPtr();
	Scaleform::GFx::AS3::IMEManager & operator*();
	Scaleform::GFx::AS3::IMEManager * operator->();
	Scaleform::GFx::AS3::IMEManager * operator class Scaleform::GFx::AS3::IMEManager *();
	Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> & Pick(Scaleform::GFx::AS3::IMEManager *);
	Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::IMEManager>);
	Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> & Pick(Scaleform::Ptr<Scaleform::GFx::AS3::IMEManager> &);
};
void Scaleform::GFx::AS3::IMEManager::ASRootMovieCreated(Scaleform::Ptr<Scaleform::GFx::Sprite> spr); // 0x1405A4310
bool Scaleform::GFx::AS3::IMEManager::AcquireCandidateList(); // 0x1405A4520
void Scaleform::GFx::AS3::IMEManager::DispatchEvent(const char * message, const char * messageType, const char * type); // 0x1405A4CA0
void Scaleform::GFx::AS3::IMEManager::BroadcastSetSupportedLanguages(const char * pString); // 0x1405A4C60
void Scaleform::GFx::AS3::IMEManager::BroadcastSetSupportedIMEs(const char * pString); // 0x1405A4C40
void Scaleform::GFx::AS3::IMEManager::BroadcastSetCurrentInputLanguage(const char * pString); // 0x1405A4C00
void Scaleform::GFx::AS3::IMEManager::BroadcastSetIMEName(const char * pString); // 0x1405A4C20
void Scaleform::GFx::AS3::IMEManager::BroadcastSwitchLanguage(const char * pString); // 0x1405A4C80
void Scaleform::GFx::AS3::IMEManager::BroadcastSetConversionStatus(const char * pString); // 0x1405A4BE0
void Scaleform::GFx::AS3::IMEManager::BroadcastRemoveStatusWindow(const char * pString); // 0x1405A4BC0
void Scaleform::GFx::AS3::IMEManager::BroadcastDisplayStatusWindow(const char * pString); // 0x1405A4BA0
Scaleform::GFx::Sprite * Scaleform::GFx::AS3::IMEManager::GetCandidateListSprite(); // 0x1405A4F50
Scaleform::GFx::InteractiveObject * Scaleform::GFx::AS3::IMEManager::HandleFocus(Scaleform::GFx::Movie * pmovie, Scaleform::GFx::InteractiveObject * poldFocusedItem, Scaleform::GFx::InteractiveObject * pnewFocusingItem, Scaleform::GFx::InteractiveObject * ptopMostItem); // 0x1405A5010void __fastcall Scaleform::GFx::ASIMEManager::ASIMEManager(Scaleform::GFx::ASIMEManager *this)
{
  this->__vftable = (Scaleform::GFx::ASIMEManager_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::GFx::ASIMEManager_vtbl *)&Scaleform::GFx::ASIMEManager::`vftable';
  this->RefCount = 1;
  Scaleform::String::String(&this->CandidateSwfPath);
  Scaleform::String::String(&this->CandidateSwfErrorMsg);
  this->pLangContext.pPrev = (Scaleform::GFx::Value *)-1i64;
  this->pLangContext.pObjectInterface = 0i64;
  this->pLangContext.Type = VT_None;
  this->pLangContext.pNext = (Scaleform::GFx::Value *)-1i64;
  this->pStatusContext.pObjectInterface = 0i64;
  this->pStatusContext.Type = VT_None;
  this->pStatusContext.pPrev = (Scaleform::GFx::Value *)-1i64;
  this->pStatusContext.pNext = (Scaleform::GFx::Value *)-1i64;
  this->CustomFuncCandList.pObject = 0i64;
  this->CustomFuncLanguageBar.pObject = 0i64;
  this->pMovie = 0i64;
  this->pTextField = 0i64;
  this->pLangContext2 = 0i64;
  this->pStatusContext2 = 0i64;
}

void __fastcall Scaleform::GFx::AS3::IMEManager::IMEManager(Scaleform::GFx::AS3::IMEManager *this)
{
  Scaleform::GFx::ASIMEManager::ASIMEManager(this);
  this->__vftable = (Scaleform::GFx::AS3::IMEManager_vtbl *)&Scaleform::GFx::AS3::IMEManager::`vftable';
  this->CandListVal.pPrev = (Scaleform::GFx::Value *)-1i64;
  this->CandListVal.pNext = (Scaleform::GFx::Value *)-1i64;
  this->CandListVal.pObjectInterface = 0i64;
  this->CandListVal.Type = VT_None;
  this->pCustomFunc.pObject = 0i64;
  this->UnsupportedIMEWindowsFlag = 3;
  this->pTextField = 0i64;
  this->pMovie = 0i64;
  this->CandidateListState = 0;
  if ( (this->CandListVal.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      this->CandListVal.pObjectInterface,
      &this->CandListVal,
      this->CandListVal.mValue.pStringManaged);
    this->CandListVal.pObjectInterface = 0i64;
  }
  this->CandListVal.Type = VT_Int;
}

void __fastcall Scaleform::GFx::AS3::NotifyLoadInitCandidateList::NotifyLoadInitCandidateList(
        Scaleform::GFx::AS3::NotifyLoadInitCandidateList *this,
        Scaleform::GFx::AS3::MovieRoot *pmovieRoot,
        Scaleform::GFx::AS3::Instances::fl_display::Loader *loader,
        Scaleform::GFx::AS3::IMEManager *pASIMEManager)
{
  this->pMovieRoot = pmovieRoot;
  this->__vftable = (Scaleform::GFx::AS3::NotifyLoadInitCandidateList_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::GFx::AS3::NotifyLoadInitCandidateList_vtbl *)&Scaleform::GFx::AS3::NotifyLoadInitCandidateList::`vftable';
  this->RefCount = 1;
  this->pLoader.pObject = loader;
  if ( loader )
    loader->RefCount = (loader->RefCount + 1) & 0x8FBFFFFF;
  if ( pASIMEManager )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pASIMEManager);
    this->pASIMEManager.pObject = pASIMEManager;
  }
  else
  {
    this->pASIMEManager.pObject = 0i64;
  }
}

void __fastcall Scaleform::GFx::ASIMEManager::~ASIMEManager(Scaleform::GFx::ASIMEManager *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v3; // rcx
  volatile int *v4; // rbx
  volatile int *v5; // rbx

  this->__vftable = (Scaleform::GFx::ASIMEManager_vtbl *)&Scaleform::GFx::ASIMEManager::`vftable';
  pObject = (Scaleform::RefCountVImpl *)this->CustomFuncLanguageBar.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v3 = (Scaleform::RefCountVImpl *)this->CustomFuncCandList.pObject;
  if ( v3 )
    Scaleform::RefCountImpl::Release(v3);
  if ( (this->pStatusContext.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      this->pStatusContext.pObjectInterface,
      &this->pStatusContext,
      this->pStatusContext.mValue.pStringManaged);
    this->pStatusContext.pObjectInterface = 0i64;
  }
  this->pStatusContext.Type = VT_None;
  if ( (this->pLangContext.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      this->pLangContext.pObjectInterface,
      &this->pLangContext,
      this->pLangContext.mValue.pStringManaged);
    this->pLangContext.pObjectInterface = 0i64;
  }
  this->pLangContext.Type = VT_None;
  v4 = (volatile int *)(this->CandidateSwfErrorMsg.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
  v5 = (volatile int *)(this->CandidateSwfPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v5 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v5);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::AS3::IMEManager::~IMEManager(Scaleform::GFx::AS3::IMEManager *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  this->__vftable = (Scaleform::GFx::AS3::IMEManager_vtbl *)&Scaleform::GFx::AS3::IMEManager::`vftable';
  pObject = (Scaleform::RefCountVImpl *)this->pCustomFunc.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  if ( (this->CandListVal.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      this->CandListVal.pObjectInterface,
      &this->CandListVal,
      this->CandListVal.mValue.pStringManaged);
    this->CandListVal.pObjectInterface = 0i64;
  }
  this->CandListVal.Type = VT_None;
  Scaleform::GFx::ASIMEManager::~ASIMEManager(this);
}

void __fastcall Scaleform::GFx::ASIMEManager::ASRootMovieCreated(
        Scaleform::GFx::ASIMEManager *this,
        Scaleform::Ptr<Scaleform::GFx::Sprite> spr)
{
  if ( spr.pObject->__vftable )
    Scaleform::RefCountNTSImpl::Release((Scaleform::RefCountNTSImpl *)spr.pObject->__vftable);
}

void __fastcall Scaleform::GFx::AS3::IMEManager::ASRootMovieCreated(
        Scaleform::GFx::AS3::IMEManager *this,
        Scaleform::Ptr<Scaleform::GFx::Sprite> spr)
{
  Scaleform::GFx::Movie *pMovie; // rcx
  Scaleform::GFx::ASIMEManager::IMEFuncHandler *pObject; // r8
  Scaleform::GFx::AS3::MovieRoot *v6; // r14
  Scaleform::GFx::AS3::VM *v7; // rdi
  char *v8; // rbx
  Scaleform::GFx::ASStringNode *pNode; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  Scaleform::GFx::AS3::GASRefCountBase *v13; // rcx
  unsigned int RefCount; // eax
  Scaleform::GFx::AS3::Value pdestVal; // [rsp+28h] [rbp-59h] BYREF
  Scaleform::GFx::Value pvalue; // [rsp+48h] [rbp-39h] BYREF
  Scaleform::GFx::AS3::Value name; // [rsp+78h] [rbp-9h] BYREF
  Scaleform::GFx::AS3::Multiname v18; // [rsp+98h] [rbp+17h] BYREF
  Scaleform::GFx::ASString v; // [rsp+E8h] [rbp+67h] BYREF

  pMovie = this->pMovie;
  if ( pMovie )
  {
    pObject = this->CustomFuncLanguageBar.pObject;
    pvalue.pObjectInterface = 0i64;
    pvalue.Type = VT_None;
    pdestVal.Flags = 0;
    pdestVal.Bonus.pWeakProxy = 0i64;
    pvalue.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    v6 = (Scaleform::GFx::AS3::MovieRoot *)pMovie->pASMovieRoot.pObject;
    v7 = v6->pAVM.pObject;
    Scaleform::GFx::Movie::CreateFunction(pMovie, &pvalue, pObject, 0i64);
    Scaleform::GFx::AS3::MovieRoot::GFxValue2ASValue(v6, &pvalue, &pdestVal);
    v8 = (char *)spr.pObject->__vftable + 4 * BYTE5(spr.pObject->UpdateTransform3D);
    if ( v8 )
    {
      v.pNode = Scaleform::GFx::ASStringManager::CreateStringNode(v6->BuiltinsMgr.pStringManager, "SendLangBarMessage");
      ++v.pNode->RefCount;
      Scaleform::GFx::AS3::Value::Value(&name, &v);
      Scaleform::GFx::AS3::Multiname::Multiname(&v18, v6->pAVM.pObject->PublicNamespace.pObject, &name);
      if ( (name.Flags & 0x1F) > 9 )
      {
        if ( (name.Flags & 0x200) != 0 )
          Scaleform::GFx::AS3::Value::ReleaseWeakRef(&name);
        else
          Scaleform::GFx::AS3::Value::ReleaseInternal(&name);
      }
      pNode = v.pNode;
      if ( v.pNode->RefCount-- == 1 )
        Scaleform::GFx::ASStringNode::ReleaseNode(pNode);
      v11 = *((_QWORD *)v8 + 2);
      v12 = v11;
      if ( !v11 )
        v12 = *((_QWORD *)v8 + 1);
      if ( (v12 & 1) != 0 )
        --v12;
      if ( v12 )
      {
        if ( !v11 )
          v11 = *((_QWORD *)v8 + 1);
        if ( (v11 & 1) != 0 )
          --v11;
        if ( !*(_BYTE *)(*(__int64 (__fastcall **)(__int64, Scaleform::GFx::ASString *, Scaleform::GFx::AS3::Multiname *, Scaleform::GFx::AS3::Value *))(*(_QWORD *)v11 + 32i64))(
                          v11,
                          &v,
                          &v18,
                          &pdestVal)
          && v7->HandleException )
        {
          Scaleform::GFx::AS3::VM::OutputAndIgnoreException(v7);
        }
      }
      if ( (v18.Name.Flags & 0x1F) > 9 )
      {
        if ( (v18.Name.Flags & 0x200) != 0 )
          Scaleform::GFx::AS3::Value::ReleaseWeakRef(&v18.Name);
        else
          Scaleform::GFx::AS3::Value::ReleaseInternal(&v18.Name);
      }
      v13 = v18.Obj.pObject;
      if ( v18.Obj.pObject )
      {
        if ( ((__int64)v18.Obj.pObject & 1) == 0 )
        {
          RefCount = v18.Obj.pObject->RefCount;
          if ( (RefCount & 0x3FFFFF) != 0 )
          {
            v18.Obj.pObject->RefCount = RefCount - 1;
            Scaleform::GFx::AS3::RefCountBaseGC<328>::ReleaseInternal(v13);
          }
        }
      }
    }
    if ( (pdestVal.Flags & 0x1F) > 9 )
    {
      if ( (pdestVal.Flags & 0x200) != 0 )
        Scaleform::GFx::AS3::Value::ReleaseWeakRef(&pdestVal);
      else
        Scaleform::GFx::AS3::Value::ReleaseInternal(&pdestVal);
    }
    if ( (pvalue.Type & 0x40) != 0 )
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
        pvalue.pObjectInterface,
        &pvalue,
        pvalue.mValue.pStringManaged);
  }
  if ( spr.pObject->__vftable )
    Scaleform::RefCountNTSImpl::Release((Scaleform::RefCountNTSImpl *)spr.pObject->__vftable);
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

Scaleform::GFx::Movie *__fastcall Scaleform::GFx::AS3::IMEManager::AcquireCandidateList(
        Scaleform::GFx::AS3::IMEManager *this)
{
  Scaleform::GFx::Movie *pMovie; // rax
  Scaleform::GFx::AS3::MovieRoot *pObject; // r13
  Scaleform::RefCountVImpl *v4; // r14
  Scaleform::GFx::IMEManagerBase *pimeManager; // rcx
  Scaleform::RefCountVImpl *v6; // rdi
  Scaleform::RefCountVImpl *v7; // rbx
  Scaleform::RefCountVImpl *v8; // rax
  Scaleform::GFx::MovieDef *v9; // rax
  const char *v10; // rax
  __int64 v11; // rax
  void *v12; // rsi
  volatile int *v13; // rcx
  Scaleform::GFx::URLBuilder::LocationInfo *p_loc; // rcx
  Scaleform::GFx::URLBuilder::LocationInfo *v15; // rcx
  const Scaleform::String *v16; // rax
  const Scaleform::String *v17; // rsi
  void *v18; // rsi
  __int64 v19; // rax
  void *v20; // rsi
  volatile int *v21; // rcx
  void *v22; // rsi
  unsigned __int8 v23; // bl
  void *v24; // rsi
  Scaleform::GFx::AS3::VM *v25; // rbx
  int v26; // eax
  bool v27; // zf
  Scaleform::GFx::AS3::VMAppDomain *v28; // r8
  int v29; // eax
  bool v30; // zf
  Scaleform::GFx::AS3::Instances::fl_display::Loader *VStr; // rdi
  Scaleform::GFx::AS3::Instances::fl_net::URLRequest *v32; // rbx
  Scaleform::GFx::AS3::LoadQueueEntry *v33; // rax
  Scaleform::GFx::AS3::LoadQueueEntry *v34; // rax
  Scaleform::GFx::AS3::LoadQueueEntry *v35; // rbx
  Scaleform::GFx::AS3::NotifyLoadInitCandidateList *v36; // rax
  Scaleform::RefCountVImpl *v37; // rax
  Scaleform::GFx::ASStringNode *pNode; // rcx
  Scaleform::String ppath; // [rsp+30h] [rbp-D0h] BYREF
  Scaleform::String v40; // [rsp+38h] [rbp-C8h] BYREF
  Scaleform::String v41; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int argc; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v43; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::GFx::ASString value; // [rsp+58h] [rbp-A8h] BYREF
  Scaleform::GFx::AS3::Value v45; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::GFx::AS3::Value result; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::GFx::URLBuilder::LocationInfo loc; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::String v48; // [rsp+B8h] [rbp-48h] BYREF
  Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> pinterface; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::GFx::URLBuilder::LocationInfo v50; // [rsp+C8h] [rbp-38h] BYREF
  Scaleform::GFx::AS3::Value v51; // [rsp+E0h] [rbp-20h] BYREF
  char pbuff[272]; // [rsp+100h] [rbp+0h] BYREF
  wchar_t Buffer[264]; // [rsp+210h] [rbp+110h] BYREF

  pMovie = this->pMovie;
  if ( !pMovie )
    return pMovie;
  pObject = (Scaleform::GFx::AS3::MovieRoot *)pMovie->pASMovieRoot.pObject;
  v4 = 0i64;
  result.Flags = 0;
  result.Bonus.pWeakProxy = 0i64;
  v45.Flags = 0;
  v45.Bonus.pWeakProxy = 0i64;
  v51.Flags = 0;
  v51.Bonus.pWeakProxy = 0i64;
  if ( this->CandidateListState )
    goto LABEL_69;
  pimeManager = this->pimeManager;
  if ( pimeManager && pimeManager->bCheckIMEExists )
  {
    v6 = (Scaleform::RefCountVImpl *)pimeManager->pLoader->GetStateAddRef(
                                       pimeManager->pLoader,
                                       State_OrigScale9Parent|State_MaskNode);
    v7 = (Scaleform::RefCountVImpl *)this->pimeManager->pLoader->GetStateAddRef(this->pimeManager->pLoader, 13i64);
    if ( !v7 )
    {
      v8 = (Scaleform::RefCountVImpl *)Scaleform::Memory::pGlobalHeap->Alloc(
                                         Scaleform::Memory::pGlobalHeap,
                                         24i64,
                                         0i64);
      v7 = v8;
      if ( v8 )
      {
        LODWORD(v8[1].__vftable) = 13;
        v8->__vftable = (Scaleform::RefCountVImpl_vtbl *)&Scaleform::RefCountImplCore::`vftable';
        v8->__vftable = (Scaleform::RefCountVImpl_vtbl *)&Scaleform::GFx::URLBuilder::`vftable';
        v8->RefCount = 1;
      }
      else
      {
        v7 = 0i64;
      }
    }
    if ( v6 )
    {
      Scaleform::String::String(&ppath);
      v9 = this->pMovie->GetMovieDef(this->pMovie);
      v10 = v9->GetFileURL(v9);
      Scaleform::String::operator=(&ppath, v10);
      Scaleform::GFx::URLBuilder::ExtractFilePath(&ppath);
      if ( Scaleform::GFx::URLBuilder::IsPathAbsolute((const char *)((ppath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12)) )
      {
        loc.Use = File_Regular;
        Scaleform::String::String(&loc.FileName, &this->CandidateSwfPath);
        Scaleform::String::String(&loc.ParentPath, &ppath);
        Scaleform::String::String(&v40);
        if ( v7 )
          ((void (__fastcall *)(Scaleform::RefCountVImpl *, Scaleform::String *, Scaleform::GFx::URLBuilder::LocationInfo *))v7->AddRef)(
            v7,
            &v40,
            &loc);
        else
          Scaleform::GFx::URLBuilder::DefaultBuildURL(&v40, &loc);
        v11 = ((__int64 (__fastcall *)(Scaleform::RefCountVImpl *, unsigned __int64))v6->Release)(
                v6,
                (v40.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
        v12 = (void *)(v40.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
        v13 = (volatile int *)((v40.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8);
        if ( v11 == -1 )
        {
          if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v13, -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v12);
          p_loc = &loc;
LABEL_29:
          Scaleform::GFx::URLBuilder::LocationInfo::~LocationInfo(p_loc);
          v22 = (void *)(ppath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
          if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                               (volatile int *)((ppath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                               -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v22);
          if ( v7 )
            Scaleform::RefCountImpl::Release(v7);
          Scaleform::RefCountImpl::Release(v6);
          goto LABEL_34;
        }
        if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v13, -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v12);
        v15 = &loc;
      }
      else
      {
        GetCurrentDirectoryW(0x104u, Buffer);
        Scaleform::UTF8Util::EncodeStringSafe(pbuff, 0x104ui64, Buffer, -1i64);
        Scaleform::String::String(&v48, pbuff);
        v50.Use = File_Regular;
        v17 = v16;
        Scaleform::String::String(&v50.FileName, &this->CandidateSwfPath);
        Scaleform::String::String(&v50.ParentPath, v17);
        v18 = (void *)(v48.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
        if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                             (volatile int *)((v48.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                             -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v18);
        Scaleform::String::String(&v41);
        if ( v7 )
          ((void (__fastcall *)(Scaleform::RefCountVImpl *, Scaleform::String *, Scaleform::GFx::URLBuilder::LocationInfo *))v7->AddRef)(
            v7,
            &v41,
            &v50);
        v19 = ((__int64 (__fastcall *)(Scaleform::RefCountVImpl *, unsigned __int64))v6->Release)(
                v6,
                (v41.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
        v20 = (void *)(v41.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
        v21 = (volatile int *)((v41.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8);
        if ( v19 == -1 )
        {
          if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v21, -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v20);
          p_loc = &v50;
          goto LABEL_29;
        }
        if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v21, -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v20);
        v15 = &v50;
      }
      Scaleform::GFx::URLBuilder::LocationInfo::~LocationInfo(v15);
      v24 = (void *)(ppath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                           (volatile int *)((ppath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                           -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v24);
    }
    if ( v7 )
      Scaleform::RefCountImpl::Release(v7);
    if ( v6 )
      Scaleform::RefCountImpl::Release(v6);
  }
  this->CandidateListState = 1;
  v25 = pObject->pAVM.pObject;
  argc = 0;
  Scaleform::GFx::AS3::VM::Construct(v25, "flash.display.Loader", v25->CurrentDomain.pObject, &result, &argc, 0i64);
  if ( v25->HandleException )
    goto LABEL_34;
  v26 = result.Flags & 0x1F;
  if ( (result.Flags & 0x1F) == 0 )
    goto LABEL_34;
  if ( v26 == 12 )
  {
    v27 = result.value.VS._1.VStr == 0i64;
    goto LABEL_50;
  }
  if ( v26 == 10 )
  {
    v27 = result.value.VS._1.VStr == &result.value.VS._1.VStr->pManager->NullStringNode;
LABEL_50:
    if ( v27 )
      goto LABEL_34;
  }
  v28 = v25->CurrentDomain.pObject;
  v43 = 0;
  Scaleform::GFx::AS3::VM::Construct(v25, "flash.net.URLRequest", v28, &v45, &v43, 0i64);
  if ( !v25->HandleException )
  {
    v29 = v45.Flags & 0x1F;
    if ( (v45.Flags & 0x1F) != 0 )
    {
      if ( v29 == 12 )
      {
        v30 = v45.value.VS._1.VStr == 0i64;
      }
      else
      {
        if ( v29 != 10 )
        {
LABEL_58:
          VStr = (Scaleform::GFx::AS3::Instances::fl_display::Loader *)result.value.VS._1.VStr;
          (*((void (__fastcall **)(Scaleform::GFx::AS3::Value::V1U, _QWORD))result.value.VS._1.VStr->pData + 14))(
            result.value.VS._1,
            0i64);
          v32 = (Scaleform::GFx::AS3::Instances::fl_net::URLRequest *)v45.value.VS._1.VStr;
          value.pNode = Scaleform::GFx::ASStringManager::CreateStringNode(
                          pObject->BuiltinsMgr.pStringManager,
                          (const char *)((this->CandidateSwfPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                          *(_QWORD *)(this->CandidateSwfPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64);
          ++value.pNode->RefCount;
          Scaleform::GFx::AS3::Instances::fl_net::URLRequest::urlSet(v32, &v51, &value);
          v33 = (Scaleform::GFx::AS3::LoadQueueEntry *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))pObject->pMovieImpl->pHeap->Alloc)(
                                                         pObject->pMovieImpl->pHeap,
                                                         96i64);
          if ( v33 )
          {
            Scaleform::GFx::AS3::LoadQueueEntry::LoadQueueEntry(v33, v32, VStr, LM_None, 0);
            v35 = v34;
          }
          else
          {
            v35 = 0i64;
          }
          v36 = (Scaleform::GFx::AS3::NotifyLoadInitCandidateList *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                                      Scaleform::Memory::pGlobalHeap,
                                                                      40i64);
          if ( v36 )
          {
            Scaleform::GFx::AS3::NotifyLoadInitCandidateList::NotifyLoadInitCandidateList(v36, pObject, VStr, this);
            v4 = v37;
            if ( v37 )
              Scaleform::Render::RenderBuffer::AddRef(v37);
          }
          pinterface.pObject = (Scaleform::GFx::AS3::NotifyLoadInitC *)v4;
          Scaleform::GFx::AS3::LoadQueueEntry::SetNotifyLoadInitCInterface(
            v35,
            (Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC>)&pinterface);
          Scaleform::GFx::MovieImpl::AddLoadQueueEntry(pObject->pMovieImpl, v35);
          if ( v4 )
            Scaleform::RefCountImpl::Release(v4);
          pNode = value.pNode;
          v27 = value.pNode->RefCount-- == 1;
          if ( v27 )
            Scaleform::GFx::ASStringNode::ReleaseNode(pNode);
          LOWORD(v4) = v51.Flags;
LABEL_69:
          v23 = 1;
          goto LABEL_70;
        }
        v30 = v45.value.VS._1.VStr == &v45.value.VS._1.VStr->pManager->NullStringNode;
      }
      if ( !v30 )
        goto LABEL_58;
    }
  }
LABEL_34:
  LOWORD(v4) = v51.Flags;
  v23 = 0;
LABEL_70:
  if ( ((unsigned __int8)v4 & 0x1Fu) > 9 )
  {
    if ( ((unsigned __int16)v4 & 0x200) != 0 )
      Scaleform::GFx::AS3::Value::ReleaseWeakRef(&v51);
    else
      Scaleform::GFx::AS3::Value::ReleaseInternal(&v51);
  }
  if ( (v45.Flags & 0x1F) > 9 )
  {
    if ( (v45.Flags & 0x200) != 0 )
      Scaleform::GFx::AS3::Value::ReleaseWeakRef(&v45);
    else
      Scaleform::GFx::AS3::Value::ReleaseInternal(&v45);
  }
  if ( (result.Flags & 0x1F) > 9 )
  {
    if ( (result.Flags & 0x200) != 0 )
      Scaleform::GFx::AS3::Value::ReleaseWeakRef(&result);
    else
      Scaleform::GFx::AS3::Value::ReleaseInternal(&result);
  }
  return (Scaleform::GFx::Movie *)v23;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::GFx::AS3::IMEManager::BroadcastDisplayStatusWindow(
        Scaleform::GFx::AS3::IMEManager *this,
        const char *pString)
{
  Scaleform::GFx::AS3::IMEManager::DispatchEvent(this, pString, "DisplayStatusWindow", "StatusWindow");
}

void __fastcall Scaleform::GFx::AS3::IMEManager::BroadcastRemoveStatusWindow(
        Scaleform::GFx::AS3::IMEManager *this,
        const char *pString)
{
  Scaleform::GFx::AS3::IMEManager::DispatchEvent(this, pString, "RemoveStatusWindow", "StatusWindow");
}

void __fastcall Scaleform::GFx::AS3::IMEManager::BroadcastSetConversionStatus(
        Scaleform::GFx::AS3::IMEManager *this,
        const char *pString)
{
  Scaleform::GFx::AS3::IMEManager::DispatchEvent(this, pString, "SetConversionStatus", "StatusWindow");
}

void __fastcall Scaleform::GFx::AS3::IMEManager::BroadcastSetCurrentInputLanguage(
        Scaleform::GFx::AS3::IMEManager *this,
        const char *pString)
{
  Scaleform::GFx::AS3::IMEManager::DispatchEvent(this, pString, "SetCurrentInputLanguage", "LangBar");
}

void __fastcall Scaleform::GFx::AS3::IMEManager::BroadcastSetIMEName(
        Scaleform::GFx::AS3::IMEManager *this,
        const char *pString)
{
  Scaleform::GFx::AS3::IMEManager::DispatchEvent(this, pString, "SetIMEName", "LangBar");
}

void __fastcall Scaleform::GFx::AS3::IMEManager::BroadcastSetSupportedIMEs(
        Scaleform::GFx::AS3::IMEManager *this,
        const char *pString)
{
  Scaleform::GFx::AS3::IMEManager::DispatchEvent(this, pString, "SetSupportedIMENames", "LangBar");
}

void __fastcall Scaleform::GFx::AS3::IMEManager::BroadcastSetSupportedLanguages(
        Scaleform::GFx::AS3::IMEManager *this,
        const char *pString)
{
  Scaleform::GFx::AS3::IMEManager::DispatchEvent(this, pString, "SetSupportedLanguages", "LangBar");
}

void __fastcall Scaleform::GFx::AS3::IMEManager::BroadcastSwitchLanguage(
        Scaleform::GFx::AS3::IMEManager *this,
        const char *pString)
{
  Scaleform::GFx::AS3::IMEManager::DispatchEvent(this, pString, "SetCurrentLanguage", "StatusWindow");
}

void __fastcall Scaleform::GFx::AS3::IMEManager::DispatchEvent(
        Scaleform::GFx::AS3::IMEManager *this,
        const char *message,
        const char *messageType,
        const char *type)
{
  Scaleform::GFx::Movie *pMovie; // rax
  Scaleform::GFx::DisplayObject *pLangContext2; // rdx
  __int16 v9; // di
  char *v10; // rsi
  Scaleform::GFx::ASMovieRootBase *pObject; // r14
  __int64 v12; // rcx
  char v13; // al
  Scaleform::GFx::DisplayObject *pStatusContext2; // rbx
  __int64 v15; // rbx
  Scaleform::GFx::AS3::ASVM *v16; // rdi
  Scaleform::GFx::AS3::VMAppDomain *v17; // r8
  Scaleform::GFx::AS3::Class *Class; // rax
  __int64 v19; // rsi
  Scaleform::GFx::AS3::Value *v20; // rbx
  unsigned int Flags; // ecx
  Scaleform::GFx::AS3::Object *v22; // rcx
  unsigned int RefCount; // eax
  Scaleform::GFx::ASStringNode *pNode; // rcx
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> pobj; // [rsp+38h] [rbp-D0h] BYREF
  Scaleform::GFx::ASString typea; // [rsp+40h] [rbp-C8h] BYREF
  Scaleform::StringDataPtr gname; // [rsp+48h] [rbp-C0h] BYREF
  Scaleform::GFx::AS3::Value v29; // [rsp+58h] [rbp-B0h] BYREF
  Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Value,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Value,2>,Scaleform::ArrayDefaultPolicy> v30; // [rsp+78h] [rbp-90h] BYREF
  Scaleform::GFx::AS3::Value argv; // [rsp+98h] [rbp-70h] BYREF
  int v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  char v34; // [rsp+C8h] [rbp-40h]
  int v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  char v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F8h] [rbp-10h] BYREF

  pMovie = this->pMovie;
  if ( pMovie )
  {
    pLangContext2 = this->pLangContext2;
    v9 = 0;
    v10 = 0i64;
    pObject = pMovie->pASMovieRoot.pObject;
    memset(&v30, 0, sizeof(v30));
    v29.Flags = 0;
    v29.Bonus.pWeakProxy = 0i64;
    if ( pLangContext2 )
    {
      v12 = 0i64;
      while ( 1 )
      {
        v13 = type[v12++];
        if ( v13 != aLangbar[v12 - 1] )
          break;
        if ( v12 == 8 )
        {
          v10 = (char *)pLangContext2 + 4 * pLangContext2->AvmObjOffset;
          goto LABEL_10;
        }
      }
    }
    pStatusContext2 = this->pStatusContext2;
    if ( pStatusContext2 && !strcmp(type, "StatusWindow") )
      v10 = (char *)pStatusContext2 + 4 * pStatusContext2->AvmObjOffset;
LABEL_10:
    if ( pObject && v10 )
    {
      v15 = *((_QWORD *)v10 + 2);
      if ( !v15 )
        v15 = *((_QWORD *)v10 + 1);
      if ( (v15 & 1) != 0 )
        --v15;
      typea.pNode = Scaleform::GFx::ASStringManager::CreateStringNode(
                      (Scaleform::GFx::ASStringManager *)pObject[22].pMovieImpl,
                      messageType);
      ++typea.pNode->RefCount;
      if ( v15
        && Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::HasEventHandler(
             (Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher *)v15,
             &typea,
             0) )
      {
        pobj.pObject = 0i64;
        Scaleform::GFx::AS3::Value::Value(&argv, &typea);
        v33 = 0i64;
        v36 = 0i64;
        v16 = (Scaleform::GFx::AS3::ASVM *)pObject[2].__vftable;
        v32 = 1;
        v34 = 1;
        v35 = 1;
        v37 = 1;
        v17 = v16->CurrentDomain.pObject;
        gname.pStr = "scaleform.gfx.IMEEventEx";
        gname.Size = 24i64;
        Class = Scaleform::GFx::AS3::VM::GetClass(v16, &gname, v17);
        v19 = 3i64;
        Scaleform::GFx::AS3::ASVM::_constructInstance(v16, &pobj, Class, 3u, &argv);
        Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_geom::Vector3D>::SetPtr(
          (Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest> *)&pobj.pObject[1].16,
          (Scaleform::GFx::AS3::Instances::fl_net::URLRequest *)v15);
        Scaleform::GFx::ASString::operator=((Scaleform::GFx::ASString *)&pobj.pObject[1].RefCount, message);
        Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Dispatch(
          (Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher *)v15,
          (Scaleform::GFx::AS3::Instances::fl_events::Event *)pobj.pObject,
          *(Scaleform::GFx::DisplayObject **)(v15 + 136));
        v20 = (Scaleform::GFx::AS3::Value *)&v38;
        do
        {
          Flags = v20[-1].Flags;
          --v20;
          --v19;
          if ( (Flags & 0x1F) > 9 )
          {
            if ( (Flags & 0x200) != 0 )
              Scaleform::GFx::AS3::Value::ReleaseWeakRef(v20);
            else
              Scaleform::GFx::AS3::Value::ReleaseInternal(v20);
          }
        }
        while ( v19 );
        v22 = pobj.pObject;
        if ( pobj.pObject )
        {
          if ( ((__int64)pobj.pObject & 1) == 0 )
          {
            RefCount = pobj.pObject->RefCount;
            if ( (RefCount & 0x3FFFFF) != 0 )
            {
              pobj.pObject->RefCount = RefCount - 1;
              Scaleform::GFx::AS3::RefCountBaseGC<328>::ReleaseInternal(v22);
            }
          }
        }
      }
      pNode = typea.pNode;
      if ( typea.pNode->RefCount-- == 1 )
        Scaleform::GFx::ASStringNode::ReleaseNode(pNode);
      v9 = v29.Flags;
    }
    if ( (v9 & 0x1Fu) > 9 )
    {
      if ( (v9 & 0x200) != 0 )
        Scaleform::GFx::AS3::Value::ReleaseWeakRef(&v29);
      else
        Scaleform::GFx::AS3::Value::ReleaseInternal(&v29);
    }
    Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Value,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Value,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::GFx::AS3::Value,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Value,2>,Scaleform::ArrayDefaultPolicy>(&v30);
  }
}

Scaleform::GFx::Sprite *__fastcall Scaleform::GFx::AS3::IMEManager::GetCandidateListSprite(
        Scaleform::GFx::AS3::IMEManager *this)
{
  Scaleform::GFx::Value *p_CandListVal; // rdx
  __int64 v3; // rbx
  Scaleform::GFx::AS3::MovieRoot *pObject; // rcx
  unsigned int v5; // er8
  __int64 v6; // r9
  Scaleform::GFx::AS3::Value pdestVal; // [rsp+20h] [rbp-28h] BYREF

  if ( (this->CandListVal.Type & 0x8F) == 1 )
    return 0i64;
  p_CandListVal = &this->CandListVal;
  v3 = 0i64;
  pObject = (Scaleform::GFx::AS3::MovieRoot *)this->pMovie->pASMovieRoot.pObject;
  pdestVal.Flags = 0;
  pdestVal.Bonus.pWeakProxy = 0i64;
  Scaleform::GFx::AS3::MovieRoot::GFxValue2ASValue(pObject, p_CandListVal, &pdestVal);
  v5 = pdestVal.Flags & 0x1F;
  if ( v5 == 12 )
  {
    v6 = *(_QWORD *)&pdestVal.value.VS._1.VStr->LastIndexAccessed;
    if ( (unsigned int)(*(_DWORD *)(v6 + 120) - 24) < 0xC && (*(_BYTE *)(v6 + 112) & 0x20) == 0 )
      v3 = *(_QWORD *)&pdestVal.value.VS._1.VStr[2].RefCount;
  }
  if ( v5 > 9 )
  {
    if ( (pdestVal.Flags & 0x200) != 0 )
    {
      Scaleform::GFx::AS3::Value::ReleaseWeakRef(&pdestVal);
      return (Scaleform::GFx::Sprite *)v3;
    }
    Scaleform::GFx::AS3::Value::ReleaseInternal(&pdestVal);
  }
  return (Scaleform::GFx::Sprite *)v3;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

Scaleform::GFx::InteractiveObject *__fastcall Scaleform::GFx::AS3::IMEManager::HandleFocus(
        Scaleform::GFx::AS3::IMEManager *this,
        Scaleform::GFx::Movie *pmovie,
        Scaleform::GFx::InteractiveObject *poldFocusedItem,
        Scaleform::GFx::InteractiveObject *pnewFocusingItem,
        Scaleform::GFx::InteractiveObject *ptopMostItem)
{
  unsigned int v5; // edi
  Scaleform::GFx::InteractiveObject *v7; // rsi
  Scaleform::GFx::IMEManagerBase *pimeManager; // r13
  Scaleform::GFx::AS3::IMEManager *v9; // rbx
  Scaleform::GFx::InteractiveObject *pParent; // r15
  Scaleform::GFx::InteractiveObject *v12; // rcx
  __int64 AvmObjOffset; // rax
  __int64 *pObject; // rbx
  Scaleform::GFx::AS3::AvmDisplayObj *v15; // r14
  __int16 Flags; // cx
  Scaleform::GFx::AS3::MovieRoot *AS3Root; // rax
  int v18; // edi
  Scaleform::GFx::AS3::ASVM *AVM; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  Scaleform::GFx::AS3::MovieRoot *v22; // rax
  Scaleform::GFx::AS3::ASVM *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  Scaleform::GFx::AS3::MovieRoot *v26; // rax
  Scaleform::GFx::AS3::ASVM *v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  char v30; // r14
  unsigned int v31; // ebx
  Scaleform::GFx::AS3::GASRefCountBase *v32; // rcx
  unsigned int RefCount; // eax
  Scaleform::GFx::ASStringNode *pNode; // rcx
  bool v35; // zf
  unsigned int v36; // esi
  Scaleform::GFx::AS3::GASRefCountBase *v37; // rcx
  unsigned int v38; // eax
  Scaleform::GFx::ASStringNode *v39; // rcx
  Scaleform::GFx::AS3::GASRefCountBase *v40; // rcx
  unsigned int v41; // eax
  Scaleform::GFx::ASStringNode *v42; // rcx
  void *v43; // rbx
  void *v44; // rbx
  Scaleform::GFx::Sprite *CandidateListSprite; // rax
  bool v46; // dl
  char v47; // [rsp+20h] [rbp-E0h] BYREF
  char v48; // [rsp+21h] [rbp-DFh] BYREF
  char v49[6]; // [rsp+22h] [rbp-DEh] BYREF
  Scaleform::String ppath; // [rsp+28h] [rbp-D8h] BYREF
  Scaleform::GFx::ASString v51; // [rsp+30h] [rbp-D0h] BYREF
  Scaleform::GFx::ASString v52; // [rsp+38h] [rbp-C8h] BYREF
  Scaleform::GFx::ASString v; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::GFx::AS3::Value v54; // [rsp+48h] [rbp-B8h] BYREF
  Scaleform::GFx::AS3::Value v55; // [rsp+68h] [rbp-98h] BYREF
  Scaleform::GFx::AS3::Value v56; // [rsp+88h] [rbp-78h] BYREF
  Scaleform::GFx::AS3::Value v57; // [rsp+A8h] [rbp-58h] BYREF
  Scaleform::GFx::AS3::Value name; // [rsp+C8h] [rbp-38h] BYREF
  Scaleform::GFx::AS3::Multiname v59; // [rsp+E8h] [rbp-18h] BYREF
  Scaleform::GFx::AS3::Multiname v60; // [rsp+118h] [rbp+18h] BYREF
  Scaleform::GFx::AS3::Multiname v61; // [rsp+148h] [rbp+48h] BYREF

  v5 = 0;
  LODWORD(ppath.pData) = 0;
  v7 = poldFocusedItem;
  pimeManager = this->pimeManager;
  v9 = this;
  if ( !pimeManager )
    return pnewFocusingItem;
  if ( !pimeManager->IsMovieActive(this->pimeManager, pmovie) )
    return pnewFocusingItem;
  pParent = ptopMostItem;
  if ( !ptopMostItem )
  {
LABEL_106:
    if ( pnewFocusingItem )
    {
      if ( pnewFocusingItem->GetType(pnewFocusingItem) == MouseWheel )
      {
        CandidateListSprite = Scaleform::GFx::AS3::IMEManager::GetCandidateListSprite(v9);
        if ( CandidateListSprite )
          Scaleform::GFx::TextField::SetCandidateListFont(
            (Scaleform::GFx::TextField *)pnewFocusingItem,
            CandidateListSprite);
      }
    }
    if ( v7 && v7->GetType(v7) == MouseWheel )
    {
      if ( !pnewFocusingItem )
      {
        Scaleform::GFx::IMEManagerBase::DoFinalize(pimeManager);
        goto LABEL_114;
      }
      pnewFocusingItem->GetType(pnewFocusingItem);
      Scaleform::GFx::IMEManagerBase::DoFinalize(pimeManager);
    }
    if ( pnewFocusingItem
      && pnewFocusingItem->GetType(pnewFocusingItem) == MouseWheel
      && Scaleform::GFx::TextField::IsIMEEnabled((Scaleform::GFx::TextField *)pnewFocusingItem) )
    {
      v46 = 1;
      goto LABEL_115;
    }
LABEL_114:
    v46 = 0;
LABEL_115:
    Scaleform::GFx::IMEManagerBase::EnableIME(pimeManager, v46);
    return pnewFocusingItem;
  }
  Scaleform::String::String(&ppath);
  Scaleform::GFx::DisplayObject::GetAbsolutePath(ptopMostItem, &ppath);
  if ( v9->IsCandidateList(v9, (const char *)((ppath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12)) )
    goto LABEL_95;
  v55.Flags = 0;
  v55.Bonus.pWeakProxy = 0i64;
  while ( 1 )
  {
    v12 = 0i64;
    if ( (pParent->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x400) != 0 )
      v12 = pParent;
    if ( !v12 )
      goto LABEL_85;
    AvmObjOffset = v12->AvmObjOffset;
    pObject = *(__int64 **)((char *)&v12->pWeakProxy + 4 * AvmObjOffset);
    v15 = (Scaleform::GFx::AS3::AvmDisplayObj *)((char *)v12 + 4 * AvmObjOffset);
    if ( !pObject )
      pObject = (__int64 *)v15->pAS3CollectiblePtr.pObject;
    if ( ((unsigned __int8)pObject & 1) != 0 )
      pObject = (__int64 *)((char *)pObject - 1);
    v54.Flags = 0;
    Flags = 0;
    v54.Bonus.pWeakProxy = 0i64;
    if ( pObject )
    {
      AS3Root = Scaleform::GFx::AS3::AvmDisplayObj::GetAS3Root(v15);
      v.pNode = Scaleform::GFx::ASStringManager::CreateStringNode(
                  AS3Root->BuiltinsMgr.pStringManager,
                  "IsCandidateList");
      ++v.pNode->RefCount;
      Scaleform::GFx::AS3::Value::Value(&name, &v);
      v18 = v5 | 0xF;
      AVM = Scaleform::GFx::AS3::AvmDisplayObj::GetAVM(v15);
      v20 = *pObject;
      Scaleform::GFx::AS3::Multiname::Multiname(&v61, AVM->PublicNamespace.pObject, &name);
      if ( *(_BYTE *)(*(__int64 (__fastcall **)(__int64 *, char *, __int64, Scaleform::GFx::AS3::Value *))(v20 + 40))(
                       pObject,
                       &v47,
                       v21,
                       &v54) )
        goto LABEL_19;
      v22 = Scaleform::GFx::AS3::AvmDisplayObj::GetAS3Root(v15);
      v52.pNode = Scaleform::GFx::ASStringManager::CreateStringNode(v22->BuiltinsMgr.pStringManager, "IsStatusWindow");
      ++v52.pNode->RefCount;
      Scaleform::GFx::AS3::Value::Value(&v57, &v52);
      v18 |= 0xF0u;
      v23 = Scaleform::GFx::AS3::AvmDisplayObj::GetAVM(v15);
      v24 = *pObject;
      Scaleform::GFx::AS3::Multiname::Multiname(&v60, v23->PublicNamespace.pObject, &v57);
      if ( *(_BYTE *)(*(__int64 (__fastcall **)(__int64 *, char *, __int64, Scaleform::GFx::AS3::Value *))(v24 + 40))(
                       pObject,
                       &v48,
                       v25,
                       &v54) )
        goto LABEL_19;
      v26 = Scaleform::GFx::AS3::AvmDisplayObj::GetAS3Root(v15);
      v51.pNode = Scaleform::GFx::ASStringManager::CreateStringNode(v26->BuiltinsMgr.pStringManager, "isLanguageBar");
      ++v51.pNode->RefCount;
      Scaleform::GFx::AS3::Value::Value(&v56, &v51);
      v18 |= 0xF00u;
      v27 = Scaleform::GFx::AS3::AvmDisplayObj::GetAVM(v15);
      v28 = *pObject;
      Scaleform::GFx::AS3::Multiname::Multiname(&v59, v27->PublicNamespace.pObject, &v56);
      if ( *(_BYTE *)(*(__int64 (__fastcall **)(__int64 *, char *, __int64, Scaleform::GFx::AS3::Value *))(v28 + 40))(
                       pObject,
                       v49,
                       v29,
                       &v54) )
LABEL_19:
        v30 = 1;
      else
        v30 = 0;
      v31 = v18 & 0xFFFFF7FF;
      if ( (v18 & 0x800) == 0 )
        v31 = v18;
      if ( (v31 & 0x400) != 0 )
      {
        v31 &= ~0x400u;
        if ( (v59.Name.Flags & 0x1F) > 9 )
        {
          if ( (v59.Name.Flags & 0x200) != 0 )
            Scaleform::GFx::AS3::Value::ReleaseWeakRef(&v59.Name);
          else
            Scaleform::GFx::AS3::Value::ReleaseInternal(&v59.Name);
        }
        v32 = v59.Obj.pObject;
        if ( v59.Obj.pObject )
        {
          if ( ((__int64)v59.Obj.pObject & 1) != 0 )
          {
            --v59.Obj.pObject;
          }
          else
          {
            RefCount = v59.Obj.pObject->RefCount;
            if ( (RefCount & 0x3FFFFF) != 0 )
            {
              v59.Obj.pObject->RefCount = RefCount - 1;
              Scaleform::GFx::AS3::RefCountBaseGC<328>::ReleaseInternal(v32);
            }
          }
        }
      }
      if ( (v31 & 0x200) != 0 )
      {
        v31 &= ~0x200u;
        if ( (v56.Flags & 0x1F) > 9 )
        {
          if ( (v56.Flags & 0x200) != 0 )
            Scaleform::GFx::AS3::Value::ReleaseWeakRef(&v56);
          else
            Scaleform::GFx::AS3::Value::ReleaseInternal(&v56);
        }
      }
      if ( (v31 & 0x100) != 0 )
      {
        pNode = v51.pNode;
        v31 &= ~0x100u;
        v35 = v51.pNode->RefCount-- == 1;
        if ( v35 )
          Scaleform::GFx::ASStringNode::ReleaseNode(pNode);
      }
      v36 = v31 & 0xFFFFFF7F;
      if ( (v31 & 0x80u) == 0 )
        v36 = v31;
      if ( (v36 & 0x40) != 0 )
      {
        v36 &= ~0x40u;
        if ( (v60.Name.Flags & 0x1F) > 9 )
        {
          if ( (v60.Name.Flags & 0x200) != 0 )
            Scaleform::GFx::AS3::Value::ReleaseWeakRef(&v60.Name);
          else
            Scaleform::GFx::AS3::Value::ReleaseInternal(&v60.Name);
        }
        v37 = v60.Obj.pObject;
        if ( v60.Obj.pObject )
        {
          if ( ((__int64)v60.Obj.pObject & 1) != 0 )
          {
            --v60.Obj.pObject;
          }
          else
          {
            v38 = v60.Obj.pObject->RefCount;
            if ( (v38 & 0x3FFFFF) != 0 )
            {
              v60.Obj.pObject->RefCount = v38 - 1;
              Scaleform::GFx::AS3::RefCountBaseGC<328>::ReleaseInternal(v37);
            }
          }
        }
      }
      if ( (v36 & 0x20) != 0 )
      {
        v36 &= ~0x20u;
        if ( (v57.Flags & 0x1F) > 9 )
        {
          if ( (v57.Flags & 0x200) != 0 )
            Scaleform::GFx::AS3::Value::ReleaseWeakRef(&v57);
          else
            Scaleform::GFx::AS3::Value::ReleaseInternal(&v57);
        }
      }
      if ( (v36 & 0x10) != 0 )
      {
        v39 = v52.pNode;
        v36 &= ~0x10u;
        v35 = v52.pNode->RefCount-- == 1;
        if ( v35 )
          Scaleform::GFx::ASStringNode::ReleaseNode(v39);
      }
      v5 = v36 & 0xFFFFFFF7;
      if ( (v36 & 8) == 0 )
        v5 = v36;
      if ( (v5 & 4) != 0 )
      {
        v5 &= ~4u;
        if ( (v61.Name.Flags & 0x1F) > 9 )
        {
          if ( (v61.Name.Flags & 0x200) != 0 )
            Scaleform::GFx::AS3::Value::ReleaseWeakRef(&v61.Name);
          else
            Scaleform::GFx::AS3::Value::ReleaseInternal(&v61.Name);
        }
        v40 = v61.Obj.pObject;
        if ( v61.Obj.pObject )
        {
          if ( ((__int64)v61.Obj.pObject & 1) != 0 )
          {
            --v61.Obj.pObject;
          }
          else
          {
            v41 = v61.Obj.pObject->RefCount;
            if ( (v41 & 0x3FFFFF) != 0 )
            {
              v61.Obj.pObject->RefCount = v41 - 1;
              Scaleform::GFx::AS3::RefCountBaseGC<328>::ReleaseInternal(v40);
            }
          }
        }
      }
      if ( (v5 & 2) != 0 )
      {
        v5 &= ~2u;
        if ( (name.Flags & 0x1F) > 9 )
        {
          if ( (name.Flags & 0x200) != 0 )
            Scaleform::GFx::AS3::Value::ReleaseWeakRef(&name);
          else
            Scaleform::GFx::AS3::Value::ReleaseInternal(&name);
        }
      }
      if ( (v5 & 1) != 0 )
      {
        v42 = v.pNode;
        v5 &= ~1u;
        v35 = v.pNode->RefCount-- == 1;
        if ( v35 )
          Scaleform::GFx::ASStringNode::ReleaseNode(v42);
      }
      Flags = v54.Flags;
      if ( v30 )
        break;
    }
    if ( (Flags & 0x1Fu) > 9 )
    {
      if ( (Flags & 0x200) != 0 )
        Scaleform::GFx::AS3::Value::ReleaseWeakRef(&v54);
      else
        Scaleform::GFx::AS3::Value::ReleaseInternal(&v54);
    }
LABEL_85:
    pParent = pParent->pParent;
    if ( !pParent )
    {
      if ( (v55.Flags & 0x1F) > 9 )
      {
        if ( (v55.Flags & 0x200) != 0 )
          Scaleform::GFx::AS3::Value::ReleaseWeakRef(&v55);
        else
          Scaleform::GFx::AS3::Value::ReleaseInternal(&v55);
      }
      v44 = (void *)(ppath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                           (volatile int *)((ppath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                           -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v44);
      v9 = this;
      v7 = poldFocusedItem;
      goto LABEL_106;
    }
  }
  if ( (v54.Flags & 0x1F) > 9 )
  {
    if ( (v54.Flags & 0x200) != 0 )
      Scaleform::GFx::AS3::Value::ReleaseWeakRef(&v54);
    else
      Scaleform::GFx::AS3::Value::ReleaseInternal(&v54);
  }
  if ( (v55.Flags & 0x1F) > 9 )
  {
    if ( (v55.Flags & 0x200) != 0 )
      Scaleform::GFx::AS3::Value::ReleaseWeakRef(&v55);
    else
      Scaleform::GFx::AS3::Value::ReleaseInternal(&v55);
  }
  v7 = poldFocusedItem;
LABEL_95:
  v43 = (void *)(ppath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                       (volatile int *)((ppath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                       -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v43);
  return v7;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

void __fastcall Scaleform::GFx::AS3::NotifyLoadInitCandidateList::InitEventCallback(
        Scaleform::GFx::AS3::NotifyLoadInitCandidateList *this)
{
  Scaleform::GFx::AS3::MovieRoot *pMovieRoot; // rax
  Scaleform::GFx::ASStringNode *pNode; // rcx
  bool v4; // zf
  Scaleform::GFx::ASStringNode *v5; // rcx
  Scaleform::GFx::AS3::IMEManager *pObject; // r8
  Scaleform::GFx::Movie *pMovie; // rcx
  Scaleform::GFx::AS3::Stage *v8; // rcx
  Scaleform::GFx::DisplayObject *v9; // rdi
  char *v10; // rcx
  __int64 v11; // rax
  Scaleform::GFx::AS3::AvmDisplayObjContainer *v12; // rcx
  Scaleform::GFx::AS3::GASRefCountBase *v13; // rcx
  unsigned int RefCount; // eax
  Scaleform::GFx::AS3::GASRefCountBase *v15; // rcx
  unsigned int v16; // eax
  Scaleform::GFx::AS3::Value name; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h]
  void *v19; // [rsp+68h] [rbp-A0h]
  Scaleform::GFx::AS3::Value value; // [rsp+78h] [rbp-90h] BYREF
  Scaleform::GFx::AS3::Value v21; // [rsp+98h] [rbp-70h] BYREF
  Scaleform::GFx::Value val; // [rsp+B8h] [rbp-50h] BYREF
  Scaleform::GFx::AS3::Multiname v23; // [rsp+E8h] [rbp-20h] BYREF
  Scaleform::GFx::Value v24; // [rsp+118h] [rbp+10h] BYREF
  Scaleform::GFx::AS3::Multiname v25; // [rsp+148h] [rbp+40h] BYREF
  Scaleform::GFx::ASString v; // [rsp+188h] [rbp+80h] BYREF

  LODWORD(v.pNode) = 0;
  pMovieRoot = this->pMovieRoot;
  v24.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v24.pObjectInterface = 0i64;
  v24.Type = VT_None;
  val.Scaleform::ListNode<Scaleform::GFx::Value> = v24.Scaleform::ListNode<Scaleform::GFx::Value>;
  val.pObjectInterface = 0i64;
  val.Type = VT_None;
  v21.Flags = 0;
  v21.Bonus.pWeakProxy = 0i64;
  value.Flags = 0;
  value.Bonus.pWeakProxy = 0i64;
  v.pNode = Scaleform::GFx::ASStringManager::CreateStringNode(
              pMovieRoot->BuiltinsMgr.pStringManager,
              "contentLoaderInfo");
  ++v.pNode->RefCount;
  Scaleform::GFx::AS3::Value::Value((Scaleform::GFx::AS3::Value *)&name.Bonus, &v);
  Scaleform::GFx::AS3::Multiname::Multiname(
    &v23,
    this->pMovieRoot->pAVM.pObject->PublicNamespace.pObject,
    (const Scaleform::GFx::AS3::Value *)&name.Bonus);
  if ( (unsigned __int64)((__int64)name.Bonus.pWeakProxy & 0x1F) > 9 )
  {
    if ( ((__int64)name.Bonus.pWeakProxy & 0x200) != 0 )
      Scaleform::GFx::AS3::Value::ReleaseWeakRef((Scaleform::GFx::AS3::Value *)&name.Bonus);
    else
      Scaleform::GFx::AS3::Value::ReleaseInternal((Scaleform::GFx::AS3::Value *)&name.Bonus);
  }
  pNode = v.pNode;
  v4 = v.pNode->RefCount-- == 1;
  if ( v4 )
    Scaleform::GFx::ASStringNode::ReleaseNode(pNode);
  if ( this->pLoader.pObject->GetProperty(this->pLoader.pObject, &v, &v23, &v21)->Result
    && (this->pASIMEManager.pObject->CandListVal.Type & 0x8F) == 1 )
  {
    v.pNode = Scaleform::GFx::ASStringManager::CreateStringNode(this->pMovieRoot->BuiltinsMgr.pStringManager, "content");
    ++v.pNode->RefCount;
    Scaleform::GFx::AS3::Value::Value((Scaleform::GFx::AS3::Value *)&name.Bonus, &v);
    Scaleform::GFx::AS3::Multiname::Multiname(
      &v25,
      this->pMovieRoot->pAVM.pObject->PublicNamespace.pObject,
      (const Scaleform::GFx::AS3::Value *)&name.Bonus);
    if ( (unsigned __int64)((__int64)name.Bonus.pWeakProxy & 0x1F) > 9 )
    {
      if ( ((__int64)name.Bonus.pWeakProxy & 0x200) != 0 )
        Scaleform::GFx::AS3::Value::ReleaseWeakRef((Scaleform::GFx::AS3::Value *)&name.Bonus);
      else
        Scaleform::GFx::AS3::Value::ReleaseInternal((Scaleform::GFx::AS3::Value *)&name.Bonus);
    }
    v5 = v.pNode;
    v4 = v.pNode->RefCount-- == 1;
    if ( v4 )
      Scaleform::GFx::ASStringNode::ReleaseNode(v5);
    if ( *(_BYTE *)(*((__int64 (__fastcall **)(Scaleform::GFx::AS3::Value::V1U, Scaleform::GFx::ASString *, Scaleform::GFx::AS3::Multiname *, Scaleform::GFx::AS3::Value *))v21.value.VS._1.VStr->pData
                    + 5))(
                     v21.value.VS._1,
                     &v,
                     &v25,
                     &value) )
    {
      Scaleform::GFx::AS3::MovieRoot::ASValue2GFxValue(
        this->pMovieRoot,
        &value,
        &this->pASIMEManager.pObject->CandListVal);
      pObject = this->pASIMEManager.pObject;
      if ( (pObject->CandListVal.Type & 0x8F) != 1 )
      {
        pMovie = pObject->pMovie;
        if ( pMovie )
        {
          *(__m128i *)&name.Bonus.pWeakProxy = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
          name.value.VS._2.VObj = 0i64;
          LODWORD(v18) = 0;
          Scaleform::GFx::Movie::CreateFunction(
            pMovie,
            (Scaleform::GFx::Value *)&name.Bonus,
            pObject->CustomFuncCandList.pObject,
            0i64);
          Scaleform::GFx::Value::ObjectInterface::SetMember(
            this->pASIMEManager.pObject->CandListVal.pObjectInterface,
            this->pASIMEManager.pObject->CandListVal.mValue.pStringManaged,
            "SendIMEMessage",
            (const Scaleform::GFx::Value *)&name.Bonus,
            (this->pASIMEManager.pObject->CandListVal.Type & 0x8F) == 10);
          this->pASIMEManager.pObject->CandidateListState = 2;
          v8 = this->pMovieRoot->pStage.pObject;
          v9 = this->pLoader.pObject->pDispObj.pObject;
          if ( !v8
            || (v10 = (char *)v8 + 4 * v8->AvmObjOffset,
                v11 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v10 + 40i64))(v10),
                v12 = (Scaleform::GFx::AS3::AvmDisplayObjContainer *)(v11 - 72),
                !v11) )
          {
            v12 = 0i64;
          }
          Scaleform::GFx::AS3::AvmDisplayObjContainer::AddChild(v12, v9);
          this->pASIMEManager.pObject->OnOpenCandidateList(this->pASIMEManager.pObject);
          Scaleform::GFx::Value::ObjectInterface::Invoke(
            this->pASIMEManager.pObject->CandListVal.pObjectInterface,
            this->pASIMEManager.pObject->CandListVal.mValue.pStringManaged,
            0i64,
            "Init",
            0i64,
            0i64,
            (this->pASIMEManager.pObject->CandListVal.Type & 0x8F) == 10);
          if ( (v18 & 0x40) != 0 )
            Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
              (Scaleform::GFx::Value::ObjectInterface *)name.value.VS._2.VObj,
              (Scaleform::GFx::Value *)&name.Bonus,
              v19);
        }
      }
    }
    if ( (v25.Name.Flags & 0x1F) > 9 )
    {
      if ( (v25.Name.Flags & 0x200) != 0 )
        Scaleform::GFx::AS3::Value::ReleaseWeakRef(&v25.Name);
      else
        Scaleform::GFx::AS3::Value::ReleaseInternal(&v25.Name);
    }
    v13 = v25.Obj.pObject;
    if ( v25.Obj.pObject )
    {
      if ( ((__int64)v25.Obj.pObject & 1) == 0 )
      {
        RefCount = v25.Obj.pObject->RefCount;
        if ( (RefCount & 0x3FFFFF) != 0 )
        {
          v25.Obj.pObject->RefCount = RefCount - 1;
          Scaleform::GFx::AS3::RefCountBaseGC<328>::ReleaseInternal(v13);
        }
      }
    }
  }
  if ( (v23.Name.Flags & 0x1F) > 9 )
  {
    if ( (v23.Name.Flags & 0x200) != 0 )
      Scaleform::GFx::AS3::Value::ReleaseWeakRef(&v23.Name);
    else
      Scaleform::GFx::AS3::Value::ReleaseInternal(&v23.Name);
  }
  v15 = v23.Obj.pObject;
  if ( v23.Obj.pObject )
  {
    if ( ((__int64)v23.Obj.pObject & 1) != 0 )
    {
      --v23.Obj.pObject;
    }
    else
    {
      v16 = v23.Obj.pObject->RefCount;
      if ( (v16 & 0x3FFFFF) != 0 )
      {
        v23.Obj.pObject->RefCount = v16 - 1;
        Scaleform::GFx::AS3::RefCountBaseGC<328>::ReleaseInternal(v15);
      }
    }
  }
  if ( (value.Flags & 0x1F) > 9 )
  {
    if ( (value.Flags & 0x200) != 0 )
      Scaleform::GFx::AS3::Value::ReleaseWeakRef(&value);
    else
      Scaleform::GFx::AS3::Value::ReleaseInternal(&value);
  }
  if ( (v21.Flags & 0x1F) > 9 )
  {
    if ( (v21.Flags & 0x200) != 0 )
      Scaleform::GFx::AS3::Value::ReleaseWeakRef(&v21);
    else
      Scaleform::GFx::AS3::Value::ReleaseInternal(&v21);
  }
  if ( (val.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
    val.pObjectInterface = 0i64;
  }
  val.Type = VT_None;
  if ( (v24.Type & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v24.pObjectInterface, &v24, v24.mValue.pStringManaged);
}

bool __fastcall Scaleform::GFx::AS3::IMEManager::Invoke(
        Scaleform::GFx::AS3::IMEManager *this,
        const char *pmethodName,
        Scaleform::GFx::Value *presult,
        const Scaleform::GFx::Value *pargFmt,
        unsigned int numArgs)
{
  __int64 v9; // rbx
  char *v10; // rax
  const char *v11; // r14
  char *v12; // r13
  char *v13; // rax
  Scaleform::GFx::Value::ValueType Type; // er9
  const char *v15; // rbx
  void *pStringManaged; // r8
  void *v17; // rdx
  unsigned __int64 DataAux; // rax
  char v19; // cl
  char *v20; // rax
  int v21; // er9
  Scaleform::GFx::Value val; // [rsp+48h] [rbp-31h] BYREF
  Scaleform::GFx::Value pval; // [rsp+78h] [rbp-1h] BYREF
  char *context; // [rsp+D8h] [rbp+5Fh] BYREF

  if ( this->pMovie && (this->CandListVal.Type & 0x8Fu) >= 2 )
  {
    v9 = -1i64;
    do
      ++v9;
    while ( pmethodName[v9] );
    v10 = (char *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, (int)v9 + 1, 0i64);
    v11 = 0i64;
    context = 0i64;
    v12 = v10;
    memmove(v10, pmethodName, (int)v9);
    v12[(int)v9] = 0;
    v13 = strtok_s(v12, ".", &context);
    Type = this->CandListVal.Type;
    v15 = v13;
    pStringManaged = this->CandListVal.mValue.pStringManaged;
    val.DataAux = this->CandListVal.DataAux;
    val.pObjectInterface = 0i64;
    val.Type = Type;
    val.mValue.pString = (const char *)pStringManaged;
    val.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    if ( (Type & 0x40) != 0 )
    {
      val.pObjectInterface = this->CandListVal.pObjectInterface;
      Scaleform::GFx::Value::ObjectInterface::ObjectAddRef(val.pObjectInterface, &val, pStringManaged);
      LOBYTE(Type) = val.Type;
    }
    v17 = this->CandListVal.mValue.pStringManaged;
    DataAux = this->CandListVal.DataAux;
    pval.Type = this->CandListVal.Type;
    pval.pObjectInterface = 0i64;
    pval.mValue.pString = (const char *)v17;
    pval.DataAux = DataAux;
    pval.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    if ( (pval.Type & 0x40) != 0 )
    {
      pval.pObjectInterface = this->CandListVal.pObjectInterface;
      Scaleform::GFx::Value::ObjectInterface::ObjectAddRef(pval.pObjectInterface, &pval, v17);
      LOBYTE(Type) = val.Type;
      v17 = pval.mValue.pStringManaged;
    }
    if ( (Type & 0x8F) != 1 )
    {
      while ( v15 )
      {
        if ( (Type & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
          v17 = pval.mValue.pStringManaged;
          val.pObjectInterface = 0i64;
        }
        v19 = pval.Type;
        val.DataAux = pval.DataAux;
        val.Type = pval.Type;
        val.mValue.pString = (const char *)v17;
        if ( (pval.Type & 0x40) != 0 )
        {
          val.pObjectInterface = pval.pObjectInterface;
          Scaleform::GFx::Value::ObjectInterface::ObjectAddRef(pval.pObjectInterface, &val, v17);
          v17 = val.mValue.pStringManaged;
          v19 = val.Type;
        }
        v11 = v15;
        Scaleform::GFx::Value::ObjectInterface::GetMember(val.pObjectInterface, v17, v15, &pval, (v19 & 0x8F) == 10);
        v20 = strtok_s(0i64, ".", &context);
        LOBYTE(Type) = val.Type;
        v15 = v20;
        if ( (val.Type & 0x8F) == 1 )
          break;
        v17 = pval.mValue.pStringManaged;
      }
    }
    v21 = Type & 0x8F;
    if ( v21 != 1 )
      Scaleform::GFx::Value::ObjectInterface::Invoke(
        val.pObjectInterface,
        val.mValue.pStringManaged,
        presult,
        v11,
        pargFmt,
        numArgs,
        v21 == 10);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v12);
    if ( (pval.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pval.pObjectInterface, &pval, pval.mValue.pStringManaged);
      pval.pObjectInterface = 0i64;
    }
    pval.Type = VT_None;
    if ( (val.Type & 0x40) != 0 )
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
  }
  return 0;
}

char __fastcall Scaleform::GFx::AS3::IMEManager::IsCandidateListLoaded(Scaleform::GFx::AS3::IMEManager *this)
{
  Scaleform::GFx::Movie *pMovie; // rcx
  bool v2; // zf
  char Type; // al
  Scaleform::GFx::Value pval; // [rsp+20h] [rbp-38h] BYREF

  pMovie = this->pMovie;
  if ( !pMovie )
    return 0;
  pval.pObjectInterface = 0i64;
  pval.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  pval.Type = VT_None;
  v2 = (unsigned __int8)Scaleform::GFx::Movie::GetVariable(pMovie, &pval, "_global.gfx_ime_candidate_list_state") == 0;
  Type = pval.Type;
  if ( v2 )
  {
    if ( (pval.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pval.pObjectInterface, &pval, pval.mValue.pStringManaged);
      pval.pObjectInterface = 0i64;
    }
    Type = 5;
    pval.mValue.pString = 0i64;
    pval.Type = 5;
  }
  if ( (Type & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pval.pObjectInterface, &pval, pval.mValue.pStringManaged);
  return 1;
}

char __fastcall Scaleform::GFx::AS3::IMEManager::IsTextFieldFocused(
        Scaleform::GFx::AS3::IMEManager *this,
        Scaleform::GFx::InteractiveObject *ptextfield)
{
  Scaleform::GFx::Movie *pMovie; // r8
  Scaleform::GFx::TextField *v4; // rbx
  Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> *p_pASMovieRoot; // rdi
  Scaleform::GFx::ASMovieRootBase *pObject; // rdx
  __int64 v7; // rax
  int v8; // eax
  char v9; // di

  pMovie = this->pMovie;
  if ( !pMovie )
    return 0;
  v4 = 0i64;
  p_pASMovieRoot = &pMovie[3 * BYTE4(pMovie[661].Scaleform::GFx::StateBag::__vftable) + 614].pASMovieRoot;
  pObject = p_pASMovieRoot->pObject;
  if ( !p_pASMovieRoot->pObject )
    goto LABEL_13;
  v7 = *(_QWORD *)&pObject->RefCount;
  if ( !v7 )
  {
    if ( LODWORD(pObject->__vftable)-- == 1 )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    p_pASMovieRoot->pObject = 0i64;
    goto LABEL_13;
  }
  v4 = *(Scaleform::GFx::TextField **)&pObject->RefCount;
  v8 = *(_DWORD *)(v7 + 8);
  if ( !v8 )
  {
    v4 = 0i64;
LABEL_13:
    v9 = 0;
    goto LABEL_14;
  }
  v4->RefCount = v8 + 1;
  ++v4->RefCount;
  Scaleform::RefCountNTSImpl::Release(v4);
  if ( v4->GetType(v4) != MouseWheel || !Scaleform::GFx::TextField::IsIMEEnabled(v4) || v4 != ptextfield )
    goto LABEL_13;
  v9 = 1;
LABEL_14:
  if ( v4 )
    Scaleform::RefCountNTSImpl::Release(v4);
  return v9;
}

char __fastcall Scaleform::GFx::AS3::IMEManager::IsTextFieldFocused(Scaleform::GFx::AS3::IMEManager *this)
{
  Scaleform::GFx::Movie *pMovie; // r8
  Scaleform::GFx::InteractiveObject *v3; // rbx
  Scaleform::GFx::Movie *v4; // rsi
  Scaleform::GFx::ASMovieRootBase *pObject; // rdx
  __int64 v6; // rax
  int v7; // eax
  char IsTextFieldFocused; // di

  pMovie = this->pMovie;
  if ( !pMovie )
    return 0;
  v3 = 0i64;
  v4 = &pMovie[3 * BYTE4(pMovie[661].Scaleform::GFx::StateBag::__vftable)];
  pObject = v4[614].pASMovieRoot.pObject;
  if ( pObject )
  {
    v6 = *(_QWORD *)&pObject->RefCount;
    if ( v6 )
    {
      v3 = *(Scaleform::GFx::InteractiveObject **)&pObject->RefCount;
      v7 = *(_DWORD *)(v6 + 8);
      if ( v7 )
      {
        v3->RefCount = v7 + 1;
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
      if ( LODWORD(pObject->__vftable)-- == 1 )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      v4[614].pASMovieRoot.pObject = 0i64;
    }
  }
  IsTextFieldFocused = Scaleform::GFx::AS3::IMEManager::IsTextFieldFocused(this, v3);
  if ( v3 )
    Scaleform::RefCountNTSImpl::Release(v3);
  return IsTextFieldFocused;
}

void __fastcall Scaleform::GFx::AS3::IMEManager::OnOpenCandidateList(Scaleform::GFx::AS3::IMEManager *this)
{
  Scaleform::GFx::Movie *pMovie; // rcx
  Scaleform::GFx::TextField *pTextField; // rbx
  Scaleform::GFx::Movie *v4; // rsi
  Scaleform::GFx::ASMovieRootBase *pObject; // rdx
  int RefCount; // eax
  Scaleform::RefCountNTSImpl *v7; // rcx
  Scaleform::GFx::Sprite *CandidateListSprite; // rax

  pMovie = this->pMovie;
  if ( pMovie )
  {
    pTextField = this->pTextField;
    if ( pTextField )
    {
LABEL_8:
      CandidateListSprite = Scaleform::GFx::AS3::IMEManager::GetCandidateListSprite(this);
      if ( CandidateListSprite )
        Scaleform::GFx::TextField::SetCandidateListFont(pTextField, CandidateListSprite);
      return;
    }
    v4 = &pMovie[3 * BYTE4(pMovie[661].Scaleform::GFx::StateBag::__vftable)];
    pObject = v4[614].pASMovieRoot.pObject;
    if ( !pObject )
      return;
    pTextField = *(Scaleform::GFx::TextField **)&pObject->RefCount;
    if ( pTextField )
    {
      RefCount = pTextField->RefCount;
      if ( !RefCount )
        return;
      v7 = *(Scaleform::RefCountNTSImpl **)&pObject->RefCount;
      pTextField->RefCount = RefCount + 1;
      ++pTextField->RefCount;
      Scaleform::RefCountNTSImpl::Release(v7);
      if ( pTextField->GetType(pTextField) != MouseWheel )
      {
        Scaleform::RefCountNTSImpl::Release(pTextField);
        return;
      }
      Scaleform::RefCountNTSImpl::Release(pTextField);
      goto LABEL_8;
    }
    if ( LODWORD(pObject->__vftable)-- == 1 )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    v4[614].pASMovieRoot.pObject = 0i64;
  }
}

void __fastcall Scaleform::GFx::ASIMEManager::SetActiveMovie(AgMemoryStream *this, unsigned __int64 value)
{
  this->m_position = value;
}

void __fastcall Scaleform::GFx::ASIMEManager::SetIMEManager(
        Scaleform::GFx::ASIMEManager *this,
        Scaleform::GFx::IMEManagerBase *pimeMgr)
{
  this->pimeManager = pimeMgr;
}

void __fastcall Scaleform::GFx::AS3::IMEManager::SetIMEMoviePath(
        Scaleform::GFx::AS3::IMEManager *this,
        const char *pcandidateSwfPath)
{
  Scaleform::String::operator=(&this->CandidateSwfPath, pcandidateSwfPath);
}

void __fastcall Scaleform::GFx::AS3::LoadQueueEntry::SetNotifyLoadInitCInterface(
        Scaleform::GFx::AS3::LoadQueueEntry *this,
        Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> pinterface)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  if ( pinterface.pObject->__vftable )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pinterface.pObject->__vftable);
  pObject = (Scaleform::RefCountVImpl *)this->NotifyLoadInitCInterface.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->NotifyLoadInitCInterface.pObject = (Scaleform::GFx::AS3::NotifyLoadInitC *)pinterface.pObject->__vftable;
  if ( pinterface.pObject->__vftable )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pinterface.pObject->__vftable);
}

void __fastcall Scaleform::GFx::ASIMEManager::ShutDown(Scaleform::GFx::ASIMEManager *this)
{
  this->pMovie = 0i64;
}

void __fastcall Scaleform::GFx::AS3::IMEManager::ShutDown(Scaleform::GFx::AS3::IMEManager *this)
{
  Scaleform::GFx::Value *p_CandListVal; // rbx

  p_CandListVal = &this->CandListVal;
  if ( (this->CandListVal.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      this->CandListVal.pObjectInterface,
      &this->CandListVal,
      this->CandListVal.mValue.pStringManaged);
    p_CandListVal->pObjectInterface = 0i64;
    p_CandListVal->Type = VT_None;
    this->pMovie = 0i64;
  }
  else
  {
    this->CandListVal.Type = VT_None;
    this->pMovie = 0i64;
  }
}

