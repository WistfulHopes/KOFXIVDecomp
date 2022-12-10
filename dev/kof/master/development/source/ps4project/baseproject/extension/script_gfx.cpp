#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/auxscript.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/exutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_fontman.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_drawtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_drawtext.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lapi.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_fontman.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lvm.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstate.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lauxlib.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldo.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/auxscript.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ltable.c"

struct extension::auxscript::UDTraits<extension::BasicFutureObject<extension::GFXIMovieData,void> >
{
	static const char RegistryName[0]; // 0xFFFFFFFFFFFFFFFF
};
struct extension::auxscript::UDTraits<extension::GFXIMovie>
{
	static const char RegistryName[0]; // 0xFFFFFFFFFFFFFFFF
};
struct extension::auxscript::UDTraits<extension::GFXIFontManager::LanguageConfig>
{
	static const char RegistryName[0]; // 0xFFFFFFFFFFFFFFFF
};
class extension::auxscript::UDHelper<extension::BasicFutureObject<extension::GFXIMovieData,void> >
{
	struct Traits;
public:
	static void MakeMeta(lua_State *, luaL_Reg *);
	static void GetMeta(lua_State *);
	static bool IsNilMeta(lua_State *);
	static extension::BasicFutureObject<extension::GFXIMovieData,void> & CheckSelf(lua_State *, long);
	static extension::BasicFutureObject<extension::GFXIMovieData,void> * TestSelf(lua_State *, long);
private:
	static long Lfn_gc(lua_State *);
	static long Lfn_tostring(lua_State *);
};
class extension::auxscript::UDHelper<extension::GFXIMovie>
{
	struct Traits;
public:
	static void MakeMeta(lua_State *, luaL_Reg *);
	static void GetMeta(lua_State *);
	static bool IsNilMeta(lua_State *);
	static extension::GFXIMovie & CheckSelf(lua_State *, long);
	static extension::GFXIMovie * TestSelf(lua_State *, long);
private:
	static long Lfn_gc(lua_State *);
	static long Lfn_tostring(lua_State *);
};
class extension::auxscript::UDHelper<extension::GFXIFontManager::LanguageConfig>
{
	struct Traits;
public:
	static void MakeMeta(lua_State *, luaL_Reg *);
	static void GetMeta(lua_State *);
	static bool IsNilMeta(lua_State *);
	static extension::GFXIFontManager::LanguageConfig & CheckSelf(lua_State *, long);
	static extension::GFXIFontManager::LanguageConfig * TestSelf(lua_State *, long);
private:
	static long Lfn_gc(lua_State *);
	static long Lfn_tostring(lua_State *);
};
class extension::auxscript::UDHelper<extension::`anonymous namespace'::TextUData>
{
	struct Traits;
public:
	static void MakeMeta(lua_State *, luaL_Reg *);
	static void GetMeta(lua_State *);
	static bool IsNilMeta(lua_State *);
	static extension::`anonymous-namespace'::TextUData & CheckSelf(lua_State *, long);
	static extension::`anonymous-namespace'::TextUData * TestSelf(lua_State *, long);
private:
	static long Lfn_gc(lua_State *);
	static long Lfn_tostring(lua_State *);
};
class extension::auxscript::UDHelper<extension::`anonymous namespace'::TextUData>
{
	struct Traits;
public:
	static void MakeMeta(lua_State *, luaL_Reg *);
	static void GetMeta(lua_State *);
	static bool IsNilMeta(lua_State *);
	static extension::`anonymous-namespace'::TextUData & CheckSelf(lua_State *, long);
	static extension::`anonymous-namespace'::TextUData * TestSelf(lua_State *, long);
private:
	static long Lfn_gc(lua_State *);
	static long Lfn_tostring(lua_State *);
};
class extension::auxscript::UDHelper<extension::`anonymous namespace'::TextUData>
{
	struct Traits;
public:
	static void MakeMeta(lua_State *, luaL_Reg *);
	static void GetMeta(lua_State *);
	static bool IsNilMeta(lua_State *);
	static extension::`anonymous-namespace'::TextUData & CheckSelf(lua_State *, long);
	static extension::`anonymous-namespace'::TextUData * TestSelf(lua_State *, long);
private:
	static long Lfn_gc(lua_State *);
	static long Lfn_tostring(lua_State *);
};
class extension::auxscript::UDHelper<extension::`anonymous namespace'::TextUData>
{
	struct Traits;
public:
	static void MakeMeta(lua_State *, luaL_Reg *);
	static void GetMeta(lua_State *);
	static bool IsNilMeta(lua_State *);
	static extension::`anonymous-namespace'::TextUData & CheckSelf(lua_State *, long);
	static extension::`anonymous-namespace'::TextUData * TestSelf(lua_State *, long);
private:
	static long Lfn_gc(lua_State *);
	static long Lfn_tostring(lua_State *);
};
class extension::auxscript::UDHelper<extension::`anonymous namespace'::TextUData>
{
	struct Traits;
public:
	static void MakeMeta(lua_State *, luaL_Reg *);
	static void GetMeta(lua_State *);
	static bool IsNilMeta(lua_State *);
	static extension::`anonymous-namespace'::TextUData & CheckSelf(lua_State *, long);
	static extension::`anonymous-namespace'::TextUData * TestSelf(lua_State *, long);
private:
	static long Lfn_gc(lua_State *);
	static long Lfn_tostring(lua_State *);
};
class extension::auxscript::UDHelper<extension::GFXIText::FilterParams>
{
	struct Traits;
public:
	static void MakeMeta(lua_State *, luaL_Reg *);
	static void GetMeta(lua_State *);
	static bool IsNilMeta(lua_State *);
	static extension::GFXIText::FilterParams & CheckSelf(lua_State *, long);
	static extension::GFXIText::FilterParams * TestSelf(lua_State *, long);
private:
	static long Lfn_gc(lua_State *);
	static long Lfn_tostring(lua_State *);
};
const char extension::auxscript::UDTraits<extension::GFXIText::FilterParams>::RegistryName[22]; // 0x14092BFF0
struct extension::auxscript::UDTraits<extension::`anonymous namespace'::TextUData>
{
	static const char RegistryName[0]; // 0xFFFFFFFFFFFFFFFF
};
const char extension::auxscript::UDTraits<extension::GFXIFontManager::LanguageConfig>::RegistryName[31]; // 0x14092C008
struct extension::auxscript::UDTraits<extension::GFXIText::FilterParams>
{
	static const char RegistryName[0]; // 0xFFFFFFFFFFFFFFFF
};
const char extension::auxscript::UDTraits<extension::BasicFutureObject<extension::GFXIMovieData,void> >::RegistryName[16]; // 0x14092C038
const char extension::auxscript::UDTraits<extension::GFXIMovie>::RegistryName[10]; // 0x14092C048
std::piecewise_construct_t std::piecewise_construct; // 0x1408AF07F
class extension::`anonymous-namespace'::TextUData
{
private:
	Scaleform::String m_str; // 0x0
	extension::GFXIText m_text; // 0x8
	bool m_isHtml; // 0x10
	bool m_isUpdateString; // 0x11
	bool m_isUpdatePivot; // 0x12
public:
	TextUData(extension::`anonymous-namespace'::TextUData &);
	TextUData(const extension::`anonymous-namespace'::TextUData &);
	TextUData();
	void setX(float);
	void setY(float);
	void setStr(const char *);
	void invalidateStr();
	bool isInvalidStr();
	void setColor(unsigned long);
	void setBgColor(unsigned long);
	void setFilterParams(const extension::GFXIText::FilterParams &);
	void setIsHtml(float);
	void setHAlign(extension::GFXIText::HAlignment);
	void setVAlign(extension::GFXIText::VAlignment);
	void setFontSize(float);
	void setFontName(const char *);
	void setLineSpacing(float);
	void update();
	~TextUData();
	extension::`anonymous-namespace'::TextUData & operator=(extension::`anonymous-namespace'::TextUData &);
	extension::`anonymous-namespace'::TextUData & operator=(const extension::`anonymous-namespace'::TextUData &);
};
struct std::pair<char const *,enum extension::GFXIMultiControllerMode::Spec>
{
	struct _Myt;
	typedef const char first_type;
	enum second_type
	{
		Default = 0,
		ByUser = 1,
		ByFighter = 2,
		ByController = 3,
	};
	pair<char const *,enum extension::GFXIMultiControllerMode::Spec>(std::pair<char const *,enum extension::GFXIMultiControllerMode::Spec> &);
	std::pair<char const *,enum extension::GFXIMultiControllerMode::Spec> & operator=(const std::pair<char const *,enum extension::GFXIMultiControllerMode::Spec> &);
	std::pair<char const *,enum extension::GFXIMultiControllerMode::Spec> & operator=(std::pair<char const *,enum extension::GFXIMultiControllerMode::Spec> &);
	const char * first; // 0x0
	extension::GFXIMultiControllerMode::Spec second; // 0x8
	void swap(std::pair<char const *,enum extension::GFXIMultiControllerMode::Spec> &);
};
struct std::pair<char const *,enum Scaleform::Key::Code>
{
	struct _Myt;
	typedef const char first_type;
	enum second_type
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
	pair<char const *,enum Scaleform::Key::Code>(std::pair<char const *,enum Scaleform::Key::Code> &);
	std::pair<char const *,enum Scaleform::Key::Code> & operator=(const std::pair<char const *,enum Scaleform::Key::Code> &);
	std::pair<char const *,enum Scaleform::Key::Code> & operator=(std::pair<char const *,enum Scaleform::Key::Code> &);
	const char * first; // 0x0
	Scaleform::Key::Code second; // 0x8
	void swap(std::pair<char const *,enum Scaleform::Key::Code> &);
};
struct std::pair<char const *,enum Scaleform::GFx::FontMap::MapFontFlags>
{
	struct _Myt;
	typedef const char first_type;
	enum second_type
	{
		MFF_Original = 16,
		MFF_NoAutoFit = 32,
		MFF_Normal = 0,
		MFF_Italic = 1,
		MFF_Bold = 2,
		MFF_BoldItalic = 3,
		MFF_FauxItalic = 4,
		MFF_FauxBold = 8,
		MFF_FauxBoldItalic = 12,
	};
	pair<char const *,enum Scaleform::GFx::FontMap::MapFontFlags>(std::pair<char const *,enum Scaleform::GFx::FontMap::MapFontFlags> &);
	std::pair<char const *,enum Scaleform::GFx::FontMap::MapFontFlags> & operator=(const std::pair<char const *,enum Scaleform::GFx::FontMap::MapFontFlags> &);
	std::pair<char const *,enum Scaleform::GFx::FontMap::MapFontFlags> & operator=(std::pair<char const *,enum Scaleform::GFx::FontMap::MapFontFlags> &);
	const char * first; // 0x0
	Scaleform::GFx::FontMap::MapFontFlags second; // 0x8
	void swap(std::pair<char const *,enum Scaleform::GFx::FontMap::MapFontFlags> &);
};
class std::reverse_iterator<char const *> :
	std::iterator<std::random_access_iterator_tag,char,__int64,char const *,char const &>
{
	class _Myt;
	typedef long long difference_type;
	typedef const char pointer;
	typedef const char reference;
	typedef const char iterator_type;
public:
	reverse_iterator<char const *>(const char *);
	reverse_iterator<char const *>();
	const char * base();
	const char & operator*();
	const char * operator->();
	std::reverse_iterator<char const *> operator++(long);
	std::reverse_iterator<char const *> & operator++();
	std::reverse_iterator<char const *> operator--(long);
	std::reverse_iterator<char const *> & operator--();
	std::reverse_iterator<char const *> & operator+=(long long);
	std::reverse_iterator<char const *> operator+(long long);
	std::reverse_iterator<char const *> & operator-=(long long);
	std::reverse_iterator<char const *> operator-(long long);
	const char & operator[](long long);
protected:
	const char * current; // 0x0
};
struct extension::`anonymous-namespace'::TextFilterMeta
{
	static void AuxConvertFilterUD(lua_State *, long);
	static extension::GFXIText::FilterParams * AuxClearChangedFlag(lua_State *, long);
private:
	static const std::pair<char const *,unsigned __int64> FieldNameTable[0]; // 0xFFFFFFFFFFFFFFFF
	static long Lfn_metaIndex(lua_State *);
	static long Lfn_metaNewIndex(lua_State *);
};
struct std::pair<char const *,unsigned __int64>
{
	struct _Myt;
	typedef const char first_type;
	typedef unsigned long long second_type;
	pair<char const *,unsigned __int64>(std::pair<char const *,unsigned __int64> &);
	std::pair<char const *,unsigned __int64> & operator=(const std::pair<char const *,unsigned __int64> &);
	std::pair<char const *,unsigned __int64> & operator=(std::pair<char const *,unsigned __int64> &);
	const char * first; // 0x0
	unsigned long long second; // 0x8
	void swap(std::pair<char const *,unsigned __int64> &);
};
struct extension::`anonymous-namespace'::TextMeta
{
private:
	static void AuxUpdateString(lua_State *, long);
	static void AuxUpdateAttrib(lua_State *, long, long, long);
	static const std::pair<char const *,int> TextAttrNameTable[0]; // 0xFFFFFFFFFFFFFFFF
public:
	static const long TextMetaIndex_Format; // 0xFFFFFFFFFFFFFFFF
	static const long TextMetaIndex_Unpack; // 0xFFFFFFFFFFFFFFFF
	enum TextAttrSpec
	{
		kTextAttr_XPos = 0,
		kTextAttr_YPos = 1,
		kTextAttr_HAlign = 2,
		kTextAttr_VAlign = 3,
		kTextAttr_FontSize = 4,
		kTextAttr_FontName = 5,
		kTextAttr_Color = 6,
		kTextAttr_BgColor = 7,
		kTextAttr_IsHtml = 8,
		kTextAttr_LineSpacing = 9,
		kTextAttr_Filters = 10,
	};
	static long Lfn_CreateTextUData(lua_State *);
	static long Lfn_metaLen(lua_State *);
	static long Lfn_metaIndex(lua_State *);
	static long Lfn_metaNewIndex(lua_State *);
	static long Lfn_metaCall(lua_State *);
	static void AuxCreateMetaTable(lua_State *);
};
struct extension::`anonymous-namespace'::TextMeta
{
private:
	static void AuxUpdateString(lua_State *, long);
	static void AuxUpdateAttrib(lua_State *, long, long, long);
	static const std::pair<char const *,int> TextAttrNameTable[0]; // 0xFFFFFFFFFFFFFFFF
public:
	static const long TextMetaIndex_Format; // 0xFFFFFFFFFFFFFFFF
	static const long TextMetaIndex_Unpack; // 0xFFFFFFFFFFFFFFFF
	enum TextAttrSpec
	{
		kTextAttr_XPos = 0,
		kTextAttr_YPos = 1,
		kTextAttr_HAlign = 2,
		kTextAttr_VAlign = 3,
		kTextAttr_FontSize = 4,
		kTextAttr_FontName = 5,
		kTextAttr_Color = 6,
		kTextAttr_BgColor = 7,
		kTextAttr_IsHtml = 8,
		kTextAttr_LineSpacing = 9,
		kTextAttr_Filters = 10,
	};
	static long Lfn_CreateTextUData(lua_State *);
	static long Lfn_metaLen(lua_State *);
	static long Lfn_metaIndex(lua_State *);
	static long Lfn_metaNewIndex(lua_State *);
	static long Lfn_metaCall(lua_State *);
	static void AuxCreateMetaTable(lua_State *);
};
struct extension::`anonymous-namespace'::TextMeta
{
private:
	static void AuxUpdateString(lua_State *, long);
	static void AuxUpdateAttrib(lua_State *, long, long, long);
	static const std::pair<char const *,int> TextAttrNameTable[0]; // 0xFFFFFFFFFFFFFFFF
public:
	static const long TextMetaIndex_Format; // 0xFFFFFFFFFFFFFFFF
	static const long TextMetaIndex_Unpack; // 0xFFFFFFFFFFFFFFFF
	enum TextAttrSpec
	{
		kTextAttr_XPos = 0,
		kTextAttr_YPos = 1,
		kTextAttr_HAlign = 2,
		kTextAttr_VAlign = 3,
		kTextAttr_FontSize = 4,
		kTextAttr_FontName = 5,
		kTextAttr_Color = 6,
		kTextAttr_BgColor = 7,
		kTextAttr_IsHtml = 8,
		kTextAttr_LineSpacing = 9,
		kTextAttr_Filters = 10,
	};
	static long Lfn_CreateTextUData(lua_State *);
	static long Lfn_metaLen(lua_State *);
	static long Lfn_metaIndex(lua_State *);
	static long Lfn_metaNewIndex(lua_State *);
	static long Lfn_metaCall(lua_State *);
	static void AuxCreateMetaTable(lua_State *);
};
struct extension::`anonymous-namespace'::TextMeta
{
private:
	static void AuxUpdateString(lua_State *, long);
	static void AuxUpdateAttrib(lua_State *, long, long, long);
	static const std::pair<char const *,int> TextAttrNameTable[0]; // 0xFFFFFFFFFFFFFFFF
public:
	static const long TextMetaIndex_Format; // 0xFFFFFFFFFFFFFFFF
	static const long TextMetaIndex_Unpack; // 0xFFFFFFFFFFFFFFFF
	enum TextAttrSpec
	{
		kTextAttr_XPos = 0,
		kTextAttr_YPos = 1,
		kTextAttr_HAlign = 2,
		kTextAttr_VAlign = 3,
		kTextAttr_FontSize = 4,
		kTextAttr_FontName = 5,
		kTextAttr_Color = 6,
		kTextAttr_BgColor = 7,
		kTextAttr_IsHtml = 8,
		kTextAttr_LineSpacing = 9,
		kTextAttr_Filters = 10,
	};
	static long Lfn_CreateTextUData(lua_State *);
	static long Lfn_metaLen(lua_State *);
	static long Lfn_metaIndex(lua_State *);
	static long Lfn_metaNewIndex(lua_State *);
	static long Lfn_metaCall(lua_State *);
	static void AuxCreateMetaTable(lua_State *);
};
struct extension::`anonymous-namespace'::TextMeta
{
private:
	static void AuxUpdateString(lua_State *, long);
	static void AuxUpdateAttrib(lua_State *, long, long, long);
	static const std::pair<char const *,int> TextAttrNameTable[0]; // 0xFFFFFFFFFFFFFFFF
public:
	static const long TextMetaIndex_Format; // 0xFFFFFFFFFFFFFFFF
	static const long TextMetaIndex_Unpack; // 0xFFFFFFFFFFFFFFFF
	enum TextAttrSpec
	{
		kTextAttr_XPos = 0,
		kTextAttr_YPos = 1,
		kTextAttr_HAlign = 2,
		kTextAttr_VAlign = 3,
		kTextAttr_FontSize = 4,
		kTextAttr_FontName = 5,
		kTextAttr_Color = 6,
		kTextAttr_BgColor = 7,
		kTextAttr_IsHtml = 8,
		kTextAttr_LineSpacing = 9,
		kTextAttr_Filters = 10,
	};
	static long Lfn_CreateTextUData(lua_State *);
	static long Lfn_metaLen(lua_State *);
	static long Lfn_metaIndex(lua_State *);
	static long Lfn_metaNewIndex(lua_State *);
	static long Lfn_metaCall(lua_State *);
	static void AuxCreateMetaTable(lua_State *);
};
struct std::pair<char const *,int>
{
	struct _Myt;
	typedef const char first_type;
	typedef long second_type;
	pair<char const *,int>(std::pair<char const *,int> &);
	std::pair<char const *,int> & operator=(const std::pair<char const *,int> &);
	std::pair<char const *,int> & operator=(std::pair<char const *,int> &);
	const char * first; // 0x0
	long second; // 0x8
	void swap(std::pair<char const *,int> &);
};
struct std::pair<char const *,enum extension::GFXIText::HAlignment>
{
	struct _Myt;
	typedef const char first_type;
	enum second_type
	{
		HAlign_Left = 0,
		HAlign_Center = 1,
		HAlign_Right = 2,
	};
	pair<char const *,enum extension::GFXIText::HAlignment>(std::pair<char const *,enum extension::GFXIText::HAlignment> &);
	std::pair<char const *,enum extension::GFXIText::HAlignment> & operator=(const std::pair<char const *,enum extension::GFXIText::HAlignment> &);
	std::pair<char const *,enum extension::GFXIText::HAlignment> & operator=(std::pair<char const *,enum extension::GFXIText::HAlignment> &);
	const char * first; // 0x0
	extension::GFXIText::HAlignment second; // 0x8
	void swap(std::pair<char const *,enum extension::GFXIText::HAlignment> &);
};
struct std::pair<char const *,enum extension::GFXIText::VAlignment>
{
	struct _Myt;
	typedef const char first_type;
	enum second_type
	{
		VAlign_Top = 0,
		VAlign_Center = 1,
		VAlign_Bottom = 2,
	};
	pair<char const *,enum extension::GFXIText::VAlignment>(std::pair<char const *,enum extension::GFXIText::VAlignment> &);
	std::pair<char const *,enum extension::GFXIText::VAlignment> & operator=(const std::pair<char const *,enum extension::GFXIText::VAlignment> &);
	std::pair<char const *,enum extension::GFXIText::VAlignment> & operator=(std::pair<char const *,enum extension::GFXIText::VAlignment> &);
	const char * first; // 0x0
	extension::GFXIText::VAlignment second; // 0x8
	void swap(std::pair<char const *,enum extension::GFXIText::VAlignment> &);
};
long extension::Lfn_OpenGFxLib(lua_State * L); // 0x1402AEAD0//decompilation failure at 14092BFF0!
//decompilation failure at 14092C008!
//decompilation failure at 14092C038!
//decompilation failure at 14092C048!
//decompilation failure at 1408AF07F!
__int64 __fastcall extension::auxscript::AuxCheckOption<int,13>(
        lua_State *L,
        int narg,
        const std::pair<char const *,int> (*table)[13],
        int defaultValue)
{
  int v4; // ebx
  const extension::gfxi_detail::TranslatorImpl *v6; // rax
  global_State **v7; // r10
  extension::gfxi_detail::TranslatorImpl *v8; // r9
  extension::gfxi_detail::TranslatorImpl_vtbl *v9; // rax
  int v10; // ecx
  int v11; // edx

  v4 = narg;
  if ( (unsigned int)narg >= 0xFFF0B9D9 || narg == 0 )
    v4 = L->top - L->ci->func + narg;
  v6 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, v4);
  if ( v6 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v6->RefCount & 0xF) == 0 )
  {
    return 0xFFFFFFFFi64;
  }
  v7 = lua_tolstring(L, v4, 0i64);
  if ( !v7 )
    tag_error(L, v4, 4);
  v8 = (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[2][24];
  while ( 1 )
  {
    v9 = v8->__vftable;
    do
    {
      v10 = *((unsigned __int8 *)&v9->~RefCountImplCore + (char *)v7 - (char *)v8->__vftable);
      v11 = LOBYTE(v9->~RefCountImplCore) - v10;
      if ( v11 )
        break;
      v9 = (extension::gfxi_detail::TranslatorImpl_vtbl *)((char *)v9 + 1);
    }
    while ( v10 );
    if ( !v11 )
      break;
    v8 = (extension::gfxi_detail::TranslatorImpl *)((char *)v8 + 16);
    if ( v8 == (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[2][232] )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)v8->RefCount;
}

__int64 __fastcall extension::auxscript::AuxCheckOption<enum Scaleform::Key::Code,114>(
        lua_State *L,
        int narg,
        const std::pair<char const *,enum Scaleform::Key::Code> (*table)[114],
        Scaleform::Key::Code defaultValue)
{
  int v4; // ebx
  const extension::gfxi_detail::TranslatorImpl *v6; // rax
  global_State **v7; // r10
  extension::gfxi_detail::TranslatorImpl *v8; // r9
  extension::gfxi_detail::TranslatorImpl_vtbl *v9; // rax
  int v10; // ecx
  int v11; // edx

  v4 = narg;
  if ( (unsigned int)narg >= 0xFFF0B9D9 || narg == 0 )
    v4 = L->top - L->ci->func + narg;
  v6 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, v4);
  if ( v6 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v6->RefCount & 0xF) == 0 )
  {
    return 0i64;
  }
  v7 = lua_tolstring(L, v4, 0i64);
  if ( !v7 )
    tag_error(L, v4, 4);
  v8 = (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataBase[9][40];
  while ( 1 )
  {
    v9 = v8->__vftable;
    do
    {
      v10 = *((unsigned __int8 *)&v9->~RefCountImplCore + (char *)v7 - (char *)v8->__vftable);
      v11 = LOBYTE(v9->~RefCountImplCore) - v10;
      if ( v11 )
        break;
      v9 = (extension::gfxi_detail::TranslatorImpl_vtbl *)((char *)v9 + 1);
    }
    while ( v10 );
    if ( !v11 )
      break;
    v8 = (extension::gfxi_detail::TranslatorImpl *)((char *)v8 + 16);
    if ( v8 == (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[1][136] )
      return 0i64;
  }
  return (unsigned int)v8->RefCount;
}

__int64 __fastcall extension::auxscript::AuxCheckOption<enum extension::GFXIText::HAlignment,7>(
        lua_State *L,
        int narg,
        const std::pair<char const *,enum extension::GFXIText::VAlignment> (*table)[7],
        extension::GFXIText::VAlignment defaultValue)
{
  int v5; // edi
  const extension::gfxi_detail::TranslatorImpl *v7; // rax
  global_State **v8; // r10
  const std::pair<char const *,enum extension::GFXIText::VAlignment> (*v9)[7]; // r9
  const char *first; // rax
  int v11; // ecx
  int v12; // edx

  v5 = narg;
  if ( (unsigned int)narg >= 0xFFF0B9D9 || narg == 0 )
    v5 = L->top - L->ci->func + narg;
  v7 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, v5);
  if ( v7 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v7->RefCount & 0xF) == 0 )
  {
    return 0i64;
  }
  v8 = lua_tolstring(L, v5, 0i64);
  if ( !v8 )
    tag_error(L, v5, 4);
  v9 = (const std::pair<char const *,enum extension::GFXIText::VAlignment> (*)[7])&(*table)[7];
  if ( table == (const std::pair<char const *,enum extension::GFXIText::VAlignment> (*)[7])&(*table)[7] )
    return 0i64;
  while ( 1 )
  {
    first = (*table)[0].first;
    do
    {
      v11 = (unsigned __int8)first[(char *)v8 - (*table)[0].first];
      v12 = *(unsigned __int8 *)first - v11;
      if ( v12 )
        break;
      ++first;
    }
    while ( v11 );
    if ( !v12 )
      break;
    table = (const std::pair<char const *,enum extension::GFXIText::VAlignment> (*)[7])((char *)table + 16);
    if ( table == v9 )
      return 0i64;
  }
  return (unsigned int)(*table)[0].second;
}

__int64 __fastcall extension::auxscript::AuxCheckOption<enum Scaleform::GFx::FontMap::MapFontFlags,8>(
        lua_State *L,
        int narg,
        const std::pair<char const *,enum Scaleform::GFx::FontMap::MapFontFlags> (*table)[8],
        Scaleform::GFx::FontMap::MapFontFlags defaultValue)
{
  int v6; // edi
  const extension::gfxi_detail::TranslatorImpl *v7; // rax
  global_State **v8; // r10
  const std::pair<char const *,enum Scaleform::GFx::FontMap::MapFontFlags> (*v9)[8]; // r9
  const char *first; // rax
  int v11; // ecx
  int v12; // edx

  v6 = L->top - L->ci->func - 1;
  v7 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, v6);
  if ( v7 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v7->RefCount & 0xF) == 0 )
  {
    return 0xFFFFFFFFi64;
  }
  v8 = lua_tolstring(L, v6, 0i64);
  if ( !v8 )
    tag_error(L, v6, 4);
  v9 = (const std::pair<char const *,enum Scaleform::GFx::FontMap::MapFontFlags> (*)[8])&(*table)[8];
  if ( table == (const std::pair<char const *,enum Scaleform::GFx::FontMap::MapFontFlags> (*)[8])&(*table)[8] )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    first = (*table)[0].first;
    do
    {
      v11 = (unsigned __int8)first[(char *)v8 - (*table)[0].first];
      v12 = *(unsigned __int8 *)first - v11;
      if ( v12 )
        break;
      ++first;
    }
    while ( v11 );
    if ( !v12 )
      break;
    table = (const std::pair<char const *,enum Scaleform::GFx::FontMap::MapFontFlags> (*)[8])((char *)table + 16);
    if ( table == v9 )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)(*table)[0].second;
}

__int64 __fastcall extension::auxscript::AuxCheckOption<enum extension::GFXIMultiControllerMode::Spec,3>(
        lua_State *L,
        int narg,
        const std::pair<char const *,enum extension::GFXIMultiControllerMode::Spec> (*table)[3],
        extension::GFXIMultiControllerMode::Spec defaultValue)
{
  const extension::gfxi_detail::TranslatorImpl *v5; // rax
  global_State **v6; // r10
  extension::gfxi_detail::TranslatorImpl *v7; // r9
  extension::gfxi_detail::TranslatorImpl_vtbl *v8; // rax
  int v9; // ecx
  int v10; // edx

  v5 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, 2);
  if ( v5 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v5->RefCount & 0xF) == 0 )
  {
    return 0i64;
  }
  v6 = lua_tolstring(L, 2, 0i64);
  if ( !v6 )
    tag_error(L, 2, 4);
  v7 = (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataBase[8][56];
  while ( 1 )
  {
    v8 = v7->__vftable;
    do
    {
      v9 = *((unsigned __int8 *)&v8->~RefCountImplCore + (char *)v6 - (char *)v7->__vftable);
      v10 = LOBYTE(v8->~RefCountImplCore) - v9;
      if ( v10 )
        break;
      v8 = (extension::gfxi_detail::TranslatorImpl_vtbl *)((char *)v8 + 1);
    }
    while ( v9 );
    if ( !v10 )
      break;
    v7 = (extension::gfxi_detail::TranslatorImpl *)((char *)v7 + 16);
    if ( v7 == (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataBase[9][40] )
      return 0i64;
  }
  return (unsigned int)v7->RefCount;
}

unsigned __int64 __fastcall extension::auxscript::AuxCheckOption<unsigned __int64,9>(
        lua_State *L,
        int narg,
        const std::pair<char const *,unsigned __int64> (*table)[9],
        unsigned __int64 defaultValue)
{
  const extension::gfxi_detail::TranslatorImpl *v5; // rax
  global_State **v6; // r10
  char *v7; // r9
  unsigned __int8 *v8; // rax
  int v9; // ecx
  int v10; // edx

  v5 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, 2);
  if ( v5 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v5->RefCount & 0xF) == 0 )
  {
    return 36i64;
  }
  v6 = lua_tolstring(L, 2, 0i64);
  if ( !v6 )
    tag_error(L, 2, 4);
  v7 = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[1][136];
  while ( 1 )
  {
    v8 = *(unsigned __int8 **)v7;
    do
    {
      v9 = *((unsigned __int8 *)v6 + (_QWORD)v8 - *(_QWORD *)v7);
      v10 = *v8 - v9;
      if ( v10 )
        break;
      ++v8;
    }
    while ( v9 );
    if ( !v10 )
      break;
    v7 += 16;
    if ( v7 == &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[2][24] )
      return 36i64;
  }
  return *((_QWORD *)v7 + 1);
}

Node **__fastcall extension::auxscript::UDHelper<extension::GFXIText::FilterParams>::New<>(lua_State *L)
{
  global_State *l_G; // rcx
  __int64 v3; // rax
  GCObject *v4; // rax
  Node **p_lastfree; // rbx
  lua_TValue *top; // rcx
  Node **result; // rax
  lua_TValue *v8; // rax
  lua_TValue *v9; // rbx
  GCObject *v10; // rax

  l_G = L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v3 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v3;
    }
  }
  v4 = luaC_newobj(L, 7, 0x4Cui64, 0i64);
  v4->u.uv.len = 36i64;
  p_lastfree = &v4->h.lastfree;
  v4->ts.tsv.len = 0i64;
  v4->u.uv.env = 0i64;
  top = L->top;
  top->value_.gc = v4;
  top->tt_ = 71;
  ++L->top;
  if ( (unsigned int)luaL_newmetatable(L, "GFx.Text.FilterParams") )
  {
    v8 = L->top;
    v8->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::GFXIText::FilterParams>::Lfn_gc;
    v8->tt_ = 22;
    v9 = L->top;
    L->top = v9 + 2;
    v10 = luaS_newlstr(L, "__gc", 4ui64);
    v9[1].value_.gc = v10;
    v9[1].tt_ = v10->gch.tt | 0x40;
    luaV_settable(L, v9 - 1, L->top - 1, L->top - 2);
    L->top -= 2;
    luaL_error(L, "userdata [%s] metatable is not inintialized.", "GFx.Text.FilterParams");
  }
  lua_setmetatable(L, -2);
  if ( !p_lastfree )
    return 0i64;
  *p_lastfree = (Node *)1065353216;
  result = p_lastfree;
  *((_DWORD *)p_lastfree + 2) = 0;
  *((_DWORD *)p_lastfree + 3) = 1065353216;
  *((_DWORD *)p_lastfree + 5) = 1036831949;
  *((_DWORD *)p_lastfree + 4) = 1036831949;
  *((_DWORD *)p_lastfree + 6) = -16777216;
  *((_DWORD *)p_lastfree + 7) = 1110704128;
  *((_DWORD *)p_lastfree + 8) = 1036831949;
  return result;
}

extension::GFXIFontManager::LanguageConfig *__fastcall extension::auxscript::UDHelper<extension::GFXIFontManager::LanguageConfig>::New<>(
        lua_State *L)
{
  global_State *l_G; // rcx
  GCObject *v3; // rax
  __int64 v4; // rdi
  lua_TValue *top; // rcx
  extension::GFXIFontManager::LanguageConfig *p_oldpc; // rbx
  lua_TValue *v7; // rax
  lua_TValue *v8; // rbx
  GCObject *v9; // rax
  __int64 v10; // rax

  l_G = L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      l_G->totalbytes += l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
    }
  }
  v3 = luaC_newobj(L, 7, 0x30ui64, 0i64);
  v3->u.uv.len = 8i64;
  v4 = 0i64;
  v3->ts.tsv.len = 0i64;
  v3->u.uv.env = 0i64;
  top = L->top;
  top->value_.gc = v3;
  top->tt_ = 71;
  ++L->top;
  p_oldpc = (extension::GFXIFontManager::LanguageConfig *)&v3->th.oldpc;
  if ( (unsigned int)luaL_newmetatable(L, "GFx.FontManager.LanguageConfig") )
  {
    v7 = L->top;
    v7->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::GFXIFontManager::LanguageConfig>::Lfn_gc;
    v7->tt_ = 22;
    v8 = L->top;
    L->top = v8 + 2;
    v9 = luaS_newlstr(L, "__gc", 4ui64);
    v8[1].value_.gc = v9;
    v8[1].tt_ = v9->gch.tt | 0x40;
    luaV_settable(L, v8 - 1, L->top - 1, L->top - 2);
    L->top -= 2;
    luaL_error(L, "userdata [%s] metatable is not inintialized.", "GFx.FontManager.LanguageConfig");
  }
  lua_setmetatable(L, -2);
  if ( p_oldpc )
  {
    extension::GFXIFontManager::LanguageConfig::LanguageConfig(p_oldpc);
    return (extension::GFXIFontManager::LanguageConfig *)v10;
  }
  return (extension::GFXIFontManager::LanguageConfig *)v4;
}

extension::BasicFutureObject<extension::GFXIMovieData,void> *__fastcall extension::auxscript::UDHelper<extension::BasicFutureObject<extension::GFXIMovieData,void>>::New<char const *>(
        lua_State *L,
        const char *const *<args_0>)
{
  char v4; // di
  global_State *l_G; // rcx
  GCObject *v6; // rax
  lua_TValue *top; // rcx
  __int64 p_lastfree; // rbx
  lua_TValue *v9; // rax
  lua_TValue *v10; // rbx
  GCObject *v11; // rax
  const char *v12; // rdx
  unsigned __int64 v13; // r8
  extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache *v14; // rcx
  const void *v15; // r9
  char *Ptr; // rcx
  char *v17; // rax
  std::string v19; // [rsp+38h] [rbp-80h] BYREF
  __int64 v20; // [rsp+58h] [rbp-60h]
  Node **v21; // [rsp+60h] [rbp-58h]
  __int64 v22; // [rsp+68h] [rbp-50h]
  std::string _Right; // [rsp+78h] [rbp-40h] BYREF

  v20 = -2i64;
  v4 = 0;
  l_G = L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      l_G->totalbytes += l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
    }
  }
  v6 = luaC_newobj(L, 7, 0x38ui64, 0i64);
  v6->u.uv.len = 16i64;
  v6->ts.tsv.len = 0i64;
  v6->u.uv.env = 0i64;
  top = L->top;
  top->value_.gc = v6;
  top->tt_ = 71;
  ++L->top;
  p_lastfree = (__int64)&v6->h.lastfree;
  v21 = &v6->h.lastfree;
  if ( (unsigned int)luaL_newmetatable(L, "GFx.FutureMovie") )
  {
    v9 = L->top;
    v9->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::BasicFutureObject<extension::GFXIMovieData,void>>::Lfn_gc;
    v9->tt_ = 22;
    v10 = L->top;
    L->top = v10 + 2;
    v11 = luaS_newlstr(L, "__gc", 4ui64);
    v10[1].value_.gc = v11;
    v10[1].tt_ = v11->gch.tt | 0x40;
    luaV_settable(L, v10 - 1, L->top - 1, L->top - 2);
    L->top -= 2;
    luaL_error(L, "userdata [%s] metatable is not inintialized.", "GFx.FutureMovie");
  }
  lua_setmetatable(L, -2);
  v22 = p_lastfree;
  if ( p_lastfree )
  {
    v12 = *<args_0>;
    _Right._Mypair._Myval2._Myres = 15i64;
    _Right._Mypair._Myval2._Mysize = 0i64;
    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( *v12 )
    {
      v13 = -1i64;
      do
        ++v13;
      while ( v12[v13] );
    }
    else
    {
      v13 = 0i64;
    }
    std::string::assign(&_Right, v12, v13);
    v4 = 1;
    *(_BYTE *)(p_lastfree + 1) = 0;
    v19._Mypair._Myval2._Myres = 15i64;
    v19._Mypair._Myval2._Mysize = 0i64;
    v19._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v19, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::getCachedOrLoadStart(
      v14,
      (extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> *)(p_lastfree + 8),
      &v19,
      v15);
  }
  else
  {
    p_lastfree = 0i64;
  }
  if ( (v4 & 1) != 0 && _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v17 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v17 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v17) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v17) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  return (extension::BasicFutureObject<extension::GFXIMovieData,void> *)p_lastfree;
}

extension::GFXIMovie *__fastcall extension::auxscript::UDHelper<extension::GFXIMovie>::New<extension::GFXIMovie>(
        lua_State *L,
        const extension::GFXIMovie *<args_0>)
{
  global_State *l_G; // rcx
  __int64 v5; // rax
  GCObject *v6; // rax
  extension::GFXIMovie *p_oldpc; // rbx
  lua_TValue *top; // rcx
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  lua_TValue *v11; // rax
  lua_TValue *v12; // rbx
  GCObject *v13; // rax

  l_G = L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v5 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v5;
    }
  }
  v6 = luaC_newobj(L, 7, 0x30ui64, 0i64);
  v6->u.uv.len = 8i64;
  p_oldpc = (extension::GFXIMovie *)&v6->th.oldpc;
  v6->ts.tsv.len = 0i64;
  v6->u.uv.env = 0i64;
  top = L->top;
  top->value_.gc = v6;
  top->tt_ = 71;
  ++L->top;
  if ( (unsigned int)luaL_newmetatable(L, "GFx.Movie") )
  {
    v11 = L->top;
    v11->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::GFXIMovie>::Lfn_gc;
    v11->tt_ = 22;
    v12 = L->top;
    L->top = v12 + 2;
    v13 = luaS_newlstr(L, "__gc", 4ui64);
    v12[1].value_.gc = v13;
    v12[1].tt_ = v13->gch.tt | 0x40;
    luaV_settable(L, v12 - 1, L->top - 1, L->top - 2);
    L->top -= 2;
    luaL_error(L, "userdata [%s] metatable is not inintialized.", "GFx.Movie");
  }
  lua_setmetatable(L, -2);
  if ( !p_oldpc )
    return p_oldpc;
  m_ptr = <args_0>->m_movieProxy.m_ptr;
  p_oldpc->m_movieProxy.m_ptr = <args_0>->m_movieProxy.m_ptr;
  if ( !m_ptr )
    return p_oldpc;
  _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 1ui64);
  return p_oldpc;
}

bool __fastcall extension::auxscript::UDHelper<extension::GFXIText::FilterParams>::IsNilMeta(lua_State *L)
{
  global_State *l_G; // rdi
  lua_TValue *top; // rbx
  GCObject *v4; // rax
  extension::gfxi_detail::TranslatorImpl *v5; // rcx
  int v6; // eax

  l_G = L->l_G;
  top = L->top;
  v4 = luaS_newlstr(L, "GFx.Text.FilterParams", 0x15ui64);
  top->value_.gc = v4;
  top->tt_ = v4->gch.tt | 0x40;
  ++L->top;
  luaV_gettable(L, &l_G->l_registry, L->top - 1, L->top - 1);
  v5 = (extension::gfxi_detail::TranslatorImpl *)&L->top[-1];
  if ( v5 == (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    v6 = -1;
  else
    v6 = v5->RefCount & 0xF;
  L->top = (lua_TValue *)v5;
  return v6 == 0;
}

__int64 __fastcall extension::Lfn_OpenGFxLib(lua_State *L)
{
  global_State *l_G; // rcx
  __int64 v3; // rax
  Table *v4; // rax
  lua_TValue *top; // rdx
  luaL_Reg reg; // [rsp+20h] [rbp-78h] BYREF
  const char *v8; // [rsp+30h] [rbp-68h]
  int (__fastcall *v9)(lua_State *); // [rsp+38h] [rbp-60h]
  const char *v10; // [rsp+40h] [rbp-58h]
  int (__fastcall *v11)(lua_State *); // [rsp+48h] [rbp-50h]
  const char *v12; // [rsp+50h] [rbp-48h]
  int (__fastcall *v13)(lua_State *); // [rsp+58h] [rbp-40h]
  const char *v14; // [rsp+60h] [rbp-38h]
  int (__fastcall *v15)(lua_State *); // [rsp+68h] [rbp-30h]
  __int64 v16; // [rsp+70h] [rbp-28h]
  __int64 v17; // [rsp+78h] [rbp-20h]

  extension::_anonymous_namespace_::AuxCreateFutureMovieMeta(L);
  extension::_anonymous_namespace_::AuxCreateMovieMeta(L);
  reg.func = extension::_anonymous_namespace_::Lfn_LanguageConfig_mapTo;
  reg.name = "__call";
  v9 = extension::_anonymous_namespace_::Lfn_LanguageConfig_mapTo;
  v8 = "mapTo";
  v10 = 0i64;
  v11 = 0i64;
  extension::auxscript::UDHelper<extension::GFXIFontManager::LanguageConfig>::MakeMeta(L, &reg);
  extension::_anonymous_namespace_::TextMeta::AuxCreateMetaTable(L);
  l_G = L->l_G;
  reg.name = "FutureMovie";
  reg.func = extension::_anonymous_namespace_::Lfn_GFx_FutureMovie;
  v8 = "LanguageConfig";
  v9 = extension::_anonymous_namespace_::Lfn_GFx_LanguageConfig;
  v10 = "SetFontFileLocation";
  v11 = extension::_anonymous_namespace_::Lfn_GFx_SetFontFileLocation;
  v12 = "SetSaveDataLanguageTracking";
  v13 = extension::_anonymous_namespace_::Lfn_GFx_SetSaveDataLanguageTracking;
  v14 = "Text";
  v15 = extension::_anonymous_namespace_::TextMeta::Lfn_CreateTextUData;
  v16 = 0i64;
  v17 = 0i64;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v3 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v3;
    }
  }
  v4 = luaH_new(L);
  top = L->top;
  top->value_.gc = (GCObject *)v4;
  top->tt_ = 69;
  ++L->top;
  luaH_resize(L, v4, 0, 5);
  luaL_setfuncs(L, &reg, 0);
  return 1i64;
}

__int64 __fastcall extension::auxscript::UDHelper<extension::GFXIText::FilterParams>::Lfn_gc(lua_State *L)
{
  lua_TValue *v2; // rdx
  int v3; // eax
  const char *v5; // rax

  if ( !luaL_testudata(L, 1, "GFx.Text.FilterParams") )
  {
    v2 = L->ci->func + 1;
    if ( v2 >= L->top
      || v2 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    {
      v3 = -1;
    }
    else
    {
      v3 = L->ci->func[1].tt_ & 0xF;
    }
    v5 = lua_pushfstring(
           L,
           "%s expected, got %s",
           "GFx.Text.FilterParams",
           *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * v3 + 112]);
    luaL_argerror(L, 1, v5);
  }
  return 0i64;
}

__int64 __fastcall extension::auxscript::UDHelper<extension::BasicFutureObject<extension::GFXIMovieData,void>>::Lfn_gc(
        lua_State *L)
{
  __int64 v2; // rax
  lua_TValue *v3; // rcx
  int v4; // ecx
  __int64 v5; // r8
  const char *v7; // rax

  v2 = luaL_testudata(L, 1, "GFx.FutureMovie");
  if ( !v2 )
  {
    v3 = L->ci->func + 1;
    if ( v3 >= L->top
      || v3 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    {
      v4 = -1;
    }
    else
    {
      v4 = L->ci->func[1].tt_ & 0xF;
    }
    v7 = lua_pushfstring(
           L,
           "%s expected, got %s",
           "GFx.FutureMovie",
           *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * v4 + 112]);
    luaL_argerror(L, 1, v7);
  }
  v5 = *(_QWORD *)(v2 + 8);
  if ( v5
    && _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v5 + 8) + 16i64), 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1i64);
  }
  return 0i64;
}

__int64 __fastcall extension::auxscript::UDHelper<extension::GFXIMovie>::Lfn_gc(lua_State *L)
{
  extension::gfxi_detail::MovieProxy **v2; // rax
  lua_TValue *v3; // rax
  int v4; // eax
  extension::gfxi_detail::MovieProxy *v5; // rbx
  const char *v7; // rax

  v2 = (extension::gfxi_detail::MovieProxy **)luaL_testudata(L, 1, "GFx.Movie");
  if ( !v2 )
  {
    v3 = L->ci->func + 1;
    if ( v3 >= L->top
      || v3 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    {
      v4 = -1;
    }
    else
    {
      v4 = L->ci->func[1].tt_ & 0xF;
    }
    v7 = lua_pushfstring(
           L,
           "%s expected, got %s",
           "GFx.Movie",
           *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * v4 + 112]);
    luaL_argerror(L, 1, v7);
  }
  v5 = *v2;
  if ( *v2 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 && v5 )
  {
    extension::gfxi_detail::MovieProxy::~MovieProxy(v5);
    operator delete(v5, 0xE8ui64);
  }
  return 0i64;
}

__int64 __fastcall extension::auxscript::UDHelper<extension::GFXIFontManager::LanguageConfig>::Lfn_gc(lua_State *L)
{
  extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl> **v2; // rax
  __int64 v3; // rdx
  std::_Wrap_alloc<std::allocator<std::string > > *v4; // r8
  std::integral_constant<bool,0> v5; // r9
  lua_TValue *v6; // rdx
  int v7; // eax
  const char *v9; // rax

  v2 = (extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl> **)luaL_testudata(
                                                                                 L,
                                                                                 1,
                                                                                 "GFx.FontManager.LanguageConfig");
  if ( !v2 )
  {
    v6 = L->ci->func + 1;
    if ( v6 >= L->top
      || v6 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    {
      v7 = -1;
    }
    else
    {
      v7 = L->ci->func[1].tt_ & 0xF;
    }
    v9 = lua_pushfstring(
           L,
           "%s expected, got %s",
           "GFx.FontManager.LanguageConfig",
           *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * v7 + 112]);
    luaL_argerror(L, 1, v9);
  }
  if ( *v2 )
    extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl>::release(*v2, v3, v4, v5);
  return 0i64;
}

__int64 __fastcall extension::auxscript::UDHelper<extension::GFXIText::FilterParams>::Lfn_tostring(lua_State *L)
{
  lua_pushstring(L, "GFx.Text.FilterParams");
  return 1i64;
}

__int64 __fastcall extension::auxscript::UDHelper<extension::BasicFutureObject<extension::GFXIMovieData,void>>::Lfn_tostring(
        lua_State *L)
{
  lua_pushstring(L, "GFx.FutureMovie");
  return 1i64;
}

__int64 __fastcall extension::auxscript::UDHelper<extension::GFXIMovie>::Lfn_tostring(lua_State *L)
{
  lua_pushstring(L, "GFx.Movie");
  return 1i64;
}

__int64 __fastcall extension::auxscript::UDHelper<extension::GFXIFontManager::LanguageConfig>::Lfn_tostring(
        lua_State *L)
{
  lua_pushstring(L, "GFx.FontManager.LanguageConfig");
  return 1i64;
}

void __fastcall extension::auxscript::UDHelper<extension::GFXIText::FilterParams>::MakeMeta(
        lua_State *L,
        luaL_Reg *reg)
{
  lua_TValue *top; // rbx
  GCObject *v5; // rax
  lua_TValue *v6; // rax
  lua_TValue *v7; // rbx
  GCObject *v8; // rax
  lua_TValue *v9; // rax
  lua_TValue *v10; // rbx
  GCObject *v11; // rax
  lua_TValue *v12; // rcx
  lua_TValue *v13; // rbx
  GCObject *v14; // rax

  luaL_newmetatable(L, "GFx.Text.FilterParams");
  *L->top = L->top[-1];
  top = L->top;
  L->top = top + 2;
  v5 = luaS_newlstr(L, "__index", 7ui64);
  top[1].value_.gc = v5;
  top[1].tt_ = v5->gch.tt | 0x40;
  luaV_settable(L, top - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  v6 = L->top;
  v6->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::GFXIText::FilterParams>::Lfn_tostring;
  v6->tt_ = 22;
  v7 = L->top;
  L->top = v7 + 2;
  v8 = luaS_newlstr(L, "__tostring", 0xAui64);
  v7[1].value_.gc = v8;
  v7[1].tt_ = v8->gch.tt | 0x40;
  luaV_settable(L, v7 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  if ( reg )
    luaL_setfuncs(L, reg, 0);
  v9 = L->top;
  v9->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::GFXIText::FilterParams>::Lfn_gc;
  v9->tt_ = 22;
  v10 = L->top;
  L->top = v10 + 2;
  v11 = luaS_newlstr(L, "__gc", 4ui64);
  v10[1].value_.gc = v11;
  v10[1].tt_ = v11->gch.tt | 0x40;
  luaV_settable(L, v10 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  v12 = L->top;
  v12->value_.gc = v12[-1].value_.gc;
  v12->tt_ = v12[-1].tt_;
  v13 = L->top;
  L->top = v13 + 2;
  v14 = luaS_newlstr(L, "__metatable", 0xBui64);
  v13[1].value_.gc = v14;
  v13[1].tt_ = v14->gch.tt | 0x40;
  luaV_settable(L, v13 - 1, L->top - 1, L->top - 2);
  L->top -= 3;
}

void __fastcall extension::auxscript::UDHelper<extension::BasicFutureObject<extension::GFXIMovieData,void>>::MakeMeta(
        lua_State *L,
        luaL_Reg *reg)
{
  lua_TValue *top; // rbx
  GCObject *v5; // rax
  lua_TValue *v6; // rax
  lua_TValue *v7; // rbx
  GCObject *v8; // rax
  lua_TValue *v9; // rax
  lua_TValue *v10; // rbx
  GCObject *v11; // rax
  lua_TValue *v12; // rcx
  lua_TValue *v13; // rbx
  GCObject *v14; // rax

  luaL_newmetatable(L, "GFx.FutureMovie");
  *L->top = L->top[-1];
  top = L->top;
  L->top = top + 2;
  v5 = luaS_newlstr(L, "__index", 7ui64);
  top[1].value_.gc = v5;
  top[1].tt_ = v5->gch.tt | 0x40;
  luaV_settable(L, top - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  v6 = L->top;
  v6->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::BasicFutureObject<extension::GFXIMovieData,void>>::Lfn_tostring;
  v6->tt_ = 22;
  v7 = L->top;
  L->top = v7 + 2;
  v8 = luaS_newlstr(L, "__tostring", 0xAui64);
  v7[1].value_.gc = v8;
  v7[1].tt_ = v8->gch.tt | 0x40;
  luaV_settable(L, v7 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  if ( reg )
    luaL_setfuncs(L, reg, 0);
  v9 = L->top;
  v9->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::BasicFutureObject<extension::GFXIMovieData,void>>::Lfn_gc;
  v9->tt_ = 22;
  v10 = L->top;
  L->top = v10 + 2;
  v11 = luaS_newlstr(L, "__gc", 4ui64);
  v10[1].value_.gc = v11;
  v10[1].tt_ = v11->gch.tt | 0x40;
  luaV_settable(L, v10 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  v12 = L->top;
  v12->value_.gc = v12[-1].value_.gc;
  v12->tt_ = v12[-1].tt_;
  v13 = L->top;
  L->top = v13 + 2;
  v14 = luaS_newlstr(L, "__metatable", 0xBui64);
  v13[1].value_.gc = v14;
  v13[1].tt_ = v14->gch.tt | 0x40;
  luaV_settable(L, v13 - 1, L->top - 1, L->top - 2);
  L->top -= 3;
}

void __fastcall extension::auxscript::UDHelper<extension::GFXIMovie>::MakeMeta(lua_State *L, luaL_Reg *reg)
{
  lua_TValue *top; // rbx
  GCObject *v5; // rax
  lua_TValue *v6; // rax
  lua_TValue *v7; // rbx
  GCObject *v8; // rax
  lua_TValue *v9; // rax
  lua_TValue *v10; // rbx
  GCObject *v11; // rax
  lua_TValue *v12; // rcx
  lua_TValue *v13; // rbx
  GCObject *v14; // rax

  luaL_newmetatable(L, "GFx.Movie");
  *L->top = L->top[-1];
  top = L->top;
  L->top = top + 2;
  v5 = luaS_newlstr(L, "__index", 7ui64);
  top[1].value_.gc = v5;
  top[1].tt_ = v5->gch.tt | 0x40;
  luaV_settable(L, top - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  v6 = L->top;
  v6->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::GFXIMovie>::Lfn_tostring;
  v6->tt_ = 22;
  v7 = L->top;
  L->top = v7 + 2;
  v8 = luaS_newlstr(L, "__tostring", 0xAui64);
  v7[1].value_.gc = v8;
  v7[1].tt_ = v8->gch.tt | 0x40;
  luaV_settable(L, v7 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  if ( reg )
    luaL_setfuncs(L, reg, 0);
  v9 = L->top;
  v9->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::GFXIMovie>::Lfn_gc;
  v9->tt_ = 22;
  v10 = L->top;
  L->top = v10 + 2;
  v11 = luaS_newlstr(L, "__gc", 4ui64);
  v10[1].value_.gc = v11;
  v10[1].tt_ = v11->gch.tt | 0x40;
  luaV_settable(L, v10 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  v12 = L->top;
  v12->value_.gc = v12[-1].value_.gc;
  v12->tt_ = v12[-1].tt_;
  v13 = L->top;
  L->top = v13 + 2;
  v14 = luaS_newlstr(L, "__metatable", 0xBui64);
  v13[1].value_.gc = v14;
  v13[1].tt_ = v14->gch.tt | 0x40;
  luaV_settable(L, v13 - 1, L->top - 1, L->top - 2);
  L->top -= 3;
}

void __fastcall extension::auxscript::UDHelper<extension::GFXIFontManager::LanguageConfig>::MakeMeta(
        lua_State *L,
        luaL_Reg *reg)
{
  lua_TValue *top; // rbx
  GCObject *v5; // rax
  lua_TValue *v6; // rax
  lua_TValue *v7; // rbx
  GCObject *v8; // rax
  lua_TValue *v9; // rax
  lua_TValue *v10; // rbx
  GCObject *v11; // rax
  lua_TValue *v12; // rcx
  lua_TValue *v13; // rbx
  GCObject *v14; // rax

  luaL_newmetatable(L, "GFx.FontManager.LanguageConfig");
  *L->top = L->top[-1];
  top = L->top;
  L->top = top + 2;
  v5 = luaS_newlstr(L, "__index", 7ui64);
  top[1].value_.gc = v5;
  top[1].tt_ = v5->gch.tt | 0x40;
  luaV_settable(L, top - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  v6 = L->top;
  v6->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::GFXIFontManager::LanguageConfig>::Lfn_tostring;
  v6->tt_ = 22;
  v7 = L->top;
  L->top = v7 + 2;
  v8 = luaS_newlstr(L, "__tostring", 0xAui64);
  v7[1].value_.gc = v8;
  v7[1].tt_ = v8->gch.tt | 0x40;
  luaV_settable(L, v7 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  if ( reg )
    luaL_setfuncs(L, reg, 0);
  v9 = L->top;
  v9->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::GFXIFontManager::LanguageConfig>::Lfn_gc;
  v9->tt_ = 22;
  v10 = L->top;
  L->top = v10 + 2;
  v11 = luaS_newlstr(L, "__gc", 4ui64);
  v10[1].value_.gc = v11;
  v10[1].tt_ = v11->gch.tt | 0x40;
  luaV_settable(L, v10 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  v12 = L->top;
  v12->value_.gc = v12[-1].value_.gc;
  v12->tt_ = v12[-1].tt_;
  v13 = L->top;
  L->top = v13 + 2;
  v14 = luaS_newlstr(L, "__metatable", 0xBui64);
  v13[1].value_.gc = v14;
  v13[1].tt_ = v14->gch.tt | 0x40;
  luaV_settable(L, v13 - 1, L->top - 1, L->top - 2);
  L->top -= 3;
}

const char *__fastcall extension::BasicFutureObject<extension::GFXIMovieData,void>::getErrorString(
        extension::BasicFutureObject<extension::GFXIMovieData,void> *this,
        extension::AsyncStatus::Step a2)
{
  extension::AsyncContent<extension::GFXIMovieData> *m_ptr; // rbx
  int m_errorCode; // ecx
  extension::gfxi_detail::TranslatorImpl *v4; // rax
  const char *result; // rax

  m_ptr = this->m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
  {
    m_errorCode = 0;
  }
  else
  {
    if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&m_ptr->m_status, a2);
    m_errorCode = m_ptr->m_errorCode;
  }
  v4 = (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[19][200];
  while ( v4->RefCount != m_errorCode )
  {
    v4 = (extension::gfxi_detail::TranslatorImpl *)((char *)v4 + 16);
    if ( v4 == (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[20][40] )
      return "unknown";
  }
  result = (const char *)v4->__vftable;
  if ( !result )
    return "unknown";
  return result;
}

