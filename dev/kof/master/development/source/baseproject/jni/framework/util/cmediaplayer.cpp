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
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cmediaplayer.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogltexture.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/image.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14088A4E6
CMediaPlayer::CMediaPlayer(); // 0x140096AD0
AgString CMediaPlayer::_getMovieFileName(const char * fname); // 0x140096BF0
void CMediaPlayer::play(const char * aFileName, long width, long height, float scalefactor, CAudioPresenter * pAudioPresenter); // 0x140096C80
void CMediaPlayer::stop(unsigned char resumeFlag); // 0x140096E50
void CMediaPlayer::exe(); // 0x140096EA0
void CMediaPlayer::draw(OGLRender * pRender, float x, float y, float w, float h, float scalex, float scaley); // 0x140097560//decompilation failure at 14088A4E6!
void __fastcall AgPath::AgPath(AgPath *this)
{
  AgString::AgString(&this->m_path);
}

void __fastcall CMediaPlayer::CMediaPlayer(CMediaPlayer *this)
{
  char *v2; // rax
  char *v3; // [rsp+40h] [rbp+8h]
  char *v4; // [rsp+48h] [rbp+10h]

  this->m_currentMovie.m_ref = 0i64;
  this->m_currentMovie.m_ptr = 0i64;
  AgString::AgString(&this->m_moviePath.m_path);
  v2 = (char *)operator new(0x50ui64);
  *((_QWORD *)v2 + 1) = 0i64;
  *((_QWORD *)v2 + 2) = 0i64;
  v2[24] = 1;
  *((_DWORD *)v2 + 7) = 0;
  *((_WORD *)v2 + 24) = 1;
  *((_DWORD *)v2 + 13) = 0;
  *((_QWORD *)v2 + 5) = 0i64;
  *((_WORD *)v2 + 28) = 0;
  *(_QWORD *)(v2 + 60) = 0i64;
  *((_QWORD *)v2 + 9) = 0i64;
  *(_QWORD *)v2 = &Image::`vftable';
  this->m_movieTex[0] = (Image *)v2;
  v4 = (char *)operator new(0x50ui64);
  *((_QWORD *)v4 + 1) = 0i64;
  *((_QWORD *)v4 + 2) = 0i64;
  v4[24] = 1;
  *((_DWORD *)v4 + 7) = 0;
  *((_WORD *)v4 + 24) = 1;
  *((_DWORD *)v4 + 13) = 0;
  *((_QWORD *)v4 + 5) = 0i64;
  *((_WORD *)v4 + 28) = 0;
  *(_QWORD *)(v4 + 60) = 0i64;
  *((_QWORD *)v4 + 9) = 0i64;
  *(_QWORD *)v4 = &Image::`vftable';
  this->m_movieTex[1] = (Image *)v4;
  v3 = (char *)operator new(0x50ui64);
  *((_QWORD *)v3 + 1) = 0i64;
  *((_QWORD *)v3 + 2) = 0i64;
  v3[24] = 1;
  *((_DWORD *)v3 + 7) = 0;
  *((_WORD *)v3 + 24) = 1;
  *((_DWORD *)v3 + 13) = 0;
  *((_QWORD *)v3 + 5) = 0i64;
  *((_WORD *)v3 + 28) = 0;
  *(_QWORD *)(v3 + 60) = 0i64;
  *((_QWORD *)v3 + 9) = 0i64;
  *(_QWORD *)v3 = &Image::`vftable';
  this->m_movieTex[2] = (Image *)v3;
  this->m_fVolume = 1.0;
  this->m_audioStarted = 0;
  this->m_PlayAudioFunc = 0i64;
}

void __fastcall AgPointer<AgMoviePlayer>::~AgPointer<AgMoviePlayer>(AgPointer<AgMoviePlayer> *this)
{
  AgMoviePlayer *m_ptr; // rdi
  AgReferenceCount *m_ref; // rbx
  int v3; // esi

  m_ptr = this->m_ptr;
  this->m_ptr = 0i64;
  m_ref = this->m_ref;
  if ( this->m_ref )
  {
    this->m_ref = 0i64;
    v3 = 0;
    if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
    {
      if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
        v3 = 1;
      m_ref->m_data = 0i64;
      if ( m_ptr )
      {
        AgMoviePlayer::~AgMoviePlayer(m_ptr);
        operator delete(m_ptr, 0x10ui64);
      }
      if ( v3 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
}

AgPointer<AgMoviePlayer> *__fastcall AgPointer<AgMoviePlayer>::operator=(
        AgPointer<AgMoviePlayer> *this,
        AgMoviePlayer *t)
{
  AgMoviePlayer *m_ptr; // rbx
  int ReferenceCounter; // eax
  AgReferenceCount *m_refCount; // rsi
  AgMoviePlayer *v6; // rax
  AgPointer<AgMoviePlayer> v8; // [rsp+20h] [rbp-18h] BYREF

  m_ptr = t;
  v8 = 0i64;
  if ( t )
  {
    ReferenceCounter = AgReferencedObject::createReferenceCounter(t, t);
    m_refCount = m_ptr->m_refCount;
    if ( !ReferenceCounter )
      AgReferenceCount::incRef(m_ptr->m_refCount);
  }
  else
  {
    m_ptr = v8.m_ptr;
    m_refCount = v8.m_ref;
  }
  v6 = this->m_ptr;
  v8.m_ref = this->m_ref;
  this->m_ref = m_refCount;
  this->m_ptr = m_ptr;
  v8.m_ptr = v6;
  AgPointer<AgMoviePlayer>::~AgPointer<AgMoviePlayer>(&v8);
  return this;
}

AgString *__fastcall CMediaPlayer::_getMovieFileName(CMediaPlayer *this, AgString *result, const char *fname)
{
  int LastIndexOf; // eax
  const AgStringRef *SubString; // rax
  AgString move; // [rsp+30h] [rbp-28h] BYREF
  AgStringRef resulta; // [rsp+40h] [rbp-18h] BYREF

  AgString::AgString(&move, fname, -1);
  LastIndexOf = AgString::getLastIndexOf(&move, 46, 0xFFFFFFFF);
  if ( LastIndexOf < 0 )
  {
    AgString::AgString(result, &move);
  }
  else
  {
    SubString = AgString::getSubString(&move, &resulta, 0, LastIndexOf);
    AgString::AgString(result, SubString);
  }
  AgString::~AgString(&move);
  return result;
}

void __fastcall CMediaPlayer::draw(
        CMediaPlayer *this,
        OGLRender *pRender,
        float x,
        float y,
        float w,
        float h,
        float scalex,
        float scaley)
{
  CMediaPlayer *v8; // rdi
  Image *v10; // rbx
  struct __GLsync *m_sync; // rcx
  AgMoviePlayer *m_ptr; // rcx
  AgMoviePlayer *v13; // rbx
  float Height; // xmm9_4
  int Width; // eax
  AgMoviePlayer *v16; // rbx
  float v17; // xmm9_4
  float v18; // xmm7_4
  int Stride; // eax
  OGLTexture *v20; // r9
  OGLTexture *v21; // r8
  OGLTexture *v22; // rdx
  MeshVertexInfo2D pCoord; // [rsp+40h] [rbp-158h] BYREF
  float v24; // [rsp+80h] [rbp-118h]
  float v25; // [rsp+84h] [rbp-114h]
  int v26; // [rsp+88h] [rbp-110h]
  int v27; // [rsp+B8h] [rbp-E0h]
  int v28; // [rsp+BCh] [rbp-DCh]
  float v29; // [rsp+C0h] [rbp-D8h]
  float v30; // [rsp+C4h] [rbp-D4h]
  int v31; // [rsp+C8h] [rbp-D0h]
  float v32; // [rsp+F8h] [rbp-A0h]
  int v33; // [rsp+FCh] [rbp-9Ch]
  float v34; // [rsp+100h] [rbp-98h]
  float v35; // [rsp+104h] [rbp-94h]
  int v36; // [rsp+108h] [rbp-90h]
  float v37; // [rsp+138h] [rbp-60h]
  int v38; // [rsp+13Ch] [rbp-5Ch]

  v8 = MovieData::mvplayer;
  v10 = MovieData::mvplayer->m_movieTex[0];
  m_sync = v10->m_sync;
  if ( m_sync )
  {
    _glewWaitSync(m_sync, 0, 0xFFFFFFFFFFFFFFFFui64);
    _glewDeleteSync(v10->m_sync);
    v10->m_sync = 0i64;
  }
  if ( (int)v10->m_TexID > 0 )
  {
    m_ptr = v8->m_currentMovie.m_ptr;
    if ( m_ptr )
    {
      if ( AgMoviePlayer::isStarted(m_ptr) )
      {
        v13 = v8->m_currentMovie.m_ptr;
        Height = (float)AgMoviePlayer::getHeight(v13);
        Width = AgMoviePlayer::getWidth(v13);
        v16 = v8->m_currentMovie.m_ptr;
        v17 = (float)(Height / (float)Width) * w;
        v18 = (float)AgMoviePlayer::getWidth(v16);
        Stride = AgMoviePlayer::getStride(v16);
        v20 = v8->m_movieTex[2];
        v21 = v8->m_movieTex[1];
        v22 = v8->m_movieTex[0];
        pCoord.m_position.z = 0.99989998;
        v26 = 1065351538;
        v24 = x;
        v31 = 1065351538;
        v36 = 1065351538;
        v27 = 0;
        pCoord.m_texture = 0i64;
        pCoord.m_position.x = x;
        v33 = 0;
        v38 = 1065353216;
        v28 = 1065353216;
        v30 = (float)((float)(h - v17) * 0.5) + y;
        v37 = v18 / (float)Stride;
        v32 = v37;
        pCoord.m_position.y = v30;
        v35 = (float)(v17 * scaley) + v30;
        v25 = v35;
        v34 = (float)(w * scalex) + x;
        v29 = v34;
        OGLRender::drawMovie(pRender, v22, v21, v20, &pCoord);
      }
    }
  }
}

void __fastcall CMediaPlayer::exe(CMediaPlayer *this)
{
  CMediaPlayer *v1; // rsi
  AgMoviePlayer *m_ptr; // rcx
  __int64 v3; // rdx
  bool v4; // r8
  int ElapsedTimeMS; // eax
  AgMoviePlayer *v6; // rbx
  AgMemoryStream *v7; // rdi
  GLsizei v8; // er14
  GLsizei Stride; // er15
  AgAudioChannelData *pixels; // rdi
  bool v11; // r8
  Image *v12; // rbx
  Framework::GLManager *v13; // r12
  GLsizei height; // er14
  GLsizei m_Width; // er15
  bool v16; // r8
  AgPointer<AgMemoryStream> *Frame; // rax
  AgReferenceCount *m_ref; // r8
  AgMemoryStream *v19; // rdx
  AgReferenceCount *v20; // rax
  AgMemoryStream *v21; // rcx
  __int64 v22; // rdx
  bool v23; // r8
  AgMoviePlayer *v24; // rbx
  AgMemoryStream *v25; // rdi
  int v26; // er14
  int v27; // er15
  bool v28; // r8
  AgAudioChannelData *InternalData; // r12
  Image *v30; // rbx
  Framework::GLManager *v31; // rdi
  GLsizei m_Height; // er14
  GLsizei v33; // er15
  bool v34; // r8
  AgPointer<AgMemoryStream> *v35; // rax
  AgReferenceCount *v36; // r8
  AgMemoryStream *v37; // rdx
  AgReferenceCount *v38; // rax
  AgMemoryStream *v39; // rcx
  __int64 v40; // rdx
  bool v41; // r8
  AgMoviePlayer *v42; // rbx
  AgMemoryStream *v43; // rdi
  int v44; // er14
  int v45; // er15
  bool v46; // r8
  AgAudioChannelData *v47; // r12
  Image *v48; // rbx
  Framework::GLManager *v49; // rdi
  GLsizei v50; // esi
  GLsizei v51; // er14
  bool v52; // r8
  AgPointer<AgMemoryStream> result; // [rsp+60h] [rbp-41h] BYREF
  AgPointer<KOFApplication> v54; // [rsp+70h] [rbp-31h] BYREF
  AgPointer<KOFApplication> v55; // [rsp+80h] [rbp-21h] BYREF
  AgPointer<AgMemoryStream> v56; // [rsp+90h] [rbp-11h] BYREF
  AgPointer<AgMemoryStream> v57; // [rsp+A0h] [rbp-1h] BYREF

  v1 = MovieData::mvplayer;
  m_ptr = MovieData::mvplayer->m_currentMovie.m_ptr;
  if ( m_ptr && AgMoviePlayer::isStarted(m_ptr) )
  {
    AgMoviePlayer::getFrame(v1->m_currentMovie.m_ptr, &result, 0);
    if ( result.m_ptr )
    {
      if ( !v1->m_audioStarted )
      {
        ElapsedTimeMS = AgMoviePlayer::getElapsedTimeMS(v1->m_currentMovie.m_ptr);
        v1->m_PlayAudioFunc(ElapsedTimeMS);
        v1->m_audioStarted = 1;
      }
      OGLTexture::release(v1->m_movieTex[0], v3, v4);
      v6 = v1->m_currentMovie.m_ptr;
      v7 = result.m_ptr;
      v8 = AgMoviePlayer::getHeight(v6);
      Stride = AgMoviePlayer::getStride(v6);
      pixels = AgAudioChannel::getInternalData((AgAudioChannel *)v7);
      v12 = v1->m_movieTex[0];
      if ( pixels && Stride && v8 )
      {
        if ( !v12->m_bSubTexture )
        {
          v12->m_Width = Stride;
          v12->m_Height = v8;
          v12->m_TexFormat = 32;
        }
        v13 = Framework::GLManager::glm;
        Framework::GLManager::LoadingLock(Framework::GLManager::glm, 0, v11);
        glEnable(0xDE1u);
        if ( !v12->m_bSubTexture )
          glGenTexturesAG(1, &v12->m_TexID);
        glPixelStorei(0xCF5u, 1);
        glTexParameterf(0xDE1u, 0x2801u, 9729.0);
        glTexParameterf(0xDE1u, 0x2800u, 9729.0);
        glTexParameterf(0xDE1u, 0x2802u, 33071.0);
        glTexParameterf(0xDE1u, 0x2803u, 33071.0);
        v12->m_TexParam = 1290;
        if ( v12->m_bSubTexture )
        {
          glTexSubImage2D(0xDE1u, 0, 0, 0, Stride, v8, 0x1906u, 0x1401u, pixels);
        }
        else
        {
          height = v12->m_Height;
          m_Width = v12->m_Width;
          glTexParameteri(0xDE1u, 0x813Cu, 0);
          glTexParameteri(0xDE1u, 0x813Du, 0);
          while ( Framework::GLManager::glm->m_bOpenGLBlocked )
            ;
          glTexImage2D(0xDE1u, 0, 6406, m_Width, height, 0, 0x1906u, 0x1401u, pixels);
        }
        v12->m_sync = _glewFenceSync(0x9117u, 0);
        Framework::GLManager::LoadingUnlock(v13, 0, v16);
        v12->m_bSubTexture = 0;
      }
      Frame = AgMoviePlayer::getFrame(v1->m_currentMovie.m_ptr, &v56, 1);
      m_ref = Frame->m_ref;
      v19 = Frame->m_ptr;
      Frame->m_ref = 0i64;
      Frame->m_ptr = 0i64;
      v20 = result.m_ref;
      v21 = result.m_ptr;
      result.m_ref = m_ref;
      result.m_ptr = v19;
      v54.m_ref = v20;
      v54.m_ptr = (KOFApplication *)v21;
      AgPointer<AgUser>::~AgPointer<AgUser>(&v54);
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v56);
      OGLTexture::release(v1->m_movieTex[1], v22, v23);
      v24 = v1->m_currentMovie.m_ptr;
      v25 = result.m_ptr;
      v26 = AgMoviePlayer::getHeight(v24) / 2;
      v27 = AgMoviePlayer::getStride(v24) / 2;
      InternalData = AgAudioChannel::getInternalData((AgAudioChannel *)v25);
      v30 = v1->m_movieTex[1];
      if ( InternalData && v27 && v26 )
      {
        if ( !v30->m_bSubTexture )
        {
          v30->m_Width = v27;
          v30->m_Height = v26;
          v30->m_TexFormat = 32;
        }
        v31 = Framework::GLManager::glm;
        Framework::GLManager::LoadingLock(Framework::GLManager::glm, 0, v28);
        glEnable(0xDE1u);
        if ( !v30->m_bSubTexture )
          glGenTexturesAG(1, &v30->m_TexID);
        glPixelStorei(0xCF5u, 1);
        glTexParameterf(0xDE1u, 0x2801u, 9729.0);
        glTexParameterf(0xDE1u, 0x2800u, 9729.0);
        glTexParameterf(0xDE1u, 0x2802u, 33071.0);
        glTexParameterf(0xDE1u, 0x2803u, 33071.0);
        v30->m_TexParam = 1290;
        if ( v30->m_bSubTexture )
        {
          glTexSubImage2D(0xDE1u, 0, 0, 0, v27, v26, 0x1906u, 0x1401u, InternalData);
        }
        else
        {
          m_Height = v30->m_Height;
          v33 = v30->m_Width;
          glTexParameteri(0xDE1u, 0x813Cu, 0);
          glTexParameteri(0xDE1u, 0x813Du, 0);
          while ( Framework::GLManager::glm->m_bOpenGLBlocked )
            ;
          glTexImage2D(0xDE1u, 0, 6406, v33, m_Height, 0, 0x1906u, 0x1401u, InternalData);
        }
        v30->m_sync = _glewFenceSync(0x9117u, 0);
        Framework::GLManager::LoadingUnlock(v31, 0, v34);
        v30->m_bSubTexture = 0;
      }
      v35 = AgMoviePlayer::getFrame(v1->m_currentMovie.m_ptr, &v57, 2);
      v36 = v35->m_ref;
      v37 = v35->m_ptr;
      v35->m_ref = 0i64;
      v35->m_ptr = 0i64;
      v38 = result.m_ref;
      v39 = result.m_ptr;
      result.m_ref = v36;
      result.m_ptr = v37;
      v55.m_ref = v38;
      v55.m_ptr = (KOFApplication *)v39;
      AgPointer<AgUser>::~AgPointer<AgUser>(&v55);
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v57);
      OGLTexture::release(v1->m_movieTex[2], v40, v41);
      v42 = v1->m_currentMovie.m_ptr;
      v43 = result.m_ptr;
      v44 = AgMoviePlayer::getHeight(v42) / 2;
      v45 = AgMoviePlayer::getStride(v42) / 2;
      v47 = AgAudioChannel::getInternalData((AgAudioChannel *)v43);
      v48 = v1->m_movieTex[2];
      if ( v47 && v45 && v44 )
      {
        if ( !v48->m_bSubTexture )
        {
          v48->m_Width = v45;
          v48->m_Height = v44;
          v48->m_TexFormat = 32;
        }
        v49 = Framework::GLManager::glm;
        Framework::GLManager::LoadingLock(Framework::GLManager::glm, 0, v46);
        glEnable(0xDE1u);
        if ( !v48->m_bSubTexture )
          glGenTexturesAG(1, &v48->m_TexID);
        glPixelStorei(0xCF5u, 1);
        glTexParameterf(0xDE1u, 0x2801u, 9729.0);
        glTexParameterf(0xDE1u, 0x2800u, 9729.0);
        glTexParameterf(0xDE1u, 0x2802u, 33071.0);
        glTexParameterf(0xDE1u, 0x2803u, 33071.0);
        v48->m_TexParam = 1290;
        if ( v48->m_bSubTexture )
        {
          glTexSubImage2D(0xDE1u, 0, 0, 0, v45, v44, 0x1906u, 0x1401u, v47);
        }
        else
        {
          v50 = v48->m_Height;
          v51 = v48->m_Width;
          glTexParameteri(0xDE1u, 0x813Cu, 0);
          glTexParameteri(0xDE1u, 0x813Du, 0);
          while ( Framework::GLManager::glm->m_bOpenGLBlocked )
            ;
          glTexImage2D(0xDE1u, 0, 6406, v51, v50, 0, 0x1906u, 0x1401u, v47);
        }
        v48->m_sync = _glewFenceSync(0x9117u, 0);
        Framework::GLManager::LoadingUnlock(v49, 0, v52);
        v48->m_bSubTexture = 0;
      }
    }
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&result);
  }
}

void __fastcall CMediaPlayer::play(CMediaPlayer *this, const char *aFileName, int width, int height)
{
  CMediaPlayer *v5; // rdi
  AgMoviePlayer *m_ptr; // rcx
  AgReferenceCount *m_ref; // rax
  AgMoviePlayer *v8; // rcx
  AgMount *v9; // rbx
  CMediaPlayer *v10; // rcx
  CMediaPlayer *v11; // rcx
  const AgString *MovieFileName; // rax
  AgMoviePlayer *v13; // rax
  AgPointer<AgMoviePlayer> v14; // [rsp+20h] [rbp-148h] BYREF
  AgPointer<AgMount> result; // [rsp+30h] [rbp-138h] BYREF
  __int64 v16; // [rsp+40h] [rbp-128h]
  char _Buffer[256]; // [rsp+50h] [rbp-118h] BYREF

  v16 = -2i64;
  v5 = MovieData::mvplayer;
  m_ptr = MovieData::mvplayer->m_currentMovie.m_ptr;
  if ( m_ptr )
  {
    AgMoviePlayer::stop(m_ptr);
    m_ref = v5->m_currentMovie.m_ref;
    v8 = v5->m_currentMovie.m_ptr;
    v5->m_currentMovie.m_ref = 0i64;
    v5->m_currentMovie.m_ptr = 0i64;
    v14.m_ref = m_ref;
    v14.m_ptr = v8;
    AgPointer<AgMoviePlayer>::~AgPointer<AgMoviePlayer>(&v14);
  }
  AgString::AgString((AgString *)&v14, "archive", -1);
  v9 = AgFileSystem::getMount((AgFileSystem *)AgSingleton<AgFileSystem>::ms_instance, &result, (const AgString *)&v14)->m_ptr;
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&result);
  AgString::~AgString((AgString *)&v14);
  if ( v9 )
  {
    sprintf(_Buffer, "archive:%s", aFileName);
    MovieFileName = CMediaPlayer::_getMovieFileName(v11, (AgString *)&result, _Buffer);
  }
  else
  {
    MovieFileName = CMediaPlayer::_getMovieFileName(v10, (AgString *)&result, aFileName);
  }
  AgString::AgString((AgString *)&v14, MovieFileName);
  AgPath::clean((AgPath *)&v14);
  AgString::operator=(&v5->m_moviePath.m_path, (const AgString *)&v14);
  AgString::~AgString((AgString *)&v14);
  AgString::~AgString((AgString *)&result);
  v14.m_ref = (AgReferenceCount *)operator new(0x10ui64);
  AgMoviePlayer::AgMoviePlayer((AgMoviePlayer *)v14.m_ref);
  AgPointer<AgMoviePlayer>::operator=(&v5->m_currentMovie, v13);
  if ( AgMoviePlayer::start(v5->m_currentMovie.m_ptr, &v5->m_moviePath.m_path, 1) )
    v5->m_audioStarted = 0;
  else
    AgTrace("Failed to start movie %s", aFileName);
}

void __fastcall CMediaPlayer::stop(CMediaPlayer *this, unsigned __int8 resumeFlag)
{
  CMediaPlayer *v2; // rbx
  AgMoviePlayer *m_ptr; // rcx
  AgReferenceCount *m_ref; // rax
  AgPointer<AgMoviePlayer> v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = MovieData::mvplayer;
  m_ptr = MovieData::mvplayer->m_currentMovie.m_ptr;
  if ( m_ptr )
  {
    AgMoviePlayer::stop(m_ptr);
    m_ref = v2->m_currentMovie.m_ref;
    v5.m_ptr = v2->m_currentMovie.m_ptr;
    v2->m_currentMovie.m_ref = 0i64;
    v2->m_currentMovie.m_ptr = 0i64;
    v5.m_ref = m_ref;
    AgPointer<AgMoviePlayer>::~AgPointer<AgMoviePlayer>(&v5);
  }
}

