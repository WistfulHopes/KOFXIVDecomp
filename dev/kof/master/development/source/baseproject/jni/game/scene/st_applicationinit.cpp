#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/easycommand.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/util/easycommand.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmotion.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/image.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogltexture.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cfile.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/onlinesample/st_onlinesearchroomsetting.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/onlinesample/st_onlinecreateroomsetting.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A06FF
void AppMain::ApplicationInit(); // 0x1401A7A20//decompilation failure at 1408A06FF!
void __fastcall std::_Uninitialized_default_fill_n1<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *,unsigned __int64,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>>>(
        extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *_First,
        unsigned __int64 _Count,
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > *_Al,
        std::integral_constant<bool,0> __formal)
{
  while ( _Count )
  {
    if ( _First )
    {
      _First->m_isNoCache = 0;
      extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::GetSharedEmpty(&_First->m_body);
    }
    --_Count;
    ++_First;
  }
}

void __fastcall std::_Uninitialized_default_fill_n1<extension::BasicFutureObject<OGLMirror,void> *,unsigned __int64,std::allocator<extension::BasicFutureObject<OGLMirror,void>>>(
        extension::BasicFutureObject<OGLMirror,void> *_First,
        unsigned __int64 _Count,
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLMirror,void> > > *_Al,
        std::integral_constant<bool,0> __formal)
{
  while ( _Count )
  {
    if ( _First )
    {
      _First->m_isNoCache = 0;
      extension::BasicFutureObject<OGLMirror,void>::Body::GetSharedEmpty(&_First->m_body);
    }
    --_Count;
    ++_First;
  }
}

void __fastcall std::_Uninitialized_default_fill_n1<extension::BasicFutureObject<OGLMotion,void> *,unsigned __int64,std::allocator<extension::BasicFutureObject<OGLMotion,void>>>(
        extension::BasicFutureObject<OGLMotion,void> *_First,
        unsigned __int64 _Count,
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLMotion,void> > > *_Al,
        std::integral_constant<bool,0> __formal)
{
  while ( _Count )
  {
    if ( _First )
    {
      _First->m_isNoCache = 0;
      extension::BasicFutureObject<OGLMotion,void>::Body::GetSharedEmpty(&_First->m_body);
    }
    --_Count;
    ++_First;
  }
}

void __fastcall std::_Uninitialized_default_fill_n1<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *,unsigned __int64,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>>(
        extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *_First,
        unsigned __int64 _Count,
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > *_Al,
        std::integral_constant<bool,0> __formal)
{
  while ( _Count )
  {
    if ( _First )
    {
      _First->m_isNoCache = 0;
      extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::GetSharedEmpty(&_First->m_body);
    }
    --_Count;
    ++_First;
  }
}

extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *__fastcall std::_Uninitialized_move_al_unchecked1<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *,extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *,std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>>(
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *_First,
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *_Last,
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *_Dest,
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *_Al)
{
  extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> *p_m_body; // r9
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *m_ptr; // rcx

  if ( _First != _Last )
  {
    p_m_body = &_First->m_body;
    do
    {
      if ( _Dest )
      {
        _Dest->m_isNoCache = BYTE1(p_m_body[-1].m_ptr);
        m_ptr = p_m_body->m_ptr;
        _Dest->m_body = (extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>)p_m_body->m_ptr;
        if ( m_ptr )
          _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
      }
      ++_Dest;
      p_m_body += 2;
    }
    while ( &p_m_body[-1] != (extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> *)_Last );
  }
  return _Dest;
}

void __fastcall extension::AsyncContent<OGLMirror>::~AsyncContent<OGLMirror>(extension::AsyncContent<OGLMirror> *this)
{
  unsigned __int64 v2; // rdx
  OGLMirror *Myval2; // rdi
  unsigned __int64 v4; // rdx
  OGLMirror *v5; // rdi

  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, 1);
  Myval2 = this->m_data._Mypair._Myval2;
  this->m_data._Mypair._Myval2 = 0i64;
  if ( Myval2 )
  {
    OGLMirror::finalize(Myval2, v2);
    operator delete(Myval2, 0x20ui64);
  }
  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, -1);
  v5 = this->m_data._Mypair._Myval2;
  if ( v5 )
  {
    OGLMirror::finalize(this->m_data._Mypair._Myval2, v4);
    operator delete(v5, 0x20ui64);
  }
  std::string::~string((std::string *)&this->m_loadOptionString);
  std::string::~string((std::string *)&this->m_name);
}

void __fastcall extension::AsyncContent<OGLMotion>::~AsyncContent<OGLMotion>(extension::AsyncContent<OGLMotion> *this)
{
  unsigned __int64 v2; // rdx
  OGLMotion *Myval2; // rdi
  unsigned __int64 v4; // rdx
  OGLMotion *v5; // rdi

  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, 1);
  Myval2 = this->m_data._Mypair._Myval2;
  this->m_data._Mypair._Myval2 = 0i64;
  if ( Myval2 )
  {
    OGLMotion::finalize(Myval2, v2);
    operator delete(Myval2, 0x30ui64);
  }
  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, -1);
  v5 = this->m_data._Mypair._Myval2;
  if ( v5 )
  {
    OGLMotion::finalize(this->m_data._Mypair._Myval2, v4);
    operator delete(v5, 0x30ui64);
  }
  std::string::~string((std::string *)&this->m_loadOptionString);
  std::string::~string((std::string *)&this->m_name);
}

void __fastcall extension::RefCountablePtr<extension::AsyncContent<OGLMirror>>::~RefCountablePtr<extension::AsyncContent<OGLMirror>>(
        extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > *this)
{
  extension::AsyncContent<OGLMirror> *m_ptr; // rbx

  m_ptr = this->m_ptr;
  if ( this->m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( m_ptr )
    {
      extension::AsyncContent<OGLMirror>::~AsyncContent<OGLMirror>(m_ptr);
      operator delete(m_ptr, 0x68ui64);
    }
  }
}

void __fastcall extension::RefCountablePtr<extension::AsyncContent<OGLMotion>>::~RefCountablePtr<extension::AsyncContent<OGLMotion>>(
        extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > *this)
{
  extension::AsyncContent<OGLMotion> *m_ptr; // rbx

  m_ptr = this->m_ptr;
  if ( this->m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( m_ptr )
    {
      extension::AsyncContent<OGLMotion>::~AsyncContent<OGLMotion>(m_ptr);
      operator delete(m_ptr, 0x68ui64);
    }
  }
}

void __fastcall std::unique_ptr<OGLMirror>::~unique_ptr<OGLMirror>(
        std::unique_ptr<OGLMirror> *this,
        unsigned __int64 a2)
{
  OGLMirror *Myval2; // rbx

  Myval2 = this->_Mypair._Myval2;
  if ( this->_Mypair._Myval2 )
  {
    OGLMirror::finalize(this->_Mypair._Myval2, a2);
    operator delete(Myval2, 0x20ui64);
  }
}

void __fastcall std::unique_ptr<OGLMotion>::~unique_ptr<OGLMotion>(
        std::unique_ptr<OGLMotion> *this,
        unsigned __int64 a2)
{
  OGLMotion *Myval2; // rbx

  Myval2 = this->_Mypair._Myval2;
  if ( this->_Mypair._Myval2 )
  {
    OGLMotion::finalize(this->_Mypair._Myval2, a2);
    operator delete(Myval2, 0x30ui64);
  }
}

void __fastcall extension::BasicFutureObject<OGLMirror,void>::Body::~Body(
        extension::BasicFutureObject<OGLMirror,void>::Body *this)
{
  extension::AsyncContent<OGLMirror> *m_ptr; // rdx
  signed __int64 My_val; // rax
  unsigned __int64 v4; // rtt
  extension::AsyncContent<OGLMirror> *v5; // rbx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // rcx
  signed __int64 v7; // rsi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::BasicFutureObject<OGLMirror,void>::Body_vtbl *)&extension::BasicFutureObject<OGLMirror,void>::Body::`vftable';
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
    extension::AsyncContent<OGLMirror>::~AsyncContent<OGLMirror>(v5);
    operator delete(v5, 0x68ui64);
  }
  this->__vftable = (extension::BasicFutureObject<OGLMirror,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  this->m_refCount.m_ptr->m_principal = 0i64;
  v6 = this->m_refCount.m_ptr;
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64);
    if ( v7 == 1 )
      operator delete(v6, 0x18ui64);
  }
}

void __fastcall extension::BasicFutureObject<OGLMotion,void>::Body::~Body(
        extension::BasicFutureObject<OGLMotion,void>::Body *this)
{
  extension::AsyncContent<OGLMotion> *m_ptr; // rdx
  signed __int64 My_val; // rax
  unsigned __int64 v4; // rtt
  extension::AsyncContent<OGLMotion> *v5; // rbx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // rcx
  signed __int64 v7; // rsi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::BasicFutureObject<OGLMotion,void>::Body_vtbl *)&extension::BasicFutureObject<OGLMotion,void>::Body::`vftable';
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
    extension::AsyncContent<OGLMotion>::~AsyncContent<OGLMotion>(v5);
    operator delete(v5, 0x68ui64);
  }
  this->__vftable = (extension::BasicFutureObject<OGLMotion,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  this->m_refCount.m_ptr->m_principal = 0i64;
  v6 = this->m_refCount.m_ptr;
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64);
    if ( v7 == 1 )
      operator delete(v6, 0x18ui64);
  }
}

void __fastcall AppMain::ApplicationInit(AppMain *this)
{
  TexString **m_TexStr; // rdi
  __int64 v3; // rsi
  int v4; // edx
  int v5; // er8
  TexString *v6; // rax
  int v7; // edx
  int v8; // er8
  char *v9; // rdi
  int v10; // er8
  int fixed; // eax
  unsigned __int64 v12; // rdx
  void *pData; // rsi
  unsigned __int64 v14; // rdx
  Image *pSystemTex; // rdi
  char *fileName; // rcx
  char *v17; // rax
  unsigned __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 g_cameraCount; // rcx
  unsigned __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 g_lightCount; // rcx
  unsigned __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rcx
  BattleSystem::BattleController *v31; // rax
  _BYTE *v32; // rax
  BattleSystem::PauseController *v33; // r9
  __int64 v34; // r8
  _QWORD *v35; // rcx
  _QWORD *v36; // rdx
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  Collision::HitRectCollection *v39; // rdi
  _QWORD *v40; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption> *v41; // rdi
  EasyIndicator *v42; // rdi
  _QWORD *v43; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption> *v44; // rsi
  EasyCommand *v45; // rax
  AppMain::ENTRY_SETTING *p_SearchSettingHistory; // rdi
  GAME_RULE MatchingGameRule; // esi
  __int32 v48; // esi
  __int32 v49; // esi
  const char *CString; // rax
  char *v51; // r8
  char v52; // dl
  CFixMemoryPara pPara; // [rsp+38h] [rbp-50h] BYREF
  TexString *v54; // [rsp+90h] [rbp+8h]
  BattleSystem::BattleController *v55; // [rsp+90h] [rbp+8h]
  char *v56; // [rsp+90h] [rbp+8h]

  AppMain::createFutureAssets(this);
  this->randMT.mt[0] = time64(0i64);
  this->randMT.mti = 1;
  do
  {
    this->randMT.mt[this->randMT.mti] = this->randMT.mti
                                      + 1812433253
                                      * (*(&this->m_movieFlg + this->randMT.mti) ^ ((unsigned int)*(&this->m_movieFlg
                                                                                                  + this->randMT.mti) >> 30));
    ++this->randMT.mti;
  }
  while ( this->randMT.mti < 624 );
  s_defaultLanguage = LANGUAGE_MODE_en_US;
  this->m_iPlayTime = 0i64;
  SaveRecord_Main::setDefault(&this->SaveDataMain);
  m_TexStr = this->m_TexStr;
  v3 = 12i64;
  do
  {
    v54 = (TexString *)operator new(0x2868ui64);
    TexString::TexString(v54, this->g, 1.0);
    *m_TexStr++ = v6;
    --v3;
  }
  while ( v3 );
  CTaskSystem2D::initialize(&this->m_TS2D, v4, v5);
  CTaskSystem::initialize(&this->m_TS, v7, v8);
  v9 = (char *)operator new(0x50ui64);
  *((_QWORD *)v9 + 1) = 0i64;
  *((_QWORD *)v9 + 2) = 0i64;
  v9[24] = 1;
  *((_DWORD *)v9 + 7) = 0;
  *((_WORD *)v9 + 24) = 1;
  *((_DWORD *)v9 + 13) = 0;
  *((_QWORD *)v9 + 5) = 0i64;
  *((_WORD *)v9 + 28) = 0;
  *(_QWORD *)(v9 + 60) = 0i64;
  *((_QWORD *)v9 + 9) = 0i64;
  *(_QWORD *)v9 = &Image::`vftable';
  pPara.buf_idx = -1;
  pPara.pData = 0i64;
  fixed = CFile::loadDataFixKeep("asc.obm", &pPara, v10);
  pData = pPara.pData;
  if ( pPara.pData )
  {
    OGLTexture::loadTextureBuf((OGLTexture *)v9, (unsigned __int8 *)pPara.pData, fixed, 1285, 0i64, -1);
    operator delete(pData, v14);
  }
  this->pSystemTex = (Image *)v9;
  v9[24] = 0;
  pSystemTex = this->pSystemTex;
  if ( pSystemTex->m_TexID )
  {
    fileName = (char *)pSystemTex->m_FileInfo.fileName;
    if ( fileName )
    {
      operator delete(fileName, v12);
      pSystemTex->m_FileInfo.fileName = 0i64;
    }
    v17 = (char *)operator new[](8ui64);
    pSystemTex->m_FileInfo.fileName = v17;
    strcpy_s(v17, 8ui64, "asc.obm");
    *(_WORD *)&pSystemTex->m_FileInfo.transparent = 0;
    pSystemTex->m_FileInfo.option = 0;
  }
  AppMain::Sound_Create(this);
  AppMain::Sound_LoadCommon(this);
  if ( !this->pModel )
  {
    this->g_modelCount = 80;
    v18 = 640i64;
    if ( !is_mul_ok(0x50ui64, 8ui64) )
      v18 = -1i64;
    this->pModel = (OGLModel **)operator new[](v18);
    v19 = 0;
    if ( this->g_modelCount > 0 )
    {
      v20 = 0i64;
      do
      {
        this->pModel[v20] = 0i64;
        ++v19;
        ++v20;
      }
      while ( v19 < this->g_modelCount );
    }
  }
  if ( this->pTexture._Mypair._Myval2._Myfirst == this->pTexture._Mypair._Myval2._Mylast )
  {
    this->g_textureCount = 80;
    std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::resize(
      &this->pTexture,
      0x50ui64);
  }
  if ( this->pFigure._Mypair._Myval2._Myfirst == this->pFigure._Mypair._Myval2._Mylast )
  {
    this->g_figureCount = 40;
    std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>>::resize(&this->pFigure, 0x28ui64);
  }
  if ( this->pMotion._Mypair._Myval2._Myfirst == this->pMotion._Mypair._Myval2._Mylast )
  {
    this->g_motionCount = 40;
    std::vector<extension::BasicFutureObject<OGLMotion,void>>::resize(&this->pMotion, 0x28ui64);
  }
  if ( this->pMirror._Mypair._Myval2._Myfirst == this->pMirror._Mypair._Myval2._Mylast )
  {
    this->g_mirrorCount = 80;
    std::vector<extension::BasicFutureObject<OGLMirror,void>>::resize(&this->pMirror, 0x50ui64);
  }
  if ( !this->pCamera )
  {
    this->g_cameraCount = 8;
    v21 = 64i64;
    if ( !is_mul_ok(8ui64, 8ui64) )
      v21 = -1i64;
    this->pCamera = (OGLMatrix **)operator new[](v21);
    g_cameraCount = this->g_cameraCount;
    v23 = 8 * g_cameraCount;
    if ( !is_mul_ok(g_cameraCount, 8ui64) )
      v23 = -1i64;
    this->pBillboard = (OGLMatrix **)operator new[](v23);
    v24 = 0;
    if ( this->g_cameraCount > 0 )
    {
      v25 = 0i64;
      do
      {
        this->pCamera[v25] = 0i64;
        this->pBillboard[v25] = 0i64;
        ++v24;
        ++v25;
      }
      while ( v24 < this->g_cameraCount );
    }
  }
  this->pCapture = 0i64;
  if ( !this->pShadowLight )
  {
    this->g_lightCount = 8;
    v26 = 64i64;
    if ( !is_mul_ok(8ui64, 8ui64) )
      v26 = -1i64;
    this->pShadowLight = (OGLMatrix **)operator new[](v26);
    g_lightCount = this->g_lightCount;
    v28 = 8 * g_lightCount;
    if ( !is_mul_ok(g_lightCount, 8ui64) )
      v28 = -1i64;
    this->pShadowLightBillboard = (OGLMatrix **)operator new[](v28);
    v29 = 0;
    if ( this->g_lightCount > 0 )
    {
      v30 = 0i64;
      do
      {
        this->pShadowLight[v30] = 0i64;
        this->pShadowLightBillboard[v30] = 0i64;
        ++v29;
        ++v30;
      }
      while ( v29 < this->g_lightCount );
    }
  }
  if ( !BattleSystem::BattleController::instance )
  {
    v55 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v55);
    BattleSystem::BattleController::instance = v31;
  }
  if ( !BattleSystem::PauseController::instance )
  {
    v32 = operator new(0x20ui64);
    v33 = (BattleSystem::PauseController *)v32;
    v34 = 3i64;
    v35 = v32 + 8;
    v36 = v32 + 8;
    do
    {
      *v36++ = 0i64;
      --v34;
    }
    while ( v34 );
    *v32 = 0;
    v37 = v32 + 32;
    if ( v35 != v35 + 3 )
    {
      do
        *v35++ = 0i64;
      while ( v35 != v37 );
    }
    BattleSystem::PauseController::instance = v33;
  }
  if ( !Collision::HitRectCollection::instance )
  {
    v38 = operator new[](0xF8ui64);
    if ( v38 )
    {
      *v38 = 2i64;
      v39 = (Collision::HitRectCollection *)(v38 + 1);
      `eh vector constructor iterator'(
        v38 + 1,
        0x78ui64,
        2ui64,
        (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
        (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
    }
    else
    {
      v39 = 0i64;
    }
    Collision::HitRectCollection::instance = v39;
  }
  if ( !this->m_SyncMenuBG.m_MenuImage )
  {
    v40 = operator new[](0x28ui64);
    if ( v40 )
    {
      *v40 = 2i64;
      v41 = (extension::BasicFutureObject<Image,extension::FutureImageOption> *)(v40 + 1);
      `eh vector constructor iterator'(
        v40 + 1,
        0x10ui64,
        2ui64,
        (void (__fastcall *)(void *))extension::BasicFutureObject<Image,extension::FutureImageOption>::BasicFutureObject<Image,extension::FutureImageOption>,
        (void (__fastcall *)(void *))extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>);
    }
    else
    {
      v41 = 0i64;
    }
    this->m_SyncMenuBG.m_MenuImage = v41;
  }
  v42 = EasyIndicator::instance;
  if ( !EasyIndicator::instance )
  {
    v42 = (EasyIndicator *)operator new(0x150ui64);
    memset(v42->m_IndicatorStack, 0, sizeof(v42->m_IndicatorStack));
    v42->m_Image = 0i64;
    v42->m_DrawCount = 0;
    EasyIndicator::instance = v42;
  }
  if ( !v42->m_Image )
  {
    v43 = operator new[](0x38ui64);
    if ( v43 )
    {
      *v43 = 3i64;
      v44 = (extension::BasicFutureObject<Image,extension::FutureImageOption> *)(v43 + 1);
      `eh vector constructor iterator'(
        v43 + 1,
        0x10ui64,
        3ui64,
        (void (__fastcall *)(void *))extension::BasicFutureObject<Image,extension::FutureImageOption>::BasicFutureObject<Image,extension::FutureImageOption>,
        (void (__fastcall *)(void *))extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>);
    }
    else
    {
      v44 = 0i64;
    }
    v42->m_Image = v44;
  }
  v45 = EasyCommand::instance;
  if ( !EasyCommand::instance )
  {
    v45 = (EasyCommand *)operator new((unsigned int)((_DWORD)EasyCommand::instance + 12));
    *(_QWORD *)v45->m_TimeCount = 0i64;
    v45->m_CommandCount[0] = 0;
    EasyCommand::instance = v45;
  }
  *(_QWORD *)v45->m_TimeCount = 0i64;
  v45->m_CommandCount[0] = 0;
  this->m_CheatCommand = 0;
  *(_QWORD *)this->ModelRoomSettings.mView.m = 1065353216i64;
  this->ModelRoomSettings.mView.m[4] = 0.0;
  *(_QWORD *)&this->ModelRoomSettings.mView.m[8] = 0i64;
  *(_QWORD *)&this->ModelRoomSettings.mView.m[12] = 0i64;
  *(_QWORD *)&this->ModelRoomSettings.mView.m[5] = 1065353216i64;
  *(_QWORD *)&this->ModelRoomSettings.mView.m[2] = 0i64;
  *(_QWORD *)&this->ModelRoomSettings.mView.m[10] = 1065353216i64;
  this->ModelRoomSettings.mView.m[14] = 0.0;
  this->ModelRoomSettings.mView.m[7] = 0.0;
  this->ModelRoomSettings.mView.m[15] = 1.0;
  *(_QWORD *)this->ModelRoomSettings.mBillboard.m = 1065353216i64;
  this->ModelRoomSettings.mBillboard.m[4] = 0.0;
  *(_QWORD *)&this->ModelRoomSettings.mBillboard.m[8] = 0i64;
  *(_QWORD *)&this->ModelRoomSettings.mBillboard.m[12] = 0i64;
  *(_QWORD *)&this->ModelRoomSettings.mBillboard.m[5] = 1065353216i64;
  *(_QWORD *)&this->ModelRoomSettings.mBillboard.m[2] = 0i64;
  *(_QWORD *)&this->ModelRoomSettings.mBillboard.m[10] = 1065353216i64;
  this->ModelRoomSettings.mBillboard.m[14] = 0.0;
  this->ModelRoomSettings.mBillboard.m[7] = 0.0;
  this->ModelRoomSettings.mBillboard.m[15] = 1.0;
  this->m_iMissionLoadDataCharaID = -1;
  this->m_iMissionKeyDataID = -1;
  this->m_NewMyRanking = -1;
  this->m_NotificationGalleryID = GALLERY_ID_NONE;
  p_SearchSettingHistory = &this->SearchSettingHistory;
  MatchingGameRule = this->MatchingGameRule;
  memset(&this->SearchSettingHistory, 0, sizeof(this->SearchSettingHistory));
  if ( MatchingGameRule )
  {
    v48 = MatchingGameRule - 1;
    if ( v48 )
    {
      v49 = v48 - 1;
      if ( v49 )
      {
        if ( v49 == 1 )
          p_SearchSettingHistory->m_GameRule = GAME_RULE_TRAINING;
      }
      else
      {
        p_SearchSettingHistory->m_GameRule = GAME_RULE_PARTY;
      }
    }
    else
    {
      p_SearchSettingHistory->m_GameRule = GAME_RULE_TEAM;
    }
  }
  else
  {
    p_SearchSettingHistory->m_GameRule = GAME_RULE_SINGLE;
  }
  this->SearchSettingHistory.m_AreaType = k_ELobbyDistanceFilterDefault;
  this->SearchSettingHistory.m_AntennaLevel = NETWORK_ANTENNA_SELECT_UI_NONE;
  this->SearchSettingHistory.m_SuccessHighRate = NETWORK_SUCCESSRATE_SELECT_NONE;
  *(_QWORD *)&this->SearchSettingHistory.m_LiveType = 0i64;
  this->SearchSettingHistory.m_RoundType = NETWORK_ROUND_SELECT_NONE;
  this->SearchSettingHistory.m_RoundTimerType = BATTLE_ROUND_TIMER_TYPE_NONE;
  memset(&this->CreateRoomSettingHistory, 0, sizeof(this->CreateRoomSettingHistory));
  this->CreateRoomSettingHistory.m_AntennaLevel = NETWORK_ANTENNA_SELECT_UI_NONE;
  this->CreateRoomSettingHistory.m_SuccessHighRate = NETWORK_SUCCESSRATE_SELECT_NONE;
  this->CreateRoomSettingHistory.m_LiveType = NETWORK_LIVE_SELECT_OPEN;
  this->CreateRoomSettingHistory.m_GradeSelect = NETWORK_GRADE_SELECT_RANGE;
  CString = AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
  v51 = (char *)((char *)&this->CreateRoomSettingHistory - CString);
  do
  {
    v52 = *CString;
    v51[(_QWORD)CString + 20] = *CString;
    ++CString;
  }
  while ( v52 );
  this->CreateRoomSettingHistory.m_RoomBattleType = NETWORK_ROOM_BATTLE_TYPE_FREE;
  this->CreateRoomSettingHistory.m_RoundType = NETWORK_ROUND_SELECT_3;
  this->CreateRoomSettingHistory.m_RoundTimerType = BATTLE_ROUND_TIMER_TYPE_60;
  *(_QWORD *)&this->CreateRoomSettingHistory.m_RoomMemberNum = 12i64;
  v56 = (char *)operator new(0x50ui64);
  *((_QWORD *)v56 + 1) = 0i64;
  *((_QWORD *)v56 + 2) = 0i64;
  v56[24] = 1;
  *((_DWORD *)v56 + 7) = 0;
  *((_WORD *)v56 + 24) = 1;
  *((_DWORD *)v56 + 13) = 0;
  *((_QWORD *)v56 + 5) = 0i64;
  *((_WORD *)v56 + 28) = 0;
  *(_QWORD *)(v56 + 60) = 0i64;
  *((_QWORD *)v56 + 9) = 0i64;
  *(_QWORD *)v56 = &Image::`vftable';
  this->pCapture = (Image *)v56;
}

extension::RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body> *__fastcall extension::BasicFutureObject<OGLMirror,void>::Body::GetSharedEmpty(
        extension::RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body> *result)
{
  extension::RefCountableWeakSupportBase::WeakProxy *v3; // [rsp+40h] [rbp+8h]

  if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLMirror__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLMirror__X_extension___4_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLMirror__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLMirror__X_extension___4_XZ_4HA);
    if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLMirror__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLMirror__X_extension___4_XZ_4HA == -1 )
    {
      `extension::BasicFutureObject<OGLMirror,void>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<OGLMirror,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
      v3 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
      v3->m_refCount.m_value._My_val = 1i64;
      v3->m_principal = &`extension::BasicFutureObject<OGLMirror,void>::Body::GetSharedEmpty'::`2'::shared_body;
      v3->m_sharedCount.m_value._My_val = 0i64;
      v3->m_sharedCount.m_value._My_val = 1i64;
      `extension::BasicFutureObject<OGLMirror,void>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr = v3;
      `extension::BasicFutureObject<OGLMirror,void>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<OGLMirror,void>::Body_vtbl *)&extension::BasicFutureObject<OGLMirror,void>::Body::`vftable';
      `extension::BasicFutureObject<OGLMirror,void>::Body::GetSharedEmpty'::`2'::shared_body.m_content.m_ptr = 0i64;
      atexit(`extension::BasicFutureObject<OGLMirror,void>::Body::GetSharedEmpty'::`2'::`dynamic atexit destructor for 'shared_body'');
      Init_thread_footer(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLMirror__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLMirror__X_extension___4_XZ_4HA);
    }
  }
  result->m_ptr = &`extension::BasicFutureObject<OGLMirror,void>::Body::GetSharedEmpty'::`2'::shared_body;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&`extension::BasicFutureObject<OGLMirror,void>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr->m_sharedCount,
    1ui64);
  return result;
}

extension::RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body> *__fastcall extension::BasicFutureObject<OGLMotion,void>::Body::GetSharedEmpty(
        extension::RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body> *result)
{
  extension::RefCountableWeakSupportBase::WeakProxy *v3; // [rsp+40h] [rbp+8h]

  if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLMotion__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLMotion__X_extension___4_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLMotion__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLMotion__X_extension___4_XZ_4HA);
    if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLMotion__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLMotion__X_extension___4_XZ_4HA == -1 )
    {
      `extension::BasicFutureObject<OGLMotion,void>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<OGLMotion,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
      v3 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
      v3->m_refCount.m_value._My_val = 1i64;
      v3->m_principal = &`extension::BasicFutureObject<OGLMotion,void>::Body::GetSharedEmpty'::`2'::shared_body;
      v3->m_sharedCount.m_value._My_val = 0i64;
      v3->m_sharedCount.m_value._My_val = 1i64;
      `extension::BasicFutureObject<OGLMotion,void>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr = v3;
      `extension::BasicFutureObject<OGLMotion,void>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<OGLMotion,void>::Body_vtbl *)&extension::BasicFutureObject<OGLMotion,void>::Body::`vftable';
      `extension::BasicFutureObject<OGLMotion,void>::Body::GetSharedEmpty'::`2'::shared_body.m_content.m_ptr = 0i64;
      atexit(`extension::BasicFutureObject<OGLMotion,void>::Body::GetSharedEmpty'::`2'::`dynamic atexit destructor for 'shared_body'');
      Init_thread_footer(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLMotion__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLMotion__X_extension___4_XZ_4HA);
    }
  }
  result->m_ptr = &`extension::BasicFutureObject<OGLMotion,void>::Body::GetSharedEmpty'::`2'::shared_body;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&`extension::BasicFutureObject<OGLMotion,void>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr->m_sharedCount,
    1ui64);
  return result;
}

extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> *__fastcall extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::GetSharedEmpty(
        extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> *result)
{
  extension::RefCountableWeakSupportBase::WeakProxy *v3; // [rsp+40h] [rbp+8h]

  if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLTexture__UFutureTextureOption_extension___extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLTexture__UFutureTextureOption_extension___extension___4_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLTexture__UFutureTextureOption_extension___extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLTexture__UFutureTextureOption_extension___extension___4_XZ_4HA);
    if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLTexture__UFutureTextureOption_extension___extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLTexture__UFutureTextureOption_extension___extension___4_XZ_4HA == -1 )
    {
      `extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
      v3 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
      v3->m_refCount.m_value._My_val = 1i64;
      v3->m_principal = &`extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::GetSharedEmpty'::`2'::shared_body;
      v3->m_sharedCount.m_value._My_val = 0i64;
      v3->m_sharedCount.m_value._My_val = 1i64;
      `extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr = v3;
      `extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body_vtbl *)&extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::`vftable';
      `extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::GetSharedEmpty'::`2'::shared_body.m_content.m_ptr = 0i64;
      atexit(`extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::GetSharedEmpty'::`2'::`dynamic atexit destructor for 'shared_body'');
      Init_thread_footer(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLTexture__UFutureTextureOption_extension___extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLTexture__UFutureTextureOption_extension___extension___4_XZ_4HA);
    }
  }
  result->m_ptr = &`extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::GetSharedEmpty'::`2'::shared_body;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&`extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr->m_sharedCount,
    1ui64);
  return result;
}

void __fastcall std::vector<extension::BasicFutureObject<OGLMotion,void>>::_Pop_back_n(
        std::vector<extension::BasicFutureObject<OGLSecondary,void>> *this,
        unsigned __int64 _Count)
{
  extension::BasicFutureObject<OGLSecondary,void> *Mylast; // rsi
  extension::BasicFutureObject<OGLSecondary,void> *v4; // rdi
  extension::RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body> *p_m_body; // rbx
  extension::BasicFutureObject<OGLSecondary,void>::Body *m_ptr; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  v4 = &Mylast[-_Count];
  if ( v4 == Mylast )
  {
    this->_Mypair._Myval2._Mylast = v4;
  }
  else
  {
    p_m_body = &v4->m_body;
    do
    {
      m_ptr = p_m_body->m_ptr;
      if ( p_m_body->m_ptr )
      {
        if ( _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
          ((void (__fastcall *)(extension::BasicFutureObject<OGLSecondary,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
            m_ptr,
            1i64);
      }
      p_m_body += 2;
    }
    while ( &p_m_body[-1] != (extension::RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body> *)Mylast );
    this->_Mypair._Myval2._Mylast = v4;
  }
}

void __fastcall std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::_Reallocate(
        std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *a4)
{
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *v6; // rdi
  unsigned __int64 v7; // rcx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *v8; // rax
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *m_ptr; // rcx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *Mylast; // r12
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *Myfirst; // rbx
  signed __int64 v12; // r14

  if ( _Count )
  {
    if ( _Count > 0xFFFFFFFFFFFFFFFi64 )
      std::_Xbad_alloc();
    v7 = 16 * _Count;
    if ( 16 * _Count < 0x1000 )
    {
      v6 = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *)operator new(v7 + 39);
      v6 = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)(((unsigned __int64)&v8[1].m_refCount.m_ptr + 7) & 0xFFFFFFFFFFFFFFE0ui64);
      v6[-1].m_body.m_ptr = v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *,extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *,std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v6,
    a4);
  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v12 = (char *)Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( ; Myfirst != Mylast; ++Myfirst )
    {
      m_ptr = Myfirst->m_body.m_ptr;
      if ( m_ptr
        && _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        ((void (__fastcall *)(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
          m_ptr,
          1i64);
      }
    }
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)m_ptr,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v6[_Count];
  this->_Mypair._Myval2._Mylast = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)((char *)v6 + (v12 & 0xFFFFFFFFFFFFFFF0ui64));
  this->_Mypair._Myval2._Myfirst = v6;
}

void __fastcall std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>>::resize(
        std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>> *this,
        unsigned __int64 _Newsize)
{
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *Mylast; // r9
  unsigned __int64 v5; // rdx
  std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > *Myend; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *v9; // r9
  unsigned __int64 v10; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  v5 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( v5 <= _Newsize )
  {
    if ( v5 < _Newsize )
    {
      Myend = (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > *)this->_Mypair._Myval2._Myend;
      if ( (Myend
          - (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > *)Mylast) >> 4 < _Newsize - v5 )
      {
        if ( 0xFFFFFFFFFFFFFFFi64 - v5 < _Newsize - v5 )
          std::_Xlength_error("vector<T> too long");
        v7 = _Newsize;
        v8 = (Myend
            - (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > *)this->_Mypair._Myval2._Myfirst) >> 4;
        v9 = (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *)(0xFFFFFFFFFFFFFFFi64 - (v8 >> 1));
        v10 = 0i64;
        if ( (unsigned __int64)v9 >= v8 )
          v10 = v8 + (v8 >> 1);
        if ( v10 >= _Newsize )
          v7 = v10;
        std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::_Reallocate(
          (std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)this,
          v7,
          v8,
          v9);
      }
      std::_Uninitialized_default_fill_n1<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *,unsigned __int64,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>>>(
        this->_Mypair._Myval2._Mylast,
        _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst),
        Myend,
        (std::integral_constant<bool,0>)Mylast);
      this->_Mypair._Myval2._Mylast += _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
    }
  }
  else
  {
    std::vector<extension::BasicFutureObject<OGLMotion,void>>::_Pop_back_n(
      (std::vector<extension::BasicFutureObject<OGLSecondary,void>> *)this,
      v5 - _Newsize);
  }
}

void __fastcall std::vector<extension::BasicFutureObject<OGLMirror,void>>::resize(
        std::vector<extension::BasicFutureObject<OGLMirror,void>> *this,
        unsigned __int64 _Newsize)
{
  extension::BasicFutureObject<OGLMirror,void> *Mylast; // r9
  unsigned __int64 v5; // rdx
  std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLMirror,void> > > *Myend; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *v9; // r9
  unsigned __int64 v10; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  v5 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( v5 <= _Newsize )
  {
    if ( v5 < _Newsize )
    {
      Myend = (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLMirror,void> > > *)this->_Mypair._Myval2._Myend;
      if ( (Myend - (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLMirror,void> > > *)Mylast) >> 4 < _Newsize - v5 )
      {
        if ( 0xFFFFFFFFFFFFFFFi64 - v5 < _Newsize - v5 )
          std::_Xlength_error("vector<T> too long");
        v7 = _Newsize;
        v8 = (Myend
            - (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLMirror,void> > > *)this->_Mypair._Myval2._Myfirst) >> 4;
        v9 = (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *)(0xFFFFFFFFFFFFFFFi64 - (v8 >> 1));
        v10 = 0i64;
        if ( (unsigned __int64)v9 >= v8 )
          v10 = v8 + (v8 >> 1);
        if ( v10 >= _Newsize )
          v7 = v10;
        std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::_Reallocate(
          (std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)this,
          v7,
          v8,
          v9);
      }
      std::_Uninitialized_default_fill_n1<extension::BasicFutureObject<OGLMirror,void> *,unsigned __int64,std::allocator<extension::BasicFutureObject<OGLMirror,void>>>(
        this->_Mypair._Myval2._Mylast,
        _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst),
        Myend,
        (std::integral_constant<bool,0>)Mylast);
      this->_Mypair._Myval2._Mylast += _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
    }
  }
  else
  {
    std::vector<extension::BasicFutureObject<OGLMotion,void>>::_Pop_back_n(
      (std::vector<extension::BasicFutureObject<OGLSecondary,void>> *)this,
      v5 - _Newsize);
  }
}

void __fastcall std::vector<extension::BasicFutureObject<OGLMotion,void>>::resize(
        std::vector<extension::BasicFutureObject<OGLMotion,void>> *this,
        unsigned __int64 _Newsize)
{
  extension::BasicFutureObject<OGLMotion,void> *Mylast; // r9
  unsigned __int64 v5; // rdx
  std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLMotion,void> > > *Myend; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *v9; // r9
  unsigned __int64 v10; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  v5 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( v5 <= _Newsize )
  {
    if ( v5 < _Newsize )
    {
      Myend = (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLMotion,void> > > *)this->_Mypair._Myval2._Myend;
      if ( (Myend - (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLMotion,void> > > *)Mylast) >> 4 < _Newsize - v5 )
      {
        if ( 0xFFFFFFFFFFFFFFFi64 - v5 < _Newsize - v5 )
          std::_Xlength_error("vector<T> too long");
        v7 = _Newsize;
        v8 = (Myend
            - (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLMotion,void> > > *)this->_Mypair._Myval2._Myfirst) >> 4;
        v9 = (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *)(0xFFFFFFFFFFFFFFFi64 - (v8 >> 1));
        v10 = 0i64;
        if ( (unsigned __int64)v9 >= v8 )
          v10 = v8 + (v8 >> 1);
        if ( v10 >= _Newsize )
          v7 = v10;
        std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::_Reallocate(
          (std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)this,
          v7,
          v8,
          v9);
      }
      std::_Uninitialized_default_fill_n1<extension::BasicFutureObject<OGLMotion,void> *,unsigned __int64,std::allocator<extension::BasicFutureObject<OGLMotion,void>>>(
        this->_Mypair._Myval2._Mylast,
        _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst),
        Myend,
        (std::integral_constant<bool,0>)Mylast);
      this->_Mypair._Myval2._Mylast += _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
    }
  }
  else
  {
    std::vector<extension::BasicFutureObject<OGLMotion,void>>::_Pop_back_n(
      (std::vector<extension::BasicFutureObject<OGLSecondary,void>> *)this,
      v5 - _Newsize);
  }
}

void __fastcall std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::resize(
        std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>> *this,
        unsigned __int64 _Newsize)
{
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *Mylast; // r9
  unsigned __int64 v5; // rdx
  std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > *Myend; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *v9; // r9
  unsigned __int64 v10; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  v5 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( v5 <= _Newsize )
  {
    if ( v5 < _Newsize )
    {
      Myend = (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > *)this->_Mypair._Myval2._Myend;
      if ( (Myend
          - (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > *)Mylast) >> 4 < _Newsize - v5 )
      {
        if ( 0xFFFFFFFFFFFFFFFi64 - v5 < _Newsize - v5 )
          std::_Xlength_error("vector<T> too long");
        v7 = _Newsize;
        v8 = (Myend
            - (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > *)this->_Mypair._Myval2._Myfirst) >> 4;
        v9 = (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *)(0xFFFFFFFFFFFFFFFi64 - (v8 >> 1));
        v10 = 0i64;
        if ( (unsigned __int64)v9 >= v8 )
          v10 = v8 + (v8 >> 1);
        if ( v10 >= _Newsize )
          v7 = v10;
        std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::_Reallocate(
          (std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)this,
          v7,
          v8,
          v9);
      }
      std::_Uninitialized_default_fill_n1<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *,unsigned __int64,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>>(
        this->_Mypair._Myval2._Mylast,
        _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst),
        Myend,
        (std::integral_constant<bool,0>)Mylast);
      this->_Mypair._Myval2._Mylast += _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
    }
  }
  else
  {
    std::vector<extension::BasicFutureObject<OGLMotion,void>>::_Pop_back_n(
      (std::vector<extension::BasicFutureObject<OGLSecondary,void>> *)this,
      v5 - _Newsize);
  }
}

