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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
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
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
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
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
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
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"

bool Collision::_isStageRightWallHit(ActorObject * pGT, float x); // 0x1400E0980
float Collision::ActorStageBoaderCheck(ActorChara * pGT, float centerX); // 0x1400E09D0
void Collision::ActorWallHitBackCheck(ActorChara * pGT, float centerX); // 0x1400E0C20
void Collision::BodyPushCheck(float centerX); // 0x1400E0D60
void Collision::BodyVsBody(const Collision::HitRectWork & p1, const Collision::HitRectWork & p2, float centerX); // 0x1400E0F10
long <lambda_63188078b30aa4a92549b267716e326e>::operator()(); // 0x1400E1550
class Collision::BodyVsBody::__l13::<lambda_63188078b30aa4a92549b267716e326e>
{
public:
	long operator()();
	<lambda_63188078b30aa4a92549b267716e326e>(Collision::BodyVsBody::__l13::<lambda_63188078b30aa4a92549b267716e326e> &);
	<lambda_63188078b30aa4a92549b267716e326e>();
	<lambda_63188078b30aa4a92549b267716e326e>(ActorObject * &, ActorObject * &, float &, float &, float &, float &);
private:
	ActorObject * & pGT1; // 0x0
	ActorObject * & pGT2; // 0x8
	float & prevPos_x1; // 0x10
	float & prevPos_x2; // 0x18
	float & prevPos_y1; // 0x20
	float & prevPos_y2; // 0x28
public:
	Collision::BodyVsBody::__l13::<lambda_63188078b30aa4a92549b267716e326e> & operator=(const Collision::BodyVsBody::__l13::<lambda_63188078b30aa4a92549b267716e326e> &);
};
bool <lambda_5d4b918d04f119502a9ba4f43ac3ea0e>::operator()(ActorObject * pObj, ActorObject * pAtkObj); // 0x1400E1870
class Collision::BodyVsBody::__l14::<lambda_5d4b918d04f119502a9ba4f43ac3ea0e>
{
public:
	bool operator()(ActorObject *, ActorObject *);
private:
	static bool <lambda_invoker_cdecl>(ActorObject *, ActorObject *);
	typedef bool(*<lambda_typedef_cdecl>)(ActorObject *, ActorObject *);
public:
	bool(*)(ActorObject *, ActorObject *) operator bool (__cdecl *)(class ActorObject *,class ActorObject *)();
private:
	static bool <lambda_invoker_vectorcall>(ActorObject *, ActorObject *);
	typedef bool(*<lambda_typedef_vectorcall>)(ActorObject *, ActorObject *);
public:
	bool(*)(ActorObject *, ActorObject *) operator bool (__vectorcall *)(class ActorObject *,class ActorObject *)();
	<lambda_5d4b918d04f119502a9ba4f43ac3ea0e>(Collision::BodyVsBody::__l14::<lambda_5d4b918d04f119502a9ba4f43ac3ea0e> &);
	<lambda_5d4b918d04f119502a9ba4f43ac3ea0e>();
	Collision::BodyVsBody::__l14::<lambda_5d4b918d04f119502a9ba4f43ac3ea0e> & operator=(const Collision::BodyVsBody::__l14::<lambda_5d4b918d04f119502a9ba4f43ac3ea0e> &);
};
std::piecewise_construct_t std::piecewise_construct; // 0x14089B33E
void Collision::PlayerPushCheck(ActionSystem & actSys); // 0x1400E1920//decompilation failure at 14089B33E!
bool __fastcall lambda_5d4b918d04f119502a9ba4f43ac3ea0e_::operator()(
        ActorObject *pObj,
        ActorObject *pAtkObj,
        unsigned int *a3)
{
  return (pAtkObj->GetActorType(pAtkObj) == CHARA
       || !(*(unsigned int (__fastcall **)(unsigned int *))(*(_QWORD *)a3 + 440i64))(a3))
      && !pAtkObj->iActFrame
      && pAtkObj->bActionNewFrame
      && !((unsigned __int8 (__fastcall *)(ActorObject *))pAtkObj->__vftable[1].UpdatePosition)(pAtkObj)
      && (((unsigned __int8 (__fastcall *)(ActorObject *))pAtkObj->__vftable[1].SetIgnoreSystemPlayRate)(pAtkObj)
       || pAtkObj->__vftable[1].IsHitStopFreeze(pAtkObj))
      && (*(unsigned int (__fastcall **)(unsigned int *, _QWORD, _QWORD))(*(_QWORD *)a3 + 512i64))(a3, a3[103], 0i64) != 2;
}

__int64 __fastcall lambda_63188078b30aa4a92549b267716e326e_::operator()(ActorObject ***a1)
{
  __int64 v2; // rdi
  unsigned __int8 v3; // bl
  float v4; // xmm6_4
  ActorObject *v5; // rbx
  __int64 result; // rax
  float v7; // xmm6_4
  _BYTE *v8; // rbx
  bool v9; // zf
  _DWORD *v10; // rdx
  ActorObject *v11; // rdi
  char v12; // bl
  char v13; // bl
  ActorObject **v14; // rax
  float v15; // xmm6_4
  ActorObject *v16; // rbx
  float v17; // xmm6_4
  _BYTE *v18; // rbx
  ActorObject **v19; // rax
  float y; // xmm0_4
  ActorObject *v21; // rdi
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm1_4

  v2 = (__int64)*a1[1];
  v3 = (**a1)->IsWallBack(**a1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 1928i64))(v2) == v3 )
  {
    v10 = *a1[1];
    result = (unsigned int)(**a1)->iCAngle;
    if ( (_DWORD)result != v10[99] )
      return result;
    v11 = **a1;
    v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 1936i64))(*a1[1]);
    v13 = ((__int64 (__fastcall *)(ActorObject *))v11->IsPreferenceWall)(v11) ^ v12;
    v14 = *a1;
    if ( v13 )
    {
      if ( (*v14)->IsPreferenceWall(*v14) )
      {
        v15 = *(float *)a1[2];
        v16 = **a1;
        if ( v16->GetActorType(v16) || (v16->iActFlg2 & 0x10) != 0 || v15 > -80.0 )
        {
          if ( Collision::_isStageRightWallHit(**a1, *(float *)a1[2]) )
            return 1i64;
          return (unsigned int)(**a1)->iCAngle;
        }
      }
      else
      {
        v17 = *(float *)a1[3];
        v18 = *a1[1];
        if ( !(*(unsigned int (__fastcall **)(_BYTE *))(*(_QWORD *)v18 + 440i64))(v18)
          && (v18[632] & 0x10) == 0
          && v17 <= -80.0 )
        {
          return 1i64;
        }
        if ( !Collision::_isStageRightWallHit(*a1[1], *(float *)a1[3]) )
          return (*a1[1])->iCAngle == 0;
      }
    }
    else
    {
      v5 = *v14;
      v19 = a1[1];
      y = v5->vPos.y;
      v21 = *v19;
      v22 = (*v19)->vPos.y;
      if ( v22 > y )
      {
        v4 = *(float *)a1[2];
        goto LABEL_4;
      }
      if ( y > v22 )
      {
        v7 = *(float *)a1[3];
        if ( v21->GetActorType(*v19) )
          goto LABEL_14;
        v9 = (v21->iActFlg2 & 0x10) == 0;
        goto LABEL_12;
      }
      v23 = *(float *)a1[4];
      v24 = *(float *)a1[5];
      if ( v24 > v23 )
      {
        v4 = *(float *)a1[2];
        goto LABEL_4;
      }
      if ( v23 > v24 )
      {
        v7 = *(float *)a1[3];
        if ( v21->GetActorType(v21) )
          goto LABEL_14;
        v9 = (v21->iActFlg2 & 0x10) == 0;
LABEL_12:
        if ( v9 && v7 <= -80.0 )
          return 1i64;
LABEL_14:
        if ( !Collision::_isStageRightWallHit(*a1[1], *(float *)a1[3]) )
          return (unsigned int)(*a1[1])->iCAngle;
      }
    }
    return 0i64;
  }
  if ( !(**a1)->IsWallBack(**a1) )
  {
    v7 = *(float *)a1[3];
    v8 = *a1[1];
    if ( (*(unsigned int (__fastcall **)(_BYTE *))(*(_QWORD *)v8 + 440i64))(v8) )
      goto LABEL_14;
    v9 = (v8[632] & 0x10) == 0;
    goto LABEL_12;
  }
  v4 = *(float *)a1[2];
  v5 = **a1;
LABEL_4:
  if ( v5->GetActorType(v5) == CHARA && (v5->iActFlg2 & 0x10) == 0 && v4 <= -80.0 )
    return 0i64;
  if ( Collision::_isStageRightWallHit(**a1, *(float *)a1[2]) )
    return 1i64;
  return (**a1)->iCAngle == 0;
}

float __fastcall Collision::ActorStageBoaderCheck(ActorChara *pGT, float centerX)
{
  ActorChara *v2; // r9
  float v3; // xmm3_4
  bool v4; // r11
  std::bitset<61>::reference *v5; // rax
  int v6; // er10
  float v7; // xmm4_4
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v9; // rax
  int v10; // er10
  unsigned __int64 v11; // rdx
  std::bitset<61>::reference *v12; // rax
  unsigned __int64 v13; // rdx
  float v14; // xmm1_4
  std::bitset<61>::reference *v15; // rax
  unsigned __int64 v16; // rdx
  float v17; // xmm3_4
  std::bitset<61>::reference result; // [rsp+28h] [rbp-30h] BYREF

  v2 = pGT;
  v3 = pGT->vPos.x + pGT->vColOff.x;
  v4 = (pGT->iActFlg2 & 0x18) == 0;
  if ( (pGT->iActFlg2 & 0x10) != 0 )
    goto LABEL_17;
  if ( (pGT->iActFlg2 & 0x18) == 0 )
  {
    if ( (float)(centerX - 26.25) >= -80.0 )
    {
      if ( (float)(centerX + 26.25) > 80.0 )
        centerX = FLOAT_53_75;
    }
    else
    {
      centerX = FLOAT_N53_75;
    }
  }
  if ( v3 <= -80.0 )
  {
    v5 = std::bitset<21>::operator[]((std::bitset<61> *)&pGT->systemFlag, &result, 0i64);
    Mypos = v5->_Mypos;
    if ( Mypos >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v5->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (v5->_Mypos & 0x3F);
    if ( v6 )
    {
      centerX = v7;
      goto LABEL_18;
    }
LABEL_17:
    if ( !v4 )
      goto LABEL_26;
    goto LABEL_18;
  }
  if ( v3 < 80.0 )
    goto LABEL_17;
  v9 = std::bitset<21>::operator[]((std::bitset<61> *)&pGT->systemFlag, &result, 1ui64);
  v11 = v9->_Mypos;
  if ( v11 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v9->_Pbitset[v11 >> 6]._Array[0] |= 1i64 << (v9->_Mypos & 0x3F);
  if ( !v10 )
    goto LABEL_17;
  centerX = FLOAT_53_75;
LABEL_18:
  if ( (float)(centerX - 26.25) < v3 )
  {
    v14 = centerX + 26.25;
    if ( v3 >= v14 )
    {
      v2->vPos.x = v14 - v2->vColOff.x;
      v15 = std::bitset<21>::operator[]((std::bitset<61> *)&v2->systemFlag, &result, 3ui64);
      v16 = v15->_Mypos;
      if ( v16 >= 0x3E )
        std::_Xout_of_range("invalid bitset<N> position");
      v15->_Pbitset[v16 >> 6]._Array[0] |= 1i64 << (v15->_Mypos & 0x3F);
    }
  }
  else
  {
    v2->vPos.x = (float)(centerX - 26.25) - v2->vColOff.x;
    v12 = std::bitset<21>::operator[]((std::bitset<61> *)&v2->systemFlag, &result, 2ui64);
    v13 = v12->_Mypos;
    if ( v13 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v12->_Pbitset[v13 >> 6]._Array[0] |= 1i64 << (v12->_Mypos & 0x3F);
  }
LABEL_26:
  v17 = v3 - (float)(v2->vPos.x + v2->vColOff.x);
  v2->vBasePos.x = v2->vBasePos.x - v17;
  return v17;
}

void __fastcall Collision::ActorWallHitBackCheck(ActorChara *pGT, float centerX)
{
  float v3; // xmm0_4
  ActorChara *v4; // rbx
  bool v5; // zf
  ActorChara_vtbl *v6; // rax
  float v7; // xmm1_4

  pGT->ResetWallHit(pGT);
  v3 = Collision::ActorStageBoaderCheck(pGT, centerX);
  if ( v3 == 0.0 || !pGT->pTarget )
    return;
  v4 = pGT->GetTargetActor(pGT);
  if ( !v4->IsDisableReflectWallBack(v4) && v4->IsReflectWallBack(v4) && pGT->IsDamaged(pGT) )
  {
LABEL_15:
    v7 = v4->vBasePos.x - v3;
    v4->vPos.x = v4->vPos.x - v3;
    v4->vBasePos.x = v7;
    return;
  }
  v5 = !pGT->IsBasicDamaged(pGT);
  v6 = pGT->ActorCharaBase::ActorObject::Actor::__vftable;
  if ( v5 )
  {
    if ( !v6->IsThrowLock(pGT) && !pGT->IsThrowEscapeAction(pGT) )
      return;
    goto LABEL_15;
  }
  if ( (v6->IsLandDamaged(pGT) || pGT->IsGuardDamaged(pGT))
    && (!v4->IsAir(v4) || v4->IsReflectLandWallBack(v4))
    && !v4->IsDisableReflectWallBack(v4) )
  {
    goto LABEL_15;
  }
}

void __fastcall Collision::BodyPushCheck(float centerX)
{
  int v1; // eax
  __int64 v2; // r13
  __int64 v3; // r12
  Collision::HitRectCollection *v4; // r14
  __int64 v5; // r15
  _QWORD *v6; // rax
  Collision::HitRectCollection *v7; // rdi
  _QWORD *v8; // rax
  Collision::HitRectList *Myval2; // rdi
  const Collision::HitRectWork *Mylast; // rbp
  const Collision::HitRectWork *Myfirst; // rdi
  __int64 v12; // rbx
  const Collision::HitRectWork *v13; // rsi
  const Collision::HitRectWork *i; // rbx
  int v15; // [rsp+98h] [rbp+10h]

  v1 = 0;
  v2 = 0i64;
  v3 = 0i64;
  v4 = Collision::HitRectCollection::instance;
  do
  {
    v15 = ++v1;
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
        Myval2 = v7->pRectList[0]._Mypair._Myval2;
        Mylast = Myval2->rectList._Mypair._Myval2._Mylast;
        Myfirst = Myval2->rectList._Mypair._Myval2._Myfirst;
        if ( Myfirst != Mylast )
        {
          do
          {
            v12 = *(__int64 *)((char *)&v4->pRectList[0]._Mypair._Myval2 + v5);
            v13 = *(const Collision::HitRectWork **)(v12 + 16);
            for ( i = *(const Collision::HitRectWork **)(v12 + 8); i != v13; ++i )
              Collision::BodyVsBody(Myfirst, i, centerX);
            ++Myfirst;
          }
          while ( Myfirst != Mylast );
          v4 = Collision::HitRectCollection::instance;
        }
        v5 += 120i64;
      }
      while ( v5 < 240 );
      v1 = v15;
    }
    ++v3;
  }
  while ( v2 < 2 );
}

void __fastcall Collision::BodyVsBody(
        const Collision::HitRectWork *p1,
        const Collision::HitRectWork *p2,
        float centerX)
{
  bool v6; // r12
  bool v7; // r15
  float x; // xmm13_4
  float v9; // xmm14_4
  float v10; // xmm6_4
  float v11; // xmm8_4
  double v12; // xmm0_8
  float fPushRate; // xmm9_4
  double v14; // xmm0_8
  float v15; // xmm1_4
  float v16; // xmm7_4
  float v17; // xmm10_4
  float v18; // xmm0_4
  int iCAngle; // edi
  float v20; // xmm9_4
  ActorObject *v21; // rcx
  ActorObject *v22; // rcx
  ActorObject *v23; // rcx
  float v24; // xmm2_4
  char v25; // bl
  char v26; // al
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm6_4
  float v30; // xmm0_4
  float v31; // xmm6_4
  float v32; // xmm13_4
  float v33; // xmm14_4
  std::bitset<61> *p_bsCollisionFlag; // rcx
  std::bitset<61>::reference *v35; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v37; // rax
  unsigned __int64 v38; // rdx
  std::bitset<15> *v39; // rcx
  std::bitset<61>::reference *v40; // rax
  unsigned __int64 v41; // rdx
  std::bitset<61>::reference *v42; // rax
  unsigned __int64 v43; // rdx
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm0_4
  ActorObject *pAtkObj; // [rsp+20h] [rbp-138h] BYREF
  ActorObject *pObj; // [rsp+28h] [rbp-130h] BYREF
  float y; // [rsp+30h] [rbp-128h]
  Collision::HitRect v50; // [rsp+38h] [rbp-120h] BYREF
  float v51; // [rsp+48h] [rbp-110h] BYREF
  float v52; // [rsp+4Ch] [rbp-10Ch] BYREF
  Collision::HitRect result; // [rsp+50h] [rbp-108h] BYREF
  ActorObject **v54[24]; // [rsp+60h] [rbp-F8h] BYREF
  float v55; // [rsp+160h] [rbp+8h] BYREF
  float v56; // [rsp+168h] [rbp+10h] BYREF
  float v57; // [rsp+178h] [rbp+20h]

  v54[6] = (ActorObject **)-2i64;
  pAtkObj = p1->pOwner;
  pObj = p2->pOwner;
  v6 = ((unsigned int (*)(void))pAtkObj->GetActorType)() == 0;
  v7 = p2->pOwner->GetActorType(p2->pOwner) == CHARA;
  x = pAtkObj->vPos.x;
  y = pAtkObj->vPos.y;
  v9 = pObj->vPos.x;
  v57 = pObj->vPos.y;
  v55 = pAtkObj->vColOffPrev.x + pAtkObj->vPosPrev.x;
  v56 = pObj->vColOffPrev.x + pObj->vPosPrev.x;
  v51 = pAtkObj->vColOffPrev.y + pAtkObj->vPosPrev.y;
  v52 = pObj->vColOffPrev.y + pObj->vPosPrev.y;
  Collision::HitRectWork::GetRealHitRect((Collision::HitRectWork *)p1, &result);
  Collision::HitRectWork::GetRealHitRect((Collision::HitRectWork *)p2, &v50);
  v10 = v50.w + v50.x;
  if ( (float)(v50.w + v50.x) <= result.x )
    return;
  v11 = result.w + result.x;
  if ( (float)(result.w + result.x) <= v50.x
    || v50.y <= (float)(result.y - result.h)
    || result.y <= (float)(v50.y - v50.h) )
  {
    return;
  }
  v12 = ((double (__fastcall *)(ActorObject *))pAtkObj->GetBodyPushRate)(pAtkObj);
  fPushRate = *(float *)&v12;
  v14 = ((double (__fastcall *)(ActorObject *))pObj->GetBodyPushRate)(pObj);
  v15 = *(float *)&v14;
  if ( (p1->data.atk.iDamage & 0x20000) != 0 )
    fPushRate = p1->data.hit.fPushRate;
  if ( (p2->data.atk.iDamage & 0x20000) != 0 )
    v15 = p2->data.hit.fPushRate;
  v16 = FLOAT_0_5;
  v17 = FLOAT_0_5;
  v18 = v15 + fPushRate;
  if ( (float)(v15 + fPushRate) > 0.0 )
  {
    v16 = fPushRate / v18;
    v17 = v15 / v18;
  }
  v54[0] = &pAtkObj;
  v54[1] = &pObj;
  v54[2] = (ActorObject **)&v55;
  v54[3] = (ActorObject **)&v56;
  v54[4] = (ActorObject **)&v51;
  v54[5] = (ActorObject **)&v52;
  iCAngle = 0;
  v20 = v57;
  if ( y <= 0.0 && v57 <= 0.0 )
  {
    v21 = pObj;
    if ( pAtkObj->iCAngle == pObj->iCAngle )
      goto LABEL_18;
    if ( lambda_5d4b918d04f119502a9ba4f43ac3ea0e_::operator()(pObj, pAtkObj, (unsigned int *)pObj)
      || lambda_5d4b918d04f119502a9ba4f43ac3ea0e_::operator()(v22, pObj, (unsigned int *)pAtkObj) )
    {
      v23 = pAtkObj;
      iCAngle = pAtkObj->iCAngle;
      goto LABEL_20;
    }
  }
  v21 = pObj;
LABEL_18:
  v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v55 - v56)) & _xmm);
  if ( v24 < 0.00000011920929 )
  {
    iCAngle = lambda_63188078b30aa4a92549b267716e326e_::operator()(v54);
    v23 = pAtkObj;
LABEL_20:
    if ( iCAngle )
      goto LABEL_27;
LABEL_28:
    v29 = v11 - v50.x;
    goto LABEL_29;
  }
  v25 = v21->IsWallBack(v21);
  v26 = pAtkObj->IsWallBack(pAtkObj);
  v23 = pAtkObj;
  if ( v26 != v25 )
  {
    v27 = pAtkObj->vColOff.x + pAtkObj->vPos.x;
    v55 = v27;
    v28 = pObj->vColOff.x + pObj->vPos.x;
    v56 = v28;
  }
  else
  {
    v27 = v55;
    v28 = v56;
  }
  if ( v27 <= v28 )
    goto LABEL_28;
  iCAngle = 1;
LABEL_27:
  v29 = v10 - result.x;
LABEL_29:
  v30 = v29 * v16;
  v31 = v29 * v17;
  if ( iCAngle )
    LODWORD(v31) ^= _xmm;
  else
    LODWORD(v30) ^= _xmm;
  v32 = x + v30;
  v33 = v9 + v31;
  p_bsCollisionFlag = (std::bitset<61> *)&v23->bsCollisionFlag;
  if ( v7 )
  {
    v35 = std::bitset<21>::operator[](p_bsCollisionFlag, (std::bitset<61>::reference *)&v50, 0xCui64);
    Mypos = v35->_Mypos;
    if ( Mypos >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v35->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (v35->_Mypos & 0x1F);
  }
  else
  {
    v37 = std::bitset<21>::operator[](p_bsCollisionFlag, (std::bitset<61>::reference *)&v50, 0xDui64);
    v38 = v37->_Mypos;
    if ( v38 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v37->_Pbitset->_Array + (v38 >> 5)) |= 1 << (v37->_Mypos & 0x1F);
  }
  v39 = &pObj->bsCollisionFlag;
  if ( v6 )
  {
    v40 = std::bitset<21>::operator[]((std::bitset<61> *)v39, (std::bitset<61>::reference *)&v50, 0xCui64);
    v41 = v40->_Mypos;
    if ( v41 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v40->_Pbitset->_Array + (v41 >> 5)) |= 1 << (v40->_Mypos & 0x1F);
  }
  else
  {
    v42 = std::bitset<21>::operator[]((std::bitset<61> *)v39, (std::bitset<61>::reference *)&v50, 0xDui64);
    v43 = v42->_Mypos;
    if ( v43 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v42->_Pbitset->_Array + (v43 >> 5)) |= 1 << (v42->_Mypos & 0x1F);
  }
  pAtkObj->vBasePos.x = (float)(v32 - pAtkObj->vPos.x) + pAtkObj->vBasePos.x;
  v44 = y;
  pAtkObj->vBasePos.y = (float)(y - pAtkObj->vPos.y) + pAtkObj->vBasePos.y;
  pObj->vBasePos.x = (float)(v33 - pObj->vPos.x) + pObj->vBasePos.x;
  pObj->vBasePos.y = (float)(v20 - pObj->vPos.y) + pObj->vBasePos.y;
  pAtkObj->vPos.x = v32;
  pAtkObj->vPos.y = v44;
  pObj->vPos.x = v33;
  pObj->vPos.y = v20;
  if ( v6 )
  {
    v45 = Collision::ActorStageBoaderCheck(p1->pParent, centerX);
    pObj->vPos.x = pObj->vPos.x - v45;
    pObj->vBasePos.x = pObj->vBasePos.x - v45;
  }
  if ( v7 )
  {
    v46 = Collision::ActorStageBoaderCheck(p2->pParent, centerX);
    pAtkObj->vPos.x = pAtkObj->vPos.x - v46;
    pAtkObj->vBasePos.x = pAtkObj->vBasePos.x - v46;
  }
  pAtkObj->UpdatePosition(pAtkObj);
  pObj->UpdatePosition(pObj);
}

void __fastcall Collision::PlayerPushCheck(ActionSystem *actSys)
{
  ActorChara *v1; // rbx
  ActorChara *v2; // rdi
  float x; // xmm6_4

  v1 = actSys->pPlayer[0];
  v2 = actSys->pPlayer[1];
  if ( (unsigned int)(actSys->cameraCtrl.offset.type - 3) > 1 )
    x = actSys->cameraCtrl.vBaseWallPos.x;
  else
    x = (float)((float)(v2->vPosPrev.x - v1->vPosPrev.x) * 0.5) + v1->vPosPrev.x;
  Collision::ActorWallHitBackCheck(actSys->pPlayer[0], x);
  Collision::ActorWallHitBackCheck(v2, x);
  Collision::BodyPushCheck(x);
  Collision::ActorStageBoaderCheck(v1, x);
  Collision::ActorStageBoaderCheck(v2, x);
  if ( v1->IsThrowLock(v1) )
  {
    v1->SetTargetWallHit(v1, v2);
    v2->SetTargetWallHit(v2, v1);
  }
  v1->UpdatePosition(v1);
  v2->UpdatePosition(v2);
}

bool __fastcall Collision::_isStageRightWallHit(ActorObject *pGT, float x)
{
  return pGT->GetActorType(pGT) == CHARA && (pGT->iActFlg2 & 0x10) == 0 && x >= 80.0;
}

