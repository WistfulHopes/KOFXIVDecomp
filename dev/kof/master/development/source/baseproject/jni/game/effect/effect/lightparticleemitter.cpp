#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstatecurve.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/randomnumbers.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitterstate/particleemitterstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/lightparticleemitter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitterstate/lightemitterstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitterstate/particleemitterstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectmanager/effectlightmanager.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E38A
LightParticleEmitter::~LightParticleEmitter(); // 0x140139FF0
void LightParticleEmitter::ownInitialize(); // 0x14013A080
void LightParticleEmitter::ownTerminate(); // 0x140138A90
void LightParticleEmitter::ownCleanup(float setAge, bool initFlag); // 0x14013A1A0
void LightParticleEmitter::clearLocalData(); // 0x14013A310
void LightParticleEmitter::changeState(long emitterType); // 0x14013A460
void LightParticleEmitter::ownUpdate(bool mirrorFlag, const OGLMatrix & actMat, float frame); // 0x14013A4E0
void LightParticleEmitter::ownPostUpdate(bool mirrorFlag, float frame); // 0x14013A570
void LightParticleEmitter::updateEmitter(bool mirrorFlag, const OGLMatrix & actMat, float frame); // 0x14013A9C0
void LightParticleEmitter::generateEmitter(); // 0x14013AEB0
void LightParticleEmitter::ownPostUpdateVertexBuffer(); // 0x14002E7C0
void LightParticleEmitter::setEffectData(EffectData * effectData); // 0x14013B1D0//decompilation failure at 14089E38A!
void __fastcall LightParticleEmitter::~LightParticleEmitter(LightParticleEmitter *this)
{
  ParticleEmitterState **pStateArray; // rbx
  __int64 v3; // rdi

  this->__vftable = (LightParticleEmitter_vtbl *)&LightParticleEmitter::`vftable';
  this->m_EffectDeleteFlag = 1;
  LightParticleEmitter::ownCleanup(this, 0.0, 1);
  pStateArray = this->pStateArray;
  v3 = 6i64;
  do
  {
    if ( *pStateArray )
    {
      ((void (__fastcall *)(ParticleEmitterState *, __int64))(*pStateArray)->~ParticleEmitterState)(*pStateArray, 1i64);
      *pStateArray = 0i64;
    }
    ++pStateArray;
    --v3;
  }
  while ( v3 );
  Emitter::~Emitter(this);
}

void __fastcall LightParticleEmitter::changeState(LightParticleEmitter *this, int emitterType)
{
  ParticleEmitterState *v3; // [rsp+50h] [rbp+18h]

  if ( emitterType == 3 )
  {
    if ( !this->pStateArray[3] )
    {
      v3 = (ParticleEmitterState *)operator new(0x28ui64);
      v3->__vftable = (ParticleEmitterState_vtbl *)&LightEmitterState::`vftable';
      v3->pParticleEmitter = this;
      v3->pSettingData = this->getSettingData(this);
      v3->pRandomNumbers = &this->m_RandomNumbers;
      this->pStateArray[3] = v3;
    }
    this->pState = this->pStateArray[3];
  }
}

void __fastcall LightParticleEmitter::clearLocalData(LightParticleEmitter *this)
{
  int v1; // er9
  unsigned __int64 v2; // rdx
  ParticleData **Myfirst; // r8
  ParticleData *v4; // rax
  ParticleData **v5; // r8
  ParticleData *v6; // rax
  ParticleData **v7; // r8
  ParticleData *v8; // rax
  ParticleData **v9; // r8
  ParticleData *v10; // rax

  v1 = 0;
  if ( (int)(this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst) > 0 )
  {
    v2 = 0i64;
    do
    {
      Myfirst = this->m_ParticleData._Mypair._Myval2._Myfirst;
      if ( this->m_ParticleData._Mypair._Myval2._Mylast - Myfirst <= v2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v4 = Myfirst[v2];
      *(_QWORD *)&v4->LocalVel.x = 0i64;
      v4->LocalVel.z = 0.0;
      v5 = this->m_ParticleData._Mypair._Myval2._Myfirst;
      if ( this->m_ParticleData._Mypair._Myval2._Mylast - v5 <= v2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v6 = v5[v2];
      *(_QWORD *)&v6->LocalRotVel.x = 0i64;
      v6->LocalRotVel.z = 0.0;
      v6->LocalRotVel.w = 1.0;
      v7 = this->m_ParticleData._Mypair._Myval2._Myfirst;
      if ( this->m_ParticleData._Mypair._Myval2._Mylast - v7 <= v2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v8 = v7[v2];
      *(_QWORD *)&v8->LocalScaleVel.x = 0i64;
      v8->LocalScaleVel.z = 0.0;
      v9 = this->m_ParticleData._Mypair._Myval2._Myfirst;
      if ( this->m_ParticleData._Mypair._Myval2._Mylast - v9 <= v2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v10 = v9[v2];
      ++v1;
      ++v2;
      *(_QWORD *)&v10->ForceFieldVel.x = 0i64;
      v10->ForceFieldVel.z = 0.0;
    }
    while ( v1 < (int)(this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst) );
  }
}

void __fastcall LightParticleEmitter::generateEmitter(LightParticleEmitter *this)
{
  EffectData *m_SettingData; // r8
  DialogData *Myfirst; // rax
  int *v4; // rcx
  DialogData *v5; // rax
  float *v6; // rdx
  DialogData *v7; // rcx
  float *v8; // rdi
  float v9; // xmm7_4
  float v10; // xmm0_4
  EffectData *v11; // rax
  DialogData *v12; // rcx
  float *v13; // r9
  float v14; // xmm1_4
  float v15; // xmm0_4
  DialogData *v16; // rcx
  float *v17; // rdx
  OGLQuat *v18; // rdx
  OGLQuat *v19; // rcx
  DialogData *v20; // rcx
  float *v21; // rdx

  m_SettingData = this->m_SettingData;
  Myfirst = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v4 = Myfirst->allComboIndexData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst->allComboIndexData._Mypair._Myval2._Mylast - v4) )
    std::_Xout_of_range("invalid vector<T> subscript");
  this->m_EmitterFormType = *v4;
  v5 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v6 = v5[1].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v5[1].allEditNumData._Mypair._Myval2._Mylast - v6) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  this->emitVolume = (int)v6[2];
  v7 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v8 = v7[1].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v7[1].allEditNumData._Mypair._Myval2._Mylast - v8) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( (unsigned __int64)(v7[1].allEditNumData._Mypair._Myval2._Mylast - v8) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v9 = v8[4];
  if ( v9 == 0.0 )
    v10 = 0.0;
  else
    v10 = (float)((float)((float)rand() / 32767.0) * (float)(v9 - COERCE_FLOAT(LODWORD(v9) ^ _xmm)))
        + COERCE_FLOAT(LODWORD(v9) ^ _xmm);
  v11 = this->m_SettingData;
  this->intervalLimitTime = (int)v10 + (int)v8[3];
  v12 = v11->AllDialogData._Mypair._Myval2._Myfirst;
  v13 = v12->allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v12->allEditNumData._Mypair._Myval2._Mylast - v12->allEditNumData._Mypair._Myval2._Myfirst) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( (unsigned __int64)(v12->allEditNumData._Mypair._Myval2._Mylast - v13) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( (unsigned __int64)(v12->allEditNumData._Mypair._Myval2._Mylast - v13) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v14 = v13[5];
  v15 = v13[4];
  this->LocalPos.x = v13[3];
  this->LocalPos.y = v15;
  this->LocalPos.z = v14;
  v16 = this->m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v17 = v16->allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v16->allEditNumData._Mypair._Myval2._Mylast - v16->allEditNumData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( (unsigned __int64)(v16->allEditNumData._Mypair._Myval2._Mylast - v17) <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( !(v16->allEditNumData._Mypair._Myval2._Mylast - v17) )
    std::_Xout_of_range("invalid vector<T> subscript");
  OGLEffectQuat::setRotateEuler(
    &this->LocalRot,
    (float)(*v17 * 3.1415927) / 180.0,
    (float)(v17[1] * 3.1415927) / 180.0,
    (float)(v17[2] * 3.1415927) / 180.0);
  v18 = &this->RotQRand.OGLQuat;
  if ( this == (LightParticleEmitter *)-3504i64 )
    v18 = 0i64;
  OGLQuat::multiply(&this->LocalRot.OGLQuat, v18);
  OGLQuat::normalize(v19);
  v20 = this->m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v21 = v20[1].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v20[1].allEditNumData._Mypair._Myval2._Mylast - v21) <= 0x10 )
    std::_Xout_of_range("invalid vector<T> subscript");
  *(_QWORD *)&this->Gravity.x = _mm_unpacklo_ps((__m128)0i64, (__m128)*((unsigned int *)v21 + 16)).m128_u64[0];
  this->Gravity.z = 0.0;
}

void __fastcall LightParticleEmitter::ownCleanup(LightParticleEmitter *this, float setAge, bool initFlag)
{
  int v4; // esi
  unsigned __int64 v5; // rdi

  *(_QWORD *)this->WorldMat.m = 1065353216i64;
  this->WorldMat.m[4] = 0.0;
  *(_QWORD *)&this->WorldMat.m[8] = 0i64;
  *(_QWORD *)&this->WorldMat.m[12] = 0i64;
  *(_QWORD *)&this->WorldMat.m[2] = 0i64;
  this->WorldMat.m[14] = 0.0;
  this->WorldMat.m[7] = 0.0;
  *(_QWORD *)&this->WorldMat.m[5] = 1065353216i64;
  *(_QWORD *)&this->WorldMat.m[10] = 1065353216i64;
  this->WorldMat.m[15] = 1.0;
  this->age = setAge;
  this->m_IDCount = 0;
  if ( initFlag )
  {
    v4 = 0;
    if ( this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst )
    {
      v5 = 0i64;
      do
      {
        if ( this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst <= v5 )
          std::_Xout_of_range("invalid vector<T> subscript");
        EffectTaskManager::deleteParticlePtr(
          *(EffectTaskManager **)(*(_QWORD *)&AppMain::pApp + 2507504i64),
          this->m_ParticleData._Mypair._Myval2._Myfirst[v5]);
        if ( this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst <= v5 )
          std::_Xout_of_range("invalid vector<T> subscript");
        ++v4;
        this->m_ParticleData._Mypair._Myval2._Myfirst[v5++] = 0i64;
      }
      while ( v4 < (unsigned __int64)(this->m_ParticleData._Mypair._Myval2._Mylast
                                    - this->m_ParticleData._Mypair._Myval2._Myfirst) );
    }
    this->m_ParticleData._Mypair._Myval2._Mylast = this->m_ParticleData._Mypair._Myval2._Myfirst;
    this->intervalTime = 999.0;
  }
}

void __fastcall LightParticleEmitter::ownInitialize(LightParticleEmitter *this)
{
  ParticleEmitterState *pState; // rcx
  __int64 v3[2]; // [rsp+38h] [rbp-1h] BYREF
  int v4; // [rsp+48h] [rbp+Fh]
  __int64 v5; // [rsp+4Ch] [rbp+13h]
  int v6; // [rsp+54h] [rbp+1Bh]
  __int64 v7; // [rsp+58h] [rbp+1Fh]
  __int64 v8; // [rsp+60h] [rbp+27h]
  __int64 v9; // [rsp+68h] [rbp+2Fh]
  __int64 v10; // [rsp+70h] [rbp+37h]

  *(_WORD *)&this->m_EffectDeleteFlag = 256;
  this->m_ParticleType = 0;
  this->m_pEmitterFormState = 0i64;
  this->accumulateEmitVolume = 0.0;
  this->intervalTime = 999.0;
  this->renderFlag = 1;
  this->m_IDCount = 0;
  this->generateEmitter(this);
  v3[0] = 1065353216i64;
  v4 = 0;
  v7 = 0i64;
  v9 = 0i64;
  v5 = 1065353216i64;
  v3[1] = 0i64;
  v8 = 1065353216i64;
  v10 = 0x3F80000000000000i64;
  v6 = 0;
  ((void (__fastcall *)(LightParticleEmitter *, _QWORD, __int64 *))this->updateEmitter)(this, 0i64, v3);
  pState = this->pState;
  if ( pState )
    pState->generateEmitter(pState);
}

void __fastcall LightParticleEmitter::ownPostUpdate(LightParticleEmitter *this, bool mirrorFlag, float frame)
{
  ParticleEmitterState *pState; // rcx
  int v5; // er9
  unsigned __int64 v6; // rdx
  ParticleData *v7; // r8
  bool v8; // zf
  float *p_x; // r8
  OGLEffectVec3 *p_ForceFieldPos; // rcx
  int v11; // er14
  unsigned __int64 v12; // rsi
  ParticleData *v13; // r8
  ParticleData *v14; // rdx
  OGLMatrix *v15; // rdx
  __int64 v16; // r8
  ParticleData *v17; // rax
  float *v18; // rax
  ParticleData *v19; // rax
  float *v20; // rax
  ParticleData *v21; // rax
  float *m; // rax
  const ParticleData *v23; // r15
  __int64 v24; // rbp
  int v25; // eax
  int v26; // eax

  pState = this->pState;
  if ( pState )
  {
    pState->updateAllParticle(pState, &this->m_UpdateArg);
    v5 = 0;
    if ( (int)(this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst) > 0 )
    {
      v6 = 0i64;
      do
      {
        if ( this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst <= v6 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v7 = this->m_ParticleData._Mypair._Myval2._Myfirst[v6];
        v8 = &v7->ForceFieldVel == 0i64;
        p_x = &v7->ForceFieldVel.x;
        if ( v8 )
          p_x = 0i64;
        if ( this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst <= v6 )
          std::_Xout_of_range("invalid vector<T> subscript");
        p_ForceFieldPos = &this->m_ParticleData._Mypair._Myval2._Myfirst[v6]->ForceFieldPos;
        p_ForceFieldPos->x = this->m_ParticleData._Mypair._Myval2._Myfirst[v6]->ForceFieldPos.x + *p_x;
        p_ForceFieldPos->y = p_x[1] + p_ForceFieldPos->y;
        p_ForceFieldPos->z = p_x[2] + p_ForceFieldPos->z;
        ++v5;
        ++v6;
      }
      while ( v5 < (int)(this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst) );
    }
    v11 = 0;
    if ( (int)(this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst) > 0 )
    {
      v12 = 0i64;
      do
      {
        if ( this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst <= v12 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v13 = this->m_ParticleData._Mypair._Myval2._Myfirst[v12];
        *(_QWORD *)v13->WorldMat.m = 1065353216i64;
        v13->WorldMat.m[4] = 0.0;
        *(_QWORD *)&v13->WorldMat.m[8] = 0i64;
        *(_QWORD *)&v13->WorldMat.m[12] = 0i64;
        *(_QWORD *)&v13->WorldMat.m[5] = 1065353216i64;
        *(_QWORD *)&v13->WorldMat.m[2] = 0i64;
        *(_QWORD *)&v13->WorldMat.m[10] = 1065353216i64;
        v13->WorldMat.m[14] = 0.0;
        v13->WorldMat.m[7] = 0.0;
        v13->WorldMat.m[15] = 1.0;
        if ( this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst <= v12 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v14 = this->m_ParticleData._Mypair._Myval2._Myfirst[v12];
        v8 = &v14->GlobalMat == 0i64;
        v15 = &v14->GlobalMat.OGLMatrix;
        if ( v8 )
          v15 = 0i64;
        OGLMatrix::multiplyRotate(&v13->WorldMat.OGLMatrix, v15);
        if ( this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst <= v12 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v17 = this->m_ParticleData._Mypair._Myval2._Myfirst[v12];
        v8 = &v17->ForceFieldPos == 0i64;
        v18 = &v17->ForceFieldPos.x;
        if ( v8 )
          v18 = 0i64;
        *(float *)(v16 + 96) = *(float *)(v16 + 96) + *v18;
        *(float *)(v16 + 100) = v18[1] + *(float *)(v16 + 100);
        *(float *)(v16 + 104) = v18[2] + *(float *)(v16 + 104);
        *(_DWORD *)(v16 + 108) = 1065353216;
        if ( this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst <= v12 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v19 = this->m_ParticleData._Mypair._Myval2._Myfirst[v12];
        v8 = &v19->GravityPos == 0i64;
        v20 = &v19->GravityPos.x;
        if ( v8 )
          v20 = 0i64;
        *(float *)(v16 + 96) = *(float *)(v16 + 96) + *v20;
        *(float *)(v16 + 100) = v20[1] + *(float *)(v16 + 100);
        *(float *)(v16 + 104) = v20[2] + *(float *)(v16 + 104);
        *(_DWORD *)(v16 + 108) = 1065353216;
        if ( this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst <= v12 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v21 = this->m_ParticleData._Mypair._Myval2._Myfirst[v12];
        v8 = &v21->GlobalMat == 0i64;
        m = v21->GlobalMat.m;
        if ( v8 )
          m = 0i64;
        *(float *)(v16 + 96) = m[12] + *(float *)(v16 + 96);
        *(float *)(v16 + 100) = m[13] + *(float *)(v16 + 100);
        *(float *)(v16 + 104) = m[14] + *(float *)(v16 + 104);
        *(_DWORD *)(v16 + 108) = 1065353216;
        if ( this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst <= v12 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v23 = this->m_ParticleData._Mypair._Myval2._Myfirst[v12];
        v24 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 2507504i64);
        v25 = Mtx_lock((_Mtx_internal_imp_t *)(v24 + 664));
        if ( v25 )
          std::_Throw_C_error(v25);
        std::vector<ParticleData>::push_back((std::vector<ParticleData> *)(v24 + 480), v23);
        v26 = Mtx_unlock((_Mtx_internal_imp_t *)(v24 + 664));
        if ( v26 )
          std::_Throw_C_error(v26);
        ++v11;
        ++v12;
      }
      while ( v11 < (int)(this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst) );
    }
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall ParticleEmitter::ownTerminate(ParticleEmitter *this, __int64 a2, __int64 a3)
{
  ParticleEmitter_vtbl *v3; // rax

  v3 = this->__vftable;
  LOBYTE(a3) = 1;
  this->m_EffectDeleteFlag = 1;
  ((void (__fastcall *)(ParticleEmitter *, __int64, __int64))v3->ownCleanup)(this, a2, a3);
}

void __fastcall LightParticleEmitter::ownUpdate(
        LightParticleEmitter *this,
        bool mirrorFlag,
        const OGLMatrix *actMat,
        float frame)
{
  ParticleEmitterState *pState; // rcx

  this->clearLocalData(this);
  ((void (__fastcall *)(LightParticleEmitter *, bool, const OGLMatrix *))this->updateEmitter)(this, mirrorFlag, actMat);
  pState = this->pState;
  if ( pState )
  {
    this->m_UpdateArg.frame = frame;
    this->m_UpdateArg.mirrorFlag = mirrorFlag;
    this->m_UpdateArg.pParticleDataVec = &this->m_ParticleData;
    ((void (__fastcall *)(ParticleEmitterState *))pState->generateParticle)(pState);
  }
}

void __fastcall LightParticleEmitter::setEffectData(ParticleEmitter *this, EffectData *effectData)
{
  ParticleEmitterState *v2; // rax
  ParticleEmitterState *v3; // rax
  ParticleEmitterState *v4; // rax
  ParticleEmitterState *v5; // rax

  this->m_SettingData = effectData;
  v2 = this->pStateArray[0];
  if ( v2 )
    v2->pSettingData = effectData;
  v3 = this->pStateArray[1];
  if ( v3 )
    v3->pSettingData = effectData;
  v4 = this->pStateArray[2];
  if ( v4 )
    v4->pSettingData = effectData;
  v5 = this->pStateArray[3];
  if ( v5 )
    v5->pSettingData = effectData;
}

void __fastcall LightParticleEmitter::updateEmitter(
        LightParticleEmitter *this,
        bool mirrorFlag,
        const OGLMatrix *actMat,
        float frame)
{
  char *v6; // rsi
  OGLMatrix *v7; // rdi
  float *v8; // rax
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float *v12; // rax
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float *v16; // rax
  EffectData *m_SettingData; // r8
  DialogData *Myfirst; // rcx
  DialogChartData *v19; // r8
  float x; // xmm2_4
  float y; // xmm3_4
  float z; // xmm2_4
  OGLQuat *v23; // rcx
  OGLMatrix *v24; // r8
  OGLEffectMatrix_vtbl *v25; // r9
  float v26; // xmm1_4
  float v27; // xmm2_4
  __int64 v28; // r8
  OGLMatrix *v29; // rcx
  OGLMatrix *v30; // rdx
  float v31; // [rsp+38h] [rbp-C8h]
  float v32; // [rsp+3Ch] [rbp-C4h]
  float v33; // [rsp+40h] [rbp-C0h]
  OGLEffectMatrix v34; // [rsp+60h] [rbp-A0h] BYREF
  void **v35; // [rsp+B0h] [rbp-50h]
  OGLMatrix In2; // [rsp+B8h] [rbp-48h] BYREF
  OGLEffectMatrix v37; // [rsp+100h] [rbp+0h] BYREF

  v6 = (char *)&actMat[-1].m[14];
  if ( !actMat )
    v6 = 0i64;
  v7 = (OGLMatrix *)(v6 + 8);
  v8 = (float *)(v6 + 8);
  if ( !v6 )
    v8 = 0i64;
  v9 = (float)((float)(v8[4] * 0.0) + *v8) + (float)(v8[8] * 0.0);
  v10 = (float)((float)(v8[5] * 0.0) + v8[1]) + (float)(v8[9] * 0.0);
  v11 = (float)((float)(v8[6] * 0.0) + v8[2]) + (float)(v8[10] * 0.0);
  this->ParticleScale.x = sqrtf((float)((float)(v9 * v9) + (float)(v10 * v10)) + (float)(v11 * v11));
  v12 = (float *)(v6 + 8);
  if ( !v6 )
    v12 = 0i64;
  v13 = (float)((float)(*v12 * 0.0) + v12[4]) + (float)(v12[8] * 0.0);
  v14 = (float)((float)(v12[1] * 0.0) + v12[5]) + (float)(v12[9] * 0.0);
  v15 = (float)((float)(v12[2] * 0.0) + v12[6]) + (float)(v12[10] * 0.0);
  this->ParticleScale.y = sqrtf((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15));
  v16 = (float *)(v6 + 8);
  if ( !v6 )
    v16 = 0i64;
  v31 = (float)((float)(v16[4] * 0.0) + (float)(*v16 * 0.0)) + v16[8];
  v32 = (float)((float)(v16[5] * 0.0) + (float)(v16[1] * 0.0)) + v16[9];
  v33 = (float)((float)(v16[6] * 0.0) + (float)(v16[2] * 0.0)) + v16[10];
  this->ParticleScale.z = sqrtf((float)((float)(v32 * v32) + (float)(v31 * v31)) + (float)(v33 * v33));
  this->intervalTime = frame + this->intervalTime;
  m_SettingData = this->m_SettingData;
  Myfirst = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[1].allButtonIndexData._Mypair._Myval2._Mylast
                        - Myfirst[1].allButtonIndexData._Mypair._Myval2._Myfirst) <= 6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( Myfirst[1].allButtonIndexData._Mypair._Myval2._Myfirst[6] )
  {
    v19 = m_SettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
    if ( !(v19[1].dialogChartData._Mypair._Myval2._Mylast - v19[1].dialogChartData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->emitVolume = (int)D3DMath::GetChartDataY(this->age, v19[1].dialogChartData._Mypair._Myval2._Myfirst);
  }
  this->age = frame + this->age;
  v35 = &OGLEffectMatrix::`vftable';
  if ( !v6 )
    v7 = 0i64;
  In2 = *v7;
  x = this->ParticleScale.x;
  In2.m[0] = In2.m[0] / x;
  In2.m[1] = In2.m[1] / x;
  In2.m[2] = In2.m[2] / x;
  y = this->ParticleScale.y;
  In2.m[4] = In2.m[4] / y;
  In2.m[5] = In2.m[5] / y;
  In2.m[6] = In2.m[6] / y;
  z = this->ParticleScale.z;
  In2.m[8] = In2.m[8] / z;
  In2.m[9] = In2.m[9] / z;
  In2.m[10] = In2.m[10] / z;
  *(_QWORD *)this->LocalMat.m = 1065353216i64;
  this->LocalMat.m[4] = 0.0;
  *(_QWORD *)&this->LocalMat.m[8] = 0i64;
  *(_QWORD *)&this->LocalMat.m[12] = 0i64;
  *(_QWORD *)&this->LocalMat.m[5] = 1065353216i64;
  *(_QWORD *)&this->LocalMat.m[2] = 0i64;
  *(_QWORD *)&this->LocalMat.m[10] = 1065353216i64;
  this->LocalMat.m[14] = 0.0;
  this->LocalMat.m[7] = 0.0;
  this->LocalMat.m[15] = 1.0;
  memset(&v37.OGLMatrix, 0, sizeof(v37.OGLMatrix));
  v37.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  v23 = &this->LocalRot.OGLQuat;
  if ( this == (LightParticleEmitter *)-3432i64 )
    v23 = 0i64;
  OGLEffectMatrix::rotationQuaternion(&v37, v23->x, v23->y, v23->z, v23->w);
  OGLMatrix::multiply(v24, &v37.OGLMatrix);
  v26 = this->LocalPos.y * this->ParticleScale.y;
  v27 = this->LocalPos.z * this->ParticleScale.z;
  *(float *)(v28 + 48) = (float)(this->LocalPos.x * this->ParticleScale.x) + *(float *)(v28 + 48);
  *(float *)(v28 + 52) = v26 + *(float *)(v28 + 52);
  *(float *)(v28 + 56) = v27 + *(float *)(v28 + 56);
  *(_DWORD *)(v28 + 60) = 1065353216;
  v29 = &this->WorldMat.OGLMatrix;
  if ( this == (LightParticleEmitter *)-3192i64 )
    v29 = 0i64;
  v34.OGLMatrix = *v29;
  v34.__vftable = v25;
  OGLEffectMatrix::inverse(&v34);
  v30 = &this->LocalMat.OGLMatrix;
  if ( this == (LightParticleEmitter *)-3264i64 )
    v30 = 0i64;
  OGLMatrix::multiply(&this->WorldMat.OGLMatrix, v30, &In2);
}

