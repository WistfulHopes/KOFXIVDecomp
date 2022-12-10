#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/initializer_list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcamera.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"

void CameraOffsetData::Reset(); // 0x1400D2FF0
CameraControl::CameraControl(); // 0x1400D3140
CameraControl::~CameraControl(); // 0x14002E7C0
void CameraControl::CameraPrevCalc(ActionSystem & actSys); // 0x1400D3270
void CameraControl::CameraLateCalc(ActionSystem & actSys); // 0x1400D33D0
void CameraControl::_calcCamMatrix(); // 0x1400D35B0
void CameraControl::MotionCameraCheck(ActionSystem & actSys); // 0x1400D3B80
bool CameraControl::IsInvisibleEffectActor(const ActorEffect * pActor); // 0x1400D3F30
void CameraControl::CameraInit(float aspect); // 0x1400D4040
void CameraControl::BattleCameraCheck(ActionSystem & actSys); // 0x1400D4170
class CameraControl::BattleCameraCheck::__l2::<lambda_105997cc0fe5ed808cecadbb922ba7ca>
{
public:
	bool operator()(const CAMERA_TYPE);
private:
	static bool <lambda_invoker_cdecl>(const CAMERA_TYPE);
	typedef char16_t(*<lambda_typedef_cdecl>)(const CAMERA_TYPE);
public:
	bool(*)(const CAMERA_TYPE) operator bool (__cdecl *)(const enum CAMERA_TYPE)();
private:
	static bool <lambda_invoker_vectorcall>(const CAMERA_TYPE);
	typedef char16_t(*<lambda_typedef_vectorcall>)(const CAMERA_TYPE);
public:
	bool(*)(const CAMERA_TYPE) operator bool (__vectorcall *)(const enum CAMERA_TYPE)();
	<lambda_105997cc0fe5ed808cecadbb922ba7ca>(CameraControl::BattleCameraCheck::__l2::<lambda_105997cc0fe5ed808cecadbb922ba7ca> &);
	<lambda_105997cc0fe5ed808cecadbb922ba7ca>();
	CameraControl::BattleCameraCheck::__l2::<lambda_105997cc0fe5ed808cecadbb922ba7ca> & operator=(const CameraControl::BattleCameraCheck::__l2::<lambda_105997cc0fe5ed808cecadbb922ba7ca> &);
};
std::piecewise_construct_t std::piecewise_construct; // 0x14089B291
void CameraControl::RequestQuakeCamera(long count, float x, float y, float z); // 0x1400D4730
void CameraControl::RequestQuakeCamera(long count, long priset); // 0x1400D4790
void CameraControl::RequestQuakeCamera(const CharaAttackData::HitQuakeCameraData & quakeData); // 0x1400D4A90
void CameraControl::RequestMotionCameraSync(Actor * pActor, const CharaActionData::Camera & camera); // 0x1400D4B10
void CameraControl::RequestMotionCameraFrame(Actor * pActor, const CharaActionData::Camera & camera); // 0x1400D4BE0
void CameraControl::RequestMoveCamera(Actor * pActor, const CharaActionData::Camera & camera, long moveCalcType); // 0x1400D4D30
void CameraControl::RequestWinnersCamera(Actor * pActor, long count); // 0x1400D4E80
void CameraControl::RequestMoveCameraOut(long count, long moveCalcType); // 0x1400D4F70
void CameraControl::RequestBattleCameraFixY(Actor * pActor, const CharaActionData::Camera & camera); // 0x1400D5010
void CameraControl::RequestCamera(Actor * pActor, const CharaActionData::Camera & camera); // 0x1400D50A0
void CameraControl::RequestKOCamera(Actor * pActor); // 0x1400D5270
void CameraControl::QuakeCameraCalc(ActionSystem & actSys); // 0x1400D5430
void CameraControl::MoveCameraCalc(ActionSystem & actSys); // 0x1400D5640
void CameraControl::MoveCameraOutCalc(ActionSystem & actSys); // 0x1400D5AF0
void CameraControl::NormalFixYCheck(ActionSystem & actSys); // 0x1400D5D50
OGLVec3 CameraControl::GetOffsetTypePos(); // 0x1400D5E00
OGLVec3 CameraControl::EasingQuad(const OGLVec3 & start, const OGLVec3 & end, float t); // 0x1400D60B0
OGLVec3 CameraControl::Easing(const OGLVec3 & start, const OGLVec3 & end, float t, long easingType); // 0x1400D6250
void CameraControl::_addOffset(OGLVec3 & off, const Actor * pActor); // 0x1400D62E0//decompilation failure at 14089B291!
void __fastcall CameraControl::CameraControl(CameraControl *this)
{
  *(_QWORD *)&this->vBaseLook.x = 0i64;
  *(_QWORD *)&this->vBaseLook.z = 0i64;
  *(_QWORD *)&this->vBasePos.y = 0i64;
  *(_QWORD *)&this->vBaseUp.x = 0i64;
  *(_QWORD *)&this->vBaseUp.z = 0i64;
  *(_QWORD *)&this->vBaseLookPrev.y = 0i64;
  *(_QWORD *)&this->vBasePosPrev.x = 0i64;
  *(_QWORD *)&this->vBasePosPrev.z = 0i64;
  *(_QWORD *)&this->vBaseUpPrev.y = 0i64;
  *(_QWORD *)&this->vBaseWallPos.x = 0i64;
  this->vBaseWallPos.z = 0.0;
  this->xLookAdjCount.value = 0;
  *(_QWORD *)&this->offset.vStart.x = 0i64;
  *(_QWORD *)&this->offset.vStart.z = 0i64;
  *(_QWORD *)&this->offset.vStartLook.y = 0i64;
  *(_QWORD *)&this->offset.vStartUp.x = 0i64;
  *(_QWORD *)&this->offset.vStartUp.z = 0i64;
  *(_QWORD *)&this->offset.vEnd.y = 0i64;
  *(_QWORD *)&this->offset.vEndLook.x = 0i64;
  *(_QWORD *)&this->offset.vEndLook.z = 0i64;
  *(_QWORD *)&this->offset.xMax.value = 0i64;
  *(_QWORD *)&this->offset.vOffBase.y = 0i64;
  *(_QWORD *)&this->offset.vOffLookBase.x = 0i64;
  this->offset.vOffLookBase.z = 0.0;
  memset(&this->offset.mView, 0, 0xC0ui64);
  *(_QWORD *)&this->quake.vOff.x = 0i64;
  *(_QWORD *)&this->quake.vOff.z = 0i64;
  *(_QWORD *)&this->quake.vQuakeBase.y = 0i64;
  *(_QWORD *)&this->quake.xCount.value = 0i64;
  *(_QWORD *)&this->vLook.x = 0i64;
  *(_QWORD *)&this->vLook.z = 0i64;
  *(_QWORD *)&this->vPos.y = 0i64;
  *(_QWORD *)&this->vUp.x = 0i64;
  *(_QWORD *)&this->vUp.z = 0i64;
  *(_QWORD *)&this->vLookPrev.y = 0i64;
  *(_QWORD *)&this->vPosPrev.x = 0i64;
  *(_QWORD *)&this->vPosPrev.z = 0i64;
  *(_QWORD *)&this->vUpPrev.y = 0i64;
  memset(&this->mView, 0, 0x180ui64);
  CameraControl::CameraInit(this, 1.7777778);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall CameraControl::BattleCameraCheck(CameraControl *this, ActionSystem *actSys)
{
  ActorChara *v2; // rdi
  ActorChara *v4; // rsi
  float v5; // xmm7_4
  float y; // xmm8_4
  float v7; // xmm10_4
  float x; // xmm6_4
  double v9; // xmm0_8
  float v10; // xmm9_4
  float v11; // xmm4_4
  float v12; // xmm9_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float *v15; // rax
  float v16; // xmm5_4
  __int64 *v17; // rcx
  float v18; // xmm2_4
  float v19; // xmm8_4
  float v20; // xmm10_4
  __int64 *v21; // rcx
  float *v22; // rax
  float v23; // xmm2_4
  float *p_x; // rcx
  float *v25; // rax
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm8_4
  float v31; // xmm11_4
  float v32; // xmm14_4
  float v33; // xmm10_4
  float v34; // xmm8_4
  float v35; // xmm12_4
  float v36; // xmm7_4
  float v37; // xmm3_4
  CAMERA_TYPE type; // ecx
  float v39; // xmm9_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm3_4
  float v43; // xmm7_4
  float v44; // xmm1_4
  float v45; // xmm7_4
  float v46; // xmm1_4
  float v47; // xmm4_4
  float v48; // xmm4_4
  float v49; // xmm1_4
  float v50; // xmm1_4
  float v51; // xmm3_4
  float v52; // [rsp+20h] [rbp-C8h] BYREF
  float v53; // [rsp+24h] [rbp-C4h] BYREF
  float v54; // [rsp+28h] [rbp-C0h]
  float v55; // [rsp+2Ch] [rbp-BCh]
  __int64 v56[2]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = actSys->pPlayer[0];
  v4 = actSys->pPlayer[1];
  v5 = (float)((float)(unsigned __int16)actSys->xPlaySpeed.value * 0.000015258789)
     + (float)(actSys->xPlaySpeed.value >> 16);
  if ( v2 && v4 )
  {
    if ( this->offset.type == (GUARD_POINT|CROUCH_GUARD) )
    {
      y = this->offset.vOffBase.y;
      v7 = y;
    }
    else
    {
      v7 = v2->vPos.y;
      y = v4->vPos.y;
    }
    x = this->vBasePos.x;
    v9 = ((double (__fastcall *)(ActorChara *))v2->GetRivalDistance)(v2);
    if ( *(float *)&v9 > 25.0 )
    {
      if ( *(float *)&v9 < 52.5 )
      {
        v12 = (float)(*(float *)&v9 - 25.0) / 27.5;
        v11 = (float)(v12 * 1.3500004) + 12.5;
        v10 = (float)(v12 * 7.0) + 52.5;
      }
      else
      {
        v10 = FLOAT_59_5;
        v11 = FLOAT_13_85;
      }
    }
    else
    {
      v10 = FLOAT_52_5;
      v11 = FLOAT_12_5;
    }
    v13 = v7 - y;
    if ( (float)(v7 - y) < 0.0 )
    {
      LODWORD(v13) ^= _xmm;
      y = v7;
    }
    v14 = (float)(fminf(20.0, v13) * 0.5) + y;
    if ( *(float *)&v9 <= 25.0 )
    {
      p_x = &v2->vPos.x;
      v25 = &v2->vPos.x;
      if ( v2->vPos.x > v4->vPos.x )
        v25 = &v4->vPos.x;
      v26 = x - *v25;
      if ( v4->vPos.x > *p_x )
        p_x = &v4->vPos.x;
      v27 = *p_x - x;
      if ( v26 <= v27 )
      {
        if ( v27 > v26 && *p_x > x && v27 > 12.5 )
          x = x + (float)(v27 - 12.5);
      }
      else if ( x > *v25 && v26 > 12.5 )
      {
        x = x - (float)(v26 - 12.5);
      }
      v23 = x;
    }
    else
    {
      v15 = &v52;
      v16 = v4->vPos.x;
      v17 = (__int64 *)&v53;
      v52 = v2->vPos.x;
      v54 = v16;
      v18 = v52 + v2->vColOff.x;
      v19 = v16 + v4->vColOff.x;
      v53 = v18;
      v55 = v19;
      x = (float)((float)(v16 - v52) * 0.5) + v52;
      do
      {
        if ( *v15 > *(float *)v17 )
          v15 = (float *)v17;
        v17 = (__int64 *)((char *)v17 + 4);
      }
      while ( v17 != v56 );
      v20 = *v15;
      v21 = (__int64 *)&v53;
      v22 = &v52;
      v53 = v18;
      v54 = v16;
      v55 = v19;
      do
      {
        if ( *(float *)v21 > *v22 )
          v22 = (float *)v21;
        v21 = (__int64 *)((char *)v21 + 4);
      }
      while ( v21 != v56 );
      v23 = (float)((float)(*v22 - v20) * 0.5) + v20;
    }
    v28 = this->vBasePosPrev.y;
    v29 = v10 - 50.0;
    v30 = *(float *)&FLOAT_0_050000001;
    this->vBaseLook.z = v10 - 50.0;
    if ( v28 > v11 )
      v30 = fminf(0.12, (float)((float)(v28 - v11) * 0.0099999998) + 0.050000001);
    if ( v14 > (float)(v11 - 7.0) )
      v11 = v11 + (float)(v14 - (float)(v11 - 7.0));
    if ( this->bMoveLimitOff )
    {
      v31 = *(float *)&FLOAT_1_0;
      v32 = *(float *)&FLOAT_1_0;
      v33 = *(float *)&FLOAT_1_0;
      v34 = *(float *)&FLOAT_1_0;
      v35 = *(float *)&FLOAT_1_0;
      v36 = *(float *)&FLOAT_1_0;
      v37 = *(float *)&FLOAT_1_0;
    }
    else
    {
      type = this->offset.type;
      if ( ((type - 1) & 0xFFFFFFFC) != 0 || type == CROUCH_GUARD || (this->offset.iOptionFlag & 0x400) != 0 )
      {
        v31 = v5 * 0.15000001;
        v32 = v5 * 0.15000001;
        v33 = (float)(v5 * 0.15000001) * 1.45;
      }
      else
      {
        v31 = *(float *)&FLOAT_1_0;
        v32 = *(float *)&FLOAT_1_0;
        v33 = *(float *)&FLOAT_1_0;
      }
      if ( ((type - 1) & 0xFFFFFFFC) != 0 || type == CROUCH_GUARD || (this->offset.iOptionFlag & 0x800) != 0 )
      {
        v34 = v30 * v5;
        v35 = v5 * 0.050000001;
      }
      else
      {
        v34 = *(float *)&FLOAT_1_0;
        v35 = *(float *)&FLOAT_1_0;
      }
      if ( ((type - 1) & 0xFFFFFFFC) != 0 || type == CROUCH_GUARD || (this->offset.iOptionFlag & 0x1000) != 0 )
      {
        v36 = v5 * 0.050000001;
        v37 = v36;
      }
      else
      {
        v36 = *(float *)&FLOAT_1_0;
        v37 = *(float *)&FLOAT_1_0;
      }
    }
    v39 = (float)((float)(v10 - this->vBasePosPrev.z) * v37) + this->vBasePosPrev.z;
    v40 = (float)((float)(v29 - this->vBaseLookPrev.z) * v36) + this->vBaseLookPrev.z;
    this->vBasePos.z = v39;
    this->vBaseLook.z = v40;
    v41 = (float)((float)((float)(v39 - 52.5) / 7.0) * 4.75) + 21.5;
    v42 = v41 - 80.0;
    if ( (float)(v41 - 80.0) <= x )
      v43 = fminf(80.0 - v41, x);
    else
      v43 = v41 - 80.0;
    if ( v42 <= v23 )
      v42 = fminf(80.0 - v41, v23);
    v44 = (float)(v43 - this->vBaseLookPrev.x) * v31;
    v45 = (float)((float)(v43 - this->vBasePosPrev.x) * v32) + this->vBasePosPrev.x;
    this->vBaseLook.x = v44 + this->vBaseLookPrev.x;
    v46 = v11;
    v47 = v11 - this->vBasePosPrev.y;
    this->vBasePos.x = v45;
    v48 = (float)(v47 * v35) + this->vBasePosPrev.y;
    v49 = (float)((float)(v46 + 1.0) - this->vBaseLookPrev.y) * v34;
    this->vBasePos.y = v48;
    v50 = v49 + this->vBaseLookPrev.y;
    this->vBaseLook.y = v50;
    if ( (float)((float)(v48 + 1.0) - 7.77) <= v50 )
    {
      if ( (float)(v50 - v48) > 8.7700005 )
        this->vBaseLook.y = v48 + 8.7700005;
    }
    else
    {
      this->vBaseLook.y = (float)(v48 + 1.0) - 7.77;
    }
    v51 = v42 - this->vBaseWallPos.x;
    this->vBaseWallPos.z = v39;
    this->vBaseWallPos.y = v48;
    this->vBaseWallPos.x = (float)(v51 * v33) + this->vBaseWallPos.x;
  }
}

void __fastcall CameraControl::CameraInit(CameraControl *this, float aspect)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  *(_QWORD *)&this->vPos.x = 0i64;
  *(_QWORD *)&this->vPos.z = 0i64;
  *(_QWORD *)&this->vPosPrev.x = 0i64;
  *(_QWORD *)&this->vPosPrev.z = 0i64;
  *(_QWORD *)&this->vLook.x = 0i64;
  this->vLook.z = 0.0;
  *(_QWORD *)&this->vLookPrev.x = 0i64;
  this->vLookPrev.z = 0.0;
  *(_QWORD *)&this->vUp.y = 0i64;
  *(_QWORD *)&this->vUpPrev.y = 0i64;
  *(_QWORD *)&this->vBasePos.x = 0i64;
  *(_QWORD *)&this->vBasePos.z = 0i64;
  *(_QWORD *)&this->vBasePosPrev.x = 0i64;
  *(_QWORD *)&this->vBasePosPrev.z = 0i64;
  *(_QWORD *)&this->vBaseLook.x = 0i64;
  *(_QWORD *)&this->vBaseLook.z = 0i64;
  *(_QWORD *)&this->vBaseLookPrev.x = 0i64;
  this->vBaseLookPrev.z = 0.0;
  *(_QWORD *)&this->vBaseUp.y = 0i64;
  *(_QWORD *)&this->vBaseUpPrev.y = 0i64;
  *(_QWORD *)&this->vBaseWallPos.x = 0i64;
  this->vBaseWallPos.z = 0.0;
  this->fAspect = aspect;
  *(_QWORD *)&this->fPerseAngle = 1107367035i64;
  this->fNear = 1.0;
  this->fFar = 4096.0;
  this->fDist = 52.5;
  this->fHeight = 12.5;
  this->vBasePos.y = 12.5;
  this->vBasePos.z = 52.5;
  this->vBaseLook.x = 0.0;
  this->vBaseLook.y = 13.5;
  this->vBaseLook.z = 2.5;
  this->vBaseUp.y = 1.0;
  *(_QWORD *)&this->fLookDistAdj = 0i64;
  CameraOffsetData::Reset(&this->offset);
  *(_QWORD *)(v2 + 456) = v3;
  *(_QWORD *)(v2 + 464) = v3;
  *(_QWORD *)(v2 + 472) = v3;
  *(_QWORD *)(v2 + 480) = v3;
  *(_DWORD *)(v2 + 488) = v3;
  *(_BYTE *)(v2 + 492) = v3;
  *(_DWORD *)(v2 + 952) = 1056964608;
  *(_DWORD *)(v2 + 956) = 1056964608;
  *(_WORD *)(v2 + 960) = v3;
}

void __fastcall CameraControl::CameraLateCalc(CameraControl *this, ActionSystem *actSys)
{
  ActionSystem *v4; // rdx
  float z; // eax
  __int64 v6; // xmm0_8
  float v7; // eax
  float v8; // eax
  __int64 v9; // xmm0_8
  float v10; // eax

  CameraControl::MotionCameraCheck(this, actSys);
  CameraControl::QuakeCameraCalc(this, actSys);
  switch ( this->offset.type )
  {
    case STAND_GUARD:
      CameraControl::MoveCameraCalc(this, actSys);
      break;
    case CROUCH_GUARD:
      CameraControl::MoveCameraOutCalc(this, actSys);
      break;
    case CATCH_DAMAGE:
      if ( actSys->actBlack.data[5].attr != COUNTER_HIT || this->offset.bNonStop )
      {
        this->offset.xCount.value += actSys->xPlaySpeed.value;
        if ( this->offset.xCount.value >= this->offset.xMax.value )
          CameraOffsetData::Reset(&this->offset);
      }
      z = this->vBasePos.z;
      *(_QWORD *)&this->vPos.x = *(_QWORD *)&this->vBasePos.x;
      *(_QWORD *)&this->vLook.x = *(_QWORD *)&this->vBaseLook.x;
      v6 = *(_QWORD *)&this->vBaseUp.x;
      this->vPos.z = z;
      this->vLook.z = this->vBaseLook.z;
      v7 = this->vBaseUp.z;
      *(_QWORD *)&this->vUp.x = v6;
      this->vUp.z = v7;
      break;
    case GUARD_POINT|CROUCH_GUARD:
      CameraControl::NormalFixYCheck(this, v4);
      break;
  }
  if ( this->offset.type == NORMAL )
  {
    v8 = this->vBasePos.z;
    *(_QWORD *)&this->vPos.x = *(_QWORD *)&this->vBasePos.x;
    *(_QWORD *)&this->vLook.x = *(_QWORD *)&this->vBaseLook.x;
    v9 = *(_QWORD *)&this->vBaseUp.x;
    this->vPos.z = v8;
    this->vLook.z = this->vBaseLook.z;
    v10 = this->vBaseUp.z;
    *(_QWORD *)&this->vUp.x = v9;
    this->vUp.z = v10;
  }
  this->vPos.x = this->vPos.x + this->quake.vOff.x;
  this->vPos.y = this->quake.vOff.y + this->vPos.y;
  this->vPos.z = this->quake.vOff.z + this->vPos.z;
  this->vLook.x = this->quake.vOff.x + this->vLook.x;
  this->vLook.y = this->quake.vOff.y + this->vLook.y;
  this->vLook.z = this->quake.vOff.z + this->vLook.z;
  CameraControl::_calcCamMatrix(this);
}

void __fastcall CameraControl::CameraPrevCalc(CameraControl *this, ActionSystem *actSys)
{
  bool v2; // zf
  __int128 v4; // xmm1
  float z; // eax
  __int128 v6; // xmm0
  float v7; // eax
  __int128 v8; // xmm0
  float v9; // eax
  __int128 v10; // xmm1
  float v11; // eax
  __int128 v12; // xmm0
  float v13; // eax
  __int128 v14; // xmm1
  float v15; // eax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1

  v2 = !this->bSubCamera;
  v4 = *(_OWORD *)&this->mView.m[4];
  z = this->vBasePos.z;
  *(_QWORD *)&this->vBasePosPrev.x = *(_QWORD *)&this->vBasePos.x;
  *(_QWORD *)&this->vBaseLookPrev.x = *(_QWORD *)&this->vBaseLook.x;
  *(_QWORD *)&this->vBaseUpPrev.x = *(_QWORD *)&this->vBaseUp.x;
  *(_QWORD *)&this->vPosPrev.x = *(_QWORD *)&this->vPos.x;
  *(_QWORD *)&this->vLookPrev.x = *(_QWORD *)&this->vLook.x;
  *(_QWORD *)&this->vUpPrev.x = *(_QWORD *)&this->vUp.x;
  v6 = *(_OWORD *)this->mView.m;
  this->vBasePosPrev.z = z;
  v7 = this->vBaseLook.z;
  *(_OWORD *)this->mViewPrev.m = v6;
  this->vBaseLookPrev.z = v7;
  v8 = *(_OWORD *)&this->mView.m[8];
  v9 = this->vBaseUp.z;
  *(_OWORD *)&this->mViewPrev.m[4] = v4;
  this->vBaseUpPrev.z = v9;
  v10 = *(_OWORD *)&this->mView.m[12];
  v11 = this->vPos.z;
  *(_OWORD *)&this->mViewPrev.m[8] = v8;
  this->vPosPrev.z = v11;
  v12 = *(_OWORD *)this->mProj.m;
  v13 = this->vLook.z;
  *(_OWORD *)&this->mViewPrev.m[12] = v10;
  this->vLookPrev.z = v13;
  v14 = *(_OWORD *)&this->mProj.m[4];
  v15 = this->vUp.z;
  *(_OWORD *)this->mProjPrev.m = v12;
  this->vUpPrev.z = v15;
  v16 = *(_OWORD *)&this->mProj.m[8];
  *(_OWORD *)&this->mProjPrev.m[4] = v14;
  v17 = *(_OWORD *)&this->mProj.m[12];
  *(_OWORD *)&this->mProjPrev.m[8] = v16;
  v18 = *(_OWORD *)this->mBillboard.m;
  *(_OWORD *)&this->mProjPrev.m[12] = v17;
  v19 = *(_OWORD *)&this->mBillboard.m[4];
  *(_OWORD *)this->mBillboardPrev.m = v18;
  v20 = *(_OWORD *)&this->mBillboard.m[8];
  *(_OWORD *)&this->mBillboardPrev.m[4] = v19;
  v21 = *(_OWORD *)&this->mBillboard.m[12];
  *(_OWORD *)&this->mBillboardPrev.m[8] = v20;
  *(_OWORD *)&this->mBillboardPrev.m[12] = v21;
  if ( v2 )
  {
    CameraControl::BattleCameraCheck(this, actSys);
    this->bMoveLimitOff = 0;
  }
  else
  {
    this->bMoveLimitOff = 0;
  }
}

OGLVec3 *__fastcall CameraControl::Easing(
        OGLVec3 *result,
        const OGLVec3 *start,
        const OGLVec3 *end,
        float t,
        int easingType)
{
  float v8; // xmm0_4
  float y; // xmm1_4
  float v10; // xmm0_4
  float z; // xmm1_4
  float v12; // xmm0_4
  OGLVec3 *v13; // rax

  v8 = Tween::easing(start->x, end->x, t, (Tween::EasingType)easingType);
  y = end->y;
  result->x = v8;
  v10 = Tween::easing(start->y, y, t, (Tween::EasingType)easingType);
  z = end->z;
  result->y = v10;
  v12 = Tween::easing(start->z, z, t, (Tween::EasingType)easingType);
  v13 = result;
  result->z = v12;
  return v13;
}

OGLVec3 *__fastcall CameraControl::EasingQuad(OGLVec3 *result, const OGLVec3 *start, const OGLVec3 *end, float t)
{
  float x; // xmm2_4
  float v5; // xmm4_4
  float v7; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  bool v12; // cc
  float v13; // xmm1_4
  float v14; // xmm1_4
  float y; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  float z; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  OGLVec3 *v26; // rax

  x = end->x;
  v5 = start->x;
  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  v7 = t;
  if ( v5 != x )
  {
    if ( v5 > x )
    {
      v9 = v5;
      v5 = x;
      x = v9;
      v7 = 1.0 - t;
    }
    if ( v7 > 0.0 )
    {
      if ( v7 < 1.0 )
      {
        v10 = x - v5;
        if ( v10 < 0.0 )
          LODWORD(v10) ^= _xmm;
        v11 = (float)(v10 * v7) / v10;
        v12 = v11 >= 0.5;
        v13 = v11 + v11;
        if ( v12 )
          v14 = (float)((float)(1.0 - (float)((float)(1.0 - (float)(v13 - 1.0)) * (float)(1.0 - (float)(v13 - 1.0))))
                      * 0.5)
              + 0.5;
        else
          v14 = (float)(v13 * v13) * 0.5;
        v5 = (float)(v14 * v10) + v5;
      }
      else
      {
        v5 = x;
      }
    }
  }
  y = end->y;
  v16 = t;
  v17 = start->y;
  result->x = v5;
  if ( v17 != y )
  {
    if ( v17 > y )
    {
      v18 = v17;
      v17 = y;
      y = v18;
      v16 = 1.0 - t;
    }
    if ( v16 > 0.0 )
    {
      if ( v16 < 1.0 )
      {
        v19 = y - v17;
        if ( v19 < 0.0 )
          LODWORD(v19) ^= _xmm;
        v20 = (float)(v19 * v16) / v19;
        v12 = v20 >= 0.5;
        v21 = v20 + v20;
        if ( v12 )
          v22 = (float)((float)(1.0 - (float)((float)(1.0 - (float)(v21 - 1.0)) * (float)(1.0 - (float)(v21 - 1.0))))
                      * 0.5)
              + 0.5;
        else
          v22 = (float)(v21 * v21) * 0.5;
        v17 = (float)(v22 * v19) + v17;
      }
      else
      {
        v17 = y;
      }
    }
  }
  z = end->z;
  v24 = start->z;
  result->y = v17;
  v25 = Tween::easing(v24, z, t, InOutQuad);
  v26 = result;
  result->z = v25;
  return v26;
}

OGLVec3 *__fastcall CameraControl::GetOffsetTypePos(CameraControl *this, OGLVec3 *result, __int64 a3, __int64 a4)
{
  int iOffsetType; // eax
  Actor *pActor; // rdi
  float z; // eax
  __int64 v9; // rax
  __int64 v10; // r8
  char v12[16]; // [rsp+20h] [rbp-10h] BYREF

  LOBYTE(a4) = 0;
  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  iOffsetType = this->offset.iOffsetType;
  pActor = this->offset.pActor;
  if ( iOffsetType != 2 )
  {
    if ( !pActor )
      return result;
    if ( (this->offset.iOptionFlag & 8) != 0 )
    {
      if ( !pActor->pTarget )
        return result;
      pActor = pActor->pTarget;
    }
    if ( iOffsetType >= 4 )
    {
      if ( ((unsigned int (__fastcall *)(Actor *, OGLVec3 *, __int64, __int64))pActor->GetActorType)(
             pActor,
             result,
             a3,
             a4) )
      {
        return result;
      }
      LOBYTE(a4) = (this->offset.iOptionFlag & 2) == 0 && pActor->iCAngle != 0;
    }
  }
  switch ( this->offset.iOffsetType )
  {
    case 0:
      *(_QWORD *)&result->x = *(_QWORD *)&pActor->vBasePos.x;
      z = pActor->vBasePos.z;
      goto LABEL_42;
    case 1:
      *(_QWORD *)&result->x = *(_QWORD *)&pActor->vPos.x;
      z = pActor->vPos.z;
      goto LABEL_42;
    case 2:
      *(_QWORD *)&result->x = *(_QWORD *)&this->offset.vOffBase.x;
      result->z = this->offset.vOffBase.z;
      return result;
    case 3:
      *(_QWORD *)&result->x = *(_QWORD *)&this->vBasePos.x;
      z = this->vBasePos.z;
      goto LABEL_42;
    case 4:
      v9 = ((__int64 (__fastcall *)(Actor *, char *, _QWORD))pActor->__vftable[1].UpdatePosition)(
             pActor,
             v12,
             (unsigned __int8)a4);
      goto LABEL_41;
    case 5:
      v10 = 3i64;
      goto LABEL_40;
    case 6:
      v10 = 11i64;
      goto LABEL_40;
    case 7:
      v10 = 12i64;
      goto LABEL_40;
    case 8:
      v10 = 13i64;
      goto LABEL_40;
    case 9:
      v10 = 16i64;
      goto LABEL_40;
    case 0xA:
      v10 = 17i64;
      goto LABEL_40;
    case 0xB:
      v10 = 18i64;
      goto LABEL_40;
    case 0xC:
      v10 = 19i64;
      goto LABEL_40;
    case 0xD:
      v10 = 24i64;
      goto LABEL_40;
    case 0xE:
      v10 = 25i64;
      goto LABEL_40;
    case 0xF:
      v10 = 26i64;
      goto LABEL_40;
    case 0x10:
      v10 = 21i64;
      goto LABEL_40;
    case 0x11:
      v10 = 22i64;
      goto LABEL_40;
    case 0x12:
      v10 = 23i64;
      goto LABEL_40;
    case 0x13:
      v10 = 28i64;
      goto LABEL_40;
    case 0x14:
      v10 = 29i64;
      goto LABEL_40;
    case 0x15:
      v10 = 30i64;
      goto LABEL_40;
    case 0x16:
      v10 = 5i64;
      goto LABEL_40;
    case 0x17:
      v10 = 6i64;
      goto LABEL_40;
    case 0x18:
      v10 = 7i64;
      goto LABEL_40;
    case 0x19:
      v10 = 8i64;
      goto LABEL_40;
    case 0x1A:
      v10 = 9i64;
      goto LABEL_40;
    case 0x1B:
      v10 = 10i64;
LABEL_40:
      v9 = ((__int64 (__fastcall *)(Actor *, char *, __int64, __int64))pActor->__vftable[1].LateUpdate)(
             pActor,
             v12,
             v10,
             a4);
LABEL_41:
      *(_QWORD *)&result->x = *(_QWORD *)v9;
      z = *(float *)(v9 + 8);
LABEL_42:
      result->z = z;
      CameraControl::_addOffset(this, result, pActor);
      break;
    default:
      return result;
  }
  return result;
}

bool __fastcall CameraControl::IsInvisibleEffectActor(CameraControl *this, const ActorEffect *pActor)
{
  Actor *v3; // rdx
  int iOptionFlag; // ecx
  Actor *pParent; // rcx
  ActorCharaBase *v7; // rax
  int iCharNo; // ecx

  v3 = this->offset.pActor;
  if ( !v3 )
    return 0;
  iOptionFlag = this->offset.iOptionFlag;
  if ( (iOptionFlag & 0x201) != 0 )
  {
    pParent = pActor->pParent;
    if ( !pParent )
      return 1;
LABEL_5:
    if ( pParent->IsMotionCameraInvisibleActor(pParent) )
      return 1;
    v7 = (ActorCharaBase *)pActor->pParent;
    if ( v7 != pActor->pOwner )
      return 1;
    if ( (pActor->effectData.iOptionFlag & 0x100000) == 0 )
      return pActor->iParentInitActNo != v7->iActNo;
    return 0;
  }
  if ( (iOptionFlag & 0x100) != 0 && pActor->iCharNo == 999
    || (iOptionFlag & 0x80u) != 0 && pActor->iCharNo != 999 && pActor->iPlayerID != v3->iPlayerID )
  {
    return 1;
  }
  if ( (iOptionFlag & 0x2000) == 0 )
    return 0;
  pParent = pActor->pParent;
  if ( pParent )
    goto LABEL_5;
  iCharNo = pActor->iCharNo;
  if ( iCharNo == 999 )
    return 0;
  return pActor->iPlayerID != v3->iPlayerID || iCharNo != v3->iCharNo || pActor->iParentInitActNo != v3->iActNo;
}

void __fastcall CameraControl::MotionCameraCheck(CameraControl *this, ActionSystem *actSys, __int64 a3, __int64 a4)
{
  Actor *pActor; // rcx
  int iCAngle; // eax
  bool bMirror; // bp
  float y; // xmm6_4
  int iOptionFlag; // edx
  float fDegreeY; // xmm6_4
  Actor *pTarget; // rax
  float v13; // xmm6_4
  OGLVec3 *OffsetTypePos; // rax
  float z; // ecx
  __int64 v16; // xmm0_8
  float v17; // eax
  OGLVec3 *v18; // rax
  bool v19; // zf
  Actor *v20; // r10
  OGLVec3 *p_vStart; // rdi
  __int64 iActNo; // rdx
  int value; // eax
  float v24; // eax
  float v25; // xmm2_4
  float v26; // xmm1_4
  float x; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // eax
  OGLVec3 pOffset; // [rsp+70h] [rbp-38h] BYREF
  OGLVec3 result; // [rsp+80h] [rbp-28h] BYREF

  if ( (unsigned int)(this->offset.type - 3) <= 1 )
  {
    pActor = this->offset.pActor;
    if ( !pActor )
    {
      CameraOffsetData::Reset(&this->offset);
      return;
    }
    iCAngle = pActor->iCAngle;
    bMirror = iCAngle != 0;
    y = pActor->vAngle.y;
    if ( !iCAngle )
      LODWORD(y) ^= _xmm;
    iOptionFlag = this->offset.iOptionFlag;
    fDegreeY = y - 90.0;
    if ( (iOptionFlag & 8) != 0 )
    {
      pTarget = pActor->pTarget;
      if ( pTarget )
      {
        v13 = pTarget->vAngle.y;
        if ( !pTarget->iCAngle )
          LODWORD(v13) ^= _xmm;
        fDegreeY = v13 - 90.0;
      }
    }
    if ( (iOptionFlag & 0x10) != 0 )
    {
      if ( !this->offset.iFlipCount )
      {
        OffsetTypePos = CameraControl::GetOffsetTypePos(this, &result, a3, a4);
        z = OffsetTypePos->z;
        v16 = *(_QWORD *)&OffsetTypePos->x;
        *(_QWORD *)&this->offset.vOffBase.x = *(_QWORD *)&OffsetTypePos->x;
        this->offset.vOffBase.z = z;
        pOffset.z = z;
        this->offset.iFlipCount = 1;
        goto LABEL_17;
      }
      v16 = *(_QWORD *)&this->offset.vOffBase.x;
      v17 = this->offset.vOffBase.z;
    }
    else
    {
      v18 = CameraControl::GetOffsetTypePos(this, &result, a3, a4);
      v16 = *(_QWORD *)&v18->x;
      v17 = v18->z;
    }
    pOffset.z = v17;
LABEL_17:
    v19 = this->offset.type == RESERVE_DAMAGE;
    v20 = this->offset.pActor;
    *(_QWORD *)&pOffset.x = v16;
    if ( v19 )
    {
      if ( this->offset.iActMotionFileID == v20->baseAnime.iMotionFileID
        && this->offset.iActMotionID == v20->baseAnime.iMotionID )
      {
        p_vStart = &this->offset.vStart;
        OGLCamera::getCameraMatrix(
          v20->pModel->m_pCamera,
          &this->offset.mView,
          &this->offset.mProj,
          &this->offset.mBillboard,
          &this->offset.vStart,
          this->offset.iCameraID,
          v20->baseAnime.fMotionFrame,
          this->fNear,
          this->fFar,
          &pOffset,
          fDegreeY,
          bMirror,
          v20->baseAnime.fBlend,
          v20->vScale.z);
LABEL_29:
        v24 = p_vStart->z;
        v25 = this->offset.vStart.z;
        v26 = this->offset.vStart.y;
        *(_QWORD *)&this->offset.vEnd.x = *(_QWORD *)&p_vStart->x;
        x = p_vStart->x;
        this->offset.vEnd.z = v24;
        v28 = v25 - this->offset.mView.m[10];
        v29 = v26 - this->offset.mView.m[6];
        this->offset.vStartLook.x = x - this->offset.mView.m[2];
        this->offset.vStartLook.z = v28;
        this->offset.vStartLook.y = v29;
        v30 = this->offset.vStartLook.z;
        *(_QWORD *)&this->offset.vEndLook.x = *(_QWORD *)&this->offset.vStartLook.x;
        this->offset.vEndLook.z = v30;
        return;
      }
LABEL_23:
      CameraOffsetData::Reset(&this->offset);
      return;
    }
    iActNo = (unsigned int)v20->iActNo;
    if ( this->offset.iActMotionID != (_DWORD)iActNo )
    {
      if ( (((__int64 (__fastcall *)(Actor *, __int64, _QWORD))v20->GetActionOptionFlag)(v20, iActNo, 0i64) & 8) == 0 )
        goto LABEL_23;
      v20 = this->offset.pActor;
      this->offset.iActMotionID = v20->iActNo;
    }
    p_vStart = &this->offset.vStart;
    OGLCamera::getCameraMatrix(
      v20->pModel->m_pCamera,
      &this->offset.mView,
      &this->offset.mProj,
      &this->offset.mBillboard,
      &this->offset.vStart,
      this->offset.iCameraID,
      (float)((float)(unsigned __int16)this->offset.xCount.value * 0.000015258789)
    + (float)(this->offset.xCount.value >> 16),
      this->fNear,
      this->fFar,
      &pOffset,
      fDegreeY,
      bMirror,
      0.0,
      v20->vScale.z);
    if ( actSys->actBlack.data[5].attr != COUNTER_HIT || this->offset.bNonStop )
    {
      this->offset.xCount.value += actSys->xPlaySpeed.value;
      value = this->offset.xMax.value;
      if ( this->offset.xCount.value > value )
        this->offset.xCount.value = value;
    }
    goto LABEL_29;
  }
}

void __fastcall CameraControl::MoveCameraCalc(CameraControl *this, ActionSystem *actSys, __int64 a3, __int64 a4)
{
  Actor *pActor; // rcx
  int iActMotionID; // eax
  __int64 iActNo; // rdx
  OGLVec3 *OffsetTypePos; // rax
  int iOptionFlag; // ecx
  OGLVec3 *v11; // rax
  int v12; // ecx
  int value; // edx
  int v14; // ecx
  float z; // eax
  __int64 v16; // xmm0_8
  float v17; // eax
  float v18; // xmm6_4
  OGLVec3 result; // [rsp+20h] [rbp-28h] BYREF

  pActor = this->offset.pActor;
  if ( !pActor )
  {
    CameraOffsetData::Reset(&this->offset);
    return;
  }
  iActMotionID = this->offset.iActMotionID;
  if ( iActMotionID >= 0 )
  {
    iActNo = (unsigned int)pActor->iActNo;
    if ( iActMotionID != (_DWORD)iActNo )
    {
      if ( (((__int64 (__fastcall *)(Actor *, __int64, _QWORD))pActor->GetActionOptionFlag)(pActor, iActNo, 0i64) & 8) == 0 )
      {
        CameraControl::RequestMoveCameraOut(this, 30, 1);
        return;
      }
      this->offset.iActMotionID = this->offset.pActor->iActNo;
    }
  }
  if ( (this->offset.iOptionFlag & 0x10) != 0 )
  {
    if ( !this->offset.iFlipCount )
    {
      OffsetTypePos = CameraControl::GetOffsetTypePos(this, &result, a3, a4);
      iOptionFlag = this->offset.iOptionFlag;
      this->offset.vEnd = *OffsetTypePos;
      if ( (iOptionFlag & 0x400) != 0 )
        this->offset.vEnd.x = this->vBasePos.x;
      if ( (iOptionFlag & 0x800) != 0 )
        this->offset.vEnd.y = this->vBasePos.y;
      if ( (iOptionFlag & 0x1000) != 0 )
        this->offset.vEnd.z = this->vBasePos.z;
      this->offset.vEndLook.x = this->offset.vEnd.x + this->offset.vOffLookBase.x;
      this->offset.vEndLook.y = this->offset.vEnd.y + this->offset.vOffLookBase.y;
      this->offset.vEndLook.z = this->offset.vEnd.z + this->offset.vOffLookBase.z;
      this->offset.iFlipCount = 1;
    }
  }
  else
  {
    v11 = CameraControl::GetOffsetTypePos(this, &result, a3, a4);
    v12 = this->offset.iOptionFlag;
    this->offset.vEnd = *v11;
    if ( (v12 & 0x400) != 0 )
      this->offset.vEnd.x = this->vBasePos.x;
    if ( (v12 & 0x800) != 0 )
      this->offset.vEnd.y = this->vBasePos.y;
    if ( (v12 & 0x1000) != 0 )
      this->offset.vEnd.z = this->vBasePos.z;
    this->offset.vEndLook.x = this->offset.vEnd.x + this->offset.vOffLookBase.x;
    this->offset.vEndLook.y = this->offset.vEnd.y + this->offset.vOffLookBase.y;
    this->offset.vEndLook.z = this->offset.vEnd.z + this->offset.vOffLookBase.z;
  }
  if ( actSys->actBlack.data[5].attr != COUNTER_HIT || this->offset.bNonStop )
    this->offset.xCount.value += actSys->xPlaySpeed.value;
  value = this->offset.xCount.value;
  v14 = this->offset.xMax.value;
  if ( value < v14 )
  {
    v18 = (float)((float)((float)(unsigned __int16)value * 0.000015258789) + (float)(value >> 16))
        / (float)((float)((float)(unsigned __int16)v14 * 0.000015258789) + (float)(v14 >> 16));
    if ( this->offset.iMoveCalcType == 1 )
    {
      this->vUp = *CameraControl::EasingQuad(&result, &this->offset.vStartUp, &this->vBaseUp, v18);
      this->vLook = *CameraControl::EasingQuad(&result, &this->offset.vStartLook, &this->offset.vEndLook, v18);
      this->vPos = *CameraControl::EasingQuad(&result, &this->offset.vStart, &this->offset.vEnd, v18);
    }
    else
    {
      this->vUp.x = (float)((float)(this->vBaseUp.x - this->offset.vStartUp.x) * v18) + this->offset.vStartUp.x;
      this->vUp.y = (float)((float)(this->vBaseUp.y - this->offset.vStartUp.y) * v18) + this->offset.vStartUp.y;
      this->vUp.z = (float)((float)(this->vBaseUp.z - this->offset.vStartUp.z) * v18) + this->offset.vStartUp.z;
      this->vLook.x = (float)((float)(this->offset.vEndLook.x - this->offset.vStartLook.x) * v18)
                    + this->offset.vStartLook.x;
      this->vLook.y = (float)((float)(this->offset.vEndLook.y - this->offset.vStartLook.y) * v18)
                    + this->offset.vStartLook.y;
      this->vLook.z = (float)((float)(this->offset.vEndLook.z - this->offset.vStartLook.z) * v18)
                    + this->offset.vStartLook.z;
      this->vPos.x = (float)((float)(this->offset.vEnd.x - this->offset.vStart.x) * v18) + this->offset.vStart.x;
      this->vPos.y = (float)((float)(this->offset.vEnd.y - this->offset.vStart.y) * v18) + this->offset.vStart.y;
      this->vPos.z = (float)((float)(this->offset.vEnd.z - this->offset.vStart.z) * v18) + this->offset.vStart.z;
    }
  }
  else
  {
    z = this->vBaseUp.z;
    *(_QWORD *)&this->vUp.x = *(_QWORD *)&this->vBaseUp.x;
    *(_QWORD *)&this->vLook.x = *(_QWORD *)&this->offset.vEndLook.x;
    v16 = *(_QWORD *)&this->offset.vEnd.x;
    this->vUp.z = z;
    this->vLook.z = this->offset.vEndLook.z;
    v17 = this->offset.vEnd.z;
    *(_QWORD *)&this->vPos.x = v16;
    this->vPos.z = v17;
    this->offset.xCount.value = v14;
  }
}

void __fastcall CameraControl::MoveCameraOutCalc(CameraControl *this, ActionSystem *actSys)
{
  int value; // ecx
  int v4; // edx
  float v5; // xmm6_4
  OGLVec3 result; // [rsp+20h] [rbp-28h] BYREF

  if ( actSys->actBlack.data[5].attr != COUNTER_HIT || this->offset.bNonStop )
    this->offset.xCount.value += actSys->xPlaySpeed.value;
  value = this->offset.xCount.value;
  v4 = this->offset.xMax.value;
  if ( value < v4 )
  {
    v5 = (float)((float)((float)(unsigned __int16)value * 0.000015258789) + (float)(value >> 16))
       / (float)((float)((float)(unsigned __int16)v4 * 0.000015258789) + (float)(v4 >> 16));
    if ( this->offset.iMoveCalcType == 1 )
    {
      this->vUp = *CameraControl::EasingQuad(&result, &this->offset.vStartUp, &this->vBaseUp, v5);
      this->vLook = *CameraControl::EasingQuad(&result, &this->offset.vStartLook, &this->vBaseLook, v5);
      this->vPos = *CameraControl::EasingQuad(&result, &this->offset.vStart, &this->vBasePos, v5);
    }
    else
    {
      this->vUp.x = (float)((float)(this->vBaseUp.x - this->offset.vStartUp.x) * v5) + this->offset.vStartUp.x;
      this->vUp.y = (float)((float)(this->vBaseUp.y - this->offset.vStartUp.y) * v5) + this->offset.vStartUp.y;
      this->vUp.z = (float)((float)(this->vBaseUp.z - this->offset.vStartUp.z) * v5) + this->offset.vStartUp.z;
      this->vLook.x = (float)((float)(this->vBaseLook.x - this->offset.vStartLook.x) * v5) + this->offset.vStartLook.x;
      this->vLook.y = (float)((float)(this->vBaseLook.y - this->offset.vStartLook.y) * v5) + this->offset.vStartLook.y;
      this->vLook.z = (float)((float)(this->vBaseLook.z - this->offset.vStartLook.z) * v5) + this->offset.vStartLook.z;
      this->vPos.x = (float)((float)(this->vBasePos.x - this->offset.vStart.x) * v5) + this->offset.vStart.x;
      this->vPos.y = (float)((float)(this->vBasePos.y - this->offset.vStart.y) * v5) + this->offset.vStart.y;
      this->vPos.z = (float)((float)(this->vBasePos.z - this->offset.vStart.z) * v5) + this->offset.vStart.z;
    }
  }
  else
  {
    CameraOffsetData::Reset(&this->offset);
  }
}

void __fastcall CameraControl::NormalFixYCheck(CameraControl *this, ActionSystem *actSys)
{
  Actor *pActor; // rcx
  int iActMotionID; // eax
  __int64 iActNo; // rdx
  float z; // eax
  __int64 v7; // xmm0_8
  float v8; // eax

  pActor = this->offset.pActor;
  if ( !pActor )
    goto LABEL_2;
  iActMotionID = this->offset.iActMotionID;
  if ( iActMotionID >= 0 )
  {
    iActNo = (unsigned int)pActor->iActNo;
    if ( iActMotionID != (_DWORD)iActNo )
    {
      if ( (((__int64 (__fastcall *)(Actor *, __int64, _QWORD))pActor->GetActionOptionFlag)(pActor, iActNo, 0i64) & 8) == 0 )
      {
LABEL_2:
        CameraOffsetData::Reset(&this->offset);
        return;
      }
      this->offset.iActMotionID = this->offset.pActor->iActNo;
    }
  }
  z = this->vBasePos.z;
  *(_QWORD *)&this->vPos.x = *(_QWORD *)&this->vBasePos.x;
  *(_QWORD *)&this->vLook.x = *(_QWORD *)&this->vBaseLook.x;
  v7 = *(_QWORD *)&this->vBaseUp.x;
  this->vPos.z = z;
  this->vLook.z = this->vBaseLook.z;
  v8 = this->vBaseUp.z;
  *(_QWORD *)&this->vUp.x = v7;
  this->vUp.z = v8;
}

void __fastcall CameraControl::QuakeCameraCalc(CameraControl *this, ActionSystem *actSys)
{
  int value; // ecx
  int v4; // er8
  int v5; // ebx
  float z; // eax
  float v7; // xmm3_4
  int iFlipCount; // eax
  float y; // xmm1_4
  float v10; // xmm0_4
  int v11; // eax
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm3_4

  value = this->quake.xCount.value;
  v4 = this->quake.xMax.value;
  if ( value < v4 )
  {
    if ( actSys->actBlack.data[5].attr != COUNTER_HIT || this->quake.bNonStop )
    {
      v5 = actSys->xPlaySpeed.value;
      if ( v5 > 0 )
      {
        z = this->quake.vQuakeBase.z;
        *(_QWORD *)&this->quake.vOff.x = *(_QWORD *)&this->quake.vQuakeBase.x;
        this->quake.vOff.z = z;
        v7 = cosf(
               (float)((float)((float)((float)(unsigned __int16)value * 0.000015258789) + (float)(value >> 16))
                     / (float)((float)((float)(unsigned __int16)v4 * 0.000015258789) + (float)(v4 >> 16)))
             * 1.5707964);
        if ( this->quake.vQuakeBase.x == 0.0 || this->quake.vQuakeBase.y == 0.0 )
        {
          iFlipCount = this->quake.iFlipCount;
          if ( (iFlipCount & 2) != 0 )
          {
            y = this->quake.vOff.y;
            LODWORD(this->quake.vOff.x) ^= _xmm;
            LODWORD(v10) = LODWORD(this->quake.vOff.z) ^ _xmm;
            LODWORD(this->quake.vOff.y) = LODWORD(y) ^ _xmm;
            this->quake.vOff.z = v10;
          }
          if ( (iFlipCount & 1) != 0 )
          {
            *(_QWORD *)&this->quake.vOff.x = 0i64;
            this->quake.vOff.z = 0.0;
          }
        }
        else
        {
          v11 = this->quake.iFlipCount;
          if ( (v11 & 2) != 0 )
          {
            LODWORD(v12) = LODWORD(this->quake.vOff.z) ^ _xmm;
            LODWORD(this->quake.vOff.x) ^= _xmm;
            this->quake.vOff.z = v12;
          }
          if ( (v11 & 1) != 0 )
            LODWORD(this->quake.vOff.y) ^= _xmm;
        }
        v13 = v7 * this->quake.vOff.x;
        v14 = v7 * this->quake.vOff.y;
        this->quake.iFlipCount = ((unsigned __int8)this->quake.iFlipCount + 1) & 3;
        v15 = v7 * this->quake.vOff.z;
        this->quake.vOff.x = v13;
        this->quake.vOff.y = v14;
        this->quake.vOff.z = v15;
      }
      this->quake.xCount.value += v5;
    }
  }
  else
  {
    *(_QWORD *)&this->quake.vOff.x = 0i64;
    *(_QWORD *)&this->quake.vOff.z = 0i64;
    *(_QWORD *)&this->quake.vQuakeBase.y = 0i64;
    *(_QWORD *)&this->quake.iFlipCount = 0i64;
    this->quake.xMax.value = 0;
    this->quake.bNonStop = 0;
  }
}

void __fastcall CameraControl::RequestBattleCameraFixY(
        CameraControl *this,
        Actor *pActor,
        const CharaActionData::Camera *camera)
{
  Actor *pTarget; // rax
  float y; // xmm0_4
  _DWORD *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8

  if ( pActor )
  {
    if ( (camera->iOptionFlag & 8) != 0 )
    {
      pTarget = pActor->pTarget;
      if ( !pTarget )
        return;
      y = pTarget->vPos.y;
    }
    else
    {
      y = pActor->vPos.y;
    }
    CameraOffsetData::Reset(&this->offset);
    *v5 = 6;
    *(_DWORD *)(v6 + 240) = 0;
    *(_DWORD *)(v6 + 236) = *(_DWORD *)(v7 + 412);
    *(_QWORD *)(v6 + 224) = v7;
    *(_DWORD *)(v6 + 248) = *(_DWORD *)(v8 + 24);
    *(float *)(v6 + 196) = y;
    *(_DWORD *)(v6 + 192) = 0;
    *(_DWORD *)(v6 + 200) = 0;
  }
}

void __fastcall CameraControl::RequestCamera(CameraControl *this, Actor *pActor, const CharaActionData::Camera *camera)
{
  Actor *v3; // r8
  Actor *v4; // r9
  int fFrame; // edx
  unsigned int v6; // eax
  Actor *v7; // r9
  Actor *v8; // r9

  switch ( camera->iType )
  {
    case 0:
      v3 = this->offset.pActor;
      if ( !v3 || v3->iPlayerID == pActor->iPlayerID )
        goto LABEL_4;
      break;
    case 1:
      CameraControl::RequestMotionCameraSync(this, pActor, camera);
      break;
    case 2:
      CameraControl::RequestMotionCameraFrame(this, pActor, camera);
      break;
    case 3:
      v4 = this->offset.pActor;
      if ( !v4 || v4->iPlayerID == pActor->iPlayerID )
      {
        fFrame = (int)camera->fFrame;
        if ( fFrame < 1 || (unsigned int)(this->offset.type - 3) > 1 )
        {
LABEL_4:
          CameraOffsetData::Reset(&this->offset);
        }
        else
        {
          this->offset.type = CATCH_DAMAGE;
          this->offset.xCount.value = 0;
          this->offset.xMax.value = fFrame << 16;
          *(_QWORD *)&this->offset.iOffsetType = 0i64;
          this->offset.bNonStop = 0;
        }
      }
      break;
    case 4:
      if ( camera->iOffsetBase )
      {
        v6 = camera->iOffsetBase - 1;
        if ( v6 <= 8 )
          CameraControl::RequestQuakeCamera(this, (int)camera->fFrame, v6);
      }
      else
      {
        CameraControl::RequestQuakeCamera(this, (int)camera->fFrame, camera->x, camera->y, camera->z);
      }
      break;
    case 5:
      CameraControl::RequestMoveCamera(this, pActor, camera, 0);
      break;
    case 6:
      v7 = this->offset.pActor;
      if ( !v7 || v7->iPlayerID == pActor->iPlayerID )
        CameraControl::RequestMoveCameraOut(this, (int)camera->fFrame, 0);
      break;
    case 7:
      CameraControl::RequestMoveCamera(this, pActor, camera, 1);
      break;
    case 8:
      v8 = this->offset.pActor;
      if ( !v8 || v8->iPlayerID == pActor->iPlayerID )
        CameraControl::RequestMoveCameraOut(this, (int)camera->fFrame, 1);
      break;
    case 9:
      CameraControl::RequestBattleCameraFixY(this, pActor, camera);
      break;
    default:
      return;
  }
}

void __fastcall CameraControl::RequestKOCamera(CameraControl *this, Actor *pActor)
{
  float z; // eax
  __int64 v5; // xmm0_8
  float v6; // eax
  Actor *pTarget; // rax
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm3_4

  if ( pActor )
  {
    if ( pActor->pTarget )
    {
      z = this->vPos.z;
      *(_QWORD *)&this->offset.vStart.x = *(_QWORD *)&this->vPos.x;
      *(_QWORD *)&this->offset.vStartLook.x = *(_QWORD *)&this->vLook.x;
      v5 = *(_QWORD *)&this->vUp.x;
      this->offset.vStart.z = z;
      this->offset.vStartLook.z = this->vLook.z;
      v6 = this->vUp.z;
      *(_QWORD *)&this->offset.vStartUp.x = v5;
      this->offset.vStartUp.z = v6;
      this->offset.type = STAND_GUARD;
      this->offset.iMoveCalcType = 1;
      this->offset.iActMotionID = -1;
      this->offset.pActor = pActor;
      *(_QWORD *)&this->offset.iOffsetType = 2i64;
      this->offset.iActMotionFileID = 0;
      pTarget = pActor->pTarget;
      v8 = pTarget->vPos.y - pActor->vPos.y;
      v9 = (float)((float)(pTarget->vPos.x - pActor->vPos.x) * 0.5) + pActor->vPos.x;
      v10 = fmaxf(0.0, pActor->GetRivalDistance(pActor) - 35.0);
      *(float *)&v5 = pActor->vPos.y + 10.0;
      this->offset.vOffBase.x = v9;
      this->offset.vOffBase.z = v10 + 40.0;
      this->offset.vOffBase.y = (float)((float)(v8 * -0.25) + *(float *)&v5) + (float)(v10 * 0.15000001);
      this->offset.vOffLookBase.y = v8;
      this->offset.vOffLookBase.x = 0.0;
      this->offset.vOffLookBase.z = -50.0;
      *(_QWORD *)&this->offset.xCount.value = 0i64;
      this->offset.iFlipCount = 0;
      this->offset.bNonStop = 1;
      CameraControl::RequestQuakeCamera(this, 30, 8);
      this->quake.bNonStop = 1;
    }
  }
}

void __fastcall CameraControl::RequestMotionCameraFrame(
        CameraControl *this,
        Actor *pActor,
        const CharaActionData::Camera *camera)
{
  int iIndex; // eax
  OGLModel *pModel; // rcx
  OGLCamera *m_pCamera; // r10
  __int64 v7; // r9
  _DWORD *v8; // rcx
  __int16 *v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  int v12; // xmm1_4
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  float v16; // xmm0_4

  if ( pActor )
  {
    iIndex = camera->iIndex;
    if ( iIndex >= 0 && pActor->baseAnime.iMotionID >= 0 )
    {
      pModel = pActor->pModel;
      if ( pModel )
      {
        m_pCamera = pModel->m_pCamera;
        if ( m_pCamera )
        {
          if ( m_pCamera->m_usCameraCount > iIndex )
          {
            CameraOffsetData::Reset(&this->offset);
            *v8 = 4;
            *(_DWORD *)(v7 + 232) = *((_DWORD *)v9 + 1);
            *(_DWORD *)(v7 + 240) = 0;
            *(_DWORD *)(v7 + 236) = *(_DWORD *)(v10 + 412);
            *(_QWORD *)(v7 + 224) = v10;
            *(_DWORD *)(v7 + 244) = *v9;
            *(_DWORD *)(v7 + 248) = *((_DWORD *)v9 + 6);
            v11 = *((_DWORD *)v9 + 3);
            v12 = *((_DWORD *)v9 + 5);
            *(_DWORD *)(v7 + 196) = *((_DWORD *)v9 + 4);
            *(_DWORD *)(v7 + 192) = v11;
            *(_DWORD *)(v7 + 200) = v12;
            *(_DWORD *)(v7 + 184) = (int)(float)(*((float *)v9 + 2) * 65536.0);
            v13 = *(int *)(v7 + 232);
            v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 224) + 104i64) + 8568i64);
            v15 = *(_QWORD *)(v14 + 176);
            if ( v15 && (int)v13 >= 0 && (int)v13 < *(_DWORD *)(v14 + 184) )
              v16 = *(float *)(112 * v13 + v15 + 24);
            else
              v16 = 0.0;
            *(_DWORD *)(v7 + 188) = (int)(float)((float)(v16 - 1.0) * 65536.0);
          }
        }
      }
    }
  }
}

void __fastcall CameraControl::RequestMotionCameraSync(
        CameraControl *this,
        Actor *pActor,
        const CharaActionData::Camera *camera)
{
  int iIndex; // eax
  OGLModel *pModel; // rcx
  OGLCamera *m_pCamera; // r10
  _DWORD *v7; // rcx
  _DWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // xmm1_4
  int v12; // eax

  if ( pActor )
  {
    iIndex = camera->iIndex;
    if ( iIndex >= 0 && pActor->baseAnime.iMotionID >= 0 )
    {
      pModel = pActor->pModel;
      if ( pModel )
      {
        m_pCamera = pModel->m_pCamera;
        if ( m_pCamera )
        {
          if ( m_pCamera->m_usCameraCount > iIndex )
          {
            CameraOffsetData::Reset(&this->offset);
            *v7 = 3;
            *(_DWORD *)(v9 + 232) = v8[1];
            *(_DWORD *)(v9 + 240) = *(_DWORD *)(v10 + 516);
            *(_DWORD *)(v9 + 236) = *(_DWORD *)(v10 + 520);
            *(_QWORD *)(v9 + 224) = v10;
            *(_DWORD *)(v9 + 244) = *(__int16 *)v8;
            *(_DWORD *)(v9 + 248) = v8[6];
            v11 = v8[5];
            v12 = v8[3];
            *(_DWORD *)(v9 + 196) = v8[4];
            *(_DWORD *)(v9 + 200) = v11;
            *(_DWORD *)(v9 + 192) = v12;
          }
        }
      }
    }
  }
}

void __fastcall CameraControl::RequestMoveCamera(
        CameraControl *this,
        Actor *pActor,
        const CharaActionData::Camera *camera,
        int moveCalcType)
{
  CAMERA_TYPE type; // eax
  float z; // eax
  __int64 v6; // xmm0_8
  float v7; // eax
  __int64 v8; // xmm0_8
  float v9; // eax
  float v10; // xmm1_4
  float x; // eax
  bool v12; // zf

  if ( pActor )
  {
    type = this->offset.type;
    if ( type != STAND_GUARD || this->offset.xCount.value || this->offset.pActor == pActor )
    {
      if ( (unsigned int)(type - 3) > 2 )
      {
        z = this->vPos.z;
        *(_QWORD *)&this->offset.vStart.x = *(_QWORD *)&this->vPos.x;
        v6 = *(_QWORD *)&this->vLook.x;
        this->offset.vStart.z = z;
        v7 = this->vLook.z;
        *(_QWORD *)&this->offset.vStartLook.x = v6;
        this->offset.vStartLook.z = v7;
      }
      v8 = *(_QWORD *)&this->vUp.x;
      v9 = this->vUp.z;
      this->offset.iMoveCalcType = moveCalcType;
      *(_QWORD *)&this->offset.vStartUp.x = v8;
      this->offset.vStartUp.z = v9;
      this->offset.iActMotionFileID = 0;
      this->offset.type = STAND_GUARD;
      this->offset.iActMotionID = pActor->iActNo;
      this->offset.pActor = pActor;
      this->offset.iOffsetType = camera->iOffsetBase;
      this->offset.iOptionFlag = camera->iOptionFlag;
      v10 = camera->z;
      x = camera->x;
      this->offset.vOffBase.y = camera->y;
      this->offset.vOffBase.z = v10;
      this->offset.vOffBase.x = x;
      v12 = (camera->iOptionFlag & 0x20) == 0;
      this->offset.vOffLookBase.z = -50.0;
      if ( v12 )
      {
        *(_QWORD *)&this->offset.vOffLookBase.x = 0i64;
      }
      else
      {
        this->offset.vOffLookBase.x = 0.0;
        this->offset.vOffLookBase.y = 1.0;
      }
      this->offset.xCount.value = 0;
      this->offset.xMax.value = (int)(float)(camera->fFrame * 65536.0);
      this->offset.iFlipCount = 0;
      this->offset.bNonStop = 0;
    }
    else
    {
      CameraOffsetData::Reset(&this->offset);
    }
  }
}

void __fastcall CameraControl::RequestMoveCameraOut(CameraControl *this, int count, int moveCalcType)
{
  __int64 v3; // xmm0_8
  float z; // eax
  __int64 v5; // xmm0_8
  float v6; // eax

  if ( count >= 1 && this->offset.type == STAND_GUARD )
  {
    this->offset.type = CROUCH_GUARD;
    this->offset.iMoveCalcType = moveCalcType;
    this->offset.xCount.value = 0;
    this->offset.xMax.value = count << 16;
    *(_QWORD *)&this->offset.vStart.x = *(_QWORD *)&this->vPos.x;
    v3 = *(_QWORD *)&this->vLook.x;
    *(_QWORD *)&this->offset.iOffsetType = 0i64;
    z = this->vPos.z;
    *(_QWORD *)&this->offset.vStartLook.x = v3;
    v5 = *(_QWORD *)&this->vUp.x;
    this->offset.vStart.z = z;
    this->offset.vStartLook.z = this->vLook.z;
    v6 = this->vUp.z;
    *(_QWORD *)&this->offset.vStartUp.x = v5;
    this->offset.vStartUp.z = v6;
    this->offset.bNonStop = 0;
  }
  else
  {
    CameraOffsetData::Reset(&this->offset);
  }
}

void __fastcall CameraControl::RequestQuakeCamera(
        CameraControl *this,
        const CharaAttackData::HitQuakeCameraData *quakeData)
{
  int iFrame; // eax
  float y; // xmm1_4
  float z; // xmm2_4
  float x; // xmm0_4
  unsigned int v6; // er8

  iFrame = quakeData->iFrame;
  if ( iFrame > 0 )
  {
    if ( quakeData->iPresetID )
    {
      v6 = quakeData->iPresetID - 1;
      if ( v6 <= 8 )
        CameraControl::RequestQuakeCamera(this, iFrame, v6);
    }
    else
    {
      y = quakeData->y;
      z = quakeData->z;
      x = quakeData->x;
      *(_QWORD *)&this->quake.vOff.x = 0i64;
      *(_QWORD *)&this->quake.vOff.z = 0i64;
      *(_QWORD *)&this->quake.vQuakeBase.y = 0i64;
      *(_QWORD *)&this->quake.iFlipCount = 0i64;
      this->quake.bNonStop = 0;
      this->quake.xMax.value = iFrame << 16;
      this->quake.vQuakeBase.x = x;
      LODWORD(this->quake.vQuakeBase.y) = LODWORD(y) ^ _xmm;
      this->quake.vQuakeBase.z = z;
    }
  }
}

void __fastcall CameraControl::RequestQuakeCamera(CameraControl *this, int count, int priset)
{
  switch ( priset )
  {
    case 0:
      if ( count > 0 )
      {
        *(_QWORD *)&this->quake.vOff.x = 0i64;
        *(_QWORD *)&this->quake.vOff.z = 0i64;
        *(_QWORD *)&this->quake.vQuakeBase.y = 0i64;
        *(_QWORD *)&this->quake.iFlipCount = 0i64;
        this->quake.bNonStop = 0;
        this->quake.xMax.value = count << 16;
        this->quake.vQuakeBase.x = 0.0;
        this->quake.vQuakeBase.y = -0.30000001;
        this->quake.vQuakeBase.z = 0.0;
      }
      break;
    case 1:
      if ( count > 0 )
      {
        *(_QWORD *)&this->quake.vOff.x = 0i64;
        *(_QWORD *)&this->quake.vOff.z = 0i64;
        *(_QWORD *)&this->quake.vQuakeBase.y = 0i64;
        *(_QWORD *)&this->quake.iFlipCount = 0i64;
        this->quake.bNonStop = 0;
        this->quake.xMax.value = count << 16;
        this->quake.vQuakeBase.x = 0.0;
        this->quake.vQuakeBase.y = -0.5;
        this->quake.vQuakeBase.z = 0.0;
      }
      break;
    case 2:
      if ( count > 0 )
      {
        *(_QWORD *)&this->quake.vOff.x = 0i64;
        *(_QWORD *)&this->quake.vOff.z = 0i64;
        *(_QWORD *)&this->quake.vQuakeBase.y = 0i64;
        *(_QWORD *)&this->quake.iFlipCount = 0i64;
        this->quake.bNonStop = 0;
        this->quake.xMax.value = count << 16;
        this->quake.vQuakeBase.x = 0.0;
        this->quake.vQuakeBase.y = -0.69999999;
        this->quake.vQuakeBase.z = 0.0;
      }
      break;
    case 3:
      if ( count > 0 )
      {
        *(_QWORD *)&this->quake.vOff.x = 0i64;
        *(_QWORD *)&this->quake.vOff.z = 0i64;
        *(_QWORD *)&this->quake.vQuakeBase.y = 0i64;
        *(_QWORD *)&this->quake.iFlipCount = 0i64;
        this->quake.bNonStop = 0;
        this->quake.xMax.value = count << 16;
        this->quake.vQuakeBase.x = 0.30000001;
        this->quake.vQuakeBase.y = -0.0;
        this->quake.vQuakeBase.z = 0.0;
      }
      break;
    case 4:
      if ( count > 0 )
      {
        *(_QWORD *)&this->quake.vOff.x = 0i64;
        *(_QWORD *)&this->quake.vOff.z = 0i64;
        *(_QWORD *)&this->quake.vQuakeBase.y = 0i64;
        *(_QWORD *)&this->quake.iFlipCount = 0i64;
        this->quake.bNonStop = 0;
        this->quake.xMax.value = count << 16;
        this->quake.vQuakeBase.x = 0.5;
        this->quake.vQuakeBase.y = -0.0;
        this->quake.vQuakeBase.z = 0.0;
      }
      break;
    case 5:
      if ( count > 0 )
      {
        *(_QWORD *)&this->quake.vOff.x = 0i64;
        *(_QWORD *)&this->quake.vOff.z = 0i64;
        *(_QWORD *)&this->quake.vQuakeBase.y = 0i64;
        *(_QWORD *)&this->quake.iFlipCount = 0i64;
        this->quake.bNonStop = 0;
        this->quake.xMax.value = count << 16;
        this->quake.vQuakeBase.x = 0.69999999;
        this->quake.vQuakeBase.y = -0.0;
        this->quake.vQuakeBase.z = 0.0;
      }
      break;
    case 6:
      if ( count > 0 )
      {
        *(_QWORD *)&this->quake.vOff.x = 0i64;
        *(_QWORD *)&this->quake.vOff.z = 0i64;
        *(_QWORD *)&this->quake.vQuakeBase.y = 0i64;
        *(_QWORD *)&this->quake.iFlipCount = 0i64;
        this->quake.bNonStop = 0;
        this->quake.xMax.value = count << 16;
        this->quake.vQuakeBase.x = 0.2;
        this->quake.vQuakeBase.y = -0.2;
        this->quake.vQuakeBase.z = 0.0;
      }
      break;
    case 7:
      if ( count > 0 )
      {
        *(_QWORD *)&this->quake.vOff.x = 0i64;
        *(_QWORD *)&this->quake.vOff.z = 0i64;
        *(_QWORD *)&this->quake.vQuakeBase.y = 0i64;
        *(_QWORD *)&this->quake.iFlipCount = 0i64;
        this->quake.bNonStop = 0;
        this->quake.xMax.value = count << 16;
        this->quake.vQuakeBase.x = 0.34999999;
        this->quake.vQuakeBase.y = -0.34999999;
        this->quake.vQuakeBase.z = 0.0;
      }
      break;
    case 8:
      if ( count > 0 )
      {
        *(_QWORD *)&this->quake.vOff.x = 0i64;
        *(_QWORD *)&this->quake.vOff.z = 0i64;
        *(_QWORD *)&this->quake.vQuakeBase.y = 0i64;
        *(_QWORD *)&this->quake.iFlipCount = 0i64;
        this->quake.bNonStop = 0;
        this->quake.xMax.value = count << 16;
        this->quake.vQuakeBase.x = 0.5;
        this->quake.vQuakeBase.y = -0.5;
        this->quake.vQuakeBase.z = 0.0;
      }
      break;
  }
}

void __fastcall CameraControl::RequestQuakeCamera(CameraControl *this, int count, float x, float y, float z)
{
  if ( count > 0 )
  {
    *(_QWORD *)&this->quake.vOff.x = 0i64;
    *(_QWORD *)&this->quake.vOff.z = 0i64;
    *(_QWORD *)&this->quake.vQuakeBase.y = 0i64;
    *(_QWORD *)&this->quake.iFlipCount = 0i64;
    this->quake.bNonStop = 0;
    this->quake.xMax.value = count << 16;
    this->quake.vQuakeBase.x = x;
    LODWORD(this->quake.vQuakeBase.y) = LODWORD(y) ^ _xmm;
    this->quake.vQuakeBase.z = z;
  }
}

void __fastcall CameraControl::RequestWinnersCamera(CameraControl *this, Actor *pActor, int count)
{
  float z; // eax
  __int64 v4; // xmm0_8
  float v5; // eax
  float v6; // eax

  if ( pActor )
  {
    if ( (unsigned int)(this->offset.type - 3) > 2 )
    {
      z = this->vPos.z;
      *(_QWORD *)&this->offset.vStart.x = *(_QWORD *)&this->vPos.x;
      v4 = *(_QWORD *)&this->vLook.x;
      this->offset.vStart.z = z;
      v5 = this->vLook.z;
      *(_QWORD *)&this->offset.vStartLook.x = v4;
      this->offset.vStartLook.z = v5;
    }
    v6 = this->vUp.z;
    *(_QWORD *)&this->offset.vStartUp.x = *(_QWORD *)&this->vUp.x;
    this->offset.vStartUp.z = v6;
    this->offset.iActMotionFileID = 0;
    this->offset.type = STAND_GUARD;
    this->offset.iMoveCalcType = 1;
    this->offset.iActMotionID = -1;
    this->offset.pActor = pActor;
    this->offset.iOffsetType = 1;
    this->offset.iOptionFlag = 16;
    this->offset.vOffBase.x = 0.0;
    this->offset.vOffBase.y = 12.5;
    *(_QWORD *)&this->offset.vOffBase.z = 1112670208i64;
    this->offset.vOffLookBase.y = 1.0;
    this->offset.vOffLookBase.z = -50.0;
    this->offset.xCount.value = 0;
    this->offset.xMax.value = 1966080;
    this->offset.iFlipCount = 0;
    this->offset.bNonStop = 0;
  }
}

void __fastcall CameraOffsetData::Reset(CameraOffsetData *this)
{
  *(_QWORD *)&this->type = 0i64;
  *(_QWORD *)&this->vStart.y = 0i64;
  *(_QWORD *)&this->vStartLook.x = 0i64;
  *(_QWORD *)&this->vStartLook.z = 0i64;
  *(_QWORD *)&this->vStartUp.y = 0i64;
  *(_QWORD *)&this->vEnd.x = 0i64;
  *(_QWORD *)&this->vEnd.z = 0i64;
  *(_QWORD *)&this->vEndLook.y = 0i64;
  *(_QWORD *)&this->xCount.value = 0i64;
  *(_QWORD *)&this->vOffBase.x = 0i64;
  *(_QWORD *)&this->vOffBase.z = 0i64;
  *(_QWORD *)&this->vOffLookBase.y = 0i64;
  this->iFlipCount = 0;
  this->pActor = 0i64;
  *(_QWORD *)&this->iCameraID = 0i64;
  *(_QWORD *)&this->iActMotionFileID = 0i64;
  *(_QWORD *)&this->iOptionFlag = 0i64;
  *(_QWORD *)this->mView.m = 1065353216i64;
  this->mView.m[4] = 0.0;
  *(_QWORD *)&this->mView.m[8] = 0i64;
  *(_QWORD *)&this->mView.m[12] = 0i64;
  *(_QWORD *)&this->mView.m[5] = 1065353216i64;
  *(_QWORD *)&this->mView.m[2] = 0i64;
  *(_QWORD *)&this->mView.m[10] = 1065353216i64;
  this->mView.m[14] = 0.0;
  this->mView.m[7] = 0.0;
  this->mView.m[15] = 1.0;
  *(_QWORD *)this->mProj.m = 1065353216i64;
  this->mProj.m[4] = 0.0;
  *(_QWORD *)&this->mProj.m[8] = 0i64;
  *(_QWORD *)&this->mProj.m[12] = 0i64;
  *(_QWORD *)&this->mProj.m[5] = 1065353216i64;
  *(_QWORD *)&this->mProj.m[2] = 0i64;
  *(_QWORD *)&this->mProj.m[10] = 1065353216i64;
  this->mProj.m[14] = 0.0;
  this->mProj.m[7] = 0.0;
  this->mProj.m[15] = 1.0;
  *(_QWORD *)this->mBillboard.m = 1065353216i64;
  this->mBillboard.m[4] = 0.0;
  *(_QWORD *)&this->mBillboard.m[8] = 0i64;
  *(_QWORD *)&this->mBillboard.m[12] = 0i64;
  *(_QWORD *)&this->mBillboard.m[5] = 1065353216i64;
  *(_QWORD *)&this->mBillboard.m[2] = 0i64;
  *(_QWORD *)&this->mBillboard.m[10] = 1065353216i64;
  this->mBillboard.m[14] = 0.0;
  this->mBillboard.m[7] = 0.0;
  this->mBillboard.m[15] = 1.0;
  this->bNonStop = 0;
}

void __fastcall CameraControl::_addOffset(CameraControl *this, OGLVec3 *off, const Actor *pActor)
{
  float x; // xmm0_4

  off->y = this->offset.vOffBase.y + off->y;
  off->z = this->offset.vOffBase.z + off->z;
  if ( (this->offset.iOptionFlag & 4) != 0 || !pActor )
  {
    x = this->offset.vOffBase.x;
  }
  else
  {
    x = this->offset.vOffBase.x;
    if ( pActor->iCAngle )
    {
      off->x = COERCE_FLOAT(LODWORD(x) ^ _xmm) + off->x;
      return;
    }
  }
  off->x = x + off->x;
}

void __fastcall CameraControl::_calcCamMatrix(CameraControl *this)
{
  CAMERA_TYPE type; // ecx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int value; // ecx
  int v11; // edx
  float v12; // xmm6_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float *v15; // rcx
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // eax
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm3_4
  float v27; // xmm1_4
  CAMERA_TYPE v28; // ecx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  float fNear; // xmm3_4
  float fAspect; // xmm2_4
  float v35; // xmm6_4
  float v36; // xmm2_4
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm2_4
  OGLQuat q2; // [rsp+30h] [rbp-A8h] BYREF
  OGLQuat q1; // [rsp+40h] [rbp-98h] BYREF
  OGLQuat q; // [rsp+50h] [rbp-88h] BYREF
  OGLMatrix mIn; // [rsp+60h] [rbp-78h] BYREF

  type = this->offset.type;
  if ( (unsigned int)(type - 3) > 1 )
  {
    if ( type == CATCH_DAMAGE )
    {
      value = this->offset.xCount.value;
      v11 = this->offset.xMax.value;
      memset(&mIn, 0, sizeof(mIn));
      v12 = (float)((float)((float)(unsigned __int16)value * 0.000015258789) + (float)(value >> 16))
          / (float)((float)((float)(unsigned __int16)v11 * 0.000015258789) + (float)(v11 >> 16));
      OGLMatrix::lookAt(&mIn, &this->vPos, &this->vLook, &this->vUp);
      OGLQuat::matrixToQuaternion(&q2, &mIn);
      OGLQuat::matrixToQuaternion(&q1, &this->offset.mView);
      OGLQuat::slerp(&q, &q1, &q2, v12, 1.0);
      OGLMatrix::rotationQuaternion(&this->mView, &q);
      v13 = this->offset.mView.m[12];
      v14 = this->offset.mView.m[13];
      v16 = mIn.m[12] - v13;
      this->mBillboard.m[0] = *v15;
      this->mBillboard.m[1] = this->mView.m[4];
      this->mBillboard.m[2] = this->mView.m[8];
      this->mBillboard.m[4] = this->mView.m[1];
      v17 = (float)(v16 * v12) + v13;
      v18 = mIn.m[13] - v14;
      this->mBillboard.m[5] = this->mView.m[5];
      v19 = this->mView.m[9];
      this->mBillboard.m[3] = 0.0;
      this->mView.m[12] = v17;
      v20 = this->offset.mView.m[14];
      this->mBillboard.m[6] = v19;
      this->mBillboard.m[7] = 0.0;
      v21 = (float)(v18 * v12) + v14;
      v22 = mIn.m[14] - v20;
      this->mView.m[13] = v21;
      this->mView.m[14] = (float)(v22 * v12) + v20;
      this->mBillboard.m[8] = this->mView.m[2];
      this->mBillboard.m[9] = this->mView.m[6];
      this->mBillboard.m[10] = this->mView.m[10];
      *(_QWORD *)&this->mBillboard.m[11] = 0i64;
      *(_QWORD *)&this->mBillboard.m[13] = 0i64;
      this->mBillboard.m[15] = 1.0;
      v23 = (float)((float)((float)(unsigned __int16)this->offset.xCount.value * 0.000015258789)
                  + (float)(this->offset.xCount.value >> 16))
          / (float)((float)((float)(unsigned __int16)this->offset.xMax.value * 0.000015258789)
                  + (float)(this->offset.xMax.value >> 16));
      this->offset.vStart.x = (float)((float)(this->vPos.x - this->offset.vEnd.x) * v23) + this->offset.vEnd.x;
      v24 = (float)((float)(this->vPos.y - this->offset.vEnd.y) * v23) + this->offset.vEnd.y;
      this->offset.vStart.y = v24;
      v25 = (float)((float)(this->vPos.z - this->offset.vEnd.z) * v23) + this->offset.vEnd.z;
      this->offset.vStart.z = v25;
      v26 = v25 - this->mView.m[10];
      v27 = v24 - this->mView.m[6];
      this->offset.vStartLook.x = this->offset.vStart.x - this->mView.m[2];
      this->offset.vStartLook.z = v26;
      this->offset.vStartLook.y = v27;
    }
    else
    {
      *(_QWORD *)this->mView.m = 1065353216i64;
      this->mView.m[4] = 0.0;
      *(_QWORD *)&this->mView.m[8] = 0i64;
      *(_QWORD *)&this->mView.m[12] = 0i64;
      *(_QWORD *)&this->mView.m[5] = 1065353216i64;
      *(_QWORD *)&this->mView.m[2] = 0i64;
      *(_QWORD *)&this->mView.m[10] = 1065353216i64;
      this->mView.m[14] = 0.0;
      this->mView.m[7] = 0.0;
      this->mView.m[15] = 1.0;
      OGLMatrix::setViewTrans(&this->mView, &this->mBillboard, &this->vPos, &this->vLook, &this->vUp);
    }
  }
  else
  {
    v3 = *(_OWORD *)&this->offset.mView.m[4];
    *(_OWORD *)this->mView.m = *(_OWORD *)this->offset.mView.m;
    v4 = *(_OWORD *)&this->offset.mView.m[8];
    *(_OWORD *)&this->mView.m[4] = v3;
    v5 = *(_OWORD *)&this->offset.mView.m[12];
    *(_OWORD *)&this->mView.m[8] = v4;
    v6 = *(_OWORD *)this->offset.mBillboard.m;
    *(_OWORD *)&this->mView.m[12] = v5;
    v7 = *(_OWORD *)&this->offset.mBillboard.m[4];
    *(_OWORD *)this->mBillboard.m = v6;
    v8 = *(_OWORD *)&this->offset.mBillboard.m[8];
    *(_OWORD *)&this->mBillboard.m[4] = v7;
    v9 = *(_OWORD *)&this->offset.mBillboard.m[12];
    *(_OWORD *)&this->mBillboard.m[8] = v8;
    *(_OWORD *)&this->mBillboard.m[12] = v9;
  }
  v28 = this->offset.type;
  if ( (unsigned int)(v28 - 3) > 1 )
  {
    fNear = this->fNear;
    fAspect = this->fAspect;
    if ( v28 == CATCH_DAMAGE )
    {
      v35 = (float)((float)((float)(unsigned __int16)this->offset.xCount.value * 0.000015258789)
                  + (float)(this->offset.xCount.value >> 16))
          / (float)((float)((float)(unsigned __int16)this->offset.xMax.value * 0.000015258789)
                  + (float)(this->offset.xMax.value >> 16));
      OGLMatrix::perspectiveFov(&this->mProj, this->fPerseAngle, fAspect, fNear, this->fFar);
      v36 = this->offset.mProj.m[5];
      v37 = this->mProj.m[5] - v36;
      this->mProj.m[0] = (float)((float)(this->mProj.m[0] - this->offset.mProj.m[0]) * v35) + this->offset.mProj.m[0];
      v38 = this->offset.mProj.m[10];
      v39 = (float)(v37 * v35) + v36;
      v40 = this->offset.mProj.m[14];
      this->mProj.m[5] = v39;
      this->mProj.m[10] = (float)((float)(this->mProj.m[10] - v38) * v35) + v38;
      this->mProj.m[14] = (float)((float)(this->mProj.m[14] - v40) * v35) + v40;
      this->fProjBlendValue = (float)(v35 * this->fProjBlendBase) + 0.0;
    }
    else
    {
      OGLMatrix::perspectiveFov(&this->mProj, this->fPerseAngle, fAspect, fNear, this->fFar);
      this->fProjBlendValue = this->fProjBlendBase;
    }
  }
  else
  {
    v29 = *(_OWORD *)this->offset.mProj.m;
    this->fProjBlendValue = 0.0;
    v30 = *(_OWORD *)&this->offset.mProj.m[4];
    *(_OWORD *)this->mProj.m = v29;
    v31 = *(_OWORD *)&this->offset.mProj.m[8];
    *(_OWORD *)&this->mProj.m[4] = v30;
    v32 = *(_OWORD *)&this->offset.mProj.m[12];
    *(_OWORD *)&this->mProj.m[8] = v31;
    *(_OWORD *)&this->mProj.m[12] = v32;
  }
}

