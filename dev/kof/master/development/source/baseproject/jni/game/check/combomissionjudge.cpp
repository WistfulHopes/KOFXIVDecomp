#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.cpp"

void BattleSystem::ComboMissionJudge::SetMission(const ComboMissionData::MissionData * pData); // 0x1400D6350
void BattleSystem::ComboMissionJudge::Dispose(); // 0x1400D64C0
void BattleSystem::ComboMissionJudge::Update(); // 0x1400D6540
bool <lambda_0be486fa3843522d5945685a42f0c86c>::operator()(const ComboMissionData::ComboMissionTermData * pData, BattleSystem::ComboMissionJudge::TermClearInfo * pInfo); // 0x1400D6650
class BattleSystem::ComboMissionJudge::Update::__l7::<lambda_0be486fa3843522d5945685a42f0c86c>
{
public:
	bool operator()(const ComboMissionData::ComboMissionTermData *, BattleSystem::ComboMissionJudge::TermClearInfo *);
	<lambda_0be486fa3843522d5945685a42f0c86c>(BattleSystem::ComboMissionJudge::Update::__l7::<lambda_0be486fa3843522d5945685a42f0c86c> &);
	<lambda_0be486fa3843522d5945685a42f0c86c>();
	<lambda_0be486fa3843522d5945685a42f0c86c>(BattleSystem::ComboMissionJudge *);
private:
	BattleSystem::ComboMissionJudge * __this; // 0x0
public:
	BattleSystem::ComboMissionJudge::Update::__l7::<lambda_0be486fa3843522d5945685a42f0c86c> & operator=(const BattleSystem::ComboMissionJudge::Update::__l7::<lambda_0be486fa3843522d5945685a42f0c86c> &);
};
std::piecewise_construct_t std::piecewise_construct; // 0x14089B292
BattleSystem::ComboMissionJudge::TermClearInfo::TermClearInfo(); // 0x140098470
void BattleSystem::ComboMissionJudge::Reset(); // 0x1400D6730
void BattleSystem::ComboMissionJudge::RecvAttackHitEvent(long atkID, bool bOption); // 0x1400D67B0
class BattleSystem::ComboMissionJudge::RecvAttackHitEvent::__l2::<lambda_b958084a852301d3fe39ce4b086e56e7>
{
public:
	bool operator()(const long, const bool, const ComboMissionData::ComboMissionTermData *, BattleSystem::ComboMissionJudge::TermClearInfo *);
private:
	static bool <lambda_invoker_cdecl>(const long, const bool, const ComboMissionData::ComboMissionTermData *, BattleSystem::ComboMissionJudge::TermClearInfo *);
	typedef char16_t(*<lambda_typedef_cdecl>)(const long, const bool, const ComboMissionData::ComboMissionTermData *, BattleSystem::ComboMissionJudge::TermClearInfo *);
public:
	bool(*)(const long, const bool, const ComboMissionData::ComboMissionTermData *, BattleSystem::ComboMissionJudge::TermClearInfo *) operator bool (__cdecl *)(const int,const bool,const struct ComboMissionData::ComboMissionTermData *,struct BattleSystem::ComboMissionJudge::TermClearInfo *)();
private:
	static bool <lambda_invoker_vectorcall>(const long, const bool, const ComboMissionData::ComboMissionTermData *, BattleSystem::ComboMissionJudge::TermClearInfo *);
	typedef char16_t(*<lambda_typedef_vectorcall>)(const long, const bool, const ComboMissionData::ComboMissionTermData *, BattleSystem::ComboMissionJudge::TermClearInfo *);
public:
	bool(*)(const long, const bool, const ComboMissionData::ComboMissionTermData *, BattleSystem::ComboMissionJudge::TermClearInfo *) operator bool (__vectorcall *)(const int,const bool,const struct ComboMissionData::ComboMissionTermData *,struct BattleSystem::ComboMissionJudge::TermClearInfo *)();
	<lambda_b958084a852301d3fe39ce4b086e56e7>(BattleSystem::ComboMissionJudge::RecvAttackHitEvent::__l2::<lambda_b958084a852301d3fe39ce4b086e56e7> &);
	<lambda_b958084a852301d3fe39ce4b086e56e7>();
	BattleSystem::ComboMissionJudge::RecvAttackHitEvent::__l2::<lambda_b958084a852301d3fe39ce4b086e56e7> & operator=(const BattleSystem::ComboMissionJudge::RecvAttackHitEvent::__l2::<lambda_b958084a852301d3fe39ce4b086e56e7> &);
};
bool BattleSystem::ComboMissionJudge::CheckBaseCommandTerm(const ComboMissionData::ComboMissionTermParts * pParts, short & count); // 0x1400D6930
class BattleSystem::ComboMissionJudge::CheckBaseCommandTerm::__l2::<lambda_23c72332f2237fa9c5764c7fa6806e04>
{
public:
	bool operator()(long);
	<lambda_23c72332f2237fa9c5764c7fa6806e04>(BattleSystem::ComboMissionJudge::CheckBaseCommandTerm::__l2::<lambda_23c72332f2237fa9c5764c7fa6806e04> &);
	<lambda_23c72332f2237fa9c5764c7fa6806e04>();
	<lambda_23c72332f2237fa9c5764c7fa6806e04>(BattleSystem::ComboMissionJudge *);
private:
	BattleSystem::ComboMissionJudge * __this; // 0x0
public:
	BattleSystem::ComboMissionJudge::CheckBaseCommandTerm::__l2::<lambda_23c72332f2237fa9c5764c7fa6806e04> & operator=(const BattleSystem::ComboMissionJudge::CheckBaseCommandTerm::__l2::<lambda_23c72332f2237fa9c5764c7fa6806e04> &);
};
bool BattleSystem::ComboMissionJudge::CheckCharaCommandTerm(const ComboMissionData::ComboMissionTermParts * pParts, short & count); // 0x1400D7400
bool BattleSystem::ComboMissionJudge::CheckActionIDTerm(const ComboMissionData::ComboMissionTermParts * pParts, short & count); // 0x1400D74C0
bool BattleSystem::ComboMissionJudge::CheckExtraStateTerm(const ComboMissionData::ComboMissionTermParts * pParts, short & count); // 0x1400D7550
bool BattleSystem::ComboMissionJudge::CheckShotEvade(); // 0x1400D76C0
void <lambda_2b20d5a249ad0a034eb74da899096286>::operator()(Actor & actor); // 0x1400D77E0
class BattleSystem::ComboMissionJudge::CheckShotEvade::__l2::<lambda_2b20d5a249ad0a034eb74da899096286>
{
public:
	void operator()(Actor &);
	<lambda_2b20d5a249ad0a034eb74da899096286>(BattleSystem::ComboMissionJudge::CheckShotEvade::__l2::<lambda_2b20d5a249ad0a034eb74da899096286> &);
	<lambda_2b20d5a249ad0a034eb74da899096286>();
	<lambda_2b20d5a249ad0a034eb74da899096286>(bool &, const BattleSystem::ComboMissionJudge *);
private:
	bool & bOK; // 0x0
	const BattleSystem::ComboMissionJudge * __this; // 0x8
public:
	BattleSystem::ComboMissionJudge::CheckShotEvade::__l2::<lambda_2b20d5a249ad0a034eb74da899096286> & operator=(const BattleSystem::ComboMissionJudge::CheckShotEvade::__l2::<lambda_2b20d5a249ad0a034eb74da899096286> &);
};//decompilation failure at 14089B292!
void __fastcall BattleSystem::ComboMissionJudge::TermClearInfo::TermClearInfo(
        std::unique_ptr<Collision::HitRectList> *this)
{
  this->_Mypair._Myval2 = 0i64;
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

char __fastcall lambda_0be486fa3843522d5945685a42f0c86c_::operator()(
        const ComboMissionData::ComboMissionTermData *pData,
        BattleSystem::ComboMissionJudge::TermClearInfo *pInfo,
        __int64 a3)
{
  const ComboMissionData::ComboMissionTermParts *v3; // rbx
  int v4; // edi
  int iTermType; // eax
  int v9; // eax
  int v10; // eax
  bool v11; // al

  v3 = *(const ComboMissionData::ComboMissionTermParts **)&pInfo->bClear;
  v4 = 0;
  if ( SLODWORD(pInfo->pCount._Mypair._Myval2) <= 0 )
    return *(_BYTE *)(a3 + 8);
  while ( 1 )
  {
    iTermType = v3->iTermType;
    if ( iTermType )
    {
      v9 = iTermType - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 != 2 )
            goto LABEL_11;
          v11 = BattleSystem::ComboMissionJudge::CheckExtraStateTerm(
                  *(BattleSystem::ComboMissionJudge **)&pData->iTermPartsCount,
                  v3,
                  (__int16 *)(*(_QWORD *)a3 + 2i64 * v4));
        }
        else
        {
          v11 = BattleSystem::ComboMissionJudge::CheckActionIDTerm(
                  *(BattleSystem::ComboMissionJudge **)&pData->iTermPartsCount,
                  v3,
                  (__int16 *)(*(_QWORD *)a3 + 2i64 * v4));
        }
      }
      else
      {
        v11 = BattleSystem::ComboMissionJudge::CheckCharaCommandTerm(
                *(BattleSystem::ComboMissionJudge **)&pData->iTermPartsCount,
                v3,
                (__int16 *)(*(_QWORD *)a3 + 2i64 * v4));
      }
    }
    else
    {
      v11 = BattleSystem::ComboMissionJudge::CheckBaseCommandTerm(
              *(BattleSystem::ComboMissionJudge **)&pData->iTermPartsCount,
              v3,
              (__int16 *)(*(_QWORD *)a3 + 2i64 * v4));
    }
    *(_BYTE *)(a3 + 8) = v11;
LABEL_11:
    if ( *(_BYTE *)(a3 + 8) )
      return 1;
    ++v4;
    ++v3;
    if ( v4 >= SLODWORD(pInfo->pCount._Mypair._Myval2) )
      return *(_BYTE *)(a3 + 8);
  }
}

void __fastcall lambda_2b20d5a249ad0a034eb74da899096286_::operator()(Actor *actor, const Actor *a2)
{
  __int64 v4; // rdi
  int v5; // ebx
  bool v6; // zf
  Actor_vtbl *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // xmm0_4
  unsigned int v10; // xmm2_4

  if ( !actor->SetSpeedDataSub )
  {
    v4 = *(_QWORD *)(*(_QWORD *)&actor->iPriority + 8i64);
    v5 = a2->GetPlayerID((Actor *)a2);
    if ( v5 != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 1000i64))(v4) )
    {
      v6 = a2->GetActorType((Actor *)a2) == SHOT;
      v7 = a2->__vftable;
      if ( v6 )
      {
        if ( !((unsigned __int8 (__fastcall *)(const Actor *))v7[1].GetActionPlayRateFix)(a2)
          && ((int (__fastcall *)(const Actor *))a2->__vftable[1].GetActionDataInfo)(a2) >= 1
          && a2->GetActionSubCategoryID((Actor *)a2, a2->iActNo, 0) == 1 )
        {
LABEL_11:
          if ( a2->iActionCounter > 1 )
          {
            v8 = *(_QWORD *)(*(_QWORD *)&actor->iPriority + 8i64);
            *(float *)&v9 = a2->vPos.x - *(float *)(v8 + 144);
            *(float *)&v10 = a2->vPosPrev.x - *(float *)(v8 + 156);
            LOBYTE(actor->SetSpeedDataSub) = (__PAIR64__(*(float *)&v9 > 0.0, v9) - COERCE_UNSIGNED_INT(0.0)) >> 32 != (__PAIR64__(*(float *)&v10 > 0.0, v10) - COERCE_UNSIGNED_INT(0.0)) >> 32;
          }
        }
      }
      else if ( v7->GetActorType((Actor *)a2) == OPTION
             && a2->GetActionSubCategoryID((Actor *)a2, a2->iActNo, 0) == 1
             && BattleSystem::GetAttackGuardType(0i64, a2, a2->iActNo) )
      {
        goto LABEL_11;
      }
    }
  }
}

bool __fastcall BattleSystem::ComboMissionJudge::CheckActionIDTerm(
        BattleSystem::ComboMissionJudge *this,
        const ComboMissionData::ComboMissionTermParts *pParts,
        __int16 *count)
{
  ActorChara *pPlayer; // rcx

  pPlayer = this->pPlayer;
  if ( pParts->type.iData[0] != pPlayer->iActNo || pPlayer->IsActionDataChanged(pPlayer) )
  {
    if ( pParts->iConcludType == 1 )
      *count = 0;
    return 0;
  }
  else
  {
    if ( pParts->iConcludType == 1 || this->pPlayer->iActNo != this->pPlayer->iActNoPrev )
      ++*count;
    return pParts->iConcludParam <= (unsigned __int16)*count;
  }
}

bool __fastcall BattleSystem::ComboMissionJudge::CheckBaseCommandTerm(
        BattleSystem::ComboMissionJudge *this,
        const ComboMissionData::ComboMissionTermParts *pParts,
        __int16 *count)
{
  bool v3; // r10
  CommandCheck *v7; // rdi
  __int64 pSetting; // rax
  ActorChara *v9; // rcx
  const CommandData::Setting *v10; // rdx
  bool result; // al
  CommandCheck *v12; // rdi
  CommandCheck *v13; // rdi
  CommandCheck *v14; // rdi
  CommandCheck *v15; // rdi
  __int64 v16; // rax
  ActorChara *pPlayer; // rcx
  const CommandData::Setting *pCmdSet; // rdx
  CommandCheck *v19; // rdi
  __int64 v20; // rax
  ActorChara *v21; // rcx
  const CommandData::Setting *v22; // rdx
  CommandCheck *v23; // rdi
  __int64 v24; // rax
  ActorChara *v25; // rcx
  const CommandData::Setting *v26; // rdx
  CommandCheck *v27; // rdi
  CommandCheck *v28; // rdi
  __int64 v29; // rax
  ActorChara *v30; // rcx
  const CommandData::Setting *v31; // rdx
  CommandCheck *v32; // rdi
  CommandCheck *v33; // rdi
  CommandCheck *v34; // rdi
  CommandCheck *v35; // rdi
  __int64 v36; // rax
  ActorChara *v37; // rcx
  const CommandData::Setting *v38; // rdx
  bool v39; // di
  CommandCheck *v40; // rsi
  __int64 v41; // rax
  CommandCheck *v42; // rdi
  __int64 v43; // rax
  ActorChara *v44; // rcx
  const CommandData::Setting *v45; // rdx
  CommandCheck *v46; // rsi
  ActorChara *v47; // rcx
  const CommandData::Setting *v48; // rdx
  bool v49; // r10
  CommandCheck *v50; // rdi
  CommandCheck *v51; // rdi
  CommandCheck *v52; // rdi
  CommandCheck *v53; // rdi
  CommandCheck *v54; // rdi
  CommandCheck *v55; // rdi
  CommandCheck *v56; // rdi
  CommandCheck *v57; // rdi
  CommandCheck *v58; // rdi
  CommandCheck *v59; // rdi
  CommandCheck *v60; // rdi
  __int64 v61; // rax
  ActorChara *v62; // rcx
  const CommandData::Setting *v63; // rdx
  CommandCheck *v64; // rdi
  CommandCheck *v65; // rdi
  __int64 v66; // rax
  ActorChara *v67; // rcx
  const CommandData::Setting *v68; // rdx
  CommandCheck *v69; // rdi
  CommandCheck *v70; // rdi
  __int64 v71; // rax
  ActorChara *v72; // rcx
  const CommandData::Setting *v73; // rdx
  CommandCheck *v74; // rdi
  __int64 v75; // rax
  ActorChara *v76; // rcx
  const CommandData::Setting *v77; // rdx

  v3 = 0;
  switch ( pParts->type.iData[0] )
  {
    case 0:
      v7 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( !v7->pCmdDat
        || !v7->pCmdDat->CheckFileID((CharaFileBase *)v7->pCmdDat)
        || v7->pCmdDat->dataHeader.iCommandCount <= 0 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)v7->pCmdDat->pSetting;
      goto LABEL_7;
    case 1:
      v12 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( !v12->pCmdDat
        || !v12->pCmdDat->CheckFileID((CharaFileBase *)v12->pCmdDat)
        || v12->pCmdDat->dataHeader.iCommandCount <= 1 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v12->pCmdDat->pSetting[1];
      goto LABEL_7;
    case 2:
      v13 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( !v13->pCmdDat
        || !v13->pCmdDat->CheckFileID((CharaFileBase *)v13->pCmdDat)
        || v13->pCmdDat->dataHeader.iCommandCount <= 2 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v13->pCmdDat->pSetting[2];
      goto LABEL_7;
    case 3:
      v14 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( !v14->pCmdDat
        || !v14->pCmdDat->CheckFileID((CharaFileBase *)v14->pCmdDat)
        || v14->pCmdDat->dataHeader.iCommandCount <= 3 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v14->pCmdDat->pSetting[3];
      goto LABEL_7;
    case 4:
      v15 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( v15->pCmdDat
        && v15->pCmdDat->CheckFileID((CharaFileBase *)v15->pCmdDat)
        && v15->pCmdDat->dataHeader.iCommandCount > 4 )
      {
        v16 = (__int64)&v15->pCmdDat->pSetting[4];
      }
      else
      {
        v16 = 0i64;
      }
      pPlayer = this->pPlayer;
      pCmdSet = pPlayer->cmdInfo.entry.pCmdSet;
      if ( pCmdSet && (const CommandData::Setting *)v16 == pCmdSet && !pPlayer->bHitStopFreeze )
        goto LABEL_191;
      v19 = pPlayer->GetCommonCommandCheck(pPlayer);
      if ( v19->pCmdDat
        && v19->pCmdDat->CheckFileID((CharaFileBase *)v19->pCmdDat)
        && v19->pCmdDat->dataHeader.iCommandCount > 46 )
      {
        v20 = (__int64)&v19->pCmdDat->pSetting[46];
      }
      else
      {
        v20 = 0i64;
      }
      v21 = this->pPlayer;
      v22 = v21->cmdInfo.entry.pCmdSet;
      if ( v22 )
      {
        if ( (const CommandData::Setting *)v20 == v22 && !v21->bHitStopFreeze )
          goto LABEL_191;
      }
      v23 = v21->GetCommonCommandCheck(v21);
      if ( v23->pCmdDat
        && v23->pCmdDat->CheckFileID((CharaFileBase *)v23->pCmdDat)
        && v23->pCmdDat->dataHeader.iCommandCount > 5 )
      {
        v24 = (__int64)&v23->pCmdDat->pSetting[5];
      }
      else
      {
        v24 = 0i64;
      }
      v25 = this->pPlayer;
      v26 = v25->cmdInfo.entry.pCmdSet;
      if ( v26 )
      {
        if ( (const CommandData::Setting *)v24 == v26 && !v25->bHitStopFreeze )
          goto LABEL_191;
      }
      v27 = v25->GetCommonCommandCheck(v25);
      if ( !v27->pCmdDat
        || !v27->pCmdDat->CheckFileID((CharaFileBase *)v27->pCmdDat)
        || v27->pCmdDat->dataHeader.iCommandCount <= 6 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v27->pCmdDat->pSetting[6];
      goto LABEL_7;
    case 5:
      v28 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( v28->pCmdDat
        && v28->pCmdDat->CheckFileID((CharaFileBase *)v28->pCmdDat)
        && v28->pCmdDat->dataHeader.iCommandCount > 7 )
      {
        v29 = (__int64)&v28->pCmdDat->pSetting[7];
      }
      else
      {
        v29 = 0i64;
      }
      v30 = this->pPlayer;
      v31 = v30->cmdInfo.entry.pCmdSet;
      if ( v31 && (const CommandData::Setting *)v29 == v31 && !v30->bHitStopFreeze )
        goto LABEL_191;
      v32 = v30->GetCommonCommandCheck(v30);
      if ( !v32->pCmdDat
        || !v32->pCmdDat->CheckFileID((CharaFileBase *)v32->pCmdDat)
        || v32->pCmdDat->dataHeader.iCommandCount <= 47 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v32->pCmdDat->pSetting[47];
      goto LABEL_7;
    case 6:
      v33 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( !v33->pCmdDat
        || !v33->pCmdDat->CheckFileID((CharaFileBase *)v33->pCmdDat)
        || v33->pCmdDat->dataHeader.iCommandCount <= 16 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v33->pCmdDat->pSetting[16];
      goto LABEL_7;
    case 7:
      v34 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( !v34->pCmdDat
        || !v34->pCmdDat->CheckFileID((CharaFileBase *)v34->pCmdDat)
        || v34->pCmdDat->dataHeader.iCommandCount <= 17 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v34->pCmdDat->pSetting[17];
      goto LABEL_7;
    case 8:
      v35 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( v35->pCmdDat
        && v35->pCmdDat->CheckFileID((CharaFileBase *)v35->pCmdDat)
        && v35->pCmdDat->dataHeader.iCommandCount > 18 )
      {
        v36 = (__int64)&v35->pCmdDat->pSetting[18];
      }
      else
      {
        v36 = 0i64;
      }
      v37 = this->pPlayer;
      v38 = v37->cmdInfo.entry.pCmdSet;
      v39 = v38 && (const CommandData::Setting *)v36 == v38 && !v37->bHitStopFreeze;
      v40 = v37->GetCommonCommandCheck(v37);
      if ( !v40->pCmdDat
        || !v40->pCmdDat->CheckFileID((CharaFileBase *)v40->pCmdDat)
        || v40->pCmdDat->dataHeader.iCommandCount <= 40 )
      {
        goto LABEL_102;
      }
      v41 = (__int64)&v40->pCmdDat->pSetting[40];
      goto LABEL_103;
    case 9:
      v42 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( v42->pCmdDat
        && v42->pCmdDat->CheckFileID((CharaFileBase *)v42->pCmdDat)
        && v42->pCmdDat->dataHeader.iCommandCount > 19 )
      {
        v43 = (__int64)&v42->pCmdDat->pSetting[19];
      }
      else
      {
        v43 = 0i64;
      }
      v44 = this->pPlayer;
      v45 = v44->cmdInfo.entry.pCmdSet;
      v39 = v45 && (const CommandData::Setting *)v43 == v45 && !v44->bHitStopFreeze;
      v46 = v44->GetCommonCommandCheck(v44);
      if ( v46->pCmdDat
        && v46->pCmdDat->CheckFileID((CharaFileBase *)v46->pCmdDat)
        && v46->pCmdDat->dataHeader.iCommandCount > 41 )
      {
        v41 = (__int64)&v46->pCmdDat->pSetting[41];
      }
      else
      {
LABEL_102:
        v41 = 0i64;
      }
LABEL_103:
      v47 = this->pPlayer;
      v48 = v47->cmdInfo.entry.pCmdSet;
      v49 = v48 && (const CommandData::Setting *)v41 == v48 && !v47->bHitStopFreeze;
      v3 = v39 || v49;
      if ( !v3 )
        goto LABEL_11;
      return pParts->iConcludParam <= (unsigned __int16)++*count;
    case 0xA:
      v50 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( !v50->pCmdDat
        || !v50->pCmdDat->CheckFileID((CharaFileBase *)v50->pCmdDat)
        || v50->pCmdDat->dataHeader.iCommandCount <= 20 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v50->pCmdDat->pSetting[20];
      goto LABEL_7;
    case 0xB:
      v51 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( !v51->pCmdDat
        || !v51->pCmdDat->CheckFileID((CharaFileBase *)v51->pCmdDat)
        || v51->pCmdDat->dataHeader.iCommandCount <= 21 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v51->pCmdDat->pSetting[21];
      goto LABEL_7;
    case 0xC:
      v52 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( !v52->pCmdDat
        || !v52->pCmdDat->CheckFileID((CharaFileBase *)v52->pCmdDat)
        || v52->pCmdDat->dataHeader.iCommandCount <= 22 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v52->pCmdDat->pSetting[22];
      goto LABEL_7;
    case 0xD:
      v53 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( !v53->pCmdDat
        || !v53->pCmdDat->CheckFileID((CharaFileBase *)v53->pCmdDat)
        || v53->pCmdDat->dataHeader.iCommandCount <= 23 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v53->pCmdDat->pSetting[23];
      goto LABEL_7;
    case 0xE:
      v54 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( !v54->pCmdDat
        || !v54->pCmdDat->CheckFileID((CharaFileBase *)v54->pCmdDat)
        || v54->pCmdDat->dataHeader.iCommandCount <= 24 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v54->pCmdDat->pSetting[24];
      goto LABEL_7;
    case 0xF:
      v55 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( !v55->pCmdDat
        || !v55->pCmdDat->CheckFileID((CharaFileBase *)v55->pCmdDat)
        || v55->pCmdDat->dataHeader.iCommandCount <= 25 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v55->pCmdDat->pSetting[25];
      goto LABEL_7;
    case 0x10:
      v56 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( !v56->pCmdDat
        || !v56->pCmdDat->CheckFileID((CharaFileBase *)v56->pCmdDat)
        || v56->pCmdDat->dataHeader.iCommandCount <= 26 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v56->pCmdDat->pSetting[26];
      goto LABEL_7;
    case 0x11:
      v57 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( !v57->pCmdDat
        || !v57->pCmdDat->CheckFileID((CharaFileBase *)v57->pCmdDat)
        || v57->pCmdDat->dataHeader.iCommandCount <= 27 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v57->pCmdDat->pSetting[27];
      goto LABEL_7;
    case 0x12:
      v58 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( !v58->pCmdDat
        || !v58->pCmdDat->CheckFileID((CharaFileBase *)v58->pCmdDat)
        || v58->pCmdDat->dataHeader.iCommandCount <= 28 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v58->pCmdDat->pSetting[28];
      goto LABEL_7;
    case 0x13:
      v59 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( !v59->pCmdDat
        || !v59->pCmdDat->CheckFileID((CharaFileBase *)v59->pCmdDat)
        || v59->pCmdDat->dataHeader.iCommandCount <= 29 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v59->pCmdDat->pSetting[29];
      goto LABEL_7;
    case 0x14:
      v60 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( v60->pCmdDat
        && v60->pCmdDat->CheckFileID((CharaFileBase *)v60->pCmdDat)
        && v60->pCmdDat->dataHeader.iCommandCount > 30 )
      {
        v61 = (__int64)&v60->pCmdDat->pSetting[30];
      }
      else
      {
        v61 = 0i64;
      }
      v62 = this->pPlayer;
      v63 = v62->cmdInfo.entry.pCmdSet;
      if ( v63 && (const CommandData::Setting *)v61 == v63 && !v62->bHitStopFreeze )
        goto LABEL_191;
      v64 = v62->GetCommonCommandCheck(v62);
      if ( !v64->pCmdDat
        || !v64->pCmdDat->CheckFileID((CharaFileBase *)v64->pCmdDat)
        || v64->pCmdDat->dataHeader.iCommandCount <= 48 )
      {
        goto LABEL_6;
      }
      pSetting = (__int64)&v64->pCmdDat->pSetting[48];
      goto LABEL_7;
    case 0x15:
      v65 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( v65->pCmdDat
        && v65->pCmdDat->CheckFileID((CharaFileBase *)v65->pCmdDat)
        && v65->pCmdDat->dataHeader.iCommandCount > 31 )
      {
        v66 = (__int64)&v65->pCmdDat->pSetting[31];
      }
      else
      {
        v66 = 0i64;
      }
      v67 = this->pPlayer;
      v68 = v67->cmdInfo.entry.pCmdSet;
      if ( v68 && (const CommandData::Setting *)v66 == v68 && !v67->bHitStopFreeze )
        goto LABEL_191;
      v69 = v67->GetCommonCommandCheck(v67);
      if ( v69->pCmdDat
        && v69->pCmdDat->CheckFileID((CharaFileBase *)v69->pCmdDat)
        && v69->pCmdDat->dataHeader.iCommandCount > 49 )
      {
        pSetting = (__int64)&v69->pCmdDat->pSetting[49];
      }
      else
      {
LABEL_6:
        pSetting = 0i64;
      }
LABEL_7:
      v9 = this->pPlayer;
      v10 = v9->cmdInfo.entry.pCmdSet;
      if ( v10 && (const CommandData::Setting *)pSetting == v10 && !v9->bHitStopFreeze )
      {
LABEL_191:
        result = pParts->iConcludParam <= (unsigned __int16)++*count;
      }
      else
      {
LABEL_10:
        v3 = 0;
LABEL_11:
        result = v3;
        if ( pParts->iConcludType == 1 )
          *count = 0;
      }
      break;
    case 0x16:
      v70 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( v70->pCmdDat
        && v70->pCmdDat->CheckFileID((CharaFileBase *)v70->pCmdDat)
        && v70->pCmdDat->dataHeader.iCommandCount > 32 )
      {
        v71 = (__int64)&v70->pCmdDat->pSetting[32];
      }
      else
      {
        v71 = 0i64;
      }
      v72 = this->pPlayer;
      v73 = v72->cmdInfo.entry.pCmdSet;
      if ( !v73 || (const CommandData::Setting *)v71 != v73 || v72->bHitStopFreeze )
        goto LABEL_10;
      this->bMaxModeCheck = 1;
      result = pParts->iConcludParam <= (unsigned __int16)++*count;
      break;
    case 0x17:
      v74 = this->pPlayer->GetCommonCommandCheck(this->pPlayer);
      if ( v74->pCmdDat
        && v74->pCmdDat->CheckFileID((CharaFileBase *)v74->pCmdDat)
        && v74->pCmdDat->dataHeader.iCommandCount > 42 )
      {
        v75 = (__int64)&v74->pCmdDat->pSetting[42];
      }
      else
      {
        v75 = 0i64;
      }
      v76 = this->pPlayer;
      v77 = v76->cmdInfo.entry.pCmdSet;
      if ( v77 && (const CommandData::Setting *)v75 == v77 && !v76->bHitStopFreeze )
        goto LABEL_191;
      goto LABEL_10;
    default:
      goto LABEL_11;
  }
  return result;
}

bool __fastcall BattleSystem::ComboMissionJudge::CheckCharaCommandTerm(
        BattleSystem::ComboMissionJudge *this,
        const ComboMissionData::ComboMissionTermParts *pParts,
        __int16 *count)
{
  __int64 v3; // rdi
  CommandCheck *v7; // r14
  __int64 v8; // rcx
  ActorChara *pPlayer; // rax
  const CommandData::Setting *pCmdSet; // rdx
  bool result; // al

  v3 = pParts->type.iData[0];
  v7 = this->pPlayer->GetCharaCommandCheck(this->pPlayer);
  if ( v7->pCmdDat
    && v7->pCmdDat->CheckFileID((CharaFileBase *)v7->pCmdDat)
    && (int)v3 >= 0
    && (int)v3 < v7->pCmdDat->dataHeader.iCommandCount )
  {
    v8 = (__int64)&v7->pCmdDat->pSetting[v3];
  }
  else
  {
    v8 = 0i64;
  }
  pPlayer = this->pPlayer;
  pCmdSet = pPlayer->cmdInfo.entry.pCmdSet;
  if ( pCmdSet && (const CommandData::Setting *)v8 == pCmdSet && !pPlayer->bHitStopFreeze )
  {
    return pParts->iConcludParam <= (unsigned __int16)++*count;
  }
  else
  {
    result = 0;
    if ( pParts->iConcludType == 1 )
      *count = 0;
  }
  return result;
}

__int64 __fastcall BattleSystem::ComboMissionJudge::CheckExtraStateTerm(
        BattleSystem::ComboMissionJudge *this,
        const ComboMissionData::ComboMissionTermParts *pParts,
        __int16 *count)
{
  unsigned __int8 v3; // si
  _BOOL8 v7; // r8
  _BOOL8 v8; // r8
  bool v9; // al
  ActorChara *pPlayer; // rcx

  v3 = 0;
  switch ( pParts->type.iData[0] )
  {
    case 0:
      if ( this->pPlayer->IsGuardValid(this->pPlayer) )
      {
        LOBYTE(v7) = 1;
        if ( !this->pPlayer->GetActionCategoryID(this->pPlayer, this->pPlayer->iActReserveNo, v7) )
          return pParts->iConcludParam <= (unsigned __int16)++*count;
      }
      return v3;
    case 1:
      if ( this->pPlayer->IsGuardValid(this->pPlayer) )
      {
        LOBYTE(v8) = 1;
        if ( this->pPlayer->GetActionCategoryID(this->pPlayer, this->pPlayer->iActReserveNo, v8) == 1 )
          return pParts->iConcludParam <= (unsigned __int16)++*count;
      }
      return v3;
    case 2:
      v9 = this->pEnemy->IsGuardCrash(this->pEnemy);
      goto LABEL_17;
    case 3:
      if ( this->bShotEvadeOK )
      {
        pPlayer = this->pPlayer;
        if ( (unsigned int)(pPlayer->iActorStat - 27) > 1 )
        {
          if ( pPlayer->IsDamaged(pPlayer) )
            this->bShotEvadeOK = 0;
          else
            return pParts->iConcludParam <= (unsigned __int16)++*count;
        }
      }
      else
      {
        this->bShotEvadeOK = BattleSystem::ComboMissionJudge::CheckShotEvade(this);
      }
      return v3;
    case 4:
      v9 = this->pPlayer->IsSuperCancel(this->pPlayer);
      goto LABEL_17;
    case 5:
      v9 = this->pPlayer->IsAdvancedCancel(this->pPlayer);
      goto LABEL_17;
    case 6:
      v9 = this->pPlayer->IsClimaxCancel(this->pPlayer);
LABEL_17:
      if ( v9 )
        return pParts->iConcludParam <= (unsigned __int16)++*count;
      return v3;
    default:
      return v3;
  }
}

char __fastcall BattleSystem::ComboMissionJudge::CheckShotEvade(BattleSystem::ComboMissionJudge *this)
{
  BattleSystem::BattleController *v2; // rax
  BattleSystem::BattleController *v3; // rax
  __int128 v4; // [rsp+20h] [rbp-49h]
  std::function<void __cdecl(Actor &)> v5; // [rsp+38h] [rbp-31h] BYREF
  std::function<void __cdecl(Actor &)> v6; // [rsp+78h] [rbp+Fh] BYREF
  char v7; // [rsp+D0h] [rbp+67h] BYREF
  std::function<void __cdecl(Actor &)> *v8; // [rsp+D8h] [rbp+6Fh]
  BattleSystem::BattleController *v9; // [rsp+E0h] [rbp+77h]

  v7 = 0;
  if ( (unsigned int)(this->pPlayer->iActorStat - 27) > 1 )
    return 0;
  *(_QWORD *)&v4 = &v7;
  *((_QWORD *)&v4 + 1) = this;
  v8 = &v5;
  v5._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<_lambda_2b20d5a249ad0a034eb74da899096286_,std::allocator<int>,void,Actor &>::`vftable';
  *(_OWORD *)&v5._Mystorage._Ptrs[1] = v4;
  v5._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v5;
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v9 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v9);
    BattleSystem::BattleController::instance = v2;
  }
  ActionSystem::FuncCallRequest(&v2->actSystem, (Actor *)6, &v5);
  if ( v7 )
    return 1;
  v8 = &v6;
  v6._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<_lambda_2b20d5a249ad0a034eb74da899096286_,std::allocator<int>,void,Actor &>::`vftable';
  *(_OWORD *)&v6._Mystorage._Ptrs[1] = v4;
  v6._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v6;
  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v9 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v9);
    BattleSystem::BattleController::instance = v3;
  }
  ActionSystem::FuncCallRequest(&v3->actSystem, (Actor *)5, &v6);
  return v7;
}

void __fastcall BattleSystem::ComboMissionJudge::Dispose(BattleSystem::ComboMissionJudge *this)
{
  BattleSystem::ComboMissionJudge::TermClearInfo *Myval2; // rcx
  bool *p_bClear; // rbx

  this->pMissionData = 0i64;
  this->pPlayer = 0i64;
  this->pEnemy = 0i64;
  *(_QWORD *)&this->iCompleteCount = 0i64;
  Myval2 = this->pClearInfo._Mypair._Myval2;
  this->pClearInfo._Mypair._Myval2 = 0i64;
  if ( Myval2 )
  {
    p_bClear = &Myval2[-1].bClear;
    `eh vector destructor iterator'(
      Myval2,
      0x10ui64,
      *(_QWORD *)&Myval2[-1].bClear,
      (void (__fastcall *)(void *))BattleSystem::ComboMissionJudge::TermClearInfo::~TermClearInfo);
    operator delete[](p_bClear, 16i64 * *(_QWORD *)p_bClear + 8);
  }
  *(_DWORD *)&this->bOneTermClear = 0;
}

void __fastcall BattleSystem::BattleController::GetActionSystem()
{
  BattleSystem::BattleController *v0; // rax
  BattleSystem::BattleController *v1; // [rsp+40h] [rbp+8h]

  if ( !BattleSystem::BattleController::instance )
  {
    v1 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v1);
    BattleSystem::BattleController::instance = v0;
  }
}

void __fastcall BattleSystem::ComboMissionJudge::RecvAttackHitEvent(
        BattleSystem::ComboMissionJudge *this,
        int atkID,
        bool bOption)
{
  const ComboMissionData::MissionData *pMissionData; // rdx
  __int64 iTermClearCount; // r8
  int v8; // er11
  int v9; // ebp
  __int64 v10; // r10
  BattleSystem::ComboMissionJudge::TermClearInfo *v11; // rsi
  ComboMissionData::ComboMissionTermData *pTermData; // rcx
  __int64 v13; // rdx
  __int64 iTermPartsCount; // r8
  ComboMissionData::ComboMissionTermParts *pTermParts; // rax
  bool v16; // zf
  ComboMissionData::ComboMissionTermData *v17; // rax
  __int64 v18; // rcx
  BattleSystem::ComboMissionJudge::TermClearInfo *v19; // r10
  int v20; // er8
  ComboMissionData::ComboMissionTermParts *v21; // rdx
  bool v22; // zf
  __int64 v23; // rcx

  pMissionData = this->pMissionData;
  if ( pMissionData )
  {
    if ( pMissionData->settingData.iCompleteCount > this->iCompleteCount )
    {
      iTermClearCount = this->iTermClearCount;
      if ( (int)iTermClearCount < pMissionData->settingData.iTermCount )
      {
        v8 = 0;
        if ( pMissionData->settingData.iCompleteType == 1 )
        {
          v9 = 0;
          if ( pMissionData->settingData.iTermCount > 0 )
          {
            v10 = 0i64;
            do
            {
              v11 = &this->pClearInfo._Mypair._Myval2[v10];
              if ( !v11->bClear )
              {
                pTermData = pMissionData->pTermData;
                v13 = 0i64;
                iTermPartsCount = pTermData[v10].iTermPartsCount;
                pTermParts = pTermData[v10].pTermParts;
                if ( iTermPartsCount > 0 )
                {
                  while ( 1 )
                  {
                    v16 = bOption ? pTermParts->iTermType == 5 : pTermParts->iTermType == 3;
                    if ( v16 && pTermParts->type.iData[0] == atkID )
                      break;
                    ++v13;
                    ++pTermParts;
                    if ( v13 >= iTermPartsCount )
                      goto LABEL_18;
                  }
                  if ( pTermParts->iConcludParam <= ++v11->pCount._Mypair._Myval2[v13] )
                    this->pClearInfo._Mypair._Myval2[v10].bClear = 1;
                }
              }
LABEL_18:
              pMissionData = this->pMissionData;
              ++v9;
              ++v10;
            }
            while ( v9 < pMissionData->settingData.iTermCount );
          }
        }
        else
        {
          v17 = pMissionData->pTermData;
          v18 = iTermClearCount;
          v19 = &this->pClearInfo._Mypair._Myval2[iTermClearCount];
          v20 = v17[iTermClearCount].iTermPartsCount;
          v21 = v17[v18].pTermParts;
          if ( v20 > 0 )
          {
            while ( 1 )
            {
              v22 = bOption ? v21->iTermType == 5 : v21->iTermType == 3;
              if ( v22 && v21->type.iData[0] == atkID )
                break;
              ++v8;
              ++v21;
              if ( v8 >= v20 )
                return;
            }
            v23 = v8;
            if ( v21->iConcludParam <= ++v19->pCount._Mypair._Myval2[v23] )
              this->pClearInfo._Mypair._Myval2[this->iTermClearCount].bClear = 1;
          }
        }
      }
    }
  }
}

void __fastcall BattleSystem::ComboMissionJudge::Reset(BattleSystem::ComboMissionJudge *this)
{
  int v1; // esi
  __int64 v3; // rdi

  v1 = 0;
  if ( this->pMissionData->settingData.iTermCount > 0 )
  {
    v3 = 0i64;
    do
    {
      this->pClearInfo._Mypair._Myval2[v3].bClear = 0;
      memset(
        this->pClearInfo._Mypair._Myval2[v3].pCount._Mypair._Myval2,
        0,
        2i64 * this->pMissionData->pTermData[v3].iTermPartsCount);
      ++v3;
      ++v1;
    }
    while ( v1 < this->pMissionData->settingData.iTermCount );
  }
  this->iTermClearCount = 0;
  *(_WORD *)&this->bOneTermClear = 0;
  this->bShotEvadeOK = 0;
}

void __fastcall BattleSystem::ComboMissionJudge::SetMission(
        BattleSystem::ComboMissionJudge *this,
        const ComboMissionData::MissionData *pData)
{
  unsigned __int64 iTermCount; // rbp
  __int64 v5; // rax
  bool v6; // cf
  unsigned __int64 v7; // rax
  unsigned __int64 *v8; // rax
  int v9; // esi
  BattleSystem::ComboMissionJudge::TermClearInfo *v10; // rbx
  BattleSystem::ComboMissionJudge::TermClearInfo *Myval2; // rcx
  bool *p_bClear; // rbx
  __int64 v13; // rbx
  __int16 *v14; // rax
  BattleSystem::ComboMissionJudge::TermClearInfo *v15; // rcx
  __int16 *v16; // rdx

  BattleSystem::ComboMissionJudge::Dispose(this);
  this->pMissionData = pData;
  if ( pData )
  {
    iTermCount = pData->settingData.iTermCount;
    v5 = 16 * iTermCount;
    if ( !is_mul_ok(iTermCount, 0x10ui64) )
      v5 = -1i64;
    v6 = __CFADD__(v5, 8i64);
    v7 = v5 + 8;
    if ( v6 )
      v7 = -1i64;
    v8 = (unsigned __int64 *)operator new[](v7);
    v9 = 0;
    if ( v8 )
    {
      *v8 = iTermCount;
      v10 = (BattleSystem::ComboMissionJudge::TermClearInfo *)(v8 + 1);
      `eh vector constructor iterator'(
        v8 + 1,
        0x10ui64,
        iTermCount,
        (void (__fastcall *)(void *))BattleSystem::ComboMissionJudge::TermClearInfo::TermClearInfo,
        (void (__fastcall *)(void *))BattleSystem::ComboMissionJudge::TermClearInfo::~TermClearInfo);
    }
    else
    {
      v10 = 0i64;
    }
    Myval2 = this->pClearInfo._Mypair._Myval2;
    this->pClearInfo._Mypair._Myval2 = v10;
    if ( Myval2 )
    {
      p_bClear = &Myval2[-1].bClear;
      `eh vector destructor iterator'(
        Myval2,
        0x10ui64,
        *(_QWORD *)&Myval2[-1].bClear,
        (void (__fastcall *)(void *))BattleSystem::ComboMissionJudge::TermClearInfo::~TermClearInfo);
      operator delete[](p_bClear, 16i64 * *(_QWORD *)p_bClear + 8);
    }
    if ( this->pMissionData->settingData.iTermCount > 0 )
    {
      v13 = 0i64;
      do
      {
        this->pClearInfo._Mypair._Myval2[v13].bClear = 0;
        v14 = (__int16 *)operator new[](saturated_mul(this->pMissionData->pTermData[v13].iTermPartsCount, 2ui64));
        v15 = this->pClearInfo._Mypair._Myval2;
        v16 = v15[v13].pCount._Mypair._Myval2;
        v15[v13].pCount._Mypair._Myval2 = v14;
        if ( v16 )
          operator delete(v16, (unsigned __int64)v16);
        memset(
          this->pClearInfo._Mypair._Myval2[v13].pCount._Mypair._Myval2,
          0,
          2i64 * this->pMissionData->pTermData[v13].iTermPartsCount);
        ++v9;
        ++v13;
      }
      while ( v9 < this->pMissionData->settingData.iTermCount );
    }
  }
}

void __fastcall BattleSystem::ComboMissionJudge::Update(BattleSystem::ComboMissionJudge *this)
{
  const ComboMissionData::MissionData *pMissionData; // rcx
  __int64 iTermClearCount; // rax
  bool v4; // zf
  __int64 v5; // r8
  BattleSystem::ComboMissionJudge::TermClearInfo *v6; // rdx
  int v7; // eax
  const ComboMissionData::MissionData *v8; // rcx
  ComboMissionData::ComboMissionTermData pData; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&this->bOneTermClear = 0;
  pMissionData = this->pMissionData;
  if ( !pMissionData || pMissionData->settingData.iCompleteCount <= this->iCompleteCount )
    return;
  iTermClearCount = this->iTermClearCount;
  if ( (int)iTermClearCount < pMissionData->settingData.iTermCount )
  {
    v4 = pMissionData->settingData.iCompleteType == 1;
    *(_QWORD *)&pData.iTermPartsCount = this;
    if ( v4 )
    {
      v5 = iTermClearCount;
      v6 = (BattleSystem::ComboMissionJudge::TermClearInfo *)&pMissionData->pTermData[iTermClearCount];
      goto LABEL_16;
    }
    if ( !this->pEnemy->IsDamaged(this->pEnemy) )
    {
      if ( this->bMaxModeCheck )
        goto LABEL_12;
      v7 = this->iTermClearCount;
      if ( v7 )
      {
        if ( v7 > 0 )
        {
          BattleSystem::ComboMissionJudge::Reset(this);
          this->bComboTermFailed = 1;
        }
        goto LABEL_18;
      }
    }
    if ( !this->bMaxModeCheck )
    {
LABEL_15:
      v5 = this->iTermClearCount;
      v6 = (BattleSystem::ComboMissionJudge::TermClearInfo *)&this->pMissionData->pTermData[v5];
LABEL_16:
      if ( lambda_0be486fa3843522d5945685a42f0c86c_::operator()(
             &pData,
             v6,
             (__int64)&this->pClearInfo._Mypair._Myval2[v5]) )
      {
        ++this->iTermClearCount;
        this->bOneTermClear = 1;
      }
      goto LABEL_18;
    }
LABEL_12:
    if ( this->iTermClearCount != 1 || !this->pPlayer->IsClimaxMode(this->pPlayer) )
      this->bMaxModeCheck = 0;
    goto LABEL_15;
  }
LABEL_18:
  v8 = this->pMissionData;
  if ( this->iTermClearCount >= v8->settingData.iTermCount )
  {
    ++this->iCompleteCount;
    this->bOneTermClear = 0;
    if ( v8 )
    {
      if ( v8->settingData.iCompleteCount > this->iCompleteCount )
        BattleSystem::ComboMissionJudge::Reset(this);
    }
  }
}

std::_Func_base<void,Actor &> *__fastcall std::_Func_impl<_lambda_2b20d5a249ad0a034eb74da899096286_,std::allocator<int>,void,Actor &>::_Copy(
        std::_Func_impl<<lambda_2b20d5a249ad0a034eb74da899096286>,std::allocator<int>,void,Actor &> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<_lambda_2b20d5a249ad0a034eb74da899096286_,std::allocator<int>,void,Actor &>::`vftable';
    *(std::_Compressed_pair<std::allocator<int>,<lambda_2b20d5a249ad0a034eb74da899096286>,1> *)((char *)_Where + 8) = this->_Mypair;
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

void __fastcall std::_Func_impl<_lambda_2b20d5a249ad0a034eb74da899096286_,std::allocator<int>,void,Actor &>::_Do_call(
        std::_Func_impl<<lambda_2b20d5a249ad0a034eb74da899096286>,std::allocator<int>,void,Actor &> *this,
        Actor *<_Args_0>)
{
  lambda_2b20d5a249ad0a034eb74da899096286_::operator()((Actor *)&this->_Mypair, <_Args_0>);
}

std::_Align_type<double,64> *__fastcall __Get____Func_impl_U_unnamed_type_nothing___1__InstallGFxInterface_extension__YAXXZ_V__allocator_H_std__VValue_GFx_Scaleform__AEAVGFXIMovieContext_3_PEBV678_I_std__EEBAPEBXXZ(
        _Mtx_internal_imp_t *mtx)
{
  return &mtx->cs;
}

const type_info *__fastcall std::_Func_impl<_lambda_2b20d5a249ad0a034eb74da899096286_,std::allocator<int>,void,Actor &>::_Target_type(
        std::_Func_impl<<lambda_2b20d5a249ad0a034eb74da899096286>,std::allocator<int>,void,Actor &> *this)
{
  return (const type_info *)&_lambda_2b20d5a249ad0a034eb74da899096286_ `RTTI Type Descriptor';
}

