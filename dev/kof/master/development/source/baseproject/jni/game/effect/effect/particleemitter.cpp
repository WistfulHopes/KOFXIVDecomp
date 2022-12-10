#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstatecurve.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/randomnumbers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
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
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitterstate/particleemitterstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitterstate/childparticlestate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitterstate/particleemitterstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/randomnumbers.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particletypestate/particletypestatestripeinstancing.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particletypestate/particletypestateplane.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particletypestate/particletypestatefigure.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particletypestate/particletypestatefigureinstancing.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particletypestate/particletypestateplaneinstancing.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particletypestate/particletypestatedirectionalinstancing.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstateanymodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstatecurve.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E38B
ParticleEmitter::ParticleEmitter(); // 0x14013B220
ParticleEmitter::~ParticleEmitter(); // 0x14013B300
void ParticleEmitter::ownInitialize(); // 0x14013B500
void ParticleEmitter::ownTerminate(); // 0x140138A90
void ParticleEmitter::initAllEmitterState(); // 0x14013BB80
void ParticleEmitter::ownCleanup(float setAge, bool initFlag); // 0x14013BD20
void ParticleEmitter::clearLocalData(); // 0x14013BE50
void ParticleEmitter::changeState(long emitterType); // 0x14013BEE0
void ParticleEmitter::changeParticleTypeState(long particleType); // 0x14013BFC0
void ParticleEmitter::ownUpdate(bool mirrorFlag, const OGLMatrix & actMat, float frame); // 0x14013C120
void ParticleEmitter::ownPostUpdate(bool mirrorFlag, float frame); // 0x14013C200
void ParticleEmitter::generateEmitter(); // 0x14013C3C0
void ParticleEmitter::updateEmitter(bool mirrorFlag, const OGLMatrix & actMat, float frame); // 0x14013CA80
void ParticleEmitter::sortParticle(); // 0x14013D100
void ParticleEmitter::setEffectData(EffectData * effectData); // 0x14013B1D0
void ParticleEmitter::ownUpdateVertexBuffer(); // 0x14013D350
void ParticleEmitter::ownPostUpdateVertexBuffer(); // 0x14013D390
void ParticleEmitter::ownMainUpdateVertexBufferInBT(); // 0x14013D3D0
void ParticleEmitter::ownPostUpdateVertexBufferInBT(); // 0x14002E7C0
void ParticleEmitter::ownRenderSetting(); // 0x14013D3F0
void ParticleEmitter::ownRender(long renderOpt, float zOffset, long priority, EffectRenderArgument * pRenderArg); // 0x14013D410//decompilation failure at 14089E38B!
void __fastcall std::_Guess_median_unchecked<ParticleData * *,GreaterParticleData>(
        ParticleData **_First,
        ParticleData **_Mid,
        ParticleData **_Last,
        GreaterParticleData *_Pred)
{
  signed __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  ParticleData *v10; // r8
  ParticleData *v11; // r8
  ParticleData *v12; // rax
  float v13; // xmm0_4
  ParticleData *v14; // r11
  ParticleData **v15; // r8
  ParticleData *v16; // rax
  ParticleData *v17; // r11
  float v18; // xmm0_4
  ParticleData **v19; // r11
  ParticleData **v20; // r8
  ParticleData *v21; // rbx
  ParticleData *v22; // rbx
  float v23; // xmm0_4
  ParticleData *v24; // r10
  ParticleData *v25; // rax
  ParticleData *v26; // r10
  float v27; // xmm0_4
  ParticleData *v28; // rax
  ParticleData *v29; // rdx
  ParticleData *v30; // rdx
  float zSortDistance; // xmm0_4

  v6 = _Last - _First;
  if ( v6 <= 40 )
  {
    v29 = *_Mid;
    if ( v29->zSortDistance > (*_First)->zSortDistance )
    {
      *_Mid = *_First;
      *_First = v29;
    }
    v30 = *_Last;
    zSortDistance = (*_Last)->zSortDistance;
    if ( zSortDistance > (*_Mid)->zSortDistance )
    {
      *_Last = *_Mid;
      *_Mid = v30;
      if ( zSortDistance > (*_First)->zSortDistance )
      {
        *_Mid = *_First;
        *_First = v30;
      }
    }
  }
  else
  {
    v7 = (v6 + 1) / 8;
    v8 = 16 * v7;
    v9 = 8 * v7;
    v10 = _First[v7];
    if ( v10->zSortDistance > (*_First)->zSortDistance )
    {
      _First[v9 / 8] = *_First;
      *_First = v10;
    }
    v11 = _First[v8 / 8];
    v12 = _First[v9 / 8];
    v13 = v11->zSortDistance;
    if ( v13 > v12->zSortDistance )
    {
      _First[v8 / 8] = v12;
      _First[v9 / 8] = v11;
      if ( v13 > (*_First)->zSortDistance )
      {
        _First[v9 / 8] = *_First;
        *_First = v11;
      }
    }
    v14 = *_Mid;
    v15 = &_Mid[v9 / 0xFFFFFFFFFFFFFFF8ui64];
    v16 = _Mid[v9 / 0xFFFFFFFFFFFFFFF8ui64];
    if ( (*_Mid)->zSortDistance > v16->zSortDistance )
    {
      *_Mid = v16;
      *v15 = v14;
    }
    v17 = _Mid[v9 / 8];
    v18 = v17->zSortDistance;
    if ( v18 > (*_Mid)->zSortDistance )
    {
      _Mid[v9 / 8] = *_Mid;
      *_Mid = v17;
      if ( v18 > (*v15)->zSortDistance )
      {
        *_Mid = *v15;
        *v15 = v17;
      }
    }
    v19 = &_Last[v8 / 0xFFFFFFFFFFFFFFF8ui64];
    v20 = &_Last[v9 / 0xFFFFFFFFFFFFFFF8ui64];
    v21 = _Last[v9 / 0xFFFFFFFFFFFFFFF8ui64];
    if ( v21->zSortDistance > (*v19)->zSortDistance )
    {
      *v20 = *v19;
      *v19 = v21;
    }
    v22 = *_Last;
    v23 = (*_Last)->zSortDistance;
    if ( v23 > (*v20)->zSortDistance )
    {
      *_Last = *v20;
      *v20 = v22;
      if ( v23 > (*v19)->zSortDistance )
      {
        *v20 = *v19;
        *v19 = v22;
      }
    }
    v24 = *_Mid;
    v25 = _First[v9 / 8];
    if ( (*_Mid)->zSortDistance > v25->zSortDistance )
    {
      *_Mid = v25;
      _First[v9 / 8] = v24;
    }
    v26 = *v20;
    v27 = (*v20)->zSortDistance;
    if ( v27 > (*_Mid)->zSortDistance )
    {
      *v20 = *_Mid;
      *_Mid = v26;
      v28 = _First[v9 / 8];
      if ( v27 > v28->zSortDistance )
      {
        *_Mid = v28;
        _First[v9 / 8] = v26;
      }
    }
  }
}

void __fastcall std::_Insertion_sort_unchecked<ParticleData * *,GreaterParticleData>(
        ParticleData **_First,
        ParticleData **_Last,
        GreaterParticleData *_Pred)
{
  ParticleData **v4; // r14
  ParticleData **v6; // r8
  __int64 v7; // r15
  ParticleData *v8; // rbx
  ParticleData **v9; // rsi
  ParticleData **v10; // rcx
  float zSortDistance; // xmm0_4
  ParticleData *i; // rax

  if ( _First != _Last )
  {
    v4 = _First + 1;
    if ( _First + 1 != _Last )
    {
      v6 = _First;
      v7 = 8i64 - (_QWORD)_First;
      do
      {
        v8 = v6[1];
        v9 = v6 + 1;
        v10 = v6 + 1;
        zSortDistance = v8->zSortDistance;
        if ( zSortDistance <= (*_First)->zSortDistance )
        {
          for ( i = *v6; zSortDistance > i->zSortDistance; --v6 )
          {
            *v10 = i;
            v10 = v6;
            i = *(v6 - 1);
          }
          *v10 = v8;
        }
        else
        {
          memmove(v4, _First, (size_t)v6 + v7);
          *_First = v8;
        }
        v6 = v9;
      }
      while ( v9 + 1 != _Last );
    }
  }
}

void __fastcall std::_Make_heap_unchecked<ParticleData * *,GreaterParticleData>(
        ParticleData **_First,
        ParticleData **_Last,
        GreaterParticleData *_Pred)
{
  signed __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // rbx
  ParticleData *v7; // rdi
  signed __int64 v8; // r9
  __int64 i; // rdx
  __int64 v10; // rax
  float zSortDistance; // xmm1_4
  ParticleData *v12; // rcx

  v4 = _Last - _First;
  if ( v4 >= 2 )
  {
    v5 = v4 / 2;
    if ( v4 / 2 > 0 )
    {
      v6 = (v4 - 1) / 2;
      do
      {
        v7 = _First[--v5];
        v8 = v5;
        for ( i = v5; i < v6; v8 = i )
        {
          i = 2 * i + 2;
          if ( _First[i]->zSortDistance > _First[i - 1]->zSortDistance )
            --i;
          _First[v8] = _First[i];
        }
        if ( i == v6 && (v4 & 1) == 0 )
        {
          _First[v8] = _First[v4 - 1];
          v8 = v4 - 1;
        }
        v10 = (v8 - 1) / 2;
        if ( v5 < v8 )
        {
          zSortDistance = v7->zSortDistance;
          do
          {
            v12 = _First[v10];
            if ( v12->zSortDistance <= zSortDistance )
              break;
            _First[v8] = v12;
            v8 = v10;
            v10 = (v10 - 1) / 2;
          }
          while ( v5 < v8 );
        }
        _First[v8] = v7;
      }
      while ( v5 > 0 );
    }
  }
}

std::pair<ParticleData * *,ParticleData * *> *__fastcall std::_Partition_by_median_guess_unchecked<ParticleData * *,GreaterParticleData>(
        std::pair<ParticleData * *,ParticleData * *> *result,
        ParticleData **_First,
        ParticleData **_Last,
        GreaterParticleData *_Pred)
{
  ParticleData **v7; // rbx
  ParticleData **v8; // r9
  unsigned __int64 v9; // rcx
  float zSortDistance; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  ParticleData **v14; // r10
  ParticleData **v15; // r11
  ParticleData **v16; // rcx
  float v17; // xmm0_4
  float v18; // xmm1_4
  ParticleData **v19; // rax
  ParticleData *v20; // rax
  ParticleData *v21; // r8
  ParticleData **v22; // rdx
  float v23; // xmm1_4
  float v24; // xmm0_4
  ParticleData **v25; // rax
  ParticleData *v26; // rax
  float v27; // xmm0_4
  float v28; // xmm1_4
  ParticleData **v29; // rax
  ParticleData *v30; // rax
  ParticleData *v31; // r8
  ParticleData **v32; // rdx
  float v33; // xmm1_4
  float v34; // xmm0_4
  ParticleData **v35; // rax
  ParticleData *v36; // rax
  float v37; // xmm0_4
  float v38; // xmm1_4
  ParticleData **v39; // rax
  ParticleData *v40; // rax
  bool v41; // zf
  ParticleData **v42; // rcx
  float v43; // xmm0_4
  float v44; // xmm1_4
  ParticleData *v45; // rax
  ParticleData *v46; // rcx
  ParticleData **v47; // r8
  ParticleData **v48; // rdx
  ParticleData *v49; // rcx
  ParticleData *v50; // rcx
  ParticleData *v51; // rax
  ParticleData *v52; // rcx
  ParticleData *v53; // rcx
  std::pair<ParticleData * *,ParticleData * *> *v54; // rax

  v7 = &_First[(_Last - _First) / 2];
  std::_Guess_median_unchecked<ParticleData * *,GreaterParticleData>(_First, v7, _Last - 1, _Pred);
  v8 = v7 + 1;
  if ( _First < v7 )
  {
    do
    {
      v9 = (unsigned __int64)(v7 - 1);
      zSortDistance = (*(v7 - 1))->zSortDistance;
      v11 = (*v7)->zSortDistance;
      if ( zSortDistance > v11 )
        break;
      if ( v11 > zSortDistance )
        break;
      --v7;
    }
    while ( (unsigned __int64)_First < v9 );
  }
  if ( v8 < _Last )
  {
    v12 = (*v7)->zSortDistance;
    do
    {
      v13 = (*v8)->zSortDistance;
      if ( v13 > v12 )
        break;
      if ( v12 > v13 )
        break;
      ++v8;
    }
    while ( v8 < _Last );
  }
  v14 = v8;
  v15 = v7;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v14 >= _Last )
        goto LABEL_37;
      if ( (((char *)_Last - (char *)v14 + 7) & 0xFFFFFFFFFFFFFFF8ui64) >= 0x20 )
      {
        v16 = v14 + 2;
        do
        {
          v17 = (*v7)->zSortDistance;
          v18 = (*v14)->zSortDistance;
          if ( v17 <= v18 )
          {
            if ( v18 > v17 )
              goto LABEL_37;
            v19 = v8++;
            if ( v19 != v14 )
            {
              v20 = *(v8 - 1);
              *(v8 - 1) = *v14;
              *v14 = v20;
            }
          }
          v21 = *(v16 - 1);
          v22 = v16 - 1;
          v23 = v21->zSortDistance;
          v24 = (*v7)->zSortDistance;
          if ( v24 <= v23 )
          {
            if ( v23 > v24 )
            {
              ++v14;
              goto LABEL_37;
            }
            v25 = v8++;
            if ( v25 != v22 )
            {
              v26 = *(v8 - 1);
              *(v8 - 1) = v21;
              *v22 = v26;
            }
          }
          v27 = (*v7)->zSortDistance;
          v28 = (*v16)->zSortDistance;
          if ( v27 <= v28 )
          {
            if ( v28 > v27 )
            {
              v14 += 2;
              goto LABEL_37;
            }
            v29 = v8++;
            if ( v29 != v16 )
            {
              v30 = *(v8 - 1);
              *(v8 - 1) = *v16;
              *v16 = v30;
            }
          }
          v31 = v16[1];
          v32 = v16 + 1;
          v33 = v31->zSortDistance;
          v34 = (*v7)->zSortDistance;
          if ( v34 <= v33 )
          {
            if ( v33 > v34 )
            {
              v14 += 3;
              goto LABEL_37;
            }
            v35 = v8++;
            if ( v35 != v32 )
            {
              v36 = *(v8 - 1);
              *(v8 - 1) = v31;
              *v32 = v36;
            }
          }
          v14 += 4;
          v16 += 4;
        }
        while ( v14 < _Last - 3 );
      }
      for ( ; v14 < _Last; ++v14 )
      {
        v37 = (*v7)->zSortDistance;
        v38 = (*v14)->zSortDistance;
        if ( v37 <= v38 )
        {
          if ( v38 > v37 )
            break;
          v39 = v8++;
          if ( v39 != v14 )
          {
            v40 = *(v8 - 1);
            *(v8 - 1) = *v14;
            *v14 = v40;
          }
        }
      }
LABEL_37:
      v41 = v15 == _First;
      if ( v15 > _First )
      {
        v42 = v15 - 1;
        do
        {
          v43 = (*v42)->zSortDistance;
          v44 = (*v7)->zSortDistance;
          if ( v43 <= v44 )
          {
            if ( v44 > v43 )
              break;
            if ( --v7 != v42 )
            {
              v45 = *v7;
              *v7 = *v42;
              *v42 = v45;
            }
          }
          --v15;
          --v42;
        }
        while ( _First < v15 );
        v41 = v15 == _First;
      }
      if ( v41 )
        break;
      --v15;
      if ( v14 == _Last )
      {
        if ( v15 != --v7 )
        {
          v50 = *v15;
          *v15 = *v7;
          *v7 = v50;
        }
        v51 = *--v8;
        v52 = *v7;
        *v7 = v51;
        *v8 = v52;
      }
      else
      {
        v53 = *v14;
        *v14++ = *v15;
        *v15 = v53;
      }
    }
    if ( v14 == _Last )
      break;
    if ( v8 != v14 )
    {
      v46 = *v7;
      *v7 = *v8;
      *v8 = v46;
    }
    v47 = v14;
    v48 = v7;
    ++v8;
    ++v7;
    ++v14;
    v49 = *v48;
    *v48 = *v47;
    *v47 = v49;
  }
  v54 = result;
  result->first = v7;
  result->second = v8;
  return v54;
}

void __fastcall std::_Pop_heap_hole_by_index<ParticleData * *,__int64,ParticleData *,GreaterParticleData>(
        ParticleData **_First,
        __int64 _Hole,
        __int64 _Bottom,
        ParticleData **_Val)
{
  __int64 v4; // rbx
  __int64 v5; // r10
  __int64 v7; // rsi
  __int64 v8; // rax
  ParticleData *v9; // rdx

  v4 = _Hole;
  v5 = _Hole;
  v7 = (_Bottom - 1) / 2;
  if ( _Hole < v7 )
  {
    do
    {
      v4 = 2 * v4 + 2;
      if ( _First[v4]->zSortDistance > _First[v4 - 1]->zSortDistance )
        --v4;
      _First[v5] = _First[v4];
      v5 = v4;
    }
    while ( v4 < v7 );
  }
  if ( v4 == v7 && (_Bottom & 1) == 0 )
  {
    _First[v5] = _First[_Bottom - 1];
    v5 = _Bottom - 1;
  }
  v8 = (v5 - 1) / 2;
  if ( _Hole >= v5 )
  {
LABEL_11:
    _First[v5] = *_Val;
  }
  else
  {
    while ( 1 )
    {
      v9 = _First[v8];
      if ( v9->zSortDistance <= (*_Val)->zSortDistance )
        break;
      _First[v5] = v9;
      v5 = v8;
      v8 = (v8 - 1) / 2;
      if ( _Hole >= v5 )
        goto LABEL_11;
    }
    _First[v5] = *_Val;
  }
}

void __fastcall std::_Sort_heap_unchecked<ParticleData * *,GreaterParticleData>(
        ParticleData **_First,
        ParticleData **_Last,
        GreaterParticleData *_Pred)
{
  ParticleData **v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r14
  ParticleData *_Val; // [rsp+50h] [rbp+18h] BYREF

  _Val = (ParticleData *)_Pred;
  if ( _Last - _First >= 2 )
  {
    v4 = _Last - 1;
    v5 = 8i64 - (_QWORD)_First;
    v6 = -(__int64)_First;
    do
    {
      _Val = *v4;
      *v4 = *_First;
      std::_Pop_heap_hole_by_index<ParticleData * *,__int64,ParticleData *,GreaterParticleData>(
        _First,
        0i64,
        ((__int64)v4-- + v6) >> 3,
        &_Val);
    }
    while ( ((__int64)v4 + v5) >> 3 >= 2 );
  }
}

void __fastcall std::_Sort_unchecked1<ParticleData * *,__int64,GreaterParticleData>(
        ParticleData **_First,
        ParticleData **_Last,
        __int64 _Ideal,
        GreaterParticleData *_Pred)
{
  __int64 v4; // rsi
  ParticleData **first; // rbx
  __int64 v6; // rax
  ParticleData **v7; // rdi
  ParticleData **second; // rbp
  GreaterParticleData *v9; // r8
  std::pair<ParticleData * *,ParticleData * *> result; // [rsp+20h] [rbp-18h] BYREF

  v4 = _Ideal;
  first = _Last;
  v6 = _Last - _First;
  v7 = _First;
  if ( v6 <= 32 )
  {
LABEL_7:
    if ( v6 >= 2 )
      std::_Insertion_sort_unchecked<ParticleData * *,GreaterParticleData>(v7, first, (GreaterParticleData *)_Ideal);
  }
  else
  {
    while ( v4 > 0 )
    {
      std::_Partition_by_median_guess_unchecked<ParticleData * *,GreaterParticleData>(&result, v7, first, _Pred);
      second = result.second;
      v4 = v4 / 2 / 2 + v4 / 2;
      if ( (__int64)(((char *)result.first - (char *)v7) & 0xFFFFFFFFFFFFFFF8ui64) >= (__int64)(((char *)first
                                                                                               - (char *)result.second) & 0xFFFFFFFFFFFFFFF8ui64) )
      {
        std::_Sort_unchecked1<ParticleData * *,__int64,GreaterParticleData>(result.second, first, v4, _Pred);
        first = result.first;
      }
      else
      {
        std::_Sort_unchecked1<ParticleData * *,__int64,GreaterParticleData>(v7, result.first, v4, _Pred);
        v7 = second;
      }
      v6 = first - v7;
      if ( v6 <= 32 )
        goto LABEL_7;
    }
    std::_Make_heap_unchecked<ParticleData * *,GreaterParticleData>(v7, first, (GreaterParticleData *)_Ideal);
    std::_Sort_heap_unchecked<ParticleData * *,GreaterParticleData>(v7, first, v9);
  }
}

void __fastcall ParticleEmitter::ParticleEmitter(ParticleEmitter *this)
{
  Emitter::Emitter(this);
  this->__vftable = (ParticleEmitter_vtbl *)&ParticleEmitter::`vftable';
  this->pStateArray[0] = 0i64;
  this->pStateArray[1] = 0i64;
  this->pStateArray[2] = 0i64;
  this->pStateArray[3] = 0i64;
  this->pStateArray[4] = 0i64;
  this->pStateArray[5] = 0i64;
  this->pState = 0i64;
  this->pParticleTypeStateArray[0] = 0i64;
  this->pParticleTypeStateArray[1] = 0i64;
  this->pParticleTypeStateArray[2] = 0i64;
  this->pParticleTypeStateArray[3] = 0i64;
  this->pParticleTypeStateArray[4] = 0i64;
  this->pParticleTypeStateArray[5] = 0i64;
  this->pParticleTypeStateArray[6] = 0i64;
  this->pParticleTypeStateArray[7] = 0i64;
  this->pParticleTypeState = 0i64;
}

void __fastcall ParticleEmitter::~ParticleEmitter(ParticleEmitter *this)
{
  ParticleEmitterState **pStateArray; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
  ParticleTypeState **pParticleTypeStateArray; // rbx
  __int64 v6; // rsi
  EmitterFormState **m_EmitterFormState; // rbx
  ParticleData **Myfirst; // rcx
  unsigned __int64 v9; // rax
  ParticleData **v10; // rax
  unsigned __int64 v11; // rcx

  this->__vftable = (ParticleEmitter_vtbl *)&ParticleEmitter::`vftable';
  pStateArray = this->pStateArray;
  v3 = 6i64;
  v4 = 6i64;
  do
  {
    if ( *pStateArray )
    {
      ((void (__fastcall *)(ParticleEmitterState *, __int64))(*pStateArray)->~ParticleEmitterState)(*pStateArray, 1i64);
      *pStateArray = 0i64;
    }
    ++pStateArray;
    --v4;
  }
  while ( v4 );
  pParticleTypeStateArray = this->pParticleTypeStateArray;
  v6 = 8i64;
  do
  {
    if ( *pParticleTypeStateArray )
    {
      ((void (__fastcall *)(ParticleTypeState *, __int64))(*pParticleTypeStateArray)->~ParticleTypeState)(
        *pParticleTypeStateArray,
        1i64);
      *pParticleTypeStateArray = 0i64;
    }
    ++pParticleTypeStateArray;
    --v6;
  }
  while ( v6 );
  this->__vftable = (ParticleEmitter_vtbl *)&Emitter::`vftable';
  m_EmitterFormState = this->m_EmitterFormState;
  do
  {
    if ( *m_EmitterFormState )
    {
      ((void (__fastcall *)(EmitterFormState *, __int64))(*m_EmitterFormState)->~EmitterFormState)(
        *m_EmitterFormState,
        1i64);
      *m_EmitterFormState = 0i64;
    }
    ++m_EmitterFormState;
    --v3;
  }
  while ( v3 );
  this->Gravity.Emitter::__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->RotQRand.Emitter::__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  this->ParticleScale.Emitter::__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->PosRand.Emitter::__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->LocalRot.Emitter::__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  this->LocalPos.Emitter::__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->ActMat.Emitter::__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  this->LocalMat.Emitter::__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  this->WorldMat.Emitter::__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  this->WorldScale.Emitter::__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->WorldRot.Emitter::__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  this->WorldPos.Emitter::__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  Myfirst = this->m_ParticleData._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    v9 = this->m_ParticleData._Mypair._Myval2._Myend - Myfirst;
    if ( v9 > 0x1FFFFFFFFFFFFFFFi64 )
      invalid_parameter_noinfo_noreturn();
    if ( 8 * v9 >= 0x1000 )
    {
      if ( ((unsigned __int8)Myfirst & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v10 = (ParticleData **)*(Myfirst - 1);
      if ( v10 >= Myfirst )
        invalid_parameter_noinfo_noreturn();
      v11 = (char *)Myfirst - (char *)v10;
      if ( v11 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v11 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      Myfirst = v10;
    }
    operator delete(Myfirst);
    this->m_ParticleData._Mypair._Myval2._Myfirst = 0i64;
    this->m_ParticleData._Mypair._Myval2._Mylast = 0i64;
    this->m_ParticleData._Mypair._Myval2._Myend = 0i64;
  }
  this->__vftable = (ParticleEmitter_vtbl *)&Effect::`vftable';
  this->m_RandomNumbers.Emitter::Effect::__vftable = (RandomNumbers_vtbl *)&RandomNumbers::`vftable';
}

void __fastcall ParticleEmitter::changeParticleTypeState(ParticleEmitter *this, int particleType)
{
  ParticleTypeStateStripe *v3; // rbx
  ParticleTypeState *v4; // rcx
  ParticleTypeState *v5; // rcx
  ParticleTypeState *v6; // rcx
  ParticleTypeState *v7; // [rsp+40h] [rbp+18h]
  ParticleTypeState *v8; // [rsp+40h] [rbp+18h]
  ParticleTypeState *v9; // [rsp+40h] [rbp+18h]

  if ( particleType >= 0 )
  {
    if ( particleType <= 2 )
    {
      if ( !this->pParticleTypeStateArray[0] )
      {
        v9 = (ParticleTypeState *)operator new(0x488ui64);
        ParticleTypeState::ParticleTypeState(v9);
        v6->__vftable = (ParticleTypeState_vtbl *)&ParticleTypeStatePlaneInstancing::`vftable';
        this->pParticleTypeStateArray[0] = v6;
      }
      this->pParticleTypeState = this->pParticleTypeStateArray[0];
    }
    else
    {
      switch ( particleType )
      {
        case 3:
          if ( !this->pParticleTypeStateArray[3] )
          {
            v8 = (ParticleTypeState *)operator new(0x488ui64);
            ParticleTypeState::ParticleTypeState(v8);
            v5->__vftable = (ParticleTypeState_vtbl *)&ParticleTypeStateDirectionalInstancing::`vftable';
            this->pParticleTypeStateArray[3] = v5;
          }
          this->pParticleTypeState = this->pParticleTypeStateArray[3];
          break;
        case 4:
          if ( !this->pParticleTypeStateArray[4] )
          {
            v7 = (ParticleTypeState *)operator new(0x488ui64);
            ParticleTypeState::ParticleTypeState(v7);
            v4->__vftable = (ParticleTypeState_vtbl *)&ParticleTypeStateFigureInstancing::`vftable';
            this->pParticleTypeStateArray[4] = v4;
          }
          this->pParticleTypeState = this->pParticleTypeStateArray[4];
          break;
        case 5:
          if ( !this->pParticleTypeStateArray[5] )
          {
            v3 = (ParticleTypeStateStripe *)operator new(0x4C8ui64);
            ParticleTypeStateStripe::ParticleTypeStateStripe(v3);
            v3->__vftable = (ParticleTypeStateStripe_vtbl *)&ParticleTypeStateStripeInstancing::`vftable';
            this->pParticleTypeStateArray[5] = v3;
          }
          this->pParticleTypeState = this->pParticleTypeStateArray[5];
          break;
      }
    }
  }
}

void __fastcall ParticleEmitter::changeState(ParticleEmitter *this, int emitterType)
{
  ParticleEmitterState *v3; // rax
  ParticleEmitterState *v4; // [rsp+50h] [rbp+18h]
  ParticleEmitterState *v5; // [rsp+50h] [rbp+18h]

  if ( emitterType )
  {
    if ( emitterType != 1 )
      return;
    if ( !this->pStateArray[1] )
    {
      v4 = (ParticleEmitterState *)operator new(0x28ui64);
      v4->__vftable = (ParticleEmitterState_vtbl *)&ChildParticleState::`vftable';
      v4->pParticleEmitter = this;
      v4->pSettingData = this->getSettingData(this);
      v4->pRandomNumbers = &this->m_RandomNumbers;
      this->pStateArray[1] = v4;
    }
    v3 = this->pStateArray[1];
  }
  else
  {
    if ( !this->pStateArray[0] )
    {
      v5 = (ParticleEmitterState *)operator new(0x28ui64);
      v5->__vftable = (ParticleEmitterState_vtbl *)&ParticleEmitterState::`vftable';
      v5->pParticleEmitter = this;
      v5->pSettingData = this->getSettingData(this);
      v5->pRandomNumbers = &this->m_RandomNumbers;
      this->pStateArray[0] = v5;
    }
    v3 = this->pStateArray[0];
  }
  this->pState = v3;
}

void __fastcall ParticleEmitter::clearLocalData(ParticleEmitter *this)
{
  int v1; // er9
  unsigned __int64 v2; // rdx
  ParticleData **Myfirst; // r8
  ParticleData *v4; // rax

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
      ++v1;
      ++v2;
      *(_QWORD *)&v4->ForceFieldVel.x = 0i64;
      v4->ForceFieldVel.z = 0.0;
    }
    while ( v1 < (int)(this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst) );
  }
}

void __fastcall ParticleEmitter::generateEmitter(ParticleEmitter *this)
{
  DialogData *Myfirst; // rcx
  EffectData *m_SettingData; // rdx
  DialogData *v4; // rcx
  DialogData *v5; // rcx
  DialogData *v6; // rcx
  float *v7; // rbx
  float v8; // xmm7_4
  float v9; // xmm0_4
  EffectData *v10; // rdx
  DialogData *v11; // rcx
  float *v12; // r8
  float v13; // xmm3_4
  float v14; // xmm2_4
  EffectData *v15; // r9
  float *v16; // rdx
  DialogData *v17; // rcx
  float *v18; // r8
  float v19; // xmm2_4
  float v20; // xmm1_4
  float *v21; // r9
  float v22; // xmm2_4
  float v23; // xmm1_4
  DialogData *v24; // rcx
  DialogData *v25; // rcx
  float v26; // xmm1_4
  float v27; // xmm2_4
  __m128 *v28; // rax
  OGLQuat *v29; // rdx
  OGLQuat *v30; // rcx
  DialogData *v31; // rcx
  __m128 v32; // xmm1
  EmitterFormState *m_pEmitterFormState; // rdx
  DialogData *v34; // rcx
  DialogData *v35; // rcx
  DialogData *v36; // rcx
  DialogData *v37; // rcx
  OGLVec4 v38; // [rsp+28h] [rbp-69h] BYREF
  float v39; // [rsp+38h] [rbp-59h]
  void **v40; // [rsp+48h] [rbp-49h]
  OGLVec4 v41; // [rsp+50h] [rbp-41h]
  void **v42; // [rsp+68h] [rbp-29h]
  float v43; // [rsp+70h] [rbp-21h]
  float v44; // [rsp+74h] [rbp-1Dh]
  float v45; // [rsp+78h] [rbp-19h]
  Tween::EasingType v46; // [rsp+7Ch] [rbp-15h]
  void **v47; // [rsp+88h] [rbp-9h]
  float v48; // [rsp+90h] [rbp-1h]
  float v49; // [rsp+94h] [rbp+3h]
  float v50; // [rsp+98h] [rbp+7h]
  __int64 v51; // [rsp+A0h] [rbp+Fh]
  OGLVec4 v52[4]; // [rsp+A8h] [rbp+17h] BYREF

  v51 = -2i64;
  Myfirst = this->m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst->allComboIndexData._Mypair._Myval2._Mylast - Myfirst->allComboIndexData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  this->m_EmitterFormType = *Myfirst->allComboIndexData._Mypair._Myval2._Myfirst;
  this->initAllEmitterState(this);
  m_SettingData = this->m_SettingData;
  v4 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(v4->allComboIndexData._Mypair._Myval2._Mylast - v4->allComboIndexData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  this->m_pEmitterFormState = this->m_EmitterFormState[*v4->allComboIndexData._Mypair._Myval2._Myfirst];
  v5 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v5[1].allEditNumData._Mypair._Myval2._Mylast - v5[1].allEditNumData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  this->emitVolume = (int)v5[1].allEditNumData._Mypair._Myval2._Myfirst[2];
  v6 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v6[1].allEditNumData._Mypair._Myval2._Mylast - v6[1].allEditNumData._Mypair._Myval2._Myfirst) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v7 = v6[1].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v6[1].allEditNumData._Mypair._Myval2._Mylast - v7) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v8 = v6[1].allEditNumData._Mypair._Myval2._Myfirst[4];
  if ( v8 == 0.0 )
    v9 = 0.0;
  else
    v9 = (float)((float)((float)rand() / 32767.0) * (float)(v8 - COERCE_FLOAT(LODWORD(v8) ^ _xmm)))
       + COERCE_FLOAT(LODWORD(v8) ^ _xmm);
  this->intervalLimitTime = (int)v7[3] + (int)v9;
  v10 = this->m_SettingData;
  v11 = v10->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v11->allEditNumData._Mypair._Myval2._Mylast - v11->allEditNumData._Mypair._Myval2._Myfirst) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v12 = v11->allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v11->allEditNumData._Mypair._Myval2._Mylast - v11->allEditNumData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( (unsigned __int64)(v11->allEditNumData._Mypair._Myval2._Mylast - v12) <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v13 = v12[3];
  v14 = v12[2];
  v43 = v12[1];
  v44 = v14;
  v45 = v13;
  v46 = FLOAT_1_0;
  v42 = &OGLEffectVec4::`vftable';
  this->WorldScale.x = v43;
  this->WorldScale.y = v14;
  this->WorldScale.z = v13;
  v15 = v10;
  if ( (unsigned __int64)(v11->allEditNumData._Mypair._Myval2._Mylast - v11->allEditNumData._Mypair._Myval2._Myfirst) <= 0xC )
    std::_Xout_of_range("invalid vector<T> subscript");
  v16 = v11->allEditNumData._Mypair._Myval2._Myfirst;
  v17 = v15->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v17->allEditNumData._Mypair._Myval2._Mylast - v17->allEditNumData._Mypair._Myval2._Myfirst) <= 0xB )
    std::_Xout_of_range("invalid vector<T> subscript");
  v18 = v17->allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v17->allEditNumData._Mypair._Myval2._Mylast - v17->allEditNumData._Mypair._Myval2._Myfirst) <= 0xA )
    std::_Xout_of_range("invalid vector<T> subscript");
  v19 = v16[12];
  v20 = v18[11];
  this->LocalPos.x = v18[10];
  this->LocalPos.y = v20;
  this->LocalPos.z = v19;
  if ( (unsigned __int64)(v17->allEditNumData._Mypair._Myval2._Mylast - v18) <= 0xF )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( (unsigned __int64)(v17->allEditNumData._Mypair._Myval2._Mylast - v17->allEditNumData._Mypair._Myval2._Myfirst) <= 0xE )
    std::_Xout_of_range("invalid vector<T> subscript");
  v21 = v17->allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v17->allEditNumData._Mypair._Myval2._Mylast - v17->allEditNumData._Mypair._Myval2._Myfirst) <= 0xD )
    std::_Xout_of_range("invalid vector<T> subscript");
  v22 = v18[15];
  v23 = v21[14];
  v48 = v21[13];
  v49 = v23;
  v50 = v22;
  v47 = &OGLEffectVec3::`vftable';
  v38.x = v48;
  v38.y = v23;
  v38.z = v22;
  this->PosRand.OGLVec3 = *RandomNumbers::widthUniformrandomNumbers(
                             (RandomNumbers *)v17,
                             (OGLVec3 *)v52,
                             (OGLVec3 *)&v38);
  v24 = this->m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v24->allEditNumData._Mypair._Myval2._Mylast - v24->allEditNumData._Mypair._Myval2._Myfirst) <= 6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( (unsigned __int64)(v24->allEditNumData._Mypair._Myval2._Mylast - v24->allEditNumData._Mypair._Myval2._Myfirst) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( (unsigned __int64)(v24->allEditNumData._Mypair._Myval2._Mylast - v24->allEditNumData._Mypair._Myval2._Myfirst) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  OGLEffectQuat::setRotateEuler(
    &this->LocalRot,
    (float)(v24->allEditNumData._Mypair._Myval2._Myfirst[4] * 3.1415927) / 180.0,
    (float)(v24->allEditNumData._Mypair._Myval2._Myfirst[5] * 3.1415927) / 180.0,
    (float)(v24->allEditNumData._Mypair._Myval2._Myfirst[6] * 3.1415927) / 180.0);
  v25 = this->m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v25->allEditNumData._Mypair._Myval2._Mylast - v25->allEditNumData._Mypair._Myval2._Myfirst) <= 9 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v26 = (float)(v25->allEditNumData._Mypair._Myval2._Myfirst[9] * 3.1415927) / 180.0;
  if ( (unsigned __int64)(v25->allEditNumData._Mypair._Myval2._Mylast - v25->allEditNumData._Mypair._Myval2._Myfirst) <= 8 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v27 = (float)(v25->allEditNumData._Mypair._Myval2._Myfirst[8] * 3.1415927) / 180.0;
  if ( (unsigned __int64)(v25->allEditNumData._Mypair._Myval2._Mylast - v25->allEditNumData._Mypair._Myval2._Myfirst) <= 7 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v41.x = (float)(v25->allEditNumData._Mypair._Myval2._Myfirst[7] * 3.1415927) / 180.0;
  v41.y = v27;
  *(_QWORD *)&v41.z = LODWORD(v26);
  v40 = &OGLEffectVec4::`vftable';
  v38 = v41;
  v28 = (__m128 *)RandomNumbers::widthUniformrandomNumbers((RandomNumbers *)v25, v52, &v38);
  OGLEffectQuat::setRotateEuler(
    &this->RotQRand,
    COERCE_FLOAT(*v28),
    _mm_shuffle_ps(*v28, *v28, 85).m128_f32[0],
    _mm_shuffle_ps(*v28, *v28, 170).m128_f32[0]);
  v29 = &this->RotQRand.OGLQuat;
  if ( this == (ParticleEmitter *)-3504i64 )
    v29 = 0i64;
  OGLQuat::multiply(&this->LocalRot.OGLQuat, v29);
  OGLQuat::normalize(v30);
  v31 = this->m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v31[1].allEditNumData._Mypair._Myval2._Mylast - v31[1].allEditNumData._Mypair._Myval2._Myfirst) <= 0x10 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v32 = (__m128)*((unsigned int *)v31[1].allEditNumData._Mypair._Myval2._Myfirst + 16);
  v39 = 0.0;
  *(_QWORD *)&this->Gravity.x = _mm_unpacklo_ps((__m128)0i64, v32).m128_u64[0];
  this->Gravity.z = v39;
  if ( this->m_EmitterFormType == 4 )
  {
    m_pEmitterFormState = this->m_pEmitterFormState;
    if ( m_pEmitterFormState )
    {
      v34 = this->m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v34->allEditNumData._Mypair._Myval2._Mylast - v34->allEditNumData._Mypair._Myval2._Myfirst) <= 0x10 )
        std::_Xout_of_range("invalid vector<T> subscript");
      *((float *)&m_pEmitterFormState[5].__vftable + 1) = (float)SHIDWORD(m_pEmitterFormState[4].__vftable)
                                                        * (float)(v34->allEditNumData._Mypair._Myval2._Myfirst[16]
                                                                / 100.0);
      v35 = this->m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v35->allEditNumData._Mypair._Myval2._Mylast - v35->allEditNumData._Mypair._Myval2._Myfirst) <= 0x11 )
        std::_Xout_of_range("invalid vector<T> subscript");
      HIDWORD(m_pEmitterFormState[6].__vftable) = *((_DWORD *)v35->allEditNumData._Mypair._Myval2._Myfirst + 17);
      v36 = this->m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v36->allButtonIndexData._Mypair._Myval2._Mylast
                            - v36->allButtonIndexData._Mypair._Myval2._Myfirst) <= 5 )
        std::_Xout_of_range("invalid vector<T> subscript");
      LOBYTE(m_pEmitterFormState[4].__vftable) = v36->allButtonIndexData._Mypair._Myval2._Myfirst[5] == 0;
      v37 = this->m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
      if ( !(v37[1].allEditNumData._Mypair._Myval2._Mylast - v37[1].allEditNumData._Mypair._Myval2._Myfirst) )
        std::_Xout_of_range("invalid vector<T> subscript");
      HIDWORD(m_pEmitterFormState[7].__vftable) = (int)*v37[1].allEditNumData._Mypair._Myval2._Myfirst;
    }
  }
}

void __fastcall ParticleEmitter::initAllEmitterState(ParticleEmitter *this)
{
  int v2; // ecx
  void *v3; // rbx
  void *v4; // rcx
  EffectDataListManager *m_pEffectDataListManager; // r8
  unsigned __int64 figureIndex; // rcx
  void **Myfirst; // rdx
  DialogData *v8; // rax
  std::string *v9; // rdx
  std::string *Ptr; // rdx
  char *v11; // [rsp+40h] [rbp+8h]

  v2 = this->m_EmitterFormType - 4;
  if ( v2 )
  {
    if ( v2 == 1 && !this->m_EmitterFormState[5] )
    {
      v3 = operator new(0x20ui64);
      *(_QWORD *)v3 = &EmitterFormStateAnyModel::`vftable';
      *((_BYTE *)v3 + 17) = 0;
      extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::GetSharedEmpty(
        (extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> *)v3
      + 3);
      v4 = 0i64;
      *((_QWORD *)v3 + 1) = 0i64;
      this->m_EmitterFormState[5] = (EmitterFormState *)v3;
      m_pEffectDataListManager = this->m_pEffectDataListManager;
      if ( this->m_SettingData->figureIndex <= (int)(m_pEffectDataListManager->loadCpuFigureData._Mypair._Myval2._Mylast
                                                   - m_pEffectDataListManager->loadCpuFigureData._Mypair._Myval2._Myfirst) )
      {
        figureIndex = this->m_SettingData->figureIndex;
        Myfirst = m_pEffectDataListManager->loadCpuFigureData._Mypair._Myval2._Myfirst;
        if ( m_pEffectDataListManager->loadCpuFigureData._Mypair._Myval2._Mylast - Myfirst <= figureIndex )
          std::_Xout_of_range("invalid vector<T> subscript");
        v4 = Myfirst[figureIndex];
      }
      (*(void (__fastcall **)(void *, void *))(*(_QWORD *)v3 + 32i64))(v3, v4);
    }
  }
  else if ( !this->m_EmitterFormState[4] )
  {
    v11 = (char *)operator new(0x40ui64);
    *(_QWORD *)v11 = &EmitterFormStateCurve::`vftable';
    v11[17] = 0;
    extension::BasicFutureObject<OGLCurve,void>::Body::GetSharedEmpty((extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> *)v11 + 3);
    *((_QWORD *)v11 + 1) = 0i64;
    *(_QWORD *)(v11 + 36) = 0i64;
    *(_QWORD *)(v11 + 44) = 0i64;
    *((_DWORD *)v11 + 15) = 0;
    v11[32] = 0;
    this->m_EmitterFormState[4] = (EmitterFormState *)v11;
    v8 = std::vector<DialogData>::at(&this->m_SettingData->AllDialogData, 0i64);
    v9 = v8->allTextData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v8->allTextData._Mypair._Myval2._Mylast - v9) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    Ptr = v9 + 1;
    if ( Ptr->_Mypair._Myval2._Myres >= 0x10 )
      Ptr = (std::string *)Ptr->_Mypair._Myval2._Bx._Ptr;
    this->m_EmitterFormState[4]->LoadFigureData(this->m_EmitterFormState[4], (const char *)Ptr);
  }
}

void __fastcall ParticleEmitter::ownCleanup(ParticleEmitter *this, float setAge, bool initFlag)
{
  int v4; // esi
  unsigned __int64 v5; // rdi
  ParticleData **Myfirst; // rdx
  ParticleData **v7; // rcx
  EmitterFormState *m_pEmitterFormState; // rcx

  this->age = setAge;
  if ( initFlag )
  {
    v4 = 0;
    if ( this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst )
    {
      v5 = 0i64;
      do
      {
        Myfirst = this->m_ParticleData._Mypair._Myval2._Myfirst;
        if ( this->m_ParticleData._Mypair._Myval2._Mylast - Myfirst <= v5 )
          std::_Xout_of_range("invalid vector<T> subscript");
        EffectTaskManager::deleteParticlePtr(
          *(EffectTaskManager **)(*(_QWORD *)&AppMain::pApp + 2507504i64),
          Myfirst[v5]);
        v7 = this->m_ParticleData._Mypair._Myval2._Myfirst;
        if ( this->m_ParticleData._Mypair._Myval2._Mylast - v7 <= v5 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v7[v5] = 0i64;
        ++v4;
        ++v5;
      }
      while ( v4 < (unsigned __int64)(this->m_ParticleData._Mypair._Myval2._Mylast
                                    - this->m_ParticleData._Mypair._Myval2._Myfirst) );
    }
    this->m_ParticleData._Mypair._Myval2._Mylast = this->m_ParticleData._Mypair._Myval2._Myfirst;
    this->intervalTime = 999.0;
  }
  m_pEmitterFormState = this->m_pEmitterFormState;
  if ( m_pEmitterFormState )
  {
    if ( this->m_EmitterFormType >= 4 )
      m_pEmitterFormState->cleanup(m_pEmitterFormState);
  }
}

void __fastcall ParticleEmitter::ownInitialize(ParticleEmitter *this)
{
  ParticleEmitter_vtbl *v2; // rax
  DialogData *Myfirst; // rcx
  ParticleEmitter_vtbl *v4; // rax
  EffectData *m_SettingData; // r8
  DialogData *v6; // rcx
  std::string *Ptr; // rdx
  EffectData *v8; // r8
  DialogData *v9; // rcx
  std::string *v10; // rdx
  EffectData *v11; // r8
  DialogData *v12; // rcx
  DialogData *v13; // rcx
  std::string *v14; // rdx
  EffectData *v15; // r8
  DialogData *v16; // rcx
  DialogData *v17; // rdx
  __int64 v18; // rdx
  EffectData *v19; // r8
  DialogData *v20; // rcx
  DialogData *v21; // rdx
  __int64 v22; // rdx
  EffectData *v23; // r8
  DialogData *v24; // rcx
  DialogData *v25; // rdx
  __int64 v26; // rdx
  ParticleEmitterState *pState; // rcx
  EffectData *v28; // rax

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
  this->m_ParticleType = 0;
  this->m_pEmitterFormState = 0i64;
  this->accumulateEmitVolume = 0.0;
  this->m_IDCount = 0;
  v2 = this->__vftable;
  *(_WORD *)&this->m_EffectDeleteFlag = 256;
  this->intervalTime = 999.0;
  this->renderFlag = 1;
  ((void (*)(void))v2->generateEmitter)();
  Myfirst = this->m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[2].allComboIndexData._Mypair._Myval2._Mylast - Myfirst[2].allComboIndexData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  v4 = this->__vftable;
  this->m_ParticleType = *Myfirst[2].allComboIndexData._Mypair._Myval2._Myfirst;
  ((void (__fastcall *)(ParticleEmitter *))v4->changeParticleTypeState)(this);
  this->pParticleTypeState->setEmitterAndData(this->pParticleTypeState, this, this->m_SettingData);
  this->pParticleTypeState->initialize(this->pParticleTypeState);
  m_SettingData = this->m_SettingData;
  if ( (unsigned __int64)(m_SettingData->AllDialogData._Mypair._Myval2._Mylast
                        - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v6 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(v6[2].allTextData._Mypair._Myval2._Mylast - v6[2].allTextData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  Ptr = v6[2].allTextData._Mypair._Myval2._Myfirst;
  if ( Ptr->_Mypair._Myval2._Myres >= 0x10 )
    Ptr = (std::string *)Ptr->_Mypair._Myval2._Bx._Ptr;
  this->pParticleTypeState->loadFigure(this->pParticleTypeState, (const char *)Ptr);
  v8 = this->m_SettingData;
  if ( (unsigned __int64)(v8->AllDialogData._Mypair._Myval2._Mylast - v8->AllDialogData._Mypair._Myval2._Myfirst) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v9 = v8->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(v9[3].allTextData._Mypair._Myval2._Mylast - v9[3].allTextData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  v10 = v9[3].allTextData._Mypair._Myval2._Myfirst;
  if ( v10->_Mypair._Myval2._Myres >= 0x10 )
    v10 = (std::string *)v10->_Mypair._Myval2._Bx._Ptr;
  this->pParticleTypeState->loadTexture(this->pParticleTypeState, (const char *)v10, COLOR1_TEXTURE);
  v11 = this->m_SettingData;
  if ( (unsigned __int64)(v11->AllDialogData._Mypair._Myval2._Mylast - v11->AllDialogData._Mypair._Myval2._Myfirst) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v12 = v11->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v12[4].allButtonIndexData._Mypair._Myval2._Mylast
                        - v12[4].allButtonIndexData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v12[4].allButtonIndexData._Mypair._Myval2._Myfirst[2] )
  {
    if ( (unsigned __int64)(v11->AllDialogData._Mypair._Myval2._Mylast - v11->AllDialogData._Mypair._Myval2._Myfirst) <= 4 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v13 = v11->AllDialogData._Mypair._Myval2._Myfirst;
    if ( !(v13[4].allTextData._Mypair._Myval2._Mylast - v13[4].allTextData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v14 = v13[4].allTextData._Mypair._Myval2._Myfirst;
    if ( v14->_Mypair._Myval2._Myres >= 0x10 )
      v14 = (std::string *)v14->_Mypair._Myval2._Bx._Ptr;
    this->pParticleTypeState->loadTexture(this->pParticleTypeState, (const char *)v14, COLOR2_TEXTURE);
  }
  v15 = this->m_SettingData;
  if ( (unsigned __int64)(v15->AllDialogData._Mypair._Myval2._Mylast - v15->AllDialogData._Mypair._Myval2._Myfirst) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v16 = v15->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v16[3].allButtonIndexData._Mypair._Myval2._Mylast
                        - v16[3].allButtonIndexData._Mypair._Myval2._Myfirst) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v16[3].allButtonIndexData._Mypair._Myval2._Myfirst[5] )
  {
    if ( (unsigned __int64)(v15->AllDialogData._Mypair._Myval2._Mylast - v15->AllDialogData._Mypair._Myval2._Myfirst) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v17 = v15->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v17[3].allTextData._Mypair._Myval2._Mylast - v17[3].allTextData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v18 = (__int64)&v17[3].allTextData._Mypair._Myval2._Myfirst[2];
    if ( *(_QWORD *)(v18 + 24) >= 0x10ui64 )
      v18 = *(_QWORD *)v18;
    this->pParticleTypeState->loadTexture(this->pParticleTypeState, (const char *)v18, ALPHA1_TEXTURE);
  }
  v19 = this->m_SettingData;
  if ( (unsigned __int64)(v19->AllDialogData._Mypair._Myval2._Mylast - v19->AllDialogData._Mypair._Myval2._Myfirst) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v20 = v19->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v20[4].allButtonIndexData._Mypair._Myval2._Mylast
                        - v20[4].allButtonIndexData._Mypair._Myval2._Myfirst) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v20[4].allButtonIndexData._Mypair._Myval2._Myfirst[3] )
  {
    if ( (unsigned __int64)(v19->AllDialogData._Mypair._Myval2._Mylast - v19->AllDialogData._Mypair._Myval2._Myfirst) <= 4 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v21 = v19->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v21[4].allTextData._Mypair._Myval2._Mylast - v21[4].allTextData._Mypair._Myval2._Myfirst) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v22 = (__int64)&v21[4].allTextData._Mypair._Myval2._Myfirst[1];
    if ( *(_QWORD *)(v22 + 24) >= 0x10ui64 )
      v22 = *(_QWORD *)v22;
    this->pParticleTypeState->loadTexture(this->pParticleTypeState, (const char *)v22, ALPHA2_TEXTURE);
  }
  this->pParticleTypeState->loadAppTexture(this->pParticleTypeState);
  v23 = this->m_SettingData;
  if ( (unsigned __int64)(v23->AllDialogData._Mypair._Myval2._Mylast - v23->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v24 = v23->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v24[2].allButtonIndexData._Mypair._Myval2._Mylast
                        - v24[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 8 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v24[2].allButtonIndexData._Mypair._Myval2._Myfirst[8] )
  {
    if ( (unsigned __int64)(v23->AllDialogData._Mypair._Myval2._Mylast - v23->AllDialogData._Mypair._Myval2._Myfirst) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v25 = v23->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v25[3].allTextData._Mypair._Myval2._Mylast - v25[3].allTextData._Mypair._Myval2._Myfirst) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v26 = (__int64)&v25[3].allTextData._Mypair._Myval2._Myfirst[1];
    if ( *(_QWORD *)(v26 + 24) >= 0x10ui64 )
      v26 = *(_QWORD *)v26;
    this->pParticleTypeState->loadTexture(this->pParticleTypeState, (const char *)v26, NORMAL_TEXTURE);
  }
  pState = this->pState;
  if ( pState )
    pState->generateEmitter(pState);
  v28 = this->m_SettingData;
  this->m_UpdateArg.pParticleDataVec = &this->m_ParticleData;
  this->m_UpdateBufferArg.pParticleDataVec = &this->m_ParticleData;
  this->m_UpdateBufferArg.pEffectData = v28;
  this->m_RenderArg.pParticleDataVec = &this->m_ParticleData;
  this->m_RenderArg.pEffectData = v28;
}

void __fastcall ParticleEmitter::ownMainUpdateVertexBufferInBT(ParticleEmitter *this)
{
  this->pParticleTypeState->UpdateVertexBufferInBT(this->pParticleTypeState, &this->m_UpdateBufferArg);
}

void __fastcall ParticleEmitter::ownPostUpdate(ParticleEmitter *this, bool mirrorFlag, float frame)
{
  ParticleEmitter *v3; // r8
  float *v4; // r11
  unsigned __int64 v5; // r9
  float v6; // xmm4_4
  ParticleData **Myfirst; // rcx
  ParticleData *v8; // rdx
  bool v9; // zf
  float *p_x; // rdx
  ParticleData *v11; // rcx
  ParticleData **v12; // rcx
  OGLEffectVec3 *v13; // rax
  unsigned __int64 v14; // r9
  int v15; // er10
  float *v16; // rcx
  ParticleData **v17; // rdx
  float *p_ForceFieldPos; // rax
  OGLEffectVec3 result; // [rsp+28h] [rbp-20h] BYREF

  v3 = this;
  if ( this->pState )
  {
    v4 = 0i64;
    if ( (int)(this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst) > 0 )
    {
      v5 = 0i64;
      v6 = 0.0;
      do
      {
        if ( frame != v6 )
        {
          Myfirst = v3->m_ParticleData._Mypair._Myval2._Myfirst;
          if ( v3->m_ParticleData._Mypair._Myval2._Mylast - Myfirst <= v5 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v8 = Myfirst[v5];
          v9 = &v8->ForceFieldPos == 0i64;
          p_x = &v8->ForceFieldPos.x;
          if ( v9 )
            p_x = v4;
          if ( v3->m_ParticleData._Mypair._Myval2._Mylast - Myfirst <= v5 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v11 = Myfirst[v5];
          v11->PreForceFieldPos.x = *p_x;
          v11->PreForceFieldPos.y = p_x[1];
          v11->PreForceFieldPos.z = p_x[2];
        }
        v12 = v3->m_ParticleData._Mypair._Myval2._Myfirst;
        if ( v3->m_ParticleData._Mypair._Myval2._Mylast - v12 <= v5 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v13 = OGLEffectVec3::operator*(&v12[v5]->ForceFieldVel, &result, frame);
        v16 = &v13->x;
        if ( !v13 )
          v16 = v4;
        v17 = v3->m_ParticleData._Mypair._Myval2._Myfirst;
        if ( v3->m_ParticleData._Mypair._Myval2._Mylast - v17 <= v14 )
          std::_Xout_of_range("invalid vector<T> subscript");
        p_ForceFieldPos = (float *)&v17[v14]->ForceFieldPos;
        p_ForceFieldPos[2] = p_ForceFieldPos[2] + *v16;
        p_ForceFieldPos[3] = v16[1] + p_ForceFieldPos[3];
        p_ForceFieldPos[4] = v16[2] + p_ForceFieldPos[4];
        v5 = v14 + 1;
      }
      while ( v15 + 1 < (int)(v3->m_ParticleData._Mypair._Myval2._Mylast - v3->m_ParticleData._Mypair._Myval2._Myfirst) );
    }
    v3->pParticleTypeState->allocateVertexMemory(v3->pParticleTypeState, &v3->m_UpdateArg);
  }
}

void __fastcall ParticleEmitter::ownPostUpdateVertexBuffer(ParticleEmitter *this)
{
  int v1; // eax
  signed __int64 v2; // rcx

  v1 = 0;
  if ( (int)(this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst) > 0 )
  {
    v2 = this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst;
    do
      ++v1;
    while ( v1 < (int)v2 );
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall ParticleEmitter::ownRender(
        ParticleEmitter *this,
        int renderOpt,
        float zOffset,
        int priority,
        EffectRenderArgument *pRenderArg)
{
  int v6; // er9
  int v7; // er9
  int v8; // er9
  bool v9; // zf
  EffectData *m_SettingData; // r9
  DialogData *Myfirst; // r8
  DialogData *Mylast; // rcx
  int *v13; // rcx
  DialogData *v14; // rax
  int *v15; // rdx
  int *v16; // rcx
  DialogData *v17; // rax
  int *v18; // rdx
  EffectData *v19; // r9
  DialogData *v20; // r8
  int *v21; // rcx
  DialogData *v22; // rax
  int *v23; // rdx
  EffectData *v24; // r9
  DialogData *v25; // r8
  int *v26; // rcx
  DialogData *v27; // rax
  int *v28; // rdx
  EffectData *v29; // r9
  DialogData *v30; // r8
  int *v31; // rcx
  DialogData *v32; // rax
  int *v33; // rdx

  if ( !priority )
    return;
  v6 = priority - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 == 1;
        m_SettingData = this->m_SettingData;
        Myfirst = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
        Mylast = m_SettingData->AllDialogData._Mypair._Myval2._Mylast;
        if ( !v9 )
        {
          if ( (unsigned __int64)(Mylast - Myfirst) <= 2 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v13 = Myfirst[2].allButtonIndexData._Mypair._Myval2._Myfirst;
          if ( (unsigned __int64)(Myfirst[2].allButtonIndexData._Mypair._Myval2._Mylast - v13) <= 8 )
            std::_Xout_of_range("invalid vector<T> subscript");
          if ( v13[8] )
          {
            v14 = std::vector<DialogData>::at(&m_SettingData->AllDialogData, 2ui64);
            v15 = v14->allComboIndexData._Mypair._Myval2._Myfirst;
            if ( (unsigned __int64)(v14->allComboIndexData._Mypair._Myval2._Mylast - v15) <= 5 )
              std::_Xout_of_range("invalid vector<T> subscript");
            if ( v15[5] )
              return;
          }
LABEL_39:
          if ( (((char *)this->m_ParticleData._Mypair._Myval2._Mylast
               - (char *)this->m_ParticleData._Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFF8ui64) != 0 )
          {
            if ( this->renderFlag )
              this->pParticleTypeState->Render(this->pParticleTypeState, &this->m_RenderArg);
          }
          return;
        }
        if ( (unsigned __int64)(Mylast - Myfirst) <= 2 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v16 = Myfirst[2].allButtonIndexData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(Myfirst[2].allButtonIndexData._Mypair._Myval2._Mylast - v16) <= 8 )
          std::_Xout_of_range("invalid vector<T> subscript");
        if ( !v16[8] )
          goto LABEL_17;
        v17 = std::vector<DialogData>::at(&m_SettingData->AllDialogData, 2ui64);
        v18 = v17->allComboIndexData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v17->allComboIndexData._Mypair._Myval2._Mylast - v18) <= 5 )
          std::_Xout_of_range("invalid vector<T> subscript");
        if ( !v18[5] )
        {
LABEL_17:
          if ( pRenderArg->priority == 4 )
            goto LABEL_39;
        }
      }
      else
      {
        v19 = this->m_SettingData;
        v20 = v19->AllDialogData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v19->AllDialogData._Mypair._Myval2._Mylast - v20) <= 2 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v21 = v20[2].allButtonIndexData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v20[2].allButtonIndexData._Mypair._Myval2._Mylast - v21) <= 8 )
          std::_Xout_of_range("invalid vector<T> subscript");
        if ( !v21[8] )
          goto LABEL_24;
        v22 = std::vector<DialogData>::at(&v19->AllDialogData, 2ui64);
        v23 = v22->allComboIndexData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v22->allComboIndexData._Mypair._Myval2._Mylast - v23) <= 5 )
          std::_Xout_of_range("invalid vector<T> subscript");
        if ( !v23[5] )
        {
LABEL_24:
          if ( pRenderArg->priority == 3 )
            goto LABEL_39;
        }
      }
    }
    else
    {
      v24 = this->m_SettingData;
      v25 = v24->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v24->AllDialogData._Mypair._Myval2._Mylast - v25) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v26 = v25[2].allButtonIndexData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v25[2].allButtonIndexData._Mypair._Myval2._Mylast - v26) <= 8 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( v26[8] )
      {
        v27 = std::vector<DialogData>::at(&v24->AllDialogData, 2ui64);
        v28 = v27->allComboIndexData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v27->allComboIndexData._Mypair._Myval2._Mylast - v28) <= 5 )
          std::_Xout_of_range("invalid vector<T> subscript");
        if ( v28[5] )
          goto LABEL_39;
      }
    }
  }
  else
  {
    v29 = this->m_SettingData;
    v30 = v29->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v29->AllDialogData._Mypair._Myval2._Mylast - v30) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v31 = v30[2].allButtonIndexData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v30[2].allButtonIndexData._Mypair._Myval2._Mylast - v31) <= 8 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( !v31[8] )
      goto LABEL_37;
    v32 = std::vector<DialogData>::at(&v29->AllDialogData, 2ui64);
    v33 = v32->allComboIndexData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v32->allComboIndexData._Mypair._Myval2._Mylast - v33) <= 5 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( !v33[5] )
    {
LABEL_37:
      if ( pRenderArg->priority == 1 )
      {
        this->m_RenderArg.renderOpt = 0;
        goto LABEL_39;
      }
    }
  }
}

void __fastcall ParticleEmitter::ownRenderSetting(ParticleEmitter *this)
{
  this->pParticleTypeState->RenderSettingInSt(this->pParticleTypeState, this->m_SettingData);
}

void __fastcall ParticleEmitter::ownTerminate(ParticleEmitter *this, __int64 a2, __int64 a3)
{
  ParticleEmitter_vtbl *v3; // rax

  v3 = this->__vftable;
  LOBYTE(a3) = 1;
  this->m_EffectDeleteFlag = 1;
  ((void (__fastcall *)(ParticleEmitter *, __int64, __int64))v3->ownCleanup)(this, a2, a3);
}

void __fastcall ParticleEmitter::ownUpdate(
        ParticleEmitter *this,
        bool mirrorFlag,
        const OGLMatrix *actMat,
        float frame)
{
  ParticleEmitterState *pState; // rcx
  ParticleEmitterState *v8; // rcx
  CollisionField *pCollisionField; // rcx

  this->clearLocalData(this);
  ((void (__fastcall *)(ParticleEmitter *, bool, const OGLMatrix *))this->updateEmitter)(this, mirrorFlag, actMat);
  pState = this->pState;
  if ( pState )
  {
    ((void (__fastcall *)(ParticleEmitterState *, bool, const OGLMatrix *))pState->updateEmitter)(
      pState,
      mirrorFlag,
      actMat);
    v8 = this->pState;
    this->m_UpdateArg.frame = frame;
    this->m_UpdateArg.mirrorFlag = mirrorFlag;
    v8->updateAllParticle(v8, &this->m_UpdateArg);
    this->pState->generateParticle(this->pState, &this->m_UpdateArg);
    pCollisionField = this->pCollisionField;
    if ( pCollisionField )
      ((void (__fastcall *)(CollisionField *, bool, const OGLMatrix *, ParticleEmitter *, _DWORD))pCollisionField->updateForceFieldData)(
        pCollisionField,
        mirrorFlag,
        actMat,
        this,
        LODWORD(frame));
  }
}

void __fastcall ParticleEmitter::ownUpdateVertexBuffer(ParticleEmitter *this)
{
  ParticleTypeState *pParticleTypeState; // rcx

  this->sortParticle(this);
  pParticleTypeState = this->pParticleTypeState;
  if ( pParticleTypeState )
    pParticleTypeState->UpdateVertexBuffer(pParticleTypeState, &this->m_UpdateBufferArg);
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

void __fastcall ParticleEmitter::sortParticle(ParticleEmitter *this)
{
  DialogData *Myfirst; // rdx
  int *v3; // rcx
  unsigned int v4; // esi
  OGLVec3 *v5; // rbp
  unsigned __int64 v6; // rdi
  ParticleData **v7; // r8
  float *p_isUsed; // rax
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  ParticleData **v12; // rcx
  OGLVec3 v13; // [rsp+28h] [rbp-70h] BYREF
  OGLEffectVec3 v14; // [rsp+38h] [rbp-60h] BYREF
  void **v15; // [rsp+50h] [rbp-48h]
  float v16; // [rsp+58h] [rbp-40h]
  float v17; // [rsp+5Ch] [rbp-3Ch]
  float v18; // [rsp+60h] [rbp-38h]
  OGLEffectVec3 v19; // [rsp+68h] [rbp-30h] BYREF
  GreaterParticleData v20; // [rsp+A0h] [rbp+8h] BYREF

  Myfirst = this->m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v3 = Myfirst[2].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[2].allButtonIndexData._Mypair._Myval2._Mylast - v3) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v3[3] )
  {
    v4 = 0;
    if ( this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst )
    {
      v5 = *(OGLVec3 **)&AppMain::pApp;
      v6 = 0i64;
      do
      {
        v14.OGLVec3 = v5[208894];
        v14.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
        v7 = this->m_ParticleData._Mypair._Myval2._Myfirst;
        if ( this->m_ParticleData._Mypair._Myval2._Mylast - v7 <= v6 )
          std::_Xout_of_range("invalid vector<T> subscript");
        p_isUsed = (float *)&v7[v6]->isUsed;
        v9 = p_isUsed[26];
        v10 = p_isUsed[25];
        v16 = p_isUsed[24];
        v17 = v10;
        v18 = v9;
        v15 = &OGLEffectVec3::`vftable';
        v13.x = v16;
        v13.y = v10;
        v13.z = v9;
        OGLEffectVec3::operator-(&v14, &v19, &v13);
        v11 = sqrtf((float)((float)(v19.y * v19.y) + (float)(v19.x * v19.x)) + (float)(v19.z * v19.z));
        v12 = this->m_ParticleData._Mypair._Myval2._Myfirst;
        if ( this->m_ParticleData._Mypair._Myval2._Mylast - v12 <= v6 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v12[v6]->zSortDistance = v11;
        v6 = ++v4;
      }
      while ( v4 < (unsigned __int64)(this->m_ParticleData._Mypair._Myval2._Mylast
                                    - this->m_ParticleData._Mypair._Myval2._Myfirst) );
    }
    std::_Sort_unchecked1<ParticleData * *,__int64,GreaterParticleData>(
      this->m_ParticleData._Mypair._Myval2._Myfirst,
      this->m_ParticleData._Mypair._Myval2._Mylast,
      this->m_ParticleData._Mypair._Myval2._Mylast - this->m_ParticleData._Mypair._Myval2._Myfirst,
      &v20);
  }
}

void __fastcall ParticleEmitter::updateEmitter(
        ParticleEmitter *this,
        bool mirrorFlag,
        const OGLMatrix *actMat,
        float frame)
{
  EffectData *m_SettingData; // rbx
  DialogData *Myfirst; // rcx
  DialogChartData *v7; // rbx
  ChartData *v8; // r8
  ChartData *v9; // rsi
  float ChartDataY; // xmm6_4
  __m128 age_low; // xmm0
  __m128 v12; // xmm7
  __m128 v13; // xmm0
  EffectData *v14; // rbx
  DialogData *v15; // rcx
  DialogChartData *v16; // rbx
  ChartData *v17; // r8
  ChartData *v18; // rsi
  float v19; // xmm6_4
  __m128 v20; // xmm0
  __m128 v21; // xmm7
  __m128 v22; // xmm0
  EffectData *v23; // r8
  DialogData *v24; // rcx
  DialogChartData *v25; // r8
  float v26; // xmm7_4
  DialogChartData *v27; // r8
  float v28; // xmm6_4
  DialogChartData *v29; // r8
  float v30; // xmm0_4
  EffectData *v31; // r8
  DialogData *v32; // rcx
  DialogChartData *v33; // r8
  float v34; // xmm8_4
  OGLQuat *v35; // rcx
  OGLMatrix *v36; // r8
  OGLVec3 *v37; // r8
  OGLVec3 *v38; // r9
  OGLVec3 *v39; // rax
  float v40; // xmm0_4
  OGLEffectMatrix v41; // [rsp+50h] [rbp-98h] BYREF

  m_SettingData = this->m_SettingData;
  this->intervalTime = frame + this->intervalTime;
  Myfirst = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst->allButtonIndexData._Mypair._Myval2._Mylast
                        - Myfirst->allButtonIndexData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( Myfirst->allButtonIndexData._Mypair._Myval2._Myfirst[2] )
  {
    v7 = m_SettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v7->dialogChartData._Mypair._Myval2._Mylast - v7->dialogChartData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v8 = v7->dialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v7->dialogChartData._Mypair._Myval2._Mylast - v7->dialogChartData._Mypair._Myval2._Myfirst) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v9 = v7->dialogChartData._Mypair._Myval2._Myfirst;
    if ( !(v7->dialogChartData._Mypair._Myval2._Mylast - v8) )
      std::_Xout_of_range("invalid vector<T> subscript");
    ChartDataY = D3DMath::GetChartDataY(this->age, v8 + 2);
    age_low = (__m128)LODWORD(this->age);
    age_low.m128_f32[0] = D3DMath::GetChartDataY(age_low.m128_f32[0], v9 + 1);
    v12 = age_low;
    v13 = (__m128)LODWORD(this->age);
    v13.m128_f32[0] = D3DMath::GetChartDataY(v13.m128_f32[0], v9);
    *(_QWORD *)&this->WorldScale.x = _mm_unpacklo_ps(v13, v12).m128_u64[0];
    this->WorldScale.z = ChartDataY;
  }
  v14 = this->m_SettingData;
  v15 = v14->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v15->allButtonIndexData._Mypair._Myval2._Mylast
                        - v15->allButtonIndexData._Mypair._Myval2._Myfirst) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v15->allButtonIndexData._Mypair._Myval2._Myfirst[4] )
  {
    v16 = v14->AllDialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v16->dialogChartData._Mypair._Myval2._Mylast - v16->dialogChartData._Mypair._Myval2._Myfirst) <= 8 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v17 = v16->dialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v16->dialogChartData._Mypair._Myval2._Mylast - v16->dialogChartData._Mypair._Myval2._Myfirst) <= 7 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v18 = v16->dialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v16->dialogChartData._Mypair._Myval2._Mylast - v17) <= 6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v19 = D3DMath::GetChartDataY(this->age, v17 + 8);
    v20 = (__m128)LODWORD(this->age);
    v20.m128_f32[0] = D3DMath::GetChartDataY(v20.m128_f32[0], v18 + 7);
    v21 = v20;
    v22 = (__m128)LODWORD(this->age);
    v22.m128_f32[0] = D3DMath::GetChartDataY(v22.m128_f32[0], v18 + 6);
    *(_QWORD *)&this->LocalPos.x = _mm_unpacklo_ps(v22, v21).m128_u64[0];
    this->LocalPos.z = v19;
  }
  v23 = this->m_SettingData;
  v24 = v23->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v24->allButtonIndexData._Mypair._Myval2._Mylast
                        - v24->allButtonIndexData._Mypair._Myval2._Myfirst) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v24->allButtonIndexData._Mypair._Myval2._Myfirst[3] )
  {
    v25 = v23->AllDialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v25->dialogChartData._Mypair._Myval2._Mylast - v25->dialogChartData._Mypair._Myval2._Myfirst) <= 5 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v26 = D3DMath::GetChartDataY(this->age, v25->dialogChartData._Mypair._Myval2._Myfirst + 5);
    v27 = this->m_SettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v27->dialogChartData._Mypair._Myval2._Mylast - v27->dialogChartData._Mypair._Myval2._Myfirst) <= 4 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v28 = D3DMath::GetChartDataY(this->age, v27->dialogChartData._Mypair._Myval2._Myfirst + 4);
    v29 = this->m_SettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v29->dialogChartData._Mypair._Myval2._Mylast - v29->dialogChartData._Mypair._Myval2._Myfirst) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v30 = D3DMath::GetChartDataY(this->age, v29->dialogChartData._Mypair._Myval2._Myfirst + 3);
    OGLEffectQuat::setRotateEuler(
      &this->LocalRot,
      (float)(v30 * 3.1415927) / 180.0,
      (float)(v28 * 3.1415927) / 180.0,
      (float)(v26 * 3.1415927) / 180.0);
  }
  v31 = this->m_SettingData;
  v32 = v31->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v32[1].allButtonIndexData._Mypair._Myval2._Mylast
                        - v32[1].allButtonIndexData._Mypair._Myval2._Myfirst) <= 6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v32[1].allButtonIndexData._Mypair._Myval2._Myfirst[6] )
  {
    v33 = v31->AllDialogChartData._Mypair._Myval2._Myfirst;
    if ( !(v33[1].dialogChartData._Mypair._Myval2._Mylast - v33[1].dialogChartData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->emitVolume = (int)D3DMath::GetChartDataY(this->age, v33[1].dialogChartData._Mypair._Myval2._Myfirst);
  }
  v34 = frame + this->age;
  memset(&v41.OGLMatrix, 0, 24);
  v35 = &this->LocalRot.OGLQuat;
  this->age = v34;
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
  memset(&v41.m[6], 0, 40);
  v41.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  if ( this == (ParticleEmitter *)-3432i64 )
    v35 = 0i64;
  OGLEffectMatrix::rotationQuaternion(&v41, v35->x, v35->y, v35->z, v35->w);
  OGLMatrix::multiply(v36, &v41.OGLMatrix);
  v39 = &this->LocalPos.OGLVec3;
  if ( this == (ParticleEmitter *)-3408i64 )
    v39 = v38;
  v37[4].x = v37[4].x + v39->x;
  v37[4].y = v39->y + v37[4].y;
  v40 = v39->z + v37[4].z;
  v37[5].x = 1.0;
  v37[4].z = v40;
  if ( this == (ParticleEmitter *)-3264i64 )
    v37 = v38;
  *(_OWORD *)this->WorldMat.m = *(_OWORD *)&v37->x;
  *(_OWORD *)&this->WorldMat.m[4] = *(_OWORD *)&v37[1].y;
  *(_OWORD *)&this->WorldMat.m[8] = *(_OWORD *)&v37[2].z;
  *(_OWORD *)&this->WorldMat.m[12] = *(_OWORD *)&v37[4].x;
}

