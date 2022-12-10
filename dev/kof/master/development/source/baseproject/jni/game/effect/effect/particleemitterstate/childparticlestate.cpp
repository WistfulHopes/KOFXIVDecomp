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
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitterstate/particleemitterstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstatecurve.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitterstate/particleemitterstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/d3dmath.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/randomnumbers.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E38C
void ChildParticleState::generateEmitter(); // 0x14013E230
void ChildParticleState::generateParticle(EffectUpdateArgument * pUpdateArg); // 0x14013E360
bool ChildParticleState::checkGenerateRequirement(float frame, float * emitTime, float age, long parentNum); // 0x14013E9B0
ParticleData * ChildParticleState::initGenerateParticle(bool mirrorFlag, float frame, long parentNum); // 0x14013EC30
void ChildParticleState::generateParticlePos(ParticleData * pParticleData, float frame); // 0x14013F3F0
void ChildParticleState::generateParticleCol(ParticleData * pParticleData, float frame); // 0x14013F400
void ChildParticleState::generateParticleRot(ParticleData * pParticleData, float frame); // 0x14013F410
void ChildParticleState::generateParticleScale(ParticleData * pParticleData, float frame); // 0x14013F420
void ChildParticleState::generateParticlePosChild(ParticleData * pParticleData, ParticleData * parentParticleData, float __formal); // 0x14013F430
void ChildParticleState::updateParticleScale(ParticleData * pParticleData, float frame); // 0x14013F540
void ChildParticleState::calcReferenceMatrix(ParticleData * pParticleData, float frame); // 0x14013F6A0
void ChildParticleState::calcActionMatrix(ParticleData * pParticleData, float frame); // 0x14013FAF0
void ChildParticleState::updateWorldData(ParticleData * pParticleData, float frame); // 0x14013FBA0//decompilation failure at 14089E38C!
void __fastcall std::vector<ParticleDataForChild>::_Reallocate(
        std::vector<ParticleDataForChild> *this,
        unsigned __int64 _Count)
{
  ParticleDataForChild *v4; // rdi
  signed __int64 v5; // rsi

  v4 = std::_Wrap_alloc<std::allocator<ParticleDataForChild>>::allocate(
         (std::_Wrap_alloc<std::allocator<ParticleDataForChild> > *)this,
         _Count);
  memmove(
    v4,
    this->_Mypair._Myval2._Myfirst,
    (char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst);
  v5 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<ParticleDataForChild>>::deallocate(
      (std::allocator<AgDisplayMode> *)((char *)this->_Mypair._Myval2._Myend - (char *)this->_Mypair._Myval2._Myfirst),
      (AgDisplayMode *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = &v4[v5];
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

void __fastcall std::vector<ParticleDataForChild>::_Reserve(
        std::vector<ParticleDataForChild> *this,
        unsigned __int64 _Count)
{
  ParticleDataForChild *Myend; // rcx
  ParticleDataForChild *Mylast; // r8
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
    if ( v5 == 0x1555555555555555i64 )
      std::_Xlength_error("vector<T> too long");
    v6 = v5 + 1;
    v7 = (unsigned __int128)(((char *)Myend - (char *)this->_Mypair._Myval2._Myfirst) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
    v8 = 0i64;
    v9 = ((unsigned __int64)v7 >> 63) + (v7 >> 1);
    if ( 0x1555555555555555i64 - (v9 >> 1) >= v9 )
      v8 = v9 + (v9 >> 1);
    if ( v8 >= v6 )
      v6 = v8;
    std::vector<ParticleDataForChild>::_Reallocate(this, v6);
  }
}

void __fastcall ChildParticleState::calcActionMatrix(
        ChildParticleState *this,
        ParticleData *pParticleData,
        float frame)
{
  Emitter *parent; // rdi
  int v5; // eax
  float offsetBlendRatio; // xmm3_4
  ParticleData **Myfirst; // rdx
  OGLMatrix *v8; // r8
  ParticleData *v9; // rdx
  bool v10; // zf
  const OGLMatrix *v11; // rdx

  parent = (Emitter *)this->pParticleEmitter->parent;
  v5 = Emitter::searchParentNum(parent, pParticleData->parentID);
  if ( v5 != -1 )
  {
    offsetBlendRatio = pParticleData->RatioToFollow;
    if ( offsetBlendRatio != 0.0 )
    {
      Myfirst = parent->m_ParticleData._Mypair._Myval2._Myfirst;
      v8 = &pParticleData->DefaultActMat.OGLMatrix;
      if ( pParticleData == (ParticleData *)-400i64 )
        v8 = 0i64;
      if ( parent->m_ParticleData._Mypair._Myval2._Mylast - Myfirst <= (unsigned __int64)v5 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v9 = Myfirst[v5];
      v10 = &v9->ActMat == 0i64;
      v11 = &v9->ActMat.OGLMatrix;
      if ( v10 )
        v11 = 0i64;
      OGLEffectMatrix::BlendMatrix(&pParticleData->ActMat, v11, v8, offsetBlendRatio, offsetBlendRatio);
    }
  }
}

void __fastcall ChildParticleState::calcReferenceMatrix(
        ChildParticleState *this,
        ParticleData *pParticleData,
        float frame)
{
  Emitter *parent; // rdi
  int v6; // eax
  ParticleData **Myfirst; // rdx
  ParticleData *v8; // rcx
  bool v9; // zf
  __m128 *v10; // rcx
  __m128 v11; // xmm7
  __m128 v12; // xmm12
  __m128 v13; // xmm13
  __m128 v14; // xmm6
  float RatioToFollow; // xmm8_4
  OGLMatrix *v16; // rax
  float v17; // xmm2_4
  __m128 v18; // xmm3
  float v19; // xmm10_4
  float v20; // xmm2_4
  float v21; // xmm11_4
  float v22; // xmm3_4
  float v23; // xmm9_4
  EffectData *pSettingData; // rcx
  DialogData *v25; // r8
  int *v26; // rcx
  OGLMatrix *v27; // rax
  float v28; // xmm4_4
  float v29; // xmm5_4
  float v30; // xmm6_4
  float v31; // xmm7_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  OGLEffectMatrix v34; // [rsp+38h] [rbp-D0h] BYREF
  void **v35; // [rsp+88h] [rbp-80h]
  OGLMatrix In1; // [rsp+90h] [rbp-78h] BYREF
  void **v37; // [rsp+D8h] [rbp-30h]
  OGLMatrix In2; // [rsp+E0h] [rbp-28h] BYREF

  parent = (Emitter *)this->pParticleEmitter->parent;
  v6 = Emitter::searchParentNum(parent, pParticleData->parentID);
  if ( v6 != -1 )
  {
    memset(&v34.OGLMatrix, 0, sizeof(v34.OGLMatrix));
    v34.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
    memset(&In2, 0, sizeof(In2));
    v37 = &OGLEffectMatrix::`vftable';
    Myfirst = parent->m_ParticleData._Mypair._Myval2._Myfirst;
    if ( parent->m_ParticleData._Mypair._Myval2._Mylast - Myfirst <= (unsigned __int64)v6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v8 = Myfirst[v6];
    v9 = &v8->GlobalMat == 0i64;
    v10 = (__m128 *)&v8->GlobalMat.OGLMatrix;
    if ( v9 )
      v10 = 0i64;
    v11 = *v10;
    *(__m128 *)In2.m = *v10;
    v12 = v10[1];
    *(__m128 *)&In2.m[4] = v12;
    v13 = v10[2];
    *(__m128 *)&In2.m[8] = v13;
    v14 = v10[3];
    *(__m128 *)&In2.m[12] = v14;
    RatioToFollow = pParticleData->RatioToFollow;
    v35 = &OGLEffectMatrix::`vftable';
    v16 = &pParticleData->DefaultReferenceMat.OGLMatrix;
    if ( pParticleData == (ParticleData *)-256i64 )
      v16 = 0i64;
    In1 = *v16;
    v17 = In1.m[4];
    v18 = *(__m128 *)&In1.m[8];
    LODWORD(In1.m[4]) = _mm_shuffle_ps(*(__m128 *)In1.m, *(__m128 *)In1.m, 85).m128_u32[0];
    LODWORD(In1.m[8]) = _mm_shuffle_ps(*(__m128 *)In1.m, *(__m128 *)In1.m, 170).m128_u32[0];
    In1.m[1] = v17;
    In1.m[9] = In1.m[6];
    LODWORD(In1.m[2]) = v18.m128_i32[0];
    LODWORD(In1.m[6]) = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
    OGLMatrix::multiply(&v34.OGLMatrix, &In1, &In2);
    OGLEffectMatrix::BlendMatrixIdentity(&v34, RatioToFollow, RatioToFollow);
    v19 = (float)((float)(1.0 - RatioToFollow) * pParticleData->DefaultReferenceMat.m[12])
        + (float)(v14.m128_f32[0] * RatioToFollow);
    v34.m[12] = v19;
    v20 = _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
    v21 = (float)((float)(1.0 - RatioToFollow) * pParticleData->DefaultReferenceMat.m[13])
        + (float)(v20 * RatioToFollow);
    v34.m[13] = v21;
    v22 = _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
    v23 = (float)((float)(1.0 - RatioToFollow) * pParticleData->DefaultReferenceMat.m[14])
        + (float)(v22 * RatioToFollow);
    v34.m[14] = v23;
    pSettingData = this->pSettingData;
    v25 = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(pSettingData->AllDialogData._Mypair._Myval2._Mylast - v25) <= 8 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v26 = v25[8].allButtonIndexData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v25[8].allButtonIndexData._Mypair._Myval2._Mylast - v26) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( v26[1] )
    {
      *(__m128 *)pParticleData->ReferenceMat.m = v11;
      *(__m128 *)&pParticleData->ReferenceMat.m[4] = v12;
      *(__m128 *)&pParticleData->ReferenceMat.m[8] = v13;
      *(__m128 *)&pParticleData->ReferenceMat.m[12] = v14;
    }
    else
    {
      v27 = &pParticleData->DefaultReferenceMat.OGLMatrix;
      if ( pParticleData == (ParticleData *)-256i64 )
        v27 = 0i64;
      *(_OWORD *)pParticleData->ReferenceMat.m = *(_OWORD *)v27->m;
      *(_OWORD *)&pParticleData->ReferenceMat.m[4] = *(_OWORD *)&v27->m[4];
      *(_OWORD *)&pParticleData->ReferenceMat.m[8] = *(_OWORD *)&v27->m[8];
      *(_OWORD *)&pParticleData->ReferenceMat.m[12] = *(_OWORD *)&v27->m[12];
    }
    v28 = v19 - v14.m128_f32[0];
    v29 = v21 - v20;
    v30 = v23 - v22;
    v31 = (float)((float)(v34.m[4] * (float)(v21 - v20)) + (float)(v34.m[0] * v28))
        + (float)(v34.m[8] * (float)(v23 - v22));
    v32 = (float)((float)(v34.m[5] * (float)(v21 - v20)) + (float)(v34.m[1] * v28))
        + (float)(v34.m[9] * (float)(v23 - v22));
    v33 = (float)((float)((float)(v34.m[6] * (float)(v21 - v20)) + (float)(v34.m[2] * v28)) + (float)(v34.m[10] * v30))
        - v30;
    pParticleData->ReferenceMat.m[12] = (float)((float)(RatioToFollow * pParticleData->DefaultEmitterMat.m[12])
                                              + (float)(v31 - v28))
                                      + v19;
    pParticleData->ReferenceMat.m[13] = (float)((float)(RatioToFollow * pParticleData->DefaultEmitterMat.m[13])
                                              + (float)(v32 - v29))
                                      + v21;
    pParticleData->ReferenceMat.m[14] = (float)((float)(RatioToFollow * pParticleData->DefaultEmitterMat.m[14]) + v33)
                                      + v23;
  }
}

__int64 __fastcall ChildParticleState::checkGenerateRequirement(
        ChildParticleState *this,
        float frame,
        float *emitTime,
        float age,
        int parentNum)
{
  Emitter *pParticleEmitter; // r11
  Effect *parent; // rax
  Effect_vtbl *v8; // r10
  DialogData *Myfirst; // rcx
  float *v10; // rdx
  float v11; // xmm0_4
  float *v12; // rdx
  float v13; // xmm2_4
  float *v14; // r8
  bool v15; // di
  unsigned __int8 v16; // bl
  float v17; // xmm2_4
  float *v18; // r9
  int *v19; // r9
  float *v20; // r9

  pParticleEmitter = this->pParticleEmitter;
  parent = pParticleEmitter->parent;
  v8 = parent[1].__vftable;
  if ( (__int64)(*(_QWORD *)&parent[1].m_BlendProjData.blendProjectionFlag - (_QWORD)v8) >> 3 <= (unsigned __int64)parentNum )
    std::_Xout_of_range("invalid vector<T> subscript");
  Myfirst = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v10 = Myfirst[8].allEditNumData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[8].allEditNumData._Mypair._Myval2._Mylast - v10) )
    std::_Xout_of_range("invalid vector<T> subscript");
  v11 = (float)*(int *)(*((_QWORD *)&v8->~Effect + parentNum) + 24i64) * *v10;
  v12 = Myfirst[1].allEditNumData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v12) )
    std::_Xout_of_range("invalid vector<T> subscript");
  v13 = (float)(int)(float)(v11 / 100.0);
  v14 = Myfirst[1].allEditNumData._Mypair._Myval2._Myfirst;
  v15 = (float)((float)(age - v13) - *v12) > 0.0;
  if ( !(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v12) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( (unsigned __int64)(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v12) <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v16 = 1;
  v17 = (float)(v13 + *v12) + v12[1];
  LOBYTE(v12) = v17 >= age;
  LOBYTE(v14) = 0;
  if ( v17 < age )
  {
    v18 = Myfirst[1].allEditNumData._Mypair._Myval2._Myfirst;
    if ( !(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v18) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (unsigned __int64)(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v18) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v14 = (float *)((float)(*v18 + v18[1]) >= (float)(age - frame));
  }
  v19 = Myfirst[1].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[1].allButtonIndexData._Mypair._Myval2._Mylast - v19) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *v19 )
  {
    v12 = (float *)1;
  }
  else if ( v17 < age && (_BYTE)v14 == 1 )
  {
    v20 = Myfirst[1].allEditNumData._Mypair._Myval2._Myfirst;
    if ( !(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v20) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (unsigned __int64)(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v20) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    *emitTime = (float)(v20[1] + *v20) - (float)(age - frame);
  }
  if ( !v15
    || !(_BYTE)v12 && !(_BYTE)v14
    || !((unsigned __int8 (__fastcall *)(Emitter *, float *, float *))pParticleEmitter->getEmitFlag)(
          pParticleEmitter,
          v12,
          v14) )
  {
    return 0;
  }
  return v16;
}

void __fastcall ChildParticleState::generateEmitter(ChildParticleState *this)
{
  EffectData *pSettingData; // rcx
  DialogData *Myfirst; // rax
  float *v4; // r9
  Emitter *pParticleEmitter; // r8
  DialogData *v6; // r9
  int *v7; // rcx
  Effect *parent; // rdx
  float *v9; // rcx

  pSettingData = this->pSettingData;
  Myfirst = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v4 = Myfirst[1].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v4) <= 0xF )
    std::_Xout_of_range("invalid vector<T> subscript");
  pParticleEmitter = this->pParticleEmitter;
  pParticleEmitter->resistance = v4[15];
  v6 = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(pSettingData->AllDialogData._Mypair._Myval2._Mylast - v6) <= 8 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v7 = v6[8].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v6[8].allButtonIndexData._Mypair._Myval2._Mylast - v7) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v7[2] )
  {
    parent = pParticleEmitter->parent;
    v9 = (float *)&parent[1].m_RandomNumbers.mt[32];
    if ( parent == (Effect *)-3528i64 )
      v9 = 0i64;
    pParticleEmitter->Gravity.x = pParticleEmitter->Gravity.x + *v9;
    pParticleEmitter->Gravity.y = v9[1] + pParticleEmitter->Gravity.y;
    pParticleEmitter->Gravity.z = v9[2] + pParticleEmitter->Gravity.z;
    LODWORD(pParticleEmitter->resistance) = parent[1].m_RandomNumbers.mt[36];
  }
}

void __fastcall ChildParticleState::generateParticle(ChildParticleState *this, EffectUpdateArgument *pUpdateArg)
{
  unsigned int v2; // er12
  Effect *parent; // r13
  Effect_vtbl *v6; // rdx
  __int64 v7; // r15
  unsigned __int64 m_ChildNum; // r8
  __int64 v9; // r9
  float v10; // xmm6_4
  unsigned __int64 v11; // rdx
  float v12; // xmm7_4
  ChildParticleState_vtbl *v13; // rax
  __int64 v14; // r10
  unsigned __int64 pParticleEmitter; // r8
  unsigned __int64 v16; // r9
  float v17; // xmm7_4
  float v18; // xmm0_4
  bool v19; // bp
  DialogData *Myfirst; // rcx
  float *v21; // rbx
  float v22; // xmm8_4
  float v23; // xmm0_4
  __int64 v24; // r9
  float v25; // xmm6_4
  unsigned __int64 v26; // rdi
  unsigned __int64 p_Count; // rdx
  std::vector<ParticleData *> *pParticleDataVec; // rbx
  ParticleData **Mylast; // rax
  __int64 v30; // rdi
  ParticleData **v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // r9
  unsigned __int64 v34; // r8
  float frame; // [rsp+110h] [rbp+8h] BYREF
  unsigned __int64 _Count; // [rsp+120h] [rbp+18h] BYREF

  v2 = 0;
  parent = this->pParticleEmitter->parent;
  if ( (unsigned int)((__int64)(*(_QWORD *)&parent[1].m_BlendProjData.blendProjectionFlag
                              - (unsigned __int64)parent[1].__vftable) >> 3) )
  {
    do
    {
      v6 = parent[1].__vftable;
      if ( (__int64)(*(_QWORD *)&parent[1].m_BlendProjData.blendProjectionFlag - (_QWORD)v6) >> 3 <= (unsigned __int64)(int)v2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v7 = *((_QWORD *)&v6->~Effect + (int)v2);
      m_ChildNum = this->pParticleEmitter->m_ChildNum;
      if ( (*(_QWORD *)(v7 + 1600) - *(_QWORD *)(v7 + 1592)) / 12i64 >= m_ChildNum )
      {
        v9 = *(_QWORD *)(v7 + 1592);
        if ( (*(_QWORD *)(v7 + 1600) - v9) / 12 <= m_ChildNum )
          std::_Xout_of_range("invalid vector<T> subscript");
        v10 = (float)*(int *)(v9 + 12 * m_ChildNum + 8);
        if ( v10 == 1.0 )
          v10 = v10 * pUpdateArg->frame;
        v11 = (*(_QWORD *)(v7 + 1600) - v9) / 12;
        if ( v11 <= m_ChildNum )
          std::_Xout_of_range("invalid vector<T> subscript");
        v12 = *(float *)(v9 + 12 * m_ChildNum);
        v13 = this->__vftable;
        frame = pUpdateArg->frame;
        if ( ((unsigned __int8 (__fastcall *)(ChildParticleState *, unsigned __int64, float *))v13->checkGenerateRequirement)(
               this,
               v11,
               &frame) )
        {
          v14 = *(_QWORD *)(v7 + 1592);
          pParticleEmitter = (unsigned __int64)this->pParticleEmitter;
          v16 = *(int *)(pParticleEmitter + 3020);
          if ( (*(_QWORD *)(v7 + 1600) - v14) / 12 <= v16 )
            std::_Xout_of_range("invalid vector<T> subscript");
          if ( *(float *)(v14 + 12 * v16 + 4) < 999.0 )
            v17 = v12
                + (float)((float)((float)*(int *)(pParticleEmitter + 3044) / (float)*(int *)(pParticleEmitter + 3056))
                        * frame);
          else
            v17 = (float)*(int *)(pParticleEmitter + 3044);
          v18 = *(float *)(pParticleEmitter + 3052);
          v19 = v18 >= v10;
          if ( v17 >= 1.0 && v18 >= v10 )
          {
            if ( (*(_QWORD *)(v7 + 1600) - v14) / 12 <= v16 )
              std::_Xout_of_range("invalid vector<T> subscript");
            *(_DWORD *)(v14 + 12 * v16 + 4) = 0;
            Myfirst = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
            v21 = Myfirst[1].allEditNumData._Mypair._Myval2._Myfirst;
            if ( (unsigned __int64)(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v21) <= 3 )
              std::_Xout_of_range("invalid vector<T> subscript");
            if ( (unsigned __int64)(Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v21) <= 4 )
              std::_Xout_of_range("invalid vector<T> subscript");
            v22 = v21[4];
            if ( v22 == 0.0 )
              v23 = 0.0;
            else
              v23 = (float)((float)((float)rand() / 32767.0) * (float)(v22 - COERCE_FLOAT(LODWORD(v22) ^ _xmm)))
                  + COERCE_FLOAT(LODWORD(v22) ^ _xmm);
            v24 = *(_QWORD *)(v7 + 1592);
            pParticleEmitter = this->pParticleEmitter->m_ChildNum;
            if ( (*(_QWORD *)(v7 + 1600) - v24) / 12 <= pParticleEmitter )
              std::_Xout_of_range("invalid vector<T> subscript");
            *(_DWORD *)(v24 + 12 * pParticleEmitter + 8) = (int)(float)(v23 + v21[3]);
          }
          this->m_AlreadyGenerateNum = 0;
          v25 = (double)(int)(float)((float)(v17 * 1000.0) + 0.5) / 1000.0;
          this->m_AllGenerateNum = (int)v25;
          while ( v25 >= 1.0 )
          {
            if ( !v19 )
              break;
            v25 = v25 + -1.0;
            _Count = ((__int64 (__fastcall *)(ChildParticleState *, bool, unsigned __int64, _QWORD))this->initGenerateParticle)(
                       this,
                       pUpdateArg->mirrorFlag,
                       pParticleEmitter,
                       v2);
            v26 = _Count;
            if ( _Count )
            {
              pParticleEmitter = (unsigned __int64)pUpdateArg->pParticleDataVec;
              p_Count = (*(_QWORD *)(pParticleEmitter + 8) - *(_QWORD *)pParticleEmitter) ^ (*(_QWORD *)(pParticleEmitter + 16)
                                                                                           - *(_QWORD *)pParticleEmitter);
              if ( (p_Count & 0xFFFFFFFFFFFFFFF8ui64) == 0 )
              {
                p_Count = (__int64)(*(_QWORD *)(pParticleEmitter + 8) - *(_QWORD *)pParticleEmitter) >> 3;
                if ( (__int64)(*(_QWORD *)(pParticleEmitter + 16) - *(_QWORD *)pParticleEmitter) >> 3 < p_Count )
                {
                  if ( p_Count > 0x1FFFFFFFFFFFFFFFi64 )
                    std::_Xlength_error("vector<T> too long");
                  std::vector<extension::exsound_detail::PreloadedAudioSet *>::_Reallocate(
                    (std::vector<extension::exsound_detail::PreloadedAudioSet *> *)pUpdateArg->pParticleDataVec,
                    p_Count);
                }
              }
              pParticleDataVec = pUpdateArg->pParticleDataVec;
              Mylast = pParticleDataVec->_Mypair._Myval2._Mylast;
              if ( &_Count >= (unsigned __int64 *)Mylast
                || (p_Count = (unsigned __int64)&_Count,
                    pParticleDataVec->_Mypair._Myval2._Myfirst > (ParticleData **)&_Count) )
              {
                if ( Mylast == pParticleDataVec->_Mypair._Myval2._Myend )
                  std::vector<BattleStageEvent *>::_Reserve(
                    (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)pUpdateArg->pParticleDataVec,
                    p_Count);
                v32 = pParticleDataVec->_Mypair._Myval2._Mylast;
                if ( v32 )
                  *v32 = v26;
              }
              else
              {
                v30 = ((char *)&_Count - (char *)pParticleDataVec->_Mypair._Myval2._Myfirst) >> 3;
                if ( Mylast == pParticleDataVec->_Mypair._Myval2._Myend )
                  std::vector<BattleStageEvent *>::_Reserve(
                    (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)pUpdateArg->pParticleDataVec,
                    (unsigned __int64)&_Count);
                v31 = pParticleDataVec->_Mypair._Myval2._Mylast;
                if ( v31 )
                  *v31 = pParticleDataVec->_Mypair._Myval2._Myfirst[v30];
              }
              ++pParticleDataVec->_Mypair._Myval2._Mylast;
              ++this->m_AlreadyGenerateNum;
            }
          }
          v33 = *(_QWORD *)(v7 + 1592);
          v34 = this->pParticleEmitter->m_ChildNum;
          if ( (*(_QWORD *)(v7 + 1600) - v33) / 12 <= v34 )
            std::_Xout_of_range("invalid vector<T> subscript");
          *(float *)(v33 + 12 * v34) = v25;
        }
      }
      ++v2;
    }
    while ( v2 < (unsigned int)((__int64)(*(_QWORD *)&parent[1].m_BlendProjData.blendProjectionFlag
                                        - (unsigned __int64)parent[1].__vftable) >> 3) );
  }
}

// attributes: thunk
void __fastcall ChildParticleState::generateParticleCol(
        ChildParticleState *this,
        ParticleData *pParticleData,
        float frame)
{
  ParticleEmitterState::generateParticleCol(this, pParticleData, frame);
}

// attributes: thunk
void __fastcall ChildParticleState::generateParticlePos(
        ChildParticleState *this,
        ParticleData *pParticleData,
        float frame)
{
  ParticleEmitterState::generateParticlePos(this, pParticleData, frame);
}

void __fastcall ChildParticleState::generateParticlePosChild(
        ChildParticleState *this,
        ParticleData *pParticleData,
        ParticleData *parentParticleData,
        float __formal)
{
  DialogData *Myfirst; // rcx
  float *v7; // rdi
  float v8; // xmm2_4
  float v9; // xmm7_4
  float v10; // xmm2_4
  OGLEffectVec3 *v11; // rax
  OGLEffectVec3 result; // [rsp+20h] [rbp-48h] BYREF

  Myfirst = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  v7 = Myfirst[8].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[8].allEditNumData._Mypair._Myval2._Mylast - v7) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( (unsigned __int64)(Myfirst[8].allEditNumData._Mypair._Myval2._Mylast - v7) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v8 = 0.0;
  v9 = v7[4];
  if ( v9 != 0.0 )
    v8 = (float)((float)((float)rand() / 32767.0) * (float)(v9 - COERCE_FLOAT(LODWORD(v9) ^ _xmm)))
       + COERCE_FLOAT(LODWORD(v9) ^ _xmm);
  v10 = (float)(v8 + v7[3]) / 100.0;
  pParticleData->InheritanceVelocity = v10;
  v11 = OGLEffectVec3::operator*(&parentParticleData->LocalVel, &result, v10);
  if ( v11 )
    v11 = (OGLEffectVec3 *)((char *)v11 + 8);
  *(_QWORD *)&pParticleData->DefaultInheritanceVel.x = v11->__vftable;
  pParticleData->DefaultInheritanceVel.z = v11->x;
}

// attributes: thunk
void __fastcall ChildParticleState::generateParticleRot(
        ChildParticleState *this,
        ParticleData *pParticleData,
        float frame)
{
  ParticleEmitterState::generateParticleRot(this, pParticleData, frame);
}

// attributes: thunk
void __fastcall ChildParticleState::generateParticleScale(
        ChildParticleState *this,
        ParticleData *pParticleData,
        float frame)
{
  ParticleEmitterState::generateParticleScale(this, pParticleData, frame);
}

ParticleData *__fastcall ChildParticleState::initGenerateParticle(
        ChildParticleState *this,
        bool mirrorFlag,
        float frame,
        int parentNum)
{
  unsigned __int64 v6; // rbx
  ParticleData *result; // rax
  ParticleData *v8; // rsi
  Emitter *pParticleEmitter; // rdx
  Effect *parent; // rax
  Effect_vtbl *v11; // r9
  ParticleData *v12; // r13
  unsigned int v13; // eax
  DialogData *Myfirst; // rcx
  float *v15; // rbx
  float v16; // xmm7_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  DialogData *v19; // rcx
  float *v20; // rbx
  float v21; // xmm7_4
  float v22; // xmm0_4
  Emitter *v23; // rax
  int v24; // ebp
  int v25; // er15
  __int64 v26; // xmm6_8
  std::vector<ParticleDataForChild> *p_particleDataForChild; // rbx
  ParticleDataForChild *Mylast; // r8
  ParticleDataForChild *v29; // rax
  __int64 v30; // rdi
  ParticleDataForChild *v31; // rax
  ParticleDataForChild *v32; // rax
  Emitter *v33; // rax
  OGLEffectMatrix *p_LocalMat; // rcx
  OGLMatrix *v35; // rax
  char *v36; // rcx
  _OWORD *v37; // rax
  __int128 v38; // xmm1
  _OWORD *m; // rax
  EffectData *pSettingData; // rcx
  DialogData *v41; // r9
  int *v42; // rcx
  OGLMatrix *v43; // rdx
  _OWORD *v44; // r8
  __int64 v45; // r10
  OGLMatrix *v46; // rbx
  Emitter *v47; // rax
  Emitter *v48; // rax
  DialogData *v49; // rdx
  float *v50; // rdi
  float v51; // xmm7_4
  float v52; // xmm3_4
  float offsetBlendRatio; // xmm3_4
  const OGLMatrix *v54; // rdx
  EffectData *v55; // rcx
  DialogData *v56; // r8
  int *v57; // rcx
  __int64 v58; // [rsp+30h] [rbp-98h] BYREF
  int v59; // [rsp+38h] [rbp-90h]
  int v60; // [rsp+40h] [rbp-88h]

  v6 = parentNum;
  result = EffectTaskManager::newParticlePtr(
             *(EffectTaskManager **)(*(_QWORD *)&AppMain::pApp + 2507504i64),
             this->pParticleEmitter->jobNum);
  v8 = result;
  if ( result )
  {
    result->playerNum = this->pParticleEmitter->m_pEffectDataListManager->m_PlayerNum;
    pParticleEmitter = this->pParticleEmitter;
    parent = pParticleEmitter->parent;
    v11 = parent[1].__vftable;
    if ( (__int64)(*(_QWORD *)&parent[1].m_BlendProjData.blendProjectionFlag - (_QWORD)v11) >> 3 <= v6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v12 = (ParticleData *)*((_QWORD *)&v11->~Effect + v6);
    v13 = ++pParticleEmitter->m_IDCount;
    if ( v13 > 0x7FFFFFF5 )
      v13 = 0;
    pParticleEmitter->m_IDCount = v13;
    v8->ID = this->pParticleEmitter->m_IDCount;
    v8->parentID = v12->ID;
    v8->age = 1.0;
    Myfirst = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    v15 = Myfirst[2].allEditNumData._Mypair._Myval2._Myfirst;
    if ( !(Myfirst[2].allEditNumData._Mypair._Myval2._Mylast - v15) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (unsigned __int64)(Myfirst[2].allEditNumData._Mypair._Myval2._Mylast - v15) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v16 = v15[1];
    if ( v16 == 0.0 )
      v17 = 0.0;
    else
      v17 = (float)((float)((float)rand() / 32767.0) * (float)(v16 - COERCE_FLOAT(LODWORD(v16) ^ _xmm)))
          + COERCE_FLOAT(LODWORD(v16) ^ _xmm);
    v18 = *v15;
    LODWORD(v58) = 0;
    *((float *)&v58 + 1) = FLOAT_999_0;
    v8->lifeLimit = (int)(float)(v18 - (float)(int)v17);
    v19 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    v20 = v19[1].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v19[1].allEditNumData._Mypair._Myval2._Mylast - v20) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (unsigned __int64)(v19[1].allEditNumData._Mypair._Myval2._Mylast - v20) <= 4 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v21 = v20[4];
    if ( v21 == 0.0 )
      v22 = 0.0;
    else
      v22 = (float)((float)((float)rand() / 32767.0) * (float)(v21 - COERCE_FLOAT(LODWORD(v21) ^ _xmm)))
          + COERCE_FLOAT(LODWORD(v21) ^ _xmm);
    v23 = this->pParticleEmitter;
    v24 = 0;
    v25 = (int)(float)(v22 + v20[3]);
    v59 = v25;
    if ( v23->m_ChildSize > 0 )
    {
      v26 = v58;
      p_particleDataForChild = &v8->particleDataForChild;
      do
      {
        Mylast = v8->particleDataForChild._Mypair._Myval2._Mylast;
        if ( &v58 >= (__int64 *)Mylast
          || (v29 = p_particleDataForChild->_Mypair._Myval2._Myfirst,
              p_particleDataForChild->_Mypair._Myval2._Myfirst > (ParticleDataForChild *)&v58) )
        {
          if ( Mylast == v8->particleDataForChild._Mypair._Myval2._Myend )
            std::vector<ParticleDataForChild>::_Reserve(&v8->particleDataForChild, (unsigned __int64)pParticleEmitter);
          v32 = v8->particleDataForChild._Mypair._Myval2._Mylast;
          if ( v32 )
          {
            *(_QWORD *)&v32->accumulateEmitVolume = v26;
            v32->intervalLimitTime = v25;
          }
        }
        else
        {
          v30 = ((char *)&v58 - (char *)v29) / 12;
          if ( Mylast == v8->particleDataForChild._Mypair._Myval2._Myend )
            std::vector<ParticleDataForChild>::_Reserve(
              &v8->particleDataForChild,
              (unsigned __int128)(((char *)&v58 - (char *)v29) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64);
          pParticleEmitter = (Emitter *)v8->particleDataForChild._Mypair._Myval2._Mylast;
          if ( pParticleEmitter )
          {
            v31 = p_particleDataForChild->_Mypair._Myval2._Myfirst;
            pParticleEmitter->__vftable = *(Emitter_vtbl **)&p_particleDataForChild->_Mypair._Myval2._Myfirst[v30].accumulateEmitVolume;
            *(_DWORD *)&pParticleEmitter->m_BlendProjData.blendProjectionFlag = v31[v30].intervalLimitTime;
          }
        }
        ++v8->particleDataForChild._Mypair._Myval2._Mylast;
        ++v24;
      }
      while ( v24 < this->pParticleEmitter->m_ChildSize );
    }
    v33 = this->pParticleEmitter;
    p_LocalMat = &v33->LocalMat;
    v35 = &v33->LocalMat.OGLMatrix;
    if ( !p_LocalMat )
      v35 = 0i64;
    v36 = (char *)&v35[-1].m[14];
    if ( !v35 )
      v36 = 0i64;
    v37 = v36 + 8;
    if ( !v36 )
      v37 = 0i64;
    *(_OWORD *)v8->ReferenceMat.m = *v37;
    *(_OWORD *)&v8->ReferenceMat.m[4] = v37[1];
    *(_OWORD *)&v8->ReferenceMat.m[8] = v37[2];
    v38 = v37[3];
    m = (_OWORD *)v8->ReferenceMat.m;
    if ( v8 == (ParticleData *)-328i64 )
      m = 0i64;
    *(_OWORD *)&v8->ReferenceMat.m[12] = v38;
    *(_OWORD *)v8->DefaultEmitterMat.m = *m;
    *(_OWORD *)&v8->DefaultEmitterMat.m[4] = m[1];
    *(_OWORD *)&v8->DefaultEmitterMat.m[8] = m[2];
    *(_OWORD *)&v8->DefaultEmitterMat.m[12] = m[3];
    pSettingData = this->pSettingData;
    v41 = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(pSettingData->AllDialogData._Mypair._Myval2._Mylast - v41) <= 8 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v42 = v41[8].allButtonIndexData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v41[8].allButtonIndexData._Mypair._Myval2._Mylast - v42) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v43 = &v12->GlobalMat.OGLMatrix;
    if ( v42[1] )
    {
      if ( v12 == (ParticleData *)-112i64 )
        v43 = 0i64;
      OGLMatrix::multiply(&v8->ReferenceMat.OGLMatrix, v43);
    }
    else
    {
      if ( v12 == (ParticleData *)-112i64 )
        v43 = 0i64;
      OGLEffectMatrix::multiplyMatrixToTranslate(&v8->ReferenceMat, v43);
    }
    v46 = &v8->DefaultActMat.OGLMatrix;
    if ( !v45 )
      v44 = 0i64;
    *(_OWORD *)v8->DefaultReferenceMat.m = *v44;
    *(_OWORD *)&v8->DefaultReferenceMat.m[4] = v44[1];
    *(_OWORD *)&v8->DefaultReferenceMat.m[8] = v44[2];
    *(_OWORD *)&v8->DefaultReferenceMat.m[12] = v44[3];
    v47 = this->pParticleEmitter;
    *(_OWORD *)v46->m = *(_OWORD *)v47->m_ActArg.actMat.m;
    *(_OWORD *)&v8->DefaultActMat.m[4] = *(_OWORD *)&v47->m_ActArg.actMat.m[4];
    *(_OWORD *)&v8->DefaultActMat.m[8] = *(_OWORD *)&v47->m_ActArg.actMat.m[8];
    *(_OWORD *)&v8->DefaultActMat.m[12] = *(_OWORD *)&v47->m_ActArg.actMat.m[12];
    v48 = this->pParticleEmitter;
    *(_OWORD *)v8->ActMat.m = *(_OWORD *)v48->m_ActArg.actMat.m;
    *(_OWORD *)&v8->ActMat.m[4] = *(_OWORD *)&v48->m_ActArg.actMat.m[4];
    *(_OWORD *)&v8->ActMat.m[8] = *(_OWORD *)&v48->m_ActArg.actMat.m[8];
    *(_OWORD *)&v8->ActMat.m[12] = *(_OWORD *)&v48->m_ActArg.actMat.m[12];
    v49 = this->pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
    v50 = v49[8].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v49[8].allEditNumData._Mypair._Myval2._Mylast - v50) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (unsigned __int64)(v49[8].allEditNumData._Mypair._Myval2._Mylast - v50) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v51 = v50[2];
    if ( v51 == 0.0 )
      v52 = 0.0;
    else
      v52 = (float)((float)((float)rand() / 32767.0) * (float)(v51 - COERCE_FLOAT(LODWORD(v51) ^ _xmm)))
          + COERCE_FLOAT(LODWORD(v51) ^ _xmm);
    offsetBlendRatio = (float)(v52 + v50[1]) / 100.0;
    v8->RatioToFollow = offsetBlendRatio;
    if ( offsetBlendRatio != 0.0 )
    {
      v54 = &v12->ActMat.OGLMatrix;
      if ( v8 == (ParticleData *)-400i64 )
        v46 = 0i64;
      if ( v12 == (ParticleData *)-472i64 )
        v54 = 0i64;
      OGLEffectMatrix::BlendMatrix(&v8->ActMat, v54, v46, offsetBlendRatio, offsetBlendRatio);
    }
    v8->mirrorFlag = mirrorFlag;
    v55 = this->pSettingData;
    v56 = v55->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v55->AllDialogData._Mypair._Myval2._Mylast - v56) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v57 = v56[2].allButtonIndexData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v56[2].allButtonIndexData._Mypair._Myval2._Mylast - v57) <= 6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( v57[6] )
      v8->mirrorFlag = 0;
    ChildParticleState::generateParticlePosChild(this, v8, v12, offsetBlendRatio);
    ((void (__fastcall *)(ChildParticleState *, ParticleData *))this->generateParticlePos)(this, v8);
    ((void (__fastcall *)(ChildParticleState *, ParticleData *))this->generateParticleCol)(this, v8);
    ((void (__fastcall *)(ChildParticleState *, ParticleData *))this->generateParticleRot)(this, v8);
    ((void (__fastcall *)(ChildParticleState *, ParticleData *))this->generateParticleScale)(this, v8);
    *(_QWORD *)&v8->ForceFieldPos.x = _mm_unpacklo_ps((__m128)0i64, (__m128)0i64).m128_u64[0];
    v8->ForceFieldPos.z = 0.0;
    *(_QWORD *)&v8->ForceFieldVel.x = _mm_unpacklo_ps((__m128)0i64, (__m128)0i64).m128_u64[0];
    v60 = 0;
    v8->ForceFieldVel.z = 0.0;
    v8->TexNum = (unsigned int)RandomMT::getRand32(&this->pRandomNumbers->RandomMT) >> 1;
    ((void (__fastcall *)(ChildParticleState *, ParticleData *))this->calcLocalMatrix)(this, v8);
    ((void (__fastcall *)(ChildParticleState *, ParticleData *))this->generateWorldData)(this, v8);
    return v8;
  }
  return result;
}

void __fastcall ChildParticleState::updateParticleScale(
        ChildParticleState *this,
        ParticleData *pParticleData,
        float frame)
{
  EffectData *pSettingData; // r8
  DialogData *Myfirst; // r10
  int *v7; // rcx
  Emitter *parent; // rdi
  int v9; // eax
  ParticleData **v10; // rcx
  ParticleData *v11; // rdx
  OGLVec3 *v12; // rcx
  float y; // xmm1_4
  float z; // xmm0_4
  OGLEffectVec3 *v15; // rax
  OGLVec3 *v16; // r9
  OGLVec3 v17; // [rsp+20h] [rbp-38h] BYREF
  OGLEffectVec3 v18; // [rsp+30h] [rbp-28h] BYREF

  pSettingData = this->pSettingData;
  Myfirst = pSettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(pSettingData->AllDialogData._Mypair._Myval2._Mylast - Myfirst) <= 8 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v7 = Myfirst[8].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[8].allButtonIndexData._Mypair._Myval2._Mylast - v7) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *v7 )
  {
    parent = (Emitter *)this->pParticleEmitter->parent;
    v9 = Emitter::searchParentNum(parent, pParticleData->parentID);
    if ( v9 != -1 )
    {
      v10 = parent->m_ParticleData._Mypair._Myval2._Myfirst;
      if ( parent->m_ParticleData._Mypair._Myval2._Mylast - v10 <= (unsigned __int64)v9 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v11 = v10[v9];
      v12 = &pParticleData->DefaultScale.OGLVec3;
      if ( pParticleData == (ParticleData *)-1096i64 )
        v12 = 0i64;
      y = v12->y;
      v17.x = v12->x;
      z = v12->z;
      v17.y = y;
      v17.z = z;
      v15 = OGLEffectVec3::operator+(&v11->LocalScale, &v18, &v17);
      if ( v15 )
        v16 = &v15->OGLVec3;
      *(_QWORD *)&pParticleData->LocalScale.x = *(_QWORD *)&v16->x;
      pParticleData->LocalScale.z = v16->z;
    }
  }
  else
  {
    ParticleEmitterState::updateParticleScale(this, pParticleData, frame);
  }
}

// attributes: thunk
void __fastcall ChildParticleState::updateWorldData(ChildParticleState *this, ParticleData *pParticleData, float frame)
{
  ParticleEmitterState::updateWorldData(this, pParticleData, frame);
}

