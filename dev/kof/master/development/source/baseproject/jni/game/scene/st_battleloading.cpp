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
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/network/netbattle.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cfile.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/main.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/scene_roommember.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/roommembers.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectmanager/effecttaskmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netbattle.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"

class AppMain::ShaderLoadThreadHost :
	AgSimpleThreadHost
{
public:
	ShaderLoadThreadHost(AppMain::ShaderLoadThreadHost &);
	ShaderLoadThreadHost(const AppMain::ShaderLoadThreadHost &);
	ShaderLoadThreadHost(AppMain *);
	virtual void onExecuteThread();
private:
	AppMain * m_appMain; // 0x10
public:
	virtual ~ShaderLoadThreadHost();
	AppMain::ShaderLoadThreadHost & operator=(AppMain::ShaderLoadThreadHost &);
	AppMain::ShaderLoadThreadHost & operator=(const AppMain::ShaderLoadThreadHost &);
};
void AppMain::ShaderLoadThreadHost::onExecuteThread(); // 0x1401AAB90
class AppMain::ShaderEnsureThreadHost :
	AgSimpleThreadHost
{
public:
	ShaderEnsureThreadHost(AppMain *);
	virtual void onExecuteThread();
	virtual void onJoinThread();
	void ensureShaders(CHARACTER_NO *, long, STAGE_ID);
	void waitComplete();
private:
	AppMain * m_appMain; // 0x10
	CHARACTER_NO m_chars[4]; // 0x18
	long m_numChars; // 0x28
	STAGE_ID m_stage; // 0x2C
	AgConditionVariable m_wakeCondition; // 0x30
	AgMutex m_wakeMutex; // 0x40
	AgMutex m_workMutex; // 0x68
public:
	virtual ~ShaderEnsureThreadHost();
};
void AppMain::ShaderEnsureThreadHost::onExecuteThread(); // 0x1401AABE0
void AppMain::ShaderEnsureThreadHost::onJoinThread(); // 0x1401AAEA0
void AppMain::SetBattleSetting(bool bDevMode); // 0x1401AAF10
struct AppMain::SetBattleSetting::__l2::CharIDCheck
{
	long id; // 0x0
	CHARACTER_NO orgID; // 0x4
	long color; // 0x8
};
class AppMain::SetBattleSetting::__l2::<lambda_5511106c140da0d2fed20907a815cda1>
{
public:
	long operator()(long, long);
	<lambda_5511106c140da0d2fed20907a815cda1>(AppMain::SetBattleSetting::__l2::<lambda_5511106c140da0d2fed20907a815cda1> &);
	<lambda_5511106c140da0d2fed20907a815cda1>();
	<lambda_5511106c140da0d2fed20907a815cda1>(AppMain *);
private:
	AppMain * __this; // 0x0
public:
	AppMain::SetBattleSetting::__l2::<lambda_5511106c140da0d2fed20907a815cda1> & operator=(const AppMain::SetBattleSetting::__l2::<lambda_5511106c140da0d2fed20907a815cda1> &);
};
void <lambda_e4d56513a02af634611ce83b65c578d3>::operator()(long p1count, long p2count); // 0x1401ABCB0
class AppMain::SetBattleSetting::__l2::<lambda_e4d56513a02af634611ce83b65c578d3>
{
public:
	void operator()(long, long);
	<lambda_e4d56513a02af634611ce83b65c578d3>(AppMain::SetBattleSetting::__l2::<lambda_e4d56513a02af634611ce83b65c578d3> &);
	<lambda_e4d56513a02af634611ce83b65c578d3>();
	<lambda_e4d56513a02af634611ce83b65c578d3>(AppMain::SetBattleSetting::__l2::CharIDCheck[3][2] &);
private:
	AppMain::SetBattleSetting::__l2::CharIDCheck[3][2] & charIDCheck; // 0x0
public:
	AppMain::SetBattleSetting::__l2::<lambda_e4d56513a02af634611ce83b65c578d3> & operator=(const AppMain::SetBattleSetting::__l2::<lambda_e4d56513a02af634611ce83b65c578d3> &);
};
unsigned char AppMain::battleShaderLoad(); // 0x1401ABD50
void AppMain::battleShaderUnloadCharacterShaders(); // 0x1401ABF30
void AppMain::ST_BattleLoadingInit(); // 0x1401ABFB0
enum BATTLE_LOADING_INDEX
{
	INIT = 0,
	SETUP_ASSETS = 1,
	CHARA_LOADING = 2,
	STAGE_LOADING = 3,
	MODEL_ROOM_LOAD = 4,
	HUD_STAGE_INIT = 5,
	HUD_STAGE_LOAD = 6,
	BATTLE_DATA_INIT = 7,
	BATTLE_DATA_LOAD = 8,
	BATTLE_DATA_FLASH = 9,
	BATTLE_DATA_TPOSE_INIT = 10,
	BATTLE_DATA_TPOSE = 11,
	FINISH = 12,
};
void AppMain::InitLightData(); // 0x1401AC4B0
void AppMain::SetUpPlayerAsset(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> & asset, long charNo, long colorNo, bool bDisableEffect); // 0x1401AC7D0
void AppMain::SetUpPlayerModel(AppMain::_CHARAINFO & dst, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> & charaAsset, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> & rivalAsset, bool createShadowFlg); // 0x1401ACC50
void <lambda_a2a239d61107d4b041e038cf6080c8a1>::operator()(OGLModel * targetModel, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> & extTextureSource1, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> & extTextureSource2); // 0x1401AD210
OGLTexture * <lambda_65ca7ba73310b603b454071e6739ad5b>::operator()(long assetExtTextureIndex, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> & extTextureSource1, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> & extTextureSource2); // 0x1401AD2F0
class AppMain::SetUpPlayerModel::__l2::<lambda_a2a239d61107d4b041e038cf6080c8a1>::()::__l2::<lambda_65ca7ba73310b603b454071e6739ad5b>
{
public:
	OGLTexture * operator()(long, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &);
private:
	static OGLTexture * <lambda_invoker_cdecl>(long, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &);
	typedef OGLTexture *(*<lambda_typedef_cdecl>)(long, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &);
public:
	OGLTexture *(*)(long, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &) operator class OGLTexture *(__cdecl *)(int,class extension::BasicFutureObject<class extension::AsyncAsset,struct extension::FutureAssetOption> &,class extension::BasicFutureObject<class extension::AsyncAsset,struct extension::FutureAssetOption> &)();
private:
	static OGLTexture * <lambda_invoker_vectorcall>(long, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &);
	typedef OGLTexture *(*<lambda_typedef_vectorcall>)(long, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &);
public:
	OGLTexture *(*)(long, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &) operator class OGLTexture *(__vectorcall *)(int,class extension::BasicFutureObject<class extension::AsyncAsset,struct extension::FutureAssetOption> &,class extension::BasicFutureObject<class extension::AsyncAsset,struct extension::FutureAssetOption> &)();
	<lambda_65ca7ba73310b603b454071e6739ad5b>(AppMain::SetUpPlayerModel::__l2::<lambda_a2a239d61107d4b041e038cf6080c8a1>::()::__l2::<lambda_65ca7ba73310b603b454071e6739ad5b> &);
	<lambda_65ca7ba73310b603b454071e6739ad5b>();
	AppMain::SetUpPlayerModel::__l2::<lambda_a2a239d61107d4b041e038cf6080c8a1>::()::__l2::<lambda_65ca7ba73310b603b454071e6739ad5b> & operator=(const AppMain::SetUpPlayerModel::__l2::<lambda_a2a239d61107d4b041e038cf6080c8a1>::()::__l2::<lambda_65ca7ba73310b603b454071e6739ad5b> &);
};
class AppMain::SetUpPlayerModel::__l2::<lambda_a2a239d61107d4b041e038cf6080c8a1>
{
public:
	void operator()(OGLModel *, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &);
private:
	static void <lambda_invoker_cdecl>(OGLModel *, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &);
	typedef char16_t(*<lambda_typedef_cdecl>)(OGLModel *, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &);
public:
	void(*)(OGLModel *, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &) operator void (__cdecl *)(class OGLModel *,class extension::BasicFutureObject<class extension::AsyncAsset,struct extension::FutureAssetOption> &,class extension::BasicFutureObject<class extension::AsyncAsset,struct extension::FutureAssetOption> &)();
private:
	static void <lambda_invoker_vectorcall>(OGLModel *, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &);
	typedef char16_t(*<lambda_typedef_vectorcall>)(OGLModel *, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &);
public:
	void(*)(OGLModel *, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &) operator void (__vectorcall *)(class OGLModel *,class extension::BasicFutureObject<class extension::AsyncAsset,struct extension::FutureAssetOption> &,class extension::BasicFutureObject<class extension::AsyncAsset,struct extension::FutureAssetOption> &)();
	<lambda_a2a239d61107d4b041e038cf6080c8a1>(AppMain::SetUpPlayerModel::__l2::<lambda_a2a239d61107d4b041e038cf6080c8a1> &);
	<lambda_a2a239d61107d4b041e038cf6080c8a1>();
	AppMain::SetUpPlayerModel::__l2::<lambda_a2a239d61107d4b041e038cf6080c8a1> & operator=(const AppMain::SetUpPlayerModel::__l2::<lambda_a2a239d61107d4b041e038cf6080c8a1> &);
};
extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager; // 0x140ACD770
void(*??s_cacheManager$initializer$@?$BasicFutureObject@VAsyncAsset@extension@@UFutureAssetOption@2@@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740808
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5C810
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0AFA
extension::FutureAssetOption::~FutureAssetOption(); // 0x1401ACBE0
void AppMain::SetUpStage(); // 0x1401AD480
void AppMain::ST_BattleLoadingLoop(); // 0x1401ADB70
void AppMain::ST_BattleLoadingDraw(); // 0x1401AF2C0
void AppMain::ST_BattleLoadingExit(); // 0x1401AF370
enum RESULT_LOADING_INDEX
{
	INIT = 0,
	SETUP_ASSETS = 1,
	CHARA_LOADING = 2,
	DATA_INIT = 3,
	DATA_LOAD = 4,
	FINISH = 5,
};
void AppMain::ST_ResultLoadingInit(); // 0x1401AF400
void AppMain::ST_ResultLoadingLoop(); // 0x1401AF710
void AppMain::ST_ResultLoadingDraw(); // 0x1401B0200//decompilation failure at 140ACD770!
//decompilation failure at 140740808!
//decompilation failure at 140A5C810!
//decompilation failure at 1408A0AFA!
std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *__fastcall std::_List_buy<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::string const &>,std::tuple<>>(
        std::_List_buy<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *this,
        std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *_Next,
        std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *_Prev,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<std::string const &> *<_Val_1>)
{
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v5; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v6; // rdi
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *p_Myval; // rbx
  const std::string *Val; // rdx
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *Ptr; // rax

  v5 = std::_List_alloc<std::_List_base_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>::_Buynode0(
         this,
         _Next,
         _Prev);
  v6 = v5;
  p_Myval = &v5->_Myval;
  if ( v5 != (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)-16i64 )
  {
    Val = <_Val_1>->_Myfirst._Val;
    v5->_Myval.first._Mypair._Myval2._Myres = 15i64;
    v5->_Myval.first._Mypair._Myval2._Mysize = 0i64;
    if ( v5->_Myval.first._Mypair._Myval2._Myres < 0x10 )
      Ptr = &v5->_Myval;
    else
      Ptr = (std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *)p_Myval->first._Mypair._Myval2._Bx._Ptr;
    Ptr->first._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign((std::string *)&p_Myval->first, Val, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    p_Myval->second.m_ptr = 0i64;
    p_Myval->second.m_proxy.m_ptr = 0i64;
  }
  return v6;
}

std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >,bool> *__fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>,0>>::_Insert<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>(
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *this,
        std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >,bool> *result,
        std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *_Val,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > _Pnode)
{
  unsigned __int64 Mysize; // r12
  unsigned __int64 Myres; // r10
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *Ptr; // r9
  __int64 v10; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 v12; // r9
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *Myfirst; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v14; // rsi
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Myhead; // rdi
  char **p_Myval; // rdx
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *v17; // rcx
  size_t v18; // r15
  size_t v19; // r8
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // rcx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Prev; // rdx
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *v24; // rdx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> **p_Next; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v26; // rcx
  unsigned __int64 v27; // [rsp+20h] [rbp-48h]
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *v28; // [rsp+80h] [rbp+18h]

  v28 = _Val;
  Mysize = _Val->first._Mypair._Myval2._Mysize;
  Myres = _Val->first._Mypair._Myval2._Myres;
  if ( Myres < 0x10 )
    Ptr = _Val;
  else
    Ptr = (std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *)_Val->first._Mypair._Myval2._Bx._Ptr;
  v10 = 0xCBF29CE484222325ui64;
  for ( i = 0i64; i < Mysize; ++i )
    v10 = 0x100000001B3i64 * ((unsigned __int8)Ptr->first._Mypair._Myval2._Bx._Buf[i] ^ (unsigned __int64)v10);
  v12 = 16 * (v10 & this->_Mask);
  v27 = v12;
  Myfirst = this->_Vec._Mypair._Myval2._Myfirst;
  v14 = *(std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> **)((char *)&Myfirst->_Ptr + v12);
  if ( v14 == this->_List._Mypair._Myval2._Myhead )
    Myhead = this->_List._Mypair._Myval2._Myhead;
  else
    Myhead = **(std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> ***)((char *)&Myfirst[1]._Ptr + v12);
  if ( Myhead == v14 )
  {
LABEL_27:
    Next = _Pnode._Ptr->_Next;
    if ( Myhead != _Pnode._Ptr->_Next )
    {
      _Pnode._Ptr->_Prev->_Next = Next;
      Next->_Prev->_Next = Myhead;
      Myhead->_Prev->_Next = _Pnode._Ptr;
      Prev = Myhead->_Prev;
      Myhead->_Prev = Next->_Prev;
      Next->_Prev = _Pnode._Ptr->_Prev;
      _Pnode._Ptr->_Prev = Prev;
    }
    v24 = (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *)((char *)this->_Vec._Mypair._Myval2._Myfirst + v12);
    if ( v24->_Ptr == this->_List._Mypair._Myval2._Myhead )
    {
      v24->_Ptr = _Pnode._Ptr;
      *(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *)((char *)this->_Vec._Mypair._Myval2._Myfirst + v12 + 8) = _Pnode;
    }
    else if ( v24->_Ptr == Myhead )
    {
      v24->_Ptr = _Pnode._Ptr;
    }
    else
    {
      p_Next = &v24[1]._Ptr->_Next;
      v26 = *p_Next;
      v24[1]._Ptr = *p_Next;
      if ( v26 != _Pnode._Ptr )
        *(std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> **)((char *)&this->_Vec._Mypair._Myval2._Myfirst[1]._Ptr + v12) = (*(std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> **)((char *)&this->_Vec._Mypair._Myval2._Myfirst[1]._Ptr + v12))->_Prev;
    }
    std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>>>,0>>::_Check_size(this);
    result->first._Ptr = _Pnode._Ptr;
    result->second = 1;
    return result;
  }
  else
  {
    while ( 1 )
    {
      Myhead = Myhead->_Prev;
      p_Myval = (char **)&Myhead->_Myval;
      if ( Myhead->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
        p_Myval = (char **)*p_Myval;
      if ( Myres < 0x10 )
        v17 = _Val;
      else
        v17 = (std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *)_Val->first._Mypair._Myval2._Bx._Ptr;
      v18 = Myhead->_Myval.first._Mypair._Myval2._Mysize;
      v19 = v18;
      if ( Mysize < v18 )
        v19 = Mysize;
      if ( (!v19 || !memcmp(v17, p_Myval, v19)) && Mysize >= v18 && Mysize <= v18 )
        break;
      _Val = v28;
      Myres = v28->first._Mypair._Myval2._Myres;
      if ( Myhead == v14 )
      {
        v12 = v27;
        goto LABEL_27;
      }
    }
    _Pnode._Ptr->_Prev->_Next = _Pnode._Ptr->_Next;
    _Pnode._Ptr->_Next->_Prev = _Pnode._Ptr->_Prev;
    --this->_List._Mypair._Myval2._Mysize;
    m_ptr = _Pnode._Ptr->_Myval.second.m_proxy.m_ptr;
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
        operator delete(m_ptr, 0x18ui64);
    }
    std::string::~string((std::string *)&_Pnode._Ptr->_Myval.first);
    operator delete(_Pnode._Ptr);
    result->first._Ptr = Myhead;
    result->second = 0;
    return result;
  }
}

void __fastcall std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>> *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>(
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_First,
        unsigned __int64 _Count,
        const std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Pval,
        std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *_Al)
{
  for ( ; _Count; --_Count )
  {
    if ( _First )
      _First->_Ptr = _Pval->_Ptr;
    ++_First;
  }
}

std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *__fastcall std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_First,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Last,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Dest,
        std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *_Al)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  signed __int64 v6; // rcx

  v4 = 0i64;
  v5 = (unsigned __int64)((char *)_Last - (char *)_First + 7) >> 3;
  if ( _First > _Last )
    v5 = 0i64;
  if ( v5 )
  {
    v6 = (char *)_First - (char *)_Dest;
    do
    {
      if ( _Dest )
        _Dest->_Ptr = *(std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> **)((char *)_Dest + v6);
      ++_Dest;
      ++v4;
    }
    while ( v4 != v5 );
  }
  return _Dest;
}

void __fastcall extension::AsyncContent<OGLSecondary>::AsyncContent<OGLSecondary>(
        extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *this,
        const std::string *name,
        const std::string *optstr)
{
  std::string *p_m_name; // rcx
  std::string *Ptr; // rax
  std::string *p_m_loadOptionString; // rcx
  const std::string *v8; // rax

  this->m_refCount.m_value._My_val = 1i64;
  p_m_name = (std::string *)&this->m_name;
  p_m_name->_Mypair._Myval2._Myres = 15i64;
  p_m_name->_Mypair._Myval2._Mysize = 0i64;
  if ( p_m_name->_Mypair._Myval2._Myres < 0x10 )
    Ptr = p_m_name;
  else
    Ptr = (std::string *)p_m_name->_Mypair._Myval2._Bx._Ptr;
  Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(p_m_name, name, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  p_m_loadOptionString = (std::string *)&this->m_loadOptionString;
  this->m_loadOptionString._Mypair._Myval2._Myres = 15i64;
  this->m_loadOptionString._Mypair._Myval2._Mysize = 0i64;
  if ( this->m_loadOptionString._Mypair._Myval2._Myres < 0x10 )
    v8 = &this->m_loadOptionString;
  else
    v8 = (const std::string *)p_m_loadOptionString->_Mypair._Myval2._Bx._Ptr;
  v8->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(p_m_loadOptionString, optstr, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  this->m_data._Mypair._Myval2 = 0i64;
  this->m_status.m_stateFlags.m_value._My_val = 0i64;
  this->m_status.m_stateFlags.m_value._My_val = 0i64;
  this->m_errorCode = 0;
  this->m_isDataReleased = 0;
}

void __fastcall extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>(
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *this,
        extension::FutureObjectSpec::NoCache_t __formal,
        const std::string *asset_path,
        const extension::FutureAssetOption *opt)
{
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v7; // rsi
  const std::string *v8; // rbx
  const std::string *v9; // rax
  extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > *v10; // rax
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v11; // rax
  char *Ptr; // rcx
  char *v13; // rax
  char *v14; // rcx
  char *v15; // rax
  extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > v16; // [rsp+28h] [rbp-90h] BYREF
  __int64 v17; // [rsp+30h] [rbp-88h]
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v18; // [rsp+38h] [rbp-80h]
  std::string v19; // [rsp+40h] [rbp-78h] BYREF
  std::string result; // [rsp+60h] [rbp-58h] BYREF

  v17 = -2i64;
  this->m_isNoCache = 1;
  v7 = (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *)operator new(0x18ui64);
  v18 = v7;
  v8 = extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize(&result, opt);
  v9 = extension::AsyncWorker::NormalizeAssetPath(&v19, asset_path);
  v10 = extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::LoadStart(
          &v16,
          v9,
          v8,
          opt);
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body::Body(
    v7,
    (extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >)v10);
  this->m_body.m_ptr = v11;
  if ( v19._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = v19._Mypair._Myval2._Bx._Ptr;
    if ( v19._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v19._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v13 = (char *)*((_QWORD *)v19._Mypair._Myval2._Bx._Ptr - 1);
      if ( v13 >= v19._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v19._Mypair._Myval2._Bx._Ptr - v13) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v19._Mypair._Myval2._Bx._Ptr - v13) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)v19._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  v19._Mypair._Myval2._Myres = 15i64;
  v19._Mypair._Myval2._Mysize = 0i64;
  v19._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    v14 = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v15 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v15 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v14);
  }
}

void __fastcall extension::FutureObjectJob<CharaDataUnify>::FutureObjectJob<CharaDataUnify>(
        extension::FutureObjectJob<CharaDataUnify> *this,
        extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> > c)
{
  volatile signed __int64 *My_val; // r8
  extension::AsyncContent<CharaDataUnify> *v3; // rdi

  this->__vftable = (extension::FutureObjectJob<CharaDataUnify>_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->m_running = 1;
  this->__vftable = (extension::FutureObjectJob<CharaDataUnify>_vtbl *)&extension::FutureObjectJob<CharaDataUnify>::`vftable';
  My_val = (volatile signed __int64 *)c.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<CharaDataUnify> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  v3 = (extension::AsyncContent<CharaDataUnify> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v3 )
    {
      extension::AsyncContent<CharaDataUnify>::~AsyncContent<CharaDataUnify>(v3);
      operator delete(v3, 0x68ui64);
    }
  }
}

void __fastcall std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>(
        std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *this)
{
  this->_Traitsobj._Mypair._Myval2._Myval2 = 0.0;
  this->_List._Mypair._Myval2._Myhead = 0i64;
  this->_List._Mypair._Myval2._Mysize = 0i64;
  this->_List._Mypair._Myval2._Myhead = std::_List_alloc<std::_List_base_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>::_Buynode0(
                                          (std::_List_alloc<std::_List_base_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> > *)this,
                                          0i64,
                                          0i64);
  this->_Vec._Mypair._Myval2._Myfirst = 0i64;
  this->_Vec._Mypair._Myval2._Mylast = 0i64;
  this->_Vec._Mypair._Myval2._Myend = 0i64;
  this->_Traitsobj._Mypair._Myval2._Myval2 = 1.0;
  std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>,0>>::_Init(
    (std::_Hash<std::_Umap_traits<extension::SoundHashKey,int,std::_Uhash_compare<extension::SoundHashKey,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey> >,std::allocator<std::pair<extension::SoundHashKey const ,int> >,0> > *)this,
    8ui64);
}

void __fastcall extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache::AssetCache(
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache *this)
{
  extension::AssetCacheExpiredEntryCleaner *v1; // rax
  extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> *v2; // r8

  InitializeCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache>);
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.m_Prev = &extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.m_Next = &extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.__vftable = (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheBase::`vftable';
  v1 = extension::_anonymous_namespace_::AssetCacheExpiredEntryCleaner::Instance();
  if ( v1 )
    v2 = &v1->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  else
    v2 = 0i64;
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = v2->m_Prev;
  v2->m_Prev->m_Next = extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.m_Next;
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.m_Next = v2;
  v2->m_Prev = &extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.__vftable = (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache_vtbl *)&extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache::`vftable';
  std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>((std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.m_cachedObjectMap);
}

void __fastcall AsyncCharaDataUnifyLoad::AsyncLoadJob::AsyncLoadJob(
        AsyncCharaDataUnifyLoad::AsyncLoadJob *this,
        extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> > c,
        const CharaProjectData *pProj,
        int id,
        CharaDataUnify::DATA_TYPE type)
{
  extension::AsyncContent<CharaDataUnify> *My_val; // rax
  extension::AsyncContent<CharaDataUnify> *v10; // rdi
  extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> > ca; // [rsp+30h] [rbp+8h] BYREF

  My_val = (extension::AsyncContent<CharaDataUnify> *)c.m_ptr->m_refCount.m_value._My_val;
  ca.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::FutureObjectJob<CharaDataUnify>::FutureObjectJob<CharaDataUnify>(
    this,
    (extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> >)&ca);
  this->pProj = pProj;
  this->extension::FutureObjectJob<CharaDataUnify>::extension::ExThread::Runnable::AgSimpleThreadHost::AgIThreadHost::__vftable = (AsyncCharaDataUnifyLoad::AsyncLoadJob_vtbl *)&AsyncCharaDataUnifyLoad::AsyncLoadJob::`vftable'{for `extension::FutureObjectJob<CharaDataUnify>'};
  this->IBinaryDataLoadListener::__vftable = (IBinaryDataLoadListener_vtbl *)&AsyncCharaDataUnifyLoad::AsyncLoadJob::`vftable'{for `IBinaryDataLoadListener'};
  this->type = type;
  this->id = id;
  v10 = (extension::AsyncContent<CharaDataUnify> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<CharaDataUnify>::~AsyncContent<CharaDataUnify>(v10);
      operator delete(v10, 0x68ui64);
    }
  }
}

void __fastcall extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body::Body(
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *this,
        extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > shared)
{
  volatile signed __int64 *My_val; // rax
  extension::AsyncContent<extension::AsyncAsset> *v5; // rbx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // [rsp+48h] [rbp+10h]

  this->__vftable = (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  v6 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
  v6->m_refCount.m_value._My_val = 1i64;
  v6->m_principal = this;
  v6->m_sharedCount.m_value._My_val = 0i64;
  v6->m_sharedCount.m_value._My_val = 1i64;
  this->m_refCount.m_ptr = v6;
  this->__vftable = (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body_vtbl *)&extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body::`vftable';
  My_val = (volatile signed __int64 *)shared.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<extension::AsyncAsset> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  v5 = (extension::AsyncContent<extension::AsyncAsset> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<extension::AsyncAsset>::~AsyncContent<extension::AsyncAsset>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>>::~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>>(
        extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> > *this)
{
  _RTL_CRITICAL_SECTION *m_associated; // rdi
  int v2; // ebx
  __int64 m_ownsLockCount; // rbx

  m_associated = (_RTL_CRITICAL_SECTION *)this->m_associated;
  v2 = -this->m_ownsLockCount;
  if ( v2 < 0 || this->m_ownsLockCount == 0 )
  {
    if ( this->m_ownsLockCount > 0 )
    {
      m_ownsLockCount = (unsigned int)this->m_ownsLockCount;
      do
      {
        LeaveCriticalSection(m_associated);
        --m_ownsLockCount;
      }
      while ( m_ownsLockCount );
    }
  }
  else
  {
    do
    {
      EnterCriticalSection(m_associated);
      --v2;
    }
    while ( v2 );
  }
}

// attributes: thunk
void __stdcall AgMutex::~AgMutex(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}

void __fastcall extension::FutureObjectJob<CharaDataUnify>::~FutureObjectJob<CharaDataUnify>(
        extension::FutureObjectJob<CharaDataUnify> *this)
{
  extension::AsyncContent<CharaDataUnify> *m_ptr; // rdi
  extension::AsyncContent<CharaDataUnify> *v3; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<CharaDataUnify>_vtbl *)&extension::FutureObjectJob<CharaDataUnify>::`vftable';
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    m_ptr->m_errorCode = 5;
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&m_ptr->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount,
    0xFFFFFFFFFFFFFFFFui64);
  v3 = this->m_content.m_ptr;
  if ( v3 && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<CharaDataUnify>::~AsyncContent<CharaDataUnify>(v3);
    operator delete(v3, 0x68ui64);
  }
  this->__vftable = (extension::FutureObjectJob<CharaDataUnify>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>::~list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>(
        std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *this)
{
  std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>>>::clear(this);
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall std::unique_ptr<OGLModel>::~unique_ptr<OGLModel>(
        std::unique_ptr<extension::SoundList::LazyMediaSetBuildJob> *this)
{
  extension::SoundList::LazyMediaSetBuildJob *Myval2; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( Myval2 )
    ((void (__fastcall *)(extension::SoundList::LazyMediaSetBuildJob *, __int64))Myval2->~AgIThreadHost)(Myval2, 1i64);
}

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>>>>(
        std::vector<unsigned char *> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache::~AssetCache(
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache *this)
{
  AgLogger **Myfirst; // rdx

  this->__vftable = (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache_vtbl *)&extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache::`vftable';
  Myfirst = (AgLogger **)this->m_cachedObjectMap._Vec._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      Myfirst,
      ((char *)this->m_cachedObjectMap._Vec._Mypair._Myval2._Myend - (char *)Myfirst) >> 3);
    this->m_cachedObjectMap._Vec._Mypair._Myval2._Myfirst = 0i64;
    this->m_cachedObjectMap._Vec._Mypair._Myval2._Mylast = 0i64;
    this->m_cachedObjectMap._Vec._Mypair._Myval2._Myend = 0i64;
  }
  std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>>>::clear((std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *)&this->m_cachedObjectMap._List);
  operator delete(this->m_cachedObjectMap._List._Mypair._Myval2._Myhead);
  this->__vftable = (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheNode::`vftable';
  this->m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = this->m_Prev;
  this->m_Prev->m_Next = this->m_Next;
  this->m_Next = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  this->m_Prev = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache>);
}

void __fastcall extension::FutureAssetOption::~FutureAssetOption(
        extension::FutureAssetOption *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *a3,
        std::integral_constant<bool,0> a4)
{
  extension::FutureAssetOptionFileSetting *Myfirst; // rcx
  std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *v6; // rcx

  Myfirst = this->fileSetting._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Destroy_range1<std::allocator<extension::FutureAssetOptionFileSetting>,extension::FutureAssetOptionFileSetting *>(
      Myfirst,
      this->fileSetting._Mypair._Myval2._Mylast,
      a3,
      a4);
    std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting>>::deallocate(
      v6,
      this->fileSetting._Mypair._Myval2._Myfirst,
      this->fileSetting._Mypair._Myval2._Myend - this->fileSetting._Mypair._Myval2._Myfirst);
    this->fileSetting._Mypair._Myval2._Myfirst = 0i64;
    this->fileSetting._Mypair._Myval2._Mylast = 0i64;
    this->fileSetting._Mypair._Myval2._Myend = 0i64;
  }
  std::string::~string(&this->baseCharaPath);
  std::string::~string(&this->effectPath);
}

void __fastcall extension::ExThread::Runnable::~Runnable(extension::ExThread::Runnable *this)
{
  this->__vftable = (extension::ExThread::Runnable_vtbl *)&AgIThreadHost::`vftable';
}

extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *__fastcall extension::BasicFutureObject<OGLSecondary,void>::operator=(
        extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *this,
        const extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *other)
{
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *m_ptr; // r8
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v4; // rcx

  this->m_isNoCache = other->m_isNoCache;
  m_ptr = other->m_body.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
  v4 = this->m_body.m_ptr;
  this->m_body.m_ptr = m_ptr;
  if ( v4
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v4->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v4->~RefCountableWeakSupportBase)(
      v4,
      1i64);
  }
  return this;
}

bool __fastcall extension::FutureAssetOption::operator==(
        extension::FutureAssetOption *this,
        const extension::FutureAssetOption *o)
{
  return this->playerNo == `extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.playerNo
      && this->disableShaderFXMaterialLight == `extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.disableShaderFXMaterialLight
      && this->disableEffectLoad == `extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.disableEffectLoad
      && this->bNoMotion == `extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.bNoMotion
      && !std::string::compare(
            &this->effectPath,
            &`extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.effectPath)
      && this->baseDataFlag == `extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.baseDataFlag
      && !std::string::compare(
            &this->baseCharaPath,
            &`extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.baseCharaPath);
}

extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> *__fastcall std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
        std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *this,
        const std::string *_Keyval)
{
  std::_List_buy<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *v4; // rcx
  const std::piecewise_construct_t *v5; // r9
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Ptr; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Myhead; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rdi
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v9; // rdx
  unsigned __int64 Mysize; // rax
  std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >,bool> v12; // [rsp+30h] [rbp-18h] BYREF
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > result; // [rsp+50h] [rbp+8h] BYREF

  std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>>>,0>>::lower_bound(
    this,
    &result,
    _Keyval);
  Ptr = result._Ptr;
  if ( result._Ptr == this->_List._Mypair._Myval2._Myhead )
  {
    Myhead = this->_List._Mypair._Myval2._Myhead;
    result._Ptr = (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)_Keyval;
    Next = Myhead->_Next;
    v9 = std::_List_buy<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::string const &>,std::tuple<>>(
           v4,
           Myhead->_Next,
           Myhead->_Next->_Prev,
           v5,
           (std::tuple<std::string const &> *)&result);
    Mysize = this->_List._Mypair._Myval2._Mysize;
    if ( Mysize == 0x3FFFFFFFFFFFFFEi64 )
      std::_Xlength_error("list<T> too long");
    this->_List._Mypair._Myval2._Mysize = Mysize + 1;
    Next->_Prev = v9;
    v9->_Prev->_Next = v9;
    std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>,0>>::_Insert<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>(
      this,
      &v12,
      &this->_List._Mypair._Myval2._Myhead->_Next->_Myval,
      (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >)this->_List._Mypair._Myval2._Myhead->_Next);
    Ptr = v12.first._Ptr;
  }
  return &Ptr->_Myval.second;
}

OGLTexture *__fastcall lambda_65ca7ba73310b603b454071e6739ad5b_::operator()(
        int assetExtTextureIndex,
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *extTextureSource1,
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *extTextureSource2,
        __int64 a4)
{
  OGLTexture *v4; // rbx
  int v7; // er15
  extension::AsyncContent<extension::AsyncAsset> *m_ptr; // rdi
  extension::AsyncContent<extension::AsyncAsset> *v9; // rdi
  extension::AsyncAsset *Myval2; // rcx
  extension::AsyncContent<OGLTexture> *v11; // rdi
  OGLTexture *v12; // rdi
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v13; // rcx
  __int64 v15; // rdi
  extension::AsyncAsset *v16; // rcx
  extension::AsyncStatus::Step v17; // edx
  extension::AsyncContent<OGLTexture> *v18; // rdi
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v19; // rcx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> result; // [rsp+20h] [rbp-38h] BYREF
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> v21; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0i64;
  v7 = (int)extTextureSource1;
  m_ptr = extTextureSource2->m_body.m_ptr->m_content.m_ptr;
  if ( m_ptr && !m_ptr->m_isDataReleased )
  {
    if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&m_ptr->m_status, (extension::AsyncStatus::Step)extTextureSource1);
    if ( m_ptr->m_data._Mypair._Myval2 )
    {
      v9 = extTextureSource2->m_body.m_ptr->m_content.m_ptr;
      if ( !v9 || v9->m_isDataReleased )
      {
        Myval2 = 0i64;
      }
      else
      {
        if ( (v9->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v9->m_status, (extension::AsyncStatus::Step)extTextureSource1);
        Myval2 = v9->m_data._Mypair._Myval2;
      }
      v11 = extension::AsyncAsset::getExtTexture(Myval2, &result, v7)->m_body.m_ptr->m_content.m_ptr;
      if ( !v11 || v11->m_isDataReleased )
      {
        v12 = 0i64;
      }
      else
      {
        if ( (v11->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v11->m_status, (extension::AsyncStatus::Step)extTextureSource1);
        v12 = v11->m_data._Mypair._Myval2;
      }
      v13 = result.m_body.m_ptr;
      if ( result.m_body.m_ptr )
      {
        extTextureSource1 = (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)_InterlockedExchangeAdd64((volatile signed __int64 *)&result.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount, 0xFFFFFFFFFFFFFFFFui64);
        if ( extTextureSource1 == (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)1 )
          v13->~RefCountableWeakSupportBase(v13);
      }
      if ( v12 )
        return v12;
    }
  }
  v15 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 16i64);
  if ( !v15 || *(_BYTE *)(v15 + 96) )
  {
    v16 = 0i64;
  }
  else
  {
    if ( (*(_QWORD *)(v15 + 88) & 1) == 0 )
      extension::AsyncStatus::waitFor(
        (extension::AsyncStatus *)(v15 + 88),
        (extension::AsyncStatus::Step)extTextureSource1);
    v16 = *(extension::AsyncAsset **)(v15 + 72);
  }
  v18 = extension::AsyncAsset::getExtTexture(v16, &v21, v7)->m_body.m_ptr->m_content.m_ptr;
  if ( v18 && !v18->m_isDataReleased )
  {
    if ( (v18->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v18->m_status, v17);
    v4 = v18->m_data._Mypair._Myval2;
  }
  v19 = v21.m_body.m_ptr;
  if ( v21.m_body.m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v21.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *, __int64))v19->~RefCountableWeakSupportBase)(
        v19,
        1i64);
  }
  return v4;
}

void __fastcall lambda_a2a239d61107d4b041e038cf6080c8a1_::operator()(
        OGLModel *targetModel,
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *extTextureSource1,
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *extTextureSource2,
        __int64 a4)
{
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx

  extTextureSource1[552].m_body.m_ptr = (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *)lambda_65ca7ba73310b603b454071e6739ad5b_::operator()((int)targetModel, 0i64, extTextureSource2, a4);
  *(_QWORD *)&extTextureSource1[553].gap0 = lambda_65ca7ba73310b603b454071e6739ad5b_::operator()(
                                              v7,
                                              (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)1,
                                              extTextureSource2,
                                              a4);
  extTextureSource1[553].m_body.m_ptr = (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *)lambda_65ca7ba73310b603b454071e6739ad5b_::operator()(v8, (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)2, extTextureSource2, a4);
  *(_QWORD *)&extTextureSource1[555].gap0 = lambda_65ca7ba73310b603b454071e6739ad5b_::operator()(
                                              v9,
                                              (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)5,
                                              extTextureSource2,
                                              a4);
  *(_QWORD *)&extTextureSource1[554].gap0 = lambda_65ca7ba73310b603b454071e6739ad5b_::operator()(
                                              v10,
                                              (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)3,
                                              extTextureSource2,
                                              a4);
  extTextureSource1[555].m_body.m_ptr = (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *)lambda_65ca7ba73310b603b454071e6739ad5b_::operator()(v11, (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)6, extTextureSource2, a4);
  extTextureSource1[554].m_body.m_ptr = (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *)lambda_65ca7ba73310b603b454071e6739ad5b_::operator()(v12, (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)4, extTextureSource2, a4);
  *(_QWORD *)&extTextureSource1[556].gap0 = lambda_65ca7ba73310b603b454071e6739ad5b_::operator()(
                                              v13,
                                              (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)7,
                                              extTextureSource2,
                                              a4);
}

void __fastcall lambda_e4d56513a02af634611ce83b65c578d3_::operator()(__int64 *p1count, int p2count, int a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // eax
  int v11; // er9
  int v12; // er10

  if ( p2count > 0 )
  {
    v4 = a3;
    v5 = p2count;
    v6 = 0i64;
    do
    {
      if ( v4 > 0 )
      {
        v7 = 0i64;
        v8 = v4;
        do
        {
          v9 = *p1count;
          v10 = *(_DWORD *)(v6 + *p1count);
          if ( v10 == *(_DWORD *)(v7 + *p1count + 36) )
          {
            v11 = *(_DWORD *)(v6 + v9 + 8);
            v12 = *(_DWORD *)(v7 + v9 + 44);
            if ( v11 == v12 )
            {
              if ( *(_DWORD *)(v6 + v9 + 4) == v10 )
                *(_DWORD *)(v7 + v9 + 44) = (v12 == 1) + 1;
              else
                *(_DWORD *)(v6 + v9 + 8) = (v11 == 1) + 1;
            }
          }
          v7 += 12i64;
          --v8;
        }
        while ( v8 );
      }
      v6 += 12i64;
      --v5;
    }
    while ( v5 );
  }
}

void __fastcall extension::BasicFutureObject<OGLCamera,void>::AssetCache::CleanupExpiredEntry(
        extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache *this)
{
  _RTL_CRITICAL_SECTION *v1; // rsi
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Myhead; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rbx
  std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v5; // r8
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // rax
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > result; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_RTL_CRITICAL_SECTION *)&this->extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache>;
  if ( !this )
    v1 = 0i64;
  EnterCriticalSection(v1);
  Myhead = this->m_cachedObjectMap._List._Mypair._Myval2._Myhead;
  Next = Myhead->_Next;
  if ( Myhead->_Next != Myhead )
  {
    do
    {
      v5._Ptr = Next;
      Next = Next->_Next;
      m_ptr = v5._Ptr->_Myval.second.m_proxy.m_ptr;
      if ( !m_ptr || !m_ptr->m_sharedCount.m_value._My_val )
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>>,0>>::erase(
          &this->m_cachedObjectMap,
          &result,
          v5);
    }
    while ( Next != this->m_cachedObjectMap._List._Mypair._Myval2._Myhead );
  }
  LeaveCriticalSection(v1);
}

__int64 __fastcall BattleSystem::ResultMemberInfo::GetBaseCharaNo(BattleSystem::ResultMemberInfo *this, int partID)
{
  unsigned int v2; // ebx
  CharaProjectData *v3; // rdi
  int CharaDataIndex; // eax
  __int64 result; // rax

  v2 = this->charaNo[partID];
  v3 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
  CharaDataIndex = CharaProjectData::GetCharaDataIndex(v3, v2);
  if ( CharaDataIndex < 0 )
    return 0xFFFFFFFFi64;
  result = (unsigned int)v3->pCharaData[CharaDataIndex].iBaseCharaID;
  if ( (int)result < 0 )
    return v2;
  return result;
}

CharaDataUnify *__fastcall AsyncCharaDataUnifyLoad::GetObj(
        AsyncCharaDataUnifyLoad *this,
        extension::AsyncStatus::Step a2)
{
  extension::AsyncContent<CharaDataUnify> *m_ptr; // rax
  CharaDataUnify *result; // rax
  extension::AsyncContent<CharaDataUnify> *v4; // rbx

  m_ptr = this->state.m_ptr;
  if ( this->state.m_ptr->m_isDataReleased || !m_ptr || (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    return 0i64;
  v4 = this->state.m_ptr;
  if ( !this->state.m_ptr )
    return 0i64;
  this->bWorking = 0;
  if ( (v4->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    extension::AsyncStatus::waitFor(&v4->m_status, a2);
  v4->m_isDataReleased = 1;
  result = v4->m_data._Mypair._Myval2;
  v4->m_data._Mypair._Myval2 = 0i64;
  return result;
}

void __fastcall AppMain::InitLightData(AppMain *this)
{
  OGLRender *m_pRender; // rbx
  int (*v3)[64][3]; // rcx
  bool (*v4)[64][3]; // rdx
  int (*v5)[64]; // r8
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 j; // rax
  __int64 v9; // r12
  int (*stageModelLightId)[64][3]; // rcx
  __int64 v11; // r10
  bool (*stageModelLightOn)[64][3]; // rdx
  int (*numStageModelLights)[64]; // r8
  __int64 v14; // r9
  __int64 k; // rax
  AppMain::_MODEL_LIGHT_DATA *modelLightData; // r14
  ShaderFxHelper::ShaderFxLightSetting *lightAssetData; // r15
  AppMain::_MATERIAL_LIGHT_ASSET_DATA *matLightAssetData; // rdi
  ShaderFxHelper::ShaderFxLightSetting *v19; // rsi
  __int64 v20; // rbp
  __int64 v21; // rdi
  ShaderFxHelper::ShaderFxLightSetting *P1LightAssetData; // rsi
  int (*playerLightId)[64][3]; // rcx
  bool (*playerLightOn)[64][3]; // rdx
  int (*numPlayerLights)[64]; // r8
  __int64 v26; // r10
  __int64 v27; // r9
  __int64 i; // rax
  __int64 v29; // rdi
  ShaderFxHelper::ShaderFxLightSetting *P2LightAssetData; // rbx

  if ( this->pBattleStage )
  {
    playerLightId = this->ModelRoomSettings.playerLightId;
    playerLightOn = this->ModelRoomSettings.playerLightOn;
    numPlayerLights = this->ModelRoomSettings.numPlayerLights;
    v26 = 4i64;
    do
    {
      v27 = 64i64;
      do
      {
        *(_DWORD *)numPlayerLights = 0;
        for ( i = 0i64; i < 3; ++i )
        {
          *(_DWORD *)playerLightId = -1;
          playerLightId = (int (*)[64][3])((char *)playerLightId + 4);
          (*playerLightOn)[0][i] = 0;
        }
        playerLightOn = (bool (*)[64][3])((char *)playerLightOn + 3);
        numPlayerLights = (int (*)[64])((char *)numPlayerLights + 4);
        --v27;
      }
      while ( v27 );
      --v26;
    }
    while ( v26 );
    this->ModelRoomSettings.worldLightData.numP1Lights = 0;
    v29 = 3i64;
    this->ModelRoomSettings.worldLightData.numP2Lights = 0;
    P2LightAssetData = this->ModelRoomSettings.worldLightData.P2LightAssetData;
    do
    {
      memset(P2LightAssetData[-4].skinSelfShadowColour, 0, sizeof(ShaderFxHelper::ShaderFxLightSetting));
      memset(P2LightAssetData++, 0, sizeof(ShaderFxHelper::ShaderFxLightSetting));
      --v29;
    }
    while ( v29 );
  }
  else
  {
    m_pRender = this->m_pRender;
    OGLLightManager::deleteAllLights(&m_pRender->m_WorldLightManager);
    OGLLightManager::clear(&m_pRender->m_WorldLightManager);
    this->ModelRoomSettings.worldLightId[0] = -1;
    this->ModelRoomSettings.worldLightOn[0] = 0;
    v3 = this->ModelRoomSettings.playerLightId;
    v4 = this->ModelRoomSettings.playerLightOn;
    v5 = this->ModelRoomSettings.numPlayerLights;
    v6 = 4i64;
    do
    {
      v7 = 64i64;
      do
      {
        *(_DWORD *)v5 = 0;
        for ( j = 0i64; j < 3; ++j )
        {
          *(_DWORD *)v3 = -1;
          v3 = (int (*)[64][3])((char *)v3 + 4);
          (*v4)[0][j] = 0;
        }
        v4 = (bool (*)[64][3])((char *)v4 + 3);
        v5 = (int (*)[64])((char *)v5 + 4);
        --v7;
      }
      while ( v7 );
      --v6;
    }
    while ( v6 );
    v9 = 44i64;
    stageModelLightId = this->ModelRoomSettings.stageModelLightId;
    v11 = 44i64;
    stageModelLightOn = this->ModelRoomSettings.stageModelLightOn;
    numStageModelLights = this->ModelRoomSettings.numStageModelLights;
    do
    {
      v14 = 64i64;
      do
      {
        for ( k = 0i64; k < 3; ++k )
        {
          *(_DWORD *)stageModelLightId = -1;
          stageModelLightId = (int (*)[64][3])((char *)stageModelLightId + 4);
          (*stageModelLightOn)[0][k] = 0;
        }
        *(_DWORD *)numStageModelLights = 0;
        stageModelLightOn = (bool (*)[64][3])((char *)stageModelLightOn + 3);
        numStageModelLights = (int (*)[64])((char *)numStageModelLights + 4);
        --v14;
      }
      while ( v14 );
      --v11;
    }
    while ( v11 );
    modelLightData = this->ModelRoomSettings.modelLightData;
    lightAssetData = this->ModelRoomSettings.modelLightData[0].matLightAssetData[0].lightAssetData;
    do
    {
      modelLightData->numMaterials = 0;
      matLightAssetData = modelLightData->matLightAssetData;
      modelLightData->valid = 0;
      v19 = lightAssetData;
      v20 = 64i64;
      do
      {
        matLightAssetData->numLights = 0;
        memset(v19, 0, 0x1ECui64);
        v19 = (ShaderFxHelper::ShaderFxLightSetting *)((char *)v19 + 496);
        ++matLightAssetData;
        --v20;
      }
      while ( v20 );
      lightAssetData = (ShaderFxHelper::ShaderFxLightSetting *)((char *)lightAssetData + 31752);
      ++modelLightData;
      --v9;
    }
    while ( v9 );
    this->ModelRoomSettings.worldLightData.numWorldLights = 0;
    this->ModelRoomSettings.worldLightData.numCharLights = 0;
    this->ModelRoomSettings.worldLightData.numP1Lights = 0;
    this->ModelRoomSettings.worldLightData.numP2Lights = 0;
    memset(
      this->ModelRoomSettings.worldLightData.worldLightAssetData,
      0,
      sizeof(this->ModelRoomSettings.worldLightData.worldLightAssetData));
    v21 = 3i64;
    P1LightAssetData = this->ModelRoomSettings.worldLightData.P1LightAssetData;
    do
    {
      memset(&P1LightAssetData[-4].skinSelfShadowHardEdge, 0, sizeof(ShaderFxHelper::ShaderFxLightSetting));
      memset(P1LightAssetData, 0, sizeof(ShaderFxHelper::ShaderFxLightSetting));
      memset(&P1LightAssetData[3].emitSpecular, 0, sizeof(ShaderFxHelper::ShaderFxLightSetting));
      ++P1LightAssetData;
      --v21;
    }
    while ( v21 );
    this->ModelRoomSettings.numWorldLights = 0;
  }
}

void __fastcall BattleSystem::BattleController::InitLoadedInfo(BattleSystem::BattleController *this)
{
  BattleSystem::BattleLoadedInfo *p_loadedInfo; // rax
  STAGE_ID *p_loadedStageID; // rcx

  p_loadedInfo = &this->loadedInfo;
  p_loadedStageID = &this->loadedInfo.loadedStageID;
  *(_WORD *)&p_loadedInfo->bLoadedCommonData = 256;
  for ( *p_loadedStageID = STAGE_ID_NONE;
        p_loadedInfo != (BattleSystem::BattleLoadedInfo *)p_loadedStageID;
        p_loadedInfo = (BattleSystem::BattleLoadedInfo *)((char *)p_loadedInfo + 8) )
  {
    p_loadedInfo->loadedChara[0].charaNo = CHARACTER_NO_NONE;
    p_loadedInfo->loadedChara[0].iCharaColor = 0;
  }
}

void __fastcall AsyncCharaDataUnifyLoad::LoadObj(
        AsyncCharaDataUnifyLoad *this,
        const CharaProjectData *pProj,
        int id,
        CharaDataUnify::DATA_TYPE type)
{
  char *v8; // rdi
  std::string *v9; // rcx
  char *Ptr; // rax
  _QWORD *v11; // rax
  extension::AsyncContent<CharaDataUnify> *m_ptr; // rbx
  char *v13; // rcx
  char *v14; // rax
  extension::AsyncContent<CharaDataUnify> *v15; // rax
  extension::AsyncContent<CharaDataUnify> *v16; // rcx
  extension::ExThread::Runnable *v17; // rax
  extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> > c; // [rsp+30h] [rbp-49h] BYREF
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+38h] [rbp-41h] BYREF
  int v20; // [rsp+40h] [rbp-39h]
  void (__fastcall ***v21)(_QWORD, __int64); // [rsp+48h] [rbp-31h] BYREF
  void (__fastcall ***v22)(_QWORD, __int64); // [rsp+50h] [rbp-29h] BYREF
  void (__fastcall ****v23)(_QWORD, __int64); // [rsp+58h] [rbp-21h]
  __int64 v24; // [rsp+60h] [rbp-19h]
  __int64 v25; // [rsp+68h] [rbp-11h]
  std::string _Right; // [rsp+70h] [rbp-9h] BYREF

  v24 = -2i64;
  this->bWorking = 1;
  v8 = (char *)operator new(0x68ui64);
  obj._Mypair._Myval2 = (extension::ExThread::Runnable *)v8;
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&_Right, &pnewText, 0i64);
  v20 = 1;
  *(_QWORD *)v8 = 1i64;
  v9 = (std::string *)(v8 + 8);
  *((_QWORD *)v8 + 4) = 15i64;
  *((_QWORD *)v8 + 3) = 0i64;
  if ( *((_QWORD *)v8 + 4) < 0x10ui64 )
    Ptr = v8 + 8;
  else
    Ptr = v9->_Mypair._Myval2._Bx._Ptr;
  *Ptr = 0;
  std::string::assign(v9, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  v11 = v8 + 40;
  *((_QWORD *)v8 + 8) = 15i64;
  *((_QWORD *)v8 + 7) = 0i64;
  if ( *((_QWORD *)v8 + 8) >= 0x10ui64 )
    v11 = (_QWORD *)*v11;
  *(_BYTE *)v11 = 0;
  v23 = 0i64;
  *((_QWORD *)v8 + 9) = 0i64;
  *((_QWORD *)v8 + 11) = 0i64;
  *((_QWORD *)v8 + 11) = 0i64;
  *((_DWORD *)v8 + 20) = 0;
  v8[96] = 0;
  m_ptr = this->state.m_ptr;
  this->state.m_ptr = (extension::AsyncContent<CharaDataUnify> *)v8;
  if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<CharaDataUnify>::~AsyncContent<CharaDataUnify>(m_ptr);
    operator delete(m_ptr, 0x68ui64);
  }
  if ( _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    v13 = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v14 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v14) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v14) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v13 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v13);
  }
  v15 = (extension::AsyncContent<CharaDataUnify> *)operator new(0x38ui64);
  c.m_ptr = v15;
  v16 = this->state.m_ptr;
  c.m_ptr = v16;
  if ( v16 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v16, 1ui64);
  AsyncCharaDataUnifyLoad::AsyncLoadJob::AsyncLoadJob(
    (AsyncCharaDataUnifyLoad::AsyncLoadJob *)v15,
    (extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> >)&c,
    pProj,
    id,
    type);
  v25 = 0i64;
  v23 = &v22;
  v22 = 0i64;
  c.m_ptr = (extension::AsyncContent<CharaDataUnify> *)&v21;
  v21 = 0i64;
  obj._Mypair._Myval2 = v17;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
    &extension::AsyncWorker::s_instance.m_loadJobConsumer.m_jobQueue,
    (std::unique_ptr<extension::ExThread::Runnable>)&obj);
  if ( v21 )
    (**v21)(v21, 1i64);
  if ( v22 )
    (**v22)(v22, 1i64);
}

extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > *__fastcall extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::LoadStart(
        extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > *result,
        const std::string *name,
        const std::string *optstr,
        const extension::FutureAssetOption *opt)
{
  extension::AsyncContent<extension::AsyncAsset> *v8; // rax
  extension::AsyncContent<extension::AsyncAsset> *v9; // rbx
  extension::AsyncContent<extension::AsyncAsset> *v11; // [rsp+28h] [rbp-30h] BYREF
  extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > shared; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  extension::AsyncContent<extension::AsyncAsset> **v14; // [rsp+40h] [rbp-18h]

  v13 = -2i64;
  shared.m_ptr = (extension::AsyncContent<extension::AsyncAsset> *)operator new(0x68ui64);
  extension::AsyncContent<OGLSecondary>::AsyncContent<OGLSecondary>(
    (extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *)shared.m_ptr,
    name,
    optstr);
  result->m_ptr = v8;
  v11 = v8;
  if ( v8 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 1ui64);
    v8 = v11;
  }
  v14 = &v11;
  shared.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 1ui64);
  extension::future_asset_detail::EnqueueFutureAssetJob(
    (extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >)&shared,
    opt);
  v9 = v11;
  if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFui64) == 1 && v9 )
  {
    extension::AsyncContent<extension::AsyncAsset>::~AsyncContent<extension::AsyncAsset>(v9);
    operator delete(v9, 0x68ui64);
  }
  return result;
}

void __fastcall AsyncCharaDataUnifyLoad::AsyncLoadJob::ReceiveBinaryLoad(
        AsyncCharaDataUnifyLoad::AsyncLoadJob *this,
        const char *fileName,
        unsigned __int8 **pBuf,
        unsigned int *size)
{
  extension::AsyncContent<CharaDataUnify> **p_m_ptr; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  std::unique_ptr<CharaDataUnify> v10; // rax
  unsigned __int64 v11; // rdx
  AgFile *m_ptr; // rbx
  unsigned int v13; // eax
  AgPointer<KOFApplication> *v14; // rcx
  unsigned __int8 *v15; // rdx
  CFile v16; // [rsp+20h] [rbp-59h] BYREF
  __int64 v17[2]; // [rsp+70h] [rbp-9h] BYREF
  AgPointer<KOFApplication> v18; // [rsp+80h] [rbp+7h] BYREF
  __int64 v19; // [rsp+90h] [rbp+17h]
  AgPointer<KOFApplication> v20; // [rsp+98h] [rbp+1Fh] BYREF
  char v21; // [rsp+E0h] [rbp+67h] BYREF

  v19 = -2i64;
  *size = 0;
  p_m_ptr = &this[-1].m_content.m_ptr;
  v8 = *((_QWORD *)&this[-1].m_content + 3);
  if ( v8 && (*(_QWORD *)(v8 + 88) & 2) != 0
    || (v9 = *(_QWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 16i64)) != 0
    && (*(_QWORD *)(v9 + 8) & 0x100i64) != 0 )
  {
    if ( p_m_ptr[3] )
    {
      v10._Mypair._Myval2 = (CharaDataUnify *)((__int64 (__fastcall *)(extension::AsyncContent<CharaDataUnify> **, char *))(*p_m_ptr)->m_loadOptionString._Mypair._Myval2._Mysize)(
                                                p_m_ptr,
                                                &v21);
      extension::AsyncContent<CharaDataUnify>::setErrorResultWithData(p_m_ptr[3], 4, v10);
    }
  }
  else
  {
    memset(&v16.pFileName, 0, 28);
    memset(&v16, 0, 28);
    v20 = 0i64;
    AgPointer<AgUser>::~AgPointer<AgUser>(&v20);
    if ( (unsigned __int8)CFile::copen(&v16, fileName, 0, 1) )
    {
      m_ptr = v16.m_file.m_ptr;
      if ( v16.m_file.m_ptr )
      {
        v13 = v16.m_file.m_ptr->getSize(v16.m_file.m_ptr);
        *size = v13;
        if ( v13 )
        {
          v15 = (unsigned __int8 *)operator new[](v13);
          *pBuf = v15;
          if ( v15 )
            m_ptr->read(m_ptr, v15, *size);
          v18.m_ref = v16.m_file.m_ref;
          v18.m_ptr = (KOFApplication *)m_ptr;
          v14 = &v18;
        }
        else
        {
          v17[0] = (__int64)v16.m_file.m_ref;
          v17[1] = (__int64)m_ptr;
          v14 = (AgPointer<KOFApplication> *)v17;
        }
        v16.m_file = 0i64;
        AgPointer<AgUser>::~AgPointer<AgUser>(v14);
      }
      else
      {
        *size = 0;
      }
      *(_QWORD *)&v16.m_iSeekPos = 0i64;
    }
    if ( v16.fNameIndex )
    {
      operator delete(v16.fNameIndex, v11);
      v16.fNameIndex = 0i64;
    }
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v16);
  }
}

void __fastcall AppMain::ST_BattleLoadingDraw(AppMain *this)
{
  bool v1; // zf
  GraphicsOpt *g; // rcx
  Graphics *v4; // rcx
  Graphics *v5; // rcx

  v1 = this->iLoadingCount == 11;
  g = this->g;
  if ( v1 )
  {
    GraphicsOpt::lock(g);
    Graphics::clearScreen(v4, -16777216);
    Graphics::drawStack(this->g->g);
    if ( this->bAT_InitializeTpose )
    {
      this->bAT_InitializeTpose = 0;
      ++this->iLoadingCount;
    }
    else
    {
      AppMain::ModelRoomDrawTPose(this, 1.0);
      AppMain::ModelRoomReleaseBufferTPose(this);
      this->bAT_InitializeTpose = 1;
    }
  }
  else
  {
    GraphicsOpt::lock(g);
    Graphics::clearScreen(v5, -16777216);
    if ( !this->m_bFadeEnd && this->m_iFadeAlpha )
      AppMain::DrawCapture(this);
    Graphics::drawStack(this->g->g);
  }
}

void __fastcall AppMain::ST_BattleLoadingExit(AppMain *this)
{
  BattleSystem::BattleController *v1; // r11
  BattleSystem::BattleController *v2; // rax
  __int64 v3; // r11
  BattleSystem::BattleController *v4; // rax
  BattleSystem::BattleController *v5; // [rsp+40h] [rbp+8h]
  BattleSystem::BattleController *v6; // [rsp+40h] [rbp+8h]

  v1 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v5 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v5);
    v1 = v2;
    BattleSystem::BattleController::instance = v2;
  }
  BattleSystem::BattleController::SetLoadComplete(v1);
  if ( v3 )
  {
    *(_BYTE *)(v3 + 246481) = 0;
  }
  else
  {
    v6 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v6);
    BattleSystem::BattleController::instance = v4;
    v4->loadedInfo.m_bInitialLoading = 0;
  }
}

void __fastcall AppMain::ST_BattleLoadingInit(AppMain *this)
{
  BattleSystem::BattleController *v2; // rcx
  BattleSystem::BattleController *v3; // rax
  __int64 iMemberReferIndex; // rax
  int v5; // eax
  BattleSystem::BattleController *v6; // rax
  __int64 v7; // rax
  int v8; // eax
  BattleSystem::BattleController *v9; // rax
  __int64 v10; // rax
  int v11; // eax
  BattleSystem::BattleController *v12; // rax
  __int64 v13; // rax
  int v14; // eax
  BattleSystem::BattleController *v15; // rax
  __int64 v16; // rax
  CHARACTER_NO v17; // ecx
  BattleSystem::BattleController *v18; // rcx
  BattleSystem::BattleController *v19; // rax
  __int64 v20; // rax
  int v21; // eax
  BattleSystem::BattleController *v22; // rax
  __int64 v23; // rax
  CHARACTER_NO v24; // ecx
  int *v25; // rcx
  BattleSystem::BattleController *v26; // rax
  __int64 v27; // rax
  int v28; // eax
  BattleSystem::BattleController *v29; // rax
  BattleSystem::BattleController *v30; // rax
  GfxManager *v31; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  __int64 *v33; // rax
  __int64 v34; // rbx
  int v35; // ecx
  GameDataInfo *v36; // rcx
  Scene_RoomMember *pScene; // rbx
  RoomMembers *m_pRoomMembers; // rax
  BattleSystem::BattleController *v39; // [rsp+50h] [rbp+8h]
  BattleSystem::BattleController *v40; // [rsp+50h] [rbp+8h]
  BattleSystem::BattleController *v41; // [rsp+50h] [rbp+8h]
  BattleSystem::BattleController *v42; // [rsp+50h] [rbp+8h]
  BattleSystem::BattleController *v43; // [rsp+50h] [rbp+8h]
  BattleSystem::BattleController *v44; // [rsp+50h] [rbp+8h]
  BattleSystem::BattleController *v45; // [rsp+50h] [rbp+8h]
  BattleSystem::BattleController *v46; // [rsp+50h] [rbp+8h]
  BattleSystem::BattleController *v47; // [rsp+50h] [rbp+8h]
  BattleSystem::BattleController *v48; // [rsp+50h] [rbp+8h]
  GfxManager *v49; // [rsp+50h] [rbp+8h]

  this->ModelRoomSettings.visibleFlg &= 0xFFFFFFAF;
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v39 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v39);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  iMemberReferIndex = v2->playerInfo[0].iMemberReferIndex;
  if ( v2->playerInfo[0].iMemberCount > (int)iMemberReferIndex )
    v5 = v2->playerInfo[0].charaNo[iMemberReferIndex];
  else
    v5 = -1;
  this->ModelRoomSettings.CharaInfo[0].iNo = v5;
  if ( !v2 )
  {
    v40 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v40);
    v2 = v6;
    BattleSystem::BattleController::instance = v6;
  }
  v7 = v2->playerInfo[0].iMemberReferIndex;
  if ( v2->playerInfo[0].iMemberCount > (int)v7 )
    v8 = v2->playerInfo[0].iCharaColor[v7];
  else
    v8 = -1;
  this->ModelRoomSettings.CharaInfo[0].iColor = v8;
  this->ModelRoomSettings.CharaInfo[0].iModelEffect = 0;
  if ( !v2 )
  {
    v41 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v41);
    v2 = v9;
    BattleSystem::BattleController::instance = v9;
  }
  v10 = v2->playerInfo[1].iMemberReferIndex;
  if ( v2->playerInfo[1].iMemberCount > (int)v10 )
    v11 = v2->playerInfo[1].charaNo[v10];
  else
    v11 = -1;
  this->ModelRoomSettings.CharaInfo[1].iNo = v11;
  if ( !v2 )
  {
    v42 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v42);
    v2 = v12;
    BattleSystem::BattleController::instance = v12;
  }
  v13 = v2->playerInfo[1].iMemberReferIndex;
  if ( v2->playerInfo[1].iMemberCount > (int)v13 )
    v14 = v2->playerInfo[1].iCharaColor[v13];
  else
    v14 = -1;
  this->ModelRoomSettings.CharaInfo[1].iColor = v14;
  this->ModelRoomSettings.CharaInfo[1].iModelEffect = 0;
  if ( !v2 )
  {
    v43 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v43);
    v2 = v15;
    BattleSystem::BattleController::instance = v15;
  }
  v16 = v2->playerInfo[0].iMemberReferIndex;
  if ( v2->playerInfo[0].iMemberCount > (int)v16 )
    v17 = v2->playerInfo[0].charaNo[v16];
  else
    v17 = CHARACTER_NO_NONE;
  this->ModelRoomSettings.CharaInfo[2].iNo = BattleSystem::BattlePlayerInfo::GetSupportCharaID(v17);
  v18 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v44 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v44);
    v18 = v19;
    BattleSystem::BattleController::instance = v19;
  }
  v20 = v18->playerInfo[0].iMemberReferIndex;
  if ( v18->playerInfo[0].iMemberCount > (int)v20 )
    v21 = v18->playerInfo[0].iCharaColor[v20];
  else
    v21 = -1;
  this->ModelRoomSettings.CharaInfo[2].iColor = v21;
  this->ModelRoomSettings.CharaInfo[2].iModelEffect = 0;
  if ( !v18 )
  {
    v45 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v45);
    v18 = v22;
    BattleSystem::BattleController::instance = v22;
  }
  v23 = v18->playerInfo[1].iMemberReferIndex;
  if ( v18->playerInfo[1].iMemberCount > (int)v23 )
    v24 = v18->playerInfo[1].charaNo[v23];
  else
    v24 = CHARACTER_NO_NONE;
  this->ModelRoomSettings.CharaInfo[3].iNo = BattleSystem::BattlePlayerInfo::GetSupportCharaID(v24);
  v25 = (int *)BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v46 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v46);
    v25 = (int *)v26;
    BattleSystem::BattleController::instance = v26;
  }
  v27 = v25[61580];
  if ( v25[61579] > (int)v27 )
    v28 = v25[v27 + 61576];
  else
    v28 = -1;
  this->ModelRoomSettings.CharaInfo[3].iColor = v28;
  this->ModelRoomSettings.CharaInfo[3].iModelEffect = 0;
  if ( !v25 )
  {
    v47 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v47);
    v25 = (int *)v29;
    BattleSystem::BattleController::instance = v29;
  }
  this->ModelRoomSettings.StageInfo.iNo = v25[61520];
  this->ModelRoomSettings.motionBlurFrame = -1;
  this->ModelRoomSettings.motionBlurMaxFrames = 5;
  *(_WORD *)this->ModelRoomSettings.motionBlurShowBit = 3855;
  AppMain::ClearMotionBlurFrames(this, 0);
  AppMain::ClearMotionBlurFrames(this, 1);
  *(_QWORD *)&this->iLoadingCount = 0i64;
  this->iLoadingTimer = 0;
  SyncMenuImage::Release(&this->m_SyncMenuBG);
  v30 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v48 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v48);
    BattleSystem::BattleController::instance = v30;
  }
  if ( v30->loadedInfo.m_bInitialLoading )
  {
    v31 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v49 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v49);
      GfxManager::instance = v31;
    }
    m_ptr = v31->m_GFXMovieBG.m_movieProxy.m_ptr;
    v31->m_GFXMovieBG.m_movieProxy.m_ptr = 0i64;
    if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::gfxi_detail::MovieProxy::~MovieProxy(m_ptr);
      operator delete(m_ptr, 0xE8ui64);
    }
  }
  v33 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v34 = *v33;
  v35 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v33 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v35 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v35 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_FREEMATCH )
    goto LABEL_59;
  if ( v35 > *(_DWORD *)(v34 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v36);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_ONLINETRAINING )
  {
LABEL_59:
    pScene = this->m_onlineRoomMemberParams.pScene;
    if ( pScene )
    {
      if ( !pScene->isError(this->m_onlineRoomMemberParams.pScene) )
      {
        m_pRoomMembers = pScene->m_pRoomMembers;
        if ( m_pRoomMembers )
        {
          m_pRoomMembers->m_alpha.m_power = -0.1;
          m_pRoomMembers->m_alpha.m_bAnimation = 1;
        }
      }
    }
  }
  if ( !this->m_iFadeAlpha )
  {
    this->m_bFadeEnd = 0;
    this->m_iFadeFrame = 20;
    *(_QWORD *)&this->m_iFadeColor.rgba = 255i64;
    this->m_iFadeRate = 50 * this->m_iFadeColor.s.a;
    this->m_bFadeLock = 0;
    this->m_FuncFT = 170;
  }
  this->iReserveScene = -1;
  this->m_FuncST = 184;
  this->m_FuncBT = 185;
  AppMain::SceneFunc(this, 184);
}

void __fastcall AppMain::ST_BattleLoadingLoop(AppMain *this, __int64 a2, float a3)
{
  BattleSystem::BattleController *v4; // r14
  BattleSystem::BattleController *v5; // rax
  OGLModel *v6; // r15
  __int64 v7; // r12
  OGLRender *m_pRender; // rax
  EasyIndicator *v9; // rbx
  AppMain *v10; // rcx
  BattleStage *v11; // r9
  int iLoadingCount; // er8
  STAGE_ID v13; // edx
  __int64 iMemberReferIndex; // rax
  int v15; // er9
  __int64 v16; // rax
  int v17; // er8
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  CHARACTER_NO v21; // ecx
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // rax
  CHARACTER_NO v25; // ecx
  int SupportCharaID; // eax
  __int64 v27; // rax
  CHARACTER_NO v28; // ecx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rax
  int v34; // er9
  __int64 v35; // rax
  int v36; // er8
  __int64 v37; // rax
  int v38; // ecx
  __int64 v39; // rax
  CHARACTER_NO v40; // ecx
  __int64 v41; // rax
  int v42; // ebx
  __int64 v43; // rax
  CHARACTER_NO v44; // ecx
  int v45; // eax
  __int64 v46; // rax
  CHARACTER_NO v47; // ecx
  AppMain::ShaderEnsureThreadHost *m_shaderEnsureThreadHost; // rbx
  const std::string *DataFilePath; // rax
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache *v50; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *m_ptr; // rcx
  AppMain *v52; // rcx
  AppMain *v53; // rcx
  AppMain *v54; // rcx
  AppMain *v55; // rcx
  STAGE_ID v56; // edx
  STAGE_ID v57; // er12
  __int64 v58; // rax
  int v59; // er13
  CHARACTER_NO BaseCharaID; // eax
  __int64 v61; // rax
  CHARACTER_NO v62; // eax
  __int64 v63; // rax
  int v64; // eax
  __int64 v65; // rcx
  int v66; // edx
  int v67; // er8
  _DWORD *v68; // rcx
  __int64 v69; // rax
  int v70; // edi
  CharaProjectData *v71; // rbx
  int CharaDataIndex; // eax
  char *DirectoryName; // r8
  char *v74; // rcx
  char *v75; // rax
  __int64 v76; // rax
  int v77; // eax
  __int64 v78; // rcx
  int v79; // edx
  _DWORD *v80; // rcx
  __int64 v81; // rax
  char *v82; // r8
  char *v83; // rcx
  char *v84; // rax
  float y; // xmm2_4
  float x; // xmm1_4
  float shadLightRadius; // xmm0_4
  OGLRender *v88; // rcx
  OGLRender *v89; // rax
  __int64 v90; // r9
  OGLRender *v91; // rcx
  OGLRender *v92; // rcx
  OGLRender *v93; // rcx
  OGLRender *v94; // rcx
  int v95; // er9
  BattleStage *v96; // rax
  STAGE_ID v97; // er8
  BattleStage *pBattleStage; // rcx
  GameDataInfo *Instance; // rax
  bool IsOnlineMode; // al
  __int64 v101; // rcx
  __int64 v102; // r8
  BattleReplay *v103; // rcx
  const char *v104; // rdx
  CHARACTER_NO v105; // er13
  extension::AsyncContent<OGLFigure> *v106; // rcx
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache *v107; // rcx
  __int64 v108; // rdx
  std::integral_constant<bool,0> v109; // r9
  std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *v110; // r8
  __int64 v111; // rax
  int v112; // ebx
  __int64 v113; // rax
  CHARACTER_NO v114; // ecx
  int v115; // edi
  std::string *Ptr; // r8
  std::string *v117; // rax
  std::string *v118; // r8
  std::string *v119; // rax
  std::string *v120; // r8
  std::string *v121; // rax
  std::string *v122; // r8
  AppMain *v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rax
  int v127; // ebx
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rax
  int v131; // edi
  std::string *v132; // r8
  std::string *v133; // rax
  std::string *v134; // r8
  std::string *v135; // rax
  std::string *v136; // r8
  std::string *v137; // rax
  std::string *v138; // r8
  extension::AsyncStatus::Step v139; // edx
  CharaDataUnify *Obj; // rax
  __int64 v141; // rbx
  __int64 v142; // rdi
  AsyncCharaDataUnifyLoad *m_SupportCharaDataLoad; // r12
  extension::AsyncStatus::Step v144; // edx
  CharaDataUnify *v145; // rax
  extension::AsyncStatus::Step v146; // edx
  CharaDataUnify *v147; // rax
  GfxManager *v148; // rax
  GfxManager *v149; // rax
  __int64 v150; // rax
  GfxManager *v151; // rax
  int v152; // er9
  OGLRender *v153; // rax
  extension::AsyncStatus::Step v154; // edx
  extension::exsound_detail::SoundBankImpl *v155; // rax
  OGLModel *v156; // r11
  OGLModel *v157; // r11
  OGLModel *v158; // r11
  extension::AsyncStatus::Step v159; // edx
  extension::exsound_detail::SoundBankImpl *v160; // rax
  OGLModel *v161; // r11
  OGLModel *v162; // r11
  OGLModel *v163; // r11
  __int64 v164; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v165; // r8
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *v166; // rdx
  extension::exsound_detail::SoundBankImpl *v167; // rax
  OGLModel *v168; // r11
  OGLModel *v169; // r11
  OGLModel *v170; // r11
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v171; // rdx
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *v172; // rcx
  extension::exsound_detail::SoundBankImpl *v173; // rax
  AppMain::ShaderEnsureThreadHost *v174; // rbx
  BattleSystem::BattleController *v175; // [rsp+30h] [rbp-D0h]
  STAGE_ID battleStageID; // [rsp+30h] [rbp-D0h]
  BattleStage *v177; // [rsp+30h] [rbp-D0h]
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> other; // [rsp+38h] [rbp-C8h] BYREF
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> v179; // [rsp+48h] [rbp-B8h] BYREF
  extension::FutureFigureOption v180; // [rsp+58h] [rbp-A8h] BYREF
  std::string v181; // [rsp+78h] [rbp-88h] BYREF
  std::string v182; // [rsp+98h] [rbp-68h] BYREF
  __int64 v183; // [rsp+B8h] [rbp-48h]
  std::string v184; // [rsp+C0h] [rbp-40h] BYREF
  std::string v185; // [rsp+E0h] [rbp-20h] BYREF
  std::string _Right; // [rsp+100h] [rbp+0h] BYREF
  std::string result; // [rsp+120h] [rbp+20h] BYREF
  std::string v188; // [rsp+140h] [rbp+40h] BYREF
  std::string v189; // [rsp+160h] [rbp+60h] BYREF
  std::string v190; // [rsp+180h] [rbp+80h] BYREF
  std::string v191; // [rsp+1A0h] [rbp+A0h] BYREF
  std::string v192; // [rsp+1C0h] [rbp+C0h] BYREF
  std::string v193; // [rsp+1E0h] [rbp+E0h] BYREF
  __m128i Src; // [rsp+200h] [rbp+100h] BYREF
  __int128 v195[3]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v196; // [rsp+240h] [rbp+140h]
  int v197; // [rsp+248h] [rbp+148h]
  char v198; // [rsp+24Ch] [rbp+14Ch]
  char v199; // [rsp+24Fh] [rbp+14Fh] BYREF
  char outBuf[512]; // [rsp+250h] [rbp+150h] BYREF
  char bank_file_path[512]; // [rsp+450h] [rbp+350h] BYREF

  v183 = -2i64;
  v4 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v175 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v175);
    v4 = v5;
    BattleSystem::BattleController::instance = v5;
  }
  Src = _mm_load_si128((const __m128i *)&_xmm);
  v6 = 0i64;
  LODWORD(v7) = 0;
  if ( this->iLoadingCount != 11 )
  {
    m_pRender = this->m_pRender;
    *(_QWORD *)m_pRender->m_sModelStackCount = 0i64;
    *(_QWORD *)&m_pRender->m_sModelStackCount[2] = 0i64;
    *(_QWORD *)&m_pRender->m_sModelStackCount[4] = 0i64;
    *(_QWORD *)&m_pRender->m_sModelStackCount[6] = 0i64;
  }
  v9 = EasyIndicator::instance;
  if ( !EasyIndicator::instance )
  {
    v9 = (EasyIndicator *)operator new(0x150ui64);
    memset(v9->m_IndicatorStack, 0, sizeof(v9->m_IndicatorStack));
    v9->m_Image = 0i64;
    v9->m_DrawCount = 0;
    EasyIndicator::instance = v9;
  }
  EasyIndicator::RequestDraw(v9, 1760 * GAME_SCREEN_WIDTH / 1920, 920 * GAME_SCREEN_HEIGHT / 1080, TYPE_LOADING);
  iLoadingCount = this->iLoadingCount;
  switch ( iLoadingCount )
  {
    case 1:
      if ( AppMain::battleShaderLoad(this) )
      {
        AppMain::InitLightData(this);
        AppMain::setupModelRoomSettings(this);
        if ( BattleSystem::BattleController::IsNeedLoadChara(v4, PLAYER_ID_1P) )
        {
          iMemberReferIndex = v4->playerInfo[0].iMemberReferIndex;
          v15 = -1;
          if ( v4->playerInfo[0].iMemberCount > (int)iMemberReferIndex )
            v15 = v4->playerInfo[0].iCharaColor[iMemberReferIndex];
          v16 = v4->playerInfo[0].iMemberReferIndex;
          v17 = -1;
          if ( v4->playerInfo[0].iMemberCount > (int)v16 )
            v17 = v4->playerInfo[0].charaNo[v16];
          AppMain::SetUpPlayerAsset(
            this,
            (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                               + 32i64),
            v17,
            v15,
            0);
          v18 = v4->playerInfo[0].iMemberReferIndex;
          if ( v4->playerInfo[0].iMemberCount > (int)v18 )
            v19 = v4->playerInfo[0].charaNo[v18];
          else
            v19 = -1;
          Src.m128i_i32[0] = v19;
          LODWORD(v7) = 1;
          v20 = v4->playerInfo[0].iMemberReferIndex;
          v21 = CHARACTER_NO_NONE;
          if ( v4->playerInfo[0].iMemberCount > (int)v20 )
            v21 = v4->playerInfo[0].charaNo[v20];
          if ( (unsigned int)BattleSystem::BattlePlayerInfo::GetSupportCharaID(v21) != -1 )
          {
            v22 = v4->playerInfo[0].iMemberReferIndex;
            v23 = -1;
            if ( v4->playerInfo[0].iMemberCount > (int)v22 )
              v23 = v4->playerInfo[0].iCharaColor[v22];
            v24 = v4->playerInfo[0].iMemberReferIndex;
            v25 = CHARACTER_NO_NONE;
            if ( v4->playerInfo[0].iMemberCount > (int)v24 )
              v25 = v4->playerInfo[0].charaNo[v24];
            SupportCharaID = BattleSystem::BattlePlayerInfo::GetSupportCharaID(v25);
            AppMain::SetUpPlayerAsset(
              this,
              (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                                 + 64i64),
              SupportCharaID,
              v23,
              0);
            v27 = v4->playerInfo[0].iMemberReferIndex;
            v28 = CHARACTER_NO_NONE;
            if ( v4->playerInfo[0].iMemberCount > (int)v27 )
              v28 = v4->playerInfo[0].charaNo[v27];
            Src.m128i_i32[1] = BattleSystem::BattlePlayerInfo::GetSupportCharaID(v28);
            LODWORD(v7) = 2;
          }
        }
        v29 = v4->playerInfo[1].iMemberReferIndex;
        if ( v4->playerInfo[1].iMemberCount > (int)v29 )
          v30 = v4->playerInfo[1].charaNo[v29];
        else
          v30 = -1;
        if ( v4->loadedInfo.loadedChara[1].charaNo != v30
          || ((v31 = v4->playerInfo[1].iMemberReferIndex, v4->playerInfo[1].iMemberCount > (int)v31) ? (v32 = v4->playerInfo[1].iCharaColor[v31]) : (v32 = -1),
              v4->loadedInfo.loadedChara[1].iCharaColor != v32) )
        {
          v33 = v4->playerInfo[1].iMemberReferIndex;
          v34 = -1;
          if ( v4->playerInfo[1].iMemberCount > (int)v33 )
            v34 = v4->playerInfo[1].iCharaColor[v33];
          v35 = v4->playerInfo[1].iMemberReferIndex;
          v36 = -1;
          if ( v4->playerInfo[1].iMemberCount > (int)v35 )
            v36 = v4->playerInfo[1].charaNo[v35];
          AppMain::SetUpPlayerAsset(
            this,
            (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                               + 48i64),
            v36,
            v34,
            0);
          v37 = v4->playerInfo[1].iMemberReferIndex;
          v38 = -1;
          if ( v4->playerInfo[1].iMemberCount > (int)v37 )
            v38 = v4->playerInfo[1].charaNo[v37];
          Src.m128i_i32[(unsigned int)v7] = v38;
          v7 = (unsigned int)(v7 + 1);
          v39 = v4->playerInfo[1].iMemberReferIndex;
          v40 = CHARACTER_NO_NONE;
          if ( v4->playerInfo[1].iMemberCount > (int)v39 )
            v40 = v4->playerInfo[1].charaNo[v39];
          if ( (unsigned int)BattleSystem::BattlePlayerInfo::GetSupportCharaID(v40) != -1 )
          {
            v41 = v4->playerInfo[1].iMemberReferIndex;
            v42 = -1;
            if ( v4->playerInfo[1].iMemberCount > (int)v41 )
              v42 = v4->playerInfo[1].iCharaColor[v41];
            v43 = v4->playerInfo[1].iMemberReferIndex;
            v44 = CHARACTER_NO_NONE;
            if ( v4->playerInfo[1].iMemberCount > (int)v43 )
              v44 = v4->playerInfo[1].charaNo[v43];
            v45 = BattleSystem::BattlePlayerInfo::GetSupportCharaID(v44);
            AppMain::SetUpPlayerAsset(
              this,
              (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                                 + 80i64),
              v45,
              v42,
              0);
            v46 = v4->playerInfo[1].iMemberReferIndex;
            v47 = CHARACTER_NO_NONE;
            if ( v4->playerInfo[1].iMemberCount > (int)v46 )
              v47 = v4->playerInfo[1].charaNo[v46];
            Src.m128i_i32[v7] = BattleSystem::BattlePlayerInfo::GetSupportCharaID(v47);
            LODWORD(v7) = v7 + 1;
          }
        }
        if ( *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2197496i64)
          || ((unsigned int (__fastcall *)(AgSingleton<AgSystemManager> *))AgSingleton<AgSystemManager>::ms_instance->__vftable[3].~AgSingleton<AgSystemManager>)(AgSingleton<AgSystemManager>::ms_instance)
           - 1 <= 0x7FE )
        {
          AppMain::unloadStageShaders(this, v13);
        }
        battleStageID = v4->battleInfo.battleStageID;
        g_stage = battleStageID;
        g_numChars = v7;
        if ( (_DWORD)v7 )
          memmove(g_chars, &Src, 4i64 * (unsigned int)v7);
        m_shaderEnsureThreadHost = this->m_shaderEnsureThreadHost;
        EnterCriticalSection((LPCRITICAL_SECTION)&m_shaderEnsureThreadHost->m_workMutex);
        *(__m128i *)m_shaderEnsureThreadHost->m_chars = Src;
        m_shaderEnsureThreadHost->m_numChars = v7;
        m_shaderEnsureThreadHost->m_stage = battleStageID;
        WakeConditionVariable((PCONDITION_VARIABLE)&m_shaderEnsureThreadHost->m_wakeCondition.m_data);
        LeaveCriticalSection((LPCRITICAL_SECTION)&m_shaderEnsureThreadHost->m_workMutex);
        if ( !v4->loadedInfo.bLoadedCommonData )
        {
          CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), 999);
          DataFilePath = CharaProjectData::GetDataFilePath(
                           *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                           &result,
                           999,
                           ASSET_FILE);
          other.m_isNoCache = 0;
          v181._Mypair._Myval2._Myres = 15i64;
          v181._Mypair._Myval2._Mysize = 0i64;
          v181._Mypair._Myval2._Bx._Buf[0] = 0;
          std::string::assign(&v181, DataFilePath, 0i64, 0xFFFFFFFFFFFFFFFFui64);
          extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache::getCachedOrLoadStart(
            v50,
            (extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> *)&other.m_body,
            &v181,
            0i64);
          extension::BasicFutureObject<OGLSecondary,void>::operator=(
            (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                          + 16i64),
            &other);
          m_ptr = other.m_body.m_ptr;
          if ( other.m_body.m_ptr )
          {
            if ( _InterlockedExchangeAdd64(
                   (volatile signed __int64 *)&other.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
                   0xFFFFFFFFFFFFFFFFui64) == 1 )
              ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
                m_ptr,
                1i64);
          }
          std::string::~string(&result);
        }
        goto LABEL_61;
      }
      break;
    case 2:
      if ( !extension::FutureObjectSpec::s_futureObjectJobCount.m_value._My_val )
      {
        AppMain::SetUpPlayerModel(
          v10,
          this->ModelRoomSettings.CharaInfo,
          (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                             + 32i64),
          (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                             + 48i64),
          1);
        AppMain::SetUpPlayerModel(
          v52,
          &this->ModelRoomSettings.CharaInfo[1],
          (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                             + 48i64),
          (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                             + 32i64),
          1);
        AppMain::SetUpPlayerModel(
          v53,
          &this->ModelRoomSettings.CharaInfo[2],
          (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                             + 64i64),
          (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                             + 48i64),
          1);
        AppMain::SetUpPlayerModel(
          v54,
          &this->ModelRoomSettings.CharaInfo[3],
          (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                             + 80i64),
          (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                             + 32i64),
          1);
        v56 = v4->battleInfo.battleStageID;
        if ( v56 == v4->loadedInfo.loadedStageID )
          goto LABEL_61;
        AppMain::ModelRoomLoadStage(v55, v56);
        ++this->iLoadingCount;
      }
      break;
    case 3:
      if ( !extension::FutureObjectSpec::s_futureObjectJobCount.m_value._My_val )
      {
        v57 = v4->battleInfo.battleStageID;
        v58 = v4->playerInfo[0].iMemberReferIndex;
        v59 = -1;
        if ( v4->playerInfo[0].iMemberCount > (int)v58 )
          BaseCharaID = (unsigned int)BattleSystem::BattlePlayerInfo::GetBaseCharaID(v4->playerInfo[0].charaNo[v58]);
        else
          BaseCharaID = CHARACTER_NO_NONE;
        if ( StageProjectData::GetCharacterLightFilePath(
               *(StageProjectData **)(*(_QWORD *)&AppMain::pApp + 11056i64),
               v57,
               BaseCharaID,
               outBuf,
               512) )
        {
          AppMain::loadCharacterLightData(this, outBuf, &this->ModelRoomSettings.worldLightData, 0);
        }
        v61 = v4->playerInfo[1].iMemberReferIndex;
        if ( v4->playerInfo[1].iMemberCount > (int)v61 )
          v62 = (unsigned int)BattleSystem::BattlePlayerInfo::GetBaseCharaID(v4->playerInfo[1].charaNo[v61]);
        else
          v62 = CHARACTER_NO_NONE;
        if ( StageProjectData::GetCharacterLightFilePath(
               *(StageProjectData **)(*(_QWORD *)&AppMain::pApp + 11056i64),
               v57,
               v62,
               outBuf,
               512) )
        {
          AppMain::loadCharacterLightData(this, outBuf, &this->ModelRoomSettings.worldLightData, 1);
        }
        v63 = v4->playerInfo[0].iMemberReferIndex;
        if ( v4->playerInfo[0].iMemberCount > (int)v63 )
          v64 = BattleSystem::BattlePlayerInfo::GetBaseCharaID(v4->playerInfo[0].charaNo[v63]);
        else
          v64 = -1;
        v65 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11056i64);
        v66 = 0;
        v67 = *(_DWORD *)(v65 + 48);
        if ( v67 > 0 )
        {
          v68 = *(_DWORD **)(v65 + 40);
          while ( *v68 != v64 )
          {
            ++v66;
            ++v68;
            if ( v66 >= v67 )
              goto LABEL_95;
          }
          v69 = v4->playerInfo[0].iMemberReferIndex;
          if ( v4->playerInfo[0].iMemberCount > (int)v69 )
            v70 = BattleSystem::BattlePlayerInfo::GetBaseCharaID(v4->playerInfo[0].charaNo[v69]);
          else
            v70 = -1;
          CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), v70);
          v71 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
          CharaDataIndex = CharaProjectData::GetCharaDataIndex(v71, v70);
          if ( v71->iReadErrorID == 1 && CharaDataIndex >= 0 && CharaDataIndex < v71->dataHeader.uiCharaCount )
          {
            sprintf(outBuf, "%s%s/", v71->cFilePath, v71->pCharaData[CharaDataIndex].pNameData[2]);
            DirectoryName = CharaProjectData::GetDirectoryName(
                              *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                              v70);
            v74 = &v199;
            do
              ++v74;
            while ( *v74 );
            strcpy(v74, DirectoryName);
            v75 = &v199;
            do
              ++v75;
            while ( *v75 );
            strcpy(v75, "_SPECLIGHTS.CSV");
            AppMain::loadCharacterSpecialLightSettings(this, outBuf, this->ModelRoomPlayerSpecialLightSettings);
          }
        }
LABEL_95:
        v76 = v4->playerInfo[1].iMemberReferIndex;
        if ( v4->playerInfo[1].iMemberCount > (int)v76 )
          v77 = BattleSystem::BattlePlayerInfo::GetBaseCharaID(v4->playerInfo[1].charaNo[v76]);
        else
          v77 = -1;
        v78 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11056i64);
        v79 = *(_DWORD *)(v78 + 48);
        if ( v79 > 0 )
        {
          v80 = *(_DWORD **)(v78 + 40);
          while ( *v80 != v77 )
          {
            LODWORD(v6) = (_DWORD)v6 + 1;
            ++v80;
            if ( (int)v6 >= v79 )
              goto LABEL_111;
          }
          v81 = v4->playerInfo[1].iMemberReferIndex;
          if ( v4->playerInfo[1].iMemberCount > (int)v81 )
            v59 = BattleSystem::BattlePlayerInfo::GetBaseCharaID(v4->playerInfo[1].charaNo[v81]);
          CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), v59);
          if ( CharaProjectData::GetDirectoryPath(
                 *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                 v59,
                 outBuf) )
          {
            v82 = CharaProjectData::GetDirectoryName(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), v59);
            v83 = &v199;
            do
              ++v83;
            while ( *v83 );
            strcpy(v83, v82);
            v84 = &v199;
            do
              ++v84;
            while ( *v84 );
            strcpy(v84, "_SPECLIGHTS.CSV");
            AppMain::loadCharacterSpecialLightSettings(this, outBuf, &this->ModelRoomPlayerSpecialLightSettings[1]);
          }
        }
LABEL_111:
        if ( !this->pBattleStage )
        {
          if ( StageProjectData::GetLightFilePath(
                 *(StageProjectData **)(*(_QWORD *)&AppMain::pApp + 11056i64),
                 v57,
                 outBuf,
                 512) )
          {
            AppMain::loadBasicLightData(this, outBuf, &this->ModelRoomSettings.worldLightData);
          }
          if ( StageProjectData::GetPostEffectFilePath(
                 *(StageProjectData **)(*(_QWORD *)&AppMain::pApp + 11056i64),
                 v57,
                 outBuf,
                 512) )
          {
            AppMain::loadPostProcessShaderData(this, outBuf, &this->ModelRoomSettings.postprocessSettings);
          }
          y = this->ModelRoomSettings.postprocessSettings.shadowLightAreaSettings.shadLightMinMax.y;
          x = this->ModelRoomSettings.postprocessSettings.shadowLightAreaSettings.shadLightMinMax.x;
          shadLightRadius = this->ModelRoomSettings.postprocessSettings.shadowLightAreaSettings.shadLightRadius;
          v88 = this->m_pRender;
          v88->m_BkgndShadLightAreaSettings.shadLightType = this->ModelRoomSettings.postprocessSettings.shadowLightAreaSettings.shadLightType;
          v88->m_BkgndShadLightAreaSettings.shadLightRadius = shadLightRadius;
          v88->m_BkgndShadLightAreaSettings.shadLightPos = this->ModelRoomSettings.postprocessSettings.shadowLightAreaSettings.shadLightPos;
          v88->m_BkgndShadLightAreaSettings.shadLightMinMax.x = x;
          v88->m_BkgndShadLightAreaSettings.shadLightMinMax.y = y;
          v89 = this->m_pRender;
          *(_OWORD *)&v89->m_BkgndScreenFilterSettings.FilterOn = *(_OWORD *)&this->ModelRoomSettings.postprocessSettings.screenFilter.FilterOn;
          *(_OWORD *)&v89->m_BkgndScreenFilterSettings.PSLevelsOn = *(_OWORD *)&this->ModelRoomSettings.postprocessSettings.screenFilter.PSLevelsOn;
          *(_OWORD *)&v89->m_BkgndScreenFilterSettings.PSLevelsOutBlack = *(_OWORD *)&this->ModelRoomSettings.postprocessSettings.screenFilter.PSLevelsOutBlack;
          *(_OWORD *)v89->m_BkgndScreenFilterSettings.GradientStartColour = *(_OWORD *)this->ModelRoomSettings.postprocessSettings.screenFilter.GradientStartColour;
          *(_QWORD *)&v89->m_BkgndScreenFilterSettings.GradientEndColour[1] = *(_QWORD *)&this->ModelRoomSettings.postprocessSettings.screenFilter.GradientEndColour[1];
          v90 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11056i64);
          if ( *(_DWORD *)v90 == 1 )
          {
            sprintf_s(outBuf, 0x100ui64, "%sCMN_SETTINGS.CSV", *(const char **)(v90 + 56));
            AppMain::loadGlobalShaderData(this, outBuf, &this->ModelRoomSettings.globalShaderSettings);
            v91 = this->m_pRender;
            v91->m_modelFXShaderSettings[0].fxTexCentre[0] = this->ModelRoomSettings.globalShaderSettings.modelFXSettings[0].fxCentre[0];
            v91->m_modelFXShaderSettings[0].fxSpeed[0] = this->ModelRoomSettings.globalShaderSettings.modelFXSettings[0].fxSpeed[0];
            v92 = this->m_pRender;
            v92->m_modelFXShaderSettings[0].fxTexCentre[1] = this->ModelRoomSettings.globalShaderSettings.modelFXSettings[0].fxCentre[1];
            v92->m_modelFXShaderSettings[0].fxSpeed[1] = this->ModelRoomSettings.globalShaderSettings.modelFXSettings[0].fxSpeed[1];
            v93 = this->m_pRender;
            v93->m_modelFXShaderSettings[1].fxTexCentre[0] = this->ModelRoomSettings.globalShaderSettings.modelFXSettings[1].fxCentre[0];
            v93->m_modelFXShaderSettings[1].fxSpeed[0] = this->ModelRoomSettings.globalShaderSettings.modelFXSettings[1].fxSpeed[0];
            v94 = this->m_pRender;
            v94->m_modelFXShaderSettings[1].fxTexCentre[1] = this->ModelRoomSettings.globalShaderSettings.modelFXSettings[1].fxCentre[1];
            v94->m_modelFXShaderSettings[1].fxSpeed[1] = this->ModelRoomSettings.globalShaderSettings.modelFXSettings[1].fxSpeed[1];
          }
        }
        ++this->iLoadingCount;
      }
      break;
    case 4:
      if ( !extension::FutureObjectSpec::s_futureObjectJobCount.m_value._My_val )
      {
        if ( this->pBattleStage != v11 )
          goto LABEL_61;
        AppMain::SetUpStage(this);
        ++this->iLoadingCount;
      }
      break;
    case 5:
      if ( !extension::FutureObjectSpec::s_futureObjectJobCount.m_value._My_val )
      {
        BattleHud::initialize(&this->m_BattleHud);
        AppMain::OnlineInitializeGUIParams(this);
        Fw::Rtc::GetCurrentTick();
        if ( !this->pBattleStage )
        {
          v177 = (BattleStage *)operator new(0x130ui64);
          BattleStage::BattleStage(v177);
          this->pBattleStage = v96;
        }
        v97 = v4->battleInfo.battleStageID;
        if ( v97 == v4->loadedInfo.loadedStageID )
          goto LABEL_61;
        pBattleStage = this->pBattleStage;
        if ( pBattleStage )
          BattleStage::loadResources(
            pBattleStage,
            *(const StageProjectData **)(*(_QWORD *)&AppMain::pApp + 11056i64),
            v97);
        if ( StageProjectData::GetSoundBankFilePath(
               *(StageProjectData **)(*(_QWORD *)&AppMain::pApp + 11056i64),
               v4->battleInfo.battleStageID,
               bank_file_path,
               v95) )
        {
          AppMain::Sound_LoadStage(this, bank_file_path);
        }
        if ( !this->pBattleStage )
          goto LABEL_61;
        Instance = GameDataInfo::getInstance();
        IsOnlineMode = GameDataInfo::IsOnlineMode(Instance);
        if ( *(_BYTE *)(v101 + 4128)
          && ((v103 = &this->SaveDataReplay.m_Replay[*(int *)(v101 + 4132)]) != 0i64 && v103->m_GameRule == 2
           || *(_DWORD *)(v102 + 4i64 * *(int *)(v102 + 2548) + 2508) == 2) )
        {
          v104 = "THE KING OF FIGHTERS";
        }
        else if ( IsOnlineMode )
        {
          v195[0] = *(_OWORD *)(v102 + 3897);
          v195[1] = *(_OWORD *)(v102 + 3913);
          v195[2] = *(_OWORD *)(v102 + 3929);
          v196 = *(_QWORD *)(v102 + 3945);
          v197 = *(_DWORD *)(v102 + 3953);
          v198 = *(_BYTE *)(v102 + 3957);
          v104 = (const char *)v195;
        }
        else
        {
          v104 = (const char *)(*(_QWORD *)&AppMain::pApp + 2205472i64);
        }
        BattleStage::setAuroraVisionMessage(this->pBattleStage, v104);
        ++this->iLoadingCount;
      }
      break;
    case 6:
      if ( !BattleHud::isDetermineLoadingFiles(&this->m_BattleHud)
        && !extension::FutureObjectSpec::s_futureObjectJobCount.m_value._My_val
        && AppMain::Sound_IsLoadComplete(this) )
      {
        ++this->iLoadingCount;
      }
      break;
    case 7:
      Fw::Rtc::GetCurrentTick();
      v105 = CHARACTER_NO_NONE;
      if ( !v4->loadedInfo.bLoadedCommonData )
      {
        v106 = this->m_CharaBaseFigure.m_body.m_ptr->m_content.m_ptr;
        if ( !v106 || v106->m_isDataReleased )
        {
          CharaProjectData::GetDirectoryPath(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), &_Right, 999);
          std::string::append(&_Right, "CMN.obac", 8ui64);
          *(_WORD *)&v180.bMemoryAllocationByCPU = 0;
          memset(&v180.fileSetting, 0, sizeof(v180.fileSetting));
          v180.bBaseFigure = 1;
          v179.m_isNoCache = 0;
          v182._Mypair._Myval2._Myres = 15i64;
          v182._Mypair._Myval2._Mysize = 0i64;
          v182._Mypair._Myval2._Bx._Buf[0] = 0;
          std::string::assign(&v182, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
          extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache::getCachedOrLoadStart(
            v107,
            (extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> *)&v179.m_body,
            &v182,
            &v180);
          extension::BasicFutureObject<OGLSecondary,void>::operator=(
            (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_CharaBaseFigure,
            &v179);
          v110 = (std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *)v179.m_body.m_ptr;
          if ( v179.m_body.m_ptr
            && _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&v179.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            (**(void (__fastcall ***)(std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *, __int64))&v110->std::allocator<extension::FutureAssetOptionFileSetting>)(
              v110,
              1i64);
          }
          extension::FutureFigureOption::~FutureFigureOption(&v180, v108, v110, v109);
          std::string::~string(&_Right);
        }
        AsyncCharaDataUnifyLoad::LoadObj(
          &this->m_CommonCharaDataLoad,
          *(const CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
          999,
          EFFECT);
      }
      if ( BattleSystem::BattleController::IsNeedLoadChara(v4, PLAYER_ID_1P) )
      {
        v111 = v4->playerInfo[0].iMemberReferIndex;
        v112 = -1;
        if ( v4->playerInfo[0].iMemberCount > (int)v111 )
          v112 = v4->playerInfo[0].charaNo[v111];
        v113 = v4->playerInfo[0].iMemberReferIndex;
        v114 = CHARACTER_NO_NONE;
        if ( v4->playerInfo[0].iMemberCount > (int)v113 )
          v114 = v4->playerInfo[0].charaNo[v113];
        v115 = BattleSystem::BattlePlayerInfo::GetSupportCharaID(v114);
        CharaProjectData::GetDataFilePath(
          *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
          &v184,
          v112,
          VERSION_1_MAX);
        if ( v184._Mypair._Myval2._Mysize )
        {
          Ptr = &v184;
          if ( v184._Mypair._Myval2._Myres >= 0x10 )
            Ptr = (std::string *)v184._Mypair._Myval2._Bx._Ptr;
          AppMain::Sound_LoadPCharacter(this, 1, Ptr->_Mypair._Myval2._Bx._Buf);
        }
        v117 = CharaProjectData::GetDataFilePath(
                 *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                 &v188,
                 v112,
                 SOUND_FILE);
        std::string::assign(&v184, v117);
        std::string::~string(&v188);
        if ( v184._Mypair._Myval2._Mysize )
        {
          v118 = &v184;
          if ( v184._Mypair._Myval2._Myres >= 0x10 )
            v118 = (std::string *)v184._Mypair._Myval2._Bx._Ptr;
          AppMain::Sound_LoadAppendPCharacter(this, 1, v118->_Mypair._Myval2._Bx._Buf);
        }
        AsyncCharaDataUnifyLoad::LoadObj(
          this->m_PlayerCharaDataLoad,
          *(const CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
          v112,
          CHARA);
        if ( v115 != -1 )
        {
          v119 = CharaProjectData::GetDataFilePath(
                   *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                   &v189,
                   v115,
                   VERSION_1_MAX);
          std::string::assign(&v184, v119);
          std::string::~string(&v189);
          if ( v184._Mypair._Myval2._Mysize )
          {
            v120 = &v184;
            if ( v184._Mypair._Myval2._Myres >= 0x10 )
              v120 = (std::string *)v184._Mypair._Myval2._Bx._Ptr;
            AppMain::Sound_LoadPCharacter(this, 3, v120->_Mypair._Myval2._Bx._Buf);
          }
          v121 = CharaProjectData::GetDataFilePath(
                   *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                   &v190,
                   v115,
                   SOUND_FILE);
          std::string::assign(&v184, v121);
          std::string::~string(&v190);
          if ( v184._Mypair._Myval2._Mysize )
          {
            v122 = &v184;
            if ( v184._Mypair._Myval2._Myres >= 0x10 )
              v122 = (std::string *)v184._Mypair._Myval2._Bx._Ptr;
            AppMain::Sound_LoadAppendPCharacter(this, 3, v122->_Mypair._Myval2._Bx._Buf);
          }
          AsyncCharaDataUnifyLoad::LoadObj(
            this->m_SupportCharaDataLoad,
            *(const CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
            v115,
            CHARA);
        }
        std::string::~string(&v184);
      }
      if ( BattleSystem::BattleController::IsNeedLoadChara(v4, PLAYER_ID_2P) )
      {
        BattleSystem::BattleController::GetActionSystem();
        v125 = v124;
        v126 = *(int *)(v124 + 246320);
        v127 = -1;
        if ( *(_DWORD *)(v125 + 246316) > (int)v126 )
          v127 = *(_DWORD *)(v125 + 4 * v126 + 246292);
        BattleSystem::BattleController::GetActionSystem();
        v129 = v128;
        v130 = *(int *)(v128 + 246320);
        if ( *(_DWORD *)(v129 + 246316) > (int)v130 )
          v105 = *(_DWORD *)(v129 + 4 * v130 + 246292);
        v131 = BattleSystem::BattlePlayerInfo::GetSupportCharaID(v105);
        CharaProjectData::GetDataFilePath(
          *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
          &v185,
          v127,
          VERSION_1_MAX);
        if ( v185._Mypair._Myval2._Mysize )
        {
          v132 = &v185;
          if ( v185._Mypair._Myval2._Myres >= 0x10 )
            v132 = (std::string *)v185._Mypair._Myval2._Bx._Ptr;
          AppMain::Sound_LoadPCharacter(this, 2, v132->_Mypair._Myval2._Bx._Buf);
        }
        v133 = CharaProjectData::GetDataFilePath(
                 *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                 &v191,
                 v127,
                 SOUND_FILE);
        std::string::assign(&v185, v133);
        std::string::~string(&v191);
        if ( v185._Mypair._Myval2._Mysize )
        {
          v134 = &v185;
          if ( v185._Mypair._Myval2._Myres >= 0x10 )
            v134 = (std::string *)v185._Mypair._Myval2._Bx._Ptr;
          AppMain::Sound_LoadAppendPCharacter(this, 2, v134->_Mypair._Myval2._Bx._Buf);
        }
        AsyncCharaDataUnifyLoad::LoadObj(
          &this->m_PlayerCharaDataLoad[1],
          *(const CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
          v127,
          CHARA);
        if ( v131 != -1 )
        {
          v135 = CharaProjectData::GetDataFilePath(
                   *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                   &v192,
                   v131,
                   VERSION_1_MAX);
          std::string::assign(&v185, v135);
          std::string::~string(&v192);
          if ( v185._Mypair._Myval2._Mysize )
          {
            v136 = &v185;
            if ( v185._Mypair._Myval2._Myres >= 0x10 )
              v136 = (std::string *)v185._Mypair._Myval2._Bx._Ptr;
            AppMain::Sound_LoadPCharacter(this, 4, v136->_Mypair._Myval2._Bx._Buf);
          }
          v137 = CharaProjectData::GetDataFilePath(
                   *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                   &v193,
                   v131,
                   SOUND_FILE);
          std::string::assign(&v185, v137);
          std::string::~string(&v193);
          if ( v185._Mypair._Myval2._Mysize )
          {
            v138 = &v185;
            if ( v185._Mypair._Myval2._Myres >= 0x10 )
              v138 = (std::string *)v185._Mypair._Myval2._Bx._Ptr;
            AppMain::Sound_LoadAppendPCharacter(this, 4, v138->_Mypair._Myval2._Bx._Buf);
          }
          AsyncCharaDataUnifyLoad::LoadObj(
            &this->m_SupportCharaDataLoad[1],
            *(const CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
            v131,
            CHARA);
        }
        std::string::~string(&v185);
      }
      if ( !AppMain::isPreloadingBattleStartAnimation(v123) )
        goto LABEL_61;
      AppMain::entryBattleStartAnimation(this);
      BattleCall::preloadingResources(&this->m_BattleCall);
      ++this->iLoadingCount;
      break;
    case 8:
      if ( !extension::FutureObjectSpec::s_futureObjectJobCount.m_value._My_val && AppMain::Sound_IsLoadComplete(this) )
      {
        Fw::Rtc::GetCurrentTick();
        if ( !v4->loadedInfo.bLoadedCommonData )
        {
          Obj = AsyncCharaDataUnifyLoad::GetObj(&this->m_CommonCharaDataLoad, v139);
          std::unique_ptr<CharaDataUnify>::reset(&this->m_pCommonCharaData, Obj);
        }
        v141 = 0i64;
        v142 = 0i64;
        m_SupportCharaDataLoad = this->m_SupportCharaDataLoad;
        do
        {
          if ( BattleSystem::BattleController::IsNeedLoadChara(v4, (PLAYER_ID)v6) )
          {
            v145 = AsyncCharaDataUnifyLoad::GetObj(&this->m_PlayerCharaDataLoad[v142], v144);
            std::unique_ptr<CharaDataUnify>::reset(&this->m_pPlayerCharaData[v141], v145);
            if ( m_SupportCharaDataLoad->state.m_ptr )
            {
              if ( (m_SupportCharaDataLoad->state.m_ptr->m_status.m_stateFlags.m_value._My_val & 1) != 0 )
              {
                v147 = AsyncCharaDataUnifyLoad::GetObj(&this->m_SupportCharaDataLoad[v142], v146);
                std::unique_ptr<CharaDataUnify>::reset(&this->m_pSupportCharaData[v141], v147);
              }
            }
          }
          LODWORD(v6) = (_DWORD)v6 + 1;
          ++v142;
          ++v141;
          ++m_SupportCharaDataLoad;
        }
        while ( (int)v6 < 2 );
        ++this->iLoadingCount;
      }
      break;
    case 9:
      GfxManager::getInstance();
      GfxManager::LoadRequestSystem(v148);
      GfxManager::getInstance();
      GfxManager::LoadRequestNotification(v149);
      BattleSystem::BattleController::GetActionSystem();
      if ( *(_BYTE *)(v150 + 246481) )
      {
        GfxManager::getInstance();
        GfxManager::LoadRequest(v151, FILE_99_SCREEN_MENU, LoadCompleteEventPause, v152);
        ++this->iLoadingCount;
      }
      else
      {
LABEL_61:
        ++this->iLoadingCount;
      }
      break;
    case 10:
      v153 = this->m_pRender;
      *(_QWORD *)v153->m_sModelStackCount = 0i64;
      *(_QWORD *)&v153->m_sModelStackCount[2] = 0i64;
      *(_QWORD *)&v153->m_sModelStackCount[4] = 0i64;
      *(_QWORD *)&v153->m_sModelStackCount[6] = 0i64;
      AppMain::SetUpModelRoomCamera(this);
      AppMain::SetUpModelRoomLights(this);
      AppMain::SetUpTPose(this);
      v155 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
               (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                             + 32i64),
               v154);
      if ( (int)(v155->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
               - v155->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) <= 0 )
        v156 = 0i64;
      else
        v156 = (OGLModel *)*v155->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
      OGLModel::setMotion(v156, 0);
      OGLModel::resetBoneChange(v157);
      OGLModel::updatePostureTPose(v158, &v158->m_mWorld, a3);
      v160 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
               (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                             + 48i64),
               v159);
      if ( (int)(v160->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
               - v160->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) <= 0 )
        v161 = 0i64;
      else
        v161 = (OGLModel *)*v160->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
      OGLModel::setMotion(v161, 0);
      OGLModel::resetBoneChange(v162);
      OGLModel::updatePostureTPose(v163, &v163->m_mWorld, a3);
      v164 = *(_QWORD *)&AppMain::pApp;
      v165 = *(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> **)(*(_QWORD *)&AppMain::pApp
                                                                                             + 11064i64);
      v166 = v165[4].m_body.m_ptr->m_content.m_ptr;
      if ( v166 && !v166->m_isDataReleased )
      {
        v167 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                 v165 + 4,
                 (extension::AsyncStatus::Step)v166);
        if ( (int)(v167->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
                 - v167->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) <= 0 )
          v168 = 0i64;
        else
          v168 = (OGLModel *)*v167->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
        OGLModel::setMotion(v168, 0);
        OGLModel::resetBoneChange(v169);
        OGLModel::updatePostureTPose(v170, &v170->m_mWorld, a3);
        v164 = *(_QWORD *)&AppMain::pApp;
      }
      v171 = *(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> **)(v164 + 11064);
      v172 = v171[5].m_body.m_ptr->m_content.m_ptr;
      if ( v172 && !v172->m_isDataReleased )
      {
        v173 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                 v171 + 5,
                 (extension::AsyncStatus::Step)v171);
        if ( (int)(v173->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
                 - v173->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) > 0 )
          v6 = (OGLModel *)*v173->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
        OGLModel::setMotion(v6, 0);
        OGLModel::resetBoneChange(v6);
        OGLModel::updatePostureTPose(v6, &v6->m_mWorld, a3);
      }
      this->bAT_InitializeTpose = 0;
      ++this->iLoadingCount;
      break;
    case 11:
      return;
    case 12:
      v174 = this->m_shaderEnsureThreadHost;
      EnterCriticalSection((LPCRITICAL_SECTION)&v174->m_workMutex);
      LeaveCriticalSection((LPCRITICAL_SECTION)&v174->m_workMutex);
      this->bAT_InitializeTpose = 0;
      AppMain::setNonFadeSTExit(this, this->m_iLoadingNextFunc, 186);
      break;
    default:
      this->iLoadingCount = iLoadingCount + 1;
      break;
  }
}

void __fastcall AppMain::ST_ResultLoadingDraw(AppMain *this)
{
  Graphics *v2; // rcx
  BattleSystem::BattleController *v3; // rax
  int v4; // edx
  BattleSystem::BattleController *v5; // [rsp+40h] [rbp+8h]

  GraphicsOpt::lock(this->g);
  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v5 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v5);
    BattleSystem::BattleController::instance = v3;
  }
  if ( v3->resultMember.bFinalKO )
    v4 = -1;
  else
    v4 = -16777216;
  Graphics::clearScreen(v2, v4);
  Graphics::drawStack(this->g->g);
}

void __fastcall AppMain::ST_ResultLoadingInit(AppMain *this)
{
  BattleSystem::BattleController *v2; // rdi
  BattleSystem::BattleController *v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rsi
  int v6; // ecx
  GameDataInfo *v7; // rcx
  Scene_RoomMember *pScene; // rsi
  RoomMembers *m_pRoomMembers; // rax
  int v10; // eax
  BattleSystem::BattleController *v11; // [rsp+60h] [rbp+8h]

  this->ModelRoomSettings.visibleFlg &= 0xFFFFFFAF;
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v11 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v11);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  if ( v2->resultMember.battleWinnerID == COUNTER_HIT )
  {
    if ( v2->resultMember.bTestMode )
    {
      this->ModelRoomSettings.CharaInfo[0].iNo = v2->resultMember.charaNo[0];
      this->ModelRoomSettings.CharaInfo[0].iColor = v2->resultMember.iCharaColor[0];
      this->ModelRoomSettings.CharaInfo[0].iModelEffect = 0;
      this->ModelRoomSettings.CharaInfo[2].iNo = BattleSystem::BattlePlayerInfo::GetSupportCharaID(v2->resultMember.charaNo[0]);
      this->ModelRoomSettings.CharaInfo[2].iColor = v2->resultMember.iCharaColor[0];
      this->ModelRoomSettings.CharaInfo[2].iModelEffect = 0;
    }
    this->ModelRoomSettings.CharaInfo[1].iNo = v2->resultMember.charaNo[1];
    this->ModelRoomSettings.CharaInfo[1].iColor = v2->resultMember.iCharaColor[1];
    this->ModelRoomSettings.CharaInfo[1].iModelEffect = 0;
    this->ModelRoomSettings.CharaInfo[3].iNo = v2->resultMember.charaNo[2];
    this->ModelRoomSettings.CharaInfo[3].iColor = v2->resultMember.iCharaColor[2];
    this->ModelRoomSettings.CharaInfo[3].iModelEffect = 0;
  }
  else if ( v2->resultMember.battleWinnerID == GUARD_CRASH )
  {
    if ( v2->resultMember.bTestMode )
    {
      this->ModelRoomSettings.CharaInfo[1].iNo = v2->resultMember.charaNo[0];
      this->ModelRoomSettings.CharaInfo[1].iColor = v2->resultMember.iCharaColor[0];
      this->ModelRoomSettings.CharaInfo[1].iModelEffect = 0;
      this->ModelRoomSettings.CharaInfo[3].iNo = BattleSystem::BattlePlayerInfo::GetSupportCharaID(v2->resultMember.charaNo[0]);
      this->ModelRoomSettings.CharaInfo[3].iColor = v2->resultMember.iCharaColor[0];
      this->ModelRoomSettings.CharaInfo[3].iModelEffect = 0;
    }
    this->ModelRoomSettings.CharaInfo[0].iNo = v2->resultMember.charaNo[1];
    this->ModelRoomSettings.CharaInfo[0].iColor = v2->resultMember.iCharaColor[1];
    this->ModelRoomSettings.CharaInfo[0].iModelEffect = 0;
    this->ModelRoomSettings.CharaInfo[2].iNo = v2->resultMember.charaNo[2];
    this->ModelRoomSettings.CharaInfo[2].iColor = v2->resultMember.iCharaColor[2];
    this->ModelRoomSettings.CharaInfo[2].iModelEffect = 0;
  }
  this->ModelRoomSettings.motionBlurFrame = -1;
  this->ModelRoomSettings.motionBlurMaxFrames = 5;
  *(_WORD *)this->ModelRoomSettings.motionBlurShowBit = 3855;
  AppMain::ClearMotionBlurFrames(this, 0);
  AppMain::ClearMotionBlurFrames(this, 1);
  v4 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v5 = *v4;
  v6 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v4 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v6 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v6 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_FREEMATCH )
    goto LABEL_19;
  if ( v6 > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v7);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_ONLINETRAINING )
  {
LABEL_19:
    pScene = this->m_onlineRoomMemberParams.pScene;
    if ( pScene )
    {
      if ( !pScene->isError(this->m_onlineRoomMemberParams.pScene) )
      {
        m_pRoomMembers = pScene->m_pRoomMembers;
        if ( m_pRoomMembers )
        {
          m_pRoomMembers->m_alpha.m_power = -0.1;
          m_pRoomMembers->m_alpha.m_bAnimation = 1;
        }
      }
    }
  }
  v10 = 0;
  if ( v2->resultMember.battleWinnerID == REVERSAL )
    v10 = 5;
  this->iLoadingCount = v10;
  this->m_LoadCount00 = 0;
  this->iLoadingTimer = 0;
  this->m_bFadeEnd = 0;
  this->m_FuncFT = 0;
  this->m_FadeExitFunc = 0;
  this->m_bFadeLock = 0;
  this->iReserveScene = -1;
  this->m_FuncST = 200;
  this->m_FuncBT = 201;
  AppMain::SceneFunc(this, 200);
}

void __fastcall AppMain::ST_ResultLoadingLoop(AppMain *this)
{
  BattleSystem::BattleController *v2; // rax
  BattleSystem::ResultMemberInfo *p_resultMember; // rsi
  OGLRender *m_pRender; // rax
  __int64 v5; // r14
  EasyIndicator *v6; // rbx
  bool createShadowFlg; // r9
  extension::AsyncStatus::Step v8; // edx
  CharaDataUnify *Obj; // rax
  __int64 v10; // rsi
  bool *p_bWorking; // rbx
  __int64 v12; // r15
  CharaDataUnify *v13; // rax
  CharaDataUnify *v14; // rax
  extension::AsyncContent<OGLFigure> *v15; // rcx
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache *v16; // rcx
  __int64 v17; // rdx
  std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *v18; // r8
  std::integral_constant<bool,0> v19; // r9
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v20; // rcx
  int v21; // er8
  int v22; // er8
  int v23; // er8
  int v24; // eax
  int v25; // er8
  int v26; // er8
  int v27; // er8
  int v28; // eax
  AppMain *v29; // rcx
  AppMain *v30; // rcx
  AppMain *v31; // rcx
  __int64 v32; // rbx
  CHARACTER_NO BaseCharaNo; // eax
  int v34; // er9
  CHARACTER_NO v35; // eax
  float y; // xmm2_4
  float x; // xmm1_4
  float shadLightRadius; // xmm0_4
  OGLRender *v39; // rcx
  OGLRender *v40; // rax
  __int64 v41; // r9
  OGLRender *v42; // rcx
  OGLRender *v43; // rcx
  OGLRender *v44; // rcx
  OGLRender *v45; // rcx
  __int64 v46; // rbx
  int SupportCharaID; // eax
  __int64 v48; // rbx
  int v49; // eax
  const std::string *DataFilePath; // rax
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache *v51; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *m_ptr; // rcx
  BattleSystem::BattleController *v53; // [rsp+38h] [rbp-D0h]
  BattleSystem::BattleController *v54; // [rsp+38h] [rbp-D0h]
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> other; // [rsp+40h] [rbp-C8h] BYREF
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> v56; // [rsp+50h] [rbp-B8h] BYREF
  extension::FutureFigureOption v57; // [rsp+60h] [rbp-A8h] BYREF
  std::string v58; // [rsp+80h] [rbp-88h] BYREF
  std::string v59; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-48h]
  std::string result; // [rsp+C8h] [rbp-40h] BYREF
  std::string v62; // [rsp+E8h] [rbp-20h] BYREF
  char outBuf[48]; // [rsp+108h] [rbp+0h] BYREF

  v60 = -2i64;
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v53 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v53);
    BattleSystem::BattleController::instance = v2;
    if ( !v2 )
    {
      v54 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v54);
      BattleSystem::BattleController::instance = v2;
    }
  }
  p_resultMember = &v2->resultMember;
  m_pRender = this->m_pRender;
  *(_QWORD *)m_pRender->m_sModelStackCount = 0i64;
  *(_QWORD *)&m_pRender->m_sModelStackCount[2] = 0i64;
  *(_QWORD *)&m_pRender->m_sModelStackCount[4] = 0i64;
  *(_QWORD *)&m_pRender->m_sModelStackCount[6] = 0i64;
  v5 = 0i64;
  v6 = EasyIndicator::instance;
  if ( !EasyIndicator::instance )
  {
    v6 = (EasyIndicator *)operator new(0x150ui64);
    memset(v6->m_IndicatorStack, 0, sizeof(v6->m_IndicatorStack));
    v6->m_Image = 0i64;
    v6->m_DrawCount = 0;
    EasyIndicator::instance = v6;
  }
  EasyIndicator::RequestDraw(v6, 1760 * GAME_SCREEN_WIDTH / 1920, 920 * GAME_SCREEN_HEIGHT / 1080, TYPE_LOADING);
  switch ( this->iLoadingCount )
  {
    case 1:
      if ( !AppMain::battleShaderLoad(this) )
        return;
      AppMain::InitLightData(this);
      AppMain::setupModelRoomSettings(this);
      if ( p_resultMember->battleWinnerID == GUARD_CRASH )
      {
        if ( p_resultMember->bTestMode )
        {
          AppMain::SetUpPlayerAsset(
            this,
            (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                               + 48i64),
            p_resultMember->charaNo[0],
            p_resultMember->iCharaColor[0],
            0);
          v46 = *(_QWORD *)&AppMain::pApp;
          SupportCharaID = BattleSystem::BattlePlayerInfo::GetSupportCharaID(p_resultMember->charaNo[0]);
          AppMain::SetUpPlayerAsset(
            this,
            (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(v46 + 11064)
                                                                                               + 80i64),
            SupportCharaID,
            p_resultMember->iCharaColor[0],
            0);
        }
        AppMain::SetUpPlayerAsset(
          this,
          (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                             + 32i64),
          p_resultMember->charaNo[1],
          p_resultMember->iCharaColor[1],
          1);
        AppMain::SetUpPlayerAsset(
          this,
          (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                             + 64i64),
          p_resultMember->charaNo[2],
          p_resultMember->iCharaColor[2],
          1);
      }
      if ( p_resultMember->battleWinnerID == COUNTER_HIT )
      {
        if ( p_resultMember->bTestMode )
        {
          AppMain::SetUpPlayerAsset(
            this,
            (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                               + 32i64),
            p_resultMember->charaNo[0],
            p_resultMember->iCharaColor[0],
            0);
          v48 = *(_QWORD *)&AppMain::pApp;
          v49 = BattleSystem::BattlePlayerInfo::GetSupportCharaID(p_resultMember->charaNo[0]);
          AppMain::SetUpPlayerAsset(
            this,
            (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(v48 + 11064)
                                                                                               + 64i64),
            v49,
            p_resultMember->iCharaColor[0],
            0);
        }
        AppMain::SetUpPlayerAsset(
          this,
          (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                             + 48i64),
          p_resultMember->charaNo[1],
          p_resultMember->iCharaColor[1],
          1);
        AppMain::SetUpPlayerAsset(
          this,
          (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                             + 80i64),
          p_resultMember->charaNo[2],
          p_resultMember->iCharaColor[2],
          1);
      }
      if ( p_resultMember->bTestMode )
      {
        CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), 999);
        DataFilePath = CharaProjectData::GetDataFilePath(
                         *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                         &v62,
                         999,
                         ASSET_FILE);
        v56.m_isNoCache = 0;
        v59._Mypair._Myval2._Myres = 15i64;
        v59._Mypair._Myval2._Mysize = 0i64;
        v59._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(&v59, DataFilePath, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache::getCachedOrLoadStart(
          v51,
          (extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> *)&v56.m_body,
          &v59,
          0i64);
        extension::BasicFutureObject<OGLSecondary,void>::operator=(
          (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                        + 16i64),
          &v56);
        m_ptr = v56.m_body.m_ptr;
        if ( v56.m_body.m_ptr
          && _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&v56.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
        {
          ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
            m_ptr,
            1i64);
        }
        std::string::~string(&v62);
      }
      goto LABEL_84;
    case 2:
      if ( extension::FutureObjectSpec::s_futureObjectJobCount.m_value._My_val )
        return;
      AppMain::SetUpPlayerModel(
        (AppMain *)(unsigned int)(this->iLoadingCount - 2),
        this->ModelRoomSettings.CharaInfo,
        (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                           + 32i64),
        (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                           + 32i64),
        createShadowFlg);
      AppMain::SetUpPlayerModel(
        v29,
        &this->ModelRoomSettings.CharaInfo[1],
        (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                           + 48i64),
        (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                           + 48i64),
        0);
      AppMain::SetUpPlayerModel(
        v30,
        &this->ModelRoomSettings.CharaInfo[2],
        (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                           + 64i64),
        (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                           + 64i64),
        0);
      AppMain::SetUpPlayerModel(
        v31,
        &this->ModelRoomSettings.CharaInfo[3],
        (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                           + 80i64),
        (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64)
                                                                                           + 80i64),
        0);
      if ( !(unsigned int)BattleSystem::ResultMemberInfo::GetBaseCharaNo(p_resultMember, 0) )
        goto LABEL_61;
      v32 = *(_QWORD *)&AppMain::pApp;
      if ( p_resultMember->battleWinnerID == COUNTER_HIT )
      {
        BaseCharaNo = (unsigned int)BattleSystem::ResultMemberInfo::GetBaseCharaNo(p_resultMember, 0);
        if ( !StageProjectData::GetCharacterLightFilePath(
                *(StageProjectData **)(v32 + 11056),
                STAGE_ID_RES,
                BaseCharaNo,
                outBuf,
                256) )
          goto LABEL_61;
        v34 = 0;
      }
      else
      {
        v35 = (unsigned int)BattleSystem::ResultMemberInfo::GetBaseCharaNo(p_resultMember, 0);
        if ( !StageProjectData::GetCharacterLightFilePath(
                *(StageProjectData **)(v32 + 11056),
                STAGE_ID_RES,
                v35,
                outBuf,
                256) )
          goto LABEL_61;
        v34 = 1;
      }
      AppMain::loadCharacterLightData(this, outBuf, &this->ModelRoomSettings.worldLightData, v34);
LABEL_61:
      if ( p_resultMember->iMemberCount >= 2
        && StageProjectData::GetCharacterLightFilePath(
             *(StageProjectData **)(*(_QWORD *)&AppMain::pApp + 11056i64),
             STAGE_ID_RES,
             CHARACTER_NO_KYO,
             outBuf,
             256) )
      {
        AppMain::loadCharacterLightData(
          this,
          outBuf,
          &this->ModelRoomSettings.worldLightData,
          p_resultMember->battleWinnerID == COUNTER_HIT);
      }
      if ( StageProjectData::GetLightFilePath(
             *(StageProjectData **)(*(_QWORD *)&AppMain::pApp + 11056i64),
             STAGE_ID_RES,
             outBuf,
             256) )
      {
        AppMain::loadBasicLightData(this, outBuf, &this->ModelRoomSettings.worldLightData);
      }
      if ( StageProjectData::GetPostEffectFilePath(
             *(StageProjectData **)(*(_QWORD *)&AppMain::pApp + 11056i64),
             STAGE_ID_RES,
             outBuf,
             256) )
      {
        AppMain::loadPostProcessShaderData(this, outBuf, &this->ModelRoomSettings.postprocessSettings);
      }
      y = this->ModelRoomSettings.postprocessSettings.shadowLightAreaSettings.shadLightMinMax.y;
      x = this->ModelRoomSettings.postprocessSettings.shadowLightAreaSettings.shadLightMinMax.x;
      shadLightRadius = this->ModelRoomSettings.postprocessSettings.shadowLightAreaSettings.shadLightRadius;
      v39 = this->m_pRender;
      v39->m_BkgndShadLightAreaSettings.shadLightType = this->ModelRoomSettings.postprocessSettings.shadowLightAreaSettings.shadLightType;
      v39->m_BkgndShadLightAreaSettings.shadLightRadius = shadLightRadius;
      v39->m_BkgndShadLightAreaSettings.shadLightPos = this->ModelRoomSettings.postprocessSettings.shadowLightAreaSettings.shadLightPos;
      v39->m_BkgndShadLightAreaSettings.shadLightMinMax.x = x;
      v39->m_BkgndShadLightAreaSettings.shadLightMinMax.y = y;
      v40 = this->m_pRender;
      *(_OWORD *)&v40->m_BkgndScreenFilterSettings.FilterOn = *(_OWORD *)&this->ModelRoomSettings.postprocessSettings.screenFilter.FilterOn;
      *(_OWORD *)&v40->m_BkgndScreenFilterSettings.PSLevelsOn = *(_OWORD *)&this->ModelRoomSettings.postprocessSettings.screenFilter.PSLevelsOn;
      *(_OWORD *)&v40->m_BkgndScreenFilterSettings.PSLevelsOutBlack = *(_OWORD *)&this->ModelRoomSettings.postprocessSettings.screenFilter.PSLevelsOutBlack;
      *(_OWORD *)v40->m_BkgndScreenFilterSettings.GradientStartColour = *(_OWORD *)this->ModelRoomSettings.postprocessSettings.screenFilter.GradientStartColour;
      *(_QWORD *)&v40->m_BkgndScreenFilterSettings.GradientEndColour[1] = *(_QWORD *)&this->ModelRoomSettings.postprocessSettings.screenFilter.GradientEndColour[1];
      v41 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11056i64);
      if ( *(_DWORD *)v41 == 1 )
      {
        sprintf_s(outBuf, 0x100ui64, "%sCMN_SETTINGS.CSV", *(const char **)(v41 + 56));
        AppMain::loadGlobalShaderData(this, outBuf, &this->ModelRoomSettings.globalShaderSettings);
        v42 = this->m_pRender;
        v42->m_modelFXShaderSettings[0].fxTexCentre[0] = this->ModelRoomSettings.globalShaderSettings.modelFXSettings[0].fxCentre[0];
        v42->m_modelFXShaderSettings[0].fxSpeed[0] = this->ModelRoomSettings.globalShaderSettings.modelFXSettings[0].fxSpeed[0];
        v43 = this->m_pRender;
        v43->m_modelFXShaderSettings[0].fxTexCentre[1] = this->ModelRoomSettings.globalShaderSettings.modelFXSettings[0].fxCentre[1];
        v43->m_modelFXShaderSettings[0].fxSpeed[1] = this->ModelRoomSettings.globalShaderSettings.modelFXSettings[0].fxSpeed[1];
        v44 = this->m_pRender;
        v44->m_modelFXShaderSettings[1].fxTexCentre[0] = this->ModelRoomSettings.globalShaderSettings.modelFXSettings[1].fxCentre[0];
        v44->m_modelFXShaderSettings[1].fxSpeed[0] = this->ModelRoomSettings.globalShaderSettings.modelFXSettings[1].fxSpeed[0];
        v45 = this->m_pRender;
        v45->m_modelFXShaderSettings[1].fxTexCentre[1] = this->ModelRoomSettings.globalShaderSettings.modelFXSettings[1].fxCentre[1];
        v45->m_modelFXShaderSettings[1].fxSpeed[1] = this->ModelRoomSettings.globalShaderSettings.modelFXSettings[1].fxSpeed[1];
      }
      goto LABEL_84;
    case 3:
      if ( extension::FutureObjectSpec::s_futureObjectJobCount.m_value._My_val )
        return;
      v15 = this->m_CharaBaseFigure.m_body.m_ptr->m_content.m_ptr;
      if ( !v15 || v15->m_isDataReleased != createShadowFlg )
      {
        CharaProjectData::GetDirectoryPath(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), &result, 999);
        std::string::append(&result, "CMN.obac", 8ui64);
        *(_WORD *)&v57.bMemoryAllocationByCPU = 0;
        memset(&v57.fileSetting, 0, sizeof(v57.fileSetting));
        v57.bBaseFigure = 1;
        other.m_isNoCache = 0;
        v58._Mypair._Myval2._Myres = 15i64;
        v58._Mypair._Myval2._Mysize = 0i64;
        v58._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(&v58, &result, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache::getCachedOrLoadStart(
          v16,
          (extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> *)&other.m_body,
          &v58,
          &v57);
        extension::BasicFutureObject<OGLSecondary,void>::operator=(
          (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_CharaBaseFigure,
          &other);
        v20 = other.m_body.m_ptr;
        if ( other.m_body.m_ptr
          && _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&other.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
        {
          ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v20->~RefCountableWeakSupportBase)(
            v20,
            1i64);
        }
        extension::FutureFigureOption::~FutureFigureOption(&v57, v17, v18, v19);
        std::string::~string(&result);
      }
      if ( !this->m_pCommonCharaData._Mypair._Myval2 )
        AsyncCharaDataUnifyLoad::LoadObj(
          &this->m_CommonCharaDataLoad,
          *(const CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
          999,
          EFFECT);
      if ( p_resultMember->battleWinnerID == GUARD_CRASH )
      {
        v21 = p_resultMember->charaNo[1];
        if ( v21 != -1 )
          AsyncCharaDataUnifyLoad::LoadObj(
            this->m_PlayerCharaDataLoad,
            *(const CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
            v21,
            CHARA);
        v22 = p_resultMember->charaNo[2];
        if ( v22 != -1 )
          AsyncCharaDataUnifyLoad::LoadObj(
            this->m_SupportCharaDataLoad,
            *(const CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
            v22,
            CHARA);
        if ( p_resultMember->bTestMode )
        {
          v23 = p_resultMember->charaNo[0];
          if ( v23 != -1 )
            AsyncCharaDataUnifyLoad::LoadObj(
              &this->m_PlayerCharaDataLoad[1],
              *(const CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
              v23,
              CHARA);
          v24 = BattleSystem::BattlePlayerInfo::GetSupportCharaID(p_resultMember->charaNo[0]);
          if ( v24 != -1 )
            AsyncCharaDataUnifyLoad::LoadObj(
              &this->m_SupportCharaDataLoad[1],
              *(const CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
              v24,
              CHARA);
        }
      }
      if ( p_resultMember->battleWinnerID == COUNTER_HIT )
      {
        v25 = p_resultMember->charaNo[1];
        if ( v25 != -1 )
          AsyncCharaDataUnifyLoad::LoadObj(
            &this->m_PlayerCharaDataLoad[1],
            *(const CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
            v25,
            CHARA);
        v26 = p_resultMember->charaNo[2];
        if ( v26 != -1 )
          AsyncCharaDataUnifyLoad::LoadObj(
            &this->m_SupportCharaDataLoad[1],
            *(const CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
            v26,
            CHARA);
        if ( p_resultMember->bTestMode )
        {
          v27 = p_resultMember->charaNo[0];
          if ( v27 != -1 )
            AsyncCharaDataUnifyLoad::LoadObj(
              this->m_PlayerCharaDataLoad,
              *(const CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
              v27,
              CHARA);
          v28 = BattleSystem::BattlePlayerInfo::GetSupportCharaID(p_resultMember->charaNo[0]);
          if ( v28 != -1 )
            AsyncCharaDataUnifyLoad::LoadObj(
              this->m_SupportCharaDataLoad,
              *(const CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
              v28,
              CHARA);
        }
      }
      goto LABEL_84;
  }
  if ( this->iLoadingCount != 4 )
  {
    if ( this->iLoadingCount == 5 )
      AppMain::setNonFadeSTExit(this, this->m_iLoadingNextFunc, 186);
    else
      ++this->iLoadingCount;
    return;
  }
  if ( !extension::FutureObjectSpec::s_futureObjectJobCount.m_value._My_val && AppMain::Sound_IsLoadComplete(this) )
  {
    if ( this->m_CommonCharaDataLoad.bWorking )
    {
      Obj = AsyncCharaDataUnifyLoad::GetObj(&this->m_CommonCharaDataLoad, v8);
      std::unique_ptr<CharaDataUnify>::reset(&this->m_pCommonCharaData, Obj);
    }
    v10 = 0i64;
    p_bWorking = &this->m_SupportCharaDataLoad[0].bWorking;
    v12 = 2i64;
    do
    {
      if ( *(p_bWorking - 32) )
      {
        v13 = AsyncCharaDataUnifyLoad::GetObj(&this->m_PlayerCharaDataLoad[v10], v8);
        std::unique_ptr<CharaDataUnify>::reset(&this->m_pPlayerCharaData[v5], v13);
      }
      if ( *p_bWorking )
      {
        v14 = AsyncCharaDataUnifyLoad::GetObj(&this->m_SupportCharaDataLoad[v10], v8);
        std::unique_ptr<CharaDataUnify>::reset(&this->m_pSupportCharaData[v5], v14);
      }
      ++v10;
      ++v5;
      p_bWorking += 16;
      --v12;
    }
    while ( v12 );
LABEL_84:
    ++this->iLoadingCount;
  }
}

void __fastcall AppMain::SetBattleSetting(AppMain *this, bool bDevMode)
{
  AppMain *v2; // r14
  BattleSystem::BattleController *v3; // r15
  BattleSystem::BattleController *v4; // rax
  GameDataInfo *v5; // rcx
  int v6; // ebx
  unsigned int v7; // edx
  __int64 v8; // rcx
  CHARACTER_NO v9; // edx
  CHARACTER_NO v10; // edi
  __int64 v11; // rsi
  int v12; // er9
  int v13; // ebx
  int v14; // edi
  __int64 iMemberCount; // rax
  int v16; // ecx
  CHARACTER_NO v17; // edx
  CHARACTER_NO v18; // edi
  int v19; // er9
  int v20; // ebx
  int v21; // edi
  __int64 v22; // rax
  int v23; // ecx
  STAGE_ID *v24; // rax
  GAME_RULE v25; // ecx
  int v26; // er14
  __int64 v27; // rdi
  __int64 v28; // r15
  int *v29; // r8
  int v30; // eax
  CHARACTER_NO v31; // esi
  int v32; // eax
  int v33; // ecx
  int v34; // ebx
  GAME_RULE v35; // ecx
  int v36; // er8
  int v37; // edx
  int v38; // er10
  int *v39; // rbx
  __int64 v40; // r9
  PLAYER_ID v41; // er10
  int *v42; // r8
  int v43; // ecx
  int v44; // edx
  __int64 v45; // rax
  int MemberMax; // eax
  int v47; // er11
  BattleSystem::BATTLE_MODE v48; // edx
  int *v49; // rsi
  int *v50; // rbx
  __int64 v51; // r15
  int v52; // er14
  int v53; // edi
  CHARACTER_COLOR v54; // edi
  int v55; // eax
  int *v56; // rdx
  int *v57; // rcx
  __int64 v58; // r10
  int v59; // er8
  int v60; // er9
  __int64 v61; // rax
  __int32 v62; // ecx
  __int64 v63; // rcx
  bool v64; // cc
  int v65; // ecx
  HANDICAP_TYPE v66; // eax
  HANDICAP_TYPE v67; // eax
  STAGE_ID *p_loadedInfo; // rax
  int *v69; // rsi
  int *v70; // rbx
  __int64 v71; // r15
  int v72; // er14
  int v73; // edi
  CHARACTER_COLOR v74; // edi
  int v75; // eax
  int *v76; // rdx
  int *p_iMemberCount; // rcx
  __int64 v78; // r15
  int v79; // er8
  int v80; // er9
  __int64 v81; // rax
  STAGE_ID *v82; // rax
  CHARACTER_NO v83; // edi
  int v84; // ebx
  __int64 v85; // rdx
  __int64 v86; // rax
  int v87; // ecx
  int iEnemyCharaID; // esi
  int v89; // er14
  ComboMissionData *Myval2; // rcx
  int m_MissionTrialNo; // edi
  ComboMissionData::MissionData *v92; // rdx
  CHARACTER_COLOR v93; // ebx
  __int64 v94; // rax
  bool m_ReplaySaveFlag; // r9
  char v96; // cl
  char v97; // dl
  USER_ID *m_ControllerSetting; // r8
  GAME_MODE v99; // ecx
  unsigned int *m_RandSeed; // rbx
  EffectTaskManager *effSystem; // r8
  void **m_pBuffer; // rbx
  __int64 v103; // rdi
  unsigned __int64 v104; // rdx
  int *pTinpanFrame; // rcx
  int v106; // [rsp+20h] [rbp-C8h]
  int v108; // [rsp+30h] [rbp-B8h]
  BattleSystem::BattleController *v109; // [rsp+38h] [rbp-B0h]
  int *v110; // [rsp+40h] [rbp-A8h]
  int *v111; // [rsp+48h] [rbp-A0h]
  BattleSystem::BattleController *v112[2]; // [rsp+50h] [rbp-98h] BYREF
  int v113; // [rsp+60h] [rbp-88h] BYREF
  int v114; // [rsp+64h] [rbp-84h]
  int v115; // [rsp+68h] [rbp-80h]
  int v116; // [rsp+84h] [rbp-64h]
  int v117; // [rsp+8Ch] [rbp-5Ch]

  v112[1] = (BattleSystem::BattleController *)-2i64;
  v2 = this;
  v3 = BattleSystem::BattleController::instance;
  v109 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v112[0] = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v112[0]);
    v3 = v4;
    v109 = v4;
    BattleSystem::BattleController::instance = v4;
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v5);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v6 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  v106 = v6;
  GameDataInfo::UpdateCharacterColorRand(&`GameDataInfo::getInstance'::`2'::instance);
  v112[0] = (BattleSystem::BattleController *)&v113;
  if ( !v6 )
    goto LABEL_170;
  if ( v6 == 3 )
  {
    BattleSystem::BattleController::AllInit(v3, TRAINING, -1, 0);
    v3->battleInfo.uiRoundPassFrame = 0;
    v3->battleInfo.iRoundLimitFrame = -1;
    v3->battleInfo.timeLimit = ACTOR_HIT_PUSH;
    p_loadedInfo = (STAGE_ID *)&v3->loadedInfo;
    v3->loadedInfo.loadedStageID = STAGE_ID_NONE;
    *(_WORD *)&v3->loadedInfo.bLoadedCommonData = 256;
    if ( &v3->loadedInfo != (BattleSystem::BattleLoadedInfo *)&v3->loadedInfo.loadedStageID )
    {
      do
      {
        *p_loadedInfo = STAGE_ID_NONE;
        *((_DWORD *)p_loadedInfo + 1) = 0;
        p_loadedInfo += 2;
      }
      while ( p_loadedInfo != &v3->loadedInfo.loadedStageID );
    }
    v69 = &v113;
    v70 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0];
    v71 = 2i64;
    do
    {
      v72 = *(v70 - 39);
      v69[1] = v72;
      if ( *v70 > 0 )
      {
        v73 = v72 + 100 * (*v70 + 4);
        if ( (int)CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), v73) < 0 )
          v73 = -1;
      }
      else
      {
        v73 = v72;
      }
      if ( v73 < 0 )
        v73 = v72;
      *v69 = v73;
      v74 = *(v70 - 31);
      if ( GameDataInfo::IsSameColorSelected(
             &`GameDataInfo::getInstance'::`2'::instance,
             (CHARACTER_NO)*(v70 - 39),
             v74,
             *v70) )
      {
        v74 = *(v70 - 12);
      }
      v69[2] = v74;
      v70 += 3;
      v69 += 9;
      --v71;
    }
    while ( v71 );
    if ( v113 == v116 && v115 == v117 )
    {
      v75 = 0;
      if ( v114 == v113 )
      {
        LOBYTE(v75) = v117 == 1;
        v117 = v75 + 1;
      }
      else
      {
        LOBYTE(v75) = v115 == 1;
        v115 = v75 + 1;
      }
    }
    v76 = &v113;
    p_iMemberCount = &v109->playerInfo[0].iMemberCount;
    v78 = 2i64;
    do
    {
      v79 = v76[2];
      v80 = *v76;
      v81 = *p_iMemberCount;
      if ( (int)v81 < 3 && v80 >= 0 )
      {
        if ( v79 < 0 )
          v79 = 0;
        p_iMemberCount[v81 - 6] = v80;
        p_iMemberCount[(*p_iMemberCount)++ - 3] = v79;
      }
      v76 += 9;
      p_iMemberCount += 42;
      --v78;
    }
    while ( v78 );
    v2 = this;
    SaveRecord_RecordKey::UpdateRecordKey(&this->SaveDataMain.RecordKey);
    v3 = v109;
    goto LABEL_199;
  }
  if ( v6 > 6 )
  {
    if ( v6 <= 8 )
    {
      v7 = `GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount ^ 0x7B48A35E ^ (LOWORD(`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)((`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)((`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      if ( (int)((v7 ^ (v7 >> 7)) & 0x550055 ^ v7 ^ (((v7 ^ (v7 >> 7)) & 0x550055) << 7)) >= 1 )
      {
        v3->loadedInfo.m_bInitialLoading = 0;
      }
      else
      {
        BattleSystem::BattleController::InitLoadedInfo(v3);
        v3->successiveBattleTakeOverInfo.bTakeOver = 0;
        *(_QWORD *)&v3->successiveBattleTakeOverInfo.roundEndInfo.xVital.value = 0i64;
        *(_QWORD *)&v3->successiveBattleTakeOverInfo.roundEndInfo.xClimaxTime.value = 0i64;
        *(_QWORD *)&v3->successiveBattleTakeOverInfo.roundEndInfo.xStunPower.value = 0i64;
        v3->successiveBattleTakeOverInfo.roundEndInfo.bTakeOverActor = 0;
        v3->successiveBattleTakeOverInfo.playBGMID = SND_NONE;
      }
      BattleSystem::BattleController::AllInit(v3, SINGLE, 1, 0);
      v8 = 2i64;
      if ( (unsigned int)(v3->battleInfo.battleMode - 3) <= 1 )
        v8 = 0i64;
      v3->battleInfo.uiRoundPassFrame = 0;
      v3->battleInfo.iRoundLimitFrame = BattleSystem::ciRoundTimeLimitMaxCount[v8];
      v3->battleInfo.timeLimit = v8;
      v9 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0];
      v10 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0];
      v11 = *(_QWORD *)&AppMain::pApp;
      v12 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][0];
      if ( `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][0] > 0 )
      {
        v13 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0]
            + 100 * (`GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][0] + 4);
        if ( (int)CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), v13) < 0 )
          v13 = -1;
        v12 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][0];
        v9 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0];
        v11 = *(_QWORD *)&AppMain::pApp;
      }
      else
      {
        v13 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0];
      }
      if ( v13 < 0 )
        v13 = v10;
      v14 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[0][0];
      if ( GameDataInfo::IsSameColorSelected(
             &`GameDataInfo::getInstance'::`2'::instance,
             v9,
             `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[0][0],
             v12) )
      {
        v14 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColorRand[0][0];
      }
      iMemberCount = v3->playerInfo[0].iMemberCount;
      if ( (int)iMemberCount < 3 && v13 >= 0 )
      {
        v3->playerInfo[0].charaNo[iMemberCount] = v13;
        v16 = 0;
        if ( v14 >= 0 )
          v16 = v14;
        v3->playerInfo[0].iCharaColor[v3->playerInfo[0].iMemberCount++] = v16;
      }
      v17 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[1][0];
      v18 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[1][0];
      v19 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[1][0];
      if ( `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[1][0] > 0 )
      {
        v20 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[1][0]
            + 100 * (`GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[1][0] + 4);
        if ( (int)CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(v11 + 10888), v20) < 0 )
          v20 = -1;
        v19 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[1][0];
        v17 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[1][0];
      }
      else
      {
        v20 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[1][0];
      }
      if ( v20 < 0 )
        v20 = v18;
      v21 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[1][0];
      if ( GameDataInfo::IsSameColorSelected(
             &`GameDataInfo::getInstance'::`2'::instance,
             v17,
             `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[1][0],
             v19) )
      {
        v21 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColorRand[1][0];
      }
      v22 = v3->playerInfo[1].iMemberCount;
      if ( (int)v22 < 3 && v20 >= 0 )
      {
        v3->playerInfo[1].charaNo[v22] = v20;
        v23 = 0;
        if ( v21 >= 0 )
          v23 = v21;
        v3->playerInfo[1].iCharaColor[v3->playerInfo[1].iMemberCount++] = v23;
      }
      goto LABEL_199;
    }
    if ( v6 == 9 )
    {
LABEL_170:
      BattleSystem::BattleController::AllInit(v3, MISSION, -1, 0);
      v3->battleInfo.uiRoundPassFrame = 0;
      v3->battleInfo.iRoundLimitFrame = -1;
      v3->battleInfo.timeLimit = ACTOR_HIT_PUSH;
      v82 = (STAGE_ID *)&v3->loadedInfo;
      v3->loadedInfo.loadedStageID = STAGE_ID_NONE;
      *(_WORD *)&v3->loadedInfo.bLoadedCommonData = 256;
      if ( &v3->loadedInfo != (BattleSystem::BattleLoadedInfo *)&v3->loadedInfo.loadedStageID )
      {
        do
        {
          *v82 = STAGE_ID_NONE;
          *((_DWORD *)v82 + 1) = 0;
          v82 += 2;
        }
        while ( v82 != &v3->loadedInfo.loadedStageID );
      }
      v83 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0];
      if ( `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][0] > 0 )
      {
        v84 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0]
            + 100 * (`GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][0] + 4);
        if ( (int)CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), v84) < 0 )
          v84 = -1;
      }
      else
      {
        v84 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0];
      }
      if ( v84 < 0 )
        v84 = v83;
      v85 = (unsigned int)`GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[0][0];
      v86 = v3->playerInfo[0].iMemberCount;
      if ( (int)v86 < 3 && v84 >= 0 )
      {
        v3->playerInfo[0].charaNo[v86] = v84;
        v87 = 0;
        if ( (int)v85 >= 0 )
          v87 = v85;
        v3->playerInfo[0].iCharaColor[v3->playerInfo[0].iMemberCount++] = v87;
      }
      iEnemyCharaID = 0;
      v89 = 1;
      Myval2 = this->m_pComboMissionData._Mypair._Myval2;
      if ( Myval2 )
      {
        m_MissionTrialNo = `GameDataInfo::getInstance'::`2'::instance.m_MissionTrialNo;
        if ( !v106 )
          m_MissionTrialNo = `GameDataInfo::getInstance'::`2'::instance.m_TutorialNo;
        if ( m_MissionTrialNo >= 0
          && m_MissionTrialNo < ((int (__fastcall *)(ComboMissionData *, __int64))Myval2->GetDataCount)(Myval2, v85) )
        {
          v92 = &this->m_pComboMissionData._Mypair._Myval2->pMissionData[m_MissionTrialNo];
          iEnemyCharaID = v92->settingData.iEnemyCharaID;
          BattleSystem::ComboMissionJudge::SetMission(&v3->comboMission, v92);
        }
      }
      if ( v84 == iEnemyCharaID )
      {
        v93 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[0][0];
        if ( GameDataInfo::IsSameColorSelected(
               &`GameDataInfo::getInstance'::`2'::instance,
               `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0],
               `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[0][0],
               `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][0]) )
        {
          v93 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColorRand[0][0];
        }
        if ( v93 == CHARACTER_COLOR_1P )
          v89 = 2;
      }
      v94 = v3->playerInfo[1].iMemberCount;
      if ( (int)v94 >= 3 )
      {
        v2 = this;
        goto LABEL_199;
      }
      v65 = v106;
      if ( iEnemyCharaID >= 0 )
      {
        v3->playerInfo[1].charaNo[v94] = iEnemyCharaID;
        v3->playerInfo[1].iCharaColor[v3->playerInfo[1].iMemberCount++] = v89;
      }
      v2 = this;
      goto LABEL_200;
    }
  }
  v24 = (STAGE_ID *)&v3->loadedInfo;
  v3->loadedInfo.loadedStageID = STAGE_ID_NONE;
  *(_WORD *)&v3->loadedInfo.bLoadedCommonData = 256;
  if ( &v3->loadedInfo != (BattleSystem::BattleLoadedInfo *)&v3->loadedInfo.loadedStageID )
  {
    do
    {
      *v24 = STAGE_ID_NONE;
      *((_DWORD *)v24 + 1) = 0;
      v24 += 2;
    }
    while ( v24 != &v3->loadedInfo.loadedStageID );
  }
  v25 = `GameDataInfo::getInstance'::`2'::instance.m_GameRule[`GameDataInfo::getInstance'::`2'::instance.m_GameRuleIndex];
  if ( (unsigned int)(v25 - 1) > 1 )
  {
    v48 = SINGLE;
    if ( v6 == 11 )
      v48 = TRAINING;
    BattleSystem::BattleController::AllInit(v3, v48, `GameDataInfo::getInstance'::`2'::instance.m_WinRoundCount, 0);
    v49 = &v113;
    v50 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0];
    v51 = 2i64;
    do
    {
      v52 = *(v50 - 39);
      v49[1] = v52;
      if ( *v50 > 0 )
      {
        v53 = v52 + 100 * (*v50 + 4);
        if ( (int)CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), v53) < 0 )
          v53 = -1;
      }
      else
      {
        v53 = v52;
      }
      if ( v53 < 0 )
        v53 = v52;
      *v49 = v53;
      v54 = *(v50 - 31);
      if ( GameDataInfo::IsSameColorSelected(
             &`GameDataInfo::getInstance'::`2'::instance,
             (CHARACTER_NO)*(v50 - 39),
             v54,
             *v50) )
      {
        v54 = *(v50 - 12);
      }
      v49[2] = v54;
      v50 += 3;
      v49 += 9;
      --v51;
    }
    while ( v51 );
    if ( v113 == v116 && v115 == v117 )
    {
      v55 = 0;
      if ( v114 == v113 )
      {
        LOBYTE(v55) = v117 == 1;
        v117 = v55 + 1;
      }
      else
      {
        LOBYTE(v55) = v115 == 1;
        v115 = v55 + 1;
      }
    }
    v56 = &v113;
    v3 = v109;
    v57 = &v109->playerInfo[0].iMemberCount;
    v58 = 2i64;
    do
    {
      v59 = v56[2];
      v60 = *v56;
      v61 = *v57;
      if ( (int)v61 < 3 && v60 >= 0 )
      {
        if ( v59 < 0 )
          v59 = 0;
        v57[v61 - 6] = v60;
        v57[(*v57)++ - 3] = v59;
      }
      v56 += 9;
      v57 += 42;
      --v58;
    }
    while ( v58 );
  }
  else
  {
    BattleSystem::BattleController::AllInit(v3, TEAM, -1, v25 == GAME_RULE_PARTY);
    v26 = 0;
    v27 = 0i64;
    v111 = &v113;
    do
    {
      v108 = 0;
      v28 = 0i64;
      if ( (int)GameDataInfo::GetMemberMax(&`GameDataInfo::getInstance'::`2'::instance, (PLAYER_ID)v26) > 0 )
      {
        v110 = v29;
        do
        {
          if ( v26 == -1 )
            v30 = -1;
          else
            v30 = `GameDataInfo::getInstance'::`2'::instance.m_Order[v27][v28];
          v31 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[v27][v30];
          v29[1] = v31;
          if ( v26 == -1 )
            v32 = -1;
          else
            v32 = `GameDataInfo::getInstance'::`2'::instance.m_Order[v27][v28];
          v33 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[v27][v32];
          if ( v33 > 0 )
          {
            v34 = v31 + 100 * (v33 + 4);
            if ( (int)CharaProjectData::GetCharaDataIndex(
                        *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                        v34) < 0 )
              v34 = -1;
          }
          else
          {
            v34 = v31;
          }
          if ( v34 < 0 )
            v34 = v31;
          *v110 = v34;
          v110[2] = GameDataInfo::GetOrderCharacterColor(
                      &`GameDataInfo::getInstance'::`2'::instance,
                      (PLAYER_ID)v26,
                      v108++);
          ++v28;
          v110 += 3;
        }
        while ( v108 < (int)GameDataInfo::GetMemberMax(&`GameDataInfo::getInstance'::`2'::instance, (PLAYER_ID)v26) );
        v29 = v111;
      }
      ++v26;
      ++v27;
      v111 = v29 + 9;
    }
    while ( v26 < 2 );
    v35 = `GameDataInfo::getInstance'::`2'::instance.m_GameRule[`GameDataInfo::getInstance'::`2'::instance.m_GameRuleIndex];
    if ( v35 != GAME_RULE_PARTY )
    {
      if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_STORY
        && (unsigned int)(`GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[1][0] - 48) <= 1
        || v35 == GAME_RULE_SINGLE
        || (v36 = 3, v35 == GAME_RULE_TRAINING) )
      {
        v36 = 1;
      }
      if ( v35 == GAME_RULE_SINGLE || (v37 = 3, v35 == GAME_RULE_TRAINING) )
        v37 = 1;
      lambda_e4d56513a02af634611ce83b65c578d3_::operator()((__int64 *)v112, v37, v36);
    }
    v38 = 0;
    v39 = &v113;
    v3 = v109;
    do
    {
      if ( (int)GameDataInfo::GetMemberMax(&`GameDataInfo::getInstance'::`2'::instance, (PLAYER_ID)v38) > 0 )
      {
        v42 = v39;
        do
        {
          if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_STORY
            && v41 == PLAYER_ID_2P )
          {
            if ( *v42 == 48 )
            {
              *v42 = 148;
            }
            else if ( *v42 == 49 )
            {
              *v42 = 149;
            }
          }
          v43 = v42[2];
          v44 = *v42;
          v45 = *(int *)(v40 + 24);
          if ( (int)v45 < 3 && v44 >= 0 )
          {
            if ( v43 < 0 )
              v43 = 0;
            *(_DWORD *)(v40 + 4 * v45) = v44;
            *(_DWORD *)(v40 + 4i64 * (int)(*(_DWORD *)(v40 + 24))++ + 12) = v43;
          }
          MemberMax = GameDataInfo::GetMemberMax(&`GameDataInfo::getInstance'::`2'::instance, v41);
        }
        while ( v47 < MemberMax );
      }
      v38 = v41 + 1;
      v39 += 9;
    }
    while ( v38 < 2 );
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_TimeSetting == BATTLE_ROUND_TIMER_TYPE_30 )
  {
    v63 = 1i64;
    v64 = (unsigned int)(v3->battleInfo.battleMode - 3) <= 1;
    goto LABEL_124;
  }
  v62 = `GameDataInfo::getInstance'::`2'::instance.m_TimeSetting - 2;
  if ( `GameDataInfo::getInstance'::`2'::instance.m_TimeSetting == BATTLE_ROUND_TIMER_TYPE_99 )
  {
    v63 = 3i64;
    v64 = (unsigned int)(v3->battleInfo.battleMode - 3) <= 1;
LABEL_124:
    v3->battleInfo.uiRoundPassFrame = 0;
    goto LABEL_125;
  }
  v3->battleInfo.uiRoundPassFrame = 0;
  if ( v62 != 1 )
  {
    v63 = 2i64;
    v64 = (unsigned int)(v3->battleInfo.battleMode - 3) <= 1;
LABEL_125:
    if ( v64 )
      v63 = 0i64;
    v3->battleInfo.timeLimit = v63;
    v3->battleInfo.iRoundLimitFrame = BattleSystem::ciRoundTimeLimitMaxCount[v63];
    goto LABEL_128;
  }
  v3->battleInfo.iRoundLimitFrame = -1;
  v3->battleInfo.timeLimit = ACTOR_HIT_PUSH;
LABEL_128:
  v65 = v106;
  if ( v106 == 1 )
  {
    if ( `GameDataInfo::getInstance'::`2'::instance.m_ContinueBous != BONUS_PGAUGE1 )
    {
      switch ( `GameDataInfo::getInstance'::`2'::instance.m_ContinueBous )
      {
        case BONUS_LIFE75:
          v3->playerInfo[0].iHandicap = 2;
          v3->playerInfo[1].iHandicap = 1;
          break;
        case BONUS_LIFE75_PGAUGE1:
          v3->playerInfo[0].iHandicap = 3;
          v3->playerInfo[1].iHandicap = 1;
          break;
        case BONUS_LIFE50_PGAUGEMAX:
          v3->playerInfo[0].iHandicap = 4;
          v3->playerInfo[1].iHandicap = 0;
          break;
        default:
          v3->playerInfo[0].iHandicap = 2;
LABEL_138:
          v3->playerInfo[1].iHandicap = 2;
          break;
      }
      `GameDataInfo::getInstance'::`2'::instance.m_ContinueBous = BONUS_NONE;
      v2 = this;
LABEL_199:
      v65 = v106;
      goto LABEL_200;
    }
    v3->playerInfo[0].iHandicap = 3;
    goto LABEL_138;
  }
  v66 = `GameDataInfo::getInstance'::`2'::instance.m_HandicapSetting[0];
  if ( `GameDataInfo::getInstance'::`2'::instance.m_HandicapSetting[0] > (unsigned int)HANDICAP_TYPE_5 )
    v66 = HANDICAP_TYPE_3;
  v3->playerInfo[0].iHandicap = v66;
  v67 = `GameDataInfo::getInstance'::`2'::instance.m_HandicapSetting[1];
  if ( `GameDataInfo::getInstance'::`2'::instance.m_HandicapSetting[1] > (unsigned int)HANDICAP_TYPE_5 )
    v67 = HANDICAP_TYPE_3;
  v3->playerInfo[1].iHandicap = v67;
  v2 = this;
LABEL_200:
  v3->battleInfo.battleStageID = `GameDataInfo::getInstance'::`2'::instance.m_StageID;
  m_ReplaySaveFlag = 0;
  if ( !`GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
  {
    if ( v65 == 2 )
    {
      if ( v2->SaveDataMain.SysOptionData.iReplayAutoSave )
      {
        v96 = 0;
        v97 = 0;
        m_ControllerSetting = `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting;
        do
        {
          if ( *m_ControllerSetting == USER_ID_1P )
            v96 = 1;
          if ( *m_ControllerSetting == USER_ID_CPU )
            v97 = 1;
          ++m_ControllerSetting;
        }
        while ( (__int64)m_ControllerSetting < (__int64)`GameDataInfo::getInstance'::`2'::instance.m_CharacterNo );
        if ( v96 )
          m_ReplaySaveFlag = v97 == 0;
      }
    }
    else if ( (unsigned int)(v65 - 4) <= 2 )
    {
      m_ReplaySaveFlag = `GameDataInfo::getInstance'::`2'::instance.m_ReplaySaveFlag;
    }
  }
  v3->battleInfo.bReplaySaveTarget = m_ReplaySaveFlag;
  v99 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  if ( (unsigned int)(v99 - 4) > 2
    && v99 != GAME_MODE_ONLINETRAINING
    && !`GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
  {
    m_RandSeed = `GameDataInfo::getInstance'::`2'::instance.m_RandSeed;
    do
      *m_RandSeed++ = Xtime_get_ticks();
    while ( (__int64)m_RandSeed < (__int64)&`GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag );
  }
  effSystem = v2->effSystem;
  if ( effSystem )
  {
    effSystem->randMT.mt[0] = `GameDataInfo::getInstance'::`2'::instance.m_RandSeed[0] ^ (unsigned __int16)(LOWORD(`GameDataInfo::getInstance'::`2'::instance.m_RandSeed[1]) ^ LOWORD(`GameDataInfo::getInstance'::`2'::instance.m_RandSeed[0]));
    effSystem->randMT.mti = 1;
    do
    {
      effSystem->randMT.mt[effSystem->randMT.mti] = effSystem->randMT.mti
                                                  + 1812433253
                                                  * (*(_DWORD *)&effSystem->m_JobMutex[5]._Mtx_storage._Pad[4 * effSystem->randMT.mti] ^ (*(_DWORD *)&effSystem->m_JobMutex[5]._Mtx_storage._Pad[4 * effSystem->randMT.mti] >> 30));
      ++effSystem->randMT.mti;
    }
    while ( effSystem->randMT.mti < 624 );
  }
  m_pBuffer = (void **)replayBattle.m_pBuffer;
  v103 = 6i64;
  do
  {
    if ( *m_pBuffer )
    {
      aligned_free(*m_pBuffer);
      *m_pBuffer = 0i64;
    }
    ++m_pBuffer;
    --v103;
  }
  while ( v103 );
  memset(&replayBattle, 0, sizeof(replayBattle));
  if ( v2->m_OnlineBattleGUIParams.bInitialize )
  {
    v2->m_OnlineBattleGUIParams.bInitialize = 0;
    if ( v2->m_OnlineBattleGUIParams.bOnlineGUIEnabled )
    {
      if ( v2->m_watchingParams.operationType )
      {
        v2->m_watchingParams.operationType = Linear;
        pTinpanFrame = v2->m_watchingParams.pTinpanFrame;
        if ( pTinpanFrame )
        {
          operator delete(pTinpanFrame, v104);
          v2->m_watchingParams.pTinpanFrame = 0i64;
        }
      }
    }
  }
}

void __fastcall AppMain::SetUpPlayerAsset(
        AppMain *this,
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *asset,
        int charNo,
        int colorNo,
        bool bDisableEffect)
{
  __int64 v8; // r8
  CharaProjectData *v9; // rbx
  int CharaDataIndex; // eax
  int iBaseCharaID; // ecx
  bool v12; // bl
  CharaProjectData *v13; // r12
  int v14; // eax
  __int64 v15; // rsi
  CharaProjectData *v16; // rbx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  int BaseCharaID; // eax
  __int64 v21; // rbx
  int v22; // eax
  std::string *DirectoryPath; // rax
  int v24; // eax
  int v25; // ebx
  std::string *v26; // rax
  const std::string *DataFilePath; // rax
  extension::FutureObjectSpec::NoCache_t v28; // dl
  std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *v29; // r8
  std::integral_constant<bool,0> v30; // r9
  __int64 v31; // rax
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v32; // rdx
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *m_ptr; // rcx
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v34; // rcx
  char *Ptr; // rcx
  char *v36; // rax
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> v37; // [rsp+28h] [rbp-D8h] BYREF
  extension::FutureAssetOption opt; // [rsp+40h] [rbp-C0h] BYREF
  std::string v39; // [rsp+B0h] [rbp-50h] BYREF
  std::string result; // [rsp+D0h] [rbp-30h] BYREF
  std::string v41; // [rsp+F0h] [rbp-10h] BYREF

  v8 = *(_QWORD *)&AppMain::pApp;
  if ( asset == (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 32i64) )
  {
    AppMain::battleShaderUnloadCharacterShaders(this);
    v8 = *(_QWORD *)&AppMain::pApp;
  }
  if ( charNo != -1 )
  {
    v9 = *(CharaProjectData **)(v8 + 10888);
    CharaDataIndex = CharaProjectData::GetCharaDataIndex(v9, charNo);
    if ( CharaDataIndex >= 0 )
    {
      iBaseCharaID = v9->pCharaData[CharaDataIndex].iBaseCharaID;
      if ( iBaseCharaID < 0 )
        iBaseCharaID = charNo;
    }
    else
    {
      iBaseCharaID = -1;
    }
    v12 = 0;
    if ( iBaseCharaID != 49 )
      v12 = bDisableEffect;
    opt.bNoMotion = 0;
    opt.effectPath._Mypair._Myval2._Myres = 15i64;
    opt.effectPath._Mypair._Myval2._Mysize = 0i64;
    opt.effectPath._Mypair._Myval2._Bx._Buf[0] = 0;
    opt.baseDataFlag = 0;
    opt.baseCharaPath._Mypair._Myval2._Myres = 15i64;
    opt.baseCharaPath._Mypair._Myval2._Mysize = 0i64;
    opt.baseCharaPath._Mypair._Myval2._Bx._Buf[0] = 0;
    memset(&opt.fileSetting, 0, sizeof(opt.fileSetting));
    opt.disableShaderFXMaterialLight = 1;
    opt.playerNo = colorNo;
    opt.disableEffectLoad = v12;
    v13 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
    v14 = CharaProjectData::GetCharaDataIndex(v13, charNo);
    if ( v14 >= 0 )
      v15 = (__int64)&v13->pCharaData[v14];
    else
      v15 = 0i64;
    if ( v12 )
      goto LABEL_22;
    v16 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
    v17 = CharaProjectData::GetCharaDataIndex(v16, charNo);
    if ( v17 >= 0 )
    {
      v18 = v16->pCharaData[v17].iBaseCharaID;
      if ( v18 < 0 )
        goto LABEL_21;
    }
    else
    {
      v18 = -1;
    }
    if ( v18 != charNo && v15 && (*(_DWORD *)(v15 + 140) & 0x40000) != 0 )
    {
      v19 = *(_QWORD *)&AppMain::pApp;
      BaseCharaID = CharaProjectData::GetBaseCharaID(
                      *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                      charNo);
      CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(v19 + 10888), BaseCharaID);
      v21 = *(_QWORD *)&AppMain::pApp;
      v22 = CharaProjectData::GetBaseCharaID(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), charNo);
      DirectoryPath = CharaProjectData::GetDirectoryPath(*(CharaProjectData **)(v21 + 10888), &result, v22);
      std::string::assign(&opt.effectPath, DirectoryPath);
      std::string::~string(&result);
      goto LABEL_22;
    }
LABEL_21:
    CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), charNo);
    CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), charNo);
LABEL_22:
    if ( v15 )
    {
      if ( (*(_DWORD *)(v15 + 140) & 0x780000) != 0 )
      {
        v24 = CharaProjectData::GetBaseCharaID(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), charNo);
        v25 = v24;
        if ( v24 != charNo )
        {
          opt.baseDataFlag = *(_DWORD *)(v15 + 140);
          CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), v24);
          v26 = CharaProjectData::GetDirectoryPath(
                  *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                  &v41,
                  v25);
          std::string::assign(&opt.baseCharaPath, v26);
          std::string::~string(&v41);
        }
      }
    }
    DataFilePath = CharaProjectData::GetDataFilePath(
                     *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                     &v39,
                     charNo,
                     ASSET_FILE);
    extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>(
      &v37,
      v28,
      DataFilePath,
      &opt);
    asset->m_isNoCache = *(_BYTE *)(v31 + 1);
    v32 = *(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body **)(v31 + 8);
    if ( v32 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v32->m_refCount.m_ptr->m_sharedCount, 1ui64);
    m_ptr = asset->m_body.m_ptr;
    asset->m_body.m_ptr = v32;
    if ( m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
    }
    v34 = v37.m_body.m_ptr;
    if ( v37.m_body.m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v37.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *, __int64))v34->~RefCountableWeakSupportBase)(
        v34,
        1i64);
    }
    if ( v39._Mypair._Myval2._Myres >= 0x10 )
    {
      Ptr = v39._Mypair._Myval2._Bx._Ptr;
      if ( v39._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v39._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v36 = (char *)*((_QWORD *)v39._Mypair._Myval2._Bx._Ptr - 1);
        if ( v36 >= v39._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v39._Mypair._Myval2._Bx._Ptr - v36) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v39._Mypair._Myval2._Bx._Ptr - v36) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        Ptr = (char *)*((_QWORD *)v39._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(Ptr);
    }
    if ( opt.fileSetting._Mypair._Myval2._Myfirst )
    {
      std::_Destroy_range1<std::allocator<extension::FutureAssetOptionFileSetting>,extension::FutureAssetOptionFileSetting *>(
        opt.fileSetting._Mypair._Myval2._Myfirst,
        opt.fileSetting._Mypair._Myval2._Mylast,
        v29,
        v30);
      std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting>>::deallocate(
        (std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *)((char *)opt.fileSetting._Mypair._Myval2._Myend
                                                                                     - (char *)opt.fileSetting._Mypair._Myval2._Myfirst),
        opt.fileSetting._Mypair._Myval2._Myfirst,
        opt.fileSetting._Mypair._Myval2._Myend - opt.fileSetting._Mypair._Myval2._Myfirst);
      memset(&opt.fileSetting, 0, sizeof(opt.fileSetting));
    }
    std::string::~string(&opt.baseCharaPath);
    std::string::~string(&opt.effectPath);
  }
}

void __fastcall AppMain::SetUpPlayerModel(
        AppMain *this,
        AppMain::_CHARAINFO *dst,
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *charaAsset,
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *rivalAsset,
        bool createShadowFlg)
{
  extension::AsyncContent<extension::AsyncAsset> *m_ptr; // rbx
  extension::AsyncContent<extension::AsyncAsset> *v8; // rdi
  extension::AsyncAsset *Myval2; // rcx
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // r14
  OGLModel **v13; // rax
  unsigned __int64 v14; // rdx
  OGLModel **v15; // rcx
  int iNo; // edi
  CharaProjectData *v17; // rsi
  int CharaDataIndex; // eax
  int iBaseCharaID; // edx
  int v20; // edi
  __int64 v21; // r13
  __int64 v22; // rbp
  extension::AsyncContent<extension::AsyncAsset> *v23; // rsi
  extension::AsyncAsset *v24; // rcx
  bool v25; // zf
  extension::AsyncContent<extension::AsyncAsset> *v26; // rsi
  extension::AsyncAsset *v27; // rcx
  extension::AsyncContent<extension::AsyncAsset> *v28; // rsi
  extension::AsyncAsset *v29; // rcx
  extension::AsyncContent<extension::AsyncAsset> *v30; // rsi
  extension::AsyncAsset *v31; // rcx
  extension::AsyncContent<extension::AsyncAsset> *v32; // rsi
  extension::AsyncAsset *v33; // rcx
  OGLModel *v34; // rcx
  extension::AsyncContent<extension::AsyncAsset> *v35; // rsi
  extension::AsyncAsset *v36; // rcx
  OGLModel *v37; // rcx
  extension::AsyncContent<extension::AsyncAsset> *v38; // rsi
  extension::AsyncAsset *v39; // rcx
  extension::AsyncContent<extension::AsyncAsset> *v40; // rsi
  extension::AsyncAsset *v41; // rcx
  OGLModel *v42; // rcx
  extension::AsyncContent<extension::AsyncAsset> *v43; // rsi
  extension::AsyncAsset *v44; // rcx
  OGLModel *v45; // rcx
  __int64 v46; // r14
  extension::AsyncContent<extension::AsyncAsset> *v47; // rsi
  extension::AsyncAsset *v48; // rcx
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *v49; // rdx
  extension::AsyncContent<extension::AsyncAsset> *v50; // rsi
  extension::AsyncAsset *v51; // rcx
  OGLModel *v52; // rcx
  OGLModel **v53; // rcx
  __int64 v54; // [rsp+60h] [rbp+8h]

  m_ptr = charaAsset->m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
    goto LABEL_131;
  if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    extension::AsyncStatus::waitFor(&m_ptr->m_status, (extension::AsyncStatus::Step)dst);
  if ( m_ptr->m_data._Mypair._Myval2 )
  {
    v8 = charaAsset->m_body.m_ptr->m_content.m_ptr;
    if ( !v8 || v8->m_isDataReleased )
    {
      Myval2 = 0i64;
    }
    else
    {
      if ( (v8->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
        extension::AsyncStatus::waitFor(&v8->m_status, (extension::AsyncStatus::Step)dst);
      Myval2 = v8->m_data._Mypair._Myval2;
    }
    v10 = -1;
    v11 = Myval2->m_models._Mypair._Myval2._Mylast - Myval2->m_models._Mypair._Myval2._Myfirst;
    v12 = (int)v11;
    dst->iModelCount = v11;
    dst->iMotionNo = 0;
    v54 = (int)v11;
    v13 = (OGLModel **)operator new[](saturated_mul((int)v11, 8ui64));
    v15 = dst->ppModel._Mypair._Myval2;
    dst->ppModel._Mypair._Myval2 = v13;
    if ( v15 )
      operator delete(v15, v14);
    iNo = dst->iNo;
    v17 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
    CharaDataIndex = CharaProjectData::GetCharaDataIndex(v17, dst->iNo);
    if ( CharaDataIndex >= 0 )
    {
      iBaseCharaID = v17->pCharaData[CharaDataIndex].iBaseCharaID;
      if ( iBaseCharaID < 0 )
        iBaseCharaID = iNo;
      v10 = iBaseCharaID;
    }
    v20 = 0;
    if ( v12 > 0 )
    {
      v21 = v10;
      v22 = 0i64;
      do
      {
        v23 = charaAsset->m_body.m_ptr->m_content.m_ptr;
        if ( !v23 || v23->m_isDataReleased )
        {
          v24 = 0i64;
        }
        else
        {
          if ( (v23->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v23->m_status, (extension::AsyncStatus::Step)iBaseCharaID);
          v24 = v23->m_data._Mypair._Myval2;
        }
        v25 = v20 == 0;
        if ( v20 >= 0 )
        {
          if ( v20 < (int)(v24->m_models._Mypair._Myval2._Mylast - v24->m_models._Mypair._Myval2._Myfirst)
            && v24->m_models._Mypair._Myval2._Myfirst[v22]._Mypair._Myval2 )
          {
            if ( !v20 )
              goto LABEL_54;
            v26 = charaAsset->m_body.m_ptr->m_content.m_ptr;
            if ( !v26 || v26->m_isDataReleased )
            {
              v27 = 0i64;
            }
            else
            {
              if ( (v26->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
                extension::AsyncStatus::waitFor(&v26->m_status, (extension::AsyncStatus::Step)iBaseCharaID);
              v27 = v26->m_data._Mypair._Myval2;
            }
            if ( v20 < (unsigned __int64)(v27->m_modelTypes._Mypair._Myval2._Mylast
                                        - v27->m_modelTypes._Mypair._Myval2._Myfirst)
              && !v27->m_modelTypes._Mypair._Myval2._Myfirst[v22] )
            {
              goto LABEL_54;
            }
            v28 = charaAsset->m_body.m_ptr->m_content.m_ptr;
            if ( !v28 || v28->m_isDataReleased )
            {
              v29 = 0i64;
            }
            else
            {
              if ( (v28->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
                extension::AsyncStatus::waitFor(&v28->m_status, (extension::AsyncStatus::Step)iBaseCharaID);
              v29 = v28->m_data._Mypair._Myval2;
            }
            if ( v20 < (unsigned __int64)(v29->m_modelTypes._Mypair._Myval2._Mylast
                                        - v29->m_modelTypes._Mypair._Myval2._Myfirst)
              && v29->m_modelTypes._Mypair._Myval2._Myfirst[v22] == 2 )
            {
              goto LABEL_54;
            }
            v30 = charaAsset->m_body.m_ptr->m_content.m_ptr;
            if ( !v30 || v30->m_isDataReleased )
            {
              v31 = 0i64;
            }
            else
            {
              if ( (v30->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
                extension::AsyncStatus::waitFor(&v30->m_status, (extension::AsyncStatus::Step)iBaseCharaID);
              v31 = v30->m_data._Mypair._Myval2;
            }
            if ( v20 < (unsigned __int64)(v31->m_modelTypes._Mypair._Myval2._Mylast
                                        - v31->m_modelTypes._Mypair._Myval2._Myfirst)
              && v31->m_modelTypes._Mypair._Myval2._Myfirst[v22] == 3 )
            {
LABEL_54:
              v32 = charaAsset->m_body.m_ptr->m_content.m_ptr;
              if ( !v32 || v32->m_isDataReleased )
              {
                v33 = 0i64;
              }
              else
              {
                if ( (v32->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
                  extension::AsyncStatus::waitFor(&v32->m_status, (extension::AsyncStatus::Step)iBaseCharaID);
                v33 = v32->m_data._Mypair._Myval2;
              }
              if ( v20 >= (int)(v33->m_models._Mypair._Myval2._Mylast - v33->m_models._Mypair._Myval2._Myfirst) )
                v34 = 0i64;
              else
                v34 = v33->m_models._Mypair._Myval2._Myfirst[v22]._Mypair._Myval2;
              if ( v34->m_pSecondary )
                v34->m_SecondaryEnable = 1;
              v35 = charaAsset->m_body.m_ptr->m_content.m_ptr;
              if ( !v35 || v35->m_isDataReleased )
              {
                v36 = 0i64;
              }
              else
              {
                if ( (v35->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
                  extension::AsyncStatus::waitFor(&v35->m_status, (extension::AsyncStatus::Step)iBaseCharaID);
                v36 = v35->m_data._Mypair._Myval2;
              }
              if ( v20 >= (int)(v36->m_models._Mypair._Myval2._Mylast - v36->m_models._Mypair._Myval2._Myfirst) )
                v37 = 0i64;
              else
                v37 = v36->m_models._Mypair._Myval2._Myfirst[v22]._Mypair._Myval2;
              v37->m_lowAccuracyShadowBias = 1;
            }
          }
          v25 = v20 == 0;
        }
        if ( v25 || v21 != 39 )
        {
          v40 = charaAsset->m_body.m_ptr->m_content.m_ptr;
          if ( !v40 || v40->m_isDataReleased )
          {
            v41 = 0i64;
          }
          else
          {
            if ( (v40->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&v40->m_status, (extension::AsyncStatus::Step)iBaseCharaID);
            v41 = v40->m_data._Mypair._Myval2;
          }
          if ( v20 < 0 || v20 >= (int)(v41->m_models._Mypair._Myval2._Mylast - v41->m_models._Mypair._Myval2._Myfirst) )
            v42 = 0i64;
          else
            v42 = v41->m_models._Mypair._Myval2._Myfirst[v22]._Mypair._Myval2;
          v42->m_createShadowFlg = createShadowFlg;
        }
        else
        {
          v38 = charaAsset->m_body.m_ptr->m_content.m_ptr;
          if ( !v38 || v38->m_isDataReleased )
          {
            v39 = 0i64;
          }
          else
          {
            if ( (v38->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&v38->m_status, (extension::AsyncStatus::Step)iBaseCharaID);
            v39 = v38->m_data._Mypair._Myval2;
          }
          if ( v20 < 0 || v20 >= (int)(v39->m_models._Mypair._Myval2._Mylast - v39->m_models._Mypair._Myval2._Myfirst) )
            MEMORY[0x22C9] = 0;
          else
            v39->m_models._Mypair._Myval2._Myfirst[v22]._Mypair._Myval2->m_createShadowFlg = 0;
        }
        v43 = charaAsset->m_body.m_ptr->m_content.m_ptr;
        if ( !v43 || v43->m_isDataReleased )
        {
          v44 = 0i64;
        }
        else
        {
          if ( (v43->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v43->m_status, (extension::AsyncStatus::Step)iBaseCharaID);
          v44 = v43->m_data._Mypair._Myval2;
        }
        if ( v20 < 0 || v20 >= (int)(v44->m_models._Mypair._Myval2._Mylast - v44->m_models._Mypair._Myval2._Myfirst) )
          v45 = 0i64;
        else
          v45 = v44->m_models._Mypair._Myval2._Myfirst[v22]._Mypair._Myval2;
        v46 = *(_QWORD *)&AppMain::pApp;
        v45->m_modelFXFlg = 0;
        v47 = charaAsset->m_body.m_ptr->m_content.m_ptr;
        if ( !v47 || v47->m_isDataReleased )
        {
          v48 = 0i64;
        }
        else
        {
          if ( (v47->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v47->m_status, (extension::AsyncStatus::Step)iBaseCharaID);
          v48 = v47->m_data._Mypair._Myval2;
        }
        if ( v20 < 0 || v20 >= (int)(v48->m_models._Mypair._Myval2._Mylast - v48->m_models._Mypair._Myval2._Myfirst) )
          v49 = 0i64;
        else
          v49 = (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)v48->m_models._Mypair._Myval2._Myfirst[v22]._Mypair._Myval2;
        lambda_a2a239d61107d4b041e038cf6080c8a1_::operator()(
          (OGLModel *)v48,
          v49,
          rivalAsset,
          *(_QWORD *)(v46 + 11064) + 16i64);
        v50 = charaAsset->m_body.m_ptr->m_content.m_ptr;
        if ( !v50 || v50->m_isDataReleased )
        {
          v51 = 0i64;
        }
        else
        {
          if ( (v50->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v50->m_status, (extension::AsyncStatus::Step)iBaseCharaID);
          v51 = v50->m_data._Mypair._Myval2;
        }
        if ( v20 < 0 || v20 >= (int)(v51->m_models._Mypair._Myval2._Mylast - v51->m_models._Mypair._Myval2._Myfirst) )
          v52 = 0i64;
        else
          v52 = v51->m_models._Mypair._Myval2._Myfirst[v22]._Mypair._Myval2;
        ++v20;
        dst->ppModel._Mypair._Myval2[v22++] = v52;
      }
      while ( v22 < v54 );
    }
  }
  else
  {
LABEL_131:
    dst->iMotionNo = 0;
    dst->iModelCount = 0;
    dst->iModelEffect = 0;
    v53 = dst->ppModel._Mypair._Myval2;
    dst->ppModel._Mypair._Myval2 = 0i64;
    if ( v53 )
      operator delete(v53, (unsigned __int64)dst);
  }
}

void __fastcall AppMain::SetUpStage(AppMain *this)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  extension::AsyncAsset *v4; // rbx
  extension::AsyncStatus *v5; // rcx
  __int64 v6; // rdi
  extension::AsyncAsset *v7; // rdx
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // rdx
  int v9; // er14
  __int64 i; // rdi
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rcx
  OGLModel *v16; // rcx
  __int64 v17; // rdi
  extension::AsyncAsset *v18; // rcx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *ExtTexture; // rax
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *Myfirst; // r8
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v21; // rcx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v22; // rcx
  int v23; // er14
  __int64 j; // rsi
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rdi
  float v30; // xmm6_4
  float v31; // xmm7_4
  float v32; // xmm8_4
  float v33; // xmm3_4
  __m128 v34; // xmm5
  __m128 v35; // xmm4
  int v36; // ecx
  __int64 v37; // r8
  __int64 v38; // rax
  __m128 v39; // xmm2
  __m128 v40; // xmm0
  float v41; // xmm1_4
  __m128 v42; // xmm0
  OGLModel **pModel; // r10
  __int64 k; // rdx
  int v45; // er9
  __int64 v46; // r8
  OGLMaterial *v47; // rax
  __int64 v48; // rdi
  extension::AsyncAsset *v49; // rcx
  extension::RefCountableWeakSupportBase::WeakProxy *v50; // rdx
  extension::AsyncContent<OGLTexture> *v51; // rdi
  OGLTexture *Myval2; // rdi
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v53; // rcx
  __int64 v54; // rdi
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *v55; // rax
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *v56; // rdx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v57; // r8
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v58; // rcx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v59; // rcx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> result; // [rsp+30h] [rbp-B8h] BYREF
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> v61; // [rsp+40h] [rbp-A8h] BYREF
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> v62; // [rsp+50h] [rbp-98h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 16i64);
  if ( v3 && !*(_BYTE *)(v3 + 96) )
  {
    if ( (*(_QWORD *)(v3 + 88) & 1) == 0 )
      extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v3 + 88), (extension::AsyncStatus::Step)v2);
    if ( *(_QWORD *)(v3 + 72) )
    {
      v4 = 0i64;
      v5 = *(extension::AsyncStatus **)(*(_QWORD *)&AppMain::pApp + 11064i64);
      v6 = *(_QWORD *)(v5[1].m_stateFlags.m_value._My_val + 16);
      if ( !v6 || *(_BYTE *)(v6 + 96) )
      {
        v7 = 0i64;
      }
      else
      {
        v5 = (extension::AsyncStatus *)(v6 + 88);
        if ( (*(_QWORD *)(v6 + 88) & 1) == 0 )
          extension::AsyncStatus::waitFor(v5, (extension::AsyncStatus::Step)v2);
        v7 = *(extension::AsyncAsset **)(v6 + 72);
      }
      AppMain::loadShaderFXDataToAsyncAsset((AppMain *)v5, v7, this->ModelRoomSettings.modelLightData);
      v9 = 0;
      for ( i = 0i64; ; ++i )
      {
        v11 = *(_QWORD *)&AppMain::pApp;
        v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
        if ( !v12 || *(_BYTE *)(v12 + 96) )
        {
          v13 = 0i64;
        }
        else
        {
          if ( (*(_QWORD *)(v12 + 88) & 1) == 0 )
            extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v12 + 88), (extension::AsyncStatus::Step)m_ptr);
          v13 = *(_QWORD *)(v12 + 72);
          v11 = *(_QWORD *)&AppMain::pApp;
        }
        if ( v9 >= (int)((__int64)(*(_QWORD *)(v13 + 208) - *(_QWORD *)(v13 + 200)) >> 3) )
          break;
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 11064) + 8i64) + 16i64);
        if ( !v14 || *(_BYTE *)(v14 + 96) )
        {
          v15 = 0i64;
        }
        else
        {
          if ( (*(_QWORD *)(v14 + 88) & 1) == 0 )
            extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v14 + 88), (extension::AsyncStatus::Step)m_ptr);
          v15 = *(_QWORD *)(v14 + 72);
        }
        if ( i < 0 || v9 >= (int)((__int64)(*(_QWORD *)(v15 + 208) - *(_QWORD *)(v15 + 200)) >> 3) )
          v16 = 0i64;
        else
          v16 = *(OGLModel **)(*(_QWORD *)(v15 + 200) + 8 * i);
        ++v9;
        this->pModel[i] = v16;
      }
      if ( this->ModelRoomSettings.postprocessSettings.waterSurfaceSettings.shaderOn
        || this->ModelRoomSettings.postprocessSettings.heatHazeSettings.heatHazeOn )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 11064) + 8i64) + 16i64);
        if ( !v17 || *(_BYTE *)(v17 + 96) )
        {
          v18 = 0i64;
        }
        else
        {
          if ( (*(_QWORD *)(v17 + 88) & 1) == 0 )
            extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v17 + 88), (extension::AsyncStatus::Step)m_ptr);
          v18 = *(extension::AsyncAsset **)(v17 + 72);
        }
        ExtTexture = extension::AsyncAsset::getExtTexture(v18, &result, 0);
        Myfirst = this->pTexture._Mypair._Myval2._Myfirst;
        Myfirst->m_isNoCache = ExtTexture->m_isNoCache;
        m_ptr = (extension::RefCountableWeakSupportBase::WeakProxy *)ExtTexture->m_body.m_ptr;
        if ( m_ptr )
          _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_principal[1], 1ui64);
        v21 = Myfirst->m_body.m_ptr;
        Myfirst->m_body.m_ptr = (extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *)m_ptr;
        if ( v21 )
        {
          m_ptr = v21->m_refCount.m_ptr;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_sharedCount, 0xFFFFFFFFFFFFFFFFui64) == 1 )
            ((void (__fastcall *)(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *, __int64))v21->~RefCountableWeakSupportBase)(
              v21,
              1i64);
        }
        v22 = result.m_body.m_ptr;
        if ( result.m_body.m_ptr )
        {
          m_ptr = result.m_body.m_ptr->m_refCount.m_ptr;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_sharedCount, 0xFFFFFFFFFFFFFFFFui64) == 1 )
            ((void (__fastcall *)(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *, __int64))v22->~RefCountableWeakSupportBase)(
              v22,
              1i64);
        }
        v11 = *(_QWORD *)&AppMain::pApp;
      }
      v23 = 0;
      for ( j = 0i64; ; ++j )
      {
        v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 11064) + 8i64) + 16i64);
        if ( !v25 || *(_BYTE *)(v25 + 96) )
        {
          v26 = 0i64;
        }
        else
        {
          if ( (*(_QWORD *)(v25 + 88) & 1) == 0 )
            extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v25 + 88), (extension::AsyncStatus::Step)m_ptr);
          v26 = *(_QWORD *)(v25 + 72);
          v11 = *(_QWORD *)&AppMain::pApp;
        }
        if ( v23 >= (int)((__int64)(*(_QWORD *)(v26 + 208) - *(_QWORD *)(v26 + 200)) >> 3) )
          break;
        v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 11064) + 8i64) + 16i64);
        if ( !v27 || *(_BYTE *)(v27 + 96) )
        {
          v28 = 0i64;
        }
        else
        {
          if ( (*(_QWORD *)(v27 + 88) & 1) == 0 )
            extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v27 + 88), (extension::AsyncStatus::Step)m_ptr);
          v28 = *(_QWORD *)(v27 + 72);
          v11 = *(_QWORD *)&AppMain::pApp;
        }
        if ( j < 0 || v23 >= (int)((__int64)(*(_QWORD *)(v28 + 208) - *(_QWORD *)(v28 + 200)) >> 3) )
          v29 = 0i64;
        else
          v29 = *(_QWORD *)(*(_QWORD *)(v28 + 200) + 8 * j);
        if ( v29 && !strcmp(*(const char **)(v29 + 8824), "SUNLIGHT") )
        {
          v30 = FLOAT_99999_0;
          v31 = FLOAT_99999_0;
          v32 = FLOAT_99999_0;
          v33 = FLOAT_N99999_0;
          v34 = (__m128)LODWORD(FLOAT_N99999_0);
          v35 = (__m128)LODWORD(FLOAT_N99999_0);
          v36 = 22 * *(_DWORD *)(*(_QWORD *)(v29 + 360) + 16i64);
          if ( v36 )
          {
            v37 = *(_QWORD *)(v29 + 1176) + 8i64;
            LODWORD(m_ptr) = (v36 - 1) / 0x16u;
            v38 = (unsigned int)((_DWORD)m_ptr + 1);
            do
            {
              v39 = (__m128)*(unsigned int *)(v37 - 4);
              v40 = (__m128)*(unsigned int *)(v37 - 8);
              v40.m128_f32[0] = fmaxf(v40.m128_f32[0], v35.m128_f32[0]);
              v41 = fminf(*(float *)(v37 - 8), v32);
              v37 += 88i64;
              v35 = v40;
              v42 = v39;
              v42.m128_f32[0] = fmaxf(v39.m128_f32[0], v34.m128_f32[0]);
              v32 = v41;
              v34 = v42;
              v31 = fminf(v39.m128_f32[0], v31);
              v33 = fmaxf(*(float *)(v37 - 88), v33);
              v30 = fminf(*(float *)(v37 - 88), v30);
              --v38;
            }
            while ( v38 );
          }
          v35.m128_f32[0] = (float)(v35.m128_f32[0] + v32) * 0.5;
          v34.m128_f32[0] = (float)(v34.m128_f32[0] + v31) * 0.5;
          *(_QWORD *)(v29 + 220) = _mm_unpacklo_ps(v35, v34).m128_u64[0];
          *(_DWORD *)(v29 + 228) = COERCE_UNSIGNED_INT((float)(v33 + v30) * 0.5) ^ _xmm;
        }
        ++v23;
      }
      pModel = this->pModel;
      for ( k = 0i64; k < 44; ++k )
      {
        if ( pModel[k] )
        {
          v45 = 0;
          if ( pModel[k]->m_ucMaterialCount )
          {
            v46 = 0i64;
            do
            {
              v47 = &pModel[k]->m_pMaterial[v46];
              if ( v47 && (v47->m_ucEffectFlg & 0x4000000) != 0 )
                this->ModelRoomSettings.postprocessSettings.extraBGSettings.monitorOn = 1;
              ++v45;
              ++v46;
            }
            while ( v45 < pModel[k]->m_ucMaterialCount );
          }
        }
      }
      if ( this->ModelRoomSettings.postprocessSettings.godRaySettings.shaderOn )
      {
        v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 11064) + 8i64) + 16i64);
        if ( !v48 || *(_BYTE *)(v48 + 96) )
        {
          v49 = 0i64;
        }
        else
        {
          if ( (*(_QWORD *)(v48 + 88) & 1) == 0 )
            extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v48 + 88), (extension::AsyncStatus::Step)(k * 8));
          v49 = *(extension::AsyncAsset **)(v48 + 72);
        }
        v51 = extension::AsyncAsset::getExtTexture(v49, &v61, 1)->m_body.m_ptr->m_content.m_ptr;
        if ( !v51 || v51->m_isDataReleased )
        {
          Myval2 = 0i64;
        }
        else
        {
          if ( (v51->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v51->m_status, (extension::AsyncStatus::Step)v50);
          Myval2 = v51->m_data._Mypair._Myval2;
        }
        v53 = v61.m_body.m_ptr;
        if ( v61.m_body.m_ptr )
        {
          v50 = v61.m_body.m_ptr->m_refCount.m_ptr;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)&v50->m_sharedCount, 0xFFFFFFFFFFFFFFFFui64) == 1 )
            ((void (__fastcall *)(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *, __int64))v53->~RefCountableWeakSupportBase)(
              v53,
              1i64);
        }
        if ( Myval2 )
        {
          v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 8i64) + 16i64);
          if ( v54 && !*(_BYTE *)(v54 + 96) )
          {
            if ( (*(_QWORD *)(v54 + 88) & 1) == 0 )
              extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v54 + 88), (extension::AsyncStatus::Step)v50);
            v4 = *(extension::AsyncAsset **)(v54 + 72);
          }
          v55 = extension::AsyncAsset::getExtTexture(v4, &v62, 1);
          v56 = this->pTexture._Mypair._Myval2._Myfirst;
          v56[1].m_isNoCache = v55->m_isNoCache;
          v57 = v55->m_body.m_ptr;
          if ( v57 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)&v57->m_refCount.m_ptr->m_sharedCount, 1ui64);
          v58 = v56[1].m_body.m_ptr;
          v56[1].m_body.m_ptr = v57;
          if ( v58
            && _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&v58->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            ((void (__fastcall *)(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *, __int64))v58->~RefCountableWeakSupportBase)(
              v58,
              1i64);
          }
          v59 = v62.m_body.m_ptr;
          if ( v62.m_body.m_ptr
            && _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&v62.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            ((void (__fastcall *)(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *, __int64))v59->~RefCountableWeakSupportBase)(
              v59,
              1i64);
          }
        }
      }
    }
  }
}

std::string *__fastcall extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize(
        std::string *result,
        const extension::FutureAssetOption *opt)
{
  std::string *v4; // rax

  if ( __TSS0__1__Stringize___FutureObjectJobManager_VAsyncAsset_extension__UFutureAssetOption_2__extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureAssetOption_3__Z_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1__Stringize___FutureObjectJobManager_VAsyncAsset_extension__UFutureAssetOption_2__extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureAssetOption_3__Z_4HA);
    if ( __TSS0__1__Stringize___FutureObjectJobManager_VAsyncAsset_extension__UFutureAssetOption_2__extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureAssetOption_3__Z_4HA == -1 )
    {
      `extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.playerNo = 1;
      *(_OWORD *)&`extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.fileSetting._Mypair._Myval2._Myfirst = 0i64;
      *(_WORD *)&`extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.disableShaderFXMaterialLight = 0;
      `extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.bNoMotion = 0;
      `extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.effectPath._Mypair._Myval2._Myres = 15i64;
      `extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.effectPath._Mypair._Myval2._Mysize = 0i64;
      `extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.effectPath._Mypair._Myval2._Bx._Buf[0] = 0;
      `extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.baseDataFlag = 0;
      `extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.baseCharaPath._Mypair._Myval2._Myres = 15i64;
      `extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.baseCharaPath._Mypair._Myval2._Mysize = 0i64;
      `extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.baseCharaPath._Mypair._Myval2._Bx._Buf[0] = 0;
      `extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::default_opt.fileSetting._Mypair._Myval2._Myend = 0i64;
      atexit(`extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize'::`2'::`dynamic atexit destructor for 'default_opt'');
      Init_thread_footer(&__TSS0__1__Stringize___FutureObjectJobManager_VAsyncAsset_extension__UFutureAssetOption_2__extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureAssetOption_3__Z_4HA);
    }
  }
  if ( !opt || extension::FutureAssetOption::operator==((extension::FutureAssetOption *)opt, opt) )
  {
    result->_Mypair._Myval2._Mysize = 0i64;
    v4 = result;
    result->_Mypair._Myval2._Myres = 15i64;
    result->_Mypair._Myval2._Bx._Buf[0] = 0;
  }
  else
  {
    extension::FutureAssetOption::stringize((extension::FutureAssetOption *)opt, result);
    return result;
  }
  return v4;
}

std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *__fastcall std::_List_alloc<std::_List_base_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>::_Buynode0(
        std::_List_alloc<std::_List_base_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> > *this,
        std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *_Next,
        std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *_Prev)
{
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *result; // rax

  result = (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)operator new(0x40ui64);
  if ( !_Next )
  {
    _Next = result;
    _Prev = result;
  }
  if ( result )
    result->_Next = _Next;
  if ( result != (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)-8i64 )
    result->_Prev = _Prev;
  return result;
}

void __fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>>>,0>>::_Check_size(
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *this)
{
  signed __int64 Mysize; // rax
  __int64 Maxidx; // rdx
  float v4; // xmm0_4
  float v5; // xmm1_4
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Myhead; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Prev; // rdi
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rbx
  std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >,bool> result; // [rsp+20h] [rbp-18h] BYREF

  Mysize = this->_List._Mypair._Myval2._Mysize;
  Maxidx = this->_Maxidx;
  v4 = (float)(int)Mysize;
  if ( Mysize < 0 )
    v4 = v4 + 1.8446744e19;
  v5 = (float)(int)Maxidx;
  if ( Maxidx < 0 )
    v5 = v5 + 1.8446744e19;
  if ( (float)(v4 / v5) > this->_Traitsobj._Mypair._Myval2._Myval2 )
  {
    if ( (unsigned __int64)Maxidx >= 0x200 )
    {
      if ( (unsigned __int64)Maxidx < 0xFFFFFFFFFFFFFFFi64 )
        Maxidx *= 2i64;
    }
    else
    {
      Maxidx *= 8i64;
    }
    std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>,0>>::_Init(
      (std::_Hash<std::_Umap_traits<extension::SoundHashKey,int,std::_Uhash_compare<extension::SoundHashKey,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey> >,std::allocator<std::pair<extension::SoundHashKey const ,int> >,0> > *)this,
      Maxidx);
    Myhead = this->_List._Mypair._Myval2._Myhead;
    if ( Myhead->_Next != Myhead )
    {
      Prev = Myhead->_Prev;
      do
      {
        Next = this->_List._Mypair._Myval2._Myhead->_Next;
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>,0>>::_Insert<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>(
          this,
          &result,
          &Next->_Myval,
          (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >)Next);
      }
      while ( Next != Prev );
    }
  }
}

void __fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>,0>>::_Destroy_if_not_nil(
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *this,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > _Plist)
{
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // rcx

  _Plist._Ptr->_Prev->_Next = _Plist._Ptr->_Next;
  _Plist._Ptr->_Next->_Prev = _Plist._Ptr->_Prev;
  --this->_List._Mypair._Myval2._Mysize;
  m_ptr = _Plist._Ptr->_Myval.second.m_proxy.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    operator delete(m_ptr, 0x18ui64);
  std::string::~string((std::string *)&_Plist._Ptr->_Myval.first);
  operator delete(_Plist._Ptr);
}

void __fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>,0>>::_Init(
        std::_Hash<std::_Umap_traits<extension::SoundHashKey,int,std::_Uhash_compare<extension::SoundHashKey,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey> >,std::allocator<std::pair<extension::SoundHashKey const ,int> >,0> > *this,
        unsigned __int64 _Buckets)
{
  unsigned __int64 v2; // rdi
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > _Val; // [rsp+50h] [rbp+8h] BYREF
  std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > result; // [rsp+58h] [rbp+10h] BYREF

  v2 = 2 * _Buckets;
  if ( this->_Vec._Mypair._Myval2._Myend - this->_Vec._Mypair._Myval2._Myfirst < 2 * _Buckets )
  {
    if ( v2 > 0x1FFFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>::_Reallocate(
      &this->_Vec,
      v2);
  }
  _Val._Ptr = this->_List._Mypair._Myval2._Myhead;
  this->_Vec._Mypair._Myval2._Mylast = this->_Vec._Mypair._Myval2._Myfirst;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>>>>::_Insert_n(
    &this->_Vec,
    &result,
    (std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > >)this->_Vec._Mypair._Myval2._Myfirst,
    v2,
    &_Val);
  this->_Mask = _Buckets - 1;
  this->_Maxidx = _Buckets;
}

std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>>>>::_Insert_n(
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *this,
        std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *result,
        std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > _Where,
        unsigned __int64 _Count,
        const std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Val)
{
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *Myfirst; // r8
  signed __int64 v10; // r12
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *Mylast; // r14
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdx
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v15; // rcx
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v16; // rbx
  signed __int64 v17; // r14
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v18; // r9
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v19; // r9
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v20; // r9
  std::allocator<AgLogger *> *v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v24; // r9
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r8
  std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> *v28; // rax
  std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> *Ptr; // rbx
  unsigned __int64 v30; // r15
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *i; // rdx
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > _Pval; // [rsp+80h] [rbp+8h] BYREF
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Last; // [rsp+90h] [rbp+18h]
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v35; // [rsp+98h] [rbp+20h]

  _Last = _Where._Ptr;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v10 = _Where._Ptr - this->_Mypair._Myval2._Myfirst;
  if ( _Count )
  {
    Mylast = this->_Mypair._Myval2._Mylast;
    if ( this->_Mypair._Myval2._Myend - Mylast >= _Count )
    {
      if ( Mylast - _Where._Ptr >= _Count )
      {
        Ptr = _Val->_Ptr;
        v30 = _Count;
        this->_Mypair._Myval2._Mylast = std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
                                          &Mylast[-_Count],
                                          Mylast,
                                          Mylast,
                                          (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)_Count);
        memmove(&_Last[_Count], _Last, (size_t)Mylast - 8 * _Count - (_QWORD)_Last);
        for ( i = _Last; i != &_Last[v30]; ++i )
          i->_Ptr = Ptr;
      }
      else
      {
        _Pval._Ptr = _Val->_Ptr;
        v23 = 8 * _Count;
        std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
          _Where._Ptr,
          Mylast,
          &_Where._Ptr[_Count],
          (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)_Count);
        std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>> *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>(
          this->_Mypair._Myval2._Mylast,
          _Count - (this->_Mypair._Myval2._Mylast - _Last),
          &_Pval,
          v24);
        this->_Mypair._Myval2._Mylast = (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)((char *)this->_Mypair._Myval2._Mylast + v23);
        v25 = _Last;
        v26 = 0i64;
        v27 = (unsigned __int64)((char *)&this->_Mypair._Myval2._Mylast[v23 / 0xFFFFFFFFFFFFFFF8ui64] - (char *)_Last + 7) >> 3;
        if ( _Last > &this->_Mypair._Myval2._Mylast[v23 / 0xFFFFFFFFFFFFFFF8ui64] )
          v27 = 0i64;
        if ( v27 )
        {
          v28 = _Pval._Ptr;
          do
          {
            v25->_Ptr = v28;
            ++v25;
            ++v26;
          }
          while ( v26 != v27 );
        }
      }
    }
    else
    {
      v12 = Mylast - Myfirst;
      if ( 0x1FFFFFFFFFFFFFFFi64 - v12 < _Count )
        std::_Xlength_error("vector<T> too long");
      v13 = v12 + _Count;
      v14 = this->_Mypair._Myval2._Myend - Myfirst;
      v15 = 0i64;
      if ( 0x1FFFFFFFFFFFFFFFi64 - (v14 >> 1) >= v14 )
        v15 = (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)(v14 + (v14 >> 1));
      if ( (unsigned __int64)v15 >= v13 )
        v13 = (unsigned __int64)v15;
      _Pval._Ptr = (std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> *)v13;
      v16 = std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>>>>>>>>::allocate(
              v15,
              v13);
      v35 = v16;
      v17 = _Last - this->_Mypair._Myval2._Myfirst;
      std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>> *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>(
        &v16[v17],
        _Count,
        _Val,
        v18);
      std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
        this->_Mypair._Myval2._Myfirst,
        _Last,
        v16,
        v19);
      std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
        _Last,
        this->_Mypair._Myval2._Mylast,
        &v16[v17 + _Count],
        v20);
      v22 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst + _Count;
      if ( this->_Mypair._Myval2._Myfirst )
        std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
          v21,
          (AgLogger **)this->_Mypair._Myval2._Myfirst,
          this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
      this->_Mypair._Myval2._Myend = &v16[v13];
      this->_Mypair._Myval2._Mylast = &v16[v22];
      this->_Mypair._Myval2._Myfirst = v16;
    }
  }
  result->_Ptr = &this->_Mypair._Myval2._Myfirst[v10];
  return result;
}

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>::_Reallocate(
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *this,
        unsigned __int64 _Count)
{
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v4; // rdi
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v5; // r9
  std::allocator<AgLogger *> *v6; // rcx
  signed __int64 v7; // rsi

  v4 = std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>>>>>>>>::allocate(
         (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)this,
         _Count);
  std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    v5);
  v7 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v6,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = &v4[v7];
  this->_Mypair._Myval2._Myfirst = v4;
}

std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *__fastcall std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>>>>>>>>::allocate(
        std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *this,
        unsigned __int64 _Count)
{
  unsigned __int64 v3; // rcx
  void *v4; // rax

  if ( !_Count )
    return 0i64;
  if ( _Count > 0x1FFFFFFFFFFFFFFFi64 )
    std::_Xbad_alloc();
  v3 = 8 * _Count;
  if ( 8 * _Count < 0x1000 )
    return (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)operator new(v3);
  if ( v3 + 39 <= v3 )
    std::_Xbad_alloc();
  v4 = operator new(v3 + 39);
  *(_QWORD *)((((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64) - 8) = v4;
  return (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
}

unsigned __int8 __fastcall AppMain::battleShaderLoad(AppMain *this)
{
  AppMain::ShaderLoadThreadHost *v2; // rax
  AgController *v3; // rax
  AgReferenceCount *m_ref; // rcx
  AgThread *m_ptr; // rax
  AppMain::ShaderLoadThreadHost *m_shaderLoadThreadHost; // rcx
  char *v7; // rdi
  AgController *v8; // rax
  AgPointer<KOFApplication> v10; // [rsp+38h] [rbp-20h] BYREF
  AgThread *v11; // [rsp+60h] [rbp+8h]
  AgThread *v12; // [rsp+60h] [rbp+8h]

  if ( !this->iBattleShaderLoad )
  {
    this->iBattleShaderLoad = 1;
    v2 = (AppMain::ShaderLoadThreadHost *)operator new(0x18ui64);
    v2->__vftable = (AppMain::ShaderLoadThreadHost_vtbl *)&AgSimpleThreadHost::`vftable';
    v2->m_abort = 0;
    v2->m_running = 1;
    v2->__vftable = (AppMain::ShaderLoadThreadHost_vtbl *)&AppMain::ShaderLoadThreadHost::`vftable';
    v2->m_appMain = this;
    this->m_shaderLoadThreadHost = v2;
    v11 = (AgThread *)operator new(0x28ui64);
    AgThread::AgThread(v11, this->m_shaderLoadThreadHost, 0x100000ui64, 100, "shaderLoadThread");
    AgPointer<AgThread>::operator=((AgPointer<AgController> *)&this->m_shaderLoadThread, v3);
    return 0;
  }
  if ( this->iBattleShaderLoad != 2 )
    return 0;
  m_ref = this->m_shaderLoadThread.m_ref;
  m_ptr = this->m_shaderLoadThread.m_ptr;
  this->m_shaderLoadThread.m_ref = 0i64;
  this->m_shaderLoadThread.m_ptr = 0i64;
  v10.m_ref = m_ref;
  v10.m_ptr = (KOFApplication *)m_ptr;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v10);
  m_shaderLoadThreadHost = this->m_shaderLoadThreadHost;
  if ( m_shaderLoadThreadHost )
    ((void (__fastcall *)(AppMain::ShaderLoadThreadHost *, __int64))m_shaderLoadThreadHost->~AgIThreadHost)(
      m_shaderLoadThreadHost,
      1i64);
  this->m_shaderLoadThreadHost = 0i64;
  v7 = (char *)operator new(0x90ui64);
  *(_QWORD *)v7 = &AgSimpleThreadHost::`vftable';
  *((_DWORD *)v7 + 2) = 0;
  *((_DWORD *)v7 + 3) = 1;
  *(_QWORD *)v7 = &AppMain::ShaderEnsureThreadHost::`vftable';
  *((_QWORD *)v7 + 2) = this;
  *((_DWORD *)v7 + 10) = 0;
  *((_DWORD *)v7 + 11) = -1;
  *((_QWORD *)v7 + 6) = v7 + 64;
  InitializeConditionVariable((PCONDITION_VARIABLE)v7 + 7);
  InitializeCriticalSection((LPCRITICAL_SECTION)(v7 + 64));
  InitializeCriticalSection((LPCRITICAL_SECTION)(v7 + 104));
  this->m_shaderEnsureThreadHost = (AppMain::ShaderEnsureThreadHost *)v7;
  v12 = (AgThread *)operator new(0x28ui64);
  AgThread::AgThread(v12, this->m_shaderEnsureThreadHost, 0x100000ui64, 0, "shaderEnsureThread");
  AgPointer<AgThread>::operator=((AgPointer<AgController> *)&this->m_shaderEnsureThread, v8);
  return 1;
}

void __fastcall AppMain::battleShaderUnloadCharacterShaders(AppMain *this)
{
  int v2; // ebx
  CHARACTER_NO *v3; // rdi

  if ( *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2197496i64)
    || ((unsigned int (__fastcall *)(AgSingleton<AgSystemManager> *))AgSingleton<AgSystemManager>::ms_instance->__vftable[3].~AgSingleton<AgSystemManager>)(AgSingleton<AgSystemManager>::ms_instance)
     - 1 <= 0x7FE )
  {
    v2 = 0;
    if ( g_numChars > 0 )
    {
      v3 = g_chars;
      do
      {
        AppMain::unloadCharacterShaders(this, *v3);
        ++v2;
        ++v3;
      }
      while ( v2 < g_numChars );
    }
  }
}

void __fastcall std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>>>::clear(
        std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *this)
{
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rdi
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // rcx
  void **p_Myval; // rbx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v5; // rsi
  unsigned __int64 Myres; // rax
  char *v7; // rcx
  char *v8; // rax
  unsigned __int64 v9; // rcx
  bool v10; // cf

  Next = this->_Mypair._Myval2._Myhead->_Next;
  this->_Mypair._Myval2._Myhead->_Next = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Myhead->_Prev = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Mysize = 0i64;
  if ( Next != this->_Mypair._Myval2._Myhead )
  {
    do
    {
      m_ptr = Next->_Myval.second.m_proxy.m_ptr;
      p_Myval = (void **)&Next->_Myval;
      v5 = Next->_Next;
      if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
        operator delete(m_ptr, 0x18ui64);
      Myres = Next->_Myval.first._Mypair._Myval2._Myres;
      if ( Myres >= 0x10 )
      {
        v7 = (char *)*p_Myval;
        if ( Myres + 1 >= 0x1000 )
        {
          if ( ((unsigned __int8)v7 & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v8 = (char *)*((_QWORD *)v7 - 1);
          if ( v8 >= v7 )
            invalid_parameter_noinfo_noreturn();
          v9 = v7 - v8;
          if ( v9 < 8 )
            invalid_parameter_noinfo_noreturn();
          if ( v9 > 0x27 )
            invalid_parameter_noinfo_noreturn();
          v7 = v8;
        }
        operator delete(v7);
      }
      Next->_Myval.first._Mypair._Myval2._Myres = 15i64;
      v10 = Next->_Myval.first._Mypair._Myval2._Myres < 0x10;
      Next->_Myval.first._Mypair._Myval2._Mysize = 0i64;
      if ( !v10 )
        p_Myval = (void **)*p_Myval;
      *(_BYTE *)p_Myval = 0;
      operator delete(Next);
      Next = v5;
    }
    while ( v5 != this->_Mypair._Myval2._Myhead );
  }
}

Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::QName> *__fastcall extension::FutureObjectJob<OGLCurve>::createOnErrorData(
        Scaleform::GFx::AS3::Instances::fl::XML *this,
        Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::QName> *result)
{
  result->pObject = 0i64;
  return result;
}

void __fastcall std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
        std::allocator<AgLogger *> *this,
        AgLogger **_Ptr,
        unsigned __int64 _Count)
{
  AgLogger **v3; // rax
  char *v4; // rdx

  if ( _Count > 0x1FFFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 8 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = (AgLogger **)*(_Ptr - 1);
    if ( v3 >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)v3);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = v3;
  }
  operator delete(_Ptr);
}

std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *__fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>>,0>>::erase(
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *this,
        std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *result,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > _Plist)
{
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *p_Myval; // r9
  unsigned __int64 Mysize; // r11
  unsigned __int64 v7; // rcx
  __int64 i; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *v11; // rcx

  p_Myval = &_Plist._Ptr->_Myval;
  Mysize = _Plist._Ptr->_Myval.first._Mypair._Myval2._Mysize;
  if ( _Plist._Ptr->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
    p_Myval = (std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *)p_Myval->first._Mypair._Myval2._Bx._Ptr;
  v7 = 0i64;
  for ( i = 0xCBF29CE484222325ui64; v7 < Mysize; i = 0x100000001B3i64 * (v9 ^ i) )
    v9 = (unsigned __int8)p_Myval->first._Mypair._Myval2._Bx._Buf[v7++];
  v10 = 2 * (i & this->_Mask);
  v11 = &this->_Vec._Mypair._Myval2._Myfirst[v10];
  if ( v11[1]._Ptr == _Plist._Ptr )
  {
    if ( v11->_Ptr == _Plist._Ptr )
    {
      v11->_Ptr = this->_List._Mypair._Myval2._Myhead;
      this->_Vec._Mypair._Myval2._Myfirst[v10 + 1]._Ptr = this->_List._Mypair._Myval2._Myhead;
    }
    else
    {
      v11[1]._Ptr = _Plist._Ptr->_Prev;
    }
  }
  else if ( v11->_Ptr == _Plist._Ptr )
  {
    v11->_Ptr = _Plist._Ptr->_Next;
  }
  std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>::erase(
    &this->_List,
    result,
    _Plist);
  return result;
}

std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *__fastcall std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>::erase(
        std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *this,
        std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *result,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > _Where)
{
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // rcx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // [rsp+40h] [rbp+18h]

  Next = _Where._Ptr->_Next;
  _Where._Ptr->_Prev->_Next = _Where._Ptr->_Next;
  _Where._Ptr->_Next->_Prev = _Where._Ptr->_Prev;
  --this->_Mypair._Myval2._Mysize;
  m_ptr = _Where._Ptr->_Myval.second.m_proxy.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    operator delete(m_ptr, 0x18ui64);
  std::string::~string((std::string *)&_Where._Ptr->_Myval.first);
  operator delete(_Where._Ptr);
  result->_Ptr = Next;
  return result;
}

extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> *__fastcall extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache::getCachedOrLoadStart(
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache *this,
        extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> *result,
        std::string *name,
        const extension::FutureAssetOption *opt)
{
  volatile signed __int64 *v7; // rsi
  std::string *v8; // rax
  char *Ptr; // rcx
  char *v10; // rax
  unsigned __int64 v11; // rax
  bool v12; // r12
  std::string *v13; // rax
  std::string *v14; // rax
  char *v15; // rcx
  char *v16; // rax
  char *v17; // rcx
  char *v18; // rax
  unsigned __int64 Mysize; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 Myres; // rdx
  std::string *p_Keyval; // rax
  std::string *v23; // rax
  std::string *v24; // rax
  extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *v25; // rax
  extension::AsyncStatus::Step v26; // edx
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *m_ptr; // rcx
  extension::AsyncContent<extension::AsyncAsset> *v28; // rax
  extension::AsyncContent<extension::AsyncAsset> *v29; // rbx
  std::string *v30; // rcx
  std::string *v31; // rax
  std::string *v32; // rax
  std::string *v33; // rcx
  std::string *v34; // rax
  std::string *v35; // rax
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v36; // rbx
  extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > *v37; // rax
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v38; // rcx
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v39; // rax
  extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> *v40; // rax
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v41; // rcx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> >,void *> *Next; // rbx
  std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v43; // r8
  extension::RefCountableWeakSupportBase::WeakProxy *v44; // rax
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v46; // [rsp+28h] [rbp-D8h]
  extension::RefCountableWeakSupportBase::WeakProxy *block; // [rsp+30h] [rbp-D0h]
  extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > v48; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+40h] [rbp-C0h]
  extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> *v50; // [rsp+48h] [rbp-B8h]
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v51; // [rsp+50h] [rbp-B0h]
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v52; // [rsp+60h] [rbp-A0h] BYREF
  extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache> *v53; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+70h] [rbp-90h]
  std::string *v55; // [rsp+78h] [rbp-88h]
  std::string _Keyval; // [rsp+80h] [rbp-80h] BYREF
  std::string v57; // [rsp+A0h] [rbp-60h] BYREF
  std::string _Right; // [rsp+C0h] [rbp-40h] BYREF
  std::string resulta; // [rsp+E0h] [rbp-20h] BYREF
  std::string v60; // [rsp+100h] [rbp+0h] BYREF
  std::string v61; // [rsp+120h] [rbp+20h] BYREF
  std::string v62; // [rsp+140h] [rbp+40h] BYREF
  std::string v63; // [rsp+160h] [rbp+60h] BYREF
  std::string v64; // [rsp+180h] [rbp+80h] BYREF

  v49 = -2i64;
  v50 = result;
  v55 = name;
  v7 = 0i64;
  v8 = extension::AsyncWorker::NormalizeAssetPath(&resulta, name);
  std::string::assign(name, v8);
  if ( resulta._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = resulta._Mypair._Myval2._Bx._Ptr;
    if ( resulta._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (resulta._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v10 = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
      if ( v10 >= resulta._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v10) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v10) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  v11 = std::string::find(name, "obm", 0i64, 3ui64);
  v12 = v11 != -1i64;
  if ( v11 != -1i64 )
  {
    v13 = std::string::substr(name, &v60, 0i64, name->_Mypair._Myval2._Mysize - 3);
    v14 = std::operator+<char>(&v57, v13, "dds");
    std::string::assign(name, v14);
    if ( v57._Mypair._Myval2._Myres >= 0x10 )
    {
      v15 = v57._Mypair._Myval2._Bx._Ptr;
      if ( v57._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v57._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v16 = (char *)*((_QWORD *)v57._Mypair._Myval2._Bx._Ptr - 1);
        if ( v16 >= v57._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v57._Mypair._Myval2._Bx._Ptr - v16) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v57._Mypair._Myval2._Bx._Ptr - v16) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v15 = (char *)*((_QWORD *)v57._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v15);
    }
    v57._Mypair._Myval2._Myres = 15i64;
    v57._Mypair._Myval2._Mysize = 0i64;
    v57._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( v60._Mypair._Myval2._Myres >= 0x10 )
    {
      v17 = v60._Mypair._Myval2._Bx._Ptr;
      if ( v60._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v60._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v18 = (char *)*((_QWORD *)v60._Mypair._Myval2._Bx._Ptr - 1);
        if ( v18 >= v60._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v60._Mypair._Myval2._Bx._Ptr - v18) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v60._Mypair._Myval2._Bx._Ptr - v18) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v17 = (char *)*((_QWORD *)v60._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v17);
    }
  }
  extension::AsyncWorker::ToLowerCasePath(&_Keyval, name);
  extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize(&_Right, opt);
  if ( _Right._Mypair._Myval2._Mysize )
  {
    Mysize = _Keyval._Mypair._Myval2._Mysize;
    if ( _Keyval._Mypair._Myval2._Mysize == -1i64 || ~_Keyval._Mypair._Myval2._Mysize == 1 )
      std::_Xlength_error("string too long");
    v20 = _Keyval._Mypair._Myval2._Mysize + 1;
    if ( _Keyval._Mypair._Myval2._Mysize == -2i64 )
      std::_Xlength_error("string too long");
    Myres = _Keyval._Mypair._Myval2._Myres;
    if ( _Keyval._Mypair._Myval2._Myres >= v20 )
    {
      if ( _Keyval._Mypair._Myval2._Mysize != -1i64 )
        goto LABEL_50;
      _Keyval._Mypair._Myval2._Mysize = 0i64;
      p_Keyval = &_Keyval;
      if ( _Keyval._Mypair._Myval2._Myres >= 0x10 )
        p_Keyval = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
      p_Keyval->_Mypair._Myval2._Bx._Buf[0] = 0;
    }
    else
    {
      std::string::_Copy(&_Keyval, _Keyval._Mypair._Myval2._Mysize + 1, _Keyval._Mypair._Myval2._Mysize);
    }
    Mysize = _Keyval._Mypair._Myval2._Mysize;
    Myres = _Keyval._Mypair._Myval2._Myres;
    if ( !v20 )
    {
LABEL_55:
      std::string::append(&_Keyval, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      goto LABEL_56;
    }
LABEL_50:
    v23 = &_Keyval;
    if ( Myres >= 0x10 )
      v23 = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
    v23->_Mypair._Myval2._Bx._Buf[Mysize] = 63;
    _Keyval._Mypair._Myval2._Mysize = v20;
    v24 = &_Keyval;
    if ( _Keyval._Mypair._Myval2._Myres >= 0x10 )
      v24 = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
    v24->_Mypair._Myval2._Bx._Buf[v20] = 0;
    goto LABEL_55;
  }
LABEL_56:
  v53 = &extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache>;
  v54 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache>);
  v25 = (extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *)std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
                                                                                            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.m_cachedObjectMap,
                                                                                            &_Keyval);
  extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>::lock(
    v25,
    (extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *)result);
  m_ptr = result->m_ptr;
  if ( !result->m_ptr )
    goto LABEL_69;
  v28 = m_ptr->m_content.m_ptr;
  if ( !v28 || v28->m_isDataReleased )
    goto LABEL_66;
  if ( (v28->m_status.m_stateFlags.m_value._My_val & 1) != 0 )
  {
    v29 = result->m_ptr->m_content.m_ptr;
    if ( v29 )
    {
      if ( !v29->m_isDataReleased )
      {
        if ( (v29->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v29->m_status, v26);
        if ( v29->m_errorCode )
        {
          m_ptr = result->m_ptr;
LABEL_66:
          result->m_ptr = 0i64;
          if ( m_ptr
            && _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
              m_ptr,
              1i64);
          }
        }
      }
    }
  }
LABEL_69:
  if ( !result->m_ptr )
  {
    if ( v12 )
    {
      v30 = name->_Mypair._Myval2._Myres < 0x10 ? name : (std::string *)name->_Mypair._Myval2._Bx._Ptr;
      if ( !(unsigned __int8)CFile::exists(v30->_Mypair._Myval2._Bx._Buf) )
      {
        v31 = std::string::substr(name, &v62, 0i64, name->_Mypair._Myval2._Mysize - 3);
        v32 = std::operator+<char>(&v61, v31, "dds");
        std::string::assign(name, v32);
        std::string::~string(&v61);
        std::string::~string(&v62);
        v33 = name->_Mypair._Myval2._Myres < 0x10 ? name : (std::string *)name->_Mypair._Myval2._Bx._Ptr;
        if ( !(unsigned __int8)CFile::exists(v33->_Mypair._Myval2._Bx._Buf) )
        {
          v34 = std::string::substr(name, &v64, 0i64, name->_Mypair._Myval2._Mysize - 3);
          v35 = std::operator+<char>(&v63, v34, "png");
          std::string::assign(name, v35);
          std::string::~string(&v63);
          std::string::~string(&v64);
        }
      }
    }
    v36 = (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *)operator new(0x18ui64);
    v51 = v36;
    v37 = extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::LoadStart(
            &v48,
            name,
            &_Right,
            opt);
    extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body::Body(
      v36,
      (extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >)v37);
    v38 = result->m_ptr;
    result->m_ptr = v39;
    if ( v38
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v38->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *, __int64))v38->~RefCountableWeakSupportBase)(
        v38,
        1i64);
    }
    v40 = std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.m_cachedObjectMap,
            &_Keyval);
    v41 = result->m_ptr;
    v46 = result->m_ptr;
    if ( result->m_ptr )
    {
      v7 = (volatile signed __int64 *)v41->m_refCount.m_ptr;
      if ( v7 )
      {
        _InterlockedExchangeAdd64(v7, 1ui64);
        v41 = v46;
      }
    }
    v40->m_ptr = (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *)v41;
    block = v40->m_proxy.m_ptr;
    v40->m_proxy.m_ptr = (extension::RefCountableWeakSupportBase::WeakProxy *)v7;
    if ( block && _InterlockedExchangeAdd64((volatile signed __int64 *)block, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      operator delete(block, 0x18ui64);
  }
  Next = extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead->_Next;
  while ( Next != extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead )
  {
    v43._Ptr = (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)Next;
    v44 = Next->_Myval.second.m_proxy.m_ptr;
    Next = Next->_Next;
    if ( !v44 || !v44->m_sharedCount.m_value._My_val )
      std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>>,0>>::erase(
        (std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *)&extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.m_cachedObjectMap,
        &v52,
        v43);
  }
  extension::lockable_detail::LockUnlock(
    &extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache>,
    -1);
  std::string::~string(&_Right);
  std::string::~string(&_Keyval);
  std::string::~string(name);
  return result;
}

extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *__fastcall extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>::lock(
        extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *this,
        extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *result)
{
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_principal; // rdx
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // r8
  signed __int64 My_val; // rax
  unsigned __int64 v6; // rtt
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v7; // rcx

  m_principal = 0i64;
  result->m_ptr = 0i64;
  m_ptr = this->m_proxy.m_ptr;
  if ( m_ptr )
  {
    while ( 1 )
    {
      My_val = m_ptr->m_sharedCount.m_value._My_val;
      if ( !My_val )
        break;
      v6 = m_ptr->m_sharedCount.m_value._My_val;
      if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)&m_ptr->m_sharedCount, My_val + 1, My_val) )
      {
        m_principal = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)m_ptr->m_principal;
        break;
      }
    }
    v7 = result->m_ptr;
    result->m_ptr = m_principal;
    if ( v7
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v7->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v7->~RefCountableWeakSupportBase)(
        v7,
        1i64);
    }
  }
  return result;
}

std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *__fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>>>,0>>::lower_bound(
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *this,
        std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *result,
        const std::string *_Keyval)
{
  unsigned __int64 Myres; // r15
  const std::string *v4; // r14
  unsigned __int64 Mysize; // rdi
  unsigned __int64 v8; // rcx
  __int64 i; // rdx
  __int64 v10; // rax
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *Myfirst; // rcx
  unsigned __int64 Mask; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Myhead; // rbp
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Ptr; // r13
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v17; // rbx
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *v18; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rax
  char **p_Myval; // rcx
  const std::string *v21; // rdx
  unsigned __int64 v22; // rsi
  size_t v23; // r8
  char **v24; // rdx
  size_t v25; // rsi
  size_t v26; // r8
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *j; // [rsp+50h] [rbp+8h]

  Myres = _Keyval->_Mypair._Myval2._Myres;
  v4 = _Keyval;
  Mysize = _Keyval->_Mypair._Myval2._Mysize;
  if ( Myres >= 0x10 )
    _Keyval = (const std::string *)_Keyval->_Mypair._Myval2._Bx._Ptr;
  v8 = 0i64;
  for ( i = 0xCBF29CE484222325ui64; v8 < Mysize; i = 0x100000001B3i64 * (v10 ^ i) )
    v10 = (unsigned __int8)_Keyval->_Mypair._Myval2._Bx._Buf[v8++];
  Myfirst = this->_Vec._Mypair._Myval2._Myfirst;
  Mask = this->_Mask;
  Myhead = this->_List._Mypair._Myval2._Myhead;
  v14 = i & Mask;
  v15 = 2 * (i & Mask);
  Ptr = Myfirst[v15]._Ptr;
  v17 = Myfirst[2 * v14]._Ptr;
  v18 = &Myfirst[v15 + 1];
  for ( j = v18; ; v18 = j )
  {
    if ( Ptr == Myhead )
      Next = Myhead;
    else
      Next = v18->_Ptr->_Next;
    if ( v17 == Next )
    {
      result->_Ptr = Myhead;
      return result;
    }
    p_Myval = (char **)&v17->_Myval;
    if ( Myres < 0x10 )
      v21 = v4;
    else
      v21 = (const std::string *)v4->_Mypair._Myval2._Bx._Ptr;
    if ( v17->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
      p_Myval = (char **)*p_Myval;
    v22 = v17->_Myval.first._Mypair._Myval2._Mysize;
    v23 = Mysize;
    if ( v22 < Mysize )
      v23 = v17->_Myval.first._Mypair._Myval2._Mysize;
    if ( (!v23 || !memcmp(p_Myval, v21, v23)) && v22 >= Mysize && v22 <= Mysize )
      break;
    v17 = v17->_Next;
  }
  v24 = (char **)&v17->_Myval;
  if ( v17->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
    v24 = (char **)*v24;
  if ( Myres >= 0x10 )
    v4 = (const std::string *)v4->_Mypair._Myval2._Bx._Ptr;
  v25 = v17->_Myval.first._Mypair._Myval2._Mysize;
  v26 = v25;
  if ( Mysize < v25 )
    v26 = Mysize;
  if ( v26 && memcmp(v4, v24, v26) || Mysize < v25 || Mysize > v25 )
    v17 = Myhead;
  result->_Ptr = v17;
  return result;
}

__int64 __fastcall extension::ExThread::Runnable::onExecuteThread(void *datasource)
{
  return (*(__int64 (__fastcall **)(void *))(*(_QWORD *)datasource + 48i64))(datasource);
}

void __fastcall AppMain::ShaderEnsureThreadHost::onExecuteThread(AppMain::ShaderEnsureThreadHost *this)
{
  AgConditionVariableInternalData *p_m_data; // rax
  AgMutex *p_m_workMutex; // rdi
  Framework::GLManager *v4; // r13
  __int64 v5; // rcx
  _DWORD *v6; // r12
  AgPointer<AgDisplay> *DisplayByIndex; // rax
  AgDisplayPlatformImplementation *Log; // rax
  AgDisplay *m_ptr; // r14
  AgReferenceCount *m_ref; // rdi
  int v11; // er15
  STAGE_ID m_stage; // edx
  int v13; // esi
  CHARACTER_NO *m_chars; // rdi
  _DWORD *v15; // r12
  AgPointer<AgDisplay> *v16; // rax
  AgDisplayPlatformImplementation *v17; // rax
  AgDisplay *v18; // r14
  AgReferenceCount *v19; // rdi
  int v20; // er15
  bool v21; // zf
  AgPointer<AgDisplay> result; // [rsp+28h] [rbp-50h] BYREF
  AgPointer<AgDisplay> v23; // [rsp+38h] [rbp-40h] BYREF

  if ( !this->getThreadIsStopping(this) )
  {
    p_m_data = &this->m_wakeCondition.m_data;
    p_m_workMutex = &this->m_workMutex;
    do
    {
      SleepConditionVariableCS(
        (PCONDITION_VARIABLE)p_m_data,
        (PCRITICAL_SECTION)this->m_wakeCondition.m_mutex,
        0xFFFFFFFF);
      EnterCriticalSection((LPCRITICAL_SECTION)p_m_workMutex);
      v4 = Framework::GLManager::glm;
      if ( v4->mainGraphicsPthread != Concurrency::details::platform::GetCurrentThreadId() )
      {
        v5 = *(_QWORD *)NtCurrentTeb()->Reserved1[11];
        if ( !*(_DWORD *)(v5 + 12) )
        {
          v6 = (_DWORD *)(v5 + 8);
          if ( *(int *)(v5 + 8) <= 1 )
          {
            DisplayByIndex = AgDisplayManager::getDisplayByIndex(
                               (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                               &result,
                               0);
            Log = Scaleform::GFx::Stream::GetLog(DisplayByIndex->m_ptr);
            AgDisplayPlatformImplementation::loadingLock(Log, 1u);
            m_ptr = result.m_ptr;
            result.m_ptr = 0i64;
            m_ref = result.m_ref;
            if ( result.m_ref )
            {
              result.m_ref = 0i64;
              v11 = 0;
              if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
              {
                if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
                  v11 = 1;
                m_ref->m_data = 0i64;
                if ( m_ptr )
                {
                  AgDisplay::~AgDisplay(m_ptr);
                  operator delete(m_ptr, 0x70ui64);
                }
                if ( v11 )
                  AgReferenceCount::operator delete(m_ref);
              }
            }
            *v6 = 2;
          }
        }
      }
      m_stage = this->m_stage;
      if ( m_stage != STAGE_ID_NONE )
      {
        AppMain::ensureStageShaders(this->m_appMain, m_stage);
        this->m_stage = STAGE_ID_NONE;
      }
      if ( this->m_numChars > 0 )
      {
        v13 = 0;
        m_chars = this->m_chars;
        do
        {
          AppMain::ensureCharacterShaders(this->m_appMain, *m_chars);
          ++v13;
          ++m_chars;
        }
        while ( v13 < this->m_numChars );
      }
      if ( v4->mainGraphicsPthread != Concurrency::details::platform::GetCurrentThreadId() )
      {
        v15 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 8i64);
        if ( *v15 == 2 )
        {
          glFlush();
          v16 = AgDisplayManager::getDisplayByIndex(
                  (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                  &v23,
                  0);
          v17 = Scaleform::GFx::Stream::GetLog(v16->m_ptr);
          AgDisplayPlatformImplementation::loadingUnlock(v17, 1u);
          v18 = v23.m_ptr;
          v23.m_ptr = 0i64;
          v19 = v23.m_ref;
          if ( v23.m_ref )
          {
            v23.m_ref = 0i64;
            v20 = 0;
            if ( !AgAtomicDecrement(&v19->m_strongCount) )
            {
              if ( !AgAtomicDecrement(&v19->m_weakCount) )
                v20 = 1;
              v19->m_data = 0i64;
              if ( v18 )
              {
                AgDisplay::~AgDisplay(v18);
                operator delete(v18, 0x70ui64);
              }
              if ( v20 )
                AgReferenceCount::operator delete(v19);
            }
          }
          *v15 = 0;
        }
      }
      p_m_workMutex = &this->m_workMutex;
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_workMutex);
      v21 = this->getThreadIsStopping(this) == 0;
      p_m_data = &this->m_wakeCondition.m_data;
    }
    while ( v21 );
  }
  this->m_running = 0;
}

void __fastcall AppMain::ShaderLoadThreadHost::onExecuteThread(
        AppMain::ShaderLoadThreadHost *this,
        unsigned __int8 *a2,
        bool a3)
{
  AppMain *m_appMain; // rbx

  m_appMain = this->m_appMain;
  OGLRender::setConfigExtra(m_appMain->m_pRender, a2, a3);
  AppMain::createOriginalShader(m_appMain);
  AppMain::ensureCommonShaders(m_appMain);
  m_appMain->iBattleShaderLoad = 2;
  this->m_running = 0;
}

void __fastcall AppMain::ShaderEnsureThreadHost::onJoinThread(AppMain::ShaderEnsureThreadHost *this)
{
  this->m_abort = 1;
  WakeAllConditionVariable((PCONDITION_VARIABLE)&this->m_wakeCondition.m_data);
}

__int64 __fastcall AsyncCharaDataUnifyLoad::AsyncLoadJob::run(AsyncCharaDataUnifyLoad::AsyncLoadJob *this)
{
  extension::AsyncContent<CharaDataUnify> *m_ptr; // rax
  __int64 v3; // rax
  std::unique_ptr<CharaDataUnify> *v4; // rax
  _QWORD *v5; // rsi
  CharaDataUnify *v6; // rbx
  std::unique_ptr<CharaDataUnify> *v7; // rax
  extension::AsyncContent<CharaDataUnify> *v8; // rcx
  _QWORD *v10; // [rsp+70h] [rbp+8h] BYREF
  char v11; // [rsp+78h] [rbp+10h] BYREF
  std::unique_ptr<CharaDataUnify> result; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v13; // [rsp+88h] [rbp+20h]

  m_ptr = this->m_content.m_ptr;
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 2) != 0
    || (v3 = *(_QWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 16i64)) != 0
    && (*(_QWORD *)(v3 + 8) & 0x100i64) != 0 )
  {
    if ( this->m_content.m_ptr )
    {
      v4 = this->createOnErrorData(this, &v10);
      extension::AsyncContent<CharaDataUnify>::setErrorResultWithData(
        this->m_content.m_ptr,
        4,
        (std::unique_ptr<CharaDataUnify>)v4);
    }
  }
  else
  {
    v5 = operator new(0x68ui64);
    v10 = v5;
    *v5 = 0i64;
    v5[1] = 0i64;
    v5[2] = 0i64;
    v5[3] = 0i64;
    v5[4] = 0i64;
    v5[5] = 0i64;
    v5[6] = 0i64;
    v5[7] = 0i64;
    v5[8] = 0i64;
    v5[9] = 0i64;
    v5[10] = 0i64;
    v5[11] = 0i64;
    v5[12] = 0i64;
    v6 = (CharaDataUnify *)v5;
    v13 = v5;
    if ( (unsigned int)CharaDataUnify::LoadData(
                         (CharaDataUnify *)v5,
                         this->pProj,
                         this->id,
                         this->type,
                         &this->IBinaryDataLoadListener) == 1 )
    {
      v8 = this->m_content.m_ptr;
      if ( v8 )
      {
        v6 = 0i64;
        result._Mypair._Myval2 = (CharaDataUnify *)v5;
        extension::AsyncContent<CharaDataUnify>::setResult(v8, (std::unique_ptr<CharaDataUnify>)&result);
      }
    }
    else if ( this->m_content.m_ptr )
    {
      v7 = this->createOnErrorData(this, &v11);
      extension::AsyncContent<CharaDataUnify>::setErrorResultWithData(
        this->m_content.m_ptr,
        1,
        (std::unique_ptr<CharaDataUnify>)v7);
    }
    if ( v6 )
    {
      CharaDataUnify::ReleaseData(v6);
      operator delete(v6, 0x68ui64);
    }
  }
  return 0i64;
}

void __fastcall extension::AsyncContent<CharaDataUnify>::setErrorResultWithData(
        extension::AsyncContent<CharaDataUnify> *this,
        int e,
        std::unique_ptr<CharaDataUnify> data)
{
  CharaDataUnify *v5; // rax
  CharaDataUnify *Myval2; // rdi
  void *v7; // rbx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    this->m_errorCode = e;
    v5 = *(CharaDataUnify **)&data._Mypair._Myval2->iCharaID;
    *(_QWORD *)&data._Mypair._Myval2->iCharaID = 0i64;
    Myval2 = this->m_data._Mypair._Myval2;
    this->m_data._Mypair._Myval2 = v5;
    if ( Myval2 )
    {
      CharaDataUnify::ReleaseData(Myval2);
      operator delete(Myval2, 0x68ui64);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  v7 = *(void **)&data._Mypair._Myval2->iCharaID;
  if ( *(_QWORD *)&data._Mypair._Myval2->iCharaID )
  {
    CharaDataUnify::ReleaseData(*(CharaDataUnify **)&data._Mypair._Myval2->iCharaID);
    operator delete(v7, 0x68ui64);
  }
}

void __fastcall extension::AsyncContent<CharaDataUnify>::setResult(
        extension::AsyncContent<CharaDataUnify> *this,
        std::unique_ptr<CharaDataUnify> result)
{
  CharaDataUnify *v4; // rax
  CharaDataUnify *Myval2; // rsi
  void *v6; // rbx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    v4 = *(CharaDataUnify **)&result._Mypair._Myval2->iCharaID;
    if ( *(_QWORD *)&result._Mypair._Myval2->iCharaID )
    {
      *(_QWORD *)&result._Mypair._Myval2->iCharaID = 0i64;
      Myval2 = this->m_data._Mypair._Myval2;
      this->m_data._Mypair._Myval2 = v4;
      if ( Myval2 )
      {
        CharaDataUnify::ReleaseData(Myval2);
        operator delete(Myval2, 0x68ui64);
      }
    }
    else
    {
      this->m_errorCode = 5;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  v6 = *(void **)&result._Mypair._Myval2->iCharaID;
  if ( *(_QWORD *)&result._Mypair._Myval2->iCharaID )
  {
    CharaDataUnify::ReleaseData(*(CharaDataUnify **)&result._Mypair._Myval2->iCharaID);
    operator delete(v6, 0x68ui64);
  }
}

