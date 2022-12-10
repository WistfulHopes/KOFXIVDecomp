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
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/wordfiltersystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imetargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imetargetkb.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imetargetpad.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/onlinesample/st_onlinesearchroomsetting.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/onlinesample/st_onlinecreateroomsetting.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/menudata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/menuutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"

enum <unnamed-enum-SCENE_FREEMATCH_LOOP>
{
	SCENE_FREEMATCH_LOOP = 0,
	SCENE_FREEMATCH_SEARCHING = 1,
	SCENE_FREEMATCH_CREATEROOM = 2,
	SCENE_FREEMATCH_END = 3,
};
enum <unnamed-enum-FILTER_DEFAULT>
{
	FILTER_DEFAULT = 0,
	FILTER_WAIT = 1,
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B09
long s_SceneSequence; // 0x140AA4F7C
unsigned char s_FilterSequence; // 0x140A9C703
char s_FilterStr[49]; // 0x140AC4B90
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5D350
void AppMain::UpdateRoomNameText(const char * name); // 0x1401C1690
void LoadCompleteEventFreematch(); // 0x1401C17F0
void AppMain::ST_FreematchInit(); // 0x1401C1860
void AppMain::ST_FreematchLoop(); // 0x1401C1BF0
void AppMain::ST_FreematchDraw(); // 0x1401C06B0//decompilation failure at 1408A0B09!
//decompilation failure at 140AA4F7C!
//decompilation failure at 140A9C703!
//decompilation failure at 140AC4B90!
//decompilation failure at 140A5D350!
void __fastcall LoadCompleteEventOnlineTraining()
{
  __int64 v0; // r8
  int v1; // ecx

  v0 = *(_QWORD *)&AppMain::pApp;
  if ( *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507460i64) )
  {
    v1 = 1000 * *(unsigned __int8 *)(*(_QWORD *)&AppMain::pApp + 2507456i64);
    *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2507472i64) = 0;
    *(_DWORD *)(v0 + 2507452) = 10;
    *(_BYTE *)(v0 + 2507474) = 0;
    *(_DWORD *)(v0 + 7364) = 171;
    *(_DWORD *)(v0 + 2507460) = v1;
    *(_DWORD *)(v0 + 2507464) = v1 / 10;
  }
}

void __fastcall AppMain::ST_OnlineMenuDraw(AppMain *this)
{
  Graphics *v2; // rcx
  int v3; // er8
  int v4; // er9
  Graphics *g; // rdx
  GfxManager *v6; // rax
  extension::GFXIMovieStack *v7; // rax
  GfxManager *v8; // [rsp+50h] [rbp+8h]

  GraphicsOpt::lock(this->g);
  Graphics::clearScreen(v2, -16777216);
  g = this->g->g;
  g->m_Operator = 3;
  g->m_SrcRatio = 255;
  g->m_DstRatio = 255;
  if ( !g->m_bPreDrawMode )
  {
    if ( m_DepthMask )
    {
      m_DepthMask = 0;
      glDepthMask(0);
    }
    if ( m_Mode != 32774 )
    {
      m_Mode = 32774;
      m_ModeAlpha = 32774;
      _glewBlendEquation(0x8006u);
    }
    if ( dword_140A9605C != 1 )
    {
      dword_140A9605C = 1;
      glEnable(0xBE2u);
    }
    if ( m_Sfactor != 770 || m_Dfactor != 771 )
    {
      m_Sfactor = 770;
      m_Dfactor = 771;
      m_SfactorAlpha = 770;
      m_DfactorAlpha = 771;
      glBlendFunc(0x302u, 0x303u);
    }
    if ( m_dMode != 515 )
    {
      m_dMode = 515;
      glDepthFunc(0x203u);
    }
  }
  SyncMenuImage::Draw(&this->m_SyncMenuBG, this->g, v3, v4, 1.0);
  Graphics::drawStack(this->g->g);
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  v7 = extension::GFXIMovieStack::Instance();
  extension::GFXIMovieStack::render(v7);
  Graphics::drawStack(this->g->g);
}

void __fastcall AppMain::ST_FreematchInit(AppMain *this, __int64 a2, __int64 a3, int a4)
{
  GfxManager *v5; // rax
  UserGameOperation *v6; // rax
  char *m_str; // rsi
  AppMain *v8; // rcx
  GfxManager *v9; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  extension::gfxi_detail::MovieProxy *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v14; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v15; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v16; // r9
  char *v17; // rax
  signed __int64 v18; // rsi
  int v19; // ecx
  int v20; // edx
  __int64 *v21; // rax
  __int64 v22; // rbx
  int v23; // ecx
  GameDataInfo *v24; // rcx
  extension::SoundHashKey soundName; // [rsp+60h] [rbp+8h] BYREF
  extension::SoundHashKey result; // [rsp+68h] [rbp+10h] BYREF
  extension::SoundHashKey *p_soundName; // [rsp+70h] [rbp+18h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v5;
  }
  GfxManager::LoadRequest(v5, FILE_14_SEARCH_SETTING, LoadCompleteEventOnlineTraining, a4);
  v6 = UserGameOperation::Instance();
  UserGameOperation::clear(v6);
  m_str = 0i64;
  s_SceneSequence = 0;
  s_FilterSequence = 0;
  g_NetworkManager.gamedata.m_SearchRoomLimit = 0;
  AppMain::ResetSearchRoomSetting(this, &this->SearchSetting, this->MatchingGameRule);
  this->m_bRequestSearchSetting = 0;
  AppMain::ResetCreateRoomSetting(v8, &this->CreateRoomSetting);
  this->m_bRequestCreateRoomSetting = 0;
  v9 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v9;
  }
  if ( v9->m_GFXMovie.m_movieProxy.m_ptr )
  {
    v9->m_GFXMovie.m_movieProxy.m_ptr->m_bAdvance = 1;
    if ( v9->m_GFXMovie.m_movieProxy.m_ptr )
      v9->m_GFXMovie.m_movieProxy.m_ptr->m_bRender = 1;
  }
  if ( !v9 )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v9;
  }
  if ( v9->m_GFXMovieBG.m_movieProxy.m_ptr )
  {
    m_ptr = v9->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( m_ptr )
      m_ptr->m_bAdvance = 1;
    v11 = v9->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( v11 )
      v11->m_bRender = 1;
  }
  else
  {
    GfxManager::LoadRequestBG(v9);
  }
  SyncMenuImage::Load(
    &this->m_SyncMenuBG,
    (const ImageDataInfo *)MenuImageDataTbl[*(int *)(*(_QWORD *)&AppMain::pApp + 2197384i64)] + 26,
    FADE_IN);
  v12 = 113i64;
  v13 = 102i64;
  if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x800000) == 0 )
    v12 = 102i64;
  v14 = s_soundIndex.m_keys[v12].m_sharedBuffer.m_ptr;
  soundName.m_sharedBuffer.m_ptr = v14;
  if ( v14 )
  {
    v13 = (__int64)v14->m_refCount.m_ptr;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 16), 1ui64);
  }
  p_soundName = &soundName;
  AppMain::Sound_BGMPlay_GetSoundHashKey((AppMain *)v13, &result);
  v15 = result.m_sharedBuffer.m_ptr;
  if ( !result.m_sharedBuffer.m_ptr )
    goto LABEL_27;
  v16 = soundName.m_sharedBuffer.m_ptr;
  if ( soundName.m_sharedBuffer.m_ptr )
    m_str = soundName.m_sharedBuffer.m_ptr->m_str;
  v17 = result.m_sharedBuffer.m_ptr->m_str;
  v18 = m_str - result.m_sharedBuffer.m_ptr->m_str;
  do
  {
    v19 = (unsigned __int8)v17[v18];
    v20 = (unsigned __int8)*v17 - v19;
    if ( v20 )
      break;
    ++v17;
  }
  while ( v19 );
  if ( v20 )
  {
LABEL_27:
    AppMain::Sound_PlayBGMByName(this, &soundName, 0.0, 0.0, 0);
    extension::SoundHashKey::operator=(&this->m_nowPlayBGM, &soundName);
    v16 = soundName.m_sharedBuffer.m_ptr;
  }
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v15->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))result.m_sharedBuffer.m_ptr->~RefCountableWeakSupportBase)(
        result.m_sharedBuffer.m_ptr,
        1i64);
    v16 = soundName.m_sharedBuffer.m_ptr;
  }
  if ( v16
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v16->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v16->~RefCountableWeakSupportBase)(
      v16,
      1i64);
  }
  v21 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v22 = *v21;
  v23 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v21 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v23 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v23 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] = GAME_MODE_FREEMATCH;
  if ( v23 > *(_DWORD *)(v22 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v24);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( *(_QWORD *)&AppMain::pApp )
  {
    `GameDataInfo::getInstance'::`2'::instance.m_AiLevel = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197392i64);
    `GameDataInfo::getInstance'::`2'::instance.m_WinRoundCount = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197396i64);
    `GameDataInfo::getInstance'::`2'::instance.m_TimeSetting = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197400i64);
  }
  this->MatchingType = NETWORK_MATCHING_TYPE_FREE;
  this->iReserveScene = -1;
  this->m_FuncST = 138;
  this->m_FuncBT = 139;
  AppMain::SceneFunc(this, 138);
  this->m_FuncExit = 137;
}

void __fastcall AppMain::ST_FreematchLoop(AppMain *this)
{
  GfxManager *v2; // rax
  GfxManager *v3; // r15
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  GfxManager *v5; // rax
  extension::GFXIMovieStack *v6; // rax
  __int64 m_Status; // rdx
  int v8; // eax
  int v9; // ecx
  int v10; // er8
  char *m_textBuffer; // rdi
  AppMain *v12; // rcx
  unsigned __int64 v13; // r9
  unsigned int v14; // edx
  char *v15; // r8
  __int64 v16; // rax
  int v17; // edx
  int v18; // edx
  int v19; // er8
  NETWORK_ERROR_TYPE error; // er14
  AppMain *v21; // rcx
  int v22; // eax
  unsigned __int64 v23; // rdx
  unsigned int v24; // er8
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  GfxManager *v28; // rax
  __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  extension::gfxi_detail::MovieProxy *v34; // [rsp+40h] [rbp-2D8h]
  extension::gfxi_detail::MovieProxy *v35; // [rsp+40h] [rbp-2D8h]
  extension::gfxi_detail::MovieProxy *v36; // [rsp+40h] [rbp-2D8h]
  GfxManager *v37; // [rsp+48h] [rbp-2D0h]
  GfxManager *v38; // [rsp+48h] [rbp-2D0h]
  Scaleform::GFx::Value ptr; // [rsp+50h] [rbp-2C8h] BYREF
  Scaleform::GFx::Value v40; // [rsp+80h] [rbp-298h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-268h]
  char v42[256]; // [rsp+C0h] [rbp-258h] BYREF
  unsigned __int64 v43; // [rsp+1C0h] [rbp-158h]
  char v44[256]; // [rsp+1D0h] [rbp-148h] BYREF
  unsigned __int64 m_textLength; // [rsp+2D0h] [rbp-48h]

  v41 = -2i64;
  v2 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v34 = (extension::gfxi_detail::MovieProxy *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)v34);
    GfxManager::instance = v2;
  }
  v3 = v2;
  if ( !v2 )
  {
    v35 = (extension::gfxi_detail::MovieProxy *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)v35);
    GfxManager::instance = v2;
  }
  m_ptr = v2->m_GFXMovie.m_movieProxy.m_ptr;
  v36 = v2->m_GFXMovie.m_movieProxy.m_ptr;
  if ( v2->m_GFXMovie.m_movieProxy.m_ptr )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 1ui64);
    m_ptr = v36;
  }
  SyncMenuImage::Update(&this->m_SyncMenuBG);
  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v37 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v37);
    GfxManager::instance = v5;
  }
  if ( v5->m_SystemMessageState != SYSTEM_MESSAGE_OPEN || !v5->m_SystemMessageLock )
  {
    v6 = extension::GFXIMovieStack::Instance();
    extension::GFXIMovieStack::advance(v6, 0.016666668);
    v5 = GfxManager::instance;
  }
  if ( !v5 )
  {
    v38 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v38);
    GfxManager::instance = v5;
  }
  if ( v5->m_SystemMessageState == SYSTEM_MESSAGE_OPEN )
    goto LABEL_111;
  m_Status = (unsigned int)Fw::ImeTarget::m_IMEPad.m_Status;
  v8 = Fw::ImeTarget::m_IMEPad.m_Status;
  v9 = Fw::ImeTarget::m_IMEKeyboard.m_Status;
  v10 = Fw::ImeTarget::m_currentIME;
  if ( Fw::ImeTarget::m_currentIME == IME_KEYBOARD )
    v8 = Fw::ImeTarget::m_IMEKeyboard.m_Status;
  m_textBuffer = Fw::ImeTarget::m_IMEKeyboard.m_textBuffer;
  if ( v8 == 1 )
  {
    if ( Fw::ImeTarget::m_currentIME )
    {
      if ( Fw::ImeTarget::m_IMEPad.m_Status != 2 )
        goto LABEL_31;
      strcpy_s(v44, 0x100ui64, Fw::ImeTarget::m_IMEPad.m_textBuffer);
      m_textLength = Fw::ImeTarget::m_IMEPad.m_textLength;
      Fw::ImeTarget::m_IMEPad.m_Status = 0;
    }
    else
    {
      if ( Fw::ImeTarget::m_IMEKeyboard.m_Status == 2 )
        v9 = 0;
      Fw::ImeTarget::m_IMEKeyboard.m_Status = v9;
      strcpy_s(v44, 0x100ui64, Fw::ImeTarget::m_IMEKeyboard.m_textBuffer);
      v13 = 0i64;
      v14 = 0;
      if ( Fw::ImeTarget::m_IMEKeyboard.m_textBuffer[0] )
      {
        v15 = Fw::ImeTarget::m_IMEKeyboard.m_textBuffer;
        do
        {
          if ( v14 >= 0x100 )
            break;
          v12 = (AppMain *)(v13 + 1);
          if ( (*v15 & 0xC0) == 0x80 )
            v12 = (AppMain *)v13;
          v13 = (unsigned __int64)v12;
          ++v14;
          ++v15;
        }
        while ( *v15 );
      }
      m_textLength = v13;
    }
    AppMain::UpdateRoomNameText(v12, v44);
    v10 = Fw::ImeTarget::m_currentIME;
    v9 = Fw::ImeTarget::m_IMEKeyboard.m_Status;
    m_Status = (unsigned int)Fw::ImeTarget::m_IMEPad.m_Status;
  }
LABEL_31:
  if ( s_SceneSequence == 3 )
  {
    if ( !v3->m_bQuitGFXMovie )
      goto LABEL_111;
    GfxManager::getInstance();
    v17 = *(_DWORD *)(v16 + 168);
    if ( v17 == 10 )
    {
      v18 = 152;
      v19 = 137;
    }
    else
    {
      if ( v17 != 9 )
        goto LABEL_111;
      v18 = 148;
      v19 = 137;
    }
LABEL_110:
    AppMain::setNonFadeSTExit(this, v18, v19);
    goto LABEL_111;
  }
  error = g_NetworkManager.gamedata.error;
  if ( s_FilterSequence != 1 )
  {
    v22 = m_Status;
    if ( !v10 )
      v22 = v9;
    if ( v22 != 2 )
      goto LABEL_63;
    if ( v10 )
    {
      if ( (_DWORD)m_Status == 2 )
      {
        strcpy_s(v42, 0x100ui64, Fw::ImeTarget::m_IMEPad.m_textBuffer);
        v23 = Fw::ImeTarget::m_IMEPad.m_textLength;
        v43 = Fw::ImeTarget::m_IMEPad.m_textLength;
        Fw::ImeTarget::m_IMEPad.m_Status = 0;
      }
      else
      {
        v23 = v43;
      }
    }
    else
    {
      if ( v9 == 2 )
        v9 = 0;
      Fw::ImeTarget::m_IMEKeyboard.m_Status = v9;
      strcpy_s(v42, 0x100ui64, Fw::ImeTarget::m_IMEKeyboard.m_textBuffer);
      v23 = 0i64;
      v24 = 0;
      if ( Fw::ImeTarget::m_IMEKeyboard.m_textBuffer[0] )
      {
        do
        {
          if ( v24 >= 0x100 )
            break;
          v25 = v23 + 1;
          if ( (*m_textBuffer & 0xC0) == 0x80 )
            v25 = v23;
          v23 = v25;
          ++v24;
          ++m_textBuffer;
        }
        while ( *m_textBuffer );
      }
      v43 = v23;
    }
    if ( v23 )
    {
      strcpy_s(s_FilterStr, 0x31ui64, v42);
      if ( Fw::WordFilterSystem::instance_
        || (Fw::WordFilterSystem::instance_ = (Fw::WordFilterSystem *)operator new(1ui64)) != 0i64 )
      {
        s_FilterSequence = 1;
        goto LABEL_63;
      }
    }
    s_FilterSequence = 0;
    SaveRecord_PlayerData::SetDefaultRoomName(&this->SaveDataMain.PlayerData);
LABEL_62:
    AppMain::UpdateRoomNameText(v21, this->SaveDataMain.PlayerData.m_MyRoomName);
    goto LABEL_63;
  }
  if ( Fw::WordFilterSystem::instance_
    || (Fw::WordFilterSystem::instance_ = (Fw::WordFilterSystem *)operator new(1ui64)) != 0i64 )
  {
    s_FilterSequence = 0;
    strcpy_s(this->SaveDataMain.PlayerData.m_MyRoomName, 0x31ui64, s_FilterStr);
    goto LABEL_62;
  }
  s_FilterSequence = 0;
LABEL_63:
  if ( error )
  {
    s_SceneSequence = 0;
    *(_QWORD *)&g_NetworkManager.gamedata.error = 0i64;
  }
  if ( !s_SceneSequence )
  {
    if ( this->m_bRequestCreateRoomSetting )
    {
      this->m_bRequestCreateRoomSetting = 0;
      this->s_RoomInitFlag = 1;
      if ( (unsigned int)(g_NetworkManager.gamedata.onlineState - 1) <= 2 )
        NetManager::RequestLeaveRoom(&g_NetworkManager, m_Status, v10);
      AppMain::CreateRoom(this, 0);
      g_NetworkManager.gamedata.m_SearchRoomLimit = 0;
      s_SceneSequence = 2;
    }
    else if ( this->m_bRequestSearchSetting )
    {
      this->m_bRequestSearchSetting = 0;
      AppMain::OnlineFreeMatchPartySearchRoom(this);
      g_NetworkManager.gamedata.m_SearchRoomLimit = 0;
      s_SceneSequence = 1;
    }
    else if ( m_ptr && Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.SearchEnd") )
    {
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.SearchEnd", 0i64, 0i64, 0);
    }
    goto LABEL_100;
  }
  if ( s_SceneSequence != 1 )
  {
    if ( s_SceneSequence == 2 && g_NetworkManager.gamedata.onlineState == NET_STATE_WAITCLIENT )
    {
      `eh vector constructor iterator'(
        &ptr,
        0x30ui64,
        1ui64,
        (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
        (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
      if ( (ptr.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
        ptr.pObjectInterface = 0i64;
      }
      ptr.Type = VT_Float;
      ptr.mValue.IValue = 9;
      if ( m_ptr && Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.StartEnd") )
        Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.StartEnd", 0i64, &ptr, 1u);
      s_SceneSequence = 3;
      v26 = *(_QWORD *)&AppMain::pApp;
      v27 = *(unsigned int *)(*(_QWORD *)&AppMain::pApp + 2205204i64) + 1i64;
      if ( v27 < 0 )
      {
        *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205204i64) = 0;
      }
      else if ( v27 >= 0xFFFFFFFFi64 )
      {
        *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205204i64) = -1;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205204i64) = v27;
        SaveRecord_PlayerData::CheckAchivementCountComplete((SaveRecord_PlayerData *)(v26 + 2202784), CREATE_ROOM);
      }
      `eh vector destructor iterator'(&ptr, 0x30ui64, 1ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
      goto LABEL_111;
    }
LABEL_100:
    if ( !v3->m_bQuitGFXMovie )
      goto LABEL_111;
    GfxManager::getInstance();
    v30 = *(_DWORD *)(v29 + 168);
    if ( v30 == -1 )
    {
      v18 = 132;
      v19 = 137;
    }
    else
    {
      switch ( v30 )
      {
        case 6:
          GfxManager::getInstance();
          *(_DWORD *)(v31 + 212) = 2;
          break;
        case 7:
          GfxManager::getInstance();
          *(_DWORD *)(v32 + 212) = 3;
          break;
        case 8:
          GfxManager::getInstance();
          *(_DWORD *)(v33 + 212) = 4;
          break;
        default:
          goto LABEL_111;
      }
      this->m_PrevScene = 136;
      v18 = 80;
      v19 = 129;
    }
    goto LABEL_110;
  }
  if ( g_NetworkManager.gamedata.onlineState != NET_STATE_SELECTROOM
    || !Fw::MatchingTarget::m_IsRoomSearchEnd
    || !Fw::MatchingTarget::m_SearchRoomNum )
  {
    if ( g_NetworkManager.gamedata.m_SearchRoomLimit )
    {
      GfxManager::getInstance();
      GfxManager::GFv_SetSystemMessage(v28, "$POPUP_NOTFOUND", SYSTEM_MESSAGE_OK, 0, 1, "no_title", &pnewText, "size_s");
      s_SceneSequence = 0;
      g_NetworkManager.gamedata.m_SearchRoomLimit = 0;
    }
    goto LABEL_100;
  }
  `eh vector constructor iterator'(
    &v40,
    0x30ui64,
    1ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  if ( (v40.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v40.pObjectInterface, &v40, v40.mValue.pStringManaged);
    v40.pObjectInterface = 0i64;
  }
  v40.Type = VT_Float;
  v40.mValue.IValue = 10;
  if ( m_ptr && Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.StartEnd") )
    Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.StartEnd", 0i64, &v40, 1u);
  s_SceneSequence = 3;
  `eh vector destructor iterator'(&v40, 0x30ui64, 1ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
LABEL_111:
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::gfxi_detail::MovieProxy::~MovieProxy(v36);
      operator delete(v36, 0xE8ui64);
    }
  }
}

void __fastcall AppMain::UpdateRoomNameText(AppMain *this, const char *name)
{
  GfxManager *v3; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value presult; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v6; // [rsp+60h] [rbp-78h]
  Scaleform::GFx::Value val; // [rsp+70h] [rbp-68h] BYREF
  GfxManager *v8; // [rsp+E0h] [rbp+8h]

  v6 = -2i64;
  `eh vector constructor iterator'(
    &val,
    0x30ui64,
    2ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  presult.pObjectInterface = 0i64;
  presult.Type = VT_None;
  if ( (val.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
    val.pObjectInterface = 0i64;
  }
  val.Type = 6;
  val.mValue.pString = name;
  v3 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v3;
  }
  m_ptr = v3->m_GFXMovie.m_movieProxy.m_ptr;
  if ( Scaleform::GFx::Movie::IsAvailable(v3->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject, "_root.UpdateRoomName") )
    Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.UpdateRoomName", &presult, &val, 1u);
  if ( (presult.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      presult.pObjectInterface,
      &presult,
      presult.mValue.pStringManaged);
    presult.pObjectInterface = 0i64;
  }
  presult.Type = VT_None;
  `eh vector destructor iterator'(&val, 0x30ui64, 2ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

