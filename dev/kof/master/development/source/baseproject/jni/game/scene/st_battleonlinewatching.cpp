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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.cpp"

const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5CB70
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0AFE
void AppMain::BattleOnlineWatchingInitialize(); // 0x1401BA0B0
void AppMain::BattleOnlineWatchingUpdate(); // 0x1401BA1E0
void AppMain::BattleOnlineWatchingStart(); // 0x1401BA400
void AppMain::BattleOnlineWatching_updateNormalScene(long userIndex); // 0x1401BA4E0
void AppMain::BattleOnlineWatching_startFixedPhraseScene(); // 0x1401BA6F0
void AppMain::BattleOnlineWatching_updateFixedPhraseScene(long userIndex); // 0x1401BA7B0
void AppMain::BattleOnlineWatching_updateSESelectScene(long userIndex); // 0x1401BA8B0
void AppMain::BattleOnlineWatching_playSE(GameOperations::GameOpSpec spec); // 0x1401BADB0
NETWORK_GAYA_TYPE AppMain::BattleOnlineWatching_getGAYAType(BattleHudCommonNumbers::ESESelectorPage::Type SEPage, GameOperations::GameOpSpec spec); // 0x1401BAE90
AppMain::ScaleformResult::~ScaleformResult(); // 0x1401BAF70//decompilation failure at 140A5CB70!
//decompilation failure at 1408A0AFE!
void __fastcall AppMain::ScaleformResult::~ScaleformResult(AppMain::ScaleformResult *this, unsigned __int64 a2)
{
  char *m_pValueString1; // rcx

  this->m_containValueBits = 0;
  m_pValueString1 = (char *)this->m_pValueString1;
  if ( m_pValueString1 )
  {
    operator delete(m_pValueString1, a2);
    this->m_pValueString1 = 0i64;
  }
}

void __fastcall AppMain::BattleOnlineWatchingInitialize(AppMain *this)
{
  float v1; // xmm0_4
  float v3; // xmm1_4
  __int64 i; // rcx

  this->m_watchingParams.bEnableUserOperation = 0;
  this->m_watchingParams.operationType = InQuad;
  this->m_watchingParams.totalFrame = 0;
  v1 = 0.0;
  *(_QWORD *)this->m_watchingParams.playSEFrame = 0i64;
  *(_QWORD *)&this->m_watchingParams.playSEFrame[2] = 0i64;
  *(_QWORD *)&this->m_watchingParams.playSEFrame[4] = 0i64;
  *(_QWORD *)&this->m_watchingParams.playSEFrame[6] = 0i64;
  *(_QWORD *)&this->m_watchingParams.playSEFrame[8] = 0i64;
  *(_QWORD *)&this->m_watchingParams.playSEFrame[10] = 0i64;
  *(_QWORD *)&this->m_watchingParams.playSEFrame[12] = 0i64;
  *(_QWORD *)&this->m_watchingParams.playSEFrame[14] = 0i64;
  this->m_watchingParams.bOpenGFxMenu = 0;
  v3 = fminf(this->m_BattleHud.m_fadeAnimSESelector.m_number, 1.0);
  *(_QWORD *)&this->m_BattleHud.m_fadeAnimSESelector.m_max = 1065353216i64;
  if ( v3 >= 0.0 )
    v1 = v3;
  this->m_BattleHud.m_fadeAnimSESelector.m_number = v1;
  this->m_BattleHud.m_fadeAnimSESelector.m_power = -0.1;
  this->m_BattleHud.m_fadeAnimSESelector.m_bAnimation = 1;
  *(_QWORD *)&this->m_BattleHud.m_seSelectorPage = 0i64;
  this->m_watchingParams.descriptionType = InQuad;
  *(_QWORD *)&this->m_watchingParams.stopTimerSendMessage = 0i64;
  if ( this->m_watchingParams.pTinpanFrame )
  {
    this->m_watchingParams.tinpanFrameIndex = 0;
  }
  else
  {
    this->m_watchingParams.pTinpanFrame = (int *)operator new[](0xC8ui64);
    for ( i = 0i64; i < 50; i += 2i64 )
    {
      this->m_watchingParams.pTinpanFrame[i] = -900;
      this->m_watchingParams.pTinpanFrame[i + 1] = -900;
    }
    this->m_watchingParams.tinpanFrameIndex = 0;
  }
}

void __fastcall AppMain::BattleOnlineWatchingStart(AppMain *this)
{
  float v1; // xmm1_4
  float v2; // xmm0_4
  GfxManager *v3; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  GfxManager *v5; // [rsp+50h] [rbp+8h]

  if ( this->m_watchingParams.operationType )
  {
    this->m_watchingParams.bOpenGFxMenu = 1;
    this->m_watchingParams.operationType = InQuad;
    *(_QWORD *)&this->m_BattleHud.m_fadeAnimSESelector.m_max = 1065353216i64;
    v1 = fminf(this->m_BattleHud.m_fadeAnimSESelector.m_number, 1.0);
    v2 = 0.0;
    if ( v1 >= 0.0 )
      v2 = v1;
    this->m_BattleHud.m_fadeAnimSESelector.m_number = v2;
    this->m_BattleHud.m_fadeAnimSESelector.m_power = -0.1;
    this->m_BattleHud.m_fadeAnimSESelector.m_bAnimation = 1;
    v3 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v5 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v5);
      GfxManager::instance = v3;
    }
    m_ptr = v3->m_GFXMovie.m_movieProxy.m_ptr;
    if ( v3->m_GFXMovie.m_movieProxy.m_ptr )
    {
      if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.exitScreenMenu") )
        Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.exitScreenMenu", 0i64, 0i64, 0);
    }
  }
}

void __fastcall AppMain::BattleOnlineWatchingUpdate(AppMain *this)
{
  BattleSystem::BattleController *v2; // rax
  float v3; // xmm0_4
  BattleSystem::BattleController::ROUND_PHASE roundPhase; // ecx
  float v5; // xmm1_4
  float v6; // xmm1_4
  float stopTimerSE; // xmm1_4
  float stopTimerSendMessage; // xmm1_4
  int *playSEFrame; // rdx
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx
  BattleSystem::BattleController *v13; // [rsp+28h] [rbp-10h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v13 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v13);
    BattleSystem::BattleController::instance = v2;
  }
  if ( !this->m_watchingParams.bEnableUserOperation && v2->roundPhase == HIT )
  {
    this->m_watchingParams.bEnableUserOperation = 1;
    this->m_watchingParams.descriptionType = OutQuad;
  }
  v3 = 0.0;
  if ( this->m_watchingParams.bEnableUserOperation )
  {
    if ( (roundPhase = v2->roundPhase, roundPhase == (WALL|ERASE)) && v2->uiRoundPhaseFrame
      || roundPhase == (WALL|HIT) && v2->uiRoundPhaseFrame )
    {
      this->m_watchingParams.bEnableUserOperation = 0;
      this->m_watchingParams.operationType = InQuad;
      this->m_watchingParams.descriptionType = Linear;
      *(_QWORD *)&this->m_BattleHud.m_fadeAnimSESelector.m_max = 1065353216i64;
      v5 = fminf(this->m_BattleHud.m_fadeAnimSESelector.m_number, 1.0);
      if ( v5 < 0.0 )
        v5 = 0.0;
      this->m_BattleHud.m_fadeAnimSESelector.m_number = v5;
      this->m_BattleHud.m_fadeAnimSESelector.m_power = -0.1;
      this->m_BattleHud.m_fadeAnimSESelector.m_bAnimation = 1;
    }
  }
  if ( this->m_watchingParams.operationType == InQuad || this->SaveDataMain.DisplayOptionData.bCommentDraw )
  {
    if ( this->m_watchingParams.bEnableUserOperation && this->SaveDataMain.DisplayOptionData.bCommentDraw )
    {
      ++this->m_watchingParams.totalFrame;
      stopTimerSE = this->m_watchingParams.stopTimerSE;
      if ( stopTimerSE > 0.0 )
        this->m_watchingParams.stopTimerSE = fmaxf(stopTimerSE - 1.0, 0.0);
      stopTimerSendMessage = this->m_watchingParams.stopTimerSendMessage;
      if ( stopTimerSendMessage > 0.0 )
        this->m_watchingParams.stopTimerSendMessage = fmaxf(stopTimerSendMessage - 1.0, 0.0);
      playSEFrame = this->m_watchingParams.playSEFrame;
      v10 = 16i64;
      do
      {
        v11 = 0;
        if ( *playSEFrame - 1 > 0 )
          v11 = *playSEFrame - 1;
        *playSEFrame++ = v11;
        --v10;
      }
      while ( v10 );
      if ( this->m_watchingParams.operationType
        && !BattleSystem::PauseController::GetInstance()->m_Pause
        && this->m_watchingParams.bOpenGFxMenu )
      {
        switch ( this->m_watchingParams.operationType )
        {
          case InQuad:
            AppMain::BattleOnlineWatching_updateNormalScene(this, v12);
            break;
          case OutQuad:
            AppMain::BattleOnlineWatching_updateFixedPhraseScene(this, v12);
            break;
          case InOutQuad:
            AppMain::BattleOnlineWatching_updateSESelectScene(this, v12);
            break;
        }
      }
    }
  }
  else
  {
    this->m_watchingParams.operationType = InQuad;
    *(_QWORD *)&this->m_BattleHud.m_fadeAnimSESelector.m_max = 1065353216i64;
    v6 = fminf(this->m_BattleHud.m_fadeAnimSESelector.m_number, 1.0);
    if ( v6 >= 0.0 )
      v3 = v6;
    this->m_BattleHud.m_fadeAnimSESelector.m_number = v3;
    this->m_BattleHud.m_fadeAnimSESelector.m_power = -0.1;
    this->m_BattleHud.m_fadeAnimSESelector.m_bAnimation = 1;
  }
}

__int64 __fastcall AppMain::BattleOnlineWatching_getGAYAType(
        AppMain *this,
        BattleHudCommonNumbers::ESESelectorPage::Type SEPage,
        GameOperations::GameOpSpec spec)
{
  __int32 v3; // edx
  __int32 v4; // edx
  __int32 v5; // edx
  __int32 v6; // er8
  __int32 v7; // er8
  __int32 v8; // er8
  __int32 v10; // er8
  __int32 v11; // er8
  __int32 v12; // er8
  __int32 v13; // er8
  __int32 v14; // er8
  __int32 v15; // er8
  __int32 v16; // er8
  __int32 v17; // er8
  __int32 v18; // er8

  v3 = SEPage - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          v6 = spec - 21;
          if ( !v6 )
            return 13i64;
          v7 = v6 - 1;
          if ( !v7 )
            return 15i64;
          v8 = v7 - 1;
          if ( !v8 )
            return 12i64;
          if ( v8 == 1 )
            return 14i64;
        }
      }
      else
      {
        v10 = spec - 21;
        if ( !v10 )
          return 7i64;
        v11 = v10 - 1;
        if ( !v11 )
          return 5i64;
        v12 = v11 - 1;
        if ( !v12 )
          return 6i64;
        if ( v12 == 1 )
          return 4i64;
      }
    }
    else
    {
      v13 = spec - 21;
      if ( !v13 )
        return 8i64;
      v14 = v13 - 1;
      if ( !v14 )
        return 11i64;
      v15 = v14 - 1;
      if ( !v15 )
        return 10i64;
      if ( v15 == 1 )
        return 9i64;
    }
    return 0xFFFFFFFFi64;
  }
  v16 = spec - 21;
  if ( !v16 )
    return 1i64;
  v17 = v16 - 1;
  if ( !v17 )
    return 2i64;
  v18 = v17 - 1;
  if ( !v18 )
    return 0i64;
  if ( v18 != 1 )
    return 0xFFFFFFFFi64;
  return 3i64;
}

void __fastcall AppMain::BattleOnlineWatching_playSE(AppMain *this, GameOperations::GameOpSpec spec)
{
  NETWORK_GAYA_TYPE GAYAType; // eax
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx

  if ( this->m_watchingParams.selectSEKey )
  {
    GAYAType = (unsigned int)AppMain::BattleOnlineWatching_getGAYAType(this, this->m_watchingParams.selectSEPage, spec);
    if ( GAYAType != NETWORK_GAYA_NONE )
    {
      if ( *(float *)(v3 + 2192328) == 0.0 )
      {
        v5 = *(int *)(v3 + 2192344);
        v6 = *(_QWORD *)(v4 + 2192336);
        if ( (unsigned int)(*(_DWORD *)(v4 + 2192300) - *(_DWORD *)(v6 + 4 * v5)) > 0x384 )
        {
          *(_DWORD *)(v6 + 4 * v5) = *(_DWORD *)(v4 + 2192300);
          *(_DWORD *)(v4 + 2192344) = (*(_DWORD *)(v4 + 2192344) + 1) % 50;
        }
        else
        {
          *(_DWORD *)(v4 + 2192328) = 1147207680;
        }
      }
      *(_DWORD *)(v4 + 4i64 * (int)GAYAType + 2192348) = 20;
      if ( *(float *)(v4 + 2192328) == 0.0 )
        AppMain::CallGayaSe((AppMain *)v4, GAYAType, 1);
      else
        AppMain::CallGayaSe((AppMain *)v4, GAYAType, 0);
    }
  }
}

void __fastcall AppMain::BattleOnlineWatching_startFixedPhraseScene(AppMain *this, unsigned __int64 a2)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  char *m_pValueString1; // rcx
  GfxManager *v6; // rax
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  this->m_watchingParams.operationType = OutQuad;
  *(_QWORD *)&this->m_BattleHud.m_fadeAnimSESelector.m_max = 1065353216i64;
  v3 = fminf(this->m_BattleHud.m_fadeAnimSESelector.m_number, 1.0);
  v4 = 0.0;
  if ( v3 >= 0.0 )
    v4 = v3;
  this->m_BattleHud.m_fadeAnimSESelector.m_number = v4;
  this->m_BattleHud.m_fadeAnimSESelector.m_power = -0.1;
  this->m_BattleHud.m_fadeAnimSESelector.m_bAnimation = 1;
  this->m_scaleformResult.m_containValueBits = 0;
  m_pValueString1 = (char *)this->m_scaleformResult.m_pValueString1;
  if ( m_pValueString1 )
  {
    operator delete(m_pValueString1, a2);
    this->m_scaleformResult.m_pValueString1 = 0i64;
  }
  v6 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v6;
  }
  GfxManager::GFv_CallScreeMenuSetPhrase(v6);
}

void __fastcall AppMain::BattleOnlineWatching_updateFixedPhraseScene(AppMain *this, int userIndex)
{
  GfxManager *v3; // rax
  char *m_pValueString1; // rdx
  char *v5; // rcx
  float v6; // xmm1_4
  float v7; // xmm0_4
  GfxManager *v8; // [rsp+50h] [rbp+18h]

  v3 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v3;
  }
  if ( !GfxManager::GFv_IsOpenScreenMenu(v3) )
  {
    if ( (this->m_scaleformResult.m_containValueBits & 2) != 0 )
    {
      m_pValueString1 = (char *)this->m_scaleformResult.m_pValueString1;
      if ( m_pValueString1 )
      {
        NetManager::SendRoomChatMessage(&g_NetworkManager, m_pValueString1, this->s_TextChatSendBuffer, 1);
        this->m_watchingParams.stopTimerSendMessage = 180.0;
      }
    }
    this->m_scaleformResult.m_containValueBits = 0;
    v5 = (char *)this->m_scaleformResult.m_pValueString1;
    if ( v5 )
    {
      operator delete(v5, (unsigned __int64)m_pValueString1);
      this->m_scaleformResult.m_pValueString1 = 0i64;
    }
    this->m_watchingParams.operationType = InQuad;
    *(_QWORD *)&this->m_BattleHud.m_fadeAnimSESelector.m_max = 1065353216i64;
    v6 = fminf(this->m_BattleHud.m_fadeAnimSESelector.m_number, 1.0);
    v7 = 0.0;
    if ( v6 >= 0.0 )
      v7 = v6;
    this->m_BattleHud.m_fadeAnimSESelector.m_number = v7;
    this->m_BattleHud.m_fadeAnimSESelector.m_power = -0.1;
    this->m_BattleHud.m_fadeAnimSESelector.m_bAnimation = 1;
  }
}

void __fastcall AppMain::BattleOnlineWatching_updateNormalScene(AppMain *this, int userIndex)
{
  UserGameOperation *v3; // rax
  __int64 v4; // rcx
  std::bitset<16> *v5; // r9
  __int64 v6; // rdx
  signed __int64 v7; // rdx
  __int128 v8; // xmm1
  __int64 v9; // rax
  int InputDirBits; // eax
  int v11; // edx
  BattleHudCommonNumbers::ESESelectorSelectKey::Type v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  BattleHudCommonNumbers::ESESelectorPage::Type v16; // er8
  signed __int64 v17; // r9
  int v18; // edx
  int v19; // edx
  int v20; // edx
  float v21; // xmm0_4
  float v22; // xmm1_4
  int v23[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+28h] [rbp-50h]
  __int128 v25; // [rsp+38h] [rbp-40h] BYREF
  __int128 v26[2]; // [rsp+48h] [rbp-30h]

  v3 = UserGameOperation::Instance();
  if ( v3 == (UserGameOperation *)-2464i64 )
  {
LABEL_10:
    InputDirBits = anonymous_namespace_::getInputDirBits(v4, Test_OnEdge);
    v11 = InputDirBits;
    if ( InputDirBits )
    {
      v12 = OutQuad;
      v13 = InputDirBits - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 2;
          if ( v15 )
          {
            if ( v15 == 4 )
              v16 = InCubic;
            else
              v16 = Linear;
          }
          else
          {
            v16 = InOutQuad;
          }
        }
        else
        {
          v16 = InQuad;
        }
      }
      else
      {
        v16 = OutQuad;
      }
      v18 = v11 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 2;
          if ( v20 )
          {
            if ( v20 != 4 )
              v12 = Linear;
          }
          else
          {
            v12 = InQuad;
          }
        }
        else
        {
          v12 = InOutQuad;
        }
      }
      else
      {
        v12 = InCubic;
      }
      this->m_watchingParams.operationType = InOutQuad;
      v21 = 0.0;
      this->m_watchingParams.selectSEPage = v16;
      this->m_watchingParams.selectSEKey = v12;
      v22 = fminf(this->m_BattleHud.m_fadeAnimSESelector.m_number, 1.0);
      *(_QWORD *)&this->m_BattleHud.m_fadeAnimSESelector.m_max = 1065353216i64;
      if ( v22 >= 0.0 )
        v21 = v22;
      this->m_BattleHud.m_fadeAnimSESelector.m_number = v21;
      this->m_BattleHud.m_fadeAnimSESelector.m_power = 0.1;
      this->m_BattleHud.m_fadeAnimSESelector.m_bAnimation = 1;
      this->m_BattleHud.m_seSelectorPage = v16;
      this->m_BattleHud.m_seSelectorKey = v12;
    }
  }
  else
  {
    v5 = &v3->m_ButtonConfig[18];
    v23[0] = 0xFFFF;
    v6 = 0i64;
    while ( *(int *)((char *)&v23[v6] + (char *)&v3->m_ButtonConfig[18] - (char *)v23) == v23[v6] )
    {
      if ( --v6 < 0 )
        goto LABEL_5;
    }
    v7 = 0i64;
    v23[0] = v5->_Array[0] & v3->m_anyUserSlot.m_pressedEventChannels._Array[0];
    v17 = (char *)v5 - (char *)v23;
    while ( v23[v7] == *(int *)((char *)&v23[v7] + v17) )
    {
      if ( --v7 < 0 )
        goto LABEL_19;
    }
LABEL_5:
    v7 = 3i64;
    v8 = *(_OWORD *)&v3->m_KeyboardButtonConfig[18]._Array[2];
    v24 = *(_OWORD *)v3->m_KeyboardButtonConfig[18]._Array;
    v25 = v8;
    do
    {
      v4 = *(unsigned __int64 *)((char *)&STACK[0xA20] + 8 * v7 + (char *)v3 - ((char *)&v25 + 8));
      *((_QWORD *)&v24 + v7--) &= v4;
    }
    while ( v7 >= 0 );
    v9 = 3i64;
    v26[0] = v24;
    v26[1] = v25;
    while ( !*((_QWORD *)v26 + v9) )
    {
      if ( --v9 < 0 )
        goto LABEL_10;
    }
LABEL_19:
    AppMain::BattleOnlineWatching_startFixedPhraseScene(this, v7);
  }
}

void __fastcall AppMain::BattleOnlineWatching_updateSESelectScene(AppMain *this, int userIndex)
{
  int InputDirBits; // ecx
  float v4; // xmm1_4
  float v5; // xmm0_4
  __int64 v6; // rdi
  __int64 v7; // rbx
  BattleHudCommonNumbers::ESESelectorPage::Type v8; // er8
  BattleHudCommonNumbers::ESESelectorSelectKey::Type v9; // edx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  UserGameOperation *v13; // rax
  std::bitset<16> *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int128 v17; // xmm1
  __int64 v18; // rax
  __int64 v19; // rdx
  signed __int64 v20; // r9
  UserGameOperation *v21; // rax
  std::bitset<16> *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int128 v25; // xmm1
  __int64 v26; // rax
  __int64 v27; // rdx
  signed __int64 v28; // r9
  UserGameOperation *v29; // rax
  std::bitset<16> *v30; // rcx
  std::bitset<16> *v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int128 v34; // xmm1
  __int64 v35; // rax
  __int64 v36; // rdx
  char *v37; // r8
  UserGameOperation *v38; // rax
  std::bitset<16> *v39; // rcx
  std::bitset<16> *v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int128 v43; // xmm1
  char *v44; // rdx
  int v45[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v46; // [rsp+28h] [rbp-48h]
  __int128 v47; // [rsp+38h] [rbp-38h] BYREF
  __int128 v48; // [rsp+48h] [rbp-28h]
  __int128 v49; // [rsp+58h] [rbp-18h]

  InputDirBits = anonymous_namespace_::getInputDirBits((int)this, Test_Stable);
  if ( !InputDirBits )
  {
    this->m_watchingParams.operationType = InQuad;
    v4 = 0.0;
    v5 = fminf(this->m_BattleHud.m_fadeAnimSESelector.m_number, 1.0);
    *(_QWORD *)&this->m_BattleHud.m_fadeAnimSESelector.m_max = 1065353216i64;
    if ( v5 >= 0.0 )
      v4 = v5;
    this->m_BattleHud.m_fadeAnimSESelector.m_number = v4;
    this->m_BattleHud.m_fadeAnimSESelector.m_power = -0.1;
    this->m_BattleHud.m_fadeAnimSESelector.m_bAnimation = 1;
    return;
  }
  v6 = 0i64;
  v7 = 3i64;
  v8 = InCubic;
  switch ( InputDirBits )
  {
    case 1:
      v9 = InCubic;
      break;
    case 2:
      v9 = InOutQuad;
      break;
    case 4:
      v9 = InQuad;
      break;
    case 8:
      v9 = OutQuad;
      break;
    default:
      v9 = Linear;
      break;
  }
  this->m_watchingParams.selectSEKey = v9;
  v10 = InputDirBits - 1;
  if ( !v10 )
  {
    v8 = OutQuad;
    goto LABEL_22;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v8 = InQuad;
    goto LABEL_22;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    v8 = InOutQuad;
LABEL_22:
    this->m_watchingParams.selectSEPage = v8;
    goto LABEL_23;
  }
  if ( v12 == 4 )
    goto LABEL_22;
LABEL_23:
  this->m_BattleHud.m_seSelectorPage = this->m_watchingParams.selectSEPage;
  this->m_BattleHud.m_seSelectorKey = v9;
  v13 = UserGameOperation::Instance();
  if ( v13 != (UserGameOperation *)-2464i64 )
  {
    v14 = &v13->m_ButtonConfig[22];
    v45[0] = 0xFFFF;
    v15 = 0i64;
    while ( *(int *)((char *)&v45[v15] + (char *)&v13->m_ButtonConfig[22] - (char *)v45) == v45[v15] )
    {
      if ( --v15 < 0 )
        goto LABEL_27;
    }
    v19 = 0i64;
    v45[0] = v14->_Array[0] & v13->m_anyUserSlot.m_pressedEventChannels._Array[0];
    v20 = (char *)v14 - (char *)v45;
    while ( v45[v19] == *(int *)((char *)&v45[v19] + v20) )
    {
      if ( --v19 < 0 )
        goto LABEL_36;
    }
LABEL_27:
    v16 = 3i64;
    v17 = *(_OWORD *)&v13->m_KeyboardButtonConfig[22]._Array[2];
    v46 = *(_OWORD *)v13->m_KeyboardButtonConfig[22]._Array;
    v47 = v17;
    do
    {
      *((_QWORD *)&v46 + v16) &= *(unsigned __int64 *)((char *)&STACK[0xA20] + 8 * v16
                                                                             + (char *)v13
                                                                             - ((char *)&v47
                                                                              + 8));
      --v16;
    }
    while ( v16 >= 0 );
    v18 = 3i64;
    v48 = v46;
    v49 = v47;
    while ( !*((_QWORD *)&v48 + v18) )
    {
      if ( --v18 < 0 )
        goto LABEL_37;
    }
LABEL_36:
    AppMain::BattleOnlineWatching_playSE(this, GameOp_SetDialog2);
  }
LABEL_37:
  v21 = UserGameOperation::Instance();
  if ( v21 != (UserGameOperation *)-2464i64 )
  {
    v22 = &v21->m_ButtonConfig[23];
    v45[0] = 0xFFFF;
    v23 = 0i64;
    while ( *(int *)((char *)&v45[v23] + (char *)&v21->m_ButtonConfig[23] - (char *)v45) == v45[v23] )
    {
      if ( --v23 < 0 )
        goto LABEL_41;
    }
    v27 = 0i64;
    v45[0] = v22->_Array[0] & v21->m_anyUserSlot.m_pressedEventChannels._Array[0];
    v28 = (char *)v22 - (char *)v45;
    while ( v45[v27] == *(int *)((char *)&v45[v27] + v28) )
    {
      if ( --v27 < 0 )
        goto LABEL_50;
    }
LABEL_41:
    v24 = 3i64;
    v25 = *(_OWORD *)&v21->m_KeyboardButtonConfig[23]._Array[2];
    v46 = *(_OWORD *)v21->m_KeyboardButtonConfig[23]._Array;
    v47 = v25;
    do
    {
      *((_QWORD *)&v46 + v24) &= *(unsigned __int64 *)((char *)&STACK[0xA20] + 8 * v24
                                                                             + (char *)v21
                                                                             - ((char *)&v47
                                                                              + 8));
      --v24;
    }
    while ( v24 >= 0 );
    v26 = 3i64;
    v48 = v46;
    v49 = v47;
    while ( !*((_QWORD *)&v48 + v26) )
    {
      if ( --v26 < 0 )
        goto LABEL_51;
    }
LABEL_50:
    AppMain::BattleOnlineWatching_playSE(this, GameOp_SetDialog3);
  }
LABEL_51:
  v29 = UserGameOperation::Instance();
  if ( v29 != (UserGameOperation *)-2464i64 )
  {
    v30 = &v29->m_ButtonConfig[21];
    v45[0] = 0xFFFF;
    v31 = &v29->m_ButtonConfig[21];
    v32 = 0i64;
    while ( v31->_Array[0] == *(unsigned int *)((char *)v31->_Array + (char *)v45 - (char *)&v29->m_ButtonConfig[21]) )
    {
      --v31;
      if ( --v32 < 0 )
        goto LABEL_55;
    }
    v36 = 0i64;
    v45[0] = v30->_Array[0] & v29->m_anyUserSlot.m_pressedEventChannels._Array[0];
    v37 = (char *)((char *)v45 - (char *)v30);
    while ( *(unsigned int *)((char *)v30->_Array + (_QWORD)v37) == v30->_Array[0] )
    {
      --v30;
      if ( --v36 < 0 )
        goto LABEL_64;
    }
LABEL_55:
    v33 = 3i64;
    v34 = *(_OWORD *)&v29->m_KeyboardButtonConfig[21]._Array[2];
    v46 = *(_OWORD *)v29->m_KeyboardButtonConfig[21]._Array;
    v47 = v34;
    do
    {
      *((_QWORD *)&v46 + v33) &= *(unsigned __int64 *)((char *)&STACK[0xA20] + 8 * v33
                                                                             + (char *)v29
                                                                             - ((char *)&v47
                                                                              + 8));
      --v33;
    }
    while ( v33 >= 0 );
    v35 = 3i64;
    v48 = v46;
    v49 = v47;
    while ( !*((_QWORD *)&v48 + v35) )
    {
      if ( --v35 < 0 )
        goto LABEL_65;
    }
LABEL_64:
    AppMain::BattleOnlineWatching_playSE(this, GameOp_SetDialog1);
  }
LABEL_65:
  v38 = UserGameOperation::Instance();
  if ( v38 != (UserGameOperation *)-2464i64 )
  {
    v39 = &v38->m_ButtonConfig[24];
    v45[0] = 0xFFFF;
    v40 = &v38->m_ButtonConfig[24];
    v41 = 0i64;
    while ( v40->_Array[0] == *(unsigned int *)((char *)v40->_Array + (char *)v45 - (char *)&v38->m_ButtonConfig[24]) )
    {
      --v40;
      if ( --v41 < 0 )
        goto LABEL_69;
    }
    v45[0] = v39->_Array[0] & v38->m_anyUserSlot.m_pressedEventChannels._Array[0];
    v44 = (char *)((char *)v45 - (char *)v39);
    while ( *(unsigned int *)((char *)v39->_Array + (_QWORD)v44) == v39->_Array[0] )
    {
      --v39;
      if ( --v6 < 0 )
        goto LABEL_78;
    }
LABEL_69:
    v42 = 3i64;
    v43 = *(_OWORD *)&v38->m_KeyboardButtonConfig[24]._Array[2];
    v46 = *(_OWORD *)v38->m_KeyboardButtonConfig[24]._Array;
    v47 = v43;
    do
    {
      *((_QWORD *)&v46 + v42) &= *(unsigned __int64 *)((char *)&STACK[0xA20] + 8 * v42
                                                                             + (char *)v38
                                                                             - ((char *)&v47
                                                                              + 8));
      --v42;
    }
    while ( v42 >= 0 );
    v48 = v46;
    v49 = v47;
    while ( !*((_QWORD *)&v48 + v7) )
    {
      if ( --v7 < 0 )
        return;
    }
LABEL_78:
    AppMain::BattleOnlineWatching_playSE(this, GameOp_SetDialog4);
  }
}

