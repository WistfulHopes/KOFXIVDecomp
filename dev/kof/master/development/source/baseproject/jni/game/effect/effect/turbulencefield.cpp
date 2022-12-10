#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstatecurve.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/field.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/randomnumbers.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E39A
void TurbulenceField::ownInitialize(); // 0x140137990
void TurbulenceField::updateForceFieldData(bool mirrorFlag, const OGLMatrix & actionMat, Effect * pEffect, float frame); // 0x1401354F0
void TurbulenceField::updateForceFieldData(bool mirrorFlag, const OGLMatrix & actionMat, ParticleEmitter * pParticleEmitter, float frame); // 0x140154D60//decompilation failure at 14089E39A!
void __fastcall Effect::ownInitialize(TurbulenceField *this)
{
  *(_WORD *)&this->m_EffectDeleteFlag = 256;
}

void __fastcall TurbulenceField::updateForceFieldData(
        TurbulenceField *this,
        bool mirrorFlag,
        const OGLMatrix *actionMat,
        Effect *pEffect,
        float frame)
{
  EffectData *v9; // rax

  v9 = pEffect->getSettingData(pEffect);
  if ( (unsigned int)v9->getEffectType(v9) <= 1 )
    ((void (__fastcall *)(TurbulenceField *, bool, const OGLMatrix *, Effect *, _DWORD))this->updateForceFieldData)(
      this,
      mirrorFlag,
      actionMat,
      pEffect,
      LODWORD(frame));
}

void __fastcall TurbulenceField::updateForceFieldData(
        TurbulenceField *this,
        bool mirrorFlag,
        const OGLMatrix *actionMat,
        ParticleEmitter *pParticleEmitter,
        float frame)
{
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm5_4
  const OGLMatrix *v10; // rcx
  unsigned int v11; // xmm2_4
  __m128 v12; // xmm3
  OGLMatrix *v13; // rcx
  unsigned int i; // er15
  ParticleData *v15; // rdi
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float *p_x; // rcx
  EffectData *m_SettingData; // rbx
  DialogData *Myfirst; // r8
  float *v22; // r8
  DialogData *v23; // rcx
  float v24; // xmm15_4
  float v25; // xmm8_4
  float v26; // xmm9_4
  DialogData *v27; // rcx
  DialogChartData *v28; // r8
  DialogChartData *v29; // r8
  DialogChartData *v30; // r8
  float ChartDataY; // xmm0_4
  EffectData *v32; // rcx
  DialogData *v33; // rdx
  DialogChartData *v34; // r8
  DialogChartData *v35; // r8
  DialogChartData *v36; // r8
  float v37; // xmm0_4
  float v38; // xmm13_4
  EffectData *v39; // rcx
  DialogData *v40; // rdx
  DialogChartData *v41; // r8
  float v42; // xmm8_4
  float maxd; // xmm8_4
  float y; // xmm9_4
  float x; // xmm10_4
  float z; // xmm11_4
  float w; // xmm12_4
  float v48; // xmm0_4
  float v49; // xmm9_4
  float v50; // xmm10_4
  float v51; // xmm11_4
  float v52; // xmm12_4
  float v53; // xmm0_4
  float v54; // xmm8_4
  float v55; // xmm9_4
  float v56; // xmm10_4
  float v57; // xmm11_4
  float v58; // xmm0_4
  OGLEffectVec3 *v59; // rax
  OGLEffectVec3 *v60; // rax
  OGLEffectVec3 v61; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B8h]
  float v63; // [rsp+58h] [rbp-B0h]
  float v64; // [rsp+5Ch] [rbp-ACh]
  __int64 v65; // [rsp+60h] [rbp-A8h]
  void **q2; // [rsp+68h] [rbp-A0h]
  OGLQuat q2_8; // [rsp+70h] [rbp-98h] BYREF
  OGLEffectQuat v68; // [rsp+88h] [rbp-80h] BYREF
  OGLEffectQuat v69; // [rsp+A8h] [rbp-60h] BYREF
  OGLVec3 v70; // [rsp+C8h] [rbp-40h] BYREF
  OGLVec3 v71; // [rsp+D8h] [rbp-30h] BYREF
  OGLVec3 v72; // [rsp+E8h] [rbp-20h] BYREF
  void **v73; // [rsp+F8h] [rbp-10h]
  __m128 v74; // [rsp+100h] [rbp-8h]
  __int128 v75; // [rsp+110h] [rbp+8h]
  unsigned int v76; // [rsp+120h] [rbp+18h]
  int v77; // [rsp+124h] [rbp+1Ch]
  __int64 v78; // [rsp+128h] [rbp+20h]
  float v79; // [rsp+130h] [rbp+28h]
  float v80; // [rsp+134h] [rbp+2Ch]
  float v81; // [rsp+138h] [rbp+30h]
  int v82; // [rsp+13Ch] [rbp+34h]
  void **v83; // [rsp+148h] [rbp+40h]
  __int64 v84; // [rsp+150h] [rbp+48h]
  float v85; // [rsp+158h] [rbp+50h]
  OGLEffectVec3 v86; // [rsp+160h] [rbp+58h] BYREF
  OGLEffectQuat v87; // [rsp+178h] [rbp+70h] BYREF
  OGLEffectVec3 v88; // [rsp+190h] [rbp+88h] BYREF
  OGLEffectVec3_vtbl *v89; // [rsp+1B0h] [rbp+A8h]
  float v90; // [rsp+1B8h] [rbp+B0h]
  __int64 v91; // [rsp+1C0h] [rbp+B8h]
  void **v92; // [rsp+1D0h] [rbp+C8h]
  OGLQuat q1; // [rsp+1D8h] [rbp+D0h] BYREF
  OGLEffectVec3 v94; // [rsp+1F0h] [rbp+E8h] BYREF
  OGLEffectVec3 v95; // [rsp+208h] [rbp+100h] BYREF
  void **v96; // [rsp+228h] [rbp+120h]
  OGLMatrix mIn; // [rsp+230h] [rbp+128h] BYREF

  v91 = -2i64;
  v7 = actionMat->m[14];
  v8 = actionMat->m[13];
  v9 = actionMat->m[12];
  v73 = &OGLEffectMatrix::`vftable';
  v10 = actionMat;
  if ( actionMat == (const OGLMatrix *)8 )
    v10 = 0i64;
  v74 = *(__m128 *)v10->m;
  v75 = *(_OWORD *)&v10->m[4];
  v11 = v75;
  v12 = *(__m128 *)&v10->m[8];
  v78 = *(_QWORD *)&v10->m[10];
  LODWORD(v75) = _mm_shuffle_ps(v74, v74, 85).m128_u32[0];
  v76 = _mm_shuffle_ps(v74, v74, 170).m128_u32[0];
  *(unsigned __int64 *)((char *)v74.m128_u64 + 4) = __PAIR64__(v12.m128_u32[0], v11);
  v77 = DWORD2(v75);
  DWORD2(v75) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
  v79 = v9;
  v80 = v8;
  v81 = v7;
  v82 = 1065353216;
  v96 = &OGLEffectMatrix::`vftable';
  v13 = &pParticleEmitter->WorldMat.OGLMatrix;
  if ( pParticleEmitter == (ParticleEmitter *)-3192i64 )
    v13 = 0i64;
  mIn = *v13;
  for ( i = 0;
        i < (unsigned int)(pParticleEmitter->m_ParticleData._Mypair._Myval2._Mylast
                         - pParticleEmitter->m_ParticleData._Mypair._Myval2._Myfirst);
        ++i )
  {
    if ( pParticleEmitter->m_ParticleData._Mypair._Myval2._Mylast
       - pParticleEmitter->m_ParticleData._Mypair._Myval2._Myfirst <= (unsigned __int64)(int)i )
      std::_Xout_of_range("invalid vector<T> subscript");
    v15 = pParticleEmitter->m_ParticleData._Mypair._Myval2._Myfirst[i];
    v16 = v15->GlobalMat.m[14];
    v17 = v15->GlobalMat.m[13];
    v18 = v15->GlobalMat.m[12];
    v88.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
    p_x = &v15->ForceFieldPos.x;
    if ( v15 == (ParticleData *)-832i64 )
      p_x = 0i64;
    v63 = v18 + *p_x;
    v88.x = v63;
    v64 = v17 + p_x[1];
    v88.y = v64;
    *(float *)&v65 = v16 + p_x[2];
    LODWORD(v88.z) = v65;
    v84 = 0i64;
    v85 = 0.0;
    v83 = &OGLEffectVec3::`vftable';
    v69.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
    v69.OGLQuat = (OGLQuat)_xmm;
    v68.OGLQuat = 0i64;
    v68.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
    m_SettingData = this->m_SettingData;
    Myfirst = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(Myfirst->allEditNumData._Mypair._Myval2._Mylast
                          - Myfirst->allEditNumData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v22 = Myfirst->allEditNumData._Mypair._Myval2._Myfirst;
    v23 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v23->allEditNumData._Mypair._Myval2._Mylast - v23->allEditNumData._Mypair._Myval2._Myfirst) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( !(v23->allEditNumData._Mypair._Myval2._Mylast - v23->allEditNumData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v24 = v22[2];
    v62 = *(_QWORD *)v23->allEditNumData._Mypair._Myval2._Myfirst;
    v25 = *((float *)&v62 + 1);
    v26 = *(float *)&v62;
    v84 = v62;
    v85 = v24;
    v87.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
    v87.OGLQuat = (OGLQuat)_xmm;
    OGLEffectQuat::matrixToQuaternion(&v87, &mIn);
    *(_QWORD *)&v61.x = 0i64;
    v61.z = 0.0;
    v61.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
    v27 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( !(v27->allButtonIndexData._Mypair._Myval2._Mylast - v27->allButtonIndexData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( *v27->allButtonIndexData._Mypair._Myval2._Myfirst )
    {
      v28 = m_SettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
      if ( !(v28->dialogChartData._Mypair._Myval2._Mylast - v28->dialogChartData._Mypair._Myval2._Myfirst) )
        std::_Xout_of_range("invalid vector<T> subscript");
      v61.x = (float)(D3DMath::GetChartDataY(this->age, v28->dialogChartData._Mypair._Myval2._Myfirst) * 3.1415927)
            / 180.0;
      v29 = this->m_SettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v29->dialogChartData._Mypair._Myval2._Mylast
                            - v29->dialogChartData._Mypair._Myval2._Myfirst) <= 1 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v61.y = (float)(D3DMath::GetChartDataY(this->age, v29->dialogChartData._Mypair._Myval2._Myfirst + 1) * 3.1415927)
            / 180.0;
      v30 = this->m_SettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v30->dialogChartData._Mypair._Myval2._Mylast
                            - v30->dialogChartData._Mypair._Myval2._Myfirst) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      ChartDataY = D3DMath::GetChartDataY(this->age, v30->dialogChartData._Mypair._Myval2._Myfirst + 2);
    }
    else
    {
      if ( (unsigned __int64)(v27->allEditNumData._Mypair._Myval2._Mylast - v27->allEditNumData._Mypair._Myval2._Myfirst) <= 3 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v61.x = (float)(v27->allEditNumData._Mypair._Myval2._Myfirst[3] * 3.1415927) / 180.0;
      if ( (unsigned __int64)(v27->allEditNumData._Mypair._Myval2._Mylast - v27->allEditNumData._Mypair._Myval2._Myfirst) <= 4 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v61.y = (float)(v27->allEditNumData._Mypair._Myval2._Myfirst[4] * 3.1415927) / 180.0;
      if ( (unsigned __int64)(v27->allEditNumData._Mypair._Myval2._Mylast - v27->allEditNumData._Mypair._Myval2._Myfirst) <= 5 )
        std::_Xout_of_range("invalid vector<T> subscript");
      ChartDataY = v27->allEditNumData._Mypair._Myval2._Myfirst[5];
    }
    v61.z = (float)(ChartDataY * 3.1415927) / 180.0;
    OGLEffectVec3::rotateQuat(&v61, &v87.OGLQuat);
    OGLEffectQuat::setRotateEuler(&v69, v61.x, v61.y, v61.z);
    v32 = this->m_SettingData;
    v33 = v32->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v33->allButtonIndexData._Mypair._Myval2._Mylast
                          - v33->allButtonIndexData._Mypair._Myval2._Myfirst) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( v33->allButtonIndexData._Mypair._Myval2._Myfirst[1] )
    {
      v34 = v32->AllDialogChartData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v34->dialogChartData._Mypair._Myval2._Mylast
                            - v34->dialogChartData._Mypair._Myval2._Myfirst) <= 3 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v61.x = (float)(D3DMath::GetChartDataY(this->age, v34->dialogChartData._Mypair._Myval2._Myfirst + 3) * 3.1415927)
            / 180.0;
      v35 = this->m_SettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v35->dialogChartData._Mypair._Myval2._Mylast
                            - v35->dialogChartData._Mypair._Myval2._Myfirst) <= 4 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v61.y = (float)(D3DMath::GetChartDataY(this->age, v35->dialogChartData._Mypair._Myval2._Myfirst + 4) * 3.1415927)
            / 180.0;
      v36 = this->m_SettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v36->dialogChartData._Mypair._Myval2._Mylast
                            - v36->dialogChartData._Mypair._Myval2._Myfirst) <= 5 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v37 = D3DMath::GetChartDataY(this->age, v36->dialogChartData._Mypair._Myval2._Myfirst + 5);
    }
    else
    {
      if ( (unsigned __int64)(v33->allEditNumData._Mypair._Myval2._Mylast - v33->allEditNumData._Mypair._Myval2._Myfirst) <= 6 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v61.x = (float)(v33->allEditNumData._Mypair._Myval2._Myfirst[6] * 3.1415927) / 180.0;
      if ( (unsigned __int64)(v33->allEditNumData._Mypair._Myval2._Mylast - v33->allEditNumData._Mypair._Myval2._Myfirst) <= 7 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v61.y = (float)(v33->allEditNumData._Mypair._Myval2._Myfirst[7] * 3.1415927) / 180.0;
      if ( (unsigned __int64)(v33->allEditNumData._Mypair._Myval2._Mylast - v33->allEditNumData._Mypair._Myval2._Myfirst) <= 8 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v37 = v33->allEditNumData._Mypair._Myval2._Myfirst[8];
    }
    v61.z = (float)(v37 * 3.1415927) / 180.0;
    OGLEffectVec3::rotateQuat(&v61, &v87.OGLQuat);
    OGLEffectQuat::setRotateEuler(&v68, v61.x, v61.y, v61.z);
    v70.x = v26;
    v70.y = v25;
    v70.z = v24;
    OGLEffectVec3::operator-(&v88, &v86, &v70);
    v38 = sqrtf((float)((float)(v86.x * v86.x) + (float)(v86.y * v86.y)) + (float)(v86.z * v86.z));
    v39 = this->m_SettingData;
    v40 = v39->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v40->allButtonIndexData._Mypair._Myval2._Mylast
                          - v40->allButtonIndexData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( v40->allButtonIndexData._Mypair._Myval2._Myfirst[2] )
    {
      v41 = v39->AllDialogChartData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v41->dialogChartData._Mypair._Myval2._Mylast
                            - v41->dialogChartData._Mypair._Myval2._Myfirst) <= 6 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v42 = D3DMath::GetChartDataY(this->age, v41->dialogChartData._Mypair._Myval2._Myfirst + 6);
    }
    else
    {
      if ( (unsigned __int64)(v40->allEditNumData._Mypair._Myval2._Mylast - v40->allEditNumData._Mypair._Myval2._Myfirst) <= 9 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v42 = v40->allEditNumData._Mypair._Myval2._Myfirst[9];
    }
    maxd = v42 * sqrtf(1.0);
    if ( maxd > v38 )
    {
      y = v69.y;
      x = v69.x;
      z = v69.z;
      w = v69.w;
      v48 = sqrtf((float)((float)((float)(y * y) + (float)(x * x)) + (float)(z * z)) + (float)(w * w));
      if ( v48 != 0.0 )
      {
        v69.x = x * (float)(1.0 / v48);
        v69.y = y * (float)(1.0 / v48);
        v69.z = z * (float)(1.0 / v48);
        v69.w = w * (float)(1.0 / v48);
      }
      v49 = v68.y;
      v50 = v68.x;
      v51 = v68.z;
      v52 = v68.w;
      v53 = sqrtf((float)((float)((float)(v49 * v49) + (float)(v50 * v50)) + (float)(v51 * v51)) + (float)(v52 * v52));
      if ( v53 != 0.0 )
      {
        v68.x = v50 * (float)(1.0 / v53);
        v68.y = v49 * (float)(1.0 / v53);
        v68.z = v51 * (float)(1.0 / v53);
        v68.w = v52 * (float)(1.0 / v53);
      }
      q2 = &OGLEffectQuat::`vftable';
      q2_8 = (OGLQuat)_xmm;
      OGLQuat::slerp(&q2_8, &v69.OGLQuat, &v68.OGLQuat, v38, maxd);
      v54 = q2_8.y;
      v55 = q2_8.x;
      v56 = q2_8.z;
      v57 = q2_8.w;
      v58 = sqrtf((float)((float)((float)(v54 * v54) + (float)(v55 * v55)) + (float)(v56 * v56)) + (float)(v57 * v57));
      if ( v58 != 0.0 )
      {
        q2_8.x = v55 * (float)(1.0 / v58);
        q2_8.y = v54 * (float)(1.0 / v58);
        q2_8.z = v56 * (float)(1.0 / v58);
        q2_8.w = v57 * (float)(1.0 / v58);
      }
      v92 = &OGLEffectQuat::`vftable';
      q1 = (OGLQuat)_xmm;
      OGLQuat::slerp(&q2_8, &q1, &q2_8, frame, 1.0);
      OGLEffectVec3::rotateQuat(&v86, &q2_8);
      *(_QWORD *)&v71.x = v62;
      v71.z = v24;
      v59 = OGLEffectVec3::operator+(&v86, &v94, &v71);
      v72.x = v63;
      v72.y = v64;
      LODWORD(v72.z) = v65;
      v60 = OGLEffectVec3::operator-(v59, &v95, &v72);
      if ( v60 )
        v60 = (OGLEffectVec3 *)((char *)v60 + 8);
      v89 = v60->__vftable;
      v90 = v60->x;
      v15->ForceFieldVel.x = *(float *)&v89 + v15->ForceFieldVel.x;
      v15->ForceFieldVel.y = *((float *)&v89 + 1) + v15->ForceFieldVel.y;
      v15->ForceFieldVel.z = v90 + v15->ForceFieldVel.z;
    }
  }
}

