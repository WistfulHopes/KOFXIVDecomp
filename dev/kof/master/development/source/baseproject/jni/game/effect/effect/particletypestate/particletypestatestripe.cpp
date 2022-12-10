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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec4.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particletypestate/particletypestatestripe.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec2.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/d3dmath.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particletypestate/particletypestate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E398
ParticleTypeStateStripe::ParticleTypeStateStripe(); // 0x14014F1B0
ParticleTypeStateStripe::~ParticleTypeStateStripe(); // 0x14014F270
void ParticleTypeStateStripe::loadFigure(const char * filename); // 0x14014F2F0
void ParticleTypeStateStripe::calcWorldMat(ParticleData * pParticleData, EffectData * pEffectData); // 0x14014F910
void ParticleTypeStateStripe::UpdateVertexBuffer(EffectUpdateBufferArgument * pUpdateBufferArg); // 0x140150450
void ParticleTypeStateStripe::UpdateParticleTypeState(EffectUpdateBufferArgument * pUpdateBufferArg); // 0x140150810
void ParticleTypeStateStripe::UpdateParticleTypeStateInBT(EffectUpdateBufferArgument * pUpdateBufferArg); // 0x14002E7C0
void ParticleTypeStateStripe::UpdateInterpolationVertexBuffer(EffectUpdateBufferArgument * pUpdateBufferArg); // 0x140153200
void ParticleTypeStateStripe::Render(EffectRenderArgument * pRenderArg); // 0x140153CD0//decompilation failure at 14089E398!
OGLEffectVec4 *__fastcall OGLEffectVec4::operator*<int>(
        OGLEffectVec4 *this,
        OGLEffectVec4 *result,
        const int *scaleFactor)
{
  OGLEffectVec4 *v3; // rax

  *(_QWORD *)&result->x = 0i64;
  *(_QWORD *)&result->z = 0i64;
  result->__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec4::`vftable';
  v3 = result;
  result->x = (float)*scaleFactor * this->x;
  result->y = (float)*scaleFactor * this->y;
  result->z = (float)*scaleFactor * this->z;
  result->w = (float)*scaleFactor * this->w;
  return v3;
}

OGLEffectVec4 *__fastcall OGLEffectVec4::operator/<int>(
        OGLEffectVec4 *this,
        OGLEffectVec4 *result,
        const int *scaleFactor)
{
  OGLEffectVec4 *v3; // rax

  *(_QWORD *)&result->x = 0i64;
  *(_QWORD *)&result->z = 0i64;
  result->__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec4::`vftable';
  v3 = result;
  result->x = this->x / (float)*scaleFactor;
  result->y = this->y / (float)*scaleFactor;
  result->z = this->z / (float)*scaleFactor;
  result->w = this->w / (float)*scaleFactor;
  return v3;
}

OGLEffectVec4 *__fastcall OGLEffectVec4::operator/<float>(
        OGLEffectVec4 *this,
        OGLEffectVec4 *result,
        const float *scaleFactor)
{
  OGLEffectVec4 *v3; // rax

  *(_QWORD *)&result->x = 0i64;
  *(_QWORD *)&result->z = 0i64;
  result->__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec4::`vftable';
  v3 = result;
  result->x = this->x / *scaleFactor;
  result->y = this->y / *scaleFactor;
  result->z = this->z / *scaleFactor;
  result->w = this->w / *scaleFactor;
  return v3;
}

ParticleVertexBuffer *__fastcall std::_Uninitialized_move_al_unchecked1<ParticleVertexBuffer *,ParticleVertexBuffer *,std::allocator<ParticleVertexBuffer>>(
        ParticleVertexBuffer *_First,
        ParticleVertexBuffer *_Last,
        ParticleVertexBuffer *_Dest,
        std::_Wrap_alloc<std::allocator<ParticleVertexBuffer> > *_Al)
{
  float *p_z; // r9
  float *v5; // rcx

  if ( _First != _Last )
  {
    p_z = &_Dest->normal.z;
    v5 = &_First->normal.z;
    do
    {
      if ( _Dest )
      {
        _Dest->position.x = *(v5 - 5);
        *(p_z - 4) = *(v5 - 4);
        *(p_z - 3) = *(v5 - 3);
        *(p_z - 2) = *(v5 - 2);
        *(p_z - 1) = *(v5 - 1);
        *p_z = *v5;
        p_z[1] = v5[1];
        p_z[2] = v5[2];
        p_z[3] = v5[3];
        *((_OWORD *)p_z + 1) = *((_OWORD *)v5 + 1);
        *((_QWORD *)p_z + 4) = *((_QWORD *)v5 + 4);
      }
      ++_Dest;
      p_z += 15;
      v5 += 15;
    }
    while ( v5 - 5 != (float *)_Last );
  }
  return _Dest;
}

void __fastcall ParticleTypeStateStripe::ParticleTypeStateStripe(ParticleTypeStateStripe *this)
{
  __int64 v1; // r11
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx

  ParticleTypeState::ParticleTypeState(this);
  *(_QWORD *)v1 = &ParticleTypeStateStripe::`vftable';
  v2 = (_QWORD *)(v1 + 200);
  *(_QWORD *)(v1 + 1200) = 0i64;
  v3 = v1 + 1168;
  *(_QWORD *)(v1 + 1208) = 0i64;
  *(_QWORD *)(v1 + 1216) = 0i64;
  v4 = 2i64;
  *(_QWORD *)(v1 + 1184) = 0i64;
  *(_BYTE *)(v1 + 1192) = 0;
  do
  {
    *(v2 - 15) = 0i64;
    v3 += 4i64;
    *v2 = 0i64;
    v2 += 21;
    *(_DWORD *)(v3 - 12) = 0;
    *(_DWORD *)(v3 - 4) = 0;
    --v4;
  }
  while ( v4 );
}

void __fastcall std::vector<ParticleVertexBuffer>::~vector<ParticleVertexBuffer>(
        std::vector<ParticleVertexBuffer> *this)
{
  std::_Wrap_alloc<std::allocator<ParticleVertexBuffer> > *Myfirst; // rcx

  Myfirst = (std::_Wrap_alloc<std::allocator<ParticleVertexBuffer> > *)this->_Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<ParticleVertexBuffer>>::deallocate(
      Myfirst,
      (ParticleVertexBuffer *)Myfirst,
      ((char *)this->_Mypair._Myval2._Myend - (char *)Myfirst) / 60);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall ParticleTypeStateStripe::~ParticleTypeStateStripe(ParticleTypeStateStripe *this)
{
  std::_Wrap_alloc<std::allocator<ParticleVertexBuffer> > *Myfirst; // rcx

  this->__vftable = (ParticleTypeStateStripe_vtbl *)&ParticleTypeStateStripe::`vftable';
  Myfirst = (std::_Wrap_alloc<std::allocator<ParticleVertexBuffer> > *)this->InterpolationVertex._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<ParticleVertexBuffer>>::deallocate(
      Myfirst,
      (ParticleVertexBuffer *)Myfirst,
      ((char *)this->InterpolationVertex._Mypair._Myval2._Myend - (char *)Myfirst) / 60);
    this->InterpolationVertex._Mypair._Myval2._Myfirst = 0i64;
    this->InterpolationVertex._Mypair._Myval2._Mylast = 0i64;
    this->InterpolationVertex._Mypair._Myval2._Myend = 0i64;
  }
  this->__vftable = (ParticleTypeStateStripe_vtbl *)&ParticleTypeState::`vftable';
  ParticleTypeState::terminate(this);
}

void __fastcall ParticleTypeStateStripe::Render(ParticleTypeStateStripe *this, EffectRenderArgument *pRenderArg)
{
  float *p_zOffset; // r14
  int *p_renderOpt; // rsi
  OGLRender *v6; // rbp
  EffectData *pEffectData; // r10
  DialogData *Myfirst; // r8
  __int64 v9; // rbx
  __int64 v10; // rbx
  BlendProjData *v11; // rdx
  BlendProjData *v12; // rdx
  int *pEffectConstData; // [rsp+20h] [rbp-28h]

  p_zOffset = &pRenderArg->zOffset;
  p_renderOpt = &pRenderArg->renderOpt;
  if ( ((unsigned __int8 (__fastcall *)(ParticleTypeStateStripe *, EffectData *, _QWORD))this->RenderErrorCheck)(
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
      OGLRender::drawEffectIndex(v6, v11, &this->m_TextureData, &this->m_EffectMeshData[v10]);
      if ( this->stripeType == STRIPE_TYPE_CROSS )
        OGLRender::drawEffectIndex(v6, v12, &this->m_TextureData, &this->m_EffectMeshData[v10]);
    }
  }
}

void __fastcall ParticleTypeStateStripe::UpdateInterpolationVertexBuffer(
        ParticleTypeStateStripe *this,
        EffectUpdateBufferArgument *pUpdateBufferArg)
{
  EffectUpdateBufferArgument *v2; // rdi
  int v4; // er13
  __int64 v5; // r8
  int v6; // er11
  __int64 v7; // r12
  unsigned __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // r9
  ParticleVertexBuffer *v11; // rsi
  float v12; // eax
  __int64 v13; // r14
  MeshVertexInfo2D *vertexBuffer; // rcx
  ParticleVertexBuffer *v15; // rsi
  MeshVertexInfo2D *v16; // rcx
  float v17; // eax
  ParticleVertexBuffer *v18; // rsi
  ParticleVertexBuffer *v19; // r15
  ParticleVertexBuffer *v20; // rdi
  __m128 y_low; // xmm1
  MeshVertexInfo2D *v22; // rax
  __m128 x_low; // xmm0
  ParticleVertexBuffer *Myfirst; // rsi
  float v25; // eax
  __int64 v26; // r14
  MeshVertexInfo2D *crossBuffer; // rcx
  ParticleVertexBuffer *v28; // rsi
  MeshVertexInfo2D *v29; // rcx
  float z; // eax
  ParticleVertexBuffer *v31; // rsi
  ParticleVertexBuffer *v32; // r15
  ParticleVertexBuffer *v33; // rdi
  __int64 v34; // r8
  Vector4Unaligned v35; // [rsp+60h] [rbp-19h]
  Vector4Unaligned v36; // [rsp+70h] [rbp-9h]
  Vector4Unaligned v37; // [rsp+80h] [rbp+7h]

  v2 = pUpdateBufferArg;
  ((void (__fastcall *)(ParticleTypeStateStripe *))this->UpdateParticleTypeState)(this);
  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 2507504i64);
  v6 = *(_DWORD *)(v5 + 2256);
  if ( this->InterpolationVertex._Mypair._Myval2._Mylast - this->InterpolationVertex._Mypair._Myval2._Myfirst )
  {
    v7 = *(int *)(v5 + 2256);
    v8 = 0i64;
    v9 = 0i64;
    v10 = 0i64;
    do
    {
      if ( this->crossFlag )
      {
        if ( !this->m_crossVertexMemoryCount[v7] )
          break;
        Myfirst = this->InterpolationVertex._Mypair._Myval2._Myfirst;
        if ( this->InterpolationVertex._Mypair._Myval2._Mylast - Myfirst <= v8 )
          std::_Xout_of_range("invalid vector<T> subscript");
        LODWORD(v25) = LODWORD(Myfirst[v10].position.z) ^ _xmm;
        v26 = v7;
        crossBuffer = this->m_EffectMeshData[v7].crossBuffer;
        *(_QWORD *)&crossBuffer[v9].m_position.x = _mm_unpacklo_ps(
                                                     (__m128)LODWORD(Myfirst[v10].position.x),
                                                     (__m128)LODWORD(Myfirst[v10].position.y)).m128_u64[0];
        crossBuffer[v9].m_position.z = v25;
        v28 = this->InterpolationVertex._Mypair._Myval2._Myfirst;
        if ( this->InterpolationVertex._Mypair._Myval2._Mylast - v28 <= v8 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v29 = this->m_EffectMeshData[v26].crossBuffer;
        z = v28[v10].normal.z;
        *(_QWORD *)&v29[v9].m_normal.x = _mm_unpacklo_ps(
                                           (__m128)LODWORD(v28[v10].normal.x),
                                           (__m128)LODWORD(v28[v10].normal.y)).m128_u64[0];
        v29[v9].m_normal.z = z;
        v31 = this->InterpolationVertex._Mypair._Myval2._Myfirst;
        if ( this->InterpolationVertex._Mypair._Myval2._Mylast - v31 <= v8 )
          std::_Xout_of_range("invalid vector<T> subscript");
        *(_QWORD *)&v37.x = *(_QWORD *)&v31[v10].tangent.x;
        *(_QWORD *)&v37.z = LODWORD(v31[v10].tangent.z);
        this->m_EffectMeshData[v26].crossBuffer[v9].m_tangent = v37;
        v32 = this->InterpolationVertex._Mypair._Myval2._Myfirst;
        if ( this->InterpolationVertex._Mypair._Myval2._Mylast - v32 <= v8 )
          std::_Xout_of_range("invalid vector<T> subscript");
        this->m_EffectMeshData[v26].crossBuffer[v9].m_color = (Vector4Unaligned)v32[v10].color;
        v33 = this->InterpolationVertex._Mypair._Myval2._Myfirst;
        if ( this->InterpolationVertex._Mypair._Myval2._Mylast - v33 <= v8 )
          std::_Xout_of_range("invalid vector<T> subscript");
        y_low = (__m128)LODWORD(v33[v10].uv.y);
        v22 = this->m_EffectMeshData[v26].crossBuffer;
        x_low = (__m128)LODWORD(v33[v10].uv.x);
      }
      else
      {
        if ( !this->m_VertexMemoryCount[v7] )
          break;
        v11 = this->InterpolationVertex._Mypair._Myval2._Myfirst;
        if ( this->InterpolationVertex._Mypair._Myval2._Mylast - v11 <= v8 )
          std::_Xout_of_range("invalid vector<T> subscript");
        LODWORD(v12) = LODWORD(v11[v10].position.z) ^ _xmm;
        v13 = v7;
        vertexBuffer = this->m_EffectMeshData[v7].vertexBuffer;
        *(_QWORD *)&vertexBuffer[v9].m_position.x = _mm_unpacklo_ps(
                                                      (__m128)LODWORD(v11[v10].position.x),
                                                      (__m128)LODWORD(v11[v10].position.y)).m128_u64[0];
        vertexBuffer[v9].m_position.z = v12;
        v15 = this->InterpolationVertex._Mypair._Myval2._Myfirst;
        if ( this->InterpolationVertex._Mypair._Myval2._Mylast - v15 <= v8 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v16 = this->m_EffectMeshData[v13].vertexBuffer;
        v17 = v15[v10].normal.z;
        *(_QWORD *)&v16[v9].m_normal.x = _mm_unpacklo_ps(
                                           (__m128)LODWORD(v15[v10].normal.x),
                                           (__m128)LODWORD(v15[v10].normal.y)).m128_u64[0];
        v16[v9].m_normal.z = v17;
        v18 = this->InterpolationVertex._Mypair._Myval2._Myfirst;
        if ( this->InterpolationVertex._Mypair._Myval2._Mylast - v18 <= v8 )
          std::_Xout_of_range("invalid vector<T> subscript");
        *(_QWORD *)&v35.x = *(_QWORD *)&v18[v10].tangent.x;
        *(_QWORD *)&v35.z = LODWORD(v18[v10].tangent.z);
        this->m_EffectMeshData[v13].vertexBuffer[v9].m_tangent = v35;
        v19 = this->InterpolationVertex._Mypair._Myval2._Myfirst;
        if ( this->InterpolationVertex._Mypair._Myval2._Mylast - v19 <= v8 )
          std::_Xout_of_range("invalid vector<T> subscript");
        *(_QWORD *)&v36.x = *(_QWORD *)&v19[v10].color.x;
        v36.w = v19[v10].color.w * this->m_pParticleEmitter->m_ActArg.alpha;
        v36.z = v19[v10].color.z;
        this->m_EffectMeshData[v13].vertexBuffer[v9].m_color = v36;
        v20 = this->InterpolationVertex._Mypair._Myval2._Myfirst;
        if ( this->InterpolationVertex._Mypair._Myval2._Mylast - v20 <= v8 )
          std::_Xout_of_range("invalid vector<T> subscript");
        y_low = (__m128)LODWORD(v20[v10].uv.y);
        v22 = this->m_EffectMeshData[v13].vertexBuffer;
        x_low = (__m128)LODWORD(v20[v10].uv.x);
      }
      ++v4;
      v22[v9].m_texture = (Vector2Unaligned)_mm_unpacklo_ps(x_low, y_low).m128_u64[0];
      ++v8;
      ++v10;
      ++v9;
    }
    while ( v4 < (unsigned __int64)(this->InterpolationVertex._Mypair._Myval2._Mylast
                                  - this->InterpolationVertex._Mypair._Myval2._Myfirst) );
    v2 = pUpdateBufferArg;
    v6 = v7;
  }
  this->InterpolationVertex._Mypair._Myval2._Mylast = this->InterpolationVertex._Mypair._Myval2._Myfirst;
  v34 = v6;
  this->m_EffectMeshData[v34].renderIndexCount = this->m_EffectMeshData[v34].indexCount
                                               * (v2->pParticleDataVec->_Mypair._Myval2._Mylast
                                                - v2->pParticleDataVec->_Mypair._Myval2._Myfirst
                                                + this->m_InterpolationNum
                                                * (v2->pParticleDataVec->_Mypair._Myval2._Mylast
                                                 - v2->pParticleDataVec->_Mypair._Myval2._Myfirst
                                                 - 1));
  this->m_EffectMeshData[v34].renderVertexCount = this->m_EffectMeshData[v34].vertexCount
                                                * (v2->pParticleDataVec->_Mypair._Myval2._Mylast
                                                 - v2->pParticleDataVec->_Mypair._Myval2._Myfirst
                                                 + this->m_InterpolationNum
                                                 * (v2->pParticleDataVec->_Mypair._Myval2._Mylast
                                                  - v2->pParticleDataVec->_Mypair._Myval2._Myfirst
                                                  - 1));
}

void __fastcall ParticleTypeStateStripe::UpdateParticleTypeState(
        ParticleTypeStateStripe *this,
        EffectUpdateBufferArgument *pUpdateBufferArg)
{
  EffectUpdateBufferArgument *v2; // r15
  DialogData *Myfirst; // rcx
  __m128 v5; // xmm12
  __m128 v6; // xmm14
  int v7; // edi
  int v8; // er14
  std::vector<ParticleData *> *pParticleDataVec; // rdx
  unsigned __int64 v10; // rsi
  __m128 v11; // xmm3
  float v12; // xmm4_4
  std::vector<ParticleData *> *v13; // rdx
  ParticleData *v14; // rax
  bool v15; // zf
  float *m; // rax
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  OGLEffectVec4 *v19; // rax
  OGLVec4 *v20; // rax
  __m128 v21; // xmm3
  float v22; // xmm4_4
  ParticleData *v23; // rax
  float *v24; // rax
  __m128 v25; // xmm2
  __m128 v26; // xmm1
  float v27; // er12
  ParticleVertexBuffer *v28; // r13
  unsigned __int64 v29; // r14
  void **v30; // r11
  unsigned __int64 v31; // r9
  char *p_y; // rsi
  unsigned __int64 v33; // r15
  float v34; // xmm8_4
  float v35; // xmm9_4
  float v36; // xmm10_4
  int v37; // er10
  unsigned __int64 v38; // rax
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm1_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm2_4
  OGLEffectVec3 *v47; // rax
  OGLVec3 *v48; // rax
  OGLEffectVec3 *v49; // rax
  OGLVec3 *v50; // rax
  float v51; // xmm7_4
  float v52; // xmm5_4
  float v53; // xmm1_4
  float v54; // xmm2_4
  float v55; // xmm1_4
  float v56; // xmm2_4
  float v57; // xmm1_4
  float v58; // xmm2_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  OGLEffectVec3 *v61; // rax
  OGLVec3 *v62; // rax
  OGLEffectVec3 *v63; // rax
  OGLVec3 *v64; // rax
  float v65; // xmm7_4
  float v66; // xmm5_4
  unsigned __int64 v67; // rax
  float v68; // xmm1_4
  float v69; // xmm2_4
  float v70; // xmm1_4
  float v71; // xmm2_4
  float v72; // xmm1_4
  float v73; // xmm2_4
  float v74; // xmm1_4
  float v75; // xmm2_4
  OGLEffectVec3 *v76; // rax
  OGLVec3 *v77; // rax
  OGLEffectVec3 *v78; // rax
  OGLVec3 *v79; // rax
  float v80; // xmm7_4
  float v81; // xmm5_4
  float v82; // xmm7_4
  float v83; // xmm6_4
  float v84; // xmm8_4
  float v85; // xmm0_4
  float v86; // xmm7_4
  float v87; // xmm8_4
  float v88; // xmm9_4
  float v89; // xmm6_4
  float v90; // xmm0_4
  float v91; // xmm0_4
  float v92; // xmm0_4
  EffectData *pEffectData; // r8
  DialogData *v94; // rcx
  int v95; // ecx
  int v96; // er15
  int v97; // er9
  __int64 v98; // rdx
  int v99; // ecx
  unsigned __int64 v100; // rdx
  __int64 v101; // rax
  float v102; // xmm9_4
  float v103; // xmm10_4
  float v104; // xmm12_4
  __int64 v105; // rax
  float v106; // xmm13_4
  float v107; // xmm14_4
  float v108; // xmm15_4
  unsigned __int64 v109; // rdx
  float v110; // xmm11_4
  float v111; // xmm6_4
  float v112; // xmm7_4
  OGLEffectVec3 *v113; // rax
  float v114; // xmm8_4
  OGLEffectVec3 *v115; // rax
  float v116; // xmm7_4
  OGLEffectVec3 *v117; // rax
  float v118; // xmm6_4
  OGLEffectVec3 *v119; // rax
  float v120; // xmm11_4
  float v121; // xmm3_4
  OGLEffectVec3 *v122; // rax
  OGLEffectVec3 *v123; // rax
  float v124; // xmm4_4
  float v125; // xmm0_4
  float v126; // xmm1_4
  int v127; // er12
  __int64 v128; // xmm12_8
  __int64 v129; // xmm13_8
  __int64 v130; // xmm14_8
  __int64 v131; // xmm15_8
  char v132; // r13
  float v133; // er14
  float v134; // eax
  int v135; // esi
  int v136; // er15
  float v137; // xmm9_4
  OGLEffectVec3 *v138; // rax
  float *v139; // r8
  OGLEffectVec3 *v140; // rax
  OGLEffectVec3 *v141; // rax
  float *v142; // r8
  OGLEffectVec3 *v143; // rax
  OGLEffectVec3 *v144; // rax
  OGLVec3 *v145; // rax
  float v146; // xmm7_4
  float v147; // xmm8_4
  float v148; // xmm10_4
  OGLEffectVec3 *v149; // rax
  float v150; // xmm6_4
  OGLEffectVec3 *v151; // rax
  float v152; // xmm0_4
  OGLEffectVec3 *v153; // rax
  OGLVec3 *v154; // rax
  EffectData *v155; // r8
  DialogData *v156; // rcx
  float v157; // xmm4_4
  DialogData *v158; // rcx
  float v159; // xmm3_4
  DialogData *v160; // rcx
  float v161; // xmm2_4
  __int64 v162; // r15
  int v163; // eax
  ParticleVertexBuffer *v164; // r12
  float v165; // er8
  __int64 v166; // xmm0_8
  float v167; // eax
  unsigned __int64 v168; // rax
  __int64 v169; // rax
  unsigned __int64 v170; // rax
  unsigned __int64 v171; // rcx
  __int64 v172; // rax
  unsigned __int64 v173; // rax
  __int64 v174; // xmm0_8
  int v175; // esi
  int m_InterpolationNum; // eax
  float v177; // xmm6_4
  float y; // xmm7_4
  float x; // xmm8_4
  float v180; // xmm9_4
  float v181; // xmm10_4
  float v182; // xmm11_4
  float v183; // xmm12_4
  float v184; // xmm13_4
  float v185; // xmm14_4
  float v186; // xmm15_4
  __int64 v187; // r15
  OGLVec3 *v188; // rcx
  __int64 p_z; // r12
  unsigned __int64 v190; // rax
  int v191; // er9
  int v192; // esi
  int v193; // er9
  OGLEffectVec3 *v194; // rax
  float *v195; // r8
  OGLEffectVec3 *v196; // rax
  OGLEffectVec3 *v197; // rax
  OGLVec3 *v198; // rax
  int v199; // er12
  OGLEffectVec3_vtbl *v200; // rcx
  int v201; // eax
  _BYTE *Mylast; // r8
  ParticleVertexBuffer *v203; // rsi
  unsigned __int64 v204; // rax
  unsigned __int64 v205; // rax
  int v206; // er9
  unsigned __int64 v207; // r15
  int v208; // er9
  OGLEffectVec3 *v209; // rax
  float *v210; // r10
  OGLEffectVec3 *v211; // rax
  int v212; // er11
  int v213; // er9
  int v214; // eax
  int v215; // er12
  OGLEffectVec3_vtbl *v216; // rcx
  unsigned __int64 v217; // rax
  unsigned __int64 v218; // rax
  int v219; // er9
  unsigned __int64 v220; // r15
  int v221; // er9
  OGLEffectVec3 *v222; // rax
  __int64 v223; // r10
  OGLEffectVec3 *v224; // rax
  int v225; // er11
  int v226; // er9
  int v227; // eax
  int v228; // er13
  __int64 v229; // rdx
  unsigned __int64 v230; // rax
  unsigned __int64 v231; // rax
  int v232; // er10
  int v233; // er8
  unsigned __int64 v234; // r12
  int v235; // er15
  int v236; // er10
  OGLEffectVec4 *v237; // rax
  const OGLVec4 *v238; // r11
  OGLEffectVec4 *v239; // rax
  int v240; // er10
  unsigned __int64 v241; // rcx
  int v242; // er12
  int v243; // er12
  unsigned __int64 v244; // r15
  unsigned __int64 v245; // rcx
  int v246; // eax
  std::vector<ParticleVertexBuffer> *p_InterpolationVertex; // rsi
  int v248; // er14
  ParticleVertexBuffer *v249; // rax
  unsigned __int64 v250; // xmm0_8
  __m128 v251; // xmm6
  OGLEffectVec3 v252; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v253; // [rsp+70h] [rbp-98h]
  OGLEffectVec3 v254; // [rsp+78h] [rbp-90h] BYREF
  OGLEffectVec3 v255; // [rsp+90h] [rbp-78h] BYREF
  OGLVec3 v256; // [rsp+A8h] [rbp-60h] BYREF
  float v257; // [rsp+B8h] [rbp-50h]
  OGLEffectVec3 v258; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v259; // [rsp+D8h] [rbp-30h]
  int v260; // [rsp+E0h] [rbp-28h] BYREF
  int v261; // [rsp+E4h] [rbp-24h]
  __int64 v262; // [rsp+E8h] [rbp-20h]
  float v263; // [rsp+F0h] [rbp-18h]
  OGLEffectVec3 v264; // [rsp+F8h] [rbp-10h] BYREF
  ParticleVertexBuffer *Myend; // [rsp+110h] [rbp+8h]
  float v266; // [rsp+118h] [rbp+10h]
  OGLVec3 v267; // [rsp+120h] [rbp+18h] BYREF
  OGLEffectVec3 v268; // [rsp+130h] [rbp+28h] BYREF
  OGLEffectVec4 result; // [rsp+148h] [rbp+40h] BYREF
  OGLEffectVec3 v270; // [rsp+160h] [rbp+58h] BYREF
  OGLVec3 position; // [rsp+178h] [rbp+70h] BYREF
  OGLVec3 v272; // [rsp+188h] [rbp+80h] BYREF
  std::vector<ParticleVertexBuffer> v273; // [rsp+198h] [rbp+90h] BYREF
  int v274; // [rsp+1B0h] [rbp+A8h]
  unsigned int v275; // [rsp+1B4h] [rbp+ACh]
  OGLEffectVec3 v276; // [rsp+1B8h] [rbp+B0h] BYREF
  OGLEffectVec3 v277; // [rsp+1D0h] [rbp+C8h] BYREF
  std::vector<ParticleVertexBuffer> v278; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned __int64 v279; // [rsp+200h] [rbp+F8h]
  OGLEffectVec3 v280; // [rsp+208h] [rbp+100h] BYREF
  OGLVec3 v281; // [rsp+220h] [rbp+118h] BYREF
  OGLVec3 v282; // [rsp+230h] [rbp+128h] BYREF
  OGLVec3 v283; // [rsp+240h] [rbp+138h] BYREF
  OGLVec3 v284; // [rsp+250h] [rbp+148h] BYREF
  OGLVec3 v285; // [rsp+260h] [rbp+158h] BYREF
  OGLVec3 v286; // [rsp+270h] [rbp+168h] BYREF
  OGLVec3 end; // [rsp+280h] [rbp+178h] BYREF
  OGLVec3 start; // [rsp+290h] [rbp+188h] BYREF
  OGLVec3 v289; // [rsp+2A0h] [rbp+198h] BYREF
  OGLVec3 v290; // [rsp+2B0h] [rbp+1A8h] BYREF
  OGLVec3 v291; // [rsp+2C0h] [rbp+1B8h] BYREF
  OGLVec3 v292; // [rsp+2D0h] [rbp+1C8h] BYREF
  OGLVec3 v293; // [rsp+2E0h] [rbp+1D8h] BYREF
  OGLVec3 v294; // [rsp+2F0h] [rbp+1E8h] BYREF
  OGLVec3 v295; // [rsp+300h] [rbp+1F8h] BYREF
  OGLEffectVec3 v296; // [rsp+310h] [rbp+208h] BYREF
  OGLVec3 v297; // [rsp+328h] [rbp+220h] BYREF
  OGLEffectVec3 v298; // [rsp+338h] [rbp+230h] BYREF
  OGLVec3 v299; // [rsp+350h] [rbp+248h] BYREF
  ParticleVertexBuffer _Val; // [rsp+360h] [rbp+258h] BYREF
  void **v301; // [rsp+3A0h] [rbp+298h]
  unsigned __int64 v302; // [rsp+3A8h] [rbp+2A0h]
  float v303; // [rsp+3B0h] [rbp+2A8h]
  OGLEffectVec3 v304; // [rsp+3B8h] [rbp+2B0h] BYREF
  void **v305; // [rsp+3D0h] [rbp+2C8h]
  __int64 v306; // [rsp+3D8h] [rbp+2D0h]
  float v307; // [rsp+3E0h] [rbp+2D8h]
  void **v308; // [rsp+3E8h] [rbp+2E0h]
  __int64 v309; // [rsp+3F0h] [rbp+2E8h]
  float z; // [rsp+3F8h] [rbp+2F0h]
  void **v311; // [rsp+400h] [rbp+2F8h]
  __int64 v312; // [rsp+408h] [rbp+300h]
  float v313; // [rsp+410h] [rbp+308h]
  void **v314; // [rsp+418h] [rbp+310h]
  __int64 v315; // [rsp+420h] [rbp+318h]
  float v316; // [rsp+428h] [rbp+320h]
  void **v317; // [rsp+430h] [rbp+328h]
  __int64 v318; // [rsp+438h] [rbp+330h]
  float v319; // [rsp+440h] [rbp+338h]
  void **v320; // [rsp+448h] [rbp+340h]
  __int64 v321; // [rsp+450h] [rbp+348h]
  float v322; // [rsp+458h] [rbp+350h]
  void **v323; // [rsp+460h] [rbp+358h]
  __int64 v324; // [rsp+468h] [rbp+360h]
  float v325; // [rsp+470h] [rbp+368h]
  OGLEffectVec4 v326; // [rsp+478h] [rbp+370h] BYREF
  OGLEffectVec4 v327; // [rsp+498h] [rbp+390h] BYREF
  void **v328; // [rsp+4B8h] [rbp+3B0h]
  OGLVec3 vIn1; // [rsp+4C0h] [rbp+3B8h] BYREF
  void **v330; // [rsp+4D0h] [rbp+3C8h]
  OGLVec3 axis; // [rsp+4D8h] [rbp+3D0h] BYREF
  OGLEffectVec3 v332; // [rsp+4E8h] [rbp+3E0h] BYREF
  void **v333; // [rsp+500h] [rbp+3F8h]
  float v334; // [rsp+508h] [rbp+400h]
  float v335; // [rsp+50Ch] [rbp+404h]
  float v336; // [rsp+510h] [rbp+408h]
  void **v337; // [rsp+518h] [rbp+410h]
  float v338; // [rsp+520h] [rbp+418h]
  float v339; // [rsp+524h] [rbp+41Ch]
  float v340; // [rsp+528h] [rbp+420h]
  void **v341; // [rsp+530h] [rbp+428h]
  float v342; // [rsp+538h] [rbp+430h]
  float v343; // [rsp+53Ch] [rbp+434h]
  float v344; // [rsp+540h] [rbp+438h]
  OGLEffectVec3 v345; // [rsp+548h] [rbp+440h] BYREF
  OGLEffectVec3 v346; // [rsp+560h] [rbp+458h] BYREF
  OGLEffectVec3 v347; // [rsp+578h] [rbp+470h] BYREF
  __int64 v348; // [rsp+590h] [rbp+488h]
  OGLEffectVec3 v349; // [rsp+598h] [rbp+490h] BYREF
  OGLEffectVec3 v350; // [rsp+5B0h] [rbp+4A8h] BYREF
  OGLEffectVec3 v351; // [rsp+5C8h] [rbp+4C0h] BYREF
  ParticleVertexBuffer v352; // [rsp+5E0h] [rbp+4D8h] BYREF
  ParticleVertexBuffer v353; // [rsp+620h] [rbp+518h] BYREF
  ParticleVertexBuffer v354; // [rsp+660h] [rbp+558h] BYREF
  OGLEffectVec4 v355; // [rsp+6A0h] [rbp+598h] BYREF
  OGLEffectVec3 v356; // [rsp+6B8h] [rbp+5B0h] BYREF
  OGLEffectVec3 v357; // [rsp+6D0h] [rbp+5C8h] BYREF
  OGLEffectVec3 v358; // [rsp+6E8h] [rbp+5E0h] BYREF
  float scaleFactor; // [rsp+7F8h] [rbp+6F0h] BYREF
  OGLVec3 *v; // [rsp+800h] [rbp+6F8h]

  v348 = -2i64;
  v2 = pUpdateBufferArg;
  Myfirst = pUpdateBufferArg->pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[3].allEditNumData._Mypair._Myval2._Mylast - Myfirst[3].allEditNumData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  v5 = (__m128)(unsigned int)FLOAT_1_0;
  v6 = (__m128)(unsigned int)FLOAT_1_0;
  v6.m128_f32[0] = 1.0 / *Myfirst[3].allEditNumData._Mypair._Myval2._Myfirst;
  v275 = v6.m128_u32[0];
  if ( (unsigned __int64)(Myfirst[3].allEditNumData._Mypair._Myval2._Mylast
                        - Myfirst[3].allEditNumData._Mypair._Myval2._Myfirst) <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  memset(&v278, 0, sizeof(v278));
  v7 = 0;
  Myend = 0i64;
  v8 = 0;
  pParticleDataVec = pUpdateBufferArg->pParticleDataVec;
  if ( pParticleDataVec->_Mypair._Myval2._Mylast - pParticleDataVec->_Mypair._Myval2._Myfirst )
  {
    v10 = 0i64;
    do
    {
      if ( pParticleDataVec->_Mypair._Myval2._Mylast - pParticleDataVec->_Mypair._Myval2._Myfirst <= v10 )
        std::_Xout_of_range("invalid vector<T> subscript");
      this->calcWorldMat(this, pParticleDataVec->_Mypair._Myval2._Myfirst[v10], v2->pEffectData);
      memset(&_Val, 0, 48);
      _Val.uv = 0i64;
      HIDWORD(Myend) = 0;
      if ( this->crossFlag )
      {
        v11 = (__m128)LODWORD(FLOAT_N1_0);
        v12 = 0.0;
      }
      else
      {
        v11 = 0i64;
        v12 = FLOAT_N1_0;
      }
      v13 = v2->pParticleDataVec;
      if ( v2->pParticleDataVec->_Mypair._Myval2._Mylast - v2->pParticleDataVec->_Mypair._Myval2._Myfirst <= v10 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v14 = v13->_Mypair._Myval2._Myfirst[v10];
      v15 = &v14->WorldMat == 0i64;
      m = v14->WorldMat.m;
      if ( v15 )
        m = 0i64;
      v17 = v11;
      v17.m128_f32[0] = (float)((float)((float)(v11.m128_f32[0] * *m) + (float)(m[4] * 0.0)) + (float)(v12 * m[8]))
                      + m[12];
      v18 = v11;
      v18.m128_f32[0] = (float)((float)((float)(v11.m128_f32[0] * m[1]) + (float)(m[5] * 0.0)) + (float)(v12 * m[9]))
                      + m[13];
      v266 = (float)((float)((float)(v11.m128_f32[0] * m[2]) + (float)(m[6] * 0.0)) + (float)(v12 * m[10])) + m[14];
      *(_QWORD *)&_Val.position.x = _mm_unpacklo_ps(v17, v18).m128_u64[0];
      _Val.position.z = v266;
      scaleFactor = 255.0;
      if ( v13->_Mypair._Myval2._Mylast - v13->_Mypair._Myval2._Myfirst <= v10 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v19 = OGLEffectVec4::operator/<float>(&v13->_Mypair._Myval2._Myfirst[v10]->Col, &result, &scaleFactor);
      if ( v19 )
        v20 = &v19->OGLVec4;
      else
        v20 = 0i64;
      _Val.color = *v20;
      std::vector<ParticleVertexBuffer>::push_back(&v278, &_Val);
      HIDWORD(Myend) = 0;
      if ( this->crossFlag )
      {
        v21 = (__m128)(unsigned int)FLOAT_1_0;
        v22 = 0.0;
      }
      else
      {
        v21 = 0i64;
        v22 = *(float *)&FLOAT_1_0;
      }
      if ( v2->pParticleDataVec->_Mypair._Myval2._Mylast - v2->pParticleDataVec->_Mypair._Myval2._Myfirst <= v10 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v23 = v2->pParticleDataVec->_Mypair._Myval2._Myfirst[v10];
      v15 = &v23->WorldMat == 0i64;
      v24 = v23->WorldMat.m;
      if ( v15 )
        v24 = 0i64;
      v25 = v21;
      v25.m128_f32[0] = (float)((float)((float)(v21.m128_f32[0] * *v24) + (float)(v24[4] * 0.0)) + (float)(v22 * v24[8]))
                      + v24[12];
      v26 = v21;
      v26.m128_f32[0] = (float)((float)((float)(v21.m128_f32[0] * v24[1]) + (float)(v24[5] * 0.0))
                              + (float)(v22 * v24[9]))
                      + v24[13];
      v266 = (float)((float)((float)(v21.m128_f32[0] * v24[2]) + (float)(v24[6] * 0.0)) + (float)(v22 * v24[10]))
           + v24[14];
      *(_QWORD *)&_Val.position.x = _mm_unpacklo_ps(v25, v26).m128_u64[0];
      _Val.position.z = v266;
      std::vector<ParticleVertexBuffer>::push_back(&v278, &_Val);
      ++v8;
      ++v10;
      pParticleDataVec = v2->pParticleDataVec;
    }
    while ( v8 < (unsigned __int64)(v2->pParticleDataVec->_Mypair._Myval2._Mylast
                                  - v2->pParticleDataVec->_Mypair._Myval2._Myfirst) );
    Myend = v278._Mypair._Myval2._Myend;
  }
  v27 = 0.0;
  v28 = v278._Mypair._Myval2._Myfirst;
  v29 = v278._Mypair._Myval2._Mylast - v278._Mypair._Myval2._Myfirst;
  v279 = v29;
  v30 = &OGLEffectVec3::`vftable';
  if ( v29 )
  {
    v31 = -1i64;
    p_y = (char *)&v278._Mypair._Myval2._Myfirst[-2].position.y;
    while ( 1 )
    {
      v33 = v31 + 1;
      if ( v29 <= v31 + 1 )
        std::_Xout_of_range("invalid vector<T> subscript");
      *((_QWORD *)p_y + 16) = 0i64;
      *((_DWORD *)p_y + 34) = 0;
      *(_QWORD *)(p_y + 140) = 0i64;
      *((_DWORD *)p_y + 37) = 0;
      *(_QWORD *)&v252.x = 0i64;
      v252.z = 0.0;
      v252.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
      *(_QWORD *)&v270.x = 0i64;
      v270.z = 0.0;
      v270.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
      v302 = 0i64;
      v303 = 0.0;
      v301 = &OGLEffectVec3::`vftable';
      *(_QWORD *)&v268.x = 0i64;
      v268.z = 0.0;
      v268.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
      *(_QWORD *)&v255.x = 0i64;
      v255.z = 0.0;
      v255.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
      v34 = *((float *)p_y + 29);
      v35 = *((float *)p_y + 30);
      v36 = *((float *)p_y + 31);
      v302 = __PAIR64__(LODWORD(v35), LODWORD(v34));
      v303 = v36;
      v37 = LODWORD(v27) + 1;
      LODWORD(scaleFactor) = LODWORD(v27) + 1;
      if ( LODWORD(v27) - 2 >= 0 )
      {
        v38 = v31 - 1;
        if ( SLODWORD(v27) % 2 == 1 )
        {
          if ( v29 <= v38 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v39 = *(float *)p_y;
          v40 = *((float *)p_y + 1);
          v252.x = *((float *)p_y - 1);
          v252.y = v39;
          v252.z = v40;
          if ( v29 <= v31 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v41 = *((float *)p_y + 15);
          v42 = *((float *)p_y + 16);
          v270.x = *((float *)p_y + 14);
          v270.y = v41;
          v270.z = v42;
        }
        else
        {
          if ( v29 <= v38 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v43 = *(float *)p_y;
          v44 = *((float *)p_y + 1);
          v270.x = *((float *)p_y - 1);
          v270.y = v43;
          v270.z = v44;
          if ( v29 <= v31 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v45 = *((float *)p_y + 15);
          v46 = *((float *)p_y + 16);
          v252.x = *((float *)p_y + 14);
          v252.y = v45;
          v252.z = v46;
        }
        v333 = &OGLEffectVec3::`vftable';
        v308 = &OGLEffectVec3::`vftable';
        v305 = &OGLEffectVec3::`vftable';
        v272.x = v34;
        v272.y = v35;
        v272.z = v36;
        v47 = OGLEffectVec3::operator-(&v252, (OGLEffectVec3 *)&result, &v272);
        if ( v47 )
          v48 = &v47->OGLVec3;
        else
          v48 = 0i64;
        v309 = *(_QWORD *)&v48->x;
        z = v48->z;
        position.x = v34;
        position.y = v35;
        position.z = v36;
        v49 = OGLEffectVec3::operator-(&v270, (OGLEffectVec3 *)&result, &position);
        if ( v49 )
          v50 = &v49->OGLVec3;
        else
          v50 = 0i64;
        v306 = *(_QWORD *)&v50->x;
        v307 = v50->z;
        v334 = (float)(v307 * *((float *)&v309 + 1)) - (float)(z * *((float *)&v306 + 1));
        v51 = (float)(*(float *)&v306 * z) - (float)(v307 * *(float *)&v309);
        v335 = v51;
        v52 = (float)(*(float *)&v309 * *((float *)&v306 + 1)) - (float)(*(float *)&v306 * *((float *)&v309 + 1));
        v336 = v52;
        if ( v29 <= v33 )
          std::_Xout_of_range("invalid vector<T> subscript");
        *((float *)p_y + 32) = (float)((float)(v307 * *((float *)&v309 + 1)) - (float)(z * *((float *)&v306 + 1)))
                             + *((float *)p_y + 32);
        *((float *)p_y + 33) = v51 + *((float *)p_y + 33);
        *((float *)p_y + 34) = v52 + *((float *)p_y + 34);
      }
      if ( SLODWORD(v27) > 0 && v37 < (int)v29 - 1 )
      {
        if ( (LOBYTE(v27) & 1) == 1 )
        {
          if ( v29 <= v31 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v53 = *((float *)p_y + 15);
          v54 = *((float *)p_y + 16);
          v270.x = *((float *)p_y + 14);
          v270.y = v53;
          v270.z = v54;
          if ( v29 <= v31 + 2 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v55 = *((float *)p_y + 45);
          v56 = *((float *)p_y + 46);
          v268.x = *((float *)p_y + 44);
          v268.y = v55;
          v268.z = v56;
        }
        else
        {
          if ( v29 <= v31 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v57 = *((float *)p_y + 15);
          v58 = *((float *)p_y + 16);
          v268.x = *((float *)p_y + 14);
          v268.y = v57;
          v268.z = v58;
          if ( v29 <= v31 + 2 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v59 = *((float *)p_y + 45);
          v60 = *((float *)p_y + 46);
          v270.x = *((float *)p_y + 44);
          v270.y = v59;
          v270.z = v60;
        }
        v337 = v30;
        v314 = v30;
        v311 = v30;
        v267.x = v34;
        v267.y = v35;
        v267.z = v36;
        v61 = OGLEffectVec3::operator-(&v270, (OGLEffectVec3 *)&result, &v267);
        if ( v61 )
          v62 = &v61->OGLVec3;
        else
          v62 = 0i64;
        v315 = *(_QWORD *)&v62->x;
        v316 = v62->z;
        v256.x = v34;
        v256.y = v35;
        v256.z = v36;
        v63 = OGLEffectVec3::operator-(&v268, (OGLEffectVec3 *)&result, &v256);
        if ( v63 )
          v64 = &v63->OGLVec3;
        else
          v64 = 0i64;
        v312 = *(_QWORD *)&v64->x;
        v313 = v64->z;
        v338 = (float)(v313 * *((float *)&v315 + 1)) - (float)(v316 * *((float *)&v312 + 1));
        v65 = (float)(*(float *)&v312 * v316) - (float)(v313 * *(float *)&v315);
        v339 = v65;
        v66 = (float)(*(float *)&v315 * *((float *)&v312 + 1)) - (float)(*(float *)&v312 * *((float *)&v315 + 1));
        v340 = v66;
        if ( v29 <= v33 )
          std::_Xout_of_range("invalid vector<T> subscript");
        *((float *)p_y + 32) = (float)((float)(v313 * *((float *)&v315 + 1)) - (float)(v316 * *((float *)&v312 + 1)))
                             + *((float *)p_y + 32);
        *((float *)p_y + 33) = v65 + *((float *)p_y + 33);
        *((float *)p_y + 34) = v66 + *((float *)p_y + 34);
      }
      if ( v37 + 1 < (int)v29 - 1 )
      {
        v67 = v31 + 2;
        if ( SLODWORD(v27) % 2 == 1 )
        {
          if ( v29 <= v67 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v68 = *((float *)p_y + 45);
          v69 = *((float *)p_y + 46);
          v268.x = *((float *)p_y + 44);
          v268.y = v68;
          v268.z = v69;
          if ( v29 <= v31 + 3 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v70 = *((float *)p_y + 60);
          v71 = *((float *)p_y + 61);
          v255.x = *((float *)p_y + 59);
          v255.y = v70;
          v255.z = v71;
        }
        else
        {
          if ( v29 <= v67 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v72 = *((float *)p_y + 45);
          v73 = *((float *)p_y + 46);
          v255.x = *((float *)p_y + 44);
          v255.y = v72;
          v255.z = v73;
          if ( v29 <= v31 + 3 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v74 = *((float *)p_y + 60);
          v75 = *((float *)p_y + 61);
          v268.x = *((float *)p_y + 59);
          v268.y = v74;
          v268.z = v75;
        }
        v341 = v30;
        v320 = v30;
        v317 = v30;
        v264.__vftable = (OGLEffectVec3_vtbl *)__PAIR64__(LODWORD(v35), LODWORD(v34));
        v264.x = v36;
        v76 = OGLEffectVec3::operator-(&v268, (OGLEffectVec3 *)&result, (const OGLVec3 *)&v264);
        if ( v76 )
          v77 = &v76->OGLVec3;
        else
          v77 = 0i64;
        v321 = *(_QWORD *)&v77->x;
        v322 = v77->z;
        v258.__vftable = (OGLEffectVec3_vtbl *)__PAIR64__(LODWORD(v35), LODWORD(v34));
        v258.x = v36;
        v78 = OGLEffectVec3::operator-(&v255, (OGLEffectVec3 *)&result, (const OGLVec3 *)&v258);
        if ( v78 )
          v79 = &v78->OGLVec3;
        else
          v79 = 0i64;
        v318 = *(_QWORD *)&v79->x;
        v319 = v79->z;
        v342 = (float)(v319 * *((float *)&v321 + 1)) - (float)(v322 * *((float *)&v318 + 1));
        v80 = (float)(*(float *)&v318 * v322) - (float)(v319 * *(float *)&v321);
        v343 = v80;
        v81 = (float)(*(float *)&v321 * *((float *)&v318 + 1)) - (float)(*(float *)&v318 * *((float *)&v321 + 1));
        v344 = v81;
        if ( v29 <= v33 )
          std::_Xout_of_range("invalid vector<T> subscript");
        *((float *)p_y + 32) = (float)((float)(v319 * *((float *)&v321 + 1)) - (float)(v322 * *((float *)&v318 + 1)))
                             + *((float *)p_y + 32);
        *((float *)p_y + 33) = v80 + *((float *)p_y + 33);
        *((float *)p_y + 34) = v81 + *((float *)p_y + 34);
      }
      if ( v29 <= v33 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v82 = *((float *)p_y + 33);
      v83 = *((float *)p_y + 32);
      v84 = *((float *)p_y + 34);
      v85 = sqrtf((float)((float)(v82 * v82) + (float)(v83 * v83)) + (float)(v84 * v84));
      if ( v85 != 0.0 )
      {
        *((float *)p_y + 32) = v83 / v85;
        *((float *)p_y + 33) = v82 / v85;
        *((float *)p_y + 34) = v84 / v85;
      }
      *(_QWORD *)&vIn1.x = 0i64;
      vIn1.z = 1.0;
      v328 = &OGLEffectVec3::`vftable';
      if ( v29 <= SLODWORD(v27) )
        std::_Xout_of_range("invalid vector<T> subscript");
      OGLQuat::set((OGLQuat *)&v273._Mypair._Myval2._Mylast, &vIn1, &v28[SLODWORD(v27)].normal);
      v273._Mypair._Myval2._Myfirst = (ParticleVertexBuffer *)&OGLEffectQuat::`vftable';
      v262 = 1065353216i64;
      v263 = 0.0;
      if ( v29 <= v33 )
        std::_Xout_of_range("invalid vector<T> subscript");
      *(_QWORD *)(p_y + 140) = v262;
      *((float *)p_y + 37) = v263;
      v330 = &OGLEffectVec3::`vftable';
      v86 = *(float *)&v273._Mypair._Myval2._Mylast;
      v87 = *((float *)&v273._Mypair._Myval2._Mylast + 1);
      v88 = *(float *)&v273._Mypair._Myval2._Myend;
      v89 = (float)((float)(v87 * v87) + (float)(v86 * v86)) + (float)(v88 * v88);
      v90 = sqrtf(v89);
      if ( v90 != 0.0 )
      {
        v86 = v86 / v90;
        v87 = v87 / v90;
        v88 = v88 / v90;
      }
      axis.x = v86;
      axis.y = v87;
      axis.z = v88;
      v91 = sqrtf(v89);
      v92 = atan2f(*((float *)&v273._Mypair._Myval2._Myend + 1), v91);
      if ( v29 <= SLODWORD(v27) )
        std::_Xout_of_range("invalid vector<T> subscript");
      v = &v28[SLODWORD(v27)].tangent;
      OGLVec3::rotateV(v, &axis, v92);
      if ( v29 <= SLODWORD(v27) )
        std::_Xout_of_range("invalid vector<T> subscript");
      OGLVec3::normalize(v, v);
      if ( v29 <= v33 )
        std::_Xout_of_range("invalid vector<T> subscript");
      *((float *)p_y + 32) = *((float *)p_y + 32) * -1.0;
      *((float *)p_y + 33) = *((float *)p_y + 33) * -1.0;
      v27 = scaleFactor;
      p_y += 60;
      v31 = v33;
      if ( SLODWORD(scaleFactor) >= v29 )
        break;
      v30 = &OGLEffectVec3::`vftable';
    }
    v2 = pUpdateBufferArg;
  }
  pEffectData = v2->pEffectData;
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                        - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v94 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v94[2].allComboIndexData._Mypair._Myval2._Mylast
                        - v94[2].allComboIndexData._Mypair._Myval2._Myfirst) <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v95 = v94[2].allComboIndexData._Mypair._Myval2._Myfirst[1];
  v274 = v95;
  v96 = 0;
  scaleFactor = 0.0;
  v97 = (int)v29 / 2;
  v261 = (int)v29 / 2;
  if ( (int)v29 / 2 > 0 )
  {
    v98 = 0i64;
    *(_QWORD *)&v256.x = 0i64;
    while ( 1 )
    {
      memset(&v273, 0, sizeof(v273));
      if ( v95 )
      {
        v99 = v95 - 1;
        if ( !v99 )
        {
          v155 = pUpdateBufferArg->pEffectData;
          if ( (unsigned __int64)(v155->AllDialogData._Mypair._Myval2._Mylast
                                - v155->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v156 = v155->AllDialogData._Mypair._Myval2._Myfirst;
          if ( (unsigned __int64)(v156[2].allEditNumData._Mypair._Myval2._Mylast
                                - v156[2].allEditNumData._Mypair._Myval2._Myfirst) <= 6 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v157 = v156[2].allEditNumData._Mypair._Myval2._Myfirst[6];
          v257 = v157;
          if ( (unsigned __int64)(v155->AllDialogData._Mypair._Myval2._Mylast
                                - v155->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v158 = v155->AllDialogData._Mypair._Myval2._Myfirst;
          if ( (unsigned __int64)(v158[2].allEditNumData._Mypair._Myval2._Mylast
                                - v158[2].allEditNumData._Mypair._Myval2._Myfirst) <= 7 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v159 = v158[2].allEditNumData._Mypair._Myval2._Myfirst[7];
          *(float *)&v253 = v159;
          if ( (unsigned __int64)(v155->AllDialogData._Mypair._Myval2._Mylast
                                - v155->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v160 = v155->AllDialogData._Mypair._Myval2._Myfirst;
          if ( (unsigned __int64)(v160[2].allEditNumData._Mypair._Myval2._Mylast
                                - v160[2].allEditNumData._Mypair._Myval2._Myfirst) <= 8 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v161 = v160[2].allEditNumData._Mypair._Myval2._Myfirst[8];
          *(float *)&v = v161;
          v162 = 0i64;
          v163 = v97 - 1;
          LODWORD(v259) = v97 - 1;
          v164 = v28;
          v165 = scaleFactor;
          do
          {
            v98 = *(_QWORD *)&v256.x;
            if ( SLODWORD(v165) < v163 )
            {
              if ( *(_QWORD *)&v256.x )
              {
                v168 = v162 + 2 * (*(_QWORD *)&v256.x - 1i64);
                if ( v29 <= v168 )
                  std::_Xout_of_range("invalid vector<T> subscript");
                v169 = v168;
                v166 = *(_QWORD *)&v28[v169].position.x;
                v167 = v28[v169].position.z;
              }
              else
              {
                if ( v29 <= v162 )
                  std::_Xout_of_range("invalid vector<T> subscript");
                v166 = *(_QWORD *)&v164->position.x;
                v167 = v164->position.z;
              }
              v267.z = v167;
              *(_QWORD *)&v267.x = v166;
              v170 = v162 + 2i64 * *(_QWORD *)&v256.x;
              if ( v29 <= v170 )
                std::_Xout_of_range("invalid vector<T> subscript");
              position = v28[v170].position;
              v171 = v162 + 2 * (*(_QWORD *)&v256.x + 1i64);
              if ( v29 <= v171 )
                std::_Xout_of_range("invalid vector<T> subscript");
              v272 = v28[v171].position;
              if ( LODWORD(v165) == v97 - 2 )
              {
                if ( v29 <= v171 )
                  std::_Xout_of_range("invalid vector<T> subscript");
                v172 = v171;
              }
              else
              {
                v173 = v162 + 2 * (*(_QWORD *)&v256.x + 2i64);
                if ( v29 <= v173 )
                  std::_Xout_of_range("invalid vector<T> subscript");
                v172 = v173;
              }
              v174 = *(_QWORD *)&v28[v172].position.x;
              v263 = v28[v172].position.z;
              v262 = v174;
              v175 = 0;
              m_InterpolationNum = this->m_InterpolationNum;
              if ( m_InterpolationNum > 0 )
              {
                v177 = v267.z;
                y = v267.y;
                x = v267.x;
                v180 = position.z;
                v181 = position.y;
                v182 = position.x;
                v183 = v272.z;
                v184 = v272.y;
                v185 = v272.x;
                v186 = v263;
                do
                {
                  memset(&v354.normal, 0, 36);
                  v354.uv = 0i64;
                  *(_QWORD *)&v254.x = v262;
                  v254.z = v186;
                  v254.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
                  v252.x = v185;
                  v252.y = v184;
                  v252.z = v183;
                  v252.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
                  v255.x = v182;
                  v255.y = v181;
                  v255.z = v180;
                  v255.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
                  v258.x = x;
                  v258.y = y;
                  v258.z = v177;
                  v258.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
                  v354.position = *D3DMath::KochanecBartels(
                                     (OGLVec3 *)&v270,
                                     &v258,
                                     &v255,
                                     &v252,
                                     &v254,
                                     v161,
                                     v157,
                                     v159,
                                     (float)((float)v175 + 1.0) / (float)((float)m_InterpolationNum + 1.0));
                  std::vector<ParticleVertexBuffer>::push_back(&v273, &v354);
                  ++v175;
                  m_InterpolationNum = this->m_InterpolationNum;
                  v161 = *(float *)&v;
                  v159 = *(float *)&v253;
                  v157 = v257;
                }
                while ( v175 < m_InterpolationNum );
                v29 = v279;
                v98 = *(_QWORD *)&v256.x;
                v165 = scaleFactor;
                v97 = v261;
              }
              v163 = v259;
            }
            ++v162;
            ++v164;
          }
          while ( v162 < 2 );
LABEL_195:
          v96 = LODWORD(scaleFactor);
          goto LABEL_196;
        }
        if ( v99 == 1 && v96 < v97 - 1 )
        {
          v100 = 2 * v98;
          if ( v29 <= v100 )
            std::_Xout_of_range("invalid vector<T> subscript");
          *(float *)&v259 = v28[v100].position.x;
          LODWORD(v276.x) = v259;
          v257 = v28[v100].position.y;
          v276.y = v257;
          *(float *)&v258.__vftable = v28[v100].position.z;
          v276.z = *(float *)&v258.__vftable;
          v276.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
          if ( v29 <= v100 + 1 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v101 = v100 + 1;
          v102 = v28[v101].position.x;
          v304.x = v102;
          v103 = v28[v101].position.y;
          v304.y = v103;
          v104 = v28[v101].position.z;
          v304.z = v104;
          v304.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
          if ( v29 <= v100 + 2 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v105 = v100 + 2;
          v106 = v28[v105].position.x;
          v296.x = v106;
          v107 = v28[v105].position.y;
          v296.y = v107;
          v108 = v28[v105].position.z;
          v296.z = v108;
          v296.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
          v109 = v100 + 3;
          if ( v29 <= v109 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v110 = v28[v109].position.x;
          *(float *)&v260 = v110;
          *(float *)&v324 = v110;
          v111 = v28[v109].position.y;
          *(float *)&v = v111;
          *((float *)&v324 + 1) = v111;
          v112 = v28[v109].position.z;
          *(float *)&v253 = v112;
          v325 = v112;
          v323 = &OGLEffectVec3::`vftable';
          v294.x = v102;
          v294.y = v103;
          v294.z = v104;
          OGLEffectVec3::operator-(&v276, &v280, &v294);
          v295.x = v110;
          v295.y = v111;
          v295.z = v112;
          OGLEffectVec3::operator-(&v296, &v349, &v295);
          LODWORD(v264.__vftable) = OGLEffectVec3::parallelDecision(&v280, &v349.OGLVec3);
          v297.x = v106;
          v297.y = v107;
          v297.z = v108;
          v113 = OGLEffectVec3::operator-(&v276, (OGLEffectVec3 *)&result, &v297);
          v114 = sqrtf((float)((float)(v113->x * v113->x) + (float)(v113->y * v113->y)) + (float)(v113->z * v113->z));
          v299.x = v110;
          v299.y = v111;
          v299.z = v112;
          v115 = OGLEffectVec3::operator-(&v304, (OGLEffectVec3 *)&result, &v299);
          v116 = sqrtf((float)((float)(v115->x * v115->x) + (float)(v115->y * v115->y)) + (float)(v115->z * v115->z));
          v281.x = v102;
          v281.y = v103;
          v281.z = v104;
          v117 = OGLEffectVec3::operator-(&v276, (OGLEffectVec3 *)&result, &v281);
          v118 = sqrtf((float)((float)(v117->x * v117->x) + (float)(v117->y * v117->y)) + (float)(v117->z * v117->z));
          v282.x = v110;
          LODWORD(v282.y) = (_DWORD)v;
          LODWORD(v282.z) = v253;
          v119 = OGLEffectVec3::operator-(&v296, (OGLEffectVec3 *)&result, &v282);
          v120 = v116 - v114;
          v121 = (float)(sqrtf((float)((float)(v119->x * v119->x) + (float)(v119->y * v119->y)) + (float)(v119->z * v119->z))
                       * v116)
               / (float)(v116 - v114);
          v122 = OGLEffectVec3::operator*(&v280, (OGLEffectVec3 *)&result, (float)(v118 * v116) / (float)(v116 - v114));
          OGLEffectVec3::operator/(v122, &v252, v118);
          v123 = OGLEffectVec3::operator*(&v349, (OGLEffectVec3 *)&result, v121);
          OGLEffectVec3::operator/(v123, &v255, v124);
          if ( v114 <= v116 )
          {
            v252.x = v252.x + v102;
            v252.y = v252.y + v103;
            v252.z = v252.z + v104;
            v255.x = v255.x + *(float *)&v260;
            v125 = v255.y + *(float *)&v;
            v126 = v255.z + *(float *)&v253;
          }
          else
          {
            v252.x = v252.x + *(float *)&v259;
            v252.y = v252.y + v257;
            v252.z = v252.z + *(float *)&v258.__vftable;
            v255.x = v255.x + v106;
            v125 = v255.y + v107;
            v126 = v255.z + v108;
          }
          v255.z = v126;
          v255.y = v125;
          v127 = 0;
          v128 = *(_QWORD *)&v276.x;
          v129 = *(_QWORD *)&v304.x;
          v130 = *(_QWORD *)&v296.x;
          v131 = v324;
          v132 = (char)v264.__vftable;
          v133 = v276.z;
          while ( 1 )
          {
            *(_QWORD *)&v258.x = 0i64;
            v258.z = 0.0;
            v258.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
            *(_QWORD *)&v254.x = 0i64;
            v254.z = 0.0;
            v254.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
            if ( !v127 )
              break;
            if ( v127 == 1 )
            {
              *(_QWORD *)&v258.x = v129;
              v258.z = v304.z;
              *(_QWORD *)&v254.x = v131;
              v134 = v325;
              goto LABEL_139;
            }
LABEL_140:
            v135 = 0;
            if ( this->m_InterpolationNum > 0 )
            {
              do
              {
                v136 = v135 + 1;
                v137 = (float)(v135 + 1);
                OGLEffectVec3::operator*(&v255, (OGLEffectVec3 *)&result, v137);
                v138 = OGLEffectVec3::operator*(&v252, &v298, (float)(this->m_InterpolationNum - v135));
                v283.x = *v139;
                v283.y = v139[1];
                v283.z = v139[2];
                v140 = OGLEffectVec3::operator+(v138, &v264, &v283);
                OGLEffectVec3::operator/(v140, &v345, (float)(this->m_InterpolationNum + 1));
                v264.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
                v298.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
                result.__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec3::`vftable';
                if ( v120 < 0.00000011920929 && v120 > -0.00000011920929 || v132 == 1 )
                {
                  memset(&v353.normal, 0, 36);
                  v353.uv = 0i64;
                  OGLEffectVec3::operator*(&v254, &v358, v137);
                  v141 = OGLEffectVec3::operator*(&v258, &v356, (float)(this->m_InterpolationNum - v135));
                  v284.x = *v142;
                  v284.y = v142[1];
                  v284.z = v142[2];
                  v143 = OGLEffectVec3::operator+(v141, &v357, &v284);
                  v144 = OGLEffectVec3::operator/(v143, &v332, (float)(this->m_InterpolationNum + 1));
                  if ( v144 )
                    v145 = &v144->OGLVec3;
                  else
                    v145 = 0i64;
                  *(_QWORD *)&v353.position.x = *(_QWORD *)&v145->x;
                  v353.position.z = v145->z;
                  std::vector<ParticleVertexBuffer>::push_back(&v273, &v353);
                }
                else
                {
                  memset(&_Val.normal, 0, 36);
                  _Val.uv = 0i64;
                  v146 = v345.x;
                  v285 = v345.OGLVec3;
                  v147 = v345.y;
                  v148 = v345.z;
                  OGLEffectVec3::operator-(&v258, &v347, &v285);
                  v286.x = v146;
                  v286.y = v147;
                  v286.z = v148;
                  OGLEffectVec3::operator-(&v254, &v346, &v286);
                  v277.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
                  end = v346.OGLVec3;
                  start = v347.OGLVec3;
                  D3DMath::SphereLinear(&v289, &start, &end, v137 / (float)(this->m_InterpolationNum + 1));
                  v277.OGLVec3 = v289;
                  v293.x = v146;
                  v293.y = v147;
                  v293.z = v148;
                  v149 = OGLEffectVec3::operator-(&v258, &v332, &v293);
                  v150 = sqrtf((float)((float)(v149->x * v149->x) + (float)(v149->y * v149->y)) + (float)(v149->z * v149->z));
                  v290.x = v146;
                  v290.y = v147;
                  v290.z = v148;
                  v151 = OGLEffectVec3::operator-(&v254, &v332, &v290);
                  v152 = sqrtf((float)((float)(v151->x * v151->x) + (float)(v151->y * v151->y)) + (float)(v151->z * v151->z));
                  v153 = OGLEffectVec3::operator*(
                           &v277,
                           &v332,
                           (float)((float)((float)(this->m_InterpolationNum - v135) * v150) + (float)(v152 * v137))
                         / (float)(this->m_InterpolationNum + 1));
                  if ( v153 )
                    v154 = &v153->OGLVec3;
                  else
                    v154 = 0i64;
                  v277.OGLVec3 = *v154;
                  _Val.position.x = v146 + v277.x;
                  _Val.position.y = v147 + v277.y;
                  _Val.position.z = v277.z + v148;
                  std::vector<ParticleVertexBuffer>::push_back(&v273, &_Val);
                }
                ++v135;
              }
              while ( v136 < this->m_InterpolationNum );
              v128 = *(_QWORD *)&v276.x;
              v133 = v276.z;
            }
            if ( ++v127 >= 2 )
            {
              v29 = v279;
              v28 = v278._Mypair._Myval2._Myfirst;
              goto LABEL_194;
            }
          }
          *(_QWORD *)&v258.x = v128;
          v258.z = v133;
          *(_QWORD *)&v254.x = v130;
          v134 = v296.z;
LABEL_139:
          v254.z = v134;
          goto LABEL_140;
        }
      }
      else if ( v96 < v97 - 1 )
      {
        v187 = 0i64;
        v188 = (OGLVec3 *)(2 * v98);
        v = (OGLVec3 *)(2 * v98);
        p_z = (__int64)&v28[2 * v98].position.z;
        do
        {
          if ( v29 <= (unsigned __int64)v188 + v187 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v252.OGLVec3 = *(OGLVec3 *)(p_z - 8);
          v252.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
          v190 = (unsigned __int64)&v188->x + v187 + 2;
          if ( v29 <= v190 )
            std::_Xout_of_range("invalid vector<T> subscript");
          v254.OGLVec3 = v28[v190].position;
          v254.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
          v191 = 0;
          if ( this->m_InterpolationNum > 0 )
          {
            do
            {
              memset(&v352.normal, 0, 36);
              v352.uv = 0i64;
              v192 = v191 + 1;
              OGLEffectVec3::operator*(&v254, &v332, (float)(v191 + 1));
              v194 = OGLEffectVec3::operator*(&v252, &v357, (float)(this->m_InterpolationNum - v193));
              v291.x = *v195;
              v291.y = v195[1];
              v291.z = v195[2];
              v196 = OGLEffectVec3::operator+(v194, &v356, &v291);
              v197 = OGLEffectVec3::operator/(v196, &v358, (float)(this->m_InterpolationNum + 1));
              if ( v197 )
                v198 = &v197->OGLVec3;
              else
                v198 = 0i64;
              *(_QWORD *)&v352.position.x = *(_QWORD *)&v198->x;
              v352.position.z = v198->z;
              std::vector<ParticleVertexBuffer>::push_back(&v273, &v352);
              v191 = v192;
            }
            while ( v192 < this->m_InterpolationNum );
            v188 = v;
          }
          ++v187;
          p_z += 60i64;
        }
        while ( v187 < 2 );
LABEL_194:
        v98 = *(_QWORD *)&v256.x;
        goto LABEL_195;
      }
LABEL_196:
      v199 = 0;
      v200 = 0i64;
      v264.__vftable = 0i64;
      v201 = v261 - 1;
      LODWORD(v) = v261 - 1;
      Mylast = v273._Mypair._Myval2._Mylast;
      v258.__vftable = (OGLEffectVec3_vtbl *)v273._Mypair._Myval2._Mylast;
      v203 = v273._Mypair._Myval2._Myfirst;
      do
      {
        if ( v96 >= v201 )
          break;
        v204 = (unsigned __int64)v200 + 2 * v98;
        if ( v29 <= v204 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v252.OGLVec3 = v28[v204].normal;
        v252.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
        v205 = (unsigned __int64)&v200->~OGLEffectVec3 + 2 * v98 + 2;
        if ( v29 <= v205 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v254.OGLVec3 = v28[v205].normal;
        v254.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
        v206 = 0;
        if ( this->m_InterpolationNum > 0 )
        {
          v207 = (Mylast - (_BYTE *)v203) / 60;
          do
          {
            OGLEffectVec3::operator*(&v254, &v280, v206 + 1);
            v209 = OGLEffectVec3::operator*(&v252, &v298, this->m_InterpolationNum - v208);
            v292.x = *v210;
            v292.y = v210[1];
            v292.z = v210[2];
            v211 = OGLEffectVec3::operator+(v209, (OGLEffectVec3 *)&result, &v292);
            OGLEffectVec3::operator/(v211, &v350, this->m_InterpolationNum + 1);
            result.__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec3::`vftable';
            v298.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
            v280.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
            v214 = v213 + this->m_InterpolationNum * v199;
            if ( v207 <= v214 )
              std::_Xout_of_range("invalid vector<T> subscript");
            v203[v214].normal = v350.OGLVec3;
            v206 = v212;
          }
          while ( v212 < this->m_InterpolationNum );
          v200 = v264.__vftable;
          v98 = *(_QWORD *)&v256.x;
          Mylast = v258.__vftable;
          v96 = LODWORD(scaleFactor);
        }
        ++v199;
        v200 = (OGLEffectVec3_vtbl *)((char *)v200 + 1);
        v264.__vftable = v200;
        v201 = (int)v;
      }
      while ( v199 < 2 );
      v215 = 0;
      v216 = 0i64;
      v264.__vftable = 0i64;
      do
      {
        if ( v96 >= v201 )
          break;
        v217 = (unsigned __int64)v216 + 2 * v98;
        if ( v29 <= v217 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v252.OGLVec3 = v28[v217].tangent;
        v252.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
        v218 = (unsigned __int64)&v216->~OGLEffectVec3 + 2 * v98 + 2;
        if ( v29 <= v218 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v254.OGLVec3 = v28[v218].tangent;
        v254.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
        v219 = 0;
        if ( this->m_InterpolationNum > 0 )
        {
          v220 = (Mylast - (_BYTE *)v203) / 60;
          do
          {
            OGLEffectVec3::operator*(&v254, &v280, v219 + 1);
            v222 = OGLEffectVec3::operator*(&v252, &v298, this->m_InterpolationNum - v221);
            v268.__vftable = *(OGLEffectVec3_vtbl **)v223;
            v268.x = *(float *)(v223 + 8);
            v224 = OGLEffectVec3::operator+(v222, (OGLEffectVec3 *)&result, (const OGLVec3 *)&v268);
            OGLEffectVec3::operator/(v224, &v351, this->m_InterpolationNum + 1);
            result.__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec3::`vftable';
            v298.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
            v280.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
            v227 = v226 + this->m_InterpolationNum * v215;
            if ( v220 <= v227 )
              std::_Xout_of_range("invalid vector<T> subscript");
            v203[v227].tangent = v351.OGLVec3;
            v219 = v225;
          }
          while ( v225 < this->m_InterpolationNum );
          v216 = v264.__vftable;
          v98 = *(_QWORD *)&v256.x;
          v96 = LODWORD(scaleFactor);
        }
        ++v215;
        v216 = (OGLEffectVec3_vtbl *)((char *)v216 + 1);
        v264.__vftable = v216;
        Mylast = v258.__vftable;
        v201 = (int)v;
      }
      while ( v215 < 2 );
      v228 = 0;
      v229 = 0i64;
      v259 = 0i64;
      do
      {
        if ( v96 >= v201 )
          break;
        v230 = v229 + 2i64 * *(_QWORD *)&v256.x;
        if ( v29 <= v230 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v327.OGLVec4 = v278._Mypair._Myval2._Myfirst[v230].color;
        v327.__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec4::`vftable';
        v231 = v229 + 2 * (*(_QWORD *)&v256.x + 1i64);
        if ( v29 <= v231 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v326.OGLVec4 = v278._Mypair._Myval2._Myfirst[v231].color;
        v326.__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec4::`vftable';
        v232 = 0;
        v233 = this->m_InterpolationNum;
        if ( v233 > 0 )
        {
          v234 = ((char *)v258.__vftable - (char *)v203) / 60;
          do
          {
            v260 = v233 + 1;
            v235 = v232 + 1;
            LODWORD(v264.__vftable) = v232 + 1;
            OGLEffectVec4::operator*<int>(&v326, (OGLEffectVec4 *)&v280, (const int *)&v264);
            LODWORD(v264.__vftable) = this->m_InterpolationNum - v236;
            v237 = OGLEffectVec4::operator*<int>(&v327, (OGLEffectVec4 *)&v298, (const int *)&v264);
            v239 = OGLEffectVec4::operator+(v237, &result, v238);
            OGLEffectVec4::operator/<int>(v239, &v355, &v260);
            result.__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec4::`vftable';
            v298.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec4::`vftable';
            v280.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec4::`vftable';
            v241 = v240 + this->m_InterpolationNum * v228;
            if ( v234 <= v241 )
              std::_Xout_of_range("invalid vector<T> subscript");
            v203[v241].color = v355.OGLVec4;
            v232 = v235;
            v233 = this->m_InterpolationNum;
          }
          while ( v235 < v233 );
          v229 = v259;
          v96 = LODWORD(scaleFactor);
        }
        ++v228;
        v259 = ++v229;
        v201 = (int)v;
      }
      while ( v228 < 2 );
      v242 = 2 * v96;
      if ( v29 <= 2 * v96 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v28 = v278._Mypair._Myval2._Myfirst;
      std::vector<ParticleVertexBuffer>::push_back(&this->InterpolationVertex, &v278._Mypair._Myval2._Myfirst[v242]);
      if ( v29 <= v242 + 1 )
        std::_Xout_of_range("invalid vector<T> subscript");
      std::vector<ParticleVertexBuffer>::push_back(&this->InterpolationVertex, &v28[v242 + 1]);
      v243 = 0;
      v244 = ((char *)v258.__vftable - (char *)v203) / 60;
      if ( (v244 & 0xFFFFFFFFFFFFFFFEui64) != 0 )
      {
        v245 = 0i64;
        do
        {
          if ( v244 <= v245 )
            std::_Xout_of_range("invalid vector<T> subscript");
          std::vector<ParticleVertexBuffer>::push_back(&this->InterpolationVertex, &v203[v245]);
          v246 = v243 + this->m_InterpolationNum;
          if ( v244 <= v246 )
            std::_Xout_of_range("invalid vector<T> subscript");
          std::vector<ParticleVertexBuffer>::push_back(&this->InterpolationVertex, &v203[v246]);
          v245 = ++v243;
        }
        while ( v243 < v244 >> 1 );
      }
      if ( v203 )
        std::_Wrap_alloc<std::allocator<ParticleVertexBuffer>>::deallocate(
          (std::_Wrap_alloc<std::allocator<ParticleVertexBuffer> > *)((char *)v273._Mypair._Myval2._Myend - (char *)v203),
          v203,
          v273._Mypair._Myval2._Myend - v203);
      v96 = LODWORD(scaleFactor) + 1;
      scaleFactor = *(float *)&v96;
      v98 = ++*(_QWORD *)&v256.x;
      v97 = v261;
      if ( v96 >= v261 )
      {
        v5 = (__m128)(unsigned int)FLOAT_1_0;
        v6 = (__m128)v275;
        break;
      }
      v95 = v274;
    }
  }
  p_InterpolationVertex = &this->InterpolationVertex;
  v248 = (LODWORD(this->InterpolationVertex._Mypair._Myval2._Mylast)
        - LODWORD(this->InterpolationVertex._Mypair._Myval2._Myfirst))
       / 60
       / 2;
  if ( v248 )
  {
    do
    {
      if ( v7 )
      {
        v251 = 0i64;
        v251.m128_f32[0] = (float)v7 / (float)((float)v248 - v5.m128_f32[0]);
        std::vector<ParticleVertexBuffer>::at(p_InterpolationVertex, (unsigned int)(2 * v7))->uv = (OGLVec2)_mm_unpacklo_ps((__m128)0i64, v251).m128_u64[0];
        v249 = std::vector<ParticleVertexBuffer>::at(p_InterpolationVertex, (unsigned int)(2 * v7 + 1));
        v250 = _mm_unpacklo_ps(v6, v251).m128_u64[0];
      }
      else
      {
        if ( !(this->InterpolationVertex._Mypair._Myval2._Mylast - this->InterpolationVertex._Mypair._Myval2._Myfirst) )
          std::_Xout_of_range("invalid vector<T> subscript");
        p_InterpolationVertex->_Mypair._Myval2._Myfirst->uv = 0i64;
        v249 = std::vector<ParticleVertexBuffer>::at(p_InterpolationVertex, 1ui64);
        v250 = _mm_unpacklo_ps(v5, (__m128)0i64).m128_u64[0];
      }
      v249->uv = (OGLVec2)v250;
      ++v7;
    }
    while ( v7 < (unsigned int)v248 );
  }
  if ( v28 )
    std::_Wrap_alloc<std::allocator<ParticleVertexBuffer>>::deallocate(
      (std::_Wrap_alloc<std::allocator<ParticleVertexBuffer> > *)((char *)Myend - (char *)v28),
      v28,
      Myend - v28);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall ParticleTypeStateStripe::UpdateVertexBuffer(
        ParticleTypeStateStripe *this,
        EffectUpdateBufferArgument *pUpdateBufferArg)
{
  __int64 v2; // rax
  __int64 v5; // r9
  EffectData *pEffectData; // r8
  DialogData *Myfirst; // rcx
  float *v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rbx
  unsigned __int64 vertexCount; // r8
  MeshVertexInfo2D *vertexBuffer; // rdx
  Framework::MemoryManager *v13; // rcx
  MeshVertexInfo2D *v14; // rax
  unsigned __int64 indexCount; // r8
  unsigned int *index; // rdx
  Framework::MemoryManager *v17; // rcx
  unsigned int v18; // er8
  int v19; // edx
  __int64 i; // rcx
  std::vector<ParticleData *> *pParticleDataVec; // r8
  Framework::GLManager *v22; // rbp
  MeshVertexInfo2D *v23; // rax

  v2 = *(_QWORD *)&AppMain::pApp;
  this->crossFlag = 0;
  v5 = *(int *)(*(_QWORD *)(v2 + 2507504) + 2256i64);
  pEffectData = pUpdateBufferArg->pEffectData;
  Myfirst = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast - Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v8 = Myfirst[2].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst[2].allEditNumData._Mypair._Myval2._Mylast - v8) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v9 = *(int *)(*(_QWORD *)(v2 + 2507504) + 2256i64);
  v10 = v5;
  this->m_InterpolationNum = (int)v8[5];
  vertexCount = this->m_EffectMeshData[v5].vertexCount;
  if ( this->m_VertexMemoryCount[v5] < vertexCount
                                     * (pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast
                                      - pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst)
    || !this->m_EffectMeshData[v10].vertexBuffer )
  {
    this->m_VertexMemoryCount[v5] = vertexCount
                                  * (pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast
                                   - pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst);
    vertexBuffer = this->m_EffectMeshData[v10].vertexBuffer;
    if ( vertexBuffer )
    {
      v13 = this->m_pParticleEmitter->m_pMemoryVertexReal[v5];
      if ( v13 )
        Framework::MemoryManager::release(v13, vertexBuffer);
      this->m_EffectMeshData[v10].vertexBuffer = 0i64;
    }
    v14 = (MeshVertexInfo2D *)Framework::MemoryManager::allocate(
                                this->m_pParticleEmitter->m_pGpuMemory,
                                (this->m_EffectMeshData[v10].indexCount
                               * (__int64)(this->m_VertexMemoryCount[v9]
                                         + this->m_InterpolationNum * (this->m_VertexMemoryCount[v9] - 1))) << 6,
                                vertexCount);
    this->m_EffectMeshData[v10].vertexBuffer = v14;
    if ( !v14 )
    {
      this->m_VertexMemoryCount[v9] = 0;
      return;
    }
    this->m_pParticleEmitter->m_pMemoryVertexReal[v9] = this->m_pParticleEmitter->m_pGpuMemory;
  }
  this->UpdateInterpolationVertexBuffer(this, pUpdateBufferArg);
  indexCount = this->m_EffectMeshData[v10].indexCount;
  if ( this->m_IndexMemoryCount[v9] >= indexCount
                                     * (pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast
                                      - pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst)
    && this->m_EffectMeshData[v10].index )
  {
    goto LABEL_19;
  }
  this->m_IndexMemoryCount[v9] = indexCount
                               * (pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast
                                - pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst);
  index = this->m_EffectMeshData[v10].index;
  if ( index )
  {
    v17 = this->m_pParticleEmitter->m_pMemoryIndexReal[v9];
    if ( v17 )
      Framework::MemoryManager::release(v17, index);
    this->m_EffectMeshData[v10].index = 0i64;
  }
  this->m_EffectMeshData[v10].index = (unsigned int *)Framework::MemoryManager::allocate(
                                                        this->m_pParticleEmitter->m_pGpuMemory,
                                                        4
                                                      * this->m_EffectMeshData[v10].indexCount
                                                      * (__int64)(this->m_IndexMemoryCount[v9]
                                                                + this->m_InterpolationNum
                                                                * (this->m_IndexMemoryCount[v9] - 1)),
                                                        indexCount);
  this->m_pParticleEmitter->m_pMemoryIndexReal[v9] = this->m_pParticleEmitter->m_pGpuMemory;
  if ( this->m_EffectMeshData[v10].index )
  {
LABEL_19:
    v18 = 0;
    v19 = this->m_EffectMeshData[v10].indexCount
        * (pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast
         - pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst
         + this->m_InterpolationNum
         * (pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast
          - pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst
          - 1));
    if ( v19 > 0 )
    {
      for ( i = 0i64; i < v19; this->m_EffectMeshData[v10].index[i++] = v18++ )
        ;
    }
    if ( this->stripeType == STRIPE_TYPE_CROSS )
    {
      this->crossFlag = 1;
      pParticleDataVec = pUpdateBufferArg->pParticleDataVec;
      v22 = Framework::GLManager::glm;
      if ( this->m_crossVertexMemoryCount[v9] >= (unsigned __int64)this->m_EffectMeshData[v9].vertexCount
                                               * (pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Mylast
                                                - pUpdateBufferArg->pParticleDataVec->_Mypair._Myval2._Myfirst) )
      {
        if ( this->m_EffectMeshData[v10].crossBuffer )
          goto LABEL_28;
      }
      this->m_crossVertexMemoryCount[v9] = this->m_EffectMeshData[v9].vertexCount
                                         * (pParticleDataVec->_Mypair._Myval2._Mylast
                                          - pParticleDataVec->_Mypair._Myval2._Myfirst);
      if ( this->m_EffectMeshData[v9].crossBuffer )
      {
        Framework::MemoryManager::release(&v22->allocateStaticBuffers, this->m_EffectMeshData[v9].crossBuffer);
        this->m_EffectMeshData[v9].crossBuffer = 0i64;
      }
      v23 = (MeshVertexInfo2D *)Framework::MemoryManager::allocate(
                                  &v22->allocateStaticBuffers,
                                  (this->m_EffectMeshData[v9].indexCount
                                 * (__int64)(this->m_crossVertexMemoryCount[v9]
                                           + this->m_InterpolationNum * (this->m_crossVertexMemoryCount[v9] - 1))) << 6,
                                  (unsigned __int64)pParticleDataVec);
      this->m_EffectMeshData[v9].crossBuffer = v23;
      if ( v23 )
LABEL_28:
        this->UpdateInterpolationVertexBuffer(this, pUpdateBufferArg);
    }
  }
}

void __fastcall std::vector<ParticleVertexBuffer>::_Reallocate(
        std::vector<ParticleVertexBuffer> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<ParticleVertexBuffer> > *a4)
{
  ParticleVertexBuffer *v6; // rbx
  unsigned __int64 v7; // rcx
  void *v8; // rax
  signed __int64 v9; // r14

  if ( _Count )
  {
    if ( _Count > 0x444444444444444i64 )
      std::_Xbad_alloc();
    v7 = 60 * _Count;
    if ( 60 * _Count < 0x1000 )
    {
      v6 = (ParticleVertexBuffer *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = operator new(v7 + 39);
      v6 = (ParticleVertexBuffer *)(((unsigned __int64)v8 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
      v6[-1].uv = (OGLVec2)v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<ParticleVertexBuffer *,ParticleVertexBuffer *,std::allocator<ParticleVertexBuffer>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v6,
    a4);
  v9 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<ParticleVertexBuffer>>::deallocate(
      (std::_Wrap_alloc<std::allocator<ParticleVertexBuffer> > *)((char *)this->_Mypair._Myval2._Myend
                                                                - (char *)this->_Mypair._Myval2._Myfirst),
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = &v6[_Count];
  this->_Mypair._Myval2._Mylast = &v6[v9];
  this->_Mypair._Myval2._Myfirst = v6;
}

void __fastcall std::vector<ParticleVertexBuffer>::_Reserve(
        std::vector<ParticleVertexBuffer> *this,
        unsigned __int64 _Count)
{
  ParticleVertexBuffer *Myend; // rcx
  ParticleVertexBuffer *Mylast; // r9
  signed __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  std::_Wrap_alloc<std::allocator<ParticleVertexBuffer> > *v10; // r9

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( !(Myend - Mylast) )
  {
    v5 = Mylast - this->_Mypair._Myval2._Myfirst;
    if ( v5 == 0x444444444444444i64 )
      std::_Xlength_error("vector<T> too long");
    v6 = v5 + 1;
    v7 = (char *)Myend
       - (char *)this->_Mypair._Myval2._Myfirst
       + ((unsigned __int128)(((char *)Myend - (char *)this->_Mypair._Myval2._Myfirst)
                            * (__int128)(__int64)0x8888888888888889ui64) >> 64);
    v8 = 0i64;
    v9 = ((unsigned __int64)v7 >> 63) + (v7 >> 5);
    v10 = (std::_Wrap_alloc<std::allocator<ParticleVertexBuffer> > *)(0x444444444444444i64 - (v9 >> 1));
    if ( (unsigned __int64)v10 >= v9 )
      v8 = v9 + (v9 >> 1);
    if ( v8 >= v6 )
      v6 = v8;
    std::vector<ParticleVertexBuffer>::_Reallocate(this, v6, v6, v10);
  }
}

ParticleVertexBuffer *__fastcall std::vector<ParticleVertexBuffer>::at(
        std::vector<ParticleVertexBuffer> *this,
        unsigned __int64 _Pos)
{
  if ( this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst <= _Pos )
    std::_Xout_of_range("invalid vector<T> subscript");
  return &this->_Mypair._Myval2._Myfirst[_Pos];
}

void __fastcall ParticleTypeStateStripe::calcWorldMat(
        ParticleTypeStateStripe *this,
        ParticleData *pParticleData,
        EffectData *pEffectData)
{
  OGLEffectMatrix *p_GlobalMat; // r10
  OGLEffectMatrix *p_LocalMat; // rcx
  OGLMatrix *v7; // rax
  OGLEffectMatrix *p_ReferenceMat; // rbx
  OGLMatrix *v9; // r8
  OGLMatrix *v10; // rdx
  OGLMatrix *v11; // r9
  __int64 v12; // r10
  __int64 v13; // r8
  DialogData *Myfirst; // rcx
  OGLMatrix *v15; // rax
  float v16; // xmm2_4
  float v17; // xmm7_4
  DialogData *v18; // rcx
  OGLMatrix *v19; // rdx
  signed __int64 v20; // rcx
  DialogData *v21; // rcx
  BattleSystem::BattleController *v22; // rcx
  BattleSystem::BattleController *v23; // rax
  int *CameraPos; // rax
  BattleSystem::BattleController *v25; // rcx
  BattleSystem::BattleController *v26; // rax
  float x; // xmm0_4
  float y; // xmm1_4
  float z; // xmm2_4
  float v30; // xmm2_4
  float v31; // xmm3_4
  float v32; // xmm15_4
  DialogData *v33; // rcx
  int v34; // edx
  int v35; // edx
  float v36; // xmm13_4
  float v37; // xmm12_4
  float v38; // xmm11_4
  float AngleBetweenVectors; // xmm9_4
  float v40; // xmm10_4
  float v41; // xmm6_4
  float v42; // xmm11_4
  float v43; // xmm9_4
  float v44; // xmm0_4
  float v45; // xmm8_4
  float v46; // xmm6_4
  float v47; // xmm7_4
  float w; // xmm0_4
  float v49; // xmm2_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  DialogData *v52; // rcx
  float *v53; // rdx
  float v54; // xmm2_4
  float v55; // xmm1_4
  __int64 v56; // rcx
  float v57; // [rsp+38h] [rbp-D0h]
  float v58; // [rsp+3Ch] [rbp-CCh]
  OGLVec3 v59; // [rsp+40h] [rbp-C8h] BYREF
  void **v60; // [rsp+50h] [rbp-B8h]
  OGLVec3 v; // [rsp+58h] [rbp-B0h] BYREF
  float v62; // [rsp+68h] [rbp-A0h]
  float v63; // [rsp+6Ch] [rbp-9Ch]
  OGLMatrix In; // [rsp+78h] [rbp-90h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-50h]
  void **v66; // [rsp+C8h] [rbp-40h]
  OGLVec3 second; // [rsp+D0h] [rbp-38h] BYREF
  BattleSystem::BattleController *v68; // [rsp+E0h] [rbp-28h]
  void **v69; // [rsp+E8h] [rbp-20h]
  OGLVec3 v70; // [rsp+F0h] [rbp-18h] BYREF
  void **v71; // [rsp+100h] [rbp-8h]
  OGLVec3 v72; // [rsp+108h] [rbp+0h] BYREF
  void **v73; // [rsp+118h] [rbp+10h]
  __int64 v74; // [rsp+120h] [rbp+18h]
  int v75; // [rsp+128h] [rbp+20h]
  void **v76; // [rsp+130h] [rbp+28h]
  unsigned __int64 v77; // [rsp+138h] [rbp+30h]
  void *v78; // [rsp+140h] [rbp+38h]
  void **v79; // [rsp+148h] [rbp+40h]
  OGLVec3 v80; // [rsp+150h] [rbp+48h]
  void **v81; // [rsp+160h] [rbp+58h]
  int v82; // [rsp+168h] [rbp+60h]
  int v83; // [rsp+16Ch] [rbp+64h]
  int v84; // [rsp+170h] [rbp+68h]
  __int64 v85; // [rsp+178h] [rbp+70h]
  OGLVec3 result; // [rsp+180h] [rbp+78h] BYREF
  void **v87; // [rsp+198h] [rbp+90h]
  OGLMatrix v88; // [rsp+1A0h] [rbp+98h] BYREF
  OGLEffectMatrix v89; // [rsp+1E8h] [rbp+E0h] BYREF

  v85 = -2i64;
  p_GlobalMat = &pParticleData->GlobalMat;
  v87 = &OGLEffectMatrix::`vftable';
  p_LocalMat = &pParticleData->LocalMat;
  v7 = &pParticleData->LocalMat.OGLMatrix;
  if ( pParticleData == (ParticleData *)-184i64 )
    v7 = 0i64;
  v88 = *v7;
  p_ReferenceMat = &pParticleData->ReferenceMat;
  v9 = &pParticleData->ReferenceMat.OGLMatrix;
  if ( pParticleData == (ParticleData *)-328i64 )
    v9 = 0i64;
  v10 = &pParticleData->LocalMat.OGLMatrix;
  if ( !p_LocalMat )
    v10 = 0i64;
  OGLMatrix::multiply(&p_GlobalMat->OGLMatrix, v10, v9);
  v13 = 0x2AAAAAAAAAAAAAABi64;
  if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                        - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  Myfirst = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[2].allComboIndexData._Mypair._Myval2._Mylast - Myfirst[2].allComboIndexData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *Myfirst[2].allComboIndexData._Mypair._Myval2._Myfirst == 1 )
  {
    v15 = &pParticleData->ReferenceMat.OGLMatrix;
    if ( !p_ReferenceMat )
      v15 = 0i64;
    v16 = (float)((float)((float)(v88.m[12] * v15->m[1]) + (float)(v88.m[13] * v15->m[5]))
                + (float)(v88.m[14] * v15->m[9]))
        + (float)(v88.m[15] * v15->m[13]);
    v17 = (float)((float)((float)(v88.m[12] * v15->m[2]) + (float)(v88.m[13] * v15->m[6]))
                + (float)(v88.m[14] * v15->m[10]))
        + (float)(v88.m[15] * v15->m[14]);
    v88.m[12] = (float)((float)((float)(v88.m[13] * v15->m[4]) + (float)(v88.m[12] * v15->m[0]))
                      + (float)(v88.m[14] * v15->m[8]))
              + (float)(v88.m[15] * v15->m[12]);
    v88.m[13] = v16;
    v88.m[14] = v17;
    if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                          - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v18 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v18[2].allButtonIndexData._Mypair._Myval2._Mylast
                          - v18[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 7 )
      std::_Xout_of_range("invalid vector<T> subscript");
  }
  else
  {
    if ( !v12 )
      v11 = 0i64;
    v88 = *v11;
    if ( (unsigned __int64)(pEffectData->AllDialogData._Mypair._Myval2._Mylast
                          - pEffectData->AllDialogData._Mypair._Myval2._Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v18 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v18[2].allButtonIndexData._Mypair._Myval2._Mylast
                          - v18[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 7 )
      std::_Xout_of_range("invalid vector<T> subscript");
  }
  if ( !v18[2].allButtonIndexData._Mypair._Myval2._Myfirst[7] )
  {
    v19 = &pParticleData->ActMat.OGLMatrix;
    if ( pParticleData == (ParticleData *)-472i64 )
      v19 = 0i64;
    OGLMatrix::multiply(&v88, v19);
  }
  *(_QWORD *)pParticleData->WorldMat.m = 1065353216i64;
  pParticleData->WorldMat.m[4] = 0.0;
  *(_QWORD *)&pParticleData->WorldMat.m[8] = 0i64;
  *(_QWORD *)&pParticleData->WorldMat.m[12] = 0i64;
  *(_QWORD *)&pParticleData->WorldMat.m[5] = 1065353216i64;
  *(_QWORD *)&pParticleData->WorldMat.m[2] = 0i64;
  *(_QWORD *)&pParticleData->WorldMat.m[10] = 1065353216i64;
  pParticleData->WorldMat.m[14] = 0.0;
  pParticleData->WorldMat.m[7] = 0.0;
  pParticleData->WorldMat.m[15] = 1.0;
  v20 = (char *)pEffectData->AllDialogData._Mypair._Myval2._Mylast
      - (char *)pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( ((unsigned __int64)((unsigned __int128)(v20 * (__int128)v13) >> 64) >> 63)
     + ((__int64)((unsigned __int128)(v20 * (__int128)v13) >> 64) >> 4) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v21 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v21[2].allButtonIndexData._Mypair._Myval2._Mylast
                        - v21[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 5 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( !v21[2].allButtonIndexData._Mypair._Myval2._Myfirst[5] )
  {
    *(_QWORD *)In.m = &OGLEffectMatrix::`vftable';
    *(_QWORD *)&In.m[2] = 1065353216i64;
    In.m[6] = 0.0;
    *(_QWORD *)&In.m[10] = 0i64;
    *(_QWORD *)&In.m[14] = 0i64;
    *(_QWORD *)&In.m[7] = 1065353216i64;
    *(_QWORD *)&In.m[4] = 0i64;
    *(_QWORD *)&In.m[12] = 1065353216i64;
    v65 = 0x3F80000000000000i64;
    In.m[9] = 0.0;
    v74 = 0i64;
    v75 = 0;
    v73 = &OGLEffectVec3::`vftable';
    v77 = 0i64;
    LODWORD(v78) = 0;
    v76 = &OGLEffectVec3::`vftable';
    *(_QWORD *)&v80.x = 0i64;
    v80.z = 0.0;
    v79 = &OGLEffectVec3::`vftable';
    v22 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v68 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v68);
      v22 = v23;
      BattleSystem::BattleController::instance = v23;
    }
    CameraPos = (int *)ActionSystem::GetCameraPos(&v22->actSystem, &result);
    v62 = *(float *)CameraPos;
    *(float *)&v74 = v62;
    v63 = *((float *)CameraPos + 1);
    *((float *)&v74 + 1) = v63;
    LODWORD(v68) = CameraPos[2];
    v75 = (int)v68;
    if ( !v25 )
    {
      *(_QWORD *)&v59.x = operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(*(BattleSystem::BattleController **)&v59.x);
      v25 = v26;
      BattleSystem::BattleController::instance = v26;
    }
    if ( v25->actSystem.bFreeCameraMode )
    {
      x = v25->actSystem.freeCamera.vUp.x;
      y = v25->actSystem.freeCamera.vUp.y;
      z = v25->actSystem.freeCamera.vUp.z;
    }
    else
    {
      x = v25->actSystem.cameraCtrl.vUp.x;
      y = v25->actSystem.cameraCtrl.vUp.y;
      z = v25->actSystem.cameraCtrl.vUp.z;
    }
    v77 = __PAIR64__(LODWORD(y), LODWORD(x));
    *(float *)&v78 = z;
    v80 = *ActionSystem::GetCameraLook(&v25->actSystem, &v59);
    v30 = 0.0;
    v82 = 0;
    v31 = 0.0;
    v83 = 0;
    v32 = 0.0;
    v84 = 0;
    v81 = &OGLEffectVec3::`vftable';
    v58 = 0.0;
    v.x = 0.0;
    v57 = 0.0;
    v.y = 0.0;
    v59.x = 0.0;
    v.z = 0.0;
    v60 = &OGLEffectVec3::`vftable';
    v33 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v33[2].allButtonIndexData._Mypair._Myval2._Mylast
                          - v33[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v34 = v33[2].allButtonIndexData._Mypair._Myval2._Myfirst[1];
    if ( v34 )
    {
      v35 = v34 - 1;
      if ( v35 )
      {
        if ( v35 == 1 )
        {
          v30 = 0.0;
          v32 = *(float *)&FLOAT_1_0;
          v58 = FLOAT_N1_0;
          v57 = 0.0;
LABEL_48:
          v59.x = 0.0;
          v31 = 0.0;
        }
      }
      else
      {
        v30 = 0.0;
        v31 = *(float *)&FLOAT_1_0;
        v32 = 0.0;
        v58 = 0.0;
        v57 = 0.0;
        LODWORD(v59.x) = FLOAT_1_0;
      }
      v36 = (float)((float)(v88.m[4] * v31) + (float)(v88.m[0] * v30)) + (float)(v88.m[8] * v32);
      v37 = (float)((float)(v88.m[5] * v31) + (float)(v88.m[1] * v30)) + (float)(v88.m[9] * v32);
      v38 = (float)((float)(v88.m[6] * v31) + (float)(v88.m[2] * v30)) + (float)(v88.m[10] * v32);
      v.x = (float)((float)(v88.m[4] * v57) + (float)(v88.m[0] * v58)) + (float)(v88.m[8] * v59.x);
      v.y = (float)((float)(v88.m[5] * v57) + (float)(v88.m[1] * v58)) + (float)(v88.m[9] * v59.x);
      v.z = (float)((float)(v88.m[6] * v57) + (float)(v88.m[2] * v58)) + (float)(v88.m[10] * v59.x);
      OGLVec3::normalize(&v, &v);
      v69 = &OGLEffectVec3::`vftable';
      v70.x = v62 - v88.m[12];
      v70.y = v63 - v88.m[13];
      v70.z = *(float *)&v68 - v88.m[14];
      OGLVec3::normalize(&v70, &v70);
      v66 = &OGLEffectVec3::`vftable';
      second.x = (float)(v37 * v70.z) - (float)(v38 * v70.y);
      second.y = (float)(v38 * v70.x) - (float)(v36 * v70.z);
      second.z = (float)(v36 * v70.y) - (float)(v37 * v70.x);
      OGLVec3::normalize(&second, &second);
      AngleBetweenVectors = OGLEffectVec3::getAngleBetweenVectors(&v, &second);
      v71 = &OGLEffectVec3::`vftable';
      v72.x = (float)(v.y * second.z) - (float)(v.z * second.y);
      v72.y = (float)(v.z * second.x) - (float)(second.z * v.x);
      v72.z = (float)(second.y * v.x) - (float)(v.y * second.x);
      OGLVec3::normalize(&v72, &v72);
      v40 = v72.y;
      v41 = v72.x;
      v42 = v72.z;
      if ( sqrtf((float)((float)(v40 * v40) + (float)(v41 * v41)) + (float)(v42 * v42)) != 0.0
        && AngleBetweenVectors != 0.0 )
      {
        v43 = AngleBetweenVectors * 0.5;
        v44 = sinf(v43);
        v45 = v44 * v41;
        v46 = v44 * v40;
        v47 = v44 * v42;
        w = cosf(v43);
        memset(&v89.OGLMatrix, 0, sizeof(v89.OGLMatrix));
        v89.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
        OGLEffectMatrix::rotationQuaternion(&v89, v45, v46, v47, w);
        OGLMatrix::multiply(&pParticleData->WorldMat.OGLMatrix, &v89.OGLMatrix);
      }
      goto LABEL_52;
    }
    v30 = *(float *)&FLOAT_1_0;
    v32 = 0.0;
    v58 = 0.0;
    v57 = FLOAT_N1_0;
    goto LABEL_48;
  }
LABEL_52:
  v49 = pParticleData->LocalScale.z;
  v50 = pParticleData->LocalScale.y;
  v51 = pParticleData->LocalScale.x;
  In.m[1] = 0.0;
  *(_QWORD *)&In.m[2] = 0i64;
  In.m[4] = 0.0;
  *(_QWORD *)&In.m[6] = 0i64;
  *(_QWORD *)&In.m[8] = 0i64;
  In.m[11] = 0.0;
  *(_QWORD *)&In.m[12] = 0i64;
  In.m[14] = 0.0;
  In.m[0] = v51;
  In.m[5] = v50;
  In.m[10] = v49;
  In.m[15] = 1.0;
  OGLMatrix::multiply(&pParticleData->WorldMat.OGLMatrix, &In);
  v52 = pEffectData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v52[2].allEditNumData._Mypair._Myval2._Mylast - v52[2].allEditNumData._Mypair._Myval2._Myfirst) <= 3 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v53 = v52[2].allEditNumData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v52[2].allEditNumData._Mypair._Myval2._Mylast - v53) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v54 = v53[3] * pParticleData->LocalScale.y;
  v55 = pParticleData->LocalScale.z;
  pParticleData->WorldMat.m[12] = (float)(v53[2] * pParticleData->LocalScale.x) + pParticleData->WorldMat.m[12];
  pParticleData->WorldMat.m[13] = v54 + pParticleData->WorldMat.m[13];
  pParticleData->WorldMat.m[14] = (float)(v55 * 0.0) + pParticleData->WorldMat.m[14];
  pParticleData->WorldMat.m[15] = 1.0;
  OGLMatrix::multiplyRotate(&pParticleData->WorldMat.OGLMatrix, &v88);
  *(float *)(v56 + 48) = v88.m[12] + *(float *)(v56 + 48);
  *(float *)(v56 + 52) = v88.m[13] + *(float *)(v56 + 52);
  *(float *)(v56 + 56) = v88.m[14] + *(float *)(v56 + 56);
  *(_DWORD *)(v56 + 60) = 1065353216;
}

void __fastcall std::_Wrap_alloc<std::allocator<ParticleVertexBuffer>>::deallocate(
        std::_Wrap_alloc<std::allocator<ParticleVertexBuffer> > *this,
        ParticleVertexBuffer *_Ptr,
        unsigned __int64 _Count)
{
  ParticleVertexBuffer *uv; // rax
  char *v4; // rdx

  if ( _Count > 0x444444444444444i64 )
    invalid_parameter_noinfo_noreturn();
  if ( 60 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    uv = (ParticleVertexBuffer *)_Ptr[-1].uv;
    if ( uv >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)uv);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = uv;
  }
  operator delete(_Ptr);
}

void __fastcall ParticleTypeStateStripe::loadFigure(ParticleTypeStateStripe *this, const char *filename)
{
  unsigned int *p_vertexCount; // rdi
  __int64 v4; // rsi
  ParticleEmitterData *m_pParticleEmitterData; // rcx
  DialogData *Myfirst; // r8
  DialogData *v7; // rcx
  float *v8; // rdx
  DialogData *v9; // rcx
  float *v10; // rdx
  float v11; // xmm0_4
  DialogData *v12; // rcx
  float *v13; // rdx
  DialogData *v14; // rcx
  float *v15; // rdx
  float v16; // xmm0_4
  DialogData *v17; // rcx
  float *v18; // rdx
  DialogData *v19; // rcx
  float *v20; // rdx
  float v21; // xmm0_4
  DialogData *v22; // rcx
  float *v23; // rdx
  DialogData *v24; // rcx
  float *v25; // rdx
  float v26; // xmm0_4
  DialogData *v27; // rcx
  float *v28; // rdx
  DialogData *v29; // rcx
  float *v30; // rdx
  float *texCoord; // rcx
  float *color; // rcx
  float *v33; // rax
  ParticleEmitterData *v34; // rcx
  DialogData *v35; // r8
  float *v36; // rdx
  ParticleEmitterData *v37; // rcx
  DialogData *v38; // r8
  float *v39; // rdx
  ParticleEmitterData *v40; // rcx
  DialogData *v41; // r8
  float *v42; // rcx

  p_vertexCount = &this->m_EffectMeshData[0].vertexCount;
  v4 = 0i64;
  do
  {
    p_vertexCount[2] = 2;
    *p_vertexCount = 2;
    m_pParticleEmitterData = this->m_pParticleEmitterData;
    Myfirst = m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Mylast - Myfirst) <= 2 )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( (unsigned __int64)(Myfirst[2].allButtonIndexData._Mypair._Myval2._Mylast
                          - Myfirst[2].allButtonIndexData._Mypair._Myval2._Myfirst) <= 4 )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->stripeType = Myfirst[2].allButtonIndexData._Mypair._Myval2._Myfirst[4] != 0;
    this->uvColor1Size[0] = 1.0;
    this->uvColor1Size[1] = 1.0;
    v7 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v8 = v7[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( !(v7[3].allEditNumData._Mypair._Myval2._Mylast - v8) )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->uvColor1Size[0] = 1.0 / *v8;
    v9 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v10 = v9[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v9[3].allEditNumData._Mypair._Myval2._Mylast - v10) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v11 = 1.0 / v10[1];
    this->uvColor2Size[0] = 1.0;
    this->uvColor2Size[1] = 1.0;
    this->uvColor1Size[1] = v11;
    v12 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v13 = v12[4].allEditNumData._Mypair._Myval2._Myfirst;
    if ( !(v12[4].allEditNumData._Mypair._Myval2._Mylast - v13) )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->uvColor2Size[0] = 1.0 / *v13;
    v14 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v15 = v14[4].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v14[4].allEditNumData._Mypair._Myval2._Mylast - v15) <= 1 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v16 = 1.0 / v15[1];
    this->uvAlpha1Size[0] = 1.0;
    this->uvAlpha1Size[1] = 1.0;
    this->uvColor2Size[1] = v16;
    v17 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v18 = v17[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v17[3].allEditNumData._Mypair._Myval2._Mylast - v18) <= 0xE )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->uvAlpha1Size[0] = 1.0 / v18[14];
    v19 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v20 = v19[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v19[3].allEditNumData._Mypair._Myval2._Mylast - v20) <= 0xF )
      std::_Xout_of_range("invalid vector<T> subscript");
    v21 = 1.0 / v20[15];
    this->uvAlpha2Size[0] = 1.0;
    this->uvAlpha2Size[1] = 1.0;
    this->uvAlpha1Size[1] = v21;
    v22 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v23 = v22[4].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v22[4].allEditNumData._Mypair._Myval2._Mylast - v23) <= 7 )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->uvAlpha2Size[0] = 1.0 / v23[7];
    v24 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v25 = v24[4].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v24[4].allEditNumData._Mypair._Myval2._Mylast - v25) <= 8 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v26 = 1.0 / v25[8];
    this->uvNormalSize[0] = 1.0;
    this->uvNormalSize[1] = 1.0;
    this->uvAlpha2Size[1] = v26;
    v27 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v28 = v27[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v27[3].allEditNumData._Mypair._Myval2._Mylast - v28) <= 7 )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->uvNormalSize[0] = 1.0 / v28[7];
    v29 = this->m_pParticleEmitterData->AllDialogData._Mypair._Myval2._Myfirst;
    v30 = v29[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v29[3].allEditNumData._Mypair._Myval2._Mylast - v30) <= 8 )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->uvNormalSize[1] = 1.0 / v30[8];
    texCoord = this->texCoord;
    if ( texCoord )
    {
      free(texCoord);
      this->texCoord = 0i64;
    }
    color = this->color;
    if ( color )
    {
      free(color);
      this->color = 0i64;
    }
    this->texCoord = (float *)malloc(0x10ui64);
    v33 = (float *)malloc(0x10ui64);
    v34 = this->m_pParticleEmitterData;
    this->color = v33;
    v35 = v34->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v34->AllDialogData._Mypair._Myval2._Mylast - v35) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v36 = v35[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v35[3].allEditNumData._Mypair._Myval2._Mylast - v36) <= 5 )
      std::_Xout_of_range("invalid vector<T> subscript");
    *this->texCoord = v36[5];
    v37 = this->m_pParticleEmitterData;
    v38 = v37->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v37->AllDialogData._Mypair._Myval2._Mylast - v38) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v39 = v38[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v38[3].allEditNumData._Mypair._Myval2._Mylast - v39) <= 4 )
      std::_Xout_of_range("invalid vector<T> subscript");
    this->texCoord[1] = v39[4];
    v40 = this->m_pParticleEmitterData;
    v41 = v40->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v40->AllDialogData._Mypair._Myval2._Mylast - v41) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v42 = v41[3].allEditNumData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v41[3].allEditNumData._Mypair._Myval2._Mylast - v42) <= 6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    ++v4;
    this->texCoord[2] = (float)(v42[6] * 3.1415927) / 180.0;
    *this->color = 1.0;
    *((_DWORD *)this->color + 1) = 1065353216;
    *((_DWORD *)this->color + 2) = 1065353216;
    *((_DWORD *)this->color + 3) = 1065353216;
    *(p_vertexCount - 35) = 5;
    p_vertexCount += 42;
  }
  while ( v4 < 2 );
}

void __fastcall std::vector<ParticleVertexBuffer>::push_back(
        std::vector<ParticleVertexBuffer> *this,
        const ParticleVertexBuffer *_Val)
{
  ParticleVertexBuffer *Mylast; // rcx
  ParticleVertexBuffer *Myfirst; // rax
  signed __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  ParticleVertexBuffer *v8; // rdx
  ParticleVertexBuffer *v9; // rcx
  ParticleVertexBuffer *v10; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  if ( _Val >= Mylast || (Myfirst = this->_Mypair._Myval2._Myfirst, this->_Mypair._Myval2._Myfirst > _Val) )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<ParticleVertexBuffer>::_Reserve(this, (unsigned __int64)_Val);
    v10 = this->_Mypair._Myval2._Mylast;
    if ( v10 )
    {
      v10->position.x = _Val->position.x;
      v10->position.y = _Val->position.y;
      v10->position.z = _Val->position.z;
      v10->normal.x = _Val->normal.x;
      v10->normal.y = _Val->normal.y;
      v10->normal.z = _Val->normal.z;
      v10->tangent.x = _Val->tangent.x;
      v10->tangent.y = _Val->tangent.y;
      v10->tangent.z = _Val->tangent.z;
      v10->color = _Val->color;
      v10->uv = _Val->uv;
    }
    ++this->_Mypair._Myval2._Mylast;
  }
  else
  {
    v6 = (char *)_Val - (char *)Myfirst;
    v7 = (unsigned __int128)(((char *)_Val - (char *)Myfirst) * (__int128)(__int64)0x8888888888888889ui64) >> 64;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<ParticleVertexBuffer>::_Reserve(this, v7);
    v8 = this->_Mypair._Myval2._Mylast;
    if ( v8 )
    {
      v9 = &this->_Mypair._Myval2._Myfirst[v6 / 60];
      v8->position.x = v9->position.x;
      v8->position.y = v9->position.y;
      v8->position.z = v9->position.z;
      v8->normal.x = v9->normal.x;
      v8->normal.y = v9->normal.y;
      v8->normal.z = v9->normal.z;
      v8->tangent.x = v9->tangent.x;
      v8->tangent.y = v9->tangent.y;
      v8->tangent.z = v9->tangent.z;
      v8->color = v9->color;
      v8->uv = v9->uv;
    }
    ++this->_Mypair._Myval2._Mylast;
  }
}

