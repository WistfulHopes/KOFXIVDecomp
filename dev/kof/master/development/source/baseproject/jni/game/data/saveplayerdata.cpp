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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
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
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/content/contentsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"

CHARACTER_RANK SaveRecord_CharacterData::GetRank(); // 0x1401005A0
void SaveRecord_PlayerData::setDefault(); // 0x140100610
void SaveRecord_PlayerData::SetDefaultRoomName(); // 0x140100BA0
void SaveRecord_PlayerData::GetCharacterOfflineRanking(SaveRecord_CharacterData * data); // 0x140100BF0
void SaveRecord_PlayerData::GetCharacterOnlineRanking(SaveRecord_CharacterData * data); // 0x140100CC0
long SaveRecord_PlayerData::GetTrialsAchivedMax(); // 0x140100D90
long SaveRecord_PlayerData::GetTrialsAchivedCount(); // 0x140100EC0
float SaveRecord_PlayerData::GetTrialsAchivedRate(); // 0x140100F60
float SaveRecord_PlayerData::GetRankMatchWinRate(); // 0x140100FA0
float SaveRecord_PlayerData::GetRankMatchEndRate(); // 0x1401010C0
struct achivement_data::DataMap
{
	ACHIEVMENT_COUNT id_cnt; // 0x0
	long limitcnt; // 0x4
	ACHIEVMENT_LOG id_log; // 0x8
};
const achivement_data::DataMap achivement_data::Map[60]; // 0x14089C990
std::piecewise_construct_t std::piecewise_construct; // 0x14089B495
std::_List_buy<int,std::allocator<int> >::~_List_buy<int,std::allocator<int> >(); // 0x140101F10
void SaveRecord_PlayerData::CheckAchivementCountComplete(ACHIEVMENT_COUNT id); // 0x140101230
void SaveRecord_PlayerData::CheckAchivementCountComplete(std::list<int,std::allocator<int> > list_update); // 0x1401012D0
bool SaveRecord_PlayerData::CheckAchivementStroyTeam(); // 0x1401013C0
bool SaveRecord_PlayerData::SetAchivementLog(ACHIEVMENT_LOG id, char flag, bool f_debug); // 0x140101430
STAGE_ID SaveRecord_PlayerData::GetRandomEnableStageID(STAGE_ID ng1, STAGE_ID ng2, STAGE_ID ng4, STAGE_ID ng3, STAGE_ID ng5); // 0x140101480
void SaveRecord_PlayerData::UpdatetMyFavoriteTeamRandom(); // 0x140101510
CHARACTER_NO SaveRecord_PlayerData::GetRandomEnableCharacter(CHARACTER_NO ng1, CHARACTER_NO ng2, CHARACTER_NO ng3, CHARACTER_NO ng4, CHARACTER_NO ng5, CHARACTER_NO ng6); // 0x1401017F0
bool SaveRecord_PlayerData::IsEnableCharcter(CHARACTER_NO chara); // 0x1401019A0
long SaveRecord_PlayerData::UpdateStoryScore(CHARACTER_NO ch1, CHARACTER_NO ch2, CHARACTER_NO ch3, long score); // 0x140101AA0
long SaveRecord_PlayerData::UpdateTimeAttackScore(CHARACTER_NO ch1, long score); // 0x140101C00
long SaveRecord_PlayerData::UpdateSurvivalScore(CHARACTER_NO ch1, long score); // 0x140101D60//decompilation failure at 14089C990!
//decompilation failure at 14089B495!
void __fastcall std::_List_buy<int>::~_List_buy<int>(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::list<int>::~list<int>(std::list<std::pair<int const ,int>> *this)
{
  std::_List_node<std::pair<int const ,int>,void *> *Myhead; // rax
  std::_List_node<std::pair<int const ,int>,void *> *Next; // rcx
  std::_List_node<std::pair<int const ,int>,void *> *v4; // rbx

  Myhead = this->_Mypair._Myval2._Myhead;
  Next = this->_Mypair._Myval2._Myhead->_Next;
  Myhead->_Next = Myhead;
  this->_Mypair._Myval2._Myhead->_Prev = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Mysize = 0i64;
  if ( Next != this->_Mypair._Myval2._Myhead )
  {
    do
    {
      v4 = Next->_Next;
      operator delete(Next);
      Next = v4;
    }
    while ( v4 != this->_Mypair._Myval2._Myhead );
  }
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall SaveRecord_PlayerData::CheckAchivementCountComplete(
        SaveRecord_PlayerData *this,
        std::list<int> *list_update)
{
  unsigned int v4; // esi
  const achivement_data::DataMap *v5; // rbx
  std::_List_node<int,void *> *Myhead; // r8
  std::_List_node<int,void *> *Next; // rax
  ACHIEVMENT_LOG id_log; // ecx
  std::_List_node<int,void *> *v9; // rcx
  std::_List_node<int,void *> *v10; // rbx

  v4 = 0;
  v5 = achivement_data::Map;
  do
  {
    Myhead = list_update->_Mypair._Myval2._Myhead;
    Next = list_update->_Mypair._Myval2._Myhead->_Next;
    if ( Next != list_update->_Mypair._Myval2._Myhead )
    {
      do
      {
        if ( Next->_Myval == v5->id_cnt )
          break;
        Next = Next->_Next;
      }
      while ( Next != Myhead );
      if ( Next != Myhead && v5->limitcnt <= this->m_AchivementCount[v5->id_cnt] )
      {
        id_log = v5->id_log;
        if ( this->m_AchivementLog[id_log] <= 1 )
        {
          this->m_AchivementLog[id_log] = 1;
          AgAchievementsManager::unlock(
            (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
            (AgAchievementPlatformData *)&g_achievements + (unsigned int)id_log);
        }
      }
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 0x14 );
  v9 = list_update->_Mypair._Myval2._Myhead->_Next;
  list_update->_Mypair._Myval2._Myhead->_Next = list_update->_Mypair._Myval2._Myhead;
  list_update->_Mypair._Myval2._Myhead->_Prev = list_update->_Mypair._Myval2._Myhead;
  list_update->_Mypair._Myval2._Mysize = 0i64;
  if ( v9 != list_update->_Mypair._Myval2._Myhead )
  {
    do
    {
      v10 = v9->_Next;
      operator delete(v9);
      v9 = v10;
    }
    while ( v10 != list_update->_Mypair._Myval2._Myhead );
  }
  operator delete(list_update->_Mypair._Myval2._Myhead);
}

void __fastcall SaveRecord_PlayerData::CheckAchivementCountComplete(SaveRecord_PlayerData *this, ACHIEVMENT_COUNT id)
{
  const achivement_data::DataMap *v3; // rbx
  unsigned int i; // edi
  __int64 id_cnt; // rax
  ACHIEVMENT_LOG id_log; // ecx

  v3 = achivement_data::Map;
  for ( i = 0; i < 0x14; ++i )
  {
    id_cnt = v3->id_cnt;
    if ( (_DWORD)id_cnt == id && v3->limitcnt <= this->m_AchivementCount[id_cnt] )
    {
      id_log = v3->id_log;
      if ( this->m_AchivementLog[id_log] <= 1 )
      {
        this->m_AchivementLog[id_log] = 1;
        AgAchievementsManager::unlock(
          (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
          (AgAchievementPlatformData *)&g_achievements + (unsigned int)id_log);
      }
    }
    ++v3;
  }
}

__int64 __fastcall SaveRecord_PlayerData::CheckAchivementStroyTeam(SaveRecord_PlayerData *this)
{
  int m_AchivementStoryClear; // er11
  int v2; // er8
  unsigned __int8 v4; // bl
  __int64 v5; // r9
  unsigned __int8 v6; // cl
  int v7; // edx
  AgAchievementsManager *v8; // rcx

  m_AchivementStoryClear = this->m_AchivementStoryClear;
  v2 = 1;
  v4 = 1;
  v5 = 18i64;
  do
  {
    v6 = 0;
    v7 = v2 & m_AchivementStoryClear;
    v2 = __ROL4__(v2, 1);
    if ( v7 )
      v6 = v4;
    v4 = v6;
    --v5;
  }
  while ( v5 );
  if ( v6 && this->m_AchivementLog[4] <= 1 )
  {
    v8 = (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance;
    this->m_AchivementLog[4] = 1;
    AgAchievementsManager::unlock(v8, (AgAchievementPlatformData *)&stru_140A9BD70);
  }
  return v4;
}

void __fastcall SaveRecord_PlayerData::GetCharacterOfflineRanking(
        SaveRecord_PlayerData *this,
        SaveRecord_CharacterData *data)
{
  SaveRecord_CharacterData *v3; // rax
  SaveRecord_CharacterData *m_CharacterData; // rcx
  __int64 v5; // r8
  __int128 v6; // xmm0
  __int64 v7; // r9
  SaveRecord_CharacterData *v8; // rax
  __int64 v9; // rdx
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm1

  v3 = data;
  m_CharacterData = this->m_CharacterData;
  v5 = 15i64;
  do
  {
    v3 += 4;
    v6 = *(_OWORD *)&m_CharacterData->iCharacterNo;
    m_CharacterData += 4;
    *(_OWORD *)&v3[-4].iCharacterNo = v6;
    *(_OWORD *)&v3[-4].iWinCountOnLine = *(_OWORD *)&m_CharacterData[-4].iWinCountOnLine;
    *(_OWORD *)&v3[-3].iCharacterNo = *(_OWORD *)&m_CharacterData[-3].iCharacterNo;
    *(_OWORD *)&v3[-3].iWinCountOnLine = *(_OWORD *)&m_CharacterData[-3].iWinCountOnLine;
    *(_OWORD *)&v3[-2].iCharacterNo = *(_OWORD *)&m_CharacterData[-2].iCharacterNo;
    *(_OWORD *)&v3[-2].iWinCountOnLine = *(_OWORD *)&m_CharacterData[-2].iWinCountOnLine;
    *(_OWORD *)&v3[-1].iCharacterNo = *(_OWORD *)&m_CharacterData[-1].iCharacterNo;
    *(_OWORD *)&v3[-1].iWinCountOnLine = *(_OWORD *)&m_CharacterData[-1].iWinCountOnLine;
    --v5;
  }
  while ( v5 );
  v7 = 60i64;
  *(_OWORD *)&v3->iCharacterNo = *(_OWORD *)&m_CharacterData->iCharacterNo;
  *(_OWORD *)&v3->iWinCountOnLine = *(_OWORD *)&m_CharacterData->iWinCountOnLine;
  do
  {
    if ( v5 < 60 )
    {
      v8 = data + 59;
      v9 = 60 - v5;
      do
      {
        if ( v8[1].iUseCountOffLine > v8->iUseCountOffLine )
        {
          v10 = *(_OWORD *)&v8[1].iCharacterNo;
          v11 = *(_OWORD *)&v8[1].iWinCountOnLine;
          v12 = *(_OWORD *)&v8->iWinCountOnLine;
          *(_OWORD *)&v8[1].iCharacterNo = *(_OWORD *)&v8->iCharacterNo;
          *(_OWORD *)&v8->iCharacterNo = v10;
          *(_OWORD *)&v8[1].iWinCountOnLine = v12;
          *(_OWORD *)&v8->iWinCountOnLine = v11;
        }
        --v8;
        --v9;
      }
      while ( v9 );
    }
    ++v5;
    --v7;
  }
  while ( v7 );
}

void __fastcall SaveRecord_PlayerData::GetCharacterOnlineRanking(
        SaveRecord_PlayerData *this,
        SaveRecord_CharacterData *data)
{
  SaveRecord_CharacterData *v3; // rax
  SaveRecord_CharacterData *m_CharacterData; // rcx
  __int64 v5; // r8
  __int128 v6; // xmm0
  __int64 v7; // r9
  SaveRecord_CharacterData *v8; // rax
  __int64 v9; // rdx
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm1

  v3 = data;
  m_CharacterData = this->m_CharacterData;
  v5 = 15i64;
  do
  {
    v3 += 4;
    v6 = *(_OWORD *)&m_CharacterData->iCharacterNo;
    m_CharacterData += 4;
    *(_OWORD *)&v3[-4].iCharacterNo = v6;
    *(_OWORD *)&v3[-4].iWinCountOnLine = *(_OWORD *)&m_CharacterData[-4].iWinCountOnLine;
    *(_OWORD *)&v3[-3].iCharacterNo = *(_OWORD *)&m_CharacterData[-3].iCharacterNo;
    *(_OWORD *)&v3[-3].iWinCountOnLine = *(_OWORD *)&m_CharacterData[-3].iWinCountOnLine;
    *(_OWORD *)&v3[-2].iCharacterNo = *(_OWORD *)&m_CharacterData[-2].iCharacterNo;
    *(_OWORD *)&v3[-2].iWinCountOnLine = *(_OWORD *)&m_CharacterData[-2].iWinCountOnLine;
    *(_OWORD *)&v3[-1].iCharacterNo = *(_OWORD *)&m_CharacterData[-1].iCharacterNo;
    *(_OWORD *)&v3[-1].iWinCountOnLine = *(_OWORD *)&m_CharacterData[-1].iWinCountOnLine;
    --v5;
  }
  while ( v5 );
  v7 = 60i64;
  *(_OWORD *)&v3->iCharacterNo = *(_OWORD *)&m_CharacterData->iCharacterNo;
  *(_OWORD *)&v3->iWinCountOnLine = *(_OWORD *)&m_CharacterData->iWinCountOnLine;
  do
  {
    if ( v5 < 60 )
    {
      v8 = data + 59;
      v9 = 60 - v5;
      do
      {
        if ( v8[1].iUseCountOnLine > v8->iUseCountOnLine )
        {
          v10 = *(_OWORD *)&v8[1].iCharacterNo;
          v11 = *(_OWORD *)&v8[1].iWinCountOnLine;
          v12 = *(_OWORD *)&v8->iWinCountOnLine;
          *(_OWORD *)&v8[1].iCharacterNo = *(_OWORD *)&v8->iCharacterNo;
          *(_OWORD *)&v8->iCharacterNo = v10;
          *(_OWORD *)&v8[1].iWinCountOnLine = v12;
          *(_OWORD *)&v8->iWinCountOnLine = v11;
        }
        --v8;
        --v9;
      }
      while ( v9 );
    }
    ++v5;
    --v7;
  }
  while ( v7 );
}

__int64 __fastcall SaveRecord_PlayerData::GetRandomEnableCharacter(
        SaveRecord_PlayerData *this,
        CHARACTER_NO ng1,
        CHARACTER_NO ng2,
        CHARACTER_NO ng3,
        CHARACTER_NO ng4,
        CHARACTER_NO ng5,
        CHARACTER_NO ng6)
{
  int v7; // ebp
  int *v8; // rsi
  __int64 v9; // rdi
  int i; // ebx
  bool v15; // al
  int v17[64]; // [rsp+20h] [rbp-138h] BYREF

  v7 = 0;
  v8 = v17;
  v9 = 1i64;
  for ( i = 0; i <= 61; ++i )
  {
    if ( i == 55 || (unsigned int)(i - 58) <= 1 )
      goto LABEL_30;
    switch ( i )
    {
      case '2':
        v15 = Fw::ContentCommon::GetInstance()->m_KeyStatus[15] == E_STATUS_COMPLETE;
        goto LABEL_22;
      case '4':
        v15 = Fw::ContentCommon::GetInstance()->m_KeyStatus[16] == E_STATUS_COMPLETE;
        goto LABEL_22;
      case '5':
        v15 = Fw::ContentCommon::GetInstance()->m_KeyStatus[17] == E_STATUS_COMPLETE;
        goto LABEL_22;
      case '9':
        v15 = Fw::ContentCommon::GetInstance()->m_KeyStatus[18] == E_STATUS_COMPLETE;
        goto LABEL_22;
      case '8':
        v15 = Fw::ContentCommon::GetInstance()->m_KeyStatus[19] == E_STATUS_COMPLETE;
        goto LABEL_22;
      case '6':
        v15 = Fw::ContentCommon::GetInstance()->m_KeyStatus[21] == E_STATUS_COMPLETE;
        goto LABEL_22;
      case '3':
        v15 = Fw::ContentCommon::GetInstance()->m_KeyStatus[20] == E_STATUS_COMPLETE;
        goto LABEL_22;
      case '<':
        v15 = Fw::ContentCommon::GetInstance()->m_KeyStatus[22] == E_STATUS_COMPLETE;
        goto LABEL_22;
    }
    if ( (unsigned int)(i - 62) > 1 )
    {
      v15 = (v9 & this->m_EnableCharcterFlag) != 0;
LABEL_22:
      if ( !v15 )
        goto LABEL_30;
    }
    if ( ng1 != i && ng2 != i && ng3 != i && ng4 != i && ng5 != i && ng6 != i )
    {
      ++v7;
      *v8++ = i;
    }
LABEL_30:
    v9 = __ROL8__(v9, 1);
  }
  return (unsigned int)v17[(int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % v7];
}

__int64 __fastcall SaveRecord_PlayerData::GetRandomEnableStageID(
        SaveRecord_PlayerData *this,
        STAGE_ID ng1,
        STAGE_ID ng2,
        STAGE_ID ng4)
{
  int v4; // ebx
  int *v5; // r8
  int v6; // eax
  int v7; // er10
  int v9[24]; // [rsp+20h] [rbp-78h] BYREF

  v4 = 0;
  v5 = v9;
  v6 = 0;
  v7 = 5242881;
  do
  {
    if ( ng1 != v6 && ((unsigned int)(v6 + 1) > 0x16 || !_bittest(&v7, v6 + 1)) )
    {
      ++v4;
      *v5++ = v6;
    }
    ++v6;
  }
  while ( v6 < 24 );
  return (unsigned int)v9[(int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % v4];
}

__int64 __fastcall SaveRecord_CharacterData::GetRank(SaveRecord_CharacterData *this)
{
  int v1; // edx
  int v2; // eax

  v1 = this->iUseCountOffLine + this->iUseCountOnLine;
  v2 = this->iWinCountOffLine + this->iWinCountOnLine;
  if ( v1 >= 1000 && v2 >= 100 )
    return 5i64;
  if ( v1 >= 400 && v2 >= 50 )
    return 4i64;
  if ( v1 >= 100 && v2 >= 10 )
    return 3i64;
  if ( v1 >= 50 && v2 >= 1 )
    return 2i64;
  return v1 >= 1 && v2 >= 0;
}

float __fastcall SaveRecord_PlayerData::GetRankMatchEndRate(SaveRecord_PlayerData *this)
{
  int m_RankMatchWin; // edx
  unsigned int v3; // ecx
  unsigned int v4; // er9
  unsigned int v5; // edi
  unsigned int v6; // esi
  unsigned int v7; // ebp
  unsigned int v8; // edx
  unsigned int v10; // er8

  m_RankMatchWin = this->m_RankMatchWin;
  v3 = this->m_RankMatchLose ^ 0x7B48A35E;
  v4 = this->m_RankMatchCount ^ 0x7B48A35E;
  v5 = m_RankMatchWin ^ 0x7B48A35E ^ ((unsigned __int16)m_RankMatchWin ^ 0xA35E ^ (unsigned __int16)((m_RankMatchWin ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)m_RankMatchWin ^ 0xA35E ^ (unsigned __int16)((m_RankMatchWin ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v7 = this->m_RankMatchDraw ^ 0x7B48A35E ^ (LOWORD(this->m_RankMatchDraw) ^ 0xA35E ^ (unsigned __int16)((this->m_RankMatchDraw ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->m_RankMatchDraw) ^ 0xA35E ^ (unsigned __int16)((this->m_RankMatchDraw ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v8 = v4 ^ (LOWORD(this->m_RankMatchCount) ^ 0xA35E ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC ^ (((LOWORD(this->m_RankMatchCount) ^ 0xA35E ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC) << 14);
  if ( (v8 ^ (((v8 ^ (v8 >> 7)) & 0x550055) << 7)) == ((v8 ^ (v8 >> 7)) & 0x550055) )
    return 0.0;
  v10 = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC) << 14);
  v6 = v3 ^ ((unsigned __int16)v3 ^ (unsigned __int16)(v3 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v3 ^ (unsigned __int16)(v3 >> 14)) & 0xCCCC) << 14);
  return fminf(
           (float)(int)(((v5 ^ (v5 >> 7)) & 0x550055 ^ v5 ^ (((v5 ^ (v5 >> 7)) & 0x550055) << 7))
                      + ((v6 ^ (v6 >> 7)) & 0x550055 ^ v6 ^ (((v6 ^ (v6 >> 7)) & 0x550055) << 7))
                      + ((v7 ^ (v7 >> 7)) & 0x550055 ^ v7 ^ (((v7 ^ (v7 >> 7)) & 0x550055) << 7)))
         / (float)(int)((v10 ^ (v10 >> 7)) & 0x550055 ^ v10 ^ (((v10 ^ (v10 >> 7)) & 0x550055) << 7)),
           1.0);
}

float __fastcall SaveRecord_PlayerData::GetRankMatchWinRate(SaveRecord_PlayerData *this)
{
  SaveRecord_PlayerData *v1; // rdx
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  unsigned int v4; // er11
  unsigned int v5; // er9
  int v6; // edi
  unsigned int v8; // edx

  v1 = this;
  v2 = this->m_RankMatchWin ^ 0x7B48A35E;
  v3 = this->m_RankMatchLose ^ 0x7B48A35E;
  v4 = v2 ^ ((unsigned __int16)v2 ^ (unsigned __int16)(v2 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v2 ^ (unsigned __int16)(v2 >> 14)) & 0xCCCC) << 14);
  v5 = v3 ^ ((unsigned __int16)v3 ^ (unsigned __int16)(v3 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v3 ^ (unsigned __int16)(v3 >> 14)) & 0xCCCC) << 14);
  LODWORD(v1) = v1->m_RankMatchDraw ^ 0x7B48A35E ^ (LOWORD(v1->m_RankMatchDraw) ^ 0xA35E ^ (unsigned __int16)((v1->m_RankMatchDraw ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(v1->m_RankMatchDraw) ^ 0xA35E ^ (unsigned __int16)((v1->m_RankMatchDraw ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v6 = ((v4 ^ (v4 >> 7)) & 0x550055 ^ v4 ^ (((v4 ^ (v4 >> 7)) & 0x550055) << 7))
     + ((v5 ^ (v5 >> 7)) & 0x550055 ^ v5 ^ (((v5 ^ (v5 >> 7)) & 0x550055) << 7))
     + (((unsigned int)v1 ^ ((unsigned int)v1 >> 7)) & 0x550055 ^ (unsigned int)v1 ^ ((((unsigned int)v1 ^ ((unsigned int)v1 >> 7)) & 0x550055) << 7));
  if ( !v6 )
    return 0.0;
  v8 = v2 ^ ((unsigned __int16)v2 ^ (unsigned __int16)(v2 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v2 ^ (unsigned __int16)(v2 >> 14)) & 0xCCCC) << 14);
  return (float)(int)((v8 ^ (v8 >> 7)) & 0x550055 ^ v8 ^ (((v8 ^ (v8 >> 7)) & 0x550055) << 7)) / (float)v6;
}

__int64 __fastcall SaveRecord_PlayerData::GetTrialsAchivedCount(SaveRecord_PlayerData *this)
{
  unsigned int v1; // ebp
  unsigned int *p_iTrialsAchived; // rdi
  int i; // ebx
  unsigned int v5; // er9
  int v6; // er8
  int v7; // ecx
  int v8; // er8
  int v9; // eax
  int v10; // er8
  int v11; // edx
  int v12; // ecx

  v1 = 0;
  p_iTrialsAchived = &this->m_CharacterData[0].iTrialsAchived;
  for ( i = 0; i < 61; ++i )
  {
    if ( SaveRecord_PlayerData::IsEnableCharcter(this, (CHARACTER_NO)i) )
    {
      v5 = *p_iTrialsAchived;
      v6 = __ROL4__(1, 1);
      v7 = ((*p_iTrialsAchived & 1) != 0) + 1;
      if ( (*p_iTrialsAchived & v6) == 0 )
        v7 = (*p_iTrialsAchived & 1) != 0;
      v8 = __ROL4__(v6, 1);
      v9 = v7 + 1;
      if ( (v5 & v8) == 0 )
        v9 = v7;
      v10 = __ROL4__(v8, 1);
      v11 = v9 + 1;
      if ( (v5 & v10) == 0 )
        v11 = v9;
      v12 = v11 + 1;
      if ( (__ROL4__(v10, 1) & v5) == 0 )
        v12 = v11;
      v1 += v12;
    }
    p_iTrialsAchived += 8;
  }
  return v1;
}

__int64 __fastcall SaveRecord_PlayerData::GetTrialsAchivedMax(SaveRecord_PlayerData *this)
{
  unsigned int v1; // esi
  __int64 v2; // rdi
  int v3; // ebx
  bool v5; // al
  unsigned int v6; // ecx

  v1 = 0;
  v2 = 1i64;
  v3 = 0;
  do
  {
    if ( v3 == 55 || (unsigned int)(v3 - 58) <= 1 )
    {
      v5 = 0;
    }
    else
    {
      switch ( v3 )
      {
        case '2':
          v5 = Fw::ContentCommon::GetInstance()->m_KeyStatus[15] == E_STATUS_COMPLETE;
          break;
        case '4':
          v5 = Fw::ContentCommon::GetInstance()->m_KeyStatus[16] == E_STATUS_COMPLETE;
          break;
        case '5':
          v5 = Fw::ContentCommon::GetInstance()->m_KeyStatus[17] == E_STATUS_COMPLETE;
          break;
        case '9':
          v5 = Fw::ContentCommon::GetInstance()->m_KeyStatus[18] == E_STATUS_COMPLETE;
          break;
        case '8':
          v5 = Fw::ContentCommon::GetInstance()->m_KeyStatus[19] == E_STATUS_COMPLETE;
          break;
        case '6':
          v5 = Fw::ContentCommon::GetInstance()->m_KeyStatus[21] == E_STATUS_COMPLETE;
          break;
        case '3':
          v5 = Fw::ContentCommon::GetInstance()->m_KeyStatus[20] == E_STATUS_COMPLETE;
          break;
        case '<':
          v5 = Fw::ContentCommon::GetInstance()->m_KeyStatus[22] == E_STATUS_COMPLETE;
          break;
        default:
          v5 = (v2 & this->m_EnableCharcterFlag) != 0;
          break;
      }
    }
    ++v3;
    v2 = __ROL8__(v2, 1);
    v6 = v1 + 5;
    if ( !v5 )
      v6 = v1;
    v1 = v6;
  }
  while ( v3 < 61 );
  return v6;
}

float __fastcall SaveRecord_PlayerData::GetTrialsAchivedRate(SaveRecord_PlayerData *this)
{
  float TrialsAchivedCount; // xmm6_4

  TrialsAchivedCount = (float)(int)SaveRecord_PlayerData::GetTrialsAchivedCount(this);
  return TrialsAchivedCount / (float)(int)SaveRecord_PlayerData::GetTrialsAchivedMax(this);
}

unsigned __int8 __fastcall SaveRecord_PlayerData::IsEnableCharcter(SaveRecord_PlayerData *this, CHARACTER_NO chara)
{
  unsigned __int64 m_EnableCharcterFlag; // rax

  if ( chara == CHARACTER_NO_YMD || (unsigned int)(chara - 58) <= 1 )
    return 0;
  switch ( chara )
  {
    case CHARACTER_NO_ROC:
      return Fw::ContentCommon::GetInstance()->m_KeyStatus[15] == E_STATUS_COMPLETE;
    case CHARACTER_NO_YMZ:
      return Fw::ContentCommon::GetInstance()->m_KeyStatus[16] == E_STATUS_COMPLETE;
    case CHARACTER_NO_VNS:
      return Fw::ContentCommon::GetInstance()->m_KeyStatus[17] == E_STATUS_COMPLETE;
    case CHARACTER_NO_WHP:
      return Fw::ContentCommon::GetInstance()->m_KeyStatus[18] == E_STATUS_COMPLETE;
    case CHARACTER_NO_HDR:
      return Fw::ContentCommon::GetInstance()->m_KeyStatus[19] == E_STATUS_COMPLETE;
    case CHARACTER_NO_OSW:
      return Fw::ContentCommon::GetInstance()->m_KeyStatus[21] == E_STATUS_COMPLETE;
    case CHARACTER_NO_MRY:
      return Fw::ContentCommon::GetInstance()->m_KeyStatus[20] == E_STATUS_COMPLETE;
    case CHARACTER_NO_NJD:
      return Fw::ContentCommon::GetInstance()->m_KeyStatus[22] == E_STATUS_COMPLETE;
    case CHARACTER_NO_T_R:
    case CHARACTER_NO_E_R:
      return 1;
  }
  m_EnableCharcterFlag = this->m_EnableCharcterFlag;
  return _bittest64((const __int64 *)&m_EnableCharcterFlag, (unsigned int)chara);
}

char __fastcall SaveRecord_PlayerData::SetAchivementLog(
        SaveRecord_PlayerData *this,
        ACHIEVMENT_LOG id,
        char flag,
        bool f_debug)
{
  char *v4; // r8
  AgAchievementsManager *v6; // rcx

  v4 = (char *)this + (int)id;
  if ( v4[2336] > 1 )
    return 0;
  v6 = (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance;
  v4[2336] = 1;
  AgAchievementsManager::unlock(v6, (AgAchievementPlatformData *)&g_achievements + (unsigned int)id);
  return 1;
}

void __fastcall SaveRecord_PlayerData::SetDefaultRoomName(SaveRecord_PlayerData *this)
{
  const char *CString; // rax

  UserGameOperation::Instance();
  if ( Framework::GLManager::glm )
  {
    CString = AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
    strcpy_s(this->m_MyRoomName, 0x31ui64, CString);
  }
}

__int64 __fastcall SaveRecord_PlayerData::UpdateStoryScore(
        SaveRecord_PlayerData *this,
        CHARACTER_NO ch1,
        CHARACTER_NO ch2,
        CHARACTER_NO ch3,
        int score)
{
  int *p_m_Score; // r10
  unsigned int v6; // ebp
  __int64 v8; // rax
  unsigned int v11; // er9
  __int64 result; // rax
  int *v13; // rsi

  p_m_Score = &this->m_StoryScore[0].m_Score;
  v6 = 0;
  v8 = 0i64;
  while ( 1 )
  {
    v11 = *p_m_Score ^ 0x7B48A35E ^ (*(_WORD *)p_m_Score ^ 0xA35E ^ (unsigned __int16)((*p_m_Score ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)p_m_Score ^ 0xA35E ^ (unsigned __int16)((*p_m_Score ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    if ( (int)((v11 ^ (v11 >> 7)) & 0x550055 ^ v11 ^ (((v11 ^ (v11 >> 7)) & 0x550055) << 7)) < score )
      break;
    ++v6;
    ++v8;
    p_m_Score += 4;
    if ( v8 >= 8 )
      return 0xFFFFFFFFi64;
  }
  v13 = &this->m_Version + 4 * (int)v6;
  memmove(&this->m_StoryScore[v6 + 1], v13 + 507, 16i64 * (int)(7 - v6));
  v13[510] = score ^ (score ^ (score >> 7)) & 0x550055 ^ (((score ^ (score >> 7)) & 0x550055) << 7) ^ ((unsigned __int16)(score ^ (score ^ (score >> 7)) & 0x55 ^ ((((unsigned __int16)score ^ (unsigned __int16)(score >> 7)) & 0x55) << 7)) ^ (unsigned __int16)((score ^ (score ^ (score >> 7)) & 0x550055 ^ (((score ^ (score >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(score ^ (score ^ (score >> 7)) & 0x55 ^ ((((unsigned __int16)score ^ (unsigned __int16)(score >> 7)) & 0x55) << 7)) ^ (unsigned __int16)((score ^ (score ^ (score >> 7)) & 0x550055 ^ (((score ^ (score >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
  v13[507] = ch1;
  result = v6;
  v13[509] = ch3;
  this->m_StoryScore[v6].m_CharacterNo[1] = ch2;
  return result;
}

__int64 __fastcall SaveRecord_PlayerData::UpdateSurvivalScore(SaveRecord_PlayerData *this, CHARACTER_NO ch1, int score)
{
  __int64 result; // rax
  int *p_m_Score; // r9
  int iSurvivalScore; // eax
  unsigned int v9; // esi
  __int64 v10; // rax
  unsigned int v11; // er8
  char *v12; // rdi

  if ( ch1 == CHARACTER_NO_NONE )
    return 0i64;
  p_m_Score = &this->m_SurvivalScore[0].m_Score;
  iSurvivalScore = this->m_CharacterData[ch1].iSurvivalScore;
  if ( iSurvivalScore < score )
    iSurvivalScore = score;
  v9 = 0;
  this->m_CharacterData[ch1].iSurvivalScore = iSurvivalScore;
  v10 = 0i64;
  while ( 1 )
  {
    v11 = *p_m_Score ^ 0x7B48A35E ^ (*(_WORD *)p_m_Score ^ 0xA35E ^ (unsigned __int16)((*p_m_Score ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)p_m_Score ^ 0xA35E ^ (unsigned __int16)((*p_m_Score ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    if ( (int)((v11 ^ (v11 >> 7)) & 0x550055 ^ v11 ^ (((v11 ^ (v11 >> 7)) & 0x550055) << 7)) < score )
      break;
    ++v9;
    ++v10;
    p_m_Score += 2;
    if ( v10 >= 8 )
      return 0xFFFFFFFFi64;
  }
  v12 = (char *)this + 8 * (int)v9;
  memmove(&this->m_SurvivalScore[v9 + 1], v12 + 2156, 8i64 * (int)(7 - v9));
  *((_DWORD *)v12 + 539) = ch1;
  result = v9;
  this->m_SurvivalScore[v9].m_Score = score ^ (score ^ (score >> 7)) & 0x550055 ^ (((score ^ (score >> 7)) & 0x550055) << 7) ^ ((unsigned __int16)(score ^ (score ^ (score >> 7)) & 0x55 ^ ((((unsigned __int16)score ^ (unsigned __int16)(score >> 7)) & 0x55) << 7)) ^ (unsigned __int16)((score ^ (score ^ (score >> 7)) & 0x550055 ^ (((score ^ (score >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(score ^ (score ^ (score >> 7)) & 0x55 ^ ((((unsigned __int16)score ^ (unsigned __int16)(score >> 7)) & 0x55) << 7)) ^ (unsigned __int16)((score ^ (score ^ (score >> 7)) & 0x550055 ^ (((score ^ (score >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
  return result;
}

__int64 __fastcall SaveRecord_PlayerData::UpdateTimeAttackScore(
        SaveRecord_PlayerData *this,
        CHARACTER_NO ch1,
        int score)
{
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // edx
  int v9; // eax
  unsigned int v10; // esi
  int *p_m_Score; // r9
  __int64 v12; // r8
  unsigned int v13; // edx
  int v14; // eax
  char *v15; // rdi

  if ( ch1 == CHARACTER_NO_NONE )
    return 0i64;
  v7 = 32 * ((int)ch1 + 3i64);
  v8 = *(int *)((char *)&this->m_Version + v7);
  if ( v8 )
  {
    v9 = score;
    if ( v8 < score )
      v9 = *(int *)((char *)&this->m_Version + v7);
    *(int *)((char *)&this->m_Version + v7) = v9;
  }
  else
  {
    *(int *)((char *)&this->m_Version + v7) = score;
  }
  v10 = 0;
  p_m_Score = &this->m_TimeAttackScore[0].m_Score;
  v12 = 0i64;
  while ( 1 )
  {
    v13 = *p_m_Score ^ 0x7B48A35E ^ (*(_WORD *)p_m_Score ^ 0xA35E ^ (unsigned __int16)((*p_m_Score ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)p_m_Score ^ 0xA35E ^ (unsigned __int16)((*p_m_Score ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v14 = (v13 ^ (v13 >> 7)) & 0x550055 ^ v13 ^ (((v13 ^ (v13 >> 7)) & 0x550055) << 7);
    if ( v14 > score || !v14 )
      break;
    ++v10;
    ++v12;
    p_m_Score += 2;
    if ( v12 >= 8 )
      return 0xFFFFFFFFi64;
  }
  v15 = (char *)this + 8 * (int)v10;
  memmove(&this->m_TimeAttackScore[v10 + 1], v15 + 2220, 8i64 * (int)(7 - v10));
  *((_DWORD *)v15 + 555) = ch1;
  result = v10;
  *((_DWORD *)v15 + 556) = score ^ (score ^ (score >> 7)) & 0x550055 ^ (((score ^ (score >> 7)) & 0x550055) << 7) ^ ((unsigned __int16)(score ^ (score ^ (score >> 7)) & 0x55 ^ ((((unsigned __int16)score ^ (unsigned __int16)(score >> 7)) & 0x55) << 7)) ^ (unsigned __int16)((score ^ (score ^ (score >> 7)) & 0x550055 ^ (((score ^ (score >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(score ^ (score ^ (score >> 7)) & 0x55 ^ ((((unsigned __int16)score ^ (unsigned __int16)(score >> 7)) & 0x55) << 7)) ^ (unsigned __int16)((score ^ (score ^ (score >> 7)) & 0x550055 ^ (((score ^ (score >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
  return result;
}

void __fastcall SaveRecord_PlayerData::UpdatetMyFavoriteTeamRandom(SaveRecord_PlayerData *this)
{
  __int64 m_MyFavoriteTeamNo; // rcx
  CHARACTER_NO v3; // edx
  signed int v4; // ebx
  _DWORD *v5; // rsi
  __int64 v6; // rbx
  CHARACTER_NO RandomEnableCharacter; // eax
  CHARACTER_NO ng4; // eax
  CHARACTER_NO ng5; // eax
  GameDataInfo *v10; // rcx
  GameDataInfo *v11; // rcx
  GameDataInfo *v12; // rcx

  m_MyFavoriteTeamNo = this->m_MyFavoriteTeamNo;
  v3 = this->m_MyFavoriteTeam[m_MyFavoriteTeamNo][0];
  if ( v3 == CHARACTER_NO_T_R )
  {
    v4 = ((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) & 0x8000000F;
    v5 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v10);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    v6 = v4;
    this->m_MyFavoriteTeamRandom[0] = TeamCombinationData[v6][0];
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v11);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    this->m_MyFavoriteTeamRandom[1] = TeamCombinationData[v6][1];
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v12);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    RandomEnableCharacter = TeamCombinationData[v6][2];
  }
  else
  {
    ng4 = (unsigned int)SaveRecord_PlayerData::GetRandomEnableCharacter(
                          this,
                          v3,
                          this->m_MyFavoriteTeam[m_MyFavoriteTeamNo][1],
                          this->m_MyFavoriteTeam[m_MyFavoriteTeamNo][2],
                          this->m_MyFavoriteTeamRandom[0],
                          this->m_MyFavoriteTeamRandom[1],
                          this->m_MyFavoriteTeamRandom[2]);
    this->m_MyFavoriteTeamRandom[0] = ng4;
    ng5 = (unsigned int)SaveRecord_PlayerData::GetRandomEnableCharacter(
                          this,
                          this->m_MyFavoriteTeam[this->m_MyFavoriteTeamNo][0],
                          this->m_MyFavoriteTeam[this->m_MyFavoriteTeamNo][1],
                          this->m_MyFavoriteTeam[this->m_MyFavoriteTeamNo][2],
                          ng4,
                          this->m_MyFavoriteTeamRandom[1],
                          this->m_MyFavoriteTeamRandom[2]);
    this->m_MyFavoriteTeamRandom[1] = ng5;
    RandomEnableCharacter = (unsigned int)SaveRecord_PlayerData::GetRandomEnableCharacter(
                                            this,
                                            this->m_MyFavoriteTeam[this->m_MyFavoriteTeamNo][0],
                                            this->m_MyFavoriteTeam[this->m_MyFavoriteTeamNo][1],
                                            this->m_MyFavoriteTeam[this->m_MyFavoriteTeamNo][2],
                                            this->m_MyFavoriteTeamRandom[0],
                                            ng5,
                                            this->m_MyFavoriteTeamRandom[2]);
  }
  this->m_MyFavoriteTeamRandom[2] = RandomEnableCharacter;
  this->m_MyFavoriteTeamColorRandom[0] = (int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % 6 + 1;
  this->m_MyFavoriteTeamColorRandom[1] = (int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % 6 + 1;
  this->m_MyFavoriteTeamColorRandom[2] = (int)((unsigned int)RandomMT::getRand32(&this->randMT) >> 1) % 6 + 1;
}

void __fastcall std::list<int>::_Tidy(std::list<int> *this)
{
  std::_List_node<int,void *> *Myhead; // rax
  std::_List_node<int,void *> *Next; // rcx
  std::_List_node<int,void *> *v4; // rbx

  Myhead = this->_Mypair._Myval2._Myhead;
  Next = this->_Mypair._Myval2._Myhead->_Next;
  Myhead->_Next = Myhead;
  this->_Mypair._Myval2._Myhead->_Prev = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Mysize = 0i64;
  if ( Next != this->_Mypair._Myval2._Myhead )
  {
    do
    {
      v4 = Next->_Next;
      operator delete(Next);
      Next = v4;
    }
    while ( v4 != this->_Mypair._Myval2._Myhead );
  }
}

void __fastcall SaveRecord_PlayerData::setDefault(SaveRecord_PlayerData *this)
{
  __int64 v1; // rsi
  int v3; // ecx
  int *p_iWinCountOffLine; // rax
  int v5; // er9
  unsigned __int64 v6; // rax
  unsigned int v7; // edx
  unsigned int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rax

  v1 = 0i64;
  *(_WORD *)&this->m_RankMatchLosePublication = 257;
  this->m_iPlayTime = 0i64;
  *(_QWORD *)&this->m_ProfileIcon = 0i64;
  this->m_LastRankMatchTime = 0i64;
  *(_QWORD *)&this->m_DisconnectNum = 0i64;
  this->m_DisconnectLevelRankCount = 0;
  this->m_RankMatchRatePublication = 1;
  this->m_RankMatchRankPoint = 2068357982;
  this->m_RankMatchWin = 2068357982;
  this->m_RankMatchLose = 2068357982;
  this->m_RankMatchDraw = 2068357982;
  this->m_RankMatchWins = 2068357982;
  this->m_RankMatchMaxWins = 2068357982;
  this->m_RankMatchCount = 2068357982;
  memset(this->m_StoryScore, 0, sizeof(this->m_StoryScore));
  this->m_StoryScore[0].m_CharacterNo[0] = CHARACTER_NO_KYO;
  this->m_StoryScore[0].m_CharacterNo[1] = CHARACTER_NO_BEN;
  this->m_StoryScore[0].m_CharacterNo[2] = CHARACTER_NO_DMN;
  this->m_StoryScore[0].m_Score = 2068357982;
  this->m_StoryScore[1].m_CharacterNo[0] = CHARACTER_NO_RYO;
  this->m_StoryScore[1].m_CharacterNo[1] = CHARACTER_NO_RBT;
  this->m_StoryScore[1].m_CharacterNo[2] = CHARACTER_NO_YRI;
  this->m_StoryScore[1].m_Score = 2068357982;
  this->m_StoryScore[2].m_CharacterNo[0] = CHARACTER_NO_TRY;
  this->m_StoryScore[2].m_CharacterNo[1] = CHARACTER_NO_ADY;
  this->m_StoryScore[2].m_CharacterNo[2] = CHARACTER_NO_JOE;
  this->m_StoryScore[2].m_Score = 2068357982;
  this->m_StoryScore[3].m_CharacterNo[0] = CHARACTER_NO_LEO;
  this->m_StoryScore[3].m_CharacterNo[1] = CHARACTER_NO_RLF;
  this->m_StoryScore[3].m_CharacterNo[2] = CHARACTER_NO_CLK;
  this->m_StoryScore[3].m_Score = 2068357982;
  this->m_StoryScore[4].m_CharacterNo[0] = CHARACTER_NO_IOR;
  this->m_StoryScore[4].m_CharacterNo[1] = CHARACTER_NO_MTR;
  this->m_StoryScore[4].m_CharacterNo[2] = CHARACTER_NO_VIC;
  this->m_StoryScore[4].m_Score = 2068357982;
  this->m_StoryScore[5].m_CharacterNo[0] = CHARACTER_NO_KDS;
  this->m_StoryScore[5].m_CharacterNo[1] = CHARACTER_NO_KLA;
  this->m_StoryScore[5].m_CharacterNo[2] = CHARACTER_NO_MXI;
  this->m_StoryScore[5].m_Score = 2068357982;
  this->m_StoryScore[6].m_CharacterNo[0] = CHARACTER_NO_GES;
  this->m_StoryScore[6].m_CharacterNo[1] = CHARACTER_NO_BLY;
  this->m_StoryScore[6].m_CharacterNo[2] = CHARACTER_NO_SSL;
  this->m_StoryScore[6].m_Score = 2068357982;
  this->m_StoryScore[7].m_CharacterNo[0] = CHARACTER_NO_KNG;
  this->m_StoryScore[7].m_CharacterNo[1] = CHARACTER_NO_MAI;
  this->m_StoryScore[7].m_CharacterNo[2] = CHARACTER_NO_ALC;
  this->m_StoryScore[7].m_Score = 2068357982;
  this->m_SurvivalScore[0] = 0i64;
  this->m_SurvivalScore[1] = 0i64;
  this->m_SurvivalScore[2] = 0i64;
  this->m_SurvivalScore[3] = 0i64;
  this->m_SurvivalScore[4] = 0i64;
  this->m_SurvivalScore[5] = 0i64;
  this->m_SurvivalScore[6] = 0i64;
  this->m_SurvivalScore[7] = 0i64;
  this->m_SurvivalScore[0].m_Score = 2068357982;
  this->m_SurvivalScore[1].m_Score = 2068357982;
  this->m_SurvivalScore[2].m_Score = 2068357982;
  this->m_SurvivalScore[3].m_Score = 2068357982;
  this->m_SurvivalScore[4].m_Score = 2068357982;
  this->m_SurvivalScore[5].m_Score = 2068357982;
  this->m_SurvivalScore[6].m_Score = 2068357982;
  this->m_SurvivalScore[7].m_Score = 2068357982;
  this->m_SurvivalScore[0].m_CharacterNo = CHARACTER_NO_KYO;
  this->m_SurvivalScore[1].m_CharacterNo = CHARACTER_NO_RYO;
  this->m_SurvivalScore[2].m_CharacterNo = CHARACTER_NO_TRY;
  this->m_SurvivalScore[3].m_CharacterNo = CHARACTER_NO_RLF;
  this->m_SurvivalScore[4].m_CharacterNo = CHARACTER_NO_IOR;
  this->m_SurvivalScore[5].m_CharacterNo = CHARACTER_NO_KDS;
  this->m_SurvivalScore[6].m_CharacterNo = CHARACTER_NO_GES;
  this->m_SurvivalScore[7].m_CharacterNo = CHARACTER_NO_KNG;
  this->m_TimeAttackScore[0] = 0i64;
  this->m_TimeAttackScore[1] = 0i64;
  this->m_TimeAttackScore[2] = 0i64;
  this->m_TimeAttackScore[3] = 0i64;
  this->m_TimeAttackScore[4] = 0i64;
  v3 = 0;
  this->m_TimeAttackScore[5] = 0i64;
  this->m_TimeAttackScore[6] = 0i64;
  this->m_TimeAttackScore[7] = 0i64;
  p_iWinCountOffLine = &this->m_CharacterData[0].iWinCountOffLine;
  this->m_TimeAttackScore[0].m_Score = 1081838052;
  this->m_TimeAttackScore[1].m_Score = 1081838052;
  this->m_TimeAttackScore[2].m_Score = 1081838052;
  this->m_TimeAttackScore[3].m_Score = 1081838052;
  this->m_TimeAttackScore[4].m_Score = 1081838052;
  this->m_TimeAttackScore[5].m_Score = 1081838052;
  this->m_TimeAttackScore[6].m_Score = 1081838052;
  this->m_TimeAttackScore[7].m_Score = 1081838052;
  this->m_TimeAttackScore[0].m_CharacterNo = CHARACTER_NO_KYO;
  this->m_TimeAttackScore[1].m_CharacterNo = CHARACTER_NO_RYO;
  this->m_TimeAttackScore[2].m_CharacterNo = CHARACTER_NO_TRY;
  this->m_TimeAttackScore[3].m_CharacterNo = CHARACTER_NO_RLF;
  this->m_TimeAttackScore[4].m_CharacterNo = CHARACTER_NO_IOR;
  this->m_TimeAttackScore[5].m_CharacterNo = CHARACTER_NO_KDS;
  this->m_TimeAttackScore[6].m_CharacterNo = CHARACTER_NO_GES;
  this->m_TimeAttackScore[7].m_CharacterNo = CHARACTER_NO_KNG;
  do
  {
    *(p_iWinCountOffLine - 2) = v3++;
    *(_QWORD *)(p_iWinCountOffLine - 1) = 0i64;
    *(_QWORD *)(p_iWinCountOffLine + 1) = 0i64;
    *(_QWORD *)(p_iWinCountOffLine + 3) = 3599999i64;
    p_iWinCountOffLine[5] = 0;
    p_iWinCountOffLine += 8;
  }
  while ( v3 < 61 );
  v5 = 0;
  *(_QWORD *)this->m_IconEnableFlag = 0i64;
  *(_QWORD *)&this->m_IconEnableFlag[2] = 0i64;
  this->m_IconEnableFlag[4] = 0;
  *(_QWORD *)this->m_IconNewFlag = 0i64;
  *(_QWORD *)&this->m_IconNewFlag[2] = 0i64;
  this->m_IconNewFlag[4] = 0;
  do
  {
    v6 = (unsigned __int64)(unsigned int)v5 >> 5;
    v7 = 0x80000000 >> (v5 & 0x1F);
    v8 = v5 + 1;
    v5 += 2;
    this->m_IconEnableFlag[v6] |= v7;
    this->m_IconEnableFlag[(unsigned __int64)v8 >> 5] |= 0x80000000 >> (v8 & 0x1F);
  }
  while ( v5 < 108 );
  this->m_TutorialFlag = 0i64;
  memset(this->m_AchivementLog, 0, 0x70ui64);
  this->m_AchivementStoryClear = 0;
  v9 = 61i64;
  this->m_MyFavoriteStageNo = 0;
  this->m_MyFavoriteStage[0] = STAGE_ID_ESK;
  *(_QWORD *)&this->m_MyFavoriteStage[1] = -1i64;
  *(_QWORD *)&this->m_MyFavoriteSingleNo = 0i64;
  this->m_MyFavoriteSingleColor[0] = CHARACTER_COLOR_1P;
  *(_WORD *)this->m_MyFavoriteSingleCostume = 0;
  *(_QWORD *)&this->m_MyFavoriteSingle[1] = -1i64;
  this->m_MyFavoriteSingleColor[1] = CHARACTER_COLOR_1P;
  this->m_MyFavoriteSingleRandom = CHARACTER_NO_NONE;
  this->m_MyFavoriteSingleColorRandom = CHARACTER_COLOR_1P;
  this->m_MyFavoriteSingleColor[2] = CHARACTER_COLOR_1P;
  this->m_MyFavoriteSingleCostume[2] = 0;
  *(_QWORD *)&this->m_MyFavoriteTeamNo = 0i64;
  this->m_MyFavoriteTeamColor[0][0] = CHARACTER_COLOR_1P;
  *(_QWORD *)&this->m_MyFavoriteTeamColor[2][2] = 0i64;
  this->m_MyFavoriteTeam[0][1] = CHARACTER_NO_BEN;
  this->m_MyFavoriteTeamColor[0][1] = CHARACTER_COLOR_1P;
  this->m_MyFavoriteTeam[0][2] = CHARACTER_NO_DMN;
  *(_QWORD *)&this->m_MyFavoriteTeamColor[0][2] = 1i64;
  *(_QWORD *)&this->m_MyFavoriteTeam[1][0] = -1i64;
  *(_QWORD *)&this->m_MyFavoriteTeamColor[1][1] = 0i64;
  *(_DWORD *)&this->m_MyFavoriteTeamCostume[1][1] = 0;
  *(_QWORD *)&this->m_MyFavoriteTeam[1][2] = -1i64;
  *(_QWORD *)&this->m_MyFavoriteTeamColor[2][0] = 0i64;
  *(_QWORD *)&this->m_MyFavoriteTeam[2][1] = -1i64;
  this->m_MyFavoriteTeamCostume[2][2] = 0;
  strcpy(this->m_MyFavoriteTelop, "THE KING OF FIGHTERS");
  v10 = 0i64;
  this->m_MyRoomName[0] = 0;
  this->m_EnableCharcterFlag = 0i64;
  do
  {
    v1 |= 1i64 << v10++;
    --v9;
  }
  while ( v9 );
  *(_WORD *)&this->m_OnlineIDStatus = 1;
  this->m_TouchpadStatus = 1;
  this->m_EnableCharcterFlag = v1 | 0xC000000000000000ui64;
}

