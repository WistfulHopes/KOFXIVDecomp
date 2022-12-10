#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstatecurve.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particletypestate/particletypestate.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectmanager/effecttaskmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E390
ParticleTypeState::ParticleTypeState(); // 0x140146B00
void ParticleTypeState::terminate(); // 0x140146D40
void ParticleTypeState::loadTexture(const char * filename, EffectTextureType texType); // 0x140146FA0
void ParticleTypeState::loadAppTexture(); // 0x1401471C0
void ParticleTypeState::loadFigureToCPUMem(const char * filename); // 0x140147260
void ParticleTypeState::loadFigureToGPUMem(const char * filename); // 0x140147A30
void ParticleTypeState::loadFigure(const char * filename); // 0x140147FC0
void ParticleTypeState::InitVertexBuffer(std::vector<ParticleData *,std::allocator<ParticleData *> > * ParticleData, EffectData * pEmitterData); // 0x14002E7C0
void ParticleTypeState::allocateVertexMemory(EffectUpdateArgument * pUpdateBufferArg); // 0x140147FD0
void ParticleTypeState::UpdateParticleTypeState(EffectUpdateBufferArgument * pUpdateBufferArg); // 0x140148100
bool ParticleTypeState::UpdateVertexBufferInstancing(EffectUpdateBufferArgument * pUpdateBufferArg); // 0x1401488F0
void ParticleTypeState::UpdateVertexBufferInBT(EffectUpdateBufferArgument * pUpdateBufferArg); // 0x140148910
long ParticleTypeState::GetAnimationNum(ParticleData * pParticleData, EffectData * pEmitterData, EffectTextureType texType); // 0x140148920
void ParticleTypeState::followCamera(ParticleData * pParticleData, OGLEffectMatrix * pBoneMat, EffectData * pEffectData); // 0x140148F60
void ParticleTypeState::rotationBillboard(ParticleData * pParticleData, OGLEffectMatrix * pBoneMat, EffectData * pEffectData); // 0x1401492B0
void ParticleTypeState::rotationAxisBillboard(ParticleData * pParticleData, OGLEffectMatrix * pBoneMat, EffectData * pEffectData, long axis); // 0x140149AF0
bool ParticleTypeState::RenderSettingInSt(EffectData * pEffectData); // 0x140149F30
bool ParticleTypeState::RenderSetting(EffectData * pEffectData, long * pRenderOpt, long * priority); // 0x140149F40
bool ParticleTypeState::SetRenderDataInSt(EffectData * pEffectData); // 0x14014B0D0
bool ParticleTypeState::SetRenderData(EffectData * pEffectData, long * renderOpt, float * zOffset, long * priority); // 0x14014BAF0
bool ParticleTypeState::RenderErrorCheck(EffectData * pEffectData, long renderOpt, float zOffset); // 0x14014BFB0
void ParticleTypeState::Render(EffectRenderArgument * pRenderArg); // 0x14014BFD0
void ParticleTypeState::setEmitterAndData(Effect * pParticleEmitter, EffectData * pParticleEmitterData); // 0x14014C130
void ParticleTypeState::setTexture(EffectTextureData * pEffectTextureData, EffectTextureType type, OGLTexture * setTexture); // 0x14014C140
OGLTexture * ParticleTypeState::getTexture(EffectTextureData * pEffectTextureData, EffectTextureType type); // 0x14014C1D0
void ParticleTypeState::setTexAnimeNum(ParticleData * pParticleData, EffectData * pEffectData, EffectInstancingData * instData); // 0x14014C290//decompilation failure at 14089E390!
void __fastcall ParticleTypeState::ParticleTypeState(ParticleTypeState *this)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  EffectMeshData *m_EffectMeshData; // rax
  int *m_IndexMemoryCount; // rax
  unsigned int **p_index; // rdx

  v1 = 2i64;
  this->__vftable = (ParticleTypeState_vtbl *)&ParticleTypeState::`vftable';
  v2 = 2i64;
  m_EffectMeshData = this->m_EffectMeshData;
  do
  {
    *(_QWORD *)m_EffectMeshData->worldMat.m = 0i64;
    *(_QWORD *)&m_EffectMeshData->worldMat.m[2] = 0i64;
    *(_QWORD *)&m_EffectMeshData->worldMat.m[4] = 0i64;
    *(_QWORD *)&m_EffectMeshData->worldMat.m[6] = 0i64;
    *(_QWORD *)&m_EffectMeshData->worldMat.m[8] = 0i64;
    *(_QWORD *)&m_EffectMeshData->worldMat.m[10] = 0i64;
    *(_QWORD *)&m_EffectMeshData->worldMat.m[12] = 0i64;
    *(_QWORD *)&m_EffectMeshData->worldMat.m[14] = 0i64;
    m_EffectMeshData->vertexCompBuffer = 0i64;
    m_EffectMeshData->vColor = 0i64;
    m_EffectMeshData->vTexCoord = 0i64;
    m_EffectMeshData->instancingBuffer = 0i64;
    m_EffectMeshData->index = 0i64;
    m_EffectMeshData->primitiveType = 0;
    *(_QWORD *)&m_EffectMeshData->instanceNum = 0i64;
    m_EffectMeshData->indexCount = 0;
    ++m_EffectMeshData;
    --v2;
  }
  while ( v2 );
  *(_QWORD *)this->m_EffectConstData.fillColor = 0i64;
  m_IndexMemoryCount = this->m_IndexMemoryCount;
  *(_QWORD *)&this->m_EffectConstData.fillColor[2] = 0i64;
  p_index = &this->m_EffectMeshData[0].index;
  *(_QWORD *)this->m_EffectConstData.distortionScale = 0i64;
  *(_QWORD *)&this->m_EffectConstData.actionZOffset = 0i64;
  *(_QWORD *)this->m_EffectConstData.posOffset = 0i64;
  this->m_EffectConstData.posOffset[2] = 0.0;
  *(_QWORD *)&this->m_EffectConstData.playerNum = 0i64;
  this->m_EffectConstData.bufferscale = 1.0;
  this->m_EffectConstData.uvColor1Size = 0i64;
  this->m_EffectConstData.uvColor2Size = 0i64;
  this->m_EffectConstData.uvAlpha1Size = 0i64;
  this->m_EffectConstData.uvAlpha2Size = 0i64;
  this->m_EffectConstData.uvNormalSize = 0i64;
  *(_QWORD *)this->m_EffectConstData.lightDiffuse = 0i64;
  *(_QWORD *)this->m_EffectConstData.lightPosition = 0i64;
  *(_QWORD *)this->m_EffectConstData.lightAttenuation = 0i64;
  *(_QWORD *)this->m_EffectConstData.lightIntensity = 0i64;
  *(_QWORD *)&this->m_EffectConstData.lightDiffuse[2] = 0i64;
  *(_QWORD *)&this->m_EffectConstData.lightPosition[2] = 0i64;
  *(_QWORD *)&this->m_EffectConstData.lightAttenuation[2] = 0i64;
  *(_QWORD *)&this->m_EffectConstData.lightIntensity[2] = 0i64;
  *(_QWORD *)&this->m_EffectConstData.influenceOfLight = 0i64;
  this->m_TextureData.ColorTexture1 = 0i64;
  this->m_TextureData.ColorTexture2 = 0i64;
  this->m_TextureData.AlphaTexture1 = 0i64;
  this->m_TextureData.AlphaTexture2 = 0i64;
  this->m_TextureData.NormalTexture = 0i64;
  this->m_TextureData.CharasDepthTex = 0i64;
  this->m_TextureData.Chara1DepthTex = 0i64;
  this->m_TextureData.Chara2DepthTex = 0i64;
  this->m_TextureData.StageDepthTex = 0i64;
  this->m_TextureData.DistortionChara1Tex = 0i64;
  this->m_TextureData.DistortionChara2Tex = 0i64;
  this->m_TextureData.DistortionStageTex = 0i64;
  this->m_TextureData.CharaBlurTex = 0i64;
  this->m_FutureTexture.ColorTexture1 = 0i64;
  this->m_FutureTexture.ColorTexture2 = 0i64;
  this->m_FutureTexture.AlphaTexture1 = 0i64;
  this->m_FutureTexture.AlphaTexture2 = 0i64;
  this->m_FutureTexture.NormalTexture = 0i64;
  this->m_FigureData = 0i64;
  this->uvAnimeNum = 0i64;
  do
  {
    *(p_index - 4) = 0i64;
    ++m_IndexMemoryCount;
    *p_index = 0i64;
    p_index += 21;
    *(m_IndexMemoryCount - 3) = 0;
    *(m_IndexMemoryCount - 1) = 0;
    --v1;
  }
  while ( v1 );
  this->vertex = 0i64;
  this->texCoord = 0i64;
  this->color = 0i64;
  this->m_prevBufferNum = -1;
  this->m_BillboardFlag = 0;
}

__int64 __fastcall ParticleTypeState::GetAnimationNum(
        ParticleTypeState *this,
        ParticleData *pParticleData,
        EffectData *pEmitterData,
        EffectTextureType texType)
{
  __int64 v4; // r12
  int v6; // edi
  DialogData *v7; // rcx
  int *v8; // rdx
  int v9; // er8
  int *v10; // rdx
  float *v11; // r9
  bool v12; // dl
  DialogData *v13; // rcx
  int *v14; // rdx
  int *v15; // rdx
  int v16; // ecx
  DialogData *Myfirst; // rcx
  int *v18; // rdx
  int *v19; // rdx
  float *v20; // r9
  DialogData *v21; // rcx
  int *v22; // rdx
  int *v23; // rdx
  float *v24; // r9
  DialogData *v25; // rcx
  int *v26; // rdx
  int *v27; // rdx
  float age; // xmm2_4
  float lifeLimit; // xmm1_4
  float v31; // xmm0_4
  unsigned int v32; // edx
  int v33; // ecx
  unsigned int v34; // edx
  int v35; // er8
  unsigned int v36; // esi
  int v37; // er9
  int v38; // er14
  int v39; // er8
  int v40; // er8
  int i; // er9
  unsigned __int64 v42; // r8
  char v43; // cl
  int v44; // edx
  int v45; // er9
  int v46; // eax

  v4 = texType;
  v6 = 1;
  if ( texType )
  {
    if ( texType != COLOR2_TEXTURE )
    {
      if ( texType == ALPHA1_TEXTURE )
      {
        Myfirst = pEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
        v18 = Myfirst[3].allComboIndexData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(Myfirst[3].allComboIndexData._Mypair._Myval2._Mylast - v18) <= 4 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v9 = v18[4];
        v19 = Myfirst[3].allButtonIndexData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(Myfirst[3].allButtonIndexData._Mypair._Myval2._Mylast - v19) <= 2 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v20 = Myfirst[3].allEditNumData._Mypair._Myval2._Myfirst;
        v12 = v19[2] != 0;
        if ( (unsigned __int64)(Myfirst[3].allEditNumData._Mypair._Myval2._Mylast - v20) <= 0x10 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v6 = (int)v20[16];
        if ( (unsigned __int64)(Myfirst[3].allEditNumData._Mypair._Myval2._Mylast - v20) <= 0x11 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v16 = (int)v20[17];
      }
      else
      {
        if ( texType == ALPHA2_TEXTURE )
        {
          v13 = pEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
          v14 = v13[4].allComboIndexData._Mypair._Myval2._Myfirst;
          if ( (unsigned __int64)(v13[4].allComboIndexData._Mypair._Myval2._Mylast - v14) <= 2 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v9 = v14[2];
          v15 = v13[4].allButtonIndexData._Mypair._Myval2._Myfirst;
          if ( (unsigned __int64)(v13[4].allButtonIndexData._Mypair._Myval2._Mylast - v15) <= 1 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v11 = v13[4].allEditNumData._Mypair._Myval2._Myfirst;
          v12 = v15[1] != 0;
          if ( (unsigned __int64)(v13[4].allEditNumData._Mypair._Myval2._Mylast - v11) <= 9 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v6 = (int)v11[9];
          if ( (unsigned __int64)(v13[4].allEditNumData._Mypair._Myval2._Mylast - v11) <= 0xA )
            std::_Xout_of_range("invalid vector<T> subscript");
        }
        else
        {
          if ( texType != NORMAL_TEXTURE )
            goto LABEL_36;
          v7 = pEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
          v8 = v7[3].allComboIndexData._Mypair._Myval2._Myfirst;
          if ( (unsigned __int64)(v7[3].allComboIndexData._Mypair._Myval2._Mylast - v8) <= 2 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v9 = v8[2];
          v10 = v7[3].allButtonIndexData._Mypair._Myval2._Myfirst;
          if ( (unsigned __int64)(v7[3].allButtonIndexData._Mypair._Myval2._Mylast - v10) <= 1 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v11 = v7[3].allEditNumData._Mypair._Myval2._Myfirst;
          v12 = v10[1] != 0;
          if ( (unsigned __int64)(v7[3].allEditNumData._Mypair._Myval2._Mylast - v11) <= 9 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v6 = (int)v11[9];
          if ( (unsigned __int64)(v7[3].allEditNumData._Mypair._Myval2._Mylast - v11) <= 0xA )
            std::_Xout_of_range("invalid vector<T> subscript");
        }
        v16 = (int)v11[10];
      }
      goto LABEL_31;
    }
    v21 = pEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v22 = v21[4].allComboIndexData._Mypair._Myval2._Myfirst;
    if ( !(v21[4].allComboIndexData._Mypair._Myval2._Mylast - v22) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v9 = *v22;
    v23 = v21[4].allButtonIndexData._Mypair._Myval2._Myfirst;
    if ( !(v21[4].allButtonIndexData._Mypair._Myval2._Mylast - v23) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v24 = v21[4].allEditNumData._Mypair._Myval2._Myfirst;
    v12 = *v23 != 0;
    if ( (unsigned __int64)(v21[4].allEditNumData._Mypair._Myval2._Mylast - v24) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v6 = (int)v24[2];
    if ( (unsigned __int64)(v21[4].allEditNumData._Mypair._Myval2._Mylast - v24) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
  }
  else
  {
    v25 = pEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v26 = v25[3].allComboIndexData._Mypair._Myval2._Myfirst;
    if ( !(v25[3].allComboIndexData._Mypair._Myval2._Mylast - v26) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v9 = *v26;
    v27 = v25[3].allButtonIndexData._Mypair._Myval2._Myfirst;
    if ( !(v25[3].allButtonIndexData._Mypair._Myval2._Mylast - v27) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v24 = v25[3].allEditNumData._Mypair._Myval2._Myfirst;
    v12 = *v27 != 0;
    if ( (unsigned __int64)(v25[3].allEditNumData._Mypair._Myval2._Mylast - v24) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v6 = (int)v24[2];
    if ( (unsigned __int64)(v25[3].allEditNumData._Mypair._Myval2._Mylast - v24) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
  }
  v16 = (int)v24[3];
LABEL_31:
  if ( !v9 )
  {
    if ( !v12 )
    {
      age = pParticleData->age;
      lifeLimit = (float)pParticleData->lifeLimit;
      if ( age < lifeLimit )
      {
        v31 = (float)((float)v6 * age) / lifeLimit;
        pParticleData->m_AnimationNum[v4] = (int)v31;
        return (unsigned int)(int)v31;
      }
      else
      {
        pParticleData->m_AnimationNum[v4] = v6 - 1;
        return (unsigned int)(v6 - 1);
      }
    }
LABEL_36:
    v32 = pParticleData->TexNum % v6;
    pParticleData->m_AnimationNum[v4] = v32;
    return v32;
  }
  if ( v12 )
  {
    v35 = (int)pParticleData->age;
    if ( !(v35 % v16) && pParticleData->m_OldAge[v4] != v35 )
    {
      v36 = 0;
      v37 = 0;
      pParticleData->m_OldAge[v4] = v35;
      v38 = 0;
      v39 = 0;
      if ( v6 <= 0 )
        goto LABEL_47;
      do
      {
        if ( ((0x80000000 >> (v39 & 0x1F)) & pParticleData->m_shuffleFlag[0][(unsigned __int64)(unsigned int)v39 >> 5]) != 0 )
        {
          v37 = 1;
          ++v38;
        }
        ++v39;
      }
      while ( v39 < v6 );
      if ( v37 )
      {
        v40 = rand() % v38;
      }
      else
      {
LABEL_47:
        for ( i = 0; i < v6; pParticleData->m_shuffleFlag[0][v42] |= 0x80000000 >> v43 )
        {
          v42 = (unsigned __int64)(unsigned int)i >> 5;
          v43 = i++ & 0x1F;
        }
        v44 = rand() % v6;
        v40 = v44;
        if ( v6 > 1 && v44 == pParticleData->m_AnimationNum[v4] )
        {
          do
            v40 = rand() % v6;
          while ( v40 == pParticleData->m_AnimationNum[v4] );
        }
      }
      v45 = -1;
      if ( v6 > 0 )
      {
        while ( 1 )
        {
          v46 = v45 + 1;
          if ( ((0x80000000 >> (v36 & 0x1F)) & pParticleData->m_shuffleFlag[0][(unsigned __int64)v36 >> 5]) == 0 )
            v46 = v45;
          v45 = v46;
          if ( v46 == v40 )
            break;
          if ( (int)++v36 >= v6 )
            return (unsigned int)pParticleData->m_AnimationNum[v4];
        }
        pParticleData->m_shuffleFlag[0][(unsigned __int64)v36 >> 5] &= ~(0x80000000 >> (v36 & 0x1F));
        pParticleData->m_AnimationNum[v4] = v36;
      }
    }
    return (unsigned int)pParticleData->m_AnimationNum[v4];
  }
  else
  {
    v33 = (int)(float)(pParticleData->age / (float)v16);
    pParticleData->m_AnimationNum[v4] = v33;
    v34 = (v33 + pParticleData->TexNum) % v6;
    pParticleData->m_AnimationNum[v4] = v34;
    return v34;
  }
}

OGLVec3 *__fastcall ActionSystem::GetCameraLook(ActionSystem *this, OGLVec3 *result)
{
  if ( this->bFreeCameraMode )
  {
    *result = this->freeCamera.vLook;
    return result;
  }
  else
  {
    if ( (unsigned int)(this->cameraCtrl.offset.type - 3) <= 2 )
      *result = this->cameraCtrl.offset.vStartLook;
    else
      *result = this->cameraCtrl.vLook;
    return result;
  }
}

OGLVec3 *__fastcall ActionSystem::GetCameraPos(ActionSystem *this, OGLVec3 *result)
{
  if ( this->bFreeCameraMode )
  {
    *result = this->freeCamera.vPos;
    return result;
  }
  else
  {
    if ( (unsigned int)(this->cameraCtrl.offset.type - 3) <= 2 )
      *result = this->cameraCtrl.offset.vStart;
    else
      *result = this->cameraCtrl.vPos;
    return result;
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall ParticleTypeState::Render(ParticleTypeState *this, EffectRenderArgument *pRenderArg)
{
  OGLRender *v4; // rbp
  __int64 v5; // r9
  EffectData *pEffectData; // rcx
  DialogData *Myfirst; // r8
  float *v8; // rcx

  if ( ((unsigned __int8 (__fastcall *)(ParticleTypeState *, EffectData *, _QWORD))this->RenderErrorCheck)(
         this,
         pRenderArg->pEffectData,
         (unsigned int)pRenderArg->renderOpt) )
  {
    v4 = *(OGLRender **)(*(_QWORD *)&AppMain::pApp + 80i64);
    if ( this->RenderSetting(this, pRenderArg->pEffectData, &pRenderArg->renderOpt, &pRenderArg->priority) )
    {
      v5 = *(int *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 2507504i64) + 2256i64);
      pEffectData = pRenderArg->pEffectData;
      Myfirst = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast - Myfirst) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v8 = Myfirst[2].allEditNumData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(Myfirst[2].allEditNumData._Mypair._Myval2._Mylast - v8) <= 4 )
        std::_Xout_of_range("invalid vector<T> subscript");
      LODWORD(this->m_EffectConstData.zOffset) = *((_DWORD *)v8 + 4) ^ _xmm;
      OGLRender::drawEffectIndex(v4, (BlendProjData *)(168 * v5), &this->m_TextureData, &this->m_EffectMeshData[v5]);
    }
  }
}

bool __fastcall ParticleTypeState::RenderErrorCheck(
        ParticleTypeState *this,
        EffectData *pEffectData,
        int renderOpt,
        float zOffset)
{
  return this->m_TextureData.ColorTexture1 && ((renderOpt & 0xE0) == 0 || this->m_TextureData.NormalTexture);
}

char __fastcall ParticleTypeState::RenderSetting(
        ParticleTypeState *this,
        EffectData *pEffectData,
        int *pRenderOpt,
        int *priority)
{
  std::vector<DialogData> *p_AllDialogData; // rdi
  DialogData *Myfirst; // rcx
  __int64 v9; // r13
  __int64 v10; // r10
  unsigned __int64 v11; // rdx
  int *v12; // rdx
  __int64 v13; // rax
  bool v14; // zf
  int v15; // edx
  DialogData *v16; // rax
  int *v17; // rdx
  unsigned __int64 v18; // rcx
  GLboolean v19; // cl
  int i; // esi
  OGLTexture *Texture; // r14
  int v22; // edx
  DialogData *v23; // rax
  int *v24; // rdx
  DialogData *v25; // rax
  int *v26; // rdx
  DialogData *v27; // rax
  int *v28; // rdx
  DialogData *v29; // rax
  int *v30; // rdx
  DialogData *v31; // rax
  int *v32; // rdx
  DialogData *v33; // rax
  int *v34; // rdx
  DialogData *v35; // rax
  int *v36; // rdx
  DialogData *v37; // rax
  int *v38; // rdx
  DialogData *v39; // rax
  int *v40; // rdx
  int v41; // edx
  int v42; // edx
  DialogData *v43; // r8
  int *v44; // rcx
  int v45; // ecx
  int v46; // ecx
  int *v47; // rcx
  int *v48; // rdx
  DialogData *v49; // rax
  int *v50; // rdx
  int v51; // ecx
  int v52; // ecx
  int *v53; // rdx
  DialogData *v54; // rax
  int *v55; // rdx
  DialogData *v56; // r8
  int *v57; // rcx
  DialogData *v58; // r8
  int *v59; // rcx
  DialogData *v60; // rax
  int *v61; // rdx
  DialogData *v62; // rax
  int *v63; // rdx
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  DialogData *v67; // r8
  int *v68; // rcx
  DialogData *v69; // rax
  int *v70; // rdx
  DialogData *v71; // r8
  int *v72; // rcx
  DialogData *v73; // rax
  int *v74; // rdx
  DialogData *v75; // rax
  int *v76; // rdx
  DialogData *v77; // rax
  int *v78; // rdx
  DialogData *v79; // rax
  int *v80; // rdx
  bool v81; // si
  DialogData *v82; // rax
  int *v83; // rdx
  ParticleEmitter *m_pParticleEmitter; // r9
  int *p_renderEffectFlag; // rdx
  OGLMatrix *v86; // r8
  OGLMatrix *v87; // rcx
  char *v88; // rax
  OGLMatrix *v89; // rdx
  __int128 v90; // xmm0
  __int128 v91; // xmm1
  __int128 v92; // xmm0
  __int128 v93; // xmm1
  __int64 v94; // r9
  __int128 v95; // xmm0
  __int64 v96; // r8
  __int128 v97; // xmm1
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  float v100; // xmm8_4
  float v101; // xmm7_4
  float v102; // xmm6_4
  float w; // xmm13_4
  float x; // xmm9_4
  float v105; // xmm9_4
  float v106; // xmm10_4
  float v107; // xmm12_4
  float v108; // xmm13_4
  float v109; // xmm2_4
  DialogData *v110; // rax
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rcx
  bool v119; // di
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rcx
  int v125; // eax
  int v126; // eax
  OGLVec4 v128; // [rsp+28h] [rbp-D8h] BYREF
  OGLMatrix v129; // [rsp+48h] [rbp-B8h] BYREF
  void **v130; // [rsp+90h] [rbp-70h]
  OGLMatrix mIn; // [rsp+98h] [rbp-68h] BYREF
  __int64 v132; // [rsp+E0h] [rbp-20h]
  OGLMatrix v133; // [rsp+E8h] [rbp-18h] BYREF

  p_AllDialogData = &pEffectData->AllDialogData;
  Myfirst = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  v9 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 80i64);
  v10 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64);
  v11 = (__int64)((unsigned __int128)(((char *)pEffectData->AllDialogData._Mypair._Myval2._Mylast - (char *)Myfirst)
                                    * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 4;
  if ( (v11 >> 63) + v11 <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v12 = Myfirst[2].allComboIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[2].allComboIndexData._Mypair._Myval2._Mylast - v12) <= 7 )
    std::_Xout_of_range("invalid vector<T> subscript");
  switch ( v12[7] )
  {
    case 0:
      if ( m_DepthMask )
      {
        m_DepthMask = 0;
        glDepthMask(0);
      }
      if ( m_Mode != 32774 )
      {
        m_Mode = 32774;
        m_ModeAlpha = 32774;
        _glewBlendEquation(0x8006u);
      }
      if ( dword_140A9605C != 1 )
      {
        dword_140A9605C = 1;
        glEnable(0xBE2u);
      }
      if ( m_dMode != 515 )
      {
        m_dMode = 515;
        glDepthFunc(0x203u);
      }
      if ( *priority == 4 )
      {
        if ( m_Sfactor != 770 || m_Dfactor != 771 || m_SfactorAlpha || m_DfactorAlpha != 771 )
        {
          m_Sfactor = 770;
          m_Dfactor = 771;
          m_SfactorAlpha = 0;
          m_DfactorAlpha = 771;
          _glewBlendFuncSeparate(0x302u, 0x303u, 0, 0x303u);
        }
      }
      else if ( m_Sfactor != 770 || m_Dfactor != 771 || m_SfactorAlpha != 770 || m_DfactorAlpha != 1 )
      {
        m_Sfactor = 770;
        m_Dfactor = 771;
        m_SfactorAlpha = 770;
        m_DfactorAlpha = 1;
        _glewBlendFuncSeparate(0x302u, 0x303u, 0x302u, 1u);
      }
      break;
    case 1:
      v13 = *(_QWORD *)(v10 + 8);
      v14 = *(_BYTE *)(v13 + 128) == 0;
      *(_DWORD *)(v13 + 60) = 3;
      *(_DWORD *)(v13 + 64) = 255;
      *(_DWORD *)(v13 + 68) = 255;
      if ( v14 )
      {
        if ( m_DepthMask )
        {
          m_DepthMask = 0;
          glDepthMask(0);
        }
        if ( m_Mode != 32774 )
        {
          m_Mode = 32774;
          m_ModeAlpha = 32774;
          _glewBlendEquation(0x8006u);
        }
        if ( dword_140A9605C != 1 )
        {
          dword_140A9605C = 1;
          glEnable(0xBE2u);
        }
        if ( m_Sfactor != 770 || m_Dfactor != 771 )
        {
          m_Sfactor = 770;
          m_Dfactor = 771;
          m_SfactorAlpha = 770;
          m_DfactorAlpha = 771;
          glBlendFunc(0x302u, 0x303u);
        }
        if ( m_dMode != 515 )
        {
          m_dMode = 515;
          glDepthFunc(0x203u);
        }
      }
      break;
    case 2:
    case 4:
      if ( m_DepthMask )
      {
        m_DepthMask = 0;
        glDepthMask(0);
      }
      if ( m_Mode != 32774 )
      {
        m_Mode = 32774;
        m_ModeAlpha = 32774;
        _glewBlendEquation(0x8006u);
      }
      glsCheckFlg(0xBE2u, 1);
      if ( m_dMode != 515 )
      {
        m_dMode = 515;
        glDepthFunc(0x203u);
      }
      if ( *priority == 4 )
        glsBlendFuncSeparate(0x302u, 1u, 0, 1u);
      else
        glsBlendFuncSeparate(0x302u, 1u, 0x302u, 1u);
      break;
    case 3:
    case 6:
      v15 = 2;
      goto LABEL_46;
    case 5:
      v15 = 6;
LABEL_46:
      Graphics::setRenderMode(*(Graphics **)(v10 + 8), v15, 255);
      break;
    default:
      break;
  }
  v16 = std::vector<DialogData>::at(p_AllDialogData, 2ui64);
  v17 = v16->allButtonIndexData._Mypair._Myval2._Myfirst;
  v18 = v16->allButtonIndexData._Mypair._Myval2._Mylast - v17;
  if ( v18 <= 0xB )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v17[11] )
  {
    if ( m_DepthMask != 1 )
    {
      m_DepthMask = 1;
      v19 = 1;
LABEL_53:
      glDepthMask(v19);
    }
  }
  else if ( m_DepthMask )
  {
    m_DepthMask = 0;
    v19 = 0;
    goto LABEL_53;
  }
  if ( m_dMode != 515 )
  {
    m_dMode = 515;
    glDepthFunc(0x203u);
  }
  for ( i = 0; i < 13; ++i )
  {
    Texture = ParticleTypeState::getTexture((ParticleTypeState *)v18, &this->m_TextureData, (EffectTextureType)i);
    if ( !Texture )
      continue;
    v22 = 0;
    switch ( i )
    {
      case 0:
        v23 = std::vector<DialogData>::at(p_AllDialogData, 3ui64);
        v24 = v23->allComboIndexData._Mypair._Myval2._Myfirst;
        v18 = v23->allComboIndexData._Mypair._Myval2._Mylast - v24;
        if ( v18 <= 1 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v22 = v24[1];
        break;
      case 1:
        v25 = std::vector<DialogData>::at(p_AllDialogData, 4ui64);
        v26 = v25->allComboIndexData._Mypair._Myval2._Myfirst;
        v18 = v25->allComboIndexData._Mypair._Myval2._Mylast - v26;
        if ( v18 <= 1 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v22 = v26[1];
        break;
      case 2:
        v27 = std::vector<DialogData>::at(p_AllDialogData, 3ui64);
        v28 = v27->allButtonIndexData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v27->allButtonIndexData._Mypair._Myval2._Mylast - v28) <= 5 )
          std::_Xout_of_range("invalid vector<T> subscript");
        if ( v28[5] )
        {
          v29 = std::vector<DialogData>::at(p_AllDialogData, 3ui64);
          v30 = v29->allComboIndexData._Mypair._Myval2._Myfirst;
          v18 = v29->allComboIndexData._Mypair._Myval2._Mylast - v30;
          if ( v18 <= 5 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v22 = v30[5];
        }
        else
        {
          v31 = std::vector<DialogData>::at(p_AllDialogData, 3ui64);
          v32 = v31->allComboIndexData._Mypair._Myval2._Myfirst;
          v18 = v31->allComboIndexData._Mypair._Myval2._Mylast - v32;
          if ( v18 <= 1 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v22 = v32[1];
        }
        break;
      case 3:
        v33 = std::vector<DialogData>::at(p_AllDialogData, 4ui64);
        v34 = v33->allButtonIndexData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v33->allButtonIndexData._Mypair._Myval2._Mylast - v34) <= 3 )
          std::_Xout_of_range("invalid vector<T> subscript");
        if ( v34[3] )
        {
          v35 = std::vector<DialogData>::at(p_AllDialogData, 4ui64);
          v36 = v35->allComboIndexData._Mypair._Myval2._Myfirst;
          v18 = v35->allComboIndexData._Mypair._Myval2._Mylast - v36;
          if ( v18 <= 3 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v22 = v36[3];
        }
        else
        {
          v37 = std::vector<DialogData>::at(p_AllDialogData, 4ui64);
          v38 = v37->allComboIndexData._Mypair._Myval2._Myfirst;
          v18 = v37->allComboIndexData._Mypair._Myval2._Mylast - v38;
          if ( v18 <= 1 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v22 = v38[1];
        }
        break;
      case 4:
        v39 = std::vector<DialogData>::at(p_AllDialogData, 3ui64);
        v40 = v39->allComboIndexData._Mypair._Myval2._Myfirst;
        v18 = v39->allComboIndexData._Mypair._Myval2._Mylast - v40;
        if ( v18 <= 3 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v22 = v40[3];
        break;
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
        v22 = -1;
        break;
      default:
        break;
    }
    if ( v22 )
    {
      v41 = v22 - 1;
      if ( v41 )
      {
        if ( v41 != 1 )
          continue;
        v42 = 25098;
      }
      else
      {
        v42 = 2570;
      }
    }
    else
    {
      v42 = 1290;
    }
    OGLTexture::setParameter(Texture, v42, 3553);
  }
  v43 = p_AllDialogData->_Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(p_AllDialogData->_Mypair._Myval2._Mylast - p_AllDialogData->_Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v44 = v43[2].allComboIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v43[2].allComboIndexData._Mypair._Myval2._Mylast - v44) <= 8 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v45 = v44[8];
  if ( v45 )
  {
    v46 = v45 - 1;
    if ( v46 )
    {
      if ( v46 == 1 )
      {
        glsCheckFlg(0xB44u, 1);
        if ( this->m_pParticleEmitter->m_mirrorFlag && !this->m_BillboardFlag )
          goto LABEL_93;
LABEL_96:
        glCullFace(0x404u);
      }
    }
    else
    {
      glsCheckFlg(0xB44u, 1);
      if ( this->m_pParticleEmitter->m_mirrorFlag && !this->m_BillboardFlag )
        goto LABEL_96;
LABEL_93:
      glCullFace(0x405u);
    }
  }
  else
  {
    glsCheckFlg(0xB44u, 0);
  }
  v47 = p_AllDialogData->_Mypair._Myval2._Myfirst[2].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(p_AllDialogData->_Mypair._Myval2._Myfirst[2].allButtonIndexData._Mypair._Myval2._Mylast - v47) <= 7 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v47[7] )
    *pRenderOpt |= 0x10u;
  v48 = p_AllDialogData->_Mypair._Myval2._Myfirst[2].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(p_AllDialogData->_Mypair._Myval2._Myfirst[2].allButtonIndexData._Mypair._Myval2._Mylast - v48) <= 8 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v48[8] )
  {
    v49 = std::vector<DialogData>::at(p_AllDialogData, 2ui64);
    v50 = v49->allComboIndexData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v49->allComboIndexData._Mypair._Myval2._Mylast - v50) <= 5 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v51 = v50[5];
    if ( v51 )
    {
      v52 = v51 - 1;
      if ( v52 )
      {
        if ( v52 == 1 )
          *pRenderOpt |= 0x80u;
      }
      else
      {
        *pRenderOpt |= 0x40u;
      }
    }
    else
    {
      *pRenderOpt |= 0x20u;
    }
  }
  v53 = p_AllDialogData->_Mypair._Myval2._Myfirst[2].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(p_AllDialogData->_Mypair._Myval2._Myfirst[2].allButtonIndexData._Mypair._Myval2._Mylast - v53) <= 9 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v53[9] )
  {
    v54 = std::vector<DialogData>::at(p_AllDialogData, 2ui64);
    v55 = v54->allComboIndexData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v54->allComboIndexData._Mypair._Myval2._Mylast - v55) <= 6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( v55[6] )
      *pRenderOpt |= 0x200000u;
    else
      *pRenderOpt |= 0x100000u;
  }
  v56 = p_AllDialogData->_Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(p_AllDialogData->_Mypair._Myval2._Mylast - p_AllDialogData->_Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v57 = v56[2].allComboIndexData._Mypair._Myval2._Myfirst;
  if ( !(v56[2].allComboIndexData._Mypair._Myval2._Mylast - v57) )
    std::_Xout_of_range("invalid vector<T> subscript");
  this->m_EffectConstData.particleType = *v57;
  v58 = p_AllDialogData->_Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(p_AllDialogData->_Mypair._Myval2._Mylast - p_AllDialogData->_Mypair._Myval2._Myfirst) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v59 = v58[3].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v58[3].allButtonIndexData._Mypair._Myval2._Mylast - v59) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v59[3] )
  {
    v60 = std::vector<DialogData>::at(p_AllDialogData, 4ui64);
    v61 = v60->allButtonIndexData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v60->allButtonIndexData._Mypair._Myval2._Mylast - v61) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( v61[2] )
    {
      v62 = std::vector<DialogData>::at(p_AllDialogData, 4ui64);
      v63 = v62->allComboIndexData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v62->allComboIndexData._Mypair._Myval2._Mylast - v63) <= 4 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v64 = v63[4];
      if ( v64 )
      {
        v65 = v64 - 1;
        if ( v65 )
        {
          v66 = v65 - 1;
          if ( v66 )
          {
            if ( v66 == 1 )
              *pRenderOpt |= 0x800u;
          }
          else
          {
            *pRenderOpt |= 0x400u;
          }
        }
        else
        {
          *pRenderOpt |= 0x200u;
        }
      }
      else
      {
        *pRenderOpt |= 0x100u;
      }
    }
  }
  v67 = p_AllDialogData->_Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(p_AllDialogData->_Mypair._Myval2._Mylast - p_AllDialogData->_Mypair._Myval2._Myfirst) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v68 = v67[3].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v67[3].allButtonIndexData._Mypair._Myval2._Mylast - v68) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v68[5] )
    goto LABEL_137;
  v69 = std::vector<DialogData>::at(p_AllDialogData, 4ui64);
  v70 = v69->allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v69->allButtonIndexData._Mypair._Myval2._Mylast - v70) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v70[3] )
LABEL_137:
    *pRenderOpt |= 0x1000u;
  v71 = p_AllDialogData->_Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(p_AllDialogData->_Mypair._Myval2._Mylast - p_AllDialogData->_Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v72 = v71[2].allComboIndexData._Mypair._Myval2._Myfirst;
  if ( !(v71[2].allComboIndexData._Mypair._Myval2._Mylast - v72) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *v72 != 4 )
  {
    v73 = std::vector<DialogData>::at(p_AllDialogData, 2ui64);
    v74 = v73->allComboIndexData._Mypair._Myval2._Myfirst;
    if ( !(v73->allComboIndexData._Mypair._Myval2._Mylast - v74) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( *v74 != 5 )
    {
      v75 = std::vector<DialogData>::at(p_AllDialogData, 2ui64);
      v76 = v75->allButtonIndexData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v75->allButtonIndexData._Mypair._Myval2._Mylast - v76) <= 0xC )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( v76[12] == 1 )
        *pRenderOpt |= 0x1000000u;
    }
  }
  v77 = std::vector<DialogData>::at(p_AllDialogData, 2ui64);
  v78 = v77->allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v77->allButtonIndexData._Mypair._Myval2._Mylast - v78) <= 0xD )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v78[13] == 1 )
    *pRenderOpt |= 0x2000u;
  v79 = std::vector<DialogData>::at(p_AllDialogData, 2ui64);
  v80 = v79->allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v79->allButtonIndexData._Mypair._Myval2._Mylast - v80) <= 0xE )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v80[14] == 1 )
    *pRenderOpt |= 0x4000u;
  v81 = 0;
  *(_QWORD *)this->m_EffectConstData.posOffset = 0i64;
  this->m_EffectConstData.posOffset[2] = 0.0;
  if ( this->m_pParticleEmitter->m_BlendProjData.blendProjectionFlag )
  {
    v82 = std::vector<DialogData>::at(p_AllDialogData, 0i64);
    v83 = v82->allButtonIndexData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v82->allButtonIndexData._Mypair._Myval2._Mylast - v83) <= 7 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( v83[7] )
    {
      m_pParticleEmitter = this->m_pParticleEmitter;
      p_renderEffectFlag = &m_pParticleEmitter->renderEffectFlag;
      if ( m_pParticleEmitter == (ParticleEmitter *)-172i64 )
        p_renderEffectFlag = 0i64;
      v86 = (OGLMatrix *)(p_renderEffectFlag + 2);
      v87 = &m_pParticleEmitter->WorldMat.OGLMatrix;
      if ( m_pParticleEmitter == (ParticleEmitter *)-3192i64 )
        v87 = 0i64;
      v88 = (char *)&v87[-1].m[14];
      if ( !v87 )
        v88 = 0i64;
      if ( !p_renderEffectFlag )
        v86 = 0i64;
      v89 = (OGLMatrix *)(v88 + 8);
      if ( !v88 )
        v89 = 0i64;
      OGLMatrix::multiply(&v129, v89, v86);
      v90 = *(_OWORD *)(v9 + 148);
      v91 = *(_OWORD *)(v9 + 164);
      v130 = &OGLEffectMatrix::`vftable';
      *(_OWORD *)mIn.m = v90;
      v92 = *(_OWORD *)(v9 + 180);
      *(_OWORD *)&mIn.m[4] = v91;
      v93 = *(_OWORD *)(v9 + 196);
      *(_OWORD *)&mIn.m[8] = v92;
      *(_OWORD *)&mIn.m[12] = v93;
      OGLMatrix::multiply(&mIn, (OGLMatrix *)(v9 + 20));
      v95 = *(_OWORD *)(v94 + 36);
      v132 = v96;
      v97 = *(_OWORD *)(v94 + 52);
      *(_OWORD *)v133.m = v95;
      v98 = *(_OWORD *)(v94 + 68);
      *(_OWORD *)&v133.m[4] = v97;
      v99 = *(_OWORD *)(v94 + 84);
      *(_OWORD *)&v133.m[8] = v98;
      *(_OWORD *)&v133.m[12] = v99;
      OGLMatrix::multiply(&v133, (OGLMatrix *)(v94 + 100));
      v100 = v129.m[12];
      v101 = v129.m[13];
      v102 = v129.m[14];
      v128.x = v129.m[12];
      v128.y = v129.m[13];
      v128.z = v129.m[14];
      v128.w = 1.0;
      OGLVec4::transCoord(&v128, &mIn);
      w = v128.w;
      x = v128.x;
      *(float *)&v98 = 1.0 / v128.w;
      v128.w = 1.0;
      v128.x = v100;
      v105 = x * *(float *)&v98;
      v106 = v128.y * *(float *)&v98;
      v107 = v128.z * *(float *)&v98;
      v108 = w * *(float *)&v98;
      v128.y = v101;
      v128.z = v102;
      OGLVec4::transCoord(&v128, &v133);
      v109 = (float)((float)(v107 * (float)(v128.x * (float)(1.0 / v128.w))) * *(float *)(v9 + 786372))
           + (float)((float)(1.0 - *(float *)(v9 + 786372)) * v105);
      this->m_EffectConstData.posOffset[1] = (float)(v106 / v108) - (float)(v106 / v108);
      this->m_EffectConstData.posOffset[2] = (float)(v107 / v108) - (float)(v107 / v108);
      this->m_EffectConstData.posOffset[0] = (float)(v109 / v108) - (float)(v105 / v108);
    }
    else
    {
      *pRenderOpt |= 0x10000000u;
    }
  }
  v110 = std::vector<DialogData>::at(p_AllDialogData, 2ui64);
  if ( (unsigned __int64)(v110->allEditNumData._Mypair._Myval2._Mylast - v110->allEditNumData._Mypair._Myval2._Myfirst) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( COERCE_FLOAT(*((_DWORD *)v110->allEditNumData._Mypair._Myval2._Myfirst + 4) ^ _xmm) < -30.0
    && (*pRenderOpt & 1) != 0 )
  {
    *pRenderOpt ^= 1u;
  }
  if ( (*pRenderOpt & 3) == 1 )
  {
    BattleSystem::BattleController::GetActionSystem();
    v112 = *(_QWORD *)(v111 + 237232);
    if ( v112 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v112 + 1448i64))(v112)
      || (BattleSystem::BattleController::GetActionSystem(), (v114 = *(_QWORD *)(v113 + 237248)) != 0)
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v114 + 1448i64))(v114) )
    {
      v81 = 1;
    }
    BattleSystem::BattleController::GetActionSystem();
    v116 = *(_QWORD *)(v115 + 237240);
    v119 = 1;
    if ( !v116 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v116 + 1448i64))(v116) )
    {
      BattleSystem::BattleController::GetActionSystem();
      v118 = *(_QWORD *)(v117 + 237256);
      if ( !v118 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v118 + 1448i64))(v118) )
        v119 = 0;
    }
    BattleSystem::BattleController::GetActionSystem();
    if ( *(_DWORD *)(v120 + 247536) == 3 )
    {
      if ( v81 )
      {
        BattleSystem::BattleController::GetActionSystem();
        v122 = *(_QWORD *)(v121 + 237216);
        v81 = !v122 || (*(float (__fastcall **)(__int64))(*(_QWORD *)v122 + 1344i64))(v122) == 1.0;
      }
      if ( v119 )
      {
        BattleSystem::BattleController::GetActionSystem();
        v124 = *(_QWORD *)(v123 + 237224);
        v119 = !v124 || (*(float (__fastcall **)(__int64))(*(_QWORD *)v124 + 1344i64))(v124) == 1.0;
      }
    }
    if ( !v81 || !v119 )
    {
      v125 = *pRenderOpt ^ 1;
      *pRenderOpt = v125;
      if ( v81 )
      {
        v126 = v125 | 4;
        goto LABEL_200;
      }
      if ( v119 )
      {
        v126 = v125 | 8;
LABEL_200:
        *pRenderOpt = v126;
      }
    }
  }
  return 1;
}

__int64 __fastcall ParticleTypeState::RenderSettingInSt(ParticleTypeState *this, EffectData *pEffectData)
{
  return ((__int64 (__fastcall *)(ParticleTypeState *, EffectData *))this->SetRenderDataInSt)(this, pEffectData);
}

char __fastcall ParticleTypeState::SetRenderData(
        ParticleTypeState *this,
        EffectData *pEffectData,
        int *renderOpt,
        float *zOffset,
        int *priority)
{
  EffectDataListManager *m_pEffectDataListManager; // r10
  OGLEffectVec4 *p_m_FillColor; // rax
  OGLVec4 *v9; // r10
  float y; // xmm1_4
  float z; // xmm2_4
  float w; // xmm3_4
  DialogData *Myfirst; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  float *v17; // rcx
  DialogData *v18; // rcx
  DialogData *v19; // rcx
  BattleSystem::BattleController *v20; // rcx
  BattleSystem::BattleController *v21; // rax
  float x; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  DialogData *v25; // rcx
  DialogData *v26; // rcx
  int *prioritya; // [rsp+80h] [rbp+28h]

  m_pEffectDataListManager = this->m_pParticleEmitter->m_pEffectDataListManager;
  p_m_FillColor = &m_pEffectDataListManager->m_FillColor;
  v9 = &m_pEffectDataListManager->m_FillColor.OGLVec4;
  if ( !p_m_FillColor )
    v9 = 0i64;
  y = v9->y;
  z = v9->z;
  w = v9->w;
  if ( *priority > 2 )
  {
    this->m_EffectConstData.fillColor[0] = v9->x;
    this->m_EffectConstData.fillColor[1] = y;
    this->m_EffectConstData.fillColor[2] = z;
    this->m_EffectConstData.fillColor[3] = w;
  }
  this->m_EffectConstData.uvNormalSize = this->uvNormalSize;
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                        - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  Myfirst = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[2].allEditNumData._Mypair._Myval2._Mylast
                        - Myfirst[2].allEditNumData._Mypair._Myval2._Myfirst) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  LODWORD(this->m_EffectConstData.zOffset) = *((_DWORD *)Myfirst[2].allEditNumData._Mypair._Myval2._Myfirst + 4) ^ _xmm;
  this->m_EffectConstData.actionZOffset = *zOffset;
  this->m_EffectConstData.renderOpt = *renderOpt;
  v15 = *(_QWORD *)&AppMain::pApp + 2507504i64;
  v16 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 2507504i64);
  if ( this->m_pParticleEmitter->m_pEffectDataListManager->m_PlayerNum )
    v17 = (float *)(v16 + 320);
  else
    v17 = (float *)(v16 + 164);
  this->m_EffectConstData.lightDiffuse[0] = v17[9];
  this->m_EffectConstData.lightDiffuse[1] = v17[10];
  this->m_EffectConstData.lightDiffuse[2] = v17[11];
  this->m_EffectConstData.lightDiffuse[3] = v17[12];
  this->m_EffectConstData.lightPosition[0] = v17[17];
  this->m_EffectConstData.lightPosition[1] = v17[18];
  this->m_EffectConstData.lightPosition[2] = v17[19];
  this->m_EffectConstData.lightPosition[3] = v17[20];
  this->m_EffectConstData.lightAttenuation[0] = v17[36];
  *(_QWORD *)&this->m_EffectConstData.lightAttenuation[1] = 0i64;
  this->m_EffectConstData.lightAttenuation[3] = 0.0;
  this->m_EffectConstData.lightIntensity[0] = v17[34];
  *(_QWORD *)&this->m_EffectConstData.lightIntensity[1] = 0i64;
  this->m_EffectConstData.lightIntensity[3] = 0.0;
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                        - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v18 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v18[2].allEditNumData._Mypair._Myval2._Mylast - v18[2].allEditNumData._Mypair._Myval2._Myfirst) <= 0xC )
    std::_Xout_of_range("invalid vector<T> subscript");
  this->m_EffectConstData.influenceOfLight = v18[2].allEditNumData._Mypair._Myval2._Myfirst[12] * 0.01;
  if ( !this->m_pParticleEmitter->m_mirrorFlag )
    goto LABEL_23;
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                        - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v19 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v19[2].allButtonIndexData._Mypair._Myval2._Mylast
                        - v19[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 0xF )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v19[2].allButtonIndexData._Mypair._Myval2._Myfirst[15] == 1 )
    this->m_EffectConstData.ignoreUvMirror = 1.0;
  else
LABEL_23:
    this->m_EffectConstData.ignoreUvMirror = 0.0;
  v20 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    prioritya = (int *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController((BattleSystem::BattleController *)prioritya);
    v20 = v21;
    BattleSystem::BattleController::instance = v21;
  }
  if ( v20->actSystem.bFreeCameraMode )
  {
    x = v20->actSystem.freeCamera.vPos.x;
    v23 = v20->actSystem.freeCamera.vPos.y;
    v24 = v20->actSystem.freeCamera.vPos.z;
  }
  else if ( (unsigned int)(v20->actSystem.cameraCtrl.offset.type - 3) <= 2 )
  {
    x = v20->actSystem.cameraCtrl.offset.vStart.x;
    v23 = v20->actSystem.cameraCtrl.offset.vStart.y;
    v24 = v20->actSystem.cameraCtrl.offset.vStart.z;
  }
  else
  {
    x = v20->actSystem.cameraCtrl.vPos.x;
    v23 = v20->actSystem.cameraCtrl.vPos.y;
    v24 = v20->actSystem.cameraCtrl.vPos.z;
  }
  this->m_EffectConstData.cameraPos[0] = x;
  this->m_EffectConstData.cameraPos[1] = v23;
  this->m_EffectConstData.cameraPos[2] = v24;
  if ( *priority != 4 )
    goto LABEL_43;
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                        - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v25 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v25[2].allButtonIndexData._Mypair._Myval2._Mylast
                        - v25[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 8 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v25[2].allButtonIndexData._Mypair._Myval2._Myfirst[8] != 1 )
    goto LABEL_42;
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                        - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v26 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v26[2].allComboIndexData._Mypair._Myval2._Mylast
                        - v26[2].allComboIndexData._Mypair._Myval2._Myfirst) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v26[2].allComboIndexData._Mypair._Myval2._Myfirst[5] )
LABEL_43:
    this->m_EffectConstData.bufferscale = 1.0;
  else
LABEL_42:
    this->m_EffectConstData.bufferscale = (*(float (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v15 + 1544i64)
                                                                           + 128i64))(*(_QWORD *)v15 + 1544i64);
  return 1;
}

bool __fastcall ParticleTypeState::SetRenderDataInSt(ParticleTypeState *this, EffectData *pEffectData)
{
  float *uvColor1Size; // r10
  float *uvColor2Size; // r11
  DialogData *Myfirst; // rcx
  int *v7; // rdx
  DialogData *v8; // r8
  int *v9; // rcx
  ParticleEmitterData *m_pParticleEmitterData; // rcx
  DialogData *v11; // r8
  float *v12; // rcx
  ParticleEmitterData *v13; // rcx
  DialogData *v14; // r8
  float *v15; // rcx
  ParticleEmitterData *v16; // rcx
  DialogData *v17; // r8
  float *v18; // rcx
  float v19; // xmm0_4
  ParticleEmitterData *v20; // rcx
  DialogData *v21; // r8
  float *v22; // rcx
  ParticleEmitterData *v23; // rcx
  DialogData *v24; // r8
  float *v25; // rcx
  ParticleEmitterData *v26; // rcx
  DialogData *v27; // r8
  float *v28; // rcx
  float v29; // xmm0_4
  ParticleEmitterData *v30; // r9
  DialogData *v31; // r8
  int *v32; // rcx
  float *v33; // rcx
  ParticleEmitterData *v34; // rcx
  DialogData *v35; // r8
  float *v36; // rcx
  ParticleEmitterData *v37; // rcx
  DialogData *v38; // r8
  float *v39; // rcx
  ParticleEmitterData *v40; // r9
  DialogData *v41; // r8
  int *v42; // rcx
  float *v43; // rcx
  ParticleEmitterData *v44; // rcx
  DialogData *v45; // r8
  float *v46; // rcx
  ParticleEmitterData *v47; // rcx
  DialogData *v48; // r8
  float *v49; // rcx
  ParticleEmitterData *v50; // rcx
  DialogData *v51; // r8
  float *v52; // rcx
  ParticleEmitterData *v53; // rcx
  DialogData *v54; // r8
  float *v55; // rcx
  ParticleEmitterData *v56; // rcx
  DialogData *v57; // r8
  float *v58; // rcx
  float v59; // xmm0_4
  ParticleEmitterData *v60; // rcx
  DialogData *v61; // r8
  float *v62; // rcx
  double v63; // xmm0_8
  bool result; // al
  float v65; // xmm1_4

  uvColor1Size = this->uvColor1Size;
  uvColor2Size = this->uvColor2Size;
  this->m_EffectConstData.uvColor1Size = this->uvColor1Size;
  this->m_EffectConstData.uvColor2Size = this->uvColor2Size;
  Myfirst = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast - Myfirst) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v7 = Myfirst[3].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[3].allButtonIndexData._Mypair._Myval2._Mylast - v7) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v7[5] )
    this->m_EffectConstData.uvAlpha1Size = this->uvAlpha1Size;
  else
    this->m_EffectConstData.uvAlpha1Size = uvColor1Size;
  v8 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast - v8) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v9 = v8[4].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v8[4].allButtonIndexData._Mypair._Myval2._Mylast - v9) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v9[3] )
    this->m_EffectConstData.uvAlpha2Size = this->uvAlpha2Size;
  else
    this->m_EffectConstData.uvAlpha2Size = uvColor2Size;
  m_pParticleEmitterData = this->m_pParticleEmitterData;
  v11 = m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Mylast - v11) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v12 = v11[3].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v11[3].allEditNumData._Mypair._Myval2._Mylast - v12) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  this->m_EffectConstData.color1TexCoord[0] = v12[5];
  v13 = this->m_pParticleEmitterData;
  v14 = v13->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v13->AllDialogData._Mypair._Myval2._Mylast - v14) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v15 = v14[3].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v14[3].allEditNumData._Mypair._Myval2._Mylast - v15) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  this->m_EffectConstData.color1TexCoord[1] = v15[4];
  v16 = this->m_pParticleEmitterData;
  v17 = v16->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v16->AllDialogData._Mypair._Myval2._Mylast - v17) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v18 = v17[3].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v17[3].allEditNumData._Mypair._Myval2._Mylast - v18) <= 6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v19 = v18[6];
  this->m_EffectConstData.color1TexCoord[3] = 0.0;
  this->m_EffectConstData.color1TexCoord[2] = (float)(v19 * 3.1415927) / 180.0;
  v20 = this->m_pParticleEmitterData;
  v21 = v20->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v20->AllDialogData._Mypair._Myval2._Mylast - v21) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v22 = v21[4].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v21[4].allEditNumData._Mypair._Myval2._Mylast - v22) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  this->m_EffectConstData.color2TexCoord[0] = v22[5];
  v23 = this->m_pParticleEmitterData;
  v24 = v23->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v23->AllDialogData._Mypair._Myval2._Mylast - v24) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v25 = v24[4].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v24[4].allEditNumData._Mypair._Myval2._Mylast - v25) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  this->m_EffectConstData.color2TexCoord[1] = v25[4];
  v26 = this->m_pParticleEmitterData;
  v27 = v26->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v26->AllDialogData._Mypair._Myval2._Mylast - v27) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v28 = v27[4].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v27[4].allEditNumData._Mypair._Myval2._Mylast - v28) <= 6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v29 = v28[6];
  this->m_EffectConstData.color2TexCoord[3] = 0.0;
  this->m_EffectConstData.color2TexCoord[2] = (float)(v29 * 3.1415927) / 180.0;
  v30 = this->m_pParticleEmitterData;
  v31 = v30->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v30->AllDialogData._Mypair._Myval2._Mylast - v31) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v32 = v31[3].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v31[3].allButtonIndexData._Mypair._Myval2._Mylast - v32) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v32[5] == 1 )
  {
    if ( (unsigned __int64)(v30->AllDialogData._Mypair._Myval2._Mylast - v31) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v33 = v31[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v31[3].allEditNumData._Mypair._Myval2._Mylast - v33) <= 0x13 )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->m_EffectConstData.alpha1TexCoord[0] = v33[19];
    v34 = this->m_pParticleEmitterData;
    v35 = v34->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v34->AllDialogData._Mypair._Myval2._Mylast - v35) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v36 = v35[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v35[3].allEditNumData._Mypair._Myval2._Mylast - v36) <= 0x12 )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->m_EffectConstData.alpha1TexCoord[1] = v36[18];
    v37 = this->m_pParticleEmitterData;
    v38 = v37->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v37->AllDialogData._Mypair._Myval2._Mylast - v38) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v39 = v38[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v38[3].allEditNumData._Mypair._Myval2._Mylast - v39) <= 0x14 )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->m_EffectConstData.alpha1TexCoord[2] = (float)(v39[20] * 3.1415927) / 180.0;
  }
  else
  {
    this->m_EffectConstData.alpha1TexCoord[0] = this->m_EffectConstData.color1TexCoord[0];
    this->m_EffectConstData.alpha1TexCoord[1] = this->m_EffectConstData.color1TexCoord[1];
    this->m_EffectConstData.alpha1TexCoord[2] = this->m_EffectConstData.color1TexCoord[2];
  }
  this->m_EffectConstData.alpha1TexCoord[3] = 0.0;
  v40 = this->m_pParticleEmitterData;
  v41 = v40->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v40->AllDialogData._Mypair._Myval2._Mylast - v41) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v42 = v41[4].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v41[4].allButtonIndexData._Mypair._Myval2._Mylast - v42) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v42[3] == 1 )
  {
    if ( (unsigned __int64)(v40->AllDialogData._Mypair._Myval2._Mylast - v41) <= 4 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v43 = v41[4].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v41[4].allEditNumData._Mypair._Myval2._Mylast - v43) <= 0xC )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->m_EffectConstData.alpha2TexCoord[0] = v43[12];
    v44 = this->m_pParticleEmitterData;
    v45 = v44->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v44->AllDialogData._Mypair._Myval2._Mylast - v45) <= 4 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v46 = v45[4].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v45[4].allEditNumData._Mypair._Myval2._Mylast - v46) <= 0xB )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->m_EffectConstData.alpha2TexCoord[1] = v46[11];
    v47 = this->m_pParticleEmitterData;
    v48 = v47->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v47->AllDialogData._Mypair._Myval2._Mylast - v48) <= 4 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v49 = v48[4].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v48[4].allEditNumData._Mypair._Myval2._Mylast - v49) <= 0xD )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->m_EffectConstData.alpha2TexCoord[2] = (float)(v49[13] * 3.1415927) / 180.0;
  }
  else
  {
    this->m_EffectConstData.alpha2TexCoord[0] = this->m_EffectConstData.color2TexCoord[0];
    this->m_EffectConstData.alpha2TexCoord[1] = this->m_EffectConstData.color2TexCoord[1];
    this->m_EffectConstData.alpha2TexCoord[2] = this->m_EffectConstData.color2TexCoord[2];
  }
  this->m_EffectConstData.alpha2TexCoord[3] = 0.0;
  v50 = this->m_pParticleEmitterData;
  v51 = v50->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v50->AllDialogData._Mypair._Myval2._Mylast - v51) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v52 = v51[3].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v51[3].allEditNumData._Mypair._Myval2._Mylast - v52) <= 0xC )
    std::_Xout_of_range("invalid vector<T> subscript");
  this->m_EffectConstData.normalTexCoord[0] = v52[12];
  v53 = this->m_pParticleEmitterData;
  v54 = v53->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v53->AllDialogData._Mypair._Myval2._Mylast - v54) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v55 = v54[3].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v54[3].allEditNumData._Mypair._Myval2._Mylast - v55) <= 0xB )
    std::_Xout_of_range("invalid vector<T> subscript");
  this->m_EffectConstData.normalTexCoord[1] = v55[11];
  v56 = this->m_pParticleEmitterData;
  v57 = v56->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v56->AllDialogData._Mypair._Myval2._Mylast - v57) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v58 = v57[3].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v57[3].allEditNumData._Mypair._Myval2._Mylast - v58) <= 0xD )
    std::_Xout_of_range("invalid vector<T> subscript");
  v59 = v58[13];
  this->m_EffectConstData.normalTexCoord[3] = 0.0;
  this->m_EffectConstData.normalTexCoord[2] = (float)(v59 * 3.1415927) / 180.0;
  this->m_EffectConstData.blurUV[0] = this->m_pParticleEmitterData->blurUV1.x;
  this->m_EffectConstData.blurUV[1] = this->m_pParticleEmitterData->blurUV1.y;
  this->m_EffectConstData.blurUV[2] = this->m_pParticleEmitterData->blurUV2.x;
  this->m_EffectConstData.blurUV[3] = this->m_pParticleEmitterData->blurUV2.y;
  v60 = this->m_pParticleEmitterData;
  v61 = v60->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v60->AllDialogData._Mypair._Myval2._Mylast - v61) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v62 = v61[2].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v61[2].allEditNumData._Mypair._Myval2._Mylast - v62) <= 0xB )
    std::_Xout_of_range("invalid vector<T> subscript");
  v63 = pow(100.0, (float)(v62[11] / 100.0));
  result = 1;
  v65 = v63;
  this->m_EffectConstData.falloffParam = v65;
  return result;
}

void __fastcall ParticleTypeState::UpdateParticleTypeState(
        ParticleTypeState *this,
        EffectUpdateBufferArgument *pUpdateBufferArg)
{
  int v2; // er12
  ParticleTypeState *v4; // rdi
  int v5; // esi
  __int64 v6; // r15
  std::vector<ParticleData *> *pParticleDataVec; // r8
  unsigned __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // r15
  std::vector<ParticleData *> *v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  std::vector<ParticleData *> *v14; // rcx
  ParticleData **Myfirst; // rdx
  __int64 v16; // rax
  float *p_isUsed; // rax
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  __int64 v22; // rax
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  Vector4Unaligned m_lightingCoefficientOfFake; // xmm0
  ParticleData **v28; // rdx
  ParticleData **v29; // rdx
  ParticleData **v30; // rdx
  ParticleData **v31; // rdx
  std::vector<ParticleData *> *v32; // rdx
  ParticleData **v33; // r10
  ParticleData *v34; // rax
  float v35; // xmm13_4
  float v36; // xmm14_4
  float v37; // xmm15_4
  float v38; // xmm8_4
  float v39; // xmm9_4
  float v40; // xmm10_4
  float v41; // xmm11_4
  float v42; // xmm4_4
  float v43; // xmm5_4
  float v44; // xmm6_4
  float v45; // xmm7_4
  float v46; // xmm1_4
  float v47; // xmm3_4
  float v48; // xmm2_4
  float v49; // xmm0_4
  __int64 v50; // rax
  __int64 v51; // rdx
  __int128 v52; // [rsp+20h] [rbp-E0h]
  __int128 v53; // [rsp+30h] [rbp-D0h]
  __int128 v54; // [rsp+40h] [rbp-C0h]
  EffectInstancingData instData; // [rsp+50h] [rbp-B0h] BYREF

  v2 = 0;
  v4 = this;
  v5 = 0;
  v6 = *(int *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 2507504i64) + 2256i64);
  pParticleDataVec = pUpdateBufferArg->pParticleDataVec;
  if ( pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast
     - pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst )
  {
    v8 = 0i64;
    do
    {
      if ( pParticleDataVec->_Mypair._Myval2._Mylast - pParticleDataVec->_Mypair._Myval2._Myfirst <= v8 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v4->calcWorldMat(v4, pParticleDataVec->_Mypair._Myval2._Myfirst[v8], pUpdateBufferArg->pEffectData);
      pParticleDataVec = pUpdateBufferArg->pParticleDataVec;
      ++v5;
      ++v8;
      this = (ParticleTypeState *)(pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast
                                 - pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst);
    }
    while ( v5 < (unsigned __int64)this );
  }
  v9 = v6;
  v10 = 168 * (v6 + 1);
  if ( *(ParticleTypeState_vtbl **)((char *)&v4->__vftable + v10) )
  {
    v11 = pUpdateBufferArg->pParticleDataVec;
    if ( v11->_Mypair._Myval2._Mylast - v11->_Mypair._Myval2._Myfirst )
    {
      v12 = 0i64;
      v13 = 0i64;
      do
      {
        if ( v2 < v4->m_VertexMemoryCount[v9] )
        {
          if ( v11->_Mypair._Myval2._Mylast - v11->_Mypair._Myval2._Myfirst <= v12 )
            std::_Xout_of_range("invalid vector<T> subscript");
          ParticleTypeState::setTexAnimeNum(
            this,
            v11->_Mypair._Myval2._Myfirst[v12],
            pUpdateBufferArg->pEffectData,
            &instData);
          v14 = pUpdateBufferArg->pParticleDataVec;
          Myfirst = pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst;
          if ( pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast - Myfirst <= v12 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v16 = (char *)v14->_Mypair._Myval2._Mylast - (char *)Myfirst;
          instData.m_param.y = Myfirst[v12]->distortionRatio;
          if ( v16 >> 3 <= v12 )
            std::_Xout_of_range("invalid vector<T> subscript");
          if ( v14->_Mypair._Myval2._Mylast - Myfirst <= v12 )
            std::_Xout_of_range("invalid vector<T> subscript");
          p_isUsed = (float *)&Myfirst[v12]->isUsed;
          v18 = p_isUsed[313];
          v19 = p_isUsed[314];
          v20 = p_isUsed[312] / 255.0;
          v21 = (float)(p_isUsed[315] / 255.0) * v4->m_pParticleEmitter->m_ActArg.alpha;
          v22 = (char *)v14->_Mypair._Myval2._Mylast - (char *)Myfirst;
          instData.m_color.x = v20;
          instData.m_color.w = v21;
          instData.m_color.y = v18 / 255.0;
          instData.m_color.z = v19 / 255.0;
          if ( v22 >> 3 <= v12 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v23 = *(__int64 *)((char *)&v4->__vftable + v10);
          instData.m_param.x = Myfirst[v12]->age;
          v24 = *(_OWORD *)&instData.m_param.x;
          *(Vector4Unaligned *)(v23 + v13) = instData.m_color;
          v25 = *(_OWORD *)&instData.m_texAnimeNumColor.z;
          *(_OWORD *)(v23 + v13 + 16) = v24;
          v26 = *(_OWORD *)&instData.m_texAnimeNumAlpha.z;
          *(_OWORD *)(v23 + v13 + 32) = v25;
          m_lightingCoefficientOfFake = instData.m_lightingCoefficientOfFake;
          *(_OWORD *)(v23 + v13 + 48) = v26;
          *(Vector4Unaligned *)(v23 + v13 + 64) = m_lightingCoefficientOfFake;
          v28 = pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst;
          if ( pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast - v28 <= v12 )
            std::_Xout_of_range("invalid vector<T> subscript");
          *(float *)((char *)&(*(ParticleTypeState_vtbl **)((char *)&v4->__vftable + v10))->InitVertexBuffer + v13) = v28[v12]->LightingCoefficientOfFake.x;
          v29 = pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst;
          if ( pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast - v29 <= v12 )
            std::_Xout_of_range("invalid vector<T> subscript");
          *(float *)((char *)&(*(ParticleTypeState_vtbl **)((char *)&v4->__vftable + v10))->InitVertexBuffer + v13 + 4) = v29[v12]->LightingCoefficientOfFake.y;
          v30 = pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst;
          if ( pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast - v30 <= v12 )
            std::_Xout_of_range("invalid vector<T> subscript");
          *(float *)((char *)&(*(ParticleTypeState_vtbl **)((char *)&v4->__vftable + v10))->calcWorldMat + v13) = v30[v12]->LightingCoefficientOfFake.z;
          v31 = pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst;
          if ( pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast - v31 <= v12 )
            std::_Xout_of_range("invalid vector<T> subscript");
          *(float *)((char *)&(*(ParticleTypeState_vtbl **)((char *)&v4->__vftable + v10))->calcWorldMat + v13 + 4) = v31[v12]->LightingCoefficientOfFake.w;
          v32 = pUpdateBufferArg->pParticleDataVec;
          v33 = pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst;
          if ( pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast - v33 <= v12 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v34 = v33[v12];
          v35 = v34->WorldMat.m[3];
          v36 = v34->WorldMat.m[7];
          v37 = v34->WorldMat.m[11];
          if ( v32->_Mypair._Myval2._Mylast - v33 <= v12 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v38 = v34->WorldMat.m[2];
          v39 = v34->WorldMat.m[6];
          v40 = v34->WorldMat.m[10];
          v41 = v34->WorldMat.m[14];
          if ( v32->_Mypair._Myval2._Mylast - v33 <= v12 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v42 = v34->WorldMat.m[1];
          v43 = v34->WorldMat.m[5];
          v44 = v34->WorldMat.m[9];
          v45 = v34->WorldMat.m[13];
          if ( v32->_Mypair._Myval2._Mylast - v33 <= v12 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v46 = v34->WorldMat.m[8];
          v47 = v34->WorldMat.m[0];
          v48 = v34->WorldMat.m[4];
          instData.m_color.w = v34->WorldMat.m[12];
          v49 = v34->WorldMat.m[15];
          v50 = *(__int64 *)((char *)&v4->__vftable + v10);
          instData.m_color.z = v46;
          instData.m_color.x = v47;
          instData.m_color.y = v48;
          *(_QWORD *)&v52 = __PAIR64__(LODWORD(v43), LODWORD(v42));
          *(Vector4Unaligned *)(v50 + v13 + 80) = instData.m_color;
          *((_QWORD *)&v52 + 1) = __PAIR64__(LODWORD(v45), LODWORD(v44));
          *(_QWORD *)&v53 = __PAIR64__(LODWORD(v39), LODWORD(v38));
          *(_OWORD *)(v50 + v13 + 96) = v52;
          *((_QWORD *)&v53 + 1) = __PAIR64__(LODWORD(v41), LODWORD(v40));
          *(_QWORD *)&v54 = __PAIR64__(LODWORD(v36), LODWORD(v35));
          *((_QWORD *)&v54 + 1) = __PAIR64__(LODWORD(v49), LODWORD(v37));
          *(_OWORD *)(v50 + v13 + 112) = v53;
          *(_OWORD *)(v50 + v13 + 128) = v54;
        }
        v11 = pUpdateBufferArg->pParticleDataVec;
        ++v2;
        ++v12;
        v13 += 144i64;
        this = (ParticleTypeState *)(pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast
                                   - pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst);
      }
      while ( v2 < (unsigned __int64)this );
    }
    v51 = v9;
    v4->m_EffectMeshData[v51].instanceNum = v4->m_pParticleEmitter->m_ParticleData._Mypair._Myval2._Mylast
                                          - v4->m_pParticleEmitter->m_ParticleData._Mypair._Myval2._Myfirst;
    v4->m_EffectMeshData[v51].renderIndexCount = v4->m_EffectMeshData[v9].indexCount;
    v4->m_EffectMeshData[v51].renderVertexCount = v4->m_EffectMeshData[v9].vertexCount;
  }
}

void __fastcall ParticleTypeState::UpdateVertexBufferInBT(
        ParticleTypeState *this,
        EffectUpdateBufferArgument *pUpdateBufferArg)
{
  this->UpdateParticleTypeStateInBT(this, pUpdateBufferArg);
}

char __fastcall ParticleTypeState::UpdateVertexBufferInstancing(
        ParticleTypeState *this,
        EffectUpdateBufferArgument *pUpdateBufferArg)
{
  this->UpdateParticleTypeState(this, pUpdateBufferArg);
  return 1;
}

void __fastcall ParticleTypeState::allocateVertexMemory(
        ParticleTypeState *this,
        EffectUpdateArgument *pUpdateBufferArg)
{
  std::vector<ParticleData *> *pParticleDataVec; // r8
  int v4; // ecx
  __int64 v5; // rbp
  char *v6; // rdi
  ParticleEmitter *m_pParticleEmitter; // r8
  __int64 v8; // rsi
  void *v9; // rdx
  Framework::MemoryManager *v10; // rcx
  ParticleTypeState_vtbl *v11; // rax

  pParticleDataVec = pUpdateBufferArg->pParticleDataVec;
  if ( (((char *)pParticleDataVec->_Mypair._Myval2._Mylast - (char *)pParticleDataVec->_Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFF8ui64) != 0 )
  {
    v4 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 2507504i64) + 2256i64) + 1 < 2 )
      v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 2507504i64) + 2256i64) + 1;
    v5 = v4;
    v6 = (char *)this + 4 * v4;
    if ( *((int *)v6 + 6) < (unsigned __int64)(pParticleDataVec->_Mypair._Myval2._Mylast
                                             - pParticleDataVec->_Mypair._Myval2._Myfirst) )
    {
      *((_DWORD *)v6 + 6) = pParticleDataVec->_Mypair._Myval2._Mylast - pParticleDataVec->_Mypair._Myval2._Myfirst;
      m_pParticleEmitter = this->m_pParticleEmitter;
      if ( m_pParticleEmitter->m_pGpuMemory )
      {
        v8 = 168 * (v4 + 1i64);
        v9 = *(ParticleTypeState_vtbl **)((char *)&this->__vftable + v8);
        if ( v9 )
        {
          v10 = m_pParticleEmitter->m_pMemoryInstancingReal[v4];
          if ( v10 )
            Framework::MemoryManager::release(v10, v9);
          *(ParticleTypeState_vtbl **)((char *)&this->__vftable + v8) = 0i64;
        }
        v11 = (ParticleTypeState_vtbl *)Framework::MemoryManager::allocate(
                                          this->m_pParticleEmitter->m_pGpuMemory,
                                          144i64 * *((int *)v6 + 6),
                                          (unsigned __int64)m_pParticleEmitter);
        *(ParticleTypeState_vtbl **)((char *)&this->__vftable + v8) = v11;
        if ( v11 )
        {
          memset(v11, 0, 144i64 * *((int *)v6 + 6));
          this->m_pParticleEmitter->m_pMemoryInstancingReal[v5] = this->m_pParticleEmitter->m_pGpuMemory;
        }
        else
        {
          *((_DWORD *)v6 + 6) = 0;
        }
      }
    }
  }
}

void __fastcall ParticleTypeState::followCamera(
        ParticleTypeState *this,
        ParticleData *pParticleData,
        OGLEffectMatrix *pBoneMat,
        EffectData *pEffectData)
{
  OGLMatrix *v6; // rbx
  OGLMatrix *v7; // rcx
  OGLVec3 *v8; // rsi
  OGLEffectVec3_vtbl *v9; // r8
  DialogData *Myfirst; // rcx
  OGLMatrix *v11; // rdx
  DialogData *v12; // rcx
  BattleSystem::BattleController *v13; // rcx
  BattleSystem::BattleController *v14; // rax
  OGLVec3 *CameraPos; // rax
  ActionSystem *p_actSystem; // rcx
  float x; // xmm6_4
  float y; // xmm7_4
  float z; // xmm8_4
  BattleSystem::BattleController *v20; // rax
  OGLEffectVec3 *v21; // rax
  DialogData *v22; // rcx
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm3_4
  OGLVec3 v; // [rsp+30h] [rbp-61h] BYREF
  OGLEffectVec3 v27; // [rsp+40h] [rbp-51h] BYREF
  OGLVec3 v28; // [rsp+58h] [rbp-39h] BYREF
  OGLEffectVec3_vtbl *v29; // [rsp+68h] [rbp-29h]
  __int64 v30; // [rsp+70h] [rbp-21h]
  float v31; // [rsp+78h] [rbp-19h]
  __int64 v32; // [rsp+80h] [rbp-11h]
  OGLEffectVec3 result[3]; // [rsp+88h] [rbp-9h] BYREF
  BattleSystem::BattleController *v34; // [rsp+100h] [rbp+6Fh]
  BattleSystem::BattleController *v35; // [rsp+100h] [rbp+6Fh]

  v32 = -2i64;
  v6 = &pBoneMat->OGLMatrix;
  v7 = &pParticleData->LocalMat.OGLMatrix;
  v8 = 0i64;
  if ( pParticleData == (ParticleData *)-184i64 )
    v7 = 0i64;
  *(_OWORD *)v6->m = *(_OWORD *)v7->m;
  *(_OWORD *)&pBoneMat->m[4] = *(_OWORD *)&v7->m[4];
  *(_OWORD *)&pBoneMat->m[8] = *(_OWORD *)&v7->m[8];
  *(_OWORD *)&pBoneMat->m[12] = *(_OWORD *)&v7->m[12];
  *(_QWORD *)&v.x = 0i64;
  v.z = 0.0;
  v9 = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                        - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  Myfirst = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[2].allButtonIndexData._Mypair._Myval2._Mylast
                        - Myfirst[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( !Myfirst[2].allButtonIndexData._Mypair._Myval2._Myfirst[6] )
  {
    v11 = &pParticleData->ActMat.OGLMatrix;
    if ( pParticleData == (ParticleData *)-472i64 )
      v11 = 0i64;
    OGLMatrix::multiplyRotate(v6, v11);
  }
  if ( !(pEffectData->AllDialogData._Mypair._Myval2._Mylast - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  v12 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v12->allButtonIndexData._Mypair._Myval2._Mylast
                        - v12->allButtonIndexData._Mypair._Myval2._Myfirst) <= 6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v12->allButtonIndexData._Mypair._Myval2._Myfirst[6] )
  {
    v30 = 0i64;
    v31 = 0.0;
    v29 = v9;
    *(_QWORD *)&v27.x = 0i64;
    v27.z = 0.0;
    v27.__vftable = v9;
    v13 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v34 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v34);
      v13 = v14;
      BattleSystem::BattleController::instance = v14;
    }
    CameraPos = ActionSystem::GetCameraPos(&v13->actSystem, (OGLVec3 *)result);
    x = CameraPos->x;
    *(float *)&v30 = CameraPos->x;
    y = CameraPos->y;
    *((float *)&v30 + 1) = y;
    z = CameraPos->z;
    v31 = z;
    if ( !p_actSystem )
    {
      v35 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v35);
      p_actSystem = &v20->actSystem;
      BattleSystem::BattleController::instance = v20;
    }
    v27.OGLVec3 = *ActionSystem::GetCameraLook(p_actSystem, &v28);
    v28.x = x;
    v28.y = y;
    v28.z = z;
    v21 = OGLEffectVec3::operator-(&v27, result, &v28);
    if ( v21 )
      v8 = &v21->OGLVec3;
    v = *v8;
    OGLVec3::normalize(&v, &v);
    if ( !(pEffectData->AllDialogData._Mypair._Myval2._Mylast - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v22 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v22->allEditNumData._Mypair._Myval2._Mylast - v22->allEditNumData._Mypair._Myval2._Myfirst) <= 0x12 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v23 = v22->allEditNumData._Mypair._Myval2._Myfirst[18];
    v24 = (float)(v.y * v23) + y;
    v25 = (float)(v.z * v23) + z;
    v6->m[12] = (float)((float)(v.x * v23) + x) + v6->m[12];
    v6->m[13] = v24 + v6->m[13];
    v6->m[14] = v25 + v6->m[14];
    v6->m[15] = 1.0;
  }
}

extension::exsound_detail::SoundBankImpl *__fastcall extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
        extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *this,
        extension::AsyncStatus::Step a2)
{
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *m_ptr; // rbx

  m_ptr = this->m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
    return 0i64;
  if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    extension::AsyncStatus::waitFor(&m_ptr->m_status, a2);
  return m_ptr->m_data._Mypair._Myval2;
}

OGLTexture *__fastcall ParticleTypeState::getTexture(
        ParticleTypeState *this,
        EffectTextureData *pEffectTextureData,
        EffectTextureType type)
{
  OGLTexture *CharaBlurTex; // r9
  OGLTexture *result; // rax

  CharaBlurTex = 0i64;
  switch ( type )
  {
    case COLOR1_TEXTURE:
      result = pEffectTextureData->ColorTexture1;
      break;
    case COLOR2_TEXTURE:
      result = pEffectTextureData->ColorTexture2;
      break;
    case ALPHA1_TEXTURE:
      result = pEffectTextureData->AlphaTexture1;
      break;
    case ALPHA2_TEXTURE:
      result = pEffectTextureData->AlphaTexture2;
      break;
    case NORMAL_TEXTURE:
      result = pEffectTextureData->NormalTexture;
      break;
    case CHARAS_DEPTH_TEXTURE:
      result = pEffectTextureData->CharasDepthTex;
      break;
    case CHARA1_DEPTH_TEXTURE:
      result = pEffectTextureData->Chara1DepthTex;
      break;
    case CHARA2_DEPTH_TEXTURE:
      result = pEffectTextureData->Chara2DepthTex;
      break;
    case STAGE_DEPTH_TEXTURE:
      result = pEffectTextureData->StageDepthTex;
      break;
    case DISTORTION_CHARA1_TEXTURE:
      result = pEffectTextureData->DistortionChara1Tex;
      break;
    case DISTORTION_CHARA2_TEXTURE:
      result = pEffectTextureData->DistortionChara2Tex;
      break;
    case DISTORTION_STAGE_TEXTURE:
      result = pEffectTextureData->DistortionStageTex;
      break;
    case CHARA_BLUR_TEXTURE:
      CharaBlurTex = pEffectTextureData->CharaBlurTex;
      goto LABEL_15;
    default:
LABEL_15:
      result = CharaBlurTex;
      break;
  }
  return result;
}

void __fastcall ParticleTypeState::loadAppTexture(ParticleTypeState *this)
{
  __int64 v1; // r8
  __int64 m_PlayerNum; // r9

  v1 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 80i64);
  this->m_TextureData.CharasDepthTex = (OGLTexture *)(v1 + 780112);
  this->m_TextureData.Chara1DepthTex = (OGLTexture *)(v1 + 780272);
  this->m_TextureData.Chara2DepthTex = (OGLTexture *)(v1 + 780432);
  this->m_TextureData.StageDepthTex = (OGLTexture *)(v1 + 780512);
  m_PlayerNum = this->m_pParticleEmitter->m_pEffectDataListManager->m_PlayerNum;
  this->m_TextureData.DistortionChara1Tex = (OGLTexture *)(v1 + 777872);
  this->m_TextureData.DistortionChara2Tex = (OGLTexture *)(v1 + 778032);
  this->m_TextureData.DistortionStageTex = (OGLTexture *)(v1 + 778112);
  if ( (_DWORD)m_PlayerNum != -1 )
    this->m_TextureData.CharaBlurTex = (OGLTexture *)(v1 + 80 * (m_PlayerNum + 9785));
}

void __fastcall AgProgram::run(AgProgram *this)
{
  this->onExecuteImpl(this);
}

void __fastcall ParticleTypeState::loadFigureToCPUMem(ParticleTypeState *this, const char *filename)
{
  _QWORD *ResourceByName; // rax
  extension::AsyncStatus::Step v4; // edx
  __int64 v5; // rdi
  OGLFigure *v6; // rax
  DialogData *Myfirst; // rax
  float *v8; // rcx
  DialogData *v9; // rcx
  float *v10; // rdx
  float v11; // xmm0_4
  DialogData *v12; // rax
  float *v13; // rcx
  DialogData *v14; // rcx
  float *v15; // rdx
  float v16; // xmm0_4
  DialogData *v17; // rcx
  float *v18; // rdx
  DialogData *v19; // rcx
  float *v20; // rdx
  float v21; // xmm0_4
  DialogData *v22; // rcx
  float *v23; // rdx
  DialogData *v24; // rcx
  float *v25; // rdx
  float v26; // xmm0_4
  DialogData *v27; // rcx
  float *v28; // rdx
  DialogData *v29; // rcx
  float *v30; // rdx
  float *texCoord; // rcx
  float *color; // rcx
  ParticleEmitterData *m_pParticleEmitterData; // rax
  DialogData *v34; // r8
  float *v35; // rdx
  ParticleEmitterData *v36; // rcx
  DialogData *v37; // r8
  float *v38; // rcx
  ParticleEmitterData *v39; // rcx
  unsigned __int64 v40; // r8
  __int64 v41; // rcx
  MeshVertexInfo2D **p_vertexBuffer; // rdi
  __int64 v43; // rsi
  unsigned __int64 v44; // r8
  signed int v45; // er9
  OGLFigure *m_FigureData; // rax
  char *m_pfVertexBuffer; // r10
  __int64 v48; // rdx
  float *v49; // r8
  __int64 v50; // xmm0_8
  MeshVertexInfo2D *v51; // rcx
  signed int v52; // er9
  __int64 v53; // rdx
  float *v54; // r8
  __int64 v55; // xmm0_8
  MeshVertexInfo2D *v56; // rcx
  signed int v57; // er8
  __int64 v58; // rcx
  _OWORD *v59; // rdx
  Vector4Unaligned v60; // xmm0
  signed int v61; // er9
  __int64 v62; // rdx
  __int64 v63; // r8
  signed int v64; // er9
  __int64 v65; // rdx
  __int64 v66; // r8

  ResourceByName = Fw::ResourceManager::GetResourceByName(filename);
  if ( ResourceByName )
  {
    v5 = *(_QWORD *)(ResourceByName[1] + 16i64);
    if ( !v5 || *(_BYTE *)(v5 + 96) )
    {
      v6 = 0i64;
    }
    else
    {
      if ( (*(_QWORD *)(v5 + 88) & 1) == 0 )
        extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v5 + 88), v4);
      v6 = *(OGLFigure **)(v5 + 72);
    }
    this->m_FigureData = v6;
    if ( v6 )
    {
      this->uvColor1Size[0] = 1.0;
      this->uvColor1Size[1] = 1.0;
      Myfirst = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
      v8 = Myfirst[3].allEditNumData._Mypair._Myval2._Myfirst;
      if ( !(Myfirst[3].allEditNumData._Mypair._Myval2._Mylast - v8) )
        std::_Xout_of_range("invalid vector<T> subscript");
      this->uvColor1Size[0] = 1.0 / *v8;
      v9 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
      v10 = v9[3].allEditNumData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v9[3].allEditNumData._Mypair._Myval2._Mylast - v10) <= 1 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v11 = 1.0 / v10[1];
      this->uvColor2Size[0] = 1.0;
      this->uvColor2Size[1] = 1.0;
      this->uvColor1Size[1] = v11;
      v12 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
      v13 = v12[4].allEditNumData._Mypair._Myval2._Myfirst;
      if ( !(v12[4].allEditNumData._Mypair._Myval2._Mylast - v13) )
        std::_Xout_of_range("invalid vector<T> subscript");
      this->uvColor2Size[0] = 1.0 / *v13;
      v14 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
      v15 = v14[4].allEditNumData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v14[4].allEditNumData._Mypair._Myval2._Mylast - v15) <= 1 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v16 = 1.0 / v15[1];
      this->uvAlpha1Size[0] = 1.0;
      this->uvAlpha1Size[1] = 1.0;
      this->uvColor2Size[1] = v16;
      v17 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
      v18 = v17[3].allEditNumData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v17[3].allEditNumData._Mypair._Myval2._Mylast - v18) <= 0xE )
        std::_Xout_of_range("invalid vector<T> subscript");
      this->uvAlpha1Size[0] = 1.0 / v18[14];
      v19 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
      v20 = v19[3].allEditNumData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v19[3].allEditNumData._Mypair._Myval2._Mylast - v20) <= 0xF )
        std::_Xout_of_range("invalid vector<T> subscript");
      v21 = 1.0 / v20[15];
      this->uvAlpha2Size[0] = 1.0;
      this->uvAlpha2Size[1] = 1.0;
      this->uvAlpha1Size[1] = v21;
      v22 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
      v23 = v22[4].allEditNumData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v22[4].allEditNumData._Mypair._Myval2._Mylast - v23) <= 7 )
        std::_Xout_of_range("invalid vector<T> subscript");
      this->uvAlpha2Size[0] = 1.0 / v23[7];
      v24 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
      v25 = v24[4].allEditNumData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v24[4].allEditNumData._Mypair._Myval2._Mylast - v25) <= 8 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v26 = 1.0 / v25[8];
      this->uvNormalSize[0] = 1.0;
      this->uvNormalSize[1] = 1.0;
      this->uvAlpha2Size[1] = v26;
      v27 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
      v28 = v27[3].allEditNumData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v27[3].allEditNumData._Mypair._Myval2._Mylast - v28) <= 7 )
        std::_Xout_of_range("invalid vector<T> subscript");
      this->uvNormalSize[0] = 1.0 / v28[7];
      v29 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
      v30 = v29[3].allEditNumData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v29[3].allEditNumData._Mypair._Myval2._Mylast - v30) <= 8 )
        std::_Xout_of_range("invalid vector<T> subscript");
      this->uvNormalSize[1] = 1.0 / v30[8];
      texCoord = this->texCoord;
      if ( texCoord )
      {
        free(texCoord);
        this->texCoord = 0i64;
      }
      color = this->color;
      if ( color )
      {
        free(color);
        this->color = 0i64;
      }
      this->texCoord = (float *)malloc(0x10ui64);
      this->color = (float *)malloc(0x10ui64);
      m_pParticleEmitterData = this->m_pParticleEmitterData;
      v34 = m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Mylast - v34) <= 3 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v35 = v34[3].allEditNumData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v34[3].allEditNumData._Mypair._Myval2._Mylast - v35) <= 5 )
        std::_Xout_of_range("invalid vector<T> subscript");
      *this->texCoord = v35[5];
      v36 = this->m_pParticleEmitterData;
      v37 = v36->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v36->AllDialogData._Mypair._Myval2._Mylast - v37) <= 3 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v38 = v37[3].allEditNumData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v37[3].allEditNumData._Mypair._Myval2._Mylast - v38) <= 4 )
        std::_Xout_of_range("invalid vector<T> subscript");
      this->texCoord[1] = v38[4];
      v39 = this->m_pParticleEmitterData;
      v40 = (unsigned __int64)v39->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)((__int64)((__int64)v39->AllDialogData._Mypair._Myval2._Mylast - v40) / 96) <= 3 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v41 = *(_QWORD *)(v40 + 288);
      if ( (unsigned __int64)((*(_QWORD *)(v40 + 296) - v41) >> 2) <= 6 )
        std::_Xout_of_range("invalid vector<T> subscript");
      p_vertexBuffer = &this->m_EffectMeshData[0].vertexBuffer;
      v43 = 376i64;
      this->texCoord[2] = (float)(*(float *)(v41 + 24) * 3.1415927) / 180.0;
      do
      {
        *((_DWORD *)p_vertexBuffer - 8) = 4;
        *p_vertexBuffer = (MeshVertexInfo2D *)Framework::MemoryManager::allocate(
                                                this->m_pParticleEmitter->m_pGpuMemory,
                                                (unsigned __int64)this->m_FigureData->m_usVertexCoordCount << 6,
                                                v40);
        p_vertexBuffer[16] = (MeshVertexInfo2D *)Framework::MemoryManager::allocate(
                                                   this->m_pParticleEmitter->m_pGpuMemory,
                                                   4i64 * this->m_FigureData->m_usIndexCount,
                                                   v44);
        v45 = 0;
        *(ParticleEmitter_vtbl **)((char *)&this->m_pParticleEmitter->__vftable + v43) = (ParticleEmitter_vtbl *)this->m_pParticleEmitter->m_pGpuMemory;
        *((_DWORD *)p_vertexBuffer + 27) = this->m_FigureData->m_usVertexCoordCount;
        *((_DWORD *)p_vertexBuffer + 29) = this->m_FigureData->m_usIndexCount;
        m_FigureData = this->m_FigureData;
        m_pfVertexBuffer = (char *)m_FigureData->m_pfVertexBuffer;
        if ( (int)m_FigureData->m_usVertexCoordCount > 0 )
        {
          v48 = 0i64;
          v49 = (float *)m_FigureData->m_pfVertexBuffer;
          do
          {
            v50 = *(_QWORD *)v49;
            v49 += 34;
            v51 = *p_vertexBuffer;
            ++v48;
            ++v45;
            *(_QWORD *)&v51[v48 - 1].m_position.x = v50;
            v51[v48 - 1].m_position.z = *(v49 - 32);
          }
          while ( v45 < (signed int)this->m_FigureData->m_usVertexCoordCount );
        }
        v52 = 0;
        if ( (int)this->m_FigureData->m_usNormalCoordCount > 0 )
        {
          v53 = 0i64;
          v54 = (float *)(m_pfVertexBuffer + 12);
          do
          {
            v55 = *(_QWORD *)v54;
            v54 += 34;
            v56 = *p_vertexBuffer;
            ++v53;
            ++v52;
            *(_QWORD *)&v56[v53 - 1].m_normal.x = v55;
            v56[v53 - 1].m_normal.z = *(v54 - 32);
          }
          while ( v52 < (signed int)this->m_FigureData->m_usNormalCoordCount );
        }
        v57 = 0;
        if ( (int)this->m_FigureData->m_usTangentCoordCount > 0 )
        {
          v58 = 0i64;
          v59 = m_pfVertexBuffer + 24;
          do
          {
            ++v57;
            v60 = (Vector4Unaligned)*v59;
            v59 = (_OWORD *)((char *)v59 + 136);
            (*p_vertexBuffer)[v58++].m_tangent = v60;
          }
          while ( v57 < (signed int)this->m_FigureData->m_usTangentCoordCount );
        }
        v61 = 0;
        if ( (int)this->m_FigureData->m_usVertexColorCount > 0 )
        {
          v62 = 0i64;
          v63 = 0i64;
          do
          {
            v63 += 4i64;
            ++v61;
            (*p_vertexBuffer)[v62++].m_color = *(Vector4Unaligned *)&this->m_FigureData->m_pfVertexColor[v63 - 4];
          }
          while ( v61 < (signed int)this->m_FigureData->m_usVertexColorCount );
        }
        v64 = 0;
        if ( (int)this->m_FigureData->m_usTexCoordCount[0] > 0 )
        {
          v65 = 0i64;
          v66 = 0i64;
          do
          {
            v66 += 2i64;
            ++v65;
            ++v64;
            (*p_vertexBuffer)[v65 - 1].m_texture = *(Vector2Unaligned *)&this->m_FigureData->m_pfTexCoord[0][v66 - 2];
          }
          while ( v64 < (signed int)this->m_FigureData->m_usTexCoordCount[0] );
        }
        memmove(p_vertexBuffer[16], this->m_FigureData->m_pusIndex, 4i64 * this->m_FigureData->m_usIndexCount);
        v43 += 8i64;
        p_vertexBuffer += 21;
      }
      while ( v43 < 392 );
    }
    else
    {
      _DummyLogging("not get : %s\n");
    }
  }
  else
  {
    _DummyLogging("not found : %s\n");
  }
}

void __fastcall ParticleTypeState::loadFigureToGPUMem(ParticleTypeState *this, const char *filename)
{
  OGLFigure *Myval2; // rdi
  extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> *v5; // r13
  unsigned __int64 v6; // r8
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache *v7; // rcx
  extension::AsyncStatus::Step v8; // edx
  char *Ptr; // rcx
  char *v10; // rax
  extension::AsyncContent<OGLFigure> *m_ptr; // rbp
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *v12; // rcx
  DialogData *Myfirst; // rax
  float *v14; // rcx
  DialogData *v15; // rcx
  float *v16; // rdx
  DialogData *v17; // rax
  float *v18; // rcx
  DialogData *v19; // rcx
  float *v20; // rdx
  DialogData *v21; // rcx
  float *v22; // rdx
  DialogData *v23; // rcx
  float *v24; // rdx
  DialogData *v25; // rcx
  float *v26; // rdx
  DialogData *v27; // rcx
  float *v28; // rdx
  DialogData *v29; // rcx
  float *v30; // rdx
  DialogData *v31; // rcx
  float *v32; // rdx
  unsigned int *p_vertexCount; // rdx
  __int64 v34; // r8
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *v35; // rcx
  std::string v36; // [rsp+28h] [rbp-90h] BYREF
  __int64 v37; // [rsp+48h] [rbp-70h]
  extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> *v38; // [rsp+50h] [rbp-68h]
  std::string _Right; // [rsp+60h] [rbp-58h] BYREF

  v37 = -2i64;
  Myval2 = 0i64;
  v5 = (extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> *)operator new(0x10ui64);
  v38 = v5;
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *filename )
  {
    v6 = -1i64;
    do
      ++v6;
    while ( filename[v6] );
  }
  else
  {
    v6 = 0i64;
  }
  std::string::assign(&_Right, filename, v6);
  BYTE1(v5->m_ptr) = 0;
  v36._Mypair._Myval2._Myres = 15i64;
  v36._Mypair._Myval2._Mysize = 0i64;
  v36._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v36, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache::getCachedOrLoadStart(
    v7,
    v5 + 1,
    &v36,
    0i64);
  if ( _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v10 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v10 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v10) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v10) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  m_ptr = v5[1].m_ptr->m_content.m_ptr;
  if ( m_ptr && !m_ptr->m_isDataReleased )
  {
    if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&m_ptr->m_status, v8);
    Myval2 = m_ptr->m_data._Mypair._Myval2;
  }
  this->m_FigureData = Myval2;
  if ( Myval2 )
  {
    this->uvColor1Size[0] = 1.0;
    this->uvColor1Size[1] = 1.0;
    Myfirst = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v14 = Myfirst[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( !(Myfirst[3].allEditNumData._Mypair._Myval2._Mylast - v14) )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->uvColor1Size[0] = 1.0 / *v14;
    v15 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v16 = v15[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v15[3].allEditNumData._Mypair._Myval2._Mylast - v16) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->uvColor1Size[1] = 1.0 / v16[1];
    this->uvColor2Size[0] = 1.0;
    this->uvColor2Size[1] = 1.0;
    v17 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v18 = v17[4].allEditNumData._Mypair._Myval2._Myfirst;
    if ( !(v17[4].allEditNumData._Mypair._Myval2._Mylast - v18) )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->uvColor2Size[0] = 1.0 / *v18;
    v19 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v20 = v19[4].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v19[4].allEditNumData._Mypair._Myval2._Mylast - v20) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->uvColor2Size[1] = 1.0 / v20[1];
    this->uvAlpha1Size[0] = 1.0;
    this->uvAlpha1Size[1] = 1.0;
    v21 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v22 = v21[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v21[3].allEditNumData._Mypair._Myval2._Mylast - v22) <= 0xE )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->uvAlpha1Size[0] = 1.0 / v22[14];
    v23 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v24 = v23[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v23[3].allEditNumData._Mypair._Myval2._Mylast - v24) <= 0xF )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->uvAlpha1Size[1] = 1.0 / v24[15];
    this->uvAlpha2Size[0] = 1.0;
    this->uvAlpha2Size[1] = 1.0;
    v25 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v26 = v25[4].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v25[4].allEditNumData._Mypair._Myval2._Mylast - v26) <= 7 )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->uvAlpha2Size[0] = 1.0 / v26[7];
    v27 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v28 = v27[4].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v27[4].allEditNumData._Mypair._Myval2._Mylast - v28) <= 8 )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->uvAlpha2Size[1] = 1.0 / v28[8];
    this->uvNormalSize[0] = 1.0;
    this->uvNormalSize[1] = 1.0;
    v29 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v30 = v29[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v29[3].allEditNumData._Mypair._Myval2._Mylast - v30) <= 7 )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->uvNormalSize[0] = 1.0 / v30[7];
    v31 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v32 = v31[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v31[3].allEditNumData._Mypair._Myval2._Mylast - v32) <= 8 )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->uvNormalSize[1] = 1.0 / v32[8];
    p_vertexCount = &this->m_EffectMeshData[0].vertexCount;
    v34 = 2i64;
    do
    {
      *(p_vertexCount - 35) = 4;
      *p_vertexCount = this->m_FigureData->m_usVertexCoordCount;
      p_vertexCount[2] = this->m_FigureData->m_usIndexCount;
      *(_QWORD *)(p_vertexCount - 33) = this->m_FigureData->m_pfVertexBuffer;
      *(_QWORD *)(p_vertexCount - 29) = this->m_FigureData->m_pfTexCoord[0];
      *(_QWORD *)(p_vertexCount - 31) = this->m_FigureData->m_pfVertexColor;
      *(_QWORD *)(p_vertexCount + 5) = this->m_FigureData->m_pusIndex;
      p_vertexCount += 42;
      --v34;
    }
    while ( v34 );
    v35 = v5[1].m_ptr;
    if ( v35
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v35->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *, __int64))v35->~RefCountableWeakSupportBase)(
        v35,
        1i64);
    }
    operator delete(v5, 0x10ui64);
  }
  else
  {
    v12 = v5[1].m_ptr;
    if ( v12 )
    {
      if ( _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&v12->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
        ((void (__fastcall *)(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *, __int64))v12->~RefCountableWeakSupportBase)(
          v12,
          1i64);
    }
    operator delete(v5, 0x10ui64);
    _DummyLogging("not get : %s\n");
  }
}

void __fastcall ParticleTypeState::loadTexture(
        ParticleTypeState *this,
        const char *filename,
        EffectTextureType texType)
{
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *ColorTexture1; // rdi
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *m_ptr; // rcx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *v8; // rdi
  unsigned __int64 v9; // r8
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache *v10; // rcx
  extension::AsyncStatus::Step v11; // edx
  extension::exsound_detail::SoundBankImpl *v12; // rdx
  OGLTexture *v13; // r9
  std::string v14; // [rsp+28h] [rbp-80h] BYREF
  __int64 v15; // [rsp+48h] [rbp-60h]
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *v16; // [rsp+50h] [rbp-58h]
  std::string _Right; // [rsp+60h] [rbp-48h] BYREF

  if ( !filename )
    return;
  v15 = -2i64;
  if ( !*filename )
    return;
  switch ( texType )
  {
    case COLOR1_TEXTURE:
      ColorTexture1 = this->m_FutureTexture.ColorTexture1;
LABEL_13:
      if ( ColorTexture1 )
      {
        m_ptr = ColorTexture1->m_body.m_ptr;
        if ( m_ptr
          && _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
        {
          ((void (__fastcall *)(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
            m_ptr,
            1i64);
        }
        operator delete(ColorTexture1, 0x10ui64);
      }
      break;
    case COLOR2_TEXTURE:
      ColorTexture1 = this->m_FutureTexture.ColorTexture2;
      goto LABEL_13;
    case ALPHA1_TEXTURE:
      ColorTexture1 = this->m_FutureTexture.AlphaTexture1;
      goto LABEL_13;
    case ALPHA2_TEXTURE:
      ColorTexture1 = this->m_FutureTexture.AlphaTexture2;
      goto LABEL_13;
    case NORMAL_TEXTURE:
      ColorTexture1 = this->m_FutureTexture.NormalTexture;
      goto LABEL_13;
  }
  v8 = (extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *)operator new(0x10ui64);
  v16 = v8;
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *filename )
  {
    v9 = -1i64;
    do
      ++v9;
    while ( filename[v9] );
  }
  else
  {
    v9 = 0i64;
  }
  std::string::assign(&_Right, filename, v9);
  v8->m_isNoCache = 0;
  v14._Mypair._Myval2._Myres = 15i64;
  v14._Mypair._Myval2._Mysize = 0i64;
  v14._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v14, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache::getCachedOrLoadStart(
    v10,
    &v8->m_body,
    &v14,
    0i64);
  std::string::~string(&_Right);
  if ( texType )
  {
    switch ( texType )
    {
      case COLOR2_TEXTURE:
        this->m_FutureTexture.ColorTexture2 = v8;
        break;
      case ALPHA1_TEXTURE:
        this->m_FutureTexture.AlphaTexture1 = v8;
        break;
      case ALPHA2_TEXTURE:
        this->m_FutureTexture.AlphaTexture2 = v8;
        break;
      case NORMAL_TEXTURE:
        this->m_FutureTexture.NormalTexture = v8;
        break;
    }
  }
  else
  {
    this->m_FutureTexture.ColorTexture1 = v8;
  }
  v12 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
          (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)v8,
          v11);
  if ( (unsigned int)texType <= CHARA_BLUR_TEXTURE )
    ParticleTypeState::setTexture((ParticleTypeState *)&this->m_TextureData, (EffectTextureData *)v12, texType, v13);
  if ( !v12 )
    _DummyLogging("Texture not found : %s\n");
}

void __fastcall ParticleTypeState::rotationAxisBillboard(
        ParticleTypeState *this,
        ParticleData *pParticleData,
        OGLEffectMatrix *pBoneMat,
        EffectData *pEffectData,
        int axis)
{
  OGLEffectMatrix *p_WorldMat; // rdi
  float v8; // xmm8_4
  BattleSystem::BattleController *v9; // rax
  OGLVec3 *CameraPos; // rax
  float x; // xmm11_4
  float y; // xmm12_4
  float z; // xmm13_4
  float v14; // xmm9_4
  float v15; // xmm2_4
  float v16; // xmm10_4
  float v17; // xmm5_4
  float v18; // xmm4_4
  float *m; // rax
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm9_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm5_4
  float v26; // xmm12_4
  float v27; // xmm13_4
  OGLVec3 v28; // [rsp+40h] [rbp-C8h] BYREF
  void **v29; // [rsp+58h] [rbp-B0h]
  __int64 v30; // [rsp+60h] [rbp-A8h]
  __int64 v31; // [rsp+68h] [rbp-A0h]
  int v32; // [rsp+70h] [rbp-98h]
  __int64 v33; // [rsp+74h] [rbp-94h]
  int v34; // [rsp+7Ch] [rbp-8Ch]
  __int64 v35; // [rsp+80h] [rbp-88h]
  __int64 v36; // [rsp+88h] [rbp-80h]
  __int64 v37; // [rsp+90h] [rbp-78h]
  __int64 v38; // [rsp+98h] [rbp-70h]
  void **v39; // [rsp+A8h] [rbp-60h]
  OGLVec3 vIn2; // [rsp+B0h] [rbp-58h] BYREF
  void **v41; // [rsp+C0h] [rbp-48h]
  OGLVec3 v; // [rsp+C8h] [rbp-40h] BYREF
  void **v43; // [rsp+D8h] [rbp-30h]
  OGLQuat w; // [rsp+E0h] [rbp-28h] BYREF
  void **v45; // [rsp+F0h] [rbp-18h]
  __int64 v46; // [rsp+F8h] [rbp-10h]
  int v47; // [rsp+100h] [rbp-8h]
  __int64 v48; // [rsp+108h] [rbp+0h]
  BattleSystem::BattleController *v49; // [rsp+110h] [rbp+8h]
  OGLVec3 result; // [rsp+118h] [rbp+10h] BYREF
  OGLEffectMatrix v51; // [rsp+128h] [rbp+20h] BYREF

  v48 = -2i64;
  p_WorldMat = &pParticleData->WorldMat;
  v29 = &OGLEffectMatrix::`vftable';
  v30 = 1065353216i64;
  v8 = 0.0;
  v32 = 0;
  v35 = 0i64;
  v37 = 0i64;
  v33 = 1065353216i64;
  v31 = 0i64;
  v36 = 1065353216i64;
  v38 = 0x3F80000000000000i64;
  v34 = 0;
  v46 = 0i64;
  v47 = 0;
  v45 = &OGLEffectVec3::`vftable';
  v9 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v49 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v49);
    BattleSystem::BattleController::instance = v9;
  }
  CameraPos = ActionSystem::GetCameraPos(&v9->actSystem, &result);
  x = CameraPos->x;
  y = CameraPos->y;
  z = CameraPos->z;
  v14 = 0.0;
  v15 = 0.0;
  v16 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v41 = &OGLEffectVec3::`vftable';
  if ( axis )
  {
    if ( axis == 1 )
    {
      v14 = 0.0;
      v15 = *(float *)&FLOAT_1_0;
      v16 = 0.0;
      v17 = *(float *)&FLOAT_1_0;
      v18 = 0.0;
      if ( pParticleData->mirrorFlag )
      {
        v17 = FLOAT_N1_0;
        v18 = FLOAT_N0_0;
        v8 = FLOAT_N0_0;
      }
    }
    else if ( axis == 2 )
    {
      v16 = *(float *)&FLOAT_1_0;
      v17 = FLOAT_N1_0;
      if ( pParticleData->mirrorFlag )
      {
        v17 = *(float *)&FLOAT_1_0;
        v18 = FLOAT_N0_0;
        v8 = FLOAT_N0_0;
      }
    }
  }
  else
  {
    v14 = *(float *)&FLOAT_1_0;
    v15 = 0.0;
    v16 = 0.0;
    v17 = 0.0;
    v18 = FLOAT_N1_0;
    if ( pParticleData->mirrorFlag )
    {
      v14 = FLOAT_N1_0;
      v15 = FLOAT_N0_0;
      v16 = FLOAT_N0_0;
    }
  }
  m = p_WorldMat->m;
  if ( !p_WorldMat )
    m = 0i64;
  v20 = (float)((float)(*m * v14) + (float)(v15 * m[4])) + (float)(v16 * m[8]);
  v21 = (float)((float)(v14 * m[1]) + (float)(v15 * m[5])) + (float)(v16 * m[9]);
  v22 = (float)((float)(v14 * m[2]) + (float)(v15 * m[6])) + (float)(v16 * m[10]);
  v23 = (float)((float)(*m * v17) + (float)(v18 * m[4])) + (float)(v8 * m[8]);
  v24 = (float)((float)(v17 * m[1]) + (float)(v18 * m[5])) + (float)(v8 * m[9]);
  v25 = (float)((float)(v17 * m[2]) + (float)(v18 * m[6])) + (float)(v8 * m[10]);
  v.x = v23;
  v.y = v24;
  v.z = v25;
  OGLVec3::normalize(&v, &v);
  v26 = y - p_WorldMat->m[13];
  v27 = z - p_WorldMat->m[14];
  v28.x = (float)(x - p_WorldMat->m[12]) - pBoneMat->m[12];
  v28.y = v26 - pBoneMat->m[13];
  v28.z = v27 - pBoneMat->m[14];
  OGLVec3::normalize(&v28, &v28);
  v39 = &OGLEffectVec3::`vftable';
  vIn2.x = (float)(v28.z * v21) - (float)(v28.y * v22);
  vIn2.y = (float)(v28.x * v22) - (float)(v28.z * v20);
  vIn2.z = (float)(v28.y * v20) - (float)(v28.x * v21);
  OGLVec3::normalize(&vIn2, &vIn2);
  v43 = &OGLEffectQuat::`vftable';
  w = (OGLQuat)_xmm;
  OGLQuat::set(&w, &v, &vIn2);
  memset(&v51.OGLMatrix, 0, sizeof(v51.OGLMatrix));
  v51.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  OGLEffectMatrix::rotationQuaternion(&v51, w.x, w.y, w.z, w.w);
  OGLMatrix::multiply(&p_WorldMat->OGLMatrix, &v51.OGLMatrix);
}

void __fastcall ParticleTypeState::rotationBillboard(
        ParticleTypeState *this,
        ParticleData *pParticleData,
        OGLEffectMatrix *pBoneMat,
        EffectData *pEffectData)
{
  BattleSystem::BattleController *v7; // r8
  BattleSystem::BattleController *v8; // rax
  bool bFreeCameraMode; // r9
  __m128 x_low; // xmm0
  __m128 y_low; // xmm1
  float z; // xmm15_4
  DialogData *Myfirst; // rcx
  float v14; // xmm2_4
  float v15; // xmm1_4
  float y; // xmm1_4
  float v17; // xmm0_4
  __m128 v18; // xmm6
  __m128 v19; // xmm2
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm12_4
  float v23; // xmm13_4
  float v24; // xmm14_4
  float v25; // xmm6_4
  float v26; // xmm10_4
  float v27; // xmm11_4
  float v28; // xmm7_4
  float v29; // xmm8_4
  float v30; // xmm9_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm4_4
  float v35; // xmm3_4
  float v36; // xmm2_4
  float v37; // xmm6_4
  float v38; // xmm7_4
  float v39; // xmm0_4
  float x; // xmm6_4
  float v41; // xmm7_4
  float v42; // xmm0_4
  float v43; // xmm6_4
  float v44; // xmm7_4
  float v45; // xmm0_4
  OGLVec3 up; // [rsp+20h] [rbp-328h] BYREF
  float v47; // [rsp+30h] [rbp-318h]
  OGLVec3 look; // [rsp+38h] [rbp-310h] BYREF
  BattleSystem::BattleController *v49; // [rsp+48h] [rbp-300h]
  OGLMatrix In; // [rsp+50h] [rbp-2F8h] BYREF
  OGLEffectVec3 v51; // [rsp+90h] [rbp-2B8h] BYREF
  OGLMatrix v52; // [rsp+B0h] [rbp-298h]
  float v53; // [rsp+F8h] [rbp-250h]
  void **v54; // [rsp+100h] [rbp-248h]
  OGLVec3 v55; // [rsp+108h] [rbp-240h] BYREF
  void **v56; // [rsp+118h] [rbp-230h]
  OGLVec3 v57; // [rsp+120h] [rbp-228h] BYREF
  void **v58; // [rsp+130h] [rbp-218h]
  __int128 v59; // [rsp+138h] [rbp-210h] BYREF
  __int64 v60; // [rsp+148h] [rbp-200h]
  void **v61; // [rsp+150h] [rbp-1F8h]
  OGLMatrix v62; // [rsp+158h] [rbp-1F0h] BYREF
  void **v63; // [rsp+1A0h] [rbp-1A8h]
  OGLMatrix v64; // [rsp+1A8h] [rbp-1A0h] BYREF
  void **v65; // [rsp+1F0h] [rbp-158h]
  OGLMatrix v66; // [rsp+1F8h] [rbp-150h] BYREF
  void **v67; // [rsp+240h] [rbp-108h]
  OGLMatrix v68[3]; // [rsp+248h] [rbp-100h] BYREF

  v60 = -2i64;
  *(_QWORD *)&look.x = 0i64;
  look.z = 0.0;
  memset(&In, 0, sizeof(In));
  v7 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v49 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v49);
    v7 = v8;
    BattleSystem::BattleController::instance = v8;
  }
  bFreeCameraMode = v7->actSystem.bFreeCameraMode;
  if ( bFreeCameraMode )
  {
    x_low = (__m128)LODWORD(v7->actSystem.freeCamera.vPos.x);
    y_low = (__m128)LODWORD(v7->actSystem.freeCamera.vPos.y);
    z = v7->actSystem.freeCamera.vPos.z;
  }
  else if ( (unsigned int)(v7->actSystem.cameraCtrl.offset.type - 3) <= 2 )
  {
    x_low = (__m128)LODWORD(v7->actSystem.cameraCtrl.offset.vStart.x);
    y_low = (__m128)LODWORD(v7->actSystem.cameraCtrl.offset.vStart.y);
    z = v7->actSystem.cameraCtrl.offset.vStart.z;
  }
  else
  {
    x_low = (__m128)LODWORD(v7->actSystem.cameraCtrl.vPos.x);
    y_low = (__m128)LODWORD(v7->actSystem.cameraCtrl.vPos.y);
    z = v7->actSystem.cameraCtrl.vPos.z;
  }
  v47 = x_low.m128_f32[0];
  LODWORD(v49) = y_low.m128_i32[0];
  up.z = z;
  v51.__vftable = (OGLEffectVec3_vtbl *)_mm_unpacklo_ps(x_low, y_low).m128_u64[0];
  v51.x = z;
  if ( !(pEffectData->AllDialogData._Mypair._Myval2._Mylast - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  Myfirst = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst->allButtonIndexData._Mypair._Myval2._Mylast
                        - Myfirst->allButtonIndexData._Mypair._Myval2._Myfirst) <= 6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( Myfirst->allButtonIndexData._Mypair._Myval2._Myfirst[6] == 1 )
  {
    if ( bFreeCameraMode )
    {
      up.x = v7->actSystem.freeCamera.vLook.x;
      y = v7->actSystem.freeCamera.vLook.y;
      v17 = v7->actSystem.freeCamera.vLook.z;
    }
    else if ( (unsigned int)(v7->actSystem.cameraCtrl.offset.type - 3) <= 2 )
    {
      up.x = v7->actSystem.cameraCtrl.offset.vStartLook.x;
      y = v7->actSystem.cameraCtrl.offset.vStartLook.y;
      v17 = v7->actSystem.cameraCtrl.offset.vStartLook.z;
    }
    else
    {
      up.x = v7->actSystem.cameraCtrl.vLook.x;
      y = v7->actSystem.cameraCtrl.vLook.y;
      v17 = v7->actSystem.cameraCtrl.vLook.z;
    }
    up.y = y;
    up.z = v17;
    *(_QWORD *)&look.x = *(_QWORD *)&up.x;
    look.z = v17;
  }
  else
  {
    v14 = pBoneMat->m[14];
    v15 = pBoneMat->m[13];
    look.x = pBoneMat->m[12];
    look.y = v15;
    look.z = v14;
  }
  if ( bFreeCameraMode )
  {
    v18 = (__m128)LODWORD(v7->actSystem.freeCamera.vUp.x);
    v19 = (__m128)LODWORD(v7->actSystem.freeCamera.vUp.y);
    v20 = v7->actSystem.freeCamera.vUp.z;
  }
  else
  {
    v18 = (__m128)LODWORD(v7->actSystem.cameraCtrl.vUp.x);
    v19 = (__m128)LODWORD(v7->actSystem.cameraCtrl.vUp.y);
    v20 = v7->actSystem.cameraCtrl.vUp.z;
  }
  v53 = v20;
  *(_QWORD *)&up.x = _mm_unpacklo_ps(v18, v19).m128_u64[0];
  up.z = v20;
  v21 = sqrtf(
          (float)((float)(v19.m128_f32[0] * v19.m128_f32[0]) + (float)(v18.m128_f32[0] * v18.m128_f32[0]))
        + (float)(v20 * v20));
  if ( v21 != 0.0 )
  {
    up.x = v18.m128_f32[0] / v21;
    up.y = up.y / v21;
    up.z = up.z / v21;
  }
  OGLMatrix::billboard(&In, (OGLVec3 *)&v51, &look, &up);
  v22 = In.m[0];
  *(_QWORD *)v52.m = __PAIR64__(LODWORD(In.m[4]), LODWORD(In.m[0]));
  v23 = In.m[1];
  *(_QWORD *)&v52.m[4] = __PAIR64__(LODWORD(In.m[5]), LODWORD(In.m[1]));
  v24 = In.m[2] * -1.0;
  v52.m[8] = In.m[2] * -1.0;
  *(_QWORD *)&v52.m[12] = __PAIR64__(LODWORD(In.m[7]), LODWORD(In.m[3]));
  v25 = In.m[4];
  v26 = In.m[5];
  v27 = In.m[6] * -1.0;
  v52.m[9] = In.m[6] * -1.0;
  v28 = In.m[8] * -1.0;
  v52.m[2] = In.m[8] * -1.0;
  v29 = In.m[9] * -1.0;
  v52.m[6] = In.m[9] * -1.0;
  v30 = (float)(In.m[10] * -1.0) * -1.0;
  v52.m[10] = v30;
  *(_QWORD *)&v52.m[14] = __PAIR64__(LODWORD(In.m[15]), LODWORD(In.m[11]));
  v52.m[3] = In.m[12];
  v52.m[7] = In.m[13];
  v52.m[11] = In.m[14];
  In = v52;
  OGLMatrix::multiply(&pParticleData->WorldMat.OGLMatrix, &In);
  v31 = pParticleData->WorldMat.m[12] + pBoneMat->m[12];
  v32 = pParticleData->WorldMat.m[13] + pBoneMat->m[13];
  v33 = pParticleData->WorldMat.m[14] + pBoneMat->m[14];
  v54 = &OGLEffectVec3::`vftable';
  v55.x = v47 - v31;
  v55.y = *(float *)&v49 - v32;
  v55.z = z - v33;
  v56 = &OGLEffectVec3::`vftable';
  v34 = (float)((float)(pBoneMat->m[5] * 0.0) + (float)(pBoneMat->m[1] * 0.0)) + pBoneMat->m[9];
  v35 = (float)((float)(pBoneMat->m[6] * 0.0) + (float)(pBoneMat->m[2] * 0.0)) + pBoneMat->m[10];
  v36 = (float)((float)(pBoneMat->m[4] * 0.0) + (float)(pBoneMat->m[0] * 0.0)) + pBoneMat->m[8];
  v57.x = (float)((float)(v36 * v22) + (float)(v23 * v34)) + (float)(v24 * v35);
  v57.y = (float)((float)(v36 * v25) + (float)(v26 * v34)) + (float)(v27 * v35);
  v57.z = (float)((float)(v36 * v28) + (float)(v29 * v34)) + (float)(v30 * v35);
  v58 = &OGLEffectQuat::`vftable';
  v59 = _xmm;
  OGLQuat::set((OGLQuat *)&v59, &v57, &v55);
  *(_QWORD *)&v51.x = 0i64;
  v51.z = 0.0;
  OGLEffectVec3::setRotateQuat(&v51, (OGLQuat *)&v59);
  memset(v68, 0, 64);
  v67 = &OGLEffectMatrix::`vftable';
  v63 = &OGLEffectMatrix::`vftable';
  v61 = &OGLEffectMatrix::`vftable';
  v65 = &OGLEffectMatrix::`vftable';
  v37 = v51.z;
  v38 = sinf(v51.z);
  v39 = cosf(v37);
  *(_QWORD *)&v64.m[2] = 0i64;
  *(_QWORD *)&v64.m[6] = 0i64;
  *(_QWORD *)&v64.m[8] = 0i64;
  *(_QWORD *)&v64.m[10] = 1065353216i64;
  *(_QWORD *)&v64.m[12] = 0i64;
  *(_QWORD *)&v64.m[14] = 0x3F80000000000000i64;
  v64.m[0] = v39;
  LODWORD(v64.m[4]) = LODWORD(v38) ^ _xmm;
  v64.m[1] = v38;
  v64.m[5] = v39;
  x = v51.x;
  v41 = sinf(v51.x);
  v42 = cosf(x);
  *(_QWORD *)v62.m = 1065353216i64;
  *(_QWORD *)&v62.m[2] = 0i64;
  v62.m[4] = 0.0;
  v62.m[7] = 0.0;
  v62.m[8] = 0.0;
  v62.m[11] = 0.0;
  *(_QWORD *)&v62.m[12] = 0i64;
  *(_QWORD *)&v62.m[14] = 0x3F80000000000000i64;
  v62.m[5] = v42;
  LODWORD(v62.m[9]) = LODWORD(v41) ^ _xmm;
  v62.m[6] = v41;
  v62.m[10] = v42;
  v43 = v51.y;
  v44 = sinf(v51.y);
  v45 = cosf(v43);
  v66.m[1] = 0.0;
  v66.m[3] = 0.0;
  *(_QWORD *)&v66.m[4] = 0x3F80000000000000i64;
  *(_QWORD *)&v66.m[6] = 0i64;
  v66.m[9] = 0.0;
  v66.m[11] = 0.0;
  *(_QWORD *)&v66.m[12] = 0i64;
  *(_QWORD *)&v66.m[14] = 0x3F80000000000000i64;
  v66.m[0] = v45;
  v66.m[8] = v44;
  LODWORD(v66.m[2]) = LODWORD(v44) ^ _xmm;
  v66.m[10] = v45;
  OGLMatrix::multiply(v68, &v64, &v62);
  OGLMatrix::multiply(v68, &v66);
  OGLMatrix::multiply(&pParticleData->WorldMat.OGLMatrix, v68);
}

void __fastcall ParticleTypeState::setEmitterAndData(
        ParticleTypeState *this,
        Effect *pParticleEmitter,
        EffectData *pParticleEmitterData)
{
  this->m_pParticleEmitter = (ParticleEmitter *)pParticleEmitter;
  this->m_pParticleEmitterData = (ParticleEmitterData *)pParticleEmitterData;
}

void __fastcall ParticleTypeState::setTexAnimeNum(
        ParticleTypeState *this,
        ParticleData *pParticleData,
        EffectData *pEffectData,
        EffectInstancingData *instData)
{
  int v4; // ebp
  int v6; // er15
  int v8; // edi
  int i; // esi
  int AnimationNum; // er12
  DialogData *v12; // rcx
  float *v13; // rdx
  DialogData *v14; // rcx
  float *v15; // rdx
  DialogData *v16; // rcx
  float *v17; // rdx
  DialogData *v18; // rcx
  float *v19; // rdx
  DialogData *Myfirst; // rcx
  int v21; // ecx
  int v22; // er8
  int v23; // er9
  DialogData *v24; // r10
  DialogData *v25; // r10

  v4 = (int)this;
  v6 = (int)this;
  v8 = (int)this;
  for ( i = 0; i < 13; ++i )
  {
    AnimationNum = ParticleTypeState::GetAnimationNum(this, pParticleData, pEffectData, (EffectTextureType)i);
    switch ( i )
    {
      case 0:
        Myfirst = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
        v19 = Myfirst[3].allEditNumData._Mypair._Myval2._Myfirst;
        if ( !(Myfirst[3].allEditNumData._Mypair._Myval2._Mylast - v19) )
          std::_Xout_of_range("invalid vector<T> subscript");
        v4 = (int)*v19;
        if ( (unsigned __int64)(Myfirst[3].allEditNumData._Mypair._Myval2._Mylast - v19) <= 1 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v6 = (int)v19[1];
        if ( (unsigned __int64)(Myfirst[3].allEditNumData._Mypair._Myval2._Mylast - v19) <= 2 )
          std::_Xout_of_range("invalid vector<T> subscript");
        goto LABEL_26;
      case 1:
        v18 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
        v19 = v18[4].allEditNumData._Mypair._Myval2._Myfirst;
        if ( !(v18[4].allEditNumData._Mypair._Myval2._Mylast - v19) )
          std::_Xout_of_range("invalid vector<T> subscript");
        v4 = (int)*v19;
        if ( (unsigned __int64)(v18[4].allEditNumData._Mypair._Myval2._Mylast - v19) <= 1 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v6 = (int)v19[1];
        if ( (unsigned __int64)(v18[4].allEditNumData._Mypair._Myval2._Mylast - v19) <= 2 )
          std::_Xout_of_range("invalid vector<T> subscript");
LABEL_26:
        v8 = (int)v19[2];
        break;
      case 2:
        v16 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
        v17 = v16[3].allEditNumData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v16[3].allEditNumData._Mypair._Myval2._Mylast - v17) <= 0xE )
          std::_Xout_of_range("invalid vector<T> subscript");
        v4 = (int)v17[14];
        if ( (unsigned __int64)(v16[3].allEditNumData._Mypair._Myval2._Mylast - v17) <= 0xF )
          std::_Xout_of_range("invalid vector<T> subscript");
        v6 = (int)v17[15];
        if ( (unsigned __int64)(v16[3].allEditNumData._Mypair._Myval2._Mylast - v17) <= 0x10 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v8 = (int)v17[16];
        break;
      case 3:
        v14 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
        v15 = v14[4].allEditNumData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v14[4].allEditNumData._Mypair._Myval2._Mylast - v15) <= 7 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v4 = (int)v15[7];
        if ( (unsigned __int64)(v14[4].allEditNumData._Mypair._Myval2._Mylast - v15) <= 8 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v6 = (int)v15[8];
        if ( (unsigned __int64)(v14[4].allEditNumData._Mypair._Myval2._Mylast - v15) <= 9 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v8 = (int)v15[9];
        break;
      case 4:
        v12 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
        v13 = v12[3].allEditNumData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v12[3].allEditNumData._Mypair._Myval2._Mylast - v13) <= 7 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v4 = (int)v13[7];
        if ( (unsigned __int64)(v12[3].allEditNumData._Mypair._Myval2._Mylast - v13) <= 8 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v6 = (int)v13[8];
        if ( (unsigned __int64)(v12[3].allEditNumData._Mypair._Myval2._Mylast - v13) <= 9 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v8 = (int)v13[9];
        break;
    }
    if ( v4 * v6 >= v8 )
      v21 = v4;
    else
      v21 = (int)sqrtf((float)v8);
    if ( v21 )
    {
      v22 = AnimationNum % v21;
      v23 = AnimationNum / v21;
    }
    else
    {
      v22 = 0;
      v23 = 0;
    }
    this = (ParticleTypeState *)(unsigned int)i;
    if ( i )
    {
      this = (ParticleTypeState *)(unsigned int)(i - 1);
      if ( i == 1 )
      {
        instData->m_texAnimeNumColor.z = (float)v22;
        instData->m_texAnimeNumColor.w = (float)v23;
      }
      else if ( i == 2 )
      {
        v25 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast - v25) <= 3 )
          std::_Xout_of_range("invalid vector<T> subscript");
        this = (ParticleTypeState *)v25[3].allButtonIndexData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(((char *)v25[3].allButtonIndexData._Mypair._Myval2._Mylast - (char *)this) >> 2) <= 5 )
          std::_Xout_of_range("invalid vector<T> subscript");
        if ( HIDWORD(this->m_pParticleEmitterData) )
        {
          instData->m_texAnimeNumAlpha.x = (float)v22;
          instData->m_texAnimeNumAlpha.y = (float)v23;
        }
        else
        {
          instData->m_texAnimeNumAlpha.x = instData->m_texAnimeNumColor.x;
          instData->m_texAnimeNumAlpha.y = instData->m_texAnimeNumColor.y;
        }
      }
      else
      {
        this = (ParticleTypeState *)(unsigned int)(i - 3);
        if ( i == 3 )
        {
          v24 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
          if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast - v24) <= 4 )
            std::_Xout_of_range("invalid vector<T> subscript");
          this = (ParticleTypeState *)v24[4].allButtonIndexData._Mypair._Myval2._Myfirst;
          if ( (unsigned __int64)(((char *)v24[4].allButtonIndexData._Mypair._Myval2._Mylast - (char *)this) >> 2) <= 3 )
            std::_Xout_of_range("invalid vector<T> subscript");
          if ( HIDWORD(this->m_pParticleEmitter) )
          {
            instData->m_texAnimeNumAlpha.z = (float)v22;
            instData->m_texAnimeNumAlpha.w = (float)v23;
          }
          else
          {
            instData->m_texAnimeNumAlpha.z = instData->m_texAnimeNumColor.z;
            instData->m_texAnimeNumAlpha.w = instData->m_texAnimeNumColor.w;
          }
        }
        else if ( i == 4 )
        {
          instData->m_texAnimeNumNormal.x = (float)v22;
          instData->m_texAnimeNumNormal.y = (float)v23;
        }
      }
    }
    else
    {
      instData->m_texAnimeNumColor.x = (float)v22;
      instData->m_texAnimeNumColor.y = (float)v23;
    }
  }
}

void __fastcall ParticleTypeState::setTexture(
        ParticleTypeState *this,
        EffectTextureData *pEffectTextureData,
        EffectTextureType type,
        OGLTexture *setTexture)
{
  switch ( type )
  {
    case COLOR1_TEXTURE:
      this->__vftable = (ParticleTypeState_vtbl *)pEffectTextureData;
      break;
    case COLOR2_TEXTURE:
      this->m_pParticleEmitter = (ParticleEmitter *)pEffectTextureData;
      break;
    case ALPHA1_TEXTURE:
      this->m_pParticleEmitterData = (ParticleEmitterData *)pEffectTextureData;
      break;
    case ALPHA2_TEXTURE:
      *(_QWORD *)this->m_VertexMemoryCount = pEffectTextureData;
      break;
    case NORMAL_TEXTURE:
      *(_QWORD *)this->m_IndexMemoryCount = pEffectTextureData;
      break;
    case CHARAS_DEPTH_TEXTURE:
      *(_QWORD *)&this->m_EffectMeshData[0].primitiveType = pEffectTextureData;
      break;
    case CHARA1_DEPTH_TEXTURE:
      this->m_EffectMeshData[0].vertexCompBuffer = (MeshVertexInfoComp *)pEffectTextureData;
      break;
    case CHARA2_DEPTH_TEXTURE:
      this->m_EffectMeshData[0].vColor = (float *)pEffectTextureData;
      break;
    case STAGE_DEPTH_TEXTURE:
      this->m_EffectMeshData[0].vTexCoord = (float *)pEffectTextureData;
      break;
    case DISTORTION_CHARA1_TEXTURE:
      this->m_EffectMeshData[0].vertexBuffer = (MeshVertexInfo2D *)pEffectTextureData;
      break;
    case DISTORTION_CHARA2_TEXTURE:
      this->m_EffectMeshData[0].crossBuffer = (MeshVertexInfo2D *)pEffectTextureData;
      break;
    case DISTORTION_STAGE_TEXTURE:
      *(_QWORD *)this->m_EffectMeshData[0].worldMat.m = pEffectTextureData;
      break;
    case CHARA_BLUR_TEXTURE:
      *(_QWORD *)&this->m_EffectMeshData[0].worldMat.m[2] = pEffectTextureData;
      break;
  }
}

void __fastcall ParticleTypeState::terminate(ParticleTypeState *this)
{
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *ColorTexture1; // rbx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *m_ptr; // rcx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *ColorTexture2; // rbx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v5; // rcx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *AlphaTexture1; // rbx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v7; // rcx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *AlphaTexture2; // rbx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v9; // rcx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *NormalTexture; // rbx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v11; // rcx
  float *vertex; // rcx
  float *texCoord; // rcx
  float *color; // rcx
  __int64 v15; // rsi
  float **p_uvAnimeNum; // rbx
  void *v17; // rdx
  Framework::MemoryManager *v18; // rcx
  Framework::MemoryManager *v19; // rcx
  float *v20; // rdx
  Framework::MemoryManager *v21; // rcx

  ColorTexture1 = this->m_FutureTexture.ColorTexture1;
  if ( ColorTexture1 )
  {
    m_ptr = ColorTexture1->m_body.m_ptr;
    if ( m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
    }
    operator delete(ColorTexture1, 0x10ui64);
    this->m_FutureTexture.ColorTexture1 = 0i64;
  }
  ColorTexture2 = this->m_FutureTexture.ColorTexture2;
  if ( ColorTexture2 )
  {
    v5 = ColorTexture2->m_body.m_ptr;
    if ( v5
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v5->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *, __int64))v5->~RefCountableWeakSupportBase)(
        v5,
        1i64);
    }
    operator delete(ColorTexture2, 0x10ui64);
    this->m_FutureTexture.ColorTexture2 = 0i64;
  }
  AlphaTexture1 = this->m_FutureTexture.AlphaTexture1;
  if ( AlphaTexture1 )
  {
    v7 = AlphaTexture1->m_body.m_ptr;
    if ( v7
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v7->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *, __int64))v7->~RefCountableWeakSupportBase)(
        v7,
        1i64);
    }
    operator delete(AlphaTexture1, 0x10ui64);
    this->m_FutureTexture.AlphaTexture1 = 0i64;
  }
  AlphaTexture2 = this->m_FutureTexture.AlphaTexture2;
  if ( AlphaTexture2 )
  {
    v9 = AlphaTexture2->m_body.m_ptr;
    if ( v9
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v9->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *, __int64))v9->~RefCountableWeakSupportBase)(
        v9,
        1i64);
    }
    operator delete(AlphaTexture2, 0x10ui64);
    this->m_FutureTexture.AlphaTexture2 = 0i64;
  }
  NormalTexture = this->m_FutureTexture.NormalTexture;
  if ( NormalTexture )
  {
    v11 = NormalTexture->m_body.m_ptr;
    if ( v11
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v11->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *, __int64))v11->~RefCountableWeakSupportBase)(
        v11,
        1i64);
    }
    operator delete(NormalTexture, 0x10ui64);
    this->m_FutureTexture.NormalTexture = 0i64;
  }
  vertex = this->vertex;
  if ( vertex )
  {
    free(vertex);
    this->vertex = 0i64;
  }
  texCoord = this->texCoord;
  if ( texCoord )
  {
    free(texCoord);
    this->texCoord = 0i64;
  }
  color = this->color;
  if ( color )
  {
    free(color);
    this->color = 0i64;
  }
  v15 = 344i64;
  p_uvAnimeNum = &this->m_EffectMeshData[0].uvAnimeNum;
  do
  {
    v17 = *(p_uvAnimeNum - 11);
    if ( v17 )
    {
      v18 = *(Framework::MemoryManager **)((char *)this->m_pParticleEmitter + v15 - 16);
      if ( v18 )
        Framework::MemoryManager::release(v18, v17);
      *(p_uvAnimeNum - 11) = 0i64;
    }
    if ( *p_uvAnimeNum )
    {
      v19 = *(Framework::MemoryManager **)((char *)&this->m_pParticleEmitter->__vftable + v15);
      if ( v19 )
        Framework::MemoryManager::release(v19, *p_uvAnimeNum);
      *p_uvAnimeNum = 0i64;
    }
    v20 = p_uvAnimeNum[1];
    if ( v20 )
    {
      v21 = *(Framework::MemoryManager **)((char *)&this->m_pParticleEmitter->m_BlendProjData.blendProjectionCenterPos.y
                                         + v15);
      if ( v21 )
        Framework::MemoryManager::release(v21, v20);
      p_uvAnimeNum[1] = 0i64;
    }
    v15 += 8i64;
    p_uvAnimeNum += 21;
  }
  while ( v15 < 360 );
}

