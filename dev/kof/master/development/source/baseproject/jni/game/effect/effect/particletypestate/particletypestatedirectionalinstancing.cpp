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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particletypestate/particletypestate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particletypestate/particletypestateplane.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particletypestate/particletypestateplaneinstancing.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E392
void ParticleTypeStateDirectionalInstancing::InitVertexBuffer(std::vector<ParticleData,std::allocator<ParticleData> > * ParticleData, EffectData * pEmitterData); // 0x14002E7C0
void ParticleTypeStateDirectionalInstancing::calcWorldMat(ParticleData * pParticleData, EffectData * pEffectData); // 0x14014C7E0//decompilation failure at 14089E392!
void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall ParticleTypeStateDirectionalInstancing::calcWorldMat(
        ParticleTypeStateDirectionalInstancing *this,
        ParticleData *pParticleData,
        EffectData *pEffectData)
{
  DialogData *Myfirst; // rcx
  DialogData *v7; // rcx
  OGLMatrix *v8; // rcx
  __m128 v9; // xmm6
  OGLMatrix *v10; // rcx
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm5_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  OGLVec3 *v17; // rcx
  float v18; // xmm5_4
  float v19; // xmm7_4
  float v20; // xmm6_4
  DialogData *v21; // rcx
  OGLEffectMatrix *p_ActMat; // rax
  OGLMatrix *v23; // rcx
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  OGLMatrix *v28; // rax
  __int128 v29; // xmm4
  OGLVec3 *v30; // rcx
  float v31; // xmm4_4
  float v32; // xmm5_4
  float v33; // xmm6_4
  DialogData *v34; // rcx
  OGLMatrix *v35; // rdx
  float v36; // xmm3_4
  float z; // xmm2_4
  float y; // xmm1_4
  float x; // xmm0_4
  DialogData *v40; // rcx
  float *v41; // rdx
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm2_4
  float v45; // xmm0_4
  OGLVec3 *v46; // rcx
  OGLVec3 *v47; // rcx
  OGLEffectVec3 *v48; // rax
  float *v49; // r9
  OGLEffectVec3 *v50; // rax
  OGLVec3 *v51; // rax
  float v52; // xmm14_4
  float AngleBetweenVectors; // xmm8_4
  float v54; // xmm9_4
  float v55; // xmm10_4
  float v56; // xmm11_4
  float v57; // xmm15_4
  float v58; // xmm12_4
  float v59; // xmm13_4
  float v60; // xmm14_4
  float v61; // xmm6_4
  float v62; // xmm15_4
  float v63; // xmm0_4
  OGLMatrix *v64; // rdx
  float v65; // xmm8_4
  float v66; // xmm0_4
  DialogData *v67; // rcx
  BattleSystem::BattleController *v68; // rcx
  BattleSystem::BattleController *v69; // rax
  OGLVec3 *CameraPos; // rax
  float v71; // xmm6_4
  float v72; // xmm10_4
  float v73; // xmm11_4
  __int64 v74; // rcx
  BattleSystem::BattleController *v75; // rax
  float v76; // xmm8_4
  float v77; // xmm9_4
  float v78; // xmm10_4
  float v79; // xmm11_4
  float v80; // xmm12_4
  float v81; // xmm6_4
  float v82; // xmm13_4
  float v83; // xmm11_4
  float v84; // xmm0_4
  float v85; // xmm6_4
  float v86; // xmm12_4
  float v87; // xmm13_4
  float v88; // xmm0_4
  OGLVec3 *v89; // rcx
  float v90; // xmm9_4
  float v91; // xmm10_4
  OGLVec3 result; // [rsp+38h] [rbp-D0h] BYREF
  OGLEffectVec3 v93; // [rsp+48h] [rbp-C0h] BYREF
  void **q; // [rsp+60h] [rbp-A8h]
  OGLQuat q_8; // [rsp+68h] [rbp-A0h] BYREF
  void **v96; // [rsp+80h] [rbp-88h]
  OGLQuat w; // [rsp+88h] [rbp-80h] BYREF
  void **v98; // [rsp+A0h] [rbp-68h]
  OGLVec3 v; // [rsp+A8h] [rbp-60h] BYREF
  void **v100; // [rsp+B8h] [rbp-50h]
  OGLVec3 second; // [rsp+C0h] [rbp-48h] BYREF
  void **v102; // [rsp+D0h] [rbp-38h]
  OGLVec3 v103; // [rsp+D8h] [rbp-30h] BYREF
  BattleSystem::BattleController *v104; // [rsp+E8h] [rbp-20h]
  void **v105; // [rsp+F0h] [rbp-18h]
  OGLVec3 v106; // [rsp+F8h] [rbp-10h] BYREF
  void **v107; // [rsp+108h] [rbp+0h]
  OGLVec3 v108; // [rsp+110h] [rbp+8h] BYREF
  void **v109; // [rsp+120h] [rbp+18h]
  OGLVec3 v110; // [rsp+128h] [rbp+20h] BYREF
  void **v111; // [rsp+138h] [rbp+30h]
  OGLQuat rotQuat; // [rsp+140h] [rbp+38h] BYREF
  OGLEffectVec3 v113; // [rsp+150h] [rbp+48h] BYREF
  void **v114; // [rsp+168h] [rbp+60h]
  __int64 v115; // [rsp+170h] [rbp+68h]
  float v116; // [rsp+178h] [rbp+70h]
  void **v117; // [rsp+180h] [rbp+78h]
  OGLVec3 first; // [rsp+188h] [rbp+80h] BYREF
  void **v119; // [rsp+198h] [rbp+90h]
  OGLVec3 v120; // [rsp+1A0h] [rbp+98h] BYREF
  void **v121; // [rsp+1B0h] [rbp+A8h]
  float v122; // [rsp+1B8h] [rbp+B0h]
  float v123; // [rsp+1BCh] [rbp+B4h]
  float v124; // [rsp+1C0h] [rbp+B8h]
  void **v125; // [rsp+1C8h] [rbp+C0h]
  __int64 v126; // [rsp+1D0h] [rbp+C8h]
  int v127; // [rsp+1D8h] [rbp+D0h]
  void **v128; // [rsp+1E0h] [rbp+D8h]
  void *block; // [rsp+1E8h] [rbp+E0h]
  int v130; // [rsp+1F0h] [rbp+E8h]
  __int64 v131; // [rsp+1F8h] [rbp+F0h]
  OGLEffectVec3 v132; // [rsp+200h] [rbp+F8h] BYREF
  OGLEffectVec3 v133; // [rsp+218h] [rbp+110h] BYREF
  OGLEffectVec3 v134; // [rsp+230h] [rbp+128h] BYREF
  void **v135; // [rsp+248h] [rbp+140h] BYREF
  OGLMatrix v136; // [rsp+250h] [rbp+148h] BYREF
  void **v137; // [rsp+298h] [rbp+190h]
  __int64 v138[9]; // [rsp+2A0h] [rbp+198h] BYREF
  OGLEffectMatrix v139; // [rsp+2E8h] [rbp+1E0h] BYREF
  OGLEffectMatrix v140; // [rsp+338h] [rbp+230h] BYREF

  v131 = -2i64;
  memset(&v136, 0, sizeof(v136));
  v135 = &OGLEffectMatrix::`vftable';
  if ( !(pEffectData->AllDialogData._Mypair._Myval2._Mylast - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  Myfirst = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst->allButtonIndexData._Mypair._Myval2._Mylast
                        - Myfirst->allButtonIndexData._Mypair._Myval2._Myfirst) <= 6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( Myfirst->allButtonIndexData._Mypair._Myval2._Myfirst[6] == 1 )
  {
    this->followCamera(this, pParticleData, (OGLEffectMatrix *)&v135, pEffectData);
    goto LABEL_42;
  }
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                        - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v7 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v7[2].allButtonIndexData._Mypair._Myval2._Mylast
                        - v7[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v7[2].allButtonIndexData._Mypair._Myval2._Myfirst[5] )
  {
    v28 = &pParticleData->GlobalMat.OGLMatrix;
    if ( pParticleData == (ParticleData *)-112i64 )
      v28 = 0i64;
    *(_OWORD *)v136.m = *(_OWORD *)v28->m;
    *(_OWORD *)&v136.m[4] = *(_OWORD *)&v28->m[4];
    *(_OWORD *)&v136.m[8] = *(_OWORD *)&v28->m[8];
    v29 = *(_OWORD *)&v28->m[12];
    *(_OWORD *)&v136.m[12] = v29;
    v30 = &pParticleData->ForceFieldPos.OGLVec3;
    if ( pParticleData == (ParticleData *)-832i64 )
      v30 = 0i64;
    v31 = *(float *)&v29 + v30->x;
    v136.m[12] = v31;
    v32 = v136.m[13] + v30->y;
    v136.m[13] = v32;
    v33 = v136.m[14] + v30->z;
    v136.m[14] = v33;
    v136.m[15] = 1.0;
    if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                          - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v34 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v34[2].allButtonIndexData._Mypair._Myval2._Mylast
                          - v34[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    p_ActMat = &pParticleData->ActMat;
    if ( v34[2].allButtonIndexData._Mypair._Myval2._Myfirst[6] )
    {
      v23 = &pParticleData->ActMat.OGLMatrix;
      if ( pParticleData == (ParticleData *)-472i64 )
        v23 = 0i64;
      v24 = (float)((float)(v32 * v23->m[4]) + (float)(v31 * v23->m[0])) + (float)(v33 * v23->m[8]);
      v25 = v31;
      v26 = v32;
      v27 = v33;
      v136.m[14] = (float)((float)((float)(v31 * v23->m[2]) + (float)(v32 * v23->m[6])) + (float)(v33 * v23->m[10]))
                 + v23->m[14];
      goto LABEL_41;
    }
  }
  else
  {
    v8 = &pParticleData->LocalMat.OGLMatrix;
    if ( pParticleData == (ParticleData *)-184i64 )
      v8 = 0i64;
    *(_OWORD *)v136.m = *(_OWORD *)v8->m;
    *(_OWORD *)&v136.m[4] = *(_OWORD *)&v8->m[4];
    *(_OWORD *)&v136.m[8] = *(_OWORD *)&v8->m[8];
    v9 = *(__m128 *)&v8->m[12];
    *(__m128 *)&v136.m[12] = v9;
    v10 = &pParticleData->ReferenceMat.OGLMatrix;
    if ( pParticleData == (ParticleData *)-328i64 )
      v10 = 0i64;
    v11 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
    v12 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
    v13 = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
    v14 = (float)((float)((float)(v11 * v10->m[4]) + (float)(v9.m128_f32[0] * v10->m[0])) + (float)(v12 * v10->m[8]))
        + (float)(v13 * v10->m[12]);
    v15 = (float)((float)((float)(v9.m128_f32[0] * v10->m[1]) + (float)(v11 * v10->m[5])) + (float)(v12 * v10->m[9]))
        + (float)(v13 * v10->m[13]);
    v16 = (float)((float)((float)(v9.m128_f32[0] * v10->m[2]) + (float)(v11 * v10->m[6])) + (float)(v12 * v10->m[10]))
        + (float)(v13 * v10->m[14]);
    v17 = &pParticleData->ForceFieldPos.OGLVec3;
    if ( pParticleData == (ParticleData *)-832i64 )
      v17 = 0i64;
    v18 = v14 + v17->x;
    v136.m[12] = v18;
    v19 = v15 + v17->y;
    v136.m[13] = v19;
    v20 = v16 + v17->z;
    v136.m[14] = v20;
    v136.m[15] = 1.0;
    if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                          - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v21 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v21[2].allButtonIndexData._Mypair._Myval2._Mylast
                          - v21[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    p_ActMat = &pParticleData->ActMat;
    if ( v21[2].allButtonIndexData._Mypair._Myval2._Myfirst[6] )
    {
      v23 = &pParticleData->ActMat.OGLMatrix;
      if ( pParticleData == (ParticleData *)-472i64 )
        v23 = 0i64;
      v24 = (float)((float)(v19 * v23->m[4]) + (float)(v18 * v23->m[0])) + (float)(v20 * v23->m[8]);
      v25 = v18;
      v26 = v19;
      v27 = v20;
      v136.m[14] = (float)((float)((float)(v18 * v23->m[2]) + (float)(v19 * v23->m[6])) + (float)(v20 * v23->m[10]))
                 + v23->m[14];
LABEL_41:
      v36 = v24 + v23->m[12];
      v136.m[13] = (float)((float)((float)(v25 * v23->m[1]) + (float)(v26 * v23->m[5])) + (float)(v27 * v23->m[9]))
                 + v23->m[13];
      v136.m[12] = v36;
      goto LABEL_42;
    }
  }
  v35 = &pParticleData->ActMat.OGLMatrix;
  if ( !p_ActMat )
    v35 = 0i64;
  OGLMatrix::multiply(&v136, v35);
LABEL_42:
  z = pParticleData->LocalScale.z;
  y = pParticleData->LocalScale.y;
  x = pParticleData->LocalScale.x;
  *(_QWORD *)pParticleData->WorldMat.m = 0i64;
  *(_QWORD *)&pParticleData->WorldMat.m[2] = 0i64;
  *(_QWORD *)&pParticleData->WorldMat.m[4] = 0i64;
  *(_QWORD *)&pParticleData->WorldMat.m[6] = 0i64;
  *(_QWORD *)&pParticleData->WorldMat.m[8] = 0i64;
  *(_QWORD *)&pParticleData->WorldMat.m[10] = 0i64;
  *(_QWORD *)&pParticleData->WorldMat.m[12] = 0i64;
  *(_QWORD *)&pParticleData->WorldMat.m[14] = 0i64;
  pParticleData->WorldMat.m[0] = x;
  pParticleData->WorldMat.m[5] = y;
  pParticleData->WorldMat.m[10] = z;
  pParticleData->WorldMat.m[15] = 1.0;
  v40 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v40[2].allEditNumData._Mypair._Myval2._Mylast - v40[2].allEditNumData._Mypair._Myval2._Myfirst) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v41 = v40[2].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v40[2].allEditNumData._Mypair._Myval2._Mylast - v41) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v42 = v41[3];
  v43 = v41[2];
  v121 = &OGLEffectVec3::`vftable';
  v122 = v43 * x;
  v44 = v42 * pParticleData->LocalScale.y;
  v123 = v44;
  v124 = pParticleData->LocalScale.z * 0.0;
  v45 = v124;
  pParticleData->WorldMat.m[12] = v122 + pParticleData->WorldMat.m[12];
  pParticleData->WorldMat.m[13] = v44 + pParticleData->WorldMat.m[13];
  pParticleData->WorldMat.m[14] = v45 + pParticleData->WorldMat.m[14];
  pParticleData->WorldMat.m[15] = 1.0;
  v98 = &OGLEffectVec3::`vftable';
  v46 = &pParticleData->ForceFieldPos.OGLVec3;
  if ( pParticleData == (ParticleData *)-832i64 )
    v46 = 0i64;
  result = *v46;
  OGLEffectVec3::operator+(&pParticleData->WorldPos, &v134, &result);
  v47 = &pParticleData->PreForceFieldPos.OGLVec3;
  if ( pParticleData == (ParticleData *)-856i64 )
    v47 = 0i64;
  result = *v47;
  v48 = OGLEffectVec3::operator+(&pParticleData->PreWorldPos, &v133, &result);
  result.x = *v49;
  result.y = v49[1];
  result.z = v49[2];
  v50 = OGLEffectVec3::operator-(v48, &v132, &result);
  if ( v50 )
    v51 = &v50->OGLVec3;
  else
    v51 = 0i64;
  v = *v51;
  v132.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v133.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v134.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v96 = &OGLEffectQuat::`vftable';
  w = (OGLQuat)_xmm;
  q = &OGLEffectQuat::`vftable';
  q_8 = (OGLQuat)_xmm;
  v52 = FLOAT_0_5;
  if ( sqrtf((float)((float)(v.y * v.y) + (float)(v.x * v.x)) + (float)(v.z * v.z)) != 0.0 )
  {
    OGLVec3::normalize(&v, &v);
    first.x = 0.0;
    *(_QWORD *)&first.y = 1065353216i64;
    v117 = &OGLEffectVec3::`vftable';
    *(_QWORD *)&v120.x = 1065353216i64;
    v120.z = 0.0;
    v119 = &OGLEffectVec3::`vftable';
    v100 = &OGLEffectVec3::`vftable';
    second.x = v.z - (float)(v.y * 0.0);
    second.y = (float)(v.x * 0.0) - (float)(v.z * 0.0);
    second.z = (float)(v.y * 0.0) - v.x;
    OGLVec3::normalize(&second, &second);
    AngleBetweenVectors = OGLEffectVec3::getAngleBetweenVectors(&first, &v);
    v105 = &OGLEffectVec3::`vftable';
    v54 = second.z;
    v55 = second.y;
    v106.x = (float)(second.z * 0.0) - (float)(second.y * 0.0);
    v56 = second.x;
    v106.y = (float)(second.x * 0.0) - second.z;
    v106.z = second.y - (float)(second.x * 0.0);
    OGLVec3::normalize(&v106, &v106);
    v57 = OGLEffectVec3::getAngleBetweenVectors(&v120, &second);
    memset(&v139.OGLMatrix, 0, sizeof(v139.OGLMatrix));
    v139.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
    if ( v57 != 0.0 )
    {
      v58 = v106.y;
      v59 = v106.x;
      v60 = v106.z;
      v61 = (float)((float)(v58 * v58) + (float)(v59 * v59)) + (float)(v60 * v60);
      if ( sqrtf(v61) != 0.0 && sqrtf(v61) != 0.0 )
      {
        v62 = v57 * 0.5;
        v63 = sinf(v62);
        q_8.x = v59 * v63;
        q_8.y = v58 * v63;
        q_8.z = v60 * v63;
        q_8.w = cosf(v62);
        OGLQuat::normalize(&q_8);
        OGLEffectMatrix::rotationQuaternion(&v139, q_8.x, q_8.y, q_8.z, q_8.w);
        OGLMatrix::multiply(&pParticleData->WorldMat.OGLMatrix, &v139.OGLMatrix);
      }
      v52 = FLOAT_0_5;
    }
    if ( sqrtf((float)((float)(v55 * v55) + (float)(v56 * v56)) + (float)(v54 * v54)) != 0.0 )
    {
      v65 = AngleBetweenVectors * v52;
      v66 = sinf(v65);
      w.x = v56 * v66;
      w.y = v55 * v66;
      w.z = v54 * v66;
      w.w = cosf(v65);
      OGLQuat::normalize(&w);
      OGLEffectMatrix::rotationQuaternion(&v139, w.x, w.y, w.z, w.w);
      v64 = &v139.OGLMatrix;
      goto LABEL_64;
    }
    if ( (float)(AngleBetweenVectors - 0.00000011920929) <= 3.1415927
      && (float)(AngleBetweenVectors + 0.00000011920929) >= 3.1415927 )
    {
      v137 = &OGLEffectMatrix::`vftable';
      v138[1] = 0i64;
      v138[2] = 0xBF80000000000000ui64;
      v138[3] = 0i64;
      v138[4] = 0i64;
      v138[6] = 0i64;
      v138[7] = 0x3F80000000000000i64;
      v138[0] = 3212836864i64;
      v138[5] = 3212836864i64;
      v64 = (OGLMatrix *)v138;
LABEL_64:
      OGLMatrix::multiply(&pParticleData->WorldMat.OGLMatrix, v64);
    }
  }
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                        - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v67 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v67[2].allButtonIndexData._Mypair._Myval2._Mylast
                        - v67[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v67[2].allButtonIndexData._Mypair._Myval2._Myfirst[5] )
  {
    v78 = v136.m[14];
    v77 = v136.m[13];
    v76 = v136.m[12];
  }
  else
  {
    v115 = 0i64;
    v116 = 0.0;
    v114 = &OGLEffectVec3::`vftable';
    v126 = 0i64;
    v127 = 0;
    v125 = &OGLEffectVec3::`vftable';
    block = 0i64;
    v130 = 0;
    v128 = &OGLEffectVec3::`vftable';
    v68 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v104 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v104);
      v68 = v69;
      BattleSystem::BattleController::instance = v69;
    }
    CameraPos = ActionSystem::GetCameraPos(&v68->actSystem, &result);
    v71 = CameraPos->x;
    *(float *)&v115 = CameraPos->x;
    v72 = CameraPos->y;
    *((float *)&v115 + 1) = v72;
    v73 = CameraPos->z;
    v116 = v73;
    if ( !v74 )
    {
      v104 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v104);
      BattleSystem::BattleController::instance = v75;
    }
    v111 = &OGLEffectQuat::`vftable';
    rotQuat = (OGLQuat)_xmm;
    OGLQuat::multiply(&rotQuat, &q_8);
    OGLQuat::normalize(&rotQuat);
    OGLQuat::multiply(&rotQuat, &w);
    OGLQuat::normalize(&rotQuat);
    v113.x = 0.0;
    *(_QWORD *)&v113.y = 1065353216i64;
    v113.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
    OGLEffectVec3::rotateQuat(&v113, &rotQuat);
    *(_QWORD *)&v93.x = 1065353216i64;
    v93.z = 0.0;
    v93.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
    OGLEffectVec3::rotateQuat(&v93, &rotQuat);
    OGLVec3::normalize(&v93.OGLVec3, &v93.OGLVec3);
    v107 = &OGLEffectVec3::`vftable';
    v76 = v136.m[12];
    v108.x = v71 - v136.m[12];
    v77 = v136.m[13];
    v108.y = v72 - v136.m[13];
    v78 = v136.m[14];
    v108.z = v73 - v136.m[14];
    OGLVec3::normalize(&v108, &v108);
    v102 = &OGLEffectVec3::`vftable';
    v103.x = (float)(v113.y * v108.z) - (float)(v113.z * v108.y);
    v103.y = (float)(v113.z * v108.x) - (float)(v113.x * v108.z);
    v103.z = (float)(v113.x * v108.y) - (float)(v113.y * v108.x);
    OGLVec3::normalize(&v103, &v103);
    v79 = OGLEffectVec3::getAngleBetweenVectors(&v93.OGLVec3, &v103);
    v109 = &OGLEffectVec3::`vftable';
    v110.x = (float)(v93.y * v103.z) - (float)(v93.z * v103.y);
    v110.y = (float)(v93.z * v103.x) - (float)(v103.z * v93.x);
    v110.z = (float)(v103.y * v93.x) - (float)(v93.y * v103.x);
    OGLVec3::normalize(&v110, &v110);
    v80 = v110.y;
    v81 = v110.x;
    v82 = v110.z;
    if ( sqrtf((float)((float)(v80 * v80) + (float)(v81 * v81)) + (float)(v82 * v82)) != 0.0 && v79 != 0.0 )
    {
      v83 = v79 * v52;
      v84 = sinf(v83);
      v85 = v81 * v84;
      v86 = v80 * v84;
      v87 = v82 * v84;
      v88 = cosf(v83);
      memset(&v140.OGLMatrix, 0, sizeof(v140.OGLMatrix));
      v140.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
      OGLEffectMatrix::rotationQuaternion(&v140, v85, v86, v87, v88);
      OGLMatrix::multiply(&pParticleData->WorldMat.OGLMatrix, &v140.OGLMatrix);
    }
  }
  v89 = &pParticleData->GravityPos.OGLVec3;
  if ( pParticleData == (ParticleData *)-928i64 )
    v89 = 0i64;
  v136.m[12] = v76 + v89->x;
  v90 = v77 + v89->y;
  v136.m[13] = v90;
  v91 = v78 + v89->z;
  v136.m[14] = v91;
  v136.m[15] = 1.0;
  pParticleData->WorldMat.m[12] = v136.m[12] + pParticleData->WorldMat.m[12];
  pParticleData->WorldMat.m[13] = v90 + pParticleData->WorldMat.m[13];
  pParticleData->WorldMat.m[14] = v91 + pParticleData->WorldMat.m[14];
  pParticleData->WorldMat.m[15] = 1.0;
  this->calcLightingCoefficientOfFake(this, pParticleData, pEffectData);
}

