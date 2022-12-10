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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitterstate/particleemitterstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstatecurve.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageevent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageeventuvanimation.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/collisionmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/additionalfunctions/safeventlookatcharacter.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmotion.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfigure.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageeventuvanimation.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagesound.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.cpp"

BattleStageEvent::BattleStageEvent(const BattleStageResourceContainer * pResourceContainer, BattleStageSound * pSound, BSDataObject * pObject); // 0x14020E570
BattleStageEvent::~BattleStageEvent(); // 0x14020E740
void BattleStageEvent::clear(); // 0x14020E940
void BattleStageEvent::releaseOGLModel(); // 0x14020EA60
bool BattleStageEvent::setupModel(OGLModel * pOGLModel, bool bStageModel); // 0x14020EAD0
bool BattleStageEvent::setupSound(); // 0x14020EB70
OGLMatrix BattleStageEvent::getBoneTransMatrix(long boneIndex); // 0x14020EC00
bool BattleStageEvent::changeEvent(BSDataEvent * pEvent, long triggerPriority, bool bPriorityCheck, bool bAnimationInitCheck); // 0x14020EDE0
void BattleStageEvent::update(long timestamp, float advanceFrame); // 0x14020EF60
void BattleStageEvent::drawDirectRendring(); // 0x14020F470
bool BattleStageEvent::updateModelAnimation(float advanceFrame, bool bAnimationChange); // 0x14020F520
void BattleStageEvent::setupRenderParams(); // 0x14020FC40
void BattleStageEvent::renderModel(); // 0x14020FD00
class `anonymous-namespace'::StageCheckParticleEmitter :
	ParticleEmitter
{
public:
	StageCheckParticleEmitter(`anonymous-namespace'::StageCheckParticleEmitter &);
	StageCheckParticleEmitter(const `anonymous-namespace'::StageCheckParticleEmitter &);
private:
	StageCheckParticleEmitter();
public:
	bool isGenerateParticles();
	virtual ~StageCheckParticleEmitter();
	`anonymous-namespace'::StageCheckParticleEmitter & operator=(`anonymous-namespace'::StageCheckParticleEmitter &);
	`anonymous-namespace'::StageCheckParticleEmitter & operator=(const `anonymous-namespace'::StageCheckParticleEmitter &);
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B37
bool BattleStageEvent::updateEffectAnimation(float advanceFrame, bool bAnimationChange); // 0x14020FEC0
void BattleStageEvent::setupBillboardAnimation(BSDataEvent * pEvent, long selectAnimation); // 0x1402100F0
void BattleStageEvent::renderBillboardAnimation(); // 0x140210990
bool BattleStageEvent::updateSoundAction(float advanceFrame, bool bAnimationChange); // 0x1402110F0
void BattleStageEvent::initCulling(); // 0x1402112B0
void BattleStageEvent::initGroupObjects(); // 0x140211360
void BattleStageEvent::setupStartParamsGroupObjects(); // 0x1402114F0
void BattleStageEvent::updateGroupObjects(float frame, OGLVec3 groupDestinationPos, bool bPermissionInitFunc); // 0x140211950
void BattleStageEvent::runScript(float frame); // 0x140212490//decompilation failure at 1408A0B37!
void __fastcall BattleStageEvent::BattleStageEvent(
        BattleStageEvent *this,
        const BattleStageResourceContainer *pResourceContainer,
        BattleStageSound *pSound,
        BSDataObject *pObject)
{
  BattleStageShaderDef::CustomProcessVals *v8; // [rsp+40h] [rbp+8h]

  this->__vftable = (BattleStageEvent_vtbl *)&BattleStageShader::`vftable';
  this->m_renderType = RENDERTYPE_NORMAL;
  *(_WORD *)&this->m_bUVChanged = 0;
  this->m_bUseCustomProcess = 0;
  this->m_pCustomProcessBuffer = 0i64;
  this->m_customProcessBufferCount = 0;
  v8 = (BattleStageShaderDef::CustomProcessVals *)operator new(0x10ui64);
  v8->pBoneIndex = 0i64;
  this->m_pCustomProcessVals = v8;
  this->__vftable = (BattleStageEvent_vtbl *)&BattleStageEvent::`vftable';
  this->m_pResourceContainer = pResourceContainer;
  this->m_pSound = pSound;
  this->m_pObject = pObject;
  memset(&this->m_originalTransMatrix, 0, 0x80ui64);
  *(_QWORD *)&this->m_groupDestinationPos.x = 0i64;
  this->m_groupDestinationPos.z = 0.0;
  *(_QWORD *)&this->m_cullingModel.m_transform.m[4] = 0i64;
  *(_QWORD *)&this->m_cullingModel.m_transform.m[6] = 0i64;
  *(_QWORD *)&this->m_cullingModel.m_transform.m[14] = 0i64;
  *(_QWORD *)&this->m_cullingModel.m_obbCenter.x = 0i64;
  this->m_cullingModel.m_obbCenter.z = 0.0;
  *(_QWORD *)&this->m_cullingModel.m_obbDistance.x = 0i64;
  this->m_cullingModel.m_obbDistance.z = 0.0;
  this->m_cullingModel.m_modelType = MODELTYPE_NONE;
  this->m_cullingModel.m_pPoints = 0i64;
  this->m_cullingModel.m_pointCount = 0;
  *(_QWORD *)&this->m_cullingModel.m_transform.m[15] = 1065353216i64;
  this->m_cullingModel.m_bRefreshTransVertex = 0;
  this->m_cullingModel.m_pFaceCenters = 0i64;
  this->m_cullingModel.m_pFaceNormals = 0i64;
  *(_QWORD *)this->m_cullingModel.m_transform.m = 1065353216i64;
  this->m_cullingModel.m_transform.m[4] = 0.0;
  *(_QWORD *)&this->m_cullingModel.m_transform.m[8] = 0i64;
  *(_QWORD *)&this->m_cullingModel.m_transform.m[12] = 0i64;
  *(_QWORD *)&this->m_cullingModel.m_transform.m[5] = 1065353216i64;
  *(_QWORD *)&this->m_cullingModel.m_transform.m[2] = 0i64;
  *(_QWORD *)&this->m_cullingModel.m_transform.m[10] = 1065353216i64;
  this->m_cullingModel.m_transform.m[14] = 0.0;
  this->m_cullingModel.m_transform.m[7] = 0.0;
  this->m_cullingModel.m_pTransVertex = 0i64;
  this->m_cullingModel.m_pObbVectors = 0i64;
  this->m_cullingModel.m_pCubeParams = 0i64;
  this->m_scriptParams.m_pSoundOptionParams = 0i64;
  this->m_roundStartParams.pSoundName = 0i64;
  this->m_pUVAnimation = 0i64;
  this->m_pAFLookAtCharacter = 0i64;
  BattleStageEvent::clear(this);
}

void __fastcall BattleStageEvent::~BattleStageEvent(BattleStageEvent *this)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  int v4; // esi
  __int64 v5; // rdi
  OGLModel *pOGLModel; // rcx
  BattleStageEvent::GroupObject *m_pGroupObjects; // rcx
  OGLModel *m_pOGLModel; // rcx
  OGLFigure *m_pFigure; // rdi
  OGLModel *v10; // rcx
  extension::SoundObject *m_pSoundOptionParams; // rdi
  BattleStageEventUVAnimation *m_pUVAnimation; // rcx
  SAFEventLookAtCharacter *m_pAFLookAtCharacter; // rcx
  unsigned __int64 v14; // rdx
  BattleStageShaderDef::CustomProcessVals *m_pCustomProcessVals; // rdi
  int *pBoneIndex; // rcx

  this->__vftable = (BattleStageEvent_vtbl *)&BattleStageEvent::`vftable';
  BattleStageEvent::releaseOGLModel(this);
  if ( this->m_pGroupObjects )
  {
    v4 = 0;
    if ( this->m_groupObjectCount > 0 )
    {
      v5 = 0i64;
      do
      {
        pOGLModel = this->m_pGroupObjects[v5].pOGLModel;
        if ( pOGLModel )
        {
          ((void (__fastcall *)(OGLModel *, __int64))pOGLModel->~AgIThreadHost)(pOGLModel, 1i64);
          this->m_pGroupObjects[v5].pOGLModel = 0i64;
        }
        ++v4;
        ++v5;
      }
      while ( v4 < this->m_groupObjectCount );
    }
  }
  m_pGroupObjects = this->m_pGroupObjects;
  if ( m_pGroupObjects )
  {
    operator delete(m_pGroupObjects, v2);
    this->m_pGroupObjects = 0i64;
  }
  m_pOGLModel = this->m_pOGLModel;
  if ( m_pOGLModel )
  {
    if ( (this->m_createStateBits & 2) != 0 )
    {
      m_pFigure = m_pOGLModel->m_pFigure;
      OGLModel::setFigure(m_pOGLModel, 0i64, v3);
      if ( m_pFigure )
      {
        OGLFigure::finalize(m_pFigure, v2);
        operator delete(m_pFigure, 0x108ui64);
      }
    }
    if ( (this->m_createStateBits & 1) != 0 )
    {
      v10 = this->m_pOGLModel;
      if ( v10 )
      {
        ((void (__fastcall *)(OGLModel *, __int64))v10->~AgIThreadHost)(v10, 1i64);
        this->m_pOGLModel = 0i64;
      }
    }
    this->m_pOGLModel = 0i64;
    this->m_createStateBits = 0;
  }
  m_pSoundOptionParams = this->m_scriptParams.m_pSoundOptionParams;
  if ( m_pSoundOptionParams )
  {
    extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
      &this->m_scriptParams.m_pSoundOptionParams->m_runtimeEffector,
      v2);
    operator delete(m_pSoundOptionParams, 8ui64);
    this->m_scriptParams.m_pSoundOptionParams = 0i64;
  }
  m_pUVAnimation = this->m_pUVAnimation;
  if ( m_pUVAnimation )
  {
    ((void (__fastcall *)(BattleStageEventUVAnimation *, __int64))m_pUVAnimation->~BattleStageEventUVAnimation)(
      m_pUVAnimation,
      1i64);
    this->m_pUVAnimation = 0i64;
  }
  this->m_pUVAnimation = 0i64;
  m_pAFLookAtCharacter = this->m_pAFLookAtCharacter;
  if ( m_pAFLookAtCharacter )
  {
    ((void (__fastcall *)(SAFEventLookAtCharacter *, __int64))m_pAFLookAtCharacter->~SAFEventLookAtCharacter)(
      m_pAFLookAtCharacter,
      1i64);
    this->m_pAFLookAtCharacter = 0i64;
  }
  this->m_pAFLookAtCharacter = 0i64;
  this->m_pResourceEffects = 0i64;
  this->m_resourceEffectCount = 0;
  this->m_pSound = 0i64;
  this->m_pEvent = 0i64;
  this->m_pPlayingModelAnimation = 0i64;
  this->m_pPlayingEffectAnimation = 0i64;
  CollisionModel::release(&this->m_cullingModel);
  this->__vftable = (BattleStageEvent_vtbl *)&BattleStageShader::`vftable';
  BattleStageShader::release(this);
  m_pCustomProcessVals = this->m_pCustomProcessVals;
  if ( m_pCustomProcessVals )
  {
    pBoneIndex = m_pCustomProcessVals->pBoneIndex;
    if ( pBoneIndex )
    {
      operator delete(pBoneIndex, v14);
      m_pCustomProcessVals->pBoneIndex = 0i64;
    }
    operator delete(m_pCustomProcessVals, 0x10ui64);
    this->m_pCustomProcessVals = 0i64;
  }
}

char __fastcall BattleStageEvent::changeEvent(
        BattleStageEvent *this,
        BSDataEvent *pEvent,
        int triggerPriority,
        bool bPriorityCheck,
        bool bAnimationInitCheck)
{
  BSDataEvent *m_pEvent; // r10
  BattleStageResourceContainer *m_pResourceContainer; // rcx
  int m_triggerPriority; // eax
  int NeutralSceneUID; // eax
  int v13; // er9
  int v14; // er11
  char v15; // al

  m_pEvent = this->m_pEvent;
  if ( !m_pEvent )
    goto LABEL_19;
  m_pResourceContainer = (BattleStageResourceContainer *)this->m_pResourceContainer;
  if ( m_pResourceContainer->m_stageID != STAGE_ID_GTR || pEvent->m_uniqueID != 5 )
  {
    if ( !m_pEvent->m_bFinishActionInitParams && m_pEvent->m_uniqueID == pEvent->m_uniqueID )
      return 0;
    if ( bPriorityCheck )
    {
      m_triggerPriority = this->m_triggerPriority;
      if ( m_triggerPriority )
      {
        if ( triggerPriority > 0 && triggerPriority <= m_triggerPriority )
          return 0;
      }
    }
    if ( m_pEvent->m_parentUniqueID == pEvent->m_parentUniqueID )
      return 0;
    if ( !pEvent->m_bActive )
    {
      NeutralSceneUID = BattleStageResourceContainer::getNeutralSceneUID(m_pResourceContainer);
      if ( v14 == NeutralSceneUID || v13 != NeutralSceneUID )
        return 0;
    }
    if ( m_pEvent && pEvent && m_pEvent->m_uniqueID == pEvent->m_uniqueID )
    {
      v15 = 0;
      goto LABEL_20;
    }
LABEL_19:
    v15 = 1;
LABEL_20:
    this->m_triggerPriority = triggerPriority;
    this->m_pEvent = pEvent;
    *(_QWORD *)&this->m_frame = 0i64;
    this->m_bVisible = 1;
    if ( v15 || !bAnimationInitCheck || pEvent->m_bFinishActionInitParams )
    {
      *(_QWORD *)&this->m_selectAnimationIndex = -1i64;
      *(_QWORD *)&this->m_selectTranslationIndex = -1i64;
      *(_QWORD *)&this->m_animationFrame = 0i64;
    }
    else
    {
      this->m_animationChangeFrame = this->m_animationFrame;
    }
    this->m_animationFrame = 0.0;
    this->m_bPermissionDrawCall = 0;
    this->m_bUVAnimation = 0;
    *(_QWORD *)&this->m_runScriptUID = 0i64;
    *(_QWORD *)&this->m_scriptColorR = 0i64;
    this->m_scriptColorB = 0.0;
    BattleStageEvent::initCulling(this);
    if ( !this->m_bUseGroup && pEvent->m_pObject->m_bUseGroup )
      BattleStageEvent::initGroupObjects(this);
    if ( !bAnimationInitCheck )
      BattleStageEvent::update(this, this->m_timestamp, 0.0);
  }
  return 1;
}

void __fastcall BattleStageEvent::clear(BattleStageEvent *this)
{
  *(_WORD *)&this->m_bActive = 256;
  this->m_createStateBits = 0;
  this->m_contentsType = CONTENTS_TYPE_NONE;
  this->m_pOGLModel = 0i64;
  this->m_bStageModel = 0;
  this->m_pResourceEffects = 0i64;
  this->m_resourceEffectCount = 0;
  this->m_pEvent = 0i64;
  this->m_frame = 0.0;
  *(_WORD *)&this->m_bEffectActived = 0;
  this->m_pEffect = 0i64;
  this->m_triggerPriority = -1;
  this->m_useEffectIndex = -1;
  *(_QWORD *)this->m_transMatrix.m = 1065353216i64;
  this->m_transMatrix.m[4] = 0.0;
  *(_QWORD *)&this->m_transMatrix.m[8] = 0i64;
  *(_QWORD *)&this->m_transMatrix.m[12] = 0i64;
  *(_QWORD *)&this->m_transMatrix.m[5] = 1065353216i64;
  *(_QWORD *)&this->m_transMatrix.m[2] = 0i64;
  *(_QWORD *)&this->m_transMatrix.m[10] = 1065353216i64;
  this->m_transMatrix.m[14] = 0.0;
  this->m_transMatrix.m[7] = 0.0;
  this->m_transMatrix.m[15] = 1.0;
  this->m_bUVAnimation = 0;
  this->m_pPlayingModelAnimation = 0i64;
  this->m_pPlayingEffectAnimation = 0i64;
  this->m_pModelAnimationBlend = 0i64;
  this->m_bUseCulling = 0;
  this->m_cullingBindBoneIndex = -1;
  this->m_bCullingVisible = 1;
  this->m_pBindEvent = 0i64;
  this->m_bUseGroup = 0;
  this->m_groupObjectCount = 0;
  this->m_pGroupObjects = 0i64;
  *(_QWORD *)&this->m_selectAnimationIndex = -1i64;
  *(_QWORD *)&this->m_selectTranslationIndex = -1i64;
  *(_QWORD *)&this->m_animationFrame = 0i64;
  *(_QWORD *)&this->m_runScriptUID = 0i64;
  *(_QWORD *)&this->m_scriptColorR = 0i64;
  this->m_scriptColorB = 0.0;
}

void __fastcall BattleStageEvent::drawDirectRendring(BattleStageEvent *this)
{
  __int32 v2; // ecx
  __int32 v3; // ecx
  Effect *m_pEffect; // rcx

  if ( this->m_bCullingVisible
    && this->m_bPermissionDrawCall
    && this->m_bActive
    && this->m_bVisible
    && this->m_selectAnimationIndex >= 0 )
  {
    v2 = this->m_contentsType - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 == 1 )
          BattleStageEvent::renderBillboardAnimation(this);
      }
      else
      {
        m_pEffect = this->m_pEffect;
        if ( !m_pEffect || m_pEffect->getSurviveParticleFlag(m_pEffect) )
        {
          this->m_pEffect->updateVertexBuffer(this->m_pEffect);
          ((void (__fastcall *)(Effect *, __int64))this->m_pEffect->render)(this->m_pEffect, 3i64);
        }
      }
    }
  }
}

OGLMatrix *__fastcall BattleStageEvent::getBoneTransMatrix(BattleStageEvent *this, OGLMatrix *result, int boneIndex)
{
  OGLModel *m_pOGLModel; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  OGLFigure *m_pFigure; // rdx
  BSDataEventModelAnimation *m_pPlayingModelAnimation; // rax
  OGLMatrix *BoneRot; // rax
  __m128 v13; // xmm1
  __int128 v14; // xmm3
  __m128 v15; // xmm4
  OGLBone *v16; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm1
  OGLMatrix v28; // [rsp+20h] [rbp-29h] BYREF
  OGLMatrix In; // [rsp+60h] [rbp+17h] BYREF

  m_pOGLModel = this->m_pOGLModel;
  if ( m_pOGLModel )
  {
    if ( boneIndex >= 0 )
    {
      m_pFigure = m_pOGLModel->m_pFigure;
      if ( m_pFigure->m_uiBoneCount > boneIndex )
      {
        m_pPlayingModelAnimation = this->m_pPlayingModelAnimation;
        if ( m_pPlayingModelAnimation && m_pPlayingModelAnimation->m_pMotion )
        {
          OGLModel::syncPosture(m_pOGLModel);
          BoneRot = OGLModel::getBoneRot(this->m_pOGLModel, boneIndex);
          if ( BoneRot )
          {
            v13 = *(__m128 *)&BoneRot->m[4];
            v14 = *(_OWORD *)&BoneRot->m[8];
            v15 = *(__m128 *)&BoneRot->m[12];
            *(_OWORD *)v28.m = *(_OWORD *)BoneRot->m;
            *(_OWORD *)&v28.m[8] = v14;
            *(__m128 *)&v28.m[4] = v13;
            *(__m128 *)&v28.m[12] = v15;
            LODWORD(v28.m[2]) = _mm_shuffle_ps(*(__m128 *)v28.m, *(__m128 *)v28.m, 170).m128_u32[0] ^ _xmm;
            LODWORD(v28.m[9]) ^= _xmm;
            LODWORD(v28.m[6]) = _mm_shuffle_ps(v13, v13, 170).m128_u32[0] ^ _xmm;
            LODWORD(v28.m[8]) = v14 ^ _xmm;
            LODWORD(v28.m[14]) = _mm_shuffle_ps(v15, v15, 170).m128_u32[0] ^ _xmm;
LABEL_11:
            v20 = *(_OWORD *)&this->m_transMatrix.m[4];
            *(_OWORD *)In.m = *(_OWORD *)this->m_transMatrix.m;
            v21 = *(_OWORD *)&this->m_transMatrix.m[8];
            *(_OWORD *)&In.m[4] = v20;
            v22 = *(_OWORD *)&this->m_transMatrix.m[12];
            *(_OWORD *)&In.m[8] = v21;
            *(_OWORD *)&In.m[12] = v22;
            OGLMatrix::multiply(&v28, &In);
            v23 = *(_OWORD *)&v28.m[4];
            *(_OWORD *)result->m = *(_OWORD *)v28.m;
            v24 = *(_OWORD *)&v28.m[8];
            *(_OWORD *)&result->m[4] = v23;
            v25 = *(_OWORD *)&v28.m[12];
LABEL_13:
            *(_OWORD *)&result->m[8] = v24;
            *(_OWORD *)&result->m[12] = v25;
            return result;
          }
        }
        else
        {
          v16 = &m_pFigure->m_pBone[boneIndex];
          if ( v16 )
          {
            v17 = *(_OWORD *)&v16->m_mOffset.m[4];
            *(_OWORD *)v28.m = *(_OWORD *)v16->m_mOffset.m;
            v18 = *(_OWORD *)&v16->m_mOffset.m[8];
            *(_OWORD *)&v28.m[4] = v17;
            v19 = *(_OWORD *)&v16->m_mOffset.m[12];
            *(_OWORD *)&v28.m[8] = v18;
            *(_OWORD *)&v28.m[12] = v19;
            OGLMatrix::inverse(&v28);
            goto LABEL_11;
          }
        }
      }
    }
    v26 = *(_OWORD *)&this->m_transMatrix.m[4];
    *(_OWORD *)result->m = *(_OWORD *)this->m_transMatrix.m;
    v24 = *(_OWORD *)&this->m_transMatrix.m[8];
    *(_OWORD *)&result->m[4] = v26;
    v25 = *(_OWORD *)&this->m_transMatrix.m[12];
    goto LABEL_13;
  }
  v7 = *(_OWORD *)&this->m_transMatrix.m[4];
  *(_OWORD *)result->m = *(_OWORD *)this->m_transMatrix.m;
  v8 = *(_OWORD *)&this->m_transMatrix.m[8];
  *(_OWORD *)&result->m[4] = v7;
  v9 = *(_OWORD *)&this->m_transMatrix.m[12];
  *(_OWORD *)&result->m[8] = v8;
  *(_OWORD *)&result->m[12] = v9;
  return result;
}

void __fastcall BattleStageEvent::initCulling(BattleStageEvent *this)
{
  __int64 v1; // rbx
  BSDataEvent *m_pEvent; // rcx
  BSDataObject *m_pObject; // rax
  BSDataModel *m_pModel; // rdx
  bool m_bCullingEnable; // al
  int v7; // er8
  BSDataEvent *v8; // rdx
  const char *m_pCullingReferenceBoneName; // rdx

  v1 = -1i64;
  this->m_bUseCulling = 0;
  this->m_cullingBindBoneIndex = -1;
  this->m_bCullingVisible = 1;
  m_pEvent = this->m_pEvent;
  m_pObject = m_pEvent->m_pObject;
  if ( m_pObject )
  {
    if ( m_pObject->m_type == OBJECT_ANIMATION_MODEL )
    {
      m_pModel = m_pObject->m_pModel;
      if ( m_pModel )
      {
        m_bCullingEnable = m_pEvent->m_bCullingEnable;
        this->m_bUseCulling = m_bCullingEnable;
        if ( m_bCullingEnable )
        {
          CollisionModel::copy(&this->m_cullingModel, m_pModel->m_pCullingModel);
          v8 = this->m_pEvent;
          if ( v8->m_bCullingUseReferenceBone )
          {
            m_pCullingReferenceBoneName = v8->m_pCullingReferenceBoneName;
            if ( m_pCullingReferenceBoneName )
            {
              do
                ++v1;
              while ( m_pCullingReferenceBoneName[v1] );
              if ( v1 )
                this->m_cullingBindBoneIndex = OGLModel::getBoneNoFromName(
                                                 this->m_pOGLModel,
                                                 m_pCullingReferenceBoneName,
                                                 v7);
            }
          }
        }
      }
    }
  }
}

void __fastcall BattleStageEvent::initGroupObjects(BattleStageEvent *this, unsigned __int64 a2)
{
  BattleStageEvent::GroupObject *m_pGroupObjects; // rcx
  BSDataObject *m_pObject; // rax
  unsigned __int64 m_groupObjectCount; // rax
  unsigned __int64 v6; // rdi
  BattleStageEvent::GroupObject *v7; // rax
  _QWORD *p_z; // rcx
  int v9; // ebp
  __int64 v10; // rsi
  OGLModel *v11; // rax
  unsigned __int8 v12; // r8
  OGLModel *v13; // rdi
  OGLModel *m_pOGLModel; // r14
  OGLModel *pOGLModel; // rcx
  OGLModel *v16; // [rsp+50h] [rbp+8h]

  m_pGroupObjects = this->m_pGroupObjects;
  if ( m_pGroupObjects )
  {
    operator delete(m_pGroupObjects, a2);
    this->m_pGroupObjects = 0i64;
  }
  this->m_groupObjectCount = 0;
  m_pObject = this->m_pObject;
  this->m_bUseGroup = 1;
  this->m_groupAnimationFrame = 0.0;
  m_groupObjectCount = m_pObject->m_groupObjectCount;
  this->m_groupObjectCount = m_groupObjectCount;
  v6 = m_groupObjectCount;
  v7 = (BattleStageEvent::GroupObject *)operator new[](saturated_mul(m_groupObjectCount, 0x38ui64));
  if ( v7 )
  {
    if ( v6 )
    {
      p_z = (_QWORD *)&v7->pos.z;
      do
      {
        *(p_z - 1) = 0i64;
        *p_z = 0i64;
        p_z[1] = 0i64;
        p_z += 7;
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    v7 = 0i64;
  }
  this->m_pGroupObjects = v7;
  this->m_groupAnimationFrame = 3.4028235e38;
  v9 = 0;
  if ( this->m_groupObjectCount > 0 )
  {
    v10 = 0i64;
    do
    {
      this->m_pGroupObjects[v10].id = v9;
      v16 = (OGLModel *)operator new(0x2498ui64);
      OGLModel::OGLModel(v16);
      v13 = v11;
      m_pOGLModel = this->m_pOGLModel;
      if ( v11 )
      {
        if ( m_pOGLModel )
        {
          OGLModel::copyModel(v11, this->m_pOGLModel, v12);
          v13 = BSUtil::copyOGLModelExtraParams(m_pOGLModel, v13);
        }
      }
      else
      {
        v13 = 0i64;
      }
      this->m_pGroupObjects[v10].pOGLModel = v13;
      pOGLModel = this->m_pGroupObjects[v10].pOGLModel;
      *(_DWORD *)&pOGLModel->m_createShadowFlg = 0;
      pOGLModel->m_lowAccuracyShadowBias = 0;
      pOGLModel->m_bPrevBoneMirrorFlg = 0;
      ++v9;
      ++v10;
    }
    while ( v9 < this->m_groupObjectCount );
  }
}

void __fastcall BattleStageEvent::releaseOGLModel(BattleStageEvent *this, __int64 a2, unsigned __int64 a3)
{
  OGLModel *m_pOGLModel; // rcx
  OGLFigure *m_pFigure; // rdi
  unsigned int v6; // edx
  OGLModel *v7; // rcx

  m_pOGLModel = this->m_pOGLModel;
  if ( m_pOGLModel )
  {
    if ( (this->m_createStateBits & 2) != 0 )
    {
      m_pFigure = m_pOGLModel->m_pFigure;
      OGLModel::setFigure(m_pOGLModel, 0i64, a3);
      if ( m_pFigure )
        OGLFigure::`scalar deleting destructor'(m_pFigure, v6);
    }
    if ( (this->m_createStateBits & 1) != 0 )
    {
      v7 = this->m_pOGLModel;
      if ( v7 )
      {
        ((void (__fastcall *)(OGLModel *, __int64))v7->~AgIThreadHost)(v7, 1i64);
        this->m_pOGLModel = 0i64;
      }
    }
    this->m_pOGLModel = 0i64;
    this->m_createStateBits = 0;
  }
}

void __fastcall BattleStageEvent::renderBillboardAnimation(BattleStageEvent *this)
{
  BattleSystem::BattleController *v2; // rbx
  BattleSystem::BattleController *v3; // rax
  int m_selectAnimationIndex; // eax
  BSDataEvent *m_pEvent; // rdx
  BSDataEventBillboardAnimation *v6; // rdx
  BSDataBillboard *m_pBillboard; // rsi
  BSDataModel *m_pModel; // rax
  __m128 v9; // xmm11
  __m128 v10; // xmm12
  __m128 v11; // xmm13
  __m128 v12; // xmm10
  float v13; // xmm7_4
  int m_groupObjectCount; // eax
  float v15; // xmm14_4
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // r13
  OGLMatrix *p_m_transMatrix; // rdx
  OGLVec3 *v20; // rax
  float z; // xmm7_4
  float y; // xmm8_4
  float x; // xmm9_4
  int v24; // edx
  __int64 m_rectsCount; // r10
  __int64 v26; // rbx
  int *p_angle; // r9
  int v28; // ecx
  __int64 v29; // r8
  float v30; // xmm4_4
  float v31; // xmm5_4
  float v32; // xmm6_4
  int v33; // edx
  int m_animationCount; // er8
  int m_frame; // ett
  float v36; // xmm3_4
  float v37; // xmm2_4
  OGLModel *m_pOGLModel; // rax
  char *m_pfVertexBuffer; // r8
  OGLFigure *m_pFigure; // rcx
  char *v41; // rax
  float *v42; // rdx
  OGLModel *v43; // rax
  int v44; // er9
  OGLVec3 v45; // [rsp+38h] [rbp-D0h] BYREF
  OGLVec3 result; // [rsp+48h] [rbp-C0h] BYREF
  OGLMatrix oglMatrix; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+98h] [rbp-70h]
  __m128 v49; // [rsp+A8h] [rbp-60h]
  __m128 v50; // [rsp+B8h] [rbp-50h]
  OGLVec3 v51; // [rsp+C8h] [rbp-40h] BYREF
  OGLVec3 v52; // [rsp+D4h] [rbp-34h] BYREF
  BattleSystem::BattleController *v53; // [rsp+1D8h] [rbp+D0h]
  __int64 v54; // [rsp+1D8h] [rbp+D0h]
  __int64 v55; // [rsp+1E0h] [rbp+D8h]
  int *p_textureDivisionCountRow; // [rsp+1E8h] [rbp+E0h]
  OGLRender *v57; // [rsp+1F0h] [rbp+E8h]

  v48 = -2i64;
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v53 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v53);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  v57 = *(OGLRender **)(*(_QWORD *)&AppMain::pApp + 80i64);
  if ( this->m_pOGLModel )
  {
    m_selectAnimationIndex = this->m_selectAnimationIndex;
    if ( m_selectAnimationIndex >= 0 )
    {
      m_pEvent = this->m_pEvent;
      if ( m_selectAnimationIndex < m_pEvent->m_animationCount )
      {
        v6 = m_pEvent->m_pBillboardAnimations[this->m_selectAnimationIndex];
        if ( v6 )
        {
          m_pBillboard = v6->m_pBillboard;
          if ( m_pBillboard )
          {
            m_pModel = m_pBillboard->m_pModel;
            if ( m_pModel )
            {
              if ( m_pModel->m_materialCount > 0 )
              {
                p_textureDivisionCountRow = &m_pModel->m_pMaterials->textureDivisionCountRow;
                if ( p_textureDivisionCountRow )
                {
                  if ( v2->actSystem.bFreeCameraMode )
                  {
                    v9 = *(__m128 *)v2->actSystem.freeCamera.mBillboard.m;
                    v10 = *(__m128 *)&v2->actSystem.freeCamera.mBillboard.m[4];
                    v11 = *(__m128 *)&v2->actSystem.freeCamera.mBillboard.m[8];
                    v12 = *(__m128 *)&v2->actSystem.freeCamera.mBillboard.m[12];
                  }
                  else
                  {
                    v9 = *(__m128 *)v2->actSystem.cameraCtrl.mBillboard.m;
                    v10 = *(__m128 *)&v2->actSystem.cameraCtrl.mBillboard.m[4];
                    v11 = *(__m128 *)&v2->actSystem.cameraCtrl.mBillboard.m[8];
                    v12 = *(__m128 *)&v2->actSystem.cameraCtrl.mBillboard.m[12];
                  }
                  *(__m128 *)&oglMatrix.m[12] = v12;
                  *(__m128 *)&oglMatrix.m[8] = v11;
                  *(__m128 *)&oglMatrix.m[4] = v10;
                  *(__m128 *)oglMatrix.m = v9;
                  BSUtil::toRotate(&result, &oglMatrix);
                  ActionSystem::GetCameraPos(&v2->actSystem, &v45);
                  *(__m128 *)oglMatrix.m = v9;
                  *(__m128 *)&oglMatrix.m[4] = v10;
                  *(__m128 *)&oglMatrix.m[8] = v11;
                  v49 = _mm_shuffle_ps(v12, v12, 85);
                  v50 = _mm_shuffle_ps(v12, v12, 170);
                  oglMatrix.m[12] = (float)((float)((float)(v9.m128_f32[0] * v45.x) + (float)(v10.m128_f32[0] * v45.y))
                                          + (float)(v11.m128_f32[0] * v45.z))
                                  + v12.m128_f32[0];
                  oglMatrix.m[13] = (float)((float)((float)(_mm_shuffle_ps(v9, v9, 85).m128_f32[0] * v45.x)
                                                  + (float)(_mm_shuffle_ps(v10, v10, 85).m128_f32[0] * v45.y))
                                          + (float)(_mm_shuffle_ps(v11, v11, 85).m128_f32[0] * v45.z))
                                  + v49.m128_f32[0];
                  oglMatrix.m[14] = (float)((float)((float)(_mm_shuffle_ps(v9, v9, 170).m128_f32[0] * v45.x)
                                                  + (float)(_mm_shuffle_ps(v10, v10, 170).m128_f32[0] * v45.y))
                                          + (float)(_mm_shuffle_ps(v11, v11, 170).m128_f32[0] * v45.z))
                                  + v50.m128_f32[0];
                  v13 = *(float *)&FLOAT_1_0;
                  oglMatrix.m[15] = 1.0;
                  OGLMatrix::inverse(&oglMatrix);
                  if ( this->m_bUseGroup )
                    m_groupObjectCount = this->m_groupObjectCount;
                  else
                    m_groupObjectCount = 1;
                  v55 = m_groupObjectCount;
                  if ( m_groupObjectCount <= 0 )
                    goto LABEL_36;
                  v15 = 360.0 - result.y;
                  v16 = 0i64;
                  v17 = 0i64;
                  v18 = 0i64;
                  v54 = 6i64;
                  while ( 1 )
                  {
                    p_m_transMatrix = &this->m_transMatrix;
                    if ( this->m_bUseGroup )
                    {
                      result = this->m_pGroupObjects[v16].pos;
                      v20 = BSUtil::toRotate(&v51, p_m_transMatrix);
                      z = result.z;
                      y = result.y;
                      x = result.x;
                    }
                    else
                    {
                      x = this->m_transMatrix.m[12];
                      y = this->m_transMatrix.m[13];
                      z = this->m_transMatrix.m[14];
                      v20 = BSUtil::toRotate(&v52, p_m_transMatrix);
                    }
                    *(_QWORD *)&v45.x = *(_QWORD *)&v20->x;
                    v24 = (int)fmodf(v15 + v45.y, 360.0);
                    m_rectsCount = m_pBillboard->m_rectsCount;
                    v26 = 0i64;
                    if ( (int)m_rectsCount <= 1 )
                      goto LABEL_32;
                    p_angle = &m_pBillboard->m_pRects->angle;
                    v28 = p_angle[6 * (int)m_rectsCount - 6];
                    v29 = 0i64;
                    if ( (int)m_rectsCount <= 0 )
                      goto LABEL_32;
                    while ( v28 <= *p_angle )
                    {
                      if ( v28 <= v24 )
                        goto LABEL_28;
LABEL_29:
                      v28 = *p_angle;
                      ++v29;
                      p_angle += 6;
                      if ( v29 >= m_rectsCount )
                        goto LABEL_32;
                    }
                    if ( v28 <= v24 )
                      goto LABEL_31;
LABEL_28:
                    if ( v24 > *p_angle )
                      goto LABEL_29;
LABEL_31:
                    v26 = v29;
LABEL_32:
                    v30 = (float)((float)(oglMatrix.m[4] * y) + (float)(oglMatrix.m[0] * x))
                        + (float)(oglMatrix.m[8] * z);
                    v31 = (float)((float)(oglMatrix.m[5] * y) + (float)(oglMatrix.m[1] * x))
                        + (float)(oglMatrix.m[9] * z);
                    v32 = (float)((float)(oglMatrix.m[6] * y) + (float)(oglMatrix.m[2] * x))
                        + (float)(oglMatrix.m[10] * z);
                    v33 = 0;
                    m_animationCount = m_pBillboard->m_animationCount;
                    if ( m_animationCount > 1 )
                    {
                      m_frame = (int)this->m_frame;
                      v33 = m_frame / (int)m_pBillboard->m_imageAnimationFrame % m_animationCount;
                      if ( v33 < 0 )
                        v33 = m_animationCount + v33 - 1;
                    }
                    v13 = *(float *)&FLOAT_1_0;
                    v36 = (float)(1.0 / (float)p_textureDivisionCountRow[1])
                        * (float)(m_pBillboard->m_pRects[v26].pImagesPanelIndex[v33] % p_textureDivisionCountRow[1]);
                    v37 = (float)(1.0 / (float)*p_textureDivisionCountRow)
                        * (float)(m_pBillboard->m_pRects[v26].pImagesPanelIndex[v33] / p_textureDivisionCountRow[1]);
                    m_pOGLModel = this->m_pOGLModel;
                    m_pfVertexBuffer = (char *)m_pOGLModel->m_pfVertexBuffer;
                    m_pFigure = m_pOGLModel->m_pFigure;
                    v41 = (char *)m_pFigure->m_pfVertexBuffer;
                    v42 = m_pFigure->m_pfTexCoord[0];
                    *(float *)&m_pfVertexBuffer[v17] = v30 + *(float *)&v41[v18];
                    *(float *)&m_pfVertexBuffer[v17 + 4] = v31 + *(float *)&v41[v18 + 4];
                    *(float *)&m_pfVertexBuffer[v17 + 8] = *(float *)&v41[v18 + 8] - v32;
                    *(float *)&m_pfVertexBuffer[v17 + 56] = v36 + v42[v54 - 6];
                    *(float *)&m_pfVertexBuffer[v17 + 60] = v37 + v42[v54 - 5];
                    *(float *)&m_pfVertexBuffer[v17 + 88] = v30 + *(float *)&v41[v18 + 136];
                    *(float *)&m_pfVertexBuffer[v17 + 92] = v31 + *(float *)&v41[v18 + 140];
                    *(float *)&m_pfVertexBuffer[v17 + 96] = *(float *)&v41[v18 + 144] - v32;
                    *(float *)&m_pfVertexBuffer[v17 + 144] = v36 + v42[v54 - 4];
                    *(float *)&m_pfVertexBuffer[v17 + 148] = v37 + v42[v54 - 3];
                    *(float *)&m_pfVertexBuffer[v17 + 176] = v30 + *(float *)&v41[v18 + 272];
                    *(float *)&m_pfVertexBuffer[v17 + 180] = v31 + *(float *)&v41[v18 + 276];
                    *(float *)&m_pfVertexBuffer[v17 + 184] = *(float *)&v41[v18 + 280] - v32;
                    *(float *)&m_pfVertexBuffer[v17 + 232] = v36 + v42[v54 - 2];
                    *(float *)&m_pfVertexBuffer[v17 + 236] = v37 + v42[v54 - 1];
                    *(float *)&m_pfVertexBuffer[v17 + 264] = v30 + *(float *)&v41[v18 + 408];
                    *(float *)&m_pfVertexBuffer[v17 + 268] = v31 + *(float *)&v41[v18 + 412];
                    *(float *)&m_pfVertexBuffer[v17 + 272] = *(float *)&v41[v18 + 416] - v32;
                    *(float *)&m_pfVertexBuffer[v17 + 320] = v36 + v42[v54];
                    *(float *)&m_pfVertexBuffer[v17 + 324] = v37 + v42[v54 + 1];
                    ++v16;
                    v18 += 544i64;
                    v17 += 352i64;
                    v54 += 8i64;
                    if ( !--v55 )
                    {
LABEL_36:
                      OGLModel::rebuildVertexBuffer(this->m_pOGLModel);
                      v43 = this->m_pOGLModel;
                      LODWORD(v43->m_vPosition.x) = v12.m128_i32[0];
                      LODWORD(v43->m_vPosition.y) = v49.m128_i32[0];
                      LODWORD(v43->m_vPosition.z) = v50.m128_i32[0];
                      *(__m128 *)v43->m_mWorld.m = v9;
                      *(__m128 *)&v43->m_mWorld.m[4] = v10;
                      *(__m128 *)&v43->m_mWorld.m[8] = v11;
                      *(__m128 *)&v43->m_mWorld.m[12] = v12;
                      v43->m_bPostureChange = 1;
                      OGLRender::addStack(v57, this->m_pOGLModel, v13, v44);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

void __fastcall BattleStageEvent::renderModel(BattleStageEvent *this, __int64 a2, __int64 a3, int a4)
{
  BattleStageShader::Param::RenderType m_renderType; // eax
  OGLModel *m_pOGLModel; // rsi
  OGLRender *v7; // r14
  int v8; // ebp
  __int64 v9; // rdi
  OGLModel *pOGLModel; // rcx
  __int128 v11; // xmm1

  if ( !this->m_bStageModel )
  {
    m_renderType = this->m_renderType;
    if ( m_renderType )
    {
      if ( m_renderType == RENDERTYPE_CUSTOM_DRAW_STACK && this->m_pResourceContainer->m_stageID == STAGE_ID_SAM )
        OGLRender::addStack(*(OGLRender **)(*(_QWORD *)&AppMain::pApp + 80i64), this->m_pOGLModel, 1.0, a4);
    }
    else
    {
      m_pOGLModel = this->m_pOGLModel;
      v7 = *(OGLRender **)(*(_QWORD *)&AppMain::pApp + 80i64);
      if ( this->m_bUseGroup )
      {
        v8 = 0;
        if ( this->m_groupObjectCount > 0 )
        {
          v9 = 0i64;
          do
          {
            pOGLModel = this->m_pGroupObjects[v9].pOGLModel;
            pOGLModel->m_vPosition.x = m_pOGLModel->m_mWorld.m[12];
            pOGLModel->m_vPosition.y = m_pOGLModel->m_mWorld.m[13];
            pOGLModel->m_vPosition.z = m_pOGLModel->m_mWorld.m[14];
            *(_OWORD *)pOGLModel->m_mWorld.m = *(_OWORD *)m_pOGLModel->m_mWorld.m;
            *(_OWORD *)&pOGLModel->m_mWorld.m[4] = *(_OWORD *)&m_pOGLModel->m_mWorld.m[4];
            *(_OWORD *)&pOGLModel->m_mWorld.m[8] = *(_OWORD *)&m_pOGLModel->m_mWorld.m[8];
            v11 = *(_OWORD *)&m_pOGLModel->m_mWorld.m[12];
            pOGLModel->m_bPostureChange = 1;
            *(_OWORD *)&pOGLModel->m_mWorld.m[12] = v11;
            this->m_pGroupObjects[v9].pOGLModel->m_mWorld.m[12] = this->m_pGroupObjects[v9].pos.x;
            this->m_pGroupObjects[v9].pOGLModel->m_mWorld.m[13] = this->m_pGroupObjects[v9].pos.y;
            this->m_pGroupObjects[v9].pOGLModel->m_mWorld.m[14] = this->m_pGroupObjects[v9].pos.z;
            OGLRender::addStack(v7, this->m_pGroupObjects[v9].pOGLModel, 1.0, a4);
            ++v8;
            ++v9;
          }
          while ( v8 < this->m_groupObjectCount );
        }
      }
      else
      {
        OGLRender::addStack(*(OGLRender **)(*(_QWORD *)&AppMain::pApp + 80i64), m_pOGLModel, 1.0, a4);
      }
    }
  }
}

void __fastcall BattleStageEvent::runScript(BattleStageEvent *this, float frame)
{
  BSDataEvent *m_pEvent; // r9
  int m_scriptCount; // eax
  int m_runScriptIndex; // edx
  int v7; // edx
  BSDataEventScript *v8; // r8
  __int64 v9; // r8
  BSDataEventScript *v10; // rsi
  int v11; // er8
  float m_colorParams_colorB; // xmm7_4
  float m_colorParams_colorG; // xmm8_4
  float m_colorParams_colorR; // xmm3_4
  __int64 v15; // rcx
  BSDataEventScript *v16; // rdx
  float m_colorParams_actionFrame; // xmm1_4
  float v18; // xmm6_4
  float v19; // xmm6_4
  Tween::EasingType m_colorParams_easingType; // ebx

  m_pEvent = this->m_pEvent;
  m_scriptCount = m_pEvent->m_scriptCount;
  if ( m_scriptCount > 0 )
  {
    m_runScriptIndex = this->m_runScriptIndex;
    if ( m_runScriptIndex < m_scriptCount )
    {
      v7 = m_runScriptIndex + 1;
      if ( v7 < m_scriptCount && v7 >= 0 && v7 < m_scriptCount )
      {
        v8 = m_pEvent->m_pScripts[v7];
        if ( v8 )
        {
          if ( frame >= (float)v8->m_startFrame )
            this->m_runScriptIndex = v7;
        }
      }
      v9 = this->m_runScriptIndex;
      if ( (int)v9 >= 0 && (int)v9 < m_pEvent->m_scriptCount )
      {
        v10 = m_pEvent->m_pScripts[v9];
        if ( v10 )
        {
          if ( (v10->m_scriptTypeBits & 1) != 0 )
          {
            v11 = v9 - 1;
            m_colorParams_colorB = 0.0;
            m_colorParams_colorG = 0.0;
            m_colorParams_colorR = 0.0;
            if ( v11 >= 0 )
            {
              v15 = v11;
              while ( 1 )
              {
                v16 = v11 >= m_pEvent->m_scriptCount ? 0i64 : m_pEvent->m_pScripts[v15];
                if ( (v16->m_scriptTypeBits & 1) != 0 )
                  break;
                --v11;
                if ( --v15 < 0 )
                  goto LABEL_22;
              }
              m_colorParams_colorR = v16->m_colorParams_colorR;
              m_colorParams_colorG = v16->m_colorParams_colorG;
              m_colorParams_colorB = v16->m_colorParams_colorB;
            }
LABEL_22:
            m_colorParams_actionFrame = (float)v10->m_colorParams_actionFrame;
            v18 = frame - (float)(v10->m_startFrame - 1);
            if ( v18 <= m_colorParams_actionFrame )
            {
              v19 = v18 / m_colorParams_actionFrame;
              m_colorParams_easingType = v10->m_colorParams_easingType;
              this->m_scriptColorR = Tween::easing(
                                       m_colorParams_colorR,
                                       v10->m_colorParams_colorR,
                                       v19,
                                       m_colorParams_easingType);
              this->m_scriptColorG = Tween::easing(
                                       m_colorParams_colorG,
                                       v10->m_colorParams_colorG,
                                       v19,
                                       m_colorParams_easingType);
              this->m_scriptColorB = Tween::easing(
                                       m_colorParams_colorB,
                                       v10->m_colorParams_colorB,
                                       v19,
                                       m_colorParams_easingType);
            }
          }
        }
      }
    }
  }
}

void __fastcall BattleStageEvent::setupBillboardAnimation(
        BattleStageEvent *this,
        BSDataEvent *pEvent,
        unsigned __int64 selectAnimation)
{
  __int64 v3; // rbx
  BSDataEventBillboardAnimation *v6; // rdx
  BSDataBillboard *m_pBillboard; // rdx
  BSDataModel *m_pModel; // rcx
  const OGLModel *m_pOGLModel; // rbp
  __int64 m_materialIndex; // r8
  OGLMaterial *v11; // r14
  int *p_textureDivisionCountRow; // r8
  __int64 m_textureType; // r9
  OGLTexture *v14; // r12
  float v15; // xmm9_4
  float v16; // xmm8_4
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  int v20; // esi
  OGLFigure *OGLFigure; // rdi
  unsigned int v22; // ebx
  int v23; // er8
  int v24; // er10
  __int64 v25; // r9
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // r11
  float *m_pfVertexCoord; // rax
  float *v35; // rax
  float *v36; // rax
  float *v37; // rax
  float *v38; // rax
  float *v39; // rax
  float *v40; // rax
  float *v41; // rax
  float *v42; // rax
  float *v43; // rax
  float *v44; // rax
  float *v45; // rax
  float *v46; // rax
  float *v47; // rax
  float *v48; // rax
  float *v49; // rax
  float v50; // xmm0_4
  float v51; // xmm1_4
  float v52; // xmm7_4
  float v53; // xmm6_4
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r8
  float *v57; // rax
  float *v58; // rax
  float *v59; // rax
  float *v60; // rax
  int v61; // er10
  int v62; // er11
  __int64 v63; // rcx
  __int64 v64; // rdx
  unsigned int v65; // eax
  __int64 v66; // r8
  float *m_pfNormalCoord; // rax
  float *v68; // rax
  float *v69; // rax
  float *v70; // rax
  float *v71; // rax
  float *v72; // rax
  float *v73; // rax
  float *v74; // rax
  float *v75; // rax
  float *v76; // rax
  float *v77; // rax
  float *v78; // rax
  float *v79; // rax
  float *v80; // rax
  float *v81; // rax
  float *v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // r8
  float *v86; // rax
  float *v87; // rax
  float *v88; // rax
  float *v89; // rax
  __int64 v90; // rdx
  int v91; // er8
  __int64 v92; // r10
  unsigned int *m_pusIndex; // rcx
  unsigned int *v94; // rcx
  unsigned int v95; // er9
  float **m_pfTexCoord; // r8
  float *v97; // rax
  float v98; // xmm0_4
  float v99; // xmm1_4
  __int64 v100; // rcx
  OGLMaterial *m_pMaterial; // rsi
  unsigned int m_usIndexCount; // er14
  __int64 v103; // rdx
  unsigned __int64 v104; // r8
  void *v105; // rax
  unsigned int v106; // eax
  OGLModel *v107; // rax
  OGLModel *v108; // rsi
  unsigned __int64 v109; // r8
  __int64 v110; // rdx
  OGLTexture **v111; // rcx
  OGLModel *v112; // rax
  OGLModel *v113; // [rsp+B8h] [rbp+20h]

  v3 = (int)selectAnimation;
  BattleStageEvent::releaseOGLModel(this, (__int64)pEvent, selectAnimation);
  if ( (int)v3 >= 0 && (int)v3 < pEvent->m_animationCount )
  {
    v6 = pEvent->m_pBillboardAnimations[v3];
    if ( v6 )
    {
      m_pBillboard = v6->m_pBillboard;
      if ( m_pBillboard )
      {
        m_pModel = m_pBillboard->m_pModel;
        if ( m_pModel )
        {
          m_pOGLModel = m_pModel->m_pOGLModel;
          if ( m_pOGLModel )
          {
            m_materialIndex = m_pBillboard->m_materialIndex;
            if ( m_pOGLModel->m_ucMaterialCount > (int)m_materialIndex )
            {
              v11 = &m_pOGLModel->m_pMaterial[m_materialIndex];
              if ( v11 )
              {
                if ( m_pModel->m_materialCount > 0 )
                {
                  p_textureDivisionCountRow = &m_pModel->m_pMaterials->textureDivisionCountRow;
                  if ( p_textureDivisionCountRow )
                  {
                    m_textureType = m_pBillboard->m_textureType;
                    v14 = (_DWORD)m_textureType ? m_pOGLModel->m_pMaterialMap[v11->m_cTextureIndex][m_textureType] : m_pOGLModel->m_pTexture[v11->m_cTextureIndex][m_pBillboard->m_multiTextureIndex];
                    if ( v14 )
                    {
                      v15 = 1.0 / (float)p_textureDivisionCountRow[1];
                      v16 = 1.0 / (float)*p_textureDivisionCountRow;
                      v17 = m_pBillboard->m_imageRenderSize * 0.5;
                      v18 = v17 * v15;
                      v19 = v17 * v16;
                      v20 = this->m_bUseGroup ? this->m_groupObjectCount : 1;
                      OGLFigure = BSUtil::createOGLFigure(4 * v20, 6 * v20, 1, m_textureType);
                      if ( OGLFigure )
                      {
                        v22 = 0;
                        v23 = 0;
                        v24 = 0;
                        v25 = 2i64;
                        if ( v20 >= 4 )
                        {
                          v26 = 0.0 - v18;
                          v27 = 0.0 - v19;
                          v28 = v18 + 0.0;
                          v29 = v19 + 0.0;
                          v30 = 0i64;
                          v31 = 2i64;
                          v32 = ((unsigned int)(v20 - 4) >> 2) + 1;
                          v33 = v32;
                          v23 = 16 * v32;
                          v24 = 4 * v32;
                          do
                          {
                            m_pfVertexCoord = OGLFigure->m_pfVertexCoord;
                            m_pfVertexCoord[v30] = v26;
                            m_pfVertexCoord[v30 + 1] = v27;
                            m_pfVertexCoord[v31] = 0.0;
                            v35 = OGLFigure->m_pfVertexCoord;
                            v35[v30 + 3] = v28;
                            v35[v30 + 4] = v27;
                            v35[v31 + 3] = 0.0;
                            v36 = OGLFigure->m_pfVertexCoord;
                            v36[v30 + 6] = v26;
                            v36[v30 + 7] = v29;
                            v36[v31 + 6] = 0.0;
                            v37 = OGLFigure->m_pfVertexCoord;
                            v37[v30 + 9] = v28;
                            v37[v30 + 10] = v29;
                            v37[v31 + 9] = 0.0;
                            v38 = OGLFigure->m_pfVertexCoord;
                            v38[v30 + 12] = v26;
                            v38[v30 + 13] = v27;
                            v38[v31 + 12] = 0.0;
                            v39 = OGLFigure->m_pfVertexCoord;
                            v39[v30 + 15] = v28;
                            v39[v30 + 16] = v27;
                            v39[v31 + 15] = 0.0;
                            v40 = OGLFigure->m_pfVertexCoord;
                            v40[v30 + 18] = v26;
                            v40[v30 + 19] = v29;
                            v40[v31 + 18] = 0.0;
                            v41 = OGLFigure->m_pfVertexCoord;
                            v41[v30 + 21] = v28;
                            v41[v30 + 22] = v29;
                            v41[v31 + 21] = 0.0;
                            v42 = OGLFigure->m_pfVertexCoord;
                            v42[v30 + 24] = v26;
                            v42[v30 + 25] = v27;
                            v42[v31 + 24] = 0.0;
                            v43 = OGLFigure->m_pfVertexCoord;
                            v43[v30 + 27] = v28;
                            v43[v30 + 28] = v27;
                            v43[v31 + 27] = 0.0;
                            v44 = OGLFigure->m_pfVertexCoord;
                            v44[v30 + 30] = v26;
                            v44[v30 + 31] = v29;
                            v44[v31 + 30] = 0.0;
                            v45 = OGLFigure->m_pfVertexCoord;
                            v45[v30 + 33] = v28;
                            v45[v30 + 34] = v29;
                            v45[v31 + 33] = 0.0;
                            v46 = OGLFigure->m_pfVertexCoord;
                            v46[v30 + 36] = v26;
                            v46[v30 + 37] = v27;
                            v46[v31 + 36] = 0.0;
                            v47 = OGLFigure->m_pfVertexCoord;
                            v47[v30 + 39] = v28;
                            v47[v30 + 40] = v27;
                            v47[v31 + 39] = 0.0;
                            v48 = OGLFigure->m_pfVertexCoord;
                            v48[v30 + 42] = v26;
                            v48[v30 + 43] = v29;
                            v48[v31 + 42] = 0.0;
                            v49 = OGLFigure->m_pfVertexCoord;
                            v49[v30 + 45] = v28;
                            v49[v30 + 46] = v29;
                            v49[v31 + 45] = 0.0;
                            v30 += 48i64;
                            v31 += 48i64;
                            --v33;
                          }
                          while ( v33 );
                        }
                        if ( v24 < v20 )
                        {
                          v50 = 0.0 - v18;
                          v51 = 0.0 - v19;
                          v52 = v18 + 0.0;
                          v53 = v19 + 0.0;
                          v54 = 3i64 * v23;
                          v55 = v54 * 4 + 8;
                          v56 = (unsigned int)(v20 - v24);
                          do
                          {
                            v57 = OGLFigure->m_pfVertexCoord;
                            v57[v54] = v50;
                            v57[v54 + 1] = v51;
                            *(float *)((char *)v57 + v55) = 0.0;
                            v58 = OGLFigure->m_pfVertexCoord;
                            v58[v54 + 3] = v52;
                            v58[v54 + 4] = v51;
                            *(float *)((char *)v58 + v55 + 12) = 0.0;
                            v59 = OGLFigure->m_pfVertexCoord;
                            v59[v54 + 6] = v50;
                            v59[v54 + 7] = v53;
                            *(float *)((char *)v59 + v55 + 24) = 0.0;
                            v60 = OGLFigure->m_pfVertexCoord;
                            v60[v54 + 9] = v52;
                            v60[v54 + 10] = v53;
                            *(float *)((char *)v60 + v55 + 36) = 0.0;
                            v54 += 12i64;
                            v55 += 48i64;
                            --v56;
                          }
                          while ( v56 );
                        }
                        v61 = 0;
                        v62 = 0;
                        if ( v20 >= 4 )
                        {
                          v63 = 0i64;
                          v64 = 2i64;
                          v65 = ((unsigned int)(v20 - 4) >> 2) + 1;
                          v66 = v65;
                          v61 = 16 * v65;
                          v62 = 4 * v65;
                          do
                          {
                            m_pfNormalCoord = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&m_pfNormalCoord[v63] = 0i64;
                            m_pfNormalCoord[v64] = -1.0;
                            v68 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v68[v63 + 3] = 0i64;
                            v68[v64 + 3] = -1.0;
                            v69 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v69[v63 + 6] = 0i64;
                            v69[v64 + 6] = -1.0;
                            v70 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v70[v63 + 9] = 0i64;
                            v70[v64 + 9] = -1.0;
                            v71 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v71[v63 + 12] = 0i64;
                            v71[v64 + 12] = -1.0;
                            v72 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v72[v63 + 15] = 0i64;
                            v72[v64 + 15] = -1.0;
                            v73 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v73[v63 + 18] = 0i64;
                            v73[v64 + 18] = -1.0;
                            v74 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v74[v63 + 21] = 0i64;
                            v74[v64 + 21] = -1.0;
                            v75 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v75[v63 + 24] = 0i64;
                            v75[v64 + 24] = -1.0;
                            v76 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v76[v63 + 27] = 0i64;
                            v76[v64 + 27] = -1.0;
                            v77 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v77[v63 + 30] = 0i64;
                            v77[v64 + 30] = -1.0;
                            v78 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v78[v63 + 33] = 0i64;
                            v78[v64 + 33] = -1.0;
                            v79 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v79[v63 + 36] = 0i64;
                            v79[v64 + 36] = -1.0;
                            v80 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v80[v63 + 39] = 0i64;
                            v80[v64 + 39] = -1.0;
                            v81 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v81[v63 + 42] = 0i64;
                            v81[v64 + 42] = -1.0;
                            v82 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v82[v63 + 45] = 0i64;
                            v82[v64 + 45] = -1.0;
                            v63 += 48i64;
                            v64 += 48i64;
                            --v66;
                          }
                          while ( v66 );
                        }
                        if ( v62 < v20 )
                        {
                          v83 = 3i64 * v61;
                          v84 = v83 * 4 + 8;
                          v85 = (unsigned int)(v20 - v62);
                          do
                          {
                            v86 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v86[v83] = 0i64;
                            *(float *)((char *)v86 + v84) = -1.0;
                            v87 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v87[v83 + 3] = 0i64;
                            *(float *)((char *)v87 + v84 + 12) = -1.0;
                            v88 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v88[v83 + 6] = 0i64;
                            *(float *)((char *)v88 + v84 + 24) = -1.0;
                            v89 = OGLFigure->m_pfNormalCoord;
                            *(_QWORD *)&v89[v83 + 9] = 0i64;
                            *(float *)((char *)v89 + v84 + 36) = -1.0;
                            v83 += 12i64;
                            v84 += 48i64;
                            --v85;
                          }
                          while ( v85 );
                        }
                        if ( v20 > 0 )
                        {
                          v90 = 0i64;
                          v91 = 2;
                          v92 = (unsigned int)v20;
                          do
                          {
                            m_pusIndex = OGLFigure->m_pusIndex;
                            m_pusIndex[v90] = v91 - 2;
                            m_pusIndex[v90 + 1] = v91 - 1;
                            m_pusIndex[v25] = v91;
                            v94 = OGLFigure->m_pusIndex;
                            v94[v90 + 3] = v91;
                            v94[v90 + 4] = v91 - 1;
                            v94[v25 + 3] = v91 + 1;
                            v90 += 6i64;
                            v25 += 6i64;
                            v91 += 4;
                            --v92;
                          }
                          while ( v92 );
                        }
                        v95 = 0;
                        if ( OGLFigure->m_uiMultiUvCount )
                        {
                          m_pfTexCoord = OGLFigure->m_pfTexCoord;
                          do
                          {
                            v97 = *m_pfTexCoord;
                            if ( v20 > 0 )
                            {
                              v98 = v16 + 0.0;
                              v99 = v15 + 0.0;
                              v100 = (unsigned int)v20;
                              do
                              {
                                *v97 = 0.0;
                                v97[1] = v98;
                                v97[2] = v99;
                                v97[3] = v98;
                                *((_QWORD *)v97 + 2) = 0i64;
                                v97[6] = v99;
                                v97[7] = 0.0;
                                v97 += 8;
                                --v100;
                              }
                              while ( v100 );
                            }
                            ++v95;
                            ++m_pfTexCoord;
                          }
                          while ( v95 < OGLFigure->m_uiMultiUvCount );
                        }
                        m_pMaterial = OGLFigure->m_pMaterial;
                        OGLMaterial::copy(m_pMaterial, v11, 0x20ui64, 32);
                        m_pMaterial->m_cTextureIndex = 0;
                        m_pMaterial->m_usIndex = 0;
                        m_usIndexCount = OGLFigure->m_usIndexCount;
                        Framework::MemoryManager::release(
                          &Framework::GLManager::glm->allocateStaticBuffers,
                          m_pMaterial->m_pfIndexBuffer);
                        m_pMaterial->m_usIndexCount = m_usIndexCount;
                        if ( m_usIndexCount )
                        {
                          v105 = Framework::MemoryManager::allocate(
                                   &Framework::GLManager::glm->allocateStaticBuffers,
                                   4i64 * m_usIndexCount,
                                   v104);
                          m_pMaterial->m_pfIndexBuffer = v105;
                          m_pMaterial->m_psIndex = (unsigned int *)v105;
                        }
                        v106 = m_pMaterial->m_usIndexCount;
                        if ( v106 )
                          memmove(m_pMaterial->m_psIndex, OGLFigure->m_pusIndex, 4i64 * v106);
                        OGLFigure->m_psMaterialIndex = 0i64;
                        OGLFigure->m_iFormatType = m_pOGLModel->m_pFigure->m_iFormatType;
                        OGLFigure->m_uiStateFlg = m_pOGLModel->m_pFigure->m_uiStateFlg;
                        if ( (m_pOGLModel->m_pFigure->m_uiStateFlg & 1) != 0 )
                        {
                          OGLFigure->m_uiStateFlg &= ~1u;
                          OGLFigure::copyParamaterGPU(OGLFigure, v103, v104);
                        }
                        OGLFigure->m_psMaterialIndex = m_pOGLModel->m_pFigure->m_psMaterialIndex;
                        OGLFigure->m_pfVertexBuffer = m_pOGLModel->m_pFigure->m_pfVertexBuffer;
                        OGLFigure->m_pfIndexBuffer = m_pOGLModel->m_pFigure->m_pfIndexBuffer;
                        OGLFigure->m_psVertexCoordIndex = m_pOGLModel->m_pFigure->m_psVertexCoordIndex;
                        OGLFigure->m_iNodeLevelMax = m_pOGLModel->m_pFigure->m_iNodeLevelMax;
                        OGLFigure->m_pVerOptiInfo = m_pOGLModel->m_pFigure->m_pVerOptiInfo;
                        BSUtil::createOGLFigureVertexBuffer(OGLFigure);
                        v113 = (OGLModel *)operator new(0x2498ui64);
                        OGLModel::OGLModel(v113);
                        v108 = v107;
                        OGLModel::setFigure(v107, OGLFigure, v109);
                        v110 = 0i64;
                        v111 = v108->m_pTexture[0];
                        while ( *v111 )
                        {
                          ++v22;
                          ++v110;
                          v111 += 4;
                          if ( v110 >= 64 )
                            goto LABEL_52;
                        }
                        if ( v22 <= 0x3F )
                          v108->m_pTexture[v22][0] = v14;
LABEL_52:
                        v112 = BSUtil::copyOGLModelExtraParams(m_pOGLModel, v108);
                        this->m_pOGLModel = v112;
                        *(_DWORD *)&v112->m_createShadowFlg = 0;
                        v112->m_lowAccuracyShadowBias = 0;
                        v112->m_bPrevBoneMirrorFlg = 0;
                        this->m_createStateBits |= 3u;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

char __fastcall BattleStageEvent::setupModel(BattleStageEvent *this, OGLModel *pOGLModel, bool bStageModel)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  char v6; // r8
  unsigned __int64 v7; // rdx
  OGLModel *v8; // r8
  BattleStageEventUVAnimation *m_pUVAnimation; // rcx
  BattleStageEventUVAnimation *v11; // [rsp+30h] [rbp+8h]

  BattleStageEvent::clear(this);
  *(_BYTE *)(v4 + 44) = 1;
  *(_DWORD *)(v4 + 80) = 1;
  *(_QWORD *)(v4 + 88) = v5;
  *(_BYTE *)(v4 + 96) = v6;
  v11 = (BattleStageEventUVAnimation *)operator new(0x20ui64);
  v11->__vftable = (BattleStageEventUVAnimation_vtbl *)&BattleStageEventUVAnimation::`vftable';
  v11->m_pParams = 0i64;
  v11->m_paramCount = 0;
  v11->m_bModelUVChanged = 0;
  *(_WORD *)&v11->m_bActive = 0;
  this->m_pUVAnimation = v11;
  if ( !this->m_bStageModel )
    this->m_createStateBits |= 1u;
  if ( !this->m_bUseGroup && this->m_pObject->m_bUseGroup )
    BattleStageEvent::initGroupObjects(this, v7);
  BattleStageShader::attachShaderParamsByModel(this, this, v8);
  m_pUVAnimation = this->m_pUVAnimation;
  if ( m_pUVAnimation )
    m_pUVAnimation->setup(m_pUVAnimation, this);
  return 1;
}

void __fastcall BattleStageEvent::setupRenderParams(BattleStageEvent *this)
{
  OGLModel *m_pOGLModel; // rcx
  __int128 v3; // xmm1
  BattleStageEventUVAnimation *m_pUVAnimation; // rcx

  m_pOGLModel = this->m_pOGLModel;
  if ( m_pOGLModel )
  {
    m_pOGLModel->m_vPosition.x = this->m_transMatrix.m[12];
    m_pOGLModel->m_vPosition.y = this->m_transMatrix.m[13];
    m_pOGLModel->m_vPosition.z = this->m_transMatrix.m[14];
    *(_OWORD *)m_pOGLModel->m_mWorld.m = *(_OWORD *)this->m_transMatrix.m;
    *(_OWORD *)&m_pOGLModel->m_mWorld.m[4] = *(_OWORD *)&this->m_transMatrix.m[4];
    *(_OWORD *)&m_pOGLModel->m_mWorld.m[8] = *(_OWORD *)&this->m_transMatrix.m[8];
    v3 = *(_OWORD *)&this->m_transMatrix.m[12];
    m_pOGLModel->m_bPostureChange = 1;
    *(_OWORD *)&m_pOGLModel->m_mWorld.m[12] = v3;
    m_pUVAnimation = this->m_pUVAnimation;
    if ( m_pUVAnimation )
    {
      ((void (__fastcall *)(BattleStageEventUVAnimation *, BattleStageEvent *))m_pUVAnimation->update)(
        m_pUVAnimation,
        this);
      this->m_pUVAnimation->animation(this->m_pUVAnimation, this);
    }
  }
}

char __fastcall BattleStageEvent::setupSound(BattleStageEvent *this)
{
  __int64 v2; // rcx
  extension::SoundObject *v3; // rbx
  char *v5; // [rsp+40h] [rbp+8h]

  BattleStageEvent::clear(this);
  *(_BYTE *)(v2 + 44) = 1;
  *(_DWORD *)(v2 + 80) = 4;
  v3 = (extension::SoundObject *)operator new(8ui64);
  v5 = (char *)operator new(0x60ui64);
  *(_QWORD *)v5 = 1i64;
  *((_WORD *)v5 + 4) = 1;
  *(_QWORD *)(v5 + 12) = 0i64;
  *(_QWORD *)(v5 + 20) = 0i64;
  *((_DWORD *)v5 + 7) = 1120403456;
  *((_QWORD *)v5 + 11) = 0i64;
  v3->m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v5;
  this->m_scriptParams.m_pSoundOptionParams = v3;
  return 1;
}

void __fastcall BattleStageEvent::setupStartParamsGroupObjects(BattleStageEvent *this, __int64 a2, unsigned int a3)
{
  BSDataObject *m_pObject; // rdi
  int v5; // er11
  __m128 y_low; // xmm1
  float z; // eax
  float v8; // xmm1_4
  float v9; // xmm2_4
  __int64 v10; // r10
  unsigned int v11; // ecx
  BattleStageEvent::GroupObject *m_pGroupObjects; // rax
  float m_frame; // xmm1_4
  BSDataEvent *m_pEvent; // rcx
  float m_groupAnimationFrame; // xmm6_4
  float v16; // xmm0_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  float i; // xmm10_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  __int64 v24; // rdi
  float y; // xmm1_4
  float v26; // xmm0_4
  OGLVec3 v27; // [rsp+30h] [rbp-79h] BYREF
  OGLMatrix pOutMatrix; // [rsp+40h] [rbp-69h] BYREF
  float pOutAnimationFrame; // [rsp+110h] [rbp+67h] BYREF
  int pOutAnimationIndex; // [rsp+118h] [rbp+6Fh] BYREF

  m_pObject = this->m_pObject;
  v5 = 0;
  this->m_groupAnimationFrame = (float)this->m_pEvent->m_startFrame;
  y_low = (__m128)LODWORD(m_pObject->m_position.y);
  v27.z = m_pObject->m_position.z;
  z = v27.z;
  *(_QWORD *)&this->m_groupDestinationPos.x = _mm_unpacklo_ps((__m128)LODWORD(m_pObject->m_position.x), y_low).m128_u64[0];
  this->m_groupDestinationPos.z = z;
  v8 = m_pObject->m_groupObjectBodySize * 3.0;
  v9 = v8 * 0.5;
  if ( this->m_groupObjectCount > 0 )
  {
    v10 = 0i64;
    a3 = BSUtil::g_randomSeed;
    do
    {
      v11 = 214013 * a3 + 2531011;
      a3 = 214013 * (214013 * v11 + 2531011) + 2531011;
      BSUtil::g_randomSeed = a3;
      this->m_pGroupObjects[v10].pos.x = (float)((float)((float)((float)((int)(HIWORD(v11) & 0x7FFF) % 100)
                                                               * 0.0099999998)
                                                       * v8)
                                               + this->m_groupDestinationPos.x)
                                       - v9;
      this->m_pGroupObjects[v10].pos.y = (float)((float)((float)((float)((int)(((214013 * v11 + 2531011) >> 16) & 0x7FFF)
                                                                       % 100)
                                                               * 0.0099999998)
                                                       * v8)
                                               + this->m_groupDestinationPos.y)
                                       - v9;
      this->m_pGroupObjects[v10].pos.z = (float)((float)((float)((float)((int)(HIWORD(a3) & 0x7FFF) % 100) * 0.0099999998)
                                                       * v8)
                                               + this->m_groupDestinationPos.z)
                                       - v9;
      m_pGroupObjects = this->m_pGroupObjects;
      *(_QWORD *)&m_pGroupObjects[v10].speed.x = 0i64;
      m_pGroupObjects[v10].speed.z = 0.0;
      this->m_pGroupObjects[v10].hitCount = 0;
      if ( m_pObject->m_bGroupRandomAnimationStartFlag )
      {
        a3 = 214013 * a3 + 2531011;
        BSUtil::g_randomSeed = a3;
        this->m_pGroupObjects[v10].startAnimationFrame = (float)(HIWORD(a3) & 0x7FFF);
      }
      else
      {
        this->m_pGroupObjects[v10].startAnimationFrame = 0.0;
      }
      ++v5;
      ++v10;
    }
    while ( v5 < this->m_groupObjectCount );
  }
  if ( this->m_groupAnimationFrame >= 0.0 )
  {
    v24 = 10i64;
    do
    {
      y = this->m_groupDestinationPos.y;
      v27.x = this->m_groupDestinationPos.x;
      v26 = this->m_groupDestinationPos.z;
      v27.y = y;
      v27.z = v26;
      BattleStageEvent::updateGroupObjects(this, 0.0, &v27, 0);
      --v24;
    }
    while ( v24 );
  }
  else
  {
    m_frame = this->m_frame;
    m_pEvent = this->m_pEvent;
    memset(&pOutMatrix, 0, sizeof(pOutMatrix));
    pOutAnimationIndex = 0;
    pOutAnimationFrame = 0.0;
    if ( BSDataEvent::getAnimationStateByFrame(
           m_pEvent,
           m_frame,
           a3,
           &pOutAnimationIndex,
           &pOutAnimationFrame,
           &pOutMatrix) )
    {
      m_groupAnimationFrame = this->m_groupAnimationFrame;
      v16 = m_groupAnimationFrame;
      if ( m_groupAnimationFrame <= 0.0 )
        LODWORD(v16) = LODWORD(m_groupAnimationFrame) ^ _xmm;
      v17 = (float)(pOutMatrix.m[12] - this->m_groupDestinationPos.x) / v16;
      v18 = (float)(pOutMatrix.m[13] - this->m_groupDestinationPos.y) / v16;
      for ( i = (float)(pOutMatrix.m[14] - this->m_groupDestinationPos.z) / v16;
            m_groupAnimationFrame < 0.0;
            m_groupAnimationFrame = m_groupAnimationFrame + 1.0 )
      {
        LODWORD(v20) = COERCE_UNSIGNED_INT(this->m_groupAnimationFrame - m_groupAnimationFrame) ^ _xmm;
        v21 = (float)(v20 * v17) + this->m_groupDestinationPos.x;
        v22 = (float)(v20 * v18) + this->m_groupDestinationPos.y;
        v23 = (float)(v20 * i) + this->m_groupDestinationPos.z;
        v27.x = v21;
        v27.y = v22;
        v27.z = v23;
        BattleStageEvent::updateGroupObjects(this, m_groupAnimationFrame, &v27, 0);
      }
    }
  }
}

void __fastcall BattleStageEvent::update(BattleStageEvent *this, int timestamp, float advanceFrame)
{
  BattleStageEvent *m_pBindEvent; // rcx
  float v5; // xmm8_4
  float m_frame; // xmm1_4
  BSDataEvent *m_pEvent; // rcx
  int v8; // er8
  int v9; // er8
  BSDataEvent *v10; // r9
  int m_nextSceneUID; // ecx
  int m_parentUniqueID; // edi
  int m_triggerPriority; // er11
  TknDataEvent::FinishAction m_finishAction; // eax
  char v15; // al
  TknData *v16; // rax
  __int64 v17; // rcx
  BSDataEvent **v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  BSDataEvent *v21; // rdx
  float m_startFrame; // xmm0_4
  float v23; // xmm6_4
  float v24; // xmm6_4
  BattleStageEvent *v25; // rdi
  const char *m_pBindModelBoneName; // rdx
  __int64 v27; // rax
  int BoneNoFromName; // eax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm1
  unsigned __int64 v33; // r8
  int m_selectAnimationIndex; // eax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  float v37; // xmm6_4
  bool v38; // dl
  STAGE_ID m_stageID; // ecx
  bool updated; // al
  BSDataEvent *v41; // rdx
  int m_cullingBindBoneIndex; // er8
  OGLMatrix *p_m_transMatrix; // rdx
  float pOutAnimationFrame; // [rsp+48h] [rbp-C0h] BYREF
  int pOutAnimationIndex; // [rsp+4Ch] [rbp-BCh] BYREF
  _QWORD pMatTrans[9]; // [rsp+50h] [rbp-B8h] BYREF
  OGLVec3 v47; // [rsp+98h] [rbp-70h] BYREF
  OGLMatrix result; // [rsp+A8h] [rbp-60h] BYREF

  if ( !this->m_bActive )
    return;
  if ( !this->m_pEvent )
  {
    this->m_selectAnimationIndexBefore = -1;
    *(_QWORD *)&this->m_animationFrame = 0i64;
    this->m_bPermissionDrawCall = 0;
    this->m_selectAnimationIndex = -1;
    this->m_selectTranslationIndexBefore = -1;
    this->m_selectTranslationIndex = -1;
    return;
  }
  if ( advanceFrame != 0.0 )
  {
    if ( this->m_timestamp == timestamp )
      return;
    this->m_timestamp = timestamp;
    m_pBindEvent = this->m_pBindEvent;
    if ( m_pBindEvent )
      BattleStageEvent::update(m_pBindEvent, timestamp, advanceFrame);
  }
  BattleStageEvent::getBoneTransMatrix(this, &result, 0);
  v5 = advanceFrame + this->m_frame;
  this->m_frame = v5;
  BattleStageEvent::runScript(this, v5);
  m_frame = this->m_frame;
  m_pEvent = this->m_pEvent;
  memset(&pMatTrans[1], 0, 64);
  pOutAnimationIndex = 0;
  pOutAnimationFrame = 0.0;
  if ( BSDataEvent::getAnimationStateByFrame(
         m_pEvent,
         m_frame,
         v8,
         &pOutAnimationIndex,
         &pOutAnimationFrame,
         (OGLMatrix *)&pMatTrans[1]) )
  {
    goto LABEL_28;
  }
  v10 = this->m_pEvent;
  if ( v10->m_pObject->m_sceneRegistCategory == SCENE_REGIST_LOCAL )
  {
    this->m_bActive = 0;
    return;
  }
  m_nextSceneUID = 0;
  m_parentUniqueID = v10->m_parentUniqueID;
  m_triggerPriority = 0;
  this->m_motionChangeFrame = this->m_frame;
  m_finishAction = v10->m_finishAction;
  if ( m_finishAction == FINISHACTION_PLAY_SCENE )
  {
    m_nextSceneUID = v10->m_nextSceneUID;
    m_triggerPriority = this->m_triggerPriority;
  }
  else if ( m_finishAction )
  {
    if ( m_finishAction == FINISHACTION_ERASE )
    {
      this->m_bVisible = 0;
      return;
    }
  }
  else
  {
    m_nextSceneUID = BattleStageResourceContainer::getNeutralSceneUID((BattleStageResourceContainer *)this->m_pResourceContainer);
  }
  v15 = 0;
  if ( m_nextSceneUID )
  {
    v16 = this->m_pResourceContainer->m_pDatas[m_nextSceneUID];
    if ( !v16 )
      return;
    if ( v16->m_dataType != DATATYPE_SCENE )
      return;
    v17 = SLODWORD(v16[1].__vftable);
    if ( (int)v17 <= 0 )
      return;
    v18 = (BSDataEvent **)v16[2].__vftable;
    v19 = v17;
    v20 = 0i64;
    while ( (*v18)->m_objectUID != v10->m_objectUID )
    {
      ++v20;
      ++v18;
      if ( v20 >= v19 )
        return;
    }
    v15 = BattleStageEvent::changeEvent(this, *v18, m_triggerPriority, 0, 1);
  }
  v21 = this->m_pEvent;
  if ( !((unsigned __int8)v15 | (m_parentUniqueID == v21->m_parentUniqueID)) )
  {
LABEL_28:
    v24 = pOutAnimationFrame;
  }
  else
  {
    m_startFrame = (float)v21->m_startFrame;
    this->m_runScriptIndex = 0;
    v23 = fminf(0.0, m_startFrame);
    this->m_frame = v23;
    BSDataEvent::getAnimationStateByFrame(
      v21,
      v23,
      v9,
      &pOutAnimationIndex,
      &pOutAnimationFrame,
      (OGLMatrix *)&pMatTrans[1]);
    v24 = pOutAnimationFrame;
    v5 = pOutAnimationFrame;
  }
  v25 = this->m_pBindEvent;
  if ( v25 )
  {
    m_pBindModelBoneName = this->m_pEvent->m_pObject->m_pBindModelBoneName;
    if ( !m_pBindModelBoneName )
      goto LABEL_35;
    v27 = -1i64;
    do
      ++v27;
    while ( m_pBindModelBoneName[v27] );
    if ( v27 )
    {
      BoneNoFromName = OGLModel::getBoneNoFromName(v25->m_pOGLModel, m_pBindModelBoneName, v9);
      BattleStageEvent::getBoneTransMatrix(v25, &result, BoneNoFromName);
    }
    else
    {
LABEL_35:
      v29 = *(_OWORD *)&v25->m_transMatrix.m[4];
      *(_OWORD *)result.m = *(_OWORD *)v25->m_transMatrix.m;
      v30 = *(_OWORD *)&v25->m_transMatrix.m[8];
      *(_OWORD *)&result.m[4] = v29;
      v31 = *(_OWORD *)&v25->m_transMatrix.m[12];
      *(_OWORD *)&result.m[8] = v30;
      *(_OWORD *)&result.m[12] = v31;
    }
    OGLMatrix::multiply((OGLMatrix *)&pMatTrans[1], &result);
  }
  v32 = *(_OWORD *)&pMatTrans[3];
  v33 = pOutAnimationIndex;
  m_selectAnimationIndex = this->m_selectAnimationIndex;
  *(_OWORD *)this->m_transMatrix.m = *(_OWORD *)&pMatTrans[1];
  v35 = *(_OWORD *)&pMatTrans[5];
  *(_OWORD *)&this->m_transMatrix.m[4] = v32;
  v36 = *(_OWORD *)&pMatTrans[7];
  *(_OWORD *)&this->m_transMatrix.m[8] = v35;
  *(_OWORD *)&this->m_transMatrix.m[12] = v36;
  if ( (_DWORD)v33 != m_selectAnimationIndex && m_selectAnimationIndex >= 0 )
    this->m_animationChangeFrame = 0.0;
  v37 = v24 + this->m_animationChangeFrame;
  this->m_selectAnimationIndex = v33;
  v38 = m_selectAnimationIndex != (_DWORD)v33;
  this->m_animationFrame = v37;
  if ( (v33 & 0x80000000) != 0i64 )
  {
    this->m_bPermissionDrawCall = 0;
    goto LABEL_61;
  }
  if ( !this->m_bUseCustomProcess )
  {
    if ( this->m_contentsType == CONTENTS_TYPE_MODEL )
    {
      updated = BattleStageEvent::updateModelAnimation(this, *(float *)&v36, v38);
      goto LABEL_60;
    }
    if ( this->m_contentsType == CONTENTS_TYPE_EFFECT )
    {
      updated = BattleStageEvent::updateEffectAnimation(this, advanceFrame, v38);
      goto LABEL_60;
    }
    if ( this->m_contentsType != CONTENTS_TYPE_BILLBOARD )
    {
      if ( this->m_contentsType != CONTENTS_TYPE_SOUND )
        return;
      updated = BattleStageEvent::updateSoundAction(this, *(float *)&v36, v38);
      goto LABEL_60;
    }
    if ( m_selectAnimationIndex != (_DWORD)v33 )
    {
      v41 = this->m_pEvent;
      if ( (v33 & 0x80000000) != 0i64 || (int)v33 >= v41->m_animationCount || !v41->m_pBillboardAnimations[v33] )
      {
        updated = 0;
        goto LABEL_60;
      }
      BattleStageEvent::setupBillboardAnimation(this, v41, v33);
    }
    goto LABEL_56;
  }
  m_stageID = this->m_pResourceContainer->m_stageID;
  if ( m_stageID == STAGE_ID_TRA || m_stageID != STAGE_ID_SAM )
  {
LABEL_56:
    updated = 1;
    goto LABEL_60;
  }
  updated = BattleStageShader::updateCustomProcess_SAM(
              this,
              this,
              advanceFrame,
              (int)v10,
              v37,
              (OGLMatrix *)&pMatTrans[1],
              v38);
LABEL_60:
  this->m_bPermissionDrawCall = updated;
LABEL_61:
  if ( this->m_bPermissionDrawCall )
  {
    if ( this->m_bUseGroup )
    {
      v47.x = *(float *)&pMatTrans[7];
      *(_QWORD *)&v47.y = *(_QWORD *)((char *)&pMatTrans[7] + 4);
      BattleStageEvent::updateGroupObjects(this, v5, &v47, 1);
    }
    if ( this->m_bUseCulling && this->m_cullingModel.m_modelType )
    {
      m_cullingBindBoneIndex = this->m_cullingBindBoneIndex;
      if ( m_cullingBindBoneIndex == -1 )
        p_m_transMatrix = &this->m_transMatrix;
      else
        p_m_transMatrix = BattleStageEvent::getBoneTransMatrix(this, &result, m_cullingBindBoneIndex);
      CollisionModel::transform(&this->m_cullingModel, p_m_transMatrix);
    }
  }
}

char __fastcall BattleStageEvent::updateEffectAnimation(
        BattleStageEvent *this,
        float advanceFrame,
        bool bAnimationChange)
{
  EffectDataListManager **m_pResourceEffects; // r9
  int m_selectAnimationIndex; // eax
  BSDataEvent *v7; // rdx
  BSDataEventEffectAnimation *v8; // rdi
  BSDataEffect *v9; // rdi
  Effect *m_pEffect; // rcx
  EffectDataListManager *v11; // rsi
  int m_effectIndex; // edx
  Effect *Effect; // rax
  Effect *v14; // rcx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  EffectData *v18; // rax
  const extension::SoundOneshotParameters *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  bool v22; // di
  BSDataEvent *m_pEvent; // rax
  __int128 v24[4]; // [rsp+30h] [rbp-58h] BYREF

  m_pResourceEffects = this->m_pResourceEffects;
  if ( !m_pResourceEffects )
    return 0;
  if ( bAnimationChange
    && ((m_selectAnimationIndex = this->m_selectAnimationIndex, v7 = this->m_pEvent, m_selectAnimationIndex < 0)
     || m_selectAnimationIndex >= v7->m_animationCount ? (v8 = 0i64) : (v8 = v7->m_pEffectAnimations[this->m_selectAnimationIndex]),
        (v9 = v8->m_pEffect) != 0i64 && this->m_resourceEffectCount > 0) )
  {
    m_pEffect = this->m_pEffect;
    v11 = *m_pResourceEffects;
    if ( this->m_useEffectIndex == v9->m_effectIndex )
    {
      if ( m_pEffect )
      {
        ((void (__fastcall *)(Effect *, BSDataEvent *, _QWORD))m_pEffect->cleanup)(m_pEffect, v7, 0i64);
        this->m_useEffectIndex = -1;
      }
    }
    else
    {
      if ( m_pEffect )
      {
        m_pEffect->terminate(m_pEffect);
        this->m_pEffect = 0i64;
      }
      m_effectIndex = v9->m_effectIndex;
      this->m_useEffectIndex = m_effectIndex;
      Effect = EffectDataListManager::createEffect(v11, m_effectIndex);
      this->m_pEffect = Effect;
      if ( Effect )
      {
        Effect->initialize(Effect);
        return 0;
      }
    }
    return 0;
  }
  else
  {
    v14 = this->m_pEffect;
    if ( v14 )
    {
      v15 = *(_OWORD *)&this->m_transMatrix.m[4];
      v24[0] = *(_OWORD *)this->m_transMatrix.m;
      v16 = *(_OWORD *)&this->m_transMatrix.m[8];
      v24[1] = v15;
      v17 = *(_OWORD *)&this->m_transMatrix.m[12];
      v24[2] = v16;
      v24[3] = v17;
      ((void (__fastcall *)(Effect *, _QWORD, __int128 *))v14->update)(v14, 0i64, v24);
      v18 = this->m_pEffect->getSettingData(this->m_pEffect);
      if ( !v18->getEffectType(v18) )
      {
        v20 = *(_QWORD *)&this->m_pEffect[1].m_RandomNumbers.mt[54];
        if ( v20 && (v21 = *(_QWORD *)(v20 + 24)) != 0 && *(float *)(v21 + 3052) == 0.0 )
        {
          v22 = 1;
          if ( !this->m_bEffectActived && this->m_pSound->m_playingStageId == STAGE_ID_LBS )
          {
            m_pEvent = this->m_pEvent;
            if ( m_pEvent )
            {
              if ( m_pEvent->m_uniqueID == 134 )
                AppMain::Sound_PlaySEByName(*(AppMain **)&AppMain::pApp, soundName, v19);
            }
          }
        }
        else
        {
          v22 = 0;
        }
        this->m_bEffectActived = v22;
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
}

void __fastcall BattleStageEvent::updateGroupObjects(
        BattleStageEvent *this,
        float frame,
        OGLVec3 *groupDestinationPos,
        bool bPermissionInitFunc)
{
  __int64 v4; // rdx
  OGLVec3 *v5; // rbp
  BSDataObject *m_pObject; // rax
  float m_groupIdealDistance; // xmm6_4
  float m_groupObjectBodySize; // xmm12_4
  int v10; // esi
  float v11; // xmm13_4
  __int64 v12; // rdi
  BattleStageEvent::GroupObject *m_pGroupObjects; // rbx
  int v14; // er12
  float v15; // xmm1_4
  float v16; // xmm2_4
  __int64 v17; // rdx
  __int64 v18; // rdi
  BattleStageEvent::GroupObject *v19; // rsi
  int v20; // er14
  int m_groupObjectCount; // ecx
  int v22; // eax
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rbx
  BattleStageEvent::GroupObject *v26; // rbp
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm7_4
  float v30; // xmm8_4
  float v31; // xmm9_4
  float v32; // xmm0_4
  BattleStageEvent::GroupObject *v33; // rbp
  float v34; // xmm0_4
  float v35; // xmm6_4
  float v36; // xmm7_4
  float v37; // xmm8_4
  float v38; // xmm9_4
  float v39; // xmm0_4
  BattleStageEvent::GroupObject *v40; // rbp
  float v41; // xmm0_4
  float v42; // xmm6_4
  float v43; // xmm7_4
  float v44; // xmm8_4
  float v45; // xmm9_4
  float v46; // xmm0_4
  BattleStageEvent::GroupObject *v47; // rbp
  float v48; // xmm0_4
  float v49; // xmm6_4
  float v50; // xmm7_4
  float v51; // xmm8_4
  float v52; // xmm9_4
  float v53; // xmm0_4
  __int64 v54; // rbx
  __int64 v55; // rax
  BattleStageEvent::GroupObject *v56; // rbp
  int hitCount; // er13
  float v58; // xmm0_4
  float v59; // xmm6_4
  float v60; // xmm7_4
  float v61; // xmm8_4
  float v62; // xmm9_4
  float v63; // xmm0_4
  float v64; // xmm7_4
  float v65; // xmm8_4
  float distance; // xmm1_4
  float x; // xmm9_4
  float y; // xmm10_4
  float v69; // xmm2_4
  float z; // xmm11_4
  float v71; // xmm3_4
  float v72; // xmm4_4
  float v73; // xmm1_4
  float v74; // xmm2_4
  float v75; // xmm3_4
  float v76; // xmm4_4
  float v77; // xmm6_4
  float v78; // xmm7_4
  float v79; // xmm8_4
  float v80; // xmm7_4
  float v81; // xmm8_4
  float v82; // xmm6_4
  float v83; // xmm0_4
  float v84; // xmm0_4
  float m_groupDestinationSpeedRate; // [rsp+20h] [rbp-128h]
  float v86; // [rsp+24h] [rbp-124h]
  float m_groupSverageSpeedApproachRate; // [rsp+28h] [rbp-120h]
  float v88; // [rsp+2Ch] [rbp-11Ch]
  float v89; // [rsp+30h] [rbp-118h]
  float m_groupObjectSpeedMaxRate; // [rsp+34h] [rbp-114h]
  float m_groupObjectSpeedMinRate; // [rsp+38h] [rbp-110h]
  float v92; // [rsp+3Ch] [rbp-10Ch]
  float m_groupIdealDistanceAdd; // [rsp+40h] [rbp-108h]
  float v94; // [rsp+44h] [rbp-104h]
  float v95; // [rsp+48h] [rbp-100h]
  __int64 v96; // [rsp+50h] [rbp-F8h]
  __int64 v97; // [rsp+58h] [rbp-F0h]
  float v98; // [rsp+150h] [rbp+8h]
  float v99; // [rsp+158h] [rbp+10h]
  int v101; // [rsp+168h] [rbp+20h]

  v5 = groupDestinationPos;
  if ( bPermissionInitFunc && this->m_groupAnimationFrame > frame && this->m_pEvent->m_bFinishActionInitParams )
    BattleStageEvent::setupStartParamsGroupObjects(this, v4, (unsigned int)groupDestinationPos);
  m_pObject = this->m_pObject;
  this->m_groupAnimationFrame = frame;
  m_groupIdealDistance = m_pObject->m_groupIdealDistance;
  m_groupObjectBodySize = m_pObject->m_groupObjectBodySize;
  m_groupIdealDistanceAdd = m_pObject->m_groupIdealDistanceAdd;
  m_groupObjectSpeedMaxRate = m_pObject->m_groupObjectSpeedMaxRate;
  m_groupDestinationSpeedRate = m_pObject->m_groupDestinationSpeedRate;
  m_groupSverageSpeedApproachRate = m_pObject->m_groupSverageSpeedApproachRate;
  m_groupObjectSpeedMinRate = m_pObject->m_groupObjectSpeedMinRate;
  v88 = v5->y - this->m_groupDestinationPos.y;
  v86 = v5->x - this->m_groupDestinationPos.x;
  v92 = m_groupIdealDistance;
  v89 = v5->z - this->m_groupDestinationPos.z;
  v10 = 0;
  v11 = sqrtf((float)((float)(v88 * v88) + (float)(v86 * v86)) + (float)(v89 * v89));
  *(_QWORD *)&this->m_groupDestinationPos.x = *(_QWORD *)&v5->x;
  this->m_groupDestinationPos.z = v5->z;
  if ( this->m_groupObjectCount > 0 )
  {
    v12 = 0i64;
    do
    {
      m_pGroupObjects = this->m_pGroupObjects;
      m_pGroupObjects[v12].distance = sqrtf(
                                        (float)((float)((float)(v5->y - m_pGroupObjects[v12].pos.y)
                                                      * (float)(v5->y - m_pGroupObjects[v12].pos.y))
                                              + (float)((float)(v5->x - m_pGroupObjects[v12].pos.x)
                                                      * (float)(v5->x - m_pGroupObjects[v12].pos.x)))
                                      + (float)((float)(v5->z - m_pGroupObjects[v12].pos.z)
                                              * (float)(v5->z - m_pGroupObjects[v12].pos.z)));
      ++v10;
      ++v12;
    }
    while ( v10 < this->m_groupObjectCount );
  }
  qsort(this->m_pGroupObjects, this->m_groupObjectCount, 0x38ui64, anonymous_namespace_::qsort_compareGroupObject);
  v14 = 0;
  v15 = FLOAT_15_0;
  v99 = FLOAT_40_0;
  v98 = m_groupIdealDistance;
  v101 = 0;
  v16 = 5.0 / (float)this->m_groupObjectCount;
  v95 = v16;
  if ( this->m_groupObjectCount > 0 )
  {
    v17 = 1i64;
    v18 = 0i64;
    v97 = 1i64;
    do
    {
      v19 = this->m_pGroupObjects;
      v20 = (int)v15;
      v94 = v15 - v16;
      if ( v19[v18].hitCount < (int)v15 )
      {
        m_groupObjectCount = this->m_groupObjectCount;
        v22 = v20 + v14;
        v23 = v17;
        if ( v22 < m_groupObjectCount )
          m_groupObjectCount = v22;
        v24 = m_groupObjectCount;
        v96 = m_groupObjectCount;
        if ( v17 < m_groupObjectCount )
        {
          if ( m_groupObjectCount - v17 < 4 )
          {
LABEL_38:
            if ( v23 < v24 )
            {
              v54 = v23;
              v55 = v24;
              while ( 1 )
              {
                v56 = this->m_pGroupObjects;
                hitCount = v56[v54].hitCount;
                if ( hitCount < v20 )
                {
                  v58 = sqrtf(
                          (float)((float)((float)(v19[v18].pos.x - v56[v54].pos.x)
                                        * (float)(v19[v18].pos.x - v56[v54].pos.x))
                                + (float)((float)(v19[v18].pos.y - v56[v54].pos.y)
                                        * (float)(v19[v18].pos.y - v56[v54].pos.y)))
                        + (float)((float)(v19[v18].pos.z - v56[v54].pos.z) * (float)(v19[v18].pos.z - v56[v54].pos.z)));
                  if ( m_groupObjectBodySize >= v58 )
                  {
                    v59 = v56[v54].pos.x - v19[v18].pos.x;
                    v60 = v56[v54].pos.y - v19[v18].pos.y;
                    v61 = v56[v54].pos.z - v19[v18].pos.z;
                    v62 = fminf(v11, (float)(m_groupObjectBodySize - v58) * 0.2);
                    v63 = sqrtf((float)((float)(v60 * v60) + (float)(v59 * v59)) + (float)(v61 * v61));
                    if ( v63 != 0.0 )
                    {
                      v59 = v59 / v63;
                      v60 = v60 / v63;
                      v61 = v61 / v63;
                    }
                    v56[v54].hitCount = hitCount + 1;
                    v64 = (float)(v60 * v62) + v56[v54].speed.y;
                    v65 = (float)(v61 * v62) + v56[v54].speed.z;
                    v56[v54].speed.x = (float)(v59 * v62) + v56[v54].speed.x;
                    v56[v54].speed.y = v64;
                    v56[v54].speed.z = v65;
                    if ( ++v19[v18].hitCount >= v20 )
                      goto LABEL_47;
                  }
                  v55 = v96;
                }
                ++v23;
                ++v54;
                if ( v23 >= v55 )
                  goto LABEL_47;
              }
            }
          }
          else
          {
            v25 = v18 * 56 + 56;
            while ( 1 )
            {
              v26 = this->m_pGroupObjects;
              if ( *(int *)((char *)&v26->hitCount + v25) < v20 )
              {
                v27 = sqrtf(
                        (float)((float)((float)(v19[v18].pos.x - *(float *)((char *)&v26->pos.x + v25))
                                      * (float)(v19[v18].pos.x - *(float *)((char *)&v26->pos.x + v25)))
                              + (float)((float)(v19[v18].pos.y - *(float *)((char *)&v26->pos.y + v25))
                                      * (float)(v19[v18].pos.y - *(float *)((char *)&v26->pos.y + v25))))
                      + (float)((float)(v19[v18].pos.z - *(float *)((char *)&v26->pos.z + v25))
                              * (float)(v19[v18].pos.z - *(float *)((char *)&v26->pos.z + v25))));
                if ( m_groupObjectBodySize >= v27 )
                {
                  v28 = *(float *)((char *)&v26->pos.x + v25) - v19[v18].pos.x;
                  v29 = *(float *)((char *)&v26->pos.y + v25) - v19[v18].pos.y;
                  v30 = *(float *)((char *)&v26->pos.z + v25) - v19[v18].pos.z;
                  v31 = fminf(v11, (float)(m_groupObjectBodySize - v27) * 0.2);
                  v32 = sqrtf((float)((float)(v29 * v29) + (float)(v28 * v28)) + (float)(v30 * v30));
                  if ( v32 != 0.0 )
                  {
                    v28 = v28 / v32;
                    v29 = v29 / v32;
                    v30 = v30 / v32;
                  }
                  *(float *)((char *)&v26->speed.x + v25) = (float)(v28 * v31) + *(float *)((char *)&v26->speed.x + v25);
                  *(float *)((char *)&v26->speed.y + v25) = (float)(v29 * v31) + *(float *)((char *)&v26->speed.y + v25);
                  *(float *)((char *)&v26->speed.z + v25) = (float)(v30 * v31) + *(float *)((char *)&v26->speed.z + v25);
                  ++*(int *)((char *)&v26->hitCount + v25);
                  if ( ++v19[v18].hitCount >= v20 )
                    break;
                }
              }
              v33 = this->m_pGroupObjects;
              if ( *(int *)((char *)&v33[1].hitCount + v25) < v20 )
              {
                v34 = sqrtf(
                        (float)((float)((float)(v19[v18].pos.x - *(float *)((char *)&v33[1].pos.x + v25))
                                      * (float)(v19[v18].pos.x - *(float *)((char *)&v33[1].pos.x + v25)))
                              + (float)((float)(v19[v18].pos.y - *(float *)((char *)&v33[1].pos.y + v25))
                                      * (float)(v19[v18].pos.y - *(float *)((char *)&v33[1].pos.y + v25))))
                      + (float)((float)(v19[v18].pos.z - *(float *)((char *)&v33[1].pos.z + v25))
                              * (float)(v19[v18].pos.z - *(float *)((char *)&v33[1].pos.z + v25))));
                if ( m_groupObjectBodySize >= v34 )
                {
                  v35 = *(float *)((char *)&v33[1].pos.x + v25) - v19[v18].pos.x;
                  v36 = *(float *)((char *)&v33[1].pos.y + v25) - v19[v18].pos.y;
                  v37 = *(float *)((char *)&v33[1].pos.z + v25) - v19[v18].pos.z;
                  v38 = fminf(v11, (float)(m_groupObjectBodySize - v34) * 0.2);
                  v39 = sqrtf((float)((float)(v36 * v36) + (float)(v35 * v35)) + (float)(v37 * v37));
                  if ( v39 != 0.0 )
                  {
                    v35 = v35 / v39;
                    v36 = v36 / v39;
                    v37 = v37 / v39;
                  }
                  *(float *)((char *)&v33[1].speed.x + v25) = (float)(v35 * v38)
                                                            + *(float *)((char *)&v33[1].speed.x + v25);
                  *(float *)((char *)&v33[1].speed.y + v25) = (float)(v36 * v38)
                                                            + *(float *)((char *)&v33[1].speed.y + v25);
                  *(float *)((char *)&v33[1].speed.z + v25) = (float)(v37 * v38)
                                                            + *(float *)((char *)&v33[1].speed.z + v25);
                  ++*(int *)((char *)&v33[1].hitCount + v25);
                  if ( ++v19[v18].hitCount >= v20 )
                    break;
                }
              }
              v40 = this->m_pGroupObjects;
              if ( *(int *)((char *)&v40[2].hitCount + v25) < v20 )
              {
                v41 = sqrtf(
                        (float)((float)((float)(v19[v18].pos.x - *(float *)((char *)&v40[2].pos.x + v25))
                                      * (float)(v19[v18].pos.x - *(float *)((char *)&v40[2].pos.x + v25)))
                              + (float)((float)(v19[v18].pos.y - *(float *)((char *)&v40[2].pos.y + v25))
                                      * (float)(v19[v18].pos.y - *(float *)((char *)&v40[2].pos.y + v25))))
                      + (float)((float)(v19[v18].pos.z - *(float *)((char *)&v40[2].pos.z + v25))
                              * (float)(v19[v18].pos.z - *(float *)((char *)&v40[2].pos.z + v25))));
                if ( m_groupObjectBodySize >= v41 )
                {
                  v42 = *(float *)((char *)&v40[2].pos.x + v25) - v19[v18].pos.x;
                  v43 = *(float *)((char *)&v40[2].pos.y + v25) - v19[v18].pos.y;
                  v44 = *(float *)((char *)&v40[2].pos.z + v25) - v19[v18].pos.z;
                  v45 = fminf(v11, (float)(m_groupObjectBodySize - v41) * 0.2);
                  v46 = sqrtf((float)((float)(v43 * v43) + (float)(v42 * v42)) + (float)(v44 * v44));
                  if ( v46 != 0.0 )
                  {
                    v42 = v42 / v46;
                    v43 = v43 / v46;
                    v44 = v44 / v46;
                  }
                  *(float *)((char *)&v40[2].speed.x + v25) = (float)(v42 * v45)
                                                            + *(float *)((char *)&v40[2].speed.x + v25);
                  *(float *)((char *)&v40[2].speed.y + v25) = (float)(v43 * v45)
                                                            + *(float *)((char *)&v40[2].speed.y + v25);
                  *(float *)((char *)&v40[2].speed.z + v25) = (float)(v44 * v45)
                                                            + *(float *)((char *)&v40[2].speed.z + v25);
                  ++*(int *)((char *)&v40[2].hitCount + v25);
                  if ( ++v19[v18].hitCount >= v20 )
                    break;
                }
              }
              v47 = this->m_pGroupObjects;
              if ( *(int *)((char *)&v47[3].hitCount + v25) < v20 )
              {
                v48 = sqrtf(
                        (float)((float)((float)(v19[v18].pos.x - *(float *)((char *)&v47[3].pos.x + v25))
                                      * (float)(v19[v18].pos.x - *(float *)((char *)&v47[3].pos.x + v25)))
                              + (float)((float)(v19[v18].pos.y - *(float *)((char *)&v47[3].pos.y + v25))
                                      * (float)(v19[v18].pos.y - *(float *)((char *)&v47[3].pos.y + v25))))
                      + (float)((float)(v19[v18].pos.z - *(float *)((char *)&v47[3].pos.z + v25))
                              * (float)(v19[v18].pos.z - *(float *)((char *)&v47[3].pos.z + v25))));
                if ( m_groupObjectBodySize >= v48 )
                {
                  v49 = *(float *)((char *)&v47[3].pos.x + v25) - v19[v18].pos.x;
                  v50 = *(float *)((char *)&v47[3].pos.y + v25) - v19[v18].pos.y;
                  v51 = *(float *)((char *)&v47[3].pos.z + v25) - v19[v18].pos.z;
                  v52 = fminf(v11, (float)(m_groupObjectBodySize - v48) * 0.2);
                  v53 = sqrtf((float)((float)(v50 * v50) + (float)(v49 * v49)) + (float)(v51 * v51));
                  if ( v53 != 0.0 )
                  {
                    v49 = v49 / v53;
                    v50 = v50 / v53;
                    v51 = v51 / v53;
                  }
                  *(float *)((char *)&v47[3].speed.x + v25) = (float)(v49 * v52)
                                                            + *(float *)((char *)&v47[3].speed.x + v25);
                  *(float *)((char *)&v47[3].speed.y + v25) = (float)(v50 * v52)
                                                            + *(float *)((char *)&v47[3].speed.y + v25);
                  *(float *)((char *)&v47[3].speed.z + v25) = (float)(v51 * v52)
                                                            + *(float *)((char *)&v47[3].speed.z + v25);
                  ++*(int *)((char *)&v47[3].hitCount + v25);
                  if ( ++v19[v18].hitCount >= v20 )
                    break;
                }
              }
              v23 += 4i64;
              v25 += 224i64;
              if ( v23 >= v24 - 3 )
              {
                v5 = groupDestinationPos;
                goto LABEL_38;
              }
            }
LABEL_47:
            v5 = groupDestinationPos;
          }
        }
        v14 = v101;
      }
      distance = v19[v18].distance;
      v19[v18].hitCount = 0;
      x = v19[v18].pos.x;
      y = v19[v18].pos.y;
      v69 = v5->x - x;
      z = v19[v18].pos.z;
      v71 = v5->y - y;
      v72 = v5->z - z;
      if ( distance > v11 )
      {
        v69 = v69 * (float)(v11 / distance);
        v71 = v71 * (float)(v11 / distance);
        v72 = v72 * (float)(v11 / distance);
      }
      v73 = fminf(distance / v99, m_groupObjectSpeedMaxRate);
      v74 = (float)(v69 * m_groupDestinationSpeedRate) + v19[v18].speed.x;
      v75 = (float)(v71 * m_groupDestinationSpeedRate) + v19[v18].speed.y;
      v76 = (float)(v72 * m_groupDestinationSpeedRate) + v19[v18].speed.z;
      v77 = (float)((float)(v86 - v74) * m_groupSverageSpeedApproachRate) + v74;
      v78 = (float)((float)(v88 - v75) * m_groupSverageSpeedApproachRate) + v75;
      v79 = (float)((float)(v89 - v76) * m_groupSverageSpeedApproachRate) + v76;
      v19[v18].speed.x = v77;
      v19[v18].speed.y = v78;
      v19[v18].speed.z = v79;
      if ( m_groupObjectSpeedMinRate > v73 )
        v73 = m_groupObjectSpeedMinRate;
      v80 = v78 * v73;
      v81 = v79 * v73;
      v82 = v77 * v73;
      v83 = sqrtf((float)((float)(v80 * v80) + (float)(v82 * v82)) + (float)(v81 * v81));
      if ( v83 > v11 )
      {
        if ( v83 != 0.0 )
        {
          v82 = v82 / v83;
          v80 = v80 / v83;
          v81 = v81 / v83;
        }
        v82 = v82 * v11;
        v80 = v80 * v11;
        v81 = v81 * v11;
      }
      v15 = v94;
      v84 = v98 + v92;
      v19[v18].pos.x = x + v82;
      ++v14;
      v19[v18].pos.y = y + v80;
      v17 = v97 + 1;
      v19[v18++].pos.z = z + v81;
      v98 = v98 + m_groupIdealDistanceAdd;
      v16 = v95;
      v101 = v14;
      ++v97;
      v99 = v99 + v84;
    }
    while ( v14 < this->m_groupObjectCount );
  }
}

char __fastcall BattleStageEvent::updateModelAnimation(
        BattleStageEvent *this,
        float advanceFrame,
        bool bAnimationChange)
{
  OGLModel *m_pOGLModel; // rdi
  int v6; // esi
  int m_selectAnimationIndex; // eax
  BSDataEvent *m_pEvent; // rdx
  BSDataEventModelAnimation *m_pPlayingModelAnimation; // rax
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _OGLModelBone *m_pBoneInfo; // rax
  SAFEventLookAtCharacter *m_pAFLookAtCharacter; // rcx
  int v15; // eax
  BSDataEvent *v16; // rdx
  BSDataEventModelAnimation *v17; // r10
  BSDataMotion *m_pMotion; // r10
  signed int m_motionNo; // ecx
  int v20; // er9
  __int64 v21; // r8
  OGLModel *pOGLModel; // rcx
  OGLModel *v23; // rdx
  signed int v24; // ecx
  int v25; // ecx
  __int64 v26; // rdx
  OGLModel *v27; // r8
  int v28; // er8
  __int64 v29; // rdx
  OGLModel *v30; // rcx
  OGLModel *v31; // rcx
  SAFEventLookAtCharacter *v32; // r14
  SAFEventLookAtCharacter *v33; // rcx
  float m_animationFrame; // xmm0_4
  BSDataEventModelAnimation *v35; // rax
  float m_motionTotalFrame; // xmm7_4
  BSDataMotion *v37; // rax
  float v38; // xmm0_4
  OGLMotion *v39; // rdx
  __int64 v40; // rcx
  float *p_m_fTotalFrame; // r8
  float v42; // xmm1_4
  float *v43; // rcx
  float v44; // xmm0_4
  BSDataEventModelAnimation *v45; // rax
  float v46; // xmm0_4
  float m_motionBlendFrame; // xmm1_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  int v50; // er15
  __int64 v51; // r14
  BattleStageEvent::GroupObject *m_pGroupObjects; // rax
  OGLModel *v53; // rbp
  float v54; // xmm0_4
  OGLMotion *v55; // r8
  __int64 v56; // rcx
  float *v57; // rdx
  float v58; // xmm1_4
  float *v59; // rcx
  float v60; // xmm0_4
  __int128 v61; // xmm1
  __int64 v62; // rdx
  OGLModel *v63; // rcx
  __int128 v64; // xmm1

  m_pOGLModel = this->m_pOGLModel;
  if ( !m_pOGLModel || !m_pOGLModel->m_pFigure )
    return 0;
  v6 = 0;
  if ( (m_pOGLModel->m_uiModeFlg & 0x400) != 0 )
  {
    if ( bAnimationChange )
    {
      m_selectAnimationIndex = this->m_selectAnimationIndex;
      m_pEvent = this->m_pEvent;
      if ( m_selectAnimationIndex < 0 || m_selectAnimationIndex >= m_pEvent->m_animationCount )
        this->m_pPlayingModelAnimation = 0i64;
      else
        this->m_pPlayingModelAnimation = m_pEvent->m_pModelAnimations[this->m_selectAnimationIndex];
    }
  }
  else
  {
    if ( bAnimationChange )
    {
      m_pPlayingModelAnimation = this->m_pPlayingModelAnimation;
      this->m_pModelAnimationBlend = m_pPlayingModelAnimation;
      if ( m_pPlayingModelAnimation )
      {
        if ( !m_pPlayingModelAnimation->m_pMotion )
          m_pPlayingModelAnimation = 0i64;
        this->m_pModelAnimationBlend = m_pPlayingModelAnimation;
      }
      v10 = m_pOGLModel->m_pFigure->m_uiBoneCount - 1;
      v11 = v10;
      if ( v10 >= 0 )
      {
        v12 = v10;
        do
        {
          --v11;
          m_pBoneInfo = m_pOGLModel->m_pBoneInfo;
          --v12;
          *(_OWORD *)&m_pBoneInfo[v12 + 1].pPrevStack[2].m_vPrevTrans.x = *(_OWORD *)&m_pBoneInfo[v12 + 1].pPrevStack[0].m_vPrevTrans.x;
          *(_OWORD *)&m_pBoneInfo[v12 + 1].pPrevStack[2].m_vPrevScale.y = *(_OWORD *)&m_pBoneInfo[v12 + 1].pPrevStack[0].m_vPrevScale.y;
          *(_QWORD *)&m_pBoneInfo[v12 + 1].pPrevStack[2].m_vPrevRot.z = *(_QWORD *)&m_pBoneInfo[v12 + 1].pPrevStack[0].m_vPrevRot.z;
        }
        while ( v11 >= 0 );
      }
    }
    m_pAFLookAtCharacter = this->m_pAFLookAtCharacter;
    if ( m_pAFLookAtCharacter )
      m_pAFLookAtCharacter->update(m_pAFLookAtCharacter, this);
    if ( bAnimationChange )
    {
      v15 = this->m_selectAnimationIndex;
      v16 = this->m_pEvent;
      if ( v15 < 0 || v15 >= v16->m_animationCount )
        v17 = 0i64;
      else
        v17 = v16->m_pModelAnimations[this->m_selectAnimationIndex];
      this->m_pPlayingModelAnimation = v17;
      if ( v17 && (m_pMotion = v17->m_pMotion) != 0i64 )
      {
        if ( (m_pOGLModel->m_uiModeFlg & 0x400) == 0 )
          m_pOGLModel->m_pMotion[0] = m_pMotion->m_pMotion;
        if ( m_pOGLModel->m_pMotion[0] )
        {
          m_motionNo = m_pMotion->m_motionNo;
          m_pOGLModel->m_iMotionIndex[0] = m_motionNo;
          if ( m_motionNo >= (signed int)m_pOGLModel->m_pMotion[0]->m_usMotionCount )
            m_motionNo = 0;
          m_pOGLModel->m_iMotionIndex[0] = m_motionNo;
          m_pOGLModel->m_bMotionEnd = 0;
        }
        v20 = 0;
        if ( this->m_groupObjectCount > 0 )
        {
          v21 = 0i64;
          do
          {
            pOGLModel = this->m_pGroupObjects[v21].pOGLModel;
            if ( (pOGLModel->m_uiModeFlg & 0x400) == 0 )
              pOGLModel->m_pMotion[0] = m_pMotion->m_pMotion;
            v23 = this->m_pGroupObjects[v21].pOGLModel;
            if ( v23->m_pMotion[0] )
            {
              v24 = m_pMotion->m_motionNo;
              v23->m_iMotionIndex[0] = v24;
              if ( v24 >= (signed int)v23->m_pMotion[0]->m_usMotionCount )
                v24 = 0;
              v23->m_iMotionIndex[0] = v24;
              v23->m_bMotionEnd = 0;
            }
            ++v20;
            ++v21;
          }
          while ( v20 < this->m_groupObjectCount );
        }
      }
      else
      {
        if ( (m_pOGLModel->m_uiModeFlg & 0x400) == 0 )
          m_pOGLModel->m_pMotion[0] = 0i64;
        v25 = 0;
        if ( this->m_groupObjectCount > 0 )
        {
          v26 = 0i64;
          do
          {
            v27 = this->m_pGroupObjects[v26].pOGLModel;
            if ( (v27->m_uiModeFlg & 0x400) == 0 )
              v27->m_pMotion[0] = 0i64;
            ++v25;
            ++v26;
          }
          while ( v25 < this->m_groupObjectCount );
        }
      }
      if ( m_pOGLModel->m_pFigure )
      {
        m_pOGLModel->m_bMotOffScaleFlg = 0;
        m_pOGLModel->m_iMotOffScaleBoneNo[1] = -1;
        m_pOGLModel->m_fMotOffScaleCommon[1] = 1.0;
      }
      m_pOGLModel->m_bBaseOffScaleFlg = 0;
      v28 = 0;
      if ( this->m_groupObjectCount > 0 )
      {
        v29 = 0i64;
        do
        {
          v30 = this->m_pGroupObjects[v29].pOGLModel;
          if ( v30->m_pFigure )
          {
            v30->m_bMotOffScaleFlg = 0;
            v30->m_iMotOffScaleBoneNo[1] = -1;
            v30->m_fMotOffScaleCommon[1] = 1.0;
          }
          ++v28;
          v31 = this->m_pGroupObjects[v29++].pOGLModel;
          v31->m_bBaseOffScaleFlg = 0;
        }
        while ( v28 < this->m_groupObjectCount );
      }
      if ( this->m_pObject->m_bUseEyeControl )
      {
        v32 = (SAFEventLookAtCharacter *)operator new(0x10ui64);
        v32->__vftable = (SAFEventLookAtCharacter_vtbl *)&SAFEventLookAtCharacter::`vftable';
        v32->m_bEnable = 0;
        v33 = this->m_pAFLookAtCharacter;
        if ( v33 )
        {
          ((void (__fastcall *)(SAFEventLookAtCharacter *, __int64))v33->~SAFEventLookAtCharacter)(v33, 1i64);
          this->m_pAFLookAtCharacter = 0i64;
        }
        this->m_pAFLookAtCharacter = v32;
        v32->setup(v32, this);
      }
    }
    if ( this->m_selectAnimationIndex >= 0 )
    {
      m_animationFrame = this->m_animationFrame;
      v35 = this->m_pPlayingModelAnimation;
      m_motionTotalFrame = m_animationFrame + this->m_frame;
      if ( v35 )
      {
        v37 = v35->m_pMotion;
        if ( v37 )
          m_motionTotalFrame = (float)v37->m_motionTotalFrame;
      }
      if ( m_pOGLModel->m_pMotion[0] )
      {
        v38 = fmodf(m_animationFrame, m_motionTotalFrame);
        m_pOGLModel->m_fMotionFrame[0] = v38;
        m_pOGLModel->m_bMotionEnd = 0;
        v39 = m_pOGLModel->m_pMotion[0];
        v40 = m_pOGLModel->m_iMotionIndex[0];
        if ( v39->m_ppMotionData
          && (int)v40 >= 0
          && (int)v40 < (signed int)v39->m_usMotionCount
          && (p_m_fTotalFrame = &v39->m_ppMotionData[v40]->m_fTotalFrame) != 0i64 )
        {
          v42 = *p_m_fTotalFrame;
        }
        else
        {
          v42 = 0.0;
        }
        if ( v38 >= v42 )
        {
          if ( v39->m_ppMotionData
            && (int)v40 >= 0
            && (int)v40 < (signed int)v39->m_usMotionCount
            && (v43 = &v39->m_ppMotionData[v40]->m_fTotalFrame) != 0i64 )
          {
            v44 = *v43;
          }
          else
          {
            v44 = 0.0;
          }
          m_pOGLModel->m_fMotionFrame[0] = v44 - 1.0;
          m_pOGLModel->m_bMotionEnd = 1;
        }
      }
      v45 = this->m_pPlayingModelAnimation;
      if ( v45 && v45->m_blendType == MODELANIM_BLENDTYPE_BLEND && this->m_pModelAnimationBlend )
      {
        v46 = this->m_animationFrame;
        m_motionBlendFrame = (float)v45->m_motionBlendFrame;
        if ( v46 < m_motionBlendFrame )
        {
          m_pOGLModel->m_iBoneStackIndex = 2;
          v48 = 1.0 - (float)(v46 / m_motionBlendFrame);
          if ( m_pOGLModel->m_pMotion[0] )
          {
            if ( v48 <= 1.0 )
              v49 = fmaxf(0.0, v48);
            else
              v49 = *(float *)&FLOAT_1_0;
            m_pOGLModel->m_fMotionBlend[0] = v49;
          }
        }
        else
        {
          this->m_pModelAnimationBlend = 0i64;
          if ( m_pOGLModel->m_pMotion[0] )
            m_pOGLModel->m_fMotionBlend[0] = 0.0;
        }
      }
      OGLModel::updatePosture(m_pOGLModel, &this->m_transMatrix, 0.0, 0, 3u);
      v50 = 0;
      if ( this->m_groupObjectCount > 0 )
      {
        v51 = 0i64;
        do
        {
          m_pGroupObjects = this->m_pGroupObjects;
          v53 = m_pGroupObjects[v51].pOGLModel;
          if ( v53->m_pMotion[0] )
          {
            v54 = fmodf(m_pGroupObjects[v51].startAnimationFrame + this->m_animationFrame, m_motionTotalFrame);
            v53->m_fMotionFrame[0] = v54;
            v55 = v53->m_pMotion[0];
            v53->m_bMotionEnd = 0;
            v56 = v53->m_iMotionIndex[0];
            if ( v55->m_ppMotionData
              && (int)v56 >= 0
              && (int)v56 < (signed int)v55->m_usMotionCount
              && (v57 = &v55->m_ppMotionData[v56]->m_fTotalFrame) != 0i64 )
            {
              v58 = *v57;
            }
            else
            {
              v58 = 0.0;
            }
            if ( v54 >= v58 )
            {
              if ( v55->m_ppMotionData
                && (int)v56 >= 0
                && (int)v56 < (signed int)v55->m_usMotionCount
                && (v59 = &v55->m_ppMotionData[v56]->m_fTotalFrame) != 0i64 )
              {
                v60 = *v59;
              }
              else
              {
                v60 = 0.0;
              }
              v53->m_fMotionFrame[0] = v60 - 1.0;
              v53->m_bMotionEnd = 1;
            }
          }
          OGLModel::updatePosture(this->m_pGroupObjects[v51].pOGLModel, &this->m_transMatrix, 0.0, 0, 3u);
          ++v50;
          ++v51;
        }
        while ( v50 < this->m_groupObjectCount );
      }
    }
  }
  m_pOGLModel->m_vPosition.x = this->m_transMatrix.m[12];
  m_pOGLModel->m_vPosition.y = this->m_transMatrix.m[13];
  m_pOGLModel->m_vPosition.z = this->m_transMatrix.m[14];
  *(_OWORD *)m_pOGLModel->m_mWorld.m = *(_OWORD *)this->m_transMatrix.m;
  *(_OWORD *)&m_pOGLModel->m_mWorld.m[4] = *(_OWORD *)&this->m_transMatrix.m[4];
  *(_OWORD *)&m_pOGLModel->m_mWorld.m[8] = *(_OWORD *)&this->m_transMatrix.m[8];
  v61 = *(_OWORD *)&this->m_transMatrix.m[12];
  m_pOGLModel->m_bPostureChange = 1;
  *(_OWORD *)&m_pOGLModel->m_mWorld.m[12] = v61;
  if ( this->m_groupObjectCount > 0 )
  {
    v62 = 0i64;
    do
    {
      ++v62;
      ++v6;
      v63 = this->m_pGroupObjects[v62 - 1].pOGLModel;
      v63->m_vPosition.x = this->m_transMatrix.m[12];
      v63->m_vPosition.y = this->m_transMatrix.m[13];
      v63->m_vPosition.z = this->m_transMatrix.m[14];
      *(_OWORD *)v63->m_mWorld.m = *(_OWORD *)this->m_transMatrix.m;
      *(_OWORD *)&v63->m_mWorld.m[4] = *(_OWORD *)&this->m_transMatrix.m[4];
      *(_OWORD *)&v63->m_mWorld.m[8] = *(_OWORD *)&this->m_transMatrix.m[8];
      v64 = *(_OWORD *)&this->m_transMatrix.m[12];
      v63->m_bPostureChange = 1;
      *(_OWORD *)&v63->m_mWorld.m[12] = v64;
    }
    while ( v6 < this->m_groupObjectCount );
  }
  return 1;
}

bool __fastcall BattleStageEvent::updateSoundAction(BattleStageEvent *this, float advanceFrame, bool bAnimationChange)
{
  _BOOL8 v3; // rdx
  extension::SoundObject *m_pSoundOptionParams; // rcx
  extension::exsound_detail::RuntimeEffector *m_ptr; // rcx
  bool v8; // al
  std::function<float __cdecl(void)> *p_getPanPositionFunc; // rdi
  std::_Func_base<float> *v10; // rcx
  int m_selectAnimationIndex; // eax
  BSDataEvent *m_pEvent; // rdx
  BSDataEventSound *v13; // rdx
  const char *m_pSoundName; // rdi
  bool m_bNotDuplicated; // r9
  extension::exsound_detail::RuntimeEffector *v16; // rcx
  extension::SoundList *v17; // rsi
  const extension::SoundHashKey *IfExist; // rax
  const extension::SoundOneshotParameters *v19; // r8
  bool isEndlessLoop; // si
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v21; // rcx
  __int64 v23; // [rsp+28h] [rbp-20h]
  float v24; // [rsp+30h] [rbp-18h]
  extension::SoundHashKey result; // [rsp+50h] [rbp+8h] BYREF

  m_pSoundOptionParams = this->m_scriptParams.m_pSoundOptionParams;
  if ( m_pSoundOptionParams )
  {
    v23 = *(_QWORD *)&this->m_transMatrix.m[12];
    v24 = this->m_transMatrix.m[14];
    m_ptr = m_pSoundOptionParams->m_runtimeEffector.m_ptr;
    v8 = m_ptr->m_dirty
      || m_ptr->m_soundObjectPosition.x != this->m_transMatrix.m[12]
      || m_ptr->m_soundObjectPosition.y != this->m_transMatrix.m[13]
      || m_ptr->m_soundObjectPosition.z != this->m_transMatrix.m[14];
    m_ptr->m_dirty = v8;
    *(_QWORD *)&m_ptr->m_soundObjectPosition.x = v23;
    m_ptr->m_soundObjectPosition.z = v24;
    m_ptr->m_useSoundPosition = 1;
    p_getPanPositionFunc = &m_ptr->getPanPositionFunc;
    v10 = m_ptr->getPanPositionFunc._Mystorage._Ptrs[7];
    if ( v10 )
    {
      LOBYTE(v3) = v10 != (std::_Func_base<float> *)p_getPanPositionFunc;
      v10->_Delete_this(v10, v3);
      p_getPanPositionFunc->_Mystorage._Ptrs[7] = 0i64;
    }
    if ( bAnimationChange )
    {
      m_selectAnimationIndex = this->m_selectAnimationIndex;
      m_pEvent = this->m_pEvent;
      if ( m_selectAnimationIndex >= 0 && m_selectAnimationIndex < m_pEvent->m_animationCount )
      {
        v13 = m_pEvent->m_pSounds[this->m_selectAnimationIndex];
        if ( v13 )
        {
          m_pSoundName = v13->m_pSoundName;
          m_bNotDuplicated = v13->m_bNotDuplicated;
          v16 = this->m_scriptParams.m_pSoundOptionParams->m_runtimeEffector.m_ptr;
          v16->m_distanceAttenuation = v13->m_distanceAttenuation;
          BattleStageSound::play3DSoundByName(
            (BattleStageSound *)v16,
            m_pSoundName,
            this->m_scriptParams.m_pSoundOptionParams,
            m_bNotDuplicated);
          v17 = (extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 2197144i64);
          if ( *(_QWORD *)&AppMain::pApp == -2197144i64 )
            goto LABEL_20;
          IfExist = extension::SoundHashKey::MakeIfExist(&result, m_pSoundName);
          isEndlessLoop = extension::SoundList::isEndlessLoop(v17, IfExist, v19);
          v21 = result.m_sharedBuffer.m_ptr;
          if ( result.m_sharedBuffer.m_ptr
            && _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&result.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v21->~RefCountableWeakSupportBase)(
              v21,
              1i64);
          }
          if ( !isEndlessLoop )
LABEL_20:
            this->m_roundStartParams.pSoundName = 0i64;
          else
            this->m_roundStartParams.pSoundName = m_pSoundName;
        }
      }
    }
  }
  return 0;
}

