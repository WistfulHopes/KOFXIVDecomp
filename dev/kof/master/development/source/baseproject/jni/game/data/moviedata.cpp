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
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedata.h"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/streambuf"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/sstream"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/istream"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ostream"
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
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cmediaplayer.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cfile.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"

MovieData::MovieData(); // 0x1400F8E30
std::_System_error::_System_error(const std::_System_error & __that); // 0x1400F8C10
std::bad_cast::bad_cast(const std::bad_cast & __that); // 0x1400FCF60
std::ios_base::failure::failure(const std::ios_base::failure & __that); // 0x1400F8B50
std::runtime_error::runtime_error(const std::runtime_error & __that); // 0x1400F8040
std::system_error::system_error(const std::system_error & __that); // 0x1400F8BB0
std::bad_cast::~bad_cast(); // 0x1400F7EA0
std::basic_istream<char,std::char_traits<char> >::sentry::~sentry(); // 0x1400FD4F0
void MovieData::Finalize(bool release); // 0x1400F8ED0
void MovieData::LoadCSV(MOVIE_ID id); // 0x1400F8FA0
class std::vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > :
	std::_Vector_alloc<std::_Vec_base_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > pointer;
	typedef const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const_pointer;
	typedef std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > reference;
	typedef const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::al(std::initializer_list<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, const std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > &);
	vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::al(std::vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > &, const std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > &);
	vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::al(std::vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > &);
	vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::al(const std::vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > &, const std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > &);
	vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::al(const std::vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > &);
	vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::al(unsigned long long, const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, const std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > &);
	vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::al(unsigned long long, const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::al(unsigned long long);
	vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::al(const std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > &);
	vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::al();
	void _Construct_n(unsigned long long, const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *);
	std::vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > & operator=(const std::vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > &);
	std::vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > & operator=(std::initializer_list<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >);
	std::vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > & operator=(std::vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > &);
	void _Assign_rv(std::vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > &);
	void _Assign_rv(std::vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > &, std::integral_constant<bool,1>);
	void push_back(const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	void push_back(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > >, unsigned long long, const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > >, const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > >, std::initializer_list<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > >, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	void assign(unsigned long long, const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	void assign(std::initializer_list<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >);
	~vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::a();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > get_allocator();
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & at(unsigned long long);
	const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & at(unsigned long long);
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & operator[](unsigned long long);
	const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & operator[](unsigned long long);
	const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > * data();
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > * data();
	const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & front();
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & front();
	const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & back();
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > >, unsigned long long, const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > * _Ufill(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *, unsigned long long, const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *);
};
extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager; // 0x140ACD500
void(*??s_cacheManager$initializer$@?$BasicFutureObject@VGFXIMovieData@extension@@X@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407407D0
const std::locale::facet * std::_Facetptr<std::ctype<char> >::_Psave; // 0x140ACBC20
const MovieDataInfo _movieData[448]; // 0x14089C290
std::piecewise_construct_t std::piecewise_construct; // 0x14089B477
void MovieData::LoadGFX(MOVIE_ID movieID); // 0x1400F9C70
void MovieData::UpdateGFX(); // 0x1400F9E30
void MovieData::UpdateTelop(); // 0x1400F9FB0
void MovieData::SetTelopMode(long mode); // 0x1400FA0F0
void MovieData::SetTelop(const char * telop, bool fadeIn); // 0x1400FA260
void MovieData::RemoveTelop(bool fadeout); // 0x1400FA400
void MovieData::LoadBank(MOVIE_ID id); // 0x1400FA570
bool MovieData::HasSoundBank(MOVIE_ID id); // 0x1400FA650
void _playAudioFunc(unsigned long long time_ms); // 0x1400FA6B0
void MovieData::SoundPlayImpl(unsigned long long time_ms); // 0x1400FA700
bool MovieData::Play(MOVIE_ID id); // 0x1400FA790
void MovieData::Update(); // 0x1400FA880
bool MovieData::IsPlayEnd(); // 0x1400FA990
void MovieData::Stop(bool soundStop); // 0x1400FAA50
void MovieData::Draw(OGLRender * render, long x, long y, long w, long h, bool infoDraw); // 0x1400FAAF0//decompilation failure at 140ACD500!
//decompilation failure at 1407407D0!
//decompilation failure at 140ACBC20!
//decompilation failure at 14089C290!
//decompilation failure at 14089B477!
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

void __fastcall std::_Destroy_range1<std::allocator<std::string>,std::string *>(
        std::string *_First,
        std::string *_Last,
        std::_Wrap_alloc<std::allocator<std::string > > *_Al,
        std::integral_constant<bool,0> __formal)
{
  unsigned __int64 *p_Myres; // rbx
  char *v6; // rcx
  char *v7; // rax
  unsigned __int64 v8; // rcx
  bool v9; // cf
  unsigned __int64 *v10; // rax

  if ( _First != _Last )
  {
    p_Myres = &_First->_Mypair._Myval2._Myres;
    do
    {
      if ( *p_Myres >= 0x10 )
      {
        v6 = (char *)*(p_Myres - 3);
        if ( *p_Myres + 1 >= 0x1000 )
        {
          if ( ((unsigned __int8)v6 & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v7 = (char *)*((_QWORD *)v6 - 1);
          if ( v7 >= v6 )
            invalid_parameter_noinfo_noreturn();
          v8 = v6 - v7;
          if ( v8 < 8 )
            invalid_parameter_noinfo_noreturn();
          if ( v8 > 0x27 )
            invalid_parameter_noinfo_noreturn();
          v6 = v7;
        }
        operator delete(v6);
      }
      *p_Myres = 15i64;
      v9 = *p_Myres < 0x10;
      *(p_Myres - 1) = 0i64;
      if ( v9 )
        v10 = p_Myres - 3;
      else
        v10 = (unsigned __int64 *)*(p_Myres - 3);
      p_Myres += 4;
      *(_BYTE *)v10 = 0;
    }
    while ( p_Myres - 3 != (unsigned __int64 *)_Last );
  }
}

void __fastcall std::_Destroy_range1<std::allocator<std::vector<std::string>>,std::vector<std::string> *>(
        std::vector<std::string> *_First,
        std::vector<std::string> *_Last,
        std::_Wrap_alloc<std::allocator<std::vector<std::string> > > *_Al,
        std::integral_constant<bool,0> __formal)
{
  std::vector<std::string> *v5; // rbx
  std::string *Myfirst; // rcx
  unsigned __int64 v7; // rax
  std::string *Myres; // rax
  unsigned __int64 v9; // rcx

  if ( _First != _Last )
  {
    v5 = _First;
    do
    {
      if ( v5->_Mypair._Myval2._Myfirst )
      {
        std::_Destroy_range1<std::allocator<std::string>,std::string *>(
          v5->_Mypair._Myval2._Myfirst,
          v5->_Mypair._Myval2._Mylast,
          (std::_Wrap_alloc<std::allocator<std::string > > *)_Al,
          __formal);
        Myfirst = v5->_Mypair._Myval2._Myfirst;
        v7 = v5->_Mypair._Myval2._Myend - v5->_Mypair._Myval2._Myfirst;
        if ( v7 > 0x7FFFFFFFFFFFFFFi64 )
          invalid_parameter_noinfo_noreturn();
        if ( 32 * v7 >= 0x1000 )
        {
          if ( ((unsigned __int8)Myfirst & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          Myres = (std::string *)Myfirst[-1]._Mypair._Myval2._Myres;
          if ( Myres >= Myfirst )
            invalid_parameter_noinfo_noreturn();
          v9 = (char *)Myfirst - (char *)Myres;
          if ( v9 < 8 )
            invalid_parameter_noinfo_noreturn();
          if ( v9 > 0x27 )
            invalid_parameter_noinfo_noreturn();
          Myfirst = Myres;
        }
        operator delete(Myfirst);
        v5->_Mypair._Myval2._Myfirst = 0i64;
        v5->_Mypair._Myval2._Mylast = 0i64;
        v5->_Mypair._Myval2._Myend = 0i64;
      }
      ++v5;
    }
    while ( v5 != _Last );
  }
}

std::_Immortalizer<std::_Iostream_error_category> *__fastcall std::_Immortalize<std::_Iostream_error_category>()
{
  if ( __TSS0__1_____Immortalize_V_Iostream_error_category_std___std__YAAEAV_Iostream_error_category_1_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1_____Immortalize_V_Iostream_error_category_std___std__YAAEAV_Iostream_error_category_1_XZ_4HA);
    if ( __TSS0__1_____Immortalize_V_Iostream_error_category_std___std__YAAEAV_Iostream_error_category_1_XZ_4HA == -1 )
    {
      *(_QWORD *)&`std::_Immortalize<std::_Iostream_error_category>'::`2'::_Static._Storage._Pad[8] = 5i64;
      *(_QWORD *)&`std::_Immortalize<std::_Iostream_error_category>'::`2'::_Static._Storage._Val = &std::_Iostream_error_category::`vftable';
      atexit(`std::_Immortalize<std::_Iostream_error_category>'::`2'::`dynamic atexit destructor for '_Static'');
      Init_thread_footer(&__TSS0__1_____Immortalize_V_Iostream_error_category_std___std__YAAEAV_Iostream_error_category_1_XZ_4HA);
    }
  }
  return &`std::_Immortalize<std::_Iostream_error_category>'::`2'::_Static;
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

std::string *__fastcall std::_Uninitialized_move_al_unchecked1<std::string *,std::string *,std::allocator<std::string>>(
        std::string *_First,
        std::string *_Last,
        std::string *_Dest,
        std::_Wrap_alloc<std::allocator<std::string > > *_Al)
{
  std::string *i; // rdi

  for ( i = _First; i != _Last; ++i )
  {
    if ( _Dest )
    {
      _Dest->_Mypair._Myval2._Myres = 15i64;
      _Dest->_Mypair._Myval2._Mysize = 0i64;
      _Dest->_Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::_Assign_rv(_Dest, i);
    }
    ++_Dest;
  }
  return _Dest;
}

std::vector<std::string> *__fastcall std::_Uninitialized_move_al_unchecked1<std::vector<std::string> *,std::vector<std::string> *,std::allocator<std::vector<std::string>>>(
        std::vector<std::string> *_First,
        std::vector<std::string> *_Last,
        std::vector<std::string> *_Dest,
        std::_Wrap_alloc<std::allocator<std::vector<std::string> > > *_Al)
{
  std::string **p_Myend; // rcx

  if ( _First != _Last )
  {
    p_Myend = &_First->_Mypair._Myval2._Myend;
    do
    {
      if ( _Dest )
      {
        _Dest->_Mypair._Myval2._Myfirst = 0i64;
        _Dest->_Mypair._Myval2._Mylast = 0i64;
        _Dest->_Mypair._Myval2._Myend = 0i64;
        *_Dest = *(std::vector<std::string> *)(p_Myend - 2);
        *(p_Myend - 2) = 0i64;
        *(p_Myend - 1) = 0i64;
        *p_Myend = 0i64;
      }
      ++_Dest;
      p_Myend += 3;
    }
    while ( p_Myend - 2 != (std::string **)_Last );
  }
  return _Dest;
}

std::istream *__fastcall std::getline<char,std::char_traits<char>,std::allocator<char>>(
        std::istream *_Istr,
        std::string *_Str,
        const char _Delim)
{
  int v6; // ebx
  char v7; // si
  __int64 v9; // rcx
  std::string *v10; // rax
  __int64 v11; // rcx
  unsigned __int8 *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  int *v15; // rdx
  std::ios_base *v16; // rcx
  int v17; // edx
  __int64 v18; // rcx

  v6 = 0;
  v7 = 0;
  v9 = *(_QWORD *)&_Istr->gap10[*(int *)(*(_QWORD *)_Istr->gap0 + 4i64) + 56];
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8i64))(v9);
  if ( !std::istream::_Ipfx(_Istr, 1) )
    goto LABEL_22;
  _Str->_Mypair._Myval2._Mysize = 0i64;
  v10 = _Str->_Mypair._Myval2._Myres < 0x10 ? _Str : (std::string *)_Str->_Mypair._Myval2._Bx._Ptr;
  v10->_Mypair._Myval2._Bx._Buf[0] = 0;
  v11 = *(_QWORD *)&_Istr->gap10[*(int *)(*(_QWORD *)_Istr->gap0 + 4i64) + 56];
  v12 = **(unsigned __int8 ***)(v11 + 56);
  if ( v12 && **(int **)(v11 + 80) > 0 )
    v13 = *v12;
  else
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 48i64))(v11);
  while ( 1 )
  {
    if ( v13 == -1 )
    {
      v6 = 1;
      goto LABEL_21;
    }
    if ( v13 == (unsigned __int8)_Delim )
      break;
    if ( _Str->_Mypair._Myval2._Mysize >= 0xFFFFFFFFFFFFFFFEui64 )
    {
      v6 = 2;
      goto LABEL_21;
    }
    std::string::append(_Str, 1ui64, v13);
    v7 = 1;
    v13 = std::streambuf::snextc(*(std::streambuf **)&_Istr->gap10[*(int *)(*(_QWORD *)_Istr->gap0 + 4i64) + 56]);
  }
  v7 = 1;
  v14 = *(_QWORD *)&_Istr->gap10[*(int *)(*(_QWORD *)_Istr->gap0 + 4i64) + 56];
  if ( **(_QWORD **)(v14 + 56) && (v15 = *(int **)(v14 + 80), *v15 > 0) )
  {
    --*v15;
    ++**(_QWORD **)(v14 + 56);
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 56i64))(v14);
  }
LABEL_21:
  if ( !v7 )
LABEL_22:
    v6 |= 2u;
  v16 = (std::ios_base *)&_Istr->gap0[*(int *)(*(_QWORD *)_Istr->gap0 + 4i64)];
  if ( v6 )
  {
    v17 = v6 | v16->_Mystate | 4;
    if ( v16[1].__vftable )
      v17 = v6 | v16->_Mystate;
    std::ios_base::clear(v16, v17, 0);
  }
  v18 = *(_QWORD *)&_Istr->gap10[*(int *)(*(_QWORD *)_Istr->gap0 + 4i64) + 56];
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16i64))(v18);
  return _Istr;
}

std::locale::facet *__fastcall std::use_facet<std::ctype<char>>(const std::locale *_Loc)
{
  const std::locale::facet *v2; // rsi
  unsigned __int64 Id; // rdi
  std::locale::_Locimp *Ptr; // rcx
  std::locale::facet *v5; // rbx
  std::locale::_Locimp *v6; // rax
  __int64 pExceptionObject[6]; // [rsp+28h] [rbp-30h] BYREF
  std::_Lockit v9; // [rsp+60h] [rbp+8h] BYREF
  std::_Lockit v10; // [rsp+68h] [rbp+10h] BYREF
  std::locale::facet *_Ppf; // [rsp+70h] [rbp+18h] BYREF

  std::_Lockit::_Lockit(&v10, 0);
  v2 = std::_Facetptr<std::ctype<char>>::_Psave;
  _Ppf = (std::locale::facet *)std::_Facetptr<std::ctype<char>>::_Psave;
  Id = std::ctype<char>::id._Id;
  if ( !std::ctype<char>::id._Id )
  {
    std::_Lockit::_Lockit(&v9, 0);
    if ( std::ctype<char>::id._Id == Id )
      std::ctype<char>::id._Id = ++std::locale::id::_Id_cnt;
    std::_Lockit::~_Lockit(&v9);
    Id = std::ctype<char>::id._Id;
  }
  Ptr = _Loc->_Ptr;
  if ( Id >= Ptr->_Facetcount )
  {
    v5 = 0i64;
  }
  else
  {
    v5 = Ptr->_Facetvec[Id];
    if ( v5 )
      goto LABEL_18;
  }
  if ( !Ptr->_Xparent )
    goto LABEL_12;
  v6 = std::locale::_Getgloballocale();
  if ( Id < v6->_Facetcount )
  {
    v5 = v6->_Facetvec[Id];
LABEL_12:
    if ( v5 )
      goto LABEL_18;
  }
  if ( v2 )
  {
    v5 = (std::locale::facet *)v2;
  }
  else
  {
    if ( std::ctype<char>::_Getcat((const std::locale::facet **)&_Ppf, _Loc) == -1i64 )
    {
      pExceptionObject[2] = 0i64;
      pExceptionObject[1] = (__int64)"bad cast";
      pExceptionObject[0] = (__int64)&std::bad_cast::`vftable';
      CxxThrowException(pExceptionObject, &TI2_AVbad_cast_std__);
    }
    v5 = _Ppf;
    std::_Facetptr<std::ctype<char>>::_Psave = _Ppf;
    _Ppf->_Incref(_Ppf);
    std::_Facet_Register(v5);
  }
LABEL_18:
  std::_Lockit::~_Lockit(&v10);
  return v5;
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

void __fastcall std::istringstream::istringstream(std::istringstream *this, const std::string *_Str, int _Mode)
{
  *(_QWORD *)this->gap0 = &std::istringstream::`vbtable';
  *(_QWORD *)&this->gap88[8] = &std::ios::`vftable';
  *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)] = &std::istream::`vftable';
  *(_DWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) - 4] = *(_DWORD *)(*(_QWORD *)this->gap0 + 4i64) - 24;
  this->_Chcount = 0i64;
  std::ios::init((std::ios *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)], (std::streambuf *)this->gap10, 0);
  *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)] = &std::istringstream::`vftable';
  *(_DWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) - 4] = *(_DWORD *)(*(_QWORD *)this->gap0 + 4i64) - 144;
  std::stringbuf::stringbuf((std::stringbuf *)this->gap10, _Str, 1);
}

void __fastcall std::streambuf::streambuf(std::streambuf *this)
{
  std::locale *v2; // rbx

  this->__vftable = (std::streambuf_vtbl *)&std::streambuf::`vftable';
  v2 = (std::locale *)operator new(0x10ui64);
  v2->_Ptr = std::locale::_Init(1);
  this->_Plocale = v2;
  this->_IGfirst = &this->_Gfirst;
  this->_IPfirst = &this->_Pfirst;
  this->_IGnext = &this->_Gnext;
  this->_IPnext = &this->_Pnext;
  this->_IGcount = &this->_Gcount;
  this->_IPcount = &this->_Pcount;
  this->_Pfirst = 0i64;
  *this->_IPnext = 0i64;
  *this->_IPcount = 0;
  *this->_IGfirst = 0i64;
  *this->_IGnext = 0i64;
  *this->_IGcount = 0;
}

void __fastcall std::stringbuf::stringbuf(std::stringbuf *this, const std::string *_Str, int _Mode)
{
  char v3; // bl
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  unsigned __int64 Mysize; // r8

  v3 = _Mode;
  std::streambuf::streambuf(this);
  this->__vftable = (std::stringbuf_vtbl *)&std::stringbuf::`vftable';
  v6 = ~(4 * v3) & 4 | 2;
  if ( (v3 & 2) != 0 )
    v6 = ~(4 * v3) & 4;
  v7 = v6 | 8;
  if ( (v3 & 8) == 0 )
    v7 = v6;
  v8 = v7 | 0x10;
  if ( (v3 & 4) == 0 )
    v8 = v7;
  Mysize = _Str->_Mypair._Myval2._Mysize;
  if ( _Str->_Mypair._Myval2._Myres >= 0x10 )
    _Str = (const std::string *)_Str->_Mypair._Myval2._Bx._Ptr;
  this->_Seekhigh = 0i64;
  this->_Mystate = v8;
  if ( Mysize )
    std::stringbuf::_Init(this, _Str->_Mypair._Myval2._Bx._Buf, Mysize, ~(4 * v3) & 4);
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

void __fastcall extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::AssetCache(
        extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache *this)
{
  extension::AssetCacheExpiredEntryCleaner *v1; // rax
  extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> *v2; // r8

  InitializeCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache>);
  extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.m_Prev = &extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.m_Next = &extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.__vftable = (extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheBase::`vftable';
  v1 = extension::_anonymous_namespace_::AssetCacheExpiredEntryCleaner::Instance();
  if ( v1 )
    v2 = &v1->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  else
    v2 = 0i64;
  extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = v2->m_Prev;
  v2->m_Prev->m_Next = extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.m_Next;
  extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.m_Next = v2;
  v2->m_Prev = &extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.__vftable = (extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache_vtbl *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::`vftable';
  std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>((std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.m_cachedObjectMap);
}

void __fastcall extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::Body(
        extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *this,
        extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > shared)
{
  volatile signed __int64 *My_val; // rax
  extension::AsyncContent<extension::GFXIMovieData> *v5; // rbx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // [rsp+48h] [rbp+10h]

  this->__vftable = (extension::BasicFutureObject<extension::GFXIMovieData,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  v6 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
  v6->m_refCount.m_value._My_val = 1i64;
  v6->m_principal = this;
  v6->m_sharedCount.m_value._My_val = 0i64;
  v6->m_sharedCount.m_value._My_val = 1i64;
  this->m_refCount.m_ptr = v6;
  this->__vftable = (extension::BasicFutureObject<extension::GFXIMovieData,void>::Body_vtbl *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::`vftable';
  My_val = (volatile signed __int64 *)shared.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<extension::GFXIMovieData> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  v5 = (extension::AsyncContent<extension::GFXIMovieData> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<extension::GFXIMovieData>::~AsyncContent<extension::GFXIMovieData>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall MovieData::MovieData(MovieData *this)
{
  CMediaPlayer *v2; // rax
  CMediaPlayer *v3; // [rsp+48h] [rbp+10h]

  this->m_GFXMovie.m_movieProxy.m_ptr = 0i64;
  this->m_FutureGFXMovie.m_isNoCache = 0;
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty(&this->m_FutureGFXMovie.m_body);
  if ( !MovieData::mvplayer )
  {
    v3 = (CMediaPlayer *)operator new(0x48ui64);
    CMediaPlayer::CMediaPlayer(v3);
    MovieData::mvplayer = v2;
  }
  this->m_bPlay = STOP;
  *(_WORD *)&this->m_Audio = 0;
  this->m_Telop = 0;
  *(_QWORD *)&this->m_requestMovie = -1i64;
  this->m_waitFrame = 0;
  this->m_TelopInfo = 0i64;
  *(_QWORD *)&this->m_TelopNum = 0i64;
  this->m_TelopCurrent = -1;
}

void __fastcall MovieTelopInfo::MovieTelopInfo(MovieTelopInfo *this)
{
  this->time = 0i64;
  memset(this->key, 0, sizeof(this->key));
  *(_QWORD *)&this->color = 0i64;
  *(_QWORD *)&this->mode = 0i64;
}

void __fastcall std::_Locinfo::_Locinfo(std::_Locinfo *this, const char *_Pch)
{
  __std_exception_data from; // [rsp+28h] [rbp-30h] BYREF
  void **pExceptionObject; // [rsp+38h] [rbp-20h] BYREF
  __std_exception_data to; // [rsp+40h] [rbp-18h] BYREF

  std::_Lockit::_Lockit(&this->_Lock, 0);
  this->_Days._Myptr = 0i64;
  this->_Days._Nul = 0;
  this->_Months._Myptr = 0i64;
  this->_Months._Nul = 0;
  this->_W_Days._Myptr = 0i64;
  this->_W_Days._Nul = 0;
  this->_W_Months._Myptr = 0i64;
  this->_W_Months._Nul = 0;
  this->_Oldlocname._Myptr = 0i64;
  this->_Oldlocname._Nul = 0;
  this->_Newlocname._Myptr = 0i64;
  this->_Newlocname._Nul = 0;
  if ( !_Pch )
  {
    pExceptionObject = &std::exception::`vftable';
    to._What = 0i64;
    *(_QWORD *)&to._DoFree = 0i64;
    from._What = "bad locale name";
    from._DoFree = 1;
    _std_exception_copy(&from, &to);
    pExceptionObject = &std::runtime_error::`vftable';
    CxxThrowException(&pExceptionObject, &TI2_AVruntime_error_std__);
  }
  std::_Locinfo::_Locinfo_ctor(this, _Pch);
}

void __fastcall std::_System_error::_System_error(
        std::_System_error *this,
        std::error_code *_Errcode,
        const std::string *_Message)
{
  std::string *Ptr; // rax
  char *v6; // rcx
  char *v7; // rax
  __std_exception_data from; // [rsp+20h] [rbp-68h] BYREF
  std::string v9; // [rsp+30h] [rbp-58h] BYREF
  std::string v10; // [rsp+50h] [rbp-38h] BYREF

  v9._Mypair._Myval2._Myres = 15i64;
  v9._Mypair._Myval2._Mysize = 0i64;
  v9._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v9, _Message, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  from = (__std_exception_data)*_Errcode;
  Ptr = std::_System_error::_Makestr(&v10, (std::error_code *)&from, &v9);
  if ( Ptr->_Mypair._Myval2._Myres >= 0x10 )
    Ptr = (std::string *)Ptr->_Mypair._Myval2._Bx._Ptr;
  from._What = (const char *)Ptr;
  from._DoFree = 1;
  this->__vftable = (std::_System_error_vtbl *)&std::exception::`vftable';
  this->_Data._What = 0i64;
  *(_QWORD *)&this->_Data._DoFree = 0i64;
  _std_exception_copy(&from, &this->_Data);
  this->__vftable = (std::_System_error_vtbl *)&std::runtime_error::`vftable';
  if ( v10._Mypair._Myval2._Myres >= 0x10 )
  {
    v6 = v10._Mypair._Myval2._Bx._Ptr;
    if ( v10._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v10._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v7 = (char *)*((_QWORD *)v10._Mypair._Myval2._Bx._Ptr - 1);
      if ( v7 >= v10._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v10._Mypair._Myval2._Bx._Ptr - v7) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v10._Mypair._Myval2._Bx._Ptr - v7) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v6 = (char *)*((_QWORD *)v10._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v6);
  }
  this->__vftable = (std::_System_error_vtbl *)&std::_System_error::`vftable';
  this->_Mycode = *_Errcode;
}

void __fastcall std::_System_error::_System_error(std::_System_error *this, const std::_System_error *__that)
{
  this->__vftable = (std::_System_error_vtbl *)&std::exception::`vftable';
  this->_Data._What = 0i64;
  *(_QWORD *)&this->_Data._DoFree = 0i64;
  _std_exception_copy(&__that->_Data, &this->_Data);
  this->__vftable = (std::_System_error_vtbl *)&std::_System_error::`vftable';
  this->_Mycode = __that->_Mycode;
}

void __fastcall std::bad_cast::bad_cast(std::bad_cast *this, const std::bad_cast *__that)
{
  this->__vftable = (std::bad_cast_vtbl *)&std::exception::`vftable';
  this->_Data._What = 0i64;
  *(_QWORD *)&this->_Data._DoFree = 0i64;
  _std_exception_copy(&__that->_Data, &this->_Data);
  this->__vftable = (std::bad_cast_vtbl *)&std::bad_cast::`vftable';
}

void __fastcall std::exception::exception(std::exception *this, const std::exception *_Other)
{
  this->__vftable = (std::exception_vtbl *)&std::exception::`vftable';
  this->_Data._What = 0i64;
  *(_QWORD *)&this->_Data._DoFree = 0i64;
  _std_exception_copy(&_Other->_Data, &this->_Data);
}

void __fastcall std::ios_base::failure::failure(std::ios_base::failure *this, const std::ios_base::failure *__that)
{
  std::error_code Mycode; // xmm0

  this->__vftable = (std::ios_base::failure_vtbl *)&std::exception::`vftable';
  this->_Data._What = 0i64;
  *(_QWORD *)&this->_Data._DoFree = 0i64;
  _std_exception_copy(&__that->_Data, &this->_Data);
  this->__vftable = (std::ios_base::failure_vtbl *)&std::_System_error::`vftable';
  Mycode = __that->_Mycode;
  this->__vftable = (std::ios_base::failure_vtbl *)&std::ios_base::failure::`vftable';
  this->_Mycode = Mycode;
}

void __fastcall std::runtime_error::runtime_error(std::runtime_error *this, const std::runtime_error *__that)
{
  this->__vftable = (std::runtime_error_vtbl *)&std::exception::`vftable';
  this->_Data._What = 0i64;
  *(_QWORD *)&this->_Data._DoFree = 0i64;
  _std_exception_copy(&__that->_Data, &this->_Data);
  this->__vftable = (std::runtime_error_vtbl *)&std::runtime_error::`vftable';
}

void __fastcall std::ostream::sentry::sentry(std::ostream::sentry *this, std::ostream *_Ostr)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  std::ostream *v6; // rcx

  this->_Myostr = _Ostr;
  v4 = *(_QWORD *)&_Ostr->gap0[*(int *)(*(_QWORD *)_Ostr->gap0 + 4i64) + 72];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8i64))(v4);
  v5 = *(int *)(*(_QWORD *)_Ostr->gap0 + 4i64);
  if ( !*(_DWORD *)&_Ostr->gap0[v5 + 16] )
  {
    v6 = *(std::ostream **)&_Ostr->gap0[v5 + 80];
    if ( v6 )
    {
      if ( v6 != _Ostr )
        std::ostream::flush(v6);
    }
  }
  this->_Ok = *(_DWORD *)&_Ostr->gap0[*(int *)(*(_QWORD *)_Ostr->gap0 + 4i64) + 16] == 0;
}

void __fastcall std::system_error::system_error(std::system_error *this, const std::system_error *__that)
{
  std::error_code Mycode; // xmm0

  this->__vftable = (std::system_error_vtbl *)&std::exception::`vftable';
  this->_Data._What = 0i64;
  *(_QWORD *)&this->_Data._DoFree = 0i64;
  _std_exception_copy(&__that->_Data, &this->_Data);
  this->__vftable = (std::system_error_vtbl *)&std::_System_error::`vftable';
  Mycode = __that->_Mycode;
  this->__vftable = (std::system_error_vtbl *)&std::system_error::`vftable';
  this->_Mycode = Mycode;
}

void __fastcall extension::AsyncContent<extension::GFXIMovieData>::~AsyncContent<extension::GFXIMovieData>(
        extension::AsyncContent<extension::GFXIMovieData> *this)
{
  extension::GFXIMovieData *Myval2; // rbx
  extension::GFXIMovieData *v3; // rbx

  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, 1);
  Myval2 = this->m_data._Mypair._Myval2;
  this->m_data._Mypair._Myval2 = 0i64;
  if ( Myval2 )
  {
    if ( Myval2->m_movieDef.pObject )
      Scaleform::GFx::Resource::Release(Myval2->m_movieDef.pObject);
    operator delete(Myval2, 8ui64);
  }
  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, -1);
  v3 = this->m_data._Mypair._Myval2;
  if ( v3 )
  {
    if ( v3->m_movieDef.pObject )
      Scaleform::GFx::Resource::Release(v3->m_movieDef.pObject);
    operator delete(v3, 8ui64);
  }
  std::string::~string((std::string *)&this->m_loadOptionString);
  std::string::~string((std::string *)&this->m_name);
}

void __fastcall extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>(
        extension::exsound_detail::SoundBankParser *this)
{
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *m_ptr; // rcx

  m_ptr = this->m_fileImage.m_body.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
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

void __fastcall extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData>>::~RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData>>(
        extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > *this)
{
  extension::AsyncContent<extension::GFXIMovieData> *m_ptr; // rbx

  m_ptr = this->m_ptr;
  if ( this->m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( m_ptr )
    {
      extension::AsyncContent<extension::GFXIMovieData>::~AsyncContent<extension::GFXIMovieData>(m_ptr);
      operator delete(m_ptr, 0x68ui64);
    }
  }
}

void __fastcall extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>::~RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>(
        extension::RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> *this)
{
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *m_ptr; // rcx

  m_ptr = this->m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
  }
}

void __fastcall std::_Yarn<wchar_t>::~_Yarn<wchar_t>(std::_Yarn<wchar_t> *this)
{
  wchar_t *Myptr; // rcx

  Myptr = this->_Myptr;
  if ( Myptr )
    free(Myptr);
  this->_Myptr = 0i64;
}

void __fastcall std::ios::~ios<char,std::char_traits<char>>(std::ios *this)
{
  this->__vftable = (std::ios_vtbl *)&std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(this);
}

void __fastcall std::istream::~istream<char,std::char_traits<char>>(std::istream *this)
{
  *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)&this[-1].gap10[80] + 4i64) - 24] = &std::istream::`vftable';
  *(_DWORD *)&this->gap0[*(int *)(*(_QWORD *)&this[-1].gap10[80] + 4i64) - 28] = *(_DWORD *)(*(_QWORD *)&this[-1].gap10[80]
                                                                                           + 4i64)
                                                                               - 24;
}

void __fastcall std::istringstream::~istringstream(std::istringstream *this)
{
  __int64 v2; // rdx

  *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)&this[-1].gap10[80] + 4i64) - 144] = &std::istringstream::`vftable';
  v2 = *(int *)(*(_QWORD *)&this[-1].gap10[80] + 4i64);
  *(_DWORD *)&this->gap0[v2 - 148] = v2 - 144;
  std::stringbuf::~stringbuf((std::stringbuf *)&this[-1].gap10[96]);
  *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)&this[-1].gap10[80] + 4i64) - 144] = &std::istream::`vftable';
  *(_DWORD *)&this->gap0[*(int *)(*(_QWORD *)&this[-1].gap10[80] + 4i64) - 148] = *(_DWORD *)(*(_QWORD *)&this[-1].gap10[80]
                                                                                            + 4i64)
                                                                                - 24;
}

void __fastcall std::streambuf::~streambuf<char,std::char_traits<char>>(StdCompatMemStreamBuf *this)
{
  std::locale *Plocale; // rbx
  std::locale::_Locimp *Ptr; // rcx
  std::_Facet_base *v3; // rax

  this->__vftable = (StdCompatMemStreamBuf_vtbl *)&std::streambuf::`vftable';
  Plocale = this->_Plocale;
  if ( Plocale )
  {
    Ptr = Plocale->_Ptr;
    if ( Ptr )
    {
      v3 = Ptr->_Decref(Ptr);
      if ( v3 )
        ((void (__fastcall *)(std::_Facet_base *, __int64))v3->~_Facet_base)(v3, 1i64);
    }
    operator delete(Plocale, 0x10ui64);
  }
}

void __fastcall std::stringbuf::~stringbuf(std::stringbuf *this)
{
  std::locale *Plocale; // rbx
  std::locale::_Locimp *Ptr; // rcx
  std::_Facet_base *v4; // rax

  this->__vftable = (std::stringbuf_vtbl *)&std::stringbuf::`vftable';
  std::stringbuf::_Tidy(this);
  this->__vftable = (std::stringbuf_vtbl *)&std::streambuf::`vftable';
  Plocale = this->_Plocale;
  if ( Plocale )
  {
    Ptr = Plocale->_Ptr;
    if ( Ptr )
    {
      v4 = Ptr->_Decref(Ptr);
      if ( v4 )
        ((void (__fastcall *)(std::_Facet_base *, __int64))v4->~_Facet_base)(v4, 1i64);
    }
    operator delete(Plocale, 0x10ui64);
  }
}

void __fastcall std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>::~list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>(
        std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *this)
{
  std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>>>::clear(this);
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall std::unique_ptr<extension::GFXIMovieData>::~unique_ptr<extension::GFXIMovieData>(
        std::unique_ptr<extension::GFXIMovieData> *this)
{
  extension::GFXIMovieData *Myval2; // rbx

  Myval2 = this->_Mypair._Myval2;
  if ( this->_Mypair._Myval2 )
  {
    if ( Myval2->m_movieDef.pObject )
      Scaleform::GFx::Resource::Release(Myval2->m_movieDef.pObject);
    operator delete(Myval2, 8ui64);
  }
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

void __fastcall std::vector<std::string>::_Tidy(
        std::vector<std::string> *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<std::string > > *a3,
        std::integral_constant<bool,0> a4)
{
  std::string *Myfirst; // rcx
  std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *v6; // rcx

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Destroy_range1<std::allocator<std::string>,std::string *>(Myfirst, this->_Mypair._Myval2._Mylast, a3, a4);
    std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
      v6,
      (AgDirectory::DirectoryEntry *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<std::vector<std::string>>::~vector<std::vector<std::string>>(
        std::vector<std::vector<std::string>> *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<std::vector<std::string> > > *a3,
        std::integral_constant<bool,0> a4)
{
  std::vector<std::string> *Myfirst; // rcx
  std::allocator<AgJsonNode> *v6; // rcx

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Destroy_range1<std::allocator<std::vector<std::string>>,std::vector<std::string> *>(
      Myfirst,
      this->_Mypair._Myval2._Mylast,
      a3,
      a4);
    std::allocator<AgJsonNode>::deallocate(
      v6,
      (AgJsonNode *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::~AssetCache(
        extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache *this)
{
  AgLogger **Myfirst; // rdx

  this->__vftable = (extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache_vtbl *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::`vftable';
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
  this->__vftable = (extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheNode::`vftable';
  this->m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = this->m_Prev;
  this->m_Prev->m_Next = this->m_Next;
  this->m_Next = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  this->m_Prev = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache>);
}

void __fastcall extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::~Body(
        extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *this)
{
  extension::AsyncContent<extension::GFXIMovieData> *m_ptr; // rdx
  signed __int64 My_val; // rax
  unsigned __int64 v4; // rtt
  extension::AsyncContent<extension::GFXIMovieData> *v5; // rbx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // rcx
  signed __int64 v7; // rsi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::BasicFutureObject<extension::GFXIMovieData,void>::Body_vtbl *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::`vftable';
  if ( m_ptr )
  {
    do
    {
      My_val = m_ptr->m_status.m_stateFlags.m_value._My_val;
      if ( (My_val & 1) != 0 )
        break;
      v4 = m_ptr->m_status.m_stateFlags.m_value._My_val;
    }
    while ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)&m_ptr->m_status, My_val | 2, My_val) );
  }
  v5 = this->m_content.m_ptr;
  if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<extension::GFXIMovieData>::~AsyncContent<extension::GFXIMovieData>(v5);
    operator delete(v5, 0x68ui64);
  }
  this->__vftable = (extension::BasicFutureObject<extension::GFXIMovieData,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  this->m_refCount.m_ptr->m_principal = 0i64;
  v6 = this->m_refCount.m_ptr;
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64);
    if ( v7 == 1 )
      operator delete(v6, 0x18ui64);
  }
}

void __fastcall std::_Locinfo::~_Locinfo(std::_Locinfo *this)
{
  char *Myptr; // rcx
  char *v3; // rcx
  wchar_t *v4; // rcx
  wchar_t *v5; // rcx
  char *v6; // rcx
  char *v7; // rcx

  std::_Locinfo::_Locinfo_dtor(this);
  Myptr = this->_Newlocname._Myptr;
  if ( Myptr )
    free(Myptr);
  this->_Newlocname._Myptr = 0i64;
  v3 = this->_Oldlocname._Myptr;
  if ( v3 )
    free(v3);
  this->_Oldlocname._Myptr = 0i64;
  v4 = this->_W_Months._Myptr;
  if ( v4 )
    free(v4);
  this->_W_Months._Myptr = 0i64;
  v5 = this->_W_Days._Myptr;
  if ( v5 )
    free(v5);
  this->_W_Days._Myptr = 0i64;
  v6 = this->_Months._Myptr;
  if ( v6 )
    free(v6);
  this->_Months._Myptr = 0i64;
  v7 = this->_Days._Myptr;
  if ( v7 )
    free(v7);
  this->_Days._Myptr = 0i64;
  std::_Lockit::~_Lockit(&this->_Lock);
}

void __fastcall std::istream::_Sentry_base::~_Sentry_base(std::ostream::_Sentry_base *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)&this->_Myostr->gap0[*(int *)(*(_QWORD *)this->_Myostr + 4i64) + 72];
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16i64))(v1);
}

void __fastcall std::bad_cast::~bad_cast(std::__non_rtti_object *this)
{
  this->__vftable = (std::__non_rtti_object_vtbl *)&std::exception::`vftable';
  _std_exception_destroy(&this->_Data);
}

void __fastcall std::locale::facet::~facet(std::locale::facet *this)
{
  this->__vftable = (std::locale::facet_vtbl *)&std::_Facet_base::`vftable';
}

void __fastcall std::locale::~locale(std::locale *this)
{
  std::locale::_Locimp *Ptr; // rcx
  std::_Facet_base *v2; // rax

  Ptr = this->_Ptr;
  if ( Ptr )
  {
    v2 = Ptr->_Decref(Ptr);
    if ( v2 )
      ((void (__fastcall *)(std::_Facet_base *, __int64))v2->~_Facet_base)(v2, 1i64);
  }
}

void __fastcall std::istream::sentry::~sentry(std::istream::sentry *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)&this->_Myistr->gap10[*(int *)(*(_QWORD *)this->_Myistr + 4i64) + 56];
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16i64))(v1);
}

void __fastcall std::ostream::sentry::~sentry(std::ostream::sentry *this)
{
  __int64 v2; // rcx

  if ( !std::uncaught_exception() )
    std::ostream::_Osfx(this->_Myostr);
  v2 = *(_QWORD *)&this->_Myostr->gap0[*(int *)(*(_QWORD *)this->_Myostr + 4i64) + 72];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
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

std::string *__fastcall std::vector<std::string>::operator[](std::vector<std::string> *this, unsigned __int64 _Pos)
{
  return &this->_Mypair._Myval2._Myfirst[_Pos];
}

extension::exsound_detail::SoundBankImpl *__fastcall extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
        extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *this,
        extension::AsyncStatus::Step a2)
{
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *m_ptr; // rbx

  m_ptr = this->m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
    return 0i64;
  if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    extension::AsyncStatus::waitFor(&m_ptr->m_status, a2);
  return m_ptr->m_data._Mypair._Myval2;
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

void __fastcall MovieData::Draw(MovieData *this, OGLRender *render, int x, int y, int w, int h)
{
  const MovieDataInfo *v6; // rax
  AgMoviePlayer *m_ptr; // rcx

  v6 = movieData;
  do
  {
    if ( v6->id == this->m_currentMovie )
      break;
    ++v6;
  }
  while ( (__int64)v6 < (__int64)achivement_data::Map );
  if ( MovieData::mvplayer )
  {
    if ( this->m_Video )
    {
      m_ptr = MovieData::mvplayer->m_currentMovie.m_ptr;
      if ( !m_ptr || !(unsigned __int8)AgMoviePlayer::isFinished(m_ptr) )
        CMediaPlayer::draw((CMediaPlayer *)m_ptr, render, 0.0, 0.0, (float)w, (float)h, 1.0, 1.0);
      OGLRender::drawStack(render, 1u, 0);
    }
    if ( this->m_GFXMovie.m_movieProxy.m_ptr )
      extension::GFXIMovie::render(&this->m_GFXMovie);
  }
}

void __fastcall extension::FutureObjectJobManager<extension::GFXIMovieData,void>::EnqueueAsyncJob(
        extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > shared)
{
  extension::AsyncContent<extension::GFXIMovieData> *My_val; // rax
  extension::AsyncContent<extension::GFXIMovieData> *v3; // rbx
  extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > shareda; // [rsp+48h] [rbp+10h] BYREF

  My_val = (extension::AsyncContent<extension::GFXIMovieData> *)shared.m_ptr->m_refCount.m_value._My_val;
  shareda.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::GFXIMovieData::EnqueueFutureMovieDataJob((extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >)&shareda);
  v3 = (extension::AsyncContent<extension::GFXIMovieData> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<extension::GFXIMovieData>::~AsyncContent<extension::GFXIMovieData>(v3);
      operator delete(v3, 0x68ui64);
    }
  }
}

void __fastcall MovieData::Finalize(MovieData *this, bool release)
{
  CMediaPlayer *v2; // rbx
  __int64 v3; // rsi
  AgMoviePlayer *m_ptr; // rcx
  AgReferenceCount *m_ref; // rax
  extension::gfxi_detail::MovieProxy *v7; // rbx
  unsigned __int64 v8; // rdx
  MovieTelopInfo *m_TelopInfo; // rcx
  AgPointer<AgMoviePlayer> v10; // [rsp+20h] [rbp-18h] BYREF

  v2 = MovieData::mvplayer;
  v3 = *(_QWORD *)&AppMain::pApp;
  if ( MovieData::mvplayer )
  {
    m_ptr = MovieData::mvplayer->m_currentMovie.m_ptr;
    if ( m_ptr )
    {
      AgMoviePlayer::stop(m_ptr);
      m_ref = v2->m_currentMovie.m_ref;
      v10.m_ptr = v2->m_currentMovie.m_ptr;
      v2->m_currentMovie.m_ref = 0i64;
      v2->m_currentMovie.m_ptr = 0i64;
      v10.m_ref = m_ref;
      AgPointer<AgMoviePlayer>::~AgPointer<AgMoviePlayer>(&v10);
    }
  }
  this->m_bPlay = STOP;
  this->m_currentMovie = MOVIE_ID_NONE;
  v7 = this->m_GFXMovie.m_movieProxy.m_ptr;
  this->m_GFXMovie.m_movieProxy.m_ptr = 0i64;
  if ( v7 && _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::gfxi_detail::MovieProxy::~MovieProxy(v7);
    operator delete(v7, 0xE8ui64);
  }
  extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(&this->m_FutureGFXMovie);
  m_TelopInfo = this->m_TelopInfo;
  if ( m_TelopInfo )
  {
    operator delete(m_TelopInfo, v8);
    this->m_TelopInfo = 0i64;
  }
  extension::SoundList::dispose((extension::SoundList *)(v3 + 2197144));
}

extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> *__fastcall extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty(
        extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> *result)
{
  extension::RefCountableWeakSupportBase::WeakProxy *v3; // [rsp+40h] [rbp+8h]

  if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VGFXIMovieData_extension__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VGFXIMovieData_extension__X_extension___4_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VGFXIMovieData_extension__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VGFXIMovieData_extension__X_extension___4_XZ_4HA);
    if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VGFXIMovieData_extension__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VGFXIMovieData_extension__X_extension___4_XZ_4HA == -1 )
    {
      `extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<extension::GFXIMovieData,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
      v3 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
      v3->m_refCount.m_value._My_val = 1i64;
      v3->m_principal = &`extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty'::`2'::shared_body;
      v3->m_sharedCount.m_value._My_val = 0i64;
      v3->m_sharedCount.m_value._My_val = 1i64;
      `extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr = v3;
      `extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<extension::GFXIMovieData,void>::Body_vtbl *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::`vftable';
      `extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty'::`2'::shared_body.m_content.m_ptr = 0i64;
      atexit(`extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty'::`2'::`dynamic atexit destructor for 'shared_body'');
      Init_thread_footer(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VGFXIMovieData_extension__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VGFXIMovieData_extension__X_extension___4_XZ_4HA);
    }
  }
  result->m_ptr = &`extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty'::`2'::shared_body;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&`extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr->m_sharedCount,
    1ui64);
  return result;
}

bool __fastcall MovieData::HasSoundBank(MovieData *this, MOVIE_ID id)
{
  int v2; // ecx
  const MovieDataInfo *v3; // rax

  v2 = 0;
  v3 = movieData;
  while ( v3->id != id )
  {
    ++v2;
    if ( (__int64)++v3 >= (__int64)achivement_data::Map )
      return *MEMORY[0x10] != 0;
  }
  return *movieData[v2].sbnakName != 0;
}

bool __fastcall MovieData::IsPlayEnd(MovieData *this)
{
  const MovieDataInfo *v1; // rbx
  MOVIE_ID m_currentMovie; // ecx
  int v4; // edx
  const MovieDataInfo *v5; // rax
  AppMain *v6; // rsi
  bool result; // al
  AgMoviePlayer *m_ptr; // rcx
  AppMain::SoundListIndex v9; // edx

  v1 = 0i64;
  m_currentMovie = this->m_currentMovie;
  v4 = 0;
  v5 = movieData;
  while ( v5->id != m_currentMovie )
  {
    ++v4;
    if ( (__int64)++v5 >= (__int64)achivement_data::Map )
      goto LABEL_6;
  }
  v1 = &movieData[v4];
LABEL_6:
  v6 = *(AppMain **)&AppMain::pApp;
  result = 1;
  if ( this->m_bPlay != 4 )
  {
    if ( this->m_bPlay != (SKIP|PLAY) )
      return 0;
    if ( !v1 )
      return 0;
    if ( !this->m_Video )
      return 0;
    m_ptr = MovieData::mvplayer->m_currentMovie.m_ptr;
    if ( !m_ptr
      || !(unsigned __int8)AgMoviePlayer::isFinished(m_ptr)
      || this->m_Audio && AppMain::Sound_IsPlayingSEByName(v6, v9, v1->soundName) )
    {
      return 0;
    }
  }
  return result;
}

void __fastcall MovieData::LoadBank(MovieData *this, MOVIE_ID id)
{
  AppMain *v2; // rbp
  const MovieDataInfo *v5; // rdi
  const MovieDataInfo *v6; // rax
  int v7; // er8
  const MovieDataInfo *v8; // rsi
  int v9; // ecx
  const MovieDataInfo *v10; // rax

  v2 = *(AppMain **)&AppMain::pApp;
  v5 = 0i64;
  v6 = movieData;
  v7 = 0;
  while ( v6->id != id )
  {
    ++v7;
    if ( (__int64)++v6 >= (__int64)achivement_data::Map )
    {
      v8 = 0i64;
      goto LABEL_6;
    }
  }
  v8 = &movieData[v7];
LABEL_6:
  extension::SoundList::dispose((extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 2197144i64));
  v9 = 0;
  this->m_Audio = 0;
  v10 = movieData;
  while ( v10->id != id )
  {
    ++v9;
    if ( (__int64)++v10 >= (__int64)achivement_data::Map )
      goto LABEL_11;
  }
  v5 = &movieData[v9];
LABEL_11:
  if ( *v5->sbnakName )
  {
    this->m_Audio = 1;
    this->m_bPlay = SKIP;
    AppMain::Sound_LoadStage(v2, v8->sbnakName);
    this->m_currentMovie = id;
  }
}

void __fastcall MovieData::LoadCSV(MovieData *this, MOVIE_ID id)
{
  int v3; // edi
  int v4; // er8
  const MovieDataInfo *v5; // rax
  const MovieDataInfo *v6; // rcx
  int v7; // eax
  int v8; // er8
  const std::locale *v9; // rax
  __int64 v10; // rdx
  std::locale::facet *v11; // rbx
  std::_Facet_base *v12; // rax
  char v13; // al
  std::istream *v14; // rax
  unsigned __int64 v15; // rdx
  int v16; // er9
  std::string *p_Str; // rdx
  __int64 v18; // r15
  std::istream *v19; // rax
  std::string *Myend; // rbx
  std::string *Mylast; // r13
  std::string *p_Right; // r12
  std::string *Ptr; // rax
  std::string *v24; // rax
  std::string *v25; // r14
  signed __int64 v26; // rsi
  __int64 v27; // rdi
  signed __int64 v28; // rdi
  __int64 v29; // rbx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r8
  std::string *v33; // rdi
  std::string *v34; // rax
  std::string *v35; // rdx
  __int64 v36; // rbx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // r8
  std::istream *v40; // rax
  std::_Wrap_alloc<std::allocator<std::string > > *v41; // r8
  std::integral_constant<bool,0> v42; // r9
  AgDirectory::DirectoryEntry *v43; // rbx
  std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *v44; // rcx
  void *Myres; // rcx
  std::vector<std::string> *v46; // r15
  std::vector<std::string> *v47; // rbx
  void *v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rdi
  std::string *Myfirst; // r9
  int v52; // er13
  __int64 v53; // r12
  int v54; // edi
  int v55; // esi
  std::string *v56; // r8
  char **v57; // rdx
  __int64 v58; // rcx
  char v59; // al
  std::string *v60; // rdx
  std::string *v61; // rax
  unsigned __int64 v62; // r8
  unsigned __int64 *v63; // rdx
  float v64; // xmm0_4
  unsigned __int64 v65; // rax
  std::string *v66; // r8
  char **v67; // rdx
  __int64 v68; // rcx
  char v69; // al
  std::string *v70; // rdx
  std::string *v71; // rax
  _BYTE *v72; // r8
  char v73; // al
  std::string *v74; // r8
  char **v75; // rdx
  __int64 v76; // rcx
  char v77; // al
  std::string *v78; // rdx
  std::string *v79; // rax
  unsigned __int64 v80; // r8
  unsigned __int64 *v81; // rdx
  std::string *v82; // rbx
  std::string *v83; // r8
  char **v84; // rdx
  __int64 v85; // rcx
  char v86; // al
  std::string *v87; // rdx
  std::string *v88; // rax
  unsigned __int64 v89; // r8
  unsigned __int64 *v90; // rdx
  std::string *v91; // r8
  char **v92; // rdx
  __int64 v93; // rcx
  char v94; // al
  std::string *v95; // rdx
  std::string *v96; // rax
  unsigned __int64 v97; // r8
  unsigned __int64 *v98; // rdx
  std::string *v99; // rbx
  std::string *v100; // rcx
  std::string *v101; // rdx
  std::string *v102; // rax
  unsigned __int64 v103; // r8
  unsigned __int64 *v104; // rdx
  __int64 v105; // rdx
  std::_Wrap_alloc<std::allocator<std::vector<std::string> > > *v106; // r8
  std::integral_constant<bool,0> v107; // r9
  std::vector<std::string> _Val; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v109; // [rsp+50h] [rbp-B8h]
  void *v110; // [rsp+58h] [rbp-B0h]
  char *_Ptr; // [rsp+60h] [rbp-A8h] BYREF
  std::vector<std::vector<std::string>> v112; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v113; // [rsp+80h] [rbp-88h]
  __int64 v114; // [rsp+88h] [rbp-80h]
  std::locale result; // [rsp+90h] [rbp-78h] BYREF
  int v116; // [rsp+A4h] [rbp-64h]
  std::istream _Istr; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v118; // [rsp+120h] [rbp+18h]
  int v119; // [rsp+128h] [rbp+20h]
  int v120; // [rsp+134h] [rbp+2Ch]
  std::ios v121; // [rsp+138h] [rbp+30h] BYREF
  std::istringstream v122; // [rsp+198h] [rbp+90h] BYREF
  std::string _Right; // [rsp+288h] [rbp+180h] BYREF
  std::string _Str; // [rsp+2A8h] [rbp+1A0h] BYREF

  v114 = -2i64;
  _Val._Mypair._Myval2._Myfirst = (std::string *)this;
  v3 = 0;
  LODWORD(v110) = 0;
  v4 = 0;
  v5 = movieData;
  while ( v5->id != id )
  {
    ++v4;
    if ( (__int64)++v5 >= (__int64)achivement_data::Map )
    {
      v6 = 0i64;
      goto LABEL_6;
    }
  }
  v6 = &movieData[v4];
LABEL_6:
  _Ptr = 0i64;
  this->m_Telop = 0;
  if ( v6 )
  {
    if ( v6->csv )
    {
      this->m_Telop = 1;
      v7 = CFile::ResourceDataLoaderNew(v6->csv, id, v4, (int)movieData, (unsigned __int8 **)&_Ptr);
      if ( _Ptr )
      {
        _Str._Mypair._Myval2._Myres = 15i64;
        _Str._Mypair._Myval2._Mysize = 0i64;
        _Str._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(&_Str, _Ptr, v7);
        std::istringstream::istringstream(&v122, &_Str, v8);
        std::string::~string(&_Str);
        *(_OWORD *)&v112._Mypair._Myval2._Mylast = 0i64;
        v113 = 0i64;
        _Str._Mypair._Myval2._Myres = 15i64;
        _Str._Mypair._Myval2._Mysize = 0i64;
        _Str._Mypair._Myval2._Bx._Buf[0] = 0;
        while ( 1 )
        {
          v9 = std::ios_base::getloc((std::ios_base *)&v122.gap0[*(int *)(*(_QWORD *)v122.gap0 + 4i64)], &result);
          v11 = std::use_facet<std::ctype<char>>(v9);
          if ( result._Ptr )
          {
            v12 = result._Ptr->_Decref(result._Ptr);
            if ( v12 )
              ((void (__fastcall *)(std::_Facet_base *, __int64))v12->~_Facet_base)(v12, 1i64);
          }
          LOBYTE(v10) = 10;
          v13 = ((__int64 (__fastcall *)(std::locale::facet *, __int64))v11->__vftable[2]._Decref)(v11, v10);
          v14 = std::getline<char,std::char_traits<char>,std::allocator<char>>(&v122, &_Str, v13);
          v15 = *(int *)(*(_QWORD *)v14->gap0 + 4i64);
          if ( (v14->gap10[v15] & 6) != 0 )
            break;
          *(_QWORD *)_Istr.gap0 = &std::istringstream::`vbtable';
          v3 |= 1u;
          LODWORD(v110) = v3;
          v121.__vftable = (std::ios_vtbl *)&std::istream::`vftable';
          v120 = 120;
          _Istr._Chcount = 0i64;
          std::ios::init(&v121, (std::streambuf *)_Istr.gap10, 0);
          *(_QWORD *)&_Istr.gap0[*(int *)(*(_QWORD *)_Istr.gap0 + 4i64)] = &std::istringstream::`vftable';
          *(int *)((char *)&v116 + *(int *)(*(_QWORD *)_Istr.gap0 + 4i64)) = *(_DWORD *)(*(_QWORD *)_Istr.gap0 + 4i64)
                                                                           - 144;
          v112._Mypair._Myval2._Myfirst = (std::vector<std::string> *)_Istr.gap10;
          std::streambuf::streambuf((std::streambuf *)_Istr.gap10);
          *(_QWORD *)_Istr.gap10 = &std::stringbuf::`vftable';
          p_Str = &_Str;
          if ( _Str._Mypair._Myval2._Myres >= 0x10 )
            p_Str = (std::string *)_Str._Mypair._Myval2._Bx._Ptr;
          v118 = 0i64;
          v119 = 2;
          if ( _Str._Mypair._Myval2._Mysize )
            std::stringbuf::_Init(
              (std::stringbuf *)_Istr.gap10,
              p_Str->_Mypair._Myval2._Bx._Buf,
              _Str._Mypair._Myval2._Mysize,
              v16);
          _Right._Mypair._Myval2._Myres = 15i64;
          _Right._Mypair._Myval2._Mysize = 0i64;
          _Right._Mypair._Myval2._Bx._Buf[0] = 0;
          *(_OWORD *)&_Val._Mypair._Myval2._Mylast = 0i64;
          v18 = 0i64;
          v109 = 0i64;
          v19 = std::getline<char,std::char_traits<char>,std::allocator<char>>(&_Istr, &_Right, 44);
          if ( (v19->gap10[*(int *)(*(_QWORD *)v19->gap0 + 4i64)] & 6) == 0 )
          {
            Myend = _Val._Mypair._Myval2._Myend;
            Mylast = _Val._Mypair._Myval2._Mylast;
            while ( 1 )
            {
              if ( !_Right._Mypair._Myval2._Mysize )
              {
LABEL_61:
                v3 = (int)v110;
                break;
              }
              p_Right = &_Right;
              if ( _Right._Mypair._Myval2._Myres >= 0x10 )
                p_Right = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
              Ptr = &_Right;
              if ( _Right._Mypair._Myval2._Myres >= 0x10 )
                Ptr = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
              v24 = (std::string *)((char *)Ptr + _Right._Mypair._Myval2._Mysize);
              v25 = &_Right;
              if ( _Right._Mypair._Myval2._Myres >= 0x10 )
                v25 = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
              v26 = (char *)v24 - (char *)v25;
              v27 = 0i64;
              if ( v25 > v24 )
                v26 = 0i64;
              if ( v26 )
              {
                do
                {
                  p_Right->_Mypair._Myval2._Bx._Buf[v27] = toupper(v25->_Mypair._Myval2._Bx._Buf[v27]);
                  ++v27;
                }
                while ( v27 != v26 );
              }
              if ( &_Right >= Myend || Mylast > &_Right )
              {
                if ( Myend == (std::string *)v18 && !((v18 - (__int64)Myend) >> 5) )
                {
                  v36 = Myend - Mylast;
                  if ( v36 == 0x7FFFFFFFFFFFFFFi64 )
                    std::_Xlength_error("vector<T> too long");
                  v37 = v36 + 1;
                  v38 = (v18 - (__int64)Mylast) >> 5;
                  v39 = 0i64;
                  if ( 0x7FFFFFFFFFFFFFFi64 - (v38 >> 1) >= v38 )
                    v39 = v38 + (v38 >> 1);
                  if ( v39 >= v37 )
                    v37 = v39;
                  std::vector<std::string>::_Reallocate((std::vector<std::string> *)&_Val._Mypair._Myval2._Mylast, v37);
                  v18 = v109;
                  Myend = _Val._Mypair._Myval2._Myend;
                  Mylast = _Val._Mypair._Myval2._Mylast;
                }
                if ( !Myend )
                  goto LABEL_60;
                Myend->_Mypair._Myval2._Myres = 15i64;
                Myend->_Mypair._Myval2._Mysize = 0i64;
                if ( Myend->_Mypair._Myval2._Myres < 0x10 )
                  v34 = Myend;
                else
                  v34 = (std::string *)Myend->_Mypair._Myval2._Bx._Ptr;
                v35 = &_Right;
              }
              else
              {
                v28 = (char *)&_Right - (char *)Mylast;
                if ( Myend == (std::string *)v18 && !((v18 - (__int64)Myend) >> 5) )
                {
                  v29 = Myend - Mylast;
                  if ( v29 == 0x7FFFFFFFFFFFFFFi64 )
                    std::_Xlength_error("vector<T> too long");
                  v30 = v29 + 1;
                  v31 = (v18 - (__int64)Mylast) >> 5;
                  v32 = 0i64;
                  if ( 0x7FFFFFFFFFFFFFFi64 - (v31 >> 1) >= v31 )
                    v32 = v31 + (v31 >> 1);
                  if ( v32 >= v30 )
                    v30 = v32;
                  std::vector<std::string>::_Reallocate((std::vector<std::string> *)&_Val._Mypair._Myval2._Mylast, v30);
                  v18 = v109;
                  Myend = _Val._Mypair._Myval2._Myend;
                  Mylast = _Val._Mypair._Myval2._Mylast;
                }
                v33 = (std::string *)((char *)Mylast + (v28 & 0xFFFFFFFFFFFFFFE0ui64));
                if ( !Myend )
                  goto LABEL_60;
                Myend->_Mypair._Myval2._Myres = 15i64;
                Myend->_Mypair._Myval2._Mysize = 0i64;
                if ( Myend->_Mypair._Myval2._Myres < 0x10 )
                  v34 = Myend;
                else
                  v34 = (std::string *)Myend->_Mypair._Myval2._Bx._Ptr;
                v35 = v33;
              }
              v34->_Mypair._Myval2._Bx._Buf[0] = 0;
              std::string::_Assign_rv(Myend, v35);
LABEL_60:
              _Val._Mypair._Myval2._Myend = ++Myend;
              v40 = std::getline<char,std::char_traits<char>,std::allocator<char>>(&_Istr, &_Right, 44);
              if ( (v40->gap10[*(int *)(*(_QWORD *)v40->gap0 + 4i64)] & 6) != 0 )
                goto LABEL_61;
            }
          }
          std::vector<std::vector<std::string>>::push_back(
            (std::vector<std::vector<std::string>> *)&v112._Mypair._Myval2._Mylast,
            (std::vector<std::string> *)&_Val._Mypair._Myval2._Mylast);
          v43 = (AgDirectory::DirectoryEntry *)_Val._Mypair._Myval2._Mylast;
          if ( _Val._Mypair._Myval2._Mylast )
          {
            std::_Destroy_range1<std::allocator<std::string>,std::string *>(
              _Val._Mypair._Myval2._Mylast,
              _Val._Mypair._Myval2._Myend,
              v41,
              v42);
            std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
              v44,
              v43,
              (v109 - (__int64)v43) >> 5);
          }
          std::string::~string(&_Right);
          std::istringstream::~istringstream((std::istringstream *)&v121);
          v121.__vftable = (std::ios_vtbl *)&std::ios_base::`vftable';
          std::ios_base::_Ios_base_dtor(&v121);
        }
        Myres = (void *)_Val._Mypair._Myval2._Myfirst->_Mypair._Myval2._Myres;
        if ( Myres )
        {
          operator delete(Myres, v15);
          _Val._Mypair._Myval2._Myfirst->_Mypair._Myval2._Myres = 0i64;
        }
        v46 = v112._Mypair._Myval2._Mylast;
        v47 = (std::vector<std::string> *)(v112._Mypair._Myval2._Myend - v112._Mypair._Myval2._Mylast);
        v112._Mypair._Myval2._Myfirst = v47;
        v48 = operator new[](saturated_mul((unsigned __int64)v47, 0x118ui64));
        v50 = (unsigned __int64)v48;
        v110 = v48;
        if ( v48 )
          `vector constructor iterator'(
            v48,
            0x118ui64,
            (unsigned __int64)v47,
            (void *(__fastcall *)(void *))MovieTelopInfo::MovieTelopInfo);
        else
          v50 = 0i64;
        Myfirst = _Val._Mypair._Myval2._Myfirst;
        _Val._Mypair._Myval2._Myfirst->_Mypair._Myval2._Myres = v50;
        *(_DWORD *)_Val._Mypair._Myval2._Myfirst[1]._Mypair._Myval2._Bx._Buf = (_DWORD)v47;
        *(_DWORD *)&_Val._Mypair._Myval2._Myfirst[1]._Mypair._Myval2._Bx._Alias[4] = 0;
        *(_DWORD *)&_Val._Mypair._Myval2._Myfirst[1]._Mypair._Myval2._Bx._Alias[8] = -1;
        v52 = 0;
        if ( (int)v47 > 0 )
        {
          v53 = 0i64;
          do
          {
            v54 = 0;
            if ( v46[v53]._Mypair._Myval2._Mylast - v46[v53]._Mypair._Myval2._Myfirst )
            {
              v55 = 1;
              do
              {
                v56 = v46[v53]._Mypair._Myval2._Myfirst;
                v57 = (char **)&v56[v54];
                if ( (unsigned __int64)v57[3] >= 0x10 )
                  v57 = (char **)*v57;
                v58 = 0i64;
                while ( 1 )
                {
                  v59 = *((_BYTE *)v57 + v58++);
                  if ( v59 != aTime[v58 - 1] )
                    break;
                  if ( v58 == 5 )
                  {
                    v60 = &v56[v55];
                    if ( v60->_Mypair._Myval2._Myres < 0x10 )
                      v61 = &v56[v55];
                    else
                      v61 = (std::string *)v60->_Mypair._Myval2._Bx._Ptr;
                    if ( v61 )
                    {
                      if ( v60->_Mypair._Myval2._Myres >= 0x10 )
                        v60 = (std::string *)v60->_Mypair._Myval2._Bx._Ptr;
                      _Right._Mypair._Myval2._Myres = 15i64;
                      _Right._Mypair._Myval2._Mysize = 0i64;
                      _Right._Mypair._Myval2._Bx._Buf[0] = 0;
                      if ( v60->_Mypair._Myval2._Bx._Buf[0] )
                      {
                        v62 = -1i64;
                        do
                          ++v62;
                        while ( v60->_Mypair._Myval2._Bx._Buf[v62] );
                      }
                      else
                      {
                        v62 = 0i64;
                      }
                      std::string::assign(&_Right, v60->_Mypair._Myval2._Bx._Buf, v62);
                      v64 = std::stof(&_Right, v63);
                      v65 = 0i64;
                      if ( v64 >= 9.223372e18 )
                      {
                        v64 = v64 - 9.223372e18;
                        if ( v64 < 9.223372e18 )
                          v65 = 0x8000000000000000ui64;
                      }
                      *(_QWORD *)(280 * v53 + _Val._Mypair._Myval2._Myfirst->_Mypair._Myval2._Myres) = v65 + (unsigned int)(int)v64;
                      std::string::~string(&_Right);
                      Myfirst = _Val._Mypair._Myval2._Myfirst;
                    }
                    ++v54;
                    ++v55;
                    break;
                  }
                }
                v66 = v46[v53]._Mypair._Myval2._Myfirst;
                v67 = (char **)&v66[v54];
                if ( (unsigned __int64)v67[3] >= 0x10 )
                  v67 = (char **)*v67;
                v68 = 0i64;
                while ( 1 )
                {
                  v69 = *((_BYTE *)v67 + v68++);
                  if ( v69 != aKey[v68 - 1] )
                    break;
                  if ( v68 == 4 )
                  {
                    v70 = &v66[v55];
                    if ( v70->_Mypair._Myval2._Myres < 0x10 )
                      v71 = &v66[v55];
                    else
                      v71 = (std::string *)v70->_Mypair._Myval2._Bx._Ptr;
                    if ( v71 )
                    {
                      if ( v70->_Mypair._Myval2._Myres >= 0x10 )
                        v70 = (std::string *)v70->_Mypair._Myval2._Bx._Ptr;
                      v72 = (_BYTE *)(280i64 * v52 + Myfirst->_Mypair._Myval2._Myres + 8);
                      do
                      {
                        v73 = v70->_Mypair._Myval2._Bx._Buf[0];
                        *v72 = v70->_Mypair._Myval2._Bx._Buf[0];
                        v70 = (std::string *)((char *)v70 + 1);
                        ++v72;
                      }
                      while ( v73 );
                    }
                    ++v54;
                    ++v55;
                    break;
                  }
                }
                v74 = v46[v53]._Mypair._Myval2._Myfirst;
                v75 = (char **)&v74[v54];
                if ( (unsigned __int64)v75[3] >= 0x10 )
                  v75 = (char **)*v75;
                v76 = 0i64;
                do
                {
                  v77 = *((_BYTE *)v75 + v76++);
                  if ( v77 != aMode_2[v76 - 1] )
                  {
                    v82 = _Val._Mypair._Myval2._Myfirst;
                    goto LABEL_129;
                  }
                }
                while ( v76 != 5 );
                v78 = &v74[v55];
                if ( v78->_Mypair._Myval2._Myres < 0x10 )
                  v79 = &v74[v55];
                else
                  v79 = (std::string *)v78->_Mypair._Myval2._Bx._Ptr;
                if ( v79 )
                {
                  if ( v78->_Mypair._Myval2._Myres >= 0x10 )
                    v78 = (std::string *)v78->_Mypair._Myval2._Bx._Ptr;
                  _Right._Mypair._Myval2._Myres = 15i64;
                  _Right._Mypair._Myval2._Mysize = 0i64;
                  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
                  if ( v78->_Mypair._Myval2._Bx._Buf[0] )
                  {
                    v80 = -1i64;
                    do
                      ++v80;
                    while ( v78->_Mypair._Myval2._Bx._Buf[v80] );
                  }
                  else
                  {
                    v80 = 0i64;
                  }
                  std::string::assign(&_Right, v78->_Mypair._Myval2._Bx._Buf, v80);
                  v82 = _Val._Mypair._Myval2._Myfirst;
                  *(_DWORD *)(280 * v53 + _Val._Mypair._Myval2._Myfirst->_Mypair._Myval2._Myres + 272) = (int)std::stof(&_Right, v81);
                  std::string::~string(&_Right);
                }
                else
                {
                  v82 = _Val._Mypair._Myval2._Myfirst;
                }
                ++v54;
                ++v55;
LABEL_129:
                v83 = v46[v53]._Mypair._Myval2._Myfirst;
                v84 = (char **)&v83[v54];
                if ( (unsigned __int64)v84[3] >= 0x10 )
                  v84 = (char **)*v84;
                v85 = 0i64;
                while ( 1 )
                {
                  v86 = *((_BYTE *)v84 + v85++);
                  if ( v86 != aFade[v85 - 1] )
                    break;
                  if ( v85 == 5 )
                  {
                    v87 = &v83[v55];
                    if ( v87->_Mypair._Myval2._Myres < 0x10 )
                      v88 = &v83[v55];
                    else
                      v88 = (std::string *)v87->_Mypair._Myval2._Bx._Ptr;
                    if ( v88 )
                    {
                      if ( v87->_Mypair._Myval2._Myres >= 0x10 )
                        v87 = (std::string *)v87->_Mypair._Myval2._Bx._Ptr;
                      _Right._Mypair._Myval2._Myres = 15i64;
                      _Right._Mypair._Myval2._Mysize = 0i64;
                      _Right._Mypair._Myval2._Bx._Buf[0] = 0;
                      if ( v87->_Mypair._Myval2._Bx._Buf[0] )
                      {
                        v89 = -1i64;
                        do
                          ++v89;
                        while ( v87->_Mypair._Myval2._Bx._Buf[v89] );
                      }
                      else
                      {
                        v89 = 0i64;
                      }
                      std::string::assign(&_Right, v87->_Mypair._Myval2._Bx._Buf, v89);
                      *(_DWORD *)(280 * v53 + v82->_Mypair._Myval2._Myres + 276) = (int)std::stof(&_Right, v90);
                      std::string::~string(&_Right);
                    }
                    ++v54;
                    ++v55;
                    break;
                  }
                }
                v91 = v46[v53]._Mypair._Myval2._Myfirst;
                v92 = (char **)&v91[v54];
                if ( (unsigned __int64)v92[3] >= 0x10 )
                  v92 = (char **)*v92;
                v93 = 0i64;
                while ( 1 )
                {
                  v94 = *((_BYTE *)v92 + v93++);
                  if ( v94 != aColor_0[v93 - 1] )
                    break;
                  if ( v93 == 6 )
                  {
                    v95 = &v91[v55];
                    if ( v95->_Mypair._Myval2._Myres < 0x10 )
                      v96 = &v91[v55];
                    else
                      v96 = (std::string *)v95->_Mypair._Myval2._Bx._Ptr;
                    if ( v96 )
                    {
                      if ( v95->_Mypair._Myval2._Myres >= 0x10 )
                        v95 = (std::string *)v95->_Mypair._Myval2._Bx._Ptr;
                      _Right._Mypair._Myval2._Myres = 15i64;
                      _Right._Mypair._Myval2._Mysize = 0i64;
                      _Right._Mypair._Myval2._Bx._Buf[0] = 0;
                      if ( v95->_Mypair._Myval2._Bx._Buf[0] )
                      {
                        v97 = -1i64;
                        do
                          ++v97;
                        while ( v95->_Mypair._Myval2._Bx._Buf[v97] );
                      }
                      else
                      {
                        v97 = 0i64;
                      }
                      std::string::assign(&_Right, v95->_Mypair._Myval2._Bx._Buf, v97);
                      *(_DWORD *)(280 * v53 + v82->_Mypair._Myval2._Myres + 264) = (int)std::stof(&_Right, v98);
                      std::string::~string(&_Right);
                    }
                    ++v54;
                    ++v55;
                    break;
                  }
                }
                v99 = v46[v53]._Mypair._Myval2._Myfirst;
                v100 = &v99[v54];
                if ( v100->_Mypair._Myval2._Myres >= 0x10 )
                  v100 = (std::string *)v100->_Mypair._Myval2._Bx._Ptr;
                if ( !strcmp(v100->_Mypair._Myval2._Bx._Buf, "POSITION") )
                {
                  v101 = &v99[v55];
                  if ( v101->_Mypair._Myval2._Myres < 0x10 )
                    v102 = &v99[v55];
                  else
                    v102 = (std::string *)v101->_Mypair._Myval2._Bx._Ptr;
                  if ( v102 )
                  {
                    if ( v101->_Mypair._Myval2._Myres >= 0x10 )
                      v101 = (std::string *)v101->_Mypair._Myval2._Bx._Ptr;
                    _Right._Mypair._Myval2._Myres = 15i64;
                    _Right._Mypair._Myval2._Mysize = 0i64;
                    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
                    if ( v101->_Mypair._Myval2._Bx._Buf[0] )
                    {
                      v103 = -1i64;
                      do
                        ++v103;
                      while ( v101->_Mypair._Myval2._Bx._Buf[v103] );
                    }
                    else
                    {
                      v103 = 0i64;
                    }
                    std::string::assign(&_Right, v101->_Mypair._Myval2._Bx._Buf, v103);
                    *(_DWORD *)(280 * v53 + _Val._Mypair._Myval2._Myfirst->_Mypair._Myval2._Myres + 268) = (int)std::stof(&_Right, v104);
                    std::string::~string(&_Right);
                  }
                  ++v54;
                  ++v55;
                }
                ++v54;
                ++v55;
                v49 = v46[v53]._Mypair._Myval2._Mylast - v46[v53]._Mypair._Myval2._Myfirst;
                Myfirst = _Val._Mypair._Myval2._Myfirst;
              }
              while ( v54 < v49 );
            }
            ++v52;
            ++v53;
          }
          while ( v52 < *(_DWORD *)Myfirst[1]._Mypair._Myval2._Bx._Buf );
        }
        operator delete(_Ptr, v49);
        std::string::~string(&_Str);
        std::vector<std::vector<std::string>>::~vector<std::vector<std::string>>(
          (std::vector<std::vector<std::string>> *)&v112._Mypair._Myval2._Mylast,
          v105,
          v106,
          v107);
        std::istringstream::~istringstream((std::istringstream *)&v122.gap88[8]);
        *(_QWORD *)&v122.gap88[8] = &std::ios_base::`vftable';
        std::ios_base::_Ios_base_dtor((std::ios_base *)&v122.gap88[8]);
      }
    }
  }
}

void __fastcall MovieData::LoadGFX(MovieData *this, MOVIE_ID movieID)
{
  int v2; // er8
  const MovieDataInfo *v3; // rax
  const MovieDataInfo *v4; // rbx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *p_m_FutureGFXMovie; // rdi
  const char *gfxFileName; // rdx
  unsigned __int64 v7; // r8
  extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache *v8; // rcx
  const void *v9; // r9
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *m_ptr; // rcx
  char *Ptr; // rcx
  char *v12; // rax
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> other; // [rsp+20h] [rbp-78h] BYREF
  std::string v14; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+50h] [rbp-48h]
  std::string _Right; // [rsp+60h] [rbp-38h] BYREF

  v15 = -2i64;
  v2 = 0;
  v3 = movieData;
  while ( v3->id != movieID )
  {
    ++v2;
    if ( (__int64)++v3 >= (__int64)achivement_data::Map )
    {
      v4 = 0i64;
      goto LABEL_6;
    }
  }
  v4 = &movieData[v2];
LABEL_6:
  if ( !this->m_GFXMovie.m_movieProxy.m_ptr && v4->gfxFileName )
  {
    p_m_FutureGFXMovie = (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_FutureGFXMovie;
    extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(&this->m_FutureGFXMovie);
    gfxFileName = v4->gfxFileName;
    _Right._Mypair._Myval2._Myres = 15i64;
    _Right._Mypair._Myval2._Mysize = 0i64;
    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( *gfxFileName )
    {
      v7 = -1i64;
      do
        ++v7;
      while ( gfxFileName[v7] );
    }
    else
    {
      v7 = 0i64;
    }
    std::string::assign(&_Right, gfxFileName, v7);
    other.m_isNoCache = 0;
    v14._Mypair._Myval2._Myres = 15i64;
    v14._Mypair._Myval2._Mysize = 0i64;
    v14._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v14, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::getCachedOrLoadStart(
      v8,
      (extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> *)&other.m_body,
      &v14,
      v9);
    extension::BasicFutureObject<OGLSecondary,void>::operator=(p_m_FutureGFXMovie, &other);
    m_ptr = other.m_body.m_ptr;
    if ( other.m_body.m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&other.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
    }
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
    {
      Ptr = _Right._Mypair._Myval2._Bx._Ptr;
      if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v12 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        if ( v12 >= _Right._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v12) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v12) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(Ptr);
    }
  }
}

extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > *__fastcall extension::FutureObjectJobManager<extension::GFXIMovieData,void>::LoadStart(
        extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > *result,
        const std::string *name,
        const std::string *optstr,
        const void *__formal)
{
  extension::AsyncContent<extension::GFXIMovieData> *v7; // rax
  extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > shared; // [rsp+58h] [rbp+20h] BYREF

  shared.m_ptr = (extension::AsyncContent<extension::GFXIMovieData> *)__formal;
  shared.m_ptr = (extension::AsyncContent<extension::GFXIMovieData> *)operator new(0x68ui64);
  extension::AsyncContent<OGLSecondary>::AsyncContent<OGLSecondary>(
    (extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *)shared.m_ptr,
    name,
    optstr);
  result->m_ptr = v7;
  shared.m_ptr = v7;
  if ( v7 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 1ui64);
  extension::FutureObjectJobManager<extension::GFXIMovieData,void>::EnqueueAsyncJob((extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >)&shared);
  return result;
}

bool __fastcall MovieData::Play(MovieData *this, MOVIE_ID id)
{
  void (__fastcall *v2)(unsigned __int64); // rsi
  int v5; // ecx
  const MovieDataInfo *v6; // rax
  const MovieDataInfo *v7; // rdi
  unsigned __int8 v8; // dl
  int v9; // er8
  int v10; // er9
  bool result; // al
  CMediaPlayer *v12; // rcx
  bool v13; // zf

  v2 = 0i64;
  v5 = 0;
  v6 = movieData;
  while ( v6->id != id )
  {
    ++v5;
    if ( (__int64)++v6 >= (__int64)achivement_data::Map )
    {
      v7 = 0i64;
      goto LABEL_6;
    }
  }
  v7 = &movieData[v5];
LABEL_6:
  if ( !AppMain::Sound_IsLoadComplete(*(AppMain **)&AppMain::pApp) )
    return 0;
  if ( --this->m_waitFrame > 0 )
    return 0;
  v12 = (CMediaPlayer *)*(unsigned __int8 *)v7->movieFileName;
  if ( (_BYTE)v12 )
  {
    v13 = !this->m_Audio;
    this->m_Video = 1;
    if ( !v13 )
      v2 = _playAudioFunc;
    MovieData::mvplayer->m_PlayAudioFunc = v2;
    CMediaPlayer::play(v12, v7->movieFileName, v9, v10);
  }
  else
  {
    this->m_Video = 0;
    if ( this->m_Audio )
      _playAudioFunc(0i64);
    MovieData::mvplayer->m_PlayAudioFunc = 0i64;
    CMediaPlayer::stop(v12, v8);
  }
  this->m_bPlay = SKIP|PLAY;
  result = 1;
  this->m_currentMovie = id;
  return result;
}

void __fastcall MovieData::RemoveTelop(MovieData *this, bool fadeout)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value presult; // [rsp+30h] [rbp-238h] BYREF
  __int64 v5; // [rsp+60h] [rbp-208h]
  Scaleform::GFx::Value ptr[10]; // [rsp+70h] [rbp-1F8h] BYREF

  v5 = -2i64;
  `eh vector constructor iterator'(
    ptr,
    0x30ui64,
    0xAui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  presult.pObjectInterface = 0i64;
  presult.Type = VT_None;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr && this->m_Telop )
  {
    if ( (ptr[0].Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr[0].pObjectInterface, ptr, ptr[0].mValue.pStringManaged);
      ptr[0].pObjectInterface = 0i64;
    }
    ptr[0].Type = VT_Int64;
    ptr[0].mValue.BValue = 0;
    m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.RemoveTelop") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.RemoveTelop", &presult, ptr, 1u);
  }
  if ( (presult.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      presult.pObjectInterface,
      &presult,
      presult.mValue.pStringManaged);
    presult.pObjectInterface = 0i64;
  }
  presult.Type = VT_None;
  `eh vector destructor iterator'(ptr, 0x30ui64, 0xAui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall MovieData::SetTelop(MovieData *this, const char *telop, bool fadeIn)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value presult; // [rsp+30h] [rbp-248h] BYREF
  __int64 v8; // [rsp+60h] [rbp-218h]
  Scaleform::GFx::Value ptr; // [rsp+70h] [rbp-208h] BYREF
  Scaleform::GFx::Value v10; // [rsp+A0h] [rbp-1D8h] BYREF

  v8 = -2i64;
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0xAui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  presult.pObjectInterface = 0i64;
  presult.Type = VT_None;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr && this->m_Telop )
  {
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = 6;
    ptr.mValue.pString = telop;
    if ( (v10.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v10.pObjectInterface, &v10, v10.mValue.pStringManaged);
      v10.pObjectInterface = 0i64;
    }
    v10.Type = VT_Int64;
    v10.mValue.BValue = fadeIn;
    m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.SetTelop") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.SetTelop", &presult, &ptr, 2u);
  }
  if ( (presult.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      presult.pObjectInterface,
      &presult,
      presult.mValue.pStringManaged);
    presult.pObjectInterface = 0i64;
  }
  presult.Type = VT_None;
  `eh vector destructor iterator'(&ptr, 0x30ui64, 0xAui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall MovieData::SetTelopMode(MovieData *this, int mode)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value presult; // [rsp+30h] [rbp-238h] BYREF
  __int64 v6; // [rsp+60h] [rbp-208h]
  Scaleform::GFx::Value ptr[10]; // [rsp+70h] [rbp-1F8h] BYREF

  v6 = -2i64;
  `eh vector constructor iterator'(
    ptr,
    0x30ui64,
    0xAui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  presult.pObjectInterface = 0i64;
  presult.Type = VT_None;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr && this->m_Telop )
  {
    if ( (ptr[0].Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr[0].pObjectInterface, ptr, ptr[0].mValue.pStringManaged);
      ptr[0].pObjectInterface = 0i64;
    }
    ptr[0].Type = VT_Float;
    ptr[0].mValue.IValue = mode;
    m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.SetTelopMode") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.SetTelopMode", &presult, ptr, 1u);
  }
  if ( (presult.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      presult.pObjectInterface,
      &presult,
      presult.mValue.pStringManaged);
    presult.pObjectInterface = 0i64;
  }
  presult.Type = VT_None;
  `eh vector destructor iterator'(ptr, 0x30ui64, 0xAui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall MovieData::SoundPlayImpl(MovieData *this, unsigned __int64 time_ms)
{
  const MovieDataInfo *v2; // rax
  int v4; // er8
  const MovieDataInfo *v5; // rdx
  float v6; // xmm3_4
  bool v7; // [rsp+20h] [rbp-18h]

  v2 = movieData;
  v4 = 0;
  while ( v2->id != this->m_currentMovie )
  {
    ++v4;
    if ( (__int64)++v2 >= (__int64)achivement_data::Map )
      return;
  }
  v5 = &movieData[v4];
  if ( v5 && *(_QWORD *)&AppMain::pApp != -2197144i64 )
  {
    v6 = (float)(int)time_ms;
    if ( (time_ms & 0x8000000000000000ui64) != 0i64 )
      v6 = v6 + 1.8446744e19;
    extension::SoundList::playBGMByName(
      (extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 2197144i64),
      v5->soundName,
      0.0,
      v6 / 1000.0,
      v7);
  }
}

void __fastcall MovieData::Stop(MovieData *this, bool soundStop)
{
  CMediaPlayer *v2; // rbx
  AgMoviePlayer *m_ptr; // rcx
  AgReferenceCount *m_ref; // rax
  AgMoviePlayer *v5; // rcx
  extension::SoundManager *v6; // rax
  AgPointer<AgMoviePlayer> v7; // [rsp+28h] [rbp-20h] BYREF
  extension::SoundManager *v8; // [rsp+50h] [rbp+8h]

  this->m_bPlay = 4;
  this->m_requestMovie = MOVIE_ID_NONE;
  MovieData::RemoveTelop(this, soundStop);
  v2 = MovieData::mvplayer;
  if ( MovieData::mvplayer )
  {
    m_ptr = MovieData::mvplayer->m_currentMovie.m_ptr;
    if ( m_ptr )
    {
      AgMoviePlayer::stop(m_ptr);
      m_ref = v2->m_currentMovie.m_ref;
      v5 = v2->m_currentMovie.m_ptr;
      v2->m_currentMovie.m_ref = 0i64;
      v2->m_currentMovie.m_ptr = 0i64;
      v7.m_ref = m_ref;
      v7.m_ptr = v5;
      AgPointer<AgMoviePlayer>::~AgPointer<AgMoviePlayer>(&v7);
    }
  }
  v6 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v8 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v8);
    extension::SoundManager::the_instance = v6;
  }
  extension::SoundManager::stopBGM(v6, 0.0);
}

std::string *__fastcall extension::FutureObjectJobManager<extension::exsound_detail::SoundBankImpl,void>::Stringize(
        std::string *result,
        const void *__formal)
{
  std::string *v2; // rax

  result->_Mypair._Myval2._Myres = 15i64;
  v2 = result;
  result->_Mypair._Myval2._Mysize = 0i64;
  result->_Mypair._Myval2._Bx._Buf[0] = 0;
  return v2;
}

void __fastcall MovieData::Update(MovieData *this)
{
  const MovieDataInfo *v2; // rax
  MOVIE_ID m_currentMovie; // ecx
  AppMain *v4; // rcx
  AppMain *v5; // rdi
  bool v6; // dl
  int m_timeOut; // eax
  MovieData *v8; // rcx
  MOVIE_ID m_requestMovie; // edx
  MOVIE_ID v10; // edx
  AgMoviePlayer *m_ptr; // rcx

  v2 = movieData;
  m_currentMovie = this->m_currentMovie;
  do
  {
    if ( v2->id == m_currentMovie )
      break;
    ++v2;
  }
  while ( (__int64)v2 < (__int64)achivement_data::Map );
  MovieData::UpdateGFX(this);
  if ( !MovieData::mvplayer )
    return;
  v5 = *(AppMain **)&AppMain::pApp;
  if ( this->m_requestMovie != MOVIE_ID_NONE )
  {
    if ( !AppMain::Sound_IsPlaying(v4) || (m_timeOut = this->m_timeOut, m_timeOut > 300) )
    {
      MovieData::RemoveTelop(this, v6);
      m_requestMovie = this->m_requestMovie;
      if ( this->m_currentMovie != m_requestMovie )
      {
        if ( MovieData::HasSoundBank(v8, m_requestMovie) )
        {
          MovieData::LoadBank(this, v10);
          goto LABEL_16;
        }
        this->m_currentMovie = v10;
      }
      if ( AppMain::Sound_IsLoadComplete(v5) && MovieData::Play(this, this->m_currentMovie) )
        this->m_requestMovie = MOVIE_ID_NONE;
      goto LABEL_16;
    }
    this->m_timeOut = m_timeOut + 1;
  }
LABEL_16:
  m_ptr = MovieData::mvplayer->m_currentMovie.m_ptr;
  if ( (!m_ptr || !(unsigned __int8)AgMoviePlayer::isFinished(m_ptr)) && this->m_Video )
    CMediaPlayer::exe((CMediaPlayer *)m_ptr);
  if ( this->m_bPlay == (SKIP|PLAY) )
  {
    MovieData::UpdateTelop(this);
    if ( this->m_GFXMovie.m_movieProxy.m_ptr )
      extension::GFXIMovie::advance(&this->m_GFXMovie, 0.016666668);
  }
}

void __fastcall MovieData::UpdateGFX(MovieData *this, extension::AsyncStatus::Step a2)
{
  extension::AsyncContent<extension::GFXIMovieData> *m_ptr; // rax
  extension::AsyncContent<extension::GFXIMovieData> *v4; // rbx
  extension::GFXIMovieData *Myval2; // rbp
  extension::gfxi_detail::MovieProxy *v6; // rbx
  extension::AsyncContent<extension::GFXIMovieData> *v7; // rbx
  extension::gfxi_detail::MovieProxy *v8; // rcx
  extension::gfxi_detail::MovieProxy *v9; // rbx
  extension::gfxi_detail::MovieProxy *v10; // rbx
  extension::GFXIMovie result; // [rsp+48h] [rbp+10h] BYREF

  m_ptr = this->m_FutureGFXMovie.m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased || (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) != 0 )
  {
    v4 = this->m_FutureGFXMovie.m_body.m_ptr->m_content.m_ptr;
    if ( v4 )
    {
      if ( !v4->m_isDataReleased )
      {
        if ( (v4->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v4->m_status, a2);
        if ( v4->m_data._Mypair._Myval2 )
        {
          Myval2 = 0i64;
          if ( !this->m_GFXMovie.m_movieProxy.m_ptr )
          {
            v6 = this->m_GFXMovie.m_movieProxy.m_ptr;
            this->m_GFXMovie.m_movieProxy.m_ptr = 0i64;
            if ( v6 )
            {
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64) == 1 )
              {
                extension::gfxi_detail::MovieProxy::~MovieProxy(v6);
                operator delete(v6, 0xE8ui64);
              }
            }
          }
          v7 = this->m_FutureGFXMovie.m_body.m_ptr->m_content.m_ptr;
          if ( v7 && !v7->m_isDataReleased )
          {
            if ( (v7->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&v7->m_status, a2);
            Myval2 = v7->m_data._Mypair._Myval2;
          }
          v8 = extension::GFXIMovieData::createInstance(Myval2, &result)->m_movieProxy.m_ptr;
          if ( v8 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 1ui64);
          v9 = this->m_GFXMovie.m_movieProxy.m_ptr;
          this->m_GFXMovie.m_movieProxy.m_ptr = v8;
          if ( v9 && _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            extension::gfxi_detail::MovieProxy::~MovieProxy(v9);
            operator delete(v9, 0xE8ui64);
          }
          v10 = result.m_movieProxy.m_ptr;
          if ( result.m_movieProxy.m_ptr
            && _InterlockedExchangeAdd64((volatile signed __int64 *)result.m_movieProxy.m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            if ( v10 )
            {
              extension::gfxi_detail::MovieProxy::~MovieProxy(v10);
              operator delete(v10, 0xE8ui64);
            }
          }
          extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(&this->m_FutureGFXMovie);
        }
      }
    }
  }
}

void __fastcall MovieData::UpdateTelop(MovieData *this)
{
  CMediaPlayer *v1; // rax
  AgMoviePlayer *m_ptr; // rcx
  AgMoviePlayer *v4; // rcx
  __int64 v5; // rbx
  int v6; // eax
  int m_TelopNum; // ecx
  int v8; // edi
  unsigned __int64 v9; // rdx
  MovieTelopInfo *m_TelopInfo; // r8
  MovieTelopInfo *v11; // rax
  int v12; // edi
  MovieTelopInfo *v13; // rdx
  char v14; // al
  bool v15; // zf
  __int64 v16; // rbx

  v1 = MovieData::mvplayer;
  if ( MovieData::mvplayer )
  {
    m_ptr = MovieData::mvplayer->m_currentMovie.m_ptr;
    if ( m_ptr )
    {
      if ( (unsigned __int8)AgMoviePlayer::isFinished(m_ptr) )
        return;
      v1 = MovieData::mvplayer;
    }
    if ( this->m_Telop && this->m_TelopInfo )
    {
      v4 = v1->m_currentMovie.m_ptr;
      v5 = 0i64;
      v6 = v4 ? AgMoviePlayer::getElapsedTimeMS(v4) : 0;
      m_TelopNum = this->m_TelopNum;
      v8 = 0;
      v9 = v6;
      if ( m_TelopNum > 0 )
      {
        m_TelopInfo = this->m_TelopInfo;
        v11 = m_TelopInfo;
        do
        {
          if ( v11->time > v9 )
            break;
          ++v8;
          ++v11;
        }
        while ( v8 < m_TelopNum );
        if ( v8 )
        {
          v12 = v8 - 1;
          v13 = &m_TelopInfo[v12];
          while ( 1 )
          {
            v14 = v13->key[v5++];
            v15 = v14 == aNone[v5 - 1];
            if ( v14 != aNone[v5 - 1] )
              break;
            if ( v5 == 5 )
            {
              v15 = v14 == aNone[4];
              break;
            }
          }
          if ( v15 )
            v12 = -2;
          if ( v12 != this->m_TelopCurrent )
          {
            if ( v12 >= 0 )
            {
              v16 = v12;
              MovieData::SetTelopMode(this, m_TelopInfo[v16].mode);
              MovieData::SetTelop(this, this->m_TelopInfo[v16].key, this->m_TelopInfo[v16].fade != 0);
              this->m_TelopCurrent = v12;
            }
            else
            {
              MovieData::RemoveTelop(this, (bool)v13);
              this->m_TelopCurrent = -2;
            }
          }
        }
      }
    }
  }
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

std::locale::facet *__fastcall std::locale::facet::_Decref(std::locale::facet *this)
{
  std::locale::facet *result; // rax

  result = 0i64;
  if ( !_InterlockedAdd((volatile signed __int32 *)&this->_Myrefs, 0xFFFFFFFF) )
    return this;
  return result;
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

unsigned __int64 __fastcall std::ctype<char>::_Getcat(const std::locale::facet **_Ppf, const std::locale *_Ploc)
{
  char *v4; // rdi
  std::locale::_Locimp *Ptr; // rcx
  const char *Myptr; // rdx
  _Ctypevec result; // [rsp+28h] [rbp-90h] BYREF
  std::_Locinfo v9; // [rsp+48h] [rbp-70h] BYREF

  if ( _Ppf && !*_Ppf )
  {
    v4 = (char *)operator new(0x30ui64);
    Ptr = _Ploc->_Ptr;
    if ( Ptr )
    {
      Myptr = Ptr->_Name._Myptr;
      if ( !Myptr )
        Myptr = &Ptr->_Name._Nul;
    }
    else
    {
      Myptr = &pnewText;
    }
    std::_Locinfo::_Locinfo(&v9, Myptr);
    *((_DWORD *)v4 + 2) = 0;
    *(_QWORD *)v4 = &std::ctype<char>::`vftable';
    *(_Ctypevec *)(v4 + 16) = *Getctype(&result);
    *_Ppf = (const std::locale::facet *)v4;
    std::_Locinfo::~_Locinfo(&v9);
  }
  return 2i64;
}

__int64 __fastcall std::streambuf::_Gnavail(std::streambuf *this)
{
  if ( *this->_IGnext )
    return *this->_IGcount;
  else
    return 0i64;
}

void __fastcall std::locale::facet::_Incref(std::locale::facet *this)
{
  _InterlockedIncrement((volatile signed __int32 *)&this->_Myrefs);
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

void __fastcall std::stringbuf::_Init(std::stringbuf *this, const char *_Ptr, unsigned __int64 _Count, int _State)
{
  void *v7; // rax
  _QWORD *v8; // rdi
  bool v9; // zf
  int Mystate; // eax
  char *v11; // rdx

  if ( (this->_Mystate & 6) != 6 )
  {
    if ( _Count < 0x1000 )
    {
      v8 = operator new(_Count);
    }
    else
    {
      if ( _Count + 39 <= _Count )
        std::_Xbad_alloc();
      v7 = operator new(_Count + 39);
      v8 = (_QWORD *)(((unsigned __int64)v7 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
      *(v8 - 1) = v7;
    }
    memmove(v8, _Ptr, _Count);
    v9 = (this->_Mystate & 4) == 0;
    this->_Seekhigh = (char *)v8 + _Count;
    if ( v9 )
    {
      *this->_IGfirst = (char *)v8;
      *this->_IGnext = (char *)v8;
      *this->_IGcount = _Count;
    }
    Mystate = this->_Mystate;
    if ( (Mystate & 2) == 0 )
    {
      v11 = (char *)v8;
      if ( (Mystate & 0x18) != 0 )
        v11 = (char *)v8 + _Count;
      *this->_IPfirst = (char *)v8;
      *this->_IPnext = v11;
      *this->_IPcount = _Count + (_DWORD)v8 - (_DWORD)v11;
      if ( !*this->_IGnext )
      {
        *this->_IGfirst = (char *)v8;
        *this->_IGnext = 0i64;
        *this->_IGcount = (int)v8;
      }
    }
    this->_Mystate |= 1u;
  }
}

void __fastcall std::ios_base::_Init(std::ios_base *this)
{
  std::locale *v2; // rbx

  this->_Ploc = 0i64;
  this->_Stdstr = 0i64;
  this->_Except = 0;
  this->_Fmtfl = 513;
  this->_Prec = 6i64;
  this->_Wide = 0i64;
  this->_Arr = 0i64;
  this->_Calls = 0i64;
  std::ios_base::clear(this, 0, 0);
  v2 = (std::locale *)operator new(0x10ui64);
  v2->_Ptr = std::locale::_Init(1);
  this->_Ploc = v2;
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

char __fastcall std::istream::_Ipfx(std::istream *this, bool _Noskip)
{
  std::ios_base *v4; // rcx
  std::ostream *Stdstr; // rcx
  std::ios_base *v6; // rcx
  const std::locale *v7; // rax
  std::locale::facet *v8; // rdi
  std::_Facet_base *v9; // rax
  __int64 v10; // rcx
  unsigned __int8 *v11; // rdx
  int v12; // eax
  std::ios_base *v13; // rcx
  int v14; // edx
  int v16; // edx
  std::locale result; // [rsp+30h] [rbp-18h] BYREF

  v4 = (std::ios_base *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)];
  if ( !v4->_Mystate )
  {
    Stdstr = (std::ostream *)v4[1]._Stdstr;
    if ( Stdstr )
      std::ostream::flush(Stdstr);
    if ( !_Noskip )
    {
      v6 = (std::ios_base *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)];
      if ( (v6->_Fmtfl & 1) != 0 )
      {
        v7 = std::ios_base::getloc(v6, &result);
        v8 = std::use_facet<std::ctype<char>>(v7);
        if ( result._Ptr )
        {
          v9 = result._Ptr->_Decref(result._Ptr);
          if ( v9 )
            ((void (__fastcall *)(std::_Facet_base *, __int64))v9->~_Facet_base)(v9, 1i64);
        }
        v10 = *(_QWORD *)&this->gap10[*(int *)(*(_QWORD *)this->gap0 + 4i64) + 56];
        v11 = **(unsigned __int8 ***)(v10 + 56);
        if ( v11 && **(int **)(v10 + 80) > 0 )
          v12 = *v11;
        else
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 48i64))(v10);
        while ( v12 != -1 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)&v8[1]._Myrefs + 2i64 * (unsigned __int8)v12) & 0x48) == 0 )
            goto LABEL_19;
          v12 = std::streambuf::snextc(*(std::streambuf **)&this->gap10[*(int *)(*(_QWORD *)this->gap0 + 4i64) + 56]);
        }
        v13 = (std::ios_base *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)];
        v14 = v13->_Mystate | 5;
        if ( v13[1].__vftable )
          v14 = v13->_Mystate | 1;
        std::ios_base::clear(v13, v14, 0);
      }
    }
LABEL_19:
    v4 = (std::ios_base *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)];
    if ( !v4->_Mystate )
      return 1;
  }
  v16 = v4->_Mystate | 6;
  if ( v4[1].__vftable )
    v16 = v4->_Mystate | 2;
  std::ios_base::clear(v4, v16, 0);
  return 0;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

std::string *__fastcall std::_System_error::_Makestr(
        std::string *result,
        std::error_code *_Errcode,
        std::string *_Message)
{
  const std::string *v6; // rax
  char *Ptr; // rcx
  char *v8; // rax
  std::string *v9; // rax
  std::string resulta; // [rsp+38h] [rbp-40h] BYREF

  if ( _Message->_Mypair._Myval2._Mysize )
    std::string::append(_Message, ": ", 2ui64);
  v6 = std::error_code::message(_Errcode, &resulta);
  std::string::append(_Message, v6, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  if ( resulta._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = resulta._Mypair._Myval2._Bx._Ptr;
    if ( resulta._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (resulta._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v8 = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
      if ( v8 >= resulta._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  if ( result->_Mypair._Myval2._Myres < 0x10 )
    v9 = result;
  else
    v9 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  v9->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::_Assign_rv(result, _Message);
  std::string::~string(_Message);
  return result;
}

void __fastcall std::ostream::_Osfx(std::ostream *this)
{
  __int64 v2; // rdx
  std::ios_base *v3; // rcx
  int Mystate; // edx

  v2 = *(int *)(*(_QWORD *)this->gap0 + 4i64);
  if ( !*(_DWORD *)&this->gap0[v2 + 16]
    && (this->gap0[v2 + 24] & 2) != 0
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)&this->gap0[v2 + 72] + 104i64))(*(_QWORD *)&this->gap0[v2 + 72]) == -1 )
  {
    v3 = (std::ios_base *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)];
    Mystate = v3->_Mystate | 4;
    if ( v3[1].__vftable )
      Mystate = v3->_Mystate;
    std::ios_base::clear(v3, Mystate | 4, 0);
  }
}

__int64 __fastcall std::streambuf::_Pnavail(std::streambuf *this)
{
  if ( *this->_IPnext )
    return *this->_IPcount;
  else
    return 0i64;
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

void __fastcall std::vector<std::string>::_Reallocate(std::vector<std::string> *this, unsigned __int64 _Count)
{
  std::string *v4; // r14
  std::_Wrap_alloc<std::allocator<std::string > > *v5; // r9
  std::_Wrap_alloc<std::allocator<std::string > > *v6; // r8
  std::integral_constant<bool,0> v7; // r9
  signed __int64 v8; // rbx
  std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *v9; // rcx

  v4 = std::_Wrap_alloc<std::allocator<std::string>>::allocate(
         (std::_Wrap_alloc<std::allocator<std::string > > *)this,
         _Count);
  std::_Uninitialized_move_al_unchecked1<std::string *,std::string *,std::allocator<std::string>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    v5);
  v8 = (char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Destroy_range1<std::allocator<std::string>,std::string *>(
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Mylast,
      v6,
      v7);
    std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
      v9,
      (AgDirectory::DirectoryEntry *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = (std::string *)((char *)v4 + (v8 & 0xFFFFFFFFFFFFFFE0ui64));
  this->_Mypair._Myval2._Myfirst = v4;
}

void __fastcall std::vector<std::vector<std::string>>::_Reallocate(
        std::vector<std::vector<std::string>> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<std::vector<std::string> > > *a4)
{
  std::vector<std::string> *v6; // rbx
  unsigned __int64 v7; // rcx
  std::string *v8; // rax
  std::vector<std::string> *Mylast; // r9
  signed __int64 v10; // r14

  if ( _Count )
  {
    if ( _Count > 0xAAAAAAAAAAAAAAAi64 )
      std::_Xbad_alloc();
    v7 = 24 * _Count;
    if ( 24 * _Count < 0x1000 )
    {
      v6 = (std::vector<std::string> *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = (std::string *)operator new(v7 + 39);
      v6 = (std::vector<std::string> *)((unsigned __int64)&v8[1]._Mypair._Myval2._Bx._Alias[7] & 0xFFFFFFFFFFFFFFE0ui64);
      v6[-1]._Mypair._Myval2._Myend = v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<std::vector<std::string> *,std::vector<std::string> *,std::allocator<std::vector<std::string>>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v6,
    a4);
  Mylast = this->_Mypair._Myval2._Mylast;
  v10 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Destroy_range1<std::allocator<std::vector<std::string>>,std::vector<std::string> *>(
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Mylast,
      (std::_Wrap_alloc<std::allocator<std::vector<std::string> > > *)((unsigned __int64)((unsigned __int128)(((char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 63),
      (std::integral_constant<bool,0>)Mylast);
    std::allocator<AgJsonNode>::deallocate(
      (std::allocator<AgJsonNode> *)((char *)this->_Mypair._Myval2._Myend - (char *)this->_Mypair._Myval2._Myfirst),
      (AgJsonNode *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v6[_Count];
  this->_Mypair._Myval2._Mylast = &v6[v10];
  this->_Mypair._Myval2._Myfirst = v6;
}

void __fastcall std::vector<std::string>::_Reserve(std::vector<std::string> *this, unsigned __int64 _Count)
{
  std::string *Myend; // r10
  std::string *Mylast; // r8
  std::string *Myfirst; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rcx

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( Myend - Mylast < _Count )
  {
    Myfirst = this->_Mypair._Myval2._Myfirst;
    v6 = Mylast - Myfirst;
    if ( 0x7FFFFFFFFFFFFFFi64 - v6 < _Count )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + _Count;
    v8 = Myend - Myfirst;
    v9 = 0i64;
    if ( 0x7FFFFFFFFFFFFFFi64 - (v8 >> 1) >= v8 )
      v9 = v8 + (v8 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<std::string>::_Reallocate(this, v7);
  }
}

void __fastcall std::vector<std::vector<std::string>>::_Reserve(
        std::vector<std::vector<std::string>> *this,
        unsigned __int64 _Count)
{
  std::vector<std::string> *Myend; // rcx
  std::vector<std::string> *Mylast; // r8
  signed __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( !(Myend - Mylast) )
  {
    v5 = Mylast - this->_Mypair._Myval2._Myfirst;
    if ( v5 == 0xAAAAAAAAAAAAAAAi64 )
      std::_Xlength_error("vector<T> too long");
    v6 = v5 + 1;
    v7 = (unsigned __int128)(((char *)Myend - (char *)this->_Mypair._Myval2._Myfirst) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
    v8 = 0i64;
    v9 = ((unsigned __int64)v7 >> 63) + (v7 >> 2);
    if ( 0xAAAAAAAAAAAAAAAi64 - (v9 >> 1) >= v9 )
      v8 = v9 + (v9 >> 1);
    if ( v8 >= v6 )
      v6 = v8;
    std::vector<std::vector<std::string>>::_Reallocate(
      this,
      v6,
      v6,
      (std::_Wrap_alloc<std::allocator<std::vector<std::string> > > *)this);
  }
}

void __fastcall std::stringbuf::_Tidy(std::stringbuf *this)
{
  char *v2; // rcx
  char *v3; // rdx
  char *v4; // rcx
  char *v5; // rax
  unsigned __int64 v6; // rcx

  if ( (this->_Mystate & 1) != 0 )
  {
    v2 = *this->_IPnext;
    if ( v2 )
      v3 = &v2[*this->_IPcount];
    else
      v3 = &(*this->_IGnext)[*this->_IGcount];
    v4 = *this->_IGfirst;
    if ( (unsigned __int64)(v3 - v4) >= 0x1000 )
    {
      if ( ((unsigned __int8)v4 & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v5 = (char *)*((_QWORD *)v4 - 1);
      if ( v5 >= v4 )
        invalid_parameter_noinfo_noreturn();
      v6 = v4 - v5;
      if ( v6 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v6 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      v4 = v5;
    }
    operator delete(v4);
  }
  *this->_IGfirst = 0i64;
  *this->_IGnext = 0i64;
  *this->_IGcount = 0;
  *this->_IPfirst = 0i64;
  *this->_IPnext = 0i64;
  *this->_IPcount = 0;
  this->_Mystate &= ~1u;
  this->_Seekhigh = 0i64;
}

void __fastcall _playAudioFunc(unsigned __int64 time_ms)
{
  MovieData *v2; // rax
  MovieData *v3; // [rsp+48h] [rbp+10h]

  v2 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v3 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData(v3);
    MovieData::movieData = v2;
  }
  MovieData::SoundPlayImpl(v2, time_ms);
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

std::string *__fastcall std::_Wrap_alloc<std::allocator<std::string>>::allocate(
        std::_Wrap_alloc<std::allocator<std::string > > *this,
        unsigned __int64 _Count)
{
  unsigned __int64 v3; // rdx
  void *v4; // rax

  if ( !_Count )
    return 0i64;
  if ( _Count > 0x7FFFFFFFFFFFFFFi64 )
    std::_Xbad_alloc();
  v3 = 32 * _Count;
  if ( v3 < 0x1000 )
    return (std::string *)operator new(v3);
  if ( v3 + 39 <= v3 )
    std::_Xbad_alloc();
  v4 = operator new(v3 + 39);
  *(_QWORD *)((((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64) - 8) = v4;
  return (std::string *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
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

void __fastcall std::ios_base::clear(std::ios_base *this, int _State, bool _Reraise)
{
  int v3; // edx
  int v4; // eax
  char *Ptr; // rcx
  char *v6; // rax
  char *v7; // rcx
  char *v8; // rax
  char *v9; // rcx
  char *v10; // rax
  std::error_code v11; // [rsp+20h] [rbp-19h] BYREF
  std::_System_error pExceptionObject; // [rsp+30h] [rbp-9h] BYREF
  __int64 v13; // [rsp+58h] [rbp+1Fh]
  std::string v14; // [rsp+60h] [rbp+27h] BYREF

  v13 = -2i64;
  v3 = _State & 0x17;
  this->_Mystate = v3;
  v4 = v3 & this->_Except;
  if ( v4 )
  {
    if ( _Reraise )
      CxxThrowException(0i64, 0i64);
    if ( (v4 & 4) != 0 )
    {
      v11._Myval = 1;
      v11._Mycat = (const std::error_category *)std::_Immortalize<std::_Iostream_error_category>();
      v14._Mypair._Myval2._Myres = 15i64;
      v14._Mypair._Myval2._Mysize = 0i64;
      v14._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v14, "ios_base::badbit set", 0x14ui64);
      std::_System_error::_System_error(&pExceptionObject, &v11, &v14);
      if ( v14._Mypair._Myval2._Myres >= 0x10 )
      {
        Ptr = v14._Mypair._Myval2._Bx._Ptr;
        if ( v14._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (v14._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v6 = (char *)*((_QWORD *)v14._Mypair._Myval2._Bx._Ptr - 1);
          if ( v6 >= v14._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(v14._Mypair._Myval2._Bx._Ptr - v6) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(v14._Mypair._Myval2._Bx._Ptr - v6) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          Ptr = (char *)*((_QWORD *)v14._Mypair._Myval2._Bx._Ptr - 1);
        }
        operator delete(Ptr);
      }
      pExceptionObject.__vftable = (std::_System_error_vtbl *)&std::ios_base::failure::`vftable';
      CxxThrowException(&pExceptionObject, &TI5_AVfailure_ios_base_std__);
    }
    if ( (v4 & 2) != 0 )
    {
      v11._Myval = 1;
      v11._Mycat = (const std::error_category *)std::_Immortalize<std::_Iostream_error_category>();
      v14._Mypair._Myval2._Myres = 15i64;
      v14._Mypair._Myval2._Mysize = 0i64;
      v14._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v14, "ios_base::failbit set", 0x15ui64);
      std::_System_error::_System_error(&pExceptionObject, &v11, &v14);
      if ( v14._Mypair._Myval2._Myres >= 0x10 )
      {
        v7 = v14._Mypair._Myval2._Bx._Ptr;
        if ( v14._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (v14._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v8 = (char *)*((_QWORD *)v14._Mypair._Myval2._Bx._Ptr - 1);
          if ( v8 >= v14._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(v14._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(v14._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          v7 = (char *)*((_QWORD *)v14._Mypair._Myval2._Bx._Ptr - 1);
        }
        operator delete(v7);
      }
      pExceptionObject.__vftable = (std::_System_error_vtbl *)&std::ios_base::failure::`vftable';
      CxxThrowException(&pExceptionObject, &TI5_AVfailure_ios_base_std__);
    }
    v11._Myval = 1;
    v11._Mycat = (const std::error_category *)std::_Immortalize<std::_Iostream_error_category>();
    v14._Mypair._Myval2._Myres = 15i64;
    v14._Mypair._Myval2._Mysize = 0i64;
    v14._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v14, "ios_base::eofbit set", 0x14ui64);
    std::_System_error::_System_error(&pExceptionObject, &v11, &v14);
    if ( v14._Mypair._Myval2._Myres >= 0x10 )
    {
      v9 = v14._Mypair._Myval2._Bx._Ptr;
      if ( v14._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v14._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v10 = (char *)*((_QWORD *)v14._Mypair._Myval2._Bx._Ptr - 1);
        if ( v10 >= v14._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v14._Mypair._Myval2._Bx._Ptr - v10) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v14._Mypair._Myval2._Bx._Ptr - v10) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v9 = (char *)*((_QWORD *)v14._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v9);
    }
    pExceptionObject.__vftable = (std::_System_error_vtbl *)&std::ios_base::failure::`vftable';
    CxxThrowException(&pExceptionObject, &TI5_AVfailure_ios_base_std__);
  }
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

void __fastcall std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
        std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *this,
        AgDirectory::DirectoryEntry *_Ptr,
        unsigned __int64 _Count)
{
  AgDirectory::DirectoryEntry *m_internalData; // rax
  char *v4; // rdx

  if ( _Count > 0x7FFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 32 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    m_internalData = (AgDirectory::DirectoryEntry *)_Ptr[-1].m_internalData;
    if ( m_internalData >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)m_internalData);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = m_internalData;
  }
  operator delete(_Ptr);
}

void __fastcall std::allocator<AgJsonNode>::deallocate(
        std::allocator<AgJsonNode> *this,
        AgJsonNode *_Ptr,
        unsigned __int64 _Count)
{
  AgJsonNodeData *m_ptr; // rax
  char *v4; // rdx

  if ( _Count > 0xAAAAAAAAAAAAAAAi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 24 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    m_ptr = _Ptr[-1].m_data.m_ptr;
    if ( m_ptr >= (AgJsonNodeData *)_Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)m_ptr);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = (AgJsonNode *)m_ptr;
  }
  operator delete(_Ptr);
}

std::error_condition *__fastcall std::error_category::default_error_condition(
        std::error_category *this,
        std::error_condition *result,
        int _Errval)
{
  std::error_condition *v3; // rax

  result->_Myval = _Errval;
  v3 = result;
  result->_Mycat = this;
  return v3;
}

void __fastcall extension::GFXIMovie::dispose(extension::GFXIMovie *this)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx

  m_ptr = this->m_movieProxy.m_ptr;
  this->m_movieProxy.m_ptr = 0i64;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::gfxi_detail::MovieProxy::~MovieProxy(m_ptr);
      operator delete(m_ptr, 0xE8ui64);
    }
  }
}

__int64 __fastcall std::ctype<char>::do_narrow(std::ctype<char> *this, char _Byte)
{
  return (unsigned __int8)_Byte;
}

const char *__fastcall std::ctype<char>::do_narrow(
        std::ctype<char> *this,
        const char *_First,
        const char *_Last,
        char __formal,
        char *_Dest)
{
  memmove(_Dest, _First, _Last - _First);
  return _Last;
}

int __fastcall std::ctype<char>::do_tolower(std::ctype<char> *this, char _Ch)
{
  return Tolower((unsigned __int8)_Ch, &this->_Ctype);
}

char *__fastcall std::ctype<char>::do_tolower(std::ctype<char> *this, char *_First, const char *_Last)
{
  __int64 v3; // rdi
  signed __int64 v4; // rsi
  char *v5; // rbx
  _Ctypevec *p_Ctype; // rbp

  v3 = 0i64;
  v4 = _Last - _First;
  v5 = _First;
  if ( _First > _Last )
    v4 = 0i64;
  if ( v4 )
  {
    p_Ctype = &this->_Ctype;
    do
    {
      *v5 = Tolower((unsigned __int8)*v5, p_Ctype);
      ++v3;
      ++v5;
    }
    while ( v3 != v4 );
  }
  return v5;
}

int __fastcall std::ctype<char>::do_toupper(std::ctype<char> *this, char _Ch)
{
  return Toupper((unsigned __int8)_Ch, &this->_Ctype);
}

char *__fastcall std::ctype<char>::do_toupper(std::ctype<char> *this, char *_First, const char *_Last)
{
  __int64 v3; // rdi
  signed __int64 v4; // rsi
  char *v5; // rbx
  _Ctypevec *p_Ctype; // rbp

  v3 = 0i64;
  v4 = _Last - _First;
  v5 = _First;
  if ( _First > _Last )
    v4 = 0i64;
  if ( v4 )
  {
    p_Ctype = &this->_Ctype;
    do
    {
      *v5 = Toupper((unsigned __int8)*v5, p_Ctype);
      ++v3;
      ++v5;
    }
    while ( v3 != v4 );
  }
  return v5;
}

const char *__fastcall std::ctype<char>::do_widen(
        std::ctype<char> *this,
        const char *_First,
        const char *_Last,
        char *_Dest)
{
  memmove(_Dest, _First, _Last - _First);
  return _Last;
}

bool __fastcall std::error_category::equivalent(std::error_category *this, const std::error_code *_Code, int _Errval)
{
  return this->_Addr == _Code->_Mycat->_Addr && _Code->_Myval == _Errval;
}

bool __fastcall std::error_category::equivalent(
        std::error_category *this,
        int _Errval,
        const std::error_condition *_Cond)
{
  std::error_condition *v4; // rax
  char v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = this->default_error_condition(this, v6, (unsigned int)_Errval);
  return v4->_Mycat->_Addr == _Cond->_Mycat->_Addr && v4->_Myval == _Cond->_Myval;
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

std::ostream *__fastcall std::ostream::flush(std::ostream *this)
{
  __int64 v2; // rcx
  std::ios_base *v3; // rcx
  int Mystate; // edx
  __int64 v5; // rcx
  std::ostream::sentry v7; // [rsp+28h] [rbp-20h] BYREF

  if ( *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) + 72] )
  {
    std::ostream::sentry::sentry(&v7, this);
    if ( v7._Ok )
    {
      v2 = *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) + 72];
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 104i64))(v2) == -1 )
      {
        v3 = (std::ios_base *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)];
        Mystate = v3->_Mystate | 4;
        if ( v3[1].__vftable )
          Mystate = v3->_Mystate;
        std::ios_base::clear(v3, Mystate | 4, 0);
      }
    }
    if ( !std::uncaught_exception() )
      std::ostream::_Osfx(v7._Myostr);
    v5 = *(_QWORD *)&v7._Myostr->gap0[*(int *)(*(_QWORD *)v7._Myostr + 4i64) + 72];
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  }
  return this;
}

extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> *__fastcall extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::getCachedOrLoadStart(
        extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache *this,
        extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> *result,
        std::string *name,
        const void *opt)
{
  volatile signed __int64 *v6; // rsi
  std::string *v7; // rax
  char *Ptr; // rcx
  char *v9; // rax
  unsigned __int64 v10; // rax
  bool v11; // r12
  std::string *v12; // rax
  std::string *v13; // rax
  char *v14; // rcx
  char *v15; // rax
  char *v16; // rcx
  char *v17; // rax
  const void *v18; // rdx
  unsigned __int64 Mysize; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 Myres; // rdx
  std::string *p_Keyval; // rax
  std::string *v23; // rax
  std::string *v24; // rax
  extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *v25; // rax
  extension::AsyncStatus::Step v26; // edx
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *m_ptr; // rcx
  extension::AsyncContent<extension::GFXIMovieData> *v28; // rax
  extension::AsyncContent<extension::GFXIMovieData> *v29; // rbx
  std::string *v30; // rcx
  std::string *v31; // rax
  std::string *v32; // rax
  std::string *v33; // rcx
  std::string *v34; // rax
  std::string *v35; // rax
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v36; // rbx
  const void *v37; // r9
  extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > *v38; // rax
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v39; // rcx
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v40; // rax
  extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> *v41; // rax
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v42; // rcx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> >,void *> *Next; // rbx
  std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v44; // r8
  extension::RefCountableWeakSupportBase::WeakProxy *v45; // rax
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v47; // [rsp+28h] [rbp-D8h]
  extension::RefCountableWeakSupportBase::WeakProxy *block; // [rsp+30h] [rbp-D0h]
  extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > v49; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C0h]
  extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> *v51; // [rsp+48h] [rbp-B8h]
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v52; // [rsp+50h] [rbp-B0h]
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v53; // [rsp+60h] [rbp-A0h] BYREF
  extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache> *v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+70h] [rbp-90h]
  std::string *v56; // [rsp+78h] [rbp-88h]
  std::string _Keyval; // [rsp+80h] [rbp-80h] BYREF
  std::string v58; // [rsp+A0h] [rbp-60h] BYREF
  std::string _Right; // [rsp+C0h] [rbp-40h] BYREF
  std::string resulta; // [rsp+E0h] [rbp-20h] BYREF
  std::string v61; // [rsp+100h] [rbp+0h] BYREF
  std::string v62; // [rsp+120h] [rbp+20h] BYREF
  std::string v63; // [rsp+140h] [rbp+40h] BYREF
  std::string v64; // [rsp+160h] [rbp+60h] BYREF
  std::string v65; // [rsp+180h] [rbp+80h] BYREF

  v50 = -2i64;
  v51 = result;
  v56 = name;
  v6 = 0i64;
  v7 = extension::AsyncWorker::NormalizeAssetPath(&resulta, name);
  std::string::assign(name, v7);
  if ( resulta._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = resulta._Mypair._Myval2._Bx._Ptr;
    if ( resulta._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (resulta._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v9 = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
      if ( v9 >= resulta._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  v10 = std::string::find(name, "obm", 0i64, 3ui64);
  v11 = v10 != -1i64;
  if ( v10 != -1i64 )
  {
    v12 = std::string::substr(name, &v61, 0i64, name->_Mypair._Myval2._Mysize - 3);
    v13 = std::operator+<char>(&v58, v12, "dds");
    std::string::assign(name, v13);
    if ( v58._Mypair._Myval2._Myres >= 0x10 )
    {
      v14 = v58._Mypair._Myval2._Bx._Ptr;
      if ( v58._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v58._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v15 = (char *)*((_QWORD *)v58._Mypair._Myval2._Bx._Ptr - 1);
        if ( v15 >= v58._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v58._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v58._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v14 = (char *)*((_QWORD *)v58._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v14);
    }
    v58._Mypair._Myval2._Myres = 15i64;
    v58._Mypair._Myval2._Mysize = 0i64;
    v58._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( v61._Mypair._Myval2._Myres >= 0x10 )
    {
      v16 = v61._Mypair._Myval2._Bx._Ptr;
      if ( v61._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v61._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v17 = (char *)*((_QWORD *)v61._Mypair._Myval2._Bx._Ptr - 1);
        if ( v17 >= v61._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v61._Mypair._Myval2._Bx._Ptr - v17) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v61._Mypair._Myval2._Bx._Ptr - v17) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v16 = (char *)*((_QWORD *)v61._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v16);
    }
  }
  extension::AsyncWorker::ToLowerCasePath(&_Keyval, name);
  extension::FutureObjectJobManager<extension::exsound_detail::SoundBankImpl,void>::Stringize(&_Right, v18);
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
  v54 = &extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache>;
  v55 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache>);
  v25 = (extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *)std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
                                                                                            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.m_cachedObjectMap,
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
            ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
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
    if ( v11 )
    {
      v30 = name->_Mypair._Myval2._Myres < 0x10 ? name : (std::string *)name->_Mypair._Myval2._Bx._Ptr;
      if ( !(unsigned __int8)CFile::exists(v30->_Mypair._Myval2._Bx._Buf) )
      {
        v31 = std::string::substr(name, &v63, 0i64, name->_Mypair._Myval2._Mysize - 3);
        v32 = std::operator+<char>(&v62, v31, "dds");
        std::string::assign(name, v32);
        std::string::~string(&v62);
        std::string::~string(&v63);
        v33 = name->_Mypair._Myval2._Myres < 0x10 ? name : (std::string *)name->_Mypair._Myval2._Bx._Ptr;
        if ( !(unsigned __int8)CFile::exists(v33->_Mypair._Myval2._Bx._Buf) )
        {
          v34 = std::string::substr(name, &v65, 0i64, name->_Mypair._Myval2._Mysize - 3);
          v35 = std::operator+<char>(&v64, v34, "png");
          std::string::assign(name, v35);
          std::string::~string(&v64);
          std::string::~string(&v65);
        }
      }
    }
    v36 = (extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *)operator new(0x18ui64);
    v52 = v36;
    v38 = extension::FutureObjectJobManager<extension::GFXIMovieData,void>::LoadStart(&v49, name, &_Right, v37);
    extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::Body(
      v36,
      (extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >)v38);
    v39 = result->m_ptr;
    result->m_ptr = v40;
    if ( v39
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v39->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))v39->~RefCountableWeakSupportBase)(
        v39,
        1i64);
    }
    v41 = std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.m_cachedObjectMap,
            &_Keyval);
    v42 = result->m_ptr;
    v47 = result->m_ptr;
    if ( result->m_ptr )
    {
      v6 = (volatile signed __int64 *)v42->m_refCount.m_ptr;
      if ( v6 )
      {
        _InterlockedExchangeAdd64(v6, 1ui64);
        v42 = v47;
      }
    }
    v41->m_ptr = (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *)v42;
    block = v41->m_proxy.m_ptr;
    v41->m_proxy.m_ptr = (extension::RefCountableWeakSupportBase::WeakProxy *)v6;
    if ( block && _InterlockedExchangeAdd64((volatile signed __int64 *)block, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      operator delete(block, 0x18ui64);
  }
  Next = extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead->_Next;
  while ( Next != extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead )
  {
    v44._Ptr = (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)Next;
    v45 = Next->_Myval.second.m_proxy.m_ptr;
    Next = Next->_Next;
    if ( !v45 || !v45->m_sharedCount.m_value._My_val )
      std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>>,0>>::erase(
        (std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.m_cachedObjectMap,
        &v53,
        v44);
  }
  extension::lockable_detail::LockUnlock(
    &extension::BasicFutureObject<extension::GFXIMovieData,void>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache>,
    -1);
  std::string::~string(&_Right);
  std::string::~string(&_Keyval);
  std::string::~string(name);
  return result;
}

std::locale *__fastcall std::ios_base::getloc(std::ios_base *this, std::locale *result)
{
  std::locale::_Locimp *Ptr; // rcx

  Ptr = this->_Ploc->_Ptr;
  result->_Ptr = Ptr;
  Ptr->_Incref(Ptr);
  return result;
}

bool __fastcall extension::BasicFutureObject<extension::GFXIMovieData,void>::hasData(
        extension::BasicFutureObject<Image,extension::FutureImageOption> *this,
        extension::AsyncStatus::Step a2)
{
  extension::AsyncContent<Image> *m_ptr; // rax
  extension::AsyncContent<Image> *v3; // rbx

  m_ptr = this->m_body.m_ptr->m_content.m_ptr;
  if ( m_ptr && !m_ptr->m_isDataReleased && (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    return 0;
  v3 = this->m_body.m_ptr->m_content.m_ptr;
  if ( !v3 || v3->m_isDataReleased )
    return 0;
  if ( (v3->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    extension::AsyncStatus::waitFor(&v3->m_status, a2);
  return v3->m_data._Mypair._Myval2 != 0;
}

void __fastcall std::ios::init(std::ios *this, std::streambuf *_Strbuf, bool _Isstd)
{
  const std::locale *v6; // rax
  __int64 v7; // rdx
  std::locale::facet *v8; // rbx
  std::_Facet_base *v9; // rax
  std::locale result; // [rsp+28h] [rbp-20h] BYREF

  std::ios_base::_Init(this);
  this->_Mystrbuf = _Strbuf;
  this->_Tiestr = 0i64;
  v6 = std::ios_base::getloc(this, &result);
  v8 = std::use_facet<std::ctype<char>>(v6);
  if ( result._Ptr )
  {
    v9 = result._Ptr->_Decref(result._Ptr);
    if ( v9 )
      ((void (__fastcall *)(std::_Facet_base *, __int64))v9->~_Facet_base)(v9, 1i64);
  }
  LOBYTE(v7) = 32;
  this->_Fillch = ((__int64 (__fastcall *)(std::locale::facet *, __int64))v8->__vftable[2]._Decref)(v8, v7);
  if ( !this->_Mystrbuf )
    std::ios_base::clear(this, this->_Mystate | 4, 0);
  if ( _Isstd )
    std::ios_base::_Addstd(this);
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

std::string *__fastcall std::_Generic_error_category::message(
        std::_Generic_error_category *this,
        std::string *result,
        int _Errcode)
{
  unsigned __int64 v3; // rbx
  const char *v5; // rax

  v3 = 0i64;
  v5 = std::_Syserror_map(_Errcode);
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  result->_Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *v5 )
  {
    v3 = -1i64;
    do
      ++v3;
    while ( v5[v3] );
  }
  std::string::assign(result, v5, v3);
  return result;
}

std::string *__fastcall std::_Iostream_error_category::message(
        std::_Iostream_error_category *this,
        std::string *result,
        int _Errcode)
{
  if ( _Errcode == 1 )
  {
    result->_Mypair._Myval2._Myres = 15i64;
    result->_Mypair._Myval2._Mysize = 0i64;
    result->_Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(result, "iostream stream error", 0x15ui64);
  }
  else
  {
    std::_Generic_error_category::message(this, result, _Errcode);
  }
  return result;
}

std::string *__fastcall std::error_code::message(std::error_code *this, std::string *result)
{
  this->_Mycat->message((std::error_category *)this->_Mycat, result, this->_Myval);
  return result;
}

const char *__fastcall std::_Generic_error_category::name(std::_Generic_error_category *this)
{
  return "generic";
}

const char *__fastcall std::_Iostream_error_category::name(std::_Iostream_error_category *this)
{
  return "iostream";
}

__int64 __fastcall Scaleform::UnopenedFile::Read(Concurrency::details::ExternalContextBase *this)
{
  return 0xFFFFFFFFi64;
}

__int64 __fastcall std::stringbuf::overflow(std::stringbuf *this, int _Meta)
{
  int Mystate; // eax
  __int64 result; // rax
  char **IPnext; // r9
  char *v7; // rdx
  char *Seekhigh; // r8
  int v9; // ecx
  char *v10; // rcx
  int *IPcount; // rdx
  __int64 v12; // r8
  char **v13; // rcx
  char *v14; // rdx
  size_t v15; // rdi
  unsigned __int64 v16; // rcx
  int v17; // er15
  unsigned __int8 *v18; // rax
  const void **IGfirst; // rcx
  char *v20; // rsi
  AgSuspendingEvent *v21; // r14
  char **v22; // rax
  bool v23; // zf
  char **IGnext; // rax
  char **IPfirst; // rcx
  char *v26; // rdx
  char *v27; // rdx
  char *v28; // r9
  int v29; // er10
  int *v30; // rax
  char **v31; // rcx
  char *v32; // rdx

  Mystate = this->_Mystate;
  if ( (Mystate & 2) != 0 )
    return 0xFFFFFFFFi64;
  if ( _Meta == -1 )
    return 0i64;
  if ( (Mystate & 8) != 0 )
  {
    IPnext = this->_IPnext;
    v7 = *IPnext;
    if ( *IPnext )
    {
      Seekhigh = this->_Seekhigh;
      if ( v7 < Seekhigh )
      {
        v9 = *this->_IPcount;
        *IPnext = Seekhigh;
        *this->_IPcount = (_DWORD)v7 + v9 - (_DWORD)Seekhigh;
      }
    }
  }
  v10 = *this->_IPnext;
  if ( v10 )
  {
    IPcount = this->_IPcount;
    v12 = *IPcount;
    if ( v10 < &v10[v12] )
    {
      *IPcount = v12 - 1;
      v13 = this->_IPnext;
      v14 = (*v13)++;
      result = (unsigned int)_Meta;
      *v14 = _Meta;
      return result;
    }
  }
  if ( v10 )
    v15 = (size_t)&v10[*this->_IPcount - (unsigned __int64)*this->_IGfirst];
  else
    v15 = 0i64;
  v16 = v15 >> 1;
  if ( v15 >> 1 >= 0x20 )
  {
    if ( !v16 )
      return 0xFFFFFFFFi64;
  }
  else
  {
    v16 = 32i64;
  }
  do
  {
    if ( 0x7FFFFFFF - v16 >= v15 )
      break;
    v16 >>= 1;
  }
  while ( v16 );
  if ( !v16 )
    return 0xFFFFFFFFi64;
  v17 = v16 + v15;
  v18 = std::_Wrap_alloc<std::allocator<unsigned char>>::allocate(
          (std::_Wrap_alloc<std::allocator<unsigned char> > *)&this->_Al,
          v16 + v15);
  IGfirst = (const void **)this->_IGfirst;
  v20 = (char *)v18;
  v21 = (AgSuspendingEvent *)*IGfirst;
  if ( v15 )
  {
    memmove(v18, *IGfirst, v15);
    IPfirst = this->_IPfirst;
    this->_Seekhigh += v20 - (char *)v21;
    v26 = (char *)(*this->_IPnext - (char *)v21);
    *IPfirst += v20 - (char *)v21;
    v27 = &v26[(_QWORD)v20];
    *this->_IPnext = v27;
    *this->_IPcount = v17 + (_DWORD)v20 - (_DWORD)v27;
    if ( (this->_Mystate & 4) != 0 )
    {
      *this->_IGfirst = v20;
      *this->_IGnext = 0i64;
      *this->_IGcount = (int)v20;
    }
    else
    {
      v28 = &v20[(unsigned __int64)(*this->_IGnext - (char *)v21)];
      v29 = (int)&(*this->_IPnext)[-(_DWORD)v28 + 1];
      *this->_IGfirst = v20;
      *this->_IGnext = v28;
      *this->_IGcount = v29;
    }
  }
  else
  {
    v22 = this->_IPfirst;
    this->_Seekhigh = v20;
    *v22 = v20;
    *this->_IPnext = v20;
    *this->_IPcount = v17;
    v23 = (this->_Mystate & 4) == 0;
    *this->_IGfirst = v20;
    IGnext = this->_IGnext;
    if ( v23 )
    {
      *IGnext = v20;
      *this->_IGcount = 1;
    }
    else
    {
      *IGnext = 0i64;
      *this->_IGcount = (int)v20;
    }
  }
  if ( (this->_Mystate & 1) != 0 )
    std::_Wrap_alloc<std::allocator<unsigned char>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgSuspendingEvent> > *)&this->_Al,
      v21,
      v15);
  v30 = this->_IPcount;
  this->_Mystate |= 1u;
  --*v30;
  v31 = this->_IPnext;
  v32 = (*v31)++;
  result = (unsigned int)_Meta;
  *v32 = _Meta;
  return result;
}

__int64 __fastcall std::stringbuf::pbackfail(std::stringbuf *this, int _Meta)
{
  char *v2; // r8
  __int64 result; // rax

  v2 = *this->_IGnext;
  if ( !v2 || v2 <= *this->_IGfirst || _Meta != -1 && (_BYTE)_Meta != *(v2 - 1) && (this->_Mystate & 2) != 0 )
    return 0xFFFFFFFFi64;
  ++*this->_IGcount;
  --*this->_IGnext;
  if ( _Meta == -1 )
    return 0i64;
  result = (unsigned int)_Meta;
  **this->_IGnext = _Meta;
  return result;
}

void __fastcall std::vector<std::vector<std::string>>::push_back(
        std::vector<std::vector<std::string>> *this,
        std::vector<std::string> *_Val)
{
  std::vector<std::string> *Mylast; // rcx
  std::vector<std::string> *Myfirst; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  std::vector<std::string> *v9; // r8
  std::vector<std::string> *v10; // rdx
  std::vector<std::string> *v11; // rdx

  Mylast = this->_Mypair._Myval2._Mylast;
  if ( _Val >= Mylast || (Myfirst = this->_Mypair._Myval2._Myfirst, this->_Mypair._Myval2._Myfirst > _Val) )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<std::vector<std::string>>::_Reserve(this, (unsigned __int64)_Val);
    v11 = this->_Mypair._Myval2._Mylast;
    if ( v11 )
    {
      v11->_Mypair._Myval2._Myfirst = 0i64;
      v11->_Mypair._Myval2._Mylast = 0i64;
      v11->_Mypair._Myval2._Myend = 0i64;
      v11->_Mypair._Myval2._Myfirst = _Val->_Mypair._Myval2._Myfirst;
      v11->_Mypair._Myval2._Mylast = _Val->_Mypair._Myval2._Mylast;
      v11->_Mypair._Myval2._Myend = _Val->_Mypair._Myval2._Myend;
      _Val->_Mypair._Myval2._Myfirst = 0i64;
      _Val->_Mypair._Myval2._Mylast = 0i64;
      _Val->_Mypair._Myval2._Myend = 0i64;
    }
  }
  else
  {
    v6 = (unsigned __int128)(((char *)_Val - (char *)Myfirst) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
    v7 = (__int64)((unsigned __int128)(((char *)_Val - (char *)Myfirst) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 2;
    v8 = (v7 >> 63) + v7;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<std::vector<std::string>>::_Reserve(this, v6);
    v9 = this->_Mypair._Myval2._Mylast;
    if ( v9 )
    {
      v10 = &this->_Mypair._Myval2._Myfirst[v8];
      v9->_Mypair._Myval2._Myfirst = 0i64;
      v9->_Mypair._Myval2._Mylast = 0i64;
      v9->_Mypair._Myval2._Myend = 0i64;
      v9->_Mypair._Myval2._Myfirst = v10->_Mypair._Myval2._Myfirst;
      v9->_Mypair._Myval2._Mylast = v10->_Mypair._Myval2._Mylast;
      v9->_Mypair._Myval2._Myend = v10->_Mypair._Myval2._Myend;
      v10->_Mypair._Myval2._Myfirst = 0i64;
      v10->_Mypair._Myval2._Mylast = 0i64;
      v10->_Mypair._Myval2._Myend = 0i64;
      ++this->_Mypair._Myval2._Mylast;
      return;
    }
  }
  ++this->_Mypair._Myval2._Mylast;
}

void __fastcall extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(
        extension::BasicFutureObject<extension::GFXIMovieData,void> *this)
{
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *m_ptr; // rax
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v3; // rcx
  extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> result; // [rsp+28h] [rbp-10h] BYREF

  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty(&result);
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
      ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))v3->~RefCountableWeakSupportBase)(
        v3,
        1i64);
    m_ptr = result.m_ptr;
  }
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))result.m_ptr->~RefCountableWeakSupportBase)(
        result.m_ptr,
        1i64);
  }
}

std::fpos<_Mbstatet> *__fastcall std::streambuf::seekpos(
        std::streambuf *this,
        std::fpos<_Mbstatet> *result,
        std::fpos<_Mbstatet> *__formal,
        int a4)
{
  result->_Myoff = std::_BADOFF;
  result->_Fpos = 0i64;
  result->_Mystate = 0i64;
  return result;
}

std::fpos<_Mbstatet> *__fastcall std::stringbuf::seekoff(
        std::stringbuf *this,
        std::fpos<_Mbstatet> *result,
        __int64 _Off,
        int _Way,
        int _Which)
{
  char **IPnext; // rdi
  char *v8; // rax
  char **IGnext; // rsi
  __int64 v10; // rdx
  char **IGfirst; // rcx
  int v12; // edx
  char **v13; // r9
  char *v14; // rbx
  char *v15; // rdx
  int v16; // ecx
  char **v17; // rcx
  int v18; // edx

  IPnext = this->_IPnext;
  v8 = *IPnext;
  if ( *IPnext && this->_Seekhigh < v8 )
    this->_Seekhigh = v8;
  if ( (_Which & 1) != 0 )
  {
    IGnext = this->_IGnext;
    if ( *IGnext )
    {
      v10 = std::_BADOFF;
      switch ( _Way )
      {
        case 2:
          _Off += this->_Seekhigh - *this->_IGfirst;
LABEL_13:
          if ( _Off >= 0 )
          {
            IGfirst = this->_IGfirst;
            if ( _Off <= this->_Seekhigh - *IGfirst )
            {
              v12 = _Off + *(_DWORD *)IGfirst - *(_DWORD *)IGnext;
              *this->_IGcount -= v12;
              *this->_IGnext += v12;
              if ( (_Which & 2) != 0 )
              {
                v13 = this->_IPnext;
                v14 = *v13;
                if ( *v13 )
                {
                  v15 = *this->_IGnext;
                  v16 = *this->_IPcount;
                  *v13 = v15;
                  *this->_IPcount = (_DWORD)v14 + v16 - (_DWORD)v15;
                }
              }
              goto LABEL_32;
            }
          }
LABEL_29:
          _Off = v10;
          goto LABEL_32;
        case 1:
          if ( (_Which & 2) == 0 )
          {
            _Off += *IGnext - *this->_IGfirst;
            goto LABEL_13;
          }
          break;
        case 0:
          goto LABEL_13;
      }
      _Off = std::_BADOFF;
      goto LABEL_13;
    }
  }
  if ( (_Which & 2) != 0 && *IPnext )
  {
    v10 = std::_BADOFF;
    if ( _Way == 2 )
    {
      _Off += this->_Seekhigh - *this->_IGfirst;
    }
    else if ( _Way == 1 )
    {
      _Off += *IPnext - *this->_IGfirst;
    }
    else if ( _Way )
    {
      _Off = std::_BADOFF;
    }
    if ( _Off >= 0 )
    {
      v17 = this->_IGfirst;
      if ( _Off <= this->_Seekhigh - *v17 )
      {
        v18 = _Off + *(_DWORD *)v17 - *(_DWORD *)IPnext;
        *this->_IPcount -= v18;
        *this->_IPnext += v18;
        goto LABEL_32;
      }
    }
    goto LABEL_29;
  }
  if ( _Off )
    _Off = std::_BADOFF;
LABEL_32:
  result->_Myoff = _Off;
  result->_Fpos = 0i64;
  result->_Mystate = 0i64;
  return result;
}

std::fpos<_Mbstatet> *__fastcall std::stringbuf::seekpos(
        std::stringbuf *this,
        std::fpos<_Mbstatet> *result,
        std::fpos<_Mbstatet> *_Ptr,
        int _Mode)
{
  char **IPnext; // rdi
  __int64 v7; // r10
  char *v8; // rax
  char **IGnext; // r8
  char **IGfirst; // rdi
  int v11; // edx
  char **v12; // r8
  char *v13; // r9
  char *v14; // rdx
  int v15; // ecx
  char **v16; // r8
  int v17; // edx

  IPnext = this->_IPnext;
  v7 = _Ptr->_Myoff + _Ptr->_Fpos;
  v8 = *IPnext;
  if ( *IPnext && this->_Seekhigh < v8 )
    this->_Seekhigh = v8;
  if ( v7 != std::_BADOFF )
  {
    if ( (_Mode & 1) != 0 && (IGnext = this->_IGnext, *IGnext) )
    {
      if ( v7 >= 0 )
      {
        IGfirst = this->_IGfirst;
        if ( v7 <= this->_Seekhigh - *IGfirst )
        {
          v11 = *(_DWORD *)IGfirst + v7 - *(_DWORD *)IGnext;
          *this->_IGcount -= v11;
          *this->_IGnext += v11;
          if ( (_Mode & 2) != 0 )
          {
            v12 = this->_IPnext;
            v13 = *v12;
            if ( *v12 )
            {
              v14 = *this->_IGnext;
              v15 = *this->_IPcount;
              *v12 = v14;
              *this->_IPcount = (_DWORD)v13 + v15 - (_DWORD)v14;
            }
          }
          goto LABEL_18;
        }
      }
    }
    else if ( (_Mode & 2) != 0 )
    {
      if ( *IPnext )
      {
        if ( v7 >= 0 )
        {
          v16 = this->_IGfirst;
          if ( v7 <= this->_Seekhigh - *v16 )
          {
            v17 = *(_DWORD *)v16 + v7 - *(_DWORD *)IPnext;
            *this->_IPcount -= v17;
            *this->_IPnext += v17;
            goto LABEL_18;
          }
        }
      }
    }
    v7 = std::_BADOFF;
  }
LABEL_18:
  result->_Myoff = v7;
  result->_Fpos = 0i64;
  result->_Mystate = 0i64;
  return result;
}

void __fastcall Scaleform::Render::SubImage::GetAsImage(std::_Wrap_alloc<std::allocator<AgString> > *this)
{
  ;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

__int64 __fastcall std::streambuf::snextc(std::streambuf *this)
{
  int *IGcount; // rdx
  char **IGnext; // rax
  char *v4; // rcx
  int *v6; // rcx
  char **v7; // rcx
  char *v8; // rdx
  int v9; // eax

  if ( !*this->_IGnext )
    goto LABEL_7;
  IGcount = this->_IGcount;
  if ( *IGcount > 1 )
  {
    --*IGcount;
    IGnext = this->_IGnext;
    v4 = *IGnext + 1;
    *IGnext = v4;
    return (unsigned __int8)*v4;
  }
  v6 = this->_IGcount;
  if ( *v6 > 0 )
  {
    --*v6;
    v7 = this->_IGnext;
    v8 = (*v7)++;
    v9 = (unsigned __int8)*v8;
  }
  else
  {
LABEL_7:
    v9 = this->uflow(this);
  }
  if ( v9 == -1 )
    return 0xFFFFFFFFi64;
  v4 = *this->_IGnext;
  if ( v4 && *this->_IGcount > 0 )
    return (unsigned __int8)*v4;
  return ((__int64 (__fastcall *)(std::streambuf *))this->underflow)(this);
}

float __fastcall std::stof(const std::string *_Str, unsigned __int64 *_Idx)
{
  const std::string *Ptr; // rbx
  float result; // xmm0_4
  char *end_ptr; // [rsp+48h] [rbp+10h] BYREF

  end_ptr = (char *)_Idx;
  Ptr = _Str;
  if ( _Str->_Mypair._Myval2._Myres >= 0x10 )
    Ptr = (const std::string *)_Str->_Mypair._Myval2._Bx._Ptr;
  *errno() = 0;
  result = strtof(Ptr->_Mypair._Myval2._Bx._Buf, &end_ptr);
  if ( Ptr == (const std::string *)end_ptr )
    std::_Xinvalid_argument("invalid stof argument");
  if ( *errno() == 34 )
    std::_Xout_of_range("stof argument out of range");
  return result;
}

__int64 __fastcall std::streambuf::uflow(std::streambuf *this)
{
  char **IGnext; // rcx
  char *v4; // rdx

  if ( this->underflow(this) == -1 )
    return 0xFFFFFFFFi64;
  --*this->_IGcount;
  IGnext = this->_IGnext;
  v4 = (*IGnext)++;
  return (unsigned __int8)*v4;
}

__int64 __fastcall std::stringbuf::underflow(std::stringbuf *this)
{
  char **IGnext; // r9
  char *v2; // rdx
  int *IGcount; // r10
  char *v5; // r8

  IGnext = this->_IGnext;
  v2 = *IGnext;
  if ( !*IGnext )
    return 0xFFFFFFFFi64;
  IGcount = this->_IGcount;
  if ( v2 < &v2[*IGcount] )
    return (unsigned __int8)*v2;
  if ( (this->_Mystate & 4) != 0 )
    return 0xFFFFFFFFi64;
  v5 = *this->_IPnext;
  if ( !v5 || v5 <= v2 && this->_Seekhigh <= v2 )
    return 0xFFFFFFFFi64;
  if ( this->_Seekhigh < v5 )
    this->_Seekhigh = v5;
  *IGcount = (int)&this->_Seekhigh[-*(_DWORD *)IGnext];
  return **(unsigned __int8 **)this->_IGnext;
}

const char *__fastcall std::exception::what(std::exception *this)
{
  const char *result; // rax

  result = "Unknown exception";
  if ( this->_Data._What )
    return this->_Data._What;
  return result;
}

__int64 __fastcall std::streambuf::xsgetn(std::streambuf *this, char *_Ptr, __int64 _Count)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v7; // rax
  size_t v8; // rbx
  int v9; // eax

  v3 = 0i64;
  v4 = _Count;
  if ( _Count <= 0 )
    return 0i64;
  do
  {
    v7 = std::streambuf::_Gnavail(this);
    v8 = v7;
    if ( v7 <= 0 )
    {
      v9 = this->uflow(this);
      if ( v9 == -1 )
        return v3;
      *_Ptr = v9;
      ++v3;
      ++_Ptr;
      --v4;
    }
    else
    {
      if ( v4 < v7 )
        v8 = v4;
      if ( v8 )
        memmove(_Ptr, *(const void **)this->_IGnext, v8);
      _Ptr += v8;
      v3 += v8;
      v4 -= v8;
      *this->_IGcount -= v8;
      *this->_IGnext += (int)v8;
    }
  }
  while ( v4 > 0 );
  return v3;
}

__int64 __fastcall std::streambuf::xsputn(std::streambuf *this, const char *_Ptr, __int64 _Count)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v7; // rax
  size_t v8; // rbx

  v3 = 0i64;
  v4 = _Count;
  if ( _Count <= 0 )
    return 0i64;
  do
  {
    v7 = std::streambuf::_Pnavail(this);
    v8 = v7;
    if ( v7 <= 0 )
    {
      if ( this->overflow(this, *(unsigned __int8 *)_Ptr) == -1 )
        return v3;
      ++_Ptr;
      ++v3;
      --v4;
    }
    else
    {
      if ( v4 < v7 )
        v8 = v4;
      if ( v8 )
        memmove(*(void **)this->_IPnext, _Ptr, v8);
      _Ptr += v8;
      v3 += v8;
      v4 -= v8;
      *this->_IPcount -= v8;
      *this->_IPnext += (int)v8;
    }
  }
  while ( v4 > 0 );
  return v3;
}

