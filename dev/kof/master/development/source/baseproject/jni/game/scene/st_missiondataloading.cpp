#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cfile.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"

void AppMain::ReleaseMissionData(); // 0x1401C9550
void AppMain::ReleaseMissionKeyData(); // 0x1401C9620
enum MISSION_LOADING_INDEX
{
	INIT = 0,
	DATA_LOAD_WAIT = 1,
	FINISH = 2,
	LOAD_ERROR = 3,
};
void AppMain::ST_MissionDataLoadingLoop(); // 0x1401C96A0
void AppMain::ST_MissionDataLoadingDraw(); // 0x1401C9970
enum MISSION_KEY_LOADING_INDEX
{
	INIT = 0,
	DATA_LOAD_WAIT = 1,
	FINISH = 2,
	LOAD_ERROR = 3,
};
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5DC50
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B12
void AppMain::ST_MissionKeyDataLoadingLoop(); // 0x1401C9A20//decompilation failure at 140A5DC50!
//decompilation failure at 1408A0B12!
void __fastcall extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>(
        extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData> *this,
        extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> > c)
{
  volatile signed __int64 *My_val; // r8
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *v3; // rdi

  this->__vftable = (extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->m_running = 1;
  this->__vftable = (extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>_vtbl *)&extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>::`vftable';
  My_val = (volatile signed __int64 *)c.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  v3 = (extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v3 )
    {
      extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::~AsyncContent<AsyncKeyRecordDataLoad::KeyData>(v3);
      operator delete(v3, 0x68ui64);
    }
  }
}

void __fastcall extension::FutureObjectJob<ComboMissionData>::FutureObjectJob<ComboMissionData>(
        extension::FutureObjectJob<ComboMissionData> *this,
        extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> > c)
{
  volatile signed __int64 *My_val; // r8
  extension::AsyncContent<ComboMissionData> *v3; // rdi

  this->__vftable = (extension::FutureObjectJob<ComboMissionData>_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->m_running = 1;
  this->__vftable = (extension::FutureObjectJob<ComboMissionData>_vtbl *)&extension::FutureObjectJob<ComboMissionData>::`vftable';
  My_val = (volatile signed __int64 *)c.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<ComboMissionData> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  v3 = (extension::AsyncContent<ComboMissionData> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v3 )
    {
      extension::AsyncContent<ComboMissionData>::~AsyncContent<ComboMissionData>(v3);
      operator delete(v3, 0x68ui64);
    }
  }
}

void __fastcall AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob::AsyncLoadJob(
        AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob *this,
        extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> > c)
{
  extension::AsyncContent<ComboMissionData> *My_val; // rax
  extension::AsyncContent<ComboMissionData> *v5; // rdi
  extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> > ca; // [rsp+30h] [rbp+8h] BYREF

  My_val = (extension::AsyncContent<ComboMissionData> *)c.m_ptr->m_refCount.m_value._My_val;
  ca.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::FutureObjectJob<ComboMissionData>::FutureObjectJob<ComboMissionData>(
    this,
    (extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> >)&ca);
  this->__vftable = (AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob_vtbl *)&AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob::`vftable';
  v5 = (extension::AsyncContent<ComboMissionData> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<ComboMissionData>::~AsyncContent<ComboMissionData>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall AsyncKeyRecordDataLoad::AsyncLoadJob::AsyncLoadJob(
        AsyncKeyRecordDataLoad::AsyncLoadJob *this,
        extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> > c)
{
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *My_val; // rax
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *v5; // rdi
  extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> > ca; // [rsp+30h] [rbp+8h] BYREF

  My_val = (extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *)c.m_ptr->m_refCount.m_value._My_val;
  ca.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>(
    this,
    (extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> >)&ca);
  this->__vftable = (AsyncKeyRecordDataLoad::AsyncLoadJob_vtbl *)&AsyncKeyRecordDataLoad::AsyncLoadJob::`vftable';
  v5 = (extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::~AsyncContent<AsyncKeyRecordDataLoad::KeyData>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>::~FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>(
        extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData> *this)
{
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *m_ptr; // rdi
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *v3; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>_vtbl *)&extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>::`vftable';
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    m_ptr->m_errorCode = 5;
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&m_ptr->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount,
    0xFFFFFFFFFFFFFFFFui64);
  v3 = this->m_content.m_ptr;
  if ( v3 && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::~AsyncContent<AsyncKeyRecordDataLoad::KeyData>(v3);
    operator delete(v3, 0x68ui64);
  }
  this->__vftable = (extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall extension::FutureObjectJob<ComboMissionData>::~FutureObjectJob<ComboMissionData>(
        extension::FutureObjectJob<ComboMissionData> *this)
{
  extension::AsyncContent<ComboMissionData> *m_ptr; // rdi
  extension::AsyncContent<ComboMissionData> *v3; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<ComboMissionData>_vtbl *)&extension::FutureObjectJob<ComboMissionData>::`vftable';
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    m_ptr->m_errorCode = 5;
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&m_ptr->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount,
    0xFFFFFFFFFFFFFFFFui64);
  v3 = this->m_content.m_ptr;
  if ( v3 && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<ComboMissionData>::~AsyncContent<ComboMissionData>(v3);
    operator delete(v3, 0x68ui64);
  }
  this->__vftable = (extension::FutureObjectJob<ComboMissionData>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall std::unique_ptr<OGLModel>::~unique_ptr<OGLModel>(
        std::unique_ptr<extension::SoundList::LazyMediaSetBuildJob> *this)
{
  extension::SoundList::LazyMediaSetBuildJob *Myval2; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( Myval2 )
    ((void (__fastcall *)(extension::SoundList::LazyMediaSetBuildJob *, __int64))Myval2->~AgIThreadHost)(Myval2, 1i64);
}

__int64 __fastcall AsyncCharaFileLoad<ComboMissionData>::GetErrorCode(AsyncKeyRecordDataLoad *this)
{
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *m_ptr; // rbx
  unsigned __int64 My_val; // rdx

  m_ptr = this->state.m_ptr;
  if ( !this->state.m_ptr )
    return 1i64;
  My_val = m_ptr->m_status.m_stateFlags.m_value._My_val;
  if ( (My_val & 1) == 0 )
    extension::AsyncStatus::waitFor(&m_ptr->m_status, (extension::AsyncStatus::Step)My_val);
  return (unsigned int)m_ptr->m_errorCode;
}

char __fastcall AsyncKeyRecordDataLoad::GetInputKeyRecord(AsyncKeyRecordDataLoad *this, InputKeyRecord *record)
{
  InputKeyRecord *v2; // r14
  RestrictRingBuffer<InputKeyRecord::RecordKey> *Myval2; // rax
  __int64 v5; // rbx
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *m_ptr; // rdi
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *v7; // rdi
  AsyncKeyRecordDataLoad::KeyData *v8; // rax
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *v9; // rdi
  extension::AsyncStatus *p_m_status; // rcx
  InputKeyRecord::RecordKey *v11; // rbp
  RestrictRingBuffer<InputKeyRecord::RecordKey> *v12; // rax
  InputKeyRecord::RecordKey *pBuffer; // r8
  unsigned int uiBeginIndex; // er8
  unsigned int v15; // ecx
  unsigned int uiDataSize; // ecx
  InputKeyRecord::RecordKey v18; // [rsp+40h] [rbp+8h]

  v2 = record;
  if ( !this->state.m_ptr || (this->state.m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    return 0;
  Myval2 = record->pKeyBuffer._Mypair._Myval2;
  v5 = 0i64;
  Myval2->uiDataSize = 0;
  *(_QWORD *)&Myval2->uiBeginIndex = 0i64;
  record->uiPlayCount = 0;
  while ( 1 )
  {
    m_ptr = this->state.m_ptr;
    if ( (this->state.m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&this->state.m_ptr->m_status, (extension::AsyncStatus::Step)record);
    if ( (unsigned int)v5 >= m_ptr->m_data._Mypair._Myval2->uiKeyCount )
      break;
    v7 = this->state.m_ptr;
    if ( (this->state.m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&this->state.m_ptr->m_status, (extension::AsyncStatus::Step)record);
    v8 = v7->m_data._Mypair._Myval2;
    v9 = this->state.m_ptr;
    p_m_status = &this->state.m_ptr->m_status;
    v11 = v8->pKey._Mypair._Myval2;
    if ( (p_m_status->m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(p_m_status, (extension::AsyncStatus::Step)record);
    v12 = v2->pKeyBuffer._Mypair._Myval2;
    if ( v2->pKeyBuffer._Mypair._Myval2->uiDataSize < v2->uiMaxRecordFrame )
    {
      record = (InputKeyRecord *)v9->m_data._Mypair._Myval2->pKey._Mypair._Myval2;
      pBuffer = v12->pBuffer;
      if ( pBuffer )
      {
        v18.iCAngle = v11[v5].iCAngle;
        v18.iKey = *((_DWORD *)&record->pKeyBuffer._Mypair._Myval2 + 2 * v5);
        pBuffer[v12->uiEndIndex] = v18;
        LODWORD(record) = v12->uiBufferMask;
        uiBeginIndex = v12->uiBeginIndex;
        v15 = (unsigned int)record & (v12->uiEndIndex + 1);
        v12->uiEndIndex = v15;
        if ( v15 == uiBeginIndex )
          v12->uiBeginIndex = (unsigned int)record & (uiBeginIndex + 1);
        uiDataSize = v12->uiDataSize;
        if ( v12->uiBufferSize != uiDataSize )
          v12->uiDataSize = uiDataSize + 1;
      }
    }
    v5 = (unsigned int)(v5 + 1);
  }
  return 1;
}

void __fastcall AsyncCharaFileLoad<ComboMissionData>::LoadCharaFile(
        AsyncCharaFileLoad<ComboMissionData> *this,
        std::string *filePath)
{
  extension::AsyncContent<ComboMissionData> *v4; // rax
  extension::AsyncContent<ComboMissionData> *v5; // rdi
  std::string *p_m_name; // rcx
  char *Buf; // rax
  char **p_m_loadOptionString; // rax
  extension::AsyncContent<ComboMissionData> *m_ptr; // rbx
  extension::AsyncContent<ComboMissionData> *v10; // rax
  extension::AsyncContent<ComboMissionData> *v11; // rcx
  extension::ExThread::Runnable *v12; // rax
  extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> > c; // [rsp+20h] [rbp-78h] BYREF
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+28h] [rbp-70h] BYREF
  void (__fastcall ***v15)(_QWORD, __int64); // [rsp+30h] [rbp-68h] BYREF
  void (__fastcall ***v16)(_QWORD, __int64); // [rsp+38h] [rbp-60h] BYREF
  void (__fastcall ****v17)(_QWORD, __int64); // [rsp+40h] [rbp-58h]
  __int64 v18; // [rsp+48h] [rbp-50h]
  __int64 v19; // [rsp+50h] [rbp-48h]
  std::string *v20; // [rsp+58h] [rbp-40h]

  v18 = -2i64;
  v20 = filePath;
  this->bWorking = 1;
  v4 = (extension::AsyncContent<ComboMissionData> *)operator new(0x68ui64);
  v5 = v4;
  obj._Mypair._Myval2 = (extension::ExThread::Runnable *)v4;
  v4->m_refCount.m_value._My_val = 1i64;
  p_m_name = (std::string *)&v4->m_name;
  v4->m_name._Mypair._Myval2._Myres = 15i64;
  v4->m_name._Mypair._Myval2._Mysize = 0i64;
  if ( v4->m_name._Mypair._Myval2._Myres < 0x10 )
    Buf = v4->m_name._Mypair._Myval2._Bx._Buf;
  else
    Buf = p_m_name->_Mypair._Myval2._Bx._Ptr;
  *Buf = 0;
  std::string::assign(p_m_name, filePath, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  p_m_loadOptionString = (char **)&v5->m_loadOptionString;
  v5->m_loadOptionString._Mypair._Myval2._Myres = 15i64;
  v5->m_loadOptionString._Mypair._Myval2._Mysize = 0i64;
  if ( v5->m_loadOptionString._Mypair._Myval2._Myres >= 0x10 )
    p_m_loadOptionString = (char **)*p_m_loadOptionString;
  *(_BYTE *)p_m_loadOptionString = 0;
  v17 = 0i64;
  v5->m_data._Mypair._Myval2 = 0i64;
  v5->m_status.m_stateFlags.m_value._My_val = 0i64;
  v5->m_status.m_stateFlags.m_value._My_val = 0i64;
  v5->m_errorCode = 0;
  v5->m_isDataReleased = 0;
  m_ptr = this->state.m_ptr;
  this->state.m_ptr = v5;
  if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<ComboMissionData>::~AsyncContent<ComboMissionData>(m_ptr);
    operator delete(m_ptr, 0x68ui64);
  }
  v10 = (extension::AsyncContent<ComboMissionData> *)operator new(0x20ui64);
  c.m_ptr = v10;
  v11 = this->state.m_ptr;
  c.m_ptr = v11;
  if ( v11 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v11, 1ui64);
  AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob::AsyncLoadJob(
    (AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob *)v10,
    (extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> >)&c);
  v19 = 0i64;
  v17 = &v16;
  v16 = 0i64;
  c.m_ptr = (extension::AsyncContent<ComboMissionData> *)&v15;
  v15 = 0i64;
  obj._Mypair._Myval2 = v12;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
    &extension::AsyncWorker::s_instance.m_loadJobConsumer.m_jobQueue,
    (std::unique_ptr<extension::ExThread::Runnable>)&obj);
  if ( v15 )
    (**v15)(v15, 1i64);
  if ( v16 )
    (**v16)(v16, 1i64);
  std::string::~string(filePath);
}

void __fastcall AsyncKeyRecordDataLoad::LoadKeyRecordFile(AsyncKeyRecordDataLoad *this, std::string *filePath)
{
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *v4; // rax
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *v5; // rdi
  std::string *p_m_name; // rcx
  char *Buf; // rax
  char **p_m_loadOptionString; // rax
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *m_ptr; // rbx
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *v10; // rax
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *v11; // rcx
  extension::ExThread::Runnable *v12; // rax
  extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> > c; // [rsp+20h] [rbp-78h] BYREF
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+28h] [rbp-70h] BYREF
  void (__fastcall ***v15)(_QWORD, __int64); // [rsp+30h] [rbp-68h] BYREF
  void (__fastcall ***v16)(_QWORD, __int64); // [rsp+38h] [rbp-60h] BYREF
  void (__fastcall ****v17)(_QWORD, __int64); // [rsp+40h] [rbp-58h]
  __int64 v18; // [rsp+48h] [rbp-50h]
  __int64 v19; // [rsp+50h] [rbp-48h]
  std::string *v20; // [rsp+58h] [rbp-40h]

  v18 = -2i64;
  v20 = filePath;
  this->bWorking = 1;
  v4 = (extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *)operator new(0x68ui64);
  v5 = v4;
  obj._Mypair._Myval2 = (extension::ExThread::Runnable *)v4;
  v4->m_refCount.m_value._My_val = 1i64;
  p_m_name = (std::string *)&v4->m_name;
  v4->m_name._Mypair._Myval2._Myres = 15i64;
  v4->m_name._Mypair._Myval2._Mysize = 0i64;
  if ( v4->m_name._Mypair._Myval2._Myres < 0x10 )
    Buf = v4->m_name._Mypair._Myval2._Bx._Buf;
  else
    Buf = p_m_name->_Mypair._Myval2._Bx._Ptr;
  *Buf = 0;
  std::string::assign(p_m_name, filePath, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  p_m_loadOptionString = (char **)&v5->m_loadOptionString;
  v5->m_loadOptionString._Mypair._Myval2._Myres = 15i64;
  v5->m_loadOptionString._Mypair._Myval2._Mysize = 0i64;
  if ( v5->m_loadOptionString._Mypair._Myval2._Myres >= 0x10 )
    p_m_loadOptionString = (char **)*p_m_loadOptionString;
  *(_BYTE *)p_m_loadOptionString = 0;
  v17 = 0i64;
  v5->m_data._Mypair._Myval2 = 0i64;
  v5->m_status.m_stateFlags.m_value._My_val = 0i64;
  v5->m_status.m_stateFlags.m_value._My_val = 0i64;
  v5->m_errorCode = 0;
  v5->m_isDataReleased = 0;
  m_ptr = this->state.m_ptr;
  this->state.m_ptr = v5;
  if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::~AsyncContent<AsyncKeyRecordDataLoad::KeyData>(m_ptr);
    operator delete(m_ptr, 0x68ui64);
  }
  v10 = (extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *)operator new(0x20ui64);
  c.m_ptr = v10;
  v11 = this->state.m_ptr;
  c.m_ptr = v11;
  if ( v11 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v11, 1ui64);
  AsyncKeyRecordDataLoad::AsyncLoadJob::AsyncLoadJob(
    (AsyncKeyRecordDataLoad::AsyncLoadJob *)v10,
    (extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> >)&c);
  v19 = 0i64;
  v17 = &v16;
  v16 = 0i64;
  c.m_ptr = (extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *)&v15;
  v15 = 0i64;
  obj._Mypair._Myval2 = v12;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
    &extension::AsyncWorker::s_instance.m_loadJobConsumer.m_jobQueue,
    (std::unique_ptr<extension::ExThread::Runnable>)&obj);
  if ( v15 )
    (**v15)(v15, 1i64);
  if ( v16 )
    (**v16)(v16, 1i64);
  std::string::~string(filePath);
}

void __fastcall AppMain::ReleaseMissionData(AppMain *this)
{
  BattleSystem::BattleController *v2; // rax
  ComboMissionData *Myval2; // rcx
  extension::AsyncContent<ComboMissionData> *m_ptr; // rbx
  BattleSystem::BattleController *v5; // [rsp+40h] [rbp+8h]

  AppMain::ReleaseMissionKeyData(this);
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v5 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v5);
    BattleSystem::BattleController::instance = v2;
  }
  BattleSystem::ComboMissionJudge::Dispose(&v2->comboMission);
  Myval2 = this->m_pComboMissionData._Mypair._Myval2;
  this->m_pComboMissionData._Mypair._Myval2 = 0i64;
  if ( Myval2 )
    ((void (__fastcall *)(ComboMissionData *, __int64))Myval2->~CharaFileBase)(Myval2, 1i64);
  m_ptr = this->m_ComboMissionDataLoad.state.m_ptr;
  this->m_ComboMissionDataLoad.state.m_ptr = 0i64;
  if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<ComboMissionData>::~AsyncContent<ComboMissionData>(m_ptr);
    operator delete(m_ptr, 0x68ui64);
  }
  this->m_iMissionLoadDataCharaID = -1;
}

void __fastcall AppMain::ReleaseMissionKeyData(AppMain *this)
{
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *m_ptr; // rbx

  m_ptr = this->m_KeyRecordDataLoad.state.m_ptr;
  this->m_KeyRecordDataLoad.state.m_ptr = 0i64;
  if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::~AsyncContent<AsyncKeyRecordDataLoad::KeyData>(m_ptr);
    operator delete(m_ptr, 0x68ui64);
    this->m_iMissionKeyDataID = -1;
  }
  else
  {
    this->m_iMissionKeyDataID = -1;
  }
}

void __fastcall AppMain::ST_MissionDataLoadingDraw(AppMain *this)
{
  Graphics *v2; // rcx
  int v3; // er8
  int v4; // er9
  GfxManager *v5; // rax
  extension::GFXIMovieStack *v6; // rax
  GfxManager *v7; // [rsp+50h] [rbp+8h]

  GraphicsOpt::lock(this->g);
  Graphics::clearScreen(v2, -16777216);
  if ( this->m_DevMode == DEV_MODE_NONE )
  {
    SyncMenuImage::Draw(&this->m_SyncMenuBG, this->g, v3, v4, 1.0);
    Graphics::drawStack(this->g->g);
    if ( !GfxManager::instance )
    {
      v7 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v7);
      GfxManager::instance = v5;
    }
    v6 = extension::GFXIMovieStack::Instance();
    extension::GFXIMovieStack::render(v6);
  }
  Graphics::drawStack(this->g->g);
}

void __fastcall AppMain::ST_MissionDataLoadingLoop(AppMain *this)
{
  BattleSystem::BattleController *v2; // rax
  OGLRender *m_pRender; // rax
  GfxManager *v4; // rax
  extension::GFXIMovieStack *v5; // rax
  int iLoadingCount; // edx
  AsyncCharaFileLoad<ComboMissionData> *p_m_ComboMissionDataLoad; // rdi
  extension::AsyncContent<ComboMissionData> *m_ptr; // rax
  extension::AsyncStatus::Step v9; // edx
  extension::AsyncContentConstants::ErrorCode ErrorCode; // eax
  extension::AsyncContent<ComboMissionData> *v11; // rax
  extension::AsyncContent<ComboMissionData> *v12; // rsi
  ComboMissionData *Myval2; // rax
  ComboMissionData *v14; // rcx
  ComboMissionData *v15; // r8
  BattleSystem::BattleController *v16; // [rsp+20h] [rbp-68h]
  GfxManager *v17; // [rsp+20h] [rbp-68h]
  std::string v18; // [rsp+28h] [rbp-60h] BYREF
  __int64 v19; // [rsp+48h] [rbp-40h]
  std::string result; // [rsp+50h] [rbp-38h] BYREF

  v19 = -2i64;
  if ( !BattleSystem::BattleController::instance )
  {
    v16 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v16);
    BattleSystem::BattleController::instance = v2;
  }
  m_pRender = this->m_pRender;
  *(_QWORD *)m_pRender->m_sModelStackCount = 0i64;
  *(_QWORD *)&m_pRender->m_sModelStackCount[2] = 0i64;
  *(_QWORD *)&m_pRender->m_sModelStackCount[4] = 0i64;
  *(_QWORD *)&m_pRender->m_sModelStackCount[6] = 0i64;
  if ( this->m_DevMode == DEV_MODE_NONE )
  {
    v4 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v17 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v17);
      GfxManager::instance = v4;
    }
    if ( v4->m_SystemMessageState != SYSTEM_MESSAGE_OPEN || !v4->m_SystemMessageLock )
    {
      v5 = extension::GFXIMovieStack::Instance();
      extension::GFXIMovieStack::advance(v5, 0.016666668);
    }
  }
  iLoadingCount = this->iLoadingCount;
  if ( iLoadingCount )
  {
    if ( iLoadingCount == 1 )
    {
      p_m_ComboMissionDataLoad = &this->m_ComboMissionDataLoad;
      m_ptr = this->m_ComboMissionDataLoad.state.m_ptr;
      if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) != 0 )
      {
        if ( (unsigned int)AsyncCharaFileLoad<ComboMissionData>::GetErrorCode((AsyncKeyRecordDataLoad *)&this->m_ComboMissionDataLoad) )
        {
          ErrorCode = (unsigned int)AsyncCharaFileLoad<ComboMissionData>::GetErrorCode((AsyncKeyRecordDataLoad *)&this->m_ComboMissionDataLoad);
          extension::AsyncContentConstants::GetErrorString(ErrorCode);
          _DummyLogging("ST_MissionDataLoadingLoop : Mission data load error. [CharaID:%03d] [Error:%s]");
          this->iLoadingCount = 3;
        }
        else
        {
          v11 = p_m_ComboMissionDataLoad->state.m_ptr;
          if ( !p_m_ComboMissionDataLoad->state.m_ptr->m_isDataReleased
            && v11
            && (v11->m_status.m_stateFlags.m_value._My_val & 1) != 0
            && (v12 = p_m_ComboMissionDataLoad->state.m_ptr) != 0i64 )
          {
            this->m_ComboMissionDataLoad.bWorking = 0;
            if ( (v12->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&v12->m_status, v9);
            v12->m_isDataReleased = 1;
            Myval2 = v12->m_data._Mypair._Myval2;
            v12->m_data._Mypair._Myval2 = 0i64;
            v14 = Myval2;
          }
          else
          {
            v14 = 0i64;
          }
          v15 = this->m_pComboMissionData._Mypair._Myval2;
          this->m_pComboMissionData._Mypair._Myval2 = v14;
          if ( v15 )
            ((void (__fastcall *)(ComboMissionData *, __int64))v15->~CharaFileBase)(v15, 1i64);
          ++this->iLoadingCount;
        }
      }
    }
    else if ( iLoadingCount == 2 )
    {
      this->iReserveScene = -1;
      this->m_FadeST = this->m_iLoadingNextFunc;
      this->m_FuncST = 0;
      this->m_FadeExitFunc = 190;
      this->m_bExitFuncWaitFrame = 0;
      if ( this->m_FuncFT != 170 )
        this->m_FuncFT = 172;
    }
    else if ( iLoadingCount != 3 )
    {
      this->iLoadingCount = iLoadingCount + 1;
    }
  }
  else
  {
    CharaProjectData::GetDataFilePath(
      *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
      &result,
      this->m_iMissionLoadDataCharaID,
      VERSION_6_MAX);
    if ( result._Mypair._Myval2._Mysize )
    {
      v18._Mypair._Myval2._Myres = 15i64;
      v18._Mypair._Myval2._Mysize = 0i64;
      v18._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v18, &result, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      AsyncCharaFileLoad<ComboMissionData>::LoadCharaFile(&this->m_ComboMissionDataLoad, &v18);
      ++this->iLoadingCount;
    }
    else
    {
      this->iLoadingCount = 3;
    }
    std::string::~string(&result);
  }
}

void __fastcall AppMain::ST_MissionKeyDataLoadingLoop(AppMain *this)
{
  BattleSystem::BattleController *v2; // rax
  OGLRender *m_pRender; // rax
  int iLoadingCount; // edx
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *m_ptr; // rax
  extension::AsyncContentConstants::ErrorCode ErrorCode; // eax
  __int64 v7; // rax
  ComboMissionData *Myval2; // rdi
  __int64 m_iMissionKeyDataID; // rsi
  const char *pSampleDataFilePath; // rdx
  unsigned __int64 v11; // r8
  BattleSystem::BattleController *v12; // [rsp+20h] [rbp-68h]
  std::string v13; // [rsp+28h] [rbp-60h] BYREF
  __int64 v14; // [rsp+48h] [rbp-40h]
  std::string result; // [rsp+50h] [rbp-38h] BYREF

  v14 = -2i64;
  if ( !BattleSystem::BattleController::instance )
  {
    v12 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v12);
    BattleSystem::BattleController::instance = v2;
  }
  m_pRender = this->m_pRender;
  *(_QWORD *)m_pRender->m_sModelStackCount = 0i64;
  *(_QWORD *)&m_pRender->m_sModelStackCount[2] = 0i64;
  *(_QWORD *)&m_pRender->m_sModelStackCount[4] = 0i64;
  *(_QWORD *)&m_pRender->m_sModelStackCount[6] = 0i64;
  iLoadingCount = this->iLoadingCount;
  if ( iLoadingCount )
  {
    if ( iLoadingCount == 1 )
    {
      m_ptr = this->m_KeyRecordDataLoad.state.m_ptr;
      if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) != 0 )
      {
        if ( (unsigned int)AsyncCharaFileLoad<ComboMissionData>::GetErrorCode(&this->m_KeyRecordDataLoad) )
        {
          ErrorCode = (unsigned int)AsyncCharaFileLoad<ComboMissionData>::GetErrorCode(&this->m_KeyRecordDataLoad);
          extension::AsyncContentConstants::GetErrorString(ErrorCode);
          _DummyLogging("ST_MissionKeyDataLoadingLoop : Mission key data load error. [CID:%03d/KeyID:%d] [Error:%s]");
          this->iLoadingCount = 3;
        }
        else
        {
          BattleSystem::BattleController::GetActionSystem();
          AsyncKeyRecordDataLoad::GetInputKeyRecord(&this->m_KeyRecordDataLoad, (InputKeyRecord *)(v7 + 255160));
          ++this->iLoadingCount;
        }
      }
    }
    else if ( iLoadingCount == 2 )
    {
      this->iReserveScene = -1;
      this->m_FadeST = this->m_iLoadingNextFunc;
      this->m_FuncST = 0;
      this->m_FadeExitFunc = 194;
      this->m_bExitFuncWaitFrame = 0;
      if ( this->m_FuncFT != 170 )
        this->m_FuncFT = 172;
    }
    else if ( iLoadingCount != 3 )
    {
      this->iLoadingCount = iLoadingCount + 1;
    }
  }
  else
  {
    CharaProjectData::GetDirectoryPath(
      *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
      &result,
      this->m_iMissionLoadDataCharaID);
    Myval2 = this->m_pComboMissionData._Mypair._Myval2;
    m_iMissionKeyDataID = this->m_iMissionKeyDataID;
    if ( Myval2->IsReadSuccess(Myval2)
      && (int)m_iMissionKeyDataID >= 0
      && (int)m_iMissionKeyDataID < Myval2->dataHeader.iDataCount )
    {
      pSampleDataFilePath = Myval2->pMissionData[m_iMissionKeyDataID].pSampleDataFilePath;
    }
    else
    {
      pSampleDataFilePath = 0i64;
    }
    if ( result._Mypair._Myval2._Mysize && pSampleDataFilePath )
    {
      if ( *pSampleDataFilePath )
      {
        v11 = -1i64;
        do
          ++v11;
        while ( pSampleDataFilePath[v11] );
      }
      else
      {
        v11 = 0i64;
      }
      std::string::append(&result, pSampleDataFilePath, v11);
      _DummyLogging("ST_MissionKeyDataLoadingLoop : DataPath:%s");
      v13._Mypair._Myval2._Myres = 15i64;
      v13._Mypair._Myval2._Mysize = 0i64;
      v13._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v13, &result, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      AsyncKeyRecordDataLoad::LoadKeyRecordFile(&this->m_KeyRecordDataLoad, &v13);
      ++this->iLoadingCount;
    }
    else
    {
      this->iLoadingCount = 3;
    }
    std::string::~string(&result);
  }
}

Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::QName> *__fastcall extension::FutureObjectJob<OGLCurve>::createOnErrorData(
        Scaleform::GFx::AS3::Instances::fl::XML *this,
        Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::QName> *result)
{
  result->pObject = 0i64;
  return result;
}

__int64 __fastcall AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob::run(
        AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob *this)
{
  extension::AsyncContent<ComboMissionData> *m_ptr; // rax
  __int64 v3; // rax
  std::unique_ptr<ComboMissionData> *v4; // rax
  const std::string *p_m_name; // rdx
  unsigned __int64 v6; // rdx
  std::unique_ptr<ComboMissionData> *v7; // rax
  AgFile *v8; // rdi
  int v9; // eax
  unsigned int v10; // er14
  unsigned __int8 *v11; // rbx
  AgReferenceCount *v12; // rax
  AgReferenceCount *m_ref; // rax
  ComboMissionData *v14; // r15
  ComboMissionData *v15; // rdi
  extension::AsyncContent<ComboMissionData> *v16; // rcx
  std::unique_ptr<ComboMissionData> *v17; // rax
  AgReferenceCount *v18; // rax
  CFile v20; // [rsp+20h] [rbp-89h] BYREF
  AgPointer<KOFApplication> v21; // [rsp+70h] [rbp-39h] BYREF
  AgPointer<KOFApplication> v22; // [rsp+80h] [rbp-29h] BYREF
  AgPointer<KOFApplication> v23; // [rsp+90h] [rbp-19h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-9h]
  unsigned __int8 *v25; // [rsp+A8h] [rbp-1h]
  ComboMissionData *v26; // [rsp+B0h] [rbp+7h]
  AgPointer<KOFApplication> v27; // [rsp+B8h] [rbp+Fh] BYREF
  ComboMissionData *v28; // [rsp+110h] [rbp+67h] BYREF
  char v29; // [rsp+118h] [rbp+6Fh] BYREF
  std::unique_ptr<ComboMissionData> result; // [rsp+120h] [rbp+77h] BYREF
  char v31; // [rsp+128h] [rbp+7Fh] BYREF

  v24 = -2i64;
  m_ptr = this->m_content.m_ptr;
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 2) != 0
    || (v3 = *(_QWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 16i64)) != 0
    && (*(_QWORD *)(v3 + 8) & 0x100i64) != 0 )
  {
    if ( this->m_content.m_ptr )
    {
      v4 = this->createOnErrorData(this, &v28);
      extension::AsyncContent<ComboMissionData>::setErrorResultWithData(
        this->m_content.m_ptr,
        4,
        (std::unique_ptr<ComboMissionData>)v4);
    }
  }
  else
  {
    memset(&v20.pFileName, 0, 28);
    memset(&v20, 0, 28);
    v27 = 0i64;
    AgPointer<AgUser>::~AgPointer<AgUser>(&v27);
    p_m_name = &this->m_content.m_ptr->m_name;
    if ( this->m_content.m_ptr->m_name._Mypair._Myval2._Myres >= 0x10 )
      p_m_name = (const std::string *)p_m_name->_Mypair._Myval2._Bx._Ptr;
    if ( (unsigned __int8)CFile::copen(&v20, p_m_name->_Mypair._Myval2._Bx._Buf, 0, 1) )
    {
      v8 = v20.m_file.m_ptr;
      if ( v20.m_file.m_ptr && (v9 = v20.m_file.m_ptr->getSize(v20.m_file.m_ptr), v10 = v9, v9 >= 1) )
      {
        v11 = (unsigned __int8 *)operator new[](v9);
        v25 = v11;
        if ( v11 )
        {
          v8->read(v8, v11, v10);
          m_ref = v20.m_file.m_ref;
          v20.m_file = 0i64;
          v22.m_ref = m_ref;
          v22.m_ptr = (KOFApplication *)v8;
          AgPointer<AgUser>::~AgPointer<AgUser>(&v22);
          *(_QWORD *)&v20.m_iSeekPos = 0i64;
          v14 = (ComboMissionData *)operator new(0x30ui64);
          v28 = v14;
          v14->fileHeader = 0i64;
          v14->iReadErrorID = 0;
          v14->__vftable = (ComboMissionData_vtbl *)&ComboMissionData::`vftable';
          v14->dataHeader = 0i64;
          v14->pMissionData = 0i64;
          v14->pMissionNames = 0i64;
          v15 = v14;
          v26 = v14;
          if ( v14->ReadBuffer(v14, v11, v10) == 1 )
          {
            v16 = this->m_content.m_ptr;
            if ( v16 )
            {
              v15 = 0i64;
              result._Mypair._Myval2 = v14;
              extension::AsyncContent<ComboMissionData>::setResult(v16, (std::unique_ptr<ComboMissionData>)&result);
            }
          }
          else
          {
            extension::FutureObjectJob<ComboMissionData>::setErrorResult(this, ErrorCode_LoadFailed);
            _DummyLogging("AsyncLoadJob Load failed [File path:%s]");
          }
          if ( v15 )
            ((void (__fastcall *)(ComboMissionData *, __int64))v15->~CharaFileBase)(v15, 1i64);
        }
        else
        {
          extension::FutureObjectJob<ComboMissionData>::setErrorResult(this, ErrorCode_Internal);
          v12 = v20.m_file.m_ref;
          v20.m_file = 0i64;
          v21.m_ref = v12;
          v21.m_ptr = (KOFApplication *)v8;
          AgPointer<AgUser>::~AgPointer<AgUser>(&v21);
          *(_QWORD *)&v20.m_iSeekPos = 0i64;
        }
        if ( v11 )
          operator delete(v11, v6);
      }
      else
      {
        if ( this->m_content.m_ptr )
        {
          v17 = this->createOnErrorData(this, &v31);
          extension::AsyncContent<ComboMissionData>::setErrorResultWithData(
            this->m_content.m_ptr,
            2,
            (std::unique_ptr<ComboMissionData>)v17);
        }
        if ( v8 )
        {
          v18 = v20.m_file.m_ref;
          v20.m_file = 0i64;
          v23.m_ref = v18;
          v23.m_ptr = (KOFApplication *)v8;
          AgPointer<AgUser>::~AgPointer<AgUser>(&v23);
        }
        *(_QWORD *)&v20.m_iSeekPos = 0i64;
      }
    }
    else if ( this->m_content.m_ptr )
    {
      v7 = this->createOnErrorData(this, &v29);
      extension::AsyncContent<ComboMissionData>::setErrorResultWithData(
        this->m_content.m_ptr,
        1,
        (std::unique_ptr<ComboMissionData>)v7);
    }
    if ( v20.fNameIndex )
    {
      operator delete(v20.fNameIndex, v6);
      v20.fNameIndex = 0i64;
    }
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v20);
  }
  return 0i64;
}

__int64 __fastcall AsyncKeyRecordDataLoad::AsyncLoadJob::run(AsyncKeyRecordDataLoad::AsyncLoadJob *this)
{
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *m_ptr; // rax
  __int64 v3; // rax
  std::unique_ptr<AsyncKeyRecordDataLoad::KeyData> *v4; // rax
  const std::string *p_m_name; // rdx
  unsigned __int64 v6; // rdx
  std::unique_ptr<AsyncKeyRecordDataLoad::KeyData> *v7; // rax
  AgFile *v8; // r14
  AsyncKeyRecordDataLoad::KeyData *v9; // r15
  AsyncKeyRecordDataLoad::KeyData *v10; // rbx
  int v11; // er12
  InputKeyRecord::RecordKey *v12; // rax
  unsigned __int64 v13; // rdx
  InputKeyRecord::RecordKey *Myval2; // rcx
  unsigned __int8 *v15; // rdx
  AgReferenceCount *v16; // rax
  int v17; // edi
  AgReferenceCount *v18; // rax
  AgReferenceCount *m_ref; // rax
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *v20; // rcx
  InputKeyRecord::RecordKey *v21; // rcx
  std::unique_ptr<AsyncKeyRecordDataLoad::KeyData> *v22; // rax
  AgReferenceCount *v23; // rax
  CFile v25; // [rsp+20h] [rbp-99h] BYREF
  AgPointer<KOFApplication> v26; // [rsp+70h] [rbp-49h] BYREF
  AgPointer<KOFApplication> v27; // [rsp+80h] [rbp-39h] BYREF
  AgPointer<KOFApplication> v28; // [rsp+90h] [rbp-29h] BYREF
  AgPointer<KOFApplication> v29; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-9h]
  AsyncKeyRecordDataLoad::KeyData *v31; // [rsp+B8h] [rbp-1h]
  AgPointer<KOFApplication> v32; // [rsp+C0h] [rbp+7h] BYREF
  char v33; // [rsp+120h] [rbp+67h] BYREF
  char v34; // [rsp+128h] [rbp+6Fh] BYREF
  std::unique_ptr<AsyncKeyRecordDataLoad::KeyData> result; // [rsp+130h] [rbp+77h] BYREF
  char v36; // [rsp+138h] [rbp+7Fh] BYREF

  v30 = -2i64;
  m_ptr = this->m_content.m_ptr;
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 2) != 0
    || (v3 = *(_QWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 16i64)) != 0
    && (*(_QWORD *)(v3 + 8) & 0x100i64) != 0 )
  {
    if ( this->m_content.m_ptr )
    {
      v4 = this->createOnErrorData(this, &v33);
      extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::setErrorResultWithData(
        this->m_content.m_ptr,
        4,
        (std::unique_ptr<AsyncKeyRecordDataLoad::KeyData>)v4);
    }
  }
  else
  {
    memset(&v25.pFileName, 0, 28);
    memset(&v25, 0, 28);
    v32 = 0i64;
    AgPointer<AgUser>::~AgPointer<AgUser>(&v32);
    p_m_name = &this->m_content.m_ptr->m_name;
    if ( this->m_content.m_ptr->m_name._Mypair._Myval2._Myres >= 0x10 )
      p_m_name = (const std::string *)p_m_name->_Mypair._Myval2._Bx._Ptr;
    if ( (unsigned __int8)CFile::copen(&v25, p_m_name->_Mypair._Myval2._Bx._Buf, 0, 1) )
    {
      v8 = v25.m_file.m_ptr;
      if ( v25.m_file.m_ptr && (int)v25.m_file.m_ptr->getSize(v25.m_file.m_ptr) >= 1 )
      {
        v9 = (AsyncKeyRecordDataLoad::KeyData *)operator new(0x10ui64);
        v9->pKey._Mypair._Myval2 = 0i64;
        v10 = v9;
        v31 = v9;
        v8->read(v8, (unsigned __int8 *)v9, 4u);
        v11 = v25.m_iSeekPos + 4;
        v25.m_iSeekPos += 4;
        v12 = (InputKeyRecord::RecordKey *)operator new[](saturated_mul(v9->uiKeyCount, 8ui64));
        Myval2 = v9->pKey._Mypair._Myval2;
        v9->pKey._Mypair._Myval2 = v12;
        if ( Myval2 )
          operator delete(Myval2, v13);
        v15 = (unsigned __int8 *)v9->pKey._Mypair._Myval2;
        if ( v15 )
        {
          v17 = 8 * v9->uiKeyCount;
          v8->read(v8, v15, v17);
          v25.m_iSeekPos = v17 + v11;
          if ( v17 >= 1 )
          {
            m_ref = v25.m_file.m_ref;
            v25.m_file = 0i64;
            v28.m_ref = m_ref;
            v28.m_ptr = (KOFApplication *)v8;
            AgPointer<AgUser>::~AgPointer<AgUser>(&v28);
            *(_QWORD *)&v25.m_iSeekPos = 0i64;
            v20 = this->m_content.m_ptr;
            if ( v20 )
            {
              v10 = 0i64;
              result._Mypair._Myval2 = v9;
              extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::setResult(
                v20,
                (std::unique_ptr<AsyncKeyRecordDataLoad::KeyData>)&result);
            }
          }
          else
          {
            extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>::setErrorResult(this, ErrorCode_LoadFailed);
            _DummyLogging("AsyncLoadJob Load failed [File path:%s]");
            v18 = v25.m_file.m_ref;
            v25.m_file = 0i64;
            v27.m_ref = v18;
            v27.m_ptr = (KOFApplication *)v8;
            AgPointer<AgUser>::~AgPointer<AgUser>(&v27);
            *(_QWORD *)&v25.m_iSeekPos = 0i64;
          }
        }
        else
        {
          extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>::setErrorResult(this, ErrorCode_Internal);
          v16 = v25.m_file.m_ref;
          v25.m_file = 0i64;
          v26.m_ref = v16;
          v26.m_ptr = (KOFApplication *)v8;
          AgPointer<AgUser>::~AgPointer<AgUser>(&v26);
          *(_QWORD *)&v25.m_iSeekPos = 0i64;
        }
        if ( v10 )
        {
          v21 = v10->pKey._Mypair._Myval2;
          if ( v21 )
            operator delete(v21, v6);
          operator delete(v10, 0x10ui64);
        }
      }
      else
      {
        if ( this->m_content.m_ptr )
        {
          v22 = this->createOnErrorData(this, &v36);
          extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::setErrorResultWithData(
            this->m_content.m_ptr,
            2,
            (std::unique_ptr<AsyncKeyRecordDataLoad::KeyData>)v22);
        }
        if ( v8 )
        {
          v23 = v25.m_file.m_ref;
          v25.m_file = 0i64;
          v29.m_ref = v23;
          v29.m_ptr = (KOFApplication *)v8;
          AgPointer<AgUser>::~AgPointer<AgUser>(&v29);
        }
        *(_QWORD *)&v25.m_iSeekPos = 0i64;
      }
    }
    else if ( this->m_content.m_ptr )
    {
      v7 = this->createOnErrorData(this, &v34);
      extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::setErrorResultWithData(
        this->m_content.m_ptr,
        1,
        (std::unique_ptr<AsyncKeyRecordDataLoad::KeyData>)v7);
    }
    if ( v25.fNameIndex )
    {
      operator delete(v25.fNameIndex, v6);
      v25.fNameIndex = 0i64;
    }
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v25);
  }
  return 0i64;
}

void __fastcall extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>::setErrorResult(
        extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData> *this,
        extension::AsyncContentConstants::ErrorCode e)
{
  std::unique_ptr<AsyncKeyRecordDataLoad::KeyData> *v4; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  if ( this->m_content.m_ptr )
  {
    v4 = this->createOnErrorData(this, &v5);
    extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::setErrorResultWithData(
      this->m_content.m_ptr,
      e,
      (std::unique_ptr<AsyncKeyRecordDataLoad::KeyData>)v4);
  }
}

void __fastcall extension::FutureObjectJob<ComboMissionData>::setErrorResult(
        extension::FutureObjectJob<ComboMissionData> *this,
        extension::AsyncContentConstants::ErrorCode e)
{
  std::unique_ptr<ComboMissionData> *v4; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  if ( this->m_content.m_ptr )
  {
    v4 = this->createOnErrorData(this, &v5);
    extension::AsyncContent<ComboMissionData>::setErrorResultWithData(
      this->m_content.m_ptr,
      e,
      (std::unique_ptr<ComboMissionData>)v4);
  }
}

void __fastcall extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::setErrorResultWithData(
        extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *this,
        unsigned __int64 e,
        std::unique_ptr<AsyncKeyRecordDataLoad::KeyData> data)
{
  AsyncKeyRecordDataLoad::KeyData *v5; // rax
  AsyncKeyRecordDataLoad::KeyData *Myval2; // rdi
  InputKeyRecord::RecordKey *v7; // rcx
  _QWORD *v8; // rbx
  void *v9; // rcx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    this->m_errorCode = e;
    v5 = *(AsyncKeyRecordDataLoad::KeyData **)&data._Mypair._Myval2->uiKeyCount;
    *(_QWORD *)&data._Mypair._Myval2->uiKeyCount = 0i64;
    Myval2 = this->m_data._Mypair._Myval2;
    this->m_data._Mypair._Myval2 = v5;
    if ( Myval2 )
    {
      v7 = Myval2->pKey._Mypair._Myval2;
      if ( v7 )
        operator delete(v7, e);
      operator delete(Myval2, 0x10ui64);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  v8 = *(_QWORD **)&data._Mypair._Myval2->uiKeyCount;
  if ( *(_QWORD *)&data._Mypair._Myval2->uiKeyCount )
  {
    v9 = (void *)v8[1];
    if ( v9 )
      operator delete(v9, e);
    operator delete(v8, 0x10ui64);
  }
}

void __fastcall extension::AsyncContent<ComboMissionData>::setErrorResultWithData(
        extension::AsyncContent<ComboMissionData> *this,
        int e,
        std::unique_ptr<ComboMissionData> data)
{
  ComboMissionData *v5; // rax
  ComboMissionData *Myval2; // rcx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    this->m_errorCode = e;
    v5 = (ComboMissionData *)data._Mypair._Myval2->__vftable;
    data._Mypair._Myval2->__vftable = 0i64;
    Myval2 = this->m_data._Mypair._Myval2;
    this->m_data._Mypair._Myval2 = v5;
    if ( Myval2 )
      ((void (__fastcall *)(ComboMissionData *, __int64))Myval2->~CharaFileBase)(Myval2, 1i64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  if ( data._Mypair._Myval2->__vftable )
    (*(void (__fastcall **)(ComboMissionData_vtbl *, __int64))data._Mypair._Myval2->~CharaFileBase)(
      data._Mypair._Myval2->__vftable,
      1i64);
}

void __fastcall extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::setResult(
        extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *this,
        std::unique_ptr<AsyncKeyRecordDataLoad::KeyData> result)
{
  AsyncKeyRecordDataLoad::KeyData *v4; // rax
  AsyncKeyRecordDataLoad::KeyData *Myval2; // rdi
  InputKeyRecord::RecordKey *v6; // rcx
  _QWORD *v7; // rbx
  void *v8; // rcx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    v4 = *(AsyncKeyRecordDataLoad::KeyData **)&result._Mypair._Myval2->uiKeyCount;
    if ( *(_QWORD *)&result._Mypair._Myval2->uiKeyCount )
    {
      *(_QWORD *)&result._Mypair._Myval2->uiKeyCount = 0i64;
      Myval2 = this->m_data._Mypair._Myval2;
      this->m_data._Mypair._Myval2 = v4;
      if ( Myval2 )
      {
        v6 = Myval2->pKey._Mypair._Myval2;
        if ( v6 )
          operator delete(v6, (unsigned __int64)result._Mypair._Myval2);
        operator delete(Myval2, 0x10ui64);
      }
    }
    else
    {
      this->m_errorCode = 5;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  v7 = *(_QWORD **)&result._Mypair._Myval2->uiKeyCount;
  if ( *(_QWORD *)&result._Mypair._Myval2->uiKeyCount )
  {
    v8 = (void *)v7[1];
    if ( v8 )
      operator delete(v8, (unsigned __int64)result._Mypair._Myval2);
    operator delete(v7, 0x10ui64);
  }
}

void __fastcall extension::AsyncContent<ComboMissionData>::setResult(
        extension::AsyncContent<ComboMissionData> *this,
        std::unique_ptr<ComboMissionData> result)
{
  ComboMissionData *v4; // rax
  ComboMissionData *Myval2; // rcx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    v4 = (ComboMissionData *)result._Mypair._Myval2->__vftable;
    if ( result._Mypair._Myval2->__vftable )
    {
      result._Mypair._Myval2->__vftable = 0i64;
      Myval2 = this->m_data._Mypair._Myval2;
      this->m_data._Mypair._Myval2 = v4;
      if ( Myval2 )
        ((void (__fastcall *)(ComboMissionData *, __int64))Myval2->~CharaFileBase)(Myval2, 1i64);
    }
    else
    {
      this->m_errorCode = 5;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  if ( result._Mypair._Myval2->__vftable )
    (*(void (__fastcall **)(ComboMissionData_vtbl *, __int64))result._Mypair._Myval2->~CharaFileBase)(
      result._Mypair._Myval2->__vftable,
      1i64);
}

