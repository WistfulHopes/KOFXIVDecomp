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
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/network/netbattle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_fontman.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
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
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_renderer.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectmanager/effecttaskmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageevent.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netbattle.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/battlecallanimation.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battlesub.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/content/contentsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/invitationcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/invitationsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleinputkey.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battlepause.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/prefightfaceoff/scene_prefightfaceoff.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A0AFB
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5C930
void AppMain::ST_BattleMainInit(); // 0x1401B11E0
void AppMain::ST_BattleSamplePlayInit(); // 0x1401B15F0
void AppMain::ST_BattleMainExit(); // 0x1401B1700
void AppMain::ST_BattleResultExit(); // 0x1401B20F0
bool AppMain::ST_BattleMainLoopInitialize(); // 0x1401B29C0
void AppMain::ST_BattleMainLoop(); // 0x1401B2FD0
void AppMain::ST_BattleMainLoopPartial(); // 0x1401B3170
void AppMain::ST_BattleMainDraw(); // 0x1401B3B10
void AppMain::BattleMainInit(); // 0x1401B3C10
void AppMain::BattleRoundInit(bool bDirectStart, bool bDataReload); // 0x1401B3D50
void AppMain::BattleMainLoop(long loopCounter, long loopSize); // 0x1401B4720
void AppMain::BattleMainLoopDraw(long loopCounter, long loopSize); // 0x1401B51B0
void AppMain::BattleMainDraw(); // 0x1401B5D60
bool AppMain::PauseCheck(); // 0x1401B7240
void AppMain::ReplayControll(); // 0x1401B76F0
bool AppMain::isPreloadingBattleStartAnimation(); // 0x1401B8100
void AppMain::entryBattleStartAnimation(); // 0x1401B81B0
void AppMain::TraningWait4RankmatchSTExit(long st_exit); // 0x1401B8320//decompilation failure at 1408A0AFB!
//decompilation failure at 140A5C930!
void __fastcall AppMain::BattleMainDraw(AppMain *this)
{
  BattleSystem::BattleController *v2; // rsi
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v4; // r15
  BattleSystem::BattleController *v5; // rax
  BattleSystem::BattleController::ROUND_PHASE roundPhase; // eax
  Framework::GLManager *v7; // rbp
  char v8; // bl
  int *iShadowPassSetting; // rax
  int *v10; // rax
  unsigned __int8 v11; // cl
  int *p_iModelCount; // r8
  __int64 v13; // r11
  int v14; // edx
  __int64 v15; // r9
  float y; // xmm2_4
  float x; // xmm1_4
  float shadLightRadius; // xmm0_4
  OGLRender *v19; // rax
  OGLRender *m_pRender; // rcx
  unsigned __int8 v21; // r8
  OGLRender *v22; // rdx
  int m_ShadowBlur; // eax
  int v24; // edx
  OGLRender *v25; // rax
  bool v26; // bl
  float v27; // xmm0_4
  float v28; // xmm0_4
  int fillType; // eax
  float v30; // xmm0_4
  float v31; // xmm3_4
  unsigned int m_FrameBufferID; // ecx
  Framework::GLManager *v33; // rbx
  OGLRender *v34; // rax
  OGLRender *v35; // rax
  int v36; // edx
  int v37; // edx
  int v38; // edx
  ActionBlackout *p_actBlack; // rdx
  int v40; // eax
  OGLRender *v41; // rdx
  __int64 v42; // r14
  __int64 i; // r11
  OGLModel **pModel; // rax
  int v45; // esi
  __int64 v46; // r10
  __int64 v47; // rbx
  OGLModel *v48; // r9
  OGLMaterial *v49; // rcx
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  OGLTexture **v52; // rcx
  unsigned __int64 v53; // rdx
  OGLModel *v54; // r9
  __int64 v55; // rax
  OGLTexture **v56; // rcx
  BattleStage *pBattleStage; // rcx
  int GimmickOGLModelCount; // ebp
  int j; // esi
  OGLModel *GimmickOGLModel; // rax
  OGLModel *v61; // r11
  int v62; // ebx
  __int64 v63; // r9
  __int64 v64; // r10
  OGLMaterial *v65; // rcx
  unsigned __int64 v66; // rdx
  __int64 v67; // rcx
  OGLTexture **v68; // rax
  unsigned __int64 v69; // rdx
  __int64 v70; // rcx
  OGLTexture **v71; // rax
  OGLModel **v72; // rax
  int v73; // ebx
  __int64 v74; // r8
  __int64 v75; // r11
  OGLModel *v76; // rdx
  OGLMaterial *v77; // rcx
  unsigned __int64 v78; // rdx
  OGLModel *v79; // r10
  __int64 v80; // rax
  OGLTexture **v81; // rcx
  unsigned int v82; // ecx
  Framework::GLManager *v83; // rbx
  int v84; // edx
  Graphics *g; // rcx
  std::bitset<98>::reference *v86; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v88; // rcx
  unsigned __int64 v89; // rax
  BattleSystem::BattleController *v90; // rcx
  std::bitset<98> *v91; // rcx
  std::bitset<98>::reference *v92; // rax
  unsigned __int64 v93; // rcx
  std::bitset<98> *Pbitset; // r8
  __int64 v95; // rdx
  unsigned __int64 v96; // rax
  unsigned int v97; // ecx
  bool v98; // bp
  bool v99; // si
  unsigned int v100; // edx
  Framework::GLManager *v101; // rbx
  int m_iScreenH; // er9
  int m_iScreenW; // er8
  Scaleform::Render::HAL *pObject; // rbx
  float v105; // xmm6_4
  extension::GFXIFontManager *v106; // rax
  unsigned int v107; // edx
  BattleCallAnimation *Animation; // rax
  BattleCallAnimation *v109; // rax
  Graphics *v110; // rbx
  BattleStage *v111; // rcx
  Graphics *v112; // rcx
  int width; // [rsp+20h] [rbp-A8h]
  int type; // [rsp+38h] [rbp-90h]
  int typea; // [rsp+38h] [rbp-90h]
  int typeb; // [rsp+38h] [rbp-90h]
  unsigned int v117; // [rsp+50h] [rbp-78h] BYREF
  GLint params; // [rsp+54h] [rbp-74h] BYREF
  __int64 v119; // [rsp+58h] [rbp-70h]
  std::bitset<98>::reference result; // [rsp+60h] [rbp-68h] BYREF
  std::bitset<98>::reference v121; // [rsp+70h] [rbp-58h] BYREF
  BattleSystem::BattleController *v122; // [rsp+D8h] [rbp+10h] BYREF
  bool v123; // [rsp+E0h] [rbp+18h]
  bool v124; // [rsp+E1h] [rbp+19h]
  unsigned int v125; // [rsp+E8h] [rbp+20h] BYREF

  v119 = -2i64;
  LODWORD(v122) = 0;
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v122 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v122);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  v4 = v2;
  if ( !v2 )
  {
    v122 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v122);
    v2 = v5;
    BattleSystem::BattleController::instance = v5;
  }
  roundPhase = v4->roundPhase;
  if ( roundPhase == INIT || roundPhase == (WALL|DIE) )
  {
    GraphicsOpt::lock(this->g);
    Graphics::clearScreen(v112, -16777216);
    Graphics::drawStack(this->g->g);
    return;
  }
  v7 = Framework::GLManager::glm;
  if ( !Framework::GLManager::glm->m_paused
    || (unsigned int)(v4->battleInfo.battleMode - 4) <= 1
    || v2->actSystem.bFreeCameraMode )
  {
    if ( *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2197491i64) )
    {
      iShadowPassSetting = v2->actSystem.iShadowPassSetting;
      if ( v2->actSystem.iShadowPassSetting == (int *)v2->actSystem.cameraLightParam )
      {
LABEL_15:
        v8 = 0;
LABEL_16:
        v10 = v2->actSystem.iShadowPassSetting;
        if ( v2->actSystem.iShadowPassSetting == (int *)v2->actSystem.cameraLightParam )
        {
LABEL_19:
          if ( this->SaveDataMain.GraphicsOptionData.bShadowsEnabled )
          {
            v11 = 1;
LABEL_22:
            this->m_pRender->m_bDoShadowPass = v11;
            p_iModelCount = &this->ModelRoomSettings.CharaInfo[0].iModelCount;
            v13 = 4i64;
            do
            {
              if ( *((_QWORD *)p_iModelCount + 1) )
              {
                v14 = 0;
                if ( *p_iModelCount > 0 )
                {
                  v15 = 0i64;
                  do
                  {
                    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)p_iModelCount + 1) + v15) + 8906i64) = v8 ^ 1;
                    ++v14;
                    v15 += 8i64;
                  }
                  while ( v14 < *p_iModelCount );
                }
              }
              p_iModelCount += 14;
              --v13;
            }
            while ( v13 );
            y = this->ModelRoomSettings.postprocessSettings.shadowLightAreaSettings.shadLightMinMax.y;
            x = this->ModelRoomSettings.postprocessSettings.shadowLightAreaSettings.shadLightMinMax.x;
            shadLightRadius = this->ModelRoomSettings.postprocessSettings.shadowLightAreaSettings.shadLightRadius;
            if ( (unsigned int)(v2->actSystem.cameraCtrl.offset.type - 3) > 1 )
            {
              m_pRender = this->m_pRender;
              m_pRender->m_BkgndShadLightAreaSettings.shadLightType = this->ModelRoomSettings.postprocessSettings.shadowLightAreaSettings.shadLightType;
              m_pRender->m_BkgndShadLightAreaSettings.shadLightRadius = shadLightRadius;
              m_pRender->m_BkgndShadLightAreaSettings.shadLightPos = this->ModelRoomSettings.postprocessSettings.shadowLightAreaSettings.shadLightPos;
              m_pRender->m_BkgndShadLightAreaSettings.shadLightMinMax.x = x;
              m_pRender->m_BkgndShadLightAreaSettings.shadLightMinMax.y = y;
            }
            else
            {
              v19 = this->m_pRender;
              v19->m_BkgndShadLightAreaSettings.shadLightType = 0;
              v19->m_BkgndShadLightAreaSettings.shadLightRadius = shadLightRadius;
              v19->m_BkgndShadLightAreaSettings.shadLightPos = this->ModelRoomSettings.postprocessSettings.shadowLightAreaSettings.shadLightPos;
              v19->m_BkgndShadLightAreaSettings.shadLightMinMax.x = x;
              v19->m_BkgndShadLightAreaSettings.shadLightMinMax.y = y;
            }
            if ( !v7->m_paused )
              ++this->ModelRoomSettings.motionBlurFrame;
            if ( this->ModelRoomSettings.motionBlurFrame > this->ModelRoomSettings.motionBlurMaxFrames - 1 )
              this->ModelRoomSettings.motionBlurFrame = 0;
            AppMain::ModelRoomShadowPass(this, 2, (unsigned __int8)p_iModelCount);
            AppMain::ModelRoomShadowPass(this, 3, v21);
            if ( this->m_pRender->m_WorldLightManager.m_ShadowFXAA )
            {
              AppMain::ApplyFXAAToShadows(this, 0);
              AppMain::ApplyFXAAToShadows(this, 1);
            }
            v22 = this->m_pRender;
            m_ShadowBlur = v22->m_WorldLightManager.m_ShadowBlur;
            if ( m_ShadowBlur > 0 )
            {
              AppMain::SimpleBoxBlurEffect(this, v22->m_renderTextures.m_ShadowDepthMap, (float)m_ShadowBlur);
              AppMain::SimpleBoxBlurEffect(
                this,
                &this->m_pRender->m_renderTextures.m_ShadowDepthMap[1],
                (float)this->m_pRender->m_WorldLightManager.m_ShadowBlur);
            }
            AppMain::updateGameLights(this, this->ModelRoomSettings.fCamPos, this->ModelRoomSettings.fCamUp, 0);
            if ( _glewPushGroupMarkerEXT )
              _glewPushGroupMarkerEXT(0, "Model Room Depth Pass");
            if ( _glewPushDebugGroup )
              _glewPushDebugGroup(0x824Au, 1u, 21, "Model Room Depth Pass");
            ++markerCount;
            AppMain::ModelDepthPass(this, 3, 2);
            AppMain::ModelDepthPass(this, 5, 3);
            if ( _glewPopGroupMarkerEXT )
              _glewPopGroupMarkerEXT();
            if ( _glewPopDebugGroup )
              _glewPopDebugGroup();
            --markerCount;
            AppMain::ModelRoomRenderToTexturePass(this, v24, -1);
            if ( this->ModelRoomSettings.postprocessSettings.motionBlurSettings[0].motionBlurOn )
            {
              AppMain::TextureCopyCS(
                this,
                &this->m_pRender->m_renderTextures.m_FullScreenTexture[3],
                &this->m_pRender->m_renderTextures.m_CharacterFrames[0][this->ModelRoomSettings.motionBlurFrame]);
              AppMain::ApplyShaderToTexture(
                this,
                7923,
                &this->m_pRender->m_renderTextures.m_DepthMapTexture[3],
                &this->m_pRender->m_renderTextures.m_CharacterFramesDepth[0][this->ModelRoomSettings.motionBlurFrame],
                this->m_iScreenW,
                this->m_iScreenH,
                1,
                type);
            }
            else if ( !this->ModelRoomSettings.postprocessSettings.motionBlurSettings[1].motionBlurOn )
            {
              goto LABEL_53;
            }
            if ( this->ModelRoomSettings.postprocessSettings.motionBlurSettings[1].motionBlurOn )
            {
              AppMain::TextureCopyCS(
                this,
                &this->m_pRender->m_renderTextures.m_FullScreenTexture[5],
                &this->m_pRender->m_renderTextures.m_CharacterFrames[1][this->ModelRoomSettings.motionBlurFrame]);
              AppMain::ApplyShaderToTexture(
                this,
                7923,
                &this->m_pRender->m_renderTextures.m_DepthMapTexture[5],
                &this->m_pRender->m_renderTextures.m_CharacterFramesDepth[1][this->ModelRoomSettings.motionBlurFrame],
                this->m_iScreenW,
                this->m_iScreenH,
                1,
                type);
            }
LABEL_53:
            if ( this->ModelRoomSettings.postprocessSettings.waterSurfaceSettings.shaderOn )
            {
              AppMain::CreateWaterMap(this);
              AppMain::renderSetCamera(this, 1, -1);
            }
            this->effSystem->m_EffectPs4System.renderEffectBuffer(&this->effSystem->m_EffectPs4System);
            v25 = this->m_pRender;
            *(_QWORD *)v25->m_sModelStackCount = 0i64;
            *(_QWORD *)&v25->m_sModelStackCount[2] = 0i64;
            *(_QWORD *)&v25->m_sModelStackCount[4] = 0i64;
            *(_QWORD *)&v25->m_sModelStackCount[6] = 0i64;
            v123 = this->ModelRoomSettings.postprocessSettings.bufferTransparencySettings.transparencyOn[0];
            v26 = this->ModelRoomSettings.postprocessSettings.bufferTransparencySettings.transparencyOn[1];
            v124 = v26;
            if ( v123 )
            {
              v27 = this->ModelRoomSettings.postprocessSettings.bufferTransparencySettings.opacity[0];
            }
            else
            {
              if ( !v26 )
              {
LABEL_63:
                if ( this->ModelRoomSettings.postprocessSettings.motionBlurSettings[0].motionBlurOn )
                  AppMain::MergeCharacterFrames(this, this->ModelRoomSettings.motionBlurFrame, 0);
                if ( this->ModelRoomSettings.postprocessSettings.motionBlurSettings[1].motionBlurOn )
                  AppMain::MergeCharacterFrames(this, this->ModelRoomSettings.motionBlurFrame, 1);
                fillType = this->ModelRoomSettings.modelFillSettings.fillSettings[4].fillType;
                if ( fillType )
                {
                  this->ModelRoomSettings.postfxUniforms.u_postfxFillColourType = fillType;
                  result = *(std::bitset<98>::reference *)this->ModelRoomSettings.modelFillSettings.fillSettings[4].fillColour;
                  this->ModelRoomSettings.postfxUniforms.u_postfxFillColour = (Vector4Unaligned)result;
                  AppMain::ApplyShaderToTexture(
                    this,
                    7995,
                    &this->m_pRender->m_renderTextures.m_FullScreenTexture[6],
                    &this->m_pRender->m_renderTextures.m_FullScreenTexture[6],
                    this->m_iScreenW,
                    this->m_iScreenH,
                    1,
                    type);
                  if ( this->ModelRoomSettings.postprocessSettings.bgBloomSettings.bloomOn
                    && this->SaveDataMain.GraphicsOptionData.bBloomEnabled )
                  {
                    AppMain::ApplyShaderToTexture(
                      this,
                      7995,
                      &this->m_pRender->m_renderTextures.m_BloomMapTexture,
                      &this->m_pRender->m_renderTextures.m_BloomMapTexture,
                      this->m_iScreenW,
                      this->m_iScreenH,
                      1,
                      typeb);
                  }
                }
                if ( this->ModelRoomSettings.postprocessSettings.heatHazeSettings.heatHazeOn
                  && this->SaveDataMain.GraphicsOptionData.bHeatHazeEnabled )
                {
                  v30 = AppMain::_MODELROOM_SETTINGS::CalcCamDotFromFront(&this->ModelRoomSettings);
                  if ( v30 > 0.4 )
                  {
                    v31 = *(float *)&FLOAT_1_0;
                    if ( v30 < 0.7 )
                      v31 = (v30 - 0.4) / 0.2999999999999999 + 0.0;
                    AppMain::HeatHazeShader(
                      this,
                      this->ModelRoomSettings.postprocessSettings.heatHazeSettings.heatHazeNear,
                      this->ModelRoomSettings.postprocessSettings.heatHazeSettings.heatHazeSpeed,
                      v31 * this->ModelRoomSettings.postprocessSettings.heatHazeSettings.heatHazeStrength,
                      width);
                  }
                }
                goto LABEL_77;
              }
              v27 = *(float *)&FLOAT_1_0;
            }
            this->ModelRoomSettings.postfxUniforms.u_postfxOpacity = v27;
            this->ModelRoomSettings.postfxUniforms.u_postfxNearFar.x = 1.0;
            this->ModelRoomSettings.postfxUniforms.u_postfxNearFar.y = 4096.0;
            AppMain::ApplyShaderToTexture(
              this,
              7997,
              &this->m_pRender->m_renderTextures.m_FullScreenTexture[3],
              &this->m_pRender->m_renderTextures.m_FullScreenTexture[3],
              (int)(float)this->m_iScreenW,
              (int)(float)this->m_iScreenH,
              3,
              type);
            if ( v26 )
              v28 = this->ModelRoomSettings.postprocessSettings.bufferTransparencySettings.opacity[1];
            else
              v28 = *(float *)&FLOAT_1_0;
            this->ModelRoomSettings.postfxUniforms.u_postfxOpacity = v28;
            this->ModelRoomSettings.postfxUniforms.u_postfxNearFar.x = 1.0;
            this->ModelRoomSettings.postfxUniforms.u_postfxNearFar.y = 4096.0;
            AppMain::ApplyShaderToTexture(
              this,
              7997,
              &this->m_pRender->m_renderTextures.m_FullScreenTexture[5],
              &this->m_pRender->m_renderTextures.m_FullScreenTexture[5],
              (int)(float)this->m_iScreenW,
              (int)(float)this->m_iScreenH,
              5,
              typea);
            goto LABEL_63;
          }
        }
        else
        {
          while ( *v10 < 3 )
          {
            if ( ++v10 == (int *)v2->actSystem.cameraLightParam )
              goto LABEL_19;
          }
        }
        v11 = 0;
        goto LABEL_22;
      }
      while ( *iShadowPassSetting < 2 )
      {
        if ( ++iShadowPassSetting == (int *)v2->actSystem.cameraLightParam )
          goto LABEL_15;
      }
    }
    v8 = 1;
    goto LABEL_16;
  }
LABEL_77:
  AppMain::BlendFrameBuffers(this);
  AppMain::BlendMasks(this);
  m_FrameBufferID = this->m_pRender->m_renderTextures.m_FullScreenTexture[0].m_FrameBufferID;
  v33 = Framework::GLManager::glm;
  Framework::GLManager::glm->currentRenderID = m_FrameBufferID;
  v33->m_bOpenGLBlocked = 1;
  _glewBindFramebuffer(0x8D40u, *(_DWORD *)&v33->m_buffer.m_freeIDs[12 * (unsigned __int8)m_FrameBufferID + 15]);
  v33->m_bOpenGLBlocked = 0;
  v125 = 36064;
  _glewDrawBuffers(1, &v125);
  v33->m_outputMask = 1;
  v34 = this->m_pRender;
  *(_QWORD *)v34->m_sModelStackCount = 0i64;
  *(_QWORD *)&v34->m_sModelStackCount[2] = 0i64;
  *(_QWORD *)&v34->m_sModelStackCount[4] = 0i64;
  *(_QWORD *)&v34->m_sModelStackCount[6] = 0i64;
  GraphicsOpt::lock(this->g);
  glClearAG(0x100u);
  if ( dword_140A9606C != 1 )
  {
    dword_140A9606C = 1;
    glEnable(0xB71u);
  }
  glDepthFunc(0x203u);
  if ( m_DepthMask != 1 )
  {
    m_DepthMask = 1;
    glDepthMask(1u);
  }
  if ( dword_140A96054 != 1 )
  {
    dword_140A96054 = 1;
    glEnable(0xB44u);
  }
  glCullFace(0x405u);
  v35 = this->m_pRender;
  if ( this == (AppMain *)-1551480i64 )
  {
    *(_QWORD *)v35->m_Proj.m = 1065353216i64;
    v35->m_Proj.m[4] = 0.0;
    *(_QWORD *)&v35->m_Proj.m[8] = 0i64;
    *(_QWORD *)&v35->m_Proj.m[12] = 0i64;
    *(_QWORD *)&v35->m_Proj.m[5] = 1065353216i64;
    *(_QWORD *)&v35->m_Proj.m[2] = 0i64;
    *(_QWORD *)&v35->m_Proj.m[10] = 1065353216i64;
    v35->m_Proj.m[14] = 0.0;
    v35->m_Proj.m[7] = 0.0;
    v35->m_Proj.m[15] = 1.0;
  }
  else
  {
    *(_OWORD *)v35->m_Proj.m = *(_OWORD *)this->ModelRoomSettings.mProj[0].m;
    *(_OWORD *)&v35->m_Proj.m[4] = *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[4];
    *(_OWORD *)&v35->m_Proj.m[8] = *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[8];
    *(_OWORD *)&v35->m_Proj.m[12] = *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[12];
  }
  OGLRender::setViewTrans(this->m_pRender, &this->ModelRoomSettings.mView);
  OGLRender::setInvViewTrans(this->m_pRender, &this->ModelRoomSettings.mInvView);
  EffectTaskManager::renderStack(this->effSystem, 2);
  Graphics::drawStack(this->g->g);
  if ( this->m_pRender->m_fBloomStrength >= 0.00000011920929
    && this->ModelRoomSettings.postprocessSettings.bgBloomSettings.bloomOn
    && this->SaveDataMain.GraphicsOptionData.bBloomEnabled )
  {
    if ( _glewPushGroupMarkerEXT )
      _glewPushGroupMarkerEXT(0, "Bloom Effect Pass");
    if ( _glewPushDebugGroup )
      _glewPushDebugGroup(0x824Au, 1u, 17, "Bloom Effect Pass");
    ++markerCount;
    if ( this->ModelRoomSettings.postprocessSettings.charBloomSettings.bloomOn )
    {
      AppMain::PreBloomEffectPass(this, v36);
      AppMain::HighlightExtractionTwoBuffersPass(this);
    }
    else
    {
      AppMain::DepthFilterBloom(this);
      AppMain::PreBloomEffectPass(this, v38);
    }
    if ( this->ModelRoomSettings.postprocessSettings.bgBloomSettings.bloomMethod )
      AppMain::NewBloomEffectPass(this, v37);
    else
      AppMain::BloomEffectPass(this, v37);
    if ( _glewPopGroupMarkerEXT )
      _glewPopGroupMarkerEXT();
    if ( _glewPopDebugGroup )
      _glewPopDebugGroup();
    --markerCount;
  }
  p_actBlack = &v2->actSystem.actBlack;
  v40 = v2->actSystem.actBlack.data[v2->actSystem.actBlack.iPriTarget].type;
  if ( (v40 <= 0 || v40 > 4 && (v40 > 6 || p_actBlack->data[v2->actSystem.actBlack.iPriTarget].fFadeAlpha < 1.0))
    && (unsigned int)(p_actBlack->data[v2->actSystem.actBlack.iPriTarget].type - 7) > 1
    && (unsigned int)(v2->actSystem.actBlack.data[0].type - 7) > 1
    && (unsigned int)(v2->actSystem.actBlack.data[v2->actSystem.actBlack.iPriTarget].type - 5) > 1 )
  {
    if ( this->ModelRoomSettings.postprocessSettings.godRaySettings.shaderOn
      && this->SaveDataMain.GraphicsOptionData.bGodRaysEnabled )
    {
      AppMain::GodRayShader(this, (int)p_actBlack);
    }
    else
    {
      v41 = this->m_pRender;
      if ( v41->m_renderTextures.m_FullScreenMaskTexture[7].m_TexID )
      {
        glDeleteRenderbuffersAG(1, &v41->m_renderTextures.m_FullScreenMaskTexture[7].m_FrameBufferID);
        this->m_pRender->m_renderTextures.m_FullScreenMaskTexture[7].m_FrameBufferID = 0;
        glsDeleteTextures(1, &this->m_pRender->m_renderTextures.m_FullScreenMaskTexture[7].m_TexID);
        this->m_pRender->m_renderTextures.m_FullScreenMaskTexture[7].m_TexID = 0;
      }
    }
  }
  this->m_pRender->m_bDoDOFPass = (unsigned int)(v2->actSystem.cameraCtrl.offset.type - 3) > 1;
  if ( this->m_pRender->m_bDoDOFPass
    && this->ModelRoomSettings.postprocessSettings.dofSettings.fightDofOn
    && this->SaveDataMain.GraphicsOptionData.bDOFEnabled )
  {
    AppMain::DepthOfFieldEffect(
      this,
      this->ModelRoomSettings.postprocessSettings.dofSettings.fightDofNear,
      this->ModelRoomSettings.postprocessSettings.dofSettings.fightDofFar,
      this->ModelRoomSettings.postprocessSettings.dofSettings.fightDofStrength,
      width);
  }
  v42 = 43i64;
  if ( this->m_pRender->m_renderTextures.m_GameOutputTexture.m_TexID )
  {
    for ( i = 43i64; i > -1; --i )
    {
      pModel = this->pModel;
      if ( pModel[i] )
      {
        v45 = 0;
        v46 = 0i64;
        if ( pModel[i]->m_ucMaterialCount )
        {
          v47 = 0i64;
          do
          {
            v48 = this->pModel[i];
            v49 = &v48->m_pMaterial[v47];
            if ( v49 && (v49->m_ucEffectFlg & 0x4000000) != 0 )
            {
              v50 = v46;
              if ( v46 < 0 )
              {
                v51 = 0i64;
                v52 = v48->m_pTexture[0];
                while ( *v52 )
                {
                  ++v51;
                  v52 += 4;
                  if ( v51 >= 64 )
                    goto LABEL_133;
                }
                v50 = v51;
              }
LABEL_133:
              if ( v50 <= 0x3F )
                v48->m_pTexture[v50][0] = &this->m_pRender->m_renderTextures.m_GameOutputTexture;
              v53 = v46;
              v54 = this->pModel[i];
              if ( v46 < 0 )
              {
                v55 = 0i64;
                v56 = v54->m_pTexture[0];
                while ( *v56 )
                {
                  ++v55;
                  v56 += 4;
                  if ( v55 >= 64 )
                    goto LABEL_141;
                }
                v53 = v55;
              }
LABEL_141:
              if ( v53 <= 0x3F )
                v54->m_pTexture[v53][0] = &this->m_pRender->m_renderTextures.m_GameOutputTexture;
            }
            ++v45;
            ++v46;
            ++v47;
          }
          while ( v45 < this->pModel[i]->m_ucMaterialCount );
        }
      }
    }
    pBattleStage = this->pBattleStage;
    if ( pBattleStage )
    {
      GimmickOGLModelCount = BattleStage::getGimmickOGLModelCount(pBattleStage);
      for ( j = 0; j < GimmickOGLModelCount; ++j )
      {
        GimmickOGLModel = BattleStage::getGimmickOGLModel(this->pBattleStage, j);
        v61 = GimmickOGLModel;
        if ( GimmickOGLModel )
        {
          v62 = 0;
          v63 = 0i64;
          if ( GimmickOGLModel->m_ucMaterialCount )
          {
            v64 = 0i64;
            do
            {
              v65 = &v61->m_pMaterial[v64];
              if ( v65 && (v65->m_ucEffectFlg & 0x4000000) != 0 )
              {
                v66 = v63;
                if ( v63 < 0 )
                {
                  v67 = 0i64;
                  v68 = v61->m_pTexture[0];
                  while ( *v68 )
                  {
                    ++v67;
                    v68 += 4;
                    if ( v67 >= 64 )
                      goto LABEL_158;
                  }
                  v66 = v67;
                }
LABEL_158:
                if ( v66 <= 0x3F )
                  v61->m_pTexture[v66][0] = &this->m_pRender->m_renderTextures.m_GameOutputTexture;
                v69 = v63;
                if ( v63 < 0 )
                {
                  v70 = 0i64;
                  v71 = v61->m_pTexture[0];
                  while ( *v71 )
                  {
                    ++v70;
                    v71 += 4;
                    if ( v70 >= 64 )
                      goto LABEL_166;
                  }
                  v69 = v70;
                }
LABEL_166:
                if ( v69 <= 0x3F )
                  v61->m_pTexture[v69][0] = &this->m_pRender->m_renderTextures.m_GameOutputTexture;
              }
              ++v62;
              ++v63;
              ++v64;
            }
            while ( v62 < v61->m_ucMaterialCount );
          }
        }
      }
    }
  }
  if ( this->m_pRender->m_renderTextures.m_ReflectionTexture[1].m_TexID )
  {
    do
    {
      v72 = this->pModel;
      if ( v72[v42] )
      {
        v73 = 0;
        v74 = 0i64;
        if ( v72[v42]->m_ucMaterialCount )
        {
          v75 = 0i64;
          do
          {
            v76 = this->pModel[v42];
            v77 = &v76->m_pMaterial[v75];
            if ( v77 && (v77->m_ucEffectFlg & 0x1000000) != 0 )
            {
              v76->m_pTexture[0][0] = &this->m_pRender->m_renderTextures.m_ReflectionTexture[1];
              v78 = v74;
              v79 = this->pModel[v42];
              if ( v74 < 0 )
              {
                v80 = 0i64;
                v81 = v79->m_pTexture[0];
                while ( *v81 )
                {
                  ++v80;
                  v81 += 4;
                  if ( v80 >= 64 )
                    goto LABEL_182;
                }
                v78 = v80;
              }
LABEL_182:
              if ( v78 <= 0x3F )
                v79->m_pTexture[v78][0] = &this->m_pRender->m_renderTextures.m_ReflectionTexture[1];
            }
            ++v73;
            ++v74;
            ++v75;
          }
          while ( v73 < this->pModel[v42]->m_ucMaterialCount );
        }
      }
      --v42;
    }
    while ( v42 > -1 );
  }
  v82 = this->m_pRender->m_renderTextures.m_FullScreenTexture[0].m_FrameBufferID;
  v83 = Framework::GLManager::glm;
  Framework::GLManager::glm->currentRenderID = v82;
  v83->m_bOpenGLBlocked = 1;
  _glewBindFramebuffer(0x8D40u, *(_DWORD *)&v83->m_buffer.m_freeIDs[12 * (unsigned __int8)v82 + 15]);
  v83->m_bOpenGLBlocked = 0;
  v117 = 36064;
  _glewDrawBuffers(1, &v117);
  v83->m_outputMask = 1;
  this->effSystem->m_EffectPs4System.renderEffectFrontHud(&this->effSystem->m_EffectPs4System);
  this->effSystem->m_EffectPs4System.combineBlendBuffer(&this->effSystem->m_EffectPs4System, 0);
  if ( this->ModelRoomSettings.postprocessSettings.fxaaSettings.fxaaOn
    && this->SaveDataMain.GraphicsOptionData.bFXAAEnabled )
  {
    AppMain::ApplyFXAA(this, v84);
  }
  if ( this->ModelRoomSettings.postprocessSettings.extraBGSettings.monitorOn )
    AppMain::RenderGameScreen(this, v84);
  AppMain::DrawFullScreenTextureToScreen(this);
  GraphicsOpt::lock(this->g);
  glClearAG(0x100u);
  g = this->g->g;
  g->m_Operator = 3;
  g->m_SrcRatio = 255;
  g->m_DstRatio = 255;
  if ( !g->m_bPreDrawMode )
  {
    if ( m_DepthMask )
    {
      m_DepthMask = 0;
      glDepthMask(0);
    }
    if ( m_Mode != 32774 )
    {
      m_Mode = 32774;
      m_ModeAlpha = 32774;
      _glewBlendEquation(0x8006u);
    }
    if ( dword_140A9605C != 1 )
    {
      dword_140A9605C = 1;
      glEnable(0xBE2u);
    }
    if ( m_Sfactor != 770 || m_Dfactor != 771 )
    {
      m_Sfactor = 770;
      m_Dfactor = 771;
      m_SfactorAlpha = 770;
      m_DfactorAlpha = 771;
      glBlendFunc(0x302u, 0x303u);
    }
    if ( m_dMode != 515 )
    {
      m_dMode = 515;
      glDepthFunc(0x203u);
    }
  }
  v86 = std::bitset<98>::operator[]((std::bitset<98> *)g, &result, 4ui64);
  Mypos = v86->_Mypos;
  if ( Mypos >= 0x62 )
    std::_Xout_of_range("invalid bitset<N> position");
  v88 = v86->_Mypos & 0x3F;
  v89 = v86->_Pbitset->_Array[Mypos >> 6];
  if ( !_bittest64((const __int64 *)&v89, v88) && v4->bHudVisible )
  {
    GameDataInfo::getInstance();
    if ( !BattleSystem::BattleController::IsComboMissionMode(v90) )
    {
      v92 = std::bitset<98>::operator[](v91, &v121, 0x16ui64);
      v93 = v92->_Mypos;
      Pbitset = v92->_Pbitset;
      if ( v93 >= 0x62 )
        std::_Xout_of_range("invalid bitset<N> position");
      v95 = v92->_Mypos & 0x3F;
      v96 = Pbitset->_Array[v93 >> 6];
      if ( _bittest64((const __int64 *)&v96, v95) )
      {
        GraphicsOpt::lock(this->g);
        v97 = 256;
      }
      else
      {
        AppMain::MaskTextureDraw(this, &this->m_pRender->m_renderTextures.m_CombinedMaskTexture[3], (bool)Pbitset);
        GraphicsOpt::lock(this->g);
        glsCheckFlg(0xB71u, 0);
        glsCheckFlg(0xB90u, 1);
        glStencilFunc(0x202u, 0, 1u);
        glStencilOp(0x1E00u, 0x1E00u, 0x1E00u);
        v97 = 0;
      }
      glClearAG(v97);
      BattleHud::drawUpperGauge(&this->m_BattleHud);
      glGetIntegerv(0x8CA6u, &params);
      v98 = glIsEnabled(0xB90u) != 0;
      v99 = glIsEnabled(0xB71u) != 0;
      glGetBooleanv(0xB72u, (GLboolean *)&v122);
      v100 = *(_DWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][132];
      if ( *(_DWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][132] == -1 )
      {
        _glewGenFramebuffers(
          1,
          (unsigned int *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][132]);
        v100 = *(_DWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][132];
      }
      _glewBindFramebuffer(0x8D40u, v100);
      if ( *(_DWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][128] == -1 )
        glGenTextures(
          1,
          (GLuint *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][128]);
      v101 = Framework::GLManager::glm;
      Framework::GLManager::glm->m_bOpenGLBlocked = 1;
      glBindTexture(
        0xDE1u,
        *(GLuint *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][128]);
      glTexImage2D(0xDE1u, 0, 6408, this->m_iScreenW, this->m_iScreenH, 0, 0x1908u, 0x1401u, 0i64);
      glTexParameteri(0xDE1u, 0x2800u, 9728);
      glTexParameteri(0xDE1u, 0x2801u, 9728);
      _glewFramebufferTexture(
        0x8D40u,
        0x8CE0u,
        *(unsigned int *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][128],
        0);
      _glewBindFramebuffer(
        0x8D40u,
        *(unsigned int *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][132]);
      m_iScreenH = this->m_iScreenH;
      m_iScreenW = this->m_iScreenW;
      if ( m_viewportX || m_viewportY || m_iScreenW != m_viewportW || m_iScreenH != m_viewportH )
      {
        m_viewportX = 0;
        m_viewportY = 0;
        m_viewportW = m_iScreenW;
        m_viewportH = m_iScreenH;
        glViewport(0, 0, m_iScreenW, m_iScreenH);
      }
      glClearColor(0.0, 0.0, 0.0, 0.0);
      glClear(0x4000u);
      v101->m_bOpenGLBlocked = 0;
      pObject = extension::GFXIRenderer::Instance()->m_hal.pObject;
      v105 = globalBrightness;
      globalBrightness = 1.0;
      v106 = extension::GFXIFontManager::Instance();
      extension::GFXIFontManager::renderDrawText(v106, pObject);
      globalBrightness = v105;
      _glewBindFramebuffer(0x8D40u, params);
      if ( v98 )
        glsCheckFlg(0xB90u, 1);
      if ( v99 )
        glsCheckFlg(0xB71u, 1);
      glDepthMask((GLboolean)v122);
      glEnable(0xB90u);
      if ( (this->m_BattleHud.m_visibleFlags & 1) != 0 && !this->m_FadeST )
        GraphicsOpt::drawTexture(this->g, v107, 0.0, 0.0, (float)this->m_iScreenW, (float)this->m_iScreenH);
      glDisable(0xB90u);
      Graphics::drawStack(this->g->g);
      glsCheckFlg(0xB90u, 0);
    }
    BattleHud::drawLowerGauge(&this->m_BattleHud);
    BattleHud::drawComboCount(&this->m_BattleHud);
    if ( this->m_BattleCall.m_bActived && this->m_BattleCall.m_bAnimationPlaying )
    {
      Animation = BattleCall::getAnimation(&this->m_BattleCall);
      if ( Animation->m_bAnimationPlaying && !Animation->m_bAnimationFinished && this->m_BattleCall.m_bAnimationPlaying )
      {
        v109 = BattleCall::getAnimation(&this->m_BattleCall);
        BattleCallAnimation::draw(v109);
      }
    }
    AppMain::OnlineDrawGUI(this);
  }
  v110 = this->g->g;
  OGLRender::deferredDrawImage(v110->m_pRender);
  Graphics::setRenderMode(v110, v110->m_Operator, v110->m_SrcRatio);
  Graphics::drawStack(this->g->g);
  v111 = this->pBattleStage;
  if ( v111 )
  {
    if ( !v111->m_bResourcesInitialized )
      BattleStage::resoucesInitialize(v111);
  }
}

void __fastcall AppMain::BattleMainInit(AppMain *this)
{
  int v2; // er8
  __int64 v3; // rcx
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v4; // rcx
  BattleStage *pBattleStage; // rbp
  int v6; // edi
  int GimmickOGLModelCount; // esi
  OGLModel *GimmickOGLModel; // rax
  OGLModel *v9; // r11
  __int64 v10; // rdx
  OGLMaterial *v11; // rax
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> v12; // [rsp+20h] [rbp-18h] BYREF

  this->bAT_InitializeFrame = 1;
  AppMain::SetUpModelRoomCamera(this);
  AppMain::SetupWorldLights(this);
  AppMain::SetUpPlayerLights(this);
  AppMain::SetUpStageLights(this);
  AppMain::SetUpGodRayData(this);
  AppMain::SetControllerSetting(this);
  if ( this->pBattleStage )
  {
    v3 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64);
    v12.m_isNoCache = *(_BYTE *)(v3 + 1);
    v4 = *(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body **)(v3 + 8);
    v12.m_body.m_ptr = v4;
    if ( v4 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v4->m_refCount.m_ptr->m_sharedCount, 1ui64);
    BattleStage::setupParameters(this->pBattleStage, &v12);
    pBattleStage = this->pBattleStage;
    v6 = 0;
    GimmickOGLModelCount = BattleStage::getGimmickOGLModelCount(pBattleStage);
    if ( GimmickOGLModelCount > 0 )
    {
      do
      {
        GimmickOGLModel = BattleStage::getGimmickOGLModel(pBattleStage, v6);
        v9 = GimmickOGLModel;
        if ( GimmickOGLModel )
        {
          v2 = 0;
          if ( GimmickOGLModel->m_ucMaterialCount )
          {
            v10 = 0i64;
            do
            {
              v11 = &v9->m_pMaterial[v10];
              if ( v11 && (v11->m_ucEffectFlg & 0x4000000) != 0 )
                this->ModelRoomSettings.postprocessSettings.extraBGSettings.monitorOn = 1;
              ++v2;
              ++v10;
            }
            while ( v2 < v9->m_ucMaterialCount );
          }
        }
        ++v6;
      }
      while ( v6 < GimmickOGLModelCount );
    }
  }
  AppMain::BattleRoundInit(this, 0, v2);
}

void __fastcall AppMain::BattleMainLoop(AppMain *this, int loopCounter, int loopSize)
{
  int v3; // esi
  int v4; // edi
  BattleSystem::BattleController *v6; // r14
  BattleSystem::BattleController *v7; // rax
  BattleSystem::BattleController *v8; // r12
  BattleSystem::BattleController *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rbx
  GameDataInfo *v12; // rcx
  GameDataInfo *v13; // rcx
  GAME_MODE v14; // edx
  BattleSystem::BattleController *v15; // rax
  bool v16; // r15
  float v17; // xmm7_4
  extension::AsyncStatus *v18; // rcx
  __int64 v19; // rbx
  int v20; // esi
  __int64 i; // rdi
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int j; // ebx
  int v36; // edx
  int k; // ebx
  __int64 nn; // rdi
  ActionSystem::ActorList *i1; // rbx
  Actor *v40; // rcx
  _QWORD *i2; // rbx
  __int64 v42; // rcx
  _QWORD *i3; // rbx
  __int64 v44; // rcx
  _QWORD *m; // rbx
  __int64 v46; // rax
  _DWORD *v47; // rcx
  __int64 v48; // rdx
  _QWORD *n; // rbx
  __int64 v50; // rax
  _DWORD *v51; // rcx
  __int64 v52; // rdx
  __int64 ii; // rdi
  ActionSystem::ActorList *jj; // rbx
  Actor *pActor; // rcx
  _QWORD *kk; // rbx
  __int64 v57; // rcx
  _QWORD *mm; // rbx
  __int64 v59; // rcx
  int v60; // ebx
  int i4; // edi
  __int64 i5; // rdi
  ActionSystem::ActorList *i6; // rbx
  Actor *v64; // rcx
  int i7; // ebx
  int v66; // esi
  int i8; // ebx
  int i9; // ebx
  __int64 i10; // rdi
  ActionSystem::ActorList *i11; // rbx
  Actor *v71; // rcx
  Fw::cJobManager *v72; // rdx
  BattleStage *pBattleStage; // rcx
  BattleSystem::BattleController::ROUND_PHASE roundPhase; // eax
  float v75; // xmm6_4
  EffectTaskManager *effSystem; // rcx
  int v77; // eax
  __int128 v78; // [rsp+48h] [rbp-39h]
  __int128 v79; // [rsp+58h] [rbp-29h]
  BattleSystem::BattleController *v80; // [rsp+E8h] [rbp+67h]
  BattleSystem::BattleController *v81; // [rsp+E8h] [rbp+67h]
  bool v82; // [rsp+E8h] [rbp+67h]
  BattleSystem::BattleController *v85; // [rsp+100h] [rbp+7Fh]

  v3 = loopSize;
  v4 = loopCounter;
  v6 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v80 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v80);
    v6 = v7;
    BattleSystem::BattleController::instance = v7;
  }
  v8 = v6;
  if ( !v6 )
  {
    v81 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v81);
    v6 = v9;
    BattleSystem::BattleController::instance = v9;
  }
  AppMain::BattleRestartCheck(this);
  if ( this->m_ReplayRoundMoveFlag )
  {
    AppMain::SetBattleRoundTransition(this, &this->m_ReplayRoundInfo);
    this->m_ReplayRoundMoveFlag = 0;
  }
  AppMain::BattleEndCheck(this);
  v10 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v11 = *v10;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v10 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v12);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag && !v4 )
  {
    if ( v8->roundPhase == DIE )
      AppMain::ReplayControll(this);
    else
      this->bBattleFastForward = 0;
  }
  AppMain::InputKeySend(this);
  v82 = AppMain::PauseCheck(this);
  if ( v82 )
  {
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v11 + 40) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v13);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    v14 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
    if ( (unsigned int)(v14 - 4) <= 2 || v14 == GAME_MODE_ONLINETRAINING )
    {
      v15 = BattleSystem::BattleController::instance;
      if ( !BattleSystem::BattleController::instance )
      {
        v85 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
        BattleSystem::BattleController::BattleController(v85);
        BattleSystem::BattleController::instance = v15;
      }
      if ( v15->roundPhase <= DIE )
        this->m_bFadeLock = 1;
    }
  }
  v16 = v3 - 1 == v4 && bBattleLastUpdateFrame;
  v17 = *(float *)&FLOAT_1_0;
  LODWORD(v78) = 0;
  *(_QWORD *)&v79 = 0i64;
  *(_QWORD *)((char *)&v78 + 4) = 1065353216i64;
  *((_QWORD *)&v79 + 1) = 1065353216i64;
  HIDWORD(v78) = 0;
  v18 = *(extension::AsyncStatus **)(*(_QWORD *)&AppMain::pApp + 11064i64);
  v19 = *(_QWORD *)(v18[1].m_stateFlags.m_value._My_val + 16);
  if ( v19 && !*(_BYTE *)(v19 + 96) )
  {
    v18 = (extension::AsyncStatus *)(v19 + 88);
    if ( (*(_QWORD *)(v19 + 88) & 1) == 0 )
      extension::AsyncStatus::waitFor(v18, Step_Pending);
    if ( *(_QWORD *)(v19 + 72) )
    {
      v20 = 0;
      for ( i = 0i64; ; ++i )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
        if ( !v22 || *(_BYTE *)(v22 + 96) )
        {
          v18 = 0i64;
        }
        else
        {
          if ( (*(_QWORD *)(v22 + 88) & 1) == 0 )
            extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v22 + 88), Step_Pending);
          v18 = *(extension::AsyncStatus **)(v22 + 72);
        }
        if ( v20 >= (int)((__int64)(v18[26].m_stateFlags.m_value._My_val - v18[25].m_stateFlags.m_value._My_val) >> 3) )
          break;
        v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
        if ( !v23 || *(_BYTE *)(v23 + 96) )
        {
          v24 = 0i64;
        }
        else
        {
          if ( (*(_QWORD *)(v23 + 88) & 1) == 0 )
            extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v23 + 88), Step_Pending);
          v24 = *(_QWORD *)(v23 + 72);
        }
        if ( i < 0 || v20 >= (int)((__int64)(*(_QWORD *)(v24 + 208) - *(_QWORD *)(v24 + 200)) >> 3) )
          v25 = 0i64;
        else
          v25 = *(_QWORD *)(*(_QWORD *)(v24 + 200) + 8 * i);
        *(_QWORD *)(v25 + 196) = 0i64;
        *(_DWORD *)(v25 + 204) = 0;
        *(_OWORD *)(v25 + 232) = 0x3F800000ui64;
        *(_OWORD *)(v25 + 248) = v78;
        *(_OWORD *)(v25 + 264) = v79;
        *(_OWORD *)(v25 + 280) = _xmm;
        *(_BYTE *)(v25 + 8434) = 1;
        v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
        if ( !v26 || *(_BYTE *)(v26 + 96) )
        {
          v27 = 0i64;
        }
        else
        {
          if ( (*(_QWORD *)(v26 + 88) & 1) == 0 )
            extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v26 + 88), Step_Pending);
          v27 = *(_QWORD *)(v26 + 72);
        }
        if ( i < 0 || v20 >= (int)((__int64)(*(_QWORD *)(v27 + 208) - *(_QWORD *)(v27 + 200)) >> 3) )
          v28 = 0i64;
        else
          v28 = *(_QWORD *)(*(_QWORD *)(v27 + 200) + 8 * i);
        *(_BYTE *)(v28 + 8905) = 0;
        v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
        if ( !v29 || *(_BYTE *)(v29 + 96) )
        {
          v30 = 0i64;
        }
        else
        {
          if ( (*(_QWORD *)(v29 + 88) & 1) == 0 )
            extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v29 + 88), Step_Pending);
          v30 = *(_QWORD *)(v29 + 72);
        }
        if ( i < 0 || v20 >= (int)((__int64)(*(_QWORD *)(v30 + 208) - *(_QWORD *)(v30 + 200)) >> 3) )
          v31 = 0i64;
        else
          v31 = *(_QWORD *)(*(_QWORD *)(v30 + 200) + 8 * i);
        *(_BYTE *)(v31 + 8906) = 1;
        v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
        if ( !v32 || *(_BYTE *)(v32 + 96) )
        {
          v33 = 0i64;
        }
        else
        {
          if ( (*(_QWORD *)(v32 + 88) & 1) == 0 )
            extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v32 + 88), Step_Pending);
          v33 = *(_QWORD *)(v32 + 72);
        }
        if ( i < 0 || v20 >= (int)((__int64)(*(_QWORD *)(v33 + 208) - *(_QWORD *)(v33 + 200)) >> 3) )
          v34 = 0i64;
        else
          v34 = *(_QWORD *)(*(_QWORD *)(v33 + 200) + 8 * i);
        *(_DWORD *)(v34 + 8916) = 2;
        ++v20;
      }
      v4 = loopCounter;
      v3 = loopSize;
    }
  }
  if ( v82 )
  {
    v17 = 0.0;
  }
  else
  {
    v6->actSystem.bFastPlayDrawSkipFrame = !v16;
    AppMain::InputKeyReplay((AppMain *)v18);
    AppMain::BattleRoundStartCheck(this);
    BattleSystem::BattleController::Update(v8);
    AppMain::InputKeyRecv(this);
    AppMain::InputKeyApply(this);
    for ( j = 0; j <= 1; ++j )
      ActionSystem::PreCaller(&v6->actSystem, j);
    if ( v6->actSystem.iThrowChildPlayerID )
    {
      ActionSystem::PreCaller(&v6->actSystem, 2);
      v36 = 3;
    }
    else
    {
      ActionSystem::PreCaller(&v6->actSystem, 3);
      v36 = 2;
    }
    ActionSystem::PreCaller(&v6->actSystem, v36);
    for ( k = 0; k <= 1; ++k )
      ActionSystem::MainCaller(&v6->actSystem, k);
    if ( v6->actSystem.iThrowChildPlayerID )
    {
      for ( m = (_QWORD *)*((_QWORD *)v6->actSystem.ppPriStart + 2); m; m = (_QWORD *)*m )
      {
        v46 = m[2];
        if ( *(_DWORD *)(v46 + 20) == 2 )
        {
          *(_DWORD *)(v46 + 20) = 1;
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)m[2] + 704i64))(m[2]);
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)m[2] + 712i64))(m[2]);
        }
        v47 = (_DWORD *)m[2];
        if ( v47[5] == 1 )
        {
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v47 + 720i64))(v47);
          v48 = m[2];
          if ( *(_DWORD *)(v48 + 20) == 1 )
          {
            ActionSystem::Run(&v6->actSystem, (Actor *)v48);
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)m[2] + 728i64))(m[2]);
          }
        }
      }
      for ( n = (_QWORD *)*((_QWORD *)v6->actSystem.ppPriStart + 3); n; n = (_QWORD *)*n )
      {
        v50 = n[2];
        if ( *(_DWORD *)(v50 + 20) == 2 )
        {
          *(_DWORD *)(v50 + 20) = 1;
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)n[2] + 704i64))(n[2]);
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)n[2] + 712i64))(n[2]);
        }
        v51 = (_DWORD *)n[2];
        if ( v51[5] == 1 )
        {
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v51 + 720i64))(v51);
          v52 = n[2];
          if ( *(_DWORD *)(v52 + 20) == 1 )
          {
            ActionSystem::Run(&v6->actSystem, (Actor *)v52);
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)n[2] + 728i64))(n[2]);
          }
        }
      }
      for ( ii = 0i64; ii <= 1; ++ii )
      {
        for ( jj = v6->actSystem.ppPriStart[ii]; jj; jj = jj->pNext )
        {
          pActor = jj->pActor;
          if ( pActor->systemStat == MAIN && !pActor->bSkipSyncPosture )
            pActor->SyncPosture(pActor);
        }
      }
      for ( kk = (_QWORD *)*((_QWORD *)v6->actSystem.ppPriStart + 2); kk; kk = (_QWORD *)*kk )
      {
        v57 = kk[2];
        if ( *(_DWORD *)(v57 + 20) == 1 && !*(_BYTE *)(v57 + 727) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 776i64))(v57);
      }
      for ( mm = (_QWORD *)*((_QWORD *)v6->actSystem.ppPriStart + 3); mm; mm = (_QWORD *)*mm )
      {
        v59 = mm[2];
        if ( *(_DWORD *)(v59 + 20) == 1 && !*(_BYTE *)(v59 + 727) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 776i64))(v59);
      }
    }
    else
    {
      ActionSystem::MainCaller(&v6->actSystem, 3);
      ActionSystem::MainCaller(&v6->actSystem, 2);
      for ( nn = 0i64; nn <= 1; ++nn )
      {
        for ( i1 = v6->actSystem.ppPriStart[nn]; i1; i1 = i1->pNext )
        {
          v40 = i1->pActor;
          if ( v40->systemStat == MAIN && !v40->bSkipSyncPosture )
            v40->SyncPosture(v40);
        }
      }
      for ( i2 = (_QWORD *)*((_QWORD *)v6->actSystem.ppPriStart + 3); i2; i2 = (_QWORD *)*i2 )
      {
        v42 = i2[2];
        if ( *(_DWORD *)(v42 + 20) == 1 && !*(_BYTE *)(v42 + 727) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 776i64))(v42);
      }
      for ( i3 = (_QWORD *)*((_QWORD *)v6->actSystem.ppPriStart + 2); i3; i3 = (_QWORD *)*i3 )
      {
        v44 = i3[2];
        if ( *(_DWORD *)(v44 + 20) == 1 && !*(_BYTE *)(v44 + 727) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 776i64))(v44);
      }
    }
    Collision::PlayerPushCheck(&v6->actSystem);
    v60 = 4;
    for ( i4 = 4; i4 <= 6; ++i4 )
      ActionSystem::PreCaller(&v6->actSystem, i4);
    do
      ActionSystem::MainCaller(&v6->actSystem, v60++);
    while ( v60 <= 6 );
    for ( i5 = 4i64; i5 <= 6; ++i5 )
    {
      for ( i6 = v6->actSystem.ppPriStart[i5]; i6; i6 = i6->pNext )
      {
        v64 = i6->pActor;
        if ( v64->systemStat == MAIN && !v64->bSkipSyncPosture )
          v64->SyncPosture(v64);
      }
    }
    Collision::AttackHitCheck(&v6->actSystem);
    for ( i7 = 0; i7 <= 6; ++i7 )
      ActionSystem::LateCaller(&v6->actSystem, i7);
    v66 = 7;
    for ( i8 = 7; i8 <= 8; ++i8 )
      ActionSystem::PreCaller(&v6->actSystem, i8);
    for ( i9 = 7; i9 <= 8; ++i9 )
      ActionSystem::MainCaller(&v6->actSystem, i9);
    for ( i10 = 7i64; i10 <= 8; ++i10 )
    {
      for ( i11 = v6->actSystem.ppPriStart[i10]; i11; i11 = i11->pNext )
      {
        v71 = i11->pActor;
        if ( v71->systemStat == MAIN && !v71->bSkipSyncPosture )
          v71->SyncPosture(v71);
      }
    }
    do
      ActionSystem::LateCaller(&v6->actSystem, v66++);
    while ( v66 <= 8 );
    pBattleStage = this->pBattleStage;
    if ( pBattleStage )
    {
      roundPhase = v8->roundPhase;
      if ( roundPhase )
      {
        if ( roundPhase != (WALL|DIE) )
        {
          v75 = (float)((float)(unsigned __int16)v6->actSystem.xPlaySpeed.value * 0.000015258789)
              + (float)(v6->actSystem.xPlaySpeed.value >> 16);
          if ( v6->actSystem.actBlack.data[5].attr == COUNTER_HIT )
            v75 = 0.0;
          BattleStage::update(pBattleStage, v75);
          Framework::GLManager::glm->m_frameProgressSpeed = v75 + Framework::GLManager::glm->m_frameProgressSpeed;
        }
      }
    }
    EffectTaskManager::updateStack(this->effSystem, v72);
    v3 = loopSize;
    v4 = loopCounter;
    if ( loopSize - 1 == loopCounter )
    {
      effSystem = this->effSystem;
      v77 = ++effSystem->UseDataBufferNum;
      if ( v77 >= 2 )
        v77 = 0;
      effSystem->UseDataBufferNum = v77;
    }
    ActionSystem::CameraLateCalc(&v6->actSystem);
    AppMain::CheckBGColorSetting(this);
    AppMain::BattleKOStateCheck(this);
    if ( v8->battleInfo.timeLimit )
      BattleHud::setTimerCount(&this->m_BattleHud, v8->battleInfo.iRoundLimitFrame / 90);
  }
  Framework::GLManager::glm->m_paused = v82;
  BattleHud::update(&this->m_BattleHud, &v6->actSystem, v17);
  AppMain::BattleMainLoopDraw(this, v4, v3);
}

void __fastcall AppMain::BattleMainLoopDraw(AppMain *this, int loopCounter, int loopSize)
{
  BattleSystem::BattleController *v6; // r13
  BattleSystem::BattleController *v7; // rax
  BattleSystem::BattleController *v8; // rdi
  BattleSystem::BattleController *v9; // rax
  int v10; // er14
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // r12
  std::bitset<98>::reference *v14; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  bool v18; // al
  BattleHudCommonNumbers::EReplayIcon::Type v19; // esi
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // edi
  InputKeyHistory *m_KeyHistory; // rsi
  __int64 p_m_EffectJobManager; // rdx
  EffectTaskManager *effSystem; // rdi
  int v26; // er8
  float y; // xmm1_4
  float z; // xmm0_4
  extension::SoundManager *v29; // rax
  BattleStage *pBattleStage; // rcx
  BattleSystem::BattleController *v31; // rdi
  BattleSystem::BattleController::ROUND_PHASE roundPhase; // eax
  float upFogStrength; // xmm4_4
  float upFogHeightExp; // xmm3_4
  float upFogHeight; // xmm2_4
  float upFogDistExp; // xmm1_4
  OGLRender *m_pRender; // rcx
  float downFogStrength; // xmm4_4
  float downFogHeightExp; // xmm3_4
  float downFogHeight; // xmm2_4
  float downFogDistExp; // xmm1_4
  OGLRender *v42; // rcx
  OGLRender *v43; // rax
  float v44; // xmm4_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  float v47; // xmm0_4
  float v48; // xmm4_4
  float v49; // xmm3_4
  float v50; // xmm2_4
  float v51; // xmm1_4
  OGLRender *v52; // rcx
  float v53; // xmm4_4
  float v54; // xmm3_4
  float v55; // xmm2_4
  float v56; // xmm1_4
  OGLRender *v57; // rcx
  OGLRender *v58; // rax
  float v59; // xmm4_4
  float v60; // xmm3_4
  float v61; // xmm1_4
  float v62; // xmm0_4
  BattleSystem::BattleController::ROUND_PHASE v63; // eax
  OGLRender *v64; // rax
  OGLRender *v65; // rax
  OGLModel *m_pOGLModel; // rdx
  GameDataInfo *v67; // rcx
  int type; // eax
  BattleStage *v70; // rax
  OGLRender *v71; // rax
  BattleStage *v72; // rcx
  int i; // er15
  int v74; // er14
  __int64 j; // rsi
  __int64 v76; // rdi
  __int64 v77; // rcx
  OGLModel **pModel; // r9
  OGLModel *v79; // r9
  BattleStage *v80; // rcx
  BattleStageResourceContainer *m_pResourceContainer; // rax
  BattleStageEvent **Myfirst; // rax
  BattleStageEvent **Mylast; // rcx
  BattleStageEvent *v84; // r8
  OGLRender *v85; // rax
  OGLRender *v86; // rax
  BattleStage *v87; // rcx
  EffectTaskManager *v88; // rcx
  __int64 v89; // [rsp+30h] [rbp-D0h]
  std::function<void __cdecl(Actor &)> v90; // [rsp+48h] [rbp-B8h] BYREF
  std::function<void __cdecl(Actor &)> v91; // [rsp+88h] [rbp-78h] BYREF
  std::function<void __cdecl(Actor &)> v92; // [rsp+C8h] [rbp-38h] BYREF
  std::function<void __cdecl(Actor &)> v93; // [rsp+108h] [rbp+8h] BYREF
  std::bitset<98>::reference result; // [rsp+148h] [rbp+48h] BYREF
  BattleSystem::BattleController *v95; // [rsp+1B0h] [rbp+B0h]
  BattleSystem::BattleController *v96; // [rsp+1B0h] [rbp+B0h]
  char v97; // [rsp+1B8h] [rbp+B8h]
  BattleSystem::BattleController *v98; // [rsp+1C8h] [rbp+C8h]
  extension::SoundManager *v99; // [rsp+1C8h] [rbp+C8h]

  v6 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v95 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v95);
    v6 = v7;
    BattleSystem::BattleController::instance = v7;
  }
  v8 = v6;
  v96 = v6;
  if ( !v6 )
  {
    v98 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v98);
    v6 = v9;
    BattleSystem::BattleController::instance = v9;
  }
  v10 = loopSize - 1;
  if ( v10 != loopCounter || (v97 = 1, !bBattleLastUpdateFrame) )
    v97 = 0;
  this->g->g->m_pRender->m_iRenderStackCount2D = 0;
  this->g->g->m_bPreDrawMode = 1;
  GraphicsOpt::lock(this->g);
  v11 = 40i64;
  v12 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v13 = *v12;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v12 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)v11);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
  {
    v14 = std::bitset<98>::operator[]((std::bitset<98> *)v11, &result, 0x11ui64);
    Mypos = v14->_Mypos;
    if ( Mypos >= 0x62 )
      std::_Xout_of_range("invalid bitset<N> position");
    v16 = v14->_Mypos & 0x3F;
    v17 = v14->_Pbitset->_Array[Mypos >> 6];
    v18 = _bittest64((const __int64 *)&v17, v16) || v8->bKeyData;
    BattleHud::renderReplayDescription(&this->m_BattleHud, (float)(v18 ? 0x82 : 0), 0.0);
    if ( this->bBattleFastForward )
      v19 = SKIP;
    else
      v19 = !this->bBattlePause;
    if ( !this->m_BattleHud.isError(&this->m_BattleHud.ErrorChecker)
      && this->m_BattleHud.m_bInitialize
      && this->m_BattleHud.m_bResoucesActived )
    {
      BattleHudRenderer::renderReplayOperateIcon(this->m_BattleHud.m_pRenderer, v20, v21, v19);
    }
  }
  AppMain::BattleAttackDataDraw(this);
  v22 = 0;
  m_KeyHistory = this->m_KeyHistory;
  do
    AppMain::DrawKeyHistory(this, (PLAYER_ID)v22++, m_KeyHistory++);
  while ( v22 < 2 );
  AppMain::BattleKeyRecordDraw(this);
  AppMain::BattleEnteringDraw(this);
  Graphics::drawStack(this->g->g);
  this->g->g->m_bPreDrawMode = 0;
  AppMain::checkGameLightFlag(this);
  AppMain::checkSpecialEffectSetting(this);
  AppMain::renderSetCamera(this, 0, -1);
  if ( v10 == loopCounter )
  {
    effSystem = this->effSystem;
    if ( effSystem->m_EffectJobManager.m_WorkNum > -1 && !effSystem->m_EffectJobManager.m_RunningFlag )
    {
      v26 = 0;
      if ( effSystem->m_EffectJobManager.m_WorkNum > 0 )
      {
        p_m_EffectJobManager = (__int64)&effSystem->m_EffectJobManager;
        do
        {
          *(_QWORD *)(*(_QWORD *)p_m_EffectJobManager + 32i64) = EffectTaskManager::effectUpdateBufferThread;
          *(_QWORD *)(*(_QWORD *)p_m_EffectJobManager + 40i64) = effSystem;
          ++v26;
          p_m_EffectJobManager += 8i64;
        }
        while ( v26 < effSystem->m_EffectJobManager.m_WorkNum );
      }
    }
    Fw::cJobManager::Execute(&effSystem->m_EffectJobManager, p_m_EffectJobManager);
    effSystem->m_updateBufferThreadStack._Mypair._Myval2._Mylast = effSystem->m_updateBufferThreadStack._Mypair._Myval2._Myfirst;
  }
  else
  {
    this->effSystem->m_updateBufferThreadStack._Mypair._Myval2._Mylast = this->effSystem->m_updateBufferThreadStack._Mypair._Myval2._Myfirst;
  }
  if ( v6->actSystem.bFreeCameraMode )
  {
    *(float *)&v89 = v6->actSystem.freeCamera.vPos.x;
    y = v6->actSystem.freeCamera.vPos.y;
    z = v6->actSystem.freeCamera.vPos.z;
  }
  else if ( (unsigned int)(v6->actSystem.cameraCtrl.offset.type - 3) <= 2 )
  {
    *(float *)&v89 = v6->actSystem.cameraCtrl.offset.vStart.x;
    y = v6->actSystem.cameraCtrl.offset.vStart.y;
    z = v6->actSystem.cameraCtrl.offset.vStart.z;
  }
  else
  {
    *(float *)&v89 = v6->actSystem.cameraCtrl.vPos.x;
    y = v6->actSystem.cameraCtrl.vPos.y;
    z = v6->actSystem.cameraCtrl.vPos.z;
  }
  *((float *)&v89 + 1) = y;
  v29 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v99 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v99);
    extension::SoundManager::the_instance = v29;
  }
  *(_QWORD *)&v29->m_vecListenerPosition.x = v89;
  v29->m_vecListenerPosition.z = z;
  pBattleStage = this->pBattleStage;
  v31 = v96;
  if ( pBattleStage )
  {
    roundPhase = v96->roundPhase;
    if ( roundPhase )
    {
      if ( roundPhase != (WALL|DIE) )
        BattleStage::cullingTest(pBattleStage, this->ModelRoomSettings.mProj, &this->ModelRoomSettings.mView);
    }
  }
  this->m_pRender->m_GroundFog.m_bOn = this->ModelRoomSettings.postprocessSettings.groundFogSettings.fogOn;
  if ( this->ModelRoomSettings.postprocessSettings.groundFogSettings.fogOn )
  {
    this->m_pRender->m_GroundFog.m_calcType = this->ModelRoomSettings.postprocessSettings.groundFogSettings.calcType;
    upFogStrength = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogStrength;
    upFogHeightExp = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogHeightExp;
    upFogHeight = (float)this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogHeight;
    upFogDistExp = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogDistExp;
    m_pRender = this->m_pRender;
    m_pRender->m_GroundFog.m_fUpDistance = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogDist;
    m_pRender->m_GroundFog.m_fUpDistanceExp = upFogDistExp;
    m_pRender->m_GroundFog.m_fUpHeight = upFogHeight;
    m_pRender->m_GroundFog.m_fUpHeightExp = upFogHeightExp;
    m_pRender->m_GroundFog.m_fUpStrength = upFogStrength;
    m_pRender->m_GroundFog.m_UpColour[0] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogColour[0];
    m_pRender->m_GroundFog.m_UpColour[1] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogColour[1];
    m_pRender->m_GroundFog.m_UpColour[2] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogColour[2];
    m_pRender->m_GroundFog.m_UpColour[3] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogColour[3];
    downFogStrength = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogStrength;
    downFogHeightExp = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogHeightExp;
    downFogHeight = (float)this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogHeight;
    downFogDistExp = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogDistExp;
    v42 = this->m_pRender;
    v42->m_GroundFog.m_fDownDistance = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogDist;
    v42->m_GroundFog.m_fDownDistanceExp = downFogDistExp;
    v42->m_GroundFog.m_fDownHeight = downFogHeight;
    v42->m_GroundFog.m_fDownHeightExp = downFogHeightExp;
    v42->m_GroundFog.m_fDownStrength = downFogStrength;
    v42->m_GroundFog.m_DownColour[0] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogColour[0];
    v42->m_GroundFog.m_DownColour[1] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogColour[1];
    v42->m_GroundFog.m_DownColour[2] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogColour[2];
    v42->m_GroundFog.m_DownColour[3] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogColour[3];
    v43 = this->m_pRender;
    v44 = 1.0 / (float)(v43->m_GroundFog.m_fDownHeight + 200.0);
    v45 = (float)(v43->m_GroundFog.m_fUpDistance - 1.0) * 0.00024420026;
    v46 = (float)(v43->m_GroundFog.m_fUpHeight + 200.0) / 400.0;
    v47 = (float)(v43->m_GroundFog.m_fDownDistance - 1.0) * 0.00024420026;
    v43->m_GroundFog.m_fShaderDistDivisor = 0.00024420026;
    v43->m_GroundFog.m_fShaderUpDistance = v45;
    v43->m_GroundFog.m_fShaderUpHeight = v46;
    v43->m_GroundFog.m_fShaderDownDistance = v47;
    v43->m_GroundFog.m_fShaderExtraHeightSetting = v44;
  }
  this->m_pRender->m_SkyFog.m_bOn = this->ModelRoomSettings.postprocessSettings.skyFogSettings.fogOn;
  if ( this->ModelRoomSettings.postprocessSettings.skyFogSettings.fogOn )
  {
    this->m_pRender->m_SkyFog.m_calcType = this->ModelRoomSettings.postprocessSettings.skyFogSettings.calcType;
    v48 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogStrength;
    v49 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogHeightExp;
    v50 = (float)this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogHeight;
    v51 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogDistExp;
    v52 = this->m_pRender;
    v52->m_SkyFog.m_fUpDistance = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogDist;
    v52->m_SkyFog.m_fUpDistanceExp = v51;
    v52->m_SkyFog.m_fUpHeight = v50;
    v52->m_SkyFog.m_fUpHeightExp = v49;
    v52->m_SkyFog.m_fUpStrength = v48;
    v52->m_SkyFog.m_UpColour[0] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogColour[0];
    v52->m_SkyFog.m_UpColour[1] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogColour[1];
    v52->m_SkyFog.m_UpColour[2] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogColour[2];
    v52->m_SkyFog.m_UpColour[3] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogColour[3];
    v53 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogStrength;
    v54 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogHeightExp;
    v55 = (float)this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogHeight;
    v56 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogDistExp;
    v57 = this->m_pRender;
    v57->m_SkyFog.m_fDownDistance = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogDist;
    v57->m_SkyFog.m_fDownDistanceExp = v56;
    v57->m_SkyFog.m_fDownHeight = v55;
    v57->m_SkyFog.m_fDownHeightExp = v54;
    v57->m_SkyFog.m_fDownStrength = v53;
    v57->m_SkyFog.m_DownColour[0] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogColour[0];
    v57->m_SkyFog.m_DownColour[1] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogColour[1];
    v57->m_SkyFog.m_DownColour[2] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogColour[2];
    v57->m_SkyFog.m_DownColour[3] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogColour[3];
    v58 = this->m_pRender;
    v59 = 1.0 / (float)(1000.0 - v58->m_SkyFog.m_fDownHeight);
    v60 = (float)(v58->m_SkyFog.m_fUpDistance - 1.0) * 0.00024420026;
    v61 = 1.0 / (float)(1000.0 - v58->m_SkyFog.m_fUpHeight);
    v62 = (float)(v58->m_SkyFog.m_fDownDistance - 1.0) * 0.00024420026;
    v58->m_SkyFog.m_fShaderDistDivisor = 0.00024420026;
    v58->m_SkyFog.m_fShaderUpDistance = v60;
    v58->m_SkyFog.m_fShaderUpHeight = v61;
    v58->m_SkyFog.m_fShaderDownDistance = v62;
    v58->m_SkyFog.m_fShaderExtraHeightSetting = v59;
  }
  v63 = v96->roundPhase;
  if ( v63 == INIT || v63 == (WALL|DIE) )
    return;
  v64 = this->m_pRender;
  if ( v64->m_RenderStackNo < 8 )
    v64->m_RenderStackNo = 2;
  ActionSystem::DrawCaller(&v6->actSystem, 2);
  v65 = this->m_pRender;
  if ( v65->m_RenderStackNo < 8 )
    v65->m_RenderStackNo = 3;
  ActionSystem::DrawCaller(&v6->actSystem, 3);
  v90._Mystorage._Ptrs[7] = 0i64;
  if ( AppMain::CheckProjBlendActor )
  {
    v90._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<void (*)(Actor &),std::allocator<int>,void,Actor &>::`vftable';
    v90._Mystorage._Ptrs[1] = (std::_Func_base<void,Actor &> *)AppMain::CheckProjBlendActor;
    v90._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v90;
  }
  ActionSystem::FuncCallRequest(&v6->actSystem, (Actor *)2, &v90);
  v91._Mystorage._Ptrs[7] = 0i64;
  if ( AppMain::CheckProjBlendActor )
  {
    v91._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<void (*)(Actor &),std::allocator<int>,void,Actor &>::`vftable';
    v91._Mystorage._Ptrs[1] = (std::_Func_base<void,Actor &> *)AppMain::CheckProjBlendActor;
    v91._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v91;
  }
  ActionSystem::FuncCallRequest(&v6->actSystem, (Actor *)3, &v91);
  v92._Mystorage._Ptrs[7] = 0i64;
  if ( AppMain::CheckProjBlendActor )
  {
    v92._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<void (*)(Actor &),std::allocator<int>,void,Actor &>::`vftable';
    v92._Mystorage._Ptrs[1] = (std::_Func_base<void,Actor &> *)AppMain::CheckProjBlendActor;
    v92._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v92;
  }
  ActionSystem::FuncCallRequest(&v6->actSystem, (Actor *)4, &v92);
  v93._Mystorage._Ptrs[7] = 0i64;
  if ( AppMain::CheckProjBlendActor )
  {
    v93._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<void (*)(Actor &),std::allocator<int>,void,Actor &>::`vftable';
    v93._Mystorage._Ptrs[1] = (std::_Func_base<void,Actor &> *)AppMain::CheckProjBlendActor;
    v93._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v93;
  }
  ActionSystem::FuncCallRequest(&v6->actSystem, (Actor *)5, &v93);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v13 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v67);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  type = v6->actSystem.actBlack.data[v6->actSystem.actBlack.iPriTarget].type;
  if ( type > 0
    && (type <= 4 || type <= 6 && v6->actSystem.actBlack.data[v6->actSystem.actBlack.iPriTarget].fFadeAlpha >= 1.0)
    || (unsigned int)(v6->actSystem.actBlack.data[v6->actSystem.actBlack.iPriTarget].type - 7) <= 1
    || (unsigned int)(v6->actSystem.actBlack.data[0].type - 7) <= 1 )
  {
    goto LABEL_117;
  }
  v70 = this->pBattleStage;
  if ( !v70 || !v70->m_bResourcesInitialized )
    goto LABEL_115;
  v71 = this->m_pRender;
  if ( v71->m_RenderStackNo < 8 )
    v71->m_RenderStackNo = 0;
  v72 = this->pBattleStage;
  if ( v72 )
    BattleStage::draw(v72);
  for ( i = 0; i < 64; ++i )
  {
    v74 = 0;
    for ( j = 0i64; ; ++j )
    {
      v76 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
      if ( !v76 || *(_BYTE *)(v76 + 96) )
      {
        v77 = 0i64;
      }
      else
      {
        if ( (*(_QWORD *)(v76 + 88) & 1) == 0 )
          extension::AsyncStatus::waitFor(
            (extension::AsyncStatus *)(v76 + 88),
            (extension::AsyncStatus::Step)m_pOGLModel);
        v77 = *(_QWORD *)(v76 + 72);
      }
      if ( v74 >= (int)((__int64)(*(_QWORD *)(v77 + 208) - *(_QWORD *)(v77 + 200)) >> 3) )
        break;
      pModel = this->pModel;
      if ( pModel[j] )
      {
        v79 = pModel[j];
        if ( v79->m_iPriority == i )
        {
          v80 = this->pBattleStage;
          if ( v80 )
          {
            m_pResourceContainer = v80->m_pResourceContainer;
            if ( m_pResourceContainer )
            {
              if ( m_pResourceContainer->m_bActived )
              {
                if ( !v79 )
                  goto LABEL_112;
                Myfirst = v80->m_pGlobalEvents._Mypair._Myval2._Myfirst;
                Mylast = v80->m_pGlobalEvents._Mypair._Myval2._Mylast;
                while ( Myfirst != Mylast )
                {
                  v84 = *Myfirst;
                  m_pOGLModel = (*Myfirst)->m_pOGLModel;
                  if ( m_pOGLModel && m_pOGLModel == v79 )
                  {
                    if ( !v84->m_bVisible || !v84->m_bCullingVisible )
                      goto LABEL_112;
                    break;
                  }
                  ++Myfirst;
                }
              }
            }
          }
          if ( this->ModelRoomSettings.postprocessSettings.godRaySettings.shaderOn
            && this->ModelRoomSettings.postprocessSettings.godRaySettings.sunModelIndex == v74
            && this->SaveDataMain.GraphicsOptionData.bGodRaysEnabled )
          {
            v85 = this->m_pRender;
            if ( v85->m_RenderStackNo < 8 )
              v85->m_RenderStackNo = 1;
            OGLRender::addStack(this->m_pRender, this->pModel[j], 1.0, (int)v79);
            v86 = this->m_pRender;
            if ( v86->m_RenderStackNo < 8 )
              v86->m_RenderStackNo = 0;
          }
          else
          {
            OGLRender::addStack(this->m_pRender, v79, 1.0, (int)v79);
          }
        }
      }
LABEL_112:
      ++v74;
    }
  }
  v31 = v96;
LABEL_115:
  v87 = this->pBattleStage;
  if ( v87 )
    BattleStage::drawDirectRendring(v87);
LABEL_117:
  ActionSystem::DrawCaller(&v6->actSystem, 0, 1);
  ActionSystem::DrawCaller(&v6->actSystem, 6, 9);
  if ( !v97 )
  {
    v88 = this->effSystem;
    v88->m_renderThreadStack._Mypair._Myval2._Mylast = v88->m_renderThreadStack._Mypair._Myval2._Myfirst;
    v88->updateVertexBufferFlag = 0;
  }
  if ( (!Framework::GLManager::glm->m_paused
     || (unsigned int)(v31->battleInfo.battleMode - 4) <= 1
     || v6->actSystem.bFreeCameraMode)
    && v97 )
  {
    AppMain::setupLightUniforms(this, -1);
    AppMain::setupShadowMatrices(this);
  }
}

void __fastcall AppMain::BattleRoundInit(AppMain *this, bool bDirectStart, bool bDataReload)
{
  bool v3; // r12
  BattleSystem::BattleController *v5; // r15
  BattleSystem::BattleController *v6; // rax
  RestrictRingBuffer<int> *Myval2; // rcx
  int v8; // esi
  RestrictRingBuffer<int> *v9; // rcx
  RestrictRingBuffer<InputKeyHistory::History> *v10; // rax
  RestrictRingBuffer<int> *v11; // rax
  RestrictRingBuffer<int> *v12; // rax
  RestrictRingBuffer<InputKeyHistory::History> *v13; // rax
  __int64 iRoundCount; // rdi
  __int64 v15; // rbp
  int v16; // ecx
  unsigned int v17; // edi
  GameDataInfo *v18; // rcx
  GameDataInfo *v19; // rcx
  BattleSystem::BattleController *v20; // rax
  BattleHud *p_m_BattleHud; // r13
  AppMain *v22; // rcx
  __int64 v23; // r14
  BattleCallAnimation *v24; // rdi
  __int64 v25; // rdi
  BattleCall::Animation *m_pAnimations; // rcx
  BattleCallAnimation *animation; // rcx
  GameDataInfo *v28; // rcx
  __int64 v29; // rdi
  STAGE_ID battleStageID; // ebp
  BattleStage *pBattleStage; // rcx
  char v32; // al
  __int64 v33; // r12
  __int64 v34; // r14
  __int64 v35; // r11
  int iBaseCharaID; // er9
  int v37; // edi
  CharaProjectData *v38; // rsi
  int CharaDataIndex; // eax
  int v40; // er10
  __int64 v41; // rax
  int v42; // ecx
  int v43; // edx
  _DWORD *v44; // r8
  _DWORD *v45; // rax
  _DWORD *v46; // rax
  int v47; // ecx
  int v48; // edx
  _DWORD *v49; // rax
  char v50; // r8
  BattleStage *v51; // rdx
  __int64 v52; // rcx
  BattleStage *v53; // rsi
  BattleStageResourceContainer *m_pResourceContainer; // rax
  BattleStageResourcePack *m_pResourcPack; // rcx
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *m_ptr; // rdi
  extension::AsyncContent<StageResources> *v57; // rax
  extension::AsyncContent<StageResources> *v58; // rdi
  StageResources *v59; // r14
  EffectDataListManager **pEffectManagers; // r14
  BattleStageResourcePack *v61; // rcx
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *v62; // rdi
  extension::AsyncContent<StageResources> *v63; // rax
  extension::AsyncContent<StageResources> *v64; // rdi
  StageResources *v65; // rax
  int effectManagerCount; // ecx
  __int64 v67; // rsi
  __int64 i; // rdi
  int *p_iPreviewSide; // rdx
  float *p_fMotionFrame; // rcx
  __int64 v71; // rdi
  SoundVolumeModulation *v72; // rax
  __int64 v73; // rdx
  float *p_fCurrent; // rcx
  __int64 v75; // rdx
  float *v76; // rcx
  __int64 v77; // rdx
  float *v78; // rcx
  __int64 v79; // rdx
  float *v80; // rcx
  float *v81; // rcx
  GameDataInfo *v82; // rcx
  int v83; // ecx
  BattleSystem::BattleController *v84; // [rsp+70h] [rbp+8h]
  __int64 v85; // [rsp+70h] [rbp+8h]
  BattleSystem::BattleController *v87; // [rsp+88h] [rbp+20h]

  v3 = bDirectStart;
  v5 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v84 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v84);
    v5 = v6;
    BattleSystem::BattleController::instance = v6;
  }
  Myval2 = this->m_KeyData[0].pKeyBuffer._Mypair._Myval2;
  v8 = 0;
  Myval2->uiDataSize = 0;
  *(_QWORD *)&Myval2->uiBeginIndex = 0i64;
  v9 = this->m_CmdKeyData[0].pKeyBuffer._Mypair._Myval2;
  v9->uiDataSize = 0;
  *(_QWORD *)&v9->uiBeginIndex = 0i64;
  v10 = this->m_KeyHistory[0].pKeyHistory._Mypair._Myval2;
  v10->uiDataSize = 0;
  *(_QWORD *)&v10->uiBeginIndex = 0i64;
  v11 = this->m_KeyData[1].pKeyBuffer._Mypair._Myval2;
  v11->uiDataSize = 0;
  *(_QWORD *)&v11->uiBeginIndex = 0i64;
  v12 = this->m_CmdKeyData[1].pKeyBuffer._Mypair._Myval2;
  v12->uiDataSize = 0;
  *(_QWORD *)&v12->uiBeginIndex = 0i64;
  v13 = this->m_KeyHistory[1].pKeyHistory._Mypair._Myval2;
  v13->uiDataSize = 0;
  *(_QWORD *)&v13->uiBeginIndex = 0i64;
  v5->bDirectStart = v3;
  iRoundCount = v5->battleInfo.iRoundCount;
  v15 = *(_QWORD *)NtCurrentTeb()->Reserved1[11];
  v85 = v15;
  v16 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v15 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v16 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v16 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  v17 = `GameDataInfo::getInstance'::`2'::instance.m_RandSeed[iRoundCount];
  if ( v16 > *(_DWORD *)(v15 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v18);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  BattleSystem::BattleController::RoundInit(
    v5,
    `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex],
    v17);
  if ( v5->battleInfo.battleMode == TRAINING )
  {
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v15 + 40) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v19);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    BattleSystem::BattleController::SetTrainingSetting(
      v5,
      &`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting);
  }
  this->m_eventCheckValues = 0;
  v20 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v87 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v87);
    BattleSystem::BattleController::instance = v20;
  }
  p_m_BattleHud = &this->m_BattleHud;
  BattleHud::setupBattleParams(&this->m_BattleHud, &v20->actSystem);
  if ( !this->m_BattleHud.isError(&this->m_BattleHud.ErrorChecker) && this->m_BattleHud.m_bInitialize )
    this->m_BattleHud.m_visibleFlags = 0;
  AppMain::OnlineSetupGUIParams(this);
  if ( !AppMain::isPreloadingBattleStartAnimation(v22) )
  {
    if ( v3 )
    {
      if ( this->m_BattleCall.m_pAnimations && this->m_BattleCall.m_entryAnimatoinCount > 0 )
      {
        v25 = 0i64;
        do
        {
          m_pAnimations = this->m_BattleCall.m_pAnimations;
          if ( m_pAnimations[v25].animationType )
          {
            animation = m_pAnimations[v25].animation;
            if ( animation )
            {
              ((void (__fastcall *)(BattleCallAnimation *, __int64))animation->~ErrorChecker)(animation, 1i64);
              this->m_BattleCall.m_pAnimations[v25].animation = 0i64;
            }
          }
          ++v8;
          ++v25;
        }
        while ( v8 < this->m_BattleCall.m_entryAnimatoinCount );
      }
      *(_QWORD *)&this->m_BattleCall.m_entryAnimatoinCount = 0i64;
      *(_WORD *)&this->m_BattleCall.m_bActived = 0;
    }
    else
    {
      AppMain::entryBattleStartAnimation(this);
      if ( this->m_BattleCall.m_entryAnimatoinCount > 0 )
      {
        v23 = 0i64;
        do
        {
          v24 = this->m_BattleCall.m_pAnimations[v23].animation;
          if ( !v24->isError(v24) && !v24->m_pImages )
            v24->readResources(v24);
          ++v8;
          ++v23;
        }
        while ( v8 < this->m_BattleCall.m_entryAnimatoinCount );
      }
    }
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v15 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v28);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v29 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  battleStageID = v5->battleInfo.battleStageID;
  if ( v5->battleInfo.timeLimit )
  {
    BattleHud::setTimerCount(&this->m_BattleHud, v5->battleInfo.iRoundLimitFrame / 90);
  }
  else if ( !this->m_BattleHud.isError(&this->m_BattleHud.ErrorChecker) && this->m_BattleHud.m_bInitialize )
  {
    this->m_BattleHud.m_timer = -1;
    this->m_BattleHud.m_timerAnimationFrame = 0.0;
  }
  pBattleStage = this->pBattleStage;
  if ( pBattleStage )
  {
    if ( battleStageID != STAGE_ID_GTR || (v32 = 1, !v3) )
      v32 = 0;
    pBattleStage->m_bRestart = v32;
    v33 = v29;
    v34 = 0i64;
    v35 = *(_QWORD *)&AppMain::pApp;
    do
    {
      if ( v5->playerInfo[v34].iMemberCount > 0 )
      {
        v37 = v5->playerInfo[v34].charaNo[0];
        v38 = *(CharaProjectData **)(v35 + 10888);
        CharaDataIndex = CharaProjectData::GetCharaDataIndex(v38, v37);
        if ( CharaDataIndex >= 0 )
        {
          iBaseCharaID = v38->pCharaData[CharaDataIndex].iBaseCharaID;
          if ( iBaseCharaID < 0 )
            iBaseCharaID = v37;
        }
        else
        {
          iBaseCharaID = -1;
        }
        v35 = *(_QWORD *)&AppMain::pApp;
      }
      else
      {
        iBaseCharaID = -1;
      }
      v40 = 1;
      if ( v33 == 1 && v34 == 1 )
        v40 = 2;
      v41 = *(_QWORD *)(v35 + 11056);
      if ( *(_DWORD *)v41 != 1 )
        goto LABEL_72;
      v42 = 0;
      v43 = *(_DWORD *)(v41 + 24);
      if ( v43 <= 0 )
        goto LABEL_72;
      v44 = *(_DWORD **)(v41 + 32);
      v45 = v44;
      while ( *v45 != battleStageID )
      {
        ++v42;
        v45 += 32;
        if ( v42 >= v43 )
          goto LABEL_72;
      }
      v46 = &v44[32 * (__int64)v42];
      if ( v46 && (v47 = 0, v48 = v46[8], v48 > 0) )
      {
        v49 = (_DWORD *)*((_QWORD *)v46 + 3);
        while ( *v49 != iBaseCharaID )
        {
          ++v47;
          ++v49;
          if ( v47 >= v48 )
            goto LABEL_72;
        }
        v50 = 1;
      }
      else
      {
LABEL_72:
        v50 = 0;
      }
      v51 = this->pBattleStage;
      v51->m_characterInfos[v34].characterNo = iBaseCharaID;
      v52 = v34;
      v51->m_characterInfos[v52].playerType = v40;
      v51->m_characterInfos[v52].characterType = (v50 != 0) + 1;
      ++v34;
    }
    while ( v34 < 2 );
    v53 = this->pBattleStage;
    m_pResourceContainer = v53->m_pResourceContainer;
    p_m_BattleHud = &this->m_BattleHud;
    if ( m_pResourceContainer )
    {
      if ( m_pResourceContainer->m_bActived )
      {
        m_pResourcPack = m_pResourceContainer->m_pResourcPack;
        if ( m_pResourcPack )
        {
          m_ptr = m_pResourcPack->datas.m_body.m_ptr;
          v57 = m_ptr->m_content.m_ptr;
          if ( v57 )
          {
            if ( !v57->m_isDataReleased )
            {
              v58 = m_ptr->m_content.m_ptr;
              if ( v57->m_isDataReleased )
              {
                v59 = 0i64;
              }
              else
              {
                if ( (v57->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
                  extension::AsyncStatus::waitFor(&v57->m_status, (extension::AsyncStatus::Step)v51);
                v59 = v58->m_data._Mypair._Myval2;
              }
              pEffectManagers = v59->pEffectManagers;
              if ( pEffectManagers )
              {
                v61 = v53->m_pResourceContainer->m_pResourcPack;
                if ( v61
                  && (v62 = v61->datas.m_body.m_ptr, (v63 = v62->m_content.m_ptr) != 0i64)
                  && !v63->m_isDataReleased )
                {
                  v64 = v62->m_content.m_ptr;
                  if ( v63->m_isDataReleased )
                  {
                    v65 = 0i64;
                  }
                  else
                  {
                    if ( (v63->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
                      extension::AsyncStatus::waitFor(&v63->m_status, (extension::AsyncStatus::Step)v51);
                    v65 = v64->m_data._Mypair._Myval2;
                  }
                  effectManagerCount = v65->effectManagerCount;
                }
                else
                {
                  effectManagerCount = 0;
                }
                v67 = effectManagerCount;
                for ( i = 0i64; i < v67; EffectDataListManager::loadRoundData(pEffectManagers[i++]) )
                  ;
              }
            }
          }
        }
      }
    }
    v3 = bDirectStart;
  }
  AppMain::BattleOnlineWatchingStart(this);
  p_iPreviewSide = &this->cameraMotionPreview.iPreviewSide;
  if ( &this->cameraMotionPreview != (CAMERA_MOTION_PREVIEW_SETTINGS *)&this->cameraMotionPreview.iPreviewSide )
  {
    p_fMotionFrame = &this->cameraMotionPreview.charaParam[0].fMotionFrame;
    do
    {
      *((_QWORD *)p_fMotionFrame - 1) = 0i64;
      *(_QWORD *)p_fMotionFrame = 0i64;
      p_fMotionFrame[2] = 0.0;
      p_fMotionFrame[3] = NAN;
      p_fMotionFrame += 6;
    }
    while ( p_fMotionFrame - 2 != (float *)p_iPreviewSide );
  }
  *p_iPreviewSide = -1;
  this->cameraMotionPreview.iPlayMode = 0;
  v71 = 7i64;
  v72 = `anonymous namespace'::SoundVolumeModulation::instance;
  if ( !v5->bDirectStart )
  {
    if ( !`anonymous namespace'::SoundVolumeModulation::instance )
    {
      v72 = (SoundVolumeModulation *)operator new(0xB8ui64);
      v73 = 7i64;
      p_fCurrent = &v72->modulationParam[0].fCurrent;
      do
      {
        *(p_fCurrent - 2) = 1.0;
        *(p_fCurrent - 1) = 1.0;
        *p_fCurrent = 1.0;
        *(_QWORD *)(p_fCurrent + 1) = 1065353216i64;
        *((_BYTE *)p_fCurrent + 12) = 0;
        p_fCurrent += 6;
        --v73;
      }
      while ( v73 );
      v72->lastFrameTimePoint = 0i64;
      v72->lastFrameTimePointIsValid = 0;
      `anonymous namespace'::SoundVolumeModulation::instance = v72;
    }
    *(_QWORD *)&v72->modulationParam[3].fTo = 0i64;
    v72->modulationParam[3].fCurrent = 0.0;
  }
  if ( !v72 )
  {
    v72 = (SoundVolumeModulation *)operator new(0xB8ui64);
    v75 = 7i64;
    v76 = &v72->modulationParam[0].fCurrent;
    do
    {
      *(v76 - 2) = 1.0;
      *(v76 - 1) = 1.0;
      *v76 = 1.0;
      *(_QWORD *)(v76 + 1) = 1065353216i64;
      *((_BYTE *)v76 + 12) = 0;
      v76 += 6;
      --v75;
    }
    while ( v75 );
    v72->lastFrameTimePoint = 0i64;
    v72->lastFrameTimePointIsValid = 0;
    `anonymous namespace'::SoundVolumeModulation::instance = v72;
  }
  *(_QWORD *)&v72->modulationParam[2].fTo = 1065353216i64;
  v72->modulationParam[2].fCurrent = 1.0;
  if ( !v72 )
  {
    v72 = (SoundVolumeModulation *)operator new(0xB8ui64);
    v77 = 7i64;
    v78 = &v72->modulationParam[0].fCurrent;
    do
    {
      *(v78 - 2) = 1.0;
      *(v78 - 1) = 1.0;
      *v78 = 1.0;
      *(_QWORD *)(v78 + 1) = 1065353216i64;
      *((_BYTE *)v78 + 12) = 0;
      v78 += 6;
      --v77;
    }
    while ( v77 );
    v72->lastFrameTimePoint = 0i64;
    v72->lastFrameTimePointIsValid = 0;
    `anonymous namespace'::SoundVolumeModulation::instance = v72;
  }
  *(_QWORD *)&v72->modulationParam[4].fTo = 1065353216i64;
  v72->modulationParam[4].fCurrent = 1.0;
  if ( !v72 )
  {
    v72 = (SoundVolumeModulation *)operator new(0xB8ui64);
    v79 = 7i64;
    v80 = &v72->modulationParam[0].fCurrent;
    do
    {
      *(v80 - 2) = 1.0;
      *(v80 - 1) = 1.0;
      *v80 = 1.0;
      *(_QWORD *)(v80 + 1) = 1065353216i64;
      *((_BYTE *)v80 + 12) = 0;
      v80 += 6;
      --v79;
    }
    while ( v79 );
    v72->lastFrameTimePoint = 0i64;
    v72->lastFrameTimePointIsValid = 0;
    `anonymous namespace'::SoundVolumeModulation::instance = v72;
  }
  *(_QWORD *)&v72->modulationParam[5].fTo = 1065353216i64;
  v72->modulationParam[5].fCurrent = 1.0;
  if ( !v72 )
  {
    v72 = (SoundVolumeModulation *)operator new(0xB8ui64);
    v81 = &v72->modulationParam[0].fCurrent;
    do
    {
      *(v81 - 2) = 1.0;
      *(v81 - 1) = 1.0;
      *v81 = 1.0;
      *(_QWORD *)(v81 + 1) = 1065353216i64;
      *((_BYTE *)v81 + 12) = 0;
      v81 += 6;
      --v71;
    }
    while ( v71 );
    v72->lastFrameTimePoint = 0i64;
    v72->lastFrameTimePointIsValid = 0;
    `anonymous namespace'::SoundVolumeModulation::instance = v72;
  }
  *(_QWORD *)&v72->modulationParam[0].fTo = 1065353216i64;
  v72->modulationParam[0].fCurrent = 1.0;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v85 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v82);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
    SetCommandBufferForReplay(v5->battleInfo.iRoundCount);
  this->m_ReplayRoundMoveFlag = 0;
  *(_QWORD *)&this->m_ReplayRoundInfo.playerData[0].iMemberReferIndex = 0i64;
  *(_QWORD *)&this->m_ReplayRoundInfo.playerData[0].iFinishSkill[3] = 0i64;
  *(_QWORD *)&this->m_ReplayRoundInfo.playerData[0].xExPower.value = 0i64;
  *(_QWORD *)&this->m_ReplayRoundInfo.playerData[0].xGuardPower.value = 0i64;
  *(_QWORD *)&this->m_ReplayRoundInfo.playerData[0].xRecoveryVital.value = 0i64;
  *(_QWORD *)&this->m_ReplayRoundInfo.playerData[1].iMaxExPowerExtend = 0i64;
  *(_QWORD *)&this->m_ReplayRoundInfo.playerData[1].xVital.value = 0i64;
  *(_QWORD *)&this->m_ReplayRoundInfo.playerData[1].xClimaxTime.value = 0i64;
  *(_QWORD *)&this->m_ReplayRoundInfo.playerData[1].xStunPower.value = 0i64;
  *(_DWORD *)&this->m_ReplayRoundInfo.iRoundCount = 0;
  if ( !p_m_BattleHud->isError(&p_m_BattleHud->ErrorChecker) && p_m_BattleHud->m_bInitialize )
    p_m_BattleHud->m_visibleFlags = (unsigned __int8)-v3;
  AppMain::BattleMissionMessageInit(this, v3);
  *(_WORD *)&this->bBattleFastForward = 0;
  this->m_bTouchPadPressEnable = 0;
  this->m_bFadeEnd = 0;
  this->m_iFadeFrame = 20;
  this->m_iFadeColor.rgba = 255;
  v83 = 1000 * this->m_iFadeColor.s.a;
  this->m_iFadeAlpha = v83;
  this->m_iFadeRate = v83 / 20;
  this->m_bFadeLock = 1;
  this->m_FuncFT = 171;
}

char __fastcall AppMain::PauseCheck(AppMain *this, __int64 a2, UserGameOperation::TestPolicy a3)
{
  bool pauseFlag; // si
  BattleSystem::BattleController *v5; // rbx
  BattleSystem::BattleController *v6; // rax
  BattleSystem::BATTLE_MODE battleMode; // er15
  NETWORK_MATCHING_TYPE matchMode; // er12
  _DWORD *v9; // r14
  int v10; // ecx
  GAME_MODE *m_GameMode; // rdx
  GAME_MODE v12; // ebp
  GameDataInfo *v13; // rcx
  __int64 v15; // rbx
  int v16; // er14
  GameOperations::GameOpSpec v17; // edx
  UserGameOperation::TestPolicy v18; // er8
  BattleSystem::PauseController *Instance; // rax
  UserGameOperation *v20; // r11
  int v21; // er8
  int v22; // edx
  Framework::GLManager *i; // rax
  UserGameOperation::UserSlot *p_m_emptyUserSlot; // r9
  std::bitset<16> *v25; // r8
  __int64 v26; // rdx
  signed __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  BattleSystem::PauseController *v31; // rax
  BattleSystem::BATTLE_MODE v32; // eax
  GameDataInfo *v33; // rax
  GameDataInfo *v34; // rax
  GameOperations::GameOpSpec v35; // edx
  UserGameOperation::TestPolicy v36; // er8
  GameOperations::GameOpSpec v37; // edx
  UserGameOperation::TestPolicy v38; // er8
  BattleSystem::PauseController *v39; // rax
  BattleSystem::PauseController *v40; // rax
  BattleSystem::BATTLE_MODE v41; // eax
  BattleSystem::BattleController *v42[2]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v43; // [rsp+30h] [rbp-78h]
  __int128 v44; // [rsp+40h] [rbp-68h] BYREF
  __int128 v45[2]; // [rsp+50h] [rbp-58h]

  v42[1] = (BattleSystem::BattleController *)-2i64;
  pauseFlag = 0;
  v5 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v42[0] = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v42[0]);
    v5 = v6;
    BattleSystem::BattleController::instance = v6;
  }
  battleMode = v5->battleInfo.battleMode;
  matchMode = g_NetworkManager.gamedata.matchMode;
  v9 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  v10 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v9 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v10 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v10 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  m_GameMode = `GameDataInfo::getInstance'::`2'::instance.m_GameMode;
  v12 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  if ( v10 > *v9 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v13);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( !`GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag
    && ((unsigned int)(v12 - 4) <= 2 || v12 == GAME_MODE_ONLINETRAINING) )
  {
    if ( g_NetworkManager.gamedata.onlineState != NET_STATE_BATTLE && v5->roundPhase <= DIE )
      return 1;
    if ( this->m_bSwitchingOnlineID && !this->m_iFadeAlpha )
    {
      if ( this->m_onlineRoomMemberParams.pScene )
        AppMain::switchingOnlineRoomMembers(this, (bool)m_GameMode);
      this->m_bSwitchingOnlineID = 0;
    }
    if ( pBtlNet )
      pauseFlag = pBtlNet->pauseFlag;
    else
      pauseFlag = 0;
    v15 = 0i64;
    if ( battleMode != TRAINING )
      goto LABEL_29;
    v16 = UserGameOperation::TestFighter(1, (GameOperations::GameOpSpec)m_GameMode, a3);
    if ( UserGameOperation::TestFighter(2, v17, v18) )
    {
      v16 = 2;
    }
    else if ( !v16 )
    {
      goto LABEL_29;
    }
    if ( !BattleSystem::PauseController::GetInstance()->m_Pause )
    {
      Instance = BattleSystem::PauseController::GetInstance();
      Instance->m_Pause = 1;
      Instance->m_InputContorollerID = v16;
      AppMain::BattlePauseInit(this);
    }
LABEL_29:
    if ( matchMode == NETWORK_MATCHING_TYPE_FREE )
    {
      v20 = UserGameOperation::Instance();
      if ( Framework::GLManager::glm )
      {
        v21 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2199612i64);
        if ( v21 )
        {
          v22 = 0;
          for ( i = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
                i != (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType;
                i = (Framework::GLManager *)((char *)i + 16) )
          {
            ++v22;
            if ( i->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy && v22 == v21 )
            {
              if ( v22 == -1 )
                break;
              p_m_emptyUserSlot = &v20->m_slots[v22 - 1];
              goto LABEL_40;
            }
          }
        }
      }
      p_m_emptyUserSlot = &v20->m_emptyUserSlot;
LABEL_40:
      if ( p_m_emptyUserSlot )
      {
        v25 = &v20->m_ButtonConfig[12];
        LODWORD(v42[0]) = 0xFFFF;
        v26 = 0i64;
        while ( *(_DWORD *)((char *)v42 + 4 * v26 + (char *)&v20->m_ButtonConfig[12] - (char *)v42) == *((_DWORD *)v42 + v26) )
        {
          if ( --v26 < 0 )
            goto LABEL_49;
        }
        LODWORD(v42[0]) = v25->_Array[0] & p_m_emptyUserSlot->m_pressedEventChannels._Array[0];
        v27 = (char *)v25 - (char *)v42;
        while ( *((_DWORD *)v42 + v15) == *(_DWORD *)((char *)v42 + 4 * v15 + v27) )
        {
          if ( --v15 < 0 )
            goto LABEL_55;
        }
LABEL_49:
        v43 = *(_OWORD *)v20->m_KeyboardButtonConfig[12]._Array;
        v44 = *(_OWORD *)&v20->m_KeyboardButtonConfig[12]._Array[2];
        v28 = 3i64;
        v29 = 3i64;
        v30 = (char *)p_m_emptyUserSlot - ((char *)&v44 + 8) + 88;
        do
        {
          *((_QWORD *)&v43 + v29) &= *(_QWORD *)((char *)&v43 + 8 * v29 + v30);
          --v29;
        }
        while ( v29 >= 0 );
        v45[0] = v43;
        v45[1] = v44;
        while ( !*((_QWORD *)v45 + v28) )
        {
          if ( --v28 < 0 )
            return pauseFlag;
        }
LABEL_55:
        if ( !BattleSystem::PauseController::GetInstance()->m_Pause )
        {
          v31 = BattleSystem::PauseController::GetInstance();
          v31->m_Pause = 1;
          v31->m_InputContorollerID = CONTROLLER_ID_1P;
          AppMain::BattlePauseInit(this);
        }
      }
    }
    return pauseFlag;
  }
  if ( !BattleSystem::PauseController::GetInstance()->m_Pause )
  {
    v32 = v5->battleInfo.battleMode;
    if ( (v32 == MISSION || v32 == MISSION_DEVELOP) && v5->roundPhase == (WALL|HIT) && v5->uiRoundPhaseFrame )
    {
      AppMain::BattleMissionEndMessage(this);
      goto LABEL_77;
    }
    if ( (unsigned int)(v32 - 4) <= 1 )
    {
LABEL_77:
      v41 = v5->battleInfo.battleMode;
      if ( v41 != TRAINING )
      {
        if ( v41 != MISSION && v41 != MISSION_DEVELOP || (unsigned int)(v41 - 4) <= 1 )
          return 0;
        if ( v5->roundPhase != DIE || v5->restartPosition || !this->SaveDataMain.PlayerData.m_TouchpadStatus )
          return pauseFlag;
      }
      FighterOperation::Instance();
      return pauseFlag;
    }
    if ( v5->roundPhase != DIE || v5->restartPosition )
    {
LABEL_76:
      pauseFlag = BattleSystem::PauseController::GetInstance()->m_Pause;
      if ( pauseFlag )
        return pauseFlag;
      goto LABEL_77;
    }
    v33 = GameDataInfo::getInstance();
    if ( (v33->m_ControllerSetting[0] || v33->m_ControllerSetting[1])
      && (v34 = GameDataInfo::getInstance(), v34->m_GameMode[v34->m_GameModeIndex] == GAME_MODE_VERSUS) )
    {
      if ( !UserGameOperation::TestFighter(1, v35, v36) )
      {
        if ( !UserGameOperation::TestFighter(2, v37, v38) )
          goto LABEL_76;
        v39 = BattleSystem::PauseController::GetInstance();
        v39->m_Pause = 1;
        v39->m_InputContorollerID = CONTROLLER_ID_2P;
        goto LABEL_75;
      }
    }
    else if ( !UserGameOperation::Test(1, GameOp_GameStart, Test_OnEdge) )
    {
      goto LABEL_76;
    }
    v40 = BattleSystem::PauseController::GetInstance();
    v40->m_Pause = 1;
    v40->m_InputContorollerID = CONTROLLER_ID_1P;
LABEL_75:
    AppMain::BattlePauseInit(this);
    goto LABEL_76;
  }
  return 1;
}

void __fastcall AppMain::ReplayControll(
        AppMain *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rdi
  UserGameOperation *v10; // r11
  int v11; // er8
  int v12; // eax
  Framework::GLManager *i; // rcx
  UserGameOperation::UserSlot *p_m_emptyUserSlot; // r8
  std::bitset<16> *v15; // r10
  __int64 v16; // rdx
  std::bitset<16> *v17; // rcx
  __int64 v18; // rdx
  signed __int64 v19; // r10
  __int64 v20; // rdx
  signed __int64 v21; // r8
  __int64 v22; // rax
  GfxManager *v23; // rax
  BattleSystem::PauseController *Instance; // rax
  UserGameOperation *v25; // r11
  int v26; // er8
  int v27; // eax
  Framework::GLManager *j; // rcx
  UserGameOperation::UserSlot *v29; // r8
  std::bitset<16> *v30; // r10
  __int64 v31; // rdx
  std::bitset<16> *v32; // rcx
  __int64 v33; // rdx
  signed __int64 v34; // r10
  __int64 v35; // rdx
  signed __int64 v36; // r8
  __int64 v37; // rax
  GfxManager *v38; // rax
  bool bBattlePause; // cl
  GfxManager *v40; // rax
  UserGameOperation *v41; // r11
  int v42; // er8
  int v43; // eax
  Framework::GLManager *k; // rcx
  UserGameOperation::UserSlot *v45; // r8
  std::bitset<16> *v46; // r10
  __int64 v47; // rdx
  std::bitset<16> *v48; // rcx
  __int64 v49; // rdx
  signed __int64 v50; // r10
  __int64 v51; // rdx
  signed __int64 v52; // r8
  __int64 v53; // rax
  GfxManager *v54; // rax
  __int64 v55; // rax
  UserGameOperation *v56; // r11
  int v57; // er8
  int v58; // eax
  Framework::GLManager *m; // rcx
  UserGameOperation::UserSlot *v60; // r9
  std::bitset<16> *v61; // rcx
  __int64 v62; // r8
  std::bitset<16> *v63; // rdx
  __int64 v64; // rdx
  char *v65; // r8
  __int64 v66; // rdx
  signed __int64 v67; // r9
  __int64 v68; // rax
  GfxManager *v69; // rax
  __int64 v70; // rax
  bool v71; // bl
  __int64 v72; // rax
  __int64 v73; // rax
  UserGameOperation *v74; // r11
  int v75; // er8
  int v76; // eax
  Framework::GLManager *n; // rcx
  UserGameOperation::UserSlot *v78; // r9
  std::bitset<16> *v79; // rcx
  __int64 v80; // r8
  std::bitset<16> *v81; // rdx
  __int64 v82; // rdx
  char *v83; // r8
  __int64 v84; // rdx
  signed __int64 v85; // r9
  __int64 v86; // rax
  GfxManager *v87; // rax
  float v88; // xmm1_4
  float v89; // xmm2_4
  float v90; // xmm0_4
  bool v91; // bl
  BattleSystem::PauseController *v92; // rax
  UserGameOperation *v93; // r11
  int v94; // er8
  int v95; // eax
  Framework::GLManager *ii; // rcx
  UserGameOperation::UserSlot *v97; // r9
  std::bitset<16> *v98; // rcx
  __int64 v99; // r8
  std::bitset<16> *v100; // rdx
  __int64 v101; // rdx
  char *v102; // r8
  __int64 v103; // rdx
  signed __int64 v104; // r9
  GfxManager *v105; // rax
  BattleSystem::PauseController *v106; // rax
  GfxManager *v107[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v108; // [rsp+30h] [rbp-50h]
  __int128 v109; // [rsp+40h] [rbp-40h] BYREF
  __int128 v110; // [rsp+50h] [rbp-30h]
  __int128 v111; // [rsp+60h] [rbp-20h]
  void *retaddr; // [rsp+88h] [rbp+8h]

  v107[1] = (GfxManager *)-2i64;
  v9 = 3i64;
  if ( this->bBattlePause )
  {
    v10 = UserGameOperation::Instance();
    if ( Framework::GLManager::glm )
    {
      v11 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2199612i64);
      if ( v11 )
      {
        v12 = 0;
        for ( i = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
              i != (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType;
              i = (Framework::GLManager *)((char *)i + 16) )
        {
          ++v12;
          if ( i->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy && v12 == v11 )
          {
            if ( v12 == -1 )
              break;
            p_m_emptyUserSlot = &v10->m_slots[v12 - 1];
            goto LABEL_14;
          }
        }
      }
    }
    p_m_emptyUserSlot = &v10->m_emptyUserSlot;
LABEL_14:
    if ( p_m_emptyUserSlot )
    {
      v15 = &v10->m_ButtonConfig[12];
      LODWORD(v107[0]) = 0xFFFF;
      v16 = 0i64;
      v17 = &v10->m_ButtonConfig[12];
      while ( v17->_Array[0] == *(unsigned int *)((char *)v17->_Array + (char *)v107 - (char *)&v10->m_ButtonConfig[12]) )
      {
        --v17;
        if ( --v16 < 0 )
          goto LABEL_23;
      }
      LODWORD(v107[0]) = v15->_Array[0] & p_m_emptyUserSlot->m_pressedEventChannels._Array[0];
      v18 = 0i64;
      v19 = (char *)v15 - (char *)v107;
      while ( *((_DWORD *)v107 + v18) == *(_DWORD *)((char *)v107 + 4 * v18 + v19) )
      {
        if ( --v18 < 0 )
          goto LABEL_29;
      }
LABEL_23:
      v108 = *(_OWORD *)v10->m_KeyboardButtonConfig[12]._Array;
      v109 = *(_OWORD *)&v10->m_KeyboardButtonConfig[12]._Array[2];
      v20 = 3i64;
      v21 = (char *)p_m_emptyUserSlot - ((char *)&v109 + 8);
      do
      {
        *((_QWORD *)&v108 + v20) &= *(unsigned __int64 *)((char *)&retaddr + 8 * v20 + v21);
        --v20;
      }
      while ( v20 >= 0 );
      v110 = v108;
      v111 = v109;
      v22 = 3i64;
      while ( !*((_QWORD *)&v110 + v22) )
      {
        if ( --v22 < 0 )
          goto LABEL_33;
      }
LABEL_29:
      v23 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        v107[0] = (GfxManager *)operator new(0x108ui64);
        GfxManager::GfxManager(v107[0]);
        GfxManager::instance = v23;
      }
      if ( !GfxManager::GFv_IsOpenScreenMenu(v23) )
      {
        Instance = BattleSystem::PauseController::GetInstance();
        Instance->m_Pause = 1;
        Instance->m_InputContorollerID = CONTROLLER_ID_1P;
        AppMain::BattlePauseInit(this);
        return;
      }
    }
  }
  else if ( BattleSystem::PauseController::GetInstance()->m_Pause )
  {
    return;
  }
LABEL_33:
  v25 = UserGameOperation::Instance();
  if ( Framework::GLManager::glm )
  {
    v26 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2199612i64);
    if ( v26 )
    {
      v27 = 0;
      for ( j = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
            j != (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType;
            j = (Framework::GLManager *)((char *)j + 16) )
      {
        ++v27;
        if ( j->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy && v27 == v26 )
        {
          if ( v27 == -1 )
            break;
          v29 = &v25->m_slots[v27 - 1];
          goto LABEL_43;
        }
      }
    }
  }
  v29 = &v25->m_emptyUserSlot;
LABEL_43:
  if ( v29 )
  {
    v30 = &v25->m_ButtonConfig[4];
    LODWORD(v107[0]) = 0xFFFF;
    v31 = 0i64;
    v32 = &v25->m_ButtonConfig[4];
    while ( v32->_Array[0] == *(unsigned int *)((char *)v32->_Array + (char *)v107 - (char *)&v25->m_ButtonConfig[4]) )
    {
      --v32;
      if ( --v31 < 0 )
        goto LABEL_52;
    }
    LODWORD(v107[0]) = v30->_Array[0] & v29->m_pressedEventChannels._Array[0];
    v33 = 0i64;
    v34 = (char *)v30 - (char *)v107;
    while ( *((_DWORD *)v107 + v33) == *(_DWORD *)((char *)v107 + 4 * v33 + v34) )
    {
      if ( --v33 < 0 )
        goto LABEL_58;
    }
LABEL_52:
    v108 = *(_OWORD *)v25->m_KeyboardButtonConfig[4]._Array;
    v109 = *(_OWORD *)&v25->m_KeyboardButtonConfig[4]._Array[2];
    v35 = 3i64;
    v36 = (char *)v29 - ((char *)&v109 + 8);
    do
    {
      *((_QWORD *)&v108 + v35) &= *(unsigned __int64 *)((char *)&retaddr + 8 * v35 + v36);
      --v35;
    }
    while ( v35 >= 0 );
    v110 = v108;
    v111 = v109;
    v37 = 3i64;
    while ( !*((_QWORD *)&v110 + v37) )
    {
      if ( --v37 < 0 )
        goto LABEL_63;
    }
LABEL_58:
    v38 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v107[0] = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v107[0]);
      GfxManager::instance = v38;
    }
    if ( !GfxManager::GFv_IsOpenScreenMenu(v38) )
    {
      bBattlePause = this->bBattlePause;
      this->bBattlePause = !bBattlePause;
      this->bBattleFastForward = 0;
      if ( !bBattlePause )
      {
        GfxManager::getInstance();
        GfxManager::GFv_HideScreenMenu(v40);
      }
    }
  }
  else
  {
LABEL_63:
    v41 = UserGameOperation::Instance();
    if ( Framework::GLManager::glm )
    {
      v42 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2199612i64);
      if ( v42 )
      {
        v43 = 0;
        for ( k = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
              k != (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType;
              k = (Framework::GLManager *)((char *)k + 16) )
        {
          ++v43;
          if ( k->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy && v43 == v42 )
          {
            if ( v43 == -1 )
              break;
            v45 = &v41->m_slots[v43 - 1];
            goto LABEL_73;
          }
        }
      }
    }
    v45 = &v41->m_emptyUserSlot;
LABEL_73:
    if ( !v45 || v41->m_keyboardLocked )
    {
LABEL_93:
      v56 = UserGameOperation::Instance();
      if ( Framework::GLManager::glm )
      {
        v57 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2199612i64);
        if ( v57 )
        {
          v58 = 0;
          for ( m = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
                m != (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType;
                m = (Framework::GLManager *)((char *)m + 16) )
          {
            ++v58;
            if ( m->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy && v58 == v57 )
            {
              if ( v58 == -1 )
                break;
              v60 = &v56->m_slots[v58 - 1];
              goto LABEL_103;
            }
          }
        }
      }
      v60 = &v56->m_emptyUserSlot;
LABEL_103:
      if ( v60 )
      {
        v61 = &v56->m_ButtonConfig[26];
        LODWORD(v107[0]) = 0xFFFF;
        v62 = 0i64;
        v63 = &v56->m_ButtonConfig[26];
        while ( v63->_Array[0] == *(unsigned int *)((char *)v63->_Array + (char *)v107
                                                                        - (char *)&v56->m_ButtonConfig[26]) )
        {
          --v63;
          if ( --v62 < 0 )
            goto LABEL_112;
        }
        LODWORD(v107[0]) = v61->_Array[0] & v60->m_pressedEventChannels._Array[0];
        v64 = 0i64;
        v65 = (char *)((char *)v107 - (char *)v61);
        while ( *(unsigned int *)((char *)v61->_Array + (_QWORD)v65) == v61->_Array[0] )
        {
          --v61;
          if ( --v64 < 0 )
            goto LABEL_118;
        }
LABEL_112:
        v108 = *(_OWORD *)v56->m_KeyboardButtonConfig[26]._Array;
        v109 = *(_OWORD *)&v56->m_KeyboardButtonConfig[26]._Array[2];
        v66 = 3i64;
        v67 = (char *)v60 - ((char *)&v109 + 8);
        do
        {
          *((_QWORD *)&v108 + v66) &= *(unsigned __int64 *)((char *)&retaddr + 8 * v66 + v67);
          --v66;
        }
        while ( v66 >= 0 );
        v110 = v108;
        v111 = v109;
        v68 = 3i64;
        while ( !*((_QWORD *)&v110 + v68) )
        {
          if ( --v68 < 0 )
            goto LABEL_120;
        }
LABEL_118:
        GfxManager::getInstance();
        if ( !GfxManager::GFv_IsOpenScreenMenu(v69) )
        {
          BattleSystem::BattleController::GetActionSystem();
          v71 = *(_BYTE *)(v70 + 255114) == 0;
          BattleSystem::BattleController::GetActionSystem();
          *(_BYTE *)(v72 + 255114) = v71;
          BattleSystem::BattleController::GetActionSystem();
          *(_BYTE *)(v73 + 255113) = v71;
        }
      }
      else
      {
LABEL_120:
        v74 = UserGameOperation::Instance();
        if ( Framework::GLManager::glm )
        {
          v75 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2199612i64);
          if ( v75 )
          {
            v76 = 0;
            for ( n = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
                  n != (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType;
                  n = (Framework::GLManager *)((char *)n + 16) )
            {
              ++v76;
              if ( n->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy && v76 == v75 )
              {
                if ( v76 == -1 )
                  break;
                v78 = &v74->m_slots[v76 - 1];
                goto LABEL_130;
              }
            }
          }
        }
        v78 = &v74->m_emptyUserSlot;
LABEL_130:
        if ( v78 && !v74->m_keyboardLocked )
        {
          v79 = &v74->m_ButtonConfig[6];
          LODWORD(v107[0]) = 0xFFFF;
          v80 = 0i64;
          v81 = &v74->m_ButtonConfig[6];
          while ( v81->_Array[0] == *(unsigned int *)((char *)v81->_Array
                                                    + (char *)v107
                                                    - (char *)&v74->m_ButtonConfig[6]) )
          {
            --v81;
            if ( --v80 < 0 )
              goto LABEL_140;
          }
          LODWORD(v107[0]) = v79->_Array[0] & v78->m_pressedEventChannels._Array[0];
          v82 = 0i64;
          v83 = (char *)((char *)v107 - (char *)v79);
          while ( *(unsigned int *)((char *)v79->_Array + (_QWORD)v83) == v79->_Array[0] )
          {
            --v79;
            if ( --v82 < 0 )
              goto LABEL_146;
          }
LABEL_140:
          v108 = *(_OWORD *)v74->m_KeyboardButtonConfig[6]._Array;
          v109 = *(_OWORD *)&v74->m_KeyboardButtonConfig[6]._Array[2];
          v84 = 3i64;
          v85 = (char *)v78 - ((char *)&v109 + 8);
          do
          {
            *((_QWORD *)&v108 + v84) &= *(unsigned __int64 *)((char *)&retaddr + 8 * v84 + v85);
            --v84;
          }
          while ( v84 >= 0 );
          v110 = v108;
          v111 = v109;
          v86 = 3i64;
          while ( !*((_QWORD *)&v110 + v86) )
          {
            if ( --v86 < 0 )
              goto LABEL_154;
          }
LABEL_146:
          GfxManager::getInstance();
          if ( !GfxManager::GFv_IsOpenScreenMenu(v87) )
          {
            v88 = 0.0;
            if ( this->m_BattleHud.m_fadeAnimReplayUser.m_power < 0.0
              || this->m_BattleHud.m_fadeAnimReplayUser.m_number == 0.0 )
            {
              v89 = FLOAT_0_16666667;
            }
            else
            {
              v89 = FLOAT_N0_16666667;
            }
            *(_QWORD *)&this->m_BattleHud.m_fadeAnimReplayUser.m_max = 1065353216i64;
            v90 = fminf(this->m_BattleHud.m_fadeAnimReplayUser.m_number, 1.0);
            if ( v90 >= 0.0 )
              v88 = v90;
            this->m_BattleHud.m_fadeAnimReplayUser.m_number = v88;
            this->m_BattleHud.m_fadeAnimReplayUser.m_power = v89;
            this->m_BattleHud.m_fadeAnimReplayUser.m_bAnimation = 1;
          }
        }
      }
    }
    else
    {
      v46 = &v41->m_ButtonConfig[7];
      LODWORD(v107[0]) = 0xFFFF;
      v47 = 0i64;
      v48 = &v41->m_ButtonConfig[7];
      while ( v48->_Array[0] == *(unsigned int *)((char *)v48->_Array + (char *)v107 - (char *)&v41->m_ButtonConfig[7]) )
      {
        --v48;
        if ( --v47 < 0 )
          goto LABEL_83;
      }
      LODWORD(v107[0]) = v46->_Array[0] & v45->m_pressedEventChannels._Array[0];
      v49 = 0i64;
      v50 = (char *)v46 - (char *)v107;
      while ( *((_DWORD *)v107 + v49) == *(_DWORD *)((char *)v107 + 4 * v49 + v50) )
      {
        if ( --v49 < 0 )
          goto LABEL_89;
      }
LABEL_83:
      v108 = *(_OWORD *)v41->m_KeyboardButtonConfig[7]._Array;
      v109 = *(_OWORD *)&v41->m_KeyboardButtonConfig[7]._Array[2];
      v51 = 3i64;
      v52 = (char *)v45 - ((char *)&v109 + 8);
      do
      {
        *((_QWORD *)&v108 + v51) &= *(unsigned __int64 *)((char *)&retaddr + 8 * v51 + v52);
        --v51;
      }
      while ( v51 >= 0 );
      v110 = v108;
      v111 = v109;
      v53 = 3i64;
      while ( !*((_QWORD *)&v110 + v53) )
      {
        if ( --v53 < 0 )
          goto LABEL_93;
      }
LABEL_89:
      v54 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        v107[0] = (GfxManager *)operator new(0x108ui64);
        GfxManager::GfxManager(v107[0]);
        GfxManager::instance = v54;
      }
      if ( !GfxManager::GFv_IsOpenScreenMenu(v54) )
      {
        BattleSystem::BattleController::GetActionSystem();
        *(_BYTE *)(v55 + 255112) = *(_BYTE *)(v55 + 255112) == 0;
      }
    }
  }
LABEL_154:
  v91 = this->bBattlePause;
  v92 = BattleSystem::PauseController::GetInstance();
  v92->m_Pause = v91;
  v92->m_InputContorollerID = CONTROLLER_ID_NONE;
  if ( v91 )
  {
    v93 = UserGameOperation::Instance();
    if ( Framework::GLManager::glm )
    {
      v94 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2199612i64);
      if ( v94 )
      {
        v95 = 0;
        for ( ii = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
              ii != (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType;
              ii = (Framework::GLManager *)((char *)ii + 16) )
        {
          ++v95;
          if ( ii->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy && v95 == v94 )
          {
            if ( v95 == -1 )
              break;
            v97 = &v93->m_slots[v95 - 1];
            goto LABEL_165;
          }
        }
      }
    }
    v97 = &v93->m_emptyUserSlot;
LABEL_165:
    if ( v97 && !v93->m_keyboardLocked )
    {
      v98 = &v93->m_ButtonConfig[2];
      LODWORD(v107[0]) = 0xFFFF;
      v99 = 0i64;
      v100 = &v93->m_ButtonConfig[2];
      while ( v100->_Array[0] == *(unsigned int *)((char *)v100->_Array + (char *)v107 - (char *)&v93->m_ButtonConfig[2]) )
      {
        --v100;
        if ( --v99 < 0 )
          goto LABEL_175;
      }
      LODWORD(v107[0]) = v98->_Array[0] & v97->m_repeatPressedEventChannels._Array[0];
      v101 = 0i64;
      v102 = (char *)((char *)v107 - (char *)v98);
      while ( *(unsigned int *)((char *)v98->_Array + (_QWORD)v102) == v98->_Array[0] )
      {
        --v98;
        if ( --v101 < 0 )
          goto LABEL_181;
      }
LABEL_175:
      v108 = *(_OWORD *)v93->m_KeyboardButtonConfig[2]._Array;
      v109 = *(_OWORD *)&v93->m_KeyboardButtonConfig[2]._Array[2];
      v103 = 3i64;
      v104 = (char *)v97 - ((char *)&v109 + 8);
      do
      {
        *((_QWORD *)&v108 + v103) &= *(__int64 *)((char *)&a8 + 8 * v103 + v104);
        --v103;
      }
      while ( v103 >= 0 );
      v110 = v108;
      v111 = v109;
      while ( !*((_QWORD *)&v110 + v9) )
      {
        if ( --v9 < 0 )
          return;
      }
LABEL_181:
      GfxManager::getInstance();
      if ( !GfxManager::GFv_IsOpenScreenMenu(v105) )
      {
        v106 = BattleSystem::PauseController::GetInstance();
        v106->m_Pause = 0;
        v106->m_InputContorollerID = CONTROLLER_ID_NONE;
      }
    }
  }
  else if ( UserGameOperation::Test(1, GameOp_Dir_R, Test_OnEdge) )
  {
    this->bBattleFastForward = !this->bBattleFastForward;
  }
}

void __fastcall AppMain::ST_BattleMainDraw(AppMain *this)
{
  Graphics *v2; // rcx
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v4; // rcx
  BattleSystem::BattleController *v5; // rcx
  GfxManager *v6; // rax
  GfxManager *v7; // rbx
  GfxManager *v8; // rax
  extension::GFXIMovieStack *v9; // rax
  BattleSystem::BattleController *v10; // [rsp+40h] [rbp+8h]
  GfxManager *v11; // [rsp+40h] [rbp+8h]

  if ( this->bAT_InitializeFrame )
  {
    this->bAT_InitializeFrame = 0;
    GraphicsOpt::lock(this->g);
    Graphics::clearScreen(v2, -16777216);
    Graphics::drawStack(this->g->g);
  }
  else
  {
    if ( !BattleSystem::BattleController::instance )
    {
      v10 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v10);
      BattleSystem::BattleController::instance = v3;
    }
    AppMain::BattleMainDraw(this);
    BattleSystem::PauseController::GetInstance();
    if ( BattleSystem::PauseController::GetInstance()->m_Pause
      || BattleSystem::BattleController::IsTutorialMode(v4)
      || BattleSystem::BattleController::IsComboMissionMode(v5)
      || (GfxManager::getInstance(), GfxManager::GFv_IsHasNotification(v6)) )
    {
      v7 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        v11 = (GfxManager *)operator new(0x108ui64);
        GfxManager::GfxManager(v11);
        v7 = v8;
        GfxManager::instance = v8;
      }
      if ( v7->m_RequestRender )
      {
        v9 = extension::GFXIMovieStack::Instance();
        extension::GFXIMovieStack::render(v9);
        v7->m_RequestRender = 0;
      }
    }
  }
}

void __fastcall AppMain::ST_BattleMainExit(AppMain *this)
{
  __int64 *v2; // rax
  __int64 v3; // r15
  GameDataInfo *v4; // rcx
  BattleSystem::BattleController *v5; // rsi
  BattleSystem::BattleController *v6; // rax
  Framework::GLManager *v7; // rdx
  UserGameOperation *v8; // rcx
  BattleSystem::BattleController *v9; // rax
  BattleSystem::BattleController *v10; // rcx
  GameDataInfo *Instance; // rax
  bool v12; // dl
  extension::SoundManager *v13; // rax
  unsigned int i; // ebx
  extension::SoundManager *v15; // rax
  AppMain *v16; // rcx
  unsigned __int64 v17; // rdx
  int *pTinpanFrame; // rcx
  BattleStage *v19; // rcx
  BattleStage *v20; // rcx
  bool v21; // dl
  AppMain *v22; // rcx
  AppMain *j; // rbx
  CharaDataUnify *bv; // rsi
  AppMain *k; // rbx
  CharaDataUnify *v26; // rsi
  CharaDataUnify *v27; // rbx
  int v28; // ecx
  GameDataInfo *v29; // rcx
  int v30; // edx
  GfxManager *v31; // rax
  OGLModel **v32; // rcx
  GfxManager *v33; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  signed int v35; // ebx
  int v36; // ebp
  extension::SoundManager *v37; // rax
  __int64 v38; // rbp
  unsigned __int64 v39; // rdx
  __int64 iMemberReferIndex; // rax
  int v41; // eax
  __int64 v42; // rax
  int v43; // eax
  CharaDataUnify *Myval2; // rbx
  CharaDataUnify *v45; // rbx
  OGLModel **v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rax
  int v50; // eax
  CharaDataUnify *v51; // rbx
  CharaDataUnify *v52; // rbx
  OGLModel **v53; // rcx
  BattleStage *pBattleStage; // rcx
  BattleStage *v55; // rcx
  __int64 v56; // rbx
  int v57; // ecx
  OGLModel ***p_pModel; // rdx
  OGLModel **pModel; // rax
  __int64 v60; // rcx
  AppMain::Scene_PreFightFaceOff *pScene; // rax
  AppMain::Scene_PreFightFaceOff *v62; // rbx
  PreFightFaceOff::RenderManager *m_pRenderManager; // rcx
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *v64; // rbx
  RestrictRingBuffer<InputKeyHistory::History> *v65; // rax
  RestrictRingBuffer<InputKeyHistory::History> *v66; // rax
  BattleSystem::BattleController *v67; // [rsp+70h] [rbp+8h]
  BattleSystem::BattleController *v68; // [rsp+70h] [rbp+8h]
  extension::SoundManager *v69; // [rsp+70h] [rbp+8h]
  extension::SoundManager *v70; // [rsp+70h] [rbp+8h]
  GfxManager *v71; // [rsp+70h] [rbp+8h]
  GfxManager *v72; // [rsp+70h] [rbp+8h]
  extension::SoundManager *v73; // [rsp+70h] [rbp+8h]

  v2 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v3 = *v2;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v2 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v4);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  BTLNT_Cleanup(`GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag);
  v5 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v67 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v67);
    v5 = v6;
    BattleSystem::BattleController::instance = v6;
  }
  v7 = Framework::GLManager::glm;
  Framework::GLManager::glm->m_paused = 0;
  v7->m_frameProgressSpeed = 0.0;
  UserGameOperation::Instance();
  UserGameOperation::Instance();
  UserGameOperation::stopVibrationAll(v8);
  v9 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v68 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v68);
    BattleSystem::BattleController::instance = v9;
  }
  ActionSystem::AllDelete(&v9->actSystem);
  anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_BGM, 1.0, 0.0);
  BattleHudGauge::HideName(this->m_BattleHud.m_pGauges[0]);
  BattleHudGauge::HideName(this->m_BattleHud.m_pGauges[1]);
  if ( v5->bBattleEnd )
  {
    if ( BattleSystem::BattleController::IsSuccessiveBattle(v10) )
    {
      Instance = GameDataInfo::getInstance();
      GameDataInfo::CommitCharacterNoRand(Instance);
      AppMain::SetBattleSetting(this, v12);
      this->bAT_NextBattleExit = 1;
      BattleHud::hideUsernames(&this->m_BattleHud);
    }
    else
    {
      this->bAT_NextBattleExit = 0;
    }
  }
  if ( this->bAT_NextBattleExit )
  {
    v35 = 0;
    v36 = 133124;
    do
    {
      if ( (unsigned int)v35 > 0x11 || !_bittest(&v36, v35) )
      {
        v37 = extension::SoundManager::the_instance;
        if ( !extension::SoundManager::the_instance )
        {
          v73 = (extension::SoundManager *)operator new(0x310ui64);
          extension::SoundManager::SoundManager(v73);
          extension::SoundManager::the_instance = v37;
        }
        extension::SoundManager::stopGroupSE(v37, v35);
      }
      ++v35;
    }
    while ( v35 < 18 );
    anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_NORMAL_SE, 1.0, 0.0);
    anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_CHARA_VOICE, 1.0, 0.0);
    v38 = 5i64;
    anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_SYSTEM_VOICE, 1.0, 0.0);
    if ( v5->bBattleEnd && BattleSystem::BattleController::IsSuccessiveBattle((BattleSystem::BattleController *)v32) )
    {
      BattleHud::dispose(&this->m_BattleHud);
      BattleCall::clear(&this->m_BattleCall);
    }
    iMemberReferIndex = v5->playerInfo[0].iMemberReferIndex;
    if ( v5->playerInfo[0].iMemberCount > (int)iMemberReferIndex )
      v41 = v5->playerInfo[0].charaNo[iMemberReferIndex];
    else
      v41 = -1;
    if ( v5->loadedInfo.loadedChara[0].charaNo != v41
      || ((v42 = v5->playerInfo[0].iMemberReferIndex, v5->playerInfo[0].iMemberCount > (int)v42) ? (v43 = v5->playerInfo[0].iCharaColor[v42]) : (v43 = -1),
          v5->loadedInfo.loadedChara[0].iCharaColor != v43) )
    {
      extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset((extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 32i64));
      extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset((extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 64i64));
      Myval2 = this->m_pPlayerCharaData[0]._Mypair._Myval2;
      this->m_pPlayerCharaData[0]._Mypair._Myval2 = 0i64;
      if ( Myval2 )
      {
        CharaDataUnify::ReleaseData(Myval2);
        operator delete(Myval2, 0x68ui64);
      }
      v45 = this->m_pSupportCharaData[0]._Mypair._Myval2;
      this->m_pSupportCharaData[0]._Mypair._Myval2 = 0i64;
      if ( v45 )
      {
        CharaDataUnify::ReleaseData(v45);
        operator delete(v45, 0x68ui64);
      }
      extension::SoundList::dispose(&this->m_Snd_Lists[1]);
      extension::SoundList::dispose(&this->m_Snd_Lists[3]);
      this->ModelRoomSettings.CharaInfo[1].iModelCount = 0;
      v46 = this->ModelRoomSettings.CharaInfo[1].ppModel._Mypair._Myval2;
      this->ModelRoomSettings.CharaInfo[1].ppModel._Mypair._Myval2 = 0i64;
      if ( v46 )
        operator delete(v46, v39);
      this->ModelRoomSettings.CharaInfo[3].iModelCount = 0;
      v32 = this->ModelRoomSettings.CharaInfo[3].ppModel._Mypair._Myval2;
      this->ModelRoomSettings.CharaInfo[3].ppModel._Mypair._Myval2 = 0i64;
      if ( v32 )
        operator delete(v32, v39);
    }
    v47 = v5->playerInfo[1].iMemberReferIndex;
    if ( v5->playerInfo[1].iMemberCount > (int)v47 )
      v48 = v5->playerInfo[1].charaNo[v47];
    else
      v48 = -1;
    if ( v5->loadedInfo.loadedChara[1].charaNo != v48
      || ((v49 = v5->playerInfo[1].iMemberReferIndex, v5->playerInfo[1].iMemberCount > (int)v49) ? (v50 = v5->playerInfo[1].iCharaColor[v49]) : (v50 = -1),
          v5->loadedInfo.loadedChara[1].iCharaColor != v50) )
    {
      extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset((extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 48i64));
      extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset((extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 80i64));
      v51 = this->m_pPlayerCharaData[1]._Mypair._Myval2;
      this->m_pPlayerCharaData[1]._Mypair._Myval2 = 0i64;
      if ( v51 )
      {
        CharaDataUnify::ReleaseData(v51);
        operator delete(v51, 0x68ui64);
      }
      v52 = this->m_pSupportCharaData[1]._Mypair._Myval2;
      this->m_pSupportCharaData[1]._Mypair._Myval2 = 0i64;
      if ( v52 )
      {
        CharaDataUnify::ReleaseData(v52);
        operator delete(v52, 0x68ui64);
      }
      extension::SoundList::dispose(&this->m_Snd_Lists[2]);
      extension::SoundList::dispose(&this->m_Snd_Lists[4]);
      this->ModelRoomSettings.CharaInfo[0].iModelCount = 0;
      v53 = this->ModelRoomSettings.CharaInfo[0].ppModel._Mypair._Myval2;
      this->ModelRoomSettings.CharaInfo[0].ppModel._Mypair._Myval2 = 0i64;
      if ( v53 )
        operator delete(v53, v39);
      this->ModelRoomSettings.CharaInfo[2].iModelCount = 0;
      v32 = this->ModelRoomSettings.CharaInfo[2].ppModel._Mypair._Myval2;
      this->ModelRoomSettings.CharaInfo[2].ppModel._Mypair._Myval2 = 0i64;
      if ( v32 )
        operator delete(v32, v39);
    }
    if ( v5->battleInfo.battleStageID != v5->loadedInfo.loadedStageID )
    {
      pBattleStage = this->pBattleStage;
      if ( pBattleStage )
      {
        BattleStage::dispose(pBattleStage);
        v55 = this->pBattleStage;
        if ( v55 )
        {
          ((void (__fastcall *)(BattleStage *, __int64))v55->~BattleStage)(v55, 1i64);
          this->pBattleStage = 0i64;
        }
      }
      v56 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
      if ( v56 && !*(_BYTE *)(v56 + 96) )
      {
        if ( (*(_QWORD *)(v56 + 88) & 1) == 0 )
          extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v56 + 88), (extension::AsyncStatus::Step)v39);
        if ( *(_QWORD *)(v56 + 72) )
        {
          v57 = 0;
          p_pModel = &this->pModel;
          pModel = this->pModel;
          if ( pModel > (OGLModel **)&this->pModel || pModel + 43 < (OGLModel **)p_pModel )
          {
            v57 = 44;
            do
            {
              *pModel = 0i64;
              pModel[1] = 0i64;
              pModel[2] = 0i64;
              pModel += 8;
              *(pModel - 5) = 0i64;
              *(pModel - 4) = 0i64;
              *(pModel - 3) = 0i64;
              *(pModel - 2) = 0i64;
              *(pModel - 1) = 0i64;
              --v38;
            }
            while ( v38 );
            *pModel = 0i64;
            pModel[1] = 0i64;
            pModel[2] = 0i64;
            pModel[3] = 0i64;
          }
          if ( v57 < 44i64 )
          {
            v60 = v57;
            do
              (*p_pModel)[v60++] = 0i64;
            while ( v60 < 44 );
          }
        }
      }
      extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset(*(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> **)(*(_QWORD *)&AppMain::pApp + 11064i64));
    }
  }
  else
  {
    v13 = extension::SoundManager::the_instance;
    if ( !extension::SoundManager::the_instance )
    {
      v69 = (extension::SoundManager *)operator new(0x310ui64);
      extension::SoundManager::SoundManager(v69);
      extension::SoundManager::the_instance = v13;
    }
    extension::SoundManager::stopBGM(v13, 0.0);
    for ( i = 0; i < 0x11; ++i )
    {
      v15 = extension::SoundManager::the_instance;
      if ( !extension::SoundManager::the_instance )
      {
        v70 = (extension::SoundManager *)operator new(0x310ui64);
        extension::SoundManager::SoundManager(v70);
        extension::SoundManager::the_instance = v15;
      }
      extension::SoundManager::stopGroupSE(v15, i);
    }
    AppMain::Sound_Volume_SE_Modulation(v16, 1.0, 0.0);
    BattleHud::dispose(&this->m_BattleHud);
    BattleCall::clear(&this->m_BattleCall);
    if ( this->m_OnlineBattleGUIParams.bInitialize )
    {
      this->m_OnlineBattleGUIParams.bInitialize = 0;
      if ( this->m_OnlineBattleGUIParams.bOnlineGUIEnabled )
      {
        if ( this->m_watchingParams.operationType )
        {
          this->m_watchingParams.operationType = Linear;
          pTinpanFrame = this->m_watchingParams.pTinpanFrame;
          if ( pTinpanFrame )
          {
            operator delete(pTinpanFrame, v17);
            this->m_watchingParams.pTinpanFrame = 0i64;
          }
        }
      }
    }
    v19 = this->pBattleStage;
    if ( v19 )
    {
      BattleStage::dispose(v19);
      v20 = this->pBattleStage;
      if ( v20 )
      {
        ((void (__fastcall *)(BattleStage *, __int64))v20->~BattleStage)(v20, 1i64);
        this->pBattleStage = 0i64;
      }
    }
    AppMain::releasePS4ModelRoom(this, 0);
    extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset((extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 16i64));
    for ( j = (AppMain *)this->m_pPlayerCharaData; j != (AppMain *)this->m_pSupportCharaData; j = (AppMain *)((char *)j + 8) )
    {
      bv = (CharaDataUnify *)j->bv;
      j->bv = 0i64;
      if ( bv )
      {
        CharaDataUnify::ReleaseData(bv);
        operator delete(bv, 0x68ui64);
      }
    }
    for ( k = (AppMain *)this->m_pSupportCharaData;
          k != (AppMain *)&this->m_pCommonCharaData;
          k = (AppMain *)((char *)k + 8) )
    {
      v26 = (CharaDataUnify *)k->bv;
      k->bv = 0i64;
      if ( v26 )
      {
        CharaDataUnify::ReleaseData(v26);
        operator delete(v26, 0x68ui64);
      }
    }
    v27 = this->m_pCommonCharaData._Mypair._Myval2;
    this->m_pCommonCharaData._Mypair._Myval2 = 0i64;
    if ( v27 )
    {
      CharaDataUnify::ReleaseData(v27);
      operator delete(v27, 0x68ui64);
    }
    AppMain::Sound_UnloadAll(v22, v21);
    v28 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v3 + 40) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v28 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        v28 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      }
    }
    if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_TRAINING )
    {
      if ( v28 > *(_DWORD *)(v3 + 40) )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v29);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        }
      }
      this->SaveDataMain.GameData.m_TrainingSetting = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting;
      SaveRecord_RecordKey::CommitRecordKey(&this->SaveDataMain.RecordKey);
      AppMain::SaveDataAsyncSave(this, v30);
    }
    EffectTaskManager::cleanup(this->effSystem);
    v31 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v71 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v71);
      GfxManager::instance = v31;
    }
    GfxManager::ReleaseGFXMovie(v31, 1);
    v33 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v72 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v72);
      GfxManager::instance = v33;
    }
    m_ptr = v33->m_GFXMovieTutorial.m_movieProxy.m_ptr;
    v33->m_GFXMovieTutorial.m_movieProxy.m_ptr = 0i64;
    if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::gfxi_detail::MovieProxy::~MovieProxy(m_ptr);
      operator delete(m_ptr, 0xE8ui64);
    }
  }
  pScene = this->m_preFightFaceOff.pScene;
  if ( pScene && (unsigned int)(pScene->m_sequence - 3) > 1 )
    AppMain::Scene_PreFightFaceOff::sceneClose((AppMain::Scene_PreFightFaceOff *)v32);
  v62 = this->m_preFightFaceOff.pScene;
  if ( v62 )
  {
    m_pRenderManager = v62->m_pRenderManager;
    if ( m_pRenderManager )
    {
      ((void (__fastcall *)(PreFightFaceOff::RenderManager *, __int64))m_pRenderManager->~ErrorChecker)(
        m_pRenderManager,
        1i64);
      v62->m_pRenderManager = 0i64;
    }
    operator delete(v62, 0x18ui64);
    this->m_preFightFaceOff.pScene = 0i64;
  }
  v64 = this->m_KeyRecordDataLoad.state.m_ptr;
  this->m_KeyRecordDataLoad.state.m_ptr = 0i64;
  if ( v64 && _InterlockedExchangeAdd64((volatile signed __int64 *)v64, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::~AsyncContent<AsyncKeyRecordDataLoad::KeyData>(v64);
    operator delete(v64, 0x68ui64);
  }
  this->m_iMissionKeyDataID = -1;
  v65 = this->m_KeyHistory[0].pKeyHistory._Mypair._Myval2;
  v65->uiDataSize = 0;
  *(_QWORD *)&v65->uiBeginIndex = 0i64;
  v66 = this->m_KeyHistory[1].pKeyHistory._Mypair._Myval2;
  v66->uiDataSize = 0;
  *(_QWORD *)&v66->uiBeginIndex = 0i64;
  AppMain::clearTexString(this);
}

void __fastcall AppMain::ST_BattleMainInit(AppMain *this)
{
  int v2; // edx
  _DWORD *v3; // rdi
  GameDataInfo *v4; // rcx
  GameDataInfo *v5; // rcx
  GAME_MODE v6; // ecx
  __int64 v7; // rdx
  const char *v8; // rcx
  int v9; // er8
  __int64 myNo; // rcx
  GameDataInfo *v11; // rcx
  __int64 v12; // r9
  GAME_MODE v13; // ecx
  unsigned int v14; // er10
  InputKeyCheck *m_CmdKeyData; // rcx
  RestrictRingBuffer<int> *Myval2; // rax
  unsigned int v17; // edx
  RestrictRingBuffer<int> *v18; // r8
  unsigned int uiBufferSize; // eax
  RestrictRingBuffer<int> *v20; // rax
  int v21; // eax
  RestrictRingBuffer<int> *v22; // r8
  int v23; // ecx
  GameDataInfo *v24; // rcx

  Fw::ContentCommon::GetInstance();
  AppMain::removeTexString(this);
  v2 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  v3 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v2 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v4);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v2 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  if ( !`GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
  {
    if ( v2 > *v3 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v2 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v5);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        v2 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      }
    }
    v6 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
    if ( (unsigned int)(v6 - 4) <= 2 || v6 == GAME_MODE_ONLINETRAINING )
    {
      myNo = (unsigned __int8)g_NetworkManager.gamedata.myNo;
      *(_OWORD *)&this->myRoomMemberInfo.steamId = *(_OWORD *)&g_NetworkManager.gamedata.player_data[myNo].steamId;
      *((_OWORD *)&this->myRoomMemberInfo + 1) = *((_OWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 1);
      *((_OWORD *)&this->myRoomMemberInfo + 2) = *((_OWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 2);
      *((_OWORD *)&this->myRoomMemberInfo + 3) = *((_OWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 3);
      *(_OWORD *)&this->myRoomMemberInfo.stageTelop[12] = *(_OWORD *)&g_NetworkManager.gamedata.player_data[myNo].stageTelop[12];
      *(_OWORD *)&this->myRoomMemberInfo.stageTelop[28] = *(_OWORD *)&g_NetworkManager.gamedata.player_data[myNo].stageTelop[28];
      *(_OWORD *)&this->myRoomMemberInfo.stageTelop[44] = *(_OWORD *)&g_NetworkManager.gamedata.player_data[myNo].stageTelop[44];
      *(_DWORD *)&this->myRoomMemberInfo.stageTelop[60] = *(_DWORD *)&g_NetworkManager.gamedata.player_data[myNo].stageTelop[60];
      *(_WORD *)&this->myRoomMemberInfo.country[3] = *(_WORD *)&g_NetworkManager.gamedata.player_data[myNo].country[3];
      this->GayaSeCallTick = 0i64;
      memset(this->s_TextChatLog, 0, sizeof(this->s_TextChatLog));
      memset(this->s_RoomMemberInfo, 0, sizeof(this->s_RoomMemberInfo));
LABEL_18:
      v2 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      goto LABEL_19;
    }
    if ( !g_NetworkManager.gamedata.reservationCreateRoomFlag
      && *(_QWORD *)&Fw::MatchingTarget::m_RoomId.m_steamid.m_comp )
    {
      if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_FREE )
      {
        AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
        if ( Fw::MatchingTarget::IsRoomOwner(v8, v7) )
          qword_140ACD768 = 1i64;
        else
          Fw::InvitationCommon::m_SessionFlag = 0;
      }
      Fw::MatchingTarget::LeaveRoom();
      g_NetworkManager.gamedata.leaveRoomFlag = 1;
      NetManager::ChangeState(&g_NetworkManager, NET_STATE_TOP, v9);
      goto LABEL_18;
    }
  }
LABEL_19:
  if ( v2 > *v3 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v11);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v12 = 2i64;
  v13 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  if ( (unsigned int)(v13 - 4) <= 2 || (v14 = 2, v13 == GAME_MODE_ONLINETRAINING) )
    v14 = 0;
  m_CmdKeyData = this->m_CmdKeyData;
  do
  {
    Myval2 = m_CmdKeyData[-2].pKeyBuffer._Mypair._Myval2;
    v17 = v14;
    Myval2->uiDataSize = 0;
    *(_QWORD *)&Myval2->uiBeginIndex = 0i64;
    v18 = m_CmdKeyData[-2].pKeyBuffer._Mypair._Myval2;
    uiBufferSize = v18->uiBufferSize;
    if ( v14 >= uiBufferSize )
      v17 = uiBufferSize - 1;
    v18->uiDelay = v17;
    v20 = m_CmdKeyData->pKeyBuffer._Mypair._Myval2;
    v20->uiDataSize = 0;
    *(_QWORD *)&v20->uiBeginIndex = 0i64;
    v21 = 0;
    v22 = m_CmdKeyData->pKeyBuffer._Mypair._Myval2;
    if ( !m_CmdKeyData->pKeyBuffer._Mypair._Myval2->uiBufferSize )
      v21 = -1;
    ++m_CmdKeyData;
    v22->uiDelay = v21;
    --v12;
  }
  while ( v12 );
  AppMain::UnlockGallery(this, GALLERY_ID_SOUND_AN, 1);
  AppMain::UnlockGallery(this, GALLERY_ID_SOUND_AN_WOMEN, 1);
  AppMain::UnlockGallery(this, GALLERY_ID_SOUND_AN_SYSTEM, 1);
  this->bAT_NextBattleExit = 0;
  this->battleDisconnectMessageState = 0;
  AppMain::BattleMainInit(this);
  pBtlNet = &BtlNet;
  memset(&BtlNet, 0, sizeof(BtlNet));
  sendMessageCount = 1i64;
  BTLNT_Start();
  BTLNT_StartBattle();
  v23 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v23 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v23 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_FREEMATCH )
    goto LABEL_39;
  if ( v23 > *v3 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v24);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_ONLINETRAINING )
LABEL_39:
    this->m_bSwitchingOnlineID = 1;
  this->iReserveScene = -1;
  this->m_FuncST = 179;
  this->m_FuncBT = 180;
  AppMain::SceneFunc(this, 179);
  this->m_FuncExit = 181;
}

void __fastcall AppMain::ST_BattleMainLoop(AppMain *this)
{
  int v2; // ebp
  int i; // esi
  OGLRender *m_pRender; // rax
  GfxManager *v5; // rax
  AppMain *v6; // rcx
  GfxManager *v7; // rax
  GfxManager *v8; // rbx
  GfxManager *v9; // rax
  extension::GFXIMovieStack *v10; // rax
  GfxManager *v11; // [rsp+68h] [rbp+10h]
  GfxManager *v12; // [rsp+70h] [rbp+18h]
  GfxManager *v13; // [rsp+78h] [rbp+20h]

  if ( !AppMain::ST_BattleMainLoopInitialize(this) )
  {
    if ( !this->bBattleFastForward || (v2 = 2, BattleSystem::PauseController::GetInstance()->m_Pause) )
      v2 = 1;
    for ( i = 0; i < v2; ++i )
    {
      m_pRender = this->m_pRender;
      *(_QWORD *)m_pRender->m_sModelStackCount = 0i64;
      *(_QWORD *)&m_pRender->m_sModelStackCount[2] = 0i64;
      *(_QWORD *)&m_pRender->m_sModelStackCount[4] = 0i64;
      *(_QWORD *)&m_pRender->m_sModelStackCount[6] = 0i64;
      if ( this->windowErrorNo || this->battleDisconnectMessageState )
      {
        v5 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v11 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v11);
          GfxManager::instance = v5;
        }
        *(_WORD *)&v5->m_RequestAdvance = 257;
      }
      AppMain::OnlineUpdateGUI(this);
      AppMain::BattleMainLoop(this, i, v2);
      AppMain::BattlePauseFunc(this);
      v7 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        v12 = (GfxManager *)operator new(0x108ui64);
        GfxManager::GfxManager(v12);
        GfxManager::instance = v7;
      }
      *(_WORD *)&v7->m_RequestAdvance = 257;
      AppMain::BattleMissionUpdate(v6);
      AppMain::BattleNewChallengerCheck(this);
      v8 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        v13 = (GfxManager *)operator new(0x108ui64);
        GfxManager::GfxManager(v13);
        v8 = v9;
        GfxManager::instance = v9;
      }
      if ( v8->m_RequestAdvance )
      {
        if ( v8->m_SystemMessageState != SYSTEM_MESSAGE_OPEN || !v8->m_SystemMessageLock )
        {
          v10 = extension::GFXIMovieStack::Instance();
          extension::GFXIMovieStack::advance(v10, 0.016666668);
        }
        v8->m_RequestAdvance = 0;
      }
      AppMain::PartyBattleDisconnectNotification(this);
    }
  }
}

char __fastcall AppMain::ST_BattleMainLoopInitialize(AppMain *this)
{
  OGLRender *m_pRender; // rax
  extension::AsyncStatus::Step v3; // edx
  extension::exsound_detail::PreloadedAudioSet *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi
  EffectDataListManager *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  OGLModel *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  EffectDataListManager *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  OGLModel *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  extension::AsyncStatus *v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  extension::AsyncStatus *v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  extension::AsyncStatus::Step v33; // edx
  extension::AsyncStatus::Step v34; // edx
  extension::exsound_detail::SoundBankImpl *v35; // rax
  extension::AsyncStatus::Step v36; // edx
  extension::exsound_detail::PreloadedAudioSet *v37; // rdi
  extension::AsyncStatus::Step v38; // edx
  extension::AsyncStatus::Step v39; // edx
  extension::exsound_detail::SoundBankImpl *v40; // rax
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v41; // rdx
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *m_ptr; // rcx
  extension::AsyncStatus::Step v43; // edx
  extension::AsyncStatus::Step v44; // edx
  extension::exsound_detail::SoundBankImpl *v45; // rax
  extension::AsyncStatus::Step v46; // edx
  extension::AsyncStatus::Step v47; // edx
  extension::AsyncStatus::Step v48; // edx
  extension::exsound_detail::SoundBankImpl *v49; // rax
  extension::AsyncStatus::Step v50; // edx
  extension::AsyncStatus::Step v51; // edx
  int v52; // er8

  if ( !this->bAT_InitializeFrame )
    return 0;
  m_pRender = this->m_pRender;
  *(_QWORD *)m_pRender->m_sModelStackCount = 0i64;
  *(_QWORD *)&m_pRender->m_sModelStackCount[2] = 0i64;
  *(_QWORD *)&m_pRender->m_sModelStackCount[4] = 0i64;
  *(_QWORD *)&m_pRender->m_sModelStackCount[6] = 0i64;
  AppMain::SetUpTPose(this);
  v4 = 0i64;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 40i64) + 16i64);
  if ( !v5 || *(_BYTE *)(v5 + 96) )
  {
    v6 = 0i64;
  }
  else
  {
    if ( (*(_QWORD *)(v5 + 88) & 1) == 0 )
      extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v5 + 88), v3);
    v6 = *(_QWORD *)(v5 + 72);
  }
  v7 = *(EffectDataListManager **)(v6 + 224);
  if ( v7 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 40i64) + 16i64);
    if ( !v8 || *(_BYTE *)(v8 + 96) )
    {
      v9 = 0i64;
    }
    else
    {
      if ( (*(_QWORD *)(v8 + 88) & 1) == 0 )
        extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v8 + 88), v3);
      v9 = *(_QWORD *)(v8 + 72);
    }
    if ( (int)((__int64)(*(_QWORD *)(v9 + 208) - *(_QWORD *)(v9 + 200)) >> 3) <= 0 )
      v10 = 0i64;
    else
      v10 = **(OGLModel ***)(v9 + 200);
    v7->m_pBindModel = v10;
    v7->m_PlayerNum = 0;
    EffectDataListManager::calcAllBindUVPosition(v7);
  }
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 56i64) + 16i64);
  if ( !v11 || *(_BYTE *)(v11 + 96) )
  {
    v12 = 0i64;
  }
  else
  {
    if ( (*(_QWORD *)(v11 + 88) & 1) == 0 )
      extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v11 + 88), v3);
    v12 = *(_QWORD *)(v11 + 72);
  }
  v13 = *(EffectDataListManager **)(v12 + 224);
  if ( v13 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 56i64) + 16i64);
    if ( !v14 || *(_BYTE *)(v14 + 96) )
    {
      v15 = 0i64;
    }
    else
    {
      if ( (*(_QWORD *)(v14 + 88) & 1) == 0 )
        extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v14 + 88), v3);
      v15 = *(_QWORD *)(v14 + 72);
    }
    if ( (int)((__int64)(*(_QWORD *)(v15 + 208) - *(_QWORD *)(v15 + 200)) >> 3) <= 0 )
      v16 = 0i64;
    else
      v16 = **(OGLModel ***)(v15 + 200);
    v13->m_pBindModel = v16;
    v13->m_PlayerNum = 1;
    EffectDataListManager::calcAllBindUVPosition(v13);
  }
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 40i64) + 16i64);
  if ( !v17 || *(_BYTE *)(v17 + 96) )
  {
    v18 = 0i64;
  }
  else
  {
    if ( (*(_QWORD *)(v17 + 88) & 1) == 0 )
      extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v17 + 88), v3);
    v18 = *(_QWORD *)(v17 + 72);
  }
  if ( *(_QWORD *)(v18 + 224) )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 40i64) + 16i64);
    if ( v19 )
    {
      if ( !*(_BYTE *)(v19 + 96) )
      {
        v20 = (extension::AsyncStatus *)(v19 + 88);
        if ( (v20->m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(v20, v3);
      }
    }
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 40i64) + 16i64);
    if ( !v21 || *(_BYTE *)(v21 + 96) )
    {
      v22 = 0i64;
    }
    else
    {
      if ( (*(_QWORD *)(v21 + 88) & 1) == 0 )
        extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v21 + 88), v3);
      v22 = *(_QWORD *)(v21 + 72);
    }
    EffectDataListManager::loadRoundData(*(EffectDataListManager **)(v22 + 224));
  }
  v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 56i64) + 16i64);
  if ( !v23 || *(_BYTE *)(v23 + 96) )
  {
    v24 = 0i64;
  }
  else
  {
    if ( (*(_QWORD *)(v23 + 88) & 1) == 0 )
      extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v23 + 88), v3);
    v24 = *(_QWORD *)(v23 + 72);
  }
  if ( *(_QWORD *)(v24 + 224) )
  {
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 56i64) + 16i64);
    if ( v25 )
    {
      if ( !*(_BYTE *)(v25 + 96) )
      {
        v26 = (extension::AsyncStatus *)(v25 + 88);
        if ( (v26->m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(v26, v3);
      }
    }
    v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 56i64) + 16i64);
    if ( !v27 || *(_BYTE *)(v27 + 96) )
    {
      v28 = 0i64;
    }
    else
    {
      if ( (*(_QWORD *)(v27 + 88) & 1) == 0 )
        extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v27 + 88), v3);
      v28 = *(_QWORD *)(v27 + 72);
    }
    EffectDataListManager::loadRoundData(*(EffectDataListManager **)(v28 + 224));
  }
  v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 72i64);
  v30 = *(_QWORD *)(v29 + 16);
  if ( v30 && !*(_BYTE *)(v30 + 96) )
  {
    v31 = *(_QWORD *)(v29 + 16);
    if ( *(_BYTE *)(v30 + 96) )
    {
      v32 = 0i64;
    }
    else
    {
      if ( (*(_QWORD *)(v30 + 88) & 1) == 0 )
        extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v30 + 88), v3);
      v32 = *(_QWORD *)(v31 + 72);
    }
    if ( *(_QWORD *)(v32 + 224) )
    {
      extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
        (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp
                                                                                                  + 11064i64)
                                                                                      + 64i64),
        v3);
      extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
        (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp
                                                                                                  + 11064i64)
                                                                                      + 64i64),
        v33);
      v35 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
              (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                            + 64i64),
              v34);
      if ( (int)(v35->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
               - v35->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) <= 0 )
        v37 = 0i64;
      else
        v37 = *v35->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
      *(_QWORD *)(*(_QWORD *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                                (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 64i64),
                                v36)[1].m_bankFileDir._Mypair._Myval2._Bx._Alias[8]
                + 8i64) = v37;
      *(_DWORD *)(*(_QWORD *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                                (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 64i64),
                                v38)[1].m_bankFileDir._Mypair._Myval2._Bx._Alias[8]
                + 16i64) = 0;
      v40 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
              (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                            + 64i64),
              v39);
      EffectDataListManager::calcAllBindUVPosition(*(EffectDataListManager **)&v40[1].m_bankFileDir._Mypair._Myval2._Bx._Alias[8]);
    }
  }
  v41 = *(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> **)(*(_QWORD *)&AppMain::pApp
                                                                                        + 11064i64);
  m_ptr = v41[5].m_body.m_ptr->m_content.m_ptr;
  if ( m_ptr
    && !m_ptr->m_isDataReleased
    && *(_QWORD *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                     v41 + 5,
                     (extension::AsyncStatus::Step)v41)[1].m_bankFileDir._Mypair._Myval2._Bx._Alias[8] )
  {
    extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
      (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp
                                                                                                + 11064i64)
                                                                                    + 80i64),
      (extension::AsyncStatus::Step)v41);
    extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
      (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp
                                                                                                + 11064i64)
                                                                                    + 80i64),
      v43);
    v45 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
            (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                          + 80i64),
            v44);
    if ( (int)(v45->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
             - v45->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) > 0 )
      v4 = *v45->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
    *(_QWORD *)(*(_QWORD *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                              (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 80i64),
                              v46)[1].m_bankFileDir._Mypair._Myval2._Bx._Alias[8]
              + 8i64) = v4;
    *(_DWORD *)(*(_QWORD *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                              (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 80i64),
                              v47)[1].m_bankFileDir._Mypair._Myval2._Bx._Alias[8]
              + 16i64) = 1;
    v49 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
            (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                          + 80i64),
            v48);
    EffectDataListManager::calcAllBindUVPosition(*(EffectDataListManager **)&v49[1].m_bankFileDir._Mypair._Myval2._Bx._Alias[8]);
  }
  if ( *(_QWORD *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                     (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 16i64),
                     (extension::AsyncStatus::Step)v41)[1].m_bankFileDir._Mypair._Myval2._Bx._Alias[8] )
  {
    extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
      (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp
                                                                                                + 11064i64)
                                                                                    + 16i64),
      v50);
    *(_DWORD *)(*(_QWORD *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                              (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 16i64),
                              v51)[1].m_bankFileDir._Mypair._Myval2._Bx._Alias[8]
              + 16i64) = -1;
  }
  EffectTaskManager::initialize(this->effSystem);
  if ( g_NetworkManager.gamedata.onlineState == NET_STATE_BATTLELOADING )
    NetManager::ChangeState(&g_NetworkManager, NET_STATE_BATTLELOADINGEND, v52);
  return 1;
}

void __fastcall AppMain::ST_BattleMainLoopPartial(AppMain *this)
{
  BattleSystem::BattleController *v2; // r14
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v4; // r13
  BattleSystem::BattleController *v5; // rax
  OGLRender *m_pRender; // rax
  __int64 v7; // rdx
  UserGameOperation::TestPolicy v8; // er8
  extension::AsyncStatus::Step v9; // edx
  char v10; // r12
  GameDataInfo *Instance; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // esi
  __int64 i; // rbx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rcx
  bool v30; // zf
  int j; // ebx
  int v32; // edx
  int k; // ebx
  __int64 nn; // rdi
  ActionSystem::ActorList *i1; // rbx
  Actor *v36; // rcx
  _QWORD *i2; // rbx
  __int64 v38; // rcx
  _QWORD *i3; // rbx
  __int64 v40; // rcx
  _QWORD *m; // rbx
  __int64 v42; // rax
  _DWORD *v43; // rcx
  __int64 v44; // rdx
  _QWORD *n; // rbx
  __int64 v46; // rax
  _DWORD *v47; // rcx
  __int64 v48; // rdx
  __int64 ii; // rdi
  ActionSystem::ActorList *jj; // rbx
  Actor *pActor; // rcx
  _QWORD *kk; // rbx
  __int64 v53; // rcx
  _QWORD *mm; // rbx
  __int64 v55; // rcx
  int v56; // ebx
  int i4; // edi
  __int64 i5; // rdi
  ActionSystem::ActorList *i6; // rbx
  Actor *v60; // rcx
  int i7; // ebx
  int v62; // edi
  int i8; // ebx
  int i9; // ebx
  __int64 i10; // rsi
  ActionSystem::ActorList *i11; // rbx
  Actor *v67; // rcx
  Fw::cJobManager *v68; // rdx
  BattleStage *pBattleStage; // rcx
  BattleSystem::BattleController::ROUND_PHASE roundPhase; // eax
  float v71; // xmm6_4
  EffectTaskManager *effSystem; // rax
  BattleSystem::BattleController *v73; // rcx
  BattleSystem::BattleController *v74; // rcx
  GfxManager *v75; // rax
  GfxManager *v76; // rax
  __int128 v77; // [rsp+40h] [rbp-40h]
  __int128 v78; // [rsp+50h] [rbp-30h]
  BattleSystem::BattleController *v79; // [rsp+B8h] [rbp+38h]
  BattleSystem::BattleController *v80; // [rsp+B8h] [rbp+38h]
  GfxManager *v81; // [rsp+B8h] [rbp+38h]
  GfxManager *v82; // [rsp+B8h] [rbp+38h]

  if ( !AppMain::ST_BattleMainLoopInitialize(this) )
  {
    v2 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v79 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v79);
      v2 = v3;
      BattleSystem::BattleController::instance = v3;
    }
    v4 = v2;
    if ( !v2 )
    {
      v80 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v80);
      v2 = v5;
      BattleSystem::BattleController::instance = v5;
    }
    m_pRender = this->m_pRender;
    *(_QWORD *)m_pRender->m_sModelStackCount = 0i64;
    *(_QWORD *)&m_pRender->m_sModelStackCount[2] = 0i64;
    *(_QWORD *)&m_pRender->m_sModelStackCount[4] = 0i64;
    *(_QWORD *)&m_pRender->m_sModelStackCount[6] = 0i64;
    AppMain::OnlineUpdateGUI(this);
    v10 = AppMain::PauseCheck(this, v7, v8);
    if ( v10 )
    {
      Instance = GameDataInfo::getInstance();
      v9 = Instance->m_GameMode[Instance->m_GameModeIndex];
      if ( (unsigned int)(v9 - 4) <= 2 || v9 == 11 )
      {
        BattleSystem::BattleController::GetActionSystem();
        if ( *(int *)(v12 + 247536) <= 6 )
          this->m_bFadeLock = 1;
      }
    }
    LODWORD(v77) = 0;
    *(_QWORD *)&v78 = 0i64;
    *(_QWORD *)((char *)&v77 + 4) = 1065353216i64;
    *((_QWORD *)&v78 + 1) = 1065353216i64;
    HIDWORD(v77) = 0;
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
    if ( v13 && !*(_BYTE *)(v13 + 96) )
    {
      if ( (*(_QWORD *)(v13 + 88) & 1) == 0 )
        extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v13 + 88), v9);
      if ( *(_QWORD *)(v13 + 72) )
      {
        v14 = 0;
        for ( i = 0i64; ; ++i )
        {
          v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
          if ( !v16 || *(_BYTE *)(v16 + 96) )
          {
            v17 = 0i64;
          }
          else
          {
            if ( (*(_QWORD *)(v16 + 88) & 1) == 0 )
              extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v16 + 88), v9);
            v17 = *(_QWORD *)(v16 + 72);
          }
          if ( v14 >= (int)((__int64)(*(_QWORD *)(v17 + 208) - *(_QWORD *)(v17 + 200)) >> 3) )
            break;
          v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
          if ( !v18 || *(_BYTE *)(v18 + 96) )
          {
            v19 = 0i64;
          }
          else
          {
            if ( (*(_QWORD *)(v18 + 88) & 1) == 0 )
              extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v18 + 88), v9);
            v19 = *(_QWORD *)(v18 + 72);
          }
          if ( i < 0 || v14 >= (int)((__int64)(*(_QWORD *)(v19 + 208) - *(_QWORD *)(v19 + 200)) >> 3) )
            v20 = 0i64;
          else
            v20 = *(_QWORD *)(*(_QWORD *)(v19 + 200) + 8 * i);
          *(_QWORD *)(v20 + 196) = 0i64;
          *(_DWORD *)(v20 + 204) = 0;
          *(_OWORD *)(v20 + 232) = 0x3F800000ui64;
          *(_OWORD *)(v20 + 248) = v77;
          *(_OWORD *)(v20 + 264) = v78;
          *(_OWORD *)(v20 + 280) = _xmm;
          *(_BYTE *)(v20 + 8434) = 1;
          v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
          if ( !v21 || *(_BYTE *)(v21 + 96) )
          {
            v22 = 0i64;
          }
          else
          {
            if ( (*(_QWORD *)(v21 + 88) & 1) == 0 )
              extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v21 + 88), v9);
            v22 = *(_QWORD *)(v21 + 72);
          }
          if ( i < 0 || v14 >= (int)((__int64)(*(_QWORD *)(v22 + 208) - *(_QWORD *)(v22 + 200)) >> 3) )
            v23 = 0i64;
          else
            v23 = *(_QWORD *)(*(_QWORD *)(v22 + 200) + 8 * i);
          *(_BYTE *)(v23 + 8905) = 0;
          v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
          if ( !v24 || *(_BYTE *)(v24 + 96) )
          {
            v25 = 0i64;
          }
          else
          {
            if ( (*(_QWORD *)(v24 + 88) & 1) == 0 )
              extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v24 + 88), v9);
            v25 = *(_QWORD *)(v24 + 72);
          }
          if ( i < 0 || v14 >= (int)((__int64)(*(_QWORD *)(v25 + 208) - *(_QWORD *)(v25 + 200)) >> 3) )
            v26 = 0i64;
          else
            v26 = *(_QWORD *)(*(_QWORD *)(v25 + 200) + 8 * i);
          *(_BYTE *)(v26 + 8906) = 1;
          v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
          if ( !v27 || *(_BYTE *)(v27 + 96) )
          {
            v28 = 0i64;
          }
          else
          {
            if ( (*(_QWORD *)(v27 + 88) & 1) == 0 )
              extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v27 + 88), v9);
            v28 = *(_QWORD *)(v27 + 72);
          }
          if ( i < 0 || v14 >= (int)((__int64)(*(_QWORD *)(v28 + 208) - *(_QWORD *)(v28 + 200)) >> 3) )
            v29 = 0i64;
          else
            v29 = *(_QWORD *)(*(_QWORD *)(v28 + 200) + 8 * i);
          *(_DWORD *)(v29 + 8916) = 2;
          ++v14;
        }
      }
    }
    v30 = v10 == 0;
    if ( !v10 )
    {
      v2->actSystem.bFastPlayDrawSkipFrame = 0;
      ActionSystem::SystemUpdate(&v2->actSystem);
      for ( j = 0; j <= 1; ++j )
        ActionSystem::PreCaller(&v2->actSystem, j);
      if ( v2->actSystem.iThrowChildPlayerID )
      {
        ActionSystem::PreCaller(&v2->actSystem, 2);
        v32 = 3;
      }
      else
      {
        ActionSystem::PreCaller(&v2->actSystem, 3);
        v32 = 2;
      }
      ActionSystem::PreCaller(&v2->actSystem, v32);
      for ( k = 0; k <= 1; ++k )
        ActionSystem::MainCaller(&v2->actSystem, k);
      if ( v2->actSystem.iThrowChildPlayerID )
      {
        for ( m = (_QWORD *)*((_QWORD *)v2->actSystem.ppPriStart + 2); m; m = (_QWORD *)*m )
        {
          v42 = m[2];
          if ( *(_DWORD *)(v42 + 20) == 2 )
          {
            *(_DWORD *)(v42 + 20) = 1;
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)m[2] + 704i64))(m[2]);
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)m[2] + 712i64))(m[2]);
          }
          v43 = (_DWORD *)m[2];
          if ( v43[5] == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v43 + 720i64))(v43);
            v44 = m[2];
            if ( *(_DWORD *)(v44 + 20) == 1 )
            {
              ActionSystem::Run(&v2->actSystem, (Actor *)v44);
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)m[2] + 728i64))(m[2]);
            }
          }
        }
        for ( n = (_QWORD *)*((_QWORD *)v2->actSystem.ppPriStart + 3); n; n = (_QWORD *)*n )
        {
          v46 = n[2];
          if ( *(_DWORD *)(v46 + 20) == 2 )
          {
            *(_DWORD *)(v46 + 20) = 1;
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)n[2] + 704i64))(n[2]);
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)n[2] + 712i64))(n[2]);
          }
          v47 = (_DWORD *)n[2];
          if ( v47[5] == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v47 + 720i64))(v47);
            v48 = n[2];
            if ( *(_DWORD *)(v48 + 20) == 1 )
            {
              ActionSystem::Run(&v2->actSystem, (Actor *)v48);
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)n[2] + 728i64))(n[2]);
            }
          }
        }
        for ( ii = 0i64; ii <= 1; ++ii )
        {
          for ( jj = v2->actSystem.ppPriStart[ii]; jj; jj = jj->pNext )
          {
            pActor = jj->pActor;
            if ( pActor->systemStat == MAIN && !pActor->bSkipSyncPosture )
              pActor->SyncPosture(pActor);
          }
        }
        for ( kk = (_QWORD *)*((_QWORD *)v2->actSystem.ppPriStart + 2); kk; kk = (_QWORD *)*kk )
        {
          v53 = kk[2];
          if ( *(_DWORD *)(v53 + 20) == 1 && !*(_BYTE *)(v53 + 727) )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 776i64))(v53);
        }
        for ( mm = (_QWORD *)*((_QWORD *)v2->actSystem.ppPriStart + 3); mm; mm = (_QWORD *)*mm )
        {
          v55 = mm[2];
          if ( *(_DWORD *)(v55 + 20) == 1 && !*(_BYTE *)(v55 + 727) )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 776i64))(v55);
        }
      }
      else
      {
        ActionSystem::MainCaller(&v2->actSystem, 3);
        ActionSystem::MainCaller(&v2->actSystem, 2);
        for ( nn = 0i64; nn <= 1; ++nn )
        {
          for ( i1 = v2->actSystem.ppPriStart[nn]; i1; i1 = i1->pNext )
          {
            v36 = i1->pActor;
            if ( v36->systemStat == MAIN && !v36->bSkipSyncPosture )
              v36->SyncPosture(v36);
          }
        }
        for ( i2 = (_QWORD *)*((_QWORD *)v2->actSystem.ppPriStart + 3); i2; i2 = (_QWORD *)*i2 )
        {
          v38 = i2[2];
          if ( *(_DWORD *)(v38 + 20) == 1 && !*(_BYTE *)(v38 + 727) )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 776i64))(v38);
        }
        for ( i3 = (_QWORD *)*((_QWORD *)v2->actSystem.ppPriStart + 2); i3; i3 = (_QWORD *)*i3 )
        {
          v40 = i3[2];
          if ( *(_DWORD *)(v40 + 20) == 1 && !*(_BYTE *)(v40 + 727) )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 776i64))(v40);
        }
      }
      Collision::PlayerPushCheck(&v2->actSystem);
      v56 = 4;
      for ( i4 = 4; i4 <= 6; ++i4 )
        ActionSystem::PreCaller(&v2->actSystem, i4);
      do
        ActionSystem::MainCaller(&v2->actSystem, v56++);
      while ( v56 <= 6 );
      for ( i5 = 4i64; i5 <= 6; ++i5 )
      {
        for ( i6 = v2->actSystem.ppPriStart[i5]; i6; i6 = i6->pNext )
        {
          v60 = i6->pActor;
          if ( v60->systemStat == MAIN && !v60->bSkipSyncPosture )
            v60->SyncPosture(v60);
        }
      }
      Collision::AttackHitCheck(&v2->actSystem);
      for ( i7 = 0; i7 <= 6; ++i7 )
        ActionSystem::LateCaller(&v2->actSystem, i7);
      v62 = 7;
      for ( i8 = 7; i8 <= 8; ++i8 )
        ActionSystem::PreCaller(&v2->actSystem, i8);
      for ( i9 = 7; i9 <= 8; ++i9 )
        ActionSystem::MainCaller(&v2->actSystem, i9);
      for ( i10 = 7i64; i10 <= 8; ++i10 )
      {
        for ( i11 = v2->actSystem.ppPriStart[i10]; i11; i11 = i11->pNext )
        {
          v67 = i11->pActor;
          if ( v67->systemStat == MAIN && !v67->bSkipSyncPosture )
            v67->SyncPosture(v67);
        }
      }
      do
        ActionSystem::LateCaller(&v2->actSystem, v62++);
      while ( v62 <= 8 );
      pBattleStage = this->pBattleStage;
      if ( pBattleStage )
      {
        roundPhase = v4->roundPhase;
        if ( roundPhase )
        {
          if ( roundPhase != (WALL|DIE) )
          {
            v71 = (float)((float)(unsigned __int16)v2->actSystem.xPlaySpeed.value * 0.000015258789)
                + (float)(v2->actSystem.xPlaySpeed.value >> 16);
            if ( v2->actSystem.actBlack.data[5].attr == COUNTER_HIT )
              v71 = 0.0;
            BattleStage::update(pBattleStage, v71);
            Framework::GLManager::glm->m_frameProgressSpeed = Framework::GLManager::glm->m_frameProgressSpeed + v71;
          }
        }
      }
      EffectTaskManager::updateStack(this->effSystem, v68);
      effSystem = this->effSystem;
      if ( ++effSystem->UseDataBufferNum >= 2 )
        effSystem->UseDataBufferNum = 0;
      ActionSystem::CameraLateCalc(&v2->actSystem);
      AppMain::CheckBGColorSetting(this);
      v30 = 1;
    }
    Framework::GLManager::glm->m_paused = !v30;
    BattleHud::update(&this->m_BattleHud, &v2->actSystem, 0.0);
    AppMain::BattleMainLoopDraw(this, 0, 1);
    if ( BattleSystem::PauseController::GetInstance()->m_Pause
      || BattleSystem::BattleController::IsTutorialMode(v73)
      || BattleSystem::BattleController::IsComboMissionMode(v74) )
    {
      goto LABEL_162;
    }
    v75 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v81 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v81);
      GfxManager::instance = v75;
    }
    if ( GfxManager::GFv_IsHasNotification(v75) )
    {
LABEL_162:
      v76 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        v82 = (GfxManager *)operator new(0x108ui64);
        GfxManager::GfxManager(v82);
        GfxManager::instance = v76;
      }
      v76->m_RequestRender = 1;
    }
  }
}

void __fastcall AppMain::ST_BattleResultExit(AppMain *this)
{
  GameDataInfo *v2; // rcx
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v4; // r14
  Framework::GLManager *v5; // rax
  UserGameOperation *v6; // rcx
  extension::SoundManager *v7; // rax
  signed int i; // ebx
  extension::SoundManager *v9; // rax
  extension::SoundManager *v10; // rax
  unsigned int j; // ebx
  extension::SoundManager *v12; // rax
  AppMain *v13; // rcx
  unsigned __int64 v14; // rdx
  int *pTinpanFrame; // rcx
  BattleStage *pBattleStage; // rcx
  BattleStage *v17; // rcx
  BattleSystem::WINNER_ID::ID battleWinnerID; // eax
  unsigned __int64 v19; // rdx
  CharaDataUnify *Myval2; // rbx
  CharaDataUnify *v21; // rbx
  OGLModel **v22; // rcx
  OGLModel **v23; // rcx
  __int64 v24; // rbx
  int v25; // er8
  OGLModel ***p_pModel; // rdx
  OGLModel **pModel; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  CharaDataUnify *v31; // rbx
  CharaDataUnify *v32; // rbx
  OGLModel **v33; // rcx
  OGLModel **v34; // rcx
  __int64 v35; // rbx
  int v36; // er8
  OGLModel ***v37; // rdx
  OGLModel **v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  extension::SoundManager *v41; // rax
  AppMain *v42; // rcx
  AppMain *k; // rbx
  CharaDataUnify *bv; // rsi
  AppMain *m; // rbx
  CharaDataUnify *v46; // rsi
  CharaDataUnify *v47; // rbx
  RestrictRingBuffer<InputKeyHistory::History> *v48; // rax
  RestrictRingBuffer<InputKeyHistory::History> *v49; // rax
  GfxManager *v50; // rax
  GfxManager *v51; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Movie *pObject; // rcx
  BattleSystem::BattleController *v54; // [rsp+60h] [rbp+8h]
  BattleSystem::BattleController *v55; // [rsp+60h] [rbp+8h]
  extension::SoundManager *v56; // [rsp+60h] [rbp+8h]
  extension::SoundManager *v57; // [rsp+60h] [rbp+8h]
  extension::SoundManager *v58; // [rsp+60h] [rbp+8h]
  extension::SoundManager *v59; // [rsp+60h] [rbp+8h]
  extension::SoundManager *v60; // [rsp+60h] [rbp+8h]
  GfxManager *v61; // [rsp+60h] [rbp+8h]
  GfxManager *v62; // [rsp+60h] [rbp+8h]

  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v2);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  BTLNT_Cleanup(`GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag);
  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v54 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v54);
    BattleSystem::BattleController::instance = v3;
  }
  v4 = v3;
  if ( !v3 )
  {
    v55 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v55);
    BattleSystem::BattleController::instance = v3;
  }
  ActionSystem::AllDelete(&v3->actSystem);
  v5 = Framework::GLManager::glm;
  Framework::GLManager::glm->m_paused = 0;
  v5->m_frameProgressSpeed = 0.0;
  UserGameOperation::Instance();
  UserGameOperation::Instance();
  UserGameOperation::stopVibrationAll(v6);
  if ( v4->roundPhase == (WALL|ERASE) && v4->uiRoundPhaseFrame )
  {
    v7 = extension::SoundManager::the_instance;
    if ( !extension::SoundManager::the_instance )
    {
      v56 = (extension::SoundManager *)operator new(0x310ui64);
      extension::SoundManager::SoundManager(v56);
      extension::SoundManager::the_instance = v7;
    }
    extension::SoundManager::stopBGM(v7, 0.0);
    for ( i = 0; i < 18; ++i )
    {
      if ( i > 0 && (i <= 3 || (unsigned int)(i - 8) <= 3) )
      {
        v9 = extension::SoundManager::the_instance;
        if ( !extension::SoundManager::the_instance )
        {
          v57 = (extension::SoundManager *)operator new(0x310ui64);
          extension::SoundManager::SoundManager(v57);
          extension::SoundManager::the_instance = v9;
        }
        extension::SoundManager::stopGroupSE(v9, i);
      }
    }
  }
  else
  {
    v10 = extension::SoundManager::the_instance;
    if ( !extension::SoundManager::the_instance )
    {
      v58 = (extension::SoundManager *)operator new(0x310ui64);
      extension::SoundManager::SoundManager(v58);
      extension::SoundManager::the_instance = v10;
    }
    extension::SoundManager::stopBGM(v10, 0.0);
    for ( j = 0; j < 0x11; ++j )
    {
      v12 = extension::SoundManager::the_instance;
      if ( !extension::SoundManager::the_instance )
      {
        v59 = (extension::SoundManager *)operator new(0x310ui64);
        extension::SoundManager::SoundManager(v59);
        extension::SoundManager::the_instance = v12;
      }
      extension::SoundManager::stopGroupSE(v12, j);
    }
  }
  anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_BGM, 1.0, 0.0);
  AppMain::Sound_Volume_SE_Modulation(v13, 1.0, 0.0);
  BattleHud::dispose(&this->m_BattleHud);
  BattleCall::clear(&this->m_BattleCall);
  if ( this->m_OnlineBattleGUIParams.bInitialize )
  {
    this->m_OnlineBattleGUIParams.bInitialize = 0;
    if ( this->m_OnlineBattleGUIParams.bOnlineGUIEnabled )
    {
      if ( this->m_watchingParams.operationType )
      {
        this->m_watchingParams.operationType = Linear;
        pTinpanFrame = this->m_watchingParams.pTinpanFrame;
        if ( pTinpanFrame )
        {
          operator delete(pTinpanFrame, v14);
          this->m_watchingParams.pTinpanFrame = 0i64;
        }
      }
    }
  }
  pBattleStage = this->pBattleStage;
  if ( pBattleStage )
  {
    BattleStage::dispose(pBattleStage);
    v17 = this->pBattleStage;
    if ( v17 )
    {
      ((void (__fastcall *)(BattleStage *, __int64))v17->~BattleStage)(v17, 1i64);
      this->pBattleStage = 0i64;
    }
  }
  battleWinnerID = v4->resultMember.battleWinnerID;
  if ( battleWinnerID == COUNTER_HIT )
  {
    extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset((extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 48i64));
    extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset((extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 80i64));
    Myval2 = this->m_pPlayerCharaData[1]._Mypair._Myval2;
    this->m_pPlayerCharaData[1]._Mypair._Myval2 = 0i64;
    if ( Myval2 )
    {
      CharaDataUnify::ReleaseData(Myval2);
      operator delete(Myval2, 0x68ui64);
    }
    v21 = this->m_pSupportCharaData[1]._Mypair._Myval2;
    this->m_pSupportCharaData[1]._Mypair._Myval2 = 0i64;
    if ( v21 )
    {
      CharaDataUnify::ReleaseData(v21);
      operator delete(v21, 0x68ui64);
    }
    this->ModelRoomSettings.CharaInfo[1].iModelCount = 0;
    v22 = this->ModelRoomSettings.CharaInfo[1].ppModel._Mypair._Myval2;
    this->ModelRoomSettings.CharaInfo[1].ppModel._Mypair._Myval2 = 0i64;
    if ( v22 )
      operator delete(v22, v19);
    this->ModelRoomSettings.CharaInfo[3].iModelCount = 0;
    v23 = this->ModelRoomSettings.CharaInfo[3].ppModel._Mypair._Myval2;
    this->ModelRoomSettings.CharaInfo[3].ppModel._Mypair._Myval2 = 0i64;
    if ( v23 )
      operator delete(v23, v19);
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
    if ( v24 && !*(_BYTE *)(v24 + 96) )
    {
      if ( (*(_QWORD *)(v24 + 88) & 1) == 0 )
        extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v24 + 88), (extension::AsyncStatus::Step)v19);
      if ( *(_QWORD *)(v24 + 72) )
      {
        v25 = 0;
        p_pModel = &this->pModel;
        pModel = this->pModel;
        if ( pModel > (OGLModel **)&this->pModel || pModel + 43 < (OGLModel **)p_pModel )
        {
          v28 = 5i64;
          v25 = 44;
          do
          {
            *pModel = 0i64;
            pModel[1] = 0i64;
            pModel[2] = 0i64;
            pModel += 8;
            *(pModel - 5) = 0i64;
            *(pModel - 4) = 0i64;
            *(pModel - 3) = 0i64;
            *(pModel - 2) = 0i64;
            *(pModel - 1) = 0i64;
            --v28;
          }
          while ( v28 );
          *pModel = 0i64;
          pModel[1] = 0i64;
          pModel[2] = 0i64;
          pModel[3] = 0i64;
        }
        if ( v25 < 44i64 )
        {
          v29 = v25;
          do
            (*p_pModel)[v29++] = 0i64;
          while ( v29 < 44 );
        }
      }
    }
    extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset(*(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> **)(*(_QWORD *)&AppMain::pApp + 11064i64));
    AppMain::releasePS4ModelRoom(this, 1);
LABEL_94:
    v4->playerInfo[1].iTotalScore = v4->playerInfo[1].iPrevTotalScore;
    goto LABEL_95;
  }
  if ( battleWinnerID != GUARD_CRASH )
  {
    v41 = extension::SoundManager::the_instance;
    if ( !extension::SoundManager::the_instance )
    {
      v60 = (extension::SoundManager *)operator new(0x310ui64);
      extension::SoundManager::SoundManager(v60);
      extension::SoundManager::the_instance = v41;
    }
    extension::SoundManager::stopBGM(v41, 0.0);
    AppMain::Sound_StopBattleSE(v42, 0.0);
    AppMain::releasePS4ModelRoom(this, 0);
    extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset((extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 16i64));
    for ( k = (AppMain *)this->m_pPlayerCharaData; k != (AppMain *)this->m_pSupportCharaData; k = (AppMain *)((char *)k + 8) )
    {
      bv = (CharaDataUnify *)k->bv;
      k->bv = 0i64;
      if ( bv )
      {
        CharaDataUnify::ReleaseData(bv);
        operator delete(bv, 0x68ui64);
      }
    }
    for ( m = (AppMain *)this->m_pSupportCharaData;
          m != (AppMain *)&this->m_pCommonCharaData;
          m = (AppMain *)((char *)m + 8) )
    {
      v46 = (CharaDataUnify *)m->bv;
      m->bv = 0i64;
      if ( v46 )
      {
        CharaDataUnify::ReleaseData(v46);
        operator delete(v46, 0x68ui64);
      }
    }
    v47 = this->m_pCommonCharaData._Mypair._Myval2;
    this->m_pCommonCharaData._Mypair._Myval2 = 0i64;
    if ( v47 )
    {
      CharaDataUnify::ReleaseData(v47);
      operator delete(v47, 0x68ui64);
    }
    EffectTaskManager::cleanup(this->effSystem);
    v4->playerInfo[0].iTotalScore = v4->playerInfo[0].iPrevTotalScore;
    goto LABEL_94;
  }
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset((extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 32i64));
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset((extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 64i64));
  v31 = this->m_pPlayerCharaData[0]._Mypair._Myval2;
  this->m_pPlayerCharaData[0]._Mypair._Myval2 = 0i64;
  if ( v31 )
  {
    CharaDataUnify::ReleaseData(v31);
    operator delete(v31, 0x68ui64);
  }
  v32 = this->m_pSupportCharaData[0]._Mypair._Myval2;
  this->m_pSupportCharaData[0]._Mypair._Myval2 = 0i64;
  if ( v32 )
  {
    CharaDataUnify::ReleaseData(v32);
    operator delete(v32, 0x68ui64);
  }
  this->ModelRoomSettings.CharaInfo[0].iModelCount = 0;
  v33 = this->ModelRoomSettings.CharaInfo[0].ppModel._Mypair._Myval2;
  this->ModelRoomSettings.CharaInfo[0].ppModel._Mypair._Myval2 = 0i64;
  if ( v33 )
    operator delete(v33, v30);
  this->ModelRoomSettings.CharaInfo[2].iModelCount = 0;
  v34 = this->ModelRoomSettings.CharaInfo[2].ppModel._Mypair._Myval2;
  this->ModelRoomSettings.CharaInfo[2].ppModel._Mypair._Myval2 = 0i64;
  if ( v34 )
    operator delete(v34, v30);
  v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
  if ( v35 && !*(_BYTE *)(v35 + 96) )
  {
    if ( (*(_QWORD *)(v35 + 88) & 1) == 0 )
      extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v35 + 88), (extension::AsyncStatus::Step)v30);
    if ( *(_QWORD *)(v35 + 72) )
    {
      v36 = 0;
      v37 = &this->pModel;
      v38 = this->pModel;
      if ( v38 > (OGLModel **)&this->pModel || v38 + 43 < (OGLModel **)v37 )
      {
        v39 = 5i64;
        v36 = 44;
        do
        {
          *v38 = 0i64;
          v38[1] = 0i64;
          v38[2] = 0i64;
          v38 += 8;
          *(v38 - 5) = 0i64;
          *(v38 - 4) = 0i64;
          *(v38 - 3) = 0i64;
          *(v38 - 2) = 0i64;
          *(v38 - 1) = 0i64;
          --v39;
        }
        while ( v39 );
        *v38 = 0i64;
        v38[1] = 0i64;
        v38[2] = 0i64;
        v38[3] = 0i64;
      }
      if ( v36 < 44i64 )
      {
        v40 = v36;
        do
          (*v37)[v40++] = 0i64;
        while ( v40 < 44 );
      }
    }
  }
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset(*(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> **)(*(_QWORD *)&AppMain::pApp + 11064i64));
  AppMain::releasePS4ModelRoom(this, 1);
  v4->playerInfo[0].iTotalScore = v4->playerInfo[0].iPrevTotalScore;
LABEL_95:
  v48 = this->m_KeyHistory[0].pKeyHistory._Mypair._Myval2;
  v48->uiDataSize = 0;
  *(_QWORD *)&v48->uiBeginIndex = 0i64;
  v49 = this->m_KeyHistory[1].pKeyHistory._Mypair._Myval2;
  v49->uiDataSize = 0;
  *(_QWORD *)&v49->uiBeginIndex = 0i64;
  v50 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v61 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v61);
    GfxManager::instance = v50;
  }
  GfxManager::ReleaseGFXMovie(v50, 1);
  v51 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v62 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v62);
    GfxManager::instance = v51;
  }
  m_ptr = v51->m_GFXMovieTutorial.m_movieProxy.m_ptr;
  v51->m_GFXMovieTutorial.m_movieProxy.m_ptr = 0i64;
  if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    `eh vector destructor iterator'(
      m_ptr->m_operationGenerator.m_keyEventGenerator,
      0x28ui64,
      4ui64,
      (void (__fastcall *)(void *))extension::gfxi_detail::MovieKeyEventGenerator::~MovieKeyEventGenerator);
    pObject = m_ptr->m_movie.pObject;
    if ( pObject )
      Scaleform::GFx::Movie::Release(pObject);
    m_ptr->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Next->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Prev = m_ptr->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Prev;
    m_ptr->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Prev->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Next = m_ptr->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Next;
    m_ptr->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Next = &m_ptr->extension::gfxi_detail::MovieInstanceListNode;
    m_ptr->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Prev = &m_ptr->extension::gfxi_detail::MovieInstanceListNode;
    m_ptr->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Next->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Prev = m_ptr->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Prev;
    m_ptr->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Prev->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Next = m_ptr->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Next;
    m_ptr->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Next = &m_ptr->extension::gfxi_detail::MovieStackNode;
    m_ptr->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Prev = &m_ptr->extension::gfxi_detail::MovieStackNode;
    operator delete(m_ptr, 0xE8ui64);
  }
  AppMain::clearTexString(this);
}

void __fastcall AppMain::ST_BattleSamplePlayInit(AppMain *this)
{
  __int64 v2; // rcx
  unsigned int *m_RandSeed; // rbx
  BattleSystem::BattleController *v4; // rax
  bool v5; // r8
  BattleSystem::BattleController *v6; // [rsp+40h] [rbp+8h]

  v2 = 40i64;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)v2);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  m_RandSeed = `GameDataInfo::getInstance'::`2'::instance.m_RandSeed;
  do
    *m_RandSeed++ = Xtime_get_ticks(v2);
  while ( (__int64)m_RandSeed < (__int64)&`GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag );
  v4 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v6 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v6);
    BattleSystem::BattleController::instance = v4;
  }
  BattleSystem::BattleController::BattleInit(v4, 1);
  AppMain::BattleRoundInit(this, 1, v5);
  this->iReserveScene = -1;
  this->m_FuncST = 179;
  this->m_FuncBT = 180;
  AppMain::SceneFunc(this, 179);
  this->m_FuncExit = 181;
}

char __fastcall UserGameOperation::TestFighter(
        int userIndex,
        GameOperations::GameOpSpec op,
        UserGameOperation::TestPolicy testPolicy)
{
  __int64 v3; // rbx
  UserGameOperation *v4; // rdi
  FighterOperation *v5; // rax
  int *v6; // rcx
  int v7; // edx

  v3 = userIndex;
  v4 = UserGameOperation::Instance();
  v5 = FighterOperation::Instance();
  if ( (unsigned int)(v3 - 1) <= 1 && (v6 = (int *)&v5[-1].m_slots[v3 + 1].operationMapper.m_mapping[4]) != 0i64 )
    v7 = *v6;
  else
    v7 = 0;
  return UserGameOperation::test(v4, v7, GameOp_GameStart, Test_OnEdge, 0, 0i64);
}

void __fastcall AppMain::TraningWait4RankmatchSTExit(AppMain *this, int st_exit)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  GameDataInfo *v6; // rcx
  CHARACTER_NO chara1; // esi
  int v8; // eax
  GameDataInfo *v9; // rcx
  int costume1; // esi
  GameDataInfo *v11; // rcx
  CHARACTER_COLOR color1; // esi
  GameDataInfo *v13; // rcx
  CHARACTER_NO chara2; // esi
  int v15; // eax
  GameDataInfo *v16; // rcx
  int costume2; // esi
  GameDataInfo *v18; // rcx
  CHARACTER_COLOR color2; // esi
  GameDataInfo *v20; // rcx
  STAGE_ID stageID; // esi
  int v22; // ecx
  GameDataInfo *v23; // rcx
  BattleSystem::BattleController *v24; // rax
  bool v25; // dl
  BattleSystem::BattleController *v26; // [rsp+50h] [rbp+8h]

  v4 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v5 = *v4;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v4 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v6);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  GameDataInfo::Init(&`GameDataInfo::getInstance'::`2'::instance);
  chara1 = g_NetworkManager.rank_traning_wait.chara1;
  v8 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v8 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v9);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v8 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0] = chara1;
  `GameDataInfo::getInstance'::`2'::instance.m_EditRandom[0][0] = 0;
  `GameDataInfo::getInstance'::`2'::instance.m_TeamRandom[0] = 0;
  costume1 = g_NetworkManager.rank_traning_wait.costume1;
  if ( v8 > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v8 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v11);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v8 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][0] = costume1;
  color1 = g_NetworkManager.rank_traning_wait.color1;
  if ( v8 > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v13);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_ColorSelectedTime[0][0] = (unsigned int)(int)(double)(int)time64(0i64);
  `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[0][0] = color1;
  chara2 = g_NetworkManager.rank_traning_wait.chara2;
  v15 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v15 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v16);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v15 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[1][0] = chara2;
  `GameDataInfo::getInstance'::`2'::instance.m_EditRandom[1][0] = 0;
  `GameDataInfo::getInstance'::`2'::instance.m_TeamRandom[1] = 0;
  costume2 = g_NetworkManager.rank_traning_wait.costume2;
  if ( v15 > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v15 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v18);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v15 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[1][0] = costume2;
  color2 = g_NetworkManager.rank_traning_wait.color2;
  if ( v15 > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v20);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_ColorSelectedTime[1][0] = (unsigned int)(int)(double)(int)time64(0i64);
  `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[1][0] = color2;
  stageID = g_NetworkManager.rank_traning_wait.stageID;
  v22 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v22 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v22 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_StageID = stageID;
  `GameDataInfo::getInstance'::`2'::instance.m_StageRandom = 0;
  if ( v22 > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v22 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v22 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] = GAME_MODE_TRAINING;
  if ( v22 > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v22 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v22 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_GameRule[`GameDataInfo::getInstance'::`2'::instance.m_GameRuleIndex] = GAME_RULE_SINGLE;
  if ( v22 > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v22 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v22 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0] = USER_ID_1P;
  if ( v22 > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v22 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v22 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1] = USER_ID_CPU;
  if ( v22 > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v22 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v22 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAction = STAND;
  if ( v22 > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v23);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( *(_QWORD *)&AppMain::pApp )
  {
    `GameDataInfo::getInstance'::`2'::instance.m_AiLevel = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197392i64);
    `GameDataInfo::getInstance'::`2'::instance.m_WinRoundCount = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197396i64);
    `GameDataInfo::getInstance'::`2'::instance.m_TimeSetting = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197400i64);
  }
  v24 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v26 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v26);
    BattleSystem::BattleController::instance = v24;
  }
  BattleSystem::BattleController::BattleResultInit(v24);
  AppMain::SetBattleSetting(this, v25);
  g_NetworkManager.gamedata.reservationCreateRoomFlag = 1;
  this->m_iLoadingNextFunc = 177;
  this->iReserveScene = -1;
  this->m_FadeST = 183;
  this->m_FuncST = 0;
  this->m_FadeExitFunc = st_exit;
  *(_WORD *)&this->m_bFadeEnd = 0;
  this->m_iFadeFrame = 30;
  *(_QWORD *)&this->m_iFadeColor.rgba = 255i64;
  this->m_iFadeRate = 1000 * this->m_iFadeColor.s.a / 30;
  this->m_bFadeLock = 0;
  this->m_FuncFT = 170;
}

void __fastcall AppMain::entryBattleStartAnimation(AppMain *this)
{
  BattleSystem::BattleController *v2; // rbx
  BattleSystem::BattleController *v3; // rax
  GameDataInfo *v4; // rcx
  STAGE_ID battleStageID; // esi
  BattleCall *p_m_BattleCall; // rdi
  BattleSystem::BattleController *v7; // rcx
  BattleSystem::BattleController *v8; // rcx
  unsigned int v9; // er9
  STAGE_ID v10; // edx
  BattleCall *v11; // rcx
  BattleSystem::BATTLE_MODE battleMode; // ecx
  bool IsFinalRound; // al
  BattleSystem::BattleController *v14; // [rsp+40h] [rbp+8h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v14 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v14);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v4);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  battleStageID = v2->battleInfo.battleStageID;
  p_m_BattleCall = &this->m_BattleCall;
  BattleCall::clear(p_m_BattleCall);
  if ( BattleSystem::BattleController::IsTimeAttackMode(v7) )
  {
    v9 = `GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount ^ 0x7B48A35E ^ (LOWORD(`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)((`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)((`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v10 = battleStageID;
    v11 = p_m_BattleCall;
    if ( (int)(((v9 ^ (v9 >> 7)) & 0x550055 ^ v9 ^ (((v9 ^ (v9 >> 7)) & 0x550055) << 7)) + 1) >= 10 )
    {
LABEL_8:
      BattleCall::entryAnimation_FinalRoundReadyGo(v11, v10);
      return;
    }
    goto LABEL_17;
  }
  if ( BattleSystem::BattleController::IsSuccessiveBattle(v8)
    || (battleMode = v2->battleInfo.battleMode, ((battleMode - 2) & 0xFFFFFFFC) == 0) && battleMode != DEVELOP )
  {
    v10 = battleStageID;
    v11 = p_m_BattleCall;
LABEL_17:
    BattleCall::entryAnimation_ReadyGoOnly(v11, v10);
    return;
  }
  IsFinalRound = BattleSystem::BattleController::IsFinalRound(v2);
  v10 = battleStageID;
  v11 = p_m_BattleCall;
  if ( IsFinalRound )
    goto LABEL_8;
  if ( v2->battleInfo.bExtraRound )
    BattleCall::entryAnimation_ExtraRoundReadyGo(p_m_BattleCall, battleStageID);
  else
    BattleCall::entryAnimation_ReadyGo(p_m_BattleCall, battleStageID, (unsigned int)v2->battleInfo.iRoundCount);
}

bool __fastcall AppMain::isPreloadingBattleStartAnimation(AppMain *this)
{
  _DWORD *v1; // rbx
  int v2; // eax
  GameDataInfo *v4; // rcx
  GameDataInfo *v5; // rcx

  v1 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  v2 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v1 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v2 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v4);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v2 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
    return 0;
  if ( v2 > *v1 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v5);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  return (unsigned int)(`GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex]
                      - 4) <= 2;
}

void __fastcall extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset(
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *this)
{
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *m_ptr; // rax
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v3; // rcx
  extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> result; // [rsp+28h] [rbp-10h] BYREF

  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body::GetSharedEmpty(&result);
  this->m_isNoCache = 0;
  m_ptr = result.m_ptr;
  if ( result.m_ptr )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&result.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
    m_ptr = result.m_ptr;
  }
  v3 = this->m_body.m_ptr;
  this->m_body.m_ptr = m_ptr;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v3->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *, __int64))v3->~RefCountableWeakSupportBase)(
        v3,
        1i64);
    m_ptr = result.m_ptr;
  }
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *, __int64))result.m_ptr->~RefCountableWeakSupportBase)(
        result.m_ptr,
        1i64);
  }
}

