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
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/replace.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingreadpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingtargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingsystem.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragetargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingreadworkpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/menudata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/menuutil.cpp"

enum <unnamed-enum-REPLAYLIST_READ_BOARD>
{
	REPLAYLIST_READ_BOARD = 0,
	REPLAYLIST_READ_REPLAY = 1,
	REPLAYLIST_READ_FRIEND_REPLAY = 2,
	REPLAYLIST_READ_MAX = 3,
};
enum <unnamed-enum-TUS_READ_FRIEND_BOARD>
{
	TUS_READ_FRIEND_BOARD = 0,
	TUS_READ_MAX = 1,
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408B00E4
bool s_ReplayDataReceived; // 0x140A9BCC5
long s_Cursor; // 0x140A9BCC8
long s_Minpos; // 0x140A9BCCC
long s_GetNum; // 0x140A9BCD0
bool s_OnlineReplaySaveFlag; // 0x140AC4BC2
long s_Index; // 0x140A9BCD4
Fw::cRankingReadResult s_ReadResult; // 0x140ACA9F0
Fw::cRankingReadRequest s_ReadRequest[3]; // 0x140ACA9A0
bool s_FriendReplayLoadFlag; // 0x140AC4C05
Fw::cTusResult s_TusResult; // 0x140AC22D8
long s_ReplayNo; // 0x140AC6E48
bool s_AllReplayLoadFlag; // 0x140AC4BC3
Fw::RANKING_HANDLE s_Handle[3]; // 0x140ACA990
Fw::cTusReadRequest s_TusReadRequest[1]; // 0x140ACA970
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A61340
Fw::TS_HANDLE s_TsHandle[1]; // 0x140AC6604
long s_Tabno; // 0x140A9BCD8
void(*s_TusResult$initializer$)(); // 0x1407408F0
void LoadCompleteEventOnlineReplay(); // 0x1402CB0F0
void AppMain::ST_OnlineReplayInit(); // 0x1402CB2D0
void AppMain::ST_OnlineReplayLoop(); // 0x1402CB5D0
void AppMain::ST_OnlineReplayDraw(); // 0x1401C06B0
void AppMain::ST_OnlineReplayLoadData(long filter, long index, long num); // 0x1402CCA10
void AppMain::ST_OnlineReplayDownload(long replayNo); // 0x1402CD020//decompilation failure at 1408B00E4!
//decompilation failure at 140A9BCC5!
//decompilation failure at 140A9BCC8!
//decompilation failure at 140A9BCCC!
//decompilation failure at 140A9BCD0!
//decompilation failure at 140AC4BC2!
//decompilation failure at 140A9BCD4!
//decompilation failure at 140ACA9F0!
//decompilation failure at 140ACA9A0!
//decompilation failure at 140AC4C05!
//decompilation failure at 140AC22D8!
//decompilation failure at 140AC6E48!
//decompilation failure at 140AC4BC3!
//decompilation failure at 140ACA990!
//decompilation failure at 140ACA970!
//decompilation failure at 140A61340!
//decompilation failure at 140AC6604!
//decompilation failure at 140A9BCD8!
//decompilation failure at 1407408F0!
void __fastcall LoadCompleteEventOnlineReplay()
{
  int v0; // ebx
  int v1; // ebx
  int v2; // ebx
  GfxManager *v3; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value presult; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v6; // [rsp+68h] [rbp-A0h]
  GfxManager *v7; // [rsp+70h] [rbp-98h]
  Scaleform::GFx::Value ptr; // [rsp+78h] [rbp-90h] BYREF
  Scaleform::GFx::Value val; // [rsp+A8h] [rbp-60h] BYREF
  Scaleform::GFx::Value v10; // [rsp+D8h] [rbp-30h] BYREF

  v6 = -2i64;
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    3ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  *(__m128i *)&presult.pNext = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  *(_QWORD *)&presult.Type = 0i64;
  presult.mValue.IValue = 0;
  v0 = s_Minpos_0;
  if ( (ptr.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
    ptr.pObjectInterface = 0i64;
  }
  ptr.Type = VT_Float;
  ptr.mValue.IValue = v0;
  v1 = s_Cursor_0;
  if ( (val.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
    val.pObjectInterface = 0i64;
  }
  val.Type = VT_Float;
  val.mValue.IValue = v1;
  v2 = s_Tabno_0;
  if ( (v10.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v10.pObjectInterface, &v10, v10.mValue.pStringManaged);
    v10.pObjectInterface = 0i64;
  }
  v10.Type = VT_Float;
  v10.mValue.IValue = v2;
  v3 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v3;
  }
  m_ptr = v3->m_GFXMovie.m_movieProxy.m_ptr;
  if ( Scaleform::GFx::Movie::IsAvailable(v3->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject, "_root.CursorSetting") )
    Scaleform::GFx::Movie::Invoke(
      m_ptr->m_movie.pObject,
      "_root.CursorSetting",
      (Scaleform::GFx::Value *)&presult.8,
      &ptr,
      3u);
  s_Minpos_0 = 0;
  s_Cursor_0 = 0;
  s_Tabno_0 = 0;
  if ( (presult.mValue.BValue & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      *(Scaleform::GFx::Value::ObjectInterface **)&presult.Type,
      (Scaleform::GFx::Value *)&presult.8,
      (void *)presult.DataAux);
    *(_QWORD *)&presult.Type = 0i64;
  }
  presult.mValue.IValue = 0;
  `eh vector destructor iterator'(&ptr, 0x30ui64, 3ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall AppMain::ST_OnlineReplayDownload(AppMain *this, int replayNo)
{
  unsigned __int64 *m_pNpIdArray; // rax
  Fw::HeapMemory *s_ScoreRankTemp; // rcx
  Fw::cRankingReadWork *v5; // rax
  Fw::HeapMemory *v6; // r9
  Fw::RANKING_HANDLE v7; // ecx
  unsigned int v8; // ebx
  GfxManager *v9; // rax
  GfxManager *v10; // [rsp+60h] [rbp+8h]

  s_ReplayNo = replayNo;
  if ( this->s_ScoreRankTemp[replayNo].hasGameData )
  {
    s_ReadRequest[1].m_BoardId = 531;
    s_ReadRequest[1].m_PcId = this->s_ScoreRankTemp[replayNo].pcId;
    m_pNpIdArray = s_ReadRequest[1].m_AttachData.m_pNpIdArray;
    if ( !s_ReadRequest[1].m_AttachData.m_pNpIdArray )
    {
      m_pNpIdArray = (unsigned __int64 *)aligned_malloc(
                                           (unsigned int)(s_ReadRequest[1].m_User.m_NpIdNum + 8),
                                           (unsigned int)(s_ReadRequest[1].m_User.m_NpIdNum + 32));
      s_ReadRequest[1].m_AttachData.m_pNpIdArray = m_pNpIdArray;
      replayNo = s_ReplayNo;
    }
    s_ScoreRankTemp = (Fw::HeapMemory *)this->s_ScoreRankTemp;
    *m_pNpIdArray = *((_QWORD *)&s_ScoreRankTemp->__vftable + 6 * replayNo);
    Fw::RankingRead::NewWork(s_ScoreRankTemp);
    if ( v5 )
    {
      v8 = Fw::RankingRead::m_CycleWorkHandle + 1;
      if ( Fw::RankingRead::m_CycleWorkHandle + 1 > 0x1FFFFFF )
        v8 = 0x1000000;
      Fw::RankingRead::m_CycleWorkHandle = v8;
      if ( !Fw::cRankingReadWork::beginReadAttachData(v5, &s_ReadRequest[1], (Fw::HeapMemory *)v8, v6) )
        v8 = 0;
      v7 = v8;
    }
    else
    {
      v7 = RANKING_HANDLE_INVALID;
    }
    s_Handle[1] = v7;
    v9 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v10 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v10);
      GfxManager::instance = v9;
    }
    GfxManager::GFv_SetSystemMessage(v9, "$PLAYGO_DOWNLOAD", SYSTEM_MESSAGE_NONE, 0, 1, "no_title", &pnewText, "size_s");
    s_OnlineReplaySaveFlag = 1;
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

void __fastcall AppMain::ST_OnlineReplayInit(AppMain *this, __int64 a2, __int64 a3, int a4)
{
  GfxManager *v5; // rax
  GfxManager *v6; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  extension::gfxi_detail::MovieProxy *v8; // rcx
  UserGameOperation *v9; // rax
  char *m_str; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v13; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v14; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v15; // r9
  char *v16; // rax
  signed __int64 v17; // rsi
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
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
  GfxManager::LoadRequest(v5, FILE_17_ONLINEREPLAY, LoadCompleteEventOnlineReplay, a4);
  v6 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v6;
  }
  if ( v6->m_GFXMovie.m_movieProxy.m_ptr )
  {
    v6->m_GFXMovie.m_movieProxy.m_ptr->m_bAdvance = 1;
    if ( v6->m_GFXMovie.m_movieProxy.m_ptr )
      v6->m_GFXMovie.m_movieProxy.m_ptr->m_bRender = 1;
  }
  if ( !v6 )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v6;
  }
  if ( v6->m_GFXMovieBG.m_movieProxy.m_ptr )
  {
    m_ptr = v6->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( m_ptr )
      m_ptr->m_bAdvance = 1;
    v8 = v6->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( v8 )
      v8->m_bRender = 1;
  }
  else
  {
    GfxManager::LoadRequestBG(v6);
  }
  v9 = UserGameOperation::Instance();
  UserGameOperation::clear(v9);
  m_str = 0i64;
  if ( this->m_PrevScene != 88 )
  {
    s_Minpos_0 = 0;
    s_Cursor_0 = 0;
    s_Tabno_0 = 0;
  }
  SyncMenuImage::Load(
    &this->m_SyncMenuBG,
    (const ImageDataInfo *)MenuImageDataTbl[*(int *)(*(_QWORD *)&AppMain::pApp + 2197384i64)] + 26,
    FADE_IN);
  v11 = 113i64;
  v12 = 102i64;
  if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x800000) == 0 )
    v11 = 102i64;
  v13 = s_soundIndex.m_keys[v11].m_sharedBuffer.m_ptr;
  soundName.m_sharedBuffer.m_ptr = v13;
  if ( v13 )
  {
    v12 = (__int64)v13->m_refCount.m_ptr;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 16), 1ui64);
  }
  p_soundName = &soundName;
  AppMain::Sound_BGMPlay_GetSoundHashKey((AppMain *)v12, &result);
  v14 = result.m_sharedBuffer.m_ptr;
  if ( !result.m_sharedBuffer.m_ptr )
    goto LABEL_29;
  v15 = soundName.m_sharedBuffer.m_ptr;
  if ( soundName.m_sharedBuffer.m_ptr )
    m_str = soundName.m_sharedBuffer.m_ptr->m_str;
  v16 = result.m_sharedBuffer.m_ptr->m_str;
  v17 = m_str - result.m_sharedBuffer.m_ptr->m_str;
  do
  {
    v18 = (unsigned __int8)v16[v17];
    v19 = (unsigned __int8)*v16 - v18;
    if ( v19 )
      break;
    ++v16;
  }
  while ( v18 );
  if ( v19 )
  {
LABEL_29:
    AppMain::Sound_PlayBGMByName(this, &soundName, 0.0, 0.0, 0);
    extension::SoundHashKey::operator=(&this->m_nowPlayBGM, &soundName);
    v15 = soundName.m_sharedBuffer.m_ptr;
  }
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v14->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))result.m_sharedBuffer.m_ptr->~RefCountableWeakSupportBase)(
        result.m_sharedBuffer.m_ptr,
        1i64);
    v15 = soundName.m_sharedBuffer.m_ptr;
  }
  if ( v15
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v15->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v15->~RefCountableWeakSupportBase)(
      v15,
      1i64);
  }
  if ( this->m_iFadeAlpha )
  {
    this->m_bFadeEnd = 0;
    this->m_iFadeFrame = 10;
    v20 = 1000 * this->m_iFadeColor.s.a;
    this->m_iFadeAlpha = v20;
    this->m_iFadeRate = v20 / 10;
    this->m_bFadeLock = 0;
    this->m_FuncFT = 171;
  }
  this->iReserveScene = -1;
  this->m_FuncST = 90;
  this->m_FuncBT = 91;
  AppMain::SceneFunc(this, 90);
  this->m_FuncExit = 89;
  s_OnlineReplaySaveFlag = 0;
  s_AllReplayLoadFlag = 0;
  s_FriendReplayLoadFlag = 0;
}

void __fastcall AppMain::ST_OnlineReplayLoadData(AppMain *this, int filter, int index, int num)
{
  __int64 v4; // r15
  Fw::HeapMemory *v7; // rdx
  const Fw::cTusReadRequest *v8; // rcx
  int v9; // esi
  int v10; // ebx
  int v11; // esi
  Fw::ScoreRankData *s_ScoreRankTemp; // rcx
  Fw::ScoreGameInfo *s_ScoreGameInfoTemp; // rcx
  unsigned __int64 v14; // rdi
  unsigned int v15; // eax
  Fw::ScoreRankData *v16; // rax
  unsigned __int64 v17; // rdx
  char *v18; // rcx
  unsigned int v19; // eax
  int m_NpIdNum; // edx
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // r11
  __int64 v24; // r8
  Fw::ScorePlayerRankData *v25; // rcx
  Fw::ScoreRankData *v26; // rax
  Fw::ScoreGameInfo *s_ScoreGameInfoFriendTemp; // rcx
  Fw::ScoreGameInfo *v28; // rdx
  GfxManager *v29; // rax
  Fw::ScoreRankData *v30; // rcx
  Fw::ScoreGameInfo *v31; // rcx
  unsigned __int64 v32; // rdi
  unsigned int v33; // eax
  Fw::ScoreRankData *v34; // rax
  __int64 v35; // rdx
  char *v36; // rcx
  unsigned int v37; // eax
  int v38; // ebp
  __int64 v39; // rdi
  Fw::HeapMemory *v40; // r9
  Fw::ScoreGameInfo *v41; // rcx
  __int64 v42; // rdi
  unsigned int v43; // eax
  Fw::ScoreRankData *v44; // rax
  char *v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // rbx
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  GfxManager *v49; // [rsp+38h] [rbp-80h]
  Scaleform::GFx::Value val; // [rsp+40h] [rbp-78h] BYREF
  Scaleform::GFx::Value v51; // [rsp+70h] [rbp-48h] BYREF

  v4 = num;
  s_Index = index;
  s_GetNum = num;
  `eh vector constructor iterator'(
    &val,
    0x30ui64,
    2ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  v9 = s_Index;
  v10 = 0;
  if ( (val.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
    val.pObjectInterface = 0i64;
  }
  val.Type = VT_Float;
  val.mValue.IValue = v9;
  v11 = s_GetNum;
  if ( (v51.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v51.pObjectInterface, &v51, v51.mValue.pStringManaged);
    v51.pObjectInterface = 0i64;
  }
  v51.Type = VT_Float;
  v51.mValue.IValue = v11;
  if ( filter )
  {
    if ( filter != 1 )
      goto LABEL_64;
    if ( !s_FriendReplayLoadFlag )
    {
      s_TusReadRequest[0].m_SlotIdNum = 1;
      this->s_NpTusSlotIdArray = 1;
      s_TusReadRequest[0].m_pNpTusSlotIdArray = &this->s_NpTusSlotIdArray;
      s_TusReadRequest[0].m_MultiUserVariable.m_NpIdNum = 100;
      s_TusReadRequest[0].m_FriendsVariable.m_includeSelfFlag = 0;
      s_TusReadRequest[0].m_FriendsVariable.m_SortType = TUS_SORT_TYPE_VARIABLE_DESC_DATE;
      s_TsHandle[0] = (unsigned int)Fw::TusRead::TusBeginReadFriendsVariable(v8, v7);
      s_FriendReplayLoadFlag = 1;
      goto LABEL_64;
    }
    s_ScoreRankTemp = this->s_ScoreRankTemp;
    if ( s_ScoreRankTemp )
    {
      aligned_free(s_ScoreRankTemp);
      this->s_ScoreRankTemp = 0i64;
    }
    s_ScoreGameInfoTemp = this->s_ScoreGameInfoTemp;
    if ( s_ScoreGameInfoTemp )
    {
      aligned_free(s_ScoreGameInfoTemp);
      this->s_ScoreGameInfoTemp = 0i64;
    }
    v14 = s_ReadRequest[2].m_User.m_NpIdNum + 1;
    v15 = 48 * v14;
    if ( !is_mul_ok(v14, 0x30ui64) )
      v15 = -1;
    v16 = (Fw::ScoreRankData *)aligned_malloc(v15, 0x20ui64);
    if ( v16 )
    {
      v17 = v14;
      if ( v14 )
      {
        v18 = (char *)&v16->npId.m_steamid.m_unAll64Bits + 4;
        do
        {
          *((_DWORD *)v18 - 1) = 0;
          *(_DWORD *)v18 &= 0xFF0FFFFF;
          v18[3] = 0;
          *(_DWORD *)v18 &= 0xFFF00000;
          v18 += 48;
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      v16 = 0i64;
    }
    this->s_ScoreRankTemp = v16;
    v19 = 132 * v14;
    if ( !is_mul_ok(v14, 0x84ui64) )
      v19 = -1;
    this->s_ScoreGameInfoTemp = (Fw::ScoreGameInfo *)aligned_malloc(v19, 0x20ui64);
    memset(this->s_ScoreRankTemp, 0, 48 * v14);
    memset(this->s_ScoreGameInfoTemp, 0, 132 * v14);
    m_NpIdNum = s_ReadRequest[2].m_User.m_NpIdNum;
    if ( s_ReadRequest[2].m_User.m_NpIdNum > 0 )
    {
      v21 = 0i64;
      v22 = 0i64;
      v23 = 0i64;
      v24 = 0i64;
      do
      {
        v25 = &this->s_ScorePlayerRankFriendData[v24];
        if ( v25->hasData )
        {
          v26 = this->s_ScoreRankTemp;
          *(_OWORD *)&v26[v23].npId.m_steamid.m_comp = *(_OWORD *)&v25->rankData.npId.m_steamid.m_comp;
          *(_OWORD *)&v26[v23].pcId = *(_OWORD *)&v25->rankData.pcId;
          *(_OWORD *)&v26[v23].hasGameData = *(_OWORD *)&v25->rankData.hasGameData;
          s_ScoreGameInfoFriendTemp = this->s_ScoreGameInfoFriendTemp;
          v28 = &this->s_ScoreGameInfoTemp[v21];
          *(_OWORD *)&v28->infoSize = *(_OWORD *)&s_ScoreGameInfoFriendTemp[v22].infoSize;
          *(_OWORD *)&v28->data[12] = *(_OWORD *)&s_ScoreGameInfoFriendTemp[v22].data[12];
          *(_OWORD *)&v28->data[28] = *(_OWORD *)&s_ScoreGameInfoFriendTemp[v22].data[28];
          *(_OWORD *)&v28->data[44] = *(_OWORD *)&s_ScoreGameInfoFriendTemp[v22].data[44];
          *(_OWORD *)&v28->data[60] = *(_OWORD *)&s_ScoreGameInfoFriendTemp[v22].data[60];
          *(_OWORD *)&v28->data[76] = *(_OWORD *)&s_ScoreGameInfoFriendTemp[v22].data[76];
          *(_OWORD *)&v28->data[92] = *(_OWORD *)&s_ScoreGameInfoFriendTemp[v22].data[92];
          *(_OWORD *)&v28->data[108] = *(_OWORD *)&s_ScoreGameInfoFriendTemp[v22].data[108];
          *(_DWORD *)&v28->data[124] = *(_DWORD *)&s_ScoreGameInfoFriendTemp[v22].data[124];
          ++v23;
          ++v21;
          m_NpIdNum = s_ReadRequest[2].m_User.m_NpIdNum;
        }
        ++v10;
        ++v24;
        ++v22;
      }
      while ( v10 < m_NpIdNum );
    }
    v29 = GfxManager::instance;
    if ( GfxManager::instance )
      goto LABEL_62;
LABEL_61:
    v49 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v49);
    GfxManager::instance = v29;
LABEL_62:
    m_ptr = v29->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(
           v29->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
           "_root.recieveReplayData") )
    {
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.recieveReplayData", 0i64, &val, 2u);
    }
    goto LABEL_64;
  }
  v30 = this->s_ScoreRankTemp;
  if ( s_AllReplayLoadFlag )
  {
    if ( v30 )
    {
      aligned_free(v30);
      this->s_ScoreRankTemp = 0i64;
    }
    v41 = this->s_ScoreGameInfoTemp;
    if ( v41 )
    {
      aligned_free(v41);
      this->s_ScoreGameInfoTemp = 0i64;
    }
    v42 = s_GetNum;
    v43 = 48 * s_GetNum;
    if ( !is_mul_ok(s_GetNum, 0x30ui64) )
      v43 = -1;
    v44 = (Fw::ScoreRankData *)aligned_malloc(v43, 0x20ui64);
    if ( v44 )
    {
      if ( v42 )
      {
        v45 = (char *)&v44->npId.m_steamid.m_unAll64Bits + 4;
        do
        {
          *((_DWORD *)v45 - 1) = 0;
          *(_DWORD *)v45 &= 0xFF0FFFFF;
          v45[3] = 0;
          *(_DWORD *)v45 &= 0xFFF00000;
          v45 += 48;
          --v42;
        }
        while ( v42 );
      }
    }
    else
    {
      v44 = 0i64;
    }
    this->s_ScoreRankTemp = v44;
    v46 = 132 * s_GetNum;
    if ( !is_mul_ok(s_GetNum, 0x84ui64) )
      v46 = -1;
    this->s_ScoreGameInfoTemp = (Fw::ScoreGameInfo *)aligned_malloc(v46, 0x20ui64);
    v47 = s_GetNum;
    memmove(this->s_ScoreRankTemp, this->s_ScoreRankAllTemp, 48i64 * s_GetNum);
    memmove(this->s_ScoreGameInfoTemp, this->s_ScoreGameInfoAllTemp, 132 * v47);
    v29 = GfxManager::instance;
    if ( GfxManager::instance )
      goto LABEL_62;
    goto LABEL_61;
  }
  if ( v30 )
  {
    aligned_free(v30);
    this->s_ScoreRankTemp = 0i64;
  }
  v31 = this->s_ScoreGameInfoTemp;
  if ( v31 )
  {
    aligned_free(v31);
    this->s_ScoreGameInfoTemp = 0i64;
  }
  v32 = 3 * (int)v4;
  v33 = 144 * v4;
  if ( !is_mul_ok(v32, 0x30ui64) )
    v33 = -1;
  v34 = (Fw::ScoreRankData *)aligned_malloc(v33, 0x20ui64);
  if ( v34 )
  {
    v35 = 3 * (int)v4;
    if ( 3 * (_DWORD)v4 )
    {
      v36 = (char *)&v34->npId.m_steamid.m_unAll64Bits + 4;
      do
      {
        *((_DWORD *)v36 - 1) = 0;
        *(_DWORD *)v36 &= 0xFF0FFFFF;
        v36[3] = 0;
        *(_DWORD *)v36 &= 0xFFF00000;
        v36 += 48;
        --v35;
      }
      while ( v35 );
    }
  }
  else
  {
    v34 = 0i64;
  }
  this->s_ScoreRankTemp = v34;
  v37 = 396 * v4;
  if ( !is_mul_ok(v32, 0x84ui64) )
    v37 = -1;
  this->s_ScoreGameInfoTemp = (Fw::ScoreGameInfo *)aligned_malloc(v37, 0x20ui64);
  v38 = s_Index;
  v39 = (s_Index - 1) % 100;
  memset(&this->s_ScoreRankTemp[v39], 0, 144 * v4);
  memset(&this->s_ScoreGameInfoTemp[v39], 0, 396 * v4);
  *(_QWORD *)&s_ReadRequest[0].m_BoardId = 531i64;
  s_Handle[0] = (unsigned int)Fw::RankingRead::BeginReadRank(s_ReadRequest, v38, v4, v40);
LABEL_64:
  `eh vector destructor iterator'(&val, 0x30ui64, 2ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall AppMain::ST_OnlineReplayLoop(AppMain *this)
{
  GfxManager *v2; // r13
  GfxManager *v3; // rax
  extension::AsyncStatus::Step v4; // edx
  int v5; // ebx
  int v6; // er12
  int v7; // ebx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v8; // r8
  std::integral_constant<bool,0> v9; // r9
  GfxManager *v10; // rax
  extension::GFXIMovieStack *v11; // rax
  Fw::RANKING_HANDLE v12; // ebx
  Fw::cTusResult *v13; // rbx
  int v14; // eax
  Fw::ScoreRankData *s_ScoreRankTemp; // rcx
  Fw::ScoreGameInfo *s_ScoreGameInfoTemp; // rcx
  Fw::ScoreGameInfo *s_ScoreGameInfoAllTemp; // rcx
  Fw::ScoreRankData *s_ScoreRankAllTemp; // rcx
  __int64 v19; // rbx
  unsigned int v20; // eax
  Fw::cTusResult *v21; // rax
  int *v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rbx
  unsigned int v25; // eax
  Fw::cTusResult *v26; // rax
  int *v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // r14
  int v30; // er15
  __int64 v31; // rbx
  __int64 v32; // r15
  __int64 v33; // rbx
  __int64 v34; // r14
  __int64 v35; // rdi
  __int64 v36; // rbx
  Fw::cRankingReadWork *v37; // rcx
  GfxManager *v38; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Fw::TS_HANDLE v40; // ebx
  Fw::cTusResult *v41; // rbx
  Fw::ScoreNpIdPcId *s_ScoreNpIdPcId; // rcx
  Fw::ScoreRankData *v43; // rcx
  Fw::ScoreGameInfo *v44; // rcx
  Fw::ScoreNpIdPcId *v45; // rax
  Fw::cTusResult *v46; // rax
  Fw::ScoreGameInfo *v47; // rax
  Fw::ScoreGameInfo *v48; // rbx
  Fw::ScoreRankData *v49; // rax
  Fw::HeapMemory *m_unAll64Bits; // rcx
  Fw::ScoreNpIdPcId *v51; // rax
  unsigned __int64 v52; // rbx
  unsigned int v53; // eax
  unsigned int v54; // eax
  Fw::cTusResult *v55; // rax
  unsigned __int64 v56; // rdx
  int *v57; // rcx
  unsigned int v58; // eax
  Fw::ScoreNpIdPcId *m_pNpIdPcIdArray; // r10
  int m_ResultNum; // eax
  int v61; // er9
  unsigned __int64 v62; // rdx
  __int64 v63; // r8
  Fw::cRankingReadWork *v64; // rax
  Fw::HeapMemory *v65; // r9
  unsigned int v66; // ebx
  Fw::RANKING_HANDLE v67; // ebx
  Fw::cTusResult *v68; // rbx
  int v69; // eax
  Fw::ScorePlayerRankData *s_ScorePlayerRankFriendData; // rcx
  Fw::ScoreGameInfo *s_ScoreGameInfoFriendTemp; // rcx
  __int64 m_NpIdNum; // rbx
  unsigned int v73; // eax
  Fw::cTusResult *v74; // rax
  char *v75; // rcx
  unsigned int v76; // eax
  int v77; // er14
  int v78; // ebx
  __int64 v79; // rdi
  __int64 v80; // r10
  int v81; // er11
  __int64 v82; // r9
  __int64 v83; // r8
  Fw::ScorePlayerRankData *v84; // rcx
  __int128 v85; // xmm2
  __int128 v86; // xmm3
  __int128 v87; // xmm4
  unsigned __int64 tick; // xmm5_8
  Fw::ScorePlayerRankData *v89; // rax
  Fw::ScoreGameInfo *v90; // rcx
  __int128 v91; // xmm2
  __int128 v92; // xmm3
  __int128 v93; // xmm4
  __int128 v94; // xmm5
  __int128 v95; // xmm6
  __int128 v96; // xmm7
  __int128 v97; // xmm8
  __int128 v98; // xmm9
  int v99; // edx
  Fw::ScoreGameInfo *v100; // rax
  int v101; // er11
  __int64 v102; // r8
  __int64 v103; // rdx
  __int64 v104; // r10
  __int64 v105; // r9
  Fw::ScorePlayerRankData *v106; // rcx
  Fw::ScoreRankData *v107; // rax
  Fw::ScoreGameInfo *v108; // rax
  Fw::ScoreGameInfo *v109; // rcx
  Fw::cRankingReadWork *v110; // rcx
  int v111; // ebx
  int v112; // ebx
  GfxManager *v113; // rax
  extension::gfxi_detail::MovieProxy *v114; // rbx
  int Result; // eax
  Fw::RANKING_HANDLE v116; // er11
  GfxManager *v117; // rax
  extension::gfxi_detail::MovieProxy *v118; // rbx
  Fw::cTusResult *v119; // rbx
  Fw::cRankingReadWork *v120; // rcx
  Fw::cRankingReadWork::RANKING_TYPE m_RankingType; // edx
  __int32 v122; // edx
  __int32 v123; // edx
  int v124; // edx
  Fw::cRankingReadWork *v125; // rcx
  GfxManager *v126; // rax
  extension::gfxi_detail::MovieProxy *v127; // rbx
  GfxManager *v128; // rax
  extension::SoundManager *v129; // rax
  bool v130; // dl
  GfxManager *v131; // rax
  GameDataInfo *v132; // rcx
  bool v133; // zf
  Scaleform::GFx::Value ptr; // [rsp+58h] [rbp-69h] BYREF
  Scaleform::GFx::Value val; // [rsp+88h] [rbp-39h] BYREF
  Fw::cTusResult *rResultPtr; // [rsp+128h] [rbp+67h] BYREF

  v2 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    rResultPtr = (Fw::cTusResult *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)rResultPtr);
    v2 = v3;
    GfxManager::instance = v3;
  }
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    2ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  v5 = s_Index;
  v6 = 0;
  if ( (ptr.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
    ptr.pObjectInterface = 0i64;
  }
  ptr.Type = VT_Float;
  ptr.mValue.IValue = v5;
  v7 = s_GetNum;
  if ( (val.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
    val.pObjectInterface = 0i64;
  }
  val.Type = VT_Float;
  val.mValue.IValue = v7;
  SyncMenuImage::Update(&this->m_SyncMenuBG, v4);
  if ( !GfxManager::instance )
  {
    rResultPtr = (Fw::cTusResult *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)rResultPtr);
    GfxManager::instance = v10;
  }
  if ( GfxManager::instance->m_SystemMessageState != SYSTEM_MESSAGE_OPEN || !GfxManager::instance->m_SystemMessageLock )
  {
    v11 = extension::GFXIMovieStack::Instance();
    extension::GFXIMovieStack::advance(v11, 0.016666668);
  }
  v12 = s_Handle[0];
  if ( s_Handle[0] == RANKING_HANDLE_INVALID )
  {
LABEL_64:
    if ( !s_ReplayDataReceived )
      goto LABEL_71;
    goto LABEL_65;
  }
  if ( !EasyIndicator::instance )
  {
    v13 = (Fw::cTusResult *)operator new(0x150ui64);
    rResultPtr = v13;
    memset(&v13->m_Variable.m_pTusVariableArray, 0, 0x140ui64);
    *(_QWORD *)&v13->m_Variable.m_TusVariableNum = 0i64;
    *(&v13[13].m_Variable.m_ResultNum + 1) = 0;
    EasyIndicator::instance = (EasyIndicator *)v13;
    v12 = s_Handle[0];
  }
  EasyIndicator::RequestDraw(
    EasyIndicator::instance,
    1760 * GAME_SCREEN_WIDTH / 1920,
    920 * GAME_SCREEN_HEIGHT / 1080,
    TYPE_CONNECTING);
  v14 = Fw::RankingTarget::GetResult(v12) - 1;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      Fw::RankingSystem::ReleaseHandle(v12);
      s_Handle[0] = RANKING_HANDLE_INVALID;
    }
    goto LABEL_64;
  }
  Fw::RankingSystem::GetRankingResult(&s_ReadResult, v12);
  s_ScoreRankTemp = this->s_ScoreRankTemp;
  if ( s_ScoreRankTemp )
  {
    aligned_free(s_ScoreRankTemp);
    this->s_ScoreRankTemp = 0i64;
  }
  s_ScoreGameInfoTemp = this->s_ScoreGameInfoTemp;
  if ( s_ScoreGameInfoTemp )
  {
    aligned_free(s_ScoreGameInfoTemp);
    this->s_ScoreGameInfoTemp = 0i64;
  }
  s_ScoreGameInfoAllTemp = this->s_ScoreGameInfoAllTemp;
  if ( s_ScoreGameInfoAllTemp )
  {
    aligned_free(s_ScoreGameInfoAllTemp);
    this->s_ScoreGameInfoAllTemp = 0i64;
  }
  s_ScoreRankAllTemp = this->s_ScoreRankAllTemp;
  if ( s_ScoreRankAllTemp )
  {
    aligned_free(s_ScoreRankAllTemp);
    this->s_ScoreRankAllTemp = 0i64;
  }
  v19 = s_GetNum;
  v20 = 48 * s_GetNum;
  if ( !is_mul_ok(s_GetNum, 0x30ui64) )
    v20 = -1;
  v21 = (Fw::cTusResult *)aligned_malloc(v20, 0x20ui64);
  rResultPtr = v21;
  if ( v21 )
  {
    if ( v19 )
    {
      v22 = &v21->m_Variable.m_TusVariableNum + 1;
      do
      {
        *(v22 - 1) = 0;
        *v22 &= 0xFF0FFFFF;
        *((_BYTE *)v22 + 3) = 0;
        *v22 &= 0xFFF00000;
        v22 += 12;
        --v19;
      }
      while ( v19 );
    }
  }
  else
  {
    v21 = 0i64;
  }
  this->s_ScoreRankTemp = (Fw::ScoreRankData *)v21;
  v23 = 132 * s_GetNum;
  if ( !is_mul_ok(s_GetNum, 0x84ui64) )
    v23 = -1;
  this->s_ScoreGameInfoTemp = (Fw::ScoreGameInfo *)aligned_malloc(v23, 0x20ui64);
  v24 = s_GetNum;
  v25 = 48 * s_GetNum;
  if ( !is_mul_ok(s_GetNum, 0x30ui64) )
    v25 = -1;
  v26 = (Fw::cTusResult *)aligned_malloc(v25, 0x20ui64);
  rResultPtr = v26;
  if ( v26 )
  {
    if ( v24 )
    {
      v27 = &v26->m_Variable.m_TusVariableNum + 1;
      do
      {
        *(v27 - 1) = 0;
        *v27 &= 0xFF0FFFFF;
        *((_BYTE *)v27 + 3) = 0;
        *v27 &= 0xFFF00000;
        v27 += 12;
        --v24;
      }
      while ( v24 );
    }
  }
  else
  {
    v26 = 0i64;
  }
  this->s_ScoreRankAllTemp = (Fw::ScoreRankData *)v26;
  v28 = 132 * s_GetNum;
  if ( !is_mul_ok(s_GetNum, 0x84ui64) )
    v28 = -1;
  this->s_ScoreGameInfoAllTemp = (Fw::ScoreGameInfo *)aligned_malloc(v28, 0x20ui64);
  v29 = s_GetNum;
  v30 = s_Index;
  v31 = (s_Index - 1) % 100;
  memmove(&this->s_ScoreRankTemp[v31], s_ReadResult.m_pScoreRankDataArray, 48i64 * s_GetNum);
  memmove(&this->s_ScoreGameInfoTemp[v31], s_ReadResult.m_pGameInfoArray, 132 * v29);
  if ( (int)v29 > 0 )
  {
    v32 = 0i64;
    do
    {
      v33 = v32;
      v34 = 2i64;
      do
      {
        v35 = 3i64;
        do
        {
          SteamNameCache::request(
            SteamNameCache::ms_instance,
            *(CSteamID *)&s_ReadResult.m_pGameInfoArray->data[v33 + 8]);
          v33 += 12i64;
          --v35;
        }
        while ( v35 );
        --v34;
      }
      while ( v34 );
      ++v6;
      v32 += 132i64;
      LODWORD(v29) = s_GetNum;
    }
    while ( v6 < s_GetNum );
    v30 = s_Index;
  }
  v36 = (v30 - 1) % 100;
  memmove(&this->s_ScoreRankAllTemp[v36], s_ReadResult.m_pScoreRankDataArray, 48i64 * (int)v29);
  memmove(&this->s_ScoreGameInfoAllTemp[v36], s_ReadResult.m_pGameInfoArray, 132i64 * (int)v29);
  if ( (s_Handle[0] & 0xFF000000) == 0x1000000 )
  {
    if ( s_Handle[0] )
    {
      v37 = Fw::RankingRead::m_pWorkFirst;
      if ( Fw::RankingRead::m_pWorkFirst )
      {
        while ( v37->m_WorkHandle != s_Handle[0] )
        {
          v37 = v37->m_pNext;
          if ( !v37 )
            goto LABEL_63;
        }
        Fw::RankingRead::ReleaseWork(v37);
      }
    }
  }
  else if ( (s_Handle[0] & 0xFF000000) == 0x2000000 )
  {
    Fw::RankingWrite::ReleaseHandle(s_Handle[0]);
  }
LABEL_63:
  s_Handle[0] = RANKING_HANDLE_INVALID;
  s_ReplayDataReceived = 1;
LABEL_65:
  if ( !(SteamNameCache::ms_instance->m_requests._Mypair._Myval2._Mylast
       - SteamNameCache::ms_instance->m_requests._Mypair._Myval2._Myfirst) )
  {
    if ( !GfxManager::instance )
    {
      rResultPtr = (Fw::cTusResult *)operator new(0x108ui64);
      GfxManager::GfxManager((GfxManager *)rResultPtr);
      GfxManager::instance = v38;
    }
    m_ptr = GfxManager::instance->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(
           GfxManager::instance->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
           "_root.recieveReplayData") )
    {
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.recieveReplayData", 0i64, &ptr, 2u);
    }
    s_ReplayDataReceived = 0;
  }
LABEL_71:
  v40 = s_TsHandle[0];
  if ( s_TsHandle[0] )
  {
    if ( !EasyIndicator::instance )
    {
      v41 = (Fw::cTusResult *)operator new(0x150ui64);
      rResultPtr = v41;
      memset(&v41->m_Variable.m_pTusVariableArray, 0, 0x140ui64);
      *(_QWORD *)&v41->m_Variable.m_TusVariableNum = 0i64;
      *(&v41[13].m_Variable.m_ResultNum + 1) = 0;
      EasyIndicator::instance = (EasyIndicator *)v41;
      v40 = s_TsHandle[0];
    }
    EasyIndicator::RequestDraw(
      EasyIndicator::instance,
      1760 * GAME_SCREEN_WIDTH / 1920,
      920 * GAME_SCREEN_HEIGHT / 1080,
      TYPE_CONNECTING);
    if ( (unsigned int)Fw::TitleStorageTarget::GetResult(v40) == 1 )
    {
      rResultPtr = &s_TusResult;
      Fw::TitleStorageTarget::GetTusResult(&rResultPtr, v40);
      s_ScoreNpIdPcId = this->s_ScoreNpIdPcId;
      if ( s_ScoreNpIdPcId )
      {
        aligned_free(s_ScoreNpIdPcId);
        this->s_ScoreNpIdPcId = 0i64;
      }
      v43 = this->s_ScoreRankTemp;
      if ( v43 )
      {
        aligned_free(v43);
        this->s_ScoreRankTemp = 0i64;
      }
      v44 = this->s_ScoreGameInfoTemp;
      if ( v44 )
      {
        aligned_free(v44);
        this->s_ScoreGameInfoTemp = 0i64;
      }
      if ( s_TusResult.m_Variable.m_ResultNum )
      {
        v52 = 3 * (s_TusResult.m_Variable.m_ResultNum + 1);
        v53 = 48 * (s_TusResult.m_Variable.m_ResultNum + 1);
        if ( !is_mul_ok(v52, 0x10ui64) )
          v53 = -1;
        this->s_ScoreNpIdPcId = (Fw::ScoreNpIdPcId *)aligned_malloc(v53, 0x20ui64);
        v54 = 48 * v52;
        if ( !is_mul_ok(v52, 0x30ui64) )
          v54 = -1;
        v55 = (Fw::cTusResult *)aligned_malloc(v54, 0x20ui64);
        rResultPtr = v55;
        if ( v55 )
        {
          v56 = v52;
          if ( v52 )
          {
            v57 = &v55->m_Variable.m_TusVariableNum + 1;
            do
            {
              *(v57 - 1) = 0;
              *v57 &= 0xFF0FFFFF;
              *((_BYTE *)v57 + 3) = 0;
              *v57 &= 0xFFF00000;
              v57 += 12;
              --v56;
            }
            while ( v56 );
          }
        }
        else
        {
          v55 = 0i64;
        }
        this->s_ScoreRankTemp = (Fw::ScoreRankData *)v55;
        v58 = 132 * v52;
        if ( !is_mul_ok(v52, 0x84ui64) )
          v58 = -1;
        this->s_ScoreGameInfoTemp = (Fw::ScoreGameInfo *)aligned_malloc(v58, 0x20ui64);
        memset(this->s_ScoreRankTemp, 0, 48 * v52);
        memset(this->s_ScoreGameInfoTemp, 0, 132 * v52);
        memset(this->s_ScoreNpIdPcId, 0, 16 * v52);
      }
      else
      {
        v45 = (Fw::ScoreNpIdPcId *)aligned_malloc(
                                     (unsigned int)(s_TusResult.m_Variable.m_ResultNum + 16),
                                     (unsigned int)(s_TusResult.m_Variable.m_ResultNum + 32));
        if ( v45 )
        {
          v45->npId = 0i64;
          *(_QWORD *)&v45->pcId = 0i64;
        }
        else
        {
          v45 = 0i64;
        }
        this->s_ScoreNpIdPcId = v45;
        v46 = (Fw::cTusResult *)aligned_malloc(0x30ui64, 0x20ui64);
        rResultPtr = v46;
        if ( v46 )
        {
          *(_QWORD *)&v46->m_Variable.m_TusVariableNum = 0i64;
          v46->m_Variable.m_pTusVariableArray = 0i64;
          *(_QWORD *)&v46->m_Variable.m_ResultNum = 0i64;
          *(_QWORD *)&v46[1].m_Variable.m_TusVariableNum = 0i64;
          v46[1].m_Variable.m_pTusVariableArray = 0i64;
          *(_QWORD *)&v46[1].m_Variable.m_ResultNum = 0i64;
          v46->m_Variable.m_TusVariableNum = 0;
          *(&v46->m_Variable.m_TusVariableNum + 1) &= 0xFF0FFFFF;
          *((_BYTE *)&v46->m_Variable.m_TusVariableNum + 7) = 0;
          *(&v46->m_Variable.m_TusVariableNum + 1) &= 0xFFF00000;
        }
        else
        {
          v46 = 0i64;
        }
        this->s_ScoreRankTemp = (Fw::ScoreRankData *)v46;
        v47 = (Fw::ScoreGameInfo *)aligned_malloc(0x84ui64, 0x20ui64);
        v48 = v47;
        if ( v47 )
          memset(v47, 0, sizeof(Fw::ScoreGameInfo));
        else
          v48 = 0i64;
        this->s_ScoreGameInfoTemp = v48;
        v49 = this->s_ScoreRankTemp;
        v49->npId.m_steamid.m_unAll64Bits = 0i64;
        v49->scoreValue = 0i64;
        *(_QWORD *)&v49->pcId = 0i64;
        *(_QWORD *)&v49->rank = 0i64;
        *(_QWORD *)&v49->hasGameData = 0i64;
        v49->recordDate.tick = 0i64;
        memset(this->s_ScoreGameInfoTemp, 0, sizeof(Fw::ScoreGameInfo));
        m_unAll64Bits = 0i64;
        v51 = this->s_ScoreNpIdPcId;
        v51->npId = 0i64;
        *(_QWORD *)&v51->pcId = 0i64;
      }
      m_pNpIdPcIdArray = this->s_ScoreNpIdPcId;
      s_ReadRequest[2].m_User.m_pNpIdArray = &m_pNpIdPcIdArray->npId;
      m_ResultNum = s_TusResult.m_Variable.m_ResultNum;
      if ( s_TusResult.m_Variable.m_ResultNum )
      {
        v61 = 0;
        if ( s_TusResult.m_Variable.m_ResultNum > 0 )
        {
          v62 = 0i64;
          v63 = 0i64;
          while ( 1 )
          {
            m_unAll64Bits = (Fw::HeapMemory *)s_TusResult.m_Variable.m_pTusVariableArray[v63].ownerId.m_steamid.m_unAll64Bits;
            m_pNpIdPcIdArray[v62 / 2].npId = (unsigned __int64)m_unAll64Bits;
            LODWORD(s_ReadRequest[2].m_User.m_pNpIdArray[v62 + 1]) = 0;
            ++v61;
            ++v63;
            v62 += 2i64;
            m_ResultNum = s_TusResult.m_Variable.m_ResultNum;
            if ( v61 >= s_TusResult.m_Variable.m_ResultNum )
              break;
            m_pNpIdPcIdArray = s_ReadRequest[2].m_RankByPc.m_pNpIdPcIdArray;
          }
        }
        s_ReadRequest[2].m_User.m_NpIdNum = m_ResultNum;
      }
      else
      {
        m_pNpIdPcIdArray->npId = Fw::NetworkCommon::m_NpOnlineId.data;
        *((_DWORD *)s_ReadRequest[2].m_User.m_pNpIdArray + 2) = 0;
        s_ReadRequest[2].m_User.m_NpIdNum = 1;
      }
      *(_QWORD *)&s_ReadRequest[2].m_BoardId = 531i64;
      Fw::RankingRead::NewWork(m_unAll64Bits);
      if ( v64 )
      {
        v66 = Fw::RankingRead::m_CycleWorkHandle + 1;
        if ( Fw::RankingRead::m_CycleWorkHandle + 1 > 0x1FFFFFF )
          v66 = 0x1000000;
        Fw::RankingRead::m_CycleWorkHandle = v66;
        if ( !Fw::cRankingReadWork::beginReadRankByPC(v64, &s_ReadRequest[2], (Fw::HeapMemory *)v66, v65) )
          v66 = 0;
      }
      else
      {
        v66 = 0;
      }
      s_Handle[2] = v66;
      Fw::TitleStorageTarget::ReleaseHandle(s_TsHandle[0]);
      s_TsHandle[0] = TS_HANDLE_INVALID;
    }
  }
  v67 = s_Handle[2];
  if ( s_Handle[2] )
  {
    if ( !EasyIndicator::instance )
    {
      v68 = (Fw::cTusResult *)operator new(0x150ui64);
      rResultPtr = v68;
      memset(&v68->m_Variable.m_pTusVariableArray, 0, 0x140ui64);
      *(_QWORD *)&v68->m_Variable.m_TusVariableNum = 0i64;
      *(&v68[13].m_Variable.m_ResultNum + 1) = 0;
      EasyIndicator::instance = (EasyIndicator *)v68;
      v67 = s_Handle[2];
    }
    EasyIndicator::RequestDraw(
      EasyIndicator::instance,
      1760 * GAME_SCREEN_WIDTH / 1920,
      920 * GAME_SCREEN_HEIGHT / 1080,
      TYPE_CONNECTING);
    v69 = Fw::RankingTarget::GetResult(v67) - 1;
    if ( v69 )
    {
      if ( v69 == 1 )
      {
        Fw::RankingSystem::ReleaseHandle(v67);
        s_Handle[2] = RANKING_HANDLE_INVALID;
      }
    }
    else
    {
      Fw::RankingSystem::GetRankingResult(&s_ReadResult, v67);
      s_ScorePlayerRankFriendData = this->s_ScorePlayerRankFriendData;
      if ( s_ScorePlayerRankFriendData )
      {
        aligned_free(s_ScorePlayerRankFriendData);
        this->s_ScorePlayerRankFriendData = 0i64;
      }
      s_ScoreGameInfoFriendTemp = this->s_ScoreGameInfoFriendTemp;
      if ( s_ScoreGameInfoFriendTemp )
      {
        aligned_free(s_ScoreGameInfoFriendTemp);
        this->s_ScoreGameInfoFriendTemp = 0i64;
      }
      m_NpIdNum = s_ReadRequest[2].m_User.m_NpIdNum;
      v73 = 56 * s_ReadRequest[2].m_User.m_NpIdNum;
      if ( !is_mul_ok(s_ReadRequest[2].m_User.m_NpIdNum, 0x38ui64) )
        v73 = -1;
      v74 = (Fw::cTusResult *)aligned_malloc(v73, 0x20ui64);
      rResultPtr = v74;
      if ( v74 )
      {
        if ( m_NpIdNum )
        {
          v75 = (char *)&v74->m_Variable.m_pTusVariableArray + 4;
          do
          {
            *((_DWORD *)v75 - 1) = 0;
            *(_DWORD *)v75 &= 0xFF0FFFFF;
            v75[3] = 0;
            *(_DWORD *)v75 &= 0xFFF00000;
            v75 += 56;
            --m_NpIdNum;
          }
          while ( m_NpIdNum );
        }
      }
      else
      {
        v74 = 0i64;
      }
      this->s_ScorePlayerRankFriendData = (Fw::ScorePlayerRankData *)v74;
      v76 = 132 * s_ReadRequest[2].m_User.m_NpIdNum;
      if ( !is_mul_ok(s_ReadRequest[2].m_User.m_NpIdNum, 0x84ui64) )
        v76 = -1;
      this->s_ScoreGameInfoFriendTemp = (Fw::ScoreGameInfo *)aligned_malloc(v76, 0x20ui64);
      memmove(
        this->s_ScorePlayerRankFriendData,
        s_ReadResult.m_RankDataArray,
        56i64 * s_ReadRequest[2].m_User.m_NpIdNum);
      memmove(
        this->s_ScoreGameInfoFriendTemp,
        s_ReadResult.m_pGameInfoArray,
        132i64 * s_ReadRequest[2].m_User.m_NpIdNum);
      v77 = 0;
      v78 = s_ReadRequest[2].m_User.m_NpIdNum;
      if ( s_ReadRequest[2].m_User.m_NpIdNum > 0 )
      {
        v79 = 0i64;
        v80 = 0i64;
        do
        {
          v81 = v77;
          if ( v77 < v78 )
          {
            v82 = v79 * 132;
            v83 = v80 * 56;
            do
            {
              v84 = this->s_ScorePlayerRankFriendData;
              if ( v84[v80].hasData
                && *(int *)((char *)&v84->hasData + v83)
                && v84[v80].rankData.recordDate.tick < *(unsigned __int64 *)((char *)&v84->rankData.recordDate.tick + v83) )
              {
                v85 = *(_OWORD *)&v84[v80].hasData;
                v86 = *(_OWORD *)&v84[v80].rankData.scoreValue;
                v87 = *(_OWORD *)&v84[v80].rankData.rank;
                tick = v84[v80].rankData.recordDate.tick;
                *(_OWORD *)&v84[v80].hasData = *(_OWORD *)((char *)&v84->hasData + v83);
                *(_OWORD *)&v84[v80].rankData.scoreValue = *(_OWORD *)((char *)&v84->rankData.scoreValue + v83);
                *(_OWORD *)&v84[v80].rankData.rank = *(_OWORD *)((char *)&v84->rankData.rank + v83);
                v84[v80].rankData.recordDate.tick = *(unsigned __int64 *)((char *)&v84->rankData.recordDate.tick + v83);
                v89 = this->s_ScorePlayerRankFriendData;
                *(_OWORD *)((char *)&v89->hasData + v83) = v85;
                *(_OWORD *)((char *)&v89->rankData.scoreValue + v83) = v86;
                *(_OWORD *)((char *)&v89->rankData.rank + v83) = v87;
                *(unsigned __int64 *)((char *)&v89->rankData.recordDate.tick + v83) = tick;
                v90 = this->s_ScoreGameInfoFriendTemp;
                v91 = *(_OWORD *)&v90[v79].infoSize;
                v92 = *(_OWORD *)&v90[v79].data[12];
                v93 = *(_OWORD *)&v90[v79].data[28];
                v94 = *(_OWORD *)&v90[v79].data[44];
                v95 = *(_OWORD *)&v90[v79].data[60];
                v96 = *(_OWORD *)&v90[v79].data[76];
                v97 = *(_OWORD *)&v90[v79].data[92];
                v98 = *(_OWORD *)&v90[v79].data[108];
                v99 = *(_DWORD *)&v90[v79].data[124];
                *(_OWORD *)&v90[v79].infoSize = *(_OWORD *)((char *)&v90->infoSize + v82);
                *(_OWORD *)&v90[v79].data[12] = *(_OWORD *)&v90->data[v82 + 12];
                *(_OWORD *)&v90[v79].data[28] = *(_OWORD *)&v90->data[v82 + 28];
                *(_OWORD *)&v90[v79].data[44] = *(_OWORD *)&v90->data[v82 + 44];
                *(_OWORD *)&v90[v79].data[60] = *(_OWORD *)&v90->data[v82 + 60];
                *(_OWORD *)&v90[v79].data[76] = *(_OWORD *)&v90->data[v82 + 76];
                *(_OWORD *)&v90[v79].data[92] = *(_OWORD *)&v90->data[v82 + 92];
                *(_OWORD *)&v90[v79].data[108] = *(_OWORD *)&v90->data[v82 + 108];
                *(_DWORD *)&v90[v79].data[124] = *(_DWORD *)&v90->data[v82 + 124];
                v100 = this->s_ScoreGameInfoFriendTemp;
                *(_OWORD *)((char *)&v100->infoSize + v82) = v91;
                *(_OWORD *)&v100->data[v82 + 12] = v92;
                *(_OWORD *)&v100->data[v82 + 28] = v93;
                *(_OWORD *)&v100->data[v82 + 44] = v94;
                *(_OWORD *)&v100->data[v82 + 60] = v95;
                *(_OWORD *)&v100->data[v82 + 76] = v96;
                *(_OWORD *)&v100->data[v82 + 92] = v97;
                *(_OWORD *)&v100->data[v82 + 108] = v98;
                *(_DWORD *)&v100->data[v82 + 124] = v99;
                v78 = s_ReadRequest[2].m_User.m_NpIdNum;
              }
              ++v81;
              v83 += 56i64;
              v82 += 132i64;
            }
            while ( v81 < v78 );
          }
          ++v77;
          ++v80;
          ++v79;
        }
        while ( v77 < v78 );
      }
      v101 = 0;
      if ( v78 > 0 )
      {
        v102 = 0i64;
        v103 = 0i64;
        v104 = 0i64;
        v105 = 0i64;
        do
        {
          v106 = this->s_ScorePlayerRankFriendData;
          if ( v106[v105].hasData )
          {
            v107 = this->s_ScoreRankTemp;
            *(_OWORD *)&v107[v104].npId.m_steamid.m_comp = *(_OWORD *)&v106[v105].rankData.npId.m_steamid.m_comp;
            *(_OWORD *)&v107[v104].pcId = *(_OWORD *)&v106[v105].rankData.pcId;
            *(_OWORD *)&v107[v104].hasGameData = *(_OWORD *)&v106[v105].rankData.hasGameData;
            v108 = this->s_ScoreGameInfoFriendTemp;
            v109 = this->s_ScoreGameInfoTemp;
            *(_OWORD *)&v109[v102].infoSize = *(_OWORD *)&v108[v103].infoSize;
            *(_OWORD *)&v109[v102].data[12] = *(_OWORD *)&v108[v103].data[12];
            *(_OWORD *)&v109[v102].data[28] = *(_OWORD *)&v108[v103].data[28];
            *(_OWORD *)&v109[v102].data[44] = *(_OWORD *)&v108[v103].data[44];
            *(_OWORD *)&v109[v102].data[60] = *(_OWORD *)&v108[v103].data[60];
            *(_OWORD *)&v109[v102].data[76] = *(_OWORD *)&v108[v103].data[76];
            *(_OWORD *)&v109[v102].data[92] = *(_OWORD *)&v108[v103].data[92];
            *(_OWORD *)&v109[v102].data[108] = *(_OWORD *)&v108[v103].data[108];
            *(_DWORD *)&v109[v102].data[124] = *(_DWORD *)&v108[v103].data[124];
            ++v104;
            ++v102;
            v78 = s_ReadRequest[2].m_User.m_NpIdNum;
          }
          ++v101;
          ++v105;
          ++v103;
        }
        while ( v101 < v78 );
      }
      if ( (s_Handle[2] & 0xFF000000) == 0x1000000 )
      {
        if ( s_Handle[2] )
        {
          v110 = Fw::RankingRead::m_pWorkFirst;
          if ( Fw::RankingRead::m_pWorkFirst )
          {
            while ( v110->m_WorkHandle != s_Handle[2] )
            {
              v110 = v110->m_pNext;
              if ( !v110 )
                goto LABEL_163;
            }
            Fw::RankingRead::ReleaseWork(v110);
          }
        }
      }
      else if ( (s_Handle[2] & 0xFF000000) == 0x2000000 )
      {
        Fw::RankingWrite::ReleaseHandle(s_Handle[2]);
      }
LABEL_163:
      s_Handle[2] = RANKING_HANDLE_INVALID;
      v111 = s_Index;
      if ( (ptr.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
        ptr.pObjectInterface = 0i64;
      }
      ptr.Type = VT_Float;
      ptr.mValue.IValue = v111;
      v112 = s_GetNum;
      if ( (val.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
        val.pObjectInterface = 0i64;
      }
      val.Type = VT_Float;
      val.mValue.IValue = v112;
      v113 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        rResultPtr = (Fw::cTusResult *)operator new(0x108ui64);
        GfxManager::GfxManager((GfxManager *)rResultPtr);
        GfxManager::instance = v113;
      }
      v114 = v113->m_GFXMovie.m_movieProxy.m_ptr;
      if ( Scaleform::GFx::Movie::IsAvailable(
             v113->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
             "_root.recieveReplayData") )
      {
        Scaleform::GFx::Movie::Invoke(v114->m_movie.pObject, "_root.recieveReplayData", 0i64, &ptr, 2u);
      }
    }
  }
  if ( s_Handle[1] )
  {
    Result = Fw::RankingTarget::GetResult(s_Handle[1]);
    if ( Result != 1 )
    {
      if ( (unsigned int)(Result - 2) > 1 )
      {
        if ( !EasyIndicator::instance )
        {
          v119 = (Fw::cTusResult *)operator new(0x150ui64);
          rResultPtr = v119;
          memset(&v119->m_Variable.m_pTusVariableArray, 0, 0x140ui64);
          *(_QWORD *)&v119->m_Variable.m_TusVariableNum = 0i64;
          *(&v119[13].m_Variable.m_ResultNum + 1) = 0;
          EasyIndicator::instance = (EasyIndicator *)v119;
        }
        EasyIndicator::RequestDraw(
          EasyIndicator::instance,
          1760 * GAME_SCREEN_WIDTH / 1920,
          920 * GAME_SCREEN_HEIGHT / 1080,
          TYPE_CONNECTING);
      }
      else
      {
        Fw::RankingSystem::ReleaseHandle(v116);
        s_Handle[1] = RANKING_HANDLE_INVALID;
        v117 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          rResultPtr = (Fw::cTusResult *)operator new(0x108ui64);
          GfxManager::GfxManager((GfxManager *)rResultPtr);
          GfxManager::instance = v117;
        }
        v118 = v117->m_GFXMovieSystem.m_movieProxy.m_ptr;
        if ( v118 )
        {
          if ( Scaleform::GFx::Movie::IsAvailable(v118->m_movie.pObject, "_root.CloseSystemMessageEx") )
            Scaleform::GFx::Movie::Invoke(v118->m_movie.pObject, "_root.CloseSystemMessageEx", 0i64, 0i64, 0);
          v117 = GfxManager::instance;
        }
        if ( !v117 )
        {
          rResultPtr = (Fw::cTusResult *)operator new(0x108ui64);
          GfxManager::GfxManager((GfxManager *)rResultPtr);
          GfxManager::instance = v117;
        }
        GfxManager::GFv_SetSystemMessage(
          v117,
          "$ERROR_PROBLEM",
          SYSTEM_MESSAGE_OK,
          0,
          1,
          "no_title",
          &pnewText,
          "size_s");
      }
      goto LABEL_215;
    }
    if ( (v116 & 0xFF000000) != 0x1000000 )
      goto LABEL_201;
    v120 = Fw::RankingRead::m_pWorkFirst;
    if ( !Fw::RankingRead::m_pWorkFirst )
      goto LABEL_201;
    while ( v120->m_WorkHandle != v116 )
    {
      v120 = v120->m_pNext;
      if ( !v120 )
        goto LABEL_201;
    }
    if ( v120->m_Result != RANKING_RESULT_SUCCEED )
      goto LABEL_201;
    s_ReadResult.m_BoardId = v120->m_BoardId;
    m_RankingType = v120->m_RankingType;
    if ( m_RankingType )
    {
      v122 = m_RankingType - 1;
      if ( !v122 || (v123 = v122 - 1) == 0 )
      {
        s_ReadResult.m_pScoreRankDataArray = v120->m_pScoreRankDataArray;
LABEL_200:
        s_ReadResult.m_pGameInfoArray = v120->m_pGameInfoArray;
LABEL_201:
        AppMain::ConvertLeaderBoardReplaytoSaveReplay(
          this,
          &s_ReadResult,
          &this->s_ScoreGameInfoTemp[s_ReplayNo],
          &this->s_ScoreRankTemp[s_ReplayNo]);
        if ( (s_Handle[1] & 0xFF000000) == 0x1000000 )
        {
          if ( s_Handle[1] )
          {
            v125 = Fw::RankingRead::m_pWorkFirst;
            if ( Fw::RankingRead::m_pWorkFirst )
            {
              while ( v125->m_WorkHandle != s_Handle[1] )
              {
                v125 = v125->m_pNext;
                if ( !v125 )
                  goto LABEL_210;
              }
              Fw::RankingRead::ReleaseWork(v125);
            }
          }
        }
        else if ( (s_Handle[1] & 0xFF000000) == 0x2000000 )
        {
          Fw::RankingWrite::ReleaseHandle(s_Handle[1]);
        }
LABEL_210:
        s_Handle[1] = RANKING_HANDLE_INVALID;
        if ( !GfxManager::instance )
        {
          rResultPtr = (Fw::cTusResult *)operator new(0x108ui64);
          GfxManager::GfxManager((GfxManager *)rResultPtr);
          GfxManager::instance = v126;
        }
        v127 = GfxManager::instance->m_GFXMovieSystem.m_movieProxy.m_ptr;
        if ( v127 && Scaleform::GFx::Movie::IsAvailable(v127->m_movie.pObject, "_root.CloseSystemMessageEx") )
          Scaleform::GFx::Movie::Invoke(v127->m_movie.pObject, "_root.CloseSystemMessageEx", 0i64, 0i64, 0);
        goto LABEL_215;
      }
      v124 = v123 - 1;
      if ( v124 )
      {
        if ( v124 == 1 )
        {
          s_ReadResult.m_pAttachDataArray = v120->m_pAttachDataArray;
          s_ReadResult.m_AttachDataArraySize = v120->m_AttachDataArraySize;
        }
        goto LABEL_201;
      }
    }
    s_ReadResult.m_RankDataArray = v120->m_pPlayerRankDataArray;
    goto LABEL_200;
  }
LABEL_215:
  if ( v2->m_bQuitGFXMovie )
  {
    if ( !GfxManager::instance )
    {
      rResultPtr = (Fw::cTusResult *)operator new(0x108ui64);
      GfxManager::GfxManager((GfxManager *)rResultPtr);
      GfxManager::instance = v128;
    }
    if ( GfxManager::instance->m_QuitResultCode )
    {
      this->m_PrevScene = 0;
      if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                                + 40i64) )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v132);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        }
      }
      `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag = 0;
      this->m_FadeST = 100;
    }
    else
    {
      v129 = extension::SoundManager::the_instance;
      if ( !extension::SoundManager::the_instance )
      {
        rResultPtr = (Fw::cTusResult *)operator new(0x310ui64);
        extension::SoundManager::SoundManager((extension::SoundManager *)rResultPtr);
        extension::SoundManager::the_instance = v129;
      }
      extension::SoundManager::stopBGM(v129, 1.0, v8, v9);
      v131 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        rResultPtr = (Fw::cTusResult *)operator new(0x108ui64);
        GfxManager::GfxManager((GfxManager *)rResultPtr);
        GfxManager::instance = v131;
      }
      v131->m_ReleaseFlag = 1;
      this->m_PrevScene = 88;
      AppMain::SetBattleSetting(this, v130);
      this->m_iLoadingNextFunc = 177;
      this->m_FadeST = 183;
    }
    v133 = this->m_FuncFT == 170;
    this->m_bExitFuncWaitFrame = 0;
    this->m_FadeExitFunc = 89;
    this->m_FuncST = 0;
    this->iReserveScene = -1;
    if ( !v133 )
      this->m_FuncFT = 172;
  }
  `eh vector destructor iterator'(&ptr, 0x30ui64, 2ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

