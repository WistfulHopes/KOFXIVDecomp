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
#include "dev/kof/master/development/source/baseproject/jni/framework/network/commonpc.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imetargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imetargetpad.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/wordfiltersystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imetargetkb.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/menuutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"

char s_FilterStr_Back[61]; // 0x140AC4C08
char s_FilterStr[61]; // 0x140AC4BC8
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5DFB0
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B17
unsigned char s_FilterSequence; // 0x140AA37B9
void UpdateTelopText(); // 0x1401CB240
void AppMain::ST_MyFavoriteInit(); // 0x1401CB3E0
void AppMain::ST_MyFavoriteExit(); // 0x1401CB680
void AppMain::ST_MyFavoriteLoop(); // 0x1401CB710
void AppMain::ST_MyFavoriteDraw(); // 0x1401C06B0//decompilation failure at 140AC4C08!
//decompilation failure at 140AC4BC8!
//decompilation failure at 140A5DFB0!
//decompilation failure at 1408A0B17!
//decompilation failure at 140AA37B9!
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

void __fastcall AppMain::ST_MyFavoriteExit(AppMain *this)
{
  GfxManager *v1; // rax
  Fw::ImeTargetKB *v2; // rcx
  int m_Status; // eax
  GfxManager *v4; // [rsp+40h] [rbp+8h]

  v1 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v4 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v4);
    GfxManager::instance = v1;
  }
  GfxManager::ReleaseGFXMovie(v1, 0);
  m_Status = Fw::ImeTarget::m_IMEPad.m_Status;
  if ( Fw::ImeTarget::m_currentIME == IME_KEYBOARD )
    m_Status = Fw::ImeTarget::m_IMEKeyboard.m_Status;
  if ( m_Status == 1 )
  {
    Fw::ImeTargetKB::Abort(v2);
    Fw::ImeTarget::m_IMEPad.m_Status = 3;
  }
  if ( !Fw::WordFilterSystem::instance_ )
    Fw::WordFilterSystem::instance_ = (Fw::WordFilterSystem *)operator new(1ui64);
}

void __fastcall AppMain::ST_MyFavoriteInit(AppMain *this, __int64 a2, __int64 a3, int a4)
{
  GfxManager *v5; // rax
  char *m_str; // rsi
  void (__fastcall *v7)(); // r8
  UserGameOperation *v8; // rax
  int v9; // ecx
  __int64 v10; // rbx
  int v11; // eax
  GameDataInfo *v12; // rcx
  GameDataInfo *v13; // rcx
  __int64 v14; // rax
  extension::SoundHashKey *m_keys; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v17; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v18; // r9
  char *v19; // rax
  signed __int64 v20; // rsi
  int v21; // ecx
  int v22; // edx
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
  m_str = 0i64;
  v7 = 0i64;
  if ( v5->m_MenuCursor[5] == 4 )
    v7 = UpdateTelopText;
  GfxManager::LoadRequest(v5, FILE_17_MY_FAVORITE, v7, a4);
  s_FilterSequence_0 = 0;
  v8 = UserGameOperation::Instance();
  UserGameOperation::clear(v8);
  if ( this->m_iFadeAlpha )
  {
    this->m_bFadeEnd = 0;
    this->m_iFadeFrame = 10;
    v9 = 1000 * this->m_iFadeColor.s.a;
    this->m_iFadeAlpha = v9;
    this->m_iFadeRate = v9 / 10;
    this->m_bFadeLock = 0;
    this->m_FuncFT = 171;
  }
  v10 = *(_QWORD *)NtCurrentTeb()->Reserved1[11];
  v11 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v10 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v11 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v12);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v11 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0] = USER_ID_1P;
  if ( v11 > *(_DWORD *)(v10 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v13);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1] = USER_ID_CPU;
  v14 = 113i64;
  if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x800000) == 0 )
    v14 = 102i64;
  m_keys = s_soundIndex.m_keys;
  m_ptr = s_soundIndex.m_keys[v14].m_sharedBuffer.m_ptr;
  soundName.m_sharedBuffer.m_ptr = m_ptr;
  if ( m_ptr )
  {
    m_keys = (extension::SoundHashKey *)m_ptr->m_refCount.m_ptr;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&m_keys[2], 1ui64);
  }
  p_soundName = &soundName;
  AppMain::Sound_BGMPlay_GetSoundHashKey((AppMain *)m_keys, &result);
  v17 = result.m_sharedBuffer.m_ptr;
  if ( !result.m_sharedBuffer.m_ptr )
    goto LABEL_24;
  v18 = soundName.m_sharedBuffer.m_ptr;
  if ( soundName.m_sharedBuffer.m_ptr )
    m_str = soundName.m_sharedBuffer.m_ptr->m_str;
  v19 = result.m_sharedBuffer.m_ptr->m_str;
  v20 = m_str - result.m_sharedBuffer.m_ptr->m_str;
  do
  {
    v21 = (unsigned __int8)v19[v20];
    v22 = (unsigned __int8)*v19 - v21;
    if ( v22 )
      break;
    ++v19;
  }
  while ( v21 );
  if ( v22 )
  {
LABEL_24:
    AppMain::Sound_PlayBGMByName(this, &soundName, 0.0, 0.0, 0);
    extension::SoundHashKey::operator=(&this->m_nowPlayBGM, &soundName);
    v18 = soundName.m_sharedBuffer.m_ptr;
  }
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v17->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))result.m_sharedBuffer.m_ptr->~RefCountableWeakSupportBase)(
        result.m_sharedBuffer.m_ptr,
        1i64);
    v18 = soundName.m_sharedBuffer.m_ptr;
  }
  if ( v18
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v18->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v18->~RefCountableWeakSupportBase)(
      v18,
      1i64);
  }
  this->iReserveScene = -1;
  this->m_FuncST = 82;
  this->m_FuncBT = 83;
  AppMain::SceneFunc(this, 82);
  this->m_FuncExit = 81;
}

void __fastcall AppMain::ST_MyFavoriteLoop(AppMain *this)
{
  GfxManager *v2; // rsi
  GfxManager *v3; // rax
  int m_Status; // er8
  int v5; // ecx
  int v6; // edx
  Fw::ImeTarget::CurrentTarget v7; // er9
  char *m_textBuffer; // rbx
  unsigned __int64 v9; // r9
  unsigned int v10; // er8
  char *v11; // rdx
  unsigned __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // rdx
  unsigned int v15; // er8
  unsigned __int64 v16; // rcx
  GfxManager *v17; // rcx
  GfxManager *v18; // rax
  extension::GFXIMovieStack *v19; // rax
  GfxManager *v20; // rax
  GfxManager *v21; // rax
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  __int64 v26; // rax
  GameDataInfo *Instance; // rax
  int v28; // edx
  int v29; // edx
  __int64 v30; // rax
  GameDataInfo *v31; // rax
  int v32; // ecx
  GameDataInfo *v33; // rax
  int v34; // ecx
  __int64 v35; // rax
  GameDataInfo *v36; // rax
  int v37; // ecx
  GameDataInfo *v38; // rax
  int v39; // ecx
  GfxManager *v40; // [rsp+20h] [rbp-248h]
  GfxManager *v41; // [rsp+20h] [rbp-248h]
  GfxManager *v42; // [rsp+20h] [rbp-248h]
  GfxManager *v43; // [rsp+20h] [rbp-248h]
  char source[256]; // [rsp+30h] [rbp-238h] BYREF
  unsigned __int64 v45; // [rsp+130h] [rbp-138h]
  char destination[256]; // [rsp+140h] [rbp-128h] BYREF
  unsigned __int64 m_textLength; // [rsp+240h] [rbp-28h]

  v2 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v40 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v40);
    v2 = v3;
    GfxManager::instance = v3;
  }
  SyncMenuImage::Update(&this->m_SyncMenuBG);
  m_Status = Fw::ImeTarget::m_IMEPad.m_Status;
  v5 = Fw::ImeTarget::m_IMEPad.m_Status;
  v6 = Fw::ImeTarget::m_IMEKeyboard.m_Status;
  v7 = Fw::ImeTarget::m_currentIME;
  if ( Fw::ImeTarget::m_currentIME == IME_KEYBOARD )
    v5 = Fw::ImeTarget::m_IMEKeyboard.m_Status;
  m_textBuffer = Fw::ImeTarget::m_IMEKeyboard.m_textBuffer;
  if ( v5 == 1 )
  {
    if ( Fw::ImeTarget::m_currentIME )
    {
      if ( Fw::ImeTarget::m_IMEPad.m_Status != 2 )
        goto LABEL_19;
      strcpy_s(destination, 0x100ui64, Fw::ImeTarget::m_IMEPad.m_textBuffer);
      m_textLength = Fw::ImeTarget::m_IMEPad.m_textLength;
      Fw::ImeTarget::m_IMEPad.m_Status = 0;
    }
    else
    {
      if ( Fw::ImeTarget::m_IMEKeyboard.m_Status == 2 )
        v6 = 0;
      Fw::ImeTarget::m_IMEKeyboard.m_Status = v6;
      strcpy_s(destination, 0x100ui64, Fw::ImeTarget::m_IMEKeyboard.m_textBuffer);
      v9 = 0i64;
      v10 = 0;
      if ( Fw::ImeTarget::m_IMEKeyboard.m_textBuffer[0] )
      {
        v11 = Fw::ImeTarget::m_IMEKeyboard.m_textBuffer;
        do
        {
          if ( v10 >= 0x100 )
            break;
          v12 = v9 + 1;
          if ( (*v11 & 0xC0) == 0x80 )
            v12 = v9;
          v9 = v12;
          ++v10;
          ++v11;
        }
        while ( *v11 );
      }
      m_textLength = v9;
    }
    strcpy_s(this->SaveDataMain.PlayerData.m_MyFavoriteTelop, 0x3Dui64, destination);
    UpdateTelopText();
    v7 = Fw::ImeTarget::m_currentIME;
    v6 = Fw::ImeTarget::m_IMEKeyboard.m_Status;
    m_Status = Fw::ImeTarget::m_IMEPad.m_Status;
  }
LABEL_19:
  if ( s_FilterSequence_0 == 1 )
  {
    if ( !Fw::WordFilterSystem::instance_ )
    {
      Fw::WordFilterSystem::instance_ = (Fw::WordFilterSystem *)operator new(1ui64);
      if ( !Fw::WordFilterSystem::instance_ )
      {
        s_FilterSequence_0 = 0;
        goto LABEL_44;
      }
    }
    s_FilterSequence_0 = 0;
    strcpy_s(this->SaveDataMain.PlayerData.m_MyFavoriteTelop, 0x3Dui64, s_FilterStr_0);
LABEL_43:
    UpdateTelopText();
    goto LABEL_44;
  }
  v13 = m_Status;
  if ( v7 == IME_KEYBOARD )
    v13 = v6;
  if ( v13 == 2 )
  {
    if ( v7 )
    {
      if ( m_Status == 2 )
      {
        strcpy_s(source, 0x100ui64, Fw::ImeTarget::m_IMEPad.m_textBuffer);
        v45 = Fw::ImeTarget::m_IMEPad.m_textLength;
        Fw::ImeTarget::m_IMEPad.m_Status = 0;
      }
    }
    else
    {
      if ( v6 == 2 )
        v6 = 0;
      Fw::ImeTarget::m_IMEKeyboard.m_Status = v6;
      strcpy_s(source, 0x100ui64, Fw::ImeTarget::m_IMEKeyboard.m_textBuffer);
      v14 = 0i64;
      v15 = 0;
      if ( Fw::ImeTarget::m_IMEKeyboard.m_textBuffer[0] )
      {
        do
        {
          if ( v15 >= 0x100 )
            break;
          v16 = v14 + 1;
          if ( (*m_textBuffer & 0xC0) == 0x80 )
            v16 = v14;
          v14 = v16;
          ++v15;
          ++m_textBuffer;
        }
        while ( *m_textBuffer );
      }
      v45 = v14;
    }
    strcpy_s(s_FilterStr_Back, 0x3Dui64, this->SaveDataMain.PlayerData.m_MyFavoriteTelop);
    if ( v45 )
    {
      if ( Fw::WordFilterSystem::instance_
        || (Fw::WordFilterSystem::instance_ = (Fw::WordFilterSystem *)operator new(1ui64)) != 0i64 )
      {
        strcpy_s(s_FilterStr_0, 0x3Dui64, source);
        s_FilterSequence_0 = 1;
        goto LABEL_44;
      }
    }
    s_FilterSequence_0 = 0;
    strcpy(this->SaveDataMain.PlayerData.m_MyFavoriteTelop, "THE KING OF FIGHTERS");
    goto LABEL_43;
  }
LABEL_44:
  v17 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v41 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v41);
    v17 = v18;
    GfxManager::instance = v18;
  }
  if ( v17->m_SystemMessageState != SYSTEM_MESSAGE_OPEN || !v17->m_SystemMessageLock )
  {
    v19 = extension::GFXIMovieStack::Instance();
    extension::GFXIMovieStack::advance(v19, 0.016666668);
    v17 = GfxManager::instance;
  }
  if ( v2->m_bQuitGFXMovie )
  {
    if ( !v17 )
    {
      v42 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v42);
      v17 = v20;
      GfxManager::instance = v20;
    }
    if ( v17->m_QuitResultCode == RESULT_CODE_CANCEL )
    {
      AppMain::SaveDataAsyncSave(this, v6);
      v21 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        v43 = (GfxManager *)operator new(0x108ui64);
        GfxManager::GfxManager(v43);
        GfxManager::instance = v21;
      }
      v21->m_EditMode = 0;
      this->iReserveScene = -1;
      this->m_FadeST = this->m_PrevScene;
      this->m_FuncST = 0;
      this->m_FadeExitFunc = 81;
      this->m_bExitFuncWaitFrame = 0;
      if ( this->m_FuncFT != 170 )
        this->m_FuncFT = 172;
      return;
    }
    v22 = v17->m_MenuCursor[5];
    if ( !v22 )
      return;
    v23 = v22 - 1;
    if ( !v23 )
      return;
    v24 = v23 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        if ( v25 != 1 )
          return;
        GfxManager::getInstance();
        *(_BYTE *)(v26 + 257) = 1;
        Instance = GameDataInfo::getInstance();
        v28 = Instance->m_GameModeIndex + 1;
        if ( v28 > 9 )
          v28 = 9;
        Instance->m_GameModeIndex = v28;
        Instance->m_GameMode[v28] = GAME_MODE_PROILE;
        v29 = 32;
        goto LABEL_76;
      }
      GfxManager::getInstance();
      *(_BYTE *)(v30 + 257) = 1;
      v31 = GameDataInfo::getInstance();
      v32 = v31->m_GameModeIndex + 1;
      if ( v32 > 9 )
        v32 = 9;
      v31->m_GameModeIndex = v32;
      v31->m_GameMode[v32] = GAME_MODE_PROILE;
      v33 = GameDataInfo::getInstance();
      v34 = v33->m_GameRuleIndex + 1;
      if ( v34 > 9 )
        v34 = 9;
      v33->m_GameRuleIndex = v34;
      v33->m_GameRule[v34] = GAME_RULE_SINGLE;
    }
    else
    {
      GfxManager::getInstance();
      *(_BYTE *)(v35 + 257) = 1;
      v36 = GameDataInfo::getInstance();
      v37 = v36->m_GameModeIndex + 1;
      if ( v37 > 9 )
        v37 = 9;
      v36->m_GameModeIndex = v37;
      v36->m_GameMode[v37] = GAME_MODE_PROILE;
      v38 = GameDataInfo::getInstance();
      v39 = v38->m_GameRuleIndex + 1;
      if ( v39 > 9 )
        v39 = 9;
      v38->m_GameRuleIndex = v39;
      v38->m_GameRule[v39] = GAME_RULE_TEAM;
    }
    v29 = 24;
LABEL_76:
    AppMain::setNonFadeSTExit(this, v29, 81);
  }
}

void __fastcall UpdateTelopText()
{
  __int64 v0; // rdx
  __int64 v1; // rax
  char v2; // al
  Scaleform::GFx::Value::ValueUnion v3; // rbx
  GfxManager *v4; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value presult; // [rsp+38h] [rbp-49h] BYREF
  Scaleform::GFx::Value ptr[2]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v8; // [rsp+C8h] [rbp+47h]
  GfxManager *v9; // [rsp+E8h] [rbp+67h]

  v8 = -2i64;
  `eh vector constructor iterator'(
    ptr,
    0x30ui64,
    2ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  presult.pObjectInterface = 0i64;
  presult.Type = VT_None;
  v1 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v0);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 16) + 336i64))(*(_QWORD *)(v1 + 16));
  if ( (v2 & 0x10) != 0 || (v2 & 2) != 0 )
  {
    if ( (ptr[0].Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr[0].pObjectInterface, ptr, ptr[0].mValue.pStringManaged);
      ptr[0].pObjectInterface = 0i64;
    }
    ptr[0].mValue.pString = "THE KING OF FIGHTERS";
  }
  else
  {
    v3.pString = (const char *)(*(_QWORD *)&AppMain::pApp + 2205472i64);
    if ( (ptr[0].Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr[0].pObjectInterface, ptr, ptr[0].mValue.pStringManaged);
      ptr[0].pObjectInterface = 0i64;
    }
    ptr[0].mValue = v3;
  }
  ptr[0].Type = 6;
  v4 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v9 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v9);
    GfxManager::instance = v4;
  }
  m_ptr = v4->m_GFXMovie.m_movieProxy.m_ptr;
  if ( Scaleform::GFx::Movie::IsAvailable(v4->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject, "_root.UpdateTelopText") )
    Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.UpdateTelopText", &presult, ptr, 1u);
  if ( (presult.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      presult.pObjectInterface,
      &presult,
      presult.mValue.pStringManaged);
    presult.pObjectInterface = 0i64;
  }
  presult.Type = VT_None;
  `eh vector destructor iterator'(ptr, 0x30ui64, 2ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

