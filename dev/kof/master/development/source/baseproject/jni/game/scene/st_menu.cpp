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
#include "dev/kof/master/development/source/baseproject/jni/game/util/easycommand.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/util/easycommand.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingtargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/content/contentsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/menudata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/menuutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/invitationcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/invitationsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingtransceiverpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.cpp"

const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5DA10
long s_sound_mute_time; // 0x140AC22D4
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B10
void LoadCompleteEventMenu(); // 0x1401C7760
void AppMain::ST_MenuInit(); // 0x1401C77D0
void AppMain::ST_MenuExit(); // 0x1401C7D70
void AppMain::ST_MenuLoop(); // 0x1401C7DF0
void AppMain::ST_MenuDraw(); // 0x1401C06B0
long AppMain::OnlineInitializeStep(bool devMode); // 0x1401C84F0//decompilation failure at 140A5DA10!
//decompilation failure at 140AC22D4!
//decompilation failure at 1408A0B10!
void __fastcall LoadCompleteEventTitle()
{
  __int64 v0; // r8
  int v1; // ecx

  v0 = *(_QWORD *)&AppMain::pApp;
  if ( *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507460i64) )
  {
    v1 = 1000 * *(unsigned __int8 *)(*(_QWORD *)&AppMain::pApp + 2507456i64);
    *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2507472i64) = 0;
    *(_DWORD *)(v0 + 2507452) = 30;
    *(_BYTE *)(v0 + 2507474) = 0;
    *(_DWORD *)(v0 + 7364) = 171;
    *(_DWORD *)(v0 + 2507460) = v1;
    *(_DWORD *)(v0 + 2507464) = v1 / 30;
  }
}

__int64 __fastcall AppMain::OnlineInitializeStep(AppMain *this, __int64 devMode, int a3)
{
  __int64 v4; // rax
  bool v5; // al
  bool v6; // zf
  bool v7; // cl
  clasChkDisconOnlineSv *v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  AppMain *v12; // r9
  int m_RankMatchCount; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  unsigned int v16; // er8
  int m_DisconnectNum; // eax
  GameDataInfo *Instance; // rax
  GameDataInfo *v19; // rax
  __int64 v20; // rax
  __int64 result; // [rsp+40h] [rbp+18h] BYREF

  switch ( this->m_OnlineStep )
  {
    case UI_ONLINE_NETWORK_INIT:
      if ( this->m_bNotificationRunning )
        return 1i64;
      if ( !Fw::NetworkStatusCommon::m_OnlineFlag )
        goto LABEL_29;
      Fw::NetworkCommon::InitializeNpId();
      *(_WORD *)&this->m_bNetworkLockMsgFinish = 0;
      this->m_bNetworkLockDlgOpen = 0;
      this->m_OnlineStep = UI_ONLINE_NET_USE_CHECK;
      return 1i64;
    case UI_ONLINE_NET_USE_CHECK:
      this->m_OnlineStep = UI_ONLINE_NETWORK_CHECK;
      return 1i64;
    case UI_ONLINE_NETWORK_CHECK:
      this->m_OnlineStep = UI_ONLINE_NETWORK_WAIT;
      goto $LN16_44;
    case UI_ONLINE_NETWORK_WAIT:
$LN16_44:
      this->m_OnlineStep = UI_ONLINE_STEP_LOAD;
      return 1i64;
    case UI_ONLINE_STEP_PLUS_CHECK:
      this->m_OnlineStep = UI_ONLINE_STEP_PLUS_WAIT;
      return 1i64;
    case UI_ONLINE_STEP_LOAD:
      this->m_OnlineStep = UI_ONLINE_STEP_WAIT;
      return 1i64;
    case UI_ONLINE_STEP_WAIT:
      this->m_OnlineStep = UI_ONLINE_STEP_WAIT1_1;
      goto $LN22_25;
    case UI_ONLINE_STEP_WAIT1_1:
$LN22_25:
      if ( !Fw::MatchingCommon::Initialize((Fw::HeapMemory *)0x140000000i64) )
        goto LABEL_29;
      this->m_OnlineStep = UI_ONLINE_STEP_WAIT1_2;
$LN24_25:
      v5 = Fw::MatchingTarget::m_IsOnlineStarted;
      v6 = !Fw::MatchingTarget::m_IsOnlineStarted;
      this->m_OnlineStep = UI_ONLINE_STEP_WAIT2;
      v7 = v5;
      v4 = 1i64;
      if ( v6 )
        v7 = 1;
      Fw::MatchingTarget::m_IsOnlineStarted = v7;
      return v4;
    case UI_ONLINE_STEP_WAIT1_2:
      goto $LN24_25;
    case UI_ONLINE_STEP_WAIT2:
      this->m_OnlineStep = UI_ONLINE_STEP_WAIT3;
      return 1i64;
    case UI_ONLINE_STEP_WAIT3:
      this->m_OnlineStep = UI_ONLINE_STEP_OTHER;
      return 1i64;
    case UI_ONLINE_STEP_OTHER:
      NetManager::Startup(&g_NetworkManager, devMode, a3);
      g_NetworkManager.gamedata.userInfo.m_OnlineID = Fw::NetworkCommon::m_NpOnlineId;
      *(_WORD *)&g_NetworkManager.gamedata.userInfo.m_Antenna = 7;
      g_NetworkManager.gamedata.onlinePlay = 1;
      clasChkDisconOnlineSv::getinstance();
      AppMain::TusGetOnlineProfile(
        *(AppMain **)&AppMain::pApp,
        &Fw::NetworkCommon::m_NpOnlineId.data,
        &m_online_proffile_data,
        &m_online_load_state);
      time64(&result);
      this->m_timeout_disconnect_check = result;
      v4 = 1i64;
      this->m_OnlineStep = UI_ONLINE_STEP_CHECK_DISCONNECT;
      return v4;
    case UI_ONLINE_STEP_CHECK_DISCONNECT:
      v8 = clasChkDisconOnlineSv::getinstance();
      v9 = clasChkDisconOnlineSv::check(v8);
      if ( !v9 )
        goto LABEL_29;
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( !v11 )
        {
LABEL_27:
          this->m_OnlineStep = UI_ONLINE_STEP_END;
          return 1i64;
        }
        if ( v11 == 1 )
        {
          v12 = *(AppMain **)&AppMain::pApp;
          this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] |= 0x800u;
          m_RankMatchCount = v12->SaveDataMain.PlayerData.m_RankMatchCount;
          ++v12->SaveDataMain.PlayerData.m_DisconnectNum;
          v12->SaveDataMain.PlayerData.m_RankMatchWins = 2068357982;
          v14 = m_RankMatchCount ^ 0x7B48A35E ^ ((unsigned __int16)m_RankMatchCount ^ 0xA35E ^ (unsigned __int16)((m_RankMatchCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)m_RankMatchCount ^ 0xA35E ^ (unsigned __int16)((m_RankMatchCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
          v15 = ((v14 ^ (v14 >> 7)) & 0x550055 ^ v14 ^ (((v14 ^ (v14 >> 7)) & 0x550055) << 7)) + 1;
          v16 = v15 ^ (v15 ^ (v15 >> 7)) & 0x550055 ^ (((v15 ^ (v15 >> 7)) & 0x550055) << 7);
          v12->SaveDataMain.PlayerData.m_RankMatchCount = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)(v16 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v16 ^ (unsigned __int16)(v16 >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
          m_DisconnectNum = v12->SaveDataMain.PlayerData.m_DisconnectNum;
          if ( m_DisconnectNum > 5 )
            m_DisconnectNum = 5;
          v12->SaveDataMain.PlayerData.m_DisconnectNum = m_DisconnectNum;
          AppMain::NoticeDiscoonectLevel(v12, 1);
          goto LABEL_27;
        }
        return 1i64;
      }
      time64(&result);
      if ( this->TIMEOUT_DISCONNECT_CHECK >= result - this->m_timeout_disconnect_check )
        return 1i64;
LABEL_29:
      this->m_OnlineStep = UI_ONLINE_STEP_ERROR;
      return 1i64;
    case UI_ONLINE_STEP_END:
      Instance = GameDataInfo::getInstance();
      Instance->m_GameMode[Instance->m_GameModeIndex] = GAME_MODE_ONLINE;
      v19 = GameDataInfo::getInstance();
      GameDataInfo::SetDefaultSettingSaveData(v19);
      GfxManager::getInstance();
      *(_DWORD *)(v20 + 200) = 0;
      return 2i64;
    case UI_ONLINE_STEP_ERROR:
      this->m_OnlineStep = UI_ONLINE_STEP_NONE;
      return 3i64;
    default:
      return 1i64;
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

void __fastcall AppMain::ST_MenuExit(AppMain *this)
{
  GfxManager *v1; // rax
  EasyCommand *v2; // rax
  GfxManager *v3; // [rsp+40h] [rbp+8h]

  v1 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v3 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v3);
    GfxManager::instance = v1;
  }
  GfxManager::ReleaseGFXMovie(v1, 0);
  v2 = EasyCommand::instance;
  if ( !EasyCommand::instance )
  {
    v2 = (EasyCommand *)operator new((unsigned int)((_DWORD)EasyCommand::instance + 12));
    *(_QWORD *)v2->m_TimeCount = 0i64;
    v2->m_CommandCount[0] = 0;
    EasyCommand::instance = v2;
  }
  v2->m_CommandStatus[0] = STOP;
}

void __fastcall AppMain::ST_MenuInit(AppMain *this, __int64 a2, __int64 a3, int a4)
{
  GfxManager *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rsi
  GameDataInfo *v8; // rcx
  Fw::ContentCommon *Instance; // rax
  __int64 v10; // rdx
  GfxManager *v11; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  extension::gfxi_detail::MovieProxy *v13; // rcx
  int v14; // eax
  GameDataInfo *v15; // rcx
  GameDataInfo *v16; // rcx
  UserGameOperation *v17; // rax
  GfxManager *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v21; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v22; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v23; // r8
  char *m_str; // r9
  char *v25; // rax
  signed __int64 v26; // r9
  std::vector<Fw::TUdpP2pInfo> *v27; // rcx
  int v28; // edx
  __int64 v29; // rdx
  const char *v30; // rcx
  int v31; // er8
  GameDataInfo *v32; // rcx
  Scene_RoomMember *pScene; // rcx
  unsigned int v34; // edx
  GfxManager *v35; // rax
  EasyCommand *v36; // rax
  extension::SoundHashKey soundName; // [rsp+70h] [rbp+8h] BYREF
  extension::SoundHashKey result; // [rsp+78h] [rbp+10h] BYREF
  extension::SoundHashKey *p_soundName; // [rsp+80h] [rbp+18h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v5;
  }
  GfxManager::LoadRequest(v5, FILE_01_UI_MENU, LoadCompleteEventTitle, a4);
  v6 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v7 = *v6;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v6 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v8);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  GameDataInfo::Init(&`GameDataInfo::getInstance'::`2'::instance);
  Instance = Fw::ContentCommon::GetInstance();
  Fw::ContentCommon::CheckAddContent(Instance, v10);
  *(_QWORD *)this->SaveDataMain.PlayerData.m_AchivementCount_TMP = 0i64;
  *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[2] = 0i64;
  *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[4] = 0i64;
  *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[6] = 0i64;
  *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[8] = 0i64;
  *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[10] = 0i64;
  *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[12] = 0i64;
  *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[14] = 0i64;
  v11 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v11;
  }
  if ( v11->m_GFXMovie.m_movieProxy.m_ptr )
  {
    v11->m_GFXMovie.m_movieProxy.m_ptr->m_bAdvance = 1;
    if ( v11->m_GFXMovie.m_movieProxy.m_ptr )
      v11->m_GFXMovie.m_movieProxy.m_ptr->m_bRender = 1;
  }
  if ( !v11 )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v11;
  }
  if ( v11->m_GFXMovieBG.m_movieProxy.m_ptr )
  {
    m_ptr = v11->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( m_ptr )
      m_ptr->m_bAdvance = 1;
    v13 = v11->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( v13 )
      v13->m_bRender = 1;
  }
  else
  {
    GfxManager::LoadRequestBG(v11);
  }
  AppMain::ReleaseMissionData(this);
  v14 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v7 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v14 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v15);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v14 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0] = USER_ID_1P;
  if ( v14 > *(_DWORD *)(v7 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v16);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1] = USER_ID_CPU;
  v17 = UserGameOperation::Instance();
  UserGameOperation::clear(v17);
  if ( this->m_NotificationGalleryID != GALLERY_ID_NONE )
  {
    v18 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
      GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
      GfxManager::instance = v18;
    }
    GfxManager::GFv_AddNotificationGallery(v18, GALLERY_TYPE_SOUND, 0, 0);
    this->m_NotificationGalleryID = GALLERY_ID_NONE;
  }
  SyncMenuImage::Load(
    &this->m_SyncMenuBG,
    (const ImageDataInfo *)MenuImageDataTbl[*(int *)(*(_QWORD *)&AppMain::pApp + 2197384i64)] + 26,
    FADE_IN);
  v19 = 113i64;
  v20 = 102i64;
  if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x800000) == 0 )
    v19 = 102i64;
  v21 = s_soundIndex.m_keys[v19].m_sharedBuffer.m_ptr;
  soundName.m_sharedBuffer.m_ptr = v21;
  if ( v21 )
  {
    v20 = (__int64)v21->m_refCount.m_ptr;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 16), 1ui64);
  }
  p_soundName = &soundName;
  AppMain::Sound_BGMPlay_GetSoundHashKey((AppMain *)v20, &result);
  v22 = result.m_sharedBuffer.m_ptr;
  if ( !result.m_sharedBuffer.m_ptr )
    goto LABEL_40;
  v23 = soundName.m_sharedBuffer.m_ptr;
  m_str = 0i64;
  if ( soundName.m_sharedBuffer.m_ptr )
    m_str = soundName.m_sharedBuffer.m_ptr->m_str;
  v25 = result.m_sharedBuffer.m_ptr->m_str;
  v26 = m_str - result.m_sharedBuffer.m_ptr->m_str;
  do
  {
    v27 = (std::vector<Fw::TUdpP2pInfo> *)(unsigned __int8)v25[v26];
    v28 = (unsigned __int8)*v25 - (_DWORD)v27;
    if ( v28 )
      break;
    ++v25;
  }
  while ( (_DWORD)v27 );
  if ( v28 )
  {
LABEL_40:
    AppMain::Sound_PlayBGMByName(this, &soundName, 0.0, 0.0, 0);
    extension::SoundHashKey::operator=(&this->m_nowPlayBGM, &soundName);
    v23 = soundName.m_sharedBuffer.m_ptr;
  }
  if ( v22 )
  {
    v27 = (std::vector<Fw::TUdpP2pInfo> *)_InterlockedExchangeAdd64(
                                            (volatile signed __int64 *)&v22->m_refCount.m_ptr->m_sharedCount,
                                            0xFFFFFFFFFFFFFFFFui64);
    if ( v27 == (std::vector<Fw::TUdpP2pInfo> *)1 )
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))result.m_sharedBuffer.m_ptr->~RefCountableWeakSupportBase)(
        result.m_sharedBuffer.m_ptr,
        1i64);
    v23 = soundName.m_sharedBuffer.m_ptr;
  }
  if ( v23
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v23->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v23->~RefCountableWeakSupportBase)(
      v23,
      1i64);
  }
  if ( !this->m_bInvitePermit )
    this->m_OnlineStep = UI_ONLINE_STEP_NONE;
  if ( Fw::MatchingTarget::m_RoomId.m_steamid.m_comp )
  {
    if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_FREE )
    {
      AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
      if ( Fw::MatchingTarget::IsRoomOwner(v30, v29) )
        qword_140ACD768 = 1i64;
      else
        Fw::InvitationCommon::m_SessionFlag = 0;
    }
    Fw::MatchingTarget::LeaveRoom();
    g_NetworkManager.gamedata.leaveRoomFlag = 1;
    NetManager::ChangeState(&g_NetworkManager, NET_STATE_TOP, v31);
  }
  g_NetworkManager.gamedata.reservationCreateRoomFlag = 0;
  g_NetworkManager.rank_traning_wait.stageID = STAGE_ID_NONE;
  if ( Fw::NetTransceiver::m_IsStartupFlag2 )
  {
    std::vector<Fw::TUdpP2pInfo>::clear(v27);
    Fw::NetTransceiver::m_IsStartupFlag2 = 0;
  }
  Fw::MatchingTarget::m_IsOnlineStarted = 0;
  this->m_OnlineContexStop = 0;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v7 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v32);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingEntry = 0;
  pScene = this->m_onlineRoomMemberParams.pScene;
  if ( pScene )
  {
    ((void (__fastcall *)(Scene_RoomMember *, __int64))pScene->~ErrorChecker)(pScene, 1i64);
    this->m_onlineRoomMemberParams.pScene = 0i64;
  }
  v34 = this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0];
  if ( (v34 & 0x1000000) != 0 )
  {
    v34 >>= 12;
    if ( (v34 & 1) == 0 )
    {
      v35 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        result.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
        GfxManager::GfxManager((GfxManager *)result.m_sharedBuffer.m_ptr);
        GfxManager::instance = v35;
      }
      GfxManager::GFv_AddNotification(v35, "$GET_BGM", ICON_NO_SOUND);
      this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] |= 0x1000u;
    }
  }
  if ( !this->m_Startup )
    AppMain::SaveDataAsyncSave(this, v34);
  this->m_Startup = 0;
  g_NetworkManager.gamedata.onlinePlay = 0;
  v36 = EasyCommand::instance;
  if ( !EasyCommand::instance )
  {
    v36 = (EasyCommand *)operator new((unsigned int)((_DWORD)EasyCommand::instance + 12));
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)v36;
    *(_QWORD *)v36->m_TimeCount = 0i64;
    v36->m_CommandCount[0] = 0;
    EasyCommand::instance = v36;
  }
  v36->m_CommandStatus[0] = STOP;
  s_sound_mute_time = 0;
  this->iReserveScene = -1;
  this->m_FuncST = 18;
  this->m_FuncBT = 19;
  AppMain::SceneFunc(this, 18);
  this->m_FuncExit = 17;
}

void __fastcall AppMain::ST_MenuLoop(AppMain *this, __int64 a2)
{
  GfxManager *v3; // rbp
  GfxManager *v4; // rax
  EasyCommand *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // er8
  EasyCommand *v9; // rax
  const extension::SoundHashKey *IfExist; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx
  UserGameOperation *v12; // rax
  int v13; // eax
  GfxManager *v14; // rax
  extension::GFXIMovieStack *v15; // rax
  int v16; // edi
  int v17; // ebx
  EasyIndicator *Instance; // rax
  MENU_ID m_MenuID; // ebx
  GameDataInfo *v20; // rax
  GameDataInfo *v21; // rax
  GameDataInfo *v22; // rax
  BattleSystem::BattleController *v23; // rax
  GameDataInfo *v24; // rax
  __int64 v25; // rax
  GameDataInfo *v26; // rax
  GameDataInfo *v27; // rax
  GameDataInfo *v28; // rax
  BattleSystem::BattleController *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  bool v33; // zf
  int v34; // eax
  int v35; // edx
  extension::SoundHashKey result; // [rsp+50h] [rbp+8h] BYREF

  v3 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    result.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)result.m_sharedBuffer.m_ptr);
    v3 = v4;
    GfxManager::instance = v4;
  }
  Fw::AchievementCommon::CheckPlatinumAchievement((__int64)this, a2);
  SyncMenuImage::Update(&this->m_SyncMenuBG);
  if ( this->m_iFadeAlpha && this->m_bFadeEnd )
  {
    v5 = EasyCommand::instance;
    if ( !EasyCommand::instance )
    {
      v5 = (EasyCommand *)operator new(0xCui64);
      result.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)v5;
      *(_QWORD *)v5->m_TimeCount = 0i64;
      v5->m_CommandCount[0] = 0;
      EasyCommand::instance = v5;
    }
    if ( v5->m_CommandStatus[0] == SKIP )
    {
      this->m_bFadeEnd = 0;
      this->m_iFadeFrame = 4;
      this->m_iFadeColor.rgba = -1;
      v6 = 1000 * this->m_iFadeColor.s.a;
      this->m_iFadeAlpha = v6;
      this->m_iFadeRate = v6 / 4;
      this->m_bFadeLock = 0;
      this->m_FuncFT = 171;
    }
  }
  else
  {
    v5 = EasyCommand::instance;
  }
  if ( !v5 )
  {
    v5 = (EasyCommand *)operator new(0xCui64);
    result.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)v5;
    *(_QWORD *)v5->m_TimeCount = 0i64;
    v5->m_CommandCount[0] = 0;
    EasyCommand::instance = v5;
  }
  if ( (EasyCommand::Update(v5) & 1) == 0 )
    goto LABEL_22;
  v9 = EasyCommand::instance;
  if ( !EasyCommand::instance )
  {
    v9 = (EasyCommand *)operator new((unsigned int)((_DWORD)EasyCommand::instance + 12));
    result.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)v9;
    *(_QWORD *)v9->m_TimeCount = 0i64;
    v9->m_CommandCount[0] = 0;
    EasyCommand::instance = v9;
  }
  if ( v9->m_CommandStatus[0] == SKIP )
  {
    this->m_CheatCommand = 1;
    IfExist = extension::SoundHashKey::MakeIfExist(&result, aA_170);
    if ( this != (AppMain *)-2196904i64 )
      extension::SoundList::playSEByName(this->m_Snd_Lists, IfExist, 0i64);
    m_ptr = result.m_sharedBuffer.m_ptr;
    if ( result.m_sharedBuffer.m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&result.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
    }
    anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_BGM, 0.30000001, 0.0);
    v12 = UserGameOperation::Instance();
    UserGameOperation::clear(v12);
    this->m_bFadeEnd = 0;
    this->m_iFadeFrame = 1;
    this->m_iFadeColor.rgba = -1;
    this->m_iFadeRate = 1000 * this->m_iFadeColor.s.a;
    this->m_iFadeAlpha = 0;
    this->m_bFadeLock = 0;
    this->m_FuncFT = 170;
    v13 = 180;
  }
  else
  {
LABEL_22:
    v13 = s_sound_mute_time;
    if ( s_sound_mute_time <= 0 )
      goto LABEL_25;
  }
  s_sound_mute_time = v13 - 1;
  if ( v13 == 1 )
    anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_BGM, 1.0, 0.5);
LABEL_25:
  v14 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    result.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)result.m_sharedBuffer.m_ptr);
    GfxManager::instance = v14;
  }
  if ( v14->m_SystemMessageState != SYSTEM_MESSAGE_OPEN || !v14->m_SystemMessageLock )
  {
    v15 = extension::GFXIMovieStack::Instance();
    extension::GFXIMovieStack::advance(v15, 0.016666668);
    v14 = GfxManager::instance;
  }
  if ( !v14 )
  {
    result.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)result.m_sharedBuffer.m_ptr);
    GfxManager::instance = v14;
  }
  if ( v14->m_SystemMessageState != SYSTEM_MESSAGE_OPEN )
  {
    if ( this->m_OnlineStep )
    {
      v16 = 920 * GAME_SCREEN_HEIGHT / 1080;
      v17 = 1760 * GAME_SCREEN_WIDTH / 1920;
      Instance = EasyIndicator::getInstance();
      EasyIndicator::RequestDraw(Instance, v17, v16, TYPE_CONNECTING);
    }
    if ( v3->m_bQuitGFXMovie && this->m_OnlineStep == UI_ONLINE_STEP_NONE )
    {
      m_MenuID = GameDataInfo::getInstance()->m_MenuID;
      GameDataInfo::getInstance()->m_ControllerSelect = 1;
      if ( s_sound_mute_time > 0 )
        anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_BGM, 1.0, 0.5);
      v7 = 0x140000000ui64;
      switch ( m_MenuID )
      {
        case MENU_ID_STORY:
          v20 = GameDataInfo::getInstance();
          v20->m_GameMode[v20->m_GameModeIndex] = GAME_MODE_STORY;
          v21 = GameDataInfo::getInstance();
          v21->m_GameRule[v21->m_GameRuleIndex] = GAME_RULE_TEAM;
          GameDataInfo::getInstance()->m_ControllerSetting[0] = USER_ID_1P;
          GameDataInfo::getInstance()->m_ControllerSetting[1] = USER_ID_CPU;
          v22 = GameDataInfo::getInstance();
          GameDataInfo::SetDefaultSettingSaveData(v22);
          BattleSystem::BattleController::GetActionSystem();
          BattleSystem::BattleController::BattleResultInit(v23);
          GameDataInfo::getInstance()->m_ContinueBous = BONUS_NONE;
          GameDataInfo::getInstance()->m_StoryWinCount = -1;
          v24 = GameDataInfo::getInstance();
          GameDataInfo::CreateStageID_Special(v24);
          if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x10000000) != 0 )
            goto LABEL_44;
          this->iReserveScene = -1;
          this->m_FadeST = 108;
          this->m_FuncST = 0;
          this->m_FadeExitFunc = 17;
          *(_WORD *)&this->m_bFadeEnd = 0;
          this->m_iFadeFrame = 10;
          *(_QWORD *)&this->m_iFadeColor.rgba = 255i64;
          this->m_iFadeRate = 100 * this->m_iFadeColor.s.a;
          this->m_bFadeLock = 0;
          this->m_FuncFT = 170;
          break;
        case MENU_ID_VERSUS:
          GfxManager::getInstance();
          *(_DWORD *)(v25 + 196) = 0;
          AppMain::setNonFadeSTExit(this, 20, 17);
          break;
        case MENU_ID_TRAING:
          v26 = GameDataInfo::getInstance();
          v26->m_GameMode[v26->m_GameModeIndex] = GAME_MODE_TRAINING;
          v27 = GameDataInfo::getInstance();
          v27->m_GameRule[v27->m_GameRuleIndex] = GAME_RULE_SINGLE;
          GameDataInfo::getInstance()->m_ControllerSetting[0] = USER_ID_1P;
          GameDataInfo::getInstance()->m_ControllerSetting[1] = USER_ID_CPU;
          v28 = GameDataInfo::getInstance();
          GameDataInfo::SetDefaultSettingSaveData(v28);
          BattleSystem::BattleController::GetActionSystem();
          BattleSystem::BattleController::BattleResultInit(v29);
LABEL_44:
          GfxManager::getInstance();
          *(_BYTE *)(v30 + 257) = 0;
          AppMain::setNonFadeSTExit(this, 24, 17);
          break;
        case MENU_ID_GALLERY:
          AppMain::setNonFadeSTExit(this, 48, 17);
          break;
        case MENU_ID_ONLINE:
          if ( this->m_OnlineStep == UI_ONLINE_STEP_NONE )
            this->m_OnlineStep = UI_ONLINE_NETWORK_INIT;
          break;
        case MENU_ID_MISSION:
          GfxManager::getInstance();
          *(_DWORD *)(v31 + 204) = 0;
          AppMain::setNonFadeSTExit(this, 52, 17);
          break;
        case MENU_ID_TUTORIAL:
          GameDataInfo::getInstance()->m_TutorialNo = 0;
          this->m_iMissionLoadDataCharaID = 998;
          this->m_iLoadingNextFunc = 160;
          this->m_FadeST = 187;
          this->m_FadeExitFunc = 161;
          goto LABEL_54;
        case MENU_ID_PLAYERDATA:
          GfxManager::getInstance();
          *(_DWORD *)(v32 + 208) = 0;
          AppMain::setNonFadeSTExit(this, 60, 17);
          break;
        case MENU_ID_OPTION:
          AppMain::setNonFadeSTExit(this, 44, 17);
          break;
        case MENU_ID_STORE:
          AppMain::setNonFadeSTExit(this, 208, 17);
          break;
        default:
          this->m_FadeST = 16;
          this->m_FadeExitFunc = 17;
LABEL_54:
          v33 = this->m_FuncFT == 170;
          this->m_bExitFuncWaitFrame = 0;
          this->m_FuncST = 0;
          this->iReserveScene = -1;
          if ( !v33 )
            this->m_FuncFT = 172;
          break;
      }
    }
    if ( (!this->m_bInvitePermit || this->m_bOnlineInitStartFromMenu) && this->m_OnlineStep )
    {
      this->m_bOnlineInitStartFromMenu = 1;
      v34 = AppMain::OnlineInitializeStep(this, v7, v8) - 2;
      if ( v34 )
      {
        if ( v34 != 1 )
          return;
        v35 = 16;
      }
      else
      {
        v35 = 100;
      }
      this->m_bOnlineInitStartFromMenu = 0;
      this->m_OnlineStep = UI_ONLINE_STEP_NONE;
      AppMain::setNonFadeSTExit(this, v35, 17);
    }
  }
}

