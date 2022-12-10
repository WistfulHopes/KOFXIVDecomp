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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageevent.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageeventuvanimation.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageeventuvanimation.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofshadermanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmaterial.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageevent.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.cpp"

struct BattleStageShaderDef::CustomProcessVals
{
	OGLMatrix * pBoneMatrix; // 0x0
	long * pBoneIndex; // 0x8
	CustomProcessVals();
	~CustomProcessVals();
};
void BattleStageShader::release(); // 0x140218AB0
void BattleStageShader::attachShaderParamsByModel(BattleStageEvent * pStageEvent, OGLModel * pOglModel); // 0x140218B50
void BattleStageShader::setShaderParams(STAGE_ID stageID); // 0x140218E90
void shaderProcess_GRO_Flag1(OGLRender * pRender, OGLShader * pShader, OGLModelStackData * pStack, OGLModel * pModel); // 0x1402190E0
void BattleStageShader::attachShaderParamsByModel_GRO(BattleStageEvent * pStageEvent); // 0x1402191A0
void shaderProcess_SAM(OGLRender * pRender, OGLShader * pShader, OGLModelStackData * pStack, OGLModel * pModel); // 0x140219230
bool BattleStageShader::updateCustomProcess_SAM(BattleStageEvent * pStageEvent, float advanceFrame, long animIndex, float animFrame, OGLMatrix * pMatTrans, bool bAnimationChange); // 0x140219280
void shaderProcess_MBS(OGLRender * pRender, OGLShader * pShader, OGLModelStackData * pStack, OGLModel * pModel); // 0x140219BF0
void BattleStageShader::attachShaderParamsByModel_MBS(BattleStageEvent * pStageEvent); // 0x140219C40
void shaderProcess_BAD(OGLRender * pRender, OGLShader * pShader, OGLModelStackData * pStack, OGLModel * pModel); // 0x140219D30
void shaderProcess_CHN(OGLRender * pRender, OGLShader * pShader, OGLModelStackData * pStack, OGLModel * pModel); // 0x140219CE0
void shaderProcess_LBS(OGLRender * pRender, OGLShader * pShader, OGLModelStackData * pStack, OGLModel * pModel); // 0x140219D80
void BattleStageShader::attachShaderParamsByModel_MAS(BattleStageEvent * pStageEvent); // 0x140219DD0
bool BattleStageShader::setupParams_groupModelMediate(BattleStageEvent * pStageEvent, long useCustomShaderNo); // 0x140219E70
bool BattleStageShader::createModel_groupModelMediate(BattleStageEvent * pStageEvent, long objectCount); // 0x140219FC0
void BattleStageShader::setupShaderParams_uvAnimation(BattleStageEvent * pStageEvent, OGLModel * pOglModel, long customShaderID); // 0x14021A7A0
class BattleStageEventUVAnimationShaderCustom :
	BattleStageEventUVAnimation
{
private:
	BattleStageShader * m_pShader; // 0x20
public:
	BattleStageEventUVAnimationShaderCustom(BattleStageEventUVAnimationShaderCustom &);
	BattleStageEventUVAnimationShaderCustom(const BattleStageEventUVAnimationShaderCustom &);
	BattleStageEventUVAnimationShaderCustom(BattleStageShader *);
	virtual void animation(BattleStageEvent &);
	virtual ~BattleStageEventUVAnimationShaderCustom();
	BattleStageEventUVAnimationShaderCustom & operator=(BattleStageEventUVAnimationShaderCustom &);
	BattleStageEventUVAnimationShaderCustom & operator=(const BattleStageEventUVAnimationShaderCustom &);
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B3A
void BattleStageEventUVAnimationShaderCustom::animation(BattleStageEvent & eve); // 0x14021A940
void shaderProcess_OGLRender(long shader, OGLRender * pRender, OGLShader * pShader, OGLModelStackData * pStack, OGLModel * pModel); // 0x14021AB70
void shaderProcess_UVAnimation(OGLShader * pShader, float * pWorkSpace); // 0x14021CB50//decompilation failure at 1408A0B3A!
void __fastcall BattleStageEventUVAnimationShaderCustom::animation(
        BattleStageEventUVAnimationShaderCustom *this,
        BattleStageEvent *eve)
{
  bool v3; // zf
  float **m_pCustomProcessBuffer; // rcx
  BSDataModel *m_pModel; // r8
  BSDataUVAnimation **m_pUVAnimations; // rax
  TknDataUVAnimationModelInfo *m_pUvAnimationModelInfos; // r9
  int v8; // er14
  BSDataUVAnimation *v9; // r12
  __int64 m_animationCount; // r15
  __int64 v11; // rsi
  BattleStageEventUVAnimation::Params *m_pParams; // rbp
  TknDataUVAnimation::UVAnimation *v13; // rax
  float x; // xmm1_4
  int v15; // edi
  float *v16; // rbx
  __int64 multiTextureIndex; // r8
  float *pCenterU; // rdx
  float v19; // eax
  float *pCenterV; // rdx
  float v21; // xmm0_4
  TknDataUVAnimationModelInfo *v22; // [rsp+70h] [rbp+8h]
  float **v23; // [rsp+80h] [rbp+18h]

  v3 = !this->m_bActive;
  m_pCustomProcessBuffer = this->m_pShader->m_pCustomProcessBuffer;
  v23 = m_pCustomProcessBuffer;
  if ( !v3 )
  {
    if ( m_pCustomProcessBuffer )
    {
      m_pModel = eve->m_pEvent->m_pObject->m_pModel;
      m_pUVAnimations = m_pModel->m_pUVAnimations;
      m_pUvAnimationModelInfos = m_pModel->m_pUvAnimationModelInfos;
      v22 = m_pUvAnimationModelInfos;
      v8 = 0;
      v9 = *m_pUVAnimations;
      m_animationCount = (*m_pUVAnimations)->m_animationCount;
      if ( m_animationCount > 0 )
      {
        v11 = 0i64;
        do
        {
          m_pParams = this->m_pParams;
          if ( v8 < 0 || v9->m_animationCount <= v8 )
            v13 = 0i64;
          else
            v13 = &v9->m_pAnimations[(__int64)v8];
          x = m_pParams[v11].x;
          v15 = 2 * v13->multiTextureIndex;
          v16 = m_pCustomProcessBuffer[v13->materialIndex];
          if ( x == 0.0 && m_pParams[v11].y == 0.0 && m_pParams[v11].rot == 0.0 )
          {
            v16[v15] = 0.0;
            v16[v15 + 1] = 0.0;
            v16[v15 + 4] = 0.0;
            v16[v15 + 5] = 0.0;
            v16[v15 + 8] = 0.0;
            v16[v15 + 9] = 1.0;
          }
          else if ( m_pParams[v11].rot == 0.0 )
          {
            v16[v15] = x;
            v16[v15 + 1] = m_pParams[v11].y;
            v16[v15 + 4] = 0.0;
            v16[v15 + 5] = 0.0;
            v16[v15 + 8] = 0.0;
            v16[v15 + 9] = 1.0;
          }
          else
          {
            multiTextureIndex = v13->multiTextureIndex;
            pCenterU = m_pUvAnimationModelInfos->pCenterU;
            v16[v15] = x;
            v16[v15 + 1] = m_pParams[v11].y;
            v19 = pCenterU[multiTextureIndex];
            pCenterV = m_pUvAnimationModelInfos->pCenterV;
            v16[v15 + 4] = v19;
            v16[v15 + 5] = pCenterV[multiTextureIndex];
            v16[v15 + 8] = sinf(m_pParams[v11].rot);
            v21 = cosf(m_pParams[v11].rot);
            m_pUvAnimationModelInfos = v22;
            v16[v15 + 9] = v21;
          }
          m_pCustomProcessBuffer = v23;
          ++v8;
          ++v11;
          --m_animationCount;
        }
        while ( m_animationCount );
      }
    }
  }
}

void __fastcall BattleStageShader::attachShaderParamsByModel(
        BattleStageShader *this,
        BattleStageEvent *pStageEvent,
        OGLModel *pOglModel)
{
  BSDataObject *m_pObject; // rdx
  BSDataModel *m_pModel; // rdx
  OGLModel *m_pOGLModel; // rsi
  const char *m_pModelName; // rcx
  const char *v9; // rcx
  const char *v10; // rcx
  const char *v11; // rcx
  int v12; // er8
  const char *v13; // rcx
  const char *v14; // rcx
  const char *v15; // rcx
  const char *v16; // rcx

  if ( pStageEvent )
  {
    m_pObject = pStageEvent->m_pObject;
    if ( m_pObject )
    {
      m_pModel = m_pObject->m_pModel;
      if ( m_pModel )
      {
        if ( m_pModel->m_pOGLModel )
        {
          m_pOGLModel = pStageEvent->m_pOGLModel;
          if ( m_pOGLModel )
          {
            switch ( pStageEvent->m_pResourceContainer->m_stageID )
            {
              case STAGE_ID_GRO:
                BattleStageShader::attachShaderParamsByModel_GRO(this, pStageEvent);
                break;
              case STAGE_ID_STH:
                m_pModelName = m_pModel->m_pModelName;
                if ( m_pModelName && strstr(m_pModelName, "STH_FLAG") )
                  goto LABEL_32;
                break;
              case STAGE_ID_WMN:
                v14 = m_pModel->m_pModelName;
                if ( v14 && strstr(v14, "WMN_FLAG") )
                  goto LABEL_32;
                break;
              case STAGE_ID_PSY:
                v9 = m_pModel->m_pModelName;
                if ( v9 && strstr(v9, "PSY_Flag02") )
                  BattleStageShader::setupShaderParams_uvAnimation(this, pStageEvent, m_pOGLModel, 7);
                break;
              case STAGE_ID_BAD:
                v13 = m_pModel->m_pModelName;
                if ( v13 && strstr(v13, "_LGT") )
                  goto LABEL_32;
                break;
              case STAGE_ID_MEX:
                v10 = m_pModel->m_pModelName;
                if ( v10 && strstr(v10, "MEX_FLAG_") )
                  goto LABEL_32;
                break;
              case STAGE_ID_CHN:
                v15 = m_pModel->m_pModelName;
                if ( v15 && strstr(v15, "CHN_FLAG") )
                  goto LABEL_32;
                break;
              case STAGE_ID_SAM:
                v11 = m_pModel->m_pModelName;
                if ( v11 && strstr(v11, "SAM_MACAW") )
                  BattleStageShader::setupParams_groupModelMediate(this, pStageEvent, v12);
                break;
              case STAGE_ID_MBS:
                BattleStageShader::attachShaderParamsByModel_MBS(this, pStageEvent);
                break;
              case STAGE_ID_LBS:
                v16 = m_pModel->m_pModelName;
                if ( v16 && strstr(v16, "LBS_TVIMAGE00") )
LABEL_32:
                  BattleStageShader::setupShaderParams_uvAnimation(this, pStageEvent, m_pOGLModel, 6);
                break;
              case STAGE_ID_MAS:
                BattleStageShader::attachShaderParamsByModel_MAS(this, pStageEvent);
                break;
              default:
                return;
            }
          }
        }
      }
    }
  }
}

void __fastcall BattleStageShader::attachShaderParamsByModel_GRO(
        BattleStageShader *this,
        BattleStageEvent *pStageEvent)
{
  OGLModel *m_pOGLModel; // rbp
  BSDataModel *m_pModel; // r8
  const char *m_pModelName; // rdi
  int v7; // er9

  m_pOGLModel = pStageEvent->m_pOGLModel;
  m_pModel = pStageEvent->m_pObject->m_pModel;
  m_pModelName = m_pModel->m_pModelName;
  if ( m_pModelName )
  {
    if ( strstr(m_pModel->m_pModelName, "GRO_FLAG") )
    {
      v7 = 6;
    }
    else
    {
      if ( !strstr(m_pModelName, "GRO_USAFLAG") )
        return;
      v7 = 7;
    }
    BattleStageShader::setupShaderParams_uvAnimation(this, pStageEvent, m_pOGLModel, v7);
  }
}

void __fastcall BattleStageShader::attachShaderParamsByModel_MAS(
        BattleStageShader *this,
        BattleStageEvent *pStageEvent)
{
  OGLModel *m_pOGLModel; // rbp
  BSDataModel *m_pModel; // r8
  const char *m_pModelName; // rbx

  m_pOGLModel = pStageEvent->m_pOGLModel;
  m_pModel = pStageEvent->m_pObject->m_pModel;
  m_pModelName = m_pModel->m_pModelName;
  if ( m_pModelName
    && (strstr(m_pModel->m_pModelName, "MAS_FLAG_01")
     || strstr(m_pModelName, "MAS_FLAG_02")
     || strstr(m_pModelName, "MAS_FLAG_03")) )
  {
    BattleStageShader::setupShaderParams_uvAnimation(this, pStageEvent, m_pOGLModel, 6);
  }
}

void __fastcall BattleStageShader::attachShaderParamsByModel_MBS(
        BattleStageShader *this,
        BattleStageEvent *pStageEvent)
{
  OGLModel *m_pOGLModel; // rbp
  BSDataModel *m_pModel; // r8
  const char *m_pModelName; // rdi

  m_pOGLModel = pStageEvent->m_pOGLModel;
  m_pModel = pStageEvent->m_pObject->m_pModel;
  m_pModelName = m_pModel->m_pModelName;
  if ( m_pModelName )
  {
    if ( strstr(m_pModel->m_pModelName, "MBS_FLAG") )
      BattleStageShader::setupShaderParams_uvAnimation(this, pStageEvent, m_pOGLModel, 7);
    if ( strstr(m_pModelName, "MBS_MOB") )
      BattleStageShader::setupShaderParams_uvAnimation(this, pStageEvent, m_pOGLModel, 6);
  }
}

char __fastcall BattleStageShader::createModel_groupModelMediate(
        BattleStageShader *this,
        BattleStageEvent *pStageEvent,
        unsigned __int64 objectCount,
        int a4)
{
  int v4; // edi
  BSDataObject *m_pObject; // rax
  BSDataModel *m_pModel; // rcx
  OGLModel *m_pOGLModel; // rax
  OGLFigure *m_pFigure; // r13
  OGLModel *v10; // rax
  __int128 v11; // xmm7
  __int128 v12; // xmm8
  __int128 v13; // xmm9
  __m128 v14; // xmm6
  int m_usIndexCount; // er12
  __int64 m_ucMaterialCount; // rbx
  OGLFigure *OGLFigure; // r15
  __int64 v18; // rsi
  __int64 v19; // r12
  OGLMaterial *v20; // rbx
  OGLMaterial *v21; // rdi
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // r9
  int v25; // ebx
  unsigned int v26; // esi
  __int64 v27; // r11
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __m128i v31; // xmm2
  __int64 v32; // r10
  __int64 v33; // r9
  __int64 v34; // rbx
  float *v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r8
  unsigned __int64 p_m_pusIndex; // rdi
  unsigned __int64 m_pusIndex; // r9
  unsigned int *v40; // r10
  int v41; // edx
  unsigned __int64 v42; // r12
  unsigned __int64 v43; // rbx
  __int64 v44; // rcx
  unsigned __int64 v45; // r9
  __int64 v46; // r12
  int v47; // edx
  OGLMaterial *m_pMaterial; // r11
  OGLMaterial *v49; // rdi
  int v50; // ecx
  unsigned int v51; // er10
  __int64 v52; // r8
  OGLModel *v53; // rax
  OGLModel *v54; // rsi
  unsigned __int64 v55; // r8
  __int64 v56; // r10
  OGLTexture **v57; // r9
  __int64 v58; // rbx
  __int64 i; // rdx
  unsigned __int64 v60; // r8
  __int64 v61; // rax
  OGLTexture **v62; // rcx
  int v63; // er8
  int v64; // [rsp+38h] [rbp-D0h]
  unsigned int m_usVertexCoordCount; // [rsp+3Ch] [rbp-CCh]
  __int64 v66; // [rsp+40h] [rbp-C8h]
  __int64 v67; // [rsp+48h] [rbp-C0h]
  __int64 v68; // [rsp+50h] [rbp-B8h]
  __int64 v69; // [rsp+58h] [rbp-B0h]
  __int64 v70; // [rsp+60h] [rbp-A8h]
  OGLModel *pSrc; // [rsp+68h] [rbp-A0h]
  __int128 lpCriticalSection_8; // [rsp+78h] [rbp-90h]
  __int128 v73; // [rsp+88h] [rbp-80h]
  __int128 v74; // [rsp+98h] [rbp-70h]
  __m128 v75; // [rsp+A8h] [rbp-60h]
  char *m_pfVertexBuffer; // [rsp+B8h] [rbp-50h]
  __int64 v77; // [rsp+C0h] [rbp-48h]
  __int64 v78; // [rsp+C8h] [rbp-40h]
  __int64 v79; // [rsp+D0h] [rbp-38h]
  __int64 v80; // [rsp+D8h] [rbp-30h]
  int v81; // [rsp+188h] [rbp+80h]
  OGLModel *v82; // [rsp+188h] [rbp+80h]
  int v84; // [rsp+198h] [rbp+90h]
  int v85; // [rsp+1A0h] [rbp+98h]

  v84 = objectCount;
  v4 = objectCount;
  if ( !pStageEvent->m_bStageModel )
  {
    m_pObject = pStageEvent->m_pObject;
    if ( !m_pObject )
      return 0;
    m_pModel = m_pObject->m_pModel;
    if ( !m_pModel )
      return 0;
    m_pOGLModel = m_pModel->m_pOGLModel;
    pSrc = m_pOGLModel;
    if ( !m_pOGLModel )
      return 0;
    m_pFigure = m_pOGLModel->m_pFigure;
    if ( !m_pFigure )
      return 0;
    lpCriticalSection_8 = 0ui64;
    v73 = 0ui64;
    v74 = 0ui64;
    v75 = 0ui64;
    v10 = pStageEvent->m_pOGLModel;
    if ( v10 )
    {
      v11 = *(_OWORD *)v10->m_mWorld.m;
      lpCriticalSection_8 = v11;
      v12 = *(_OWORD *)&v10->m_mWorld.m[4];
      v73 = v12;
      v13 = *(_OWORD *)&v10->m_mWorld.m[8];
      v74 = v13;
      v14 = *(__m128 *)&v10->m_mWorld.m[12];
      v75 = v14;
      BattleStageEvent::releaseOGLModel(pStageEvent, (__int64)pStageEvent, objectCount);
    }
    else
    {
      v14 = 0ui64;
      v13 = 0ui64;
      v12 = 0ui64;
      v11 = 0ui64;
    }
    m_usVertexCoordCount = m_pFigure->m_usVertexCoordCount;
    m_usIndexCount = m_pFigure->m_usIndexCount;
    v81 = m_usIndexCount;
    m_ucMaterialCount = (int)m_pFigure->m_ucMaterialCount;
    OGLFigure = BSUtil::createOGLFigure(
                  v4 * m_usVertexCoordCount,
                  v4 * m_usIndexCount,
                  m_pFigure->m_ucMaterialCount,
                  a4);
    OGLFigure->m_iFormatType |= 0x100u;
    v77 = m_ucMaterialCount;
    if ( (int)m_ucMaterialCount > 0 )
    {
      v18 = 0i64;
      v19 = m_ucMaterialCount;
      do
      {
        v20 = &m_pFigure->m_pMaterial[v18];
        v21 = &OGLFigure->m_pMaterial[v18];
        OGLMaterial::copy(v21, v20, 0x20ui64, 32);
        v21->m_cTextureIndex = v20->m_cTextureIndex;
        v21->m_usIndex = v20->m_usIndex;
        BSUtil::createOGLMaterialIndexBuffer(v21, v84 * v20->m_usIndexCount);
        ++v18;
        --v19;
      }
      while ( v19 );
      m_usIndexCount = v81;
    }
    m_pfVertexBuffer = (char *)m_pFigure->m_pfVertexBuffer;
    v22 = 0;
    v85 = 0;
    v23 = (int)m_usVertexCoordCount;
    v24 = m_usIndexCount;
    v66 = m_usIndexCount;
    if ( v84 > 0 )
    {
      v25 = 0;
      v64 = 0;
      v26 = 0;
      v27 = 0i64;
      v70 = 0i64;
      v28 = 0i64;
      v69 = 0i64;
      v29 = 0i64;
      v68 = 0i64;
      v30 = 0i64;
      v67 = 0i64;
      v80 = 12i64 * (int)m_usVertexCoordCount;
      v79 = 8i64 * (int)m_usVertexCoordCount;
      v78 = 16i64 * (int)m_usVertexCoordCount;
      do
      {
        v31 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v26), 0);
        v32 = 0i64;
        if ( v23 > 0 )
        {
          v33 = v30;
          v34 = v29;
          v35 = (float *)(m_pfVertexBuffer + 8);
          v36 = v28;
          do
          {
            *(float *)((char *)OGLFigure->m_pfVertexCoord + v36) = *(v35 - 2);
            *(float *)((char *)OGLFigure->m_pfVertexCoord + v36 + 4) = *(v35 - 1);
            *(float *)((char *)OGLFigure->m_pfVertexCoord + v36 + 8) = *v35;
            *(float *)((char *)OGLFigure->m_pfNormalCoord + v36) = v35[1];
            *(float *)((char *)OGLFigure->m_pfNormalCoord + v36 + 4) = v35[2];
            *(float *)((char *)OGLFigure->m_pfNormalCoord + v36 + 8) = v35[3];
            *(float *)((char *)OGLFigure->m_pfTangentCoord + v36) = v35[4];
            *(float *)((char *)OGLFigure->m_pfTangentCoord + v36 + 4) = v35[5];
            *(float *)((char *)OGLFigure->m_pfTangentCoord + v36 + 8) = v35[6];
            *(float *)((char *)OGLFigure->m_pfTexCoord[0] + v34) = m_pFigure->m_pfTexCoord[0][2 * v32];
            *(float *)((char *)OGLFigure->m_pfTexCoord[0] + v34 + 4) = m_pFigure->m_pfTexCoord[0][2 * v32 + 1];
            *(float *)((char *)OGLFigure->m_pfVertexColor + v33) = (float)v22;
            *(float *)((char *)OGLFigure->m_pfVertexColor + v33 + 4) = 0.0;
            *(float *)((char *)OGLFigure->m_pfVertexColor + v33 + 8) = 0.0;
            *(float *)((char *)OGLFigure->m_pfVertexColor + v33 + 12) = 0.0;
            ++v32;
            v36 += 12i64;
            v34 += 8i64;
            v33 += 16i64;
            v35 += 34;
          }
          while ( v32 < v23 );
          v24 = m_usIndexCount;
          v25 = v64;
        }
        v37 = 0i64;
        if ( m_usIndexCount > 0 && (unsigned int)m_usIndexCount >= 8 )
        {
          p_m_pusIndex = (unsigned __int64)&m_pFigure->m_pusIndex;
          m_pusIndex = (unsigned __int64)m_pFigure->m_pusIndex;
          v40 = OGLFigure->m_pusIndex;
          v41 = m_usIndexCount - 1;
          v42 = (unsigned __int64)&v40[v27];
          v43 = (unsigned __int64)&v40[v25 + v41];
          if ( v42 <= m_pusIndex + 4i64 * v41 && v43 >= m_pusIndex
            || v42 <= p_m_pusIndex && v43 >= p_m_pusIndex
            || v42 <= (unsigned __int64)&OGLFigure->m_pusIndex && v43 >= (unsigned __int64)&OGLFigure->m_pusIndex )
          {
            m_usIndexCount = v81;
            v24 = v66;
          }
          else
          {
            m_usIndexCount = v81;
            v44 = 4i64;
            do
            {
              *(__m128i *)&v40[v44 - 4 + v27] = _mm_add_epi32(
                                                  _mm_loadu_si128((const __m128i *)(v44 * 4 + m_pusIndex - 16)),
                                                  v31);
              *(__m128i *)&v40[v44 + v27] = _mm_add_epi32(_mm_loadu_si128((const __m128i *)(v44 * 4 + m_pusIndex)), v31);
              v37 += 8i64;
              v44 += 8i64;
            }
            while ( v37 < v81 - v81 % 8 );
            v24 = v81;
          }
        }
        for ( ; v37 < v24; ++v37 )
          OGLFigure->m_pusIndex[v37 + v27] = v26 + m_pFigure->m_pusIndex[v37];
        if ( v77 > 0 )
        {
          v45 = 0i64;
          v46 = v77;
          v47 = v85;
          do
          {
            m_pMaterial = m_pFigure->m_pMaterial;
            v49 = OGLFigure->m_pMaterial;
            v50 = v47 * m_pMaterial[v45].m_usIndexCount;
            v51 = 0;
            if ( m_pMaterial[v45].m_usIndexCount )
            {
              v52 = 0i64;
              do
              {
                v49[v45].m_psIndex[v50 + v52] = v26 + m_pMaterial[v45].m_psIndex[v52];
                ++v51;
                ++v52;
              }
              while ( v51 < m_pMaterial[v45].m_usIndexCount );
              v47 = v85;
            }
            ++v45;
            --v46;
          }
          while ( v46 );
          v27 = v70;
          m_usIndexCount = v81;
          v24 = v66;
        }
        v22 = v85 + 1;
        v85 = v22;
        v26 += m_usVertexCoordCount;
        v30 = v78 + v67;
        v67 += v78;
        v29 = v79 + v68;
        v68 += v79;
        v28 = v80 + v69;
        v69 += v80;
        v25 = m_usIndexCount + v64;
        v64 += m_usIndexCount;
        v27 += v24;
        v70 = v27;
        v23 = (int)m_usVertexCoordCount;
      }
      while ( v22 < v84 );
    }
    BSUtil::createOGLFigureVertexBuffer(OGLFigure);
    v82 = (OGLModel *)operator new(0x2498ui64);
    OGLModel::OGLModel(v82);
    v54 = v53;
    OGLModel::setFigure(v53, OGLFigure, v55);
    if ( (v54->m_uiModeFlg & 0x400) == 0 )
      v54->m_pMotion[0] = 0i64;
    LODWORD(v54->m_vPosition.x) = v14.m128_i32[0];
    LODWORD(v54->m_vPosition.y) = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
    LODWORD(v54->m_vPosition.z) = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
    *(_OWORD *)v54->m_mWorld.m = v11;
    *(_OWORD *)&v54->m_mWorld.m[4] = v12;
    *(_OWORD *)&v54->m_mWorld.m[8] = v13;
    *(__m128 *)&v54->m_mWorld.m[12] = v14;
    v54->m_bPostureChange = 1;
    v56 = 0i64;
    v57 = pSrc->m_pTexture[0];
    v58 = 64i64;
    do
    {
      for ( i = 0i64; i < 4; ++i )
      {
        v60 = v56;
        if ( v56 < 0 )
        {
          v61 = 0i64;
          v62 = v54->m_pTexture[0];
          while ( *v62 )
          {
            ++v61;
            v62 += 4;
            if ( v61 >= 64 )
              goto LABEL_53;
          }
          v60 = v61;
        }
LABEL_53:
        if ( v60 <= 0x3F && i >= 0 )
          v54->m_pTexture[v60][i] = *v57;
        ++v57;
      }
      ++v56;
      --v58;
    }
    while ( v58 );
    BSUtil::copyOGLModelExtraParams(pSrc, v54);
    *(_DWORD *)&v54->m_createShadowFlg = 0;
    v54->m_lowAccuracyShadowBias = 0;
    v54->m_bPrevBoneMirrorFlg = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&v54->m_postureCondMutex);
    while ( !v54->bWakeThread._My_val && AgThread::getIsRunning(&v54->m_updateThread) )
      AgCondition::wait(&v54->m_postureReadyCond, &v54->m_postureCondMutex, v63);
    LeaveCriticalSection((LPCRITICAL_SECTION)&v54->m_postureCondMutex);
    if ( v54->m_pMotion[0] )
    {
      *(_OWORD *)v54->m_mTmpMatrix.m = lpCriticalSection_8;
      *(_OWORD *)&v54->m_mTmpMatrix.m[4] = v73;
      *(_OWORD *)&v54->m_mTmpMatrix.m[8] = v74;
      *(__m128 *)&v54->m_mTmpMatrix.m[12] = v75;
      v54->m_fTmpBlend = 0.0;
      v54->m_uiTmpCalcTarget = 3;
      if ( v54->bCreateUpdateThread )
      {
        v54->bWakeThread._My_val = 0;
        EnterCriticalSection((LPCRITICAL_SECTION)&v54->updateCondMutex);
        EnterCriticalSection((LPCRITICAL_SECTION)&v54->updataCond);
        WakeConditionVariable((PCONDITION_VARIABLE)&v54->updataCond.m_conditionVariable.m_data);
        LeaveCriticalSection((LPCRITICAL_SECTION)&v54->updataCond);
        LeaveCriticalSection((LPCRITICAL_SECTION)&v54->updateCondMutex);
      }
      else
      {
        v54->bCreateUpdateThread = 1;
        v54->bWakeThread._My_val = 0;
        AgThread::join(&v54->m_updateThread);
        AgThread::start(&v54->m_updateThread, v54, 0x100000ui64, 0, "ModelPosture");
      }
    }
    pStageEvent->m_pOGLModel = v54;
    pStageEvent->m_createStateBits |= 3u;
  }
  return 1;
}

void __fastcall BattleStageShader::release(BattleStageShader *this, unsigned __int64 a2)
{
  int v3; // esi
  __int64 v4; // rdi
  float *v5; // rcx
  float **m_pCustomProcessBuffer; // rcx

  this->m_renderType = RENDERTYPE_NORMAL;
  *(_WORD *)&this->m_bUVChanged = 0;
  this->m_bUseCustomProcess = 0;
  if ( this->m_pCustomProcessBuffer )
  {
    v3 = 0;
    if ( this->m_customProcessBufferCount > 0 )
    {
      v4 = 0i64;
      do
      {
        v5 = this->m_pCustomProcessBuffer[v4];
        if ( v5 )
        {
          operator delete(v5, a2);
          this->m_pCustomProcessBuffer[v4] = 0i64;
        }
        ++v3;
        ++v4;
      }
      while ( v3 < this->m_customProcessBufferCount );
    }
    m_pCustomProcessBuffer = this->m_pCustomProcessBuffer;
    if ( m_pCustomProcessBuffer )
      operator delete(m_pCustomProcessBuffer, a2);
    this->m_pCustomProcessBuffer = 0i64;
    this->m_customProcessBufferCount = 0;
  }
  else
  {
    this->m_pCustomProcessBuffer = 0i64;
    this->m_customProcessBufferCount = 0;
  }
}

void __fastcall BattleStageShader::setShaderParams(STAGE_ID stageID)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rcx
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx

  switch ( stageID )
  {
    case STAGE_ID_GRO:
      v1 = *(_QWORD **)(*(_QWORD *)&AppMain::pApp + 80i64);
      v1[78147] = v1[73787];
      v1[78131] = shaderProcess_GRO_Flag1;
      break;
    case STAGE_ID_STH:
      v2 = *(_QWORD **)(*(_QWORD *)&AppMain::pApp + 80i64);
      v2[78147] = v2[73782];
      v2[78131] = shaderProcess_MEX;
      break;
    case STAGE_ID_WMN:
      v8 = *(_QWORD **)(*(_QWORD *)&AppMain::pApp + 80i64);
      v8[78147] = v8[73786];
      v8[78131] = shaderProcess_MEX;
      break;
    case STAGE_ID_PSY:
      v3 = *(_QWORD **)(*(_QWORD *)&AppMain::pApp + 80i64);
      v3[78148] = v3[73784];
      v3[78132] = shaderProcess_MEX;
      break;
    case STAGE_ID_BAD:
      v6 = *(_QWORD **)(*(_QWORD *)&AppMain::pApp + 80i64);
      v6[78147] = v6[73789];
      v6[78131] = shaderProcess_BAD;
      break;
    case STAGE_ID_MEX:
      v4 = *(_QWORD **)(*(_QWORD *)&AppMain::pApp + 80i64);
      v4[78147] = v4[73785];
      v4[78131] = shaderProcess_MEX;
      break;
    case STAGE_ID_CHN:
      v9 = *(_QWORD **)(*(_QWORD *)&AppMain::pApp + 80i64);
      v9[78147] = v9[73788];
      v9[78131] = shaderProcess_MEX;
      break;
    case STAGE_ID_SAM:
      v5 = *(_QWORD **)(*(_QWORD *)&AppMain::pApp + 80i64);
      v5[78147] = v5[73781];
      v5[78131] = shaderProcess_SAM;
      break;
    case STAGE_ID_MBS:
      v7 = *(_QWORD **)(*(_QWORD *)&AppMain::pApp + 80i64);
      v7[78148] = v7[73779];
      v7[78147] = v7[73780];
      v7[78132] = shaderProcess_MBS;
      v7[78131] = shaderProcess_MBS;
      break;
    case STAGE_ID_LBS:
      v10 = *(_QWORD **)(*(_QWORD *)&AppMain::pApp + 80i64);
      v10[78147] = v10[73790];
      v10[78131] = shaderProcess_LBS;
      break;
    case STAGE_ID_MAS:
      v11 = *(_QWORD **)(*(_QWORD *)&AppMain::pApp + 80i64);
      v11[78147] = v11[73791];
      v11[78131] = shaderProcess_BAD;
      break;
    default:
      return;
  }
}

char __fastcall BattleStageShader::setupParams_groupModelMediate(
        BattleStageShader *this,
        BattleStageEvent *pStageEvent,
        int useCustomShaderNo,
        int a4)
{
  BSDataObject *m_pObject; // rax
  char result; // al
  int m_groupObjectCount; // ebx
  OGLModel *m_pOGLModel; // r14
  __int64 m_ucMaterialCount; // r15
  bool v11; // of
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // ebp
  __int64 v15; // rsi
  __int64 v16; // r8
  OGLMaterial *m_pMaterial; // rdx
  float *v18; // rcx

  m_pObject = pStageEvent->m_pObject;
  if ( !m_pObject || !m_pObject->m_pModel )
    return 0;
  m_groupObjectCount = pStageEvent->m_groupObjectCount;
  if ( m_groupObjectCount >= 40 )
  {
    m_groupObjectCount = 40;
  }
  else if ( m_groupObjectCount <= 0 )
  {
    return 1;
  }
  result = BattleStageShader::createModel_groupModelMediate(this, pStageEvent, (unsigned int)m_groupObjectCount, a4);
  if ( result )
  {
    m_pOGLModel = pStageEvent->m_pOGLModel;
    if ( m_pOGLModel )
    {
      m_ucMaterialCount = m_pOGLModel->m_ucMaterialCount;
      v12 = 8 * m_ucMaterialCount;
      v11 = (m_pOGLModel->m_ucMaterialCount * (unsigned __int128)8ui64) >> 64 != 0;
      this->m_customProcessBufferCount = m_ucMaterialCount;
      this->m_customProcessI1 = m_groupObjectCount;
      if ( v11 )
        v12 = -1i64;
      v13 = 0i64;
      this->m_pCustomProcessBuffer = (float **)operator new[](v12);
      v14 = 0;
      if ( this->m_customProcessBufferCount > 0 )
      {
        v15 = 0i64;
        do
        {
          ++v15;
          ++v14;
          this->m_pCustomProcessBuffer[v15 - 1] = (float *)operator new[](0xA00ui64);
        }
        while ( v14 < this->m_customProcessBufferCount );
      }
      if ( m_ucMaterialCount )
      {
        v16 = 0i64;
        do
        {
          ++v16;
          m_pMaterial = m_pOGLModel->m_pMaterial;
          v18 = this->m_pCustomProcessBuffer[v13++];
          m_pMaterial[v16 - 1].work3 = v18;
          m_pMaterial[v16 - 1].m_iRenderNo = 6;
        }
        while ( v13 < m_ucMaterialCount );
      }
      result = 1;
      this->m_bUseCustomProcess = 1;
      this->m_renderType = RENDERTYPE_CUSTOM_DRAW_STACK;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

void __fastcall BattleStageShader::setupShaderParams_uvAnimation(
        BattleStageShader *this,
        BattleStageEvent *pStageEvent,
        OGLModel *pOglModel,
        int customShaderID)
{
  int m_ucMaterialCount; // ebx
  unsigned __int64 v8; // rax
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rbx
  float *v13; // rax
  BattleStageEventUVAnimation *v14; // rbx
  BattleStageEventUVAnimation *m_pUVAnimation; // rcx

  m_ucMaterialCount = pOglModel->m_ucMaterialCount;
  this->m_customProcessBufferCount = m_ucMaterialCount;
  v8 = 8i64 * m_ucMaterialCount;
  if ( !is_mul_ok(m_ucMaterialCount, 8ui64) )
    v8 = -1i64;
  v10 = 0i64;
  this->m_pCustomProcessBuffer = (float **)operator new[](v8);
  v11 = (unsigned int)m_ucMaterialCount;
  if ( m_ucMaterialCount )
  {
    v12 = 0i64;
    do
    {
      ++v12;
      this->m_pCustomProcessBuffer[v10] = (float *)operator new[](0x100ui64);
      pOglModel->m_pMaterial[v12 - 1].m_iRenderNo = customShaderID;
      v13 = this->m_pCustomProcessBuffer[v10++];
      pOglModel->m_pMaterial[v12 - 1].work3 = v13;
    }
    while ( v10 < v11 );
  }
  this->m_bUseUVAnimationCustomShader = 1;
  v14 = (BattleStageEventUVAnimation *)operator new(0x28ui64);
  *(_WORD *)&v14->m_bActive = 0;
  v14->m_pParams = 0i64;
  v14->m_paramCount = 0;
  v14->m_bModelUVChanged = 0;
  v14->__vftable = (BattleStageEventUVAnimation_vtbl *)&BattleStageEventUVAnimationShaderCustom::`vftable';
  v14[1].__vftable = (BattleStageEventUVAnimation_vtbl *)this;
  m_pUVAnimation = pStageEvent->m_pUVAnimation;
  if ( m_pUVAnimation )
  {
    ((void (__fastcall *)(BattleStageEventUVAnimation *, __int64))m_pUVAnimation->~BattleStageEventUVAnimation)(
      m_pUVAnimation,
      1i64);
    pStageEvent->m_pUVAnimation = 0i64;
  }
  pStageEvent->m_pUVAnimation = v14;
  v14->setup(v14, pStageEvent);
}

void __fastcall shaderProcess_BAD(OGLRender *pRender, OGLShader *pShader, OGLModelStackData *pStack, OGLModel *pModel)
{
  shaderProcess_OGLRender(3840, pRender, pShader, pStack, pModel);
  shaderProcess_UVAnimation(pShader, pStack->work3);
}

void __fastcall shaderProcess_MEX(OGLRender *pRender, OGLShader *pShader, OGLModelStackData *pStack, OGLModel *pModel)
{
  shaderProcess_OGLRender(7936, pRender, pShader, pStack, pModel);
  shaderProcess_UVAnimation(pShader, pStack->work3);
}

void __fastcall shaderProcess_GRO_Flag1(
        OGLRender *pRender,
        OGLShader *pShader,
        OGLModelStackData *pStack,
        OGLModel *pModel)
{
  if ( _glewPushGroupMarkerEXT )
    _glewPushGroupMarkerEXT(0, "Render Flag1");
  if ( _glewPushDebugGroup )
    _glewPushDebugGroup(0x824Au, 1u, 12, "Render Flag1");
  shaderProcess_OGLRender(7936, pRender, pShader, pStack, pModel);
  shaderProcess_UVAnimation(pShader, pStack->work3);
  if ( _glewPopGroupMarkerEXT )
    _glewPopGroupMarkerEXT();
  if ( _glewPopDebugGroup )
    _glewPopDebugGroup();
}

void __fastcall shaderProcess_LBS(OGLRender *pRender, OGLShader *pShader, OGLModelStackData *pStack, OGLModel *pModel)
{
  shaderProcess_OGLRender(7424, pRender, pShader, pStack, pModel);
  shaderProcess_UVAnimation(pShader, pStack->work3);
}

void __fastcall shaderProcess_MBS(OGLRender *pRender, OGLShader *pShader, OGLModelStackData *pStack, OGLModel *pModel)
{
  shaderProcess_OGLRender(6912, pRender, pShader, pStack, pModel);
  shaderProcess_UVAnimation(pShader, pStack->work3);
}

void __fastcall shaderProcess_OGLRender(
        int shader,
        OGLRender *pRender,
        OGLShader *pShader,
        OGLModelStackData *pStack,
        OGLModel *pModel)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  OGLRender *v8; // r10
  __int16 v9; // r12
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  AgSingleton<KOFShaderManager> *v12; // rdi
  unsigned int v13; // er9
  __int64 v14; // rcx
  int v15; // esi
  int v16; // er14
  signed int v17; // er10
  int renderSize; // ecx
  int v19; // eax
  signed int v20; // er10
  int v21; // ecx
  int v22; // eax
  OGLModel *v23; // r10
  __int64 v24; // rcx
  __int64 m_pfNormalCoord; // r8
  int v26; // eax
  signed int v27; // ecx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  __int64 m_pfTangentCoord; // r8
  int v32; // eax
  signed int v33; // ecx
  int v34; // edx
  int v35; // eax
  __int64 v36; // rcx
  __int64 m_piVerColor; // r8
  int v38; // eax
  signed int v39; // ecx
  int v40; // eax
  unsigned __int8 v41; // r9
  int v42; // eax
  char v43; // al
  float *v44; // r8
  int v45; // ecx
  _DWORD *v46; // r13
  int v47; // ecx
  OGLModel *v48; // r12
  bool v49; // zf
  OGLFigure *v50; // r15
  signed int v51; // esi
  __int64 *v52; // r14
  __int64 v53; // r8
  __int64 v54; // rcx
  signed int v55; // er15
  float **m_pfTexCoord; // rsi
  __int64 *v57; // r14
  __int64 v58; // r8
  __int64 v59; // rcx
  signed int i; // edi
  GLuint v61; // edx
  Framework::GLManager *v62; // rcx
  Framework::GLManager *v63; // rcx
  Framework::GLManager *v64; // rcx
  GLuint v65; // edx
  Framework::GLManager *v66; // rcx
  GLuint v67; // edx
  Framework::GLManager *v68; // rcx
  GLuint v69; // edx
  Framework::GLManager *v70; // rcx
  Framework::GLManager *v71; // rcx
  unsigned int v72; // er8
  unsigned int v73; // er8
  unsigned int v74; // er8
  unsigned int v75; // er8
  __int64 v76; // r10
  int v77; // eax
  signed int v78; // ecx
  int v79; // eax
  GLuint v80; // edx
  Framework::GLManager *v81; // rcx
  GLuint v82; // edx
  Framework::GLManager *v83; // rcx
  Framework::GLManager *v84; // rcx
  GLuint v85; // edx
  Framework::GLManager *v86; // rcx
  Framework::GLManager *v87; // rcx
  GLuint v88; // edx
  Framework::GLManager *v89; // rcx
  Framework::GLManager *v90; // rcx
  Framework::GLManager *v91; // rcx
  GLuint v92; // edx
  Framework::GLManager *v93; // rcx
  GLuint v94; // edx
  Framework::GLManager *v95; // rcx
  Framework::GLManager *v96; // rcx
  OGLRender *v97; // rdi
  GLuint m_TexID; // edx
  Framework::GLManager *v99; // rcx
  GLuint v100; // edx
  Framework::GLManager *v101; // r8
  GLuint v102; // edx
  Framework::GLManager *v103; // rcx
  GLuint v104; // edx
  Framework::GLManager *v105; // rcx
  GLuint v106; // edx
  Framework::GLManager *v107; // rcx
  GLuint v108; // edx
  Framework::GLManager *v109; // rcx
  GLuint v110; // edx
  Framework::GLManager *v111; // rcx
  Framework::GLManager *v112; // rcx
  GLuint v113; // edx
  Framework::GLManager *v114; // rcx
  GLuint v115; // edx
  Framework::GLManager *v116; // rcx
  GLuint v117; // edx
  Framework::GLManager *v118; // rcx
  GLuint v119; // edx
  Framework::GLManager *v120; // rcx
  GLuint v121; // edx
  Framework::GLManager *v122; // rcx
  GLuint v123; // edx
  Framework::GLManager *v124; // rcx
  GLuint v125; // edx
  Framework::GLManager *v126; // rcx
  GLuint v127; // edx
  Framework::GLManager *v128; // rcx
  GLuint v129; // edx
  Framework::GLManager *v130; // rcx
  GLuint v131; // edi
  OGLTexture *v132; // rax
  OGLTexture *v133; // rax
  GLuint v134; // edx
  Framework::GLManager *v135; // rcx
  OGLTexture *v136; // rax
  OGLTexture *v137; // rax
  GLuint v138; // edx
  Framework::GLManager *v139; // rcx
  OGLTexture *v140; // rax
  OGLTexture *v141; // rax
  GLuint v142; // edx
  Framework::GLManager *v143; // rcx
  OGLTexture *v144; // rax
  OGLTexture *v145; // rax
  GLuint v146; // edx
  Framework::GLManager *v147; // rcx
  OGLTexture *v148; // rax
  OGLTexture *v149; // rax
  GLuint v150; // edx
  Framework::GLManager *v151; // rcx
  OGLTexture *v152; // rax
  OGLTexture *v153; // rax
  GLuint v154; // edx
  Framework::GLManager *v155; // rcx
  OGLTexture *v156; // rax
  OGLTexture *v157; // rax
  GLuint v158; // edx
  Framework::GLManager *v159; // rcx
  OGLTexture *v160; // rax
  OGLTexture *v161; // rax
  Framework::GLManager *v162; // rdx
  OGLRender *v163; // rsi
  unsigned int v164; // eax
  unsigned int v165; // edx
  Framework::GLManager *v166; // rcx
  unsigned int v167; // edx
  Framework::GLManager *v168; // rcx
  unsigned int v169; // edx
  Framework::GLManager *v170; // rcx
  unsigned int v171; // edx
  Framework::GLManager *v172; // rcx
  unsigned int v173; // edx
  GLuint v174; // er8
  Framework::GLManager *v175; // rcx
  int v176; // [rsp+20h] [rbp-E0h]
  int v177; // [rsp+20h] [rbp-E0h]
  int v178; // [rsp+20h] [rbp-E0h]
  OGLFigure *ptr; // [rsp+28h] [rbp-D8h]
  OGLFigure *m_pFigure; // [rsp+58h] [rbp-A8h]
  int EffectFlg; // [rsp+60h] [rbp-A0h]
  int texture; // [rsp+64h] [rbp-9Ch]
  OGLMatrix modelViewOrthoProj; // [rsp+70h] [rbp-90h] BYREF
  OGLRender *v184; // [rsp+B0h] [rbp-50h]
  OGLMatrix modelViewProj; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v186; // [rsp+100h] [rbp+0h] BYREF
  int v187; // [rsp+108h] [rbp+8h]

  v5 = *(_OWORD *)pRender->m_ViewProj.m;
  v6 = *(_OWORD *)&pRender->m_ViewProj.m[4];
  memset(&modelViewOrthoProj.m[4], 0, 24);
  v8 = pRender;
  v9 = shader;
  *(_QWORD *)&modelViewOrthoProj.m[14] = 0i64;
  *(_OWORD *)modelViewProj.m = v5;
  v10 = *(_OWORD *)&pRender->m_ViewProj.m[8];
  v186 = (__int64)pStack;
  *(_OWORD *)&modelViewProj.m[4] = v6;
  v11 = *(_OWORD *)&pRender->m_ViewProj.m[12];
  v184 = pRender;
  *(_OWORD *)&modelViewProj.m[8] = v10;
  *(_OWORD *)&modelViewProj.m[12] = v11;
  *(_QWORD *)modelViewOrthoProj.m = 1065353216i64;
  *(_QWORD *)&modelViewOrthoProj.m[12] = 0i64;
  *(_QWORD *)&modelViewOrthoProj.m[5] = 1065353216i64;
  *(_QWORD *)&modelViewOrthoProj.m[2] = 0i64;
  *(_QWORD *)&modelViewOrthoProj.m[10] = 1065353216i64;
  modelViewOrthoProj.m[15] = 1.0;
  if ( pModel->m_bProjectionBlend )
    OGLMatrix::multiply(&modelViewOrthoProj, &pModel->m_OrthoView, &pModel->m_OrthoProj);
  m_pFigure = pModel->m_pFigure;
  texture = pStack->TexID[0];
  EffectFlg = pStack->EffectFlg;
  OGLRender::setupShaderVariables(
    v8,
    &modelViewProj,
    &modelViewOrthoProj,
    (OGLMatrix *)pStack,
    pModel,
    ptr,
    pShader,
    pStack,
    EffectFlg,
    0);
  OGLModel::checkCreateBuffers(pModel);
  _glewBindVertexArray(pModel->m_iVaoID);
  OGLModel::checkCreateBuffers(pModel);
  _glewBindBuffer(0x8892u, pModel->vertexBuffer);
  v12 = AgSingleton<KOFShaderManager>::ms_instance;
  v13 = g_maxEnabledVertexAttribArrays;
  v14 = *(unsigned int *)AgSingleton<KOFShaderManager>::ms_instance[11
                                                                  * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                  + 7].onSingletonInit;
  if ( pModel->m_bVaoFlg )
  {
    if ( (unsigned int)v14 < g_maxEnabledVertexAttribArrays )
    {
      g_vertexAttribIndex[v14] = 0;
      g_pendingVertexAttribArrays |= 1 << v14;
    }
    v15 = 64;
    v16 = 136;
    v17 = *(_DWORD *)v12[11 * SLODWORD(v12[360450].__vftable) + 7].onSingletonInit;
    renderSize = Framework::GLManager::glm->renderSize;
    switch ( renderSize )
    {
      case 64:
        v19 = 64;
        break;
      case 280:
        v19 = 136;
        break;
      case 208:
        v19 = 64;
        break;
      default:
        v19 = 88;
        if ( renderSize == 144 )
          v19 = 144;
        break;
    }
    if ( v17 >= 0 )
    {
      _glewVertexAttribPointer(v17, 3, 0x1406u, 0, v19, 0i64);
LABEL_28:
      v13 = g_maxEnabledVertexAttribArrays;
      v12 = AgSingleton<KOFShaderManager>::ms_instance;
    }
  }
  else
  {
    if ( (unsigned int)v14 < g_maxEnabledVertexAttribArrays )
    {
      g_vertexAttribIndex[v14] = 0;
      g_pendingVertexAttribArrays |= 1 << v14;
    }
    v15 = 64;
    v16 = 136;
    v20 = *(_DWORD *)v12[11 * SLODWORD(v12[360450].__vftable) + 7].onSingletonInit;
    v21 = Framework::GLManager::glm->renderSize;
    switch ( v21 )
    {
      case 64:
        v22 = 64;
        break;
      case 280:
        v22 = 136;
        break;
      case 208:
        v22 = 64;
        break;
      default:
        v22 = 88;
        if ( v21 == 144 )
          v22 = 144;
        break;
    }
    if ( v20 >= 0 )
    {
      _glewVertexAttribPointer(v20, 3, 0x1406u, 0, v22, pModel->m_pfVertexCoord);
      goto LABEL_28;
    }
  }
  v23 = pModel;
  if ( (v9 & 0x200) == 0 )
    goto LABEL_56;
  v24 = *((unsigned int *)v12[11 * SLODWORD(v12[360450].__vftable) + 7].onSingletonInit + 1);
  if ( pModel->m_bVaoFlg )
  {
    if ( (unsigned int)v24 < v13 )
    {
      g_vertexAttribIndex[v24] = 1;
      g_pendingVertexAttribArrays |= 1 << v24;
    }
    m_pfNormalCoord = 0i64;
    v26 = Framework::GLManager::glm->renderSize;
    v27 = *((_DWORD *)v12[11 * SLODWORD(v12[360450].__vftable) + 7].onSingletonInit + 1);
    switch ( v26 )
    {
      case 64:
        v28 = 64;
        m_pfNormalCoord = 12i64;
        break;
      case 280:
        v28 = 136;
        m_pfNormalCoord = 12i64;
        break;
      case 208:
        v28 = 64;
        m_pfNormalCoord = 12i64;
        break;
      case 144:
        v28 = 144;
        break;
      default:
        v28 = 88;
        m_pfNormalCoord = 12i64;
        break;
    }
    goto LABEL_54;
  }
  if ( (unsigned int)v24 < v13 )
  {
    g_vertexAttribIndex[v24] = 1;
    g_pendingVertexAttribArrays |= 1 << v24;
  }
  m_pfNormalCoord = (__int64)pModel->m_pfNormalCoord;
  v29 = Framework::GLManager::glm->renderSize;
  v27 = *((_DWORD *)v12[11 * SLODWORD(v12[360450].__vftable) + 7].onSingletonInit + 1);
  switch ( v29 )
  {
    case 64:
      v28 = 64;
      break;
    case 280:
      v28 = 136;
      break;
    case 208:
      v28 = 64;
      break;
    case 144:
      v28 = 144;
      goto LABEL_54;
    default:
      v28 = 88;
      break;
  }
  m_pfNormalCoord += 12i64;
LABEL_54:
  if ( v27 >= 0 )
  {
    _glewVertexAttribPointer(v27, 3, 0x1406u, 0, v28, (const void *)m_pfNormalCoord);
    v23 = pModel;
    v13 = g_maxEnabledVertexAttribArrays;
    v12 = AgSingleton<KOFShaderManager>::ms_instance;
  }
LABEL_56:
  if ( (v9 & 0x8000) == 0 )
    goto LABEL_85;
  v30 = *((unsigned int *)v12[11 * SLODWORD(v12[360450].__vftable) + 7].onSingletonInit + 2);
  if ( v23->m_bVaoFlg )
  {
    if ( (unsigned int)v30 < v13 )
    {
      g_vertexAttribIndex[v30] = 2;
      g_pendingVertexAttribArrays |= 1 << v30;
    }
    m_pfTangentCoord = 0i64;
    v32 = Framework::GLManager::glm->renderSize;
    v33 = *((_DWORD *)v12[11 * SLODWORD(v12[360450].__vftable) + 7].onSingletonInit + 2);
    if ( v32 == 64 )
    {
      v16 = 64;
    }
    else if ( v32 != 280 )
    {
      if ( v32 == 208 )
      {
        v16 = 64;
      }
      else
      {
        if ( v32 == 144 )
        {
          v16 = 144;
LABEL_69:
          if ( v33 < 0 )
            goto LABEL_85;
          v34 = 4;
          goto LABEL_84;
        }
        v16 = 88;
      }
    }
    m_pfTangentCoord = 24i64;
    goto LABEL_69;
  }
  if ( (unsigned int)v30 < v13 )
  {
    g_vertexAttribIndex[v30] = 2;
    g_pendingVertexAttribArrays |= 1 << v30;
  }
  m_pfTangentCoord = (__int64)v23->m_pfTangentCoord;
  v35 = Framework::GLManager::glm->renderSize;
  v33 = *((_DWORD *)v12[11 * SLODWORD(v12[360450].__vftable) + 7].onSingletonInit + 2);
  switch ( v35 )
  {
    case 64:
      v16 = 64;
LABEL_81:
      m_pfTangentCoord += 24i64;
      goto LABEL_82;
    case 280:
      goto LABEL_81;
    case 208:
      v16 = 64;
      goto LABEL_81;
  }
  if ( v35 != 144 )
  {
    v16 = 88;
    goto LABEL_81;
  }
  v16 = 144;
LABEL_82:
  if ( v33 < 0 )
    goto LABEL_85;
  v34 = 3;
LABEL_84:
  _glewVertexAttribPointer(v33, v34, 0x1406u, 0, v16, (const void *)m_pfTangentCoord);
  v13 = g_maxEnabledVertexAttribArrays;
  v12 = AgSingleton<KOFShaderManager>::ms_instance;
LABEL_85:
  if ( (m_pFigure->m_iFormatType & 0x100) == 0 )
    goto LABEL_116;
  v36 = *((unsigned int *)v12[11 * SLODWORD(v12[360450].__vftable) + 7].onSingletonInit + 3);
  if ( pModel->m_bVaoFlg )
  {
    if ( (unsigned int)v36 < v13 )
    {
      g_vertexAttribIndex[v36] = 3;
      g_pendingVertexAttribArrays |= 1 << v36;
    }
    m_piVerColor = 0i64;
    v38 = Framework::GLManager::glm->renderSize;
    v39 = *((_DWORD *)v12[11 * SLODWORD(v12[360450].__vftable) + 7].onSingletonInit + 3);
    switch ( v38 )
    {
      case 64:
        v40 = 64;
LABEL_98:
        m_piVerColor = 40i64;
        break;
      case 280:
        v40 = 16;
        break;
      case 208:
        v40 = 64;
        goto LABEL_98;
      case 144:
        v40 = 144;
        break;
      default:
        v40 = 88;
        goto LABEL_98;
    }
    if ( v39 < 0 )
      goto LABEL_116;
    v41 = 1;
    goto LABEL_115;
  }
  if ( (unsigned int)v36 < v13 )
  {
    g_vertexAttribIndex[v36] = 3;
    g_pendingVertexAttribArrays |= 1 << v36;
  }
  m_piVerColor = (__int64)pModel->m_piVerColor;
  v42 = Framework::GLManager::glm->renderSize;
  v39 = *((_DWORD *)v12[11 * SLODWORD(v12[360450].__vftable) + 7].onSingletonInit + 3);
  switch ( v42 )
  {
    case 64:
      v40 = 64;
LABEL_112:
      m_piVerColor += 40i64;
      break;
    case 280:
      v40 = 16;
      break;
    case 208:
      v40 = 64;
      goto LABEL_112;
    case 144:
      v40 = 144;
      break;
    default:
      v40 = 88;
      goto LABEL_112;
  }
  if ( v39 < 0 )
    goto LABEL_116;
  v41 = 0;
LABEL_115:
  _glewVertexAttribPointer(v39, 4, 0x1406u, v41, v40, (const void *)m_piVerColor);
  v12 = AgSingleton<KOFShaderManager>::ms_instance;
LABEL_116:
  v43 = EffectFlg & 0x40;
  v44 = *(float **)(v186 + 96);
  if ( v44 )
  {
    v47 = pShader->m_piGLUniform[5];
    if ( v43 )
    {
      v46 = (_DWORD *)v186;
      glUniform4fAG(v47, *v44, v44[1], v44[2], *(float *)(v186 + 104));
      goto LABEL_124;
    }
    glUniform4fvAG(v47, 1, v44);
  }
  else
  {
    v45 = pShader->m_piGLUniform[5];
    if ( v43 )
    {
      v46 = (_DWORD *)v186;
      glUniform4fAG(v45, 1.0, 1.0, 1.0, *(float *)(v186 + 104));
      goto LABEL_124;
    }
    glUniform4fAG(v45, 1.0, 1.0, 1.0, 1.0);
  }
  v46 = (_DWORD *)v186;
LABEL_124:
  if ( (v9 & 0x800) != 0 )
  {
    v48 = pModel;
    if ( (EffectFlg & 0x4000) != 0 )
    {
      v49 = pModel->m_bVaoFlg == 0;
      v186 = 0x500000004i64;
      v187 = 6;
      if ( v49 )
      {
        v55 = 0;
        if ( (int)m_pFigure->m_uiMultiUvCount <= 0 )
        {
          v50 = m_pFigure;
        }
        else
        {
          m_pfTexCoord = pModel->m_pfTexCoord;
          v57 = &v186;
          while ( 1 )
          {
            v58 = *(unsigned int *)v57;
            v59 = *((unsigned int *)v12[11 * SLODWORD(v12[360450].__vftable) + 7].onSingletonInit + v58);
            if ( (unsigned int)v59 < g_maxEnabledVertexAttribArrays )
            {
              g_vertexAttribIndex[v59] = v58;
              g_pendingVertexAttribArrays |= 1 << v59;
            }
            glVertexAttribPointerAG(v58, 2, v58, 0, v176, *m_pfTexCoord);
            ++v55;
            ++m_pfTexCoord;
            v57 = (__int64 *)((char *)v57 + 4);
            if ( v55 >= (signed int)m_pFigure->m_uiMultiUvCount )
              break;
            v12 = AgSingleton<KOFShaderManager>::ms_instance;
          }
          v48 = pModel;
          v50 = m_pFigure;
        }
      }
      else
      {
        v50 = m_pFigure;
        v51 = 0;
        if ( (int)m_pFigure->m_uiMultiUvCount > 0 )
        {
          v52 = &v186;
          while ( 1 )
          {
            v53 = *(unsigned int *)v52;
            v54 = *((unsigned int *)v12[11 * SLODWORD(v12[360450].__vftable) + 7].onSingletonInit + v53);
            if ( (unsigned int)v54 < g_maxEnabledVertexAttribArrays )
            {
              g_vertexAttribIndex[v54] = v53;
              g_pendingVertexAttribArrays |= 1 << v54;
            }
            glVertexAttribPointerAG(v53, 2, v53, 0, v176, 0i64);
            ++v51;
            v52 = (__int64 *)((char *)v52 + 4);
            if ( v51 >= (signed int)m_pFigure->m_uiMultiUvCount )
              break;
            v12 = AgSingleton<KOFShaderManager>::ms_instance;
          }
        }
      }
      for ( i = 0; i < (signed int)v50->m_uiMultiUvCount; ++i )
      {
        if ( i )
        {
          switch ( i )
          {
            case 1:
              if ( m_ActiveTexture != 10 )
              {
                m_ActiveTexture = 10;
                _glewActiveTexture(0x84CAu);
              }
              v61 = v46[8];
              if ( v61 == ::m_TexID[m_ActiveTexture] && v61 )
                continue;
              v64 = Framework::GLManager::glm;
              ::m_TexID[m_ActiveTexture] = v61;
              v64->m_textureID = v61;
              while ( v64->m_bOpenGLBlocked )
                ;
              break;
            case 2:
              if ( m_ActiveTexture != 11 )
              {
                m_ActiveTexture = 11;
                _glewActiveTexture(0x84CBu);
              }
              v61 = v46[9];
              if ( v61 == ::m_TexID[m_ActiveTexture] && v61 )
                continue;
              v63 = Framework::GLManager::glm;
              ::m_TexID[m_ActiveTexture] = v61;
              v63->m_textureID = v61;
              while ( v63->m_bOpenGLBlocked )
                ;
              break;
            case 3:
              if ( m_ActiveTexture != 12 )
              {
                m_ActiveTexture = 12;
                _glewActiveTexture(0x84CCu);
              }
              v61 = v46[10];
              if ( v61 == ::m_TexID[m_ActiveTexture] )
              {
                if ( v61 )
                  continue;
              }
              v62 = Framework::GLManager::glm;
              ::m_TexID[m_ActiveTexture] = v61;
              v62->m_textureID = v61;
              while ( v62->m_bOpenGLBlocked )
                ;
              break;
            default:
              continue;
          }
        }
        else
        {
          if ( m_ActiveTexture )
          {
            m_ActiveTexture = 0;
            _glewActiveTexture(0x84C0u);
          }
          v65 = v46[7];
          if ( v65 != ::m_TexID[m_ActiveTexture] || !v65 )
          {
            v66 = Framework::GLManager::glm;
            ::m_TexID[m_ActiveTexture] = v65;
            v66->m_textureID = v65;
            while ( v66->m_bOpenGLBlocked )
              ;
            glBindTexture(0xDE1u, v65);
          }
          if ( m_ActiveTexture != 10 )
          {
            m_ActiveTexture = 10;
            _glewActiveTexture(0x84CAu);
          }
          v67 = v46[7];
          if ( v67 != ::m_TexID[m_ActiveTexture] || !v67 )
          {
            v68 = Framework::GLManager::glm;
            ::m_TexID[m_ActiveTexture] = v67;
            v68->m_textureID = v67;
            while ( v68->m_bOpenGLBlocked )
              ;
            glBindTexture(0xDE1u, v67);
          }
          if ( m_ActiveTexture != 11 )
          {
            m_ActiveTexture = 11;
            _glewActiveTexture(0x84CBu);
          }
          v69 = v46[7];
          if ( v69 != ::m_TexID[m_ActiveTexture] || !v69 )
          {
            v70 = Framework::GLManager::glm;
            ::m_TexID[m_ActiveTexture] = v69;
            v70->m_textureID = v69;
            while ( v70->m_bOpenGLBlocked )
              ;
            glBindTexture(0xDE1u, v69);
          }
          if ( m_ActiveTexture != 12 )
          {
            m_ActiveTexture = 12;
            _glewActiveTexture(0x84CCu);
          }
          v61 = v46[7];
          if ( v61 == ::m_TexID[m_ActiveTexture] && v61 )
            continue;
          v71 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = v61;
          v71->m_textureID = v61;
          while ( v71->m_bOpenGLBlocked )
            ;
        }
        glBindTexture(0xDE1u, v61);
      }
LABEL_296:
      v97 = v184;
      if ( !v184->m_ShadowMapFlg )
      {
        if ( v48->m_shadowTextureId == 2 )
        {
          if ( m_ActiveTexture != 8 )
          {
            m_ActiveTexture = 8;
            _glewActiveTexture(0x84C8u);
          }
          m_TexID = v97->m_renderTextures.m_ShadowDepthMap[0].m_TexID;
          if ( m_TexID != ::m_TexID[m_ActiveTexture] || !m_TexID )
          {
            v99 = Framework::GLManager::glm;
            ::m_TexID[m_ActiveTexture] = m_TexID;
            v99->m_textureID = m_TexID;
            while ( v99->m_bOpenGLBlocked )
              ;
            glBindTexture(0xDE1u, m_TexID);
          }
          if ( m_ActiveTexture != 9 )
          {
            m_ActiveTexture = 9;
            _glewActiveTexture(0x84C9u);
          }
          v100 = v97->m_renderTextures.m_ShadowTransparencyMap[0].m_TexID;
          if ( v100 != ::m_TexID[m_ActiveTexture] || !v100 )
          {
            v101 = Framework::GLManager::glm;
            ::m_TexID[m_ActiveTexture] = v100;
            v101->m_textureID = v100;
            while ( v101->m_bOpenGLBlocked )
              ;
            glBindTexture(0xDE1u, v100);
          }
          if ( m_ActiveTexture != 12 )
          {
            m_ActiveTexture = 12;
            _glewActiveTexture(0x84CCu);
          }
          v102 = v97->m_renderTextures.m_ShadowDepthMap[1].m_TexID;
          if ( v102 != ::m_TexID[m_ActiveTexture] || !v102 )
          {
            v103 = Framework::GLManager::glm;
            ::m_TexID[m_ActiveTexture] = v102;
            v103->m_textureID = v102;
            while ( v103->m_bOpenGLBlocked )
              ;
            glBindTexture(0xDE1u, v102);
          }
          if ( m_ActiveTexture != 13 )
          {
            m_ActiveTexture = 13;
            _glewActiveTexture(0x84CDu);
          }
          v104 = v97->m_renderTextures.m_ShadowTransparencyMap[1].m_TexID;
          if ( v104 == ::m_TexID[m_ActiveTexture] && v104 )
            goto LABEL_354;
          v105 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = v104;
          v105->m_textureID = v104;
          while ( v105->m_bOpenGLBlocked )
            ;
        }
        else
        {
          if ( m_ActiveTexture != 8 )
          {
            m_ActiveTexture = 8;
            _glewActiveTexture(0x84C8u);
          }
          v106 = v97->m_renderTextures.m_ShadowDepthMap[v48->m_shadowTextureId].m_TexID;
          if ( v106 != ::m_TexID[m_ActiveTexture] || !v106 )
          {
            v107 = Framework::GLManager::glm;
            ::m_TexID[m_ActiveTexture] = v106;
            v107->m_textureID = v106;
            while ( v107->m_bOpenGLBlocked )
              ;
            glBindTexture(0xDE1u, v106);
          }
          if ( m_ActiveTexture != 9 )
          {
            m_ActiveTexture = 9;
            _glewActiveTexture(0x84C9u);
          }
          v108 = v97->m_renderTextures.m_ShadowTransparencyMap[v48->m_shadowTextureId].m_TexID;
          if ( v108 != ::m_TexID[m_ActiveTexture] || !v108 )
          {
            v109 = Framework::GLManager::glm;
            ::m_TexID[m_ActiveTexture] = v108;
            v109->m_textureID = v108;
            while ( v109->m_bOpenGLBlocked )
              ;
            glBindTexture(0xDE1u, v108);
          }
          if ( m_ActiveTexture != 12 )
          {
            m_ActiveTexture = 12;
            _glewActiveTexture(0x84CCu);
          }
          v110 = v97->m_renderTextures.m_ShadowDepthMap[v48->m_shadowTextureId].m_TexID;
          if ( v110 != ::m_TexID[m_ActiveTexture] || !v110 )
          {
            v111 = Framework::GLManager::glm;
            ::m_TexID[m_ActiveTexture] = v110;
            v111->m_textureID = v110;
            while ( v111->m_bOpenGLBlocked )
              ;
            glBindTexture(0xDE1u, v110);
          }
          if ( m_ActiveTexture != 13 )
          {
            m_ActiveTexture = 13;
            _glewActiveTexture(0x84CDu);
          }
          v104 = v97->m_renderTextures.m_ShadowTransparencyMap[v48->m_shadowTextureId].m_TexID;
          if ( v104 == ::m_TexID[m_ActiveTexture] && v104 )
            goto LABEL_354;
          v112 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = v104;
          v112->m_textureID = v104;
          while ( v112->m_bOpenGLBlocked )
            ;
        }
        glBindTexture(0xDE1u, v104);
      }
LABEL_354:
      if ( (int)v46[12] > 0 )
      {
        if ( m_ActiveTexture != 1 )
        {
          m_ActiveTexture = 1;
          _glewActiveTexture(0x84C1u);
        }
        v113 = v46[12];
        if ( v113 != ::m_TexID[m_ActiveTexture] || !v113 )
        {
          v114 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = v113;
          v114->m_textureID = v113;
          while ( v114->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, v113);
        }
      }
      if ( (int)v46[13] > 0 )
      {
        if ( m_ActiveTexture != 2 )
        {
          m_ActiveTexture = 2;
          _glewActiveTexture(0x84C2u);
        }
        v115 = v46[13];
        if ( v115 != ::m_TexID[m_ActiveTexture] || !v115 )
        {
          v116 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = v115;
          v116->m_textureID = v115;
          while ( v116->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, v115);
        }
      }
      if ( (int)v46[14] > 0 )
      {
        if ( m_ActiveTexture != 3 )
        {
          m_ActiveTexture = 3;
          _glewActiveTexture(0x84C3u);
        }
        v117 = v46[14];
        if ( v117 != ::m_TexID[m_ActiveTexture] || !v117 )
        {
          v118 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = v117;
          v118->m_textureID = v117;
          while ( v118->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, v117);
        }
      }
      if ( (int)v46[15] > 0 )
      {
        if ( m_ActiveTexture != 4 )
        {
          m_ActiveTexture = 4;
          _glewActiveTexture(0x84C4u);
        }
        v119 = v46[15];
        if ( v119 != ::m_TexID[m_ActiveTexture] || !v119 )
        {
          v120 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = v119;
          v120->m_textureID = v119;
          while ( v120->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, v119);
        }
      }
      if ( (int)v46[16] > 0 )
      {
        if ( m_ActiveTexture != 5 )
        {
          m_ActiveTexture = 5;
          _glewActiveTexture(0x84C5u);
        }
        v121 = v46[16];
        if ( v121 != ::m_TexID[m_ActiveTexture] || !v121 )
        {
          v122 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = v121;
          v122->m_textureID = v121;
          while ( v122->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, v121);
        }
      }
      if ( (int)v46[17] > 0 )
      {
        if ( m_ActiveTexture != 6 )
        {
          m_ActiveTexture = 6;
          _glewActiveTexture(0x84C6u);
        }
        v123 = v46[17];
        if ( v123 != ::m_TexID[m_ActiveTexture] || !v123 )
        {
          v124 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = v123;
          v124->m_textureID = v123;
          while ( v124->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, v123);
        }
      }
      if ( (int)v46[18] > 0 )
      {
        if ( m_ActiveTexture != 7 )
        {
          m_ActiveTexture = 7;
          _glewActiveTexture(0x84C7u);
        }
        v125 = v46[18];
        if ( v125 != ::m_TexID[m_ActiveTexture] || !v125 )
        {
          v126 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = v125;
          v126->m_textureID = v125;
          while ( v126->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, v125);
        }
      }
      if ( (int)v46[20] > 0 )
      {
        if ( m_ActiveTexture != 14 )
        {
          m_ActiveTexture = 14;
          _glewActiveTexture(0x84CEu);
        }
        v127 = v46[20];
        if ( v127 != ::m_TexID[m_ActiveTexture] || !v127 )
        {
          v128 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = v127;
          v128->m_textureID = v127;
          while ( v128->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, v127);
        }
      }
      if ( (int)v46[19] > 0 )
      {
        if ( m_ActiveTexture != 13 )
        {
          m_ActiveTexture = 13;
          _glewActiveTexture(0x84CDu);
        }
        v129 = v46[19];
        if ( v129 != ::m_TexID[m_ActiveTexture] || !v129 )
        {
          v130 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = v129;
          v130->m_textureID = v129;
          while ( v130->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, v129);
        }
      }
      v131 = -1;
      if ( v48->m_modelFXFlg == -10 )
      {
        v132 = v48->m_pEffectTexture[0];
        if ( v132 )
        {
          if ( v132->m_TexID != -1 )
          {
            if ( m_ActiveTexture != 15 )
            {
              m_ActiveTexture = 15;
              _glewActiveTexture(0x84CFu);
            }
            v133 = v48->m_pEffectTexture[0];
            if ( v133 )
              v134 = v133->m_TexID;
            else
              v134 = -1;
            if ( v134 != ::m_TexID[m_ActiveTexture] || !v134 )
            {
              v135 = Framework::GLManager::glm;
              ::m_TexID[m_ActiveTexture] = v134;
              v135->m_textureID = v134;
              while ( v135->m_bOpenGLBlocked )
                ;
              glBindTexture(0xDE1u, v134);
            }
          }
        }
      }
      if ( v48->m_modelFXFlg == -20 )
      {
        v136 = v48->m_pEffectTexture[1];
        if ( v136 )
        {
          if ( v136->m_TexID != -1 )
          {
            if ( m_ActiveTexture != 15 )
            {
              m_ActiveTexture = 15;
              _glewActiveTexture(0x84CFu);
            }
            v137 = v48->m_pEffectTexture[1];
            if ( v137 )
              v138 = v137->m_TexID;
            else
              v138 = -1;
            if ( v138 != ::m_TexID[m_ActiveTexture] || !v138 )
            {
              v139 = Framework::GLManager::glm;
              ::m_TexID[m_ActiveTexture] = v138;
              v139->m_textureID = v138;
              while ( v139->m_bOpenGLBlocked )
                ;
              glBindTexture(0xDE1u, v138);
            }
          }
        }
      }
      if ( v48->m_modelFXFlg == -30 )
      {
        v140 = v48->m_pEffectTexture[2];
        if ( v140 )
        {
          if ( v140->m_TexID != -1 )
          {
            if ( m_ActiveTexture != 15 )
            {
              m_ActiveTexture = 15;
              _glewActiveTexture(0x84CFu);
            }
            v141 = v48->m_pEffectTexture[2];
            if ( v141 )
              v142 = v141->m_TexID;
            else
              v142 = -1;
            if ( v142 != ::m_TexID[m_ActiveTexture] || !v142 )
            {
              v143 = Framework::GLManager::glm;
              ::m_TexID[m_ActiveTexture] = v142;
              v143->m_textureID = v142;
              while ( v143->m_bOpenGLBlocked )
                ;
              glBindTexture(0xDE1u, v142);
            }
          }
        }
      }
      if ( v48->m_modelFXFlg == -40 )
      {
        v144 = v48->m_pEffectTexture[5];
        if ( v144 )
        {
          if ( v144->m_TexID != -1 )
          {
            if ( m_ActiveTexture != 15 )
            {
              m_ActiveTexture = 15;
              _glewActiveTexture(0x84CFu);
            }
            v145 = v48->m_pEffectTexture[5];
            if ( v145 )
              v146 = v145->m_TexID;
            else
              v146 = -1;
            if ( v146 != ::m_TexID[m_ActiveTexture] || !v146 )
            {
              v147 = Framework::GLManager::glm;
              ::m_TexID[m_ActiveTexture] = v146;
              v147->m_textureID = v146;
              while ( v147->m_bOpenGLBlocked )
                ;
              glBindTexture(0xDE1u, v146);
            }
          }
        }
      }
      if ( v48->m_modelFXFlg == 10 )
      {
        v148 = v48->m_pEffectTexture[3];
        if ( v148 )
        {
          if ( v148->m_TexID != -1 )
          {
            if ( m_ActiveTexture != 15 )
            {
              m_ActiveTexture = 15;
              _glewActiveTexture(0x84CFu);
            }
            v149 = v48->m_pEffectTexture[3];
            if ( v149 )
              v150 = v149->m_TexID;
            else
              v150 = -1;
            if ( v150 != ::m_TexID[m_ActiveTexture] || !v150 )
            {
              v151 = Framework::GLManager::glm;
              ::m_TexID[m_ActiveTexture] = v150;
              v151->m_textureID = v150;
              while ( v151->m_bOpenGLBlocked )
                ;
              glBindTexture(0xDE1u, v150);
            }
          }
        }
      }
      if ( v48->m_modelFXFlg == 11 )
      {
        v152 = v48->m_pEffectTexture[4];
        if ( v152 )
        {
          if ( v152->m_TexID != -1 )
          {
            if ( m_ActiveTexture != 15 )
            {
              m_ActiveTexture = 15;
              _glewActiveTexture(0x84CFu);
            }
            v153 = v48->m_pEffectTexture[4];
            if ( v153 )
              v154 = v153->m_TexID;
            else
              v154 = -1;
            if ( v154 != ::m_TexID[m_ActiveTexture] || !v154 )
            {
              v155 = Framework::GLManager::glm;
              ::m_TexID[m_ActiveTexture] = v154;
              v155->m_textureID = v154;
              while ( v155->m_bOpenGLBlocked )
                ;
              glBindTexture(0xDE1u, v154);
            }
          }
        }
      }
      if ( v48->m_modelFXFlg == 12 )
      {
        v156 = v48->m_pEffectTexture[7];
        if ( v156 )
        {
          if ( v156->m_TexID != -1 )
          {
            if ( m_ActiveTexture != 15 )
            {
              m_ActiveTexture = 15;
              _glewActiveTexture(0x84CFu);
            }
            v157 = v48->m_pEffectTexture[7];
            if ( v157 )
              v158 = v157->m_TexID;
            else
              v158 = -1;
            if ( v158 != ::m_TexID[m_ActiveTexture] || !v158 )
            {
              v159 = Framework::GLManager::glm;
              ::m_TexID[m_ActiveTexture] = v158;
              v159->m_textureID = v158;
              while ( v159->m_bOpenGLBlocked )
                ;
              glBindTexture(0xDE1u, v158);
            }
          }
        }
      }
      if ( v48->m_modelFXFlg == 1 )
      {
        v160 = v48->m_pEffectTexture[6];
        if ( v160 )
        {
          if ( v160->m_TexID != -1 )
          {
            if ( m_ActiveTexture != 15 )
            {
              m_ActiveTexture = 15;
              _glewActiveTexture(0x84CFu);
            }
            v161 = v48->m_pEffectTexture[6];
            if ( v161 )
              v131 = v161->m_TexID;
            if ( v131 != ::m_TexID[m_ActiveTexture] || !v131 )
            {
              v162 = Framework::GLManager::glm;
              ::m_TexID[m_ActiveTexture] = v131;
              v162->m_textureID = v131;
              while ( v162->m_bOpenGLBlocked )
                ;
              glBindTexture(0xDE1u, v131);
            }
          }
        }
      }
      return;
    }
    if ( (EffectFlg & 0x700000) != 0 )
    {
      if ( pModel->m_bVaoFlg )
      {
        glEnableVertexAttribArrayAG(4u);
        glVertexAttribPointerAG(4u, 2, v72, 0, v176, 0i64);
        glEnableVertexAttribArrayAG(5u);
        glVertexAttribPointerAG(5u, 2, v73, 0, v177, 0i64);
      }
      else
      {
        glEnableVertexAttribArrayAG(4u);
        glVertexAttribPointerAG(4u, 2, v74, 0, v176, pModel->m_pfTexCoord[0]);
        glEnableVertexAttribArrayAG(5u);
        glVertexAttribPointerAG(5u, 2, v75, 0, v178, pModel->m_pfTexCoord[1]);
      }
      goto LABEL_221;
    }
    if ( pModel->m_bVaoFlg )
    {
      glEnableVertexAttribArrayAG(4u);
      v76 = 0i64;
      v77 = Framework::GLManager::glm->renderSize;
      v78 = *((_DWORD *)v12[11 * SLODWORD(v12[360450].__vftable) + 7].onSingletonInit + 4);
      if ( v77 != 64 )
      {
        if ( v77 == 280 )
        {
          v15 = 8;
          goto LABEL_219;
        }
        if ( v77 != 208 )
        {
          if ( v77 == 144 )
          {
            v15 = 144;
            goto LABEL_219;
          }
          v15 = 88;
        }
      }
      v76 = 56i64;
    }
    else
    {
      glEnableVertexAttribArrayAG(4u);
      v76 = (__int64)pModel->m_pfTexCoord[0];
      v79 = Framework::GLManager::glm->renderSize;
      v78 = *((_DWORD *)v12[11 * SLODWORD(v12[360450].__vftable) + 7].onSingletonInit + 4);
      if ( v79 != 64 )
      {
        if ( v79 == 280 )
        {
          v15 = 8;
          goto LABEL_219;
        }
        if ( v79 != 208 )
        {
          if ( v79 == 144 )
          {
            v15 = 144;
            goto LABEL_219;
          }
          v15 = 88;
        }
      }
      v76 += 56i64;
    }
LABEL_219:
    if ( v78 >= 0 )
      _glewVertexAttribPointer(v78, 2, 0x1406u, 0, v15, (const void *)v76);
LABEL_221:
    if ( (EffectFlg & 0x700000) == 0 )
    {
      if ( m_ActiveTexture )
      {
        m_ActiveTexture = 0;
        _glewActiveTexture(0x84C0u);
      }
      if ( texture != ::m_TexID[m_ActiveTexture] || !texture )
      {
        v91 = Framework::GLManager::glm;
        ::m_TexID[m_ActiveTexture] = texture;
        v91->m_textureID = texture;
        while ( v91->m_bOpenGLBlocked )
          ;
        glBindTexture(0xDE1u, texture);
      }
      if ( v46[8] )
      {
        if ( m_ActiveTexture != 10 )
        {
          m_ActiveTexture = 10;
          _glewActiveTexture(0x84CAu);
        }
        v92 = v46[8];
        if ( v92 != ::m_TexID[m_ActiveTexture] || !v92 )
        {
          v93 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = v92;
          v93->m_textureID = v92;
          while ( v93->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, v92);
        }
      }
      if ( v46[9] )
      {
        if ( m_ActiveTexture != 11 )
        {
          m_ActiveTexture = 11;
          _glewActiveTexture(0x84CBu);
        }
        v94 = v46[9];
        if ( v94 != ::m_TexID[m_ActiveTexture] || !v94 )
        {
          v95 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = v94;
          v95->m_textureID = v94;
          while ( v95->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, v94);
        }
      }
      if ( !v46[10] )
        goto LABEL_296;
      if ( m_ActiveTexture != 12 )
      {
        m_ActiveTexture = 12;
        _glewActiveTexture(0x84CCu);
      }
      v88 = v46[10];
      if ( v88 == ::m_TexID[m_ActiveTexture] )
      {
        if ( v88 )
          goto LABEL_296;
      }
      v96 = Framework::GLManager::glm;
      ::m_TexID[m_ActiveTexture] = v88;
      v96->m_textureID = v88;
      while ( v96->m_bOpenGLBlocked )
        ;
LABEL_295:
      glBindTexture(0xDE1u, v88);
      goto LABEL_296;
    }
    if ( m_ActiveTexture )
    {
      m_ActiveTexture = 0;
      _glewActiveTexture(0x84C0u);
    }
    v80 = v46[7];
    if ( v80 != ::m_TexID[m_ActiveTexture] || !v80 )
    {
      v81 = Framework::GLManager::glm;
      ::m_TexID[m_ActiveTexture] = v80;
      v81->m_textureID = v80;
      while ( v81->m_bOpenGLBlocked )
        ;
      glBindTexture(0xDE1u, v80);
    }
    if ( m_ActiveTexture != 10 )
    {
      m_ActiveTexture = 10;
      _glewActiveTexture(0x84CAu);
    }
    v82 = v46[8];
    if ( v82 )
    {
      if ( v82 == ::m_TexID[m_ActiveTexture] )
        goto LABEL_241;
      v83 = Framework::GLManager::glm;
      ::m_TexID[m_ActiveTexture] = v82;
      v83->m_textureID = v82;
      while ( v83->m_bOpenGLBlocked )
        ;
    }
    else
    {
      v82 = v46[7];
      if ( v82 == ::m_TexID[m_ActiveTexture] && v82 )
      {
LABEL_241:
        if ( m_ActiveTexture != 11 )
        {
          m_ActiveTexture = 11;
          _glewActiveTexture(0x84CBu);
        }
        v85 = v46[9];
        if ( v85 )
        {
          if ( v85 == ::m_TexID[m_ActiveTexture] )
            goto LABEL_253;
          v86 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = v85;
          v86->m_textureID = v85;
          while ( v86->m_bOpenGLBlocked )
            ;
        }
        else
        {
          v85 = v46[7];
          if ( v85 == ::m_TexID[m_ActiveTexture] && v85 )
          {
LABEL_253:
            if ( m_ActiveTexture != 12 )
            {
              m_ActiveTexture = 12;
              _glewActiveTexture(0x84CCu);
            }
            v88 = v46[10];
            if ( v88 )
            {
              if ( v88 == ::m_TexID[m_ActiveTexture] )
                goto LABEL_296;
              v89 = Framework::GLManager::glm;
              ::m_TexID[m_ActiveTexture] = v88;
              v89->m_textureID = v88;
              while ( v89->m_bOpenGLBlocked )
                ;
            }
            else
            {
              v88 = v46[7];
              if ( v88 == ::m_TexID[m_ActiveTexture] && v88 )
                goto LABEL_296;
              v90 = Framework::GLManager::glm;
              ::m_TexID[m_ActiveTexture] = v88;
              v90->m_textureID = v88;
              while ( v90->m_bOpenGLBlocked )
                ;
            }
            goto LABEL_295;
          }
          v87 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = v85;
          v87->m_textureID = v85;
          while ( v87->m_bOpenGLBlocked )
            ;
        }
        glBindTexture(0xDE1u, v85);
        goto LABEL_253;
      }
      v84 = Framework::GLManager::glm;
      ::m_TexID[m_ActiveTexture] = v82;
      v84->m_textureID = v82;
      while ( v84->m_bOpenGLBlocked )
        ;
    }
    glBindTexture(0xDE1u, v82);
    goto LABEL_241;
  }
  v163 = v184;
  if ( !v184->m_ShadowMapFlg )
  {
    if ( pModel->m_shadowTextureId == 2 )
    {
      v164 = m_ActiveTexture;
      if ( m_ActiveTexture != 8 )
      {
        m_ActiveTexture = 8;
        _glewActiveTexture(0x84C8u);
        v164 = m_ActiveTexture;
      }
      v165 = v163->m_renderTextures.m_ShadowDepthMap[0].m_TexID;
      if ( v165 != ::m_TexID[v164] || !v165 )
      {
        ::m_TexID[v164] = v165;
        v166 = Framework::GLManager::glm;
        Framework::GLManager::glm->m_textureID = v165;
        while ( v166->m_bOpenGLBlocked )
          ;
        glBindTexture(0xDE1u, v165);
        v164 = m_ActiveTexture;
      }
      if ( v164 != 9 )
      {
        m_ActiveTexture = 9;
        _glewActiveTexture(0x84C9u);
        v164 = m_ActiveTexture;
      }
      v167 = v163->m_renderTextures.m_ShadowTransparencyMap[0].m_TexID;
      if ( v167 != ::m_TexID[v164] || !v167 )
      {
        ::m_TexID[v164] = v167;
        v168 = Framework::GLManager::glm;
        Framework::GLManager::glm->m_textureID = v167;
        while ( v168->m_bOpenGLBlocked )
          ;
        glBindTexture(0xDE1u, v167);
        v164 = m_ActiveTexture;
      }
      if ( v164 != 12 )
      {
        m_ActiveTexture = 12;
        _glewActiveTexture(0x84CCu);
        v164 = m_ActiveTexture;
      }
      v169 = v163->m_renderTextures.m_ShadowDepthMap[1].m_TexID;
      if ( v169 != ::m_TexID[v164] || !v169 )
      {
        ::m_TexID[v164] = v169;
        v170 = Framework::GLManager::glm;
        Framework::GLManager::glm->m_textureID = v169;
        while ( v170->m_bOpenGLBlocked )
          ;
        glBindTexture(0xDE1u, v169);
        v164 = m_ActiveTexture;
      }
      if ( v164 != 13 )
      {
        m_ActiveTexture = 13;
        _glewActiveTexture(0x84CDu);
        v164 = m_ActiveTexture;
      }
      v171 = v163->m_renderTextures.m_ShadowTransparencyMap[1].m_TexID;
      if ( v171 != ::m_TexID[v164] || !v171 )
      {
        ::m_TexID[v164] = v171;
        v172 = Framework::GLManager::glm;
        Framework::GLManager::glm->m_textureID = v171;
        while ( v172->m_bOpenGLBlocked )
          ;
        glBindTexture(0xDE1u, v171);
      }
    }
    else
    {
      v173 = m_ActiveTexture;
      if ( m_ActiveTexture != 8 )
      {
        m_ActiveTexture = 8;
        _glewActiveTexture(0x84C8u);
        v173 = m_ActiveTexture;
      }
      v174 = v163->m_renderTextures.m_ShadowDepthMap[pModel->m_shadowTextureId].m_TexID;
      if ( v174 != ::m_TexID[v173] || !v174 )
      {
        v175 = Framework::GLManager::glm;
        ::m_TexID[v173] = v174;
        v175->m_textureID = v174;
        while ( v175->m_bOpenGLBlocked )
          ;
        glBindTexture(0xDE1u, v174);
        v173 = m_ActiveTexture;
      }
      if ( v173 != 9 )
      {
        m_ActiveTexture = 9;
        _glewActiveTexture(0x84C9u);
      }
      glsBindTexture(0xDE1u, v163->m_renderTextures.m_ShadowTransparencyMap[pModel->m_shadowTextureId].m_TexID);
      if ( m_ActiveTexture != 12 )
      {
        m_ActiveTexture = 12;
        _glewActiveTexture(0x84CCu);
      }
      glsBindTexture(0xDE1u, v163->m_renderTextures.m_ShadowDepthMap[pModel->m_shadowTextureId].m_TexID);
      if ( m_ActiveTexture != 13 )
      {
        m_ActiveTexture = 13;
        _glewActiveTexture(0x84CDu);
      }
      glsBindTexture(0xDE1u, v163->m_renderTextures.m_ShadowTransparencyMap[pModel->m_shadowTextureId].m_TexID);
    }
  }
}

void __fastcall shaderProcess_SAM(OGLRender *pRender, OGLShader *pShader, OGLModelStackData *pStack, OGLModel *pModel)
{
  unsigned __int8 v6; // r8

  shaderProcess_OGLRender(7936, pRender, pShader, pStack, pModel);
  glUniformMatrix4fvAG(pShader->m_piGLUniform[164], 40, v6, pStack->work3);
}

void __fastcall shaderProcess_UVAnimation(OGLShader *pShader, float *pWorkSpace)
{
  KOFShaderManager *v2; // r11
  int v5; // edx
  __int64 v6; // r10
  __int64 v7; // r9
  AgSingleton<KOFShaderManager>_vtbl *v8; // rcx
  _QWORD *v9; // rax
  KOFShaderManager *v10; // rcx
  int v11; // edx
  __int64 m_currentProgramSlot; // r9
  __int64 index; // r8
  void **v14; // rcx
  int v15; // edx
  __int64 v16; // r9
  __int64 v17; // r8
  void **v18; // rcx
  int v19; // edx
  __int64 v20; // r9
  __int64 v21; // r8
  void **v22; // rcx
  int v23; // edx
  __int64 v24; // r9
  __int64 v25; // r8
  void **v26; // rcx
  int v27; // edx
  __int64 v28; // r8
  __int64 v29; // r9
  void **v30; // r8

  v2 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
  v5 = pShader->m_piGLUniform[158];
  v6 = 11i64 * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable);
  v7 = *((int *)&AgSingleton<KOFShaderManager>::ms_instance[v6 + 11].~AgSingleton<KOFShaderManager> + 4 * v5);
  v8 = AgSingleton<KOFShaderManager>::ms_instance[SHIDWORD(AgSingleton<KOFShaderManager>::ms_instance[v6 + 5].__vftable)
                                                + 494188].__vftable;
  if ( **((_QWORD **)&v8->~AgSingleton<KOFShaderManager> + v7) != *(_QWORD *)pWorkSpace )
  {
    v9 = (_QWORD *)*((_QWORD *)&v8->~AgSingleton<KOFShaderManager> + v7);
    v10 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
    *v9 = *(_QWORD *)pWorkSpace;
    KOFShaderManager::setUniformWriteMask(v10, v5);
  }
  v11 = pShader->m_piGLUniform[159];
  m_currentProgramSlot = v2->m_currentProgramSlot;
  index = v2->m_program[m_currentProgramSlot].m_uniformAttrib[v11].index;
  v14 = v2->m_shaderUniformPtr[v2->m_program[m_currentProgramSlot].m_linkID];
  if ( *(_QWORD *)v14[index] != *((_QWORD *)pWorkSpace + 2) )
  {
    *(_QWORD *)v14[index] = *((_QWORD *)pWorkSpace + 2);
    KOFShaderManager::setUniformWriteMask(v2, v11);
  }
  v15 = pShader->m_piGLUniform[160];
  v16 = v2->m_currentProgramSlot;
  v17 = v2->m_program[v16].m_uniformAttrib[v15].index;
  v18 = v2->m_shaderUniformPtr[v2->m_program[v16].m_linkID];
  if ( *(_QWORD *)v18[v17] != *((_QWORD *)pWorkSpace + 4) )
  {
    *(_QWORD *)v18[v17] = *((_QWORD *)pWorkSpace + 4);
    KOFShaderManager::setUniformWriteMask(v2, v15);
  }
  v19 = pShader->m_piGLUniform[161];
  v20 = v2->m_currentProgramSlot;
  v21 = v2->m_program[v20].m_uniformAttrib[v19].index;
  v22 = v2->m_shaderUniformPtr[v2->m_program[v20].m_linkID];
  if ( *(_QWORD *)v22[v21] != *((_QWORD *)pWorkSpace + 1) )
  {
    *(_QWORD *)v22[v21] = *((_QWORD *)pWorkSpace + 1);
    KOFShaderManager::setUniformWriteMask(v2, v19);
  }
  v23 = pShader->m_piGLUniform[162];
  v24 = v2->m_currentProgramSlot;
  v25 = v2->m_program[v24].m_uniformAttrib[v23].index;
  v26 = v2->m_shaderUniformPtr[v2->m_program[v24].m_linkID];
  if ( *(_QWORD *)v26[v25] != *((_QWORD *)pWorkSpace + 3) )
  {
    *(_QWORD *)v26[v25] = *((_QWORD *)pWorkSpace + 3);
    KOFShaderManager::setUniformWriteMask(v2, v23);
  }
  v27 = pShader->m_piGLUniform[163];
  v28 = v2->m_currentProgramSlot;
  v29 = v2->m_program[v28].m_uniformAttrib[v27].index;
  v30 = v2->m_shaderUniformPtr[v2->m_program[v28].m_linkID];
  if ( *(_QWORD *)v30[v29] != *((_QWORD *)pWorkSpace + 5) )
  {
    *(_QWORD *)v30[v29] = *((_QWORD *)pWorkSpace + 5);
    KOFShaderManager::setUniformWriteMask(v2, v27);
  }
}

bool __fastcall BattleStageShader::updateCustomProcess_SAM(
        BattleStageShader *this,
        BattleStageEvent *pStageEvent,
        float advanceFrame,
        int animIndex,
        float animFrame,
        OGLMatrix *pMatTrans,
        int bAnimationChange)
{
  OGLModel *m_pOGLModel; // rsi
  __int64 m_selectAnimationIndex; // rax
  BSDataEvent *m_pEvent; // rdx
  BSDataEventModelAnimation *v12; // rdx
  BSDataMotion *m_pMotion; // rcx
  signed int m_motionNo; // ecx
  float v15; // xmm10_4
  BSDataEventModelAnimation *m_pPlayingModelAnimation; // rax
  float m_motionTotalFrame; // xmm9_4
  int v18; // er10
  int m_customProcessBufferCount; // eax
  __int64 v20; // r11
  int v21; // er9
  __int64 v22; // rdx
  __int64 v23; // r8
  BSDataEventModelAnimation *v24; // rax
  BSDataMotion *v25; // rcx
  OGLMotion *v26; // rdi
  int v27; // er14
  __int64 v28; // r10
  BattleStageEvent::GroupObject *m_pGroupObjects; // r12
  float v30; // xmm6_4
  int v31; // edi
  __int64 v32; // r15
  __int64 v33; // r14
  OGLAnimationBone *v34; // rax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __m128 v37; // xmm2
  __int128 v38; // xmm0
  OGLFigure *m_pFigure; // rax
  OGLBone *m_pBone; // rdx
  __int64 v41; // r10
  __int64 v42; // r9
  float *v43; // rcx
  OGLFigure *v44; // rax
  OGLMatrix *p_m_mOffset; // rdx
  __int64 v46; // r8
  float **m_pCustomProcessBuffer; // rcx
  float *v48; // rax
  __int64 v49; // r9
  OGLFigure *v50; // rax
  OGLMatrix *v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r10
  __int64 v54; // rax
  __int64 v55; // r9
  bool result; // al
  OGLMatrix *v57; // [rsp+38h] [rbp-C8h]
  OGLMatrix v58; // [rsp+60h] [rbp-A0h] BYREF
  OGLMatrix In; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v60; // [rsp+190h] [rbp+90h]
  OGLMotion *v61; // [rsp+198h] [rbp+98h]
  int iMotionNo; // [rsp+1A0h] [rbp+A0h] BYREF
  int iAniboneNo; // [rsp+1A8h] [rbp+A8h] BYREF

  m_pOGLModel = pStageEvent->m_pObject->m_pModel->m_pOGLModel;
  if ( (_BYTE)bAnimationChange )
  {
    m_selectAnimationIndex = pStageEvent->m_selectAnimationIndex;
    m_pEvent = pStageEvent->m_pEvent;
    if ( (int)m_selectAnimationIndex < 0 || (int)m_selectAnimationIndex >= m_pEvent->m_animationCount )
      v12 = 0i64;
    else
      v12 = m_pEvent->m_pModelAnimations[m_selectAnimationIndex];
    pStageEvent->m_pPlayingModelAnimation = v12;
    if ( v12 )
    {
      if ( v12->m_pMotion )
      {
        m_pMotion = v12->m_pMotion;
        if ( (m_pOGLModel->m_uiModeFlg & 0x400) == 0 )
          m_pOGLModel->m_pMotion[0] = m_pMotion->m_pMotion;
        if ( m_pOGLModel->m_pMotion[0] )
        {
          m_motionNo = m_pMotion->m_motionNo;
          m_pOGLModel->m_iMotionIndex[0] = m_motionNo;
          if ( m_motionNo >= (signed int)m_pOGLModel->m_pMotion[0]->m_usMotionCount )
            m_motionNo = 0;
          m_pOGLModel->m_iMotionIndex[0] = m_motionNo;
          m_pOGLModel->m_bMotionEnd = 0;
        }
      }
    }
  }
  v15 = animFrame;
  m_pPlayingModelAnimation = pStageEvent->m_pPlayingModelAnimation;
  m_motionTotalFrame = animFrame + pStageEvent->m_animationChangeFrame;
  if ( m_pPlayingModelAnimation && m_pPlayingModelAnimation->m_pMotion )
    m_motionTotalFrame = (float)m_pPlayingModelAnimation->m_pMotion->m_motionTotalFrame;
  v18 = 0;
  if ( this->m_customProcessI1 > 0 )
  {
    m_customProcessBufferCount = this->m_customProcessBufferCount;
    v20 = 0i64;
    do
    {
      v21 = 0;
      if ( m_customProcessBufferCount > 0 )
      {
        v22 = 0i64;
        v23 = 16 * pStageEvent->m_pGroupObjects[v20].id;
        do
        {
          ++v22;
          ++v21;
          this->m_pCustomProcessBuffer[v22 - 1][v23] = 1.0;
          this->m_pCustomProcessBuffer[v22 - 1][v23 + 4] = 0.0;
          this->m_pCustomProcessBuffer[v22 - 1][v23 + 8] = 0.0;
          this->m_pCustomProcessBuffer[v22 - 1][v23 + 12] = 0.0;
          this->m_pCustomProcessBuffer[v22 - 1][v23 + 1] = 0.0;
          this->m_pCustomProcessBuffer[v22 - 1][v23 + 5] = 1.0;
          this->m_pCustomProcessBuffer[v22 - 1][v23 + 9] = 0.0;
          this->m_pCustomProcessBuffer[v22 - 1][v23 + 13] = 0.0;
          this->m_pCustomProcessBuffer[v22 - 1][v23 + 2] = 0.0;
          this->m_pCustomProcessBuffer[v22 - 1][v23 + 6] = 0.0;
          this->m_pCustomProcessBuffer[v22 - 1][v23 + 10] = 1.0;
          this->m_pCustomProcessBuffer[v22 - 1][v23 + 14] = 0.0;
          this->m_pCustomProcessBuffer[v22 - 1][v23 + 3] = 0.0;
          this->m_pCustomProcessBuffer[v22 - 1][v23 + 7] = 0.0;
          this->m_pCustomProcessBuffer[v22 - 1][v23 + 11] = 0.0;
          this->m_pCustomProcessBuffer[v22 - 1][v23 + 15] = 1.0;
          m_customProcessBufferCount = this->m_customProcessBufferCount;
        }
        while ( v21 < m_customProcessBufferCount );
      }
      ++v18;
      ++v20;
    }
    while ( v18 < this->m_customProcessI1 );
  }
  v24 = pStageEvent->m_pPlayingModelAnimation;
  if ( v24 )
  {
    v25 = v24->m_pMotion;
    if ( v25 )
    {
      v26 = v25->m_pMotion;
      v61 = v26;
      if ( v26 )
      {
        v27 = 0;
        bAnimationChange = 0;
        if ( this->m_customProcessI1 > 0 )
        {
          v28 = 0i64;
          v60 = 0i64;
          do
          {
            m_pGroupObjects = pStageEvent->m_pGroupObjects;
            v30 = fmodf(v15 + *(float *)((char *)&m_pGroupObjects->startAnimationFrame + v28), m_motionTotalFrame);
            v31 = v26->m_ucBoneCount - 1;
            if ( v31 >= 2 )
            {
              v32 = v31;
              v33 = v31;
              do
              {
                v34 = OGLModel::searchMotionBoneID(m_pOGLModel, v31, &iMotionNo, &iAniboneNo, 1u);
                if ( v34 && &m_pOGLModel->m_pFigure->m_pBone[v33] )
                  OGLAnimationBone::getBoneMatrix(
                    v34,
                    &m_pOGLModel->m_pBoneInfo[v32].mRot,
                    &m_pOGLModel->m_pBoneInfo[v32].vScale,
                    v30,
                    m_pOGLModel->m_pBoneInfo[v32].pPrevStack,
                    m_pOGLModel->m_pBoneInfo[v32].pPrevStack,
                    1.0,
                    v57,
                    0,
                    0,
                    0.0);
                --v31;
                --v33;
                --v32;
              }
              while ( v31 >= 2 );
              v27 = bAnimationChange;
            }
            *(_QWORD *)v58.m = 1065353216i64;
            memset(&v58.m[5], 0, 20);
            *(_QWORD *)&v58.m[14] = 0i64;
            v58.m[4] = 0.0;
            *(_QWORD *)&v58.m[12] = 0i64;
            v35 = *(_OWORD *)pMatTrans->m;
            *(_QWORD *)&v58.m[5] = 1065353216i64;
            v36 = *(_OWORD *)&pMatTrans->m[4];
            *(_QWORD *)&v58.m[2] = 0i64;
            v37 = *(__m128 *)&pMatTrans->m[8];
            *(_QWORD *)&v58.m[10] = 1065353216i64;
            *(_OWORD *)In.m = v35;
            v38 = *(_OWORD *)&pMatTrans->m[12];
            m_pFigure = m_pOGLModel->m_pFigure;
            *(__m128 *)&In.m[8] = v37;
            *(_OWORD *)&In.m[12] = v38;
            *(float *)&v38 = *(float *)((char *)&m_pGroupObjects->pos.y + v60);
            m_pBone = m_pFigure->m_pBone;
            *(_OWORD *)&In.m[4] = v36;
            In.m[12] = *(float *)((char *)&m_pGroupObjects->pos.x + v60);
            *(float *)&v36 = *(float *)((char *)&m_pGroupObjects->pos.z + v60);
            LODWORD(In.m[13]) = v38;
            LODWORD(In.m[14]) = v36;
            LODWORD(In.m[9]) = _mm_shuffle_ps(v37, v37, 85).m128_u32[0] ^ _xmm;
            v58.m[15] = 1.0;
            OGLMatrix::multiply(&v58, &m_pBone[2].m_mOffset);
            OGLMatrix::multiply(&v58, &m_pOGLModel->m_pBoneInfo[2].mRot);
            OGLMatrix::multiply(&v58, &In);
            *(float *)&v36 = v58.m[4];
            v42 = 16 * *(int *)((char *)&m_pGroupObjects->id + v41);
            v43 = *this->m_pCustomProcessBuffer;
            v43[v42] = v58.m[0];
            v43[v42 + 2] = v58.m[8];
            *(float *)&v38 = v58.m[1];
            LODWORD(v43[v42 + 1]) = v36;
            *(float *)&v36 = v58.m[12];
            LODWORD(v43[v42 + 4]) = v38;
            *(float *)&v38 = v58.m[9];
            LODWORD(v43[v42 + 3]) = v36;
            *(float *)&v36 = v58.m[5];
            LODWORD(v43[v42 + 6]) = v38 ^ _xmm;
            *(float *)&v38 = v58.m[13];
            LODWORD(v43[v42 + 5]) = v36;
            *(float *)&v36 = v58.m[2];
            LODWORD(v43[v42 + 7]) = v38;
            *(float *)&v38 = v58.m[6];
            LODWORD(v43[v42 + 8]) = v36;
            *(float *)&v36 = v58.m[10];
            LODWORD(v43[v42 + 9]) = v38;
            *(float *)&v38 = v58.m[14];
            LODWORD(v43[v42 + 10]) = v36;
            *(float *)&v36 = v58.m[3];
            LODWORD(v43[v42 + 11]) = v38;
            *(float *)&v38 = v58.m[7];
            LODWORD(v43[v42 + 12]) = v36;
            *(float *)&v36 = v58.m[11];
            LODWORD(v43[v42 + 13]) = v38;
            LODWORD(v43[v42 + 14]) = v36;
            v43[v42 + 15] = v58.m[15];
            v44 = m_pOGLModel->m_pFigure;
            *(_QWORD *)v58.m = 1065353216i64;
            v58.m[4] = 0.0;
            *(_QWORD *)&v58.m[8] = 0i64;
            p_m_mOffset = &v44->m_pBone[4].m_mOffset;
            *(_QWORD *)&v58.m[12] = 0i64;
            *(_QWORD *)&v58.m[5] = 1065353216i64;
            *(_QWORD *)&v58.m[2] = 0i64;
            *(_QWORD *)&v58.m[10] = 1065353216i64;
            v58.m[14] = 0.0;
            v58.m[7] = 0.0;
            v58.m[15] = 1.0;
            OGLMatrix::multiply(&v58, p_m_mOffset);
            OGLMatrix::multiply(&v58, &m_pOGLModel->m_pBoneInfo[4].mRot);
            OGLMatrix::multiply(&v58, (OGLMatrix *)(v46 + 1284));
            OGLMatrix::multiply(&v58, &In);
            m_pCustomProcessBuffer = this->m_pCustomProcessBuffer;
            *(float *)&v36 = v58.m[4];
            v58.m[4] = 0.0;
            v48 = m_pCustomProcessBuffer[1];
            v48[v49] = v58.m[0];
            v48[v49 + 2] = v58.m[8];
            v48[v49 + 4] = v58.m[1];
            *(float *)&v38 = v58.m[9];
            LODWORD(v48[v49 + 1]) = v36;
            *(float *)&v36 = v58.m[12];
            LODWORD(v48[v49 + 6]) = v38 ^ _xmm;
            *(float *)&v38 = v58.m[13];
            LODWORD(v48[v49 + 3]) = v36;
            *(float *)&v36 = v58.m[5];
            LODWORD(v48[v49 + 7]) = v38;
            *(float *)&v38 = v58.m[6];
            LODWORD(v48[v49 + 5]) = v36;
            *(float *)&v36 = v58.m[2];
            LODWORD(v48[v49 + 9]) = v38;
            *(float *)&v38 = v58.m[14];
            LODWORD(v48[v49 + 8]) = v36;
            *(float *)&v36 = v58.m[10];
            LODWORD(v48[v49 + 11]) = v38;
            *(float *)&v38 = v58.m[7];
            LODWORD(v48[v49 + 10]) = v36;
            *(float *)&v36 = v58.m[3];
            LODWORD(v48[v49 + 13]) = v38;
            *(float *)&v38 = v58.m[15];
            LODWORD(v48[v49 + 12]) = v36;
            *(float *)&v36 = v58.m[11];
            LODWORD(v48[v49 + 15]) = v38;
            LODWORD(v48[v49 + 14]) = v36;
            v50 = m_pOGLModel->m_pFigure;
            *(_QWORD *)v58.m = 1065353216i64;
            *(_QWORD *)&v58.m[8] = 0i64;
            *(_QWORD *)&v58.m[12] = 0i64;
            v51 = &v50->m_pBone[3].m_mOffset;
            *(_QWORD *)&v58.m[5] = 1065353216i64;
            *(_QWORD *)&v58.m[2] = 0i64;
            *(_QWORD *)&v58.m[10] = 1065353216i64;
            v58.m[14] = 0.0;
            v58.m[7] = 0.0;
            v58.m[15] = 1.0;
            OGLMatrix::multiply(&v58, v51);
            OGLMatrix::multiply(&v58, &m_pOGLModel->m_pBoneInfo[3].mRot);
            OGLMatrix::multiply(&v58, (OGLMatrix *)(v52 + 1284));
            OGLMatrix::multiply(&v58, &In);
            ++v27;
            v28 = v53 + 56;
            *(float *)&v36 = v58.m[4];
            v26 = v61;
            v54 = *((_QWORD *)this->m_pCustomProcessBuffer + 2);
            bAnimationChange = v27;
            v60 = v28;
            *(float *)(v54 + 4 * v55) = v58.m[0];
            *(float *)(v54 + 4 * v55 + 8) = v58.m[8];
            *(float *)(v54 + 4 * v55 + 16) = v58.m[1];
            *(float *)&v38 = v58.m[9];
            *(_DWORD *)(v54 + 4 * v55 + 4) = v36;
            *(float *)&v36 = v58.m[12];
            *(_DWORD *)(v54 + 4 * v55 + 24) = v38 ^ _xmm;
            *(float *)&v38 = v58.m[13];
            *(_DWORD *)(v54 + 4 * v55 + 12) = v36;
            *(float *)&v36 = v58.m[5];
            *(_DWORD *)(v54 + 4 * v55 + 28) = v38;
            *(float *)&v38 = v58.m[6];
            *(_DWORD *)(v54 + 4 * v55 + 20) = v36;
            *(float *)&v36 = v58.m[2];
            *(_DWORD *)(v54 + 4 * v55 + 36) = v38;
            *(float *)&v38 = v58.m[14];
            *(_DWORD *)(v54 + 4 * v55 + 32) = v36;
            *(float *)&v36 = v58.m[10];
            *(_DWORD *)(v54 + 4 * v55 + 44) = v38;
            *(float *)&v38 = v58.m[7];
            *(_DWORD *)(v54 + 4 * v55 + 40) = v36;
            *(float *)&v36 = v58.m[3];
            *(_DWORD *)(v54 + 4 * v55 + 52) = v38;
            *(float *)&v38 = v58.m[15];
            *(_DWORD *)(v54 + 4 * v55 + 48) = v36;
            *(float *)&v36 = v58.m[11];
            *(_DWORD *)(v54 + 4 * v55 + 60) = v38;
            *(_DWORD *)(v54 + 4 * v55 + 56) = v36;
          }
          while ( v27 < this->m_customProcessI1 );
        }
      }
    }
  }
  *(_QWORD *)pStageEvent->m_transMatrix.m = 1065353216i64;
  result = 1;
  pStageEvent->m_transMatrix.m[4] = 0.0;
  *(_QWORD *)&pStageEvent->m_transMatrix.m[8] = 0i64;
  *(_QWORD *)&pStageEvent->m_transMatrix.m[12] = 0i64;
  *(_QWORD *)&pStageEvent->m_transMatrix.m[5] = 1065353216i64;
  *(_QWORD *)&pStageEvent->m_transMatrix.m[2] = 0i64;
  *(_QWORD *)&pStageEvent->m_transMatrix.m[10] = 1065353216i64;
  pStageEvent->m_transMatrix.m[14] = 0.0;
  pStageEvent->m_transMatrix.m[7] = 0.0;
  pStageEvent->m_transMatrix.m[15] = 1.0;
  return result;
}

