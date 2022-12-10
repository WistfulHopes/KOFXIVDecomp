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
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementsystem.cpp"

const CHARACTER_NO _SpecialCombinationData[3][10]; // 0x14089B6A0
const CHARACTER_NO _csFaceOffData[4][61]; // 0x14089B720
std::piecewise_construct_t std::piecewise_construct; // 0x14089B475
const char * _win_vo_character_name[61]; // 0x14089BAF0
const char * _win_mes_character_name[61]; // 0x14089BCE0
const long _StageCombinationData[2][19]; // 0x14089BED0
const CHARACTER_NO _TeamCombinationData[3][18]; // 0x14089BF70
GameDataInfo::GameDataInfo(); // 0x1400F53E0
extension::SoundHashKey & extension::SoundHashKey::operator=(const extension::SoundHashKey & __that); // 0x1400F7A40
void GameDataInfo::CommitStageIDRand(); // 0x1400F55E0
long GameDataInfo::GetMemberMax(PLAYER_ID playerID); // 0x1400F5680
void GameDataInfo::CommitCharacterNoRand(); // 0x1400F56D0
void GameDataInfo::CommitCharacterNoRand(PLAYER_ID playerID, long index); // 0x1400F5740
void GameDataInfo::SetCharacterColor(PLAYER_ID playerID, long index, CHARACTER_COLOR color, bool sameColorCheck); // 0x1400F5960
void GameDataInfo::UpdateCharacterColorRand(); // 0x1400F59D0
void GameDataInfo::UpdateCharacterColorRand(PLAYER_ID myPlayerID, long myIndex); // 0x1400F5A60
bool GameDataInfo::IsSameColorSelected(CHARACTER_NO chara, CHARACTER_COLOR color, long costume); // 0x1400F5C10
CHARACTER_COLOR GameDataInfo::GetNegativeColor(CHARACTER_NO chara, CHARACTER_COLOR color, long costume); // 0x1400F5CF0
void GameDataInfo::Init(); // 0x1400F5DF0
void GameDataInfo::InitCharacter(PLAYER_ID playerID); // 0x1400F5E90
void GameDataInfo::SetDefaultSettingSaveData(); // 0x1400F5F80
void GameDataInfo::SetTeamMember(PLAYER_ID playerID, CHARACTER_NO chara1, CHARACTER_COLOR color1, long costume1, CHARACTER_NO chara2, CHARACTER_COLOR color2, long costume2, CHARACTER_NO chara3, CHARACTER_COLOR color3, long costume3, bool sameColorCheck); // 0x1400F5FC0
void GameDataInfo::SetSingleMember(PLAYER_ID playerID, CHARACTER_NO chara1, CHARACTER_COLOR color1, long costume1, bool sameColorCheck); // 0x1400F60F0
CHARACTER_COLOR GameDataInfo::GetOrderCharacterColor(PLAYER_ID playerID, long index); // 0x1400F6180
void GameDataInfo::MakeStoryEnemyTable(PLAYER_ID playerID); // 0x1400F6230
TEAM_ID GameDataInfo::GetStoryEnemyRandom(TEAM_ID ngTeam1, TEAM_ID ngTeam2, TEAM_ID * ngTeam, long ngTeamLen); // 0x1400F69F0
TEAM_ID GameDataInfo::GetStoryEnemyFaceOff(TEAM_ID ngTeam1, TEAM_ID ngTeam2, TEAM_ID * ngTeam, long ngTeamLen, CHARACTER_NO chara1, CHARACTER_NO chara2, CHARACTER_NO chara3); // 0x1400F6AC0
void GameDataInfo::GetStoryEnemyFaceOff_Sub(CHARACTER_NO myChara, TEAM_ID ngTeam1, TEAM_ID ngTeam2, TEAM_ID * ngTeam, long ngTeamLen, TEAM_ID * magicBox, long & magicCount); // 0x1400F6C10
bool GameDataInfo::NextStoryEnemy(); // 0x1400F6DE0
void GameDataInfo::CommitStoryEnemy(); // 0x1400F6E40
MOVIE_ID GameDataInfo::GetStoryDemoMovieID(); // 0x1400F6EE0
MOVIE_ID GameDataInfo::GetEndDemoMovieID(TEAM_ID teamID); // 0x1400F6FA0
void GameDataInfo::MakeSurvivalEnemyTable(); // 0x1400F70C0
bool GameDataInfo::NextSurvivalEnemy(bool remake); // 0x1400F71F0
void GameDataInfo::CommitSurvivalEnemy(); // 0x1400F7390
TEAM_ID GameDataInfo::GetTeamID_Combination(PLAYER_ID player); // 0x1400F73C0
TEAM_ID GameDataInfo::GetTeamID_Combination(CHARACTER_NO chara1, CHARACTER_NO chara2, CHARACTER_NO chara3); // 0x1400F7460
STAGE_ID GameDataInfo::GetStageID_Combination(TEAM_ID team, bool random); // 0x1400F74C0
void GameDataInfo::CreateStageID_Special(); // 0x1400F7560
bool GameDataInfo::GetWinMesKey(CHARACTER_NO myNo, CHARACTER_NO rivalNo, char * key, long commonIndex); // 0x1400F76D0
bool GameDataInfo::GetWinVoiceName(CHARACTER_NO myNo, CHARACTER_NO rivalNo, char * key, long commonIndex); // 0x1400F7810
long GameDataInfo::GetRsultRate(PLAYER_ID player); // 0x1400F7AA0
void GameDataInfo::SetTrainingSetting(TrainingSetting & _trainingSetting); // 0x1400F7BC0
void GameDataInfo::AutoSetRandSeed(); // 0x1400F7C80//decompilation failure at 14089B6A0!
//decompilation failure at 14089B720!
//decompilation failure at 14089B475!
//decompilation failure at 14089BAF0!
//decompilation failure at 14089BCE0!
//decompilation failure at 14089BED0!
//decompilation failure at 14089BF70!
void __fastcall GameDataInfo::GameDataInfo(GameDataInfo *this)
{
  unsigned int v1; // eax
  int v2; // er8

  RandomMT::RandomMT(&`GameDataInfo::getInstance'::`2'::instance.randMT);
  *(_QWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart = 1i64;
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[0] = 100;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuard = 0i64;
  *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge = _mm_load_si128((const __m128i *)&_xmm);
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iKeyData = 0i64;
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[1] = 100;
  *(_QWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRecordMode = 0i64;
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRecordSlot = SLOT_1;
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][1] = 1;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][2] = 0ui64;
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][1] = 1;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2] = 0ui64;
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn = 0;
  v1 = time64(0i64);
  v2 = 1;
  `GameDataInfo::getInstance'::`2'::instance.randMT.mt[0] = v1;
  `GameDataInfo::getInstance'::`2'::instance.randMT.mti = 1;
  do
  {
    `GameDataInfo::getInstance'::`2'::instance.randMT.mt[v2] = v2
                                                             + 1812433253
                                                             * (`GameDataInfo::getInstance'::`2'::instance.randMT.mt[v2 - 1] ^ (`GameDataInfo::getInstance'::`2'::instance.randMT.mt[v2 - 1] >> 30));
    v2 = `GameDataInfo::getInstance'::`2'::instance.randMT.mti + 1;
    `GameDataInfo::getInstance'::`2'::instance.randMT.mti = v2;
  }
  while ( v2 < 624 );
  *(__m128i *)&`GameDataInfo::getInstance'::`2'::instance.m_Order[0][0] = _mm_load_si128((const __m128i *)&_xmm);
  *(__m128i *)&`GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[0][1] = _mm_load_si128((const __m128i *)&_xmm);
  `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][1] = 0;
  `GameDataInfo::getInstance'::`2'::instance.m_SurvivalEnemyTablePos = 0;
  `GameDataInfo::getInstance'::`2'::instance.m_GameRuleIndex = 0;
  `GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex = 0;
  `GameDataInfo::getInstance'::`2'::instance.m_ContinueBous = BONUS_NONE;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][2] = 0i64;
  *(_QWORD *)`GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting = 1i64;
  `GameDataInfo::getInstance'::`2'::instance.m_Order[1][1] = 1;
  *(_QWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_Order[1][2] = 2i64;
  `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[0][0] = CHARACTER_COLOR_1P;
  `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[1][2] = CHARACTER_COLOR_1P;
  `GameDataInfo::getInstance'::`2'::instance.m_HandicapSetting[0] = HANDICAP_TYPE_3;
  `GameDataInfo::getInstance'::`2'::instance.m_HandicapSetting[1] = HANDICAP_TYPE_3;
  `GameDataInfo::getInstance'::`2'::instance.m_TimeSetting = BATTLE_ROUND_TIMER_TYPE_99;
  `GameDataInfo::getInstance'::`2'::instance.m_WinRoundCount = WIN_ROUND_COUNT_3;
  *(_QWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_MenuID = -1i64;
  `GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount = 2068357982;
  `GameDataInfo::getInstance'::`2'::instance.m_SurvivalEnemyTable[0] = CHARACTER_NO_NONE;
  `GameDataInfo::getInstance'::`2'::instance.m_StageIDSpecial_03 = STAGE_ID_MNA;
  `GameDataInfo::getInstance'::`2'::instance.m_StageIDSpecial_07 = STAGE_ID_GTR;
  `GameDataInfo::getInstance'::`2'::instance.m_GameRule[0] = GAME_RULE_TEAM;
  `GameDataInfo::getInstance'::`2'::instance.m_GameMode[0] = GAME_MODE_NONE;
}

extension::SoundHashKey *__fastcall extension::SoundHashKey::operator=(
        extension::SoundHashKey *this,
        const extension::SoundHashKey *__that)
{
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // r8
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v4; // rcx

  m_ptr = __that->m_sharedBuffer.m_ptr;
  if ( __that->m_sharedBuffer.m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
  v4 = this->m_sharedBuffer.m_ptr;
  this->m_sharedBuffer.m_ptr = m_ptr;
  if ( v4
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v4->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v4->~RefCountableWeakSupportBase)(
      v4,
      1i64);
  }
  return this;
}

void __fastcall GameDataInfo::AutoSetRandSeed(GameDataInfo *this)
{
  unsigned int *m_RandSeed; // rbx
  __int64 v2; // rdi

  m_RandSeed = this->m_RandSeed;
  v2 = 6i64;
  do
  {
    *m_RandSeed++ = Xtime_get_ticks();
    --v2;
  }
  while ( v2 );
}

void __fastcall GameDataInfo::CommitCharacterNoRand(GameDataInfo *this, PLAYER_ID playerID, int index)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v6; // rbp
  __int64 v7; // rdx
  char *v8; // rbx
  unsigned int Rand32; // eax

  v3 = *(_QWORD *)&AppMain::pApp;
  v4 = playerID;
  v6 = index;
  if ( this->m_TeamRandom[playerID] && !index )
  {
    v7 = ((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) & 0x8000000F;
    this->m_CharacterNo[v4][0] = TeamCombinationData[v7][0];
    v8 = (char *)this + 12 * v4;
    *((_DWORD *)v8 + 652) = TeamCombinationData[v7][1];
    *((_DWORD *)v8 + 653) = TeamCombinationData[v7][2];
    *((_DWORD *)v8 + 659) = (int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % 6 + 1;
    *((_DWORD *)v8 + 660) = (int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % 6 + 1;
    Rand32 = RandomMT::getRand32(&this->randMT);
    *(_QWORD *)(v8 + 2764) = 0i64;
    *((_DWORD *)v8 + 690) = 0;
    *((_DWORD *)v8 + 661) = (int)(Rand32 >> 1) % 6 + 1;
  }
  if ( this->m_EditRandom[0][2 * v4 + v6 + v4] )
  {
    this->m_CharacterNo[0][2 * v4 + v4 + v6] = SaveRecord_PlayerData::GetRandomEnableCharacter(
                                                 (SaveRecord_PlayerData *)(v3 + 2202784),
                                                 this->m_CharacterNo[v4][0],
                                                 this->m_CharacterNo[v4][1],
                                                 this->m_CharacterNo[v4][2],
                                                 CHARACTER_NO_NONE,
                                                 CHARACTER_NO_NONE,
                                                 CHARACTER_NO_NONE);
    this->m_CharacterColor[0][2 * v4 + v4 + v6] = (int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % 6 + 1;
    this->m_CharacterCostume[0][2 * v4 + v6 + v4] = 0;
  }
}

void __fastcall GameDataInfo::CommitCharacterNoRand(GameDataInfo *this)
{
  GameDataInfo::CommitCharacterNoRand(this, PLAYER_ID_1P, 0);
  GameDataInfo::CommitCharacterNoRand(this, PLAYER_ID_1P, 1);
  GameDataInfo::CommitCharacterNoRand(this, PLAYER_ID_1P, 2);
  GameDataInfo::CommitCharacterNoRand(this, PLAYER_ID_2P, 0);
  GameDataInfo::CommitCharacterNoRand(this, PLAYER_ID_2P, 1);
  GameDataInfo::CommitCharacterNoRand(this, PLAYER_ID_2P, 2);
}

void __fastcall GameDataInfo::CommitStageIDRand(GameDataInfo *this)
{
  STAGE_ID m_StageID; // er8
  int *v2; // rdx
  int v3; // ebx
  int i; // eax
  int v5[24]; // [rsp+20h] [rbp-78h] BYREF

  if ( this->m_StageRandom )
  {
    m_StageID = this->m_StageID;
    v2 = v5;
    v3 = 0;
    for ( i = 0; i < 24; ++i )
    {
      if ( i != m_StageID && ((i - 19) & 0xFFFFFFFD) != 0 )
      {
        ++v3;
        *v2++ = i;
      }
    }
    this->m_StageID = v5[(int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % v3];
  }
}

void __fastcall GameDataInfo::CommitStoryEnemy(GameDataInfo *this)
{
  int m_StoryWinCount; // er10
  int v2; // eax
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rax
  bool v6; // [rsp+58h] [rbp-10h]

  m_StoryWinCount = this->m_StoryWinCount;
  v2 = m_StoryWinCount;
  if ( m_StoryWinCount <= 0 )
    v2 = 0;
  v3 = v2;
  v4 = this->m_StoryWinCount;
  if ( m_StoryWinCount <= 0 )
    v4 = 0;
  v5 = v4 + 243i64;
  if ( m_StoryWinCount <= 0 )
    m_StoryWinCount = 0;
  GameDataInfo::SetTeamMember(
    this,
    PLAYER_ID_2P,
    this->m_StoryEnemyTableSP[v3][0],
    CHARACTER_COLOR_1P,
    0,
    (CHARACTER_NO)this->randMT.mt[3 * v5],
    CHARACTER_COLOR_1P,
    0,
    this->m_StoryEnemyTableSP[m_StoryWinCount][2],
    CHARACTER_COLOR_1P,
    0,
    v6);
}

void __fastcall GameDataInfo::CommitSurvivalEnemy(GameDataInfo *this)
{
  bool v1; // [rsp+28h] [rbp-10h]

  GameDataInfo::SetSingleMember(
    this,
    PLAYER_ID_2P,
    this->m_SurvivalEnemyTable[this->m_SurvivalEnemyTablePos],
    CHARACTER_COLOR_1P,
    0,
    v1);
}

void __fastcall GameDataInfo::CreateStageID_Special(GameDataInfo *this)
{
  int v1; // edi
  CHARACTER_NO v3; // eax
  CHARACTER_NO *v4; // r8
  __int64 v5; // rcx
  GameDataInfo *v6; // rdx
  signed int v7; // eax
  int v8; // ecx
  STAGE_ID v9; // eax
  __int64 v10; // rdi
  int v11; // esi
  __int64 v12; // rax
  int v13; // edx
  STAGE_ID v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+24h] [rbp-24h]
  int v16; // [rsp+28h] [rbp-20h]

  v1 = 0;
  if ( this->m_StoryEnemyTableSP[0][0] == CHARACTER_NO_NONE )
  {
LABEL_7:
    v1 = -1;
  }
  else
  {
    v3 = this->m_StoryEnemyTableSP[0][0];
    v4 = &this->m_StoryEnemyTableSP[0][1];
    v5 = 0i64;
    v6 = this;
    while ( v3 != CHARACTER_NO_NJD && *v4 != CHARACTER_NO_NJD && v6->m_StoryEnemyTableSP[0][2] != CHARACTER_NO_NJD )
    {
      ++v5;
      ++v1;
      v4 += 3;
      v6 = (GameDataInfo *)((char *)this + 12 * v5);
      v3 = v6->m_StoryEnemyTableSP[0][0];
      if ( v3 == CHARACTER_NO_NONE )
        goto LABEL_7;
    }
  }
  v14 = STAGE_ID_MNA;
  v15 = 22;
  v16 = 23;
  v7 = ((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) & 0x80000001;
  v8 = *((_DWORD *)&v14 + v7);
  *((_DWORD *)&v14 + v7) = 22;
  v15 = v8;
  if ( v1 == 3 )
  {
    v9 = v14;
    this->m_StageIDSpecial_03 = STAGE_ID_MAS;
  }
  else
  {
    if ( v1 == 7 )
    {
      this->m_StageIDSpecial_03 = v14;
      this->m_StageIDSpecial_07 = STAGE_ID_MAS;
      return;
    }
    v10 = 3i64;
    v11 = 4;
    do
    {
      --v11;
      --v10;
      v12 = (int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % v11;
      v13 = *((_DWORD *)&v14 + v12);
      *(&v14 + v12) = *(&v14 + v10);
      *((_DWORD *)&v14 + v10) = v13;
    }
    while ( v10 > 1 );
    this->m_StageIDSpecial_03 = v14;
    v9 = v15;
  }
  this->m_StageIDSpecial_07 = v9;
}

__int64 __fastcall GameDataInfo::GetEndDemoMovieID(GameDataInfo *this, TEAM_ID teamID)
{
  unsigned int v2; // er8
  __int64 result; // rax

  v2 = -1;
  switch ( teamID )
  {
    case TEAM_ID_JAPAN:
      result = 10i64;
      break;
    case TEAM_ID_ARTOFFIGHTING:
      result = 11i64;
      break;
    case TEAM_ID_FATALFURY:
      result = 12i64;
      break;
    case TEAM_ID_IKARIWARRIORS:
      result = 13i64;
      break;
    case TEAM_ID_YAGAMI:
      result = 14i64;
      break;
    case TEAM_ID_KDS:
      result = 15i64;
      break;
    case TEAM_ID_SOUTHOWN:
      result = 16i64;
      break;
    case TEAM_ID_WOMENFIGHTERS:
      result = 17i64;
      break;
    case TEAM_ID_KIM:
      result = 18i64;
      break;
    case TEAM_ID_PSYCHOSOLDIER:
      result = 19i64;
      break;
    case TEAM_ID_VILLAINS:
      result = 20i64;
      break;
    case TEAM_ID_ANOTHERWORLD:
      result = 21i64;
      break;
    case TEAM_ID_MEXICO:
      result = 22i64;
      break;
    case TEAM_ID_CHINA:
      result = 23i64;
      break;
    case TEAM_ID_SOUTHAMERICAN:
      result = 24i64;
      break;
    case TEAM_ID_OFFICIALINVITATION:
      result = 25i64;
      break;
    case TEAM_ID_ANTONOV:
      result = 26i64;
      break;
    case TEAM_ID_VERSE:
      v2 = 27;
      goto LABEL_20;
    default:
LABEL_20:
      result = v2;
      break;
  }
  return result;
}

__int64 __fastcall GameDataInfo::GetMemberMax(GameDataInfo *this, PLAYER_ID playerID)
{
  GAME_RULE v2; // edx
  __int64 result; // rax

  if ( playerID
    && this->m_GameMode[this->m_GameModeIndex] == GAME_MODE_STORY
    && (unsigned int)(this->m_CharacterNo[playerID][0] - 48) <= 1 )
  {
    return 1i64;
  }
  v2 = this->m_GameRule[this->m_GameRuleIndex];
  if ( v2 == GAME_RULE_SINGLE )
    return 1i64;
  result = 3i64;
  if ( v2 == GAME_RULE_TRAINING )
    return 1i64;
  return result;
}

__int64 __fastcall GameDataInfo::GetNegativeColor(
        GameDataInfo *this,
        CHARACTER_NO chara,
        CHARACTER_COLOR color,
        int costume)
{
  unsigned int v7; // esi
  int v8; // er11
  CHARACTER_NO (*m_CharacterNo)[3]; // rdi
  int v10; // ebx
  __int64 v11; // r9
  GAME_RULE v12; // ecx
  __int64 v13; // r10
  __int64 v14; // rax
  CHARACTER_NO (*v15)[3]; // rdx

  v7 = 1;
  while ( 1 )
  {
    v8 = 0;
    m_CharacterNo = this->m_CharacterNo;
    v10 = 0;
    v11 = 690i64;
    do
    {
      if ( v10
        && this->m_GameMode[this->m_GameModeIndex] == GAME_MODE_STORY
        && (unsigned int)(*(_DWORD *)m_CharacterNo - 48) <= 1
        || (v12 = this->m_GameRule[this->m_GameRuleIndex]) == GAME_RULE_SINGLE
        || (v13 = 3i64, v12 == GAME_RULE_TRAINING) )
      {
        v13 = 1i64;
      }
      v14 = 0i64;
      v15 = m_CharacterNo;
      do
      {
        if ( *(_DWORD *)v15 == chara && this->randMT.mt[v11 - 12 + v14] == v7 && this->randMT.mt[v11 + v14] == costume )
          ++v8;
        ++v14;
        v15 = (CHARACTER_NO (*)[3])((char *)v15 + 4);
      }
      while ( v14 < v13 );
      ++v10;
      ++m_CharacterNo;
      v11 += 3i64;
    }
    while ( v10 < 2 );
    if ( v8 < 1 )
      break;
    if ( (int)++v7 > 6 )
      return 1i64;
  }
  return v7;
}

__int64 __fastcall GameDataInfo::GetOrderCharacterColor(GameDataInfo *this, PLAYER_ID playerID, int index)
{
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rsi
  CHARACTER_COLOR v7; // ebp

  if ( playerID == PLAYER_ID_NONE )
    v4 = -1;
  else
    v4 = this->m_Order[playerID][index];
  v5 = playerID;
  v6 = v4;
  v7 = this->m_CharacterColor[0][2 * v5 + v5 + v4];
  if ( GameDataInfo::IsSameColorSelected(
         this,
         this->m_CharacterNo[0][2 * playerID + v4 + playerID],
         v7,
         this->m_CharacterCostume[0][2 * playerID + v4 + playerID]) )
  {
    return (unsigned int)this->m_CharacterColorRand[0][2 * v5 + v6 + v5];
  }
  else
  {
    return (unsigned int)v7;
  }
}

__int64 __fastcall GameDataInfo::GetRsultRate(GameDataInfo *this, PLAYER_ID player)
{
  __int64 v2; // rbx
  BattleSystem::BattleController *v3; // r11
  BattleSystem::BattleController *v4; // rax
  __int64 v5; // r10
  unsigned int v6; // ecx
  unsigned int v7; // edx
  int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // er9
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int v13; // er10
  BattleSystem::BattleController *v15; // [rsp+40h] [rbp+8h]

  v2 = player;
  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v15 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v15);
    v3 = v4;
    BattleSystem::BattleController::instance = v4;
  }
  v5 = v2;
  v6 = v3->resultMember.iWinCount[v2] ^ 0x7B48A35E;
  v7 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 14)) & 0xCCCC) << 14);
  v8 = (v7 ^ (v7 >> 7)) & 0x550055 ^ v7 ^ (((v7 ^ (v7 >> 7)) & 0x550055) << 7);
  v9 = v3->resultMember.iLoseCount[v5] ^ 0x7B48A35E;
  v10 = v9 ^ ((unsigned __int16)v9 ^ (unsigned __int16)(v9 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v9 ^ (unsigned __int16)(v9 >> 14)) & 0xCCCC) << 14);
  v11 = v3->resultMember.iDrawCount[v5] ^ 0x7B48A35E;
  v12 = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(v11 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v11 ^ (unsigned __int16)(v11 >> 14)) & 0xCCCC) << 14);
  v13 = v8
      + (v12 ^ (((v12 ^ (v12 >> 7)) & 0x550055) << 7) ^ (v12 ^ (v12 >> 7)) & 0x550055)
      + ((v10 ^ (v10 >> 7)) & 0x550055 ^ v10 ^ (((v10 ^ (v10 >> 7)) & 0x550055) << 7));
  if ( v13 )
    return (unsigned int)(10000 * v8 / v13);
  else
    return 0i64;
}

__int64 __fastcall GameDataInfo::GetStageID_Combination(GameDataInfo *this, TEAM_ID team, bool random)
{
  int v3; // er9
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 result; // rax
  unsigned int v8; // ecx

  v3 = 0;
  v5 = 0i64;
  v6 = 0i64;
  while ( StageCombinationData[v6][1] != team )
  {
    ++v5;
    ++v3;
    v6 = v5;
    if ( StageCombinationData[v5][0] == -1 )
      goto LABEL_6;
  }
  result = (unsigned int)StageCombinationData[v3][0];
  if ( (_DWORD)result != -1 )
    return result;
  do
  {
    do
LABEL_6:
      v8 = (int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % 24;
    while ( !v8 );
  }
  while ( v8 == 17 || v8 == 18 || v8 == 19 || v8 == 21 );
  return v8;
}

__int64 __fastcall GameDataInfo::GetStoryDemoMovieID(GameDataInfo *this)
{
  int m_StoryWinCount; // er8
  unsigned int v2; // edx
  int v3; // er8
  int v4; // er8
  int v5; // er8
  GameDataInfo *Instance; // rax
  TEAM_ID TeamID_Combination; // eax

  m_StoryWinCount = this->m_StoryWinCount;
  v2 = -1;
  if ( m_StoryWinCount )
  {
    v3 = m_StoryWinCount - 4;
    if ( !v3 )
      return 2i64;
    v4 = v3 - 4;
    if ( !v4 )
      return 3i64;
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        return 9i64;
    }
    else
    {
      Instance = GameDataInfo::getInstance();
      TeamID_Combination = GameDataInfo::GetTeamID_Combination(Instance, PLAYER_ID_1P);
      v2 = 4;
      switch ( TeamID_Combination )
      {
        case TEAM_ID_JAPAN:
          return 5i64;
        case TEAM_ID_ANOTHERWORLD:
          return 6i64;
        case TEAM_ID_CHINA:
          return 7i64;
        case TEAM_ID_OFFICIALINVITATION:
          return 8i64;
      }
    }
  }
  else
  {
    return 1;
  }
  return v2;
}

TEAM_ID __fastcall GameDataInfo::GetStoryEnemyFaceOff(
        GameDataInfo *this,
        TEAM_ID ngTeam1,
        TEAM_ID ngTeam2,
        TEAM_ID *ngTeam,
        int ngTeamLen,
        CHARACTER_NO chara1,
        CHARACTER_NO chara2,
        CHARACTER_NO chara3)
{
  GameDataInfo *v12; // rcx
  GameDataInfo *v13; // rcx
  unsigned int Rand32; // eax
  int magicCount[4]; // [rsp+40h] [rbp-88h] BYREF
  TEAM_ID magicBox[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v18; // [rsp+58h] [rbp-70h]
  __int64 v19; // [rsp+60h] [rbp-68h]
  __int64 v20; // [rsp+68h] [rbp-60h]
  __int64 v21; // [rsp+70h] [rbp-58h]
  __int64 v22; // [rsp+78h] [rbp-50h]
  __int64 v23; // [rsp+80h] [rbp-48h]
  __int64 v24; // [rsp+88h] [rbp-40h]
  __int64 v25; // [rsp+90h] [rbp-38h]

  *(_QWORD *)magicBox = 0i64;
  v18 = 0i64;
  v19 = 0i64;
  v20 = 0i64;
  v21 = 0i64;
  v22 = 0i64;
  v23 = 0i64;
  v24 = 0i64;
  v25 = 0i64;
  magicCount[0] = 0;
  GameDataInfo::GetStoryEnemyFaceOff_Sub(this, chara1, ngTeam1, ngTeam2, ngTeam, ngTeamLen, magicBox, magicCount);
  GameDataInfo::GetStoryEnemyFaceOff_Sub(v12, chara2, ngTeam1, ngTeam2, ngTeam, ngTeamLen, magicBox, magicCount);
  GameDataInfo::GetStoryEnemyFaceOff_Sub(v13, chara3, ngTeam1, ngTeam2, ngTeam, ngTeamLen, magicBox, magicCount);
  if ( !magicCount[0] )
    return GameDataInfo::GetStoryEnemyRandom(this, ngTeam1, ngTeam2, ngTeam, ngTeamLen);
  Rand32 = RandomMT::getRand32(&this->randMT);
  return magicBox[(int)(Rand32 >> 1) % magicCount[0]];
}

void __fastcall GameDataInfo::GetStoryEnemyFaceOff_Sub(
        GameDataInfo *this,
        CHARACTER_NO myChara,
        TEAM_ID ngTeam1,
        TEAM_ID ngTeam2,
        TEAM_ID *ngTeam,
        int ngTeamLen,
        TEAM_ID *magicBox,
        int *magicCount)
{
  __int64 v8; // r10
  int v9; // er11
  __int64 v10; // rcx
  CHARACTER_NO v11; // eax
  const CHARACTER_NO *v14; // r8
  TEAM_ID v15; // edx
  const CHARACTER_NO *v16; // rax
  CHARACTER_NO v17; // ecx
  TEAM_ID v18; // er9
  __int64 v19; // rax
  __int64 v20; // rcx
  CHARACTER_NO v21; // ecx
  TEAM_ID v22; // edx
  const CHARACTER_NO *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  CHARACTER_NO v26; // eax
  TEAM_ID v27; // ecx
  __int64 v28; // rcx

  v8 = 0i64;
  v9 = 0;
  v10 = 0i64;
  v11 = CHARACTER_NO_KYO;
  while ( v11 != myChara )
  {
    ++v10;
    ++v9;
    v11 = csFaceOffData[v10][0];
    if ( v11 == CHARACTER_NO_NONE )
      return;
  }
  v14 = &TeamCombinationData[0][1];
  v15 = TEAM_ID_JAPAN;
  v16 = &TeamCombinationData[0][1];
  v17 = csFaceOffData[v9][1];
  while ( 1 )
  {
    v18 = TEAM_ID_EDIT;
    if ( *((_DWORD *)v16 - 1) == v17 || *v16 == v17 || *((_DWORD *)v16 + 1) == v17 )
      break;
    ++v15;
    v16 += 3;
    if ( (__int64)v16 >= (__int64)&STR_RANKP + 4 )
    {
      v15 = TEAM_ID_EDIT;
      break;
    }
  }
  v19 = 0i64;
  if ( ngTeamLen <= 0 )
  {
LABEL_14:
    if ( ngTeam1 != v15 && ngTeam2 != v15 && (unsigned int)(v15 - 16) > 1 )
    {
      v20 = *magicCount;
      magicBox[v20] = v15;
      *magicCount = v20 + 1;
    }
  }
  else
  {
    while ( ngTeam[v19] != v15 )
    {
      if ( ++v19 >= ngTeamLen )
        goto LABEL_14;
    }
  }
  v21 = csFaceOffData[v9][2];
  v22 = TEAM_ID_JAPAN;
  v23 = &TeamCombinationData[0][1];
  while ( *((_DWORD *)v23 - 1) != v21 && *v23 != v21 && *((_DWORD *)v23 + 1) != v21 )
  {
    ++v22;
    v23 += 3;
    if ( (__int64)v23 >= (__int64)&STR_RANKP + 4 )
    {
      v22 = TEAM_ID_EDIT;
      break;
    }
  }
  v24 = 0i64;
  if ( ngTeamLen <= 0i64 )
  {
LABEL_27:
    if ( ngTeam1 != v22 && ngTeam2 != v22 && (unsigned int)(v22 - 16) > 1 )
    {
      v25 = *magicCount;
      magicBox[v25] = v22;
      *magicCount = v25 + 1;
    }
  }
  else
  {
    while ( ngTeam[v24] != v22 )
    {
      if ( ++v24 >= ngTeamLen )
        goto LABEL_27;
    }
  }
  v26 = csFaceOffData[v9][3];
  v27 = TEAM_ID_JAPAN;
  while ( *((_DWORD *)v14 - 1) != v26 && *v14 != v26 && *((_DWORD *)v14 + 1) != v26 )
  {
    ++v27;
    v14 += 3;
    if ( (__int64)v14 >= (__int64)&STR_RANKP + 4 )
      goto LABEL_38;
  }
  v18 = v27;
LABEL_38:
  if ( ngTeamLen <= 0i64 )
  {
LABEL_41:
    if ( ngTeam1 != v18 && ngTeam2 != v18 && (unsigned int)(v18 - 16) > 1 )
    {
      v28 = *magicCount;
      magicBox[v28] = v18;
      *magicCount = v28 + 1;
    }
  }
  else
  {
    while ( ngTeam[v8] != v18 )
    {
      if ( ++v8 >= ngTeamLen )
        goto LABEL_41;
    }
  }
}

__int64 __fastcall GameDataInfo::GetStoryEnemyRandom(
        GameDataInfo *this,
        TEAM_ID ngTeam1,
        TEAM_ID ngTeam2,
        TEAM_ID *ngTeam,
        int ngTeamLen)
{
  __int64 *v5; // r10
  int v6; // ebx
  int i; // edx
  __int64 v9; // rax
  __int64 v11[10]; // [rsp+20h] [rbp-68h] BYREF

  v5 = v11;
  v6 = 0;
  memset(v11, 0, 72);
  for ( i = 0; i < 18; ++i )
  {
    v9 = 0i64;
    if ( ngTeamLen <= 0i64 )
    {
LABEL_5:
      if ( ngTeam1 != i && ngTeam2 != i && (unsigned int)(i - 16) > 1 )
      {
        ++v6;
        *(_DWORD *)v5 = i;
        v5 = (__int64 *)((char *)v5 + 4);
      }
    }
    else
    {
      while ( ngTeam[v9] != i )
      {
        if ( ++v9 >= ngTeamLen )
          goto LABEL_5;
      }
    }
  }
  return *((unsigned int *)v11 + (int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % v6);
}

__int64 __fastcall GameDataInfo::GetTeamID_Combination(
        GameDataInfo *this,
        CHARACTER_NO chara1,
        CHARACTER_NO chara2,
        CHARACTER_NO chara3)
{
  unsigned int v4; // er10
  const CHARACTER_NO *i; // rax
  int v6; // ecx

  v4 = 0;
  for ( i = &TeamCombinationData[0][1]; ; i += 3 )
  {
    v6 = *((_DWORD *)i - 1);
    if ( (v6 == chara1 || *i == chara1 || *((_DWORD *)i + 1) == chara1)
      && (v6 == chara2 || *i == chara2 || *((_DWORD *)i + 1) == chara2)
      && (v6 == chara3 || *i == chara3 || *((_DWORD *)i + 1) == chara3) )
    {
      break;
    }
    if ( (int)++v4 >= 18 )
      return 254i64;
  }
  return v4;
}

__int64 __fastcall GameDataInfo::GetTeamID_Combination(GameDataInfo *this, PLAYER_ID player)
{
  __int64 v2; // r8
  CHARACTER_NO v3; // edx
  CHARACTER_NO v4; // er10
  CHARACTER_NO v5; // er9

  v2 = player;
  v3 = this->m_CharacterNo[player][0];
  v4 = this->m_CharacterNo[v2][1];
  v5 = this->m_CharacterNo[v2][2];
  if ( this->m_EditRandom[0][2 * v2 + v2] || *(_WORD *)&this->m_EditRandom[0][2 * v2 + 1 + v2] || this->m_TeamRandom[v2] )
    return 254i64;
  if ( v3 == CHARACTER_NO_VRS || v4 == CHARACTER_NO_VRS || v5 == CHARACTER_NO_VRS )
    return 17i64;
  if ( v3 == CHARACTER_NO_ANT || v4 == CHARACTER_NO_ANT || v5 == CHARACTER_NO_ANT )
    return 16i64;
  return GameDataInfo::GetTeamID_Combination(this, v3, v4, v5);
}

char __fastcall GameDataInfo::GetWinMesKey(
        GameDataInfo *this,
        CHARACTER_NO myNo,
        CHARACTER_NO rivalNo,
        char *key,
        int commonIndex)
{
  __int64 v6; // rbp
  __int64 v7; // rsi
  BattleSystem::BattleController *v9; // rax
  const char **v10; // rsi
  const char *v11; // r8
  char *v12; // rcx
  signed __int64 v13; // rdi
  char v14; // al
  extension::TranslateTable *v15; // rax
  char v16; // al
  BattleSystem::BattleController *v18; // [rsp+28h] [rbp-10h]

  v6 = rivalNo;
  v7 = myNo;
  v9 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v18 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v18);
    BattleSystem::BattleController::instance = v9;
  }
  if ( (unsigned int)v7 > 0x3C || (unsigned int)v6 > 0x3C )
  {
    strcpy(key, "UNKNOWN MESSAGE");
    return 0;
  }
  else
  {
    v10 = &win_mes_character_name[v7];
    v11 = *v10;
    if ( v9->resultMember.bSpecialDirection )
      sprintf(key, "WIN_MES_%svsSPECIAL", v11);
    else
      sprintf(key, "WIN_MES_%svs%s", v11, win_mes_character_name[v6]);
    v12 = key;
    v13 = (char *)this - key;
    do
    {
      v14 = *v12;
      v12[v13 + 3384] = *v12;
      ++v12;
    }
    while ( v14 );
    v15 = extension::TranslateTable::Instance();
    if ( extension::TranslateTable::searchText(v15, key, LANGUAGE_MODE_ja_JP) == key )
    {
      sprintf(key, "WIN_MES_%svsCOMMON_%02d", *v10, (unsigned int)commonIndex);
      do
      {
        v16 = *key;
        key[v13 + 3384] = *key;
        ++key;
      }
      while ( v16 );
    }
    return 1;
  }
}

__int64 __fastcall GameDataInfo::GetWinVoiceName(
        GameDataInfo *this,
        CHARACTER_NO myNo,
        CHARACTER_NO rivalNo,
        char *key,
        int commonIndex)
{
  __int64 v6; // r12
  BattleSystem::BattleController *v9; // rbp
  BattleSystem::BattleController *v10; // rax
  int i; // esi
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v13; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v14; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v15; // rcx
  signed __int64 v16; // r14
  char v17; // al
  signed __int64 v18; // r14
  char v19; // al
  unsigned __int8 v20; // bl
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v22; // [rsp+20h] [rbp-48h]
  extension::SoundHashKey result; // [rsp+28h] [rbp-40h] BYREF
  extension::SoundHashKey v24; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+38h] [rbp-30h]

  v25 = -2i64;
  v6 = rivalNo;
  v9 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v24.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController((BattleSystem::BattleController *)v24.m_sharedBuffer.m_ptr);
    v9 = v10;
    BattleSystem::BattleController::instance = v10;
  }
  v22 = 0i64;
  if ( (unsigned int)myNo <= CHARACTER_NO_NJD && (unsigned int)v6 <= 0x3C )
  {
    for ( i = 1; i <= 50; ++i )
    {
      if ( v9->resultMember.bSpecialDirection )
        sprintf(key, aA_105, (unsigned int)i);
      else
        sprintf(key, aA_116, (unsigned int)i, win_vo_character_name[v6]);
      m_ptr = extension::SoundHashKey::MakeIfExist(&result, key)->m_sharedBuffer.m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
      v22 = m_ptr;
      v13 = result.m_sharedBuffer.m_ptr;
      if ( result.m_sharedBuffer.m_ptr
        && _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&result.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v13->~RefCountableWeakSupportBase)(
          v13,
          1i64);
      }
      if ( m_ptr )
      {
        v18 = (char *)this - key;
        do
        {
          v19 = *key;
          key[v18 + 3640] = *key;
          ++key;
        }
        while ( v19 );
        goto LABEL_27;
      }
    }
    sprintf(key, aA_88, (unsigned int)(commonIndex + 20));
    v14 = extension::SoundHashKey::MakeIfExist(&v24, key)->m_sharedBuffer.m_ptr;
    if ( v14 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v14->m_refCount.m_ptr->m_sharedCount, 1ui64);
    v22 = v14;
    v15 = v24.m_sharedBuffer.m_ptr;
    if ( v24.m_sharedBuffer.m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v24.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v15->~RefCountableWeakSupportBase)(
        v15,
        1i64);
    }
    if ( v14 )
    {
      v16 = (char *)this - key;
      do
      {
        v17 = *key;
        key[v16 + 3640] = *key;
        ++key;
      }
      while ( v17 );
LABEL_27:
      v20 = 1;
      goto LABEL_29;
    }
  }
  v20 = 0;
LABEL_29:
  if ( v22
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v22->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v22->~RefCountableWeakSupportBase)(
      v22,
      1i64);
  }
  return v20;
}

void __fastcall GameDataInfo::Init(GameDataInfo *this)
{
  GameDataInfo *v2; // rcx
  __int64 v3; // rcx
  _DWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx

  this->m_StageID = STAGE_ID_NONE;
  this->m_StageRandom = 0;
  GameDataInfo::InitCharacter(this, PLAYER_ID_1P);
  GameDataInfo::InitCharacter(v2, PLAYER_ID_2P);
  v4 = (_DWORD *)(v3 + 4104);
  v5 = 6i64;
  do
  {
    *v4++ = Xtime_get_ticks();
    --v5;
  }
  while ( v5 );
  v6 = *(_QWORD *)&AppMain::pApp;
  this->m_ReplayFlag = 0;
  if ( v6 )
  {
    this->m_AiLevel = *(_DWORD *)(v6 + 2197392);
    this->m_WinRoundCount = *(_DWORD *)(v6 + 2197396);
    this->m_TimeSetting = *(_DWORD *)(v6 + 2197400);
  }
}

void __fastcall GameDataInfo::InitCharacter(GameDataInfo *this, PLAYER_ID playerID)
{
  __int64 v2; // r8
  char *v3; // rdx
  char *v4; // rax

  v2 = playerID;
  this->m_CharacterNo[playerID][0] = CHARACTER_NO_NONE;
  this->m_EditRandom[0][2 * playerID + playerID] = 0;
  v3 = (char *)this + 12 * playerID;
  *((_DWORD *)v3 + 652) = -1;
  v4 = (char *)this + 2 * v2;
  v4[v2 + 2629] = 0;
  *((_DWORD *)v3 + 653) = -1;
  v4[v2 + 2630] = 0;
  this->m_TeamRandom[v2] = 0;
  this->m_CharacterColor[v2][1] = CHARACTER_COLOR_1P;
  this->m_CharacterColorRand[v2][0] = CHARACTER_COLOR_1P;
  this->m_CharacterCostume[v2][0] = 0;
  *((_DWORD *)v3 + 659) = 1;
  *((_DWORD *)v3 + 661) = 1;
  *((_DWORD *)v3 + 679) = 1;
  *((_DWORD *)v3 + 680) = 1;
  *(_QWORD *)(v3 + 2764) = 0i64;
  this->m_Order[v2][0] = 0;
  *((_DWORD *)v3 + 685) = 1;
  *((_DWORD *)v3 + 686) = 2;
  this->m_HandicapSetting[v2] = HANDICAP_TYPE_3;
}

bool __fastcall GameDataInfo::IsSameColorSelected(
        GameDataInfo *this,
        CHARACTER_NO chara,
        CHARACTER_COLOR color,
        int costume)
{
  int v4; // ebx
  CHARACTER_NO (*m_CharacterNo)[3]; // rsi
  int v6; // edi
  __int64 v10; // r11
  GAME_RULE v11; // ecx
  __int64 v12; // r8
  __int64 v13; // rax
  CHARACTER_NO (*v14)[3]; // rdx

  v4 = 0;
  m_CharacterNo = this->m_CharacterNo;
  v6 = 0;
  v10 = 690i64;
  do
  {
    if ( v6
      && this->m_GameMode[this->m_GameModeIndex] == GAME_MODE_STORY
      && (unsigned int)(*(_DWORD *)m_CharacterNo - 48) <= 1
      || (v11 = this->m_GameRule[this->m_GameRuleIndex]) == GAME_RULE_SINGLE
      || (v12 = 3i64, v11 == GAME_RULE_TRAINING) )
    {
      v12 = 1i64;
    }
    v13 = 0i64;
    v14 = m_CharacterNo;
    do
    {
      if ( *(_DWORD *)v14 == chara && this->randMT.mt[v10 - 31 + v13] == color && this->randMT.mt[v10 + v13] == costume )
        ++v4;
      ++v13;
      v14 = (CHARACTER_NO (*)[3])((char *)v14 + 4);
    }
    while ( v13 < v12 );
    ++v6;
    ++m_CharacterNo;
    v10 += 3i64;
  }
  while ( v6 < 2 );
  return v4 >= 2;
}

extension::SoundHashKey *__fastcall extension::SoundHashKey::MakeIfExist(
        extension::SoundHashKey *result,
        const char *name)
{
  extension::exsound_detail::SoundNameRegistry *v4; // rax
  extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *SharedIfExist; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v7; // rcx
  extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> resulta; // [rsp+40h] [rbp+8h] BYREF

  resulta.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)result;
  v4 = extension::exsound_detail::SoundNameRegistry::Instance();
  SharedIfExist = extension::exsound_detail::SoundNameRegistry::makeSharedIfExist(v4, &resulta, name);
  m_ptr = SharedIfExist->m_ptr;
  result->m_sharedBuffer.m_ptr = SharedIfExist->m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
  v7 = resulta.m_ptr;
  if ( resulta.m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&resulta.m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v7->~RefCountableWeakSupportBase)(
      v7,
      1i64);
  }
  return result;
}

void __fastcall GameDataInfo::MakeStoryEnemyTable(GameDataInfo *this, PLAYER_ID playerID)
{
  CHARACTER_NO chara1; // edi
  const CHARACTER_NO *v3; // rax
  CHARACTER_NO chara2; // esi
  CHARACTER_NO chara3; // ebx
  int i; // edx
  int v8; // ecx
  TEAM_ID StoryEnemyFaceOff; // eax
  bool v10; // cc
  TEAM_ID StoryEnemyRandom; // eax
  TEAM_ID v12; // eax
  TEAM_ID v13; // eax
  TEAM_ID v14; // eax
  TEAM_ID v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // xmm0_8
  int v19; // ebx
  int *v20; // r10
  int j; // edx
  __int64 v22; // r8
  _OWORD *v23; // r9
  __int64 v24; // rcx
  _DWORD *v25; // rax
  int v26; // ebx
  int *v27; // r10
  int k; // edx
  __int64 v29; // r8
  _OWORD *v30; // r9
  __int64 v31; // rcx
  _DWORD *v32; // rax
  int v33; // ebx
  int *v34; // r10
  int m; // edx
  __int64 v36; // r8
  _OWORD *v37; // r9
  __int64 v38; // rcx
  _DWORD *v39; // rax
  __int64 v40; // xmm0_8
  int v41; // ebx
  int *v42; // r10
  int n; // edx
  __int64 v44; // r8
  _OWORD *v45; // r9
  __int64 v46; // rcx
  _DWORD *v47; // rax
  int v48; // ebx
  int *v49; // r10
  int ii; // edx
  __int64 v51; // r8
  _OWORD *v52; // r9
  __int64 v53; // rcx
  _DWORD *v54; // rax
  int v55; // ebx
  int *v56; // r10
  int jj; // edx
  __int64 v58; // r8
  _OWORD *v59; // r9
  __int64 v60; // rcx
  _DWORD *v61; // rax
  __int128 v62; // xmm1
  __int128 v63; // xmm1
  __int64 v64; // xmm0_8
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int64 v76; // rax
  TEAM_ID ngTeam[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v78; // [rsp+50h] [rbp-B0h]
  __int128 v79; // [rsp+60h] [rbp-A0h]
  __int128 v80; // [rsp+70h] [rbp-90h]
  __int64 v81; // [rsp+80h] [rbp-80h]
  _OWORD v82[14]; // [rsp+90h] [rbp-70h] BYREF
  int v83[64]; // [rsp+170h] [rbp+70h] BYREF

  chara1 = this->m_CharacterNo[0][0];
  v3 = &TeamCombinationData[0][1];
  chara2 = this->m_CharacterNo[0][1];
  chara3 = this->m_CharacterNo[0][2];
  for ( i = 0; i < 18; ++i )
  {
    v8 = *((_DWORD *)v3 - 1);
    if ( (v8 == chara1 || *v3 == chara1 || *((_DWORD *)v3 + 1) == chara1)
      && (v8 == chara2 || *v3 == chara2 || *((_DWORD *)v3 + 1) == chara2)
      && (v8 == chara3 || *v3 == chara3 || *((_DWORD *)v3 + 1) == chara3) )
    {
      break;
    }
    v3 += 3;
  }
  memset(ngTeam, 0, sizeof(ngTeam));
  v78 = 0ui64;
  v79 = 0ui64;
  v80 = 0ui64;
  v81 = 0i64;
  memset(v82, 0, 0xD8ui64);
  if ( this->m_StoryWinCount < 0 )
    StoryEnemyFaceOff = GameDataInfo::GetStoryEnemyFaceOff(
                          this,
                          TEAM_ID_JAPAN,
                          TEAM_ID_OFFICIALINVITATION,
                          ngTeam,
                          0,
                          chara1,
                          chara2,
                          chara3);
  else
    StoryEnemyFaceOff = this->m_StoryEnemyTable[0];
  v10 = this->m_StoryWinCount < 1;
  ngTeam[0] = StoryEnemyFaceOff;
  *(_QWORD *)&v82[0] = *(_QWORD *)&TeamCombinationData[StoryEnemyFaceOff][0];
  DWORD2(v82[0]) = TeamCombinationData[StoryEnemyFaceOff][2];
  if ( v10 )
    StoryEnemyRandom = (unsigned int)GameDataInfo::GetStoryEnemyRandom(
                                       this,
                                       TEAM_ID_JAPAN,
                                       TEAM_ID_OFFICIALINVITATION,
                                       ngTeam,
                                       1);
  else
    StoryEnemyRandom = this->m_StoryEnemyTable[1];
  v10 = this->m_StoryWinCount < 2;
  ngTeam[1] = StoryEnemyRandom;
  HIDWORD(v82[0]) = TeamCombinationData[StoryEnemyRandom][0];
  *(_QWORD *)&v82[1] = *(_QWORD *)&TeamCombinationData[StoryEnemyRandom][1];
  if ( v10 )
    v12 = GameDataInfo::GetStoryEnemyFaceOff(
            this,
            TEAM_ID_JAPAN,
            TEAM_ID_OFFICIALINVITATION,
            ngTeam,
            2,
            chara1,
            chara2,
            chara3);
  else
    v12 = this->m_StoryEnemyTable[2];
  v10 = this->m_StoryWinCount < 4;
  ngTeam[2] = v12;
  ngTeam[3] = TEAM_ID_EDIT;
  *(_QWORD *)((char *)&v82[2] + 4) = -1i64;
  HIDWORD(v82[2]) = -1;
  *((_QWORD *)&v82[1] + 1) = *(_QWORD *)&TeamCombinationData[v12][0];
  LODWORD(v82[2]) = TeamCombinationData[v12][2];
  if ( v10 )
    v13 = GameDataInfo::GetStoryEnemyFaceOff(this, (TEAM_ID)-1, (TEAM_ID)-1, ngTeam, 4, chara1, chara2, chara3);
  else
    v13 = this->m_StoryEnemyTable[4];
  v10 = this->m_StoryWinCount < 5;
  LODWORD(v78) = v13;
  *(_QWORD *)&v82[3] = *(_QWORD *)&TeamCombinationData[v13][0];
  DWORD2(v82[3]) = TeamCombinationData[v13][2];
  if ( v10 )
    v14 = (unsigned int)GameDataInfo::GetStoryEnemyRandom(this, (TEAM_ID)-1, (TEAM_ID)-1, ngTeam, 5);
  else
    v14 = this->m_StoryEnemyTable[5];
  v10 = this->m_StoryWinCount < 6;
  DWORD1(v78) = v14;
  HIDWORD(v82[3]) = TeamCombinationData[v14][0];
  *(_QWORD *)&v82[4] = *(_QWORD *)&TeamCombinationData[v14][1];
  if ( v10 )
    v15 = GameDataInfo::GetStoryEnemyFaceOff(this, (TEAM_ID)-1, (TEAM_ID)-1, ngTeam, 6, chara1, chara2, chara3);
  else
    v15 = this->m_StoryEnemyTable[6];
  v10 = this->m_StoryWinCount < 3;
  v16 = 0x1148000000000000i64;
  DWORD2(v78) = v15;
  v17 = 0xC83000000000000i64;
  *((_QWORD *)&v82[4] + 1) = *(_QWORD *)&TeamCombinationData[v15][0];
  LODWORD(v82[5]) = TeamCombinationData[v15][2];
  if ( v10 )
  {
    ngTeam[3] = TEAM_ID_EDIT;
    memset(v83, 0, 0xF4ui64);
    v19 = 0;
    v20 = v83;
    for ( j = 0; j < 61; ++j )
    {
      v22 = 0i64;
      v23 = v82;
LABEL_34:
      v24 = 0i64;
      v25 = v23;
      while ( *v25 != j )
      {
        ++v24;
        ++v25;
        if ( v24 >= 3 )
        {
          ++v22;
          v23 = (_OWORD *)((char *)v23 + 12);
          if ( v22 < 7 )
            goto LABEL_34;
          if ( (unsigned int)j <= 0x3C && _bittest64(&v16, j) )
          {
            ++v19;
            *v20++ = j;
          }
          break;
        }
      }
    }
    DWORD1(v82[2]) = v83[(int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % v19];
    memset(v83, 0, 0xF4ui64);
    v26 = 0;
    v27 = v83;
    for ( k = 0; k < 61; ++k )
    {
      v29 = 0i64;
      v30 = v82;
LABEL_44:
      v31 = 0i64;
      v32 = v30;
      while ( *v32 != k )
      {
        ++v31;
        ++v32;
        if ( v31 >= 3 )
        {
          ++v29;
          v30 = (_OWORD *)((char *)v30 + 12);
          if ( v29 < 7 )
            goto LABEL_44;
          if ( (unsigned int)k > 0x3B || !_bittest64(&v17, k) )
          {
            ++v26;
            *v27++ = k;
          }
          break;
        }
      }
    }
    DWORD2(v82[2]) = v83[(int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % v26];
    memset(v83, 0, 0xF4ui64);
    v33 = 0;
    v34 = v83;
    for ( m = 0; m < 61; ++m )
    {
      v36 = 0i64;
      v37 = v82;
LABEL_54:
      v38 = 0i64;
      v39 = v37;
      while ( *v39 != m )
      {
        ++v38;
        ++v39;
        if ( v38 >= 3 )
        {
          ++v36;
          v37 = (_OWORD *)((char *)v37 + 12);
          if ( v36 < 7 )
            goto LABEL_54;
          if ( (unsigned int)m > 0x3B || !_bittest64(&v17, m) )
          {
            ++v33;
            *v34++ = m;
          }
          break;
        }
      }
    }
    HIDWORD(v82[2]) = v83[(int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % v33];
  }
  else
  {
    v18 = *(_QWORD *)&this->m_StoryEnemyTableSP[3][0];
    ngTeam[3] = this->m_StoryEnemyTable[3];
    HIDWORD(v82[2]) = this->m_StoryEnemyTableSP[3][2];
    *(_QWORD *)((char *)&v82[2] + 4) = v18;
  }
  if ( this->m_StoryWinCount < 7 )
  {
    HIDWORD(v78) = 254;
    memset(v83, 0, 0xF4ui64);
    v41 = 0;
    v42 = v83;
    for ( n = 0; n < 61; ++n )
    {
      v44 = 0i64;
      v45 = v82;
LABEL_67:
      v46 = 0i64;
      v47 = v45;
      while ( *v47 != n )
      {
        ++v46;
        ++v47;
        if ( v46 >= 3 )
        {
          ++v44;
          v45 = (_OWORD *)((char *)v45 + 12);
          if ( v44 < 8 )
            goto LABEL_67;
          if ( (unsigned int)n <= 0x3C && _bittest64(&v16, n) )
          {
            ++v41;
            *v42++ = n;
          }
          break;
        }
      }
    }
    DWORD1(v82[5]) = v83[(int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % v41];
    memset(v83, 0, 0xF4ui64);
    v48 = 0;
    v49 = v83;
    for ( ii = 0; ii < 61; ++ii )
    {
      v51 = 0i64;
      v52 = v82;
LABEL_77:
      v53 = 0i64;
      v54 = v52;
      while ( *v54 != ii )
      {
        ++v53;
        ++v54;
        if ( v53 >= 3 )
        {
          ++v51;
          v52 = (_OWORD *)((char *)v52 + 12);
          if ( v51 < 8 )
            goto LABEL_77;
          if ( (unsigned int)ii > 0x3B || !_bittest64(&v17, ii) )
          {
            ++v48;
            *v49++ = ii;
          }
          break;
        }
      }
    }
    DWORD2(v82[5]) = v83[(int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % v48];
    memset(v83, 0, 0xF4ui64);
    v55 = 0;
    v56 = v83;
    for ( jj = 0; jj < 61; ++jj )
    {
      v58 = 0i64;
      v59 = v82;
LABEL_87:
      v60 = 0i64;
      v61 = v59;
      while ( *v61 != jj )
      {
        ++v60;
        ++v61;
        if ( v60 >= 3 )
        {
          ++v58;
          v59 = (_OWORD *)((char *)v59 + 12);
          if ( v58 < 8 )
            goto LABEL_87;
          if ( (unsigned int)jj > 0x3B || !_bittest64(&v17, jj) )
          {
            ++v55;
            *v56++ = jj;
          }
          break;
        }
      }
    }
    HIDWORD(v82[5]) = v83[(int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % v55];
  }
  else
  {
    v40 = *(_QWORD *)&this->m_StoryEnemyTableSP[7][0];
    HIDWORD(v78) = this->m_StoryEnemyTable[7];
    HIDWORD(v82[5]) = this->m_StoryEnemyTableSP[7][2];
    *(_QWORD *)((char *)&v82[5] + 4) = v40;
  }
  v62 = v78;
  LODWORD(v82[6]) = 48;
  *(_QWORD *)((char *)&v82[6] + 4) = -1i64;
  HIDWORD(v82[6]) = 49;
  memset(&v82[7], 255, 20);
  *(_OWORD *)this->m_StoryEnemyTable = *(_OWORD *)ngTeam;
  LODWORD(v79) = 16;
  *(_OWORD *)&this->m_StoryEnemyTable[4] = v62;
  *(_QWORD *)((char *)&v79 + 4) = 0xFF00000011i64;
  v63 = v80;
  *(_OWORD *)&this->m_StoryEnemyTable[8] = v79;
  v64 = v81;
  *(_OWORD *)&this->m_StoryEnemyTable[12] = v63;
  v65 = v82[1];
  *(_QWORD *)&this->m_StoryEnemyTable[16] = v64;
  *(_OWORD *)&this->m_StoryEnemyTableSP[0][0] = v82[0];
  v66 = v82[2];
  *(_OWORD *)&this->m_StoryEnemyTableSP[1][1] = v65;
  v67 = v82[3];
  *(_OWORD *)&this->m_StoryEnemyTableSP[2][2] = v66;
  v68 = v82[4];
  *(_OWORD *)&this->m_StoryEnemyTableSP[4][0] = v67;
  v69 = v82[5];
  *(_OWORD *)&this->m_StoryEnemyTableSP[5][1] = v68;
  v70 = v82[6];
  *(_OWORD *)&this->m_StoryEnemyTableSP[6][2] = v69;
  v71 = v82[8];
  *(_OWORD *)&this->m_StoryEnemyTableSP[8][0] = v70;
  *(_OWORD *)&this->m_StoryEnemyTableSP[9][1] = v82[7];
  v72 = v82[9];
  *(_OWORD *)&this->m_StoryEnemyTableSP[10][2] = v71;
  v73 = v82[10];
  *(_OWORD *)&this->m_StoryEnemyTableSP[12][0] = v72;
  v74 = v82[11];
  *(_OWORD *)&this->m_StoryEnemyTableSP[13][1] = v73;
  v75 = v82[12];
  v76 = *(_QWORD *)&v82[13];
  *(_OWORD *)&this->m_StoryEnemyTableSP[14][2] = v74;
  *(_OWORD *)&this->m_StoryEnemyTableSP[16][0] = v75;
  *(_QWORD *)&this->m_StoryEnemyTableSP[17][1] = v76;
}

void __fastcall GameDataInfo::MakeSurvivalEnemyTable(GameDataInfo *this)
{
  int v2; // ebx
  int *v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbp
  __int64 v7; // rdi
  int v8; // esi
  __int64 v9; // rax
  int v10; // edx
  int v11; // ebx
  __int64 v12; // rax
  int Src[64]; // [rsp+20h] [rbp-128h] BYREF

  memset(Src, 0, 0xF8ui64);
  v2 = 0;
  v3 = Src;
  v4 = 0i64;
  v5 = 0xC83000000000000i64;
  do
  {
    if ( (unsigned int)v4 > 0x3B || !_bittest64(&v5, v4) )
    {
      ++v2;
      *v3++ = v4;
    }
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (int)v4 < 61 );
  v6 = v2;
  v7 = v2;
  if ( v2 > 1i64 )
  {
    v8 = v2 + 1;
    do
    {
      --v8;
      --v7;
      v9 = (int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % v8;
      v10 = Src[v9];
      Src[v9] = Src[v7];
      Src[v7] = v10;
    }
    while ( v7 > 1 );
  }
  v11 = v2 + 1;
  Src[v6] = 48;
  v12 = v11++;
  Src[v12] = 49;
  Src[v11] = -1;
  memmove(this->m_SurvivalEnemyTable, Src, 4i64 * (v11 + 1));
  this->m_SurvivalEnemyTablePos = 0;
}

char __fastcall GameDataInfo::NextStoryEnemy(GameDataInfo *this)
{
  int m_StoryWinCount; // edx
  int v2; // eax
  int v4; // eax

  m_StoryWinCount = this->m_StoryWinCount;
  v2 = m_StoryWinCount;
  if ( m_StoryWinCount <= 0 )
    v2 = 0;
  if ( this->m_StoryEnemyTable[v2] == TEAM_ID_END_CODE )
    return 1;
  v4 = m_StoryWinCount + 1;
  this->m_StoryWinCount = m_StoryWinCount + 1;
  if ( m_StoryWinCount + 1 <= 0 )
    v4 = 0;
  if ( this->m_StoryEnemyTable[v4] == TEAM_ID_END_CODE )
    return 1;
  GameDataInfo::CommitStoryEnemy(this);
  return 0;
}

char __fastcall GameDataInfo::NextSurvivalEnemy(GameDataInfo *this, bool remake)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int v5; // edx
  int v6; // eax
  __int64 v7; // r8
  AgAchievementsManager *v8; // rcx
  unsigned int v9; // edx
  AgAchievementsManager *v10; // rcx
  CHARACTER_NO v11; // er8
  bool v13; // [rsp+28h] [rbp-10h]

  v3 = this->m_SurvivalWinCount ^ 0x7B48A35E;
  ++this->m_SurvivalEnemyTablePos;
  v4 = v3 ^ ((unsigned __int16)v3 ^ (unsigned __int16)(v3 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v3 ^ (unsigned __int16)(v3 >> 14)) & 0xCCCC) << 14);
  v5 = ((v4 ^ (v4 >> 7)) & 0x550055 ^ v4 ^ (((v4 ^ (v4 >> 7)) & 0x550055) << 7)) + 1;
  v6 = (v5 ^ (v5 >> 7)) & 0x550055;
  this->m_SurvivalWinCount = v5 ^ v6 ^ (v6 << 7) ^ ((unsigned __int16)(v5 ^ v6 ^ ((_WORD)v6 << 7)) ^ (unsigned __int16)((v5 ^ v6 ^ (unsigned int)(v6 << 7)) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(v5 ^ v6 ^ ((_WORD)v6 << 7)) ^ (unsigned __int16)((v5 ^ v6 ^ (unsigned int)(v6 << 7)) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
  if ( this->m_GameMode[this->m_GameModeIndex] == GAME_MODE_MISSION_SURVIVAL )
  {
    v7 = *(_QWORD *)&AppMain::pApp;
    if ( *(char *)(*(_QWORD *)&AppMain::pApp + 2205144i64) <= 1 )
    {
      v8 = (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance;
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205144i64) = 1;
      AgAchievementsManager::unlock(v8, (AgAchievementPlatformData *)&stru_140A9BEB0);
      v7 = *(_QWORD *)&AppMain::pApp;
    }
    v9 = this->m_SurvivalWinCount ^ 0x7B48A35E ^ (LOWORD(this->m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)((this->m_SurvivalWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)((this->m_SurvivalWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    if ( (int)((v9 ^ (v9 >> 7)) & 0x550055 ^ v9 ^ (((v9 ^ (v9 >> 7)) & 0x550055) << 7)) >= 30
      && *(char *)(v7 + 2205145) <= 1 )
    {
      v10 = (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance;
      *(_BYTE *)(v7 + 2205145) = 1;
      AgAchievementsManager::unlock(v10, (AgAchievementPlatformData *)&stru_140A9BEC0);
    }
  }
  v11 = this->m_SurvivalEnemyTable[this->m_SurvivalEnemyTablePos];
  if ( v11 == CHARACTER_NO_NONE )
  {
    GameDataInfo::MakeSurvivalEnemyTable(this);
    GameDataInfo::SetSingleMember(
      this,
      PLAYER_ID_2P,
      this->m_SurvivalEnemyTable[this->m_SurvivalEnemyTablePos],
      CHARACTER_COLOR_1P,
      0,
      v13);
    return 1;
  }
  else
  {
    GameDataInfo::SetSingleMember(this, PLAYER_ID_2P, v11, CHARACTER_COLOR_1P, 0, v13);
    return 0;
  }
}

void __fastcall GameDataInfo::SetCharacterColor(
        GameDataInfo *this,
        PLAYER_ID playerID,
        int index,
        CHARACTER_COLOR color)
{
  __int64 v5; // rdi
  __int64 v6; // rbx

  v5 = playerID;
  v6 = index;
  this->m_ColorSelectedTime[0][2 * playerID + index + playerID] = (unsigned int)(int)(double)(int)time64(0i64);
  this->m_CharacterColor[0][2 * v5 + v5 + v6] = color;
}

void __fastcall GameDataInfo::SetDefaultSettingSaveData(GameDataInfo *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)&AppMain::pApp;
  if ( *(_QWORD *)&AppMain::pApp )
  {
    this->m_AiLevel = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197392i64);
    this->m_WinRoundCount = *(_DWORD *)(v1 + 2197396);
    this->m_TimeSetting = *(_DWORD *)(v1 + 2197400);
  }
}

void __fastcall GameDataInfo::SetSingleMember(
        GameDataInfo *this,
        PLAYER_ID playerID,
        CHARACTER_NO chara1,
        CHARACTER_COLOR color1,
        int costume1)
{
  __int64 v5; // rbx
  char *v8; // rax

  v5 = playerID;
  this->m_CharacterNo[playerID][0] = chara1;
  v8 = (char *)this + 2 * playerID;
  v8[playerID + 2628] = 0;
  v8[playerID + 2628] = 0;
  this->m_TeamRandom[playerID] = 0;
  this->m_ColorSelectedTime[playerID][0] = (unsigned int)(int)(double)(int)time64(0i64);
  this->m_CharacterColor[v5][0] = color1;
  this->m_CharacterCostume[v5][0] = costume1;
}

void __fastcall GameDataInfo::SetTeamMember(
        GameDataInfo *this,
        PLAYER_ID playerID,
        CHARACTER_NO chara1,
        CHARACTER_COLOR color1,
        int costume1,
        CHARACTER_NO chara2,
        CHARACTER_COLOR color2,
        int costume2,
        CHARACTER_NO chara3,
        CHARACTER_COLOR color3,
        int costume3)
{
  __int64 v11; // rsi
  char *v14; // rdx
  __int64 v15; // rdi

  v11 = playerID;
  v14 = (char *)this + 2 * playerID;
  this->m_CharacterNo[v11][0] = chara1;
  v15 = v11;
  this->m_EditRandom[0][2 * v11 + v11] = 0;
  this->m_CharacterNo[v15][1] = chara2;
  v14[v11 + 2629] = 0;
  this->m_CharacterNo[v15][2] = chara3;
  v14[v11 + 2630] = 0;
  this->m_TeamRandom[v11] = 0;
  this->m_ColorSelectedTime[v11][0] = (unsigned int)(int)(double)(int)time64(0i64);
  this->m_CharacterColor[v11][0] = color1;
  this->m_ColorSelectedTime[v11][1] = (unsigned int)(int)(double)(int)time64(0i64);
  this->m_CharacterColor[v11][1] = color2;
  this->m_ColorSelectedTime[v11][2] = (unsigned int)(int)(double)(int)time64(0i64);
  this->m_CharacterColor[v15][2] = color3;
  this->m_CharacterCostume[v11][0] = costume1;
  this->m_CharacterCostume[v15][1] = costume2;
  this->m_CharacterCostume[v15][2] = costume3;
}

void __fastcall GameDataInfo::SetTrainingSetting(GameDataInfo *this, TrainingSetting *_trainingSetting)
{
  if ( this->m_TrainingSetting.m_iPowerGauge[0] != _trainingSetting->m_iPowerGauge[0]
    || this->m_TrainingSetting.m_iPowerGauge[1] != _trainingSetting->m_iPowerGauge[1]
    || this->m_TrainingSetting.m_iMAXModeGauge[0] != _trainingSetting->m_iMAXModeGauge[0]
    || this->m_TrainingSetting.m_iMAXModeGauge[1] != _trainingSetting->m_iMAXModeGauge[1]
    || this->m_TrainingSetting.m_iGuardGauge[0] != _trainingSetting->m_iGuardGauge[0]
    || this->m_TrainingSetting.m_iGuardGauge[1] != _trainingSetting->m_iGuardGauge[1]
    || this->m_TrainingSetting.m_iStun[0] != _trainingSetting->m_iStun[0]
    || this->m_TrainingSetting.m_iStun[1] != _trainingSetting->m_iStun[1] )
  {
    this->m_TrainingSettingUpdate = 1;
  }
  this->m_TrainingSetting = *_trainingSetting;
}

void __fastcall GameDataInfo::UpdateCharacterColorRand(GameDataInfo *this, PLAYER_ID myPlayerID, int myIndex)
{
  __int64 v4; // r11
  __int64 v5; // r14
  __int64 v6; // r10
  CHARACTER_NO (*m_CharacterNo)[3]; // r13
  CHARACTER_NO v8; // er15
  CHARACTER_COLOR v9; // ebp
  int v10; // er12
  int v11; // er9
  _DWORD *v12; // rdx
  GAME_RULE v13; // ecx
  __int64 v14; // rsi
  int v15; // edi
  __int64 i; // rax
  signed int v17; // edx
  bool v18; // cc
  _DWORD *v19; // [rsp+60h] [rbp+8h]
  int v20; // [rsp+70h] [rbp+18h]
  __int64 v21; // [rsp+78h] [rbp+20h]

  v20 = myIndex;
  v4 = myPlayerID;
  v5 = myIndex;
  v21 = myPlayerID;
  v6 = 659i64;
  m_CharacterNo = this->m_CharacterNo;
  v8 = this->m_CharacterNo[0][2 * myPlayerID + myIndex + myPlayerID];
  v9 = this->m_CharacterColor[0][2 * myPlayerID + myPlayerID + myIndex];
  v10 = this->m_CharacterCostume[0][2 * myPlayerID + myIndex + myPlayerID];
  v11 = 0;
  v12 = (_DWORD *)((char *)this->m_ColorSelectedTime + 16 * myPlayerID + 8 * myIndex + 8 * myPlayerID);
  v19 = v12;
  while ( 2 )
  {
    if ( v11
      && this->m_GameMode[this->m_GameModeIndex] == GAME_MODE_STORY
      && (unsigned int)(*(_DWORD *)m_CharacterNo - 48) <= 1
      || (v13 = this->m_GameRule[this->m_GameRuleIndex]) == GAME_RULE_SINGLE
      || (v14 = 3i64, v13 == GAME_RULE_TRAINING) )
    {
      v14 = 1i64;
    }
    v15 = 0;
    for ( i = 0i64; i < v14; ++i )
    {
      if ( (v11 != (_DWORD)v4 || i != v5)
        && this->randMT.mt[v6 - 8 + i] == v8
        && this->randMT.mt[v6 + i] == v9
        && this->randMT.mt[v6 + 31 + i] == v10 )
      {
        v17 = *v12 - this->randMT.mt[2 * v6 - 652 + 2 * i];
        if ( v17 > 0
          || !v17
          && (this->m_GameRule[this->m_GameRuleIndex] != GAME_RULE_PARTY ? (v18 = (int)v4 <= v11) : (myIndex = v11 + v15 + 2 * v11, v18 = (int)v4 + v20 + 2 * (int)v4 <= myIndex),
              !v18) )
        {
          this->m_CharacterColorRand[0][2 * v21 + v5 + v21] = GameDataInfo::GetNegativeColor(
                                                                this,
                                                                v8,
                                                                (CHARACTER_COLOR)myIndex,
                                                                v10);
          return;
        }
        v12 = v19;
      }
      ++v15;
    }
    ++v11;
    ++m_CharacterNo;
    v6 += 3i64;
    if ( v11 < 2 )
      continue;
    break;
  }
  this->m_CharacterColorRand[0][2 * v4 + v5 + v4] = v9;
}

void __fastcall GameDataInfo::UpdateCharacterColorRand(GameDataInfo *this)
{
  __int64 v1; // xmm1_8

  v1 = *(_QWORD *)&this->m_CharacterColor[1][1];
  *(_OWORD *)&this->m_CharacterColorRand[0][0] = *(_OWORD *)&this->m_CharacterColor[0][0];
  *(_QWORD *)&this->m_CharacterColorRand[1][1] = v1;
  GameDataInfo::UpdateCharacterColorRand(this, PLAYER_ID_1P, 0);
  GameDataInfo::UpdateCharacterColorRand(this, PLAYER_ID_1P, 1);
  GameDataInfo::UpdateCharacterColorRand(this, PLAYER_ID_1P, 2);
  GameDataInfo::UpdateCharacterColorRand(this, PLAYER_ID_2P, 0);
  GameDataInfo::UpdateCharacterColorRand(this, PLAYER_ID_2P, 1);
  GameDataInfo::UpdateCharacterColorRand(this, PLAYER_ID_2P, 2);
}

