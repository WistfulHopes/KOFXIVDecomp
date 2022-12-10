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
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingtargetpc.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netbattle.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.h"
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
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netutl.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netbattle.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/crc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/onlinesavedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingtargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/commonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingtransceiverpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/invitationcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/invitationsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/replace.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/voicechatpc.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/exutil.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/auxscript.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.cpp"

enum <unnamed-enum-RECV_MSG_BUFFER_UDP>
{
	RECV_MSG_BUFFER_UDP = 0,
	RECV_MSG_BUFFER_MAX = 1,
};
SEND_MESSAGE * pSendMsgSub[12]; // 0x140A97540
const unsigned char * AES128_iv_obfuscatedPtr; // 0x140A9C708
SEND_MESSAGE * pRecvMsg[1]; // 0x140A97538
SEND_MESSAGE * pSendMsg; // 0x140A975A0
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5C680
void(*g_NetworkManager$initializer$)(); // 0x140740800
SEND_MESSAGE * pSendMsgLog; // 0x140A975A8
SEND_MESSAGE * pSendVoiceMsg; // 0x140A975B0
std::piecewise_construct_t std::piecewise_construct; // 0x14089E3A6
SEND_MESSAGE * pSendMsgSub2[12]; // 0x140A975C0
NetManager::NetManager(); // 0x140161E20
NET_GAMEDATA::~NET_GAMEDATA(); // 0x140162070
NetManager::~NetManager(); // 0x1401620E0
NetManager::ThreadHost::~ThreadHost(); // 0x1400305A0
bool NetManager::Startup(); // 0x1401621A0
void NetManager::ThreadHost::onExecuteThread(); // 0x140162550
void NetManager::Update(); // 0x140162570
LEADERBOARD_AREA NetManager::GetUserCountry(unsigned char * pCountry); // 0x1401629D0
void NetManager::KickoutRoomMember(unsigned char pno); // 0x140162B30
long NetManager::FilteringMyGradeSearchRoom(long cnt); // 0x140162BE0
bool NetManager::RequestJoinRoom(long roomIdx, CSteamID roomId, bool password); // 0x140162EF0
void NetManager::SendRoomChatMessage(char * anyMessage, char * pMessage, bool battleFlag); // 0x140163230
long NetManager::RecvRoomChatMessage(Fw::ROOM_CHATMESSAGE_INFO * pRoomChatMessageArray); // 0x1401633F0
unsigned char NetManager::GetCharacterId(long playerId, long idx); // 0x140163860
unsigned char NetManager::GetCharacterColorId(long playerId, long idx); // 0x1401638E0
unsigned char NetManager::GetCharacterCostumeId(long playerId, long idx); // 0x140163950
long NetManager::GetBattleMemberInfo(NET_USER_DATA * pInfo); // 0x140163970
long NetManager::GetBattleMemberNameList(Fw::ONLINEID * pNameList); // 0x140163A90
unsigned char NetManager::GetBattleStartTableRoomMemberInfo(NET_USER_DATA * pInfo); // 0x140163B30
void NetManager::GetBattleStartTableRoomMemberInfo(long pno, NET_USER_DATA * pInfo); // 0x140163DF0
unsigned char NetManager::GetFreeMatchResultMember(unsigned char seatNo, NET_USER_DATA * pList); // 0x140163E90
void NetManager::SetPresetCharacterTeam(bool randomUpdate); // 0x140163FC0
void NetManager::SetRequestJoinUser(ROOM_JOIN_USER_RANK * pUser); // 0x1401640A0
void NetManager::SetRequestJoinUser(ROOM_JOIN_USER_FREE * pUser); // 0x140164320
void NetManager::SetSeatBattleInfoFromUserInfo(MsgSeatRequest * pVersusSeat, GAME_RULE gameRule); // 0x140164430
bool NetManager::IsTableBattleStartComplete(unsigned char seatNo); // 0x1401646B0
void NetManager::SendReadyTableBattleStart(unsigned char seatNo, MsgJoinComplete * pMsgJoinComplete); // 0x140164770
bool NetManager::IsBattleSeat(GAME_RULE gameRule, unsigned char seatNo); // 0x140164FA0
void NetManager::SetOrder(long playerNo, unsigned char characterIdx, unsigned char order); // 0x140165020
unsigned char NetManager::GetCharacterFix(long playerNo, unsigned char characterIdx); // 0x1401650C0
bool NetManager::IsOrderSelectEnd(); // 0x140165160
void NetManager::RequestLeaveRoom(); // 0x140165270
bool NetManager::GetSpectatorStartSeatNo(unsigned char seatNo, GAME_RULE gameRule); // 0x1401652D0
void NetManager::CreateRoom(Fw::ROOM_ATTR * pRoomAttr); // 0x140165370
void NetManager::RequestSearchRoom(Fw::ROOM_ATTR * pRoomAttr, long searchCountNum); // 0x140165420
bool NetManager::UpdateSeatLeaveSeat(unsigned char pno, unsigned char seatNo, SEND_MESSAGE * pMsg); // 0x140165540
void NetManager::UpdateSeatLeave(unsigned char pno, SEND_MESSAGE * pMsg); // 0x1401657B0
void NetManager::UpdateSeatSit(unsigned char pno, unsigned char seatNo, SEAT_FLAG seatFlag, BATTLE_WAIT_STATE battleWaitState, NETWORK_ROOM_BATTLE_TYPE battleType, SEND_MESSAGE * pMsg, bool backRoomFlag); // 0x1401658B0
void NetManager::UpdateSeatBattleWait(MsgSeatRequest * pMsgSeatRequest); // 0x140165AC0
void NetManager::CallGayaSe(NETWORK_GAYA_TYPE seNo); // 0x140165FE0
const char * NetManager::GetGayaSEName(NETWORK_GAYA_TYPE seNo); // 0x140166060
void NetManager::ProcessJoinRequest(SEND_MESSAGE * pMsg, CSteamID addr, bool rankMatchFlag); // 0x140166160
void NetManager::ProcessJoinCompleteRank(SEND_MESSAGE * pMsg, CSteamID addr); // 0x140166680
void NetManager::ProcessJoinComplete(SEND_MESSAGE * pMsg, CSteamID addr); // 0x1401667C0
void NetManager::ProcessSitSeatRequest(SEND_MESSAGE * pMsg, CSteamID addr); // 0x140166960
void NetManager::ProcessSitSeatComple(SEND_MESSAGE * pMsg); // 0x140166A30
void NetManager::ProcessTableComple(SEND_MESSAGE * pMsg); // 0x140166B90
void NetManager::ProcessTableDiscrete(SEND_MESSAGE * pMsg, bool changeStateFlag); // 0x140167010
void NetManager::ProcessCharacterSelect(SEND_MESSAGE * pMsg); // 0x140167170
void NetManager::ProcessCharacterSelectNotParty(SEND_MESSAGE * pMsg); // 0x1401677A0
void NetManager::ProcessCharacterSelectComplete(SEND_MESSAGE * pMsg); // 0x140168040
void NetManager::ProcessBattleLoadEnd(SEND_MESSAGE * pMsg); // 0x1401684A0
void NetManager::ProcessLeaveRoom(SEND_MESSAGE * pMsg); // 0x140168550
void NetManager::ProcessBackRoom(SEND_MESSAGE * pMsg); // 0x1401686F0
void NetManager::ProcessBattleCommand(SEND_MESSAGE * pMsg); // 0x1401687E0
void NetManager::ProcessBattleCommandTcp(SEND_MESSAGE * pMsg); // 0x140168920
void NetManager::ProcessGameResultMenu(SEND_MESSAGE * pMsg); // 0x140168AB0
void NetManager::ProcessGameResultMenu(unsigned char pno, unsigned char cursor, unsigned char result, bool lockFlag); // 0x140168D90
void NetManager::ProcessGameResultNextScene(SEND_MESSAGE * pMsg); // 0x140169650
void NetManager::ProcessTrainingMenu(SEND_MESSAGE * pMsg); // 0x140169790
void NetManager::ChangeState(ONLINE_STATE nextOnlineState, long debugNo); // 0x140169AB0
void NetManager::errorCheck(ONLINE_STATE onlineState); // 0x14016A0B0
bool NetManager::kickOutCheck(); // 0x14016A1B0
void NetManager::updateTop(); // 0x14016A200
void NetManager::updateCreatingRoom(); // 0x14016A280
void NetManager::updateSearchingRoom(); // 0x14016A570
void NetManager::updateJoiningRoom(); // 0x14016A730
void NetManager::updateWaitStart(); // 0x14016A810
void NetManager::updateBattle(); // 0x14016A880
void NetManager::checkRoomMemberAntenna(); // 0x14016A9D0
void NetManager::disconnectCheck(); // 0x14016AA80
void NetManager::sortRoomInfoForRtt(Fw::ROOM_ATTR * pRoomAttrList, long roomNum); // 0x14016B1D0
void NetManager::clearPlayerData(long idx); // 0x14016B680
void NetManager::setJoinUser(NET_USER_DATA * pOut, char * pName, ROOM_JOIN_USER_RANK * pJoinUser, unsigned char playerIndex, CSteamID * pAddr); // 0x14016B720
void NetManager::convertRoomMemberFromUserData(ROOM_USER_DATA_RANK * pDest, NET_USER_DATA * pSrc); // 0x14016B8F0
void NetManager::convertRoomMemberFromUserData(ROOM_USER_DATA * pDest, NET_USER_DATA * pSrc); // 0x14016BA60
void NetManager::convertUserDataFromRoomMember(NET_USER_DATA * pDest, ROOM_USER_DATA_RANK * pSrc); // 0x14016BB70
void NetManager::convertUserDataFromRoomMember(NET_USER_DATA * pDest, ROOM_USER_DATA * pSrc); // 0x14016BCC0
void NetManager::setUserDataFromRoomMemberInfo(ROOM_USER_DATA_RANK * pRoomMemberList, unsigned char roomMemberNum); // 0x14016BD80
void NetManager::setUserDataFromRoomMemberInfo(ROOM_USER_DATA * pRoomMemberList, unsigned char roomMemberNum, unsigned char myNo); // 0x14016BE90
void NetManager::setAllTableBattleType(GAME_RULE gameRule, NETWORK_ROOM_BATTLE_TYPE type); // 0x14016BFE0
void NetManager::setCharacterInfoFromUserInfo(unsigned char pno, unsigned char seatNo); // 0x14016C080
void NetManager::setSeatUserFromPlayerData(SEAT_USER_DATA * pOut, NET_USER_DATA & user); // 0x14016C270
void NetManager::setPlayerDataFromSeatUser(NET_USER_DATA * pOut, SEAT_USER_DATA * pSeatUser, GAME_RULE gameRule); // 0x14016C380
void NetManager::setPlayerDataFromSeatUser(NET_USER_DATA * pOut, SEAT_USER_DATA_PARTY * pSeatUser, bool my); // 0x14016C580
void NetManager::setTeamAndOrder(NET_USER_DATA * pOut, unsigned char teamId, unsigned char order, unsigned char order2, unsigned char order3, bool my); // 0x14016C6A0
void NetManager::resetSendFrequency(ONLINE_STATE state); // 0x14016C740
void NetManager::updateTimeStamp(); // 0x14016C810
void NetManager::updateRoomInfo(Fw::ROOM_ATTR * pRoomAttr); // 0x14016C870
void NetManager::resetLocalData(); // 0x14016CA80
void NetManager::resetPlayer(unsigned char pno); // 0x14016CB60
BATTLE_WAIT_STATE NetManager::getBattleWaitState(unsigned char seatNo); // 0x14016CC80
void NetManager::clearOrderTable(unsigned char startSeatNo, unsigned char endSeatNo, bool clearFix); // 0x14016CD00
void NetManager::clearOrderTable2(unsigned char startSeatNo, unsigned char endSeatNo, bool clearFix); // 0x14016CE70
void NetManager::clearOrderTable3(unsigned char startSeatNo, unsigned char endSeatNo); // 0x14016CF60
bool NetManager::isTimeout(unsigned long long time); // 0x14016D040
unsigned char NetManager::CalcAddDelayFrame(); // 0x14016D0C0
unsigned char NetManager::CalcAddDelayFrame2(bool isParty, float antennaAvg, long antennaOneNum, long antennaTwoNum, float antennaBattleAvg); // 0x14016D150
void NetManager::RequestChangeCharacter(unsigned char myid, unsigned char idx, unsigned char characterNo, unsigned char colorID, unsigned char costumeId, bool fix); // 0x14016D260
void NetManager::SendMessageW(SEND_MESSAGE * pMsg, void * opt, long to_send, long optNum); // 0x14016D440
char NetManager::CalcRankMatchMemberAntenna(long idx); // 0x14016D6B0
char NetManager::CalcFreeMAtchMemberAntenna(long playerId); // 0x14016D770
char NetManager::CalcRttAntenna(unsigned long rtt); // 0x14016D850
bool NetManager::SitSeatRequest(unsigned char pNo, unsigned char seatNo, SEAT_FLAG seatFlag, NETWORK_ROOM_BATTLE_TYPE battleType, BATTLE_WAIT_STATE battleWaitState, unsigned char * pSeatNo, BATTLE_WAIT_STATE * pBattleWaitState); // 0x14016D8C0
unsigned char NetManager::GetEmptySeatNo(unsigned char seatNo, BATTLE_WAIT_STATE battleWaitState); // 0x14016DBB0
void * SendThread(void * pParam); // 0x14016DD80
void * RecvThreadUdp(void * pParam); // 0x14016ED50
void NetManager::MessageAnalyze(bool tcpFlag, SEND_MESSAGE * pMessage, unsigned long long messageSize, CSteamID & sin, unsigned long len, long index); // 0x14016EFF0
PLAYER_ID NetManager::GetPlayerID(long myNo); // 0x14016F680
void NetManager::GetPlayerName(PLAYER_ID playerID, char * name, RANKMATCH_DISCONNECT_MARKER * maker, long index); // 0x14016F790
long NetManager::GetPNo(PLAYER_ID playerID, long index); // 0x14016F9B0
long NetManager::GetPlayerIndex(long myNo); // 0x14016FB10
NETWORK_ROOM_BATTLE_TYPE NetManager::GetMyTableBattleTypeFromSeat(long seatNo); // 0x14016FBF0
const char * NetManager::GetNetworkErrorKey(NETWORK_ERROR_TYPE errorType); // 0x14016FC70
void NetManager::keepRandomFlag(); // 0x14016FD10
void NetManager::RandomCharaState(); // 0x14016FE30//decompilation failure at 140A97540!
//decompilation failure at 140A9C708!
//decompilation failure at 140A97538!
//decompilation failure at 140A975A0!
//decompilation failure at 140A5C680!
//decompilation failure at 140740800!
//decompilation failure at 140A975A8!
//decompilation failure at 140A975B0!
//decompilation failure at 14089E3A6!
//decompilation failure at 140A975C0!
void __fastcall NetManager::NetManager(NetManager *this)
{
  AgPointer<AgThread> *m_Thread; // rbx
  AgReferenceCount *m_ref; // rdi
  AgThread *m_ptr; // rsi
  int v4; // ebp
  int v5; // er8

  g_NetworkManager.m_sendThreadHost.m_abort = 0;
  g_NetworkManager.m_sendThreadHost.m_running = 1;
  g_NetworkManager.m_sendThreadHost.__vftable = (NetManager::ThreadHost_vtbl *)&NetManager::ThreadHost::`vftable';
  g_NetworkManager.m_sendThreadHost.m_manager = &g_NetworkManager;
  g_NetworkManager.m_sendThreadHost.m_func = SendThread;
  g_NetworkManager.m_recvUDPThreadHost.m_abort = 0;
  g_NetworkManager.m_recvUDPThreadHost.m_running = 1;
  g_NetworkManager.m_recvUDPThreadHost.__vftable = (NetManager::ThreadHost_vtbl *)&NetManager::ThreadHost::`vftable';
  g_NetworkManager.m_recvUDPThreadHost.m_manager = &g_NetworkManager;
  g_NetworkManager.m_recvUDPThreadHost.m_func = RecvThreadUdp;
  InitializeCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.m_Mutex);
  g_NetworkManager.m_Mutex.m_InitializeFlag = 0;
  Fw::ROOM_ATTR::ROOM_ATTR(&g_NetworkManager.gamedata.m_SearchRoomAttr);
  Fw::ROOM_ATTR::ROOM_ATTR(&g_NetworkManager.gamedata.m_TraingWaitRoomAttr);
  g_NetworkManager.rank_traning_wait.stageID = STAGE_ID_NONE;
  InitializeCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.roomsRTTMutex);
  `eh vector constructor iterator'(
    g_NetworkManager.m_Thread,
    0x10ui64,
    3ui64,
    (void (__fastcall *)(void *))AgPointer<AgController>::AgPointer<AgController>,
    (void (__fastcall *)(void *))AgPointer<AgUser>::~AgPointer<AgUser>);
  `eh vector constructor iterator'(
    g_NetworkManager.m_SearchEndRoomAttr,
    0x438ui64,
    0x32ui64,
    (void (__fastcall *)(void *))Fw::ROOM_ATTR::ROOM_ATTR,
    (void (__fastcall *)(void *))Fw::ROOM_ATTR::~ROOM_ATTR);
  `eh vector constructor iterator'(
    g_NetworkManager.m_AutoJoinRoomAttr,
    0x438ui64,
    0x32ui64,
    (void (__fastcall *)(void *))Fw::ROOM_ATTR::ROOM_ATTR,
    (void (__fastcall *)(void *))Fw::ROOM_ATTR::~ROOM_ATTR);
  g_NetworkManager.m_nextPingTick = 0i64;
  g_NetworkManager.m_nextQOSRequestTick = 0i64;
  memset(g_NetworkManager.obtainedRoomsRTT, -1, sizeof(g_NetworkManager.obtainedRoomsRTT));
  m_Thread = g_NetworkManager.m_Thread;
  do
  {
    m_ref = m_Thread->m_ref;
    m_ptr = m_Thread->m_ptr;
    m_Thread->m_ref = 0i64;
    m_Thread->m_ptr = 0i64;
    if ( m_ref )
    {
      v4 = 0;
      if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
      {
        if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
          v4 = 1;
        m_ref->m_data = 0i64;
        if ( m_ptr )
          ((void (__fastcall *)(AgThread *, __int64))m_ptr->~AgThread)(m_ptr, 1i64);
        if ( v4 )
          AgReferenceCount::operator delete(m_ref);
      }
    }
    ++m_Thread;
  }
  while ( (__int64)m_Thread < (__int64)g_NetworkManager.m_SearchEndRoomAttr );
  memset(&g_NetworkManager.gamedata, 0, sizeof(g_NetworkManager.gamedata));
  NetManager::ChangeState(&g_NetworkManager, NET_STATE_NONE, v5);
  g_NetworkManager.initFlag = 0;
  g_NetworkManager.m_Invitation_Doing = 0;
}

void __fastcall NET_GAMEDATA::~NET_GAMEDATA(NET_GAMEDATA *this)
{
  `eh vector destructor iterator'(
    this->m_TraingWaitRoomAttr.m_BlockedUser,
    0x10ui64,
    0x20ui64,
    (void (__fastcall *)(void *))AgUtilities::captureScreenshot);
  AgString::~AgString(&this->m_TraingWaitRoomAttr.m_RoomOwner.handle);
  `eh vector destructor iterator'(
    this->m_SearchRoomAttr.m_BlockedUser,
    0x10ui64,
    0x20ui64,
    (void (__fastcall *)(void *))AgUtilities::captureScreenshot);
  AgString::~AgString(&this->m_SearchRoomAttr.m_RoomOwner.handle);
}

void __fastcall NetManager::~NetManager(NetManager *this)
{
  `eh vector destructor iterator'(
    g_NetworkManager.m_AutoJoinRoomAttr,
    0x438ui64,
    0x32ui64,
    (void (__fastcall *)(void *))Fw::ROOM_ATTR::~ROOM_ATTR);
  `eh vector destructor iterator'(
    g_NetworkManager.m_SearchEndRoomAttr,
    0x438ui64,
    0x32ui64,
    (void (__fastcall *)(void *))Fw::ROOM_ATTR::~ROOM_ATTR);
  `eh vector destructor iterator'(
    g_NetworkManager.m_Thread,
    0x10ui64,
    3ui64,
    (void (__fastcall *)(void *))AgPointer<AgUser>::~AgPointer<AgUser>);
  DeleteCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.roomsRTTMutex);
  NET_GAMEDATA::~NET_GAMEDATA(&g_NetworkManager.gamedata);
  g_NetworkManager.m_Mutex.m_InitializeFlag = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.m_Mutex);
  g_NetworkManager.m_recvUDPThreadHost.__vftable = (NetManager::ThreadHost_vtbl *)&AgIThreadHost::`vftable';
  g_NetworkManager.m_sendThreadHost.__vftable = (NetManager::ThreadHost_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall extension::ExThread::Runnable::~Runnable(extension::ExThread::Runnable *this)
{
  this->__vftable = (extension::ExThread::Runnable_vtbl *)&AgIThreadHost::`vftable';
}

__int64 __fastcall NetManager::CalcAddDelayFrame2(
        NetManager *this,
        bool isParty,
        float antennaAvg,
        int antennaOneNum,
        int antennaTwoNum,
        float antennaBattleAvg)
{
  float v6; // xmm0_4
  unsigned __int8 v7; // cl
  bool v8; // cf
  unsigned __int8 v9; // cl
  __int64 result; // rax
  unsigned __int8 v11; // cl

  v6 = fminf(antennaBattleAvg, antennaAvg);
  if ( isParty )
  {
    if ( v6 >= 7.0 )
    {
      v7 = 2;
      goto LABEL_25;
    }
    if ( v6 >= 6.5 )
    {
      v7 = 3;
      goto LABEL_25;
    }
    if ( v6 >= 6.0 )
    {
      v7 = 4;
      goto LABEL_25;
    }
    if ( v6 >= 5.5 )
    {
      v7 = 5;
      goto LABEL_25;
    }
    v8 = v6 < 5.0;
  }
  else
  {
    if ( v6 >= 7.0 )
    {
      v7 = 0;
      goto LABEL_25;
    }
    if ( v6 >= 6.5 )
    {
      v7 = 1;
      goto LABEL_25;
    }
    if ( v6 >= 6.0 )
    {
      v7 = 2;
      goto LABEL_25;
    }
    if ( v6 >= 5.5 )
    {
      v7 = 3;
      goto LABEL_25;
    }
    if ( v6 >= 5.0 )
    {
      v7 = 4;
      goto LABEL_25;
    }
    if ( v6 >= 4.5 )
    {
      v7 = 5;
      goto LABEL_25;
    }
    v8 = v6 < 4.0;
  }
  v7 = v8 + 6;
LABEL_25:
  if ( antennaOneNum < 3 )
  {
    if ( antennaOneNum < 2 )
    {
      if ( antennaOneNum >= 1 )
        v7 += 3;
    }
    else
    {
      v7 += 4;
    }
  }
  else
  {
    v7 += 5;
  }
  if ( antennaTwoNum < 3 )
  {
    if ( antennaTwoNum < 2 )
    {
      if ( antennaOneNum >= 1 )
        ++v7;
      result = v7;
      if ( v7 > 7u )
        return 7i64;
    }
    else
    {
      v11 = v7 + 2;
      result = v11;
      if ( v11 > 7u )
        return 7i64;
    }
  }
  else
  {
    v9 = v7 + 3;
    result = v9;
    if ( v9 > 7u )
      return 7i64;
  }
  return result;
}

__int64 __fastcall NetManager::CalcAddDelayFrame(NetManager *this)
{
  __int64 result; // rax
  NET_USER_DATA pInfo[12]; // [rsp+20h] [rbp-5A8h] BYREF

  memset(pInfo, 0, sizeof(pInfo));
  NetManager::GetBattleStartTableRoomMemberInfo(this, pInfo);
  result = delayAddFrame[(*((_QWORD *)pInfo + 2) >> 15) & 7i64][(*((_DWORD *)&pInfo[1] + 4) >> 15) & 7];
  if ( delayAddFrame[(*((_QWORD *)pInfo + 2) >> 15) & 7i64][(*((_DWORD *)&pInfo[1] + 4) >> 15) & 7] > 7u )
    return 7i64;
  return result;
}

__int64 __fastcall NetManager::CalcFreeMAtchMemberAntenna(NetManager *this, int playerId)
{
  __int64 result; // rax
  char v3; // si
  int rtt; // ebx
  unsigned __int64 steamId; // rdi
  Fw::TUdpP2pInfo *i; // rax
  unsigned int v7; // edx
  char v8; // al
  char v9; // al

  if ( playerId == (unsigned __int8)this->gamedata.myNo )
    return this->gamedata.userInfo.m_Antenna;
  v3 = 0;
  rtt = 0;
  steamId = this->gamedata.player_data[playerId].steamId;
  EnterCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
  for ( i = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
        i != Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
        ++i )
  {
    if ( i->memberId == steamId )
      rtt = i->rtt;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
  if ( (double)rtt * 0.5 * 1.100000023841858 < 111000.0 )
    v8 = NetManager::CalcRttAntenna((NetManager *)(unsigned int)rtt, v7);
  else
    v8 = -7;
  v9 = v8 + 7;
  if ( v9 >= 0 )
    v3 = v9;
  result = (unsigned __int8)v3;
  if ( v3 >= 8 )
    return 7i64;
  return result;
}

__int64 __fastcall NetManager::CalcRankMatchMemberAntenna(NetManager *this, int idx)
{
  char v2; // si
  int rtt; // ebx
  unsigned __int64 steamId; // rdi
  Fw::TUdpP2pInfo *i; // rax
  unsigned int v6; // edx
  char v7; // al
  char v8; // al
  __int64 result; // rax

  v2 = 0;
  rtt = 0;
  steamId = this->gamedata.player_data[idx].steamId;
  EnterCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
  for ( i = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
        i != Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
        ++i )
  {
    if ( i->memberId == steamId )
      rtt = i->rtt;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
  if ( (double)rtt * 0.5 * 1.100000023841858 < 111000.0 )
    v7 = NetManager::CalcRttAntenna((NetManager *)(unsigned int)rtt, v6);
  else
    v7 = -7;
  v8 = v7 + 7;
  if ( v8 >= 0 )
    v2 = v8;
  result = (unsigned __int8)v2;
  if ( v2 >= 8 )
    return 7i64;
  return result;
}

char __fastcall NetManager::CalcRttAntenna(NetManager *this, unsigned int rtt)
{
  double v2; // xmm0_8
  char result; // al

  v2 = (double)(int)this * 0.5 * 1.100000023841858;
  if ( v2 >= 95000.0 )
    return -6;
  if ( v2 >= 78000.0 )
    return -5;
  if ( v2 >= 61000.0 )
    return -4;
  if ( v2 >= 44500.0 )
    return -3;
  if ( v2 >= 28000.0 )
    return -2;
  result = 0;
  if ( v2 >= 11150.0 )
    return -1;
  return result;
}

void __fastcall NetManager::CallGayaSe(NetManager *this, NETWORK_GAYA_TYPE seNo)
{
  __int64 v2; // rbx
  const char *GayaSEName; // rax
  const extension::SoundHashKey *IfExist; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx
  extension::SoundHashKey result; // [rsp+40h] [rbp+8h] BYREF

  result.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)this;
  v2 = *(_QWORD *)&AppMain::pApp;
  if ( *(_QWORD *)&AppMain::pApp )
  {
    GayaSEName = NetManager::GetGayaSEName(this, seNo);
    IfExist = extension::SoundHashKey::MakeIfExist(&result, GayaSEName);
    if ( v2 != -2197288 )
      extension::SoundList::playSEByName((extension::SoundList *)(v2 + 2197288), IfExist, 0i64);
    m_ptr = result.m_sharedBuffer.m_ptr;
    if ( result.m_sharedBuffer.m_ptr )
    {
      if ( _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&result.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
        ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))m_ptr->~RefCountableWeakSupportBase)(
          m_ptr,
          1i64);
    }
  }
}

void __fastcall NetManager::ChangeState(NetManager *this, ONLINE_STATE nextOnlineState, int debugNo)
{
  int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rcx
  char RankMatchRank; // al
  __int64 v14; // r10
  int v15; // er9
  int v16; // er8
  NETWORK_MATCHING_TYPE matchMode; // ecx
  unsigned int v18; // er8
  int v19; // edx
  int v20; // ecx
  int v21; // er8
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  const Fw::ONLINEID *v25; // rdx
  __int128 v26; // xmm1
  __int64 hostNo; // rcx
  int v28; // eax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  int v34; // ecx
  __int64 antennaType; // rax
  Fw::ROOM_ATTR *m_SearchEndRoomAttr; // rdx
  bool v37; // zf
  unsigned __int8 battleStartTableNo; // r9
  unsigned __int8 v39; // r9
  __int64 v40; // r8
  _DWORD *v41; // rcx
  unsigned int v42; // edx
  unsigned __int8 v43; // r9
  unsigned __int8 v44; // r9
  __int64 v45; // r8
  _DWORD *v46; // rcx
  unsigned int v47; // edx
  __int128 v48[8]; // [rsp+20h] [rbp-59h] BYREF
  int lowerLimitRtt[4]; // [rsp+A0h] [rbp+27h] BYREF

  v4 = 0;
  this->gamedata.sendFrequency[nextOnlineState] = 0;
  switch ( nextOnlineState )
  {
    case NET_STATE_TOP:
      Fw::MatchingTarget::m_RoomKickoutFlag = 0;
      this->gamedata.reservationCreateRoomFlag = 0;
      memset(this->gamedata.player_data, 0, 0x72Cui64);
      this->gamedata.hostNo = 0;
      this->gamedata.roomPlayerCount = 0;
      Fw::VoiceChat::delAllConnect(v7, v6);
      *(_QWORD *)&this->gamedata.error = 0i64;
      Fw::MatchingTarget::LeaveRoom();
      Fw::MatchingTarget::ClearUserInfo();
      break;
    case NET_STATE_CREATINGROOM:
      NetManager::resetLocalData(this);
      this->gamedata.roomPlayerCount = 1;
      memset(v48, 0, 0x76ui64);
      v9 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v8);
      v10 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v9 + 8) + 16i64))(
              *(_QWORD *)(v9 + 8),
              lowerLimitRtt);
      v11 = this->gamedata.userInfo.m_Character[1].m_ColorId & 7;
      v12 = *(_QWORD *)v10;
      LODWORD(v10) = this->gamedata.userInfo.m_Character[0].m_CharacterId & 0x3F;
      *(_QWORD *)&v48[0] = v12;
      DWORD2(v48[0]) = DWORD2(v48[0]) & 0xFE003800 | (v10 | ((this->gamedata.userInfo.m_Character[1].m_CharacterId & 0x3F) << 14)) & 0xFE0FF83F | ((this->gamedata.userInfo.m_Character[0].m_ColorId & 7 | (v11 << 14)) << 6) & 0xFE7FF9FF | ((this->gamedata.userInfo.m_Character[0].m_CostumeId & 3 | ((this->gamedata.userInfo.m_Character[1].m_CostumeId & 3) << 14)) << 9);
      RankMatchRank = AppMain::GetRankMatchRank(*(AppMain **)&AppMain::pApp, 0);
      v16 = 0;
      matchMode = this->gamedata.matchMode;
      HIDWORD(v48[0]) = v15 & 0x800039FF | ((this->gamedata.userInfo.m_Character[2].m_CostumeId & 3 | (32 * (*(_DWORD *)(v14 + 2202800) & 0x7F | ((RankMatchRank & 0x3F) << 7)))) << 9);
      if ( matchMode == NETWORK_MATCHING_TYPE_RANK )
        v16 = 256;
      v18 = v48[1] & 0xFFFFFC00 | (matchMode == NETWORK_MATCHING_TYPE_RANK) | v16;
      v19 = *(_DWORD *)(v14 + 4i64 * *(int *)(v14 + 2205300) + 2205304);
      if ( v19 == 31 )
        v19 = *(_DWORD *)(v14 + 2205468);
      v20 = ((*(_DWORD *)(v14 + 2202804) & 0x1FF) << 6) | this->gamedata.userInfo.m_Antenna & 7;
      DWORD1(v48[1]) = 2068357982;
      v21 = v18 & 0x800003FF;
      *((_QWORD *)&v48[1] + 1) = *(_QWORD *)(v14 + 2202812);
      *(_QWORD *)&v48[2] = *(_QWORD *)(v14 + 2202820);
      DWORD2(v48[2]) = *(_DWORD *)(v14 + 2202828);
      v22 = *(_DWORD *)(v14 + 2202836);
      LODWORD(v48[1]) = v21 | ((v19 & 0x1F | (32 * v20)) << 10);
      LOBYTE(v20) = *(_BYTE *)(v14 + 2202810);
      HIDWORD(v48[2]) = v22;
      v23 = v48[3] & 0xFFFFFFF8 | *(_BYTE *)(v14 + 2202808) & 1 | (2 * (*(_BYTE *)(v14 + 2202809) & 1 | (2 * (v20 & 1))));
      v24 = *(_DWORD *)(v14 + 2202852);
      if ( v24 < 4 )
        LOBYTE(v4) = v24 >= 3;
      else
        v4 = 2;
      LODWORD(v48[3]) = v23 & 0xFFFFFFE7 | (8 * v4);
      AppMain::GetOnlineStageTelop((AppMain *)v14, (char *)&v48[3] + 4, v21);
      Fw::NetworkCommon::GetShortCountryName((char *)&v48[7] + 1, v25);
      v26 = v48[1];
      hostNo = this->gamedata.hostNo;
      v28 = v48[7];
      *(_OWORD *)&this->gamedata.player_data[hostNo].steamId = v48[0];
      v29 = v48[2];
      *((_OWORD *)&this->gamedata.player_data[hostNo] + 1) = v26;
      v30 = v48[3];
      *((_OWORD *)&this->gamedata.player_data[hostNo] + 2) = v29;
      v31 = v48[4];
      *((_OWORD *)&this->gamedata.player_data[hostNo] + 3) = v30;
      v32 = v48[5];
      *(_OWORD *)&this->gamedata.player_data[hostNo].stageTelop[12] = v31;
      v33 = v48[6];
      *(_OWORD *)&this->gamedata.player_data[hostNo].stageTelop[28] = v32;
      *(_OWORD *)&this->gamedata.player_data[hostNo].stageTelop[44] = v33;
      *(_DWORD *)&this->gamedata.player_data[hostNo].stageTelop[60] = v28;
      *(_WORD *)&this->gamedata.player_data[hostNo].country[3] = WORD2(v48[7]);
      this->gamedata.playerDataSub[(unsigned __int8)this->gamedata.hostNo].resultMenuCursor = -1;
      goto $LN16_34;
    case NET_STATE_SEARCHINGROOM:
      NetManager::resetLocalData(this);
      this->gamedata.roomPlayerCount = 0;
      this->gamedata.selectRoomIdx = 0;
      break;
    case NET_STATE_SELECTROOM:
      memset(this->m_SearchEndRoomAttr, 0, sizeof(this->m_SearchEndRoomAttr));
      antennaType = this->gamedata.antennaType;
      m_SearchEndRoomAttr = this->m_SearchEndRoomAttr;
      if ( (int)antennaType > 0 )
      {
        v37 = this->gamedata.matchMode == NETWORK_MATCHING_TYPE_RANK;
        *(__m128i *)lowerLimitRtt = _mm_load_si128((const __m128i *)&_xmm);
        Fw::MatchingTarget::GetSearchRoomAttr(v34, m_SearchEndRoomAttr, lowerLimitRtt[antennaType], v37);
      }
      else
      {
        Fw::MatchingTarget::GetSearchRoomAttr(v34, m_SearchEndRoomAttr, -1, 0);
      }
      break;
    case NET_STATE_JOIN_ROOM:
$LN16_34:
      NetManager::setAllTableBattleType(this, this->gamedata.gameRule, this->gamedata.roomBattleType);
      break;
    case NET_STATE_JOIN_COMPLETE:
    case NET_STATE_WAITSTART:
      NetManager::updateTimeStamp(this);
      break;
    case NET_STATE_ORDERSELECT:
      if ( this->gamedata.gameRule )
      {
        *(_WORD *)this->gamedata.userInfo.m_Order = 0;
        this->gamedata.userInfo.m_Order[2] = 0;
      }
      memset(pSendMsgLog, 0, sizeof(SEND_MESSAGE));
      *(_DWORD *)&this->gamedata.disconnectBattleUser[0][0] = 0;
      *(_WORD *)&this->gamedata.disconnectBattleUser[1][1] = 0;
      break;
    case NET_STATE_CHARACTERSELECT:
    case NET_STATE_CHARACTERSELECT_NOT_PARTY:
      memset(pSendMsgLog, 0, sizeof(SEND_MESSAGE));
      *(_WORD *)this->gamedata.userInfo.m_CharacterFix = 0;
      this->gamedata.userInfo.m_CharacterFix[2] = 0;
      *(_WORD *)this->gamedata.userInfo.m_Order = 0;
      this->gamedata.userInfo.m_Order[2] = 0;
      *(_DWORD *)&this->gamedata.disconnectBattleUser[0][0] = 0;
      *(_WORD *)&this->gamedata.disconnectBattleUser[1][1] = 0;
      break;
    case NET_STATE_BATTLELOADING:
      battleStartTableNo = this->gamedata.battleStartTableNo;
      if ( battleStartTableNo )
        v39 = 12 * battleStartTableNo + 1;
      else
        v39 = 1;
      v40 = 12i64;
      v41 = (_DWORD *)((char *)this->gamedata.player_data + 16);
      do
      {
        if ( *((_QWORD *)v41 - 2) )
        {
          v42 = *v41 & 0x7F;
          if ( v39 <= v42 && v42 < (unsigned __int8)(v39 + 12) )
            this->gamedata.playerDataSub[(*(v41 - 1) >> 27) & 0xF].advanceFlag = 0;
        }
        v41 = (_DWORD *)((char *)v41 + 118);
        --v40;
      }
      while ( v40 );
      break;
    case NET_STATE_BATTLELOADINGEND:
      v43 = this->gamedata.battleStartTableNo;
      if ( v43 )
        v44 = 12 * v43 + 1;
      else
        v44 = 1;
      v45 = 12i64;
      v46 = (_DWORD *)((char *)this->gamedata.player_data + 16);
      do
      {
        if ( *((_QWORD *)v46 - 2) )
        {
          v47 = *v46 & 0x7F;
          if ( v44 <= v47 && v47 < (unsigned __int8)(v44 + 12) )
            this->gamedata.playerDataSub[(*(v46 - 1) >> 27) & 0xF].resultMenuCursor = -1;
        }
        v46 = (_DWORD *)((char *)v46 + 118);
        --v45;
      }
      while ( v45 );
      this->gamedata.playerDataSub[(unsigned __int8)this->gamedata.myNo].advanceFlag = 1;
      break;
    case NET_STATE_LEAVEROOM:
      this->gamedata.leaveRoomFlag = 0;
      Fw::VoiceChat::delAllConnect((__int64)this, 0x140000000i64);
      break;
    default:
      break;
  }
  NetManager::resetSendFrequency(this, nextOnlineState);
  this->gamedata.onlineState = nextOnlineState;
}

void __fastcall NetManager::CreateRoom(NetManager *this, Fw::ROOM_ATTR *pRoomAttr)
{
  bool v4; // dl
  __int64 v5; // rcx
  __int64 v6; // rbx
  STAGE_ID v7; // er8
  STAGE_ID v8; // er9
  Fw::ROOM_ATTR *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // er8

  this->gamedata.m_SessionCreating = 0;
  NetManager::updateRoomInfo(this, pRoomAttr);
  if ( *(_DWORD *)(v5 + 168) == 1 )
  {
    NetManager::SetPresetCharacterTeam((NetManager *)v5, v4);
    v6 = *(_QWORD *)&AppMain::pApp;
    *(_DWORD *)(v6 + 2205468) = SaveRecord_PlayerData::GetRandomEnableStageID(
                                  (SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64),
                                  (STAGE_ID)*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205468i64),
                                  v7,
                                  v8);
  }
  memset(Fw::MatchingTarget::m_RoomChatMessage, 0, sizeof(Fw::MatchingTarget::m_RoomChatMessage));
  Fw::MatchingTarget::m_RoomOwnerChanged = 0;
  Fw::ROOM_ATTR::operator=(v9, pRoomAttr);
  v11 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v10);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v11 + 32) + 104i64))(
    *(_QWORD *)(v11 + 32),
    2i64,
    (unsigned int)pRoomAttr->m_MaxSlot);
  NetManager::ChangeState(this, NET_STATE_CREATINGROOM, v12);
}

__int64 __fastcall NetManager::FilteringMyGradeSearchRoom(NetManager *this, int cnt)
{
  _QWORD *v4; // rax
  _OWORD *v5; // rdi
  unsigned int v6; // esi
  __int64 RankMatchRank; // r9
  int v8; // er10
  _OWORD *v9; // rbx
  Fw::RoomSearchAttr *v10; // r8
  int num; // edx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  _OWORD *v20; // rcx
  Fw::RoomSearchAttr *v21; // rax
  __int64 v22; // rdx
  Fw::ROOM_ATTR *m_AutoJoinRoomAttr; // r8
  _OWORD *v24; // rax
  __int64 v25; // rcx

  v4 = operator new[](0xD2F8ui64);
  if ( v4 )
  {
    *v4 = 50i64;
    v5 = v4 + 1;
    `eh vector constructor iterator'(
      v4 + 1,
      0x438ui64,
      0x32ui64,
      (void (__fastcall *)(void *))Fw::ROOM_ATTR::ROOM_ATTR,
      (void (__fastcall *)(void *))Fw::ROOM_ATTR::~ROOM_ATTR);
  }
  else
  {
    v5 = 0i64;
  }
  v6 = 0;
  RankMatchRank = (int)AppMain::GetRankMatchRank(*(AppMain **)&AppMain::pApp, 1);
  v8 = 0;
  v9 = v5;
  v10 = &this->m_AutoJoinRoomAttr[0].m_Attr[7];
  while ( v8 < cnt )
  {
    num = v10[-2].num;
    switch ( v10->num )
    {
      case 0x15000:
        v12 = 0;
        break;
      case 0x15001:
        v12 = 1;
        break;
      case 0x15002:
        v12 = 2;
        break;
      default:
        v12 = 3;
        break;
    }
    if ( num < 34 )
    {
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( !v13 )
        {
          v16 = num - 1;
          if ( num - 1 <= 1 )
            v16 = 1;
          if ( v16 > (int)RankMatchRank )
            goto LABEL_44;
          v15 = num + 4;
          goto LABEL_38;
        }
        if ( v13 == 1 )
        {
          v14 = 1;
          if ( num > 1 )
            v14 = v10[-2].num;
          if ( v14 > (int)RankMatchRank )
            goto LABEL_44;
          v15 = num + 8;
          goto LABEL_38;
        }
      }
      else
      {
        v17 = 1;
        if ( num - 2 > 1 )
          v17 = num - 2;
        if ( v17 > (int)RankMatchRank )
          goto LABEL_44;
LABEL_37:
        v15 = num + 2;
LABEL_38:
        v19 = 43;
        if ( v15 < 43 )
          v19 = v15;
        if ( (int)RankMatchRank > v19 )
          goto LABEL_44;
      }
LABEL_41:
      v20 = v9;
      v21 = v10 - 7;
      v22 = 8i64;
      do
      {
        *v20 = *(_OWORD *)&v21->num;
        v20[1] = *(_OWORD *)&v21[1].attributeIndex;
        v20[2] = *(_OWORD *)&v21[2].searchOperator;
        v20[3] = *(_OWORD *)&v21[4].num;
        v20[4] = *(_OWORD *)&v21[5].attributeIndex;
        v20[5] = *(_OWORD *)&v21[6].searchOperator;
        v20[6] = *(_OWORD *)&v21[8].num;
        v20 += 8;
        *(v20 - 1) = *(_OWORD *)&v21[9].attributeIndex;
        v21 = (Fw::RoomSearchAttr *)((char *)v21 + 128);
        --v22;
      }
      while ( v22 );
      *v20 = *(_OWORD *)&v21->num;
      v20[1] = *(_OWORD *)&v21[1].attributeIndex;
      v20[2] = *(_OWORD *)&v21[2].searchOperator;
      *((_QWORD *)v20 + 6) = *(_QWORD *)&v21[4].num;
      ++v6;
      v9 = (_OWORD *)((char *)v9 + 1080);
      goto LABEL_44;
    }
    if ( v12 )
    {
      v18 = v12 - 1;
      if ( v18 )
      {
        if ( v18 != 1 )
          goto LABEL_41;
        if ( RankMatchRank >= 33 )
        {
          v15 = num + 8;
          goto LABEL_38;
        }
      }
      else if ( RankMatchRank >= 33 )
      {
        v15 = num + 4;
        goto LABEL_38;
      }
    }
    else if ( RankMatchRank >= 33 )
    {
      goto LABEL_37;
    }
LABEL_44:
    ++v8;
    v10 += 90;
    if ( (unsigned int)v8 >= 0x32 )
      break;
  }
  m_AutoJoinRoomAttr = this->m_AutoJoinRoomAttr;
  v24 = v5;
  v25 = 421i64;
  do
  {
    *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[0].num = *v24;
    *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[1].attributeIndex = v24[1];
    *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[2].searchOperator = v24[2];
    *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[4].num = v24[3];
    *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[5].attributeIndex = v24[4];
    *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[6].searchOperator = v24[5];
    *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[8].num = v24[6];
    m_AutoJoinRoomAttr = (Fw::ROOM_ATTR *)((char *)m_AutoJoinRoomAttr + 128);
    *(_OWORD *)&m_AutoJoinRoomAttr[-1].m_RoomId.m_steamid.m_comp = v24[7];
    v24 += 8;
    --v25;
  }
  while ( v25 );
  *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[0].num = *v24;
  *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[1].attributeIndex = v24[1];
  *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[2].searchOperator = v24[2];
  *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[4].num = v24[3];
  *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[5].attributeIndex = v24[4];
  *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[6].searchOperator = v24[5];
  *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[8].num = v24[6];
  if ( v5 )
  {
    `eh vector destructor iterator'(
      v5,
      0x438ui64,
      *((_QWORD *)v5 - 1),
      (void (__fastcall *)(void *))Fw::ROOM_ATTR::~ROOM_ATTR);
    operator delete[]((char *)v5 - 8, 1080i64 * *((_QWORD *)v5 - 1) + 8);
  }
  return v6;
}

__int64 __fastcall NetManager::GetBattleMemberInfo(NetManager *this, NET_USER_DATA *pInfo)
{
  unsigned __int8 v3; // cl
  __int64 gameRule; // rdi
  unsigned __int8 v5; // bl
  int v6; // er9
  char *v7; // rax
  unsigned int v8; // er8

  if ( g_NetworkManager.gamedata.battleStartTableNo )
    v3 = 12 * g_NetworkManager.gamedata.battleStartTableNo + 1;
  else
    v3 = 1;
  gameRule = g_NetworkManager.gamedata.gameRule;
  v5 = 0;
  v6 = 0;
  v7 = (char *)g_NetworkManager.gamedata.player_data + 16;
  do
  {
    v8 = *(_DWORD *)v7 & 0x7F;
    if ( v3 <= v8
      && v8 < (unsigned __int8)(v3 + 12)
      && (*(_DWORD *)v7 & 0x380) == 384
      && (gameRule != 2 || !g_NetworkManager.gamedata.playerDataSub[(unsigned __int8)v6].disconnectTick) )
    {
      *(_OWORD *)&pInfo->steamId = *((_OWORD *)v7 - 1);
      *((_OWORD *)pInfo + 1) = *(_OWORD *)v7;
      *((_OWORD *)pInfo + 2) = *((_OWORD *)v7 + 1);
      *((_OWORD *)pInfo + 3) = *((_OWORD *)v7 + 2);
      *(_OWORD *)&pInfo->stageTelop[12] = *((_OWORD *)v7 + 3);
      *(_OWORD *)&pInfo->stageTelop[28] = *((_OWORD *)v7 + 4);
      *(_OWORD *)&pInfo->stageTelop[44] = *((_OWORD *)v7 + 5);
      *(_DWORD *)&pInfo->stageTelop[60] = *((_DWORD *)v7 + 24);
      *(_WORD *)&pInfo->country[3] = *((_WORD *)v7 + 50);
      ++pInfo;
      ++v5;
    }
    ++v6;
    v7 += 118;
  }
  while ( v6 < 12 );
  return v5;
}

__int64 __fastcall NetManager::GetBattleMemberNameList(NetManager *this, Fw::ONLINEID *pNameList)
{
  unsigned __int8 v3; // cl
  unsigned __int8 v4; // r9
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned __int8 v7; // r10
  int v8; // ecx
  __int64 v9; // rcx

  if ( g_NetworkManager.gamedata.battleStartTableNo )
    v3 = 12 * g_NetworkManager.gamedata.battleStartTableNo + 1;
  else
    v3 = 1;
  v4 = 0;
  v5 = v3;
  v6 = 0i64;
  v7 = v3 + 12;
  do
  {
    v8 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[v6] + 4);
    if ( v5 <= (v8 & 0x7Fu) && (v8 & 0x7Fu) < v7 && (v8 & 0x380) == 384 )
    {
      v9 = v4++;
      pNameList[v9] = (Fw::ONLINEID)g_NetworkManager.gamedata.player_data[v6].steamId;
    }
    ++v6;
  }
  while ( v6 < 12 );
  return v4;
}

__int64 __fastcall NetManager::GetBattleStartTableRoomMemberInfo(NetManager *this, NET_USER_DATA *pInfo)
{
  unsigned __int8 battleStartTableNo; // r8
  GAME_RULE gameRule; // er9
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // si
  unsigned __int8 v8; // bp
  int v9; // er9
  int v10; // er10
  __int64 v11; // rcx
  _DWORD *v12; // rdx
  int v13; // edi
  unsigned int v14; // ebx
  int i; // er11
  __int64 v16; // r10
  _DWORD *v17; // r9
  unsigned int v18; // er8
  NET_USER_DATA *v19; // r8
  __int64 v21; // rcx

  battleStartTableNo = this->gamedata.battleStartTableNo;
  gameRule = this->gamedata.gameRule;
  if ( battleStartTableNo )
    v6 = 12 * battleStartTableNo + 1;
  else
    v6 = 1;
  v7 = 0;
  if ( gameRule == GAME_RULE_SINGLE )
  {
LABEL_8:
    v7 = 2;
LABEL_9:
    v8 = 0;
    goto LABEL_10;
  }
  if ( gameRule != GAME_RULE_TEAM )
  {
    if ( gameRule == GAME_RULE_PARTY )
    {
      v8 = 0;
      v13 = 0;
      v14 = v6;
      do
      {
        for ( i = 1; i <= 3; ++i )
        {
          v16 = 0i64;
          v17 = (_DWORD *)((char *)this->gamedata.player_data + 16);
          while ( 1 )
          {
            v18 = *v17 & 0x7F;
            if ( v14 <= v18 && v18 < v14 + 6 && v13 == ((*v17 >> 20) & 1) && ((*(v17 - 2) >> 11) & 3) == i )
              break;
            ++v16;
            v17 = (_DWORD *)((char *)v17 + 118);
            if ( v16 >= 12 )
              goto LABEL_30;
          }
          v21 = v8++;
          *(_OWORD *)&pInfo[v21].steamId = *(_OWORD *)&this->gamedata.player_data[v16].steamId;
          *((_OWORD *)&pInfo[v21] + 1) = *((_OWORD *)&this->gamedata.player_data[v16] + 1);
          *((_OWORD *)&pInfo[v21] + 2) = *((_OWORD *)&this->gamedata.player_data[v16] + 2);
          *((_OWORD *)&pInfo[v21] + 3) = *((_OWORD *)&this->gamedata.player_data[v16] + 3);
          *(_OWORD *)&pInfo[v21].stageTelop[12] = *(_OWORD *)&this->gamedata.player_data[v16].stageTelop[12];
          *(_OWORD *)&pInfo[v21].stageTelop[28] = *(_OWORD *)&this->gamedata.player_data[v16].stageTelop[28];
          *(_OWORD *)&pInfo[v21].stageTelop[44] = *(_OWORD *)&this->gamedata.player_data[v16].stageTelop[44];
          *(_DWORD *)&pInfo[v21].stageTelop[60] = *(_DWORD *)&this->gamedata.player_data[v16].stageTelop[60];
          *(_WORD *)&pInfo[v21].country[3] = *(_WORD *)&this->gamedata.player_data[v16].country[3];
LABEL_30:
          ;
        }
        ++v13;
      }
      while ( v13 < 2 );
      return v8;
    }
    if ( gameRule != GAME_RULE_TRAINING )
      goto LABEL_9;
    goto LABEL_8;
  }
  v7 = 2;
  v8 = 0;
LABEL_10:
  v9 = v6;
  v10 = v7 + v6;
  if ( v6 >= (unsigned int)v10 )
    return v8;
  do
  {
    v11 = 0i64;
    v12 = (_DWORD *)((char *)this->gamedata.player_data + 16);
    while ( v9 != (*v12 & 0x7F) )
    {
      ++v11;
      v12 = (_DWORD *)((char *)v12 + 118);
      if ( v11 >= 12 )
        goto LABEL_27;
    }
    v19 = &pInfo[v8++];
    *(_OWORD *)&v19->steamId = *(_OWORD *)&this->gamedata.player_data[v11].steamId;
    *((_OWORD *)v19 + 1) = *((_OWORD *)&this->gamedata.player_data[v11] + 1);
    *((_OWORD *)v19 + 2) = *((_OWORD *)&this->gamedata.player_data[v11] + 2);
    *((_OWORD *)v19 + 3) = *((_OWORD *)&this->gamedata.player_data[v11] + 3);
    *(_OWORD *)&v19->stageTelop[12] = *(_OWORD *)&this->gamedata.player_data[v11].stageTelop[12];
    *(_OWORD *)&v19->stageTelop[28] = *(_OWORD *)&this->gamedata.player_data[v11].stageTelop[28];
    *(_OWORD *)&v19->stageTelop[44] = *(_OWORD *)&this->gamedata.player_data[v11].stageTelop[44];
    *(_DWORD *)&v19->stageTelop[60] = *(_DWORD *)&this->gamedata.player_data[v11].stageTelop[60];
    *(_WORD *)&v19->country[3] = *(_WORD *)&this->gamedata.player_data[v11].country[3];
LABEL_27:
    ++v9;
  }
  while ( v9 < v10 );
  return v8;
}

void __fastcall NetManager::GetBattleStartTableRoomMemberInfo(NetManager *this, int pno, NET_USER_DATA *pInfo)
{
  int v3; // er9
  NET_USER_DATA *player_data; // rax

  v3 = 0;
  player_data = g_NetworkManager.gamedata.player_data;
  while ( pno != ((*((_DWORD *)player_data + 3) >> 27) & 0xF) || !player_data->steamId )
  {
    ++v3;
    if ( (__int64)++player_data >= (__int64)g_NetworkManager.gamedata.playerDataSub )
      return;
  }
  *pInfo = g_NetworkManager.gamedata.player_data[v3];
}

unsigned __int8 __fastcall NetManager::GetCharacterColorId(NetManager *this, int playerId, int idx)
{
  int v4; // er8

  if ( playerId == -1 )
  {
    if ( (unsigned int)idx <= 2 )
      return this->gamedata.userInfo.m_Character[idx].m_ColorId;
    return 0;
  }
  if ( !idx )
    return (*((_DWORD *)&this->gamedata.player_data[playerId] + 2) >> 6) & 7;
  v4 = idx - 1;
  if ( !v4 )
    return (*((_DWORD *)&this->gamedata.player_data[playerId] + 2) >> 20) & 7;
  if ( v4 != 1 )
    return 0;
  return (*((_DWORD *)&this->gamedata.player_data[playerId] + 3) >> 6) & 7;
}

unsigned __int8 __fastcall NetManager::GetCharacterCostumeId(NetManager *this, int playerId, int idx)
{
  if ( (unsigned int)idx > 2 )
    return 0;
  else
    return this->gamedata.userInfo.m_Character[idx].m_CostumeId;
}

unsigned __int8 __fastcall NetManager::GetCharacterFix(NetManager *this, int playerNo, unsigned __int8 characterIdx)
{
  __int64 v3; // r10
  int v4; // eax
  bool v5; // dl

  v3 = playerNo;
  if ( this->gamedata.gameRule == GAME_RULE_PARTY )
  {
    if ( playerNo == -1 )
      LOBYTE(v4) = this->gamedata.userInfo.m_CharacterFix[0];
    else
      return (*((_DWORD *)&this->gamedata.player_data[playerNo] + 2) >> 13) & 1;
  }
  else
  {
    if ( playerNo != -1 )
    {
      v5 = 0;
      if ( characterIdx )
      {
        if ( characterIdx == 1 )
        {
          LOBYTE(v4) = (*((_DWORD *)&this->gamedata.player_data[v3] + 2) & 0x8000000) != 0;
          return v4;
        }
        if ( characterIdx == 2 )
        {
          LOBYTE(v4) = (*((_DWORD *)&this->gamedata.player_data[v3] + 3) & 0x2000) != 0;
          return v4;
        }
      }
      else
      {
        v5 = (*((_DWORD *)&this->gamedata.player_data[v3] + 2) & 0x2000) != 0;
      }
      LOBYTE(v4) = v5;
      return v4;
    }
    LOBYTE(v4) = this->gamedata.userInfo.m_CharacterFix[characterIdx];
  }
  return v4;
}

unsigned __int8 __fastcall NetManager::GetCharacterId(NetManager *this, int playerId, int idx)
{
  int v4; // er8

  if ( this->gamedata.gameRule == GAME_RULE_PARTY )
  {
    if ( playerId == -1 )
      return this->gamedata.userInfo.m_Character[0].m_CharacterId;
    return *((_BYTE *)&this->gamedata.player_data[playerId] + 8) & 0x3F;
  }
  if ( playerId == -1 )
  {
    if ( (unsigned int)idx <= 2 )
      return this->gamedata.userInfo.m_Character[idx].m_CharacterId;
    return -1;
  }
  if ( !idx )
    return *((_BYTE *)&this->gamedata.player_data[playerId] + 8) & 0x3F;
  v4 = idx - 1;
  if ( !v4 )
    return (*((_DWORD *)&this->gamedata.player_data[playerId] + 2) >> 14) & 0x3F;
  if ( v4 != 1 )
    return -1;
  return *((_BYTE *)&this->gamedata.player_data[playerId] + 12) & 0x3F;
}

__int64 __fastcall NetManager::GetEmptySeatNo(
        NetManager *this,
        unsigned __int8 seatNo,
        BATTLE_WAIT_STATE battleWaitState)
{
  unsigned __int8 v5; // di
  unsigned __int8 v6; // dl
  GAME_RULE gameRule; // ecx
  unsigned __int8 v8; // r11
  int v9; // er9
  __int32 v10; // ecx
  __int32 v11; // ecx
  __int32 v12; // er8
  int v13; // er8
  int v14; // er11
  __int64 v15; // rdx
  _DWORD *i; // rcx
  int v18; // er8
  __int64 v19; // rdx
  _DWORD *j; // rcx
  int v21; // er8
  __int64 v22; // rdx
  _DWORD *k; // rax

  v5 = -1;
  v6 = 1;
  if ( seatNo > 0xCu )
    v6 = 12 * ((seatNo - 1) / 12) + 1;
  gameRule = this->gamedata.gameRule;
  v8 = v6 + 12;
  v9 = 0;
  if ( gameRule == GAME_RULE_SINGLE || (v10 = gameRule - 1) == 0 )
  {
LABEL_7:
    v9 = 2;
    goto LABEL_8;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v9 = 6;
LABEL_8:
  if ( battleWaitState )
  {
    v12 = battleWaitState - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        v13 = v8 - 1;
        v14 = v9 + v6;
        if ( v13 >= v14 )
        {
          do
          {
            v15 = 0i64;
            for ( i = (_DWORD *)((char *)this->gamedata.player_data + 16);
                  !*((_QWORD *)i - 2) || (*i & 0x7F) != v13;
                  i = (_DWORD *)((char *)i + 118) )
            {
              if ( ++v15 >= 12 )
                return (unsigned __int8)v13;
            }
            --v13;
          }
          while ( v13 >= v14 );
          return 255i64;
        }
      }
      return v5;
    }
    v18 = v9 + v6;
    if ( v18 >= v8 )
      return v5;
    do
    {
      v19 = 0i64;
      for ( j = (_DWORD *)((char *)this->gamedata.player_data + 16);
            !*((_QWORD *)j - 2) || (*j & 0x7F) != v18;
            j = (_DWORD *)((char *)j + 118) )
      {
        if ( ++v19 >= 12 )
          return (unsigned __int8)v18;
      }
      ++v18;
    }
    while ( v18 < v8 );
    return 255i64;
  }
  else
  {
    v21 = seatNo;
    if ( seatNo >= (int)v8 )
      return v5;
    do
    {
      v22 = 0i64;
      for ( k = (_DWORD *)((char *)this->gamedata.player_data + 16);
            !*((_QWORD *)k - 2) || (*k & 0x7F) != v21;
            k = (_DWORD *)((char *)k + 118) )
      {
        if ( ++v22 >= 12 )
          return (unsigned __int8)v21;
      }
      ++v21;
    }
    while ( v21 < v8 );
    return 255i64;
  }
}

__int64 __fastcall NetManager::GetFreeMatchResultMember(NetManager *this, unsigned __int8 seatNo, NET_USER_DATA *pList)
{
  unsigned __int8 v4; // r10
  int v5; // edx
  GAME_RULE gameRule; // ecx
  unsigned __int8 v7; // dl
  __int32 v8; // ecx
  __int32 v9; // ecx
  int v10; // er9
  unsigned __int8 v11; // r11
  unsigned int i; // edi
  NET_USER_DATA *player_data; // rcx
  __int64 v14; // rdx

  v4 = 1;
  if ( seatNo > 0xCu )
  {
    v5 = (unsigned __int64)(715827883i64 * (seatNo - 1)) >> 32;
    v4 = 12 * ((v5 < 0) + (v5 >> 1)) + 1;
  }
  gameRule = this->gamedata.gameRule;
  v7 = 0;
  if ( gameRule == GAME_RULE_SINGLE || (v8 = gameRule - 1) == 0 )
  {
LABEL_7:
    v7 = 2;
    goto LABEL_8;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v7 = 6;
LABEL_8:
  v10 = v4;
  v11 = 0;
  for ( i = v7 + v4; v4 < i; v10 = v4 )
  {
    player_data = this->gamedata.player_data;
    v14 = 12i64;
    do
    {
      if ( player_data->steamId && (*((_DWORD *)player_data + 4) & 0x7F) == v10 )
      {
        *pList++ = *player_data;
        ++v11;
      }
      ++player_data;
      --v14;
    }
    while ( v14 );
    ++v4;
  }
  return v11;
}

const char *__fastcall NetManager::GetGayaSEName(NetManager *this, NETWORK_GAYA_TYPE seNo)
{
  const char *result; // rax

  if ( !*(_QWORD *)&AppMain::pApp )
    return &pnewText;
  switch ( 0x40000000u )
  {
    case 0u:
      result = aA_120;
      break;
    case 1u:
      result = aA_154;
      break;
    case 2u:
      result = aA_308;
      break;
    case 3u:
      result = aA_5;
      break;
    case 4u:
      result = aA_180;
      break;
    case 5u:
      result = aE_5;
      break;
    case 6u:
      result = aAf_18;
      break;
    case 7u:
      result = aA_46;
      break;
    case 8u:
      result = aC_10;
      break;
    case 9u:
      result = asc_140911154;
      break;
    case 0xAu:
      result = aA_69;
      break;
    case 0xBu:
      result = aE_7;
      break;
    case 0xCu:
      result = aA_295;
      break;
    case 0xDu:
      result = aA_54;
      break;
    case 0xEu:
      result = aAf_5;
      break;
    case 0xFu:
      result = aAf_25;
      break;
    default:
      return &pnewText;
  }
  return result;
}

__int64 __fastcall NetManager::GetMyTableBattleTypeFromSeat(NetManager *this, int seatNo)
{
  int v2; // eax
  __int64 v3; // rax

  v2 = *((_DWORD *)&this->gamedata.player_data[(unsigned __int8)this->gamedata.myNo] + 4) & 0x7F;
  if ( (unsigned __int8)v2 <= 0xCu )
    v3 = 0i64;
  else
    v3 = (unsigned __int8)((v2 - 1) / 12);
  return (unsigned int)this->gamedata.tableBattleType[v3];
}

const char *__fastcall NetManager::GetNetworkErrorKey(NetManager *this, NETWORK_ERROR_TYPE errorType)
{
  const char *result; // rax

  switch ( errorType )
  {
    case NETWORK_ERROR_TYPE_CONNECTION:
    case NETWORK_ERROR_TYPE_ROOMBACK_CUTTING:
    case NETWORK_ERROR_TYPE_DESTROYED:
      result = "$ERROR_CUTTING";
      break;
    case NETWORK_ERROR_TYPE_ROOMKICKOUT:
      result = "$ERROR_KICK";
      break;
    case NETWORK_ERROR_TYPE_ROOM_OWNER_CHANGE:
    case NETWORK_ERROR_TYPE_JOIN_TIMEOUT:
      result = "$ERROR_PROBLEM|\n|$ERROR_LEAVING";
      break;
    case NETWORK_ERROR_TYPE_NATTYPE2:
      result = "$ERROR_NAT2";
      break;
    case NETWORK_ERROR_TYPE_NATTYPE3:
      result = "$ERROR_NAT3";
      break;
    case NETWORK_ERROR_TYPE_ROOMFULL:
      result = "$ERROR_ROOM";
      break;
    case NETWORK_ERROR_TYPE_ROOMNOTFOUND:
      result = "$ERROR_ROOMINFO";
      break;
    case NETWORK_ERROR_TYPE_CONNECTION2:
      result = "$ERROR_CUTTING_2";
      break;
    default:
      result = "$ERROR_PROBLEM";
      break;
  }
  return result;
}

__int64 __fastcall NetManager::GetPNo(NetManager *this, PLAYER_ID playerID, int index)
{
  unsigned __int8 FreeMatchResultMember; // al
  int v7; // ecx
  _BYTE *j; // r9
  __int64 v11; // r8
  _DWORD *i; // rdx
  NET_USER_DATA pList[12]; // [rsp+A0h] [rbp-5A8h] BYREF

  memset(pList, 0, sizeof(pList));
  FreeMatchResultMember = NetManager::GetFreeMatchResultMember(
                            this,
                            *((_DWORD *)&this->gamedata.player_data[(unsigned __int8)this->gamedata.myNo] + 4) & 0x7F,
                            pList);
  v7 = 0;
  if ( this->gamedata.gameRule == GAME_RULE_PARTY )
  {
    v11 = 0i64;
    if ( FreeMatchResultMember )
    {
      for ( i = (_DWORD *)((char *)pList + 8);
            ((i[2] >> 20) & 1) != (playerID != PLAYER_ID_1P) || ((*i >> 11) & 3) - 1 != index;
            i = (_DWORD *)((char *)i + 118) )
      {
        ++v7;
        if ( ++v11 >= FreeMatchResultMember )
          return 0xFFFFFFFFi64;
      }
      return (*((_DWORD *)&pList[v7] + 3) >> 27) & 0xF;
    }
    return 0xFFFFFFFFi64;
  }
  if ( !FreeMatchResultMember )
    return 0xFFFFFFFFi64;
  for ( j = (char *)pList + 16; !((*j & 0x7F) % 12 == 1 ? playerID == PLAYER_ID_1P : playerID == PLAYER_ID_2P); j += 118 )
  {
    if ( ++v7 >= FreeMatchResultMember )
      return 0xFFFFFFFFi64;
  }
  return (*((_DWORD *)&pList[v7] + 3) >> 27) & 0xF;
}

__int64 __fastcall NetManager::GetPlayerID(NetManager *this, int myNo)
{
  NetManager *v2; // r8
  GAME_RULE gameRule; // er8
  unsigned __int8 v4; // dl
  unsigned int v5; // er11
  __int128 v7; // [rsp+30h] [rbp-88h]

  v2 = this;
  if ( myNo == -1 )
  {
    v7 = *((_OWORD *)&this->gamedata.player_data[(unsigned __int8)this->gamedata.myNo] + 1);
  }
  else
  {
    this = (NetManager *)(118i64 * myNo);
    v7 = *(_OWORD *)((char *)v2->gamedata.player_data + (_QWORD)this + 16);
  }
  gameRule = v2->gamedata.gameRule;
  v4 = v7 & 0x7F;
  if ( gameRule != GAME_RULE_PARTY )
  {
    if ( !NetManager::GetSpectatorStartSeatNo(this, v4, gameRule) )
    {
      if ( (v7 & 0x7F) % 12 != 1 )
        return v5 + 1;
      return v5;
    }
    return 0xFFFFFFFFi64;
  }
  if ( NetManager::GetSpectatorStartSeatNo(this, v4, GAME_RULE_PARTY) )
    return 0xFFFFFFFFi64;
  if ( (v7 & 0x100000) != 0 )
    return 1;
  return v5;
}

__int64 __fastcall NetManager::GetPlayerIndex(NetManager *this, int myNo)
{
  __int64 v2; // rcx
  __int128 v3; // xmm1
  __int128 v5; // [rsp+0h] [rbp-98h]

  if ( myNo == -1 )
  {
    v2 = (unsigned __int8)g_NetworkManager.gamedata.myNo;
    v3 = *((_OWORD *)&g_NetworkManager.gamedata.player_data[v2] + 1);
    v5 = *(_OWORD *)&g_NetworkManager.gamedata.player_data[v2].steamId;
  }
  else
  {
    v3 = *((_OWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 1);
    v5 = *(_OWORD *)&g_NetworkManager.gamedata.player_data[myNo].steamId;
  }
  if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY )
    return ((DWORD2(v5) >> 11) & 3) - 1;
  else
    return (v3 & 0x7F) % 12 != 1;
}

void __fastcall NetManager::GetPlayerName(
        NetManager *this,
        PLAYER_ID playerID,
        char *name,
        RANKMATCH_DISCONNECT_MARKER *maker,
        int index)
{
  unsigned __int8 FreeMatchResultMember; // al
  int v9; // ecx
  __int64 v10; // r9
  _BYTE *v11; // r10
  __int64 v12; // rdi
  char **v13; // rax
  char *v14; // rbx
  char v15; // cl
  char **v16; // rax
  char *v17; // rbx
  char v18; // cl
  __int64 v19; // r8
  _DWORD *i; // rdx
  char **v21; // rax
  char *v22; // rbx
  char v23; // cl
  NET_USER_DATA pList[12]; // [rsp+A0h] [rbp-5A8h] BYREF

  memset(pList, 0, sizeof(pList));
  FreeMatchResultMember = NetManager::GetFreeMatchResultMember(
                            &g_NetworkManager,
                            *((_DWORD *)&g_NetworkManager.gamedata.player_data[(unsigned __int8)g_NetworkManager.gamedata.myNo]
                            + 4) & 0x7F,
                            pList);
  v9 = 0;
  if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY )
  {
    v19 = 0i64;
    if ( FreeMatchResultMember )
    {
      for ( i = (_DWORD *)((char *)pList + 8);
            ((i[2] >> 20) & 1) != (playerID != PLAYER_ID_1P) || ((*i >> 11) & 3) - 1 != index;
            i = (_DWORD *)((char *)i + 118) )
      {
        ++v9;
        if ( ++v19 >= FreeMatchResultMember )
          return;
      }
      v12 = v9;
      v21 = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)pList[v12].steamId);
      v22 = (char *)(name - (char *)v21);
      do
      {
        v23 = *(_BYTE *)v21;
        *((_BYTE *)v21 + (_QWORD)v22) = *(_BYTE *)v21;
        v21 = (char **)((char *)v21 + 1);
      }
      while ( v23 );
LABEL_24:
      if ( maker )
        *maker = (*((_DWORD *)&pList[v12] + 12) >> 3) & 3;
    }
  }
  else
  {
    v10 = 0i64;
    if ( FreeMatchResultMember )
    {
      v11 = (char *)pList + 16;
      do
      {
        if ( (*v11 & 0x7F) % 12 == 1 )
        {
          if ( playerID == PLAYER_ID_1P )
          {
            v12 = v9;
            v13 = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)pList[v12].steamId);
            v14 = (char *)(name - (char *)v13);
            do
            {
              v15 = *(_BYTE *)v13;
              *((_BYTE *)v13 + (_QWORD)v14) = *(_BYTE *)v13;
              v13 = (char **)((char *)v13 + 1);
            }
            while ( v15 );
            goto LABEL_24;
          }
        }
        else if ( playerID == PLAYER_ID_2P )
        {
          v12 = v9;
          v16 = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)pList[v12].steamId);
          v17 = (char *)(name - (char *)v16);
          do
          {
            v18 = *(_BYTE *)v16;
            *((_BYTE *)v16 + (_QWORD)v17) = *(_BYTE *)v16;
            v16 = (char **)((char *)v16 + 1);
          }
          while ( v18 );
          goto LABEL_24;
        }
        ++v9;
        ++v10;
        v11 += 118;
      }
      while ( v10 < FreeMatchResultMember );
    }
  }
}

__int64 __fastcall NetManager::GetSpectatorStartSeatNo(NetManager *this, unsigned __int8 seatNo, GAME_RULE gameRule)
{
  unsigned __int8 v4; // r9
  unsigned __int8 v5; // dl
  __int32 v6; // er8
  __int32 v7; // er8
  int v9; // ecx
  unsigned int v10; // eax

  v4 = 0;
  v5 = 1;
  if ( seatNo > 0xCu )
    v5 = 12 * ((seatNo - 1) / 12) + 1;
  if ( gameRule == GAME_RULE_SINGLE )
    goto LABEL_7;
  v6 = gameRule - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return v4;
LABEL_7:
      if ( (unsigned int)v5 + 2 <= seatNo )
        return seatNo < (unsigned int)v5 + 12;
      return v4;
    }
    v9 = v5;
    v10 = v5 + 6;
  }
  else
  {
    v9 = v5;
    v10 = v5 + 2;
  }
  if ( v10 > seatNo || seatNo >= (unsigned int)(v9 + 12) )
    return v4;
  return 1i64;
}

__int64 __fastcall NetManager::GetUserCountry(NetManager *this, unsigned __int8 *pCountry)
{
  unsigned __int8 ShortCountryName; // al
  char pBuf[16]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v6[3]; // [rsp+30h] [rbp-D0h]
  __int64 v7; // [rsp+60h] [rbp-A0h]
  int v8; // [rsp+68h] [rbp-98h]
  __int64 v9; // [rsp+6Ch] [rbp-94h]
  __int64 v10; // [rsp+74h] [rbp-8Ch]
  int v11; // [rsp+7Ch] [rbp-84h]
  __m128i si128; // [rsp+80h] [rbp-80h]
  __m128i v13; // [rsp+90h] [rbp-70h]
  __m128i v14; // [rsp+A0h] [rbp-60h]
  __m128i v15; // [rsp+B0h] [rbp-50h]
  __m128i v16; // [rsp+C0h] [rbp-40h]
  __m128i v17; // [rsp+D0h] [rbp-30h]
  __int64 v18; // [rsp+E0h] [rbp-20h]
  __int64 v19; // [rsp+E8h] [rbp-18h]
  __m128i v20; // [rsp+F0h] [rbp-10h]
  __m128i v21; // [rsp+100h] [rbp+0h]
  __m128i v22; // [rsp+110h] [rbp+10h]
  int v23; // [rsp+120h] [rbp+20h]
  int v24; // [rsp+124h] [rbp+24h]
  int v25; // [rsp+128h] [rbp+28h]
  __int64 v26; // [rsp+12Ch] [rbp+2Ch]
  __int64 v27; // [rsp+134h] [rbp+34h]
  __int64 v28; // [rsp+13Ch] [rbp+3Ch]
  __int64 v29; // [rsp+144h] [rbp+44h]

  ShortCountryName = Fw::NetworkCommon::GetShortCountryName(pBuf, (const Fw::ONLINEID *)pCountry);
  if ( pCountry )
    *pCountry = ShortCountryName;
  v6[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v6[2] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v14 = _mm_load_si128((const __m128i *)&_xmm);
  v13 = _mm_load_si128((const __m128i *)&_xmm);
  v16 = _mm_load_si128((const __m128i *)&_xmm);
  v15 = _mm_load_si128((const __m128i *)&_xmm);
  v20 = _mm_load_si128((const __m128i *)&_xmm);
  v17 = _mm_load_si128((const __m128i *)&_xmm);
  v22 = _mm_load_si128((const __m128i *)&_xmm);
  v7 = 1i64;
  v8 = 0;
  v9 = 0x300000003i64;
  v10 = 0x300000003i64;
  v11 = 0;
  v18 = 0i64;
  v19 = 0i64;
  v21 = _mm_load_si128((const __m128i *)&_xmm);
  v23 = 1;
  v24 = 3;
  v25 = 2;
  v26 = 0i64;
  v27 = 0i64;
  v28 = 0i64;
  v29 = 0i64;
  if ( ShortCountryName >= 0x47u )
    return 0i64;
  else
    return *((unsigned int *)v6 + ShortCountryName);
}

bool __fastcall NetManager::IsBattleSeat(NetManager *this, GAME_RULE gameRule, unsigned __int8 seatNo)
{
  unsigned __int8 v4; // dl
  __int32 v5; // er9
  __int32 v6; // er9

  v4 = 1;
  if ( seatNo > 0xCu )
    v4 = 12 * ((seatNo - 1) / 12) + 1;
  if ( gameRule )
  {
    v5 = gameRule - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( !v6 )
        return v4 <= seatNo && seatNo < (unsigned int)v4 + 6;
      if ( v6 != 1 )
        return 0;
    }
  }
  return v4 <= seatNo && seatNo < (unsigned int)v4 + 2;
}

bool __fastcall NetManager::IsOrderSelectEnd(NetManager *this)
{
  int v1; // er8
  int v2; // er9
  unsigned __int8 v3; // cl
  unsigned __int8 v4; // r10
  unsigned int v5; // er11
  _DWORD *v6; // rcx
  unsigned int v7; // edx
  int v8; // eax
  __int64 i; // rcx
  unsigned int v11; // edx

  v1 = 0;
  v2 = 0;
  if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_SINGLE || g_NetworkManager.gamedata.gameRule == GAME_RULE_TEAM )
  {
LABEL_5:
    v2 = 2;
    goto LABEL_6;
  }
  if ( g_NetworkManager.gamedata.gameRule != GAME_RULE_PARTY )
  {
    if ( g_NetworkManager.gamedata.gameRule != GAME_RULE_TRAINING )
      goto LABEL_6;
    goto LABEL_5;
  }
  v2 = 6;
LABEL_6:
  if ( g_NetworkManager.gamedata.battleStartTableNo )
    v3 = 12 * g_NetworkManager.gamedata.battleStartTableNo + 1;
  else
    v3 = 1;
  v4 = v3 + v2;
  v5 = v3;
  if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY )
  {
    for ( i = 0i64; i < 12; ++i )
    {
      v11 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[i] + 4) & 0x7F;
      if ( v5 <= v11 && v11 < v4 && (*((_DWORD *)&g_NetworkManager.gamedata.player_data[i] + 2) & 0x1800) != 0 )
        ++v1;
    }
    return v1 == v2;
  }
  else
  {
    v6 = (_DWORD *)((char *)g_NetworkManager.gamedata.player_data + 16);
    do
    {
      v7 = *v6 & 0x7F;
      if ( v5 <= v7 && v7 < v4 )
      {
        v8 = *(v6 - 2);
        if ( (v8 & 0x1800) != 0 && (v8 & 0x6000000) != 0 && (*(v6 - 1) & 0x1800) != 0 )
          ++v1;
      }
      v6 = (_DWORD *)((char *)v6 + 118);
    }
    while ( (__int64)v6 < (__int64)&g_NetworkManager.gamedata.playerDataSub[0].updateAntennaCount + 2 );
    return v1 == v2;
  }
}

bool __fastcall NetManager::IsTableBattleStartComplete(NetManager *this, unsigned __int8 seatNo)
{
  unsigned __int8 v4; // dl
  GAME_RULE gameRule; // ecx
  unsigned __int8 v6; // r9
  __int32 v7; // ecx
  __int32 v8; // ecx
  unsigned __int8 v9; // r10
  unsigned int v10; // ebx
  _DWORD *v11; // r8
  __int64 v12; // r11
  unsigned int v13; // edx

  v4 = 1;
  if ( seatNo > 0xCu )
    v4 = 12 * ((seatNo - 1) / 12) + 1;
  gameRule = this->gamedata.gameRule;
  v6 = 0;
  if ( gameRule == GAME_RULE_SINGLE )
    goto LABEL_7;
  v7 = gameRule - 1;
  if ( !v7 )
    goto LABEL_7;
  v8 = v7 - 1;
  if ( !v8 )
  {
    v6 = 6;
    goto LABEL_8;
  }
  if ( v8 == 1 )
LABEL_7:
    v6 = 2;
LABEL_8:
  v9 = 0;
  v10 = v4;
  v11 = (_DWORD *)((char *)this->gamedata.player_data + 16);
  v12 = 12i64;
  do
  {
    v13 = *v11 & 0x7F;
    if ( v10 <= v13 && v13 < v10 + v6 && (*v11 & 0x380) == 256 )
      ++v9;
    v11 = (_DWORD *)((char *)v11 + 118);
    --v12;
  }
  while ( v12 );
  return v6 == v9;
}

void __fastcall NetManager::KickoutRoomMember(NetManager *this, unsigned __int8 pno)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  char **Name; // rax
  char v6; // cl

  v2 = pno;
  v4 = pno;
  if ( (*((_DWORD *)&this->gamedata.player_data[v4] + 4) & 0x380u) <= 0x80 )
  {
    Name = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)this->gamedata.player_data[pno].steamId);
    do
    {
      v6 = *(_BYTE *)Name;
      Name = (char **)((char *)Name + 1);
    }
    while ( v6 );
    Fw::MatchingTarget::KickoutRoomMember(&this->gamedata.player_data[v4].steamId);
    this->gamedata.playerDataSub[v2].lastRecvTime = 1i64;
  }
}

void __fastcall NetManager::MessageAnalyze(
        NetManager *this,
        bool tcpFlag,
        SEND_MESSAGE *pMessage,
        unsigned __int64 messageSize,
        CSteamID *sin,
        unsigned int len,
        int index)
{
  __int64 v9; // rdx
  CSteamID v10; // r8
  unsigned int time; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  const char *v16; // rcx
  int v17; // er8
  __int64 v18; // rax
  char v19; // al
  int v20; // ebx
  bool v21; // bl
  __int64 v22; // rax
  __int64 v23; // rbp
  int v24; // eax
  int v25; // eax
  char v26; // al
  __int64 v27; // rcx
  unsigned __int64 CurrentTick; // r14
  unsigned __int64 data; // rax
  unsigned __int64 v30; // r14
  unsigned __int64 m_unAll64Bits; // rbp
  __int64 v32; // rdx
  Fw::TUdpP2pInfo *Myfirst; // rax
  int v34; // ebx
  __int64 v35; // rcx
  NET_USER_DATA *player_data; // rax
  char matched; // al
  __int64 v38; // rdx
  __int64 v39; // r15
  int v40; // er12
  int v41; // ebx
  int v42; // esi
  __int64 v43; // rax
  const char *v44; // rax
  __int64 v45; // rcx
  int *obtainedRoomsRTT; // rax
  SEND_MESSAGE pMsg; // [rsp+40h] [rbp-538h] BYREF
  __int64 opt[18]; // [rsp+4A0h] [rbp-D8h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_Mutex);
  switch ( pMessage->msgType & 0x1F )
  {
    case 0:
      NetManager::ProcessJoinRequest(this, pMessage, (CSteamID)sin->m_steamid.m_comp, 1);
      break;
    case 1:
      NetManager::ProcessJoinRequest(this, pMessage, (CSteamID)sin->m_steamid.m_comp, 0);
      break;
    case 2:
      NetManager::ProcessJoinCompleteRank(this, pMessage, v10);
      break;
    case 3:
      NetManager::ProcessJoinComplete(this, pMessage, (CSteamID)sin->m_steamid.m_comp);
      break;
    case 4:
      NetManager::ProcessSitSeatRequest(this, pMessage, v10);
      break;
    case 5:
      NetManager::ProcessSitSeatComple(this, pMessage);
      break;
    case 6:
      NetManager::ProcessTableComple(this, pMessage);
      break;
    case 7:
      NetManager::ProcessTableDiscrete(this, pMessage, 1);
      break;
    case 8:
      NetManager::ProcessTableDiscrete(this, pMessage, 0);
      break;
    case 9:
      time = pMessage->msgBattleCommand.time;
      v12 = time & 0xF;
      v13 = v12;
      *((_DWORD *)&this->gamedata.player_data[v13] + 4) &= 0xFFFFFC7F;
      *((_DWORD *)&this->gamedata.player_data[v13] + 4) |= (time >> 4) & 0x380;
      if ( (unsigned __int8)this->gamedata.myNo == (_DWORD)v12 )
        NetManager::ChangeState(this, NET_STATE_WAITSTART, *(_DWORD *)&v10.m_steamid.m_comp);
      break;
    case 0xA:
      v14 = pMessage->msgJoinComplete.memberNum & 0xF;
      *((_DWORD *)&this->gamedata.player_data[v14] + 2) ^= (*((_DWORD *)&this->gamedata.player_data[v14] + 2) ^ (pMessage->msgBattleCommand.time << 7)) & 0x1800;
      *((_DWORD *)&this->gamedata.player_data[v14] + 2) ^= (*((_DWORD *)&this->gamedata.player_data[v14] + 2) ^ (pMessage->msgBattleCommand.time << 19)) & 0x6000000;
      *((_DWORD *)&this->gamedata.player_data[v14] + 3) ^= (*((_DWORD *)&this->gamedata.player_data[v14] + 3) ^ (8 * pMessage->msgBattleCommand.time)) & 0x1800;
      break;
    case 0xB:
      NetManager::ProcessCharacterSelect(this, pMessage);
      break;
    case 0xC:
      NetManager::ProcessCharacterSelectNotParty(this, pMessage);
      break;
    case 0xD:
      NetManager::ProcessCharacterSelectComplete(this, pMessage);
      break;
    case 0xE:
      NetManager::ProcessLeaveRoom(this, pMessage);
      break;
    case 0xF:
      NetManager::ProcessBackRoom(this, pMessage);
      break;
    case 0x10:
      NetManager::ProcessBattleLoadEnd(this, pMessage);
      break;
    case 0x11:
      NetManager::ProcessBattleCommand(this, pMessage);
      break;
    case 0x12:
      NetManager::ProcessBattleCommandTcp(this, pMessage);
      break;
    case 0x13:
      NetManager::ProcessGameResultMenu(this, pMessage);
      break;
    case 0x14:
      NetManager::ProcessGameResultNextScene(this, pMessage);
      break;
    case 0x15:
      NetManager::ProcessTrainingMenu(this, pMessage);
      break;
    case 0x16:
      v18 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v9);
      v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v18 + 16) + 336i64))(*(_QWORD *)(v18 + 16));
      if ( (v19 & 0x10) == 0 && (v19 & 6) == 0 )
      {
        v20 = pMessage->msgBattleCommand.time;
        Fw::VoiceChat::m_bMutedSpeakers = this->gamedata.playerDataSub[v20 & 0x3F].chatOffFlag;
        v21 = (v20 & 0x40) != 0;
        v22 = pMessage->msgJoinComplete.memberNum & 0x3F;
        v23 = v22;
        if ( Fw::VoiceChat::m_VoiceQos[v22].bConnected )
        {
          v24 = Mtx_lock((_Mtx_internal_imp_t *)&Fw::VoiceChat::m_VoiceChatMutex);
          if ( v24 )
            std::_Throw_C_error(v24);
          Fw::VoiceChat::m_VoiceQos[v23].bRejectMute = v21;
          v25 = Mtx_unlock((_Mtx_internal_imp_t *)&Fw::VoiceChat::m_VoiceChatMutex);
          if ( v25 )
            std::_Throw_C_error(v25);
        }
        v26 = Fw::VoiceChat::setVoiceMessage(
                pMessage->msgJoinComplete.memberNum & 0x3F,
                &pMessage->msgBattleCommand.cmd[4].key,
                &pMessage->msgVoiceData.bufSize);
        if ( pMessage->msgVoiceData.bufSize > 0xA && v26 == 1 )
        {
          v27 = pMessage->msgJoinComplete.memberNum & 0x3F;
          if ( Fw::VoiceChat::m_VoiceQos[v27].bConnected && !*(_WORD *)&Fw::VoiceChat::m_VoiceQos[v27].bStateMute )
            this->gamedata.speakFlag[pMessage->msgBattleCommand.time & 0x3F] = 33;
        }
      }
      break;
    case 0x17:
      if ( this->gamedata.onlineState == NET_STATE_BATTLE && *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2197436i64) )
        NetManager::CallGayaSe((NetManager *)0x140000000i64, (NETWORK_GAYA_TYPE)(pMessage->msgBattleCommand.time & 0xF));
      break;
    case 0x18:
      this->m_RankmatchAccept[1] = (pMessage->msgBattleCommand.time & 1) + 1;
      break;
    case 0x19:
      AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
      if ( !Fw::MatchingTarget::IsRoomOwner(v16, v15)
        && pMessage->msgJoinRequest.joinId.data == Fw::NetworkCommon::m_NpOnlineId.data )
      {
        NetManager::ChangeState(this, NET_STATE_TOP, v17);
        this->gamedata.error = NETWORK_ERROR_TYPE_ROOMFULL;
      }
      break;
    case 0x1A:
      pMsg.msgType = 27;
      pMsg.msgJoinRequest.joinId.data = pMessage->msgJoinRequest.joinId.data;
      opt[0] = sin->m_steamid.m_unAll64Bits;
      NetManager::SendMessageW(this, &pMsg, opt, 2, 1);
      break;
    case 0x1B:
      CurrentTick = Fw::Rtc::GetCurrentTick();
      data = pMessage->msgJoinRequest.joinId.data;
      if ( CurrentTick > data )
      {
        v30 = CurrentTick - data;
        m_unAll64Bits = sin->m_steamid.m_unAll64Bits;
        if ( (unsigned __int8)Fw::NetTransceiver::GetOnlineId(sin->m_steamid.m_unAll64Bits, (char *)opt) )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
          Myfirst = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
          if ( Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst != Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast )
          {
            while ( Myfirst->memberId != m_unAll64Bits )
            {
              if ( ++Myfirst == Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast )
                goto LABEL_52;
            }
            Myfirst->rtt = v30;
            Myfirst->bandwidth = -1;
          }
LABEL_52:
          LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
          v34 = 0;
          v35 = 0i64;
          player_data = this->gamedata.player_data;
          while ( player_data->steamId != m_unAll64Bits )
          {
            ++v34;
            ++v35;
            ++player_data;
            if ( v35 >= 12 )
              goto LABEL_68;
          }
          matched = NetManager::CalcRankMatchMemberAntenna(this, v34);
          v38 = v34;
          *((_DWORD *)&this->gamedata.player_data[v38] + 4) &= 0xFFFC7FFF;
          *((_DWORD *)&this->gamedata.player_data[v38] + 4) |= (matched & 7) << 15;
        }
        else
        {
          v39 = *(_QWORD *)&AppMain::pApp;
          v40 = -1;
          v41 = 0;
          v42 = 0;
          while ( 1 )
          {
            v43 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v32);
            v44 = (const char *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, const char *))(**(_QWORD **)(v43 + 32)
                                                                                        + 152i64))(
                                  *(_QWORD *)(v43 + 32),
                                  *(_QWORD *)(1080i64 * v42 + v39 + 39640),
                                  "OWNERID");
            if ( strtoull(v44, 0i64, 10) == m_unAll64Bits )
              break;
            if ( ++v42 >= 50 )
              goto LABEL_62;
          }
          *(_DWORD *)(1080i64 * v42 + v39 + 39652) = v30;
          v40 = v42;
LABEL_62:
          EnterCriticalSection((LPCRITICAL_SECTION)&this->roomsRTTMutex);
          v45 = 0i64;
          obtainedRoomsRTT = this->obtainedRoomsRTT;
          while ( *obtainedRoomsRTT != -1 )
          {
            ++v41;
            ++v45;
            ++obtainedRoomsRTT;
            if ( v45 >= 50 )
              goto LABEL_67;
          }
          this->obtainedRoomsRTT[v41] = v40;
LABEL_67:
          LeaveCriticalSection((LPCRITICAL_SECTION)&this->roomsRTTMutex);
        }
LABEL_68:
        Fw::MatchingTarget::SetRtt(m_unAll64Bits, v30);
      }
      break;
    default:
      break;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_Mutex);
}

void __fastcall NetManager::ProcessBackRoom(NetManager *this, SEND_MESSAGE *pMsg)
{
  __int64 v4; // rdx
  const char *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // r9
  unsigned __int8 v10; // r8
  int battleWaitState; // [rsp+20h] [rbp-28h]

  AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
  if ( Fw::MatchingTarget::IsRoomOwner(v5, v4) )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = v6;
      if ( this->gamedata.player_data[v7].steamId )
      {
        if ( ((pMsg->msgJoinComplete.memberNum ^ (*((_DWORD *)&this->gamedata.player_data[v7] + 3) >> 27)) & 0xF) == 0 )
          break;
      }
      if ( ++v6 >= 12 )
        return;
    }
    if ( (_BYTE)v6 != 0xFF )
    {
      LOBYTE(v8) = 0;
      v9 = (char)v6;
      v10 = *((_BYTE *)&this->gamedata.player_data[v9] + 16) & 0x7F;
      if ( v10 > 0xCu )
        v8 = (v10 - 1) / 12;
      battleWaitState = (*((_DWORD *)&this->gamedata.player_data[v9] + 4) >> 18) & 3;
      NetManager::UpdateSeatSit(
        this,
        pMsg->msgJoinComplete.memberNum & 0xF,
        v10,
        (SEAT_FLAG)battleWaitState,
        (BATTLE_WAIT_STATE)battleWaitState,
        this->gamedata.tableBattleType[(unsigned __int8)v8],
        pSendMsg,
        1);
    }
  }
}

void __fastcall NetManager::ProcessBattleCommand(NetManager *this, SEND_MESSAGE *pMsg)
{
  ONLINE_STATE onlineState; // eax
  unsigned __int16 crc; // r10
  unsigned int v5; // er8
  int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int8 *p_key; // rdi
  NetBattleCommandManager *v10; // rcx
  bool v11; // bp
  double v12; // xmm0_8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax

  onlineState = this->gamedata.onlineState;
  if ( onlineState > NET_STATE_CHARACTERSELECT_NOT_PARTY && onlineState != NET_STATE_GAMERESULT )
  {
    crc = pMsg->msgBattleCommand.crc;
    v5 = 0xFFFF;
    v6 = 0;
    v7 = 0i64;
    pMsg->msgBattleCommand.crc = 0;
    do
    {
      v8 = *(&pMsg->msgJoinComplete.memberNum + v7++);
      v5 = (v5 << 8) ^ crctable[v8 ^ BYTE1(v5)];
    }
    while ( v7 < 12 );
    p_key = &pMsg->msgBattleCommand.cmd[0].key;
    v10 = pBtlNet;
    v11 = (_WORD)v5 == crc;
    do
    {
      if ( v10 )
      {
        if ( v11 )
          NetBattleCommandManager::updateKeyLog(
            v10,
            pMsg->msgTableComplete.common.stageTelop[5],
            p_key,
            pMsg->msgBattleCommand.time - v6);
        v12 = AgClock::getSystemTime() * 1000000.0;
        v13 = 0i64;
        if ( v12 >= 9.223372036854776e18 )
        {
          v12 = v12 - 9.223372036854776e18;
          if ( v12 < 9.223372036854776e18 )
            v13 = 0x8000000000000000ui64;
        }
        v14 = v13 + (unsigned int)(int)v12;
        v10 = pBtlNet;
        pBtlNet->lastRecvTimeForTimeout = v14;
      }
      ++v6;
      ++p_key;
    }
    while ( v6 < 5 );
  }
}

void __fastcall NetManager::ProcessBattleCommandTcp(NetManager *this, SEND_MESSAGE *pMsg)
{
  ONLINE_STATE onlineState; // eax
  __int64 v4; // r9
  int v5; // ebx
  NetBattleCommandManager *v6; // r10
  int v7; // er9
  double v8; // xmm0_8
  unsigned __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-78h] BYREF
  char Src[56]; // [rsp+28h] [rbp-70h] BYREF
  int v12; // [rsp+60h] [rbp-38h]

  onlineState = this->gamedata.onlineState;
  if ( onlineState > NET_STATE_CHARACTERSELECT_NOT_PARTY && onlineState != NET_STATE_GAMERESULT )
  {
    if ( pMsg->msgTableComplete.common.stageTelop[1] < 0 )
    {
      v4 = (unsigned int)pMsg->msgTableComplete.common.stageTelop[2];
      v10 = 60;
      memset(Src, 0, sizeof(Src));
      v12 = 0;
      if ( (unsigned int)uncompress(Src, &v10, (char *)&pMsg->msgBattleLeave + 7, v4) || v10 <= 0 )
        return;
      memmove((char *)&pMsg->msgBattleLeave + 7, Src, v10);
    }
    v5 = 0;
    if ( (char)(2 * pMsg->msgTableComplete.common.stageTelop[1]) > 0 )
    {
      v6 = pBtlNet;
      do
      {
        v7 = pMsg->msgBattleCommand.time - v5;
        if ( v7 < 0 )
          break;
        if ( v6 )
        {
          NetBattleCommandManager::updateKeyLog(
            v6,
            pMsg->msgTableComplete.common.stageTelop[0],
            &pMsg->msgBattleCommand.cmd[v5 + 3].key,
            v7);
          v8 = AgClock::getSystemTime() * 1000000.0;
          v9 = 0i64;
          if ( v8 >= 9.223372036854776e18 )
          {
            v8 = v8 - 9.223372036854776e18;
            if ( v8 < 9.223372036854776e18 )
              v9 = 0x8000000000000000ui64;
          }
          v6 = pBtlNet;
          pBtlNet->lastRecvTimeForTimeout = v9 + (unsigned int)(int)v8;
        }
        ++v5;
      }
      while ( v5 < (char)(2 * pMsg->msgTableComplete.common.stageTelop[1]) >> 1 );
    }
  }
}

void __fastcall NetManager::ProcessBattleLoadEnd(NetManager *this, SEND_MESSAGE *pMsg)
{
  __int64 v3; // rcx
  unsigned __int8 v4; // di
  double v5; // xmm0_8
  unsigned __int64 v6; // rax

  if ( (pMsg->msgJoinComplete.memberNum & 0x10) != 0 )
  {
    this->gamedata.playerDataSub[(unsigned __int8)this->gamedata.myNo].advanceFlag = 2;
  }
  else
  {
    v3 = pMsg->msgJoinComplete.memberNum & 0xF;
    if ( this->gamedata.playerDataSub[v3].advanceFlag != 2 )
      this->gamedata.playerDataSub[v3].advanceFlag = 1;
  }
  v4 = pMsg->msgJoinComplete.memberNum & 0xF;
  v5 = AgClock::getSystemTime() * 1000000.0;
  v6 = 0i64;
  if ( v5 >= 9.223372036854776e18 )
  {
    v5 = v5 - 9.223372036854776e18;
    if ( v5 < 9.223372036854776e18 )
      v6 = 0x8000000000000000ui64;
  }
  this->gamedata.playerDataSub[v4].lastRecvTime = v6 + (unsigned int)(int)v5;
}

void __fastcall NetManager::ProcessCharacterSelect(NetManager *this, SEND_MESSAGE *pMsg)
{
  __int64 v3; // r8
  int v4; // ecx
  unsigned __int8 battleStartTableNo; // cl
  unsigned __int8 v6; // cl
  GAME_RULE gameRule; // edx
  unsigned __int8 v8; // r14
  int v9; // er8
  unsigned __int8 v10; // bp
  __int32 v11; // edx
  __int32 v12; // edx
  unsigned int v13; // edi
  unsigned __int8 v14; // si
  int v15; // er15
  int v16; // er11
  int v17; // er12
  int v18; // er13
  int v19; // er10
  char *v20; // r15
  unsigned int *v21; // r9
  unsigned int v22; // ecx
  unsigned int v23; // edx
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  SEND_MESSAGE *v28; // r10
  int *v29; // r9
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  float v36; // xmm2_4
  float v37; // xmm1_4
  float v38; // xmm1_4
  char v39; // cl
  char v40; // al
  int v41; // er8
  int optNum; // [rsp+30h] [rbp-B8h]
  int v43; // [rsp+34h] [rbp-B4h]
  __int64 myNo; // [rsp+38h] [rbp-B0h]
  char opt[96]; // [rsp+40h] [rbp-A8h] BYREF
  int v46; // [rsp+A0h] [rbp-48h] BYREF
  __int16 v47; // [rsp+A4h] [rbp-44h]

  v3 = pMsg->msgJoinComplete.memberNum & 0xF;
  *((_DWORD *)&this->gamedata.player_data[v3] + 2) ^= (*((_DWORD *)&this->gamedata.player_data[v3] + 2) ^ ((unsigned int)pMsg->msgBattleCommand.time >> 4)) & 0x3F;
  *((_DWORD *)&this->gamedata.player_data[v3] + 2) ^= (*((_DWORD *)&this->gamedata.player_data[v3] + 2) ^ ((unsigned int)pMsg->msgBattleCommand.time >> 4)) & 0x1C0;
  v4 = *((_DWORD *)&this->gamedata.player_data[v3] + 2) ^ ((unsigned __int16)*((_DWORD *)&this->gamedata.player_data[v3]
                                                                             + 2) ^ (unsigned __int16)((unsigned int)pMsg->msgBattleCommand.time >> 5)) & 0x600;
  *((_DWORD *)&this->gamedata.player_data[v3] + 2) = v4;
  *((_DWORD *)&this->gamedata.player_data[v3] + 2) = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)pMsg->msgBattleCommand.time) & 0x2000;
  if ( (pMsg->msgBattleCommand.time & 0x2000) == 0 )
    return;
  battleStartTableNo = this->gamedata.battleStartTableNo;
  if ( battleStartTableNo )
    v6 = 12 * battleStartTableNo + 1;
  else
    v6 = 1;
  gameRule = this->gamedata.gameRule;
  v8 = v6 + 12;
  v9 = 0;
  v10 = 0;
  if ( gameRule == GAME_RULE_SINGLE )
    goto LABEL_9;
  v11 = gameRule - 1;
  if ( !v11 )
    goto LABEL_9;
  v12 = v11 - 1;
  if ( !v12 )
  {
    v10 = 6;
    goto LABEL_10;
  }
  if ( v12 == 1 )
LABEL_9:
    v10 = 2;
LABEL_10:
  v13 = v6;
  v46 = -1;
  v14 = 0;
  v47 = -1;
  v15 = 0;
  v16 = 0;
  optNum = 0;
  v17 = 0;
  v43 = 0;
  v18 = 0;
  myNo = (unsigned __int8)this->gamedata.myNo;
  if ( (*((_DWORD *)&this->gamedata.player_data[myNo] + 4) & 0x7F) == v6 )
  {
    v19 = 0;
    v20 = opt;
    v21 = (unsigned int *)((char *)this->gamedata.player_data + 16);
    do
    {
      v22 = *v21;
      if ( (*v21 & 0x380) == 384 )
      {
        v23 = *v21 & 0x7F;
        if ( v13 <= v23 )
        {
          if ( v23 < v13 + v10 && (*(v21 - 2) & 0x2000) != 0 )
          {
            v24 = v14++;
            *((_BYTE *)&v46 + v24) = v19;
            v18 += (v22 >> 15) & 7;
          }
          if ( v13 <= v23 && v23 < v8 )
          {
            ++optNum;
            *(_QWORD *)v20 = *((_QWORD *)v21 - 2);
            v20 += 8;
            v25 = (v22 >> 15) & 7;
            v26 = v22 & 0x38000;
            v43 += v25;
            v27 = v16 + 1;
            if ( v26 > 0x8000 )
              v27 = v16;
            v16 = v27;
            if ( v26 == 0x10000 || v26 == 98304 )
              ++v17;
          }
        }
      }
      ++v19;
      v21 = (unsigned int *)((char *)v21 + 118);
    }
    while ( v19 < 12 );
    v15 = v43;
  }
  if ( (*((_BYTE *)&this->gamedata.player_data[myNo] + 16) & 0x7F) % 12 == 1 && v10 == v14 )
  {
    v28 = pSendMsgSub[5];
    pSendMsgSub[5]->msgType = 13;
    v28->msgBattleCommand.time &= ~1u;
    v28->msgBattleCommand.time |= 2u;
    if ( v14 )
    {
      v29 = &v46;
      do
      {
        switch ( v9 )
        {
          case 0:
            v28->msgBattleCommand.time ^= (v28->msgBattleCommand.time ^ (*((_DWORD *)&this->gamedata.player_data[myNo]
                                                                         + 3) >> 25)) & 0x3C;
            v28->msgBattleCommand.time ^= (v28->msgBattleCommand.time ^ (*((_DWORD *)&this->gamedata.player_data[myNo]
                                                                         + 2) << 6)) & 0xFC0;
            v28->msgVoiceData.bufSize = (*((_DWORD *)&this->gamedata.player_data[myNo] + 2) << 21) ^ (v28->msgVoiceData.bufSize ^ (*((_DWORD *)&this->gamedata.player_data[myNo] + 2) << 21)) & 0x3FFFFFFF;
            break;
          case 1:
            v30 = *(char *)v29;
            v28->msgBattleCommand.time ^= (v28->msgBattleCommand.time ^ (*((_DWORD *)&this->gamedata.player_data[v30] + 3) >> 15)) & 0xF000;
            v28->msgBattleCommand.time ^= (v28->msgBattleCommand.time ^ (*((_DWORD *)&this->gamedata.player_data[v30] + 2) << 16)) & 0x3F0000;
            v31 = (*(_DWORD *)(&v28->msgOrderSelect + 2) ^ (*((_DWORD *)&this->gamedata.player_data[v30] + 2) >> 9)) & 3;
            goto LABEL_38;
          case 2:
            v32 = *(char *)v29;
            v28->msgBattleCommand.time ^= (v28->msgBattleCommand.time ^ (*((_DWORD *)&this->gamedata.player_data[v32] + 3) >> 5)) & 0x3C00000;
            v28->msgBattleCommand.time = (*((_DWORD *)&this->gamedata.player_data[v32] + 2) << 26) | v28->msgBattleCommand.time & 0x3FFFFFF;
            v31 = (*(_DWORD *)(&v28->msgOrderSelect + 2) ^ (*((_DWORD *)&this->gamedata.player_data[v32] + 2) >> 7)) & 0xC;
            goto LABEL_38;
          case 3:
            v33 = *(char *)v29;
            v28->msgVoiceData.bufSize ^= (v28->msgVoiceData.bufSize ^ (*((_DWORD *)&this->gamedata.player_data[v33] + 3) >> 27)) & 0xF;
            v28->msgVoiceData.bufSize ^= ((unsigned __int16)*((_DWORD *)&v28->msgSeatRequest.waiting + 1) ^ (unsigned __int16)(16 * *((_DWORD *)&this->gamedata.player_data[v33] + 2))) & 0x3F0;
            v31 = (*(_DWORD *)(&v28->msgOrderSelect + 2) ^ (*((_DWORD *)&this->gamedata.player_data[v33] + 2) >> 5)) & 0x30;
            goto LABEL_38;
          case 4:
            v34 = *(char *)v29;
            v28->msgVoiceData.bufSize ^= (v28->msgVoiceData.bufSize ^ (*((_DWORD *)&this->gamedata.player_data[v34] + 3) >> 17)) & 0x3C00;
            v28->msgVoiceData.bufSize ^= (v28->msgVoiceData.bufSize ^ (*((_DWORD *)&this->gamedata.player_data[v34] + 2) << 14)) & 0xFC000;
            v31 = (*(_DWORD *)(&v28->msgOrderSelect + 2) ^ (*((_DWORD *)&this->gamedata.player_data[v34] + 2) >> 3)) & 0xC0;
            goto LABEL_38;
          case 5:
            v35 = *(char *)v29;
            v28->msgVoiceData.bufSize ^= (v28->msgVoiceData.bufSize ^ (*((_DWORD *)&this->gamedata.player_data[v35] + 3) >> 7)) & 0xF00000;
            v28->msgVoiceData.bufSize ^= (v28->msgVoiceData.bufSize ^ (*((_DWORD *)&this->gamedata.player_data[v35] + 2) << 24)) & 0x3F000000;
            v31 = (*(_DWORD *)(&v28->msgOrderSelect + 2) ^ (*((_DWORD *)&this->gamedata.player_data[v35] + 2) >> 1)) & 0x300;
LABEL_38:
            *(_DWORD *)&v28->msgJoinRequest.rank ^= v31;
            break;
          default:
            break;
        }
        ++v9;
        v29 = (int *)((char *)v29 + 1);
      }
      while ( v9 < v14 );
    }
    v36 = 0.0;
    if ( v18 )
      v37 = (float)v18 / 6.0;
    else
      v37 = 0.0;
    if ( v15 )
      v36 = (float)v15 / (float)optNum;
    v38 = fminf(v37, v36);
    if ( v38 < 7.0 )
    {
      if ( v38 < 6.5 )
      {
        if ( v38 < 6.0 )
        {
          if ( v38 < 5.5 )
            v39 = (v38 < 5.0) + 6;
          else
            v39 = 5;
        }
        else
        {
          v39 = 4;
        }
      }
      else
      {
        v39 = 3;
      }
    }
    else
    {
      v39 = 2;
    }
    if ( v16 < 3 )
    {
      if ( v16 < 2 )
      {
        if ( v16 >= 1 )
          v39 += 3;
      }
      else
      {
        v39 += 4;
      }
    }
    else
    {
      v39 += 5;
    }
    if ( v17 < 3 )
    {
      if ( v17 < 2 )
      {
        if ( v16 >= 1 )
          ++v39;
      }
      else
      {
        v39 += 2;
      }
    }
    else
    {
      v39 += 3;
    }
    v40 = v39;
    if ( (unsigned __int8)v39 > 7u )
      v40 = 7;
    *(_DWORD *)&v28->msgJoinRequest.rank &= 0xFFFFE3FF;
    *(_DWORD *)&v28->msgJoinRequest.rank |= (v40 & 7) << 10;
    this->gamedata.addDelayFrame = ((*(_DWORD *)(&v28->msgOrderSelect + 2) >> 10) & 7) + 2;
    NetManager::SendMessageW(this, v28, opt, 2, optNum);
    NetManager::ChangeState(this, NET_STATE_BATTLELOADING, v41);
  }
}

void __fastcall NetManager::ProcessCharacterSelectComplete(NetManager *this, SEND_MESSAGE *pMsg, char *a3)
{
  unsigned int time; // edx
  int i; // eax
  __int64 v7; // rdx
  unsigned int v8; // er8
  unsigned int v9; // edx
  __int64 v10; // rdx
  unsigned int v11; // er8
  int v12; // edx
  unsigned int v13; // er8
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // er8
  __int64 v17; // rdx
  unsigned int v18; // er8
  unsigned int v19; // eax
  __int64 v20; // rcx
  char *v21; // rdx
  unsigned int v22; // eax
  char *v23; // rdx
  unsigned int bufSize; // eax
  ONLINE_STATE v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // edx

  time = pMsg->msgBattleCommand.time;
  if ( (time & 3) == 0 )
  {
    v26 = (time >> 2) & 0xF;
    *((_DWORD *)&this->gamedata.player_data[v26] + 2) &= 0xFFFFFFC0;
    *((_DWORD *)&this->gamedata.player_data[v26] + 2) |= (time >> 6) & 0x3F;
    *((_DWORD *)&this->gamedata.player_data[v26] + 2) = *((_DWORD *)&this->gamedata.player_data[v26] + 2) & 0xFFFFE9FF | ((pMsg->msgBattleCommand.time & 0x3000 | 0x14000u) >> 3);
    v27 = ((unsigned int)pMsg->msgBattleCommand.time >> 14) & 0xF;
    v28 = ((unsigned int)pMsg->msgBattleCommand.time >> 18) & 0x3F;
    *((_DWORD *)&this->gamedata.player_data[v27] + 2) &= 0xFFFFFFC0;
    *((_DWORD *)&this->gamedata.player_data[v27] + 2) |= v28;
    *((_DWORD *)&this->gamedata.player_data[v27] + 2) = *((_DWORD *)&this->gamedata.player_data[v27] + 2) & 0xFFFFE9FF | ((pMsg->msgBattleCommand.time & 0x3000000 | 0x14000000u) >> 15);
    v19 = (unsigned int)pMsg->msgBattleCommand.time >> 26;
LABEL_18:
    v25 = NET_STATE_BATTLELOADING;
    goto LABEL_19;
  }
  if ( (time & 3) != 1 )
  {
    if ( (time & 3) != 2 )
      return;
    for ( i = 0; i < 6; ++i )
    {
      switch ( i )
      {
        case 0:
          v7 = ((unsigned int)pMsg->msgBattleCommand.time >> 2) & 0xF;
          v8 = ((unsigned int)pMsg->msgBattleCommand.time >> 6) & 0x3F;
          *((_DWORD *)&this->gamedata.player_data[v7] + 2) &= 0xFFFFFFC0;
          *((_DWORD *)&this->gamedata.player_data[v7] + 2) |= v8;
          a3 = (char *)this + v7 * 118;
          v9 = *((_DWORD *)&this->gamedata.player_data[v7] + 2) & 0xFFFFF9FF | (pMsg->msgVoiceData.bufSize >> 21) & 0x600 | 0x2000;
          goto LABEL_13;
        case 1:
          v10 = (unsigned __int8)HIBYTE(LOWORD(pMsg->msgJoinRequest.joinId.data)) >> 4;
          v11 = HIWORD(pMsg->msgBattleCommand.time) & 0x3F;
          *((_DWORD *)&this->gamedata.player_data[v10] + 2) &= 0xFFFFFFC0;
          *((_DWORD *)&this->gamedata.player_data[v10] + 2) |= v11;
          a3 = (char *)this + v10 * 118;
          v12 = (*(_DWORD *)(&pMsg->msgOrderSelect + 2) & 3 | 0x10) << 9;
          goto LABEL_12;
        case 2:
          v13 = (unsigned int)pMsg->msgBattleCommand.time >> 26;
          v14 = ((unsigned int)pMsg->msgBattleCommand.time >> 22) & 0xF;
          *((_DWORD *)&this->gamedata.player_data[v14] + 2) &= 0xFFFFFFC0;
          *((_DWORD *)&this->gamedata.player_data[v14] + 2) |= v13;
          a3 = (char *)this + v14 * 118;
          v12 = (*(_DWORD *)(&pMsg->msgOrderSelect + 2) & 0xC | 0x40) << 7;
          goto LABEL_12;
        case 3:
          a3 = (char *)this + 118 * (pMsg->msgTableComplete.common.stageTelop[0] & 0xF);
          *(_DWORD *)(a3 + 1465) ^= (*(_DWORD *)(a3 + 1465) ^ (pMsg->msgVoiceData.bufSize >> 4)) & 0x3F;
          v12 = 32 * (*(_DWORD *)(&pMsg->msgOrderSelect + 2) & 0x30 | 0x100);
          goto LABEL_12;
        case 4:
          v15 = (pMsg->msgVoiceData.bufSize >> 10) & 0xF;
          v16 = (pMsg->msgVoiceData.bufSize >> 14) & 0x3F;
          *((_DWORD *)&this->gamedata.player_data[v15] + 2) &= 0xFFFFFFC0;
          *((_DWORD *)&this->gamedata.player_data[v15] + 2) |= v16;
          a3 = (char *)this + v15 * 118;
          v12 = 8 * (*(_DWORD *)(&pMsg->msgOrderSelect + 2) & 0xC0 | 0x400);
          goto LABEL_12;
        case 5:
          v17 = (pMsg->msgVoiceData.bufSize >> 20) & 0xF;
          v18 = HIBYTE(pMsg->msgVoiceData.bufSize) & 0x3F;
          *((_DWORD *)&this->gamedata.player_data[v17] + 2) &= 0xFFFFFFC0;
          *((_DWORD *)&this->gamedata.player_data[v17] + 2) |= v18;
          a3 = (char *)this + v17 * 118;
          v12 = 2 * (*(_DWORD *)(&pMsg->msgOrderSelect + 2) & 0x300 | 0x1000);
LABEL_12:
          v9 = *(_DWORD *)(a3 + 1465) & 0xFFFFF9FF | v12;
LABEL_13:
          *(_DWORD *)(a3 + 1465) = v9;
          break;
        default:
          continue;
      }
    }
    v19 = *(_DWORD *)(&pMsg->msgOrderSelect + 2) >> 10;
    goto LABEL_18;
  }
  v20 = (time >> 2) & 0xF;
  *((_DWORD *)&this->gamedata.player_data[v20] + 2) &= 0xFFFFFFC0;
  *((_DWORD *)&this->gamedata.player_data[v20] + 2) |= (time >> 6) & 0x3F;
  v21 = (char *)this + v20 * 118;
  *(_DWORD *)(v21 + 1465) ^= (*((_DWORD *)&this->gamedata.player_data[v20] + 2) ^ (4 * pMsg->msgBattleCommand.time)) & 0xFC000;
  *(_DWORD *)(v21 + 1469) ^= (*((_DWORD *)&this->gamedata.player_data[v20] + 3) ^ ((unsigned int)pMsg->msgBattleCommand.time >> 18)) & 0x3F;
  *(_DWORD *)(v21 + 1465) ^= (*((_DWORD *)&this->gamedata.player_data[v20] + 2) ^ ((unsigned int)pMsg->msgBattleCommand.time >> 15)) & 0x600;
  *(_DWORD *)(v21 + 1465) = *((_DWORD *)&this->gamedata.player_data[v20] + 2) ^ (*((_DWORD *)&this->gamedata.player_data[v20]
                                                                                 + 2) ^ ((unsigned int)pMsg->msgBattleCommand.time >> 3)) & 0x1800000;
  v22 = pMsg->msgBattleCommand.time;
  *(_DWORD *)(v21 + 1465) |= 0x8002000u;
  *(_DWORD *)(v21 + 1469) ^= (*((_DWORD *)&this->gamedata.player_data[v20] + 3) ^ (v22 >> 19)) & 0x600;
  *(_DWORD *)(v21 + 1469) |= 0x2000u;
  v23 = (char *)this + 118 * (pMsg->msgTableComplete.common.stageTelop[0] & 0xF);
  *(_DWORD *)(v23 + 1465) ^= (*(_DWORD *)(v23 + 1465) ^ (pMsg->msgVoiceData.bufSize >> 4)) & 0x3F;
  *(_DWORD *)(v23 + 1465) ^= (*(_DWORD *)(v23 + 1465) ^ (16 * pMsg->msgVoiceData.bufSize)) & 0xFC000;
  *(_DWORD *)(v23 + 1469) ^= (*(_DWORD *)(v23 + 1469) ^ *((unsigned __int16 *)&pMsg->msgTableDiscrete.not_party.member[0].common
                                                        + 1)) & 0x3F;
  *(_DWORD *)(v23 + 1465) ^= (*(_DWORD *)(v23 + 1465) ^ (pMsg->msgVoiceData.bufSize >> 13)) & 0x600;
  *(_DWORD *)(v23 + 1465) ^= (*(_DWORD *)(v23 + 1465) ^ (pMsg->msgVoiceData.bufSize >> 1)) & 0x1800000;
  bufSize = pMsg->msgVoiceData.bufSize;
  *(_DWORD *)(v23 + 1465) |= 0x8002000u;
  *(_DWORD *)(v23 + 1469) ^= (*(_DWORD *)(v23 + 1469) ^ (bufSize >> 17)) & 0x600;
  *(_DWORD *)(v23 + 1469) |= 0x2000u;
  v25 = NET_STATE_ORDERSELECT;
  v19 = pMsg->msgVoiceData.bufSize >> 28;
LABEL_19:
  this->gamedata.addDelayFrame = (v19 & 7) + 2;
  NetManager::ChangeState(this, v25, (int)a3);
}

void __fastcall NetManager::ProcessCharacterSelectNotParty(NetManager *this, SEND_MESSAGE *pMsg)
{
  NetManager *v2; // rbx
  unsigned __int64 v3; // r8
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  GAME_RULE gameRule; // edx
  unsigned __int8 battleStartTableNo; // cl
  unsigned __int8 v9; // cl
  unsigned int v10; // edi
  int v11; // er10
  unsigned __int8 v12; // r13
  unsigned __int8 v13; // si
  int v14; // ebp
  int v15; // er9
  int antennaTwoNum; // er12
  int v17; // er15
  int v18; // er11
  char *v19; // r14
  unsigned int *v20; // r8
  unsigned int v21; // ecx
  unsigned int v22; // edx
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  SEND_MESSAGE *v27; // r11
  __int64 v28; // r8
  int v29; // edx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  __int64 v35; // rdx
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  float v40; // xmm1_4
  NetManager *v41; // rcx
  unsigned int v42; // edi
  float antennaBattleAvg; // xmm2_4
  unsigned int v44; // er8
  SEND_MESSAGE *v45; // r11
  int v46; // er10
  int v47; // er8
  ONLINE_STATE v48; // edx
  unsigned __int8 v49; // cl
  unsigned __int8 v50; // cl
  int v51; // er10
  unsigned __int8 v52; // r12
  __int32 v53; // edx
  __int32 v54; // edx
  unsigned int v55; // edi
  unsigned __int8 v56; // si
  int v57; // er15
  int v58; // er9
  int v59; // er13
  int v60; // ebp
  unsigned int *v61; // r8
  int v62; // er11
  char *v63; // r14
  unsigned int v64; // ecx
  unsigned int v65; // edx
  __int64 v66; // rax
  int v67; // eax
  unsigned int v68; // ecx
  int v69; // eax
  SEND_MESSAGE *v70; // r11
  float v71; // xmm1_4
  __int64 v72; // rdx
  int v73; // eax
  int v74; // ecx
  __int64 v75; // rdx
  NetManager *v76; // rcx
  float v77; // xmm2_4
  char v78; // al
  SEND_MESSAGE *v79; // r11
  int v80; // er10
  unsigned __int8 v81; // [rsp+30h] [rbp-C8h]
  __int64 myNo; // [rsp+38h] [rbp-C0h]
  __int64 v84; // [rsp+40h] [rbp-B8h]
  char opt[96]; // [rsp+50h] [rbp-A8h] BYREF
  int v86[2]; // [rsp+B0h] [rbp-48h]

  v2 = this;
  v3 = pMsg->msgJoinComplete.memberNum & 0xF;
  *((_DWORD *)&this->gamedata.player_data[v3] + 2) ^= (*((_DWORD *)&this->gamedata.player_data[v3] + 2) ^ ((unsigned int)pMsg->msgBattleCommand.time >> 4)) & 0x3F;
  *((_DWORD *)&this->gamedata.player_data[v3] + 2) ^= (*((_DWORD *)&this->gamedata.player_data[v3] + 2) ^ (16 * pMsg->msgBattleCommand.time)) & 0xFC000;
  *((_DWORD *)&this->gamedata.player_data[v3] + 3) ^= (*((_DWORD *)&this->gamedata.player_data[v3] + 3) ^ *(unsigned __int16 *)((char *)&pMsg->msgJoinComplete.memberRank[0].steamId + 1)) & 0x3F;
  *((_DWORD *)&this->gamedata.player_data[v3] + 2) ^= (*((_DWORD *)&this->gamedata.player_data[v3] + 2) ^ *(unsigned __int16 *)((char *)&pMsg->msgJoinComplete.memberRank[0].steamId + 1)) & 0x1C0;
  v5 = *((_DWORD *)&this->gamedata.player_data[v3] + 2) ^ (*((_DWORD *)&this->gamedata.player_data[v3] + 2) ^ ((unsigned int)pMsg->msgBattleCommand.time >> 5)) & 0x700000;
  *((_DWORD *)&v2->gamedata.player_data[v3] + 2) = v5;
  *((_DWORD *)&v2->gamedata.player_data[v3] + 3) ^= (*((_DWORD *)&v2->gamedata.player_data[v3] + 3) ^ ((unsigned int)pMsg->msgBattleCommand.time >> 22)) & 0x1C0;
  *((_DWORD *)&v2->gamedata.player_data[v3] + 2) ^= ((unsigned __int16)v5 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)&pMsg->msgSeatRequest.waiting + 1) << 9)) & 0x600;
  v6 = *((_DWORD *)&v2->gamedata.player_data[v3] + 2) ^ (*((_DWORD *)&v2->gamedata.player_data[v3] + 2) ^ (pMsg->msgVoiceData.bufSize << 21)) & 0x1800000;
  *((_DWORD *)&v2->gamedata.player_data[v3] + 2) = v6;
  *((_DWORD *)&v2->gamedata.player_data[v3] + 3) ^= (*((_DWORD *)&v2->gamedata.player_data[v3] + 3) ^ (32 * pMsg->msgVoiceData.bufSize)) & 0x600;
  *((_DWORD *)&v2->gamedata.player_data[v3] + 2) ^= ((unsigned __int16)v6 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)&pMsg->msgSeatRequest.waiting + 1) << 7)) & 0x2000;
  *((_DWORD *)&v2->gamedata.player_data[v3] + 2) ^= (*((_DWORD *)&v2->gamedata.player_data[v3] + 2) ^ (pMsg->msgVoiceData.bufSize << 20)) & 0x8000000;
  *((_DWORD *)&v2->gamedata.player_data[v3] + 3) ^= (*((_DWORD *)&v2->gamedata.player_data[v3] + 3) ^ (32 * pMsg->msgVoiceData.bufSize)) & 0x2000;
  gameRule = v2->gamedata.gameRule;
  if ( gameRule == GAME_RULE_TEAM )
  {
    if ( (pMsg->msgVoiceData.bufSize & 0x1C0) == 448 )
    {
      battleStartTableNo = v2->gamedata.battleStartTableNo;
      if ( battleStartTableNo )
        v9 = 12 * battleStartTableNo + 1;
      else
        v9 = 1;
      v10 = v9;
      v11 = 0;
      v86[0] = -1;
      v12 = v9 + 12;
      v13 = 0;
      v14 = 0;
      myNo = (unsigned __int8)v2->gamedata.myNo;
      v15 = 0;
      antennaTwoNum = 0;
      v17 = 0;
      if ( (*((_DWORD *)&v2->gamedata.player_data[myNo] + 4) & 0x7F) == v9 )
      {
        v18 = 0;
        v19 = opt;
        v20 = (unsigned int *)((char *)v2->gamedata.player_data + 16);
        do
        {
          v21 = *v20;
          if ( (*v20 & 0x380) == 384 )
          {
            v22 = *v20 & 0x7F;
            if ( v10 <= v22 )
            {
              if ( v22 < v10 + 2 )
              {
                if ( (*(v20 - 2) & 0x8002000) == 134225920 && (*(v20 - 1) & 0x2000) != 0 )
                {
                  v23 = v13++;
                  *((_BYTE *)v86 + v23) = v18;
                }
                v17 += (v21 >> 15) & 7;
              }
              if ( v10 <= v22 && v22 < v12 )
              {
                ++v11;
                *(_QWORD *)v19 = *((_QWORD *)v20 - 2);
                v19 += 8;
                v24 = (v21 >> 15) & 7;
                v25 = v21 & 0x38000;
                v14 += v24;
                v26 = v15 + 1;
                if ( v25 > 0x8000 )
                  v26 = v15;
                v15 = v26;
                if ( v25 == 0x10000 || v25 == 98304 )
                  ++antennaTwoNum;
              }
            }
          }
          ++v18;
          v20 = (unsigned int *)((char *)v20 + 118);
        }
        while ( v18 < 12 );
      }
      if ( (*((_BYTE *)&v2->gamedata.player_data[myNo] + 16) & 0x7F) % 12 == 1 && v13 == 2 )
      {
        v27 = pSendMsgSub[5];
        v28 = SLOBYTE(v86[0]);
        pSendMsgSub[5]->msgType = 13;
        v27->msgBattleCommand.time &= ~2u;
        v27->msgBattleCommand.time |= 1u;
        v29 = v27->msgBattleCommand.time ^ (v27->msgBattleCommand.time ^ (*((_DWORD *)&v2->gamedata.player_data[v28] + 3) >> 25)) & 0x3C;
        v27->msgBattleCommand.time = v29;
        v30 = v29 ^ ((unsigned __int16)v29 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)&v2->gamedata.player_data[v28]
                                                                                  + 2) << 6)) & 0xFC0;
        v27->msgBattleCommand.time = v30;
        v31 = v30 ^ (v30 ^ (*((_DWORD *)&v2->gamedata.player_data[v28] + 2) >> 2)) & 0x3F000;
        v27->msgBattleCommand.time = v31;
        v32 = v31 ^ (v31 ^ (*((_DWORD *)&v2->gamedata.player_data[v28] + 3) << 18)) & 0xFC0000;
        v27->msgBattleCommand.time = v32;
        v33 = v32 ^ (v32 ^ (*((_DWORD *)&v2->gamedata.player_data[v28] + 2) << 15)) & 0x3000000;
        v27->msgBattleCommand.time = v33;
        v34 = v33 ^ (v33 ^ (8 * *((_DWORD *)&v2->gamedata.player_data[v28] + 2))) & 0xC000000;
        v27->msgBattleCommand.time = v34;
        v27->msgBattleCommand.time = v34 ^ (v34 ^ (*((_DWORD *)&v2->gamedata.player_data[v28] + 3) << 19)) & 0x30000000;
        v35 = SBYTE1(v86[0]);
        v27->msgVoiceData.bufSize ^= (v27->msgVoiceData.bufSize ^ (*((_DWORD *)&v2->gamedata.player_data[v35] + 3) >> 27)) & 0xF;
        v36 = v27->msgVoiceData.bufSize ^ (v27->msgVoiceData.bufSize ^ (16
                                                                      * *((_DWORD *)&v2->gamedata.player_data[v35] + 2))) & 0x3F0;
        v27->msgVoiceData.bufSize = v36;
        v37 = v36 ^ ((unsigned __int16)v36 ^ (unsigned __int16)(*((_DWORD *)&v2->gamedata.player_data[v35] + 2) >> 4)) & 0xFC00;
        v27->msgVoiceData.bufSize = v37;
        v38 = v37 ^ (v37 ^ (*((_DWORD *)&v2->gamedata.player_data[v35] + 3) << 16)) & 0x3F0000;
        v27->msgVoiceData.bufSize = v38;
        v39 = v38 ^ (v38 ^ (*((_DWORD *)&v2->gamedata.player_data[v35] + 2) << 13)) & 0xC00000;
        v27->msgVoiceData.bufSize = v39;
        v40 = 0.0;
        v41 = (NetManager *)(v39 ^ (v39 ^ (2 * *((_DWORD *)&v2->gamedata.player_data[v35] + 2))) & 0x3000000u);
        v27->msgVoiceData.bufSize = (unsigned int)v41;
        v42 = (unsigned int)v41 ^ ((unsigned int)v41 ^ (*((_DWORD *)&v2->gamedata.player_data[v35] + 3) << 17)) & 0xC000000;
        v27->msgVoiceData.bufSize = v42;
        if ( v17 )
          antennaBattleAvg = (float)v17 * 0.5;
        else
          antennaBattleAvg = 0.0;
        if ( v14 )
          v40 = (float)v14 / (float)v11;
        v44 = v42 ^ (v42 ^ ((unsigned __int8)NetManager::CalcAddDelayFrame2(
                                               v41,
                                               0,
                                               v40,
                                               v15,
                                               antennaTwoNum,
                                               antennaBattleAvg) << 28)) & 0x70000000;
        v45->msgVoiceData.bufSize = v44;
        v2->gamedata.addDelayFrame = ((v44 >> 28) & 7) + 2;
        NetManager::SendMessageW(v2, v45, opt, 2, v46);
        v48 = NET_STATE_ORDERSELECT;
LABEL_68:
        NetManager::ChangeState(v2, v48, v47);
        return;
      }
    }
    return;
  }
  if ( gameRule != GAME_RULE_TRAINING && gameRule || (pMsg->msgTableComplete.common.stageTelop[0] & 0x40) == 0 )
    return;
  v49 = v2->gamedata.battleStartTableNo;
  if ( v49 )
    v50 = 12 * v49 + 1;
  else
    v50 = 1;
  v51 = 0;
  v81 = v50 + 12;
  v52 = 0;
  if ( gameRule == GAME_RULE_SINGLE || (v53 = gameRule - 1) == 0 )
  {
LABEL_41:
    v52 = 2;
    goto LABEL_42;
  }
  v54 = v53 - 1;
  if ( v54 )
  {
    if ( v54 != 1 )
      goto LABEL_42;
    goto LABEL_41;
  }
  v52 = 6;
LABEL_42:
  v55 = v50;
  v86[0] = -1;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v84 = (unsigned __int8)v2->gamedata.myNo;
  v60 = 0;
  if ( (*((_DWORD *)&v2->gamedata.player_data[v84] + 4) & 0x7F) == v50 )
  {
    v61 = (unsigned int *)((char *)v2->gamedata.player_data + 16);
    v62 = 0;
    v63 = opt;
    do
    {
      v64 = *v61;
      if ( (*v61 & 0x380) == 384 )
      {
        v65 = *v61 & 0x7F;
        if ( v55 <= v65 )
        {
          if ( v65 < v55 + v52 )
          {
            if ( (*(v61 - 2) & 0x2000) != 0 )
            {
              v66 = v56++;
              *((_BYTE *)v86 + v66) = v62;
            }
            v60 += (v64 >> 15) & 7;
          }
          if ( v55 <= v65 && v65 < v81 )
          {
            ++v51;
            *(_QWORD *)v63 = *((_QWORD *)v61 - 2);
            v63 += 8;
            v67 = (v64 >> 15) & 7;
            v68 = v64 & 0x38000;
            v57 += v67;
            v69 = v58 + 1;
            if ( v68 > 0x8000 )
              v69 = v58;
            v58 = v69;
            if ( v68 == 0x10000 || v68 == 98304 )
              ++v59;
          }
        }
      }
      ++v62;
      v61 = (unsigned int *)((char *)v61 + 118);
    }
    while ( v62 < 12 );
    v2 = this;
  }
  if ( (*((_BYTE *)&v2->gamedata.player_data[v84] + 16) & 0x7F) % 12 == 1 && v52 == v56 )
  {
    v70 = pSendMsgSub[5];
    v71 = 0.0;
    v72 = SLOBYTE(v86[0]);
    pSendMsgSub[5]->msgType = 13;
    v70->msgBattleCommand.time &= 0xFFFFFFFC;
    v73 = v70->msgBattleCommand.time ^ (v70->msgBattleCommand.time ^ (*((_DWORD *)&v2->gamedata.player_data[v72] + 3) >> 25)) & 0x3C;
    v70->msgBattleCommand.time = v73;
    v74 = v73 ^ ((unsigned __int16)v73 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)&v2->gamedata.player_data[v72]
                                                                              + 2) << 6)) & 0xFC0;
    v70->msgBattleCommand.time = v74;
    v70->msgBattleCommand.time = v74 ^ ((unsigned __int16)v74 ^ (unsigned __int16)(8
                                                                                 * *((_DWORD *)&v2->gamedata.player_data[v72]
                                                                                   + 2))) & 0x3000;
    *((_DWORD *)&v2->gamedata.player_data[v72] + 2) &= ~0x1000u;
    *((_DWORD *)&v2->gamedata.player_data[v72] + 2) |= 0x800u;
    v75 = SBYTE1(v86[0]);
    v70->msgBattleCommand.time ^= (v70->msgBattleCommand.time ^ (*((_DWORD *)&v2->gamedata.player_data[v75] + 3) >> 13)) & 0x3C000;
    v76 = (NetManager *)(v70->msgBattleCommand.time ^ (v70->msgBattleCommand.time ^ (*((_DWORD *)&v2->gamedata.player_data[v75]
                                                                                     + 2) << 18)) & 0xFC0000u);
    v70->msgBattleCommand.time = (int)v76;
    v70->msgBattleCommand.time = (unsigned int)v76 ^ ((unsigned int)v76 ^ (*((_DWORD *)&v2->gamedata.player_data[v75] + 2) << 15)) & 0x3000000;
    *((_DWORD *)&v2->gamedata.player_data[v75] + 2) &= ~0x1000u;
    *((_DWORD *)&v2->gamedata.player_data[v75] + 2) |= 0x800u;
    if ( v60 )
      v77 = (float)v60 * 0.5;
    else
      v77 = 0.0;
    if ( v57 )
      v71 = (float)v57 / (float)v51;
    v78 = NetManager::CalcAddDelayFrame2(v76, 0, v71, v58, v59, v77);
    v79->msgBattleCommand.time &= 0xE3FFFFFF;
    v79->msgBattleCommand.time |= (v78 & 7) << 26;
    v2->gamedata.addDelayFrame = (((unsigned int)v79->msgBattleCommand.time >> 26) & 7) + 2;
    NetManager::SendMessageW(v2, v79, opt, 2, v80);
    v48 = NET_STATE_BATTLELOADING;
    goto LABEL_68;
  }
}

void __fastcall NetManager::ProcessGameResultMenu(
        NetManager *this,
        unsigned __int8 pno,
        unsigned __int8 cursor,
        unsigned __int8 result)
{
  unsigned __int32 v5; // eax
  NetManager *v7; // rbp
  int v8; // er8
  unsigned __int8 v9; // di
  char myNo; // r14
  unsigned __int8 v11; // si
  unsigned __int8 v12; // r11
  _DWORD *v13; // rbx
  unsigned __int8 v14; // r13
  __int64 v15; // r10
  _DWORD *v16; // rdx
  unsigned int v17; // ecx
  char resultMenuCursor; // r8
  __int64 v19; // r12
  unsigned int v20; // edi
  int v21; // er8
  SEND_MESSAGE *v22; // rdx
  unsigned int v23; // er8
  int v24; // er8
  ONLINE_STATE v25; // edx
  unsigned __int8 v26; // al
  SEND_MESSAGE *v27; // r12
  unsigned __int8 v28; // r9
  int v29; // er14
  int optNum; // eax
  _DWORD *v31; // r8
  char *v32; // r10
  __int64 v33; // rsi
  __int64 v34; // r11
  unsigned int v35; // edx
  int v36; // er14
  bool v37; // r9
  unsigned __int8 v38; // r8
  unsigned __int8 v39; // dl
  NetManager *v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // ecx
  NetManager *v43; // rcx
  int v44; // edx
  __int64 v45; // rax
  char v46; // r8
  char v47; // r12
  int *v48; // rdx
  char v49; // r14
  int v50; // er10
  NETWORK_ROOM_BATTLE_TYPE v51; // ebx
  char v52; // bp
  int v53; // ecx
  unsigned int v54; // er9
  bool v55; // zf
  bool v56; // zf
  __int64 v57; // r15
  unsigned int *v58; // rbx
  __int64 v59; // r11
  char v60; // cl
  unsigned __int8 v61; // r8
  int *v62; // rdx
  unsigned __int8 v63; // bp
  int v64; // er9
  unsigned int v65; // ecx
  int v66; // ecx
  __int64 v67; // rcx
  int v68; // eax
  SEND_MESSAGE *v69; // r10
  unsigned __int8 v70; // r9
  char v71; // r11
  char v72; // si
  char v73; // r14
  unsigned int v74; // ecx
  char *v75; // r8
  int v76; // ecx
  int v77; // edx
  GAME_RULE gameRule; // ebx
  unsigned __int8 v79; // di
  int v80; // ecx
  __int64 v81; // rdx
  const char *v82; // rcx
  bool IsRoomOwner; // al
  int v84; // [rsp+30h] [rbp-D8h]
  unsigned __int8 v85; // [rsp+34h] [rbp-D4h]
  unsigned __int8 v86; // [rsp+35h] [rbp-D3h]
  unsigned __int8 v87; // [rsp+36h] [rbp-D2h]
  int v88; // [rsp+38h] [rbp-D0h]
  __int64 v89; // [rsp+40h] [rbp-C8h]
  NetManager *v90; // [rsp+48h] [rbp-C0h]
  __int64 v91; // [rsp+50h] [rbp-B8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-B0h]
  char opt[96]; // [rsp+60h] [rbp-A8h] BYREF

  v5 = this->gamedata.onlineState - 10;
  v87 = result;
  v86 = pno;
  v90 = this;
  v7 = this;
  if ( v5 <= 1 )
    return;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->m_Mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_Mutex);
  if ( cursor > 3u )
    goto LABEL_122;
  v9 = 1;
  myNo = v7->gamedata.myNo;
  v84 = 0;
  v91 = (__int64)v7 + 118 * pno;
  v11 = *(_BYTE *)(v91 + 1473) & 0x7F;
  if ( v11 > 0xCu )
    v9 = 12 * ((v11 - 1) / 12) + 1;
  v12 = 0;
  v85 = v9 + 12;
  v13 = (_DWORD *)((char *)v7->gamedata.player_data + 16);
  v14 = v9 + 2;
  LOBYTE(v8) = 0;
  v89 = 12i64;
  v15 = 12i64;
  v88 = v8;
  v16 = (_DWORD *)((char *)v7->gamedata.player_data + 16);
  do
  {
    if ( *((_QWORD *)v16 - 2) )
    {
      if ( (*v16 & 0x380) == 384 )
      {
        v17 = *v16 & 0x7F;
        if ( v9 <= v17 )
        {
          if ( v17 < v14 )
          {
            ++v12;
            resultMenuCursor = v7->gamedata.playerDataSub[(*(v16 - 1) >> 27) & 0xF].resultMenuCursor;
            if ( resultMenuCursor != -1 )
              ++*((_BYTE *)&v84 + resultMenuCursor);
            LOBYTE(v8) = v88;
          }
          if ( v9 <= v17 && v17 < (unsigned __int8)(v9 + 12) )
          {
            v8 = (unsigned __int8)v8;
            if ( ((*(v16 - 1) >> 27) & 0xF) == myNo )
              v8 = 1;
            v88 = v8;
          }
        }
      }
    }
    v16 = (_DWORD *)((char *)v16 + 118);
    --v15;
  }
  while ( v15 );
  v19 = v91;
  if ( cursor == 3 && !(_BYTE)v84 && !*(_WORD *)((char *)&v84 + 1) && !HIBYTE(v84) )
  {
    *(_DWORD *)(v91 + 1473) &= 0xFFFFFCFF;
    *(_DWORD *)(v19 + 1473) |= 0x80u;
    v20 = v86;
    v21 = v86 & 0xF;
    v7->gamedata.playerDataSub[(*(_DWORD *)(v19 + 1469) >> 27) & 0xF].resultMenuCursor = -1;
    v22 = pSendMsgSub2[v20 % 0xC];
    v22->msgType = 9;
    v22->msgBattleCommand.time &= 0xFFFFFFF0;
    v22->msgBattleCommand.time |= v21;
    v23 = v22->msgBattleCommand.time & 0xFFFFC80F | (16 * (*(_DWORD *)(v19 + 1473) & 0x7F | 0x80));
    v22->msgBattleCommand.time = v23;
    v22->msgBattleCommand.time = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)(*(_DWORD *)(v19 + 1473) >> 4)) & 0xC000;
    NetManager::SendMessageW(v7, v22, 0i64, 1, 0);
    if ( (_BYTE)v20 != v7->gamedata.myNo )
      goto LABEL_122;
    goto LABEL_24;
  }
  if ( !v12 || v12 > (unsigned __int8)v84 + BYTE1(v84) + (unsigned int)BYTE2(v84) )
  {
    if ( !HIBYTE(v84) )
      goto LABEL_122;
    LOBYTE(v44) = 0;
    if ( v9 > 0xCu )
      v44 = (v9 - 1) / 12;
    v45 = (unsigned __int8)v44;
    v46 = 0;
    v47 = -1;
    v48 = (int *)((char *)v7->gamedata.player_data + 16);
    v49 = -1;
    v50 = 0;
    v51 = v7->gamedata.tableBattleType[v45];
    v52 = v87;
    while ( 1 )
    {
      if ( *((_QWORD *)v48 - 2) )
      {
        v53 = *v48;
        v54 = *v48 & 0x7F;
        if ( v9 <= v54 && v54 <= v14 )
        {
          if ( v51 == NETWORK_ROOM_BATTLE_TYPE_LOSE )
          {
            if ( v52 )
            {
              if ( v52 == 1 )
              {
                v56 = v54 == v9;
LABEL_80:
                if ( v56 )
                {
                  v47 = v50;
                  v46 = v53 & 0x7F;
                  *v48 = v53 | 0x7F;
                }
              }
              if ( (*v48 & 0x7F) == v14 )
                v49 = v50;
              goto LABEL_84;
            }
            v56 = v54 == v14 - 1;
            goto LABEL_80;
          }
          if ( v51 == NETWORK_ROOM_BATTLE_TYPE_WIN )
            break;
        }
      }
LABEL_84:
      ++v50;
      v48 = (int *)((char *)v48 + 118);
      if ( v50 >= 12 )
      {
        v7 = v90;
        v57 = 12i64;
        v58 = (unsigned int *)((char *)v90->gamedata.player_data + 16);
        if ( v47 != -1 )
        {
          if ( v49 == -1 )
          {
            v67 = v47;
            *((_DWORD *)&v90->gamedata.player_data[v67] + 4) &= 0xFFFFFF80;
            v68 = v46 & 0x7F;
          }
          else
          {
            v59 = 12i64;
            v60 = v46;
            v61 = v9 + 2;
            *((_DWORD *)&v90->gamedata.player_data[v49] + 4) = *((_DWORD *)&v90->gamedata.player_data[v49] + 4) & 0xFFF3FF80 | v60 & 0x7F;
            v62 = (int *)v58;
            v63 = v85;
            do
            {
              if ( *((_QWORD *)v62 - 2) )
              {
                v64 = *v62;
                v65 = *v62 & 0x7F;
                if ( v9 <= v65 && v65 < v63 && v65 != v9 && v65 != v14 - 1 && (v64 & 0xC0000) != 0x80000 )
                {
                  v66 = v64 ^ ((unsigned __int8)v64 ^ (unsigned __int8)(v64 - 1)) & 0x7F;
                  *v62 = v66;
                  if ( v61 <= (v66 & 0x7Fu) )
                    v61 = (*(_BYTE *)v62 & 0x7F) + 1;
                }
              }
              v62 = (int *)((char *)v62 + 118);
              --v59;
            }
            while ( v59 );
            v7 = v90;
            v67 = v47;
            *((_DWORD *)&v90->gamedata.player_data[v67] + 4) &= 0xFFF7FF80;
            v68 = v61 & 0x7F | 0x40000;
          }
          *((_DWORD *)&v7->gamedata.player_data[v67] + 4) |= v68;
        }
        v69 = pSendMsgSub[9];
        v70 = 0;
        v71 = v88;
        v72 = 0;
        pSendMsgSub[9]->msgType = 7;
        v73 = v7->gamedata.myNo;
        do
        {
          if ( *((_QWORD *)v58 - 2) )
          {
            v74 = *v58 & 0x7F;
            if ( v9 <= v74 && v74 < v85 )
            {
              v75 = (char *)v69 + 4 * v70;
              *v58 = *v58 & 0xFFFFFC7F | 0x80;
              ++v70;
              *(_DWORD *)(v75 + 5) ^= (*(_DWORD *)(v75 + 5) ^ (*(v58 - 1) >> 27)) & 0xF;
              v76 = *(_DWORD *)(v75 + 5) ^ (*(_DWORD *)(v75 + 5) ^ (16 * *v58)) & 0x7F0;
              *(_DWORD *)(v75 + 5) = v76;
              v77 = v76 ^ ((unsigned __int16)v76 ^ (unsigned __int16)(16 * *v58)) & 0x3800;
              *(_DWORD *)(v75 + 5) = v77;
              *(_DWORD *)(v75 + 5) = v77 ^ ((unsigned __int16)v77 ^ (unsigned __int16)(*v58 >> 4)) & 0xC000;
              if ( !v71 )
                v7->gamedata.playerDataSub[(*(v58 - 1) >> 27) & 0xF].resultMenuCursor = -1;
              if ( v73 == ((*(v58 - 1) >> 27) & 0xF) )
                v72 = 1;
            }
          }
          v58 = (unsigned int *)((char *)v58 + 118);
          --v57;
        }
        while ( v57 );
        gameRule = v7->gamedata.gameRule;
        v79 = v86;
        v69->msgBattleCommand.time ^= (v69->msgBattleCommand.time ^ v70) & 0xF;
        if ( gameRule != GAME_RULE_TRAINING || v73 == v79 )
          v80 = 0;
        else
          v80 = 16;
        v69->msgBattleCommand.time = v80 | v69->msgBattleCommand.time & 0xFFFFFFEF;
        NetManager::SendMessageW(v7, v69, 0i64, 1, 0);
        if ( v73 != v79 && (gameRule == GAME_RULE_TRAINING || !v72) )
          goto LABEL_122;
        if ( gameRule != GAME_RULE_TRAINING )
        {
          if ( v7->gamedata.onlineState )
          {
            AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
            IsRoomOwner = Fw::MatchingTarget::IsRoomOwner(v82, v81);
            v25 = NET_STATE_WAITSTART;
            if ( IsRoomOwner )
              v25 = NET_STATE_WAITCLIENT;
LABEL_120:
            v43 = v7;
LABEL_121:
            NetManager::ChangeState(v43, v25, v24);
          }
          goto LABEL_122;
        }
LABEL_24:
        v25 = NET_STATE_WAITCLIENT;
        goto LABEL_120;
      }
    }
    if ( v52 )
    {
      if ( v52 != 1 )
      {
LABEL_74:
        if ( (*v48 & 0x7F) == v14 )
          v49 = v50;
        goto LABEL_84;
      }
      v55 = v54 == v14 - 1;
    }
    else
    {
      v55 = v54 == v9;
    }
    if ( v55 )
    {
      v47 = v50;
      v46 = v53 & 0x7F;
      *v48 = v53 | 0x7F;
    }
    goto LABEL_74;
  }
  if ( BYTE2(v84) )
    v26 = 2;
  else
    v26 = BYTE1(v84) != 0;
  v27 = pSendMsgSub[8];
  v28 = 1;
  v29 = v26;
  optNum = 0;
  v84 = 0;
  pSendMsgSub[8]->msgType = 20;
  v27->msgBattleCommand.time &= 0xFFFFFFFC;
  v27->msgBattleCommand.time |= v29;
  if ( v11 > 0xCu )
  {
    v28 = 12 * ((v11 - 1) / 12) + 1;
    optNum = 0;
  }
  v31 = (_DWORD *)((char *)v7->gamedata.player_data + 16);
  v32 = opt;
  v33 = 12i64;
  do
  {
    v34 = *((_QWORD *)v31 - 2);
    if ( v34 )
    {
      v35 = *v31 & 0x7F;
      if ( v28 > v35 || v35 >= (unsigned __int8)(v28 + 12) )
      {
        optNum = v84;
      }
      else
      {
        optNum = v84;
        if ( (*v31 & 0x380) == 384 )
        {
          optNum = v84 + 1;
          *(_QWORD *)v32 = v34;
          v84 = optNum;
          v32 += 8;
        }
      }
    }
    v31 = (_DWORD *)((char *)v31 + 118);
    --v33;
  }
  while ( v33 );
  NetManager::SendMessageW(v7, v27, opt, 2, optNum);
  if ( v29 )
  {
    v36 = v29 - 1;
    if ( v36 )
    {
      if ( v36 != 1 )
        goto LABEL_122;
      v37 = 1;
      v38 = v9 + 2;
      v39 = v9;
      v40 = v7;
      if ( (_BYTE)v88 )
      {
        NetManager::clearOrderTable2(v7, v9, v14, 1);
        v25 = NET_STATE_CHARACTERSELECT_NOT_PARTY;
        goto LABEL_120;
      }
    }
    else
    {
      if ( (_BYTE)v88 )
      {
        v41 = 12i64;
        do
        {
          if ( *((_QWORD *)v13 - 2) )
          {
            v42 = *v13 & 0x7F;
            if ( v9 > v42 )
            {
              v41 = v89;
            }
            else
            {
              v41 = v89;
              if ( v42 < v14 )
              {
                *(v13 - 2) &= 0xF9FFE7FF;
                *(v13 - 1) &= 0xFFFFE7FF;
              }
            }
          }
          v13 = (_DWORD *)((char *)v13 + 118);
          v89 = --v41;
        }
        while ( v41 );
        v25 = NET_STATE_ORDERSELECT;
        goto LABEL_120;
      }
      v37 = 0;
      v38 = v9 + 2;
      v39 = v9;
      v40 = v7;
    }
    NetManager::clearOrderTable(v40, v39, v38, v37);
  }
  else
  {
    v43 = v7;
    if ( (_BYTE)v88 )
    {
      v25 = NET_STATE_BATTLELOADING;
      goto LABEL_121;
    }
    NetManager::clearOrderTable3(v7, v9, v9 + 2);
  }
LABEL_122:
  LeaveCriticalSection(lpCriticalSection);
}

void __fastcall NetManager::ProcessGameResultMenu(NetManager *this, SEND_MESSAGE *pMsg)
{
  __int64 v4; // rdx
  const char *v5; // rcx
  bool IsRoomOwner; // bp
  __int64 v7; // rdx
  unsigned __int64 resultMenuClearTick; // rsi
  double v9; // xmm0_8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  int time; // edx
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // rcx
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // edx

  AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
  IsRoomOwner = Fw::MatchingTarget::IsRoomOwner(v5, v4);
  if ( !IsRoomOwner )
    goto LABEL_10;
  v7 = pMsg->msgJoinComplete.memberNum & 0xF;
  resultMenuClearTick = this->gamedata.playerDataSub[v7].resultMenuClearTick;
  if ( !resultMenuClearTick )
  {
    this->gamedata.playerDataSub[v7].resultMenuCursor = ((unsigned int)pMsg->msgBattleCommand.time >> 4) & 3;
    goto LABEL_11;
  }
  v9 = AgClock::getSystemTime() * 1000000.0;
  v10 = 0i64;
  if ( v9 >= 9.223372036854776e18 )
  {
    v9 = v9 - 9.223372036854776e18;
    if ( v9 < 9.223372036854776e18 )
      v10 = 0x8000000000000000ui64;
  }
  v11 = v10 + (unsigned int)(int)v9;
  v12 = v11 - resultMenuClearTick;
  if ( resultMenuClearTick >= v11 )
    v12 = 0i64;
  if ( v12 > 0x4C4B40 )
LABEL_10:
    this->gamedata.playerDataSub[pMsg->msgJoinComplete.memberNum & 0xF].resultMenuCursor = ((unsigned int)pMsg->msgBattleCommand.time >> 4) & 3;
LABEL_11:
  time = pMsg->msgBattleCommand.time;
  v14 = time & 0xF;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v14] + 2) &= 0xFFFFFFC0;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v14] + 2) |= BYTE1(time) & 0x3F;
  v15 = pMsg->msgBattleCommand.time;
  v16 = v15 & 0xF;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v16] + 2) &= 0xFFF03FFF;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v16] + 2) |= ((v15 >> 14) & 0x3F) << 14;
  v17 = pMsg->msgBattleCommand.time;
  v18 = v17 & 0xF;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v18] + 3) &= 0xFFFFFFC0;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v18] + 3) |= (v17 >> 20) & 0x3F;
  v19 = pMsg->msgBattleCommand.time;
  v20 = v19 & 0xF;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v20] + 2) &= 0xFFFFFE3F;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v20] + 2) |= ((((v19 >> 26) & 7) - 1) & 7) << 6;
  v21 = pMsg->msgBattleCommand.time;
  v22 = v21 & 0xF;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v22] + 2) &= 0xFF8FFFFF;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v22] + 2) |= ((((v21 >> 29) & 7) - 1) & 7) << 20;
  v23 = pMsg->msgBattleCommand.time & 0xF;
  v24 = ((pMsg->msgTableComplete.common.stageTelop[0] & 7) - 1) & 7;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v23] + 3) &= 0xFFFFFE3F;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v23] + 3) |= v24 << 6;
  v25 = pMsg->msgBattleCommand.time & 0xF;
  v26 = ((pMsg->msgVoiceData.bufSize >> 3) & 3) << 9;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v25] + 2) &= 0xFFFFF9FF;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v25] + 2) |= v26;
  v27 = pMsg->msgBattleCommand.time & 0xF;
  LOBYTE(v21) = (pMsg->msgVoiceData.bufSize >> 5) & 3;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v27] + 2) &= 0xFE7FFFFF;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v27] + 2) |= (unsigned __int8)v21 << 23;
  v28 = pMsg->msgBattleCommand.time & 0xF;
  v29 = ((pMsg->msgVoiceData.bufSize >> 7) & 3) << 9;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v28] + 3) &= 0xFFFFF9FF;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v28] + 3) |= v29;
  v30 = pMsg->msgBattleCommand.time & 0xF;
  v31 = pMsg->msgVoiceData.bufSize & 0x3E00;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v30] + 4) &= 0xFFFF83FF;
  if ( v31 < 0x3000 )
    *((_DWORD *)&g_NetworkManager.gamedata.player_data[v30] + 4) |= 2 * v31;
  if ( IsRoomOwner )
    NetManager::ProcessGameResultMenu(
      this,
      pMsg->msgJoinComplete.memberNum & 0xF,
      ((unsigned int)pMsg->msgBattleCommand.time >> 4) & 3,
      ((unsigned int)pMsg->msgBattleCommand.time >> 6) & 3);
}

void __fastcall NetManager::ProcessGameResultNextScene(NetManager *this, SEND_MESSAGE *pMsg, int a3)
{
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // al
  int v6; // er8
  unsigned __int8 v7; // r9
  unsigned __int8 v8; // al
  __int64 v9; // r8
  _DWORD *v10; // rax
  unsigned int v11; // edx

  if ( (pMsg->msgBattleCommand.time & 3) != 0 )
  {
    if ( (pMsg->msgBattleCommand.time & 3) == 1 )
    {
      v7 = 1;
      v8 = *((_BYTE *)&this->gamedata.player_data[this->gamedata.myNo] + 16) & 0x7F;
      if ( v8 > 0xCu )
        v7 = 12 * ((v8 - 1) / 12) + 1;
      v9 = 12i64;
      v10 = (_DWORD *)((char *)this->gamedata.player_data + 16);
      do
      {
        if ( *((_QWORD *)v10 - 2) )
        {
          v11 = *v10 & 0x7F;
          if ( v7 <= v11 && v11 < (unsigned __int8)(v7 + 2) )
          {
            *(v10 - 2) &= 0xF9FFE7FF;
            *(v10 - 1) &= 0xFFFFE7FF;
          }
        }
        v10 = (_DWORD *)((char *)v10 + 118);
        --v9;
      }
      while ( v9 );
      NetManager::ChangeState(this, NET_STATE_ORDERSELECT, 0);
    }
    else if ( (pMsg->msgBattleCommand.time & 3) == 2 )
    {
      v4 = 1;
      v5 = *((_BYTE *)&this->gamedata.player_data[this->gamedata.myNo] + 16) & 0x7F;
      if ( v5 > 0xCu )
        v4 = 12 * ((v5 - 1) / 12) + 1;
      NetManager::clearOrderTable2(this, v4, v4 + 2, 1);
      NetManager::ChangeState(this, NET_STATE_CHARACTERSELECT_NOT_PARTY, v6);
    }
  }
  else
  {
    NetManager::ChangeState(this, NET_STATE_BATTLELOADING, a3);
  }
}

void __fastcall NetManager::ProcessJoinComplete(NetManager *this, SEND_MESSAGE *pMsg, CSteamID addr)
{
  ONLINE_STATE onlineState; // er12
  int memberNum; // edx
  int v7; // ebx
  int v8; // edi
  double v9; // xmm0_8
  unsigned __int64 v10; // rax
  unsigned __int64 *p_memberId; // rbx
  int v12; // er8
  char **Name; // r15
  UserId *p_npId; // rdi
  __int64 v15; // rbp

  onlineState = this->gamedata.onlineState;
  if ( onlineState >= NET_STATE_JOIN_ROOM && onlineState != NET_STATE_LEAVEROOM )
  {
    memberNum = pMsg->msgJoinComplete.memberNum;
    v7 = 0;
    v8 = 0;
    if ( memberNum > 0 )
    {
      while ( this->gamedata.userInfo.m_OnlineID.data != *(unsigned __int64 *)((char *)&pMsg->msgJoinComplete.memberRank[0].steamId
                                                                             + 20 * v8) )
      {
        if ( ++v8 >= memberNum )
          return;
      }
      this->gamedata.myNo = (*((_DWORD *)pMsg->msgJoinComplete.memberRank + 5 * v8 + 2) >> 22) & 0xF;
      NetManager::setUserDataFromRoomMemberInfo(
        this,
        pMsg->msgJoinComplete.member,
        pMsg->msgJoinComplete.memberNum,
        (*((_DWORD *)pMsg->msgJoinComplete.memberRank + 5 * v8 + 2) >> 22) & 0xF);
      if ( pMsg->msgJoinComplete.memberNum )
      {
        do
        {
          if ( this->gamedata.player_data[v7].steamId != this->gamedata.userInfo.m_OnlineID.data )
            Fw::VoiceChat::addConnect(v7);
          ++v7;
        }
        while ( v7 < pMsg->msgJoinComplete.memberNum );
      }
      v9 = AgClock::getSystemTime() * 1000000.0;
      v10 = 0i64;
      if ( v9 >= 9.223372036854776e18 )
      {
        v9 = v9 - 9.223372036854776e18;
        if ( v9 < 9.223372036854776e18 )
          v10 = 0x8000000000000000ui64;
      }
      this->gamedata.playerDataSub[(unsigned __int8)v8].lastRecvTime = v10 + (unsigned int)(int)v9;
      p_memberId = &Fw::MatchingTarget::m_RoomMember[0].memberId;
      Name = SteamNameCache::getName(SteamNameCache::ms_instance, addr);
      p_npId = &Fw::MatchingTarget::m_RoomMember[0].npId;
      v15 = 12i64;
      do
      {
        if ( *p_memberId == addr.m_steamid.m_comp )
          AgString::operator=(&p_npId->handle, (const char *)Name);
        p_npId = (UserId *)((char *)p_npId + 40);
        p_memberId += 5;
        --v15;
      }
      while ( v15 );
      if ( onlineState == NET_STATE_JOIN_ROOM )
        NetManager::ChangeState(this, NET_STATE_JOIN_COMPLETE, v12);
    }
  }
}

void __fastcall NetManager::ProcessJoinCompleteRank(NetManager *this, SEND_MESSAGE *pMsg, CSteamID addr)
{
  ONLINE_STATE onlineState; // eax
  int memberNum; // edx
  int v7; // ebx
  int v8; // edi
  double v9; // xmm0_8
  unsigned __int64 v10; // rax

  onlineState = this->gamedata.onlineState;
  if ( onlineState >= NET_STATE_JOIN_ROOM && onlineState != NET_STATE_LEAVEROOM )
  {
    memberNum = pMsg->msgTableCompleteRank.memberNum;
    v7 = 0;
    v8 = 0;
    if ( memberNum > 0 )
    {
      while ( this->gamedata.userInfo.m_OnlineID.data != pMsg->msgTableCompleteRank.memberRank[v8].steamId )
      {
        if ( ++v8 >= memberNum )
          goto LABEL_15;
      }
      this->gamedata.myNo = (*((_DWORD *)&pMsg->msgTableCompleteRank.memberRank[v8] + 2) >> 22) & 0xF;
      NetManager::setUserDataFromRoomMemberInfo(
        this,
        pMsg->msgTableCompleteRank.memberRank,
        pMsg->msgTableCompleteRank.memberNum);
      if ( pMsg->msgJoinComplete.member[4].country[0] )
      {
        do
        {
          if ( this->gamedata.player_data[v7].steamId != this->gamedata.userInfo.m_OnlineID.data )
            Fw::VoiceChat::addConnect(v7);
          ++v7;
        }
        while ( v7 < pMsg->msgTableCompleteRank.memberNum );
      }
      v9 = AgClock::getSystemTime() * 1000000.0;
      v10 = 0i64;
      if ( v9 >= 9.223372036854776e18 )
      {
        v9 = v9 - 9.223372036854776e18;
        if ( v9 < 9.223372036854776e18 )
          v10 = 0x8000000000000000ui64;
      }
      this->gamedata.playerDataSub[(unsigned __int8)v8].lastRecvTime = v10 + (unsigned int)(int)v9;
    }
LABEL_15:
    NetManager::ProcessTableComple(this, pMsg);
  }
}

void __fastcall NetManager::ProcessJoinRequest(NetManager *this, SEND_MESSAGE *pMsg, CSteamID addr, bool rankMatchFlag)
{
  int maxSlot; // ebx
  ONLINE_STATE onlineState; // ecx
  int playerIndex; // ebp
  int v10; // eax
  int v11; // er8
  bool *p_privateInvite; // rdx
  bool *v13; // rax
  __int64 v14; // rcx
  int privateSlot; // ecx
  __int64 v16; // r9
  int v17; // eax
  int v18; // edx
  CSteamID::SteamID_t v19; // rbx
  unsigned int rtt; // er14
  Fw::TUdpP2pInfo *Myfirst; // rax
  char *v22; // rbx
  char *v23; // r8
  int v24; // ecx
  int v25; // edx
  char **Name; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  bool *v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 *v32; // r14
  int v33; // edx
  __int64 v34; // r8
  bool *v35; // rcx
  int v36; // eax
  CSteamID::SteamID_t v37; // rbx
  __int64 v38; // rdi
  AgString *v39; // rax
  const char *CString; // rax
  signed __int8 v41; // r15
  double v42; // xmm0_8
  unsigned __int64 v43; // rax
  double v44; // xmm0_8
  unsigned __int64 v45; // rcx
  SEND_MESSAGE *v46; // r12
  int v47; // ebx
  int v48; // edi
  NET_USER_DATA *player_data; // rbp
  $036D0A4096A9372F26531B9C7601AD18 *v50; // rdx
  NET_USER_DATA *v51; // r8
  SEND_MESSAGE *v52; // rdx
  AgString v53; // [rsp+38h] [rbp-50h] BYREF
  CSteamID id; // [rsp+A0h] [rbp+18h] BYREF

  id.m_steamid.m_comp = addr.m_steamid.m_comp;
  maxSlot = this->gamedata.maxSlot;
  onlineState = this->gamedata.onlineState;
  if ( this->gamedata.roomPlayerCount < maxSlot
    && (unsigned int)(onlineState - 3) <= 0xD
    && (unsigned __int8)Fw::MatchingTarget::IsAliveMember(pMsg->msgJoinRequest.joinId.data) )
  {
    playerIndex = -1;
    v10 = maxSlot;
    if ( !pMsg->msgJoinRequest.free.privateInvite )
    {
      v11 = 0;
      p_privateInvite = &this->gamedata.player_data[0].privateInvite;
      v13 = &this->gamedata.player_data[0].privateInvite;
      v14 = 12i64;
      do
      {
        if ( *(_QWORD *)(v13 - 117) && !*v13 )
          ++v11;
        v13 += 118;
        --v14;
      }
      while ( v14 );
      privateSlot = this->gamedata.privateSlot;
      v16 = this->gamedata.maxSlot;
      if ( v16 > 0 )
      {
        do
        {
          v17 = privateSlot - 1;
          if ( !*p_privateInvite )
            v17 = privateSlot;
          privateSlot = v17;
          p_privateInvite += 118;
          --v16;
        }
        while ( v16 );
      }
      v10 = maxSlot - privateSlot - v11;
    }
    v18 = 0;
    if ( maxSlot <= 0 )
    {
LABEL_58:
      v52 = pSendMsgSub[0];
      pSendMsgSub[0]->msgType = 25;
      v52->msgJoinRequest.joinId.data = pMsg->msgJoinRequest.joinId.data;
      NetManager::SendMessageW(this, v52, &id, 2, 1);
    }
    else
    {
      while ( this->gamedata.player_data[v18].steamId != pMsg->msgJoinRequest.joinId.data )
      {
        if ( ((char)v18 >= 12 || !LODWORD(this->gamedata.player_data[(char)v18].steamId))
          && playerIndex == -1
          && v10 > 0i64 )
        {
          playerIndex = v18;
        }
        if ( ++v18 >= maxSlot )
        {
          if ( playerIndex == -1 )
            goto LABEL_58;
          if ( rankMatchFlag )
          {
            v19.m_comp = id.m_steamid.m_comp;
            rtt = pMsg->msgJoinRequest.rank.rtt;
            EnterCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
            Myfirst = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
            if ( Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst != Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast )
            {
              while ( Myfirst->memberId != v19.m_unAll64Bits )
              {
                if ( ++Myfirst == Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast )
                  goto LABEL_30;
              }
              Myfirst->rtt = rtt;
              Myfirst->bandwidth = 0;
            }
LABEL_30:
            LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
            v22 = (char *)this + 118 * playerIndex;
            NetManager::setJoinUser(
              this,
              (NET_USER_DATA *)(v22 + 1457),
              v23,
              &pMsg->msgJoinRequest.rank,
              playerIndex,
              &id);
          }
          else
          {
            v22 = (char *)this + 118 * playerIndex;
            *(_DWORD *)(v22 + 1469) ^= (*(_DWORD *)(v22 + 1469) ^ ((unsigned __int8)playerIndex << 27)) & 0x78000000;
            v24 = *(_DWORD *)(v22 + 1469);
            *(CSteamID *)(v22 + 1457) = id;
            v25 = v24 ^ (v24 ^ (*(_DWORD *)(&pMsg->msgOrderSelect + 2) << 14)) & 0x1FC000;
            *(_DWORD *)(v22 + 1469) = v25;
            *(_DWORD *)(v22 + 1469) = v25 ^ (v25 ^ (*(_DWORD *)(&pMsg->msgOrderSelect + 2) << 14)) & 0x7E00000;
            *(_DWORD *)(v22 + 1473) ^= (*(_DWORD *)(v22 + 1473) ^ (*(_DWORD *)(&pMsg->msgOrderSelect + 2) << 8)) & 0x3FE00000;
            *(_DWORD *)(v22 + 1473) ^= (*(_DWORD *)(v22 + 1473) ^ (*(_DWORD *)(&pMsg->msgOrderSelect + 2) >> 7)) & 0x38000;
            *(_DWORD *)(v22 + 1505) ^= (*(_DWORD *)(v22 + 1505) ^ (*(_DWORD *)(&pMsg->msgOrderSelect + 2) >> 22)) & 0x18;
            *(_DWORD *)(v22 + 1477) = 2068357982;
            this->gamedata.playerDataSub[(unsigned __int8)playerIndex].resultMenuCursor = -1;
          }
          Name = SteamNameCache::getName(SteamNameCache::ms_instance, id);
          Fw::MatchingSystem::SetRoomMemberName(id, (const char *)Name);
          v22[1574] = pMsg->msgJoinRequest.free.privateInvite;
          v27 = (unsigned int)this->gamedata.privateSlot;
          v28 = this->gamedata.maxSlot;
          if ( v28 > 0 )
          {
            v29 = &this->gamedata.player_data[0].privateInvite;
            do
            {
              v30 = v27 - 1;
              if ( !*v29 )
                v30 = v27;
              v27 = v30;
              v29 += 118;
              --v28;
            }
            while ( v28 );
          }
          AgTrace("AG_TL 5 Updating the privateslot count to %d\n", v27);
          v32 = *(__int64 **)(SteamInternal_ContextInit(
                                &`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext,
                                v31)
                            + 32);
          v33 = this->gamedata.privateSlot;
          v34 = this->gamedata.maxSlot;
          if ( v34 > 0 )
          {
            v35 = &this->gamedata.player_data[0].privateInvite;
            do
            {
              v36 = v33 - 1;
              if ( !*v35 )
                v36 = v33;
              v33 = v36;
              v35 += 118;
              --v34;
            }
            while ( v34 );
          }
          AgString::AgString(&v53, v33);
          v37.m_comp = Fw::MatchingTarget::m_RoomId.m_steamid.m_comp;
          v38 = *v32;
          CString = AgString::getCString(v39);
          (*(void (__fastcall **)(__int64 *, CSteamID::SteamID_t, const char *, const char *))(v38 + 160))(
            v32,
            v37,
            "PRIVATESLOTS",
            CString);
          AgString::~AgString(&v53);
          Fw::VoiceChat::addConnect(playerIndex);
          v41 = ++this->gamedata.roomPlayerCount;
          v42 = AgClock::getSystemTime() * 1000000.0;
          v43 = 0i64;
          if ( v42 >= 9.223372036854776e18 )
          {
            v42 = v42 - 9.223372036854776e18;
            if ( v42 < 9.223372036854776e18 )
              v43 = 0x8000000000000000ui64;
          }
          this->gamedata.playerDataSub[(unsigned __int8)playerIndex].lastRecvTime = v43 + (unsigned int)(int)v42;
          v44 = AgClock::getSystemTime() * 1000000.0;
          v45 = 0i64;
          if ( v44 >= 9.223372036854776e18 )
          {
            v44 = v44 - 9.223372036854776e18;
            if ( v44 < 9.223372036854776e18 )
              v45 = 0x8000000000000000ui64;
          }
          this->gamedata.m_TimeStamp = v45 + (unsigned int)(int)v44;
          v46 = pSendMsgSub[0];
          pSendMsgSub[0]->msgType = 3;
          v46->msgJoinComplete.memberNum = v41;
          v47 = 0;
          v48 = 0;
          player_data = this->gamedata.player_data;
          do
          {
            if ( player_data->steamId )
            {
              v50 = &v46->msgJoinComplete.1;
              v51 = &this->gamedata.player_data[v47];
              if ( rankMatchFlag )
                NetManager::convertRoomMemberFromUserData(this, &v50->memberRank[v48], v51);
              else
                NetManager::convertRoomMemberFromUserData(this, (ROOM_USER_DATA *)v50 + v48, v51);
              if ( v41 <= ++v48 )
                break;
            }
            ++v47;
            ++player_data;
          }
          while ( v47 < 12 );
          if ( rankMatchFlag )
            NetManager::SendReadyTableBattleStart(this, 1u, (MsgJoinComplete *)&v46->1);
          else
            NetManager::SendMessageW(this, v46, 0i64, 1, 0);
          return;
        }
      }
    }
  }
}

void __fastcall NetManager::ProcessLeaveRoom(NetManager *this, SEND_MESSAGE *pMsg)
{
  __int64 v4; // rdx
  const char *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 *v8; // r14
  int privateSlot; // edx
  __int64 maxSlot; // r8
  bool *p_privateInvite; // rcx
  int v12; // eax
  CSteamID::SteamID_t v13; // rbx
  __int64 v14; // rdi
  AgString *v15; // rax
  const char *CString; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  bool *v19; // rsi
  bool v20; // cl
  unsigned int v21; // eax
  int v22; // eax
  AgString v23; // [rsp+28h] [rbp-20h] BYREF

  if ( this->gamedata.matchMode != NETWORK_MATCHING_TYPE_RANK || this->gamedata.onlineState < NET_STATE_BATTLE )
  {
    AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
    if ( Fw::MatchingTarget::IsRoomOwner(v5, v4) )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = v6;
        if ( pMsg->msgJoinRequest.joinId.data == this->gamedata.player_data[v7].steamId )
          break;
        if ( ++v6 >= 12 )
          goto LABEL_9;
      }
      NetManager::resetPlayer(this, v6);
LABEL_9:
      v8 = *(__int64 **)(SteamInternal_ContextInit(
                           &`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext,
                           v7 * 118)
                       + 32);
      privateSlot = this->gamedata.privateSlot;
      maxSlot = this->gamedata.maxSlot;
      if ( maxSlot > 0 )
      {
        p_privateInvite = &this->gamedata.player_data[0].privateInvite;
        do
        {
          v12 = privateSlot - 1;
          if ( !*p_privateInvite )
            v12 = privateSlot;
          privateSlot = v12;
          p_privateInvite += 118;
          --maxSlot;
        }
        while ( maxSlot );
      }
      AgString::AgString(&v23, privateSlot);
      v13.m_comp = Fw::MatchingTarget::m_RoomId.m_steamid.m_comp;
      v14 = *v8;
      CString = AgString::getCString(v15);
      (*(void (__fastcall **)(__int64 *, CSteamID::SteamID_t, const char *, const char *, __int64))(v14 + 160))(
        v8,
        v13,
        "PRIVATESLOTS",
        CString,
        -2i64);
      AgString::~AgString(&v23);
      v17 = (unsigned int)this->gamedata.privateSlot;
      v18 = this->gamedata.maxSlot;
      if ( v18 > 0 )
      {
        v19 = &this->gamedata.player_data[0].privateInvite;
        do
        {
          v20 = *v19;
          v19 += 118;
          v21 = v17 - 1;
          if ( !v20 )
            v21 = v17;
          v17 = v21;
          --v18;
        }
        while ( v18 );
      }
      AgTrace("AG_TL 2 Updating the privateslot count to %d\n", v17);
    }
    else if ( (unsigned int)(this->gamedata.onlineState - 6) <= 0xA )
    {
      v22 = 0;
      while ( pMsg->msgJoinRequest.joinId.data != this->gamedata.player_data[v22].steamId )
      {
        if ( ++v22 >= 12 )
          return;
      }
      NetManager::resetPlayer(this, v22);
    }
  }
}

void __fastcall NetManager::ProcessSitSeatComple(NetManager *this, SEND_MESSAGE *pMsg)
{
  __int64 v4; // rdx
  const char *v5; // rcx
  unsigned int time; // er8
  unsigned __int8 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int8 v10; // r10
  int v11; // edx

  AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
  if ( !Fw::MatchingTarget::IsRoomOwner(v5, v4) )
  {
    time = pMsg->msgBattleCommand.time;
    v7 = pMsg->msgJoinComplete.memberNum & 0xF;
    if ( ((time >> 4) & 7) != 0 )
    {
      if ( (((unsigned int)pMsg->msgBattleCommand.time >> 4) & 7) == 1 )
      {
        v9 = v7;
        *((_DWORD *)&this->gamedata.player_data[v9] + 4) &= 0xFFF3FC00;
        *((_DWORD *)&this->gamedata.player_data[v9] + 4) |= (time >> 8) & 0x7F | (8
                                                                                * (time & 0x18000 | (16 * ((time >> 4) & 7))));
        if ( (BYTE1(pMsg->msgBattleCommand.time) & 0x7F) % 12 == 1 )
        {
          v10 = BYTE1(pMsg->msgBattleCommand.time) & 0x7F;
          LOBYTE(v11) = 0;
          if ( v10 > 0xCu )
            v11 = (v10 - 1) / 12;
          this->gamedata.tableBattleType[(unsigned __int8)v11] = ((unsigned int)pMsg->msgBattleCommand.time >> 17) & 7;
        }
      }
      else if ( (((unsigned int)pMsg->msgBattleCommand.time >> 4) & 7) == 2 )
      {
        v8 = v7;
        *((_DWORD *)&this->gamedata.player_data[v8] + 4) &= 0xFFFFFC7F;
        *((_DWORD *)&this->gamedata.player_data[v8] + 4) |= 8 * (time & 0x70);
      }
    }
    else
    {
      *((_DWORD *)&this->gamedata.player_data[v7] + 4) = *((_DWORD *)&this->gamedata.player_data[v7] + 4) & 0xFFF3FC00 | (((time >> 4) & 7) << 7);
    }
  }
}

void __fastcall NetManager::ProcessSitSeatRequest(NetManager *this, SEND_MESSAGE *pMsg, CSteamID addr)
{
  __int64 v5; // rdx
  const char *v6; // rcx
  unsigned __int8 v7; // dl

  AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
  if ( Fw::MatchingTarget::IsRoomOwner(v6, v5) )
  {
    v7 = pMsg->msgJoinComplete.memberNum & 0xF;
    if ( (((unsigned int)pMsg->msgBattleCommand.time >> 4) & 7) != 0 )
    {
      if ( (((unsigned int)pMsg->msgBattleCommand.time >> 4) & 7) == 1 )
      {
        NetManager::UpdateSeatSit(
          this,
          v7,
          BYTE1(pMsg->msgBattleCommand.time) & 0x7F,
          (SEAT_FLAG)(((unsigned int)pMsg->msgBattleCommand.time >> 17) & 7),
          (BATTLE_WAIT_STATE)(((unsigned int)pMsg->msgBattleCommand.time >> 15) & 3),
          (NETWORK_ROOM_BATTLE_TYPE)(((unsigned int)pMsg->msgBattleCommand.time >> 17) & 7),
          pSendMsgSub[3],
          0);
      }
      else if ( (((unsigned int)pMsg->msgBattleCommand.time >> 4) & 7) == 2 )
      {
        NetManager::UpdateSeatBattleWait(this, (MsgSeatRequest *)&pMsg->1);
      }
    }
    else
    {
      NetManager::UpdateSeatLeave(this, v7, pSendMsgSub[2]);
    }
  }
}

void __fastcall NetManager::ProcessTableComple(NetManager *this, SEND_MESSAGE *pMsg)
{
  __int64 v4; // rdx
  const char *v5; // rcx
  $6861721681D5FC63186E15D07D018DC0 *v6; // r14
  _DWORD *v7; // rsi
  __int64 v8; // r12
  char *v9; // rcx
  int v10; // ebp
  _DWORD *v11; // r15
  int v12; // er10
  __int64 v13; // r8
  _DWORD *v14; // rdx
  unsigned __int8 v15; // bl
  __int64 v16; // r11
  char *v17; // r8
  NET_USER_DATA *player_data; // rdx
  __int64 v19; // r11
  char *v20; // rcx
  int time; // er10
  unsigned int v22; // ebx
  unsigned __int8 *v23; // r11
  int v24; // er10
  unsigned __int8 v25; // r9
  char v26; // r9
  _DWORD *v27; // rax
  char *v28; // rdx
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rdx
  const char *v32; // rcx
  int v33; // er8
  int v34; // edx
  ONLINE_STATE v35; // edx
  unsigned __int8 v36; // [rsp+20h] [rbp-48h]
  unsigned __int8 v37; // [rsp+21h] [rbp-47h]
  GAME_RULE gameRule; // [rsp+24h] [rbp-44h]
  int v39; // [rsp+28h] [rbp-40h]
  char myNo; // [rsp+80h] [rbp+18h]
  char v41; // [rsp+88h] [rbp+20h]

  AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
  if ( !Fw::MatchingTarget::IsRoomOwner(v5, v4) && this->gamedata.onlineState )
  {
    v6 = &pMsg->1;
    v7 = (_DWORD *)((char *)&v6->msgJoinComplete.memberRank[1] + 16);
    v8 = 2i64;
    gameRule = this->gamedata.gameRule;
    if ( gameRule == GAME_RULE_PARTY )
      v8 = 6i64;
    myNo = this->gamedata.myNo;
    v41 = 0;
    v9 = (char *)this->gamedata.player_data + 12;
    v39 = v8;
    v10 = 0;
    v37 = -1;
    v11 = (_DWORD *)((char *)this->gamedata.player_data + 12);
    v36 = 0;
    do
    {
      LODWORD(v13) = *(unsigned __int8 *)v7;
      v12 = 0;
      LOBYTE(v13) = v13 & 0xF;
      v14 = v9;
      v15 = (*v7 >> 4) & 0x7F;
      v16 = 0i64;
      while ( !*(_QWORD *)(v14 - 3) || (_BYTE)v13 != ((*v14 >> 27) & 0xF) )
      {
        ++v12;
        ++v16;
        v14 = (_DWORD *)((char *)v14 + 118);
        if ( v16 >= 12 )
          goto LABEL_19;
      }
      v17 = &v6->msgSeatRequest.waiting.stageTelop[49];
      player_data = this->gamedata.player_data;
      if ( (v6->msgBattleCommand.time & 0x1000) != 0 )
        NetManager::setPlayerDataFromSeatUser(
          this,
          &player_data[v12],
          (SEAT_USER_DATA_PARTY *)&v17[16 * v10],
          myNo == ((*v11 >> 27) & 0xF));
      else
        NetManager::setPlayerDataFromSeatUser(
          (NetManager *)(118i64 * v12),
          &player_data[v12],
          (SEAT_USER_DATA *)&v17[16 * v10],
          gameRule);
      if ( v15 % 0xCu == 1 )
      {
        v37 = v15;
        v20 = (char *)this + 118 * v19;
        *(_DWORD *)(v20 + 1473) ^= (*(_DWORD *)(v20 + 1473) ^ (v6->msgBattleCommand.time << 7)) & 0x7C00;
        *(_OWORD *)(v20 + 1509) = *(_OWORD *)v6->msgTableComplete.common.stageTelop;
        *(_OWORD *)(v20 + 1525) = *(_OWORD *)&v6->msgVoiceData.dataBuf[12];
        *(_OWORD *)(v20 + 1541) = *(_OWORD *)((char *)&v6->msgPing + 36);
        *(_QWORD *)(v20 + 1557) = *(_QWORD *)((char *)&v6->msgPing + 52);
        *(_DWORD *)(v20 + 1565) = *((_DWORD *)&v6->msgPing + 15);
        v20[1569] = v6->msgSeatRequest.waiting.stageTelop[48];
      }
      if ( myNo == ((*((_DWORD *)&this->gamedata.player_data[v19] + 3) >> 27) & 0xF) )
      {
        this->gamedata.orderSendFlag = 1;
        v41 = 1;
      }
      ++v36;
LABEL_19:
      ++v10;
      v9 = (char *)this->gamedata.player_data + 12;
      v7 += 4;
      v11 = (_DWORD *)((char *)v11 + 118);
      --v8;
    }
    while ( v8 );
    time = v6->msgBattleCommand.time;
    v22 = 0;
    if ( (((unsigned int)v6->msgBattleCommand.time >> 8) & 0xF) != v39 )
    {
      v23 = &v6->msgVoiceData.dataBuf[153];
      do
      {
        v24 = time & 0x1000;
        if ( v24 )
          v25 = *v23;
        else
          v25 = *(v23 - 64);
        v26 = v25 & 0xF;
        v27 = (_DWORD *)((char *)this->gamedata.player_data + 12);
        v13 = 0i64;
        while ( !*(_QWORD *)(v27 - 3) || v26 != ((*v27 >> 27) & 0xF) )
        {
          ++v13;
          v27 = (_DWORD *)((char *)v27 + 118);
          if ( v13 >= 12 )
            goto LABEL_35;
        }
        v28 = (char *)this + 118 * v13;
        if ( v24 )
        {
          *(_DWORD *)(v28 + 1473) ^= (*(_DWORD *)(v28 + 1473) ^ (*(_DWORD *)v23 >> 4)) & 0x7F;
          v29 = *(_DWORD *)(v28 + 1473) ^ ((unsigned __int16)*(_DWORD *)(v28 + 1473) ^ (unsigned __int16)(*(_DWORD *)v23 >> 4)) & 0x380;
          *(_DWORD *)(v28 + 1473) = v29;
          v30 = *(_DWORD *)v23;
          *(_DWORD *)(v28 + 1469) &= 0xFFFFC1C0;
          *(_DWORD *)(v28 + 1465) &= 0xF07001C0;
        }
        else
        {
          *(_DWORD *)(v28 + 1473) ^= (*(_DWORD *)(v28 + 1473) ^ (*((_DWORD *)v23 - 16) >> 4)) & 0x7F;
          v29 = *(_DWORD *)(v28 + 1473) ^ ((unsigned __int16)*(_DWORD *)(v28 + 1473) ^ (unsigned __int16)(*((_DWORD *)v23 - 16) >> 4)) & 0x380;
          *(_DWORD *)(v28 + 1473) = v29;
          v30 = *((_DWORD *)v23 - 16);
          *(_DWORD *)(v28 + 1469) &= 0xFFFFC7FF;
          *(_DWORD *)(v28 + 1465) &= 0xF1FFC7FF;
        }
        *(_DWORD *)(v28 + 1473) = v29 ^ (v29 ^ (16 * v30)) & 0xC0000;
        *(_DWORD *)(v28 + 1473) &= ~0x100000u;
        if ( myNo == ((*(_DWORD *)(v28 + 1469) >> 27) & 0xF) )
        {
          this->gamedata.orderSendFlag = 0;
          v41 = 1;
        }
LABEL_35:
        time = v6->msgBattleCommand.time;
        ++v22;
        v23 += 4;
      }
      while ( v22 < (((unsigned int)v6->msgBattleCommand.time >> 8) & 0xF) - v39 );
    }
    if ( v41 )
    {
      if ( v39 == v36 )
      {
        LOBYTE(v34) = 0;
        if ( v37 > 0xCu )
          v34 = (v37 - 1) / 12;
        this->gamedata.battleStartTableNo = v34;
        v35 = NET_STATE_ORDERSELECT;
        this->gamedata.randseed = (unsigned __int8)HIBYTE(LOWORD(v6->msgJoinRequest.joinId.data)) >> 5;
        this->gamedata.addDelayFrame = (*(_WORD *)((_BYTE *)&v6->msgJoinComplete.memberRank[0].steamId + 1) & 7) + 2;
        if ( gameRule == GAME_RULE_PARTY )
        {
          v35 = NET_STATE_CHARACTERSELECT;
        }
        else if ( this->gamedata.matchMode == NETWORK_MATCHING_TYPE_FREE )
        {
          v35 = NET_STATE_CHARACTERSELECT_NOT_PARTY;
        }
        NetManager::ChangeState(this, v35, v13);
      }
      else
      {
        AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
        if ( Fw::MatchingTarget::IsRoomOwner(v32, v31) )
          Fw::MatchingTarget::LeaveRoom();
        NetManager::ChangeState(this, NET_STATE_TOP, v33);
        this->gamedata.error = NETWORK_ERROR_TYPE_CONNECTION;
      }
    }
  }
}

void __fastcall NetManager::ProcessTableDiscrete(NetManager *this, SEND_MESSAGE *pMsg, bool changeStateFlag)
{
  __int64 v6; // rdx
  const char *v7; // rcx
  char *stageTelop; // r8
  char v9; // r10
  char myNo; // si
  unsigned int v11; // er9
  __int64 v12; // rdx
  _DWORD *v13; // rax
  char *v14; // rdx
  int v15; // ecx
  bool v16; // zf

  AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
  if ( !Fw::MatchingTarget::IsRoomOwner(v7, v6) )
  {
    v9 = 0;
    myNo = this->gamedata.myNo;
    v11 = 0;
    if ( (pMsg->msgJoinComplete.memberNum & 0xF) != 0 )
    {
      stageTelop = pMsg->msgTableComplete.common.stageTelop;
      do
      {
        v12 = 0i64;
        v13 = (_DWORD *)((char *)this->gamedata.player_data + 12);
        while ( !*(_QWORD *)(v13 - 3) || (((unsigned __int8)*stageTelop ^ (*v13 >> 27)) & 0xF) != 0 )
        {
          ++v12;
          v13 = (_DWORD *)((char *)v13 + 118);
          if ( v12 >= 12 )
            goto LABEL_11;
        }
        v14 = (char *)this + 118 * v12;
        *(_DWORD *)(v14 + 1473) ^= (*(_DWORD *)(v14 + 1473) ^ (*(_DWORD *)stageTelop >> 4)) & 0x7F;
        v15 = *(_DWORD *)(v14 + 1473) ^ ((unsigned __int16)*(_DWORD *)(v14 + 1473) ^ (unsigned __int16)(*(_DWORD *)stageTelop >> 4)) & 0x380;
        *(_DWORD *)(v14 + 1473) = v15;
        *(_DWORD *)(v14 + 1473) = v15 ^ (v15 ^ (16 * *(_DWORD *)stageTelop)) & 0xC0000;
        if ( myNo == ((*(_DWORD *)(v14 + 1469) >> 27) & 0xF) )
          v9 = 1;
LABEL_11:
        ++v11;
        stageTelop += 4;
      }
      while ( v11 < (pMsg->msgBattleCommand.time & 0xFu) );
    }
    if ( changeStateFlag )
    {
      if ( this->gamedata.gameRule == GAME_RULE_TRAINING )
      {
        v16 = (pMsg->msgJoinComplete.memberNum & 0x10) == 0;
      }
      else
      {
        if ( !v9 )
          return;
        v16 = this->gamedata.onlineState == NET_STATE_BATTLE;
      }
      if ( !v16 )
        NetManager::ChangeState(this, NET_STATE_WAITSTART, (int)stageTelop);
    }
  }
}

void __fastcall NetManager::ProcessTrainingMenu(NetManager *this, SEND_MESSAGE *pMsg, int a3)
{
  int v4; // ecx
  _DWORD *v5; // rbx
  unsigned int time; // edi
  unsigned int bufSize; // esi
  __int128 v8; // xmm3
  int v9; // er8
  __int128 v10; // xmm4
  int v11; // er14
  __int128 v12; // xmm5
  int v13; // er15
  int v14; // er12
  int v15; // er13
  int v16; // esi
  int v17; // edx
  int v18; // edi
  bool v19; // cc
  GameDataInfo *v20; // rcx
  int v21; // [rsp+28h] [rbp-E0h]
  int v22; // [rsp+2Ch] [rbp-DCh]
  int v23; // [rsp+30h] [rbp-D8h]
  __int128 v24; // [rsp+38h] [rbp-D0h]
  __int128 v25; // [rsp+48h] [rbp-C0h]
  __int128 v26; // [rsp+58h] [rbp-B0h]
  TrainingSetting training_8; // [rsp+68h] [rbp-A0h] BYREF

  if ( this->gamedata.onlineState == NET_STATE_BATTLE )
  {
    NetManager::ChangeState(&g_NetworkManager, NET_STATE_BATTLELOADINGEND, a3);
    BTLNT_Start();
    BTLNT_StartBattle();
    v4 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    v5 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v4 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        v4 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      }
    }
    time = pMsg->msgBattleCommand.time;
    bufSize = pMsg->msgVoiceData.bufSize;
    v8 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0];
    v9 = bufSize & 0x7F;
    v10 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][4];
    v11 = (time >> 2) & 7;
    v12 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2];
    v13 = (unsigned __int8)time >> 5;
    v14 = (time >> 8) & 3;
    *(_OWORD *)&training_8.m_iRestart = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart;
    v15 = (time >> 10) & 3;
    *(_QWORD *)&training_8.m_iKeyData = *(_QWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iKeyData;
    v16 = (bufSize >> 7) & 0x7F;
    *(_QWORD *)&training_8.m_iCounter = 0i64;
    training_8.m_iUkemi = 0;
    *(_OWORD *)training_8.m_iPowerGauge = *(_OWORD *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge;
    v23 = time & 3;
    *(_OWORD *)training_8.m_iGuardGauge = *(_OWORD *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge;
    training_8.m_iRestart = v23;
    v17 = (time >> 12) & 0x7F;
    v18 = (time >> 19) & 0x7F;
    *(_OWORD *)&training_8.m_bRestartOn = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn;
    v19 = v4 <= *v5;
    v24 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0];
    *(_QWORD *)&training_8.m_iAction = 16i64;
    *(_OWORD *)&training_8.m_iPlaySlot[0][0] = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0];
    v25 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][4];
    training_8.m_bRestartOn = 1;
    *(_OWORD *)&training_8.m_iPlaySlot[0][4] = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][4];
    v26 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2];
    training_8.m_iPowerGauge[0] = v11;
    *(_OWORD *)&training_8.m_iPlaySlot[1][2] = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2];
    training_8.m_iPowerGauge[1] = v13;
    training_8.m_iMAXModeGauge[0] = v14;
    training_8.m_iMAXModeGauge[1] = v15;
    v21 = v17;
    training_8.m_iGuardGauge[0] = v17;
    training_8.m_iGuardGauge[1] = v18;
    v22 = v9;
    training_8.m_iStun[0] = v9;
    training_8.m_iStun[1] = v16;
    training_8.m_iAttackData = HIDWORD(_mm_srli_si128(
                                         *(__m128i *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAttack,
                                         8).m128i_u64[0]);
    if ( !v19 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v20);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
      v9 = v22;
      v17 = v21;
      v12 = v26;
      v10 = v25;
      v8 = v24;
    }
    if ( `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart != v23
      || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge[0] != v11
      || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge[1] != v13
      || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge[0] != v14
      || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge[1] != v15
      || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge[0] != v17
      || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge[1] != v18
      || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[0] != v9
      || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[1] != v16 )
    {
      `GameDataInfo::getInstance'::`2'::instance.m_TrainingSettingUpdate = 1;
    }
    *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart = *(_OWORD *)&training_8.m_iRestart;
    *(_OWORD *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge = *(_OWORD *)training_8.m_iPowerGauge;
    *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAttack = *(_OWORD *)&training_8.m_iAttack;
    *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn = *(_OWORD *)&training_8.m_bRestartOn;
    *(_OWORD *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge = *(_OWORD *)training_8.m_iGuardGauge;
    *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0] = v8;
    *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][4] = v10;
    *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2] = v12;
    AppMain::BattlePauseSetTrainingSetting(*(AppMain **)&AppMain::pApp, &training_8);
  }
}

void __fastcall NetManager::RandomCharaState(NetManager *this)
{
  int PlayerID; // eax
  __int64 v3; // rbx
  int *v4; // rsi
  __int64 v5; // rbx
  CHARACTER_COLOR v6; // ebp
  int v7; // eax
  CHARACTER_COLOR v8; // ebp
  int v9; // eax
  CHARACTER_COLOR v10; // ebp
  CHARACTER_COLOR v11; // er8
  STAGE_ID v12; // er9
  int v13; // eax
  bool v14; // zf
  GameDataInfo *v15; // rax
  signed int v16; // ebx
  __int64 v17; // rbx
  GameDataInfo *v18; // rax
  GameDataInfo *v19; // rax
  GameDataInfo *v20; // rax
  GameDataInfo *Instance; // rax
  unsigned int Rand32; // eax
  GameDataInfo *v23; // rax
  unsigned int v24; // eax
  GameDataInfo *v25; // rax
  unsigned int v26; // eax
  unsigned __int8 myNo; // si
  char v28; // dl
  __int64 v29; // rbp
  unsigned __int8 v30; // al
  __int64 v31; // rbx
  STAGE_ID v32; // edx
  __int64 v33; // rcx
  char next_character_no1; // al
  char next_character_no3; // al
  __int64 v36; // r8
  int v37; // eax
  int v38; // ecx
  GameDataInfo *v39; // rcx
  GameDataInfo *v40; // rcx
  GameDataInfo *v41; // rcx
  GameDataInfo *v42; // rcx
  GameDataInfo *v43; // rcx
  GameDataInfo *v44; // rcx
  GameDataInfo *v45; // rcx
  GameDataInfo *v46; // rcx
  GameDataInfo *v47; // rcx
  __m128i v48; // [rsp+50h] [rbp-98h]

  PlayerID = NetManager::GetPlayerID(this, -1);
  v3 = PlayerID;
  if ( PlayerID == -1 )
    return;
  v4 = (int *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v4 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v39);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v5 = v3;
  this->next_character_no1 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[v5][0];
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v4 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v40);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  this->next_character_no2 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[v5][1];
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v4 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v41);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  this->next_character_no3 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[v5][2];
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v4 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v42);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v6 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[v5][0];
  if ( GameDataInfo::IsSameColorSelected(
         &`GameDataInfo::getInstance'::`2'::instance,
         `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[v5][0],
         v6,
         `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[v5][0]) )
  {
    v6 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColorRand[v5][0];
  }
  v7 = *v4;
  this->next_color_1 = v6;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > v7 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v43);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v8 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[v5][1];
  if ( GameDataInfo::IsSameColorSelected(
         &`GameDataInfo::getInstance'::`2'::instance,
         `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[v5][1],
         v8,
         `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[v5][1]) )
  {
    v8 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColorRand[v5][1];
  }
  v9 = *v4;
  this->next_color_2 = v8;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > v9 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v44);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v10 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[v5][2];
  if ( GameDataInfo::IsSameColorSelected(
         &`GameDataInfo::getInstance'::`2'::instance,
         `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[v5][2],
         v10,
         `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[v5][2]) )
  {
    v10 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColorRand[v5][2];
  }
  v13 = *v4;
  this->next_color_3 = v10;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > v13 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v45);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  this->next_costume_1 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[v5][0];
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v4 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v46);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  this->next_costume_2 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[v5][1];
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v4 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v47);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v14 = !this->m_myTeamRandom;
  this->next_costume_3 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[v5][2];
  if ( v14 )
  {
    if ( this->m_myEditRandom[0] )
    {
      this->next_character_no1 = SaveRecord_PlayerData::GetRandomEnableCharacter(
                                   (SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64),
                                   this->next_character_no1,
                                   this->next_character_no2,
                                   this->next_character_no3,
                                   CHARACTER_NO_NONE,
                                   CHARACTER_NO_NONE,
                                   CHARACTER_NO_NONE);
      Instance = GameDataInfo::getInstance();
      Rand32 = RandomMT::getRand32(&Instance->randMT);
      this->next_costume_1 = 0;
      v11 = (int)(Rand32 >> 1) % 6 + 1;
      this->next_color_1 = v11;
    }
    if ( this->m_myEditRandom[1] )
    {
      this->next_character_no2 = SaveRecord_PlayerData::GetRandomEnableCharacter(
                                   (SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64),
                                   this->next_character_no1,
                                   this->next_character_no2,
                                   this->next_character_no3,
                                   CHARACTER_NO_NONE,
                                   CHARACTER_NO_NONE,
                                   CHARACTER_NO_NONE);
      v23 = GameDataInfo::getInstance();
      v24 = RandomMT::getRand32(&v23->randMT);
      this->next_costume_2 = 0;
      v11 = (int)(v24 >> 1) % 6 + 1;
      this->next_color_2 = v11;
    }
    if ( !this->m_myEditRandom[2] )
      goto LABEL_26;
    this->next_character_no3 = SaveRecord_PlayerData::GetRandomEnableCharacter(
                                 (SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64),
                                 this->next_character_no1,
                                 this->next_character_no2,
                                 this->next_character_no3,
                                 CHARACTER_NO_NONE,
                                 CHARACTER_NO_NONE,
                                 CHARACTER_NO_NONE);
    v25 = GameDataInfo::getInstance();
    v26 = RandomMT::getRand32(&v25->randMT);
    this->next_costume_3 = 0;
    v11 = (int)(v26 >> 1) % 6 + 1;
  }
  else
  {
    v15 = GameDataInfo::getInstance();
    v16 = ((unsigned int)RandomMT::getRand32(&v15->randMT) >> 1) & 0x8000000F;
    GameDataInfo::getInstance();
    v17 = v16;
    this->next_character_no1 = TeamCombinationData[v17][0];
    GameDataInfo::getInstance();
    this->next_character_no2 = TeamCombinationData[v17][1];
    GameDataInfo::getInstance();
    this->next_character_no3 = TeamCombinationData[v17][2];
    v18 = GameDataInfo::getInstance();
    this->next_color_1 = (int)((unsigned int)RandomMT::getRand32(&v18->randMT) >> 1) % 6 + 1;
    v19 = GameDataInfo::getInstance();
    this->next_color_2 = (int)((unsigned int)RandomMT::getRand32(&v19->randMT) >> 1) % 6 + 1;
    v20 = GameDataInfo::getInstance();
    v11 = (int)((unsigned int)RandomMT::getRand32(&v20->randMT) >> 1) % 6 + 1;
    *(_QWORD *)&this->next_costume_2 = 0i64;
    this->next_costume_1 = 0;
  }
  this->next_color_3 = v11;
LABEL_26:
  myNo = g_NetworkManager.gamedata.myNo;
  v28 = 1;
  v29 = (unsigned __int8)g_NetworkManager.gamedata.myNo;
  v48 = *((__m128i *)&g_NetworkManager.gamedata.player_data[v29] + 1);
  v30 = _mm_cvtsi128_si32(v48) & 0x7F;
  if ( v30 > 0xCu )
    v28 = 12 * ((v30 - 1) / 12) + 1;
  if ( (v48.m128i_i8[0] & 0x7F) == v28 )
  {
    v31 = *(_QWORD *)&AppMain::pApp + 2202784i64;
    *(_DWORD *)(v31 + 2684) = SaveRecord_PlayerData::GetRandomEnableStageID(
                                (SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64),
                                (STAGE_ID)*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205468i64),
                                (STAGE_ID)v11,
                                v12);
    v32 = *(_DWORD *)(v31 + 4i64 * *(int *)(v31 + 2516) + 2520);
    if ( v32 == STAGE_ID_RDM )
      v32 = *(_DWORD *)(v31 + 2684);
    g_NetworkManager.next_stage = v32;
    v33 = myNo;
    *((_DWORD *)&g_NetworkManager.gamedata.player_data[v33] + 4) &= 0xFFFF83FF;
    *((_DWORD *)&g_NetworkManager.gamedata.player_data[v33] + 4) |= (v32 & 0x1F) << 10;
  }
  next_character_no1 = this->next_character_no1;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v29] + 2) &= 0xFFFFFFC0;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v29] + 2) |= next_character_no1 & 0x3F;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v29] + 2) ^= (*((_DWORD *)&g_NetworkManager.gamedata.player_data[v29]
                                                                   + 2) ^ (LOBYTE(this->next_character_no2) << 14)) & 0xFC000;
  next_character_no3 = this->next_character_no3;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v29] + 3) &= 0xFFFFFFC0;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v29] + 3) |= next_character_no3 & 0x3F;
  v36 = myNo;
  v37 = ((LOBYTE(this->next_color_1) - 1) & 7) << 6;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v36] + 2) &= 0xFFFFFE3F;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v36] + 2) |= v37;
  v38 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[v36] + 2) ^ (*((_DWORD *)&g_NetworkManager.gamedata.player_data[v36]
                                                                        + 2) ^ ((unsigned __int8)(LOBYTE(this->next_color_2)
                                                                                                - 1) << 20)) & 0x700000;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v36] + 2) = v38;
  LOBYTE(v37) = this->next_color_3;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v36] + 3) &= 0xFFFFFE3F;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v36] + 3) |= (((_BYTE)v37 - 1) & 7) << 6;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v36] + 2) ^= ((unsigned __int16)v38 ^ (unsigned __int16)(LOBYTE(this->next_costume_1) << 9)) & 0x600;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v36] + 2) ^= (*((_DWORD *)&g_NetworkManager.gamedata.player_data[v36]
                                                                   + 2) ^ (LOBYTE(this->next_costume_2) << 23)) & 0x1800000;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v36] + 3) ^= (*((_DWORD *)&g_NetworkManager.gamedata.player_data[v36]
                                                                   + 3) ^ (LOBYTE(this->next_costume_3) << 9)) & 0x600;
}

__int64 __fastcall NetManager::RecvRoomChatMessage(NetManager *this, Fw::ROOM_CHATMESSAGE_INFO *pRoomChatMessageArray)
{
  Fw::ROOM_CHATMESSAGE_INFO *m_ChatMessageBuffer; // rbp
  __int64 v3; // r13
  Fw::ROOM_CHATMESSAGE_INFO *v4; // rax
  Fw::ROOM_CHATMESSAGE_INFO *v5; // r8
  __int64 v6; // r9
  __int128 v9; // xmm0
  int v10; // er12
  __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // er9
  unsigned __int64 *p_tick; // rcx
  __int64 v15; // r11
  unsigned __int64 *v16; // r10
  char *v17; // rax
  __int64 v18; // r8
  Fw::ROOM_CHATMESSAGE_INFO *v19; // rdx
  Fw::ROOM_CHATMESSAGE_INFO *v20; // rcx
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // r8
  UserId *v30; // rcx
  UserId *v31; // rax
  UserId v32; // xmm0
  UserId v33; // xmm0
  char *v34; // rax
  __int64 v35; // rdx
  UserId v36; // xmm1
  UserId v37; // xmm0
  UserId v38; // xmm1
  UserId v39; // xmm0
  UserId v40; // xmm1
  UserId v41; // xmm0
  UserId v42; // xmm1
  __int64 v43; // rdi
  char *message; // rsi
  char *v45; // rbx
  char v46; // cl
  char v47; // al
  __int128 v48; // xmm0
  __int64 v50; // [rsp+20h] [rbp-168h]
  char v51[272]; // [rsp+30h] [rbp-158h] BYREF

  m_ChatMessageBuffer = this->gamedata.m_ChatMessageBuffer;
  v3 = 17i64;
  v4 = this->gamedata.m_ChatMessageBuffer;
  v5 = Fw::MatchingTarget::m_RoomChatMessage;
  v6 = 17i64;
  do
  {
    v9 = *(_OWORD *)&v5->npId;
    v5 = (Fw::ROOM_CHATMESSAGE_INFO *)((char *)v5 + 128);
    *(_OWORD *)&v4->npId = v9;
    *(_OWORD *)v4->message = *(_OWORD *)&v5[-1].message[144];
    *(_OWORD *)&v4->message[16] = *(_OWORD *)&v5[-1].message[160];
    *(_OWORD *)&v4->message[32] = *(_OWORD *)&v5[-1].message[176];
    *(_OWORD *)&v4->message[48] = *(_OWORD *)&v5[-1].message[192];
    *(_OWORD *)&v4->message[64] = *(_OWORD *)&v5[-1].message[208];
    *(_OWORD *)&v4->message[80] = *(_OWORD *)&v5[-1].message[224];
    v4 = (Fw::ROOM_CHATMESSAGE_INFO *)((char *)v4 + 128);
    *(_OWORD *)&v4[-1].message[240] = *(_OWORD *)&v5[-1].message[240];
    --v6;
  }
  while ( v6 );
  v10 = 0;
  v11 = 7i64;
  v12 = 0i64;
  do
  {
    v13 = 7;
    if ( v12 < 7 )
    {
      p_tick = &this->gamedata.m_ChatMessageBuffer[7].tick;
      v15 = 7 - v12;
      do
      {
        v16 = p_tick - 34;
        if ( *p_tick > *(p_tick - 34) )
        {
          v17 = v51;
          v18 = 2i64;
          v19 = &this->gamedata.m_ChatMessageBuffer[v13];
          v20 = v19;
          do
          {
            v17 += 128;
            v21 = *(_OWORD *)&v20->npId;
            v22 = *(_OWORD *)v20->message;
            v20 = (Fw::ROOM_CHATMESSAGE_INFO *)((char *)v20 + 128);
            *((_OWORD *)v17 - 8) = v21;
            v23 = *(_OWORD *)&v20[-1].message[160];
            *((_OWORD *)v17 - 7) = v22;
            v24 = *(_OWORD *)&v20[-1].message[176];
            *((_OWORD *)v17 - 6) = v23;
            v25 = *(_OWORD *)&v20[-1].message[192];
            *((_OWORD *)v17 - 5) = v24;
            v26 = *(_OWORD *)&v20[-1].message[208];
            *((_OWORD *)v17 - 4) = v25;
            v27 = *(_OWORD *)&v20[-1].message[224];
            *((_OWORD *)v17 - 3) = v26;
            v28 = *(_OWORD *)&v20[-1].message[240];
            *((_OWORD *)v17 - 2) = v27;
            *((_OWORD *)v17 - 1) = v28;
            --v18;
          }
          while ( v18 );
          v29 = 2i64;
          *(_OWORD *)v17 = *(_OWORD *)&v20->npId;
          v30 = &this->gamedata.m_TraingWaitRoomAttr.m_BlockedUser[17 * v13 + 20];
          v31 = v30;
          do
          {
            v19 = (Fw::ROOM_CHATMESSAGE_INFO *)((char *)v19 + 128);
            v32 = *v31;
            v31 += 8;
            *(UserId *)&v19[-1].message[128] = v32;
            *(UserId *)&v19[-1].message[144] = v31[-7];
            *(UserId *)&v19[-1].message[160] = v31[-6];
            *(UserId *)&v19[-1].message[176] = v31[-5];
            *(UserId *)&v19[-1].message[192] = v31[-4];
            *(UserId *)&v19[-1].message[208] = v31[-3];
            *(UserId *)&v19[-1].message[224] = v31[-2];
            *(UserId *)&v19[-1].message[240] = v31[-1];
            --v29;
          }
          while ( v29 );
          v33 = *v31;
          v34 = v51;
          *(UserId *)&v19->npId = v33;
          v35 = 2i64;
          do
          {
            v30 += 8;
            v36 = (UserId)*((_OWORD *)v34 + 1);
            v30[-8] = *(UserId *)v34;
            v37 = (UserId)*((_OWORD *)v34 + 2);
            v30[-7] = v36;
            v38 = (UserId)*((_OWORD *)v34 + 3);
            v30[-6] = v37;
            v39 = (UserId)*((_OWORD *)v34 + 4);
            v30[-5] = v38;
            v40 = (UserId)*((_OWORD *)v34 + 5);
            v30[-4] = v39;
            v41 = (UserId)*((_OWORD *)v34 + 6);
            v30[-3] = v40;
            v42 = (UserId)*((_OWORD *)v34 + 7);
            v34 += 128;
            v30[-2] = v41;
            v30[-1] = v42;
            --v35;
          }
          while ( v35 );
          *v30 = *(UserId *)v34;
        }
        --v13;
        p_tick = v16;
        --v15;
      }
      while ( v15 );
    }
    ++v12;
    --v11;
  }
  while ( v11 );
  v43 = 0i64;
  message = this->gamedata.m_ChatMessageBuffer[0].message;
  v45 = &this->gamedata.m_ChatMessageBuffer[0].message[1];
  while ( *(_QWORD *)(v45 - 9) )
  {
    if ( *(v45 - 1) != 48 )
    {
      *(_OWORD *)message = *(_OWORD *)v45;
      *((_OWORD *)message + 1) = *((_OWORD *)v45 + 1);
      *((_OWORD *)message + 2) = *((_OWORD *)v45 + 2);
      *((_OWORD *)message + 3) = *((_OWORD *)v45 + 3);
      *((_OWORD *)message + 4) = *((_OWORD *)v45 + 4);
      *((_OWORD *)message + 5) = *((_OWORD *)v45 + 5);
      *((_OWORD *)message + 6) = *((_OWORD *)v45 + 6);
      *((_OWORD *)message + 7) = *((_OWORD *)v45 + 7);
      *((_OWORD *)message + 8) = *((_OWORD *)v45 + 8);
      *((_OWORD *)message + 9) = *((_OWORD *)v45 + 9);
      *((_OWORD *)message + 10) = *((_OWORD *)v45 + 10);
      *((_OWORD *)message + 11) = *((_OWORD *)v45 + 11);
      *((_OWORD *)message + 12) = *((_OWORD *)v45 + 12);
      *((_OWORD *)message + 13) = *((_OWORD *)v45 + 13);
      *((_OWORD *)message + 14) = *((_OWORD *)v45 + 14);
      *((_QWORD *)message + 30) = *((_QWORD *)v45 + 30);
      *((_DWORD *)message + 62) = *((_DWORD *)v45 + 62);
      *((_WORD *)message + 126) = *((_WORD *)v45 + 126);
      message[254] = v45[254];
      goto LABEL_32;
    }
    v46 = *v45;
    if ( (unsigned __int8)(*v45 - 1) > 0xDu )
    {
      if ( (unsigned __int8)(v46 - 15) > 0xEu )
      {
        if ( (unsigned __int8)(v46 - 30) > 0xFu )
        {
          if ( (unsigned __int8)(v46 - 46) > 9u )
          {
            if ( (unsigned __int8)(v46 - 56) > 8u )
              goto LABEL_33;
            v47 = 4;
            v46 -= 55;
          }
          else
          {
            v47 = 3;
            v46 -= 45;
          }
        }
        else
        {
          v47 = 2;
          v46 -= 29;
        }
      }
      else
      {
        v47 = 1;
        v46 -= 14;
      }
    }
    else
    {
      v47 = 0;
    }
    if ( v46 )
    {
      LODWORD(v50) = v46;
      sprintf_s(
        this->gamedata.m_ChatMessageBuffer[v10].message,
        0x100ui64,
        "|$SETPHRASES_%02d_%02d|",
        (unsigned int)v47,
        v50);
LABEL_32:
      ++v10;
      message += 272;
    }
LABEL_33:
    ++v43;
    v45 += 272;
    if ( v43 >= 8 )
      goto LABEL_34;
  }
  do
  {
LABEL_34:
    pRoomChatMessageArray = (Fw::ROOM_CHATMESSAGE_INFO *)((char *)pRoomChatMessageArray + 128);
    v48 = *(_OWORD *)&m_ChatMessageBuffer->npId;
    m_ChatMessageBuffer = (Fw::ROOM_CHATMESSAGE_INFO *)((char *)m_ChatMessageBuffer + 128);
    *(_OWORD *)&pRoomChatMessageArray[-1].message[128] = v48;
    *(_OWORD *)&pRoomChatMessageArray[-1].message[144] = *(_OWORD *)&m_ChatMessageBuffer[-1].message[144];
    *(_OWORD *)&pRoomChatMessageArray[-1].message[160] = *(_OWORD *)&m_ChatMessageBuffer[-1].message[160];
    *(_OWORD *)&pRoomChatMessageArray[-1].message[176] = *(_OWORD *)&m_ChatMessageBuffer[-1].message[176];
    *(_OWORD *)&pRoomChatMessageArray[-1].message[192] = *(_OWORD *)&m_ChatMessageBuffer[-1].message[192];
    *(_OWORD *)&pRoomChatMessageArray[-1].message[208] = *(_OWORD *)&m_ChatMessageBuffer[-1].message[208];
    *(_OWORD *)&pRoomChatMessageArray[-1].message[224] = *(_OWORD *)&m_ChatMessageBuffer[-1].message[224];
    *(_OWORD *)&pRoomChatMessageArray[-1].message[240] = *(_OWORD *)&m_ChatMessageBuffer[-1].message[240];
    --v3;
  }
  while ( v3 );
  return 0i64;
}

void *__fastcall RecvThreadUdp(void *pParam)
{
  __int64 v2; // rax
  NetManager *v3; // rsi
  SEND_MESSAGE *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  _BOOL8 v10; // rdx
  const unsigned __int8 *v11; // r9
  int v12; // eax
  double v13; // xmm0_8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  Fw::MatchingTarget::ROOM_MEMBER_INFO *v16; // rcx
  __int64 v17; // rax
  int v19; // [rsp+30h] [rbp-D0h]
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  CSteamID sin; // [rsp+48h] [rbp-B8h] BYREF
  char v22[16]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 iv[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 input[1136]; // [rsp+70h] [rbp-90h] BYREF

  *((_DWORD *)&sin.m_steamid.m_comp + 1) &= 0xFF0FFFFF;
  v2 = *(_QWORD *)pParam;
  v3 = (NetManager *)*((_QWORD *)pParam + 2);
  v4 = pRecvMsg[0];
  HIBYTE(sin.m_steamid.m_unAll64Bits) = 0;
  sin.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)(sin.m_steamid.m_unAll64Bits & 0xFFF0000000000000ui64);
  if ( !(*(unsigned int (**)(void))(v2 + 40))() )
  {
    do
    {
      v6 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v5);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, char *, _QWORD))(**(_QWORD **)(v6 + 64) + 8i64))(
             *(_QWORD *)(v6 + 64),
             v22,
             0i64) )
      {
        do
        {
          v9 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v7);
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned __int8 *, __int64, int *, CSteamID *))(**(_QWORD **)(v9 + 64) + 16i64))(
                 *(_QWORD *)(v9 + 64),
                 iv,
                 1141i64,
                 &v20,
                 &sin) )
          {
            v20 -= 18;
            AES128_CBC_decrypt_buffer(&v4->msgType, input, v20, v11, iv);
            v12 = *(__int16 *)&iv[v20 + 16] - 16;
            v20 = v12;
          }
          else
          {
            v12 = v20;
          }
          if ( v12 )
          {
            if ( (v4->msgType & 0xE0) == 64 )
            {
              NetManager::MessageAnalyze(v3, v10, v4, (unsigned __int64)v11, &sin, 0, v19);
              if ( sin.m_steamid.m_comp != Fw::NetworkCommon::m_NpOnlineId.data )
              {
                v13 = AgClock::getSystemTime() * 1000000.0;
                v14 = 0i64;
                if ( v13 >= 9.223372036854776e18 )
                {
                  v13 = v13 - 9.223372036854776e18;
                  if ( v13 < 9.223372036854776e18 )
                    v14 = 0x8000000000000000ui64;
                }
                v15 = v14 + (unsigned int)(int)v13;
                EnterCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
                v16 = Fw::MatchingTarget::m_RoomMember;
                while ( v16->memberId != sin.m_steamid.m_comp || !v16->active )
                {
                  if ( (__int64)++v16 >= (__int64)&Fw::MatchingTarget::m_RoomId )
                    goto LABEL_18;
                }
                v16->lastPacketReceived = v15;
LABEL_18:
                LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
              }
            }
          }
          v17 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v10);
        }
        while ( (*(unsigned __int8 (__fastcall **)(_QWORD, char *, _QWORD))(**(_QWORD **)(v17 + 64) + 8i64))(
                  *(_QWORD *)(v17 + 64),
                  v22,
                  0i64) );
      }
      Fw::MatchingTarget::CheckTimeout(v8);
      AgThread::sleep(1u);
    }
    while ( !(*(unsigned int (__fastcall **)(void *))(*(_QWORD *)pParam + 40i64))(pParam) );
  }
  return 0i64;
}

void __fastcall NetManager::RequestChangeCharacter(
        NetManager *this,
        unsigned __int8 myid,
        unsigned __int8 idx,
        unsigned __int8 characterNo,
        unsigned __int8 colorID,
        unsigned __int8 costumeId,
        bool fix)
{
  char *v8; // r11
  char *v9; // r9
  char *v10; // r11

  if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY || !idx )
  {
    v10 = (char *)&g_NetworkManager + 118 * myid;
    *(_DWORD *)(v10 + 1465) &= 0xFFFFD800;
    *(_DWORD *)(v10 + 1465) |= characterNo & 0x3F | (fix ? 0x2000 : 0) | ((colorID & 7 | (8 * (costumeId & 3))) << 6);
    g_NetworkManager.gamedata.userInfo.m_Character[0].m_CostumeId = costumeId;
    g_NetworkManager.gamedata.userInfo.m_Character[0].m_ColorId = colorID;
    g_NetworkManager.gamedata.userInfo.m_CharacterFix[0] = fix;
    g_NetworkManager.gamedata.userInfo.m_Character[0].m_CharacterId = characterNo;
  }
  else if ( idx == 1 )
  {
    v9 = (char *)&g_NetworkManager + 118 * myid;
    *(_DWORD *)(v9 + 1465) &= 0xF6003FFF;
    *(_DWORD *)(v9 + 1465) |= (characterNo & 0x3F | ((colorID & 7 | (8 * (costumeId & 3 | (16 * fix)))) << 6)) << 14;
    g_NetworkManager.gamedata.userInfo.m_Character[1].m_CharacterId = characterNo;
    g_NetworkManager.gamedata.userInfo.m_Character[1].m_ColorId = colorID;
    g_NetworkManager.gamedata.userInfo.m_CharacterFix[1] = fix;
    g_NetworkManager.gamedata.userInfo.m_Character[1].m_CostumeId = costumeId;
  }
  else if ( idx == 2 )
  {
    v8 = (char *)&g_NetworkManager + 118 * myid;
    *(_DWORD *)(v8 + 1469) &= 0xFFFFD800;
    *(_DWORD *)(v8 + 1469) |= characterNo & 0x3F | (fix ? 0x2000 : 0) | ((colorID & 7 | (8 * (costumeId & 3))) << 6);
    g_NetworkManager.gamedata.userInfo.m_Character[2].m_CharacterId = characterNo;
    g_NetworkManager.gamedata.userInfo.m_Character[2].m_ColorId = colorID;
    g_NetworkManager.gamedata.userInfo.m_CharacterFix[2] = fix;
    g_NetworkManager.gamedata.userInfo.m_Character[2].m_CostumeId = costumeId;
  }
}

char __fastcall NetManager::RequestJoinRoom(NetManager *this, int roomIdx, CSteamID roomId, bool password)
{
  int m_AutoRoomInIndex; // edi
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  Fw::ROOM_ATTR *m_SearchEndRoomAttr; // rdi
  __int64 v11; // rbp
  Fw::ROOM_ATTR *m_AutoJoinRoomAttr; // rbx
  Fw::ROOM_ATTR *v13; // rcx
  Fw::ROOM_ATTR *v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm0
  int v17; // edx
  int v18; // eax
  NetManager *v19; // rcx
  int v20; // er8
  __int128 v21; // xmm0
  __int64 v22; // rbx
  CSteamID::SteamID_t v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // er8
  double v27; // xmm0_8
  unsigned __int64 v28; // rcx

  m_AutoRoomInIndex = roomIdx;
  v7 = (*((_DWORD *)&roomId.m_steamid.m_comp + 1) >> 20) & 0xF;
  if ( (unsigned int)(v7 - 1) > 9
    || (unsigned int)(SHIBYTE(roomId.m_steamid.m_unAll64Bits) - 1) > 3
    || v7 == 1 && (!*(_DWORD *)&roomId.m_steamid.m_comp || (*((_DWORD *)&roomId.m_steamid.m_comp + 1) & 0xFFFFFu) > 4)
    || v7 == 7 && (!*(_DWORD *)&roomId.m_steamid.m_comp || (*((_DWORD *)&roomId.m_steamid.m_comp + 1) & 0xFFFFF) != 0)
    || v7 == 3 && !*(_DWORD *)&roomId.m_steamid.m_comp )
  {
    if ( roomIdx == -2 )
    {
      m_SearchEndRoomAttr = this->m_SearchEndRoomAttr;
      v11 = 421i64;
      m_AutoJoinRoomAttr = this->m_AutoJoinRoomAttr;
      v13 = this->m_SearchEndRoomAttr;
      v14 = this->m_AutoJoinRoomAttr;
      v15 = 421i64;
      do
      {
        v14 = (Fw::ROOM_ATTR *)((char *)v14 + 128);
        v16 = *(_OWORD *)&v13->m_Attr[0].num;
        v13 = (Fw::ROOM_ATTR *)((char *)v13 + 128);
        *(_OWORD *)&v14[-1].m_BlockedUser[25].handle.m_text = v16;
        *(_OWORD *)&v14[-1].m_BlockedUser[26].handle.m_text = *(_OWORD *)&v13[-1].m_BlockedUser[26].handle.m_text;
        *(_OWORD *)&v14[-1].m_BlockedUser[27].handle.m_text = *(_OWORD *)&v13[-1].m_BlockedUser[27].handle.m_text;
        *(_OWORD *)&v14[-1].m_BlockedUser[28].handle.m_text = *(_OWORD *)&v13[-1].m_BlockedUser[28].handle.m_text;
        *(_OWORD *)&v14[-1].m_BlockedUser[29].handle.m_text = *(_OWORD *)&v13[-1].m_BlockedUser[29].handle.m_text;
        *(_OWORD *)&v14[-1].m_BlockedUser[30].handle.m_text = *(_OWORD *)&v13[-1].m_BlockedUser[30].handle.m_text;
        *(_OWORD *)&v14[-1].m_BlockedUser[31].handle.m_text = *(_OWORD *)&v13[-1].m_BlockedUser[31].handle.m_text;
        *(_OWORD *)&v14[-1].m_RoomId.m_steamid.m_comp = *(_OWORD *)&v13[-1].m_RoomId.m_steamid.m_comp;
        --v15;
      }
      while ( v15 );
      v17 = Fw::MatchingTarget::m_SearchRoomNum;
      *(_OWORD *)&v14->m_Attr[0].num = *(_OWORD *)&v13->m_Attr[0].num;
      *(_OWORD *)&v14->m_Attr[1].attributeIndex = *(_OWORD *)&v13->m_Attr[1].attributeIndex;
      *(_OWORD *)&v14->m_Attr[2].searchOperator = *(_OWORD *)&v13->m_Attr[2].searchOperator;
      *(_OWORD *)&v14->m_Attr[4].num = *(_OWORD *)&v13->m_Attr[4].num;
      *(_OWORD *)&v14->m_Attr[5].attributeIndex = *(_OWORD *)&v13->m_Attr[5].attributeIndex;
      *(_OWORD *)&v14->m_Attr[6].searchOperator = *(_OWORD *)&v13->m_Attr[6].searchOperator;
      *(_OWORD *)&v14->m_Attr[8].num = *(_OWORD *)&v13->m_Attr[8].num;
      v18 = NetManager::FilteringMyGradeSearchRoom(this, v17);
      if ( v18 <= 0 )
      {
        this->gamedata.m_SearchRoomLimit = 1;
        NetManager::ChangeState(this, NET_STATE_TOP, v20);
        return 0;
      }
      NetManager::sortRoomInfoForRtt(v19, this->m_AutoJoinRoomAttr, v18);
      do
      {
        m_SearchEndRoomAttr = (Fw::ROOM_ATTR *)((char *)m_SearchEndRoomAttr + 128);
        v21 = *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[0].num;
        m_AutoJoinRoomAttr = (Fw::ROOM_ATTR *)((char *)m_AutoJoinRoomAttr + 128);
        *(_OWORD *)&m_SearchEndRoomAttr[-1].m_BlockedUser[25].handle.m_text = v21;
        *(_OWORD *)&m_SearchEndRoomAttr[-1].m_BlockedUser[26].handle.m_text = *(_OWORD *)&m_AutoJoinRoomAttr[-1].m_BlockedUser[26].handle.m_text;
        *(_OWORD *)&m_SearchEndRoomAttr[-1].m_BlockedUser[27].handle.m_text = *(_OWORD *)&m_AutoJoinRoomAttr[-1].m_BlockedUser[27].handle.m_text;
        *(_OWORD *)&m_SearchEndRoomAttr[-1].m_BlockedUser[28].handle.m_text = *(_OWORD *)&m_AutoJoinRoomAttr[-1].m_BlockedUser[28].handle.m_text;
        *(_OWORD *)&m_SearchEndRoomAttr[-1].m_BlockedUser[29].handle.m_text = *(_OWORD *)&m_AutoJoinRoomAttr[-1].m_BlockedUser[29].handle.m_text;
        *(_OWORD *)&m_SearchEndRoomAttr[-1].m_BlockedUser[30].handle.m_text = *(_OWORD *)&m_AutoJoinRoomAttr[-1].m_BlockedUser[30].handle.m_text;
        *(_OWORD *)&m_SearchEndRoomAttr[-1].m_BlockedUser[31].handle.m_text = *(_OWORD *)&m_AutoJoinRoomAttr[-1].m_BlockedUser[31].handle.m_text;
        *(_OWORD *)&m_SearchEndRoomAttr[-1].m_RoomId.m_steamid.m_comp = *(_OWORD *)&m_AutoJoinRoomAttr[-1].m_RoomId.m_steamid.m_comp;
        --v11;
      }
      while ( v11 );
      *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[0].num = *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[0].num;
      *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[1].attributeIndex = *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[1].attributeIndex;
      *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[2].searchOperator = *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[2].searchOperator;
      *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[4].num = *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[4].num;
      *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[5].attributeIndex = *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[5].attributeIndex;
      *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[6].searchOperator = *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[6].searchOperator;
      *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[8].num = *(_OWORD *)&m_AutoJoinRoomAttr->m_Attr[8].num;
      m_AutoRoomInIndex = 0;
      this->m_AutoRoomInIndex = 1;
    }
    else if ( roomIdx == -1 )
    {
      m_AutoRoomInIndex = this->m_AutoRoomInIndex;
      this->m_AutoRoomInIndex = m_AutoRoomInIndex + 1;
    }
    v22 = m_AutoRoomInIndex;
    NetManager::updateRoomInfo(this, &this->m_SearchEndRoomAttr[v22]);
    v23.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)this->m_SearchEndRoomAttr[v22].m_RoomId.m_steamid;
    memset(Fw::MatchingTarget::m_RoomChatMessage, 0, sizeof(Fw::MatchingTarget::m_RoomChatMessage));
    Fw::MatchingTarget::m_SystemErrorCode = 0;
    Fw::MatchingTarget::m_RoomKickoutFlag = 0;
    Fw::MatchingTarget::m_RoomOwnerChanged = 0;
    v25 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v24);
    (*(void (__fastcall **)(_QWORD, CSteamID::SteamID_t))(**(_QWORD **)(v25 + 32) + 112i64))(*(_QWORD *)(v25 + 32), v23);
    this->gamedata.selectRoomIdx = m_AutoRoomInIndex;
  }
  else
  {
    this->gamedata.reservationCreateRoomFlag = 0;
    memset(Fw::MatchingTarget::m_RoomChatMessage, 0, sizeof(Fw::MatchingTarget::m_RoomChatMessage));
    Fw::MatchingTarget::m_SystemErrorCode = 0;
    Fw::MatchingTarget::m_RoomKickoutFlag = 0;
    Fw::MatchingTarget::m_RoomOwnerChanged = 0;
    v9 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v8);
    (*(void (__fastcall **)(_QWORD, CSteamID::SteamID_t))(**(_QWORD **)(v9 + 32) + 112i64))(
      *(_QWORD *)(v9 + 32),
      roomId.m_steamid);
  }
  v27 = AgClock::getSystemTime() * 1000000.0;
  v28 = 0i64;
  if ( v27 >= 9.223372036854776e18 )
  {
    v27 = v27 - 9.223372036854776e18;
    if ( v27 < 9.223372036854776e18 )
      v28 = 0x8000000000000000ui64;
  }
  this->gamedata.myNo = 0;
  this->gamedata.m_TimeStamp = v28 + (unsigned int)(int)v27;
  NetManager::ChangeState(this, NET_STATE_JOIN_ROOM, v26);
  return 1;
}

void __fastcall NetManager::RequestLeaveRoom(NetManager *this, __int64 a2, int a3)
{
  __int64 v4; // rdx
  const char *v5; // rcx
  bool IsRoomOwner; // al
  bool v7; // dl

  if ( Fw::MatchingTarget::m_RoomId.m_steamid.m_comp )
  {
    if ( this->gamedata.matchMode == NETWORK_MATCHING_TYPE_FREE )
    {
      AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
      IsRoomOwner = Fw::MatchingTarget::IsRoomOwner(v5, v4);
      v7 = Fw::InvitationCommon::m_SessionFlag;
      if ( !IsRoomOwner )
        v7 = 0;
      Fw::InvitationCommon::m_SessionFlag = v7;
    }
    NetManager::ChangeState(this, NET_STATE_LEAVEROOM, a3);
  }
}

void __fastcall NetManager::RequestSearchRoom(NetManager *this, Fw::ROOM_ATTR *pRoomAttr, int searchCountNum)
{
  Fw::ROOM_ATTR *v3; // rbx
  Fw::ROOM_ATTR *v4; // rcx
  Fw::ROOM_ATTR *p_m_SearchRoomAttr; // rax
  __int64 v6; // rdx
  __int128 v7; // xmm0
  bool v8; // dl
  int v9; // er8

  v3 = pRoomAttr;
  if ( pRoomAttr )
  {
    v4 = pRoomAttr;
    p_m_SearchRoomAttr = &g_NetworkManager.gamedata.m_SearchRoomAttr;
    v6 = 8i64;
    do
    {
      p_m_SearchRoomAttr = (Fw::ROOM_ATTR *)((char *)p_m_SearchRoomAttr + 128);
      v7 = *(_OWORD *)&v4->m_Attr[0].num;
      v4 = (Fw::ROOM_ATTR *)((char *)v4 + 128);
      *(_OWORD *)&p_m_SearchRoomAttr[-1].m_BlockedUser[25].handle.m_text = v7;
      *(_OWORD *)&p_m_SearchRoomAttr[-1].m_BlockedUser[26].handle.m_text = *(_OWORD *)&v4[-1].m_BlockedUser[26].handle.m_text;
      *(_OWORD *)&p_m_SearchRoomAttr[-1].m_BlockedUser[27].handle.m_text = *(_OWORD *)&v4[-1].m_BlockedUser[27].handle.m_text;
      *(_OWORD *)&p_m_SearchRoomAttr[-1].m_BlockedUser[28].handle.m_text = *(_OWORD *)&v4[-1].m_BlockedUser[28].handle.m_text;
      *(_OWORD *)&p_m_SearchRoomAttr[-1].m_BlockedUser[29].handle.m_text = *(_OWORD *)&v4[-1].m_BlockedUser[29].handle.m_text;
      *(_OWORD *)&p_m_SearchRoomAttr[-1].m_BlockedUser[30].handle.m_text = *(_OWORD *)&v4[-1].m_BlockedUser[30].handle.m_text;
      *(_OWORD *)&p_m_SearchRoomAttr[-1].m_BlockedUser[31].handle.m_text = *(_OWORD *)&v4[-1].m_BlockedUser[31].handle.m_text;
      *(_OWORD *)&p_m_SearchRoomAttr[-1].m_RoomId.m_steamid.m_comp = *(_OWORD *)&v4[-1].m_RoomId.m_steamid.m_comp;
      --v6;
    }
    while ( v6 );
    *(_OWORD *)&p_m_SearchRoomAttr->m_Attr[0].num = *(_OWORD *)&v4->m_Attr[0].num;
    *(_OWORD *)&p_m_SearchRoomAttr->m_Attr[1].attributeIndex = *(_OWORD *)&v4->m_Attr[1].attributeIndex;
    *(_OWORD *)&p_m_SearchRoomAttr->m_Attr[2].searchOperator = *(_OWORD *)&v4->m_Attr[2].searchOperator;
    *(_QWORD *)&p_m_SearchRoomAttr->m_Attr[4].num = *(_QWORD *)&v4->m_Attr[4].num;
  }
  else
  {
    v3 = &g_NetworkManager.gamedata.m_SearchRoomAttr;
  }
  g_NetworkManager.gamedata.m_SearchRoomCount = searchCountNum;
  g_NetworkManager.gamedata.m_SearchRoomLimit = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.roomsRTTMutex);
  memset(g_NetworkManager.obtainedRoomsRTT, -1, sizeof(g_NetworkManager.obtainedRoomsRTT));
  LeaveCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.roomsRTTMutex);
  NetManager::updateRoomInfo(&g_NetworkManager, v3);
  if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_RANK )
    NetManager::SetPresetCharacterTeam(&g_NetworkManager, v8);
  Fw::MatchingTarget::SearchRoom(v3);
  NetManager::ChangeState(&g_NetworkManager, NET_STATE_SEARCHINGROOM, v9);
}

void __fastcall NetManager::SendMessageW(NetManager *this, SEND_MESSAGE *pMsg, void *opt, int to_send, int optNum)
{
  bool noDelay; // di
  int v7; // edx
  bool sendReliable; // r11
  unsigned int time; // ecx
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rax
  char v16; // al
  unsigned int bufSize; // eax
  int v18; // ecx
  int v19; // edx
  int addrListNum; // eax
  int *v21; // [rsp+28h] [rbp-20h]

  noDelay = 0;
  v7 = 0;
  sendReliable = 1;
  switch ( pMsg->msgType )
  {
    case 0u:
      v7 = 56;
      goto LABEL_33;
    case 1u:
      v7 = 17;
      goto LABEL_32;
    case 2u:
      v7 = 194;
      goto LABEL_33;
    case 3u:
      v7 = 20 * pMsg->msgJoinComplete.memberNum + 1;
      goto LABEL_33;
    case 4u:
    case 5u:
      time = pMsg->msgBattleCommand.time;
      v13 = (time >> 4) & 7;
      if ( !v13 || v13 == 1 )
        goto $LN11_43;
      if ( (unsigned int)(v13 - 2) <= 1 )
      {
        v7 = 12;
        if ( (time & 0xC000) == 49152 )
        {
          v7 = 77;
        }
        else if ( (time & 0x4000) != 0 )
        {
          v7 = 16;
        }
        else if ( (time & 0x8000) != 0 )
        {
          v7 = 73;
        }
      }
      goto LABEL_33;
    case 6u:
      v14 = pMsg->msgBattleCommand.time;
      if ( (v14 & 0x1000) != 0 )
        v7 = 4 * ((v14 >> 8) & 0xF) + 137;
      else
        v7 = 4 * ((v14 >> 8) & 0xF) + 89;
      goto LABEL_33;
    case 7u:
    case 8u:
      v7 = 4 * (pMsg->msgBattleCommand.time & 0xF) + 4;
      goto LABEL_33;
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xFu:
    case 0x10u:
    case 0x14u:
    case 0x18u:
$LN11_43:
      v7 = 4;
      goto LABEL_33;
    case 0xCu:
    case 0xEu:
    case 0x13u:
    case 0x15u:
    case 0x19u:
      v7 = 8;
      goto LABEL_33;
    case 0xDu:
      v7 = 12;
      goto LABEL_33;
    case 0x11u:
      v7 = 12;
      goto LABEL_32;
    case 0x12u:
      v7 = pMsg->msgTableComplete.common.stageTelop[2] + 7;
      goto LABEL_33;
    case 0x16u:
      v15 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, 0i64);
      v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 16) + 336i64))(*(_QWORD *)(v15 + 16));
      if ( (v16 & 0x10) != 0 || (v16 & 6) != 0 )
        return;
      bufSize = pMsg->msgVoiceData.bufSize;
      v18 = bufSize + 8;
      if ( bufSize > 0x44C )
        v18 = 1100;
      v7 = v18;
LABEL_31:
      noDelay = 1;
LABEL_32:
      sendReliable = 0;
LABEL_33:
      pMsg->msgType |= 0x40u;
      v19 = v7 + 1;
      if ( to_send == 3 )
      {
        to_send = 2;
        opt = &this->gamedata.player_data[this->gamedata.hostNo];
        addrListNum = 1;
      }
      else
      {
        addrListNum = optNum;
      }
      Fw::NetTransceiver::SendUdp((char *)pMsg, v19, to_send, opt, addrListNum, v21, noDelay, sendReliable);
      return;
    case 0x17u:
      v7 = 4;
      goto LABEL_32;
    case 0x1Au:
    case 0x1Bu:
      v7 = 10;
      goto LABEL_31;
    default:
      goto LABEL_33;
  }
}

void __fastcall NetManager::SendReadyTableBattleStart(
        NetManager *this,
        unsigned __int8 seatNo,
        MsgJoinComplete *pMsgJoinComplete)
{
  Fw::cMutex *p_m_Mutex; // rdi
  unsigned __int8 v6; // r15
  __int64 gameRule; // r12
  int v8; // eax
  int v9; // edx
  NETWORK_ROOM_BATTLE_TYPE v10; // ecx
  int v11; // eax
  __int32 v12; // ecx
  int *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // al
  int *v18; // rcx
  unsigned __int8 v19; // si
  char *v20; // rbx
  __int64 v21; // r10
  _DWORD *v22; // r8
  int v23; // edx
  __int64 v24; // r11
  unsigned int v25; // ecx
  unsigned int v26; // eax
  int v27; // eax
  _RTL_CRITICAL_SECTION *v28; // rcx
  int time; // edi
  NET_USER_DATA *player_data; // r10
  int v31; // er9
  __int64 v32; // rax
  unsigned int v33; // ecx
  unsigned int v34; // er8
  NetManager *v35; // rcx
  unsigned int v36; // ecx
  int v37; // esi
  unsigned int v38; // eax
  int v39; // edi
  __int64 v40; // r11
  unsigned int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // ecx
  __int64 v45; // r11
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // r11
  char v49; // r9
  unsigned __int8 v50; // cl
  unsigned __int8 v51; // r8
  unsigned int v52; // edx
  int v53; // eax
  int v54; // er9
  unsigned int v55; // ecx
  __int64 v56; // r8
  unsigned int v57; // ecx
  int v58; // eax
  unsigned int v59; // er8
  unsigned int v60; // edx
  unsigned int v61; // eax
  unsigned int v62; // ecx
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  char v65; // al
  int v66; // edi
  __int128 v67; // xmm0
  double v68; // xmm0_8
  bool v69; // zf
  GAME_RULE v70; // esi
  int v71; // eax
  unsigned int v72; // ebx
  __int64 v73; // rax
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  char v80; // al
  int v81; // er8
  int v82; // edx
  ONLINE_STATE v83; // edx
  unsigned __int8 optNum; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v85; // [rsp+28h] [rbp-D8h]
  unsigned __int8 myNo; // [rsp+40h] [rbp-C0h]
  __int16 v87[2]; // [rsp+44h] [rbp-BCh]
  char v88[4]; // [rsp+48h] [rbp-B8h]
  int v89; // [rsp+4Ch] [rbp-B4h]
  int v90; // [rsp+50h] [rbp-B0h]
  int v91; // [rsp+54h] [rbp-ACh]
  __int64 v92; // [rsp+58h] [rbp-A8h]
  __int64 v93; // [rsp+60h] [rbp-A0h]
  GAME_RULE v94; // [rsp+68h] [rbp-98h]
  NETWORK_ROOM_BATTLE_TYPE v95; // [rsp+6Ch] [rbp-94h]
  __int64 v96; // [rsp+70h] [rbp-90h]
  NET_USER_DATA *v97; // [rsp+78h] [rbp-88h]
  MsgJoinComplete *v98; // [rsp+80h] [rbp-80h]
  __int64 v99; // [rsp+88h] [rbp-78h]
  SEND_MESSAGE pMsg; // [rsp+90h] [rbp-70h] BYREF
  int v101; // [rsp+4F0h] [rbp+3F0h] BYREF
  __int16 v102; // [rsp+4F4h] [rbp+3F4h]

  p_m_Mutex = &this->m_Mutex;
  v98 = pMsgJoinComplete;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_Mutex);
  v6 = 1;
  gameRule = this->gamedata.gameRule;
  myNo = this->gamedata.myNo;
  v94 = this->gamedata.gameRule;
  if ( seatNo > 0xCu )
    v6 = 12 * ((seatNo - 1) / 12) + 1;
  v88[0] = rand() % 3 + 1;
  v8 = rand();
  LOBYTE(v9) = 0;
  v88[1] = v8 % 3 + 1;
  if ( v6 > 0xCu )
    v9 = (v6 - 1) / 12;
  v92 = 0i64;
  v10 = this->gamedata.tableBattleType[(unsigned __int8)v9];
  v95 = v10;
  if ( (_DWORD)gameRule == 2 )
  {
    v11 = 0;
    v92 = 0i64;
    v101 = 0;
    v102 = 0;
    v12 = v10 - 4;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        v87[0] = 0;
        v13 = &v101;
        v14 = 2i64;
        do
        {
          v15 = 3i64;
          do
          {
            v16 = rand() % 2;
            v17 = *((_BYTE *)v87 + v16);
            if ( v17 >= 3u )
            {
              *(_BYTE *)v13 = v16 == 0;
              ++*((_BYTE *)v87 + (v16 == 0));
            }
            else
            {
              *(_BYTE *)v13 = v16;
              *((_BYTE *)v87 + v16) = v17 + 1;
            }
            v13 = (int *)((char *)v13 + 1);
            --v15;
          }
          while ( v15 );
          --v14;
        }
        while ( v14 );
        v92 = 1i64;
        p_m_Mutex = &this->m_Mutex;
      }
    }
    else
    {
      v92 = 0i64;
      v18 = &v101;
      do
      {
        *(_BYTE *)v18 = v11;
        *((_BYTE *)v18 + 1) = v11;
        *((_BYTE *)v18 + 2) = v11;
        v18 = (int *)((char *)v18 + 3);
        ++v11;
      }
      while ( v11 < 2 );
    }
  }
  v19 = v6 + 12;
  v99 = gameRule;
  v20 = (char *)this->gamedata.player_data + 16;
  LOBYTE(v87[0]) = v6 + 12;
  v21 = 12i64;
  v22 = (_DWORD *)((char *)this->gamedata.player_data + 16);
  v96 = 12i64;
  v23 = 0;
  v24 = gameRule;
  do
  {
    if ( *((_QWORD *)v22 - 2) )
    {
      v25 = *v22 & 0x7F;
      if ( v6 <= v25 && v25 < v19 )
      {
        v26 = v6 + 2;
        if ( gameRule == 2 )
          v26 = v6 + 6;
        if ( v26 > v25 )
          ++v23;
      }
    }
    v22 = (_DWORD *)((char *)v22 + 118);
    --v21;
  }
  while ( v21 );
  v27 = 6;
  if ( (_DWORD)gameRule != 2 )
    v27 = 2;
  if ( v27 != v23 )
  {
    v28 = (_RTL_CRITICAL_SECTION *)p_m_Mutex;
    goto LABEL_85;
  }
  time = pMsg.msgBattleCommand.time;
  player_data = this->gamedata.player_data;
  LOBYTE(gameRule) = 0;
  v31 = 0;
  v32 = 12i64;
  v90 = gameRule;
  v97 = this->gamedata.player_data;
  v89 = 0;
  v91 = 0;
  v93 = 0i64;
  do
  {
    if ( *((_QWORD *)v20 - 2) )
    {
      v33 = *(_DWORD *)v20 & 0x7F;
      if ( v6 <= v33 )
      {
        if ( v33 >= v19 )
        {
LABEL_65:
          v32 = v96;
          goto LABEL_66;
        }
        v34 = *(_DWORD *)v20 & 0xFFFFFC7F | 0x180;
        *(_DWORD *)v20 = v34;
        v35 = (NetManager *)(v34 & 0x7F);
        if ( v24 == 2 )
        {
          v45 = 0i64;
          if ( (unsigned int)v6 + 6 <= (unsigned int)v35 )
          {
            v37 = myNo;
            v59 = v34 & 0xFFEFFFFF;
            *(_DWORD *)v20 = v59;
            *((_DWORD *)v20 - 1) &= 0xFFFFC7FF;
            *((_DWORD *)v20 - 2) &= 0xF1FFC7FF;
            v60 = v59 & 0xC0000 | (*((_DWORD *)v20 - 1) >> 23) & 0xF0;
            v61 = *((_DWORD *)v20 - 1);
            *(_DWORD *)&pMsg.msgTableComplete.party.memberSub[v31].common &= 0xFFFF0000;
            *(_DWORD *)&pMsg.msgTableComplete.party.memberSub[v31].common |= (16 * (v59 & 0x3FF)) | (v60 >> 4);
            v91 = v31 + 1;
            if ( myNo == ((v61 >> 27) & 0xF) )
              this->gamedata.orderSendFlag = 0;
            goto LABEL_58;
          }
          if ( (unsigned int)v6 + 3 <= (unsigned int)v35 )
            v45 = 1i64;
          gameRule = *((int *)&v93 + v45);
          v37 = myNo;
          if ( v92 )
          {
            v46 = *((unsigned __int8 *)&v101 + 3 * v45 + gameRule);
            NetManager::setTeamAndOrder(
              this,
              player_data,
              v46,
              v88[v46],
              optNum,
              v85,
              myNo == ((*((_DWORD *)v20 - 1) >> 27) & 0xF));
            v88[v47] = ++v49;
            if ( v49 == 4 )
              v88[v47] = 1;
          }
          else
          {
            v50 = (v34 & 0x7F) % 0xC;
            v51 = v50 - 3;
            if ( v50 <= 3u )
              v51 = v50;
            NetManager::setTeamAndOrder(
              this,
              player_data,
              *((_BYTE *)&v101 + 3 * v45 + gameRule),
              v51,
              optNum,
              v85,
              myNo == ((*((_DWORD *)v20 - 1) >> 27) & 0xF));
          }
          v52 = *(_DWORD *)v20;
          v53 = gameRule + 1;
          v54 = v89;
          v55 = *((_DWORD *)v20 - 1);
          LOBYTE(gameRule) = v90;
          v56 = 2i64 * v89;
          *((_DWORD *)&v93 + v48) = v53;
          *((_DWORD *)&pMsg.msgJoinComplete.memberRank[1] + 2 * v56 + 4) &= 0xFFFF0000;
          *((_DWORD *)&pMsg.msgJoinComplete.memberRank[1] + 2 * v56 + 5) &= 0xFFFFFFF8;
          *((_DWORD *)&pMsg.msgJoinComplete.memberRank[1] + 2 * v56 + 7) &= ~1u;
          *((_DWORD *)&pMsg.msgJoinComplete.memberRank[1] + 2 * v56 + 4) |= (16 * (v52 & 0x3FF)) | ((v52 & 0xC0000 | (v55 >> 23) & 0xF0) >> 4);
          v57 = (v52 >> 7) & 0x2000 | *((_DWORD *)v20 - 2) & 0x1800;
          *((_DWORD *)&pMsg.msgJoinComplete.memberRank[1] + 2 * v56 + 7) |= (v52 >> 30) & 1;
          v58 = *((_DWORD *)v20 + 1);
          *((_DWORD *)&pMsg.msgJoinComplete.memberRank[1] + 2 * v56 + 5) |= v57 >> 11;
          *((_DWORD *)&pMsg.msgJoinComplete.memberRank[1] + 2 * v56 + 6) = v58;
          v89 = v54 + 1;
        }
        else
        {
          if ( (unsigned int)v6 + 2 <= (unsigned int)v35 )
          {
            v36 = *((_DWORD *)v20 - 1);
            *((_DWORD *)v20 - 1) = v36 & 0xFFFFE7FF;
            *((_DWORD *)v20 - 2) &= 0xF9FFE7FF;
            v37 = myNo;
            v38 = *((_DWORD *)v20 - 1);
            *(_DWORD *)&pMsg.msgTableComplete.not_party.memberSub[v31].common &= 0xFFFF0000;
            *(_DWORD *)&pMsg.msgTableComplete.not_party.memberSub[v31].common |= (16 * (v34 & 0x3FF)) | ((v34 & 0xC0000 | (v36 >> 23) & 0xF0) >> 4);
            v91 = v31 + 1;
            if ( myNo == ((v38 >> 27) & 0xF) )
              this->gamedata.orderSendFlag = 0;
LABEL_58:
            v62 = *(_DWORD *)v20;
            time = pMsg.msgBattleCommand.time;
            if ( v6 == (*(_DWORD *)v20 & 0x7F) )
            {
              v63 = *(_OWORD *)(v20 + 36);
              v64 = *(_OWORD *)(v20 + 52);
              *((_DWORD *)&pMsg.msgPing + 15) = *((_DWORD *)v20 + 23);
              v65 = v20[96];
              *(_OWORD *)pMsg.msgTableComplete.common.stageTelop = v63;
              v66 = (pMsg.msgJoinComplete.memberNum ^ (unsigned __int8)(v62 >> 7)) & 0xF8 ^ pMsg.msgBattleCommand.time;
              pMsg.msgSeatRequest.waiting.stageTelop[48] = v65;
              v67 = *(_OWORD *)(v20 + 68);
              *(_OWORD *)&pMsg.msgVoiceData.dataBuf[12] = v64;
              *(_QWORD *)&v64 = *(_QWORD *)(v20 + 84);
              *(_OWORD *)((char *)&pMsg.msgPing + 36) = v67;
              *(_QWORD *)((char *)&pMsg.msgPing + 52) = v64;
              v68 = AgClock::getSystemTime() * 1000000.0;
              if ( v68 >= 9.223372036854776e18 )
                v68 = v68 - 9.223372036854776e18;
              time = ((unsigned __int16)v66 ^ (unsigned __int16)((unsigned __int16)(int)v68 << 13)) & 0xE000 ^ v66;
              pMsg.msgBattleCommand.time = time;
              this->gamedata.randseed = (unsigned __int16)time >> 13;
            }
            v24 = v99;
            player_data = v97;
            v31 = v91;
            LODWORD(gameRule) = (unsigned __int8)gameRule;
            v69 = v37 == ((*((_DWORD *)v20 - 1) >> 27) & 0xF);
            v19 = v87[0];
            if ( v69 )
              LODWORD(gameRule) = 1;
            v90 = gameRule;
            goto LABEL_65;
          }
          v39 = v89;
          NetManager::setSeatUserFromPlayerData(v35, &pMsg.msgTableComplete.not_party.member[v89], player_data);
          v41 = *((_DWORD *)v20 - 2) & 0xF7FFDFFF;
          v42 = *((_DWORD *)v20 - 1) & 0xFFFFDFFF;
          v89 = v39 + 1;
          *((_DWORD *)v20 - 2) = v41;
          *((_DWORD *)v20 - 1) = v42;
          if ( !v40 || v40 == 3 )
          {
            v43 = v41 & 0xF9FFE7FF | 0x4000800;
            v44 = v42 | 0x1800;
          }
          else
          {
            v43 = v41 & 0xF9FFE7FF;
            v44 = v42 & 0xFFFFE7FF;
          }
          v37 = myNo;
          *((_DWORD *)v20 - 1) = v44;
          *((_DWORD *)v20 - 2) = v43;
        }
        if ( v37 == ((*((_DWORD *)v20 - 1) >> 27) & 0xF) )
          this->gamedata.orderSendFlag = 1;
        goto LABEL_58;
      }
    }
LABEL_66:
    ++player_data;
    v20 += 118;
    --v32;
    v97 = player_data;
    v96 = v32;
  }
  while ( v32 );
  v70 = v94;
  v71 = 0;
  pMsg.msgType = 6;
  if ( v94 == GAME_RULE_PARTY )
    v71 = 4096;
  v72 = v95 & 7 | time & 0xFFF8E0F8 | v71 | (((_WORD)v31 + (_WORD)v89) << 8) & 0xF00;
  v73 = (__int64)v98;
  pMsg.msgBattleCommand.time = v72;
  if ( v98 )
  {
    v72 ^= (v72 ^ ((unsigned __int8)NetManager::CalcAddDelayFrame(this) << 16)) & 0x70000;
    v73 = (__int64)v98;
    pMsg.msgBattleCommand.time = v72;
  }
  if ( (_BYTE)gameRule )
  {
    if ( v73 )
    {
      this->gamedata.addDelayFrame = (HIWORD(v72) & 7) + 2;
      goto LABEL_74;
    }
  }
  else
  {
LABEL_74:
    if ( v73 )
    {
      v74 = *(_OWORD *)v73;
      pMsg.msgType = 2;
      v75 = *(_OWORD *)(v73 + 16);
      *(_OWORD *)((char *)&pMsg.msgPing + 97) = v74;
      v76 = *(_OWORD *)(v73 + 32);
      *(_OWORD *)((char *)&pMsg.msgPing + 113) = v75;
      v77 = *(_OWORD *)(v73 + 48);
      *(_OWORD *)((char *)&pMsg.msgPing + 129) = v76;
      v78 = *(_OWORD *)(v73 + 64);
      *(_OWORD *)((char *)&pMsg.msgPing + 145) = v77;
      v79 = *(_OWORD *)(v73 + 80);
      v80 = *(_BYTE *)(v73 + 96);
      *(_OWORD *)((char *)&pMsg.msgPing + 161) = v78;
      pMsg.msgTableCompleteRank.memberRank[1].country[3] = v80;
      *(_OWORD *)((char *)&pMsg.msgPing + 177) = v79;
    }
  }
  NetManager::SendMessageW(this, &pMsg, 0i64, 1, 0);
  if ( (_BYTE)gameRule )
  {
    LOBYTE(v82) = 0;
    if ( v6 > 0xCu )
      v82 = (v6 - 1) / 12;
    this->gamedata.battleStartTableNo = v82;
    v83 = NET_STATE_ORDERSELECT;
    if ( v70 == GAME_RULE_PARTY )
    {
      v83 = NET_STATE_CHARACTERSELECT;
    }
    else if ( this->gamedata.matchMode == NETWORK_MATCHING_TYPE_FREE )
    {
      v83 = NET_STATE_CHARACTERSELECT_NOT_PARTY;
    }
    NetManager::ChangeState(this, v83, v81);
  }
  v28 = (_RTL_CRITICAL_SECTION *)&this->m_Mutex;
LABEL_85:
  LeaveCriticalSection(v28);
}

void __fastcall NetManager::SendRoomChatMessage(NetManager *this, char *anyMessage, char *pMessage, bool battleFlag)
{
  unsigned __int8 battleStartTableNo; // dl
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // r11
  unsigned int v10; // ebx
  _DWORD *v11; // rdx
  __int64 v12; // r10
  char *v13; // r9
  unsigned int v14; // er8
  char *v15; // rax
  __int64 v16; // rdx
  char *v17; // rsi
  int v18; // ebx
  int v19; // eax
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // rbx
  bool v23; // zf
  __int64 v24; // rax
  char string; // [rsp+20h] [rbp-98h] BYREF
  char v26; // [rsp+21h] [rbp-97h]
  char v27; // [rsp+22h] [rbp-96h]
  char v28; // [rsp+30h] [rbp-88h] BYREF

  if ( battleFlag )
  {
    battleStartTableNo = this->gamedata.battleStartTableNo;
    if ( battleStartTableNo )
      v8 = 12 * battleStartTableNo + 1;
    else
      v8 = 1;
    v9 = v8 + 12;
    v10 = v8;
    v11 = (_DWORD *)((char *)this->gamedata.player_data + 16);
    v12 = 12i64;
    v13 = &v28;
    do
    {
      v14 = *v11 & 0x7F;
      if ( v10 <= v14 && v14 < v9 && (*v11 & 0x380) == 384 )
        v13 += 8;
      v11 = (_DWORD *)((char *)v11 + 118);
      --v12;
    }
    while ( v12 );
  }
  v15 = strstr(anyMessage, "|$SETPHRASES_");
  v17 = v15;
  if ( v15
    && (string = v15[13],
        v26 = v15[14],
        v27 = 0,
        v18 = atol(&string),
        string = v17[16],
        v26 = v17[17],
        v19 = atol(&string),
        !v18)
    && v19 )
  {
    *pMessage = 48;
    pMessage[1] = v19;
  }
  else
  {
    v20 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v16);
    v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 16) + 336i64))(*(_QWORD *)(v20 + 16));
    if ( (v21 & 0x10) != 0 || (v21 & 0xA) != 0 )
      return;
    sprintf_s(pMessage, 0x100ui64, "1%s", anyMessage);
  }
  v22 = -1i64;
  if ( battleFlag )
  {
    do
      v23 = pMessage[++v22] == 0;
    while ( !v23 );
  }
  else
  {
    do
      v23 = pMessage[++v22] == 0;
    while ( !v23 );
  }
  v24 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v16);
  (*(void (__fastcall **)(_QWORD, CSteamID::SteamID_t, char *, _QWORD))(**(_QWORD **)(v24 + 32) + 208i64))(
    *(_QWORD *)(v24 + 32),
    Fw::MatchingTarget::m_RoomId.m_steamid,
    pMessage,
    (unsigned int)(v22 + 1));
}

void *__fastcall SendThread(void *pParam)
{
  void *v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // r12
  SEND_MESSAGE *v4; // r13
  SEND_MESSAGE *v5; // r14
  int optNum; // ebp
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  Fw::TUdpP2pInfo *Myfirst; // rax
  Fw::TUdpP2pInfo *i; // rcx
  bool v13; // al
  int v14; // er9
  int v15; // edx
  __int16 *v16; // r8
  int v17; // eax
  SEND_MESSAGE *v18; // rcx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // r11
  __int64 *v21; // r9
  _DWORD *v22; // rdx
  __int64 v23; // r10
  __int64 v24; // r8
  unsigned int v25; // ecx
  unsigned __int8 CharacterId; // al
  int v27; // er10
  int v28; // edx
  unsigned __int8 CharacterColorId; // al
  int v30; // er11
  int v31; // edx
  unsigned __int8 CharacterCostumeId; // al
  int v33; // edx
  NetManager *v34; // rcx
  unsigned __int8 v35; // r8
  unsigned __int8 CharacterFix; // al
  int v37; // er11
  int v38; // er8
  SEND_MESSAGE *v39; // rcx
  unsigned __int8 v40; // di
  unsigned __int8 v41; // dl
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  unsigned int v45; // er15
  unsigned __int8 v46; // r10
  __int64 *v47; // r8
  _DWORD *v48; // rdx
  __int64 v49; // r9
  unsigned int v50; // ecx
  int v51; // edx
  unsigned __int8 v52; // al
  int v53; // er11
  unsigned __int8 v54; // al
  int v55; // er10
  unsigned __int8 v56; // al
  int v57; // ebx
  int v58; // edi
  unsigned __int8 v59; // al
  unsigned __int8 v60; // al
  int v61; // er10
  int v62; // edx
  unsigned __int8 v63; // al
  int v64; // er11
  int v65; // edx
  int v66; // edx
  NetManager *v67; // rcx
  unsigned __int8 v68; // al
  int v69; // edx
  NetManager *v70; // rcx
  unsigned __int8 v71; // al
  int v72; // er9
  int v73; // er8
  SEND_MESSAGE *v74; // rcx
  unsigned __int8 v75; // di
  unsigned __int8 v76; // dl
  int v77; // er8
  unsigned int v78; // er15
  unsigned __int8 v79; // r10
  __int64 *v80; // r8
  _DWORD *v81; // rdx
  __int64 v82; // r9
  unsigned int v83; // ecx
  unsigned __int8 v84; // di
  unsigned __int8 v85; // dl
  unsigned __int8 v86; // r13
  unsigned __int8 v87; // r15
  int j; // er8
  __int64 v89; // rcx
  int v90; // ecx
  int v91; // er9
  int v92; // er9
  __int64 v93; // r10
  int v94; // er8
  unsigned int v95; // ecx
  int time; // er8
  int v97; // ebx
  int v98; // ebx
  int v99; // er9
  __int64 v100; // rdx
  __int64 v101; // rax
  unsigned int *v102; // rdx
  int v103; // eax
  unsigned int v104; // ecx
  int v105; // ebx
  _DWORD *v106; // r13
  char *v107; // rbp
  char v108; // di
  Fw::VoiceChat::VoiceQos *v109; // r15
  int v110; // eax
  char v111; // cl
  unsigned __int8 v112; // cl
  unsigned int v113; // er8
  int v114; // eax
  int v115; // eax
  int v116; // eax
  int v117; // eax
  unsigned __int8 v118; // dl
  __int64 v119; // rax
  __int64 v120; // r9
  int v122; // [rsp+28h] [rbp-1A0h]
  int v123; // [rsp+50h] [rbp-178h]
  __int16 v124; // [rsp+54h] [rbp-174h] BYREF
  char v125; // [rsp+56h] [rbp-172h]
  char VoiceMessage; // [rsp+58h] [rbp-170h]
  SEND_MESSAGE *v127; // [rsp+60h] [rbp-168h]
  void *v128; // [rsp+68h] [rbp-160h]
  __int64 v129; // [rsp+70h] [rbp-158h]
  char v130[8]; // [rsp+78h] [rbp-150h] BYREF
  Fw::ROOM_SESSION_INFO pInfo; // [rsp+80h] [rbp-148h] BYREF
  __int64 v132[12]; // [rsp+130h] [rbp-98h] BYREF

  v129 = -2i64;
  v1 = pParam;
  v128 = pParam;
  v2 = *((_QWORD *)pParam + 2);
  v3 = v2 + 128;
  v4 = pSendMsg;
  v127 = pSendMsg;
  v5 = pSendVoiceMsg;
  optNum = 0;
  v123 = 0;
  memset(pSendMsg, 0, sizeof(SEND_MESSAGE));
  if ( !(*(unsigned int (__fastcall **)(void *))(*(_QWORD *)v1 + 40i64))(v1) )
  {
    while ( !*(_DWORD *)(v3 + 3288) )
    {
LABEL_189:
      AgThread::sleep(0xAu);
      if ( (*(unsigned int (__fastcall **)(void *))(*(_QWORD *)v1 + 40i64))(v1) )
        return 0i64;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 80));
    v8 = 0i64;
    switch ( *(_DWORD *)(v3 + 3288) )
    {
      case 6:
        if ( *(int *)(v3 + 3216) > 0 )
          goto LABEL_18;
        v4->msgJoinRequest.joinId.data = *(_QWORD *)v3;
        if ( *(_DWORD *)(v3 + 40) != 1 )
        {
          v4->msgType = 1;
          NetManager::SetRequestJoinUser((NetManager *)v2, &v4->msgJoinRequest.free);
          memset(&pInfo, 0, sizeof(pInfo));
          Fw::InvitationCommon::GetRoomSessionInfo(&pInfo);
          v13 = pInfo.password && pInfo.roomId == Fw::MatchingTarget::m_RoomId.m_steamid.m_comp;
          v4->msgJoinRequest.free.privateInvite = v13;
          goto LABEL_17;
        }
        v4->msgType = 0;
        v9 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v7);
        v10 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *, CSteamID::SteamID_t))(**(_QWORD **)(v9 + 32) + 280i64))(
                           *(_QWORD *)(v9 + 32),
                           v130,
                           Fw::MatchingTarget::m_RoomId.m_steamid);
        EnterCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
        Myfirst = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
        for ( i = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
        {
          if ( Myfirst->memberId == v10 )
          {
            v4->msgJoinRequest.rank.rtt = Myfirst->rtt;
            i = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
        LODWORD(v8) = 0;
        if ( v4->msgJoinRequest.rank.rtt )
        {
          NetManager::SetRequestJoinUser((NetManager *)v2, &v4->msgJoinRequest.rank);
LABEL_17:
          LODWORD(v8) = 4;
          *(_DWORD *)(v3 + 3216) = 60;
LABEL_18:
          --*(_DWORD *)(v3 + 3216);
        }
LABEL_138:
        v97 = v8 - 1;
        if ( v97 )
        {
          v98 = v97 - 1;
          if ( !v98 )
          {
            if ( optNum > 0 )
              NetManager::SendMessageW((NetManager *)v2, v4, v132, 2, optNum);
            goto LABEL_146;
          }
          if ( v98 != 2 )
          {
LABEL_146:
            LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 80));
            EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 80));
            v101 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v100);
            LOBYTE(v122) = 0;
            v102 = &Fw::VoiceChat::m_bufferWritten;
            LOBYTE(v102) = 1;
            v103 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, void *, __int64, unsigned int *, int, _QWORD, _DWORD, _QWORD, _DWORD))(**(_QWORD **)(v101 + 8) + 80i64))(
                     *(_QWORD *)(v101 + 8),
                     v102,
                     Fw::VoiceChat::m_pBuffer,
                     1100i64,
                     &Fw::VoiceChat::m_bufferWritten,
                     v122,
                     0i64,
                     0,
                     0i64,
                     0);
            v104 = Fw::VoiceChat::m_bufferWritten;
            if ( v103 )
              v104 = 0;
            Fw::VoiceChat::m_bufferWritten = v104;
            v105 = 0;
            v106 = (_DWORD *)(v2 + 1473);
            v107 = (char *)(v2 + 2886);
            do
            {
              if ( v105 != *(unsigned __int8 *)(v2 + 1454)
                && (char)v105 < 12
                && *(_DWORD *)(118i64 * (char)v105 + v2 + 1457) )
              {
                v5->msgVoiceData.bufSize = 1100;
                v108 = *v107;
                v5->msgBattleCommand.time &= ~0x40u;
                v5->msgBattleCommand.time |= (v108 & 1) << 6;
                VoiceMessage = Fw::VoiceChat::getVoiceMessage(
                                 v105,
                                 &v5->msgBattleCommand.cmd[4].key,
                                 &v5->msgVoiceData.bufSize);
                v109 = &Fw::VoiceChat::m_VoiceQos[(char)v105];
                v5->msgBattleCommand.time = v5->msgBattleCommand.time & 0xFFFFFF7F | (v109->bConnected ? 0x80 : 0);
                v110 = *(_DWORD *)(v2 + 3416);
                if ( (_BYTE)v110 == 3 || (_BYTE)v110 == 8 )
                {
                  if ( !*((_QWORD *)v106 - 2) || (*v106 & 0x380) == 384 )
                  {
                    if ( v109->bConnected )
                    {
                      v116 = Mtx_lock((_Mtx_internal_imp_t *)&Fw::VoiceChat::m_VoiceChatMutex);
                      if ( v116 )
                        std::_Throw_C_error(v116);
                      v109->bStateMute = v108 | 1;
                      v117 = Mtx_unlock((_Mtx_internal_imp_t *)&Fw::VoiceChat::m_VoiceChatMutex);
                      if ( v117 )
                        std::_Throw_C_error(v117);
                    }
                  }
                  else if ( v109->bConnected )
                  {
                    v114 = Mtx_lock((_Mtx_internal_imp_t *)&Fw::VoiceChat::m_VoiceChatMutex);
                    if ( v114 )
                      std::_Throw_C_error(v114);
                    v109->bStateMute = v108;
                    v115 = Mtx_unlock((_Mtx_internal_imp_t *)&Fw::VoiceChat::m_VoiceChatMutex);
                    if ( v115 )
                      std::_Throw_C_error(v115);
                  }
                }
                else if ( (unsigned __int8)(v110 - 9) <= 7u )
                {
                  v111 = *(_BYTE *)(v2 + 1456);
                  if ( v111 )
                    v112 = 12 * v111 + 1;
                  else
                    v112 = 1;
                  v113 = *v106 & 0x7F;
                  if ( v112 <= v113 && v113 < (unsigned __int8)(v112 + 12) && (*v106 & 0x380) == 384 )
                    Fw::MatchingSystem::setStateMute(v105, v108);
                  else
                    Fw::MatchingSystem::setStateMute(v105, v108 | 1);
                }
                if ( VoiceMessage && g_NetworkManager.gamedata.matchMode != NETWORK_MATCHING_TYPE_RANK )
                {
                  v5->msgType = 22;
                  v5->msgBattleCommand.time ^= (v5->msgBattleCommand.time ^ *(unsigned __int8 *)(v2 + 1454)) & 0x3F;
                  if ( v5->msgVoiceData.bufSize > 1 )
                    *(_DWORD *)(v2 + 4i64 * *(unsigned __int8 *)(v2 + 1454) + 4524) = 33;
                  if ( v5->msgVoiceData.bufSize )
                  {
                    v118 = 0;
                    v119 = v2 + 1457;
                    v120 = 12i64;
                    do
                    {
                      if ( *(_QWORD *)v119 && ((*(_DWORD *)(v119 + 12) >> 27) & 0xF) == v105 )
                        *(_QWORD *)(v2 + 8i64 * v118++ + 6760) = *(_QWORD *)v119;
                      v119 += 118i64;
                      --v120;
                    }
                    while ( v120 );
                    NetManager::SendMessageW((NetManager *)v2, v5, (void *)(v2 + 6760), 2, v118);
                  }
                }
              }
              ++v105;
              v107 += 35;
              v106 = (_DWORD *)((char *)v106 + 118);
            }
            while ( v105 < 12 );
            LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 80));
            optNum = v123;
            v3 = v2 + 128;
            v4 = v127;
            v1 = v128;
            goto LABEL_189;
          }
          v99 = 4;
        }
        else
        {
          v99 = 1;
        }
        NetManager::SendMessageW((NetManager *)v2, v4, 0i64, v99, 0);
        goto LABEL_146;
      case 9:
        if ( *(_BYTE *)(v3 + 3272) )
        {
          v14 = --*(_DWORD *)(v3 + 3228);
          v124 = -1;
          v125 = -1;
          v15 = 0;
          v16 = &v124;
          do
          {
            *(_BYTE *)v16 = *(_BYTE *)((unsigned __int8)v15++ + v2 + 165);
            v16 = (__int16 *)((char *)v16 + 1);
          }
          while ( v15 < 3 );
          if ( v14 == 20 * (v14 / 20) )
          {
            v4->msgBattleCommand.time &= 0xFFFFFC0F;
            v4->msgBattleCommand.time |= 16 * (v124 & 3 | (4 * (HIBYTE(v124) & 3 | (4 * (v125 & 3)))));
            v4->msgBattleCommand.time ^= (v4->msgBattleCommand.time ^ *(unsigned __int8 *)(v3 + 1326)) & 0xF;
            v17 = *(_DWORD *)(v3 + 44);
            if ( v17 )
            {
              if ( v17 != 3 )
              {
                v18 = pSendMsgLog;
                if ( pSendMsgLog->msgBattleCommand.time != v4->msgBattleCommand.time )
                {
                  v4->msgType = 10;
                  v18->msgBattleCommand.time = v4->msgBattleCommand.time;
                  v19 = *(_BYTE *)(118i64 * *(char *)(v3 + 1326) + v3 + 1345) & 0x7F;
                  v20 = 1;
                  if ( v19 > 0xCu )
                    v20 = 12 * ((v19 - 1) / 12) + 1;
                  optNum = 0;
                  v21 = v132;
                  v22 = (_DWORD *)(v3 + 1345);
                  v23 = 12i64;
                  do
                  {
                    v24 = *((_QWORD *)v22 - 2);
                    if ( v24 )
                    {
                      if ( (*v22 & 0x380) == 384 )
                      {
                        v25 = *v22 & 0x7F;
                        if ( v20 <= v25 && v25 < (unsigned __int8)(v20 + 12) )
                        {
                          *v21 = v24;
                          ++optNum;
                          ++v21;
                        }
                      }
                    }
                    v22 = (_DWORD *)((char *)v22 + 118);
                    --v23;
                  }
                  while ( v23 );
                  v123 = optNum;
                  LODWORD(v8) = 2;
                }
                *(_DWORD *)(v3 + 3228) = 60;
              }
            }
          }
        }
        goto LABEL_138;
      case 0xA:
        v4->msgBattleCommand.time ^= (v4->msgBattleCommand.time ^ *(unsigned __int8 *)(v3 + 1326)) & 0xF;
        CharacterId = NetManager::GetCharacterId((NetManager *)v2, -1, 0);
        v4->msgBattleCommand.time = v27 ^ ((unsigned __int16)v27 ^ (unsigned __int16)(16 * CharacterId)) & 0x3F0;
        CharacterColorId = NetManager::GetCharacterColorId((NetManager *)v2, v28, 0);
        v31 = v30 ^ ((unsigned __int16)v30 ^ (unsigned __int16)(CharacterColorId << 10)) & 0x1C00;
        v4->msgBattleCommand.time = v31;
        CharacterCostumeId = NetManager::GetCharacterCostumeId((NetManager *)v2, v31, 0);
        v4->msgBattleCommand.time = v33 ^ ((unsigned __int16)v33 ^ (unsigned __int16)(CharacterCostumeId << 14)) & 0xC000;
        CharacterFix = NetManager::GetCharacterFix(v34, -1, v35);
        v38 = v37 ^ ((unsigned __int16)v37 ^ (unsigned __int16)(CharacterFix << 13)) & 0x2000;
        v4->msgBattleCommand.time = v38;
        optNum = 0;
        v123 = 0;
        LODWORD(v8) = 2;
        v39 = pSendMsgLog;
        if ( pSendMsgLog->msgBattleCommand.time == v38 )
          goto LABEL_138;
        v4->msgType = 11;
        v39->msgBattleCommand.time = v38;
        v40 = *(_BYTE *)(118i64 * *(char *)(v3 + 1326) + v3 + 1345) & 0x7F;
        v41 = 1;
        if ( v40 > 0xCu )
          v41 = 12 * ((v40 - 1) / 12) + 1;
        v42 = *(_DWORD *)(v3 + 44);
        if ( !v42 )
          goto LABEL_51;
        v43 = v42 - 1;
        if ( !v43 )
        {
          if ( v41 > v40 )
            goto LABEL_138;
          v45 = v40;
          if ( v40 >= (unsigned int)v41 + 2 )
            goto LABEL_138;
          goto LABEL_53;
        }
        v44 = v43 - 1;
        if ( !v44 )
        {
          if ( v41 > v40 )
            goto LABEL_138;
          v45 = v40;
          if ( v40 >= (unsigned int)v41 + 6 )
            goto LABEL_138;
LABEL_53:
          if ( v45 % 0xC == 1 && (v4->msgBattleCommand.time & 0x2000) != 0 )
            NetManager::ProcessCharacterSelect((NetManager *)v2, v4);
          v46 = 1;
          if ( v40 > 0xCu )
            v46 = 12 * ((int)(v45 - 1) / 12) + 1;
          v47 = v132;
          v48 = (_DWORD *)(v3 + 1345);
          v49 = 12i64;
          do
          {
            if ( *((_QWORD *)v48 - 2) )
            {
              if ( (*v48 & 0x380) == 384 )
              {
                v50 = *v48 & 0x7F;
                if ( v46 <= v50 && v50 < (unsigned __int8)(v46 + 12) )
                {
                  *v47 = *(_QWORD *)((char *)v48 + v2 - v3 + 112);
                  ++optNum;
                  ++v47;
                }
              }
            }
            v48 = (_DWORD *)((char *)v48 + 118);
            --v49;
          }
          while ( v49 );
          v123 = optNum;
          goto LABEL_138;
        }
        if ( v44 != 1 )
          goto LABEL_138;
LABEL_51:
        if ( v41 <= v40 )
        {
          v45 = v40;
          if ( v40 < (unsigned int)v41 + 2 )
            goto LABEL_53;
        }
        goto LABEL_138;
      case 0xB:
        v4->msgBattleCommand.time ^= (v4->msgBattleCommand.time ^ *(unsigned __int8 *)(v3 + 1326)) & 0xF;
        v4->msgBattleCommand.time ^= (v4->msgBattleCommand.time ^ (16
                                                                 * NetManager::GetCharacterId((NetManager *)v2, -1, 0))) & 0x3F0;
        v52 = NetManager::GetCharacterId((NetManager *)v2, v51, v51 + 2);
        v4->msgBattleCommand.time = v53 ^ ((unsigned __int16)v53 ^ (unsigned __int16)(v52 << 10)) & 0xFC00;
        v54 = NetManager::GetCharacterId((NetManager *)v2, -1, 2);
        v4->msgBattleCommand.time = v55 ^ (v55 ^ (v54 << 16)) & 0x3F0000;
        v56 = NetManager::GetCharacterFix((NetManager *)v2, -1, 0);
        v4->msgVoiceData.bufSize &= ~0x40u;
        v4->msgVoiceData.bufSize |= (v56 & 1) << 6;
        v57 = v4->msgVoiceData.bufSize ^ (v4->msgVoiceData.bufSize ^ (NetManager::GetCharacterFix(
                                                                        (NetManager *)v2,
                                                                        -1,
                                                                        1u) << 7)) & 0x80;
        v4->msgVoiceData.bufSize = v57;
        v58 = v57 ^ ((unsigned __int16)v57 ^ (unsigned __int16)(NetManager::GetCharacterFix((NetManager *)v2, -1, 2u) << 8)) & 0x100;
        v4->msgVoiceData.bufSize = v58;
        v59 = NetManager::GetCharacterColorId((NetManager *)v2, -1, 0);
        v4->msgBattleCommand.time &= 0xFE3FFFFF;
        v4->msgBattleCommand.time |= (v59 & 7) << 22;
        v60 = NetManager::GetCharacterColorId((NetManager *)v2, -1, 1);
        v4->msgBattleCommand.time = v61 ^ (v61 ^ (v60 << 25)) & 0xE000000;
        v63 = NetManager::GetCharacterColorId((NetManager *)v2, v62, v62 + 3);
        v65 = v64 ^ (v64 ^ (v63 << 28)) & 0x70000000;
        v4->msgBattleCommand.time = v65;
        v66 = v58 ^ ((unsigned __int8)v58 ^ NetManager::GetCharacterCostumeId((NetManager *)v2, v65, 0)) & 3;
        v4->msgVoiceData.bufSize = v66;
        v68 = NetManager::GetCharacterCostumeId(v67, v66, 1);
        v4->msgVoiceData.bufSize = v69 ^ ((unsigned __int8)v69 ^ (unsigned __int8)(4 * v68)) & 0xC;
        v71 = NetManager::GetCharacterCostumeId(v70, v69, 2);
        v4->msgVoiceData.bufSize = v72 ^ ((unsigned __int8)v72 ^ (unsigned __int8)(16 * v71)) & 0x30;
        optNum = 0;
        v123 = 0;
        LODWORD(v8) = v73;
        v74 = pSendMsgLog;
        if ( pSendMsgLog->msgJoinRequest.joinId.data == v4->msgJoinRequest.joinId.data )
          goto LABEL_138;
        v4->msgType = 12;
        v74->msgJoinRequest.joinId.data = v4->msgJoinRequest.joinId.data;
        v75 = *(_BYTE *)(118i64 * *(char *)(v3 + 1326) + v3 + 1345) & 0x7F;
        v76 = 1;
        if ( v75 > 0xCu )
          v76 = 12 * ((v75 - 1) / 12) + 1;
        v77 = *(_DWORD *)(v3 + 44);
        switch ( v77 )
        {
          case 0:
            goto LABEL_80;
          case 1:
            if ( v76 > v75 )
              goto LABEL_138;
            v78 = v75;
            if ( v75 >= (unsigned int)v8 + v76 )
              goto LABEL_138;
LABEL_82:
            if ( v77 == 1 )
            {
              if ( v78 % 0xC == 1 && (v4->msgVoiceData.bufSize & 0x1C0) == 448 )
                goto LABEL_90;
            }
            else if ( (v77 == 3 || !v77) && v78 % 0xC == 1 && (v4->msgTableComplete.common.stageTelop[0] & 0x40) != 0 )
            {
LABEL_90:
              NetManager::ProcessCharacterSelectNotParty((NetManager *)v2, v4);
            }
            v79 = 1;
            if ( v75 > 0xCu )
              v79 = 12 * ((int)(v78 - 1) / 12) + 1;
            v80 = v132;
            v81 = (_DWORD *)(v3 + 1345);
            v82 = 12i64;
            do
            {
              if ( *((_QWORD *)v81 - 2) )
              {
                if ( (*v81 & 0x380) == 384 )
                {
                  v83 = *v81 & 0x7F;
                  if ( v79 <= v83 && v83 < (unsigned __int8)(v79 + 12) )
                  {
                    *v80 = *(_QWORD *)((char *)v81 + v2 - v3 + 112);
                    ++optNum;
                    ++v80;
                  }
                }
              }
              v81 = (_DWORD *)((char *)v81 + 118);
              --v82;
            }
            while ( v82 );
            v123 = optNum;
            goto LABEL_138;
          case 2:
            if ( v76 > v75 )
              goto LABEL_138;
            v78 = v75;
            if ( v75 >= (unsigned int)v76 + 6 )
              goto LABEL_138;
            goto LABEL_82;
        }
        if ( v77 != 3 )
          goto LABEL_138;
LABEL_80:
        if ( v76 <= v75 )
        {
          v78 = v75;
          if ( v75 < (unsigned int)v8 + v76 )
            goto LABEL_82;
        }
        goto LABEL_138;
      case 0xD:
        if ( *(int *)(v3 + 3244) > 0 )
          goto LABEL_137;
        v84 = *(_BYTE *)(118i64 * *(char *)(v3 + 1326) + v3 + 1345) & 0x7F;
        v85 = 1;
        if ( v84 > 0xCu )
          v85 = 12 * ((v84 - 1) / 12) + 1;
        v86 = v85 + 12;
        v87 = 0;
        if ( *(_DWORD *)(v3 + 44) == 2 )
        {
          for ( j = 0; j < 12; ++j )
          {
            v89 = 118i64 * j;
            if ( *(_QWORD *)(v89 + v3 + 1329) )
            {
              v90 = *(_DWORD *)(v89 + v3 + 1345);
              v91 = v90 & 0x7F;
              if ( v91 != v84
                && (v90 & 0x380) == 384
                && v85 == v91
                && *(_QWORD *)(35i64 * (unsigned __int8)j + v2 + 2892) )
              {
                ++v85;
                j = 0;
              }
            }
          }
        }
        optNum = 0;
        v123 = 0;
        v92 = 0;
        while ( 2 )
        {
          v93 = 118i64 * v92;
          if ( !*(_QWORD *)(v93 + v3 + 1329) )
            goto LABEL_127;
          v94 = *(_DWORD *)(v93 + v3 + 1345);
          v95 = v94 & 0x7F;
          if ( v95 == v84 || (v94 & 0x380) != 384 )
            goto LABEL_127;
          if ( v85 == v84 )
          {
            if ( v85 <= v95 && v95 < v86 )
            {
              if ( !*(_QWORD *)(35i64 * (unsigned __int8)v92 + v2 + 2892) )
              {
                v132[v8] = *(_QWORD *)(v93 + v2 + 1457);
                v123 = ++optNum;
                ++v8;
              }
              if ( *(_DWORD *)(35i64 * v92 + v3 + 2745) )
                ++v87;
            }
LABEL_127:
            if ( ++v92 >= 12 )
              goto LABEL_130;
            continue;
          }
          break;
        }
        if ( v85 != v95 )
          goto LABEL_127;
        v132[v8] = *(_QWORD *)(118i64 * v92 + v2 + 1457);
        v123 = ++optNum;
LABEL_130:
        LODWORD(v8) = 0;
        v4 = v127;
        if ( optNum > 0 )
        {
          v127->msgType = 16;
          v4->msgBattleCommand.time ^= (v4->msgBattleCommand.time ^ *(char *)(v3 + 1326)) & 0xF;
          time = v4->msgBattleCommand.time;
          if ( v85 == v84 )
          {
            v4->msgBattleCommand.time = time & 0xFFFFFFEF | (16 * (optNum <= v87));
            if ( ((16 * (optNum <= v87)) & 0x10) != 0 )
              *(_DWORD *)(35i64 * *(char *)(v3 + 1326) + v3 + 2745) = 2;
          }
          else
          {
            v4->msgBattleCommand.time = time & 0xFFFFFFEF;
          }
          LODWORD(v8) = 2;
        }
        *(_DWORD *)(v3 + 3244) = 30;
LABEL_137:
        --*(_DWORD *)(v3 + 3244);
        goto LABEL_138;
      case 0x11:
        if ( *(int *)(v3 + 3260) > 0 )
        {
          v4->msgType = 14;
          v4->msgJoinRequest.joinId.data = *(_QWORD *)v3;
          LODWORD(v8) = 1;
          --*(_DWORD *)(v3 + 3260);
        }
        goto LABEL_138;
      default:
        goto LABEL_138;
    }
  }
  return 0i64;
}

void __fastcall NetManager::SetOrder(
        NetManager *this,
        int playerNo,
        unsigned __int8 characterIdx,
        unsigned __int8 order)
{
  __int64 v4; // rcx
  __int64 myNo; // rcx
  __int64 v6; // rcx

  g_NetworkManager.gamedata.userInfo.m_Order[characterIdx] = order;
  if ( characterIdx )
  {
    if ( characterIdx == 1 )
    {
      myNo = (unsigned __int8)g_NetworkManager.gamedata.myNo;
      *((_DWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 2) &= 0xF9FFFFFF;
      *((_DWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 2) |= (order & 3) << 25;
    }
    else if ( characterIdx == 2 )
    {
      v4 = (unsigned __int8)g_NetworkManager.gamedata.myNo;
      *((_DWORD *)&g_NetworkManager.gamedata.player_data[v4] + 3) &= 0xFFFFE7FF;
      *((_DWORD *)&g_NetworkManager.gamedata.player_data[v4] + 3) |= (order & 3) << 11;
    }
  }
  else
  {
    v6 = (unsigned __int8)g_NetworkManager.gamedata.myNo;
    *((_DWORD *)&g_NetworkManager.gamedata.player_data[v6] + 2) &= 0xFFFFE7FF;
    *((_DWORD *)&g_NetworkManager.gamedata.player_data[v6] + 2) |= (order & 3) << 11;
  }
}

void __fastcall NetManager::SetPresetCharacterTeam(NetManager *this, bool randomUpdate)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r11
  __int64 v8; // r9
  unsigned __int8 *p_m_ColorId; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r10
  int v13; // edx
  int v14; // er8
  unsigned __int8 v15; // cl

  v2 = *(_QWORD *)&AppMain::pApp;
  v4 = *(unsigned __int8 *)(*(_QWORD *)&AppMain::pApp + 2205348i64);
  v5 = *(_QWORD *)&AppMain::pApp + 2202784i64;
  SaveRecord_PlayerData::UpdatetMyFavoriteTeamRandom((SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64));
  v6 = (unsigned int)v4;
  v7 = 12 * v4 - 84;
  v8 = 0i64;
  p_m_ColorId = &this->gamedata.userInfo.m_Character[0].m_ColorId;
  v10 = 2652i64;
  v11 = 12 * v4 - 48;
  v12 = v6 + v2 + 2 * v6;
  do
  {
    v13 = *(_DWORD *)(v7 + v10 + v5);
    if ( (unsigned int)(v13 - 62) <= 1 )
      v13 = *(_DWORD *)(v10 + v5);
    *((_DWORD *)p_m_ColorId - 1) = v13;
    v14 = *(_DWORD *)(v11 + v10 + v5);
    if ( (unsigned int)(*(_DWORD *)(v7 + v10 + v5) - 62) <= 1 )
      v14 = *(_DWORD *)(v10 + v5 + 12);
    v10 += 4i64;
    *p_m_ColorId = v14 - 1;
    v15 = *(_BYTE *)(v12 + v8++ + 2205424);
    p_m_ColorId[1] = v15;
    p_m_ColorId += 8;
  }
  while ( v10 < 2664 );
}

void __fastcall NetManager::SetRequestJoinUser(NetManager *this, ROOM_JOIN_USER_FREE *pUser)
{
  _DWORD *v2; // r11
  int v3; // er8
  int v6; // edx
  unsigned int v7; // edx
  GRADE_THRESHOLD_TABLE *v8; // rcx
  int v9; // eax
  int v10; // er10
  int v11; // er10
  int i; // eax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax

  v2 = *(_DWORD **)&AppMain::pApp;
  v3 = 0;
  *(_DWORD *)pUser ^= (*(_DWORD *)pUser ^ *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2202800i64)) & 0x7F;
  if ( (v2[552027] & 0x20000000) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v7 = v2[550703] ^ 0x7B48A35E ^ (*((_WORD *)v2 + 1101406) ^ 0xA35E ^ (unsigned __int16)((v2[550703] ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*((_WORD *)v2 + 1101406) ^ 0xA35E ^ (unsigned __int16)((v2[550703] ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v8 = &_grade_change_table[1];
    v9 = (v7 ^ (v7 >> 7)) & 0x550055;
    v10 = v7 ^ (v9 << 7);
    v6 = 1;
    v11 = v9 ^ v10;
    for ( i = 1; i < 44; ++i )
    {
      if ( v8->point > v11 )
        break;
      v6 = i;
      ++v8;
    }
  }
  v13 = *(_DWORD *)pUser ^ (*(_DWORD *)pUser ^ (v6 << 7)) & 0x1F80;
  *(_DWORD *)pUser = v13;
  v14 = v13 ^ (v13 ^ (v2[550701] << 13)) & 0x3FE000;
  *(_DWORD *)pUser = v14;
  v15 = v14 ^ (v14 ^ (this->gamedata.userInfo.m_Antenna << 22)) & 0x1C00000;
  *(_DWORD *)pUser = v15;
  v16 = v2[550713];
  if ( v16 < 4 )
    LOBYTE(v3) = v16 >= 3;
  else
    v3 = 2;
  *(_DWORD *)pUser = (v3 << 25) | v15 & 0xF9FFFFFF;
}

void __fastcall NetManager::SetRequestJoinUser(NetManager *this, ROOM_JOIN_USER_RANK *pUser)
{
  __int64 v2; // rbx
  int v3; // er11
  int v6; // er9
  unsigned int v7; // edx
  GRADE_THRESHOLD_TABLE *v8; // rcx
  int i; // eax
  int v10; // er9
  int v11; // edx
  int v12; // ecx
  __int32 v13; // ecx
  __int32 v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // eax

  v2 = *(_QWORD *)&AppMain::pApp;
  v3 = 0;
  *(_DWORD *)pUser ^= (*(_DWORD *)pUser ^ *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2202800i64)) & 0x7F;
  if ( (*(_DWORD *)(v2 + 2208108) & 0x20000000) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    v8 = &_grade_change_table[1];
    for ( i = 1; i < 44; ++i )
    {
      v7 = *(_DWORD *)(v2 + 2202812) ^ 0x7B48A35E ^ (*(_WORD *)(v2 + 2202812) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v2 + 2202812) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)(v2 + 2202812) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v2 + 2202812) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      if ( v8->point > (signed int)((v7 ^ (v7 >> 7)) & 0x550055 ^ v7 ^ (((v7 ^ (v7 >> 7)) & 0x550055) << 7)) )
        break;
      v6 = i;
      ++v8;
    }
  }
  v10 = *(_DWORD *)pUser ^ (*(_DWORD *)pUser ^ (v6 << 7)) & 0x1F80;
  *(_DWORD *)pUser = v10;
  v11 = v10 ^ (v10 ^ (this->gamedata.userInfo.m_Antenna << 19)) & 0x380000;
  *(_DWORD *)pUser = v11;
  v12 = v11 ^ (v11 ^ (*(_DWORD *)(v2 + 4i64 * *(int *)(v2 + 2205300) + 2205304) << 14)) & 0x7C000;
  *(_DWORD *)pUser = v12;
  *(_DWORD *)pUser = v12 ^ (v12 ^ (*(_DWORD *)(v2 + 2202804) << 22)) & 0x7FC00000;
  *((_DWORD *)pUser + 1) ^= (*((_DWORD *)pUser + 1) ^ this->gamedata.userInfo.m_Character[0].m_CharacterId) & 0x3F;
  v13 = *((_DWORD *)pUser + 1) ^ (*((_DWORD *)pUser + 1) ^ (this->gamedata.userInfo.m_Character[1].m_CharacterId << 6)) & 0xFC0;
  *((_DWORD *)pUser + 1) = v13;
  v14 = v13 ^ (v13 ^ (this->gamedata.userInfo.m_Character[2].m_CharacterId << 12)) & 0x3F000;
  *((_DWORD *)pUser + 1) = v14;
  v15 = v14 ^ (v14 ^ (this->gamedata.userInfo.m_Character[0].m_ColorId << 18)) & 0x1C0000;
  *((_DWORD *)pUser + 1) = v15;
  v16 = v15 ^ (v15 ^ (this->gamedata.userInfo.m_Character[1].m_ColorId << 21)) & 0xE00000;
  *((_DWORD *)pUser + 1) = v16;
  v17 = v16 ^ (v16 ^ (this->gamedata.userInfo.m_Character[2].m_ColorId << 24)) & 0x7000000;
  *((_DWORD *)pUser + 1) = v17;
  v18 = v17 ^ (v17 ^ (this->gamedata.userInfo.m_Character[0].m_CostumeId << 27)) & 0x18000000;
  *((_DWORD *)pUser + 1) = v18;
  *((_DWORD *)pUser + 1) = v18 ^ (v18 ^ (this->gamedata.userInfo.m_Character[1].m_CostumeId << 29)) & 0x60000000;
  *((_DWORD *)pUser + 2) ^= (*((_DWORD *)pUser + 2) ^ this->gamedata.userInfo.m_Character[2].m_CostumeId) & 3;
  *((_DWORD *)pUser + 3) = *(_DWORD *)(v2 + 2202812);
  *((_DWORD *)pUser + 4) = *(_DWORD *)(v2 + 2202816);
  *((_DWORD *)pUser + 5) = *(_DWORD *)(v2 + 2202820);
  *((_DWORD *)pUser + 6) = *(_DWORD *)(v2 + 2202824);
  *((_DWORD *)pUser + 7) = *(_DWORD *)(v2 + 2202828);
  *((_DWORD *)pUser + 8) = *(_DWORD *)(v2 + 2202836);
  *((_DWORD *)pUser + 9) ^= (*((_DWORD *)pUser + 9) ^ *(char *)(v2 + 2202808)) & 1;
  v19 = *((_DWORD *)pUser + 9) ^ (*((_DWORD *)pUser + 9) ^ (2 * *(char *)(v2 + 2202809))) & 2;
  *((_DWORD *)pUser + 9) = v19;
  v20 = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(4 * *(_BYTE *)(v2 + 2202810))) & 4;
  *((_DWORD *)pUser + 9) = v20;
  v21 = *(_DWORD *)(v2 + 2202852);
  if ( v21 < 4 )
    LOBYTE(v3) = v21 >= 3;
  else
    v3 = 2;
  *((_DWORD *)pUser + 9) = v20 & 0xFFFFFFE7 | (8 * v3);
}

void __fastcall NetManager::SetSeatBattleInfoFromUserInfo(
        NetManager *this,
        MsgSeatRequest *pVersusSeat,
        GAME_RULE gameRule)
{
  MsgSeatRequest::<unnamed_tag>::<unnamed_type_common> common; // er10
  __int64 v5; // rsi
  int v6; // er9
  unsigned __int8 v7; // dl
  int v8; // er9
  char m_CharacterId; // cl
  unsigned __int8 v10; // cl
  int v11; // er8
  unsigned __int8 v12; // cl
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  MsgSeatRequest::<unnamed_tag>::<unnamed_type_common> v18; // er8
  __int64 v19; // rdi
  int v20; // er8
  __int64 v21; // rax
  int v22; // edx
  char *stageTelop; // rdx
  int v24; // ecx

  common = pVersusSeat->common;
  v5 = *(_QWORD *)&AppMain::pApp;
  v6 = *(_DWORD *)&pVersusSeat->common >> 7;
  v7 = 1;
  if ( (v6 & 0x7Fu) > 0xC )
    v7 = 12 * (((v6 & 0x7F) - 1) / 12) + 1;
  *((_DWORD *)&pVersusSeat->waiting + 1) = *((_DWORD *)&g_NetworkManager.gamedata.player_data[(unsigned __int8)g_NetworkManager.gamedata.myNo]
                                           + 5);
  if ( gameRule == GAME_RULE_PARTY )
  {
    *((_DWORD *)&pVersusSeat->waiting + 2) ^= (*((_DWORD *)&pVersusSeat->waiting + 2) ^ g_NetworkManager.gamedata.userInfo.m_AgencyFlag) & 1;
    pVersusSeat->common = (MsgSeatRequest::<unnamed_tag>::<unnamed_type_common>)(*(_DWORD *)&common & 0xFFFFBFFF);
    goto LABEL_15;
  }
  v8 = v6 & 0x7F;
  if ( v7 == v8 )
  {
    g_NetworkManager.gamedata.userInfo.m_Character[0].m_CharacterId = CHARACTER_NO_KYO;
LABEL_8:
    *(_WORD *)&g_NetworkManager.gamedata.userInfo.m_Character[0].m_ColorId = 0;
    goto LABEL_9;
  }
  if ( v7 + 1 == v8 )
  {
    g_NetworkManager.gamedata.userInfo.m_Character[0].m_CharacterId = CHARACTER_NO_IOR;
    goto LABEL_8;
  }
LABEL_9:
  *(_DWORD *)&pVersusSeat->common |= 0x4000u;
  m_CharacterId = g_NetworkManager.gamedata.userInfo.m_Character[0].m_CharacterId;
  *((_DWORD *)&pVersusSeat->waiting + 2) &= 0xFFFFFF81;
  *((_DWORD *)&pVersusSeat->waiting + 2) |= 2 * (m_CharacterId & 0x3F);
  v10 = g_NetworkManager.gamedata.userInfo.m_Character[0].m_CharacterId;
  if ( g_NetworkManager.gamedata.gameRule != GAME_RULE_PARTY )
    v10 = g_NetworkManager.gamedata.userInfo.m_Character[1].m_CharacterId;
  v11 = *((_DWORD *)&pVersusSeat->waiting + 2) ^ (*((_DWORD *)&pVersusSeat->waiting + 2) ^ (v10 << 7)) & 0x1F80;
  *((_DWORD *)&pVersusSeat->waiting + 2) = v11;
  v12 = g_NetworkManager.gamedata.userInfo.m_Character[0].m_CharacterId;
  if ( g_NetworkManager.gamedata.gameRule != GAME_RULE_PARTY )
    v12 = g_NetworkManager.gamedata.userInfo.m_Character[2].m_CharacterId;
  v13 = v11 ^ (v11 ^ (v12 << 13)) & 0x7E000;
  *((_DWORD *)&pVersusSeat->waiting + 2) = v13;
  v14 = v13 ^ (v13 ^ (g_NetworkManager.gamedata.userInfo.m_Character[0].m_ColorId << 19)) & 0x380000;
  *((_DWORD *)&pVersusSeat->waiting + 2) = v14;
  v15 = v14 ^ (v14 ^ (g_NetworkManager.gamedata.userInfo.m_Character[1].m_ColorId << 22)) & 0x1C00000;
  *((_DWORD *)&pVersusSeat->waiting + 2) = v15;
  v16 = v15 ^ (v15 ^ (g_NetworkManager.gamedata.userInfo.m_Character[2].m_ColorId << 25)) & 0xE000000;
  *((_DWORD *)&pVersusSeat->waiting + 2) = v16;
  v17 = v16 ^ (v16 ^ (g_NetworkManager.gamedata.userInfo.m_Character[0].m_CostumeId << 28)) & 0x30000000;
  *((_DWORD *)&pVersusSeat->waiting + 2) = v17;
  *((_DWORD *)&pVersusSeat->waiting + 2) = v17 & 0x3FFFFFFF | (g_NetworkManager.gamedata.userInfo.m_Character[1].m_CostumeId << 30);
  LOBYTE(v15) = g_NetworkManager.gamedata.userInfo.m_Character[2].m_CostumeId;
  *((_DWORD *)&pVersusSeat->waiting + 3) &= 0xFFFFFFFC;
  *((_DWORD *)&pVersusSeat->waiting + 3) |= v15 & 3;
LABEL_15:
  v18 = pVersusSeat->common;
  if ( ((*(_DWORD *)&pVersusSeat->common >> 7) & 0x7F) % 12 == 1 )
  {
    v19 = v5 + 2202784;
    pVersusSeat->common = (MsgSeatRequest::<unnamed_tag>::<unnamed_type_common>)(*(_DWORD *)&v18 | 0x8000);
    SaveRecord_PlayerData::UpdatetMyFavoriteTeamRandom((SaveRecord_PlayerData *)(v5 + 2202784));
    v21 = *(int *)(v5 + 2205300);
    if ( (*(_DWORD *)&pVersusSeat->common & 0x4000) != 0 )
    {
      v22 = *(_DWORD *)(v19 + 4 * v21 + 2520);
      if ( v22 == 31 )
        v22 = *(_DWORD *)(v5 + 2205468);
      *((_DWORD *)&pVersusSeat->waiting + 3) &= 0xFFFFFE0F;
      *((_DWORD *)&pVersusSeat->waiting + 3) |= 16 * (v22 & 0x1F);
      stageTelop = pVersusSeat->waiting.stageTelop;
    }
    else
    {
      v24 = *(_DWORD *)(v19 + 4 * v21 + 2520);
      if ( v24 == 31 )
        v24 = *(_DWORD *)(v5 + 2205468);
      *((_DWORD *)&pVersusSeat->waiting + 2) &= 0xFFFFFFC1;
      stageTelop = pVersusSeat->waitingAppendStage.stageTelop;
      *((_DWORD *)&pVersusSeat->waiting + 2) |= 2 * (v24 & 0x1F);
    }
    AppMain::GetOnlineStageTelop((AppMain *)v5, stageTelop, v20);
  }
  else
  {
    pVersusSeat->common = (MsgSeatRequest::<unnamed_tag>::<unnamed_type_common>)(*(_DWORD *)&v18 & 0xFFFF7FFF);
  }
}

char __fastcall NetManager::SitSeatRequest(
        NetManager *this,
        unsigned __int8 pNo,
        unsigned __int8 seatNo,
        SEAT_FLAG seatFlag,
        NETWORK_ROOM_BATTLE_TYPE battleType,
        BATTLE_WAIT_STATE battleWaitState,
        unsigned __int8 *pSeatNo,
        BATTLE_WAIT_STATE *pBattleWaitState)
{
  BATTLE_WAIT_STATE v11; // ebx
  int v12; // er12
  unsigned __int8 v13; // r14
  unsigned __int8 EmptySeatNo; // al
  NetManager *v15; // rcx
  NetManager *v16; // rcx
  int v17; // er8
  _BYTE *v18; // rdx
  __int64 v19; // rcx
  __int32 v21; // esi
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.m_Mutex);
  v11 = battleWaitState;
  v12 = -1;
  v13 = 0;
  if ( battleWaitState && seatFlag )
  {
    EmptySeatNo = NetManager::GetEmptySeatNo(&g_NetworkManager, seatNo, battleWaitState);
    seatNo = EmptySeatNo;
    if ( battleWaitState != BATTLE_WAIT_STATE_SPECTATOR )
      v11 = NetManager::getBattleWaitState(v15, EmptySeatNo);
    if ( pSeatNo && pBattleWaitState )
    {
      *pSeatNo = seatNo;
      *pBattleWaitState = v11;
    }
  }
  else if ( seatFlag != SEAT_FLAG_SIT || (*((_DWORD *)&g_NetworkManager.gamedata.player_data[pNo] + 4) & 0x380) != 0 )
  {
    v17 = 0;
    v18 = (char *)g_NetworkManager.gamedata.player_data + 16;
    while ( !*((_QWORD *)v18 - 2) || (*v18 & 0x7F) != seatNo )
    {
      ++v17;
      v18 += 118;
      if ( (__int64)v18 >= (__int64)&g_NetworkManager.gamedata.playerDataSub[0].updateAntennaCount + 2 )
        goto LABEL_17;
    }
    v12 = v17;
    v13 = (*((_DWORD *)&g_NetworkManager.gamedata.player_data[v17] + 3) >> 27) & 0xF;
  }
  else
  {
    seatNo = NetManager::GetEmptySeatNo(&g_NetworkManager, seatNo, battleWaitState);
    LOBYTE(v11) = NetManager::getBattleWaitState(v16, seatNo);
  }
LABEL_17:
  if ( seatNo == 0xFF )
    goto LABEL_32;
  if ( v12 == -1 )
  {
    v19 = pNo;
    *((_DWORD *)&g_NetworkManager.gamedata.player_data[v19] + 4) &= 0xFFF3FC00;
    *((_DWORD *)&g_NetworkManager.gamedata.player_data[v19] + 4) |= seatNo & 0x7F | ((seatFlag & 7 | ((v11 & 3) << 11)) << 7);
    LeaveCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.m_Mutex);
    return 1;
  }
  if ( v13 != pNo )
  {
LABEL_32:
    LeaveCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.m_Mutex);
    return 0;
  }
  if ( seatFlag == SEAT_FLAG_NONE )
  {
    v25 = pNo;
    *((_DWORD *)&g_NetworkManager.gamedata.player_data[v25] + 4) &= 0xFFF3FC00;
    *((_DWORD *)&g_NetworkManager.gamedata.player_data[v25] + 4) |= (v11 & 3) << 18;
    goto LABEL_31;
  }
  v21 = seatFlag - 1;
  if ( v21 )
  {
    if ( v21 == 1 )
    {
      if ( (*((_DWORD *)&g_NetworkManager.gamedata.player_data[v13] + 4) & 0x380) != 256 )
      {
        v22 = pNo;
        *((_DWORD *)&g_NetworkManager.gamedata.player_data[v22] + 4) &= 0xFFF3FD00;
        *((_DWORD *)&g_NetworkManager.gamedata.player_data[v22] + 4) |= ((v11 & 3) << 18) | seatNo & 0x7F | 0x100;
        NetManager::setCharacterInfoFromUserInfo((NetManager *)(v22 * 118), pNo, seatNo);
        LeaveCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.m_Mutex);
        return 1;
      }
      goto LABEL_32;
    }
LABEL_31:
    LeaveCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.m_Mutex);
    return 1;
  }
  v23 = pNo;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v23] + 4) &= 0xFFF3FC80;
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[v23] + 4) |= seatNo & 0x7F | ((v11 & 3) << 18) | 0x80;
  if ( seatNo % 0xCu != 1 )
    goto LABEL_31;
  LOBYTE(v24) = 0;
  if ( seatNo > 0xCu )
    v24 = (seatNo - 1) / 12;
  g_NetworkManager.gamedata.tableBattleType[(unsigned __int8)v24] = battleType;
  LeaveCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.m_Mutex);
  return 1;
}

char __fastcall NetManager::Startup(NetManager *this, __int64 a2, int a3)
{
  SEND_MESSAGE **v4; // rbx
  SEND_MESSAGE **v5; // rbx
  SEND_MESSAGE *v6; // rax
  AgThread *v7; // rax
  AgThread *v8; // rbp
  AgReferenceCount *v9; // rax
  int v10; // eax
  AgReferenceCount *m_refCount; // rdi
  int i; // ebx
  AgReferenceCount *m_ref; // rbx
  AgThread *m_ptr; // r14
  int v15; // edi
  AgThread *v16; // rax
  AgThread *v17; // rbp
  AgReferenceCount *v18; // rax
  int v19; // eax
  AgReferenceCount *v20; // rdi
  int j; // ebx
  AgReferenceCount *v22; // rbx
  AgThread *v23; // r14
  int v24; // edi
  AgThread *v26; // [rsp+70h] [rbp+8h]
  AgThread *v27; // [rsp+70h] [rbp+8h]

  if ( !this->m_Mutex.m_InitializeFlag )
    this->m_Mutex.m_InitializeFlag = 1;
  if ( !pSendMsg )
    pSendMsg = (SEND_MESSAGE *)aligned_malloc(0x455ui64, 0x20ui64);
  v4 = pSendMsgSub;
  do
  {
    if ( !*v4 )
      *v4 = (SEND_MESSAGE *)aligned_malloc(0x455ui64, 0x20ui64);
    ++v4;
  }
  while ( (__int64)v4 < (__int64)&pSendMsg );
  v5 = pSendMsgSub2;
  do
  {
    if ( !*v5 )
      *v5 = (SEND_MESSAGE *)aligned_malloc(0x455ui64, 0x20ui64);
    ++v5;
  }
  while ( (__int64)v5 < (__int64)g_chars );
  if ( !pSendMsgLog )
    pSendMsgLog = (SEND_MESSAGE *)aligned_malloc(0x455ui64, 0x20ui64);
  if ( !pSendVoiceMsg )
    pSendVoiceMsg = (SEND_MESSAGE *)aligned_malloc(0x455ui64, 0x20ui64);
  if ( !pRecvMsg[0] )
  {
    v6 = (SEND_MESSAGE *)aligned_malloc(0x455ui64, 0x20ui64);
    pRecvMsg[0] = v6;
    if ( v6 )
      memset(v6, 0, sizeof(SEND_MESSAGE));
  }
  if ( !this->m_Thread[0].m_ptr )
  {
    v26 = (AgThread *)operator new(0x28ui64);
    AgThread::AgThread(v26, &this->m_sendThreadHost, 0x100000ui64, -1, "SendThread");
    v8 = v7;
    if ( v7 )
    {
      if ( v7->m_refCount )
      {
        v10 = 0;
      }
      else
      {
        v9 = (AgReferenceCount *)AgReferenceCount::operator new(0x10ui64);
        if ( v9 )
        {
          v9->m_strongCount = 1;
          v9->m_weakCount = 1;
          v9->m_data = v8;
        }
        v8->m_refCount = v9;
        v10 = 1;
      }
      m_refCount = v8->m_refCount;
      if ( !v10 )
      {
        for ( i = m_refCount->m_strongCount; m_refCount->m_strongCount; i = m_refCount->m_strongCount )
        {
          if ( AgAtomicCompareExchange(&m_refCount->m_strongCount, i, i + 1) == i )
            break;
        }
      }
    }
    else
    {
      v8 = 0i64;
      m_refCount = 0i64;
    }
    m_ref = this->m_Thread[0].m_ref;
    m_ptr = this->m_Thread[0].m_ptr;
    this->m_Thread[0].m_ref = m_refCount;
    this->m_Thread[0].m_ptr = v8;
    if ( m_ref )
    {
      v15 = 0;
      if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
      {
        if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
          v15 = 1;
        m_ref->m_data = 0i64;
        if ( m_ptr )
          ((void (__fastcall *)(AgThread *, __int64))m_ptr->~AgThread)(m_ptr, 1i64);
        if ( v15 )
          AgReferenceCount::operator delete(m_ref);
      }
    }
  }
  if ( !this->m_Thread[1].m_ptr )
  {
    v27 = (AgThread *)operator new(0x28ui64);
    AgThread::AgThread(v27, &this->m_recvUDPThreadHost, 0x100000ui64, -1, "RecvThreadUdp");
    v17 = v16;
    if ( v16 )
    {
      if ( v16->m_refCount )
      {
        v19 = 0;
      }
      else
      {
        v18 = (AgReferenceCount *)AgReferenceCount::operator new(0x10ui64);
        if ( v18 )
        {
          v18->m_strongCount = 1;
          v18->m_weakCount = 1;
          v18->m_data = v17;
        }
        v17->m_refCount = v18;
        v19 = 1;
      }
      v20 = v17->m_refCount;
      if ( !v19 )
      {
        for ( j = v20->m_strongCount; v20->m_strongCount; j = v20->m_strongCount )
        {
          if ( AgAtomicCompareExchange(&v20->m_strongCount, j, j + 1) == j )
            break;
        }
      }
    }
    else
    {
      v17 = 0i64;
      v20 = 0i64;
    }
    v22 = this->m_Thread[1].m_ref;
    v23 = this->m_Thread[1].m_ptr;
    this->m_Thread[1].m_ref = v20;
    this->m_Thread[1].m_ptr = v17;
    if ( v22 )
    {
      v24 = 0;
      if ( !AgAtomicDecrement(&v22->m_strongCount) )
      {
        if ( !AgAtomicDecrement(&v22->m_weakCount) )
          v24 = 1;
        v22->m_data = 0i64;
        if ( v23 )
          ((void (__fastcall *)(AgThread *, __int64))v23->~AgThread)(v23, 1i64);
        if ( v24 )
          AgReferenceCount::operator delete(v22);
      }
    }
  }
  NetManager::ChangeState(this, NET_STATE_TOP, a3);
  this->initFlag = 1;
  return 1;
}

void __fastcall NetManager::Update(NetManager *this)
{
  ONLINE_STATE onlineState; // ebp
  int v3; // er8
  CSteamID::SteamID_t v4; // rbx
  int v5; // er8
  int v6; // ecx
  GameDataInfo *Instance; // rax
  GAME_MODE v8; // edx
  int v9; // edi
  int v10; // ebx
  EasyIndicator *v11; // rax
  int v12; // ecx
  GameDataInfo *v13; // rax
  GAME_MODE v14; // edx
  int v15; // edi
  int v16; // ebx
  EasyIndicator *v17; // rax
  NETWORK_ERROR_TYPE error; // eax
  int *speakFlag; // rcx
  __int64 v20; // r8
  double v21; // xmm0_8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbx
  SEND_MESSAGE pMsg; // [rsp+30h] [rbp-468h] BYREF

  onlineState = this->gamedata.onlineState;
  NetManager::disconnectCheck(this);
  switch ( onlineState )
  {
    case NET_STATE_TOP:
      NetManager::updateTop(this);
      break;
    case NET_STATE_CREATINGROOM:
      NetManager::updateCreatingRoom(this);
      break;
    case NET_STATE_CREATECOMPLETE:
      NetManager::ChangeState(this, NET_STATE_WAITCLIENT, v3);
      break;
    case NET_STATE_WAITCLIENT:
      NetManager::checkRoomMemberAntenna(this);
      if ( this->gamedata.matchMode == NETWORK_MATCHING_TYPE_RANK
        && this->gamedata.roomPlayerCount >= 2u
        && NetManager::isTimeout(this, 0x989680ui64) )
      {
        NetManager::KickoutRoomMember(this, 1u);
      }
      break;
    case NET_STATE_SEARCHINGROOM:
      NetManager::updateSearchingRoom(this);
      break;
    case NET_STATE_SELECTROOM:
    case NET_STATE_ORDERSELECT:
    case NET_STATE_CHARACTERSELECT:
    case NET_STATE_CHARACTERSELECT_NOT_PARTY:
    case NET_STATE_GAMERESULT:
    case NET_STATE_ERROR:
      break;
    case NET_STATE_JOIN_ROOM:
      NetManager::updateJoiningRoom(this);
      break;
    case NET_STATE_JOIN_COMPLETE:
      v4.m_comp = Fw::MatchingTarget::m_RoomId.m_steamid.m_comp;
      if ( NetManager::isTimeout(this, 0x2FAF080ui64) )
      {
        if ( v4.m_unAll64Bits )
          Fw::MatchingTarget::LeaveRoom();
        NetManager::ChangeState(this, NET_STATE_TOP, v5);
        this->gamedata.error = NETWORK_ERROR_TYPE_ROOMNOTFOUND;
      }
      else if ( v4.m_unAll64Bits )
      {
        NetManager::ChangeState(this, NET_STATE_WAITSTART, v5);
      }
      break;
    case NET_STATE_WAITSTART:
      NetManager::updateWaitStart(this);
      break;
    case NET_STATE_BATTLELOADING:
      v6 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 7352i64);
      if ( v6 == 179 || v6 == 184 )
      {
        Instance = GameDataInfo::getInstance();
        v8 = Instance->m_GameMode[Instance->m_GameModeIndex];
        if ( ((unsigned int)(v8 - 4) <= 2 || v8 == GAME_MODE_ONLINETRAINING)
          && !GameDataInfo::getInstance()->m_ReplayFlag )
        {
          v9 = 920 * GAME_SCREEN_HEIGHT / 1080;
          v10 = 1760 * GAME_SCREEN_WIDTH / 1920;
          v11 = EasyIndicator::getInstance();
          EasyIndicator::RequestDraw(v11, v10, v9, TYPE_CONNECTING);
        }
      }
      break;
    case NET_STATE_BATTLELOADINGEND:
      v12 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 7352i64);
      if ( v12 == 179 || v12 == 184 )
      {
        v13 = GameDataInfo::getInstance();
        v14 = v13->m_GameMode[v13->m_GameModeIndex];
        if ( ((unsigned int)(v14 - 4) <= 2 || v14 == GAME_MODE_ONLINETRAINING)
          && !GameDataInfo::getInstance()->m_ReplayFlag )
        {
          v15 = 920 * GAME_SCREEN_HEIGHT / 1080;
          v16 = 1760 * GAME_SCREEN_WIDTH / 1920;
          v17 = EasyIndicator::getInstance();
          EasyIndicator::RequestDraw(v17, v16, v15, TYPE_CONNECTING);
        }
      }
      if ( this->gamedata.playerDataSub[(unsigned __int8)this->gamedata.myNo].advanceFlag == 2 )
        NetManager::ChangeState(this, NET_STATE_READYGAME, v3);
      break;
    case NET_STATE_READYGAME:
      NetManager::ChangeState(this, NET_STATE_BATTLE, v3);
      break;
    case NET_STATE_BATTLE:
      NetManager::updateBattle(this);
      break;
    case NET_STATE_LEAVEROOM:
      if ( this->gamedata.sendFrequency[17] <= 0 )
      {
        if ( this->gamedata.leaveRoomFlag )
        {
          if ( !*(_QWORD *)&Fw::MatchingTarget::m_RoomId.m_steamid.m_comp )
            NetManager::ChangeState(this, NET_STATE_TOP, v3);
        }
        else
        {
          Fw::MatchingTarget::LeaveRoom();
          this->gamedata.leaveRoomFlag = 1;
        }
      }
      break;
    case NET_STATE_TRAININGWAIT:
      NetManager::CreateRoom(this, &this->gamedata.m_TraingWaitRoomAttr);
      break;
    default:
      error = this->gamedata.error;
      if ( (unsigned int)error > NETWORK_ERROR_TYPE_CONNECTION && error != NETWORK_ERROR_TYPE_TIMEOUT )
        this->gamedata.error = NETWORK_ERROR_TYPE_NONE;
      break;
  }
  speakFlag = this->gamedata.speakFlag;
  v20 = 12i64;
  do
  {
    if ( *speakFlag > 0 )
      --*speakFlag;
    ++speakFlag;
    --v20;
  }
  while ( v20 );
  NetManager::errorCheck(this, onlineState);
  v21 = AgClock::getSystemTime() * 1000000.0;
  v22 = 0i64;
  if ( v21 >= 9.223372036854776e18 )
  {
    v21 = v21 - 9.223372036854776e18;
    if ( v21 < 9.223372036854776e18 )
      v22 = 0x8000000000000000ui64;
  }
  v23 = v22 + (unsigned int)(int)v21;
  if ( v23 > this->m_nextPingTick )
  {
    pMsg.msgType = 26;
    this->m_nextPingTick = v23 + 1000000;
    pMsg.msgJoinRequest.joinId.data = v22 + (unsigned int)(int)v21;
    NetManager::SendMessageW(this, &pMsg, 0i64, 1, 0);
  }
  if ( v23 > this->m_nextQOSRequestTick )
  {
    this->m_nextQOSRequestTick = v23 + 1000000;
    Fw::MatchingTarget::SendQOSRequest();
  }
}

void __fastcall NetManager::UpdateSeatBattleWait(NetManager *this, MsgSeatRequest *pMsgSeatRequest)
{
  _DWORD *v2; // r10
  unsigned __int8 v3; // si
  int v4; // er11
  __int64 v6; // r8
  _BYTE *i; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  char *v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned __int8 v18; // dl
  unsigned int v19; // er8
  MsgSeatRequest::<unnamed_tag>::<unnamed_type_common> common; // eax
  char v21; // al
  int v22; // ecx
  unsigned __int8 v23; // dl
  unsigned __int8 v24; // bp
  GAME_RULE gameRule; // ecx
  unsigned __int8 v26; // r8
  __int32 v27; // ecx
  __int32 v28; // ecx
  char v29; // r9
  unsigned int v30; // edi
  __int64 v31; // r11
  unsigned int v32; // edx
  SEND_MESSAGE *v33; // rdx
  int v34; // ecx

  v2 = (_DWORD *)((char *)this->gamedata.player_data + 16);
  v3 = *(_BYTE *)&pMsgSeatRequest->common & 0xF;
  v4 = 0;
  v6 = 0i64;
  for ( i = (char *)this->gamedata.player_data + 16;
        !*((_QWORD *)i - 2)
     || ((*i ^ (unsigned __int8)(*(_DWORD *)&pMsgSeatRequest->common >> 7)) & 0x7F) != 0
     || ((*((_DWORD *)i - 1) >> 27) & 0xF) != v3;
        i += 118 )
  {
    ++v4;
    if ( ++v6 >= 12 )
      return;
  }
  if ( (*((_DWORD *)&this->gamedata.player_data[v4] + 4) & 0x380) != 384 )
  {
    v9 = v3;
    *((_DWORD *)&this->gamedata.player_data[v9] + 4) ^= (*((_DWORD *)&this->gamedata.player_data[v9] + 4) ^ (8 * *(_DWORD *)&pMsgSeatRequest->common)) & 0x380;
    if ( (*(_DWORD *)&pMsgSeatRequest->common & 0x4000) != 0 )
    {
      v10 = v3;
      v11 = (*((_DWORD *)&pMsgSeatRequest->waiting + 2) >> 1) & 0x3F;
      *((_DWORD *)&this->gamedata.player_data[v10] + 2) &= 0xFFFFFFC0;
      *((_DWORD *)&this->gamedata.player_data[v10] + 2) |= v11;
      v12 = ((*((_DWORD *)&pMsgSeatRequest->waiting + 2) >> 7) & 0x3F) << 14;
      v13 = (char *)this + v10 * 118;
      *(_DWORD *)(v13 + 1465) &= 0xFFF03FFF;
      *(_DWORD *)(v13 + 1465) |= v12;
      v14 = *((_DWORD *)&pMsgSeatRequest->waitingAppendStage + 2);
      *(_DWORD *)(v13 + 1469) &= 0xFFFFFFC0;
      *(_DWORD *)(v13 + 1469) |= (v14 >> 13) & 0x3F;
      v15 = *((_DWORD *)&pMsgSeatRequest->waitingAppendStage + 2);
      *(_DWORD *)(v13 + 1465) &= 0xFFFFFE3F;
      *(_DWORD *)(v13 + 1465) |= ((v15 >> 19) & 7) << 6;
      *(_DWORD *)(v13 + 1465) = *(_DWORD *)(v13 + 1465) & 0xFF8FFFFF | (((*((_DWORD *)&pMsgSeatRequest->waiting + 2) >> 22) & 7) << 20);
      v16 = *((_DWORD *)&pMsgSeatRequest->waitingAppendStage + 2);
      *(_DWORD *)(v13 + 1469) &= 0xFFFFFE3F;
      *(_DWORD *)(v13 + 1469) |= ((v16 >> 25) & 7) << 6;
      v17 = *((_DWORD *)&pMsgSeatRequest->waitingAppendStage + 2);
      *(_DWORD *)(v13 + 1465) &= 0xFFFFF9FF;
      *(_DWORD *)(v13 + 1465) |= ((v17 >> 28) & 3) << 9;
      v18 = 1;
      *(_DWORD *)(v13 + 1465) &= 0xFE7FFFFF;
      LOBYTE(v17) = pMsgSeatRequest->waitingAppendStage.stageTelop[0];
      *(_DWORD *)(v13 + 1469) &= 0xFFFFF9FF;
      *(_DWORD *)(v13 + 1469) |= (v17 & 3) << 9;
      *((_DWORD *)&this->gamedata.player_data[v9] + 5) = *((_DWORD *)&pMsgSeatRequest->waiting + 1);
      if ( ((*(_DWORD *)&pMsgSeatRequest->common >> 7) & 0x7Fu) > 0xC )
        v18 = 12 * ((((*(_DWORD *)&pMsgSeatRequest->common >> 7) & 0x7F) - 1) / 12) + 1;
      v19 = (*(_DWORD *)&pMsgSeatRequest->common >> 7) & 0x7F;
      if ( v18 <= v19 && v19 < (unsigned __int8)(v18 + 12) )
      {
        if ( v18 == v19 )
          *((_DWORD *)&this->gamedata.player_data[v9] + 4) &= ~0x100000u;
        else
          *((_DWORD *)&this->gamedata.player_data[v9] + 4) |= 0x100000u;
      }
    }
    common = pMsgSeatRequest->common;
    if ( (*(_DWORD *)&pMsgSeatRequest->common & 0x8000) != 0 )
    {
      if ( (*(_WORD *)&common & 0x4000) != 0 )
      {
        *((_DWORD *)&this->gamedata.player_data[v9] + 4) ^= (*((_DWORD *)&this->gamedata.player_data[v9] + 4) ^ (*((_DWORD *)&pMsgSeatRequest->waiting + 3) << 6)) & 0x7C00;
        *(_OWORD *)this->gamedata.player_data[v9].stageTelop = *(_OWORD *)&pMsgSeatRequest->waitingAppendStage.stageTelop[4];
        *(_OWORD *)&this->gamedata.player_data[v9].stageTelop[16] = *(_OWORD *)&pMsgSeatRequest->waitingAppendStage.stageTelop[20];
        *(_OWORD *)&this->gamedata.player_data[v9].stageTelop[32] = *(_OWORD *)&pMsgSeatRequest->waitingAppendStage.stageTelop[36];
        *(_QWORD *)&this->gamedata.player_data[v9].stageTelop[48] = *(_QWORD *)&pMsgSeatRequest->waitingAppendStage.stageTelop[52];
        *(_DWORD *)&this->gamedata.player_data[v9].stageTelop[56] = *(_DWORD *)&pMsgSeatRequest->waitingAppendStage.stageTelop[60];
        v21 = pMsgSeatRequest->waiting.stageTelop[60];
      }
      else
      {
        *((_DWORD *)&this->gamedata.player_data[v9] + 4) ^= (*((_DWORD *)&this->gamedata.player_data[v9] + 4) ^ (*((_DWORD *)&pMsgSeatRequest->waiting + 2) << 30)) & 0x40000000;
        v22 = *((_DWORD *)&this->gamedata.player_data[v9] + 4);
        *((_DWORD *)&this->gamedata.player_data[v9] + 5) = *((_DWORD *)&pMsgSeatRequest->waiting + 1);
        *((_DWORD *)&this->gamedata.player_data[v9] + 4) = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)&pMsgSeatRequest->waiting + 2) << 9)) & 0x7C00;
        *(_OWORD *)this->gamedata.player_data[v9].stageTelop = *(_OWORD *)pMsgSeatRequest->waitingAppendStage.stageTelop;
        *(_OWORD *)&this->gamedata.player_data[v9].stageTelop[16] = *(_OWORD *)&pMsgSeatRequest->waitingAppendStage.stageTelop[16];
        *(_OWORD *)&this->gamedata.player_data[v9].stageTelop[32] = *(_OWORD *)&pMsgSeatRequest->waitingAppendStage.stageTelop[32];
        *(_QWORD *)&this->gamedata.player_data[v9].stageTelop[48] = *(_QWORD *)&pMsgSeatRequest->waitingAppendStage.stageTelop[48];
        *(_DWORD *)&this->gamedata.player_data[v9].stageTelop[56] = *(_DWORD *)&pMsgSeatRequest->waitingAppendStage.stageTelop[56];
        v21 = pMsgSeatRequest->waiting.stageTelop[56];
      }
      this->gamedata.player_data[v9].stageTelop[60] = v21;
    }
    else if ( (*(_WORD *)&common & 0x4000) == 0 )
    {
      *((_DWORD *)&this->gamedata.player_data[v9] + 4) ^= (*((_DWORD *)&this->gamedata.player_data[v9] + 4) ^ (*((_DWORD *)&pMsgSeatRequest->waiting + 2) << 30)) & 0x40000000;
      *((_DWORD *)&this->gamedata.player_data[v9] + 5) = *((_DWORD *)&pMsgSeatRequest->waiting + 1);
    }
    v23 = 1;
    v24 = (*(_DWORD *)&pMsgSeatRequest->common >> 7) & 0x7F;
    if ( v24 > 0xCu )
      v23 = 12 * ((((*(_DWORD *)&pMsgSeatRequest->common >> 7) & 0x7F) - 1) / 12) + 1;
    gameRule = this->gamedata.gameRule;
    v26 = 0;
    if ( gameRule )
    {
      v27 = gameRule - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( !v28 )
        {
          v26 = 6;
LABEL_30:
          v29 = 0;
          v30 = v23;
          v31 = 12i64;
          do
          {
            v32 = *v2 & 0x7F;
            if ( v30 <= v32 && v32 < v30 + v26 && (*v2 & 0x380) == 256 )
              ++v29;
            v2 = (_DWORD *)((char *)v2 + 118);
            --v31;
          }
          while ( v31 );
          if ( v26 == v29 )
            NetManager::SendReadyTableBattleStart(this, v24, 0i64);
          v33 = pSendMsgSub2[v3 % 0xCu];
          v33->msgType = 5;
          v33->msgBattleCommand.time &= 0xFFFFFFF0;
          v33->msgBattleCommand.time |= v3;
          v34 = v33->msgBattleCommand.time ^ (v33->msgBattleCommand.time ^ (*((_DWORD *)&this->gamedata.player_data[v9]
                                                                            + 4) << 7)) & 0x3F80;
          v33->msgBattleCommand.time = v34;
          v33->msgBattleCommand.time = v34 & 0xFFFF3F8F | (*((_DWORD *)&this->gamedata.player_data[v9] + 4) >> 3) & 0x70;
          NetManager::SendMessageW(this, v33, 0i64, 1, 0);
          return;
        }
        if ( v28 != 1 )
          goto LABEL_30;
      }
    }
    v26 = 2;
    goto LABEL_30;
  }
}

void __fastcall NetManager::UpdateSeatLeave(NetManager *this, unsigned __int8 pno, SEND_MESSAGE *pMsg)
{
  int v6; // eax
  __int64 v7; // r10
  unsigned __int8 v8; // r8

  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_Mutex);
  v6 = 0;
  while ( 1 )
  {
    v7 = v6;
    if ( this->gamedata.player_data[v7].steamId )
    {
      if ( ((*((_DWORD *)&this->gamedata.player_data[v7] + 3) >> 27) & 0xF) == pno )
        break;
    }
    if ( ++v6 >= 12 )
      goto LABEL_10;
  }
  if ( (*((_DWORD *)&this->gamedata.player_data[v6] + 4) & 0x380) != 384 && (_BYTE)v6 != 0xFF )
  {
    v8 = *((_BYTE *)&this->gamedata.player_data[(char)v6] + 16) & 0x7F;
    *((_DWORD *)&this->gamedata.player_data[pno] + 4) &= 0xFFF3FC00;
    if ( NetManager::UpdateSeatLeaveSeat(this, pno, v8, pMsg) )
      NetManager::SendMessageW(this, pMsg, 0i64, 1, 0);
  }
LABEL_10:
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_Mutex);
}

bool __fastcall NetManager::UpdateSeatLeaveSeat(
        NetManager *this,
        unsigned __int8 pno,
        unsigned __int8 seatNo,
        SEND_MESSAGE *pMsg)
{
  unsigned __int8 v7; // dl
  GAME_RULE gameRule; // ecx
  unsigned __int8 v10; // di
  char v11; // r11
  __int32 v12; // ecx
  __int32 v13; // ecx
  unsigned __int8 v14; // r11
  int *v15; // r9
  int *v16; // r10
  __int64 v17; // rsi
  __int64 v18; // rbx
  int v19; // ecx
  char *v20; // r8
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // edx
  unsigned int v25; // eax
  unsigned __int8 v26; // al
  char *v27; // r8
  int v28; // ecx
  int v29; // edx

  v7 = 1;
  if ( seatNo > 0xCu )
    v7 = 12 * ((seatNo - 1) / 12) + 1;
  gameRule = this->gamedata.gameRule;
  v10 = v7 + 12;
  v11 = 0;
  if ( gameRule == GAME_RULE_SINGLE || (v12 = gameRule - 1) == 0 )
  {
LABEL_7:
    v11 = 2;
    goto LABEL_8;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 != 1 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v11 = 6;
LABEL_8:
  pMsg->msgBattleCommand.time &= 0xFFFFFFF0;
  v14 = v7 + v11;
  if ( v7 <= seatNo && seatNo < v10 )
  {
    v15 = (int *)((char *)this->gamedata.player_data + 16);
    v16 = v15;
    v17 = 12i64;
    v18 = 12i64;
    do
    {
      if ( *((_QWORD *)v16 - 2) )
      {
        v19 = ((unsigned int)*(v16 - 1) >> 27) & 0xF;
        if ( v19 == pno )
        {
          v20 = (char *)pMsg + 4 * (pMsg->msgBattleCommand.time & 0xF);
          v21 = v19 | *(_DWORD *)(v20 + 5) & 0xFFFFFFF0;
          *(_DWORD *)(v20 + 5) = v21;
          v22 = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)(16 * *v16)) & 0x7F0;
          *(_DWORD *)(v20 + 5) = v22;
          v23 = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)(16 * *v16)) & 0x3800;
          *(_DWORD *)(v20 + 5) = v23;
          *(_DWORD *)(v20 + 5) = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)((unsigned int)*v16 >> 4)) & 0xC000;
          pMsg->msgBattleCommand.time ^= ((unsigned __int8)pMsg->msgBattleCommand.time ^ (unsigned __int8)(pMsg->msgBattleCommand.time + 1)) & 0xF;
        }
      }
      v16 = (int *)((char *)v16 + 118);
      --v18;
    }
    while ( v18 );
    if ( v14 <= seatNo )
    {
      do
      {
        if ( *((_QWORD *)v15 - 2) )
        {
          v24 = *v15;
          v25 = *v15 & 0x7F;
          if ( seatNo < v25 && v25 < v10 && (v24 & 0xC0000) == 0x40000 )
          {
            v26 = v24 - 1;
          }
          else
          {
            if ( v14 > v25 || v25 >= v10 || (v24 & 0xC0000) != 0x80000 || v25 >= seatNo )
              goto LABEL_28;
            v26 = v24 + 1;
          }
          *v15 = v24 ^ ((unsigned __int8)v24 ^ v26) & 0x7F;
          v27 = (char *)pMsg + 4 * (pMsg->msgBattleCommand.time & 0xF);
          *(_DWORD *)(v27 + 5) ^= (*(_DWORD *)(v27 + 5) ^ ((unsigned int)*(v15 - 1) >> 27)) & 0xF;
          v28 = *(_DWORD *)(v27 + 5) ^ (*(_DWORD *)(v27 + 5) ^ (16 * *v15)) & 0x7F0;
          *(_DWORD *)(v27 + 5) = v28;
          v29 = v28 ^ ((unsigned __int16)v28 ^ (unsigned __int16)(16 * *v15)) & 0x3800;
          *(_DWORD *)(v27 + 5) = v29;
          *(_DWORD *)(v27 + 5) = v29 ^ ((unsigned __int16)v29 ^ (unsigned __int16)((unsigned int)*v15 >> 4)) & 0xC000;
          pMsg->msgBattleCommand.time ^= ((unsigned __int8)pMsg->msgBattleCommand.time ^ (unsigned __int8)(pMsg->msgBattleCommand.time + 1)) & 0xF;
        }
LABEL_28:
        v15 = (int *)((char *)v15 + 118);
        --v17;
      }
      while ( v17 );
    }
  }
  pMsg->msgType = 8;
  return (pMsg->msgJoinComplete.memberNum & 0xF) != 0;
}

void __fastcall NetManager::UpdateSeatSit(
        NetManager *this,
        unsigned __int8 pno,
        unsigned __int8 seatNo,
        SEAT_FLAG seatFlag,
        BATTLE_WAIT_STATE battleWaitState,
        NETWORK_ROOM_BATTLE_TYPE battleType,
        SEND_MESSAGE *pMsg,
        bool backRoomFlag)
{
  int v11; // eax
  __int64 v12; // r10
  __int64 v13; // r8
  _BYTE *v14; // rdx
  __int32 v15; // er14
  char *v16; // rdx
  int v17; // edx
  unsigned __int32 v18; // er8

  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_Mutex);
  v11 = 0;
  while ( 1 )
  {
    v12 = v11;
    if ( this->gamedata.player_data[v12].steamId )
    {
      if ( ((*((_DWORD *)&this->gamedata.player_data[v12] + 3) >> 27) & 0xF) == pno )
        break;
    }
    if ( ++v11 >= 12 )
      goto LABEL_23;
  }
  if ( (backRoomFlag || (*((_DWORD *)&this->gamedata.player_data[v11] + 4) & 0x380) != 384) && (_BYTE)v11 != 0xFF )
  {
    if ( battleWaitState )
    {
      if ( backRoomFlag || (seatNo = NetManager::GetEmptySeatNo(this, seatNo, battleWaitState), seatNo != 0xFF) )
      {
LABEL_18:
        v15 = battleWaitState & 3;
        v16 = (char *)this + 118 * pno;
        *(_DWORD *)(v16 + 1473) &= 0xFFFFFF80;
        *(_DWORD *)(v16 + 1473) = (v15 << 18) | seatNo & 0x7F | *(_DWORD *)(v16 + 1473) & 0xFFF3FCFF | 0x80;
        if ( seatNo % 0xCu == 1 )
        {
          LOBYTE(v17) = 0;
          if ( seatNo > 0xCu )
            v17 = (seatNo - 1) / 12;
          this->gamedata.tableBattleType[(unsigned __int8)v17] = battleType;
        }
        pMsg->msgBattleCommand.time &= 0xFFFF80F0;
        v18 = (pMsg->msgBattleCommand.time | ((seatNo & 0x7F) << 8)) & 0xFFF07F9F | ((v15 | (4 * (battleType & 7))) << 15);
        pMsg->msgType = 5;
        pMsg->msgBattleCommand.time = pno & 0xF | v18 | 0x10;
        NetManager::SendMessageW(this, pMsg, 0i64, 1, 0);
      }
    }
    else
    {
      v13 = 0i64;
      v14 = (char *)this->gamedata.player_data + 16;
      while ( !*((_QWORD *)v14 - 2) || (*v14 & 0x7F) != seatNo || ((*((_DWORD *)v14 - 1) >> 27) & 0xF) == pno )
      {
        ++v13;
        v14 += 118;
        if ( v13 >= 12 )
          goto LABEL_18;
      }
    }
  }
LABEL_23:
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_Mutex);
}

void __fastcall NetManager::checkRoomMemberAntenna(NetManager *this)
{
  char myNo; // r14
  int *p_updateAntennaCount; // rdi
  _DWORD *v4; // rbx
  __int64 v5; // rsi
  char v7; // al

  myNo = this->gamedata.myNo;
  p_updateAntennaCount = &this->gamedata.playerDataSub[0].updateAntennaCount;
  v4 = (_DWORD *)((char *)this->gamedata.player_data + 12);
  v5 = 12i64;
  do
  {
    if ( (unsigned __int8)Fw::MatchingTarget::IsAliveMember(*(_QWORD *)(v4 - 3))
      && myNo != ((*v4 >> 27) & 0xF)
      && ++*p_updateAntennaCount >= 0 )
    {
      v7 = NetManager::CalcFreeMAtchMemberAntenna(this, (*v4 >> 27) & 0xF);
      v4[1] &= 0xFFFC7FFF;
      v4[1] |= (v7 & 7) << 15;
      *p_updateAntennaCount = 0;
    }
    v4 = (_DWORD *)((char *)v4 + 118);
    p_updateAntennaCount = (int *)((char *)p_updateAntennaCount + 35);
    --v5;
  }
  while ( v5 );
}

void __fastcall NetManager::clearOrderTable2(
        NetManager *this,
        unsigned __int8 startSeatNo,
        unsigned __int8 endSeatNo,
        bool clearFix)
{
  _DWORD *v4; // rax
  __int64 v8; // r11
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // er8

  v4 = (_DWORD *)((char *)this->gamedata.player_data + 16);
  v8 = 12i64;
  do
  {
    if ( *((_QWORD *)v4 - 2) )
    {
      v9 = *v4 & 0x7F;
      if ( startSeatNo <= v9 && v9 < endSeatNo )
      {
        v10 = *(v4 - 2) & 0xF9FFE7FF;
        v11 = *(v4 - 1) & 0xFFFFE7FF;
        *(v4 - 2) = v10;
        *(v4 - 1) = v11;
        if ( clearFix )
        {
          *(v4 - 2) = v10 & 0xF7FFDFFF;
          *(v4 - 1) = v11 & 0xFFFFDFFF;
          if ( startSeatNo == v9 )
          {
            this->gamedata.userInfo.m_Character[0].m_CharacterId = CHARACTER_NO_KYO;
            *(_WORD *)&this->gamedata.userInfo.m_Character[0].m_ColorId = 0;
            *(v4 - 2) &= 0xFFFFF800;
          }
          else if ( startSeatNo + 1 == v9 )
          {
            this->gamedata.userInfo.m_Character[0].m_CharacterId = CHARACTER_NO_IOR;
            *(_WORD *)&this->gamedata.userInfo.m_Character[0].m_ColorId = 0;
            *(v4 - 2) = *(v4 - 2) & 0xFFFFF800 | 0xC;
          }
        }
      }
    }
    v4 = (_DWORD *)((char *)v4 + 118);
    --v8;
  }
  while ( v8 );
}

void __fastcall NetManager::clearOrderTable3(NetManager *this, unsigned __int8 startSeatNo, unsigned __int8 endSeatNo)
{
  unsigned __int64 *p_resultMenuClearTick; // rdi
  _DWORD *v4; // rbx
  __int64 v7; // rsi
  unsigned int v8; // ecx
  double v9; // xmm0_8
  unsigned __int64 v10; // rcx

  p_resultMenuClearTick = &this->gamedata.playerDataSub[0].resultMenuClearTick;
  v4 = (_DWORD *)((char *)this->gamedata.player_data + 16);
  v7 = 12i64;
  do
  {
    if ( *((_QWORD *)v4 - 2) )
    {
      v8 = *v4 & 0x7F;
      if ( startSeatNo <= v8 && v8 < endSeatNo )
      {
        *((_BYTE *)p_resultMenuClearTick - 15) = -1;
        v9 = AgClock::getSystemTime() * 1000000.0;
        v10 = 0i64;
        if ( v9 >= 9.223372036854776e18 )
        {
          v9 = v9 - 9.223372036854776e18;
          if ( v9 < 9.223372036854776e18 )
            v10 = 0x8000000000000000ui64;
        }
        *p_resultMenuClearTick = v10 + (unsigned int)(int)v9;
      }
    }
    v4 = (_DWORD *)((char *)v4 + 118);
    p_resultMenuClearTick = (unsigned __int64 *)((char *)p_resultMenuClearTick + 35);
    --v7;
  }
  while ( v7 );
}

void __fastcall NetManager::clearOrderTable(
        NetManager *this,
        unsigned __int8 startSeatNo,
        unsigned __int8 endSeatNo,
        bool clearFix)
{
  unsigned __int64 *p_resultMenuClearTick; // rsi
  _DWORD *v5; // rbx
  __int64 v10; // rbp
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // edx
  double v14; // xmm0_8
  unsigned __int64 v15; // rcx

  p_resultMenuClearTick = &this->gamedata.playerDataSub[0].resultMenuClearTick;
  v5 = (_DWORD *)((char *)this->gamedata.player_data + 16);
  v10 = 12i64;
  do
  {
    if ( *((_QWORD *)v5 - 2) )
    {
      v11 = *v5 & 0x7F;
      if ( startSeatNo <= v11 && v11 < endSeatNo )
      {
        v12 = *(v5 - 2) & 0xF9FFE7FF;
        v13 = *(v5 - 1) & 0xFFFFE7FF;
        *(v5 - 2) = v12;
        *(v5 - 1) = v13;
        if ( clearFix )
        {
          *(v5 - 2) = v12 & 0xF7FFDFFF;
          *(v5 - 1) = v13 & 0xFFFFDFFF;
          if ( startSeatNo == v11 )
          {
            this->gamedata.userInfo.m_Character[0].m_CharacterId = CHARACTER_NO_KYO;
            *(_WORD *)&this->gamedata.userInfo.m_Character[0].m_ColorId = 0;
            *(v5 - 2) &= 0xFFFFF800;
          }
          else if ( startSeatNo + 1 == v11 )
          {
            this->gamedata.userInfo.m_Character[0].m_CharacterId = CHARACTER_NO_IOR;
            *(_WORD *)&this->gamedata.userInfo.m_Character[0].m_ColorId = 0;
            *(v5 - 2) = *(v5 - 2) & 0xFFFFF800 | 0xC;
          }
        }
        *((_BYTE *)p_resultMenuClearTick - 15) = -1;
        v14 = AgClock::getSystemTime() * 1000000.0;
        v15 = 0i64;
        if ( v14 >= 9.223372036854776e18 )
        {
          v14 = v14 - 9.223372036854776e18;
          if ( v14 < 9.223372036854776e18 )
            v15 = 0x8000000000000000ui64;
        }
        *p_resultMenuClearTick = v15 + (unsigned int)(int)v14;
      }
    }
    v5 = (_DWORD *)((char *)v5 + 118);
    p_resultMenuClearTick = (unsigned __int64 *)((char *)p_resultMenuClearTick + 35);
    --v10;
  }
  while ( v10 );
}

void __fastcall NetManager::clearPlayerData(NetManager *this, int idx)
{
  NET_USER_DATA *player_data; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax

  player_data = this->gamedata.player_data;
  if ( idx == -1 )
  {
    memset(player_data, 0, 0x72Cui64);
  }
  else
  {
    v4 = idx;
    v5 = idx;
    memset(&player_data[v5], 0, sizeof(NET_USER_DATA));
    v6 = v4;
    *(_QWORD *)&this->gamedata.playerDataSub[v6].advanceFlag = 0i64;
    *(unsigned __int64 *)((char *)&this->gamedata.playerDataSub[v6].lastRecvTime + 4) = 0i64;
    *(_QWORD *)((char *)&this->gamedata.playerDataSub[v6].updateAntennaCount + 2) = 0i64;
    *(unsigned __int64 *)((char *)&this->gamedata.playerDataSub[v6].disconnectTick + 5) = 0i64;
    *(_WORD *)((char *)&this->gamedata.playerDataSub[v6].resultMenuClearTick + 5) = 0;
    HIBYTE(this->gamedata.playerDataSub[v6].resultMenuClearTick) = 0;
    *((_DWORD *)&this->gamedata.player_data[v5] + 5) = 2068357982;
  }
}

void __fastcall NetManager::convertRoomMemberFromUserData(NetManager *this, ROOM_USER_DATA *pDest, NET_USER_DATA *pSrc)
{
  int v5; // ecx
  int v6; // edx
  int v7; // er10
  unsigned __int8 v8; // al
  int v9; // ecx
  int v10; // edx
  char *country; // rax
  char v12; // cl

  pDest->steamId = pSrc->steamId;
  *((_DWORD *)pDest + 2) ^= (*((_DWORD *)pDest + 2) ^ (*((_DWORD *)pSrc + 3) >> 14)) & 0x7F;
  v6 = *((_DWORD *)pDest + 2) ^ (*((_DWORD *)pDest + 2) ^ (*((_DWORD *)pSrc + 3) >> 14)) & 0x1F80;
  *((_DWORD *)pDest + 2) = v6;
  v5 = v6 ^ (v6 ^ (*((_DWORD *)pSrc + 4) >> 8)) & 0x3FE000;
  LOBYTE(v6) = 0;
  *((_DWORD *)pDest + 2) = v5;
  *((_DWORD *)pDest + 2) = v5 ^ (v5 ^ (*((_DWORD *)pSrc + 3) >> 5)) & 0x3C00000;
  *((_DWORD *)pDest + 3) ^= (*((_DWORD *)pSrc + 4) ^ *((_DWORD *)pDest + 3)) & 0x7F;
  v7 = *((_DWORD *)pDest + 3) ^ (*((_DWORD *)pSrc + 4) ^ *((_DWORD *)pDest + 3)) & 0x380;
  *((_DWORD *)pDest + 3) = v7;
  v8 = *((_BYTE *)pSrc + 16) & 0x7F;
  if ( v8 > 0xCu )
    v6 = (v8 - 1) / 12;
  v9 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)((unsigned __int16)this->gamedata.tableBattleType[(unsigned __int8)v6] << 10)) & 0x1C00;
  *((_DWORD *)pDest + 3) = v9;
  v10 = v9 ^ ((unsigned __int16)v9 ^ (unsigned __int16)(*((_DWORD *)pSrc + 4) >> 5)) & 0x6000;
  *((_DWORD *)pDest + 3) = v10;
  *((_DWORD *)pDest + 3) = v10 ^ (v10 ^ (*((_DWORD *)pSrc + 12) << 12)) & 0x18000;
  country = pSrc->country;
  do
  {
    v12 = *country;
    country[pDest->country - pSrc->country] = *country;
    ++country;
  }
  while ( v12 );
}

void __fastcall NetManager::convertRoomMemberFromUserData(
        NetManager *this,
        ROOM_USER_DATA_RANK *pDest,
        NET_USER_DATA *pSrc)
{
  int v5; // ecx
  int v6; // edx
  int v7; // er10
  unsigned __int8 v8; // al
  int v9; // ecx
  int v10; // edx
  char *country; // rax
  char v12; // cl

  pDest->steamId = pSrc->steamId;
  *((_DWORD *)pDest + 2) ^= (*((_DWORD *)pDest + 2) ^ (*((_DWORD *)pSrc + 3) >> 14)) & 0x7F;
  v6 = *((_DWORD *)pDest + 2) ^ (*((_DWORD *)pDest + 2) ^ (*((_DWORD *)pSrc + 3) >> 14)) & 0x1F80;
  *((_DWORD *)pDest + 2) = v6;
  v5 = v6 ^ (v6 ^ (*((_DWORD *)pSrc + 4) >> 8)) & 0x3FE000;
  LOBYTE(v6) = 0;
  *((_DWORD *)pDest + 2) = v5;
  *((_DWORD *)pDest + 10) ^= (*((_DWORD *)pDest + 10) ^ (*((_DWORD *)pSrc + 4) >> 12)) & 0x38;
  *((_DWORD *)pDest + 2) ^= (v5 ^ (*((_DWORD *)pSrc + 3) >> 5)) & 0x3C00000;
  *((_DWORD *)pDest + 3) ^= (*((_DWORD *)pSrc + 4) ^ *((_DWORD *)pDest + 3)) & 0x7F;
  v7 = *((_DWORD *)pDest + 3) ^ (*((_DWORD *)pSrc + 4) ^ *((_DWORD *)pDest + 3)) & 0x380;
  *((_DWORD *)pDest + 3) = v7;
  v8 = *((_BYTE *)pSrc + 16) & 0x7F;
  if ( v8 > 0xCu )
    v6 = (v8 - 1) / 12;
  *((_DWORD *)pDest + 3) = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)((unsigned __int16)this->gamedata.tableBattleType[(unsigned __int8)v6] << 10)) & 0x1C00;
  *((_DWORD *)pDest + 4) = *((_DWORD *)pSrc + 6);
  *((_DWORD *)pDest + 5) = *((_DWORD *)pSrc + 7);
  *((_DWORD *)pDest + 6) = *((_DWORD *)pSrc + 8);
  *((_DWORD *)pDest + 7) = *((_DWORD *)pSrc + 9);
  *((_DWORD *)pDest + 8) = *((_DWORD *)pSrc + 10);
  *((_DWORD *)pDest + 9) = *((_DWORD *)pSrc + 11);
  *((_DWORD *)pDest + 10) ^= (*((_DWORD *)pDest + 10) ^ *((_DWORD *)pSrc + 12)) & 1;
  v9 = *((_DWORD *)pDest + 10) ^ (*((_DWORD *)pDest + 10) ^ *((_DWORD *)pSrc + 12)) & 2;
  *((_DWORD *)pDest + 10) = v9;
  v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)*((_DWORD *)pSrc + 12)) & 4;
  *((_DWORD *)pDest + 10) = v10;
  *((_DWORD *)pDest + 10) = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(8 * *((_DWORD *)pSrc + 12))) & 0xC0;
  country = pSrc->country;
  do
  {
    v12 = *country;
    country[pDest->country - pSrc->country] = *country;
    ++country;
  }
  while ( v12 );
}

void __fastcall NetManager::convertUserDataFromRoomMember(NetManager *this, NET_USER_DATA *pDest, ROOM_USER_DATA *pSrc)
{
  int v4; // ecx
  int v5; // ecx
  char *country; // rax
  signed __int64 v7; // rdx
  char v8; // cl

  pDest->steamId = pSrc->steamId;
  *((_DWORD *)pDest + 3) ^= (*((_DWORD *)pDest + 3) ^ (*((_DWORD *)pSrc + 2) << 14)) & 0x1FC000;
  v4 = *((_DWORD *)pDest + 3) ^ (*((_DWORD *)pDest + 3) ^ (*((_DWORD *)pSrc + 2) << 14)) & 0x7E00000;
  *((_DWORD *)pDest + 3) = v4;
  *((_DWORD *)pDest + 4) ^= (*((_DWORD *)pDest + 4) ^ (*((_DWORD *)pSrc + 2) << 8)) & 0x3FE00000;
  *((_DWORD *)pDest + 3) ^= (v4 ^ (32 * *((_DWORD *)pSrc + 2))) & 0x78000000;
  *((_DWORD *)pDest + 4) ^= (*((_DWORD *)pSrc + 3) ^ *((_DWORD *)pDest + 4)) & 0x7F;
  v5 = *((_DWORD *)pDest + 4) ^ (*((_DWORD *)pSrc + 3) ^ *((_DWORD *)pDest + 4)) & 0x380;
  *((_DWORD *)pDest + 4) = v5;
  *((_DWORD *)pDest + 4) = v5 ^ (v5 ^ (32 * *((_DWORD *)pSrc + 3))) & 0xC0000;
  *((_DWORD *)pDest + 12) ^= (*((_DWORD *)pDest + 12) ^ (*((_DWORD *)pSrc + 3) >> 12)) & 0x18;
  country = pSrc->country;
  v7 = pDest->country - pSrc->country;
  do
  {
    v8 = *country;
    country[v7] = *country;
    ++country;
  }
  while ( v8 );
  *((_DWORD *)pDest + 5) = 2068357982;
}

void __fastcall NetManager::convertUserDataFromRoomMember(
        NetManager *this,
        NET_USER_DATA *pDest,
        ROOM_USER_DATA_RANK *pSrc)
{
  char matched; // al
  int v6; // ecx
  int v7; // edx
  char *country; // rax
  char v9; // cl

  *((_DWORD *)pDest + 3) ^= (*((_DWORD *)pDest + 3) ^ (32 * *((_DWORD *)pSrc + 2))) & 0x78000000;
  pDest->steamId = pSrc->steamId;
  *((_DWORD *)pDest + 3) ^= (*((_DWORD *)pDest + 3) ^ (*((_DWORD *)pSrc + 2) << 14)) & 0x1FC000;
  *((_DWORD *)pDest + 3) ^= (*((_DWORD *)pDest + 3) ^ (*((_DWORD *)pSrc + 2) << 14)) & 0x7E00000;
  *((_DWORD *)pDest + 4) ^= (*((_DWORD *)pDest + 4) ^ (*((_DWORD *)pSrc + 2) << 8)) & 0x3FE00000;
  if ( this->gamedata.userInfo.m_OnlineID.data == pSrc->steamId )
  {
    *((_DWORD *)pDest + 4) ^= (*((_DWORD *)pDest + 4) ^ (this->gamedata.userInfo.m_Antenna << 15)) & 0x38000;
  }
  else
  {
    matched = NetManager::CalcRankMatchMemberAntenna(this, (*((_DWORD *)pSrc + 2) >> 22) & 0xF);
    *((_DWORD *)pDest + 4) &= 0xFFFC7FFF;
    *((_DWORD *)pDest + 4) |= (matched & 7) << 15;
  }
  *((_DWORD *)pDest + 4) ^= (*((_DWORD *)pSrc + 3) ^ *((_DWORD *)pDest + 4)) & 0x7F;
  *((_DWORD *)pDest + 4) ^= (*((_DWORD *)pSrc + 3) ^ *((_DWORD *)pDest + 4)) & 0x380;
  *((_DWORD *)pDest + 6) = *((_DWORD *)pSrc + 4);
  *((_DWORD *)pDest + 7) = *((_DWORD *)pSrc + 5);
  *((_DWORD *)pDest + 8) = *((_DWORD *)pSrc + 6);
  *((_DWORD *)pDest + 9) = *((_DWORD *)pSrc + 7);
  *((_DWORD *)pDest + 10) = *((_DWORD *)pSrc + 8);
  *((_DWORD *)pDest + 11) = *((_DWORD *)pSrc + 9);
  *((_DWORD *)pDest + 12) ^= (*((_DWORD *)pSrc + 10) ^ *((_DWORD *)pDest + 12)) & 1;
  v6 = *((_DWORD *)pDest + 12) ^ (*((_DWORD *)pDest + 12) ^ *((_DWORD *)pSrc + 10)) & 2;
  *((_DWORD *)pDest + 12) = v6;
  v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)*((_DWORD *)pSrc + 10)) & 4;
  *((_DWORD *)pDest + 12) = v7;
  *((_DWORD *)pDest + 12) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(*((_DWORD *)pSrc + 10) >> 3)) & 0x18;
  country = pSrc->country;
  do
  {
    v9 = *country;
    country[pDest->country - pSrc->country] = *country;
    ++country;
  }
  while ( v9 );
  *((_DWORD *)pDest + 5) = 2068357982;
}

void __fastcall NetManager::disconnectCheck(NetManager *this)
{
  ONLINE_STATE v2; // eax
  int v3; // edi
  NET_USER_DATA *player_data; // r14
  int i; // esi
  int v6; // er8
  __int64 v7; // rdx
  const char *v8; // rcx
  clasChkDisconOnlineSv *v9; // rax
  AppMain *v10; // rcx
  int v11; // edi
  NET_USER_DATA *v12; // r14
  int j; // esi
  int v14; // er8
  __int64 v15; // rdx
  const char *v16; // rcx
  clasChkDisconOnlineSv *v17; // rax
  AppMain *v18; // rcx
  __int64 onlineState; // rsi
  int v20; // er8
  __int64 v21; // rbp
  int v22; // edi
  _BYTE *v23; // rsi
  unsigned __int64 v24; // rcx
  NetManager *v25; // rcx
  unsigned __int8 v26; // r8
  unsigned __int8 v27; // dl
  unsigned int v28; // er8
  int v29; // edi
  _DWORD *v30; // rsi
  unsigned __int64 v31; // rcx
  NetManager *v32; // rcx
  __int64 v33; // r14
  GAME_RULE gameRule; // eax
  unsigned __int8 v35; // dl
  unsigned __int8 v36; // al
  int v37; // er8
  __int64 v38; // r9
  __int64 v39; // rcx
  unsigned __int8 v40; // dl
  unsigned __int8 v41; // al
  int v42; // er8
  int v43; // er8
  __int64 v44; // rdx
  const char *v45; // rcx
  int v46; // ecx
  int v47; // edi
  _DWORD *v48; // rsi
  unsigned __int64 v49; // rcx
  NetManager *v50; // rcx
  __int64 v51; // r14
  __int64 v52; // r9
  __int64 v53; // rcx
  unsigned __int8 v54; // dl
  unsigned __int8 v55; // al
  int v56; // er8

  if ( this->gamedata.error )
    return;
  if ( this->gamedata.matchMode != NETWORK_MATCHING_TYPE_RANK )
  {
    onlineState = this->gamedata.onlineState;
    switch ( (int)onlineState )
    {
      case 3:
      case 8:
      case 9:
      case 10:
      case 11:
        if ( !NetManager::kickOutCheck(this) )
        {
          v21 = onlineState;
          v22 = 0;
          v23 = (char *)this->gamedata.player_data + 16;
          do
          {
            v24 = *((_QWORD *)v23 - 2);
            if ( v24 && !(unsigned __int8)Fw::MatchingTarget::IsAliveMember(v24) )
            {
              if ( (unsigned __int64)(v21 - 9) <= 2
                && NetManager::IsBattleSeat(v25, this->gamedata.gameRule, *v23 & 0x7F) )
              {
                v27 = 1;
                if ( v26 > 0xCu )
                  v27 = 12 * ((v26 - 1) / 12) + 1;
                v28 = *((_DWORD *)&this->gamedata.player_data[(unsigned __int8)this->gamedata.myNo] + 4) & 0x7F;
                if ( v27 <= v28 && v28 < (unsigned __int8)(v27 + 12) )
                  this->gamedata.error = NETWORK_ERROR_TYPE_ROOMBACK_CUTTING;
              }
              NetManager::resetPlayer(this, v22);
            }
            ++v22;
            v23 += 118;
          }
          while ( v22 < 12 );
          if ( Fw::MatchingTarget::m_RoomOwnerChanged )
            goto LABEL_44;
        }
        return;
      case 13:
      case 14:
      case 15:
        if ( NetManager::kickOutCheck(this) )
          return;
        v29 = 0;
        v30 = (_DWORD *)((char *)this->gamedata.player_data + 16);
        break;
      case 16:
        if ( !NetManager::kickOutCheck(this) )
        {
          if ( Fw::MatchingTarget::m_RoomOwnerChanged )
          {
            v46 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 7352i64);
            if ( v46 == 150 || v46 == 42 )
            {
LABEL_44:
              NetManager::ChangeState(this, NET_STATE_TOP, v20);
              this->gamedata.error = NETWORK_ERROR_TYPE_ROOM_OWNER_CHANGE;
            }
          }
          else
          {
            v47 = 0;
            v48 = (_DWORD *)((char *)this->gamedata.player_data + 16);
            do
            {
              v49 = *((_QWORD *)v48 - 2);
              if ( v49 && !(unsigned __int8)Fw::MatchingTarget::IsAliveMember(v49) )
              {
                if ( NetManager::IsBattleSeat(v50, this->gamedata.gameRule, *(_BYTE *)v48 & 0x7F) )
                {
                  v51 = (unsigned __int8)v47;
                  if ( !this->gamedata.playerDataSub[v51].disconnectTick )
                  {
                    this->gamedata.playerDataSub[v51].disconnectTick = Fw::Rtc::GetCurrentTick();
                    if ( this->gamedata.gameRule == GAME_RULE_PARTY )
                    {
                      this->gamedata.disconnectBattleUser[0][2 * ((*v48 >> 20) & 1)
                                                           + ((*v48 >> 20) & 1)
                                                           + (unsigned __int8)(((*(v48 - 2) >> 11) & 3) - 1)] = 1;
                    }
                    else
                    {
                      v52 = *(_QWORD *)&AppMain::pApp;
                      this->gamedata.disconnectBattleUser[0][2 * ((*v48 >> 20) & 1) + ((*v48 >> 20) & 1)] = 1;
                      v53 = ((*v48 >> 20) & 1) + 2251i64;
                      *((_BYTE *)&this->m_sendThreadHost.__vftable + 2 * v53 + v53) = 1;
                      this->gamedata.disconnectBattleUser[0][2 * ((*v48 >> 20) & 1) + 2 + ((*v48 >> 20) & 1)] = 1;
                      if ( !*(_DWORD *)(v52 + 2507532) )
                      {
                        v54 = 1;
                        v55 = *(_BYTE *)v48 & 0x7F;
                        if ( v55 > 0xCu )
                          v54 = 12 * ((v55 - 1) / 12) + 1;
                        v56 = *((_DWORD *)&this->gamedata.player_data[(unsigned __int8)this->gamedata.myNo] + 4);
                        if ( v54 <= (v56 & 0x7Fu) && (v56 & 0x7Fu) < (unsigned __int8)(v54 + 12) && (v56 & 0x380) == 384 )
                          *(_DWORD *)(v52 + 2507532) = 2;
                      }
                    }
                  }
                }
                else
                {
                  NetManager::resetPlayer(this, v47);
                }
              }
              ++v47;
              v48 = (_DWORD *)((char *)v48 + 118);
            }
            while ( v47 < 12 );
          }
        }
        return;
      default:
        return;
    }
    while ( 1 )
    {
      v31 = *((_QWORD *)v30 - 2);
      if ( v31 && !(unsigned __int8)Fw::MatchingTarget::IsAliveMember(v31) )
      {
        if ( NetManager::IsBattleSeat(v32, this->gamedata.gameRule, *(_BYTE *)v30 & 0x7F) )
        {
          v33 = (unsigned __int8)v29;
          if ( !this->gamedata.playerDataSub[v33].disconnectTick )
          {
            this->gamedata.playerDataSub[v33].disconnectTick = Fw::Rtc::GetCurrentTick();
            gameRule = this->gamedata.gameRule;
            if ( gameRule < GAME_RULE_SINGLE )
              goto LABEL_67;
            if ( gameRule <= GAME_RULE_TEAM )
            {
              v38 = *(_QWORD *)&AppMain::pApp;
              this->gamedata.disconnectBattleUser[0][2 * ((*v30 >> 20) & 1) + ((*v30 >> 20) & 1)] = 1;
              v39 = ((*v30 >> 20) & 1) + 2251i64;
              *((_BYTE *)&this->m_sendThreadHost.__vftable + 2 * v39 + v39) = 1;
              this->gamedata.disconnectBattleUser[0][2 * ((*v30 >> 20) & 1) + 2 + ((*v30 >> 20) & 1)] = 1;
              if ( !*(_DWORD *)(v38 + 2507532) )
              {
                v40 = 1;
                v41 = *(_BYTE *)v30 & 0x7F;
                if ( v41 > 0xCu )
                  v40 = 12 * ((v41 - 1) / 12) + 1;
                v42 = *((_DWORD *)&this->gamedata.player_data[(unsigned __int8)this->gamedata.myNo] + 4);
                if ( v40 <= (v42 & 0x7Fu) && (v42 & 0x7Fu) < (unsigned __int8)(v40 + 12) && (v42 & 0x380) == 384 )
                  *(_DWORD *)(v38 + 2507532) = 2;
              }
              goto LABEL_70;
            }
            if ( gameRule == GAME_RULE_PARTY )
            {
              v35 = 1;
              v36 = *(_BYTE *)v30 & 0x7F;
              if ( v36 > 0xCu )
                v35 = 12 * ((v36 - 1) / 12) + 1;
              v37 = *((_DWORD *)&this->gamedata.player_data[(unsigned __int8)this->gamedata.myNo] + 4);
              if ( v35 <= (v37 & 0x7Fu) && (v37 & 0x7Fu) < (unsigned __int8)(v35 + 12) && (v37 & 0x380) == 384 )
                this->gamedata.disconnectBattleUser[0][2 * ((*v30 >> 20) & 1)
                                                     + ((*v30 >> 20) & 1)
                                                     + (unsigned __int8)(((*(v30 - 2) >> 11) & 3) - 1)] = 1;
            }
            else
            {
LABEL_67:
              NetManager::resetPlayer(this, v29);
              this->gamedata.error = NETWORK_ERROR_TYPE_CONNECTION;
              NetManager::ChangeState(this, NET_STATE_ERROR, v43);
              AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
              if ( Fw::MatchingTarget::IsRoomOwner(v45, v44) )
                Fw::MatchingTarget::LeaveRoom();
            }
          }
        }
        else
        {
          NetManager::resetPlayer(this, v29);
        }
      }
LABEL_70:
      ++v29;
      v30 = (_DWORD *)((char *)v30 + 118);
      if ( v29 >= 12 )
        return;
    }
  }
  v2 = this->gamedata.onlineState;
  if ( v2 == NET_STATE_WAITCLIENT )
  {
    if ( this->gamedata.roomPlayerCount < 2u )
      return;
  }
  else
  {
    if ( v2 <= NET_STATE_JOIN_COMPLETE )
      return;
    if ( v2 > NET_STATE_CHARACTERSELECT_NOT_PARTY )
    {
      if ( v2 <= NET_STATE_BATTLE )
      {
        v3 = 0;
        player_data = this->gamedata.player_data;
        for ( i = 0; i < 12; ++i )
        {
          if ( player_data->steamId && !(unsigned __int8)Fw::MatchingTarget::IsAliveMember(player_data->steamId) )
          {
            NetManager::resetPlayer(this, i);
            this->gamedata.error = NETWORK_ERROR_TYPE_CONNECTION2;
            NetManager::ChangeState(this, NET_STATE_ERROR, v6);
            AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
            if ( Fw::MatchingTarget::IsRoomOwner(v8, v7) )
              Fw::MatchingTarget::LeaveRoom();
            ++v3;
          }
          ++player_data;
        }
        if ( v3 >= 1 )
        {
          v9 = clasChkDisconOnlineSv::getinstance();
          v10 = *(AppMain **)&AppMain::pApp;
          v9->m_RankmatchGameStart = 0;
          AppMain::TusSetOnlineProfile(v10);
        }
      }
      return;
    }
  }
  if ( this->m_RankmatchAccept[1] != RANKMATCH_ACCEPT_REFUSE )
  {
    v11 = 0;
    v12 = this->gamedata.player_data;
    for ( j = 0; j < 12; ++j )
    {
      if ( v12->steamId && !(unsigned __int8)Fw::MatchingTarget::IsAliveMember(v12->steamId) )
      {
        NetManager::resetPlayer(this, j);
        this->gamedata.error = NETWORK_ERROR_TYPE_CONNECTION;
        NetManager::ChangeState(this, NET_STATE_ERROR, v14);
        AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
        if ( Fw::MatchingTarget::IsRoomOwner(v16, v15) )
          Fw::MatchingTarget::LeaveRoom();
        ++v11;
      }
      ++v12;
    }
    if ( v11 >= 1 )
    {
      v17 = clasChkDisconOnlineSv::_instance;
      if ( !clasChkDisconOnlineSv::_instance )
      {
        v17 = (clasChkDisconOnlineSv *)operator new((unsigned int)((_DWORD)clasChkDisconOnlineSv::_instance + 2));
        clasChkDisconOnlineSv::_instance = v17;
        *v17 = 0;
      }
      v18 = *(AppMain **)&AppMain::pApp;
      v17->m_RankmatchGameStart = 0;
      AppMain::TusSetOnlineProfile(v18);
    }
  }
}

void __fastcall NetManager::errorCheck(NetManager *this, ONLINE_STATE onlineState)
{
  int v2; // esi
  NETWORK_ERROR_TYPE v4; // ebx
  int v5; // eax

  v2 = Fw::MatchingTarget::m_SystemErrorCode;
  if ( Fw::MatchingTarget::m_SystemErrorCode )
  {
    if ( this->gamedata.matchMode != NETWORK_MATCHING_TYPE_RANK
      || this->m_RankmatchAccept[0] != RANKMATCH_ACCEPT_ACCEPT
      || this->m_RankmatchAccept[1] != RANKMATCH_ACCEPT_ACCEPT )
    {
      v4 = NETWORK_ERROR_TYPE_OTHER;
      switch ( Fw::MatchingTarget::m_SystemErrorCode )
      {
        case 0:
          v4 = NETWORK_ERROR_TYPE_ROOMFULL;
          goto $LN2_0;
        case 1:
        case 2:
        case 3:
          v4 = NETWORK_ERROR_TYPE_ROOMNOTFOUND;
          goto $LN2_0;
        case 4:
          v4 = NETWORK_ERROR_TYPE_TIMEOUT;
          goto $LN2_0;
        case 5:
        case 8:
          if ( this->gamedata.myNo )
          {
            v5 = 1;
            if ( onlineState < NET_STATE_WAITSTART )
              v5 = 8;
            v4 = v5;
          }
          else if ( onlineState >= NET_STATE_WAITSTART )
          {
            v4 = NETWORK_ERROR_TYPE_DESTROYED;
          }
          goto $LN2_0;
        case 6:
        case 7:
        case 9:
        case 10:
          goto $LN2_0;
        case 11:
          v4 = NETWORK_ERROR_TYPE_NONE;
$LN2_0:
          NetManager::ChangeState(this, NET_STATE_TOP, 0x40000000);
          this->gamedata.error = v4;
          this->gamedata.systemError = v2;
          break;
        default:
          break;
      }
    }
    Fw::MatchingTarget::m_SystemErrorCode = 0;
  }
}

_BOOL8 __fastcall NetManager::getBattleWaitState(NetManager *this, unsigned __int8 seatNo)
{
  unsigned __int8 v3; // r8
  unsigned __int8 v4; // dl

  v3 = 1;
  if ( seatNo > 0xCu )
    v3 = 12 * ((seatNo - 1) / 12) + 1;
  v4 = 0;
  switch ( g_NetworkManager.gamedata.gameRule )
  {
    case GAME_RULE_SINGLE:
    case GAME_RULE_TEAM:
      goto LABEL_7;
    case GAME_RULE_PARTY:
      v4 = 6;
      return v3 > seatNo || seatNo >= v3 + (unsigned int)v4;
    case GAME_RULE_TRAINING:
LABEL_7:
      v4 = 2;
      break;
  }
  return v3 > seatNo || seatNo >= v3 + (unsigned int)v4;
}

bool __fastcall NetManager::isTimeout(NetManager *this, unsigned __int64 time)
{
  double v4; // xmm0_8
  unsigned __int64 v5; // r8
  unsigned __int64 m_TimeStamp; // rcx
  unsigned __int64 v7; // rax

  v4 = AgClock::getSystemTime() * 1000000.0;
  v5 = 0i64;
  if ( v4 >= 9.223372036854776e18 )
  {
    v4 = v4 - 9.223372036854776e18;
    if ( v4 < 9.223372036854776e18 )
      v5 = 0x8000000000000000ui64;
  }
  m_TimeStamp = this->gamedata.m_TimeStamp;
  v7 = v5 + (unsigned int)(int)v4;
  return m_TimeStamp < v7 && time < v7 - m_TimeStamp;
}

void __fastcall NetManager::keepRandomFlag(NetManager *this)
{
  int PlayerID; // eax
  __int64 v3; // rbx
  _DWORD *v4; // rsi
  __int64 v5; // rcx
  bool v6; // al
  bool *m_myEditRandom; // rbx
  __int64 v8; // r14
  __int64 v9; // rdi
  char *v10; // r14
  GameDataInfo *v11; // rcx
  GameDataInfo *v12; // rcx

  PlayerID = NetManager::GetPlayerID(this, -1);
  v3 = PlayerID;
  if ( PlayerID == -1 )
  {
    *(_WORD *)this->m_myEditRandom = 0;
    this->m_myEditRandom[2] = 0;
  }
  else
  {
    v4 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v4 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v11);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    v5 = v3;
    v6 = `GameDataInfo::getInstance'::`2'::instance.m_TeamRandom[v3];
    m_myEditRandom = this->m_myEditRandom;
    this->m_myTeamRandom = v6;
    v8 = 3 * v5 - (_QWORD)this;
    v9 = 3i64;
    v10 = (char *)&`GameDataInfo::getInstance'::`2'::instance + v8;
    do
    {
      if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v4 )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v12);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        }
      }
      *m_myEditRandom = m_myEditRandom[(_QWORD)v10 - 112570];
      ++m_myEditRandom;
      --v9;
    }
    while ( v9 );
  }
}

bool __fastcall NetManager::kickOutCheck(NetManager *this)
{
  __int64 v2; // rdx
  const char *v3; // rcx
  int v4; // er8
  bool result; // al

  AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
  if ( Fw::MatchingTarget::IsRoomOwner(v3, v2) || !Fw::MatchingTarget::m_RoomKickoutFlag )
    return 0;
  NetManager::ChangeState(this, NET_STATE_TOP, v4);
  result = 1;
  this->gamedata.error = NETWORK_ERROR_TYPE_ROOMKICKOUT;
  return result;
}

void __fastcall NetManager::ThreadHost::onExecuteThread(NetManager::ThreadHost *this)
{
  ((void (*)(void))this->m_func)();
  this->m_running = 0;
}

void __fastcall NetManager::resetLocalData(NetManager *this)
{
  double v2; // xmm0_8
  double v3; // xmm0_8
  unsigned __int64 v4; // rcx

  memset(this->gamedata.player_data, 0, 0x72Cui64);
  this->gamedata.myNo = 0;
  this->gamedata.hostNo = 0;
  memset(this->gamedata.sendFrequency, 0, sizeof(this->gamedata.sendFrequency));
  v2 = AgClock::getSystemTime() * 1000000.0;
  if ( v2 >= 9.223372036854776e18 )
    v2 = v2 - 9.223372036854776e18;
  this->gamedata.error = NETWORK_ERROR_TYPE_NONE;
  this->gamedata.randseed = (int)v2;
  v3 = AgClock::getSystemTime() * 1000000.0;
  v4 = 0i64;
  if ( v3 >= 9.223372036854776e18 )
  {
    v3 = v3 - 9.223372036854776e18;
    if ( v3 < 9.223372036854776e18 )
      v4 = 0x8000000000000000ui64;
  }
  this->gamedata.m_TimeStamp = v4 + (unsigned int)(int)v3;
  *(_QWORD *)this->m_RankmatchAccept = 0i64;
}

void __fastcall NetManager::resetPlayer(NetManager *this, unsigned __int8 pno)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  unsigned __int8 roomPlayerCount; // al
  __int64 *v7; // r14
  int privateSlot; // edx
  __int64 maxSlot; // r8
  bool *p_privateInvite; // rcx
  int v11; // eax
  CSteamID::SteamID_t v12; // rbx
  __int64 v13; // rdi
  AgString *v14; // rax
  const char *CString; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  bool *v18; // r8
  bool v19; // cl
  unsigned int v20; // eax
  AgString v21; // [rsp+28h] [rbp-20h] BYREF

  NetManager::clearPlayerData(this, pno);
  Fw::VoiceChat::delConnect(pno, v4);
  roomPlayerCount = this->gamedata.roomPlayerCount;
  if ( roomPlayerCount )
    this->gamedata.roomPlayerCount = roomPlayerCount - 1;
  v7 = *(__int64 **)(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v5) + 32);
  privateSlot = this->gamedata.privateSlot;
  maxSlot = this->gamedata.maxSlot;
  if ( maxSlot > 0 )
  {
    p_privateInvite = &this->gamedata.player_data[0].privateInvite;
    do
    {
      v11 = privateSlot - 1;
      if ( !*p_privateInvite )
        v11 = privateSlot;
      privateSlot = v11;
      p_privateInvite += 118;
      --maxSlot;
    }
    while ( maxSlot );
  }
  AgString::AgString(&v21, privateSlot);
  v12.m_comp = Fw::MatchingTarget::m_RoomId.m_steamid.m_comp;
  v13 = *v7;
  CString = AgString::getCString(v14);
  (*(void (__fastcall **)(__int64 *, CSteamID::SteamID_t, const char *, const char *, __int64))(v13 + 160))(
    v7,
    v12,
    "PRIVATESLOTS",
    CString,
    -2i64);
  AgString::~AgString(&v21);
  v16 = (unsigned int)this->gamedata.privateSlot;
  v17 = this->gamedata.maxSlot;
  if ( v17 > 0 )
  {
    v18 = &this->gamedata.player_data[0].privateInvite;
    do
    {
      v19 = *v18;
      v18 += 118;
      v20 = v16 - 1;
      if ( !v19 )
        v20 = v16;
      v16 = v20;
      --v17;
    }
    while ( v17 );
  }
  AgTrace("AG_TL 6 Updating the privateslot count to %d\n", v16);
}

void __fastcall NetManager::resetSendFrequency(NetManager *this, ONLINE_STATE state)
{
  switch ( state )
  {
    case NET_STATE_WAITCLIENT:
      this->gamedata.sendFrequency[3] = 500;
      break;
    case NET_STATE_JOIN_ROOM:
      this->gamedata.sendFrequency[6] = 15;
      break;
    case NET_STATE_WAITSTART:
      this->gamedata.sendFrequency[8] = 500;
      break;
    case NET_STATE_ORDERSELECT:
      this->gamedata.sendFrequency[9] = 60;
      break;
    case NET_STATE_CHARACTERSELECT:
      this->gamedata.sendFrequency[10] = 60;
      break;
    case NET_STATE_CHARACTERSELECT_NOT_PARTY:
      this->gamedata.sendFrequency[11] = 60;
      break;
    case NET_STATE_BATTLELOADING:
      this->gamedata.sendFrequency[12] = 500;
      break;
    case NET_STATE_BATTLELOADINGEND:
      this->gamedata.sendFrequency[13] = 0;
      break;
    case NET_STATE_READYGAME:
      this->gamedata.sendFrequency[14] = 0;
      break;
    case NET_STATE_LEAVEROOM:
      this->gamedata.sendFrequency[17] = 2;
      break;
    default:
      return;
  }
}

void __fastcall NetManager::setAllTableBattleType(NetManager *this, GAME_RULE gameRule, NETWORK_ROOM_BATTLE_TYPE type)
{
  int i; // ecx
  __int64 v5; // rax

  if ( type )
  {
    for ( i = 0; i < 6; ++i )
    {
      v5 = (unsigned __int8)i;
      this->gamedata.tableBattleType[v5] = type;
    }
  }
  else if ( gameRule >= GAME_RULE_SINGLE )
  {
    if ( gameRule <= GAME_RULE_TEAM )
    {
      this->gamedata.tableBattleType[0] = NETWORK_ROOM_BATTLE_TYPE_LOSE;
      this->gamedata.tableBattleType[1] = NETWORK_ROOM_BATTLE_TYPE_WIN;
      this->gamedata.tableBattleType[2] = NETWORK_ROOM_BATTLE_TYPE_CONTINUE;
      this->gamedata.tableBattleType[3] = NETWORK_ROOM_BATTLE_TYPE_LOSE;
      this->gamedata.tableBattleType[4] = NETWORK_ROOM_BATTLE_TYPE_WIN;
      this->gamedata.tableBattleType[5] = NETWORK_ROOM_BATTLE_TYPE_CONTINUE;
    }
    else if ( gameRule == GAME_RULE_PARTY )
    {
      this->gamedata.tableBattleType[0] = NETWORK_ROOM_BATTLE_TYPE_FIX;
      this->gamedata.tableBattleType[1] = NETWORK_ROOM_BATTLE_TYPE_SHFFLE;
    }
    else if ( gameRule == GAME_RULE_TRAINING )
    {
      this->gamedata.tableBattleType[0] = NETWORK_ROOM_BATTLE_TYPE_FREE;
    }
  }
}

void __fastcall NetManager::setCharacterInfoFromUserInfo(
        NetManager *this,
        unsigned __int8 pno,
        STAGE_ID seatNo,
        STAGE_ID a4)
{
  unsigned __int8 v4; // di
  char v5; // r14
  unsigned __int8 v7; // bl
  __int64 v8; // rcx
  AppMain *v9; // r15
  __int64 v10; // rbp
  int v11; // er8
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx

  v4 = seatNo;
  v5 = 0;
  v7 = 1;
  if ( (unsigned __int8)seatNo > (unsigned int)STAGE_ID_NAK )
    v7 = 12 * (((unsigned __int8)seatNo - 1) / 12) + 1;
  if ( g_NetworkManager.gamedata.gameRule && g_NetworkManager.gamedata.gameRule != GAME_RULE_TEAM )
  {
    if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY )
    {
      v5 = 1;
      goto LABEL_13;
    }
    if ( g_NetworkManager.gamedata.gameRule != GAME_RULE_TRAINING )
      goto LABEL_13;
  }
  if ( (_BYTE)seatNo == v7 )
  {
    g_NetworkManager.gamedata.userInfo.m_Character[0].m_CharacterId = CHARACTER_NO_KYO;
    *(_WORD *)&g_NetworkManager.gamedata.userInfo.m_Character[0].m_ColorId = 0;
    *((_DWORD *)&g_NetworkManager.gamedata.player_data[pno] + 2) &= 0xFFFFFFC0;
  }
  else
  {
    if ( (unsigned __int8)seatNo != v7 + 1 )
      goto LABEL_13;
    g_NetworkManager.gamedata.userInfo.m_Character[0].m_CharacterId = CHARACTER_NO_IOR;
    *(_WORD *)&g_NetworkManager.gamedata.userInfo.m_Character[0].m_ColorId = 0;
    v8 = pno;
    *((_DWORD *)&g_NetworkManager.gamedata.player_data[v8] + 2) &= 0xFFFFFFCC;
    *((_DWORD *)&g_NetworkManager.gamedata.player_data[v8] + 2) |= 0xCu;
  }
  *((_DWORD *)&g_NetworkManager.gamedata.player_data[pno] + 2) &= 0xFFFFF83F;
LABEL_13:
  if ( (unsigned __int8)seatNo % 0xCu == 1 )
  {
    v9 = *(AppMain **)&AppMain::pApp;
    v10 = *(_QWORD *)&AppMain::pApp + 2202784i64;
    *(_DWORD *)(v10 + 2684) = SaveRecord_PlayerData::GetRandomEnableStageID(
                                (SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64),
                                (STAGE_ID)*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205468i64),
                                seatNo,
                                a4);
    v12 = *(_DWORD *)(v10 + 4i64 * *(int *)(v10 + 2516) + 2520);
    if ( v12 == 31 )
      v12 = *(_DWORD *)(v10 + 2684);
    v13 = pno;
    *((_DWORD *)&g_NetworkManager.gamedata.player_data[v13] + 4) ^= ((unsigned __int16)((_WORD)v12 << 10) ^ (unsigned __int16)*((_DWORD *)&g_NetworkManager.gamedata.player_data[v13] + 4)) & 0x7C00;
    AppMain::GetOnlineStageTelop(v9, g_NetworkManager.gamedata.player_data[v13].stageTelop, v11);
  }
  if ( !v5 && v7 <= v4 && v4 < (unsigned __int8)(v7 + 12) )
  {
    v14 = pno;
    if ( v7 == v4 )
      *((_DWORD *)&g_NetworkManager.gamedata.player_data[v14] + 4) &= ~0x100000u;
    else
      *((_DWORD *)&g_NetworkManager.gamedata.player_data[v14] + 4) |= 0x100000u;
  }
}

void __fastcall NetManager::setJoinUser(
        NetManager *this,
        NET_USER_DATA *pOut,
        char *pName,
        ROOM_JOIN_USER_RANK *pJoinUser,
        unsigned __int8 playerIndex,
        CSteamID *pAddr)
{
  int v8; // er8
  char matched; // al
  char v10; // cl
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  char *country; // rax
  char v18; // cl

  *((_DWORD *)pOut + 3) &= 0x87FFFFFF;
  *((_DWORD *)pOut + 3) |= (playerIndex & 0xF) << 27;
  pOut->steamId = pAddr->m_steamid.m_unAll64Bits;
  v8 = *((_DWORD *)pOut + 3) ^ (*((_DWORD *)pOut + 3) ^ (*(_DWORD *)pJoinUser << 14)) & 0x1FC000;
  *((_DWORD *)pOut + 3) = v8;
  *((_DWORD *)pOut + 3) = v8 ^ (v8 ^ (*(_DWORD *)pJoinUser << 14)) & 0x7E00000;
  *((_DWORD *)pOut + 4) ^= (*((_DWORD *)pOut + 4) ^ (*(_DWORD *)pJoinUser >> 4)) & 0x7C00;
  matched = NetManager::CalcRankMatchMemberAntenna(this, playerIndex);
  *((_DWORD *)pOut + 4) &= 0xFFFC7FFF;
  v10 = matched;
  v11 = *((_DWORD *)pOut + 2);
  *((_DWORD *)pOut + 4) |= (v10 & 7) << 15;
  *((_DWORD *)pOut + 4) ^= (*((_DWORD *)pOut + 4) ^ (*(_DWORD *)pJoinUser >> 1)) & 0x3FE00000;
  *((_DWORD *)pOut + 2) ^= (*((_DWORD *)pJoinUser + 1) ^ v11) & 0x3F;
  v12 = *((_DWORD *)pOut + 2) ^ (*((_DWORD *)pOut + 2) ^ (*((_DWORD *)pJoinUser + 1) << 8)) & 0xFC000;
  *((_DWORD *)pOut + 2) = v12;
  *((_DWORD *)pOut + 3) ^= (*((_DWORD *)pOut + 3) ^ (*((_DWORD *)pJoinUser + 1) >> 12)) & 0x3F;
  *((_DWORD *)pOut + 2) ^= ((unsigned __int16)v12 ^ (unsigned __int16)(*((_DWORD *)pJoinUser + 1) >> 12)) & 0x1C0;
  v13 = *((_DWORD *)pOut + 2) ^ (*((_DWORD *)pOut + 2) ^ (*((_DWORD *)pJoinUser + 1) >> 1)) & 0x700000;
  *((_DWORD *)pOut + 2) = v13;
  *((_DWORD *)pOut + 3) ^= (*((_DWORD *)pOut + 3) ^ (*((_DWORD *)pJoinUser + 1) >> 18)) & 0x1C0;
  *((_DWORD *)pOut + 2) ^= ((unsigned __int16)v13 ^ (*((_DWORD *)pJoinUser + 1) >> 18)) & 0x600;
  *((_DWORD *)pOut + 2) ^= (*((_DWORD *)pOut + 2) ^ (*((_DWORD *)pJoinUser + 1) >> 6)) & 0x1800000;
  *((_DWORD *)pOut + 3) ^= (*((_DWORD *)pOut + 3) ^ (*((_DWORD *)pJoinUser + 2) << 9)) & 0x600;
  *((_DWORD *)pOut + 6) = *((_DWORD *)pJoinUser + 3);
  *((_DWORD *)pOut + 7) = *((_DWORD *)pJoinUser + 4);
  *((_DWORD *)pOut + 8) = *((_DWORD *)pJoinUser + 5);
  *((_DWORD *)pOut + 9) = *((_DWORD *)pJoinUser + 6);
  *((_DWORD *)pOut + 10) = *((_DWORD *)pJoinUser + 7);
  *((_DWORD *)pOut + 11) = *((_DWORD *)pJoinUser + 8);
  *((_DWORD *)pOut + 12) ^= (*((_DWORD *)pJoinUser + 9) ^ *((_DWORD *)pOut + 12)) & 1;
  v14 = *((_DWORD *)pOut + 12) ^ (*((_DWORD *)pOut + 12) ^ *((_DWORD *)pJoinUser + 9)) & 2;
  *((_DWORD *)pOut + 12) = v14;
  v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)*((_DWORD *)pJoinUser + 9)) & 4;
  *((_DWORD *)pOut + 12) = v15;
  v16 = *((_DWORD *)pJoinUser + 9);
  *((_DWORD *)pOut + 4) &= 0xFFFFFD02;
  *((_DWORD *)pOut + 4) |= 0x100102u;
  *((_DWORD *)pOut + 12) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)v16) & 0x18;
  country = pJoinUser->country;
  do
  {
    v18 = *country;
    country[pOut->country - pJoinUser->country] = *country;
    ++country;
  }
  while ( v18 );
  *((_DWORD *)pOut + 5) = 2068357982;
}

void __fastcall NetManager::setPlayerDataFromSeatUser(
        NetManager *this,
        NET_USER_DATA *pOut,
        SEAT_USER_DATA *pSeatUser,
        GAME_RULE gameRule)
{
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  __int32 v9; // er9
  char v10; // al
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // al
  int v13; // ecx
  unsigned int v14; // er8
  unsigned int v15; // ecx
  char v16; // al
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // al
  int v19; // ecx
  unsigned int v20; // er8

  *((_DWORD *)pOut + 4) ^= (*((_DWORD *)pOut + 4) ^ (*(_DWORD *)&pSeatUser->common >> 4)) & 0x7F;
  v5 = *((_DWORD *)pOut + 4) ^ (*((_DWORD *)pOut + 4) ^ (*(_DWORD *)&pSeatUser->common >> 4)) & 0x380;
  *((_DWORD *)pOut + 4) = v5;
  v6 = v5 ^ (v5 ^ (16 * *(_DWORD *)&pSeatUser->common)) & 0xC0000;
  *((_DWORD *)pOut + 4) = v6;
  if ( (v6 & 0xC0000) == 0 )
  {
    *((_DWORD *)pOut + 2) ^= (*(_DWORD *)&pSeatUser->battle ^ *((_DWORD *)pOut + 2)) & 0x3F;
    v7 = *((_DWORD *)pOut + 2) ^ (*((_DWORD *)pOut + 2) ^ (*(_DWORD *)&pSeatUser->battle << 8)) & 0xFC000;
    *((_DWORD *)pOut + 2) = v7;
    *((_DWORD *)pOut + 3) ^= (*((_DWORD *)pOut + 3) ^ (*(_DWORD *)&pSeatUser->battle >> 12)) & 0x3F;
    *((_DWORD *)pOut + 2) ^= ((unsigned __int16)v7 ^ (unsigned __int16)(*(_DWORD *)&pSeatUser->battle >> 12)) & 0x1C0;
    v8 = *((_DWORD *)pOut + 2) ^ (*((_DWORD *)pOut + 2) ^ (*(_DWORD *)&pSeatUser->battle >> 1)) & 0x700000;
    *((_DWORD *)pOut + 2) = v8;
    *((_DWORD *)pOut + 3) ^= (*((_DWORD *)pOut + 3) ^ (*(_DWORD *)&pSeatUser->battle >> 18)) & 0x1C0;
    *((_DWORD *)pOut + 2) ^= ((unsigned __int16)v8 ^ (*(_DWORD *)&pSeatUser->battle >> 18)) & 0x600;
    *((_DWORD *)pOut + 2) ^= (*((_DWORD *)pOut + 2) ^ (*(_DWORD *)&pSeatUser->battle >> 6)) & 0x1800000;
    *((_DWORD *)pOut + 3) ^= (*((_DWORD *)pOut + 3) ^ (*((_DWORD *)&pSeatUser->battle + 1) << 9)) & 0x600;
    *((_DWORD *)pOut + 5) = *((_DWORD *)&pSeatUser->battle + 2);
  }
  *((_DWORD *)pOut + 2) &= 0xF9FFE7FF;
  *((_DWORD *)pOut + 2) &= 0xF7FFDFFF;
  *((_DWORD *)pOut + 3) &= 0xFFFFC7FF;
  if ( gameRule == GAME_RULE_SINGLE )
  {
LABEL_6:
    v10 = *((_BYTE *)pOut + 16);
    v11 = 1;
    v12 = v10 & 0x7F;
    if ( v12 > 0xCu )
      v11 = 12 * ((v12 - 1) / 12) + 1;
    v13 = *((_DWORD *)pOut + 4);
    v14 = v13 & 0x7F;
    if ( v11 <= v14 && v14 < (unsigned int)v11 + 2 )
    {
      if ( v11 == v14 )
        v15 = v13 & 0xFFEFFFFF;
      else
        v15 = v13 | 0x100000;
      *((_DWORD *)pOut + 2) &= 0xFDFFEFFF;
      *((_DWORD *)pOut + 2) |= 0x4000800u;
      *((_DWORD *)pOut + 3) |= 0x1800u;
      *((_DWORD *)pOut + 4) = v15;
    }
    return;
  }
  v9 = gameRule - 1;
  if ( v9 )
  {
    if ( v9 != 2 )
      return;
    goto LABEL_6;
  }
  v16 = *((_BYTE *)pOut + 16);
  v17 = 1;
  v18 = v16 & 0x7F;
  if ( v18 > 0xCu )
    v17 = 12 * ((v18 - 1) / 12) + 1;
  v19 = *((_DWORD *)pOut + 4);
  v20 = v19 & 0x7F;
  if ( v17 <= v20 && v20 < (unsigned int)v17 + 2 )
  {
    if ( v17 == v20 )
      *((_DWORD *)pOut + 4) = v19 & 0xFFEFFFFF;
    else
      *((_DWORD *)pOut + 4) = v19 | 0x100000;
  }
}

void __fastcall NetManager::setPlayerDataFromSeatUser(
        NetManager *this,
        NET_USER_DATA *pOut,
        SEAT_USER_DATA_PARTY *pSeatUser,
        bool my)
{
  int v7; // er10
  int v8; // er9
  unsigned int v9; // er8
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int battle; // eax
  char v13; // al

  *((_DWORD *)pOut + 4) ^= (*((_DWORD *)pOut + 4) ^ (*(_DWORD *)&pSeatUser->common >> 4)) & 0x7F;
  v7 = *((_DWORD *)pOut + 4) ^ (*((_DWORD *)pOut + 4) ^ (*(_DWORD *)&pSeatUser->common >> 4)) & 0x380;
  *((_DWORD *)pOut + 4) = v7;
  v8 = v7 ^ (v7 ^ (16 * *(_DWORD *)&pSeatUser->common)) & 0xC0000;
  *((_DWORD *)pOut + 4) = v8;
  v9 = *((_DWORD *)pOut + 3) & 0xFFFFFFC0 | ((*(_BYTE *)&pSeatUser->battle & 4) != 0 ? 0xC : 0);
  *((_DWORD *)pOut + 3) = v9;
  *((_DWORD *)pOut + 3) &= 0xFFFFF9FF;
  v10 = *((_DWORD *)pOut + 2) ^ (*((_DWORD *)pOut + 2) ^ (v9 << 14)) & 0xFC000;
  v11 = v10 & 0xFE7FF9C0 | (v10 >> 14) & 0x3F;
  *((_DWORD *)pOut + 2) = v11;
  battle = (int)pSeatUser->battle;
  *((_DWORD *)pOut + 3) &= 0xFFFFC7FF;
  *((_DWORD *)pOut + 2) = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)((_WORD)battle << 11)) & 0x1800;
  *((_DWORD *)pOut + 2) &= 0xF1FFDFFF;
  *((_DWORD *)pOut + 4) ^= (v8 ^ (*(_DWORD *)&pSeatUser->battle << 18)) & 0x100000;
  *((_DWORD *)pOut + 4) ^= (*((_DWORD *)pOut + 4) ^ (*((_DWORD *)&pSeatUser->battle + 2) << 30)) & 0x40000000;
  *((_DWORD *)pOut + 5) = *((_DWORD *)&pSeatUser->battle + 1);
  if ( my )
  {
    v13 = *(_BYTE *)&pSeatUser->battle & 4;
    *(_WORD *)&this->gamedata.userInfo.m_Character[0].m_ColorId = 0;
    this->gamedata.userInfo.m_Character[0].m_CharacterId = v13 != 0 ? CHARACTER_NO_IOR : CHARACTER_NO_KYO;
  }
}

void __fastcall NetManager::setSeatUserFromPlayerData(NetManager *this, SEAT_USER_DATA *pOut, NET_USER_DATA *user)
{
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx

  *(_DWORD *)&pOut->common ^= (*(_DWORD *)&pOut->common ^ (*((_DWORD *)user + 3) >> 27)) & 0xF;
  v4 = *(_DWORD *)&pOut->common ^ (*(_DWORD *)&pOut->common ^ (16 * *((_DWORD *)user + 4))) & 0x7F0;
  pOut->common = (SEAT_USER_DATA::<unnamed_type_common>)v4;
  v5 = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)(16 * *((_DWORD *)user + 4))) & 0x3800;
  pOut->common = (SEAT_USER_DATA::<unnamed_type_common>)v5;
  pOut->common = (SEAT_USER_DATA::<unnamed_type_common>)(v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)(*((_DWORD *)user + 4) >> 4)) & 0xC000);
  *(_DWORD *)&pOut->battle ^= (*((_DWORD *)user + 2) ^ *(_DWORD *)&pOut->battle) & 0x3F;
  v6 = *(_DWORD *)&pOut->battle ^ (*(_DWORD *)&pOut->battle ^ (*((_DWORD *)user + 2) >> 8)) & 0xFC0;
  *(_DWORD *)&pOut->battle = v6;
  v7 = v6 ^ (v6 ^ (*((_DWORD *)user + 3) << 12)) & 0x3F000;
  *(_DWORD *)&pOut->battle = v7;
  v8 = v7 ^ (v7 ^ (*((_DWORD *)user + 2) << 12)) & 0x1C0000;
  *(_DWORD *)&pOut->battle = v8;
  v9 = v8 ^ (v8 ^ (2 * *((_DWORD *)user + 2))) & 0xE00000;
  *(_DWORD *)&pOut->battle = v9;
  v10 = v9 ^ (v9 ^ (*((_DWORD *)user + 3) << 18)) & 0x7000000;
  *(_DWORD *)&pOut->battle = v10;
  v11 = v10 ^ (v10 ^ (*((_DWORD *)user + 2) << 18)) & 0x18000000;
  *(_DWORD *)&pOut->battle = v11;
  *(_DWORD *)&pOut->battle = v11 ^ (v11 ^ (*((_DWORD *)user + 2) << 6)) & 0x60000000;
  *((_DWORD *)&pOut->battle + 1) ^= (*((_DWORD *)&pOut->battle + 1) ^ (*((_DWORD *)user + 3) >> 9)) & 3;
  *((_DWORD *)&pOut->battle + 2) = *((_DWORD *)user + 5);
}

void __fastcall NetManager::setTeamAndOrder(
        NetManager *this,
        NET_USER_DATA *pOut,
        unsigned __int8 teamId,
        unsigned __int8 order,
        unsigned __int8 order2,
        unsigned __int8 order3,
        bool my)
{
  unsigned int v7; // er10

  *((_DWORD *)pOut + 4) &= ~0x100000u;
  *((_DWORD *)pOut + 3) &= 0xFFFFE7FF;
  *((_DWORD *)pOut + 4) |= (teamId & 1) << 20;
  v7 = *((_DWORD *)pOut + 2) & 0xF9FFE7FF | ((order & 3) << 11);
  *((_DWORD *)pOut + 2) = v7;
  if ( order )
  {
    if ( teamId )
    {
      if ( teamId == 1 )
      {
        *((_DWORD *)pOut + 2) = v7 & 0xFFFFF800 | 0xC;
        if ( my )
        {
          this->gamedata.userInfo.m_Character[0].m_CharacterId = CHARACTER_NO_IOR;
          goto LABEL_8;
        }
      }
    }
    else
    {
      *((_DWORD *)pOut + 2) = v7 & 0xFFFFF800;
      if ( my )
      {
        this->gamedata.userInfo.m_Character[0].m_CharacterId = CHARACTER_NO_KYO;
LABEL_8:
        *(_WORD *)&this->gamedata.userInfo.m_Character[0].m_ColorId = 0;
      }
    }
  }
  *((_DWORD *)pOut + 2) &= 0xF7FFDFFF;
  *((_DWORD *)pOut + 3) &= ~0x2000u;
}

void __fastcall NetManager::setUserDataFromRoomMemberInfo(
        NetManager *this,
        ROOM_USER_DATA *pRoomMemberList,
        unsigned __int8 roomMemberNum,
        unsigned __int8 myNo)
{
  ROOM_USER_DATA *v6; // r11
  NetManager *v7; // rsi
  _DWORD *v8; // r10
  int v9; // er14
  __int64 v10; // rbx
  unsigned int *v11; // r10
  ROOM_USER_DATA *v12; // r11
  int v13; // edx
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rax
  int v16; // ebx
  __int64 *v17; // rdi
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  int v19; // [rsp+28h] [rbp-40h]

  v18 = 0i64;
  v19 = 0;
  v6 = pRoomMemberList;
  v7 = this;
  if ( roomMemberNum )
  {
    v8 = (_DWORD *)((char *)pRoomMemberList + 8);
    v9 = myNo;
    v10 = roomMemberNum;
    do
    {
      NetManager::convertUserDataFromRoomMember(this, &v7->gamedata.player_data[(*v8 >> 22) & 0xF], v6);
      if ( v9 == ((*v11 >> 22) & 0xF) )
        *((_DWORD *)&v7->gamedata.player_data[myNo] + 4) ^= (*((_DWORD *)&v7->gamedata.player_data[myNo] + 4) ^ (v7->gamedata.userInfo.m_Antenna << 15)) & 0x38000;
      LOBYTE(v13) = 0;
      v14 = v11[1] & 0x7F;
      if ( v14 > 0xCu )
        v13 = (v14 - 1) / 12;
      v6 = v12 + 1;
      this = (NetManager *)((v11[1] >> 10) & 7);
      v7->gamedata.tableBattleType[(unsigned __int8)v13] = (int)this;
      v15 = *v11;
      v8 = v11 + 5;
      *((_BYTE *)&v18 + ((v15 >> 22) & 0xF)) = 1;
      --v10;
    }
    while ( v10 );
  }
  v16 = 0;
  v17 = &v18;
  do
  {
    if ( !*(_BYTE *)v17 )
      NetManager::clearPlayerData(v7, v16);
    ++v16;
    v17 = (__int64 *)((char *)v17 + 1);
  }
  while ( v16 < 12 );
  v7->gamedata.roomPlayerCount = roomMemberNum + 1;
}

void __fastcall NetManager::setUserDataFromRoomMemberInfo(
        NetManager *this,
        ROOM_USER_DATA_RANK *pRoomMemberList,
        unsigned __int8 roomMemberNum)
{
  ROOM_USER_DATA_RANK *v4; // rdi
  unsigned int *v6; // rbx
  __int64 v7; // rbp
  int v8; // edx
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rax
  int v11; // ebx
  __int64 *v12; // rdi
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+28h] [rbp-30h]

  v13 = 0i64;
  v4 = pRoomMemberList;
  v14 = 0;
  if ( roomMemberNum )
  {
    v6 = (unsigned int *)((char *)pRoomMemberList + 8);
    v7 = roomMemberNum;
    do
    {
      NetManager::convertUserDataFromRoomMember(this, &this->gamedata.player_data[(*v6 >> 22) & 0xF], v4);
      LOBYTE(v8) = 0;
      v9 = v6[1] & 0x7F;
      if ( v9 > 0xCu )
        v8 = (v9 - 1) / 12;
      ++v4;
      this->gamedata.tableBattleType[(unsigned __int8)v8] = (v6[1] >> 10) & 7;
      v10 = *v6;
      v6 += 12;
      *((_BYTE *)&v13 + ((v10 >> 22) & 0xF)) = 1;
      --v7;
    }
    while ( v7 );
  }
  v11 = 0;
  v12 = &v13;
  do
  {
    if ( !*(_BYTE *)v12 )
      NetManager::clearPlayerData(this, v11);
    ++v11;
    v12 = (__int64 *)((char *)v12 + 1);
  }
  while ( v11 < 12 );
  this->gamedata.roomPlayerCount = roomMemberNum + 1;
}

void __fastcall NetManager::sortRoomInfoForRtt(NetManager *this, Fw::ROOM_ATTR *pRoomAttrList, int roomNum)
{
  __int64 v3; // rbx
  int v5; // esi
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // r11
  __int64 v10; // rbx
  __int64 v11; // r10
  Fw::ROOM_ATTR *v12; // r8
  Fw::ROOM_ATTR *v13; // rdx
  Fw::ROOM_ATTR *v14; // rax
  Fw::ROOM_ATTR *p_ptr; // rcx
  __int64 v16; // r9
  Fw::ROOM_ATTR *v17; // rax
  __int64 v18; // rcx
  Fw::ROOM_ATTR *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r11
  __int64 v22; // r10
  Fw::ROOM_ATTR *v23; // rdx
  Fw::ROOM_ATTR *v24; // rax
  Fw::ROOM_ATTR *v25; // rcx
  Fw::ROOM_ATTR *v26; // r8
  __int64 v27; // r9
  Fw::ROOM_ATTR *v28; // rcx
  __int64 v29; // r8
  Fw::ROOM_ATTR *v30; // rcx
  __int64 v31; // rdx
  Fw::ROOM_ATTR ptr; // [rsp+30h] [rbp-478h] BYREF

  v3 = roomNum;
  Fw::ROOM_ATTR::ROOM_ATTR(&ptr);
  v5 = v3 - 1;
  v6 = v3;
  v7 = 0i64;
  if ( (int)v3 - 1 > 0 )
  {
    v8 = v3 - 1;
    v9 = 0i64;
    v10 = (unsigned int)v5;
    do
    {
      v11 = v8;
      while ( v11 > v9 )
      {
        v12 = &pRoomAttrList[v11--];
        v13 = &pRoomAttrList[v11];
        if ( (v13->m_Attr[2].num & 0xF0u) < (v12->m_Attr[2].num & 0xF0u) )
        {
          v14 = v12;
          p_ptr = &ptr;
          v16 = 8i64;
          do
          {
            *(_OWORD *)&p_ptr->m_Attr[0].num = *(_OWORD *)&v14->m_Attr[0].num;
            *(_OWORD *)&p_ptr->m_Attr[1].attributeIndex = *(_OWORD *)&v14->m_Attr[1].attributeIndex;
            *(_OWORD *)&p_ptr->m_Attr[2].searchOperator = *(_OWORD *)&v14->m_Attr[2].searchOperator;
            *(_OWORD *)&p_ptr->m_Attr[4].num = *(_OWORD *)&v14->m_Attr[4].num;
            *(_OWORD *)&p_ptr->m_Attr[5].attributeIndex = *(_OWORD *)&v14->m_Attr[5].attributeIndex;
            *(_OWORD *)&p_ptr->m_Attr[6].searchOperator = *(_OWORD *)&v14->m_Attr[6].searchOperator;
            *(_OWORD *)&p_ptr->m_Attr[8].num = *(_OWORD *)&v14->m_Attr[8].num;
            p_ptr = (Fw::ROOM_ATTR *)((char *)p_ptr + 128);
            *(_OWORD *)&p_ptr[-1].m_RoomId.m_steamid.m_comp = *(_OWORD *)&v14->m_Attr[9].attributeIndex;
            v14 = (Fw::ROOM_ATTR *)((char *)v14 + 128);
            --v16;
          }
          while ( v16 );
          *(_OWORD *)&p_ptr->m_Attr[0].num = *(_OWORD *)&v14->m_Attr[0].num;
          *(_OWORD *)&p_ptr->m_Attr[1].attributeIndex = *(_OWORD *)&v14->m_Attr[1].attributeIndex;
          *(_OWORD *)&p_ptr->m_Attr[2].searchOperator = *(_OWORD *)&v14->m_Attr[2].searchOperator;
          *(_QWORD *)&p_ptr->m_Attr[4].num = *(_QWORD *)&v14->m_Attr[4].num;
          v17 = &pRoomAttrList[v11];
          v18 = 8i64;
          do
          {
            *(_OWORD *)&v12->m_Attr[0].num = *(_OWORD *)&v17->m_Attr[0].num;
            *(_OWORD *)&v12->m_Attr[1].attributeIndex = *(_OWORD *)&v17->m_Attr[1].attributeIndex;
            *(_OWORD *)&v12->m_Attr[2].searchOperator = *(_OWORD *)&v17->m_Attr[2].searchOperator;
            *(_OWORD *)&v12->m_Attr[4].num = *(_OWORD *)&v17->m_Attr[4].num;
            *(_OWORD *)&v12->m_Attr[5].attributeIndex = *(_OWORD *)&v17->m_Attr[5].attributeIndex;
            *(_OWORD *)&v12->m_Attr[6].searchOperator = *(_OWORD *)&v17->m_Attr[6].searchOperator;
            *(_OWORD *)&v12->m_Attr[8].num = *(_OWORD *)&v17->m_Attr[8].num;
            v12 = (Fw::ROOM_ATTR *)((char *)v12 + 128);
            *(_OWORD *)&v12[-1].m_RoomId.m_steamid.m_comp = *(_OWORD *)&v17->m_Attr[9].attributeIndex;
            v17 = (Fw::ROOM_ATTR *)((char *)v17 + 128);
            --v18;
          }
          while ( v18 );
          *(_OWORD *)&v12->m_Attr[0].num = *(_OWORD *)&v17->m_Attr[0].num;
          *(_OWORD *)&v12->m_Attr[1].attributeIndex = *(_OWORD *)&v17->m_Attr[1].attributeIndex;
          *(_OWORD *)&v12->m_Attr[2].searchOperator = *(_OWORD *)&v17->m_Attr[2].searchOperator;
          *(_QWORD *)&v12->m_Attr[4].num = *(_QWORD *)&v17->m_Attr[4].num;
          v19 = &ptr;
          v20 = 8i64;
          do
          {
            *(_OWORD *)&v13->m_Attr[0].num = *(_OWORD *)&v19->m_Attr[0].num;
            *(_OWORD *)&v13->m_Attr[1].attributeIndex = *(_OWORD *)&v19->m_Attr[1].attributeIndex;
            *(_OWORD *)&v13->m_Attr[2].searchOperator = *(_OWORD *)&v19->m_Attr[2].searchOperator;
            *(_OWORD *)&v13->m_Attr[4].num = *(_OWORD *)&v19->m_Attr[4].num;
            *(_OWORD *)&v13->m_Attr[5].attributeIndex = *(_OWORD *)&v19->m_Attr[5].attributeIndex;
            *(_OWORD *)&v13->m_Attr[6].searchOperator = *(_OWORD *)&v19->m_Attr[6].searchOperator;
            *(_OWORD *)&v13->m_Attr[8].num = *(_OWORD *)&v19->m_Attr[8].num;
            v13 = (Fw::ROOM_ATTR *)((char *)v13 + 128);
            *(_OWORD *)&v13[-1].m_RoomId.m_steamid.m_comp = *(_OWORD *)&v19->m_Attr[9].attributeIndex;
            v19 = (Fw::ROOM_ATTR *)((char *)v19 + 128);
            --v20;
          }
          while ( v20 );
          *(_OWORD *)&v13->m_Attr[0].num = *(_OWORD *)&v19->m_Attr[0].num;
          *(_OWORD *)&v13->m_Attr[1].attributeIndex = *(_OWORD *)&v19->m_Attr[1].attributeIndex;
          *(_OWORD *)&v13->m_Attr[2].searchOperator = *(_OWORD *)&v19->m_Attr[2].searchOperator;
          *(_QWORD *)&v13->m_Attr[4].num = *(_QWORD *)&v19->m_Attr[4].num;
        }
      }
      ++v9;
      --v10;
    }
    while ( v10 );
    if ( v5 > 0 )
    {
      v21 = (unsigned int)v5;
      do
      {
        v22 = v6 - 1;
        while ( v22 > v7 )
        {
          v23 = &pRoomAttrList[v22--];
          v24 = &pRoomAttrList[v22];
          if ( ((LOBYTE(v23->m_Attr[2].num) ^ LOBYTE(v24->m_Attr[2].num)) & 0xF0) == 0
            && v23->m_Read.m_Rtt < v24->m_Read.m_Rtt )
          {
            v25 = v23;
            v26 = &ptr;
            v27 = 8i64;
            do
            {
              *(_OWORD *)&v26->m_Attr[0].num = *(_OWORD *)&v25->m_Attr[0].num;
              *(_OWORD *)&v26->m_Attr[1].attributeIndex = *(_OWORD *)&v25->m_Attr[1].attributeIndex;
              *(_OWORD *)&v26->m_Attr[2].searchOperator = *(_OWORD *)&v25->m_Attr[2].searchOperator;
              *(_OWORD *)&v26->m_Attr[4].num = *(_OWORD *)&v25->m_Attr[4].num;
              *(_OWORD *)&v26->m_Attr[5].attributeIndex = *(_OWORD *)&v25->m_Attr[5].attributeIndex;
              *(_OWORD *)&v26->m_Attr[6].searchOperator = *(_OWORD *)&v25->m_Attr[6].searchOperator;
              *(_OWORD *)&v26->m_Attr[8].num = *(_OWORD *)&v25->m_Attr[8].num;
              v26 = (Fw::ROOM_ATTR *)((char *)v26 + 128);
              *(_OWORD *)&v26[-1].m_RoomId.m_steamid.m_comp = *(_OWORD *)&v25->m_Attr[9].attributeIndex;
              v25 = (Fw::ROOM_ATTR *)((char *)v25 + 128);
              --v27;
            }
            while ( v27 );
            *(_OWORD *)&v26->m_Attr[0].num = *(_OWORD *)&v25->m_Attr[0].num;
            *(_OWORD *)&v26->m_Attr[1].attributeIndex = *(_OWORD *)&v25->m_Attr[1].attributeIndex;
            *(_OWORD *)&v26->m_Attr[2].searchOperator = *(_OWORD *)&v25->m_Attr[2].searchOperator;
            *(_QWORD *)&v26->m_Attr[4].num = *(_QWORD *)&v25->m_Attr[4].num;
            v28 = &pRoomAttrList[v22];
            v29 = 8i64;
            do
            {
              *(_OWORD *)&v23->m_Attr[0].num = *(_OWORD *)&v28->m_Attr[0].num;
              *(_OWORD *)&v23->m_Attr[1].attributeIndex = *(_OWORD *)&v28->m_Attr[1].attributeIndex;
              *(_OWORD *)&v23->m_Attr[2].searchOperator = *(_OWORD *)&v28->m_Attr[2].searchOperator;
              *(_OWORD *)&v23->m_Attr[4].num = *(_OWORD *)&v28->m_Attr[4].num;
              *(_OWORD *)&v23->m_Attr[5].attributeIndex = *(_OWORD *)&v28->m_Attr[5].attributeIndex;
              *(_OWORD *)&v23->m_Attr[6].searchOperator = *(_OWORD *)&v28->m_Attr[6].searchOperator;
              *(_OWORD *)&v23->m_Attr[8].num = *(_OWORD *)&v28->m_Attr[8].num;
              v23 = (Fw::ROOM_ATTR *)((char *)v23 + 128);
              *(_OWORD *)&v23[-1].m_RoomId.m_steamid.m_comp = *(_OWORD *)&v28->m_Attr[9].attributeIndex;
              v28 = (Fw::ROOM_ATTR *)((char *)v28 + 128);
              --v29;
            }
            while ( v29 );
            *(_OWORD *)&v23->m_Attr[0].num = *(_OWORD *)&v28->m_Attr[0].num;
            *(_OWORD *)&v23->m_Attr[1].attributeIndex = *(_OWORD *)&v28->m_Attr[1].attributeIndex;
            *(_OWORD *)&v23->m_Attr[2].searchOperator = *(_OWORD *)&v28->m_Attr[2].searchOperator;
            *(_QWORD *)&v23->m_Attr[4].num = *(_QWORD *)&v28->m_Attr[4].num;
            v30 = &ptr;
            v31 = 8i64;
            do
            {
              *(_OWORD *)&v24->m_Attr[0].num = *(_OWORD *)&v30->m_Attr[0].num;
              *(_OWORD *)&v24->m_Attr[1].attributeIndex = *(_OWORD *)&v30->m_Attr[1].attributeIndex;
              *(_OWORD *)&v24->m_Attr[2].searchOperator = *(_OWORD *)&v30->m_Attr[2].searchOperator;
              *(_OWORD *)&v24->m_Attr[4].num = *(_OWORD *)&v30->m_Attr[4].num;
              *(_OWORD *)&v24->m_Attr[5].attributeIndex = *(_OWORD *)&v30->m_Attr[5].attributeIndex;
              *(_OWORD *)&v24->m_Attr[6].searchOperator = *(_OWORD *)&v30->m_Attr[6].searchOperator;
              *(_OWORD *)&v24->m_Attr[8].num = *(_OWORD *)&v30->m_Attr[8].num;
              v24 = (Fw::ROOM_ATTR *)((char *)v24 + 128);
              *(_OWORD *)&v24[-1].m_RoomId.m_steamid.m_comp = *(_OWORD *)&v30->m_Attr[9].attributeIndex;
              v30 = (Fw::ROOM_ATTR *)((char *)v30 + 128);
              --v31;
            }
            while ( v31 );
            *(_OWORD *)&v24->m_Attr[0].num = *(_OWORD *)&v30->m_Attr[0].num;
            *(_OWORD *)&v24->m_Attr[1].attributeIndex = *(_OWORD *)&v30->m_Attr[1].attributeIndex;
            *(_OWORD *)&v24->m_Attr[2].searchOperator = *(_OWORD *)&v30->m_Attr[2].searchOperator;
            *(_QWORD *)&v24->m_Attr[4].num = *(_QWORD *)&v30->m_Attr[4].num;
          }
        }
        ++v7;
        --v21;
      }
      while ( v21 );
    }
  }
  `eh vector destructor iterator'(
    ptr.m_BlockedUser,
    0x10ui64,
    0x20ui64,
    (void (__fastcall *)(void *))AgUtilities::captureScreenshot);
  AgString::~AgString(&ptr.m_RoomOwner.handle);
}

void __fastcall NetManager::updateBattle(NetManager *this)
{
  __int64 v2; // rdx
  const char *v3; // rcx
  bool IsRoomOwner; // di
  __int64 v5; // rdx
  __int64 v6; // r8
  extension::SoundManager *v7; // rax
  int v8; // er8
  ONLINE_STATE v9; // edx
  extension::SoundManager *v10; // [rsp+40h] [rbp+8h]

  if ( this->gamedata.gameRule == GAME_RULE_TRAINING )
  {
    AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
    IsRoomOwner = Fw::MatchingTarget::IsRoomOwner(v3, v2);
    v5 = 2885i64;
    if ( IsRoomOwner )
      v5 = 2920i64;
    if ( *((_BYTE *)&this->m_sendThreadHost.__vftable + v5) == 3 )
    {
      v6 = *(_QWORD *)&AppMain::pApp;
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2507448i64) = 1;
      *(_BYTE *)(v6 + 2182456) = 0;
      *(_DWORD *)(v6 + 7376) = -1;
      *(_DWORD *)(v6 + 7368) = 148;
      *(_DWORD *)(v6 + 7352) = 0;
      *(_DWORD *)(v6 + 2507468) = 181;
      *(_WORD *)(v6 + 2507472) = 0;
      *(_DWORD *)(v6 + 2507452) = 30;
      *(_QWORD *)(v6 + 2507456) = 255i64;
      *(_DWORD *)(v6 + 2507464) = 1000 * *(unsigned __int8 *)(v6 + 2507456) / 30;
      *(_BYTE *)(v6 + 2507474) = 0;
      *(_DWORD *)(v6 + 7364) = 170;
      v7 = extension::SoundManager::the_instance;
      if ( !extension::SoundManager::the_instance )
      {
        v10 = (extension::SoundManager *)operator new(0x310ui64);
        extension::SoundManager::SoundManager(v10);
        extension::SoundManager::the_instance = v7;
      }
      extension::SoundManager::stopBGM(v7, 0.5);
      v9 = NET_STATE_WAITSTART;
      if ( IsRoomOwner )
        v9 = NET_STATE_WAITCLIENT;
      NetManager::ChangeState(this, v9, v8);
    }
  }
}

void __fastcall NetManager::updateCreatingRoom(NetManager *this, __int64 a2, int a3)
{
  GAME_MODE v4; // edx
  CSteamID::SteamID_t v5; // rbp
  GAME_RULE gameRule; // edi
  int v7; // ebx
  __int32 v8; // edi
  __int32 v9; // edi
  extension::TranslateTable *v10; // r9
  const std::pair<char const *,enum LANGUAGE_MODE> *v11; // rcx
  const char *first; // rax
  const char *v13; // rdx
  const std::pair<char const *,enum LANGUAGE_MODE> *v14; // rcx
  const std::pair<char const *,enum LANGUAGE_MODE> *v15; // rcx
  const std::pair<char const *,enum LANGUAGE_MODE> *v16; // rcx
  const char *v17; // r8
  const char *v18; // rax
  GameDataInfo *v19; // rcx
  char v20[336]; // [rsp+20h] [rbp-168h] BYREF

  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v19);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v4 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  if ( (unsigned int)(v4 - 4) > 2 && v4 != GAME_MODE_ONLINETRAINING )
    goto LABEL_4;
  if ( NetManager::isTimeout(this, 0x2FAF080ui64) )
  {
    NetManager::ChangeState(this, NET_STATE_TOP, a3);
    this->gamedata.error = NETWORK_ERROR_TYPE_TIMEOUT;
  }
  if ( this->gamedata.m_SessionCreating )
  {
LABEL_4:
    NetManager::ChangeState(this, NET_STATE_CREATECOMPLETE, a3);
    return;
  }
  v5.m_comp = Fw::MatchingTarget::m_RoomId.m_steamid.m_comp;
  if ( Fw::MatchingTarget::m_RoomId.m_steamid.m_comp )
  {
    gameRule = this->gamedata.gameRule;
    if ( this->gamedata.matchMode != NETWORK_MATCHING_TYPE_FREE )
    {
LABEL_39:
      changeRoomData = (ChangeRoomDataList)1i64;
      this->gamedata.m_SessionCreating = 1;
      return;
    }
    memset(v20, 0, sizeof(v20));
    v7 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64);
    strncpy(&v20[16], "KOF XIV", 0x20ui64);
    strncpy(v20, "owner-migration", 0x10ui64);
    if ( gameRule )
    {
      v8 = gameRule - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 != 1 )
          {
LABEL_38:
            Fw::InvitationCommon::m_SessionId.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)v5.m_unAll64Bits;
            Fw::InvitationCommon::m_SessionFlag = 1;
            goto LABEL_39;
          }
          v10 = extension::TranslateTable::Instance();
          v11 = extension::auxscript::MyLangCodeNameTable;
          while ( v11->second != v7 )
          {
            if ( ++v11 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
            {
              first = 0i64;
              v13 = "ONLINEMENU_ONLINETRAINING";
              goto LABEL_35;
            }
          }
          first = v11->first;
          v13 = "ONLINEMENU_ONLINETRAINING";
        }
        else
        {
          v10 = extension::TranslateTable::Instance();
          v14 = extension::auxscript::MyLangCodeNameTable;
          while ( v14->second != v7 )
          {
            if ( ++v14 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
            {
              first = 0i64;
              v13 = "ORDER_SUBTITLE_FREE_PARTYVS";
              goto LABEL_35;
            }
          }
          first = v14->first;
          v13 = "ORDER_SUBTITLE_FREE_PARTYVS";
        }
      }
      else
      {
        v10 = extension::TranslateTable::Instance();
        v15 = extension::auxscript::MyLangCodeNameTable;
        while ( v15->second != v7 )
        {
          if ( ++v15 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
          {
            first = 0i64;
            v13 = "ORDER_SUBTITLE_FREE_TEAMVS";
            goto LABEL_35;
          }
        }
        first = v15->first;
        v13 = "ORDER_SUBTITLE_FREE_TEAMVS";
      }
    }
    else
    {
      v10 = extension::TranslateTable::Instance();
      v16 = extension::auxscript::MyLangCodeNameTable;
      while ( v16->second != v7 )
      {
        if ( ++v16 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
        {
          first = 0i64;
          goto LABEL_34;
        }
      }
      first = v16->first;
LABEL_34:
      v13 = "ORDER_SUBTITLE_FREE_SINGLEVS";
    }
LABEL_35:
    v17 = "en_US";
    if ( first )
      v17 = first;
    v18 = extension::TranslateTable::executeTranslate(v10, v13, v17);
    sprintf(&v20[48], "%s", v18);
    goto LABEL_38;
  }
}

void __fastcall NetManager::updateJoiningRoom(NetManager *this)
{
  int v2; // er8
  char v3; // al
  int v4; // edi
  CSteamID *v5; // rsi
  __int64 v6; // r9
  bool v7; // dl

  if ( this->gamedata.error == NETWORK_ERROR_TYPE_NONE && NetManager::isTimeout(this, 0x2FAF080ui64) )
  {
    v3 = 0;
    if ( Fw::MatchingTarget::m_RoomId.m_steamid.m_comp )
    {
      Fw::MatchingTarget::LeaveRoom();
      v3 = 1;
    }
    if ( this->gamedata.matchMode == NETWORK_MATCHING_TYPE_RANK
      && !v3
      && (v4 = this->gamedata.selectRoomIdx + 1,
          v5 = (CSteamID *)((char *)this + 1080 * v4),
          CSteamID::IsValid(v5 + 1031)) )
    {
      NetManager::updateRoomInfo(this, (Fw::ROOM_ATTR *)((char *)this->m_SearchEndRoomAttr + v6));
      Fw::MatchingSystem::JoinRoom(v5[1031], v7);
      this->gamedata.selectRoomIdx = v4;
      NetManager::updateTimeStamp(this);
    }
    else
    {
      NetManager::ChangeState(this, NET_STATE_TOP, v2);
      this->gamedata.error = NETWORK_ERROR_TYPE_ROOMNOTFOUND;
    }
  }
}

void __fastcall NetManager::updateRoomInfo(NetManager *this, Fw::ROOM_ATTR *pRoomAttr)
{
  int v2; // er9
  NETWORK_ANTENNA_SELECT_UI v3; // er10
  int v4; // eax
  int num; // eax

  v2 = 0;
  v3 = NETWORK_ANTENNA_SELECT_UI_LEVEL4;
  switch ( pRoomAttr->m_WorldIdIndex )
  {
    case 0:
    case 5:
      this->gamedata.matchMode = NETWORK_MATCHING_TYPE_RANK;
      this->gamedata.gameRule = GAME_RULE_TEAM;
      this->gamedata.roomBattleType = NETWORK_ROOM_BATTLE_TYPE_FREE;
      this->gamedata.roundTimerType = BATTLE_ROUND_TIMER_TYPE_NONE;
      this->gamedata.roundType = NETWORK_ROUND_SELECT_NONE;
      break;
    case 1:
      *(_QWORD *)&this->gamedata.matchMode = 2i64;
      this->gamedata.roomBattleType = pRoomAttr->m_Attr[5].num & 0xF;
      this->gamedata.roundTimerType = pRoomAttr->m_Attr[7].num;
      this->gamedata.roundType = pRoomAttr->m_Attr[6].num;
      break;
    case 2:
      this->gamedata.gameRule = GAME_RULE_TEAM;
      goto LABEL_5;
    case 3:
      this->gamedata.gameRule = GAME_RULE_PARTY;
LABEL_5:
      this->gamedata.matchMode = NETWORK_MATCHING_TYPE_FREE;
      this->gamedata.roomBattleType = pRoomAttr->m_Attr[5].num & 0xF;
      *(_QWORD *)&this->gamedata.roundTimerType = (unsigned int)pRoomAttr->m_Attr[7].num;
      break;
    case 7:
      this->gamedata.matchMode = NETWORK_MATCHING_TYPE_FREE;
      this->gamedata.gameRule = GAME_RULE_TRAINING;
      v4 = pRoomAttr->m_Attr[5].num & 0xF;
      *(_QWORD *)&this->gamedata.roundTimerType = 3i64;
      this->gamedata.roomBattleType = v4;
      break;
    default:
      break;
  }
  this->gamedata.searchAreaId = pRoomAttr->m_Attr[1].num;
  num = pRoomAttr->m_Attr[2].num;
  if ( num == 48 )
  {
    this->gamedata.antennaType = NETWORK_ANTENNA_SELECT_UI_LEVEL2;
  }
  else if ( num == 64 )
  {
    this->gamedata.antennaType = NETWORK_ANTENNA_SELECT_UI_LEVEL3;
  }
  else
  {
    if ( num != 80 )
      v3 = NETWORK_ANTENNA_SELECT_UI_NONE;
    this->gamedata.antennaType = v3;
  }
  LOBYTE(v2) = pRoomAttr->m_Attr[4].num < 16;
  this->gamedata.successHighRateFlag = v2 - 1;
  this->gamedata.liveType = (pRoomAttr->m_Attr[0].num & 0x1000) == 0;
  this->gamedata.maxSlot = pRoomAttr->m_MaxSlot;
  this->gamedata.privateSlot = pRoomAttr->m_PrivateSlotNum;
  *(_OWORD *)this->gamedata.m_RoomName = *(_OWORD *)pRoomAttr->m_RoomName;
  *(_OWORD *)&this->gamedata.m_RoomName[16] = *(_OWORD *)&pRoomAttr->m_RoomName[16];
  *(_OWORD *)&this->gamedata.m_RoomName[32] = *(_OWORD *)&pRoomAttr->m_RoomName[32];
  *(_OWORD *)&this->gamedata.m_RoomName[48] = *(_OWORD *)&pRoomAttr->m_RoomName[48];
  *(_OWORD *)&this->gamedata.m_RoomName[64] = *(_OWORD *)&pRoomAttr->m_RoomName[64];
  *(_OWORD *)&this->gamedata.m_RoomName[80] = *(_OWORD *)&pRoomAttr->m_RoomName[80];
  *(_OWORD *)&this->gamedata.m_RoomName[96] = *(_OWORD *)&pRoomAttr->m_RoomName[96];
  *(_OWORD *)&this->gamedata.m_RoomName[112] = *(_OWORD *)&pRoomAttr->m_RoomName[112];
  this->gamedata.m_RoomName[128] = pRoomAttr->m_RoomName[128];
}

void __fastcall NetManager::updateSearchingRoom(NetManager *this, __int64 a2, int a3)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  int v6; // er8
  unsigned __int64 CurrentTick; // rax
  unsigned __int64 m_TimeStamp; // rcx
  int v9; // er8
  __int64 v10; // rcx
  bool *p_qosFlag; // rax
  unsigned int m_SearchRoomCount; // er11
  AppMain *v13; // r10
  RANKMATCH_RANK RankMatchRank; // eax
  AppMain *v15; // r10
  int v16; // er11
  int start; // eax
  int v18; // er8
  int v19; // er8
  AppMain::RANK_MATCH_GRADE_RANGE pOut; // [rsp+30h] [rbp-18h] BYREF

  if ( Fw::MatchingTarget::m_IsRoomSearchEnd )
  {
    v4 = Fw::MatchingTarget::m_SearchRoomNum;
    if ( Fw::MatchingTarget::m_SearchRoomNum )
    {
      v5 = Fw::MatchingTarget::m_QosEndRoomNum;
      AgTrace("NetManager::QoS completed");
      NetManager::ChangeState(this, NET_STATE_SELECTROOM, v6);
      if ( v4 > v5 )
      {
        CurrentTick = Fw::Rtc::GetCurrentTick();
        m_TimeStamp = this->gamedata.m_TimeStamp;
        if ( m_TimeStamp < CurrentTick && CurrentTick - m_TimeStamp > 0x989680 )
        {
          AgTrace("NetManager::QoS timeout");
          v10 = Fw::MatchingTarget::m_SearchRoomNum;
          if ( Fw::MatchingTarget::m_SearchRoomNum )
          {
            p_qosFlag = &Fw::MatchingTarget::SearchRoomInfo[0].qosFlag;
            do
            {
              if ( !*p_qosFlag )
              {
                *((_DWORD *)p_qosFlag - 36) = 2147483646;
                *p_qosFlag = 1;
              }
              p_qosFlag += 576;
              --v10;
            }
            while ( v10 );
          }
          NetManager::ChangeState(this, NET_STATE_SELECTROOM, v9);
        }
      }
    }
    else
    {
      m_SearchRoomCount = this->gamedata.m_SearchRoomCount;
      if ( m_SearchRoomCount >= 3 )
      {
        this->gamedata.m_SearchRoomLimit = 1;
        NetManager::ChangeState(this, NET_STATE_TOP, a3);
      }
      else
      {
        v13 = *(AppMain **)&AppMain::pApp;
        this->gamedata.m_SearchRoomCount = m_SearchRoomCount + 1;
        RankMatchRank = (unsigned int)AppMain::GetRankMatchRank(v13, 0);
        AppMain::GetRankMatchGradeRange(v15, RankMatchRank, v16, &pOut, v15->SearchSetting.m_GradeSelect);
        start = pOut.start;
        this->gamedata.m_SearchRoomAttr.m_WorldIdIndex = pOut.worldIdIndex;
        this->gamedata.m_SearchRoomAttr.m_Attr[5].num = start;
        this->gamedata.m_SearchRoomAttr.m_Attr[6].num = pOut.end;
        this->gamedata.m_SearchRoomAttr.m_Attr[5].searchOperator = 5;
        this->gamedata.m_SearchRoomAttr.m_Attr[6].searchOperator = 3;
        this->gamedata.m_SearchRoomAttr.m_Attr[7].num = 86016;
        this->gamedata.m_SearchRoomAttr.m_Attr[7].searchOperator = 5;
        Fw::MatchingTarget::SearchRoom(&this->gamedata.m_SearchRoomAttr);
        NetManager::ChangeState(this, NET_STATE_SEARCHINGROOM, v18);
      }
    }
  }
  else if ( NetManager::isTimeout(this, 0x2FAF080ui64) )
  {
    NetManager::ChangeState(this, NET_STATE_TOP, v19);
    this->gamedata.error = NETWORK_ERROR_TYPE_TIMEOUT;
  }
}

void __fastcall NetManager::updateTimeStamp(NetManager *this)
{
  double v2; // xmm0_8
  unsigned __int64 v3; // rdx

  v2 = AgClock::getSystemTime() * 1000000.0;
  v3 = 0i64;
  if ( v2 >= 9.223372036854776e18 )
  {
    v2 = v2 - 9.223372036854776e18;
    if ( v2 < 9.223372036854776e18 )
      v3 = 0x8000000000000000ui64;
  }
  this->gamedata.m_TimeStamp = v3 + (unsigned int)(int)v2;
}

void __fastcall NetManager::updateTop(NetManager *this, __int64 a2, int a3)
{
  BattleSystem::BattleController *v4; // rax
  BattleSystem::BattleController *v5; // [rsp+40h] [rbp+8h]

  if ( this->gamedata.reservationCreateRoomFlag )
  {
    v4 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v5 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v5);
      BattleSystem::BattleController::instance = v4;
    }
    if ( v4->roundPhase == DIE && *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 7352i64) == 179 )
    {
      NetManager::ChangeState(this, NET_STATE_TRAININGWAIT, a3);
      this->gamedata.reservationCreateRoomFlag = 0;
    }
  }
}

void __fastcall NetManager::updateWaitStart(NetManager *this)
{
  int v2; // er8

  if ( !Fw::MatchingTarget::m_RoomKickoutFlag && this->gamedata.error == NETWORK_ERROR_TYPE_NONE )
  {
    if ( this->gamedata.matchMode == NETWORK_MATCHING_TYPE_RANK && NetManager::isTimeout(this, 0x2625A00ui64)
      || (NetManager::checkRoomMemberAntenna(this),
          this->gamedata.userInfo.m_OnlineID.data != this->gamedata.player_data[(unsigned __int8)this->gamedata.myNo].steamId) )
    {
      NetManager::ChangeState(this, NET_STATE_TOP, v2);
      this->gamedata.error = NETWORK_ERROR_TYPE_JOIN_TIMEOUT;
    }
  }
}

