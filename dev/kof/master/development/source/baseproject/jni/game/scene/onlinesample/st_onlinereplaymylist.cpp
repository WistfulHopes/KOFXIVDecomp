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
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/taskfunc/generaltask.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingtargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/ctasksystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/replace.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/commonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.cpp"

struct LEADERBOARD_ATTACHDATA_REPLAY
{
	Fw::cRankingWriteRequest m_WriteRequest; // 0x0
	Fw::RANKING_HANDLE m_Handle; // 0x98
	bool m_WriteScore; // 0x9C
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408A06F8
void AppMain::ReplayConvertToLeaderboard(LEADERBOARD_INFO * pInfo, BattleReplay * pReplay, long PcId); // 0x1401A5F00
long GT_SubmitReplayData(GENERAL_TASK * pGT); // 0x1401A6050
void AppMain::SubmitReplayData(unsigned long long score, BattleReplay * pReplay, Fw::RANKING_HANDLE handle, long pcId); // 0x1401A61B0
void AppMain::SetBattleInfoFromReplayData(unsigned long replayNo, BattleReplay * pReplay); // 0x1401A63C0//decompilation failure at 1408A06F8!
__int64 __fastcall GT_SubmitReplayData(GENERAL_TASK *pGT)
{
  const Fw::cRankingWriteRequest *pBuffer; // rbx
  int v3; // eax
  Fw::RANKING_HANDLE v4; // er11
  AgAchievementsManager *v5; // rcx
  void *m_pData; // rcx
  int iStat; // eax
  EasyIndicator *v8; // rbx

  pBuffer = (const Fw::cRankingWriteRequest *)pGT->pBuffer;
  if ( !pBuffer )
    return 0i64;
  v3 = Fw::RankingTarget::GetResult((Fw::RANKING_HANDLE)LODWORD(pBuffer[1].m_Score));
  if ( v3 != 1 )
  {
    if ( (unsigned int)(v3 - 2) > 1 )
      goto LABEL_13;
    Fw::RankingSystem::ReleaseHandle(v4);
LABEL_9:
    m_pData = pBuffer->m_AttachData.m_pData;
    if ( m_pData )
    {
      aligned_free(m_pData);
      pBuffer->m_AttachData.m_pData = 0i64;
    }
    iStat = pGT->iStat;
    if ( (iStat & 1) != 0 )
      pGT->iStat = iStat | 6;
    goto LABEL_13;
  }
  Fw::RankingSystem::ReleaseHandle(v4);
  if ( !BYTE4(pBuffer[1].m_Score) )
  {
    if ( *(char *)(*(_QWORD *)&AppMain::pApp + 2205167i64) <= 1 )
    {
      v5 = (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance;
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205167i64) = 1;
      AgAchievementsManager::unlock(v5, (AgAchievementPlatformData *)&stru_140A9C020);
    }
    goto LABEL_9;
  }
  LODWORD(pBuffer[1].m_Score) = Fw::RankingWrite::BeginWriteAttachData(pBuffer);
  BYTE4(pBuffer[1].m_Score) = 0;
LABEL_13:
  v8 = EasyIndicator::instance;
  if ( !EasyIndicator::instance )
  {
    v8 = (EasyIndicator *)operator new(0x150ui64);
    memset(v8->m_IndicatorStack, 0, sizeof(v8->m_IndicatorStack));
    v8->m_Image = 0i64;
    v8->m_DrawCount = 0;
    EasyIndicator::instance = v8;
  }
  EasyIndicator::RequestDraw(v8, 1760 * GAME_SCREEN_WIDTH / 1920, 920 * GAME_SCREEN_HEIGHT / 1080, TYPE_CONNECTING);
  return 0i64;
}

void __fastcall AppMain::ReplayConvertToLeaderboard(
        AppMain *this,
        LEADERBOARD_INFO *pInfo,
        BattleReplay *pReplay,
        int PcId)
{
  int v7; // eax
  unsigned __int8 *p_icon; // r8
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r11
  unsigned __int8 *p_grade; // rax
  __int64 v13; // r10
  LEADERBOARD_REPLAY_USER2_FORMAT_001 *v14; // r9
  unsigned int v15; // edx
  __int64 result; // [rsp+30h] [rbp+8h] BYREF

  result = (__int64)this;
  time64(&result);
  v7 = result;
  p_icon = &pInfo->m_Replay.m_User[0][0].icon;
  v9 = result;
  pInfo->m_PcId = PcId;
  v10 = (((unsigned __int16)v7 ^ (unsigned __int16)(v9 >> 7)) & 0x55 ^ (unsigned __int16)(v7 ^ ((((unsigned __int16)v7 ^ (unsigned __int16)(v9 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(((v7 ^ (v9 >> 7)) & 0x550055 ^ v7 ^ (((v7 ^ (v9 >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC;
  pInfo->m_Score = (v7 ^ (v9 >> 7)) & 0x550055 ^ v7 ^ (((v7 ^ (v9 >> 7)) & 0x550055) << 7) ^ v10 ^ ((_DWORD)v10 << 14) ^ 0x7B48A35E;
  v11 = 0i64;
  pInfo->m_Grade.m_Point = pReplay->m_Date;
  p_grade = &pReplay->m_UserInfo[0][0].grade;
  do
  {
    v13 = 3i64;
    v14 = pInfo->m_Replay.m_User2[v11];
    do
    {
      *((_QWORD *)p_icon - 1) = *(_QWORD *)(p_grade - 9);
      *p_icon = *(p_grade - 1);
      p_icon[1] = *p_grade;
      *((_WORD *)p_icon + 1) = *(_WORD *)(p_grade + 1);
      v14[-10].disconnectMarker = pReplay->m_UserInfo[v11][p_grade[5]].characterId;
      if ( pReplay->m_Ver == 4 )
      {
        v15 = p_grade[7];
        if ( v15 < 4 )
          v14->disconnectMarker = v15 >= 3;
        else
          v14->disconnectMarker = 2;
      }
      else
      {
        v14->disconnectMarker = 0;
      }
      p_icon += 12;
      p_grade += 24;
      ++v14;
      --v13;
    }
    while ( v13 );
    ++v11;
  }
  while ( v11 < 2 );
  pInfo->m_Replay.m_GameMode = pReplay->m_GameMode;
  pInfo->m_Replay.m_GameRule = pReplay->m_GameRule;
  pInfo->m_Replay.m_Result = pReplay->m_Result;
  pInfo->m_Replay.m_Ver = pReplay->m_Ver;
}

void __fastcall AppMain::SetBattleInfoFromReplayData(AppMain *this, unsigned int replayNo, BattleReplay *pReplay)
{
  GameDataInfo *v4; // rcx
  BattleSystem::BattleController *v5; // rax
  __int64 v6; // r12
  bool (*m_EditRandom)[3]; // r13
  __int64 (*m_ColorSelectedTime)[3]; // r14
  CHARACTER_COLOR (*m_CharacterColor)[3]; // rdi
  unsigned __int8 *p_characterColorId; // rsi
  __int64 v11; // rbp
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rax
  char v15; // al
  char v16; // al
  float m_min; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  BattleSystem::BattleController *v24; // [rsp+98h] [rbp+20h]

  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v4);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  GameDataInfo::Init(&`GameDataInfo::getInstance'::`2'::instance);
  `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] = pReplay->m_GameMode;
  `GameDataInfo::getInstance'::`2'::instance.m_GameRule[`GameDataInfo::getInstance'::`2'::instance.m_GameRuleIndex] = pReplay->m_GameRule;
  v5 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v24 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v24);
    BattleSystem::BattleController::instance = v5;
  }
  BattleSystem::BattleController::BattleResultInit(v5);
  v6 = 0i64;
  m_EditRandom = `GameDataInfo::getInstance'::`2'::instance.m_EditRandom;
  m_ColorSelectedTime = `GameDataInfo::getInstance'::`2'::instance.m_ColorSelectedTime;
  m_CharacterColor = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor;
  p_characterColorId = &pReplay->m_UserInfo[0][0].characterColorId;
  do
  {
    v11 = 0i64;
    do
    {
      (*m_CharacterColor)[-8] = (char)*(p_characterColorId - 1);
      (*m_EditRandom)[v11] = 0;
      `GameDataInfo::getInstance'::`2'::instance.m_TeamRandom[v6] = 0;
      v12 = *p_characterColorId;
      (*m_ColorSelectedTime)[0] = (unsigned int)(int)(double)(int)time64(0i64);
      *(_DWORD *)m_CharacterColor = v12;
      (*m_CharacterColor)[31] = p_characterColorId[2];
      (*m_CharacterColor)[25] = p_characterColorId[1];
      ++v11;
      m_ColorSelectedTime = (__int64 (*)[3])((char *)m_ColorSelectedTime + 8);
      p_characterColorId += 24;
      m_CharacterColor = (CHARACTER_COLOR (*)[3])((char *)m_CharacterColor + 4);
    }
    while ( v11 < 3 );
    ++v6;
    ++m_EditRandom;
  }
  while ( (__int64)m_CharacterColor < (__int64)`GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[2] );
  `GameDataInfo::getInstance'::`2'::instance.m_HandicapSetting[0] = pReplay->m_Handicap[0];
  `GameDataInfo::getInstance'::`2'::instance.m_HandicapSetting[1] = pReplay->m_Handicap[1];
  `GameDataInfo::getInstance'::`2'::instance.m_StageID = pReplay->m_Stage;
  `GameDataInfo::getInstance'::`2'::instance.m_StageRandom = 0;
  v14 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v13);
  v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 16) + 336i64))(*(_QWORD *)(v14 + 16));
  if ( (v15 & 0x10) != 0 || (v15 & 2) != 0 )
  {
    strcpy(`GameDataInfo::getInstance'::`2'::instance.m_StageTelop, "THE KING OF FIGHTERS XIV");
    `GameDataInfo::getInstance'::`2'::instance.m_StageTelop[25] = 0;
    *(_WORD *)&`GameDataInfo::getInstance'::`2'::instance.m_StageTelop[26] = 0;
    *(_DWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_StageTelop[28] = 0;
    *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_StageTelop[32] = off_1409123D8;
    *(_QWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_StageTelop[48] = &extension::BasicFutureObject<OGLMirror,void>::Body::`RTTI Complete Object Locator';
    *(_DWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_StageTelop[56] = (_DWORD)extension::BasicFutureObject<OGLMirror,void>::Body::`vftable';
    v16 = BYTE4(extension::BasicFutureObject<OGLMirror,void>::Body::`vftable');
  }
  else
  {
    *(_OWORD *)`GameDataInfo::getInstance'::`2'::instance.m_StageTelop = *(_OWORD *)pReplay->m_StageTelop;
    *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_StageTelop[16] = *(_OWORD *)&pReplay->m_StageTelop[16];
    *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_StageTelop[32] = *(_OWORD *)&pReplay->m_StageTelop[32];
    *(_QWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_StageTelop[48] = *(_QWORD *)&pReplay->m_StageTelop[48];
    *(_DWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_StageTelop[56] = *(_DWORD *)&pReplay->m_StageTelop[56];
    v16 = pReplay->m_StageTelop[60];
  }
  `GameDataInfo::getInstance'::`2'::instance.m_StageTelop[60] = v16;
  `GameDataInfo::getInstance'::`2'::instance.m_WinRoundCount = pReplay->m_WinRoundCount;
  `GameDataInfo::getInstance'::`2'::instance.m_TimeSetting = pReplay->m_RoundTimerType;
  `GameDataInfo::getInstance'::`2'::instance.m_RandSeed[0] = pReplay->m_RandSeed[0];
  `GameDataInfo::getInstance'::`2'::instance.m_RandSeed[1] = pReplay->m_RandSeed[1];
  `GameDataInfo::getInstance'::`2'::instance.m_RandSeed[2] = pReplay->m_RandSeed[2];
  `GameDataInfo::getInstance'::`2'::instance.m_RandSeed[3] = pReplay->m_RandSeed[3];
  `GameDataInfo::getInstance'::`2'::instance.m_RandSeed[4] = pReplay->m_RandSeed[4];
  `GameDataInfo::getInstance'::`2'::instance.m_RandSeed[5] = pReplay->m_RandSeed[5];
  `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag = 1;
  `GameDataInfo::getInstance'::`2'::instance.m_ReplayNo = replayNo;
  this->m_BattleHud.m_bReplayDescriptionVisibled = 1;
  this->m_BattleHud.m_fadeAnimReplaySystem.m_number = 0.0;
  this->m_BattleHud.m_fadeAnimReplaySystem.m_bAnimation = 0;
  this->m_BattleHud.m_fadeAnimReplayUser.m_number = 0.0;
  this->m_BattleHud.m_fadeAnimReplayUser.m_bAnimation = 0;
  m_min = this->m_BattleHud.m_fadeAnimReplaySystem.m_min;
  v18 = fminf(0.0, this->m_BattleHud.m_fadeAnimReplaySystem.m_max);
  if ( m_min <= v18 )
    m_min = v18;
  this->m_BattleHud.m_fadeAnimReplaySystem.m_number = m_min;
  this->m_BattleHud.m_fadeAnimReplaySystem.m_bAnimation = 0;
  v19 = this->m_BattleHud.m_fadeAnimReplayUser.m_min;
  v20 = fminf(1.0, this->m_BattleHud.m_fadeAnimReplayUser.m_max);
  this->m_BattleHud.m_fadeAnimReplayUser.m_bAnimation = 0;
  if ( v19 <= v20 )
    this->m_BattleHud.m_fadeAnimReplayUser.m_number = v20;
  else
    this->m_BattleHud.m_fadeAnimReplayUser.m_number = v19;
}

void __fastcall AppMain::SubmitReplayData(
        AppMain *this,
        unsigned __int64 score,
        BattleReplay *pReplay,
        Fw::RANKING_HANDLE handle,
        int pcId)
{
  GENERAL_TASK *v8; // rax
  GENERAL_TASK *v9; // rbx
  char **m_pBuffer; // r8
  _DWORD *pBuffer; // r14
  int v12; // er9
  __int64 v13; // rsi
  int v14; // ebp
  unsigned __int64 v15; // rdx
  _OWORD *v16; // rax
  int iStat; // eax
  BattleReplay *v18; // rcx
  __int64 v19; // rdx
  __int128 v20; // xmm0
  size_t *v21; // rbx
  signed __int64 v22; // r15
  __int64 v23; // rdi
  GENERAL_TASK *v24; // [rsp+20h] [rbp-78h]
  char v25[48]; // [rsp+30h] [rbp-68h] BYREF

  if ( pReplay )
  {
    v8 = CTaskSystem::Entry(
           &this->m_TS,
           (int (__fastcall *)(GENERAL_TASK *))GT_SubmitReplayData,
           (int)pReplay,
           handle,
           v24);
    v9 = v8;
    if ( v8 )
    {
      m_pBuffer = pReplay->m_pBuffer;
      pBuffer = v8->pBuffer;
      v12 = 0;
      pBuffer[38] = handle;
      v13 = 1104i64;
      *((_BYTE *)pBuffer + 156) = 1;
      *(_QWORD *)pBuffer = score;
      v14 = 1104;
      pBuffer[2] = 531;
      pBuffer[3] = pcId;
      do
      {
        v15 = *((unsigned int *)m_pBuffer - 272) + (unsigned __int64)*((unsigned int *)m_pBuffer - 271);
        v13 += v15;
        *(char **)((char *)m_pBuffer + v25 - (char *)pReplay - 1104) = (char *)v15;
        if ( v15 && !*m_pBuffer )
          goto $error_SubmitReplayData;
        ++v12;
        ++m_pBuffer;
      }
      while ( v12 < 6 );
      v16 = aligned_malloc((unsigned int)v13, 0x20ui64);
      *((_QWORD *)pBuffer + 4) = v16;
      if ( !v16 )
      {
$error_SubmitReplayData:
        iStat = v9->iStat;
        if ( (iStat & 1) != 0 )
          v9->iStat = iStat | 6;
        return;
      }
      v18 = pReplay;
      v19 = 8i64;
      do
      {
        v16 += 8;
        v20 = *(_OWORD *)&v18->m_Date;
        v18 = (BattleReplay *)((char *)v18 + 128);
        *(v16 - 8) = v20;
        *(v16 - 7) = *(_OWORD *)&v18[-1].m_StageTelop[32];
        *(v16 - 6) = *(_OWORD *)&v18[-1].m_StageTelop[48];
        *(v16 - 5) = *(_OWORD *)v18[-1].m_pBuffer;
        *(v16 - 4) = *(_OWORD *)&v18[-1].m_pBuffer[2];
        *(v16 - 3) = *(_OWORD *)&v18[-1].m_pBuffer[4];
        *(v16 - 2) = *(_OWORD *)&v18[-1].m_UploadOnlineId.data;
        *(v16 - 1) = *(_OWORD *)&v18[-1].m_Lock;
        --v19;
      }
      while ( v19 );
      v21 = (size_t *)v25;
      *v16 = *(_OWORD *)&v18->m_Date;
      v16[1] = *(_OWORD *)&v18->m_BufferSize[0][0];
      v16[2] = *(_OWORD *)&v18->m_BufferSize[2][0];
      v16[3] = *(_OWORD *)&v18->m_BufferSize[4][0];
      v16[4] = *(_OWORD *)&v18->m_UserInfo[0][0].onlineId.data;
      v22 = (char *)pReplay - v25 + 1104;
      v23 = 6i64;
      do
      {
        if ( *v21 )
        {
          memmove((void *)(*((_QWORD *)pBuffer + 4) + v14), *(const void **)((char *)v21 + v22), *v21);
          v14 += *(_DWORD *)v21;
        }
        ++v21;
        --v23;
      }
      while ( v23 );
      *((_QWORD *)pBuffer + 2) = v13;
      *((_QWORD *)pBuffer + 3) = v13;
    }
  }
}

