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
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedata.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedata.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"

const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5F630
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B2E
void AppMain::ST_OpeningDemoInit(); // 0x140205700
void AppMain::ST_OpeningDemoLoop(); // 0x1402058E0
void AppMain::ST_StoryDemoInit(); // 0x140205E00
void AppMain::ST_StoryDemoLoop(); // 0x140206090
void AppMain::ST_StoryDemoDraw(); // 0x140206490
void AppMain::ST_EndDemoInit(); // 0x140206680
void AppMain::ST_EndDemoLoop(); // 0x140206970
void AppMain::ST_EndDemoDraw(); // 0x140205C70//decompilation failure at 140A5F630!
//decompilation failure at 1408A0B2E!
void __fastcall AppMain::ST_EndDemoDraw(AppMain *this)
{
  Graphics *v2; // rcx
  int v3; // er8
  int v4; // er9
  Graphics *g; // rdx
  int h; // edi
  int w; // esi
  MovieData *v8; // rax
  MovieData *v9; // [rsp+60h] [rbp+8h]

  GraphicsOpt::lock(this->g);
  Graphics::clearScreen(v2, -16777216);
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
  h = this->m_iScreenH;
  w = this->m_iScreenW;
  v8 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v9 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData(v9);
    MovieData::movieData = v8;
  }
  MovieData::Draw(v8, this->m_pRender, v3, v4, w, h);
  Graphics::drawStack(this->g->g);
}

void __fastcall AppMain::ST_EndDemoInit(AppMain *this)
{
  __int64 v2; // rdi
  GameDataInfo *v3; // rcx
  int v4; // eax
  GameDataInfo *v5; // rcx
  TEAM_ID TeamID_Combination; // eax
  GameDataInfo *v7; // rcx
  MOVIE_ID EndDemoMovieID; // edi
  MovieData *v9; // rax
  extension::SoundManager *v10; // rax
  extension::SoundManager *v11; // rax
  UserGameOperation *v12; // rax
  MovieData *v13; // rax
  MovieData *v14; // rax
  int v15; // ecx
  MovieData *v16; // [rsp+48h] [rbp+10h]
  extension::SoundManager *v17; // [rsp+48h] [rbp+10h]
  extension::SoundManager *v18; // [rsp+48h] [rbp+10h]
  MovieData *v19; // [rsp+48h] [rbp+10h]
  MovieData *v20; // [rsp+48h] [rbp+10h]
  MovieData *v21; // [rsp+48h] [rbp+10h]

  v2 = *(_QWORD *)NtCurrentTeb()->Reserved1[11];
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v2 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v4 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v3);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v4 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
    if ( v4 > *(_DWORD *)(v2 + 40) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v5);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
  }
  TeamID_Combination = (unsigned int)GameDataInfo::GetTeamID_Combination(
                                       &`GameDataInfo::getInstance'::`2'::instance,
                                       PLAYER_ID_1P);
  EndDemoMovieID = (unsigned int)GameDataInfo::GetEndDemoMovieID(v7, TeamID_Combination);
  if ( EndDemoMovieID == MOVIE_ID_NONE )
  {
    this->iReserveScene = -1;
    this->m_FuncST = 120;
    AppMain::SceneFunc(this, 120);
  }
  else
  {
    v9 = MovieData::movieData;
    if ( !MovieData::movieData )
    {
      v16 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
      MovieData::MovieData(v16);
      MovieData::movieData = v9;
    }
    v9->m_bPlay = STOP;
    *(_QWORD *)&v9->m_requestMovie = -1i64;
    *(_WORD *)&v9->m_Audio = 0;
    v9->m_Telop = 0;
    v9->m_TelopInfo = 0i64;
    *(_QWORD *)&v9->m_TelopNum = 0i64;
    v9->m_TelopCurrent = -1;
    v9->m_timeOut = 0;
    v10 = extension::SoundManager::the_instance;
    if ( !extension::SoundManager::the_instance )
    {
      v17 = (extension::SoundManager *)operator new(0x310ui64);
      extension::SoundManager::SoundManager(v17);
      extension::SoundManager::the_instance = v10;
    }
    extension::SoundManager::stopBGM(v10, 0.5);
    v11 = extension::SoundManager::the_instance;
    if ( !extension::SoundManager::the_instance )
    {
      v18 = (extension::SoundManager *)operator new(0x310ui64);
      extension::SoundManager::SoundManager(v18);
      extension::SoundManager::the_instance = v11;
    }
    extension::SoundManager::stopSE(v11, 0.5);
    v12 = UserGameOperation::Instance();
    UserGameOperation::clear(v12);
    v13 = MovieData::movieData;
    if ( !MovieData::movieData )
    {
      v19 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
      MovieData::MovieData(v19);
      MovieData::movieData = v13;
    }
    v13->m_requestMovie = EndDemoMovieID;
    v13->m_waitFrame = 0;
    v13->m_bPlay = PLAY;
    v13->m_timeOut = 0;
    this->m_LastPlayMovieID = EndDemoMovieID;
    if ( !v13 )
    {
      v20 = (MovieData *)operator new(0x48ui64);
      MovieData::MovieData(v20);
      MovieData::movieData = v13;
    }
    MovieData::LoadCSV(v13, EndDemoMovieID);
    v14 = MovieData::movieData;
    if ( !MovieData::movieData )
    {
      v21 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
      MovieData::MovieData(v21);
      MovieData::movieData = v14;
    }
    MovieData::LoadGFX(v14, EndDemoMovieID);
    AppMain::UnlockGallery(this, (GALLERY_ID)(EndDemoMovieID + 450), 1);
    if ( this->m_iFadeAlpha )
    {
      this->m_bFadeEnd = 0;
      this->m_iFadeFrame = 10;
      v15 = 1000 * this->m_iFadeColor.s.a;
      this->m_iFadeAlpha = v15;
      this->m_iFadeRate = v15 / 10;
      this->m_bFadeLock = 0;
      this->m_FuncFT = 171;
    }
    this->m_SceneTime = 0;
    this->iReserveScene = -1;
    this->m_FuncST = 118;
    this->m_FuncBT = 119;
    AppMain::SceneFunc(this, 118);
    this->m_FuncExit = 117;
  }
}

void __fastcall AppMain::ST_EndDemoLoop(AppMain *this)
{
  MovieData *v2; // rax
  UserGameOperation *v3; // r11
  int v4; // er8
  int v5; // eax
  Framework::GLManager *i; // rcx
  UserGameOperation::UserSlot *p_m_emptyUserSlot; // r9
  std::bitset<16> *v8; // r8
  __int64 v9; // rdx
  std::bitset<16> *v10; // rcx
  __int64 v11; // rdx
  signed __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  MovieData *v16; // rax
  bool v17; // dl
  MovieData *v18; // rax
  MovieData *v19; // rbx
  MovieData *v20[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v21; // [rsp+30h] [rbp-58h]
  __int128 v22; // [rsp+40h] [rbp-48h] BYREF
  __int128 v23[2]; // [rsp+50h] [rbp-38h]

  v20[1] = (MovieData *)-2i64;
  v2 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v20[0] = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData(v20[0]);
    MovieData::movieData = v2;
  }
  if ( v2->m_bPlay == (SKIP|PLAY) && ++this->m_SceneTime > 30 )
  {
    v3 = UserGameOperation::Instance();
    if ( Framework::GLManager::glm )
    {
      v4 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2199612i64);
      if ( v4 )
      {
        v5 = 0;
        for ( i = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
              i != (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType;
              i = (Framework::GLManager *)((char *)i + 16) )
        {
          ++v5;
          if ( i->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy && v5 == v4 )
          {
            if ( v5 == -1 )
              break;
            p_m_emptyUserSlot = &v3->m_slots[v5 - 1];
            goto LABEL_15;
          }
        }
      }
    }
    p_m_emptyUserSlot = &v3->m_emptyUserSlot;
LABEL_15:
    if ( p_m_emptyUserSlot )
    {
      v8 = &v3->m_ButtonConfig[4];
      LODWORD(v20[0]) = 0xFFFF;
      v9 = 0i64;
      v10 = &v3->m_ButtonConfig[4];
      while ( v10->_Array[0] == *(unsigned int *)((char *)v10->_Array + (char *)v20 - (char *)&v3->m_ButtonConfig[4]) )
      {
        --v10;
        if ( --v9 < 0 )
          goto LABEL_24;
      }
      LODWORD(v20[0]) = v8->_Array[0] & p_m_emptyUserSlot->m_pressedEventChannels._Array[0];
      v11 = 0i64;
      v12 = (char *)v8 - (char *)v20;
      while ( *((_DWORD *)v20 + v11) == *(_DWORD *)((char *)v20 + 4 * v11 + v12) )
      {
        if ( --v11 < 0 )
          goto LABEL_30;
      }
LABEL_24:
      v21 = *(_OWORD *)v3->m_KeyboardButtonConfig[4]._Array;
      v22 = *(_OWORD *)&v3->m_KeyboardButtonConfig[4]._Array[2];
      v13 = 3i64;
      v14 = 3i64;
      v15 = (char *)p_m_emptyUserSlot - ((char *)&v22 + 8) + 88;
      do
      {
        *((_QWORD *)&v21 + v14) &= *(_QWORD *)((char *)&v21 + 8 * v14 + v15);
        --v14;
      }
      while ( v14 >= 0 );
      v23[0] = v21;
      v23[1] = v22;
      while ( !*((_QWORD *)v23 + v13) )
      {
        if ( --v13 < 0 )
          goto LABEL_31;
      }
LABEL_30:
      MovieData::getInstance();
      MovieData::Stop(v16, v17);
    }
LABEL_31:
    v2 = MovieData::movieData;
  }
  if ( !v2 )
  {
    v20[0] = (MovieData *)operator new(0x48ui64);
    MovieData::MovieData(v20[0]);
    MovieData::movieData = v2;
  }
  MovieData::Update(v2);
  v18 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v20[0] = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData(v20[0]);
    MovieData::movieData = v18;
  }
  if ( MovieData::IsPlayEnd(v18) )
  {
    this->iReserveScene = -1;
    this->m_FadeST = 120;
    this->m_FuncST = 0;
    this->m_FadeExitFunc = 117;
    *(_WORD *)&this->m_bFadeEnd = 0;
    this->m_iFadeFrame = 20;
    *(_QWORD *)&this->m_iFadeColor.rgba = 255i64;
    this->m_iFadeRate = 50 * this->m_iFadeColor.s.a;
    this->m_bFadeLock = 0;
    this->m_FuncFT = 170;
  }
  if ( !AppMain::Sound_IsLoadComplete(this) )
  {
    v19 = (MovieData *)EasyIndicator::instance;
    if ( !EasyIndicator::instance )
    {
      v19 = (MovieData *)operator new(0x150ui64);
      v20[0] = v19;
      memset(&v19->m_requestMovie, 0, 0x140ui64);
      *(_QWORD *)&v19->m_bPlay = 0i64;
      v19[4].m_timeOut = 0;
      EasyIndicator::instance = (EasyIndicator *)v19;
    }
    EasyIndicator::RequestDraw(
      (EasyIndicator *)v19,
      1760 * GAME_SCREEN_WIDTH / 1920,
      920 * GAME_SCREEN_HEIGHT / 1080,
      TYPE_LOADING);
  }
}

void __fastcall AppMain::ST_OpeningDemoInit(AppMain *this)
{
  MovieData *v2; // rax
  extension::SoundManager *v3; // rax
  extension::SoundManager *v4; // rax
  UserGameOperation *v5; // rax
  MovieData *v6; // rax
  int v7; // ecx
  MovieData *v8; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v9; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v10; // [rsp+40h] [rbp+8h]
  MovieData *v11; // [rsp+40h] [rbp+8h]

  v2 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v8 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData(v8);
    MovieData::movieData = v2;
  }
  v2->m_bPlay = STOP;
  *(_QWORD *)&v2->m_requestMovie = -1i64;
  *(_WORD *)&v2->m_Audio = 0;
  v2->m_Telop = 0;
  v2->m_TelopInfo = 0i64;
  *(_QWORD *)&v2->m_TelopNum = 0i64;
  v2->m_TelopCurrent = -1;
  v2->m_timeOut = 0;
  v3 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v9 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v9);
    extension::SoundManager::the_instance = v3;
  }
  extension::SoundManager::stopBGM(v3, 0.5);
  v4 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v10 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v10);
    extension::SoundManager::the_instance = v4;
  }
  extension::SoundManager::stopSE(v4, 0.5);
  v5 = UserGameOperation::Instance();
  UserGameOperation::clear(v5);
  v6 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v11 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData(v11);
    MovieData::movieData = v6;
  }
  v6->m_requestMovie = MOVIE_OP;
  v6->m_waitFrame = 60;
  v6->m_bPlay = PLAY;
  v6->m_timeOut = 0;
  this->m_LastPlayMovieID = MOVIE_OP;
  AppMain::UnlockGallery(this, GALLERY_ID_MOVIE, 1);
  if ( this->m_iFadeAlpha )
  {
    this->m_bFadeEnd = 0;
    this->m_iFadeFrame = 10;
    v7 = 1000 * this->m_iFadeColor.s.a;
    this->m_iFadeAlpha = v7;
    this->m_iFadeRate = v7 / 10;
    this->m_bFadeLock = 0;
    this->m_FuncFT = 171;
  }
  this->m_SceneTime = 0;
  this->iReserveScene = -1;
  this->m_FuncST = 110;
  this->m_FuncBT = 111;
  AppMain::SceneFunc(this, 110);
  this->m_FuncExit = 109;
}

void __fastcall AppMain::ST_OpeningDemoLoop(AppMain *this)
{
  MovieData *v2; // rax
  UserGameOperation *v3; // r11
  int v4; // er8
  int v5; // eax
  Framework::GLManager *i; // rcx
  UserGameOperation::UserSlot *p_m_emptyUserSlot; // r9
  std::bitset<16> *v8; // r8
  __int64 v9; // rdx
  std::bitset<16> *v10; // rcx
  __int64 v11; // rdx
  signed __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  MovieData *v16; // rax
  bool v17; // dl
  MovieData *v18; // rax
  int v19; // edx
  GfxManager *v20; // rax
  EasyIndicator *v21; // rbx
  GfxManager *v22[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v23; // [rsp+30h] [rbp-58h]
  __int128 v24; // [rsp+40h] [rbp-48h] BYREF
  __int128 v25[2]; // [rsp+50h] [rbp-38h]

  v22[1] = (GfxManager *)-2i64;
  v2 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v22[0] = (GfxManager *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData((MovieData *)v22[0]);
    MovieData::movieData = v2;
  }
  if ( v2->m_bPlay == (SKIP|PLAY) && ++this->m_SceneTime > 30 )
  {
    v3 = UserGameOperation::Instance();
    if ( Framework::GLManager::glm )
    {
      v4 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2199612i64);
      if ( v4 )
      {
        v5 = 0;
        for ( i = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
              i != (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType;
              i = (Framework::GLManager *)((char *)i + 16) )
        {
          ++v5;
          if ( i->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy && v5 == v4 )
          {
            if ( v5 == -1 )
              break;
            p_m_emptyUserSlot = &v3->m_slots[v5 - 1];
            goto LABEL_15;
          }
        }
      }
    }
    p_m_emptyUserSlot = &v3->m_emptyUserSlot;
LABEL_15:
    if ( p_m_emptyUserSlot )
    {
      v8 = &v3->m_ButtonConfig[4];
      LODWORD(v22[0]) = 0xFFFF;
      v9 = 0i64;
      v10 = &v3->m_ButtonConfig[4];
      while ( v10->_Array[0] == *(unsigned int *)((char *)v10->_Array + (char *)v22 - (char *)&v3->m_ButtonConfig[4]) )
      {
        --v10;
        if ( --v9 < 0 )
          goto LABEL_24;
      }
      LODWORD(v22[0]) = v8->_Array[0] & p_m_emptyUserSlot->m_pressedEventChannels._Array[0];
      v11 = 0i64;
      v12 = (char *)v8 - (char *)v22;
      while ( *((_DWORD *)v22 + v11) == *(_DWORD *)((char *)v22 + 4 * v11 + v12) )
      {
        if ( --v11 < 0 )
          goto LABEL_30;
      }
LABEL_24:
      v23 = *(_OWORD *)v3->m_KeyboardButtonConfig[4]._Array;
      v24 = *(_OWORD *)&v3->m_KeyboardButtonConfig[4]._Array[2];
      v13 = 3i64;
      v14 = 3i64;
      v15 = (char *)p_m_emptyUserSlot - ((char *)&v24 + 8) + 88;
      do
      {
        *((_QWORD *)&v23 + v14) &= *(_QWORD *)((char *)&v23 + 8 * v14 + v15);
        --v14;
      }
      while ( v14 >= 0 );
      v25[0] = v23;
      v25[1] = v24;
      while ( !*((_QWORD *)v25 + v13) )
      {
        if ( --v13 < 0 )
          goto LABEL_31;
      }
LABEL_30:
      MovieData::getInstance();
      MovieData::Stop(v16, v17);
    }
LABEL_31:
    v2 = MovieData::movieData;
  }
  if ( !v2 )
  {
    v22[0] = (GfxManager *)operator new(0x48ui64);
    MovieData::MovieData((MovieData *)v22[0]);
    MovieData::movieData = v2;
  }
  MovieData::Update(v2);
  v18 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v22[0] = (GfxManager *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData((MovieData *)v22[0]);
    MovieData::movieData = v18;
  }
  if ( MovieData::IsPlayEnd(v18) )
  {
    this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] |= 0x10000000u;
    AppMain::SaveDataAsyncSave(this, v19);
    v20 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v22[0] = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v22[0]);
      GfxManager::instance = v20;
    }
    v20->m_EditMode = 0;
    this->iReserveScene = -1;
    this->m_FadeST = 24;
    this->m_FuncST = 0;
    this->m_FadeExitFunc = 109;
    *(_WORD *)&this->m_bFadeEnd = 0;
    this->m_iFadeFrame = 20;
    *(_QWORD *)&this->m_iFadeColor.rgba = 255i64;
    this->m_iFadeRate = 50 * this->m_iFadeColor.s.a;
    this->m_bFadeLock = 0;
    this->m_FuncFT = 170;
  }
  if ( !AppMain::Sound_IsLoadComplete(this) )
  {
    v21 = EasyIndicator::instance;
    if ( !EasyIndicator::instance )
    {
      v21 = (EasyIndicator *)operator new(0x150ui64);
      v22[0] = (GfxManager *)v21;
      memset(v21->m_IndicatorStack, 0, sizeof(v21->m_IndicatorStack));
      v21->m_Image = 0i64;
      v21->m_DrawCount = 0;
      EasyIndicator::instance = v21;
    }
    EasyIndicator::RequestDraw(v21, 1760 * GAME_SCREEN_WIDTH / 1920, 920 * GAME_SCREEN_HEIGHT / 1080, TYPE_LOADING);
  }
}

void __fastcall AppMain::ST_StoryDemoDraw(AppMain *this)
{
  Graphics *v2; // rcx
  int v3; // er8
  int v4; // er9
  Graphics *g; // rdx
  int h; // edi
  int w; // esi
  MovieData *v8; // rax
  MovieData *v9; // rax
  GameDataInfo *Instance; // rax
  MovieData *v11; // [rsp+60h] [rbp+8h]
  MovieData *v12; // [rsp+60h] [rbp+8h]

  GraphicsOpt::lock(this->g);
  Graphics::clearScreen(v2, -16777216);
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
  h = this->m_iScreenH;
  w = this->m_iScreenW;
  v8 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v11 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData(v11);
    MovieData::movieData = v8;
  }
  MovieData::Draw(v8, this->m_pRender, v3, v4, w, h);
  v9 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v12 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData(v12);
    MovieData::movieData = v9;
  }
  if ( MovieData::IsPlayEnd(v9) )
  {
    Instance = GameDataInfo::getInstance();
    if ( (unsigned int)GameDataInfo::GetStoryDemoMovieID(Instance) != 9 )
      GraphicsOpt::fillRect(this->g, 0, 0, this->m_iScreenW, this->m_iScreenH, 0xFFFFFFFF);
  }
  Graphics::drawStack(this->g->g);
}

void __fastcall AppMain::ST_StoryDemoInit(AppMain *this)
{
  MovieData *v2; // rax
  extension::SoundManager *v3; // rax
  extension::SoundManager *v4; // rax
  UserGameOperation *v5; // rax
  GameDataInfo *v6; // rcx
  MOVIE_ID StoryDemoMovieID; // edi
  MovieData *v8; // rax
  MovieData *v9; // rax
  int v10; // ecx
  MovieData *v11; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v12; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v13; // [rsp+40h] [rbp+8h]
  MovieData *v14; // [rsp+40h] [rbp+8h]
  MovieData *v15; // [rsp+40h] [rbp+8h]
  MovieData *v16; // [rsp+40h] [rbp+8h]

  v2 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v11 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData(v11);
    MovieData::movieData = v2;
  }
  v2->m_bPlay = STOP;
  *(_QWORD *)&v2->m_requestMovie = -1i64;
  *(_WORD *)&v2->m_Audio = 0;
  v2->m_Telop = 0;
  v2->m_TelopInfo = 0i64;
  *(_QWORD *)&v2->m_TelopNum = 0i64;
  v2->m_TelopCurrent = -1;
  v2->m_timeOut = 0;
  v3 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v12 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v12);
    extension::SoundManager::the_instance = v3;
  }
  extension::SoundManager::stopBGM(v3, 0.5);
  v4 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v13 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v13);
    extension::SoundManager::the_instance = v4;
  }
  extension::SoundManager::stopSE(v4, 0.5);
  v5 = UserGameOperation::Instance();
  UserGameOperation::clear(v5);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v6);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  StoryDemoMovieID = (unsigned int)GameDataInfo::GetStoryDemoMovieID(&`GameDataInfo::getInstance'::`2'::instance);
  v8 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v14 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData(v14);
    MovieData::movieData = v8;
  }
  v8->m_requestMovie = StoryDemoMovieID;
  v8->m_waitFrame = 0;
  v8->m_bPlay = PLAY;
  v8->m_timeOut = 0;
  this->m_LastPlayMovieID = StoryDemoMovieID;
  if ( !v8 )
  {
    v15 = (MovieData *)operator new(0x48ui64);
    MovieData::MovieData(v15);
    MovieData::movieData = v8;
  }
  MovieData::LoadCSV(v8, StoryDemoMovieID);
  v9 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v16 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData(v16);
    MovieData::movieData = v9;
  }
  MovieData::LoadGFX(v9, StoryDemoMovieID);
  AppMain::UnlockGallery(this, (GALLERY_ID)(StoryDemoMovieID + 450), 1);
  if ( this->m_iFadeAlpha )
  {
    this->m_bFadeEnd = 0;
    this->m_iFadeFrame = 10;
    v10 = 1000 * this->m_iFadeColor.s.a;
    this->m_iFadeAlpha = v10;
    this->m_iFadeRate = v10 / 10;
    this->m_bFadeLock = 0;
    this->m_FuncFT = 171;
  }
  this->m_SceneTime = 0;
  this->iReserveScene = -1;
  this->m_FuncST = 114;
  this->m_FuncBT = 115;
  AppMain::SceneFunc(this, 114);
  this->m_FuncExit = 113;
}

void __fastcall AppMain::ST_StoryDemoLoop(AppMain *this)
{
  MovieData *v2; // rax
  UserGameOperation *v3; // r11
  int v4; // er8
  int v5; // eax
  Framework::GLManager *i; // rcx
  UserGameOperation::UserSlot *p_m_emptyUserSlot; // r9
  std::bitset<16> *v8; // r8
  __int64 v9; // rdx
  std::bitset<16> *v10; // rcx
  __int64 v11; // rdx
  signed __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  MovieData *v16; // rax
  bool v17; // dl
  MovieData *v18; // rax
  GameDataInfo *v19; // rcx
  GfxManager *v20; // rax
  EasyIndicator *v21; // rbx
  GfxManager *v22[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v23; // [rsp+30h] [rbp-58h]
  __int128 v24; // [rsp+40h] [rbp-48h] BYREF
  __int128 v25[2]; // [rsp+50h] [rbp-38h]

  v22[1] = (GfxManager *)-2i64;
  v2 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v22[0] = (GfxManager *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData((MovieData *)v22[0]);
    MovieData::movieData = v2;
  }
  if ( v2->m_bPlay == (SKIP|PLAY) && ++this->m_SceneTime > 30 )
  {
    v3 = UserGameOperation::Instance();
    if ( Framework::GLManager::glm )
    {
      v4 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2199612i64);
      if ( v4 )
      {
        v5 = 0;
        for ( i = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
              i != (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType;
              i = (Framework::GLManager *)((char *)i + 16) )
        {
          ++v5;
          if ( i->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy && v5 == v4 )
          {
            if ( v5 == -1 )
              break;
            p_m_emptyUserSlot = &v3->m_slots[v5 - 1];
            goto LABEL_15;
          }
        }
      }
    }
    p_m_emptyUserSlot = &v3->m_emptyUserSlot;
LABEL_15:
    if ( p_m_emptyUserSlot )
    {
      v8 = &v3->m_ButtonConfig[4];
      LODWORD(v22[0]) = 0xFFFF;
      v9 = 0i64;
      v10 = &v3->m_ButtonConfig[4];
      while ( v10->_Array[0] == *(unsigned int *)((char *)v10->_Array + (char *)v22 - (char *)&v3->m_ButtonConfig[4]) )
      {
        --v10;
        if ( --v9 < 0 )
          goto LABEL_24;
      }
      LODWORD(v22[0]) = v8->_Array[0] & p_m_emptyUserSlot->m_pressedEventChannels._Array[0];
      v11 = 0i64;
      v12 = (char *)v8 - (char *)v22;
      while ( *((_DWORD *)v22 + v11) == *(_DWORD *)((char *)v22 + 4 * v11 + v12) )
      {
        if ( --v11 < 0 )
          goto LABEL_30;
      }
LABEL_24:
      v23 = *(_OWORD *)v3->m_KeyboardButtonConfig[4]._Array;
      v24 = *(_OWORD *)&v3->m_KeyboardButtonConfig[4]._Array[2];
      v13 = 3i64;
      v14 = 3i64;
      v15 = (char *)p_m_emptyUserSlot - ((char *)&v24 + 8) + 88;
      do
      {
        *((_QWORD *)&v23 + v14) &= *(_QWORD *)((char *)&v23 + 8 * v14 + v15);
        --v14;
      }
      while ( v14 >= 0 );
      v25[0] = v23;
      v25[1] = v24;
      while ( !*((_QWORD *)v25 + v13) )
      {
        if ( --v13 < 0 )
          goto LABEL_31;
      }
LABEL_30:
      MovieData::getInstance();
      MovieData::Stop(v16, v17);
    }
LABEL_31:
    v2 = MovieData::movieData;
  }
  if ( !v2 )
  {
    v22[0] = (GfxManager *)operator new(0x48ui64);
    MovieData::MovieData((MovieData *)v22[0]);
    MovieData::movieData = v2;
  }
  MovieData::Update(v2);
  v18 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v22[0] = (GfxManager *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData((MovieData *)v22[0]);
    MovieData::movieData = v18;
  }
  if ( MovieData::IsPlayEnd(v18) )
  {
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
    if ( (unsigned int)GameDataInfo::GetStoryDemoMovieID(&`GameDataInfo::getInstance'::`2'::instance) == 9 )
    {
      this->m_FadeST = 116;
      *(_QWORD *)&this->m_iFadeColor.rgba = 255i64;
      this->m_iFadeRate = 50 * this->m_iFadeColor.s.a;
    }
    else
    {
      v20 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        v22[0] = (GfxManager *)operator new(0x108ui64);
        GfxManager::GfxManager(v22[0]);
        GfxManager::instance = v20;
      }
      v20->m_EditMode = 0;
      this->m_FadeST = 28;
      this->m_iFadeColor.rgba = -1;
      this->m_iFadeRate = 50 * this->m_iFadeColor.s.a;
      this->m_iFadeAlpha = 0;
    }
    this->m_FuncFT = 170;
    this->m_bFadeLock = 0;
    this->m_iFadeFrame = 20;
    *(_WORD *)&this->m_bFadeEnd = 0;
    this->m_FadeExitFunc = 113;
    this->m_FuncST = 0;
    this->iReserveScene = -1;
  }
  if ( !AppMain::Sound_IsLoadComplete(this) )
  {
    v21 = EasyIndicator::instance;
    if ( !EasyIndicator::instance )
    {
      v21 = (EasyIndicator *)operator new(0x150ui64);
      v22[0] = (GfxManager *)v21;
      memset(v21->m_IndicatorStack, 0, sizeof(v21->m_IndicatorStack));
      v21->m_Image = 0i64;
      v21->m_DrawCount = 0;
      EasyIndicator::instance = v21;
    }
    EasyIndicator::RequestDraw(v21, 1760 * GAME_SCREEN_WIDTH / 1920, 920 * GAME_SCREEN_HEIGHT / 1080, TYPE_LOADING);
  }
}

