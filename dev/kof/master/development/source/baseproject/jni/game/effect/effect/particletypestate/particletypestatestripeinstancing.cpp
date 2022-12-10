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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectmanager/effecttaskmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particletypestate/particletypestatestripe.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particletypestate/particletypestate.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E399
ParticleTypeStateStripeInstancing::~ParticleTypeStateStripeInstancing(); // 0x1401544A0
void ParticleTypeStateStripeInstancing::initialize(); // 0x140154600
void ParticleTypeStateStripeInstancing::allocateVertexMemory(EffectUpdateArgument * pUpdateBufferArg); // 0x140154680
void ParticleTypeStateStripeInstancing::UpdateVertexBuffer(EffectUpdateBufferArgument * pUpdateBufferArg); // 0x1401549A0
void ParticleTypeStateStripeInstancing::UpdataInstancingBuffer(EffectUpdateBufferArgument * pUpdateBufferArg); // 0x140154A70
void ParticleTypeStateStripeInstancing::Render(EffectRenderArgument * pRenderArg); // 0x140154BB0//decompilation failure at 14089E399!
void __fastcall ParticleTypeStateStripeInstancing::~ParticleTypeStateStripeInstancing(
        ParticleTypeStateStripeInstancing *this)
{
  void **p_index; // rbx
  __int64 i; // rdi
  void *v4; // rdx
  ParticleVertexBuffer *Myfirst; // r8
  unsigned __int64 v6; // rdx
  ParticleVertexBuffer *uv; // rax
  unsigned __int64 v8; // r8

  this->__vftable = (ParticleTypeStateStripeInstancing_vtbl *)&ParticleTypeStateStripeInstancing::`vftable';
  p_index = (void **)&this->m_EffectMeshData[0].index;
  for ( i = 376i64; i < 392; i += 8i64 )
  {
    v4 = *(p_index - 15);
    if ( v4 )
    {
      Framework::MemoryManager::release(
        *(Framework::MemoryManager **)((char *)&this->m_pParticleEmitter->m_BlendProjData.blendProjectionCenterPos.y + i),
        v4);
      *(p_index - 15) = 0i64;
    }
    if ( *p_index )
    {
      Framework::MemoryManager::release(
        *(Framework::MemoryManager **)((char *)&this->m_pParticleEmitter->ParticleTypeStateStripe::ParticleTypeState::__vftable
                                     + i),
        *p_index);
      *p_index = 0i64;
    }
    p_index += 21;
  }
  this->__vftable = (ParticleTypeStateStripeInstancing_vtbl *)&ParticleTypeStateStripe::`vftable';
  Myfirst = this->InterpolationVertex._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    v6 = this->InterpolationVertex._Mypair._Myval2._Myend - Myfirst;
    if ( v6 > 0x444444444444444i64 )
      invalid_parameter_noinfo_noreturn();
    if ( 60 * v6 >= 0x1000 )
    {
      if ( ((unsigned __int8)Myfirst & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      uv = (ParticleVertexBuffer *)Myfirst[-1].uv;
      if ( uv >= Myfirst )
        invalid_parameter_noinfo_noreturn();
      v8 = (char *)Myfirst - (char *)uv;
      if ( v8 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v8 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      Myfirst = uv;
    }
    operator delete(Myfirst);
    this->InterpolationVertex._Mypair._Myval2._Myfirst = 0i64;
    this->InterpolationVertex._Mypair._Myval2._Mylast = 0i64;
    this->InterpolationVertex._Mypair._Myval2._Myend = 0i64;
  }
  this->__vftable = (ParticleTypeStateStripeInstancing_vtbl *)&ParticleTypeState::`vftable';
  ParticleTypeState::terminate(this);
}

void __fastcall ParticleTypeStateStripeInstancing::Render(
        ParticleTypeStateStripeInstancing *this,
        EffectRenderArgument *pRenderArg)
{
  float *p_zOffset; // rbp
  int *p_renderOpt; // rsi
  OGLRender *v6; // r15
  EffectData *pEffectData; // r10
  DialogData *Myfirst; // r8
  __int64 v9; // rbx
  __int64 v10; // rbx
  MeshVertexInfo2D *crossBuffer; // rax
  MeshVertexInfo2D *vertexBuffer; // rcx
  int *pEffectConstData; // [rsp+20h] [rbp-28h]

  p_zOffset = &pRenderArg->zOffset;
  p_renderOpt = &pRenderArg->renderOpt;
  if ( ((unsigned __int8 (__fastcall *)(ParticleTypeStateStripeInstancing *, EffectData *, _QWORD))this->RenderErrorCheck)(
         this,
         pRenderArg->pEffectData,
         (unsigned int)pRenderArg->renderOpt) )
  {
    v6 = *(OGLRender **)(*(_QWORD *)&AppMain::pApp + 80i64);
    if ( this->RenderSetting(this, pRenderArg->pEffectData, p_renderOpt, &pRenderArg->priority) )
    {
      pEffectData = pRenderArg->pEffectData;
      Myfirst = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast - Myfirst) <= 2 )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( (unsigned __int64)(Myfirst[2].allEditNumData._Mypair._Myval2._Mylast
                            - Myfirst[2].allEditNumData._Mypair._Myval2._Myfirst) <= 4 )
        std::_Xout_of_range("invalid vector<T> subscript");
      pEffectConstData = &pRenderArg->priority;
      v9 = *(int *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 2507504i64) + 2256i64);
      this->SetRenderData(this, pEffectData, p_renderOpt, p_zOffset, pEffectConstData);
      v10 = v9;
      this->m_EffectMeshData[v10].instanceNum = 1;
      OGLRender::drawEffectIndexInstancesUVAnime(
        v6,
        &this->m_pParticleEmitter->m_BlendProjData,
        &this->m_TextureData,
        &this->m_EffectMeshData[v10],
        &this->m_EffectConstData);
      if ( this->stripeType == STRIPE_TYPE_CROSS )
      {
        crossBuffer = this->m_EffectMeshData[v10].crossBuffer;
        this->m_EffectMeshData[v10].crossBuffer = this->m_EffectMeshData[v10].vertexBuffer;
        this->m_EffectMeshData[v10].vertexBuffer = crossBuffer;
        OGLRender::drawEffectIndexInstancesUVAnime(
          v6,
          &this->m_pParticleEmitter->m_BlendProjData,
          &this->m_TextureData,
          &this->m_EffectMeshData[v10],
          &this->m_EffectConstData);
        vertexBuffer = this->m_EffectMeshData[v10].vertexBuffer;
        this->m_EffectMeshData[v10].vertexBuffer = this->m_EffectMeshData[v10].crossBuffer;
        this->m_EffectMeshData[v10].crossBuffer = vertexBuffer;
      }
    }
  }
}

void __fastcall ParticleTypeStateStripeInstancing::UpdataInstancingBuffer(
        ParticleTypeStateStripeInstancing *this,
        EffectUpdateBufferArgument *pUpdateBufferArg)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  ParticleData **Myfirst; // rdx
  ParticleData *v7; // rax
  float age; // xmm0_4
  float distortionRatio; // xmm1_4
  __int64 v10; // rax
  __int64 v11; // rax
  __int128 v12; // [rsp+60h] [rbp-18h]

  if ( (((char *)pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast
       - (char *)pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFF8ui64) != 0 )
  {
    v3 = 168 * (*(int *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 2507504i64) + 2256i64) + 1i64);
    if ( *(ParticleTypeStateStripeInstancing_vtbl **)((char *)&this->__vftable + v3) )
    {
      v4 = 0i64;
      v5 = 0i64;
      do
      {
        Myfirst = pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst;
        if ( pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast - Myfirst <= (unsigned __int64)v4 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v7 = Myfirst[v4++];
        age = v7->age;
        distortionRatio = v7->distortionRatio;
        v10 = *(__int64 *)((char *)&this->__vftable + v3);
        *(_OWORD *)(v10 + v5) = _xmm;
        *(_OWORD *)(v10 + v5 + 16) = __PAIR64__(LODWORD(distortionRatio), LODWORD(age));
        *(_OWORD *)(v10 + v5 + 32) = 0i64;
        *(_OWORD *)(v10 + v5 + 48) = 0i64;
        *(_OWORD *)(v10 + v5 + 64) = v12;
        v11 = *(__int64 *)((char *)&this->__vftable + v3);
        *(_OWORD *)(v11 + v5 + 80) = _xmm;
        *(_OWORD *)(v11 + v5 + 96) = _xmm;
        *(_OWORD *)(v11 + v5 + 112) = _xmm;
        *(_OWORD *)(v11 + v5 + 128) = _xmm;
        v5 += 144i64;
      }
      while ( v4 < 1 );
    }
  }
}

void __fastcall ParticleTypeStateStripeInstancing::UpdateVertexBuffer(
        ParticleTypeStateStripeInstancing *this,
        EffectUpdateBufferArgument *pUpdateBufferArg)
{
  ParticleTypeStateStripeInstancing_vtbl *v4; // rax
  __int64 v5; // rbx
  char *v6; // r8
  unsigned int v7; // edx
  signed int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rax
  ParticleTypeStateStripeInstancing_vtbl *v11; // rax

  v4 = this->__vftable;
  v5 = *(int *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 2507504i64) + 2256i64);
  this->crossFlag = 0;
  ((void (*)(void))v4->UpdateInterpolationVertexBuffer)();
  this->UpdataInstancingBuffer(this, pUpdateBufferArg);
  v6 = (char *)this + 4 * v5;
  v7 = 0;
  v8 = this->m_EffectMeshData[v5].indexCount
     * (*((_DWORD *)v6 + 8) + this->m_InterpolationNum * (*((_DWORD *)v6 + 8) - 1));
  v9 = v8;
  if ( v8 > 0 )
  {
    v10 = 0i64;
    do
    {
      if ( *((_DWORD *)v6 + 8) )
        this->m_EffectMeshData[v5].index[v10] = v7;
      ++v7;
      ++v10;
    }
    while ( v10 < v9 );
  }
  if ( this->stripeType == STRIPE_TYPE_CROSS )
  {
    v11 = this->__vftable;
    this->crossFlag = 1;
    ((void (__fastcall *)(ParticleTypeStateStripeInstancing *, EffectUpdateBufferArgument *, char *, __int64))v11->UpdateInterpolationVertexBuffer)(
      this,
      pUpdateBufferArg,
      v6,
      v9);
  }
}

void __fastcall ParticleTypeStateStripeInstancing::allocateVertexMemory(
        ParticleTypeStateStripeInstancing *this,
        EffectUpdateArgument *pUpdateBufferArg)
{
  std::vector<ParticleData *> *pParticleDataVec; // r9
  unsigned __int64 v5; // r8
  int v6; // ecx
  __int64 v7; // rsi
  char *v8; // r14
  char *v9; // rbx
  __int64 v10; // rax
  void *v11; // rdx
  int v12; // ebp
  Framework::MemoryManager *v13; // rcx
  void *v14; // rax
  void *v15; // rax
  std::vector<ParticleData *> *v16; // rdx
  char *v17; // r14
  void *v18; // rdx
  Framework::MemoryManager *v19; // rcx
  void *v20; // rax
  std::vector<ParticleData *> *v21; // rdx
  char *v22; // r14
  void *v23; // rdx
  void *v24; // rax

  pParticleDataVec = pUpdateBufferArg->pParticleDataVec;
  if ( (((char *)pParticleDataVec->_Mypair._Myval2._Mylast - (char *)pParticleDataVec->_Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFF8ui64) != 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 2507504i64);
    v6 = 0;
    if ( *(_DWORD *)(v5 + 2256) + 1 < 2 )
      v6 = *(_DWORD *)(v5 + 2256) + 1;
    v7 = v6;
    v8 = (char *)this + 4 * v6;
    v9 = (char *)this + 168 * v6;
    if ( *((int *)v8 + 6) < (unsigned __int64)*((unsigned int *)v9 + 45)
                          * (pParticleDataVec->_Mypair._Myval2._Mylast - pParticleDataVec->_Mypair._Myval2._Myfirst)
      || !*((_QWORD *)v9 + 9) )
    {
      v10 = pParticleDataVec->_Mypair._Myval2._Mylast - pParticleDataVec->_Mypair._Myval2._Myfirst;
      *((_DWORD *)v8 + 6) = v10;
      v11 = (void *)*((_QWORD *)v9 + 9);
      v12 = *((_DWORD *)v9 + 45) * (v10 + this->m_InterpolationNum * (v10 - 1));
      if ( v11 )
      {
        v13 = this->m_pParticleEmitter->m_pMemoryVertexReal[v6];
        if ( v13 )
          Framework::MemoryManager::release(v13, v11);
        *((_QWORD *)v9 + 9) = 0i64;
      }
      v14 = Framework::MemoryManager::allocate(this->m_pParticleEmitter->m_pGpuMemory, (__int64)v12 << 6, v5);
      *((_QWORD *)v9 + 9) = v14;
      if ( !v14 )
      {
        *((_DWORD *)v8 + 6) = 0;
        return;
      }
      this->m_pParticleEmitter->m_pMemoryVertexReal[v7] = this->m_pParticleEmitter->m_pGpuMemory;
    }
    if ( !*((_QWORD *)v9 + 21) )
    {
      v15 = Framework::MemoryManager::allocate(this->m_pParticleEmitter->m_pGpuMemory, 0x90ui64, v5);
      *((_QWORD *)v9 + 21) = v15;
      if ( !v15 )
        return;
      this->m_pParticleEmitter->m_pMemoryInstancingReal[v7] = this->m_pParticleEmitter->m_pGpuMemory;
    }
    v16 = pUpdateBufferArg->pParticleDataVec;
    v17 = (char *)this + 4 * v7;
    if ( *((int *)v17 + 8) >= (unsigned __int64)*((unsigned int *)v9 + 47)
                            * (v16->_Mypair._Myval2._Mylast - v16->_Mypair._Myval2._Myfirst) )
    {
      if ( *((_QWORD *)v9 + 25) )
        goto LABEL_35;
    }
    *((_DWORD *)v17 + 8) = v16->_Mypair._Myval2._Mylast - v16->_Mypair._Myval2._Myfirst;
    v18 = (void *)*((_QWORD *)v9 + 25);
    if ( v18 )
    {
      v19 = this->m_pParticleEmitter->m_pMemoryIndexReal[v7];
      if ( v19 )
        Framework::MemoryManager::release(v19, v18);
      *((_QWORD *)v9 + 25) = 0i64;
    }
    v20 = Framework::MemoryManager::allocate(
            this->m_pParticleEmitter->m_pGpuMemory,
            4
          * *((unsigned int *)v9 + 47)
          * (__int64)(*((_DWORD *)v17 + 8) + this->m_InterpolationNum * (*((_DWORD *)v17 + 8) - 1)),
            v5);
    *((_QWORD *)v9 + 25) = v20;
    if ( !v20 )
    {
      *((_DWORD *)v17 + 8) = 0;
      return;
    }
    this->m_pParticleEmitter->m_pMemoryIndexReal[v7] = this->m_pParticleEmitter->m_pGpuMemory;
    if ( *((_QWORD *)v9 + 25) )
    {
LABEL_35:
      if ( this->stripeType == STRIPE_TYPE_CROSS )
      {
        v21 = pUpdateBufferArg->pParticleDataVec;
        v22 = (char *)this + 4 * v7;
        if ( *((int *)v22 + 290) < (unsigned __int64)*((unsigned int *)v9 + 45)
                                 * (v21->_Mypair._Myval2._Mylast - v21->_Mypair._Myval2._Myfirst)
          || !*((_QWORD *)v9 + 10) )
        {
          *((_DWORD *)v22 + 290) = v21->_Mypair._Myval2._Mylast - v21->_Mypair._Myval2._Myfirst;
          v23 = (void *)*((_QWORD *)v9 + 10);
          if ( v23 )
          {
            Framework::MemoryManager::release(this->m_pParticleEmitter->m_pMemoryCrossVertexReal[v7], v23);
            *((_QWORD *)v9 + 10) = 0i64;
          }
          v24 = Framework::MemoryManager::allocate(
                  this->m_pParticleEmitter->m_pGpuMemory,
                  (*((unsigned int *)v9 + 47)
                 * (__int64)(*((_DWORD *)v22 + 290) + this->m_InterpolationNum * (*((_DWORD *)v22 + 290) - 1))) << 6,
                  v5);
          *((_QWORD *)v9 + 10) = v24;
          if ( v24 )
            this->m_pParticleEmitter->m_pMemoryCrossVertexReal[v7] = this->m_pParticleEmitter->m_pGpuMemory;
          else
            *((_DWORD *)v22 + 290) = 0;
        }
      }
    }
  }
}

void __fastcall ParticleTypeStateStripeInstancing::initialize(ParticleTypeStateStripeInstancing *this)
{
  ParticleEmitterData *m_pParticleEmitterData; // rdx
  DialogData *Myfirst; // r8
  unsigned __int64 v4; // rdx
  float *v5; // rcx

  m_pParticleEmitterData = this->m_pParticleEmitterData;
  Myfirst = m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
  v4 = (__int64)((unsigned __int128)(((char *)m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Mylast
                                    - (char *)Myfirst)
                                   * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 4;
  if ( (v4 >> 63) + v4 <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v5 = Myfirst[2].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[2].allEditNumData._Mypair._Myval2._Mylast - v5) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  this->m_InterpolationNum = (int)v5[5];
}

