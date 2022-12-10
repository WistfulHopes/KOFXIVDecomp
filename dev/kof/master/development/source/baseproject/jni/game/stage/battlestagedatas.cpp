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
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B36
float MyLib::lerpByDirectionMod360(float d1, float d2, float t); // 0x14020C820
float MyLib::lerpByDirection(float d1, float d2, float t); // 0x14020C8E0
BSDataScene::BSDataScene(TknDataScene & src); // 0x14020C950
BSDataModel::BSDataModel(TknDataModel & src); // 0x14020CAE0
BSDataModel::~BSDataModel(); // 0x14020CC30
BSDataEvent::BSDataEvent(TknDataEvent & src); // 0x14020CF00
BSDataEvent::~BSDataEvent(); // 0x14020D0E0
bool BSDataEvent::getAnimationStateByFrame(float frame, long startIndex, long * pOutAnimationIndex, float * pOutAnimationFrame, OGLMatrix * pOutMatrix); // 0x14020D1D0
OGLVec3 BSDataEvent::getTransPositionByRate(long transIndex, float rate); // 0x14020DC10
OGLVec3 BSDataEvent::getTransRotate(long transIndex, OGLVec3 & endPos, float frame); // 0x14020DFD0//decompilation failure at 1408A0B36!
void __fastcall BSDataEvent::BSDataEvent(BSDataEvent *this, TknDataEvent *src)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 m_animationCount; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 m_translationCount; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 m_scriptCount; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax

  TknDataEvent::TknDataEvent(this, src);
  this->__vftable = (BSDataEvent_vtbl *)&BSDataEvent::`vftable';
  this->m_pObject = 0i64;
  this->m_pModelAnimations = 0i64;
  this->m_pEffectAnimations = 0i64;
  this->m_pBillboardAnimations = 0i64;
  this->m_pSounds = 0i64;
  this->m_pTranslations = 0i64;
  this->m_pScripts = 0i64;
  this->m_pAnimationEventTable = 0i64;
  this->m_pTranslationEventTable = 0i64;
  switch ( this->m_animationType )
  {
    case OBJECT_ANIMATION_MODEL:
      m_animationCount = this->m_animationCount;
      v10 = 8 * m_animationCount;
      if ( !is_mul_ok(m_animationCount, 8ui64) )
        v10 = -1i64;
      this->m_pModelAnimations = (BSDataEventModelAnimation **)operator new[](v10);
      break;
    case OBJECT_ANIMATION_EFFECT:
      v7 = this->m_animationCount;
      v8 = 8 * v7;
      if ( !is_mul_ok(v7, 8ui64) )
        v8 = -1i64;
      this->m_pEffectAnimations = (BSDataEventEffectAnimation **)operator new[](v8);
      break;
    case OBJECT_ANIMATION_BILLBOARD:
      v5 = this->m_animationCount;
      v6 = 8 * v5;
      if ( !is_mul_ok(v5, 8ui64) )
        v6 = -1i64;
      this->m_pBillboardAnimations = (BSDataEventBillboardAnimation **)operator new[](v6);
      break;
    case OBJECT_ANIMATION_SOUND:
      v3 = this->m_animationCount;
      v4 = 8 * v3;
      if ( !is_mul_ok(v3, 8ui64) )
        v4 = -1i64;
      this->m_pSounds = (BSDataEventSound **)operator new[](v4);
      break;
  }
  m_translationCount = this->m_translationCount;
  v12 = 8 * m_translationCount;
  if ( !is_mul_ok(m_translationCount, 8ui64) )
    v12 = -1i64;
  this->m_pTranslations = (BSDataEventTranslation **)operator new[](v12);
  m_scriptCount = this->m_scriptCount;
  v14 = 8 * m_scriptCount;
  if ( !is_mul_ok(m_scriptCount, 8ui64) )
    v14 = -1i64;
  this->m_pScripts = (BSDataEventScript **)operator new[](v14);
  v15 = this->m_animationCount;
  v16 = 12 * v15;
  if ( !is_mul_ok(v15, 0xCui64) )
    v16 = -1i64;
  this->m_pAnimationEventTable = (BSDataEvent::TimeTable *)operator new[](v16);
  v17 = this->m_translationCount;
  v18 = 12 * v17;
  if ( !is_mul_ok(v17, 0xCui64) )
    v18 = -1i64;
  this->m_pTranslationEventTable = (BSDataEvent::TimeTable *)operator new[](v18);
}

void __fastcall BSDataModel::BSDataModel(BSDataModel *this, TknDataModel *src)
{
  unsigned __int64 m_uvAnimationCount; // rdi
  signed __int64 v4; // rbx
  BSDataUVAnimation **v5; // rax
  BSDataUVAnimation ***v6; // r10
  BSDataUVAnimation ***p_m_pUVAnimations; // r9
  int v8; // er8
  BSDataUVAnimation **v9; // rax
  int v10; // edi
  signed __int64 i; // rax

  TknDataModel::TknDataModel(this, src);
  this->__vftable = (BSDataModel_vtbl *)&BSDataModel::`vftable';
  this->m_pOGLModel = 0i64;
  this->m_pReplaceTextures = 0i64;
  this->m_replaceTextureCount = 0;
  this->m_bUse = 0;
  m_uvAnimationCount = this->m_uvAnimationCount;
  v4 = m_uvAnimationCount;
  v5 = (BSDataUVAnimation **)operator new[](saturated_mul(m_uvAnimationCount, 8ui64));
  v6 = (BSDataUVAnimation ***)v5;
  p_m_pUVAnimations = &this->m_pUVAnimations;
  this->m_pUVAnimations = v5;
  v8 = 0;
  if ( (int)m_uvAnimationCount > 0 && (unsigned int)m_uvAnimationCount >= 2 )
  {
    v9 = &v5[(int)m_uvAnimationCount - 1];
    if ( v6 > p_m_pUVAnimations || v9 < (BSDataUVAnimation **)p_m_pUVAnimations )
    {
      v10 = m_uvAnimationCount - (int)m_uvAnimationCount % 2;
      do
        v8 += 2;
      while ( v8 < v10 );
      memset(v6, 0, 16i64 * ((v10 + 1) / 2));
    }
  }
  for ( i = v8; i < v4; (*p_m_pUVAnimations)[i++] = 0i64 )
    ;
}

void __fastcall BSDataScene::BSDataScene(BSDataScene *this, TknDataScene *src)
{
  unsigned __int64 v3; // rax
  int v4; // er8
  __int64 v5; // rdx
  unsigned __int64 m_localEventCount; // rcx
  unsigned __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rax

  TknDataScene::TknDataScene(this, src);
  this->__vftable = (BSDataScene_vtbl *)&BSDataScene::`vftable';
  v3 = 8i64 * this->m_globalEventCount;
  if ( !is_mul_ok(this->m_globalEventCount, 8ui64) )
    v3 = -1i64;
  this->m_pGlobalEvent = (BSDataEvent **)operator new[](v3);
  v4 = 0;
  if ( this->m_globalEventCount > 0 )
  {
    v5 = 0i64;
    do
    {
      this->m_pGlobalEvent[v5] = 0i64;
      ++v4;
      ++v5;
    }
    while ( v4 < this->m_globalEventCount );
  }
  m_localEventCount = this->m_localEventCount;
  v7 = 8 * m_localEventCount;
  if ( !is_mul_ok(m_localEventCount, 8ui64) )
    v7 = -1i64;
  this->m_pLocalEvent = (BSDataEvent **)operator new[](v7);
  v8 = 0;
  if ( this->m_localEventCount > 0 )
  {
    v9 = 0i64;
    do
    {
      this->m_pLocalEvent[v9] = 0i64;
      ++v8;
      ++v9;
    }
    while ( v8 < this->m_localEventCount );
  }
}

void __fastcall BSDataEvent::~BSDataEvent(BSDataEvent *this, unsigned __int64 a2)
{
  BSDataEventModelAnimation **m_pModelAnimations; // rcx
  BSDataEventEffectAnimation **m_pEffectAnimations; // rcx
  BSDataEventBillboardAnimation **m_pBillboardAnimations; // rcx
  BSDataEventTranslation **m_pTranslations; // rcx
  BSDataEventSound **m_pSounds; // rcx
  BSDataEventScript **m_pScripts; // rcx
  BSDataEvent::TimeTable *m_pAnimationEventTable; // rcx
  BSDataEvent::TimeTable *m_pTranslationEventTable; // rcx

  this->__vftable = (BSDataEvent_vtbl *)&BSDataEvent::`vftable';
  m_pModelAnimations = this->m_pModelAnimations;
  if ( m_pModelAnimations )
  {
    operator delete(m_pModelAnimations, a2);
    this->m_pModelAnimations = 0i64;
  }
  m_pEffectAnimations = this->m_pEffectAnimations;
  if ( m_pEffectAnimations )
  {
    operator delete(m_pEffectAnimations, a2);
    this->m_pEffectAnimations = 0i64;
  }
  m_pBillboardAnimations = this->m_pBillboardAnimations;
  if ( m_pBillboardAnimations )
  {
    operator delete(m_pBillboardAnimations, a2);
    this->m_pBillboardAnimations = 0i64;
  }
  m_pTranslations = this->m_pTranslations;
  if ( m_pTranslations )
  {
    operator delete(m_pTranslations, a2);
    this->m_pTranslations = 0i64;
  }
  m_pSounds = this->m_pSounds;
  if ( m_pSounds )
  {
    operator delete(m_pSounds, a2);
    this->m_pSounds = 0i64;
  }
  m_pScripts = this->m_pScripts;
  if ( m_pScripts )
  {
    operator delete(m_pScripts, a2);
    this->m_pScripts = 0i64;
  }
  m_pAnimationEventTable = this->m_pAnimationEventTable;
  if ( m_pAnimationEventTable )
  {
    operator delete(m_pAnimationEventTable, a2);
    this->m_pAnimationEventTable = 0i64;
  }
  m_pTranslationEventTable = this->m_pTranslationEventTable;
  if ( m_pTranslationEventTable )
  {
    operator delete(m_pTranslationEventTable, a2);
    this->m_pTranslationEventTable = 0i64;
  }
  TknDataEvent::~TknDataEvent(this);
}

void __fastcall BSDataModel::~BSDataModel(BSDataModel *this, unsigned __int64 a2)
{
  BSDataUVAnimation **m_pUVAnimations; // rcx
  BSDataModel::AnotherSettingTexture *m_pReplaceTextures; // rcx

  this->__vftable = (BSDataModel_vtbl *)&BSDataModel::`vftable';
  this->m_pOGLModel = 0i64;
  m_pUVAnimations = this->m_pUVAnimations;
  if ( m_pUVAnimations )
  {
    operator delete(m_pUVAnimations, a2);
    this->m_pUVAnimations = 0i64;
  }
  m_pReplaceTextures = this->m_pReplaceTextures;
  if ( m_pReplaceTextures )
  {
    operator delete(m_pReplaceTextures, a2);
    this->m_pReplaceTextures = 0i64;
  }
  this->m_replaceTextureCount = 0;
  TknDataModel::~TknDataModel(this);
}

char __fastcall BSDataEvent::getAnimationStateByFrame(
        BSDataEvent *this,
        float frame,
        int startIndex,
        int *pOutAnimationIndex,
        float *pOutAnimationFrame,
        OGLMatrix *pOutMatrix)
{
  __int128 v6; // xmm9
  __int128 v7; // xmm10
  __int128 v8; // xmm11
  __int128 v9; // xmm12
  BSDataObject *m_pObject; // rax
  float x; // xmm0_4
  float y; // xmm1_4
  float z; // xmm2_4
  float v17; // xmm10_4
  float v18; // xmm11_4
  float v19; // xmm12_4
  float v20; // xmm9_4
  float v21; // xmm8_4
  float v22; // xmm7_4
  float v23; // xmm7_4
  float v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm8_4
  float v27; // xmm6_4
  float v28; // xmm0_4
  float v29; // xmm9_4
  float v30; // xmm6_4
  float v31; // xmm0_4
  float m_startFrame; // xmm6_4
  int m_totalFrame; // edx
  char v35; // r12
  TknData::OjectAnimationType m_animationType; // er15
  TknDataEvent::FinishAction m_finishAction; // ecx
  __int32 v38; // ecx
  __int32 v39; // ecx
  __int32 v40; // ecx
  int v41; // er9
  int v42; // er8
  __int64 v43; // rcx
  BSDataEventModelAnimation **v44; // rdx
  float v45; // xmm0_4
  BSDataEventModelAnimation **m_pModelAnimations; // rax
  __m128i v47; // xmm0
  __int64 m_animationCount; // r15
  int v49; // er10
  BSDataEventEffectAnimation **m_pEffectAnimations; // rdx
  __int64 v51; // r8
  BSDataEventEffectAnimation *v52; // rcx
  float v53; // xmm0_4
  __int64 v54; // r15
  int v55; // er10
  BSDataEventBillboardAnimation **m_pBillboardAnimations; // rdx
  __int64 v57; // r8
  BSDataEventBillboardAnimation *v58; // rcx
  float v59; // xmm0_4
  int v60; // er8
  __int64 v61; // rcx
  BSDataEventSound **v62; // rdx
  BSDataEventTranslation **m_pTranslations; // rdx
  int v64; // er8
  __int64 v65; // r9
  int v66; // esi
  BSDataEventTranslation *v67; // rcx
  BSDataEventTranslation *v68; // rdx
  int v69; // ecx
  float v70; // xmm3_4
  float v71; // xmm4_4
  float v72; // xmm5_4
  float v73; // xmm0_4
  float v74; // xmm13_4
  float v75; // xmm4_4
  float v76; // xmm5_4
  float v77; // xmm6_4
  float v78; // xmm7_4
  float v79; // xmm0_4
  float v80; // xmm6_4
  float v81; // xmm7_4
  float v82; // xmm0_4
  float v83; // xmm6_4
  float v84; // xmm7_4
  float v85; // xmm0_4
  OGLVec3 result; // [rsp+38h] [rbp-D0h] BYREF
  OGLVec3 v87; // [rsp+48h] [rbp-C0h] BYREF
  OGLMatrix In; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v89; // [rsp+C8h] [rbp-40h]
  __int128 v90; // [rsp+D8h] [rbp-30h]
  _OWORD v91[5]; // [rsp+E8h] [rbp-20h]

  *(_QWORD *)pOutMatrix->m = 1065353216i64;
  pOutMatrix->m[4] = 0.0;
  *(_QWORD *)&pOutMatrix->m[8] = 0i64;
  *(_QWORD *)&pOutMatrix->m[12] = 0i64;
  *(_QWORD *)&pOutMatrix->m[5] = 1065353216i64;
  *(_QWORD *)&pOutMatrix->m[2] = 0i64;
  *(_QWORD *)&pOutMatrix->m[10] = 1065353216i64;
  pOutMatrix->m[14] = 0.0;
  pOutMatrix->m[7] = 0.0;
  pOutMatrix->m[15] = 1.0;
  v91[1] = v6;
  v91[0] = v7;
  v90 = v8;
  v89 = v9;
  m_pObject = this->m_pObject;
  *pOutAnimationIndex = -1;
  *pOutAnimationFrame = 0.0;
  x = m_pObject->m_scale.x;
  y = m_pObject->m_scale.y;
  z = m_pObject->m_scale.z;
  v17 = m_pObject->m_position.x;
  v18 = m_pObject->m_position.y;
  v19 = m_pObject->m_position.z;
  v20 = m_pObject->m_direction.x;
  v21 = m_pObject->m_direction.y;
  v22 = m_pObject->m_direction.z;
  In.m[1] = 0.0;
  In.m[4] = 0.0;
  In.m[11] = 0.0;
  In.m[14] = 0.0;
  In.m[0] = x;
  In.m[5] = y;
  In.m[10] = z;
  In.m[15] = 1.0;
  *(_QWORD *)&In.m[2] = 0i64;
  *(_QWORD *)&In.m[6] = 0i64;
  *(_QWORD *)&In.m[8] = 0i64;
  *(_QWORD *)&In.m[12] = 0i64;
  OGLMatrix::multiply(pOutMatrix, &In);
  v23 = (float)(v22 * 3.1415927) / 180.0;
  v24 = sinf(v23);
  v25 = cosf(v23);
  In.m[11] = 0.0;
  In.m[14] = 0.0;
  LODWORD(In.m[4]) = LODWORD(v24) ^ _xmm;
  In.m[0] = v25;
  In.m[1] = v24;
  In.m[5] = v25;
  *(_QWORD *)&In.m[2] = 0i64;
  *(_QWORD *)&In.m[6] = 0i64;
  *(_QWORD *)&In.m[8] = 0i64;
  *(_QWORD *)&In.m[12] = 0i64;
  In.m[10] = 1.0;
  In.m[15] = 1.0;
  OGLMatrix::multiply(pOutMatrix, &In);
  v26 = (float)(v21 * 3.1415927) / 180.0;
  v27 = sinf(v26);
  v28 = cosf(v26);
  In.m[9] = 0.0;
  In.m[8] = v27;
  In.m[1] = 0.0;
  In.m[3] = 0.0;
  In.m[4] = 0.0;
  In.m[11] = 0.0;
  In.m[14] = 0.0;
  LODWORD(In.m[2]) = LODWORD(v27) ^ _xmm;
  In.m[0] = v28;
  In.m[10] = v28;
  *(_QWORD *)&In.m[6] = 0i64;
  *(_QWORD *)&In.m[12] = 0i64;
  In.m[5] = 1.0;
  In.m[15] = 1.0;
  OGLMatrix::multiply(pOutMatrix, &In);
  v29 = (float)(v20 * 3.1415927) / 180.0;
  v30 = sinf(v29);
  v31 = cosf(v29);
  In.m[1] = 0.0;
  In.m[4] = 0.0;
  In.m[7] = 0.0;
  In.m[8] = 0.0;
  In.m[11] = 0.0;
  In.m[14] = 0.0;
  LODWORD(In.m[9]) = LODWORD(v30) ^ _xmm;
  In.m[5] = v31;
  In.m[6] = v30;
  In.m[10] = v31;
  *(_QWORD *)&In.m[2] = 0i64;
  *(_QWORD *)&In.m[12] = 0i64;
  In.m[0] = 1.0;
  In.m[15] = 1.0;
  OGLMatrix::multiply(pOutMatrix, &In);
  In.m[1] = 0.0;
  In.m[4] = 0.0;
  In.m[11] = 0.0;
  *(_QWORD *)&In.m[2] = 0i64;
  *(_QWORD *)&In.m[6] = 0i64;
  *(_QWORD *)&In.m[8] = 0i64;
  In.m[12] = v17;
  In.m[13] = v18;
  In.m[14] = v19;
  In.m[0] = 1.0;
  In.m[5] = 1.0;
  In.m[10] = 1.0;
  In.m[15] = 1.0;
  OGLMatrix::multiply(pOutMatrix, &In);
  if ( !this->m_bActive )
  {
    *pOutAnimationIndex = 0;
    *pOutAnimationFrame = 0.0;
    return 1;
  }
  m_startFrame = (float)this->m_startFrame;
  if ( m_startFrame > frame )
    return 1;
  m_totalFrame = this->m_totalFrame;
  v35 = 1;
  m_animationType = this->m_animationType;
  if ( m_totalFrame > 1 && frame >= (float)m_totalFrame )
  {
    m_finishAction = this->m_finishAction;
    if ( m_finishAction == FINISHACTION_GOTO_NEUTRAL )
    {
LABEL_12:
      v35 = 0;
      goto LABEL_13;
    }
    v38 = m_finishAction - 1;
    if ( v38 )
    {
      v39 = v38 - 1;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( v40 )
        {
          if ( v40 != 1 )
            goto LABEL_13;
        }
        else
        {
          frame = (float)m_totalFrame;
        }
      }
      else
      {
        frame = fmodf(frame - m_startFrame, (float)(m_totalFrame - this->m_startFrame)) + m_startFrame;
      }
      goto LABEL_12;
    }
    frame = (float)(m_totalFrame - 1);
  }
LABEL_13:
  switch ( m_animationType )
  {
    case OBJECT_ANIMATION_MODEL:
      v41 = this->m_animationCount - 1;
      v42 = v41;
      if ( v41 >= 0 )
      {
        v43 = v41;
        v44 = &this->m_pModelAnimations[v41];
        while ( frame < (float)(*v44)->m_startFrame )
        {
          --v42;
          --v44;
          if ( --v43 < 0 )
            goto LABEL_23;
        }
        v45 = (float)(*v44)->m_startFrame;
        *pOutAnimationIndex = v42;
        *pOutAnimationFrame = frame - v45;
      }
LABEL_23:
      if ( *pOutAnimationIndex != -1 )
        goto LABEL_53;
      m_pModelAnimations = this->m_pModelAnimations;
      *pOutAnimationIndex = v41;
      v47 = _mm_cvtsi32_si128(m_pModelAnimations[v41]->m_startFrame);
      break;
    case OBJECT_ANIMATION_EFFECT:
      m_animationCount = this->m_animationCount;
      v49 = 0;
      if ( (int)m_animationCount > 0 )
      {
        m_pEffectAnimations = this->m_pEffectAnimations;
        v51 = 0i64;
        while ( 1 )
        {
          v52 = *m_pEffectAnimations;
          if ( frame >= (float)(*m_pEffectAnimations)->m_startFrame
            && (float)((*m_pEffectAnimations)->m_startFrame + v52->m_totalFrame) > frame )
          {
            break;
          }
          ++v49;
          ++v51;
          ++m_pEffectAnimations;
          if ( v51 >= m_animationCount )
            goto LABEL_33;
        }
        v53 = (float)v52->m_startFrame;
        *pOutAnimationIndex = v49;
        *pOutAnimationFrame = frame - v53;
      }
LABEL_33:
      if ( *pOutAnimationIndex != -1 )
        goto LABEL_53;
      *pOutAnimationIndex = m_animationCount - 1;
      v47 = _mm_cvtsi32_si128(this->m_pEffectAnimations[(int)m_animationCount - 1]->m_startFrame);
      break;
    case OBJECT_ANIMATION_BILLBOARD:
      v54 = this->m_animationCount;
      v55 = 0;
      if ( (int)v54 > 0 )
      {
        m_pBillboardAnimations = this->m_pBillboardAnimations;
        v57 = 0i64;
        while ( 1 )
        {
          v58 = *m_pBillboardAnimations;
          if ( frame >= (float)(*m_pBillboardAnimations)->m_startFrame
            && (float)((*m_pBillboardAnimations)->m_startFrame + v58->m_totalFrame) > frame )
          {
            break;
          }
          ++v55;
          ++v57;
          ++m_pBillboardAnimations;
          if ( v57 >= v54 )
            goto LABEL_43;
        }
        v59 = (float)v58->m_startFrame;
        *pOutAnimationIndex = v55;
        *pOutAnimationFrame = frame - v59;
      }
LABEL_43:
      if ( *pOutAnimationIndex != -1 )
        goto LABEL_53;
      *pOutAnimationIndex = v54 - 1;
      v47 = _mm_cvtsi32_si128(this->m_pBillboardAnimations[(int)v54 - 1]->m_startFrame);
      break;
    case OBJECT_ANIMATION_SOUND:
      v60 = this->m_animationCount - 1;
      if ( v60 < 0 )
        goto LABEL_53;
      v61 = v60;
      v62 = &this->m_pSounds[v60];
      while ( frame < (float)(*v62)->m_startFrame )
      {
        --v60;
        --v62;
        if ( --v61 < 0 )
          goto LABEL_53;
      }
      v47 = _mm_cvtsi32_si128((*v62)->m_startFrame);
      *pOutAnimationIndex = v60;
      break;
    default:
      goto LABEL_53;
  }
  *pOutAnimationFrame = frame - _mm_cvtepi32_ps(v47).m128_f32[0];
LABEL_53:
  if ( this->m_translationCount > 0 )
  {
    m_pTranslations = this->m_pTranslations;
    v64 = 0;
    v65 = 0i64;
    do
    {
      v66 = v64;
      if ( frame >= (float)((*m_pTranslations)->m_endFrame - (*m_pTranslations)->m_totalFrame)
        && (float)(*m_pTranslations)->m_endFrame > frame )
      {
        break;
      }
      ++v64;
      ++v65;
      ++m_pTranslations;
    }
    while ( v65 < this->m_translationCount );
    v67 = this->m_pTranslations[v66];
    BSDataEvent::getTransPositionByRate(
      this,
      &result,
      v66,
      (float)((float)(frame - (float)(v67->m_endFrame - v67->m_totalFrame)) + 1.0) / (float)v67->m_totalFrame);
    BSDataEvent::getTransRotate(this, &v87, v66, &result, frame);
    v68 = this->m_pTranslations[v66];
    v69 = v68->m_totalFrame;
    v70 = v68->m_scale.x - v68->m_startScale.x;
    v71 = v68->m_scale.y - v68->m_startScale.y;
    v72 = v68->m_scale.z - v68->m_startScale.z;
    v73 = (float)(v68->m_endFrame - v69);
    memset(&In, 0, 60);
    In.m[15] = 1.0;
    v74 = (float)((float)(frame - v73) + 1.0) / (float)v69;
    v75 = (float)(v71 * v74) + v68->m_startScale.y;
    v76 = (float)(v72 * v74) + v68->m_startScale.z;
    In.m[0] = (float)(v70 * v74) + v68->m_startScale.x;
    *(_QWORD *)pOutMatrix->m = 1065353216i64;
    In.m[5] = v75;
    pOutMatrix->m[4] = 0.0;
    In.m[10] = v76;
    *(_QWORD *)&pOutMatrix->m[8] = 0i64;
    *(_QWORD *)&pOutMatrix->m[12] = 0i64;
    *(_QWORD *)&pOutMatrix->m[5] = 1065353216i64;
    *(_QWORD *)&pOutMatrix->m[2] = 0i64;
    *(_QWORD *)&pOutMatrix->m[10] = 1065353216i64;
    pOutMatrix->m[14] = 0.0;
    pOutMatrix->m[7] = 0.0;
    pOutMatrix->m[15] = 1.0;
    OGLMatrix::multiply(pOutMatrix, &In);
    v77 = (float)(v87.z * 3.1415927) / 180.0;
    v78 = sinf(v77);
    v79 = cosf(v77);
    In.m[11] = 0.0;
    In.m[14] = 0.0;
    LODWORD(In.m[4]) = LODWORD(v78) ^ _xmm;
    In.m[0] = v79;
    In.m[1] = v78;
    In.m[5] = v79;
    *(_QWORD *)&In.m[2] = 0i64;
    *(_QWORD *)&In.m[6] = 0i64;
    *(_QWORD *)&In.m[8] = 0i64;
    *(_QWORD *)&In.m[12] = 0i64;
    In.m[10] = 1.0;
    In.m[15] = 1.0;
    OGLMatrix::multiply(pOutMatrix, &In);
    v80 = (float)(v87.y * 3.1415927) / 180.0;
    v81 = sinf(v80);
    v82 = cosf(v80);
    In.m[9] = 0.0;
    In.m[8] = v81;
    In.m[1] = 0.0;
    In.m[3] = 0.0;
    In.m[4] = 0.0;
    In.m[11] = 0.0;
    In.m[14] = 0.0;
    LODWORD(In.m[2]) = LODWORD(v81) ^ _xmm;
    In.m[0] = v82;
    In.m[10] = v82;
    *(_QWORD *)&In.m[6] = 0i64;
    *(_QWORD *)&In.m[12] = 0i64;
    In.m[5] = 1.0;
    In.m[15] = 1.0;
    OGLMatrix::multiply(pOutMatrix, &In);
    v83 = (float)(v87.x * 3.1415927) / 180.0;
    v84 = sinf(v83);
    v85 = cosf(v83);
    In.m[1] = 0.0;
    In.m[4] = 0.0;
    In.m[7] = 0.0;
    In.m[8] = 0.0;
    In.m[11] = 0.0;
    In.m[14] = 0.0;
    LODWORD(In.m[9]) = LODWORD(v84) ^ _xmm;
    In.m[5] = v85;
    In.m[6] = v84;
    In.m[10] = v85;
    *(_QWORD *)&In.m[2] = 0i64;
    *(_QWORD *)&In.m[12] = 0i64;
    In.m[0] = 1.0;
    In.m[15] = 1.0;
    OGLMatrix::multiply(pOutMatrix, &In);
    In.m[1] = 0.0;
    *(_QWORD *)&In.m[2] = 0i64;
    In.m[4] = 0.0;
    In.m[11] = 0.0;
    *(OGLVec3 *)&In.m[12] = result;
    *(_QWORD *)&In.m[6] = 0i64;
    *(_QWORD *)&In.m[8] = 0i64;
    In.m[0] = 1.0;
    In.m[5] = 1.0;
    In.m[10] = 1.0;
    In.m[15] = 1.0;
    OGLMatrix::multiply(pOutMatrix, &In);
  }
  return v35;
}

OGLVec3 *__fastcall BSDataEvent::getTransPositionByRate(BSDataEvent *this, OGLVec3 *result, int transIndex, float rate)
{
  BSDataEventTranslation **m_pTranslations; // rdx
  BSDataEventTranslation *v6; // rbx
  float x; // xmm8_4
  float z; // xmm7_4
  float y; // xmm15_4
  float v10; // xmm9_4
  float v11; // xmm11_4
  float v12; // xmm12_4
  BSDataObject *m_pObject; // rax
  float v14; // xmm0_4
  Tween::EasingType v15; // er9
  float v16; // xmm0_4
  Tween::EasingType v17; // er9
  float v18; // xmm6_4
  float v19; // xmm8_4
  float v20; // xmm12_4
  float v21; // xmm7_4
  float v22; // xmm9_4
  float v23; // xmm13_4
  float v24; // xmm0_4
  Tween::EasingType m_easingTransY; // er9
  float v26; // xmm0_4
  Tween::EasingType m_easingTransZ; // er9
  float v28; // xmm0_4
  float v30; // [rsp+D0h] [rbp+8h]
  float v31; // [rsp+E0h] [rbp+18h]

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  m_pTranslations = this->m_pTranslations;
  v6 = m_pTranslations[transIndex];
  x = v6->m_startPosition.x;
  v31 = x;
  z = v6->m_startPosition.z;
  y = v6->m_startPosition.y;
  v30 = z;
  v10 = v6->m_position.x;
  v11 = v6->m_position.y;
  v12 = v6->m_position.z;
  if ( x == 0.0 && y == 0.0 && z == 0.0 )
  {
    if ( transIndex )
      m_pObject = (BSDataObject *)m_pTranslations[transIndex - 1];
    else
      m_pObject = this->m_pObject;
    z = m_pObject->m_position.z;
    x = m_pObject->m_position.x;
    y = m_pObject->m_position.y;
    v30 = z;
    v31 = x;
  }
  if ( v6->m_bStartCurveEnabled || v6->m_bEndCurveEnabled )
  {
    v18 = v6->m_startCurvePower.x;
    v19 = v6->m_startCurvePower.y;
    v20 = v6->m_startCurvePower.z;
    v21 = v6->m_endCurvePower.x;
    v22 = v6->m_endCurvePower.y;
    v23 = v6->m_endCurvePower.z;
    v24 = Tween::easing(0.0, 1.0, rate, v6->m_easingTransX);
    m_easingTransY = v6->m_easingTransY;
    result->x = (float)((float)((float)((float)((float)((float)((float)(1.0 - v24) * 3.0) * (float)(1.0 - v24)) * v24)
                                      * (float)(v18 + v31))
                              + (float)((float)((float)((float)(1.0 - v24) * (float)(1.0 - v24)) * (float)(1.0 - v24))
                                      * v31))
                      + (float)((float)((float)((float)((float)(1.0 - v24) * 3.0) * v24) * v24)
                              * (float)(v21 + v6->m_position.x)))
              + (float)((float)((float)(v24 * v24) * v24) * v6->m_position.x);
    v26 = Tween::easing(0.0, 1.0, rate, m_easingTransY);
    m_easingTransZ = v6->m_easingTransZ;
    result->y = (float)((float)((float)((float)((float)((float)((float)(1.0 - v26) * 3.0) * (float)(1.0 - v26)) * v26)
                                      * (float)(v19 + y))
                              + (float)((float)((float)((float)(1.0 - v26) * (float)(1.0 - v26)) * (float)(1.0 - v26))
                                      * y))
                      + (float)((float)((float)((float)((float)(1.0 - v26) * 3.0) * v26) * v26)
                              * (float)(v22 + v6->m_position.y)))
              + (float)((float)((float)(v26 * v26) * v26) * v6->m_position.y);
    v28 = Tween::easing(0.0, 1.0, rate, m_easingTransZ);
    result->z = (float)((float)((float)((float)((float)((float)((float)(1.0 - v28) * 3.0) * (float)(1.0 - v28)) * v28)
                                      * (float)(v20 + v30))
                              + (float)((float)((float)((float)(1.0 - v28) * (float)(1.0 - v28)) * (float)(1.0 - v28))
                                      * v30))
                      + (float)((float)((float)((float)((float)(1.0 - v28) * 3.0) * v28) * v28)
                              * (float)(v23 + v6->m_position.z)))
              + (float)((float)((float)(v28 * v28) * v28) * v6->m_position.z);
  }
  else
  {
    v14 = Tween::easing(0.0, 1.0, rate, v6->m_easingTransX);
    v15 = v6->m_easingTransY;
    result->x = (float)(v14 * (float)(v10 - x)) + x;
    v16 = Tween::easing(0.0, 1.0, rate, v15);
    v17 = v6->m_easingTransZ;
    result->y = (float)(v16 * (float)(v11 - y)) + y;
    result->z = (float)(Tween::easing(0.0, 1.0, rate, v17) * (float)(v12 - z)) + z;
  }
  return result;
}

OGLVec3 *__fastcall BSDataEvent::getTransRotate(
        BSDataEvent *this,
        OGLVec3 *result,
        int transIndex,
        OGLVec3 *endPos,
        float frame)
{
  BSDataEventTranslation **m_pTranslations; // rdx
  BSDataEventTranslation *v8; // rbx
  float y; // xmm1_4
  float z; // xmm2_4
  float v11; // xmm3_4
  __m128i v12; // xmm6
  float v13; // xmm6_4
  float v14; // xmm9_4
  BSDataObject *m_pObject; // rax
  float v16; // xmm1_4
  float x; // xmm0_4
  float v18; // eax
  bool v19; // zf
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm9_4
  float v23; // xmm7_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm6_4
  float v27; // xmm6_4
  float v28; // xmm6_4
  float v29; // xmm2_4
  OGLQuat *v30; // rax
  float v31; // xmm2_4
  OGLQuat *v32; // rax
  float v33; // xmm2_4
  float v34; // xmm6_4
  float v35; // xmm7_4
  float v36; // xmm2_4
  float v37; // xmm1_4
  float v38; // xmm7_4
  float v39; // xmm2_4
  float v40; // xmm6_4
  float v41; // xmm0_4
  float v42; // xmm0_4
  float v43; // xmm2_4
  float v44; // xmm0_4
  OGLQuat resulta; // [rsp+38h] [rbp-41h] BYREF
  OGLQuat q; // [rsp+48h] [rbp-31h] BYREF
  OGLQuat rot; // [rsp+58h] [rbp-21h] BYREF
  float framea; // [rsp+F8h] [rbp+7Fh]

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  m_pTranslations = this->m_pTranslations;
  v8 = m_pTranslations[transIndex];
  y = v8->m_direction.y;
  z = v8->m_direction.z;
  v11 = (float)(v8->m_endFrame - v8->m_totalFrame);
  v12 = _mm_cvtsi32_si128(v8->m_totalFrame);
  resulta.x = v8->m_direction.x;
  v13 = _mm_cvtepi32_ps(v12).m128_f32[0];
  resulta.y = y;
  resulta.z = z;
  v14 = (float)((float)(frame - v11) + 1.0) / v13;
  if ( resulta.x == 0.0 && y == 0.0 && z == 0.0 )
  {
    if ( transIndex )
      m_pObject = (BSDataObject *)m_pTranslations[transIndex - 1];
    else
      m_pObject = this->m_pObject;
    v16 = m_pObject->m_direction.y;
    x = m_pObject->m_direction.x;
    resulta.z = m_pObject->m_direction.z;
    resulta.y = v16;
    resulta.x = x;
  }
  if ( v11 <= frame )
  {
    if ( v8->m_bRotateAutoSetting )
    {
      BSDataEvent::getTransPositionByRate(
        this,
        (OGLVec3 *)&resulta,
        transIndex,
        fmaxf(0.0, fminf((float)(frame - v11) / v13, 0.99800003)));
      v19 = !v8->m_bRotateAutoSettingYOnly;
      v20 = FLOAT_0_5;
      rot = (OGLQuat)_xmm;
      if ( v19 )
      {
        v21 = endPos->x - resulta.x;
        v22 = endPos->y - resulta.y;
        v23 = endPos->z - resulta.z;
        framea = sqrtf(1.0);
        v24 = sqrtf((float)((float)(v22 * v22) + (float)(v21 * v21)) + (float)(v23 * v23));
        if ( framea == 0.0 || v24 == 0.0 )
        {
          v20 = FLOAT_0_5;
        }
        else
        {
          v25 = acosf((float)((float)((float)(v21 * 0.0) + v22) + (float)(v23 * 0.0)) / (float)(v24 * framea));
          v20 = FLOAT_0_5;
          v26 = (float)((float)(fmodf((float)(v25 * 180.0 / 3.141592741012573) + 270.0, 360.0) * 3.1415927) / 180.0)
              * 0.5;
          q.x = sinf(v26);
          q.y = q.x * 0.0;
          q.z = q.x * 0.0;
          q.w = cosf(v26);
          OGLQuat::multiply(&rot, &q);
        }
      }
      v27 = atan2f(endPos->x - resulta.x, endPos->z - resulta.z) * 57.295776;
      if ( v27 < 0.0 )
        v27 = v27 + 360.0;
      v28 = (float)((float)(v27 * 3.1415927) / 180.0) * v20;
      q.y = sinf(v28);
      q.x = q.y * 0.0;
      q.z = q.y * 0.0;
      q.w = cosf(v28);
      OGLQuat::multiply(&rot, &q);
      if ( v8->m_bRotateAutoSettingFree )
      {
        v29 = v8->m_direction.x;
        q = (OGLQuat)_xmm;
        v30 = BSUtil::multiplyRotateAxisByOGLQuat(&resulta, &q, v29, 1.0, 0.0, 0.0);
        v31 = v8->m_direction.y;
        q = *v30;
        v32 = BSUtil::multiplyRotateAxisByOGLQuat(&resulta, &q, v31, 0.0, 1.0, 0.0);
        v33 = v8->m_direction.z;
        q = *v32;
        q = *BSUtil::multiplyRotateAxisByOGLQuat(&resulta, &q, v33, 0.0, 0.0, 1.0);
        OGLQuat::multiply(&rot, &q);
      }
      BSUtil::getEulerAnglesByOGLQuat(&rot, &result->x, &result->y, &result->z);
    }
    else
    {
      v34 = v8->m_startDirection.y;
      v35 = v8->m_startDirection.z;
      v36 = Tween::easing(0.0, 1.0, v14, v8->m_easingRotateZ);
      v37 = v8->m_direction.z;
      if ( v8->m_calculationVersion )
      {
        v38 = MyLib::lerpByDirection(v35, v37, v36);
        v43 = Tween::easing(0.0, 1.0, v14, v8->m_easingRotateY);
        v40 = MyLib::lerpByDirection(v34, v8->m_direction.y, v43);
        v44 = Tween::easing(0.0, 1.0, v14, v8->m_easingRotateX);
        v42 = MyLib::lerpByDirection(v8->m_startDirection.x, v8->m_direction.x, v44);
      }
      else
      {
        v38 = MyLib::lerpByDirectionMod360(v35, v37, v36);
        v39 = Tween::easing(0.0, 1.0, v14, v8->m_easingRotateY);
        v40 = MyLib::lerpByDirectionMod360(v34, v8->m_direction.y, v39);
        v41 = Tween::easing(0.0, 1.0, v14, v8->m_easingRotateX);
        v42 = MyLib::lerpByDirectionMod360(v8->m_startDirection.x, v8->m_direction.x, v41);
      }
      result->z = v38;
      result->y = v40;
      result->x = v42;
    }
  }
  else
  {
    v18 = resulta.z;
    *(_QWORD *)&result->x = *(_QWORD *)&resulta.x;
    result->z = v18;
  }
  return result;
}

float __fastcall MyLib::lerpByDirection(float d1, float d2, float t)
{
  float v3; // xmm3_4
  float v4; // xmm4_4
  float v5; // xmm3_4

  v3 = d2;
  v4 = d1;
  if ( d1 != d2 )
  {
    if ( d1 > d2 )
    {
      v4 = d2;
      v3 = d1;
      t = 1.0 - t;
    }
    if ( t > 0.0 )
    {
      if ( t < 1.0 )
      {
        v5 = v3 - v4;
        if ( v5 < 0.0 )
          LODWORD(v5) ^= _xmm;
        return (float)((float)((float)(v5 * t) / v5) * v5) + v4;
      }
      else
      {
        return v3;
      }
    }
    else
    {
      return v4;
    }
  }
  return d1;
}

float __fastcall MyLib::lerpByDirectionMod360(float d1, float d2, float t)
{
  float v3; // xmm8_4
  float v4; // xmm7_4
  float v5; // xmm0_4
  float v6; // xmm3_4

  v3 = t;
  v4 = fmodf(d1, 360.0);
  v5 = fmodf(d2, 360.0);
  v6 = v5;
  if ( v4 > v5 )
  {
    v6 = v4;
    v4 = v5;
    v3 = 1.0 - t;
  }
  if ( (float)(v6 - v4) <= 180.0 )
    return (float)((float)(v6 - v4) * v3) + v4;
  else
    return fmodf((float)((float)((float)(v4 + 360.0) - v6) * (float)(1.0 - v3)) + v6, 360.0);
}

