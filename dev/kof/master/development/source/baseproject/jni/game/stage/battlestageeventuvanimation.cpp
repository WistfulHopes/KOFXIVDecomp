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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageeventuvanimation.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageevent.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageevent.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B38
void BattleStageEventUVAnimation::release(); // 0x1402126A0
void BattleStageEventUVAnimation::setup(BattleStageEvent & eve); // 0x1402126E0
void BattleStageEventUVAnimation::update(BattleStageEvent & eve, float animationFrame); // 0x140212900
void BattleStageEventUVAnimation::animation(BattleStageEvent & eve); // 0x140212FA0//decompilation failure at 1408A0B38!
void __fastcall BattleStageEventUVAnimation::animation(BattleStageEventUVAnimation *this, BattleStageEvent *eve)
{
  BattleStageEvent *v2; // r8
  BattleStageEventUVAnimation *v3; // r10
  bool m_bModelUVChanged; // al
  OGLModel *m_pOGLModel; // rsi
  unsigned int v6; // er15
  OGLFigure *m_pFigure; // r14
  int v8; // er11
  char *m_pfVertexBuffer; // rbp
  BSDataUVAnimation *v10; // rdx
  int m_paramCount; // ecx
  __int64 v12; // rbx
  BattleStageEventUVAnimation::Params *m_pParams; // rdi
  TknDataUVAnimation::UVAnimation *v14; // rax
  __int64 multiTextureIndex; // rdx
  __int64 v16; // r12
  float rot; // xmm7_4
  __int64 v18; // rcx
  float *v19; // rsi
  unsigned int v20; // eax
  __int64 v21; // r15
  unsigned int v22; // er13
  __int64 v23; // r9
  unsigned int v24; // eax
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // eax
  __int64 v40; // r10
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r10
  __int64 v51; // rcx
  __int64 v52; // r8
  float v53; // xmm6_4
  float v54; // xmm5_4
  __int64 v55; // r10
  unsigned int v56; // eax
  __int64 v57; // r9
  __int64 v58; // rdx
  float v59; // xmm2_4
  float v60; // xmm1_4
  float v61; // xmm0_4
  __int64 v62; // rcx
  __int64 v63; // rdx
  float v64; // xmm2_4
  __int64 v65; // rcx
  float v66; // xmm0_4
  float v67; // xmm1_4
  __int64 v68; // rdx
  float v69; // xmm2_4
  float v70; // xmm3_4
  __int64 v71; // rcx
  float v72; // xmm0_4
  __int64 v73; // rdx
  float v74; // xmm2_4
  float v75; // xmm3_4
  float v76; // xmm4_4
  __int64 v77; // rcx
  __int64 v78; // r9
  __int64 v79; // r10
  __int64 v80; // rdx
  float v81; // xmm2_4
  float v82; // xmm3_4
  float v83; // xmm4_4
  __int64 v84; // rcx
  __int64 v85; // r10
  unsigned int v86; // eax
  __int64 v87; // r9
  __int64 v88; // rdx
  float v89; // xmm2_4
  float v90; // xmm1_4
  float v91; // xmm0_4
  __int64 v92; // rcx
  __int64 v93; // rdx
  float v94; // xmm2_4
  __int64 v95; // rcx
  float v96; // xmm0_4
  float v97; // xmm1_4
  __int64 v98; // rdx
  float v99; // xmm2_4
  float v100; // xmm3_4
  __int64 v101; // rcx
  float v102; // xmm0_4
  __int64 v103; // rdx
  float v104; // xmm2_4
  float v105; // xmm3_4
  float v106; // xmm4_4
  __int64 v107; // rcx
  __int64 v108; // r9
  __int64 v109; // r10
  __int64 v110; // rdx
  float v111; // xmm2_4
  float v112; // xmm3_4
  float v113; // xmm4_4
  __int64 v114; // rcx
  bool v115; // zf
  unsigned int v116; // er11
  unsigned int m_usVertexCoordCount; // er9
  char *v118; // rbx
  float *v119; // rdx
  float *v120; // rcx
  unsigned int v121; // eax
  __int64 v122; // r8
  int v123; // eax
  __int64 v124; // r8
  __int64 v125; // rcx
  int v126; // eax
  float *v127; // rdx
  float *v128; // rcx
  unsigned int v129; // eax
  __int64 v130; // r8
  int v131; // eax
  char *v132; // r8
  __int64 v133; // rcx
  int v134; // eax
  unsigned int vertexBuffer; // edx
  int v136; // [rsp+20h] [rbp-A8h]
  TknDataUVAnimationModelInfo *m_pUvAnimationModelInfos; // [rsp+28h] [rbp-A0h]
  OGLModel *v138; // [rsp+30h] [rbp-98h]
  BSDataUVAnimation *v139; // [rsp+38h] [rbp-90h]
  __int64 v140; // [rsp+40h] [rbp-88h]
  bool v143; // [rsp+E0h] [rbp+18h]
  unsigned int v144; // [rsp+E8h] [rbp+20h]

  v2 = eve;
  v3 = this;
  if ( this->m_bActive )
  {
    m_bModelUVChanged = this->m_bModelUVChanged;
    this->m_bModelUVChanged = 0;
    m_pOGLModel = eve->m_pOGLModel;
    v6 = 0;
    v143 = m_bModelUVChanged;
    m_pFigure = m_pOGLModel->m_pFigure;
    v138 = m_pOGLModel;
    if ( this->m_bEnableAnimations )
    {
      v8 = 0;
      m_pfVertexBuffer = (char *)m_pOGLModel->m_pfVertexBuffer;
      v136 = 0;
      v10 = *eve->m_pEvent->m_pObject->m_pModel->m_pUVAnimations;
      m_paramCount = this->m_paramCount;
      v139 = v10;
      if ( v10->m_animationCount < m_paramCount )
        m_paramCount = v10->m_animationCount;
      v140 = m_paramCount;
      if ( m_paramCount > 0 )
      {
        v12 = 0i64;
        do
        {
          m_pParams = v3->m_pParams;
          if ( m_pParams[v12].x == 0.0 && m_pParams[v12].y == 0.0 && m_pParams[v12].rot == 0.0 )
            goto LABEL_55;
          if ( v8 < 0 || v10->m_animationCount <= v8 )
            v14 = 0i64;
          else
            v14 = &v10->m_pAnimations[(__int64)v8];
          multiTextureIndex = v14->multiTextureIndex;
          v16 = multiTextureIndex;
          rot = m_pParams[v12].rot;
          v18 = (__int64)&m_pOGLModel->m_pMaterial[v14->materialIndex];
          v19 = m_pFigure->m_pfTexCoord[multiTextureIndex];
          v20 = *(_DWORD *)(v18 + 40);
          v21 = *(unsigned int *)(v18 + 36);
          v144 = v20;
          v22 = v20 + v21;
          if ( rot == 0.0 )
          {
            if ( (_DWORD)multiTextureIndex )
            {
              if ( (_DWORD)multiTextureIndex != 1 || (unsigned int)v21 >= v22 )
                goto LABEL_54;
              if ( v20 >= 4 )
              {
                v38 = v21;
                v39 = ((v20 - 4) >> 2) + 1;
                v40 = v39;
                v21 = (unsigned int)v21 + 4 * v39;
                do
                {
                  v41 = m_pFigure->m_pusIndex[v38];
                  v42 = 88 * v41;
                  *(float *)&m_pfVertexBuffer[v42 + 64] = v19[2 * (_DWORD)v41] + m_pParams[v12].x;
                  *(float *)&m_pfVertexBuffer[v42 + 68] = v19[2 * (int)v41 + 1] + m_pParams[v12].y;
                  v43 = m_pFigure->m_pusIndex[v38 + 1];
                  v44 = 88 * v43;
                  *(float *)&m_pfVertexBuffer[v44 + 64] = v19[2 * (_DWORD)v43] + m_pParams[v12].x;
                  *(float *)&m_pfVertexBuffer[v44 + 68] = v19[2 * (int)v43 + 1] + m_pParams[v12].y;
                  v45 = m_pFigure->m_pusIndex[v38 + 2];
                  v46 = 88 * v45;
                  *(float *)&m_pfVertexBuffer[v46 + 64] = v19[2 * (_DWORD)v45] + m_pParams[v12].x;
                  *(float *)&m_pfVertexBuffer[v46 + 68] = v19[2 * (int)v45 + 1] + m_pParams[v12].y;
                  v47 = m_pFigure->m_pusIndex[v38 + 3];
                  v38 += 4i64;
                  v48 = 88 * v47;
                  *(float *)&m_pfVertexBuffer[v48 + 64] = v19[2 * (_DWORD)v47] + m_pParams[v12].x;
                  *(float *)&m_pfVertexBuffer[v48 + 68] = v19[2 * (int)v47 + 1] + m_pParams[v12].y;
                  --v40;
                }
                while ( v40 );
                v3 = this;
              }
              if ( (unsigned int)v21 >= v22 )
                goto LABEL_54;
              v49 = v21;
              v50 = v22 - (unsigned int)v21;
              do
              {
                v51 = m_pFigure->m_pusIndex[v49++];
                v52 = 88 * v51;
                *(float *)&m_pfVertexBuffer[v52 + 64] = v19[2 * (_DWORD)v51] + m_pParams[v12].x;
                *(float *)&m_pfVertexBuffer[v52 + 68] = v19[2 * (int)v51 + 1] + m_pParams[v12].y;
                --v50;
              }
              while ( v50 );
            }
            else
            {
              if ( (unsigned int)v21 >= v22 )
                goto LABEL_54;
              if ( v20 >= 4 )
              {
                v23 = v21;
                v24 = ((v20 - 4) >> 2) + 1;
                v25 = v24;
                v21 = (unsigned int)v21 + 4 * v24;
                do
                {
                  v26 = m_pFigure->m_pusIndex[v23];
                  v27 = 88 * v26;
                  *(float *)&m_pfVertexBuffer[v27 + 56] = v19[2 * (_DWORD)v26] + m_pParams[v12].x;
                  *(float *)&m_pfVertexBuffer[v27 + 60] = v19[2 * (int)v26 + 1] + m_pParams[v12].y;
                  v28 = m_pFigure->m_pusIndex[v23 + 1];
                  v29 = 88 * v28;
                  *(float *)&m_pfVertexBuffer[v29 + 56] = v19[2 * (_DWORD)v28] + m_pParams[v12].x;
                  *(float *)&m_pfVertexBuffer[v29 + 60] = v19[2 * (int)v28 + 1] + m_pParams[v12].y;
                  v30 = m_pFigure->m_pusIndex[v23 + 2];
                  v31 = 88 * v30;
                  *(float *)&m_pfVertexBuffer[v31 + 56] = v19[2 * (_DWORD)v30] + m_pParams[v12].x;
                  *(float *)&m_pfVertexBuffer[v31 + 60] = v19[2 * (int)v30 + 1] + m_pParams[v12].y;
                  v32 = m_pFigure->m_pusIndex[v23 + 3];
                  v23 += 4i64;
                  v33 = 88 * v32;
                  *(float *)&m_pfVertexBuffer[v33 + 56] = v19[2 * (_DWORD)v32] + m_pParams[v12].x;
                  *(float *)&m_pfVertexBuffer[v33 + 60] = v19[2 * (int)v32 + 1] + m_pParams[v12].y;
                  --v25;
                }
                while ( v25 );
                v3 = this;
              }
              if ( (unsigned int)v21 >= v22 )
                goto LABEL_54;
              v34 = v21;
              v35 = v22 - (unsigned int)v21;
              do
              {
                v36 = m_pFigure->m_pusIndex[v34++];
                v37 = 88 * v36;
                *(float *)&m_pfVertexBuffer[v37 + 56] = v19[2 * (_DWORD)v36] + m_pParams[v12].x;
                *(float *)&m_pfVertexBuffer[v37 + 60] = v19[2 * (int)v36 + 1] + m_pParams[v12].y;
                --v35;
              }
              while ( v35 );
            }
          }
          else
          {
            m_pUvAnimationModelInfos = v2->m_pEvent->m_pObject->m_pModel->m_pUvAnimationModelInfos;
            v53 = sinf(rot);
            v54 = cosf(rot);
            if ( (_DWORD)v16 )
            {
              if ( (_DWORD)v16 == 1 && (unsigned int)v21 < v22 )
              {
                if ( v144 >= 4 )
                {
                  v85 = v21;
                  v86 = ((v22 - (unsigned int)v21 - 4) >> 2) + 1;
                  v87 = v86;
                  v21 = (unsigned int)v21 + 4 * v86;
                  do
                  {
                    v88 = m_pFigure->m_pusIndex[v85];
                    v89 = m_pUvAnimationModelInfos->pCenterU[v16];
                    v90 = v19[2 * (_DWORD)v88] - v89;
                    v91 = v19[2 * (int)v88 + 1] - m_pUvAnimationModelInfos->pCenterV[v16];
                    v92 = 88 * v88;
                    *(float *)&m_pfVertexBuffer[v92 + 64] = (float)((float)((float)(v90 * v54) - (float)(v91 * v53))
                                                                  + m_pParams[v12].x)
                                                          + v89;
                    *(float *)&m_pfVertexBuffer[v92 + 68] = (float)((float)((float)(v91 * v54) + (float)(v90 * v53))
                                                                  + m_pParams[v12].y)
                                                          + m_pUvAnimationModelInfos->pCenterV[v16];
                    v93 = m_pFigure->m_pusIndex[v85 + 1];
                    v94 = m_pUvAnimationModelInfos->pCenterU[v16];
                    v95 = 88 * v93;
                    v96 = v19[2 * (int)v93 + 1] - m_pUvAnimationModelInfos->pCenterV[v16];
                    v97 = v19[2 * (_DWORD)v93] - v94;
                    *(float *)&m_pfVertexBuffer[v95 + 64] = (float)((float)((float)(v97 * v54) - (float)(v96 * v53))
                                                                  + m_pParams[v12].x)
                                                          + v94;
                    *(float *)&m_pfVertexBuffer[v95 + 68] = (float)((float)((float)(v96 * v54) + (float)(v97 * v53))
                                                                  + m_pParams[v12].y)
                                                          + m_pUvAnimationModelInfos->pCenterV[v16];
                    v98 = m_pFigure->m_pusIndex[v85 + 2];
                    v99 = m_pUvAnimationModelInfos->pCenterU[v16];
                    v100 = v19[2 * (_DWORD)v98] - v99;
                    v101 = 88 * v98;
                    v102 = v19[2 * (int)v98 + 1] - m_pUvAnimationModelInfos->pCenterV[v16];
                    *(float *)&m_pfVertexBuffer[v101 + 64] = (float)((float)((float)(v100 * v54) - (float)(v102 * v53))
                                                                   + m_pParams[v12].x)
                                                           + v99;
                    *(float *)&m_pfVertexBuffer[v101 + 68] = (float)((float)((float)(v102 * v54) + (float)(v100 * v53))
                                                                   + m_pParams[v12].y)
                                                           + m_pUvAnimationModelInfos->pCenterV[v16];
                    v103 = m_pFigure->m_pusIndex[v85 + 3];
                    v85 += 4i64;
                    v104 = m_pUvAnimationModelInfos->pCenterU[v16];
                    v105 = v19[2 * (_DWORD)v103] - v104;
                    v106 = v19[2 * (int)v103 + 1] - m_pUvAnimationModelInfos->pCenterV[v16];
                    v107 = 88 * v103;
                    *(float *)&m_pfVertexBuffer[v107 + 64] = (float)((float)((float)(v105 * v54) - (float)(v106 * v53))
                                                                   + m_pParams[v12].x)
                                                           + v104;
                    *(float *)&m_pfVertexBuffer[v107 + 68] = (float)((float)((float)(v106 * v54) + (float)(v105 * v53))
                                                                   + m_pParams[v12].y)
                                                           + m_pUvAnimationModelInfos->pCenterV[v16];
                    --v87;
                  }
                  while ( v87 );
                }
                if ( (unsigned int)v21 < v22 )
                {
                  v108 = v21;
                  v109 = v22 - (unsigned int)v21;
                  do
                  {
                    v110 = m_pFigure->m_pusIndex[v108++];
                    v111 = m_pUvAnimationModelInfos->pCenterU[v16];
                    v112 = v19[2 * (_DWORD)v110] - v111;
                    v113 = v19[2 * (int)v110 + 1] - m_pUvAnimationModelInfos->pCenterV[v16];
                    v114 = 88 * v110;
                    *(float *)&m_pfVertexBuffer[v114 + 64] = (float)((float)((float)(v112 * v54) - (float)(v113 * v53))
                                                                   + m_pParams[v12].x)
                                                           + v111;
                    *(float *)&m_pfVertexBuffer[v114 + 68] = (float)((float)((float)(v113 * v54) + (float)(v112 * v53))
                                                                   + m_pParams[v12].y)
                                                           + m_pUvAnimationModelInfos->pCenterV[v16];
                    --v109;
                  }
                  while ( v109 );
                }
              }
            }
            else if ( (unsigned int)v21 < v22 )
            {
              if ( v144 >= 4 )
              {
                v55 = v21;
                v56 = ((v22 - (unsigned int)v21 - 4) >> 2) + 1;
                v57 = v56;
                v21 = (unsigned int)v21 + 4 * v56;
                do
                {
                  v58 = m_pFigure->m_pusIndex[v55];
                  v59 = m_pUvAnimationModelInfos->pCenterU[v16];
                  v60 = v19[2 * (_DWORD)v58] - v59;
                  v61 = v19[2 * (int)v58 + 1] - m_pUvAnimationModelInfos->pCenterV[v16];
                  v62 = 88 * v58;
                  *(float *)&m_pfVertexBuffer[v62 + 56] = (float)((float)((float)(v60 * v54) - (float)(v61 * v53))
                                                                + m_pParams[v12].x)
                                                        + v59;
                  *(float *)&m_pfVertexBuffer[v62 + 60] = (float)((float)((float)(v61 * v54) + (float)(v60 * v53))
                                                                + m_pParams[v12].y)
                                                        + m_pUvAnimationModelInfos->pCenterV[v16];
                  v63 = m_pFigure->m_pusIndex[v55 + 1];
                  v64 = m_pUvAnimationModelInfos->pCenterU[v16];
                  v65 = 88 * v63;
                  v66 = v19[2 * (int)v63 + 1] - m_pUvAnimationModelInfos->pCenterV[v16];
                  v67 = v19[2 * (_DWORD)v63] - v64;
                  *(float *)&m_pfVertexBuffer[v65 + 56] = (float)((float)((float)(v67 * v54) - (float)(v66 * v53))
                                                                + m_pParams[v12].x)
                                                        + v64;
                  *(float *)&m_pfVertexBuffer[v65 + 60] = (float)((float)((float)(v66 * v54) + (float)(v67 * v53))
                                                                + m_pParams[v12].y)
                                                        + m_pUvAnimationModelInfos->pCenterV[v16];
                  v68 = m_pFigure->m_pusIndex[v55 + 2];
                  v69 = m_pUvAnimationModelInfos->pCenterU[v16];
                  v70 = v19[2 * (_DWORD)v68] - v69;
                  v71 = 88 * v68;
                  v72 = v19[2 * (int)v68 + 1] - m_pUvAnimationModelInfos->pCenterV[v16];
                  *(float *)&m_pfVertexBuffer[v71 + 56] = (float)((float)((float)(v70 * v54) - (float)(v72 * v53))
                                                                + m_pParams[v12].x)
                                                        + v69;
                  *(float *)&m_pfVertexBuffer[v71 + 60] = (float)((float)((float)(v72 * v54) + (float)(v70 * v53))
                                                                + m_pParams[v12].y)
                                                        + m_pUvAnimationModelInfos->pCenterV[v16];
                  v73 = m_pFigure->m_pusIndex[v55 + 3];
                  v55 += 4i64;
                  v74 = m_pUvAnimationModelInfos->pCenterU[v16];
                  v75 = v19[2 * (_DWORD)v73] - v74;
                  v76 = v19[2 * (int)v73 + 1] - m_pUvAnimationModelInfos->pCenterV[v16];
                  v77 = 88 * v73;
                  *(float *)&m_pfVertexBuffer[v77 + 56] = (float)((float)((float)(v75 * v54) - (float)(v76 * v53))
                                                                + m_pParams[v12].x)
                                                        + v74;
                  *(float *)&m_pfVertexBuffer[v77 + 60] = (float)((float)((float)(v76 * v54) + (float)(v75 * v53))
                                                                + m_pParams[v12].y)
                                                        + m_pUvAnimationModelInfos->pCenterV[v16];
                  --v57;
                }
                while ( v57 );
              }
              if ( (unsigned int)v21 < v22 )
              {
                v78 = v21;
                v79 = v22 - (unsigned int)v21;
                do
                {
                  v80 = m_pFigure->m_pusIndex[v78++];
                  v81 = m_pUvAnimationModelInfos->pCenterU[v16];
                  v82 = v19[2 * (_DWORD)v80] - v81;
                  v83 = v19[2 * (int)v80 + 1] - m_pUvAnimationModelInfos->pCenterV[v16];
                  v84 = 88 * v80;
                  *(float *)&m_pfVertexBuffer[v84 + 56] = (float)((float)((float)(v82 * v54) - (float)(v83 * v53))
                                                                + m_pParams[v12].x)
                                                        + v81;
                  *(float *)&m_pfVertexBuffer[v84 + 60] = (float)((float)((float)(v83 * v54) + (float)(v82 * v53))
                                                                + m_pParams[v12].y)
                                                        + m_pUvAnimationModelInfos->pCenterV[v16];
                  --v79;
                }
                while ( v79 );
              }
            }
            v8 = v136;
          }
          v3 = this;
LABEL_54:
          v2 = eve;
          v6 = 0;
          v10 = v139;
          m_pOGLModel = v138;
          v3->m_bModelUVChanged = 1;
LABEL_55:
          ++v8;
          ++v12;
          v115 = v140-- == 1;
          v136 = v8;
        }
        while ( !v115 );
      }
      m_bModelUVChanged = v143;
    }
    if ( !v3->m_bModelUVChanged && m_bModelUVChanged )
    {
      v116 = 0;
      m_usVertexCoordCount = m_pFigure->m_usVertexCoordCount;
      v118 = (char *)m_pOGLModel->m_pfVertexBuffer;
      v119 = m_pOGLModel->m_pFigure->m_pfTexCoord[0];
      if ( m_usVertexCoordCount >= 4 )
      {
        v120 = (float *)(v118 + 60);
        v121 = ((m_usVertexCoordCount - 4) >> 2) + 1;
        v122 = v121;
        v116 = 4 * v121;
        do
        {
          *(v120 - 1) = *v119;
          v120 += 88;
          *(v120 - 88) = v119[1];
          *(v120 - 67) = v119[2];
          *(v120 - 66) = v119[3];
          *(v120 - 45) = v119[4];
          *(v120 - 44) = v119[5];
          *(v120 - 23) = v119[6];
          v123 = *((_DWORD *)v119 + 7);
          v119 += 8;
          *((_DWORD *)v120 - 22) = v123;
          --v122;
        }
        while ( v122 );
      }
      if ( v116 < m_usVertexCoordCount )
      {
        v124 = (__int64)&v118[88 * v116 + 60];
        v125 = m_usVertexCoordCount - v116;
        do
        {
          v126 = *(_DWORD *)v119;
          v119 += 2;
          *(_DWORD *)(v124 - 4) = v126;
          v124 += 88i64;
          *(float *)(v124 - 88) = *(v119 - 1);
          --v125;
        }
        while ( v125 );
      }
      if ( m_pFigure->m_uiMultiUvCount > 1 )
      {
        v127 = m_pOGLModel->m_pFigure->m_pfTexCoord[1];
        if ( m_usVertexCoordCount >= 4 )
        {
          v128 = (float *)(v118 + 68);
          v129 = ((m_usVertexCoordCount - 4) >> 2) + 1;
          v130 = v129;
          v6 = 4 * v129;
          do
          {
            *(v128 - 1) = *v127;
            v128 += 88;
            *(v128 - 88) = v127[1];
            *(v128 - 67) = v127[2];
            *(v128 - 66) = v127[3];
            *(v128 - 45) = v127[4];
            *(v128 - 44) = v127[5];
            *(v128 - 23) = v127[6];
            v131 = *((_DWORD *)v127 + 7);
            v127 += 8;
            *((_DWORD *)v128 - 22) = v131;
            --v130;
          }
          while ( v130 );
        }
        if ( v6 < m_usVertexCoordCount )
        {
          v132 = &v118[88 * v6 + 68];
          v133 = m_usVertexCoordCount - v6;
          do
          {
            v134 = *(_DWORD *)v127;
            v127 += 2;
            *((_DWORD *)v132 - 1) = v134;
            v132 += 88;
            *((float *)v132 - 22) = *(v127 - 1);
            --v133;
          }
          while ( v133 );
        }
      }
    }
    if ( v3->m_bModelUVChanged && !OGLModel::checkCreateBuffers(m_pOGLModel) )
    {
      vertexBuffer = m_pOGLModel->vertexBuffer;
      if ( vertexBuffer )
      {
        if ( m_pOGLModel->m_pFigure )
        {
          _glewBindBuffer(0x8892u, vertexBuffer);
          _glewBufferData(
            0x8892u,
            88i64 * m_pOGLModel->m_pFigure->m_usVertexCoordCount,
            m_pOGLModel->m_pfVertexBuffer,
            0x88E4u);
          _glewBindBuffer(0x8892u, 0);
        }
      }
    }
  }
}

void __fastcall BattleStageEventUVAnimation::release(BattleStageEventUVAnimation *this, unsigned __int64 a2)
{
  BattleStageEventUVAnimation::Params *m_pParams; // rcx

  *(_WORD *)&this->m_bActive = 0;
  m_pParams = this->m_pParams;
  if ( m_pParams )
  {
    operator delete(m_pParams, a2);
    this->m_pParams = 0i64;
  }
  this->m_bModelUVChanged = 0;
  this->m_paramCount = 0;
}

void __fastcall BattleStageEventUVAnimation::setup(BattleStageEventUVAnimation *this, BattleStageEvent *eve)
{
  OGLModel *m_pOGLModel; // r10
  OGLFigure *m_pFigure; // rax
  int m_ucMaterialCount; // eax
  __int64 v7; // rbx
  __int64 v8; // r11
  OGLMaterial *v9; // rcx
  __int64 m_cTextureIndex; // r9
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  unsigned __int64 m_paramCount; // rax
  __int64 v22; // rbx
  BattleStageEventUVAnimation::Params *v23; // rax
  _QWORD *p_y; // rcx

  this->release(this);
  if ( eve->m_contentsType == CONTENTS_TYPE_MODEL )
  {
    m_pOGLModel = eve->m_pOGLModel;
    if ( m_pOGLModel )
    {
      if ( m_pOGLModel->m_pFigure )
      {
        this->m_paramCount = 0;
        m_pFigure = m_pOGLModel->m_pFigure;
        if ( m_pFigure )
          m_ucMaterialCount = m_pFigure->m_ucMaterialCount;
        else
          m_ucMaterialCount = 0;
        v7 = m_ucMaterialCount;
        if ( m_ucMaterialCount > 0 )
        {
          v8 = 0i64;
          do
          {
            v9 = &m_pOGLModel->m_pMaterial[v8];
            if ( v9 )
            {
              m_cTextureIndex = v9->m_cTextureIndex;
              this->m_paramCount += m_pOGLModel->m_pTexture[m_cTextureIndex][0] != 0i64;
              v11 = (m_pOGLModel->m_pTexture[m_cTextureIndex][1] != 0i64) + this->m_paramCount;
              this->m_paramCount = v11;
              v12 = (m_pOGLModel->m_pTexture[m_cTextureIndex][2] != 0i64) + v11;
              this->m_paramCount = v12;
              this->m_paramCount = v12 + (m_pOGLModel->m_pTexture[m_cTextureIndex][3] != 0i64);
              this->m_paramCount += m_pOGLModel->m_pMaterialMap[m_cTextureIndex][0] != 0i64;
              v13 = (m_pOGLModel->m_pMaterialMap[m_cTextureIndex][1] != 0i64) + this->m_paramCount;
              this->m_paramCount = v13;
              v14 = (m_pOGLModel->m_pMaterialMap[m_cTextureIndex][2] != 0i64) + v13;
              this->m_paramCount = v14;
              v15 = (m_pOGLModel->m_pMaterialMap[m_cTextureIndex][3] != 0i64) + v14;
              this->m_paramCount = v15;
              v16 = (m_pOGLModel->m_pMaterialMap[m_cTextureIndex][4] != 0i64) + v15;
              this->m_paramCount = v16;
              v17 = (m_pOGLModel->m_pMaterialMap[m_cTextureIndex][5] != 0i64) + v16;
              this->m_paramCount = v17;
              v18 = (m_pOGLModel->m_pMaterialMap[m_cTextureIndex][6] != 0i64) + v17;
              this->m_paramCount = v18;
              v19 = (m_pOGLModel->m_pMaterialMap[m_cTextureIndex][7] != 0i64) + v18;
              this->m_paramCount = v19;
              v20 = (m_pOGLModel->m_pMaterialMap[m_cTextureIndex][8] != 0i64) + v19;
              this->m_paramCount = v20;
              this->m_paramCount = v20 + (m_pOGLModel->m_pMaterialMap[m_cTextureIndex][9] != 0i64);
            }
            ++v8;
            --v7;
          }
          while ( v7 );
        }
        m_paramCount = this->m_paramCount;
        if ( (_DWORD)m_paramCount )
        {
          v22 = this->m_paramCount;
          v23 = (BattleStageEventUVAnimation::Params *)operator new[](saturated_mul(m_paramCount, 0xCui64));
          if ( v23 )
          {
            if ( v22 )
            {
              p_y = (_QWORD *)&v23->y;
              do
              {
                *p_y = 0i64;
                *((_DWORD *)p_y - 1) = 0;
                p_y = (_QWORD *)((char *)p_y + 12);
                --v22;
              }
              while ( v22 );
            }
          }
          else
          {
            v23 = 0i64;
          }
          this->m_pParams = v23;
          this->m_bActive = 1;
        }
      }
    }
  }
}

void __fastcall BattleStageEventUVAnimation::update(
        BattleStageEventUVAnimation *this,
        BattleStageEvent *eve,
        float animationFrame)
{
  BSDataEvent *m_pEvent; // r9
  BSDataEventModelAnimation *m_pPlayingModelAnimation; // rbp
  int v8; // edx
  __int64 v9; // rcx
  BattleStageEventUVAnimation::Params *m_pParams; // rax
  BSDataObject *m_pObject; // rdi
  OGLModel *m_pOGLModel; // rbx
  BSDataUVAnimation *m_pUvAnimation; // rbp
  float v14; // xmm8_4
  BSDataModel *m_pModel; // r12
  OGLFigure *m_pFigure; // rcx
  TknDataUVAnimation::ModelAnimationType m_modelAnimationType; // eax
  TknDataUVAnimationModelInfo *m_pUvAnimationModelInfos; // r13
  float v19; // xmm0_4
  float x; // xmm2_4
  OGLMatrix *p_m_mWorld; // rcx
  __int128 v22; // xmm1
  float v23; // xmm3_4
  __int128 v24; // xmm0
  float v25; // xmm2_4
  __int128 v26; // xmm1
  OGLMatrix *v27; // rbx
  float v28; // xmm6_4
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int64 m_animationCount; // rdx
  float rot; // xmm12_4
  float y; // xmm13_4
  float v35; // xmm14_4
  int v36; // er15
  __int64 i; // rbx
  float *v38; // rsi
  __int64 v39; // r9
  int v40; // eax
  int *p_textureDivisionCountRow; // r10
  BattleStageEventUVAnimation::Params *v42; // rdi
  int v43; // eax
  int m_animationFrameMax; // ecx
  int v45; // edx
  TknDataUVAnimation::UVAnimation *v46; // r8
  __int64 v47; // rcx
  int *pAnimationList; // rax
  int v49; // er8
  float v50; // xmm1_4
  float v51; // xmm2_4
  float v52; // xmm0_4
  float v53; // xmm7_4
  float v54; // xmm6_4
  float v55; // xmm8_4
  float v56; // xmm10_4
  float v57; // xmm9_4
  float v58; // xmm0_4
  float v59; // xmm6_4
  float v60; // xmm0_4
  float v61; // xmm0_4
  float v62; // xmm1_4
  float v63; // xmm2_4
  float v64; // xmm0_4
  __int64 v65; // rax
  char v66; // al
  float v67; // [rsp+20h] [rbp-138h]
  __int64 v68; // [rsp+28h] [rbp-130h]
  OGLFigure *v69; // [rsp+30h] [rbp-128h]
  OGLMatrix In; // [rsp+40h] [rbp-118h] BYREF
  float v71; // [rsp+160h] [rbp+8h]
  float v72; // [rsp+178h] [rbp+20h]

  if ( !this->m_bActive )
    return;
  this->m_bEnableAnimations = 0;
  m_pEvent = eve->m_pEvent;
  m_pPlayingModelAnimation = eve->m_pPlayingModelAnimation;
  if ( !m_pEvent || !m_pPlayingModelAnimation || !m_pPlayingModelAnimation->m_uvAnimationUID )
    return;
  v8 = 0;
  if ( this->m_paramCount > 0 )
  {
    v9 = 0i64;
    do
    {
      m_pParams = this->m_pParams;
      ++v9;
      ++v8;
      *(_QWORD *)&m_pParams[v9 - 1].y = 0i64;
      m_pParams[v9 - 1].x = 0.0;
    }
    while ( v8 < this->m_paramCount );
  }
  m_pObject = m_pEvent->m_pObject;
  m_pOGLModel = eve->m_pOGLModel;
  m_pUvAnimation = m_pPlayingModelAnimation->m_pUvAnimation;
  v14 = FLOAT_180_0;
  m_pModel = m_pObject->m_pModel;
  m_pFigure = m_pOGLModel->m_pFigure;
  m_modelAnimationType = m_pUvAnimation->m_modelAnimationType;
  m_pUvAnimationModelInfos = m_pModel->m_pUvAnimationModelInfos;
  v71 = 0.0;
  v72 = 0.0;
  v67 = 0.0;
  v69 = m_pFigure;
  if ( m_modelAnimationType == MODEL_ANIMTYPE_TRANS )
  {
    if ( m_pModel->m_uvAnimationModelCount <= 0 )
      goto LABEL_14;
    v71 = fmodf(animationFrame * m_pUvAnimation->m_modelAnimeTransSpeedX, m_pUvAnimation->m_modelAnimeTransMaxValueX);
    v19 = fmodf(animationFrame * m_pUvAnimation->m_modelAnimeTransSpeedY, m_pUvAnimation->m_modelAnimeTransMaxValueY);
    x = m_pObject->m_scale.x;
    p_m_mWorld = &m_pOGLModel->m_mWorld;
    v22 = *(_OWORD *)&m_pOGLModel->m_mWorld.m[4];
    v72 = v19;
    v23 = (float)(m_pObject->m_scale.y * v19) * m_pUvAnimationModelInfos->uvAnimationTransRateY;
    *(_OWORD *)In.m = *(_OWORD *)m_pOGLModel->m_mWorld.m;
    v24 = *(_OWORD *)&m_pOGLModel->m_mWorld.m[8];
    v25 = (float)(x * v71) * m_pUvAnimationModelInfos->uvAnimationTransRateX;
    *(_OWORD *)&In.m[4] = v22;
    v26 = *(_OWORD *)&m_pOGLModel->m_mWorld.m[12];
    *(_QWORD *)m_pOGLModel->m_mWorld.m = 1065353216i64;
    m_pOGLModel->m_mWorld.m[4] = 0.0;
    *(_QWORD *)&m_pOGLModel->m_mWorld.m[8] = 0i64;
    *(_QWORD *)&m_pOGLModel->m_mWorld.m[12] = 0i64;
    *(_QWORD *)&m_pOGLModel->m_mWorld.m[5] = 1065353216i64;
    *(_QWORD *)&m_pOGLModel->m_mWorld.m[2] = 0i64;
    *(_QWORD *)&m_pOGLModel->m_mWorld.m[10] = 1065353216i64;
    m_pOGLModel->m_mWorld.m[7] = 0.0;
    m_pOGLModel->m_mWorld.m[15] = 1.0;
    m_pOGLModel->m_mWorld.m[12] = v25;
    m_pOGLModel->m_mWorld.m[13] = v23;
    *(_OWORD *)&In.m[8] = v24;
    *(_OWORD *)&In.m[12] = v26;
    m_pOGLModel->m_mWorld.m[14] = 0.0;
    m_pOGLModel->m_mWorld.m[15] = 1.0;
  }
  else
  {
    if ( m_modelAnimationType != MODEL_ANIMTYPE_ROTATE )
      goto LABEL_14;
    v27 = &m_pOGLModel->m_mWorld;
    v28 = animationFrame * m_pUvAnimation->m_modelAnimeRotateSpeed;
    v29 = *(_OWORD *)v27->m;
    *(_OWORD *)&In.m[4] = *(_OWORD *)&v27->m[4];
    v30 = *(_OWORD *)&v27->m[12];
    *(_OWORD *)In.m = v29;
    v31 = *(_OWORD *)&v27->m[8];
    *(_OWORD *)&In.m[12] = v30;
    v67 = v28;
    *(_OWORD *)&In.m[8] = v31;
    OGLMatrix::rotateZ(v27, (float)(v28 * -3.1415927) / 180.0);
    p_m_mWorld = v27;
  }
  OGLMatrix::multiply(p_m_mWorld, &In);
  m_pFigure = v69;
  this->m_bEnableAnimations = 1;
LABEL_14:
  m_animationCount = m_pUvAnimation->m_animationCount;
  rot = 0.0;
  v68 = m_animationCount;
  y = 0.0;
  v35 = 0.0;
  v36 = 0;
  if ( m_animationCount > 0 )
  {
    for ( i = 0i64; ; ++i )
    {
      v38 = v36 < 0 || m_pUvAnimation->m_animationCount <= v36 ? 0i64 : (float *)&m_pUvAnimation->m_pAnimations[(__int64)v36];
      v39 = *(int *)v38;
      if ( (int)v39 >= 0 && m_pFigure->m_ucMaterialCount > (unsigned int)v39 )
      {
        v40 = *((_DWORD *)v38 + 2);
        if ( v40 < m_pUvAnimationModelInfos->textureCount && v40 <= 1 && m_pModel->m_materialCount > (int)v39 )
        {
          p_textureDivisionCountRow = &m_pModel->m_pMaterials[v39].textureDivisionCountRow;
          if ( p_textureDivisionCountRow )
            break;
        }
      }
LABEL_55:
      m_pFigure = v69;
      ++v36;
      v68 = --m_animationCount;
      if ( !m_animationCount )
        return;
    }
    v42 = this->m_pParams;
    *(_QWORD *)&v42[i].y = 0i64;
    v42[i].x = 0.0;
    v43 = *((_DWORD *)v38 + 4);
    if ( v43 == 1 )
    {
      m_animationFrameMax = m_pUvAnimation->m_animationFrameMax;
      if ( m_animationFrameMax
        && (v45 = (int)animationFrame % m_animationFrameMax, m_pUvAnimation->m_animationCount > (int)v39)
        && (v46 = &m_pUvAnimation->m_pAnimations[v39]) != 0i64 )
      {
        v47 = 0i64;
        if ( v46->animationListCount <= 0 )
        {
LABEL_34:
          v49 = 0;
        }
        else
        {
          pAnimationList = (int *)v46->pAnimationList;
          while ( 1 )
          {
            v45 -= pAnimationList[1];
            if ( v45 <= 0 )
              break;
            ++v47;
            pAnimationList += 2;
            if ( v47 >= v46->animationListCount )
              goto LABEL_34;
          }
          v49 = *pAnimationList;
        }
      }
      else
      {
        v49 = -1;
      }
      v50 = (float)*p_textureDivisionCountRow;
      v51 = (float)((float)(v49 % p_textureDivisionCountRow[1]) / (float)p_textureDivisionCountRow[1]) + 0.0;
      v42[i].x = v51;
      m_animationCount = v68;
      v52 = (float)((float)(v49 / p_textureDivisionCountRow[1]) / v50) + 0.0;
      v42[i].y = v52;
      v42[i].x = v51 - m_pUvAnimationModelInfos->pTransDefaultPositionU[*((int *)v38 + 2)];
      v42[i].y = v52 - m_pUvAnimationModelInfos->pTransDefaultPositionV[*((int *)v38 + 2)];
    }
    else if ( v43 == 2 )
    {
      v53 = v38[13];
      v54 = v38[14];
      v55 = fmodf(animationFrame, v53);
      v56 = fmodf(animationFrame, v54);
      v57 = Tween::easing(0.0, v54, v56 / v54, *((Tween::EasingType *)v38 + 12));
      v58 = Tween::easing(0.0, v53, v55 / v53, *((Tween::EasingType *)v38 + 11));
      v59 = fmodf((float)(v58 + (float)(animationFrame - v55)) * v38[9], 1.0) + 0.0;
      v42[i].x = v59;
      v14 = FLOAT_180_0;
      v60 = fmodf((float)((float)(animationFrame - v56) + v57) * v38[10], 1.0) + 0.0;
      m_animationCount = v68;
      v42[i].y = v60;
      v42[i].x = v59 - m_pUvAnimationModelInfos->pTransDefaultPositionU[*((int *)v38 + 2)];
      v42[i].y = v60 - m_pUvAnimationModelInfos->pTransDefaultPositionV[*((int *)v38 + 2)];
    }
    else
    {
      if ( !*((_DWORD *)v38 + 2) )
        goto LABEL_44;
      if ( v43 == 3 )
      {
        v42[i].x = v35;
        v42[i].y = y;
        v42[i].rot = rot;
      }
    }
    if ( *((_DWORD *)v38 + 2) )
    {
LABEL_46:
      v61 = v67 + v42[i].rot;
      v62 = v71 + v42[i].x;
      v63 = v72 + v42[i].y;
      v42[i].x = v62;
      v42[i].y = v63;
      v42[i].rot = v61;
      if ( v61 != 0.0 )
      {
        v64 = (float)(v61 * 3.141592) / v14;
        v42[i].rot = v64;
        v65 = *((int *)v38 + 2);
        if ( (unsigned int)v65 > 1 || m_pUvAnimation->m_modelAnimeRotateType[v65] != MODEL_ANIMROTATETYPE_LEFT )
          LODWORD(v42[i].rot) = LODWORD(v64) ^ _xmm;
      }
      if ( v62 != 0.0 || v63 != 0.0 || (v66 = 0, v42[i].rot != 0.0) )
        v66 = 1;
      this->m_bEnableAnimations |= v66;
      goto LABEL_55;
    }
LABEL_44:
    if ( !*((_DWORD *)v38 + 1) )
    {
      v35 = v42[i].x;
      y = v42[i].y;
      rot = v42[i].rot;
    }
    goto LABEL_46;
  }
}

