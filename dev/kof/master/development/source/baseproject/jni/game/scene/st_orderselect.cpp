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
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedata.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedata.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/menudata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.cpp"

long s_oldOrder[3][2]; // 0x140AC4C80
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5E790
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B1E
void LoadCompleteEventOrderSelect(); // 0x1401CE510
void AppMain::ST_OrderSelectInit(); // 0x1401CEFA0
void AppMain::ST_OrderSelectLoop(); // 0x1401CF690
void AppMain::ST_OrderSelectDraw(); // 0x1401C06B0//decompilation failure at 140AC4C80!
//decompilation failure at 140A5E790!
//decompilation failure at 1408A0B1E!
void __fastcall LoadCompleteEventOrderSelect()
{
  GfxManager *v0; // rbx
  GfxManager *v1; // rax
  __int64 v2; // r15
  __int64 *v3; // rcx
  __int64 v4; // rdi
  GameDataInfo *v5; // rcx
  GameDataInfo *v6; // rcx
  GameDataInfo *v7; // rcx
  GameDataInfo *v8; // rcx
  USER_ID v9; // esi
  FighterOperation *v10; // rax
  int *p_userIndex; // rdx
  int v12; // ecx
  FighterOperation::ListenerNode *p_m_assignListenerListEnd; // r14
  extension::BiLinkable<FighterOperation::ListenerNode> *m_Next; // rbx
  extension::BiLinkable<FighterOperation::ListenerNode> **p_m_Next; // rcx
  GameDataInfo *v16; // rcx
  USER_ID v17; // esi
  FighterOperation *v18; // rax
  AppMain *v19; // rcx
  _DWORD *v20; // rdx
  FighterOperation::ListenerNode *v21; // r14
  extension::BiLinkable<FighterOperation::ListenerNode> *v22; // rbx
  extension::BiLinkable<FighterOperation::ListenerNode> **v23; // rcx
  int v24; // ecx
  GameDataInfo *v25; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rbx
  char *m_str; // r8
  char *v28; // rax
  signed __int64 v29; // r8
  int v30; // ecx
  int v31; // edx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v32; // rcx
  int v33; // ecx
  const MovieDataInfo *v34; // rax
  const MovieDataInfo *v35; // rbx
  const char *v36; // rbx
  extension::exsound_detail::SoundNameRegistry *v37; // rax
  char *v38; // r8
  char *v39; // rax
  signed __int64 v40; // r8
  int v41; // ecx
  int v42; // edx
  volatile signed __int64 *v43; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v44; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v45; // r8
  char *v46; // r9
  char *v47; // rax
  signed __int64 v48; // r9
  int v49; // ecx
  int v50; // edx
  int v51; // eax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v52; // rbx
  char *v53; // r8
  char *v54; // rax
  signed __int64 v55; // r8
  int v56; // ecx
  int v57; // edx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v58; // rbx
  char *v59; // r8
  char *v60; // rax
  signed __int64 v61; // r8
  int v62; // ecx
  int v63; // edx
  USER_ID v64; // ebx
  int v65; // edi
  AgController *v66; // rbx
  int m_hardwareType; // ebx
  __int64 *v68; // rax
  __int64 v69; // rbx
  Scaleform::GFx::Value *p_ptr; // rcx
  __int64 *v71; // rax
  __int64 v72; // rbx
  int v73; // ecx
  extension::SoundHashKey result; // [rsp+38h] [rbp-D0h] BYREF
  extension::SoundHashKey soundName; // [rsp+40h] [rbp-C8h] BYREF
  extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> v76; // [rsp+48h] [rbp-C0h] BYREF
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v77; // [rsp+50h] [rbp-B8h]
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v78; // [rsp+58h] [rbp-B0h]
  extension::SoundHashKey reqBGM; // [rsp+60h] [rbp-A8h] BYREF
  extension::SoundHashKey v80; // [rsp+68h] [rbp-A0h] BYREF
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v81; // [rsp+70h] [rbp-98h]
  AgPointer<AgController> v82; // [rsp+78h] [rbp-90h] BYREF
  __int64 v83; // [rsp+88h] [rbp-80h]
  extension::SoundHashKey *p_soundName; // [rsp+90h] [rbp-78h]
  Scaleform::GFx::Value ptr; // [rsp+98h] [rbp-70h] BYREF
  Scaleform::GFx::Value val; // [rsp+C8h] [rbp-40h] BYREF
  Scaleform::GFx::Value v87; // [rsp+F8h] [rbp-10h] BYREF
  Scaleform::GFx::Value pargs; // [rsp+128h] [rbp+20h] BYREF
  Scaleform::GFx::Value v89; // [rsp+158h] [rbp+50h] BYREF
  Scaleform::GFx::Value v90; // [rsp+188h] [rbp+80h] BYREF

  v83 = -2i64;
  v0 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v77 = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)v77);
    v0 = v1;
    GfxManager::instance = v1;
  }
  v2 = *(_QWORD *)&AppMain::pApp;
  v3 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v4 = *v3;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v3 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v5);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0]
    || `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1] )
  {
    if ( v0->m_GFXMovie.m_movieProxy.m_ptr )
      v0->m_GFXMovie.m_movieProxy.m_ptr->m_operationGenerator.m_multiControllerMode = ByFighter;
  }
  else if ( v0->m_GFXMovie.m_movieProxy.m_ptr )
  {
    v0->m_GFXMovie.m_movieProxy.m_ptr->m_operationGenerator.m_multiControllerMode = ByUser;
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v4 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v6);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v4 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v7);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v4 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v8);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v9 = `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0];
  v10 = FighterOperation::Instance();
  p_userIndex = &v10->m_slots[0].userIndex;
  if ( v10 != (FighterOperation *)-8i64 )
  {
    v12 = *p_userIndex;
    *p_userIndex = v9;
    v10->m_slots[0].userId = v9;
    if ( v12 != v9 )
    {
      p_m_assignListenerListEnd = &v10->m_assignListenerListEnd;
      m_Next = v10->m_assignListenerListEnd.m_Next;
      if ( m_Next != &v10->m_assignListenerListEnd )
      {
        do
        {
          p_m_Next = &m_Next[-1].m_Next;
          if ( !m_Next )
            p_m_Next = 0i64;
          ((void (__fastcall *)(extension::BiLinkable<FighterOperation::ListenerNode> **, __int64, _QWORD, __int64))(*p_m_Next)->m_Next)(
            p_m_Next,
            1i64,
            (unsigned int)v9,
            0xFFFFFFFFi64);
          m_Next = m_Next->m_Next;
        }
        while ( m_Next != p_m_assignListenerListEnd );
      }
    }
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v4 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v16);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v17 = `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1];
  v18 = FighterOperation::Instance();
  v20 = &v18->m_slots[1].userIndex;
  if ( v18 != (FighterOperation *)-1488i64 )
  {
    v19 = (AppMain *)(unsigned int)*v20;
    *v20 = v17;
    v18->m_slots[1].userId = v17;
    if ( (_DWORD)v19 != v17 )
    {
      v21 = &v18->m_assignListenerListEnd;
      v22 = v18->m_assignListenerListEnd.m_Next;
      if ( v22 != &v18->m_assignListenerListEnd )
      {
        do
        {
          v23 = &v22[-1].m_Next;
          if ( !v22 )
            v23 = 0i64;
          ((void (__fastcall *)(extension::BiLinkable<FighterOperation::ListenerNode> **, __int64, _QWORD, __int64))(*v23)->m_Next)(
            v23,
            2i64,
            (unsigned int)v17,
            0xFFFFFFFFi64);
          v22 = v22->m_Next;
        }
        while ( v22 != v21 );
      }
    }
  }
  AppMain::Sound_BGMPlay_GetSoundHashKey(v19, &result);
  v24 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v4 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v24 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v24 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_STORY )
  {
    if ( v24 > *(_DWORD *)(v4 + 40) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v25);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    if ( `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[1][0] == CHARACTER_NO_VRS )
    {
      m_ptr = s_soundIndex.m_keys[67].m_sharedBuffer.m_ptr;
      v78 = s_soundIndex.m_keys[67].m_sharedBuffer.m_ptr;
      if ( s_soundIndex.m_keys[67].m_sharedBuffer.m_ptr )
      {
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)&s_soundIndex.m_keys[67].m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
          1ui64);
        m_ptr = v78;
      }
      if ( !result.m_sharedBuffer.m_ptr )
        goto LABEL_54;
      m_str = 0i64;
      if ( m_ptr )
        m_str = m_ptr->m_str;
      v28 = result.m_sharedBuffer.m_ptr->m_str;
      v29 = m_str - result.m_sharedBuffer.m_ptr->m_str;
      do
      {
        v30 = (unsigned __int8)v28[v29];
        v31 = (unsigned __int8)*v28 - v30;
        if ( v31 )
          break;
        ++v28;
      }
      while ( v30 );
      if ( v31 )
      {
LABEL_54:
        reqBGM.m_sharedBuffer.m_ptr = s_soundIndex.m_keys[111].m_sharedBuffer.m_ptr;
        if ( s_soundIndex.m_keys[111].m_sharedBuffer.m_ptr )
        {
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)&s_soundIndex.m_keys[111].m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
            1ui64);
          m_ptr = v78;
        }
        AppMain::RequestPlayBGMUtil((AppMain *)v2, (extension::SoundHashKey)&reqBGM, BGM_MODE_ACTIVE, 0.0, 0.0, 1);
      }
      else
      {
        AppMain::RequestPlayBGMUtil((AppMain *)v2, SND_BGM_ORDER_VERSE, BGM_MODE_ACTIVE, 0.0, 0.0, 0);
      }
      if ( !m_ptr
        || _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) != 1 )
      {
        goto LABEL_112;
      }
      v32 = v78;
      goto LABEL_111;
    }
    if ( GameDataInfo::getInstance()->m_CharacterNo[1][0] == CHARACTER_NO_ANT )
    {
      v33 = 0;
      v34 = movieData;
      while ( v34->id != MOVIE_ANTONOV )
      {
        ++v33;
        if ( (__int64)++v34 >= (__int64)achivement_data::Map )
        {
          v35 = 0i64;
          goto LABEL_66;
        }
      }
      v35 = &movieData[v33];
LABEL_66:
      v36 = v35->soundName;
      v37 = extension::exsound_detail::SoundNameRegistry::Instance();
      extension::exsound_detail::SoundNameRegistry::makeShared(v37, &v76, v36);
      if ( !result.m_sharedBuffer.m_ptr )
        goto LABEL_74;
      v38 = v76.m_ptr ? v76.m_ptr->m_str : 0i64;
      v39 = result.m_sharedBuffer.m_ptr->m_str;
      v40 = v38 - result.m_sharedBuffer.m_ptr->m_str;
      do
      {
        v41 = (unsigned __int8)v39[v40];
        v42 = (unsigned __int8)*v39 - v41;
        if ( v42 )
          break;
        ++v39;
      }
      while ( v41 );
      if ( v42 )
      {
LABEL_74:
        v43 = (volatile signed __int64 *)s_soundIndex.m_keys[107].m_sharedBuffer.m_ptr;
        soundName.m_sharedBuffer.m_ptr = s_soundIndex.m_keys[107].m_sharedBuffer.m_ptr;
        if ( s_soundIndex.m_keys[107].m_sharedBuffer.m_ptr )
        {
          v43 = (volatile signed __int64 *)s_soundIndex.m_keys[107].m_sharedBuffer.m_ptr->m_refCount.m_ptr;
          _InterlockedExchangeAdd64(v43 + 2, 1ui64);
        }
        p_soundName = &soundName;
        AppMain::Sound_BGMPlay_GetSoundHashKey((AppMain *)v43, &v80);
        v44 = v80.m_sharedBuffer.m_ptr;
        if ( !v80.m_sharedBuffer.m_ptr )
          goto LABEL_83;
        v45 = soundName.m_sharedBuffer.m_ptr;
        v46 = 0i64;
        if ( soundName.m_sharedBuffer.m_ptr )
          v46 = soundName.m_sharedBuffer.m_ptr->m_str;
        v47 = v80.m_sharedBuffer.m_ptr->m_str;
        v48 = v46 - v80.m_sharedBuffer.m_ptr->m_str;
        do
        {
          v49 = (unsigned __int8)v47[v48];
          v50 = (unsigned __int8)*v47 - v49;
          if ( v50 )
            break;
          ++v47;
        }
        while ( v49 );
        if ( v50 )
        {
LABEL_83:
          AppMain::Sound_PlayBGMByName((AppMain *)v2, &soundName, 0.0, 0.0, 0);
          extension::SoundHashKey::operator=((extension::SoundHashKey *)(v2 + 2197336), &soundName);
          v45 = soundName.m_sharedBuffer.m_ptr;
        }
        if ( v44 )
        {
          if ( _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&v44->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
            ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v80.m_sharedBuffer.m_ptr->~RefCountableWeakSupportBase)(
              v80.m_sharedBuffer.m_ptr,
              1i64);
          v45 = soundName.m_sharedBuffer.m_ptr;
        }
        if ( v45
          && _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&v45->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
        {
          ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v45->~RefCountableWeakSupportBase)(
            v45,
            1i64);
        }
      }
      if ( !v76.m_ptr
        || _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&v76.m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) != 1 )
      {
        goto LABEL_112;
      }
      v32 = v76.m_ptr;
LABEL_111:
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v32->~RefCountableWeakSupportBase)(
        v32,
        1i64);
      goto LABEL_112;
    }
    v51 = *(_DWORD *)(v2 + 92584);
    if ( v51 == 2 )
    {
      AppMain::RequestPlayBGMUtil((AppMain *)v2, SND_BGM_21_ORDER_SELECT, BGM_MODE_NORMAL, 0.0, 0.0, 1);
    }
    else
    {
      if ( v51 != 1 )
      {
        v52 = s_soundIndex.m_keys[67].m_sharedBuffer.m_ptr;
        v81 = s_soundIndex.m_keys[67].m_sharedBuffer.m_ptr;
        if ( s_soundIndex.m_keys[67].m_sharedBuffer.m_ptr )
        {
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)&s_soundIndex.m_keys[67].m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
            1ui64);
          v52 = v81;
        }
        if ( !result.m_sharedBuffer.m_ptr )
          goto LABEL_107;
        v53 = 0i64;
        if ( v52 )
          v53 = v52->m_str;
        v54 = result.m_sharedBuffer.m_ptr->m_str;
        v55 = v53 - result.m_sharedBuffer.m_ptr->m_str;
        do
        {
          v56 = (unsigned __int8)v54[v55];
          v57 = (unsigned __int8)*v54 - v56;
          if ( v57 )
            break;
          ++v54;
        }
        while ( v56 );
        if ( v57 )
LABEL_107:
          AppMain::RequestPlayBGMUtil((AppMain *)v2, SND_BGM_21_ORDER_SELECT, BGM_MODE_NORMAL, 0.0, 0.0, 0);
        if ( !v52
          || _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&v52->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) != 1 )
        {
          goto LABEL_112;
        }
        v32 = v81;
        goto LABEL_111;
      }
      AppMain::RequestPlayBGMUtil((AppMain *)v2, SND_BGM_20_PLAYER_SELECT_1, BGM_MODE_NORMAL, 0.0, 0.0, 1);
    }
LABEL_112:
    *(_DWORD *)(v2 + 92584) = -1;
    goto LABEL_126;
  }
  v58 = s_soundIndex.m_keys[67].m_sharedBuffer.m_ptr;
  v77 = s_soundIndex.m_keys[67].m_sharedBuffer.m_ptr;
  if ( s_soundIndex.m_keys[67].m_sharedBuffer.m_ptr )
  {
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&s_soundIndex.m_keys[67].m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
      1ui64);
    v58 = v77;
  }
  if ( !result.m_sharedBuffer.m_ptr )
    goto LABEL_122;
  v59 = 0i64;
  if ( v58 )
    v59 = v58->m_str;
  v60 = result.m_sharedBuffer.m_ptr->m_str;
  v61 = v59 - result.m_sharedBuffer.m_ptr->m_str;
  do
  {
    v62 = (unsigned __int8)v60[v61];
    v63 = (unsigned __int8)*v60 - v62;
    if ( v63 )
      break;
    ++v60;
  }
  while ( v62 );
  if ( v63 )
LABEL_122:
    AppMain::RequestPlayBGMUtil((AppMain *)v2, SND_BGM_21_ORDER_SELECT, BGM_MODE_NORMAL, 0.0, 0.0, 0);
  if ( v58
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v58->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v77->~RefCountableWeakSupportBase)(
      v77,
      1i64);
  }
LABEL_126:
  v64 = GameDataInfo::getInstance()->m_ControllerSetting[1];
  if ( v64 )
  {
    Framework::Input::ControllerContext::getControllerByValidDeviceID(
      &Framework::GLManager::glm->m_controllerContext,
      &v82,
      *(_DWORD *)(v2 + 2200668));
    v65 = v64 == USER_ID_2P;
    v66 = v82.m_ptr;
    if ( v82.m_ptr && v82.m_ptr->m_type == AgControllerType_Gamepad )
    {
      `eh vector constructor iterator'(
        &ptr,
        0x30ui64,
        3ui64,
        (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
        (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
      if ( (ptr.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
        ptr.pObjectInterface = 0i64;
      }
      ptr.Type = 4;
      ptr.mValue.IValue = v65;
      m_hardwareType = v66->m_hardwareType;
      if ( !m_hardwareType )
        m_hardwareType = 5;
      if ( (val.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
        val.pObjectInterface = 0i64;
      }
      val.Type = 4;
      val.mValue.IValue = m_hardwareType;
      if ( (v87.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v87.pObjectInterface, &v87, v87.mValue.pStringManaged);
        v87.pObjectInterface = 0i64;
      }
      v87.Type = 4;
      v87.mValue.IValue = 1;
      GfxManager::getInstance();
      v69 = *v68;
      if ( Scaleform::GFx::Movie::IsAvailable(
             *(Scaleform::GFx::Movie **)(*v68 + 40),
             "_root.callInputMethodChanged_OrderSelect") )
      {
        Scaleform::GFx::Movie::Invoke(
          *(Scaleform::GFx::Movie **)(v69 + 40),
          "_root.callInputMethodChanged_OrderSelect",
          0i64,
          &ptr,
          3u);
      }
      p_ptr = &ptr;
    }
    else
    {
      `eh vector constructor iterator'(
        &pargs,
        0x30ui64,
        3ui64,
        (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
        (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
      if ( (pargs.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          pargs.pObjectInterface,
          &pargs,
          pargs.mValue.pStringManaged);
        pargs.pObjectInterface = 0i64;
      }
      pargs.Type = 4;
      pargs.mValue.IValue = v65;
      if ( (v89.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v89.pObjectInterface, &v89, v89.mValue.pStringManaged);
        v89.pObjectInterface = 0i64;
      }
      v89.Type = 4;
      v89.mValue.IValue = 0;
      if ( (v90.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v90.pObjectInterface, &v90, v90.mValue.pStringManaged);
        v90.pObjectInterface = 0i64;
      }
      v90.Type = 4;
      v90.mValue.IValue = 3;
      GfxManager::getInstance();
      v72 = *v71;
      if ( Scaleform::GFx::Movie::IsAvailable(
             *(Scaleform::GFx::Movie **)(*v71 + 40),
             "_root.callInputMethodChanged_OrderSelect") )
      {
        Scaleform::GFx::Movie::Invoke(
          *(Scaleform::GFx::Movie **)(v72 + 40),
          "_root.callInputMethodChanged_OrderSelect",
          0i64,
          &pargs,
          3u);
      }
      p_ptr = &pargs;
    }
    `eh vector destructor iterator'(p_ptr, 0x30ui64, 3ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v82);
  }
  if ( *(_DWORD *)(v2 + 2507460) )
  {
    *(_BYTE *)(v2 + 2507472) = 0;
    *(_DWORD *)(v2 + 2507452) = 40;
    v73 = 1000 * *(unsigned __int8 *)(v2 + 2507456);
    *(_DWORD *)(v2 + 2507460) = v73;
    *(_DWORD *)(v2 + 2507464) = v73 / 40;
    *(_BYTE *)(v2 + 2507474) = 0;
    *(_DWORD *)(v2 + 7364) = 171;
  }
  if ( result.m_sharedBuffer.m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&result.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))result.m_sharedBuffer.m_ptr->~RefCountableWeakSupportBase)(
        result.m_sharedBuffer.m_ptr,
        1i64);
  }
}

void __fastcall AppMain::ST_OnlineMenuDraw(AppMain *this)
{
  Graphics *v2; // rcx
  int v3; // er8
  int v4; // er9
  Graphics *g; // rdx
  GfxManager *v6; // rax
  extension::GFXIMovieStack *v7; // rax
  GfxManager *v8; // [rsp+50h] [rbp+8h]

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
  SyncMenuImage::Draw(&this->m_SyncMenuBG, this->g, v3, v4, 1.0);
  Graphics::drawStack(this->g->g);
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  v7 = extension::GFXIMovieStack::Instance();
  extension::GFXIMovieStack::render(v7);
  Graphics::drawStack(this->g->g);
}

void __fastcall AppMain::ST_OrderSelectInit(AppMain *this, __int64 a2, __int64 a3, int a4)
{
  AppMain *v4; // rbx
  _DWORD *v5; // rsi
  GameDataInfo *v6; // rcx
  GfxManager *v7; // rax
  GfxManager *v8; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  extension::gfxi_detail::MovieProxy *v10; // rcx
  int v11; // eax
  GameDataInfo *v12; // rcx
  GameDataInfo *v13; // rcx
  GameDataInfo *v14; // rcx
  GameDataInfo *v15; // rcx
  GameDataInfo *v16; // rcx
  GameDataInfo *v17; // rcx
  UserGameOperation *v18; // rax
  GameDataInfo *v19; // rcx
  GAME_MODE v20; // ecx
  GameDataInfo *v21; // rcx
  int v22; // ebp
  _DWORD *v23; // r14
  GameDataInfo *v24; // rcx
  GameDataInfo *Instance; // rax
  int costume3; // er13
  int color3; // er12
  int costume2; // er14
  int color2; // ebp
  int chara2; // er15
  int costume1; // edi
  int v32; // ebx
  int v33; // esi
  GameDataInfo *v34; // rax
  int v35; // er13
  int v36; // er12
  int v37; // er14
  int v38; // ebp
  int v39; // er15
  int v40; // edi
  int v41; // ebx
  int v42; // esi
  GameDataInfo *v43; // rax
  GameDataInfo *v44; // rcx
  clasChkDisconOnlineSv *v45; // rax
  GfxManager *v46; // [rsp+60h] [rbp-5E8h]
  GfxManager *v47; // [rsp+60h] [rbp-5E8h]
  GfxManager *v48; // [rsp+60h] [rbp-5E8h]
  int chara3; // [rsp+60h] [rbp-5E8h]
  int v50; // [rsp+60h] [rbp-5E8h]
  _DWORD *v52; // [rsp+70h] [rbp-5D8h]
  NET_USER_DATA pInfo[12]; // [rsp+80h] [rbp-5C8h] BYREF

  v4 = this;
  v5 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  v52 = v5;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v6);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v7 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v46 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v46);
    GfxManager::instance = v7;
  }
  GfxManager::LoadRequest(v7, FILE_04_ORDERSELECT, LoadCompleteEventOrderSelect, a4);
  v8 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v47 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v47);
    GfxManager::instance = v8;
  }
  if ( v8->m_GFXMovie.m_movieProxy.m_ptr )
  {
    v8->m_GFXMovie.m_movieProxy.m_ptr->m_bAdvance = 1;
    if ( v8->m_GFXMovie.m_movieProxy.m_ptr )
      v8->m_GFXMovie.m_movieProxy.m_ptr->m_bRender = 1;
  }
  if ( !v8 )
  {
    v48 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v48);
    GfxManager::instance = v8;
  }
  if ( v8->m_GFXMovieBG.m_movieProxy.m_ptr )
  {
    m_ptr = v8->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( m_ptr )
      m_ptr->m_bAdvance = 1;
    v10 = v8->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( v10 )
      v10->m_bRender = 1;
  }
  else
  {
    GfxManager::LoadRequestBG(v8);
  }
  v11 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v11 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v12);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v11 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_Order[0][0] = -1;
  if ( v11 > *v5 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v11 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v13);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v11 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_Order[0][1] = -1;
  if ( v11 > *v5 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v11 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v14);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v11 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_Order[0][2] = -1;
  if ( v11 > *v5 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v11 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v15);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v11 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_Order[1][0] = -1;
  if ( v11 > *v5 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v11 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v16);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v11 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_Order[1][1] = -1;
  if ( v11 > *v5 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v17);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_Order[1][2] = -1;
  SyncMenuImage::Load(
    &v4->m_SyncMenuBG,
    (const ImageDataInfo *)MenuImageDataTbl[*(int *)(*(_QWORD *)&AppMain::pApp + 2197384i64)] + 26,
    FADE_IN);
  v18 = UserGameOperation::Instance();
  UserGameOperation::clear(v18);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v19);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v20 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  if ( (unsigned int)(v20 - 4) <= 2 || v20 == GAME_MODE_ONLINETRAINING )
  {
    memset(pInfo, 0, sizeof(pInfo));
    NetManager::GetBattleStartTableRoomMemberInfo(&g_NetworkManager, pInfo);
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v21);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    if ( `GameDataInfo::getInstance'::`2'::instance.m_GameRule[`GameDataInfo::getInstance'::`2'::instance.m_GameRuleIndex] == GAME_RULE_TEAM )
    {
      v22 = 0;
      v23 = (_DWORD *)((char *)pInfo + 8);
      do
      {
        if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
        {
          Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
          {
            GameDataInfo::GameDataInfo(v24);
            Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          }
        }
        GameDataInfo::SetTeamMember(
          &`GameDataInfo::getInstance'::`2'::instance,
          (PLAYER_ID)v22++,
          (CHARACTER_NO)(*v23 & 0x3F),
          (CHARACTER_COLOR)((*v23 >> 6) & 7),
          (*v23 >> 9) & 3,
          (CHARACTER_NO)((*v23 >> 14) & 0x3F),
          (CHARACTER_COLOR)((*v23 >> 20) & 7),
          (*v23 >> 23) & 3,
          (CHARACTER_NO)(v23[1] & 0x3F),
          (CHARACTER_COLOR)((v23[1] >> 6) & 7),
          (v23[1] >> 9) & 3);
        v23 = (_DWORD *)((char *)v23 + 118);
      }
      while ( v22 <= 1 );
    }
    else
    {
      Instance = GameDataInfo::getInstance();
      if ( Instance->m_GameRule[Instance->m_GameRuleIndex] != GAME_RULE_PARTY )
        goto LABEL_55;
      costume3 = (*((_DWORD *)&pInfo[2] + 2) >> 9) & 3;
      color3 = (*((_DWORD *)&pInfo[2] + 2) >> 6) & 7;
      chara3 = *((_BYTE *)&pInfo[2] + 8) & 0x3F;
      costume2 = (*((_DWORD *)&pInfo[1] + 2) >> 9) & 3;
      color2 = (*((_DWORD *)&pInfo[1] + 2) >> 6) & 7;
      chara2 = *((_BYTE *)&pInfo[1] + 8) & 0x3F;
      costume1 = (*((_DWORD *)pInfo + 2) >> 9) & 3;
      v32 = (*((_DWORD *)pInfo + 2) >> 6) & 7;
      v33 = *((_BYTE *)pInfo + 8) & 0x3F;
      v34 = GameDataInfo::getInstance();
      GameDataInfo::SetTeamMember(
        v34,
        PLAYER_ID_1P,
        (CHARACTER_NO)v33,
        (CHARACTER_COLOR)v32,
        costume1,
        (CHARACTER_NO)chara2,
        (CHARACTER_COLOR)color2,
        costume2,
        (CHARACTER_NO)chara3,
        (CHARACTER_COLOR)color3,
        costume3);
      v35 = (*((_DWORD *)&pInfo[5] + 2) >> 9) & 3;
      v36 = (*((_DWORD *)&pInfo[5] + 2) >> 6) & 7;
      v50 = *((_BYTE *)&pInfo[5] + 8) & 0x3F;
      v37 = (*((_DWORD *)&pInfo[4] + 2) >> 9) & 3;
      v38 = (*((_DWORD *)&pInfo[4] + 2) >> 6) & 7;
      v39 = *((_BYTE *)&pInfo[4] + 8) & 0x3F;
      v40 = (*((_DWORD *)&pInfo[3] + 2) >> 9) & 3;
      v41 = (*((_DWORD *)&pInfo[3] + 2) >> 6) & 7;
      v42 = *((_BYTE *)&pInfo[3] + 8) & 0x3F;
      v43 = GameDataInfo::getInstance();
      GameDataInfo::SetTeamMember(
        v43,
        PLAYER_ID_2P,
        (CHARACTER_NO)v42,
        (CHARACTER_COLOR)v41,
        v40,
        (CHARACTER_NO)v39,
        (CHARACTER_COLOR)v38,
        v37,
        (CHARACTER_NO)v50,
        (CHARACTER_COLOR)v36,
        v35);
      v5 = v52;
    }
    v4 = this;
LABEL_55:
    *(__m128i *)&s_oldOrder[0][0] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    *(_QWORD *)&s_oldOrder[1][1] = -1i64;
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v44);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_RANKMATCH )
    {
      v45 = clasChkDisconOnlineSv::_instance;
      if ( !clasChkDisconOnlineSv::_instance )
      {
        v45 = (clasChkDisconOnlineSv *)operator new((unsigned int)((_DWORD)clasChkDisconOnlineSv::_instance + 2));
        *v45 = 0;
        clasChkDisconOnlineSv::_instance = v45;
      }
      v45->m_RankmatchGameStart = 1;
      AppMain::TusSetOnlineProfile(*(AppMain **)&AppMain::pApp);
    }
  }
  v4->m_SceneTime = 0;
  v4->iReserveScene = -1;
  v4->m_FuncST = 30;
  v4->m_FuncBT = 31;
  AppMain::SceneFunc(v4, 30);
  v4->m_FuncExit = 29;
}

void __fastcall AppMain::ST_OrderSelectLoop(AppMain *this)
{
  AppMain *v1; // rbp
  GfxManager *v2; // r13
  GfxManager *v3; // rax
  GfxManager *v4; // rax
  GameDataInfo *v5; // rcx
  GfxManager *v6; // rax
  extension::GFXIMovieStack *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  GameDataInfo *v10; // rcx
  GAME_MODE v11; // ecx
  GameDataInfo *Instance; // rax
  NetManager *m_GameRuleIndex; // rcx
  __int64 v14; // rax
  int PlayerID; // eax
  __int64 v16; // r12
  int v17; // ebx
  __int64 v18; // rdi
  GameDataInfo *v19; // rdx
  NetManager *v20; // rcx
  unsigned int v21; // eax
  PLAYER_ID v22; // er14
  int PNo; // eax
  int v24; // edi
  __int64 v25; // rsi
  unsigned __int8 v26; // dl
  unsigned int v27; // edx
  unsigned int v28; // edx
  int v29; // ebx
  GfxManager *v30; // rax
  int v31; // ebx
  int v32; // ebx
  GfxManager **v33; // rdi
  GfxManager *v34; // rax
  GfxManager *v35; // rax
  GfxManager::RESULT_CODE m_QuitResultCode; // ebx
  GameDataInfo *v37; // rcx
  GAME_MODE v38; // edi
  GfxManager *v39; // rax
  extension::SoundManager *v40; // rax
  GameDataInfo *v41; // rax
  NetManager *m_GameModeIndex; // rcx
  GAME_MODE v43; // edx
  GameDataInfo *v44; // rax
  int m_StoryWinCount; // ecx
  STAGE_ID m_StageIDSpecial_03; // ebx
  GameDataInfo *v47; // rax
  TEAM_ID TeamID_Combination; // eax
  bool v49; // r8
  GameDataInfo *v50; // r11
  GameDataInfo *v51; // rax
  AppMain *v52; // rcx
  __int64 v53; // rax
  int v54; // er8
  AppMain *v55; // rcx
  __int64 v56; // rax
  bool v57; // dl
  int v58; // edx
  GfxManager *v59; // [rsp+28h] [rbp-60h]
  GfxManager *v60; // [rsp+30h] [rbp-58h]
  GfxManager *v62; // [rsp+90h] [rbp+8h]
  GfxManager *v63; // [rsp+90h] [rbp+8h]
  GfxManager *v64; // [rsp+90h] [rbp+8h]
  extension::SoundManager *v65; // [rsp+90h] [rbp+8h]
  GfxManager *v66; // [rsp+98h] [rbp+10h] BYREF
  __int64 v67; // [rsp+A0h] [rbp+18h]
  __int64 v68; // [rsp+A8h] [rbp+20h]

  v1 = this;
  v2 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v66 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v66);
    v2 = v3;
    GfxManager::instance = v3;
  }
  SyncMenuImage::Update(&v1->m_SyncMenuBG);
  if ( AppMain::InputCheckNewChallenger(v1, 0) )
  {
    v4 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v62 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v62);
      GfxManager::instance = v4;
    }
    v4->m_ReleaseFlag = 1;
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
    `GameDataInfo::getInstance'::`2'::instance.m_ControllerSelect = 1;
    v1->m_FadeST = 124;
    v1->m_bExitFuncWaitFrame = 0;
    goto LABEL_10;
  }
  if ( !GfxManager::instance )
  {
    v66 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v66);
    GfxManager::instance = v6;
  }
  if ( GfxManager::instance->m_SystemMessageState != SYSTEM_MESSAGE_OPEN || !GfxManager::instance->m_SystemMessageLock )
  {
    v7 = extension::GFXIMovieStack::Instance();
    extension::GFXIMovieStack::advance(v7, 0.016666668);
  }
  v8 = 40i64;
  v67 = 40i64;
  v9 = *(_QWORD *)NtCurrentTeb()->Reserved1[11];
  v68 = v9;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v9 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v10);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v11 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  if ( (unsigned int)(v11 - 4) <= 2 || v11 == GAME_MODE_ONLINETRAINING )
  {
    Instance = GameDataInfo::getInstance();
    m_GameRuleIndex = (NetManager *)Instance->m_GameRuleIndex;
    if ( Instance->m_GameRule[(_QWORD)m_GameRuleIndex] == GAME_RULE_TEAM )
    {
      if ( NetManager::IsOrderSelectEnd(m_GameRuleIndex) && ++v1->m_SceneTime > 600 )
      {
        GfxManager::getInstance();
        *(_DWORD *)(v14 + 168) = 0;
        *(_WORD *)(v14 + 166) = 256;
        *(_BYTE *)(v14 + 165) = 0;
      }
      PlayerID = NetManager::GetPlayerID(&g_NetworkManager, -1);
      v16 = PlayerID;
      if ( PlayerID != -1 )
      {
        v17 = 0;
        v18 = 0i64;
        do
        {
          v19 = GameDataInfo::getInstance();
          if ( v16 == -1 )
          {
            LOBYTE(v21) = -1;
          }
          else
          {
            v20 = (NetManager *)(v18 + 2 * (v16 + 228) + v16 + 228);
            v21 = v19->randMT.mt[(_QWORD)v20];
          }
          NetManager::SetOrder(v20, (int)v19, v17++, v21 + 1);
          ++v18;
        }
        while ( v17 < 3 );
      }
      v22 = PLAYER_ID_1P;
      while ( 1 )
      {
        if ( (_DWORD)v16 == v22 )
          goto LABEL_56;
        PNo = NetManager::GetPNo(&g_NetworkManager, v22, 0);
        LOWORD(v66) = 0;
        BYTE2(v66) = 0;
        v24 = 0;
        v25 = PNo;
        do
        {
          if ( v25 == -1 )
          {
            v26 = g_NetworkManager.gamedata.userInfo.m_Order[(unsigned __int8)v24];
            goto LABEL_45;
          }
          v26 = 0;
          if ( !(_BYTE)v24 )
          {
            v27 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[v25] + 2);
LABEL_43:
            v28 = v27 >> 11;
            goto LABEL_44;
          }
          if ( (unsigned __int8)v24 != 1 )
          {
            if ( (unsigned __int8)v24 != 2 )
              goto LABEL_45;
            v27 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[v25] + 3);
            goto LABEL_43;
          }
          v28 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[v25] + 2) >> 25;
LABEL_44:
          v26 = v28 & 3;
LABEL_45:
          v29 = v26;
          if ( v26 )
          {
            v30 = GfxManager::instance;
            if ( !GfxManager::instance )
            {
              v59 = (GfxManager *)operator new(0x108ui64);
              GfxManager::GfxManager(v59);
              GfxManager::instance = v30;
            }
            v31 = v29 - 1;
            GfxManager::GFv_DecideOrder(v30, v22, v31);
            *((_BYTE *)&v66 + v31) = 1;
          }
          ++v24;
        }
        while ( v24 < 3 );
        v32 = 0;
        v33 = &v66;
        do
        {
          if ( !*(_BYTE *)v33 )
          {
            v34 = GfxManager::instance;
            if ( !GfxManager::instance )
            {
              v60 = (GfxManager *)operator new(0x108ui64);
              GfxManager::GfxManager(v60);
              GfxManager::instance = v34;
            }
            GfxManager::GFv_CancelOrder(v34, v22, v32);
          }
          ++v32;
          v33 = (GfxManager **)((char *)v33 + 1);
        }
        while ( v32 < 3 );
LABEL_56:
        if ( ++v22 >= PLAYER_ID_MAX )
        {
          v1 = this;
          v8 = v67;
          v9 = v68;
          break;
        }
      }
    }
  }
  if ( !v2->m_bQuitGFXMovie )
    return;
  if ( !GfxManager::instance )
  {
    v63 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v63);
    GfxManager::instance = v35;
  }
  m_QuitResultCode = GfxManager::instance->m_QuitResultCode;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v8 + v9) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v37);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v38 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  if ( m_QuitResultCode != RESULT_CODE_ROOM )
  {
    if ( m_QuitResultCode == RESLCT_CODE_1ON1 )
    {
      v1->m_FadeST = 16;
LABEL_72:
      v1->m_bExitFuncWaitFrame = 0;
LABEL_10:
      v1->iReserveScene = -1;
      v1->m_FadeExitFunc = 29;
      v1->m_FuncST = 0;
      if ( v1->m_FuncFT != 170 )
        v1->m_FuncFT = 172;
      return;
    }
    v41 = GameDataInfo::getInstance();
    m_GameModeIndex = (NetManager *)v41->m_GameModeIndex;
    v43 = v41->m_GameMode[(_QWORD)m_GameModeIndex];
    if ( (unsigned int)(v43 - 4) <= 2 || v43 == GAME_MODE_ONLINETRAINING )
    {
      if ( !NetManager::IsOrderSelectEnd(m_GameModeIndex) )
        return;
      NetManager::ChangeState(&g_NetworkManager, NET_STATE_BATTLELOADING, v54);
      AppMain::SetBattleInfoFromRoom(v55);
      goto LABEL_86;
    }
    if ( v38 != GAME_MODE_STORY )
    {
      GfxManager::getInstance();
      *(_BYTE *)(v53 + 257) = 0;
      v1->m_FadeST = 32;
      goto LABEL_72;
    }
    v44 = GameDataInfo::getInstance();
    m_StoryWinCount = v44->m_StoryWinCount;
    if ( m_StoryWinCount == 3 )
    {
      m_StageIDSpecial_03 = v44->m_StageIDSpecial_03;
    }
    else
    {
      if ( m_StoryWinCount != 7 )
        goto LABEL_81;
      m_StageIDSpecial_03 = v44->m_StageIDSpecial_07;
    }
    if ( m_StageIDSpecial_03 != STAGE_ID_NONE )
    {
LABEL_82:
      v51 = GameDataInfo::getInstance();
      v51->m_StageID = m_StageIDSpecial_03;
      v51->m_StageRandom = 0;
LABEL_86:
      AppMain::StopBGMUtil(v52, 1.0);
      GfxManager::getInstance();
      *(_BYTE *)(v56 + 172) = 1;
      AppMain::SetBattleSetting(v1, v57);
      AppMain::SetBattleLoadingNonFade(v1, v58, 29);
      return;
    }
LABEL_81:
    v47 = GameDataInfo::getInstance();
    TeamID_Combination = (unsigned int)GameDataInfo::GetTeamID_Combination(v47, PLAYER_ID_2P);
    m_StageIDSpecial_03 = (unsigned int)GameDataInfo::GetStageID_Combination(v50, TeamID_Combination, v49);
    goto LABEL_82;
  }
  if ( !GfxManager::instance )
  {
    v64 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v64);
    GfxManager::instance = v39;
  }
  GfxManager::instance->m_ReleaseFlag = 1;
  v40 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v65 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v65);
    extension::SoundManager::the_instance = v40;
  }
  extension::SoundManager::stopBGM(v40, 1.0);
  AppMain::SendRoomBack(v1, 0);
  v1->iReserveScene = -1;
  v1->m_FadeST = 148;
  v1->m_FuncST = 0;
  v1->m_FadeExitFunc = 29;
  *(_WORD *)&v1->m_bFadeEnd = 0;
  v1->m_iFadeFrame = 20;
  v1->m_iFadeColor.rgba = -1;
  v1->m_iFadeRate = 50 * v1->m_iFadeColor.s.a;
  v1->m_iFadeAlpha = 0;
  v1->m_bFadeLock = 0;
  v1->m_FuncFT = 170;
}

