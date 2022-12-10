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
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
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

std::piecewise_construct_t std::piecewise_construct; // 0x14089B42F
bool BattleSystem::SequenceController::CheckSequenceTerm(const CpuSequenceData::SequenceData * pDat, AiLevelSpec level, long mutekiFrame, long startupFrame, long optionFlag); // 0x1400F34C0
long BattleSystem::SequenceController::CheckSequencePriorityAdj(const CpuSequenceData::SequenceData * pDat); // 0x1400F3660
long BattleSystem::SequenceController::CheckSequenceCandidates(CpuSequenceData::SEQUENCE_CATEGORY::ID category, AiLevelSpec level, long mutekiFrame, long startupFrame, long optionFlag); // 0x1400F37E0
long BattleSystem::SequenceController::GetSequenceTotalPriority(); // 0x1400F3990
BattleSystem::SequenceCandidateInfo BattleSystem::SequenceController::GetSelectedSequence(long param); // 0x1400F39F0
long BattleSystem::SequenceController::CheckSequenceCandidates(BattleSystem::SequenceController::WIDE_CATEGORY category, AiLevelSpec level, long mutekiFrame, long startupFrame, long optionFlag); // 0x1400F3A80
long BattleSystem::SequenceController::CheckSequenceCandidates(AiLevelSpec level, std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> func); // 0x1400F3CB0
long BattleSystem::SequenceController::CheckFrontMoveLevelAdj(long basePri); // 0x1400F3EB0
long BattleSystem::SequenceController::CheckJumpLevelAdj(long basePri); // 0x1400F3EF0
long BattleSystem::SequenceController::CheckThrowLevelAdj(long basePri); // 0x1400F3F30
const CpuSequenceData::SequenceCommandData * BattleSystem::SequenceController::GetNowSequenceCommandData(); // 0x1400F3F70
const CpuSequenceData::SequenceCommandData * BattleSystem::SequenceController::SetNextSequenceCommand(bool bBranchConcluded); // 0x1400F3FC0
bool BattleSystem::SequenceController::IsNotAttackHit(); // 0x1400F40B0
bool BattleSystem::SequenceController::IsNotThrowHit(); // 0x1400F4150
void BattleSystem::SequenceController::CheckChargeCountUp(); // 0x1400F4210//decompilation failure at 14089B42F!
void __fastcall BattleSystem::SequenceController::CheckChargeCountUp(BattleSystem::SequenceController *this)
{
  BattleSystem::BattleController *v2; // rax
  BattleSystem::BattleController::ROUND_PHASE roundPhase; // ecx
  ActorChara *pOwner; // rdx
  ActorChara *v5; // rdx
  BattleSystem::BattleController *v6; // [rsp+48h] [rbp+10h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v6 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v6);
    BattleSystem::BattleController::instance = v2;
  }
  roundPhase = v2->roundPhase;
  if ( roundPhase != DIE )
  {
    if ( roundPhase == GUARD )
    {
      ++this->iStandCharge;
      ++this->iCrouchCharge;
      ++this->iButtonCharge;
      return;
    }
    *(_QWORD *)&this->iStandCharge = 0i64;
    goto LABEL_22;
  }
  pOwner = this->pOwner;
  switch ( pOwner->iActorStat )
  {
    case 0:
    case 2:
    case 0x17:
      *(_QWORD *)&this->iStandCharge = 0i64;
      break;
    case 3:
      ++this->iStandCharge;
      this->iCrouchCharge = 0;
      break;
    case 4:
      this->iStandCharge = 0;
      goto LABEL_14;
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
      break;
    case 0x19:
      ++this->iStandCharge;
      if ( pOwner->IsCrouch(pOwner) )
        goto LABEL_14;
      this->iCrouchCharge = 0;
      break;
    default:
      ++this->iStandCharge;
LABEL_14:
      ++this->iCrouchCharge;
      break;
  }
  ++this->iButtonCharge;
  v5 = this->pOwner;
  if ( v5->cmdInfo.entry.pCmdSet && !v5->cmdInfo.hitStopReserve.pCmdSet )
  {
    switch ( v5->iActorStat )
    {
      case 0:
      case 2:
      case 4:
      case 5:
      case 0xB:
      case 0xD:
      case 0xE:
      case 0x10:
      case 0x11:
      case 0x13:
      case 0x17:
      case 0x1B:
      case 0x1D:
      case 0x21:
      case 0x22:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
        *(_QWORD *)&this->iStandCharge = 0i64;
        break;
      case 3:
      case 0xC:
      case 0xF:
      case 0x12:
      case 0x14:
      case 0x1C:
      case 0x1F:
        goto $LN23_16;
      case 0x24:
        if ( !v5->IsCrouch(this->pOwner) )
$LN23_16:
          this->iCrouchCharge = 0;
        break;
      default:
        break;
    }
    if ( (unsigned int)(this->pOwner->iActorStat - 27) <= 8 )
LABEL_22:
      this->iButtonCharge = 0;
  }
}

__int64 __fastcall BattleSystem::SequenceController::CheckFrontMoveLevelAdj(
        BattleSystem::SequenceController *this,
        int basePri)
{
  const CpuSequenceData *pCpuData; // rax
  unsigned __int8 uiFMoveLevel; // cl
  unsigned int v5; // edx

  if ( this->pOwner )
  {
    pCpuData = this->pCpuData;
    if ( pCpuData )
    {
      uiFMoveLevel = pCpuData->charaFeatureData.uiFMoveLevel;
      if ( !uiFMoveLevel )
        return 0i64;
      v5 = (int)((unsigned __int64)(1374389535i64 * basePri * (uiFMoveLevel + 50)) >> 32) >> 5;
      return (v5 >> 31) + v5;
    }
  }
  return (unsigned int)basePri;
}

__int64 __fastcall BattleSystem::SequenceController::CheckJumpLevelAdj(
        BattleSystem::SequenceController *this,
        int basePri)
{
  const CpuSequenceData *pCpuData; // rax
  unsigned __int8 uiJumpLevel; // cl
  unsigned int v5; // edx

  if ( this->pOwner )
  {
    pCpuData = this->pCpuData;
    if ( pCpuData )
    {
      uiJumpLevel = pCpuData->charaFeatureData.uiJumpLevel;
      if ( !uiJumpLevel )
        return 0i64;
      v5 = (int)((unsigned __int64)(1374389535i64 * basePri * (uiJumpLevel + 50)) >> 32) >> 5;
      return (v5 >> 31) + v5;
    }
  }
  return (unsigned int)basePri;
}

__int64 __fastcall BattleSystem::SequenceController::CheckSequenceCandidates(
        BattleSystem::SequenceController *this,
        __int64 level,
        std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> *func)
{
  AiLevelSpec v4; // er13
  unsigned int v6; // er14
  unsigned __int64 *p_Count; // rdx
  bool IsNotThrowHit; // r12
  int v9; // esi
  const CpuSequenceData *pCpuData; // rax
  __int64 v11; // r15
  int v12; // er8
  const CpuSequenceData::SequenceData *v13; // rdi
  unsigned int iCategory; // eax
  std::_Func_base<bool,ActorChara *,CpuSequenceData::SequenceData const &> *v15; // rcx
  BattleSystem::SequenceCandidateInfo *Mylast; // rax
  signed __int64 v17; // rdi
  BattleSystem::SequenceCandidateInfo *v18; // rdi
  BattleSystem::SequenceCandidateInfo *v19; // rax
  BattleSystem::SequenceCandidateInfo v20; // xmm0
  std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> *v21; // rcx
  std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> *v23; // rcx
  BattleSystem::SequenceCandidateInfo _Count; // [rsp+38h] [rbp-50h] BYREF
  ActorChara *pOwner; // [rsp+90h] [rbp+8h] BYREF
  std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> *v26; // [rsp+A0h] [rbp+18h]

  v26 = func;
  v4 = (int)level;
  v6 = 0;
  if ( this->pOwner && this->pCpuData )
  {
    IsNotThrowHit = BattleSystem::SequenceController::IsNotThrowHit(this);
    v9 = 0;
    pCpuData = this->pCpuData;
    if ( pCpuData->dataHeader.iSeqSetCount > 0 )
    {
      v11 = 0i64;
      v12 = 73992;
      while ( 1 )
      {
        v13 = &pCpuData->pSeqData[v11];
        p_Count = (unsigned __int64 *)(this->seqCandidateList._Mypair._Myval2._Mylast
                                     - this->seqCandidateList._Mypair._Myval2._Myfirst);
        if ( p_Count == (unsigned __int64 *)(this->seqCandidateList._Mypair._Myval2._Myend
                                           - this->seqCandidateList._Mypair._Myval2._Myfirst) )
          goto LABEL_28;
        if ( !IsNotThrowHit )
          break;
        iCategory = v13->header.iCategory;
        if ( iCategory > 0x10 || !_bittest(&v12, iCategory) )
          break;
LABEL_25:
        ++v9;
        ++v11;
        pCpuData = this->pCpuData;
        if ( v9 >= pCpuData->dataHeader.iSeqSetCount )
          goto LABEL_28;
      }
      if ( !BattleSystem::SequenceController::CheckSequenceTerm(this, v13, v4, 0, 0, 0) )
        goto LABEL_24;
      pOwner = this->pOwner;
      v15 = func->_Mystorage._Ptrs[7];
      if ( !v15 )
        std::_Xbad_function_call();
      if ( !v15->_Do_call(v15, &pOwner, v13) )
      {
LABEL_24:
        v12 = 73992;
        goto LABEL_25;
      }
      _Count.iIndex = v9;
      _Count.pData = v13;
      Mylast = this->seqCandidateList._Mypair._Myval2._Mylast;
      if ( &_Count >= Mylast
        || (p_Count = (unsigned __int64 *)&_Count, this->seqCandidateList._Mypair._Myval2._Myfirst > &_Count) )
      {
        if ( Mylast == this->seqCandidateList._Mypair._Myval2._Myend )
          std::vector<BattleSystem::SequenceCandidateInfo>::_Reserve(&this->seqCandidateList, (unsigned __int64)p_Count);
        v19 = this->seqCandidateList._Mypair._Myval2._Mylast;
        if ( !v19 )
          goto LABEL_23;
        v20 = _Count;
      }
      else
      {
        v17 = (char *)&_Count - (char *)this->seqCandidateList._Mypair._Myval2._Myfirst;
        if ( Mylast == this->seqCandidateList._Mypair._Myval2._Myend )
          std::vector<BattleSystem::SequenceCandidateInfo>::_Reserve(&this->seqCandidateList, (unsigned __int64)&_Count);
        v18 = (BattleSystem::SequenceCandidateInfo *)((char *)this->seqCandidateList._Mypair._Myval2._Myfirst
                                                    + (v17 & 0xFFFFFFFFFFFFFFF0ui64));
        v19 = this->seqCandidateList._Mypair._Myval2._Mylast;
        if ( !v19 )
          goto LABEL_23;
        v20 = *v18;
      }
      *v19 = v20;
LABEL_23:
      ++this->seqCandidateList._Mypair._Myval2._Mylast;
      ++v6;
      goto LABEL_24;
    }
LABEL_28:
    v21 = (std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> *)func->_Mystorage._Ptrs[7];
    if ( v21 )
    {
      LOBYTE(p_Count) = v21 != func;
      ((void (__fastcall *)(std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> *, unsigned __int64 *))v21->_Mystorage._Ptrs[0][4].__vftable)(
        v21,
        p_Count);
      func->_Mystorage._Ptrs[7] = 0i64;
    }
    return v6;
  }
  else
  {
    v23 = (std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> *)func->_Mystorage._Ptrs[7];
    if ( v23 )
    {
      LOBYTE(level) = v23 != func;
      ((void (__fastcall *)(std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> *, __int64))v23->_Mystorage._Ptrs[0][4].__vftable)(
        v23,
        level);
      func->_Mystorage._Ptrs[7] = 0i64;
    }
    return 0i64;
  }
}

__int64 __fastcall BattleSystem::SequenceController::CheckSequenceCandidates(
        BattleSystem::SequenceController *this,
        CpuSequenceData::SEQUENCE_CATEGORY::ID category,
        AiLevelSpec level,
        int mutekiFrame,
        int startupFrame,
        int optionFlag)
{
  unsigned int v6; // ebp
  int v9; // eax
  const CpuSequenceData *pCpuData; // rax
  int v11; // esi
  __int64 v12; // r14
  const CpuSequenceData::SequenceData *v13; // rdi
  unsigned __int64 *v14; // rdx
  BattleSystem::SequenceCandidateInfo *Mylast; // rax
  signed __int64 v16; // rdi
  BattleSystem::SequenceCandidateInfo *v17; // rcx
  BattleSystem::SequenceCandidateInfo *v18; // rax
  unsigned __int64 _Count[2]; // [rsp+30h] [rbp-48h] BYREF

  v6 = 0;
  if ( !this->pOwner )
    return 0i64;
  if ( !this->pCpuData )
    return 0i64;
  if ( BattleSystem::SequenceController::IsNotThrowHit(this) && (unsigned int)category <= 0x10 )
  {
    v9 = 73992;
    if ( _bittest(&v9, category) )
      return 0i64;
  }
  pCpuData = this->pCpuData;
  v11 = 0;
  if ( pCpuData->dataHeader.iSeqSetCount > 0 )
  {
    v12 = 0i64;
    do
    {
      v13 = &pCpuData->pSeqData[v12];
      if ( ((((char *)this->seqCandidateList._Mypair._Myval2._Myend
            - (char *)this->seqCandidateList._Mypair._Myval2._Myfirst) ^ ((char *)this->seqCandidateList._Mypair._Myval2._Mylast
                                                                        - (char *)this->seqCandidateList._Mypair._Myval2._Myfirst)) & 0xFFFFFFFFFFFFFFF0ui64) == 0 )
        break;
      if ( v13->header.iCategory == category
        && BattleSystem::SequenceController::CheckSequenceTerm(this, v13, level, mutekiFrame, startupFrame, optionFlag) )
      {
        Mylast = this->seqCandidateList._Mypair._Myval2._Mylast;
        LODWORD(_Count[0]) = v11;
        _Count[1] = (unsigned __int64)v13;
        if ( _Count >= (unsigned __int64 *)Mylast
          || (v14 = _Count,
              this->seqCandidateList._Mypair._Myval2._Myfirst > (BattleSystem::SequenceCandidateInfo *)_Count) )
        {
          if ( Mylast == this->seqCandidateList._Mypair._Myval2._Myend )
            std::vector<BattleSystem::SequenceCandidateInfo>::_Reserve(&this->seqCandidateList, (unsigned __int64)v14);
          v18 = this->seqCandidateList._Mypair._Myval2._Mylast;
          if ( v18 )
            *v18 = *(BattleSystem::SequenceCandidateInfo *)_Count;
        }
        else
        {
          v16 = (char *)_Count - (char *)this->seqCandidateList._Mypair._Myval2._Myfirst;
          if ( Mylast == this->seqCandidateList._Mypair._Myval2._Myend )
            std::vector<BattleSystem::SequenceCandidateInfo>::_Reserve(
              &this->seqCandidateList,
              (unsigned __int64)_Count);
          v17 = this->seqCandidateList._Mypair._Myval2._Mylast;
          if ( v17 )
            *v17 = *(BattleSystem::SequenceCandidateInfo *)((char *)this->seqCandidateList._Mypair._Myval2._Myfirst
                                                          + (v16 & 0xFFFFFFFFFFFFFFF0ui64));
        }
        ++this->seqCandidateList._Mypair._Myval2._Mylast;
        ++v6;
      }
      pCpuData = this->pCpuData;
      ++v11;
      ++v12;
    }
    while ( v11 < pCpuData->dataHeader.iSeqSetCount );
  }
  return v6;
}

__int64 __fastcall BattleSystem::SequenceController::CheckSequenceCandidates(
        BattleSystem::SequenceController *this,
        BattleSystem::SequenceController::WIDE_CATEGORY category,
        AiLevelSpec level,
        int mutekiFrame,
        int startupFrame,
        int optionFlag)
{
  unsigned int v6; // ebp
  bool IsNotThrowHit; // r15
  int v10; // esi
  const CpuSequenceData *pCpuData; // rax
  int v12; // er8
  __int64 v13; // r14
  const CpuSequenceData::SequenceData *v14; // rdi
  __int64 iCategory; // rcx
  int v16; // eax
  unsigned __int64 *p_Count; // rdx
  BattleSystem::SequenceCandidateInfo *Mylast; // rax
  signed __int64 v19; // rdi
  BattleSystem::SequenceCandidateInfo *v20; // rcx
  BattleSystem::SequenceCandidateInfo *v21; // rax
  BattleSystem::SequenceCandidateInfo _Count; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v26[4]; // [rsp+50h] [rbp-98h]
  int v27; // [rsp+90h] [rbp-58h]
  __int64 v28; // [rsp+94h] [rbp-54h]
  __int64 v29; // [rsp+9Ch] [rbp-4Ch]
  __int64 v30; // [rsp+A4h] [rbp-44h]

  v6 = 0;
  v26[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v26[1] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v26[2] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v26[3] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v27 = 8;
  v28 = 0i64;
  v29 = 0i64;
  v30 = 1i64;
  if ( !this->pOwner || !this->pCpuData )
    return 0i64;
  IsNotThrowHit = BattleSystem::SequenceController::IsNotThrowHit(this);
  v10 = 0;
  pCpuData = this->pCpuData;
  if ( pCpuData->dataHeader.iSeqSetCount > 0 )
  {
    v12 = 73992;
    v13 = 0i64;
    do
    {
      v14 = &pCpuData->pSeqData[v13];
      if ( ((((char *)this->seqCandidateList._Mypair._Myval2._Myend
            - (char *)this->seqCandidateList._Mypair._Myval2._Myfirst) ^ ((char *)this->seqCandidateList._Mypair._Myval2._Mylast
                                                                        - (char *)this->seqCandidateList._Mypair._Myval2._Myfirst)) & 0xFFFFFFFFFFFFFFF0ui64) == 0 )
        break;
      iCategory = v14->header.iCategory;
      v16 = *((_DWORD *)v26 + iCategory);
      if ( _bittest(&v16, category) && (!IsNotThrowHit || (unsigned int)iCategory > 0x10 || !_bittest(&v12, iCategory)) )
      {
        if ( BattleSystem::SequenceController::CheckSequenceTerm(
               this,
               v14,
               level,
               mutekiFrame,
               startupFrame,
               optionFlag) )
        {
          Mylast = this->seqCandidateList._Mypair._Myval2._Mylast;
          _Count.iIndex = v10;
          _Count.pData = v14;
          if ( &_Count >= Mylast
            || (p_Count = (unsigned __int64 *)&_Count, this->seqCandidateList._Mypair._Myval2._Myfirst > &_Count) )
          {
            if ( Mylast == this->seqCandidateList._Mypair._Myval2._Myend )
              std::vector<BattleSystem::SequenceCandidateInfo>::_Reserve(
                &this->seqCandidateList,
                (unsigned __int64)p_Count);
            v21 = this->seqCandidateList._Mypair._Myval2._Mylast;
            if ( v21 )
              *v21 = _Count;
          }
          else
          {
            v19 = (char *)&_Count - (char *)this->seqCandidateList._Mypair._Myval2._Myfirst;
            if ( Mylast == this->seqCandidateList._Mypair._Myval2._Myend )
              std::vector<BattleSystem::SequenceCandidateInfo>::_Reserve(
                &this->seqCandidateList,
                (unsigned __int64)&_Count);
            v20 = this->seqCandidateList._Mypair._Myval2._Mylast;
            if ( v20 )
              *v20 = *(BattleSystem::SequenceCandidateInfo *)((char *)this->seqCandidateList._Mypair._Myval2._Myfirst
                                                            + (v19 & 0xFFFFFFFFFFFFFFF0ui64));
          }
          ++this->seqCandidateList._Mypair._Myval2._Mylast;
          ++v6;
        }
        v12 = 73992;
      }
      pCpuData = this->pCpuData;
      ++v10;
      ++v13;
    }
    while ( v10 < pCpuData->dataHeader.iSeqSetCount );
  }
  return v6;
}

__int64 __fastcall BattleSystem::SequenceController::CheckSequencePriorityAdj(
        BattleSystem::SequenceController *this,
        const CpuSequenceData::SequenceData *pDat)
{
  unsigned int iPriority; // ebx
  ActorChara *v5; // r8
  bool v6; // al
  const CpuSequenceData *pCpuData; // rax
  unsigned __int8 uiThrowLevel; // cl

  iPriority = pDat->header.iPriority;
  v5 = this->pOwner->GetTargetActor(this->pOwner);
  if ( v5 )
  {
    switch ( pDat->header.iCategory )
    {
      case 1:
        v6 = v5->IsCrouch(v5);
        goto LABEL_14;
      case 2:
        if ( !v5->IsStand(v5) )
          return iPriority;
        return iPriority + 10;
      case 3:
      case 8:
      case 0xD:
      case 0x10:
        if ( !this->pOwner )
          return iPriority;
        pCpuData = this->pCpuData;
        if ( !pCpuData )
          return iPriority;
        uiThrowLevel = pCpuData->charaFeatureData.uiThrowLevel;
        if ( uiThrowLevel )
          return (unsigned int)((int)(iPriority * (uiThrowLevel + 50)) / 100);
        return 0i64;
      case 4:
      case 9:
        uiThrowLevel = this->pCpuData->charaFeatureData.uiShotLevel;
        if ( uiThrowLevel )
          return (unsigned int)((int)(iPriority * (uiThrowLevel + 50)) / 100);
        else
          return 0i64;
      case 0x12:
        v6 = v5->IsSkillStatus(v5);
LABEL_14:
        if ( v6 )
          iPriority += 20;
        return iPriority;
      default:
        return iPriority;
    }
  }
  return iPriority;
}

char __fastcall BattleSystem::SequenceController::CheckSequenceTerm(
        BattleSystem::SequenceController *this,
        const CpuSequenceData::SequenceData *pDat,
        AiLevelSpec level,
        int mutekiFrame,
        int startupFrame,
        int optionFlag)
{
  float v9; // xmm0_4
  int iStartupFrame; // edx
  CpuSequenceData::SequenceCommandData *pCommand; // rax
  int v12; // esi
  CommandCheck *v13; // rax
  CommandData::AiCommandInfo *AiCommandInfoFromIndex; // rax
  int iChargeTime; // ecx
  int iChargeType; // eax

  if ( pDat->header.iPriority <= 0 )
    return 0;
  if ( pDat->header.iDifficulty > level )
    return 0;
  v9 = this->pOwner->GetRivalDistance(this->pOwner);
  if ( pDat->header.fSelectRangeMin > v9
    || v9 >= pDat->header.fSelectRangeMax
    || pDat->header.fWallRange > 0.0
    && this->pOwner->GetStageCornerFrontDistance(this->pOwner) > pDat->header.fWallRange )
  {
    return 0;
  }
  if ( mutekiFrame > 0 && pDat->header.iMutekiFrame < mutekiFrame )
    return 0;
  if ( startupFrame > 0 )
  {
    iStartupFrame = pDat->header.iStartupFrame;
    if ( iStartupFrame > startupFrame || (__int16)iStartupFrame < 1 )
      return 0;
  }
  if ( pDat->header.iCilmaxMode == 1 && this->pOwner->IsClimaxMode(this->pOwner)
    || pDat->header.iCilmaxMode == 2 && !this->pOwner->IsClimaxMode(this->pOwner)
    || pDat->header.iNeedPowerGauge > this->pOwner->GetExPower(this->pOwner)
    || (optionFlag & pDat->header.iOptionFlag) != optionFlag )
  {
    return 0;
  }
  pCommand = pDat->pCommand;
  if ( !pCommand || pCommand->iType != 1 )
    return 1;
  v12 = pCommand->type.iData[0];
  if ( this->pOwner->IsClimaxMode(this->pOwner) )
    v12 = pDat->pCommand->type.iData[1];
  if ( (v13 = this->pOwner->GetCharaCommandCheck(this->pOwner),
        (AiCommandInfoFromIndex = CommandCheck::GetAiCommandInfoFromIndex(v13, v12)) != 0i64)
    && (iChargeTime = AiCommandInfoFromIndex->iChargeTime, iChargeTime > 0)
    && ((iChargeType = AiCommandInfoFromIndex->iChargeType, iChargeType == 1) && iChargeTime > this->iStandCharge
     || iChargeType == 2 && iChargeTime > this->iCrouchCharge
     || iChargeType == 3 && iChargeTime > this->iButtonCharge) )
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

__int64 __fastcall BattleSystem::SequenceController::CheckThrowLevelAdj(
        BattleSystem::SequenceController *this,
        int basePri)
{
  const CpuSequenceData *pCpuData; // rax
  unsigned __int8 uiThrowLevel; // cl
  unsigned int v5; // edx

  if ( this->pOwner )
  {
    pCpuData = this->pCpuData;
    if ( pCpuData )
    {
      uiThrowLevel = pCpuData->charaFeatureData.uiThrowLevel;
      if ( !uiThrowLevel )
        return 0i64;
      v5 = (int)((unsigned __int64)(1374389535i64 * basePri * (uiThrowLevel + 50)) >> 32) >> 5;
      return (v5 >> 31) + v5;
    }
  }
  return (unsigned int)basePri;
}

const CpuSequenceData::SequenceCommandData *__fastcall BattleSystem::SequenceController::GetNowSequenceCommandData(
        BattleSystem::SequenceController *this)
{
  const CpuSequenceData *pCpuData; // rdx
  __int64 iSeqListIndex; // rax
  __int64 v3; // r8
  __int64 iSeqCommandIndex; // rax

  if ( this->pOwner
    && (pCpuData = this->pCpuData) != 0i64
    && (iSeqListIndex = this->iSeqListIndex, pCpuData->dataHeader.iSeqSetCount > (int)iSeqListIndex)
    && (int)iSeqListIndex >= 0
    && (v3 = (__int64)&pCpuData->pSeqData[iSeqListIndex]) != 0
    && (iSeqCommandIndex = this->iSeqCommandIndex, *(_DWORD *)v3 > (int)iSeqCommandIndex)
    && (int)iSeqCommandIndex >= 0 )
  {
    return (const CpuSequenceData::SequenceCommandData *)(*(_QWORD *)(v3 + 80) + 40 * iSeqCommandIndex);
  }
  else
  {
    return 0i64;
  }
}

BattleSystem::SequenceCandidateInfo *__fastcall BattleSystem::SequenceController::GetSelectedSequence(
        BattleSystem::SequenceController *this,
        BattleSystem::SequenceCandidateInfo *result,
        int param)
{
  BattleSystem::SequenceCandidateInfo *Myfirst; // rbx
  int v4; // esi
  BattleSystem::SequenceCandidateInfo *Mylast; // rdi
  int v9; // eax

  Myfirst = this->seqCandidateList._Mypair._Myval2._Myfirst;
  v4 = 0;
  Mylast = this->seqCandidateList._Mypair._Myval2._Mylast;
  result->pData = 0i64;
  result->iIndex = -1;
  if ( Myfirst != Mylast )
  {
    while ( 1 )
    {
      v9 = BattleSystem::SequenceController::CheckSequencePriorityAdj(this, Myfirst->pData);
      if ( v9 > 0 )
      {
        v4 += v9;
        if ( param < v4 )
          break;
      }
      if ( ++Myfirst == Mylast )
        return result;
    }
    *result = *Myfirst;
  }
  return result;
}

__int64 __fastcall BattleSystem::SequenceController::GetSequenceTotalPriority(BattleSystem::SequenceController *this)
{
  BattleSystem::SequenceCandidateInfo *Mylast; // rdi
  unsigned int v2; // esi
  BattleSystem::SequenceCandidateInfo *i; // rbx

  Mylast = this->seqCandidateList._Mypair._Myval2._Mylast;
  v2 = 0;
  for ( i = this->seqCandidateList._Mypair._Myval2._Myfirst; i != Mylast; ++i )
    v2 += BattleSystem::SequenceController::CheckSequencePriorityAdj(this, i->pData);
  return v2;
}

bool __fastcall BattleSystem::SequenceController::IsNotAttackHit(BattleSystem::SequenceController *this)
{
  ActorChara *v1; // rax
  int *v2; // rbx
  Collision::HitRectCollection *Instance; // rax

  v1 = this->pOwner->GetTargetActor(this->pOwner);
  v2 = (int *)v1;
  if ( !v1
    || v1->xPerfectMutekiCount.value
    || v1->IsPursuitDamaged(v1) && !v2[326]
    || (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v2 + 2984i64))(v2) )
  {
    return 1;
  }
  Instance = Collision::HitRectCollection::GetInstance(v2[97]);
  return Instance->pRectList[1]._Mypair._Myval2->rectList._Mypair._Myval2._Mylast
       - Instance->pRectList[1]._Mypair._Myval2->rectList._Mypair._Myval2._Myfirst == 0;
}

bool __fastcall BattleSystem::SequenceController::IsNotThrowHit(BattleSystem::SequenceController *this)
{
  ActorChara *v1; // rax
  int *v2; // rbx
  Collision::HitRectCollection *Instance; // rax

  v1 = this->pOwner->GetTargetActor(this->pOwner);
  v2 = (int *)v1;
  if ( !v1
    || v1->xPerfectMutekiCount.value
    || v1->xThrowMutekiCount.value
    || v1->IsAirAtkDamage(v1) && (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v2 + 2904i64))(v2)
    || (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v2 + 2960i64))(v2) && !v2[326]
    || (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v2 + 2984i64))(v2) )
  {
    return 1;
  }
  Instance = Collision::HitRectCollection::GetInstance(v2[97]);
  return Instance->pRectList[2]._Mypair._Myval2->rectList._Mypair._Myval2._Mylast
       - Instance->pRectList[2]._Mypair._Myval2->rectList._Mypair._Myval2._Myfirst == 0;
}

const CpuSequenceData::SequenceCommandData *__fastcall BattleSystem::SequenceController::SetNextSequenceCommand(
        BattleSystem::SequenceController *this,
        bool bBranchConcluded)
{
  const CpuSequenceData *pCpuData; // r9
  __int64 iSeqListIndex; // rax
  __int64 v6; // r10
  __int64 iSeqCommandIndex; // rdx
  _DWORD *v8; // r10
  __int64 v9; // rcx
  int v10; // er10
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax

  if ( !this->pOwner )
    return 0i64;
  pCpuData = this->pCpuData;
  if ( !pCpuData )
    return 0i64;
  iSeqListIndex = this->iSeqListIndex;
  if ( pCpuData->dataHeader.iSeqSetCount <= (int)iSeqListIndex )
    return 0i64;
  if ( (int)iSeqListIndex < 0 )
    return 0i64;
  v6 = (__int64)&pCpuData->pSeqData[iSeqListIndex];
  if ( !v6 )
    return 0i64;
  iSeqCommandIndex = this->iSeqCommandIndex;
  if ( *(_DWORD *)v6 <= (int)iSeqCommandIndex )
    return 0i64;
  if ( (int)iSeqCommandIndex < 0 )
    return 0i64;
  v8 = (_DWORD *)(*(_QWORD *)(v6 + 80) + 40 * iSeqCommandIndex);
  if ( !v8 )
    return 0i64;
  v9 = 0i64;
  if ( *v8 == 2 )
  {
    if ( bBranchConcluded )
      v10 = v8[6];
    else
      v10 = v8[7];
    if ( !v10 )
      return 0i64;
    if ( v10 != 1 )
    {
      v11 = v10 - 2;
      if ( pCpuData->dataHeader.iSeqSetCount > v10 - 2 && v11 >= 0 )
      {
        this->iSeqListIndex = v11;
        this->iSeqCommandIndex = 0;
        goto LABEL_19;
      }
      return 0i64;
    }
  }
  this->iSeqCommandIndex = iSeqCommandIndex + 1;
LABEL_19:
  v12 = this->iSeqListIndex;
  if ( pCpuData->dataHeader.iSeqSetCount > (int)v12 && (int)v12 >= 0 )
  {
    v13 = (__int64)&pCpuData->pSeqData[v12];
    if ( v13 )
    {
      v14 = this->iSeqCommandIndex;
      if ( *(_DWORD *)v13 > (int)v14 && (int)v14 >= 0 )
        return (const CpuSequenceData::SequenceCommandData *)(*(_QWORD *)(v13 + 80) + 40 * v14);
    }
  }
  return (const CpuSequenceData::SequenceCommandData *)v9;
}

void __fastcall std::vector<BattleSystem::SequenceCandidateInfo>::_Reserve(
        std::vector<BattleSystem::SequenceCandidateInfo> *this,
        unsigned __int64 _Count)
{
  BattleSystem::SequenceCandidateInfo *Myend; // r9
  BattleSystem::SequenceCandidateInfo *Mylast; // rdx
  BattleSystem::SequenceCandidateInfo *Myfirst; // rcx
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
    if ( v6 == 0xFFFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + 1;
    v8 = Myend - Myfirst;
    v9 = 0i64;
    if ( 0xFFFFFFFFFFFFFFFi64 - (v8 >> 1) >= v8 )
      v9 = v8 + (v8 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<BattleSystem::SequenceCandidateInfo>::_Reallocate(this, v7);
  }
}

