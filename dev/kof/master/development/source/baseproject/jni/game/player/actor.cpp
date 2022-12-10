#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
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
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"

void Actor::ParamInit(const CharaActionData * pActData, const CharaHitRect * pHit, const CharaAttackData * pAtk, const CharaDamageSetting * pDmg); // 0x140178CF0
void Actor::Dispose(); // 0x140178ED0
void Actor::ActionParamInit(); // 0x140178EE0
void Actor::ActionChanged(); // 0x140178FC0
void Actor::StateChanged(); // 0x14002E7C0
float Actor::GetActionSystemSpeed(); // 0x140179100
Fix32 Actor::GetActionSystemSpeedFix(); // 0x140179150
long Actor::GetActionCount(bool bOriginData); // 0x140179180
long Actor::GetActionEndFrame(long actNo, bool bOriginData); // 0x1401791F0
const CharaActionData::ActionDataInfo * Actor::GetActionDataInfo(const long actNo, bool bOriginData); // 0x140179280
long Actor::GetActionCategoryID(long actNo, bool bOriginData); // 0x140179300
long Actor::GetActionSubCategoryID(long actNo, bool bOriginData); // 0x140179390
long Actor::GetActionOptionFlag(long actNo, bool bOriginData); // 0x140179420
bool Actor::IsLoopAction(long actNo, bool bOriginData); // 0x1401794B0
void Actor::ActionChangeReq(const long actNo, const long frame); // 0x140179540
void Actor::ActionFrameChangeReq(const long frame); // 0x140179580
void Actor::StateChangeReq(const long state); // 0x1401795A0
void Actor::CAngleChangeReq(); // 0x1401795B0
void Actor::CAngleChangeReq(const long angle); // 0x1401795C0
void Actor::DrawRequest(); // 0x1401795D0
void Actor::ChangeActionDataReq(const CharaActionData * pActDat, OGLModel * pChangeModel, const CharaHitRect * pRectDat); // 0x140179690
void Actor::ChangeActionDataTargetReq(); // 0x1401796C0
void Actor::SetBackActionDataReq(); // 0x140179710
void Actor::ModelUpdatePosture(OGLMatrix & mat); // 0x140179740
bool Actor::ModelSyncPosture(); // 0x140179770
void Actor::WaitUpdatePosutre(); // 0x1401797B0
void Actor::SetModelMoveLightFlag(bool flag); // 0x1401797F0
void Actor::SetModelMirrorLightFlag(bool flag); // 0x140179860
bool Actor::GetModelMoveLightFlag(); // 0x1401798D0
bool Actor::GetModelMirrorLightFlag(); // 0x140179940
float Actor::GetActionPlayRate(); // 0x1401799B0
Fix32 Actor::GetActionPlayRateFix(); // 0x1401799D0
void Actor::SetSpeedDataSub(float & move, const long flag, const float param, const long angle); // 0x140179A20
void Actor::SetSpeedData(const CharaActionData::Speed & speed, long angle); // 0x140179B00
void Actor::SetSpeed(const float movX, const float movY, const float addX, const float addY, long angle, long option); // 0x140179BD0
void Actor::ResetSpeed(); // 0x140179CA0
bool Actor::IsLanding(); // 0x140179CC0
void Actor::SetPositionData(const CharaActionData::Position & position); // 0x140179CE0
float Actor::_MovePos(const float vec, const float acc, const float frame); // 0x14017A200
void Actor::MoveSpeedData(const float frame); // 0x14017A220
long Actor::GetTurnAngle(const long turn); // 0x14017A440
void Actor::SetTurn(const long turn); // 0x14017A500
void Actor::PrevDataSet(); // 0x14017A530
bool Actor::_branchIsAir(float param); // 0x14017A700
bool Actor::_branchIsLand(float param); // 0x14017A720
bool Actor::_branchIsStageWall(float param); // 0x14017A750
bool Actor::_branchIsFlag1(float param); // 0x14017A790
bool Actor::_branchIsFlag2(float param); // 0x14017A7A0
bool Actor::_branchIsFlag3(float param); // 0x14017A7B0
bool Actor::_branchIsFlag4(float param); // 0x14017A7C0
bool Actor::_branchIsDistance(float param); // 0x14017A7D0
bool Actor::_branchIsScreenWall(float param); // 0x14017A820
bool Actor::_branchIsActionLoopCount(float param); // 0x14017A860
bool Actor::_branchIsTargetAir(float param); // 0x14017A870
bool Actor::_branchIsTargetLand(float param); // 0x14017A8A0
bool Actor::_branchIsTargetFlag1(float param); // 0x14017A8D0
bool Actor::_branchIsTargetFlag2(float param); // 0x14017A8F0
bool Actor::_branchIsTargetFlag3(float param); // 0x14017A910
bool Actor::_branchIsTargetFlag4(float param); // 0x14017A930
bool Actor::_branchIsRandom(float param); // 0x14017A950
bool Actor::_branchIsActionCountOver(float param); // 0x14017A980
bool Actor::_branchIsActionCountUnder(float param); // 0x14017A990
bool Actor::_branchIsTargetKO(float param); // 0x14017A9A0
bool Actor::_branchIsTargetStageWall(float param); // 0x14017AA30
bool Actor::_branchIsParentFlag1(float param); // 0x14017AA80
bool Actor::_branchIsParentFlag2(float param); // 0x14017AAA0
bool Actor::_branchIsParentFlag3(float param); // 0x14017AAC0
bool Actor::_branchIsParentFlag4(float param); // 0x14017AAE0
bool Actor::_isBranchEnable(long type, float param); // 0x14017AB00
const CharaActionData::Branch * Actor::_branchConfirm(); // 0x14017AF20
void Actor::BranchCheck(); // 0x14017B020
float Actor::GetRivalDistance(); // 0x14017B0A0
void Actor::_branchFlagCtrl(long branchKeyID, long setFlag); // 0x14017B0D0
void Actor::ActionEtcSet(const CharaActionData::Etc & etc); // 0x14017B1E0
const CharaActionData::ActionLine * Actor::GetActionLine(const long ciActNo, CharaActionData::LINE_ID::ID lineID, const long ciGetIndex); // 0x14017B260
const CharaActionData::ActionLineFrame * Actor::GetKeyFrameLine(const CharaActionData::ActionLine * pLine, const long ciNowFrame, const long ciEndFrame); // 0x14017B320
class Actor::GetKeyFrameLine::__l6::<lambda_090c58aa8e5c4f8357e1adbb222523f2>
{
public:
	long operator()(const void *, const void *);
private:
	static long <lambda_invoker_cdecl>(const void *, const void *);
	typedef long(*<lambda_typedef_cdecl>)(const void *, const void *);
public:
	long(*)(const void *, const void *) operator int (__cdecl *)(const void *,const void *)();
private:
	static long <lambda_invoker_vectorcall>(const void *, const void *);
	typedef long(*<lambda_typedef_vectorcall>)(const void *, const void *);
public:
	long(*)(const void *, const void *) operator int (__vectorcall *)(const void *,const void *)();
	<lambda_090c58aa8e5c4f8357e1adbb222523f2>(Actor::GetKeyFrameLine::__l6::<lambda_090c58aa8e5c4f8357e1adbb222523f2> &);
	<lambda_090c58aa8e5c4f8357e1adbb222523f2>();
	Actor::GetKeyFrameLine::__l6::<lambda_090c58aa8e5c4f8357e1adbb222523f2> & operator=(const Actor::GetKeyFrameLine::__l6::<lambda_090c58aa8e5c4f8357e1adbb222523f2> &);
};
long <lambda_090c58aa8e5c4f8357e1adbb222523f2>::<lambda_invoker_cdecl>(const void * p1, const void * p2); // 0x14017B370
const CharaActionData::ActionLineFrame * Actor::GetKeyFrame(const long ciActNo, CharaActionData::LINE_ID::ID lineID, const long ciActFrame, const long ciGetIndex); // 0x14017B380
const CharaActionData::ActionLineFrame * Actor::GetAttackKeyFrame(const long ciActNo, const long ciActFrame); // 0x14017B460
const CharaActionData::ActionLineFrame * Actor::GetGuardCheckKeyFrame(const long ciActNo, const long ciActFrame); // 0x14017B570
long Actor::GetRealActionFrame(const long ciActNo, const long ciActFrame); // 0x14017B670
class Actor::GetRealActionFrame::__l14::<lambda_90e832d28fdcd31e4d5ffbf9e50b287a>
{
public:
	void operator()();
	<lambda_90e832d28fdcd31e4d5ffbf9e50b287a>(Actor::GetRealActionFrame::__l14::<lambda_90e832d28fdcd31e4d5ffbf9e50b287a> &);
	<lambda_90e832d28fdcd31e4d5ffbf9e50b287a>();
	<lambda_90e832d28fdcd31e4d5ffbf9e50b287a>(long &, const CharaActionData::ActionLineFrame &, long &, long &);
private:
	long & iStartFrame; // 0x0
	const CharaActionData::ActionLineFrame & frame; // 0x8
	long & iDuration; // 0x10
	long & iRetFrame; // 0x18
public:
	Actor::GetRealActionFrame::__l14::<lambda_90e832d28fdcd31e4d5ffbf9e50b287a> & operator=(const Actor::GetRealActionFrame::__l14::<lambda_90e832d28fdcd31e4d5ffbf9e50b287a> &);
};
const Collision::HitRect * Actor::GetHitRect(long rectID); // 0x14017B7A0
const CharaAttackData::AttackData * Actor::GetAttackData(long atkID); // 0x14017B7D0
const CharaDamageSetting::Setting * Actor::GetDamageSetting(long dmgID); // 0x14017B800
void Actor::SetHitStop(long hitStop, bool bDelay); // 0x14017B830
void Actor::ResetHitStop(); // 0x14017B870
void Actor::ResetAttackHitGroup(); // 0x14017B890
void Actor::SetAttackGroupID(long groupID); // 0x14017B8B0
bool Actor::IsAttackGroupID(long groupID); // 0x14017B920
void Actor::SetActionBranchKey(long branchKey); // 0x14017B950
void Actor::ResetActionBranchKey(long branchKey); // 0x14017B990
bool Actor::IsActionBranchKey(long branchKey); // 0x14017B9C0
void Actor::SetDamageReaction(const CharaDamageSetting::Setting * pDmg); // 0x14017B9E0
void Actor::ResetDamageReaction(); // 0x14017B9F0
bool Actor::IsDamageReaction(); // 0x14017BA00
void Actor::RequestPositionX(float x); // 0x14017BA10
void Actor::RequestPositionY(float y); // 0x14017BA30
void Actor::RequestPositionTargetOffset(float x, float y); // 0x14017BA50
void Actor::RequestPositionAtkOffset(Actor & target, const CharaAttackData::HitOffsetData & hitOffset); // 0x14017BA80
bool Actor::IsUseZOffset(); // 0x14017BCF0
bool Actor::IsStageLeftHit(); // 0x14017BD40
bool Actor::IsStageRightHit(); // 0x14017BD60
bool Actor::IsScreenLeftHit(); // 0x14017BD80
bool Actor::IsScreenRightHit(); // 0x14017BDB0
void Actor::CheckEffectLine(); // 0x14017BDE0
bool Actor::_checkEffectSetTerm(const CharaActionData::Effect::Type::Set & setData); // 0x14017BE70
void Actor::SetEffectControlData(const CharaActionData::Effect::Type::Control & ctrlData); // 0x14017BF90
void <lambda_59faa6a9715075ecdf1910603af67294>::operator()(Actor & actor); // 0x14017BFE0
class Actor::SetEffectControlData::__l2::<lambda_59faa6a9715075ecdf1910603af67294>
{
public:
	void operator()(Actor &);
	<lambda_59faa6a9715075ecdf1910603af67294>(Actor::SetEffectControlData::__l2::<lambda_59faa6a9715075ecdf1910603af67294> &);
	<lambda_59faa6a9715075ecdf1910603af67294>();
	<lambda_59faa6a9715075ecdf1910603af67294>(const CharaActionData::Effect::Type::Control &, Actor *);
private:
	const CharaActionData::Effect::Type::Control & ctrlData; // 0x0
	Actor * __this; // 0x8
public:
	Actor::SetEffectControlData::__l2::<lambda_59faa6a9715075ecdf1910603af67294> & operator=(const Actor::SetEffectControlData::__l2::<lambda_59faa6a9715075ecdf1910603af67294> &);
};
std::piecewise_construct_t std::piecewise_construct; // 0x14089E3AF
float Actor::GetSoundPanPosition(); // 0x14017C0E0
float Actor::GetSoundPanPositionEx(); // 0x14017C130//decompilation failure at 14089E3AF!
__int64 __fastcall lambda_090c58aa8e5c4f8357e1adbb222523f2_::_lambda_invoker_cdecl_(const void *p1, const void *p2)
{
  return (unsigned int)(*(_DWORD *)p1 - *(_DWORD *)p2);
}

std::bitset<61>::reference *__fastcall std::bitset<21>::operator[](
        std::bitset<61> *this,
        std::bitset<61>::reference *result,
        unsigned __int64 _Pos)
{
  std::bitset<61>::reference *v3; // rax

  result->_Pbitset = this;
  v3 = result;
  result->_Mypos = _Pos;
  return v3;
}

void __fastcall lambda_59faa6a9715075ecdf1910603af67294_::operator()(Actor *actor, __int64 a2)
{
  Actor_vtbl *v4; // rdx

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 440i64))(a2) != 1
    || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1560i64))(a2)
    || *(_QWORD *)&actor->iPriority != *(_QWORD *)(a2 + 136)
    || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1584i64))(a2) )
  {
    return;
  }
  v4 = actor->__vftable;
  switch ( HIWORD(actor->_MovePos) )
  {
    case 0:
      goto LABEL_17;
    case 1:
      goto LABEL_13;
    case 2:
      if ( !*(_BYTE *)(a2 + 979) )
        return;
LABEL_17:
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1616i64))(a2) )
        return;
      goto LABEL_18;
    case 3:
      if ( !*(_BYTE *)(a2 + 979) )
        return;
LABEL_13:
      if ( WORD1(v4->_branchIsAttackHitOrGuard) == *(_WORD *)(a2 + 942)
        && LOWORD(v4->_branchIsAttackHitOrGuard) == *(_WORD *)(a2 + 946) )
      {
LABEL_18:
        (*(void (__fastcall **)(__int64, Actor_vtbl *))(*(_QWORD *)a2 + 1552i64))(a2, actor->__vftable);
        return;
      }
      return;
  }
  if ( HIWORD(actor->_MovePos) == 4 && *(_DWORD *)(a2 + 980) == *(_DWORD *)(*(_QWORD *)&actor->iPriority + 412i64) )
    goto LABEL_17;
}

void __fastcall Actor::ActionChangeReq(Actor *this, const int actNo, const int frame)
{
  Actor_vtbl *v3; // rax

  v3 = this->__vftable;
  this->iActReserveNo = actNo;
  this->iActReserveFrame = frame;
  this->fActReserveFrameFraction = 0.0;
  ((void (*)(void))v3->CancelRequestPosition)();
  this->bIgnoreMotionBlend = 0;
}

void __fastcall Actor::ActionChanged(Actor *this)
{
  char v2; // al
  __int64 v3; // r8
  __int64 v4; // r9
  OGLModel *pModel; // rcx
  __int64 v6; // rdx
  char v7; // r10
  OGLLightManager *m_pLightManager; // rax
  OGLModel *v9; // rax
  OGLLightManager *v10; // rax
  float z; // eax

  v2 = this->GetActionOptionFlag(this, this->iActNo, 0);
  pModel = this->pModel;
  v6 = 0i64;
  v7 = v2;
  if ( pModel )
  {
    if ( pModel->m_pMaterial )
    {
      v4 = 0i64;
      if ( pModel->m_ucMaterialCount )
      {
        v3 = 0i64;
        do
        {
          m_pLightManager = this->pModel->m_pMaterial[v3].m_pLightManager;
          if ( m_pLightManager )
            m_pLightManager->m_mirrorLight = 0;
          v4 = (unsigned int)(v4 + 1);
          ++v3;
        }
        while ( (int)v4 < this->pModel->m_ucMaterialCount );
      }
    }
  }
  v9 = this->pModel;
  if ( v9 && v9->m_pMaterial && v9->m_ucMaterialCount )
  {
    v3 = 0i64;
    do
    {
      v10 = this->pModel->m_pMaterial[v3].m_pLightManager;
      if ( v10 )
        v10->m_moveLight = 0;
      v6 = (unsigned int)(v6 + 1);
      ++v3;
    }
    while ( (int)v6 < this->pModel->m_ucMaterialCount );
  }
  this->vScale.x = 1.0;
  this->vScale.y = 1.0;
  this->vScale.z = 1.0;
  if ( (v7 & 1) == 0 )
  {
    z = this->vPos.z;
    *(_QWORD *)&this->vBasePos.x = *(_QWORD *)&this->vPos.x;
    this->vBasePos.z = z;
  }
  if ( (v7 & 2) == 0 )
    ((void (__fastcall *)(Actor *, _QWORD, __int64, __int64))this->ResetActionBranchKey)(this, 0i64, v3 * 1128, v4);
  ((void (__fastcall *)(Actor *, __int64, __int64, __int64))this->ResetAttackHitGroup)(this, v6, v3 * 1128, v4);
}

void __fastcall Actor::ActionEtcSet(Actor *this, const CharaActionData::Etc *etc)
{
  this->SetTurn(this, etc->iTurn);
  this->_branchFlagCtrl(this, 1, etc->branchFlag1);
  this->_branchFlagCtrl(this, 2, etc->branchFlag2);
  this->_branchFlagCtrl(this, 3, etc->branchFlag3);
  this->_branchFlagCtrl(this, 4, etc->branchFlag4);
}

void __fastcall Actor::ActionFrameChangeReq(Actor *this, const int frame)
{
  this->iActReserveFrame = frame;
  this->fActReserveFrameFraction = 0.0;
  this->bIgnoreMotionBlend = 0;
}

void __fastcall Actor::ActionParamInit(Actor *this)
{
  this->baseAnime.iMotionID = -1;
  *(_QWORD *)&this->baseAnime.fMotionFrame = 0i64;
  this->baseAnime.fTransparent = 0.0;
  *(_QWORD *)&this->faceAnimeLow.fMotionFrame = 0i64;
  *(_QWORD *)&this->faceAnimeUp.fMotionFrame = 0i64;
  *(_QWORD *)&this->iActFlg1 = 0i64;
  *(_QWORD *)&this->iActFlg1Next = 0i64;
  *(_QWORD *)&this->iMoveOption = 0i64;
  this->bodyPush.iBindIndex = 0;
  this->bodyPush.iRectID = 0;
  this->bodyPush.iFlag = 0;
  *(_QWORD *)&this->iHitDataCount = 0i64;
  *(_QWORD *)&this->iCancelDataCount = 0i64;
  this->iBranchRandomMax = 0;
  *(_QWORD *)&this->iEffectDataCount = 0i64;
  this->iSettingDataCount = 0;
  this->faceAnimeLow.iMotionID = -1;
  this->faceAnimeUp.iMotionID = -1;
  this->exclusiveParam.iType = -1;
  this->iBranchRandomValue = -1;
  *(_QWORD *)&this->vOff.x = 0i64;
  this->vOff.z = 0.0;
  *(_QWORD *)&this->vBaseOff.x = 0i64;
  this->vBaseOff.z = 0.0;
  *(_QWORD *)&this->vColOff.x = 0i64;
  this->vColOff.z = 0.0;
  *(_QWORD *)&this->vColOffBase.x = 0i64;
  this->vColOffBase.z = 0.0;
  *(_WORD *)&this->bActionEnd = 0;
  this->bActionFreeze = 0;
}

void __fastcall Actor::BranchCheck(Actor *this)
{
  const CharaActionData::Branch *v2; // rax

  if ( !this->xHitStopFrame.value && !this->IsBlackStop(this) )
  {
    v2 = Actor::_branchConfirm(this);
    if ( v2 )
    {
      this->ActionChangeReq(this, v2->iActionID, v2->iActionFrame);
      if ( this->IsActionDataChanged(this) )
        this->ChangeActionDataReq(this, this->pAct, this->pMotionChangeModel, this->pHitRect);
    }
  }
}

void __fastcall Actor::CAngleChangeReq(Actor *this, const int angle)
{
  this->iCAngleReserve = angle;
}

void __fastcall Actor::CAngleChangeReq(Actor *this)
{
  this->iCAngleReserve = this->iCAngleBuf;
}

void __fastcall Actor::ChangeActionDataReq(
        Actor *this,
        const CharaActionData *pActDat,
        OGLModel *pChangeModel,
        const CharaHitRect *pRectDat)
{
  if ( !this->pActBuf )
    this->pActBuf = this->pAct;
  if ( !this->pHitRectBuf )
    this->pHitRectBuf = this->pHitRect;
  this->pActReserve = pActDat;
  this->pHitRectReserve = pRectDat;
  this->pMotionChangeModelReserve = pChangeModel;
}

void __fastcall Actor::ChangeActionDataTargetReq(Actor *this)
{
  Actor *pTarget; // rdx

  pTarget = this->pTarget;
  if ( pTarget )
  {
    if ( !this->pActBuf )
      this->pActBuf = this->pAct;
    if ( !this->pHitRectBuf )
      this->pHitRectBuf = this->pHitRect;
    this->pActReserve = pTarget->pAct;
    this->pHitRectReserve = pTarget->pHitRect;
    this->pMotionChangeModelReserve = pTarget->pModel;
  }
}

void __fastcall Actor::CheckEffectLine(Actor *this)
{
  int i; // edi
  const CharaActionData::ActionLineFrame *v3; // rax
  const CharaActionData::ActionLineFrame *v4; // rdx
  int v5; // eax

  for ( i = 0; i < this->iEffectDataCount; ++i )
  {
    v3 = this->GetKeyFrame(this, (unsigned int)this->iActNo, 14i64, (unsigned int)this->iActFrame, i);
    v4 = v3;
    if ( v3 )
    {
      v5 = v3->iBase[0];
      if ( v5 )
      {
        if ( v5 == 1 )
          this->SetEffectControlData(this, (const CharaActionData::Effect::Type::Control *)&v4->hit.iRectAttr);
      }
      else
      {
        this->SetEffectCreateData(this, (const CharaActionData::Effect::Type::Set *)&v4->hit.iRectAttr);
      }
    }
  }
}

void __fastcall Actor::Dispose(ActorWeapon *this)
{
  this->CreateInit(this);
}

void __fastcall Actor::DrawRequest(Actor *this, __int64 a2, float a3)
{
  OGLModel *pModel; // rax
  OGLModel *v5; // rdi
  OGLMatrix *v6; // rdx

  pModel = this->pModel;
  if ( pModel )
  {
    pModel->m_renderBufferFlg = 0;
    v5 = this->pModel;
    OGLModel::syncPosture(v5);
    v5->bWakeThread._My_val = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)&v5->m_postureReadyCond);
    WakeConditionVariable((PCONDITION_VARIABLE)&v5->m_postureReadyCond.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&v5->m_postureReadyCond);
    OGLModel::updatePostureSecExe(v5, v6, a3);
    if ( this->GetActionSystem(this)->bFastPlayDrawSkipFrame )
      this->pModel->m_iMotionPostureCount = 0;
    this->bDrawReq = 1;
  }
  else
  {
    this->bDrawReq = 1;
  }
}

__int64 __fastcall Actor::GetActionCategoryID(Actor *this, int actNo, bool bOriginData)
{
  __int64 v4; // rbx
  const CharaActionData *pActBuf; // rdx

  v4 = actNo;
  if ( this->IsActionDataChanged(this) && bOriginData )
  {
    if ( (int)v4 < 0 )
      return 0i64;
    pActBuf = this->pActBuf;
  }
  else
  {
    if ( !this->IsDataExist(this) || (int)v4 < 0 )
      return 0i64;
    pActBuf = this->pAct;
  }
  if ( (int)v4 < pActBuf->dataHeader.iActionCount )
    return (unsigned int)pActBuf->pActData[v4].info.iCategoryID;
  return 0i64;
}

__int64 __fastcall Actor::GetActionCount(Actor *this, bool bOriginData)
{
  if ( this->IsActionDataChanged(this) && bOriginData )
    return (unsigned int)this->pActBuf->dataHeader.iActionCount;
  if ( this->IsDataExist(this) )
    return (unsigned int)this->pAct->dataHeader.iActionCount;
  return 0i64;
}

CharaActionData::ActionData *__fastcall Actor::GetActionDataInfo(Actor *this, const int actNo, bool bOriginData)
{
  __int64 v4; // rbx
  const CharaActionData *pActBuf; // rcx

  v4 = actNo;
  if ( this->IsActionDataChanged(this) && bOriginData )
  {
    if ( (int)v4 < 0 )
      return 0i64;
    pActBuf = this->pActBuf;
  }
  else
  {
    if ( !this->IsDataExist(this) || (int)v4 < 0 )
      return 0i64;
    pActBuf = this->pAct;
  }
  if ( (int)v4 < pActBuf->dataHeader.iActionCount )
    return &pActBuf->pActData[v4];
  return 0i64;
}

__int64 __fastcall Actor::GetActionEndFrame(Actor *this, int actNo, bool bOriginData)
{
  __int64 v4; // rbx
  const CharaActionData *pActBuf; // rdx

  v4 = actNo;
  if ( this->IsActionDataChanged(this) && bOriginData )
  {
    if ( (int)v4 < 0 )
      return 0i64;
    pActBuf = this->pActBuf;
  }
  else
  {
    if ( !this->IsDataExist(this) || (int)v4 < 0 )
      return 0i64;
    pActBuf = this->pAct;
  }
  if ( (int)v4 < pActBuf->dataHeader.iActionCount )
    return (unsigned int)pActBuf->pActData[v4].info.iEndFrame;
  return 0i64;
}

const CharaActionData::ActionLine *__fastcall Actor::GetActionLine(
        Actor *this,
        const int ciActNo,
        CharaActionData::LINE_ID::ID lineID,
        const int ciGetIndex)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  int v9; // ebx
  const CharaActionData *pAct; // rdx
  __int64 v11; // rcx
  int v12; // edx
  int *v13; // r9
  __int64 v14; // r8
  int *v15; // rax
  __int64 v16; // rcx

  v4 = 0i64;
  v6 = ciActNo;
  v9 = 0;
  if ( !this->IsDataExist(this) )
    return 0i64;
  if ( (int)v6 < 0 )
    return 0i64;
  pAct = this->pAct;
  if ( (int)v6 >= pAct->dataHeader.iActionCount )
    return 0i64;
  v11 = (__int64)&pAct->pActData[v6];
  v12 = 0;
  if ( *(int *)(v11 + 36) <= 0 )
    return (const CharaActionData::ActionLine *)v4;
  v13 = *(int **)(v11 + 40);
  v14 = *(int *)(v11 + 36);
  v15 = v13;
  v16 = 0i64;
  while ( 1 )
  {
    if ( v15[1] != lineID || *v15 < 1 )
      goto LABEL_10;
    if ( ciGetIndex == v9 )
      return (const CharaActionData::ActionLine *)&v13[4 * v12];
    ++v9;
LABEL_10:
    ++v12;
    ++v16;
    v15 += 4;
    if ( v16 >= v14 )
      return 0i64;
  }
}

__int64 __fastcall Actor::GetActionOptionFlag(Actor *this, int actNo, bool bOriginData)
{
  __int64 v4; // rbx
  const CharaActionData *pActBuf; // rdx

  v4 = actNo;
  if ( this->IsActionDataChanged(this) && bOriginData )
  {
    if ( (int)v4 < 0 )
      return 0i64;
    pActBuf = this->pActBuf;
  }
  else
  {
    if ( !this->IsDataExist(this) || (int)v4 < 0 )
      return 0i64;
    pActBuf = this->pAct;
  }
  if ( (int)v4 < pActBuf->dataHeader.iActionCount )
    return (unsigned int)pActBuf->pActData[v4].info.iOptionFlag;
  return 0i64;
}

float __fastcall Actor::GetActionPlayRate(Actor *this)
{
  return this->GetActionSystemSpeed(this) * this->fActionPlayRate;
}

Fix32 *__fastcall Actor::GetActionPlayRateFix(Actor *this, Fix32 *result)
{
  Fix32 *v4; // rax

  ((void (__fastcall *)(Actor *))this->GetActionSystemSpeedFix)(this);
  v4 = result;
  result->value = (result->value * (__int64)(int)(float)(this->fActionPlayRate * 65536.0)) >> 16;
  return v4;
}

__int64 __fastcall Actor::GetActionSubCategoryID(Actor *this, int actNo, bool bOriginData)
{
  __int64 v4; // rbx
  const CharaActionData *pActBuf; // rdx

  v4 = actNo;
  if ( this->IsActionDataChanged(this) && bOriginData )
  {
    if ( (int)v4 < 0 )
      return 0i64;
    pActBuf = this->pActBuf;
  }
  else
  {
    if ( !this->IsDataExist(this) || (int)v4 < 0 )
      return 0i64;
    pActBuf = this->pAct;
  }
  if ( (int)v4 < pActBuf->dataHeader.iActionCount )
    return (unsigned int)pActBuf->pActData[v4].info.iSubCategoryID;
  return 0i64;
}

float __fastcall Actor::GetActionSystemSpeed(Actor *this)
{
  ActionSystem *pActSys; // rax

  pActSys = this->pActSys;
  if ( !pActSys || this->bIgnoreSystemPlayRate )
    return *(float *)&FLOAT_1_0;
  else
    return (float)((float)(unsigned __int16)pActSys->xPlaySpeed.value * 0.000015258789)
         + (float)(pActSys->xPlaySpeed.value >> 16);
}

Fix32 *__fastcall Actor::GetActionSystemSpeedFix(Actor *this, Fix32 *result)
{
  ActionSystem *pActSys; // rax

  pActSys = this->pActSys;
  if ( !pActSys || this->bIgnoreSystemPlayRate )
  {
    result->value = 0x10000;
    return result;
  }
  else
  {
    result->value = (int)pActSys->xPlaySpeed;
    return result;
  }
}

CharaAttackData::AttackData *__fastcall Actor::GetAttackData(Actor *this, int atkID)
{
  const CharaAttackData *pAtkData; // r8

  pAtkData = this->pAtkData;
  if ( pAtkData && atkID > 0 && atkID < pAtkData->dataHeader.iDataCount )
    return &pAtkData->pAtkData[atkID];
  else
    return 0i64;
}

const CharaActionData::ActionLineFrame *__fastcall Actor::GetAttackKeyFrame(
        Actor *this,
        const int ciActNo,
        const int ciActFrame)
{
  __int64 v4; // rsi
  const int *v6; // rbp
  const CharaActionData *pAct; // rdx
  const CharaAttackData *pAtkData; // r9
  __int64 v9; // rcx
  int v10; // eax
  int *v11; // r10
  __int64 v12; // rdi
  __int64 v13; // r8
  const int *v14; // rax
  __int64 v15; // rcx

  v4 = ciActNo;
  v6 = 0i64;
  if ( this->IsDataExist(this) && (int)v4 >= 0 )
  {
    pAct = this->pAct;
    if ( (int)v4 < pAct->dataHeader.iActionCount )
    {
      pAtkData = this->pAtkData;
      if ( pAtkData )
      {
        v9 = (__int64)&pAct->pActData[v4];
        v10 = *(_DWORD *)(v9 + 36);
        v11 = *(int **)(v9 + 40);
        if ( v10 <= 0 )
          return (const CharaActionData::ActionLineFrame *)v6;
        v12 = (unsigned int)v10;
        while ( 1 )
        {
          if ( v11[1] != 5 )
            goto LABEL_23;
          if ( *v11 < 1 )
            goto LABEL_23;
          v13 = 0i64;
          if ( *v11 <= 0 )
            goto LABEL_23;
          v14 = (const int *)*((_QWORD *)v11 + 1);
          while ( 1 )
          {
            if ( v14[7] )
              goto LABEL_18;
            v15 = v14[1];
            if ( (int)v15 <= 0 || pAtkData->dataHeader.iDataCount <= (int)v15 || pAtkData->pAtkData[v15].iDataType > 2u )
              goto LABEL_18;
            if ( ciActFrame < 0 )
              break;
            if ( *v14 == ciActFrame )
              goto LABEL_22;
            if ( *v14 >= ciActFrame )
              goto LABEL_23;
LABEL_18:
            ++v13;
            v14 += 8;
            if ( v13 >= *v11 )
              goto LABEL_23;
          }
          if ( !v6 || *v6 > *v14 )
LABEL_22:
            v6 = v14;
LABEL_23:
          v11 += 4;
          if ( !--v12 )
            return (const CharaActionData::ActionLineFrame *)v6;
        }
      }
    }
  }
  return 0i64;
}

CharaDamageSetting::Setting *__fastcall Actor::GetDamageSetting(Actor *this, int dmgID)
{
  const CharaDamageSetting *pDmgSet; // r8

  pDmgSet = this->pDmgSet;
  if ( pDmgSet && dmgID > 0 && dmgID < pDmgSet->dataHeader.iDataCount )
    return &pDmgSet->pSetting[dmgID];
  else
    return 0i64;
}

const CharaActionData::ActionLineFrame *__fastcall Actor::GetGuardCheckKeyFrame(
        Actor *this,
        const int ciActNo,
        const int ciActFrame)
{
  __int64 v4; // rsi
  const int *v6; // rbp
  const CharaActionData *pAct; // rdx
  const CharaAttackData *pAtkData; // r9
  __int64 v9; // rcx
  int v10; // eax
  int *v11; // r10
  __int64 v12; // rdi
  __int64 v13; // r8
  const int *v14; // rax
  __int64 v15; // rcx

  v4 = ciActNo;
  v6 = 0i64;
  if ( this->IsDataExist(this) && (int)v4 >= 0 )
  {
    pAct = this->pAct;
    if ( (int)v4 < pAct->dataHeader.iActionCount )
    {
      pAtkData = this->pAtkData;
      if ( pAtkData )
      {
        v9 = (__int64)&pAct->pActData[v4];
        v10 = *(_DWORD *)(v9 + 36);
        v11 = *(int **)(v9 + 40);
        if ( v10 <= 0 )
          return (const CharaActionData::ActionLineFrame *)v6;
        v12 = (unsigned int)v10;
        while ( 1 )
        {
          if ( v11[1] != 5 )
            goto LABEL_22;
          if ( *v11 < 1 )
            goto LABEL_22;
          v13 = 0i64;
          if ( *v11 <= 0 )
            goto LABEL_22;
          v14 = (const int *)*((_QWORD *)v11 + 1);
          while ( 1 )
          {
            v15 = v14[1];
            if ( (int)v15 <= 0 || pAtkData->dataHeader.iDataCount <= (int)v15 || pAtkData->pAtkData[v15].iDataType != 5 )
              goto LABEL_17;
            if ( ciActFrame < 0 )
              break;
            if ( *v14 == ciActFrame )
              goto LABEL_21;
            if ( *v14 >= ciActFrame )
              goto LABEL_22;
LABEL_17:
            ++v13;
            v14 += 8;
            if ( v13 >= *v11 )
              goto LABEL_22;
          }
          if ( !v6 || *v6 > *v14 )
LABEL_21:
            v6 = v14;
LABEL_22:
          v11 += 4;
          if ( !--v12 )
            return (const CharaActionData::ActionLineFrame *)v6;
        }
      }
    }
  }
  return 0i64;
}

Collision::HitRect *__fastcall Actor::GetHitRect(Actor *this, int rectID)
{
  const CharaHitRect *pHitRect; // r8

  pHitRect = this->pHitRect;
  if ( pHitRect && rectID > 0 && rectID < pHitRect->dataHeader.iDataCount )
    return &pHitRect->pRect[rectID];
  else
    return 0i64;
}

const CharaActionData::ActionLineFrame *__fastcall Actor::GetKeyFrame(
        Actor *this,
        const int ciActNo,
        CharaActionData::LINE_ID::ID lineID,
        const int ciActFrame,
        const int ciGetIndex)
{
  __int64 v6; // rbx
  const CharaActionData::ActionLineFrame *v8; // r14
  int v9; // edi
  const CharaActionData *pAct; // rcx
  __int64 v11; // rbp
  int v12; // esi
  const CharaActionData::ActionLine *i; // rbx

  v6 = ciActNo;
  v8 = 0i64;
  v9 = 0;
  if ( !this->IsDataExist(this) )
    return 0i64;
  if ( (int)v6 < 0 )
    return 0i64;
  pAct = this->pAct;
  if ( (int)v6 >= pAct->dataHeader.iActionCount )
    return 0i64;
  v11 = (__int64)&pAct->pActData[v6];
  v12 = 0;
  for ( i = *(const CharaActionData::ActionLine **)(v11 + 40); v12 < *(_DWORD *)(v11 + 36); ++i )
  {
    if ( i->iActionLineID == lineID && i->iKeyFrameCount >= 1 )
    {
      v8 = this->GetKeyFrameLine(this, i, (unsigned int)ciActFrame, *(unsigned int *)(v11 + 8));
      if ( v8 )
      {
        if ( ciGetIndex == v9 )
          return v8;
        v8 = 0i64;
        ++v9;
      }
    }
    ++v12;
  }
  return v8;
}

CharaActionData::ActionLineFrame *__fastcall Actor::GetKeyFrameLine(
        Actor *this,
        const CharaActionData::ActionLine *pLine,
        const int ciNowFrame,
        const int ciEndFrame)
{
  unsigned __int64 iKeyFrameCount; // rax
  int key; // [rsp+50h] [rbp+18h] BYREF

  key = ciNowFrame;
  iKeyFrameCount = pLine->iKeyFrameCount;
  if ( (_DWORD)iKeyFrameCount == ciEndFrame )
    return &pLine->pFrame[ciNowFrame];
  else
    return (CharaActionData::ActionLineFrame *)bsearch(
                                                 &key,
                                                 pLine->pFrame,
                                                 iKeyFrameCount,
                                                 0x20ui64,
                                                 lambda_090c58aa8e5c4f8357e1adbb222523f2_::_lambda_invoker_cdecl_);
}

bool __fastcall Actor::GetModelMirrorLightFlag(Actor *this)
{
  OGLModel *pModel; // rax
  OGLMaterial *m_pMaterial; // r9
  int v3; // edx
  __int64 m_ucMaterialCount; // r8
  OGLLightManager **p_m_pLightManager; // rax
  __int64 v6; // rcx

  pModel = this->pModel;
  if ( !pModel )
    return 0;
  m_pMaterial = pModel->m_pMaterial;
  if ( !m_pMaterial )
    return 0;
  v3 = 0;
  if ( !pModel->m_ucMaterialCount )
    return 0;
  m_ucMaterialCount = pModel->m_ucMaterialCount;
  p_m_pLightManager = &m_pMaterial->m_pLightManager;
  v6 = 0i64;
  while ( !*p_m_pLightManager )
  {
    ++v3;
    ++v6;
    p_m_pLightManager += 141;
    if ( v6 >= m_ucMaterialCount )
      return 0;
  }
  return m_pMaterial[v3].m_pLightManager->m_mirrorLight != 0;
}

bool __fastcall Actor::GetModelMoveLightFlag(Actor *this)
{
  OGLModel *pModel; // rax
  OGLMaterial *m_pMaterial; // r9
  int v3; // edx
  __int64 m_ucMaterialCount; // r8
  OGLLightManager **p_m_pLightManager; // rax
  __int64 v6; // rcx

  pModel = this->pModel;
  if ( !pModel )
    return 0;
  m_pMaterial = pModel->m_pMaterial;
  if ( !m_pMaterial )
    return 0;
  v3 = 0;
  if ( !pModel->m_ucMaterialCount )
    return 0;
  m_ucMaterialCount = pModel->m_ucMaterialCount;
  p_m_pLightManager = &m_pMaterial->m_pLightManager;
  v6 = 0i64;
  while ( !*p_m_pLightManager )
  {
    ++v3;
    ++v6;
    p_m_pLightManager += 141;
    if ( v6 >= m_ucMaterialCount )
      return 0;
  }
  return m_pMaterial[v3].m_pLightManager->m_moveLight != 0;
}

__int64 __fastcall Actor::GetRealActionFrame(Actor *this, const int ciActNo, const int ciActFrame)
{
  __int64 v4; // rbp
  unsigned int v6; // esi
  int v7; // edi
  int v8; // ebx
  const CharaActionData *pAct; // rdx
  __int64 v10; // rcx
  int v11; // edx
  int v12; // er8
  __int64 v13; // rax
  int v15; // er9
  int v16; // er8
  const int *v17; // rdx
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // ecx

  v4 = ciActNo;
  v6 = ciActFrame;
  v7 = -1;
  v8 = 0;
  if ( !this->IsDataExist(this) )
    return 0xFFFFFFFFi64;
  if ( (int)v4 < 0 )
    return 0xFFFFFFFFi64;
  pAct = this->pAct;
  if ( (int)v4 >= pAct->dataHeader.iActionCount )
    return 0xFFFFFFFFi64;
  v10 = (__int64)&pAct->pActData[v4];
  v11 = 0;
  v12 = *(_DWORD *)(v10 + 36);
  v13 = *(_QWORD *)(v10 + 40);
  if ( v12 > 0 )
  {
    while ( *(_DWORD *)(v13 + 4) != 19 || *(int *)v13 < 1 )
    {
      ++v11;
      v13 += 16i64;
      if ( v11 >= v12 )
        return v6;
    }
    v15 = *(_DWORD *)v13;
    v16 = 0;
    if ( *(int *)v13 > 0 )
    {
      v17 = *(const int **)(v13 + 8);
      do
      {
        v18 = *v17;
        if ( *v17 >= ciActFrame )
          break;
        v19 = v17[1];
        if ( v19 )
        {
          if ( (unsigned int)(v19 - 2) <= 2 )
          {
            if ( v7 >= 0 )
            {
              v20 = v18 - v7;
              if ( v18 - v7 > v8 )
                v20 = v8;
              if ( v20 > 0 )
                v6 -= v20;
            }
            v8 = v17[3];
            v7 = *v17;
            if ( v8 <= 0 )
              v8 = 9999;
          }
        }
        else if ( v7 >= 0 )
        {
          v21 = v18 - v7;
          if ( v21 > v8 )
            v21 = v8;
          if ( v21 > 0 )
            v6 -= v21;
          v7 = -1;
          v8 = 0;
        }
        ++v16;
        v17 += 8;
      }
      while ( v16 < v15 );
      if ( v7 >= 0 )
        v6 -= v8;
    }
  }
  return v6;
}

float __fastcall Actor::GetRivalDistance(Actor *this)
{
  Actor *pTarget; // rax

  pTarget = this->pTarget;
  if ( pTarget )
    return COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(this->vPos.x - pTarget->vPos.x)) & _xmm);
  else
    return 0.0;
}

float __fastcall Actor::GetSoundPanPosition(Actor *this)
{
  Actor::SYSTEM_STAT systemStat; // eax
  OGLVec3 *v3; // rax
  char v5[24]; // [rsp+20h] [rbp-18h] BYREF

  systemStat = this->systemStat;
  if ( systemStat == INIT || systemStat == ERASE )
    return FLOAT_N100_0;
  v3 = this->GetCenterPosition(this, v5);
  return ActionSystem::GetSoundPanPosition(this->pActSys, v3->x);
}

float __fastcall Actor::GetSoundPanPositionEx(Actor *this)
{
  ActionSystem *pActSys; // rax
  Actor::SYSTEM_STAT systemStat; // eax
  OGLVec3 *v4; // rax
  char v6[24]; // [rsp+20h] [rbp-18h] BYREF

  pActSys = this->pActSys;
  if ( pActSys->bUseSubCamera )
    return FLOAT_N100_0;
  if ( (unsigned int)(pActSys->cameraCtrl.offset.type - 3) <= 1 )
    return FLOAT_N100_0;
  systemStat = this->systemStat;
  if ( systemStat == INIT || systemStat == ERASE )
    return FLOAT_N100_0;
  v4 = this->GetCenterPosition(this, v6);
  return ActionSystem::GetSoundPanPosition(this->pActSys, v4->x);
}

__int64 __fastcall Actor::GetTurnAngle(Actor *this, const int turn)
{
  unsigned int iCAngle; // er8
  __int64 result; // rax
  Actor *pTarget; // rdx
  Actor *v5; // rax

  iCAngle = this->iCAngle;
  switch ( turn )
  {
    case 1:
      result = (unsigned int)this->iCAngleBuf;
      break;
    case 2:
      result = this->iCAngleBuf == 0;
      break;
    case 3:
      result = iCAngle == 0;
      break;
    case 4:
      result = 0i64;
      break;
    case 5:
      result = 1i64;
      break;
    case 6:
      pTarget = this->pTarget;
      if ( !pTarget )
        goto LABEL_11;
      result = pTarget->iCAngle == 0;
      break;
    case 7:
      v5 = this->pTarget;
      if ( v5 )
        iCAngle = v5->iCAngle;
      goto LABEL_11;
    default:
LABEL_11:
      result = iCAngle;
      break;
  }
  return result;
}

unsigned __int8 __fastcall Actor::IsActionBranchKey(Actor *this, int branchKey)
{
  unsigned int uiActionBranchKey; // eax

  if ( (unsigned int)(branchKey - 1) > 3 )
    return 0;
  uiActionBranchKey = this->uiActionBranchKey;
  return _bittest((const int *)&uiActionBranchKey, branchKey);
}

unsigned __int8 __fastcall Actor::IsAttackGroupID(Actor *this, int groupID)
{
  unsigned __int64 v2; // rax

  if ( (unsigned int)groupID > 0x7F )
    return 0;
  v2 = this->attackHitGroupBit._Array[(unsigned __int64)groupID >> 6];
  return _bittest64((const __int64 *)&v2, groupID & 0x3F);
}

bool __fastcall Actor::IsDamageReaction(Actor *this)
{
  return this->pDamageReaction != 0i64;
}

bool __fastcall Actor::IsLanding(Actor *this)
{
  return this->vMov.y <= 0.0 && this->vPos.y <= 0.0;
}

bool __fastcall Actor::IsLoopAction(Actor *this, int actNo, bool bOriginData)
{
  __int64 v4; // rbx
  const CharaActionData *pActBuf; // rdx

  v4 = actNo;
  if ( this->IsActionDataChanged(this) && bOriginData )
  {
    if ( (int)v4 < 0 )
      return 0;
    pActBuf = this->pActBuf;
  }
  else
  {
    if ( !this->IsDataExist(this) || (int)v4 < 0 )
      return 0;
    pActBuf = this->pAct;
  }
  if ( (int)v4 < pActBuf->dataHeader.iActionCount )
    return pActBuf->pActData[v4].info.iLoopBackFrame >= 0;
  return 0;
}

bool __fastcall Actor::IsScreenLeftHit(Actor *this)
{
  return (float)(this->pActSys->cameraCtrl.vBaseWallPos.x - 26.25) >= (float)(this->vColOff.x + this->vPos.x);
}

bool __fastcall Actor::IsScreenRightHit(Actor *this)
{
  return (float)(this->vColOff.x + this->vPos.x) >= (float)(this->pActSys->cameraCtrl.vBaseWallPos.x + 26.25);
}

bool __fastcall Actor::IsStageLeftHit(Actor *this)
{
  return (float)(this->vColOff.x + this->vPos.x) <= -80.0;
}

bool __fastcall Actor::IsStageRightHit(Actor *this)
{
  return (float)(this->vColOff.x + this->vPos.x) >= 80.0;
}

bool __fastcall Actor::IsUseZOffset(Actor *this)
{
  ActionSystem *pActSys; // rdx

  pActSys = this->pActSys;
  return (unsigned int)(pActSys->cameraCtrl.offset.type - 3) > 1
      && !pActSys->bUseSubCamera
      && !pActSys->bInvalidZOffset
      && (unsigned int)(pActSys->cameraCtrl.offset.type - 3) > 1
      && !pActSys->bFreeCameraMode
      && this->bUseZOffset;
}

bool __fastcall Actor::ModelSyncPosture(Actor *this)
{
  bool result; // al

  if ( !this->bUpdatePostureAsync )
    return 0;
  OGLModel::syncPosture(this->pModel);
  result = 1;
  this->bUpdatePostureAsync = 0;
  return result;
}

void __fastcall Actor::ModelUpdatePosture(Actor *this, OGLMatrix *mat)
{
  OGLModel::updatePosture(this->pModel, mat, 0.0, 0, 1u);
  *(_WORD *)&this->bUpdatePostureAsync = 1;
}

void __fastcall Actor::MoveSpeedData(Actor *this, const float frame)
{
  float v4; // xmm0_4
  float x; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  int iSpeedOption; // eax
  float v10; // xmm0_4
  float y; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  int v15; // eax
  float v16; // xmm0_4
  float z; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm1_4

  if ( this->xMoveWaitFrame.value <= 0 )
  {
    if ( (this->iActFlg1 & 0x800) == 0 )
    {
      v4 = ((float (*)(void))this->_MovePos)();
      x = this->vAdd.x;
      v6 = v4 + this->vPos.x;
      v7 = v4 + this->vBasePos.x;
      this->vPos.x = v6;
      this->vBasePos.x = v7;
      v8 = (float)(x * frame) + this->vMov.x;
      this->vMov.x = v8;
      if ( x > 0.0 && v8 >= 0.0 )
        goto LABEL_7;
      if ( x < 0.0 && v8 <= 0.0 )
      {
LABEL_7:
        iSpeedOption = this->iSpeedOption;
        if ( (iSpeedOption & 1) != 0 )
        {
          this->vMov.x = 0.0;
          this->vAdd.x = 0.0;
        }
        if ( (iSpeedOption & 2) != 0 )
        {
          this->vMov.y = 0.0;
          this->vAdd.y = 0.0;
        }
      }
    }
    if ( (this->iActFlg1 & 0x1000) == 0 )
    {
      v10 = ((float (__fastcall *)(Actor *))this->_MovePos)(this);
      y = this->vAdd.y;
      v12 = v10 + this->vPos.y;
      v13 = v10 + this->vBasePos.y;
      this->vPos.y = v12;
      this->vBasePos.y = v13;
      v14 = (float)(y * frame) + this->vMov.y;
      this->vMov.y = v14;
      if ( y > 0.0 && v14 >= 0.0 )
        goto LABEL_16;
      if ( y < 0.0 && v14 <= 0.0 )
      {
LABEL_16:
        v15 = this->iSpeedOption;
        if ( (v15 & 4) != 0 )
        {
          this->vMov.x = 0.0;
          this->vAdd.x = 0.0;
        }
        if ( (v15 & 8) != 0 )
        {
          this->vMov.y = 0.0;
          this->vAdd.y = 0.0;
        }
      }
    }
    v16 = ((float (__fastcall *)(Actor *))this->_MovePos)(this);
    z = this->vAdd.z;
    v18 = v16 + this->vPos.z;
    v19 = v16 + this->vBasePos.z;
    this->vPos.z = v18;
    this->vBasePos.z = v19;
    v20 = (float)(z * frame) + this->vMov.z;
    this->vMov.z = v20;
    if ( (z > 0.0 && v20 >= 0.0 || z < 0.0 && v20 <= 0.0) && SLOBYTE(this->iSpeedOption) < 0 )
    {
      this->vMov.z = 0.0;
      this->vAdd.z = 0.0;
    }
  }
}

void __fastcall Actor::ParamInit(
        Actor *this,
        const CharaActionData *pActData,
        const CharaHitRect *pHit,
        const CharaAttackData *pAtk,
        const CharaDamageSetting *pDmg)
{
  Actor_vtbl *v6; // rax
  Actor_vtbl *v7; // rax

  this->pDmgSet = pDmg;
  this->pActBuf = 0i64;
  this->pActReserve = 0i64;
  this->pHitRectBuf = 0i64;
  this->pHitRectReserve = 0i64;
  this->pModel = 0i64;
  this->pMotionChangeModel = 0i64;
  this->pMotionChangeModelReserve = 0i64;
  this->pTarget = 0i64;
  this->pParent = 0i64;
  *(_WORD *)&this->bDrawReq = 0;
  *(_QWORD *)&this->iCAngleReserve = -1i64;
  this->pAct = pActData;
  this->pHitRect = pHit;
  this->pAtkData = pAtk;
  this->systemStat = MAIN;
  *(_QWORD *)&this->vPos.x = 0i64;
  this->vPos.z = 0.0;
  *(_QWORD *)&this->vMov.x = 0i64;
  this->vMov.z = 0.0;
  *(_QWORD *)&this->vAdd.x = 0i64;
  this->vAdd.z = 0.0;
  *(_QWORD *)&this->vOff.x = 0i64;
  this->vOff.z = 0.0;
  *(_QWORD *)&this->vBuf.x = 0i64;
  *(_QWORD *)&this->vBuf.z = 0i64;
  this->vScale.x = 1.0;
  this->vScale.y = 1.0;
  this->vScale.z = 1.0;
  *(_QWORD *)&this->vAngle.x = 0i64;
  this->vAngle.z = 0.0;
  *(_QWORD *)&this->vBasePos.y = 0i64;
  *(_QWORD *)&this->vBasePosPrev.x = 0i64;
  this->vBasePosPrev.z = 0.0;
  *(_QWORD *)&this->iDrawPri = 0i64;
  *(_QWORD *)&this->iPlayerID = 0i64;
  *(_QWORD *)&this->iCAngle = 0i64;
  this->iCAnglePrev = 0;
  *(_QWORD *)&this->iActReserveNo = -1i64;
  *(_QWORD *)&this->iActorStatReserve = -1i64;
  *(_QWORD *)&this->fActionPlayRate = 1065353216i64;
  this->bIgnoreSystemPlayRate = 0;
  *(_QWORD *)&this->positionReserve.iSettingX = 0i64;
  this->positionReserve.iSettingZ = 0;
  *(_WORD *)&this->bActionEnd = 0;
  this->iActionLoopCount = 0;
  *(_WORD *)&this->bActionFreeze = 0;
  this->iActionCounter = 0;
  this->exclusiveParam.iType = -1;
  *(_QWORD *)&this->iSpeedOption = 0i64;
  *(_QWORD *)&this->iShotDataCount = 0i64;
  *(_QWORD *)&this->iWeaponDataCount = 0i64;
  *(_DWORD *)&this->bIgnoreMotionBlend = 0;
  *(_QWORD *)&this->xHitStopFrame.value = 0i64;
  *(_QWORD *)&this->xHitStopDelay.value = 0i64;
  v6 = this->__vftable;
  this->bHitStopFreeze = 0;
  ((void (*)(void))v6->ResetAttackHitGroup)();
  this->ResetActionBranchKey(this, 0);
  this->ResetDamageReaction(this);
  v7 = this->__vftable;
  this->bInvalidHitCheck = 0;
  v7->ResetInvalidAttackID(this);
  this->bUseZOffset = 0;
  this->fFaceAnimeUpBlendBuf = 0.0;
  this->fFaceAnimeLowBlendBuf = 0.0;
}

void __fastcall Actor::PrevDataSet(Actor *this)
{
  float z; // eax
  __int64 v2; // xmm0_8
  float v3; // eax
  __int64 v4; // xmm0_8
  float v5; // eax
  __int64 v6; // xmm0_8
  float v7; // eax
  __int64 v8; // xmm0_8
  float v9; // eax
  __int64 v10; // xmm0_8
  float v11; // eax
  __int64 v12; // xmm0_8
  float v13; // eax
  __int128 v14; // xmm0
  float v15; // eax
  CharaActionData::FaceAnime faceAnimeUp; // xmm0
  float fTransparent; // eax
  CharaActionData::FaceAnime faceAnimeLow; // xmm0
  Actor *pTarget; // rax
  float x; // xmm0_4
  float v21; // xmm1_4
  OGLModel *pModel; // rax

  z = this->vPos.z;
  *(_QWORD *)&this->vPosPrev.x = *(_QWORD *)&this->vPos.x;
  *(_QWORD *)&this->vMovPrev.x = *(_QWORD *)&this->vMov.x;
  *(_QWORD *)&this->vAddPrev.x = *(_QWORD *)&this->vAdd.x;
  v2 = *(_QWORD *)&this->vOff.x;
  this->vPosPrev.z = z;
  v3 = this->vMov.z;
  *(_QWORD *)&this->vOffPrev.x = v2;
  v4 = *(_QWORD *)&this->vBaseOff.x;
  this->vMovPrev.z = v3;
  v5 = this->vAdd.z;
  *(_QWORD *)&this->vBaseOffPrev.x = v4;
  v6 = *(_QWORD *)&this->vColOff.x;
  this->vAddPrev.z = v5;
  v7 = this->vOff.z;
  *(_QWORD *)&this->vColOffPrev.x = v6;
  v8 = *(_QWORD *)&this->vScale.x;
  this->vOffPrev.z = v7;
  v9 = this->vBaseOff.z;
  *(_QWORD *)&this->vScalePrev.x = v8;
  v10 = *(_QWORD *)&this->vAngle.x;
  this->vBaseOffPrev.z = v9;
  v11 = this->vColOff.z;
  *(_QWORD *)&this->vAnglePrev.x = v10;
  v12 = *(_QWORD *)&this->vBasePos.x;
  this->vColOffPrev.z = v11;
  v13 = this->vScale.z;
  *(_QWORD *)&this->vBasePosPrev.x = v12;
  v14 = *(_OWORD *)&this->baseAnime.iMotionFileID;
  this->vScalePrev.z = v13;
  v15 = this->vAngle.z;
  *(_OWORD *)&this->baseAnimePrev.iMotionFileID = v14;
  this->vAnglePrev.z = v15;
  faceAnimeUp = this->faceAnimeUp;
  this->vBasePosPrev.z = this->vBasePos.z;
  fTransparent = this->baseAnime.fTransparent;
  this->faceAnimeUpPrev = faceAnimeUp;
  this->baseAnimePrev.fTransparent = fTransparent;
  faceAnimeLow = this->faceAnimeLow;
  pTarget = this->pTarget;
  this->bActionFreeze = 0;
  this->bInvalidHitCheck = 0;
  this->faceAnimeLowPrev = faceAnimeLow;
  if ( pTarget )
  {
    x = this->vPos.x;
    v21 = pTarget->vPos.x;
    if ( v21 <= x )
    {
      if ( x > v21 )
        this->iCAngleBuf = 1;
    }
    else
    {
      this->iCAngleBuf = 0;
    }
  }
  pModel = this->pModel;
  this->bSkipSyncPosture = 0;
  if ( pModel )
  {
    *(_OWORD *)pModel->m_mPreWorld.m = *(_OWORD *)pModel->m_mWorld.m;
    *(_OWORD *)&pModel->m_mPreWorld.m[4] = *(_OWORD *)&pModel->m_mWorld.m[4];
    *(_OWORD *)&pModel->m_mPreWorld.m[8] = *(_OWORD *)&pModel->m_mWorld.m[8];
    *(_OWORD *)&pModel->m_mPreWorld.m[12] = *(_OWORD *)&pModel->m_mWorld.m[12];
  }
  this->bDrawReq = 0;
}

void __fastcall Actor::RequestPositionAtkOffset(
        Actor *this,
        Actor *target,
        const CharaAttackData::HitOffsetData *hitOffset)
{
  float x; // xmm0_4
  Actor *pParent; // rax
  float v8; // xmm0_4
  float v9; // xmm0_4

  switch ( hitOffset->iSettingX )
  {
    case 0:
      this->positionReserve.iSettingX = 0;
      break;
    case 1:
      this->positionReserve.iSettingX = 6;
      x = hitOffset->x;
      if ( target->iCAngle )
        LODWORD(x) ^= _xmm;
      this->positionReserve.x = x + target->vPos.x;
      if ( target->GetActorType(target) == CHARA )
        ((void (__fastcall *)(Actor *))target->__vftable[1].SetOptionAsset)(target);
      break;
    case 2:
      this->positionReserve.iSettingX = 6;
      this->positionReserve.x = target->vPos.x + hitOffset->x;
      break;
    case 3:
      if ( target->pParent )
      {
        this->positionReserve.iSettingX = 6;
        pParent = target->pParent;
        v8 = hitOffset->x;
        if ( pParent->iCAngle )
          LODWORD(v8) ^= _xmm;
        v9 = v8 + pParent->vPos.x;
        goto LABEL_12;
      }
      break;
    case 4:
      if ( target->pParent )
      {
        this->positionReserve.iSettingX = 6;
        v9 = target->pParent->vPos.x + hitOffset->x;
LABEL_12:
        this->positionReserve.x = v9;
        if ( target->pParent->GetActorType(target->pParent) == CHARA )
          ((void (__fastcall *)(Actor *))target->pParent->__vftable[1].SetOptionAsset)(target->pParent);
      }
      break;
    case 5:
      this->positionReserve.iSettingX = 5;
      goto LABEL_18;
    case 6:
      this->positionReserve.iSettingX = 6;
LABEL_18:
      this->positionReserve.x = hitOffset->x;
      break;
    default:
      break;
  }
  switch ( hitOffset->iSettingY )
  {
    case 0:
      this->positionReserve.iSettingY = 0;
      break;
    case 1:
    case 2:
      this->positionReserve.iSettingY = 6;
      this->positionReserve.y = target->vPos.y + hitOffset->y;
      break;
    case 3:
    case 4:
      if ( target->pParent )
      {
        this->positionReserve.iSettingY = 6;
        this->positionReserve.y = target->pParent->vPos.y + hitOffset->y;
      }
      break;
    case 5:
      this->positionReserve.iSettingY = 5;
      goto LABEL_26;
    case 6:
      this->positionReserve.iSettingY = 6;
LABEL_26:
      this->positionReserve.y = hitOffset->y;
      break;
    default:
      return;
  }
}

void __fastcall Actor::RequestPositionTargetOffset(Actor *this, float x, float y)
{
  this->positionReserve.x = x;
  this->positionReserve.y = y;
  this->positionReserve.iSettingX = 1;
  this->positionReserve.iSettingY = 1;
}

void __fastcall Actor::RequestPositionX(Actor *this, float x)
{
  this->positionReserve.x = x;
  this->positionReserve.iSettingX = 6;
}

void __fastcall Actor::RequestPositionY(Actor *this, float y)
{
  this->positionReserve.y = y;
  this->positionReserve.iSettingY = 6;
}

void __fastcall Actor::ResetActionBranchKey(Actor *this, int branchKey)
{
  if ( branchKey <= 4 )
  {
    if ( branchKey > 0 )
      this->uiActionBranchKey &= ~(1 << branchKey);
    else
      this->uiActionBranchKey = 0;
  }
}

void __fastcall Actor::ResetAttackHitGroup(Actor *this)
{
  unsigned __int64 *v1; // rax
  __int64 i; // rdx

  v1 = &this->attackHitGroupBit._Array[1];
  for ( i = 1i64; i >= 0; --i )
    *v1-- = 0i64;
}

void __fastcall Actor::ResetDamageReaction(Actor *this)
{
  this->pDamageReaction = 0i64;
}

void __fastcall Actor::ResetHitStop(Actor *this)
{
  *(_QWORD *)&this->xHitStopFrame.value = 0i64;
  *(_QWORD *)&this->xHitStopDelay.value = 0i64;
}

void __fastcall Actor::ResetSpeed(Actor *this)
{
  *(_QWORD *)&this->vMov.x = 0i64;
  this->vMov.z = 0.0;
  *(_QWORD *)&this->vAdd.x = 0i64;
  this->vAdd.z = 0.0;
}

void __fastcall Actor::SetActionBranchKey(Actor *this, int branchKey)
{
  __int64 v3; // rdx
  Actor *pParent; // rcx

  if ( branchKey > 0 )
  {
    if ( branchKey <= 4 )
    {
      this->uiActionBranchKey |= 1 << branchKey;
    }
    else
    {
      v3 = (unsigned int)(branchKey - 4);
      if ( (int)v3 <= 4 )
      {
        pParent = this->pParent;
        if ( pParent )
          ((void (__fastcall *)(Actor *, __int64, Actor *))pParent->SetActionBranchKey)(pParent, v3, this);
      }
    }
  }
}

void __fastcall Actor::SetAttackGroupID(Actor *this, int groupID)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned int)groupID <= 0x7F )
  {
    v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->attackHitGroupBit, &result, groupID);
    Mypos = v2->_Mypos;
    if ( Mypos >= 0x80 )
      std::_Xout_of_range("invalid bitset<N> position");
    v2->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (Mypos & 0x3F);
  }
}

void __fastcall Actor::SetBackActionDataReq(Actor *this)
{
  const CharaActionData *pActBuf; // rax

  pActBuf = this->pActBuf;
  if ( pActBuf )
  {
    this->pActReserve = pActBuf;
    this->pHitRectReserve = this->pHitRectBuf;
    this->pActBuf = 0i64;
    this->pHitRectBuf = 0i64;
    this->pMotionChangeModelReserve = 0i64;
  }
}

void __fastcall Actor::SetDamageReaction(Actor *this, const CharaDamageSetting::Setting *pDmg)
{
  this->pDamageReaction = pDmg;
}

void __fastcall Actor::SetEffectControlData(Actor *this, const CharaActionData::Effect::Type::Control *ctrlData)
{
  ActionSystem *pActSys; // rcx
  unsigned __int128 v3; // [rsp+20h] [rbp-58h]
  std::function<void __cdecl(Actor &)> v4; // [rsp+30h] [rbp-48h] BYREF

  v3 = __PAIR128__((unsigned __int64)this, (unsigned __int64)ctrlData);
  pActSys = this->pActSys;
  v4._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<_lambda_59faa6a9715075ecdf1910603af67294_,std::allocator<int>,void,Actor &>::`vftable';
  *(_OWORD *)&v4._Mystorage._Ptrs[1] = v3;
  v4._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v4;
  ActionSystem::FuncCallRequest(pActSys, 7, &v4);
}

void __fastcall Actor::SetHitStop(Actor *this, int hitStop, bool bDelay)
{
  int v3; // edx

  if ( SHIWORD(this->xHitStopFrame.value) < hitStop )
  {
    v3 = hitStop << 16;
    this->xHitStopFrame.value = v3;
    this->xHitStopTotal.value = v3;
  }
  if ( bDelay && this->xHitStopFrame.value > 0 )
  {
    this->xHitStopDelay.value = 0x10000;
    this->xMoveWaitFrame.value = 0x10000;
  }
}

void __fastcall Actor::SetModelMirrorLightFlag(Actor *this, bool flag)
{
  OGLModel *pModel; // r8
  int v5; // er9
  __int64 v6; // rcx
  OGLLightManager *m_pLightManager; // rdx

  pModel = this->pModel;
  if ( pModel )
  {
    if ( pModel->m_pMaterial )
    {
      v5 = 0;
      if ( pModel->m_ucMaterialCount )
      {
        v6 = 0i64;
        do
        {
          m_pLightManager = pModel->m_pMaterial[v6].m_pLightManager;
          if ( m_pLightManager )
            m_pLightManager->m_mirrorLight = flag;
          pModel = this->pModel;
          ++v5;
          ++v6;
        }
        while ( v5 < pModel->m_ucMaterialCount );
      }
    }
  }
}

void __fastcall Actor::SetModelMoveLightFlag(Actor *this, bool flag)
{
  OGLModel *pModel; // r8
  int v5; // er9
  __int64 v6; // rcx
  OGLLightManager *m_pLightManager; // rdx

  pModel = this->pModel;
  if ( pModel )
  {
    if ( pModel->m_pMaterial )
    {
      v5 = 0;
      if ( pModel->m_ucMaterialCount )
      {
        v6 = 0i64;
        do
        {
          m_pLightManager = pModel->m_pMaterial[v6].m_pLightManager;
          if ( m_pLightManager )
            m_pLightManager->m_moveLight = flag;
          pModel = this->pModel;
          ++v5;
          ++v6;
        }
        while ( v5 < pModel->m_ucMaterialCount );
      }
    }
  }
}

void __fastcall Actor::SetPositionData(Actor *this, const CharaActionData::Position *position)
{
  float x; // xmm3_4
  float y; // xmm4_4
  float z; // xmm7_4
  Actor *pTarget; // rax
  bool v8; // zf
  float v9; // xmm0_4
  Actor *v10; // rax
  Actor *pParent; // rax
  float v12; // xmm0_4
  Actor *v13; // rax
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  Actor *v20; // rax
  Actor *v21; // rax
  float v22; // xmm0_4
  Actor_vtbl *v23; // rax
  float v24; // xmm1_4
  Actor *v25; // rax
  bool v26; // zf
  Actor *v27; // rax
  float v28; // xmm0_4
  Actor *v29; // rax
  float v30; // xmm0_4
  Actor *v31; // rax
  float v32; // xmm0_4

  x = this->vPos.x;
  y = this->vPos.y;
  z = this->vPos.z;
  switch ( position->iSettingX )
  {
    case 1:
      pTarget = this->pTarget;
      if ( pTarget )
      {
        v8 = pTarget->iCAngle == 0;
        goto LABEL_4;
      }
      goto LABEL_40;
    case 2:
      v10 = this->pTarget;
      if ( v10 )
        this->vPos.x = v10->vPosPrev.x + position->x;
      goto LABEL_40;
    case 3:
      pParent = this->pParent;
      v12 = position->x;
      if ( !pParent )
      {
        if ( this->iCAngle )
          LODWORD(v12) ^= _xmm;
        goto LABEL_15;
      }
      if ( pParent->iCAngle )
        LODWORD(v12) ^= _xmm;
      this->vPos.x = v12 + pParent->vPos.x;
      goto LABEL_40;
    case 4:
      v13 = this->pParent;
      if ( v13 )
      {
        this->vPos.x = v13->vPos.x + position->x;
      }
      else
      {
        v12 = position->x;
LABEL_15:
        this->vPos.x = v12 + this->vPos.x;
      }
      goto LABEL_40;
    case 5:
      this->vPos.x = this->pActSys->cameraCtrl.vBasePos.x + position->x;
      goto LABEL_40;
    case 6:
      this->vPos.x = position->x;
      goto LABEL_40;
    case 7:
      if ( this->iCAngle )
      {
        v14 = position->x;
        if ( v14 >= 0.0 )
        {
LABEL_27:
          v16 = position->x;
          if ( v16 != 0.0 )
          {
            v17 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v16) & _xmm) - 80.0;
            if ( v17 > this->vPos.x )
              goto LABEL_39;
          }
          goto LABEL_40;
        }
      }
      else
      {
        v14 = position->x;
        if ( v14 <= 0.0 )
          goto LABEL_27;
      }
      v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v14) & _xmm);
      if ( this->vPos.x > (float)(80.0 - v15) )
        this->vPos.x = 80.0 - v15;
      goto LABEL_40;
    case 8:
      pTarget = this->pTarget;
      if ( pTarget )
      {
        v8 = this->iCAngle == 0;
LABEL_4:
        v9 = position->x;
        if ( !v8 )
          LODWORD(v9) ^= _xmm;
        this->vPos.x = v9 + pTarget->vPosPrev.x;
      }
      goto LABEL_40;
    case 9:
      if ( this->iCAngle )
      {
        v18 = position->x;
        if ( v18 >= 0.0 )
          goto LABEL_37;
LABEL_36:
        this->vPos.x = 80.0 - (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v18) & _xmm);
        goto LABEL_40;
      }
      v18 = position->x;
      if ( v18 > 0.0 )
        goto LABEL_36;
LABEL_37:
      v19 = position->x;
      if ( v19 != 0.0 )
      {
        v17 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v19) & _xmm) - 80.0;
LABEL_39:
        this->vPos.x = v17;
      }
LABEL_40:
      switch ( position->iSettingY )
      {
        case 1:
        case 2:
        case 8:
          v20 = this->pTarget;
          if ( v20 )
            this->vPos.y = v20->vPosPrev.y + position->y;
          break;
        case 3:
        case 4:
          v21 = this->pParent;
          if ( v21 )
            v22 = v21->vPos.y + position->y;
          else
            v22 = position->y + this->vPos.y;
          this->vPos.y = v22;
          break;
        case 5:
        case 6:
        case 7:
        case 9:
          this->vPos.y = position->y;
          break;
        default:
          break;
      }
      v23 = this->__vftable;
      v24 = (float)(this->vPos.y - y) + this->vBasePos.y;
      this->vBasePos.x = (float)(this->vPos.x - x) + this->vBasePos.x;
      this->vBasePos.y = v24;
      if ( v23->GetActorType(this) && this->GetActorType(this) != SHOT )
      {
        switch ( position->iSettingZ )
        {
          case 1:
            v25 = this->pTarget;
            if ( v25 )
            {
              v26 = v25->iCAngle == 0;
              goto LABEL_69;
            }
            goto LABEL_73;
          case 2:
            v27 = this->pTarget;
            if ( v27 )
            {
              v28 = v27->vPosPrev.z + position->z;
              goto LABEL_72;
            }
            goto LABEL_73;
          case 3:
            v29 = this->pParent;
            v30 = position->z;
            if ( v29 )
            {
              if ( v29->iCAngle )
                LODWORD(v30) ^= _xmm;
              v28 = v30 + v29->vPos.z;
            }
            else
            {
              if ( this->iCAngle )
                LODWORD(v30) ^= _xmm;
              v28 = v30 + this->vPos.z;
            }
            goto LABEL_72;
          case 4:
            v31 = this->pParent;
            if ( v31 )
              v28 = v31->vPos.z + position->z;
            else
              v28 = position->z + this->vPos.z;
            goto LABEL_72;
          case 5:
            v28 = this->pActSys->cameraCtrl.vBasePos.z + position->z;
            goto LABEL_72;
          case 6:
          case 7:
          case 9:
            this->vPos.z = position->z;
            goto LABEL_73;
          case 8:
            v25 = this->pTarget;
            if ( !v25 )
              goto LABEL_73;
            v26 = this->iCAngle == 0;
LABEL_69:
            v32 = position->z;
            if ( !v26 )
              LODWORD(v32) ^= _xmm;
            v28 = v32 + v25->vPosPrev.z;
LABEL_72:
            this->vPos.z = v28;
LABEL_73:
            this->vBasePos.z = (float)(this->vPos.z - z) + this->vBasePos.z;
            break;
          default:
            goto LABEL_73;
        }
      }
      return;
    default:
      goto LABEL_40;
  }
}

void __fastcall Actor::SetSpeed(
        Actor *this,
        const float movX,
        const float movY,
        const float addX,
        const float addY,
        int angle,
        int option)
{
  ((void (__fastcall *)(Actor *, OGLVec3 *, __int64))this->SetSpeedDataSub)(this, &this->vMov, 257i64);
  ((void (__fastcall *)(Actor *, float *, __int64))this->SetSpeedDataSub)(this, &this->vMov.y, 1i64);
  ((void (__fastcall *)(Actor *, OGLVec3 *, __int64))this->SetSpeedDataSub)(this, &this->vAdd, 257i64);
  ((void (__fastcall *)(Actor *, float *, __int64))this->SetSpeedDataSub)(this, &this->vAdd.y, 1i64);
  this->iSpeedOption = option;
}

void __fastcall Actor::SetSpeedData(Actor *this, const CharaActionData::Speed *speed, int angle)
{
  __int64 iSetFlag_low; // r8
  __int64 iSetFlag_high; // r8

  iSetFlag_low = LOBYTE(speed->iSetFlag);
  LODWORD(iSetFlag_low) = iSetFlag_low | 0x100;
  ((void (__fastcall *)(Actor *, OGLVec3 *, __int64))this->SetSpeedDataSub)(this, &this->vMov, iSetFlag_low);
  ((void (__fastcall *)(Actor *, float *, _QWORD))this->SetSpeedDataSub)(
    this,
    &this->vMov.y,
    (unsigned __int8)BYTE1(speed->iSetFlag));
  ((void (__fastcall *)(Actor *, OGLVec3 *, _QWORD))this->SetSpeedDataSub)(
    this,
    &this->vAdd,
    (unsigned __int8)HIWORD(speed->iSetFlag) | 0x300u);
  iSetFlag_high = HIBYTE(speed->iSetFlag);
  LODWORD(iSetFlag_high) = iSetFlag_high | 0x200;
  ((void (__fastcall *)(Actor *, float *, __int64))this->SetSpeedDataSub)(this, &this->vAdd.y, iSetFlag_high);
  this->iSpeedOption = speed->iOptionFlag;
}

void __fastcall Actor::SetSpeedDataSub(Actor *this, float *move, const int flag, const float param, const int angle)
{
  Actor *pTarget; // rax
  float v6; // xmm0_4

  switch ( (unsigned __int8)flag )
  {
    case 1u:
      if ( (flag & 0x100) != 0 && angle )
        LODWORD(param) ^= _xmm;
      goto LABEL_21;
    case 2u:
      if ( (flag & 0x100) != 0 && angle )
        LODWORD(param) ^= _xmm;
      goto LABEL_17;
    case 3u:
LABEL_21:
      *move = param;
      return;
    case 4u:
LABEL_17:
      *move = param + *move;
      return;
  }
  if ( (unsigned __int8)flag == 5 && (flag & 0x200) == 0 )
  {
    pTarget = this->pTarget;
    if ( pTarget )
    {
      if ( param == 0.0 )
      {
        *move = 0.0;
      }
      else
      {
        if ( (flag & 0x100) != 0 )
          v6 = (float)(pTarget->vPosPrev.x - this->vPos.x) / param;
        else
          v6 = (float)(pTarget->vPosPrev.y - this->vPos.y) / param;
        *move = v6;
      }
    }
  }
}

void __fastcall Actor::SetTurn(Actor *this, __int64 turn)
{
  this->iCAnglePrev = this->iCAngle;
  this->iCAngle = this->GetTurnAngle(this, turn);
}

void __fastcall Actor::StateChangeReq(Actor *this, const int state)
{
  this->iActorStatReserve = state;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Actor::WaitUpdatePosutre(Actor *this)
{
  Actor_vtbl *v2; // rax

  if ( this->bUpdatePostureAsync )
  {
    OGLModel::syncPosture(this->pModel);
    v2 = this->__vftable;
    this->bUpdatePostureAsync = 0;
    v2->SyncPosture(this);
    this->bSkipSyncPosture = 1;
  }
}

std::_Func_base<void,Actor &> *__fastcall std::_Func_impl<_lambda_59faa6a9715075ecdf1910603af67294_,std::allocator<int>,void,Actor &>::_Move(
        std::_Func_impl<<lambda_59faa6a9715075ecdf1910603af67294>,std::allocator<int>,void,Actor &> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<_lambda_59faa6a9715075ecdf1910603af67294_,std::allocator<int>,void,Actor &>::`vftable';
    *(std::_Compressed_pair<std::allocator<int>,<lambda_59faa6a9715075ecdf1910603af67294>,1> *)((char *)_Where + 8) = this->_Mypair;
  }
  return (std::_Func_base<void,Actor &> *)_Where;
}

void __fastcall std::_Func_impl<_lambda_536343e0c1c203f5657bb579fcc2982e_,std::allocator<int>,void,Actor &>::_Delete_this(
        std::_Func_impl<<lambda_ad3ff183b2c7791a4bd3e61110463e86>,std::allocator<int>,void,Actor &> *this,
        bool _Deallocate)
{
  this->__vftable = (std::_Func_impl<<lambda_ad3ff183b2c7791a4bd3e61110463e86>,std::allocator<int>,void,Actor &>_vtbl *)&std::_Func_base<void,Actor &>::`vftable';
  if ( _Deallocate )
    operator delete(this);
}

void __fastcall std::_Func_impl<_lambda_59faa6a9715075ecdf1910603af67294_,std::allocator<int>,void,Actor &>::_Do_call(
        std::_Func_impl<<lambda_59faa6a9715075ecdf1910603af67294>,std::allocator<int>,void,Actor &> *this,
        Actor *<_Args_0>)
{
  lambda_59faa6a9715075ecdf1910603af67294_::operator()((Actor *)&this->_Mypair, (__int64)<_Args_0>);
}

std::_Align_type<double,64> *__fastcall __Get____Func_impl_U_unnamed_type_nothing___1__InstallGFxInterface_extension__YAXXZ_V__allocator_H_std__VValue_GFx_Scaleform__AEAVGFXIMovieContext_3_PEBV678_I_std__EEBAPEBXXZ(
        _Mtx_internal_imp_t *mtx)
{
  return &mtx->cs;
}

float __fastcall Actor::_MovePos(Actor *this, const float vec, const float acc, const float frame)
{
  return (float)((float)((float)((float)(frame - 1.0) * 0.5) * acc) + vec) * frame;
}

const type_info *__fastcall std::_Func_impl<_lambda_59faa6a9715075ecdf1910603af67294_,std::allocator<int>,void,Actor &>::_Target_type(
        std::_Func_impl<<lambda_59faa6a9715075ecdf1910603af67294>,std::allocator<int>,void,Actor &> *this)
{
  return (const type_info *)&_lambda_59faa6a9715075ecdf1910603af67294_ `RTTI Type Descriptor';
}

$FDE819AA8FD4FE0CD927010514BE7533 *__fastcall Actor::_branchConfirm(Actor *this)
{
  BattleSystem::BattleController *v2; // rax
  int v3; // edi
  const CharaActionData::ActionLineFrame *v4; // rax
  const CharaActionData::ActionLineFrame *v5; // rsi
  BattleSystem::BattleController *v7; // [rsp+50h] [rbp+8h]

  if ( this->iBranchRandomMax > 0 )
  {
    v2 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v7 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v7);
      BattleSystem::BattleController::instance = v2;
    }
    this->iBranchRandomValue = (int)((unsigned int)RandomMT::getRand32(&v2->randMT) >> 1) % this->iBranchRandomMax;
  }
  v3 = 0;
  if ( this->iBranchCount <= 0 )
    return 0i64;
  while ( 1 )
  {
    v4 = this->GetKeyFrame(this, (unsigned int)this->iActNo, 7i64, (unsigned int)this->iActFrame, v3);
    v5 = v4;
    if ( v4 )
    {
      if ( Actor::_isBranchEnable(this, v4->iBase[0], v4->branch.fParam)
        && Actor::_isBranchEnable(this, v5->iBase[4], v5->hit.fPushRate) )
      {
        break;
      }
    }
    if ( ++v3 >= this->iBranchCount )
      return 0i64;
  }
  return &v5->4;
}

void __fastcall Actor::_branchFlagCtrl(Actor *this, __int64 branchKeyID, int setFlag)
{
  unsigned int v3; // edi
  Actor *v4; // rbx
  char v5; // al
  bool v6; // zf
  Actor_vtbl *v7; // rax
  Actor *pParent; // rcx
  char v9; // al

  v3 = branchKeyID;
  v4 = this;
  switch ( setFlag )
  {
    case 1:
      ((void (__fastcall *)(Actor *))this->SetActionBranchKey)(this);
      return;
    case 2:
      goto LABEL_8;
    case 3:
      v5 = ((__int64 (__fastcall *)(Actor *))this->IsActionBranchKey)(this);
      branchKeyID = v3;
      this = v4;
      v6 = v5 == 0;
      v7 = v4->__vftable;
      if ( v6 )
        goto LABEL_12;
      v7->ResetActionBranchKey(v4, v3);
      break;
    case 4:
      this = this->pParent;
      if ( this )
        goto LABEL_11;
      return;
    case 5:
      this = this->pParent;
      if ( this )
        goto LABEL_8;
      return;
    case 6:
      pParent = this->pParent;
      if ( !pParent )
        return;
      v9 = ((__int64 (__fastcall *)(Actor *))pParent->IsActionBranchKey)(pParent);
      this = v4->pParent;
      branchKeyID = v3;
      if ( v9 )
      {
LABEL_8:
        ((void (__fastcall *)(Actor *))this->ResetActionBranchKey)(this);
      }
      else
      {
LABEL_11:
        v7 = this->__vftable;
LABEL_12:
        v7->SetActionBranchKey(this, branchKeyID);
      }
      break;
    default:
      return;
  }
}

bool __fastcall Actor::_branchIsActionCountOver(Actor *this, float param)
{
  return (int)param <= this->iActionCounter;
}

bool __fastcall Actor::_branchIsActionCountUnder(Actor *this, float param)
{
  return (int)param >= this->iActionCounter;
}

bool __fastcall Actor::_branchIsActionLoopCount(Actor *this, float param)
{
  return this->iActionLoopCount >= (int)param;
}

char __fastcall Actor::_branchIsAir(Actor *this, float param)
{
  if ( param <= 0.0 )
  {
    if ( this->vPos.y <= 0.0 )
      return 0;
  }
  else if ( param > this->vPos.y )
  {
    return 0;
  }
  return 1;
}

_BOOL8 __fastcall Actor::_branchIsDistance(Actor *this, float param)
{
  Actor_vtbl *v2; // rax

  v2 = this->__vftable;
  if ( param >= 0.0 )
    return param >= ((float (*)(void))v2->GetRivalDistance)();
  else
    return ((float (*)(void))v2->GetRivalDistance)() >= COERCE_FLOAT(LODWORD(param) ^ _xmm);
}

__int64 __fastcall Actor::_branchIsFlag1(Actor *this, float param)
{
  return ((__int64 (__fastcall *)(Actor *, __int64))this->IsActionBranchKey)(this, 1i64);
}

__int64 __fastcall Actor::_branchIsFlag2(Actor *this, float param)
{
  return ((__int64 (__fastcall *)(Actor *, __int64))this->IsActionBranchKey)(this, 2i64);
}

__int64 __fastcall Actor::_branchIsFlag3(Actor *this, float param)
{
  return ((__int64 (__fastcall *)(Actor *, __int64))this->IsActionBranchKey)(this, 3i64);
}

__int64 __fastcall Actor::_branchIsFlag4(Actor *this, float param)
{
  return ((__int64 (__fastcall *)(Actor *, __int64))this->IsActionBranchKey)(this, 4i64);
}

char __fastcall Actor::_branchIsLand(Actor *this, float param)
{
  float y; // xmm0_4

  y = this->vPos.y;
  if ( param <= 0.0 )
  {
    if ( y > 0.0 )
      return 0;
  }
  else if ( y > param )
  {
    return 0;
  }
  return 1;
}

bool __fastcall Actor::_branchIsParentFlag1(Actor *this, float param)
{
  Actor *pParent; // rcx

  pParent = this->pParent;
  return pParent && pParent->IsActionBranchKey(pParent, 1);
}

bool __fastcall Actor::_branchIsParentFlag2(Actor *this, float param)
{
  Actor *pParent; // rcx

  pParent = this->pParent;
  return pParent && pParent->IsActionBranchKey(pParent, 2);
}

bool __fastcall Actor::_branchIsParentFlag3(Actor *this, float param)
{
  Actor *pParent; // rcx

  pParent = this->pParent;
  return pParent && pParent->IsActionBranchKey(pParent, 3);
}

bool __fastcall Actor::_branchIsParentFlag4(Actor *this, float param)
{
  Actor *pParent; // rcx

  pParent = this->pParent;
  return pParent && pParent->IsActionBranchKey(pParent, 4);
}

bool __fastcall Actor::_branchIsRandom(Actor *this, float param)
{
  int iBranchRandomValue; // edx
  bool result; // al

  iBranchRandomValue = this->iBranchRandomValue;
  result = 0;
  if ( iBranchRandomValue < (int)param )
    result = iBranchRandomValue >= 0;
  this->iBranchRandomValue = iBranchRandomValue - (int)param;
  return result;
}

__int64 __fastcall Actor::_branchIsScreenWall(Actor *this, float param)
{
  __int64 (**v2)(void); // rax

  v2 = (__int64 (**)(void))this->__vftable;
  if ( param > 0.0 )
  {
    if ( !this->iCAngle )
      return v2[178]();
    return v2[177]();
  }
  if ( param < 0.0 )
  {
    if ( this->iCAngle )
      return v2[178]();
    return v2[177]();
  }
  return v2[176]();
}

__int64 __fastcall Actor::_branchIsStageWall(Actor *this, float param)
{
  __int64 (**v2)(void); // rax

  v2 = (__int64 (**)(void))this->__vftable;
  if ( param > 0.0 )
  {
    if ( !this->iCAngle )
      return v2[172]();
    return v2[171]();
  }
  if ( param < 0.0 )
  {
    if ( this->iCAngle )
      return v2[172]();
    return v2[171]();
  }
  return v2[170]();
}

char __fastcall Actor::_branchIsTargetAir(Actor *this, float param)
{
  Actor *pTarget; // rax

  pTarget = this->pTarget;
  if ( !pTarget )
    return 0;
  if ( param <= 0.0 )
  {
    if ( pTarget->vPos.y <= 0.0 )
      return 0;
  }
  else if ( param > pTarget->vPos.y )
  {
    return 0;
  }
  return 1;
}

bool __fastcall Actor::_branchIsTargetFlag1(Actor *this, float param)
{
  Actor *pTarget; // rcx

  pTarget = this->pTarget;
  return pTarget && pTarget->IsActionBranchKey(pTarget, 1);
}

bool __fastcall Actor::_branchIsTargetFlag2(Actor *this, float param)
{
  Actor *pTarget; // rcx

  pTarget = this->pTarget;
  return pTarget && pTarget->IsActionBranchKey(pTarget, 2);
}

bool __fastcall Actor::_branchIsTargetFlag3(Actor *this, float param)
{
  Actor *pTarget; // rcx

  pTarget = this->pTarget;
  return pTarget && pTarget->IsActionBranchKey(pTarget, 3);
}

bool __fastcall Actor::_branchIsTargetFlag4(Actor *this, float param)
{
  Actor *pTarget; // rcx

  pTarget = this->pTarget;
  return pTarget && pTarget->IsActionBranchKey(pTarget, 4);
}

char __fastcall Actor::_branchIsTargetKO(Actor *this, float param)
{
  BattleSystem::BattleController *v3; // rax
  Actor *pTarget; // rcx
  BattleSystem::BattleController *v6; // [rsp+50h] [rbp+18h]

  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v6 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v6);
    BattleSystem::BattleController::instance = v3;
  }
  if ( v3->roundPhase > DIE )
    return 1;
  pTarget = this->pTarget;
  if ( !pTarget || pTarget->GetActorType(pTarget) )
    return 0;
  else
    return ((__int64 (__fastcall *)(Actor *))this->pTarget->__vftable[1].IsInvalidAttackID)(this->pTarget);
}

char __fastcall Actor::_branchIsTargetLand(Actor *this, float param)
{
  Actor *pTarget; // rax
  float y; // xmm0_4

  pTarget = this->pTarget;
  if ( !pTarget )
    return 0;
  y = pTarget->vPos.y;
  if ( param <= 0.0 )
  {
    if ( y > 0.0 )
      return 0;
  }
  else if ( y > param )
  {
    return 0;
  }
  return 1;
}

bool __fastcall Actor::_branchIsTargetStageWall(Actor *this, float param)
{
  Actor *pTarget; // rcx
  __int64 (**v4)(void); // rax

  pTarget = this->pTarget;
  if ( !pTarget )
    return 0;
  v4 = (__int64 (**)(void))pTarget->__vftable;
  if ( param > 0.0 )
  {
    if ( !pTarget->iCAngle )
      return v4[172]();
    return v4[171]();
  }
  if ( param < 0.0 )
  {
    if ( pTarget->iCAngle )
      return v4[172]();
    return v4[171]();
  }
  return v4[170]();
}

bool __fastcall Actor::_checkEffectSetTerm(Actor *this, const CharaActionData::Effect::Type::Set *setData)
{
  __int16 iTermFlag; // ax
  int v6; // ebx
  bool v7; // si

  iTermFlag = setData->iTermFlag;
  if ( (iTermFlag & 0xF00) == 0 )
    return 1;
  v6 = 0;
  v7 = (iTermFlag & 0x80) != 0;
  if ( (iTermFlag & 0x100) != 0 )
    v6 = v7 != this->IsActionBranchKey(this, 1) ? 0x100 : 0;
  if ( (setData->iTermFlag & 0x200) != 0 )
    v6 |= v7 != this->IsActionBranchKey(this, 2) ? 0x200 : 0;
  if ( (setData->iTermFlag & 0x400) != 0 )
    v6 |= v7 != this->IsActionBranchKey(this, 3) ? 0x400 : 0;
  if ( (setData->iTermFlag & 0x800) != 0 )
    v6 |= v7 != this->IsActionBranchKey(this, 4) ? 0x800 : 0;
  return (setData->iTermFlag & 0x40) != 0 || v6 != 0;
}

__int64 __fastcall Actor::_isBranchEnable(Actor *this, __int64 type, float param)
{
  __int64 v3; // r8
  __int64 result; // rax

  LOBYTE(v3) = 0;
  switch ( (int)type )
  {
    case 0:
      result = 1i64;
      break;
    case 1:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsAttackHitOrGuard)(this, type, v3);
      break;
    case 2:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsAttackHit)(this, type, v3);
      break;
    case 3:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsAttackGuard)(this, type, v3);
      break;
    case 4:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsAttackNoHit)(this, type, v3);
      break;
    case 5:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsAir)(this, type, v3);
      break;
    case 6:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsLand)(this, type, v3);
      break;
    case 7:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsStageWall)(this, type, v3);
      break;
    case 8:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsFlag1)(this, type, v3);
      break;
    case 9:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsFlag2)(this, type, v3);
      break;
    case 10:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsFlag3)(this, type, v3);
      break;
    case 11:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsFlag4)(this, type, v3);
      break;
    case 12:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsDistance)(this, type, v3);
      break;
    case 13:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsShotAttackHitOrGuard)(this, type, v3);
      break;
    case 14:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsShotAttackHit)(this, type, v3);
      break;
    case 15:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsShotAttackGuard)(this, type, v3);
      break;
    case 16:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsScreenWall)(this, type, v3);
      break;
    case 17:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsActionLoopCount)(this, type, v3);
      break;
    case 18:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsShotFlag1)(this, type, v3);
      break;
    case 19:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsShotFlag2)(this, type, v3);
      break;
    case 20:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsShotFlag3)(this, type, v3);
      break;
    case 21:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsShotFlag4)(this, type, v3);
      break;
    case 22:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsShotAlive)(this, type, v3);
      break;
    case 23:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsShotNotAlive)(this, type, v3);
      break;
    case 24:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsAttackCounter)(this, type, v3);
      break;
    case 25:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsTargetAir)(this, type, v3);
      break;
    case 26:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsTargetLand)(this, type, v3);
      break;
    case 27:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsTargetFlag1)(this, type, v3);
      break;
    case 28:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsTargetFlag2)(this, type, v3);
      break;
    case 29:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsTargetFlag3)(this, type, v3);
      break;
    case 30:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsTargetFlag4)(this, type, v3);
      break;
    case 31:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsRandom)(this, type, v3);
      break;
    case 32:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsActionCountOver)(this, type, v3);
      break;
    case 33:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsActionCountUnder)(this, type, v3);
      break;
    case 34:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsTargetKO)(this, type, v3);
      break;
    case 35:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsTargetStageWall)(this, type, v3);
      break;
    case 36:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsParentFlag1)(this, type, v3);
      break;
    case 37:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsParentFlag2)(this, type, v3);
      break;
    case 38:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsParentFlag3)(this, type, v3);
      break;
    case 39:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsParentFlag4)(this, type, v3);
      break;
    case 40:
      result = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsCommandCountOver)(this, type, v3);
      break;
    case 41:
      LOBYTE(v3) = ((__int64 (__fastcall *)(Actor *, __int64, __int64))this->_branchIsCommandCountUnder)(this, type, v3);
      goto LABEL_44;
    default:
LABEL_44:
      result = (unsigned __int8)v3;
      break;
  }
  return result;
}

