#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_texture.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_extensions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_graphicsdevice.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_renderer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_graphicsdevice.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_loader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_shader.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_sync.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_fontman.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_events.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_events.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shaderhal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_system.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_fontman.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_loader.cpp"

class extension::gfxi_detail::CustomRenderCommandQueue :
	Scaleform::Render::SingleThreadCommandQueue
{
private:
	std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > m_commands; // 0x10
	AgCondition m_pushCondition; // 0x20
	AgMutex m_commandsMutex; // 0x58
public:
	CustomRenderCommandQueue();
	virtual void PushThreadCommand(Scaleform::Render::ThreadCommand *);
	void ExecCommands();
	virtual ~CustomRenderCommandQueue();
};
class std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > :
	std::_List_buy<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >
{
	class _Myt;
	class _Mybase;
	struct _Node;
	typedef std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> _Nodeptr;
	struct _Alty;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef Scaleform::Ptr<Scaleform::Render::ThreadCommand> pointer;
	typedef const Scaleform::Ptr<Scaleform::Render::ThreadCommand> const_pointer;
	typedef Scaleform::Ptr<Scaleform::Render::ThreadCommand> reference;
	typedef const Scaleform::Ptr<Scaleform::Render::ThreadCommand> const_reference;
	class value_type;
	class const_iterator;
	class iterator;
	class _Unchecked_const_iterator;
	class _Unchecked_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >(std::initializer_list<Scaleform::Ptr<Scaleform::Render::ThreadCommand> >, const std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > &);
	list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >(std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &, const std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > &);
	list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >(std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &);
	list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >(const std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &, const std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > &);
	list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >(const std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &);
	list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >(unsigned long long, const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &, const std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > &);
	list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >(unsigned long long, const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >(unsigned long long);
	list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >(const std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > &);
	list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >();
	void _Construct_n(unsigned long long, const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > & operator=(const std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &);
	std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > & operator=(std::initializer_list<Scaleform::Ptr<Scaleform::Render::ThreadCommand> >);
	std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > & operator=(std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &);
	void _Assign_rv(std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &);
	void push_front(const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	void push_front(Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	void push_back(const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	void push_back(Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, unsigned long long, const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, std::initializer_list<Scaleform::Ptr<Scaleform::Render::ThreadCommand> >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	void assign(unsigned long long, const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	void assign(std::initializer_list<Scaleform::Ptr<Scaleform::Render::ThreadCommand> >);
	~list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > begin();
	std::_List_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > begin();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > end();
	std::_List_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > end();
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >,std::_Iterator_base0> _Unchecked_begin();
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > _Unchecked_begin();
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >,std::_Iterator_base0> _Unchecked_end();
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > _Unchecked_end();
	std::_List_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > _Make_iter(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >,std::_Iterator_base0>);
	std::_List_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > _Make_iter(std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >);
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > > rbegin();
	std::reverse_iterator<std::_List_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > > rbegin();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > > rend();
	std::reverse_iterator<std::_List_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > > rend();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > cbegin();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > cend();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > > crbegin();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > > crend();
	void resize(unsigned long long, const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > get_allocator();
	const Scaleform::Ptr<Scaleform::Render::ThreadCommand> & front();
	Scaleform::Ptr<Scaleform::Render::ThreadCommand> & front();
	const Scaleform::Ptr<Scaleform::Render::ThreadCommand> & back();
	Scaleform::Ptr<Scaleform::Render::ThreadCommand> & back();
	void pop_front();
	void pop_back();
	std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> * _Unlinknode(std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > erase(std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > > erase(std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >);
	void _Unchecked_erase(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >,std::_Iterator_base0>);
	void clear();
	void swap(std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &);
	void remove(const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	void unique();
	void merge(std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &);
	void merge(std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &);
	void sort();
	void reverse();
	void _Splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, unsigned long long);
	void _Splice_same(std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,std::allocator<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > > >, unsigned long long);
	void _Unchecked_splice(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >,std::_Iterator_base0>, std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >,std::_Iterator_base0>, std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >,std::_Iterator_base0>);
	void _Tidy();
	void _Insert_n(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand> > >,std::_Iterator_base0>, unsigned long long, const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	void _Incsize(unsigned long long);
};
class Scaleform::Ptr<Scaleform::Render::ThreadCommand>
{
protected:
	Scaleform::Render::ThreadCommand * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ThreadCommand>(const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	Ptr<Scaleform::Render::ThreadCommand>(Scaleform::Render::ThreadCommand *);
	Ptr<Scaleform::Render::ThreadCommand>(Scaleform::Ptr<Scaleform::Render::ThreadCommand> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ThreadCommand>(Scaleform::Pickable<Scaleform::Render::ThreadCommand>);
	Ptr<Scaleform::Render::ThreadCommand>(Scaleform::Render::ThreadCommand &);
	Ptr<Scaleform::Render::ThreadCommand>();
	~Ptr<Scaleform::Render::ThreadCommand>();
	bool operator==(Scaleform::Render::ThreadCommand *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	bool operator!=(Scaleform::Render::ThreadCommand *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	Scaleform::Ptr<Scaleform::Render::ThreadCommand> & operator=(Scaleform::Pickable<Scaleform::Render::ThreadCommand>);
	const Scaleform::Ptr<Scaleform::Render::ThreadCommand> & operator=(Scaleform::Render::ThreadCommand &);
	const Scaleform::Ptr<Scaleform::Render::ThreadCommand> & operator=(Scaleform::Render::ThreadCommand *);
	const Scaleform::Ptr<Scaleform::Render::ThreadCommand> & operator=(const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	Scaleform::Ptr<Scaleform::Render::ThreadCommand> & SetPtr(Scaleform::Pickable<Scaleform::Render::ThreadCommand>);
	Scaleform::Ptr<Scaleform::Render::ThreadCommand> & SetPtr(Scaleform::Render::ThreadCommand &);
	Scaleform::Ptr<Scaleform::Render::ThreadCommand> & SetPtr(Scaleform::Render::ThreadCommand *);
	Scaleform::Ptr<Scaleform::Render::ThreadCommand> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ThreadCommand * & GetRawRef();
	Scaleform::Render::ThreadCommand * GetPtr();
	Scaleform::Render::ThreadCommand & operator*();
	Scaleform::Render::ThreadCommand * operator->();
	Scaleform::Render::ThreadCommand * operator class Scaleform::Render::ThreadCommand *();
	Scaleform::Ptr<Scaleform::Render::ThreadCommand> & Pick(Scaleform::Render::ThreadCommand *);
	Scaleform::Ptr<Scaleform::Render::ThreadCommand> & Pick(Scaleform::Pickable<Scaleform::Render::ThreadCommand>);
	Scaleform::Ptr<Scaleform::Render::ThreadCommand> & Pick(Scaleform::Ptr<Scaleform::Render::ThreadCommand> &);
};
void(*extension::m_glhal$initializer$)(); // 0x1407408B8
std::piecewise_construct_t std::piecewise_construct; // 0x1408AED1D
extension::gfxi_detail::CustomRenderCommandQueue::CustomRenderCommandQueue(); // 0x14027E420
void extension::gfxi_detail::CustomRenderCommandQueue::PushThreadCommand(Scaleform::Render::ThreadCommand * command); // 0x14027E4A0
void extension::gfxi_detail::CustomRenderCommandQueue::ExecCommands(); // 0x14027E570
extension::GFXIRenderer::GFXIRenderer(); // 0x14027E6D0
extension::GFXIRenderer::~GFXIRenderer(); // 0x14027E770
Scaleform::Render::GL::HALInitParams::~HALInitParams(); // 0x14027ED80
Scaleform::Render::HALInitParams::~HALInitParams(); // 0x14027E3E0
extension::GFXIRenderer & extension::GFXIRenderer::Instance(); // 0x14027E840
void extension::GFXIRenderer::initialize(); // 0x14027E8B0
class std::unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> > :
	std::_Unique_ptr_base<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> >
{
	class _Myt;
	class _Mybase;
	typedef Scaleform::Render::SingleThreadCommandQueue pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> >(const std::unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> > &);
	unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> >(std::unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> > &);
	unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> >(Scaleform::Render::SingleThreadCommandQueue *, std::default_delete<Scaleform::Render::SingleThreadCommandQueue> &);
	unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> >(Scaleform::Render::SingleThreadCommandQueue *, const std::default_delete<Scaleform::Render::SingleThreadCommandQueue> &);
	unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> >(Scaleform::Render::SingleThreadCommandQueue *);
	unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> >(void *);
	unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> >();
	std::unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> > & operator=(const std::unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> > &);
	std::unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> > & operator=(std::unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> > &);
	std::unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> > & operator=(void *);
	void swap(std::unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> > &);
	~unique_ptr<Scaleform::Render::SingleThreadCommandQueue,std::default_delete<Scaleform::Render::SingleThreadCommandQueue> >();
	Scaleform::Render::SingleThreadCommandQueue & operator*();
	Scaleform::Render::SingleThreadCommandQueue * operator->();
	Scaleform::Render::SingleThreadCommandQueue * get();
	bool operator bool();
	Scaleform::Render::SingleThreadCommandQueue * release();
	void reset(Scaleform::Render::SingleThreadCommandQueue *);
};
void extension::GFXIRenderer::onResize(); // 0x14027EDF0
void extension::GFXIRenderer::beginScene(); // 0x14027F030
void extension::GFXIRenderer::useOffscreenRenderTarget(long fbo, long width, long height); // 0x14027F1E0//decompilation failure at 1407408B8!
//decompilation failure at 1408AED1D!
std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *__fastcall std::_List_buy<Scaleform::Ptr<Scaleform::Render::ThreadCommand>>::_Buynode<Scaleform::Render::ThreadCommand * &>(
        std::_List_buy<Scaleform::Ptr<Scaleform::Render::ThreadCommand>> *this,
        std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *_Next,
        std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *_Prev,
        Scaleform::Render::ThreadCommand **<_Val_0>)
{
  std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *v5; // rsi
  Scaleform::RefCountVImpl *v6; // rdi

  v5 = std::_List_alloc<std::_List_base_types<std::pair<int const,int>>>::_Buynode0(this, _Next, _Prev);
  if ( v5 != (std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *)-16i64 )
  {
    v6 = (Scaleform::RefCountVImpl *)*<_Val_0>;
    if ( v6 )
      Scaleform::Render::RenderBuffer::AddRef(v6);
    v5->_Myval.pObject = (Scaleform::Render::ThreadCommand *)v6;
  }
  return v5;
}

void __fastcall std::_Destroy_range<std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget>>,Scaleform::Ptr<Scaleform::Render::RenderTarget> *>(
        Scaleform::Ptr<Scaleform::Render::RenderTarget> *_First,
        Scaleform::Ptr<Scaleform::Render::RenderTarget> *_Last,
        std::_Wrap_alloc<std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > *_Al)
{
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *v4; // rbx

  if ( _First != _Last )
  {
    v4 = _First;
    do
    {
      if ( v4->pObject )
        ((void (__fastcall *)(Scaleform::Render::RenderTarget *, Scaleform::Ptr<Scaleform::Render::RenderTarget> *, std::_Wrap_alloc<std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > *))v4->pObject->Release)(
          v4->pObject,
          _Last,
          _Al);
      ++v4;
    }
    while ( v4 != _Last );
  }
}

void __fastcall std::_Uninitialized_default_fill_n1<Scaleform::Ptr<Scaleform::Render::RenderTarget> *,unsigned __int64,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget>>>(
        Scaleform::Ptr<Scaleform::Render::RenderTarget> *_First,
        unsigned __int64 _Count,
        std::_Wrap_alloc<std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > *_Al,
        std::integral_constant<bool,0> __formal)
{
  for ( ; _Count; --_Count )
  {
    if ( _First )
      _First->pObject = 0i64;
    ++_First;
  }
}

Scaleform::Ptr<Scaleform::Render::RenderTarget> *__fastcall std::_Uninitialized_move_al_unchecked1<Scaleform::Ptr<Scaleform::Render::RenderTarget> *,Scaleform::Ptr<Scaleform::Render::RenderTarget> *,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget>>>(
        Scaleform::Ptr<Scaleform::Render::RenderTarget> *_First,
        Scaleform::Ptr<Scaleform::Render::RenderTarget> *_Last,
        Scaleform::Ptr<Scaleform::Render::RenderTarget> *_Dest,
        std::_Wrap_alloc<std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > *_Al)
{
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *v4; // rdi
  __int64 v8; // [rsp+20h] [rbp-28h]

  v8 = -2i64;
  v4 = _Dest;
  while ( _First != _Last )
  {
    if ( v4 )
    {
      if ( _First->pObject )
        ((void (__fastcall *)(Scaleform::Render::RenderTarget *, Scaleform::Ptr<Scaleform::Render::RenderTarget> *, Scaleform::Ptr<Scaleform::Render::RenderTarget> *, std::_Wrap_alloc<std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > *, __int64))_First->pObject->AddRef)(
          _First->pObject,
          _Last,
          _Dest,
          _Al,
          v8);
      v4->pObject = _First->pObject;
    }
    ++v4;
    ++_First;
  }
  return v4;
}

void __fastcall extension::gfxi_detail::CustomRenderCommandQueue::CustomRenderCommandQueue(
        extension::gfxi_detail::CustomRenderCommandQueue *this)
{
  std::_List_alloc<std::_List_base_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand>> > *v2; // rcx

  Scaleform::Render::SingleThreadCommandQueue::SingleThreadCommandQueue(this);
  this->__vftable = (extension::gfxi_detail::CustomRenderCommandQueue_vtbl *)&extension::gfxi_detail::CustomRenderCommandQueue::`vftable';
  this->m_commands._Mypair._Myval2._Myhead = 0i64;
  this->m_commands._Mypair._Myval2._Mysize = 0i64;
  this->m_commands._Mypair._Myval2._Myhead = std::_List_alloc<std::_List_base_types<std::pair<int const,int>>>::_Buynode0(
                                               v2,
                                               0i64,
                                               0i64);
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->m_pushCondition);
  this->m_pushCondition.m_conditionVariable.m_mutex = &this->m_pushCondition.m_mutex;
  InitializeConditionVariable((PCONDITION_VARIABLE)&this->m_pushCondition.m_conditionVariable.m_data);
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->m_commandsMutex);
}

void __fastcall extension::GFXIRenderer::GFXIRenderer(extension::GFXIRenderer *this)
{
  extension::GFXISystem::GFXISystem(&the_instance_6);
  the_instance_6.m_defaultMovieViewport.Height = 1;
  the_instance_6.m_screenRenderTargets._Mypair._Myval2._Myend = 0i64;
  *(_OWORD *)&the_instance_6.m_glm = 0i64;
  *(_OWORD *)&the_instance_6.m_commandQueue._Mypair._Myval2 = 0i64;
  *(_OWORD *)&the_instance_6.m_screenRenderTargets._Mypair._Myval2._Myfirst = 0i64;
  *(_QWORD *)&the_instance_6.m_defaultMovieViewport.BufferWidth = 0i64;
  *(_QWORD *)&the_instance_6.m_defaultMovieViewport.Left = 0i64;
  *(_QWORD *)&the_instance_6.m_defaultMovieViewport.ScissorWidth = 0i64;
  *(_QWORD *)&the_instance_6.m_defaultMovieViewport.ScissorLeft = 0i64;
  the_instance_6.m_defaultMovieViewport.Flags = 0;
  *(_OWORD *)&the_instance_6.m_offscreenRenderTarget.pObject = 0i64;
  the_instance_6.m_defaultMovieViewport.Width = 1;
  the_instance_6.m_defaultMovieViewport.AspectRatio = 1.0;
  the_instance_6.m_defaultMovieViewport.Scale = 1.0;
}

void __fastcall Scaleform::Ptr<Scaleform::GFx::ExternalInterface>::~Ptr<Scaleform::GFx::ExternalInterface>(
        Scaleform::Ptr<Scaleform::Render::ThreadCommand> *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  pObject = (Scaleform::RefCountVImpl *)this->pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
}

void __fastcall Scaleform::Ptr<Scaleform::Render::RenderTarget>::~Ptr<Scaleform::Render::RenderTarget>(
        Scaleform::Ptr<Scaleform::Render::RenderTarget> *this)
{
  Scaleform::Render::RenderTarget *pObject; // rcx

  pObject = this->pObject;
  if ( pObject )
    pObject->Release(pObject);
}

void __fastcall std::unique_ptr<OGLModel>::~unique_ptr<OGLModel>(
        std::unique_ptr<extension::SoundList::LazyMediaSetBuildJob> *this)
{
  extension::SoundList::LazyMediaSetBuildJob *Myval2; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( Myval2 )
    ((void (__fastcall *)(extension::SoundList::LazyMediaSetBuildJob *, __int64))Myval2->~AgIThreadHost)(Myval2, 1i64);
}

void __fastcall extension::GFXIRenderer::~GFXIRenderer(extension::GFXIRenderer *this)
{
  if ( the_instance_6.m_offscreenDepthTarget.pObject )
    the_instance_6.m_offscreenDepthTarget.pObject->Release(the_instance_6.m_offscreenDepthTarget.pObject);
  if ( the_instance_6.m_offscreenRenderTarget.pObject )
    the_instance_6.m_offscreenRenderTarget.pObject->Release(the_instance_6.m_offscreenRenderTarget.pObject);
  std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>>::_Tidy(&the_instance_6.m_screenRenderTargets);
  if ( the_instance_6.m_hal.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)the_instance_6.m_hal.pObject);
  if ( the_instance_6.m_commandQueue._Mypair._Myval2 )
    ((void (__fastcall *)(Scaleform::Render::ThreadCommandQueue *, __int64))the_instance_6.m_commandQueue._Mypair._Myval2->~ThreadCommandQueue)(
      the_instance_6.m_commandQueue._Mypair._Myval2,
      1i64);
  if ( the_instance_6.m_renderMemory._Mypair._Myval2 )
    ((void (__fastcall *)(Scaleform::Render::MemoryManager *, __int64))the_instance_6.m_renderMemory._Mypair._Myval2->~RefCountImplCore)(
      the_instance_6.m_renderMemory._Mypair._Myval2,
      1i64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&extension::GFXISystem::s_initializeCount.Value, -1) == 1 )
  {
    Scaleform::GFx::System::Destroy();
    if ( the_instance_6.m_pAllocator )
    {
      ((void (__fastcall *)(extension::KofSysAlloc *, __int64))the_instance_6.m_pAllocator->~SysAllocBase)(
        the_instance_6.m_pAllocator,
        1i64);
      the_instance_6.m_pAllocator = 0i64;
    }
  }
}

void __fastcall Scaleform::Render::GL::HALInitParams::~HALInitParams(Scaleform::Render::GL::HALInitParams *this)
{
  volatile int *v2; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v4; // rcx

  v2 = (volatile int *)(this->BinaryShaderPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v2 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v2);
  pObject = (Scaleform::RefCountVImpl *)this->pRenderBufferManager.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v4 = (Scaleform::RefCountVImpl *)this->pTextureManager.pObject;
  if ( v4 )
    Scaleform::RefCountImpl::Release(v4);
}

void __fastcall Scaleform::Render::HALInitParams::~HALInitParams(Scaleform::Render::HALInitParams *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v3; // rcx

  pObject = (Scaleform::RefCountVImpl *)this->pRenderBufferManager.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v3 = (Scaleform::RefCountVImpl *)this->pTextureManager.pObject;
  if ( v3 )
    Scaleform::RefCountImpl::Release(v3);
}

void __fastcall Scaleform::Render::SingleThreadCommandQueue::~SingleThreadCommandQueue(
        Scaleform::Render::SingleThreadCommandQueue *this)
{
  this->__vftable = (Scaleform::Render::SingleThreadCommandQueue_vtbl *)&Scaleform::Render::ThreadCommandQueue::`vftable';
}

void __fastcall Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::operator delete(void *p)
{
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, p);
}

void __fastcall Scaleform::Render::RenderBuffer::AddRef(Scaleform::RefCountVImpl *this)
{
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&this->RefCount, 1);
}

void __fastcall extension::gfxi_detail::CustomRenderCommandQueue::ExecCommands(
        extension::gfxi_detail::CustomRenderCommandQueue *this)
{
  AgMutex *p_m_commandsMutex; // rbp
  int v3; // er8
  std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *Next; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v6; // rbx
  std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *v7; // rsi
  Scaleform::RefCountVImpl *v8; // rcx

  p_m_commandsMutex = &this->m_commandsMutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_commandsMutex);
  while ( !this->m_commands._Mypair._Myval2._Mysize )
    AgCondition::wait(&this->m_pushCondition, p_m_commandsMutex, v3);
  do
  {
    Next = this->m_commands._Mypair._Myval2._Myhead->_Next;
    pObject = (Scaleform::RefCountVImpl *)Next->_Myval.pObject;
    if ( pObject )
      Scaleform::Render::RenderBuffer::AddRef(pObject);
    v6 = (Scaleform::RefCountVImpl *)Next->_Myval.pObject;
    v7 = this->m_commands._Mypair._Myval2._Myhead->_Next;
    v7->_Prev->_Next = v7->_Next;
    v7->_Next->_Prev = v7->_Prev;
    --this->m_commands._Mypair._Myval2._Mysize;
    v8 = (Scaleform::RefCountVImpl *)v7->_Myval.pObject;
    if ( v8 )
      Scaleform::RefCountImpl::Release(v8);
    operator delete(v7);
    v6->AddRef(v6);
    Scaleform::RefCountImpl::Release(v6);
  }
  while ( this->m_commands._Mypair._Myval2._Mysize );
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_commandsMutex);
}

void __fastcall Scaleform::Render::ThreadCommandQueue::GetRenderInterfaces(
        Scaleform::Render::ThreadCommandQueue *this,
        Scaleform::Render::Interfaces *p)
{
  p->pTextureManager = 0i64;
  p->pHAL = 0i64;
  p->RenderThreadID = 0;
}

__int64 __fastcall Scaleform::Render::DICommand_Clear::GetType(Scaleform::GFx::AS3::Instances::fl::XMLComment *this)
{
  return 3i64;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

extension::GFXIRenderer *__fastcall extension::GFXIRenderer::Instance()
{
  extension::GFXIRenderer *v0; // rcx

  if ( dword_140ACE020 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&dword_140ACE020);
    if ( dword_140ACE020 == -1 )
    {
      extension::GFXIRenderer::GFXIRenderer(v0);
      atexit((void (__fastcall *)())extension::GFXIRenderer::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
      Init_thread_footer(&dword_140ACE020);
    }
  }
  return &the_instance_6;
}

void __fastcall extension::gfxi_detail::CustomRenderCommandQueue::PushThreadCommand(
        extension::gfxi_detail::CustomRenderCommandQueue *this,
        Scaleform::Render::ThreadCommand *command)
{
  AgMutex *p_m_commandsMutex; // rdi
  std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *Myhead; // rsi
  std::_List_buy<Scaleform::Ptr<Scaleform::Render::ThreadCommand>> *v5; // rcx
  std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *v6; // rax
  Scaleform::Render::ThreadCommand *v7; // [rsp+58h] [rbp+10h] BYREF

  if ( command )
  {
    v7 = command;
    p_m_commandsMutex = &this->m_commandsMutex;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->m_commandsMutex);
    Myhead = this->m_commands._Mypair._Myval2._Myhead;
    v6 = std::_List_buy<Scaleform::Ptr<Scaleform::Render::ThreadCommand>>::_Buynode<Scaleform::Render::ThreadCommand * &>(
           v5,
           Myhead,
           Myhead->_Prev,
           &v7);
    if ( this->m_commands._Mypair._Myval2._Mysize == 0xAAAAAAAAAAAAAA9i64 )
      std::_Xlength_error("list<T> too long");
    ++this->m_commands._Mypair._Myval2._Mysize;
    Myhead->_Prev = v6;
    v6->_Prev->_Next = v6;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->m_pushCondition);
    WakeConditionVariable((PCONDITION_VARIABLE)&this->m_pushCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_pushCondition);
    LeaveCriticalSection((LPCRITICAL_SECTION)p_m_commandsMutex);
  }
}

void __fastcall Scaleform::RefCountImpl::Release(Scaleform::RefCountVImpl *this)
{
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&this->RefCount, -1) == 1 )
  {
    if ( this )
      ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int64))this->~RefCountImplCore)(this, 1i64);
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *__fastcall std::_List_alloc<std::_List_base_types<std::pair<int const,int>>>::_Buynode0(
        std::_List_alloc<std::_List_base_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand>> > *this,
        std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *_Next,
        std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *_Prev)
{
  std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *result; // rax

  result = (std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *)operator new(0x18ui64);
  if ( !_Next )
  {
    _Next = result;
    _Prev = result;
  }
  if ( result )
    result->_Next = _Next;
  if ( result != (std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *)-8i64 )
    result->_Prev = _Prev;
  return result;
}

void __fastcall std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>>::_Reallocate(
        std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > *a4)
{
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *v6; // rdi
  unsigned __int64 v7; // rcx
  Scaleform::Render::RenderTarget *v8; // rax
  std::allocator<AgLogger *> *pObject; // rcx
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *Mylast; // r15
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *Myfirst; // rbx
  __int64 v12; // r12

  if ( _Count )
  {
    if ( _Count > 0x1FFFFFFFFFFFFFFFi64 )
      std::_Xbad_alloc();
    v7 = 8 * _Count;
    if ( 8 * _Count < 0x1000 )
    {
      v6 = (Scaleform::Ptr<Scaleform::Render::RenderTarget> *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = (Scaleform::Render::RenderTarget *)operator new(v7 + 39);
      v6 = (Scaleform::Ptr<Scaleform::Render::RenderTarget> *)(((unsigned __int64)&v8->pRenderTargetData + 7) & 0xFFFFFFFFFFFFFFE0ui64);
      v6[-1].pObject = v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<Scaleform::Ptr<Scaleform::Render::RenderTarget> *,Scaleform::Ptr<Scaleform::Render::RenderTarget> *,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget>>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v6,
    a4);
  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v12 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( ; Myfirst != Mylast; ++Myfirst )
    {
      pObject = (std::allocator<AgLogger *> *)Myfirst->pObject;
      if ( Myfirst->pObject )
        (*(void (__fastcall **)(std::allocator<AgLogger *> *))(*(_QWORD *)pObject + 16i64))(pObject);
    }
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      pObject,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v6[_Count];
  this->_Mypair._Myval2._Mylast = &v6[v12];
  this->_Mypair._Myval2._Myfirst = v6;
}

void __fastcall std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>>::_Tidy(
        std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>> *this)
{
  std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>> *v1; // rsi
  std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>> **Myfirst; // rbx
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *i; // rdi

  v1 = this;
  Myfirst = (std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>> **)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast;
          Myfirst != (std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>> **)i;
          ++Myfirst )
    {
      this = *Myfirst;
      if ( *Myfirst )
        ((void (__fastcall *)(std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>> *))this->_Mypair._Myval2._Myfirst[2].pObject)(this);
    }
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      (AgLogger **)v1->_Mypair._Myval2._Myfirst,
      v1->_Mypair._Myval2._Myend - v1->_Mypair._Myval2._Myfirst);
    v1->_Mypair._Myval2._Myfirst = 0i64;
    v1->_Mypair._Myval2._Mylast = 0i64;
    v1->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall extension::GFXIRenderer::beginScene(extension::GFXIRenderer *this)
{
  Framework::GLManager *m_glm; // r8
  __int64 m_backBufferIndex; // rcx
  unsigned int *p_m_frameBuffer; // rsi
  Scaleform::Render::RenderTarget *pObject; // rdx
  int m_targetWidth; // eax
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  Scaleform::Render::RenderTarget *v12; // rcx
  Scaleform::Render::RenderBufferManager *v13; // rax
  __int64 v14; // rax
  Scaleform::Render::DepthStencilBuffer *v15; // rcx
  Scaleform::Render::DepthStencilBuffer *v16; // rbx
  int v17; // [rsp+30h] [rbp+8h] BYREF
  int m_targetHeight; // [rsp+34h] [rbp+Ch]
  __int64 v19; // [rsp+38h] [rbp+10h]

  m_glm = this->m_glm;
  if ( m_glm )
  {
    m_backBufferIndex = (int)m_glm->m_backBufferIndex;
    p_m_frameBuffer = &m_glm->m_backBuffer->m_frameBuffer;
    if ( &m_glm->m_buffer.m_freeIDs[12 * LOBYTE(m_glm->systemRenderID[m_backBufferIndex]) + 15] == (unsigned __int8 *)p_m_frameBuffer )
    {
      pObject = this->m_screenRenderTargets._Mypair._Myval2._Myfirst[m_backBufferIndex].pObject;
    }
    else
    {
      m_targetWidth = m_glm->m_config.m_targetWidth;
      m_targetHeight = m_glm->m_config.m_targetHeight;
      v17 = m_targetWidth;
      v7 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
             Scaleform::Memory::pGlobalHeap,
             64i64);
      v19 = v7;
      v8 = v7;
      if ( v7 )
      {
        *(_QWORD *)(v7 + 8) = 0i64;
        *(_DWORD *)(v7 + 20) = 2;
        *(_QWORD *)v7 = &Scaleform::RefCountImplCore::`vftable';
        *(_QWORD *)v7 = &Scaleform::Render::RenderBuffer::`vftable';
        *(_DWORD *)(v7 + 8) = 1;
        *(_QWORD *)(v7 + 24) = 0i64;
        *(_QWORD *)(v7 + 32) = 0i64;
        v9 = m_targetHeight;
        *(_DWORD *)(v7 + 40) = v17;
        *(_DWORD *)(v7 + 44) = v9;
        *(_QWORD *)v7 = &Scaleform::Render::RenderTarget::`vftable';
        v10 = m_targetHeight;
        v11 = v17;
        *(_QWORD *)(v8 + 48) = 0i64;
        *(_DWORD *)(v8 + 56) = v11;
        *(_DWORD *)(v8 + 60) = v10;
      }
      else
      {
        v8 = 0i64;
      }
      v12 = this->m_offscreenRenderTarget.pObject;
      if ( (Scaleform::Render::RenderTarget *)v8 != v12 )
      {
        if ( v12 )
          v12->Release(v12);
        this->m_offscreenRenderTarget.pObject = (Scaleform::Render::RenderTarget *)v8;
      }
      v13 = this->m_hal.pObject->GetRenderBufferManager(this->m_hal.pObject);
      v14 = (__int64)v13->CreateDepthStencilBuffer(v13, (const Scaleform::Render::Size<unsigned long> *)&v17, 0);
      v15 = this->m_offscreenDepthTarget.pObject;
      v16 = (Scaleform::Render::DepthStencilBuffer *)v14;
      if ( (Scaleform::Render::DepthStencilBuffer *)v14 != v15 )
      {
        if ( v15 )
          v15->Release(v15);
        this->m_offscreenDepthTarget.pObject = v16;
      }
      Scaleform::Render::GL::RenderTargetData::UpdateData(
        this->m_offscreenRenderTarget.pObject,
        (Scaleform::Render::GL::HAL *)this->m_hal.pObject,
        *p_m_frameBuffer,
        this->m_offscreenDepthTarget.pObject);
      pObject = this->m_offscreenRenderTarget.pObject;
    }
    LOBYTE(m_glm) = 1;
    this->m_hal.pObject->SetRenderTarget(this->m_hal.pObject, pObject, (bool)m_glm);
    glDisable(0x8DB9u);
    this->m_hal.pObject->BeginScene(this->m_hal.pObject);
  }
}

void __fastcall std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>>::clear(
        std::list<Scaleform::Ptr<Scaleform::Render::ThreadCommand>> *this)
{
  std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *Next; // rbx
  std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *v3; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx

  Next = this->_Mypair._Myval2._Myhead->_Next;
  this->_Mypair._Myval2._Myhead->_Next = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Myhead->_Prev = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Mysize = 0i64;
  if ( Next != this->_Mypair._Myval2._Myhead )
  {
    do
    {
      v3 = Next->_Next;
      pObject = (Scaleform::RefCountVImpl *)Next->_Myval.pObject;
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      operator delete(Next);
      Next = v3;
    }
    while ( v3 != this->_Mypair._Myval2._Myhead );
  }
}

void __fastcall std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
        std::allocator<AgLogger *> *this,
        AgLogger **_Ptr,
        unsigned __int64 _Count)
{
  AgLogger **v3; // rax
  char *v4; // rdx

  if ( _Count > 0x1FFFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 8 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = (AgLogger **)*(_Ptr - 1);
    if ( v3 >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)v3);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = v3;
  }
  operator delete(_Ptr);
}

void __fastcall extension::GFXIRenderer::initialize(extension::GFXIRenderer *this)
{
  extension::gfxi_detail::CustomRenderCommandQueue *v2; // rax
  __int64 v3; // rax
  Scaleform::Render::ThreadCommandQueue *v4; // rbx
  Scaleform::Render::GL::HAL *v5; // rax
  Scaleform::RefCountVImpl *v6; // rdi
  Scaleform::Render::GL::HAL *v7; // rax
  Scaleform::Render::GL::HAL *v8; // r14
  Scaleform::Render::ThreadCommandQueue *Myval2; // rcx
  const Scaleform::String *v10; // rax
  void *v11; // rbx
  void *v12; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Framework::GLManager *m_glm; // rdx
  int m_targetHeight; // ecx
  signed __int64 m_buffers; // rbx
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *Myfirst; // r12
  Scaleform::Render::RenderTarget *v25; // rcx
  __int64 v26; // rax
  Scaleform::Render::DepthStencilBuffer *v27; // rax
  Scaleform::GFx::Viewport *p_m_defaultMovieViewport; // rbx
  int v29; // ecx
  int v30; // eax
  __int64 *v31; // rax
  __int64 v32; // rsi
  extension::GFXIFontManager *v33; // rcx
  extension::GFXILoader *v34; // rcx
  Scaleform::GFx::ImageFileHandlerRegistry *v35; // rax
  Scaleform::RefCountVImpl *v36; // rax
  extension::GFXILoader *v37; // rax
  Scaleform::Render::TextureManager *v38; // rax
  extension::GFXILoader *v39; // rax
  Scaleform::RefCountVImpl *v40; // rbx
  Scaleform::String v41; // [rsp+20h] [rbp-99h] BYREF
  __int64 v42; // [rsp+28h] [rbp-91h]
  Scaleform::Ptr<Scaleform::GFx::ImageCreator> result; // [rsp+30h] [rbp-89h] BYREF
  __int64 v44[2]; // [rsp+38h] [rbp-81h] BYREF
  Scaleform::RefCountVImpl *v45; // [rsp+48h] [rbp-71h]
  Scaleform::RefCountVImpl *v46; // [rsp+50h] [rbp-69h]
  int v47; // [rsp+58h] [rbp-61h]
  Scaleform::String v48; // [rsp+60h] [rbp-59h] BYREF
  Scaleform::Render::GlyphCacheParams params; // [rsp+68h] [rbp-51h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-19h]
  __int64 v51; // [rsp+A8h] [rbp-11h]
  Scaleform::Render::GL::HAL *v52; // [rsp+B0h] [rbp-9h]
  Scaleform::RefCountVImpl *v53; // [rsp+C0h] [rbp+7h]
  unsigned int fboID; // [rsp+120h] [rbp+67h]
  int m_targetWidth; // [rsp+128h] [rbp+6Fh] BYREF
  int v56; // [rsp+12Ch] [rbp+73h]
  __int64 v57; // [rsp+130h] [rbp+77h]
  __int64 v58; // [rsp+138h] [rbp+7Fh]

  v50 = -2i64;
  if ( !this->m_glm )
  {
    this->m_glm = Framework::GLManager::glm;
    v2 = (extension::gfxi_detail::CustomRenderCommandQueue *)operator new(0x80ui64);
    extension::gfxi_detail::CustomRenderCommandQueue::CustomRenderCommandQueue(v2);
    v4 = (Scaleform::Render::ThreadCommandQueue *)v3;
    v51 = v3;
    v58 = v3;
    v5 = (Scaleform::Render::GL::HAL *)Scaleform::Memory::pGlobalHeap->Alloc(
                                         Scaleform::Memory::pGlobalHeap,
                                         832848i64,
                                         0i64);
    v6 = 0i64;
    if ( v5 )
    {
      Scaleform::Render::GL::HAL::HAL(v5, v4);
      v8 = v7;
    }
    else
    {
      v8 = 0i64;
    }
    v52 = v8;
    v4[1].__vftable = (Scaleform::Render::ThreadCommandQueue_vtbl *)v8;
    v58 = 0i64;
    Myval2 = this->m_commandQueue._Mypair._Myval2;
    this->m_commandQueue._Mypair._Myval2 = v4;
    if ( Myval2 )
      ((void (__fastcall *)(Scaleform::Render::ThreadCommandQueue *, __int64))Myval2->~ThreadCommandQueue)(Myval2, 1i64);
    params = *Scaleform::Render::HAL::GetGlyphCacheParams(v8);
    params.MaxSlotHeight = 48;
    LODWORD(params.MaxRasterScale) = FLOAT_1_0;
    params.MaxVectorCacheSize = 1024;
    params.TextureWidth = 4096;
    params.TextureHeight = 4096;
    params.UseVectorOnFullCache = 0;
    Scaleform::Render::HAL::SetGlyphCacheParams(v8, &params);
    Scaleform::String::String(&v41);
    v44[0] = 0i64;
    v44[1] = 0i64;
    v45 = 0i64;
    v46 = 0i64;
    v47 = 256;
    Scaleform::String::String(&v48, v10);
    v8->InitHAL(v8, (const Scaleform::Render::HALInitParams *)v44);
    v11 = (void *)(v48.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v48.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v11);
    if ( v46 )
      Scaleform::RefCountImpl::Release(v46);
    if ( v45 )
      Scaleform::RefCountImpl::Release(v45);
    v12 = (void *)(v41.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v41.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v12);
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v8);
    pObject = (Scaleform::RefCountVImpl *)this->m_hal.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->m_hal.pObject = v8;
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v8);
    if ( extension::m_glhal.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)extension::m_glhal.pObject);
    extension::m_glhal.pObject = v8;
    m_glm = this->m_glm;
    m_targetHeight = m_glm->m_config.m_targetHeight;
    m_targetWidth = m_glm->m_config.m_targetWidth;
    v56 = m_targetHeight;
    m_buffers = (int)m_glm->m_config.m_buffers;
    v42 = m_buffers;
    std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>>::resize(&this->m_screenRenderTargets, m_buffers);
    if ( m_buffers > 0 )
    {
      v17 = 0i64;
      v18 = 96i64;
      v57 = 96i64;
      do
      {
        fboID = *(_DWORD *)&this->m_glm->m_buffer.m_freeIDs[12 * *((unsigned __int8 *)&this->m_glm->__vftable + v18)
                                                          + 15];
        v19 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                Scaleform::Memory::pGlobalHeap,
                64i64);
        v20 = v19;
        if ( v19 )
        {
          *(_QWORD *)(v19 + 8) = 0i64;
          *(_QWORD *)v19 = &Scaleform::RefCountImplCore::`vftable';
          *(_DWORD *)(v19 + 8) = 1;
          *(_QWORD *)v19 = &Scaleform::Render::RenderBuffer::`vftable';
          *(_DWORD *)(v19 + 20) = 1;
          *(_QWORD *)(v19 + 24) = 0i64;
          *(_QWORD *)(v19 + 32) = 0i64;
          v21 = v56;
          *(_DWORD *)(v19 + 40) = m_targetWidth;
          *(_DWORD *)(v19 + 44) = v21;
          *(_QWORD *)v19 = &Scaleform::Render::RenderTarget::`vftable';
          v22 = v56;
          v23 = m_targetWidth;
          *(_QWORD *)(v20 + 48) = 0i64;
          *(_DWORD *)(v20 + 56) = v23;
          *(_DWORD *)(v20 + 60) = v22;
        }
        else
        {
          v20 = 0i64;
        }
        Myfirst = this->m_screenRenderTargets._Mypair._Myval2._Myfirst;
        v25 = Myfirst[v17].pObject;
        if ( (Scaleform::Render::RenderTarget *)v20 != v25 )
        {
          if ( v25 )
            v25->Release(v25);
          Myfirst[v17].pObject = (Scaleform::Render::RenderTarget *)v20;
        }
        v26 = (__int64)v8->GetRenderBufferManager(v8);
        v27 = (Scaleform::Render::DepthStencilBuffer *)(*(__int64 (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)v26 + 56i64))(
                                                         v26,
                                                         &m_targetWidth,
                                                         0i64);
        Scaleform::Render::GL::RenderTargetData::UpdateData(
          this->m_screenRenderTargets._Mypair._Myval2._Myfirst[v17++].pObject,
          v8,
          fboID,
          v27);
        v18 = v57 + 4;
        v57 += 4i64;
      }
      while ( v17 < v42 );
    }
    p_m_defaultMovieViewport = &this->m_defaultMovieViewport;
    v29 = m_targetWidth;
    this->m_defaultMovieViewport.BufferWidth = m_targetWidth;
    v30 = v56;
    this->m_defaultMovieViewport.BufferHeight = v56;
    this->m_defaultMovieViewport.Width = v29;
    this->m_defaultMovieViewport.Height = v30;
    v31 = (__int64 *)NtCurrentTeb()->Reserved1[11];
    v32 = *v31;
    if ( dword_140ACDDE8 > *(_DWORD *)(*v31 + 40) )
    {
      Init_thread_header(&dword_140ACDDE8);
      if ( dword_140ACDDE8 == -1 )
      {
        extension::GFXIFontManager::GFXIFontManager(v33);
        atexit((void (__fastcall *)())extension::GFXIFontManager::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
        Init_thread_footer(&dword_140ACDDE8);
      }
    }
    Scaleform::GFx::DrawTextManager::SetViewport(the_instance_3.m_drawTextManager.pObject, p_m_defaultMovieViewport);
    if ( dword_140ACDF70 > *(_DWORD *)(v32 + 40) )
    {
      Init_thread_header(&dword_140ACDF70);
      if ( dword_140ACDF70 == -1 )
      {
        extension::GFXILoader::GFXILoader(v34);
        atexit((void (__fastcall *)())extension::GFXILoader::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
        Init_thread_footer(&dword_140ACDF70);
      }
    }
    if ( the_instance_5.m_loader._Mypair._Myval2 )
    {
      v35 = (Scaleform::GFx::ImageFileHandlerRegistry *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                          Scaleform::Memory::pGlobalHeap,
                                                          56i64);
      if ( v35 )
      {
        Scaleform::GFx::ImageFileHandlerRegistry::ImageFileHandlerRegistry(
          v35,
          (Scaleform::GFx::ImageFileHandlerRegistry::InitType)1);
        v6 = v36;
      }
      v53 = v6;
      v37 = extension::GFXILoader::Instance();
      v37->m_loader._Mypair._Myval2->SetState(
        v37->m_loader._Mypair._Myval2,
        State_Type_Count|State_MaskNode,
        (Scaleform::GFx::State *)v6);
      v38 = v8->GetTextureManager(v8);
      extension::gfxi_detail::CustomImageCreator::Create(&result, v38);
      v39 = extension::GFXILoader::Instance();
      v40 = (Scaleform::RefCountVImpl *)result.pObject;
      v39->m_loader._Mypair._Myval2->SetState(
        v39->m_loader._Mypair._Myval2,
        State_OrigNodeBounds|State_MaskNode,
        result.pObject);
      if ( v40 )
        Scaleform::RefCountImpl::Release(v40);
      if ( v6 )
        Scaleform::RefCountImpl::Release(v6);
    }
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v8);
  }
}

void __fastcall extension::GFXIRenderer::onResize(extension::GFXIRenderer *this)
{
  Framework::GLManager *v2; // r8
  int m_targetHeight; // edx
  unsigned __int64 m_buffers; // rbp
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *Mylast; // rsi
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *i; // rbx
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r15
  unsigned int v10; // er13
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *v16; // rsi
  Scaleform::Render::RenderTarget *pObject; // rcx
  Scaleform::Render::RenderBufferManager *v18; // rax
  Scaleform::Render::DepthStencilBuffer *v19; // rax
  int v20; // ecx
  int v21; // eax
  extension::GFXIFontManager *v22; // rcx
  int m_targetWidth; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+74h] [rbp+Ch]

  if ( this->m_glm )
  {
    v2 = Framework::GLManager::glm;
    this->m_glm = Framework::GLManager::glm;
    m_targetHeight = v2->m_config.m_targetHeight;
    m_targetWidth = v2->m_config.m_targetWidth;
    v24 = m_targetHeight;
    m_buffers = (int)v2->m_config.m_buffers;
    Mylast = this->m_screenRenderTargets._Mypair._Myval2._Mylast;
    for ( i = this->m_screenRenderTargets._Mypair._Myval2._Myfirst; i != Mylast; ++i )
    {
      if ( i->pObject )
        i->pObject->Release(i->pObject);
    }
    this->m_screenRenderTargets._Mypair._Myval2._Mylast = this->m_screenRenderTargets._Mypair._Myval2._Myfirst;
    v7 = m_buffers;
    std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>>::resize(&this->m_screenRenderTargets, m_buffers);
    v8 = 0i64;
    if ( v7 > 0 )
    {
      v9 = 96i64;
      do
      {
        v10 = *(_DWORD *)&this->m_glm->m_buffer.m_freeIDs[12 * *((unsigned __int8 *)&this->m_glm->__vftable + v9) + 15];
        v11 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                Scaleform::Memory::pGlobalHeap,
                64i64);
        v12 = v11;
        if ( v11 )
        {
          *(_QWORD *)(v11 + 8) = 0i64;
          *(_QWORD *)v11 = &Scaleform::RefCountImplCore::`vftable';
          *(_DWORD *)(v11 + 8) = 1;
          *(_QWORD *)v11 = &Scaleform::Render::RenderBuffer::`vftable';
          *(_DWORD *)(v11 + 20) = 1;
          *(_QWORD *)(v11 + 24) = 0i64;
          *(_QWORD *)(v11 + 32) = 0i64;
          v13 = v24;
          *(_DWORD *)(v11 + 40) = m_targetWidth;
          *(_DWORD *)(v11 + 44) = v13;
          *(_QWORD *)v11 = &Scaleform::Render::RenderTarget::`vftable';
          v14 = v24;
          v15 = m_targetWidth;
          *(_QWORD *)(v12 + 48) = 0i64;
          *(_DWORD *)(v12 + 56) = v15;
          *(_DWORD *)(v12 + 60) = v14;
        }
        else
        {
          v12 = 0i64;
        }
        v16 = &this->m_screenRenderTargets._Mypair._Myval2._Myfirst[v8];
        pObject = v16->pObject;
        if ( (Scaleform::Render::RenderTarget *)v12 != v16->pObject )
        {
          if ( pObject )
            pObject->Release(pObject);
          v16->pObject = (Scaleform::Render::RenderTarget *)v12;
        }
        v18 = this->m_hal.pObject->GetRenderBufferManager(this->m_hal.pObject);
        v19 = v18->CreateDepthStencilBuffer(v18, (const Scaleform::Render::Size<unsigned long> *)&m_targetWidth, 0);
        Scaleform::Render::GL::RenderTargetData::UpdateData(
          this->m_screenRenderTargets._Mypair._Myval2._Myfirst[v8++].pObject,
          (Scaleform::Render::GL::HAL *)this->m_hal.pObject,
          v10,
          v19);
        v9 += 4i64;
      }
      while ( v8 < v7 );
    }
    v20 = m_targetWidth;
    this->m_defaultMovieViewport.BufferWidth = m_targetWidth;
    v21 = v24;
    this->m_defaultMovieViewport.BufferHeight = v24;
    this->m_defaultMovieViewport.Width = v20;
    this->m_defaultMovieViewport.Height = v21;
    if ( dword_140ACDDE8 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
    {
      Init_thread_header(&dword_140ACDDE8);
      if ( dword_140ACDDE8 == -1 )
      {
        extension::GFXIFontManager::GFXIFontManager(v22);
        atexit((void (__fastcall *)())extension::GFXIFontManager::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
        Init_thread_footer(&dword_140ACDDE8);
      }
    }
    Scaleform::GFx::DrawTextManager::SetViewport(
      the_instance_3.m_drawTextManager.pObject,
      &this->m_defaultMovieViewport);
  }
}

void __fastcall std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>>::resize(
        std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>> *this,
        unsigned __int64 _Newsize,
        __int64 a3,
        std::integral_constant<bool,0> a4)
{
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *Mylast; // rsi
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *Myfirst; // r10
  unsigned __int64 v8; // rcx
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *v9; // r14
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *i; // rbx
  unsigned __int64 v11; // rdx
  Scaleform::Ptr<Scaleform::Render::RenderTarget> *Myend; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  std::_Wrap_alloc<std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > *v15; // r9
  unsigned __int64 v16; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v8 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( _Newsize >= v8 )
  {
    if ( v8 < _Newsize )
    {
      v11 = _Newsize - v8;
      Myend = this->_Mypair._Myval2._Myend;
      if ( Myend - Mylast < v11 )
      {
        if ( 0x1FFFFFFFFFFFFFFFi64 - v8 < v11 )
          std::_Xlength_error("vector<T> too long");
        v13 = v8 + v11;
        v14 = Myend - Myfirst;
        v15 = (std::_Wrap_alloc<std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > *)(0x1FFFFFFFFFFFFFFFi64 - (v14 >> 1));
        v16 = 0i64;
        if ( (unsigned __int64)v15 >= v14 )
          v16 = v14 + (v14 >> 1);
        if ( v16 >= v13 )
          v13 = v16;
        std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>>::_Reallocate(this, v13, v14, v15);
      }
      std::_Uninitialized_default_fill_n1<Scaleform::Ptr<Scaleform::Render::RenderTarget> *,unsigned __int64,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget>>>(
        this->_Mypair._Myval2._Mylast,
        _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst),
        (std::_Wrap_alloc<std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > *)Myend,
        a4);
      this->_Mypair._Myval2._Mylast += _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
    }
  }
  else
  {
    v9 = &Mylast[_Newsize - v8];
    for ( i = v9; i != Mylast; ++i )
    {
      if ( i->pObject )
        i->pObject->Release(i->pObject);
    }
    this->_Mypair._Myval2._Mylast = v9;
  }
}

void __fastcall extension::GFXIRenderer::useOffscreenRenderTarget(
        extension::GFXIRenderer *this,
        int fbo,
        int width,
        int height)
{
  __int64 v7; // rax
  Scaleform::Render::RenderTarget *v8; // rbx

  v7 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
         Scaleform::Memory::pGlobalHeap,
         64i64);
  v8 = (Scaleform::Render::RenderTarget *)v7;
  if ( v7 )
  {
    *(_QWORD *)(v7 + 8) = 0i64;
    *(_QWORD *)v7 = &Scaleform::RefCountImplCore::`vftable';
    *(_DWORD *)(v7 + 8) = 1;
    *(_DWORD *)(v7 + 20) = 1;
    *(_QWORD *)(v7 + 24) = 0i64;
    *(_QWORD *)(v7 + 32) = 0i64;
    *(_DWORD *)(v7 + 40) = 2048;
    *(_DWORD *)(v7 + 44) = height;
    *(_QWORD *)v7 = &Scaleform::Render::RenderTarget::`vftable';
    *(_QWORD *)(v7 + 48) = 0i64;
    *(_DWORD *)(v7 + 56) = 2048;
    *(_DWORD *)(v7 + 60) = height;
  }
  else
  {
    v8 = 0i64;
  }
  Scaleform::Render::GL::RenderTargetData::UpdateData(v8, extension::m_glhal.pObject, fbo, 0i64);
  this->m_hal.pObject->SetRenderTarget(this->m_hal.pObject, v8, 0);
  if ( v8 )
    v8->Release(v8);
}

