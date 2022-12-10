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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.cpp"

struct BattleSystem::SupportCharaData
{
	CHARACTER_NO mainCharaNo; // 0x0
	CHARACTER_NO supportCharaNo; // 0x4
};
const BattleSystem::SupportCharaData BattleSystem::supportCharaTable[8]; // 0x14089FEF0
std::piecewise_construct_t std::piecewise_construct; // 0x14089FE85
void BattleSystem::BattlePlayerInfo::Init(bool bAllInit); // 0x14017C800
void BattleSystem::BattlePlayerInfo::BattleInit(BattleSystem::BATTLE_MODE battleMode); // 0x14017C8F0
void BattleSystem::BattlePlayerInfo::RoundInit(ActorChara & actor, bool bFirstRound); // 0x14017C9B0
void BattleSystem::BattlePlayerInfo::ApplyHandicap(ActorChara & actor, bool bFirstRound); // 0x14017CA40
CHARACTER_NO BattleSystem::BattlePlayerInfo::GetBaseCharaID(CHARACTER_NO charID); // 0x14017CB20
CHARACTER_NO BattleSystem::BattlePlayerInfo::GetSupportCharaID(CHARACTER_NO charID); // 0x14017CB80
void BattleSystem::BattlePlayerInfo::SetRoundWin(bool bTeamBattle, ActorChara & actor); // 0x14017CC90
void BattleSystem::BattlePlayerInfo::SetPerfectWin(bool bTeamBattle, ActorChara & actor); // 0x14017CEC0
void BattleSystem::BattlePlayerInfo::SetRoundLose(bool bTeamBattle, ActorChara & actor); // 0x14017D010
void BattleSystem::BattlePlayerInfo::SetBattleWin(); // 0x14017D0A0
void BattleSystem::BattlePlayerInfo::SetBattleLose(); // 0x14017D1A0
void BattleSystem::BattlePlayerInfo::SetBattleDraw(); // 0x14017D230
void BattleSystem::BattlePlayerInfo::AddBattleScore(long score); // 0x14017D2C0
void BattleSystem::BattlePlayerInfo::AddLifeBonus(long vitalPer, bool bBoss); // 0x14017D360
void BattleSystem::BattlePlayerInfo::AddTimeBonus(long time, bool bBoss); // 0x14017D400
void BattleSystem::BattlePlayerInfo::AddStraightSetBonus(); // 0x14017D4B0
void BattleSystem::BattlePlayerInfo::AddNoContinueBonus(); // 0x14017D550
void BattleSystem::BattlePlayerInfo::AddCpuLevelBonus(AiLevelSpec level); // 0x14017D6D0//decompilation failure at 14089FEF0!
//decompilation failure at 14089FE85!
void __fastcall BattleSystem::BattlePlayerInfo::AddBattleScore(BattleSystem::BattlePlayerInfo *this, int score)
{
  int iBattleScore; // eax
  int iTotalScore; // er8
  unsigned int v5; // ecx
  int v6; // er8

  this->scoreInfo.iBattleScore += score;
  iBattleScore = this->scoreInfo.iBattleScore;
  iTotalScore = this->iTotalScore;
  if ( iBattleScore > 99999999 )
    iBattleScore = 99999999;
  this->scoreInfo.iBattleScore = iBattleScore;
  v5 = iTotalScore ^ 0x7B48A35E ^ ((unsigned __int16)iTotalScore ^ 0xA35E ^ (unsigned __int16)((iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)iTotalScore ^ 0xA35E ^ (unsigned __int16)((iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v6 = score + ((v5 ^ (v5 >> 7)) & 0x550055 ^ v5 ^ (((v5 ^ (v5 >> 7)) & 0x550055) << 7));
  if ( v6 > 99999999 )
    v6 = 99999999;
  this->iTotalScore = v6 ^ (v6 ^ (v6 >> 7)) & 0x550055 ^ (((v6 ^ (v6 >> 7)) & 0x550055) << 7) ^ ((unsigned __int16)(v6 ^ (v6 ^ (v6 >> 7)) & 0x55 ^ ((((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)((v6 ^ (v6 ^ (v6 >> 7)) & 0x550055 ^ (((v6 ^ (v6 >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(v6 ^ (v6 ^ (v6 >> 7)) & 0x55 ^ ((((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)((v6 ^ (v6 ^ (v6 >> 7)) & 0x550055 ^ (((v6 ^ (v6 >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
}

void __fastcall BattleSystem::BattlePlayerInfo::AddCpuLevelBonus(
        BattleSystem::BattlePlayerInfo *this,
        AiLevelSpec level)
{
  int v3; // er8
  int iCpuLevelBonus; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edx
  int v7; // ecx
  unsigned int v8; // edx
  int v9; // ecx
  __m128i si128; // [rsp+0h] [rbp-28h]
  int v11; // [rsp+10h] [rbp-18h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v11 = 10000;
  v3 = si128.m128i_i32[level];
  this->scoreInfo.iCpuLevelBonus += v3;
  iCpuLevelBonus = this->scoreInfo.iCpuLevelBonus;
  if ( iCpuLevelBonus > 99999999 )
    iCpuLevelBonus = 99999999;
  this->scoreInfo.iCpuLevelBonus = iCpuLevelBonus;
  v5 = this->iTotalScore ^ 0x7B48A35E;
  v6 = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)(v5 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v5 ^ (unsigned __int16)(v5 >> 14)) & 0xCCCC) << 14);
  v7 = v3 + ((v6 ^ (v6 >> 7)) & 0x550055 ^ v6 ^ (((v6 ^ (v6 >> 7)) & 0x550055) << 7));
  if ( v7 > 99999999 )
    v7 = 99999999;
  v8 = v7 ^ (v7 ^ (v7 >> 7)) & 0x550055 ^ (((v7 ^ (v7 >> 7)) & 0x550055) << 7);
  v9 = ((unsigned __int16)(v7 ^ (v7 ^ (v7 >> 7)) & 0x55 ^ ((((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v8 >> 14)) & 0xCCCC;
  this->iTotalScore = v8 ^ v9 ^ (v9 << 14) ^ 0x7B48A35E;
}

void __fastcall BattleSystem::BattlePlayerInfo::AddLifeBonus(
        BattleSystem::BattlePlayerInfo *this,
        int vitalPer,
        bool bBoss)
{
  int v3; // er9
  int iLifeBonus; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edx
  int v8; // ecx
  unsigned int v9; // edx
  int v10; // ecx

  v3 = 50 * vitalPer;
  if ( bBoss )
    v3 = 150 * vitalPer;
  this->scoreInfo.iLifeBonus += v3;
  iLifeBonus = this->scoreInfo.iLifeBonus;
  if ( iLifeBonus > 99999999 )
    iLifeBonus = 99999999;
  this->scoreInfo.iLifeBonus = iLifeBonus;
  v6 = this->iTotalScore ^ 0x7B48A35E;
  v7 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 14)) & 0xCCCC) << 14);
  v8 = v3 + ((v7 ^ (v7 >> 7)) & 0x550055 ^ v7 ^ (((v7 ^ (v7 >> 7)) & 0x550055) << 7));
  if ( v8 > 99999999 )
    v8 = 99999999;
  v9 = v8 ^ (v8 ^ (v8 >> 7)) & 0x550055 ^ (((v8 ^ (v8 >> 7)) & 0x550055) << 7);
  v10 = ((unsigned __int16)(v8 ^ (v8 ^ (v8 >> 7)) & 0x55 ^ ((((unsigned __int16)v8 ^ (unsigned __int16)(v8 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v9 >> 14)) & 0xCCCC;
  this->iTotalScore = v9 ^ v10 ^ (v10 << 14) ^ 0x7B48A35E;
}

void __fastcall BattleSystem::BattlePlayerInfo::AddNoContinueBonus(BattleSystem::BattlePlayerInfo *this)
{
  int iLoseCount; // edx
  unsigned int v3; // ecx
  unsigned int v4; // er9
  unsigned int v5; // edx
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // er8
  int iNoContinueBonus; // eax
  int iTotalScore; // ecx
  unsigned int v13; // edx
  int v14; // ecx
  unsigned int v15; // edx
  int v16; // ecx

  iLoseCount = this->iLoseCount;
  v3 = this->iDrawCount ^ 0x7B48A35E;
  v4 = iLoseCount ^ 0x7B48A35E ^ ((unsigned __int16)iLoseCount ^ 0xA35E ^ (unsigned __int16)((iLoseCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)iLoseCount ^ 0xA35E ^ (unsigned __int16)((iLoseCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v5 = v3 ^ ((unsigned __int16)v3 ^ (unsigned __int16)(v3 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v3 ^ (unsigned __int16)(v3 >> 14)) & 0xCCCC) << 14);
  if ( (int)(((v4 ^ (v4 >> 7)) & 0x550055 ^ v4 ^ (((v4 ^ (v4 >> 7)) & 0x550055) << 7))
           + ((v5 ^ (v5 >> 7)) & 0x550055 ^ v5 ^ (((v5 ^ (v5 >> 7)) & 0x550055) << 7))) <= 0 )
  {
    v6 = this->iWinCount ^ 0x7B48A35E ^ (LOWORD(this->iWinCount) ^ 0xA35E ^ (unsigned __int16)((this->iWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->iWinCount) ^ 0xA35E ^ (unsigned __int16)((this->iWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v7 = (v6 ^ (v6 >> 7)) & 0x550055 ^ v6 ^ (((v6 ^ (v6 >> 7)) & 0x550055) << 7);
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            v10 = 3000;
          else
            v10 = 5000;
        }
        else
        {
          v10 = 2000;
        }
      }
      else
      {
        v10 = 1000;
      }
      this->scoreInfo.iNoContinueBonus += v10;
      iNoContinueBonus = this->scoreInfo.iNoContinueBonus;
      iTotalScore = this->iTotalScore;
      if ( iNoContinueBonus > 99999999 )
        iNoContinueBonus = 99999999;
      this->scoreInfo.iNoContinueBonus = iNoContinueBonus;
      v13 = iTotalScore ^ 0x7B48A35E ^ ((unsigned __int16)iTotalScore ^ 0xA35E ^ (unsigned __int16)((iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)iTotalScore ^ 0xA35E ^ (unsigned __int16)((iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      v14 = v10 + ((v13 ^ (v13 >> 7)) & 0x550055 ^ v13 ^ (((v13 ^ (v13 >> 7)) & 0x550055) << 7));
      if ( v14 > 99999999 )
        v14 = 99999999;
      v15 = v14 ^ (v14 ^ (v14 >> 7)) & 0x550055 ^ (((v14 ^ (v14 >> 7)) & 0x550055) << 7);
      v16 = ((unsigned __int16)(v14 ^ (v14 ^ (v14 >> 7)) & 0x55 ^ ((((unsigned __int16)v14 ^ (unsigned __int16)(v14 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v15 >> 14)) & 0xCCCC;
      this->iTotalScore = v15 ^ v16 ^ (v16 << 14) ^ 0x7B48A35E;
    }
  }
}

void __fastcall BattleSystem::BattlePlayerInfo::AddStraightSetBonus(BattleSystem::BattlePlayerInfo *this)
{
  int iStraightSetCount; // eax
  int v3; // er9
  unsigned int v4; // ecx
  unsigned int v5; // edx
  int v6; // ecx
  unsigned int v7; // edx
  int v8; // ecx

  iStraightSetCount = this->iStraightSetCount;
  if ( iStraightSetCount == 2 )
  {
    v3 = 10000;
  }
  else
  {
    if ( iStraightSetCount < 3 )
      return;
    v3 = 30000;
  }
  this->scoreInfo.iStraightSetBonus += v3;
  v4 = this->iTotalScore ^ 0x7B48A35E;
  v5 = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC) << 14);
  v6 = v3 + ((v5 ^ (v5 >> 7)) & 0x550055 ^ v5 ^ (((v5 ^ (v5 >> 7)) & 0x550055) << 7));
  if ( v6 > 99999999 )
    v6 = 99999999;
  v7 = v6 ^ (v6 ^ (v6 >> 7)) & 0x550055 ^ (((v6 ^ (v6 >> 7)) & 0x550055) << 7);
  v8 = ((unsigned __int16)(v6 ^ (v6 ^ (v6 >> 7)) & 0x55 ^ ((((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v7 >> 14)) & 0xCCCC;
  this->iTotalScore = v7 ^ v8 ^ (v8 << 14) ^ 0x7B48A35E;
}

void __fastcall BattleSystem::BattlePlayerInfo::AddTimeBonus(
        BattleSystem::BattlePlayerInfo *this,
        int time,
        bool bBoss)
{
  int v4; // er9
  int iTimeBonus; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edx
  int v8; // ecx
  unsigned int v9; // edx
  int v10; // ecx

  if ( time > 0 )
  {
    v4 = 1000 * time;
    if ( bBoss )
      v4 = 3000 * time;
    this->scoreInfo.iTimeBonus += v4;
    iTimeBonus = this->scoreInfo.iTimeBonus;
    if ( iTimeBonus > 99999999 )
      iTimeBonus = 99999999;
    this->scoreInfo.iTimeBonus = iTimeBonus;
    v6 = this->iTotalScore ^ 0x7B48A35E;
    v7 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 14)) & 0xCCCC) << 14);
    v8 = v4 + ((v7 ^ (v7 >> 7)) & 0x550055 ^ v7 ^ (((v7 ^ (v7 >> 7)) & 0x550055) << 7));
    if ( v8 > 99999999 )
      v8 = 99999999;
    v9 = v8 ^ (v8 ^ (v8 >> 7)) & 0x550055 ^ (((v8 ^ (v8 >> 7)) & 0x550055) << 7);
    v10 = ((unsigned __int16)(v8 ^ (v8 ^ (v8 >> 7)) & 0x55 ^ ((((unsigned __int16)v8 ^ (unsigned __int16)(v8 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v9 >> 14)) & 0xCCCC;
    this->iTotalScore = v9 ^ v10 ^ (v10 << 14) ^ 0x7B48A35E;
  }
}

void __fastcall BattleSystem::BattlePlayerInfo::ApplyHandicap(
        BattleSystem::BattlePlayerInfo *this,
        ActorChara *actor,
        __int64 bFirstRound)
{
  int iHandicap; // er9
  int v5; // er9
  int v6; // er9
  int v7; // eax
  float v8; // xmm0_4

  iHandicap = this->iHandicap;
  if ( !iHandicap )
  {
    v8 = (float)((int (__fastcall *)(ActorChara *, ActorChara *, __int64))actor->GetMaxVital)(actor, actor, bFirstRound)
       * 0.5;
    goto LABEL_11;
  }
  v5 = iHandicap - 1;
  if ( !v5 )
  {
    v8 = (float)((int (__fastcall *)(ActorChara *, ActorChara *, __int64))actor->GetMaxVital)(actor, actor, bFirstRound)
       * 0.75;
LABEL_11:
    ((void (__fastcall *)(ActorChara *, _QWORD))actor->SetVital)(actor, (unsigned int)((int)v8 << 16));
    return;
  }
  v6 = v5 - 2;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      if ( (_BYTE)bFirstRound )
      {
        v7 = actor->GetMaxExPower(actor);
        ((void (__fastcall *)(ActorChara *, _QWORD))actor->SetExPower)(actor, (unsigned int)(v7 << 16));
      }
    }
  }
  else if ( (_BYTE)bFirstRound )
  {
    ((void (__fastcall *)(ActorChara *, _QWORD))actor->SetExPower)(
      actor,
      (unsigned int)(actor->xExPower.value + 65536000));
  }
}

void __fastcall BattleSystem::BattlePlayerInfo::BattleInit(
        BattleSystem::BattlePlayerInfo *this,
        BattleSystem::BATTLE_MODE battleMode)
{
  int *iFinishSkill; // r8
  __int64 v3; // r10
  __int64 v4; // r9
  int v5; // eax
  int iMemberCount; // edx

  iFinishSkill = this->iFinishSkill;
  this->iMemberReferIndex = 0;
  this->iBattleMemberIndex = 0;
  v3 = 5i64;
  *(_QWORD *)&this->iRoundSetCount = 0i64;
  if ( this->iFinishSkill > &this->iRoundSetCount )
    v3 = 0i64;
  this->iPerfectRoundCount = 0;
  v4 = 0i64;
  if ( this->iFinishSkill <= &this->iRoundSetCount )
  {
    do
    {
      ++v4;
      *iFinishSkill++ = 0;
    }
    while ( v4 != v3 );
  }
  if ( battleMode )
  {
    v5 = 0;
    if ( battleMode != DEVELOP )
      v5 = 2;
    goto LABEL_12;
  }
  iMemberCount = this->iMemberCount;
  if ( iMemberCount != 1 )
  {
    v5 = iMemberCount == 2;
LABEL_12:
    this->iMaxExPowerExtend = v5;
    goto LABEL_13;
  }
  this->iMaxExPowerExtend = 2;
LABEL_13:
  *(_QWORD *)&this->roundEndInfo.xVital.value = 0i64;
  *(_QWORD *)&this->roundEndInfo.xClimaxTime.value = 0i64;
  *(_QWORD *)&this->roundEndInfo.xStunPower.value = 0i64;
  this->roundEndInfo.bTakeOverActor = 0;
  *(_QWORD *)&this->scoreInfo.iLifeBonus = 0i64;
  *(_QWORD *)&this->scoreInfo.iPerfectBonus = 0i64;
  *(_QWORD *)&this->scoreInfo.iCpuLevelBonus = 0i64;
  this->scoreInfo.iBattleScore = 0;
  this->iPrevTotalScore = this->iTotalScore;
}

__int64 __fastcall BattleSystem::BattlePlayerInfo::GetBaseCharaID(CHARACTER_NO charID)
{
  CharaProjectData *v2; // rdi
  int CharaDataIndex; // eax
  __int64 result; // rax

  v2 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
  CharaDataIndex = CharaProjectData::GetCharaDataIndex(v2, charID);
  if ( CharaDataIndex < 0 )
    return 0xFFFFFFFFi64;
  result = (unsigned int)v2->pCharaData[CharaDataIndex].iBaseCharaID;
  if ( (int)result < 0 )
    return (unsigned int)charID;
  return result;
}

__int64 __fastcall BattleSystem::BattlePlayerInfo::GetSupportCharaID(CHARACTER_NO charID)
{
  const BattleSystem::SupportCharaData *v2; // rbx
  CharaProjectData *v3; // rsi
  int CharaDataIndex; // eax
  CHARACTER_NO iBaseCharaID; // eax
  __int64 result; // rax
  CHARACTER_NO v7; // eax
  int v8; // eax
  int i; // edx
  int v10; // edi

  v2 = BattleSystem::supportCharaTable;
  while ( 1 )
  {
    v3 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
    CharaDataIndex = CharaProjectData::GetCharaDataIndex(v3, charID);
    if ( CharaDataIndex >= 0 )
    {
      iBaseCharaID = v3->pCharaData[CharaDataIndex].iBaseCharaID;
      if ( iBaseCharaID < CHARACTER_NO_KYO )
        iBaseCharaID = charID;
    }
    else
    {
      iBaseCharaID = CHARACTER_NO_NONE;
    }
    if ( v2->mainCharaNo == iBaseCharaID )
      break;
    if ( ++v2 == (const BattleSystem::SupportCharaData *)CharaActionData::READ_ERROR_ID_NAME )
      return 0xFFFFFFFFi64;
  }
  if ( CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), charID) < 0 )
    return (unsigned int)v2->supportCharaNo;
  v7 = charID - 800;
  if ( charID < CHARACTER_NO_MMH )
    v7 = charID;
  v8 = v7 - 500;
  if ( v8 < 0 )
    return (unsigned int)v2->supportCharaNo;
  for ( i = 1; i < 4; ++i )
  {
    v8 -= 100;
    if ( v8 < 0 )
      break;
  }
  if ( i <= 0 )
    return (unsigned int)v2->supportCharaNo;
  v10 = v2->supportCharaNo + 100 * (i + 4);
  if ( CharaProjectData::GetCharaDataIndex(*(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64), v10) < 0 )
    v10 = -1;
  result = (unsigned int)v10;
  if ( v10 < 0 )
    return (unsigned int)v2->supportCharaNo;
  return result;
}

void __fastcall BattleSystem::BattlePlayerInfo::Init(BattleSystem::BattlePlayerInfo *this, bool bAllInit)
{
  __int64 i; // rax
  int *iFinishSkill; // rdx
  __int64 v5; // r9
  __int64 v6; // r8

  for ( i = 0i64; i < 3; ++i )
  {
    this->charaNo[i] = CHARACTER_NO_NONE;
    this->iCharaColor[i] = 0;
  }
  iFinishSkill = this->iFinishSkill;
  *(_QWORD *)&this->iMemberCount = 0i64;
  this->iBattleMemberIndex = 0;
  this->playerType = STAND;
  v5 = 5i64;
  *(_QWORD *)&this->iRoundSetCount = 0i64;
  if ( this->iFinishSkill > &this->iRoundSetCount )
    v5 = 0i64;
  this->iPerfectRoundCount = 0;
  v6 = 0i64;
  if ( this->iFinishSkill <= &this->iRoundSetCount )
  {
    do
    {
      ++v6;
      *iFinishSkill++ = 0;
    }
    while ( v6 != v5 );
  }
  if ( bAllInit )
  {
    this->iWinCount = 2068357982;
    this->iLoseCount = 2068357982;
    this->iDrawCount = 2068357982;
    this->iStraightWin = 2068357982;
    this->iTotalScore = 2068357982;
    this->iPrevTotalScore = 2068357982;
  }
  *(_QWORD *)&this->scoreInfo.iLifeBonus = 0i64;
  *(_QWORD *)&this->scoreInfo.iPerfectBonus = 0i64;
  *(_QWORD *)&this->scoreInfo.iCpuLevelBonus = 0i64;
  this->scoreInfo.iBattleScore = 0;
  *(_QWORD *)&this->iHandicap = 2i64;
  *(_QWORD *)&this->roundEndInfo.xVital.value = 0i64;
  *(_QWORD *)&this->roundEndInfo.xClimaxTime.value = 0i64;
  *(_QWORD *)&this->roundEndInfo.xStunPower.value = 0i64;
  this->roundEndInfo.bTakeOverActor = 0;
  this->battleCharaNo = CHARACTER_NO_NONE;
  this->iBattleCharaColor = 0;
}

void __fastcall BattleSystem::BattlePlayerInfo::RoundInit(
        BattleSystem::BattlePlayerInfo *this,
        ActorChara *actor,
        bool bFirstRound)
{
  __int64 iRoundSetCount; // rax

  actor->SetMaxGaugeStockExtend(actor, this->iMaxExPowerExtend);
  ((void (__fastcall *)(ActorChara *, _QWORD))actor->SetExPower)(actor, (unsigned int)this->roundEndInfo.xExPower.value);
  if ( this->roundEndInfo.bTakeOverActor )
    ((void (__fastcall *)(ActorChara *, _QWORD))actor->SetVital)(
      actor,
      (unsigned int)(this->roundEndInfo.xVital.value + this->roundEndInfo.xRecoveryVital.value));
  else
    BattleSystem::BattlePlayerInfo::ApplyHandicap(this, actor, bFirstRound);
  iRoundSetCount = this->iRoundSetCount;
  if ( (int)iRoundSetCount < 5 )
    this->iFinishSkill[iRoundSetCount] = 0;
}

void __fastcall BattleSystem::BattlePlayerInfo::SetBattleDraw(BattleSystem::BattlePlayerInfo *this)
{
  unsigned int v2; // edx
  __int16 v3; // ax
  unsigned int v4; // er8
  int v5; // ecx
  unsigned int v6; // edx
  int v7; // ecx

  v2 = this->iDrawCount ^ 0x7B48A35E;
  v3 = LOWORD(this->iDrawCount) ^ 0xA35E ^ (v2 >> 14);
  this->iStraightWin = 2068357982;
  v4 = v2 ^ v3 & 0xCCCC ^ ((v3 & 0xCCCC) << 14);
  v5 = (v4 ^ (((v4 ^ (v4 >> 7)) & 0x550055) << 7) ^ (v4 ^ (v4 >> 7)) & 0x550055) + 1;
  if ( v5 > 999999999 )
    v5 = 999999999;
  v6 = v5 ^ (v5 ^ (v5 >> 7)) & 0x550055 ^ (((v5 ^ (v5 >> 7)) & 0x550055) << 7);
  v7 = ((unsigned __int16)(v5 ^ (v5 ^ (v5 >> 7)) & 0x55 ^ ((((unsigned __int16)v5 ^ (unsigned __int16)(v5 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v6 >> 14)) & 0xCCCC;
  this->iDrawCount = v6 ^ v7 ^ (v7 << 14) ^ 0x7B48A35E;
}

void __fastcall BattleSystem::BattlePlayerInfo::SetBattleLose(BattleSystem::BattlePlayerInfo *this)
{
  unsigned int v2; // edx
  __int16 v3; // ax
  unsigned int v4; // er8
  int v5; // ecx
  unsigned int v6; // edx
  int v7; // ecx

  v2 = this->iLoseCount ^ 0x7B48A35E;
  v3 = LOWORD(this->iLoseCount) ^ 0xA35E ^ (v2 >> 14);
  this->iStraightWin = 2068357982;
  v4 = v2 ^ v3 & 0xCCCC ^ ((v3 & 0xCCCC) << 14);
  v5 = (v4 ^ (((v4 ^ (v4 >> 7)) & 0x550055) << 7) ^ (v4 ^ (v4 >> 7)) & 0x550055) + 1;
  if ( v5 > 999999999 )
    v5 = 999999999;
  v6 = v5 ^ (v5 ^ (v5 >> 7)) & 0x550055 ^ (((v5 ^ (v5 >> 7)) & 0x550055) << 7);
  v7 = ((unsigned __int16)(v5 ^ (v5 ^ (v5 >> 7)) & 0x55 ^ ((((unsigned __int16)v5 ^ (unsigned __int16)(v5 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v6 >> 14)) & 0xCCCC;
  this->iLoseCount = v6 ^ v7 ^ (v7 << 14) ^ 0x7B48A35E;
}

void __fastcall BattleSystem::BattlePlayerInfo::SetBattleWin(BattleSystem::BattlePlayerInfo *this)
{
  unsigned int v2; // er8
  int v3; // ecx
  unsigned int v4; // edx
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // edx
  int v11; // ecx

  v2 = this->iWinCount ^ 0x7B48A35E ^ (LOWORD(this->iWinCount) ^ 0xA35E ^ (unsigned __int16)((this->iWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->iWinCount) ^ 0xA35E ^ (unsigned __int16)((this->iWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v3 = (v2 ^ (((v2 ^ (v2 >> 7)) & 0x550055) << 7) ^ (v2 ^ (v2 >> 7)) & 0x550055) + 1;
  if ( v3 > 999999999 )
    v3 = 999999999;
  v4 = v3 ^ (v3 ^ (v3 >> 7)) & 0x550055 ^ (((v3 ^ (v3 >> 7)) & 0x550055) << 7);
  v5 = ((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC;
  v6 = v5 ^ (v5 << 14) ^ 0x7B48A35E;
  v7 = this->iStraightWin ^ 0x7B48A35E;
  this->iWinCount = v4 ^ v6;
  v8 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 14)) & 0xCCCC) << 14);
  v9 = (v8 ^ (((v8 ^ (v8 >> 7)) & 0x550055) << 7) ^ (v8 ^ (v8 >> 7)) & 0x550055) + 1;
  if ( v9 > 999999999 )
    v9 = 999999999;
  v10 = v9 ^ (v9 ^ (v9 >> 7)) & 0x550055 ^ (((v9 ^ (v9 >> 7)) & 0x550055) << 7);
  v11 = ((unsigned __int16)(v9 ^ (v9 ^ (v9 >> 7)) & 0x55 ^ ((((unsigned __int16)v9 ^ (unsigned __int16)(v9 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v10 >> 14)) & 0xCCCC;
  this->iStraightWin = v10 ^ v11 ^ (v11 << 14) ^ 0x7B48A35E;
  BattleSystem::BattlePlayerInfo::AddNoContinueBonus(this);
}

void __fastcall BattleSystem::BattlePlayerInfo::SetPerfectWin(
        BattleSystem::BattlePlayerInfo *this,
        bool bTeamBattle,
        ActorChara *actor)
{
  bool v4; // al
  int m_StoryWinCount; // ecx
  int v6; // eax
  int v7; // er8
  int iTotalScore; // ecx
  int iPerfectBonus; // eax
  unsigned int v10; // edx
  int v11; // ecx
  unsigned int v12; // edx
  int v13; // ecx
  GameDataInfo *v14; // rcx

  ++this->iPerfectRoundCount;
  BattleSystem::BattlePlayerInfo::SetRoundWin(this, bTeamBattle, actor);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v14);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_STORY )
  {
    m_StoryWinCount = `GameDataInfo::getInstance'::`2'::instance.m_StoryWinCount;
    v6 = `GameDataInfo::getInstance'::`2'::instance.m_StoryWinCount;
    if ( `GameDataInfo::getInstance'::`2'::instance.m_StoryWinCount <= 0 )
      v6 = 0;
    if ( `GameDataInfo::getInstance'::`2'::instance.m_StoryEnemyTable[v6] == TEAM_ID_ANTONOV )
    {
      v4 = 1;
    }
    else
    {
      if ( `GameDataInfo::getInstance'::`2'::instance.m_StoryWinCount <= 0 )
        m_StoryWinCount = 0;
      v4 = `GameDataInfo::getInstance'::`2'::instance.m_StoryEnemyTable[m_StoryWinCount] == TEAM_ID_VERSE;
    }
  }
  else
  {
    v4 = 0;
  }
  v7 = 15000;
  if ( v4 )
    v7 = 45000;
  iTotalScore = this->iTotalScore;
  this->scoreInfo.iPerfectBonus += v7;
  iPerfectBonus = this->scoreInfo.iPerfectBonus;
  if ( iPerfectBonus > 99999999 )
    iPerfectBonus = 99999999;
  this->scoreInfo.iPerfectBonus = iPerfectBonus;
  v10 = iTotalScore ^ 0x7B48A35E ^ ((unsigned __int16)iTotalScore ^ 0xA35E ^ (unsigned __int16)((iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)iTotalScore ^ 0xA35E ^ (unsigned __int16)((iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v11 = v7 + ((v10 ^ (v10 >> 7)) & 0x550055 ^ v10 ^ (((v10 ^ (v10 >> 7)) & 0x550055) << 7));
  if ( v11 > 99999999 )
    v11 = 99999999;
  v12 = v11 ^ (v11 ^ (v11 >> 7)) & 0x550055 ^ (((v11 ^ (v11 >> 7)) & 0x550055) << 7);
  v13 = ((unsigned __int16)(v11 ^ (v11 ^ (v11 >> 7)) & 0x55 ^ ((((unsigned __int16)v11 ^ (unsigned __int16)(v11 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v12 >> 14)) & 0xCCCC;
  this->iTotalScore = v12 ^ v13 ^ (v13 << 14) ^ 0x7B48A35E;
}

void __fastcall BattleSystem::BattlePlayerInfo::SetRoundLose(
        BattleSystem::BattlePlayerInfo *this,
        bool bTeamBattle,
        ActorChara *actor)
{
  int iMaxExPowerExtend; // eax
  int iMemberReferIndex; // ecx

  this->roundEndInfo.xVital.value = actor->xVital.value;
  this->roundEndInfo.xExPower.value = actor->xExPower.value;
  this->roundEndInfo.xClimaxTime.value = actor->xClimaxTime.value;
  this->roundEndInfo.xGuardPower.value = actor->xGuardPower.value;
  this->roundEndInfo.xStunPower.value = actor->xStunPower.value;
  this->roundEndInfo.xRecoveryVital.value = 0;
  this->iStraightSetCount = 0;
  if ( bTeamBattle )
  {
    ++this->iMaxExPowerExtend;
    ++this->iMemberReferIndex;
    iMaxExPowerExtend = this->iMaxExPowerExtend;
    iMemberReferIndex = this->iMemberReferIndex;
    if ( iMaxExPowerExtend > 2 )
      iMaxExPowerExtend = 2;
    this->iMaxExPowerExtend = iMaxExPowerExtend;
    if ( this->iMemberCount > iMemberReferIndex )
      this->roundEndInfo.xExPower.value += 65536000;
    this->roundEndInfo.bTakeOverActor = 0;
  }
  else
  {
    this->roundEndInfo.bTakeOverActor = 0;
  }
}

void __fastcall BattleSystem::BattlePlayerInfo::SetRoundWin(
        BattleSystem::BattlePlayerInfo *this,
        bool bTeamBattle,
        ActorChara *actor)
{
  _DWORD *v5; // r14
  GameDataInfo *v6; // rcx
  bool v7; // di
  int m_StoryWinCount; // ecx
  int v9; // eax
  int v10; // eax
  GameDataInfo *v11; // rcx
  bool v12; // di
  int v13; // ecx
  int v14; // eax
  BattleSystem::BattleController *v15; // rax
  int v16; // edx
  BattleSystem::BattleController *v17; // [rsp+50h] [rbp+8h]

  ++this->iRoundSetCount;
  ++this->iStraightSetCount;
  this->roundEndInfo.xVital.value = actor->xVital.value;
  this->roundEndInfo.xExPower.value = actor->xExPower.value;
  this->roundEndInfo.xClimaxTime.value = actor->xClimaxTime.value;
  this->roundEndInfo.xGuardPower.value = actor->xGuardPower.value;
  this->roundEndInfo.xStunPower.value = actor->xStunPower.value;
  this->roundEndInfo.xRecoveryVital.value = 0;
  this->roundEndInfo.bTakeOverActor = bTeamBattle;
  v5 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v6);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_STORY )
  {
    m_StoryWinCount = `GameDataInfo::getInstance'::`2'::instance.m_StoryWinCount;
    v9 = `GameDataInfo::getInstance'::`2'::instance.m_StoryWinCount;
    if ( `GameDataInfo::getInstance'::`2'::instance.m_StoryWinCount <= 0 )
      v9 = 0;
    if ( `GameDataInfo::getInstance'::`2'::instance.m_StoryEnemyTable[v9] == TEAM_ID_ANTONOV )
    {
      v7 = 1;
    }
    else
    {
      if ( `GameDataInfo::getInstance'::`2'::instance.m_StoryWinCount <= 0 )
        m_StoryWinCount = 0;
      v7 = `GameDataInfo::getInstance'::`2'::instance.m_StoryEnemyTable[m_StoryWinCount] == TEAM_ID_VERSE;
    }
  }
  else
  {
    v7 = 0;
  }
  v10 = actor->GetVitalPercent(actor);
  BattleSystem::BattlePlayerInfo::AddLifeBonus(this, v10, v7);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v11);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_STORY )
  {
    v13 = `GameDataInfo::getInstance'::`2'::instance.m_StoryWinCount;
    v14 = `GameDataInfo::getInstance'::`2'::instance.m_StoryWinCount;
    if ( `GameDataInfo::getInstance'::`2'::instance.m_StoryWinCount <= 0 )
      v14 = 0;
    if ( `GameDataInfo::getInstance'::`2'::instance.m_StoryEnemyTable[v14] == TEAM_ID_ANTONOV )
    {
      v12 = 1;
    }
    else
    {
      if ( `GameDataInfo::getInstance'::`2'::instance.m_StoryWinCount <= 0 )
        v13 = 0;
      v12 = `GameDataInfo::getInstance'::`2'::instance.m_StoryEnemyTable[v13] == TEAM_ID_VERSE;
    }
  }
  else
  {
    v12 = 0;
  }
  v15 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v17 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v17);
    BattleSystem::BattleController::instance = v15;
  }
  if ( v15->battleInfo.timeLimit )
    v16 = v15->battleInfo.iRoundLimitFrame / 90;
  else
    v16 = -1;
  BattleSystem::BattlePlayerInfo::AddTimeBonus(this, v16, v12);
  BattleSystem::BattlePlayerInfo::AddStraightSetBonus(this);
}

