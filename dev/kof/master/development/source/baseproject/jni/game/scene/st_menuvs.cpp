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
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/menuutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"

const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5DB30
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B11
void AppMain::ST_MenuVSInit(); // 0x1401C88C0
void AppMain::ST_MenuVSLoop(); // 0x1401C8AD0//decompilation failure at 140A5DB30!
//decompilation failure at 1408A0B11!
void __fastcall AppMain::ST_MenuVSInit(AppMain *this, __int64 a2, __int64 a3, int a4)
{
  GfxManager *v5; // rax
  UserGameOperation *v6; // rax
  __int64 v7; // rax
  extension::SoundHashKey *m_keys; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v10; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v11; // r9
  char *v12; // r8
  char *m_str; // rax
  signed __int64 v14; // r8
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  extension::SoundHashKey soundName; // [rsp+50h] [rbp+8h] BYREF
  extension::SoundHashKey result; // [rsp+58h] [rbp+10h] BYREF
  extension::SoundHashKey *p_soundName; // [rsp+60h] [rbp+18h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v5;
  }
  GfxManager::LoadRequest(v5, FILE_01_UI_MENU_VS, 0i64, a4);
  v6 = UserGameOperation::Instance();
  UserGameOperation::clear(v6);
  v7 = 113i64;
  if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x800000) == 0 )
    v7 = 102i64;
  m_keys = s_soundIndex.m_keys;
  m_ptr = s_soundIndex.m_keys[v7].m_sharedBuffer.m_ptr;
  soundName.m_sharedBuffer.m_ptr = m_ptr;
  if ( m_ptr )
  {
    m_keys = (extension::SoundHashKey *)m_ptr->m_refCount.m_ptr;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&m_keys[2], 1ui64);
  }
  p_soundName = &soundName;
  AppMain::Sound_BGMPlay_GetSoundHashKey((AppMain *)m_keys, &result);
  v10 = result.m_sharedBuffer.m_ptr;
  if ( !result.m_sharedBuffer.m_ptr )
    goto LABEL_15;
  v11 = soundName.m_sharedBuffer.m_ptr;
  v12 = soundName.m_sharedBuffer.m_ptr ? soundName.m_sharedBuffer.m_ptr->m_str : 0i64;
  m_str = result.m_sharedBuffer.m_ptr->m_str;
  v14 = v12 - result.m_sharedBuffer.m_ptr->m_str;
  do
  {
    v15 = (unsigned __int8)m_str[v14];
    v16 = (unsigned __int8)*m_str - v15;
    if ( v16 )
      break;
    ++m_str;
  }
  while ( v15 );
  if ( v16 )
  {
LABEL_15:
    AppMain::Sound_PlayBGMByName(this, &soundName, 0.0, 0.0, 0);
    extension::SoundHashKey::operator=(&this->m_nowPlayBGM, &soundName);
    v11 = soundName.m_sharedBuffer.m_ptr;
  }
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v10->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))result.m_sharedBuffer.m_ptr->~RefCountableWeakSupportBase)(
        result.m_sharedBuffer.m_ptr,
        1i64);
    v11 = soundName.m_sharedBuffer.m_ptr;
  }
  if ( v11
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v11->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v11->~RefCountableWeakSupportBase)(
      v11,
      1i64);
  }
  if ( this->m_iFadeAlpha )
  {
    this->m_bFadeEnd = 0;
    this->m_iFadeFrame = 10;
    v17 = 1000 * this->m_iFadeColor.s.a;
    this->m_iFadeAlpha = v17;
    this->m_iFadeRate = v17 / 10;
    this->m_bFadeLock = 0;
    this->m_FuncFT = 171;
  }
  this->iReserveScene = -1;
  this->m_FuncST = 22;
  this->m_FuncBT = 23;
  AppMain::SceneFunc(this, 22);
  this->m_FuncExit = 21;
}

void __fastcall AppMain::ST_MenuVSLoop(AppMain *this)
{
  GfxManager *v2; // rdi
  GfxManager *v3; // rax
  GfxManager *v4; // rax
  extension::GFXIMovieStack *v5; // rax
  GfxManager *v6; // rax
  GfxManager::RESULT_CODE m_QuitResultCode; // edi
  GameDataInfo *v8; // rcx
  BattleSystem::BattleController *v9; // rax
  GameDataInfo *Instance; // rax
  GameDataInfo *v11; // rax
  GameDataInfo *v12; // rax
  GameDataInfo *v13; // rax
  __int64 v14; // rdx
  GameDataInfo *v15; // rax
  GameDataInfo *v16; // rax
  GameDataInfo *v17; // rax
  __int64 v18; // r8
  BattleSystem::BattleController *v19; // rax
  GfxManager *v20; // rax
  GfxManager *v21; // [rsp+40h] [rbp+8h]
  GfxManager *v22; // [rsp+40h] [rbp+8h]
  GfxManager *v23; // [rsp+40h] [rbp+8h]
  BattleSystem::BattleController *v24; // [rsp+40h] [rbp+8h]
  GfxManager *v25; // [rsp+40h] [rbp+8h]

  v2 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v21 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v21);
    v2 = v3;
    GfxManager::instance = v3;
  }
  SyncMenuImage::Update(&this->m_SyncMenuBG);
  if ( !GfxManager::instance )
  {
    v22 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v22);
    GfxManager::instance = v4;
  }
  if ( GfxManager::instance->m_SystemMessageState != SYSTEM_MESSAGE_OPEN || !GfxManager::instance->m_SystemMessageLock )
  {
    v5 = extension::GFXIMovieStack::Instance();
    extension::GFXIMovieStack::advance(v5, 0.016666668);
  }
  if ( v2->m_bQuitGFXMovie )
  {
    if ( !GfxManager::instance )
    {
      v23 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v23);
      GfxManager::instance = v6;
    }
    m_QuitResultCode = GfxManager::instance->m_QuitResultCode;
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                              + 40i64) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v8);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    `GameDataInfo::getInstance'::`2'::instance.m_ControllerSelect = 1;
    v9 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v24 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v24);
      BattleSystem::BattleController::instance = v9;
    }
    BattleSystem::BattleController::BattleResultInit(v9);
    if ( m_QuitResultCode == RESULT_CODE_CANCEL )
    {
      this->iReserveScene = -1;
      this->m_FadeST = 16;
      this->m_FuncST = 0;
      this->m_FadeExitFunc = 21;
      this->m_bExitFuncWaitFrame = 0;
      if ( this->m_FuncFT != 170 )
        this->m_FuncFT = 172;
      Instance = GameDataInfo::getInstance();
      Instance->m_GameRule[Instance->m_GameRuleIndex] = GAME_RULE_NONE;
      return;
    }
    if ( m_QuitResultCode )
    {
      if ( m_QuitResultCode != RESLCT_CODE_1ON1 )
      {
LABEL_27:
        if ( !GfxManager::instance )
        {
          v25 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v25);
          GfxManager::instance = v20;
        }
        GfxManager::instance->m_EditMode = 0;
        this->iReserveScene = -1;
        this->m_FadeST = 24;
        this->m_FuncST = 0;
        this->m_FadeExitFunc = 21;
        this->m_bExitFuncWaitFrame = 0;
        if ( this->m_FuncFT != 170 )
          this->m_FuncFT = 172;
        return;
      }
      v15 = GameDataInfo::getInstance();
      v15->m_GameMode[v15->m_GameModeIndex] = GAME_MODE_VERSUS;
      v16 = GameDataInfo::getInstance();
      v16->m_GameRule[v16->m_GameRuleIndex] = GAME_RULE_SINGLE;
      v17 = GameDataInfo::getInstance();
      v18 = *(_QWORD *)&AppMain::pApp;
      if ( *(_QWORD *)&AppMain::pApp )
      {
        v17->m_AiLevel = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197392i64);
        v17->m_WinRoundCount = *(_DWORD *)(v18 + 2197396);
        v17->m_TimeSetting = *(_DWORD *)(v18 + 2197400);
      }
    }
    else
    {
      v11 = GameDataInfo::getInstance();
      v11->m_GameMode[v11->m_GameModeIndex] = GAME_MODE_VERSUS;
      v12 = GameDataInfo::getInstance();
      v12->m_GameRule[v12->m_GameRuleIndex] = GAME_RULE_TEAM;
      v13 = GameDataInfo::getInstance();
      v14 = *(_QWORD *)&AppMain::pApp;
      if ( *(_QWORD *)&AppMain::pApp )
      {
        v13->m_AiLevel = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197392i64);
        v13->m_WinRoundCount = *(_DWORD *)(v14 + 2197396);
        v13->m_TimeSetting = *(_DWORD *)(v14 + 2197400);
      }
    }
    BattleSystem::BattleController::GetActionSystem();
    BattleSystem::BattleController::BattleResultInit(v19);
    goto LABEL_27;
  }
}

