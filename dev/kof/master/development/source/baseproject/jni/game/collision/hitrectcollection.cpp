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
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrect.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089B37F
bool Collision::HitRectWork::IsIntersect(const Collision::HitRectWork & target); // 0x1400E8510
bool Collision::HitRectWork::IsIntersect(const Collision::HitRectWork & target, Collision::HitRect & center); // 0x1400E8590
bool Collision::HitRectWork::IsIntersect(const Collision::HitRect & target, const ActorObject * pTargetOwner, Collision::HitRect & center, const long ciBindIndex, const bool bIgnoreMotionScale); // 0x1400E86B0
Collision::HitRect Collision::HitRectWork::GetRealHitRect(); // 0x1400E8820
Collision::HitRect Collision::HitRectWork::GetRealHitRect(const ActorObject * pTarget, const Collision::HitRect & r, const long ciBindIndex, const bool bIgnoreMotionScale); // 0x1400E8940
bool Collision::HitRectList::EntryHit(const Collision::HitRect & rect, ActorChara * pParent, ActorObject * pOwner, const CharaActionData::Collision & hit, const short ciDataID); // 0x1400E8A50
bool Collision::HitRectList::EntryAttack(const Collision::HitRect & rect, ActorChara * pParent, ActorObject * pOwner, const short iGroupID, const CharaAttackData::AttackData & atk, const short ciDataID, const long ciFlag); // 0x1400E8B30
bool Collision::HitRectList::EntryCenter(ActorChara * pParent, ActorObject * pOwner); // 0x1400E8C90
void Collision::HitRectCollection::EntryPlayer(ActorChara * pActor); // 0x1400E8D50
void Collision::HitRectCollection::EntryShot(ActorShot * pActor); // 0x1400E9180
void Collision::HitRectCollection::EntryOption(ActorOption * pActor); // 0x1400E95B0//decompilation failure at 14089B37F!
char __fastcall Collision::HitRectList::EntryAttack(
        Collision::HitRectList *this,
        const Collision::HitRect *rect,
        ActorChara *pParent,
        ActorObject *pOwner,
        const __int16 iGroupID,
        const CharaAttackData::AttackData *atk,
        const __int16 ciDataID,
        const int ciFlag)
{
  std::vector<Collision::HitRectWork> *p_rectList; // rbx
  Collision::HitRect v10; // xmm0
  Collision::HitRectWork::Data *p_data; // rax
  __int64 v13; // r8
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  int iKnockBackFrame; // edx
  Collision::HitRectWork _Val; // [rsp+20h] [rbp-218h] BYREF

  p_rectList = &this->rectList;
  if ( this->rectList._Mypair._Myval2._Mylast - this->rectList._Mypair._Myval2._Myfirst >= (unsigned __int64)this->iWorkSize )
    return 0;
  v10 = *rect;
  _Val.iGroupID = iGroupID;
  _Val.iDataID = ciDataID;
  _Val.pParent = pParent;
  _Val.iFlag = ciFlag;
  _Val.type = COUNTER_HIT;
  _Val.rect = v10;
  _Val.pOwner = pOwner;
  memset(&_Val.data, 0, sizeof(_Val.data));
  p_data = &_Val.data;
  v13 = 3i64;
  do
  {
    v14 = *(_OWORD *)&atk->iDataType;
    v15 = *(_OWORD *)&atk->iCheapDamage;
    atk = (const CharaAttackData::AttackData *)((char *)atk + 128);
    *(_OWORD *)&p_data->atk.iDataType = v14;
    v16 = *(_OWORD *)&atk[-1].guardSound.iCommonID;
    *(_OWORD *)&p_data->hit.iBindIndex = v15;
    v17 = *(_OWORD *)&atk[-1].guardSound.iReserve2;
    *((_OWORD *)&p_data->hit + 2) = v16;
    v18 = *(_OWORD *)&atk[-1].hitEffect1.fAngleY;
    *((_OWORD *)&p_data->hit + 3) = v17;
    v19 = *(_OWORD *)&atk[-1].hitEffect2.fAngleY;
    *((_OWORD *)&p_data->hit + 4) = v18;
    v20 = *(_OWORD *)&atk[-1].guardEffect.fAngleY;
    *((_OWORD *)&p_data->hit + 5) = v19;
    v21 = *(_OWORD *)&atk[-1].iReserveData[2];
    *((_OWORD *)&p_data->hit + 6) = v20;
    p_data = (Collision::HitRectWork::Data *)((char *)p_data + 128);
    *(_OWORD *)((char *)&p_data[-1].hit + 436) = v21;
    --v13;
  }
  while ( v13 );
  v22 = *(_OWORD *)&atk->iCheapDamage;
  *(_OWORD *)&p_data->atk.iDataType = *(_OWORD *)&atk->iDataType;
  v23 = *(_OWORD *)&atk->hitData.iGaugeAddMine;
  *(_OWORD *)&p_data->hit.iBindIndex = v22;
  v24 = *(_OWORD *)&atk->hitData.iHitStopFrameMine;
  iKnockBackFrame = atk->guardData.iKnockBackFrame;
  *((_OWORD *)&p_data->hit + 2) = v23;
  *((_OWORD *)&p_data->hit + 3) = v24;
  p_data->atk.guardData.iKnockBackFrame = iKnockBackFrame;
  std::vector<Collision::HitRectWork>::push_back(p_rectList, &_Val);
  return 1;
}

char __fastcall Collision::HitRectList::EntryCenter(
        Collision::HitRectList *this,
        ActorChara *pParent,
        ActorObject *pOwner)
{
  Collision::HitRectWork _Val; // [rsp+20h] [rbp-218h] BYREF

  if ( this->rectList._Mypair._Myval2._Mylast - this->rectList._Mypair._Myval2._Myfirst >= (unsigned __int64)this->iWorkSize )
    return 0;
  _Val.pOwner = pOwner;
  *(_QWORD *)&_Val.rect.x = 0i64;
  memset(&_Val.iGroupID, 0, 460);
  _Val.type = REVERSAL;
  _Val.pParent = pParent;
  _Val.rect.w = 1.0;
  _Val.rect.h = 1.0;
  std::vector<Collision::HitRectWork>::push_back(&this->rectList, &_Val);
  return 1;
}

char __fastcall Collision::HitRectList::EntryHit(
        Collision::HitRectList *this,
        const Collision::HitRect *rect,
        ActorChara *pParent,
        ActorObject *pOwner,
        const CharaActionData::Collision *hit,
        const __int16 ciDataID)
{
  std::vector<Collision::HitRectWork> *p_rectList; // rbx
  Collision::HitRect v8; // xmm0
  __int64 v9; // xmm1_8
  Collision::HitRectWork _Val; // [rsp+20h] [rbp-218h] BYREF

  p_rectList = &this->rectList;
  if ( this->rectList._Mypair._Myval2._Mylast - this->rectList._Mypair._Myval2._Myfirst >= (unsigned __int64)this->iWorkSize )
    return 0;
  v8 = *rect;
  _Val.pParent = pParent;
  _Val.iGroupID = 0;
  _Val.iDataID = ciDataID;
  _Val.type = GUARD_CRASH;
  _Val.rect = v8;
  _Val.pOwner = pOwner;
  memset(&_Val.iFlag, 0, 0x1C8ui64);
  v9 = *(_QWORD *)&hit->iBindIndex;
  *(_OWORD *)&_Val.data.atk.iDataType = *(_OWORD *)&hit->iRectID;
  *(_QWORD *)&_Val.data.hit.iBindIndex = v9;
  std::vector<Collision::HitRectWork>::push_back(p_rectList, &_Val);
  return 1;
}

void __fastcall Collision::HitRectCollection::EntryOption(Collision::HitRectCollection *this, ActorOption *pActor)
{
  CharaActionData::Collision *hit; // rdi
  const Collision::HitRect *v5; // rax
  int v6; // er12
  unsigned int v7; // ebp
  const CharaActionData::ActionLineFrame *v8; // rax
  const CharaActionData::ActionLineFrame *v9; // rsi
  const CharaActionData::Collision *v10; // rdi
  const Collision::HitRect *v11; // r10
  int v12; // edx
  int v13; // edx
  Collision::HitRectList *Myval2; // rcx
  const CharaActionData::ActionLineFrame *v15; // rax
  const CharaActionData::ActionLineFrame *v16; // rdi
  const CharaAttackData::AttackData *v17; // r14
  int v18; // esi
  int iDataType; // eax
  Collision::HitRectList *v20; // rcx

  hit = &pActor->bodyPush;
  v5 = pActor->GetHitRect(pActor, (unsigned int)pActor->bodyPush.iRectID);
  if ( v5 && hit->iRectID > 0 )
    Collision::HitRectList::EntryHit(this->pRectList[0]._Mypair._Myval2, v5, pActor->pOwner, pActor, hit, hit->iRectID);
  v6 = 0;
  v7 = 0;
  if ( pActor->iHitDataCount > 0 )
  {
    while ( 1 )
    {
      v8 = pActor->GetKeyFrame(pActor, 4i64, v7);
      v9 = v8;
      if ( !v8 )
        goto LABEL_17;
      v10 = (const CharaActionData::Collision *)&v8->4;
      if ( v8->iBase[0] < 1 )
        goto LABEL_17;
      v11 = (const Collision::HitRect *)((__int64 (__fastcall *)(ActorOption *))pActor->GetHitRect)(pActor);
      if ( !v11 )
        goto LABEL_17;
      v12 = v9->iBase[1];
      if ( !v12 )
        break;
      v13 = v12 - 5;
      if ( v13 )
      {
        if ( v13 != 1 || pActor->bShotErased )
          goto LABEL_17;
        Myval2 = this->pRectList[7]._Mypair._Myval2;
        goto LABEL_16;
      }
      if ( !pActor->bShotErased )
      {
        Myval2 = this->pRectList[6]._Mypair._Myval2;
LABEL_16:
        Collision::HitRectList::EntryHit(Myval2, v11, pActor->pOwner, pActor, v10, v10->iRectID);
      }
LABEL_17:
      if ( (signed int)++v7 >= pActor->iHitDataCount )
        goto LABEL_18;
    }
    Myval2 = this->pRectList[0]._Mypair._Myval2;
    goto LABEL_16;
  }
LABEL_18:
  if ( !pActor->bActionFreeze && pActor->iAtkDataCount > 0 )
  {
    do
    {
      v15 = pActor->GetKeyFrame(pActor, 5i64, (unsigned int)v6);
      v16 = v15;
      if ( !v15 )
        goto LABEL_53;
      if ( v15->iBase[0] < 1 )
        goto LABEL_53;
      v17 = (const CharaAttackData::AttackData *)((__int64 (__fastcall *)(ActorOption *))pActor->GetAttackData)(pActor);
      if ( !v17 )
        goto LABEL_53;
      v18 = v16->iBase[6];
      if ( v18 )
      {
        if ( (v18 & 1) != 0 && (pActor->bsAttackFlag._Array[0] & 6) == 0
          || (v18 & 2) != 0 && (pActor->bsAttackFlag._Array[0] & 4) == 0
          || (v18 & 4) != 0 && (pActor->bsAttackFlag._Array[0] & 2) == 0
          || (v18 & 8) != 0 && !ActorObject::IsAttackSwing(pActor)
          || (v18 & 0x10) != 0 && !pActor->IsActionBranchKey(pActor, 1)
          || (*(_BYTE *)(&v16->effectAngle + 2) & 0x20) != 0 && !pActor->IsActionBranchKey(pActor, 2)
          || (*(_BYTE *)(&v16->effectAngle + 2) & 0x40) != 0 && !pActor->IsActionBranchKey(pActor, 3)
          || *((char *)&v16->effectAngle + 24) < 0 && !pActor->IsActionBranchKey(pActor, 4) )
        {
          goto LABEL_53;
        }
      }
      iDataType = v17->iDataType;
      if ( v17->iDataType < 0 )
        goto LABEL_53;
      if ( iDataType <= 1 )
      {
        if ( !pActor->bShotErased )
        {
          v20 = this->pRectList[9]._Mypair._Myval2;
          goto LABEL_52;
        }
      }
      else
      {
        switch ( iDataType )
        {
          case 3:
            if ( !pActor->bShotErased )
            {
              v20 = this->pRectList[12]._Mypair._Myval2;
              goto LABEL_52;
            }
            break;
          case 5:
            if ( !pActor->bShotErased )
            {
              v20 = this->pRectList[13]._Mypair._Myval2;
              goto LABEL_52;
            }
            break;
          case 6:
            v20 = this->pRectList[14]._Mypair._Myval2;
LABEL_52:
            Collision::HitRectList::EntryAttack(
              v20,
              &v16->atk.rect,
              pActor->pOwner,
              pActor,
              v16->exclusive.type.nakoruru.iMamahahaOption,
              v17,
              v16->cam.iOffsetBase,
              v16->iBase[6]);
            break;
        }
      }
LABEL_53:
      ++v6;
    }
    while ( v6 < pActor->iAtkDataCount );
  }
}

void __fastcall Collision::HitRectCollection::EntryPlayer(Collision::HitRectCollection *this, ActorChara *pActor)
{
  CharaActionData::Collision *p_bodyPush; // rdi
  const Collision::HitRect *v5; // rax
  int v6; // er15
  int i; // esi
  const CharaActionData::ActionLineFrame *v8; // rax
  const CharaActionData::ActionLineFrame *v9; // rbp
  $FDE819AA8FD4FE0CD927010514BE7533 *v10; // rdi
  const Collision::HitRect *v11; // r14
  Collision::HitRectList *Myval2; // rcx
  __int64 v13; // xmm1_8
  const CharaActionData::ActionLineFrame *v14; // rax
  const CharaActionData::ActionLineFrame *v15; // rdi
  const CharaAttackData::AttackData *v16; // r14
  int v17; // esi
  Collision::HitRectList *v18; // rcx
  const CharaActionData::Collision *hit; // [rsp+20h] [rbp-68h]
  __int16 ciDataID; // [rsp+28h] [rbp-60h]
  CharaActionData::Collision v21; // [rsp+40h] [rbp-48h] BYREF

  Collision::HitRectList::EntryCenter(this->pRectList[2]._Mypair._Myval2, pActor, pActor);
  Collision::HitRectList::EntryCenter(this->pRectList[1]._Mypair._Myval2, pActor, pActor);
  p_bodyPush = &pActor->bodyPush;
  v5 = pActor->GetHitRect(pActor, (unsigned int)pActor->bodyPush.iRectID);
  if ( v5 && p_bodyPush->iRectID > 0 )
    Collision::HitRectList::EntryHit(
      this->pRectList[0]._Mypair._Myval2,
      v5,
      pActor,
      pActor,
      &pActor->bodyPush,
      p_bodyPush->iRectID);
  v6 = 0;
  for ( i = 0; i < pActor->iHitDataCount; ++i )
  {
    v8 = pActor->GetKeyFrame(pActor, 4i64, (unsigned int)i);
    v9 = v8;
    if ( v8 )
    {
      v10 = &v8->4;
      if ( v8->iBase[0] >= 1 )
      {
        v11 = (const Collision::HitRect *)((__int64 (__fastcall *)(ActorChara *))pActor->GetHitRect)(pActor);
        if ( v11 )
        {
          switch ( v9->iBase[1] )
          {
            case 0:
              Myval2 = this->pRectList[0]._Mypair._Myval2;
              goto LABEL_23;
            case 1:
              if ( (!pActor->IsGuardInputOK(pActor) || !pActor->IsInputGuard(pActor)) && !pActor->IsAutoGuardOK(pActor) )
                goto LABEL_15;
              v13 = *(_QWORD *)&v10->pos.iSettingZ;
              *(_OWORD *)&v21.iRectID = *(_OWORD *)v10->iBase;
              ciDataID = v21.iRectID;
              hit = &v21;
              *(_QWORD *)&v21.iBindIndex = v13;
              v21.iRectAttr = 3;
LABEL_14:
              Collision::HitRectList::EntryHit(this->pRectList[3]._Mypair._Myval2, v11, pActor, pActor, hit, ciDataID);
LABEL_15:
              Myval2 = this->pRectList[1]._Mypair._Myval2;
LABEL_23:
              Collision::HitRectList::EntryHit(
                Myval2,
                v11,
                pActor,
                pActor,
                (const CharaActionData::Collision *)v10,
                v10->cam.iOffsetBase);
              break;
            case 2:
              Myval2 = this->pRectList[2]._Mypair._Myval2;
              goto LABEL_23;
            case 3:
              ciDataID = v10->cam.iOffsetBase;
              hit = (const CharaActionData::Collision *)v10;
              goto LABEL_14;
            case 4:
              Collision::HitRectList::EntryHit(
                this->pRectList[2]._Mypair._Myval2,
                v11,
                pActor,
                pActor,
                (const CharaActionData::Collision *)v10,
                v10->cam.iOffsetBase);
              goto LABEL_15;
            case 5:
              Myval2 = this->pRectList[6]._Mypair._Myval2;
              goto LABEL_23;
            case 6:
              Myval2 = this->pRectList[7]._Mypair._Myval2;
              goto LABEL_23;
            case 7:
              Myval2 = this->pRectList[4]._Mypair._Myval2;
              goto LABEL_23;
            case 8:
              Myval2 = this->pRectList[5]._Mypair._Myval2;
              goto LABEL_23;
            default:
              continue;
          }
        }
      }
    }
  }
  if ( !pActor->bActionFreeze && pActor->iAtkDataCount > 0 )
  {
    do
    {
      v14 = pActor->GetKeyFrame(pActor, 5i64, (unsigned int)v6);
      v15 = v14;
      if ( v14 )
      {
        if ( v14->iBase[0] >= 1 )
        {
          v16 = (const CharaAttackData::AttackData *)((__int64 (__fastcall *)(ActorChara *))pActor->GetAttackData)(pActor);
          if ( v16 )
          {
            v17 = v15->iBase[6];
            if ( !v17
              || ((v17 & 1) == 0 || (pActor->bsAttackFlag._Array[0] & 6) != 0)
              && ((v17 & 2) == 0 || (pActor->bsAttackFlag._Array[0] & 4) != 0)
              && ((v17 & 4) == 0 || (pActor->bsAttackFlag._Array[0] & 2) != 0)
              && ((v17 & 8) == 0 || ActorObject::IsAttackSwing(pActor))
              && ((v17 & 0x10) == 0 || pActor->IsActionBranchKey(pActor, 1))
              && ((*(_BYTE *)(&v15->effectAngle + 2) & 0x20) == 0 || pActor->IsActionBranchKey(pActor, 2))
              && ((*(_BYTE *)(&v15->effectAngle + 2) & 0x40) == 0 || pActor->IsActionBranchKey(pActor, 3))
              && (*((char *)&v15->effectAngle + 24) >= 0 || pActor->IsActionBranchKey(pActor, 4))
              && ((v15->iBase[6] & 0x100) == 0 || pActor->IsNormalThrowInputAction(pActor)) )
            {
              switch ( v16->iDataType )
              {
                case 0:
                case 1:
                  v18 = this->pRectList[9]._Mypair._Myval2;
                  goto LABEL_55;
                case 2:
                  v18 = this->pRectList[11]._Mypair._Myval2;
                  goto LABEL_55;
                case 3:
                  v18 = this->pRectList[12]._Mypair._Myval2;
                  goto LABEL_55;
                case 5:
                  v18 = this->pRectList[13]._Mypair._Myval2;
                  goto LABEL_55;
                case 6:
                  v18 = this->pRectList[14]._Mypair._Myval2;
LABEL_55:
                  Collision::HitRectList::EntryAttack(
                    v18,
                    &v15->atk.rect,
                    pActor,
                    pActor,
                    v15->exclusive.type.nakoruru.iMamahahaOption,
                    v16,
                    v15->cam.iOffsetBase,
                    v15->iBase[6]);
                  break;
                default:
                  break;
              }
            }
          }
        }
      }
      ++v6;
    }
    while ( v6 < pActor->iAtkDataCount );
  }
}

void __fastcall Collision::HitRectCollection::EntryShot(Collision::HitRectCollection *this, ActorShot *pActor)
{
  CharaActionData::Collision *hit; // rdi
  const Collision::HitRect *v5; // rax
  int v6; // er15
  int i; // esi
  const CharaActionData::ActionLineFrame *v8; // rax
  const CharaActionData::ActionLineFrame *v9; // rbp
  const CharaActionData::Collision *v10; // rdi
  const Collision::HitRect *v11; // r14
  Collision::HitRectList *Myval2; // rcx
  const CharaActionData::ActionLineFrame *v13; // rax
  const CharaActionData::ActionLineFrame *v14; // rsi
  const CharaAttackData::AttackData *v15; // r14
  int v16; // edi
  Collision::HitRectList *v17; // rdi
  __int16 v18; // ax

  hit = &pActor->bodyPush;
  v5 = pActor->GetHitRect(pActor, (unsigned int)pActor->bodyPush.iRectID);
  if ( v5 && hit->iRectID > 0 )
    Collision::HitRectList::EntryHit(this->pRectList[0]._Mypair._Myval2, v5, pActor->pOwner, pActor, hit, hit->iRectID);
  v6 = 0;
  for ( i = 0; i < pActor->iHitDataCount; ++i )
  {
    v8 = pActor->GetKeyFrame(pActor, 4i64, (unsigned int)i);
    v9 = v8;
    if ( v8 )
    {
      v10 = (const CharaActionData::Collision *)&v8->4;
      if ( v8->iBase[0] >= 1 )
      {
        v11 = (const Collision::HitRect *)((__int64 (__fastcall *)(ActorShot *))pActor->GetHitRect)(pActor);
        if ( v11 )
        {
          switch ( v9->iBase[1] )
          {
            case 0:
              Myval2 = this->pRectList[0]._Mypair._Myval2;
              goto LABEL_24;
            case 1:
              if ( pActor->GetShotType(pActor) == STAND_GUARD )
              {
                Myval2 = this->pRectList[1]._Mypair._Myval2;
              }
              else
              {
                if ( pActor->iShotVital <= 0 )
                  continue;
                Myval2 = this->pRectList[8]._Mypair._Myval2;
              }
LABEL_24:
              Collision::HitRectList::EntryHit(Myval2, v11, pActor->pOwner, pActor, v10, v10->iRectID);
              break;
            case 2:
              if ( pActor->GetShotType(pActor) != STAND_GUARD )
                continue;
              Myval2 = this->pRectList[2]._Mypair._Myval2;
              goto LABEL_24;
            case 4:
              if ( pActor->GetShotType(pActor) != STAND_GUARD )
                continue;
              Collision::HitRectList::EntryHit(
                this->pRectList[2]._Mypair._Myval2,
                v11,
                pActor->pOwner,
                pActor,
                v10,
                v10->iRectID);
              Myval2 = this->pRectList[1]._Mypair._Myval2;
              goto LABEL_24;
            case 5:
              Myval2 = this->pRectList[6]._Mypair._Myval2;
              goto LABEL_24;
            case 6:
              Myval2 = this->pRectList[7]._Mypair._Myval2;
              goto LABEL_24;
            case 7:
              if ( pActor->GetShotType(pActor) != STAND_GUARD )
                continue;
              Myval2 = this->pRectList[4]._Mypair._Myval2;
              goto LABEL_24;
            case 8:
              if ( pActor->GetShotType(pActor) != STAND_GUARD )
                continue;
              Myval2 = this->pRectList[5]._Mypair._Myval2;
              goto LABEL_24;
            default:
              continue;
          }
        }
      }
    }
  }
  if ( !pActor->bActionFreeze && pActor->iShotVital > 0 && pActor->iAtkDataCount > 0 )
  {
    do
    {
      v13 = pActor->GetKeyFrame(pActor, 5i64, (unsigned int)v6);
      v14 = v13;
      if ( v13 )
      {
        if ( v13->iBase[0] >= 1 )
        {
          v15 = (const CharaAttackData::AttackData *)((__int64 (__fastcall *)(ActorShot *))pActor->GetAttackData)(pActor);
          if ( v15 )
          {
            v16 = v14->iBase[6];
            if ( !v16
              || ((v16 & 1) == 0 || (pActor->bsAttackFlag._Array[0] & 6) != 0)
              && ((v16 & 2) == 0 || (pActor->bsAttackFlag._Array[0] & 4) != 0)
              && ((v16 & 4) == 0 || (pActor->bsAttackFlag._Array[0] & 2) != 0)
              && ((v16 & 8) == 0 || ActorObject::IsAttackSwing(pActor))
              && ((v16 & 0x10) == 0 || pActor->IsActionBranchKey(pActor, 1))
              && ((*(_BYTE *)(&v14->effectAngle + 2) & 0x20) == 0 || pActor->IsActionBranchKey(pActor, 2))
              && ((*(_BYTE *)(&v14->effectAngle + 2) & 0x40) == 0 || pActor->IsActionBranchKey(pActor, 3))
              && (*((char *)&v14->effectAngle + 24) >= 0 || pActor->IsActionBranchKey(pActor, 4)) )
            {
              switch ( v15->iDataType )
              {
                case 0:
                case 1:
                  v17 = this->pRectList[9]._Mypair._Myval2;
                  goto LABEL_56;
                case 2:
                  if ( pActor->IsReflectShot(pActor) )
                    break;
                  v17 = this->pRectList[11]._Mypair._Myval2;
LABEL_56:
                  v18 = pActor->GetShotVital(pActor);
                  Collision::HitRectList::EntryAttack(
                    v17,
                    &v14->atk.rect,
                    pActor->pOwner,
                    pActor,
                    v18,
                    v15,
                    v14->cam.iOffsetBase,
                    v14->iBase[6]);
                  break;
                case 3:
                  v17 = this->pRectList[12]._Mypair._Myval2;
                  goto LABEL_56;
                case 5:
                  v17 = this->pRectList[13]._Mypair._Myval2;
                  goto LABEL_56;
                case 6:
                  v17 = this->pRectList[14]._Mypair._Myval2;
                  goto LABEL_56;
                default:
                  break;
              }
            }
          }
        }
      }
      ++v6;
    }
    while ( v6 < pActor->iAtkDataCount );
  }
}

Collision::HitRect *__fastcall Collision::HitRectWork::GetRealHitRect(
        Collision::HitRectWork *this,
        Collision::HitRect *result)
{
  Collision::HitRect rect; // xmm0
  ActorObject *pOwner; // rcx
  ActorObject *v6; // rcx
  __int64 v7; // r8
  ActorObject_vtbl *v8; // r9
  __int64 *v9; // rax
  __int64 v10; // xmm0_8
  ActorObject *v11; // rax
  float v12; // xmm1_4
  float v13; // xmm0_4
  ActorObject *v14; // rax
  Collision::HitRect *v15; // rax
  char v16[24]; // [rsp+30h] [rbp-18h] BYREF

  rect = this->rect;
  pOwner = this->pOwner;
  *result = rect;
  if ( pOwner->iCAngle )
    result->x = COERCE_FLOAT(LODWORD(result->x) ^ _xmm) - result->w;
  if ( this->type == GUARD_CRASH
    && this->data.atk.iCheapDamage > 0
    && (pOwner->GetActorType(pOwner) == CHARA || this->pOwner->GetActorType(this->pOwner) == OPTION) )
  {
    v6 = this->pOwner;
    v7 = (unsigned int)Collision::BindBoneNameIndexList[this->data.atk.iCheapDamage];
    v8 = v6->__vftable;
    if ( (this->data.atk.iDamage & 0x10000) != 0 )
      v9 = (__int64 *)((__int64 (__fastcall *)(ActorObject *, char *, __int64))v8[1]._branchIsCommandCountOver)(
                        v6,
                        v16,
                        v7);
    else
      v9 = (__int64 *)((__int64 (__fastcall *)(ActorObject *, char *, __int64))v8[1]._branchIsParentFlag3)(v6, v16, v7);
    v10 = *v9;
    v11 = this->pOwner;
    v12 = (float)(*(float *)&v10 + result->x) - v11->vBaseOff.x;
    v13 = (float)(*((float *)&v10 + 1) + result->y) - v11->vBaseOff.y;
  }
  else
  {
    v14 = this->pOwner;
    v13 = (float)(v14->vPos.y + result->y) + v14->vColOff.y;
    v12 = (float)(result->x + v14->vPos.x) + v14->vColOff.x;
  }
  result->y = v13;
  v15 = result;
  result->x = v12;
  return v15;
}

Collision::HitRect *__fastcall Collision::HitRectWork::GetRealHitRect(
        Collision::HitRect *result,
        const ActorObject *pTarget,
        const Collision::HitRect *r,
        const int ciBindIndex,
        const bool bIgnoreMotionScale)
{
  bool v5; // zf
  __int64 v7; // rsi
  __int64 v9; // r8
  ActorObject_vtbl *v10; // r9
  _QWORD *v11; // rax
  float v12; // xmm0_4
  float v13; // xmm1_4
  Collision::HitRect *v14; // rax
  char v15[24]; // [rsp+30h] [rbp-18h] BYREF

  v5 = pTarget->iCAngle == 0;
  v7 = ciBindIndex;
  *result = *r;
  if ( !v5 )
    result->x = COERCE_FLOAT(LODWORD(result->x) ^ _xmm) - result->w;
  if ( ciBindIndex <= 0 || pTarget->GetActorType((Actor *)pTarget) && pTarget->GetActorType((Actor *)pTarget) != OPTION )
  {
    v12 = (float)(result->x + pTarget->vPos.x) + pTarget->vColOff.x;
    v13 = (float)(pTarget->vPos.y + result->y) + pTarget->vColOff.y;
  }
  else
  {
    v9 = (unsigned int)Collision::BindBoneNameIndexList[v7];
    v10 = pTarget->__vftable;
    if ( bIgnoreMotionScale )
      v11 = (_QWORD *)((__int64 (__fastcall *)(const ActorObject *, char *, __int64))v10[1]._branchIsCommandCountOver)(
                        pTarget,
                        v15,
                        v9);
    else
      v11 = (_QWORD *)((__int64 (__fastcall *)(const ActorObject *, char *, __int64))v10[1]._branchIsParentFlag3)(
                        pTarget,
                        v15,
                        v9);
    v12 = (float)(COERCE_FLOAT(*v11) + result->x) - pTarget->vBaseOff.x;
    v13 = (float)(COERCE_FLOAT(HIDWORD(*v11)) + result->y) - pTarget->vBaseOff.y;
  }
  v14 = result;
  result->y = v13;
  result->x = v12;
  return v14;
}

bool __fastcall Collision::HitRectWork::IsIntersect(
        Collision::HitRectWork *this,
        const Collision::HitRect *target,
        const ActorObject *pTargetOwner,
        Collision::HitRect *center,
        const int ciBindIndex,
        const bool bIgnoreMotionScale)
{
  __m128 v9; // xmm0
  unsigned int v10; // xmm6_4
  unsigned int v11; // xmm8_4
  Collision::HitRect *p_result; // rax
  float v13; // xmm5_4
  float v14; // xmm2_4
  float x; // xmm0_4
  float *p_y; // rax
  float v17; // xmm5_4
  float v18; // xmm1_4
  bool v19; // al
  Collision::HitRect v20; // [rsp+30h] [rbp-78h] BYREF
  Collision::HitRect result; // [rsp+40h] [rbp-68h] BYREF
  int v22; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+54h] [rbp-54h] BYREF
  float v24; // [rsp+58h] [rbp-50h]
  unsigned int v25; // [rsp+5Ch] [rbp-4Ch]

  Collision::HitRectWork::GetRealHitRect(this, &result);
  v9 = *(__m128 *)Collision::HitRectWork::GetRealHitRect(&v20, pTargetOwner, target, ciBindIndex, bIgnoreMotionScale);
  v22 = v9.m128_i32[0];
  v24 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
  v10 = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
  v11 = _mm_shuffle_ps(v9, v9, 255).m128_u32[0];
  v23 = v10;
  v25 = v11;
  if ( (float)(v24 + v9.m128_f32[0]) <= result.x
    || (float)(result.w + result.x) <= v9.m128_f32[0]
    || *(float *)&v10 <= (float)(result.y - result.h)
    || result.y <= (float)(*(float *)&v10 - *(float *)&v11) )
  {
    return 0;
  }
  p_result = (Collision::HitRect *)&v22;
  v13 = fminf(v24 + v9.m128_f32[0], result.w + result.x);
  v14 = fmaxf(*(float *)&v10 - *(float *)&v11, result.y - result.h);
  if ( v9.m128_f32[0] <= result.x )
    p_result = &result;
  x = p_result->x;
  p_y = (float *)&v23;
  v17 = v13 - x;
  v20.x = x;
  if ( result.y <= *(float *)&v10 )
    p_y = &result.y;
  v18 = *p_y;
  v19 = 1;
  v20.y = v18;
  v20.w = v17;
  v20.h = v18 - v14;
  *center = v20;
  return v19;
}

bool __fastcall Collision::HitRectWork::IsIntersect(Collision::HitRectWork *this, const Collision::HitRectWork *target)
{
  Collision::HitRect result; // [rsp+20h] [rbp-28h] BYREF
  Collision::HitRect v5; // [rsp+30h] [rbp-18h] BYREF

  Collision::HitRectWork::GetRealHitRect(this, &result);
  Collision::HitRectWork::GetRealHitRect((Collision::HitRectWork *)target, &v5);
  return (float)(v5.w + v5.x) > result.x
      && (float)(result.w + result.x) > v5.x
      && v5.y > (float)(result.y - result.h)
      && result.y > (float)(v5.y - v5.h);
}

bool __fastcall Collision::HitRectWork::IsIntersect(
        Collision::HitRectWork *this,
        const Collision::HitRectWork *target,
        Collision::HitRect *center)
{
  Collision::HitRect *p_result; // rax
  float v6; // xmm5_4
  float v7; // xmm3_4
  float x; // xmm0_4
  float *p_y; // rax
  float v10; // xmm5_4
  float v11; // xmm1_4
  bool v12; // al
  Collision::HitRect v13; // [rsp+20h] [rbp-58h]
  Collision::HitRect result; // [rsp+30h] [rbp-48h] BYREF
  Collision::HitRect v15; // [rsp+40h] [rbp-38h] BYREF

  Collision::HitRectWork::GetRealHitRect(this, &result);
  Collision::HitRectWork::GetRealHitRect((Collision::HitRectWork *)target, &v15);
  if ( (float)(v15.w + v15.x) <= result.x
    || (float)(result.w + result.x) <= v15.x
    || v15.y <= (float)(result.y - result.h)
    || result.y <= (float)(v15.y - v15.h) )
  {
    return 0;
  }
  p_result = &v15;
  v6 = fminf(v15.w + v15.x, result.w + result.x);
  v7 = fmaxf(v15.y - v15.h, result.y - result.h);
  if ( v15.x <= result.x )
    p_result = &result;
  x = p_result->x;
  p_y = &v15.y;
  v10 = v6 - x;
  v13.x = x;
  if ( result.y <= v15.y )
    p_y = &result.y;
  v11 = *p_y;
  v12 = 1;
  *(_QWORD *)&v13.y = __PAIR64__(LODWORD(v10), LODWORD(v11));
  v13.h = v11 - v7;
  *center = v13;
  return v12;
}

void __fastcall std::vector<Collision::HitRectWork>::_Reserve(
        std::vector<Collision::HitRectWork> *this,
        unsigned __int64 _Count)
{
  Collision::HitRectWork *Myend; // rcx
  Collision::HitRectWork *Mylast; // r9
  signed __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  std::_Wrap_alloc<std::allocator<Collision::HitRectWork> > *v10; // r9

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( !(Myend - Mylast) )
  {
    v5 = Mylast - this->_Mypair._Myval2._Myfirst;
    if ( v5 == 0x82082082082082i64 )
      std::_Xlength_error("vector<T> too long");
    v6 = v5 + 1;
    v7 = (char *)Myend
       - (char *)this->_Mypair._Myval2._Myfirst
       + ((unsigned __int128)(((char *)Myend - (char *)this->_Mypair._Myval2._Myfirst)
                            * (__int128)(__int64)0x8208208208208209ui64) >> 64);
    v8 = 0i64;
    v9 = ((unsigned __int64)v7 >> 63) + (v7 >> 8);
    v10 = (std::_Wrap_alloc<std::allocator<Collision::HitRectWork> > *)(0x82082082082082i64 - (v9 >> 1));
    if ( (unsigned __int64)v10 >= v9 )
      v8 = v9 + (v9 >> 1);
    if ( v8 >= v6 )
      v6 = v8;
    std::vector<Collision::HitRectWork>::_Reallocate(this, v6, v6, v10);
  }
}

void __fastcall std::vector<Collision::HitRectWork>::push_back(
        std::vector<Collision::HitRectWork> *this,
        Collision::HitRectWork *_Val)
{
  Collision::HitRectWork *Mylast; // rcx
  Collision::HitRectWork *Myfirst; // rax
  signed __int64 v6; // rdi
  unsigned __int64 v7; // rdx

  Mylast = this->_Mypair._Myval2._Mylast;
  if ( _Val >= Mylast || (Myfirst = this->_Mypair._Myval2._Myfirst, this->_Mypair._Myval2._Myfirst > _Val) )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<Collision::HitRectWork>::_Reserve(this, (unsigned __int64)_Val);
    std::_Wrap_alloc<std::allocator<Collision::HitRectWork>>::construct<Collision::HitRectWork,Collision::HitRectWork>(
      (std::_Wrap_alloc<std::allocator<Collision::HitRectWork> > *)Mylast,
      this->_Mypair._Myval2._Mylast,
      _Val);
    ++this->_Mypair._Myval2._Mylast;
  }
  else
  {
    v6 = (char *)_Val - (char *)Myfirst;
    v7 = (unsigned __int128)(((char *)_Val - (char *)Myfirst) * (__int128)(__int64)0x8208208208208209ui64) >> 64;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<Collision::HitRectWork>::_Reserve(this, v7);
    std::_Wrap_alloc<std::allocator<Collision::HitRectWork>>::construct<Collision::HitRectWork,Collision::HitRectWork>(
      (std::_Wrap_alloc<std::allocator<Collision::HitRectWork> > *)Mylast,
      this->_Mypair._Myval2._Mylast,
      &this->_Mypair._Myval2._Myfirst[v6 / 504]);
    ++this->_Mypair._Myval2._Mylast;
  }
}

