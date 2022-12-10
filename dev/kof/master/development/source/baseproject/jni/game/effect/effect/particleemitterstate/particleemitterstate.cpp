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
#include "dev/silverware/git/sdk/agrandom.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstatecurve.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitterstate/particleemitterstate.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitter.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/randomnumbers.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstatecurve.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/d3dmath.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/randomnumbers.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E38F
ParticleEmitterState::~ParticleEmitterState(); // 0x1401410A0
void ParticleEmitterState::generateEmitter(); // 0x14013FD40
bool ParticleEmitterState::checkGenerateRequirement(float frame, float * emitTime); // 0x1401410B0
ParticleData * ParticleEmitterState::initGenerateParticle(bool mirrorFlag, float frame); // 0x1401412A0
void ParticleEmitterState::generateParticle(EffectUpdateArgument * pUpdateArg); // 0x140141D00
OGLEffectVec3 ParticleEmitterState::GetGenerateParticlePos(long emitterType, OGLEffectVec3 * scale, OGLEffectVec3 * pos); // 0x140142000
void ParticleEmitterState::generateParticlePos(ParticleData * pParticleData, float frame); // 0x140142610
void ParticleEmitterState::generateParticleCol(ParticleData * pParticleData, float frame); // 0x140142D90
void ParticleEmitterState::generateParticleScale(ParticleData * pParticleData, float frame); // 0x140142ED0
void ParticleEmitterState::generateParticleRot(ParticleData * pParticleData, float frame); // 0x1401439E0
void ParticleEmitterState::updateAllParticle(EffectUpdateArgument * pUpdateArg); // 0x140144250
void ParticleEmitterState::generateWorldData(ParticleData * pParticleData, float frame); // 0x140144420
void ParticleEmitterState::updateParticle(bool mirrorFlag, ParticleData * pParticleData, float frame); // 0x140144530
void ParticleEmitterState::calcParticleVel(ParticleData * pParticleData, float frame); // 0x1401446C0
void ParticleEmitterState::calcParticleAcc(ParticleData * pParticleData, float frame); // 0x140144D00
void ParticleEmitterState::updateParticlePos(ParticleData * pParticleData, float frame); // 0x140145030
void ParticleEmitterState::updateParticleCol(ParticleData * pParticleData, float frame); // 0x1401455F0
void ParticleEmitterState::calcParticleRotVel(ParticleData * pParticleData, float frame); // 0x140145DB0
void ParticleEmitterState::updateParticleRot(ParticleData * pParticleData, float frame); // 0x140146120
void ParticleEmitterState::updateParticleScale(ParticleData * pParticleData, float frame); // 0x140146230
void ParticleEmitterState::calcReferenceMatrix(ParticleData * pParticleData, float frame); // 0x1401464C0
void ParticleEmitterState::calcActionMatrix(ParticleData * pParticleData, float frame); // 0x140146520
void ParticleEmitterState::calcLocalMatrix(ParticleData * pParticleData, float frame); // 0x140146580
void ParticleEmitterState::updateWorldData(ParticleData * pParticleData, float frame); // 0x140146700
void ParticleEmitterState::updateEmitter(bool mirrorFlag, const OGLMatrix & actMat, float frame); // 0x14002E7C0
void ParticleEmitterState::calcLocalData(ParticleData * pParticleData, OGLVec3 * BonePos1, OGLVec3 * BonePos2); // 0x140146820//decompilation failure at 14089E38F!
long double __fastcall RandomNumbers::uniformRandomNumbers<double>(
        RandomNumbers *this,
        long double under,
        long double over)
{
  long double result; // xmm0_8

  result = 0.0;
  if ( under != 0.0 || over != 0.0 )
    return (double)rand() / 32767.0 * (over - under) + under;
  return result;
}

void __fastcall ParticleEmitterState::~ParticleEmitterState(ParticleEmitterState *this)
{
  this->__vftable = (ParticleEmitterState_vtbl *)&ParticleEmitterState::`vftable';
}

OGLEffectVec3 *__fastcall ParticleEmitterState::GetGenerateParticlePos(
        ParticleEmitterState *this,
        OGLEffectVec3 *result,
        int emitterType,
        OGLEffectVec3 *scale,
        OGLEffectVec3 *pos)
{
  int v8; // er8
  int v9; // er8
  int v10; // er8
  int v11; // er8
  EmitterFormState *m_pEmitterFormState; // rsi
  EffectData *pSettingData; // r8
  DialogData *Myfirst; // rcx
  int v15; // ecx
  OGLVec3 *v16; // r9
  OGLVec3 *v17; // r8
  float *v18; // rax
  EmitterFormState *v19; // rcx
  OGLVec3 *v20; // r9
  OGLVec3 *v21; // r8
  float x; // xmm7_4
  float z; // xmm8_4
  unsigned __int64 v24; // rdi
  double v25; // xmm0_8
  unsigned __int64 v26; // rdi
  double v27; // xmm0_8
  float v28; // xmm8_4
  float y; // xmm9_4
  float v30; // xmm10_4
  unsigned __int64 v31; // rdi
  signed __int64 v32; // rax
  double v33; // xmm0_8
  double v34; // xmm0_8
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rdi
  double v37; // xmm1_8
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rdi
  double v40; // xmm2_8
  double v41; // xmm0_8
  unsigned __int64 v42; // rdi
  double v43; // xmm0_8
  unsigned __int64 v44; // rcx
  signed __int64 v45; // rax
  double v46; // xmm2_8
  float v47; // xmm7_4
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  double v50; // xmm2_8
  float v51; // xmm6_4
  float v52; // xmm0_4
  unsigned __int64 v53; // rcx
  double v54; // xmm2_8
  char v56[16]; // [rsp+40h] [rbp-88h] BYREF
  OGLEffectQuat v57; // [rsp+50h] [rbp-78h] BYREF

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  result->__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v57.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  v57.OGLQuat = (OGLQuat)_xmm;
  v8 = emitterType - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
          {
            m_pEmitterFormState = this->pParticleEmitter->m_pEmitterFormState;
            pSettingData = this->pSettingData;
            if ( !(pSettingData->AllDialogData._Mypair._Myval2._Mylast
                 - pSettingData->AllDialogData._Mypair._Myval2._Myfirst) )
              std::_Xout_of_range("invalid vector<T> subscript");
            Myfirst = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
            if ( (unsigned __int64)(Myfirst->allComboIndexData._Mypair._Myval2._Mylast
                                  - Myfirst->allComboIndexData._Mypair._Myval2._Myfirst) <= 4 )
              std::_Xout_of_range("invalid vector<T> subscript");
            v15 = Myfirst->allComboIndexData._Mypair._Myval2._Myfirst[4];
            if ( m_pEmitterFormState )
            {
              v16 = &pos->OGLVec3;
              if ( !pos )
                v16 = 0i64;
              v17 = &scale->OGLVec3;
              if ( !scale )
                v17 = 0i64;
              v18 = (float *)((__int64 (__fastcall *)(EmitterFormState *, char *, OGLVec3 *, OGLVec3 *, int, RandomNumbers *, int, __int64))m_pEmitterFormState->__vftable[1].LoadFigureData)(
                               m_pEmitterFormState,
                               v56,
                               v17,
                               v16,
                               v15,
                               this->pRandomNumbers,
                               1,
                               -2i64);
LABEL_22:
              result->x = *v18;
              result->y = v18[1];
              result->z = v18[2];
            }
          }
        }
        else
        {
          v19 = this->pParticleEmitter->m_pEmitterFormState;
          if ( v19 )
          {
            v20 = &pos->OGLVec3;
            if ( !pos )
              v20 = 0i64;
            v21 = &scale->OGLVec3;
            if ( !scale )
              v21 = 0i64;
            v18 = (float *)((__int64 (__fastcall *)(EmitterFormState *, char *, OGLVec3 *, OGLVec3 *, int, int, int, __int64))v19->__vftable[1].~EmitterFormState)(
                             v19,
                             v56,
                             v21,
                             v20,
                             this->m_AllGenerateNum,
                             this->m_AlreadyGenerateNum,
                             1,
                             -2i64);
            goto LABEL_22;
          }
        }
      }
      else
      {
        x = scale->x;
        z = scale->z;
        v24 = (((((AgQuickRandom::v >> 21) ^ AgQuickRandom::v) << 35) ^ (AgQuickRandom::v >> 21) ^ AgQuickRandom::v) >> 4) ^ (((AgQuickRandom::v >> 21) ^ AgQuickRandom::v) << 35) ^ (AgQuickRandom::v >> 21) ^ AgQuickRandom::v;
        v25 = (double)(1332534557 * (int)v24);
        if ( ((0x2545F4914F6CDD1Di64 * v24) & 0x8000000000000000ui64) != 0i64 )
          v25 = v25 + 1.844674407370955e19;
        OGLEffectQuat::setRotateEuler(
          &v57,
          0.0,
          (float)(v25 * 5.421010862427522e-20) * 3.141592653589793
        + (float)(v25 * 5.421010862427522e-20) * 3.141592653589793,
          0.0);
        v26 = (((v24 >> 21) ^ v24) << 35) ^ (v24 >> 21) ^ v24;
        AgQuickRandom::v = (v26 >> 4) ^ v26;
        v27 = (double)(1332534557 * (int)AgQuickRandom::v);
        if ( ((0x2545F4914F6CDD1Di64 * AgQuickRandom::v) & 0x8000000000000000ui64) != 0i64 )
          v27 = v27 + 1.844674407370955e19;
        result->x = v27 * 5.421010862427522e-20;
        *(_QWORD *)&result->y = 0i64;
        OGLEffectVec3::rotateQuat(result, &v57.OGLQuat);
        result->x = x * result->x;
        result->y = result->y * 0.0;
        result->z = z * result->z;
      }
    }
    else
    {
      v28 = scale->x;
      y = scale->y;
      v30 = scale->z;
      v32 = 0x2545F4914F6CDD1Di64
          * ((((((AgQuickRandom::v >> 21) ^ AgQuickRandom::v) << 35) ^ (AgQuickRandom::v >> 21) ^ AgQuickRandom::v) >> 4) ^ (((AgQuickRandom::v >> 21) ^ AgQuickRandom::v) << 35) ^ (AgQuickRandom::v >> 21) ^ AgQuickRandom::v);
      v33 = (double)(int)v32;
      if ( v32 < 0 )
        v33 = v33 + 1.844674407370955e19;
      v34 = v33 * 5.421010862427522e-20;
      v31 = (((((AgQuickRandom::v >> 21) ^ AgQuickRandom::v) << 35) ^ (AgQuickRandom::v >> 21) ^ AgQuickRandom::v) >> 4) ^ (((AgQuickRandom::v >> 21) ^ AgQuickRandom::v) << 35) ^ (AgQuickRandom::v >> 21) ^ AgQuickRandom::v;
      v35 = (((v31 >> 21) ^ v31) << 35) ^ (v31 >> 21) ^ v31;
      v36 = (v35 >> 4) ^ v35;
      v37 = (double)(1332534557 * (int)v36);
      if ( ((0x2545F4914F6CDD1Di64 * v36) & 0x8000000000000000ui64) != 0i64 )
        v37 = v37 + 1.844674407370955e19;
      v38 = (((v36 >> 21) ^ v36) << 35) ^ (v36 >> 21) ^ v36;
      v39 = (v38 >> 4) ^ v38;
      v40 = (float)v34 * 3.141592653589793;
      v41 = (double)(1332534557 * (int)v39);
      if ( ((0x2545F4914F6CDD1Di64 * v39) & 0x8000000000000000ui64) != 0i64 )
        v41 = v41 + 1.844674407370955e19;
      OGLEffectQuat::setRotateEuler(
        &v57,
        (float)(v41 * 5.421010862427522e-20) * 3.141592653589793
      + (float)(v41 * 5.421010862427522e-20) * 3.141592653589793,
        (float)(v37 * 5.421010862427522e-20) * 3.141592653589793
      + (float)(v37 * 5.421010862427522e-20) * 3.141592653589793,
        v40 + v40);
      v42 = (((v39 >> 21) ^ v39) << 35) ^ (v39 >> 21) ^ v39;
      AgQuickRandom::v = (v42 >> 4) ^ v42;
      v43 = (double)(1332534557 * (int)AgQuickRandom::v);
      if ( ((0x2545F4914F6CDD1Di64 * AgQuickRandom::v) & 0x8000000000000000ui64) != 0i64 )
        v43 = v43 + 1.844674407370955e19;
      result->x = 0.0;
      *(_QWORD *)&result->y = COERCE_UNSIGNED_INT(v43 * 5.421010862427522e-20);
      OGLEffectVec3::rotateQuat(result, &v57.OGLQuat);
      result->x = v28 * result->x;
      result->y = y * result->y;
      result->z = v30 * result->z;
    }
  }
  else
  {
    v45 = 0x2545F4914F6CDD1Di64
        * ((((((AgQuickRandom::v >> 21) ^ AgQuickRandom::v) << 35) ^ (AgQuickRandom::v >> 21) ^ AgQuickRandom::v) >> 4) ^ (((AgQuickRandom::v >> 21) ^ AgQuickRandom::v) << 35) ^ (AgQuickRandom::v >> 21) ^ AgQuickRandom::v);
    v46 = (double)(int)v45;
    if ( v45 < 0 )
      v46 = v46 + 1.844674407370955e19;
    v47 = v46 * 5.421010862427522e-20 * (float)(scale->x - COERCE_FLOAT(LODWORD(scale->x) ^ _xmm))
        + COERCE_FLOAT(LODWORD(scale->x) ^ _xmm);
    v44 = (((((AgQuickRandom::v >> 21) ^ AgQuickRandom::v) << 35) ^ (AgQuickRandom::v >> 21) ^ AgQuickRandom::v) >> 4) ^ (((AgQuickRandom::v >> 21) ^ AgQuickRandom::v) << 35) ^ (AgQuickRandom::v >> 21) ^ AgQuickRandom::v;
    v48 = (((v44 >> 21) ^ v44) << 35) ^ (v44 >> 21) ^ v44;
    v49 = (v48 >> 4) ^ v48;
    v50 = (double)(1332534557 * (int)v49);
    if ( ((0x2545F4914F6CDD1Di64 * v49) & 0x8000000000000000ui64) != 0i64 )
      v50 = v50 + 1.844674407370955e19;
    v51 = v50 * 5.421010862427522e-20 * (float)(scale->y - COERCE_FLOAT(LODWORD(scale->y) ^ _xmm))
        + COERCE_FLOAT(LODWORD(scale->y) ^ _xmm);
    v52 = scale->z;
    v53 = (((v49 >> 21) ^ v49) << 35) ^ (v49 >> 21) ^ v49;
    AgQuickRandom::v = (v53 >> 4) ^ v53;
    v54 = (double)(1332534557 * (int)AgQuickRandom::v);
    if ( ((0x2545F4914F6CDD1Di64 * AgQuickRandom::v) & 0x8000000000000000ui64) != 0i64 )
      v54 = v54 + 1.844674407370955e19;
    result->x = v47;
    result->y = v51;
    result->z = v54 * 5.421010862427522e-20 * (float)(v52 - COERCE_FLOAT(LODWORD(v52) ^ _xmm))
              + COERCE_FLOAT(LODWORD(v52) ^ _xmm);
  }
  return result;
}

void __fastcall ParticleEmitterState::calcActionMatrix(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  float offsetBlendRatio; // xmm3_4
  OGLMatrix *v4; // r8

  offsetBlendRatio = pParticleData->RatioToFollow;
  if ( offsetBlendRatio != 0.0 )
  {
    v4 = &pParticleData->DefaultActMat.OGLMatrix;
    if ( pParticleData == (ParticleData *)-400i64 )
      v4 = 0i64;
    OGLEffectMatrix::BlendMatrix(
      &pParticleData->ActMat,
      &this->pParticleEmitter->m_ActArg.actMat,
      v4,
      offsetBlendRatio,
      offsetBlendRatio);
  }
}

void __fastcall ParticleEmitterState::calcLocalData(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        OGLVec3 *BonePos1,
        OGLVec3 *BonePos2)
{
  float y; // xmm3_4
  float z; // xmm2_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  float v10; // xmm6_4
  OGLQuat v11; // xmm0
  OGLVec3 v; // [rsp+28h] [rbp-90h] BYREF
  void **v13; // [rsp+38h] [rbp-80h]
  OGLVec3 vIn1; // [rsp+40h] [rbp-78h] BYREF
  void **v15; // [rsp+50h] [rbp-68h]
  OGLQuat v16; // [rsp+58h] [rbp-60h] BYREF

  y = BonePos2->y;
  z = BonePos2->z;
  v7 = (float)(BonePos1->x + BonePos2->x) * 0.5;
  v8 = (float)(BonePos1->y + y) * 0.5;
  v9 = (float)(BonePos1->z + z) * 0.5;
  v.x = BonePos2->x - v7;
  v.y = y - v8;
  v.z = z - v9;
  LODWORD(vIn1.z) = FLOAT_1_0;
  v15 = &OGLEffectQuat::`vftable';
  v10 = sqrtf((float)((float)(v.y * v.y) + (float)(v.x * v.x)) + (float)(v.z * v.z));
  v16 = (OGLQuat)_xmm;
  *(_QWORD *)&vIn1.x = 0i64;
  v13 = &OGLEffectVec3::`vftable';
  OGLVec3::normalize(&v, &v);
  OGLQuat::set(&v16, &vIn1, &v);
  v11 = v16;
  pParticleData->ReferenceMat.m[15] = 1.0;
  pParticleData->ReferenceMat.m[12] = v7;
  pParticleData->ReferenceMat.m[13] = v8;
  pParticleData->ReferenceMat.m[14] = v9;
  pParticleData->LocalScale.x = v10;
  pParticleData->LocalScale.y = v10;
  pParticleData->LocalScale.z = v10;
  pParticleData->LocalRot.OGLQuat = v11;
}

void __fastcall ParticleEmitterState::calcLocalMatrix(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  OGLMatrix *v4; // rbx
  DialogData *Myfirst; // rcx
  OGLQuat *v6; // rcx
  OGLVec3 *v7; // rdx
  OGLEffectMatrix v8; // [rsp+40h] [rbp-68h] BYREF

  memset(&v8.OGLMatrix, 0, sizeof(v8.OGLMatrix));
  v8.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  v4 = &pParticleData->LocalMat.OGLMatrix;
  *(_QWORD *)pParticleData->LocalMat.m = 1065353216i64;
  pParticleData->LocalMat.m[4] = 0.0;
  *(_QWORD *)&pParticleData->LocalMat.m[8] = 0i64;
  *(_QWORD *)&pParticleData->LocalMat.m[12] = 0i64;
  *(_QWORD *)&pParticleData->LocalMat.m[5] = 1065353216i64;
  *(_QWORD *)&pParticleData->LocalMat.m[2] = 0i64;
  *(_QWORD *)&pParticleData->LocalMat.m[10] = 1065353216i64;
  pParticleData->LocalMat.m[14] = 0.0;
  pParticleData->LocalMat.m[7] = 0.0;
  pParticleData->LocalMat.m[15] = 1.0;
  Myfirst = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[2].allComboIndexData._Mypair._Myval2._Mylast - Myfirst[2].allComboIndexData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *Myfirst[2].allComboIndexData._Mypair._Myval2._Myfirst == 1 )
  {
    pParticleData->LocalRot.x = 0.0;
    pParticleData->LocalRot.y = 0.0;
    OGLQuat::normalize(&pParticleData->LocalRot.OGLQuat);
  }
  v6 = &pParticleData->LocalRot.OGLQuat;
  if ( pParticleData == (ParticleData *)-736i64 )
    v6 = 0i64;
  OGLEffectMatrix::rotationQuaternion(&v8, v6->x, v6->y, v6->z, v6->w);
  OGLMatrix::multiply(v4, &v8.OGLMatrix);
  v7 = &pParticleData->LocalPos.OGLVec3;
  if ( pParticleData == (ParticleData *)-664i64 )
    v7 = 0i64;
  v4->m[12] = v7->x;
  v4->m[13] = v7->y;
  v4->m[14] = v7->z;
  v4->m[15] = 1.0;
}

void __fastcall ParticleEmitterState::calcParticleAcc(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  OGLVec3 *v6; // r8
  OGLVec3 *v7; // rdi
  float x; // xmm1_4
  float y; // xmm2_4
  float z; // xmm3_4
  Emitter *pParticleEmitter; // rax
  float resistance; // xmm11_4
  OGLVec3 *v13; // rcx
  __m128 x_low; // xmm7
  __m128 y_low; // xmm8
  float v16; // xmm6_4
  float age; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm5_4
  float v20; // xmm6_4
  float v21; // xmm3_4
  OGLEffectVec3 *v22; // rax
  OGLVec3 *v23; // rax
  float v24; // xmm3_4
  DialogData *Myfirst; // rcx
  OGLEffectVec3 *v26; // rax
  float *p_x; // rax
  float v28; // xmm1_4
  float v29; // xmm2_4
  OGLEffectVec3 *v30; // rax
  OGLEffectVec3 v31; // [rsp+28h] [rbp-89h] BYREF
  OGLEffectVec3 v32; // [rsp+40h] [rbp-71h] BYREF
  void **v33; // [rsp+58h] [rbp-59h]
  unsigned __int64 v34; // [rsp+60h] [rbp-51h]
  float v35; // [rsp+68h] [rbp-49h]
  unsigned __int64 v36; // [rsp+78h] [rbp-39h]
  float v37; // [rsp+80h] [rbp-31h]
  __int64 v38; // [rsp+88h] [rbp-29h]
  OGLEffectVec3 result; // [rsp+90h] [rbp-21h] BYREF

  v38 = -2i64;
  v6 = &pParticleData->LocalVel.OGLVec3;
  v7 = 0i64;
  if ( pParticleData == (ParticleData *)-712i64 )
    v6 = 0i64;
  x = v6->x;
  v31.x = v6->x;
  y = v6->y;
  v31.y = y;
  z = v6->z;
  v31.z = z;
  v31.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  pParticleEmitter = this->pParticleEmitter;
  resistance = pParticleEmitter->resistance;
  v13 = &pParticleEmitter->Gravity.OGLVec3;
  if ( pParticleEmitter == (Emitter *)-3528i64 )
    v13 = 0i64;
  x_low = (__m128)LODWORD(v13->x);
  y_low = (__m128)LODWORD(v13->y);
  v16 = v13->z;
  v35 = v16;
  v33 = &OGLEffectVec3::`vftable';
  v32.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  if ( resistance == 0.0 )
  {
    age = pParticleData->age;
    *(float *)&v34 = x_low.m128_f32[0] * age;
    *((float *)&v34 + 1) = y_low.m128_f32[0] * age;
    v35 = v16 * age;
    v18 = (float)(x_low.m128_f32[0] * age) + 0.0;
    v32.x = v18;
    v19 = (float)(y_low.m128_f32[0] * age) + 0.0;
    v20 = (float)(v16 * age) + 0.0;
  }
  else
  {
    v21 = expf(COERCE_FLOAT(COERCE_UNSIGNED_INT(resistance * pParticleData->age) ^ _xmm));
    v22 = OGLEffectVec3::operator*(&v31, &result, v21);
    if ( v22 )
      v23 = &v22->OGLVec3;
    else
      v23 = 0i64;
    v31.OGLVec3 = *v23;
    v24 = v21 / resistance;
    v34 = _mm_unpacklo_ps(x_low, y_low).m128_u64[0];
    v36 = v34;
    v37 = v35;
    v18 = (float)(0.0 - (float)(v24 * x_low.m128_f32[0])) + (float)((float)(1.0 / resistance) * x_low.m128_f32[0]);
    v32.x = v18;
    v19 = (float)(0.0 - (float)(v24 * y_low.m128_f32[0])) + (float)(*((float *)&v34 + 1) * (float)(1.0 / resistance));
    v20 = (float)(0.0 - (float)(v24 * v16)) + (float)(v35 * (float)(1.0 / resistance));
    z = v31.z;
    y = v31.y;
    x = v31.x;
  }
  v32.z = v20;
  v32.y = v19;
  Myfirst = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[1].allButtonIndexData._Mypair._Myval2._Mylast
                        - Myfirst[1].allButtonIndexData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( Myfirst[1].allButtonIndexData._Mypair._Myval2._Myfirst[2] )
  {
    *(_QWORD *)&pParticleData->GravityVel.x = 0i64;
    pParticleData->GravityVel.z = 0.0;
    v31.x = x + v18;
    v31.y = y + v19;
    v31.z = z + v20;
  }
  else
  {
    pParticleData->GravityVel.OGLVec3 = v32.OGLVec3;
    v26 = OGLEffectVec3::operator*(&v32, &result, frame);
    if ( v26 )
      p_x = &v26->x;
    else
      p_x = 0i64;
    v28 = p_x[1];
    v29 = p_x[2];
    pParticleData->GravityPos.x = *p_x + pParticleData->GravityPos.x;
    pParticleData->GravityPos.y = v28 + pParticleData->GravityPos.y;
    pParticleData->GravityPos.z = v29 + pParticleData->GravityPos.z;
  }
  v30 = OGLEffectVec3::operator*(&v31, &result, frame);
  if ( v30 )
    v7 = &v30->OGLVec3;
  *(_QWORD *)&pParticleData->LocalVel.x = *(_QWORD *)&v7->x;
  pParticleData->LocalVel.z = v7->z;
}

void __fastcall ParticleEmitterState::calcParticleRotVel(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  EffectData *pSettingData; // rdx
  DialogData *Myfirst; // rax
  int *v7; // r8
  int *v8; // r8
  DialogChartData *v9; // rcx
  bool v10; // zf
  ChartData *v11; // r8
  ChartData *Mylast; // rcx
  float ChartDataY; // xmm7_4
  DialogChartData *v14; // rcx
  ChartData *v15; // r8
  float v16; // xmm0_4
  DialogChartData *v17; // rcx
  ChartData *v18; // r8
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  OGLQuat v22; // xmm0
  OGLQuat *v23; // rcx
  DialogData *v24; // rax
  float *v25; // rdx
  float v26; // xmm6_4
  OGLQuat v27; // [rsp+40h] [rbp-61h] BYREF
  OGLEffectQuat v28; // [rsp+50h] [rbp-51h] BYREF
  void **v29; // [rsp+68h] [rbp-39h]
  OGLQuat q2; // [rsp+70h] [rbp-31h] BYREF
  void **v31; // [rsp+80h] [rbp-21h]
  OGLQuat q1; // [rsp+88h] [rbp-19h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-1h]
  void **v34; // [rsp+A8h] [rbp+7h]
  __int128 v35; // [rsp+B0h] [rbp+Fh]

  v33 = -2i64;
  v34 = &OGLEffectQuat::`vftable';
  v35 = _xmm;
  pSettingData = this->pSettingData;
  Myfirst = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v7 = Myfirst[7].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[7].allButtonIndexData._Mypair._Myval2._Mylast - v7) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *v7 )
  {
    v28.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
    v28.OGLQuat = (OGLQuat)_xmm;
    v8 = Myfirst[2].allComboIndexData._Mypair._Myval2._Myfirst;
    if ( !(Myfirst[2].allComboIndexData._Mypair._Myval2._Mylast - v8) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v9 = pSettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
    v10 = *v8 == 1;
    v11 = v9[7].dialogChartData._Mypair._Myval2._Myfirst;
    Mylast = v9[7].dialogChartData._Mypair._Myval2._Mylast;
    if ( v10 )
    {
      if ( (unsigned __int64)(Mylast - v11) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v19 = (float)(D3DMath::GetChartDataY(pParticleData->age, v11 + 2) * 3.1415927) / 180.0;
      v20 = 0.0;
      v21 = 0.0;
    }
    else
    {
      if ( (unsigned __int64)(Mylast - v11) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      ChartDataY = D3DMath::GetChartDataY(pParticleData->age, v11 + 2);
      v14 = this->pSettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
      v15 = v14[7].dialogChartData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v14[7].dialogChartData._Mypair._Myval2._Mylast - v15) <= 1 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v16 = D3DMath::GetChartDataY(pParticleData->age, v15 + 1);
      v17 = this->pSettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
      v18 = v17[7].dialogChartData._Mypair._Myval2._Myfirst;
      if ( !(v17[7].dialogChartData._Mypair._Myval2._Mylast - v18) )
        std::_Xout_of_range("invalid vector<T> subscript");
      v19 = (float)(ChartDataY * 3.1415927) / 180.0;
      v20 = (float)(v16 * 3.1415927) / 180.0;
      v21 = (float)(D3DMath::GetChartDataY(pParticleData->age, v18) * 3.1415927) / 180.0;
    }
    OGLEffectQuat::setRotateEuler(&v28, v21, v20, v19);
    OGLQuat::normalize(&v28.OGLQuat);
    v22 = v28.OGLQuat;
  }
  else
  {
    v31 = &OGLEffectQuat::`vftable';
    q1 = (OGLQuat)_xmm;
    v29 = &OGLEffectQuat::`vftable';
    v23 = &pParticleData->DefaultRotQVel.OGLQuat;
    if ( pParticleData == (ParticleData *)-1192i64 )
      v23 = 0i64;
    q2 = *v23;
    v24 = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    v25 = v24[7].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v24[7].allEditNumData._Mypair._Myval2._Mylast - v25) <= 0x12 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v26 = powf(1.0 - v25[18], pParticleData->age);
    OGLQuat::normalize(&q2);
    v27 = (OGLQuat)_xmm;
    OGLQuat::slerp(&v27, &q1, &q2, v26, 1.0);
    OGLQuat::normalize(&v27);
    OGLQuat::slerp(&v27, &q1, &v27, frame, 1.0);
    OGLQuat::normalize(&v27);
    v22 = v27;
  }
  pParticleData->LocalRotVel.OGLQuat = v22;
}

void __fastcall ParticleEmitterState::calcParticleVel(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  EffectData *pSettingData; // r8
  DialogData *Myfirst; // rdx
  DialogChartData *v7; // r8
  RandomNumbers *v8; // rcx
  float ChartDataY; // xmm11_4
  double v10; // xmm7_8
  RandomNumbers *v11; // rcx
  double v12; // xmm8_8
  float v13; // xmm9_4
  float v14; // xmm6_4
  float v15; // xmm1_4
  OGLEffectVec3 *p_DefaultDiffuseAll; // rbx
  OGLVec3 *v17; // rax
  unsigned __int64 v18; // xmm0_8
  EffectData *v19; // r8
  DialogData *v20; // rcx
  DialogChartData *v21; // r8
  RandomNumbers *v22; // rcx
  float v23; // xmm6_4
  long double v24; // xmm0_8
  DialogData *v25; // rcx
  OGLVec4 *v26; // rax
  __m128 v27; // xmm1
  OGLVec3 *v28; // rax
  __m128 v29; // xmm8
  __m128 v30; // xmm9
  float v31; // xmm10_4
  OGLVec3 *v32; // rcx
  EffectData *v33; // r9
  DialogData *v34; // rcx
  DialogChartData *v35; // r8
  ChartData *v36; // r10
  ChartData *v37; // r14
  ChartData *v38; // rbx
  float v39; // xmm7_4
  float v40; // xmm6_4
  float v41; // xmm10_4
  OGLVec3 *v42; // rcx
  OGLVec3 *v43; // rcx
  OGLVec4 result; // [rsp+30h] [rbp-41h] BYREF
  void **v45; // [rsp+40h] [rbp-31h]
  unsigned __int64 v46; // [rsp+48h] [rbp-29h]
  float z; // [rsp+50h] [rbp-21h]

  v46 = 0i64;
  z = 0.0;
  v45 = &OGLEffectVec3::`vftable';
  pSettingData = this->pSettingData;
  Myfirst = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[1].allButtonIndexData._Mypair._Myval2._Mylast
                        - Myfirst[1].allButtonIndexData._Mypair._Myval2._Myfirst) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( Myfirst[1].allButtonIndexData._Mypair._Myval2._Myfirst[4] )
  {
    v7 = pSettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v7[1].dialogChartData._Mypair._Myval2._Mylast
                          - v7[1].dialogChartData._Mypair._Myval2._Myfirst) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    ChartDataY = D3DMath::GetChartDataY(pParticleData->age, v7[1].dialogChartData._Mypair._Myval2._Myfirst + 1);
    if ( ChartDataY != 0.0
      && pParticleData->DefaultDiffuseAll.x == 0.0
      && pParticleData->DefaultDiffuseAll.y == 0.0
      && pParticleData->DefaultDiffuseAll.z == 0.0 )
    {
      v10 = RandomNumbers::uniformRandomNumbers<float>(v8, 0.0, 6.2831855);
      v12 = RandomNumbers::uniformRandomNumbers<float>(v11, 0.0, 6.2831855);
      v13 = cos(v10);
      sin(v10);
      v14 = sin(v12) * v10;
      v15 = cos(v12) * v10;
      pParticleData->DefaultDiffuseAll.x = v15;
      pParticleData->DefaultDiffuseAll.y = v14;
      pParticleData->DefaultDiffuseAll.z = v13;
    }
    OGLVec3::normalize(&pParticleData->DefaultDiffuseAll.OGLVec3, &pParticleData->DefaultDiffuseAll.OGLVec3);
    p_DefaultDiffuseAll = &pParticleData->DefaultDiffuseAll;
    v17 = &pParticleData->DefaultDiffuseAll.OGLVec3;
    pParticleData->DefaultDiffuseAll.x = ChartDataY * pParticleData->DefaultDiffuseAll.x;
    pParticleData->DefaultDiffuseAll.y = ChartDataY * pParticleData->DefaultDiffuseAll.y;
    pParticleData->DefaultDiffuseAll.z = ChartDataY * pParticleData->DefaultDiffuseAll.z;
  }
  else
  {
    p_DefaultDiffuseAll = &pParticleData->DefaultDiffuseAll;
    v17 = &pParticleData->DefaultDiffuseAll.OGLVec3;
  }
  if ( !p_DefaultDiffuseAll )
    v17 = 0i64;
  v18 = *(_QWORD *)&v17->x;
  z = v17->z;
  v46 = v18;
  v19 = this->pSettingData;
  v20 = v19->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v20[1].allButtonIndexData._Mypair._Myval2._Mylast
                        - v20[1].allButtonIndexData._Mypair._Myval2._Myfirst) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v20[1].allButtonIndexData._Mypair._Myval2._Myfirst[5] )
  {
    v21 = v19->AllDialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v21[1].dialogChartData._Mypair._Myval2._Mylast
                          - v21[1].dialogChartData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v23 = D3DMath::GetChartDataY(pParticleData->age, v21[1].dialogChartData._Mypair._Myval2._Myfirst + 2);
    if ( v23 != 0.0
      && pParticleData->DefaultDiffuseAxis.x == 0.0
      && pParticleData->DefaultDiffuseAxis.y == 0.0
      && pParticleData->DefaultDiffuseAxis.z == 0.0 )
    {
      v24 = RandomNumbers::uniformRandomNumbers<double>(v22, 0.0, 6.283185482025146);
      v25 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v25[1].allButtonIndexData._Mypair._Myval2._Mylast
                            - v25[1].allButtonIndexData._Mypair._Myval2._Myfirst) <= 1 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v26 = D3DMath::ElipseFunction(&result, v25[1].allButtonIndexData._Mypair._Myval2._Myfirst[1], 1.0, v24);
      v27 = *(__m128 *)v26;
      LODWORD(pParticleData->DefaultDiffuseAxis.x) = *(OGLVec4 *)&v26->x;
      LODWORD(pParticleData->DefaultDiffuseAxis.y) = _mm_shuffle_ps(v27, v27, 85).m128_u32[0];
      LODWORD(pParticleData->DefaultDiffuseAxis.z) = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
    }
    OGLVec3::normalize(&pParticleData->DefaultDiffuseAxis.OGLVec3, &pParticleData->DefaultDiffuseAxis.OGLVec3);
    pParticleData->DefaultDiffuseAxis.x = v23 * pParticleData->DefaultDiffuseAxis.x;
    pParticleData->DefaultDiffuseAxis.y = v23 * pParticleData->DefaultDiffuseAxis.y;
    pParticleData->DefaultDiffuseAxis.z = v23 * pParticleData->DefaultDiffuseAxis.z;
    v28 = &pParticleData->DefaultDiffuseAll.OGLVec3;
    if ( !p_DefaultDiffuseAll )
      v28 = 0i64;
    v29 = (__m128)(unsigned int)v46;
    v29.m128_f32[0] = *(float *)&v46 + v28->x;
    v30 = (__m128)HIDWORD(v46);
    v30.m128_f32[0] = *((float *)&v46 + 1) + v28->y;
    v31 = z + v28->z;
  }
  else
  {
    v32 = &pParticleData->DefaultDiffuseAxis.OGLVec3;
    if ( pParticleData == (ParticleData *)-1000i64 )
      v32 = 0i64;
    v29 = (__m128)(unsigned int)v46;
    v29.m128_f32[0] = *(float *)&v46 + v32->x;
    v30 = (__m128)HIDWORD(v46);
    v30.m128_f32[0] = *((float *)&v46 + 1) + v32->y;
    v31 = z + v32->z;
  }
  z = v31;
  v46 = __PAIR64__(v30.m128_u32[0], v29.m128_u32[0]);
  v33 = this->pSettingData;
  v34 = v33->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v34[1].allButtonIndexData._Mypair._Myval2._Mylast
                        - v34[1].allButtonIndexData._Mypair._Myval2._Myfirst) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v34[1].allButtonIndexData._Mypair._Myval2._Myfirst[3] )
  {
    v35 = v33->AllDialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v35[1].dialogChartData._Mypair._Myval2._Mylast
                          - v35[1].dialogChartData._Mypair._Myval2._Myfirst) <= 5 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v36 = v35[1].dialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v35[1].dialogChartData._Mypair._Myval2._Mylast - v36) <= 4 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v37 = v35[1].dialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v35[1].dialogChartData._Mypair._Myval2._Mylast - v36) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v38 = v35[1].dialogChartData._Mypair._Myval2._Myfirst;
    v39 = D3DMath::GetChartDataY(pParticleData->age, v36 + 5);
    v40 = D3DMath::GetChartDataY(pParticleData->age, v37 + 4);
    v29.m128_f32[0] = v29.m128_f32[0] + (float)(D3DMath::GetChartDataY(pParticleData->age, v38 + 3) + v29.m128_f32[0]);
    v30.m128_f32[0] = v30.m128_f32[0] + (float)(v30.m128_f32[0] + v40);
    v41 = v31 + (float)(v31 + v39);
  }
  else
  {
    v42 = &pParticleData->DefaultSpecifiedDir.OGLVec3;
    if ( pParticleData == (ParticleData *)-1024i64 )
      v42 = 0i64;
    v29.m128_f32[0] = v29.m128_f32[0] + v42->x;
    v30.m128_f32[0] = v30.m128_f32[0] + v42->y;
    v41 = v31 + v42->z;
  }
  v43 = &pParticleData->DefaultInheritanceVel.OGLVec3;
  if ( pParticleData == (ParticleData *)-1048i64 )
    v43 = 0i64;
  v29.m128_f32[0] = v29.m128_f32[0] + v43->x;
  v30.m128_f32[0] = v30.m128_f32[0] + v43->y;
  z = v41 + v43->z;
  *(_QWORD *)&pParticleData->LocalVel.x = _mm_unpacklo_ps(v29, v30).m128_u64[0];
  pParticleData->LocalVel.z = z;
}

void __fastcall ParticleEmitterState::calcReferenceMatrix(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  float offsetBlendRatio; // xmm3_4
  Emitter *pParticleEmitter; // rdx
  OGLMatrix *v6; // r8
  OGLEffectMatrix *p_WorldMat; // rax
  const OGLMatrix *v8; // rdx

  offsetBlendRatio = pParticleData->RatioToFollow;
  if ( offsetBlendRatio != 0.0 )
  {
    pParticleEmitter = this->pParticleEmitter;
    v6 = &pParticleData->DefaultReferenceMat.OGLMatrix;
    if ( pParticleData == (ParticleData *)-256i64 )
      v6 = 0i64;
    p_WorldMat = &pParticleEmitter->WorldMat;
    v8 = &pParticleEmitter->WorldMat.OGLMatrix;
    if ( !p_WorldMat )
      v8 = 0i64;
    OGLEffectMatrix::BlendMatrix(&pParticleData->ReferenceMat, v8, v6, offsetBlendRatio, offsetBlendRatio);
  }
}

__int64 __fastcall ParticleEmitterState::checkGenerateRequirement(
        ParticleEmitterState *this,
        float frame,
        float *emitTime)
{
  DialogData *Myfirst; // rdx
  float *v5; // r9
  Emitter *pParticleEmitter; // r10
  float *v7; // r8
  float age; // xmm2_4
  bool v9; // di
  float v10; // xmm0_4
  unsigned __int8 v11; // bl
  bool v12; // cl
  int *v13; // r9
  float *v14; // r9

  Myfirst = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v5 = Myfirst[1].allEditNumData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v5) )
    std::_Xout_of_range("invalid vector<T> subscript");
  pParticleEmitter = this->pParticleEmitter;
  v7 = Myfirst[1].allEditNumData._Mypair._Myval2._Myfirst;
  age = pParticleEmitter->age;
  v9 = age > *v5;
  if ( !(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v5) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( (unsigned __int64)(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v5) <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v10 = v5[1] + *v5;
  v11 = 1;
  v12 = v10 >= age;
  LOBYTE(v7) = 0;
  if ( v10 < age )
  {
    if ( !(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v5) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (unsigned __int64)(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v5) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v7 = (float *)((float)(*v5 + v5[1]) >= (float)(age - frame));
  }
  v13 = Myfirst[1].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[1].allButtonIndexData._Mypair._Myval2._Mylast - v13) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *v13 )
  {
    v12 = 1;
  }
  else if ( v10 < age && (_BYTE)v7 == 1 )
  {
    v14 = Myfirst[1].allEditNumData._Mypair._Myval2._Myfirst;
    if ( !(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v14) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (unsigned __int64)(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v14) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    *emitTime = (float)(v14[1] + *v14) - (float)(age - frame);
  }
  if ( !v9
    || !v12 && !(_BYTE)v7
    || !((unsigned __int8 (__fastcall *)(Emitter *, DialogData *, float *))pParticleEmitter->getEmitFlag)(
          pParticleEmitter,
          Myfirst,
          v7) )
  {
    return 0;
  }
  return v11;
}

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

void __fastcall ParticleEmitterState::generateParticle(ParticleEmitterState *this, EffectUpdateArgument *pUpdateArg)
{
  float intervalLimitTime; // xmm7_4
  float accumulateEmitVolume; // xmm6_4
  ParticleEmitterState_vtbl *v6; // rax
  Emitter *pParticleEmitter; // rax
  float intervalTime; // xmm2_4
  float emitVolume; // xmm6_4
  DialogData *Myfirst; // rcx
  float *v11; // rbx
  float v12; // xmm6_4
  unsigned __int64 v13; // rdi
  std::vector<ParticleData *> *pParticleDataVec; // r8
  unsigned __int64 p_Count; // rdx
  std::vector<ParticleData *> *v16; // rbx
  ParticleData **Mylast; // rax
  __int64 v18; // rdi
  ParticleData **v19; // rdx
  _QWORD *v20; // rax
  float frame; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 _Count; // [rsp+88h] [rbp+10h] BYREF

  intervalLimitTime = (float)this->pParticleEmitter->intervalLimitTime;
  if ( intervalLimitTime == 1.0 )
    intervalLimitTime = intervalLimitTime * pUpdateArg->frame;
  accumulateEmitVolume = this->pParticleEmitter->accumulateEmitVolume;
  v6 = this->__vftable;
  frame = pUpdateArg->frame;
  if ( ((unsigned __int8 (__fastcall *)(ParticleEmitterState *, EffectUpdateArgument *, float *))v6->checkGenerateRequirement)(
         this,
         pUpdateArg,
         &frame) )
  {
    pParticleEmitter = this->pParticleEmitter;
    intervalTime = pParticleEmitter->intervalTime;
    if ( intervalTime <= 999.0 )
      emitVolume = accumulateEmitVolume
                 + (float)((float)((float)pParticleEmitter->emitVolume / (float)pParticleEmitter->intervalLimitTime)
                         * frame);
    else
      emitVolume = (float)pParticleEmitter->emitVolume;
    if ( emitVolume >= 1.0 && intervalTime >= intervalLimitTime )
    {
      pParticleEmitter->intervalTime = 0.0;
      Myfirst = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
      v11 = Myfirst[1].allEditNumData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v11) <= 3 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( (unsigned __int64)(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v11) <= 4 )
        std::_Xout_of_range("invalid vector<T> subscript");
      this->pParticleEmitter->intervalLimitTime = (int)RandomNumbers::widthUniformRandomNumbers<float>(
                                                         (RandomNumbers *)Myfirst,
                                                         v11[4])
                                                + (int)v11[3];
    }
    this->m_AlreadyGenerateNum = 0;
    v12 = (double)(int)(float)((float)(emitVolume * 1000.0) + 0.5) / 1000.0;
    this->m_AllGenerateNum = (int)v12;
    while ( v12 >= 1.0 )
    {
      if ( intervalTime < intervalLimitTime )
        break;
      v12 = v12 + -1.0;
      _Count = ((__int64 (__fastcall *)(ParticleEmitterState *, bool))this->initGenerateParticle)(
                 this,
                 pUpdateArg->mirrorFlag);
      v13 = _Count;
      if ( _Count )
      {
        pParticleDataVec = pUpdateArg->pParticleDataVec;
        p_Count = ((char *)pParticleDataVec->_Mypair._Myval2._Myend - (char *)pParticleDataVec->_Mypair._Myval2._Myfirst) ^ ((char *)pParticleDataVec->_Mypair._Myval2._Mylast - (char *)pParticleDataVec->_Mypair._Myval2._Myfirst);
        if ( (p_Count & 0xFFFFFFFFFFFFFFF8ui64) == 0 )
        {
          p_Count = pParticleDataVec->_Mypair._Myval2._Mylast - pParticleDataVec->_Mypair._Myval2._Myfirst;
          if ( pParticleDataVec->_Mypair._Myval2._Myend - pParticleDataVec->_Mypair._Myval2._Myfirst < p_Count )
          {
            if ( p_Count > 0x1FFFFFFFFFFFFFFFi64 )
              std::_Xlength_error("vector<T> too long");
            std::vector<extension::exsound_detail::PreloadedAudioSet *>::_Reallocate(
              (std::vector<extension::exsound_detail::PreloadedAudioSet *> *)pUpdateArg->pParticleDataVec,
              p_Count);
          }
        }
        v16 = pUpdateArg->pParticleDataVec;
        Mylast = v16->_Mypair._Myval2._Mylast;
        if ( &_Count >= (unsigned __int64 *)Mylast
          || (p_Count = (unsigned __int64)&_Count, v16->_Mypair._Myval2._Myfirst > (ParticleData **)&_Count) )
        {
          if ( Mylast == v16->_Mypair._Myval2._Myend )
            std::vector<BattleStageEvent *>::_Reserve(
              (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)pUpdateArg->pParticleDataVec,
              p_Count);
          v20 = v16->_Mypair._Myval2._Mylast;
          if ( v20 )
            *v20 = v13;
        }
        else
        {
          v18 = ((char *)&_Count - (char *)v16->_Mypair._Myval2._Myfirst) >> 3;
          if ( Mylast == v16->_Mypair._Myval2._Myend )
            std::vector<BattleStageEvent *>::_Reserve(
              (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)pUpdateArg->pParticleDataVec,
              (unsigned __int64)&_Count);
          v19 = v16->_Mypair._Myval2._Mylast;
          if ( v19 )
            *v19 = v16->_Mypair._Myval2._Myfirst[v18];
        }
        ++v16->_Mypair._Myval2._Mylast;
        ++this->m_AlreadyGenerateNum;
      }
    }
    this->pParticleEmitter->accumulateEmitVolume = v12;
  }
}

void __fastcall ParticleEmitterState::generateParticleCol(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  EffectData *pSettingData; // r11
  DialogData *Myfirst; // r10
  float *v7; // rcx
  DialogData *v8; // rax
  float *v9; // rdx
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  ParticleEmitterState_vtbl *v13; // rax

  pSettingData = this->pSettingData;
  Myfirst = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(pSettingData->AllDialogData._Mypair._Myval2._Mylast - Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v7 = Myfirst[2].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[2].allEditNumData._Mypair._Myval2._Mylast - v7) <= 9 )
    std::_Xout_of_range("invalid vector<T> subscript");
  pParticleData->distortionRatio = v7[9];
  v8 = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v9 = v8[5].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v8[5].allEditNumData._Mypair._Myval2._Mylast - v9) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v10 = v9[3];
  v11 = v9[2];
  v12 = v9[1];
  pParticleData->Col.x = *v9;
  v13 = this->__vftable;
  pParticleData->Col.w = v10;
  pParticleData->Col.y = v12;
  pParticleData->Col.z = v11;
  ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))v13->updateParticleCol)(this, pParticleData);
}

void __fastcall ParticleEmitterState::generateParticlePos(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  Emitter *pParticleEmitter; // rdx
  OGLVec3 *v6; // rcx
  OGLVec3 *v7; // rcx
  EmitterFormState *m_pEmitterFormState; // rax
  float age; // xmm2_4
  float v10; // xmm1_4
  EmitterFormState_vtbl *v11; // rcx
  DialogData *Myfirst; // rcx
  float *v13; // rsi
  float v14; // xmm8_4
  float v15; // xmm0_4
  OGLEffectVec3 *v16; // rax
  OGLVec3 *v17; // rax
  OGLVec3 *v18; // rcx
  DialogData *v19; // rcx
  float *v20; // r15
  float v21; // xmm9_4
  float v22; // xmm8_4
  DialogData *v23; // rcx
  float *v24; // r14
  float v25; // xmm10_4
  float v26; // xmm9_4
  DialogData *v27; // rcx
  float *v28; // rsi
  float v29; // xmm10_4
  float v30; // xmm0_4
  float v31; // xmm8_4
  float v32; // xmm9_4
  double v33; // xmm12_8
  double v34; // xmm13_8
  EffectData *pSettingData; // rcx
  DialogData *v36; // rsi
  float *v37; // rsi
  DialogData *v38; // rcx
  double v39; // xmm7_8
  double v40; // xmm9_8
  double v41; // xmm0_8
  double v42; // xmm6_8
  float v43; // xmm8_4
  double v44; // xmm7_8
  float v45; // xmm1_4
  double v46; // xmm8_8
  EffectData *v47; // rcx
  DialogData *v48; // rsi
  float *v49; // rsi
  DialogData *v50; // rcx
  double v51; // xmm7_8
  double v52; // xmm2_8
  DialogData *v53; // rcx
  int *v54; // rax
  __m128 v55; // xmm3
  unsigned int v56; // xmm2_4
  float v57; // xmm1_4
  void **v58; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v59; // [rsp+40h] [rbp-C8h]
  __int64 v60; // [rsp+48h] [rbp-C0h]
  void **v61; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+58h] [rbp-B0h]
  __int64 v63; // [rsp+60h] [rbp-A8h]
  void **v64; // [rsp+68h] [rbp-A0h]
  int v65; // [rsp+70h] [rbp-98h]
  unsigned int v66; // [rsp+74h] [rbp-94h]
  float v67; // [rsp+78h] [rbp-90h]
  unsigned int v68; // [rsp+7Ch] [rbp-8Ch]
  void **v69; // [rsp+80h] [rbp-88h]
  float v70; // [rsp+88h] [rbp-80h]
  float v71; // [rsp+8Ch] [rbp-7Ch]
  float v72; // [rsp+90h] [rbp-78h]
  int v73; // [rsp+94h] [rbp-74h]
  __int64 v74; // [rsp+A0h] [rbp-68h]
  OGLVec4 result; // [rsp+A8h] [rbp-60h] BYREF

  v74 = -2i64;
  v62 = 0i64;
  LODWORD(v63) = 0;
  v61 = &OGLEffectVec3::`vftable';
  pParticleEmitter = this->pParticleEmitter;
  v6 = &pParticleEmitter->WorldScale.OGLVec3;
  if ( pParticleEmitter == (Emitter *)-3168i64 )
    v6 = 0i64;
  v62 = *(_QWORD *)&v6->x;
  *(float *)&v63 = v6->z;
  v59 = 0i64;
  LODWORD(v60) = 0;
  v58 = &OGLEffectVec3::`vftable';
  v7 = &pParticleEmitter->LocalPos.OGLVec3;
  if ( pParticleEmitter == (Emitter *)-3408i64 )
    v7 = 0i64;
  v59 = *(_QWORD *)&v7->x;
  *(float *)&v60 = v7->z;
  m_pEmitterFormState = pParticleEmitter->m_pEmitterFormState;
  if ( pParticleEmitter->m_EmitterFormType == 4 )
  {
    age = pParticleEmitter->age;
    *(float *)&m_pEmitterFormState[7].__vftable = age;
    v10 = 0.0;
    v11 = m_pEmitterFormState[1].__vftable;
    if ( v11 && v11->~EmitterFormState )
      v10 = (float)((float)((float)((float)this->m_AlreadyGenerateNum / (float)this->m_AllGenerateNum)
                          + (float)((float)(age - 1.0) - (float)SHIDWORD(m_pEmitterFormState[7].__vftable)))
                  * *((float *)&m_pEmitterFormState[6].__vftable + 1))
          + *((float *)&m_pEmitterFormState[5].__vftable + 1);
    pParticleData->defaultCurveKnot = v10;
    pParticleData->currentCurveKnot = v10;
    Myfirst = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(Myfirst->allEditNumData._Mypair._Myval2._Mylast
                          - Myfirst->allEditNumData._Mypair._Myval2._Myfirst) <= 0x13 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v13 = Myfirst->allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(Myfirst->allEditNumData._Mypair._Myval2._Mylast
                          - Myfirst->allEditNumData._Mypair._Myval2._Myfirst) <= 0x14 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v14 = v13[20];
    if ( v14 == 0.0 )
      v15 = 0.0;
    else
      v15 = (float)((float)((float)rand() / 32767.0) * (float)(v14 - COERCE_FLOAT(LODWORD(v14) ^ _xmm)))
          + COERCE_FLOAT(LODWORD(v14) ^ _xmm);
    pParticleData->curveRatioToFollow = (float)(v15 + v13[19]) / 100.0;
  }
  v16 = this->GetGenerateParticlePos(this, &result, (unsigned int)this->pParticleEmitter->m_EmitterFormType, &v61, &v58);
  if ( v16 )
    v17 = &v16->OGLVec3;
  else
    v17 = 0i64;
  v18 = &pParticleData->DefaultPos.OGLVec3;
  *(_QWORD *)&pParticleData->DefaultPos.x = *(_QWORD *)&v17->x;
  pParticleData->DefaultPos.z = v17->z;
  if ( pParticleData == (ParticleData *)-952i64 )
    v18 = 0i64;
  *(_QWORD *)&pParticleData->LocalPos.x = *(_QWORD *)&v18->x;
  pParticleData->LocalPos.z = v18->z;
  v19 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v19[1].allEditNumData._Mypair._Myval2._Mylast - v19[1].allEditNumData._Mypair._Myval2._Myfirst) <= 0xB )
    std::_Xout_of_range("invalid vector<T> subscript");
  v20 = v19[1].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v19[1].allEditNumData._Mypair._Myval2._Mylast - v20) <= 0xE )
    std::_Xout_of_range("invalid vector<T> subscript");
  v21 = v20[14];
  if ( v21 == 0.0 )
    v22 = 0.0;
  else
    v22 = (float)((float)((float)rand() / 32767.0) * (float)(v21 - COERCE_FLOAT(LODWORD(v21) ^ _xmm)))
        + COERCE_FLOAT(LODWORD(v21) ^ _xmm);
  v23 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v23[1].allEditNumData._Mypair._Myval2._Mylast - v23[1].allEditNumData._Mypair._Myval2._Myfirst) <= 0xA )
    std::_Xout_of_range("invalid vector<T> subscript");
  v24 = v23[1].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v23[1].allEditNumData._Mypair._Myval2._Mylast - v24) <= 0xD )
    std::_Xout_of_range("invalid vector<T> subscript");
  v25 = v24[13];
  if ( v25 == 0.0 )
    v26 = 0.0;
  else
    v26 = (float)((float)((float)rand() / 32767.0) * (float)(v25 - COERCE_FLOAT(LODWORD(v25) ^ _xmm)))
        + COERCE_FLOAT(LODWORD(v25) ^ _xmm);
  v27 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v27[1].allEditNumData._Mypair._Myval2._Mylast - v27[1].allEditNumData._Mypair._Myval2._Myfirst) <= 9 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v28 = v27[1].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v27[1].allEditNumData._Mypair._Myval2._Mylast - v28) <= 0xC )
    std::_Xout_of_range("invalid vector<T> subscript");
  v29 = v28[12];
  if ( v29 == 0.0 )
    v30 = 0.0;
  else
    v30 = (float)((float)((float)rand() / 32767.0) * (float)(v29 - COERCE_FLOAT(LODWORD(v29) ^ _xmm)))
        + COERCE_FLOAT(LODWORD(v29) ^ _xmm);
  v31 = v22 + v20[11];
  v32 = v26 + v24[10];
  v70 = v30 + v28[9];
  v71 = v32;
  v72 = v31;
  v73 = 1065353216;
  v69 = &OGLEffectVec4::`vftable';
  pParticleData->DefaultSpecifiedDir.x = v70;
  pParticleData->DefaultSpecifiedDir.y = v32;
  pParticleData->DefaultSpecifiedDir.z = v31;
  v33 = (float)((float)((float)((float)rand() / 32767.0) * 6.2831855) + 0.0);
  v34 = (float)((float)((float)((float)rand() / 32767.0) * 3.1415927) + 0.0);
  pSettingData = this->pSettingData;
  v36 = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v36[1].allEditNumData._Mypair._Myval2._Mylast - v36[1].allEditNumData._Mypair._Myval2._Myfirst) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v37 = v36[1].allEditNumData._Mypair._Myval2._Myfirst;
  v38 = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v38[1].allEditNumData._Mypair._Myval2._Mylast - v38[1].allEditNumData._Mypair._Myval2._Myfirst) <= 6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v39 = v38[1].allEditNumData._Mypair._Myval2._Myfirst[6];
  v40 = 0.0;
  if ( v39 == 0.0 )
    v41 = 0.0;
  else
    v41 = (double)rand() / 32767.0 * (v39 - COERCE_DOUBLE(*(_QWORD *)&v39 ^ _xmm))
        + COERCE_DOUBLE(*(_QWORD *)&v39 ^ _xmm);
  v42 = v37[5] - v41;
  v43 = cos(v33) * v42;
  v44 = sin(v33) * v42;
  *(float *)&v42 = sin(v34) * v44;
  v45 = cos(v34) * v44;
  pParticleData->DefaultDiffuseAll.x = v45;
  pParticleData->DefaultDiffuseAll.y = *(float *)&v42;
  pParticleData->DefaultDiffuseAll.z = v43;
  v46 = (double)rand() / 32767.0 * 6.283185482025146 + 0.0;
  v47 = this->pSettingData;
  v48 = v47->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v48[1].allEditNumData._Mypair._Myval2._Mylast - v48[1].allEditNumData._Mypair._Myval2._Myfirst) <= 7 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v49 = v48[1].allEditNumData._Mypair._Myval2._Myfirst;
  v50 = v47->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v50[1].allEditNumData._Mypair._Myval2._Mylast - v50[1].allEditNumData._Mypair._Myval2._Myfirst) <= 8 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v51 = v50[1].allEditNumData._Mypair._Myval2._Myfirst[8];
  if ( v51 != 0.0 )
    v40 = (double)rand() / 32767.0 * (v51 - COERCE_DOUBLE(*(_QWORD *)&v51 ^ _xmm))
        + COERCE_DOUBLE(*(_QWORD *)&v51 ^ _xmm);
  v52 = v49[7] - v40;
  v53 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v53[1].allButtonIndexData._Mypair._Myval2._Mylast
                        - v53[1].allButtonIndexData._Mypair._Myval2._Myfirst) <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v54 = v53[1].allButtonIndexData._Mypair._Myval2._Myfirst;
  v64 = &OGLEffectVec4::`vftable';
  v55 = *(__m128 *)D3DMath::ElipseFunction(&result, v54[1], v52, v46);
  v65 = v55.m128_i32[0];
  v56 = _mm_shuffle_ps(v55, v55, 85).m128_u32[0];
  v66 = v56;
  LODWORD(v57) = _mm_shuffle_ps(v55, v55, 170).m128_u32[0];
  v67 = v57;
  v68 = _mm_shuffle_ps(v55, v55, 255).m128_u32[0];
  LODWORD(pParticleData->DefaultDiffuseAxis.x) = v55.m128_i32[0];
  LODWORD(pParticleData->DefaultDiffuseAxis.y) = v56;
  pParticleData->DefaultDiffuseAxis.z = v57;
  ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->calcParticleVel)(this, pParticleData);
}

void __fastcall ParticleEmitterState::generateParticleRot(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  float v5; // xmm7_4
  DialogData *Myfirst; // rcx
  float *Mylast; // rax
  float *v8; // rbx
  float v9; // xmm8_4
  int v10; // xmm11_4
  float v11; // xmm12_4
  float v12; // xmm0_4
  float v13; // xmm13_4
  float v14; // xmm14_4
  float v15; // xmm10_4
  DialogData *v16; // rcx
  float *v17; // rbx
  float v18; // xmm8_4
  float v19; // xmm0_4
  float v20; // xmm9_4
  DialogData *v21; // rcx
  float *v22; // rbx
  float v23; // xmm8_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm3_4
  float v27; // xmm2_4
  float *v28; // rbx
  float v29; // xmm8_4
  float v30; // xmm0_4
  DialogData *v31; // rcx
  DialogData *v32; // rcx
  float v33; // xmm2_4
  float v34; // xmm1_4
  OGLQuat *v35; // rcx
  DialogData *v36; // rcx
  float *v37; // rax
  float *v38; // rbx
  float v39; // xmm8_4
  float v40; // xmm0_4
  float v41; // xmm10_4
  DialogData *v42; // rcx
  float *v43; // rbx
  float v44; // xmm8_4
  float v45; // xmm0_4
  float v46; // xmm9_4
  DialogData *v47; // rcx
  float *v48; // rbx
  float v49; // xmm8_4
  float v50; // xmm1_4
  float v51; // xmm3_4
  float v52; // xmm2_4
  float *v53; // rbx
  float v54; // xmm8_4
  float v55; // xmm0_4
  OGLQuat *v56; // rcx
  OGLEffectQuat v57; // [rsp+28h] [rbp-F0h] BYREF
  OGLEffectQuat v58; // [rsp+40h] [rbp-D8h] BYREF
  void **v59; // [rsp+58h] [rbp-C0h]
  OGLQuat q2; // [rsp+60h] [rbp-B8h] BYREF

  v57.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  v57.OGLQuat = (OGLQuat)_xmm;
  v5 = 0.0;
  OGLEffectQuat::setRotateEuler(&v57, 0.0, 0.0, 0.0);
  Myfirst = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[2].allComboIndexData._Mypair._Myval2._Mylast - Myfirst[2].allComboIndexData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  Mylast = Myfirst[7].allEditNumData._Mypair._Myval2._Mylast;
  if ( *Myfirst[2].allComboIndexData._Mypair._Myval2._Myfirst == 1 )
  {
    if ( (unsigned __int64)(Mylast - Myfirst[7].allEditNumData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v28 = Myfirst[7].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(Myfirst[7].allEditNumData._Mypair._Myval2._Mylast - v28) <= 5 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v29 = Myfirst[7].allEditNumData._Mypair._Myval2._Myfirst[5];
    v10 = _xmm;
    v11 = FLOAT_32767_0;
    if ( v29 == 0.0 )
      v30 = 0.0;
    else
      v30 = (float)((float)((float)rand() / 32767.0) * (float)(v29 - COERCE_FLOAT(LODWORD(v29) ^ _xmm)))
          + COERCE_FLOAT(LODWORD(v29) ^ _xmm);
    v13 = FLOAT_3_1415927;
    v14 = FLOAT_180_0;
    v26 = (float)((float)(v28[2] - v30) * 3.1415927) / 180.0;
    v27 = 0.0;
    v25 = 0.0;
  }
  else
  {
    if ( (unsigned __int64)(Mylast - Myfirst[7].allEditNumData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v8 = Myfirst[7].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(Myfirst[7].allEditNumData._Mypair._Myval2._Mylast - v8) <= 5 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v9 = Myfirst[7].allEditNumData._Mypair._Myval2._Myfirst[5];
    v10 = _xmm;
    v11 = FLOAT_32767_0;
    if ( v9 == 0.0 )
      v12 = 0.0;
    else
      v12 = (float)((float)((float)rand() / 32767.0) * (float)(v9 - COERCE_FLOAT(LODWORD(v9) ^ _xmm)))
          + COERCE_FLOAT(LODWORD(v9) ^ _xmm);
    v13 = FLOAT_3_1415927;
    v14 = FLOAT_180_0;
    v15 = (float)((float)(v8[2] - v12) * 3.1415927) / 180.0;
    v16 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v16[7].allEditNumData._Mypair._Myval2._Mylast
                          - v16[7].allEditNumData._Mypair._Myval2._Myfirst) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v17 = v16[7].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v16[7].allEditNumData._Mypair._Myval2._Mylast - v17) <= 4 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v18 = v16[7].allEditNumData._Mypair._Myval2._Myfirst[4];
    if ( v18 == 0.0 )
      v19 = 0.0;
    else
      v19 = (float)((float)((float)rand() / 32767.0) * (float)(v18 - COERCE_FLOAT(LODWORD(v18) ^ _xmm)))
          + COERCE_FLOAT(LODWORD(v18) ^ _xmm);
    v20 = (float)((float)(v17[1] - v19) * 3.1415927) / 180.0;
    v21 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( !(v21[7].allEditNumData._Mypair._Myval2._Mylast - v21[7].allEditNumData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v22 = v21[7].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v21[7].allEditNumData._Mypair._Myval2._Mylast - v22) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v23 = v21[7].allEditNumData._Mypair._Myval2._Myfirst[3];
    if ( v23 == 0.0 )
      v24 = 0.0;
    else
      v24 = (float)((float)((float)rand() / 32767.0) * (float)(v23 - COERCE_FLOAT(LODWORD(v23) ^ _xmm)))
          + COERCE_FLOAT(LODWORD(v23) ^ _xmm);
    v25 = (float)((float)(*v22 - v24) * 3.1415927) / 180.0;
    v26 = v15;
    v27 = v20;
  }
  OGLEffectQuat::setRotateEuler(&v57, v25, v27, v26);
  v31 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(v31[2].allComboIndexData._Mypair._Myval2._Mylast - v31[2].allComboIndexData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( !*v31[2].allComboIndexData._Mypair._Myval2._Myfirst )
  {
    v58.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
    v58.OGLQuat = (OGLQuat)_xmm;
    OGLEffectQuat::setRotateEuler(&v58, 0.0, 0.0, 0.0);
    v32 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v32[2].allButtonIndexData._Mypair._Myval2._Mylast
                          - v32[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( v32[2].allButtonIndexData._Mypair._Myval2._Myfirst[1] == 1 )
    {
      v33 = 0.0;
      v34 = FLOAT_1_5707964;
    }
    else
    {
      if ( v32[2].allButtonIndexData._Mypair._Myval2._Myfirst[1] != 2 )
      {
LABEL_44:
        q2 = v57.OGLQuat;
        v59 = &OGLEffectQuat::`vftable';
        OGLQuat::multiply(&v57.OGLQuat, &v58.OGLQuat, &q2);
        OGLQuat::normalize(&v57.OGLQuat);
        goto LABEL_45;
      }
      v33 = FLOAT_1_5707964;
      v34 = 0.0;
    }
    OGLEffectQuat::setRotateEuler(&v58, v34, v33, 0.0);
    goto LABEL_44;
  }
LABEL_45:
  v35 = &pParticleData->DefaultRotQ.OGLQuat;
  pParticleData->DefaultRotQ.OGLQuat = v57.OGLQuat;
  if ( pParticleData == (ParticleData *)-1168i64 )
    v35 = 0i64;
  pParticleData->LocalRot.OGLQuat = *v35;
  v36 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(v36[2].allComboIndexData._Mypair._Myval2._Mylast - v36[2].allComboIndexData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  v37 = v36[7].allEditNumData._Mypair._Myval2._Mylast;
  if ( *v36[2].allComboIndexData._Mypair._Myval2._Myfirst == 1 )
  {
    if ( (unsigned __int64)(v37 - v36[7].allEditNumData._Mypair._Myval2._Myfirst) <= 8 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v53 = v36[7].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v36[7].allEditNumData._Mypair._Myval2._Mylast - v53) <= 0xB )
      std::_Xout_of_range("invalid vector<T> subscript");
    v54 = v36[7].allEditNumData._Mypair._Myval2._Myfirst[11];
    if ( v54 == 0.0 )
      v55 = 0.0;
    else
      v55 = (float)((float)((float)rand() / v11) * (float)(v54 - COERCE_FLOAT(LODWORD(v54) ^ v10)))
          + COERCE_FLOAT(LODWORD(v54) ^ v10);
    v51 = (float)((float)(v53[8] - v55) * v13) / v14;
    v52 = 0.0;
    v50 = 0.0;
  }
  else
  {
    if ( (unsigned __int64)(v37 - v36[7].allEditNumData._Mypair._Myval2._Myfirst) <= 8 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v38 = v36[7].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v36[7].allEditNumData._Mypair._Myval2._Mylast - v38) <= 0xB )
      std::_Xout_of_range("invalid vector<T> subscript");
    v39 = v36[7].allEditNumData._Mypair._Myval2._Myfirst[11];
    if ( v39 == 0.0 )
      v40 = 0.0;
    else
      v40 = (float)((float)((float)rand() / v11) * (float)(v39 - COERCE_FLOAT(LODWORD(v39) ^ v10)))
          + COERCE_FLOAT(LODWORD(v39) ^ v10);
    v41 = (float)((float)(v38[8] - v40) * v13) / v14;
    v42 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v42[7].allEditNumData._Mypair._Myval2._Mylast
                          - v42[7].allEditNumData._Mypair._Myval2._Myfirst) <= 7 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v43 = v42[7].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v42[7].allEditNumData._Mypair._Myval2._Mylast - v43) <= 0xA )
      std::_Xout_of_range("invalid vector<T> subscript");
    v44 = v42[7].allEditNumData._Mypair._Myval2._Myfirst[10];
    if ( v44 == 0.0 )
      v45 = 0.0;
    else
      v45 = (float)((float)((float)rand() / v11) * (float)(v44 - COERCE_FLOAT(LODWORD(v44) ^ v10)))
          + COERCE_FLOAT(LODWORD(v44) ^ v10);
    v46 = (float)((float)(v43[7] - v45) * v13) / v14;
    v47 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v47[7].allEditNumData._Mypair._Myval2._Mylast
                          - v47[7].allEditNumData._Mypair._Myval2._Myfirst) <= 6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v48 = v47[7].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v47[7].allEditNumData._Mypair._Myval2._Mylast - v48) <= 9 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v49 = v47[7].allEditNumData._Mypair._Myval2._Myfirst[9];
    if ( v49 != 0.0 )
      v5 = (float)((float)((float)rand() / v11) * (float)(v49 - COERCE_FLOAT(LODWORD(v49) ^ v10)))
         + COERCE_FLOAT(LODWORD(v49) ^ v10);
    v50 = (float)((float)(v48[6] - v5) * v13) / v14;
    v51 = v41;
    v52 = v46;
  }
  OGLEffectQuat::setRotateEuler(&v57, v50, v52, v51);
  v56 = &pParticleData->DefaultRotQVel.OGLQuat;
  pParticleData->DefaultRotQVel.OGLQuat = v57.OGLQuat;
  if ( pParticleData == (ParticleData *)-1192i64 )
    v56 = 0i64;
  pParticleData->LocalRotVel.OGLQuat = *v56;
  ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->calcParticleRotVel)(this, pParticleData);
}

void __fastcall ParticleEmitterState::generateParticleScale(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  __m128 v3; // xmm0
  EffectData *pSettingData; // r8
  DialogData *Myfirst; // rbx
  DialogChartData *v8; // rbx
  ChartData *v9; // r8
  __m128 age_low; // xmm9
  ChartData *v11; // rbp
  float ChartDataY; // xmm6_4
  __m128 v13; // xmm0
  __m128 v14; // xmm7
  RandomNumbers *v15; // rcx
  DialogData *v16; // rcx
  __m128 v17; // xmm2
  float *v18; // rdx
  float *v19; // rdx
  __m128 v20; // xmm1
  DialogData *v21; // rcx
  float *v22; // rbp
  float v23; // xmm7_4
  RandomNumbers *v24; // rcx
  __m128 v25; // xmm6
  RandomNumbers *v26; // rcx
  EffectData *v27; // rbx
  DialogData *v28; // rcx
  int v29; // edx
  int v30; // edx
  DialogData *v31; // rcx
  DialogData *v32; // rcx
  __m128 v33; // xmm2
  float *v34; // rdx
  float *v35; // rdx
  __m128 v36; // xmm1
  float v37; // xmm2_4
  DialogData *v38; // rcx
  DialogData *v39; // rcx
  DialogData *v40; // rbx
  float *v41; // rbp
  float v42; // xmm7_4
  RandomNumbers *v43; // rcx
  __m128 v44; // xmm6
  RandomNumbers *v45; // rcx
  OGLVec3 *v46; // rcx
  float v47; // [rsp+30h] [rbp-78h]
  float v48; // [rsp+30h] [rbp-78h]

  pSettingData = this->pSettingData;
  Myfirst = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[6].allButtonIndexData._Mypair._Myval2._Mylast
                        - Myfirst[6].allButtonIndexData._Mypair._Myval2._Myfirst) <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( Myfirst[6].allButtonIndexData._Mypair._Myval2._Myfirst[1] )
  {
    v8 = pSettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v8[6].dialogChartData._Mypair._Myval2._Mylast
                          - v8[6].dialogChartData._Mypair._Myval2._Myfirst) <= 5 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v9 = v8[6].dialogChartData._Mypair._Myval2._Myfirst;
    age_low = (__m128)LODWORD(this->pParticleEmitter->age);
    if ( (unsigned __int64)(v8[6].dialogChartData._Mypair._Myval2._Mylast - v9) <= 4 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v11 = v8[6].dialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v8[6].dialogChartData._Mypair._Myval2._Mylast - v9) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    ChartDataY = D3DMath::GetChartDataY(this->pParticleEmitter->age, v9 + 5);
    v13 = age_low;
    v13.m128_f32[0] = D3DMath::GetChartDataY(age_low.m128_f32[0], v11 + 4);
    v14 = v13;
    v3 = age_low;
    v3.m128_f32[0] = D3DMath::GetChartDataY(age_low.m128_f32[0], v11 + 3);
    *(_QWORD *)&pParticleData->DefaultScale.x = _mm_unpacklo_ps(v3, v14).m128_u64[0];
    pParticleData->DefaultScale.z = ChartDataY;
  }
  else
  {
    if ( (unsigned __int64)(pSettingData->AllDialogData._Mypair._Myval2._Mylast - Myfirst) <= 6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( !(Myfirst[6].allComboIndexData._Mypair._Myval2._Mylast - Myfirst[6].allComboIndexData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v15 = (RandomNumbers *)Myfirst[6].allComboIndexData._Mypair._Myval2._Myfirst;
    if ( LODWORD(v15->__vftable) )
    {
      if ( LODWORD(v15->__vftable) == 1 )
      {
        if ( (unsigned __int64)(Myfirst[6].allEditNumData._Mypair._Myval2._Mylast
                              - Myfirst[6].allEditNumData._Mypair._Myval2._Myfirst) <= 3 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v3.m128_f32[0] = RandomNumbers::widthUniformRandomNumbers<float>(
                           v15,
                           Myfirst[6].allEditNumData._Mypair._Myval2._Myfirst[3]);
        v17 = v3;
        v21 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v21[6].allEditNumData._Mypair._Myval2._Mylast
                              - v21[6].allEditNumData._Mypair._Myval2._Myfirst) <= 2 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v19 = v21[6].allEditNumData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v21[6].allEditNumData._Mypair._Myval2._Mylast - v19) <= 1 )
          std::_Xout_of_range("invalid vector<T> subscript");
        if ( !(v21[6].allEditNumData._Mypair._Myval2._Mylast - v19) )
          std::_Xout_of_range("invalid vector<T> subscript");
      }
      else
      {
        if ( LODWORD(v15->__vftable) != 2 )
          goto LABEL_39;
        if ( (unsigned __int64)(Myfirst[6].allEditNumData._Mypair._Myval2._Mylast
                              - Myfirst[6].allEditNumData._Mypair._Myval2._Myfirst) <= 3 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v3.m128_f32[0] = RandomNumbers::widthUniformRandomNumbers<float>(
                           v15,
                           Myfirst[6].allEditNumData._Mypair._Myval2._Myfirst[3]);
        v16 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
        if ( !(v16[6].allEditNumData._Mypair._Myval2._Mylast - v16[6].allEditNumData._Mypair._Myval2._Myfirst) )
          std::_Xout_of_range("invalid vector<T> subscript");
        if ( *v16[6].allEditNumData._Mypair._Myval2._Myfirst == 0.0 )
        {
          v17 = 0i64;
        }
        else
        {
          if ( (unsigned __int64)(v16[6].allEditNumData._Mypair._Myval2._Mylast
                                - v16[6].allEditNumData._Mypair._Myval2._Myfirst) <= 1 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v18 = v16[6].allEditNumData._Mypair._Myval2._Myfirst;
          if ( !(v16[6].allEditNumData._Mypair._Myval2._Mylast - v18) )
            std::_Xout_of_range("invalid vector<T> subscript");
          v17 = (__m128)*((unsigned int *)v18 + 1);
          v17.m128_f32[0] = v17.m128_f32[0] / *v18;
          if ( (unsigned __int64)(v16[6].allEditNumData._Mypair._Myval2._Mylast - v18) <= 2 )
            std::_Xout_of_range("invalid vector<T> subscript");
          if ( !(v16[6].allEditNumData._Mypair._Myval2._Mylast - v18) )
            std::_Xout_of_range("invalid vector<T> subscript");
        }
        if ( (unsigned __int64)(v16[6].allEditNumData._Mypair._Myval2._Mylast
                              - v16[6].allEditNumData._Mypair._Myval2._Myfirst) <= 2 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v19 = v16[6].allEditNumData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v16[6].allEditNumData._Mypair._Myval2._Mylast - v19) <= 1 )
          std::_Xout_of_range("invalid vector<T> subscript");
        if ( !(v16[6].allEditNumData._Mypair._Myval2._Mylast - v19) )
          std::_Xout_of_range("invalid vector<T> subscript");
        v17.m128_f32[0] = v17.m128_f32[0] * v3.m128_f32[0];
      }
      v3.m128_f32[0] = v3.m128_f32[0] + *v19;
      v20 = v17;
      v20.m128_f32[0] = v17.m128_f32[0] + v19[1];
      v3 = _mm_unpacklo_ps(v3, v20);
      v47 = v17.m128_f32[0] + v19[2];
      *(_QWORD *)&pParticleData->DefaultScale.x = v3.m128_u64[0];
      pParticleData->DefaultScale.z = v47;
    }
    else
    {
      if ( (unsigned __int64)(Myfirst[6].allEditNumData._Mypair._Myval2._Mylast
                            - Myfirst[6].allEditNumData._Mypair._Myval2._Myfirst) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v22 = Myfirst[6].allEditNumData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(Myfirst[6].allEditNumData._Mypair._Myval2._Mylast - v22) <= 5 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( (unsigned __int64)(Myfirst[6].allEditNumData._Mypair._Myval2._Mylast - v22) <= 1 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( (unsigned __int64)(Myfirst[6].allEditNumData._Mypair._Myval2._Mylast - v22) <= 4 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( !(Myfirst[6].allEditNumData._Mypair._Myval2._Mylast - v22) )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( (unsigned __int64)(Myfirst[6].allEditNumData._Mypair._Myval2._Mylast - v22) <= 3 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v23 = RandomNumbers::widthUniformRandomNumbers<float>(
              (RandomNumbers *)Myfirst[6].allEditNumData._Mypair._Myval2._Myfirst,
              v22[5])
          + v22[2];
      v3.m128_f32[0] = RandomNumbers::widthUniformRandomNumbers<float>(v24, v22[4]);
      v25 = v3;
      v25.m128_f32[0] = v3.m128_f32[0] + v22[1];
      v3.m128_f32[0] = RandomNumbers::widthUniformRandomNumbers<float>(v26, v22[3]) + *v22;
      *(_QWORD *)&pParticleData->DefaultScale.x = _mm_unpacklo_ps(v3, v25).m128_u64[0];
      pParticleData->DefaultScale.z = v23;
    }
  }
LABEL_39:
  v27 = this->pSettingData;
  if ( (unsigned __int64)(v27->AllDialogData._Mypair._Myval2._Mylast - v27->AllDialogData._Mypair._Myval2._Myfirst) <= 6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v28 = v27->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v28[6].allComboIndexData._Mypair._Myval2._Mylast
                        - v28[6].allComboIndexData._Mypair._Myval2._Myfirst) <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v29 = v28[6].allComboIndexData._Mypair._Myval2._Myfirst[1];
  if ( v29 )
  {
    v30 = v29 - 1;
    if ( v30 )
    {
      if ( v30 != 1 )
        goto LABEL_72;
      v31 = v27->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v31[6].allEditNumData._Mypair._Myval2._Mylast
                            - v31[6].allEditNumData._Mypair._Myval2._Myfirst) <= 9 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v3.m128_f32[0] = RandomNumbers::widthUniformRandomNumbers<float>(
                         (RandomNumbers *)v31,
                         v31[6].allEditNumData._Mypair._Myval2._Myfirst[9]);
      v32 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v32[6].allEditNumData._Mypair._Myval2._Mylast
                            - v32[6].allEditNumData._Mypair._Myval2._Myfirst) <= 6 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( v32[6].allEditNumData._Mypair._Myval2._Myfirst[6] == 0.0 )
      {
        v33 = 0i64;
      }
      else
      {
        if ( (unsigned __int64)(v32[6].allEditNumData._Mypair._Myval2._Mylast
                              - v32[6].allEditNumData._Mypair._Myval2._Myfirst) <= 7 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v34 = v32[6].allEditNumData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v32[6].allEditNumData._Mypair._Myval2._Mylast - v34) <= 6 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v33 = (__m128)*((unsigned int *)v34 + 7);
        v33.m128_f32[0] = v33.m128_f32[0] / v34[6];
        if ( (unsigned __int64)(v32[6].allEditNumData._Mypair._Myval2._Mylast - v34) <= 8 )
          std::_Xout_of_range("invalid vector<T> subscript");
        if ( (unsigned __int64)(v32[6].allEditNumData._Mypair._Myval2._Mylast - v34) <= 6 )
          std::_Xout_of_range("invalid vector<T> subscript");
      }
      if ( (unsigned __int64)(v32[6].allEditNumData._Mypair._Myval2._Mylast
                            - v32[6].allEditNumData._Mypair._Myval2._Myfirst) <= 8 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v35 = v32[6].allEditNumData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v32[6].allEditNumData._Mypair._Myval2._Mylast - v35) <= 7 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( (unsigned __int64)(v32[6].allEditNumData._Mypair._Myval2._Mylast - v35) <= 6 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v33.m128_f32[0] = v33.m128_f32[0] * v3.m128_f32[0];
    }
    else
    {
      v38 = v27->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v38[6].allEditNumData._Mypair._Myval2._Mylast
                            - v38[6].allEditNumData._Mypair._Myval2._Myfirst) <= 9 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v3.m128_f32[0] = RandomNumbers::widthUniformRandomNumbers<float>(
                         (RandomNumbers *)v38,
                         v38[6].allEditNumData._Mypair._Myval2._Myfirst[9]);
      v33 = v3;
      v39 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v39[6].allEditNumData._Mypair._Myval2._Mylast
                            - v39[6].allEditNumData._Mypair._Myval2._Myfirst) <= 8 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v35 = v39[6].allEditNumData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v39[6].allEditNumData._Mypair._Myval2._Mylast - v35) <= 7 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( (unsigned __int64)(v39[6].allEditNumData._Mypair._Myval2._Mylast - v35) <= 6 )
        std::_Xout_of_range("invalid vector<T> subscript");
    }
    v3.m128_f32[0] = v3.m128_f32[0] + v35[6];
    v36 = v33;
    v36.m128_f32[0] = v33.m128_f32[0] + v35[7];
    v37 = v33.m128_f32[0] + v35[8];
    *(_QWORD *)&pParticleData->DefaultScaleVel.x = _mm_unpacklo_ps(v3, v36).m128_u64[0];
    v48 = v37;
  }
  else
  {
    v40 = v27->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v40[6].allEditNumData._Mypair._Myval2._Mylast
                          - v40[6].allEditNumData._Mypair._Myval2._Myfirst) <= 8 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v41 = v40[6].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v40[6].allEditNumData._Mypair._Myval2._Mylast - v41) <= 0xB )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (unsigned __int64)(v40[6].allEditNumData._Mypair._Myval2._Mylast - v41) <= 7 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (unsigned __int64)(v40[6].allEditNumData._Mypair._Myval2._Mylast - v41) <= 0xA )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (unsigned __int64)(v40[6].allEditNumData._Mypair._Myval2._Mylast - v41) <= 6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (unsigned __int64)(v40[6].allEditNumData._Mypair._Myval2._Mylast - v41) <= 9 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v42 = RandomNumbers::widthUniformRandomNumbers<float>(
            (RandomNumbers *)v40[6].allEditNumData._Mypair._Myval2._Myfirst,
            v41[11])
        + v41[8];
    v3.m128_f32[0] = RandomNumbers::widthUniformRandomNumbers<float>(v43, v41[10]);
    v44 = v3;
    v44.m128_f32[0] = v3.m128_f32[0] + v41[7];
    v3.m128_f32[0] = RandomNumbers::widthUniformRandomNumbers<float>(v45, v41[9]) + v41[6];
    v48 = v42;
    *(_QWORD *)&pParticleData->DefaultScaleVel.x = _mm_unpacklo_ps(v3, v44).m128_u64[0];
  }
  pParticleData->DefaultScaleVel.z = v48;
LABEL_72:
  v46 = &pParticleData->DefaultScale.OGLVec3;
  if ( pParticleData == (ParticleData *)-1096i64 )
    v46 = 0i64;
  *(_QWORD *)&pParticleData->LocalScale.x = *(_QWORD *)&v46->x;
  pParticleData->LocalScale.z = v46->z;
  ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->updateParticleScale)(this, pParticleData);
}

void __fastcall ParticleEmitterState::generateWorldData(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  OGLVec3 *v4; // rcx
  float y; // xmm6_4
  float x; // xmm2_4
  float z; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm0_4
  OGLMatrix *v10; // rcx
  float v11; // xmm5_4
  float v12; // xmm1_4
  float v13; // xmm6_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  OGLVec3 *v16; // rcx
  float v17; // xmm5_4
  float v18; // xmm4_4

  ((void (__fastcall *)(ParticleEmitterState *))this->updateWorldData)(this);
  v4 = &pParticleData->LocalVel.OGLVec3;
  if ( pParticleData == (ParticleData *)-712i64 )
    v4 = 0i64;
  y = v4->y;
  x = v4->x;
  z = v4->z;
  v8 = y;
  v9 = v4->x;
  v10 = &pParticleData->ReferenceMat.OGLMatrix;
  if ( pParticleData == (ParticleData *)-328i64 )
    v10 = 0i64;
  v11 = (float)((float)(y * v10->m[5]) + (float)(v9 * v10->m[1])) + (float)(z * v10->m[9]);
  v12 = z * v10->m[10];
  v13 = (float)(y * v10->m[4]) + (float)(x * v10->m[0]);
  v14 = z * v10->m[8];
  v15 = (float)(v8 * v10->m[6]) + (float)(x * v10->m[2]);
  v16 = &pParticleData->WorldPos.OGLVec3;
  if ( pParticleData == (ParticleData *)-616i64 )
    v16 = 0i64;
  pParticleData->PreWorldPos.x = v16->x;
  pParticleData->PreWorldPos.y = v16->y;
  pParticleData->PreWorldPos.z = v16->z;
  v17 = v11 + pParticleData->PreWorldPos.y;
  v18 = (float)(v15 + v12) + pParticleData->PreWorldPos.z;
  pParticleData->PreWorldPos.x = (float)(v13 + v14) + pParticleData->PreWorldPos.x;
  pParticleData->PreWorldPos.y = v17;
  pParticleData->PreWorldPos.z = v18;
}

ParticleData *__fastcall ParticleEmitterState::initGenerateParticle(
        ParticleEmitterState *this,
        bool mirrorFlag,
        float frame)
{
  ParticleData *result; // rax
  unsigned __int64 v6; // rdx
  ParticleData *v7; // rdi
  Emitter *pParticleEmitter; // rcx
  unsigned int v9; // eax
  DialogData *Myfirst; // rcx
  float *v11; // rbx
  float v12; // xmm7_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  EffectData *pSettingData; // rax
  DialogData *v16; // rcx
  float *v17; // rbx
  float v18; // xmm7_4
  float v19; // xmm0_4
  Emitter *v20; // rax
  int v21; // ebp
  float v22; // er15
  __int64 v23; // xmm6_8
  std::vector<ParticleDataForChild> *p_particleDataForChild; // rbx
  ParticleDataForChild *Mylast; // r8
  ParticleDataForChild *v26; // rax
  __int64 v27; // rsi
  ParticleDataForChild *v28; // rax
  ParticleDataForChild *v29; // rax
  Emitter *v30; // rax
  OGLEffectMatrix *p_WorldMat; // rcx
  OGLMatrix *v32; // rax
  char *v33; // rcx
  _OWORD *v34; // rax
  _OWORD *m; // rcx
  Emitter *v36; // rax
  Emitter *v37; // rax
  EffectData *v38; // r8
  DialogData *v39; // rcx
  DialogData *v40; // rcx
  EffectData *v41; // r8
  DialogData *v42; // rcx
  EffectData *v43; // r8
  DialogData *v44; // rcx
  DialogData *v45; // rcx
  signed __int64 v46; // rcx
  DialogData *v47; // rcx
  __int64 v48; // r9
  DialogData *v49; // rcx
  __int64 v50; // rsi
  EffectDataListManager *m_pEffectDataListManager; // rcx
  OGLModel *m_pBindModel; // rbx
  int BoneNoFromName; // ebp
  int v54; // er8
  ParticleEmitterState *v55; // rcx
  int v56; // esi
  __int64 v57; // r11
  DialogData *v58; // rcx
  float *v59; // rbx
  float v60; // xmm7_4
  float v61; // xmm0_4
  RandomMT *v62; // rcx
  OGLVec3 trans; // [rsp+20h] [rbp-A8h] BYREF
  int v64; // [rsp+30h] [rbp-98h]
  OGLVec3 BonePos2; // [rsp+38h] [rbp-90h] BYREF

  result = EffectTaskManager::newParticlePtr(
             *(EffectTaskManager **)(*(_QWORD *)&AppMain::pApp + 2507504i64),
             this->pParticleEmitter->jobNum);
  v7 = result;
  if ( result )
  {
    result->playerNum = this->pParticleEmitter->m_pEffectDataListManager->m_PlayerNum;
    pParticleEmitter = this->pParticleEmitter;
    v9 = ++pParticleEmitter->m_IDCount;
    if ( v9 > 0x7FFFFFF5 )
      v9 = 0;
    pParticleEmitter->m_IDCount = v9;
    v7->ID = this->pParticleEmitter->m_IDCount;
    v7->age = 1.0;
    Myfirst = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( !(Myfirst[2].allEditNumData._Mypair._Myval2._Mylast - Myfirst[2].allEditNumData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v11 = Myfirst[2].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(Myfirst[2].allEditNumData._Mypair._Myval2._Mylast - v11) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v12 = v11[1];
    if ( v12 == 0.0 )
      v13 = 0.0;
    else
      v13 = (float)((float)((float)rand() / 32767.0) * (float)(v12 - COERCE_FLOAT(LODWORD(v12) ^ _xmm)))
          + COERCE_FLOAT(LODWORD(v12) ^ _xmm);
    v14 = *v11 - v13;
    BonePos2.x = 0.0;
    v7->lifeLimit = (int)v14;
    pSettingData = this->pSettingData;
    BonePos2.y = FLOAT_999_0;
    v16 = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v16[1].allEditNumData._Mypair._Myval2._Mylast
                          - v16[1].allEditNumData._Mypair._Myval2._Myfirst) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v17 = v16[1].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v16[1].allEditNumData._Mypair._Myval2._Mylast - v17) <= 4 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v18 = v17[4];
    if ( v18 == 0.0 )
      v19 = 0.0;
    else
      v19 = (float)((float)((float)rand() / 32767.0) * (float)(v18 - COERCE_FLOAT(LODWORD(v18) ^ _xmm)))
          + COERCE_FLOAT(LODWORD(v18) ^ _xmm);
    v20 = this->pParticleEmitter;
    v21 = 0;
    LODWORD(v22) = (int)(float)(v19 + v17[3]);
    BonePos2.z = v22;
    if ( v20->m_ChildSize > 0 )
    {
      v23 = *(_QWORD *)&BonePos2.x;
      p_particleDataForChild = &v7->particleDataForChild;
      do
      {
        Mylast = v7->particleDataForChild._Mypair._Myval2._Mylast;
        if ( &BonePos2 >= (OGLVec3 *)Mylast
          || (v26 = p_particleDataForChild->_Mypair._Myval2._Myfirst,
              p_particleDataForChild->_Mypair._Myval2._Myfirst > (ParticleDataForChild *)&BonePos2) )
        {
          if ( Mylast == v7->particleDataForChild._Mypair._Myval2._Myend )
            std::vector<ParticleDataForChild>::_Reserve(&v7->particleDataForChild, v6);
          v29 = v7->particleDataForChild._Mypair._Myval2._Mylast;
          if ( v29 )
          {
            *(_QWORD *)&v29->accumulateEmitVolume = v23;
            *(float *)&v29->intervalLimitTime = v22;
          }
        }
        else
        {
          v27 = ((char *)&BonePos2 - (char *)v26) / 12;
          if ( Mylast == v7->particleDataForChild._Mypair._Myval2._Myend )
            std::vector<ParticleDataForChild>::_Reserve(
              &v7->particleDataForChild,
              (unsigned __int128)(((char *)&BonePos2 - (char *)v26) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64);
          v6 = (unsigned __int64)v7->particleDataForChild._Mypair._Myval2._Mylast;
          if ( v6 )
          {
            v28 = p_particleDataForChild->_Mypair._Myval2._Myfirst;
            *(_QWORD *)v6 = *(_QWORD *)&p_particleDataForChild->_Mypair._Myval2._Myfirst[v27].accumulateEmitVolume;
            *(_DWORD *)(v6 + 8) = v28[v27].intervalLimitTime;
          }
        }
        ++v7->particleDataForChild._Mypair._Myval2._Mylast;
        ++v21;
      }
      while ( v21 < this->pParticleEmitter->m_ChildSize );
    }
    v30 = this->pParticleEmitter;
    p_WorldMat = &v30->WorldMat;
    v32 = &v30->WorldMat.OGLMatrix;
    if ( !p_WorldMat )
      v32 = 0i64;
    v33 = (char *)&v32[-1].m[14];
    if ( !v32 )
      v33 = 0i64;
    v34 = v33 + 8;
    if ( !v33 )
      v34 = 0i64;
    *(_OWORD *)v7->DefaultReferenceMat.m = *v34;
    *(_OWORD *)&v7->DefaultReferenceMat.m[4] = v34[1];
    *(_OWORD *)&v7->DefaultReferenceMat.m[8] = v34[2];
    m = (_OWORD *)v7->DefaultReferenceMat.m;
    *(_OWORD *)&v7->DefaultReferenceMat.m[12] = v34[3];
    if ( v7 == (ParticleData *)-256i64 )
      m = 0i64;
    *(_OWORD *)v7->ReferenceMat.m = *m;
    *(_OWORD *)&v7->ReferenceMat.m[4] = m[1];
    *(_OWORD *)&v7->ReferenceMat.m[8] = m[2];
    *(_OWORD *)&v7->ReferenceMat.m[12] = m[3];
    v36 = this->pParticleEmitter;
    *(_OWORD *)v7->DefaultActMat.m = *(_OWORD *)v36->m_ActArg.actMat.m;
    *(_OWORD *)&v7->DefaultActMat.m[4] = *(_OWORD *)&v36->m_ActArg.actMat.m[4];
    *(_OWORD *)&v7->DefaultActMat.m[8] = *(_OWORD *)&v36->m_ActArg.actMat.m[8];
    *(_OWORD *)&v7->DefaultActMat.m[12] = *(_OWORD *)&v36->m_ActArg.actMat.m[12];
    v37 = this->pParticleEmitter;
    *(_OWORD *)v7->ActMat.m = *(_OWORD *)v37->m_ActArg.actMat.m;
    *(_OWORD *)&v7->ActMat.m[4] = *(_OWORD *)&v37->m_ActArg.actMat.m[4];
    *(_OWORD *)&v7->ActMat.m[8] = *(_OWORD *)&v37->m_ActArg.actMat.m[8];
    *(_OWORD *)&v7->ActMat.m[12] = *(_OWORD *)&v37->m_ActArg.actMat.m[12];
    v38 = this->pSettingData;
    if ( (unsigned __int64)(v38->AllDialogData._Mypair._Myval2._Mylast - v38->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v39 = v38->AllDialogData._Mypair._Myval2._Myfirst;
    if ( !(v39[2].allComboIndexData._Mypair._Myval2._Mylast - v39[2].allComboIndexData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( *v39[2].allComboIndexData._Mypair._Myval2._Myfirst == 5 )
    {
      if ( (unsigned __int64)(v38->AllDialogData._Mypair._Myval2._Mylast - v38->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v40 = v38->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v40[2].allButtonIndexData._Mypair._Myval2._Mylast
                            - v40[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 7 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( v40[2].allButtonIndexData._Mypair._Myval2._Myfirst[7] == 1 )
      {
        *(_QWORD *)v7->ReferenceMat.m = 1065353216i64;
        v7->ReferenceMat.m[4] = 0.0;
        *(_QWORD *)&v7->ReferenceMat.m[8] = 0i64;
        *(_QWORD *)&v7->ReferenceMat.m[12] = 0i64;
        *(_QWORD *)&v7->ReferenceMat.m[5] = 1065353216i64;
        *(_QWORD *)&v7->ReferenceMat.m[2] = 0i64;
        *(_QWORD *)&v7->ReferenceMat.m[10] = 1065353216i64;
        v7->ReferenceMat.m[14] = 0.0;
        v7->ReferenceMat.m[7] = 0.0;
        v7->ReferenceMat.m[15] = 1.0;
      }
    }
    v7->mirrorFlag = mirrorFlag;
    v41 = this->pSettingData;
    if ( (unsigned __int64)(v41->AllDialogData._Mypair._Myval2._Mylast - v41->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v42 = v41->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v42[2].allButtonIndexData._Mypair._Myval2._Mylast
                          - v42[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( v42[2].allButtonIndexData._Mypair._Myval2._Myfirst[6] )
      v7->mirrorFlag = 0;
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->generateParticlePos)(this, v7);
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->generateParticleCol)(this, v7);
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->generateParticleRot)(this, v7);
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->generateParticleScale)(this, v7);
    v43 = this->pSettingData;
    if ( (unsigned __int64)(v43->AllDialogData._Mypair._Myval2._Mylast - v43->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v44 = v43->AllDialogData._Mypair._Myval2._Myfirst;
    if ( !(v44[2].allComboIndexData._Mypair._Myval2._Mylast - v44[2].allComboIndexData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( *v44[2].allComboIndexData._Mypair._Myval2._Myfirst == 5 )
    {
      if ( (unsigned __int64)(v43->AllDialogData._Mypair._Myval2._Mylast - v43->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v45 = v43->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v45[2].allButtonIndexData._Mypair._Myval2._Mylast
                            - v45[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 7 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( v45[2].allButtonIndexData._Mypair._Myval2._Myfirst[7] == 1 )
      {
        v46 = (char *)v43->AllDialogData._Mypair._Myval2._Mylast - (char *)v43->AllDialogData._Mypair._Myval2._Myfirst;
        *(_QWORD *)&trans.x = 0i64;
        trans.z = 0.0;
        *(_QWORD *)&BonePos2.x = 0i64;
        BonePos2.z = 0.0;
        if ( (unsigned __int64)(v46 / 96) <= 2 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v47 = v43->AllDialogData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v47[2].allComboIndexData._Mypair._Myval2._Mylast
                              - v47[2].allComboIndexData._Mypair._Myval2._Myfirst) <= 2 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v48 = v47[2].allComboIndexData._Mypair._Myval2._Myfirst[2];
        if ( (unsigned __int64)(v43->AllDialogData._Mypair._Myval2._Mylast - v43->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v49 = v43->AllDialogData._Mypair._Myval2._Myfirst;
        if ( (unsigned __int64)(v49[2].allComboIndexData._Mypair._Myval2._Mylast
                              - v49[2].allComboIndexData._Mypair._Myval2._Myfirst) <= 3 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v50 = v49[2].allComboIndexData._Mypair._Myval2._Myfirst[3];
        m_pEffectDataListManager = this->pParticleEmitter->m_pEffectDataListManager;
        m_pBindModel = m_pEffectDataListManager->m_pBindModel;
        if ( v7->mirrorFlag )
          SLODWORD(v48) = ciMirrorNameIndex[v48];
        BoneNoFromName = OGLModel::getBoneNoFromName(
                           m_pEffectDataListManager->m_pBindModel,
                           gcBoneName[(int)v48],
                           (int)v43);
        if ( v7->mirrorFlag )
          SLODWORD(v50) = ciMirrorNameIndex[v50];
        v56 = OGLModel::getBoneNoFromName(m_pBindModel, gcBoneName[(int)v50], v54);
        if ( m_pBindModel->m_pFigure )
        {
          OGLModel::getBoneTrans(m_pBindModel, BoneNoFromName, &trans, &m_pBindModel->m_mWorld);
          if ( v57 )
            OGLModel::getBoneTrans(m_pBindModel, v56, &BonePos2, &m_pBindModel->m_mWorld);
        }
        ParticleEmitterState::calcLocalData(v55, v7, &trans, &BonePos2);
      }
    }
    v58 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( !(v58->allButtonIndexData._Mypair._Myval2._Mylast - v58->allButtonIndexData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( *v58->allButtonIndexData._Mypair._Myval2._Myfirst )
    {
      if ( !(v58->allEditNumData._Mypair._Myval2._Mylast - v58->allEditNumData._Mypair._Myval2._Myfirst) )
        std::_Xout_of_range("invalid vector<T> subscript");
      v59 = v58->allEditNumData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v58->allEditNumData._Mypair._Myval2._Mylast - v58->allEditNumData._Mypair._Myval2._Myfirst) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v60 = v59[2];
      if ( v60 == 0.0 )
        v61 = 0.0;
      else
        v61 = (float)((float)((float)rand() / 32767.0) * (float)(v60 - COERCE_FLOAT(LODWORD(v60) ^ _xmm)))
            + COERCE_FLOAT(LODWORD(v60) ^ _xmm);
      v7->RatioToFollow = (float)(v61 + *v59) / 100.0;
    }
    else
    {
      v7->RatioToFollow = 0.0;
    }
    v64 = 0;
    *(_QWORD *)&v7->ForceFieldVel.x = _mm_unpacklo_ps((__m128)0i64, (__m128)0i64).m128_u64[0];
    v7->ForceFieldVel.z = 0.0;
    v62 = &this->pRandomNumbers->RandomMT;
    *(_QWORD *)&v7->GravityPos.x = 0i64;
    v7->GravityPos.z = 0.0;
    v7->TexNum = (unsigned int)RandomMT::getRand32(v62) >> 1;
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->calcLocalMatrix)(this, v7);
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->generateWorldData)(this, v7);
    return v7;
  }
  return result;
}

void __fastcall ParticleEmitterState::updateAllParticle(ParticleEmitterState *this, EffectUpdateArgument *pUpdateArg)
{
  int v2; // esi
  std::vector<ParticleData *> *pParticleDataVec; // r8
  DialogData *Myfirst; // rbp
  unsigned __int64 v7; // rdi
  int *v8; // rcx
  ParticleData **v9; // rcx
  std::vector<ParticleData *> *v10; // rbx

  v2 = 0;
  pParticleDataVec = pUpdateArg->pParticleDataVec;
  Myfirst = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (int)(pParticleDataVec->_Mypair._Myval2._Mylast - pParticleDataVec->_Mypair._Myval2._Myfirst) > 0 )
  {
    v7 = 0i64;
    do
    {
      v8 = Myfirst[2].allButtonIndexData._Mypair._Myval2._Myfirst;
      if ( !(Myfirst[2].allButtonIndexData._Mypair._Myval2._Mylast - v8) )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( !*v8 )
      {
        if ( pParticleDataVec->_Mypair._Myval2._Mylast - pParticleDataVec->_Mypair._Myval2._Myfirst <= v7 )
          std::_Xout_of_range("invalid vector<T> subscript");
        if ( pParticleDataVec->_Mypair._Myval2._Myfirst[v7]->age > (float)pParticleDataVec->_Mypair._Myval2._Myfirst[v7]->lifeLimit )
          goto LABEL_9;
      }
      v9 = pParticleDataVec->_Mypair._Myval2._Myfirst;
      if ( pParticleDataVec->_Mypair._Myval2._Mylast - pParticleDataVec->_Mypair._Myval2._Myfirst <= v7 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( (v9[v7]->Flags & 1) == 0 )
      {
        if ( pParticleDataVec->_Mypair._Myval2._Mylast - v9 <= v7 )
          std::_Xout_of_range("invalid vector<T> subscript");
        ((void (__fastcall *)(ParticleEmitterState *, bool, ParticleData *))this->updateParticle)(
          this,
          pUpdateArg->mirrorFlag,
          v9[v7]);
      }
      else
      {
LABEL_9:
        if ( pParticleDataVec->_Mypair._Myval2._Mylast - pParticleDataVec->_Mypair._Myval2._Myfirst <= v7 )
          std::_Xout_of_range("invalid vector<T> subscript");
        EffectTaskManager::deleteParticlePtr(
          *(EffectTaskManager **)(*(_QWORD *)&AppMain::pApp + 2507504i64),
          pParticleDataVec->_Mypair._Myval2._Myfirst[v7]);
        v10 = pUpdateArg->pParticleDataVec;
        memmove(
          &v10->_Mypair._Myval2._Myfirst[v2],
          &v10->_Mypair._Myval2._Myfirst[v2 + 1],
          (char *)v10->_Mypair._Myval2._Mylast - (char *)&v10->_Mypair._Myval2._Myfirst[v2 + 1]);
        --v10->_Mypair._Myval2._Mylast;
        --v2;
        --v7;
      }
      pParticleDataVec = pUpdateArg->pParticleDataVec;
      ++v2;
      ++v7;
    }
    while ( v2 < (int)(pParticleDataVec->_Mypair._Myval2._Mylast - pParticleDataVec->_Mypair._Myval2._Myfirst) );
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall ParticleEmitterState::updateParticle(
        ParticleEmitterState *this,
        bool mirrorFlag,
        ParticleData *pParticleData,
        float frame)
{
  int v4; // er10
  unsigned __int64 v7; // r11
  __int64 v8; // r9
  ParticleDataForChild *Myfirst; // r8

  if ( pParticleData )
  {
    v4 = 0;
    pParticleData->age = frame + pParticleData->age;
    if ( pParticleData->particleDataForChild._Mypair._Myval2._Mylast
       - pParticleData->particleDataForChild._Mypair._Myval2._Myfirst )
    {
      v7 = 0i64;
      v8 = 0i64;
      do
      {
        Myfirst = pParticleData->particleDataForChild._Mypair._Myval2._Myfirst;
        if ( pParticleData->particleDataForChild._Mypair._Myval2._Mylast - Myfirst <= v7 )
          std::_Xout_of_range("invalid vector<T> subscript");
        ++v4;
        ++v7;
        Myfirst[v8].intervalTime = frame + Myfirst[v8].intervalTime;
        ++v8;
      }
      while ( v4 < (unsigned __int64)(pParticleData->particleDataForChild._Mypair._Myval2._Mylast
                                    - pParticleData->particleDataForChild._Mypair._Myval2._Myfirst) );
    }
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->updateParticlePos)(this, pParticleData);
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->updateParticleCol)(this, pParticleData);
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->updateParticleScale)(this, pParticleData);
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->updateParticleRot)(this, pParticleData);
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->calcReferenceMatrix)(this, pParticleData);
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->calcActionMatrix)(this, pParticleData);
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->calcLocalMatrix)(this, pParticleData);
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->updateWorldData)(this, pParticleData);
  }
}

void __fastcall ParticleEmitterState::updateParticleCol(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  EffectData *pSettingData; // rdx
  DialogData *Myfirst; // rax
  int *v7; // rcx
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
  ChartData *v44; // r14
  ChartData *v45; // rbp
  ChartData *v46; // rbx
  float ChartDataYtoLifeFit; // xmm8_4
  float v48; // xmm7_4
  float v49; // xmm6_4
  float v50; // xmm0_4
  EffectData *v51; // r8
  DialogData *v52; // rax
  int *v53; // rdx
  DialogChartData *v54; // rcx
  ChartData *v55; // r8

  pSettingData = this->pSettingData;
  Myfirst = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v7 = Myfirst[5].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[5].allButtonIndexData._Mypair._Myval2._Mylast - v7) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *v7 )
  {
    p_dialogChartData = &pSettingData->AllDialogChartData._Mypair._Myval2._Myfirst->dialogChartData;
    x = 0.0;
    v10 = p_dialogChartData[5]._Mypair._Myval2._Myfirst;
    if ( !(p_dialogChartData[5]._Mypair._Myval2._Mylast - v10) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (((char *)v10->keyData._Mypair._Myval2._Mylast - (char *)v10->keyData._Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFC0ui64) != 0 )
    {
      v11 = p_dialogChartData[5]._Mypair._Myval2._Myfirst;
      if ( !(p_dialogChartData[5]._Mypair._Myval2._Mylast - v10) )
        std::_Xout_of_range("invalid vector<T> subscript");
      v12 = (char *)p_dialogChartData[5]._Mypair._Myval2._Mylast - (char *)v10;
      v13 = v10->keyData._Mypair._Myval2._Mylast - v10->keyData._Mypair._Myval2._Myfirst;
      if ( !(v12 / 56) )
        std::_Xout_of_range("invalid vector<T> subscript");
      v14 = v11->keyData._Mypair._Myval2._Myfirst;
      v15 = (int)v13 - 1;
      if ( v11->keyData._Mypair._Myval2._Mylast - v14 <= v15 )
        std::_Xout_of_range("invalid vector<T> subscript");
      x = v14[v15].Pos.x;
    }
    v16 = p_dialogChartData[5]._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(p_dialogChartData[5]._Mypair._Myval2._Mylast - v16) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (((char *)v16[1].keyData._Mypair._Myval2._Mylast - (char *)v16[1].keyData._Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFC0ui64) != 0 )
    {
      v17 = p_dialogChartData[5]._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(p_dialogChartData[5]._Mypair._Myval2._Mylast - v16) <= 1 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v18 = (char *)p_dialogChartData[5]._Mypair._Myval2._Mylast - (char *)v16;
      v19 = v16[1].keyData._Mypair._Myval2._Mylast - v16[1].keyData._Mypair._Myval2._Myfirst - 1;
      if ( (unsigned __int64)(v18 / 56) <= 1 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v20 = v17[1].keyData._Mypair._Myval2._Myfirst;
      v21 = v19;
      if ( v17[1].keyData._Mypair._Myval2._Mylast - v20 <= (unsigned __int64)v19 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( v20[(__int64)v19].Pos.x > x )
      {
        v22 = std::vector<ChartData>::at(p_dialogChartData + 5, 1ui64);
        v23 = v22->keyData._Mypair._Myval2._Myfirst;
        if ( v22->keyData._Mypair._Myval2._Mylast - v23 <= v21 )
          std::_Xout_of_range("invalid vector<T> subscript");
        x = v23[v21].Pos.x;
      }
    }
    v24 = this->pSettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
    v25 = v24[5].dialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v24[5].dialogChartData._Mypair._Myval2._Mylast - v25) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (((char *)v25[2].keyData._Mypair._Myval2._Mylast - (char *)v25[2].keyData._Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFC0ui64) != 0 )
    {
      v26 = v24[5].dialogChartData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v24[5].dialogChartData._Mypair._Myval2._Mylast - v25) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v27 = (char *)v24[5].dialogChartData._Mypair._Myval2._Mylast - (char *)v25;
      v28 = v25[2].keyData._Mypair._Myval2._Mylast - v25[2].keyData._Mypair._Myval2._Myfirst - 1;
      if ( (unsigned __int64)(v27 / 56) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v29 = v26[2].keyData._Mypair._Myval2._Myfirst;
      v30 = v28;
      if ( v26[2].keyData._Mypair._Myval2._Mylast - v29 <= (unsigned __int64)v28 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( v29[(__int64)v28].Pos.x > x )
      {
        v31 = std::vector<ChartData>::at(&v24[5].dialogChartData, 2ui64);
        v32 = v31->keyData._Mypair._Myval2._Myfirst;
        if ( v31->keyData._Mypair._Myval2._Mylast - v32 <= v30 )
          std::_Xout_of_range("invalid vector<T> subscript");
        x = v32[v30].Pos.x;
      }
    }
    v33 = this->pSettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
    v34 = v33[5].dialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v33[5].dialogChartData._Mypair._Myval2._Mylast - v34) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (((char *)v34[3].keyData._Mypair._Myval2._Mylast - (char *)v34[3].keyData._Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFC0ui64) != 0 )
    {
      v35 = v33[5].dialogChartData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v33[5].dialogChartData._Mypair._Myval2._Mylast - v34) <= 3 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v36 = (char *)v33[5].dialogChartData._Mypair._Myval2._Mylast - (char *)v34;
      v37 = v34[3].keyData._Mypair._Myval2._Mylast - v34[3].keyData._Mypair._Myval2._Myfirst - 1;
      if ( (unsigned __int64)(v36 / 56) <= 3 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v38 = v35[3].keyData._Mypair._Myval2._Myfirst;
      v39 = v37;
      if ( v35[3].keyData._Mypair._Myval2._Mylast - v38 <= (unsigned __int64)v37 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( v38[(__int64)v37].Pos.x > x )
      {
        v40 = std::vector<ChartData>::at(&v33[5].dialogChartData, 3ui64);
        v41 = v40->keyData._Mypair._Myval2._Myfirst;
        if ( v40->keyData._Mypair._Myval2._Mylast - v41 <= v39 )
          std::_Xout_of_range("invalid vector<T> subscript");
        x = v41[v39].Pos.x;
      }
    }
    v42 = this->pSettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
    v43 = v42[5].dialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v42[5].dialogChartData._Mypair._Myval2._Mylast - v43) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (unsigned __int64)(v42[5].dialogChartData._Mypair._Myval2._Mylast - v43) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v44 = v43 + 2;
    if ( (unsigned __int64)(v42[5].dialogChartData._Mypair._Myval2._Mylast - v43) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v45 = v43 + 1;
    v46 = v42[5].dialogChartData._Mypair._Myval2._Myfirst;
    if ( !(v42[5].dialogChartData._Mypair._Myval2._Mylast - v43) )
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
  v51 = this->pSettingData;
  v52 = v51->AllDialogData._Mypair._Myval2._Myfirst;
  v53 = v52[2].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v52[2].allButtonIndexData._Mypair._Myval2._Mylast - v53) <= 0xA )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v53[10] )
  {
    v54 = v51->AllDialogChartData._Mypair._Myval2._Myfirst;
    v55 = v54[2].dialogChartData._Mypair._Myval2._Myfirst;
    if ( !(v54[2].dialogChartData._Mypair._Myval2._Mylast - v55) )
      std::_Xout_of_range("invalid vector<T> subscript");
    pParticleData->distortionRatio = D3DMath::GetChartDataY(pParticleData->age, v55);
  }
}

void __fastcall ParticleEmitterState::updateParticlePos(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  EffectData *pSettingData; // rdx
  DialogData *Myfirst; // rcx
  char v8; // bp
  Emitter *pParticleEmitter; // rcx
  float *v10; // rdi
  DialogData *v11; // r8
  EmitterFormStateCurve *m_pEmitterFormState; // r9
  OGLVec3 *v13; // r8
  OGLVec3 *v14; // rax
  float y; // xmm1_4
  float z; // xmm2_4
  DialogData *v17; // rcx
  OGLVec3 *v18; // rcx
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  OGLMatrix *v22; // rcx
  OGLMatrix *v23; // rdx
  Emitter *v24; // rax
  bool v25; // zf
  float *v26; // rax
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm5_4
  float v30; // xmm7_4
  float v31; // xmm6_4
  OGLVec3 *v32; // rax
  float x; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  Emitter *v36; // rax
  float resistance; // xmm0_4
  float *p_x; // rcx
  float v39; // xmm1_4
  float v40; // xmm2_4
  OGLVec3 *v41; // rcx
  OGLEffectVec3 *v42; // rax
  float v43; // xmm1_4
  float v44; // xmm2_4
  OGLEffectVec3 result; // [rsp+60h] [rbp-C8h] BYREF
  OGLEffectMatrix v46; // [rsp+80h] [rbp-A8h] BYREF

  pSettingData = this->pSettingData;
  Myfirst = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[1].allButtonIndexData._Mypair._Myval2._Mylast
                        - Myfirst[1].allButtonIndexData._Mypair._Myval2._Myfirst) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( Myfirst[1].allButtonIndexData._Mypair._Myval2._Myfirst[4] )
    goto LABEL_11;
  if ( (unsigned __int64)(Myfirst[1].allButtonIndexData._Mypair._Myval2._Mylast
                        - Myfirst[1].allButtonIndexData._Mypair._Myval2._Myfirst) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( Myfirst[1].allButtonIndexData._Mypair._Myval2._Myfirst[5] )
    goto LABEL_11;
  if ( (unsigned __int64)(Myfirst[1].allButtonIndexData._Mypair._Myval2._Mylast
                        - Myfirst[1].allButtonIndexData._Mypair._Myval2._Myfirst) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( Myfirst[1].allButtonIndexData._Mypair._Myval2._Myfirst[3] )
LABEL_11:
    v8 = 1;
  else
    v8 = 0;
  pParticleEmitter = this->pParticleEmitter;
  v10 = 0i64;
  if ( pParticleEmitter->m_EmitterFormType == 4 )
  {
    v11 = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v11->allButtonIndexData._Mypair._Myval2._Mylast
                          - v11->allButtonIndexData._Mypair._Myval2._Myfirst) <= 8 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( v11->allButtonIndexData._Mypair._Myval2._Myfirst[8] )
    {
      m_pEmitterFormState = (EmitterFormStateCurve *)pParticleEmitter->m_pEmitterFormState;
      m_pEmitterFormState->m_age = pParticleEmitter->age;
      v13 = &pParticleEmitter->WorldScale.OGLVec3;
      if ( pParticleEmitter == (Emitter *)-3168i64 )
        v13 = 0i64;
      v14 = EmitterFormStateCurve::calcParticlePos(
              m_pEmitterFormState,
              (OGLVec3 *)&result,
              v13,
              (OGLVec3 *)m_pEmitterFormState,
              &pParticleData->defaultCurveKnot,
              &pParticleData->currentCurveKnot,
              pParticleData->curveRatioToFollow);
      y = v14->y;
      z = v14->z;
      pParticleData->LocalPos.x = v14->x + pParticleData->LocalPos.x;
      pParticleData->LocalPos.y = y + pParticleData->LocalPos.y;
      pParticleData->LocalPos.z = z + pParticleData->LocalPos.z;
    }
  }
  if ( v8 )
  {
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->calcParticleVel)(this, pParticleData);
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->calcParticleAcc)(this, pParticleData);
  }
  else
  {
    v17 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v17[1].allButtonIndexData._Mypair._Myval2._Mylast
                          - v17[1].allButtonIndexData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( v17[1].allButtonIndexData._Mypair._Myval2._Myfirst[2] )
    {
      v32 = &pParticleData->LocalVel.OGLVec3;
      if ( pParticleData == (ParticleData *)-712i64 )
        v32 = 0i64;
      x = v32->x;
      v34 = v32->y;
      v35 = v32->z;
      v36 = this->pParticleEmitter;
      resistance = v36->resistance;
      pParticleData->LocalVel.x = pParticleData->LocalVel.x - (float)((float)(x * resistance) * frame);
      pParticleData->LocalVel.y = pParticleData->LocalVel.y - (float)((float)(v34 * resistance) * frame);
      pParticleData->LocalVel.z = pParticleData->LocalVel.z - (float)((float)(v35 * resistance) * frame);
      p_x = &v36->Gravity.x;
      if ( v36 == (Emitter *)-3528i64 )
        p_x = 0i64;
      v39 = p_x[1];
      v40 = p_x[2];
      pParticleData->LocalVel.x = (float)(*p_x * frame) + pParticleData->LocalVel.x;
      pParticleData->LocalVel.y = (float)(v39 * frame) + pParticleData->LocalVel.y;
      pParticleData->LocalVel.z = (float)(v40 * frame) + pParticleData->LocalVel.z;
    }
    else
    {
      v18 = &pParticleData->LocalVel.OGLVec3;
      if ( pParticleData == (ParticleData *)-712i64 )
        v18 = 0i64;
      v19 = this->pParticleEmitter->resistance;
      v20 = (float)(v18->y * v19) * frame;
      v21 = (float)(v18->z * v19) * frame;
      pParticleData->LocalVel.x = pParticleData->LocalVel.x - (float)((float)(v18->x * v19) * frame);
      pParticleData->LocalVel.y = pParticleData->LocalVel.y - v20;
      pParticleData->LocalVel.z = pParticleData->LocalVel.z - v21;
      v22 = &pParticleData->ReferenceMat.OGLMatrix;
      if ( pParticleData == (ParticleData *)-328i64 )
        v22 = 0i64;
      v46.OGLMatrix = *v22;
      v46.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
      v23 = &pParticleData->ActMat.OGLMatrix;
      if ( pParticleData == (ParticleData *)-472i64 )
        v23 = 0i64;
      OGLMatrix::multiply(&v46.OGLMatrix, v23);
      OGLEffectMatrix::inverse(&v46);
      v24 = this->pParticleEmitter;
      v25 = &v24->Gravity == 0i64;
      v26 = &v24->Gravity.x;
      if ( v25 )
        v26 = 0i64;
      v27 = *v26 * frame;
      v28 = v26[1] * frame;
      v29 = v26[2] * frame;
      v30 = (float)((float)(v46.m[5] * v28) + (float)(v46.m[1] * v27)) + (float)(v46.m[9] * v29);
      v31 = (float)((float)(v46.m[6] * v28) + (float)(v46.m[2] * v27)) + (float)(v46.m[10] * v29);
      pParticleData->LocalVel.x = (float)((float)((float)(v46.m[4] * v28) + (float)(v46.m[0] * v27))
                                        + (float)(v46.m[8] * v29))
                                + pParticleData->LocalVel.x;
      pParticleData->LocalVel.y = v30 + pParticleData->LocalVel.y;
      pParticleData->LocalVel.z = v31 + pParticleData->LocalVel.z;
    }
  }
  v41 = &pParticleData->LocalPos.OGLVec3;
  if ( pParticleData == (ParticleData *)-664i64 )
    v41 = 0i64;
  *(_QWORD *)&pParticleData->PreLocalPos.x = *(_QWORD *)&v41->x;
  pParticleData->PreLocalPos.z = v41->z;
  v42 = OGLEffectVec3::operator*(&pParticleData->LocalVel, &result, frame);
  if ( v42 )
    v10 = &v42->x;
  v43 = v10[1];
  v44 = v10[2];
  pParticleData->LocalPos.x = *v10 + pParticleData->LocalPos.x;
  pParticleData->LocalPos.y = v43 + pParticleData->LocalPos.y;
  pParticleData->LocalPos.z = v44 + pParticleData->LocalPos.z;
}

void __fastcall ParticleEmitterState::updateParticleRot(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  DialogData *Myfirst; // r8
  int *v5; // rdx
  OGLQuat *v6; // r8
  OGLQuat *v7; // rdx
  OGLQuat v8; // [rsp+40h] [rbp-58h] BYREF
  void **v9; // [rsp+58h] [rbp-40h]
  OGLQuat q1; // [rsp+60h] [rbp-38h] BYREF

  v9 = &OGLEffectQuat::`vftable';
  q1 = (OGLQuat)_xmm;
  Myfirst = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v5 = Myfirst[7].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[7].allButtonIndexData._Mypair._Myval2._Mylast - v5) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *v5 )
    ((void (__fastcall *)(ParticleEmitterState *, ParticleData *))this->calcParticleRotVel)(this, pParticleData);
  v8 = (OGLQuat)_xmm;
  v6 = &pParticleData->LocalRotVel.OGLQuat;
  if ( pParticleData == (ParticleData *)-760i64 )
    v6 = 0i64;
  OGLQuat::slerp(&v8, &q1, v6, frame, 1.0);
  v7 = &pParticleData->LocalRot.OGLQuat;
  if ( pParticleData == (ParticleData *)-736i64 )
    v7 = 0i64;
  OGLQuat::multiply(&v8, v7);
  pParticleData->LocalRot.OGLQuat = v8;
  OGLQuat::normalize(&pParticleData->LocalRot.OGLQuat);
}

void __fastcall ParticleEmitterState::updateParticleScale(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  OGLVec3 *v3; // rsi
  EffectData *pSettingData; // rbx
  DialogData *Myfirst; // rcx
  DialogChartData *v7; // rbx
  ChartData *v8; // r8
  ChartData *v9; // rbp
  float ChartDataY; // xmm6_4
  __m128 age_low; // xmm0
  __m128 v12; // xmm7
  __m128 v13; // xmm0
  float z; // eax
  OGLVec3 *v15; // rcx
  float v16; // xmm1_4
  float v17; // xmm9_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm2_4

  v3 = &pParticleData->LocalScaleVel.OGLVec3;
  *(_QWORD *)&pParticleData->LocalScaleVel.x = _mm_unpacklo_ps((__m128)0i64, (__m128)0i64).m128_u64[0];
  pParticleData->LocalScaleVel.z = 0.0;
  pSettingData = this->pSettingData;
  Myfirst = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[6].allButtonIndexData._Mypair._Myval2._Mylast - Myfirst[6].allButtonIndexData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *Myfirst[6].allButtonIndexData._Mypair._Myval2._Myfirst )
  {
    v7 = pSettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v7[6].dialogChartData._Mypair._Myval2._Mylast
                          - v7[6].dialogChartData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v8 = v7[6].dialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v7[6].dialogChartData._Mypair._Myval2._Mylast - v8) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v9 = v7[6].dialogChartData._Mypair._Myval2._Myfirst;
    if ( !(v7[6].dialogChartData._Mypair._Myval2._Mylast - v8) )
      std::_Xout_of_range("invalid vector<T> subscript");
    ChartDataY = D3DMath::GetChartDataY(pParticleData->age, v8 + 2);
    age_low = (__m128)LODWORD(pParticleData->age);
    age_low.m128_f32[0] = D3DMath::GetChartDataY(age_low.m128_f32[0], v9 + 1);
    v12 = age_low;
    v13 = (__m128)LODWORD(pParticleData->age);
    v13.m128_f32[0] = D3DMath::GetChartDataY(v13.m128_f32[0], v9);
    z = ChartDataY;
    *(_QWORD *)&v3->x = _mm_unpacklo_ps(v13, v12).m128_u64[0];
  }
  else
  {
    v15 = &pParticleData->DefaultScaleVel.OGLVec3;
    if ( pParticleData == (ParticleData *)-1120i64 )
      v15 = 0i64;
    *(_QWORD *)&v3->x = *(_QWORD *)&v15->x;
    z = v15->z;
  }
  v3->z = z;
  v16 = frame * pParticleData->LocalScaleVel.y;
  if ( pParticleData == (ParticleData *)-808i64 )
    v3 = 0i64;
  v17 = frame * pParticleData->LocalScaleVel.z;
  pParticleData->LocalScaleVel.x = frame * pParticleData->LocalScaleVel.x;
  pParticleData->LocalScaleVel.y = v16;
  pParticleData->LocalScaleVel.z = v17;
  v18 = v3->x + pParticleData->LocalScale.x;
  v19 = v3->y + pParticleData->LocalScale.y;
  v20 = v3->z + pParticleData->LocalScale.z;
  pParticleData->LocalScale.x = v18;
  pParticleData->LocalScale.y = v19;
  pParticleData->LocalScale.z = v20;
  if ( v18 < 0.0 )
    pParticleData->LocalScale.x = 0.0;
  if ( v19 < 0.0 )
    pParticleData->LocalScale.y = 0.0;
  if ( v20 < 0.0 )
    pParticleData->LocalScale.z = 0.0;
}

void __fastcall ParticleEmitterState::updateWorldData(
        ParticleEmitterState *this,
        ParticleData *pParticleData,
        float frame)
{
  OGLMatrix *v3; // r8
  OGLEffectMatrix *p_LocalMat; // rax
  OGLMatrix *v6; // rdx
  __int64 v7; // r9
  _OWORD *v8; // r10
  _OWORD *v9; // rax
  OGLMatrix *v10; // rdx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // r9
  _DWORD *v15; // r10
  _DWORD *v16; // rcx
  float v17; // xmm1_4
  OGLMatrix v18; // [rsp+28h] [rbp-60h] BYREF

  v3 = &pParticleData->ReferenceMat.OGLMatrix;
  p_LocalMat = &pParticleData->LocalMat;
  if ( pParticleData == (ParticleData *)-328i64 )
    v3 = 0i64;
  v6 = &pParticleData->LocalMat.OGLMatrix;
  if ( !p_LocalMat )
    v6 = 0i64;
  OGLMatrix::multiply(&pParticleData->GlobalMat.OGLMatrix, v6, v3);
  v9 = (_OWORD *)(v7 + 120);
  v10 = (OGLMatrix *)(v7 + 480);
  if ( v7 == -112 )
    v9 = v8;
  v11 = v9[1];
  *(_OWORD *)v18.m = *v9;
  v12 = v9[2];
  *(_OWORD *)&v18.m[4] = v11;
  v13 = v9[3];
  *(_OWORD *)&v18.m[8] = v12;
  if ( v7 == -472 )
    v10 = (OGLMatrix *)v8;
  *(_OWORD *)&v18.m[12] = v13;
  OGLMatrix::multiply(&v18, v10);
  if ( frame != 0.0 )
  {
    v16 = (_DWORD *)(v14 + 624);
    if ( v14 == -616 )
      v16 = v15;
    *(_DWORD *)(v14 + 648) = *v16;
    *(_DWORD *)(v14 + 652) = v16[1];
    *(_DWORD *)(v14 + 656) = v16[2];
  }
  v17 = v18.m[13];
  *(float *)(v14 + 624) = v18.m[12];
  *(float *)(v14 + 632) = v18.m[14];
  *(float *)(v14 + 628) = v17;
}

