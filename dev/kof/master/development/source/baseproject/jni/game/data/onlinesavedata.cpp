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
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/debug/gameinfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/commonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/taskfunc/generaltask.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/ctasksystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/replace.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragetargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingreadpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingtargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/tusreadps4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"

struct GRADESKIP_WIN_TABLE
{
	long win; // 0x0
	RANKMATCH_RANK grade; // 0x4
};
struct ONLINESAVEDATA_WORK
{
	Fw::TS_HANDLE m_Handle; // 0x0
	Fw::cTusReadRequest m_ReadRequest; // 0x8
	Fw::cTusWriteRequest m_WriteRequest; // 0x28
	OnlineProfileData * m_pBuf; // 0x48
	AppMain::ONLINEPROFILE_LOAD_STATE * m_pLoadingState; // 0x50
};
struct OPPONENTUSER_TUS_REQUEST
{
	Fw::TS_HANDLE m_Handle; // 0x0
	Fw::cTusReadRequest m_ReadRequest; // 0x8
	long long * m_pBuf; // 0x28
	bool * m_pLoadingFlag; // 0x30
	bool * m_pErrorFlag; // 0x38
};
struct LIVESTREAMING_TUS_REQUEST
{
	Fw::TS_HANDLE m_Handle; // 0x0
	Fw::cTusReadRequest m_ReadRequest; // 0x8
	Fw::cTusWriteRequest m_WriteRequest; // 0x8
	Fw::cTusResult * m_pTusResult; // 0x28
	bool * m_pLoadingFlag; // 0x30
};
struct RANKMATCH_WIN_MONTH
{
	Fw::cRankingReadRequest m_ReadRequest; // 0x0
	Fw::RANKING_HANDLE m_Handle; // 0x18
	LEADERBOARD_INFO m_Info; // 0x20
	RANKMATCH_WIN_MONTH();
};
void AppMain::ConvertOnlineProfile(long long * pBuf, SaveRecord_PlayerData * pSaveData, unsigned char rankmatch_playing, unsigned char patch_111); // 0x1400FDA50
long GT_TusGetOnlineProfileData(GENERAL_TASK * pGT); // 0x1400FDD10
GENERAL_TASK * AppMain::TusGetOnlineProfile(unsigned long long * pNpId, OnlineProfileData * pBuf, AppMain::ONLINEPROFILE_LOAD_STATE * pLoadingState); // 0x1400FE260
long GT_TusSetOnlineProfileData(GENERAL_TASK * pGT); // 0x1400FE440
void AppMain::TusSetOnlineProfile(); // 0x1400FE4E0
long AppMain::AddGradePointSaveData(long point, bool downRankFlag); // 0x1400FE7C0
long AppMain::GetCalcGradePointSaveData(BATTLE_RESULT_TYPE result, RANKMATCH_RANK myGrade, RANKMATCH_RANK enemyGrade, bool prisonFlag); // 0x1400FEA80
RANKMATCH_RANK AppMain::GetGradeReflectSkip(RANKMATCH_RANK grade, long win_count); // 0x1400FEC00
struct AppMain::GetGradeReflectSkip::__l5::DATA
{
	RANKMATCH_RANK rank; // 0x0
	long cnt; // 0x4
};
std::piecewise_construct_t std::piecewise_construct; // 0x14089B494
Fw::cTusResult::cTusResult(); // 0x1400FE240
Fw::cTusResult::~cTusResult(); // 0x1400FE250
void AppMain::CheckGradePoint4Trophy(); // 0x1400FEC70
void AppMain::CheckDownDisconnectLevel(); // 0x1400FECE0
RANKMATCH_RANK AppMain::GetRankMatchRank(bool f_change); // 0x1400FED70
void AppMain::SetBattleGradeForSkipGradeSaveData(); // 0x1400FEEC0
void AppMain::GetRankMatchGradeRange(RANKMATCH_RANK checkGrade, long times, AppMain::RANK_MATCH_GRADE_RANGE * pOut, NETWORK_GRADE_SELECT gradeSelect); // 0x1400FEFA0
long AppMain::UpdateRankMatchMaxWinsSaveData(); // 0x1400FF2F0
bool AppMain::GetRankMatchHighSuccessRate(); // 0x1400FF3D0
long GT_TusSetGalleryFlag(GENERAL_TASK * pGT); // 0x1400FF470
void AppMain::SetTusGalleryFlag(); // 0x1400FF5A0
long GT_TusGetGalleryFlag(GENERAL_TASK * pGT); // 0x1400FF9F0
void AppMain::ReadGalleryItemFlag(CSteamID * pNpId, long long * pBuf, bool * pLoadingFlag, bool * errorFlag); // 0x1400FFB30
long GT_TusSetFriendReplayStatusFlag(GENERAL_TASK * pGT); // 0x1400FFCD0
void AppMain::SetTusLiveStreamingStatusFlag(bool statusFlag); // 0x1400FFD70
long GT_TusGetLiveStreamingStatusFlag(GENERAL_TASK * pGT); // 0x1400FFEB0
void AppMain::GetLiveStreamingStatusFlag(long npIdNum, CSteamID * pNpIdList, bool * pLoadingFlag, Fw::cTusResult * pTusResult); // 0x1400FFF50
void AppMain::SetTusFriendReplayStatusFlag(long long time); // 0x140100110
void AppMain::GetOnlineStageTelop(char * pOut, long bufsize); // 0x140100240
long GT_ReadRankMatchWinMonthly(GENERAL_TASK * pGT); // 0x140100320
void AppMain::ReadRankingRankingRankMatchWinMonthly(PROFILE_ICON icon, LEADERBOARD_AREA area, RANKMATCH_DISCONNECT_MARKER disconnectMaker); // 0x1401004A0//decompilation failure at 14089B494!
void __fastcall AgString::AgString(AgString *this)
{
  this->m_length = 0;
  this->m_text = 0i64;
}

void __fastcall Concurrency::details::QuickBitSet::~QuickBitSet(
        Concurrency::details::QuickBitSet *this,
        unsigned __int64 a2)
{
  operator delete(this->m_pBits, a2);
}

__int64 __fastcall AppMain::AddGradePointSaveData(AppMain *this, int point, bool downRankFlag)
{
  int v5; // ecx
  int v6; // er10
  unsigned int v7; // ecx
  unsigned int v8; // edx
  int v9; // ecx
  WIN_COUNT_BONUS *winBonus; // rax
  int v11; // er9
  unsigned int v12; // edx
  int v13; // er10
  int v14; // ecx
  int v15; // ebx
  int v16; // er9
  GRADE_THRESHOLD_TABLE *v17; // r8
  int v18; // er11
  int v19; // eax
  GRADE_THRESHOLD_TABLE *v20; // rcx
  int i; // eax
  unsigned int v22; // edx
  int v23; // ecx
  unsigned int v24; // edx
  int v25; // ecx
  int m_RankMatchRankPoint; // er8
  unsigned int v27; // edx
  unsigned int v28; // edx
  unsigned int v29; // edx

  if ( point )
  {
    v6 = 0;
    v7 = this->SaveDataMain.PlayerData.m_RankMatchWins ^ 0x7B48A35E;
    v8 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 14)) & 0xCCCC) << 14);
    v9 = 0;
    winBonus = _rank_match_change_table.winBonus;
    while ( winBonus->winCount > (signed int)((v8 ^ (v8 >> 7)) & 0x550055 ^ v8 ^ (((v8 ^ (v8 >> 7)) & 0x550055) << 7)) )
    {
      ++v9;
      if ( (__int64)++winBonus >= (__int64)&g_stage )
        goto LABEL_8;
    }
    v6 = _rank_match_change_table.winBonus[v9].point;
LABEL_8:
    v11 = v6 + point;
    v12 = this->SaveDataMain.PlayerData.m_RankMatchRankPoint ^ 0x7B48A35E ^ (LOWORD(this->SaveDataMain.PlayerData.m_RankMatchRankPoint) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchRankPoint ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->SaveDataMain.PlayerData.m_RankMatchRankPoint) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchRankPoint ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v13 = (v12 ^ (v12 >> 7)) & 0x550055 ^ v12 ^ (((v12 ^ (v12 >> 7)) & 0x550055) << 7);
    v14 = v13 + v11;
    v15 = v14 ^ (v14 ^ ((v13 + v11) >> 7)) & 0x550055 ^ (((v14 ^ ((v13 + v11) >> 7)) & 0x550055) << 7) ^ ((unsigned __int16)(v14 ^ (v14 ^ ((v13 + v11) >> 7)) & 0x55 ^ ((((unsigned __int16)v14 ^ (unsigned __int16)((v13 + v11) >> 7)) & 0x55) << 7)) ^ (unsigned __int16)((v14 ^ (v14 ^ ((v13 + v11) >> 7)) & 0x550055 ^ (((v14 ^ ((v13 + v11) >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(v14 ^ (v14 ^ ((v13 + v11) >> 7)) & 0x55 ^ ((((unsigned __int16)v14 ^ (unsigned __int16)((v13 + v11) >> 7)) & 0x55) << 7)) ^ (unsigned __int16)((v14 ^ (v14 ^ ((v13 + v11) >> 7)) & 0x550055 ^ (((v14 ^ ((v13 + v11) >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
    this->SaveDataMain.PlayerData.m_RankMatchRankPoint = v15;
    if ( v11 < 0 )
    {
      v16 = 1;
      v17 = &_grade_change_table[1];
      v18 = 1;
      v19 = 1;
      v20 = &_grade_change_table[1];
      do
      {
        if ( v20->point > v13 )
          break;
        v18 = v19;
        ++v20;
        ++v19;
      }
      while ( v19 < 44 );
      for ( i = 1; i < 44; ++i )
      {
        v22 = v15 ^ 0x7B48A35E ^ ((unsigned __int16)v15 ^ 0xA35E ^ (unsigned __int16)((v15 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)v15 ^ 0xA35E ^ (unsigned __int16)((v15 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
        if ( v17->point > (signed int)((v22 ^ (v22 >> 7)) & 0x550055 ^ v22 ^ (((v22 ^ (v22 >> 7)) & 0x550055) << 7)) )
          break;
        v16 = i;
        ++v17;
      }
      if ( v16 < v18 && v18 >= 1 && v16 <= 10 )
      {
        v23 = _grade_change_table[v18].point;
        v24 = (v23 ^ (v23 >> 7)) & 0x550055 ^ v23 ^ (((v23 ^ (v23 >> 7)) & 0x550055) << 7);
        v25 = (((unsigned __int16)v23 ^ (unsigned __int16)(v23 >> 7)) & 0x55 ^ (unsigned __int16)(v23 ^ ((((unsigned __int16)v23 ^ (unsigned __int16)(v23 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v24 >> 14)) & 0xCCCC;
        this->SaveDataMain.PlayerData.m_RankMatchRankPoint = v24 ^ v25 ^ (v25 << 14) ^ 0x7B48A35E;
      }
    }
    m_RankMatchRankPoint = this->SaveDataMain.PlayerData.m_RankMatchRankPoint;
    v27 = m_RankMatchRankPoint ^ 0x7B48A35E ^ (LOWORD(this->SaveDataMain.PlayerData.m_RankMatchRankPoint) ^ 0xA35E ^ (unsigned __int16)((m_RankMatchRankPoint ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->SaveDataMain.PlayerData.m_RankMatchRankPoint) ^ 0xA35E ^ (unsigned __int16)((m_RankMatchRankPoint ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    if ( (((v27 ^ (v27 >> 7)) & 0x550055 ^ v27 ^ (((v27 ^ (v27 >> 7)) & 0x550055) << 7)) & 0x80000000) != 0 )
      m_RankMatchRankPoint = 2068357982;
    v28 = m_RankMatchRankPoint ^ 0x7B48A35E ^ ((unsigned __int16)m_RankMatchRankPoint ^ 0xA35E ^ (unsigned __int16)((m_RankMatchRankPoint ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)m_RankMatchRankPoint ^ 0xA35E ^ (unsigned __int16)((m_RankMatchRankPoint ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    if ( (int)((v28 ^ (v28 >> 7)) & 0x550055 ^ v28 ^ (((v28 ^ (v28 >> 7)) & 0x550055) << 7)) > 99999999 )
      m_RankMatchRankPoint = 1174015481;
    this->SaveDataMain.PlayerData.m_RankMatchRankPoint = m_RankMatchRankPoint;
    AppMain::CheckGradePoint4Trophy(this);
    v5 = this->SaveDataMain.PlayerData.m_RankMatchRankPoint;
  }
  else
  {
    v5 = this->SaveDataMain.PlayerData.m_RankMatchRankPoint;
  }
  v29 = v5 ^ 0x7B48A35E ^ ((unsigned __int16)v5 ^ 0xA35E ^ (unsigned __int16)((v5 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)v5 ^ 0xA35E ^ (unsigned __int16)((v5 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  return (v29 ^ (v29 >> 7)) & 0x550055 ^ v29 ^ (((v29 ^ (v29 >> 7)) & 0x550055) << 7);
}

void __fastcall AppMain::CheckDownDisconnectLevel(AppMain *this)
{
  DISCONNECT_LEVEL m_DisconnectLevel; // edi
  unsigned __int64 m_LastRankMatchTime; // rsi
  int v4; // edx
  __int64 v5; // rcx
  __int32 v6; // edi
  __int64 result; // [rsp+30h] [rbp+8h] BYREF

  m_DisconnectLevel = this->SaveDataMain.PlayerData.m_DisconnectLevel;
  if ( (unsigned int)(m_DisconnectLevel - 4) <= 1 )
  {
    m_LastRankMatchTime = this->SaveDataMain.PlayerData.m_LastRankMatchTime;
    if ( m_LastRankMatchTime )
    {
      time64(&result);
      v5 = result;
      if ( result > m_LastRankMatchTime && result - m_LastRankMatchTime >= 0xFFFFFFFFD0E3A000ui64 )
      {
        v6 = m_DisconnectLevel - 4;
        if ( v6 )
        {
          if ( v6 == 1 )
            this->SaveDataMain.PlayerData.m_DisconnectLevel = DISCONNECT_LEVEL4;
        }
        else
        {
          this->SaveDataMain.PlayerData.m_DisconnectLevel = DISCONNECT_LEVEL3;
        }
        this->SaveDataMain.PlayerData.m_LastRankMatchTime = v5;
        AppMain::SaveDataAsyncSave(this, v4);
      }
    }
  }
}

void __fastcall AppMain::CheckGradePoint4Trophy(AppMain *this)
{
  unsigned int v1; // er8
  AgAchievementsManager *v2; // rcx

  v1 = this->SaveDataMain.PlayerData.m_RankMatchRankPoint ^ 0x7B48A35E ^ (LOWORD(this->SaveDataMain.PlayerData.m_RankMatchRankPoint) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchRankPoint ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->SaveDataMain.PlayerData.m_RankMatchRankPoint) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchRankPoint ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  if ( (int)((v1 ^ (v1 >> 7)) & 0x550055 ^ v1 ^ (((v1 ^ (v1 >> 7)) & 0x550055) << 7)) >= 300
    && *(char *)(*(_QWORD *)&AppMain::pApp + 2205161i64) <= 1 )
  {
    v2 = (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance;
    *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205161i64) = 1;
    AgAchievementsManager::unlock(v2, (AgAchievementPlatformData *)&stru_140A9BFC0);
  }
}

void __fastcall AppMain::ConvertOnlineProfile(
        AppMain *this,
        __int64 *pBuf,
        SaveRecord_PlayerData *pSaveData,
        unsigned __int8 rankmatch_playing,
        unsigned __int8 patch_111)
{
  DISCONNECT_LEVEL m_DisconnectLevel; // eax
  int v6; // edi
  __int64 v11; // rbx
  unsigned int v12; // edx
  GRADE_THRESHOLD_TABLE *v13; // rcx
  int v14; // eax
  int v15; // er8
  int v16; // edx
  int v17; // er8
  int i; // eax
  unsigned int v19; // er8
  unsigned int v20; // er8
  unsigned int v21; // er8
  unsigned int v22; // er9
  unsigned int v23; // edx
  char pBufa[56]; // [rsp+20h] [rbp-38h] BYREF

  m_DisconnectLevel = pSaveData->m_DisconnectLevel;
  v6 = 0;
  if ( m_DisconnectLevel < DISCONNECT_LEVEL4 )
  {
    v11 = 0i64;
    if ( m_DisconnectLevel >= DISCONNECT_LEVEL3 )
      v11 = 2i64;
  }
  else
  {
    v11 = 4i64;
  }
  *pBuf = Fw::NetworkCommon::GetShortCountryName(pBufa, (const Fw::ONLINEID *)pBuf);
  if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x20000000) == 0 )
  {
    v12 = this->SaveDataMain.PlayerData.m_RankMatchRankPoint ^ 0x7B48A35E ^ (LOWORD(this->SaveDataMain.PlayerData.m_RankMatchRankPoint) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchRankPoint ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->SaveDataMain.PlayerData.m_RankMatchRankPoint) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchRankPoint ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v13 = &_grade_change_table[1];
    v14 = (v12 ^ (v12 >> 7)) & 0x550055;
    v15 = v12 ^ (v14 << 7);
    v16 = 1;
    v17 = v14 ^ v15;
    for ( i = 1; i < 44; ++i )
    {
      if ( v13->point > v17 )
        break;
      v16 = i;
      ++v13;
    }
    v6 = v16;
  }
  pBuf[1] = v6;
  v19 = (LOWORD(pSaveData->m_RankMatchRankPoint) ^ 0xA35E ^ (unsigned __int16)((pSaveData->m_RankMatchRankPoint ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ pSaveData->m_RankMatchRankPoint ^ 0x7B48A35E ^ (((LOWORD(pSaveData->m_RankMatchRankPoint) ^ 0xA35E ^ (unsigned __int16)((pSaveData->m_RankMatchRankPoint ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  pBuf[2] = (int)v19 ^ (v19 ^ (v19 >> 7)) & 0x550055 ^ (unsigned __int64)(((v19 ^ (v19 >> 7)) & 0x550055) << 7);
  v20 = pSaveData->m_RankMatchWin ^ 0x7B48A35E ^ (LOWORD(pSaveData->m_RankMatchWin) ^ 0xA35E ^ (unsigned __int16)((pSaveData->m_RankMatchWin ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(pSaveData->m_RankMatchWin) ^ 0xA35E ^ (unsigned __int16)((pSaveData->m_RankMatchWin ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  pBuf[3] = (int)v20 ^ (v20 ^ (v20 >> 7)) & 0x550055 ^ (unsigned __int64)(((v20 ^ (v20 >> 7)) & 0x550055) << 7);
  v21 = pSaveData->m_RankMatchLose ^ 0x7B48A35E ^ (LOWORD(pSaveData->m_RankMatchLose) ^ 0xA35E ^ (unsigned __int16)((pSaveData->m_RankMatchLose ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(pSaveData->m_RankMatchLose) ^ 0xA35E ^ (unsigned __int16)((pSaveData->m_RankMatchLose ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  pBuf[4] = (int)v21 ^ (v21 ^ (v21 >> 7)) & 0x550055 ^ (unsigned __int64)(((v21 ^ (v21 >> 7)) & 0x550055) << 7);
  v22 = pSaveData->m_RankMatchDraw ^ 0x7B48A35E ^ (LOWORD(pSaveData->m_RankMatchDraw) ^ 0xA35E ^ (unsigned __int16)((pSaveData->m_RankMatchDraw ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(pSaveData->m_RankMatchDraw) ^ 0xA35E ^ (unsigned __int16)((pSaveData->m_RankMatchDraw ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  pBuf[5] = (v22 ^ (v22 ^ (v22 >> 7)) & 0x550055 ^ (((v22 ^ (v22 >> 7)) & 0x550055) << 7)) & 0xFFFFFF | ((patch_111 & 1 | (2 * (((__int64)(unsigned int)pSaveData->m_MyNetWorkTitle >> 8) & 3))) << 24);
  pBuf[6] = (unsigned int)(int)(float)((float)(SaveRecord_PlayerData::GetRankMatchWinRate(pSaveData) * 100.0) * 100.0);
  v23 = pSaveData->m_RankMatchMaxWins ^ 0x7B48A35E ^ (LOWORD(pSaveData->m_RankMatchMaxWins) ^ 0xA35E ^ (unsigned __int16)((pSaveData->m_RankMatchMaxWins ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(pSaveData->m_RankMatchMaxWins) ^ 0xA35E ^ (unsigned __int16)((pSaveData->m_RankMatchMaxWins ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  pBuf[7] = ((v11 | rankmatch_playing & 1) << 24) | (v23 ^ (v23 ^ (v23 >> 7)) & 0x550055 ^ (((v23 ^ (v23 >> 7)) & 0x550055) << 7)) & 0xFFFFFF;
  pBuf[8] = (unsigned int)(int)(float)((float)(SaveRecord_PlayerData::GetRankMatchEndRate(pSaveData) * 100.0) * 100.0);
  pBuf[9] = pSaveData->m_RankMatchLosePublication | (unsigned __int64)(2
                                                                     * (pSaveData->m_RankMatchDrawPublication | (2 * pSaveData->m_RankMatchRatePublication)));
  pBuf[10] = pSaveData->m_ProfileIcon;
  pBuf[11] = LOBYTE(pSaveData->m_MyNetWorkTitle);
}

__int64 __fastcall GT_ReadRankMatchWinMonthly(GENERAL_TASK *pGT)
{
  void *pBuffer; // rbx
  int v3; // eax
  Fw::RANKING_HANDLE v4; // er11
  unsigned int v5; // eax
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // r8
  void *v9; // rcx
  int iStat; // eax
  LEADERBOARD_INFO pInfo; // [rsp+20h] [rbp-B8h] BYREF
  Fw::cRankingReadResult rResultPtr; // [rsp+A0h] [rbp-38h] BYREF

  pBuffer = pGT->pBuffer;
  if ( pBuffer )
  {
    v3 = Fw::RankingTarget::GetResult((Fw::RANKING_HANDLE)*((_DWORD *)pBuffer + 6));
    if ( v3 == 1 )
    {
      Fw::RankingSystem::GetRankingResult(&rResultPtr, v4);
      if ( rResultPtr.m_RankDataArray->hasData )
        v5 = LODWORD(rResultPtr.m_RankDataArray->rankData.scoreValue) + 1;
      else
        v5 = 1;
      v6 = *(_QWORD *)&AppMain::pApp;
      if ( *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2292480i64) )
      {
        ++*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2292480i64);
        v5 = *(_DWORD *)(v6 + 2292480);
        if ( v5 > 0x5F5E0FF )
          v5 = 99999999;
      }
      *(_DWORD *)(v6 + 2292480) = v5;
      v7 = (void *)*((_QWORD *)pBuffer + 2);
      if ( v7 )
      {
        aligned_free(v7);
        *((_QWORD *)pBuffer + 2) = 0i64;
      }
      Fw::RankingSystem::ReleaseHandle(*((Fw::RANKING_HANDLE *)pBuffer + 6));
      *(_WORD *)&pInfo.m_RankWin.m_Icon = *((_WORD *)pBuffer + 28);
      pInfo.m_RankWin.m_DisconnectMarker = *((_BYTE *)pBuffer + 58);
      pInfo.m_PcId = 0;
      pInfo.m_BoardId = LEADERBOARD_ID_RANKMATCH_WIN_MONTHLY_ALL;
      v8 = (*(_WORD *)(*(_QWORD *)&AppMain::pApp + 2292480i64) ^ (*(_WORD *)(*(_QWORD *)&AppMain::pApp + 2292480i64) ^ (unsigned __int16)(*(int *)(*(_QWORD *)&AppMain::pApp + 2292480i64) >> 7)) & 0x55 ^ (((*(_WORD *)(*(_QWORD *)&AppMain::pApp + 2292480i64) ^ (unsigned __int16)(*(int *)(*(_QWORD *)&AppMain::pApp + 2292480i64) >> 7)) & 0x55) << 7) ^ (unsigned __int16)((*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2292480i64) ^ (*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2292480i64) ^ (*(int *)(*(_QWORD *)&AppMain::pApp + 2292480i64) >> 7)) & 0x550055 ^ (((*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2292480i64) ^ (*(int *)(*(_QWORD *)&AppMain::pApp + 2292480i64) >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC;
      pInfo.m_Score = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2292480i64) ^ (*(_DWORD *)(*(_QWORD *)&AppMain::pApp
                                                                                       + 2292480i64) ^ (*(int *)(*(_QWORD *)&AppMain::pApp + 2292480i64) >> 7)) & 0x550055 ^ (((*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2292480i64) ^ (*(int *)(*(_QWORD *)&AppMain::pApp + 2292480i64) >> 7)) & 0x550055) << 7) ^ v8 ^ ((_DWORD)v8 << 14) ^ 0x7B48A35E;
      SubmitScore(LEADERBOARD_ID_RANKMATCH_WIN_MONTHLY_ALL, &pInfo, 0);
    }
    else
    {
      if ( (unsigned int)(v3 - 2) > 1 )
        return 0i64;
      v9 = (void *)*((_QWORD *)pBuffer + 2);
      if ( v9 )
      {
        aligned_free(v9);
        *((_QWORD *)pBuffer + 2) = 0i64;
      }
      Fw::RankingSystem::ReleaseHandle(*((Fw::RANKING_HANDLE *)pBuffer + 6));
    }
    iStat = pGT->iStat;
    if ( (iStat & 1) != 0 )
      pGT->iStat = iStat | 6;
  }
  return 0i64;
}

__int64 __fastcall GT_TusGetGalleryFlag(GENERAL_TASK *pGT)
{
  _QWORD *pBuffer; // rbx
  int v3; // eax
  Fw::TS_HANDLE v4; // er11
  int v5; // er10
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  void *v9; // rcx
  void *v10; // rcx
  int iStat; // eax
  void *v12; // rcx
  void *v13; // rcx
  int v14; // eax
  int v16; // [rsp+28h] [rbp-20h] BYREF
  void *block; // [rsp+30h] [rbp-18h]
  Fw::cTusResult *rResultPtr; // [rsp+50h] [rbp+8h] BYREF

  pBuffer = pGT->pBuffer;
  if ( pBuffer )
  {
    v3 = Fw::TitleStorageTarget::GetResult((Fw::TS_HANDLE)*(_DWORD *)pBuffer);
    if ( v3 == 1 )
    {
      v16 = 0;
      block = 0i64;
      rResultPtr = (Fw::cTusResult *)&v16;
      Fw::TitleStorageTarget::GetTusResult(&rResultPtr, v4);
      v5 = 0;
      if ( v16 > 0 )
      {
        v6 = 0i64;
        v7 = 0i64;
        do
        {
          *(_QWORD *)(v6 + pBuffer[5]) = *(_QWORD *)((char *)block + v7 + 16);
          ++v5;
          v7 += 24i64;
          v6 += 8i64;
        }
        while ( v5 < v16 );
      }
      *(_BYTE *)pBuffer[6] = 0;
      Fw::TitleStorageTarget::ReleaseHandle(*(Fw::TS_HANDLE *)pBuffer);
      v9 = (void *)pBuffer[2];
      if ( v9 )
      {
        aligned_free(v9);
        pBuffer[2] = 0i64;
      }
      v10 = (void *)pBuffer[3];
      if ( v10 )
      {
        aligned_free(v10);
        pBuffer[3] = 0i64;
      }
      iStat = pGT->iStat;
      if ( (iStat & 1) != 0 )
        pGT->iStat = iStat | 6;
      operator delete(block, v8);
    }
    else if ( (unsigned int)(v3 - 2) <= 2 )
    {
      *(_BYTE *)pBuffer[7] = 0;
      Fw::TitleStorageTarget::ReleaseHandle(*(Fw::TS_HANDLE *)pBuffer);
      v12 = (void *)pBuffer[2];
      if ( v12 )
      {
        aligned_free(v12);
        pBuffer[2] = 0i64;
      }
      v13 = (void *)pBuffer[3];
      if ( v13 )
      {
        aligned_free(v13);
        pBuffer[3] = 0i64;
      }
      v14 = pGT->iStat;
      if ( (v14 & 1) != 0 )
        pGT->iStat = v14 | 6;
    }
  }
  return 0i64;
}

__int64 __fastcall GT_TusGetLiveStreamingStatusFlag(GENERAL_TASK *pGT)
{
  void *pBuffer; // rbx
  int v3; // eax
  Fw::TS_HANDLE v4; // er11
  Fw::TS_HANDLE v5; // ecx
  void *v6; // rcx
  void *v7; // rcx
  int iStat; // eax
  Fw::cTusResult *rResultPtr; // [rsp+30h] [rbp+8h] BYREF

  pBuffer = pGT->pBuffer;
  if ( pBuffer )
  {
    v3 = Fw::TitleStorageTarget::GetResult((Fw::TS_HANDLE)*(_DWORD *)pBuffer);
    if ( v3 == 1 )
    {
      rResultPtr = (Fw::cTusResult *)*((_QWORD *)pBuffer + 5);
      Fw::TitleStorageTarget::GetTusResult(&rResultPtr, v4);
      **((_BYTE **)pBuffer + 6) = 0;
      v5 = *(_DWORD *)pBuffer;
    }
    else
    {
      if ( (unsigned int)(v3 - 2) > 2 )
        return 0i64;
      v5 = v4;
    }
    Fw::TitleStorageTarget::ReleaseHandle(v5);
    v6 = (void *)*((_QWORD *)pBuffer + 2);
    if ( v6 )
    {
      aligned_free(v6);
      *((_QWORD *)pBuffer + 2) = 0i64;
    }
    v7 = (void *)*((_QWORD *)pBuffer + 4);
    if ( v7 )
    {
      aligned_free(v7);
      *((_QWORD *)pBuffer + 4) = 0i64;
    }
    iStat = pGT->iStat;
    if ( (iStat & 1) != 0 )
      pGT->iStat = iStat | 6;
  }
  return 0i64;
}

__int64 __fastcall GT_TusGetOnlineProfileData(GENERAL_TASK *pGT)
{
  _QWORD *pBuffer; // rbx
  EasyIndicator *v3; // rdi
  int v4; // eax
  Fw::TS_HANDLE v5; // er11
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // er8
  unsigned __int16 v11; // dx
  int v12; // ecx
  __int64 v13; // rdx
  char *v14; // rcx
  int v15; // ecx
  __int64 v16; // rdx
  _OWORD *v17; // rax
  unsigned __int64 v18; // rdx
  void *v19; // rcx
  void *v20; // rcx
  int iStat; // eax
  int v22; // eax
  int v24; // [rsp+28h] [rbp-59h] BYREF
  void *block; // [rsp+30h] [rbp-51h]
  Fw::cTusResult *rResultPtr[3]; // [rsp+40h] [rbp-41h] BYREF
  __int128 v27[6]; // [rsp+58h] [rbp-29h] BYREF

  rResultPtr[1] = (Fw::cTusResult *)-2i64;
  pBuffer = pGT->pBuffer;
  if ( !pBuffer )
    return 0i64;
  v3 = EasyIndicator::instance;
  if ( !EasyIndicator::instance )
  {
    v3 = (EasyIndicator *)operator new(0x150ui64);
    rResultPtr[0] = (Fw::cTusResult *)v3;
    memset(v3->m_IndicatorStack, 0, sizeof(v3->m_IndicatorStack));
    v3->m_Image = 0i64;
    v3->m_DrawCount = 0;
    EasyIndicator::instance = v3;
  }
  EasyIndicator::RequestDraw(v3, 1760 * GAME_SCREEN_WIDTH / 1920, 920 * GAME_SCREEN_HEIGHT / 1080, TYPE_CONNECTING);
  v4 = Fw::TitleStorageTarget::GetResult((Fw::TS_HANDLE)*(_DWORD *)pBuffer);
  if ( v4 == 1 )
  {
    v24 = 0;
    block = 0i64;
    rResultPtr[0] = (Fw::cTusResult *)&v24;
    Fw::TitleStorageTarget::GetTusResult(rResultPtr, v5);
    memset(v27, 0, sizeof(v27));
    if ( v24 == 12 )
    {
      if ( *((_BYTE *)block + 8) )
      {
        *(_DWORD *)(pBuffer[9] + 12i64) = *((_DWORD *)block + 4);
        *(_DWORD *)(pBuffer[9] + 16i64) = *((_DWORD *)block + 10);
        v6 = *((_DWORD *)block + 16) ^ (*((_DWORD *)block + 16) ^ (*((int *)block + 16) >> 7)) & 0x550055 ^ (((*((_DWORD *)block + 16) ^ (*((int *)block + 16) >> 7)) & 0x550055) << 7);
        *(_DWORD *)(pBuffer[9] + 20i64) = ((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 14)) & 0xCCCC ^ v6 ^ ((((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
        v7 = *((_DWORD *)block + 22) ^ (*((_DWORD *)block + 22) ^ (*((int *)block + 22) >> 7)) & 0x550055 ^ (((*((_DWORD *)block + 22) ^ (*((int *)block + 22) >> 7)) & 0x550055) << 7);
        *(_DWORD *)(pBuffer[9] + 24i64) = ((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 14)) & 0xCCCC ^ v7 ^ ((((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
        v8 = *((_DWORD *)block + 28) ^ (*((_DWORD *)block + 28) ^ (*((int *)block + 28) >> 7)) & 0x550055 ^ (((*((_DWORD *)block + 28) ^ (*((int *)block + 28) >> 7)) & 0x550055) << 7);
        *(_DWORD *)(pBuffer[9] + 28i64) = ((unsigned __int16)v8 ^ (unsigned __int16)(v8 >> 14)) & 0xCCCC ^ v8 ^ ((((unsigned __int16)v8 ^ (unsigned __int16)(v8 >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
        v9 = (*((_WORD *)block + 68) ^ (*((_WORD *)block + 68) ^ (unsigned __int16)((*((_DWORD *)block + 34) & 0xFFFFFFu) >> 7)) & 0x55 ^ (((*((_WORD *)block + 68) ^ (unsigned __int16)((*((_DWORD *)block + 34) & 0xFFFFFFu) >> 7)) & 0x55) << 7) ^ ((*((_DWORD *)block + 34) & 0xFFFFFF ^ (*((_DWORD *)block + 34) & 0xFFFFFF ^ ((*((_DWORD *)block + 34) & 0xFFFFFFu) >> 7)) & 0x550055 ^ (((*((_DWORD *)block + 34) & 0xFFFFFF ^ ((*((_DWORD *)block + 34) & 0xFFFFFFu) >> 7)) & 0x550055) << 7)) >> 14)) & 0xCCCC;
        *(_DWORD *)(pBuffer[9] + 32i64) = v9 ^ *((_DWORD *)block + 34) & 0xFFFFFF ^ (*((_DWORD *)block + 34) & 0xFFFFFF ^ ((*((_DWORD *)block + 34) & 0xFFFFFFu) >> 7)) & 0x550055 ^ (((*((_DWORD *)block + 34) & 0xFFFFFF ^ ((*((_DWORD *)block + 34) & 0xFFFFFFu) >> 7)) & 0x550055) << 7) ^ (v9 << 14) ^ 0x7B48A35E;
        *(float *)(pBuffer[9] + 36i64) = (float)(int)*((_QWORD *)block + 20);
        v10 = *((_DWORD *)block + 46) & 0xFFFFFF ^ (*((_DWORD *)block + 46) & 0xFFFFFF ^ ((*((_DWORD *)block + 46) & 0xFFFFFFu) >> 7)) & 0x550055 ^ (((*((_DWORD *)block + 46) & 0xFFFFFF ^ ((*((_DWORD *)block + 46) & 0xFFFFFFu) >> 7)) & 0x550055) << 7);
        *(_DWORD *)(pBuffer[9] + 40i64) = (*((_WORD *)block + 92) ^ (*((_WORD *)block + 92) ^ (unsigned __int16)((*((_DWORD *)block + 46) & 0xFFFFFFu) >> 7)) & 0x55 ^ (((*((_WORD *)block + 92) ^ (unsigned __int16)((*((_DWORD *)block + 46) & 0xFFFFFFu) >> 7)) & 0x55) << 7) ^ (unsigned __int16)(v10 >> 14)) & 0xCCCC ^ v10 ^ (((*((_WORD *)block + 92) ^ (*((_WORD *)block + 92) ^ (unsigned __int16)((*((_DWORD *)block + 46) & 0xFFFFFFu) >> 7)) & 0x55 ^ (((*((_WORD *)block + 92) ^ (unsigned __int16)((*((_DWORD *)block + 46) & 0xFFFFFFu) >> 7)) & 0x55) << 7) ^ (unsigned __int16)(v10 >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
        *(_BYTE *)(pBuffer[9] + 51i64) = ((unsigned __int64)*((unsigned int *)block + 46) >> 25) & 3;
        *(_BYTE *)(pBuffer[9] + 52i64) = HIBYTE(*((_DWORD *)block + 46)) & 1;
        *(float *)(pBuffer[9] + 44i64) = (float)(int)*((_QWORD *)block + 26);
        *(_BYTE *)(pBuffer[9] + 48i64) = *((_BYTE *)block + 232) & 1;
        *(_BYTE *)(pBuffer[9] + 49i64) = *((_BYTE *)block + 232) & 2;
        *(_BYTE *)(pBuffer[9] + 50i64) = *((_BYTE *)block + 232) & 4;
        *(_DWORD *)(pBuffer[9] + 4i64) = *((_DWORD *)block + 64);
        v11 = ((((__int64)*((unsigned int *)block + 34) >> 25) & 3) << 8) | *((_WORD *)block + 140);
        v12 = 0;
        if ( v11 < 0x12Cu )
          v12 = v11;
        *(_DWORD *)(pBuffer[9] + 8i64) = v12;
        *(_BYTE *)(pBuffer[9] + 53i64) = HIBYTE(*((_DWORD *)block + 34)) & 1;
        *(_BYTE *)pBuffer[9] = 1;
        *(_BYTE *)(pBuffer[9] + 1i64) = 0;
        v13 = 0i64;
        v14 = (char *)block + 16;
        do
        {
          if ( *(v14 - 8) )
            *(_QWORD *)&v27[v13] = *(_QWORD *)v14;
          if ( v14[16] )
            *((_QWORD *)&v27[v13] + 1) = *((_QWORD *)v14 + 3);
          if ( v14[40] )
            *(_QWORD *)&v27[v13 + 1] = *((_QWORD *)v14 + 6);
          if ( v14[64] )
            *((_QWORD *)&v27[v13 + 1] + 1) = *((_QWORD *)v14 + 9);
          if ( v14[88] )
            *(_QWORD *)&v27[v13 + 2] = *((_QWORD *)v14 + 12);
          if ( v14[112] )
            *((_QWORD *)&v27[v13 + 2] + 1) = *((_QWORD *)v14 + 15);
          v13 += 3i64;
          v14 += 144;
        }
        while ( v13 < 6 );
        goto LABEL_28;
      }
    }
    else if ( *((_BYTE *)block + 8) )
    {
      v15 = 0;
      v16 = 0i64;
      do
      {
        *(_BYTE *)(v16 + pBuffer[9]) = v15++;
        ++v16;
      }
      while ( v15 < 2 );
      goto LABEL_28;
    }
    *(_BYTE *)pBuffer[9] = 1;
    *(_BYTE *)(pBuffer[9] + 1i64) = 1;
LABEL_28:
    v17 = *(_OWORD **)&AppMain::pApp;
    *(_OWORD *)(*(_QWORD *)&AppMain::pApp + 10896i64) = v27[0];
    v17[682] = v27[1];
    v17[683] = v27[2];
    v17[684] = v27[3];
    v17[685] = v27[4];
    v17[686] = v27[5];
    *(_DWORD *)pBuffer[10] = 2;
    Fw::TitleStorageTarget::ReleaseHandle(*(Fw::TS_HANDLE *)pBuffer);
    v19 = (void *)pBuffer[2];
    if ( v19 )
    {
      aligned_free(v19);
      pBuffer[2] = 0i64;
    }
    v20 = (void *)pBuffer[3];
    if ( v20 )
    {
      aligned_free(v20);
      pBuffer[3] = 0i64;
    }
    iStat = pGT->iStat;
    if ( (iStat & 1) != 0 )
      pGT->iStat = iStat | 6;
    operator delete(block, v18);
    return 0i64;
  }
  if ( (unsigned int)(v4 - 2) <= 2 )
  {
    v22 = pGT->iStat;
    if ( (v22 & 1) != 0 )
      pGT->iStat = v22 | 6;
  }
  return 0i64;
}

__int64 __fastcall GT_TusSetLiveStreamingStatusFlag(GENERAL_TASK *pGT)
{
  _QWORD *pBuffer; // rbx
  int v3; // eax
  Fw::TS_HANDLE v4; // er11
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  int iStat; // eax

  pBuffer = pGT->pBuffer;
  if ( pBuffer )
  {
    v3 = Fw::TitleStorageTarget::GetResult((Fw::TS_HANDLE)*(_DWORD *)pBuffer);
    if ( v3 == 1 || (unsigned int)(v3 - 2) <= 2 )
    {
      Fw::TitleStorageTarget::ReleaseHandle(v4);
      v5 = (void *)pBuffer[4];
      if ( v5 )
      {
        aligned_free(v5);
        pBuffer[4] = 0i64;
      }
      v6 = (void *)pBuffer[2];
      if ( v6 )
      {
        aligned_free(v6);
        pBuffer[2] = 0i64;
      }
      v7 = (void *)pBuffer[3];
      if ( v7 )
      {
        aligned_free(v7);
        pBuffer[3] = 0i64;
      }
      iStat = pGT->iStat;
      if ( (iStat & 1) != 0 )
        pGT->iStat = iStat | 6;
    }
  }
  return 0i64;
}

__int64 __fastcall GT_TusSetGalleryFlag(GENERAL_TASK *pGT)
{
  _QWORD *pBuffer; // rbx
  int v3; // eax
  Fw::TS_HANDLE v4; // er11
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  int iStat; // eax
  EasyIndicator *v9; // rbx

  pBuffer = pGT->pBuffer;
  if ( pBuffer )
  {
    v3 = Fw::TitleStorageTarget::GetResult((Fw::TS_HANDLE)*(_DWORD *)pBuffer);
    if ( v3 == 1 || (unsigned int)(v3 - 2) <= 2 )
    {
      Fw::TitleStorageTarget::ReleaseHandle(v4);
      v5 = (void *)pBuffer[8];
      if ( v5 )
      {
        aligned_free(v5);
        pBuffer[8] = 0i64;
      }
      v6 = (void *)pBuffer[6];
      if ( v6 )
      {
        aligned_free(v6);
        pBuffer[6] = 0i64;
      }
      v7 = (void *)pBuffer[7];
      if ( v7 )
      {
        aligned_free(v7);
        pBuffer[7] = 0i64;
      }
      iStat = pGT->iStat;
      if ( (iStat & 1) != 0 )
        pGT->iStat = iStat | 6;
    }
    v9 = EasyIndicator::instance;
    if ( !EasyIndicator::instance )
    {
      v9 = (EasyIndicator *)operator new(0x150ui64);
      memset(v9->m_IndicatorStack, 0, sizeof(v9->m_IndicatorStack));
      v9->m_Image = 0i64;
      v9->m_DrawCount = 0;
      EasyIndicator::instance = v9;
    }
    EasyIndicator::RequestDraw(v9, 1760 * GAME_SCREEN_WIDTH / 1920, 920 * GAME_SCREEN_HEIGHT / 1080, TYPE_CONNECTING);
  }
  return 0i64;
}

__int64 __fastcall GT_TusSetOnlineProfileData(GENERAL_TASK *pGT)
{
  _QWORD *pBuffer; // rbx
  int v3; // eax
  Fw::TS_HANDLE v4; // er11
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  int iStat; // eax

  pBuffer = pGT->pBuffer;
  if ( pBuffer )
  {
    v3 = Fw::TitleStorageTarget::GetResult((Fw::TS_HANDLE)*(_DWORD *)pBuffer);
    if ( v3 == 1 )
    {
      Fw::TitleStorageTarget::ReleaseHandle(v4);
      v5 = (void *)pBuffer[8];
      if ( v5 )
      {
        aligned_free(v5);
        pBuffer[8] = 0i64;
      }
      v6 = (void *)pBuffer[6];
      if ( v6 )
      {
        aligned_free(v6);
        pBuffer[6] = 0i64;
      }
      v7 = (void *)pBuffer[7];
      if ( v7 )
      {
        aligned_free(v7);
        pBuffer[7] = 0i64;
      }
    }
    else if ( (unsigned int)(v3 - 2) > 2 )
    {
      return 0i64;
    }
    iStat = pGT->iStat;
    if ( (iStat & 1) != 0 )
      pGT->iStat = iStat | 6;
  }
  return 0i64;
}

__int64 __fastcall AppMain::GetCalcGradePointSaveData(
        AppMain *this,
        BATTLE_RESULT_TYPE result,
        RANKMATCH_RANK myGrade,
        RANKMATCH_RANK enemyGrade,
        bool prisonFlag)
{
  int v6; // er11
  RANKMATCH_RANK *p_endGrade; // rax
  int v8; // ecx
  __int64 v9; // rcx
  int *lose; // rax
  unsigned int *v11; // rcx
  __int32 v12; // er9

  if ( myGrade == RANKMATCH_RANK_NONE )
    return 0i64;
  v6 = 0;
  p_endGrade = &_rank_match_change_table.judge[0].endGrade;
  v8 = 0;
  while ( *((_DWORD *)p_endGrade - 1) > myGrade || myGrade > *p_endGrade )
  {
    ++v8;
    p_endGrade += 29;
    if ( (__int64)p_endGrade >= (__int64)&_rank_match_change_table.judgePrison[0].endGrade )
      goto LABEL_9;
  }
  v6 = v8;
LABEL_9:
  if ( prisonFlag )
  {
    if ( result )
    {
      if ( result == BATTLE_RESULT_TYPE_LOSE )
      {
        v9 = 29i64 * v6;
        lose = _rank_match_change_table.judgePrison[0].lose;
      }
      else
      {
        if ( result != BATTLE_RESULT_TYPE_DRAW )
          return 0i64;
        v9 = 29i64 * v6;
        lose = _rank_match_change_table.judgePrison[0].draw;
      }
    }
    else
    {
      v9 = 29i64 * v6;
      lose = _rank_match_change_table.judgePrison[0].win;
    }
  }
  else if ( result )
  {
    if ( result != BATTLE_RESULT_TYPE_LOSE )
    {
      if ( result == BATTLE_RESULT_TYPE_DRAW )
      {
        v9 = 29i64 * v6;
        lose = _rank_match_change_table.judge[0].draw;
        goto LABEL_22;
      }
      return 0i64;
    }
    v9 = 29i64 * v6;
    lose = _rank_match_change_table.judge[0].lose;
  }
  else
  {
    v9 = 29i64 * v6;
    lose = _rank_match_change_table.judge[0].win;
  }
LABEL_22:
  v11 = (unsigned int *)&lose[v9];
  if ( !v11 )
    return 0i64;
  v12 = enemyGrade - myGrade;
  if ( v12 >= 5 )
    return *v11;
  if ( v12 >= 3 )
    return v11[1];
  if ( v12 >= 2 )
    return v11[2];
  switch ( v12 )
  {
    case 1:
      return v11[3];
    case 0:
      return v11[4];
    case -1:
      return v11[5];
  }
  if ( v12 <= -5 )
    return v11[8];
  if ( v12 > -3 )
    return v11[6];
  return v11[7];
}

__int64 __fastcall AppMain::GetGradeReflectSkip(AppMain *this, RANKMATCH_RANK grade, int win_count)
{
  __int128 *v3; // rax
  unsigned int v4; // edx
  __int128 v6[2]; // [rsp+0h] [rbp-38h] BYREF

  v3 = v6;
  v4 = 0;
  v6[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  while ( *((_DWORD *)v3 + 1) > (int)this )
  {
    ++v4;
    v3 = (__int128 *)((char *)v3 + 8);
    if ( v4 >= 4 )
      return 1i64;
  }
  return *(unsigned int *)v3;
}

void __fastcall AppMain::GetLiveStreamingStatusFlag(
        AppMain *this,
        int npIdNum,
        CSteamID *pNpIdList,
        bool *pLoadingFlag,
        Fw::cTusResult *pTusResult)
{
  CSteamID *v5; // r13
  unsigned __int64 v6; // r15
  GENERAL_TASK *v8; // rax
  GENERAL_TASK *v9; // rbp
  char *pBuffer; // r14
  unsigned int v11; // eax
  char *v12; // rax
  unsigned __int64 v13; // rdx
  char *v14; // rcx
  void *v15; // rax
  void *v16; // rcx
  _DWORD *v17; // rax
  Fw::HeapMemory *v18; // rcx
  Fw::cTusReadWork *v19; // rax
  Fw::HeapMemory *v20; // r9
  int v21; // esi
  void *v22; // rcx
  void *v23; // rcx
  int iStat; // eax
  GENERAL_TASK *v25; // [rsp+20h] [rbp-38h]

  v5 = friendNpId;
  v6 = npIdNum;
  v8 = CTaskSystem::Entry(
         &this->m_TS,
         (int (__fastcall *)(GENERAL_TASK *))GT_TusGetLiveStreamingStatusFlag,
         (int)pNpIdList,
         (int)pLoadingFlag,
         v25);
  v9 = v8;
  if ( v8 )
  {
    pBuffer = (char *)v8->pBuffer;
    if ( pBuffer != (char *)-8i64 )
    {
      v11 = 8 * v6;
      if ( !is_mul_ok(v6, 8ui64) )
        v11 = -1;
      v12 = (char *)aligned_malloc(v11, 0x20ui64);
      if ( v12 )
      {
        v13 = v6;
        if ( v6 )
        {
          v14 = v12 + 4;
          do
          {
            *(_DWORD *)v14 &= 0xFF0FFFFF;
            v14[3] = 0;
            *(_DWORD *)v14 &= 0xFFF00000;
            *((_DWORD *)v14 - 1) = 0;
            v14 += 8;
            --v13;
          }
          while ( v13 );
        }
      }
      else
      {
        v12 = 0i64;
      }
      *((_QWORD *)pBuffer + 4) = v12;
      v15 = aligned_malloc(4ui64, 0x20ui64);
      v16 = (void *)*((_QWORD *)pBuffer + 4);
      *((_QWORD *)pBuffer + 2) = v15;
      if ( v16 && v15 )
      {
        *((_DWORD *)pBuffer + 6) = v6;
        memmove(v16, v5, 8 * v6);
        v17 = (_DWORD *)*((_QWORD *)pBuffer + 2);
        *((_DWORD *)pBuffer + 2) = 1;
        *v17 = 11;
        *((_QWORD *)pBuffer + 5) = pTusResult;
        *((_QWORD *)pBuffer + 6) = pLoadingFlag;
        *pLoadingFlag = 1;
        v19 = Fw::TusRead::NewWork(v18);
        if ( v19 )
        {
          v21 = Fw::TusRead::m_CycleWorkHandle + 1;
          if ( Fw::TusRead::m_CycleWorkHandle + 1 > 0x1FFFFFF )
            v21 = 0x1000000;
          Fw::TusRead::m_CycleWorkHandle = v21;
          if ( Fw::cTusReadWork::beginReadMultiUserVariable(
                 v19,
                 (const Fw::cTusReadRequest *)(pBuffer + 8),
                 (Fw::TS_HANDLE)v21,
                 v20) )
          {
            *(_DWORD *)pBuffer = v21;
            if ( v21 )
              return;
          }
          else
          {
            *(_DWORD *)pBuffer = 0;
          }
        }
        else
        {
          *(_DWORD *)pBuffer = 0;
        }
      }
      v22 = (void *)*((_QWORD *)pBuffer + 2);
      if ( v22 )
      {
        aligned_free(v22);
        *((_QWORD *)pBuffer + 2) = 0i64;
      }
      v23 = (void *)*((_QWORD *)pBuffer + 4);
      if ( v23 )
      {
        aligned_free(v23);
        *((_QWORD *)pBuffer + 4) = 0i64;
      }
      iStat = v9->iStat;
      if ( (iStat & 1) != 0 )
        v9->iStat = iStat | 6;
    }
  }
}

void __fastcall AppMain::GetOnlineStageTelop(AppMain *this, char *pOut, int bufsize)
{
  __int64 v5; // rax
  char v6; // al
  __int128 v7[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+58h] [rbp-10h]
  char v10; // [rsp+5Ch] [rbp-Ch]

  v5 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, pOut);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 16) + 336i64))(*(_QWORD *)(v5 + 16));
  if ( (v6 & 0x10) != 0 || (v6 & 2) != 0 )
  {
    strcpy((char *)v7, "TERS");
    *(_OWORD *)pOut = *(_OWORD *)"THE KING OF FIGHTERS";
    *((_OWORD *)pOut + 1) = v7[0];
    *((_OWORD *)pOut + 2) = v7[1];
    *((_QWORD *)pOut + 6) = v8;
    *((_DWORD *)pOut + 14) = v9;
    pOut[60] = v10;
  }
  else
  {
    *(_OWORD *)pOut = *(_OWORD *)this->SaveDataMain.PlayerData.m_MyFavoriteTelop;
    *((_OWORD *)pOut + 1) = *(_OWORD *)&this->SaveDataMain.PlayerData.m_MyFavoriteTelop[16];
    *((_OWORD *)pOut + 2) = *(_OWORD *)&this->SaveDataMain.PlayerData.m_MyFavoriteTelop[32];
    *((_QWORD *)pOut + 6) = *(_QWORD *)&this->SaveDataMain.PlayerData.m_MyFavoriteTelop[48];
    *((_DWORD *)pOut + 14) = *(_DWORD *)&this->SaveDataMain.PlayerData.m_MyFavoriteTelop[56];
    pOut[60] = this->SaveDataMain.PlayerData.m_MyFavoriteTelop[60];
  }
}

void __fastcall AppMain::GetRankMatchGradeRange(
        AppMain *this,
        RANKMATCH_RANK checkGrade,
        int times,
        AppMain::RANK_MATCH_GRADE_RANGE *pOut,
        NETWORK_GRADE_SELECT gradeSelect)
{
  int v5; // eax
  RANKMATCH_RANK v6; // er10
  unsigned int v7; // ecx
  unsigned int v8; // edx
  RANKMATCH_RANK GradeReflectSkip; // eax
  RANKMATCH_RANK v10; // edx
  RANKMATCH_RANK v11; // ecx
  int v12; // er8
  int v13; // er8
  int v14; // eax
  int v15; // er8
  int v16; // er8
  int v17; // er8
  RANKMATCH_RANK v18; // ecx
  RANKMATCH_RANK v19; // ecx
  int v20; // er8
  int v21; // er8
  int v22; // er8
  __int32 v23; // eax
  RANKMATCH_RANK v24; // ecx
  __int32 v25; // eax
  RANKMATCH_RANK v26; // edx
  RANKMATCH_RANK v27; // ecx
  __int32 v28; // eax
  RANKMATCH_RANK v29; // edx
  RANKMATCH_RANK v30; // ecx
  RANKMATCH_RANK v31; // ecx

  v5 = 0;
  pOut->gradeSelect = -1;
  v6 = checkGrade;
  if ( this->SaveDataMain.PlayerData.m_DisconnectLevel >= DISCONNECT_LEVEL4 )
    v5 = 5;
  pOut->worldIdIndex = v5;
  if ( checkGrade )
  {
    if ( checkGrade >= RANKMATCH_RANK_UPPER_LEVEL )
    {
      if ( gradeSelect )
      {
        if ( gradeSelect == NETWORK_GRADE_SELECT_RANGE_2 )
        {
          v22 = times - 1;
          if ( !v22 )
          {
            v28 = checkGrade + 2;
            v29 = RANKMATCH_RANK_DEFAULT;
            v30 = RANKMATCH_RANK_GREATEST;
            if ( v6 + 2 > 1 )
              v29 = v28;
            pOut->start = v29;
            if ( v6 + 4 < 43 )
              v30 = v6 + 4;
            pOut->end = v30;
            return;
          }
          v23 = checkGrade + 4;
        }
        else
        {
          if ( gradeSelect != NETWORK_GRADE_SELECT_RANGE_3 )
          {
            v21 = times - 1;
            if ( v21 )
            {
              pOut->end = RANKMATCH_RANK_GREATEST;
              if ( v21 == 1 )
              {
                pOut->start = 29;
              }
              else
              {
                pOut->start = RANKMATCH_RANK_DEFAULT;
                pOut->gradeSelect = 1;
              }
            }
            else
            {
              pOut->start = RANKMATCH_RANK_UPPER_LEVEL;
              pOut->end = RANKMATCH_RANK_GREATEST;
            }
            return;
          }
          v22 = times - 1;
          if ( !v22 )
          {
            v25 = checkGrade + 4;
            v26 = RANKMATCH_RANK_DEFAULT;
            v27 = RANKMATCH_RANK_GREATEST;
            if ( v6 + 4 > 1 )
              v26 = v25;
            pOut->start = v26;
            if ( v6 + 6 < 43 )
              v27 = v6 + 6;
            pOut->end = v27;
            return;
          }
          v23 = checkGrade + 6;
        }
      }
      else
      {
        v22 = times - 1;
        if ( !v22 )
        {
          pOut->start = checkGrade;
          v31 = RANKMATCH_RANK_GREATEST;
          if ( checkGrade + 1 < 43 )
            v31 = checkGrade + 1;
          pOut->end = v31;
          return;
        }
        v23 = checkGrade + 2;
      }
      v24 = RANKMATCH_RANK_GREATEST;
      if ( v22 == 1 )
      {
        pOut->start = checkGrade;
        if ( v23 < 43 )
          v24 = v23;
        pOut->end = v24;
      }
      else
      {
        pOut->start = RANKMATCH_RANK_33;
        if ( v23 < 43 )
          v24 = v23;
        pOut->end = v24;
      }
      return;
    }
    v10 = RANKMATCH_RANK_DEFAULT;
    if ( gradeSelect )
    {
      if ( gradeSelect == NETWORK_GRADE_SELECT_RANGE_2 )
      {
        v17 = times - 1;
        if ( v17 )
        {
          v18 = RANKMATCH_RANK_GREATEST;
          if ( v17 == 1 )
          {
            if ( v6 > RANKMATCH_RANK_DEFAULT )
              v10 = v6;
            pOut->start = v10;
            if ( v6 + 3 < 43 )
              v18 = v6 + 3;
            pOut->end = v18;
          }
          else
          {
            if ( v6 - 1 > 1 )
              v10 = v6 - 1;
            pOut->start = v10;
            if ( v6 + 4 < 43 )
              v18 = v6 + 4;
            pOut->end = v18;
          }
        }
        else
        {
          v19 = RANKMATCH_RANK_GREATEST;
          if ( v6 > RANKMATCH_RANK_DEFAULT )
            v10 = v6;
          pOut->start = v10;
          if ( v6 + 2 < 43 )
            v19 = v6 + 2;
          pOut->end = v19;
        }
        return;
      }
      v11 = RANKMATCH_RANK_GREATEST;
      if ( gradeSelect == NETWORK_GRADE_SELECT_RANGE_3 )
      {
        v16 = times - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
          {
            if ( v6 > RANKMATCH_RANK_DEFAULT )
              v10 = v6;
            pOut->start = v10;
            if ( v6 + 6 < 43 )
              v11 = v6 + 6;
            pOut->end = v11;
          }
          else
          {
            if ( v6 > RANKMATCH_RANK_DEFAULT )
              v10 = v6;
            pOut->start = v10;
            if ( v6 + 8 < 43 )
              v11 = v6 + 8;
            pOut->end = v11;
          }
        }
        else
        {
          if ( v6 > RANKMATCH_RANK_DEFAULT )
            v10 = v6;
          pOut->start = v10;
          if ( v6 + 4 < 43 )
            v11 = v6 + 4;
          pOut->end = v11;
        }
        return;
      }
      v15 = times - 1;
      if ( !v15 )
      {
LABEL_12:
        if ( v6 > RANKMATCH_RANK_DEFAULT )
          v10 = v6;
        pOut->start = v10;
        if ( v6 < RANKMATCH_RANK_GREATEST )
          v11 = v6;
        pOut->end = v11;
        return;
      }
      if ( v15 != 1 )
        goto LABEL_6;
    }
    else
    {
      v11 = RANKMATCH_RANK_GREATEST;
      v20 = times - 1;
      if ( !v20 )
        goto LABEL_12;
      if ( v20 == 1 )
      {
        if ( v6 - 1 > 1 )
          v10 = v6 - 1;
        pOut->start = v10;
        if ( v6 + 1 < 43 )
          v11 = v6 + 1;
        pOut->end = v11;
        return;
      }
    }
    if ( v6 - 2 > 1 )
      v10 = v6 - 2;
    pOut->start = v10;
    if ( v6 + 2 < 43 )
      v11 = v6 + 2;
    pOut->end = v11;
    return;
  }
  v7 = this->SaveDataMain.PlayerData.m_RankMatchWin ^ 0x7B48A35E;
  v8 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 14)) & 0xCCCC) << 14);
  GradeReflectSkip = (unsigned int)AppMain::GetGradeReflectSkip(
                                     (AppMain *)((v8 ^ (v8 >> 7)) & 0x550055 ^ v8 ^ (((v8 ^ (v8 >> 7)) & 0x550055) << 7)),
                                     (RANKMATCH_RANK)v8,
                                     times);
  v10 = RANKMATCH_RANK_DEFAULT;
  v6 = GradeReflectSkip;
  v11 = RANKMATCH_RANK_GREATEST;
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_12;
  if ( v13 != 1 )
  {
LABEL_6:
    pOut->start = RANKMATCH_RANK_DEFAULT;
    pOut->gradeSelect = 1;
    pOut->end = RANKMATCH_RANK_GREATEST;
    return;
  }
  v14 = GradeReflectSkip - 2;
  if ( v14 > 1 )
    v10 = v14;
  pOut->start = v10;
  if ( v6 + 2 < 43 )
    v11 = v6 + 2;
  pOut->end = v11;
}

bool __fastcall AppMain::GetRankMatchHighSuccessRate(AppMain *this)
{
  int v2; // er8
  __int64 v3; // rcx
  int v4; // ebx
  int RankMatchDisconnectNum; // ecx

  v2 = this->SaveDataMain.PlayerData.m_RankMatchCount ^ 0x7B48A35E ^ (LOWORD(this->SaveDataMain.PlayerData.m_RankMatchCount) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->SaveDataMain.PlayerData.m_RankMatchCount) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v3 = (v2 ^ ((unsigned int)v2 >> 7)) & 0x550055;
  v4 = v2 ^ v3 ^ ((_DWORD)v3 << 7);
  return !(v2 ^ v3 ^ (unsigned int)((_DWORD)v3 << 7))
      || (RankMatchDisconnectNum = AppMain::GetRankMatchDisconnectNum(this)) == 0
      || (float)(100.0 - (float)((float)((float)RankMatchDisconnectNum / (float)v4) * 100.0)) >= 71.0;
}

__int64 __fastcall AppMain::GetRankMatchRank(AppMain *this, bool f_change)
{
  unsigned int v2; // ecx
  unsigned int v3; // edx
  unsigned int v4; // ecx
  __int128 *v5; // rax
  __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int v8; // edx
  int v9; // eax
  int v10; // er8
  GRADE_THRESHOLD_TABLE *v11; // rdx
  int v12; // er8
  int i; // ecx
  __int128 v14[2]; // [rsp+0h] [rbp-38h] BYREF

  if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x20000000) != 0 )
  {
    if ( f_change )
    {
      v2 = this->SaveDataMain.PlayerData.m_RankMatchWin ^ 0x7B48A35E;
      v3 = v2 ^ ((unsigned __int16)v2 ^ (unsigned __int16)(v2 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v2 ^ (unsigned __int16)(v2 >> 14)) & 0xCCCC) << 14);
      v4 = 0;
      v5 = v14;
      v14[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
      v14[1] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
      while ( *((_DWORD *)v5 + 1) > (signed int)((v3 ^ (v3 >> 7)) & 0x550055 ^ v3 ^ (((v3 ^ (v3 >> 7)) & 0x550055) << 7)) )
      {
        ++v4;
        v5 = (__int128 *)((char *)v5 + 8);
        if ( v4 >= 4 )
          return 1i64;
      }
      return *(unsigned int *)v5;
    }
    else
    {
      return 0i64;
    }
  }
  else
  {
    v7 = this->SaveDataMain.PlayerData.m_RankMatchRankPoint ^ 0x7B48A35E;
    v8 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 14)) & 0xCCCC) << 14);
    v9 = (v8 ^ (v8 >> 7)) & 0x550055;
    v10 = v8 ^ (v9 << 7);
    v11 = &_grade_change_table[1];
    v12 = v9 ^ v10;
    result = 1i64;
    for ( i = 1; i < 44; ++i )
    {
      if ( v11->point > v12 )
        break;
      result = (unsigned int)i;
      ++v11;
    }
  }
  return result;
}

void __fastcall AppMain::ReadGalleryItemFlag(
        AppMain *this,
        CSteamID *pNpId,
        __int64 *pBuf,
        bool *pLoadingFlag,
        bool *errorFlag)
{
  GENERAL_TASK *v8; // rax
  GENERAL_TASK *v9; // rsi
  char *pBuffer; // r14
  _DWORD *v11; // rax
  void *v12; // rax
  Fw::HeapMemory *v13; // rdx
  bool v14; // r8
  CSteamID *v15; // rcx
  int MultiSlotVariable; // eax
  void *v17; // rcx
  void *v18; // rcx
  int iStat; // eax
  GENERAL_TASK *v20; // [rsp+20h] [rbp-28h]

  if ( pBuf )
  {
    if ( pLoadingFlag )
    {
      v8 = CTaskSystem::Entry(
             &this->m_TS,
             (int (__fastcall *)(GENERAL_TASK *))GT_TusGetGalleryFlag,
             (int)pBuf,
             (int)pLoadingFlag,
             v20);
      v9 = v8;
      if ( v8 )
      {
        pBuffer = (char *)v8->pBuffer;
        if ( pBuffer != (char *)-8i64 )
        {
          v11 = aligned_malloc(8ui64, 0x20ui64);
          if ( v11 )
          {
            v11[1] &= 0xFF0FFFFF;
            *((_BYTE *)v11 + 7) = 0;
            v11[1] &= 0xFFF00000;
            *v11 = 0;
          }
          *((_QWORD *)pBuffer + 3) = v11;
          v12 = aligned_malloc(0x20ui64, 0x20ui64);
          v15 = (CSteamID *)*((_QWORD *)pBuffer + 3);
          *((_QWORD *)pBuffer + 2) = v12;
          if ( !v15 )
            goto $error_ReadGalleryItemFlag;
          if ( !v12 )
            goto $error_ReadGalleryItemFlag;
          v15->m_steamid.m_comp = pNpId->m_steamid.m_comp;
          *((_DWORD *)pBuffer + 2) = 8;
          **((_DWORD **)pBuffer + 2) = 2;
          *(_DWORD *)(*((_QWORD *)pBuffer + 2) + 4i64) = 3;
          *(_DWORD *)(*((_QWORD *)pBuffer + 2) + 8i64) = 4;
          *(_DWORD *)(*((_QWORD *)pBuffer + 2) + 12i64) = 5;
          *(_DWORD *)(*((_QWORD *)pBuffer + 2) + 16i64) = 6;
          *(_DWORD *)(*((_QWORD *)pBuffer + 2) + 20i64) = 7;
          *(_DWORD *)(*((_QWORD *)pBuffer + 2) + 24i64) = 8;
          *(_DWORD *)(*((_QWORD *)pBuffer + 2) + 28i64) = 9;
          *((_QWORD *)pBuffer + 5) = pBuf;
          *((_QWORD *)pBuffer + 6) = pLoadingFlag;
          *pLoadingFlag = 1;
          *((_QWORD *)pBuffer + 7) = errorFlag;
          MultiSlotVariable = Fw::TitleStorageSystem::TusBeginReadMultiSlotVariable(
                                (const Fw::cTusReadRequest *)(pBuffer + 8),
                                v13,
                                v14);
          *(_DWORD *)pBuffer = MultiSlotVariable;
          if ( !MultiSlotVariable )
          {
$error_ReadGalleryItemFlag:
            v17 = (void *)*((_QWORD *)pBuffer + 2);
            if ( v17 )
            {
              aligned_free(v17);
              *((_QWORD *)pBuffer + 2) = 0i64;
            }
            v18 = (void *)*((_QWORD *)pBuffer + 3);
            if ( v18 )
            {
              aligned_free(v18);
              *((_QWORD *)pBuffer + 3) = 0i64;
            }
            iStat = v9->iStat;
            if ( (iStat & 1) != 0 )
              v9->iStat = iStat | 6;
          }
        }
      }
    }
  }
}

void __fastcall AppMain::ReadRankingRankingRankMatchWinMonthly(
        AppMain *this,
        PROFILE_ICON icon,
        LEADERBOARD_AREA area,
        RANKMATCH_DISCONNECT_MARKER disconnectMaker)
{
  char v4; // r14
  char v5; // di
  char v6; // bp
  GENERAL_TASK *v7; // rax
  GENERAL_TASK *v8; // rsi
  Fw::cRankingReadRequest *pBuffer; // rbx
  Fw::ONLINEID *v10; // rax
  Fw::HeapMemory *data; // rcx
  Fw::cRankingReadWork *v12; // rax
  Fw::HeapMemory *v13; // r9
  unsigned int v14; // edi
  unsigned __int64 *m_pNpIdArray; // rcx
  int iStat; // eax
  GENERAL_TASK *v17; // [rsp+20h] [rbp-18h]

  v4 = icon;
  v5 = disconnectMaker;
  v6 = area;
  v7 = CTaskSystem::Entry(
         &this->m_TS,
         (int (__fastcall *)(GENERAL_TASK *))GT_ReadRankMatchWinMonthly,
         area,
         disconnectMaker,
         v17);
  v8 = v7;
  if ( v7 )
  {
    pBuffer = (Fw::cRankingReadRequest *)v7->pBuffer;
    BYTE1(pBuffer[2].m_User.m_NpIdNum) = v6;
    LOBYTE(pBuffer[2].m_User.m_NpIdNum) = v4;
    BYTE2(pBuffer[2].m_Friend.m_FriendNum) = v5;
    *(_QWORD *)&pBuffer->m_BoardId = 6i64;
    pBuffer->m_User.m_NpIdNum = 1;
    v10 = (Fw::ONLINEID *)aligned_malloc(8ui64, 0x20ui64);
    pBuffer->m_User.m_pNpIdArray = &v10->data;
    if ( !v10 )
      goto $error_ReadRankingRankingRankMatchWinMonthly;
    data = (Fw::HeapMemory *)Fw::NetworkCommon::m_NpOnlineId.data;
    v10->data = Fw::NetworkCommon::m_NpOnlineId.data;
    Fw::RankingRead::NewWork(data);
    if ( v12 )
    {
      v14 = Fw::RankingRead::m_CycleWorkHandle + 1;
      if ( Fw::RankingRead::m_CycleWorkHandle + 1 > 0x1FFFFFF )
        v14 = 0x1000000;
      Fw::RankingRead::m_CycleWorkHandle = v14;
      if ( !Fw::cRankingReadWork::beginReadUser(v12, pBuffer, (Fw::HeapMemory *)v14, v13) )
        v14 = 0;
    }
    else
    {
      v14 = 0;
    }
    pBuffer[1].m_BoardId = v14;
    if ( !v14 )
    {
$error_ReadRankingRankingRankMatchWinMonthly:
      m_pNpIdArray = pBuffer->m_User.m_pNpIdArray;
      if ( m_pNpIdArray )
      {
        aligned_free(m_pNpIdArray);
        pBuffer->m_User.m_pNpIdArray = 0i64;
      }
      iStat = v8->iStat;
      if ( (iStat & 1) != 0 )
        v8->iStat = iStat | 6;
    }
  }
}

void __fastcall AppMain::SetBattleGradeForSkipGradeSaveData(AppMain *this)
{
  unsigned int v2; // ecx
  int v3; // eax
  int v4; // edx
  int point; // ecx
  int v6; // edx
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // ecx

  if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x20000000) != 0 )
  {
    v2 = this->SaveDataMain.PlayerData.m_RankMatchWin ^ 0x7B48A35E ^ (LOWORD(this->SaveDataMain.PlayerData.m_RankMatchWin) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchWin ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->SaveDataMain.PlayerData.m_RankMatchWin) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchWin ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v3 = (v2 ^ (v2 >> 7)) & 0x550055;
    v4 = v2 ^ (v3 << 7);
    point = 0;
    v6 = v3 ^ v4;
    if ( _GradeSkipWinTable[0].win > v6 )
    {
      if ( dword_140A5A920 > v6 )
      {
        if ( dword_140A5A928 > v6 )
        {
          if ( dword_140A5A930 > v6 )
          {
LABEL_11:
            v8 = point ^ (point ^ (point >> 7)) & 0x550055 ^ (((point ^ (point >> 7)) & 0x550055) << 7);
            v9 = ((unsigned __int16)(point ^ (point ^ (point >> 7)) & 0x55 ^ ((((unsigned __int16)point ^ (unsigned __int16)(point >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v8 >> 14)) & 0xCCCC;
            this->SaveDataMain.PlayerData.m_RankMatchRankPoint = v8 ^ v9 ^ (v9 << 14) ^ 0x7B48A35E;
            AppMain::CheckGradePoint4Trophy(this);
            return;
          }
          v7 = dword_140A5A934;
        }
        else
        {
          v7 = dword_140A5A92C;
        }
      }
      else
      {
        v7 = dword_140A5A924;
      }
    }
    else
    {
      v7 = dword_140A5A91C;
    }
    point = _grade_change_table[v7].point;
    goto LABEL_11;
  }
}

void __fastcall AppMain::SetTusFriendReplayStatusFlag(AppMain *this, __int64 time, int a3, int a4)
{
  GENERAL_TASK *v4; // rax
  GENERAL_TASK *v5; // rsi
  char *pBuffer; // r14
  _DWORD *v7; // rax
  void *v8; // rax
  bool v9; // dl
  bool v10; // zf
  _DWORD *v11; // rcx
  int v12; // eax
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  int iStat; // eax
  GENERAL_TASK *v17; // [rsp+20h] [rbp-18h]

  v4 = CTaskSystem::Entry(
         &this->m_TS,
         (int (__fastcall *)(GENERAL_TASK *))GT_TusSetLiveStreamingStatusFlag,
         a3,
         a4,
         v17);
  v5 = v4;
  if ( v4 )
  {
    pBuffer = (char *)v4->pBuffer;
    v7 = aligned_malloc(8ui64, 0x20ui64);
    if ( v7 )
    {
      v7[1] &= 0xFF0FFFFF;
      *((_BYTE *)v7 + 7) = 0;
      v7[1] &= 0xFFF00000;
      *v7 = 0;
    }
    else
    {
      v7 = 0i64;
    }
    *((_QWORD *)pBuffer + 3) = v7;
    *((_QWORD *)pBuffer + 2) = aligned_malloc(4ui64, 0x20ui64);
    v8 = aligned_malloc(8ui64, 0x20ui64);
    v10 = *((_QWORD *)pBuffer + 3) == 0i64;
    *((_QWORD *)pBuffer + 4) = v8;
    if ( v10
      || (v11 = (_DWORD *)*((_QWORD *)pBuffer + 2)) == 0i64
      || !v8
      || (*((_DWORD *)pBuffer + 2) = 1,
          *v11 = 1,
          (*((Fw::ONLINEID **)pBuffer + 3))->data = Fw::NetworkCommon::m_NpOnlineId.data,
          **((_QWORD **)pBuffer + 4) = 0i64,
          v12 = Fw::TusWrite::TusBeginWriteMultiSlotVariable((const Fw::cTusWriteRequest *)(pBuffer + 8), v9),
          (*(_DWORD *)pBuffer = v12) == 0) )
    {
      v13 = (void *)*((_QWORD *)pBuffer + 4);
      if ( v13 )
      {
        aligned_free(v13);
        *((_QWORD *)pBuffer + 4) = 0i64;
      }
      v14 = (void *)*((_QWORD *)pBuffer + 2);
      if ( v14 )
      {
        aligned_free(v14);
        *((_QWORD *)pBuffer + 2) = 0i64;
      }
      v15 = (void *)*((_QWORD *)pBuffer + 3);
      if ( v15 )
      {
        aligned_free(v15);
        *((_QWORD *)pBuffer + 3) = 0i64;
      }
      iStat = v5->iStat;
      if ( (iStat & 1) != 0 )
        v5->iStat = iStat | 6;
    }
  }
}

void __fastcall AppMain::SetTusGalleryFlag(AppMain *this, __int64 a2, int a3, int a4)
{
  GENERAL_TASK *v5; // rax
  GENERAL_TASK *v6; // r14
  char *pBuffer; // r15
  _DWORD *v8; // rax
  void *v9; // rax
  Fw::ONLINEID *v10; // rcx
  __int64 v11; // r10
  unsigned int v12; // er9
  int v13; // er8
  unsigned int v14; // er9
  __int64 v15; // r10
  int i; // er8
  unsigned int v17; // er9
  int v18; // er8
  __int64 v19; // r10
  unsigned int v20; // er9
  int v21; // er8
  __int64 v22; // r10
  unsigned int v23; // er9
  int v24; // er8
  __int64 v25; // r10
  unsigned int v26; // er9
  int v27; // er8
  __int64 v28; // r10
  unsigned int v29; // er9
  int v30; // er8
  __int64 v31; // r10
  __int64 v32; // r11
  unsigned int v33; // er10
  int j; // er9
  _OWORD *v35; // rsi
  bool v36; // dl
  int v37; // eax
  void *v38; // rcx
  void *v39; // rcx
  void *v40; // rcx
  int iStat; // eax
  GENERAL_TASK *v42; // [rsp+20h] [rbp-18h]

  v5 = CTaskSystem::Entry(&this->m_TS, (int (__fastcall *)(GENERAL_TASK *))GT_TusSetGalleryFlag, a3, a4, v42);
  v6 = v5;
  if ( v5 )
  {
    pBuffer = (char *)v5->pBuffer;
    v8 = aligned_malloc(8ui64, 0x20ui64);
    if ( v8 )
    {
      v8[1] &= 0xFF0FFFFF;
      *((_BYTE *)v8 + 7) = 0;
      v8[1] &= 0xFFF00000;
      *v8 = 0;
    }
    *((_QWORD *)pBuffer + 7) = v8;
    *((_QWORD *)pBuffer + 6) = aligned_malloc(0x20ui64, 0x20ui64);
    v9 = aligned_malloc(0x40ui64, 0x20ui64);
    v10 = (Fw::ONLINEID *)*((_QWORD *)pBuffer + 7);
    *((_QWORD *)pBuffer + 8) = v9;
    if ( !v10 || !*((_QWORD *)pBuffer + 6) || !v9 )
      goto $error_SetTusGalleryFlag;
    v11 = 0i64;
    v10->data = Fw::NetworkCommon::m_NpOnlineId.data;
    v12 = 0;
    *((_DWORD *)pBuffer + 10) = 8;
    v13 = 63;
    **((_DWORD **)pBuffer + 6) = 2;
    *(_DWORD *)(*((_QWORD *)pBuffer + 6) + 4i64) = 3;
    *(_DWORD *)(*((_QWORD *)pBuffer + 6) + 8i64) = 4;
    *(_DWORD *)(*((_QWORD *)pBuffer + 6) + 12i64) = 5;
    *(_DWORD *)(*((_QWORD *)pBuffer + 6) + 16i64) = 6;
    *(_DWORD *)(*((_QWORD *)pBuffer + 6) + 20i64) = 7;
    *(_DWORD *)(*((_QWORD *)pBuffer + 6) + 24i64) = 8;
    *(_DWORD *)(*((_QWORD *)pBuffer + 6) + 28i64) = 9;
    do
    {
      if ( ((0x80000000 >> (v12 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v12 >> 5]) != 0 )
        _bittestandset64(&v11, v13);
      ++v12;
      --v13;
    }
    while ( v13 > -1 );
    v14 = 64;
    **((_QWORD **)pBuffer + 8) = v11;
    v15 = 0i64;
    for ( i = 127; i > 63; --i )
    {
      if ( ((0x80000000 >> (v14 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v14 >> 5]) != 0 )
        _bittestandset64(&v15, i);
      ++v14;
    }
    v17 = 128;
    *(_QWORD *)(*((_QWORD *)pBuffer + 8) + 8i64) = v15;
    v18 = 191;
    v19 = 0i64;
    do
    {
      if ( ((0x80000000 >> (v17 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v17 >> 5]) != 0 )
        _bittestandset64(&v19, v18);
      ++v17;
      --v18;
    }
    while ( v18 > 127 );
    v20 = 192;
    *(_QWORD *)(*((_QWORD *)pBuffer + 8) + 16i64) = v19;
    v21 = 255;
    v22 = 0i64;
    do
    {
      if ( ((0x80000000 >> (v20 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v20 >> 5]) != 0 )
        _bittestandset64(&v22, v21);
      ++v20;
      --v21;
    }
    while ( v21 > 191 );
    v23 = 256;
    *(_QWORD *)(*((_QWORD *)pBuffer + 8) + 24i64) = v22;
    v24 = 319;
    v25 = 0i64;
    do
    {
      if ( ((0x80000000 >> (v23 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v23 >> 5]) != 0 )
        _bittestandset64(&v25, v24);
      ++v23;
      --v24;
    }
    while ( v24 > 255 );
    v26 = 320;
    *(_QWORD *)(*((_QWORD *)pBuffer + 8) + 32i64) = v25;
    v27 = 383;
    v28 = 0i64;
    do
    {
      if ( ((0x80000000 >> (v26 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v26 >> 5]) != 0 )
        _bittestandset64(&v28, v27);
      ++v26;
      --v27;
    }
    while ( v27 > 319 );
    v29 = 384;
    *(_QWORD *)(*((_QWORD *)pBuffer + 8) + 40i64) = v28;
    v30 = 447;
    v31 = 0i64;
    do
    {
      if ( ((0x80000000 >> (v29 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v29 >> 5]) != 0 )
        _bittestandset64(&v31, v30);
      ++v29;
      --v30;
    }
    while ( v30 > 383 );
    v32 = 0i64;
    *(_QWORD *)(*((_QWORD *)pBuffer + 8) + 48i64) = v31;
    v33 = 448;
    for ( j = 511; j > 447; --j )
    {
      if ( ((0x80000000 >> (v33 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v33 >> 5]) != 0 )
        _bittestandset64(&v32, j);
      ++v33;
    }
    *(_QWORD *)(*((_QWORD *)pBuffer + 8) + 56i64) = v32;
    v35 = (_OWORD *)*((_QWORD *)pBuffer + 8);
    if ( !memcmp(this->galleryItemTmp, v35, 0x40ui64)
      || (*(_OWORD *)this->galleryItemTmp = *v35,
          *(_OWORD *)&this->galleryItemTmp[2] = v35[1],
          *(_OWORD *)&this->galleryItemTmp[4] = v35[2],
          *(_OWORD *)&this->galleryItemTmp[6] = v35[3],
          v37 = Fw::TusWrite::TusBeginWriteMultiSlotVariable((const Fw::cTusWriteRequest *)(pBuffer + 40), v36),
          (*(_DWORD *)pBuffer = v37) == 0) )
    {
$error_SetTusGalleryFlag:
      v38 = (void *)*((_QWORD *)pBuffer + 8);
      if ( v38 )
      {
        aligned_free(v38);
        *((_QWORD *)pBuffer + 8) = 0i64;
      }
      v39 = (void *)*((_QWORD *)pBuffer + 6);
      if ( v39 )
      {
        aligned_free(v39);
        *((_QWORD *)pBuffer + 6) = 0i64;
      }
      v40 = (void *)*((_QWORD *)pBuffer + 7);
      if ( v40 )
      {
        aligned_free(v40);
        *((_QWORD *)pBuffer + 7) = 0i64;
      }
      iStat = v6->iStat;
      if ( (iStat & 1) != 0 )
        v6->iStat = iStat | 6;
    }
  }
}

void __fastcall AppMain::SetTusLiveStreamingStatusFlag(AppMain *this, bool statusFlag, int a3, int a4)
{
  GENERAL_TASK *v5; // rax
  GENERAL_TASK *v6; // rsi
  char *pBuffer; // r14
  _DWORD *v8; // rax
  void *v9; // rax
  bool v10; // dl
  bool v11; // zf
  _DWORD *v12; // rcx
  int v13; // eax
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  int iStat; // eax
  GENERAL_TASK *v18; // [rsp+20h] [rbp-18h]

  v5 = CTaskSystem::Entry(
         &this->m_TS,
         (int (__fastcall *)(GENERAL_TASK *))GT_TusSetLiveStreamingStatusFlag,
         a3,
         a4,
         v18);
  v6 = v5;
  if ( v5 )
  {
    pBuffer = (char *)v5->pBuffer;
    v8 = aligned_malloc(8ui64, 0x20ui64);
    if ( v8 )
    {
      v8[1] &= 0xFF0FFFFF;
      *((_BYTE *)v8 + 7) = 0;
      v8[1] &= 0xFFF00000;
      *v8 = 0;
    }
    *((_QWORD *)pBuffer + 3) = v8;
    *((_QWORD *)pBuffer + 2) = aligned_malloc(4ui64, 0x20ui64);
    v9 = aligned_malloc(8ui64, 0x20ui64);
    v11 = *((_QWORD *)pBuffer + 3) == 0i64;
    *((_QWORD *)pBuffer + 4) = v9;
    if ( v11
      || (v12 = (_DWORD *)*((_QWORD *)pBuffer + 2)) == 0i64
      || !v9
      || (*((_DWORD *)pBuffer + 2) = 1,
          *v12 = 11,
          (*((Fw::ONLINEID **)pBuffer + 3))->data = Fw::NetworkCommon::m_NpOnlineId.data,
          **((_QWORD **)pBuffer + 4) = statusFlag,
          v13 = Fw::TusWrite::TusBeginWriteMultiSlotVariable((const Fw::cTusWriteRequest *)(pBuffer + 8), v10),
          (*(_DWORD *)pBuffer = v13) == 0) )
    {
      v14 = (void *)*((_QWORD *)pBuffer + 4);
      if ( v14 )
      {
        aligned_free(v14);
        *((_QWORD *)pBuffer + 4) = 0i64;
      }
      v15 = (void *)*((_QWORD *)pBuffer + 2);
      if ( v15 )
      {
        aligned_free(v15);
        *((_QWORD *)pBuffer + 2) = 0i64;
      }
      v16 = (void *)*((_QWORD *)pBuffer + 3);
      if ( v16 )
      {
        aligned_free(v16);
        *((_QWORD *)pBuffer + 3) = 0i64;
      }
      iStat = v6->iStat;
      if ( (iStat & 1) != 0 )
        v6->iStat = iStat | 6;
    }
  }
}

GENERAL_TASK *__fastcall AppMain::TusGetOnlineProfile(
        AppMain *this,
        unsigned __int64 *pNpId,
        OnlineProfileData *pBuf,
        AppMain::ONLINEPROFILE_LOAD_STATE *pLoadingState)
{
  GENERAL_TASK *result; // rax
  GENERAL_TASK *v8; // rsi
  char *pBuffer; // r14
  _DWORD *v10; // rax
  void *v11; // rax
  bool v12; // r8
  unsigned __int64 *v13; // rcx
  void **v14; // rbx
  __int64 v15; // rdx
  __m128i si128; // xmm3
  __m128i *v17; // rax
  __m128i v18; // xmm1
  __int64 v19; // rcx
  int MultiSlotVariable; // eax
  void *v21; // rcx
  int iStat; // eax
  GENERAL_TASK *v23; // [rsp+20h] [rbp-38h]

  if ( !pNpId || !pBuf || !pLoadingState )
    return 0i64;
  result = CTaskSystem::Entry(
             &this->m_TS,
             (int (__fastcall *)(GENERAL_TASK *))GT_TusGetOnlineProfileData,
             (int)pBuf,
             (int)pLoadingState,
             v23);
  v8 = result;
  if ( result )
  {
    pBuffer = (char *)result->pBuffer;
    v10 = aligned_malloc(8ui64, 0x20ui64);
    if ( v10 )
    {
      v10[1] &= 0xFF0FFFFF;
      *((_BYTE *)v10 + 7) = 0;
      v10[1] &= 0xFFF00000;
      *v10 = 0;
    }
    *((_QWORD *)pBuffer + 3) = v10;
    v11 = aligned_malloc(0x30ui64, 0x20ui64);
    v13 = (unsigned __int64 *)*((_QWORD *)pBuffer + 3);
    v14 = (void **)(pBuffer + 16);
    *((_QWORD *)pBuffer + 2) = v11;
    if ( !v13 || !v11 )
      goto LABEL_27;
    v15 = 0i64;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    *v13 = *pNpId;
    *((_DWORD *)pBuffer + 2) = 12;
    v17 = (__m128i *)*v14;
    if ( *v14 > v14 || (char *)*v14 + 44 < (char *)v14 )
    {
      v18 = _mm_add_epi32(_mm_add_epi32(_mm_load_si128((const __m128i *)&_xmm), si128), (__m128i)_xmm);
      v15 = 8i64;
      *v17 = _mm_add_epi32(si128, (__m128i)_xmm);
      v17[1] = v18;
    }
    if ( (int)v15 < 12i64 )
    {
      v19 = 4i64 * (int)v15;
      LODWORD(v15) = v15 + 12;
      do
      {
        *(_DWORD *)((char *)*v14 + v19) = v15;
        v15 = (unsigned int)(v15 + 1);
        v19 += 4i64;
      }
      while ( v19 < 48 );
    }
    *((_QWORD *)pBuffer + 9) = pBuf;
    *((_QWORD *)pBuffer + 10) = pLoadingState;
    *pLoadingState = ONLINEPROFILE_LOAD_STATE_LOAD;
    MultiSlotVariable = Fw::TitleStorageSystem::TusBeginReadMultiSlotVariable(
                          (const Fw::cTusReadRequest *)(pBuffer + 8),
                          (Fw::HeapMemory *)v15,
                          v12);
    *(_DWORD *)pBuffer = MultiSlotVariable;
    if ( MultiSlotVariable )
    {
      return v8;
    }
    else
    {
LABEL_27:
      if ( *v14 )
      {
        aligned_free(*v14);
        *v14 = 0i64;
      }
      v21 = (void *)*((_QWORD *)pBuffer + 3);
      if ( v21 )
      {
        aligned_free(v21);
        *((_QWORD *)pBuffer + 3) = 0i64;
      }
      iStat = v8->iStat;
      if ( (iStat & 1) != 0 )
        v8->iStat = iStat | 6;
      return 0i64;
    }
  }
  return result;
}

void __fastcall AppMain::TusSetOnlineProfile(AppMain *this)
{
  clasChkDisconOnlineSv *v1; // rdx
  __int64 *onlineProfileTemp; // rsi
  int v4; // er8
  int v5; // er9
  GENERAL_TASK *v6; // rax
  GENERAL_TASK *v7; // rbp
  char *pBuffer; // r14
  _DWORD *v9; // rax
  void **v10; // rbx
  void *v11; // rax
  Fw::ONLINEID *v12; // rcx
  int v13; // edx
  __m128i si128; // xmm3
  __m128i *v15; // rax
  __m128i v16; // xmm1
  __int64 v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  int v24; // eax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  void *v30; // rcx
  void *v31; // rcx
  int iStat; // eax
  GENERAL_TASK *patch_111; // [rsp+20h] [rbp-A8h]
  __int64 pBuf[2]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v35; // [rsp+50h] [rbp-78h]
  __int128 v36; // [rsp+60h] [rbp-68h]
  __int128 v37; // [rsp+70h] [rbp-58h]
  __int128 v38; // [rsp+80h] [rbp-48h]
  __int128 v39; // [rsp+90h] [rbp-38h]

  v1 = clasChkDisconOnlineSv::_instance;
  if ( !clasChkDisconOnlineSv::_instance )
  {
    v1 = (clasChkDisconOnlineSv *)operator new((unsigned int)((_DWORD)clasChkDisconOnlineSv::_instance + 2));
    clasChkDisconOnlineSv::_instance = v1;
    *v1 = 0;
  }
  AppMain::ConvertOnlineProfile(
    this,
    pBuf,
    &this->SaveDataMain.PlayerData,
    v1->m_RankmatchGameStart,
    v1->m_Patch111_OnlineProfileWrite);
  onlineProfileTemp = this->onlineProfileTemp;
  if ( memcmp(pBuf, this->onlineProfileTemp, 0x60ui64) )
  {
    v6 = CTaskSystem::Entry(
           &this->m_TS,
           (int (__fastcall *)(GENERAL_TASK *))GT_TusSetOnlineProfileData,
           v4,
           v5,
           patch_111);
    v7 = v6;
    if ( v6 )
    {
      pBuffer = (char *)v6->pBuffer;
      v9 = aligned_malloc(8ui64, 0x20ui64);
      if ( v9 )
      {
        v9[1] &= 0xFF0FFFFF;
        *((_BYTE *)v9 + 7) = 0;
        v9[1] &= 0xFFF00000;
        *v9 = 0;
      }
      else
      {
        v9 = 0i64;
      }
      *((_QWORD *)pBuffer + 7) = v9;
      v10 = (void **)(pBuffer + 48);
      *((_QWORD *)pBuffer + 6) = aligned_malloc(0x30ui64, 0x20ui64);
      v11 = aligned_malloc(0x60ui64, 0x20ui64);
      v12 = (Fw::ONLINEID *)*((_QWORD *)pBuffer + 7);
      *((_QWORD *)pBuffer + 8) = v11;
      if ( !v12 || !*v10 || !v11 )
        goto $error_TusSetOnlineSaveData;
      v13 = 0;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v12->data = Fw::NetworkCommon::m_NpOnlineId.data;
      *((_DWORD *)pBuffer + 10) = 12;
      v15 = (__m128i *)*v10;
      if ( *v10 > v10 || (char *)*v10 + 44 < (char *)v10 )
      {
        v16 = _mm_add_epi32(_mm_add_epi32(_mm_load_si128((const __m128i *)&_xmm), si128), (__m128i)_xmm);
        v13 = 8;
        *v15 = _mm_add_epi32(si128, (__m128i)_xmm);
        v15[1] = v16;
      }
      if ( v13 < 12i64 )
      {
        v17 = 4i64 * v13;
        v13 += 12;
        do
        {
          *(_DWORD *)((char *)*v10 + v17) = v13++;
          v17 += 4i64;
        }
        while ( v17 < 48 );
      }
      v18 = (_OWORD *)*((_QWORD *)pBuffer + 8);
      v19 = v35;
      *v18 = *(_OWORD *)pBuf;
      v20 = v36;
      v18[1] = v19;
      v21 = v37;
      v18[2] = v20;
      v22 = v38;
      v18[3] = v21;
      v23 = v39;
      v18[4] = v22;
      v18[5] = v23;
      v24 = Fw::TusWrite::TusBeginWriteMultiSlotVariable((const Fw::cTusWriteRequest *)(pBuffer + 40), v13);
      *(_DWORD *)pBuffer = v24;
      if ( v24 )
      {
        v25 = v35;
        *(_OWORD *)onlineProfileTemp = *(_OWORD *)pBuf;
        v26 = v36;
        *((_OWORD *)onlineProfileTemp + 1) = v25;
        v27 = v37;
        *((_OWORD *)onlineProfileTemp + 2) = v26;
        v28 = v38;
        *((_OWORD *)onlineProfileTemp + 3) = v27;
        v29 = v39;
        *((_OWORD *)onlineProfileTemp + 4) = v28;
        *((_OWORD *)onlineProfileTemp + 5) = v29;
      }
      else
      {
$error_TusSetOnlineSaveData:
        v30 = (void *)*((_QWORD *)pBuffer + 8);
        if ( v30 )
        {
          aligned_free(v30);
          *((_QWORD *)pBuffer + 8) = 0i64;
        }
        if ( *v10 )
        {
          aligned_free(*v10);
          *v10 = 0i64;
        }
        v31 = (void *)*((_QWORD *)pBuffer + 7);
        if ( v31 )
        {
          aligned_free(v31);
          *((_QWORD *)pBuffer + 7) = 0i64;
        }
        iStat = v7->iStat;
        if ( (iStat & 1) != 0 )
          v7->iStat = iStat | 6;
      }
    }
  }
}

__int64 __fastcall AppMain::UpdateRankMatchMaxWinsSaveData(AppMain *this)
{
  int m_RankMatchWins; // edx
  unsigned int v3; // ecx
  unsigned int v4; // er8
  int v5; // er9
  unsigned int v6; // edx
  int v7; // ecx

  m_RankMatchWins = this->SaveDataMain.PlayerData.m_RankMatchWins;
  v3 = this->SaveDataMain.PlayerData.m_RankMatchMaxWins ^ 0x7B48A35E;
  v4 = m_RankMatchWins ^ 0x7B48A35E ^ ((unsigned __int16)m_RankMatchWins ^ 0xA35E ^ (unsigned __int16)((m_RankMatchWins ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)m_RankMatchWins ^ 0xA35E ^ (unsigned __int16)((m_RankMatchWins ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v5 = (v4 ^ (v4 >> 7)) & 0x550055 ^ v4 ^ (((v4 ^ (v4 >> 7)) & 0x550055) << 7);
  v6 = v3 ^ ((unsigned __int16)v3 ^ (unsigned __int16)(v3 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v3 ^ (unsigned __int16)(v3 >> 14)) & 0xCCCC) << 14);
  if ( (int)((v6 ^ (v6 >> 7)) & 0x550055 ^ v6 ^ (((v6 ^ (v6 >> 7)) & 0x550055) << 7)) < v5 )
  {
    v7 = 99999999;
    if ( v5 <= 99999999 )
    {
      v7 = (v4 ^ (v4 >> 7)) & 0x550055 ^ v4 ^ (((v4 ^ (v4 >> 7)) & 0x550055) << 7);
      if ( v5 < 0 )
        v7 = 0;
    }
    this->SaveDataMain.PlayerData.m_RankMatchMaxWins = v7 ^ (v7 ^ (v7 >> 7)) & 0x550055 ^ (((v7 ^ (v7 >> 7)) & 0x550055) << 7) ^ ((unsigned __int16)(v7 ^ (v7 ^ (v7 >> 7)) & 0x55 ^ ((((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)((v7 ^ (v7 ^ (v7 >> 7)) & 0x550055 ^ (((v7 ^ (v7 >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(v7 ^ (v7 ^ (v7 >> 7)) & 0x55 ^ ((((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)((v7 ^ (v7 ^ (v7 >> 7)) & 0x550055 ^ (((v7 ^ (v7 >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
  }
  return (unsigned int)v5;
}

