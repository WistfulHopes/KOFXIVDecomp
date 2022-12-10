#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_fontman.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_drawtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"

class extension::gfxi_detail::CustomDrawTextManager :
	Scaleform::GFx::DrawTextManager
{
private:
	CustomDrawTextManager();
	CustomDrawTextManager(const extension::gfxi_detail::CustomDrawTextManager &);
	extension::gfxi_detail::CustomDrawTextManager & operator=(const extension::gfxi_detail::CustomDrawTextManager &);
public:
	static Scaleform::GFx::DrawTextManager * Create();
	struct TextParamsEx;
	static Scaleform::Render::Text::DocView & SetExtraParams(Scaleform::Render::Text::DocView &, const extension::gfxi_detail::CustomDrawTextManager::TextParamsEx &);
	static bool IsDefaultLineSpacing(float);
	Scaleform::Render::Size<float> GetTextExtent(const Scaleform::String &, float, const extension::gfxi_detail::CustomDrawTextManager::TextParamsEx &);
	Scaleform::Render::Size<float> GetHtmlTextExtent(const Scaleform::String &, float, const extension::gfxi_detail::CustomDrawTextManager::TextParamsEx &);
private:
	static void InitExtraValues(extension::gfxi_detail::CustomDrawTextManager::TextParamsEx &);
public:
	virtual ~CustomDrawTextManager();
};
struct extension::gfxi_detail::CustomDrawTextManager::TextParamsEx :
	Scaleform::GFx::DrawTextManager::TextParams
{
	float LineSpacing; // 0x28
	TextParamsEx(extension::gfxi_detail::CustomDrawTextManager::TextParamsEx &);
	TextParamsEx(const extension::gfxi_detail::CustomDrawTextManager::TextParamsEx &);
	TextParamsEx(const Scaleform::GFx::DrawTextManager::TextParams &);
	TextParamsEx();
	bool isDefaultLineSpacing();
	~TextParamsEx();
	extension::gfxi_detail::CustomDrawTextManager::TextParamsEx & operator=(extension::gfxi_detail::CustomDrawTextManager::TextParamsEx &);
	extension::gfxi_detail::CustomDrawTextManager::TextParamsEx & operator=(const extension::gfxi_detail::CustomDrawTextManager::TextParamsEx &);
};
extension::gfxi_detail::RefleshableTextNode extension::gfxi_detail::s_refleshableListEnd; // 0x140A5FD78
void(*extension::gfxi_detail::s_refleshableListEnd$initializer$)(); // 0x1407408A0
std::piecewise_construct_t std::piecewise_construct; // 0x1408AED18
extension::gfxi_detail::CustomDrawTextManager::CustomDrawTextManager(); // 0x140272BF0
Scaleform::Render::Text::DocView & extension::gfxi_detail::CustomDrawTextManager::SetExtraParams(Scaleform::Render::Text::DocView & target, const extension::gfxi_detail::CustomDrawTextManager::TextParamsEx & txtParamsEx); // 0x140272D60
Scaleform::Render::Size<float> extension::gfxi_detail::CustomDrawTextManager::GetTextExtent(const Scaleform::String & str, float width, const extension::gfxi_detail::CustomDrawTextManager::TextParamsEx & txtParamsEx); // 0x140272E90
Scaleform::Render::Size<float> extension::gfxi_detail::CustomDrawTextManager::GetHtmlTextExtent(const Scaleform::String & str, float width, const extension::gfxi_detail::CustomDrawTextManager::TextParamsEx & txtParamsEx); // 0x140273060
class extension::RefCountable<extension::gfxi_detail::TextProxy>
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::gfxi_detail::TextProxy>(const extension::RefCountable<extension::gfxi_detail::TextProxy> &);
public:
	RefCountable<extension::gfxi_detail::TextProxy>();
protected:
	extension::RefCountable<extension::gfxi_detail::TextProxy> & operator=(const extension::RefCountable<extension::gfxi_detail::TextProxy> &);
	~RefCountable<extension::gfxi_detail::TextProxy>();
};
class extension::gfxi_detail::TextProxy :
	extension::RefCountable<extension::gfxi_detail::TextProxy>,
	extension::gfxi_detail::RefleshableTextNode
{
private:
	extension::gfxi_detail::TextProxy & operator=(const extension::gfxi_detail::TextProxy &);
	struct GTextParams;
	class GDrawText;
	class GPointF;
	class GSizeF;
	class GRectF;
	class GMatrix;
	class GString;
	struct FilterParams;
	extension::gfxi_detail::CustomDrawTextManager::TextParamsEx m_textParams; // 0x18
	bool m_isVisible; // 0x48
	float m_recommendWidth; // 0x4C
	Scaleform::Render::Point<float> m_position; // 0x50
	Scaleform::Render::Size<float> m_size; // 0x58
	Scaleform::Render::Point<float> m_pivot; // 0x60
	unsigned long m_bgColor; // 0x68
	extension::GFXIText::FilterParams m_filterParams; // 0x6C
	Scaleform::String m_str; // 0x90
	Scaleform::String m_htmlStr; // 0x98
	Scaleform::Ptr<Scaleform::GFx::DrawText> m_gtext; // 0xA0
	static extension::gfxi_detail::CustomDrawTextManager & GetManager();
	static extension::gfxi_detail::CustomDrawTextManager::TextParamsEx GetInitialTextParams(unsigned long);
	Scaleform::Render::Rect<float> makeTextRect();
	void applyTextRect(Scaleform::GFx::DrawText &);
	void applyTextMatrix(Scaleform::GFx::DrawText &);
	void applyExtraParams(Scaleform::GFx::DrawText &);
	void applyFilters(Scaleform::GFx::DrawText &);
public:
	TextProxy(const extension::gfxi_detail::TextProxy &);
	TextProxy(unsigned long);
	~TextProxy();
	void setIsRefleshable(bool);
	bool isVisible();
	void setVisible(bool);
	float recommendWidth();
	void setRecommendWidth(float);
	Scaleform::Render::Point<float> position();
	void setPosition(const Scaleform::Render::Point<float> &);
	Scaleform::Render::Size<float> size();
	Scaleform::Render::Point<float> pivot();
	void setPivot(const Scaleform::Render::Point<float> &);
	unsigned long textColor();
	void setTextColor(unsigned long);
	unsigned long bgColor();
	void setBgColor(unsigned long);
	const extension::GFXIText::FilterParams & filterParams();
	void setFilterParams(const extension::GFXIText::FilterParams &);
	Scaleform::GFx::DrawText::Alignment hAlign();
	void setHAlign(Scaleform::GFx::DrawText::Alignment);
	Scaleform::GFx::DrawText::VAlignment vAlign();
	void setVAlign(Scaleform::GFx::DrawText::VAlignment);
	bool isEmpty();
	const Scaleform::String & str();
	void setStr(const Scaleform::String &);
	const Scaleform::String & htmlStr();
	void setHtmlStr(const Scaleform::String &);
	const char * fontName();
	void setFontName(const char *);
	float fontSize();
	void setFontSize(float);
	float lineSpacing();
	bool isDefaultLineSpacing();
	static bool IsDefaultLineSpacing(float);
	bool isLineSpaceChanging(float);
	void setLineSpacing(float);
};
class Scaleform::Ptr<Scaleform::GFx::DrawText>
{
protected:
	Scaleform::GFx::DrawText * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::DrawText>(const Scaleform::Ptr<Scaleform::GFx::DrawText> &);
	Ptr<Scaleform::GFx::DrawText>(Scaleform::GFx::DrawText *);
	Ptr<Scaleform::GFx::DrawText>(Scaleform::Ptr<Scaleform::GFx::DrawText> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::DrawText>(Scaleform::Pickable<Scaleform::GFx::DrawText>);
	Ptr<Scaleform::GFx::DrawText>(Scaleform::GFx::DrawText &);
	Ptr<Scaleform::GFx::DrawText>();
	~Ptr<Scaleform::GFx::DrawText>();
	bool operator==(Scaleform::GFx::DrawText *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::DrawText> &);
	bool operator!=(Scaleform::GFx::DrawText *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::DrawText> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::DrawText> &);
	Scaleform::Ptr<Scaleform::GFx::DrawText> & operator=(Scaleform::Pickable<Scaleform::GFx::DrawText>);
	const Scaleform::Ptr<Scaleform::GFx::DrawText> & operator=(Scaleform::GFx::DrawText &);
	const Scaleform::Ptr<Scaleform::GFx::DrawText> & operator=(Scaleform::GFx::DrawText *);
	const Scaleform::Ptr<Scaleform::GFx::DrawText> & operator=(const Scaleform::Ptr<Scaleform::GFx::DrawText> &);
	Scaleform::Ptr<Scaleform::GFx::DrawText> & SetPtr(Scaleform::Pickable<Scaleform::GFx::DrawText>);
	Scaleform::Ptr<Scaleform::GFx::DrawText> & SetPtr(Scaleform::GFx::DrawText &);
	Scaleform::Ptr<Scaleform::GFx::DrawText> & SetPtr(Scaleform::GFx::DrawText *);
	Scaleform::Ptr<Scaleform::GFx::DrawText> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::DrawText> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::DrawText * & GetRawRef();
	Scaleform::GFx::DrawText * GetPtr();
	Scaleform::GFx::DrawText & operator*();
	Scaleform::GFx::DrawText * operator->();
	Scaleform::GFx::DrawText * operator class Scaleform::GFx::DrawText *();
	Scaleform::Ptr<Scaleform::GFx::DrawText> & Pick(Scaleform::GFx::DrawText *);
	Scaleform::Ptr<Scaleform::GFx::DrawText> & Pick(Scaleform::Pickable<Scaleform::GFx::DrawText>);
	Scaleform::Ptr<Scaleform::GFx::DrawText> & Pick(Scaleform::Ptr<Scaleform::GFx::DrawText> &);
};
extension::gfxi_detail::TextProxy::TextProxy(unsigned long argb); // 0x140273270
extension::gfxi_detail::TextProxy::TextProxy(const extension::gfxi_detail::TextProxy & o); // 0x140273330
extension::gfxi_detail::TextProxy::~TextProxy(); // 0x1402734A0
bool extension::gfxi_detail::TextProxy::isDefaultLineSpacing(); // 0x1402735A0
bool extension::gfxi_detail::TextProxy::isLineSpaceChanging(float rate); // 0x140273600
extension::gfxi_detail::CustomDrawTextManager::TextParamsEx extension::gfxi_detail::TextProxy::GetInitialTextParams(unsigned long argb); // 0x1402736C0
Scaleform::Render::Rect<float> extension::gfxi_detail::TextProxy::makeTextRect(); // 0x140273740
void extension::gfxi_detail::TextProxy::applyTextRect(Scaleform::GFx::DrawText & target); // 0x1402737E0
void extension::gfxi_detail::TextProxy::applyTextMatrix(Scaleform::GFx::DrawText & target); // 0x1402738C0
void extension::gfxi_detail::TextProxy::applyFilters(Scaleform::GFx::DrawText & target); // 0x140273940
void extension::gfxi_detail::TextProxy::setStr(const Scaleform::String & s); // 0x140273A60
void extension::gfxi_detail::TextProxy::setHtmlStr(const Scaleform::String & s); // 0x140273CA0
void extension::gfxi_detail::TextProxy::setFontName(const char * fontName); // 0x140273EF0
void extension::gfxi_detail::TextProxy::setFontSize(float fs); // 0x140273FB0
void extension::gfxi_detail::TextProxy::setLineSpacing(float rate); // 0x140274070
extension::GFXIText::~GFXIText(); // 0x140274150
extension::gfxi_detail::RefleshableTextNode::~RefleshableTextNode(); // 0x140273250
Scaleform::GFx::DrawTextManager::TextParams::~TextParams(); // 0x140272BB0
extension::gfxi_detail::TextProxy & extension::GFXIText::cloneIfShared(); // 0x1402741A0
void extension::GFXIText::setHAlign(extension::GFXIText::HAlignment ha); // 0x140274220
void extension::GFXIText::setFilterParams(const extension::GFXIText::FilterParams & fp); // 0x140274280
void extension::GFXIText::setIsRefleshable(bool flgRefleshable); // 0x140274340//decompilation failure at 140A5FD78!
//decompilation failure at 1407408A0!
//decompilation failure at 1408AED18!
void __fastcall extension::gfxi_detail::CustomDrawTextManager::CustomDrawTextManager(
        extension::gfxi_detail::CustomDrawTextManager *this)
{
  extension::GFXILoader *v2; // rax
  const Scaleform::GFx::DrawTextManager::TextParams *DefaultTextParams; // rbx
  void *v4; // rbx
  Scaleform::GFx::DrawTextManager::TextParams params; // [rsp+28h] [rbp-30h] BYREF

  v2 = extension::GFXILoader::Instance();
  Scaleform::GFx::DrawTextManager::DrawTextManager(this, v2->m_loader._Mypair._Myval2);
  this->Scaleform::GFx::DrawTextManager::Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2>::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (extension::gfxi_detail::CustomDrawTextManager_vtbl *)&extension::gfxi_detail::CustomDrawTextManager::`vftable'{for `Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2>'};
  this->Scaleform::GFx::DrawTextManager::Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&extension::gfxi_detail::CustomDrawTextManager::`vftable'{for `Scaleform::GFx::StateBag'};
  DefaultTextParams = Scaleform::GFx::DrawTextManager::GetDefaultTextParams(this);
  params.TextColor.Raw = DefaultTextParams->TextColor.Raw;
  params.HAlignment = DefaultTextParams->HAlignment;
  params.VAlignment = DefaultTextParams->VAlignment;
  params.FontStyle = DefaultTextParams->FontStyle;
  params.FontSize = DefaultTextParams->FontSize;
  Scaleform::String::String(&params.FontName, &DefaultTextParams->FontName);
  params.Underline = DefaultTextParams->Underline;
  params.Multiline = DefaultTextParams->Multiline;
  params.WordWrap = DefaultTextParams->WordWrap;
  params.TextColor.Raw = -1;
  Scaleform::String::operator=(&params.FontName, "$DeviceFont");
  *(_WORD *)&params.Multiline = 1;
  params.FontSize = FLOAT_24_0;
  Scaleform::GFx::DrawTextManager::SetDefaultTextParams(this, &params);
  v4 = (void *)(params.FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((params.FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v4);
}

void __fastcall Scaleform::Render::Text::ParagraphFormat::ParagraphFormat(
        Scaleform::Render::Text::ParagraphFormat *this,
        const Scaleform::Render::Text::ParagraphFormat *src,
        Scaleform::Render::Text::Allocator *allocator)
{
  this->pAllocator = allocator;
  this->RefCount = 1;
  this->pTabStops = 0i64;
  this->BlockIndent = src->BlockIndent;
  this->Indent = src->Indent;
  this->Leading = src->Leading;
  this->LeftMargin = src->LeftMargin;
  this->RightMargin = src->RightMargin;
  this->PresentMask = src->PresentMask;
  Scaleform::Render::Text::ParagraphFormat::CopyTabStops(this, src->pTabStops);
}

void __fastcall extension::gfxi_detail::TextProxy::TextProxy(
        extension::gfxi_detail::TextProxy *this,
        const extension::gfxi_detail::TextProxy *o)
{
  extension::gfxi_detail::CustomDrawTextManager::TextParamsEx *p_m_textParams; // rbx
  float y; // xmm0_4
  float Height; // xmm0_4
  float v7; // xmm0_4

  this->m_refCount.m_value._My_val = 1i64;
  this->m_Prev = &this->extension::gfxi_detail::RefleshableTextNode;
  this->m_Next = &this->extension::gfxi_detail::RefleshableTextNode;
  p_m_textParams = &this->m_textParams;
  this->m_textParams.TextColor.Raw = o->m_textParams.TextColor.Raw;
  this->m_textParams.HAlignment = o->m_textParams.HAlignment;
  this->m_textParams.VAlignment = o->m_textParams.VAlignment;
  this->m_textParams.FontStyle = o->m_textParams.FontStyle;
  this->m_textParams.FontSize = o->m_textParams.FontSize;
  Scaleform::String::String(&this->m_textParams.FontName, &o->m_textParams.FontName);
  p_m_textParams->Underline = o->m_textParams.Underline;
  p_m_textParams->Multiline = o->m_textParams.Multiline;
  p_m_textParams->WordWrap = o->m_textParams.WordWrap;
  p_m_textParams->LineSpacing = o->m_textParams.LineSpacing;
  this->m_isVisible = o->m_isVisible;
  this->m_recommendWidth = o->m_recommendWidth;
  y = o->m_position.y;
  this->m_position.x = o->m_position.x;
  this->m_position.y = y;
  Height = o->m_size.Height;
  this->m_size.Width = o->m_size.Width;
  this->m_size.Height = Height;
  v7 = o->m_pivot.y;
  this->m_pivot.x = o->m_pivot.x;
  this->m_pivot.y = v7;
  this->m_bgColor = o->m_bgColor;
  *(_QWORD *)&this->m_filterParams.BlurStrength = 1065353216i64;
  this->m_filterParams.BlurY = 0.0;
  this->m_filterParams.ShadowStrength = 1.0;
  this->m_filterParams.ShadowBlurY = 0.1;
  this->m_filterParams.ShadowBlurX = 0.1;
  this->m_filterParams.ShadowColor = -16777216;
  this->m_filterParams.ShadowAngle = 45.0;
  this->m_filterParams.ShadowDistance = 0.1;
  Scaleform::String::String(&this->m_str, &o->m_str);
  Scaleform::String::String(&this->m_htmlStr, &o->m_htmlStr);
  this->m_gtext.pObject = 0i64;
  extension::gfxi_detail::TextProxy::setHtmlStr(this, &o->m_htmlStr);
}

void __fastcall extension::gfxi_detail::TextProxy::TextProxy(
        extension::gfxi_detail::TextProxy *this,
        unsigned int argb)
{
  this->m_refCount.m_value._My_val = 1i64;
  this->m_Prev = &this->extension::gfxi_detail::RefleshableTextNode;
  this->m_Next = &this->extension::gfxi_detail::RefleshableTextNode;
  extension::gfxi_detail::TextProxy::GetInitialTextParams(&this->m_textParams, argb);
  this->m_isVisible = 1;
  *(_QWORD *)&this->m_recommendWidth = 0i64;
  *(_QWORD *)&this->m_position.y = 0i64;
  *(_QWORD *)&this->m_size.Height = 0i64;
  *(_QWORD *)&this->m_pivot.y = 0i64;
  *(_QWORD *)&this->m_filterParams.BlurStrength = 1065353216i64;
  this->m_filterParams.BlurY = 0.0;
  this->m_filterParams.ShadowStrength = 1.0;
  this->m_filterParams.ShadowBlurY = 0.1;
  this->m_filterParams.ShadowBlurX = 0.1;
  this->m_filterParams.ShadowColor = -16777216;
  this->m_filterParams.ShadowAngle = 45.0;
  this->m_filterParams.ShadowDistance = 0.1;
  Scaleform::String::String(&this->m_str);
  Scaleform::String::String(&this->m_htmlStr);
  this->m_gtext.pObject = 0i64;
}

void __fastcall Scaleform::Ptr<Scaleform::GFx::ExternalInterface>::~Ptr<Scaleform::GFx::ExternalInterface>(
        Scaleform::Ptr<Scaleform::Render::ThreadCommand> *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  pObject = (Scaleform::RefCountVImpl *)this->pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
}

void __fastcall Scaleform::Ptr<Scaleform::GFx::DrawTextManager>::~Ptr<Scaleform::GFx::DrawTextManager>(
        Scaleform::Ptr<Scaleform::GFx::DrawTextManager> *this)
{
  Scaleform::GFx::DrawTextManager *pObject; // rcx

  pObject = this->pObject;
  if ( pObject )
    Scaleform::RefCountNTSImpl::Release(pObject);
}

void __fastcall extension::GFXIText::~GFXIText(extension::GFXIText *this)
{
  extension::gfxi_detail::TextProxy *m_ptr; // rbx

  m_ptr = this->m_body.m_ptr;
  if ( this->m_body.m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( m_ptr )
    {
      extension::gfxi_detail::TextProxy::~TextProxy(m_ptr);
      operator delete(m_ptr, 0xA8ui64);
    }
  }
}

void __fastcall extension::gfxi_detail::MovieStackNode::~MovieStackNode(
        extension::exsound_detail::SoundNameRegistry::BucketNode *this)
{
  this->m_Next->extension::BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode>::m_Prev = this->m_Prev;
  this->m_Prev->m_Next = this->m_Next;
  this->m_Next = this;
  this->m_Prev = this;
}

void __fastcall extension::gfxi_detail::CustomDrawTextManager::TextParamsEx::~TextParamsEx(
        extension::gfxi_detail::CustomDrawTextManager::TextParamsEx *this)
{
  volatile int *v1; // rbx

  v1 = (volatile int *)(this->FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v1 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v1);
}

void __fastcall extension::gfxi_detail::TextProxy::~TextProxy(extension::gfxi_detail::TextProxy *this)
{
  Scaleform::GFx::DrawText *pObject; // rcx
  Scaleform::GFx::DrawText *v3; // rcx
  volatile int *v4; // rbx
  volatile int *v5; // rbx
  volatile int *v6; // rbx

  pObject = this->m_gtext.pObject;
  if ( pObject )
    Scaleform::RefCountNTSImpl::Release(pObject);
  this->m_gtext.pObject = 0i64;
  v3 = this->m_gtext.pObject;
  if ( v3 )
    Scaleform::RefCountNTSImpl::Release(v3);
  v4 = (volatile int *)(this->m_htmlStr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
  v5 = (volatile int *)(this->m_str.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v5 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v5);
  v6 = (volatile int *)(this->m_textParams.FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v6 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v6);
  this->m_Next->extension::gfxi_detail::RefleshableTextNode::extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode>::m_Prev = this->m_Prev;
  this->m_Prev->m_Next = this->m_Next;
  this->m_Next = &this->extension::gfxi_detail::RefleshableTextNode;
  this->m_Prev = &this->extension::gfxi_detail::RefleshableTextNode;
}

void __fastcall Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::operator delete(void *p)
{
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, p);
}

Scaleform::Render::Size<float> *__fastcall extension::gfxi_detail::CustomDrawTextManager::GetHtmlTextExtent(
        extension::gfxi_detail::CustomDrawTextManager *this,
        Scaleform::Render::Size<float> *result,
        const Scaleform::String *str,
        float width,
        const extension::gfxi_detail::CustomDrawTextManager::TextParamsEx *txtParamsEx)
{
  Scaleform::Render::Text::DocView *v8; // rbx
  float TextHeight; // xmm6_4
  void *v10; // rbx
  Scaleform::GFx::DrawTextManager::TextParams txtParams; // [rsp+48h] [rbp-81h] BYREF
  Scaleform::Render::Text::ParagraphFormat pfmt; // [rsp+70h] [rbp-59h] BYREF
  __int64 v14; // [rsp+98h] [rbp-31h]
  Scaleform::Render::Text::TextFormat tfmt; // [rsp+A8h] [rbp-21h] BYREF

  v14 = -2i64;
  Scaleform::GFx::DrawTextManager::CheckFontStatesChange(this);
  Scaleform::Render::Text::TextFormat::TextFormat(&tfmt, this->pHeap);
  pfmt.pAllocator = 0i64;
  pfmt.RefCount = 1;
  memset(&pfmt.pTabStops, 0, 20);
  txtParams.TextColor.Raw = txtParamsEx->TextColor.Raw;
  txtParams.HAlignment = txtParamsEx->HAlignment;
  txtParams.VAlignment = txtParamsEx->VAlignment;
  txtParams.FontStyle = txtParamsEx->FontStyle;
  txtParams.FontSize = txtParamsEx->FontSize;
  Scaleform::String::String(&txtParams.FontName, &txtParamsEx->FontName);
  txtParams.Underline = txtParamsEx->Underline;
  txtParams.Multiline = txtParamsEx->Multiline;
  txtParams.WordWrap = txtParamsEx->WordWrap;
  v8 = Scaleform::GFx::DrawTextManager::CreateTempDoc(this, &txtParams, &tfmt, &pfmt, width * 20.0, 0.0);
  *(_WORD *)&txtParams.Multiline = 0;
  Scaleform::GFx::DrawTextManager::SetTextParams(this, v8, &txtParams, &tfmt, &pfmt);
  extension::gfxi_detail::CustomDrawTextManager::SetExtraParams(v8, txtParamsEx);
  Scaleform::Render::Text::DocView::ParseHtml(
    v8,
    (const char *)((str->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
    0xFFFFFFFFFFFFFFFFui64,
    0,
    0i64,
    0i64,
    0i64,
    0i64);
  TextHeight = Scaleform::Render::Text::DocView::GetTextHeight(v8);
  result->Width = (float)(Scaleform::Render::Text::DocView::GetTextWidth(v8) * 0.050000001) + 4.0;
  result->Height = (float)(TextHeight * 0.050000001) + 4.0;
  if ( v8 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v8);
  v10 = (void *)(txtParams.FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((txtParams.FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v10);
  Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&pfmt);
  Scaleform::Render::Text::TextFormat::~TextFormat(&tfmt);
  return result;
}

extension::gfxi_detail::CustomDrawTextManager::TextParamsEx *__fastcall extension::gfxi_detail::TextProxy::GetInitialTextParams(
        extension::gfxi_detail::CustomDrawTextManager::TextParamsEx *result,
        unsigned int argb)
{
  extension::GFXIFontManager *v3; // rax
  const Scaleform::GFx::DrawTextManager::TextParams *DefaultTextParams; // rbx
  extension::gfxi_detail::CustomDrawTextManager::TextParamsEx *v5; // rax

  v3 = extension::GFXIFontManager::Instance();
  DefaultTextParams = Scaleform::GFx::DrawTextManager::GetDefaultTextParams(v3->m_drawTextManager.pObject);
  result->TextColor.Raw = DefaultTextParams->TextColor.Raw;
  result->HAlignment = DefaultTextParams->HAlignment;
  result->VAlignment = DefaultTextParams->VAlignment;
  result->FontStyle = DefaultTextParams->FontStyle;
  result->FontSize = DefaultTextParams->FontSize;
  Scaleform::String::String(&result->FontName, &DefaultTextParams->FontName);
  result->Underline = DefaultTextParams->Underline;
  result->Multiline = DefaultTextParams->Multiline;
  result->WordWrap = DefaultTextParams->WordWrap;
  v5 = result;
  result->LineSpacing = NAN;
  result->TextColor.Raw = -1;
  return v5;
}

Scaleform::GFx::State *__fastcall Scaleform::GFx::StateBag::GetStateAddRef(
        Scaleform::GFx::StateBag *this,
        Scaleform::GFx::State::StateType state)
{
  Scaleform::GFx::State *result; // rax

  result = (Scaleform::GFx::State *)this->GetStateBagImpl(this);
  if ( result )
    return (Scaleform::GFx::State *)((__int64 (__fastcall *)(Scaleform::GFx::State *, _QWORD))result->__vftable[3].~RefCountImplCore)(
                                      result,
                                      (unsigned int)state);
  return result;
}

void __fastcall Scaleform::GFx::StateBag::GetStatesAddRef(
        Scaleform::GFx::StateBag *this,
        Scaleform::GFx::State **pstateList,
        const Scaleform::GFx::State::StateType *pstates,
        unsigned int count)
{
  __int64 v7; // rax

  v7 = this->GetStateBagImpl(this);
  if ( v7 )
    (*(void (__fastcall **)(__int64, Scaleform::GFx::State **, const Scaleform::GFx::State::StateType *, _QWORD))(*(_QWORD *)v7 + 32i64))(
      v7,
      pstateList,
      pstates,
      count);
}

Scaleform::Render::Size<float> *__fastcall extension::gfxi_detail::CustomDrawTextManager::GetTextExtent(
        extension::gfxi_detail::CustomDrawTextManager *this,
        Scaleform::Render::Size<float> *result,
        const Scaleform::String *str,
        float width,
        const extension::gfxi_detail::CustomDrawTextManager::TextParamsEx *txtParamsEx)
{
  Scaleform::Render::Text::DocView *v8; // rbx
  float TextHeight; // xmm6_4
  void *v10; // rbx
  Scaleform::GFx::DrawTextManager::TextParams txtParams; // [rsp+38h] [rbp-81h] BYREF
  Scaleform::Render::Text::ParagraphFormat pfmt; // [rsp+60h] [rbp-59h] BYREF
  __int64 v14; // [rsp+88h] [rbp-31h]
  Scaleform::Render::Text::TextFormat tfmt; // [rsp+98h] [rbp-21h] BYREF

  v14 = -2i64;
  Scaleform::GFx::DrawTextManager::CheckFontStatesChange(this);
  Scaleform::Render::Text::TextFormat::TextFormat(&tfmt, this->pHeap);
  pfmt.pAllocator = 0i64;
  pfmt.RefCount = 1;
  memset(&pfmt.pTabStops, 0, 20);
  txtParams.TextColor.Raw = txtParamsEx->TextColor.Raw;
  txtParams.HAlignment = txtParamsEx->HAlignment;
  txtParams.VAlignment = txtParamsEx->VAlignment;
  txtParams.FontStyle = txtParamsEx->FontStyle;
  txtParams.FontSize = txtParamsEx->FontSize;
  Scaleform::String::String(&txtParams.FontName, &txtParamsEx->FontName);
  txtParams.Underline = txtParamsEx->Underline;
  txtParams.Multiline = txtParamsEx->Multiline;
  txtParams.WordWrap = txtParamsEx->WordWrap;
  v8 = Scaleform::GFx::DrawTextManager::CreateTempDoc(this, &txtParams, &tfmt, &pfmt, width * 20.0, 0.0);
  *(_WORD *)&txtParams.Multiline = 0;
  Scaleform::GFx::DrawTextManager::SetTextParams(this, v8, &txtParams, &tfmt, &pfmt);
  extension::gfxi_detail::CustomDrawTextManager::SetExtraParams(v8, txtParamsEx);
  Scaleform::Render::Text::DocView::SetText(
    v8,
    (const char *)((str->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
    0xFFFFFFFFFFFFFFFFui64);
  TextHeight = Scaleform::Render::Text::DocView::GetTextHeight(v8);
  result->Width = (float)(Scaleform::Render::Text::DocView::GetTextWidth(v8) * 0.050000001) + 4.0;
  result->Height = (float)(TextHeight * 0.050000001) + 4.0;
  if ( v8 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v8);
  v10 = (void *)(txtParams.FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((txtParams.FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v10);
  Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&pfmt);
  Scaleform::Render::Text::TextFormat::~TextFormat(&tfmt);
  return result;
}

Scaleform::Render::Text::DocView *__fastcall extension::gfxi_detail::CustomDrawTextManager::SetExtraParams(
        Scaleform::Render::Text::DocView *target,
        const extension::gfxi_detail::CustomDrawTextManager::TextParamsEx *txtParamsEx)
{
  Scaleform::Render::Text::ParagraphFormat *pObject; // rdx
  float LineSpacing; // xmm6_4
  Scaleform::Render::Text::ParagraphFormat fmt; // [rsp+28h] [rbp-40h] BYREF
  float _Px; // [rsp+70h] [rbp+8h] BYREF
  float v9; // [rsp+78h] [rbp+10h] BYREF

  pObject = target->pDocument.pObject->pDefaultParagraphFormat.pObject;
  fmt.pAllocator = 0i64;
  fmt.RefCount = 1;
  fmt.pTabStops = 0i64;
  fmt.BlockIndent = pObject->BlockIndent;
  fmt.Indent = pObject->Indent;
  fmt.Leading = pObject->Leading;
  fmt.LeftMargin = pObject->LeftMargin;
  fmt.RightMargin = pObject->RightMargin;
  fmt.PresentMask = pObject->PresentMask;
  Scaleform::Render::Text::ParagraphFormat::CopyTabStops(&fmt, pObject->pTabStops);
  LineSpacing = txtParamsEx->LineSpacing;
  _Px = LineSpacing;
  if ( fdtest(&_Px) == 2 || (v9 = LineSpacing, fdtest(&v9) == 1) )
  {
    fmt.Leading = 0;
    fmt.PresentMask &= ~8u;
  }
  else
  {
    fmt.Leading = (int)(float)(txtParamsEx->FontSize * txtParamsEx->LineSpacing);
    fmt.PresentMask |= 8u;
  }
  Scaleform::Render::Text::DocView::SetParagraphFormat(target, &fmt, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  Scaleform::Render::Text::StyledText::SetDefaultParagraphFormat(target->pDocument.pObject, &fmt);
  Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&fmt);
  return target;
}

void __fastcall Scaleform::GFx::StateBag::SetState(
        Scaleform::GFx::StateBag *this,
        Scaleform::GFx::State::StateType state,
        Scaleform::GFx::State *pstate)
{
  __int64 v5; // rax

  v5 = this->GetStateBagImpl(this);
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD, Scaleform::GFx::State *))(*(_QWORD *)v5 + 16i64))(
      v5,
      (unsigned int)state,
      pstate);
}

void __fastcall extension::gfxi_detail::TextProxy::applyFilters(
        extension::gfxi_detail::TextProxy *this,
        Scaleform::GFx::DrawText *target)
{
  Scaleform::Render::TreeText::Filter *v3; // rbx
  __int64 v5; // rdi
  float FontSize; // xmm3_4
  unsigned int v7; // xmm0_4
  Scaleform::GFx::DrawText_vtbl *v8; // rax
  unsigned int v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  Scaleform::Render::TreeText::Filter v15; // [rsp+20h] [rbp-48h] BYREF
  int v16; // [rsp+40h] [rbp-28h]
  float v17; // [rsp+44h] [rbp-24h]
  float v18; // [rsp+48h] [rbp-20h]
  float v19; // [rsp+4Ch] [rbp-1Ch]
  unsigned int ShadowColor; // [rsp+50h] [rbp-18h]
  char v21; // [rsp+54h] [rbp-14h]
  float ShadowAngle; // [rsp+58h] [rbp-10h]
  float v23; // [rsp+5Ch] [rbp-Ch]

  v3 = &v15;
  v5 = 2i64;
  do
  {
    v3->Type = 0;
    Scaleform::Render::TreeText::Filter::InitByDefaultValues(v3++);
    --v5;
  }
  while ( v5 );
  FontSize = this->m_textParams.FontSize;
  ShadowColor = this->m_filterParams.ShadowColor;
  *(float *)&v7 = FontSize * this->m_filterParams.BlurX;
  v8 = target->__vftable;
  *(float *)&v9 = FontSize * this->m_filterParams.BlurY;
  v15.Type = 2;
  *(_QWORD *)&v15.Blur.BlurX = __PAIR64__(v9, v7);
  v10 = this->m_filterParams.BlurStrength * 100.0;
  v16 = 1;
  v11 = FontSize * this->m_filterParams.ShadowBlurY;
  v21 = 0x80;
  v15.Blur.Strength = v10;
  v12 = FontSize * this->m_filterParams.ShadowBlurX;
  v13 = FontSize * this->m_filterParams.ShadowDistance;
  v17 = v12;
  v14 = this->m_filterParams.ShadowStrength * 100.0;
  v18 = v11;
  v23 = v13;
  v19 = v14;
  ShadowAngle = this->m_filterParams.ShadowAngle;
  v8->SetFilters(target, (const Scaleform::GFx::DrawText::Filter *)&v15, 2ui64);
}

void __fastcall extension::gfxi_detail::TextProxy::applyTextMatrix(
        extension::gfxi_detail::TextProxy *this,
        Scaleform::GFx::DrawText *target)
{
  Scaleform::GFx::DrawText_vtbl *v2; // rax
  __int64 v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+28h] [rbp-30h]
  int v5; // [rsp+2Ch] [rbp-2Ch]
  int v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+34h] [rbp-24h]
  int v8; // [rsp+3Ch] [rbp-1Ch]

  v2 = target->__vftable;
  v5 = LODWORD(this->m_pivot.x) ^ _xmm;
  v8 = LODWORD(this->m_pivot.y) ^ _xmm;
  v3 = 1065353216i64;
  v4 = 0;
  v6 = 0;
  v7 = 1065353216i64;
  v2->SetMatrix(target, (const Scaleform::Render::Matrix2x4<float> *)&v3);
}

void __fastcall extension::gfxi_detail::TextProxy::applyTextRect(
        extension::gfxi_detail::TextProxy *this,
        Scaleform::GFx::DrawText *target)
{
  Scaleform::GFx::DrawText::Alignment HAlignment; // eax
  float v3; // xmm2_4
  float x; // [rsp+20h] [rbp-28h] BYREF
  float y; // [rsp+24h] [rbp-24h]
  float v6; // [rsp+28h] [rbp-20h]
  float v7; // [rsp+2Ch] [rbp-1Ch]

  HAlignment = this->m_textParams.HAlignment;
  if ( HAlignment == Align_Left )
  {
    v3 = this->m_recommendWidth - this->m_size.Width;
    y = this->m_position.y;
    v7 = y + this->m_size.Height;
    x = (float)(v3 * 0.5) + this->m_position.x;
    v6 = x + this->m_size.Width;
  }
  else
  {
    y = this->m_position.y;
    v7 = y + this->m_size.Height;
    if ( HAlignment == Align_Right )
    {
      v6 = this->m_position.x + this->m_recommendWidth;
      x = v6 - this->m_size.Width;
    }
    else
    {
      x = this->m_position.x;
      v6 = x + this->m_size.Width;
    }
  }
  target->SetRect(target, (const Scaleform::Render::Rect<float> *)&x);
}

void __fastcall extension::GFXIText::cloneIfShared(extension::GFXIText *this)
{
  extension::gfxi_detail::TextProxy *m_ptr; // rbx
  extension::gfxi_detail::TextProxy *v3; // rax
  extension::gfxi_detail::TextProxy *v4; // [rsp+40h] [rbp+8h]

  if ( (signed __int64)this->m_body.m_ptr->m_refCount.m_value._My_val > 1 )
  {
    v4 = (extension::gfxi_detail::TextProxy *)operator new(0xA8ui64);
    extension::gfxi_detail::TextProxy::TextProxy(v4, this->m_body.m_ptr);
    m_ptr = this->m_body.m_ptr;
    this->m_body.m_ptr = v3;
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        extension::gfxi_detail::TextProxy::~TextProxy(m_ptr);
        operator delete(m_ptr, 0xA8ui64);
      }
    }
  }
}

bool __fastcall extension::gfxi_detail::TextProxy::isDefaultLineSpacing(extension::gfxi_detail::TextProxy *this)
{
  float LineSpacing; // xmm6_4
  bool result; // al
  float _Px; // [rsp+40h] [rbp+8h] BYREF
  float v4; // [rsp+48h] [rbp+10h] BYREF

  LineSpacing = this->m_textParams.LineSpacing;
  _Px = LineSpacing;
  result = 1;
  if ( fdtest(&_Px) != 2 )
  {
    v4 = LineSpacing;
    if ( fdtest(&v4) != 1 )
      return 0;
  }
  return result;
}

bool __fastcall extension::gfxi_detail::TextProxy::isLineSpaceChanging(
        extension::gfxi_detail::TextProxy *this,
        float rate)
{
  float LineSpacing; // xmm7_4
  bool result; // al
  float _Px; // [rsp+50h] [rbp+8h] BYREF
  float v6; // [rsp+60h] [rbp+18h] BYREF

  LineSpacing = this->m_textParams.LineSpacing;
  _Px = LineSpacing;
  result = (fdtest(&_Px) != 2 && (v6 = LineSpacing, fdtest(&v6) != 1)
         || (_Px = rate, fdtest(&_Px) != 2) && (v6 = rate, fdtest(&v6) != 1))
        && this->m_textParams.LineSpacing != rate;
  return result;
}

Scaleform::Render::Rect<float> *__fastcall extension::gfxi_detail::TextProxy::makeTextRect(
        extension::gfxi_detail::TextProxy *this,
        Scaleform::Render::Rect<float> *result)
{
  Scaleform::GFx::DrawText::Alignment HAlignment; // eax
  float y; // xmm0_4
  Scaleform::Render::Rect<float> *v4; // rax
  float v5; // xmm2_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float x; // xmm0_4

  HAlignment = this->m_textParams.HAlignment;
  if ( HAlignment == Align_Left )
  {
    y = this->m_position.y;
    v4 = result;
    v5 = this->m_recommendWidth - this->m_size.Width;
    result->y1 = y;
    result->y2 = y + this->m_size.Height;
    v6 = (float)(v5 * 0.5) + this->m_position.x;
    result->x1 = v6;
    result->x2 = v6 + this->m_size.Width;
  }
  else
  {
    v7 = this->m_position.y;
    result->y1 = v7;
    result->y2 = v7 + this->m_size.Height;
    if ( HAlignment == Align_Right )
    {
      v4 = result;
      v8 = this->m_position.x + this->m_recommendWidth;
      result->x2 = v8;
      result->x1 = v8 - this->m_size.Width;
    }
    else
    {
      x = this->m_position.x;
      v4 = result;
      result->x1 = x;
      result->x2 = x + this->m_size.Width;
    }
  }
  return v4;
}

void __fastcall extension::GFXIText::setFilterParams(
        extension::GFXIText *this,
        const extension::GFXIText::FilterParams *fp)
{
  extension::gfxi_detail::TextProxy *m_ptr; // rax
  __int64 v4; // rax
  Scaleform::GFx::DrawText *v5; // rdx

  m_ptr = this->m_body.m_ptr;
  if ( this->m_body.m_ptr->m_filterParams.BlurStrength != fp->BlurStrength
    || m_ptr->m_filterParams.BlurX != fp->BlurX
    || m_ptr->m_filterParams.BlurY != fp->BlurY
    || m_ptr->m_filterParams.ShadowStrength != fp->ShadowStrength
    || m_ptr->m_filterParams.ShadowBlurX != fp->ShadowBlurX
    || m_ptr->m_filterParams.ShadowBlurY != fp->ShadowBlurY
    || m_ptr->m_filterParams.ShadowAngle != fp->ShadowAngle
    || m_ptr->m_filterParams.ShadowDistance != fp->ShadowDistance )
  {
    extension::GFXIText::cloneIfShared(this);
    v5 = *(Scaleform::GFx::DrawText **)(v4 + 160);
    *(_OWORD *)(v4 + 108) = *(_OWORD *)&fp->BlurStrength;
    *(_OWORD *)(v4 + 124) = *(_OWORD *)&fp->ShadowBlurX;
    *(float *)(v4 + 140) = fp->ShadowDistance;
    if ( v5 )
      extension::gfxi_detail::TextProxy::applyFilters((extension::gfxi_detail::TextProxy *)v4, v5);
  }
}

void __fastcall extension::gfxi_detail::TextProxy::setFontName(
        extension::gfxi_detail::TextProxy *this,
        const char *fontName)
{
  Scaleform::String::DataDesc *pData; // rax
  Scaleform::String *p_FontName; // rcx
  unsigned __int64 v5; // rax
  const char *v6; // r9
  int v8; // edx
  int v9; // er8
  Scaleform::GFx::DrawText *pObject; // rcx
  extension::GFXIFontManager *v11; // rax
  Scaleform::Render::Size<float> *HtmlTextExtent; // rax
  float Height; // xmm0_4
  Scaleform::Render::Size<float> result; // [rsp+40h] [rbp+8h] BYREF

  pData = this->m_textParams.FontName.pData;
  p_FontName = &this->m_textParams.FontName;
  v5 = ((unsigned __int64)pData & 0xFFFFFFFFFFFFFFFCui64) + 12;
  v6 = &fontName[-v5];
  do
  {
    v8 = (unsigned __int8)v6[v5];
    v9 = *(unsigned __int8 *)v5 - v8;
    if ( v9 )
      break;
    ++v5;
  }
  while ( v8 );
  if ( v9 )
  {
    Scaleform::String::operator=(p_FontName, fontName);
    pObject = this->m_gtext.pObject;
    if ( pObject )
    {
      pObject->SetFont(pObject, fontName, 0i64, -1ui64);
      v11 = extension::GFXIFontManager::Instance();
      HtmlTextExtent = extension::gfxi_detail::CustomDrawTextManager::GetHtmlTextExtent(
                         (extension::gfxi_detail::CustomDrawTextManager *)v11->m_drawTextManager.pObject,
                         &result,
                         &this->m_htmlStr,
                         this->m_recommendWidth,
                         &this->m_textParams);
      Height = HtmlTextExtent->Height;
      *(float *)&HtmlTextExtent = HtmlTextExtent->Width;
      this->m_size.Height = Height;
      LODWORD(this->m_size.Width) = (_DWORD)HtmlTextExtent;
      extension::gfxi_detail::TextProxy::applyTextRect(this, this->m_gtext.pObject);
    }
  }
}

void __fastcall extension::gfxi_detail::TextProxy::setFontSize(extension::gfxi_detail::TextProxy *this, float fs)
{
  __int64 v2; // rdx
  Scaleform::GFx::DrawText *pObject; // rcx
  Scaleform::Render::Text::DocView *v5; // rax
  extension::GFXIFontManager *v6; // rax
  Scaleform::Render::Size<float> *HtmlTextExtent; // rax
  float Height; // xmm0_4
  Scaleform::Render::Size<float> result; // [rsp+40h] [rbp+8h] BYREF

  if ( fs != this->m_textParams.FontSize )
  {
    this->m_textParams.FontSize = fs;
    pObject = this->m_gtext.pObject;
    if ( pObject )
    {
      ((void (__fastcall *)(Scaleform::GFx::DrawText *, __int64, _QWORD, __int64))pObject->SetFontSize)(
        pObject,
        v2,
        0i64,
        -1i64);
      v5 = this->m_gtext.pObject->GetDocView(this->m_gtext.pObject);
      extension::gfxi_detail::CustomDrawTextManager::SetExtraParams(v5, &this->m_textParams);
      extension::gfxi_detail::TextProxy::applyFilters(this, this->m_gtext.pObject);
      v6 = extension::GFXIFontManager::Instance();
      HtmlTextExtent = extension::gfxi_detail::CustomDrawTextManager::GetHtmlTextExtent(
                         (extension::gfxi_detail::CustomDrawTextManager *)v6->m_drawTextManager.pObject,
                         &result,
                         &this->m_htmlStr,
                         this->m_recommendWidth,
                         &this->m_textParams);
      Height = HtmlTextExtent->Height;
      *(float *)&HtmlTextExtent = HtmlTextExtent->Width;
      this->m_size.Height = Height;
      LODWORD(this->m_size.Width) = (_DWORD)HtmlTextExtent;
      extension::gfxi_detail::TextProxy::applyTextRect(this, this->m_gtext.pObject);
    }
  }
}

void __fastcall extension::GFXIText::setHAlign(extension::GFXIText *this, extension::GFXIText::HAlignment ha)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx

  if ( ha != this->m_body.m_ptr->m_textParams.HAlignment )
  {
    v2 = dword_140926F90[ha];
    extension::GFXIText::cloneIfShared(this);
    v4 = *(_QWORD *)(v3 + 160);
    *(_DWORD *)(v3 + 28) = v2;
    if ( v4 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 232i64))(v4, v2);
  }
}

void __fastcall extension::gfxi_detail::TextProxy::setHtmlStr(
        extension::gfxi_detail::TextProxy *this,
        const Scaleform::String *s)
{
  Scaleform::String *p_m_htmlStr; // rbx
  unsigned __int8 *v5; // rax
  unsigned __int64 v6; // r8
  int v7; // ecx
  int v8; // edx
  Scaleform::GFx::DrawText *v9; // rcx
  extension::gfxi_detail::CustomDrawTextManager *pObject; // rbp
  Scaleform::Render::Size<float> *HtmlTextExtent; // rax
  float Height; // xmm0_4
  Scaleform::GFx::DrawText *v13; // rcx
  const Scaleform::Render::Rect<float> *TextRect; // rax
  Scaleform::GFx::DrawText *HtmlText; // rbx
  Scaleform::GFx::DrawText *v16; // rcx
  Scaleform::Render::Text::DocView *v17; // rax
  const Scaleform::String *v18; // rax
  void *v19; // rbx
  Scaleform::Render::Rect<float> result; // [rsp+40h] [rbp-38h] BYREF

  p_m_htmlStr = &this->m_htmlStr;
  v5 = (unsigned __int8 *)((this->m_htmlStr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  v6 = (s->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) - (this->m_htmlStr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  do
  {
    v7 = v5[v6];
    v8 = *v5 - v7;
    if ( v8 )
      break;
    ++v5;
  }
  while ( v7 );
  if ( v8 )
  {
    Scaleform::String::operator=(p_m_htmlStr, s);
    if ( (*(_QWORD *)(p_m_htmlStr->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) != 0 )
    {
      pObject = (extension::gfxi_detail::CustomDrawTextManager *)extension::GFXIFontManager::Instance()->m_drawTextManager.pObject;
      HtmlTextExtent = extension::gfxi_detail::CustomDrawTextManager::GetHtmlTextExtent(
                         pObject,
                         (Scaleform::Render::Size<float> *)&result,
                         p_m_htmlStr,
                         this->m_recommendWidth,
                         &this->m_textParams);
      Height = HtmlTextExtent->Height;
      this->m_size.Width = HtmlTextExtent->Width;
      this->m_size.Height = Height;
      v13 = this->m_gtext.pObject;
      if ( v13 )
      {
        v13->SetHtmlText(
          v13,
          (const char *)((p_m_htmlStr->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
          *(_QWORD *)(p_m_htmlStr->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64);
        extension::gfxi_detail::TextProxy::applyTextRect(this, this->m_gtext.pObject);
      }
      else
      {
        TextRect = extension::gfxi_detail::TextProxy::makeTextRect(this, &result);
        HtmlText = Scaleform::GFx::DrawTextManager::CreateHtmlText(
                     pObject,
                     p_m_htmlStr,
                     TextRect,
                     &this->m_textParams,
                     0xFFFFFFFF);
        v16 = this->m_gtext.pObject;
        if ( HtmlText != v16 )
        {
          if ( v16 )
            Scaleform::RefCountNTSImpl::Release(v16);
          this->m_gtext.pObject = HtmlText;
        }
        v17 = this->m_gtext.pObject->GetDocView(this->m_gtext.pObject);
        extension::gfxi_detail::CustomDrawTextManager::SetExtraParams(v17, &this->m_textParams);
        extension::gfxi_detail::TextProxy::applyTextMatrix(this, this->m_gtext.pObject);
        extension::gfxi_detail::TextProxy::applyFilters(this, this->m_gtext.pObject);
        this->m_gtext.pObject->SetVisible(this->m_gtext.pObject, this->m_isVisible);
        LODWORD(result.x1) = this->m_bgColor;
        this->m_gtext.pObject->SetBackgroundColor(this->m_gtext.pObject, (const Scaleform::Render::Color *)&result);
      }
      v18 = this->m_gtext.pObject->GetText(this->m_gtext.pObject, &result);
      Scaleform::String::operator=(&this->m_str, v18);
      v19 = (void *)(*(_QWORD *)&result.x1 & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
             (volatile int *)((*(_QWORD *)&result.x1 & 0xFFFFFFFFFFFFFFFCui64) + 8),
             -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v19);
    }
    else
    {
      Scaleform::String::operator=(&this->m_str, s);
      v9 = this->m_gtext.pObject;
      if ( v9 )
        Scaleform::RefCountNTSImpl::Release(v9);
      this->m_gtext.pObject = 0i64;
    }
  }
}

void __fastcall extension::GFXIText::setIsRefleshable(extension::GFXIText *this, bool flgRefleshable)
{
  __int64 v2; // rax
  extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode> *v3; // r8
  _QWORD **v4; // rdx

  extension::GFXIText::cloneIfShared(this);
  v3 = 0i64;
  v4 = (_QWORD **)(v2 + 8);
  if ( !v2 )
    v4 = 0i64;
  *v4[1] = *v4;
  (*v4)[1] = v4[1];
  v4[1] = v4;
  *v4 = v4;
  if ( v2 )
    v3 = (extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode> *)(v2 + 8);
  v3->m_Next->m_Prev = extension::gfxi_detail::s_refleshableListEnd.m_Prev;
  extension::gfxi_detail::s_refleshableListEnd.m_Prev->m_Next = v3->m_Next;
  v3->m_Next = &extension::gfxi_detail::s_refleshableListEnd;
  extension::gfxi_detail::s_refleshableListEnd.m_Prev = v3;
}

void __fastcall extension::gfxi_detail::TextProxy::setLineSpacing(extension::gfxi_detail::TextProxy *this, float rate)
{
  Scaleform::GFx::DrawText *pObject; // rcx
  Scaleform::Render::Text::DocView *v4; // rax
  extension::GFXIFontManager *v5; // rax
  Scaleform::Render::Size<float> *HtmlTextExtent; // rax
  float Height; // xmm0_4
  Scaleform::Render::Size<float> result; // [rsp+60h] [rbp+18h] BYREF

  if ( extension::gfxi_detail::TextProxy::isLineSpaceChanging(this, rate) )
  {
    pObject = this->m_gtext.pObject;
    this->m_textParams.LineSpacing = rate;
    if ( pObject )
    {
      v4 = (Scaleform::Render::Text::DocView *)((__int64 (*)(void))pObject->GetDocView)();
      extension::gfxi_detail::CustomDrawTextManager::SetExtraParams(v4, &this->m_textParams);
      if ( extension::gfxi_detail::TextProxy::isDefaultLineSpacing(this) )
        this->m_gtext.pObject->SetHtmlText(
          this->m_gtext.pObject,
          (const char *)((this->m_htmlStr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
          *(_QWORD *)(this->m_htmlStr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64);
      v5 = extension::GFXIFontManager::Instance();
      HtmlTextExtent = extension::gfxi_detail::CustomDrawTextManager::GetHtmlTextExtent(
                         (extension::gfxi_detail::CustomDrawTextManager *)v5->m_drawTextManager.pObject,
                         &result,
                         &this->m_htmlStr,
                         this->m_recommendWidth,
                         &this->m_textParams);
      Height = HtmlTextExtent->Height;
      *(float *)&HtmlTextExtent = HtmlTextExtent->Width;
      this->m_size.Height = Height;
      LODWORD(this->m_size.Width) = (_DWORD)HtmlTextExtent;
      extension::gfxi_detail::TextProxy::applyTextRect(this, this->m_gtext.pObject);
    }
  }
}

void __fastcall extension::gfxi_detail::TextProxy::setStr(
        extension::gfxi_detail::TextProxy *this,
        const Scaleform::String *s)
{
  Scaleform::String *p_m_str; // rbx
  unsigned __int8 *v5; // rax
  unsigned __int64 v6; // r8
  int v7; // ecx
  int v8; // edx
  Scaleform::GFx::DrawText *v9; // rcx
  extension::gfxi_detail::CustomDrawTextManager *pObject; // rbp
  Scaleform::Render::Size<float> *TextExtent; // rax
  float Height; // xmm0_4
  Scaleform::GFx::DrawText *v13; // rcx
  const Scaleform::Render::Rect<float> *TextRect; // rax
  Scaleform::GFx::DrawText *Text; // rbx
  Scaleform::GFx::DrawText *v16; // rcx
  Scaleform::Render::Text::DocView *v17; // rax
  const Scaleform::String *v18; // rax
  void *v19; // rbx
  Scaleform::Render::Rect<float> result; // [rsp+40h] [rbp-38h] BYREF

  p_m_str = &this->m_str;
  v5 = (unsigned __int8 *)((this->m_str.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  v6 = (s->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) - (this->m_str.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  do
  {
    v7 = v5[v6];
    v8 = *v5 - v7;
    if ( v8 )
      break;
    ++v5;
  }
  while ( v7 );
  if ( v8 )
  {
    Scaleform::String::operator=(p_m_str, s);
    if ( (*(_QWORD *)(p_m_str->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) != 0 )
    {
      pObject = (extension::gfxi_detail::CustomDrawTextManager *)extension::GFXIFontManager::Instance()->m_drawTextManager.pObject;
      TextExtent = extension::gfxi_detail::CustomDrawTextManager::GetTextExtent(
                     pObject,
                     (Scaleform::Render::Size<float> *)&result,
                     p_m_str,
                     this->m_recommendWidth,
                     &this->m_textParams);
      Height = TextExtent->Height;
      this->m_size.Width = TextExtent->Width;
      this->m_size.Height = Height;
      v13 = this->m_gtext.pObject;
      if ( v13 )
      {
        v13->SetText(v13, p_m_str);
        extension::gfxi_detail::TextProxy::applyTextRect(this, this->m_gtext.pObject);
      }
      else
      {
        TextRect = extension::gfxi_detail::TextProxy::makeTextRect(this, &result);
        Text = Scaleform::GFx::DrawTextManager::CreateText(pObject, p_m_str, TextRect, &this->m_textParams, 0xFFFFFFFF);
        v16 = this->m_gtext.pObject;
        if ( Text != v16 )
        {
          if ( v16 )
            Scaleform::RefCountNTSImpl::Release(v16);
          this->m_gtext.pObject = Text;
        }
        v17 = this->m_gtext.pObject->GetDocView(this->m_gtext.pObject);
        extension::gfxi_detail::CustomDrawTextManager::SetExtraParams(v17, &this->m_textParams);
        extension::gfxi_detail::TextProxy::applyTextMatrix(this, this->m_gtext.pObject);
        extension::gfxi_detail::TextProxy::applyFilters(this, this->m_gtext.pObject);
        this->m_gtext.pObject->SetVisible(this->m_gtext.pObject, this->m_isVisible);
        LODWORD(result.x1) = this->m_bgColor;
        this->m_gtext.pObject->SetBackgroundColor(this->m_gtext.pObject, (const Scaleform::Render::Color *)&result);
      }
      v18 = this->m_gtext.pObject->GetHtmlText(this->m_gtext.pObject, &result);
      Scaleform::String::operator=(&this->m_htmlStr, v18);
      v19 = (void *)(*(_QWORD *)&result.x1 & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
             (volatile int *)((*(_QWORD *)&result.x1 & 0xFFFFFFFFFFFFFFFCui64) + 8),
             -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v19);
    }
    else
    {
      Scaleform::String::operator=(&this->m_htmlStr, s);
      v9 = this->m_gtext.pObject;
      if ( v9 )
        Scaleform::RefCountNTSImpl::Release(v9);
      this->m_gtext.pObject = 0i64;
    }
  }
}

