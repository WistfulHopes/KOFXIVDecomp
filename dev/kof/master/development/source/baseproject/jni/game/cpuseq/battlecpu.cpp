#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlestateanalyze.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"

const CommandData::Setting * BattleSystem::CmdReady(BattleSystem::CpuSequence & cpuSeq, long opt); // 0x1400EA800
const CommandData::Setting * BattleSystem::CmdCrouch(BattleSystem::CpuSequence & cpuSeq, long opt); // 0x1400EA8F0
const CommandData::Setting * BattleSystem::CmdFront(BattleSystem::CpuSequence & cpuSeq, long opt); // 0x1400EA990
const CommandData::Setting * BattleSystem::CmdBack(BattleSystem::CpuSequence & cpuSeq, long opt); // 0x1400EAA30
const CommandData::Setting * BattleSystem::CmdCrouchGuard(BattleSystem::CpuSequence & cpuSeq, long opt); // 0x1400EAB30
const CommandData::Setting * BattleSystem::CmdDash(BattleSystem::CpuSequence & cpuSeq, long opt); // 0x1400EAC30
const CommandData::Setting * BattleSystem::CmdClimaxMode(BattleSystem::CpuSequence & cpuSeq, long opt); // 0x1400EADA0
const CommandData::Setting * BattleSystem::CmdCommonGeneral(BattleSystem::CpuSequence & cpuSeq, long opt); // 0x1400EAEA0
const CommandData::Setting * BattleSystem::CmdCharaGeneral(BattleSystem::CpuSequence & cpuSeq, long opt); // 0x1400EAEE0
long BattleSystem::CpuSequence::GetRandInt(long max, long min); // 0x1400EAF20
float BattleSystem::CpuSequence::GetRandFloat(float max, float min); // 0x1400EAF90
void BattleSystem::CpuSequence::DecisionCpuLevel(); // 0x1400EB020
struct BattleSystem::CpuSequence::DecisionCpuLevel::__l2::CpuLevelMinMax
{
	long min; // 0x0
	long max; // 0x4
};
const ActorObject * BattleSystem::CpuSequence::CheckShot(); // 0x1400EB6D0
void <lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3>::operator()(Actor & actor); // 0x1400EB7D0
class BattleSystem::CpuSequence::CheckShot::__l2::<lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3>
{
public:
	void operator()(Actor &);
	<lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3>(BattleSystem::CpuSequence::CheckShot::__l2::<lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3> &);
	<lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3>();
	<lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3>(const ActorObject * &, const BattleSystem::CpuSequence *);
private:
	const ActorObject * & pRet; // 0x0
	const BattleSystem::CpuSequence * __this; // 0x8
public:
	BattleSystem::CpuSequence::CheckShot::__l2::<lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3> & operator=(const BattleSystem::CpuSequence::CheckShot::__l2::<lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3> &);
};
BattleSystem::GUARD_TYPE BattleSystem::CpuSequence::CheckGuardType(); // 0x1400EB950
bool BattleSystem::CpuSequence::CheckDownEvade(); // 0x1400EBAF0
bool BattleSystem::CpuSequence::CheckThrowEscape(); // 0x1400EBBD0
void BattleSystem::CpuSequence::SetSequenceWaitFrame(); // 0x1400EBC90
bool BattleSystem::CpuSequence::IsChargeSkillChara(); // 0x1400EBD40
bool BattleSystem::CpuSequence::CheckActorNowSeqUpdate(); // 0x1400EBE20
BattleSystem::CpuSequence::TARGET_DISTANCE::ID BattleSystem::CpuSequence::GetTargetDistanceID(); // 0x1400EBEA0
void BattleSystem::CpuSequence::SetCpuActor(ActorChara * pActor); // 0x1400EBF30
void BattleSystem::CpuSequence::DisposeCpuActor(); // 0x1400EC290
void BattleSystem::CpuSequence::Update(); // 0x1400EC3B0
bool BattleSystem::CpuSequence::UpdateShotReaction(); // 0x1400ECAC0
enum BattleSystem::CpuSequence::UpdateShotReaction::__l2::SHOT_REACTION
{
	SR_UNIQUE = 0,
	SR_FJUMP = 1,
	SR_JUMP = 2,
	SR_BJUMP = 3,
	SR_FJUMP_MID = 4,
	SR_FJUMP_HI = 5,
	SR_F_EVADE = 6,
	SR_B_EVADE = 7,
	SR_GUARD = 8,
	SR_NOP = 9,
	SHOT_REACTION_MAX = 10,
};
class BattleSystem::CpuSequence::UpdateShotReaction::__l52::<lambda_5c99d886ac0bb88c70abbd88b9364fdf>
{
public:
	bool operator()(ActorChara *, const CpuSequenceData::SequenceData &);
private:
	static bool <lambda_invoker_cdecl>(ActorChara *, const CpuSequenceData::SequenceData &);
	typedef char16_t(*<lambda_typedef_cdecl>)(ActorChara *, const CpuSequenceData::SequenceData &);
public:
	bool(*)(ActorChara *, const CpuSequenceData::SequenceData &) operator bool (__cdecl *)(class ActorChara *,const struct CpuSequenceData::SequenceData &)();
private:
	static bool <lambda_invoker_vectorcall>(ActorChara *, const CpuSequenceData::SequenceData &);
	typedef char16_t(*<lambda_typedef_vectorcall>)(ActorChara *, const CpuSequenceData::SequenceData &);
public:
	bool(*)(ActorChara *, const CpuSequenceData::SequenceData &) operator bool (__vectorcall *)(class ActorChara *,const struct CpuSequenceData::SequenceData &)();
	<lambda_5c99d886ac0bb88c70abbd88b9364fdf>(BattleSystem::CpuSequence::UpdateShotReaction::__l52::<lambda_5c99d886ac0bb88c70abbd88b9364fdf> &);
	<lambda_5c99d886ac0bb88c70abbd88b9364fdf>();
	BattleSystem::CpuSequence::UpdateShotReaction::__l52::<lambda_5c99d886ac0bb88c70abbd88b9364fdf> & operator=(const BattleSystem::CpuSequence::UpdateShotReaction::__l52::<lambda_5c99d886ac0bb88c70abbd88b9364fdf> &);
};
class BattleSystem::CpuSequence::UpdateShotReaction::__l64::<lambda_e2243fb76984ba2f21776a3bc2a6aa48>
{
public:
	bool operator()(ActorChara *, const CpuSequenceData::SequenceData &);
	<lambda_e2243fb76984ba2f21776a3bc2a6aa48>(BattleSystem::CpuSequence::UpdateShotReaction::__l64::<lambda_e2243fb76984ba2f21776a3bc2a6aa48> &);
	<lambda_e2243fb76984ba2f21776a3bc2a6aa48>();
	<lambda_e2243fb76984ba2f21776a3bc2a6aa48>(const long &);
private:
	long hitFrame; // 0x0
public:
	BattleSystem::CpuSequence::UpdateShotReaction::__l64::<lambda_e2243fb76984ba2f21776a3bc2a6aa48> & operator=(const BattleSystem::CpuSequence::UpdateShotReaction::__l64::<lambda_e2243fb76984ba2f21776a3bc2a6aa48> &);
};
class BattleSystem::CpuSequence::UpdateShotReaction::__l120::<lambda_9c3ef8d3bc0a42cf84c6892cd275fc46>
{
public:
	bool operator()(ActorChara *, const CpuSequenceData::SequenceData &);
	<lambda_9c3ef8d3bc0a42cf84c6892cd275fc46>(BattleSystem::CpuSequence::UpdateShotReaction::__l120::<lambda_9c3ef8d3bc0a42cf84c6892cd275fc46> &);
	<lambda_9c3ef8d3bc0a42cf84c6892cd275fc46>();
	<lambda_9c3ef8d3bc0a42cf84c6892cd275fc46>(const long &);
private:
	long hitFrame; // 0x0
public:
	BattleSystem::CpuSequence::UpdateShotReaction::__l120::<lambda_9c3ef8d3bc0a42cf84c6892cd275fc46> & operator=(const BattleSystem::CpuSequence::UpdateShotReaction::__l120::<lambda_9c3ef8d3bc0a42cf84c6892cd275fc46> &);
};
std::piecewise_construct_t std::piecewise_construct; // 0x14089B42D
void BattleSystem::CpuSequence::UpdateEnemyMoveReaction(); // 0x1400ED4A0
enum BattleSystem::CpuSequence::UpdateEnemyMoveReaction::__l2::MOVE_REACTION
{
	SR_UNIQUE = 0,
	SR_F_EVADE = 1,
	SR_B_EVADE = 2,
	SR_F_JUMP = 3,
	SR_F_JUMP_LOW = 4,
	SR_JUMP_LOW = 5,
	SR_F_MOVE = 6,
	SR_GUARD = 7,
	SR_NOP = 8,
	MOVE_REACTION_MAX = 9,
};
class BattleSystem::CpuSequence::UpdateEnemyMoveReaction::__l35::<lambda_277775b946f671ac95fcfa25bbb7ee46>
{
public:
	bool operator()(ActorChara *, const CpuSequenceData::SequenceData &);
	<lambda_277775b946f671ac95fcfa25bbb7ee46>(BattleSystem::CpuSequence::UpdateEnemyMoveReaction::__l35::<lambda_277775b946f671ac95fcfa25bbb7ee46> &);
	<lambda_277775b946f671ac95fcfa25bbb7ee46>();
	<lambda_277775b946f671ac95fcfa25bbb7ee46>(const long &);
private:
	long tmp; // 0x0
public:
	BattleSystem::CpuSequence::UpdateEnemyMoveReaction::__l35::<lambda_277775b946f671ac95fcfa25bbb7ee46> & operator=(const BattleSystem::CpuSequence::UpdateEnemyMoveReaction::__l35::<lambda_277775b946f671ac95fcfa25bbb7ee46> &);
};
class BattleSystem::CpuSequence::UpdateEnemyMoveReaction::__l63::<lambda_2fcb0e087167c4c775eae33fc63ce21a>
{
public:
	bool operator()(ActorChara *, const CpuSequenceData::SequenceData &);
	<lambda_2fcb0e087167c4c775eae33fc63ce21a>(BattleSystem::CpuSequence::UpdateEnemyMoveReaction::__l63::<lambda_2fcb0e087167c4c775eae33fc63ce21a> &);
	<lambda_2fcb0e087167c4c775eae33fc63ce21a>();
	<lambda_2fcb0e087167c4c775eae33fc63ce21a>(const long &);
private:
	long tmp; // 0x0
public:
	BattleSystem::CpuSequence::UpdateEnemyMoveReaction::__l63::<lambda_2fcb0e087167c4c775eae33fc63ce21a> & operator=(const BattleSystem::CpuSequence::UpdateEnemyMoveReaction::__l63::<lambda_2fcb0e087167c4c775eae33fc63ce21a> &);
};
class BattleSystem::CpuSequence::UpdateEnemyMoveReaction::__l152::<lambda_dc09dbd38a6026c05e676ba95485d4c1>
{
public:
	bool operator()(ActorChara *, const CpuSequenceData::SequenceData &);
	<lambda_dc09dbd38a6026c05e676ba95485d4c1>(BattleSystem::CpuSequence::UpdateEnemyMoveReaction::__l152::<lambda_dc09dbd38a6026c05e676ba95485d4c1> &);
	<lambda_dc09dbd38a6026c05e676ba95485d4c1>();
	<lambda_dc09dbd38a6026c05e676ba95485d4c1>(const long &, BattleSystem::CpuSequence *);
private:
	long tmp; // 0x0
	BattleSystem::CpuSequence * __this; // 0x8
public:
	BattleSystem::CpuSequence::UpdateEnemyMoveReaction::__l152::<lambda_dc09dbd38a6026c05e676ba95485d4c1> & operator=(const BattleSystem::CpuSequence::UpdateEnemyMoveReaction::__l152::<lambda_dc09dbd38a6026c05e676ba95485d4c1> &);
};
void BattleSystem::CpuSequence::UpdateMyGroundReaction(); // 0x1400EE340
enum BattleSystem::CpuSequence::UpdateMyGroundReaction::__l2::MOVE_REACTION
{
	SR_UNIQUE = 0,
	SR_F_EVADE = 1,
	SR_B_EVADE = 2,
	SR_F_MOVE = 3,
	SR_B_MOVE = 4,
	SR_F_JUMP = 5,
	SR_B_JUMP = 6,
	SR_F_JUMP_LOW = 7,
	SR_F_JUMP_MID = 8,
	SR_F_JUMP_HI = 9,
	SR_THROW_P = 10,
	SR_THROW_K = 11,
	SR_CLIMAX = 12,
	SR_GUARD = 13,
	SR_NOP = 14,
	MOVE_REACTION_MAX = 15,
};
void BattleSystem::CpuSequence::UpdateTrainingMove(); // 0x1400EF470
void BattleSystem::CpuSequence::RequestGuard(long maxFrame); // 0x1400EF6C0
void BattleSystem::CpuSequence::RequestCrouchGuard(long maxFrame); // 0x1400EF780
void BattleSystem::CpuSequence::RequestMoveTargetDistance(float dist, long maxFrame, bool bDash); // 0x1400EF840
void BattleSystem::CpuSequence::RequestJump(BattleSystem::CpuSequence::JUMP_INFO_INDEX::ID jumpIndex); // 0x1400EF940
void BattleSystem::CpuSequence::RequestGuardDamage(); // 0x1400EF9C0
void BattleSystem::CpuSequence::RequestSeqDataMove(); // 0x1400EFA50
void BattleSystem::CpuSequence::SetTrainingCpu(const TrainingSetting & training); // 0x1400EFF30
void BattleSystem::CpuSequence::CancelTrainingCpu(); // 0x1400EFFD0
void BattleSystem::CpuSequence::SetComboMissionCpu(const ComboMissionData::ComboMissionSettingData & setting); // 0x1400F0090
void BattleSystem::CpuSequence::SetSequenceTestPlay(bool flag); // 0x1400F0150
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqReady(); // 0x1400F01B0
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqCrouch(); // 0x1400F02F0
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqGuard(); // 0x1400F03F0
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqCrouchGuard(); // 0x1400F0540
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqMoveTarget(); // 0x1400F0620
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqJump(); // 0x1400F0790
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqBackJump(); // 0x1400F0990
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqBackStep(); // 0x1400F0B20
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqEvade(); // 0x1400F0BA0
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqGuardDamage(); // 0x1400F0C50
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqNormalThrow(); // 0x1400F0FB0
class BattleSystem::CpuSequence::SeqNormalThrow::__l2::<lambda_57e8708b2b69fa7f2ec41669d6ddb26d>
{
public:
	bool operator()(long);
	<lambda_57e8708b2b69fa7f2ec41669d6ddb26d>(BattleSystem::CpuSequence::SeqNormalThrow::__l2::<lambda_57e8708b2b69fa7f2ec41669d6ddb26d> &);
	<lambda_57e8708b2b69fa7f2ec41669d6ddb26d>();
	<lambda_57e8708b2b69fa7f2ec41669d6ddb26d>(BattleSystem::CpuSequence *);
private:
	BattleSystem::CpuSequence * __this; // 0x0
public:
	BattleSystem::CpuSequence::SeqNormalThrow::__l2::<lambda_57e8708b2b69fa7f2ec41669d6ddb26d> & operator=(const BattleSystem::CpuSequence::SeqNormalThrow::__l2::<lambda_57e8708b2b69fa7f2ec41669d6ddb26d> &);
};
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqBaseCommand(); // 0x1400F10B0
bool <lambda_c48def98e3c474a57acb7caa2d08453b>::operator()(long commandID); // 0x1400F1430
class BattleSystem::CpuSequence::SeqBaseCommand::__l2::<lambda_51c1d8f93a8adc0f8cbae62bb28201d7>
{
public:
	bool operator()(ActorChara::ACTOR_STATUS::ID);
	<lambda_51c1d8f93a8adc0f8cbae62bb28201d7>(BattleSystem::CpuSequence::SeqBaseCommand::__l2::<lambda_51c1d8f93a8adc0f8cbae62bb28201d7> &);
	<lambda_51c1d8f93a8adc0f8cbae62bb28201d7>();
	<lambda_51c1d8f93a8adc0f8cbae62bb28201d7>(BattleSystem::CpuSequence *, const CpuSequenceData::SequenceCommandData * &);
private:
	BattleSystem::CpuSequence * __this; // 0x0
	const CpuSequenceData::SequenceCommandData * & pDat; // 0x8
public:
	BattleSystem::CpuSequence::SeqBaseCommand::__l2::<lambda_51c1d8f93a8adc0f8cbae62bb28201d7> & operator=(const BattleSystem::CpuSequence::SeqBaseCommand::__l2::<lambda_51c1d8f93a8adc0f8cbae62bb28201d7> &);
};
class BattleSystem::CpuSequence::SeqBaseCommand::__l2::<lambda_c48def98e3c474a57acb7caa2d08453b>
{
public:
	bool operator()(long);
	<lambda_c48def98e3c474a57acb7caa2d08453b>(BattleSystem::CpuSequence::SeqBaseCommand::__l2::<lambda_c48def98e3c474a57acb7caa2d08453b> &);
	<lambda_c48def98e3c474a57acb7caa2d08453b>();
	<lambda_c48def98e3c474a57acb7caa2d08453b>(BattleSystem::CpuSequence *, const CpuSequenceData::SequenceCommandData * &);
private:
	BattleSystem::CpuSequence * __this; // 0x0
	const CpuSequenceData::SequenceCommandData * & pDat; // 0x8
public:
	BattleSystem::CpuSequence::SeqBaseCommand::__l2::<lambda_c48def98e3c474a57acb7caa2d08453b> & operator=(const BattleSystem::CpuSequence::SeqBaseCommand::__l2::<lambda_c48def98e3c474a57acb7caa2d08453b> &);
};
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqCharaCommand(); // 0x1400F1500
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqBranchWait(); // 0x1400F16D0
bool <lambda_50a7292732d387e18f8957684415ca75>::operator()(long branchType, float param); // 0x1400F1820
class BattleSystem::CpuSequence::SeqBranchWait::__l2::<lambda_50a7292732d387e18f8957684415ca75>
{
public:
	bool operator()(long, float);
	<lambda_50a7292732d387e18f8957684415ca75>(BattleSystem::CpuSequence::SeqBranchWait::__l2::<lambda_50a7292732d387e18f8957684415ca75> &);
	<lambda_50a7292732d387e18f8957684415ca75>();
	<lambda_50a7292732d387e18f8957684415ca75>(BattleSystem::CpuSequence *);
private:
	BattleSystem::CpuSequence * __this; // 0x0
public:
	BattleSystem::CpuSequence::SeqBranchWait::__l2::<lambda_50a7292732d387e18f8957684415ca75> & operator=(const BattleSystem::CpuSequence::SeqBranchWait::__l2::<lambda_50a7292732d387e18f8957684415ca75> &);
};
long BattleSystem::CpuSequence::GetInputKey(); // 0x1400F1F40
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqKeyInput(); // 0x1400F20D0
bool BattleSystem::CpuSequence::IsTrainingThrowEscapeCheck(); // 0x1400F21D0
bool BattleSystem::CpuSequence::IsTrainingGuardActionCheck(); // 0x1400F2220
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqTrainingAction(); // 0x1400F2300
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqTrainingJump(); // 0x1400F2420
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqTutorialNearAttack(); // 0x1400F2720
bool <lambda_f33f72aeb5b96feec66655d40a5aff0e>::operator()(long commandID); // 0x1400F2920
class BattleSystem::CpuSequence::SeqTutorialNearAttack::__l13::<lambda_f33f72aeb5b96feec66655d40a5aff0e>
{
public:
	bool operator()(long);
	<lambda_f33f72aeb5b96feec66655d40a5aff0e>(BattleSystem::CpuSequence::SeqTutorialNearAttack::__l13::<lambda_f33f72aeb5b96feec66655d40a5aff0e> &);
	<lambda_f33f72aeb5b96feec66655d40a5aff0e>();
	<lambda_f33f72aeb5b96feec66655d40a5aff0e>(BattleSystem::CpuSequence *);
private:
	BattleSystem::CpuSequence * __this; // 0x0
public:
	BattleSystem::CpuSequence::SeqTutorialNearAttack::__l13::<lambda_f33f72aeb5b96feec66655d40a5aff0e> & operator=(const BattleSystem::CpuSequence::SeqTutorialNearAttack::__l13::<lambda_f33f72aeb5b96feec66655d40a5aff0e> &);
};
BattleSystem::CpuSequence::SEQUENCE_RESULT BattleSystem::CpuSequence::SeqTutorialBackJumpAttack(); // 0x1400F29C0
void BattleSystem::CpuSequence::SeqParam::UpdateFrame(); // 0x1400F2B40//decompilation failure at 14089B42D!
std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *__fastcall std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
        std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *this,
        const CommandData::Setting *(__fastcall *_Func)(BattleSystem::CpuSequence *, int))
{
  _BOOL8 v3; // rdx
  std::_Func_class<void> v5; // [rsp+30h] [rbp-58h] BYREF

  v5._Mystorage._Ptrs[7] = 0i64;
  if ( _Func )
  {
    v5._Mystorage._Ptrs[0] = (std::_Func_base<void> *)&std::_Func_impl<CommandData::Setting const * (*)(BattleSystem::CpuSequence &,int),std::allocator<int>,CommandData::Setting const *,BattleSystem::CpuSequence &,int>::`vftable';
    v5._Mystorage._Ptrs[1] = (std::_Func_base<void> *)_Func;
    v5._Mystorage._Ptrs[7] = (std::_Func_base<void> *)&v5;
  }
  std::_Func_class<CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Swap(
    &v5,
    (std::_Func_class<void> *)this);
  if ( v5._Mystorage._Ptrs[7] )
  {
    LOBYTE(v3) = v5._Mystorage._Ptrs[7] != (std::_Func_base<void> *)&v5;
    v5._Mystorage._Ptrs[7]->_Delete_this(v5._Mystorage._Ptrs[7], v3);
  }
  return this;
}

void __fastcall std::_Func_class<void,>::~_Func_class<void,>(std::function<void __cdecl(void)> *this, __int64 a2)
{
  std::function<void __cdecl(void)> *v3; // rcx

  v3 = (std::function<void __cdecl(void)> *)this->_Mystorage._Ptrs[7];
  if ( v3 )
  {
    LOBYTE(a2) = v3 != this;
    ((void (__fastcall *)(std::function<void __cdecl(void)> *, __int64))v3->_Mystorage._Ptrs[0][4].__vftable)(v3, a2);
    this->_Mystorage._Ptrs[7] = 0i64;
  }
}

std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *__fastcall std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=(
        std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *this,
        __int64 __formal)
{
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *v3; // rcx

  v3 = (std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *)this->_Mystorage._Ptrs[7];
  if ( v3 )
  {
    LOBYTE(__formal) = v3 != this;
    ((void (__fastcall *)(std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *, __int64))v3->_Mystorage._Ptrs[0][4].__vftable)(
      v3,
      __formal);
    this->_Mystorage._Ptrs[7] = 0i64;
  }
  return this;
}

bool __fastcall lambda_50a7292732d387e18f8957684415ca75_::operator()(float ***branchType, float param, int a3)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  float *v7; // rcx
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax

  switch ( a3 )
  {
    case 0:
      LOBYTE(v4) = 1;
      break;
    case 1:
      LOBYTE(v4) = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 16i64))(**branchType);
      break;
    case 2:
      LOBYTE(v4) = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 24i64))(**branchType);
      break;
    case 3:
      LOBYTE(v4) = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 200i64))(**branchType);
      break;
    case 4:
      LOBYTE(v4) = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 112i64))(**branchType);
      break;
    case 5:
      LOBYTE(v4) = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 120i64))(**branchType);
      break;
    case 6:
      v5 = *(_QWORD *)**branchType;
      if ( param < 0.0 )
      {
        if ( !(*(unsigned __int8 (**)(void))(v5 + 208))() )
          goto LABEL_65;
        goto LABEL_10;
      }
      LOBYTE(v4) = (*(__int64 (**)(void))(v5 + 208))();
      break;
    case 7:
      LOBYTE(v4) = param >= (*(float (__fastcall **)(float *))(*(_QWORD *)**branchType + 840i64))(**branchType);
      break;
    case 8:
      if ( !(*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType) )
        goto LABEL_65;
      v6 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType);
      v7 = **branchType;
      v8 = *(_DWORD *)(v6 + 396) == *((_DWORD *)v7 + 99);
      v9 = *(_QWORD *)v7;
      if ( v8 )
      {
        v10 = (*(__int64 (**)(void))(v9 + 2368))();
        LOBYTE(v4) = param >= (*(float (__fastcall **)(__int64))(*(_QWORD *)v10 + 2624i64))(v10);
      }
      else
      {
        v11 = (*(__int64 (**)(void))(v9 + 2368))();
        LOBYTE(v4) = param >= (*(float (__fastcall **)(__int64))(*(_QWORD *)v11 + 2616i64))(v11);
      }
      break;
    case 9:
      if ( !(*(unsigned __int8 (__fastcall **)(float *))(*(_QWORD *)**branchType + 3000i64))(**branchType) )
        goto LABEL_65;
      LOBYTE(v4) = (*(int (__fastcall **)(float *))(*(_QWORD *)**branchType + 3432i64))(**branchType) >= (int)param;
      break;
    case 10:
      LOBYTE(v4) = (*(int (__fastcall **)(float *))(*(_QWORD *)**branchType + 3424i64))(**branchType) >= (int)param;
      break;
    case 11:
      v4 = (*((_DWORD *)**branchType + 203) >> 8) & 1;
      break;
    case 12:
      v4 = (*((_DWORD *)**branchType + 203) >> 9) & 1;
      break;
    case 13:
      LOBYTE(v4) = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 72i64))(**branchType);
      break;
    case 14:
      LOBYTE(v4) = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 80i64))(**branchType);
      break;
    case 15:
      LOBYTE(v4) = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 88i64))(**branchType);
      break;
    case 16:
      LOBYTE(v4) = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 96i64))(**branchType);
      break;
    case 17:
      LOBYTE(v4) = *((_DWORD *)*branchType + 58) >= (int)param;
      break;
    case 18:
LABEL_10:
      LOBYTE(v4) = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 216i64))(**branchType);
      break;
    case 19:
      v12 = *(_QWORD *)**branchType;
      if ( param < 0.0 )
        LOBYTE(v4) = COERCE_FLOAT(LODWORD(param) ^ _xmm) >= (*(float (**)(void))(v12 + 2616))();
      else
        LOBYTE(v4) = param >= (*(float (**)(void))(v12 + 2624))();
      break;
    case 20:
      if ( param < 1.0 )
        goto LABEL_65;
      LOBYTE(v4) = BattleSystem::CpuSequence::GetRandInt((BattleSystem::CpuSequence *)0x140000000i64, 99, 0) < (int)param;
      break;
    case 21:
      if ( !(*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType) )
        goto LABEL_65;
      v13 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType);
      LOBYTE(v4) = (*(int (__fastcall **)(__int64))(*(_QWORD *)v13 + 3408i64))(v13) <= (int)param;
      break;
    case 22:
      if ( !(*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType) )
        goto LABEL_65;
      v14 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType);
      LOBYTE(v4) = (*(int (__fastcall **)(__int64))(*(_QWORD *)v14 + 3448i64))(v14) <= (int)param;
      break;
    case 23:
      if ( !(*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType) )
        goto LABEL_65;
      v15 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType);
      LOBYTE(v4) = (*(int (__fastcall **)(__int64))(*(_QWORD *)v15 + 3440i64))(v15) <= (int)param;
      break;
    case 24:
      if ( !(*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType) )
        goto LABEL_65;
      v16 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType);
      LOBYTE(v4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 2472i64))(v16);
      break;
    case 25:
      if ( (*branchType)[1] )
        goto LABEL_65;
      LOBYTE(v4) = *((_DWORD *)*branchType + 60) == 1;
      break;
    case 26:
      if ( (*branchType)[1] )
        goto LABEL_65;
      LOBYTE(v4) = *((_DWORD *)*branchType + 60) == 2;
      break;
    case 27:
      if ( (*branchType)[1] )
        goto LABEL_65;
      LOBYTE(v4) = *((_DWORD *)*branchType + 60) == 3;
      break;
    case 28:
      if ( (*branchType)[1] )
        goto LABEL_65;
      if ( !(*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType) )
        goto LABEL_65;
      v17 = *((_DWORD *)*branchType + 60);
      if ( !v17 || v17 == 5 )
        goto LABEL_65;
      LOBYTE(v4) = *(int *)((*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType) + 460) >= 37
                && *(int *)((*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType) + 460) <= 41;
      break;
    case 29:
      v18 = *(_QWORD *)**branchType;
      if ( param < 0.0 )
      {
        if ( !(*(unsigned __int8 (**)(void))(v18 + 48))() )
          goto LABEL_65;
        goto LABEL_56;
      }
      LOBYTE(v4) = (*(__int64 (**)(void))(v18 + 48))();
      break;
    case 30:
LABEL_56:
      LOBYTE(v4) = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 56i64))(**branchType);
      break;
    case 31:
      if ( !(*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType) )
        goto LABEL_65;
      LOBYTE(v4) = *(float *)((*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType)
                            + 172) >= param;
      break;
    case 32:
      if ( (*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType) )
        LOBYTE(v4) = param >= *(float *)((*(__int64 (__fastcall **)(float *))(*(_QWORD *)**branchType + 2368i64))(**branchType)
                                       + 172);
      else
LABEL_65:
        LOBYTE(v4) = 0;
      break;
    case 33:
      LOBYTE(v4) = (**branchType)[43] >= param;
      break;
    case 34:
      LOBYTE(v4) = param >= (**branchType)[43];
      break;
    case 35:
      LOBYTE(v4) = (float)*((int *)*branchType + 118) >= param;
      break;
  }
  return v4;
}

void __fastcall lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3_::operator()(Actor *actor, Actor *a2)
{
  int v4; // ebx
  bool v5; // zf
  Actor_vtbl *v6; // rax
  float v7; // xmm4_4
  float v8; // xmm2_4
  bool v9; // cc
  void (__fastcall *SetSpeedDataSub)(Actor *, float *, const int, const float, const int); // rcx
  float v11; // xmm3_4

  v4 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)&actor->iPriority + 1000i64))(**(_QWORD **)&actor->iPriority);
  if ( a2->GetPlayerID(a2) == v4 )
    return;
  v5 = a2->GetActorType(a2) == SHOT;
  v6 = a2->__vftable;
  if ( v5 )
  {
    if ( ((unsigned __int8 (__fastcall *)(Actor *))v6[1].GetActionPlayRateFix)(a2)
      || ((int (__fastcall *)(Actor *))a2->__vftable[1].GetActionDataInfo)(a2) < 1
      || a2->GetActionSubCategoryID(a2, a2->iActNo, 0) != 1 )
    {
      return;
    }
  }
  else if ( v6->GetActorType(a2) != OPTION
         || a2->GetActionSubCategoryID(a2, a2->iActNo, 0) != 1
         || BattleSystem::GetAttackGuardType(0i64, a2, -1) == NONE )
  {
    return;
  }
  v7 = *(float *)(**(_QWORD **)&actor->iPriority + 144i64);
  v8 = a2->vPos.x - v7;
  if ( v8 > 5.0 )
  {
    v9 = a2->vMov.x <= 0.0;
    goto LABEL_14;
  }
  if ( v8 < -5.0 )
  {
    v9 = a2->vMov.x >= 0.0;
LABEL_14:
    if ( !v9 )
      return;
  }
  SetSpeedDataSub = actor->SetSpeedDataSub;
  if ( !SetSpeedDataSub
    || (v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm),
        (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)SetSpeedDataSub + 36) - v7)) & _xmm) > v11) )
  {
    actor->SetSpeedDataSub = (void (__fastcall *)(Actor *, float *, const int, const float, const int))a2;
  }
}

char __fastcall lambda_c48def98e3c474a57acb7caa2d08453b_::operator()(__int64 **commandID, int a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx

  v3 = a2;
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)**commandID + 3768i64))(**commandID);
  if ( *v4
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8i64))(*v4)
    && (int)v3 >= 0
    && (int)v3 < *(_DWORD *)(*v4 + 28i64) )
  {
    v5 = *(_QWORD *)(*v4 + 40i64) + 68 * v3;
  }
  else
  {
    v5 = 0i64;
  }
  v6 = **commandID;
  v7 = *(_QWORD *)(v6 + 1432);
  if ( v7 && v5 == v7 && !*(_BYTE *)(v6 + 752) )
  {
    if ( (*(_BYTE *)(*commandID[1] + 12) & 2) != 0 )
      *((_DWORD *)*commandID + 118) = 0;
    if ( (*(_BYTE *)(*commandID[1] + 12) & 1) == 0 )
      return 1;
    *((_BYTE *)*commandID + 346) = 1;
  }
  return 0;
}

bool __fastcall lambda_f33f72aeb5b96feec66655d40a5aff0e_::operator()(__int64 **commandID, int a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax

  v3 = a2;
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)**commandID + 3768i64))(**commandID);
  if ( *v4
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8i64))(*v4)
    && (int)v3 >= 0
    && (int)v3 < *(_DWORD *)(*v4 + 28i64) )
  {
    v5 = *(_QWORD *)(*v4 + 40i64) + 68 * v3;
  }
  else
  {
    v5 = 0i64;
  }
  v6 = **commandID;
  v7 = *(_QWORD *)(v6 + 1432);
  return v7 && v5 == v7 && !*(_BYTE *)(v6 + 752);
}

void __fastcall BattleSystem::CpuSequence::CancelTrainingCpu(BattleSystem::CpuSequence *this, _BOOL8 a2)
{
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *p_cmdCheckFunc; // rdi
  std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int> *v4; // rcx

  p_cmdCheckFunc = &this->cmdCheckFunc;
  v4 = this->cmdCheckFunc._Mystorage._Ptrs[7];
  if ( v4 )
  {
    LOBYTE(a2) = v4 != (std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int> *)p_cmdCheckFunc;
    v4->_Delete_this(v4, a2);
    p_cmdCheckFunc->_Mystorage._Ptrs[7] = 0i64;
  }
  this->iCmdFuncOption = 0;
  this->pValidCommand = 0i64;
  *(_WORD *)&this->bReconsideration = 0;
  this->bDamageReversal = 0;
  this->xSeqWaitFrame.value = 0;
  *(_QWORD *)&this->nowSeq.iType = 0i64;
  *(_QWORD *)&this->nowSeq.bLocked = 0i64;
  *(_QWORD *)&this->nowSeq.xMaxFrame.value = 0i64;
  *(_QWORD *)&this->nowSeq.type.guardDamage.iTargetActNo = 0i64;
  *(_QWORD *)&this->nowSeq.type.trainingAct.bDownEvade = 0i64;
  *(_QWORD *)&this->reqSeq.iSeqCount = 0i64;
  *(_QWORD *)&this->reqSeq.xNowFrame.value = 0i64;
  this->reqSeq.type.moveTarget = 0i64;
  *((_QWORD *)&this->reqSeq.type.key + 1) = 0i64;
  *(_QWORD *)&this->seqCtrl.iSeqListIndex = -1i64;
}

char __fastcall BattleSystem::CpuSequence::CheckActorNowSeqUpdate(BattleSystem::CpuSequence *this)
{
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v4; // [rsp+40h] [rbp+8h]

  if ( this->nowSeq.bRefSeqData && (this->pOwner->bActionFreeze || this->pOwner->bHitStopFreeze) )
    return 1;
  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v4 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v4);
    BattleSystem::BattleController::instance = v3;
  }
  this->nowSeq.xNowFrame.value += v3->actSystem.xPlaySpeed.value;
  ++this->nowSeq.iSeqCount;
  return 0;
}

bool __fastcall BattleSystem::CpuSequence::CheckDownEvade(BattleSystem::CpuSequence *this)
{
  bool v1; // zf
  bool result; // al
  BattleSystem::CpuSequence *v4; // rcx
  __int128 v5[4]; // [rsp+20h] [rbp-58h]

  v1 = this->nowSeq.type.moveTarget.iMoveAct == 0;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v5[3] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  if ( !v1 )
    return 0;
  if ( !this->pOwner->IsValidEvadeCommand(this->pOwner) )
    return 0;
  this->nowSeq.type.moveTarget.iMoveAct = 1;
  if ( BattleSystem::CpuSequence::GetRandInt(v4, 100, 1) > *((_DWORD *)v5 + this->iCpuLevel) )
    return 0;
  std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
    &this->cmdCheckFunc,
    BattleSystem::CmdCommonGeneral);
  result = 1;
  this->iCmdFuncOption = 36;
  return result;
}

__int64 __fastcall BattleSystem::CpuSequence::CheckGuardType(BattleSystem::CpuSequence *this)
{
  float v1; // xmm0_4
  ActorChara *v3; // rax
  const ActorObject *pEnemyShot; // rdi
  unsigned int v5; // ebx
  const Actor *v6; // rsi
  float x; // xmm6_4
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  BattleSystem::GUARD_TYPE AttackGuardType; // edi
  float v14; // xmm3_4
  bool v15; // zf

  v3 = this->pOwner->GetTargetActor(this->pOwner);
  pEnemyShot = this->pEnemyShot;
  v5 = 0;
  v6 = v3;
  x = 0.0;
  if ( !pEnemyShot )
    goto LABEL_17;
  v8 = (__int64)pEnemyShot->GetGuardCheckKeyFrame(&pEnemyShot->Actor, pEnemyShot->iActNo, pEnemyShot->iActFrame);
  if ( v8 )
  {
    v9 = (__int64)pEnemyShot->GetAttackData(&pEnemyShot->Actor, *(_DWORD *)(v8 + 4));
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 4) == 4 )
      {
        v5 = 5;
      }
      else
      {
        v10 = *(_DWORD *)(v9 + 84);
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              if ( v12 == 1 )
                v5 = 4;
            }
            else
            {
              v5 = 3;
            }
          }
          else
          {
            v5 = 2;
          }
        }
        else
        {
          v5 = 1;
        }
      }
    }
  }
  if ( !v5
    || v5 - 4 > 1
    && (x = this->pEnemyShot->vPos.x,
        v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(x - v6->vPos.x)) & _xmm),
        v1 < 20.0) )
  {
LABEL_17:
    AttackGuardType = BattleSystem::GetAttackGuardType(this->pOwner, v6, -1);
    this->pOwner->GetRivalDistance(this->pOwner);
    v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(this->pOwner->vPos.x - x)) & _xmm);
    if ( AttackGuardType == COUNTER_HIT )
    {
      if ( !((unsigned __int8 (__fastcall *)(const Actor *))v6->__vftable[1].SetIgnoreSystemPlayRate)(v6) )
      {
        v15 = v5 == 3;
        v5 = 1;
        if ( !v15 )
          return v5;
      }
      return 3;
    }
    if ( AttackGuardType != GUARD_CRASH )
    {
      if ( AttackGuardType != REVERSAL )
      {
        if ( (unsigned int)(AttackGuardType - 4) <= 1 )
          return (unsigned int)AttackGuardType;
        return v5;
      }
      if ( v5 == 2 && v14 <= v1 )
        return v5;
      return 3;
    }
    if ( v5 != 3 || v14 > v1 )
      return 2;
  }
  return v5;
}

const ActorObject *__fastcall BattleSystem::CpuSequence::CheckShot(BattleSystem::CpuSequence *this)
{
  BattleSystem::BattleController *v1; // rax
  BattleSystem::BattleController *v2; // rax
  __int128 v4; // [rsp+20h] [rbp-49h]
  std::function<void __cdecl(Actor &)> v5; // [rsp+38h] [rbp-31h] BYREF
  std::function<void __cdecl(Actor &)> v6; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v7; // [rsp+D0h] [rbp+67h] BYREF
  std::function<void __cdecl(Actor &)> *v8; // [rsp+D8h] [rbp+6Fh]
  BattleSystem::BattleController *v9; // [rsp+E0h] [rbp+77h]

  v7 = 0i64;
  *(_QWORD *)&v4 = &v7;
  *((_QWORD *)&v4 + 1) = this;
  v8 = &v5;
  v5._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<_lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3_,std::allocator<int>,void,Actor &>::`vftable';
  *(_OWORD *)&v5._Mystorage._Ptrs[1] = v4;
  v5._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v5;
  v1 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v9 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v9);
    BattleSystem::BattleController::instance = v1;
  }
  ActionSystem::FuncCallRequest(&v1->actSystem, (Actor *)6, &v5);
  v8 = &v6;
  v6._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<_lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3_,std::allocator<int>,void,Actor &>::`vftable';
  *(_OWORD *)&v6._Mystorage._Ptrs[1] = v4;
  v6._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v6;
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v9 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v9);
    BattleSystem::BattleController::instance = v2;
  }
  ActionSystem::FuncCallRequest(&v2->actSystem, (Actor *)5, &v6);
  return (const ActorObject *)v7;
}

bool __fastcall BattleSystem::CpuSequence::CheckThrowEscape(BattleSystem::CpuSequence *this)
{
  bool v1; // zf
  BattleSystem::CpuSequence *v3; // rcx
  __int128 v5[4]; // [rsp+20h] [rbp-58h]

  v1 = this->nowSeq.type.moveTarget.iMoveAct == 0;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v5[3] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  if ( v1 && this->pOwner->IsValidThrowEscapeCommand(this->pOwner) )
  {
    this->nowSeq.type.moveTarget.iMoveAct = 1;
    if ( BattleSystem::CpuSequence::GetRandInt(v3, 100, 1) <= *((_DWORD *)v5 + this->iCpuLevel) )
    {
      std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
        &this->cmdCheckFunc,
        BattleSystem::CmdCommonGeneral);
      this->iCmdFuncOption = 37;
    }
  }
  return 0;
}

const CommandData::Setting *__fastcall BattleSystem::CmdBack(BattleSystem::CpuSequence *cpuSeq, __int64 opt)
{
  ActorChara *pOwner; // rcx
  CommandEventListener *v4; // rdi
  unsigned int *v5; // rbx
  CommandEventListener *v6; // rdi
  unsigned int *v7; // rbx

  pOwner = cpuSeq->pOwner;
  v4 = &pOwner->CommandEventListener;
  if ( !pOwner )
    v4 = 0i64;
  v5 = (unsigned int *)((__int64 (__fastcall *)(ActorChara *, __int64))pOwner->GetCommonCommandCheck)(pOwner, opt);
  if ( *(_QWORD *)v5
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8i64))(*(_QWORD *)v5)
    && *(int *)(*(_QWORD *)v5 + 28i64) > 38 )
  {
    v4->RecvCommandEvent(
      v4,
      v5[4],
      38,
      (const CommandData::Setting *)(*(_QWORD *)(*(_QWORD *)v5 + 40i64) + 2584i64),
      0,
      0);
  }
  v6 = &cpuSeq->pOwner->CommandEventListener;
  if ( !cpuSeq->pOwner )
    v6 = 0i64;
  v7 = (unsigned int *)((__int64 (*)(void))cpuSeq->pOwner->GetCommonCommandCheck)();
  if ( !*(_QWORD *)v7
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v7 + 8i64))(*(_QWORD *)v7)
    || *(int *)(*(_QWORD *)v7 + 28i64) <= 3 )
  {
    return 0i64;
  }
  v6->RecvCommandEvent(v6, v7[4], 3, (const CommandData::Setting *)(*(_QWORD *)(*(_QWORD *)v7 + 40i64) + 204i64), 0, 0);
  return (const CommandData::Setting *)(*(_QWORD *)(*(_QWORD *)v7 + 40i64) + 204i64);
}

CommandData::Setting *__fastcall BattleSystem::CmdCharaGeneral(BattleSystem::CpuSequence *cpuSeq, int opt)
{
  ActorChara *pOwner; // rcx
  CommandEventListener *v4; // rbx
  CommandCheck *v5; // rax

  pOwner = cpuSeq->pOwner;
  v4 = &pOwner->CommandEventListener;
  if ( !pOwner )
    v4 = 0i64;
  v5 = pOwner->GetCharaCommandCheck(pOwner);
  return CommandCheck::ValidCommandFromIndex(v5, v4, opt);
}

const CommandData::Setting *__fastcall BattleSystem::CmdClimaxMode(BattleSystem::CpuSequence *cpuSeq, __int64 opt)
{
  ActorChara *pOwner; // rcx
  CommandEventListener *v4; // rdi
  unsigned int *v5; // rbx
  __int64 v6; // rbx
  bool v7; // zf
  ActorChara_vtbl *v8; // rax
  CommandEventListener *v9; // rsi
  unsigned int *v10; // rdi

  pOwner = cpuSeq->pOwner;
  v4 = &pOwner->CommandEventListener;
  if ( !pOwner )
    v4 = 0i64;
  v5 = (unsigned int *)((__int64 (__fastcall *)(ActorChara *, __int64))pOwner->GetCommonCommandCheck)(pOwner, opt);
  if ( *(_QWORD *)v5
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8i64))(*(_QWORD *)v5)
    && *(int *)(*(_QWORD *)v5 + 28i64) > 32 )
  {
    v4->RecvCommandEvent(
      v4,
      v5[4],
      32,
      (const CommandData::Setting *)(*(_QWORD *)(*(_QWORD *)v5 + 40i64) + 2176i64),
      0,
      0);
    v6 = *(_QWORD *)(*(_QWORD *)v5 + 40i64) + 2176i64;
  }
  else
  {
    v6 = 0i64;
  }
  v7 = cpuSeq->pOwner == 0i64;
  v8 = cpuSeq->pOwner->__vftable;
  v9 = &cpuSeq->pOwner->CommandEventListener;
  if ( v7 )
    v9 = 0i64;
  v10 = (unsigned int *)((__int64 (*)(void))v8->GetCommonCommandCheck)();
  if ( *(_QWORD *)v10
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 8i64))(*(_QWORD *)v10)
    && *(int *)(*(_QWORD *)v10 + 28i64) > 42 )
  {
    v9->RecvCommandEvent(
      v9,
      v10[4],
      42,
      (const CommandData::Setting *)(*(_QWORD *)(*(_QWORD *)v10 + 40i64) + 2856i64),
      0,
      0);
  }
  return (const CommandData::Setting *)v6;
}

CommandData::Setting *__fastcall BattleSystem::CmdCommonGeneral(BattleSystem::CpuSequence *cpuSeq, int opt)
{
  ActorChara *pOwner; // rcx
  CommandEventListener *v4; // rbx
  CommandCheck *v5; // rax

  pOwner = cpuSeq->pOwner;
  v4 = &pOwner->CommandEventListener;
  if ( !pOwner )
    v4 = 0i64;
  v5 = pOwner->GetCommonCommandCheck(pOwner);
  return CommandCheck::ValidCommandFromIndex(v5, v4, opt);
}

const CommandData::Setting *__fastcall BattleSystem::CmdCrouch(BattleSystem::CpuSequence *cpuSeq, __int64 opt)
{
  ActorChara *pOwner; // rcx
  CommandEventListener *v3; // rdi
  unsigned int *v4; // rbx

  pOwner = cpuSeq->pOwner;
  v3 = &pOwner->CommandEventListener;
  if ( !pOwner )
    v3 = 0i64;
  v4 = (unsigned int *)((__int64 (__fastcall *)(ActorChara *, __int64))pOwner->GetCommonCommandCheck)(pOwner, opt);
  if ( !*(_QWORD *)v4
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8i64))(*(_QWORD *)v4)
    || *(int *)(*(_QWORD *)v4 + 28i64) <= 1 )
  {
    return 0i64;
  }
  v3->RecvCommandEvent(v3, v4[4], 1, (const CommandData::Setting *)(*(_QWORD *)(*(_QWORD *)v4 + 40i64) + 68i64), 0, 0);
  return (const CommandData::Setting *)(*(_QWORD *)(*(_QWORD *)v4 + 40i64) + 68i64);
}

const CommandData::Setting *__fastcall BattleSystem::CmdCrouchGuard(BattleSystem::CpuSequence *cpuSeq, __int64 opt)
{
  ActorChara *pOwner; // rcx
  CommandEventListener *v4; // rdi
  unsigned int *v5; // rbx
  __int64 v6; // rbx
  bool v7; // zf
  ActorChara_vtbl *v8; // rax
  CommandEventListener *v9; // rsi
  unsigned int *v10; // rdi

  pOwner = cpuSeq->pOwner;
  v4 = &pOwner->CommandEventListener;
  if ( !pOwner )
    v4 = 0i64;
  v5 = (unsigned int *)((__int64 (__fastcall *)(ActorChara *, __int64))pOwner->GetCommonCommandCheck)(pOwner, opt);
  if ( *(_QWORD *)v5
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8i64))(*(_QWORD *)v5)
    && *(int *)(*(_QWORD *)v5 + 28i64) > 39 )
  {
    v4->RecvCommandEvent(
      v4,
      v5[4],
      39,
      (const CommandData::Setting *)(*(_QWORD *)(*(_QWORD *)v5 + 40i64) + 2652i64),
      0,
      0);
    v6 = *(_QWORD *)(*(_QWORD *)v5 + 40i64) + 2652i64;
  }
  else
  {
    v6 = 0i64;
  }
  v7 = cpuSeq->pOwner == 0i64;
  v8 = cpuSeq->pOwner->__vftable;
  v9 = &cpuSeq->pOwner->CommandEventListener;
  if ( v7 )
    v9 = 0i64;
  v10 = (unsigned int *)((__int64 (*)(void))v8->GetCommonCommandCheck)();
  if ( *(_QWORD *)v10
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 8i64))(*(_QWORD *)v10)
    && *(int *)(*(_QWORD *)v10 + 28i64) > 1 )
  {
    v9->RecvCommandEvent(
      v9,
      v10[4],
      1,
      (const CommandData::Setting *)(*(_QWORD *)(*(_QWORD *)v10 + 40i64) + 68i64),
      0,
      0);
  }
  return (const CommandData::Setting *)v6;
}

const CommandData::Setting *__fastcall BattleSystem::CmdDash(BattleSystem::CpuSequence *cpuSeq, __int64 opt)
{
  ActorChara *pOwner; // rcx
  CommandEventListener *v4; // rdi
  unsigned int *v5; // rbx
  __int64 v6; // rbx
  CommandEventListener *v7; // rsi
  unsigned int *v8; // rdi
  CommandEventListener *v9; // rsi
  unsigned int *v10; // rdi

  pOwner = cpuSeq->pOwner;
  v4 = &pOwner->CommandEventListener;
  if ( !pOwner )
    v4 = 0i64;
  v5 = (unsigned int *)((__int64 (__fastcall *)(ActorChara *, __int64))pOwner->GetCommonCommandCheck)(pOwner, opt);
  if ( *(_QWORD *)v5
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8i64))(*(_QWORD *)v5)
    && *(int *)(*(_QWORD *)v5 + 28i64) > 4 )
  {
    v4->RecvCommandEvent(
      v4,
      v5[4],
      4,
      (const CommandData::Setting *)(*(_QWORD *)(*(_QWORD *)v5 + 40i64) + 272i64),
      0,
      0);
    v6 = *(_QWORD *)(*(_QWORD *)v5 + 40i64) + 272i64;
  }
  else
  {
    v6 = 0i64;
  }
  v7 = &cpuSeq->pOwner->CommandEventListener;
  if ( !cpuSeq->pOwner )
    v7 = 0i64;
  v8 = (unsigned int *)((__int64 (*)(void))cpuSeq->pOwner->GetCommonCommandCheck)();
  if ( *(_QWORD *)v8
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 8i64))(*(_QWORD *)v8)
    && *(int *)(*(_QWORD *)v8 + 28i64) > 6 )
  {
    v7->RecvCommandEvent(
      v7,
      v8[4],
      6,
      (const CommandData::Setting *)(*(_QWORD *)(*(_QWORD *)v8 + 40i64) + 408i64),
      0,
      0);
  }
  v9 = &cpuSeq->pOwner->CommandEventListener;
  if ( !cpuSeq->pOwner )
    v9 = 0i64;
  v10 = (unsigned int *)((__int64 (*)(void))cpuSeq->pOwner->GetCommonCommandCheck)();
  if ( *(_QWORD *)v10
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 8i64))(*(_QWORD *)v10)
    && *(int *)(*(_QWORD *)v10 + 28i64) > 5 )
  {
    v9->RecvCommandEvent(
      v9,
      v10[4],
      5,
      (const CommandData::Setting *)(*(_QWORD *)(*(_QWORD *)v10 + 40i64) + 340i64),
      0,
      0);
  }
  return (const CommandData::Setting *)v6;
}

const CommandData::Setting *__fastcall BattleSystem::CmdFront(BattleSystem::CpuSequence *cpuSeq, __int64 opt)
{
  ActorChara *pOwner; // rcx
  CommandEventListener *v3; // rdi
  unsigned int *v4; // rbx

  pOwner = cpuSeq->pOwner;
  v3 = &pOwner->CommandEventListener;
  if ( !pOwner )
    v3 = 0i64;
  v4 = (unsigned int *)((__int64 (__fastcall *)(ActorChara *, __int64))pOwner->GetCommonCommandCheck)(pOwner, opt);
  if ( !*(_QWORD *)v4
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8i64))(*(_QWORD *)v4)
    || *(int *)(*(_QWORD *)v4 + 28i64) <= 2 )
  {
    return 0i64;
  }
  v3->RecvCommandEvent(v3, v4[4], 2, (const CommandData::Setting *)(*(_QWORD *)(*(_QWORD *)v4 + 40i64) + 136i64), 0, 0);
  return (const CommandData::Setting *)(*(_QWORD *)(*(_QWORD *)v4 + 40i64) + 136i64);
}

const CommandData::Setting *__fastcall BattleSystem::CmdReady(BattleSystem::CpuSequence *cpuSeq, __int64 opt)
{
  ActorChara *pOwner; // rcx
  CommandEventListener *v4; // rdi
  unsigned int *v5; // rbx
  __int64 v6; // rbx
  bool v7; // zf
  ActorChara_vtbl *v8; // rax
  CommandEventListener *v9; // rsi
  unsigned int *v10; // rdi

  pOwner = cpuSeq->pOwner;
  v4 = &pOwner->CommandEventListener;
  if ( !pOwner )
    v4 = 0i64;
  v5 = (unsigned int *)((__int64 (__fastcall *)(ActorChara *, __int64))pOwner->GetCommonCommandCheck)(pOwner, opt);
  if ( *(_QWORD *)v5
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8i64))(*(_QWORD *)v5)
    && *(int *)(*(_QWORD *)v5 + 28i64) > 0 )
  {
    v4->RecvCommandEvent(v4, v5[4], 0, *(const CommandData::Setting **)(*(_QWORD *)v5 + 40i64), 0, 0);
    v6 = *(_QWORD *)(*(_QWORD *)v5 + 40i64);
  }
  else
  {
    v6 = 0i64;
  }
  v7 = cpuSeq->pOwner == 0i64;
  v8 = cpuSeq->pOwner->__vftable;
  v9 = &cpuSeq->pOwner->CommandEventListener;
  if ( v7 )
    v9 = 0i64;
  v10 = (unsigned int *)((__int64 (*)(void))v8->GetCommonCommandCheck)();
  if ( *(_QWORD *)v10
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 8i64))(*(_QWORD *)v10)
    && *(int *)(*(_QWORD *)v10 + 28i64) > 43 )
  {
    v9->RecvCommandEvent(
      v9,
      v10[4],
      43,
      (const CommandData::Setting *)(*(_QWORD *)(*(_QWORD *)v10 + 40i64) + 2924i64),
      0,
      0);
  }
  return (const CommandData::Setting *)v6;
}

void __fastcall BattleSystem::CpuSequence::DecisionCpuLevel(BattleSystem::CpuSequence *this)
{
  BattleSystem::BattleController *v2; // rax
  int v3; // eax
  int v4; // esi
  int v5; // ebx
  ActorChara *v6; // rax
  _DWORD *v7; // rsi
  int v8; // ecx
  GameDataInfo *v9; // rcx
  GameDataInfo *v10; // rcx
  GameDataInfo *Instance; // rax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // edx
  GameDataInfo *v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // edx
  unsigned int v30; // ecx
  int v31; // eax
  unsigned int v32; // edx
  GameDataInfo *v33; // rax
  unsigned int v34; // ecx
  unsigned int v35; // edx
  unsigned int v36; // ecx
  int v37; // eax
  unsigned int v38; // edx
  unsigned int v39; // ecx
  int v40; // eax
  unsigned int v41; // edx
  unsigned int v42; // ecx
  int v43; // eax
  unsigned int v44; // edx
  GameDataInfo *v45; // rax
  unsigned int v46; // ecx
  unsigned int v47; // edx
  unsigned int v48; // ecx
  int v49; // eax
  unsigned int v50; // edx
  unsigned int v51; // ecx
  int v52; // eax
  unsigned int v53; // edx
  AiLevelSpec iDifficulty; // eax
  __int64 v55; // r9
  int v56; // ecx
  int v57; // er8
  int v58; // eax
  int iCpuLevel; // eax
  BattleSystem::BattleController *v60; // [rsp+28h] [rbp-50h]
  __int128 v61[2]; // [rsp+30h] [rbp-48h]
  int v62; // [rsp+50h] [rbp-28h]
  int v63; // [rsp+54h] [rbp-24h]

  v61[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v61[1] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v62 = 12;
  v63 = 15;
  if ( !BattleSystem::BattleController::instance )
  {
    v60 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v60);
    BattleSystem::BattleController::instance = v2;
  }
  v3 = this->pOwner->GetVitalPercent(this->pOwner);
  v4 = v3;
  v5 = v3 < 500;
  if ( v3 < 300 )
    ++v5;
  if ( v3 < 150 )
    ++v5;
  v6 = this->pOwner->GetTargetActor(this->pOwner);
  if ( v4 < v6->GetVitalPercent(v6) )
    ++v5;
  if ( this->pOwner->GetGuardPower(this->pOwner) < 200 )
    v5 += 2;
  if ( this->pOwner->GetStunPower(this->pOwner) < 200 )
    v5 += 2;
  v7 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  v8 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v7 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v8 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v8 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_STORY )
  {
    if ( v8 > *v7 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v9);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    v5 += 2 * `GameDataInfo::getInstance'::`2'::instance.m_StoryWinCount;
    goto LABEL_46;
  }
  if ( v8 > *v7 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v10);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_MISSION_TIMEATTACK )
  {
    v5 += 6;
    this->iDifficulty = AiLevel_Normal;
    goto LABEL_46;
  }
  Instance = GameDataInfo::getInstance();
  if ( Instance->m_GameMode[Instance->m_GameModeIndex] == GAME_MODE_MISSION_SURVIVAL )
  {
    v5 -= 2;
    v12 = GameDataInfo::getInstance()->m_SurvivalWinCount ^ 0x7B48A35E;
    v13 = ((unsigned __int16)v12 ^ (unsigned __int16)(v12 >> 14)) & 0xCCCC;
    v14 = v12 ^ v13 ^ (v13 << 14);
    if ( (int)((v14 ^ (v14 >> 7)) & 0x550055 ^ v14 ^ (((v14 ^ (v14 >> 7)) & 0x550055) << 7)) < 5 )
    {
      this->iDifficulty = AiLevel_VeryEasy;
      v15 = GameDataInfo::getInstance()->m_SurvivalWinCount ^ 0x7B48A35E;
      v16 = ((unsigned __int16)v15 ^ (unsigned __int16)(v15 >> 14)) & 0xCCCC;
      v17 = v15 ^ v16 ^ (v16 << 14);
      v5 += ((v17 ^ (v17 >> 7)) & 0x550055 ^ v17 ^ (((v17 ^ (v17 >> 7)) & 0x550055) << 7))
          + 2 * ((v17 ^ (v17 >> 7)) & 0x550055 ^ v17 ^ (((v17 ^ (v17 >> 7)) & 0x550055) << 7));
      goto LABEL_46;
    }
    v18 = GameDataInfo::getInstance()->m_SurvivalWinCount ^ 0x7B48A35E;
    v19 = ((unsigned __int16)v18 ^ (unsigned __int16)(v18 >> 14)) & 0xCCCC;
    v20 = v18 ^ v19 ^ (v19 << 14);
    if ( (int)((v20 ^ (v20 >> 7)) & 0x550055 ^ v20 ^ (((v20 ^ (v20 >> 7)) & 0x550055) << 7)) < 10 )
    {
      this->iDifficulty = AiLevel_Easy;
      v21 = GameDataInfo::getInstance();
      v22 = v21->m_SurvivalWinCount ^ 0x7B48A35E;
      LODWORD(v21) = (LOWORD(v21->m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)(v22 >> 14)) & 0xCCCC;
      v23 = v22 ^ (unsigned int)v21 ^ ((_DWORD)v21 << 14);
      v5 += 2 * (((v23 ^ (v23 >> 7)) & 0x550055 ^ v23 ^ (((v23 ^ (v23 >> 7)) & 0x550055) << 7)) - 5)
          + ((v23 ^ (v23 >> 7)) & 0x550055 ^ v23 ^ (((v23 ^ (v23 >> 7)) & 0x550055) << 7))
          - 5;
      goto LABEL_46;
    }
    v24 = GameDataInfo::getInstance()->m_SurvivalWinCount ^ 0x7B48A35E;
    v25 = ((unsigned __int16)v24 ^ (unsigned __int16)(v24 >> 14)) & 0xCCCC;
    v26 = v24 ^ v25 ^ (v25 << 14);
    if ( (int)((v26 ^ (v26 >> 7)) & 0x550055 ^ v26 ^ (((v26 ^ (v26 >> 7)) & 0x550055) << 7)) < 20 )
    {
      this->iDifficulty = AiLevel_Normal;
      v27 = GameDataInfo::getInstance()->m_SurvivalWinCount ^ 0x7B48A35E;
      v28 = ((unsigned __int16)v27 ^ (unsigned __int16)(v27 >> 14)) & 0xCCCC;
      v29 = v27 ^ v28 ^ (v28 << 14);
      v5 += 2 * (((v29 ^ (v29 >> 7)) & 0x550055 ^ v29 ^ (((v29 ^ (v29 >> 7)) & 0x550055) << 7)) - 10);
      goto LABEL_46;
    }
    v30 = GameDataInfo::getInstance()->m_SurvivalWinCount ^ 0x7B48A35E;
    v31 = ((unsigned __int16)v30 ^ (unsigned __int16)(v30 >> 14)) & 0xCCCC;
    v32 = v30 ^ v31 ^ (v31 << 14);
    if ( (int)((v32 ^ (v32 >> 7)) & 0x550055 ^ v32 ^ (((v32 ^ (v32 >> 7)) & 0x550055) << 7)) < 25 )
    {
      this->iDifficulty = AiLevel_Normal;
      v33 = GameDataInfo::getInstance();
      v34 = v33->m_SurvivalWinCount ^ 0x7B48A35E;
      LODWORD(v33) = (LOWORD(v33->m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)(v34 >> 14)) & 0xCCCC;
      v35 = v34 ^ (unsigned int)v33 ^ ((_DWORD)v33 << 14);
      v5 += 2 * (((v35 ^ (v35 >> 7)) & 0x550055 ^ v35 ^ (((v35 ^ (v35 >> 7)) & 0x550055) << 7)) - 20)
          + ((v35 ^ (v35 >> 7)) & 0x550055 ^ v35 ^ (((v35 ^ (v35 >> 7)) & 0x550055) << 7))
          - 20;
      goto LABEL_46;
    }
    v36 = GameDataInfo::getInstance()->m_SurvivalWinCount ^ 0x7B48A35E;
    v37 = ((unsigned __int16)v36 ^ (unsigned __int16)(v36 >> 14)) & 0xCCCC;
    v38 = v36 ^ v37 ^ (v37 << 14);
    if ( (int)((v38 ^ (v38 >> 7)) & 0x550055 ^ v38 ^ (((v38 ^ (v38 >> 7)) & 0x550055) << 7)) < 35 )
    {
      this->iDifficulty = AiLevel_Hard;
      v39 = GameDataInfo::getInstance()->m_SurvivalWinCount ^ 0x7B48A35E;
      v40 = ((unsigned __int16)v39 ^ (unsigned __int16)(v39 >> 14)) & 0xCCCC;
      v41 = v39 ^ v40 ^ (v40 << 14);
      v5 += 2 * (((v41 ^ (v41 >> 7)) & 0x550055 ^ v41 ^ (((v41 ^ (v41 >> 7)) & 0x550055) << 7)) - 25);
      goto LABEL_46;
    }
    v42 = GameDataInfo::getInstance()->m_SurvivalWinCount ^ 0x7B48A35E;
    v43 = ((unsigned __int16)v42 ^ (unsigned __int16)(v42 >> 14)) & 0xCCCC;
    v44 = v42 ^ v43 ^ (v43 << 14);
    if ( (int)((v44 ^ (v44 >> 7)) & 0x550055 ^ v44 ^ (((v44 ^ (v44 >> 7)) & 0x550055) << 7)) < 40 )
    {
      this->iDifficulty = AiLevel_Hard;
      v45 = GameDataInfo::getInstance();
      v46 = v45->m_SurvivalWinCount ^ 0x7B48A35E;
      LODWORD(v45) = (LOWORD(v45->m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)(v46 >> 14)) & 0xCCCC;
      v47 = v46 ^ (unsigned int)v45 ^ ((_DWORD)v45 << 14);
      v5 += 2 * (((v47 ^ (v47 >> 7)) & 0x550055 ^ v47 ^ (((v47 ^ (v47 >> 7)) & 0x550055) << 7)) - 35)
          + ((v47 ^ (v47 >> 7)) & 0x550055 ^ v47 ^ (((v47 ^ (v47 >> 7)) & 0x550055) << 7))
          - 35;
      goto LABEL_46;
    }
    v48 = GameDataInfo::getInstance()->m_SurvivalWinCount ^ 0x7B48A35E;
    v49 = ((unsigned __int16)v48 ^ (unsigned __int16)(v48 >> 14)) & 0xCCCC;
    v50 = v48 ^ v49 ^ (v49 << 14);
    this->iDifficulty = AiLevel_VeryHard;
    if ( (int)((v50 ^ (v50 >> 7)) & 0x550055 ^ v50 ^ (((v50 ^ (v50 >> 7)) & 0x550055) << 7)) < 49 )
    {
      v51 = GameDataInfo::getInstance()->m_SurvivalWinCount ^ 0x7B48A35E;
      v52 = ((unsigned __int16)v51 ^ (unsigned __int16)(v51 >> 14)) & 0xCCCC;
      v53 = v51 ^ v52 ^ (v52 << 14);
      v5 += 2 * (((v53 ^ (v53 >> 7)) & 0x550055 ^ v53 ^ (((v53 ^ (v53 >> 7)) & 0x550055) << 7)) - 40);
      goto LABEL_46;
    }
    goto LABEL_42;
  }
  iDifficulty = this->iDifficulty;
  if ( iDifficulty >= AiLevel_VeryHard )
  {
LABEL_42:
    v5 += 999999;
    goto LABEL_46;
  }
  if ( iDifficulty == AiLevel_Hard && v5 < 6 )
    v5 = 6;
LABEL_46:
  v55 = 8i64 * (int)this->iDifficulty;
  v56 = *(_DWORD *)((char *)v61 + v55);
  v57 = v56 + v5 / 3;
  this->iCpuLevel = v57;
  if ( v57 >= v56 )
  {
    v58 = v56 + v5 / 3;
    if ( v57 > *(_DWORD *)((char *)v61 + v55 + 4) )
      v58 = *(_DWORD *)((char *)v61 + v55 + 4);
    this->iCpuLevel = v58;
  }
  else
  {
    this->iCpuLevel = v56;
  }
  iCpuLevel = this->iCpuLevel;
  if ( this->iDebugCpuLevel >= 0 )
    iCpuLevel = this->iDebugCpuLevel;
  this->iCpuLevel = iCpuLevel;
}

void __fastcall BattleSystem::CpuSequence::DisposeCpuActor(BattleSystem::CpuSequence *this, _BOOL8 a2)
{
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *p_cmdCheckFunc; // rdi
  std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int> *v4; // rcx

  this->pOwner = 0i64;
  this->pEnemyShot = 0i64;
  this->guardType = NONE;
  p_cmdCheckFunc = &this->cmdCheckFunc;
  v4 = this->cmdCheckFunc._Mystorage._Ptrs[7];
  if ( v4 )
  {
    LOBYTE(a2) = v4 != (std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int> *)p_cmdCheckFunc;
    v4->_Delete_this(v4, a2);
    p_cmdCheckFunc->_Mystorage._Ptrs[7] = 0i64;
  }
  this->iCmdFuncOption = 0;
  this->pValidCommand = 0i64;
  *(_WORD *)&this->bReconsideration = 0;
  this->bDamageReversal = 0;
  this->xSeqWaitFrame.value = 0;
  *(_QWORD *)&this->nowSeq.iType = 0i64;
  *(_QWORD *)&this->nowSeq.bLocked = 0i64;
  *(_QWORD *)&this->nowSeq.xMaxFrame.value = 0i64;
  *(_QWORD *)&this->nowSeq.type.guardDamage.iTargetActNo = 0i64;
  *(_QWORD *)&this->nowSeq.type.trainingAct.bDownEvade = 0i64;
  *(_QWORD *)&this->reqSeq.iSeqCount = 0i64;
  *(_QWORD *)&this->reqSeq.xNowFrame.value = 0i64;
  this->reqSeq.type.moveTarget = 0i64;
  *((_QWORD *)&this->reqSeq.type.key + 1) = 0i64;
  this->pSeqData = 0i64;
  this->seqCtrl.seqCandidateList._Mypair._Myval2._Mylast = this->seqCtrl.seqCandidateList._Mypair._Myval2._Myfirst;
  this->seqCtrl.pOwner = 0i64;
  this->seqCtrl.pCpuData = 0i64;
  *(_QWORD *)&this->seqCtrl.iSeqListIndex = -1i64;
  *(_QWORD *)&this->seqCtrl.iStandCharge = 0i64;
  this->seqCtrl.iButtonCharge = 0;
  this->iDebugCpuLevel = -1;
  *(_WORD *)&this->bSequenceTestMode = 0;
  this->iSequenceTestIndex = 0;
}

__int64 __fastcall BattleSystem::CpuSequence::GetInputKey(BattleSystem::CpuSequence *this)
{
  bool v1; // zf
  const CpuSequenceData *pCpuData; // rcx
  __int64 iSeqListIndex; // rax
  __int64 v5; // r8
  __int64 iSeqCommandIndex; // rax
  unsigned int v7; // er9
  _DWORD *v8; // r8
  int v9; // ecx
  int v10; // er8
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  __int128 v15[2]; // [rsp+0h] [rbp-68h]
  int v16; // [rsp+20h] [rbp-48h]
  __int128 v17[2]; // [rsp+28h] [rbp-40h]
  int v18; // [rsp+48h] [rbp-20h]

  v1 = this->seqCtrl.pOwner == 0i64;
  v17[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v18 = 6;
  v17[1] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v16 = 5;
  v15[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v15[1] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  if ( v1 )
    return 0i64;
  pCpuData = this->seqCtrl.pCpuData;
  if ( !pCpuData )
    return 0i64;
  iSeqListIndex = this->seqCtrl.iSeqListIndex;
  if ( pCpuData->dataHeader.iSeqSetCount <= (int)iSeqListIndex )
    return 0i64;
  if ( (int)iSeqListIndex < 0 )
    return 0i64;
  v5 = (__int64)&pCpuData->pSeqData[iSeqListIndex];
  if ( !v5 )
    return 0i64;
  iSeqCommandIndex = this->seqCtrl.iSeqCommandIndex;
  v7 = 0;
  if ( *(_DWORD *)v5 <= (int)iSeqCommandIndex || (int)iSeqCommandIndex < 0 )
    v8 = 0i64;
  else
    v8 = (_DWORD *)(*(_QWORD *)(v5 + 80) + 40 * iSeqCommandIndex);
  if ( !v8 || this->nowSeq.iType != 18 || *v8 != 3 )
    return 0i64;
  v9 = v8[4];
  if ( (v9 & 1) == 0 || (this->nowSeq.iSeqCount & 1) != 0 )
  {
    if ( this->pOwner && this->pOwner->iCAngleBuf )
      v7 = *((_DWORD *)v15 + (int)v8[1]);
    else
      v7 = *((_DWORD *)v17 + (int)v8[1]);
  }
  if ( (v9 & 2) == 0 || (this->nowSeq.iSeqCount & 1) != 0 )
  {
    v10 = v8[2];
    v11 = v7 | 0x10;
    if ( (v10 & 1) == 0 )
      v11 = v7;
    v12 = v11 | 0x20;
    if ( (v10 & 2) == 0 )
      v12 = v11;
    v13 = v12 | 0x40;
    if ( (v10 & 4) == 0 )
      v13 = v12;
    v7 = v13;
    if ( (v10 & 8) != 0 )
      return v13 | 0x80u;
  }
  return v7;
}

__int64 __fastcall BattleSystem::BattleController::GetRand31()
{
  BattleSystem::BattleController *v0; // rax
  BattleSystem::BattleController *v2; // [rsp+40h] [rbp+8h]

  v0 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v2 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v2);
    BattleSystem::BattleController::instance = v0;
  }
  return (unsigned int)RandomMT::getRand32(&v0->randMT) >> 1;
}

__int64 __fastcall BattleSystem::BattleController::GetRand32()
{
  BattleSystem::BattleController *v0; // rax
  BattleSystem::BattleController *v2; // [rsp+40h] [rbp+8h]

  v0 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v2 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v2);
    BattleSystem::BattleController::instance = v0;
  }
  return RandomMT::getRand32(&v0->randMT);
}

float __fastcall BattleSystem::CpuSequence::GetRandFloat(BattleSystem::CpuSequence *this, float max, float min)
{
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v5; // [rsp+60h] [rbp+8h]

  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v5 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v5);
    BattleSystem::BattleController::instance = v3;
  }
  return (float)((float)(COERCE_FLOAT(((unsigned int)RandomMT::getRand32(&v3->randMT) >> 9) | 0x3F800000) - 1.0)
               * (float)(max - min))
       + min;
}

__int64 __fastcall BattleSystem::CpuSequence::GetRandInt(BattleSystem::CpuSequence *this, int max, int min)
{
  BattleSystem::BattleController *v5; // rax
  BattleSystem::BattleController *v7; // [rsp+40h] [rbp+8h]

  v5 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v7 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v7);
    BattleSystem::BattleController::instance = v5;
  }
  return (unsigned int)(min + (int)((unsigned int)RandomMT::getRand32(&v5->randMT) >> 1) % (max - min + 1));
}

__int64 __fastcall BattleSystem::CpuSequence::GetTargetDistanceID(BattleSystem::CpuSequence *this)
{
  unsigned int v1; // edi
  __int64 v3; // rbx
  __int128 v5; // [rsp+20h] [rbp-28h]
  float v6; // [rsp+30h] [rbp-18h]

  v1 = 0;
  v5 = _xmm;
  v3 = 0i64;
  v6 = FLOAT_1000_0;
  do
  {
    if ( *((float *)&v5 + v3) >= this->pOwner->GetRivalDistance(this->pOwner) )
      break;
    ++v1;
    ++v3;
  }
  while ( v3 < 5 );
  return v1;
}

unsigned __int8 __fastcall BattleSystem::CpuSequence::IsChargeSkillChara(BattleSystem::CpuSequence *this)
{
  signed int TargetDistanceID; // ecx
  const CpuSequenceData *pSeqData; // rax
  ActorChara *pOwner; // rax
  __int64 v6; // rcx
  int iCharNo; // ecx
  int iChargeRangeFlag; // eax

  TargetDistanceID = BattleSystem::CpuSequence::GetTargetDistanceID(this);
  pSeqData = this->pSeqData;
  if ( pSeqData )
  {
    iChargeRangeFlag = pSeqData->charaFeatureData.iChargeRangeFlag;
    return _bittest(&iChargeRangeFlag, TargetDistanceID);
  }
  else
  {
    pOwner = this->pOwner;
    if ( TargetDistanceID >= 3 )
    {
      switch ( pOwner->iCharNo )
      {
        case 6:
        case 9:
        case 0xA:
        case 0xB:
        case 0x16:
        case 0x18:
        case 0x1D:
        case 0x20:
          return 1;
        default:
          return 0;
      }
    }
    if ( TargetDistanceID > 1 )
    {
      iCharNo = pOwner->iCharNo;
      if ( iCharNo == 9 || iCharNo == 32 )
        return 1;
    }
    else if ( pOwner->iCharNo <= 0x29u )
    {
      v6 = 0x20100000200i64;
      if ( _bittest64(&v6, pOwner->iCharNo) )
        return 1;
    }
    return 0;
  }
}

bool __fastcall BattleSystem::CpuSequence::IsTrainingGuardActionCheck(BattleSystem::CpuSequence *this)
{
  bool result; // al

  if ( !this->pOwner->IsGuardDamaged(this->pOwner) )
    return 0;
  switch ( this->nowSeq.type.jump.iStateCount )
  {
    case 4:
      this->nowSeq.iType = ADVANCED_CANCEL|0x10;
      std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
        &this->cmdCheckFunc,
        (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
      result = 1;
      this->iCmdFuncOption = 10;
      break;
    case 5:
      std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
        &this->cmdCheckFunc,
        (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
      result = 1;
      this->iCmdFuncOption = 33;
      break;
    case 6:
      std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
        &this->cmdCheckFunc,
        (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
      result = 1;
      this->iCmdFuncOption = 34;
      break;
    case 7:
      std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
        &this->cmdCheckFunc,
        (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
      result = 1;
      this->iCmdFuncOption = 35;
      break;
    default:
      return 0;
  }
  return result;
}

bool __fastcall BattleSystem::CpuSequence::IsTrainingThrowEscapeCheck(BattleSystem::CpuSequence *this)
{
  bool result; // al

  if ( !this->nowSeq.type.trainingAct.bThrowEscape || !this->pOwner->IsValidThrowEscapeCommand(this->pOwner) )
    return 0;
  std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
    &this->cmdCheckFunc,
    (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
  result = 1;
  this->iCmdFuncOption = 37;
  return result;
}

void __fastcall BattleSystem::CpuSequence::RequestCrouchGuard(BattleSystem::CpuSequence *this, int maxFrame)
{
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v4; // [rsp+40h] [rbp+8h]

  *(_QWORD *)&this->reqSeq.iType = 0i64;
  *(_QWORD *)&this->reqSeq.bLocked = 0i64;
  *(_OWORD *)&this->reqSeq.xMaxFrame.value = 0ui64;
  this->reqSeq.type.guardDamage.iCancelType = 0;
  this->reqSeq.iType = SUPER_CANCEL;
  if ( maxFrame > 0 )
  {
    this->reqSeq.xMaxFrame.value = maxFrame << 16;
  }
  else
  {
    v3 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v4 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v4);
      BattleSystem::BattleController::instance = v3;
    }
    this->reqSeq.xMaxFrame.value = ((int)((unsigned int)RandomMT::getRand32(&v3->randMT) >> 1) % 51 + 10) << 16;
  }
}

void __fastcall BattleSystem::CpuSequence::RequestGuard(BattleSystem::CpuSequence *this, int maxFrame)
{
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v4; // [rsp+40h] [rbp+8h]

  *(_QWORD *)&this->reqSeq.iType = 0i64;
  *(_QWORD *)&this->reqSeq.bLocked = 0i64;
  *(_OWORD *)&this->reqSeq.xMaxFrame.value = 0ui64;
  this->reqSeq.type.guardDamage.iCancelType = 0;
  this->reqSeq.iType = REVERSAL;
  if ( maxFrame > 0 )
  {
    this->reqSeq.xMaxFrame.value = maxFrame << 16;
  }
  else
  {
    v3 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v4 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v4);
      BattleSystem::BattleController::instance = v3;
    }
    this->reqSeq.xMaxFrame.value = ((int)((unsigned int)RandomMT::getRand32(&v3->randMT) >> 1) % 51 + 10) << 16;
  }
}

void __fastcall BattleSystem::CpuSequence::RequestGuardDamage(BattleSystem::CpuSequence *this)
{
  int v2; // eax
  ActorChara *pOwner; // rcx

  *(_QWORD *)&this->reqSeq.iType = 0i64;
  *(_QWORD *)&this->reqSeq.bLocked = 0i64;
  *(_OWORD *)&this->reqSeq.xMaxFrame.value = 0ui64;
  this->reqSeq.type.guardDamage.iCancelType = 0;
  this->reqSeq.iType = STUN;
  v2 = this->pOwner->GetVital(this->pOwner);
  pOwner = this->pOwner;
  this->reqSeq.type.moveTarget.iMoveAct = v2;
  if ( pOwner->GetTargetActor(pOwner) )
  {
    this->reqSeq.type.jump.iStateCount = this->pOwner->GetTargetActor(this->pOwner)->iActNo;
    this->reqSeq.type.guardDamage.iTargetStat = this->pOwner->GetTargetActor(this->pOwner)->iActorStat;
  }
}

void __fastcall BattleSystem::CpuSequence::RequestJump(
        BattleSystem::CpuSequence *this,
        BattleSystem::CpuSequence::JUMP_INFO_INDEX::ID jumpIndex)
{
  *(_QWORD *)&this->reqSeq.iType = 0i64;
  *(_QWORD *)&this->reqSeq.bLocked = 0i64;
  *(_OWORD *)&this->reqSeq.xMaxFrame.value = 0ui64;
  this->reqSeq.type.guardDamage.iCancelType = 0;
  this->reqSeq.xMaxFrame.value = 327680;
  if ( jumpIndex == FJUMP || jumpIndex == JUMP || jumpIndex == (JUMP|BJUMP|FJUMP) || jumpIndex == (FJUMP_LOW|FJUMP) )
  {
    this->reqSeq.iType = THROW_ESCAPE;
    this->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)(unsigned int)jumpIndex;
  }
  else
  {
    this->reqSeq.iType = CLIMAX_CANCEL;
    this->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)(unsigned int)jumpIndex;
  }
}

void __fastcall BattleSystem::CpuSequence::RequestMoveTargetDistance(
        BattleSystem::CpuSequence *this,
        float dist,
        int maxFrame,
        bool bDash)
{
  BattleSystem::CpuSequence *v5; // rcx
  float v6; // xmm6_4
  int v7; // er8
  float fFrontMoveX; // xmm1_4

  *(_QWORD *)&this->reqSeq.iType = 0i64;
  *(_QWORD *)&this->reqSeq.bLocked = 0i64;
  *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
  *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
  this->reqSeq.type.guardDamage.iCancelType = 0;
  this->reqSeq.type.moveTarget.iMoveAct = bDash;
  this->reqSeq.type.moveTarget.fEndDist = dist;
  this->reqSeq.iType = ADVANCED_CANCEL;
  if ( maxFrame < 0 )
  {
    v6 = dist - this->pOwner->GetRivalDistance(this->pOwner);
    v7 = 1;
    if ( v6 >= 0.0 )
    {
      if ( v6 <= 0.0 )
      {
LABEL_8:
        this->reqSeq.xMaxFrame.value = (unsigned int)BattleSystem::CpuSequence::GetRandInt(v5, v7 + 30, v7) << 16;
        return;
      }
      fFrontMoveX = this->fFrontMoveX;
    }
    else
    {
      fFrontMoveX = this->fBackMoveX;
    }
    if ( fFrontMoveX != 0.0 )
      v7 = (int)ceilf(COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v6 / fFrontMoveX)) & _xmm));
    goto LABEL_8;
  }
  if ( maxFrame )
    this->reqSeq.xMaxFrame.value = maxFrame << 16;
  else
    this->reqSeq.xMaxFrame.value = 23592960;
}

void __fastcall BattleSystem::CpuSequence::RequestSeqDataMove(BattleSystem::CpuSequence *this)
{
  BattleSystem::CpuSequence *v1; // r9
  const CpuSequenceData *pCpuData; // rcx
  __int64 iSeqListIndex; // rax
  __int64 v4; // rdx
  __int64 iSeqCommandIndex; // rax
  _DWORD *v6; // r10
  int v7; // eax
  int v8; // eax
  int v9; // eax

  v1 = this;
  if ( this->seqCtrl.pOwner
    && (pCpuData = this->seqCtrl.pCpuData) != 0i64
    && (iSeqListIndex = v1->seqCtrl.iSeqListIndex, pCpuData->dataHeader.iSeqSetCount > (int)iSeqListIndex)
    && (int)iSeqListIndex >= 0
    && (v4 = (__int64)&pCpuData->pSeqData[iSeqListIndex]) != 0
    && (iSeqCommandIndex = v1->seqCtrl.iSeqCommandIndex, *(_DWORD *)v4 > (int)iSeqCommandIndex)
    && (int)iSeqCommandIndex >= 0 )
  {
    v6 = (_DWORD *)(*(_QWORD *)(v4 + 80) + 40 * iSeqCommandIndex);
  }
  else
  {
    v6 = 0i64;
  }
  *(_QWORD *)&v1->reqSeq.iType = 0i64;
  *(_QWORD *)&v1->reqSeq.bLocked = 0i64;
  *(_QWORD *)&v1->reqSeq.xMaxFrame.value = 0i64;
  *(_QWORD *)&v1->reqSeq.type.guardDamage.iTargetActNo = 0i64;
  v1->reqSeq.type.guardDamage.iCancelType = 0;
  if ( v6 )
  {
    if ( *v6 )
    {
      if ( *v6 != 1 )
      {
        if ( *v6 == 2 )
        {
          v1->reqSeq.iType = 17;
          v1->reqSeq.xMaxFrame.value = v6[5] << 16;
          v1->reqSeq.bRefSeqData = 1;
        }
        else if ( *v6 == 3 )
        {
          v1->reqSeq.iType = 18;
          v7 = v6[3] << 16;
          v1->reqSeq.xMaxFrame.value = v7;
          if ( !v7 )
            v1->reqSeq.xMaxFrame.value = 0x10000;
          v1->reqSeq.type.moveTarget.iMoveAct = v1->pOwner->iActNo;
          v1->reqSeq.bRefSeqData = 1;
        }
        return;
      }
      v1->reqSeq.iType = 16;
      v8 = v6[3];
    }
    else
    {
      switch ( v6[1] )
      {
        case 0:
          *(_QWORD *)&v1->reqSeq.iType = 0i64;
          *(_QWORD *)&v1->reqSeq.bLocked = 0i64;
          *(_QWORD *)&v1->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&v1->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          v1->reqSeq.type.guardDamage.iCancelType = 0;
          v1->reqSeq.iType = COUNTER_HIT;
          v1->reqSeq.xMaxFrame.value = 0x10000;
          break;
        case 1:
          *(_QWORD *)&v1->reqSeq.iType = 0i64;
          *(_QWORD *)&v1->reqSeq.bLocked = 0i64;
          *(_QWORD *)&v1->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&v1->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          v1->reqSeq.type.guardDamage.iCancelType = 0;
          v1->reqSeq.iType = GUARD_CRASH;
          v1->reqSeq.xMaxFrame.value = 0x10000;
          break;
        case 6:
          *(_QWORD *)&v1->reqSeq.iType = 0i64;
          *(_QWORD *)&v1->reqSeq.bLocked = 0i64;
          *(_QWORD *)&v1->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          v1->reqSeq.type.guardDamage.iCancelType = 0;
          *(_QWORD *)&v1->reqSeq.xMaxFrame.value = 327680i64;
          v1->reqSeq.iType = CLIMAX_CANCEL;
          v1->reqSeq.type.jump.iStateCount = 0;
          break;
        case 7:
          BattleSystem::CpuSequence::RequestJump(v1, FJUMP);
          break;
        case 8:
          *(_QWORD *)&v1->reqSeq.iType = 0i64;
          *(_QWORD *)&v1->reqSeq.bLocked = 0i64;
          *(_QWORD *)&v1->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&v1->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          v1->reqSeq.type.guardDamage.iCancelType = 0;
          v1->reqSeq.xMaxFrame.value = 327680;
          v1->reqSeq.iType = CLIMAX_CANCEL;
          v1->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)2i64;
          break;
        case 9:
          *(_QWORD *)&v1->reqSeq.iType = 0i64;
          *(_QWORD *)&v1->reqSeq.bLocked = 0i64;
          *(_QWORD *)&v1->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&v1->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          v1->reqSeq.type.guardDamage.iCancelType = 0;
          v1->reqSeq.xMaxFrame.value = 327680;
          v1->reqSeq.iType = CLIMAX_CANCEL;
          v1->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)8i64;
          break;
        case 0xA:
          *(_QWORD *)&v1->reqSeq.iType = 0i64;
          *(_QWORD *)&v1->reqSeq.bLocked = 0i64;
          *(_QWORD *)&v1->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&v1->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          v1->reqSeq.type.guardDamage.iCancelType = 0;
          v1->reqSeq.xMaxFrame.value = 327680;
          v1->reqSeq.iType = THROW_ESCAPE;
          v1->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)9i64;
          break;
        case 0xB:
          *(_QWORD *)&v1->reqSeq.iType = 0i64;
          *(_QWORD *)&v1->reqSeq.bLocked = 0i64;
          *(_QWORD *)&v1->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&v1->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          v1->reqSeq.type.guardDamage.iCancelType = 0;
          v1->reqSeq.xMaxFrame.value = 327680;
          v1->reqSeq.iType = CLIMAX_CANCEL;
          v1->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)3i64;
          break;
        case 0xC:
          *(_QWORD *)&v1->reqSeq.iType = 0i64;
          *(_QWORD *)&v1->reqSeq.bLocked = 0i64;
          *(_QWORD *)&v1->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&v1->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          v1->reqSeq.type.guardDamage.iCancelType = 0;
          v1->reqSeq.xMaxFrame.value = 327680;
          v1->reqSeq.iType = THROW_ESCAPE;
          v1->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)4i64;
          break;
        case 0xD:
          *(_QWORD *)&v1->reqSeq.iType = 0i64;
          *(_QWORD *)&v1->reqSeq.bLocked = 0i64;
          *(_QWORD *)&v1->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&v1->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          v1->reqSeq.type.guardDamage.iCancelType = 0;
          v1->reqSeq.xMaxFrame.value = 327680;
          v1->reqSeq.iType = CLIMAX_CANCEL;
          v1->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)5i64;
          break;
        case 0xE:
          *(_QWORD *)&v1->reqSeq.iType = 0i64;
          *(_QWORD *)&v1->reqSeq.bLocked = 0i64;
          *(_QWORD *)&v1->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&v1->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          v1->reqSeq.type.guardDamage.iCancelType = 0;
          v1->reqSeq.xMaxFrame.value = 327680;
          v1->reqSeq.iType = CLIMAX_CANCEL;
          v1->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)6i64;
          break;
        case 0xF:
          *(_QWORD *)&v1->reqSeq.iType = 0i64;
          *(_QWORD *)&v1->reqSeq.bLocked = 0i64;
          *(_QWORD *)&v1->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&v1->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          v1->reqSeq.type.guardDamage.iCancelType = 0;
          v1->reqSeq.xMaxFrame.value = 327680;
          v1->reqSeq.iType = THROW_ESCAPE;
          v1->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)7i64;
          break;
        default:
          v1->reqSeq.iType = TECHNICAL;
          break;
      }
      v8 = v6[2];
    }
    v9 = v8 << 16;
    v1->reqSeq.xMaxFrame.value = v9;
    if ( !v9 )
      v1->reqSeq.xMaxFrame.value = 196608;
    v1->reqSeq.bRefSeqData = 1;
  }
}

__int64 __fastcall BattleSystem::CpuSequence::SeqBackJump(BattleSystem::CpuSequence *this)
{
  __int64 v2; // rdx
  bool bRefSeqData; // r10
  const CpuSequenceData::SequenceCommandData *NowSequenceCommandData; // rax
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *v6; // rcx
  int iMoveAct; // eax
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *p_cmdCheckFunc; // rsi
  std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int> *v9; // rcx

  v2 = (unsigned int)(this->pOwner->iActorStat - 7);
  if ( (v2 & 0xFFFFFFFD) == 0 )
  {
    this->nowSeq.type.jump.iStateCount = 1;
    iMoveAct = this->nowSeq.type.moveTarget.iMoveAct;
    if ( iMoveAct == 4 || iMoveAct == 7 )
    {
      p_cmdCheckFunc = &this->cmdCheckFunc;
      v9 = this->cmdCheckFunc._Mystorage._Ptrs[7];
      if ( v9 )
      {
        LOBYTE(v2) = v9 != (std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int> *)p_cmdCheckFunc;
        v9->_Delete_this(v9, v2);
        p_cmdCheckFunc->_Mystorage._Ptrs[7] = 0i64;
      }
      this->iCmdFuncOption = 0;
      goto LABEL_28;
    }
    v6 = &this->cmdCheckFunc;
    goto LABEL_24;
  }
  bRefSeqData = this->nowSeq.bRefSeqData;
  if ( bRefSeqData )
  {
    NowSequenceCommandData = BattleSystem::SequenceController::GetNowSequenceCommandData(&this->seqCtrl);
    if ( !NowSequenceCommandData || NowSequenceCommandData->iType )
      return 1i64;
    if ( this->nowSeq.xNowFrame.value >= this->nowSeq.xMaxFrame.value )
      return 2i64;
    if ( this->nowSeq.type.jump.iStateCount )
    {
      if ( (NowSequenceCommandData->type.key.iFrame & 1) == 0 )
        return 2i64;
      this->nowSeq.bNextOK = 1;
    }
  }
  if ( this->nowSeq.xNowFrame.value >= this->nowSeq.xMaxFrame.value )
    return (unsigned int)this->nowSeq.bNextOK + 1;
  if ( this->nowSeq.type.jump.iStateCount )
  {
    if ( bRefSeqData )
      goto LABEL_28;
    return 1i64;
  }
  if ( this->nowSeq.type.moveTarget.iMoveAct == 1 || this->nowSeq.type.moveTarget.iMoveAct == 4 )
  {
    v6 = &this->cmdCheckFunc;
LABEL_24:
    std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
      v6,
      (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
    this->iCmdFuncOption = 9;
    goto LABEL_28;
  }
  if ( this->nowSeq.type.moveTarget.iMoveAct != 7 && this->nowSeq.type.moveTarget.iMoveAct != 9 )
    return 1i64;
  std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
    &this->cmdCheckFunc,
    (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
  this->iCmdFuncOption = 12;
LABEL_28:
  BattleSystem::CpuSequence::CheckActorNowSeqUpdate(this);
  return 0i64;
}

__int64 __fastcall BattleSystem::CpuSequence::SeqBackStep(BattleSystem::CpuSequence *this)
{
  ActorChara *pOwner; // rcx

  pOwner = this->pOwner;
  if ( pOwner->iActorStat == 5 )
  {
    if ( pOwner->IsReadyFlag(pOwner) || this->pOwner->bActionEnd )
      return 1i64;
  }
  else
  {
    if ( this->nowSeq.xNowFrame.value >= this->nowSeq.xMaxFrame.value )
      return 1i64;
    std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
      &this->cmdCheckFunc,
      (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
    this->iCmdFuncOption = 7;
    BattleSystem::CpuSequence::CheckActorNowSeqUpdate(this);
  }
  return 0i64;
}

__int64 __fastcall BattleSystem::CpuSequence::SeqBaseCommand(BattleSystem::CpuSequence *this)
{
  const CpuSequenceData *pCpuData; // rcx
  __int64 iSeqListIndex; // rax
  __int64 v4; // rdx
  __int64 iSeqCommandIndex; // rax
  int v6; // edi
  __int64 v7; // rdx
  int v8; // er8
  const CommandData::Setting *(__fastcall *v9)(BattleSystem::CpuSequence *, int); // rdx
  __int64 result; // rax
  int v11; // edx
  int commandID[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v13; // [rsp+28h] [rbp-10h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  if ( !this->seqCtrl.pOwner )
    return 1i64;
  pCpuData = this->seqCtrl.pCpuData;
  if ( !pCpuData )
    return 1i64;
  iSeqListIndex = this->seqCtrl.iSeqListIndex;
  if ( pCpuData->dataHeader.iSeqSetCount <= (int)iSeqListIndex )
    return 1i64;
  if ( (int)iSeqListIndex < 0 )
    return 1i64;
  v4 = (__int64)&pCpuData->pSeqData[iSeqListIndex];
  if ( !v4 )
    return 1i64;
  iSeqCommandIndex = this->seqCtrl.iSeqCommandIndex;
  v6 = 0;
  if ( *(_DWORD *)v4 <= (int)iSeqCommandIndex || (int)iSeqCommandIndex < 0 )
    v7 = 0i64;
  else
    v7 = *(_QWORD *)(v4 + 80) + 40 * iSeqCommandIndex;
  v14 = v7;
  if ( !v7 || *(_DWORD *)v7 )
    return 1i64;
  this->iCmdFuncOption = 0;
  v8 = *(_DWORD *)(v7 + 4);
  v13 = &v14;
  *(_QWORD *)commandID = this;
  switch ( v8 )
  {
    case 2:
      if ( this->pOwner->iActorStat != 2 )
        goto LABEL_18;
      if ( (*(_BYTE *)(v7 + 12) & 2) != 0 )
        this->seqCtrl.iButtonCharge = 0;
      if ( (*(_BYTE *)(v7 + 12) & 1) != 0 )
      {
        this->nowSeq.bNextOK = 1;
LABEL_18:
        v9 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdFront;
        goto LABEL_61;
      }
      goto LABEL_19;
    case 3:
      if ( this->pOwner->iActorStat != 3 )
        goto LABEL_25;
      if ( (*(_BYTE *)(v7 + 12) & 2) != 0 )
        this->seqCtrl.iButtonCharge = 0;
      if ( (*(_BYTE *)(v7 + 12) & 1) == 0 )
        goto LABEL_19;
      this->nowSeq.bNextOK = 1;
LABEL_25:
      v9 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdBack;
      goto LABEL_61;
    case 4:
      if ( this->pOwner->iActorStat != 4 )
        goto LABEL_31;
      if ( (*(_BYTE *)(v7 + 12) & 2) != 0 )
        this->seqCtrl.iButtonCharge = 0;
      if ( (*(_BYTE *)(v7 + 12) & 1) == 0 )
        goto LABEL_19;
      this->nowSeq.bNextOK = 1;
LABEL_31:
      v9 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdDash;
      goto LABEL_61;
    case 5:
      if ( this->pOwner->iActorStat != 5 )
        goto LABEL_37;
      if ( (*(_BYTE *)(v7 + 12) & 2) != 0 )
        this->seqCtrl.iButtonCharge = 0;
      if ( (*(_BYTE *)(v7 + 12) & 1) == 0 )
        goto LABEL_19;
      this->nowSeq.bNextOK = 1;
LABEL_37:
      std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
        &this->cmdCheckFunc,
        (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
      this->iCmdFuncOption = 7;
      goto LABEL_62;
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
      this->iCmdFuncOption = v8;
      v11 = v8;
      goto LABEL_59;
    case 30:
      if ( this->pOwner->iActorStat != 27 )
        goto LABEL_44;
      if ( (*(_BYTE *)(v7 + 12) & 2) != 0 )
        this->seqCtrl.iButtonCharge = 0;
      if ( (*(_BYTE *)(v7 + 12) & 1) == 0 )
        goto LABEL_19;
      this->nowSeq.bNextOK = 1;
LABEL_44:
      std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
        &this->cmdCheckFunc,
        (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
      this->iCmdFuncOption = 30;
      goto LABEL_62;
    case 31:
      if ( this->pOwner->iActorStat != 28 )
        goto LABEL_50;
      if ( (*(_BYTE *)(v7 + 12) & 2) != 0 )
        this->seqCtrl.iButtonCharge = 0;
      if ( (*(_BYTE *)(v7 + 12) & 1) == 0 )
        goto LABEL_19;
      this->nowSeq.bNextOK = 1;
LABEL_50:
      std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
        &this->cmdCheckFunc,
        (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
      this->iCmdFuncOption = 31;
      goto LABEL_62;
    case 32:
      if ( this->pOwner->iActorStat != 35 )
        goto LABEL_56;
      if ( (*(_BYTE *)(v7 + 12) & 2) != 0 )
        this->seqCtrl.iButtonCharge = 0;
      if ( (*(_BYTE *)(v7 + 12) & 1) == 0 )
        goto LABEL_19;
      this->nowSeq.bNextOK = 1;
LABEL_56:
      v9 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdClimaxMode;
      goto LABEL_61;
    case 33:
      this->iCmdFuncOption = 40;
      v11 = 40;
      goto LABEL_59;
    case 34:
      this->iCmdFuncOption = 41;
      v11 = 41;
LABEL_59:
      if ( lambda_c48def98e3c474a57acb7caa2d08453b_::operator()((__int64 **)commandID, v11) )
      {
LABEL_19:
        result = 2i64;
      }
      else
      {
        v9 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral;
LABEL_61:
        std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
          &this->cmdCheckFunc,
          v9);
LABEL_62:
        if ( this->nowSeq.xNowFrame.value < this->nowSeq.xMaxFrame.value )
        {
          BattleSystem::CpuSequence::CheckActorNowSeqUpdate(this);
          result = 0i64;
        }
        else
        {
          LOBYTE(v6) = this->nowSeq.bNextOK;
          result = (unsigned int)(v6 + 1);
        }
      }
      break;
    default:
      goto LABEL_62;
  }
  return result;
}

__int64 __fastcall BattleSystem::CpuSequence::SeqBranchWait(BattleSystem::CpuSequence *this)
{
  const CpuSequenceData *pCpuData; // rcx
  __int64 iSeqListIndex; // rax
  __int64 v4; // rdx
  __int64 iSeqCommandIndex; // rax
  __int64 v6; // rdi
  unsigned int v7; // er8
  unsigned int v8; // er8
  unsigned __int8 IsChargeSkillChara; // al
  const CommandData::Setting *(__fastcall *v11)(BattleSystem::CpuSequence *, int); // rdx
  BattleSystem::CpuSequence *branchType; // [rsp+30h] [rbp+8h] BYREF

  if ( !this->seqCtrl.pOwner )
    return 1i64;
  pCpuData = this->seqCtrl.pCpuData;
  if ( !pCpuData )
    return 1i64;
  iSeqListIndex = this->seqCtrl.iSeqListIndex;
  if ( pCpuData->dataHeader.iSeqSetCount <= (int)iSeqListIndex )
    return 1i64;
  if ( (int)iSeqListIndex < 0 )
    return 1i64;
  v4 = (__int64)&pCpuData->pSeqData[iSeqListIndex];
  if ( !v4 )
    return 1i64;
  iSeqCommandIndex = this->seqCtrl.iSeqCommandIndex;
  if ( *(_DWORD *)v4 <= (int)iSeqCommandIndex )
    return 1i64;
  if ( (int)iSeqCommandIndex < 0 )
    return 1i64;
  v6 = *(_QWORD *)(v4 + 80) + 40 * iSeqCommandIndex;
  if ( !v6 || *(_DWORD *)v6 != 2 )
    return 1i64;
  v7 = *(_DWORD *)(v6 + 4);
  branchType = this;
  if ( v7 <= 0x23
    && lambda_50a7292732d387e18f8957684415ca75_::operator()((float ***)&branchType, *(float *)(v6 + 8), v7)
    && (v8 = *(_DWORD *)(v6 + 12), v8 <= 0x23)
    && lambda_50a7292732d387e18f8957684415ca75_::operator()((float ***)&branchType, *(float *)(v6 + 16), v8) )
  {
    this->nowSeq.type.branch.bBranchTrue = 1;
    return 3i64;
  }
  else
  {
    BattleSystem::CpuSequence::CheckActorNowSeqUpdate(this);
    if ( this->nowSeq.xNowFrame.value < this->nowSeq.xMaxFrame.value )
    {
      IsChargeSkillChara = BattleSystem::CpuSequence::IsChargeSkillChara(this);
      v11 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCrouch;
      if ( !IsChargeSkillChara )
        v11 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdReady;
      std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
        &this->cmdCheckFunc,
        v11);
      return 0i64;
    }
    else
    {
      this->nowSeq.type.branch.bBranchTrue = 0;
      return 3i64;
    }
  }
}

__int64 __fastcall BattleSystem::CpuSequence::SeqCharaCommand(BattleSystem::CpuSequence *this)
{
  const CpuSequenceData *pCpuData; // rcx
  __int64 iSeqListIndex; // rax
  __int64 v4; // rdx
  __int64 iSeqCommandIndex; // rax
  __int64 v6; // rsi
  int v8; // ebp
  ActorChara *pOwner; // rdi
  CommandCheck *v10; // rax
  CommandCheck *v11; // rax
  int v12; // eax
  ActorChara *v13; // rcx
  CommandCheck *v14; // rax
  CommandData::AiCommandInfo *AiCommandInfoFromIndex; // rax
  int iChargeTime; // ecx
  int iChargeType; // eax
  const CommandData::Setting *(__fastcall *v18)(BattleSystem::CpuSequence *, int); // rdx

  if ( !this->seqCtrl.pOwner )
    return 1i64;
  pCpuData = this->seqCtrl.pCpuData;
  if ( !pCpuData )
    return 1i64;
  iSeqListIndex = this->seqCtrl.iSeqListIndex;
  if ( pCpuData->dataHeader.iSeqSetCount <= (int)iSeqListIndex )
    return 1i64;
  if ( (int)iSeqListIndex < 0 )
    return 1i64;
  v4 = (__int64)&pCpuData->pSeqData[iSeqListIndex];
  if ( !v4 )
    return 1i64;
  iSeqCommandIndex = this->seqCtrl.iSeqCommandIndex;
  if ( *(_DWORD *)v4 <= (int)iSeqCommandIndex )
    return 1i64;
  if ( (int)iSeqCommandIndex < 0 )
    return 1i64;
  v6 = *(_QWORD *)(v4 + 80) + 40 * iSeqCommandIndex;
  if ( !v6 || *(_DWORD *)v6 != 1 )
    return 1i64;
  v8 = 0;
  pOwner = this->pOwner;
  if ( this->pOwner->cmdInfo.entry.pCmdSet )
  {
    if ( !pOwner->bHitStopFreeze )
    {
      v10 = pOwner->GetCharaCommandCheck(this->pOwner);
      if ( CommandCheck::GetCommandSettingFromIndex(v10, *(_DWORD *)(v6 + 4)) == pOwner->cmdInfo.entry.pCmdSet
        || (pOwner = this->pOwner,
            v11 = this->pOwner->GetCharaCommandCheck(this->pOwner),
            CommandCheck::GetCommandSettingFromIndex(v11, *(_DWORD *)(v6 + 8)) == pOwner->cmdInfo.entry.pCmdSet) )
      {
        if ( (*(_BYTE *)(v6 + 16) & 2) != 0 )
          this->seqCtrl.iButtonCharge = 0;
        if ( (*(_BYTE *)(v6 + 16) & 1) == 0 )
          return 2i64;
        this->nowSeq.bNextOK = 1;
      }
    }
  }
  if ( this->nowSeq.xNowFrame.value < this->nowSeq.xMaxFrame.value )
  {
    if ( pOwner->IsClimaxMode(pOwner) )
      v12 = *(_DWORD *)(v6 + 8);
    else
      v12 = *(_DWORD *)(v6 + 4);
    v13 = this->pOwner;
    this->iCmdFuncOption = v12;
    v14 = v13->GetCharaCommandCheck(v13);
    AiCommandInfoFromIndex = CommandCheck::GetAiCommandInfoFromIndex(v14, this->iCmdFuncOption);
    if ( !AiCommandInfoFromIndex
      || (iChargeTime = AiCommandInfoFromIndex->iChargeTime, iChargeTime <= 0)
      || (iChargeType = AiCommandInfoFromIndex->iChargeType, iChargeType == 1)
      && iChargeTime <= this->seqCtrl.iStandCharge
      || iChargeType == 2 && iChargeTime <= this->seqCtrl.iCrouchCharge
      || iChargeType == 3 && iChargeTime <= this->seqCtrl.iButtonCharge )
    {
      v18 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCharaGeneral;
    }
    else
    {
      v18 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCrouchGuard;
    }
    std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
      &this->cmdCheckFunc,
      v18);
    BattleSystem::CpuSequence::CheckActorNowSeqUpdate(this);
    return 0i64;
  }
  else
  {
    LOBYTE(v8) = this->nowSeq.bNextOK;
    return (unsigned int)(v8 + 1);
  }
}

__int64 __fastcall BattleSystem::CpuSequence::SeqCrouch(BattleSystem::CpuSequence *this)
{
  const CpuSequenceData *pCpuData; // rcx
  __int64 iSeqListIndex; // rax
  __int64 v4; // rdx
  __int64 iSeqCommandIndex; // rax
  __int64 v6; // rdx
  int iActorStat; // ecx

  if ( this->nowSeq.bRefSeqData )
  {
    if ( !this->seqCtrl.pOwner )
      return 1i64;
    pCpuData = this->seqCtrl.pCpuData;
    if ( !pCpuData )
      return 1i64;
    iSeqListIndex = this->seqCtrl.iSeqListIndex;
    if ( pCpuData->dataHeader.iSeqSetCount <= (int)iSeqListIndex )
      return 1i64;
    if ( (int)iSeqListIndex < 0 )
      return 1i64;
    v4 = (__int64)&pCpuData->pSeqData[iSeqListIndex];
    if ( !v4 )
      return 1i64;
    iSeqCommandIndex = this->seqCtrl.iSeqCommandIndex;
    if ( *(_DWORD *)v4 <= (int)iSeqCommandIndex )
      return 1i64;
    if ( (int)iSeqCommandIndex < 0 )
      return 1i64;
    v6 = *(_QWORD *)(v4 + 80) + 40 * iSeqCommandIndex;
    if ( !v6 || *(_DWORD *)v6 || *(_DWORD *)(v6 + 4) != 1 )
      return 1i64;
    iActorStat = this->pOwner->iActorStat;
    if ( iActorStat == 1 || iActorStat == 24 )
    {
      if ( (*(_BYTE *)(v6 + 12) & 1) == 0 )
        return 2i64;
      this->nowSeq.bNextOK = 1;
    }
  }
  if ( this->nowSeq.xNowFrame.value >= this->nowSeq.xMaxFrame.value )
    return (unsigned int)this->nowSeq.bNextOK + 1;
  std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
    &this->cmdCheckFunc,
    (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCrouch);
  BattleSystem::CpuSequence::CheckActorNowSeqUpdate(this);
  return 0i64;
}

__int64 __fastcall BattleSystem::CpuSequence::SeqCrouchGuard(BattleSystem::CpuSequence *this)
{
  ActorChara *v2; // rsi
  BattleSystem::GUARD_TYPE guardType; // eax
  int TargetDistanceID; // edi
  const CommandData::Setting *(__fastcall *v6)(BattleSystem::CpuSequence *, int); // rdx
  BattleSystem::CpuSequence *v7; // rcx
  int iCpuLevel; // edx

  v2 = this->pOwner->GetTargetActor(this->pOwner);
  if ( this->nowSeq.xNowFrame.value >= this->nowSeq.xMaxFrame.value )
    return 1i64;
  guardType = this->guardType;
  if ( guardType != SUPER_CANCEL
    && guardType != ADVANCED_CANCEL
    && guardType
    && (TargetDistanceID = BattleSystem::CpuSequence::GetTargetDistanceID(this), this->iCpuLevel >= 10)
    && (this->guardType == GUARD_CRASH || v2->IsAir(v2) && TargetDistanceID <= 1) )
  {
    v6 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdBack;
  }
  else
  {
    v6 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCrouchGuard;
  }
  std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
    &this->cmdCheckFunc,
    v6);
  BattleSystem::CpuSequence::CheckActorNowSeqUpdate(this);
  iCpuLevel = this->iCpuLevel;
  if ( iCpuLevel >= 10 && this->pEnemyShot && (int)BattleSystem::CpuSequence::GetRandInt(v7, iCpuLevel, 0) >= 9 )
    this->bReconsideration = 1;
  return 0i64;
}

__int64 __fastcall BattleSystem::CpuSequence::SeqEvade(BattleSystem::CpuSequence *this)
{
  bool v1; // sf
  ActorChara *pOwner; // rcx

  v1 = this->nowSeq.type.moveTarget.iMoveAct < 0;
  pOwner = this->pOwner;
  if ( v1 )
  {
    if ( pOwner->iActorStat == 28 )
      return pOwner->IsReadyFlag(pOwner) || this->pOwner->bActionEnd;
    std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
      &this->cmdCheckFunc,
      (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
    this->iCmdFuncOption = 31;
  }
  else
  {
    if ( pOwner->iActorStat == 27 )
      return pOwner->IsReadyFlag(pOwner) || this->pOwner->bActionEnd;
    std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
      &this->cmdCheckFunc,
      (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
    this->iCmdFuncOption = 30;
  }
  if ( this->nowSeq.xNowFrame.value >= this->nowSeq.xMaxFrame.value )
    return 1i64;
  BattleSystem::CpuSequence::CheckActorNowSeqUpdate(this);
  return 0i64;
}

__int64 __fastcall BattleSystem::CpuSequence::SeqGuard(BattleSystem::CpuSequence *this)
{
  ActorChara *v2; // rsi
  BattleSystem::GUARD_TYPE guardType; // eax
  const CommandData::Setting *(__fastcall *v5)(BattleSystem::CpuSequence *, int); // rdx
  int TargetDistanceID; // edi
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *p_cmdCheckFunc; // rcx
  BattleSystem::CpuSequence *v8; // rcx
  int iCpuLevel; // edx

  v2 = this->pOwner->GetTargetActor(this->pOwner);
  if ( this->nowSeq.xNowFrame.value >= this->nowSeq.xMaxFrame.value )
    return 1i64;
  guardType = this->guardType;
  switch ( guardType )
  {
    case SUPER_CANCEL:
      goto LABEL_4;
    case ADVANCED_CANCEL:
      v5 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdBack;
      goto LABEL_22;
    case NONE:
      if ( !BattleSystem::CpuSequence::IsChargeSkillChara(this) )
        goto LABEL_24;
      goto LABEL_21;
  }
  TargetDistanceID = BattleSystem::CpuSequence::GetTargetDistanceID(this);
  if ( this->iCpuLevel >= 10 )
  {
    if ( !BattleSystem::CpuSequence::IsChargeSkillChara(this) )
    {
      p_cmdCheckFunc = &this->cmdCheckFunc;
      if ( this->guardType == REVERSAL )
        v5 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCrouchGuard;
      else
        v5 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdBack;
      goto LABEL_23;
    }
    if ( this->guardType == GUARD_CRASH )
      goto LABEL_4;
    if ( !v2->IsAir(v2) )
    {
LABEL_21:
      v5 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCrouchGuard;
      goto LABEL_22;
    }
LABEL_11:
    if ( TargetDistanceID <= 1 )
    {
      v5 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdBack;
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  if ( BattleSystem::CpuSequence::IsChargeSkillChara(this) && !v2->IsAir(v2) )
    goto LABEL_11;
LABEL_4:
  v5 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdBack;
LABEL_22:
  p_cmdCheckFunc = &this->cmdCheckFunc;
LABEL_23:
  std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
    p_cmdCheckFunc,
    v5);
LABEL_24:
  BattleSystem::CpuSequence::CheckActorNowSeqUpdate(this);
  iCpuLevel = this->iCpuLevel;
  if ( iCpuLevel >= 10 && this->pEnemyShot && (int)BattleSystem::CpuSequence::GetRandInt(v8, iCpuLevel, 0) >= 9 )
    this->bReconsideration = 1;
  return 0i64;
}

__int64 __fastcall BattleSystem::CpuSequence::SeqGuardDamage(BattleSystem::CpuSequence *this)
{
  ActorChara *pOwner; // rcx
  ActorChara_vtbl *v3; // rax
  ActorChara *v5; // rsi
  ActorChara *v6; // rcx
  int TargetDistanceID; // er14
  int v8; // ebp
  int v9; // edi
  BattleSystem::CpuSequence *v10; // rcx
  bool v11; // di
  int iCpuLevel; // er8
  const CommandData::Setting *(__fastcall *v13)(BattleSystem::CpuSequence *, int); // rdx
  BattleSystem::BattleController *v14; // rax
  BattleSystem::BattleController *v15; // [rsp+50h] [rbp+8h]

  pOwner = this->pOwner;
  v3 = pOwner->ActorCharaBase::ActorObject::Actor::__vftable;
  if ( (unsigned int)(pOwner->iActorStat - 29) <= 2 )
    return v3->IsReadyFlag(pOwner) || this->pOwner->bActionEnd;
  if ( v3->IsNextStatCommandCheck(pOwner) )
  {
    this->bDamageReversal = 1;
    return 2i64;
  }
  v5 = this->pOwner->GetTargetActor(this->pOwner);
  TargetDistanceID = BattleSystem::CpuSequence::GetTargetDistanceID(this);
  if ( this->iCpuLevel < 8
    || this->pOwner->GetExPower(this->pOwner) < 1000
    || TargetDistanceID > 2
    || !v5->IsLandAttack(v5)
    || v5->vPos.y > 4.0
    || this->pOwner->GetGuardPower(this->pOwner) >= 200 && this->pOwner->GetVitalPercent(this->pOwner) >= 300 )
  {
LABEL_36:
    v11 = 0;
    iCpuLevel = this->iCpuLevel;
    if ( iCpuLevel < 12 )
    {
      if ( iCpuLevel >= 6 )
        v11 = (int)BattleSystem::CpuSequence::GetRandInt((BattleSystem::CpuSequence *)v6, 15, iCpuLevel) >= 12;
    }
    else
    {
      v11 = 1;
    }
    if ( this->pOwner->IsCrouch(this->pOwner) || BattleSystem::CpuSequence::IsChargeSkillChara(this) )
    {
      if ( this->guardType == GUARD_CRASH && v11 )
        goto LABEL_44;
      if ( v5->IsAir(v5) && TargetDistanceID <= 1 )
      {
        v13 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdBack;
        if ( this->guardType != REVERSAL )
        {
LABEL_51:
          std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
            &this->cmdCheckFunc,
            v13);
          if ( !this->nowSeq.bRefSeqData || !this->pOwner->bActionFreeze && !this->pOwner->bHitStopFreeze )
          {
            v14 = BattleSystem::BattleController::instance;
            if ( !BattleSystem::BattleController::instance )
            {
              v15 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
              BattleSystem::BattleController::BattleController(v15);
              BattleSystem::BattleController::instance = v14;
            }
            this->nowSeq.xNowFrame.value += v14->actSystem.xPlaySpeed.value;
            ++this->nowSeq.iSeqCount;
          }
          return 0i64;
        }
      }
    }
    else if ( this->guardType != REVERSAL || !v11 )
    {
LABEL_44:
      v13 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdBack;
      goto LABEL_51;
    }
    v13 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCrouchGuard;
    goto LABEL_51;
  }
  v6 = this->pOwner;
  if ( !this->pOwner->bHitStopFreeze || this->nowSeq.type.guardDamage.iCancelType )
  {
    this->nowSeq.type.guardDamage.iCancelType = 0;
    goto LABEL_36;
  }
  v8 = this->iCpuLevel;
  if ( v6->GetGuardPower(v6) < 200 )
    v8 += 4;
  if ( this->pOwner->GetStageCornerBackDistance(this->pOwner) <= 10.0 )
    v8 += 2;
  v9 = v8 + 6;
  if ( (int)(this->nowSeq.type.moveTarget.iMoveAct
           - ((__int64 (__fastcall *)(ActorChara *))this->pOwner->GetVital)(this->pOwner)) < 50 )
    v9 = v8;
  if ( this->pOwner->GetExPower(this->pOwner) >= 2000 )
    v9 += 4;
  if ( this->pOwner->GetVital(this->pOwner) <= 100 )
    v9 += 3;
  if ( v9 < 20 || (int)BattleSystem::CpuSequence::GetRandInt((BattleSystem::CpuSequence *)v6, 36, v9) < 33 )
  {
    this->nowSeq.type.guardDamage.iCancelType = 1;
    goto LABEL_36;
  }
  if ( TargetDistanceID <= 1
    && (v5->GetVital(v5) <= 150 || (unsigned int)BattleSystem::CpuSequence::GetRandInt(v10, 1, 0)) )
  {
    this->nowSeq.type.guardDamage.iCancelType = 4;
    this->iCmdFuncOption = 35;
  }
  else
  {
    this->nowSeq.type.guardDamage.iCancelType = 2;
    this->iCmdFuncOption = 33;
  }
  std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
    &this->cmdCheckFunc,
    (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
  return 0i64;
}

__int64 __fastcall BattleSystem::CpuSequence::SeqJump(BattleSystem::CpuSequence *this, __int64 a2)
{
  int iActorStat; // ecx
  bool bRefSeqData; // r10
  const CpuSequenceData::SequenceCommandData *NowSequenceCommandData; // rax
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *p_cmdCheckFunc; // rcx
  int iMoveAct; // eax
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *v9; // rcx

  iActorStat = this->pOwner->iActorStat;
  if ( ((iActorStat - 6) & 0xFFFFFFFD) == 0 )
  {
    this->nowSeq.type.jump.iStateCount = 1;
    iMoveAct = this->nowSeq.type.moveTarget.iMoveAct;
    if ( iMoveAct != 3 && iMoveAct != 6 )
    {
$LN23_13:
      std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
        &this->cmdCheckFunc,
        (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
      this->iCmdFuncOption = 8;
      goto LABEL_28;
    }
    v9 = (std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *)this->cmdCheckFunc._Mystorage._Ptrs[7];
    if ( v9 )
    {
      LOBYTE(a2) = v9 != &this->cmdCheckFunc;
      ((void (__fastcall *)(std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *, __int64))v9->_Mystorage._Ptrs[0][4].__vftable)(
        v9,
        a2);
      this->cmdCheckFunc._Mystorage._Ptrs[7] = 0i64;
    }
LABEL_27:
    this->iCmdFuncOption = 0;
    goto LABEL_28;
  }
  if ( iActorStat == 10 )
  {
    this->nowSeq.type.jump.iStateCount = 1;
    p_cmdCheckFunc = &this->cmdCheckFunc;
    if ( this->nowSeq.type.moveTarget.iMoveAct != 5 )
    {
LABEL_17:
      std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
        p_cmdCheckFunc,
        (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
      this->iCmdFuncOption = 10;
      goto LABEL_28;
    }
    std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=(p_cmdCheckFunc, a2);
    goto LABEL_27;
  }
  bRefSeqData = this->nowSeq.bRefSeqData;
  if ( bRefSeqData )
  {
    NowSequenceCommandData = BattleSystem::SequenceController::GetNowSequenceCommandData(&this->seqCtrl);
    if ( !NowSequenceCommandData || NowSequenceCommandData->iType )
      return 1i64;
    if ( this->nowSeq.xNowFrame.value >= this->nowSeq.xMaxFrame.value )
      return 2i64;
    if ( this->nowSeq.type.jump.iStateCount )
    {
      if ( (NowSequenceCommandData->type.key.iFrame & 1) == 0 )
        return 2i64;
      this->nowSeq.bNextOK = 1;
    }
  }
  if ( this->nowSeq.xNowFrame.value >= this->nowSeq.xMaxFrame.value )
    return (unsigned int)this->nowSeq.bNextOK + 1;
  if ( !this->nowSeq.type.jump.iStateCount )
  {
    switch ( this->nowSeq.type.moveTarget.iMoveAct )
    {
      case 0:
      case 3:
        goto $LN23_13;
      case 2:
      case 5:
        p_cmdCheckFunc = &this->cmdCheckFunc;
        goto LABEL_17;
      case 6:
      case 8:
        std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
          &this->cmdCheckFunc,
          (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
        this->iCmdFuncOption = 11;
        goto LABEL_28;
      default:
        return 1i64;
    }
  }
  if ( !bRefSeqData )
    return 1i64;
LABEL_28:
  BattleSystem::CpuSequence::CheckActorNowSeqUpdate(this);
  return 0i64;
}

__int64 __fastcall BattleSystem::CpuSequence::SeqKeyInput(BattleSystem::CpuSequence *this)
{
  const CpuSequenceData *pCpuData; // rcx
  __int64 iSeqListIndex; // rax
  __int64 v4; // r8
  __int64 iSeqCommandIndex; // rax
  __int64 v6; // r9
  int v7; // er8

  if ( !this->seqCtrl.pOwner )
    return 1i64;
  pCpuData = this->seqCtrl.pCpuData;
  if ( !pCpuData )
    return 1i64;
  iSeqListIndex = this->seqCtrl.iSeqListIndex;
  if ( pCpuData->dataHeader.iSeqSetCount <= (int)iSeqListIndex )
    return 1i64;
  if ( (int)iSeqListIndex < 0 )
    return 1i64;
  v4 = (__int64)&pCpuData->pSeqData[iSeqListIndex];
  if ( !v4 )
    return 1i64;
  iSeqCommandIndex = this->seqCtrl.iSeqCommandIndex;
  if ( *(_DWORD *)v4 <= (int)iSeqCommandIndex )
    return 1i64;
  if ( (int)iSeqCommandIndex < 0 )
    return 1i64;
  v6 = *(_QWORD *)(v4 + 80) + 40 * iSeqCommandIndex;
  if ( !v6 || *(_DWORD *)v6 != 3 )
    return 1i64;
  v7 = 0;
  if ( (*(_BYTE *)(v6 + 16) & 8) != 0 )
    this->seqCtrl.iButtonCharge = 0;
  if ( (*(_BYTE *)(v6 + 16) & 4) != 0 )
  {
    if ( this->pOwner->iActNo != this->nowSeq.type.moveTarget.iMoveAct )
      return 2i64;
    this->nowSeq.bNextOK = 0;
  }
  else
  {
    this->nowSeq.bNextOK = 1;
  }
  if ( this->nowSeq.xNowFrame.value < this->nowSeq.xMaxFrame.value )
  {
    BattleSystem::CpuSequence::CheckActorNowSeqUpdate(this);
    return 0i64;
  }
  else
  {
    LOBYTE(v7) = this->nowSeq.bNextOK;
    return (unsigned int)(v7 + 1);
  }
}

__int64 __fastcall BattleSystem::CpuSequence::SeqMoveTarget(BattleSystem::CpuSequence *this)
{
  BattleSystem::CpuSequence *v2; // rcx
  double v3; // xmm0_8
  int iCpuLevel; // er8
  float v5; // xmm6_4
  BattleSystem::GUARD_TYPE guardType; // eax
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *p_cmdCheckFunc; // rcx

  v3 = ((double (__fastcall *)(ActorChara *))this->pOwner->GetRivalDistance)(this->pOwner);
  iCpuLevel = this->iCpuLevel;
  v5 = *(float *)&v3 - this->nowSeq.type.moveTarget.fEndDist;
  if ( iCpuLevel >= 12 )
  {
    guardType = this->guardType;
    if ( guardType > NONE )
    {
      if ( guardType <= GUARD_CRASH )
      {
        if ( (unsigned int)BattleSystem::CpuSequence::GetRandInt(v2, 18, iCpuLevel) == 16 )
        {
          BattleSystem::CpuSequence::RequestGuard(this, 0);
          return 2i64;
        }
      }
      else if ( guardType == REVERSAL && (unsigned int)BattleSystem::CpuSequence::GetRandInt(v2, 18, iCpuLevel) == 16 )
      {
        BattleSystem::CpuSequence::RequestCrouchGuard(this, 0);
        return 2i64;
      }
    }
  }
  if ( this->nowSeq.xNowFrame.value >= this->nowSeq.xMaxFrame.value )
    return 1i64;
  if ( v5 > 2.0 )
  {
    if ( (this->pOwner->bsCollisionFlag._Array[0] & 0x1000) == 0 )
    {
      p_cmdCheckFunc = &this->cmdCheckFunc;
      if ( this->nowSeq.type.moveTarget.iMoveAct )
        std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
          p_cmdCheckFunc,
          (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdDash);
      else
        std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
          p_cmdCheckFunc,
          (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdFront);
      BattleSystem::CpuSequence::CheckActorNowSeqUpdate(this);
      return 0i64;
    }
    return 1i64;
  }
  if ( v5 >= -2.0 )
    return 1i64;
  if ( this->nowSeq.type.moveTarget.iMoveAct )
    this->nowSeq.type.moveTarget.iMoveAct = 0;
  std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
    &this->cmdCheckFunc,
    (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdBack);
  BattleSystem::CpuSequence::CheckActorNowSeqUpdate(this);
  return 0i64;
}

__int64 __fastcall BattleSystem::CpuSequence::SeqNormalThrow(BattleSystem::CpuSequence *this)
{
  CommandCheck *v2; // rdi
  __int64 v3; // rax
  CommandCheck *v4; // rdi
  const CommandData::Setting *pCmdSet; // rdx

  if ( this->nowSeq.type.moveTarget.iMoveAct < 0 )
  {
    this->iCmdFuncOption = 41;
    v4 = this->pOwner->GetCommonCommandCheck(this->pOwner);
    if ( v4->pCmdDat
      && v4->pCmdDat->CheckFileID((CharaFileBase *)v4->pCmdDat)
      && v4->pCmdDat->dataHeader.iCommandCount > 41 )
    {
      v3 = (__int64)&v4->pCmdDat->pSetting[41];
      goto LABEL_11;
    }
  }
  else
  {
    this->iCmdFuncOption = 40;
    v2 = this->pOwner->GetCommonCommandCheck(this->pOwner);
    if ( v2->pCmdDat
      && v2->pCmdDat->CheckFileID((CharaFileBase *)v2->pCmdDat)
      && v2->pCmdDat->dataHeader.iCommandCount > 40 )
    {
      v3 = (__int64)&v2->pCmdDat->pSetting[40];
      goto LABEL_11;
    }
  }
  v3 = 0i64;
LABEL_11:
  pCmdSet = this->pOwner->cmdInfo.entry.pCmdSet;
  if ( pCmdSet && (const CommandData::Setting *)v3 == pCmdSet && !this->pOwner->bHitStopFreeze )
    return 1i64;
  std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
    &this->cmdCheckFunc,
    (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
  if ( this->nowSeq.xNowFrame.value >= this->nowSeq.xMaxFrame.value )
    return 1i64;
  BattleSystem::CpuSequence::CheckActorNowSeqUpdate(this);
  return 0i64;
}

__int64 __fastcall BattleSystem::CpuSequence::SeqReady(BattleSystem::CpuSequence *this)
{
  const CpuSequenceData *pCpuData; // rcx
  __int64 iSeqListIndex; // rax
  __int64 v4; // rdx
  __int64 iSeqCommandIndex; // rax
  __int64 v6; // rdi
  unsigned __int8 IsChargeSkillChara; // al
  const CommandData::Setting *(__fastcall *v9)(BattleSystem::CpuSequence *, int); // rdx

  if ( this->nowSeq.bRefSeqData )
  {
    if ( !this->seqCtrl.pOwner )
      return 1i64;
    pCpuData = this->seqCtrl.pCpuData;
    if ( !pCpuData )
      return 1i64;
    iSeqListIndex = this->seqCtrl.iSeqListIndex;
    if ( pCpuData->dataHeader.iSeqSetCount <= (int)iSeqListIndex )
      return 1i64;
    if ( (int)iSeqListIndex < 0 )
      return 1i64;
    v4 = (__int64)&pCpuData->pSeqData[iSeqListIndex];
    if ( !v4 )
      return 1i64;
    iSeqCommandIndex = this->seqCtrl.iSeqCommandIndex;
    if ( *(_DWORD *)v4 <= (int)iSeqCommandIndex )
      return 1i64;
    if ( (int)iSeqCommandIndex < 0 )
      return 1i64;
    v6 = *(_QWORD *)(v4 + 80) + 40 * iSeqCommandIndex;
    if ( !v6 || *(_DWORD *)v6 || *(_DWORD *)(v6 + 4) )
      return 1i64;
    if ( this->pOwner->IsReady(this->pOwner) || (unsigned int)(this->pOwner->iActorStat - 23) <= 1 )
    {
      if ( (*(_BYTE *)(v6 + 12) & 1) == 0 )
        return 2i64;
      this->nowSeq.bNextOK = 1;
    }
  }
  if ( this->nowSeq.xNowFrame.value >= this->nowSeq.xMaxFrame.value )
    return (unsigned int)this->nowSeq.bNextOK + 1;
  IsChargeSkillChara = BattleSystem::CpuSequence::IsChargeSkillChara(this);
  v9 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCrouch;
  if ( !IsChargeSkillChara )
    v9 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdReady;
  std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
    &this->cmdCheckFunc,
    v9);
  BattleSystem::CpuSequence::CheckActorNowSeqUpdate(this);
  return 0i64;
}

__int64 __fastcall BattleSystem::CpuSequence::SeqTrainingAction(BattleSystem::CpuSequence *this)
{
  __int64 result; // rax
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *p_cmdCheckFunc; // rcx
  const CommandData::Setting *(__fastcall *v4)(BattleSystem::CpuSequence *, int); // rdx

  if ( this->nowSeq.type.trainingAct.bDownEvade && this->pOwner->IsValidEvadeCommand(this->pOwner) )
  {
    std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
      &this->cmdCheckFunc,
      (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
    result = 0i64;
    this->iCmdFuncOption = 36;
    return result;
  }
  if ( this->nowSeq.type.trainingAct.bThrowEscape && this->pOwner->IsValidThrowEscapeCommand(this->pOwner) )
  {
    std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
      &this->cmdCheckFunc,
      (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
    result = 0i64;
    this->iCmdFuncOption = 37;
    return result;
  }
  if ( !BattleSystem::CpuSequence::IsTrainingGuardActionCheck(this) )
  {
    switch ( this->nowSeq.type.moveTarget.iMoveAct )
    {
      case 1:
        v4 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCrouch;
        break;
      case 2:
        v4 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdFront;
        break;
      case 3:
        v4 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdBack;
        break;
      case 4:
        v4 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdDash;
        break;
      default:
        p_cmdCheckFunc = &this->cmdCheckFunc;
        if ( this->nowSeq.type.moveTarget.iMoveAct == 5 )
        {
          std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
            p_cmdCheckFunc,
            (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
          this->iCmdFuncOption = 7;
LABEL_21:
          BattleSystem::CpuSequence::SeqParam::UpdateFrame(&this->nowSeq);
          return 0i64;
        }
        v4 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdReady;
LABEL_20:
        std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
          p_cmdCheckFunc,
          v4);
        goto LABEL_21;
    }
    p_cmdCheckFunc = &this->cmdCheckFunc;
    goto LABEL_20;
  }
  return 0i64;
}

__int64 __fastcall BattleSystem::CpuSequence::SeqTrainingJump(BattleSystem::CpuSequence *this)
{
  __int64 result; // rax
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *p_cmdCheckFunc; // rcx

  if ( this->nowSeq.type.trainingAct.bDownEvade && this->pOwner->IsValidEvadeCommand(this->pOwner) )
  {
    std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
      &this->cmdCheckFunc,
      (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
    result = 0i64;
    this->iCmdFuncOption = 36;
  }
  else if ( this->nowSeq.type.trainingAct.bThrowEscape && this->pOwner->IsValidThrowEscapeCommand(this->pOwner) )
  {
    std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
      &this->cmdCheckFunc,
      (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
    result = 0i64;
    this->iCmdFuncOption = 37;
  }
  else if ( BattleSystem::CpuSequence::IsTrainingGuardActionCheck(this) )
  {
    return 0i64;
  }
  else
  {
    switch ( this->pOwner->iActorStat )
    {
      case 6:
      case 8:
        p_cmdCheckFunc = &this->cmdCheckFunc;
        if ( (unsigned int)(this->nowSeq.type.moveTarget.iMoveAct - 9) <= 1 )
          goto LABEL_11;
        std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
          p_cmdCheckFunc,
          (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
        result = 0i64;
        this->iCmdFuncOption = 8;
        break;
      case 7:
      case 9:
        p_cmdCheckFunc = &this->cmdCheckFunc;
        if ( (unsigned int)(this->nowSeq.type.moveTarget.iMoveAct - 13) <= 1 )
          goto LABEL_11;
        std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
          p_cmdCheckFunc,
          (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
        result = 0i64;
        this->iCmdFuncOption = 9;
        break;
      case 0xA:
        p_cmdCheckFunc = &this->cmdCheckFunc;
        if ( this->nowSeq.type.moveTarget.iMoveAct == 7 )
        {
LABEL_11:
          std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=(
            p_cmdCheckFunc,
            0x140000000i64);
          result = 0i64;
          this->iCmdFuncOption = 0;
        }
        else
        {
          std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
            p_cmdCheckFunc,
            (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
          result = 0i64;
          this->iCmdFuncOption = 10;
        }
        break;
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
        std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
          &this->cmdCheckFunc,
          (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdReady);
        result = 0i64;
        this->nowSeq.xNowFrame.value = 0;
        break;
      default:
        if ( this->nowSeq.xNowFrame.value >= this->nowSeq.xMaxFrame.value )
        {
          switch ( this->nowSeq.type.moveTarget.iMoveAct )
          {
            case 6:
            case 7:
              std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
                &this->cmdCheckFunc,
                (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
              this->iCmdFuncOption = 10;
              break;
            case 8:
            case 9:
              std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
                &this->cmdCheckFunc,
                (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
              this->iCmdFuncOption = 8;
              break;
            case 0xA:
            case 0xB:
              std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
                &this->cmdCheckFunc,
                (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
              this->iCmdFuncOption = 11;
              break;
            case 0xC:
            case 0xD:
              std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
                &this->cmdCheckFunc,
                (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
              this->iCmdFuncOption = 9;
              break;
            case 0xE:
            case 0xF:
              std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
                &this->cmdCheckFunc,
                (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
              this->iCmdFuncOption = 12;
              break;
            default:
              std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
                &this->cmdCheckFunc,
                (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdReady);
              break;
          }
        }
        BattleSystem::CpuSequence::SeqParam::UpdateFrame(&this->nowSeq);
        return 0i64;
    }
  }
  return result;
}

__int64 __fastcall BattleSystem::CpuSequence::SeqTutorialBackJumpAttack(BattleSystem::CpuSequence *this)
{
  ActorChara *v2; // rax
  __int64 result; // rax
  ActorChara *pOwner; // rcx
  CommandCheck *v5; // rax
  CommandData::Setting *CommandSettingFromIndex; // rax
  const CommandData::Setting *pCmdSet; // rdx

  v2 = this->pOwner->GetTargetActor(this->pOwner);
  if ( !v2->IsDamaged(v2) )
  {
    if ( this->nowSeq.type.trainingAct.bDownEvade && this->pOwner->IsValidEvadeCommand(this->pOwner) )
    {
      std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
        &this->cmdCheckFunc,
        (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
      result = 0i64;
      this->iCmdFuncOption = 36;
      return result;
    }
    if ( !BattleSystem::CpuSequence::IsTrainingGuardActionCheck(this) )
    {
      if ( this->pOwner->IsDamaged(this->pOwner) )
      {
        this->nowSeq.type.guardDamage.iTargetStat = 0;
        this->nowSeq.xNowFrame.value = 1966080;
      }
      if ( this->nowSeq.xNowFrame.value >= this->nowSeq.xMaxFrame.value )
      {
        if ( this->nowSeq.type.guardDamage.iTargetStat )
        {
          pOwner = this->pOwner;
          if ( this->pOwner->iCharNo != 12
            || (this->iCmdFuncOption = 22,
                v5 = pOwner->GetCharaCommandCheck(pOwner),
                CommandSettingFromIndex = CommandCheck::GetCommandSettingFromIndex(v5, 22),
                (pCmdSet = this->pOwner->cmdInfo.entry.pCmdSet) != 0i64)
            && CommandSettingFromIndex == pCmdSet
            && !this->pOwner->bHitStopFreeze )
          {
            this->nowSeq.xNowFrame.value = 0;
            this->nowSeq.type.guardDamage.iTargetStat = 0;
          }
          else
          {
            std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
              &this->cmdCheckFunc,
              (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCharaGeneral);
          }
        }
        else if ( this->pOwner->iActorStat == 12 )
        {
          this->nowSeq.type.guardDamage.iTargetStat = 1;
        }
        else
        {
          std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
            &this->cmdCheckFunc,
            (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
          this->iCmdFuncOption = 9;
        }
      }
      BattleSystem::CpuSequence::SeqParam::UpdateFrame(&this->nowSeq);
    }
  }
  return 0i64;
}

__int64 __fastcall BattleSystem::CpuSequence::SeqTutorialNearAttack(BattleSystem::CpuSequence *this)
{
  float v1; // xmm0_4
  ActorChara *v3; // rax
  __int64 result; // rax
  int iMoveAct; // edx
  float v6; // xmm1_4
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  ActorChara *pOwner; // rcx
  CommandCheck *v12; // rax
  CommandData::Setting *CommandSettingFromIndex; // rax
  const CommandData::Setting *pCmdSet; // rdx
  CommandData::Setting *(__fastcall *v15)(BattleSystem::CpuSequence *, int); // rdx
  BattleSystem::CpuSequence *commandID; // [rsp+30h] [rbp+8h] BYREF

  v3 = this->pOwner->GetTargetActor(this->pOwner);
  if ( v3->IsDamaged(v3) )
    return 0i64;
  if ( this->nowSeq.type.trainingAct.bDownEvade && this->pOwner->IsValidEvadeCommand(this->pOwner) )
  {
    std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
      &this->cmdCheckFunc,
      (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
    result = 0i64;
    this->iCmdFuncOption = 36;
    return result;
  }
  if ( BattleSystem::CpuSequence::IsTrainingThrowEscapeCheck(this)
    || BattleSystem::CpuSequence::IsTrainingGuardActionCheck(this) )
  {
    return 0i64;
  }
  if ( this->nowSeq.xNowFrame.value >= this->nowSeq.xMaxFrame.value )
  {
    this->pOwner->GetRivalDistance(this->pOwner);
    iMoveAct = this->nowSeq.type.moveTarget.iMoveAct;
    if ( iMoveAct == 16 || this->nowSeq.type.moveTarget.iMoveAct == 17 )
    {
      v6 = FLOAT_15_0;
    }
    else if ( this->nowSeq.type.moveTarget.iMoveAct == 20 )
    {
      v6 = *(float *)&FLOAT_1_0;
    }
    else
    {
      v6 = *(float *)&FLOAT_8_0;
    }
    if ( v1 > v6 && (this->pOwner->bsCollisionFlag._Array[0] & 0x1000) == 0 )
    {
      std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
        &this->cmdCheckFunc,
        (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdFront);
      return 0i64;
    }
    commandID = this;
    v7 = iMoveAct - 16;
    if ( !v7 )
    {
      this->iCmdFuncOption = 28;
      v10 = 28;
      goto LABEL_29;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      this->iCmdFuncOption = 23;
      v10 = 23;
      goto LABEL_29;
    }
    v9 = v8 - 2;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        this->iCmdFuncOption = 40;
        v10 = 40;
LABEL_29:
        if ( lambda_f33f72aeb5b96feec66655d40a5aff0e_::operator()((__int64 **)&commandID, v10) )
        {
LABEL_30:
          this->nowSeq.xNowFrame.value = 0;
          goto LABEL_33;
        }
        v15 = BattleSystem::CmdCommonGeneral;
LABEL_32:
        std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
          &this->cmdCheckFunc,
          (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))v15);
      }
    }
    else
    {
      pOwner = this->pOwner;
      if ( this->pOwner->iCharNo == 12 )
      {
        this->iCmdFuncOption = 20;
        v12 = pOwner->GetCharaCommandCheck(pOwner);
        CommandSettingFromIndex = CommandCheck::GetCommandSettingFromIndex(v12, 20);
        pCmdSet = this->pOwner->cmdInfo.entry.pCmdSet;
        if ( pCmdSet && CommandSettingFromIndex == pCmdSet && !this->pOwner->bHitStopFreeze )
          goto LABEL_30;
        v15 = BattleSystem::CmdCharaGeneral;
        goto LABEL_32;
      }
    }
  }
LABEL_33:
  BattleSystem::CpuSequence::SeqParam::UpdateFrame(&this->nowSeq);
  return 0i64;
}

void __fastcall BattleSystem::CpuSequence::SetComboMissionCpu(
        BattleSystem::CpuSequence *this,
        const ComboMissionData::ComboMissionSettingData *setting)
{
  char iMoveSetting; // al
  int v5; // eax
  bool v6; // zf

  BattleSystem::CpuSequence::CancelTrainingCpu(this, (_BOOL8)setting);
  iMoveSetting = setting->iMoveSetting;
  if ( iMoveSetting < 6 )
  {
    this->reqSeq.iType = REVERSAL|0x10;
    goto LABEL_12;
  }
  if ( iMoveSetting < 16 )
  {
    this->reqSeq.iType = 20;
    if ( (unsigned __int8)(setting->iMoveSetting - 6) <= 1u )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( iMoveSetting <= 17 )
    goto LABEL_9;
  if ( iMoveSetting == 18 )
  {
    this->reqSeq.iType = THROW_ESCAPE|0x10;
    goto LABEL_10;
  }
  if ( (unsigned __int8)(iMoveSetting - 19) <= 1u )
LABEL_9:
    this->reqSeq.iType = CLIMAX_CANCEL|0x10;
LABEL_10:
  this->reqSeq.xNowFrame.value = 3932160;
LABEL_11:
  this->reqSeq.xMaxFrame.value = 3932160;
LABEL_12:
  this->reqSeq.type.moveTarget.iMoveAct = setting->iMoveSetting;
  v5 = 0;
  v6 = setting->iGuardSetting == 3;
  this->reqSeq.type.trainingAct.bDownEvade = 0;
  if ( v6 )
    v5 = 4;
  this->reqSeq.type.jump.iStateCount = v5;
  v6 = setting->iThrowEscape == 1;
  this->bTrainingCPU = 1;
  this->reqSeq.type.trainingAct.bThrowEscape = v6;
}

void __fastcall BattleSystem::CpuSequence::SetCpuActor(BattleSystem::CpuSequence *this, ActorChara *pActor)
{
  int v4; // eax
  ActorChara *pOwner; // rcx
  __int64 iActNo; // rdx
  __int64 v7; // rax
  ActorChara *v8; // rcx
  int v9; // eax
  ActorChara *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  float *p_fMovY; // rdi
  int i; // esi
  int v15; // eax
  ActorChara *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  float JumpMoveFrame; // xmm0_4
  int v21; // eax
  ActorChara *v22; // rsi
  const CharaAttackData::AttackData *v23; // rdi
  unsigned int v24; // er14
  const CharaActionData::ActionLineFrame *v25; // rax
  const CharaActionData::ActionLineFrame *v26; // r15
  int v27; // eax
  ActorChara *v28; // rsi
  const CharaAttackData::AttackData *v29; // rdi
  unsigned int v30; // er14
  const CharaActionData::ActionLineFrame *v31; // rax
  const CharaActionData::ActionLineFrame *v32; // r15
  const CpuSequenceData *pSeqData; // rdx
  ActorChara *v34; // rcx
  __int128 movY; // [rsp+20h] [rbp-30h]
  __int128 movYa; // [rsp+20h] [rbp-30h]
  __int128 movYb; // [rsp+20h] [rbp-30h]
  __int128 movY_4; // [rsp+24h] [rbp-2Ch]
  __int128 movY_4a; // [rsp+24h] [rbp-2Ch]
  __int64 addY; // [rsp+30h] [rbp-20h]

  BattleSystem::CpuSequence::DisposeCpuActor(this, (_BOOL8)pActor);
  this->pOwner = pActor;
  if ( pActor )
  {
    v4 = pActor->GetCommonActionID(pActor, 4);
    pOwner = this->pOwner;
    iActNo = (unsigned int)v4;
    DWORD1(movY) = 0;
    if ( this->pOwner )
    {
      if ( v4 < 0 )
        iActNo = (unsigned int)pOwner->iActNo;
      v7 = ((__int64 (__fastcall *)(ActorChara *, __int64, __int64))pOwner->GetActionLine)(pOwner, iActNo, 10i64);
      if ( v7 )
        movY = *(_OWORD *)(*(_QWORD *)(v7 + 8) + 4i64);
    }
    v8 = this->pOwner;
    this->fFrontMoveX = *((float *)&movY + 1);
    v9 = v8->GetCommonActionID(v8, 5);
    v10 = this->pOwner;
    v11 = (unsigned int)v9;
    DWORD1(movYa) = 0;
    if ( this->pOwner )
    {
      if ( v9 < 0 )
        v11 = (unsigned int)v10->iActNo;
      v12 = ((__int64 (__fastcall *)(ActorChara *, __int64, __int64))v10->GetActionLine)(v10, v11, 10i64);
      if ( v12 )
        movYa = *(_OWORD *)(*(_QWORD *)(v12 + 8) + 4i64);
    }
    p_fMovY = &this->jumpInfo[0].fMovY;
    this->fBackMoveX = *((float *)&movYa + 1);
    for ( i = 0; i < 10; ++i )
    {
      v15 = this->pOwner->GetCommonActionID(this->pOwner, i + 14);
      v16 = this->pOwner;
      v17 = (unsigned int)v15;
      *(_QWORD *)((char *)&movYb + 4) = 0i64;
      LODWORD(addY) = 0;
      if ( this->pOwner )
      {
        if ( v15 < 0 )
          v17 = (unsigned int)v16->iActNo;
        v18 = ((__int64 (__fastcall *)(ActorChara *, __int64, __int64))v16->GetActionLine)(v16, v17, 10i64);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 8);
          movYb = *(_OWORD *)(v19 + 4);
          addY = *(_QWORD *)(v19 + 20);
        }
      }
      *(_QWORD *)(p_fMovY - 1) = *(_QWORD *)((char *)&movYb + 4);
      *((_DWORD *)p_fMovY + 1) = addY;
      JumpMoveFrame = BattleSystem::GetJumpMoveFrame(*((float *)&movYb + 2), *(float *)&addY, 0.0);
      p_fMovY[3] = JumpMoveFrame;
      p_fMovY[2] = JumpMoveFrame * *((float *)&movYb + 1);
      p_fMovY += 5;
    }
    v21 = this->pOwner->GetCommonActionID(this->pOwner, 210);
    v22 = this->pOwner;
    v23 = 0i64;
    v24 = v21;
    LODWORD(movY_4) = 0;
    DWORD2(movY_4) = 0;
    if ( this->pOwner )
    {
      if ( v21 < 0 )
        v24 = v22->iActNo;
      v25 = v22->GetAttackKeyFrame(v22, v24, 0xFFFFFFFFi64);
      v26 = v25;
      if ( v25 )
      {
        v22->GetRealActionFrame(v22, v24, v25->iFrame);
        movY_4 = *(_OWORD *)&v26->move.fColX;
        v23 = v22->GetAttackData(v22, v26->iBase[0]);
      }
    }
    if ( v23 && v23->iDataType == 2 )
      this->fNormalThrowRange[0] = *(float *)&movY_4 + *((float *)&movY_4 + 2);
    v27 = this->pOwner->GetCommonActionID(this->pOwner, 212);
    v28 = this->pOwner;
    v29 = 0i64;
    LODWORD(movY_4a) = 0;
    v30 = v27;
    DWORD2(movY_4a) = 0;
    if ( this->pOwner )
    {
      if ( v27 < 0 )
        v30 = v28->iActNo;
      v31 = v28->GetAttackKeyFrame(v28, v30, 0xFFFFFFFFi64);
      v32 = v31;
      if ( v31 )
      {
        v28->GetRealActionFrame(v28, v30, v31->iFrame);
        movY_4a = *(_OWORD *)&v32->move.fColX;
        v29 = v28->GetAttackData(v28, v32->iBase[0]);
      }
    }
    if ( v29 && v29->iDataType == 2 )
      this->fNormalThrowRange[1] = *(float *)&movY_4a + *((float *)&movY_4a + 2);
    this->pSeqData = this->pOwner->pCpuSeqData;
  }
  pSeqData = this->pSeqData;
  v34 = this->pOwner;
  this->seqCtrl.seqCandidateList._Mypair._Myval2._Mylast = this->seqCtrl.seqCandidateList._Mypair._Myval2._Myfirst;
  *(_QWORD *)&this->seqCtrl.iSeqListIndex = -1i64;
  *(_QWORD *)&this->seqCtrl.iStandCharge = 0i64;
  this->seqCtrl.iButtonCharge = 0;
  this->seqCtrl.pOwner = v34;
  this->seqCtrl.pCpuData = pSeqData;
}

void __fastcall BattleSystem::CpuSequence::SetSequenceTestPlay(BattleSystem::CpuSequence *this, bool flag)
{
  if ( this->bSequenceTestPlay )
  {
    this->bSequenceTestPlay = 0;
    *(_QWORD *)&this->nowSeq.iType = 0i64;
    *(_QWORD *)&this->nowSeq.bLocked = 0i64;
    *(_OWORD *)&this->nowSeq.xMaxFrame.value = 0ui64;
    *(_QWORD *)&this->nowSeq.type.trainingAct.bDownEvade = 0i64;
    *(_QWORD *)&this->reqSeq.iSeqCount = 0i64;
    *(_QWORD *)&this->reqSeq.xNowFrame.value = 0i64;
    this->reqSeq.type = 0ui64;
    *(_QWORD *)&this->seqCtrl.iSeqListIndex = -1i64;
  }
}

void __fastcall BattleSystem::CpuSequence::SetSequenceWaitFrame(BattleSystem::CpuSequence *this)
{
  __int64 iCpuLevel; // rax
  int v3; // edx
  __int64 iDifficulty; // rax
  int RandInt; // eax
  int min[4]; // [rsp+20h] [rbp-78h]
  int v7; // [rsp+30h] [rbp-68h]
  int max[4]; // [rsp+40h] [rbp-58h]
  __m128i si128; // [rsp+50h] [rbp-48h]
  __m128i v10; // [rsp+60h] [rbp-38h]
  __m128i v11; // [rsp+70h] [rbp-28h]

  iCpuLevel = this->iCpuLevel;
  *(__m128i *)max = _mm_load_si128((const __m128i *)&_xmm);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v10 = _mm_load_si128((const __m128i *)&_xmm);
  v11 = _mm_load_si128((const __m128i *)&_xmm);
  v3 = max[iCpuLevel];
  iDifficulty = this->iDifficulty;
  *(__m128i *)min = _mm_load_si128((const __m128i *)&_xmm);
  v7 = 0;
  RandInt = min[iDifficulty];
  if ( v3 > RandInt )
    RandInt = BattleSystem::CpuSequence::GetRandInt(this, v3, RandInt);
  this->xSeqWaitFrame.value = RandInt << 16;
}

void __fastcall BattleSystem::CpuSequence::SetTrainingCpu(
        BattleSystem::CpuSequence *this,
        const TrainingSetting *training)
{
  TrainingSetting::ACTION m_iAction; // eax
  bool v5; // zf

  BattleSystem::CpuSequence::CancelTrainingCpu(this, (_BOOL8)training);
  m_iAction = training->m_iAction;
  if ( m_iAction < PLAYER )
  {
    if ( m_iAction >= JUMPV_N )
    {
      this->reqSeq.iType = 20;
      if ( (unsigned int)(training->m_iAction - 6) > 1 )
        this->reqSeq.xMaxFrame.value = 3932160;
    }
    else
    {
      this->reqSeq.iType = REVERSAL|0x10;
    }
    this->reqSeq.type.moveTarget.iMoveAct = training->m_iAction;
    if ( training->m_iAction <= (unsigned int)CROUCH )
      this->reqSeq.type.jump.iStateCount = training->m_iGuard;
    else
      this->reqSeq.type.jump.iStateCount = 0;
    v5 = training->m_iUkemi == 0;
    this->reqSeq.type.trainingAct.bThrowEscape = 0;
    this->bTrainingCPU = 1;
    this->reqSeq.type.trainingAct.bDownEvade = !v5;
  }
}

void __fastcall BattleSystem::CpuSequence::Update(BattleSystem::CpuSequence *this)
{
  BattleSystem::BattleController *v2; // rdi
  BattleSystem::BattleController *v3; // rax
  __int64 v4; // rdx
  BattleSystem::BattleController *v5; // rax
  ActorChara *pOwner; // rcx
  ActorChara_vtbl *v7; // rax
  __int64 v8; // rdx
  int iSequenceTestIndex; // eax
  const CpuSequenceData *pCpuData; // rcx
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *v11; // rcx
  int v12; // eax
  bool v13; // di
  int iSeqCount; // edi
  unsigned __int8 IsChargeSkillChara; // al
  const CommandData::Setting *(__fastcall *v16)(BattleSystem::CpuSequence *, int); // rdx
  BattleSystem::BattleController *v17; // [rsp+50h] [rbp+8h]
  BattleSystem::BattleController *v18; // [rsp+50h] [rbp+8h]

  if ( !this->pOwner )
    return;
  if ( this->bTrainingCPU )
  {
    BattleSystem::CpuSequence::UpdateTrainingMove(this);
    return;
  }
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v17 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v17);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  BattleSystem::CpuSequence::DecisionCpuLevel(this);
  BattleSystem::SequenceController::CheckChargeCountUp(&this->seqCtrl);
  this->pEnemyShot = BattleSystem::CpuSequence::CheckShot(this);
  this->guardType = BattleSystem::CpuSequence::CheckGuardType(this);
  v5 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v18 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v18);
    BattleSystem::BattleController::instance = v5;
  }
  this->xSeqWaitFrame.value -= v5->actSystem.xPlaySpeed.value;
  if ( this->xSeqWaitFrame.value < 0 )
    this->xSeqWaitFrame.value = 0;
  this->bDamageReversal = 0;
  if ( v2->roundPhase != DIE )
  {
    std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=(&this->cmdCheckFunc, v4);
    this->iCmdFuncOption = 0;
    goto LABEL_92;
  }
  pOwner = this->pOwner;
  v7 = this->pOwner->__vftable;
  if ( this->bSequenceTestMode )
  {
    if ( v7->IsGuardDamaged(pOwner) || this->pOwner->IsDamaged(this->pOwner) )
      BattleSystem::CpuSequence::SetSequenceTestPlay(this, v8);
    if ( this->bSequenceTestPlay && this->nowSeq.iType == NONE )
    {
      iSequenceTestIndex = this->iSequenceTestIndex;
      if ( iSequenceTestIndex >= 0 )
      {
        if ( this->seqCtrl.pOwner )
        {
          pCpuData = this->seqCtrl.pCpuData;
          if ( pCpuData )
          {
            if ( pCpuData->dataHeader.iSeqSetCount > iSequenceTestIndex )
            {
              this->seqCtrl.iSeqListIndex = iSequenceTestIndex;
              this->seqCtrl.iSeqCommandIndex = 0;
            }
          }
        }
        BattleSystem::CpuSequence::RequestSeqDataMove(this);
      }
      else
      {
        *(_QWORD *)&this->reqSeq.iType = 0i64;
        *(_QWORD *)&this->reqSeq.bLocked = 0i64;
        *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
        *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
        this->reqSeq.type.guardDamage.iCancelType = 0;
        this->reqSeq.iType = CLIMAX_MOVE_FINISH;
        this->reqSeq.xMaxFrame.value = 327680;
      }
    }
  }
  else
  {
    if ( v7->IsGuardDamaged(pOwner) && this->nowSeq.iType != STUN )
    {
      this->bReconsideration = 0;
      *(_QWORD *)&this->nowSeq.iType = 0i64;
      *(_QWORD *)&this->nowSeq.bLocked = 0i64;
      *(_QWORD *)&this->nowSeq.xMaxFrame.value = 0i64;
      *(_QWORD *)&this->nowSeq.type.guardDamage.iTargetActNo = 0i64;
      this->nowSeq.type.guardDamage.iCancelType = 0;
      *(_QWORD *)&this->seqCtrl.iSeqListIndex = -1i64;
      BattleSystem::CpuSequence::RequestGuardDamage(this);
    }
    if ( this->pOwner->IsDamaged(this->pOwner) && this->nowSeq.iType != SUPER_MOVE_FINISH )
    {
      this->bReconsideration = 0;
      *(_QWORD *)&this->nowSeq.iType = 0i64;
      *(_QWORD *)&this->nowSeq.bLocked = 0i64;
      *(_QWORD *)&this->nowSeq.xMaxFrame.value = 0i64;
      *(_QWORD *)&this->nowSeq.type.guardDamage.iTargetActNo = 0i64;
      this->nowSeq.type.guardDamage.iCancelType = 0;
      *(_QWORD *)&this->seqCtrl.iSeqListIndex = -1i64;
      *(_QWORD *)&this->reqSeq.iType = 0i64;
      *(_QWORD *)&this->reqSeq.bLocked = 0i64;
      *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
      *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
      this->reqSeq.type.guardDamage.iCancelType = 0;
      this->reqSeq.iType = SUPER_MOVE_FINISH;
    }
  }
  while ( 2 )
  {
    v11 = (std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *)this->cmdCheckFunc._Mystorage._Ptrs[7];
    if ( v11 )
    {
      LOBYTE(v8) = v11 != &this->cmdCheckFunc;
      ((void (__fastcall *)(std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *, __int64))v11->_Mystorage._Ptrs[0][4].__vftable)(
        v11,
        v8);
      this->cmdCheckFunc._Mystorage._Ptrs[7] = 0i64;
    }
    this->iCmdFuncOption = 0;
    if ( !this->bSequenceTestMode && !this->xSeqWaitFrame.value )
    {
      if ( this->reqSeq.iType )
        goto LABEL_43;
      if ( this->nowSeq.iType == NONE || this->bReconsideration )
      {
        this->bReconsideration = 0;
        if ( !BattleSystem::CpuSequence::UpdateShotReaction(this) )
        {
          if ( this->reqSeq.iType )
            goto LABEL_43;
          BattleSystem::CpuSequence::UpdateEnemyMoveReaction(this);
          if ( this->reqSeq.iType )
            goto LABEL_43;
          BattleSystem::CpuSequence::UpdateMyGroundReaction(this);
        }
      }
    }
    if ( this->reqSeq.iType == NONE )
      goto LABEL_46;
LABEL_43:
    if ( !this->nowSeq.bLocked )
    {
      *(_OWORD *)&this->nowSeq.iType = *(_OWORD *)&this->reqSeq.iType;
      *(_OWORD *)&this->nowSeq.xMaxFrame.value = *(_OWORD *)&this->reqSeq.xMaxFrame.value;
      this->nowSeq.type.guardDamage.iCancelType = this->reqSeq.type.guardDamage.iCancelType;
    }
    *(_QWORD *)&this->reqSeq.iType = 0i64;
    *(_QWORD *)&this->reqSeq.bLocked = 0i64;
    *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
    *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
    this->reqSeq.type.guardDamage.iCancelType = 0;
LABEL_46:
    switch ( this->nowSeq.iType )
    {
      case 1:
        v12 = BattleSystem::CpuSequence::SeqReady(this);
        goto LABEL_67;
      case 2:
        v12 = BattleSystem::CpuSequence::SeqCrouch(this);
        goto LABEL_67;
      case 3:
        v12 = BattleSystem::CpuSequence::SeqGuard(this);
        goto LABEL_67;
      case 4:
        v12 = BattleSystem::CpuSequence::SeqCrouchGuard(this);
        goto LABEL_67;
      case 5:
        v12 = BattleSystem::CpuSequence::SeqMoveTarget(this);
        goto LABEL_67;
      case 6:
        v12 = BattleSystem::CpuSequence::SeqJump(this, v8);
        goto LABEL_67;
      case 7:
        v12 = BattleSystem::CpuSequence::SeqBackJump(this);
        goto LABEL_67;
      case 8:
        v12 = BattleSystem::CpuSequence::SeqBackStep(this);
        goto LABEL_67;
      case 9:
        v12 = BattleSystem::CpuSequence::SeqEvade(this);
        goto LABEL_67;
      case 0xA:
        v12 = BattleSystem::CpuSequence::SeqGuardDamage(this);
        goto LABEL_67;
      case 0xB:
        if ( this->pOwner->IsNextStatCommandCheck(this->pOwner) )
        {
          this->bDamageReversal = 1;
LABEL_68:
          if ( this->nowSeq.bRefSeqData )
          {
            if ( BattleSystem::SequenceController::SetNextSequenceCommand(&this->seqCtrl, 0) )
            {
LABEL_70:
              BattleSystem::CpuSequence::RequestSeqDataMove(this);
              goto LABEL_74;
            }
            v13 = this->nowSeq.iSeqCount < 1;
            *(_QWORD *)&this->nowSeq.iType = 0i64;
            *(_QWORD *)&this->nowSeq.bLocked = 0i64;
            *(_QWORD *)&this->nowSeq.xMaxFrame.value = 0i64;
            *(_QWORD *)&this->nowSeq.type.guardDamage.iTargetActNo = 0i64;
            this->nowSeq.type.guardDamage.iCancelType = 0;
            *(_QWORD *)&this->seqCtrl.iSeqListIndex = -1i64;
            BattleSystem::CpuSequence::SetSequenceWaitFrame(this);
          }
          else
          {
            v13 = this->nowSeq.iSeqCount < 1;
            *(_QWORD *)&this->nowSeq.iType = 0i64;
            *(_QWORD *)&this->nowSeq.bLocked = 0i64;
            *(_QWORD *)&this->nowSeq.xMaxFrame.value = 0i64;
            *(_QWORD *)&this->nowSeq.type.guardDamage.iTargetActNo = 0i64;
            this->nowSeq.type.guardDamage.iCancelType = 0;
            *(_QWORD *)&this->seqCtrl.iSeqListIndex = -1i64;
            this->xSeqWaitFrame.value = 0;
          }
LABEL_73:
          if ( v13 )
            goto LABEL_87;
LABEL_74:
          this->nowSeq.bLocked = 0;
          continue;
        }
        BattleSystem::CpuSequence::CheckDownEvade(this);
        BattleSystem::CpuSequence::CheckThrowEscape(this);
LABEL_83:
        BattleSystem::CpuSequence::CheckActorNowSeqUpdate(this);
LABEL_87:
        if ( this->bSequenceTestMode
          && this->bSequenceTestPlay
          && (this->seqCtrl.iSeqListIndex < 0 || this->seqCtrl.iSeqCommandIndex < 0) )
        {
          BattleSystem::CpuSequence::SetSequenceTestPlay(this, v8);
        }
LABEL_92:
        this->pValidCommand = 0i64;
        return;
      case 0xC:
        v12 = BattleSystem::CpuSequence::SeqNormalThrow(this);
        goto LABEL_67;
      case 0xD:
        if ( this->pOwner->iActorStat == 35 )
          goto LABEL_76;
        std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
          &this->cmdCheckFunc,
          (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdClimaxMode);
        if ( this->nowSeq.xNowFrame.value >= this->nowSeq.xMaxFrame.value )
          goto LABEL_76;
        goto LABEL_83;
      case 0xF:
        v12 = BattleSystem::CpuSequence::SeqBaseCommand(this);
        goto LABEL_67;
      case 0x10:
        v12 = BattleSystem::CpuSequence::SeqCharaCommand(this);
        goto LABEL_67;
      case 0x11:
        v12 = BattleSystem::CpuSequence::SeqBranchWait(this);
        goto LABEL_67;
      case 0x12:
        v12 = BattleSystem::CpuSequence::SeqKeyInput(this);
LABEL_67:
        if ( v12 == 2 )
          goto LABEL_68;
        if ( v12 == 1 )
        {
LABEL_76:
          iSeqCount = this->nowSeq.iSeqCount;
          *(_QWORD *)&this->nowSeq.iType = 0i64;
          *(_QWORD *)&this->nowSeq.bLocked = 0i64;
          *(_QWORD *)&this->nowSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->nowSeq.type.guardDamage.iTargetActNo = 0i64;
          this->nowSeq.type.guardDamage.iCancelType = 0;
          *(_QWORD *)&this->seqCtrl.iSeqListIndex = -1i64;
          BattleSystem::CpuSequence::SetSequenceWaitFrame(this);
          if ( iSeqCount < 1 )
            goto LABEL_87;
          continue;
        }
        if ( v12 != 3 )
          goto LABEL_87;
        if ( this->nowSeq.iType != 17
          || !BattleSystem::SequenceController::SetNextSequenceCommand(
                &this->seqCtrl,
                this->nowSeq.type.branch.bBranchTrue) )
        {
          v13 = this->nowSeq.iSeqCount < 2;
          *(_QWORD *)&this->nowSeq.iType = 0i64;
          *(_QWORD *)&this->nowSeq.bLocked = 0i64;
          *(_QWORD *)&this->nowSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->nowSeq.type.guardDamage.iTargetActNo = 0i64;
          this->nowSeq.type.guardDamage.iCancelType = 0;
          *(_QWORD *)&this->seqCtrl.iSeqListIndex = -1i64;
          BattleSystem::CpuSequence::SetSequenceWaitFrame(this);
          goto LABEL_73;
        }
        goto LABEL_70;
      default:
        IsChargeSkillChara = BattleSystem::CpuSequence::IsChargeSkillChara(this);
        v16 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCrouch;
        if ( !IsChargeSkillChara )
          v16 = (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdReady;
        std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
          &this->cmdCheckFunc,
          v16);
        goto LABEL_87;
    }
  }
}

void __fastcall BattleSystem::CpuSequence::UpdateEnemyMoveReaction(BattleSystem::CpuSequence *this)
{
  double v2; // xmm0_8
  float v3; // xmm8_4
  ActorChara *v4; // rbx
  float x; // xmm6_4
  int v6; // er13
  int v7; // edx
  int v8; // er8
  int startupFrame; // eax
  AiLevelSpec v10; // er8
  BattleSystem::SequenceController *v11; // rcx
  int AttackStartupRestFrame; // eax
  AiLevelSpec iDifficulty; // er8
  BattleSystem::SequenceController *p_seqCtrl; // rcx
  int v15; // edx
  int v16; // er8
  int v17; // eax
  int v18; // er12
  int v19; // eax
  int v20; // eax
  int JumpMoveFrame; // er14
  int v22; // edx
  int v23; // er8
  int v24; // er12
  AiLevelSpec v25; // er8
  int v26; // eax
  AiLevelSpec v27; // er8
  BattleSystem::SequenceController *v28; // rcx
  int v29; // edx
  int v30; // er8
  int v31; // er12
  AiLevelSpec v32; // er8
  AiLevelSpec v33; // er8
  int v34; // eax
  BattleSystem::SequenceController *v35; // rcx
  AiLevelSpec v36; // er8
  BattleSystem::SequenceController *v37; // rcx
  bool v38; // cc
  int v39; // ebx
  unsigned __int64 v40; // rcx
  __m128i v41; // xmm2
  __m128i v42; // xmm2
  int v43; // edx
  int RandInt; // eax
  int v45; // edx
  int v46; // er12
  int v47; // er13
  BattleSystem::SequenceCandidateInfo *Myfirst; // rbx
  BattleSystem::SequenceCandidateInfo *Mylast; // rdi
  int v50; // eax
  const CpuSequenceData *pCpuData; // rax
  bool v52; // r14
  __int32 v53; // eax
  int v54; // ebx
  BattleSystem::CpuSequence *v55; // rcx
  float RandFloat; // xmm0_4
  BattleSystem::GUARD_TYPE guardType; // eax
  int v58; // eax
  int v59; // er8
  int v60; // edx
  __int128 optionFlag_8; // [rsp+38h] [rbp-D0h]
  int optionFlag_8a; // [rsp+38h] [rbp-D0h]
  __m128i v63; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v64; // [rsp+58h] [rbp-B0h] BYREF
  int v65; // [rsp+68h] [rbp-A0h]
  __int64 v66; // [rsp+6Ch] [rbp-9Ch]
  std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> v67; // [rsp+78h] [rbp-90h] BYREF

  v2 = ((double (__fastcall *)(ActorChara *))this->pOwner->GetRivalDistance)(this->pOwner);
  v3 = *(float *)&v2;
  v4 = this->pOwner->GetTargetActor(this->pOwner);
  x = v4->vMov.x;
  if ( v4->iCAngle )
    LODWORD(x) ^= _xmm;
  *(__m128i *)&v67._Mystorage._Dummy1 = _mm_load_si128((const __m128i *)&_xmm);
  *(__m128i *)&v67._Mystorage._Ptrs[2] = _mm_load_si128((const __m128i *)&_xmm);
  *(__m128i *)&v67._Mystorage._Ptrs[4] = _mm_load_si128((const __m128i *)&_xmm);
  *(__m128i *)&v67._Mystorage._Ptrs[6] = _mm_load_si128((const __m128i *)&_xmm);
  if ( !BattleSystem::SequenceController::IsNotAttackHit(&this->seqCtrl) )
  {
    v63.m128i_i64[1] = 0i64;
    v64 = 0ui64;
    v65 = 0;
    v66 = 20i64;
    this->seqCtrl.seqCandidateList._Mypair._Myval2._Mylast = this->seqCtrl.seqCandidateList._Mypair._Myval2._Myfirst;
    v6 = *(_DWORD *)&v67._Mystorage._Dummy2[4 * this->iCpuLevel];
    HIDWORD(v66) = v6;
    if ( v4->IsAir(v4) && !v4->IsLandAttack(v4) )
    {
      if ( this->pOwner->IsAir(this->pOwner) )
      {
        if ( v4->IsSkillStatus(v4) )
        {
          startupFrame = BattleSystem::GetAttackChanceFrame(v4, v7, v8) - 1;
          if ( startupFrame <= 0 )
          {
            AttackStartupRestFrame = BattleSystem::GetAttackStartupRestFrame(v4);
            if ( AttackStartupRestFrame > 0 )
            {
              v67._Mystorage._Ptrs[0] = (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)&std::_Func_impl<_lambda_277775b946f671ac95fcfa25bbb7ee46_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::`vftable';
              LODWORD(v67._Mystorage._Ptrs[1]) = AttackStartupRestFrame;
              v67._Mystorage._Ptrs[7] = (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)&v67;
              BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, this->iDifficulty, &v67);
            }
            else
            {
              iDifficulty = this->iDifficulty;
              p_seqCtrl = &this->seqCtrl;
              if ( this->pOwner->vMov.y <= 0.0 )
              {
                BattleSystem::SequenceController::CheckSequenceCandidates(p_seqCtrl, AR_VS_AR, iDifficulty, 1, 0, 0);
                BattleSystem::SequenceController::CheckSequenceCandidates(
                  &this->seqCtrl,
                  ACTOR_ATK_CATCH,
                  this->iDifficulty,
                  0,
                  0,
                  0);
              }
              else
              {
                BattleSystem::SequenceController::CheckSequenceCandidates(p_seqCtrl, AR_VS_AR, iDifficulty, 1, 0, 4);
                BattleSystem::SequenceController::CheckSequenceCandidates(
                  &this->seqCtrl,
                  ACTOR_ATK_CATCH,
                  this->iDifficulty,
                  0,
                  0,
                  4);
              }
            }
            goto LABEL_21;
          }
          v10 = this->iDifficulty;
          v11 = &this->seqCtrl;
          if ( this->pOwner->vMov.y > 0.0 )
          {
            BattleSystem::SequenceController::CheckSequenceCandidates(v11, AR_VS_AR, v10, 0, startupFrame, 4);
            BattleSystem::SequenceController::CheckSequenceCandidates(
              &this->seqCtrl,
              AR_VS_AR,
              this->iDifficulty,
              0,
              0,
              4);
LABEL_21:
            LODWORD(v66) = 0;
            goto LABEL_93;
          }
          BattleSystem::SequenceController::CheckSequenceCandidates(v11, AR_VS_AR, v10, 0, startupFrame, 0);
          if ( BattleSystem::SequenceController::CheckSequenceCandidates(
                 &this->seqCtrl,
                 AR_VS_AR,
                 this->iDifficulty,
                 0,
                 0,
                 2) > 0 )
            goto LABEL_21;
        }
        else if ( this->pOwner->vMov.y > 0.0 )
        {
          BattleSystem::SequenceController::CheckSequenceCandidates(
            &this->seqCtrl,
            AR_VS_AR,
            this->iDifficulty,
            0,
            0,
            4);
          goto LABEL_21;
        }
        BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, AR_VS_AR, this->iDifficulty, 0, 0, 0);
        goto LABEL_21;
      }
      if ( (unsigned int)((int)BattleSystem::GetJumpMoveFrame(v4->vMov.y, v4->vAdd.y, v4->vPos.y) - 1) <= 3
        || x < 0.0 && v3 >= 12.0 )
      {
        *(_QWORD *)&this->reqSeq.iType = 0i64;
        *(_QWORD *)&this->reqSeq.bLocked = 0i64;
        *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
        *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
        this->reqSeq.type.guardDamage.iCancelType = 0;
        this->reqSeq.iType = REVERSAL;
        this->reqSeq.xMaxFrame.value = 0x40000;
        return;
      }
      if ( !v4->IsSkillStatus(v4) )
      {
        if ( !v4->IsAirDamaged(v4) )
          BattleSystem::SequenceController::CheckSequenceCandidates(
            &this->seqCtrl,
            GR_VS_AR,
            this->iDifficulty,
            0,
            0,
            0);
        if ( this->pOwner->GetWallBackDistance(this->pOwner) < 12.0 )
        {
          BattleSystem::SequenceController::CheckSequenceCandidates(
            &this->seqCtrl,
            (CpuSequenceData::SEQUENCE_CATEGORY::ID)18,
            this->iDifficulty,
            0,
            0,
            0);
          if ( v3 <= 15.0 )
          {
            v63.m128i_i32[3] += 5;
            LODWORD(v64) = 0;
          }
        }
        goto LABEL_93;
      }
      v17 = BattleSystem::GetAttackChanceFrame(v4, v15, v16) - 1;
      if ( v17 > 0 )
      {
        v18 = BattleSystem::SequenceController::CheckSequenceCandidates(
                &this->seqCtrl,
                GR_VS_AR,
                this->iDifficulty,
                0,
                v17,
                0);
        if ( BattleSystem::SequenceController::CheckSequenceCandidates(
               &this->seqCtrl,
               GR_VS_AR,
               this->iDifficulty,
               0,
               0,
               2) <= 0 )
          v18 += BattleSystem::SequenceController::CheckSequenceCandidates(
                   &this->seqCtrl,
                   GR_VS_AR,
                   this->iDifficulty,
                   0,
                   0,
                   0);
        if ( v18 <= 0 && v4->vMov.y >= 0.0 )
        {
          v63.m128i_i32[3] += 5;
          DWORD1(v64) += BattleSystem::SequenceController::CheckJumpLevelAdj(&this->seqCtrl, 10);
          v65 += BattleSystem::SequenceController::CheckFrontMoveLevelAdj(&this->seqCtrl, 10);
        }
        goto LABEL_93;
      }
      v19 = BattleSystem::GetAttackStartupRestFrame(v4);
      if ( v19 > 0 )
      {
        v67._Mystorage._Ptrs[0] = (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)&std::_Func_impl<_lambda_2fcb0e087167c4c775eae33fc63ce21a_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::`vftable';
        LODWORD(v67._Mystorage._Ptrs[1]) = v19;
        v67._Mystorage._Ptrs[7] = (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)&v67;
        BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, this->iDifficulty, &v67);
      }
      else
      {
        BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, GR_VS_AR, this->iDifficulty, 1, 0, 0);
        BattleSystem::SequenceController::CheckSequenceCandidates(
          &this->seqCtrl,
          ACTOR_ATK_BRANCH,
          this->iDifficulty,
          0,
          0,
          0);
      }
      if ( v3 > 15.0 )
      {
LABEL_93:
        v39 = 0;
        v63.m128i_i32[2] = BattleSystem::SequenceController::GetSequenceTotalPriority(&this->seqCtrl);
        v41 = _mm_add_epi32(
                _mm_loadu_si128((const __m128i *)&v63.m128i_i8[8]),
                _mm_loadu_si128((const __m128i *)((char *)&v64 + 8)));
        v42 = _mm_add_epi32(v41, _mm_srli_si128(v41, 8));
        v43 = v6 + _mm_cvtsi128_si32(_mm_add_epi32(v42, _mm_srli_si128(v42, 4)));
        if ( v43 <= 0 )
        {
LABEL_133:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          this->reqSeq.iType = COUNTER_HIT;
          if ( this->iCpuLevel < 13 )
          {
            v60 = 30;
            v59 = 5;
          }
          else
          {
            v59 = 1;
            v60 = 5;
          }
          this->reqSeq.xMaxFrame.value = (unsigned int)BattleSystem::CpuSequence::GetRandInt(
                                                         (BattleSystem::CpuSequence *)v40,
                                                         v60,
                                                         v59) << 16;
          return;
        }
        RandInt = BattleSystem::CpuSequence::GetRandInt((BattleSystem::CpuSequence *)v40, v43, 0);
        optionFlag_8a = RandInt;
        v45 = 0;
        v40 = (unsigned __int64)&v63.m128i_u64[1];
        do
        {
          if ( *(int *)v40 > 0 )
          {
            v45 += *(_DWORD *)v40;
            if ( RandInt < v45 )
              break;
          }
          ++v39;
          v40 += 4i64;
        }
        while ( v39 < 9 );
        switch ( v39 )
        {
          case 0:
            v46 = 0;
            v47 = -1;
            Myfirst = this->seqCtrl.seqCandidateList._Mypair._Myval2._Myfirst;
            Mylast = this->seqCtrl.seqCandidateList._Mypair._Myval2._Mylast;
            while ( 2 )
            {
              if ( Myfirst != Mylast )
              {
                v50 = BattleSystem::SequenceController::CheckSequencePriorityAdj(&this->seqCtrl, Myfirst->pData);
                if ( v50 <= 0 || (v46 += v50, optionFlag_8a >= v46) )
                {
                  ++Myfirst;
                  continue;
                }
                v47 = (int)*Myfirst;
              }
              break;
            }
            if ( this->seqCtrl.pOwner )
            {
              pCpuData = this->seqCtrl.pCpuData;
              if ( pCpuData )
              {
                if ( pCpuData->dataHeader.iSeqSetCount > v47 && v47 >= 0 )
                {
                  this->seqCtrl.iSeqListIndex = v47;
                  this->seqCtrl.iSeqCommandIndex = 0;
                  BattleSystem::CpuSequence::RequestSeqDataMove(this);
                }
              }
            }
            return;
          case 1:
            goto $LN89_0;
          case 2:
            *(_QWORD *)&this->reqSeq.iType = 0i64;
            *(_QWORD *)&this->reqSeq.bLocked = 0i64;
            *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
            *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
            this->reqSeq.type.guardDamage.iCancelType = 0;
            this->reqSeq.iType = JUST_GUARD;
            this->reqSeq.xMaxFrame.value = 327680;
            this->reqSeq.type.moveTarget.iMoveAct = -1;
            return;
          case 3:
            goto $LN91_0;
          case 4:
            goto $LN92_1;
          case 5:
            goto $LN93_0;
          case 6:
            v52 = 0;
            if ( v3 >= 15.0 )
            {
              v53 = BattleSystem::CpuSequence::GetRandInt((BattleSystem::CpuSequence *)v40, 2, 0);
              v40 = (unsigned int)v53;
              v52 = v53 <= this->iDifficulty / 2;
            }
            v54 = BattleSystem::CpuSequence::GetRandInt((BattleSystem::CpuSequence *)v40, 90, 20);
            RandFloat = BattleSystem::CpuSequence::GetRandFloat(v55, 12.0, 5.0);
            BattleSystem::CpuSequence::RequestMoveTargetDistance(this, RandFloat, v54, v52);
            return;
          default:
            if ( v39 != 7 )
              goto LABEL_133;
            guardType = this->guardType;
            if ( guardType <= NONE )
              goto LABEL_132;
            if ( guardType <= GUARD_CRASH )
            {
              BattleSystem::CpuSequence::RequestGuard(this, 0);
              return;
            }
            switch ( guardType )
            {
              case REVERSAL:
                BattleSystem::CpuSequence::RequestCrouchGuard(this, 0);
                return;
              case SUPER_CANCEL:
                if ( (unsigned int)BattleSystem::CpuSequence::GetRandInt((BattleSystem::CpuSequence *)v40, 2, 0) != 1 )
                {
$LN89_0:
                  *(_QWORD *)&this->reqSeq.iType = 0i64;
                  *(_QWORD *)&this->reqSeq.bLocked = 0i64;
                  *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
                  *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
                  this->reqSeq.type.guardDamage.iCancelType = 0;
                  this->reqSeq.iType = JUST_GUARD;
                  this->reqSeq.xMaxFrame.value = 327680;
                  this->reqSeq.type.moveTarget.iMoveAct = 1;
                  return;
                }
                break;
              case ADVANCED_CANCEL:
                v58 = BattleSystem::CpuSequence::GetRandInt((BattleSystem::CpuSequence *)v40, 10, 0);
                if ( v58 >= 3 )
                {
                  if ( v58 < 5 )
                  {
$LN91_0:
                    *(_QWORD *)&this->reqSeq.iType = 0i64;
                    *(_QWORD *)&this->reqSeq.bLocked = 0i64;
                    *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
                    this->reqSeq.type.guardDamage.iCancelType = 0;
                    *(_QWORD *)&this->reqSeq.xMaxFrame.value = 327680i64;
                    this->reqSeq.iType = CLIMAX_CANCEL;
                    this->reqSeq.type.jump.iStateCount = 0;
                  }
                  else if ( v58 >= 8 )
                  {
$LN93_0:
                    *(_QWORD *)&this->reqSeq.iType = 0i64;
                    *(_QWORD *)&this->reqSeq.bLocked = 0i64;
                    *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
                    *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
                    this->reqSeq.type.guardDamage.iCancelType = 0;
                    this->reqSeq.xMaxFrame.value = 327680;
                    this->reqSeq.iType = CLIMAX_CANCEL;
                    this->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)5i64;
                  }
                  else
                  {
$LN92_1:
                    *(_QWORD *)&this->reqSeq.iType = 0i64;
                    *(_QWORD *)&this->reqSeq.bLocked = 0i64;
                    *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
                    *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
                    this->reqSeq.type.guardDamage.iCancelType = 0;
                    this->reqSeq.xMaxFrame.value = 327680;
                    this->reqSeq.iType = CLIMAX_CANCEL;
                    this->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)3i64;
                  }
                  return;
                }
                break;
              default:
LABEL_132:
                *(_QWORD *)&this->reqSeq.iType = 0i64;
                *(_QWORD *)&this->reqSeq.bLocked = 0i64;
                *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
                *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
                this->reqSeq.type.guardDamage.iCancelType = 0;
                this->reqSeq.iType = COUNTER_HIT;
                this->reqSeq.xMaxFrame.value = 0x20000;
                return;
            }
            *(_QWORD *)&this->reqSeq.iType = 0i64;
            *(_QWORD *)&this->reqSeq.bLocked = 0i64;
            *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
            *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
            this->reqSeq.type.guardDamage.iCancelType = 0;
            this->reqSeq.iType = GUARD_CANCEL;
            this->reqSeq.xMaxFrame.value = 327680;
            return;
        }
      }
      if ( this->pOwner->GetWallBackDistance(this->pOwner) >= 12.0 )
      {
        v20 = v63.m128i_i32[3] + 5;
        LODWORD(v64) = v64 + 3;
      }
      else
      {
        v20 = v63.m128i_i32[3] + 10;
        LODWORD(v64) = 0;
      }
      v63.m128i_i32[3] = v20;
LABEL_91:
      v38 = v4->iActorStat < 39;
      LODWORD(v66) = 50;
      if ( !v38 )
      {
        LODWORD(v66) = 65;
        v63.m128i_i32[3] = v20 + 10;
      }
      goto LABEL_93;
    }
    if ( this->pOwner->IsAir(this->pOwner) )
    {
      JumpMoveFrame = (int)BattleSystem::GetJumpMoveFrame(
                             this->pOwner->vMov.y,
                             this->pOwner->vAdd.y,
                             this->pOwner->vPos.y);
      if ( v4->IsSkillStatus(v4) )
      {
        v24 = BattleSystem::GetAttackChanceFrame(v4, v22, v23) - 1;
        if ( v24 <= 0 )
        {
          v26 = BattleSystem::GetAttackStartupRestFrame(v4);
          v27 = this->iDifficulty;
          v28 = &this->seqCtrl;
          if ( v26 > 0 )
          {
            BattleSystem::SequenceController::CheckSequenceCandidates(v28, AR_VS_GR, v27, 0, 0, 0);
          }
          else
          {
            BattleSystem::SequenceController::CheckSequenceCandidates(v28, AR_VS_GR, v27, 1, 0, 0);
            BattleSystem::SequenceController::CheckSequenceCandidates(
              &this->seqCtrl,
              ACTOR_ATK_CATCH,
              this->iDifficulty,
              0,
              0,
              0);
          }
          goto LABEL_93;
        }
        if ( v4->vPos.y <= 0.0 && JumpMoveFrame < 15 )
        {
          if ( v24 >= 15 )
            BattleSystem::SequenceController::CheckSequenceCandidates(
              &this->seqCtrl,
              AR_VS_GR,
              this->iDifficulty,
              0,
              0,
              2);
          v25 = this->iDifficulty;
          if ( v25 >= AiLevel_VeryHard )
            BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, AR_VS_GR, v25, 0, v24, 2);
          BattleSystem::SequenceController::CheckSequenceCandidates(
            &this->seqCtrl,
            AR_VS_GR,
            this->iDifficulty,
            0,
            v24,
            0);
          if ( v24 >= 5 )
            goto LABEL_93;
          goto LABEL_56;
        }
      }
      else if ( JumpMoveFrame < 15 )
      {
LABEL_56:
        BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, AR_VS_GR, this->iDifficulty, 0, 0, 0);
        goto LABEL_93;
      }
LABEL_57:
      *(_QWORD *)&this->reqSeq.iType = 0i64;
      *(_QWORD *)&this->reqSeq.bLocked = 0i64;
      *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
      *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
      this->reqSeq.type.guardDamage.iCancelType = 0;
      this->reqSeq.iType = COUNTER_HIT;
      this->reqSeq.xMaxFrame.value = 0x10000;
      return;
    }
    if ( !v4->IsSkillStatus(v4) )
      return;
    v31 = BattleSystem::GetAttackChanceFrame(v4, v29, v30) - 1;
    if ( v31 <= 0 )
    {
      if ( this->guardType == NONE )
        return;
      v34 = BattleSystem::GetAttackStartupRestFrame(v4);
      v35 = &this->seqCtrl;
      if ( v34 > 0 )
      {
        LODWORD(optionFlag_8) = v34;
        *((_QWORD *)&optionFlag_8 + 1) = this;
        v67._Mystorage._Ptrs[0] = (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)&std::_Func_impl<_lambda_dc09dbd38a6026c05e676ba95485d4c1_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::`vftable';
        *(_OWORD *)&v67._Mystorage._Ptrs[1] = optionFlag_8;
        v67._Mystorage._Ptrs[7] = (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)&v67;
        BattleSystem::SequenceController::CheckSequenceCandidates(v35, this->iDifficulty, &v67);
      }
      else
      {
        BattleSystem::SequenceController::CheckSequenceCandidates(v35, GR_VS_GR, this->iDifficulty, 1, 0, 0);
        v36 = this->iDifficulty;
        v37 = &this->seqCtrl;
        if ( this->guardType == ADVANCED_CANCEL )
        {
          BattleSystem::SequenceController::CheckSequenceCandidates(v37, ACTOR_HIT_SHOT_ERASE|0x10, v36, 0, 0, 0);
          if ( this->iCpuLevel >= 5 )
          {
            DWORD1(v64) += 5;
            DWORD2(v64) += 10;
            HIDWORD(v64) += 10;
          }
        }
        else
        {
          BattleSystem::SequenceController::CheckSequenceCandidates(v37, ACTOR_HIT_SHOT_ERASE, v36, 0, 0, 0);
        }
      }
      if ( this->pOwner->GetWallBackDistance(this->pOwner) < 12.0 )
        BattleSystem::SequenceController::CheckSequenceCandidates(
          &this->seqCtrl,
          (CpuSequenceData::SEQUENCE_CATEGORY::ID)18,
          this->iDifficulty,
          0,
          0,
          0);
    }
    else
    {
      if ( v4->vPos.y > 0.0 )
        goto LABEL_57;
      if ( v31 >= 20 )
        BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, GR_VS_GR, this->iDifficulty, 0, 0, 2);
      v32 = this->iDifficulty;
      if ( v32 >= AiLevel_VeryHard )
        BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, GR_VS_GR, v32, 0, v31, 2);
      BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, GR_VS_GR, this->iDifficulty, 0, v31, 0);
      if ( v31 < 5 )
      {
        v33 = this->iDifficulty;
        if ( v33 < AiLevel_VeryHard )
          BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, GR_VS_GR, v33, 0, 0, 0);
      }
      if ( this->iCpuLevel >= 8
        && (int)(this->seqCtrl.seqCandidateList._Mypair._Myval2._Mylast
               - this->seqCtrl.seqCandidateList._Mypair._Myval2._Myfirst) <= 2
        && *(float *)&v2 >= 20.0 )
      {
        v65 += BattleSystem::SequenceController::CheckFrontMoveLevelAdj(&this->seqCtrl, 15);
      }
    }
    if ( v3 > 32.0 )
      goto LABEL_93;
    if ( this->pOwner->GetWallBackDistance(this->pOwner) >= 12.0 )
    {
      v20 = v63.m128i_i32[3] + 5;
      v63.m128i_i32[3] += 5;
      if ( x <= 1.0 )
        LODWORD(v64) = v64 + 3;
    }
    else
    {
      v20 = v63.m128i_i32[3] + 10;
      v63.m128i_i32[3] += 10;
      LODWORD(v64) = 0;
    }
    goto LABEL_91;
  }
}

void __fastcall BattleSystem::CpuSequence::SeqParam::UpdateFrame(BattleSystem::CpuSequence::SeqParam *this)
{
  BattleSystem::BattleController *v2; // rax
  BattleSystem::BattleController *v3; // [rsp+40h] [rbp+8h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v3 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v3);
    BattleSystem::BattleController::instance = v2;
  }
  this->xNowFrame.value += v2->actSystem.xPlaySpeed.value;
  ++this->iSeqCount;
}

void __fastcall BattleSystem::CpuSequence::UpdateMyGroundReaction(BattleSystem::CpuSequence *this)
{
  double v2; // xmm0_8
  float v3; // xmm6_4
  ActorChara *v4; // r12
  int v5; // edi
  unsigned int v6; // er13
  BattleSystem::SequenceController *p_seqCtrl; // r14
  __int64 iCpuLevel; // rdx
  unsigned int v9; // er15
  const CpuSequenceData *pCpuData; // rax
  unsigned __int8 uiBMoveLevel; // cl
  unsigned int v12; // edx
  int v13; // ebx
  unsigned int v14; // er8
  const CpuSequenceData *v15; // rax
  unsigned __int8 uiFMoveLevel; // cl
  unsigned int v17; // edx
  const CpuSequenceData *v18; // rax
  unsigned __int8 v19; // cl
  const CpuSequenceData *v20; // rax
  unsigned __int8 uiJumpLevel; // cl
  unsigned int v22; // edx
  AiLevelSpec iDifficulty; // eax
  int v24; // edx
  const CpuSequenceData *v25; // rax
  unsigned __int8 v26; // cl
  int v27; // edx
  const CpuSequenceData *v28; // rax
  unsigned __int8 v29; // cl
  const CpuSequenceData *v30; // rax
  unsigned __int8 v31; // cl
  unsigned int v32; // edx
  const CpuSequenceData *v33; // rax
  unsigned __int8 uiClimaxLevel; // cl
  unsigned int v35; // edx
  int v36; // er8
  const CpuSequenceData *v37; // rax
  unsigned __int8 v38; // cl
  unsigned int v39; // edx
  const CpuSequenceData *v40; // rax
  unsigned __int8 v41; // cl
  unsigned int v42; // edx
  const CpuSequenceData *v43; // rax
  unsigned __int8 v44; // cl
  unsigned int v45; // edx
  int v46; // edi
  const CpuSequenceData *v47; // rax
  unsigned __int8 v48; // cl
  unsigned int v49; // edx
  const CpuSequenceData *v50; // rax
  unsigned __int8 v51; // cl
  unsigned int v52; // edx
  const CpuSequenceData *v53; // rax
  unsigned __int8 v54; // cl
  AiLevelSpec v55; // er8
  unsigned int v56; // ebx
  const CpuSequenceData *v57; // rax
  unsigned __int8 uiThrowLevel; // cl
  unsigned int v59; // edx
  const CpuSequenceData *v60; // rax
  unsigned __int8 v61; // cl
  AiLevelSpec v62; // eax
  int v63; // edx
  const CpuSequenceData *v64; // rax
  unsigned __int8 v65; // cl
  int v66; // ebx
  int v67; // edx
  const CpuSequenceData *v68; // rax
  unsigned __int8 v69; // cl
  const CpuSequenceData *v70; // rax
  unsigned __int8 v71; // cl
  unsigned int v72; // edx
  int v73; // edi
  const CpuSequenceData *v74; // rax
  unsigned __int8 v75; // cl
  unsigned int v76; // edx
  unsigned int v77; // ebx
  const CpuSequenceData *v78; // rax
  unsigned __int8 v79; // cl
  unsigned int v80; // edx
  const CpuSequenceData *v81; // rax
  unsigned __int8 v82; // cl
  __int64 *v83; // rax
  __m128i v84; // xmm2
  __m128i v85; // xmm2
  int v86; // er15
  __int64 v87; // rcx
  BattleSystem::BattleController *v88; // rbx
  BattleSystem::BattleController *v89; // rax
  int v90; // er13
  int v91; // edx
  __m128i *v92; // rax
  unsigned __int64 v93; // rcx
  int v94; // er15
  int v95; // er12
  BattleSystem::SequenceCandidateInfo *Myfirst; // rbx
  BattleSystem::SequenceCandidateInfo *Mylast; // rdi
  int v98; // eax
  const CpuSequenceData *v99; // rax
  bool v100; // di
  __int32 RandInt; // eax
  int v102; // ebx
  BattleSystem::CpuSequence *v103; // rcx
  float RandFloat; // xmm0_4
  int v105; // ebx
  BattleSystem::CpuSequence *v106; // rcx
  float v107; // xmm0_4
  BattleSystem::BattleController *v108; // rax
  int v109; // er8
  BattleSystem::BattleController *v110; // rax
  BattleSystem::BattleController *v111; // [rsp+30h] [rbp-D0h]
  BattleSystem::BattleController *v112; // [rsp+30h] [rbp-D0h]
  BattleSystem::BattleController *v113; // [rsp+30h] [rbp-D0h]
  __m128i v114; // [rsp+48h] [rbp-B8h] BYREF
  __m128i v115; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v116; // [rsp+68h] [rbp-98h] BYREF
  __int64 v117; // [rsp+70h] [rbp-90h]
  __int64 v118; // [rsp+78h] [rbp-88h]
  int v119; // [rsp+80h] [rbp-80h]
  __int64 v120[2]; // [rsp+90h] [rbp-70h]
  __m128i si128; // [rsp+A0h] [rbp-60h]
  int v122; // [rsp+B0h] [rbp-50h]
  int v123; // [rsp+B4h] [rbp-4Ch]
  __int64 v124; // [rsp+B8h] [rbp-48h]
  __int64 v125; // [rsp+C0h] [rbp-40h]
  int v126; // [rsp+C8h] [rbp-38h]
  int v127; // [rsp+CCh] [rbp-34h]
  __int128 v128[4]; // [rsp+D0h] [rbp-30h]

  v2 = ((double (__fastcall *)(ActorChara *))this->pOwner->GetRivalDistance)(this->pOwner);
  v3 = *(float *)&v2;
  v4 = this->pOwner->GetTargetActor(this->pOwner);
  v128[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v128[1] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v128[2] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v128[3] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v5 = 0;
  v120[0] = 0i64;
  v120[1] = 0i64;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v122 = 8;
  v123 = 8;
  v124 = 0xA0000000Ai64;
  v125 = 0xA0000000Ai64;
  v6 = 15;
  v126 = 15;
  v127 = 15;
  if ( this->pOwner->IsAir(this->pOwner) )
    return;
  v114 = 0ui64;
  v115 = 0ui64;
  v116 = 0i64;
  v117 = 0i64;
  v118 = 0i64;
  p_seqCtrl = &this->seqCtrl;
  this->seqCtrl.seqCandidateList._Mypair._Myval2._Mylast = this->seqCtrl.seqCandidateList._Mypair._Myval2._Myfirst;
  iCpuLevel = this->iCpuLevel;
  v119 = *((_DWORD *)v128 + iCpuLevel);
  if ( (int)iCpuLevel < 10 || !v4->IsStunDamaged(v4) )
  {
    v9 = 10;
    if ( this->bDamageReversal && this->iCpuLevel >= 10 )
    {
      if ( this->seqCtrl.pOwner && (pCpuData = this->seqCtrl.pCpuData) != 0i64 )
      {
        uiBMoveLevel = pCpuData->charaFeatureData.uiBMoveLevel;
        if ( uiBMoveLevel )
          v12 = 20 * ((unsigned int)uiBMoveLevel + 50) / 0x64;
        else
          v12 = 0;
      }
      else
      {
        v12 = 20;
      }
      v115.m128i_i32[0] += v12;
      v114.m128i_i32[1] += 5;
      v13 = v114.m128i_i32[3];
      if ( this->pOwner->GetStageCornerBackDistance(this->pOwner) > 15.0 )
        v114.m128i_i32[2] += 5;
    }
    else
    {
      v14 = 30;
      if ( this->seqCtrl.pOwner && (v15 = this->seqCtrl.pCpuData) != 0i64 )
      {
        uiFMoveLevel = v15->charaFeatureData.uiFMoveLevel;
        if ( uiFMoveLevel )
          v17 = 30 * ((unsigned int)uiFMoveLevel + 50) / 0x64;
        else
          v17 = 0;
      }
      else
      {
        v17 = 30;
      }
      v13 = v17 + v114.m128i_i32[3];
      v114.m128i_i32[3] += v17;
      if ( this->seqCtrl.pOwner )
      {
        v18 = this->seqCtrl.pCpuData;
        if ( v18 )
        {
          v19 = v18->charaFeatureData.uiBMoveLevel;
          if ( v19 )
            v14 = 30 * ((unsigned int)v19 + 50) / 0x64;
          else
            v14 = 0;
        }
      }
      v115.m128i_i32[0] += v14;
      if ( *(float *)&v2 >= (float)(this->jumpInfo[0].fDist - 5.0) )
      {
        if ( this->seqCtrl.pOwner && (v20 = this->seqCtrl.pCpuData) != 0i64 )
        {
          uiJumpLevel = v20->charaFeatureData.uiJumpLevel;
          if ( uiJumpLevel )
            v22 = 20 * ((unsigned int)uiJumpLevel + 50) / 0x64;
          else
            v22 = 0;
        }
        else
        {
          v22 = 20;
        }
        v115.m128i_i32[1] += v22;
      }
      iDifficulty = this->iDifficulty;
      if ( iDifficulty >= AiLevel_Normal && *(float *)&v2 >= 10.0 )
      {
        v24 = 5 * (iDifficulty + 2);
        if ( this->seqCtrl.pOwner )
        {
          v25 = this->seqCtrl.pCpuData;
          if ( v25 )
          {
            v26 = v25->charaFeatureData.uiJumpLevel;
            if ( v26 )
              v24 = v24 * (v26 + 50) / 100;
            else
              v24 = 0;
          }
        }
        LODWORD(v116) = v24 + v116;
        if ( v4->IsCrouch(v4) )
        {
          v27 = 4 * this->iDifficulty + 5;
          if ( this->seqCtrl.pOwner )
          {
            v28 = this->seqCtrl.pCpuData;
            if ( v28 )
            {
              v29 = v28->charaFeatureData.uiJumpLevel;
              if ( v29 )
                v27 = v27 * (v29 + 50) / 100;
              else
                v27 = 0;
            }
          }
          LODWORD(v116) = v27 + v116;
        }
      }
      if ( *(float *)&v2 >= (float)(this->jumpInfo[8].fDist - 5.0) )
      {
        if ( this->seqCtrl.pOwner && (v30 = this->seqCtrl.pCpuData) != 0i64 )
        {
          v31 = v30->charaFeatureData.uiJumpLevel;
          if ( v31 )
            v32 = 15 * ((unsigned int)v31 + 50) / 0x64;
          else
            v32 = 0;
        }
        else
        {
          v32 = 15;
        }
        HIDWORD(v116) += v32;
      }
      if ( *(float *)&v2 >= 25.0 )
      {
        if ( this->pOwner->GetExPower(this->pOwner) >= 1000 )
        {
          if ( this->seqCtrl.pOwner && (v33 = this->seqCtrl.pCpuData) != 0i64 )
          {
            uiClimaxLevel = v33->charaFeatureData.uiClimaxLevel;
            v35 = uiClimaxLevel ? 5 * ((unsigned int)uiClimaxLevel + 50) / 0x64 : 0;
          }
          else
          {
            v35 = 5;
          }
          v36 = v35 + v118;
          LODWORD(v118) = v35 + v118;
          if ( *(float *)&v2 >= 35.0 )
          {
            if ( this->seqCtrl.pOwner && (v37 = this->seqCtrl.pCpuData) != 0i64 )
            {
              v38 = v37->charaFeatureData.uiClimaxLevel;
              if ( v38 )
                v39 = (8 * (unsigned int)v38 + 400) / 0x64;
              else
                v39 = 0;
            }
            else
            {
              v39 = 8;
            }
            LODWORD(v118) = v39 + v36;
          }
        }
        if ( this->iCpuLevel >= 8 )
        {
          if ( this->seqCtrl.pOwner && (v40 = this->seqCtrl.pCpuData) != 0i64 )
          {
            v41 = v40->charaFeatureData.uiFMoveLevel;
            v42 = v41 ? 10 * ((unsigned int)v41 + 50) / 0x64 : 0;
          }
          else
          {
            v42 = 10;
          }
          v13 += v42;
          v114.m128i_i32[3] = v13;
          if ( *(float *)&v2 >= 35.0 )
          {
            if ( this->seqCtrl.pOwner && (v43 = this->seqCtrl.pCpuData) != 0i64 )
            {
              v44 = v43->charaFeatureData.uiFMoveLevel;
              if ( v44 )
                v45 = 15 * ((unsigned int)v44 + 50) / 0x64;
              else
                v45 = 0;
            }
            else
            {
              v45 = 15;
            }
            v13 += v45;
            v114.m128i_i32[3] = v13;
          }
        }
      }
    }
    v46 = *((_DWORD *)v120 + this->iCpuLevel);
    HIDWORD(v118) = v46;
    if ( BattleSystem::SequenceController::IsNotAttackHit(&this->seqCtrl) )
    {
      if ( v4->IsComboSoundException(v4) )
      {
        if ( this->seqCtrl.pOwner && (v47 = this->seqCtrl.pCpuData) != 0i64 )
        {
          v48 = v47->charaFeatureData.uiFMoveLevel;
          if ( v48 )
            v49 = 20 * ((unsigned int)v48 + 50) / 0x64;
          else
            v49 = 0;
        }
        else
        {
          v49 = 20;
        }
        v114.m128i_i32[3] = v49 + v13;
      }
      if ( v3 >= (float)(this->jumpInfo[0].fDist - 5.0) )
      {
        if ( this->seqCtrl.pOwner && (v50 = this->seqCtrl.pCpuData) != 0i64 )
        {
          v51 = v50->charaFeatureData.uiJumpLevel;
          if ( v51 )
            v52 = 10 * ((unsigned int)v51 + 50) / 0x64;
          else
            v52 = 0;
        }
        else
        {
          v52 = 10;
        }
        v115.m128i_i32[1] += v52;
      }
      if ( v3 >= (float)(this->jumpInfo[6].fDist - 5.0) )
      {
        if ( this->seqCtrl.pOwner )
        {
          v53 = this->seqCtrl.pCpuData;
          if ( v53 )
          {
            v54 = v53->charaFeatureData.uiJumpLevel;
            if ( v54 )
              v9 = 10 * ((unsigned int)v54 + 50) / 0x64;
            else
              v9 = 0;
          }
        }
        LODWORD(v116) = v9 + v116;
      }
      v5 = 0;
      if ( !BattleSystem::SequenceController::IsNotThrowHit(&this->seqCtrl) )
      {
        v55 = this->iDifficulty;
        if ( v55 >= AiLevel_Normal )
        {
          BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, ACTOR_HIT_GUARD, v55, 0, 0, 0);
          v56 = 50;
          if ( this->pOwner->GetStageCornerBackDistance(this->pOwner) >= 10.0 && v3 >= this->fNormalThrowRange[0] )
          {
            if ( this->seqCtrl.pOwner && (v57 = this->seqCtrl.pCpuData) != 0i64 )
            {
              uiThrowLevel = v57->charaFeatureData.uiThrowLevel;
              if ( uiThrowLevel )
                v59 = 50 * ((unsigned int)uiThrowLevel + 50) / 0x64;
              else
                v59 = 0;
            }
            else
            {
              v59 = 50;
            }
            LODWORD(v117) = v59;
          }
          if ( this->pOwner->GetStageCornerFrontDistance(this->pOwner) >= 10.0 && v3 >= this->fNormalThrowRange[1] )
          {
            if ( this->seqCtrl.pOwner )
            {
              v60 = this->seqCtrl.pCpuData;
              if ( v60 )
              {
                v61 = v60->charaFeatureData.uiThrowLevel;
                if ( v61 )
                  v56 = 50 * ((unsigned int)v61 + 50) / 0x64;
                else
                  v56 = 0;
              }
            }
            HIDWORD(v117) = v56;
          }
        }
      }
    }
    else
    {
      if ( this->bDamageReversal && this->iCpuLevel >= 10 )
      {
        HIDWORD(v118) = v46 + 10;
      }
      else
      {
        BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, GR_VS_GR, this->iDifficulty, 0, 0, 0);
        v62 = this->iDifficulty;
        if ( v62 >= AiLevel_Normal && (float)(this->jumpInfo[0].fDist + 2.0) >= v3 )
        {
          v63 = 3 * (v62 + 2);
          if ( this->seqCtrl.pOwner )
          {
            v64 = this->seqCtrl.pCpuData;
            if ( v64 )
            {
              v65 = v64->charaFeatureData.uiJumpLevel;
              if ( v65 )
                v63 = v63 * (v65 + 50) / 100;
              else
                v63 = 0;
            }
          }
          v66 = v63 + v115.m128i_i32[3];
          v115.m128i_i32[3] += v63;
          if ( v4->IsCrouch(v4) )
          {
            v67 = 3 * (this->iDifficulty + 2);
            if ( this->seqCtrl.pOwner )
            {
              v68 = this->seqCtrl.pCpuData;
              if ( v68 )
              {
                v69 = v68->charaFeatureData.uiJumpLevel;
                if ( v69 )
                  v67 = v67 * (v69 + 50) / 100;
                else
                  v67 = 0;
              }
            }
            v115.m128i_i32[3] = v67 + v66;
          }
        }
      }
      if ( this->pOwner->GetStageCornerBackDistance(this->pOwner) < 10.0 || this->fNormalThrowRange[0] < v3 )
      {
        v73 = v117;
      }
      else
      {
        if ( this->seqCtrl.pOwner && (v70 = this->seqCtrl.pCpuData) != 0i64 )
        {
          v71 = v70->charaFeatureData.uiThrowLevel;
          if ( v71 )
            v72 = 20 * ((unsigned int)v71 + 50) / 0x64;
          else
            v72 = 0;
        }
        else
        {
          v72 = 20;
        }
        v73 = v72 + v117;
        LODWORD(v117) = v72 + v117;
      }
      if ( this->pOwner->GetStageCornerFrontDistance(this->pOwner) < 10.0 || this->fNormalThrowRange[1] < v3 )
      {
        v77 = HIDWORD(v117);
      }
      else
      {
        if ( this->seqCtrl.pOwner && (v74 = this->seqCtrl.pCpuData) != 0i64 )
        {
          v75 = v74->charaFeatureData.uiThrowLevel;
          if ( v75 )
            v76 = 20 * ((unsigned int)v75 + 50) / 0x64;
          else
            v76 = 0;
        }
        else
        {
          v76 = 20;
        }
        v77 = v76 + HIDWORD(v117);
        HIDWORD(v117) += v76;
      }
      if ( this->iDifficulty >= AiLevel_Easy && v4->IsCrouch(v4) )
      {
        if ( this->pOwner->GetStageCornerBackDistance(this->pOwner) >= 10.0 && this->fNormalThrowRange[0] >= v3 )
        {
          if ( this->seqCtrl.pOwner && (v78 = this->seqCtrl.pCpuData) != 0i64 )
          {
            v79 = v78->charaFeatureData.uiThrowLevel;
            if ( v79 )
              v80 = 15 * ((unsigned int)v79 + 50) / 0x64;
            else
              v80 = 0;
          }
          else
          {
            v80 = 15;
          }
          LODWORD(v117) = v80 + v73;
        }
        if ( this->pOwner->GetStageCornerFrontDistance(this->pOwner) >= 10.0 && this->fNormalThrowRange[1] >= v3 )
        {
          if ( this->seqCtrl.pOwner )
          {
            v81 = this->seqCtrl.pCpuData;
            if ( v81 )
            {
              v82 = v81->charaFeatureData.uiThrowLevel;
              if ( v82 )
                v6 = 15 * ((unsigned int)v82 + 50) / 0x64;
              else
                v6 = 0;
            }
          }
          HIDWORD(v117) = v6 + v77;
        }
      }
      if ( v4->GetStageCornerBackDistance(v4) > 15.0 )
      {
        v5 = 0;
        if ( this->pOwner->GetStageCornerBackDistance(this->pOwner) <= 15.0 )
        {
          BattleSystem::SequenceController::CheckSequenceCandidates(
            &this->seqCtrl,
            (CpuSequenceData::SEQUENCE_CATEGORY::ID)18,
            this->iDifficulty,
            0,
            0,
            0);
          if ( v3 <= 18.0 )
            v114.m128i_i32[1] += 15;
        }
      }
      else
      {
        v5 = 0;
        BattleSystem::SequenceController::CheckSequenceCandidates(
          &this->seqCtrl,
          (CpuSequenceData::SEQUENCE_CATEGORY::ID)17,
          this->iDifficulty,
          0,
          0,
          0);
      }
    }
$LABEL_SELECT_SEQUENCE:
    v114.m128i_i32[0] = BattleSystem::SequenceController::GetSequenceTotalPriority(&this->seqCtrl);
    v83 = &v116;
    v84 = _mm_add_epi32(_mm_loadu_si128(&v115), _mm_loadu_si128(&v114));
    v85 = _mm_add_epi32(v84, _mm_srli_si128(v84, 8));
    v86 = _mm_cvtsi128_si32(_mm_add_epi32(v85, _mm_srli_si128(v85, 4)));
    v87 = 7i64;
    do
    {
      v86 += *(_DWORD *)v83;
      v83 = (__int64 *)((char *)v83 + 4);
      --v87;
    }
    while ( v87 );
    v88 = BattleSystem::BattleController::instance;
    if ( v86 <= 0 )
    {
LABEL_240:
      *(_QWORD *)&this->reqSeq.iType = 0i64;
      *(_QWORD *)&this->reqSeq.bLocked = 0i64;
      *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
      *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
      this->reqSeq.type.guardDamage.iCancelType = 0;
      this->reqSeq.iType = COUNTER_HIT;
      if ( this->iCpuLevel < 13 )
      {
        if ( !v88 )
        {
          v113 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
          BattleSystem::BattleController::BattleController(v113);
          v88 = v110;
          BattleSystem::BattleController::instance = v110;
        }
        v109 = (int)((unsigned int)RandomMT::getRand32(&v88->randMT) >> 1) % 26 + 5;
      }
      else
      {
        if ( !v88 )
        {
          v112 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
          BattleSystem::BattleController::BattleController(v112);
          v88 = v108;
          BattleSystem::BattleController::instance = v108;
        }
        v109 = (int)((unsigned int)RandomMT::getRand32(&v88->randMT) >> 1) % 5 + 1;
      }
      this->reqSeq.xMaxFrame.value = v109 << 16;
    }
    else
    {
      if ( !BattleSystem::BattleController::instance )
      {
        v111 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
        BattleSystem::BattleController::BattleController(v111);
        v88 = v89;
        BattleSystem::BattleController::instance = v89;
      }
      v90 = (int)((unsigned int)RandomMT::getRand32(&v88->randMT) >> 1) % (v86 + 1);
      v91 = 0;
      v92 = &v114;
      do
      {
        v93 = v92->m128i_u32[0];
        if ( (int)v93 > 0 )
        {
          v91 += v93;
          if ( v90 < v91 )
            break;
        }
        ++v5;
        v92 = (__m128i *)((char *)v92 + 4);
      }
      while ( v5 < 15 );
      switch ( v5 )
      {
        case 0:
          v94 = 0;
          v95 = -1;
          Myfirst = p_seqCtrl->seqCandidateList._Mypair._Myval2._Myfirst;
          Mylast = this->seqCtrl.seqCandidateList._Mypair._Myval2._Mylast;
          if ( p_seqCtrl->seqCandidateList._Mypair._Myval2._Myfirst == Mylast )
            goto LABEL_216;
          break;
        case 1:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          this->reqSeq.iType = JUST_GUARD;
          goto LABEL_222;
        case 2:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          this->reqSeq.iType = JUST_GUARD;
          goto LABEL_224;
        case 3:
          v100 = 0;
          if ( v3 >= 15.0 )
          {
            RandInt = BattleSystem::CpuSequence::GetRandInt((BattleSystem::CpuSequence *)v93, 2, 0);
            v93 = (unsigned int)RandInt;
            v100 = RandInt <= this->iDifficulty / 2;
          }
          v102 = BattleSystem::CpuSequence::GetRandInt((BattleSystem::CpuSequence *)v93, 90, 20);
          RandFloat = BattleSystem::CpuSequence::GetRandFloat(v103, 10.0, 2.0);
          BattleSystem::CpuSequence::RequestMoveTargetDistance(this, RandFloat, v102, v100);
          return;
        case 4:
          v105 = BattleSystem::CpuSequence::GetRandInt((BattleSystem::CpuSequence *)v93, 60, 20);
          v107 = BattleSystem::CpuSequence::GetRandFloat(v106, 50.0, 40.0);
          BattleSystem::CpuSequence::RequestMoveTargetDistance(this, v107, v105, 0);
          return;
        case 5:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 327680i64;
          this->reqSeq.iType = CLIMAX_CANCEL;
          this->reqSeq.type.jump.iStateCount = 0;
          return;
        case 6:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          this->reqSeq.xMaxFrame.value = 327680;
          this->reqSeq.iType = THROW_ESCAPE;
          this->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)1i64;
          return;
        case 7:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          this->reqSeq.xMaxFrame.value = 327680;
          this->reqSeq.iType = CLIMAX_CANCEL;
          this->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)3i64;
          return;
        case 8:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          this->reqSeq.xMaxFrame.value = 327680;
          this->reqSeq.iType = CLIMAX_CANCEL;
          this->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)6i64;
          return;
        case 9:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          this->reqSeq.xMaxFrame.value = 327680;
          this->reqSeq.iType = CLIMAX_CANCEL;
          this->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)8i64;
          return;
        case 10:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          this->reqSeq.iType = MAX_MOVE_FINISH;
LABEL_222:
          this->reqSeq.xMaxFrame.value = 327680;
          this->reqSeq.type.moveTarget.iMoveAct = 1;
          return;
        case 11:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          this->reqSeq.iType = MAX_MOVE_FINISH;
LABEL_224:
          this->reqSeq.xMaxFrame.value = 327680;
          this->reqSeq.type.moveTarget.iMoveAct = -1;
          return;
        case 12:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          this->reqSeq.iType = CLIMAX_MOVE_FINISH;
          this->reqSeq.xMaxFrame.value = 327680;
          return;
        case 13:
          if ( ((unsigned __int8 (__fastcall *)(ActorChara *, unsigned __int64))v4->IsCrouch)(v4, 0x140000000ui64) )
            BattleSystem::CpuSequence::RequestCrouchGuard(this, 0);
          else
            BattleSystem::CpuSequence::RequestGuard(this, 0);
          return;
        default:
          goto LABEL_240;
      }
      while ( 1 )
      {
        v98 = BattleSystem::SequenceController::CheckSequencePriorityAdj(&this->seqCtrl, Myfirst->pData);
        if ( v98 > 0 )
        {
          v94 += v98;
          if ( v90 < v94 )
            break;
        }
        if ( ++Myfirst == Mylast )
          goto LABEL_216;
      }
      v95 = (int)*Myfirst;
LABEL_216:
      if ( this->seqCtrl.pOwner )
      {
        v99 = this->seqCtrl.pCpuData;
        if ( v99 )
        {
          if ( v99->dataHeader.iSeqSetCount > v95 && v95 >= 0 )
          {
            this->seqCtrl.iSeqListIndex = v95;
            this->seqCtrl.iSeqCommandIndex = 0;
            BattleSystem::CpuSequence::RequestSeqDataMove(this);
          }
        }
      }
    }
    return;
  }
  if ( v4->iActorStat == 50
    && BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, GR_VS_GR, this->iDifficulty, 0, 0, 2) > 0 )
  {
    goto $LABEL_SELECT_SEQUENCE;
  }
  if ( *(float *)&v2 >= 8.0 )
  {
    *(_QWORD *)&this->reqSeq.iType = 0i64;
    *(_QWORD *)&this->reqSeq.bLocked = 0i64;
    *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
    *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
    this->reqSeq.type.guardDamage.iCancelType = 0;
    this->reqSeq.iType = ADVANCED_CANCEL;
    this->reqSeq.type.jump.iStateCount = 0x40000000;
    this->reqSeq.type.moveTarget.iMoveAct = 1;
    this->reqSeq.xMaxFrame.value = 23592960;
    return;
  }
  if ( v4->iActorStat == 50 )
  {
    if ( BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, GR_VS_GR, this->iDifficulty, 0, 0, 0) <= 0 )
    {
      if ( this->pOwner->GetStageCornerBackDistance(this->pOwner) >= 10.0 )
        LODWORD(v117) = BattleSystem::SequenceController::CheckThrowLevelAdj(&this->seqCtrl, 100);
      if ( this->pOwner->GetStageCornerFrontDistance(this->pOwner) >= 10.0 )
        HIDWORD(v117) = BattleSystem::SequenceController::CheckThrowLevelAdj(&this->seqCtrl, 100);
    }
    goto $LABEL_SELECT_SEQUENCE;
  }
}

char __fastcall BattleSystem::CpuSequence::UpdateShotReaction(BattleSystem::CpuSequence *this)
{
  const ActorObject *pEnemyShot; // rax
  ActorChara *pOwner; // rcx
  float v4; // xmm7_4
  double v5; // xmm0_8
  float v6; // xmm6_4
  ActorChara *v7; // r14
  int v8; // er13
  __int64 v9; // rax
  __int64 v10; // xmm0_8
  float z; // eax
  const ActorObject *v12; // rax
  int v13; // ebx
  const ActorObject *v14; // rax
  float v15; // xmm0_4
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  unsigned int iActorStat; // er8
  int v20; // er9
  __int64 v21; // r8
  int startupFrame; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // er15
  ActorChara *v26; // rbx
  ActorChara_vtbl *v27; // rdi
  unsigned int v28; // eax
  int v29; // eax
  int v30; // eax
  float x; // xmm0_4
  int v32; // ecx
  int v33; // ebx
  int v34; // ebx
  AiLevelSpec iDifficulty; // edx
  int v36; // ebx
  __int64 *v37; // rax
  __m128i v38; // xmm2
  __m128i v39; // xmm2
  int v40; // edx
  __int64 v41; // rcx
  int RandInt; // er9
  int v43; // edx
  BattleSystem::CpuSequence *v44; // rcx
  const CpuSequenceData *pCpuData; // rcx
  BattleSystem::GUARD_TYPE guardType; // eax
  BattleSystem::SequenceCandidateInfo result; // [rsp+38h] [rbp-99h] BYREF
  int v49[4]; // [rsp+48h] [rbp-89h] BYREF
  __int64 v50; // [rsp+58h] [rbp-79h]
  __m128i v51; // [rsp+60h] [rbp-71h] BYREF
  __m128i v52; // [rsp+70h] [rbp-61h] BYREF
  __int64 v53; // [rsp+80h] [rbp-51h] BYREF
  std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> v54; // [rsp+88h] [rbp-49h] BYREF

  v50 = -2i64;
  pEnemyShot = this->pEnemyShot;
  if ( !pEnemyShot )
    return 0;
  pOwner = this->pOwner;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(pOwner->vPos.x - pEnemyShot->vPos.x)) & _xmm);
  v5 = ((double (__fastcall *)(ActorChara *))pOwner->GetRivalDistance)(pOwner);
  v6 = *(float *)&v5;
  if ( (float)(v4 - *(float *)&v5) >= 15.0 )
    return 0;
  v7 = this->pOwner->GetTargetActor(this->pOwner);
  v8 = 0;
  if ( this->pEnemyShot->GetActorType((Actor *)this->pEnemyShot) == SHOT )
  {
    v9 = ((__int64 (__fastcall *)(const ActorObject *, int *))this->pEnemyShot->__vftable[1]._branchIsDistance)(
           this->pEnemyShot,
           v49);
    v10 = *(_QWORD *)v9;
    z = *(float *)(v9 + 8);
  }
  else
  {
    v12 = this->pEnemyShot;
    v10 = *(_QWORD *)&v12->vMov.x;
    z = v12->vMov.z;
  }
  *(float *)&result.pData = z;
  *(_QWORD *)&result.iIndex = v10;
  *(__m128i *)&v54._Mystorage._Dummy1 = _mm_load_si128((const __m128i *)&_xmm);
  *(__m128i *)&v54._Mystorage._Ptrs[2] = _mm_load_si128((const __m128i *)&_xmm);
  *(__m128i *)&v54._Mystorage._Ptrs[4] = _mm_load_si128((const __m128i *)&_xmm);
  *(__m128i *)&v54._Mystorage._Ptrs[6] = _mm_load_si128((const __m128i *)&_xmm);
  v51 = 0ui64;
  v52 = 0ui64;
  v53 = 0i64;
  this->seqCtrl.seqCandidateList._Mypair._Myval2._Mylast = this->seqCtrl.seqCandidateList._Mypair._Myval2._Myfirst;
  LODWORD(v53) = 40;
  v13 = *(_DWORD *)&v54._Mystorage._Dummy2[4 * this->iCpuLevel];
  HIDWORD(v53) = v13;
  v14 = this->pEnemyShot;
  if ( v14->iCharNo == 27 && (unsigned int)(v14->iActNo - 287) <= 5 )
  {
    if ( this->pOwner->IsAir(this->pOwner) )
      return 0;
    if ( this->pOwner->GetWallBackDistance(this->pOwner) < 15.0 )
    {
      if ( v6 <= 9.0 )
        v52.m128i_i32[2] += 25;
    }
    else
    {
      if ( v4 >= 20.0 )
        v51.m128i_i32[3] += 10;
      v52.m128i_i32[3] += 25;
    }
    goto LABEL_25;
  }
  if ( *(float *)&result.iIndex == 0.0 )
  {
    if ( v4 >= 25.0 || this->pOwner->IsAir(this->pOwner) )
      return 0;
    v15 = this->pOwner->GetWallBackDistance(this->pOwner);
    v16 = v51.m128i_i32[3];
    v17 = v52.m128i_i32[3];
    v18 = v52.m128i_i32[2];
    if ( v15 < 12.0 )
    {
      v18 = v52.m128i_i32[2] + 25;
      v52.m128i_i32[2] += 25;
    }
    else
    {
      v16 = v51.m128i_i32[3] + 10;
      v51.m128i_i32[3] += 10;
      v17 = v52.m128i_i32[3] + 25;
      v52.m128i_i32[3] += 25;
    }
    if ( v6 < 40.0 )
    {
      iActorStat = v7->iActorStat;
      if ( iActorStat <= 0x13 )
      {
        v20 = 673792;
        if ( _bittest(&v20, iActorStat) )
        {
          v52.m128i_i32[2] = v18 + 10;
          v52.m128i_i32[3] = v17 + 10;
          v51.m128i_i32[3] = v16 + 10;
        }
      }
    }
LABEL_25:
    BattleSystem::SequenceController::CheckSequenceCandidates(
      &this->seqCtrl,
      (CpuSequenceData::SEQUENCE_CATEGORY::ID)20,
      this->iDifficulty,
      0,
      0,
      0);
    goto LABEL_76;
  }
  v8 = (int)ceilf(COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v4 / *(float *)&result.iIndex)) & _xmm));
  if ( !this->pOwner->IsAir(this->pOwner) )
  {
    if ( !v7->IsSkillStatus(v7) || v7->IsAir(v7) )
    {
      if ( v7->IsAir(v7) )
      {
        x = v7->vMov.x;
        if ( v7->iCAngle )
          LODWORD(x) ^= _xmm;
        if ( v8 > 30 )
          return 1;
        if ( (x <= 0.0 || v6 > 30.0) && v6 > 18.0 )
        {
          v32 = v52.m128i_i32[2];
        }
        else
        {
          v32 = v52.m128i_i32[2] + 30;
          v52.m128i_i32[2] += 30;
        }
        if ( v6 >= 40.0 && (unsigned int)(v8 - 16) <= 9 )
          v51.m128i_i32[2] += 15;
        if ( this->guardType == SUPER_CANCEL )
          v52.m128i_i32[2] = v32 + 20;
      }
      else
      {
        if ( v8 > 40 )
          return 1;
        v33 = v52.m128i_i32[2];
        if ( v6 >= 40.0 )
        {
          v33 = v52.m128i_i32[2] + 10;
          if ( (unsigned int)(v8 - 16) > 9 )
            v33 = v52.m128i_i32[2] + 20;
          else
            v51.m128i_i32[2] += 10;
        }
        v34 = v33 + 10;
        v52.m128i_i32[2] = v34;
        if ( v7->GetGuardPower(v7) < 80 )
        {
          v34 += 20;
          v52.m128i_i32[2] = v34;
        }
        if ( this->guardType == SUPER_CANCEL )
          v52.m128i_i32[2] = v34 + 20;
        iDifficulty = this->iDifficulty;
        if ( iDifficulty >= AiLevel_Normal )
        {
          v54._Mystorage._Ptrs[0] = (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)&std::_Func_impl<_lambda_9c3ef8d3bc0a42cf84c6892cd275fc46_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::`vftable';
          LODWORD(v54._Mystorage._Ptrs[1]) = v8;
          v54._Mystorage._Ptrs[7] = (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)&v54;
          BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, iDifficulty, &v54);
        }
      }
    }
    else
    {
      LOBYTE(v21) = 1;
      startupFrame = ((__int64 (__fastcall *)(ActorChara *, _QWORD, __int64, _QWORD))v7->GetActionEndFrame)(
                       v7,
                       (unsigned int)v7->iActNo,
                       v21,
                       0i64)
                   - v7->iActFrame;
      v49[0] = startupFrame;
      if ( v8 <= 6 )
      {
        BattleSystem::SequenceController::CheckSequenceCandidates(
          &this->seqCtrl,
          ACTOR_HIT_GUARD|0x10,
          this->iDifficulty,
          6,
          startupFrame,
          0);
        startupFrame = v49[0];
      }
      if ( v8 > 40 )
        return 1;
      if ( v8 >= 20 )
      {
        v23 = v51.m128i_i32[1];
        if ( startupFrame > (int)this->jumpInfo[0].fFrame - 11 )
        {
          v23 = v51.m128i_i32[1] + 20;
          v51.m128i_i32[1] += 20;
        }
        if ( this->pEnemyShot->vPos.y <= 0.5 && startupFrame > (int)this->jumpInfo[6].fFrame - 11 )
          v52.m128i_i32[0] += 20;
        if ( startupFrame > (int)this->jumpInfo[8].fFrame - 11 )
        {
          v24 = v52.m128i_i32[1] + 10;
          v52.m128i_i32[1] += 10;
          if ( v6 >= (float)(this->jumpInfo[8].fDist - 8.0) )
          {
            v52.m128i_i32[1] = v24 + 10;
            v51.m128i_i32[1] = v23 - 10;
          }
        }
      }
      v25 = v52.m128i_i32[2] + 20;
      v52.m128i_i32[2] += 20;
      v26 = this->pOwner;
      v27 = this->pOwner->__vftable;
      v28 = v27->GetCommonActionID(this->pOwner, 40);
      v29 = ((__int64 (__fastcall *)(ActorChara *, _QWORD, __int64))v27->GetActionEndFrame)(v26, v28, 1i64);
      if ( v49[0] > v29 )
      {
        v25 += 20;
        v30 = v25;
        v52.m128i_i32[2] = v25;
        if ( v6 <= 25.0 )
        {
          v25 += 10;
          v52.m128i_i32[2] = v30 + 10;
        }
      }
      if ( v7->GetGuardPower(v7) < 150 )
      {
        v25 += 15;
        v52.m128i_i32[2] = v25;
      }
      if ( this->guardType == SUPER_CANCEL )
        v52.m128i_i32[2] = v25 + 20;
      v54._Mystorage._Ptrs[0] = (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)&std::_Func_impl<_lambda_e2243fb76984ba2f21776a3bc2a6aa48_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::`vftable';
      LODWORD(v54._Mystorage._Ptrs[1]) = v8;
      v54._Mystorage._Ptrs[7] = (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)&v54;
      BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, this->iDifficulty, &v54);
    }
LABEL_76:
    v36 = 0;
    v51.m128i_i32[0] = BattleSystem::SequenceController::GetSequenceTotalPriority(&this->seqCtrl);
    v37 = &v53;
    v38 = _mm_add_epi32(_mm_loadu_si128(&v52), _mm_loadu_si128(&v51));
    v39 = _mm_add_epi32(v38, _mm_srli_si128(v38, 8));
    v40 = _mm_cvtsi128_si32(_mm_add_epi32(v39, _mm_srli_si128(v39, 4)));
    v41 = 2i64;
    do
    {
      v40 += *(_DWORD *)v37;
      v37 = (__int64 *)((char *)v37 + 4);
      --v41;
    }
    while ( v41 );
    if ( v40 )
    {
      RandInt = BattleSystem::CpuSequence::GetRandInt(0i64, v40, 0);
      v43 = 0;
      v44 = (BattleSystem::CpuSequence *)&v51;
      do
      {
        if ( SLODWORD(v44->pOwner) > 0 )
        {
          v43 += LODWORD(v44->pOwner);
          if ( RandInt < v43 )
            break;
        }
        ++v36;
        v44 = (BattleSystem::CpuSequence *)((char *)v44 + 4);
      }
      while ( v36 < 10 );
      switch ( v36 )
      {
        case 0:
          BattleSystem::SequenceController::GetSelectedSequence(&this->seqCtrl, &result, RandInt);
          if ( this->seqCtrl.pOwner )
          {
            pCpuData = this->seqCtrl.pCpuData;
            if ( pCpuData )
            {
              if ( pCpuData->dataHeader.iSeqSetCount > result.iIndex && result.iIndex >= 0 )
              {
                this->seqCtrl.iSeqListIndex = result.iIndex;
                this->seqCtrl.iSeqCommandIndex = 0;
                BattleSystem::CpuSequence::RequestSeqDataMove(this);
              }
            }
          }
          return 0;
        case 1:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 327680i64;
          this->reqSeq.iType = CLIMAX_CANCEL;
          this->reqSeq.type.jump.iStateCount = 0;
          return 0;
        case 2:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          this->reqSeq.xMaxFrame.value = 327680;
          this->reqSeq.iType = CLIMAX_CANCEL;
          this->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)2i64;
          return 0;
        case 3:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          this->reqSeq.xMaxFrame.value = 327680;
          this->reqSeq.iType = THROW_ESCAPE;
          this->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)1i64;
          return 0;
        case 4:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          this->reqSeq.xMaxFrame.value = 327680;
          this->reqSeq.iType = CLIMAX_CANCEL;
          this->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)6i64;
          return 0;
        case 5:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          this->reqSeq.xMaxFrame.value = 327680;
          this->reqSeq.iType = CLIMAX_CANCEL;
          this->reqSeq.type.moveTarget = (BattleSystem::CpuSequence::SeqParam::Type::MoveTarget)8i64;
          return 0;
        case 6:
          goto $LN79_0;
        case 7:
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          this->reqSeq.iType = JUST_GUARD;
          this->reqSeq.xMaxFrame.value = 327680;
          this->reqSeq.type.moveTarget.iMoveAct = -1;
          return 0;
        default:
          if ( v36 == 8 || this->iCpuLevel >= 10 )
          {
            guardType = this->guardType;
            if ( guardType > NONE && guardType > GUARD_CRASH )
            {
              switch ( guardType )
              {
                case REVERSAL:
                  BattleSystem::CpuSequence::RequestCrouchGuard(this, v8);
                  return 0;
                case SUPER_CANCEL:
                  if ( (unsigned int)(v8 - 1) <= 9 )
                  {
$LN79_0:
                    *(_QWORD *)&this->reqSeq.iType = 0i64;
                    *(_QWORD *)&this->reqSeq.bLocked = 0i64;
                    *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
                    *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
                    this->reqSeq.type.guardDamage.iCancelType = 0;
                    this->reqSeq.iType = JUST_GUARD;
                    this->reqSeq.xMaxFrame.value = 327680;
                    this->reqSeq.type.moveTarget.iMoveAct = 1;
                  }
                  return 0;
                case ADVANCED_CANCEL:
                  return 0;
              }
            }
            BattleSystem::CpuSequence::RequestGuard(this, v8);
            return 0;
          }
          *(_QWORD *)&this->reqSeq.iType = 0i64;
          *(_QWORD *)&this->reqSeq.bLocked = 0i64;
          *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
          *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
          this->reqSeq.type.guardDamage.iCancelType = 0;
          this->reqSeq.iType = COUNTER_HIT;
          if ( this->iCpuLevel < 13 )
            this->reqSeq.xMaxFrame.value = (unsigned int)BattleSystem::CpuSequence::GetRandInt(v44, 30, 5) << 16;
          else
            this->reqSeq.xMaxFrame.value = (unsigned int)BattleSystem::CpuSequence::GetRandInt(v44, 5, 1) << 16;
          break;
      }
    }
    return 0;
  }
  LODWORD(v53) = 0;
  v54._Mystorage._Ptrs[0] = (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)&std::_Func_impl<_lambda_5c99d886ac0bb88c70abbd88b9364fdf_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::`vftable';
  v54._Mystorage._Ptrs[7] = (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)&v54;
  if ( BattleSystem::SequenceController::CheckSequenceCandidates(&this->seqCtrl, this->iDifficulty, &v54) )
  {
    HIDWORD(v53) = v13 + 50;
    goto LABEL_76;
  }
  return 1;
}

void __fastcall BattleSystem::CpuSequence::UpdateTrainingMove(BattleSystem::CpuSequence *this, _BOOL8 a2)
{
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v4; // rdi
  bool v5; // zf
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *p_cmdCheckFunc; // rdi
  std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int> *v7; // rcx
  std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int> *v8; // rcx
  int v9; // eax
  BattleSystem::BattleController *v10; // [rsp+40h] [rbp+8h]
  BattleSystem::BattleController *v11; // [rsp+40h] [rbp+8h]

  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v10 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v10);
    BattleSystem::BattleController::instance = v3;
  }
  v4 = v3;
  if ( !v3 )
  {
    v11 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v11);
    BattleSystem::BattleController::instance = v3;
  }
  this->xSeqWaitFrame.value -= v3->actSystem.xPlaySpeed.value;
  if ( this->xSeqWaitFrame.value < 0 )
    this->xSeqWaitFrame.value = 0;
  v5 = v4->roundPhase == DIE;
  p_cmdCheckFunc = &this->cmdCheckFunc;
  if ( v5 )
  {
    while ( 1 )
    {
      v8 = this->cmdCheckFunc._Mystorage._Ptrs[7];
      if ( v8 )
      {
        LOBYTE(a2) = v8 != (std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int> *)p_cmdCheckFunc;
        v8->_Delete_this(v8, a2);
        this->cmdCheckFunc._Mystorage._Ptrs[7] = 0i64;
      }
      this->iCmdFuncOption = 0;
      if ( this->reqSeq.iType )
      {
        if ( !this->nowSeq.bLocked )
        {
          *(_OWORD *)&this->nowSeq.iType = *(_OWORD *)&this->reqSeq.iType;
          *(_OWORD *)&this->nowSeq.xMaxFrame.value = *(_OWORD *)&this->reqSeq.xMaxFrame.value;
          this->nowSeq.type.guardDamage.iCancelType = this->reqSeq.type.guardDamage.iCancelType;
        }
        *(_QWORD *)&this->reqSeq.iType = 0i64;
        *(_QWORD *)&this->reqSeq.bLocked = 0i64;
        *(_QWORD *)&this->reqSeq.xMaxFrame.value = 0i64;
        *(_QWORD *)&this->reqSeq.type.guardDamage.iTargetActNo = 0i64;
        this->reqSeq.type.guardDamage.iCancelType = 0;
      }
      switch ( this->nowSeq.iType )
      {
        case 0x13:
          v9 = BattleSystem::CpuSequence::SeqTrainingAction(this);
          break;
        case 0x14:
          v9 = BattleSystem::CpuSequence::SeqTrainingJump(this);
          break;
        case 0x15:
          if ( this->pOwner->IsDamaged(this->pOwner) || this->pOwner->iActorStat == 13 )
          {
            this->nowSeq.iType = (this->nowSeq.type.moveTarget.iMoveAct >= 6) + 19;
          }
          else
          {
            std::function<CommandData::Setting const * (BattleSystem::CpuSequence &,int)>::operator=<CommandData::Setting const * (&)(BattleSystem::CpuSequence &,int),CommandData::Setting const *,void>(
              &this->cmdCheckFunc,
              (const CommandData::Setting *(__fastcall *)(BattleSystem::CpuSequence *, int))BattleSystem::CmdCommonGeneral);
            this->iCmdFuncOption = 10;
          }
          goto LABEL_34;
        case 0x16:
          v9 = BattleSystem::CpuSequence::SeqTutorialNearAttack(this);
          break;
        case 0x17:
          v9 = BattleSystem::CpuSequence::SeqTutorialBackJumpAttack(this);
          break;
        default:
          goto LABEL_34;
      }
      if ( v9 != 2 )
        break;
      *(_QWORD *)&this->nowSeq.iType = 0i64;
      *(_QWORD *)&this->nowSeq.bLocked = 0i64;
      *(_QWORD *)&this->nowSeq.xMaxFrame.value = 0i64;
      *(_QWORD *)&this->nowSeq.type.guardDamage.iTargetActNo = 0i64;
      this->nowSeq.type.guardDamage.iCancelType = 0;
      this->xSeqWaitFrame.value = 0;
    }
    if ( v9 == 1 )
    {
      *(_QWORD *)&this->nowSeq.iType = 0i64;
      *(_QWORD *)&this->nowSeq.bLocked = 0i64;
      *(_QWORD *)&this->nowSeq.xMaxFrame.value = 0i64;
      *(_QWORD *)&this->nowSeq.type.guardDamage.iTargetActNo = 0i64;
      this->nowSeq.type.guardDamage.iCancelType = 0;
    }
  }
  else
  {
    v7 = this->cmdCheckFunc._Mystorage._Ptrs[7];
    if ( v7 )
    {
      LOBYTE(a2) = v7 != (std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int> *)p_cmdCheckFunc;
      v7->_Delete_this(v7, a2);
      this->cmdCheckFunc._Mystorage._Ptrs[7] = 0i64;
    }
    this->iCmdFuncOption = 0;
  }
LABEL_34:
  this->pValidCommand = 0i64;
}

std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int> *__fastcall std::_Func_impl<CommandData::Setting const * (*)(BattleSystem::CpuSequence &,int),std::allocator<int>,CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Copy(
        std::_Func_impl<CommandData::Setting const * (__cdecl*)(BattleSystem::CpuSequence &,int),std::allocator<int>,CommandData::Setting const *,BattleSystem::CpuSequence &,int> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<CommandData::Setting const * (*)(BattleSystem::CpuSequence &,int),std::allocator<int>,CommandData::Setting const *,BattleSystem::CpuSequence &,int>::`vftable';
    *((_QWORD *)_Where + 1) = this->_Mypair._Myval2;
  }
  return (std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int> *)_Where;
}

std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *__fastcall std::_Func_impl<_lambda_277775b946f671ac95fcfa25bbb7ee46_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Copy(
        std::_Func_impl<<lambda_277775b946f671ac95fcfa25bbb7ee46>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<_lambda_277775b946f671ac95fcfa25bbb7ee46_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::`vftable';
    *((_DWORD *)_Where + 2) = this->_Mypair._Myval2.tmp;
  }
  return (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)_Where;
}

std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *__fastcall std::_Func_impl<_lambda_2fcb0e087167c4c775eae33fc63ce21a_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Copy(
        std::_Func_impl<<lambda_2fcb0e087167c4c775eae33fc63ce21a>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<_lambda_2fcb0e087167c4c775eae33fc63ce21a_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::`vftable';
    *((_DWORD *)_Where + 2) = this->_Mypair._Myval2.tmp;
  }
  return (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)_Where;
}

std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *__fastcall std::_Func_impl<_lambda_5c99d886ac0bb88c70abbd88b9364fdf_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Copy(
        std::_Func_impl<<lambda_5c99d886ac0bb88c70abbd88b9364fdf>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this,
        void *_Where)
{
  if ( _Where )
    *(_QWORD *)_Where = &std::_Func_impl<_lambda_5c99d886ac0bb88c70abbd88b9364fdf_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::`vftable';
  return (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)_Where;
}

std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *__fastcall std::_Func_impl<_lambda_9c3ef8d3bc0a42cf84c6892cd275fc46_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Copy(
        std::_Func_impl<<lambda_9c3ef8d3bc0a42cf84c6892cd275fc46>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<_lambda_9c3ef8d3bc0a42cf84c6892cd275fc46_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::`vftable';
    *((_DWORD *)_Where + 2) = this->_Mypair._Myval2.hitFrame;
  }
  return (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)_Where;
}

std::_Func_base<void,Actor &> *__fastcall std::_Func_impl<_lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3_,std::allocator<int>,void,Actor &>::_Copy(
        std::_Func_impl<<lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3>,std::allocator<int>,void,Actor &> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<_lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3_,std::allocator<int>,void,Actor &>::`vftable';
    *(std::_Compressed_pair<std::allocator<int>,<lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3>,1> *)((char *)_Where + 8) = this->_Mypair;
  }
  return (std::_Func_base<void,Actor &> *)_Where;
}

std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *__fastcall std::_Func_impl<_lambda_dc09dbd38a6026c05e676ba95485d4c1_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Move(
        std::_Func_impl<<lambda_dc09dbd38a6026c05e676ba95485d4c1>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<_lambda_dc09dbd38a6026c05e676ba95485d4c1_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::`vftable';
    *(std::_Compressed_pair<std::allocator<int>,<lambda_dc09dbd38a6026c05e676ba95485d4c1>,1> *)((char *)_Where + 8) = this->_Mypair;
  }
  return (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)_Where;
}

std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *__fastcall std::_Func_impl<_lambda_e2243fb76984ba2f21776a3bc2a6aa48_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Move(
        std::_Func_impl<<lambda_e2243fb76984ba2f21776a3bc2a6aa48>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<_lambda_e2243fb76984ba2f21776a3bc2a6aa48_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::`vftable';
    *((_DWORD *)_Where + 2) = this->_Mypair._Myval2.hitFrame;
  }
  return (std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *)_Where;
}

void __fastcall std::_Func_impl<CommandData::Setting const * (*)(BattleSystem::CpuSequence &,int),std::allocator<int>,CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Delete_this(
        std::_Func_impl<CommandData::Setting const * (__cdecl*)(BattleSystem::CpuSequence &,int),std::allocator<int>,CommandData::Setting const *,BattleSystem::CpuSequence &,int> *this,
        bool _Deallocate)
{
  this->__vftable = (std::_Func_impl<CommandData::Setting const * (__cdecl*)(BattleSystem::CpuSequence &,int),std::allocator<int>,CommandData::Setting const *,BattleSystem::CpuSequence &,int>_vtbl *)&std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int>::`vftable';
  if ( _Deallocate )
    operator delete(this);
}

void __fastcall std::_Func_impl<_lambda_e2243fb76984ba2f21776a3bc2a6aa48_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Delete_this(
        std::_Func_impl<<lambda_e2243fb76984ba2f21776a3bc2a6aa48>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this,
        bool _Deallocate)
{
  this->__vftable = (std::_Func_impl<<lambda_e2243fb76984ba2f21776a3bc2a6aa48>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>_vtbl *)&std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &>::`vftable';
  if ( _Deallocate )
    operator delete(this);
}

void __fastcall std::_Func_impl<_lambda_536343e0c1c203f5657bb579fcc2982e_,std::allocator<int>,void,Actor &>::_Delete_this(
        std::_Func_impl<<lambda_ad3ff183b2c7791a4bd3e61110463e86>,std::allocator<int>,void,Actor &> *this,
        bool _Deallocate)
{
  this->__vftable = (std::_Func_impl<<lambda_ad3ff183b2c7791a4bd3e61110463e86>,std::allocator<int>,void,Actor &>_vtbl *)&std::_Func_base<void,Actor &>::`vftable';
  if ( _Deallocate )
    operator delete(this);
}

const CommandData::Setting *__fastcall std::_Func_impl<CommandData::Setting const * (*)(BattleSystem::CpuSequence &,int),std::allocator<int>,CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Do_call(
        std::_Func_impl<CommandData::Setting const * (__cdecl*)(BattleSystem::CpuSequence &,int),std::allocator<int>,CommandData::Setting const *,BattleSystem::CpuSequence &,int> *this,
        BattleSystem::CpuSequence *<_Args_0>,
        int *<_Args_1>)
{
  return this->_Mypair._Myval2(<_Args_0>, (unsigned int)*<_Args_1>);
}

bool __fastcall std::_Func_impl<_lambda_277775b946f671ac95fcfa25bbb7ee46_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Do_call(
        std::_Func_impl<<lambda_277775b946f671ac95fcfa25bbb7ee46>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this,
        ActorChara **<_Args_0>,
        const CpuSequenceData::SequenceData *<_Args_1>)
{
  int iCategory; // eax
  bool result; // al
  __int16 iStartupFrame; // ax

  result = 0;
  if ( (*<_Args_0>)->vMov.y <= 0.0 || (<_Args_1>->header.iOptionFlag & 4) != 0 )
  {
    iCategory = <_Args_1>->header.iCategory;
    if ( iCategory == 11 )
      return 1;
    if ( (unsigned int)(iCategory - 7) <= 4 )
    {
      iStartupFrame = <_Args_1>->header.iStartupFrame;
      if ( iStartupFrame )
      {
        if ( iStartupFrame < this->_Mypair._Myval2.tmp )
          return 1;
      }
      if ( <_Args_1>->header.iMutekiFrame >= this->_Mypair._Myval2.tmp + 2 )
        return 1;
    }
  }
  return result;
}

bool __fastcall std::_Func_impl<_lambda_2fcb0e087167c4c775eae33fc63ce21a_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Do_call(
        std::_Func_impl<<lambda_2fcb0e087167c4c775eae33fc63ce21a>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this,
        ActorChara **<_Args_0>,
        const CpuSequenceData::SequenceData *<_Args_1>)
{
  int iCategory; // eax
  bool result; // al
  __int16 iStartupFrame; // ax

  iCategory = <_Args_1>->header.iCategory;
  result = 1;
  if ( iCategory != 14 )
  {
    if ( (unsigned int)(iCategory - 12) > 2 )
      return 0;
    iStartupFrame = <_Args_1>->header.iStartupFrame;
    if ( (!iStartupFrame || iStartupFrame >= this->_Mypair._Myval2.tmp)
      && <_Args_1>->header.iMutekiFrame < this->_Mypair._Myval2.tmp + 2 )
    {
      return 0;
    }
  }
  return result;
}

bool __fastcall std::_Func_impl<_lambda_5c99d886ac0bb88c70abbd88b9364fdf_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Do_call(
        std::_Func_impl<<lambda_5c99d886ac0bb88c70abbd88b9364fdf>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this,
        ActorChara **<_Args_0>,
        const CpuSequenceData::SequenceData *<_Args_1>)
{
  return ((<_Args_1>->header.iCategory - 9) & 0xFFFFFFFD) == 0
      && ((*<_Args_0>)->vMov.y <= 0.0 || (<_Args_1>->header.iOptionFlag & 4) != 0);
}

bool __fastcall std::_Func_impl<_lambda_9c3ef8d3bc0a42cf84c6892cd275fc46_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Do_call(
        std::_Func_impl<<lambda_9c3ef8d3bc0a42cf84c6892cd275fc46>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this,
        ActorChara **<_Args_0>,
        const CpuSequenceData::SequenceData *<_Args_1>)
{
  __int16 iMutekiFrame; // ax
  bool result; // al
  __int16 iStartupFrame; // ax
  int hitFrame; // ecx

  result = 0;
  if ( <_Args_1>->header.iCategory == 19 )
  {
    iMutekiFrame = <_Args_1>->header.iMutekiFrame;
    if ( iMutekiFrame > 0 && iMutekiFrame >= this->_Mypair._Myval2.hitFrame )
      return 1;
    iStartupFrame = <_Args_1>->header.iStartupFrame;
    if ( iStartupFrame > 0 )
    {
      hitFrame = this->_Mypair._Myval2.hitFrame;
      if ( hitFrame <= 15 && iStartupFrame + 1 < hitFrame )
        return 1;
    }
  }
  return result;
}

void __fastcall std::_Func_impl<_lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3_,std::allocator<int>,void,Actor &>::_Do_call(
        std::_Func_impl<<lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3>,std::allocator<int>,void,Actor &> *this,
        Actor *<_Args_0>)
{
  lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3_::operator()((Actor *)&this->_Mypair, <_Args_0>);
}

char __fastcall std::_Func_impl<_lambda_dc09dbd38a6026c05e676ba95485d4c1_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Do_call(
        std::_Func_impl<<lambda_dc09dbd38a6026c05e676ba95485d4c1>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this,
        ActorChara **<_Args_0>,
        const CpuSequenceData::SequenceData *<_Args_1>)
{
  int iCategory; // eax
  bool v5; // cc
  __int16 iStartupFrame; // ax

  iCategory = <_Args_1>->header.iCategory;
  if ( this->_Mypair._Myval2.__this->guardType == ADVANCED_CANCEL )
  {
    if ( iCategory == 22 )
      return 1;
    v5 = iCategory < 6;
  }
  else
  {
    v5 = iCategory < 6;
    if ( iCategory == 6 )
      return 1;
  }
  if ( !v5 )
  {
    iStartupFrame = <_Args_1>->header.iStartupFrame;
    if ( iStartupFrame )
    {
      if ( iStartupFrame < this->_Mypair._Myval2.tmp )
        return 1;
    }
    if ( <_Args_1>->header.iMutekiFrame >= this->_Mypair._Myval2.tmp + 2 )
      return 1;
  }
  return 0;
}

char __fastcall std::_Func_impl<_lambda_e2243fb76984ba2f21776a3bc2a6aa48_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Do_call(
        std::_Func_impl<<lambda_e2243fb76984ba2f21776a3bc2a6aa48>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this,
        ActorChara **<_Args_0>,
        const CpuSequenceData::SequenceData *<_Args_1>)
{
  __int16 iMutekiFrame; // ax
  __int16 iStartupFrame; // ax

  if ( <_Args_1>->header.iCategory == 19 )
  {
    iMutekiFrame = <_Args_1>->header.iMutekiFrame;
    if ( iMutekiFrame > 0 && iMutekiFrame >= this->_Mypair._Myval2.hitFrame )
      return 1;
    iStartupFrame = <_Args_1>->header.iStartupFrame;
    if ( iStartupFrame <= 0 )
    {
      if ( this->_Mypair._Myval2.hitFrame >= 15 )
        return 1;
    }
    else if ( iStartupFrame + 1 < this->_Mypair._Myval2.hitFrame )
    {
      return 1;
    }
  }
  return 0;
}

std::_Align_type<double,64> *__fastcall __Get____Func_impl_U_unnamed_type_nothing___1__InstallGFxInterface_extension__YAXXZ_V__allocator_H_std__VValue_GFx_Scaleform__AEAVGFXIMovieContext_3_PEBV678_I_std__EEBAPEBXXZ(
        _Mtx_internal_imp_t *mtx)
{
  return &mtx->cs;
}

void __fastcall std::_Func_class<CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Reset_move(
        std::_Func_class<void> *this,
        std::_Func_class<void> *_Right)
{
  std::_Func_base<void> *v4; // rcx
  __int64 v5; // rdx
  std::_Func_class<void> *v6; // rcx

  v4 = _Right->_Mystorage._Ptrs[7];
  if ( v4 )
  {
    if ( v4 == (std::_Func_base<void> *)_Right )
    {
      this->_Mystorage._Ptrs[7] = v4->_Move(v4, this);
      v6 = (std::_Func_class<void> *)_Right->_Mystorage._Ptrs[7];
      if ( v6 )
      {
        LOBYTE(v5) = v6 != _Right;
        ((void (__fastcall *)(std::_Func_class<void> *, __int64))v6->_Mystorage._Ptrs[0][4].__vftable)(v6, v5);
        _Right->_Mystorage._Ptrs[7] = 0i64;
      }
    }
    else
    {
      this->_Mystorage._Ptrs[7] = v4;
      _Right->_Mystorage._Ptrs[7] = 0i64;
    }
  }
}

void __fastcall std::_Func_class<CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Swap(
        std::_Func_class<void> *this,
        std::_Func_class<void> *_Right)
{
  std::_Func_base<void> *v4; // rcx
  std::_Func_base<void> *v5; // rax
  __int64 v6; // rdx
  std::_Func_class<void> *v7; // rcx
  std::_Func_class<void> *p_Righta; // rdx
  std::_Func_class<void> _Righta; // [rsp+30h] [rbp-58h] BYREF

  v4 = this->_Mystorage._Ptrs[7];
  if ( v4 == (std::_Func_base<void> *)this || (v5 = _Right->_Mystorage._Ptrs[7], v5 == (std::_Func_base<void> *)_Right) )
  {
    _Righta._Mystorage._Ptrs[7] = 0i64;
    if ( v4 )
    {
      if ( v4 == (std::_Func_base<void> *)this )
      {
        _Righta._Mystorage._Ptrs[7] = v4->_Move(v4, &_Righta);
        v7 = (std::_Func_class<void> *)this->_Mystorage._Ptrs[7];
        if ( v7 )
        {
          LOBYTE(v6) = v7 != this;
          ((void (__fastcall *)(std::_Func_class<void> *, __int64))v7->_Mystorage._Ptrs[0][4].__vftable)(v7, v6);
          this->_Mystorage._Ptrs[7] = 0i64;
        }
      }
      else
      {
        _Righta._Mystorage._Ptrs[7] = v4;
        this->_Mystorage._Ptrs[7] = 0i64;
      }
    }
    std::_Func_class<CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Reset_move(this, _Right);
    std::_Func_class<CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Reset_move(_Right, &_Righta);
    if ( _Righta._Mystorage._Ptrs[7] )
    {
      p_Righta = &_Righta;
      LOBYTE(p_Righta) = _Righta._Mystorage._Ptrs[7] != (std::_Func_base<void> *)&_Righta;
      _Righta._Mystorage._Ptrs[7]->_Delete_this(_Righta._Mystorage._Ptrs[7], (bool)p_Righta);
    }
  }
  else
  {
    this->_Mystorage._Ptrs[7] = v5;
    _Right->_Mystorage._Ptrs[7] = v4;
  }
}

void ***__fastcall std::_Func_impl<CommandData::Setting const * (*)(BattleSystem::CpuSequence &,int),std::allocator<int>,CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Target_type(
        std::_Func_impl<CommandData::Setting const * (__cdecl*)(BattleSystem::CpuSequence &,int),std::allocator<int>,CommandData::Setting const *,BattleSystem::CpuSequence &,int> *this)
{
  return &CommandData::Setting const * (*)(BattleSystem::CpuSequence &,int) `RTTI Type Descriptor';
}

const type_info *__fastcall std::_Func_impl<_lambda_277775b946f671ac95fcfa25bbb7ee46_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Target_type(
        std::_Func_impl<<lambda_277775b946f671ac95fcfa25bbb7ee46>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this)
{
  return (const type_info *)&_lambda_277775b946f671ac95fcfa25bbb7ee46_ `RTTI Type Descriptor';
}

const type_info *__fastcall std::_Func_impl<_lambda_2fcb0e087167c4c775eae33fc63ce21a_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Target_type(
        std::_Func_impl<<lambda_2fcb0e087167c4c775eae33fc63ce21a>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this)
{
  return (const type_info *)&_lambda_2fcb0e087167c4c775eae33fc63ce21a_ `RTTI Type Descriptor';
}

const type_info *__fastcall std::_Func_impl<_lambda_5c99d886ac0bb88c70abbd88b9364fdf_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Target_type(
        std::_Func_impl<<lambda_5c99d886ac0bb88c70abbd88b9364fdf>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this)
{
  return (const type_info *)&_lambda_5c99d886ac0bb88c70abbd88b9364fdf_ `RTTI Type Descriptor';
}

const type_info *__fastcall std::_Func_impl<_lambda_9c3ef8d3bc0a42cf84c6892cd275fc46_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Target_type(
        std::_Func_impl<<lambda_9c3ef8d3bc0a42cf84c6892cd275fc46>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this)
{
  return (const type_info *)&_lambda_9c3ef8d3bc0a42cf84c6892cd275fc46_ `RTTI Type Descriptor';
}

const type_info *__fastcall std::_Func_impl<_lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3_,std::allocator<int>,void,Actor &>::_Target_type(
        std::_Func_impl<<lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3>,std::allocator<int>,void,Actor &> *this)
{
  return (const type_info *)&_lambda_b1f8e52633ef0f4d43aa8ed39ad2abb3_ `RTTI Type Descriptor';
}

const type_info *__fastcall std::_Func_impl<_lambda_dc09dbd38a6026c05e676ba95485d4c1_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Target_type(
        std::_Func_impl<<lambda_dc09dbd38a6026c05e676ba95485d4c1>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this)
{
  return (const type_info *)&_lambda_dc09dbd38a6026c05e676ba95485d4c1_ `RTTI Type Descriptor';
}

const type_info *__fastcall std::_Func_impl<_lambda_e2243fb76984ba2f21776a3bc2a6aa48_,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &>::_Target_type(
        std::_Func_impl<<lambda_e2243fb76984ba2f21776a3bc2a6aa48>,std::allocator<int>,bool,ActorChara *,CpuSequenceData::SequenceData const &> *this)
{
  return (const type_info *)&_lambda_e2243fb76984ba2f21776a3bc2a6aa48_ `RTTI Type Descriptor';
}

