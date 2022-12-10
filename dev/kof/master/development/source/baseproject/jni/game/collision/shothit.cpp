#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/attackhitutil.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089B42C
void Collision::ShotEraseCheck(); // 0x1400E9A30
void Collision::ShotReflectCheck(); // 0x1400E9C00
void Collision::ShotBodyCheck(); // 0x1400E9E30
bool Collision::VsShotErase(const Collision::HitRectWork & atk, const Collision::HitRectWork & psv); // 0x1400EA080
bool Collision::VsShotReflect(const Collision::HitRectWork & atk, const Collision::HitRectWork & psv); // 0x1400EA450
bool Collision::AttackVsShotBody(const Collision::HitRectWork & atk, const Collision::HitRectWork & psv); // 0x1400EA570//decompilation failure at 14089B42C!
char __fastcall Collision::AttackVsShotBody(const Collision::HitRectWork *atk, const Collision::HitRectWork *psv)
{
  int iTargetFlag; // eax
  int iDirectionAttr; // ecx
  ActorObject *pOwner; // rdx
  float v8; // xmm1_4
  std::bitset<61>::reference *v9; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v11; // rax
  unsigned __int64 v12; // rdx
  Collision::HitRect center; // [rsp+28h] [rbp-20h] BYREF

  if ( atk->pOwner->IsAttackGroupID(atk->pOwner, atk->iGroupID) )
    return 0;
  iTargetFlag = atk->data.atk.iTargetFlag;
  if ( !iTargetFlag )
    iTargetFlag = Collision::ciDefaultAttackTargetFlag[atk->data.atk.iDataType];
  if ( (iTargetFlag & 1) == 0 )
    return 0;
  iDirectionAttr = atk->data.atk.iDirectionAttr;
  pOwner = atk->pOwner;
  if ( iDirectionAttr )
  {
    v8 = psv->pOwner->vPos.x - pOwner->vPos.x;
    if ( pOwner->iCAngle )
      LODWORD(v8) ^= _xmm;
    if ( iDirectionAttr == 1 )
    {
      if ( v8 < 0.0 )
        return 0;
    }
    else if ( iDirectionAttr != 2 || v8 >= 0.0 )
    {
      return 0;
    }
  }
  if ( !Collision::HitRectWork::IsIntersect((Collision::HitRectWork *)atk, psv, &center) )
    return 0;
  v9 = std::bitset<21>::operator[](
         (std::bitset<61> *)&psv->pOwner->bsCollisionFlag,
         (std::bitset<61>::reference *)&center,
         7ui64);
  Mypos = v9->_Mypos;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v9->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (v9->_Mypos & 0x1F);
  psv->pOwner->SetActionBranchKey(psv->pOwner, psv->data.atk.iLowerDamage);
  ActorObject::SetCollisionHitDirection(psv->pOwner, atk->pOwner);
  ((void (__fastcall *)(ActorObject *, __int64))atk->pOwner->SetHitStop)(atk->pOwner, 8i64);
  ((void (__fastcall *)(ActorObject *, __int64))psv->pOwner->SetHitStop)(psv->pOwner, 8i64);
  if ( atk->pOwner->GetActorType(atk->pOwner) == SHOT )
  {
    ((void (__fastcall *)(ActorObject *))atk->pOwner->__vftable[1]._branchIsFlag2)(atk->pOwner);
    v11 = std::bitset<21>::operator[](
            (std::bitset<61> *)&atk->pOwner->bsCollisionFlag,
            (std::bitset<61>::reference *)&center,
            7ui64);
    v12 = v11->_Mypos;
    if ( v12 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v11->_Pbitset->_Array + (v12 >> 5)) |= 1 << (v11->_Mypos & 0x1F);
  }
  if ( psv->pOwner->GetActorType(psv->pOwner) == SHOT )
    ((void (__fastcall *)(ActorObject *))psv->pOwner->__vftable[1]._branchIsFlag2)(psv->pOwner);
  atk->pOwner->SetAttackGroupID(atk->pOwner, atk->iGroupID);
  return 1;
}

void __fastcall Collision::ShotBodyCheck(Collision *this)
{
  int v1; // ecx
  __int64 v2; // rax
  __int64 v3; // r13
  Collision::HitRectCollection *v4; // rbx
  __int64 v5; // r12
  _QWORD *v6; // rax
  Collision::HitRectCollection *v7; // r15
  _QWORD *v8; // rax
  char *v9; // r14
  Collision::HitRectList *Myval2; // rdi
  const Collision::HitRectWork *Mylast; // rbp
  const Collision::HitRectWork *Myfirst; // rdi
  ActorObject *pOwner; // rbx
  __int64 v14; // rbx
  const Collision::HitRectWork *v15; // rsi
  const Collision::HitRectWork *i; // rbx
  __int64 v17; // rdi
  const Collision::HitRectWork *v18; // rbp
  const Collision::HitRectWork *v19; // rdi
  ActorObject *v20; // rbx
  Collision::HitRectList *v21; // rbx
  const Collision::HitRectWork *v22; // rsi
  const Collision::HitRectWork *j; // rbx
  int v24; // [rsp+90h] [rbp+8h]
  __int64 v25; // [rsp+98h] [rbp+10h]

  v1 = 0;
  v2 = 0i64;
  v3 = 0i64;
  v4 = Collision::HitRectCollection::instance;
  do
  {
    v24 = ++v1;
    v25 = ++v2;
    if ( v2 < 2 )
    {
      v5 = v3 * 120 + 120;
      do
      {
        if ( !v4 )
        {
          v6 = operator new[](0xF8ui64);
          if ( v6 )
          {
            *v6 = 2i64;
            v4 = (Collision::HitRectCollection *)(v6 + 1);
            `eh vector constructor iterator'(
              v6 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v4 = 0i64;
          }
          Collision::HitRectCollection::instance = v4;
        }
        v7 = &v4[v3];
        if ( !v4 )
        {
          v8 = operator new[](0xF8ui64);
          if ( v8 )
          {
            *v8 = 2i64;
            v4 = (Collision::HitRectCollection *)(v8 + 1);
            `eh vector constructor iterator'(
              v8 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v4 = 0i64;
          }
          Collision::HitRectCollection::instance = v4;
        }
        v9 = (char *)v4 + v5;
        Myval2 = v7->pRectList[9]._Mypair._Myval2;
        Mylast = Myval2->rectList._Mypair._Myval2._Mylast;
        Myfirst = Myval2->rectList._Mypair._Myval2._Myfirst;
        if ( Myfirst != Mylast )
        {
          do
          {
            pOwner = Myfirst->pOwner;
            if ( pOwner->GetActorType(pOwner) == CHARA || (pOwner->bsCollisionFlag._Array[0] & 0x28) == 0 )
            {
              v14 = *((_QWORD *)v9 + 8);
              v15 = *(const Collision::HitRectWork **)(v14 + 16);
              for ( i = *(const Collision::HitRectWork **)(v14 + 8); i != v15; ++i )
              {
                if ( !i->pOwner->IsInvalidHitCheck(i->pOwner) )
                  Collision::AttackVsShotBody(Myfirst, i);
              }
            }
            ++Myfirst;
          }
          while ( Myfirst != Mylast );
          v4 = Collision::HitRectCollection::instance;
        }
        v17 = *((_QWORD *)v9 + 9);
        v18 = *(const Collision::HitRectWork **)(v17 + 16);
        v19 = *(const Collision::HitRectWork **)(v17 + 8);
        if ( v19 != v18 )
        {
          do
          {
            v20 = v19->pOwner;
            if ( v20->GetActorType(v20) == CHARA || (v20->bsCollisionFlag._Array[0] & 0x28) == 0 )
            {
              v21 = v7->pRectList[8]._Mypair._Myval2;
              v22 = v21->rectList._Mypair._Myval2._Mylast;
              for ( j = v21->rectList._Mypair._Myval2._Myfirst; j != v22; ++j )
              {
                if ( !j->pOwner->IsInvalidHitCheck(j->pOwner) )
                  Collision::AttackVsShotBody(v19, j);
              }
            }
            ++v19;
          }
          while ( v19 != v18 );
          v4 = Collision::HitRectCollection::instance;
        }
        v5 += 120i64;
      }
      while ( v5 < 240 );
      v2 = v25;
      v1 = v24;
    }
    ++v3;
  }
  while ( v2 < 2 );
}

void __fastcall Collision::ShotEraseCheck(Collision *this)
{
  int v1; // eax
  __int64 v2; // r13
  __int64 v3; // r12
  Collision::HitRectCollection *v4; // rbx
  __int64 v5; // r15
  _QWORD *v6; // rax
  Collision::HitRectCollection *v7; // rdi
  _QWORD *v8; // rax
  char *v9; // r14
  Collision::HitRectList *Myval2; // rdi
  const Collision::HitRectWork *Mylast; // rbp
  const Collision::HitRectWork *Myfirst; // rdi
  __int64 v13; // rbx
  const Collision::HitRectWork *v14; // rsi
  const Collision::HitRectWork *i; // rbx
  int v16; // [rsp+80h] [rbp+8h]

  v1 = 0;
  v2 = 0i64;
  v3 = 0i64;
  v4 = Collision::HitRectCollection::instance;
  do
  {
    v16 = ++v1;
    if ( ++v2 < 2 )
    {
      v5 = v3 * 120 + 120;
      do
      {
        if ( !v4 )
        {
          v6 = operator new[](0xF8ui64);
          if ( v6 )
          {
            *v6 = 2i64;
            v4 = (Collision::HitRectCollection *)(v6 + 1);
            `eh vector constructor iterator'(
              v6 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v4 = 0i64;
          }
          Collision::HitRectCollection::instance = v4;
        }
        v7 = &v4[v3];
        if ( !v4 )
        {
          v8 = operator new[](0xF8ui64);
          if ( v8 )
          {
            *v8 = 2i64;
            v4 = (Collision::HitRectCollection *)(v8 + 1);
            `eh vector constructor iterator'(
              v8 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v4 = 0i64;
          }
          Collision::HitRectCollection::instance = v4;
        }
        v9 = (char *)v4 + v5;
        Myval2 = v7->pRectList[6]._Mypair._Myval2;
        Mylast = Myval2->rectList._Mypair._Myval2._Mylast;
        Myfirst = Myval2->rectList._Mypair._Myval2._Myfirst;
        if ( Myfirst != Mylast )
        {
          do
          {
            if ( !Myfirst->pOwner->IsInvalidHitCheck(Myfirst->pOwner) )
            {
              v13 = *((_QWORD *)v9 + 6);
              v14 = *(const Collision::HitRectWork **)(v13 + 16);
              for ( i = *(const Collision::HitRectWork **)(v13 + 8); i != v14; ++i )
              {
                if ( !i->pOwner->IsInvalidHitCheck(i->pOwner) )
                  Collision::VsShotErase(Myfirst, i);
              }
            }
            ++Myfirst;
          }
          while ( Myfirst != Mylast );
          v4 = Collision::HitRectCollection::instance;
        }
        v5 += 120i64;
      }
      while ( v5 < 240 );
      v1 = v16;
    }
    ++v3;
  }
  while ( v2 < 2 );
}

void __fastcall Collision::ShotReflectCheck(Collision *this)
{
  int v1; // ecx
  __int64 v2; // rax
  __int64 v3; // r13
  Collision::HitRectCollection *v4; // rbx
  __int64 v5; // r12
  _QWORD *v6; // rax
  Collision::HitRectCollection *v7; // r15
  _QWORD *v8; // rax
  char *v9; // r14
  Collision::HitRectList *Myval2; // rdi
  const Collision::HitRectWork *Mylast; // rbp
  const Collision::HitRectWork *Myfirst; // rdi
  __int64 v13; // rbx
  const Collision::HitRectWork *v14; // rsi
  const Collision::HitRectWork *i; // rbx
  __int64 v16; // rdi
  const Collision::HitRectWork *v17; // rbp
  const Collision::HitRectWork *v18; // rdi
  Collision::HitRectList *v19; // rbx
  const Collision::HitRectWork *v20; // rsi
  const Collision::HitRectWork *j; // rbx
  int v22; // [rsp+90h] [rbp+8h]
  __int64 v23; // [rsp+98h] [rbp+10h]

  v1 = 0;
  v2 = 0i64;
  v3 = 0i64;
  v4 = Collision::HitRectCollection::instance;
  do
  {
    v22 = ++v1;
    v23 = ++v2;
    if ( v2 < 2 )
    {
      v5 = v3 * 120 + 120;
      do
      {
        if ( !v4 )
        {
          v6 = operator new[](0xF8ui64);
          if ( v6 )
          {
            *v6 = 2i64;
            v4 = (Collision::HitRectCollection *)(v6 + 1);
            `eh vector constructor iterator'(
              v6 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v4 = 0i64;
          }
          Collision::HitRectCollection::instance = v4;
        }
        v7 = &v4[v3];
        if ( !v4 )
        {
          v8 = operator new[](0xF8ui64);
          if ( v8 )
          {
            *v8 = 2i64;
            v4 = (Collision::HitRectCollection *)(v8 + 1);
            `eh vector constructor iterator'(
              v8 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v4 = 0i64;
          }
          Collision::HitRectCollection::instance = v4;
        }
        v9 = (char *)v4 + v5;
        Myval2 = v7->pRectList[7]._Mypair._Myval2;
        Mylast = Myval2->rectList._Mypair._Myval2._Mylast;
        Myfirst = Myval2->rectList._Mypair._Myval2._Myfirst;
        if ( Myfirst != Mylast )
        {
          do
          {
            if ( !Myfirst->pOwner->IsInvalidHitCheck(Myfirst->pOwner) )
            {
              v13 = *((_QWORD *)v9 + 6);
              v14 = *(const Collision::HitRectWork **)(v13 + 16);
              for ( i = *(const Collision::HitRectWork **)(v13 + 8); i != v14; ++i )
              {
                if ( !i->pOwner->IsInvalidHitCheck(i->pOwner) )
                  Collision::VsShotReflect(Myfirst, i);
              }
            }
            ++Myfirst;
          }
          while ( Myfirst != Mylast );
          v4 = Collision::HitRectCollection::instance;
        }
        v16 = *((_QWORD *)v9 + 7);
        v17 = *(const Collision::HitRectWork **)(v16 + 16);
        v18 = *(const Collision::HitRectWork **)(v16 + 8);
        if ( v18 != v17 )
        {
          do
          {
            if ( !v18->pOwner->IsInvalidHitCheck(v18->pOwner) )
            {
              v19 = v7->pRectList[6]._Mypair._Myval2;
              v20 = v19->rectList._Mypair._Myval2._Mylast;
              for ( j = v19->rectList._Mypair._Myval2._Myfirst; j != v20; ++j )
              {
                if ( !j->pOwner->IsInvalidHitCheck(j->pOwner) )
                  Collision::VsShotReflect(v18, j);
              }
            }
            ++v18;
          }
          while ( v18 != v17 );
          v4 = Collision::HitRectCollection::instance;
        }
        v5 += 120i64;
      }
      while ( v5 < 240 );
      v2 = v23;
      v1 = v22;
    }
    ++v3;
  }
  while ( v2 < 2 );
}

char __fastcall Collision::VsShotErase(const Collision::HitRectWork *atk, const Collision::HitRectWork *psv)
{
  unsigned int v5; // eax
  unsigned int v6; // ecx
  bool v7; // cf
  std::bitset<61>::reference *v8; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v10; // rax
  unsigned __int64 v11; // rdx
  std::bitset<61>::reference *v12; // rax
  unsigned __int64 v13; // rdx
  std::bitset<61>::reference *v14; // rax
  unsigned __int64 v15; // rdx
  ActorObject *pOwner; // rcx
  std::bitset<61>::reference *v17; // rax
  unsigned __int64 v18; // rdx
  std::bitset<61>::reference *v19; // rax
  unsigned __int64 v20; // rdx
  ActorObject *v21; // rcx
  std::bitset<61>::reference *v22; // rax
  unsigned __int64 v23; // rdx
  std::bitset<61>::reference *v24; // rax
  unsigned __int64 v25; // rdx
  std::bitset<61>::reference *v26; // rax
  unsigned __int64 v27; // rdx
  std::bitset<61>::reference *v28; // rax
  unsigned __int64 v29; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( !Collision::HitRectWork::IsIntersect((Collision::HitRectWork *)atk, psv) )
    return 0;
  v5 = atk->data.atk.iDamage & 0xE00;
  v6 = psv->data.atk.iDamage & 0xE00;
  v7 = v5 < v6;
  if ( v5 == v6 )
  {
    if ( v5 == 3584 )
      return 0;
    v8 = std::bitset<21>::operator[]((std::bitset<61> *)&atk->pOwner->bsCollisionFlag, &result, 3ui64);
    Mypos = v8->_Mypos;
    if ( Mypos >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v8->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (Mypos & 0x1F);
    v10 = std::bitset<21>::operator[]((std::bitset<61> *)&atk->pOwner->bsCollisionFlag, &result, 4ui64);
    v11 = v10->_Mypos;
    if ( v11 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v10->_Pbitset->_Array + (v11 >> 5)) &= ~(1 << (v11 & 0x1F));
    ActorObject::SetEraseEffectInvalid(atk->pOwner, (psv->data.atk.iDamage & 0x40000) != 0);
    v12 = std::bitset<21>::operator[]((std::bitset<61> *)&psv->pOwner->bsCollisionFlag, &result, 3ui64);
    v13 = v12->_Mypos;
    if ( v13 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v12->_Pbitset->_Array + (v13 >> 5)) |= 1 << (v13 & 0x1F);
    v14 = std::bitset<21>::operator[]((std::bitset<61> *)&psv->pOwner->bsCollisionFlag, &result, 4ui64);
    v15 = v14->_Mypos;
    if ( v15 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v14->_Pbitset->_Array + (v15 >> 5)) &= ~(1 << (v15 & 0x1F));
  }
  else
  {
    pOwner = atk->pOwner;
    if ( v7 )
    {
      v17 = std::bitset<21>::operator[]((std::bitset<61> *)&pOwner->bsCollisionFlag, &result, 3ui64);
      v18 = v17->_Mypos;
      if ( v18 >= 0xF )
        std::_Xout_of_range("invalid bitset<N> position");
      *((_DWORD *)v17->_Pbitset->_Array + (v18 >> 5)) |= 1 << (v18 & 0x1F);
      v19 = std::bitset<21>::operator[]((std::bitset<61> *)&atk->pOwner->bsCollisionFlag, &result, 4ui64);
      v20 = v19->_Mypos;
      if ( v20 >= 0xF )
        std::_Xout_of_range("invalid bitset<N> position");
      *((_DWORD *)v19->_Pbitset->_Array + (v20 >> 5)) &= ~(1 << (v20 & 0x1F));
      ActorObject::SetEraseEffectInvalid(atk->pOwner, (psv->data.atk.iDamage & 0x40000) != 0);
      v21 = psv->pOwner;
      if ( (v21->bsCollisionFlag._Array[0] & 8) == 0 )
      {
        v22 = std::bitset<21>::operator[]((std::bitset<61> *)&v21->bsCollisionFlag, &result, 4ui64);
        v23 = v22->_Mypos;
        if ( v23 >= 0xF )
          std::_Xout_of_range("invalid bitset<N> position");
        *((_DWORD *)v22->_Pbitset->_Array + (v23 >> 5)) |= 1 << (v23 & 0x1F);
      }
      goto LABEL_33;
    }
    if ( (pOwner->bsCollisionFlag._Array[0] & 8) == 0 )
    {
      v24 = std::bitset<21>::operator[]((std::bitset<61> *)&pOwner->bsCollisionFlag, &result, 4ui64);
      v25 = v24->_Mypos;
      if ( v25 >= 0xF )
        std::_Xout_of_range("invalid bitset<N> position");
      *((_DWORD *)v24->_Pbitset->_Array + (v25 >> 5)) |= 1 << (v25 & 0x1F);
    }
    v26 = std::bitset<21>::operator[]((std::bitset<61> *)&psv->pOwner->bsCollisionFlag, &result, 3ui64);
    v27 = v26->_Mypos;
    if ( v27 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v26->_Pbitset->_Array + (v27 >> 5)) |= 1 << (v27 & 0x1F);
    v28 = std::bitset<21>::operator[]((std::bitset<61> *)&psv->pOwner->bsCollisionFlag, &result, 4ui64);
    v29 = v28->_Mypos;
    if ( v29 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v28->_Pbitset->_Array + (v29 >> 5)) &= ~(1 << (v29 & 0x1F));
  }
  ActorObject::SetEraseEffectInvalid(psv->pOwner, (atk->data.atk.iDamage & 0x40000) != 0);
LABEL_33:
  atk->pOwner->SetActionBranchKey(atk->pOwner, atk->data.atk.iLowerDamage);
  psv->pOwner->SetActionBranchKey(psv->pOwner, psv->data.atk.iLowerDamage);
  return 1;
}

char __fastcall Collision::VsShotReflect(const Collision::HitRectWork *atk, const Collision::HitRectWork *psv)
{
  std::bitset<61>::reference *v5; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v7; // rax
  unsigned __int64 v8; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( psv->pOwner->IsDisableReflectShot(psv->pOwner)
    || (psv->data.atk.iDamage & 0x1000) != 0
    || (atk->data.atk.iDamage & 0xE00u) < (psv->data.atk.iDamage & 0xE00u)
    || !Collision::HitRectWork::IsIntersect((Collision::HitRectWork *)atk, psv) )
  {
    return 0;
  }
  v5 = std::bitset<21>::operator[]((std::bitset<61> *)&atk->pOwner->bsCollisionFlag, &result, 6ui64);
  Mypos = v5->_Mypos;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v5->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (Mypos & 0x1F);
  v7 = std::bitset<21>::operator[]((std::bitset<61> *)&psv->pOwner->bsCollisionFlag, &result, 5ui64);
  v8 = v7->_Mypos;
  if ( v8 >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v7->_Pbitset->_Array + (v8 >> 5)) |= 1 << (v8 & 0x1F);
  atk->pOwner->SetActionBranchKey(atk->pOwner, atk->data.atk.iLowerDamage);
  ((void (__fastcall *)(ActorObject *, ActorChara *))psv->pOwner->__vftable[1]._branchIsLand)(psv->pOwner, atk->pParent);
  return 1;
}

