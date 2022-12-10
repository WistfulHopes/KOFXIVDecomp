#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"

class extension::`anonymous-namespace'::GamePadEventChecker<0>
{
private:
	UserGameOperation & m_userOperation; // 0x0
	GamePadEventChecker<0>(const extension::`anonymous-namespace'::GamePadEventChecker<0> &);
	extension::`anonymous-namespace'::GamePadEventChecker<0> & operator=(const extension::`anonymous-namespace'::GamePadEventChecker<0> &);
	enum GameOpSpec
	{
		GameOp_Dir_L = 0,
		GameOp_Dir_D = 1,
		GameOp_Dir_R = 2,
		GameOp_Dir_U = 3,
		GameOp_UI_OK = 4,
		GameOp_UI_Cancel = 5,
		GameOp_UI_FuncX = 6,
		GameOp_UI_FuncY = 7,
		GameOp_UI_PageBack = 8,
		GameOp_UI_PageNext = 9,
		GameOp_UI_LShift = 10,
		GameOp_UI_RShift = 11,
		GameOp_GameStart = 12,
		GameOp_TouchPad = 13,
		GameOp_Cheat = 14,
		GameOp_LStick = 15,
		GameOp_MenuStart = 16,
		GameOp_MessageInput = 17,
		GameOp_SetPhrases = 18,
		GameOp_Leaderboard_Up = 19,
		GameOp_Leaderboard_Down = 20,
		GameOp_SetDialog1 = 21,
		GameOp_SetDialog2 = 22,
		GameOp_SetDialog3 = 23,
		GameOp_SetDialog4 = 24,
		GameOp_Continue = 25,
		GameOp_ReplayDataDisplay = 26,
		GameOpSpec_Internal_Upper_Limit = 27,
		GameOp_RStick = 14,
		GameOp_Squar = 6,
		GameOp_Triangle = 7,
		GameOp_Cross = 4,
		GameOp_Circle = 5,
		GameOp_L1 = 8,
		GameOp_R1 = 9,
		GameOp_L2 = 10,
		GameOp_R2 = 11,
		GameOp_Option = 12,
	};
public:
	static bool checkEvent(long, GameOperations::GameOpSpec, bool, bool, bool &);
};
class extension::`anonymous-namespace'::GamePadEventChecker<1>
{
private:
	UserGameOperation & m_userOperation; // 0x0
	GamePadEventChecker<1>(const extension::`anonymous-namespace'::GamePadEventChecker<1> &);
	extension::`anonymous-namespace'::GamePadEventChecker<1> & operator=(const extension::`anonymous-namespace'::GamePadEventChecker<1> &);
	enum GameOpSpec
	{
		GameOp_Dir_L = 0,
		GameOp_Dir_D = 1,
		GameOp_Dir_R = 2,
		GameOp_Dir_U = 3,
		GameOp_UI_OK = 4,
		GameOp_UI_Cancel = 5,
		GameOp_UI_FuncX = 6,
		GameOp_UI_FuncY = 7,
		GameOp_UI_PageBack = 8,
		GameOp_UI_PageNext = 9,
		GameOp_UI_LShift = 10,
		GameOp_UI_RShift = 11,
		GameOp_GameStart = 12,
		GameOp_TouchPad = 13,
		GameOp_Cheat = 14,
		GameOp_LStick = 15,
		GameOp_MenuStart = 16,
		GameOp_MessageInput = 17,
		GameOp_SetPhrases = 18,
		GameOp_Leaderboard_Up = 19,
		GameOp_Leaderboard_Down = 20,
		GameOp_SetDialog1 = 21,
		GameOp_SetDialog2 = 22,
		GameOp_SetDialog3 = 23,
		GameOp_SetDialog4 = 24,
		GameOp_Continue = 25,
		GameOp_ReplayDataDisplay = 26,
		GameOpSpec_Internal_Upper_Limit = 27,
		GameOp_RStick = 14,
		GameOp_Squar = 6,
		GameOp_Triangle = 7,
		GameOp_Cross = 4,
		GameOp_Circle = 5,
		GameOp_L1 = 8,
		GameOp_R1 = 9,
		GameOp_L2 = 10,
		GameOp_R2 = 11,
		GameOp_Option = 12,
	};
public:
	static bool checkEvent(long, GameOperations::GameOpSpec, bool, bool, bool &);
};
class extension::`anonymous-namespace'::GamePadEventChecker<2>
{
private:
	UserGameOperation & m_userOperation; // 0x0
	GamePadEventChecker<2>(const extension::`anonymous-namespace'::GamePadEventChecker<2> &);
	extension::`anonymous-namespace'::GamePadEventChecker<2> & operator=(const extension::`anonymous-namespace'::GamePadEventChecker<2> &);
	enum GameOpSpec
	{
		GameOp_Dir_L = 0,
		GameOp_Dir_D = 1,
		GameOp_Dir_R = 2,
		GameOp_Dir_U = 3,
		GameOp_UI_OK = 4,
		GameOp_UI_Cancel = 5,
		GameOp_UI_FuncX = 6,
		GameOp_UI_FuncY = 7,
		GameOp_UI_PageBack = 8,
		GameOp_UI_PageNext = 9,
		GameOp_UI_LShift = 10,
		GameOp_UI_RShift = 11,
		GameOp_GameStart = 12,
		GameOp_TouchPad = 13,
		GameOp_Cheat = 14,
		GameOp_LStick = 15,
		GameOp_MenuStart = 16,
		GameOp_MessageInput = 17,
		GameOp_SetPhrases = 18,
		GameOp_Leaderboard_Up = 19,
		GameOp_Leaderboard_Down = 20,
		GameOp_SetDialog1 = 21,
		GameOp_SetDialog2 = 22,
		GameOp_SetDialog3 = 23,
		GameOp_SetDialog4 = 24,
		GameOp_Continue = 25,
		GameOp_ReplayDataDisplay = 26,
		GameOpSpec_Internal_Upper_Limit = 27,
		GameOp_RStick = 14,
		GameOp_Squar = 6,
		GameOp_Triangle = 7,
		GameOp_Cross = 4,
		GameOp_Circle = 5,
		GameOp_L1 = 8,
		GameOp_R1 = 9,
		GameOp_L2 = 10,
		GameOp_R2 = 11,
		GameOp_Option = 12,
	};
public:
	static bool checkEvent(long, GameOperations::GameOpSpec, bool, bool, bool &);
};
class extension::`anonymous-namespace'::GamePadEventChecker<3>
{
private:
	UserGameOperation & m_userOperation; // 0x0
	GamePadEventChecker<3>(const extension::`anonymous-namespace'::GamePadEventChecker<3> &);
	extension::`anonymous-namespace'::GamePadEventChecker<3> & operator=(const extension::`anonymous-namespace'::GamePadEventChecker<3> &);
	enum GameOpSpec
	{
		GameOp_Dir_L = 0,
		GameOp_Dir_D = 1,
		GameOp_Dir_R = 2,
		GameOp_Dir_U = 3,
		GameOp_UI_OK = 4,
		GameOp_UI_Cancel = 5,
		GameOp_UI_FuncX = 6,
		GameOp_UI_FuncY = 7,
		GameOp_UI_PageBack = 8,
		GameOp_UI_PageNext = 9,
		GameOp_UI_LShift = 10,
		GameOp_UI_RShift = 11,
		GameOp_GameStart = 12,
		GameOp_TouchPad = 13,
		GameOp_Cheat = 14,
		GameOp_LStick = 15,
		GameOp_MenuStart = 16,
		GameOp_MessageInput = 17,
		GameOp_SetPhrases = 18,
		GameOp_Leaderboard_Up = 19,
		GameOp_Leaderboard_Down = 20,
		GameOp_SetDialog1 = 21,
		GameOp_SetDialog2 = 22,
		GameOp_SetDialog3 = 23,
		GameOp_SetDialog4 = 24,
		GameOp_Continue = 25,
		GameOp_ReplayDataDisplay = 26,
		GameOpSpec_Internal_Upper_Limit = 27,
		GameOp_RStick = 14,
		GameOp_Squar = 6,
		GameOp_Triangle = 7,
		GameOp_Cross = 4,
		GameOp_Circle = 5,
		GameOp_L1 = 8,
		GameOp_R1 = 9,
		GameOp_L2 = 10,
		GameOp_R2 = 11,
		GameOp_Option = 12,
	};
public:
	static bool checkEvent(long, GameOperations::GameOpSpec, bool, bool, bool &);
};
class extension::RefCountable<extension::GFXIKeyMapping::MapImpl>
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::GFXIKeyMapping::MapImpl>(const extension::RefCountable<extension::GFXIKeyMapping::MapImpl> &);
public:
	RefCountable<extension::GFXIKeyMapping::MapImpl>();
protected:
	extension::RefCountable<extension::GFXIKeyMapping::MapImpl> & operator=(const extension::RefCountable<extension::GFXIKeyMapping::MapImpl> &);
	~RefCountable<extension::GFXIKeyMapping::MapImpl>();
};
class extension::GFXIKeyMapping::MapImpl :
	extension::RefCountable<extension::GFXIKeyMapping::MapImpl>
{
private:
	~MapImpl();
public:
	MapImpl(const extension::GFXIKeyMapping::MapImpl &);
	MapImpl();
	void addMap(const extension::GFXIKeyMapping::MapConfig &);
	bool hasMap(const extension::GFXIKeyMapping::MapConfig &);
	void postKeyEvent(Scaleform::GFx::Movie &, extension::gfxi_detail::MovieKeyState &, long, extension::GFXIMultiControllerMode::Spec, bool);
	class Map_t;
private:
	void generateEventKey(std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > &, extension::gfxi_detail::MovieKeyState &, long, bool(*)(long, GameOperations::GameOpSpec, bool, bool, bool &), bool);
	void conflictEventKey(std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > &, Scaleform::Key::Code, Scaleform::Key::Code);
	std::map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > > m_map; // 0x8
	std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > m_releasedKeyBuffer; // 0x18
	std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > m_pressedKeyBuffer; // 0x30
public:
	extension::GFXIKeyMapping::MapImpl & operator=(const extension::GFXIKeyMapping::MapImpl &);
};
class std::map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > > :
	std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > >,0> >
{
	class _Myt;
	class _Mybase;
	typedef unsigned long key_type;
	class mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > pointer;
	typedef const std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > const_pointer;
	typedef std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > reference;
	typedef const std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > >(std::initializer_list<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > >, const std::less<unsigned int> &, const std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > &);
	map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > >(std::initializer_list<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > >, const std::less<unsigned int> &);
	map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > >(std::initializer_list<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > >);
	map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > >(std::map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > > &, const std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > &);
	map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > >(std::map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > > &);
	map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > >(const std::less<unsigned int> &, const std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > &);
	map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > >(const std::less<unsigned int> &);
	map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > >(const std::map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > > &, const std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > &);
	map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > >(const std::map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > > &);
	map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > >(const std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > &);
	map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > >();
	std::map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > > & operator=(std::initializer_list<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > >);
	std::map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > > & operator=(std::map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > > &);
	std::map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > > & operator=(const std::map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > > &);
	std::vector<unsigned char,std::allocator<unsigned char> > & operator[](const unsigned long &);
	std::vector<unsigned char,std::allocator<unsigned char> > & operator[](unsigned long &);
	void swap(std::map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > > &);
	const std::vector<unsigned char,std::allocator<unsigned char> > & at(const unsigned long &);
	std::vector<unsigned char,std::allocator<unsigned char> > & at(const unsigned long &);
	~map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > >();
};
class std::vector<unsigned char,std::allocator<unsigned char> > :
	std::_Vector_alloc<std::_Vec_base_types<unsigned char,std::allocator<unsigned char> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef unsigned char value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef unsigned char *pointer;
	typedef const unsigned char const_pointer;
	typedef unsigned char reference;
	typedef const unsigned char const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<unsigned char,std::allocator<unsigned char> >(std::initializer_list<unsigned char>, const std::allocator<unsigned char> &);
	vector<unsigned char,std::allocator<unsigned char> >(std::vector<unsigned char,std::allocator<unsigned char> > &, const std::allocator<unsigned char> &);
	vector<unsigned char,std::allocator<unsigned char> >(std::vector<unsigned char,std::allocator<unsigned char> > &);
	vector<unsigned char,std::allocator<unsigned char> >(const std::vector<unsigned char,std::allocator<unsigned char> > &, const std::allocator<unsigned char> &);
	vector<unsigned char,std::allocator<unsigned char> >(const std::vector<unsigned char,std::allocator<unsigned char> > &);
	vector<unsigned char,std::allocator<unsigned char> >(unsigned long long, const unsigned char &, const std::allocator<unsigned char> &);
	vector<unsigned char,std::allocator<unsigned char> >(unsigned long long, const unsigned char &);
	vector<unsigned char,std::allocator<unsigned char> >(unsigned long long);
	vector<unsigned char,std::allocator<unsigned char> >(const std::allocator<unsigned char> &);
	vector<unsigned char,std::allocator<unsigned char> >();
	void _Construct_n(unsigned long long, const unsigned char *);
	std::vector<unsigned char,std::allocator<unsigned char> > & operator=(const std::vector<unsigned char,std::allocator<unsigned char> > &);
	std::vector<unsigned char,std::allocator<unsigned char> > & operator=(std::initializer_list<unsigned char>);
	std::vector<unsigned char,std::allocator<unsigned char> > & operator=(std::vector<unsigned char,std::allocator<unsigned char> > &);
	void _Assign_rv(std::vector<unsigned char,std::allocator<unsigned char> > &);
	void _Assign_rv(std::vector<unsigned char,std::allocator<unsigned char> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<unsigned char,std::allocator<unsigned char> > &, std::integral_constant<bool,1>);
	void push_back(const unsigned char &);
	void push_back(unsigned char &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, unsigned long long, const unsigned char &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, const unsigned char &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, std::initializer_list<unsigned char>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, unsigned char &);
	void assign(unsigned long long, const unsigned char &);
	void assign(std::initializer_list<unsigned char>);
	~vector<unsigned char,std::allocator<unsigned char> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const unsigned char &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<unsigned char> get_allocator();
	unsigned char & at(unsigned long long);
	const unsigned char & at(unsigned long long);
	unsigned char & operator[](unsigned long long);
	const unsigned char & operator[](unsigned long long);
	const unsigned char * data();
	unsigned char * data();
	const unsigned char & front();
	unsigned char & front();
	const unsigned char & back();
	unsigned char & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<unsigned char,std::allocator<unsigned char> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(unsigned char *, unsigned char *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const unsigned char *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, unsigned long long, const unsigned char &);
	unsigned char * _Ufill(unsigned char *, unsigned long long, const unsigned char *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(unsigned char *, unsigned char *);
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408AED1C
struct std::pair<enum Scaleform::Key::Code,bool>
{
	struct _Myt;
	enum first_type
	{
		None = 0,
		A = 65,
		B = 66,
		C = 67,
		D = 68,
		E = 69,
		F = 70,
		G = 71,
		H = 72,
		I = 73,
		J = 74,
		K = 75,
		L = 76,
		M = 77,
		N = 78,
		O = 79,
		P = 80,
		Q = 81,
		R = 82,
		S = 83,
		T = 84,
		U = 85,
		V = 86,
		W = 87,
		X = 88,
		Y = 89,
		Z = 90,
		Num0 = 48,
		Num1 = 49,
		Num2 = 50,
		Num3 = 51,
		Num4 = 52,
		Num5 = 53,
		Num6 = 54,
		Num7 = 55,
		Num8 = 56,
		Num9 = 57,
		KP_0 = 96,
		KP_1 = 97,
		KP_2 = 98,
		KP_3 = 99,
		KP_4 = 100,
		KP_5 = 101,
		KP_6 = 102,
		KP_7 = 103,
		KP_8 = 104,
		KP_9 = 105,
		KP_Multiply = 106,
		KP_Add = 107,
		KP_Enter = 108,
		KP_Subtract = 109,
		KP_Decimal = 110,
		KP_Divide = 111,
		F1 = 112,
		F2 = 113,
		F3 = 114,
		F4 = 115,
		F5 = 116,
		F6 = 117,
		F7 = 118,
		F8 = 119,
		F9 = 120,
		F10 = 121,
		F11 = 122,
		F12 = 123,
		F13 = 124,
		F14 = 125,
		F15 = 126,
		Backspace = 8,
		Tab = 9,
		Clear = 12,
		Return = 13,
		Shift = 16,
		Control = 17,
		Alt = 18,
		Pause = 19,
		CapsLock = 20,
		Escape = 27,
		Space = 32,
		PageUp = 33,
		PageDown = 34,
		End = 35,
		Home = 36,
		Left = 37,
		Up = 38,
		Right = 39,
		Down = 40,
		PrintScreen = 44,
		Insert = 45,
		Delete = 46,
		Help = 47,
		NumLock = 144,
		ScrollLock = 145,
		LeftShift = 160,
		RightShift = 161,
		LeftControl = 162,
		RightControl = 163,
		LeftAlt = 164,
		RightAlt = 165,
		Semicolon = 186,
		Equal = 187,
		Comma = 188,
		Minus = 189,
		Period = 190,
		Slash = 191,
		Bar = 192,
		BracketLeft = 219,
		Backslash = 220,
		BracketRight = 221,
		Quote = 222,
		OEM_AX = 225,
		OEM_102 = 226,
		ICO_HELP = 227,
		ICO_00 = 228,
		KeyCount = 229,
	};
	typedef bool second_type;
	pair<enum Scaleform::Key::Code,bool>(std::pair<enum Scaleform::Key::Code,bool> &);
	std::pair<enum Scaleform::Key::Code,bool> & operator=(const std::pair<enum Scaleform::Key::Code,bool> &);
	std::pair<enum Scaleform::Key::Code,bool> & operator=(std::pair<enum Scaleform::Key::Code,bool> &);
	Scaleform::Key::Code first; // 0x0
	bool second; // 0x4
	void swap(std::pair<enum Scaleform::Key::Code,bool> &);
};
class std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > :
	std::_Vector_alloc<std::_Vec_base_types<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<enum Scaleform::Key::Code,bool> pointer;
	typedef const std::pair<enum Scaleform::Key::Code,bool> const_pointer;
	typedef std::pair<enum Scaleform::Key::Code,bool> reference;
	typedef const std::pair<enum Scaleform::Key::Code,bool> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > >(std::initializer_list<std::pair<enum Scaleform::Key::Code,bool> >, const std::allocator<std::pair<enum Scaleform::Key::Code,bool> > &);
	vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > >(std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > &, const std::allocator<std::pair<enum Scaleform::Key::Code,bool> > &);
	vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > >(std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > &);
	vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > >(const std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > &, const std::allocator<std::pair<enum Scaleform::Key::Code,bool> > &);
	vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > >(const std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > &);
	vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > >(unsigned long long, const std::pair<enum Scaleform::Key::Code,bool> &, const std::allocator<std::pair<enum Scaleform::Key::Code,bool> > &);
	vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > >(unsigned long long, const std::pair<enum Scaleform::Key::Code,bool> &);
	vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > >(unsigned long long);
	vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > >(const std::allocator<std::pair<enum Scaleform::Key::Code,bool> > &);
	vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > >();
	void _Construct_n(unsigned long long, const std::pair<enum Scaleform::Key::Code,bool> *);
	std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > & operator=(const std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > &);
	std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > & operator=(std::initializer_list<std::pair<enum Scaleform::Key::Code,bool> >);
	std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > & operator=(std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > &);
	void _Assign_rv(std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > &);
	void _Assign_rv(std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > &, std::integral_constant<bool,1>);
	void push_back(const std::pair<enum Scaleform::Key::Code,bool> &);
	void push_back(std::pair<enum Scaleform::Key::Code,bool> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > >, unsigned long long, const std::pair<enum Scaleform::Key::Code,bool> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > >, const std::pair<enum Scaleform::Key::Code,bool> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > >, std::initializer_list<std::pair<enum Scaleform::Key::Code,bool> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > >, std::pair<enum Scaleform::Key::Code,bool> &);
	void assign(unsigned long long, const std::pair<enum Scaleform::Key::Code,bool> &);
	void assign(std::initializer_list<std::pair<enum Scaleform::Key::Code,bool> >);
	~vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const std::pair<enum Scaleform::Key::Code,bool> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<std::pair<enum Scaleform::Key::Code,bool> > get_allocator();
	std::pair<enum Scaleform::Key::Code,bool> & at(unsigned long long);
	const std::pair<enum Scaleform::Key::Code,bool> & at(unsigned long long);
	std::pair<enum Scaleform::Key::Code,bool> & operator[](unsigned long long);
	const std::pair<enum Scaleform::Key::Code,bool> & operator[](unsigned long long);
	const std::pair<enum Scaleform::Key::Code,bool> * data();
	std::pair<enum Scaleform::Key::Code,bool> * data();
	const std::pair<enum Scaleform::Key::Code,bool> & front();
	std::pair<enum Scaleform::Key::Code,bool> & front();
	const std::pair<enum Scaleform::Key::Code,bool> & back();
	std::pair<enum Scaleform::Key::Code,bool> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(std::pair<enum Scaleform::Key::Code,bool> *, std::pair<enum Scaleform::Key::Code,bool> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const std::pair<enum Scaleform::Key::Code,bool> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<enum Scaleform::Key::Code,bool> > > >, unsigned long long, const std::pair<enum Scaleform::Key::Code,bool> &);
	std::pair<enum Scaleform::Key::Code,bool> * _Ufill(std::pair<enum Scaleform::Key::Code,bool> *, unsigned long long, const std::pair<enum Scaleform::Key::Code,bool> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(std::pair<enum Scaleform::Key::Code,bool> *, std::pair<enum Scaleform::Key::Code,bool> *);
};
extension::GFXIKeyMapping::MapImpl::MapImpl(); // 0x14027BAF0
extension::GFXIKeyMapping::MapImpl::~MapImpl(); // 0x14027BBD0
void extension::GFXIKeyMapping::MapImpl::addMap(const extension::GFXIKeyMapping::MapConfig & config); // 0x14027BC60
bool extension::GFXIKeyMapping::MapImpl::hasMap(const extension::GFXIKeyMapping::MapConfig & config); // 0x14027BD70
void extension::GFXIKeyMapping::MapImpl::generateEventKey(std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > & dst, extension::gfxi_detail::MovieKeyState & keyState, long kbi, bool(*padChecker)(long, GameOperations::GameOpSpec, bool, bool, bool &), bool isDown); // 0x14027BE40
void extension::GFXIKeyMapping::MapImpl::conflictEventKey(std::vector<std::pair<enum Scaleform::Key::Code,bool>,std::allocator<std::pair<enum Scaleform::Key::Code,bool> > > & dst, Scaleform::Key::Code k1, Scaleform::Key::Code k2); // 0x14027C060
void extension::GFXIKeyMapping::MapImpl::postKeyEvent(Scaleform::GFx::Movie & target, extension::gfxi_detail::MovieKeyState & keyState, long kbi, extension::GFXIMultiControllerMode::Spec spec, bool ignoreInput); // 0x14027C280
void extension::GFXIKeyMapping::initialize(const extension::GFXIKeyMapping::MapConfig * bg, const extension::GFXIKeyMapping::MapConfig * en); // 0x14027CBF0
extension::GFXIKeyMapping extension::GFXIKeyMapping::GetDefault(); // 0x14027CCA0
extension::gfxi_detail::MovieKeyEventGenerator::MovieKeyEventGenerator(); // 0x14027CD40
extension::gfxi_detail::MovieKeyEventGenerator::~MovieKeyEventGenerator(); // 0x14027CD60
void extension::gfxi_detail::MovieKeyEventGenerator::bindMapping(const extension::GFXIKeyMapping & mapping); // 0x14027CDB0
extension::gfxi_detail::MovieOperationGenerator::MovieOperationGenerator(); // 0x14027CE10
std::map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > >::~map<unsigned int,std::vector<unsigned char,std::allocator<unsigned char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char,std::allocator<unsigned char> > > > >(); // 0x14027BBA0
void extension::gfxi_detail::MovieOperationGenerator::bindKeyMapping(const extension::GFXIKeyMapping & mapping, long keyboardIndex); // 0x14027CEC0
void extension::gfxi_detail::MovieOperationGenerator::postKeyboardEvent(Scaleform::GFx::Movie & target); // 0x14027CF80//decompilation failure at 1408AED1C!
void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>(
        std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this,
        const std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *_Right,
        std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> > > *_Al)
{
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v5; // rdi
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *i; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v9; // rcx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *j; // rax
  std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> >::_Copy_tag v11; // [rsp+40h] [rbp+8h]

  v11 = (std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> >::_Copy_tag)this;
  this->_Mypair._Myval2._Myval2._Myhead = 0i64;
  this->_Mypair._Myval2._Myval2._Mysize = 0i64;
  v5 = std::_Tree_comp_alloc<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Buyheadnode(this);
  this->_Mypair._Myval2._Myval2._Myhead = v5;
  v5->_Parent = std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Copy_tag>(
                  this,
                  _Right->_Mypair._Myval2._Myval2._Myhead->_Parent,
                  v5,
                  v11);
  this->_Mypair._Myval2._Myval2._Mysize = _Right->_Mypair._Myval2._Myval2._Mysize;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  if ( Parent->_Isnil )
  {
    Myhead->_Left = Myhead;
    this->_Mypair._Myval2._Myval2._Myhead->_Right = this->_Mypair._Myval2._Myval2._Myhead;
  }
  else
  {
    for ( i = Parent->_Left; !i->_Isnil; i = i->_Left )
      Parent = i;
    Myhead->_Left = Parent;
    v9 = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
    for ( j = v9->_Right; !j->_Isnil; j = j->_Right )
      v9 = j;
    this->_Mypair._Myval2._Myval2._Myhead->_Right = v9;
  }
}

std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Buynode<std::pair<unsigned int const,std::vector<unsigned char>> &>(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this,
        std::pair<unsigned int const ,std::vector<unsigned char> > *<_Val_0>)
{
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v3; // rbx

  v3 = std::_Tree_comp_alloc<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Buynode0(this);
  *(_WORD *)&v3->_Color = 0;
  if ( v3 != (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)-32i64 )
  {
    v3->_Myval.first = <_Val_0>->first;
    std::vector<unsigned char>::vector<unsigned char>(&v3->_Myval.second, &<_Val_0>->second);
  }
  return v3;
}

std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<unsigned int const &> *<_Val_1>,
        std::tuple<> *<_Val_2>)
{
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *result; // rax

  result = std::_Tree_comp_alloc<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Buynode0(this);
  *(_WORD *)&result->_Color = 0;
  if ( result != (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)-32i64 )
  {
    result->_Myval.first = *<_Val_1>->_Myfirst._Val;
    result->_Myval.second._Mypair._Myval2._Myfirst = 0i64;
    result->_Myval.second._Mypair._Myval2._Mylast = 0i64;
    result->_Myval.second._Mypair._Myval2._Myend = 0i64;
  }
  return result;
}

std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Copy_tag>(
        std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this,
        std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *_Rootnode,
        std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *_Wherenode,
        std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> >::_Copy_tag _Movefl)
{
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Myhead; // rdi
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v6; // rbx

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( !_Rootnode->_Isnil )
  {
    v6 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Buynode<std::pair<unsigned int const,std::vector<unsigned char>> &>(
           this,
           &_Rootnode->_Myval);
    v6->_Parent = _Wherenode;
    v6->_Color = _Rootnode->_Color;
    if ( Myhead->_Isnil )
      Myhead = v6;
    v6->_Left = std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Copy_tag>(
                  this,
                  _Rootnode->_Left,
                  v6,
                  _Movefl);
    v6->_Right = std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Copy_tag>(
                   this,
                   _Rootnode->_Right,
                   v6,
                   _Movefl);
  }
  return Myhead;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Insert_at<std::pair<unsigned int const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<unsigned int const,std::vector<unsigned char>>,void *> *>(
        std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > *result,
        bool _Addleft,
        std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *_Wherenode,
        std::pair<unsigned int const ,std::vector<unsigned char> > *_Val,
        std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *_Node)
{
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v10; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v12; // r8
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Left; // rdx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Right; // rdx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v15; // rdx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v16; // rcx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v17; // rdx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v18; // r8
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v19; // rcx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v20; // rcx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v21; // rdx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v22; // rcx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v23; // rcx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v24; // rcx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v25; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v26; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > *v27; // rax

  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize >= 0x3FFFFFFFFFFFFFEi64 )
  {
    std::vector<AgDisplayChangedEvent>::_Tidy((std::vector<AgSuspendingEvent> *)&_Node->_Myval.second);
    operator delete(_Node);
    std::_Xlength_error("map/set<T> too long");
  }
  this->_Mypair._Myval2._Myval2._Mysize = Mysize + 1;
  _Node->_Parent = _Wherenode;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = _Node;
    this->_Mypair._Myval2._Myval2._Myhead->_Left = _Node;
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
LABEL_8:
    Myhead->_Right = _Node;
    goto LABEL_9;
  }
  if ( !_Addleft )
  {
    _Wherenode->_Right = _Node;
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
    if ( _Wherenode != this->_Mypair._Myval2._Myval2._Myhead->_Right )
      goto LABEL_9;
    goto LABEL_8;
  }
  _Wherenode->_Left = _Node;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Left )
    this->_Mypair._Myval2._Myval2._Myhead->_Left = _Node;
LABEL_9:
  v10 = _Node;
  while ( !v10->_Parent->_Color )
  {
    Parent = v10->_Parent;
    v12 = Parent->_Parent;
    Left = v12->_Left;
    if ( Parent == v12->_Left )
    {
      Right = v12->_Right;
      if ( Right->_Color )
      {
        if ( v10 == Parent->_Right )
        {
          v15 = Parent->_Right;
          v10 = v10->_Parent;
          Parent->_Right = v15->_Left;
          if ( !v15->_Left->_Isnil )
            v15->_Left->_Parent = Parent;
          v15->_Parent = Parent->_Parent;
          if ( Parent == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
          {
            this->_Mypair._Myval2._Myval2._Myhead->_Parent = v15;
          }
          else
          {
            v16 = Parent->_Parent;
            if ( v10 == v16->_Left )
              v16->_Left = v15;
            else
              v16->_Right = v15;
          }
          v15->_Left = v10;
          v10->_Parent = v15;
        }
        v10->_Parent->_Color = 1;
        v10->_Parent->_Parent->_Color = 0;
        v17 = v10->_Parent->_Parent;
        v18 = v17->_Left;
        v17->_Left = v17->_Left->_Right;
        v19 = v18->_Right;
        if ( !v19->_Isnil )
          v19->_Parent = v17;
        v18->_Parent = v17->_Parent;
        if ( v17 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v18;
          v18->_Right = v17;
        }
        else
        {
          v20 = v17->_Parent;
          if ( v17 == v20->_Right )
            v20->_Right = v18;
          else
            v20->_Left = v18;
          v18->_Right = v17;
        }
LABEL_49:
        v17->_Parent = v18;
        continue;
      }
      Parent->_Color = 1;
      Right->_Color = 1;
      v10->_Parent->_Parent->_Color = 0;
      v10 = v10->_Parent->_Parent;
    }
    else
    {
      if ( Left->_Color )
      {
        if ( v10 == Parent->_Left )
        {
          v21 = Parent->_Left;
          v10 = v10->_Parent;
          Parent->_Left = Parent->_Left->_Right;
          v22 = v21->_Right;
          if ( !v22->_Isnil )
            v22->_Parent = v10;
          v21->_Parent = v10->_Parent;
          if ( v10 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
          {
            this->_Mypair._Myval2._Myval2._Myhead->_Parent = v21;
          }
          else
          {
            v23 = v10->_Parent;
            if ( v10 == v23->_Right )
              v23->_Right = v21;
            else
              v23->_Left = v21;
          }
          v21->_Right = v10;
          v10->_Parent = v21;
        }
        v10->_Parent->_Color = 1;
        v10->_Parent->_Parent->_Color = 0;
        v17 = v10->_Parent->_Parent;
        v18 = v17->_Right;
        v17->_Right = v18->_Left;
        if ( !v18->_Left->_Isnil )
          v18->_Left->_Parent = v17;
        v18->_Parent = v17->_Parent;
        if ( v17 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v18;
        }
        else
        {
          v24 = v17->_Parent;
          if ( v17 == v24->_Left )
            v24->_Left = v18;
          else
            v24->_Right = v18;
        }
        v18->_Left = v17;
        goto LABEL_49;
      }
      Parent->_Color = 1;
      Left->_Color = 1;
      v10->_Parent->_Parent->_Color = 0;
      v10 = v10->_Parent->_Parent;
    }
  }
  v25 = this->_Mypair._Myval2._Myval2._Myhead;
  result->_Ptr = _Node;
  v26 = v25->_Parent;
  v27 = result;
  v26->_Color = 1;
  return v27;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Insert_hint<std::pair<unsigned int const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<unsigned int const,std::vector<unsigned char>>,void *> *>(
        std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > _Where,
        std::pair<unsigned int const ,std::vector<unsigned char> > *_Val,
        std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *_Newnode)
{
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Myhead; // rcx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Right; // r9
  unsigned int first; // edi
  unsigned int v12; // er11
  bool v13; // cf
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Ptr; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Left; // r9
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *j; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *i; // rdx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v18; // r9
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v19; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *m; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *k; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v22; // [rsp+20h] [rbp-38h]
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > >,bool> resulta; // [rsp+38h] [rbp-20h] BYREF

  if ( !this->_Mypair._Myval2._Myval2._Mysize )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Insert_at<std::pair<unsigned int const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<unsigned int const,std::vector<unsigned char>>,void *> *>(
      this,
      result,
      1,
      this->_Mypair._Myval2._Myval2._Myhead,
      (std::pair<unsigned int const ,std::vector<unsigned char> > *)v22,
      _Newnode);
    return result;
  }
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _Where._Ptr == Myhead->_Left )
  {
    if ( _Val->first < _Where._Ptr->_Myval.first )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Insert_at<std::pair<unsigned int const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<unsigned int const,std::vector<unsigned char>>,void *> *>(
        this,
        result,
        1,
        _Where._Ptr,
        (std::pair<unsigned int const ,std::vector<unsigned char> > *)v22,
        _Newnode);
      return result;
    }
    goto LABEL_43;
  }
  if ( _Where._Ptr == Myhead )
  {
    Right = Myhead->_Right;
    if ( Right->_Myval.first < _Val->first )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Insert_at<std::pair<unsigned int const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<unsigned int const,std::vector<unsigned char>>,void *> *>(
        this,
        result,
        0,
        Right,
        (std::pair<unsigned int const ,std::vector<unsigned char> > *)v22,
        _Newnode);
      return result;
    }
    goto LABEL_43;
  }
  first = _Val->first;
  v12 = _Where._Ptr->_Myval.first;
  v13 = v12 < _Val->first;
  if ( v12 > _Val->first )
  {
    Ptr = _Where._Ptr;
    if ( _Where._Ptr->_Isnil )
    {
      Left = _Where._Ptr->_Right;
    }
    else
    {
      Left = _Where._Ptr->_Left;
      if ( _Where._Ptr->_Left->_Isnil )
      {
        for ( i = _Where._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
        {
          if ( Ptr != i->_Left )
            break;
          Ptr = i;
        }
        Left = Ptr;
        if ( !Ptr->_Isnil )
          Left = i;
      }
      else
      {
        for ( j = Left->_Right; !j->_Isnil; j = j->_Right )
          Left = j;
      }
    }
    if ( Left->_Myval.first < first )
    {
      if ( Left->_Right->_Isnil )
        std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Insert_at<std::pair<unsigned int const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<unsigned int const,std::vector<unsigned char>>,void *> *>(
          this,
          result,
          0,
          Left,
          (std::pair<unsigned int const ,std::vector<unsigned char> > *)v22,
          _Newnode);
      else
        std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Insert_at<std::pair<unsigned int const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<unsigned int const,std::vector<unsigned char>>,void *> *>(
          this,
          result,
          1,
          _Where._Ptr,
          (std::pair<unsigned int const ,std::vector<unsigned char> > *)v22,
          _Newnode);
      return result;
    }
    v13 = v12 < first;
  }
  if ( !v13 )
    goto LABEL_43;
  v18 = _Where._Ptr;
  if ( !_Where._Ptr->_Isnil )
  {
    v19 = _Where._Ptr->_Right;
    if ( v19->_Isnil )
    {
      for ( k = _Where._Ptr->_Parent; !k->_Isnil; k = k->_Parent )
      {
        if ( v18 != k->_Right )
          break;
        v18 = k;
      }
      v18 = k;
    }
    else
    {
      v18 = _Where._Ptr->_Right;
      for ( m = v19->_Left; !m->_Isnil; m = m->_Left )
        v18 = m;
    }
  }
  if ( v18 != Myhead && first >= v18->_Myval.first )
  {
LABEL_43:
    result->_Ptr = (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Insert_nohint<std::pair<unsigned int const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<unsigned int const,std::vector<unsigned char>>,void *> *>(this, &resulta, (bool)_Where._Ptr, _Val, _Newnode)->first;
    return result;
  }
  if ( _Where._Ptr->_Right->_Isnil )
    std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Insert_at<std::pair<unsigned int const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<unsigned int const,std::vector<unsigned char>>,void *> *>(
      this,
      result,
      0,
      _Where._Ptr,
      (std::pair<unsigned int const ,std::vector<unsigned char> > *)v22,
      _Newnode);
  else
    std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Insert_at<std::pair<unsigned int const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<unsigned int const,std::vector<unsigned char>>,void *> *>(
      this,
      result,
      1,
      v18,
      (std::pair<unsigned int const ,std::vector<unsigned char> > *)v22,
      _Newnode);
  return result;
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Insert_nohint<std::pair<unsigned int const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<unsigned int const,std::vector<unsigned char>>,void *> *>(
        std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > >,bool> *result,
        bool _Leftish,
        std::pair<unsigned int const ,std::vector<unsigned char> > *_Val,
        std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *_Newnode)
{
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Parent; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Myhead; // r9
  bool v9; // r8
  unsigned int first; // edx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Right; // rbx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *j; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *i; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v15; // rdi
  std::pair<unsigned int const ,std::vector<unsigned char> > *v16; // [rsp+20h] [rbp-28h]
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > resulta; // [rsp+50h] [rbp+8h] BYREF

  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  v9 = 1;
  if ( !Parent->_Isnil )
  {
    first = _Val->first;
    do
    {
      Myhead = Parent;
      v9 = first < Parent->_Myval.first;
      if ( first >= Parent->_Myval.first )
        Parent = Parent->_Right;
      else
        Parent = Parent->_Left;
    }
    while ( !Parent->_Isnil );
  }
  Right = Myhead;
  if ( v9 )
  {
    if ( Myhead == this->_Mypair._Myval2._Myval2._Myhead->_Left )
    {
      result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > >)std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Insert_at<std::pair<unsigned int const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<unsigned int const,std::vector<unsigned char>>,void *> *>(this, &resulta, 1, Myhead, v16, _Newnode)->_Ptr;
      result->second = 1;
      return result;
    }
    if ( Myhead->_Isnil )
    {
      Right = Myhead->_Right;
    }
    else if ( Myhead->_Left->_Isnil )
    {
      for ( i = Myhead->_Parent; !i->_Isnil; i = i->_Parent )
      {
        if ( Right != i->_Left )
          break;
        Right = i;
      }
      if ( !Right->_Isnil )
        Right = i;
    }
    else
    {
      Right = Myhead->_Left;
      for ( j = Myhead->_Left->_Right; !j->_Isnil; j = j->_Right )
        Right = j;
    }
  }
  if ( Right->_Myval.first >= _Val->first )
  {
    v15 = _Newnode;
    std::vector<AgDisplayChangedEvent>::_Tidy((std::vector<AgSuspendingEvent> *)&_Newnode->_Myval.second);
    operator delete(v15);
    result->first._Ptr = Right;
    result->second = 0;
  }
  else
  {
    result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > >)std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Insert_at<std::pair<unsigned int const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<unsigned int const,std::vector<unsigned char>>,void *> *>(this, &resulta, v9, Myhead, v16, _Newnode)->_Ptr;
    result->second = 1;
  }
  return result;
}

std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *__fastcall std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_First,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Last,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Dest,
        std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *_Al)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  signed __int64 v6; // rcx

  v4 = 0i64;
  v5 = (unsigned __int64)((char *)_Last - (char *)_First + 7) >> 3;
  if ( _First > _Last )
    v5 = 0i64;
  if ( v5 )
  {
    v6 = (char *)_First - (char *)_Dest;
    do
    {
      if ( _Dest )
        _Dest->_Ptr = *(std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> **)((char *)_Dest + v6);
      ++_Dest;
      ++v4;
    }
    while ( v4 != v5 );
  }
  return _Dest;
}

void __fastcall std::vector<unsigned char>::vector<unsigned char>(
        std::vector<unsigned char> *this,
        const std::vector<unsigned char> *_Right)
{
  unsigned __int64 v4; // rbx
  unsigned __int8 *v5; // rax
  unsigned __int8 *Myfirst; // rax
  unsigned __int8 *v7; // rbx
  size_t v8; // rdi

  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  v4 = _Right->_Mypair._Myval2._Mylast - _Right->_Mypair._Myval2._Myfirst;
  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  if ( v4 )
  {
    v5 = std::_Wrap_alloc<std::allocator<unsigned char>>::allocate(
           (std::_Wrap_alloc<std::allocator<unsigned char> > *)this,
           v4);
    this->_Mypair._Myval2._Myfirst = v5;
    this->_Mypair._Myval2._Mylast = v5;
    Myfirst = this->_Mypair._Myval2._Myfirst;
    this->_Mypair._Myval2._Myend = &this->_Mypair._Myval2._Myfirst[v4];
    v7 = Myfirst;
    v8 = _Right->_Mypair._Myval2._Mylast - _Right->_Mypair._Myval2._Myfirst;
    memmove(Myfirst, _Right->_Mypair._Myval2._Myfirst, v8);
    this->_Mypair._Myval2._Mylast = &v7[v8];
  }
}

void __fastcall std::vector<std::pair<enum Scaleform::Key::Code,bool>>::vector<std::pair<enum Scaleform::Key::Code,bool>>(
        std::vector<std::pair<enum Scaleform::Key::Code,bool>> *this,
        const std::vector<std::pair<enum Scaleform::Key::Code,bool>> *_Right)
{
  unsigned __int64 v4; // rdi
  std::pair<enum Scaleform::Key::Code,bool> *v5; // rax
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *Myfirst; // rax
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v7; // r9

  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  v4 = _Right->_Mypair._Myval2._Mylast - _Right->_Mypair._Myval2._Myfirst;
  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  if ( v4 )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    v5 = (std::pair<enum Scaleform::Key::Code,bool> *)std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>>>>>>>>::allocate(
                                                        (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)this,
                                                        v4);
    this->_Mypair._Myval2._Myfirst = v5;
    this->_Mypair._Myval2._Mylast = v5;
    Myfirst = (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)this->_Mypair._Myval2._Myfirst;
    this->_Mypair._Myval2._Myend = &this->_Mypair._Myval2._Myfirst[v4];
    this->_Mypair._Myval2._Mylast = (std::pair<enum Scaleform::Key::Code,bool> *)std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
                                                                                   (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)_Right->_Mypair._Myval2._Myfirst,
                                                                                   (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)_Right->_Mypair._Myval2._Mylast,
                                                                                   Myfirst,
                                                                                   v7);
  }
}

void __fastcall extension::GFXIKeyMapping::MapImpl::MapImpl(extension::GFXIKeyMapping::MapImpl *this)
{
  this->m_refCount.m_value._My_val = 1i64;
  this->m_map._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_map._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_map._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Buyheadnode((std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *)this);
  this->m_releasedKeyBuffer._Mypair._Myval2._Myfirst = 0i64;
  this->m_releasedKeyBuffer._Mypair._Myval2._Mylast = 0i64;
  this->m_releasedKeyBuffer._Mypair._Myval2._Myend = 0i64;
  this->m_pressedKeyBuffer._Mypair._Myval2._Myfirst = 0i64;
  this->m_pressedKeyBuffer._Mypair._Myval2._Mylast = 0i64;
  this->m_pressedKeyBuffer._Mypair._Myval2._Myend = 0i64;
  if ( (unsigned __int64)(this->m_releasedKeyBuffer._Mypair._Myval2._Myend
                        - this->m_releasedKeyBuffer._Mypair._Myval2._Myfirst) < 0xE5 )
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>::_Reallocate(
      (std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)&this->m_releasedKeyBuffer,
      0xE5ui64);
  if ( (unsigned __int64)(this->m_pressedKeyBuffer._Mypair._Myval2._Myend
                        - this->m_pressedKeyBuffer._Mypair._Myval2._Myfirst) < 0xE5 )
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>::_Reallocate(
      (std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)&this->m_pressedKeyBuffer,
      0xE5ui64);
}

void __fastcall extension::gfxi_detail::MovieKeyEventGenerator::MovieKeyEventGenerator(
        extension::gfxi_detail::MovieKeyEventGenerator *this)
{
  this->m_keyState.m_keybits._Array[0] = 0i64;
  this->m_keyState.m_keybits._Array[1] = 0i64;
  this->m_keyState.m_keybits._Array[2] = 0i64;
  this->m_keyState.m_keybits._Array[3] = 0i64;
  this->m_mapping.m_mapImpl.m_ptr = 0i64;
}

void __fastcall extension::gfxi_detail::MovieOperationGenerator::MovieOperationGenerator(
        extension::gfxi_detail::MovieOperationGenerator *this)
{
  const extension::GFXIKeyMapping *Default; // rax
  extension::GFXIKeyMapping::MapImpl *m_ptr; // rdi
  extension::GFXIKeyMapping result; // [rsp+58h] [rbp+10h] BYREF

  this->m_multiControllerMode = Default;
  `eh vector constructor iterator'(
    this->m_keyEventGenerator,
    0x28ui64,
    4ui64,
    (void (__fastcall *)(void *))extension::gfxi_detail::MovieKeyEventGenerator::MovieKeyEventGenerator,
    (void (__fastcall *)(void *))extension::gfxi_detail::MovieKeyEventGenerator::~MovieKeyEventGenerator);
  Default = extension::GFXIKeyMapping::GetDefault(&result);
  extension::gfxi_detail::MovieOperationGenerator::bindKeyMapping(this, Default, -1);
  m_ptr = result.m_mapImpl.m_ptr;
  if ( result.m_mapImpl.m_ptr
    && _InterlockedExchangeAdd64((volatile signed __int64 *)result.m_mapImpl.m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( m_ptr )
    {
      extension::GFXIKeyMapping::MapImpl::~MapImpl(m_ptr);
      operator delete(m_ptr, 0x48ui64);
    }
  }
}

void __fastcall extension::RefCountablePtr<extension::GFXIKeyMapping::MapImpl>::~RefCountablePtr<extension::GFXIKeyMapping::MapImpl>(
        extension::GFXIKeyMapping *this)
{
  extension::GFXIKeyMapping::MapImpl *m_ptr; // rbx

  m_ptr = this->m_mapImpl.m_ptr;
  if ( this->m_mapImpl.m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( m_ptr )
    {
      extension::GFXIKeyMapping::MapImpl::~MapImpl(m_ptr);
      operator delete(m_ptr, 0x48ui64);
    }
  }
}

void __fastcall std::_List_buy<int>::~_List_buy<int>(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::map<unsigned int,std::vector<unsigned char>>::~map<unsigned int,std::vector<unsigned char>>(
        std::map<unsigned int,std::vector<unsigned char>> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > result; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>>>>(
        std::vector<unsigned char *> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall extension::GFXIKeyMapping::MapImpl::~MapImpl(extension::GFXIKeyMapping::MapImpl *this)
{
  AgLogger **Myfirst; // rdx
  AgLogger **v3; // rdx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > result; // [rsp+30h] [rbp+8h] BYREF

  Myfirst = (AgLogger **)this->m_pressedKeyBuffer._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      Myfirst,
      ((char *)this->m_pressedKeyBuffer._Mypair._Myval2._Myend - (char *)Myfirst) >> 3);
    this->m_pressedKeyBuffer._Mypair._Myval2._Myfirst = 0i64;
    this->m_pressedKeyBuffer._Mypair._Myval2._Mylast = 0i64;
    this->m_pressedKeyBuffer._Mypair._Myval2._Myend = 0i64;
  }
  v3 = (AgLogger **)this->m_releasedKeyBuffer._Mypair._Myval2._Myfirst;
  if ( v3 )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      v3,
      ((char *)this->m_releasedKeyBuffer._Mypair._Myval2._Myend - (char *)v3) >> 3);
    this->m_releasedKeyBuffer._Mypair._Myval2._Myfirst = 0i64;
    this->m_releasedKeyBuffer._Mypair._Myval2._Mylast = 0i64;
    this->m_releasedKeyBuffer._Mypair._Myval2._Myend = 0i64;
  }
  std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::erase(
    &this->m_map,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > >)this->m_map._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > >)this->m_map._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_map._Mypair._Myval2._Myval2._Myhead);
}

void __fastcall extension::gfxi_detail::MovieKeyEventGenerator::~MovieKeyEventGenerator(
        extension::gfxi_detail::MovieKeyEventGenerator *this)
{
  extension::GFXIKeyMapping::MapImpl *m_ptr; // rbx

  m_ptr = this->m_mapping.m_mapImpl.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::GFXIKeyMapping::MapImpl::~MapImpl(m_ptr);
      operator delete(m_ptr, 0x48ui64);
    }
  }
}

extension::GFXIKeyMapping *__fastcall extension::GFXIKeyMapping::GetDefault(extension::GFXIKeyMapping *result)
{
  const extension::GFXIKeyMapping::MapConfig *v2; // rdx
  extension::GFXIKeyMapping *v3; // rcx

  if ( dword_140ACDF78 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&dword_140ACDF78);
    if ( dword_140ACDF78 == -1 )
    {
      extension::GFXIKeyMapping::initialize(
        v3,
        v2,
        (const extension::GFXIKeyMapping::MapConfig *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[3][88]);
      atexit(extension::GFXIKeyMapping::GetDefault_::_2_::_dynamic_atexit_destructor_for__the_default__);
      Init_thread_footer(&dword_140ACDF78);
    }
  }
  result->m_mapImpl.m_ptr = the_default.m_mapImpl.m_ptr;
  if ( the_default.m_mapImpl.m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)the_default.m_mapImpl.m_ptr, 1ui64);
  return result;
}

std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this)
{
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *result; // rax

  result = (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)operator new(0x40ui64);
  if ( result )
    result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this)
{
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *result; // rax

  result = (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)operator new(0x40ui64);
  if ( result )
    result->_Left = this->_Mypair._Myval2._Myval2._Myhead;
  if ( result != (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)-8i64 )
    result->_Parent = this->_Mypair._Myval2._Myval2._Myhead;
  if ( result != (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)-16i64 )
    result->_Right = this->_Mypair._Myval2._Myval2._Myhead;
  return result;
}

void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Erase(
        std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this,
        std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *_Rootnode)
{
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v2; // rbx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *i; // rdi
  unsigned __int8 *Myfirst; // rcx
  unsigned __int8 *v6; // rax
  unsigned __int64 v7; // rcx

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Erase(
      this,
      i->_Right);
    Myfirst = v2->_Myval.second._Mypair._Myval2._Myfirst;
    i = i->_Left;
    if ( Myfirst )
    {
      if ( (unsigned __int8 *)(v2->_Myval.second._Mypair._Myval2._Myend - Myfirst) >= (unsigned __int8 *)0x1000 )
      {
        if ( ((unsigned __int8)Myfirst & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v6 = (unsigned __int8 *)*((_QWORD *)Myfirst - 1);
        if ( v6 >= Myfirst )
          invalid_parameter_noinfo_noreturn();
        v7 = Myfirst - v6;
        if ( v7 < 8 )
          invalid_parameter_noinfo_noreturn();
        if ( v7 > 0x27 )
          invalid_parameter_noinfo_noreturn();
        Myfirst = v6;
      }
      operator delete(Myfirst);
      v2->_Myval.second._Mypair._Myval2._Myfirst = 0i64;
      v2->_Myval.second._Mypair._Myval2._Mylast = 0i64;
      v2->_Myval.second._Mypair._Myval2._Myend = 0i64;
    }
    operator delete(v2);
  }
}

std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > *__fastcall std::vector<unsigned char>::_Insert_n(
        std::vector<unsigned char> *this,
        std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > *result,
        std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > _Where,
        unsigned __int64 _Count,
        const unsigned __int8 *_Val)
{
  unsigned __int8 *Myfirst; // rcx
  unsigned __int8 *v8; // r14
  unsigned __int8 *Mylast; // rsi
  __int64 v10; // rsi
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r9
  unsigned __int8 *v13; // rdx
  unsigned __int8 *v14; // rsi
  signed __int64 v15; // rbx
  signed __int64 v16; // rbx
  unsigned __int8 v17; // bl

  Myfirst = this->_Mypair._Myval2._Myfirst;
  v8 = (unsigned __int8 *)(_Where._Ptr - Myfirst);
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( this->_Mypair._Myval2._Myend == Mylast )
  {
    v10 = Mylast - Myfirst;
    if ( v10 == -1 )
      std::_Xlength_error("vector<T> too long");
    v11 = v10 + 1;
    v12 = this->_Mypair._Myval2._Myend - Myfirst;
    v13 = 0i64;
    if ( ~(v12 >> 1) >= v12 )
      v13 = (unsigned __int8 *)(v12 + (v12 >> 1));
    if ( (unsigned __int64)v13 >= v11 )
      v11 = (unsigned __int64)v13;
    v14 = std::_Wrap_alloc<std::allocator<unsigned char>>::allocate(
            (std::_Wrap_alloc<std::allocator<unsigned char> > *)this,
            v11);
    v15 = _Where._Ptr - this->_Mypair._Myval2._Myfirst;
    v14[v15] = *_Val;
    memmove(v14, this->_Mypair._Myval2._Myfirst, _Where._Ptr - this->_Mypair._Myval2._Myfirst);
    memmove(&v14[v15 + 1], _Where._Ptr, this->_Mypair._Myval2._Mylast - _Where._Ptr);
    v16 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst + 1;
    if ( this->_Mypair._Myval2._Myfirst )
      std::_Wrap_alloc<std::allocator<unsigned char>>::deallocate(
        (std::_Wrap_alloc<std::allocator<AgSuspendingEvent> > *)this,
        (AgSuspendingEvent *)this->_Mypair._Myval2._Myfirst,
        this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myend = &v14[v11];
    this->_Mypair._Myval2._Mylast = &v14[v16];
    this->_Mypair._Myval2._Myfirst = v14;
  }
  else
  {
    v17 = *_Val;
    if ( Mylast == _Where._Ptr )
    {
      memmove(_Where._Ptr + 1, _Where._Ptr, Mylast - _Where._Ptr);
      memset(this->_Mypair._Myval2._Mylast, v17, _Where._Ptr - this->_Mypair._Myval2._Mylast + 1);
      memset(_Where._Ptr, v17, ++this->_Mypair._Myval2._Mylast - _Where._Ptr - 1);
    }
    else
    {
      memmove(this->_Mypair._Myval2._Mylast, Mylast - 1, 1ui64);
      this->_Mypair._Myval2._Mylast = Mylast + 1;
      memmove(_Where._Ptr + 1, _Where._Ptr, Mylast - _Where._Ptr - 1);
      *_Where._Ptr = v17;
    }
  }
  result->_Ptr = &v8[(unsigned __int64)this->_Mypair._Myval2._Myfirst];
  return result;
}

void __fastcall std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Wherenode)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Right; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Parent; // rax

  Right = _Wherenode->_Right;
  _Wherenode->_Right = Right->_Left;
  if ( !Right->_Left->_Isnil )
    Right->_Left->_Parent = _Wherenode;
  Right->_Parent = _Wherenode->_Parent;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = Right;
    Right->_Left = _Wherenode;
    _Wherenode->_Parent = Right;
  }
  else
  {
    Parent = _Wherenode->_Parent;
    if ( _Wherenode == Parent->_Left )
      Parent->_Left = Right;
    else
      Parent->_Right = Right;
    Right->_Left = _Wherenode;
    _Wherenode->_Parent = Right;
  }
}

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>::_Reallocate(
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *this,
        unsigned __int64 _Count)
{
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v4; // rdi
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v5; // r9
  std::allocator<AgLogger *> *v6; // rcx
  signed __int64 v7; // rsi

  v4 = std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>>>>>>>>::allocate(
         (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)this,
         _Count);
  std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    v5);
  v7 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v6,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = &v4[v7];
  this->_Mypair._Myval2._Myfirst = v4;
}

void __fastcall std::vector<std::pair<enum Scaleform::Key::Code,bool>>::_Reserve(
        std::vector<std::pair<enum Scaleform::Key::Code,bool>> *this,
        unsigned __int64 _Count)
{
  std::pair<enum Scaleform::Key::Code,bool> *Myend; // r9
  std::pair<enum Scaleform::Key::Code,bool> *Mylast; // rdx
  std::pair<enum Scaleform::Key::Code,bool> *Myfirst; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( !(Myend - Mylast) )
  {
    Myfirst = this->_Mypair._Myval2._Myfirst;
    v6 = Mylast - Myfirst;
    if ( v6 == 0x1FFFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + 1;
    v8 = Myend - Myfirst;
    v9 = 0i64;
    if ( 0x1FFFFFFFFFFFFFFFi64 - (v8 >> 1) >= v8 )
      v9 = v8 + (v8 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>::_Reallocate(
      (std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)this,
      v7);
  }
}

void __fastcall std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Wherenode)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Left; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Right; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Parent; // rax

  Left = _Wherenode->_Left;
  _Wherenode->_Left = _Wherenode->_Left->_Right;
  Right = Left->_Right;
  if ( !Right->_Isnil )
    Right->_Parent = _Wherenode;
  Left->_Parent = _Wherenode->_Parent;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = Left;
    Left->_Right = _Wherenode;
    _Wherenode->_Parent = Left;
  }
  else
  {
    Parent = _Wherenode->_Parent;
    if ( _Wherenode == Parent->_Right )
      Parent->_Right = Left;
    else
      Parent->_Left = Left;
    Left->_Right = _Wherenode;
    _Wherenode->_Parent = Left;
  }
}

void __fastcall extension::GFXIKeyMapping::MapImpl::addMap(
        extension::GFXIKeyMapping::MapImpl *this,
        const extension::GFXIKeyMapping::MapConfig *config,
        __int64 a3,
        std::tuple<> *a4)
{
  std::map<unsigned int,std::vector<unsigned char>> *p_m_map; // rsi
  unsigned __int32 v6; // er8
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Myhead; // rax
  const unsigned int *Val; // rbx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *_Newnode; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // r9
  unsigned __int8 keyCode; // r10
  __int64 v14; // r8
  std::tuple<unsigned int const &> v15; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int32 v16; // [rsp+58h] [rbp+10h] BYREF
  std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > result; // [rsp+60h] [rbp+18h] BYREF

  p_m_map = &this->m_map;
  v6 = (2 * config->op) | config->isRepeat;
  Myhead = this->m_map._Mypair._Myval2._Myval2._Myhead;
  v16 = v6;
  Val = (const unsigned int *)Myhead;
  Parent = Myhead->_Parent;
  while ( !Parent->_Isnil )
  {
    if ( Parent->_Myval.first >= v6 )
    {
      Val = (const unsigned int *)Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  if ( Val == (const unsigned int *)Myhead || v6 < Val[8] )
  {
    v15._Myfirst._Val = &v16;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                 p_m_map,
                 (const std::piecewise_construct_t *)config,
                 &v15,
                 a4);
    std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Insert_hint<std::pair<unsigned int const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<unsigned int const,std::vector<unsigned char>>,void *> *>(
      p_m_map,
      (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > *)&v15,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > >)Val,
      &_Newnode->_Myval,
      _Newnode);
    Val = v15._Myfirst._Val;
  }
  v11 = (_BYTE *)*((_QWORD *)Val + 6);
  v12 = (_BYTE *)*((_QWORD *)Val + 5);
  keyCode = config->keyCode;
  v14 = v11 - v12;
  LOBYTE(v15._Myfirst._Val) = config->keyCode;
  while ( v14 > 0 )
  {
    if ( v12[v14 / 2] >= keyCode )
    {
      v14 /= 2i64;
    }
    else
    {
      v12 += v14 / 2 + 1;
      v14 += -1 - v14 / 2;
    }
  }
  if ( v12 == v11 || *v12 != keyCode )
    std::vector<unsigned char>::_Insert_n(
      (std::vector<unsigned char> *)(Val + 10),
      &result,
      (std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >)v12,
      (unsigned __int64)v12,
      (const unsigned __int8 *)&v15);
}

std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *__fastcall std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>>>>>>>>::allocate(
        std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *this,
        unsigned __int64 _Count)
{
  unsigned __int64 v3; // rcx
  void *v4; // rax

  if ( !_Count )
    return 0i64;
  if ( _Count > 0x1FFFFFFFFFFFFFFFi64 )
    std::_Xbad_alloc();
  v3 = 8 * _Count;
  if ( 8 * _Count < 0x1000 )
    return (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)operator new(v3);
  if ( v3 + 39 <= v3 )
    std::_Xbad_alloc();
  v4 = operator new(v3 + 39);
  *(_QWORD *)((((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64) - 8) = v4;
  return (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
}

void __fastcall extension::gfxi_detail::MovieOperationGenerator::bindKeyMapping(
        extension::gfxi_detail::MovieOperationGenerator *this,
        const extension::GFXIKeyMapping *mapping,
        int keyboardIndex)
{
  extension::gfxi_detail::MovieOperationGenerator *v4; // rsi
  extension::GFXIKeyMapping *p_m_mapping; // rdi
  extension::GFXIKeyMapping::MapImpl *m_ptr; // rcx
  extension::GFXIKeyMapping::MapImpl *v7; // rbx

  if ( keyboardIndex >= 0 )
  {
    if ( keyboardIndex < 4 )
      extension::gfxi_detail::MovieKeyEventGenerator::bindMapping(
        (extension::gfxi_detail::MovieKeyEventGenerator *)((char *)this->m_keyEventGenerator
                                                         + 32 * keyboardIndex
                                                         + 8 * keyboardIndex),
        mapping);
  }
  else
  {
    v4 = this + 1;
    if ( this->m_keyEventGenerator != (extension::gfxi_detail::MovieKeyEventGenerator *)&this[1] )
    {
      p_m_mapping = &this->m_keyEventGenerator[0].m_mapping;
      do
      {
        m_ptr = mapping->m_mapImpl.m_ptr;
        if ( mapping->m_mapImpl.m_ptr )
          _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 1ui64);
        v7 = p_m_mapping->m_mapImpl.m_ptr;
        p_m_mapping->m_mapImpl.m_ptr = m_ptr;
        if ( v7 )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            extension::GFXIKeyMapping::MapImpl::~MapImpl(v7);
            operator delete(v7, 0x48ui64);
          }
        }
        p_m_mapping += 5;
      }
      while ( &p_m_mapping[-4] != (extension::GFXIKeyMapping *)v4 );
    }
  }
}

void __fastcall extension::gfxi_detail::MovieKeyEventGenerator::bindMapping(
        extension::gfxi_detail::MovieKeyEventGenerator *this,
        const extension::GFXIKeyMapping *mapping)
{
  extension::GFXIKeyMapping::MapImpl *m_ptr; // r8
  extension::GFXIKeyMapping::MapImpl *v3; // rbx

  m_ptr = mapping->m_mapImpl.m_ptr;
  if ( mapping->m_mapImpl.m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 1ui64);
  v3 = this->m_mapping.m_mapImpl.m_ptr;
  this->m_mapping.m_mapImpl.m_ptr = m_ptr;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::GFXIKeyMapping::MapImpl::~MapImpl(v3);
      operator delete(v3, 0x48ui64);
    }
  }
}

void __fastcall extension::GFXIKeyMapping::MapImpl::conflictEventKey(
        extension::GFXIKeyMapping::MapImpl *this,
        std::vector<std::pair<enum Scaleform::Key::Code,bool>> *dst,
        Scaleform::Key::Code k1,
        Scaleform::Key::Code k2)
{
  std::pair<enum Scaleform::Key::Code,bool> *Mylast; // rbx
  int v5; // er11
  std::pair<enum Scaleform::Key::Code,bool> *Myfirst; // rax
  __int64 v7; // rbp
  int v10; // er10
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // r10
  __int64 k; // rdx
  std::pair<enum Scaleform::Key::Code,bool> *v16; // r8
  std::pair<enum Scaleform::Key::Code,bool> *m; // rcx
  __int64 i; // rdx
  std::pair<enum Scaleform::Key::Code,bool> *v19; // r8
  std::pair<enum Scaleform::Key::Code,bool> *j; // rcx

  Mylast = dst->_Mypair._Myval2._Mylast;
  v5 = 0;
  Myfirst = dst->_Mypair._Myval2._Myfirst;
  v7 = Mylast - dst->_Mypair._Myval2._Myfirst;
  v10 = 0;
  if ( (int)v7 > 0 )
  {
    v11 = 0i64;
    while ( 1 )
    {
      if ( Mylast - Myfirst <= v11 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( Myfirst[v11].first == k1 )
      {
        v12 = v10;
        if ( (__int64)v11 < (int)v7 )
          break;
      }
LABEL_9:
      ++v10;
      if ( (__int64)++v11 >= (int)v7 )
      {
        v13 = 0i64;
        while ( 1 )
        {
          if ( Mylast - Myfirst <= v13 )
            std::_Xout_of_range("invalid vector<T> subscript");
          if ( Myfirst[v13].first == k2 )
          {
            v14 = v5;
            if ( (__int64)v13 < (int)v7 )
              break;
          }
LABEL_17:
          ++v5;
          if ( (__int64)++v13 >= (int)v7 )
            return;
        }
        while ( 1 )
        {
          if ( Mylast - Myfirst <= v13 )
            std::_Xout_of_range("invalid vector<T> subscript");
          if ( Myfirst[v13].first == k1 )
            break;
          ++v5;
          if ( (__int64)++v13 >= (int)v7 )
            goto LABEL_17;
        }
        for ( i = (__int64)&Myfirst[v14 + 1]; (std::pair<enum Scaleform::Key::Code,bool> *)i != Mylast; i += 8i64 )
        {
          *(_DWORD *)(i - 8) = *(_DWORD *)i;
          *(_BYTE *)(i - 4) = *(_BYTE *)(i + 4);
        }
        v19 = --dst->_Mypair._Myval2._Mylast;
        for ( j = &dst->_Mypair._Myval2._Myfirst[v5]; j != v19; ++j )
        {
          j[-1].first = j->first;
          j[-1].second = j->second;
        }
        goto LABEL_23;
      }
    }
    while ( 1 )
    {
      if ( Mylast - Myfirst <= v11 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( Myfirst[v11].first == k2 )
        break;
      ++v10;
      if ( (__int64)++v11 >= (int)v7 )
        goto LABEL_9;
    }
    for ( k = (__int64)&Myfirst[v12 + 1]; (std::pair<enum Scaleform::Key::Code,bool> *)k != Mylast; k += 8i64 )
    {
      *(_DWORD *)(k - 8) = *(_DWORD *)k;
      *(_BYTE *)(k - 4) = *(_BYTE *)(k + 4);
    }
    v16 = --dst->_Mypair._Myval2._Mylast;
    for ( m = &dst->_Mypair._Myval2._Myfirst[v10]; m != v16; ++m )
    {
      m[-1].first = m->first;
      m[-1].second = m->second;
    }
LABEL_23:
    --dst->_Mypair._Myval2._Mylast;
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

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > _Last)
{
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v7; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Right; // rdx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *j; // rcx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > resulta; // [rsp+40h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v13; // [rsp+50h] [rbp+18h]
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Ptr; // [rsp+58h] [rbp+20h]

  Ptr = _Last._Ptr;
  v13 = _First._Ptr;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left && _Last._Ptr == Myhead )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Erase(
      this,
      Myhead->_Parent);
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Myhead->_Left = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Myhead->_Right = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Mysize = 0i64;
    result->_Ptr = this->_Mypair._Myval2._Myval2._Myhead->_Left;
  }
  else
  {
    if ( _First._Ptr != _Last._Ptr )
    {
      do
      {
        v7 = _First._Ptr;
        if ( !_First._Ptr->_Isnil )
        {
          Right = _First._Ptr->_Right;
          if ( Right->_Isnil )
          {
            for ( i = _First._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
            {
              if ( _First._Ptr != i->_Right )
                break;
              _First._Ptr = i;
              v13 = i;
            }
            v13 = i;
          }
          else
          {
            for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
              Right = j;
            v13 = Right;
          }
        }
        std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > >)v7);
        _First._Ptr = v13;
      }
      while ( v13 != Ptr );
    }
    result->_Ptr = _First._Ptr;
  }
  return result;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > _Where)
{
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v5; // rbx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Right; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *j; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *i; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v9; // r10
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Parent; // r9
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *k; // rcx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Left; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v14; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *m; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > *v16; // rax
  char Color; // cl
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v18; // r11
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v19; // rsi
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v20; // rdx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v21; // rcx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v22; // rax
  unsigned __int8 *Myfirst; // rcx
  unsigned __int8 *v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Ptr; // [rsp+50h] [rbp+18h]

  Ptr = _Where._Ptr;
  v5 = _Where._Ptr;
  if ( !_Where._Ptr->_Isnil )
  {
    Right = _Where._Ptr->_Right;
    if ( Right->_Isnil )
    {
      for ( i = _Where._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
      {
        if ( _Where._Ptr != i->_Right )
          break;
        _Where._Ptr = i;
      }
      _Where._Ptr = i;
      Ptr = i;
    }
    else
    {
      _Where._Ptr = _Where._Ptr->_Right;
      for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
        _Where._Ptr = j;
      Ptr = _Where._Ptr;
    }
  }
  if ( v5->_Left->_Isnil )
  {
    v9 = v5->_Right;
LABEL_15:
    Parent = v5->_Parent;
    if ( !v9->_Isnil )
      v9->_Parent = Parent;
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Parent == v5 )
    {
      this->_Mypair._Myval2._Myval2._Myhead->_Parent = v9;
    }
    else if ( Parent->_Left == v5 )
    {
      Parent->_Left = v9;
    }
    else
    {
      Parent->_Right = v9;
    }
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Left == v5 )
    {
      if ( v9->_Isnil )
      {
        k = Parent;
      }
      else
      {
        Left = v9->_Left;
        for ( k = v9; !Left->_Isnil; Left = Left->_Left )
          k = Left;
      }
      this->_Mypair._Myval2._Myval2._Myhead->_Left = k;
    }
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Right == v5 )
    {
      if ( v9->_Isnil )
      {
        Myhead->_Right = Parent;
      }
      else
      {
        v14 = v9->_Right;
        for ( m = v9; !v14->_Isnil; v14 = v14->_Right )
          m = v14;
        Myhead->_Right = m;
      }
    }
    goto LABEL_45;
  }
  if ( v5->_Right->_Isnil )
  {
    v9 = v5->_Left;
    goto LABEL_15;
  }
  v9 = _Where._Ptr->_Right;
  if ( _Where._Ptr == v5 )
    goto LABEL_15;
  v5->_Left->_Parent = _Where._Ptr;
  _Where._Ptr->_Left = v5->_Left;
  if ( _Where._Ptr == v5->_Right )
  {
    Parent = _Where._Ptr;
  }
  else
  {
    Parent = _Where._Ptr->_Parent;
    if ( !v9->_Isnil )
      v9->_Parent = Parent;
    Parent->_Left = v9;
    _Where._Ptr->_Right = v5->_Right;
    v5->_Right->_Parent = _Where._Ptr;
  }
  if ( this->_Mypair._Myval2._Myval2._Myhead->_Parent == v5 )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = _Where._Ptr;
  }
  else
  {
    v16 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,std::vector<unsigned char> > > > > *)v5->_Parent;
    if ( v16->_Ptr == v5 )
      v16->_Ptr = _Where._Ptr;
    else
      v16[2]._Ptr = _Where._Ptr;
  }
  _Where._Ptr->_Parent = v5->_Parent;
  Color = _Where._Ptr->_Color;
  _Where._Ptr->_Color = v5->_Color;
  v5->_Color = Color;
LABEL_45:
  if ( v5->_Color == 1 )
  {
    if ( v9 != this->_Mypair._Myval2._Myval2._Myhead->_Parent )
    {
      do
      {
        v18 = Parent;
        v19 = Parent;
        if ( v9->_Color != 1 )
          break;
        v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
        if ( v9 == Parent->_Left )
        {
          v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
          if ( !v20->_Color )
          {
            v20->_Color = 1;
            v21 = Parent->_Right;
            Parent->_Color = 0;
            Parent->_Right = v21->_Left;
            if ( !v21->_Left->_Isnil )
              v21->_Left->_Parent = Parent;
            v21->_Parent = Parent->_Parent;
            if ( Parent == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
            {
              this->_Mypair._Myval2._Myval2._Myhead->_Parent = v21;
            }
            else
            {
              v22 = Parent->_Parent;
              if ( Parent == v22->_Left )
                v22->_Left = v21;
              else
                v22->_Right = v21;
            }
            v21->_Left = Parent;
            v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
            Parent->_Parent = v21;
          }
          if ( v20->_Isnil )
            goto LABEL_70;
          if ( v20->_Left->_Color != 1 || v20->_Right->_Color != 1 )
          {
            if ( v20->_Right->_Color == 1 )
            {
              v20->_Left->_Color = 1;
              v20->_Color = 0;
              std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
                (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
                v20);
              v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
            }
            v20->_Color = Parent->_Color;
            Parent->_Color = 1;
            v20->_Right->_Color = 1;
            std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            break;
          }
        }
        else
        {
          if ( !v20->_Color )
          {
            v20->_Color = 1;
            Parent->_Color = 0;
            std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
          }
          if ( v20->_Isnil )
            goto LABEL_70;
          if ( v20->_Right->_Color != 1 || v20->_Left->_Color != 1 )
          {
            if ( v20->_Left->_Color == 1 )
            {
              v20->_Right->_Color = 1;
              v20->_Color = 0;
              std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
                (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
                v20);
              v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
            }
            v20->_Color = Parent->_Color;
            Parent->_Color = 1;
            v20->_Left->_Color = 1;
            std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            break;
          }
        }
        v20->_Color = 0;
LABEL_70:
        v9 = v19;
        Parent = Parent->_Parent;
      }
      while ( v18 != this->_Mypair._Myval2._Myval2._Myhead->_Parent );
    }
    v9->_Color = 1;
  }
  Myfirst = v5->_Myval.second._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    if ( (unsigned __int8 *)(v5->_Myval.second._Mypair._Myval2._Myend - Myfirst) >= (unsigned __int8 *)0x1000 )
    {
      if ( ((unsigned __int8)Myfirst & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v24 = (unsigned __int8 *)*((_QWORD *)Myfirst - 1);
      if ( v24 >= Myfirst )
        invalid_parameter_noinfo_noreturn();
      v25 = Myfirst - v24;
      if ( v25 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v25 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      Myfirst = v24;
    }
    operator delete(Myfirst);
    v5->_Myval.second._Mypair._Myval2._Myfirst = 0i64;
    v5->_Myval.second._Mypair._Myval2._Mylast = 0i64;
    v5->_Myval.second._Mypair._Myval2._Myend = 0i64;
  }
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  result->_Ptr = Ptr;
  return result;
}

void __fastcall extension::GFXIKeyMapping::MapImpl::generateEventKey(
        extension::GFXIKeyMapping::MapImpl *this,
        std::vector<std::pair<enum Scaleform::Key::Code,bool>> *dst,
        extension::gfxi_detail::MovieKeyState *keyState,
        int kbi,
        bool (__fastcall *padChecker)(int, GameOperations::GameOpSpec, bool, bool, bool *),
        bool isDown)
{
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Myhead; // rax
  int v7; // er10
  extension::GFXIKeyMapping::MapImpl *v10; // rbp
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Left; // rbx
  unsigned int first; // edx
  bool v13; // al
  unsigned __int8 *Myfirst; // rdi
  bool v15; // r12
  unsigned __int8 *Mylast; // rsi
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rdx
  unsigned __int64 *v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  std::pair<enum Scaleform::Key::Code,bool> *v22; // rcx
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Right; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *j; // rax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *i; // rax
  bool v26; // [rsp+30h] [rbp-48h] BYREF

  Myhead = this->m_map._Mypair._Myval2._Myval2._Myhead;
  v7 = kbi;
  v10 = this;
  Left = Myhead->_Left;
  if ( Myhead->_Left == Myhead )
    return;
  while ( 2 )
  {
    first = Left->_Myval.first;
    v26 = 0;
    v13 = padChecker(v7, (GameOperations::GameOpSpec)(first >> 1), isDown, first & 1, &v26);
    Myfirst = Left->_Myval.second._Mypair._Myval2._Myfirst;
    v15 = v13;
    Mylast = Left->_Myval.second._Mypair._Myval2._Mylast;
    if ( Myfirst == Mylast )
      goto LABEL_18;
    do
    {
      v17 = *Myfirst;
      if ( !v15 )
        goto LABEL_16;
      if ( isDown )
      {
        if ( *Myfirst >= 0xE5u )
          goto LABEL_16;
        if ( *Myfirst >= 0xE5ui64 )
          std::_Xout_of_range("invalid bitset<N> position");
        v18 = v17 & 0x3F;
        v19 = &keyState->m_keybits._Array[(unsigned __int64)*Myfirst >> 6];
        v20 = *v19 | (1i64 << (v17 & 0x3F));
      }
      else
      {
        if ( *Myfirst >= 0xE5u )
          goto LABEL_16;
        v21 = keyState->m_keybits._Array[v17 >> 6];
        if ( !_bittest64((const __int64 *)&v21, v17 & 0x3F) )
          goto LABEL_16;
        v18 = v17 & 0x3F;
        v19 = &keyState->m_keybits._Array[v17 >> 6];
        v20 = *v19 & ~(1i64 << (v17 & 0x3F));
      }
      *v19 = v20;
      if ( dst->_Mypair._Myval2._Mylast == dst->_Mypair._Myval2._Myend )
        std::vector<std::pair<enum Scaleform::Key::Code,bool>>::_Reserve(dst, v18);
      v22 = dst->_Mypair._Myval2._Mylast;
      if ( v22 )
      {
        v22->first = v17;
        v22->second = v26;
      }
      ++dst->_Mypair._Myval2._Mylast;
LABEL_16:
      ++Myfirst;
    }
    while ( Myfirst != Mylast );
    v10 = this;
LABEL_18:
    if ( !Left->_Isnil )
    {
      Right = Left->_Right;
      if ( Right->_Isnil )
      {
        for ( i = Left->_Parent; !i->_Isnil; i = i->_Parent )
        {
          if ( Left != i->_Right )
            break;
          Left = i;
        }
        Left = i;
      }
      else
      {
        Left = Left->_Right;
        for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
          Left = j;
      }
    }
    if ( Left != v10->m_map._Mypair._Myval2._Myval2._Myhead )
    {
      v7 = kbi;
      continue;
    }
    break;
  }
}

char __fastcall extension::GFXIKeyMapping::MapImpl::hasMap(
        extension::GFXIKeyMapping::MapImpl *this,
        const extension::GFXIKeyMapping::MapConfig *config)
{
  char v2; // r11
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Myhead; // r8
  BOOL isRepeat; // er9
  __int32 v6; // eax
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *Parent; // rdx
  unsigned int v8; // er9
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *v9; // rax
  unsigned __int8 *Myfirst; // r9
  unsigned __int8 keyCode; // r10
  __int64 v13; // r8

  v2 = 0;
  Myhead = this->m_map._Mypair._Myval2._Myval2._Myhead;
  isRepeat = config->isRepeat;
  v6 = 2 * config->op;
  Parent = Myhead->_Parent;
  v8 = v6 | isRepeat;
  v9 = Myhead;
  while ( !Parent->_Isnil )
  {
    if ( Parent->_Myval.first >= v8 )
    {
      v9 = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  if ( v9 == Myhead || v8 < v9->_Myval.first )
    v9 = this->m_map._Mypair._Myval2._Myval2._Myhead;
  if ( v9 == Myhead )
    return 0;
  Myfirst = v9->_Myval.second._Mypair._Myval2._Myfirst;
  keyCode = config->keyCode;
  v13 = v9->_Myval.second._Mypair._Myval2._Mylast - Myfirst;
  while ( v13 > 0 )
  {
    if ( Myfirst[v13 / 2] >= keyCode )
    {
      v13 /= 2i64;
    }
    else
    {
      Myfirst += v13 / 2 + 1;
      v13 += -1 - v13 / 2;
    }
  }
  if ( Myfirst != v9->_Myval.second._Mypair._Myval2._Mylast && keyCode >= *Myfirst )
    return 1;
  return v2;
}

void __fastcall extension::GFXIKeyMapping::initialize(
        extension::GFXIKeyMapping *this,
        const extension::GFXIKeyMapping::MapConfig *bg,
        const extension::GFXIKeyMapping::MapConfig *en)
{
  __int64 v4; // r8
  std::tuple<> *v5; // r9
  extension::GFXIKeyMapping::MapImpl *m_ptr; // rbx
  extension::GFXIKeyMapping::MapImpl *v7; // rax
  const extension::GFXIKeyMapping::MapConfig *v8; // rbx
  extension::GFXIKeyMapping::MapImpl *v9; // [rsp+48h] [rbp+10h]

  v9 = (extension::GFXIKeyMapping::MapImpl *)operator new(0x48ui64);
  extension::GFXIKeyMapping::MapImpl::MapImpl(v9);
  m_ptr = the_default.m_mapImpl.m_ptr;
  the_default.m_mapImpl.m_ptr = v7;
  if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::GFXIKeyMapping::MapImpl::~MapImpl(m_ptr);
    operator delete(m_ptr, 0x48ui64);
  }
  v8 = (const extension::GFXIKeyMapping::MapConfig *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[2][104];
  if ( &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[2][104] != (char *)en )
  {
    do
      extension::GFXIKeyMapping::MapImpl::addMap(the_default.m_mapImpl.m_ptr, v8++, v4, v5);
    while ( v8 != en );
  }
}

void __fastcall extension::GFXIKeyMapping::MapImpl::postKeyEvent(
        extension::GFXIKeyMapping::MapImpl *this,
        Scaleform::GFx::Movie *target,
        extension::gfxi_detail::MovieKeyState *keyState,
        int kbi,
        extension::GFXIMultiControllerMode::Spec spec,
        bool ignoreInput)
{
  bool (__fastcall *padChecker)(int, GameOperations::GameOpSpec, bool, bool, bool *); // rbx
  std::vector<std::pair<enum Scaleform::Key::Code,bool>> *p_m_releasedKeyBuffer; // r13
  extension::GFXIKeyMapping::MapImpl *v12; // rcx
  extension::GFXIKeyMapping::MapImpl *v13; // rcx
  extension::GFXIKeyMapping::MapImpl *v14; // rcx
  extension::GFXIKeyMapping::MapImpl *v15; // rcx
  char v16; // cl
  unsigned __int64 v17; // r8
  char v18; // dl
  char v19; // r15
  char v20; // r15
  __int64 *Myfirst; // rdi
  std::pair<enum Scaleform::Key::Code,bool> *Mylast; // rsi
  bool v23; // cl
  __int64 v24; // r13
  __int64 v25; // rbx
  bool BValue; // al
  std::vector<std::pair<enum Scaleform::Key::Code,bool>> *v27; // r13
  std::vector<std::pair<enum Scaleform::Key::Code,bool>> **v28; // rdi
  std::pair<enum Scaleform::Key::Code,bool> *v29; // rsi
  std::vector<std::pair<enum Scaleform::Key::Code,bool>> *v30; // rbx
  bool v31; // al
  Framework::GLManager *v32; // rdi
  int v33; // ebx
  Framework::Input::ButtonEventPattern v34; // er8
  int v35; // [rsp+30h] [rbp-D0h] BYREF
  char v36; // [rsp+34h] [rbp-CCh]
  int v37; // [rsp+38h] [rbp-C8h]
  char v38; // [rsp+3Ch] [rbp-C4h]
  int v39; // [rsp+40h] [rbp-C0h]
  char v40; // [rsp+44h] [rbp-BCh]
  extension::GFXIMultiControllerMode::Spec v41; // [rsp+48h] [rbp-B8h]
  std::vector<std::pair<enum Scaleform::Key::Code,bool>> *p_m_pressedKeyBuffer; // [rsp+50h] [rbp-B0h]
  Scaleform::GFx::Value presult; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  std::vector<std::pair<enum Scaleform::Key::Code,bool>> *v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  Scaleform::GFx::Value ptr; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::GFx::Value val; // [rsp+E0h] [rbp-20h] BYREF
  Scaleform::GFx::Value v50; // [rsp+110h] [rbp+10h] BYREF
  Scaleform::GFx::Value v51; // [rsp+140h] [rbp+40h] BYREF
  Scaleform::GFx::Value v52; // [rsp+170h] [rbp+70h] BYREF

  v47 = -2i64;
  v41 = spec;
  v44 = spec;
  padChecker = (bool (__fastcall *)(int, GameOperations::GameOpSpec, bool, bool, bool *))*(&off_140929868 + (int)spec);
  p_m_releasedKeyBuffer = &this->m_releasedKeyBuffer;
  v46 = &this->m_releasedKeyBuffer;
  this->m_releasedKeyBuffer._Mypair._Myval2._Mylast = this->m_releasedKeyBuffer._Mypair._Myval2._Myfirst;
  extension::GFXIKeyMapping::MapImpl::generateEventKey(this, &this->m_releasedKeyBuffer, keyState, kbi, padChecker, 0);
  p_m_pressedKeyBuffer = &this->m_pressedKeyBuffer;
  this->m_pressedKeyBuffer._Mypair._Myval2._Mylast = this->m_pressedKeyBuffer._Mypair._Myval2._Myfirst;
  extension::GFXIKeyMapping::MapImpl::generateEventKey(this, &this->m_pressedKeyBuffer, keyState, kbi, padChecker, 1);
  extension::GFXIKeyMapping::MapImpl::conflictEventKey(v12, &this->m_pressedKeyBuffer, OutCubic|0x20, InQuart|0x20);
  extension::GFXIKeyMapping::MapImpl::conflictEventKey(
    v13,
    &this->m_pressedKeyBuffer,
    InOutCubic|0x20,
    (Scaleform::Key::Code)40);
  extension::GFXIKeyMapping::MapImpl::conflictEventKey(
    v14,
    &this->m_pressedKeyBuffer,
    (Scaleform::Key::Code)33,
    (Scaleform::Key::Code)34);
  extension::GFXIKeyMapping::MapImpl::conflictEventKey(
    v15,
    &this->m_pressedKeyBuffer,
    (Scaleform::Key::Code)36,
    InOutQuad|0x20);
  v16 = 0;
  if ( (keyState->m_keybits._Array[0] & 0x10000) != 0 || (keyState->m_keybits._Array[2] & 0x100000000i64) != 0 )
    v16 = 1;
  v17 = keyState->m_keybits._Array[2];
  v18 = v16;
  if ( (v17 & 0x200000000i64) != 0 )
    v18 = 65;
  if ( (keyState->m_keybits._Array[0] & 0x20000) != 0 || (v17 & 0x400000000i64) != 0 )
    v18 |= 2u;
  v19 = v18 | 0x42;
  if ( (v17 & 0x800000000i64) == 0 )
    v19 = v18;
  if ( (keyState->m_keybits._Array[0] & 0x40000) != 0 || (v17 & 0x1000000000i64) != 0 )
    v19 |= 4u;
  v20 = v19 | 0x80;
  Myfirst = (__int64 *)p_m_releasedKeyBuffer->_Mypair._Myval2._Myfirst;
  Mylast = p_m_releasedKeyBuffer->_Mypair._Myval2._Mylast;
  v23 = ignoreInput;
  if ( p_m_releasedKeyBuffer->_Mypair._Myval2._Myfirst != Mylast )
  {
    v24 = v44;
    do
    {
      v25 = *Myfirst;
      v45 = v25;
      if ( (_DWORD)v25 != 27 || !v23 )
      {
        presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
        presult.pObjectInterface = 0i64;
        presult.Type = VT_Int64;
        BValue = 0;
        presult.mValue.BValue = 0;
        if ( v24 )
        {
          `eh vector constructor iterator'(
            &ptr,
            0x30ui64,
            5ui64,
            (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
            (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
          if ( (ptr.Type & 0x40) != 0 )
          {
            Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
            ptr.pObjectInterface = 0i64;
          }
          ptr.Type = 4;
          ptr.mValue.IValue = v25;
          if ( (val.Type & 0x40) != 0 )
          {
            Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
            val.pObjectInterface = 0i64;
          }
          val.Type = VT_Int64;
          val.mValue.BValue = 0;
          if ( (v50.Type & 0x40) != 0 )
          {
            Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v50.pObjectInterface, &v50, v50.mValue.pStringManaged);
            v50.pObjectInterface = 0i64;
          }
          v50.Type = VT_Int64;
          v50.mValue.BValue = BYTE4(v45) == 0;
          if ( (v51.Type & 0x40) != 0 )
          {
            Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v51.pObjectInterface, &v51, v51.mValue.pStringManaged);
            v51.pObjectInterface = 0i64;
          }
          v51.Type = VT_Float;
          v51.mValue.IValue = kbi;
          if ( (v52.Type & 0x40) != 0 )
          {
            Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v52.pObjectInterface, &v52, v52.mValue.pStringManaged);
            v52.pObjectInterface = 0i64;
          }
          v52.Type = VT_Int64;
          v52.mValue.BValue = 1;
          Scaleform::GFx::Movie::Invoke(target, "_root.advancedKeyEvent", &presult, &ptr, 5u);
          `eh vector destructor iterator'(
            &ptr,
            0x30ui64,
            5ui64,
            (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
          BValue = presult.mValue.BValue;
        }
        if ( !BValue )
        {
          v35 = 6;
          v36 = v20;
          v37 = v25;
          v38 = 0;
          v39 = 0;
          v40 = kbi;
          target->HandleEvent(target, (const Scaleform::GFx::Event *)&v35);
        }
        if ( (presult.Type & 0x40) != 0 )
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
            presult.pObjectInterface,
            &presult,
            presult.mValue.pStringManaged);
        v23 = ignoreInput;
      }
      ++Myfirst;
    }
    while ( Myfirst != (__int64 *)Mylast );
    p_m_releasedKeyBuffer = v46;
  }
  p_m_releasedKeyBuffer->_Mypair._Myval2._Mylast = p_m_releasedKeyBuffer->_Mypair._Myval2._Myfirst;
  v27 = p_m_pressedKeyBuffer;
  v28 = (std::vector<std::pair<enum Scaleform::Key::Code,bool>> **)p_m_pressedKeyBuffer->_Mypair._Myval2._Myfirst;
  v29 = p_m_pressedKeyBuffer->_Mypair._Myval2._Mylast;
  if ( p_m_pressedKeyBuffer->_Mypair._Myval2._Myfirst != v29 )
  {
    do
    {
      v30 = *v28;
      p_m_pressedKeyBuffer = v30;
      if ( (_DWORD)v30 != 27 || !v23 )
      {
        presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
        presult.pObjectInterface = 0i64;
        presult.Type = VT_Int64;
        v31 = 0;
        presult.mValue.BValue = 0;
        if ( v44 )
        {
          `eh vector constructor iterator'(
            &ptr,
            0x30ui64,
            5ui64,
            (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
            (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
          if ( (ptr.Type & 0x40) != 0 )
          {
            Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
            ptr.pObjectInterface = 0i64;
          }
          ptr.Type = 4;
          ptr.mValue.IValue = (int)v30;
          if ( (val.Type & 0x40) != 0 )
          {
            Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
            val.pObjectInterface = 0i64;
          }
          val.Type = VT_Int64;
          val.mValue.BValue = 1;
          if ( (v50.Type & 0x40) != 0 )
          {
            Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v50.pObjectInterface, &v50, v50.mValue.pStringManaged);
            v50.pObjectInterface = 0i64;
          }
          v50.Type = VT_Int64;
          v50.mValue.BValue = BYTE4(p_m_pressedKeyBuffer) == 0;
          if ( (v51.Type & 0x40) != 0 )
          {
            Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v51.pObjectInterface, &v51, v51.mValue.pStringManaged);
            v51.pObjectInterface = 0i64;
          }
          v51.Type = VT_Float;
          v51.mValue.IValue = kbi;
          if ( (v52.Type & 0x40) != 0 )
          {
            Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v52.pObjectInterface, &v52, v52.mValue.pStringManaged);
            v52.pObjectInterface = 0i64;
          }
          v52.Type = VT_Int64;
          v52.mValue.BValue = 1;
          Scaleform::GFx::Movie::Invoke(target, "_root.advancedKeyEvent", &presult, &ptr, 5u);
          `eh vector destructor iterator'(
            &ptr,
            0x30ui64,
            5ui64,
            (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
          v31 = presult.mValue.BValue;
        }
        if ( !v31 )
        {
          v35 = 5;
          v36 = v20;
          v37 = (int)v30;
          v38 = 0;
          v39 = 0;
          v40 = kbi;
          target->HandleEvent(target, (const Scaleform::GFx::Event *)&v35);
        }
        if ( (presult.Type & 0x40) != 0 )
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
            presult.pObjectInterface,
            &presult,
            presult.mValue.pStringManaged);
        v23 = ignoreInput;
      }
      ++v28;
    }
    while ( v28 != (std::vector<std::pair<enum Scaleform::Key::Code,bool>> **)v29 );
  }
  v27->_Mypair._Myval2._Mylast = v27->_Mypair._Myval2._Myfirst;
  if ( !kbi && v41 )
  {
    v32 = Framework::GLManager::glm;
    v33 = 8;
    while ( 1 )
    {
      if ( v33 == 27 && v23 )
        goto LABEL_88;
      if ( Framework::Input::ControllerContext::isKeyboardButtonPressedNoRepeat(
             &v32->m_controllerContext,
             v33,
             (Framework::Input::ButtonEventPattern)v17) )
      {
        break;
      }
      if ( Framework::Input::ControllerContext::isKeyboardButtonReleasedNoRepeat(&v32->m_controllerContext, v33, v34) )
      {
        `eh vector constructor iterator'(
          &ptr,
          0x30ui64,
          5ui64,
          (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
          (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
        if ( (ptr.Type & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
          ptr.pObjectInterface = 0i64;
        }
        ptr.Type = 4;
        ptr.mValue.IValue = v33;
        if ( (val.Type & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
          val.pObjectInterface = 0i64;
        }
        val.Type = VT_Int64;
        val.mValue.BValue = 0;
        if ( (v50.Type & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v50.pObjectInterface, &v50, v50.mValue.pStringManaged);
          v50.pObjectInterface = 0i64;
        }
        v50.Type = VT_Int64;
        v50.mValue.BValue = 0;
        if ( (v51.Type & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v51.pObjectInterface, &v51, v51.mValue.pStringManaged);
          v51.pObjectInterface = 0i64;
        }
        v51.Type = VT_Float;
        v51.mValue.IValue = 0;
        if ( (v52.Type & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v52.pObjectInterface, &v52, v52.mValue.pStringManaged);
          v52.pObjectInterface = 0i64;
        }
        goto LABEL_86;
      }
LABEL_87:
      v23 = ignoreInput;
LABEL_88:
      if ( (unsigned int)++v33 >= 0x100 )
        return;
    }
    `eh vector constructor iterator'(
      &ptr,
      0x30ui64,
      5ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = 4;
    ptr.mValue.IValue = v33;
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Int64;
    val.mValue.BValue = 1;
    if ( (v50.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v50.pObjectInterface, &v50, v50.mValue.pStringManaged);
      v50.pObjectInterface = 0i64;
    }
    v50.Type = VT_Int64;
    v50.mValue.BValue = 0;
    if ( (v51.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v51.pObjectInterface, &v51, v51.mValue.pStringManaged);
      v51.pObjectInterface = 0i64;
    }
    v51.Type = VT_Float;
    v51.mValue.IValue = 0;
    if ( (v52.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v52.pObjectInterface, &v52, v52.mValue.pStringManaged);
      v52.pObjectInterface = 0i64;
    }
LABEL_86:
    v52.Type = VT_Int64;
    v52.mValue.BValue = 0;
    Scaleform::GFx::Movie::Invoke(target, "_root.advancedKeyEvent", 0i64, &ptr, 5u);
    `eh vector destructor iterator'(&ptr, 0x30ui64, 5ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
    goto LABEL_87;
  }
}

void __fastcall extension::gfxi_detail::MovieOperationGenerator::postKeyboardEvent(
        extension::gfxi_detail::MovieOperationGenerator *this,
        Scaleform::GFx::Movie *target)
{
  int v2; // er8
  unsigned int v5; // eax
  int v6; // ebp
  int v7; // edi
  extension::gfxi_detail::MovieKeyEventGenerator *m_keyEventGenerator; // rbx

  v2 = 1;
  if ( this->m_multiControllerMode == ByUser || this->m_multiControllerMode == ByFighter )
  {
    v2 = 2;
  }
  else if ( this->m_multiControllerMode == ByController )
  {
    v2 = 4;
  }
  v5 = extension::gfxi_detail::MovieOperationGenerator::ignoreInputFrames;
  if ( extension::gfxi_detail::MovieOperationGenerator::ignoreInputFrames )
    v5 = --extension::gfxi_detail::MovieOperationGenerator::ignoreInputFrames;
  v6 = v2;
  v7 = 0;
  m_keyEventGenerator = this->m_keyEventGenerator;
  while ( 1 )
  {
    extension::GFXIKeyMapping::MapImpl::postKeyEvent(
      m_keyEventGenerator->m_mapping.m_mapImpl.m_ptr,
      target,
      &m_keyEventGenerator->m_keyState,
      v7++,
      this->m_multiControllerMode,
      v5 != 0);
    ++m_keyEventGenerator;
    if ( v7 >= v6 )
      break;
    v5 = extension::gfxi_detail::MovieOperationGenerator::ignoreInputFrames;
  }
}

