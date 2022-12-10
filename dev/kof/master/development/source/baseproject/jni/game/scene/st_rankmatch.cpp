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
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/onlinesample/st_onlinesearchroomsetting.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/onlinesample/st_onlinecreateroomsetting.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/menudata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/menuutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"

enum <unnamed-enum-SCENE_RANKMATCHMENU_LOOP>
{
	SCENE_RANKMATCHMENU_LOOP = 0,
	SCENE_RANKMATCHMENU_SEARCHING = 1,
	SCENE_RANKMATCHMENU_ROOMIN = 2,
	SCENE_RANKMATCHMENU_CREATEROOM = 3,
	SCENE_RANKMATCHMENU_END = 4,
	SCENE_RANKMATCHMENU_POPUP_MENU = 5,
};
long long m_RankMatch_Timeout; // 0x140AC65C8
char m_RankMatch_SearchCnt; // 0x140AA4F7B
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5EF70
long s_SceneSequence; // 0x140AC65D0
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B27
bool m_RankMatch_TimeoutBusy; // 0x140AA4F7A
void LoadCompleteEventRankmatch(); // 0x1401FAF10
void AppMain::ST_RankmatchInit(); // 0x1401FAF80
void AppMain::ST_RankmatchLoop(); // 0x1401FB390
void AppMain::ST_RankmatchDraw(); // 0x1401C06B0
void onTimeOutClosedRanckMatchEntry(long cursor); // 0x1401FBBF0
void onClosedRanckMatchNoticeMes(long cursor); // 0x1401FBCA0//decompilation failure at 140AC65C8!
//decompilation failure at 140AA4F7B!
//decompilation failure at 140A5EF70!
//decompilation failure at 140AC65D0!
//decompilation failure at 1408A0B27!
//decompilation failure at 140AA4F7A!
void __fastcall LoadCompleteEventRankmatch()
{
  AppMain *v0; // rcx
  int v1; // edx

  v0 = *(AppMain **)&AppMain::pApp;
  if ( *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507460i64) )
  {
    v1 = 1000 * *(unsigned __int8 *)(*(_QWORD *)&AppMain::pApp + 2507456i64);
    *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2507472i64) = 0;
    v0->m_iFadeFrame = 10;
    v0->m_bFadeLock = 0;
    v0->m_FuncFT = 171;
    v0->m_iFadeAlpha = v1;
    v0->m_iFadeRate = v1 / 10;
  }
  AppMain::NoticeDiscoonectLevel(v0, 0);
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

void __fastcall AppMain::ST_RankmatchInit(AppMain *this, __int64 a2, __int64 a3, int a4)
{
  GfxManager *v5; // rax
  UserGameOperation *v6; // rax
  AppMain *v7; // rcx
  GfxManager *v8; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  extension::gfxi_detail::MovieProxy *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v13; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v14; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v15; // r8
  char *v16; // r9
  char *m_str; // rax
  signed __int64 v18; // r9
  int v19; // ecx
  int v20; // edx
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rbx
  int v24; // ecx
  GameDataInfo *v25; // rcx
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
  GfxManager::LoadRequest(v5, FILE_14_SEARCH_SETTING, LoadCompleteEventRankmatch, a4);
  v6 = UserGameOperation::Instance();
  UserGameOperation::clear(v6);
  s_SceneSequence_1 = 0;
  AppMain::ResetSearchRoomSetting(this, &this->SearchSetting, this->MatchingGameRule);
  this->m_bRequestSearchSetting = 0;
  AppMain::ResetCreateRoomSetting(v7, &this->CreateRoomSetting);
  this->m_bRequestCreateRoomSetting = 0;
  g_NetworkManager.rank_traning_wait.stageID = STAGE_ID_NONE;
  v8 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v8;
  }
  if ( v8->m_GFXMovie.m_movieProxy.m_ptr )
  {
    v8->m_GFXMovie.m_movieProxy.m_ptr->m_bAdvance = 1;
    if ( v8->m_GFXMovie.m_movieProxy.m_ptr )
      v8->m_GFXMovie.m_movieProxy.m_ptr->m_bRender = 1;
  }
  if ( !v8 )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v8;
  }
  if ( v8->m_GFXMovieBG.m_movieProxy.m_ptr )
  {
    m_ptr = v8->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( m_ptr )
      m_ptr->m_bAdvance = 1;
    v10 = v8->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( v10 )
      v10->m_bRender = 1;
  }
  else
  {
    GfxManager::LoadRequestBG(v8);
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
    goto LABEL_28;
  v15 = soundName.m_sharedBuffer.m_ptr;
  v16 = soundName.m_sharedBuffer.m_ptr ? soundName.m_sharedBuffer.m_ptr->m_str : 0i64;
  m_str = result.m_sharedBuffer.m_ptr->m_str;
  v18 = v16 - result.m_sharedBuffer.m_ptr->m_str;
  do
  {
    v19 = (unsigned __int8)m_str[v18];
    v20 = (unsigned __int8)*m_str - v19;
    if ( v20 )
      break;
    ++m_str;
  }
  while ( v19 );
  if ( v20 )
  {
LABEL_28:
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
  v21 = *(_QWORD *)&AppMain::pApp;
  *(_DWORD *)(v21 + 2205468) = SaveRecord_PlayerData::GetRandomEnableStageID(
                                 (SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64),
                                 (STAGE_ID)*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205468i64),
                                 (STAGE_ID)v15,
                                 (STAGE_ID)v18);
  this->MatchingGameRule = GAME_RULE_TEAM;
  v22 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v23 = *v22;
  v24 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v22 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v24 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v24 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] = GAME_MODE_RANKMATCH;
  if ( v24 > *(_DWORD *)(v23 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v24 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v24 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_GameRule[`GameDataInfo::getInstance'::`2'::instance.m_GameRuleIndex] = GAME_RULE_TEAM;
  if ( v24 > *(_DWORD *)(v23 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v25);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( *(_QWORD *)&AppMain::pApp )
  {
    `GameDataInfo::getInstance'::`2'::instance.m_AiLevel = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197392i64);
    `GameDataInfo::getInstance'::`2'::instance.m_WinRoundCount = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197396i64);
    `GameDataInfo::getInstance'::`2'::instance.m_TimeSetting = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197400i64);
  }
  this->MatchingType = NETWORK_MATCHING_TYPE_RANK;
  m_RankMatch_Timeout = 0i64;
  m_RankMatch_TimeoutBusy = 0;
  m_RankMatch_SearchCnt = 0;
  this->iReserveScene = -1;
  this->m_FuncST = 130;
  this->m_FuncBT = 131;
  AppMain::SceneFunc(this, 130);
  this->m_FuncExit = 129;
}

void __fastcall AppMain::ST_RankmatchLoop(AppMain *this)
{
  GfxManager *v2; // rax
  GfxManager *v3; // r15
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  GfxManager *v5; // rax
  extension::GFXIMovieStack *v6; // rax
  __int64 v7; // rax
  int v8; // edx
  ONLINE_STATE onlineState; // eax
  __int64 v10; // rdx
  const char *v11; // rcx
  __int64 v12; // rdx
  int v13; // er8
  bool v14; // r9
  unsigned __int64 v15; // rax
  GfxManager *v16; // rax
  __int64 v17; // rax
  unsigned __int64 CurrentTick; // rsi
  unsigned __int64 v19; // rsi
  int CntConectedUser; // er14
  __int64 v21; // rdx
  int v22; // er8
  GfxManager *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // ecx
  GameDataInfo *Instance; // rax
  GameDataInfo *v28; // rax
  GameDataInfo *v29; // rax
  BattleSystem::BattleController *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  Scaleform::GFx::Value ptr; // [rsp+40h] [rbp-79h] BYREF
  Scaleform::GFx::Value val; // [rsp+70h] [rbp-49h] BYREF
  Scaleform::GFx::Value pargs; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v37; // [rsp+D0h] [rbp+17h]
  GfxManager *roomId; // [rsp+120h] [rbp+67h]
  unsigned __int64 roomIda; // [rsp+120h] [rbp+67h]
  extension::gfxi_detail::MovieProxy *v40; // [rsp+128h] [rbp+6Fh]
  GfxManager *v41; // [rsp+130h] [rbp+77h]
  GfxManager *v42; // [rsp+130h] [rbp+77h]

  v37 = -2i64;
  v2 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    roomId = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(roomId);
    GfxManager::instance = v2;
  }
  v3 = v2;
  if ( !v2 )
  {
    roomId = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(roomId);
    GfxManager::instance = v2;
  }
  m_ptr = v2->m_GFXMovie.m_movieProxy.m_ptr;
  v40 = v2->m_GFXMovie.m_movieProxy.m_ptr;
  if ( v2->m_GFXMovie.m_movieProxy.m_ptr )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 1ui64);
    m_ptr = v40;
  }
  SyncMenuImage::Update(&this->m_SyncMenuBG);
  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v41 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v41);
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
    v42 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v42);
    GfxManager::instance = v5;
  }
  if ( v5->m_SystemMessageState != SYSTEM_MESSAGE_OPEN )
  {
    if ( s_SceneSequence_1 == 4 )
    {
      if ( v3->m_bQuitGFXMovie )
      {
        GfxManager::getInstance();
        if ( *(_DWORD *)(v7 + 168) == 3 )
        {
          v8 = 144;
LABEL_100:
          AppMain::setNonFadeSTExit(this, v8, 129);
        }
      }
    }
    else
    {
      onlineState = g_NetworkManager.gamedata.onlineState;
      if ( g_NetworkManager.gamedata.onlineState == NET_STATE_ORDERSELECT )
      {
        `eh vector constructor iterator'(
          &ptr,
          (unsigned int)(g_NetworkManager.gamedata.onlineState + 39),
          1ui64,
          (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
          (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
        if ( (ptr.Type & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
          ptr.pObjectInterface = 0i64;
        }
        ptr.Type = VT_Float;
        ptr.mValue.IValue = 3;
        if ( m_ptr && Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.StartEnd") )
          Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.StartEnd", 0i64, &ptr, 1u);
        s_SceneSequence_1 = 4;
        `eh vector destructor iterator'(
          &ptr,
          0x30ui64,
          1ui64,
          (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
        onlineState = g_NetworkManager.gamedata.onlineState;
      }
      if ( onlineState == NET_STATE_WAITCLIENT )
      {
        `eh vector constructor iterator'(
          &val,
          0x30ui64,
          1ui64,
          (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
          (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
        if ( (val.Type & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
          val.pObjectInterface = 0i64;
        }
        val.Type = 6;
        val.mValue.pString = "$GUIDE_S_CANCEL_CANCEL";
        if ( m_ptr && Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.SetSearchGuide") )
          Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.SetSearchGuide", 0i64, &val, 1u);
        `eh vector destructor iterator'(
          &val,
          0x30ui64,
          1ui64,
          (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
        onlineState = g_NetworkManager.gamedata.onlineState;
      }
      if ( onlineState == NET_STATE_JOIN_ROOM )
      {
        `eh vector constructor iterator'(
          &pargs,
          0x30ui64,
          1ui64,
          (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
          (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
        if ( (pargs.Type & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
            pargs.pObjectInterface,
            &pargs,
            pargs.mValue.pStringManaged);
          pargs.pObjectInterface = 0i64;
        }
        pargs.Type = 6;
        pargs.mValue.pString = "$POPUP_RANKMATCH_MATCH_1";
        if ( m_ptr && Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.SetSearchText") )
          Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.SetSearchText", 0i64, &pargs, 1u);
        `eh vector destructor iterator'(
          &pargs,
          0x30ui64,
          1ui64,
          (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
      }
      AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
      if ( !Fw::MatchingTarget::IsRoomOwner(v11, v10) || g_NetworkManager.gamedata.roomPlayerCount < 2u )
      {
        if ( g_NetworkManager.gamedata.error == NETWORK_ERROR_TYPE_DESTROYED )
        {
          s_SceneSequence_1 = 0;
          *(_QWORD *)&g_NetworkManager.gamedata.error = 0i64;
          goto LABEL_101;
        }
        if ( g_NetworkManager.gamedata.error )
        {
          s_SceneSequence_1 = 0;
          *(_QWORD *)&g_NetworkManager.gamedata.error = 0i64;
          goto LABEL_101;
        }
        if ( s_SceneSequence_1 )
        {
          switch ( s_SceneSequence_1 )
          {
            case 1:
              if ( g_NetworkManager.gamedata.onlineState == NET_STATE_SELECTROOM
                && (roomIda = __PAIR64__(HIDWORD(roomId), 0) & 0xFF0FFFFF00000000ui64,
                    HIBYTE(roomIda) = 0,
                    HIDWORD(roomIda) &= 0xFFF00000,
                    NetManager::RequestJoinRoom(&g_NetworkManager, -2, (CSteamID)roomIda, v14)) )
              {
                s_SceneSequence_1 = 2;
              }
              else if ( g_NetworkManager.gamedata.m_SearchRoomLimit )
              {
                GfxManager::getInstance();
                GfxManager::GFv_SetSystemMessage(
                  v23,
                  "$ERROR_PLAYER",
                  SYSTEM_MESSAGE_OK,
                  0,
                  1,
                  "no_title",
                  &pnewText,
                  "size_s");
                s_SceneSequence_1 = 0;
                g_NetworkManager.gamedata.m_SearchRoomLimit = 0;
                if ( ++m_RankMatch_SearchCnt >= 3 )
                {
                  GfxManager::getInstance();
                  *(_QWORD *)(v24 + 248) = onClosedRanckMatchNoticeMes;
                }
              }
              break;
            case 2:
              if ( g_NetworkManager.gamedata.m_SearchRoomLimit )
                s_SceneSequence_1 = 0;
              break;
            case 3:
              CurrentTick = Fw::Rtc::GetCurrentTick();
              v19 = m_RankMatch_Timeout >= CurrentTick ? 0i64 : CurrentTick - m_RankMatch_Timeout;
              CntConectedUser = Fw::MatchingSystem::getCntConectedUser();
              if ( UserGameOperation::Test(1, GameOp_UI_Cancel, Test_Repeat)
                && g_NetworkManager.gamedata.onlineState == NET_STATE_WAITCLIENT
                && !CntConectedUser )
              {
                if ( s_soundIndex.m_keys[7].m_sharedBuffer.m_ptr
                  && !extension::SoundList::playSEByName(&this->m_Snd_Lists[5], &s_soundIndex.m_keys[7], 0i64) )
                {
                  extension::SoundList::playSEByName(this->m_Snd_Lists, &s_soundIndex.m_keys[7], 0i64);
                }
                s_SceneSequence_1 = 0;
                NetManager::RequestLeaveRoom(&g_NetworkManager, v21, v22);
              }
              else if ( v19 >= 0xABA9501
                     && g_NetworkManager.gamedata.onlineState == NET_STATE_WAITCLIENT
                     && !CntConectedUser
                     && !m_RankMatch_TimeoutBusy )
              {
                m_RankMatch_TimeoutBusy = 1;
                NetManager::RequestLeaveRoom(&g_NetworkManager, v21, v22);
                s_SceneSequence_1 = 5;
                m_RankMatch_Timeout = Fw::Rtc::GetCurrentTick();
              }
              break;
            case 5:
              v15 = Fw::Rtc::GetCurrentTick();
              if ( m_RankMatch_Timeout < v15 && v15 - m_RankMatch_Timeout >= 0xF4241 )
              {
                GfxManager::getInstance();
                GfxManager::GFv_SetSystemMessage(
                  v16,
                  "$POPUP_RANK_ATTENTION",
                  SYSTEM_MESSAGE_OK,
                  0,
                  1,
                  "no_title",
                  &pnewText,
                  "size_s");
                GfxManager::getInstance();
                *(_QWORD *)(v17 + 248) = onTimeOutClosedRanckMatchEntry;
              }
              break;
          }
        }
        else if ( this->m_bRequestCreateRoomSetting )
        {
          this->m_bRequestCreateRoomSetting = 0;
          if ( (unsigned int)(g_NetworkManager.gamedata.onlineState - 1) > 2 )
          {
            if ( GameDataInfo::getInstance()->m_TrainingEntry )
            {
              AppMain::CreateRoom(this, 1);
              g_NetworkManager.gamedata.reservationCreateRoomFlag = 1;
            }
            else
            {
              AppMain::CreateRoom(this, 0);
              g_NetworkManager.gamedata.m_SearchRoomLimit = 0;
              s_SceneSequence_1 = 3;
              m_RankMatch_Timeout = Fw::Rtc::GetCurrentTick();
              m_RankMatch_SearchCnt = 0;
            }
          }
          else
          {
            NetManager::RequestLeaveRoom(&g_NetworkManager, v12, v13);
          }
        }
        else if ( this->m_bRequestSearchSetting )
        {
          this->m_bRequestSearchSetting = 0;
          AppMain::OnlineFreeMatchPartySearchRoom(this);
          g_NetworkManager.gamedata.m_SearchRoomLimit = 0;
          s_SceneSequence_1 = 1;
        }
        else if ( m_ptr && Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.SearchEnd") )
        {
          Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.SearchEnd", 0i64, 0i64, 0);
        }
        if ( v3->m_bQuitGFXMovie )
        {
          GfxManager::getInstance();
          v26 = *(_DWORD *)(v25 + 168);
          if ( v26 == -1 )
          {
            v8 = 100;
          }
          else if ( v26 == 2 )
          {
            Instance = GameDataInfo::getInstance();
            Instance->m_GameMode[Instance->m_GameModeIndex] = GAME_MODE_TRAINING;
            v28 = GameDataInfo::getInstance();
            v28->m_GameRule[v28->m_GameRuleIndex] = GAME_RULE_SINGLE;
            GameDataInfo::getInstance()->m_ControllerSetting[0] = USER_ID_1P;
            GameDataInfo::getInstance()->m_ControllerSetting[1] = USER_ID_CPU;
            v29 = GameDataInfo::getInstance();
            GameDataInfo::SetDefaultSettingSaveData(v29);
            BattleSystem::BattleController::GetActionSystem();
            BattleSystem::BattleController::BattleResultInit(v30);
            GfxManager::getInstance();
            *(_BYTE *)(v31 + 257) = 0;
            v8 = 24;
          }
          else if ( v26 == 3 )
          {
            v8 = 144;
          }
          else
          {
            if ( v26 == 6 )
            {
              GfxManager::getInstance();
              *(_DWORD *)(v32 + 212) = 2;
            }
            else
            {
              if ( v26 != 8 )
                goto LABEL_101;
              GfxManager::getInstance();
              *(_DWORD *)(v33 + 212) = 4;
            }
            v8 = 80;
            this->m_PrevScene = 128;
          }
          goto LABEL_100;
        }
      }
    }
  }
LABEL_101:
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::gfxi_detail::MovieProxy::~MovieProxy(v40);
      operator delete(v40, 0xE8ui64);
    }
  }
}

void __fastcall onClosedRanckMatchNoticeMes(int cursor)
{
  GfxManager *v1; // rax
  GfxManager *v2; // [rsp+68h] [rbp+10h]

  v1 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v2 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v2);
    GfxManager::instance = v1;
  }
  GfxManager::GFv_SetSystemMessage(
    v1,
    "$POPUP_RANK_ATTENTION",
    SYSTEM_MESSAGE_OK,
    0,
    1,
    "no_title",
    &pnewText,
    "size_s");
  m_RankMatch_SearchCnt = 0;
}

void __fastcall onTimeOutClosedRanckMatchEntry(int cursor)
{
  double v1; // xmm0_8
  unsigned __int64 v2; // rcx
  GfxManager *v3; // rax
  GfxManager *v4; // [rsp+48h] [rbp+10h]

  v1 = AgClock::getSystemTime() * 1000000.0;
  v2 = 0i64;
  if ( v1 >= 9.223372036854776e18 )
  {
    v1 = v1 - 9.223372036854776e18;
    if ( v1 < 9.223372036854776e18 )
      v2 = 0x8000000000000000ui64;
  }
  m_RankMatch_Timeout = v2 + (unsigned int)(int)v1;
  m_RankMatch_TimeoutBusy = 0;
  v3 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v4 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v4);
    GfxManager::instance = v3;
  }
  v3->m_pCallBackEventFunc = 0i64;
  s_SceneSequence_1 = 0;
  *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 37091i64) = 1;
}

