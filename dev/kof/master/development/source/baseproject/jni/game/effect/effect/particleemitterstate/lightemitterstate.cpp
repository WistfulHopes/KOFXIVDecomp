#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
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
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstatecurve.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/randomnumbers.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitterstate/particleemitterstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitterstate/particleemitterstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/randomnumbers.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E38E
void LightEmitterState::generateEmitter(); // 0x14013FD40
void LightEmitterState::updateEmitter(bool mirrorFlag, const OGLMatrix & actMat, float frame); // 0x14002E7C0
ParticleData * LightEmitterState::initGenerateParticle(bool mirrorFlag, float frame); // 0x14013FD90
void LightEmitterState::generateParticleCol(ParticleData * pParticleData, float frame); // 0x1401401D0
void LightEmitterState::generateParticleLight(ParticleData * pParticleData, float frame); // 0x140140280
void LightEmitterState::updateAllParticle(EffectUpdateArgument * pUpdateArg); // 0x1401405B0
void LightEmitterState::updateParticle(bool mirrorFlag, ParticleData * pParticleData, float frame); // 0x140140720
void LightEmitterState::updateParticleCol(ParticleData * pParticleData, float frame); // 0x1401408A0
void LightEmitterState::updateParticleLight(ParticleData * pParticleData, float frame); // 0x140140FA0//decompilation failure at 14089E38E!
void __fastcall LightEmitterState::generateEmitter(ParticleEmitterState *this)
{
  DialogData *Myfirst; // rdx
  float *v2; // r8

  Myfirst = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v2 = Myfirst[1].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v2) <= 0xF )
    std::_Xout_of_range("invalid vector<T> subscript");
  this->pParticleEmitter->resistance = v2[15];
}

void __fastcall LightEmitterState::generateParticleCol(
        LightEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  DialogData *Myfirst; // r8
  float *v4; // r9
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  LightEmitterState_vtbl *v8; // rax

  Myfirst = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v4 = Myfirst[3].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[3].allEditNumData._Mypair._Myval2._Mylast - v4) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v5 = v4[3];
  v6 = v4[2];
  v7 = v4[1];
  pParticleData->Col.x = *v4;
  v8 = this->__vftable;
  pParticleData->Col.w = v5;
  pParticleData->Col.y = v7;
  pParticleData->Col.z = v6;
  ((void (__fastcall *)(LightEmitterState *))v8->updateParticleCol)(this);
}

void __fastcall LightEmitterState::generateParticleLight(
        LightEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  EffectData *pSettingData; // rax
  DialogData *Myfirst; // rcx
  int *v7; // rdx
  EffectData *v8; // rcx
  DialogData *v9; // r8
  int *v10; // rcx
  EffectData *v11; // rcx
  DialogData *v12; // r8
  float *v13; // rcx
  EffectData *v14; // rcx
  DialogData *v15; // r8
  float *v16; // rcx
  EffectData *v17; // rcx
  DialogData *v18; // r8
  float *v19; // rcx
  EffectData *v20; // rcx
  DialogData *v21; // r8
  int *v22; // rcx
  EffectData *v23; // rcx
  DialogData *v24; // r8
  int *v25; // rcx

  pSettingData = this->pSettingData;
  Myfirst = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(pSettingData->AllDialogData._Mypair._Myval2._Mylast - Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v7 = Myfirst[2].allComboIndexData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[2].allComboIndexData._Mypair._Myval2._Mylast - v7) )
    std::_Xout_of_range("invalid vector<T> subscript");
  pParticleData->lightType = *v7;
  v8 = this->pSettingData;
  v9 = v8->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v8->AllDialogData._Mypair._Myval2._Mylast - v9) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v10 = v9[2].allComboIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v9[2].allComboIndexData._Mypair._Myval2._Mylast - v10) <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  pParticleData->decayRate = v10[1];
  v11 = this->pSettingData;
  v12 = v11->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v11->AllDialogData._Mypair._Myval2._Mylast - v12) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v13 = v12[2].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v12[2].allEditNumData._Mypair._Myval2._Mylast - v13) <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  pParticleData->intensity = v13[1];
  v14 = this->pSettingData;
  v15 = v14->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v14->AllDialogData._Mypair._Myval2._Mylast - v15) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v16 = v15[2].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v15[2].allEditNumData._Mypair._Myval2._Mylast - v16) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  pParticleData->coneAngle = v16[2];
  v17 = this->pSettingData;
  v18 = v17->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v17->AllDialogData._Mypair._Myval2._Mylast - v18) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v19 = v18[2].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v18[2].allEditNumData._Mypair._Myval2._Mylast - v19) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  pParticleData->penumbra = v19[3];
  v20 = this->pSettingData;
  v21 = v20->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v20->AllDialogData._Mypair._Myval2._Mylast - v21) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v22 = v21[2].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v21[2].allButtonIndexData._Mypair._Myval2._Mylast - v22) <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  pParticleData->emitSpecular = v22[1];
  v23 = this->pSettingData;
  v24 = v23->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v23->AllDialogData._Mypair._Myval2._Mylast - v24) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v25 = v24[2].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v24[2].allButtonIndexData._Mypair._Myval2._Mylast - v25) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  pParticleData->emitDiffuse = v25[2];
}

ParticleData *__fastcall LightEmitterState::initGenerateParticle(LightEmitterState *this, bool mirrorFlag, float frame)
{
  ParticleData *result; // rax
  ParticleData *v6; // rbp
  Emitter *pParticleEmitter; // rcx
  unsigned int v8; // eax
  DialogData *Myfirst; // rcx
  unsigned __int64 v10; // rdx
  int v11; // eax
  EffectData *pSettingData; // rax
  DialogData *v13; // rcx
  float *v14; // rbx
  float v15; // xmm7_4
  float v16; // xmm0_4
  Emitter *v17; // rax
  int v18; // esi
  int v19; // er15
  __int64 v20; // xmm6_8
  std::vector<ParticleDataForChild> *p_particleDataForChild; // rbx
  ParticleDataForChild *Mylast; // r8
  ParticleDataForChild *v23; // rax
  __int64 v24; // rdi
  ParticleDataForChild *v25; // rax
  ParticleDataForChild *v26; // rax
  Emitter *v27; // rax
  _OWORD *m; // r8
  OGLEffectMatrix *p_WorldMat; // rcx
  OGLMatrix *v30; // rax
  char *v31; // rcx
  _OWORD *v32; // rax
  _OWORD *v33; // rcx
  RandomMT *v34; // rcx
  __int64 v35; // [rsp+20h] [rbp-98h] BYREF
  int v36; // [rsp+28h] [rbp-90h]
  int v37; // [rsp+30h] [rbp-88h]

  result = EffectTaskManager::newParticlePtr(
             *(EffectTaskManager **)(*(_QWORD *)&AppMain::pApp + 2507504i64),
             this->pParticleEmitter->jobNum);
  v6 = result;
  if ( result )
  {
    result->playerNum = this->pParticleEmitter->m_pEffectDataListManager->m_PlayerNum;
    pParticleEmitter = this->pParticleEmitter;
    v8 = ++pParticleEmitter->m_IDCount;
    if ( v8 > 0x7FFFFFF5 )
      v8 = 0;
    pParticleEmitter->m_IDCount = v8;
    v6->ID = this->pParticleEmitter->m_IDCount;
    v6->age = 0.0;
    Myfirst = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    v10 = (unsigned __int64)Myfirst[2].allEditNumData._Mypair._Myval2._Myfirst;
    if ( !((__int64)((__int64)Myfirst[2].allEditNumData._Mypair._Myval2._Mylast - v10) >> 2) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v11 = (int)*(float *)v10;
    LODWORD(v35) = 0;
    v6->lifeLimit = v11;
    pSettingData = this->pSettingData;
    *((float *)&v35 + 1) = FLOAT_999_0;
    v13 = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    v14 = v13[1].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v13[1].allEditNumData._Mypair._Myval2._Mylast - v14) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (unsigned __int64)(v13[1].allEditNumData._Mypair._Myval2._Mylast - v14) <= 4 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v15 = v14[4];
    if ( v15 == 0.0 )
      v16 = 0.0;
    else
      v16 = (float)((float)((float)rand() / 32767.0) * (float)(v15 - COERCE_FLOAT(LODWORD(v15) ^ _xmm)))
          + COERCE_FLOAT(LODWORD(v15) ^ _xmm);
    v17 = this->pParticleEmitter;
    v18 = 0;
    v19 = (int)(float)(v16 + v14[3]);
    v36 = v19;
    if ( v17->m_ChildSize > 0 )
    {
      v20 = v35;
      p_particleDataForChild = &v6->particleDataForChild;
      do
      {
        Mylast = v6->particleDataForChild._Mypair._Myval2._Mylast;
        if ( &v35 >= (__int64 *)Mylast
          || (v23 = p_particleDataForChild->_Mypair._Myval2._Myfirst,
              p_particleDataForChild->_Mypair._Myval2._Myfirst > (ParticleDataForChild *)&v35) )
        {
          if ( Mylast == v6->particleDataForChild._Mypair._Myval2._Myend )
            std::vector<ParticleDataForChild>::_Reserve(&v6->particleDataForChild, v10);
          v26 = v6->particleDataForChild._Mypair._Myval2._Mylast;
          if ( v26 )
          {
            *(_QWORD *)&v26->accumulateEmitVolume = v20;
            v26->intervalLimitTime = v19;
          }
        }
        else
        {
          v24 = ((char *)&v35 - (char *)v23) / 12;
          if ( Mylast == v6->particleDataForChild._Mypair._Myval2._Myend )
            std::vector<ParticleDataForChild>::_Reserve(
              &v6->particleDataForChild,
              (unsigned __int128)(((char *)&v35 - (char *)v23) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64);
          v10 = (unsigned __int64)v6->particleDataForChild._Mypair._Myval2._Mylast;
          if ( v10 )
          {
            v25 = p_particleDataForChild->_Mypair._Myval2._Myfirst;
            *(_QWORD *)v10 = *(_QWORD *)&p_particleDataForChild->_Mypair._Myval2._Myfirst[v24].accumulateEmitVolume;
            *(_DWORD *)(v10 + 8) = v25[v24].intervalLimitTime;
          }
        }
        ++v6->particleDataForChild._Mypair._Myval2._Mylast;
        ++v18;
      }
      while ( v18 < this->pParticleEmitter->m_ChildSize );
    }
    v27 = this->pParticleEmitter;
    m = (_OWORD *)v6->ReferenceMat.m;
    p_WorldMat = &v27->WorldMat;
    v30 = &v27->WorldMat.OGLMatrix;
    if ( !p_WorldMat )
      v30 = 0i64;
    v31 = (char *)&v30[-1].m[14];
    if ( !v30 )
      v31 = 0i64;
    v32 = v31 + 8;
    if ( !v31 )
      v32 = 0i64;
    *(_OWORD *)v6->DefaultReferenceMat.m = *v32;
    *(_OWORD *)&v6->DefaultReferenceMat.m[4] = v32[1];
    *(_OWORD *)&v6->DefaultReferenceMat.m[8] = v32[2];
    v33 = (_OWORD *)v6->DefaultReferenceMat.m;
    *(_OWORD *)&v6->DefaultReferenceMat.m[12] = v32[3];
    if ( v6 == (ParticleData *)-256i64 )
      v33 = 0i64;
    *m = *v33;
    *(_OWORD *)&v6->ReferenceMat.m[4] = v33[1];
    *(_OWORD *)&v6->ReferenceMat.m[8] = v33[2];
    *(_OWORD *)&v6->ReferenceMat.m[12] = v33[3];
    if ( v6 == (ParticleData *)-328i64 )
      m = 0i64;
    *(_OWORD *)v6->GlobalMat.m = *m;
    *(_OWORD *)&v6->GlobalMat.m[4] = m[1];
    *(_OWORD *)&v6->GlobalMat.m[8] = m[2];
    *(_OWORD *)&v6->GlobalMat.m[12] = m[3];
    v6->mirrorFlag = mirrorFlag;
    ((void (__fastcall *)(LightEmitterState *, ParticleData *))this->generateParticlePos)(this, v6);
    ((void (__fastcall *)(LightEmitterState *, ParticleData *))this->generateParticleCol)(this, v6);
    ((void (__fastcall *)(LightEmitterState *, ParticleData *))this->generateParticleLight)(this, v6);
    v6->RatioToFollow = 1.0;
    *(_QWORD *)&v6->ForceFieldVel.x = _mm_unpacklo_ps((__m128)0i64, (__m128)0i64).m128_u64[0];
    v37 = 0;
    v6->ForceFieldVel.z = 0.0;
    v34 = &this->pRandomNumbers->RandomMT;
    *(_QWORD *)&v6->GravityPos.x = 0i64;
    v6->GravityPos.z = 0.0;
    v6->TexNum = (unsigned int)RandomMT::getRand32(v34) >> 1;
    return v6;
  }
  return result;
}

void __fastcall LightEmitterState::updateAllParticle(LightEmitterState *this, EffectUpdateArgument *pUpdateArg)
{
  std::vector<ParticleData *> *pParticleDataVec; // r8
  int v3; // esi
  unsigned __int64 v6; // rdi
  ParticleData **Myfirst; // rcx
  ParticleData **v8; // rdx
  unsigned __int64 v9; // rax
  std::vector<ParticleData *> *v10; // rbx

  pParticleDataVec = pUpdateArg->pParticleDataVec;
  v3 = 0;
  if ( (int)(pParticleDataVec->_Mypair._Myval2._Mylast - pParticleDataVec->_Mypair._Myval2._Myfirst) > 0 )
  {
    v6 = 0i64;
    do
    {
      Myfirst = pParticleDataVec->_Mypair._Myval2._Myfirst;
      if ( pParticleDataVec->_Mypair._Myval2._Mylast - pParticleDataVec->_Mypair._Myval2._Myfirst <= v6 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v8 = pParticleDataVec->_Mypair._Myval2._Myfirst;
      if ( pParticleDataVec->_Mypair._Myval2._Mylast - Myfirst <= v6 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v9 = pParticleDataVec->_Mypair._Myval2._Mylast - v8;
      if ( Myfirst[v6]->age <= (float)v8[v6]->lifeLimit )
      {
        if ( v9 <= v6 )
          std::_Xout_of_range("invalid vector<T> subscript");
        ((void (__fastcall *)(LightEmitterState *, bool, ParticleData *))this->updateParticle)(
          this,
          pUpdateArg->mirrorFlag,
          v8[v6]);
      }
      else
      {
        if ( v9 <= v6 )
          std::_Xout_of_range("invalid vector<T> subscript");
        EffectTaskManager::deleteParticlePtr(*(EffectTaskManager **)(*(_QWORD *)&AppMain::pApp + 2507504i64), v8[v6]);
        v10 = pUpdateArg->pParticleDataVec;
        memmove(
          &v10->_Mypair._Myval2._Myfirst[v3],
          &v10->_Mypair._Myval2._Myfirst[v3 + 1],
          (char *)v10->_Mypair._Myval2._Mylast - (char *)&v10->_Mypair._Myval2._Myfirst[v3 + 1]);
        --v10->_Mypair._Myval2._Mylast;
        --v3;
        --v6;
      }
      pParticleDataVec = pUpdateArg->pParticleDataVec;
      ++v3;
      ++v6;
    }
    while ( v3 < (int)(pParticleDataVec->_Mypair._Myval2._Mylast - pParticleDataVec->_Mypair._Myval2._Myfirst) );
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall LightEmitterState::updateParticle(
        LightEmitterState *this,
        bool mirrorFlag,
        ParticleData *pParticleData,
        float frame)
{
  __int64 v4; // r9
  ParticleData *v5; // rbx
  unsigned __int64 v7; // r10
  __int64 v8; // r11

  if ( pParticleData )
  {
    v4 = 0i64;
    v5 = pParticleData;
    pParticleData->age = frame + pParticleData->age;
    if ( pParticleData->particleDataForChild._Mypair._Myval2._Mylast
       - pParticleData->particleDataForChild._Mypair._Myval2._Myfirst )
    {
      v7 = 0i64;
      v8 = 0i64;
      do
      {
        pParticleData = (ParticleData *)v5->particleDataForChild._Mypair._Myval2._Myfirst;
        if ( ((char *)v5->particleDataForChild._Mypair._Myval2._Mylast - (char *)pParticleData) / 12 <= v7 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v4 = (unsigned int)(v4 + 1);
        ++v7;
        *(float *)((char *)&pParticleData->jobNum + v8) = frame + *(float *)((char *)&pParticleData->jobNum + v8);
        v8 += 12i64;
      }
      while ( (int)v4 < (unsigned __int64)(v5->particleDataForChild._Mypair._Myval2._Mylast
                                         - v5->particleDataForChild._Mypair._Myval2._Myfirst) );
    }
    ((void (__fastcall *)(LightEmitterState *, ParticleData *, ParticleData *, __int64))this->updateParticlePos)(
      this,
      v5,
      pParticleData,
      v4);
    ((void (__fastcall *)(LightEmitterState *, ParticleData *))this->updateParticleCol)(this, v5);
    ((void (__fastcall *)(LightEmitterState *, ParticleData *))this->updateParticleLight)(this, v5);
    if ( (float)(v5->age - frame) != 0.0 )
      ((void (__fastcall *)(LightEmitterState *, ParticleData *))this->calcReferenceMatrix)(this, v5);
    ((void (__fastcall *)(LightEmitterState *, ParticleData *))this->calcLocalMatrix)(this, v5);
    ((void (__fastcall *)(LightEmitterState *, ParticleData *))this->updateWorldData)(this, v5);
  }
}

void __fastcall LightEmitterState::updateParticleCol(LightEmitterState *this, ParticleData *pParticleData, float frame)
{
  EffectData *pSettingData; // rcx
  DialogData *Myfirst; // rax
  int *v7; // r9
  std::vector<ChartData> *p_dialogChartData; // r8
  float x; // xmm9_4
  ChartData *v10; // r9
  ChartData *v11; // r10
  signed __int64 v12; // rcx
  __int64 v13; // r9
  KeyData *v14; // rdx
  unsigned __int64 v15; // rcx
  ChartData *v16; // r9
  ChartData *v17; // r10
  signed __int64 v18; // rcx
  int v19; // er9
  KeyData *v20; // rcx
  unsigned __int64 v21; // rbx
  ChartData *v22; // rax
  KeyData *v23; // rdx
  DialogChartData *v24; // r8
  ChartData *v25; // r9
  ChartData *v26; // r10
  signed __int64 v27; // rcx
  int v28; // er9
  KeyData *v29; // rcx
  unsigned __int64 v30; // rbx
  ChartData *v31; // rax
  KeyData *v32; // rdx
  DialogChartData *v33; // r8
  ChartData *v34; // r9
  ChartData *v35; // r10
  signed __int64 v36; // rcx
  int v37; // er9
  KeyData *v38; // rcx
  unsigned __int64 v39; // rbx
  ChartData *v40; // rax
  KeyData *v41; // rdx
  DialogChartData *v42; // r8
  ChartData *v43; // r9
  ChartData *v44; // rsi
  ChartData *v45; // rdi
  ChartData *v46; // rbx
  float ChartDataYtoLifeFit; // xmm8_4
  float v48; // xmm7_4
  float v49; // xmm6_4
  float v50; // xmm0_4

  pSettingData = this->pSettingData;
  Myfirst = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v7 = Myfirst[3].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[3].allButtonIndexData._Mypair._Myval2._Mylast - v7) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *v7 )
  {
    p_dialogChartData = &pSettingData->AllDialogChartData._Mypair._Myval2._Myfirst->dialogChartData;
    x = 0.0;
    v10 = p_dialogChartData[3]._Mypair._Myval2._Myfirst;
    if ( !(p_dialogChartData[3]._Mypair._Myval2._Mylast - v10) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (((char *)v10->keyData._Mypair._Myval2._Mylast - (char *)v10->keyData._Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFC0ui64) != 0 )
    {
      v11 = p_dialogChartData[3]._Mypair._Myval2._Myfirst;
      if ( !(p_dialogChartData[3]._Mypair._Myval2._Mylast - v10) )
        std::_Xout_of_range("invalid vector<T> subscript");
      v12 = (char *)p_dialogChartData[3]._Mypair._Myval2._Mylast - (char *)v10;
      v13 = v10->keyData._Mypair._Myval2._Mylast - v10->keyData._Mypair._Myval2._Myfirst;
      if ( !(v12 / 56) )
        std::_Xout_of_range("invalid vector<T> subscript");
      v14 = v11->keyData._Mypair._Myval2._Myfirst;
      v15 = (int)v13 - 1;
      if ( v11->keyData._Mypair._Myval2._Mylast - v14 <= v15 )
        std::_Xout_of_range("invalid vector<T> subscript");
      x = v14[v15].Pos.x;
    }
    v16 = p_dialogChartData[3]._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(p_dialogChartData[3]._Mypair._Myval2._Mylast - v16) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (((char *)v16[1].keyData._Mypair._Myval2._Mylast - (char *)v16[1].keyData._Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFC0ui64) != 0 )
    {
      v17 = p_dialogChartData[3]._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(p_dialogChartData[3]._Mypair._Myval2._Mylast - v16) <= 1 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v18 = (char *)p_dialogChartData[3]._Mypair._Myval2._Mylast - (char *)v16;
      v19 = v16[1].keyData._Mypair._Myval2._Mylast - v16[1].keyData._Mypair._Myval2._Myfirst - 1;
      if ( (unsigned __int64)(v18 / 56) <= 1 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v20 = v17[1].keyData._Mypair._Myval2._Myfirst;
      v21 = v19;
      if ( v17[1].keyData._Mypair._Myval2._Mylast - v20 <= (unsigned __int64)v19 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( v20[(__int64)v19].Pos.x > x )
      {
        v22 = std::vector<ChartData>::at(p_dialogChartData + 3, 1ui64);
        v23 = v22->keyData._Mypair._Myval2._Myfirst;
        if ( v22->keyData._Mypair._Myval2._Mylast - v23 <= v21 )
          std::_Xout_of_range("invalid vector<T> subscript");
        x = v23[v21].Pos.x;
      }
    }
    v24 = this->pSettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
    v25 = v24[3].dialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v24[3].dialogChartData._Mypair._Myval2._Mylast - v25) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (((char *)v25[2].keyData._Mypair._Myval2._Mylast - (char *)v25[2].keyData._Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFC0ui64) != 0 )
    {
      v26 = v24[3].dialogChartData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v24[3].dialogChartData._Mypair._Myval2._Mylast - v25) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v27 = (char *)v24[3].dialogChartData._Mypair._Myval2._Mylast - (char *)v25;
      v28 = v25[2].keyData._Mypair._Myval2._Mylast - v25[2].keyData._Mypair._Myval2._Myfirst - 1;
      if ( (unsigned __int64)(v27 / 56) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v29 = v26[2].keyData._Mypair._Myval2._Myfirst;
      v30 = v28;
      if ( v26[2].keyData._Mypair._Myval2._Mylast - v29 <= (unsigned __int64)v28 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( v29[(__int64)v28].Pos.x > x )
      {
        v31 = std::vector<ChartData>::at(&v24[3].dialogChartData, 2ui64);
        v32 = v31->keyData._Mypair._Myval2._Myfirst;
        if ( v31->keyData._Mypair._Myval2._Mylast - v32 <= v30 )
          std::_Xout_of_range("invalid vector<T> subscript");
        x = v32[v30].Pos.x;
      }
    }
    v33 = this->pSettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
    v34 = v33[3].dialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v33[3].dialogChartData._Mypair._Myval2._Mylast - v34) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (((char *)v34[3].keyData._Mypair._Myval2._Mylast - (char *)v34[3].keyData._Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFC0ui64) != 0 )
    {
      v35 = v33[3].dialogChartData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v33[3].dialogChartData._Mypair._Myval2._Mylast - v34) <= 3 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v36 = (char *)v33[3].dialogChartData._Mypair._Myval2._Mylast - (char *)v34;
      v37 = v34[3].keyData._Mypair._Myval2._Mylast - v34[3].keyData._Mypair._Myval2._Myfirst - 1;
      if ( (unsigned __int64)(v36 / 56) <= 3 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v38 = v35[3].keyData._Mypair._Myval2._Myfirst;
      v39 = v37;
      if ( v35[3].keyData._Mypair._Myval2._Mylast - v38 <= (unsigned __int64)v37 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( v38[(__int64)v37].Pos.x > x )
      {
        v40 = std::vector<ChartData>::at(&v33[3].dialogChartData, 3ui64);
        v41 = v40->keyData._Mypair._Myval2._Myfirst;
        if ( v40->keyData._Mypair._Myval2._Mylast - v41 <= v39 )
          std::_Xout_of_range("invalid vector<T> subscript");
        x = v41[v39].Pos.x;
      }
    }
    v42 = this->pSettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
    v43 = v42[3].dialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v42[3].dialogChartData._Mypair._Myval2._Mylast - v43) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (unsigned __int64)(v42[3].dialogChartData._Mypair._Myval2._Mylast - v43) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v44 = v43 + 2;
    if ( (unsigned __int64)(v42[3].dialogChartData._Mypair._Myval2._Mylast - v43) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v45 = v43 + 1;
    v46 = v42[3].dialogChartData._Mypair._Myval2._Myfirst;
    if ( !(v42[3].dialogChartData._Mypair._Myval2._Mylast - v43) )
      std::_Xout_of_range("invalid vector<T> subscript");
    ChartDataYtoLifeFit = D3DMath::GetChartDataYtoLifeFit(
                            pParticleData->age / (float)pParticleData->lifeLimit,
                            x,
                            v43 + 3);
    v48 = D3DMath::GetChartDataYtoLifeFit(pParticleData->age / (float)pParticleData->lifeLimit, x, v44);
    v49 = D3DMath::GetChartDataYtoLifeFit(pParticleData->age / (float)pParticleData->lifeLimit, x, v45);
    v50 = D3DMath::GetChartDataYtoLifeFit(pParticleData->age / (float)pParticleData->lifeLimit, x, v46);
    pParticleData->Col.y = v49;
    pParticleData->Col.z = v48;
    pParticleData->Col.w = ChartDataYtoLifeFit;
    pParticleData->Col.x = v50;
  }
}

void __fastcall LightEmitterState::updateParticleLight(
        LightEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  EffectData *pSettingData; // r9
  DialogData *Myfirst; // r8
  int *v5; // rcx
  DialogChartData *v6; // r8

  pSettingData = this->pSettingData;
  Myfirst = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(pSettingData->AllDialogData._Mypair._Myval2._Mylast - Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v5 = Myfirst[2].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[2].allButtonIndexData._Mypair._Myval2._Mylast - v5) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *v5 )
  {
    v6 = pSettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(pSettingData->AllDialogChartData._Mypair._Myval2._Mylast - v6) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( !(v6[2].dialogChartData._Mypair._Myval2._Mylast - v6[2].dialogChartData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    pParticleData->intensity = D3DMath::GetChartDataY(
                                 pParticleData->age,
                                 v6[2].dialogChartData._Mypair._Myval2._Myfirst);
  }
}

