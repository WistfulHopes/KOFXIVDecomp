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
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec2.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec2.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particletypestate/particletypestate.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E396
void ParticleTypeStatePlane::InitVertexBuffer(std::vector<ParticleData,std::allocator<ParticleData> > * ParticleData, EffectData * pEmitterData); // 0x14002E7C0
void ParticleTypeStatePlane::calcWorldMat(ParticleData * pParticleData, EffectData * pEffectData); // 0x14014DED0
void ParticleTypeStatePlane::UpdateUVBuffer(EffectUpdateBufferArgument * pUpdateBufferArg, unsigned long particleNum, float * baseData); // 0x14014E410
void ParticleTypeStatePlane::calcLightingCoefficientOfFake(ParticleData * pParticleData, EffectData * pEffectData); // 0x14014E880//decompilation failure at 14089E396!
void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall ParticleTypeStatePlane::UpdateUVBuffer(
        ParticleTypeStatePlane *this,
        EffectUpdateBufferArgument *pUpdateBufferArg,
        unsigned int particleNum,
        float *baseData)
{
  ParticleData *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r12
  int AnimationNum; // esi
  EffectData *pEffectData; // rbx
  DialogData *Myfirst; // rax
  int v14; // er8
  DialogData *v15; // rcx
  float v16; // xmm0_4
  int v17; // er8
  DialogData *v18; // rax
  float v19; // xmm6_4
  float v20; // xmm12_4
  DialogData *v21; // rcx
  float v22; // xmm11_4
  float v23; // xmm6_4
  float v24; // xmm8_4
  float v25; // xmm7_4
  __m128 v26; // xmm14
  float v27; // xmm9_4
  float v28; // xmm15_4
  float v29; // xmm10_4
  signed int v30; // edi
  __int64 v31; // rsi
  signed int vertexCount; // ebx
  __m128 v33; // xmm3
  __m128 v34; // xmm2

  if ( pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast
     - pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst <= (unsigned __int64)particleNum )
    std::_Xout_of_range("invalid vector<T> subscript");
  v8 = pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst[particleNum];
  v9 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 2507504i64);
  v10 = *(int *)(v9 + 2256);
  AnimationNum = ParticleTypeState::GetAnimationNum(
                   (ParticleTypeState *)v9,
                   v8,
                   pUpdateBufferArg->pEffectData,
                   COLOR1_TEXTURE);
  pEffectData = pUpdateBufferArg->pEffectData;
  Myfirst = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[3].allEditNumData._Mypair._Myval2._Mylast - Myfirst[3].allEditNumData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  v14 = (int)*Myfirst[3].allEditNumData._Mypair._Myval2._Myfirst;
  v15 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v15[3].allEditNumData._Mypair._Myval2._Mylast - v15[3].allEditNumData._Mypair._Myval2._Myfirst) <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( (unsigned __int64)(v15[3].allEditNumData._Mypair._Myval2._Mylast - v15[3].allEditNumData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v15[3].allEditNumData._Mypair._Myval2._Myfirst[2] <= (float)(v14
                                                                  * (int)v15[3].allEditNumData._Mypair._Myval2._Myfirst[1]) )
  {
    v16 = (float)v14;
  }
  else
  {
    if ( (unsigned __int64)(v15[3].allEditNumData._Mypair._Myval2._Mylast
                          - v15[3].allEditNumData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v16 = sqrtf(v15[3].allEditNumData._Mypair._Myval2._Myfirst[2]);
  }
  v17 = AnimationNum / (int)v16;
  v18 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v18[3].allEditNumData._Mypair._Myval2._Mylast - v18[3].allEditNumData._Mypair._Myval2._Myfirst) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v19 = v8->age - 1.0;
  v20 = v19 * v18[3].allEditNumData._Mypair._Myval2._Myfirst[5];
  v21 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v21[3].allEditNumData._Mypair._Myval2._Mylast - v21[3].allEditNumData._Mypair._Myval2._Myfirst) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v22 = v19 * v21[3].allEditNumData._Mypair._Myval2._Myfirst[4];
  if ( (unsigned __int64)(v21[3].allEditNumData._Mypair._Myval2._Mylast - v21[3].allEditNumData._Mypair._Myval2._Myfirst) <= 6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v23 = (float)((float)(v19 * v21[3].allEditNumData._Mypair._Myval2._Myfirst[6]) * 3.1415927) / 180.0;
  if ( !(v21[3].allEditNumData._Mypair._Myval2._Mylast - v21[3].allEditNumData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  v24 = 1.0 / *v21[3].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v21[3].allEditNumData._Mypair._Myval2._Mylast - v21[3].allEditNumData._Mypair._Myval2._Myfirst) <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v25 = 1.0 / v21[3].allEditNumData._Mypair._Myval2._Myfirst[1];
  v26 = (__m128)COERCE_UNSIGNED_INT((float)(AnimationNum % (int)v16));
  v27 = (float)(v26.m128_f32[0] * v24) + (float)(v24 * 0.5);
  v28 = (float)v17;
  v29 = (float)((float)v17 * v25) + (float)(v25 * 0.5);
  v30 = 0;
  v31 = v10;
  vertexCount = this->m_EffectMeshData[v10].vertexCount;
  if ( vertexCount > 0 )
  {
    sinf(v23);
    cosf(v23);
    do
    {
      v33 = v26;
      v33.m128_f32[0] = (float)((float)(v26.m128_f32[0] + *baseData) * v24) - v27;
      v34 = v33;
      v34.m128_f32[0] = (float)((float)((float)(v33.m128_f32[0] * v23)
                                      - (float)((float)((float)((float)(v28 + baseData[1]) * v25) - v29) * v23))
                              + v27)
                      + v20;
      v33.m128_f32[0] = (float)((float)((float)(v33.m128_f32[0] * v23)
                                      + (float)((float)((float)((float)(v28 + baseData[1]) * v25) - v29) * v23))
                              + v29)
                      + v22;
      this->m_EffectMeshData[v31].vertexBuffer[(unsigned __int64)(v30 + particleNum * vertexCount)].m_texture = (Vector2Unaligned)_mm_unpacklo_ps(v34, v33).m128_u64[0];
      ++v30;
      baseData += 2;
      vertexCount = this->m_EffectMeshData[v31].vertexCount;
    }
    while ( v30 < vertexCount );
  }
}

void __fastcall ParticleTypeStatePlane::calcLightingCoefficientOfFake(
        ParticleTypeStatePlane *this,
        ParticleData *pParticleData,
        EffectData *pEffectData)
{
  DialogData *Myfirst; // rcx
  DialogData *v7; // rcx
  DialogData *v8; // rcx
  float *m_pfVertexBuffer; // rsi
  OGLMatrix *v10; // rax
  float v11; // xmm2_4
  float v12; // xmm6_4
  float v13; // xmm3_4
  float v14; // xmm5_4
  float v15; // xmm12_4
  float v16; // xmm13_4
  float v17; // xmm4_4
  float v18; // xmm6_4
  float *v19; // rbx
  float v20; // xmm7_4
  float v21; // xmm0_4
  int v22; // xmm4_4
  OGLMatrix *v23; // rax
  float v24; // xmm2_4
  float v25; // xmm9_4
  float v26; // xmm6_4
  float v27; // xmm4_4
  float v28; // xmm5_4
  float v29; // xmm3_4
  float v30; // xmm6_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  OGLMatrix *v33; // rax
  int v34; // xmm4_4
  float v35; // xmm10_4
  float v36; // xmm6_4
  float v37; // xmm4_4
  float v38; // xmm5_4
  float v39; // xmm3_4
  float v40; // xmm6_4
  float v41; // xmm0_4
  float v42; // xmm2_4
  OGLMatrix *v43; // rax
  float v44; // xmm6_4
  float v45; // xmm11_4
  int v46; // xmm4_4
  float v47; // xmm4_4
  float v48; // xmm5_4
  float v49; // xmm3_4
  float v50; // xmm6_4
  float v51; // xmm3_4
  __int64 v52; // rcx
  char v53; // dl
  char v54; // r8
  float v55; // xmm1_4
  float v56; // xmm0_4
  float v57; // xmm0_4
  float v58; // xmm0_4
  DialogData *v59; // rcx
  float v60; // xmm12_4
  float v61; // xmm2_4
  int v62[8]; // [rsp+20h] [rbp-D8h]

  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                        - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  Myfirst = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[2].allComboIndexData._Mypair._Myval2._Mylast - Myfirst[2].allComboIndexData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *Myfirst[2].allComboIndexData._Mypair._Myval2._Myfirst == 4 )
    goto LABEL_47;
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                        - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v7 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(v7[2].allComboIndexData._Mypair._Myval2._Mylast - v7[2].allComboIndexData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *v7[2].allComboIndexData._Mypair._Myval2._Myfirst == 5 )
    goto LABEL_47;
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                        - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v8 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v8[2].allButtonIndexData._Mypair._Myval2._Mylast
                        - v8[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 0xC )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v8[2].allButtonIndexData._Mypair._Myval2._Myfirst[12] != 1 )
  {
LABEL_47:
    pParticleData->LightingCoefficientOfFake.x = 1.0;
    pParticleData->LightingCoefficientOfFake.y = 1.0;
    pParticleData->LightingCoefficientOfFake.z = 1.0;
    pParticleData->LightingCoefficientOfFake.w = 1.0;
  }
  else
  {
    m_pfVertexBuffer = (float *)this->m_FigureData->m_pfVertexBuffer;
    v10 = &pParticleData->WorldMat.OGLMatrix;
    v11 = *m_pfVertexBuffer;
    if ( pParticleData == (ParticleData *)-40i64 )
      v10 = 0i64;
    v12 = m_pfVertexBuffer[1];
    LODWORD(v13) = *((_DWORD *)m_pfVertexBuffer + 2) ^ _xmm;
    v14 = (float)(v12 * v10->m[5]) + (float)(v11 * v10->m[1]);
    v15 = 0.0;
    v16 = 0.0;
    v17 = (float)((float)((float)(v12 * v10->m[6]) + (float)(v11 * v10->m[2])) + (float)(v13 * v10->m[10])) + v10->m[14];
    v18 = (float)((float)((float)(v12 * v10->m[4]) + (float)(v11 * v10->m[0])) + (float)(v13 * v10->m[8])) + v10->m[12];
    v19 = *(float **)(*(_QWORD *)&AppMain::pApp + 2507504i64);
    v20 = v19[58];
    v21 = sqrtf(
            (float)((float)((float)((float)((float)(v14 + (float)(v13 * v10->m[9])) + v10->m[13]) - v19[59])
                          * (float)((float)((float)(v14 + (float)(v13 * v10->m[9])) + v10->m[13]) - v19[59]))
                  + (float)((float)(v18 - v20) * (float)(v18 - v20)))
          + (float)((float)(v17 - v19[60]) * (float)(v17 - v19[60])));
    v22 = *((_DWORD *)m_pfVertexBuffer + 36);
    v23 = &pParticleData->WorldMat.OGLMatrix;
    v24 = m_pfVertexBuffer[34];
    v25 = v21;
    v26 = m_pfVertexBuffer[35];
    *(float *)v62 = v21;
    if ( pParticleData == (ParticleData *)-40i64 )
      v23 = 0i64;
    LODWORD(v27) = v22 ^ _xmm;
    v28 = (float)((float)((float)((float)(v26 * v23->m[5]) + (float)(v24 * v23->m[1])) + (float)(v27 * v23->m[9]))
                + v23->m[13])
        - v19[59];
    v29 = (float)((float)((float)((float)(v26 * v23->m[6]) + (float)(v24 * v23->m[2])) + (float)(v27 * v23->m[10]))
                + v23->m[14])
        - v19[60];
    v30 = (float)((float)((float)((float)(v26 * v23->m[4]) + (float)(v24 * v23->m[0])) + (float)(v27 * v23->m[8]))
                + v23->m[12])
        - v20;
    v31 = sqrtf((float)((float)(v28 * v28) + (float)(v30 * v30)) + (float)(v29 * v29));
    v32 = m_pfVertexBuffer[68];
    v33 = &pParticleData->WorldMat.OGLMatrix;
    v34 = *((_DWORD *)m_pfVertexBuffer + 70);
    v35 = v31;
    v36 = m_pfVertexBuffer[69];
    *(float *)&v62[1] = v31;
    LODWORD(v37) = v34 ^ _xmm;
    if ( pParticleData == (ParticleData *)-40i64 )
      v33 = 0i64;
    v38 = (float)((float)((float)((float)(v36 * v33->m[5]) + (float)(v32 * v33->m[1])) + (float)(v37 * v33->m[9]))
                + v33->m[13])
        - v19[59];
    v39 = (float)((float)((float)((float)(v36 * v33->m[6]) + (float)(v32 * v33->m[2])) + (float)(v37 * v33->m[10]))
                + v33->m[14])
        - v19[60];
    v40 = (float)((float)((float)((float)(v36 * v33->m[4]) + (float)(v32 * v33->m[0])) + (float)(v37 * v33->m[8]))
                + v33->m[12])
        - v20;
    v41 = sqrtf((float)((float)(v38 * v38) + (float)(v40 * v40)) + (float)(v39 * v39));
    v42 = m_pfVertexBuffer[102];
    v43 = &pParticleData->WorldMat.OGLMatrix;
    v44 = m_pfVertexBuffer[103];
    v45 = v41;
    v46 = *((_DWORD *)m_pfVertexBuffer + 104);
    *(float *)&v62[2] = v41;
    if ( pParticleData == (ParticleData *)-40i64 )
      v43 = 0i64;
    LODWORD(v47) = v46 ^ _xmm;
    v48 = (float)((float)((float)((float)(v44 * v43->m[5]) + (float)(v42 * v43->m[1])) + (float)(v47 * v43->m[9]))
                + v43->m[13])
        - v19[59];
    v49 = (float)((float)((float)((float)(v44 * v43->m[6]) + (float)(v42 * v43->m[2])) + (float)(v47 * v43->m[10]))
                + v43->m[14])
        - v19[60];
    v50 = (float)((float)((float)((float)(v44 * v43->m[4]) + (float)(v42 * v43->m[0])) + (float)(v47 * v43->m[8]))
                + v43->m[12])
        - v20;
    v51 = sqrtf((float)((float)(v48 * v48) + (float)(v50 * v50)) + (float)(v49 * v49));
    v52 = 0i64;
    *(float *)&v62[3] = v51;
    do
    {
      v53 = 1;
      v54 = 1;
      if ( v52 )
      {
        v55 = *(float *)&v62[v52];
        v53 = 1;
        v54 = 1;
        if ( v25 > v55 )
          v53 = 0;
        if ( v55 > v25 )
          v54 = 0;
      }
      if ( v52 != 1 )
      {
        v56 = *(float *)&v62[v52];
        if ( v35 > v56 )
          v53 = 0;
        if ( v56 > v35 )
          v54 = 0;
      }
      if ( v52 != 2 )
      {
        v57 = *(float *)&v62[v52];
        if ( v45 > v57 )
          v53 = 0;
        if ( v57 > v45 )
          v54 = 0;
      }
      if ( v52 != 3 )
      {
        v58 = *(float *)&v62[v52];
        if ( v51 > v58 )
          v53 = 0;
        if ( v58 > v51 )
          v54 = 0;
      }
      if ( v53 == 1 )
      {
        v15 = *(float *)&v62[v52];
      }
      else if ( v54 == 1 )
      {
        v16 = *(float *)&v62[v52];
        v62[v52 + 4] = 1065353216;
      }
      ++v52;
    }
    while ( v52 < 4 );
    if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                          - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v59 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v59[2].allEditNumData._Mypair._Myval2._Mylast
                          - v59[2].allEditNumData._Mypair._Myval2._Myfirst) <= 0xD )
      std::_Xout_of_range("invalid vector<T> subscript");
    v60 = v15 - v16;
    v61 = v59[2].allEditNumData._Mypair._Myval2._Myfirst[13] / 100.0;
    pParticleData->LightingCoefficientOfFake.x = 1.0 - (float)((float)((float)(v25 - v16) / v60) * v61);
    pParticleData->LightingCoefficientOfFake.y = 1.0 - (float)((float)((float)(v35 - v16) / v60) * v61);
    pParticleData->LightingCoefficientOfFake.z = 1.0 - (float)((float)((float)(v45 - v16) / v60) * v61);
    pParticleData->LightingCoefficientOfFake.w = 1.0 - (float)((float)((float)(v51 - v16) / v60) * v61);
  }
}

void __fastcall ParticleTypeStatePlane::calcWorldMat(
        ParticleTypeStatePlane *this,
        ParticleData *pParticleData,
        EffectData *pEffectData)
{
  DialogData *Myfirst; // rcx
  OGLMatrix *v7; // rax
  __int128 v8; // xmm4
  OGLVec3 *v9; // rcx
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm6_4
  DialogData *v13; // rcx
  OGLMatrix *v14; // rdx
  OGLMatrix *v15; // rcx
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm4_4
  float z; // xmm2_4
  float y; // xmm1_4
  float x; // xmm0_4
  DialogData *v22; // rcx
  float *v23; // rdx
  DialogData *v24; // rcx
  DialogData *v25; // rcx
  OGLVec3 *v26; // rcx
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // [rsp+3Ch] [rbp-6Dh]
  float v30; // [rsp+40h] [rbp-69h]
  void **v31; // [rsp+60h] [rbp-49h] BYREF
  OGLMatrix In; // [rsp+68h] [rbp-41h] BYREF

  memset(&In, 0, sizeof(In));
  v31 = &OGLEffectMatrix::`vftable';
  if ( !(pEffectData->AllDialogData._Mypair._Myval2._Mylast - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  Myfirst = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst->allButtonIndexData._Mypair._Myval2._Mylast
                        - Myfirst->allButtonIndexData._Mypair._Myval2._Myfirst) <= 6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( Myfirst->allButtonIndexData._Mypair._Myval2._Myfirst[6] )
  {
    this->followCamera(this, pParticleData, (OGLEffectMatrix *)&v31, pEffectData);
  }
  else
  {
    v7 = &pParticleData->GlobalMat.OGLMatrix;
    if ( pParticleData == (ParticleData *)-112i64 )
      v7 = 0i64;
    *(_OWORD *)In.m = *(_OWORD *)v7->m;
    *(_OWORD *)&In.m[4] = *(_OWORD *)&v7->m[4];
    *(_OWORD *)&In.m[8] = *(_OWORD *)&v7->m[8];
    v8 = *(_OWORD *)&v7->m[12];
    *(_OWORD *)&In.m[12] = v8;
    v9 = &pParticleData->ForceFieldPos.OGLVec3;
    if ( pParticleData == (ParticleData *)-832i64 )
      v9 = 0i64;
    v10 = *(float *)&v8 + v9->x;
    In.m[12] = v10;
    v11 = In.m[13] + v9->y;
    In.m[13] = v11;
    v12 = In.m[14] + v9->z;
    In.m[14] = v12;
    In.m[15] = 1.0;
    if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                          - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v13 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v13[2].allButtonIndexData._Mypair._Myval2._Mylast
                          - v13[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( v13[2].allButtonIndexData._Mypair._Myval2._Myfirst[6] )
    {
      v15 = &pParticleData->ActMat.OGLMatrix;
      if ( pParticleData == (ParticleData *)-472i64 )
        v15 = 0i64;
      v16 = (float)((float)((float)(v11 * v15->m[4]) + (float)(v10 * v15->m[0])) + (float)(v12 * v15->m[8]))
          + v15->m[12];
      v17 = (float)((float)((float)(v10 * v15->m[1]) + (float)(v11 * v15->m[5])) + (float)(v12 * v15->m[9]))
          + v15->m[13];
      v18 = (float)((float)((float)(v10 * v15->m[2]) + (float)(v11 * v15->m[6])) + (float)(v12 * v15->m[10]))
          + v15->m[14];
      In.m[12] = v16;
      In.m[13] = v17;
      In.m[14] = v18;
    }
    else
    {
      v14 = &pParticleData->ActMat.OGLMatrix;
      if ( pParticleData == (ParticleData *)-472i64 )
        v14 = 0i64;
      OGLMatrix::multiply(&In, v14);
    }
  }
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
  v22 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v22[2].allEditNumData._Mypair._Myval2._Mylast - v22[2].allEditNumData._Mypair._Myval2._Myfirst) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v23 = v22[2].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v22[2].allEditNumData._Mypair._Myval2._Mylast - v23) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v29 = v23[3] * y;
  v30 = pParticleData->LocalScale.z * 0.0;
  pParticleData->WorldMat.m[12] = (float)(v23[2] * x) + pParticleData->WorldMat.m[12];
  pParticleData->WorldMat.m[13] = v29 + pParticleData->WorldMat.m[13];
  pParticleData->WorldMat.m[14] = v30 + pParticleData->WorldMat.m[14];
  pParticleData->WorldMat.m[15] = 1.0;
  OGLMatrix::multiplyRotate(&pParticleData->WorldMat.OGLMatrix, &In);
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                        - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v24 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(v24[2].allComboIndexData._Mypair._Myval2._Mylast - v24[2].allComboIndexData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *v24[2].allComboIndexData._Mypair._Myval2._Myfirst == 2 )
  {
    if ( (unsigned __int64)(v24[2].allButtonIndexData._Mypair._Myval2._Mylast
                          - v24[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->rotationAxisBillboard(
      this,
      pParticleData,
      (OGLEffectMatrix *)&v31,
      pEffectData,
      v24[2].allButtonIndexData._Mypair._Myval2._Myfirst[1]);
  }
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                        - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v25 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(v25[2].allComboIndexData._Mypair._Myval2._Mylast - v25[2].allComboIndexData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *v25[2].allComboIndexData._Mypair._Myval2._Myfirst == 1 )
    this->rotationBillboard(this, pParticleData, (OGLEffectMatrix *)&v31, pEffectData);
  v26 = &pParticleData->GravityPos.OGLVec3;
  if ( pParticleData == (ParticleData *)-928i64 )
    v26 = 0i64;
  In.m[12] = In.m[12] + v26->x;
  In.m[13] = In.m[13] + v26->y;
  v27 = In.m[13];
  In.m[14] = In.m[14] + v26->z;
  v28 = In.m[14];
  In.m[15] = 1.0;
  pParticleData->WorldMat.m[12] = In.m[12] + pParticleData->WorldMat.m[12];
  pParticleData->WorldMat.m[13] = v27 + pParticleData->WorldMat.m[13];
  pParticleData->WorldMat.m[14] = v28 + pParticleData->WorldMat.m[14];
  pParticleData->WorldMat.m[15] = 1.0;
  this->calcLightingCoefficientOfFake(this, pParticleData, pEffectData);
}

