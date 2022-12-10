#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstatecurve.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/istream"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ostream"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/streambuf"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec4.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec2.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/gpuparticleemitter.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/lightparticleemitter.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/field.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/turbulencefield.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/collisionfield.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/attractionfield.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/binaryfileinput.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cfile.cpp"

EffectDataListManager::EffectDataListManager(); // 0x140121B30
EffectDataListManager::~EffectDataListManager(); // 0x140121E20
EffectListNodeData::~EffectListNodeData(); // 0x140124610
extension::FutureFigureOption::~FutureFigureOption(); // 0x140126430
extension::FutureTextureOption::~FutureTextureOption(); // 0x14012A530
void EffectDataListManager::recursiveDelEffect(Effect * myEffect); // 0x140122100
void EffectDataListManager::recursiveDelEffectData(EffectData * myEffectData); // 0x1401221B0
Effect * EffectDataListManager::createEffect(EffectData * pEffectData, Effect * pEffect, Effect * pParentEffect); // 0x140122220
void EffectDataListManager::update(); // 0x1401225F0
void EffectDataListManager::clearEffectData(); // 0x1401227A0
void EffectDataListManager::clearEffect(); // 0x140122980
void EffectDataListManager::clearResourceData(); // 0x140122AF0
bool EffectDataListManager::loadEffectData(std::basic_string<char,std::char_traits<char>,std::allocator<char> > filepath); // 0x140122E40
class std::unique_ptr<char [0],std::default_delete<char [0]> > :
	std::_Unique_ptr_base<char,std::default_delete<char [0]> >
{
	class _Myt;
	class _Mybase;
	typedef char *pointer;
	typedef char element_type;
	struct deleter_type;
public:
	unique_ptr<char [0],std::default_delete<char [0]> >(const std::unique_ptr<char [0],std::default_delete<char [0]> > &);
	unique_ptr<char [0],std::default_delete<char [0]> >(void *);
	unique_ptr<char [0],std::default_delete<char [0]> >(std::unique_ptr<char [0],std::default_delete<char [0]> > &);
	unique_ptr<char [0],std::default_delete<char [0]> >();
	std::unique_ptr<char [0],std::default_delete<char [0]> > & operator=(const std::unique_ptr<char [0],std::default_delete<char [0]> > &);
	std::unique_ptr<char [0],std::default_delete<char [0]> > & operator=(void *);
	std::unique_ptr<char [0],std::default_delete<char [0]> > & operator=(std::unique_ptr<char [0],std::default_delete<char [0]> > &);
	void reset(void *);
	void swap(std::unique_ptr<char [0],std::default_delete<char [0]> > &);
	~unique_ptr<char [0],std::default_delete<char [0]> >();
	char & operator[](unsigned long long);
	char * get();
	bool operator bool();
	char * release();
private:
	void _Delete();
};
extension::BasicFutureObject<OGLCurve,void>::AssetCache extension::BasicFutureObject<OGLCurve,void>::s_cacheManager; // 0x140ACD660
void(*??s_cacheManager$initializer$@?$BasicFutureObject@VOGLCurve@@X@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407407E0
extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager; // 0x140ACD6E0
void(*??s_cacheManager$initializer$@?$BasicFutureObject@VOGLFigure@@UFutureFigureOption@extension@@@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407407F0
extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager; // 0x140ACD5E0
void(*??s_cacheManager$initializer$@?$BasicFutureObject@VOGLTexture@@UFutureTextureOption@extension@@@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407407E8
std::piecewise_construct_t std::piecewise_construct; // 0x14089E370
void EffectDataListManager::loadRoundData(); // 0x140123F00
void EffectDataListManager::singleDataLoad(std::basic_string<char,std::char_traits<char>,std::allocator<char> > filepath, std::basic_istream<char,std::char_traits<char> > * fin, long index); // 0x140124060
void EffectDataListManager::recursiveRenameResourceCharaID(EffectData * myEffectData); // 0x140124620
bool EffectDataListManager::checkName(std::string * name, EffectData * pEffectData); // 0x1401247B0
void EffectDataListManager::addCharaIDBack(std::string * str, long type, long charanum); // 0x140124EB0
void EffectDataListManager::texDataLoad(std::basic_string<char,std::char_traits<char>,std::allocator<char> > filepath, std::basic_string<char,std::char_traits<char>,std::allocator<char> > filename); // 0x140125A80
void EffectDataListManager::figureDataLoad(std::basic_string<char,std::char_traits<char>,std::allocator<char> > filepath, std::basic_string<char,std::char_traits<char>,std::allocator<char> > filename, long flag); // 0x140125CC0
void EffectDataListManager::figureDataLoadToGpu(std::basic_string<char,std::char_traits<char>,std::allocator<char> > filepath, std::basic_string<char,std::char_traits<char>,std::allocator<char> > filename); // 0x140125DA0
long EffectDataListManager::figureDataLoadToCpu(std::basic_string<char,std::char_traits<char>,std::allocator<char> > filepath, std::basic_string<char,std::char_traits<char>,std::allocator<char> > filename); // 0x140125FA0
void EffectDataListManager::curveDataLoad(std::basic_string<char,std::char_traits<char>,std::allocator<char> > filepath, std::basic_string<char,std::char_traits<char>,std::allocator<char> > filename); // 0x140126490
Effect * EffectDataListManager::createEffect(long index); // 0x140126740
void EffectDataListManager::recursiveLoadResource(std::basic_string<char,std::char_traits<char>,std::allocator<char> > folderpath, EffectData * myEffectData); // 0x1401268B0
void EffectDataListManager::calcAllBindUVPosition(); // 0x140127120
void EffectDataListManager::recursiveCalcBindUVPosition(EffectData * pEffectData); // 0x140127210//decompilation failure at 140ACD660!
//decompilation failure at 1407407E0!
//decompilation failure at 140ACD6E0!
//decompilation failure at 1407407F0!
//decompilation failure at 140ACD5E0!
//decompilation failure at 1407407E8!
//decompilation failure at 14089E370!
std::string *__fastcall std::operator+<char>(std::string *result, std::string *_Left, const std::string *_Right)
{
  std::string *v4; // rax

  v4 = std::string::append(_Left, _Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  result->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::_Assign_rv(result, v4);
  return result;
}

std::string *__fastcall std::operator+<char>(std::string *result, const std::string *_Left, const char *_Right)
{
  unsigned __int64 v6; // rbx
  std::string *Ptr; // rax
  __int64 v8; // rax

  v6 = 0i64;
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  if ( result->_Mypair._Myval2._Myres < 0x10 )
    Ptr = result;
  else
    Ptr = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *_Right )
  {
    v8 = -1i64;
    do
      ++v8;
    while ( _Right[v8] );
  }
  else
  {
    v8 = 0i64;
  }
  std::string::reserve(result, v8 + _Left->_Mypair._Myval2._Mysize);
  std::string::append(result, _Left, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  if ( *_Right )
  {
    v6 = -1i64;
    do
      ++v6;
    while ( _Right[v6] );
  }
  std::string::append(result, _Right, v6);
  return result;
}

std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *__fastcall std::_List_buy<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::string const &>,std::tuple<>>(
        std::_List_buy<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *this,
        std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *_Next,
        std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *_Prev,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<std::string const &> *<_Val_1>)
{
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v5; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v6; // rdi
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *p_Myval; // rbx
  const std::string *Val; // rdx
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *Ptr; // rax

  v5 = std::_List_alloc<std::_List_base_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>::_Buynode0(
         this,
         _Next,
         _Prev);
  v6 = v5;
  p_Myval = &v5->_Myval;
  if ( v5 != (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)-16i64 )
  {
    Val = <_Val_1>->_Myfirst._Val;
    v5->_Myval.first._Mypair._Myval2._Myres = 15i64;
    v5->_Myval.first._Mypair._Myval2._Mysize = 0i64;
    if ( v5->_Myval.first._Mypair._Myval2._Myres < 0x10 )
      Ptr = &v5->_Myval;
    else
      Ptr = (std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *)p_Myval->first._Mypair._Myval2._Bx._Ptr;
    Ptr->first._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign((std::string *)&p_Myval->first, Val, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    p_Myval->second.m_ptr = 0i64;
    p_Myval->second.m_proxy.m_ptr = 0i64;
  }
  return v6;
}

void __fastcall std::_Destroy_range1<std::allocator<EffectListNodeData>,EffectListNodeData *>(
        EffectListNodeData *_First,
        EffectListNodeData *_Last,
        std::_Wrap_alloc<std::allocator<EffectListNodeData> > *_Al,
        std::integral_constant<bool,0> __formal)
{
  unsigned __int64 *p_Myres; // rbx
  char *v6; // rcx
  char *v7; // rax
  unsigned __int64 v8; // rcx
  bool v9; // cf
  unsigned __int64 *v10; // rax

  if ( _First != _Last )
  {
    p_Myres = &_First->id._Mypair._Myval2._Myres;
    do
    {
      if ( *p_Myres >= 0x10 )
      {
        v6 = (char *)*(p_Myres - 3);
        if ( *p_Myres + 1 >= 0x1000 )
        {
          if ( ((unsigned __int8)v6 & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v7 = (char *)*((_QWORD *)v6 - 1);
          if ( v7 >= v6 )
            invalid_parameter_noinfo_noreturn();
          v8 = v6 - v7;
          if ( v8 < 8 )
            invalid_parameter_noinfo_noreturn();
          if ( v8 > 0x27 )
            invalid_parameter_noinfo_noreturn();
          v6 = v7;
        }
        operator delete(v6);
      }
      *p_Myres = 15i64;
      v9 = *p_Myres < 0x10;
      *(p_Myres - 1) = 0i64;
      if ( v9 )
        v10 = p_Myres - 3;
      else
        v10 = (unsigned __int64 *)*(p_Myres - 3);
      p_Myres += 6;
      *(_BYTE *)v10 = 0;
    }
    while ( p_Myres - 3 != (unsigned __int64 *)_Last );
  }
}

void __fastcall std::_Destroy_range1<std::allocator<extension::FutureAssetOptionFileSetting>,extension::FutureAssetOptionFileSetting *>(
        extension::FutureAssetOptionFileSetting *_First,
        extension::FutureAssetOptionFileSetting *_Last,
        std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *_Al,
        std::integral_constant<bool,0> __formal)
{
  unsigned __int64 *p_Myres; // rbx
  char *v6; // rcx
  char *v7; // rax
  unsigned __int64 v8; // rcx
  bool v9; // cf
  unsigned __int64 *v10; // rax

  if ( _First != _Last )
  {
    p_Myres = &_First->fileName._Mypair._Myval2._Myres;
    do
    {
      if ( *p_Myres >= 0x10 )
      {
        v6 = (char *)*(p_Myres - 3);
        if ( *p_Myres + 1 >= 0x1000 )
        {
          if ( ((unsigned __int8)v6 & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v7 = (char *)*((_QWORD *)v6 - 1);
          if ( v7 >= v6 )
            invalid_parameter_noinfo_noreturn();
          v8 = v6 - v7;
          if ( v8 < 8 )
            invalid_parameter_noinfo_noreturn();
          if ( v8 > 0x27 )
            invalid_parameter_noinfo_noreturn();
          v6 = v7;
        }
        operator delete(v6);
      }
      *p_Myres = 15i64;
      v9 = *p_Myres < 0x10;
      *(p_Myres - 1) = 0i64;
      if ( v9 )
        v10 = p_Myres - 3;
      else
        v10 = (unsigned __int64 *)*(p_Myres - 3);
      p_Myres += 5;
      *(_BYTE *)v10 = 0;
    }
    while ( p_Myres - 3 != (unsigned __int64 *)_Last );
  }
}

void __fastcall std::_Destroy_range<std::allocator<EffectDataList>,EffectDataList *>(
        EffectDataList *_First,
        EffectDataList *_Last,
        std::_Wrap_alloc<std::allocator<EffectDataList> > *_Al,
        std::integral_constant<bool,0> a4)
{
  std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > *p_effectDataList; // rbx

  if ( _First != _Last )
  {
    p_effectDataList = &_First->effectDataList;
    do
    {
      if ( p_effectDataList->_Mypair._Myval2._Myfirst )
      {
        std::_Destroy_range1<std::allocator<EffectListNodeData>,EffectListNodeData *>(
          p_effectDataList->_Mypair._Myval2._Myfirst,
          p_effectDataList->_Mypair._Myval2._Mylast,
          (std::_Wrap_alloc<std::allocator<EffectListNodeData> > *)_Al,
          a4);
        if ( p_effectDataList->_Mypair._Myval2._Myfirst )
          aligned_free(p_effectDataList->_Mypair._Myval2._Myfirst);
        p_effectDataList->_Mypair._Myval2._Myfirst = 0i64;
        p_effectDataList->_Mypair._Myval2._Mylast = 0i64;
        p_effectDataList->_Mypair._Myval2._Myend = 0i64;
      }
      p_effectDataList = (std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > *)((char *)p_effectDataList + 32);
    }
    while ( &p_effectDataList[-1]._Mypair._Myval2._Myend != (EffectListNodeData **)_Last );
  }
}

void __fastcall std::_Destroy_range<std::allocator<extension::BasicFutureObject<OGLCurve,void>>,extension::BasicFutureObject<OGLCurve,void> *>(
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *_First,
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *_Last,
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *_Al)
{
  extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> *p_m_body; // rbx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *m_ptr; // rcx

  if ( _First != _Last )
  {
    p_m_body = &_First->m_body;
    do
    {
      m_ptr = p_m_body->m_ptr;
      if ( p_m_body->m_ptr )
      {
        if ( _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
          ((void (__fastcall *)(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *, __int64, std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *))m_ptr->~RefCountableWeakSupportBase)(
            m_ptr,
            1i64,
            _Al);
      }
      p_m_body += 2;
    }
    while ( &p_m_body[-1] != (extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> *)_Last );
  }
}

std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >,bool> *__fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>,0>>::_Insert<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>(
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *this,
        std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >,bool> *result,
        std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *_Val,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > _Pnode)
{
  unsigned __int64 Mysize; // r12
  unsigned __int64 Myres; // r10
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *Ptr; // r9
  __int64 v10; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 v12; // r9
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *Myfirst; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v14; // rsi
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Myhead; // rdi
  char **p_Myval; // rdx
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *v17; // rcx
  size_t v18; // r15
  size_t v19; // r8
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // rcx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Prev; // rdx
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *v24; // rdx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> **p_Next; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v26; // rcx
  unsigned __int64 v27; // [rsp+20h] [rbp-48h]
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *v28; // [rsp+80h] [rbp+18h]

  v28 = _Val;
  Mysize = _Val->first._Mypair._Myval2._Mysize;
  Myres = _Val->first._Mypair._Myval2._Myres;
  if ( Myres < 0x10 )
    Ptr = _Val;
  else
    Ptr = (std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *)_Val->first._Mypair._Myval2._Bx._Ptr;
  v10 = 0xCBF29CE484222325ui64;
  for ( i = 0i64; i < Mysize; ++i )
    v10 = 0x100000001B3i64 * ((unsigned __int8)Ptr->first._Mypair._Myval2._Bx._Buf[i] ^ (unsigned __int64)v10);
  v12 = 16 * (v10 & this->_Mask);
  v27 = v12;
  Myfirst = this->_Vec._Mypair._Myval2._Myfirst;
  v14 = *(std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> **)((char *)&Myfirst->_Ptr + v12);
  if ( v14 == this->_List._Mypair._Myval2._Myhead )
    Myhead = this->_List._Mypair._Myval2._Myhead;
  else
    Myhead = **(std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> ***)((char *)&Myfirst[1]._Ptr + v12);
  if ( Myhead == v14 )
  {
LABEL_27:
    Next = _Pnode._Ptr->_Next;
    if ( Myhead != _Pnode._Ptr->_Next )
    {
      _Pnode._Ptr->_Prev->_Next = Next;
      Next->_Prev->_Next = Myhead;
      Myhead->_Prev->_Next = _Pnode._Ptr;
      Prev = Myhead->_Prev;
      Myhead->_Prev = Next->_Prev;
      Next->_Prev = _Pnode._Ptr->_Prev;
      _Pnode._Ptr->_Prev = Prev;
    }
    v24 = (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *)((char *)this->_Vec._Mypair._Myval2._Myfirst + v12);
    if ( v24->_Ptr == this->_List._Mypair._Myval2._Myhead )
    {
      v24->_Ptr = _Pnode._Ptr;
      *(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *)((char *)this->_Vec._Mypair._Myval2._Myfirst + v12 + 8) = _Pnode;
    }
    else if ( v24->_Ptr == Myhead )
    {
      v24->_Ptr = _Pnode._Ptr;
    }
    else
    {
      p_Next = &v24[1]._Ptr->_Next;
      v26 = *p_Next;
      v24[1]._Ptr = *p_Next;
      if ( v26 != _Pnode._Ptr )
        *(std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> **)((char *)&this->_Vec._Mypair._Myval2._Myfirst[1]._Ptr + v12) = (*(std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> **)((char *)&this->_Vec._Mypair._Myval2._Myfirst[1]._Ptr + v12))->_Prev;
    }
    std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>>>,0>>::_Check_size(this);
    result->first._Ptr = _Pnode._Ptr;
    result->second = 1;
    return result;
  }
  else
  {
    while ( 1 )
    {
      Myhead = Myhead->_Prev;
      p_Myval = (char **)&Myhead->_Myval;
      if ( Myhead->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
        p_Myval = (char **)*p_Myval;
      if ( Myres < 0x10 )
        v17 = _Val;
      else
        v17 = (std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *)_Val->first._Mypair._Myval2._Bx._Ptr;
      v18 = Myhead->_Myval.first._Mypair._Myval2._Mysize;
      v19 = v18;
      if ( Mysize < v18 )
        v19 = Mysize;
      if ( (!v19 || !memcmp(v17, p_Myval, v19)) && Mysize >= v18 && Mysize <= v18 )
        break;
      _Val = v28;
      Myres = v28->first._Mypair._Myval2._Myres;
      if ( Myhead == v14 )
      {
        v12 = v27;
        goto LABEL_27;
      }
    }
    _Pnode._Ptr->_Prev->_Next = _Pnode._Ptr->_Next;
    _Pnode._Ptr->_Next->_Prev = _Pnode._Ptr->_Prev;
    --this->_List._Mypair._Myval2._Mysize;
    m_ptr = _Pnode._Ptr->_Myval.second.m_proxy.m_ptr;
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
        operator delete(m_ptr, 0x18ui64);
    }
    std::string::~string((std::string *)&_Pnode._Ptr->_Myval.first);
    operator delete(_Pnode._Ptr);
    result->first._Ptr = Myhead;
    result->second = 0;
    return result;
  }
}

void __fastcall std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>> *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>(
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_First,
        unsigned __int64 _Count,
        const std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Pval,
        std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *_Al)
{
  for ( ; _Count; --_Count )
  {
    if ( _First )
      _First->_Ptr = _Pval->_Ptr;
    ++_First;
  }
}

EffectDataList *__fastcall std::_Uninitialized_move_al_unchecked1<EffectDataList *,EffectDataList *,std::allocator<EffectDataList>>(
        EffectDataList *_First,
        EffectDataList *_Last,
        EffectDataList *_Dest,
        std::_Wrap_alloc<std::allocator<EffectDataList> > *_Al)
{
  EffectListNodeData **p_Myend; // r9
  EffectListNodeData **v5; // rax

  if ( _First != _Last )
  {
    p_Myend = &_Dest->effectDataList._Mypair._Myval2._Myend;
    v5 = &_First->effectDataList._Mypair._Myval2._Myend;
    do
    {
      if ( _Dest )
      {
        _Dest->category = *((_DWORD *)v5 - 6);
        *((_DWORD *)p_Myend - 5) = *((_DWORD *)v5 - 5);
        *(p_Myend - 2) = 0i64;
        *(p_Myend - 1) = 0i64;
        *p_Myend = 0i64;
        *(p_Myend - 2) = *(v5 - 2);
        *(p_Myend - 1) = *(v5 - 1);
        *p_Myend = *v5;
        *(v5 - 2) = 0i64;
        *(v5 - 1) = 0i64;
        *v5 = 0i64;
      }
      ++_Dest;
      p_Myend += 4;
      v5 += 4;
    }
    while ( v5 - 3 != (EffectListNodeData **)_Last );
  }
  return _Dest;
}

BattleSystem::SequenceCandidateInfo *__fastcall std::_Uninitialized_move_al_unchecked1<BattleSystem::SequenceCandidateInfo *,BattleSystem::SequenceCandidateInfo *,std::allocator<BattleSystem::SequenceCandidateInfo>>(
        const BattleSystem::SequenceCandidateInfo *_First,
        const BattleSystem::SequenceCandidateInfo *_Last,
        BattleSystem::SequenceCandidateInfo *_Dest,
        std::_Wrap_alloc<std::allocator<BattleSystem::SequenceCandidateInfo> > *_Al)
{
  for ( ; _First != _Last; ++_First )
  {
    if ( _Dest )
      *_Dest = *_First;
    ++_Dest;
  }
  return _Dest;
}

EffectListNodeData *__fastcall std::_Uninitialized_move_al_unchecked1<EffectListNodeData *,EffectListNodeData *,std::allocator<EffectListNodeData>>(
        EffectListNodeData *_First,
        EffectListNodeData *_Last,
        EffectListNodeData *_Dest,
        std::_Wrap_alloc<std::allocator<EffectListNodeData> > *_Al)
{
  EffectListNodeData *i; // rdi

  for ( i = _First; i != _Last; ++i )
  {
    if ( _Dest )
    {
      _Dest->id._Mypair._Myval2._Myres = 15i64;
      _Dest->id._Mypair._Myval2._Mysize = 0i64;
      _Dest->id._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::_Assign_rv(&_Dest->id, &i->id);
      _Dest->index = i->index;
      _Dest->effectData = i->effectData;
    }
    ++_Dest;
  }
  return _Dest;
}

extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *__fastcall std::_Uninitialized_move_al_unchecked1<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *,extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *,std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>>(
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *_First,
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *_Last,
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *_Dest,
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *_Al)
{
  extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> *p_m_body; // r9
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *m_ptr; // rcx

  if ( _First != _Last )
  {
    p_m_body = &_First->m_body;
    do
    {
      if ( _Dest )
      {
        _Dest->m_isNoCache = BYTE1(p_m_body[-1].m_ptr);
        m_ptr = p_m_body->m_ptr;
        _Dest->m_body = (extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>)p_m_body->m_ptr;
        if ( m_ptr )
          _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
      }
      ++_Dest;
      p_m_body += 2;
    }
    while ( &p_m_body[-1] != (extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> *)_Last );
  }
  return _Dest;
}

std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *__fastcall std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_First,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Last,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Dest,
        std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *_Al)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  signed __int64 v6; // rcx

  v4 = 0i64;
  v5 = (unsigned __int64)((char *)_Last - (char *)_First + 7) >> 3;
  if ( _First > _Last )
    v5 = 0i64;
  if ( v5 )
  {
    v6 = (char *)_First - (char *)_Dest;
    do
    {
      if ( _Dest )
        _Dest->_Ptr = *(std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> **)((char *)_Dest + v6);
      ++_Dest;
      ++v4;
    }
    while ( v4 != v5 );
  }
  return _Dest;
}

void __fastcall std::_Wrap_alloc<std::allocator<EffectListNodeData>>::construct<EffectListNodeData,EffectListNodeData const &>(
        std::_Wrap_alloc<std::allocator<EffectListNodeData> > *this,
        EffectListNodeData *_Ptr,
        const EffectListNodeData *<_Args_0>)
{
  EffectListNodeData *Ptr; // rax

  if ( _Ptr )
  {
    _Ptr->id._Mypair._Myval2._Myres = 15i64;
    _Ptr->id._Mypair._Myval2._Mysize = 0i64;
    if ( _Ptr->id._Mypair._Myval2._Myres < 0x10 )
      Ptr = _Ptr;
    else
      Ptr = (EffectListNodeData *)_Ptr->id._Mypair._Myval2._Bx._Ptr;
    Ptr->id._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&_Ptr->id, &<_Args_0>->id, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    _Ptr->index = <_Args_0>->index;
    _Ptr->effectData = <_Args_0>->effectData;
  }
}

void __fastcall EffectAppData::delChain<EffectData>(EffectAppData *this, EffectData *delEmitter)
{
  EffectData *v3; // rax
  EffectData *v4; // rsi
  EffectData_vtbl *v5; // rbx
  EffectData *v6; // rax
  EffectData *v7; // rsi
  EffectData *v8; // rax
  EffectData_vtbl *v9; // rbx
  EffectData *v10; // rax

  v3 = delEmitter->getParent(delEmitter);
  v4 = v3;
  if ( v3 && v3->getChild(v3) == delEmitter )
  {
    v5 = v4->__vftable;
    v6 = delEmitter->getSiblingFront(delEmitter);
    v5->setChild(v4, v6);
  }
  v7 = delEmitter->getSiblingFront(delEmitter);
  v8 = delEmitter->getSiblingBack(delEmitter);
  if ( v8 )
    v8->setSiblingFront(v8, v7);
  if ( v7 )
  {
    v9 = v7->__vftable;
    v10 = delEmitter->getSiblingBack(delEmitter);
    v9->setSiblingBack(v7, v10);
  }
}

Effect *__fastcall getLastSiblingEmitter<Effect>(Effect *myEmitter)
{
  while ( myEmitter->siblingFront )
    myEmitter = myEmitter->siblingFront;
  return myEmitter;
}

void __fastcall extension::AsyncContent<OGLSecondary>::AsyncContent<OGLSecondary>(
        extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *this,
        const std::string *name,
        const std::string *optstr)
{
  std::string *p_m_name; // rcx
  std::string *Ptr; // rax
  std::string *p_m_loadOptionString; // rcx
  const std::string *v8; // rax

  this->m_refCount.m_value._My_val = 1i64;
  p_m_name = (std::string *)&this->m_name;
  p_m_name->_Mypair._Myval2._Myres = 15i64;
  p_m_name->_Mypair._Myval2._Mysize = 0i64;
  if ( p_m_name->_Mypair._Myval2._Myres < 0x10 )
    Ptr = p_m_name;
  else
    Ptr = (std::string *)p_m_name->_Mypair._Myval2._Bx._Ptr;
  Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(p_m_name, name, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  p_m_loadOptionString = (std::string *)&this->m_loadOptionString;
  this->m_loadOptionString._Mypair._Myval2._Myres = 15i64;
  this->m_loadOptionString._Mypair._Myval2._Mysize = 0i64;
  if ( this->m_loadOptionString._Mypair._Myval2._Myres < 0x10 )
    v8 = &this->m_loadOptionString;
  else
    v8 = (const std::string *)p_m_loadOptionString->_Mypair._Myval2._Bx._Ptr;
  v8->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(p_m_loadOptionString, optstr, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  this->m_data._Mypair._Myval2 = 0i64;
  this->m_status.m_stateFlags.m_value._My_val = 0i64;
  this->m_status.m_stateFlags.m_value._My_val = 0i64;
  this->m_errorCode = 0;
  this->m_isDataReleased = 0;
}

void __fastcall extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::BasicFutureObject<OGLFigure,extension::FutureFigureOption>(
        extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *this,
        extension::FutureObjectSpec::NoCache_t __formal,
        const std::string *asset_path,
        const extension::FutureFigureOption *opt)
{
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *v7; // rsi
  const std::string *v8; // rbx
  const std::string *v9; // rax
  extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > *v10; // rax
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *v11; // rax
  char *Ptr; // rcx
  char *v13; // rax
  char *v14; // rcx
  char *v15; // rax
  extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > v16; // [rsp+28h] [rbp-90h] BYREF
  __int64 v17; // [rsp+30h] [rbp-88h]
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *v18; // [rsp+38h] [rbp-80h]
  std::string v19; // [rsp+40h] [rbp-78h] BYREF
  std::string result; // [rsp+60h] [rbp-58h] BYREF

  v17 = -2i64;
  this->m_isNoCache = 1;
  v7 = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *)operator new(0x18ui64);
  v18 = v7;
  v8 = extension::FutureObjectJobManager<OGLFigure,extension::FutureFigureOption>::Stringize(&result, opt);
  v9 = extension::AsyncWorker::NormalizeAssetPath(&v19, asset_path);
  v10 = extension::FutureObjectJobManager<OGLFigure,extension::FutureFigureOption>::LoadStart(&v16, v9, v8, opt);
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::Body(
    v7,
    (extension::RefCountablePtr<extension::AsyncContent<OGLFigure> >)v10);
  this->m_body.m_ptr = v11;
  if ( v19._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = v19._Mypair._Myval2._Bx._Ptr;
    if ( v19._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v19._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v13 = (char *)*((_QWORD *)v19._Mypair._Myval2._Bx._Ptr - 1);
      if ( v13 >= v19._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v19._Mypair._Myval2._Bx._Ptr - v13) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v19._Mypair._Myval2._Bx._Ptr - v13) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)v19._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  v19._Mypair._Myval2._Myres = 15i64;
  v19._Mypair._Myval2._Mysize = 0i64;
  v19._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    v14 = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v15 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v15 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v14);
  }
}

void __fastcall std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>(
        std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *this)
{
  this->_Traitsobj._Mypair._Myval2._Myval2 = 0.0;
  this->_List._Mypair._Myval2._Myhead = 0i64;
  this->_List._Mypair._Myval2._Mysize = 0i64;
  this->_List._Mypair._Myval2._Myhead = std::_List_alloc<std::_List_base_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>::_Buynode0(
                                          (std::_List_alloc<std::_List_base_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> > *)this,
                                          0i64,
                                          0i64);
  this->_Vec._Mypair._Myval2._Myfirst = 0i64;
  this->_Vec._Mypair._Myval2._Mylast = 0i64;
  this->_Vec._Mypair._Myval2._Myend = 0i64;
  this->_Traitsobj._Mypair._Myval2._Myval2 = 1.0;
  std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>,0>>::_Init(
    (std::_Hash<std::_Umap_traits<extension::SoundHashKey,int,std::_Uhash_compare<extension::SoundHashKey,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey> >,std::allocator<std::pair<extension::SoundHashKey const ,int> >,0> > *)this,
    8ui64);
}

void __fastcall extension::BasicFutureObject<OGLCurve,void>::AssetCache::AssetCache(
        extension::BasicFutureObject<OGLCurve,void>::AssetCache *this)
{
  extension::AssetCacheExpiredEntryCleaner *v1; // rax
  extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> *v2; // r8

  InitializeCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache>);
  extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.m_Prev = &extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.m_Next = &extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.__vftable = (extension::BasicFutureObject<OGLCurve,void>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheBase::`vftable';
  v1 = extension::_anonymous_namespace_::AssetCacheExpiredEntryCleaner::Instance();
  if ( v1 )
    v2 = &v1->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  else
    v2 = 0i64;
  extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = v2->m_Prev;
  v2->m_Prev->m_Next = extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.m_Next;
  extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.m_Next = v2;
  v2->m_Prev = &extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.__vftable = (extension::BasicFutureObject<OGLCurve,void>::AssetCache_vtbl *)&extension::BasicFutureObject<OGLCurve,void>::AssetCache::`vftable';
  std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>((std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.m_cachedObjectMap);
}

void __fastcall extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache::AssetCache(
        extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache *this)
{
  extension::AssetCacheExpiredEntryCleaner *v1; // rax
  extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> *v2; // r8

  InitializeCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache>);
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.m_Prev = &extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.m_Next = &extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.__vftable = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheBase::`vftable';
  v1 = extension::_anonymous_namespace_::AssetCacheExpiredEntryCleaner::Instance();
  if ( v1 )
    v2 = &v1->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  else
    v2 = 0i64;
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = v2->m_Prev;
  v2->m_Prev->m_Next = extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.m_Next;
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.m_Next = v2;
  v2->m_Prev = &extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.__vftable = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache_vtbl *)&extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache::`vftable';
  std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>((std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.m_cachedObjectMap);
}

void __fastcall extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache::AssetCache(
        extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache *this)
{
  extension::AssetCacheExpiredEntryCleaner *v1; // rax
  extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> *v2; // r8

  InitializeCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache>);
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.m_Prev = &extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.m_Next = &extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.__vftable = (extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheBase::`vftable';
  v1 = extension::_anonymous_namespace_::AssetCacheExpiredEntryCleaner::Instance();
  if ( v1 )
    v2 = &v1->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  else
    v2 = 0i64;
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = v2->m_Prev;
  v2->m_Prev->m_Next = extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.m_Next;
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.m_Next = v2;
  v2->m_Prev = &extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.__vftable = (extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache_vtbl *)&extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache::`vftable';
  std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>((std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.m_cachedObjectMap);
}

void __fastcall extension::BasicFutureObject<OGLCurve,void>::Body::Body(
        extension::BasicFutureObject<OGLCurve,void>::Body *this,
        extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > shared)
{
  volatile signed __int64 *My_val; // rax
  extension::AsyncContent<OGLCurve> *v5; // rcx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // [rsp+48h] [rbp+10h]

  this->__vftable = (extension::BasicFutureObject<OGLCurve,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  v6 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
  v6->m_refCount.m_value._My_val = 1i64;
  v6->m_principal = this;
  v6->m_sharedCount.m_value._My_val = 0i64;
  v6->m_sharedCount.m_value._My_val = 1i64;
  this->m_refCount.m_ptr = v6;
  this->__vftable = (extension::BasicFutureObject<OGLCurve,void>::Body_vtbl *)&extension::BasicFutureObject<OGLCurve,void>::Body::`vftable';
  My_val = (volatile signed __int64 *)shared.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<OGLCurve> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  v5 = (extension::AsyncContent<OGLCurve> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( shared.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v5 )
      extension::AsyncContent<OGLCurve>::`scalar deleting destructor'(v5, 0);
  }
}

void __fastcall extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::Body(
        extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *this,
        extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > shared)
{
  volatile signed __int64 *My_val; // rax
  extension::AsyncContent<OGLFigure> *v5; // rbx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // [rsp+48h] [rbp+10h]

  this->__vftable = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  v6 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
  v6->m_refCount.m_value._My_val = 1i64;
  v6->m_principal = this;
  v6->m_sharedCount.m_value._My_val = 0i64;
  v6->m_sharedCount.m_value._My_val = 1i64;
  this->m_refCount.m_ptr = v6;
  this->__vftable = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body_vtbl *)&extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::`vftable';
  My_val = (volatile signed __int64 *)shared.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<OGLFigure> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  v5 = (extension::AsyncContent<OGLFigure> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<OGLFigure>::~AsyncContent<OGLFigure>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::Body(
        extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *this,
        extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > shared)
{
  volatile signed __int64 *My_val; // rax
  extension::AsyncContent<OGLTexture> *v5; // rcx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // [rsp+48h] [rbp+10h]

  this->__vftable = (extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  v6 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
  v6->m_refCount.m_value._My_val = 1i64;
  v6->m_principal = this;
  v6->m_sharedCount.m_value._My_val = 0i64;
  v6->m_sharedCount.m_value._My_val = 1i64;
  this->m_refCount.m_ptr = v6;
  this->__vftable = (extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body_vtbl *)&extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::`vftable';
  My_val = (volatile signed __int64 *)shared.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<OGLTexture> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  v5 = (extension::AsyncContent<OGLTexture> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( shared.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v5 )
      extension::AsyncContent<Image>::`scalar deleting destructor'(v5, 0);
  }
}

void __fastcall EffectDataListManager::EffectDataListManager(EffectDataListManager *this)
{
  unsigned __int64 v2; // rdx

  this->__vftable = (EffectDataListManager_vtbl *)&EffectDataListManager::`vftable';
  *(_QWORD *)&this->m_FillColor.x = 0i64;
  *(_QWORD *)&this->m_FillColor.z = 0i64;
  this->m_FillColor.__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec4::`vftable';
  this->loadTexPathName._Mypair._Myval2._Myfirst = 0i64;
  this->loadTexPathName._Mypair._Myval2._Mylast = 0i64;
  this->loadTexPathName._Mypair._Myval2._Myend = 0i64;
  this->loadFigurePathName._Mypair._Myval2._Myfirst = 0i64;
  this->loadFigurePathName._Mypair._Myval2._Mylast = 0i64;
  this->loadFigurePathName._Mypair._Myval2._Myend = 0i64;
  this->loadCpuFigurePathName._Mypair._Myval2._Myfirst = 0i64;
  this->loadCpuFigurePathName._Mypair._Myval2._Mylast = 0i64;
  this->loadCpuFigurePathName._Mypair._Myval2._Myend = 0i64;
  this->loadCurvePathName._Mypair._Myval2._Myfirst = 0i64;
  this->loadCurvePathName._Mypair._Myval2._Mylast = 0i64;
  this->loadCurvePathName._Mypair._Myval2._Myend = 0i64;
  this->loadTexData._Mypair._Myval2._Myfirst = 0i64;
  this->loadTexData._Mypair._Myval2._Mylast = 0i64;
  this->loadTexData._Mypair._Myval2._Myend = 0i64;
  this->loadFigureData._Mypair._Myval2._Myfirst = 0i64;
  this->loadFigureData._Mypair._Myval2._Mylast = 0i64;
  this->loadFigureData._Mypair._Myval2._Myend = 0i64;
  this->loadCpuFigureData._Mypair._Myval2._Myfirst = 0i64;
  this->loadCpuFigureData._Mypair._Myval2._Mylast = 0i64;
  this->loadCpuFigureData._Mypair._Myval2._Myend = 0i64;
  this->loadCurveData._Mypair._Myval2._Myfirst = 0i64;
  this->loadCurveData._Mypair._Myval2._Mylast = 0i64;
  this->loadCurveData._Mypair._Myval2._Myend = 0i64;
  this->m_EffectDataList._Mypair._Myval2._Myfirst = 0i64;
  this->m_EffectDataList._Mypair._Myval2._Mylast = 0i64;
  this->m_EffectDataList._Mypair._Myval2._Myend = 0i64;
  this->m_CharaEffectDataLists._Mypair._Myval2._Myfirst = 0i64;
  this->m_CharaEffectDataLists._Mypair._Myval2._Mylast = 0i64;
  this->m_CharaEffectDataLists._Mypair._Myval2._Myend = 0i64;
  this->m_EffectList._Mypair._Myval2._Myfirst = 0i64;
  this->m_EffectList._Mypair._Myval2._Mylast = 0i64;
  this->m_EffectList._Mypair._Myval2._Myend = 0i64;
  this->m_BinaryFileInput.__vftable = (BinaryFileInput_vtbl *)&BinaryFileInput::`vftable';
  this->m_BinaryFileInput.m_pAppData = EffectAppData::getInstance();
  this->m_BinaryFileInput.m_LittleEndian = 1;
  this->m_BinaryFileInput.m_Align = 4;
  this->m_LittleEndian = 1;
  this->m_Align = 4;
  this->m_pBindModel = 0i64;
  this->m_PlayerNum = -1;
  *(_QWORD *)&this->m_FillColor.x = 0i64;
  *(_QWORD *)&this->m_FillColor.z = 0i64;
  if ( (unsigned __int64)(this->loadTexPathName._Mypair._Myval2._Myend - this->loadTexPathName._Mypair._Myval2._Myfirst) < 0x64 )
    std::vector<std::string>::_Reallocate(&this->loadTexPathName, 0x64ui64);
  if ( (unsigned __int64)(this->loadFigurePathName._Mypair._Myval2._Myend
                        - this->loadFigurePathName._Mypair._Myval2._Myfirst) < 0x64 )
    std::vector<std::string>::_Reallocate(&this->loadFigurePathName, 0x64ui64);
  if ( (unsigned __int64)(this->loadCurvePathName._Mypair._Myval2._Myend
                        - this->loadCurvePathName._Mypair._Myval2._Myfirst) < 0x64 )
    std::vector<std::string>::_Reallocate(&this->loadCurvePathName, 0x64ui64);
  if ( (unsigned __int64)(this->loadTexData._Mypair._Myval2._Myend - this->loadTexData._Mypair._Myval2._Myfirst) < 0x64 )
    std::vector<extension::exsound_detail::PreloadedAudioSet *>::_Reallocate(
      (std::vector<extension::exsound_detail::PreloadedAudioSet *> *)&this->loadTexData,
      0x64ui64);
  if ( (unsigned __int64)(this->loadFigureData._Mypair._Myval2._Myend - this->loadFigureData._Mypair._Myval2._Myfirst) < 0x64 )
    std::vector<extension::exsound_detail::PreloadedAudioSet *>::_Reallocate(
      (std::vector<extension::exsound_detail::PreloadedAudioSet *> *)&this->loadFigureData,
      0x64ui64);
  if ( (unsigned __int64)(this->loadCurveData._Mypair._Myval2._Myend - this->loadCurveData._Mypair._Myval2._Myfirst) < 0x64 )
    std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::_Reallocate(
      (std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&this->loadCurveData,
      0x64ui64);
  v2 = this->m_EffectDataList._Mypair._Myval2._Myend - this->m_EffectDataList._Mypair._Myval2._Myfirst;
  if ( v2 < 0x64 )
    std::vector<EffectListNodeData>::_Reallocate(&this->m_EffectDataList, 0x64ui64);
  if ( (unsigned __int64)(this->m_EffectList._Mypair._Myval2._Myend - this->m_EffectList._Mypair._Myval2._Myfirst) < 0x64 )
    std::vector<EffectListNode>::_Reallocate(&this->m_EffectList, 0x64ui64);
  if ( (unsigned __int64)(this->m_CharaEffectDataLists._Mypair._Myval2._Myend
                        - this->m_CharaEffectDataLists._Mypair._Myval2._Myfirst) < 0x64 )
    std::vector<EffectDataList>::_Reallocate(&this->m_CharaEffectDataLists, v2);
}

void __fastcall extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>(
        extension::exsound_detail::SoundBankParser *this)
{
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *m_ptr; // rcx

  m_ptr = this->m_fileImage.m_body.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
  }
}

void __fastcall extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>>::~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>>(
        extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> > *this)
{
  _RTL_CRITICAL_SECTION *m_associated; // rdi
  int v2; // ebx
  __int64 m_ownsLockCount; // rbx

  m_associated = (_RTL_CRITICAL_SECTION *)this->m_associated;
  v2 = -this->m_ownsLockCount;
  if ( v2 < 0 || this->m_ownsLockCount == 0 )
  {
    if ( this->m_ownsLockCount > 0 )
    {
      m_ownsLockCount = (unsigned int)this->m_ownsLockCount;
      do
      {
        LeaveCriticalSection(m_associated);
        --m_ownsLockCount;
      }
      while ( m_ownsLockCount );
    }
  }
  else
  {
    do
    {
      EnterCriticalSection(m_associated);
      --v2;
    }
    while ( v2 );
  }
}

// attributes: thunk
void __stdcall AgMutex::~AgMutex(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}

void __fastcall extension::RefCountablePtr<extension::AsyncContent<OGLCurve>>::~RefCountablePtr<extension::AsyncContent<OGLCurve>>(
        extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > *this,
        unsigned int a2)
{
  extension::AsyncContent<OGLCurve> *m_ptr; // rcx

  m_ptr = this->m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      extension::AsyncContent<OGLCurve>::`scalar deleting destructor'(m_ptr, a2);
  }
}

void __fastcall extension::RefCountablePtr<extension::AsyncContent<OGLTexture>>::~RefCountablePtr<extension::AsyncContent<OGLTexture>>(
        extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > *this,
        unsigned int a2)
{
  extension::AsyncContent<OGLTexture> *m_ptr; // rcx

  m_ptr = this->m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      extension::AsyncContent<Image>::`scalar deleting destructor'(m_ptr, a2);
  }
}

void __fastcall extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>::~RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>(
        extension::RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> *this)
{
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *m_ptr; // rcx

  m_ptr = this->m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
  }
}

void __fastcall std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>::~list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>(
        std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *this)
{
  std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>>>::clear(this);
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall BattleSystem::ComboMissionJudge::TermClearInfo::~TermClearInfo(
        std::unique_ptr<unsigned char [0]> *this,
        unsigned __int64 a2)
{
  unsigned __int8 *Myval2; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( Myval2 )
    operator delete(Myval2, a2);
}

void __fastcall std::unique_ptr<OGLCurve>::~unique_ptr<OGLCurve>(std::unique_ptr<OGLCurve> *this, unsigned int a2)
{
  OGLCurve *Myval2; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( Myval2 )
    OGLCurve::`scalar deleting destructor'(Myval2, a2);
}

void __fastcall std::unique_ptr<OGLModel>::~unique_ptr<OGLModel>(
        std::unique_ptr<extension::SoundList::LazyMediaSetBuildJob> *this)
{
  extension::SoundList::LazyMediaSetBuildJob *Myval2; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( Myval2 )
    ((void (__fastcall *)(extension::SoundList::LazyMediaSetBuildJob *, __int64))Myval2->~AgIThreadHost)(Myval2, 1i64);
}

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>>>>(
        std::vector<unsigned char *> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<EffectDataList>::~vector<EffectDataList>(
        std::vector<EffectDataList> *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<EffectDataList> > *a3,
        std::integral_constant<bool,0> a4)
{
  EffectDataList *Myfirst; // rcx
  std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *v6; // rcx

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Destroy_range<std::allocator<EffectDataList>,EffectDataList *>(Myfirst, this->_Mypair._Myval2._Mylast, a3, a4);
    std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
      v6,
      (AgDirectory::DirectoryEntry *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<EffectListNode>::~vector<EffectListNode>(std::vector<EffectListNode> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<EffectListNodeData>::~vector<EffectListNodeData>(
        std::vector<EffectListNodeData> *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<EffectListNodeData> > *a3,
        std::integral_constant<bool,0> a4)
{
  EffectListNodeData *Myfirst; // rcx
  std::allocator<AgControllerPairingChangedEvent> *v6; // rcx

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Destroy_range1<std::allocator<EffectListNodeData>,EffectListNodeData *>(
      Myfirst,
      this->_Mypair._Myval2._Mylast,
      a3,
      a4);
    std::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo>>::deallocate(
      v6,
      (AgControllerPairingChangedEvent *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

// attributes: thunk
void __fastcall std::vector<extension::BasicFutureObject<OGLMirror,void>>::~vector<extension::BasicFutureObject<OGLMirror,void>>(
        std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *this)
{
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy(this);
}

void __fastcall extension::BasicFutureObject<OGLCurve,void>::AssetCache::~AssetCache(
        extension::BasicFutureObject<OGLCurve,void>::AssetCache *this)
{
  AgLogger **Myfirst; // rdx

  this->__vftable = (extension::BasicFutureObject<OGLCurve,void>::AssetCache_vtbl *)&extension::BasicFutureObject<OGLCurve,void>::AssetCache::`vftable';
  Myfirst = (AgLogger **)this->m_cachedObjectMap._Vec._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      Myfirst,
      ((char *)this->m_cachedObjectMap._Vec._Mypair._Myval2._Myend - (char *)Myfirst) >> 3);
    this->m_cachedObjectMap._Vec._Mypair._Myval2._Myfirst = 0i64;
    this->m_cachedObjectMap._Vec._Mypair._Myval2._Mylast = 0i64;
    this->m_cachedObjectMap._Vec._Mypair._Myval2._Myend = 0i64;
  }
  std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>>>::clear((std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *)&this->m_cachedObjectMap._List);
  operator delete(this->m_cachedObjectMap._List._Mypair._Myval2._Myhead);
  this->__vftable = (extension::BasicFutureObject<OGLCurve,void>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheNode::`vftable';
  this->m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = this->m_Prev;
  this->m_Prev->m_Next = this->m_Next;
  this->m_Next = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  this->m_Prev = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache>);
}

void __fastcall extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache::~AssetCache(
        extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache *this)
{
  AgLogger **Myfirst; // rdx

  this->__vftable = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache_vtbl *)&extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache::`vftable';
  Myfirst = (AgLogger **)this->m_cachedObjectMap._Vec._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      Myfirst,
      ((char *)this->m_cachedObjectMap._Vec._Mypair._Myval2._Myend - (char *)Myfirst) >> 3);
    this->m_cachedObjectMap._Vec._Mypair._Myval2._Myfirst = 0i64;
    this->m_cachedObjectMap._Vec._Mypair._Myval2._Mylast = 0i64;
    this->m_cachedObjectMap._Vec._Mypair._Myval2._Myend = 0i64;
  }
  std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>>>::clear((std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *)&this->m_cachedObjectMap._List);
  operator delete(this->m_cachedObjectMap._List._Mypair._Myval2._Myhead);
  this->__vftable = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheNode::`vftable';
  this->m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = this->m_Prev;
  this->m_Prev->m_Next = this->m_Next;
  this->m_Next = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  this->m_Prev = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache>);
}

void __fastcall extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache::~AssetCache(
        extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache *this)
{
  AgLogger **Myfirst; // rdx

  this->__vftable = (extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache_vtbl *)&extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache::`vftable';
  Myfirst = (AgLogger **)this->m_cachedObjectMap._Vec._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      Myfirst,
      ((char *)this->m_cachedObjectMap._Vec._Mypair._Myval2._Myend - (char *)Myfirst) >> 3);
    this->m_cachedObjectMap._Vec._Mypair._Myval2._Myfirst = 0i64;
    this->m_cachedObjectMap._Vec._Mypair._Myval2._Mylast = 0i64;
    this->m_cachedObjectMap._Vec._Mypair._Myval2._Myend = 0i64;
  }
  std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>>>::clear((std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *)&this->m_cachedObjectMap._List);
  operator delete(this->m_cachedObjectMap._List._Mypair._Myval2._Myhead);
  this->__vftable = (extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheNode::`vftable';
  this->m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = this->m_Prev;
  this->m_Prev->m_Next = this->m_Next;
  this->m_Next = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  this->m_Prev = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache>);
}

void __fastcall extension::BasicFutureObject<OGLCurve,void>::Body::~Body(
        extension::BasicFutureObject<OGLCurve,void>::Body *this)
{
  extension::AsyncContent<OGLCurve> *m_ptr; // rdx
  signed __int64 My_val; // rax
  unsigned __int64 v4; // rtt
  extension::AsyncContent<OGLCurve> *v5; // rcx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // rcx
  signed __int64 v7; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::BasicFutureObject<OGLCurve,void>::Body_vtbl *)&extension::BasicFutureObject<OGLCurve,void>::Body::`vftable';
  if ( m_ptr )
  {
    do
    {
      My_val = m_ptr->m_status.m_stateFlags.m_value._My_val;
      if ( (My_val & 1) != 0 )
        break;
      v4 = m_ptr->m_status.m_stateFlags.m_value._My_val;
    }
    while ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)&m_ptr->m_status, My_val | 2, My_val) );
  }
  v5 = this->m_content.m_ptr;
  if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    extension::AsyncContent<OGLCurve>::`scalar deleting destructor'(v5, (unsigned int)m_ptr);
  this->__vftable = (extension::BasicFutureObject<OGLCurve,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  this->m_refCount.m_ptr->m_principal = 0i64;
  v6 = this->m_refCount.m_ptr;
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64);
    if ( v7 == 1 )
      operator delete(v6, 0x18ui64);
  }
}

void __fastcall extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::~Body(
        extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *this)
{
  extension::AsyncContent<OGLTexture> *m_ptr; // rdx
  signed __int64 My_val; // rax
  unsigned __int64 v4; // rtt
  extension::AsyncContent<OGLTexture> *v5; // rcx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // rcx
  signed __int64 v7; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body_vtbl *)&extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::`vftable';
  if ( m_ptr )
  {
    do
    {
      My_val = m_ptr->m_status.m_stateFlags.m_value._My_val;
      if ( (My_val & 1) != 0 )
        break;
      v4 = m_ptr->m_status.m_stateFlags.m_value._My_val;
    }
    while ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)&m_ptr->m_status, My_val | 2, My_val) );
  }
  v5 = this->m_content.m_ptr;
  if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    extension::AsyncContent<Image>::`scalar deleting destructor'(v5, (unsigned int)m_ptr);
  this->__vftable = (extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  this->m_refCount.m_ptr->m_principal = 0i64;
  v6 = this->m_refCount.m_ptr;
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64);
    if ( v7 == 1 )
      operator delete(v6, 0x18ui64);
  }
}

void __fastcall EffectDataListManager::~EffectDataListManager(EffectDataListManager *this)
{
  std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *v2; // rcx
  std::_Wrap_alloc<std::allocator<EffectDataList> > *v3; // r8
  std::integral_constant<bool,0> v4; // r9
  EffectListNode *Myfirst; // rdx
  EffectDataList *v6; // rcx
  std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *v7; // rcx
  EffectListNodeData *v8; // rcx
  signed __int64 v9; // rcx
  std::allocator<AgLogger *> *v10; // rcx
  std::_Wrap_alloc<std::allocator<std::string > > *v11; // r8
  std::integral_constant<bool,0> v12; // r9
  void **v13; // rdx
  void **v14; // rdx
  void **v15; // rdx
  std::string *v16; // rcx
  std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *v17; // rcx
  std::string *v18; // rcx
  std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *v19; // rcx
  std::string *v20; // rcx
  std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *v21; // rcx
  std::string *v22; // rcx
  std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *v23; // rcx

  this->__vftable = (EffectDataListManager_vtbl *)&EffectDataListManager::`vftable';
  EffectDataListManager::clearEffectData(this);
  EffectDataListManager::clearEffect(this);
  EffectDataListManager::clearResourceData(this);
  this->m_BinaryFileInput.__vftable = (BinaryFileInput_vtbl *)&BinaryFileInput::`vftable';
  Myfirst = this->m_EffectList._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      v2,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)Myfirst,
      this->m_EffectList._Mypair._Myval2._Myend - Myfirst);
    this->m_EffectList._Mypair._Myval2._Myfirst = 0i64;
    this->m_EffectList._Mypair._Myval2._Mylast = 0i64;
    this->m_EffectList._Mypair._Myval2._Myend = 0i64;
  }
  v6 = this->m_CharaEffectDataLists._Mypair._Myval2._Myfirst;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<EffectDataList>,EffectDataList *>(
      v6,
      this->m_CharaEffectDataLists._Mypair._Myval2._Mylast,
      v3,
      v4);
    std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
      v7,
      (AgDirectory::DirectoryEntry *)this->m_CharaEffectDataLists._Mypair._Myval2._Myfirst,
      this->m_CharaEffectDataLists._Mypair._Myval2._Myend - this->m_CharaEffectDataLists._Mypair._Myval2._Myfirst);
    this->m_CharaEffectDataLists._Mypair._Myval2._Myfirst = 0i64;
    this->m_CharaEffectDataLists._Mypair._Myval2._Mylast = 0i64;
    this->m_CharaEffectDataLists._Mypair._Myval2._Myend = 0i64;
  }
  v8 = this->m_EffectDataList._Mypair._Myval2._Myfirst;
  if ( v8 )
  {
    std::_Destroy_range1<std::allocator<EffectListNodeData>,EffectListNodeData *>(
      v8,
      this->m_EffectDataList._Mypair._Myval2._Mylast,
      (std::_Wrap_alloc<std::allocator<EffectListNodeData> > *)v3,
      v4);
    v9 = (char *)this->m_EffectDataList._Mypair._Myval2._Myend - (char *)this->m_EffectDataList._Mypair._Myval2._Myfirst;
    std::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo>>::deallocate(
      (std::allocator<AgControllerPairingChangedEvent> *)v9,
      (AgControllerPairingChangedEvent *)this->m_EffectDataList._Mypair._Myval2._Myfirst,
      v9 / 48);
    this->m_EffectDataList._Mypair._Myval2._Myfirst = 0i64;
    this->m_EffectDataList._Mypair._Myval2._Mylast = 0i64;
    this->m_EffectDataList._Mypair._Myval2._Myend = 0i64;
  }
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&this->loadCurveData);
  v13 = this->loadCpuFigureData._Mypair._Myval2._Myfirst;
  if ( v13 )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v10,
      (AgLogger **)v13,
      this->loadCpuFigureData._Mypair._Myval2._Myend - v13);
    this->loadCpuFigureData._Mypair._Myval2._Myfirst = 0i64;
    this->loadCpuFigureData._Mypair._Myval2._Mylast = 0i64;
    this->loadCpuFigureData._Mypair._Myval2._Myend = 0i64;
  }
  v14 = this->loadFigureData._Mypair._Myval2._Myfirst;
  if ( v14 )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v10,
      (AgLogger **)v14,
      this->loadFigureData._Mypair._Myval2._Myend - v14);
    this->loadFigureData._Mypair._Myval2._Myfirst = 0i64;
    this->loadFigureData._Mypair._Myval2._Mylast = 0i64;
    this->loadFigureData._Mypair._Myval2._Myend = 0i64;
  }
  v15 = this->loadTexData._Mypair._Myval2._Myfirst;
  if ( v15 )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v10,
      (AgLogger **)v15,
      this->loadTexData._Mypair._Myval2._Myend - v15);
    this->loadTexData._Mypair._Myval2._Myfirst = 0i64;
    this->loadTexData._Mypair._Myval2._Mylast = 0i64;
    this->loadTexData._Mypair._Myval2._Myend = 0i64;
  }
  v16 = this->loadCurvePathName._Mypair._Myval2._Myfirst;
  if ( v16 )
  {
    std::_Destroy_range1<std::allocator<std::string>,std::string *>(
      v16,
      this->loadCurvePathName._Mypair._Myval2._Mylast,
      v11,
      v12);
    std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
      v17,
      (AgDirectory::DirectoryEntry *)this->loadCurvePathName._Mypair._Myval2._Myfirst,
      this->loadCurvePathName._Mypair._Myval2._Myend - this->loadCurvePathName._Mypair._Myval2._Myfirst);
    this->loadCurvePathName._Mypair._Myval2._Myfirst = 0i64;
    this->loadCurvePathName._Mypair._Myval2._Mylast = 0i64;
    this->loadCurvePathName._Mypair._Myval2._Myend = 0i64;
  }
  v18 = this->loadCpuFigurePathName._Mypair._Myval2._Myfirst;
  if ( v18 )
  {
    std::_Destroy_range1<std::allocator<std::string>,std::string *>(
      v18,
      this->loadCpuFigurePathName._Mypair._Myval2._Mylast,
      v11,
      v12);
    std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
      v19,
      (AgDirectory::DirectoryEntry *)this->loadCpuFigurePathName._Mypair._Myval2._Myfirst,
      this->loadCpuFigurePathName._Mypair._Myval2._Myend - this->loadCpuFigurePathName._Mypair._Myval2._Myfirst);
    this->loadCpuFigurePathName._Mypair._Myval2._Myfirst = 0i64;
    this->loadCpuFigurePathName._Mypair._Myval2._Mylast = 0i64;
    this->loadCpuFigurePathName._Mypair._Myval2._Myend = 0i64;
  }
  v20 = this->loadFigurePathName._Mypair._Myval2._Myfirst;
  if ( v20 )
  {
    std::_Destroy_range1<std::allocator<std::string>,std::string *>(
      v20,
      this->loadFigurePathName._Mypair._Myval2._Mylast,
      v11,
      v12);
    std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
      v21,
      (AgDirectory::DirectoryEntry *)this->loadFigurePathName._Mypair._Myval2._Myfirst,
      this->loadFigurePathName._Mypair._Myval2._Myend - this->loadFigurePathName._Mypair._Myval2._Myfirst);
    this->loadFigurePathName._Mypair._Myval2._Myfirst = 0i64;
    this->loadFigurePathName._Mypair._Myval2._Mylast = 0i64;
    this->loadFigurePathName._Mypair._Myval2._Myend = 0i64;
  }
  v22 = this->loadTexPathName._Mypair._Myval2._Myfirst;
  if ( v22 )
  {
    std::_Destroy_range1<std::allocator<std::string>,std::string *>(
      v22,
      this->loadTexPathName._Mypair._Myval2._Mylast,
      v11,
      v12);
    std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
      v23,
      (AgDirectory::DirectoryEntry *)this->loadTexPathName._Mypair._Myval2._Myfirst,
      this->loadTexPathName._Mypair._Myval2._Myend - this->loadTexPathName._Mypair._Myval2._Myfirst);
    this->loadTexPathName._Mypair._Myval2._Myfirst = 0i64;
    this->loadTexPathName._Mypair._Myval2._Mylast = 0i64;
    this->loadTexPathName._Mypair._Myval2._Myend = 0i64;
  }
  this->m_FillColor.__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec4::`vftable';
}

// attributes: thunk
void __fastcall extension::FutureStageOption::~FutureStageOption(
        extension::exsound_detail::SoundBankMediaDefinition *this)
{
  std::string::~string(&this->m_fileName);
}

void __fastcall extension::FutureFigureOption::~FutureFigureOption(
        extension::FutureFigureOption *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *a3,
        std::integral_constant<bool,0> a4)
{
  extension::FutureAssetOptionFileSetting *Myfirst; // rcx
  std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *v6; // rcx

  Myfirst = this->fileSetting._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Destroy_range1<std::allocator<extension::FutureAssetOptionFileSetting>,extension::FutureAssetOptionFileSetting *>(
      Myfirst,
      this->fileSetting._Mypair._Myval2._Mylast,
      a3,
      a4);
    std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting>>::deallocate(
      v6,
      this->fileSetting._Mypair._Myval2._Myfirst,
      this->fileSetting._Mypair._Myval2._Myend - this->fileSetting._Mypair._Myval2._Myfirst);
    this->fileSetting._Mypair._Myval2._Myfirst = 0i64;
    this->fileSetting._Mypair._Myval2._Mylast = 0i64;
    this->fileSetting._Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall extension::FutureTextureOption::~FutureTextureOption(extension::FutureTextureOption *this)
{
  std::vector<AgDisplayChangedEvent>::_Tidy((std::vector<AgSuspendingEvent> *)&this->paletteData);
}

extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> *__fastcall std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
        std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *this,
        const std::string *_Keyval)
{
  std::_List_buy<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *v4; // rcx
  const std::piecewise_construct_t *v5; // r9
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Ptr; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Myhead; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rdi
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v9; // rdx
  unsigned __int64 Mysize; // rax
  std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >,bool> v12; // [rsp+30h] [rbp-18h] BYREF
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > result; // [rsp+50h] [rbp+8h] BYREF

  std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>>>,0>>::lower_bound(
    this,
    &result,
    _Keyval);
  Ptr = result._Ptr;
  if ( result._Ptr == this->_List._Mypair._Myval2._Myhead )
  {
    Myhead = this->_List._Mypair._Myval2._Myhead;
    result._Ptr = (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)_Keyval;
    Next = Myhead->_Next;
    v9 = std::_List_buy<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::string const &>,std::tuple<>>(
           v4,
           Myhead->_Next,
           Myhead->_Next->_Prev,
           v5,
           (std::tuple<std::string const &> *)&result);
    Mysize = this->_List._Mypair._Myval2._Mysize;
    if ( Mysize == 0x3FFFFFFFFFFFFFEi64 )
      std::_Xlength_error("list<T> too long");
    this->_List._Mypair._Myval2._Mysize = Mysize + 1;
    Next->_Prev = v9;
    v9->_Prev->_Next = v9;
    std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>,0>>::_Insert<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>(
      this,
      &v12,
      &this->_List._Mypair._Myval2._Myhead->_Next->_Myval,
      (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >)this->_List._Mypair._Myval2._Myhead->_Next);
    Ptr = v12.first._Ptr;
  }
  return &Ptr->_Myval.second;
}

void __fastcall extension::BasicFutureObject<OGLCamera,void>::AssetCache::CleanupExpiredEntry(
        extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache *this)
{
  _RTL_CRITICAL_SECTION *v1; // rsi
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Myhead; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rbx
  std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v5; // r8
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // rax
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > result; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_RTL_CRITICAL_SECTION *)&this->extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache>;
  if ( !this )
    v1 = 0i64;
  EnterCriticalSection(v1);
  Myhead = this->m_cachedObjectMap._List._Mypair._Myval2._Myhead;
  Next = Myhead->_Next;
  if ( Myhead->_Next != Myhead )
  {
    do
    {
      v5._Ptr = Next;
      Next = Next->_Next;
      m_ptr = v5._Ptr->_Myval.second.m_proxy.m_ptr;
      if ( !m_ptr || !m_ptr->m_sharedCount.m_value._My_val )
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>>,0>>::erase(
          &this->m_cachedObjectMap,
          &result,
          v5);
    }
    while ( Next != this->m_cachedObjectMap._List._Mypair._Myval2._Myhead );
  }
  LeaveCriticalSection(v1);
}

extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> *__fastcall extension::BasicFutureObject<OGLCurve,void>::Body::GetSharedEmpty(
        extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> *result)
{
  extension::RefCountableWeakSupportBase::WeakProxy *v3; // [rsp+40h] [rbp+8h]

  if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLCurve__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLCurve__X_extension___4_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLCurve__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLCurve__X_extension___4_XZ_4HA);
    if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLCurve__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLCurve__X_extension___4_XZ_4HA == -1 )
    {
      `extension::BasicFutureObject<OGLCurve,void>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<OGLCurve,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
      v3 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
      v3->m_refCount.m_value._My_val = 1i64;
      v3->m_principal = &`extension::BasicFutureObject<OGLCurve,void>::Body::GetSharedEmpty'::`2'::shared_body;
      v3->m_sharedCount.m_value._My_val = 0i64;
      v3->m_sharedCount.m_value._My_val = 1i64;
      `extension::BasicFutureObject<OGLCurve,void>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr = v3;
      `extension::BasicFutureObject<OGLCurve,void>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<OGLCurve,void>::Body_vtbl *)&extension::BasicFutureObject<OGLCurve,void>::Body::`vftable';
      `extension::BasicFutureObject<OGLCurve,void>::Body::GetSharedEmpty'::`2'::shared_body.m_content.m_ptr = 0i64;
      atexit(`extension::BasicFutureObject<OGLCurve,void>::Body::GetSharedEmpty'::`2'::`dynamic atexit destructor for 'shared_body'');
      Init_thread_footer(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLCurve__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLCurve__X_extension___4_XZ_4HA);
    }
  }
  result->m_ptr = &`extension::BasicFutureObject<OGLCurve,void>::Body::GetSharedEmpty'::`2'::shared_body;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&`extension::BasicFutureObject<OGLCurve,void>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr->m_sharedCount,
    1ui64);
  return result;
}

extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > *__fastcall extension::FutureObjectJobManager<OGLCurve,void>::LoadStart(
        extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > *result,
        const std::string *name,
        const std::string *optstr,
        const void *__formal)
{
  extension::AsyncContent<OGLCurve> *v7; // rax
  unsigned int v8; // edx
  extension::AsyncContent<OGLCurve> *v9; // rcx
  extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > shared; // [rsp+28h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  extension::AsyncContent<OGLCurve> **v13; // [rsp+38h] [rbp-10h]
  extension::AsyncContent<OGLCurve> *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = (extension::AsyncContent<OGLCurve> *)__formal;
  v12 = -2i64;
  v14 = (extension::AsyncContent<OGLCurve> *)operator new(0x68ui64);
  extension::AsyncContent<OGLSecondary>::AsyncContent<OGLSecondary>(
    (extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *)v14,
    name,
    optstr);
  result->m_ptr = v7;
  v14 = v7;
  if ( v7 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 1ui64);
    v7 = v14;
  }
  v13 = &v14;
  shared.m_ptr = v7;
  if ( v7 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 1ui64);
  extension::future_asset_detail::EnqueueFutureCurveJob((extension::RefCountablePtr<extension::AsyncContent<OGLCurve> >)&shared);
  v9 = v14;
  if ( v14 && _InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFFFui64) == 1 && v9 )
    extension::AsyncContent<OGLCurve>::`scalar deleting destructor'(v9, v8);
  return result;
}

extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > *__fastcall extension::FutureObjectJobManager<OGLFigure,extension::FutureFigureOption>::LoadStart(
        extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > *result,
        const std::string *name,
        const std::string *optstr,
        const extension::FutureFigureOption *opt)
{
  extension::AsyncContent<OGLFigure> *v8; // rax
  extension::AsyncContent<OGLFigure> *v9; // rbx
  extension::AsyncContent<OGLFigure> *v11; // [rsp+28h] [rbp-30h] BYREF
  extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > shared; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  extension::AsyncContent<OGLFigure> **v14; // [rsp+40h] [rbp-18h]

  v13 = -2i64;
  shared.m_ptr = (extension::AsyncContent<OGLFigure> *)operator new(0x68ui64);
  extension::AsyncContent<OGLSecondary>::AsyncContent<OGLSecondary>(
    (extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *)shared.m_ptr,
    name,
    optstr);
  result->m_ptr = v8;
  v11 = v8;
  if ( v8 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 1ui64);
    v8 = v11;
  }
  v14 = &v11;
  shared.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 1ui64);
  extension::future_asset_detail::EnqueueFutureFigureJob(
    (extension::RefCountablePtr<extension::AsyncContent<OGLFigure> >)&shared,
    opt);
  v9 = v11;
  if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFui64) == 1 && v9 )
  {
    extension::AsyncContent<OGLFigure>::~AsyncContent<OGLFigure>(v9);
    operator delete(v9, 0x68ui64);
  }
  return result;
}

extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > *__fastcall extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>::LoadStart(
        extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > *result,
        const std::string *name,
        const std::string *optstr,
        const extension::FutureTextureOption *opt)
{
  extension::AsyncContent<OGLTexture> *v8; // rax
  unsigned int v9; // edx
  extension::AsyncContent<OGLTexture> *v10; // rcx
  extension::AsyncContent<OGLTexture> *v12; // [rsp+28h] [rbp-30h] BYREF
  extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > shared; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  extension::AsyncContent<OGLTexture> **v15; // [rsp+40h] [rbp-18h]

  v14 = -2i64;
  shared.m_ptr = (extension::AsyncContent<OGLTexture> *)operator new(0x68ui64);
  extension::AsyncContent<OGLSecondary>::AsyncContent<OGLSecondary>(
    (extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *)shared.m_ptr,
    name,
    optstr);
  result->m_ptr = v8;
  v12 = v8;
  if ( v8 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 1ui64);
    v8 = v12;
  }
  v15 = &v12;
  shared.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 1ui64);
  extension::future_asset_detail::EnqueueFutureTextureJob(
    (extension::RefCountablePtr<extension::AsyncContent<OGLTexture> >)&shared,
    opt);
  v10 = v12;
  if ( v12 && _InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFui64) == 1 && v10 )
    extension::AsyncContent<Image>::`scalar deleting destructor'(v10, v9);
  return result;
}

std::string *__fastcall extension::FutureObjectJobManager<extension::exsound_detail::SoundBankImpl,void>::Stringize(
        std::string *result,
        const void *__formal)
{
  std::string *v2; // rax

  result->_Mypair._Myval2._Myres = 15i64;
  v2 = result;
  result->_Mypair._Myval2._Mysize = 0i64;
  result->_Mypair._Myval2._Bx._Buf[0] = 0;
  return v2;
}

std::string *__fastcall extension::FutureObjectJobManager<OGLFigure,extension::FutureFigureOption>::Stringize(
        std::string *result,
        const extension::FutureFigureOption *opt)
{
  std::string *v4; // rax

  if ( __TSS0__1__Stringize___FutureObjectJobManager_VOGLFigure__UFutureFigureOption_extension___extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureFigureOption_3__Z_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1__Stringize___FutureObjectJobManager_VOGLFigure__UFutureFigureOption_extension___extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureFigureOption_3__Z_4HA);
    if ( __TSS0__1__Stringize___FutureObjectJobManager_VOGLFigure__UFutureFigureOption_extension___extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureFigureOption_3__Z_4HA == -1 )
    {
      *(_WORD *)&`extension::FutureObjectJobManager<OGLFigure,extension::FutureFigureOption>::Stringize'::`2'::default_opt.bBaseFigure = 0;
      `extension::FutureObjectJobManager<OGLFigure,extension::FutureFigureOption>::Stringize'::`2'::default_opt.bNoMotion = 0;
      *(_OWORD *)&`extension::FutureObjectJobManager<OGLFigure,extension::FutureFigureOption>::Stringize'::`2'::default_opt.fileSetting._Mypair._Myval2._Myfirst = 0i64;
      `extension::FutureObjectJobManager<OGLFigure,extension::FutureFigureOption>::Stringize'::`2'::default_opt.fileSetting._Mypair._Myval2._Myend = 0i64;
      atexit(`extension::FutureObjectJobManager<OGLFigure,extension::FutureFigureOption>::Stringize'::`2'::`dynamic atexit destructor for 'default_opt'');
      Init_thread_footer(&__TSS0__1__Stringize___FutureObjectJobManager_VOGLFigure__UFutureFigureOption_extension___extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureFigureOption_3__Z_4HA);
    }
  }
  if ( !opt
    || opt->bBaseFigure == `extension::FutureObjectJobManager<OGLFigure,extension::FutureFigureOption>::Stringize'::`2'::default_opt.bBaseFigure )
  {
    result->_Mypair._Myval2._Myres = 15i64;
    v4 = result;
    result->_Mypair._Myval2._Mysize = 0i64;
    result->_Mypair._Myval2._Bx._Buf[0] = 0;
  }
  else
  {
    extension::FutureFigureOption::stringize((extension::FutureFigureOption *)opt, result);
    return result;
  }
  return v4;
}

std::string *__fastcall extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>::Stringize(
        std::string *result,
        const extension::FutureTextureOption *opt)
{
  unsigned __int8 *Myfirst; // rcx
  std::string *v5; // rax

  if ( __TSS0__1__Stringize___FutureObjectJobManager_VOGLTexture__UFutureTextureOption_extension___extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureTextureOption_3__Z_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1__Stringize___FutureObjectJobManager_VOGLTexture__UFutureTextureOption_extension___extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureTextureOption_3__Z_4HA);
    if ( __TSS0__1__Stringize___FutureObjectJobManager_VOGLTexture__UFutureTextureOption_extension___extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureTextureOption_3__Z_4HA == -1 )
    {
      `extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>::Stringize'::`2'::default_opt.texParam = 1290;
      `extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>::Stringize'::`2'::default_opt.paletteData._Mypair._Myval2._Myend = 0i64;
      *(_OWORD *)&`extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>::Stringize'::`2'::default_opt.paletteData._Mypair._Myval2._Myfirst = 0i64;
      `extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>::Stringize'::`2'::default_opt.keyIndex = -1;
      atexit(`extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>::Stringize'::`2'::`dynamic atexit destructor for 'default_opt'');
      Init_thread_footer(&__TSS0__1__Stringize___FutureObjectJobManager_VOGLTexture__UFutureTextureOption_extension___extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureTextureOption_3__Z_4HA);
    }
  }
  if ( !opt
    || opt->texParam == `extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>::Stringize'::`2'::default_opt.texParam
    && (Myfirst = opt->paletteData._Mypair._Myval2._Myfirst,
        opt->paletteData._Mypair._Myval2._Mylast - Myfirst == `extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>::Stringize'::`2'::default_opt.paletteData._Mypair._Myval2._Mylast
                                                            - `extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>::Stringize'::`2'::default_opt.paletteData._Mypair._Myval2._Myfirst)
    && !memcmp(
          Myfirst,
          `extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>::Stringize'::`2'::default_opt.paletteData._Mypair._Myval2._Myfirst,
          opt->paletteData._Mypair._Myval2._Mylast - Myfirst)
    && opt->keyIndex == `extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>::Stringize'::`2'::default_opt.keyIndex )
  {
    result->_Mypair._Myval2._Myres = 15i64;
    v5 = result;
    result->_Mypair._Myval2._Mysize = 0i64;
    result->_Mypair._Myval2._Bx._Buf[0] = 0;
  }
  else
  {
    extension::FutureTextureOption::stringize((extension::FutureTextureOption *)opt, result);
    return result;
  }
  return v5;
}

std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *__fastcall std::_List_alloc<std::_List_base_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>::_Buynode0(
        std::_List_alloc<std::_List_base_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> > *this,
        std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *_Next,
        std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *_Prev)
{
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *result; // rax

  result = (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)operator new(0x40ui64);
  if ( !_Next )
  {
    _Next = result;
    _Prev = result;
  }
  if ( result )
    result->_Next = _Next;
  if ( result != (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)-8i64 )
    result->_Prev = _Prev;
  return result;
}

void __fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>>>,0>>::_Check_size(
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *this)
{
  signed __int64 Mysize; // rax
  __int64 Maxidx; // rdx
  float v4; // xmm0_4
  float v5; // xmm1_4
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Myhead; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Prev; // rdi
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rbx
  std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >,bool> result; // [rsp+20h] [rbp-18h] BYREF

  Mysize = this->_List._Mypair._Myval2._Mysize;
  Maxidx = this->_Maxidx;
  v4 = (float)(int)Mysize;
  if ( Mysize < 0 )
    v4 = v4 + 1.8446744e19;
  v5 = (float)(int)Maxidx;
  if ( Maxidx < 0 )
    v5 = v5 + 1.8446744e19;
  if ( (float)(v4 / v5) > this->_Traitsobj._Mypair._Myval2._Myval2 )
  {
    if ( (unsigned __int64)Maxidx >= 0x200 )
    {
      if ( (unsigned __int64)Maxidx < 0xFFFFFFFFFFFFFFFi64 )
        Maxidx *= 2i64;
    }
    else
    {
      Maxidx *= 8i64;
    }
    std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>,0>>::_Init(
      (std::_Hash<std::_Umap_traits<extension::SoundHashKey,int,std::_Uhash_compare<extension::SoundHashKey,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey> >,std::allocator<std::pair<extension::SoundHashKey const ,int> >,0> > *)this,
      Maxidx);
    Myhead = this->_List._Mypair._Myval2._Myhead;
    if ( Myhead->_Next != Myhead )
    {
      Prev = Myhead->_Prev;
      do
      {
        Next = this->_List._Mypair._Myval2._Myhead->_Next;
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>,0>>::_Insert<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>(
          this,
          &result,
          &Next->_Myval,
          (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >)Next);
      }
      while ( Next != Prev );
    }
  }
}

void __fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>,0>>::_Destroy_if_not_nil(
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *this,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > _Plist)
{
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // rcx

  _Plist._Ptr->_Prev->_Next = _Plist._Ptr->_Next;
  _Plist._Ptr->_Next->_Prev = _Plist._Ptr->_Prev;
  --this->_List._Mypair._Myval2._Mysize;
  m_ptr = _Plist._Ptr->_Myval.second.m_proxy.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    operator delete(m_ptr, 0x18ui64);
  std::string::~string((std::string *)&_Plist._Ptr->_Myval.first);
  operator delete(_Plist._Ptr);
}

void __fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>,0>>::_Init(
        std::_Hash<std::_Umap_traits<extension::SoundHashKey,int,std::_Uhash_compare<extension::SoundHashKey,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey> >,std::allocator<std::pair<extension::SoundHashKey const ,int> >,0> > *this,
        unsigned __int64 _Buckets)
{
  unsigned __int64 v2; // rdi
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > _Val; // [rsp+50h] [rbp+8h] BYREF
  std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > result; // [rsp+58h] [rbp+10h] BYREF

  v2 = 2 * _Buckets;
  if ( this->_Vec._Mypair._Myval2._Myend - this->_Vec._Mypair._Myval2._Myfirst < 2 * _Buckets )
  {
    if ( v2 > 0x1FFFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>::_Reallocate(
      &this->_Vec,
      v2);
  }
  _Val._Ptr = this->_List._Mypair._Myval2._Myhead;
  this->_Vec._Mypair._Myval2._Mylast = this->_Vec._Mypair._Myval2._Myfirst;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>>>>::_Insert_n(
    &this->_Vec,
    &result,
    (std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > >)this->_Vec._Mypair._Myval2._Myfirst,
    v2,
    &_Val);
  this->_Mask = _Buckets - 1;
  this->_Maxidx = _Buckets;
}

std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>>>>::_Insert_n(
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *this,
        std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *result,
        std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > _Where,
        unsigned __int64 _Count,
        const std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Val)
{
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *Myfirst; // r8
  signed __int64 v10; // r12
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *Mylast; // r14
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdx
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v15; // rcx
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v16; // rbx
  signed __int64 v17; // r14
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v18; // r9
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v19; // r9
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v20; // r9
  std::allocator<AgLogger *> *v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v24; // r9
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r8
  std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> *v28; // rax
  std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> *Ptr; // rbx
  unsigned __int64 v30; // r15
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *i; // rdx
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > _Pval; // [rsp+80h] [rbp+8h] BYREF
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Last; // [rsp+90h] [rbp+18h]
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v35; // [rsp+98h] [rbp+20h]

  _Last = _Where._Ptr;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v10 = _Where._Ptr - this->_Mypair._Myval2._Myfirst;
  if ( _Count )
  {
    Mylast = this->_Mypair._Myval2._Mylast;
    if ( this->_Mypair._Myval2._Myend - Mylast >= _Count )
    {
      if ( Mylast - _Where._Ptr >= _Count )
      {
        Ptr = _Val->_Ptr;
        v30 = _Count;
        this->_Mypair._Myval2._Mylast = std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
                                          &Mylast[-_Count],
                                          Mylast,
                                          Mylast,
                                          (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)_Count);
        memmove(&_Last[_Count], _Last, (size_t)Mylast - 8 * _Count - (_QWORD)_Last);
        for ( i = _Last; i != &_Last[v30]; ++i )
          i->_Ptr = Ptr;
      }
      else
      {
        _Pval._Ptr = _Val->_Ptr;
        v23 = 8 * _Count;
        std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
          _Where._Ptr,
          Mylast,
          &_Where._Ptr[_Count],
          (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)_Count);
        std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>> *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>(
          this->_Mypair._Myval2._Mylast,
          _Count - (this->_Mypair._Myval2._Mylast - _Last),
          &_Pval,
          v24);
        this->_Mypair._Myval2._Mylast = (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)((char *)this->_Mypair._Myval2._Mylast + v23);
        v25 = _Last;
        v26 = 0i64;
        v27 = (unsigned __int64)((char *)&this->_Mypair._Myval2._Mylast[v23 / 0xFFFFFFFFFFFFFFF8ui64] - (char *)_Last + 7) >> 3;
        if ( _Last > &this->_Mypair._Myval2._Mylast[v23 / 0xFFFFFFFFFFFFFFF8ui64] )
          v27 = 0i64;
        if ( v27 )
        {
          v28 = _Pval._Ptr;
          do
          {
            v25->_Ptr = v28;
            ++v25;
            ++v26;
          }
          while ( v26 != v27 );
        }
      }
    }
    else
    {
      v12 = Mylast - Myfirst;
      if ( 0x1FFFFFFFFFFFFFFFi64 - v12 < _Count )
        std::_Xlength_error("vector<T> too long");
      v13 = v12 + _Count;
      v14 = this->_Mypair._Myval2._Myend - Myfirst;
      v15 = 0i64;
      if ( 0x1FFFFFFFFFFFFFFFi64 - (v14 >> 1) >= v14 )
        v15 = (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)(v14 + (v14 >> 1));
      if ( (unsigned __int64)v15 >= v13 )
        v13 = (unsigned __int64)v15;
      _Pval._Ptr = (std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> *)v13;
      v16 = std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>>>>>>>>::allocate(
              v15,
              v13);
      v35 = v16;
      v17 = _Last - this->_Mypair._Myval2._Myfirst;
      std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>> *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>(
        &v16[v17],
        _Count,
        _Val,
        v18);
      std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
        this->_Mypair._Myval2._Myfirst,
        _Last,
        v16,
        v19);
      std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
        _Last,
        this->_Mypair._Myval2._Mylast,
        &v16[v17 + _Count],
        v20);
      v22 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst + _Count;
      if ( this->_Mypair._Myval2._Myfirst )
        std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
          v21,
          (AgLogger **)this->_Mypair._Myval2._Myfirst,
          this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
      this->_Mypair._Myval2._Myend = &v16[v13];
      this->_Mypair._Myval2._Mylast = &v16[v22];
      this->_Mypair._Myval2._Myfirst = v16;
    }
  }
  result->_Ptr = &this->_Mypair._Myval2._Myfirst[v10];
  return result;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall std::vector<extension::exsound_detail::PreloadedAudioSet *>::_Reallocate(
        std::vector<extension::exsound_detail::PreloadedAudioSet *> *this,
        unsigned __int64 _Count)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rcx
  void *v6; // rax
  std::allocator<AgLogger *> *v7; // rcx
  signed __int64 v8; // r14

  if ( _Count )
  {
    if ( _Count > 0x1FFFFFFFFFFFFFFFi64 )
      std::_Xbad_alloc();
    v5 = 8 * _Count;
    if ( 8 * _Count < 0x1000 )
    {
      v4 = operator new(v5);
    }
    else
    {
      if ( v5 + 39 <= v5 )
        std::_Xbad_alloc();
      v6 = operator new(v5 + 39);
      v4 = (_QWORD *)(((unsigned __int64)v6 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
      *(v4 - 1) = v6;
    }
  }
  else
  {
    v4 = 0i64;
  }
  memmove(
    v4,
    this->_Mypair._Myval2._Myfirst,
    (char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst);
  v8 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v7,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = (extension::exsound_detail::PreloadedAudioSet **)&v4[_Count];
  this->_Mypair._Myval2._Mylast = (extension::exsound_detail::PreloadedAudioSet **)&v4[v8];
  this->_Mypair._Myval2._Myfirst = (extension::exsound_detail::PreloadedAudioSet **)v4;
}

void __fastcall std::vector<EffectDataList>::_Reallocate(std::vector<EffectDataList> *this, unsigned __int64 _Count)
{
  EffectDataList *v3; // rsi
  std::_Wrap_alloc<std::allocator<EffectDataList> > *v4; // r9
  std::_Wrap_alloc<std::allocator<EffectDataList> > *v5; // r8
  std::integral_constant<bool,0> v6; // r9
  signed __int64 v7; // rbx
  std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *v8; // rcx

  v3 = (EffectDataList *)operator new(0xC80ui64);
  std::_Uninitialized_move_al_unchecked1<EffectDataList *,EffectDataList *,std::allocator<EffectDataList>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v3,
    v4);
  v7 = (char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Destroy_range<std::allocator<EffectDataList>,EffectDataList *>(
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Mylast,
      v5,
      v6);
    std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
      v8,
      (AgDirectory::DirectoryEntry *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = v3 + 100;
  this->_Mypair._Myval2._Mylast = (EffectDataList *)((char *)v3 + (v7 & 0xFFFFFFFFFFFFFFE0ui64));
  this->_Mypair._Myval2._Myfirst = v3;
}

void __fastcall std::vector<EffectListNode>::_Reallocate(
        std::vector<EffectListNode> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<BattleSystem::SequenceCandidateInfo> > *a4)
{
  BattleSystem::SequenceCandidateInfo *v6; // rbx
  unsigned __int64 v7; // rcx
  const CpuSequenceData::SequenceData *v8; // rax
  std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *v9; // rcx
  signed __int64 v10; // rsi

  if ( _Count )
  {
    if ( _Count > 0xFFFFFFFFFFFFFFFi64 )
      std::_Xbad_alloc();
    v7 = 16 * _Count;
    if ( 16 * _Count < 0x1000 )
    {
      v6 = (BattleSystem::SequenceCandidateInfo *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = (const CpuSequenceData::SequenceData *)operator new(v7 + 39);
      v6 = (BattleSystem::SequenceCandidateInfo *)(((unsigned __int64)v8->header.iReserve + 3) & 0xFFFFFFFFFFFFFFE0ui64);
      v6[-1].pData = v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<BattleSystem::SequenceCandidateInfo *,BattleSystem::SequenceCandidateInfo *,std::allocator<BattleSystem::SequenceCandidateInfo>>(
    (const BattleSystem::SequenceCandidateInfo *)this->_Mypair._Myval2._Myfirst,
    (const BattleSystem::SequenceCandidateInfo *)this->_Mypair._Myval2._Mylast,
    v6,
    a4);
  v10 = (char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      v9,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = (EffectListNode *)&v6[_Count];
  this->_Mypair._Myval2._Mylast = (EffectListNode *)((char *)v6 + (v10 & 0xFFFFFFFFFFFFFFF0ui64));
  this->_Mypair._Myval2._Myfirst = (EffectListNode *)v6;
}

void __fastcall std::vector<EffectListNodeData>::_Reallocate(
        std::vector<EffectListNodeData> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<EffectListNodeData> > *a4)
{
  EffectListNodeData *v6; // rbx
  unsigned __int64 v7; // rcx
  EffectData *v8; // rax
  EffectListNodeData *Mylast; // r9
  signed __int64 v10; // r14

  if ( _Count )
  {
    if ( _Count > 0x555555555555555i64 )
      std::_Xbad_alloc();
    v7 = 48 * _Count;
    if ( 48 * _Count < 0x1000 )
    {
      v6 = (EffectListNodeData *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = (EffectData *)operator new(v7 + 39);
      v6 = (EffectListNodeData *)(((unsigned __int64)&v8->AllDialogChartData._Mypair._Myval2._Myfirst + 7) & 0xFFFFFFFFFFFFFFE0ui64);
      v6[-1].effectData = v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<EffectListNodeData *,EffectListNodeData *,std::allocator<EffectListNodeData>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v6,
    a4);
  Mylast = this->_Mypair._Myval2._Mylast;
  v10 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Destroy_range1<std::allocator<EffectListNodeData>,EffectListNodeData *>(
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Mylast,
      (std::_Wrap_alloc<std::allocator<EffectListNodeData> > *)((unsigned __int64)((unsigned __int128)(((char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 63),
      (std::integral_constant<bool,0>)Mylast);
    std::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo>>::deallocate(
      (std::allocator<AgControllerPairingChangedEvent> *)((char *)this->_Mypair._Myval2._Myend
                                                        - (char *)this->_Mypair._Myval2._Myfirst),
      (AgControllerPairingChangedEvent *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v6[_Count];
  this->_Mypair._Myval2._Mylast = &v6[v10];
  this->_Mypair._Myval2._Myfirst = v6;
}

void __fastcall std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::_Reallocate(
        std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *a4)
{
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *v6; // rdi
  unsigned __int64 v7; // rcx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *v8; // rax
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *m_ptr; // rcx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *Mylast; // r12
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *Myfirst; // rbx
  signed __int64 v12; // r14

  if ( _Count )
  {
    if ( _Count > 0xFFFFFFFFFFFFFFFi64 )
      std::_Xbad_alloc();
    v7 = 16 * _Count;
    if ( 16 * _Count < 0x1000 )
    {
      v6 = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *)operator new(v7 + 39);
      v6 = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)(((unsigned __int64)&v8[1].m_refCount.m_ptr + 7) & 0xFFFFFFFFFFFFFFE0ui64);
      v6[-1].m_body.m_ptr = v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *,extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *,std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v6,
    a4);
  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v12 = (char *)Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( ; Myfirst != Mylast; ++Myfirst )
    {
      m_ptr = Myfirst->m_body.m_ptr;
      if ( m_ptr
        && _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        ((void (__fastcall *)(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
          m_ptr,
          1i64);
      }
    }
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)m_ptr,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v6[_Count];
  this->_Mypair._Myval2._Mylast = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)((char *)v6 + (v12 & 0xFFFFFFFFFFFFFFF0ui64));
  this->_Mypair._Myval2._Myfirst = v6;
}

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>::_Reallocate(
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *this,
        unsigned __int64 _Count)
{
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v4; // rdi
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v5; // r9
  std::allocator<AgLogger *> *v6; // rcx
  signed __int64 v7; // rsi

  v4 = std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>>>>>>>>::allocate(
         (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)this,
         _Count);
  std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    v5);
  v7 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v6,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = &v4[v7];
  this->_Mypair._Myval2._Myfirst = v4;
}

void __fastcall std::vector<BattleStageEvent *>::_Reserve(
        std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *this,
        unsigned __int64 _Count)
{
  void (__fastcall **Myend)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // r9
  void (__fastcall **Mylast)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // rdx
  void (__fastcall **Myfirst)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // rcx
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
    if ( v6 == 0x1FFFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + 1;
    v8 = Myend - Myfirst;
    v9 = 0i64;
    if ( 0x1FFFFFFFFFFFFFFFi64 - (v8 >> 1) >= v8 )
      v9 = v8 + (v8 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<extension::exsound_detail::PreloadedAudioSet *>::_Reallocate(
      (std::vector<extension::exsound_detail::PreloadedAudioSet *> *)this,
      v7);
  }
}

void __fastcall std::vector<EffectListNode>::_Reserve(std::vector<EffectListNode> *this, unsigned __int64 _Count)
{
  EffectListNode *Myend; // r9
  EffectListNode *Mylast; // rdx
  EffectListNode *Myfirst; // rcx
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
    std::vector<EffectListNode>::_Reallocate(
      this,
      v7,
      (__int64)this,
      (std::_Wrap_alloc<std::allocator<BattleSystem::SequenceCandidateInfo> > *)v8);
  }
}

void __fastcall std::vector<EffectListNodeData>::_Reserve(
        std::vector<EffectListNodeData> *this,
        unsigned __int64 _Count)
{
  EffectListNodeData *Myend; // rcx
  EffectListNodeData *Mylast; // r8
  signed __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( !(Myend - Mylast) )
  {
    v5 = Mylast - this->_Mypair._Myval2._Myfirst;
    if ( v5 == 0x555555555555555i64 )
      std::_Xlength_error("vector<T> too long");
    v6 = v5 + 1;
    v7 = (unsigned __int128)(((char *)Myend - (char *)this->_Mypair._Myval2._Myfirst) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
    v8 = 0i64;
    v9 = ((unsigned __int64)v7 >> 63) + (v7 >> 3);
    if ( 0x555555555555555i64 - (v9 >> 1) >= v9 )
      v8 = v9 + (v9 >> 1);
    if ( v8 >= v6 )
      v6 = v8;
    std::vector<EffectListNodeData>::_Reallocate(
      this,
      v6,
      v6,
      (std::_Wrap_alloc<std::allocator<EffectListNodeData> > *)this);
  }
}

void __fastcall std::vector<extension::BasicFutureObject<OGLCurve,void>>::_Reserve(
        std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *this,
        unsigned __int64 _Count)
{
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *Myend; // r9
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *Mylast; // rdx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *Myfirst; // rcx
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
    std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::_Reallocate(
      this,
      v7,
      (__int64)this,
      (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *)v8);
  }
}

void __fastcall std::vector<AgDisplayChangedEvent>::_Tidy(std::vector<AgSuspendingEvent> *this)
{
  AgSuspendingEvent *Myfirst; // rcx
  AgSuspendingEvent *v3; // rax
  unsigned __int64 v4; // rcx

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    if ( (AgSuspendingEvent *)(this->_Mypair._Myval2._Myend - Myfirst) >= (AgSuspendingEvent *)0x1000 )
    {
      if ( ((unsigned __int8)Myfirst & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v3 = *(AgSuspendingEvent **)&Myfirst[-8];
      if ( v3 >= Myfirst )
        invalid_parameter_noinfo_noreturn();
      v4 = Myfirst - v3;
      if ( v4 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v4 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      Myfirst = v3;
    }
    operator delete(Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy(
        std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *this)
{
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *Myfirst; // rbx
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *v2; // rdi
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *i; // rsi

  Myfirst = this->_Mypair._Myval2._Myfirst;
  v2 = this;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
    {
      this = (std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)Myfirst->m_body.m_ptr;
      if ( this )
      {
        if ( _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&this->_Mypair._Myval2._Mylast[1],
               0xFFFFFFFFFFFFFFFFui64) == 1 )
          (*(void (__fastcall **)(std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *, __int64))this->_Mypair._Myval2._Myfirst)(
            this,
            1i64);
      }
    }
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)v2->_Mypair._Myval2._Myfirst,
      v2->_Mypair._Myval2._Myend - v2->_Mypair._Myval2._Myfirst);
    v2->_Mypair._Myval2._Myfirst = 0i64;
    v2->_Mypair._Myval2._Mylast = 0i64;
    v2->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall EffectDataListManager::addCharaIDBack(
        EffectDataListManager *this,
        std::string *str,
        int type,
        int charanum)
{
  char v5; // al
  const char *v6; // rdx

  if ( type )
  {
    if ( type == 1 )
    {
      switch ( charanum )
      {
        case 0:
          std::string::append(str, "000", 3ui64);
          break;
        case 1:
          std::string::append(str, "001", 3ui64);
          break;
        case 2:
          std::string::append(str, "002", 3ui64);
          break;
        case 3:
          std::string::append(str, "003", 3ui64);
          break;
        case 4:
          std::string::append(str, "004", 3ui64);
          break;
        case 5:
          std::string::append(str, "005", 3ui64);
          break;
        case 6:
          std::string::append(str, "006", 3ui64);
          break;
        case 7:
          std::string::append(str, "007", 3ui64);
          break;
        case 8:
          std::string::append(str, "008", 3ui64);
          break;
        case 9:
          std::string::append(str, "009", 3ui64);
          break;
        case 10:
          std::string::append(str, "010", 3ui64);
          break;
        case 11:
          std::string::append(str, "011", 3ui64);
          break;
        case 12:
          std::string::append(str, "012", 3ui64);
          break;
        case 13:
          std::string::append(str, "013", 3ui64);
          break;
        case 14:
          std::string::append(str, "014", 3ui64);
          break;
        case 15:
          std::string::append(str, "015", 3ui64);
          break;
        case 16:
          std::string::append(str, "016", 3ui64);
          break;
        case 17:
          std::string::append(str, "017", 3ui64);
          break;
        case 18:
          std::string::append(str, "018", 3ui64);
          break;
        case 19:
          std::string::append(str, "019", 3ui64);
          break;
        case 20:
          std::string::append(str, "020", 3ui64);
          break;
        case 21:
          std::string::append(str, "021", 3ui64);
          break;
        case 22:
          std::string::append(str, "022", 3ui64);
          break;
        case 23:
          std::string::append(str, "023", 3ui64);
          break;
        case 24:
          std::string::append(str, "024", 3ui64);
          break;
        case 25:
          std::string::append(str, "025", 3ui64);
          break;
        case 26:
          std::string::append(str, "026", 3ui64);
          break;
        case 27:
          std::string::append(str, "027", 3ui64);
          break;
        case 28:
          std::string::append(str, "028", 3ui64);
          break;
        case 29:
          std::string::append(str, "029", 3ui64);
          break;
        case 30:
          std::string::append(str, "030", 3ui64);
          break;
        case 31:
          std::string::append(str, "031", 3ui64);
          break;
        case 32:
          std::string::append(str, "032", 3ui64);
          break;
        case 33:
          std::string::append(str, "033", 3ui64);
          break;
        case 34:
          std::string::append(str, "034", 3ui64);
          break;
        case 35:
          std::string::append(str, "035", 3ui64);
          break;
        case 36:
          std::string::append(str, "036", 3ui64);
          break;
        case 37:
          std::string::append(str, "037", 3ui64);
          break;
        case 38:
          std::string::append(str, "038", 3ui64);
          break;
        case 39:
          std::string::append(str, "039", 3ui64);
          break;
        case 40:
          std::string::append(str, "040", 3ui64);
          break;
        case 41:
          std::string::append(str, "041", 3ui64);
          break;
        case 42:
          std::string::append(str, "042", 3ui64);
          break;
        case 43:
          std::string::append(str, "043", 3ui64);
          break;
        case 44:
          std::string::append(str, "044", 3ui64);
          break;
        case 45:
          std::string::append(str, "045", 3ui64);
          break;
        case 46:
          std::string::append(str, "046", 3ui64);
          break;
        case 47:
          std::string::append(str, "047", 3ui64);
          break;
        case 48:
          std::string::append(str, "048", 3ui64);
          break;
        case 49:
          std::string::append(str, "049", 3ui64);
          break;
        case 50:
          std::string::append(str, "050", 3ui64);
          break;
        case 51:
          std::string::append(str, "051", 3ui64);
          break;
        case 52:
          std::string::append(str, "052", 3ui64);
          break;
        case 53:
          std::string::append(str, "053", 3ui64);
          break;
        case 54:
          std::string::append(str, "054", 3ui64);
          break;
        case 55:
          std::string::append(str, "055", 3ui64);
          break;
        case 56:
          std::string::append(str, "056", 3ui64);
          break;
        case 57:
          std::string::append(str, "057", 3ui64);
          break;
        case 58:
          std::string::append(str, "058", 3ui64);
          break;
        case 59:
          std::string::append(str, "059", 3ui64);
          break;
        case 60:
          std::string::append(str, "060", 3ui64);
          break;
        default:
          return;
      }
    }
  }
  else
  {
    switch ( charanum )
    {
      case 0:
        v5 = aKyo[0];
        v6 = "KYO";
        goto LABEL_127;
      case 1:
        v5 = aBen[0];
        v6 = "BEN";
        goto LABEL_127;
      case 2:
        v5 = aDmn[0];
        v6 = "DMN";
        goto LABEL_127;
      case 3:
        v5 = aRyo[0];
        v6 = "RYO";
        goto LABEL_127;
      case 4:
        v5 = aRbt[0];
        v6 = "RBT";
        goto LABEL_127;
      case 5:
        v5 = aYri[0];
        v6 = "YRI";
        goto LABEL_127;
      case 6:
        v5 = aTry[0];
        v6 = "TRY";
        goto LABEL_127;
      case 7:
        v5 = aAdy[0];
        v6 = "ADY";
        goto LABEL_127;
      case 8:
        v5 = aJoe[0];
        v6 = "JOE";
        goto LABEL_127;
      case 9:
        v5 = aLeo[0];
        v6 = "LEO";
        goto LABEL_127;
      case 10:
        v5 = aRlf[0];
        v6 = "RLF";
        goto LABEL_127;
      case 11:
        v5 = aClk[0];
        v6 = "CLK";
        goto LABEL_127;
      case 12:
        v5 = aIor[0];
        v6 = "IOR";
        goto LABEL_127;
      case 13:
        v5 = aMtr[0];
        v6 = "MTR";
        goto LABEL_127;
      case 14:
        v5 = aVic[0];
        v6 = "VIC";
        goto LABEL_127;
      case 15:
        v5 = aKds[0];
        v6 = "KDS";
        goto LABEL_127;
      case 16:
        v5 = aKla[0];
        v6 = "KLA";
        goto LABEL_127;
      case 17:
        v5 = aMxi[0];
        v6 = "MXI";
        goto LABEL_127;
      case 18:
        v5 = aGes[0];
        v6 = "GES";
        goto LABEL_127;
      case 19:
        v5 = aBly[0];
        v6 = "BLY";
        goto LABEL_127;
      case 20:
        v5 = aSsl[0];
        v6 = "SSL";
        goto LABEL_127;
      case 21:
        v5 = aKng[0];
        v6 = "KNG";
        goto LABEL_127;
      case 22:
        v5 = aMai[0];
        v6 = "MAI";
        goto LABEL_127;
      case 23:
        v5 = aAlc[0];
        v6 = "ALC";
        goto LABEL_127;
      case 24:
        v5 = aKim[0];
        v6 = "KIM";
        goto LABEL_127;
      case 25:
        v5 = aGan[0];
        v6 = "GAN";
        goto LABEL_127;
      case 26:
        v5 = aLuo[0];
        v6 = "LUO";
        goto LABEL_127;
      case 27:
        v5 = aAtn[0];
        v6 = "ATN";
        goto LABEL_127;
      case 28:
        v5 = aKns[0];
        v6 = "KNS";
        goto LABEL_127;
      case 29:
        v5 = aChn[0];
        v6 = "CHN";
        goto LABEL_127;
      case 30:
        v5 = aXnd[0];
        v6 = "XND";
        goto LABEL_127;
      case 31:
        v5 = aCng[0];
        v6 = "CNG";
        goto LABEL_127;
      case 32:
        v5 = aCho[0];
        v6 = "CHO";
        goto LABEL_127;
      case 33:
        v5 = aNkr[0];
        v6 = "NKR";
        goto LABEL_127;
      case 34:
        v5 = aMui[0];
        v6 = "MUI";
        goto LABEL_127;
      case 35:
        v5 = aLvh[0];
        v6 = "LVH";
        goto LABEL_127;
      case 36:
        v5 = aRmn[0];
        v6 = "RMN";
        goto LABEL_127;
      case 37:
        v5 = aAgl[0];
        v6 = "AGL";
        goto LABEL_127;
      case 38:
        v5 = aKod[0];
        v6 = "KOD";
        goto LABEL_127;
      case 39:
        v5 = aShu[0];
        v6 = "SHU";
        goto LABEL_127;
      case 40:
        v5 = aTun[0];
        v6 = "TUN";
        goto LABEL_127;
      case 41:
        v5 = aMtk[0];
        v6 = "MTK";
        goto LABEL_127;
      case 42:
        v5 = aZrn[0];
        v6 = "ZRN";
        goto LABEL_127;
      case 43:
        v5 = aBdr[0];
        v6 = "BDR";
        goto LABEL_127;
      case 44:
        v5 = aNel[0];
        v6 = "NEL";
        goto LABEL_127;
      case 45:
        v5 = aSlv[0];
        v6 = "SLV";
        goto LABEL_127;
      case 46:
        v5 = aKkr[0];
        v6 = "KKR";
        goto LABEL_127;
      case 47:
        v5 = aMia[0];
        v6 = "MIA";
        goto LABEL_127;
      case 48:
        v5 = aAnt[0];
        v6 = "ANT";
        goto LABEL_127;
      case 49:
        v5 = aVrs[0];
        v6 = "VRS";
        goto LABEL_127;
      case 50:
        v5 = aRoc[0];
        v6 = "ROC";
        goto LABEL_127;
      case 51:
        v5 = aMry[0];
        v6 = "MRY";
        goto LABEL_127;
      case 52:
        v5 = aYmz[0];
        v6 = "YMZ";
        goto LABEL_127;
      case 53:
        v5 = aVns[0];
        v6 = "VNS";
        goto LABEL_127;
      case 54:
        v5 = aOsw[0];
        v6 = "OSW";
        goto LABEL_127;
      case 55:
        std::string::append(str, "YMD", 3ui64);
        return;
      case 56:
        v5 = aHdr[0];
        v6 = "HDR";
        goto LABEL_127;
      case 57:
        v5 = aWhp[0];
        v6 = "WHP";
        goto LABEL_127;
      case 58:
        std::string::append(str, "SNG", 3ui64);
        return;
      case 59:
        std::string::append(str, "HNK", 3ui64);
        return;
      case 60:
        v5 = aNjd[0];
        v6 = "NJD";
LABEL_127:
        std::string::append(str, v6, v5 != 0 ? 3 : 0);
        break;
      default:
        return;
    }
  }
}

std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *__fastcall std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>>>>>>>>::allocate(
        std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *this,
        unsigned __int64 _Count)
{
  unsigned __int64 v3; // rcx
  void *v4; // rax

  if ( !_Count )
    return 0i64;
  if ( _Count > 0x1FFFFFFFFFFFFFFFi64 )
    std::_Xbad_alloc();
  v3 = 8 * _Count;
  if ( 8 * _Count < 0x1000 )
    return (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)operator new(v3);
  if ( v3 + 39 <= v3 )
    std::_Xbad_alloc();
  v4 = operator new(v3 + 39);
  *(_QWORD *)((((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64) - 8) = v4;
  return (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
}

void __fastcall EffectDataListManager::calcAllBindUVPosition(EffectDataListManager *this)
{
  int v1; // edi
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  EffectListNodeData *Myfirst; // r8

  v1 = 0;
  if ( this->m_EffectDataList._Mypair._Myval2._Mylast - this->m_EffectDataList._Mypair._Myval2._Myfirst )
  {
    v3 = 0i64;
    v4 = 0i64;
    do
    {
      Myfirst = this->m_EffectDataList._Mypair._Myval2._Myfirst;
      if ( this->m_EffectDataList._Mypair._Myval2._Mylast - Myfirst <= v4 )
        std::_Xout_of_range("invalid vector<T> subscript");
      EffectDataListManager::recursiveCalcBindUVPosition(this, Myfirst[v3].effectData);
      ++v1;
      ++v4;
      ++v3;
    }
    while ( v1 < (unsigned __int64)(this->m_EffectDataList._Mypair._Myval2._Mylast
                                  - this->m_EffectDataList._Mypair._Myval2._Myfirst) );
  }
}

bool __fastcall EffectDataListManager::checkName(
        EffectDataListManager *this,
        std::string *name,
        EffectData *pEffectData)
{
  BattleSystem::BattleController *v5; // rdi
  BattleSystem::BattleController *v6; // rax
  unsigned __int64 *p_Mysize; // r15
  std::string *Ptr; // rcx
  unsigned __int64 v9; // rsi
  size_t v10; // r8
  __int64 iMemberReferIndex; // rax
  int BaseCharaID; // esi
  EffectDataListManager *v13; // rcx
  EffectDataListManager *v14; // rcx
  EffectDataListManager *v15; // rcx
  DialogData *Myfirst; // r8
  std::string *v17; // rcx
  std::string *v18; // rcx
  unsigned __int64 v19; // r14
  size_t v20; // rsi
  size_t v21; // r8
  __int64 v22; // rax
  int v23; // er14
  EffectDataListManager *v24; // rcx
  EffectDataListManager *v25; // rcx
  EffectDataListManager *v26; // rcx
  DialogData *v27; // r8
  std::string *v28; // rcx
  std::string *v29; // rcx
  unsigned __int64 v30; // r14
  size_t v31; // r8
  __int64 v32; // rax
  int v33; // er14
  EffectDataListManager *v34; // rcx
  EffectDataListManager *v35; // rcx
  EffectDataListManager *v36; // rcx
  DialogData *v37; // r8
  std::string *v38; // rcx
  unsigned __int64 v39; // r14
  __int64 v40; // rax
  int v41; // ebx
  EffectDataListManager *v42; // rcx
  EffectDataListManager *v43; // rcx
  EffectDataListManager *v44; // rcx
  DialogData *v45; // r8
  std::string *v46; // rcx
  char *v47; // rcx
  char *v48; // rax
  BattleSystem::BattleController *v50; // [rsp+28h] [rbp-38h]
  std::string str; // [rsp+30h] [rbp-30h] BYREF

  str._Mypair._Myval2._Myres = 15i64;
  str._Mypair._Myval2._Mysize = 0i64;
  str._Mypair._Myval2._Bx._Buf[0] = 0;
  v5 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v50 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v50);
    v5 = v6;
    BattleSystem::BattleController::instance = v6;
  }
  p_Mysize = &name->_Mypair._Myval2._Mysize;
  if ( name->_Mypair._Myval2._Myres < 0x10 )
    Ptr = name;
  else
    Ptr = (std::string *)name->_Mypair._Myval2._Bx._Ptr;
  v9 = *p_Mysize;
  v10 = 6i64;
  if ( *p_Mysize < 6 )
    v10 = *p_Mysize;
  if ( (!v10 || !memcmp(Ptr, "1P_pic", v10)) && v9 == 6 )
  {
    iMemberReferIndex = v5->playerInfo[0].iMemberReferIndex;
    if ( v5->playerInfo[0].iMemberCount > (int)iMemberReferIndex )
      BaseCharaID = BattleSystem::BattlePlayerInfo::GetBaseCharaID(v5->playerInfo[0].charaNo[iMemberReferIndex]);
    else
      BaseCharaID = -1;
    std::string::assign(&str, &pnewText, 0i64);
    std::string::append(&str, "Chara/", 6ui64);
    CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), BaseCharaID);
    EffectDataListManager::addCharaIDBack(v13, &str, 0, BaseCharaID);
    std::string::append(&str, "/Effect/ESK_Screen_Pic_", 0x17ui64);
    EffectDataListManager::addCharaIDBack(v14, &str, 1, BaseCharaID);
    EffectDataListManager::addCharaIDBack(v15, &str, 0, BaseCharaID);
    CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), BaseCharaID);
    std::string::append(&str, ".obm", 4ui64);
    Myfirst = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast - Myfirst) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v17 = Myfirst[3].allTextData._Mypair._Myval2._Myfirst;
    if ( !(Myfirst[3].allTextData._Mypair._Myval2._Mylast - v17) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( v17 != &str )
      std::string::assign(v17, &str, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  }
  if ( name->_Mypair._Myval2._Myres < 0x10 )
    v18 = name;
  else
    v18 = (std::string *)name->_Mypair._Myval2._Bx._Ptr;
  v19 = *p_Mysize;
  v20 = 7i64;
  v21 = 7i64;
  if ( *p_Mysize < 7 )
    v21 = *p_Mysize;
  if ( (!v21 || !memcmp(v18, "1P_name", v21)) && v19 == 7 )
  {
    v22 = v5->playerInfo[0].iMemberReferIndex;
    if ( v5->playerInfo[0].iMemberCount > (int)v22 )
      v23 = BattleSystem::BattlePlayerInfo::GetBaseCharaID(v5->playerInfo[0].charaNo[v22]);
    else
      v23 = -1;
    std::string::assign(&str, &pnewText, 0i64);
    std::string::append(&str, "Chara/", 6ui64);
    CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), v23);
    EffectDataListManager::addCharaIDBack(v24, &str, 0, v23);
    std::string::append(&str, "/Effect/ESK_Screen_Name_", 0x18ui64);
    EffectDataListManager::addCharaIDBack(v25, &str, 1, v23);
    EffectDataListManager::addCharaIDBack(v26, &str, 0, v23);
    std::string::append(&str, ".obm", 4ui64);
    v27 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast - v27) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v28 = v27[3].allTextData._Mypair._Myval2._Myfirst;
    if ( !(v27[3].allTextData._Mypair._Myval2._Mylast - v28) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( v28 != &str )
      std::string::assign(v28, &str, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  }
  if ( name->_Mypair._Myval2._Myres < 0x10 )
    v29 = name;
  else
    v29 = (std::string *)name->_Mypair._Myval2._Bx._Ptr;
  v30 = *p_Mysize;
  v31 = 6i64;
  if ( *p_Mysize < 6 )
    v31 = *p_Mysize;
  if ( (!v31 || !memcmp(v29, "2P_pic", v31)) && v30 == 6 )
  {
    v32 = v5->playerInfo[1].iMemberReferIndex;
    if ( v5->playerInfo[1].iMemberCount > (int)v32 )
      v33 = BattleSystem::BattlePlayerInfo::GetBaseCharaID(v5->playerInfo[1].charaNo[v32]);
    else
      v33 = -1;
    std::string::assign(&str, &pnewText, 0i64);
    std::string::append(&str, "Chara/", 6ui64);
    CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), v33);
    EffectDataListManager::addCharaIDBack(v34, &str, 0, v33);
    std::string::append(&str, "/Effect/ESK_Screen_Pic_", 0x17ui64);
    EffectDataListManager::addCharaIDBack(v35, &str, 1, v33);
    EffectDataListManager::addCharaIDBack(v36, &str, 0, v33);
    CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), v33);
    std::string::append(&str, ".obm", 4ui64);
    v37 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast - v37) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v38 = v37[3].allTextData._Mypair._Myval2._Myfirst;
    if ( !(v37[3].allTextData._Mypair._Myval2._Mylast - v38) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( v38 != &str )
      std::string::assign(v38, &str, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  }
  if ( name->_Mypair._Myval2._Myres >= 0x10 )
    name = (std::string *)name->_Mypair._Myval2._Bx._Ptr;
  v39 = *p_Mysize;
  if ( *p_Mysize < 7 )
    v20 = *p_Mysize;
  if ( (!v20 || !memcmp(name, "2P_name", v20)) && v39 == 7 )
  {
    v40 = v5->playerInfo[1].iMemberReferIndex;
    if ( v5->playerInfo[1].iMemberCount > (int)v40 )
      v41 = BattleSystem::BattlePlayerInfo::GetBaseCharaID(v5->playerInfo[1].charaNo[v40]);
    else
      v41 = -1;
    std::string::assign(&str, &pnewText, 0i64);
    std::string::append(&str, "Chara/", 6ui64);
    CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), v41);
    EffectDataListManager::addCharaIDBack(v42, &str, 0, v41);
    std::string::append(&str, "/Effect/ESK_Screen_Name_", 0x18ui64);
    EffectDataListManager::addCharaIDBack(v43, &str, 1, v41);
    EffectDataListManager::addCharaIDBack(v44, &str, 0, v41);
    std::string::append(&str, ".obm", 4ui64);
    v45 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast - v45) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v46 = v45[3].allTextData._Mypair._Myval2._Myfirst;
    if ( !(v45[3].allTextData._Mypair._Myval2._Mylast - v46) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( v46 != &str )
      std::string::assign(v46, &str, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  }
  if ( str._Mypair._Myval2._Myres >= 0x10 )
  {
    v47 = str._Mypair._Myval2._Bx._Ptr;
    if ( str._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (str._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v48 = (char *)*((_QWORD *)str._Mypair._Myval2._Bx._Ptr - 1);
      if ( v48 >= str._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(str._Mypair._Myval2._Bx._Ptr - v48) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(str._Mypair._Myval2._Bx._Ptr - v48) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v47 = (char *)*((_QWORD *)str._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v47);
  }
  return 0;
}

void __fastcall std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>>>::clear(
        std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *this)
{
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rdi
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // rcx
  void **p_Myval; // rbx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v5; // rsi
  unsigned __int64 Myres; // rax
  char *v7; // rcx
  char *v8; // rax
  unsigned __int64 v9; // rcx
  bool v10; // cf

  Next = this->_Mypair._Myval2._Myhead->_Next;
  this->_Mypair._Myval2._Myhead->_Next = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Myhead->_Prev = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Mysize = 0i64;
  if ( Next != this->_Mypair._Myval2._Myhead )
  {
    do
    {
      m_ptr = Next->_Myval.second.m_proxy.m_ptr;
      p_Myval = (void **)&Next->_Myval;
      v5 = Next->_Next;
      if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
        operator delete(m_ptr, 0x18ui64);
      Myres = Next->_Myval.first._Mypair._Myval2._Myres;
      if ( Myres >= 0x10 )
      {
        v7 = (char *)*p_Myval;
        if ( Myres + 1 >= 0x1000 )
        {
          if ( ((unsigned __int8)v7 & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v8 = (char *)*((_QWORD *)v7 - 1);
          if ( v8 >= v7 )
            invalid_parameter_noinfo_noreturn();
          v9 = v7 - v8;
          if ( v9 < 8 )
            invalid_parameter_noinfo_noreturn();
          if ( v9 > 0x27 )
            invalid_parameter_noinfo_noreturn();
          v7 = v8;
        }
        operator delete(v7);
      }
      Next->_Myval.first._Mypair._Myval2._Myres = 15i64;
      v10 = Next->_Myval.first._Mypair._Myval2._Myres < 0x10;
      Next->_Myval.first._Mypair._Myval2._Mysize = 0i64;
      if ( !v10 )
        p_Myval = (void **)*p_Myval;
      *(_BYTE *)p_Myval = 0;
      operator delete(Next);
      Next = v5;
    }
    while ( v5 != this->_Mypair._Myval2._Myhead );
  }
}

void __fastcall EffectDataListManager::clearEffect(EffectDataListManager *this)
{
  int v2; // ebp
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi
  EffectListNode *Myfirst; // rcx
  EffectListNode *v6; // rdx
  EffectListNode *v7; // rcx

  v2 = 0;
  if ( this->m_EffectList._Mypair._Myval2._Mylast - this->m_EffectList._Mypair._Myval2._Myfirst )
  {
    v3 = 0i64;
    v4 = 0i64;
    do
    {
      Myfirst = this->m_EffectList._Mypair._Myval2._Myfirst;
      if ( this->m_EffectList._Mypair._Myval2._Mylast - Myfirst <= v3 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( Myfirst[v4].pEffect )
      {
        if ( this->m_EffectList._Mypair._Myval2._Mylast - Myfirst <= v3 )
          std::_Xout_of_range("invalid vector<T> subscript");
        Myfirst[v4].pEffect->terminate(Myfirst[v4].pEffect);
        v6 = this->m_EffectList._Mypair._Myval2._Myfirst;
        if ( this->m_EffectList._Mypair._Myval2._Mylast - v6 <= v3 )
          std::_Xout_of_range("invalid vector<T> subscript");
        EffectDataListManager::recursiveDelEffect(this, v6[v4].pEffect);
        v7 = this->m_EffectList._Mypair._Myval2._Myfirst;
        if ( this->m_EffectList._Mypair._Myval2._Mylast - v7 <= v3 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v7[v4].pEffect = 0i64;
      }
      ++v2;
      ++v3;
      ++v4;
    }
    while ( v2 < (unsigned __int64)(this->m_EffectList._Mypair._Myval2._Mylast
                                  - this->m_EffectList._Mypair._Myval2._Myfirst) );
  }
  this->m_EffectList._Mypair._Myval2._Mylast = this->m_EffectList._Mypair._Myval2._Myfirst;
}

void __fastcall EffectDataListManager::clearEffectData(
        EffectDataListManager *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<EffectListNodeData> > *Myfirst,
        std::integral_constant<bool,0> a4)
{
  int v5; // er14
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  EffectListNodeData *v8; // rdi
  EffectData *effectData; // rdi
  EffectData *v10; // rax
  EffectData *v11; // rax
  EffectAppData *v12; // rcx

  v5 = 0;
  if ( this->m_EffectDataList._Mypair._Myval2._Mylast - this->m_EffectDataList._Mypair._Myval2._Myfirst )
  {
    v6 = 0i64;
    v7 = 0i64;
    do
    {
      Myfirst = (std::_Wrap_alloc<std::allocator<EffectListNodeData> > *)this->m_EffectDataList._Mypair._Myval2._Myfirst;
      if ( ((char *)this->m_EffectDataList._Mypair._Myval2._Mylast - (char *)Myfirst) / 48 <= v6 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( *(_QWORD *)&Myfirst[v7 + 40].std::allocator<EffectListNodeData> )
      {
        if ( ((char *)this->m_EffectDataList._Mypair._Myval2._Mylast - (char *)Myfirst) / 48 <= v6 )
          std::_Xout_of_range("invalid vector<T> subscript");
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&Myfirst[v7 + 40].std::allocator<EffectListNodeData> + 16i64))(*(_QWORD *)&Myfirst[v7 + 40].std::allocator<EffectListNodeData>);
        v8 = this->m_EffectDataList._Mypair._Myval2._Myfirst;
        if ( this->m_EffectDataList._Mypair._Myval2._Mylast - v8 <= v6 )
          std::_Xout_of_range("invalid vector<T> subscript");
        effectData = v8[v7 / 0x30].effectData;
        if ( effectData )
        {
          v10 = effectData->getSiblingFront(effectData);
          EffectDataListManager::recursiveDelEffectData(this, v10);
          v11 = effectData->getChild(effectData);
          EffectDataListManager::recursiveDelEffectData(this, v11);
          EffectAppData::getInstance();
          EffectAppData::delChain<EffectData>(v12, effectData);
          ((void (__fastcall *)(EffectData *, __int64))effectData->~EffectData)(effectData, 1i64);
        }
      }
      ++v5;
      ++v6;
      v7 += 48i64;
    }
    while ( v5 < (unsigned __int64)(this->m_EffectDataList._Mypair._Myval2._Mylast
                                  - this->m_EffectDataList._Mypair._Myval2._Myfirst) );
  }
  std::_Destroy_range1<std::allocator<EffectListNodeData>,EffectListNodeData *>(
    this->m_EffectDataList._Mypair._Myval2._Myfirst,
    this->m_EffectDataList._Mypair._Myval2._Mylast,
    Myfirst,
    a4);
  this->m_EffectDataList._Mypair._Myval2._Mylast = this->m_EffectDataList._Mypair._Myval2._Myfirst;
}

void __fastcall EffectDataListManager::clearResourceData(
        EffectDataListManager *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<std::string > > *a3,
        std::integral_constant<bool,0> a4)
{
  int v4; // ebp
  int v6; // er14
  unsigned __int64 v7; // rsi
  void **Myfirst; // rdi
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  int v11; // er14
  unsigned __int64 v12; // rsi
  void **v13; // rdi
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  int v16; // er14
  unsigned __int64 v17; // rsi
  void **v18; // rdi
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  std::_Wrap_alloc<std::allocator<std::string > > *v21; // r8
  std::integral_constant<bool,0> v22; // r9
  std::_Wrap_alloc<std::allocator<std::string > > *v23; // r8
  std::integral_constant<bool,0> v24; // r9
  std::_Wrap_alloc<std::allocator<std::string > > *v25; // r8
  std::integral_constant<bool,0> v26; // r9
  extension::BasicFutureObject<OGLCurve,void> *Mylast; // rsi
  extension::BasicFutureObject<OGLCurve,void> *i; // rdi
  extension::BasicFutureObject<OGLCurve,void>::Body *m_ptr; // rcx

  v4 = 0;
  v6 = 0;
  if ( this->loadTexData._Mypair._Myval2._Mylast - this->loadTexData._Mypair._Myval2._Myfirst )
  {
    v7 = 0i64;
    do
    {
      Myfirst = this->loadTexData._Mypair._Myval2._Myfirst;
      if ( this->loadTexData._Mypair._Myval2._Mylast - Myfirst <= v7 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v9 = Myfirst[v7];
      if ( v9 )
      {
        v10 = v9[1];
        if ( v10
          && _InterlockedExchangeAdd64(
               (volatile signed __int64 *)(*(_QWORD *)(v10 + 8) + 16i64),
               0xFFFFFFFFFFFFFFFFui64) == 1 )
        {
          (**(void (__fastcall ***)(__int64, __int64))v10)(v10, 1i64);
        }
        operator delete(v9, 0x10ui64);
      }
      ++v6;
      ++v7;
    }
    while ( v6 < (unsigned __int64)(this->loadTexData._Mypair._Myval2._Mylast
                                  - this->loadTexData._Mypair._Myval2._Myfirst) );
  }
  v11 = 0;
  if ( this->loadFigureData._Mypair._Myval2._Mylast - this->loadFigureData._Mypair._Myval2._Myfirst )
  {
    v12 = 0i64;
    do
    {
      v13 = this->loadFigureData._Mypair._Myval2._Myfirst;
      if ( this->loadFigureData._Mypair._Myval2._Mylast - v13 <= v12 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v14 = v13[v12];
      if ( v14 )
      {
        v15 = v14[1];
        if ( v15
          && _InterlockedExchangeAdd64(
               (volatile signed __int64 *)(*(_QWORD *)(v15 + 8) + 16i64),
               0xFFFFFFFFFFFFFFFFui64) == 1 )
        {
          (**(void (__fastcall ***)(__int64, __int64))v15)(v15, 1i64);
        }
        operator delete(v14, 0x10ui64);
      }
      ++v11;
      ++v12;
    }
    while ( v11 < (unsigned __int64)(this->loadFigureData._Mypair._Myval2._Mylast
                                   - this->loadFigureData._Mypair._Myval2._Myfirst) );
  }
  v16 = 0;
  if ( this->loadCpuFigureData._Mypair._Myval2._Mylast - this->loadCpuFigureData._Mypair._Myval2._Myfirst )
  {
    v17 = 0i64;
    do
    {
      v18 = this->loadCpuFigureData._Mypair._Myval2._Myfirst;
      if ( this->loadCpuFigureData._Mypair._Myval2._Mylast - v18 <= v17 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v19 = v18[v17];
      if ( v19 )
      {
        v20 = v19[1];
        if ( v20
          && _InterlockedExchangeAdd64(
               (volatile signed __int64 *)(*(_QWORD *)(v20 + 8) + 16i64),
               0xFFFFFFFFFFFFFFFFui64) == 1 )
        {
          (**(void (__fastcall ***)(__int64, __int64))v20)(v20, 1i64);
        }
        operator delete(v19, 0x10ui64);
      }
      ++v16;
      ++v17;
    }
    while ( v16 < (unsigned __int64)(this->loadCpuFigureData._Mypair._Myval2._Mylast
                                   - this->loadCpuFigureData._Mypair._Myval2._Myfirst) );
  }
  if ( this->loadCurveData._Mypair._Myval2._Mylast - this->loadCurveData._Mypair._Myval2._Myfirst )
  {
    do
      ++v4;
    while ( v4 < (unsigned __int64)(this->loadCurveData._Mypair._Myval2._Mylast
                                  - this->loadCurveData._Mypair._Myval2._Myfirst) );
  }
  std::_Destroy_range1<std::allocator<std::string>,std::string *>(
    this->loadTexPathName._Mypair._Myval2._Myfirst,
    this->loadTexPathName._Mypair._Myval2._Mylast,
    a3,
    a4);
  this->loadTexPathName._Mypair._Myval2._Mylast = this->loadTexPathName._Mypair._Myval2._Myfirst;
  std::_Destroy_range1<std::allocator<std::string>,std::string *>(
    this->loadFigurePathName._Mypair._Myval2._Myfirst,
    this->loadFigurePathName._Mypair._Myval2._Mylast,
    v21,
    v22);
  this->loadFigurePathName._Mypair._Myval2._Mylast = this->loadFigurePathName._Mypair._Myval2._Myfirst;
  std::_Destroy_range1<std::allocator<std::string>,std::string *>(
    this->loadCpuFigurePathName._Mypair._Myval2._Myfirst,
    this->loadCpuFigurePathName._Mypair._Myval2._Mylast,
    v23,
    v24);
  this->loadCpuFigurePathName._Mypair._Myval2._Mylast = this->loadCpuFigurePathName._Mypair._Myval2._Myfirst;
  std::_Destroy_range1<std::allocator<std::string>,std::string *>(
    this->loadCurvePathName._Mypair._Myval2._Myfirst,
    this->loadCurvePathName._Mypair._Myval2._Mylast,
    v25,
    v26);
  this->loadCurvePathName._Mypair._Myval2._Mylast = this->loadCurvePathName._Mypair._Myval2._Myfirst;
  this->loadTexData._Mypair._Myval2._Mylast = this->loadTexData._Mypair._Myval2._Myfirst;
  this->loadFigureData._Mypair._Myval2._Mylast = this->loadFigureData._Mypair._Myval2._Myfirst;
  this->loadCpuFigureData._Mypair._Myval2._Mylast = this->loadCpuFigureData._Mypair._Myval2._Myfirst;
  Mylast = this->loadCurveData._Mypair._Myval2._Mylast;
  for ( i = this->loadCurveData._Mypair._Myval2._Myfirst; i != Mylast; ++i )
  {
    m_ptr = i->m_body.m_ptr;
    if ( m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<OGLCurve,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
    }
  }
  this->loadCurveData._Mypair._Myval2._Mylast = this->loadCurveData._Mypair._Myval2._Myfirst;
}

Effect *__fastcall EffectDataListManager::createEffect(EffectDataListManager *this, int index)
{
  EffectListNodeData *Myfirst; // r8
  signed __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  Effect *pEffect; // rsi
  std::vector<EffectListNode> *p_m_EffectList; // rbx
  EffectListNode *Mylast; // rcx
  unsigned __int64 v9; // rdi
  EffectListNode *v10; // rcx
  Effect *result; // rax
  EffectListNode *v12; // rax
  EffectListNode v13; // [rsp+20h] [rbp-18h] BYREF

  if ( index < 0
    || index >= (unsigned __int64)(this->m_EffectDataList._Mypair._Myval2._Mylast
                                 - this->m_EffectDataList._Mypair._Myval2._Myfirst) )
  {
    return 0i64;
  }
  Myfirst = this->m_EffectDataList._Mypair._Myval2._Myfirst;
  v13.pEffect = 0i64;
  v13.deleteMarginCount = 0;
  v4 = (char *)this->m_EffectDataList._Mypair._Myval2._Mylast - (char *)Myfirst;
  v13.index = index;
  if ( v4 / 48 <= (unsigned __int64)index )
    std::_Xout_of_range("invalid vector<T> subscript");
  v13.pEffect = EffectDataListManager::createEffect(this, Myfirst[index].effectData, 0i64, 0i64);
  pEffect = v13.pEffect;
  if ( !v13.pEffect )
    return pEffect;
  p_m_EffectList = &this->m_EffectList;
  Mylast = p_m_EffectList->_Mypair._Myval2._Mylast;
  if ( &v13 >= Mylast
    || (v5 = (unsigned __int64)p_m_EffectList->_Mypair._Myval2._Myfirst, p_m_EffectList->_Mypair._Myval2._Myfirst > &v13) )
  {
    if ( Mylast == p_m_EffectList->_Mypair._Myval2._Myend )
      std::vector<EffectListNode>::_Reserve(p_m_EffectList, v5);
    v12 = p_m_EffectList->_Mypair._Myval2._Mylast;
    if ( v12 )
      *v12 = v13;
    ++p_m_EffectList->_Mypair._Myval2._Mylast;
    return pEffect;
  }
  v9 = (unsigned __int64)&v13 - v5;
  if ( Mylast == p_m_EffectList->_Mypair._Myval2._Myend )
    std::vector<EffectListNode>::_Reserve(p_m_EffectList, v5);
  v10 = p_m_EffectList->_Mypair._Myval2._Mylast;
  if ( v10 )
    *v10 = *(EffectListNode *)((char *)p_m_EffectList->_Mypair._Myval2._Myfirst + (v9 & 0xFFFFFFFFFFFFFFF0ui64));
  result = pEffect;
  ++p_m_EffectList->_Mypair._Myval2._Mylast;
  return result;
}

ParticleEmitter *__fastcall EffectDataListManager::createEffect(
        EffectDataListManager *this,
        EffectData *pEffectData,
        Effect *pEffect,
        Effect *pParentEffect)
{
  ParticleEmitter *v4; // rsi
  EffectDataListManager *v6; // rdi
  ParticleEmitter *v8; // rax
  ParticleEmitter_vtbl *v9; // rax
  ParticleEmitter_vtbl *v10; // rbx
  unsigned int v11; // eax
  Effect *parent; // rdi
  Effect *siblingFront; // rbx
  EffectData *v14; // rax
  Effect *v15; // r9
  Effect *Effect; // rbx
  Effect *v17; // rcx
  Effect *LastSibling; // rax
  Effect *v19; // rax
  Effect *child; // rbx
  EffectData *v21; // rax
  Effect *v22; // rax
  Effect *v23; // rax
  int v24; // er9
  int v25; // eax
  Effect *v26; // rdx
  int i; // edx
  Effect *v28; // rcx
  Emitter *v29; // rcx
  Effect *v30; // rcx
  Effect *v31; // rcx
  ParticleEmitter *v33; // [rsp+58h] [rbp+10h]
  Effect *v34; // [rsp+58h] [rbp+10h]

  v4 = (ParticleEmitter *)pEffect;
  v6 = this;
  if ( !pEffectData )
    return 0i64;
  if ( !pEffect )
  {
    switch ( pEffectData->getEffectType(pEffectData) )
    {
      case 0:
      case 1:
        v33 = (ParticleEmitter *)operator new(0xE78ui64);
        ParticleEmitter::ParticleEmitter(v33);
        v4 = v8;
        if ( !v8 )
          return 0i64;
        v9 = v8->__vftable;
        goto LABEL_7;
      case 2:
        v4 = (ParticleEmitter *)operator new(0xE78ui64);
        ParticleEmitter::ParticleEmitter(v4);
        v4->__vftable = (ParticleEmitter_vtbl *)&GPUParticleEmitter::`vftable';
        LightParticleEmitter::setEffectData(v4, pEffectData);
        goto LABEL_8;
      case 3:
        v4 = (ParticleEmitter *)operator new(0xE30ui64);
        Emitter::Emitter(v4);
        v4->__vftable = (ParticleEmitter_vtbl *)&LightParticleEmitter::`vftable';
        v4->pStateArray[0] = 0i64;
        v4->pStateArray[1] = 0i64;
        v4->pStateArray[2] = 0i64;
        v4->pStateArray[3] = 0i64;
        v4->pStateArray[4] = 0i64;
        v4->pStateArray[5] = 0i64;
        v4->pState = 0i64;
        v9 = v4->__vftable;
LABEL_7:
        v9->setEffectData(v4, pEffectData);
LABEL_8:
        v10 = v4->__vftable;
        v11 = pEffectData->getEffectType(pEffectData);
        v10->changeState(v4, v11);
        break;
      case 4:
        v4 = (ParticleEmitter *)operator new(0xBB0ui64);
        Effect::Effect(v4);
        v4->__vftable = (ParticleEmitter_vtbl *)&TurbulenceField::`vftable';
        Effect::setEffectData(v4, pEffectData);
        break;
      case 5:
        v4 = (ParticleEmitter *)operator new(0xBB0ui64);
        Effect::Effect(v4);
        v4->__vftable = (ParticleEmitter_vtbl *)&AttractionField::`vftable';
        Effect::setEffectData(v4, pEffectData);
        break;
      case 7:
        v4 = (ParticleEmitter *)operator new(0xBB0ui64);
        Effect::Effect(v4);
        v4->__vftable = (ParticleEmitter_vtbl *)&CollisionField::`vftable';
        Effect::setEffectData(v4, pEffectData);
        break;
      default:
        break;
    }
  }
  v4->parent = pParentEffect;
  EffectAppData::getInstance();
  if ( pEffectData->getSiblingFront(pEffectData) )
  {
    parent = v4->parent;
    siblingFront = v4->siblingFront;
    v14 = pEffectData->getSiblingFront(pEffectData);
    v15 = parent;
    v6 = this;
    Effect = EffectDataListManager::createEffect(this, v14, siblingFront, v15);
    v34 = v4->siblingFront;
    v17 = Effect->siblingFront;
    if ( v17 )
      LastSibling = getLastSiblingEmitter<Effect>(v17);
    else
      LastSibling = Effect;
    LastSibling->siblingFront = v34;
    Effect->siblingBack = v4;
    v19 = v4->siblingFront;
    if ( v19 )
      v19->siblingBack = Effect;
    v4->siblingFront = Effect;
    Effect->parent = v4->parent;
  }
  if ( pEffectData->getChild(pEffectData) )
  {
    child = v4->child;
    v21 = pEffectData->getChild(pEffectData);
    v22 = EffectDataListManager::createEffect(v6, v21, child, v4);
    if ( !v4->child )
      v4->child = v22;
    v22->parent = v4;
  }
  if ( pEffectData->getEffectType(pEffectData) <= 1 )
  {
    v23 = v4->child;
    if ( v23 )
    {
      v26 = v23->siblingFront;
      v25 = v26 ? Effect::countChild(v4, v26, 1) : 1;
      v24 = 0;
    }
    else
    {
      v24 = 0;
      v25 = 0;
    }
    v4->m_ChildSize = v25;
    for ( i = 0; i < v25; ++i )
    {
      v28 = v4->child;
      if ( v28 && i >= 0 )
      {
        if ( i )
        {
          v29 = (Emitter *)v28->siblingFront;
          if ( v29 )
            Emitter::setChildNumFromNum(v29, i, 1);
        }
        else
        {
          *(_DWORD *)&v28[1].m_BlendProjData.fixBlendRatioFlag = v24;
        }
      }
    }
  }
  v4->m_pEffectDataListManager = v6;
  v30 = v4->child;
  if ( v30 )
    Effect::setEffectDataListManager(v30, v6);
  v31 = v4->siblingFront;
  if ( v31 )
    Effect::setEffectDataListManager(v31, v6);
  v4->m_pBindModel = v6->m_pBindModel;
  return v4;
}

void __fastcall EffectDataListManager::curveDataLoad(
        EffectDataListManager *this,
        std::string *filepath,
        std::string *filename)
{
  std::string *Ptr; // rdx
  unsigned __int64 v7; // r8
  extension::BasicFutureObject<OGLCurve,void>::AssetCache *v8; // rcx
  const void *v9; // r9
  extension::BasicFutureObject<OGLCurve,void>::Body *m_ptr; // r8
  extension::BasicFutureObject<OGLCurve,void>::Body *v11; // rsi
  extension::BasicFutureObject<OGLCurve,void>::Body *v12; // rcx
  char *v13; // rcx
  char *v14; // rax
  unsigned __int64 *p_Count; // rdx
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *p_loadCurveData; // rbx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *Mylast; // rax
  signed __int64 v18; // rdi
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *v19; // rdx
  unsigned __int64 v20; // rdi
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *v21; // rcx
  extension::RefCountableWeakSupportBase::WeakProxy *v22; // rcx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *v23; // rcx
  unsigned __int64 _Count; // [rsp+20h] [rbp-69h] BYREF
  extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> result; // [rsp+28h] [rbp-61h] BYREF
  char v26; // [rsp+31h] [rbp-58h]
  extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> v27; // [rsp+38h] [rbp-51h] BYREF
  std::string v28; // [rsp+40h] [rbp-49h] BYREF
  __int64 v29; // [rsp+60h] [rbp-29h]
  std::string *v30; // [rsp+70h] [rbp-19h]
  std::string *v31; // [rsp+78h] [rbp-11h]
  std::string _Right; // [rsp+80h] [rbp-9h] BYREF

  v29 = -2i64;
  v30 = filepath;
  v31 = filename;
  std::vector<std::string>::push_back(&this->loadCurvePathName, filepath);
  BYTE1(_Count) = 0;
  extension::BasicFutureObject<OGLCurve,void>::Body::GetSharedEmpty(&result);
  if ( filepath->_Mypair._Myval2._Myres < 0x10 )
    Ptr = filepath;
  else
    Ptr = (std::string *)filepath->_Mypair._Myval2._Bx._Ptr;
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( Ptr->_Mypair._Myval2._Bx._Buf[0] )
  {
    v7 = -1i64;
    do
      ++v7;
    while ( Ptr->_Mypair._Myval2._Bx._Buf[v7] );
  }
  else
  {
    v7 = 0i64;
  }
  std::string::assign(&_Right, Ptr->_Mypair._Myval2._Bx._Buf, v7);
  v26 = 0;
  v28._Mypair._Myval2._Myres = 15i64;
  v28._Mypair._Myval2._Mysize = 0i64;
  v28._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v28, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<OGLCurve,void>::AssetCache::getCachedOrLoadStart(v8, &v27, &v28, v9);
  BYTE1(_Count) = v26;
  m_ptr = v27.m_ptr;
  v11 = v27.m_ptr;
  if ( v27.m_ptr )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v27.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
    m_ptr = v27.m_ptr;
  }
  v12 = result.m_ptr;
  result.m_ptr = v11;
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v12->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<OGLCurve,void>::Body *, __int64))v12->~RefCountableWeakSupportBase)(
        v12,
        1i64);
    m_ptr = v27.m_ptr;
  }
  if ( m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<OGLCurve,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
      m_ptr,
      1i64);
  }
  if ( _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    v13 = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v14 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v14) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v14) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v13 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v13);
  }
  _DummyLogging("load : %s\n");
  p_loadCurveData = (std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&this->loadCurveData;
  Mylast = p_loadCurveData->_Mypair._Myval2._Mylast;
  if ( &_Count >= (unsigned __int64 *)Mylast
    || (p_Count = &_Count,
        p_loadCurveData->_Mypair._Myval2._Myfirst > (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)&_Count) )
  {
    if ( Mylast == p_loadCurveData->_Mypair._Myval2._Myend )
      std::vector<extension::BasicFutureObject<OGLCurve,void>>::_Reserve(p_loadCurveData, (unsigned __int64)p_Count);
    v23 = p_loadCurveData->_Mypair._Myval2._Mylast;
    if ( v23 )
    {
      v23->m_isNoCache = BYTE1(_Count);
      v23->m_body.m_ptr = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *)v11;
      if ( v11 )
      {
        v22 = v11->m_refCount.m_ptr;
        goto LABEL_41;
      }
    }
  }
  else
  {
    v18 = (char *)&_Count - (char *)p_loadCurveData->_Mypair._Myval2._Myfirst;
    if ( Mylast == p_loadCurveData->_Mypair._Myval2._Myend )
      std::vector<extension::BasicFutureObject<OGLCurve,void>>::_Reserve(p_loadCurveData, (unsigned __int64)&_Count);
    v19 = p_loadCurveData->_Mypair._Myval2._Mylast;
    v20 = (unsigned __int64)p_loadCurveData->_Mypair._Myval2._Myfirst + (v18 & 0xFFFFFFFFFFFFFFF0ui64);
    if ( v19 )
    {
      v19->m_isNoCache = *(_BYTE *)(v20 + 1);
      v21 = *(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body **)(v20 + 8);
      v19->m_body.m_ptr = v21;
      if ( v21 )
      {
        v22 = v21->m_refCount.m_ptr;
LABEL_41:
        _InterlockedExchangeAdd64((volatile signed __int64 *)&v22->m_sharedCount, 1ui64);
      }
    }
  }
  ++p_loadCurveData->_Mypair._Myval2._Mylast;
  if ( v11
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v11->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<OGLCurve,void>::Body *, __int64))v11->~RefCountableWeakSupportBase)(
      v11,
      1i64);
  }
  std::string::~string(filepath);
  std::string::~string(filename);
}

void __fastcall std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
        std::allocator<AgLogger *> *this,
        AgLogger **_Ptr,
        unsigned __int64 _Count)
{
  AgLogger **v3; // rax
  char *v4; // rdx

  if ( _Count > 0x1FFFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 8 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = (AgLogger **)*(_Ptr - 1);
    if ( v3 >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)v3);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = v3;
  }
  operator delete(_Ptr);
}

void __fastcall std::_Wrap_alloc<std::allocator<unsigned char>>::deallocate(
        std::_Wrap_alloc<std::allocator<AgSuspendingEvent> > *this,
        AgSuspendingEvent *_Ptr,
        unsigned __int64 _Count)
{
  AgSuspendingEvent *v3; // rax
  AgSuspendingEvent *v4; // rdx

  if ( _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = *(AgSuspendingEvent **)&_Ptr[-8];
    if ( v3 >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (AgSuspendingEvent *)(_Ptr - v3);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = v3;
  }
  operator delete(_Ptr);
}

void __fastcall std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
        std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *this,
        AgDirectory::DirectoryEntry *_Ptr,
        unsigned __int64 _Count)
{
  AgDirectory::DirectoryEntry *m_internalData; // rax
  char *v4; // rdx

  if ( _Count > 0x7FFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 32 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    m_internalData = (AgDirectory::DirectoryEntry *)_Ptr[-1].m_internalData;
    if ( m_internalData >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)m_internalData);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = m_internalData;
  }
  operator delete(_Ptr);
}

void __fastcall std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
        std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *this,
        AgDelegate1<AgUserUpdatedEvent const &,void> *_Ptr,
        unsigned __int64 _Count)
{
  void (__fastcall *m_pFunction)(detail::GenericClass *); // rax
  char *v4; // rdx

  if ( _Count > 0xFFFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 16 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    m_pFunction = _Ptr[-1].m_Closure.m_pFunction;
    if ( (AgDelegate1<AgUserUpdatedEvent const &,void> *)m_pFunction >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)m_pFunction);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = (AgDelegate1<AgUserUpdatedEvent const &,void> *)m_pFunction;
  }
  operator delete(_Ptr);
}

void __fastcall std::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo>>::deallocate(
        std::allocator<AgControllerPairingChangedEvent> *this,
        AgControllerPairingChangedEvent *_Ptr,
        unsigned __int64 _Count)
{
  AgUser *m_ptr; // rax
  char *v4; // rdx

  if ( _Count > 0x555555555555555i64 )
    invalid_parameter_noinfo_noreturn();
  if ( 48 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    m_ptr = _Ptr[-1].oldUser.m_ptr;
    if ( m_ptr >= (AgUser *)_Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)m_ptr);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = (AgControllerPairingChangedEvent *)m_ptr;
  }
  operator delete(_Ptr);
}

void __fastcall std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting>>::deallocate(
        std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *this,
        extension::FutureAssetOptionFileSetting *_Ptr,
        unsigned __int64 _Count)
{
  extension::FutureAssetOptionFileSetting *v3; // rax
  char *v4; // rdx

  if ( _Count > 0x666666666666666i64 )
    invalid_parameter_noinfo_noreturn();
  if ( 40 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = *(extension::FutureAssetOptionFileSetting **)&_Ptr[-1].bNoMotion;
    if ( v3 >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)v3);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = v3;
  }
  operator delete(_Ptr);
}

std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *__fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>>,0>>::erase(
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *this,
        std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *result,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > _Plist)
{
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *p_Myval; // r9
  unsigned __int64 Mysize; // r11
  unsigned __int64 v7; // rcx
  __int64 i; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *v11; // rcx

  p_Myval = &_Plist._Ptr->_Myval;
  Mysize = _Plist._Ptr->_Myval.first._Mypair._Myval2._Mysize;
  if ( _Plist._Ptr->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
    p_Myval = (std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *)p_Myval->first._Mypair._Myval2._Bx._Ptr;
  v7 = 0i64;
  for ( i = 0xCBF29CE484222325ui64; v7 < Mysize; i = 0x100000001B3i64 * (v9 ^ i) )
    v9 = (unsigned __int8)p_Myval->first._Mypair._Myval2._Bx._Buf[v7++];
  v10 = 2 * (i & this->_Mask);
  v11 = &this->_Vec._Mypair._Myval2._Myfirst[v10];
  if ( v11[1]._Ptr == _Plist._Ptr )
  {
    if ( v11->_Ptr == _Plist._Ptr )
    {
      v11->_Ptr = this->_List._Mypair._Myval2._Myhead;
      this->_Vec._Mypair._Myval2._Myfirst[v10 + 1]._Ptr = this->_List._Mypair._Myval2._Myhead;
    }
    else
    {
      v11[1]._Ptr = _Plist._Ptr->_Prev;
    }
  }
  else if ( v11->_Ptr == _Plist._Ptr )
  {
    v11->_Ptr = _Plist._Ptr->_Next;
  }
  std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>::erase(
    &this->_List,
    result,
    _Plist);
  return result;
}

std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *__fastcall std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>::erase(
        std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *this,
        std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *result,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > _Where)
{
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // rcx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // [rsp+40h] [rbp+18h]

  Next = _Where._Ptr->_Next;
  _Where._Ptr->_Prev->_Next = _Where._Ptr->_Next;
  _Where._Ptr->_Next->_Prev = _Where._Ptr->_Prev;
  --this->_Mypair._Myval2._Mysize;
  m_ptr = _Where._Ptr->_Myval.second.m_proxy.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    operator delete(m_ptr, 0x18ui64);
  std::string::~string((std::string *)&_Where._Ptr->_Myval.first);
  operator delete(_Where._Ptr);
  result->_Ptr = Next;
  return result;
}

void __fastcall EffectDataListManager::figureDataLoad(
        EffectDataListManager *this,
        std::string *filepath,
        std::string *filename,
        int flag)
{
  std::string v7; // [rsp+20h] [rbp-88h] BYREF
  std::string v8; // [rsp+40h] [rbp-68h] BYREF
  __int64 v9; // [rsp+60h] [rbp-48h]
  std::string *v10; // [rsp+68h] [rbp-40h]
  std::string *v11; // [rsp+78h] [rbp-30h]
  std::string *v12; // [rsp+80h] [rbp-28h]

  v9 = -2i64;
  v11 = filepath;
  v12 = filename;
  v10 = &v7;
  v7._Mypair._Myval2._Myres = 15i64;
  v7._Mypair._Myval2._Mysize = 0i64;
  v7._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v7, filename, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  v8._Mypair._Myval2._Myres = 15i64;
  v8._Mypair._Myval2._Mysize = 0i64;
  v8._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v8, filepath, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  EffectDataListManager::figureDataLoadToGpu(this, &v8, &v7);
  std::string::~string(filepath);
  std::string::~string(filename);
}

__int64 __fastcall EffectDataListManager::figureDataLoadToCpu(
        EffectDataListManager *this,
        std::string *filepath,
        std::string *filename)
{
  std::string *v3; // r12
  std::string *v4; // rbx
  EffectDataListManager *v5; // r15
  int v6; // er13
  std::vector<std::string> *p_loadCpuFigurePathName; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // r15
  std::string *Myfirst; // rcx
  char **v11; // rdx
  size_t *p_Mysize; // rdi
  std::string *Ptr; // rcx
  size_t v14; // rdi
  unsigned __int64 Mysize; // rsi
  size_t v16; // r8
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *v18; // rdi
  const char *v19; // rdx
  unsigned __int64 v20; // r8
  extension::FutureObjectSpec::NoCache_t v21; // dl
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rsi
  char *v24; // rdx
  char *v25; // rax
  std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *v26; // r8
  std::integral_constant<bool,0> v27; // r9
  unsigned __int64 *p_Count; // rdx
  std::vector<void *> *p_loadCpuFigureData; // rdi
  void **Mylast; // rax
  __int64 v31; // rsi
  void **v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rsi
  extension::FutureAssetOptionFileSetting *v35; // rdi
  unsigned __int64 v36; // rdx
  extension::FutureAssetOptionFileSetting *v37; // rax
  unsigned __int64 v38; // rdi
  char *v39; // rcx
  char *v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 Myres; // rax
  char *v43; // rcx
  char *v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 _Count; // [rsp+20h] [rbp-49h] BYREF
  EffectDataListManager *v47; // [rsp+28h] [rbp-41h]
  extension::FutureFigureOption opt; // [rsp+30h] [rbp-39h] BYREF
  __int64 v49; // [rsp+50h] [rbp-19h]
  std::string *v50; // [rsp+58h] [rbp-11h]
  std::string *v51; // [rsp+60h] [rbp-9h]
  std::string asset_path; // [rsp+68h] [rbp-1h] BYREF

  v49 = -2i64;
  v3 = filename;
  v4 = filepath;
  v5 = this;
  v47 = this;
  v50 = filepath;
  v51 = filename;
  LODWORD(_Count) = 0;
  v6 = 0;
  p_loadCpuFigurePathName = &this->loadCpuFigurePathName;
  if ( (int)(this->loadCpuFigurePathName._Mypair._Myval2._Mylast - this->loadCpuFigurePathName._Mypair._Myval2._Myfirst) > 0 )
  {
    v8 = 0i64;
    _Count = 0i64;
    v9 = 0i64;
    do
    {
      Myfirst = p_loadCpuFigurePathName->_Mypair._Myval2._Myfirst;
      if ( p_loadCpuFigurePathName->_Mypair._Myval2._Mylast - p_loadCpuFigurePathName->_Mypair._Myval2._Myfirst <= v8 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v11 = (char **)&Myfirst[v9];
      p_Mysize = &Myfirst[v9]._Mypair._Myval2._Mysize;
      if ( Myfirst[v9]._Mypair._Myval2._Myres >= 0x10 )
        v11 = (char **)*v11;
      if ( v4->_Mypair._Myval2._Myres < 0x10 )
        Ptr = v4;
      else
        Ptr = (std::string *)v4->_Mypair._Myval2._Bx._Ptr;
      v14 = *p_Mysize;
      Mysize = v4->_Mypair._Myval2._Mysize;
      v16 = v14;
      if ( Mysize < v14 )
        v16 = v4->_Mypair._Myval2._Mysize;
      if ( (!v16 || !memcmp(Ptr, v11, v16)) && Mysize >= v14 && Mysize <= v14 )
      {
        std::string::~string(v4);
        std::string::~string(v3);
        return (unsigned int)v6;
      }
      ++v6;
      v8 = ++_Count;
      ++v9;
    }
    while ( v6 < (int)(p_loadCpuFigurePathName->_Mypair._Myval2._Mylast
                     - p_loadCpuFigurePathName->_Mypair._Myval2._Myfirst) );
    v5 = v47;
  }
  *(_WORD *)&opt.bBaseFigure = 256;
  opt.bNoMotion = 0;
  memset(&opt.fileSetting, 0, sizeof(opt.fileSetting));
  std::vector<std::string>::push_back(p_loadCpuFigurePathName, v4);
  v18 = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *)operator new(0x10ui64);
  v47 = (EffectDataListManager *)v18;
  if ( v4->_Mypair._Myval2._Myres < 0x10 )
    v19 = (const char *)v4;
  else
    v19 = v4->_Mypair._Myval2._Bx._Ptr;
  asset_path._Mypair._Myval2._Myres = 15i64;
  asset_path._Mypair._Myval2._Mysize = 0i64;
  asset_path._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *v19 )
  {
    v20 = -1i64;
    do
      ++v20;
    while ( v19[v20] );
  }
  else
  {
    v20 = 0i64;
  }
  std::string::assign(&asset_path, v19, v20);
  LODWORD(_Count) = 1;
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::BasicFutureObject<OGLFigure,extension::FutureFigureOption>(
    v18,
    v21,
    &asset_path,
    &opt);
  v23 = v22;
  if ( asset_path._Mypair._Myval2._Myres >= 0x10 )
  {
    v24 = asset_path._Mypair._Myval2._Bx._Ptr;
    if ( asset_path._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (asset_path._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v25 = (char *)*((_QWORD *)asset_path._Mypair._Myval2._Bx._Ptr - 1);
      if ( v25 >= asset_path._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(asset_path._Mypair._Myval2._Bx._Ptr - v25) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(asset_path._Mypair._Myval2._Bx._Ptr - v25) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v24 = (char *)*((_QWORD *)asset_path._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v24);
  }
  if ( v23 )
  {
    _DummyLogging("load : %s\n");
    _Count = v23;
    p_loadCpuFigureData = &v5->loadCpuFigureData;
    Mylast = v5->loadCpuFigureData._Mypair._Myval2._Mylast;
    if ( &_Count >= (unsigned __int64 *)Mylast
      || (p_Count = &_Count, p_loadCpuFigureData->_Mypair._Myval2._Myfirst > (void **)&_Count) )
    {
      if ( Mylast == v5->loadCpuFigureData._Mypair._Myval2._Myend )
        std::vector<BattleStageEvent *>::_Reserve(
          (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)&v5->loadCpuFigureData,
          (unsigned __int64)p_Count);
      v33 = v5->loadCpuFigureData._Mypair._Myval2._Mylast;
      if ( v33 )
        *v33 = v23;
    }
    else
    {
      v31 = ((char *)&_Count - (char *)p_loadCpuFigureData->_Mypair._Myval2._Myfirst) >> 3;
      if ( Mylast == v5->loadCpuFigureData._Mypair._Myval2._Myend )
        std::vector<BattleStageEvent *>::_Reserve(
          (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)&v5->loadCpuFigureData,
          (unsigned __int64)&_Count);
      v32 = v5->loadCpuFigureData._Mypair._Myval2._Mylast;
      if ( v32 )
        *v32 = p_loadCpuFigureData->_Mypair._Myval2._Myfirst[v31];
    }
    ++v5->loadCpuFigureData._Mypair._Myval2._Mylast;
  }
  else
  {
    _DummyLogging("load faild : %s\n");
  }
  v34 = p_loadCpuFigurePathName->_Mypair._Myval2._Mylast - p_loadCpuFigurePathName->_Mypair._Myval2._Myfirst;
  v35 = opt.fileSetting._Mypair._Myval2._Myfirst;
  if ( opt.fileSetting._Mypair._Myval2._Myfirst )
  {
    std::_Destroy_range1<std::allocator<extension::FutureAssetOptionFileSetting>,extension::FutureAssetOptionFileSetting *>(
      opt.fileSetting._Mypair._Myval2._Myfirst,
      opt.fileSetting._Mypair._Myval2._Mylast,
      v26,
      v27);
    v36 = opt.fileSetting._Mypair._Myval2._Myend - v35;
    if ( v36 > 0x666666666666666i64 )
      invalid_parameter_noinfo_noreturn();
    if ( 40 * v36 >= 0x1000 )
    {
      if ( ((__int64)opt.fileSetting._Mypair._Myval2._Myfirst & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v37 = *(extension::FutureAssetOptionFileSetting **)&v35[-1].bNoMotion;
      if ( v37 >= v35 )
        invalid_parameter_noinfo_noreturn();
      v38 = (char *)v35 - (char *)v37;
      if ( v38 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v38 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      v35 = v37;
    }
    operator delete(v35);
  }
  if ( v4->_Mypair._Myval2._Myres >= 0x10 )
  {
    v39 = v4->_Mypair._Myval2._Bx._Ptr;
    if ( v4->_Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v39 & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v40 = (char *)*((_QWORD *)v39 - 1);
      if ( v40 >= v39 )
        invalid_parameter_noinfo_noreturn();
      v41 = v39 - v40;
      if ( v41 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v41 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      v39 = v40;
    }
    operator delete(v39);
  }
  v4->_Mypair._Myval2._Myres = 15i64;
  v4->_Mypair._Myval2._Mysize = 0i64;
  if ( v4->_Mypair._Myval2._Myres >= 0x10 )
    v4 = (std::string *)v4->_Mypair._Myval2._Bx._Ptr;
  v4->_Mypair._Myval2._Bx._Buf[0] = 0;
  Myres = v3->_Mypair._Myval2._Myres;
  if ( Myres >= 0x10 )
  {
    v43 = v3->_Mypair._Myval2._Bx._Ptr;
    if ( Myres + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v43 & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v44 = (char *)*((_QWORD *)v43 - 1);
      if ( v44 >= v43 )
        invalid_parameter_noinfo_noreturn();
      v45 = v43 - v44;
      if ( v45 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v45 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      v43 = v44;
    }
    operator delete(v43);
  }
  v3->_Mypair._Myval2._Myres = 15i64;
  v3->_Mypair._Myval2._Mysize = 0i64;
  if ( v3->_Mypair._Myval2._Myres >= 0x10 )
    v3 = (std::string *)v3->_Mypair._Myval2._Bx._Ptr;
  v3->_Mypair._Myval2._Bx._Buf[0] = 0;
  return (unsigned int)(v34 - 1);
}

void __fastcall EffectDataListManager::figureDataLoadToGpu(
        EffectDataListManager *this,
        std::string *filepath,
        std::string *filename)
{
  extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> *v6; // rdi
  std::string *Ptr; // rdx
  unsigned __int64 v8; // r8
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache *v9; // rcx
  char *v10; // rcx
  char *v11; // rax
  unsigned __int64 *p_Count; // rdx
  std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *p_loadFigureData; // rbx
  void (__fastcall **Mylast)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // rax
  __int64 v15; // rdi
  void (__fastcall **v16)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // rcx
  void (__fastcall **v17)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // rax
  unsigned __int64 _Count; // [rsp+20h] [rbp-49h] BYREF
  std::string v19; // [rsp+28h] [rbp-41h] BYREF
  __int64 v20; // [rsp+48h] [rbp-21h]
  extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> *v21; // [rsp+50h] [rbp-19h]
  std::string *v22; // [rsp+60h] [rbp-9h]
  std::string *v23; // [rsp+68h] [rbp-1h]
  std::string _Right; // [rsp+70h] [rbp+7h] BYREF

  v20 = -2i64;
  v22 = filepath;
  v23 = filename;
  LODWORD(_Count) = 0;
  std::vector<std::string>::push_back(&this->loadFigurePathName, filepath);
  v6 = (extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> *)operator new(0x10ui64);
  v21 = v6;
  if ( filepath->_Mypair._Myval2._Myres < 0x10 )
    Ptr = filepath;
  else
    Ptr = (std::string *)filepath->_Mypair._Myval2._Bx._Ptr;
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( Ptr->_Mypair._Myval2._Bx._Buf[0] )
  {
    v8 = -1i64;
    do
      ++v8;
    while ( Ptr->_Mypair._Myval2._Bx._Buf[v8] );
  }
  else
  {
    v8 = 0i64;
  }
  std::string::assign(&_Right, Ptr->_Mypair._Myval2._Bx._Buf, v8);
  LODWORD(_Count) = 1;
  BYTE1(v6->m_ptr) = 0;
  v19._Mypair._Myval2._Myres = 15i64;
  v19._Mypair._Myval2._Mysize = 0i64;
  v19._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v19, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache::getCachedOrLoadStart(
    v9,
    v6 + 1,
    &v19,
    0i64);
  if ( _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    v10 = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v11 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v11 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v11) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v11) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v10 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v10);
  }
  _DummyLogging("load : %s\n");
  _Count = (unsigned __int64)v6;
  p_loadFigureData = (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)&this->loadFigureData;
  Mylast = p_loadFigureData->_Mypair._Myval2._Mylast;
  if ( &_Count >= (unsigned __int64 *)Mylast
    || (p_Count = &_Count,
        p_loadFigureData->_Mypair._Myval2._Myfirst > (void (__fastcall **)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *))&_Count) )
  {
    if ( Mylast == p_loadFigureData->_Mypair._Myval2._Myend )
      std::vector<BattleStageEvent *>::_Reserve(p_loadFigureData, (unsigned __int64)p_Count);
    v17 = p_loadFigureData->_Mypair._Myval2._Mylast;
    if ( v17 )
      *v17 = (void (__fastcall *)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *))v6;
  }
  else
  {
    v15 = ((char *)&_Count - (char *)p_loadFigureData->_Mypair._Myval2._Myfirst) >> 3;
    if ( Mylast == p_loadFigureData->_Mypair._Myval2._Myend )
      std::vector<BattleStageEvent *>::_Reserve(p_loadFigureData, (unsigned __int64)&_Count);
    v16 = p_loadFigureData->_Mypair._Myval2._Mylast;
    if ( v16 )
      *v16 = p_loadFigureData->_Mypair._Myval2._Myfirst[v15];
  }
  ++p_loadFigureData->_Mypair._Myval2._Mylast;
  std::string::~string(filepath);
  std::string::~string(filename);
}

extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> *__fastcall extension::BasicFutureObject<OGLCurve,void>::AssetCache::getCachedOrLoadStart(
        extension::BasicFutureObject<OGLCurve,void>::AssetCache *this,
        extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> *result,
        std::string *name,
        const void *opt)
{
  volatile signed __int64 *v6; // rsi
  std::string *v7; // rax
  char *Ptr; // rcx
  char *v9; // rax
  unsigned __int64 v10; // rax
  bool v11; // r12
  std::string *v12; // rax
  std::string *v13; // rax
  char *v14; // rcx
  char *v15; // rax
  char *v16; // rcx
  char *v17; // rax
  const void *v18; // rdx
  unsigned __int64 Mysize; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 Myres; // rdx
  std::string *p_Keyval; // rax
  std::string *v23; // rax
  std::string *v24; // rax
  extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *v25; // rax
  extension::AsyncStatus::Step v26; // edx
  extension::BasicFutureObject<OGLCurve,void>::Body *m_ptr; // rcx
  extension::AsyncContent<OGLCurve> *v28; // rax
  extension::AsyncContent<OGLCurve> *v29; // rbx
  std::string *v30; // rcx
  std::string *v31; // rax
  std::string *v32; // rax
  std::string *v33; // rcx
  std::string *v34; // rax
  std::string *v35; // rax
  extension::BasicFutureObject<OGLCurve,void>::Body *v36; // rbx
  const void *v37; // r9
  extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > *v38; // rax
  extension::BasicFutureObject<OGLCurve,void>::Body *v39; // rcx
  extension::BasicFutureObject<OGLCurve,void>::Body *v40; // rax
  extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> *v41; // rax
  extension::BasicFutureObject<OGLCurve,void>::Body *v42; // rcx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> >,void *> *Next; // rbx
  std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v44; // r8
  extension::RefCountableWeakSupportBase::WeakProxy *v45; // rax
  extension::BasicFutureObject<OGLCurve,void>::Body *v47; // [rsp+28h] [rbp-D8h]
  extension::RefCountableWeakSupportBase::WeakProxy *block; // [rsp+30h] [rbp-D0h]
  extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > v49; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C0h]
  extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> *v51; // [rsp+48h] [rbp-B8h]
  extension::BasicFutureObject<OGLCurve,void>::Body *v52; // [rsp+50h] [rbp-B0h]
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v53; // [rsp+60h] [rbp-A0h] BYREF
  extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache> *v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+70h] [rbp-90h]
  std::string *v56; // [rsp+78h] [rbp-88h]
  std::string _Keyval; // [rsp+80h] [rbp-80h] BYREF
  std::string v58; // [rsp+A0h] [rbp-60h] BYREF
  std::string _Right; // [rsp+C0h] [rbp-40h] BYREF
  std::string resulta; // [rsp+E0h] [rbp-20h] BYREF
  std::string v61; // [rsp+100h] [rbp+0h] BYREF
  std::string v62; // [rsp+120h] [rbp+20h] BYREF
  std::string v63; // [rsp+140h] [rbp+40h] BYREF
  std::string v64; // [rsp+160h] [rbp+60h] BYREF
  std::string v65; // [rsp+180h] [rbp+80h] BYREF

  v50 = -2i64;
  v51 = result;
  v56 = name;
  v6 = 0i64;
  v7 = extension::AsyncWorker::NormalizeAssetPath(&resulta, name);
  std::string::assign(name, v7);
  if ( resulta._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = resulta._Mypair._Myval2._Bx._Ptr;
    if ( resulta._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (resulta._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v9 = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
      if ( v9 >= resulta._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  v10 = std::string::find(name, "obm", 0i64, 3ui64);
  v11 = v10 != -1i64;
  if ( v10 != -1i64 )
  {
    v12 = std::string::substr(name, &v61, 0i64, name->_Mypair._Myval2._Mysize - 3);
    v13 = std::operator+<char>(&v58, v12, "dds");
    std::string::assign(name, v13);
    if ( v58._Mypair._Myval2._Myres >= 0x10 )
    {
      v14 = v58._Mypair._Myval2._Bx._Ptr;
      if ( v58._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v58._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v15 = (char *)*((_QWORD *)v58._Mypair._Myval2._Bx._Ptr - 1);
        if ( v15 >= v58._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v58._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v58._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v14 = (char *)*((_QWORD *)v58._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v14);
    }
    v58._Mypair._Myval2._Myres = 15i64;
    v58._Mypair._Myval2._Mysize = 0i64;
    v58._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( v61._Mypair._Myval2._Myres >= 0x10 )
    {
      v16 = v61._Mypair._Myval2._Bx._Ptr;
      if ( v61._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v61._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v17 = (char *)*((_QWORD *)v61._Mypair._Myval2._Bx._Ptr - 1);
        if ( v17 >= v61._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v61._Mypair._Myval2._Bx._Ptr - v17) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v61._Mypair._Myval2._Bx._Ptr - v17) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v16 = (char *)*((_QWORD *)v61._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v16);
    }
  }
  extension::AsyncWorker::ToLowerCasePath(&_Keyval, name);
  extension::FutureObjectJobManager<extension::exsound_detail::SoundBankImpl,void>::Stringize(&_Right, v18);
  if ( _Right._Mypair._Myval2._Mysize )
  {
    Mysize = _Keyval._Mypair._Myval2._Mysize;
    if ( _Keyval._Mypair._Myval2._Mysize == -1i64 || ~_Keyval._Mypair._Myval2._Mysize == 1 )
      std::_Xlength_error("string too long");
    v20 = _Keyval._Mypair._Myval2._Mysize + 1;
    if ( _Keyval._Mypair._Myval2._Mysize == -2i64 )
      std::_Xlength_error("string too long");
    Myres = _Keyval._Mypair._Myval2._Myres;
    if ( _Keyval._Mypair._Myval2._Myres >= v20 )
    {
      if ( _Keyval._Mypair._Myval2._Mysize != -1i64 )
        goto LABEL_50;
      _Keyval._Mypair._Myval2._Mysize = 0i64;
      p_Keyval = &_Keyval;
      if ( _Keyval._Mypair._Myval2._Myres >= 0x10 )
        p_Keyval = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
      p_Keyval->_Mypair._Myval2._Bx._Buf[0] = 0;
    }
    else
    {
      std::string::_Copy(&_Keyval, _Keyval._Mypair._Myval2._Mysize + 1, _Keyval._Mypair._Myval2._Mysize);
    }
    Mysize = _Keyval._Mypair._Myval2._Mysize;
    Myres = _Keyval._Mypair._Myval2._Myres;
    if ( !v20 )
    {
LABEL_55:
      std::string::append(&_Keyval, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      goto LABEL_56;
    }
LABEL_50:
    v23 = &_Keyval;
    if ( Myres >= 0x10 )
      v23 = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
    v23->_Mypair._Myval2._Bx._Buf[Mysize] = 63;
    _Keyval._Mypair._Myval2._Mysize = v20;
    v24 = &_Keyval;
    if ( _Keyval._Mypair._Myval2._Myres >= 0x10 )
      v24 = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
    v24->_Mypair._Myval2._Bx._Buf[v20] = 0;
    goto LABEL_55;
  }
LABEL_56:
  v54 = &extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache>;
  v55 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache>);
  v25 = (extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *)std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
                                                                                            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.m_cachedObjectMap,
                                                                                            &_Keyval);
  extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>::lock(
    v25,
    (extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *)result);
  m_ptr = result->m_ptr;
  if ( !result->m_ptr )
    goto LABEL_69;
  v28 = m_ptr->m_content.m_ptr;
  if ( !v28 || v28->m_isDataReleased )
    goto LABEL_66;
  if ( (v28->m_status.m_stateFlags.m_value._My_val & 1) != 0 )
  {
    v29 = result->m_ptr->m_content.m_ptr;
    if ( v29 )
    {
      if ( !v29->m_isDataReleased )
      {
        if ( (v29->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v29->m_status, v26);
        if ( v29->m_errorCode )
        {
          m_ptr = result->m_ptr;
LABEL_66:
          result->m_ptr = 0i64;
          if ( m_ptr
            && _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            ((void (__fastcall *)(extension::BasicFutureObject<OGLCurve,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
              m_ptr,
              1i64);
          }
        }
      }
    }
  }
LABEL_69:
  if ( !result->m_ptr )
  {
    if ( v11 )
    {
      v30 = name->_Mypair._Myval2._Myres < 0x10 ? name : (std::string *)name->_Mypair._Myval2._Bx._Ptr;
      if ( !(unsigned __int8)CFile::exists(v30->_Mypair._Myval2._Bx._Buf) )
      {
        v31 = std::string::substr(name, &v63, 0i64, name->_Mypair._Myval2._Mysize - 3);
        v32 = std::operator+<char>(&v62, v31, "dds");
        std::string::assign(name, v32);
        std::string::~string(&v62);
        std::string::~string(&v63);
        v33 = name->_Mypair._Myval2._Myres < 0x10 ? name : (std::string *)name->_Mypair._Myval2._Bx._Ptr;
        if ( !(unsigned __int8)CFile::exists(v33->_Mypair._Myval2._Bx._Buf) )
        {
          v34 = std::string::substr(name, &v65, 0i64, name->_Mypair._Myval2._Mysize - 3);
          v35 = std::operator+<char>(&v64, v34, "png");
          std::string::assign(name, v35);
          std::string::~string(&v64);
          std::string::~string(&v65);
        }
      }
    }
    v36 = (extension::BasicFutureObject<OGLCurve,void>::Body *)operator new(0x18ui64);
    v52 = v36;
    v38 = extension::FutureObjectJobManager<OGLCurve,void>::LoadStart(&v49, name, &_Right, v37);
    extension::BasicFutureObject<OGLCurve,void>::Body::Body(
      v36,
      (extension::RefCountablePtr<extension::AsyncContent<OGLCurve> >)v38);
    v39 = result->m_ptr;
    result->m_ptr = v40;
    if ( v39
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v39->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<OGLCurve,void>::Body *, __int64))v39->~RefCountableWeakSupportBase)(
        v39,
        1i64);
    }
    v41 = std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.m_cachedObjectMap,
            &_Keyval);
    v42 = result->m_ptr;
    v47 = result->m_ptr;
    if ( result->m_ptr )
    {
      v6 = (volatile signed __int64 *)v42->m_refCount.m_ptr;
      if ( v6 )
      {
        _InterlockedExchangeAdd64(v6, 1ui64);
        v42 = v47;
      }
    }
    v41->m_ptr = (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *)v42;
    block = v41->m_proxy.m_ptr;
    v41->m_proxy.m_ptr = (extension::RefCountableWeakSupportBase::WeakProxy *)v6;
    if ( block && _InterlockedExchangeAdd64((volatile signed __int64 *)block, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      operator delete(block, 0x18ui64);
  }
  Next = extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead->_Next;
  while ( Next != extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead )
  {
    v44._Ptr = (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)Next;
    v45 = Next->_Myval.second.m_proxy.m_ptr;
    Next = Next->_Next;
    if ( !v45 || !v45->m_sharedCount.m_value._My_val )
      std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>>,0>>::erase(
        (std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *)&extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.m_cachedObjectMap,
        &v53,
        v44);
  }
  extension::lockable_detail::LockUnlock(
    &extension::BasicFutureObject<OGLCurve,void>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache>,
    -1);
  std::string::~string(&_Right);
  std::string::~string(&_Keyval);
  std::string::~string(name);
  return result;
}

extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> *__fastcall extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache::getCachedOrLoadStart(
        extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache *this,
        extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> *result,
        std::string *name,
        const extension::FutureFigureOption *opt)
{
  volatile signed __int64 *v7; // rsi
  std::string *v8; // rax
  char *Ptr; // rcx
  char *v10; // rax
  unsigned __int64 v11; // rax
  bool v12; // r12
  std::string *v13; // rax
  std::string *v14; // rax
  char *v15; // rcx
  char *v16; // rax
  char *v17; // rcx
  char *v18; // rax
  unsigned __int64 Mysize; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 Myres; // rdx
  std::string *p_Keyval; // rax
  std::string *v23; // rax
  std::string *v24; // rax
  extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *v25; // rax
  extension::AsyncStatus::Step v26; // edx
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *m_ptr; // rcx
  extension::AsyncContent<OGLFigure> *v28; // rax
  extension::AsyncContent<OGLFigure> *v29; // rbx
  std::string *v30; // rcx
  std::string *v31; // rax
  std::string *v32; // rax
  std::string *v33; // rcx
  std::string *v34; // rax
  std::string *v35; // rax
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *v36; // rbx
  extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > *v37; // rax
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *v38; // rcx
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *v39; // rax
  extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> *v40; // rax
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *v41; // rcx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> >,void *> *Next; // rbx
  std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v43; // r8
  extension::RefCountableWeakSupportBase::WeakProxy *v44; // rax
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *v46; // [rsp+28h] [rbp-D8h]
  extension::RefCountableWeakSupportBase::WeakProxy *block; // [rsp+30h] [rbp-D0h]
  extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > v48; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+40h] [rbp-C0h]
  extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> *v50; // [rsp+48h] [rbp-B8h]
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *v51; // [rsp+50h] [rbp-B0h]
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v52; // [rsp+60h] [rbp-A0h] BYREF
  extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache> *v53; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+70h] [rbp-90h]
  std::string *v55; // [rsp+78h] [rbp-88h]
  std::string _Keyval; // [rsp+80h] [rbp-80h] BYREF
  std::string v57; // [rsp+A0h] [rbp-60h] BYREF
  std::string _Right; // [rsp+C0h] [rbp-40h] BYREF
  std::string resulta; // [rsp+E0h] [rbp-20h] BYREF
  std::string v60; // [rsp+100h] [rbp+0h] BYREF
  std::string v61; // [rsp+120h] [rbp+20h] BYREF
  std::string v62; // [rsp+140h] [rbp+40h] BYREF
  std::string v63; // [rsp+160h] [rbp+60h] BYREF
  std::string v64; // [rsp+180h] [rbp+80h] BYREF

  v49 = -2i64;
  v50 = result;
  v55 = name;
  v7 = 0i64;
  v8 = extension::AsyncWorker::NormalizeAssetPath(&resulta, name);
  std::string::assign(name, v8);
  if ( resulta._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = resulta._Mypair._Myval2._Bx._Ptr;
    if ( resulta._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (resulta._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v10 = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
      if ( v10 >= resulta._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v10) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v10) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  v11 = std::string::find(name, "obm", 0i64, 3ui64);
  v12 = v11 != -1i64;
  if ( v11 != -1i64 )
  {
    v13 = std::string::substr(name, &v60, 0i64, name->_Mypair._Myval2._Mysize - 3);
    v14 = std::operator+<char>(&v57, v13, "dds");
    std::string::assign(name, v14);
    if ( v57._Mypair._Myval2._Myres >= 0x10 )
    {
      v15 = v57._Mypair._Myval2._Bx._Ptr;
      if ( v57._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v57._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v16 = (char *)*((_QWORD *)v57._Mypair._Myval2._Bx._Ptr - 1);
        if ( v16 >= v57._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v57._Mypair._Myval2._Bx._Ptr - v16) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v57._Mypair._Myval2._Bx._Ptr - v16) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v15 = (char *)*((_QWORD *)v57._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v15);
    }
    v57._Mypair._Myval2._Myres = 15i64;
    v57._Mypair._Myval2._Mysize = 0i64;
    v57._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( v60._Mypair._Myval2._Myres >= 0x10 )
    {
      v17 = v60._Mypair._Myval2._Bx._Ptr;
      if ( v60._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v60._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v18 = (char *)*((_QWORD *)v60._Mypair._Myval2._Bx._Ptr - 1);
        if ( v18 >= v60._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v60._Mypair._Myval2._Bx._Ptr - v18) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v60._Mypair._Myval2._Bx._Ptr - v18) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v17 = (char *)*((_QWORD *)v60._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v17);
    }
  }
  extension::AsyncWorker::ToLowerCasePath(&_Keyval, name);
  extension::FutureObjectJobManager<OGLFigure,extension::FutureFigureOption>::Stringize(&_Right, opt);
  if ( _Right._Mypair._Myval2._Mysize )
  {
    Mysize = _Keyval._Mypair._Myval2._Mysize;
    if ( _Keyval._Mypair._Myval2._Mysize == -1i64 || ~_Keyval._Mypair._Myval2._Mysize == 1 )
      std::_Xlength_error("string too long");
    v20 = _Keyval._Mypair._Myval2._Mysize + 1;
    if ( _Keyval._Mypair._Myval2._Mysize == -2i64 )
      std::_Xlength_error("string too long");
    Myres = _Keyval._Mypair._Myval2._Myres;
    if ( _Keyval._Mypair._Myval2._Myres >= v20 )
    {
      if ( _Keyval._Mypair._Myval2._Mysize != -1i64 )
        goto LABEL_50;
      _Keyval._Mypair._Myval2._Mysize = 0i64;
      p_Keyval = &_Keyval;
      if ( _Keyval._Mypair._Myval2._Myres >= 0x10 )
        p_Keyval = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
      p_Keyval->_Mypair._Myval2._Bx._Buf[0] = 0;
    }
    else
    {
      std::string::_Copy(&_Keyval, _Keyval._Mypair._Myval2._Mysize + 1, _Keyval._Mypair._Myval2._Mysize);
    }
    Mysize = _Keyval._Mypair._Myval2._Mysize;
    Myres = _Keyval._Mypair._Myval2._Myres;
    if ( !v20 )
    {
LABEL_55:
      std::string::append(&_Keyval, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      goto LABEL_56;
    }
LABEL_50:
    v23 = &_Keyval;
    if ( Myres >= 0x10 )
      v23 = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
    v23->_Mypair._Myval2._Bx._Buf[Mysize] = 63;
    _Keyval._Mypair._Myval2._Mysize = v20;
    v24 = &_Keyval;
    if ( _Keyval._Mypair._Myval2._Myres >= 0x10 )
      v24 = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
    v24->_Mypair._Myval2._Bx._Buf[v20] = 0;
    goto LABEL_55;
  }
LABEL_56:
  v53 = &extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache>;
  v54 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache>);
  v25 = (extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *)std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
                                                                                            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.m_cachedObjectMap,
                                                                                            &_Keyval);
  extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>::lock(
    v25,
    (extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *)result);
  m_ptr = result->m_ptr;
  if ( !result->m_ptr )
    goto LABEL_69;
  v28 = m_ptr->m_content.m_ptr;
  if ( !v28 || v28->m_isDataReleased )
    goto LABEL_66;
  if ( (v28->m_status.m_stateFlags.m_value._My_val & 1) != 0 )
  {
    v29 = result->m_ptr->m_content.m_ptr;
    if ( v29 )
    {
      if ( !v29->m_isDataReleased )
      {
        if ( (v29->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v29->m_status, v26);
        if ( v29->m_errorCode )
        {
          m_ptr = result->m_ptr;
LABEL_66:
          result->m_ptr = 0i64;
          if ( m_ptr
            && _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            ((void (__fastcall *)(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
              m_ptr,
              1i64);
          }
        }
      }
    }
  }
LABEL_69:
  if ( !result->m_ptr )
  {
    if ( v12 )
    {
      v30 = name->_Mypair._Myval2._Myres < 0x10 ? name : (std::string *)name->_Mypair._Myval2._Bx._Ptr;
      if ( !(unsigned __int8)CFile::exists(v30->_Mypair._Myval2._Bx._Buf) )
      {
        v31 = std::string::substr(name, &v62, 0i64, name->_Mypair._Myval2._Mysize - 3);
        v32 = std::operator+<char>(&v61, v31, "dds");
        std::string::assign(name, v32);
        std::string::~string(&v61);
        std::string::~string(&v62);
        v33 = name->_Mypair._Myval2._Myres < 0x10 ? name : (std::string *)name->_Mypair._Myval2._Bx._Ptr;
        if ( !(unsigned __int8)CFile::exists(v33->_Mypair._Myval2._Bx._Buf) )
        {
          v34 = std::string::substr(name, &v64, 0i64, name->_Mypair._Myval2._Mysize - 3);
          v35 = std::operator+<char>(&v63, v34, "png");
          std::string::assign(name, v35);
          std::string::~string(&v63);
          std::string::~string(&v64);
        }
      }
    }
    v36 = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *)operator new(0x18ui64);
    v51 = v36;
    v37 = extension::FutureObjectJobManager<OGLFigure,extension::FutureFigureOption>::LoadStart(
            &v48,
            name,
            &_Right,
            opt);
    extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::Body(
      v36,
      (extension::RefCountablePtr<extension::AsyncContent<OGLFigure> >)v37);
    v38 = result->m_ptr;
    result->m_ptr = v39;
    if ( v38
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v38->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *, __int64))v38->~RefCountableWeakSupportBase)(
        v38,
        1i64);
    }
    v40 = std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.m_cachedObjectMap,
            &_Keyval);
    v41 = result->m_ptr;
    v46 = result->m_ptr;
    if ( result->m_ptr )
    {
      v7 = (volatile signed __int64 *)v41->m_refCount.m_ptr;
      if ( v7 )
      {
        _InterlockedExchangeAdd64(v7, 1ui64);
        v41 = v46;
      }
    }
    v40->m_ptr = (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *)v41;
    block = v40->m_proxy.m_ptr;
    v40->m_proxy.m_ptr = (extension::RefCountableWeakSupportBase::WeakProxy *)v7;
    if ( block && _InterlockedExchangeAdd64((volatile signed __int64 *)block, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      operator delete(block, 0x18ui64);
  }
  Next = extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead->_Next;
  while ( Next != extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead )
  {
    v43._Ptr = (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)Next;
    v44 = Next->_Myval.second.m_proxy.m_ptr;
    Next = Next->_Next;
    if ( !v44 || !v44->m_sharedCount.m_value._My_val )
      std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>>,0>>::erase(
        (std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *)&extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.m_cachedObjectMap,
        &v52,
        v43);
  }
  extension::lockable_detail::LockUnlock(
    &extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache>,
    -1);
  std::string::~string(&_Right);
  std::string::~string(&_Keyval);
  std::string::~string(name);
  return result;
}

extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> *__fastcall extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache::getCachedOrLoadStart(
        extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache *this,
        extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> *result,
        std::string *name,
        const extension::FutureTextureOption *opt)
{
  volatile signed __int64 *v7; // rsi
  std::string *v8; // rax
  char *Ptr; // rcx
  char *v10; // rax
  unsigned __int64 v11; // rax
  bool v12; // r12
  std::string *v13; // rax
  std::string *v14; // rax
  char *v15; // rcx
  char *v16; // rax
  char *v17; // rcx
  char *v18; // rax
  unsigned __int64 Mysize; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 Myres; // rdx
  std::string *p_Keyval; // rax
  std::string *v23; // rax
  std::string *v24; // rax
  extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *v25; // rax
  extension::AsyncStatus::Step v26; // edx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *m_ptr; // rcx
  extension::AsyncContent<OGLTexture> *v28; // rax
  extension::AsyncContent<OGLTexture> *v29; // rbx
  std::string *v30; // rcx
  std::string *v31; // rax
  std::string *v32; // rax
  std::string *v33; // rcx
  std::string *v34; // rax
  std::string *v35; // rax
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v36; // rbx
  extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > *v37; // rax
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v38; // rcx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v39; // rax
  extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> *v40; // rax
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v41; // rcx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> >,void *> *Next; // rbx
  std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v43; // r8
  extension::RefCountableWeakSupportBase::WeakProxy *v44; // rax
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v46; // [rsp+28h] [rbp-D8h]
  extension::RefCountableWeakSupportBase::WeakProxy *block; // [rsp+30h] [rbp-D0h]
  extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > v48; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+40h] [rbp-C0h]
  extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> *v50; // [rsp+48h] [rbp-B8h]
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v51; // [rsp+50h] [rbp-B0h]
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v52; // [rsp+60h] [rbp-A0h] BYREF
  extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache> *v53; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+70h] [rbp-90h]
  std::string *v55; // [rsp+78h] [rbp-88h]
  std::string _Keyval; // [rsp+80h] [rbp-80h] BYREF
  std::string v57; // [rsp+A0h] [rbp-60h] BYREF
  std::string _Right; // [rsp+C0h] [rbp-40h] BYREF
  std::string resulta; // [rsp+E0h] [rbp-20h] BYREF
  std::string v60; // [rsp+100h] [rbp+0h] BYREF
  std::string v61; // [rsp+120h] [rbp+20h] BYREF
  std::string v62; // [rsp+140h] [rbp+40h] BYREF
  std::string v63; // [rsp+160h] [rbp+60h] BYREF
  std::string v64; // [rsp+180h] [rbp+80h] BYREF

  v49 = -2i64;
  v50 = result;
  v55 = name;
  v7 = 0i64;
  v8 = extension::AsyncWorker::NormalizeAssetPath(&resulta, name);
  std::string::assign(name, v8);
  if ( resulta._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = resulta._Mypair._Myval2._Bx._Ptr;
    if ( resulta._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (resulta._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v10 = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
      if ( v10 >= resulta._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v10) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v10) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  v11 = std::string::find(name, "obm", 0i64, 3ui64);
  v12 = v11 != -1i64;
  if ( v11 != -1i64 )
  {
    v13 = std::string::substr(name, &v60, 0i64, name->_Mypair._Myval2._Mysize - 3);
    v14 = std::operator+<char>(&v57, v13, "dds");
    std::string::assign(name, v14);
    if ( v57._Mypair._Myval2._Myres >= 0x10 )
    {
      v15 = v57._Mypair._Myval2._Bx._Ptr;
      if ( v57._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v57._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v16 = (char *)*((_QWORD *)v57._Mypair._Myval2._Bx._Ptr - 1);
        if ( v16 >= v57._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v57._Mypair._Myval2._Bx._Ptr - v16) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v57._Mypair._Myval2._Bx._Ptr - v16) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v15 = (char *)*((_QWORD *)v57._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v15);
    }
    v57._Mypair._Myval2._Myres = 15i64;
    v57._Mypair._Myval2._Mysize = 0i64;
    v57._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( v60._Mypair._Myval2._Myres >= 0x10 )
    {
      v17 = v60._Mypair._Myval2._Bx._Ptr;
      if ( v60._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v60._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v18 = (char *)*((_QWORD *)v60._Mypair._Myval2._Bx._Ptr - 1);
        if ( v18 >= v60._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v60._Mypair._Myval2._Bx._Ptr - v18) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v60._Mypair._Myval2._Bx._Ptr - v18) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v17 = (char *)*((_QWORD *)v60._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v17);
    }
  }
  extension::AsyncWorker::ToLowerCasePath(&_Keyval, name);
  extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>::Stringize(&_Right, opt);
  if ( _Right._Mypair._Myval2._Mysize )
  {
    Mysize = _Keyval._Mypair._Myval2._Mysize;
    if ( _Keyval._Mypair._Myval2._Mysize == -1i64 || ~_Keyval._Mypair._Myval2._Mysize == 1 )
      std::_Xlength_error("string too long");
    v20 = _Keyval._Mypair._Myval2._Mysize + 1;
    if ( _Keyval._Mypair._Myval2._Mysize == -2i64 )
      std::_Xlength_error("string too long");
    Myres = _Keyval._Mypair._Myval2._Myres;
    if ( _Keyval._Mypair._Myval2._Myres >= v20 )
    {
      if ( _Keyval._Mypair._Myval2._Mysize != -1i64 )
        goto LABEL_50;
      _Keyval._Mypair._Myval2._Mysize = 0i64;
      p_Keyval = &_Keyval;
      if ( _Keyval._Mypair._Myval2._Myres >= 0x10 )
        p_Keyval = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
      p_Keyval->_Mypair._Myval2._Bx._Buf[0] = 0;
    }
    else
    {
      std::string::_Copy(&_Keyval, _Keyval._Mypair._Myval2._Mysize + 1, _Keyval._Mypair._Myval2._Mysize);
    }
    Mysize = _Keyval._Mypair._Myval2._Mysize;
    Myres = _Keyval._Mypair._Myval2._Myres;
    if ( !v20 )
    {
LABEL_55:
      std::string::append(&_Keyval, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      goto LABEL_56;
    }
LABEL_50:
    v23 = &_Keyval;
    if ( Myres >= 0x10 )
      v23 = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
    v23->_Mypair._Myval2._Bx._Buf[Mysize] = 63;
    _Keyval._Mypair._Myval2._Mysize = v20;
    v24 = &_Keyval;
    if ( _Keyval._Mypair._Myval2._Myres >= 0x10 )
      v24 = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
    v24->_Mypair._Myval2._Bx._Buf[v20] = 0;
    goto LABEL_55;
  }
LABEL_56:
  v53 = &extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache>;
  v54 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache>);
  v25 = (extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *)std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
                                                                                            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.m_cachedObjectMap,
                                                                                            &_Keyval);
  extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>::lock(
    v25,
    (extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *)result);
  m_ptr = result->m_ptr;
  if ( !result->m_ptr )
    goto LABEL_69;
  v28 = m_ptr->m_content.m_ptr;
  if ( !v28 || v28->m_isDataReleased )
    goto LABEL_66;
  if ( (v28->m_status.m_stateFlags.m_value._My_val & 1) != 0 )
  {
    v29 = result->m_ptr->m_content.m_ptr;
    if ( v29 )
    {
      if ( !v29->m_isDataReleased )
      {
        if ( (v29->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v29->m_status, v26);
        if ( v29->m_errorCode )
        {
          m_ptr = result->m_ptr;
LABEL_66:
          result->m_ptr = 0i64;
          if ( m_ptr
            && _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            ((void (__fastcall *)(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
              m_ptr,
              1i64);
          }
        }
      }
    }
  }
LABEL_69:
  if ( !result->m_ptr )
  {
    if ( v12 )
    {
      v30 = name->_Mypair._Myval2._Myres < 0x10 ? name : (std::string *)name->_Mypair._Myval2._Bx._Ptr;
      if ( !(unsigned __int8)CFile::exists(v30->_Mypair._Myval2._Bx._Buf) )
      {
        v31 = std::string::substr(name, &v62, 0i64, name->_Mypair._Myval2._Mysize - 3);
        v32 = std::operator+<char>(&v61, v31, "dds");
        std::string::assign(name, v32);
        std::string::~string(&v61);
        std::string::~string(&v62);
        v33 = name->_Mypair._Myval2._Myres < 0x10 ? name : (std::string *)name->_Mypair._Myval2._Bx._Ptr;
        if ( !(unsigned __int8)CFile::exists(v33->_Mypair._Myval2._Bx._Buf) )
        {
          v34 = std::string::substr(name, &v64, 0i64, name->_Mypair._Myval2._Mysize - 3);
          v35 = std::operator+<char>(&v63, v34, "png");
          std::string::assign(name, v35);
          std::string::~string(&v63);
          std::string::~string(&v64);
        }
      }
    }
    v36 = (extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *)operator new(0x18ui64);
    v51 = v36;
    v37 = extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>::LoadStart(
            &v48,
            name,
            &_Right,
            opt);
    extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::Body(
      v36,
      (extension::RefCountablePtr<extension::AsyncContent<OGLTexture> >)v37);
    v38 = result->m_ptr;
    result->m_ptr = v39;
    if ( v38
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v38->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *, __int64))v38->~RefCountableWeakSupportBase)(
        v38,
        1i64);
    }
    v40 = std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.m_cachedObjectMap,
            &_Keyval);
    v41 = result->m_ptr;
    v46 = result->m_ptr;
    if ( result->m_ptr )
    {
      v7 = (volatile signed __int64 *)v41->m_refCount.m_ptr;
      if ( v7 )
      {
        _InterlockedExchangeAdd64(v7, 1ui64);
        v41 = v46;
      }
    }
    v40->m_ptr = (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *)v41;
    block = v40->m_proxy.m_ptr;
    v40->m_proxy.m_ptr = (extension::RefCountableWeakSupportBase::WeakProxy *)v7;
    if ( block && _InterlockedExchangeAdd64((volatile signed __int64 *)block, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      operator delete(block, 0x18ui64);
  }
  Next = extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead->_Next;
  while ( Next != extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead )
  {
    v43._Ptr = (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)Next;
    v44 = Next->_Myval.second.m_proxy.m_ptr;
    Next = Next->_Next;
    if ( !v44 || !v44->m_sharedCount.m_value._My_val )
      std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>>,0>>::erase(
        (std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *)&extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.m_cachedObjectMap,
        &v52,
        v43);
  }
  extension::lockable_detail::LockUnlock(
    &extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache>,
    -1);
  std::string::~string(&_Right);
  std::string::~string(&_Keyval);
  std::string::~string(name);
  return result;
}

char __fastcall EffectDataListManager::loadEffectData(
        EffectDataListManager *this,
        std::string *filepath,
        std::_Wrap_alloc<std::allocator<EffectListNodeData> > *a3,
        std::integral_constant<bool,0> a4)
{
  __int64 v6; // rdx
  std::_Wrap_alloc<std::allocator<std::string > > *v7; // r8
  std::integral_constant<bool,0> v8; // r9
  int v9; // edx
  int v10; // er8
  int v11; // er9
  int v12; // ebx
  std::string *Ptr; // rcx
  int v14; // eax
  char *v15; // r13
  unsigned __int64 v16; // rdx
  unsigned __int64 Mysize; // rcx
  std::string *p_Left; // rax
  std::string *i; // r14
  std::string *v21; // rax
  char *v22; // rdx
  unsigned __int64 Myres; // r8
  int v24; // er14
  std::string *v25; // rax
  std::string *j; // rdi
  std::string *v27; // rax
  int v28; // edi
  std::string *v29; // rax
  int k; // edi
  int v31; // er9
  int v32; // er9
  int v33; // er9
  std::string *v34; // rax
  int v35; // er15
  unsigned __int64 v36; // rdi
  __int64 v37; // r14
  EffectListNodeData *Myfirst; // r8
  int m; // er15
  int v40; // er8
  int v41; // edi
  unsigned __int64 m_Align; // rax
  int v43; // er14
  int v44; // edi
  std::string *v45; // rax
  std::string *v46; // rax
  unsigned __int64 v47; // r8
  int last_of; // edi
  unsigned __int64 v49; // r8
  int v50; // eax
  int n; // er15
  int v52; // er8
  int v53; // edi
  unsigned __int64 v54; // rax
  int v55; // er14
  int v56; // edi
  std::string *v57; // rax
  std::string *v58; // rax
  unsigned __int64 v59; // r8
  int v60; // edi
  unsigned __int64 v61; // r8
  int v62; // eax
  int v63; // er9
  int ii; // er15
  int v65; // er8
  int v66; // edi
  unsigned __int64 v67; // rax
  int v68; // er14
  int v69; // edi
  std::string *v70; // rax
  std::string *v71; // rax
  unsigned __int64 v72; // r8
  int v73; // edi
  unsigned __int64 v74; // r8
  int v75; // eax
  unsigned __int64 v76; // r8
  __int64 v77; // r9
  EffectListNodeData *v78; // r10
  unsigned __int64 v79; // rdx
  char v80; // [rsp+30h] [rbp-D0h] BYREF
  char v81[7]; // [rsp+31h] [rbp-CFh] BYREF
  char *bg; // [rsp+38h] [rbp-C8h] BYREF
  std::string *v83; // [rsp+40h] [rbp-C0h]
  std::string *p_result; // [rsp+48h] [rbp-B8h]
  StdCompatMemoryIStream v85; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v86; // [rsp+130h] [rbp+30h]
  char *v87; // [rsp+138h] [rbp+38h]
  std::string *v88; // [rsp+140h] [rbp+40h]
  std::string v89; // [rsp+148h] [rbp+48h] BYREF
  std::string _Left; // [rsp+168h] [rbp+68h] BYREF
  std::string v91; // [rsp+188h] [rbp+88h] BYREF
  char _Str; // [rsp+1A8h] [rbp+A8h] BYREF
  char v93; // [rsp+1A9h] [rbp+A9h] BYREF
  char v94; // [rsp+1AAh] [rbp+AAh] BYREF
  char v95; // [rsp+1ABh] [rbp+ABh] BYREF
  char v96[4]; // [rsp+1ACh] [rbp+ACh] BYREF
  char v97[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v98[4]; // [rsp+1B4h] [rbp+B4h] BYREF
  char v99[4]; // [rsp+1B8h] [rbp+B8h] BYREF
  char v100[4]; // [rsp+1BCh] [rbp+BCh] BYREF
  char v101[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  char v102[4]; // [rsp+1C4h] [rbp+C4h] BYREF
  std::string v103; // [rsp+1C8h] [rbp+C8h] BYREF
  std::string result; // [rsp+1E8h] [rbp+E8h] BYREF
  std::string v105; // [rsp+208h] [rbp+108h] BYREF
  std::string _Right; // [rsp+228h] [rbp+128h] BYREF

  v86 = -2i64;
  v88 = filepath;
  EffectDataListManager::clearEffectData(this, (__int64)filepath, a3, a4);
  EffectDataListManager::clearEffect(this);
  EffectDataListManager::clearResourceData(this, v6, v7, v8);
  if ( !filepath->_Mypair._Myval2._Mysize )
    goto LABEL_9;
  v12 = 0;
  bg = 0i64;
  if ( filepath->_Mypair._Myval2._Myres < 0x10 )
    Ptr = filepath;
  else
    Ptr = (std::string *)filepath->_Mypair._Myval2._Bx._Ptr;
  v14 = CFile::ResourceDataLoaderNew(Ptr->_Mypair._Myval2._Bx._Buf, v9, v10, v11, (unsigned __int8 **)&bg);
  v15 = bg;
  v87 = bg;
  StdCompatMemoryIStream::StdCompatMemoryIStream(&v85, bg, &bg[v14]);
  if ( (v85.gap10[*(int *)(*(_QWORD *)v85.gap0 + 4i64)] & 6) != 0 )
  {
    StdCompatMemoryIStream::~StdCompatMemoryIStream((StdCompatMemoryIStream *)&v85.gap78[8]);
    *(_QWORD *)&v85.gap78[8] = &std::ios_base::`vftable';
    std::ios_base::_Ios_base_dtor((std::ios_base *)&v85.gap78[8]);
    goto LABEL_7;
  }
  std::istream::read(&v85, &_Str, 1i64);
  std::istream::read(&v85, &v93, 1i64);
  std::istream::read(&v85, &v94, 1i64);
  std::istream::read(&v85, &v95, 1i64);
  std::istream::read(&v85, v96, 4i64);
  if ( this->m_LittleEndian )
    *(_DWORD *)v96 = (((*(_DWORD *)v96 << 16) | *(_WORD *)v96 & 0xFF00) << 8) | ((*(unsigned __int16 *)&v96[2] | *(_DWORD *)v96 & 0xFF0000u) >> 8);
  std::istream::read(&v85, v97, 4i64);
  if ( this->m_LittleEndian )
    *(_DWORD *)v97 = ((*(_WORD *)v97 & 0xFF00 | (*(_DWORD *)v97 << 16)) << 8) | ((*(unsigned __int16 *)&v97[2] | *(_DWORD *)v97 & 0xFF0000u) >> 8);
  std::istream::read(&v85, v98, 4i64);
  if ( this->m_LittleEndian )
    *(_DWORD *)v98 = ((*(_WORD *)v98 & 0xFF00 | (*(_DWORD *)v98 << 16)) << 8) | ((*(unsigned __int16 *)&v98[2] | *(_DWORD *)v98 & 0xFF0000u) >> 8);
  std::istream::read(&v85, v99, 4i64);
  if ( this->m_LittleEndian )
    *(_DWORD *)v99 = ((*(_WORD *)v99 & 0xFF00 | (*(_DWORD *)v99 << 16)) << 8) | ((*(unsigned __int16 *)&v99[2] | *(_DWORD *)v99 & 0xFF0000u) >> 8);
  if ( *(_DWORD *)v96 < 0x66u )
  {
    *(_DWORD *)v100 = 0;
  }
  else
  {
    std::istream::read(&v85, v100, 4i64);
    if ( this->m_LittleEndian )
      *(_DWORD *)v100 = ((*(_WORD *)v100 & 0xFF00 | (*(_DWORD *)v100 << 16)) << 8) | ((*(unsigned __int16 *)&v100[2] | *(_DWORD *)v100 & 0xFF0000u) >> 8);
  }
  std::istream::read(&v85, v101, 4i64);
  if ( *(_DWORD *)v96 >= 0x66u )
    std::istream::read(&v85, v102, 4i64);
  _Left._Mypair._Myval2._Myres = 15i64;
  _Left._Mypair._Myval2._Mysize = 0i64;
  _Left._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&_Left, filepath, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  Mysize = _Left._Mypair._Myval2._Mysize;
  if ( _Left._Mypair._Myval2._Mysize )
  {
    p_Left = &_Left;
    if ( _Left._Mypair._Myval2._Myres >= 0x10 )
      p_Left = (std::string *)_Left._Mypair._Myval2._Bx._Ptr;
    for ( i = (std::string *)((char *)p_Left + _Left._Mypair._Myval2._Mysize - 1);
          !memchr("/", i->_Mypair._Myval2._Bx._Buf[0], 1ui64);
          i = (std::string *)((char *)i - 1) )
    {
      if ( i == std::string::c_str(&_Left) )
      {
        Mysize = _Left._Mypair._Myval2._Mysize;
        goto LABEL_35;
      }
    }
    v21 = &_Left;
    v22 = _Left._Mypair._Myval2._Bx._Ptr;
    Myres = _Left._Mypair._Myval2._Myres;
    if ( _Left._Mypair._Myval2._Myres >= 0x10 )
      LODWORD(v21) = *(_DWORD *)_Left._Mypair._Myval2._Bx._Buf;
    v24 = (_DWORD)i - (_DWORD)v21;
    Mysize = _Left._Mypair._Myval2._Mysize;
  }
  else
  {
LABEL_35:
    v24 = -1;
    Myres = _Left._Mypair._Myval2._Myres;
    v22 = _Left._Mypair._Myval2._Bx._Ptr;
  }
  if ( Mysize )
  {
    v25 = &_Left;
    if ( Myres >= 0x10 )
      v25 = (std::string *)v22;
    for ( j = (std::string *)((char *)v25 + Mysize - 1);
          !memchr("\\", j->_Mypair._Myval2._Bx._Buf[0], 1ui64);
          j = (std::string *)((char *)j - 1) )
    {
      if ( j == std::string::c_str(&_Left) )
      {
        Myres = _Left._Mypair._Myval2._Myres;
        Mysize = _Left._Mypair._Myval2._Mysize;
        v22 = _Left._Mypair._Myval2._Bx._Ptr;
        goto LABEL_47;
      }
    }
    v27 = &_Left;
    v22 = _Left._Mypair._Myval2._Bx._Ptr;
    Myres = _Left._Mypair._Myval2._Myres;
    if ( _Left._Mypair._Myval2._Myres >= 0x10 )
      LODWORD(v27) = *(_DWORD *)_Left._Mypair._Myval2._Bx._Buf;
    v28 = (_DWORD)j - (_DWORD)v27;
    Mysize = _Left._Mypair._Myval2._Mysize;
  }
  else
  {
LABEL_47:
    v28 = -1;
  }
  if ( v24 > v28 )
    v28 = v24;
  if ( Mysize < v28 )
    std::_Xout_of_range("invalid string position");
  _Left._Mypair._Myval2._Mysize = v28;
  v29 = &_Left;
  if ( Myres >= 0x10 )
    v29 = (std::string *)v22;
  v29->_Mypair._Myval2._Bx._Buf[v28] = 0;
  if ( *(_DWORD *)v96 < 0x70u )
  {
    _DummyLogging("Effect Data version is old. please re-output. [%s]");
    std::string::~string(&_Left);
    StdCompatMemoryIStream::~StdCompatMemoryIStream((StdCompatMemoryIStream *)&v85.gap78[8]);
    *(_QWORD *)&v85.gap78[8] = &std::ios_base::`vftable';
    std::ios_base::_Ios_base_dtor((std::ios_base *)&v85.gap78[8]);
LABEL_7:
    if ( v15 )
      operator delete(v15, v16);
LABEL_9:
    std::string::~string(filepath);
    return 0;
  }
  for ( k = 0; k < *(int *)v97; ++k )
  {
    v89._Mypair._Myval2._Myres = 15i64;
    v89._Mypair._Myval2._Mysize = 0i64;
    v89._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v89, filepath, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    EffectDataListManager::singleDataLoad(this, &v89, &v85, v31);
  }
  CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), 999);
  bg = (char *)&v89;
  v89._Mypair._Myval2._Myres = 15i64;
  v89._Mypair._Myval2._Mysize = 0i64;
  v89._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v89, "CMN_DefaultTexture", 0x12ui64);
  v91._Mypair._Myval2._Myres = 15i64;
  v91._Mypair._Myval2._Mysize = 0i64;
  v91._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v91, "Chara/CMN/Effect/CMN_DefaultTexture.obm", 0x27ui64);
  EffectDataListManager::figureDataLoad(this, &v91, &v89, v32);
  v83 = &v89;
  v89._Mypair._Myval2._Myres = 15i64;
  v89._Mypair._Myval2._Mysize = 0i64;
  v89._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v89, "CMN_DefaultPlane", 0x10ui64);
  v91._Mypair._Myval2._Myres = 15i64;
  v91._Mypair._Myval2._Mysize = 0i64;
  v91._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v91, "Chara/CMN/Effect/CMN_DefaultPlane.obac", 0x26ui64);
  EffectDataListManager::figureDataLoad(this, &v91, &v89, v33);
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  v34 = std::operator+<char>(&result, &_Left, "/Effect/");
  std::string::assign(&_Right, v34);
  std::string::~string(&result);
  v35 = 0;
  if ( (int)(this->m_EffectDataList._Mypair._Myval2._Mylast - this->m_EffectDataList._Mypair._Myval2._Myfirst) > 0 )
  {
    v36 = 0i64;
    v37 = 0i64;
    do
    {
      v83 = &v89;
      v89._Mypair._Myval2._Myres = 15i64;
      v89._Mypair._Myval2._Mysize = 0i64;
      v89._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v89, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      Myfirst = this->m_EffectDataList._Mypair._Myval2._Myfirst;
      if ( this->m_EffectDataList._Mypair._Myval2._Mylast - Myfirst <= v36 )
        std::_Xout_of_range("invalid vector<T> subscript");
      EffectDataListManager::recursiveLoadResource(this, &v89, Myfirst[v37].effectData);
      ++v35;
      ++v36;
      ++v37;
    }
    while ( v35 < (int)(this->m_EffectDataList._Mypair._Myval2._Mylast - this->m_EffectDataList._Mypair._Myval2._Myfirst) );
  }
  for ( m = 0; m < *(int *)v98; ++m )
  {
    std::istream::read(&v85, (char *)&bg, 4i64);
    if ( this->m_LittleEndian )
    {
      v40 = ((int)bg >> 8) & 0xFF00 | BYTE3(bg) | (((unsigned __int16)bg & 0xFF00 | ((_DWORD)bg << 16)) << 8);
      LODWORD(bg) = v40;
    }
    else
    {
      v40 = (int)bg;
    }
    v89._Mypair._Myval2._Myres = 15i64;
    v89._Mypair._Myval2._Mysize = 0i64;
    v89._Mypair._Myval2._Bx._Buf[0] = 0;
    v41 = 0;
    if ( v40 > 0 )
    {
      do
      {
        std::istream::read(&v85, &v80, 1i64);
        std::string::append(&v89, 1ui64, v80);
        ++v41;
        v40 = (int)bg;
      }
      while ( v41 < (int)bg );
    }
    m_Align = this->m_Align;
    if ( m_Align > 1 )
      LODWORD(m_Align) = m_Align - 1;
    v43 = ~(_DWORD)m_Align & (m_Align + v40);
    v44 = 0;
    if ( v43 - v40 > 0 )
    {
      do
      {
        std::istream::read(&v85, v81, 1i64);
        ++v44;
      }
      while ( v44 < v43 - (int)bg );
    }
    result._Mypair._Myval2._Myres = 15i64;
    result._Mypair._Myval2._Mysize = 0i64;
    result._Mypair._Myval2._Bx._Buf[0] = 0;
    v45 = std::operator+<char>(&v105, &_Left, "/Effect/");
    v46 = std::operator+<char>(&v103, v45, &v89);
    std::string::assign(&result, v46);
    std::string::~string(&v103);
    std::string::~string(&v105);
    v91._Mypair._Myval2._Myres = 15i64;
    v91._Mypair._Myval2._Mysize = 0i64;
    v91._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v91, &_Left, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    last_of = std::string::find_last_of(&v91, "/", v47, 1ui64);
    v50 = std::string::find_last_of(&v91, "\\", v49, 1ui64);
    if ( last_of <= v50 )
      last_of = v50;
    std::string::erase(&v91, 0i64, last_of + 1);
    v83 = &v105;
    v105._Mypair._Myval2._Myres = 15i64;
    v105._Mypair._Myval2._Mysize = 0i64;
    v105._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v105, &v89, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    v103._Mypair._Myval2._Myres = 15i64;
    v103._Mypair._Myval2._Mysize = 0i64;
    v103._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v103, &result, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    EffectDataListManager::texDataLoad(this, &v103, &v105);
    std::string::~string(&v91);
    std::string::~string(&result);
    std::string::~string(&v89);
  }
  for ( n = 0; n < *(int *)v99; ++n )
  {
    std::istream::read(&v85, (char *)&bg, 4i64);
    if ( this->m_LittleEndian )
    {
      v52 = ((int)bg >> 8) & 0xFF00 | BYTE3(bg) | (((unsigned __int16)bg & 0xFF00 | ((_DWORD)bg << 16)) << 8);
      LODWORD(bg) = v52;
    }
    else
    {
      v52 = (int)bg;
    }
    v89._Mypair._Myval2._Myres = 15i64;
    v89._Mypair._Myval2._Mysize = 0i64;
    v89._Mypair._Myval2._Bx._Buf[0] = 0;
    v53 = 0;
    if ( v52 > 0 )
    {
      do
      {
        std::istream::read(&v85, &v80, 1i64);
        std::string::append(&v89, 1ui64, v80);
        ++v53;
        v52 = (int)bg;
      }
      while ( v53 < (int)bg );
    }
    v54 = this->m_Align;
    if ( v54 > 1 )
      LODWORD(v54) = v54 - 1;
    v55 = ~(_DWORD)v54 & (v54 + v52);
    v56 = 0;
    if ( v55 - v52 > 0 )
    {
      do
      {
        std::istream::read(&v85, v81, 1i64);
        ++v56;
      }
      while ( v56 < v55 - (int)bg );
    }
    v105._Mypair._Myval2._Myres = 15i64;
    v105._Mypair._Myval2._Mysize = 0i64;
    v105._Mypair._Myval2._Bx._Buf[0] = 0;
    v57 = std::operator+<char>(&v103, &_Left, "/Effect/");
    v58 = std::operator+<char>(&result, v57, &v89);
    std::string::assign(&v105, v58);
    std::string::~string(&result);
    std::string::~string(&v103);
    v91._Mypair._Myval2._Myres = 15i64;
    v91._Mypair._Myval2._Mysize = 0i64;
    v91._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v91, &_Left, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    v60 = std::string::find_last_of(&v91, "/", v59, 1ui64);
    v62 = std::string::find_last_of(&v91, "\\", v61, 1ui64);
    if ( v60 <= v62 )
      v60 = v62;
    std::string::erase(&v91, 0i64, v60 + 1);
    p_result = &result;
    result._Mypair._Myval2._Mysize = 0i64;
    result._Mypair._Myval2._Myres = 0i64;
    std::string::_Tidy(&result, 0, 0i64);
    std::string::assign(&result, &v89, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    v103._Mypair._Myval2._Mysize = 0i64;
    v103._Mypair._Myval2._Myres = 0i64;
    std::string::_Tidy(&v103, 0, 0i64);
    std::string::assign(&v103, &v105, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    EffectDataListManager::figureDataLoad(this, &v103, &result, v63);
    std::string::~string(&v91);
    std::string::~string(&v105);
    std::string::~string(&v89);
  }
  for ( ii = 0; ii < *(int *)v100; ++ii )
  {
    std::istream::read(&v85, (char *)&bg, 4i64);
    if ( this->m_LittleEndian )
    {
      v65 = ((int)bg >> 8) & 0xFF00 | BYTE3(bg) | (((unsigned __int16)bg & 0xFF00 | ((_DWORD)bg << 16)) << 8);
      LODWORD(bg) = v65;
    }
    else
    {
      v65 = (int)bg;
    }
    v89._Mypair._Myval2._Myres = 15i64;
    v89._Mypair._Myval2._Mysize = 0i64;
    v89._Mypair._Myval2._Bx._Buf[0] = 0;
    v66 = 0;
    if ( v65 > 0 )
    {
      do
      {
        std::istream::read(&v85, &v80, 1i64);
        std::string::append(&v89, 1ui64, v80);
        ++v66;
        v65 = (int)bg;
      }
      while ( v66 < (int)bg );
    }
    v67 = this->m_Align;
    if ( v67 > 1 )
      LODWORD(v67) = v67 - 1;
    v68 = ~(_DWORD)v67 & (v67 + v65);
    v69 = 0;
    if ( v68 - v65 > 0 )
    {
      do
      {
        std::istream::read(&v85, v81, 1i64);
        ++v69;
      }
      while ( v69 < v68 - (int)bg );
    }
    v105._Mypair._Myval2._Myres = 15i64;
    v105._Mypair._Myval2._Mysize = 0i64;
    v105._Mypair._Myval2._Bx._Buf[0] = 0;
    v70 = std::operator+<char>(&v103, &_Left, "/Effect/");
    v71 = std::operator+<char>(&result, v70, &v89);
    std::string::assign(&v105, v71);
    std::string::~string(&result);
    std::string::~string(&v103);
    v91._Mypair._Myval2._Myres = 15i64;
    v91._Mypair._Myval2._Mysize = 0i64;
    v91._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v91, &_Left, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    v73 = std::string::find_last_of(&v91, "/", v72, 1ui64);
    v75 = std::string::find_last_of(&v91, "\\", v74, 1ui64);
    if ( v73 <= v75 )
      v73 = v75;
    std::string::erase(&v91, 0i64, v73 + 1);
    p_result = &result;
    result._Mypair._Myval2._Mysize = 0i64;
    result._Mypair._Myval2._Myres = 0i64;
    std::string::_Tidy(&result, 0, 0i64);
    std::string::assign(&result, &v89, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    v103._Mypair._Myval2._Mysize = 0i64;
    v103._Mypair._Myval2._Myres = 0i64;
    std::string::_Tidy(&v103, 0, 0i64);
    std::string::assign(&v103, &v105, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    EffectDataListManager::curveDataLoad(this, &v103, &result);
    std::string::~string(&v91);
    std::string::~string(&v105);
    std::string::~string(&v89);
  }
  if ( this->m_EffectDataList._Mypair._Myval2._Mylast - this->m_EffectDataList._Mypair._Myval2._Myfirst )
  {
    v76 = 0i64;
    v77 = 0i64;
    do
    {
      v78 = this->m_EffectDataList._Mypair._Myval2._Myfirst;
      if ( this->m_EffectDataList._Mypair._Myval2._Mylast - v78 <= v76 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v78[v77].index = v12++;
      ++v76;
      ++v77;
    }
    while ( v12 < (unsigned __int64)(this->m_EffectDataList._Mypair._Myval2._Mylast
                                   - this->m_EffectDataList._Mypair._Myval2._Myfirst) );
  }
  std::string::~string(&_Right);
  std::string::~string(&_Left);
  StdCompatMemoryIStream::~StdCompatMemoryIStream((StdCompatMemoryIStream *)&v85.gap78[8]);
  *(_QWORD *)&v85.gap78[8] = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((std::ios_base *)&v85.gap78[8]);
  if ( v15 )
    operator delete(v15, v79);
  std::string::~string(filepath);
  return 1;
}

void __fastcall EffectDataListManager::loadRoundData(EffectDataListManager *this)
{
  int v2; // edi
  int v3; // er14
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  EffectListNodeData *Myfirst; // r8
  unsigned __int64 v8; // rsi
  __int64 v9; // rbp
  EffectListNode *v10; // rcx

  v2 = 0;
  v3 = 0;
  v4 = this->m_EffectDataList._Mypair._Myval2._Mylast - this->m_EffectDataList._Mypair._Myval2._Myfirst;
  if ( v4 )
  {
    v5 = 0i64;
    v6 = 0i64;
    do
    {
      Myfirst = this->m_EffectDataList._Mypair._Myval2._Myfirst;
      if ( this->m_EffectDataList._Mypair._Myval2._Mylast - Myfirst <= v5 )
        std::_Xout_of_range("invalid vector<T> subscript");
      EffectDataListManager::recursiveRenameResourceCharaID(this, Myfirst[v6].effectData);
      ++v3;
      ++v5;
      ++v6;
      v4 = this->m_EffectDataList._Mypair._Myval2._Mylast - this->m_EffectDataList._Mypair._Myval2._Myfirst;
    }
    while ( v3 < v4 );
  }
  if ( this->m_EffectList._Mypair._Myval2._Mylast - this->m_EffectList._Mypair._Myval2._Myfirst )
  {
    v8 = 0i64;
    v9 = 0i64;
    do
    {
      v10 = this->m_EffectList._Mypair._Myval2._Myfirst;
      if ( this->m_EffectList._Mypair._Myval2._Mylast - v10 <= v8 )
        std::_Xout_of_range("invalid vector<T> subscript");
      ((void (__fastcall *)(Effect *, unsigned __int64))v10[v9].pEffect->initialize)(v10[v9].pEffect, v4);
      ++v2;
      ++v8;
      ++v9;
    }
    while ( v2 < (unsigned __int64)(this->m_EffectList._Mypair._Myval2._Mylast
                                  - this->m_EffectList._Mypair._Myval2._Myfirst) );
  }
}

extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *__fastcall extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>::lock(
        extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *this,
        extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *result)
{
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_principal; // rdx
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // r8
  signed __int64 My_val; // rax
  unsigned __int64 v6; // rtt
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v7; // rcx

  m_principal = 0i64;
  result->m_ptr = 0i64;
  m_ptr = this->m_proxy.m_ptr;
  if ( m_ptr )
  {
    while ( 1 )
    {
      My_val = m_ptr->m_sharedCount.m_value._My_val;
      if ( !My_val )
        break;
      v6 = m_ptr->m_sharedCount.m_value._My_val;
      if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)&m_ptr->m_sharedCount, My_val + 1, My_val) )
      {
        m_principal = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)m_ptr->m_principal;
        break;
      }
    }
    v7 = result->m_ptr;
    result->m_ptr = m_principal;
    if ( v7
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v7->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v7->~RefCountableWeakSupportBase)(
        v7,
        1i64);
    }
  }
  return result;
}

std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *__fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>>>,0>>::lower_bound(
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *this,
        std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *result,
        const std::string *_Keyval)
{
  unsigned __int64 Myres; // r15
  const std::string *v4; // r14
  unsigned __int64 Mysize; // rdi
  unsigned __int64 v8; // rcx
  __int64 i; // rdx
  __int64 v10; // rax
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *Myfirst; // rcx
  unsigned __int64 Mask; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Myhead; // rbp
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Ptr; // r13
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v17; // rbx
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *v18; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rax
  char **p_Myval; // rcx
  const std::string *v21; // rdx
  unsigned __int64 v22; // rsi
  size_t v23; // r8
  char **v24; // rdx
  size_t v25; // rsi
  size_t v26; // r8
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *j; // [rsp+50h] [rbp+8h]

  Myres = _Keyval->_Mypair._Myval2._Myres;
  v4 = _Keyval;
  Mysize = _Keyval->_Mypair._Myval2._Mysize;
  if ( Myres >= 0x10 )
    _Keyval = (const std::string *)_Keyval->_Mypair._Myval2._Bx._Ptr;
  v8 = 0i64;
  for ( i = 0xCBF29CE484222325ui64; v8 < Mysize; i = 0x100000001B3i64 * (v10 ^ i) )
    v10 = (unsigned __int8)_Keyval->_Mypair._Myval2._Bx._Buf[v8++];
  Myfirst = this->_Vec._Mypair._Myval2._Myfirst;
  Mask = this->_Mask;
  Myhead = this->_List._Mypair._Myval2._Myhead;
  v14 = i & Mask;
  v15 = 2 * (i & Mask);
  Ptr = Myfirst[v15]._Ptr;
  v17 = Myfirst[2 * v14]._Ptr;
  v18 = &Myfirst[v15 + 1];
  for ( j = v18; ; v18 = j )
  {
    if ( Ptr == Myhead )
      Next = Myhead;
    else
      Next = v18->_Ptr->_Next;
    if ( v17 == Next )
    {
      result->_Ptr = Myhead;
      return result;
    }
    p_Myval = (char **)&v17->_Myval;
    if ( Myres < 0x10 )
      v21 = v4;
    else
      v21 = (const std::string *)v4->_Mypair._Myval2._Bx._Ptr;
    if ( v17->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
      p_Myval = (char **)*p_Myval;
    v22 = v17->_Myval.first._Mypair._Myval2._Mysize;
    v23 = Mysize;
    if ( v22 < Mysize )
      v23 = v17->_Myval.first._Mypair._Myval2._Mysize;
    if ( (!v23 || !memcmp(p_Myval, v21, v23)) && v22 >= Mysize && v22 <= Mysize )
      break;
    v17 = v17->_Next;
  }
  v24 = (char **)&v17->_Myval;
  if ( v17->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
    v24 = (char **)*v24;
  if ( Myres >= 0x10 )
    v4 = (const std::string *)v4->_Mypair._Myval2._Bx._Ptr;
  v25 = v17->_Myval.first._Mypair._Myval2._Mysize;
  v26 = v25;
  if ( Mysize < v25 )
    v26 = Mysize;
  if ( v26 && memcmp(v4, v24, v26) || Mysize < v25 || Mysize > v25 )
    v17 = Myhead;
  result->_Ptr = v17;
  return result;
}

void __fastcall std::vector<EffectListNodeData>::push_back(
        std::vector<EffectListNodeData> *this,
        const EffectListNodeData *_Val)
{
  EffectListNodeData *Mylast; // rcx
  EffectListNodeData *Myfirst; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi

  Mylast = this->_Mypair._Myval2._Mylast;
  if ( _Val >= Mylast || (Myfirst = this->_Mypair._Myval2._Myfirst, this->_Mypair._Myval2._Myfirst > _Val) )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<EffectListNodeData>::_Reserve(this, (unsigned __int64)_Val);
    std::_Wrap_alloc<std::allocator<EffectListNodeData>>::construct<EffectListNodeData,EffectListNodeData const &>(
      (std::_Wrap_alloc<std::allocator<EffectListNodeData> > *)Mylast,
      this->_Mypair._Myval2._Mylast,
      _Val);
    ++this->_Mypair._Myval2._Mylast;
  }
  else
  {
    v6 = (unsigned __int128)(((char *)_Val - (char *)Myfirst) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
    v7 = (__int64)((unsigned __int128)(((char *)_Val - (char *)Myfirst) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 3;
    v8 = (v7 >> 63) + v7;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<EffectListNodeData>::_Reserve(this, v6);
    std::_Wrap_alloc<std::allocator<EffectListNodeData>>::construct<EffectListNodeData,EffectListNodeData const &>(
      (std::_Wrap_alloc<std::allocator<EffectListNodeData> > *)Mylast,
      this->_Mypair._Myval2._Mylast,
      &this->_Mypair._Myval2._Myfirst[v8]);
    ++this->_Mypair._Myval2._Mylast;
  }
}

void __fastcall std::vector<std::string>::push_back(std::vector<std::string> *this, const std::string *_Val)
{
  std::string *Mylast; // rax
  std::string *Myfirst; // rcx
  signed __int64 v6; // rdi
  std::string *v7; // rcx
  const std::string *v8; // rdi
  std::string *v9; // rax
  std::string *v10; // rcx
  std::string *Ptr; // rax

  Mylast = this->_Mypair._Myval2._Mylast;
  if ( _Val >= Mylast || (Myfirst = this->_Mypair._Myval2._Myfirst, Myfirst > _Val) )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<std::string>::_Reserve(this, 1ui64);
    v10 = this->_Mypair._Myval2._Mylast;
    if ( v10 )
    {
      v10->_Mypair._Myval2._Myres = 15i64;
      v10->_Mypair._Myval2._Mysize = 0i64;
      if ( v10->_Mypair._Myval2._Myres < 0x10 )
        Ptr = v10;
      else
        Ptr = (std::string *)v10->_Mypair._Myval2._Bx._Ptr;
      Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(v10, _Val, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    }
  }
  else
  {
    v6 = (char *)_Val - (char *)Myfirst;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<std::string>::_Reserve(this, 1ui64);
    v7 = this->_Mypair._Myval2._Mylast;
    v8 = (std::string *)((char *)this->_Mypair._Myval2._Myfirst + (v6 & 0xFFFFFFFFFFFFFFE0ui64));
    if ( v7 )
    {
      v7->_Mypair._Myval2._Myres = 15i64;
      v7->_Mypair._Myval2._Mysize = 0i64;
      if ( v7->_Mypair._Myval2._Myres < 0x10 )
        v9 = v7;
      else
        v9 = (std::string *)v7->_Mypair._Myval2._Bx._Ptr;
      v9->_Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(v7, v8, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    }
  }
  ++this->_Mypair._Myval2._Mylast;
}

void __fastcall EffectDataListManager::recursiveCalcBindUVPosition(
        EffectDataListManager *this,
        EffectData *pEffectData)
{
  EffectData *v4; // rax
  EffectData *v5; // rax
  DialogData *Myfirst; // r8
  int *v7; // rcx
  DialogData *v8; // rax
  int *v9; // rdx
  DialogData *v10; // rax
  int v11; // er8
  int *v12; // rdx
  __int64 v13; // rbx
  int v14; // er8
  int BoneNoFromName; // ebx
  int v16; // er8
  int v17; // er8
  OGLModel *m_pBindModel; // r11
  float x; // xmm7_4
  float y; // xmm11_4
  float z; // xmm12_4
  bool v22; // zf
  float v23; // xmm8_4
  float v24; // xmm9_4
  float v25; // xmm10_4
  OGLModel *v26; // r11
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  float v35; // xmm2_4
  float v36; // xmm3_4
  float v37; // xmm5_4
  int boneNo; // [rsp+20h] [rbp-E0h]
  int boneNoa; // [rsp+20h] [rbp-E0h]
  OGLVec4 v40; // [rsp+30h] [rbp-D0h] BYREF
  void **v41; // [rsp+40h] [rbp-C0h]
  OGLVec4 v42; // [rsp+48h] [rbp-B8h] BYREF
  void **v43; // [rsp+58h] [rbp-A8h]
  OGLVec3 trans; // [rsp+60h] [rbp-A0h] BYREF
  void **v45; // [rsp+70h] [rbp-90h]
  OGLVec3 v46; // [rsp+78h] [rbp-88h] BYREF
  void **v47; // [rsp+90h] [rbp-70h]
  OGLMatrix v48; // [rsp+98h] [rbp-68h] BYREF
  void **v49; // [rsp+E0h] [rbp-20h]
  OGLMatrix mIn; // [rsp+E8h] [rbp-18h] BYREF
  void **v51; // [rsp+130h] [rbp+30h]
  OGLMatrix v52; // [rsp+138h] [rbp+38h] BYREF

  if ( pEffectData )
  {
    v4 = pEffectData->getChild(pEffectData);
    EffectDataListManager::recursiveCalcBindUVPosition(this, v4);
    v5 = pEffectData->getSiblingFront(pEffectData);
    EffectDataListManager::recursiveCalcBindUVPosition(this, v5);
    if ( pEffectData->getEffectType(pEffectData) <= 1 )
    {
      Myfirst = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast - Myfirst) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v7 = Myfirst[2].allButtonIndexData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(Myfirst[2].allButtonIndexData._Mypair._Myval2._Mylast - v7) <= 7 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( v7[7] == 1 )
      {
        v8 = std::vector<DialogData>::at(&pEffectData->AllDialogData, 2ui64);
        v9 = v8->allComboIndexData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v8->allComboIndexData._Mypair._Myval2._Mylast - v9) <= 2 )
          std::_Xout_of_range("invalid vector<T> subscript");
        boneNo = v9[2];
        v10 = std::vector<DialogData>::at(&pEffectData->AllDialogData, 2ui64);
        v12 = v10->allComboIndexData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v10->allComboIndexData._Mypair._Myval2._Mylast - v12) <= 3 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v13 = v12[3];
        boneNoa = OGLModel::getBoneNoFromName(this->m_pBindModel, gcBoneName[boneNo], v11);
        BoneNoFromName = OGLModel::getBoneNoFromName(this->m_pBindModel, gcBoneName[v13], v14);
        OGLModel::getBoneNoFromName(this->m_pBindModel, "Hip_Follow", v16);
        OGLModel::getBoneNoFromName(this->m_pBindModel, "C_Head", v17);
        m_pBindModel = this->m_pBindModel;
        x = 0.0;
        v43 = &OGLEffectVec3::`vftable';
        trans.x = 0.0;
        y = 0.0;
        trans.y = 0.0;
        z = 0.0;
        v22 = m_pBindModel->m_pFigure == 0i64;
        v23 = 0.0;
        trans.z = 0.0;
        v24 = 0.0;
        v46.x = 0.0;
        v25 = 0.0;
        v46.y = 0.0;
        v46.z = 0.0;
        v45 = &OGLEffectVec3::`vftable';
        if ( !v22 )
        {
          OGLModel::getBoneTrans(m_pBindModel, boneNoa, &trans, &m_pBindModel->m_mWorld);
          z = trans.z;
          y = trans.y;
          x = trans.x;
          if ( v26->m_pFigure )
          {
            OGLModel::getBoneTrans(v26, BoneNoFromName, &v46, &v26->m_mWorld);
            v25 = v46.z;
            v24 = v46.y;
            v23 = v46.x;
          }
        }
        *(_QWORD *)&v48.m[12] = 0i64;
        v49 = &OGLEffectMatrix::`vftable';
        v27 = *(_OWORD *)(*(_QWORD *)&AppMain::pApp + 1551304i64);
        memset(&v48, 0, 48);
        v28 = *(_OWORD *)(*(_QWORD *)&AppMain::pApp + 1551288i64);
        *(_OWORD *)&mIn.m[4] = v27;
        v29 = *(_OWORD *)(*(_QWORD *)&AppMain::pApp + 1551336i64);
        *(_QWORD *)&v48.m[14] = 0i64;
        *(_OWORD *)mIn.m = v28;
        v51 = &OGLEffectMatrix::`vftable';
        v30 = *(_OWORD *)(*(_QWORD *)&AppMain::pApp + 1551320i64);
        *(_OWORD *)&mIn.m[12] = v29;
        v31 = *(_OWORD *)(*(_QWORD *)&AppMain::pApp + 1551624i64);
        *(_OWORD *)&mIn.m[8] = v30;
        v47 = &OGLEffectMatrix::`vftable';
        v32 = *(_OWORD *)(*(_QWORD *)&AppMain::pApp + 1551608i64);
        v48.m[0] = 0.5;
        *(_OWORD *)&v52.m[4] = v31;
        v48.m[10] = 1.0;
        v33 = *(_OWORD *)(*(_QWORD *)&AppMain::pApp + 1551656i64);
        v48.m[12] = 0.5;
        *(_OWORD *)v52.m = v32;
        v48.m[13] = 0.5;
        v34 = *(_OWORD *)(*(_QWORD *)&AppMain::pApp + 1551640i64);
        v48.m[15] = 1.0;
        *(_OWORD *)&v52.m[12] = v33;
        v48.m[5] = FLOAT_N0_5;
        v40.x = x;
        v40.y = y;
        v40.z = z;
        v42.x = v23;
        v42.y = v24;
        v42.z = v25;
        *(_OWORD *)&v52.m[8] = v34;
        v40.w = 1.0;
        v41 = &OGLEffectVec4::`vftable';
        v42.w = 1.0;
        OGLVec4::transCoord(&v40, &mIn);
        OGLVec4::transCoord(&v42, &mIn);
        OGLVec4::transCoord(&v40, &v52);
        OGLVec4::transCoord(&v42, &v52);
        OGLVec4::transCoord(&v40, &v48);
        OGLVec4::transCoord(&v42, &v48);
        *(float *)&v33 = 1.0 / v42.w;
        v35 = v42.x;
        v36 = v42.y;
        v37 = v40.y * (float)(1.0 / v40.w);
        pEffectData->blurUV1.x = v40.x * (float)(1.0 / v40.w);
        pEffectData->blurUV1.y = 1.0 - v37;
        pEffectData->blurUV2.y = 1.0 - (float)(v36 * *(float *)&v33);
        pEffectData->blurUV2.x = v35 * *(float *)&v33;
      }
    }
  }
}

void __fastcall EffectDataListManager::recursiveDelEffect(EffectDataListManager *this, Effect *myEffect)
{
  Effect *parent; // rcx
  Effect *siblingBack; // rax
  Effect *siblingFront; // rcx

  if ( myEffect )
  {
    EffectDataListManager::recursiveDelEffect(this, myEffect->siblingFront);
    EffectDataListManager::recursiveDelEffect(this, myEffect->child);
    EffectAppData::getInstance();
    parent = myEffect->parent;
    if ( parent && parent->child == myEffect )
      parent->child = myEffect->siblingFront;
    siblingBack = myEffect->siblingBack;
    siblingFront = myEffect->siblingFront;
    if ( siblingBack )
      siblingBack->siblingFront = siblingFront;
    if ( siblingFront )
      siblingFront->siblingBack = myEffect->siblingBack;
    ((void (__fastcall *)(Effect *, __int64))myEffect->~Effect)(myEffect, 1i64);
  }
}

void __fastcall EffectDataListManager::recursiveDelEffectData(EffectDataListManager *this, EffectData *myEffectData)
{
  EffectData *v4; // rax
  EffectData *v5; // rax
  EffectAppData *v6; // rcx

  if ( myEffectData )
  {
    v4 = myEffectData->getSiblingFront(myEffectData);
    EffectDataListManager::recursiveDelEffectData(this, v4);
    v5 = myEffectData->getChild(myEffectData);
    EffectDataListManager::recursiveDelEffectData(this, v5);
    EffectAppData::getInstance();
    EffectAppData::delChain<EffectData>(v6, myEffectData);
    ((void (__fastcall *)(EffectData *, __int64))myEffectData->~EffectData)(myEffectData, 1i64);
  }
}

void __fastcall EffectDataListManager::recursiveLoadResource(
        EffectDataListManager *this,
        std::string *folderpath,
        EffectData *myEffectData)
{
  std::string *v5; // rcx
  DialogData *v6; // rax
  std::string *Myfirst; // rdx
  DialogData *v8; // rax
  std::string *v9; // rdx
  DialogData *v10; // rax
  int *v11; // rdx
  DialogData *v12; // rax
  std::string *v13; // rdx
  std::string *v14; // rdx
  DialogData *v15; // rax
  int *v16; // rdx
  DialogData *v17; // rax
  std::string *v18; // rax
  DialogData *v19; // rax
  int *v20; // rdx
  DialogData *v21; // rax
  int *v22; // rdx
  DialogData *v23; // rax
  std::string *v24; // rax
  DialogData *v25; // rax
  DialogData *v26; // rax
  std::string *v27; // rax
  DialogData *v28; // rax
  int v29; // er9
  DialogData *v30; // rax
  std::string *v31; // rax
  DialogData *v32; // rax
  DialogData *v33; // rax
  std::string *v34; // rax
  DialogData *v35; // rax
  std::string *v36; // rbx
  EffectData *v37; // r8
  EffectData *v38; // r8
  std::string v39; // [rsp+20h] [rbp-49h] BYREF
  std::string v40; // [rsp+40h] [rbp-29h] BYREF
  std::string *v41; // [rsp+60h] [rbp-9h]
  std::string *v42; // [rsp+68h] [rbp-1h]
  std::string *v43; // [rsp+70h] [rbp+7h]
  __int64 v44; // [rsp+78h] [rbp+Fh]
  std::string *v45; // [rsp+80h] [rbp+17h]
  std::string _Right; // [rsp+88h] [rbp+1Fh] BYREF

  v44 = -2i64;
  v43 = folderpath;
  v45 = folderpath;
  if ( myEffectData )
  {
    _Right._Mypair._Myval2._Myres = 15i64;
    _Right._Mypair._Myval2._Mysize = 0i64;
    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( (unsigned int)myEffectData->getEffectType(myEffectData) <= 1 )
    {
      v6 = std::vector<DialogData>::at(&myEffectData->AllDialogData, 3ui64);
      Myfirst = v6->allTextData._Mypair._Myval2._Myfirst;
      if ( !(v6->allTextData._Mypair._Myval2._Mylast - Myfirst) )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( &_Right != Myfirst )
        std::string::assign(&_Right, Myfirst, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      if ( _Right._Mypair._Myval2._Mysize )
      {
        v42 = &v40;
        v40._Mypair._Myval2._Myres = 15i64;
        v40._Mypair._Myval2._Mysize = 0i64;
        v40._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(&v40, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        v39._Mypair._Myval2._Myres = 15i64;
        v39._Mypair._Myval2._Mysize = 0i64;
        v39._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(&v39, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        EffectDataListManager::texDataLoad(this, &v39, &v40);
      }
      v8 = std::vector<DialogData>::at(&myEffectData->AllDialogData, 4ui64);
      v9 = v8->allTextData._Mypair._Myval2._Myfirst;
      if ( !(v8->allTextData._Mypair._Myval2._Mylast - v9) )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( &_Right != v9 )
        std::string::assign(&_Right, v9, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      v10 = std::vector<DialogData>::at(&myEffectData->AllDialogData, 4ui64);
      v11 = v10->allButtonIndexData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v10->allButtonIndexData._Mypair._Myval2._Mylast - v11) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( v11[2] && _Right._Mypair._Myval2._Mysize )
      {
        v41 = &v39;
        v39._Mypair._Myval2._Myres = 15i64;
        v39._Mypair._Myval2._Mysize = 0i64;
        v39._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(&v39, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        v40._Mypair._Myval2._Myres = 15i64;
        v40._Mypair._Myval2._Mysize = 0i64;
        v40._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(&v40, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        EffectDataListManager::texDataLoad(this, &v40, &v39);
      }
      v12 = std::vector<DialogData>::at(&myEffectData->AllDialogData, 3ui64);
      v13 = v12->allTextData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v12->allTextData._Mypair._Myval2._Mylast - v13) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v14 = v13 + 2;
      if ( &_Right != v14 )
        std::string::assign(&_Right, v14, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      v15 = std::vector<DialogData>::at(&myEffectData->AllDialogData, 3ui64);
      v16 = v15->allButtonIndexData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v15->allButtonIndexData._Mypair._Myval2._Mylast - v16) <= 5 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( v16[5] && _Right._Mypair._Myval2._Mysize )
      {
        v41 = &v39;
        v39._Mypair._Myval2._Myres = 15i64;
        v39._Mypair._Myval2._Mysize = 0i64;
        v39._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(&v39, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        v40._Mypair._Myval2._Myres = 15i64;
        v40._Mypair._Myval2._Mysize = 0i64;
        v40._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(&v40, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        EffectDataListManager::texDataLoad(this, &v40, &v39);
      }
      v17 = std::vector<DialogData>::at(&myEffectData->AllDialogData, 4ui64);
      v18 = std::vector<std::string>::at(&v17->allTextData, 1ui64);
      if ( &_Right != v18 )
        std::string::assign(&_Right, v18, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      v19 = std::vector<DialogData>::at(&myEffectData->AllDialogData, 4ui64);
      v20 = v19->allButtonIndexData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v19->allButtonIndexData._Mypair._Myval2._Mylast - v20) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( v20[2] )
      {
        v21 = std::vector<DialogData>::at(&myEffectData->AllDialogData, 4ui64);
        v22 = v21->allButtonIndexData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v21->allButtonIndexData._Mypair._Myval2._Mylast - v22) <= 3 )
          std::_Xout_of_range("invalid vector<T> subscript");
        if ( v22[3] && std::string::compare(&_Right, &pnewText) )
        {
          v41 = &v39;
          v39._Mypair._Myval2._Myres = 15i64;
          v39._Mypair._Myval2._Mysize = 0i64;
          v39._Mypair._Myval2._Bx._Buf[0] = 0;
          std::string::assign(&v39, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
          v40._Mypair._Myval2._Myres = 15i64;
          v40._Mypair._Myval2._Mysize = 0i64;
          v40._Mypair._Myval2._Bx._Buf[0] = 0;
          std::string::assign(&v40, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
          EffectDataListManager::texDataLoad(this, &v40, &v39);
        }
      }
      v23 = std::vector<DialogData>::at(&myEffectData->AllDialogData, 3ui64);
      v24 = std::vector<std::string>::at(&v23->allTextData, 1ui64);
      if ( &_Right != v24 )
        std::string::assign(&_Right, v24, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      v25 = std::vector<DialogData>::at(&myEffectData->AllDialogData, 2ui64);
      if ( *std::vector<int>::at(&v25->allButtonIndexData, 8ui64) && std::string::compare(&_Right, &pnewText) )
      {
        v41 = &v39;
        v39._Mypair._Myval2._Myres = 15i64;
        v39._Mypair._Myval2._Mysize = 0i64;
        v39._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(&v39, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        v40._Mypair._Myval2._Myres = 15i64;
        v40._Mypair._Myval2._Mysize = 0i64;
        v40._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(&v40, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        EffectDataListManager::texDataLoad(this, &v40, &v39);
      }
      v26 = std::vector<DialogData>::at(&myEffectData->AllDialogData, 2ui64);
      v27 = std::vector<std::string>::at(&v26->allTextData, 0i64);
      if ( &_Right != v27 )
        std::string::assign(&_Right, v27, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      v28 = std::vector<DialogData>::at(&myEffectData->AllDialogData, 2ui64);
      if ( *std::vector<int>::at(&v28->allComboIndexData, 0i64) == 4 && std::string::compare(&_Right, &pnewText) )
      {
        v41 = &v39;
        v39._Mypair._Myval2._Mysize = 0i64;
        v39._Mypair._Myval2._Myres = 0i64;
        std::string::_Tidy(&v39, 0, 0i64);
        std::string::assign(&v39, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        v40._Mypair._Myval2._Mysize = 0i64;
        v40._Mypair._Myval2._Myres = 0i64;
        std::string::_Tidy(&v40, 0, 0i64);
        std::string::assign(&v40, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        EffectDataListManager::figureDataLoad(this, &v40, &v39, v29);
      }
      v30 = std::vector<DialogData>::at(&myEffectData->AllDialogData, 0i64);
      v31 = std::vector<std::string>::at(&v30->allTextData, 1ui64);
      if ( &_Right != v31 )
        std::string::assign(&_Right, v31, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      v32 = std::vector<DialogData>::at(&myEffectData->AllDialogData, 0i64);
      if ( *std::vector<int>::at(&v32->allComboIndexData, 0i64) == 4 && std::string::compare(&_Right, &pnewText) )
      {
        v41 = &v39;
        v39._Mypair._Myval2._Mysize = 0i64;
        v39._Mypair._Myval2._Myres = 0i64;
        std::string::_Tidy(&v39, 0, 0i64);
        std::string::assign(&v39, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        v40._Mypair._Myval2._Mysize = 0i64;
        v40._Mypair._Myval2._Myres = 0i64;
        std::string::_Tidy(&v40, 0, 0i64);
        std::string::assign(&v40, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        EffectDataListManager::curveDataLoad(this, &v40, &v39);
      }
      v33 = std::vector<DialogData>::at(&myEffectData->AllDialogData, 0i64);
      v34 = std::vector<std::string>::at(&v33->allTextData, 2ui64);
      if ( &_Right != v34 )
        std::string::assign(&_Right, v34, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      v35 = std::vector<DialogData>::at(&myEffectData->AllDialogData, 0i64);
      if ( *std::vector<int>::at(&v35->allComboIndexData, 0i64) == 5 && std::string::compare(&_Right, &pnewText) )
      {
        v41 = &v39;
        v39._Mypair._Myval2._Mysize = 0i64;
        v39._Mypair._Myval2._Myres = 0i64;
        std::string::_Tidy(&v39, 0, 0i64);
        std::string::assign(&v39, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        v40._Mypair._Myval2._Mysize = 0i64;
        v40._Mypair._Myval2._Myres = 0i64;
        std::string::_Tidy(&v40, 0, 0i64);
        std::string::assign(&v40, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        myEffectData->figureIndex = EffectDataListManager::figureDataLoadToCpu(this, &v40, &v39);
      }
    }
    v41 = &v39;
    v39._Mypair._Myval2._Mysize = 0i64;
    v39._Mypair._Myval2._Myres = 0i64;
    std::string::_Tidy(&v39, 0, 0i64);
    v36 = v43;
    std::string::assign(&v39, v43, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    v37 = myEffectData->getChild(myEffectData);
    EffectDataListManager::recursiveLoadResource(this, &v39, v37);
    v41 = &v39;
    v39._Mypair._Myval2._Mysize = 0i64;
    v39._Mypair._Myval2._Myres = 0i64;
    std::string::_Tidy(&v39, 0, 0i64);
    std::string::assign(&v39, v36, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    v38 = myEffectData->getSiblingFront(myEffectData);
    EffectDataListManager::recursiveLoadResource(this, &v39, v38);
    std::string::~string(&_Right);
    v5 = v36;
  }
  else
  {
    v5 = folderpath;
  }
  std::string::~string(v5);
}

void __fastcall EffectDataListManager::recursiveRenameResourceCharaID(
        EffectDataListManager *this,
        EffectData *myEffectData)
{
  EffectData *v2; // rbx
  DialogData *Myfirst; // r8
  signed __int64 v5; // rcx
  std::string *v6; // rdx
  char *Ptr; // rcx
  char *v8; // rax
  EffectData *v9; // rax
  std::string name; // [rsp+30h] [rbp-48h] BYREF

  if ( myEffectData )
  {
    v2 = myEffectData;
    do
    {
      if ( v2->getEffectType(v2) <= 1 )
      {
        name._Mypair._Myval2._Myres = 15i64;
        name._Mypair._Myval2._Mysize = 0i64;
        name._Mypair._Myval2._Bx._Buf[0] = 0;
        Myfirst = v2->AllDialogData._Mypair._Myval2._Myfirst;
        v5 = (char *)v2->AllDialogData._Mypair._Myval2._Mylast - (char *)Myfirst;
        if ( !(v5 / 96) )
          std::_Xout_of_range("invalid vector<T> subscript");
        v6 = Myfirst->allTextData._Mypair._Myval2._Myfirst;
        if ( !(Myfirst->allTextData._Mypair._Myval2._Mylast - v6) )
          std::_Xout_of_range("invalid vector<T> subscript");
        if ( &name != v6 )
          std::string::assign(&name, v6, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        EffectDataListManager::checkName((EffectDataListManager *)v5, &name, v2);
        if ( name._Mypair._Myval2._Myres >= 0x10 )
        {
          Ptr = name._Mypair._Myval2._Bx._Ptr;
          if ( name._Mypair._Myval2._Myres + 1 >= 0x1000 )
          {
            if ( (name._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
              invalid_parameter_noinfo_noreturn();
            v8 = (char *)*((_QWORD *)name._Mypair._Myval2._Bx._Ptr - 1);
            if ( v8 >= name._Mypair._Myval2._Bx._Ptr )
              invalid_parameter_noinfo_noreturn();
            if ( (char *)(name._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
              invalid_parameter_noinfo_noreturn();
            if ( (char *)(name._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
              invalid_parameter_noinfo_noreturn();
            Ptr = (char *)*((_QWORD *)name._Mypair._Myval2._Bx._Ptr - 1);
          }
          operator delete(Ptr);
        }
      }
      v9 = v2->getChild(v2);
      EffectDataListManager::recursiveRenameResourceCharaID(this, v9);
      v2 = v2->getSiblingFront(v2);
    }
    while ( v2 );
  }
}

void __fastcall std::string::reserve(std::string *this, unsigned __int64 _Newcap)
{
  unsigned __int64 Mysize; // rsi
  std::string *Ptr; // rbx
  unsigned __int64 Myres; // rax
  bool v6; // cf
  unsigned __int64 v7; // r8

  Mysize = this->_Mypair._Myval2._Mysize;
  Ptr = this;
  if ( Mysize > _Newcap )
    return;
  Myres = this->_Mypair._Myval2._Myres;
  if ( Myres == _Newcap )
    return;
  if ( _Newcap == -1i64 )
    std::_Xlength_error("string too long");
  if ( Myres < _Newcap )
  {
    std::string::_Copy(this, _Newcap, this->_Mypair._Myval2._Mysize);
    goto LABEL_6;
  }
  if ( _Newcap < 0x10 )
  {
    v7 = this->_Mypair._Myval2._Mysize;
    if ( _Newcap < Mysize )
      v7 = _Newcap;
    std::string::_Tidy(this, 1, v7);
LABEL_6:
    if ( !_Newcap )
      return;
  }
  v6 = Ptr->_Mypair._Myval2._Myres < 0x10;
  Ptr->_Mypair._Myval2._Mysize = Mysize;
  if ( !v6 )
    Ptr = (std::string *)Ptr->_Mypair._Myval2._Bx._Ptr;
  Ptr->_Mypair._Myval2._Bx._Buf[Mysize] = 0;
}

void __fastcall EffectDataListManager::singleDataLoad(
        EffectDataListManager *this,
        std::string *filepath,
        std::istream *fin,
        int index)
{
  EffectDataListManager *v6; // rsi
  std::string *Ptr; // rcx
  std::string *i; // rdi
  char *v9; // rax
  int v10; // edi
  std::string *v11; // rcx
  std::string *j; // rbx
  char *v13; // rax
  int v14; // ebx
  int v15; // er14
  std::string *v16; // rax
  int v17; // er15
  int v18; // er8
  unsigned __int64 Myres; // rsi
  unsigned __int64 Mysize; // rdi
  char v21; // r15
  unsigned __int64 v22; // rbx
  std::string *p_Right; // rax
  std::string *v24; // rax
  std::string *v25; // rax
  unsigned __int64 m_Align; // rax
  int v27; // edi
  int v28; // ebx
  std::string *v29; // rax
  std::string *v30; // rbx
  char *v31; // rax
  char *v32; // rcx
  int v33; // er8
  EffectData *v34; // rdi
  std::string *v35; // rcx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rbx
  char v38[4]; // [rsp+20h] [rbp-E0h] BYREF
  char _Str[4]; // [rsp+24h] [rbp-DCh] BYREF
  char v40[8]; // [rsp+28h] [rbp-D8h] BYREF
  int v41; // [rsp+30h] [rbp-D0h]
  EffectDataListManager *v42; // [rsp+38h] [rbp-C8h]
  __int64 v43; // [rsp+40h] [rbp-C0h]
  EffectListNodeData v44; // [rsp+48h] [rbp-B8h] BYREF
  std::string *v45; // [rsp+78h] [rbp-88h]
  std::string _Right; // [rsp+80h] [rbp-80h] BYREF
  std::string block; // [rsp+A0h] [rbp-60h] BYREF
  std::string v48; // [rsp+C0h] [rbp-40h] BYREF
  std::string v49; // [rsp+E0h] [rbp-20h] BYREF
  std::string result; // [rsp+100h] [rbp+0h] BYREF

  v43 = -2i64;
  v6 = this;
  v42 = this;
  v45 = filepath;
  if ( filepath->_Mypair._Myval2._Mysize )
  {
    if ( filepath->_Mypair._Myval2._Myres < 0x10 )
      Ptr = filepath;
    else
      Ptr = (std::string *)filepath->_Mypair._Myval2._Bx._Ptr;
    for ( i = (std::string *)((char *)Ptr + filepath->_Mypair._Myval2._Mysize - 1);
          !memchr("/", i->_Mypair._Myval2._Bx._Buf[0], 1ui64);
          i = (std::string *)((char *)i - 1) )
    {
      if ( i == std::string::c_str(filepath) )
        goto LABEL_13;
    }
    if ( filepath->_Mypair._Myval2._Myres < 0x10 )
      LODWORD(v9) = (_DWORD)filepath;
    else
      v9 = filepath->_Mypair._Myval2._Bx._Ptr;
    v10 = (_DWORD)i - (_DWORD)v9;
  }
  else
  {
LABEL_13:
    v10 = -1;
  }
  if ( filepath->_Mypair._Myval2._Mysize )
  {
    if ( filepath->_Mypair._Myval2._Myres < 0x10 )
      v11 = filepath;
    else
      v11 = (std::string *)filepath->_Mypair._Myval2._Bx._Ptr;
    for ( j = (std::string *)((char *)v11 + filepath->_Mypair._Myval2._Mysize - 1);
          !memchr("\\", j->_Mypair._Myval2._Bx._Buf[0], 1ui64);
          j = (std::string *)((char *)j - 1) )
    {
      if ( j == std::string::c_str(filepath) )
        goto LABEL_26;
    }
    if ( filepath->_Mypair._Myval2._Myres < 0x10 )
      LODWORD(v13) = (_DWORD)filepath;
    else
      v13 = filepath->_Mypair._Myval2._Bx._Ptr;
    v14 = (_DWORD)j - (_DWORD)v13;
  }
  else
  {
LABEL_26:
    v14 = -1;
  }
  if ( v10 > v14 )
    v14 = v10;
  v49._Mypair._Myval2._Myres = 15i64;
  v15 = 0;
  v49._Mypair._Myval2._Mysize = 0i64;
  v49._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v49, filepath, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  std::string::erase(&v49, 0i64, v14 + 1);
  if ( filepath->_Mypair._Myval2._Mysize < v14 )
    std::_Xout_of_range("invalid string position");
  filepath->_Mypair._Myval2._Mysize = v14;
  if ( filepath->_Mypair._Myval2._Myres < 0x10 )
    v16 = filepath;
  else
    v16 = (std::string *)filepath->_Mypair._Myval2._Bx._Ptr;
  v16->_Mypair._Myval2._Bx._Buf[v14] = 0;
  v44.id._Mypair._Myval2._Myres = 15i64;
  v44.id._Mypair._Myval2._Mysize = 0i64;
  v44.id._Mypair._Myval2._Bx._Buf[0] = 0;
  v17 = 0;
  v41 = 0;
  do
  {
    std::istream::read(fin, _Str, 4i64);
    if ( v6->m_LittleEndian )
    {
      v18 = (*(int *)_Str >> 8) & 0xFF00 | (unsigned __int8)_Str[3] | (((*(_DWORD *)_Str << 16) | *(_WORD *)_Str & 0xFF00) << 8);
      *(_DWORD *)_Str = v18;
    }
    else
    {
      v18 = *(_DWORD *)_Str;
    }
    Myres = 15i64;
    _Right._Mypair._Myval2._Myres = 15i64;
    Mysize = 0i64;
    _Right._Mypair._Myval2._Mysize = 0i64;
    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( v18 > 0 )
    {
      while ( 1 )
      {
        std::istream::read(fin, v38, 1i64);
        v21 = v38[0];
        if ( Mysize == -1i64 || ~Mysize == 1 )
          std::_Xlength_error("string too long");
        v22 = Mysize + 1;
        if ( Mysize == -2i64 )
          std::_Xlength_error("string too long");
        if ( Myres >= v22 )
        {
          if ( Mysize != -1i64 )
            goto LABEL_48;
          _Right._Mypair._Myval2._Mysize = 0i64;
          p_Right = &_Right;
          if ( Myres >= 0x10 )
            p_Right = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
          p_Right->_Mypair._Myval2._Bx._Buf[0] = 0;
        }
        else
        {
          std::string::_Copy(&_Right, Mysize + 1, Mysize);
        }
        Mysize = _Right._Mypair._Myval2._Mysize;
        Myres = _Right._Mypair._Myval2._Myres;
        if ( v22 )
        {
LABEL_48:
          v24 = &_Right;
          if ( Myres >= 0x10 )
            v24 = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
          v24->_Mypair._Myval2._Bx._Buf[Mysize] = v21;
          _Right._Mypair._Myval2._Mysize = v22;
          v25 = &_Right;
          if ( _Right._Mypair._Myval2._Myres >= 0x10 )
            v25 = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
          v25->_Mypair._Myval2._Bx._Buf[v22] = 0;
          Myres = _Right._Mypair._Myval2._Myres;
          Mysize = _Right._Mypair._Myval2._Mysize;
        }
        ++v15;
        v18 = *(_DWORD *)_Str;
        if ( v15 >= *(int *)_Str )
        {
          v17 = v41;
          break;
        }
      }
    }
    v6 = v42;
    m_Align = v42->m_Align;
    if ( m_Align > 1 )
      LODWORD(m_Align) = m_Align - 1;
    v27 = ~(_DWORD)m_Align & (m_Align + v18);
    v15 = 0;
    v28 = 0;
    if ( v27 - v18 > 0 )
    {
      do
      {
        std::istream::read(fin, v40, 1i64);
        ++v28;
      }
      while ( v28 < v27 - *(_DWORD *)_Str );
    }
    if ( !v17 )
      std::string::assign(&v44.id, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    if ( v17 == 1 )
    {
      block._Mypair._Myval2._Myres = 15i64;
      block._Mypair._Myval2._Mysize = 0i64;
      block._Mypair._Myval2._Bx._Buf[0] = 0;
      v29 = std::operator+<char>(&result, filepath, "/");
      v30 = std::operator+<char>(&v48, v29, &_Right);
      if ( &block != v30 )
      {
        if ( block._Mypair._Myval2._Myres >= 0x10 )
        {
          v31 = block._Mypair._Myval2._Bx._Ptr;
          if ( block._Mypair._Myval2._Myres + 1 >= 0x1000 )
          {
            if ( (block._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
              invalid_parameter_noinfo_noreturn();
            v32 = (char *)*((_QWORD *)block._Mypair._Myval2._Bx._Ptr - 1);
            if ( v32 >= block._Mypair._Myval2._Bx._Ptr )
              invalid_parameter_noinfo_noreturn();
            if ( (char *)(block._Mypair._Myval2._Bx._Ptr - v32) < (char *)8 )
              invalid_parameter_noinfo_noreturn();
            if ( (char *)(block._Mypair._Myval2._Bx._Ptr - v32) > (char *)0x27 )
              invalid_parameter_noinfo_noreturn();
            v31 = (char *)*((_QWORD *)block._Mypair._Myval2._Bx._Ptr - 1);
          }
          operator delete(v31);
        }
        block._Mypair._Myval2._Myres = 15i64;
        block._Mypair._Myval2._Mysize = 0i64;
        block._Mypair._Myval2._Bx._Buf[0] = 0;
        if ( v30->_Mypair._Myval2._Myres >= 0x10 )
        {
          block._Mypair._Myval2._Bx._Ptr = v30->_Mypair._Myval2._Bx._Ptr;
          v30->_Mypair._Myval2._Bx._Ptr = 0i64;
        }
        else if ( v30->_Mypair._Myval2._Mysize != -1i64 )
        {
          memmove(&block, v30, v30->_Mypair._Myval2._Mysize + 1);
        }
        block._Mypair._Myval2._Mysize = v30->_Mypair._Myval2._Mysize;
        block._Mypair._Myval2._Myres = v30->_Mypair._Myval2._Myres;
        v30->_Mypair._Myval2._Myres = 15i64;
        v30->_Mypair._Myval2._Mysize = 0i64;
        if ( v30->_Mypair._Myval2._Myres >= 0x10 )
          v30 = (std::string *)v30->_Mypair._Myval2._Bx._Ptr;
        v30->_Mypair._Myval2._Bx._Buf[0] = 0;
      }
      if ( v48._Mypair._Myval2._Myres >= 0x10 )
        std::_Deallocate(v48._Mypair._Myval2._Bx._Ptr, v48._Mypair._Myval2._Myres + 1, 1ui64);
      v48._Mypair._Myval2._Myres = 15i64;
      v48._Mypair._Myval2._Mysize = 0i64;
      v48._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::~string(&result);
      v48._Mypair._Myval2._Myres = 15i64;
      v48._Mypair._Myval2._Mysize = 0i64;
      v48._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v48, &block, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      v34 = BinaryFileInput::input(&v6->m_BinaryFileInput, &v48, v33);
      v44.effectData = v34;
      v35 = &v49;
      if ( v49._Mypair._Myval2._Myres >= 0x10 )
        v35 = (std::string *)v49._Mypair._Myval2._Bx._Ptr;
      v36 = 10i64;
      v37 = v49._Mypair._Myval2._Mysize;
      if ( v49._Mypair._Myval2._Mysize < 0xA )
        v36 = v49._Mypair._Myval2._Mysize;
      if ( (!v36 || !memcmp(v35, "01ESK.leff", v36)) && v37 == 10 )
        EffectDataListManager::recursiveRenameResourceCharaID(v6, v34);
      std::string::~string(&block);
    }
    std::string::~string(&_Right);
    v41 = ++v17;
  }
  while ( v17 < 2 );
  std::vector<EffectListNodeData>::push_back(&v6->m_EffectDataList, &v44);
  std::string::~string(&v44.id);
  std::string::~string(&v49);
  std::string::~string(filepath);
}

void __fastcall EffectDataListManager::texDataLoad(
        EffectDataListManager *this,
        std::string *filepath,
        std::string *filename)
{
  extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> *v6; // r14
  std::string *Ptr; // rdx
  unsigned __int64 v8; // r8
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache *v9; // rcx
  char *v10; // rcx
  char *v11; // rax
  unsigned __int64 *p_Count; // rdx
  std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *p_loadTexData; // rbx
  void (__fastcall **Mylast)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // rax
  __int64 v15; // r14
  void (__fastcall **v16)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // rcx
  void (__fastcall **v17)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // rax
  unsigned __int64 _Count; // [rsp+20h] [rbp-49h] BYREF
  std::string v19; // [rsp+28h] [rbp-41h] BYREF
  __int64 v20; // [rsp+48h] [rbp-21h]
  extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> *v21; // [rsp+50h] [rbp-19h]
  std::string *v22; // [rsp+60h] [rbp-9h]
  std::string *v23; // [rsp+68h] [rbp-1h]
  std::string _Right; // [rsp+70h] [rbp+7h] BYREF

  v20 = -2i64;
  v22 = filepath;
  v23 = filename;
  LODWORD(_Count) = 0;
  if ( std::string::find(filepath, "ESK_Screen_Pic", 0i64, 0xEui64) == -1i64
    || std::string::find(filepath, "_CN.obm", 0i64, 7ui64) == -1i64 )
  {
    std::vector<std::string>::push_back(&this->loadTexPathName, filepath);
    v6 = (extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> *)operator new(0x10ui64);
    v21 = v6;
    if ( filepath->_Mypair._Myval2._Myres < 0x10 )
      Ptr = filepath;
    else
      Ptr = (std::string *)filepath->_Mypair._Myval2._Bx._Ptr;
    _Right._Mypair._Myval2._Myres = 15i64;
    _Right._Mypair._Myval2._Mysize = 0i64;
    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( Ptr->_Mypair._Myval2._Bx._Buf[0] )
    {
      v8 = -1i64;
      do
        ++v8;
      while ( Ptr->_Mypair._Myval2._Bx._Buf[v8] );
    }
    else
    {
      v8 = 0i64;
    }
    std::string::assign(&_Right, Ptr->_Mypair._Myval2._Bx._Buf, v8);
    LODWORD(_Count) = 1;
    BYTE1(v6->m_ptr) = 0;
    v19._Mypair._Myval2._Myres = 15i64;
    v19._Mypair._Myval2._Mysize = 0i64;
    v19._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v19, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache::getCachedOrLoadStart(
      v9,
      v6 + 1,
      &v19,
      0i64);
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
    {
      v10 = _Right._Mypair._Myval2._Bx._Ptr;
      if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v11 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        if ( v11 >= _Right._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v11) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v11) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v10 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v10);
    }
    _DummyLogging("load : %s\n");
    _Count = (unsigned __int64)v6;
    p_loadTexData = (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)&this->loadTexData;
    Mylast = p_loadTexData->_Mypair._Myval2._Mylast;
    if ( &_Count >= (unsigned __int64 *)Mylast
      || (p_Count = &_Count,
          p_loadTexData->_Mypair._Myval2._Myfirst > (void (__fastcall **)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *))&_Count) )
    {
      if ( Mylast == p_loadTexData->_Mypair._Myval2._Myend )
        std::vector<BattleStageEvent *>::_Reserve(p_loadTexData, (unsigned __int64)p_Count);
      v17 = p_loadTexData->_Mypair._Myval2._Mylast;
      if ( v17 )
        *v17 = (void (__fastcall *)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *))v6;
    }
    else
    {
      v15 = ((char *)&_Count - (char *)p_loadTexData->_Mypair._Myval2._Myfirst) >> 3;
      if ( Mylast == p_loadTexData->_Mypair._Myval2._Myend )
        std::vector<BattleStageEvent *>::_Reserve(p_loadTexData, (unsigned __int64)&_Count);
      v16 = p_loadTexData->_Mypair._Myval2._Mylast;
      if ( v16 )
        *v16 = p_loadTexData->_Mypair._Myval2._Myfirst[v15];
    }
    ++p_loadTexData->_Mypair._Myval2._Mylast;
  }
  std::string::~string(filepath);
  std::string::~string(filename);
}

void __fastcall EffectDataListManager::update(EffectDataListManager *this)
{
  int v1; // ebp
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  EffectListNode *Myfirst; // rcx
  EffectListNode *v6; // rcx
  EffectListNode *v7; // rdx
  EffectListNode *v8; // rcx

  v1 = 0;
  if ( this->m_EffectList._Mypair._Myval2._Mylast - this->m_EffectList._Mypair._Myval2._Myfirst )
  {
    v3 = 0i64;
    v4 = 0i64;
    do
    {
      Myfirst = this->m_EffectList._Mypair._Myval2._Myfirst;
      if ( this->m_EffectList._Mypair._Myval2._Mylast - Myfirst <= v4 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( Myfirst[v3].pEffect->m_EffectDeleteFlag )
      {
        if ( this->m_EffectList._Mypair._Myval2._Mylast - Myfirst <= v4 )
          std::_Xout_of_range("invalid vector<T> subscript");
        ++Myfirst[v3].deleteMarginCount;
        v6 = this->m_EffectList._Mypair._Myval2._Myfirst;
        if ( this->m_EffectList._Mypair._Myval2._Mylast - v6 <= v4 )
          std::_Xout_of_range("invalid vector<T> subscript");
        if ( v6[v3].deleteMarginCount > 1 )
        {
          if ( this->m_EffectList._Mypair._Myval2._Mylast - v6 <= v4 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v6[v3].pEffect->terminate(v6[v3].pEffect);
          v7 = this->m_EffectList._Mypair._Myval2._Myfirst;
          if ( this->m_EffectList._Mypair._Myval2._Mylast - v7 <= v4 )
            std::_Xout_of_range("invalid vector<T> subscript");
          EffectDataListManager::recursiveDelEffect(this, v7[v3].pEffect);
          v8 = &this->m_EffectList._Mypair._Myval2._Myfirst[v1];
          memmove(v8, &v8[1], (char *)this->m_EffectList._Mypair._Myval2._Mylast - (char *)(v8 + 1));
          --this->m_EffectList._Mypair._Myval2._Mylast;
          --v1;
          --v4;
          --v3;
        }
      }
      ++v1;
      ++v4;
      ++v3;
    }
    while ( v1 < (unsigned __int64)(this->m_EffectList._Mypair._Myval2._Mylast
                                  - this->m_EffectList._Mypair._Myval2._Myfirst) );
  }
}

