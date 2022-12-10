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
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/onlinesample/st_onlineroom.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/menuutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"

enum <unnamed-enum-SCENE_ROOMLIST_LOOP>
{
	SCENE_ROOMLIST_LOOP = 0,
	SCENE_ROOMLIST_JOINING = 1,
	SCENE_ROOMLIST_SEARCHROOM = 2,
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B2B
long s_SceneSequence; // 0x140AC65F4
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5F3F0
void AppMain::ST_RoomListInit(); // 0x1402043D0
void AppMain::ST_RoomListLoop(); // 0x140204690
void AppMain::ST_RoomListDraw(); // 0x1401C06B0//decompilation failure at 1408A0B2B!
//decompilation failure at 140AC65F4!
//decompilation failure at 140A5F3F0!
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

void __fastcall AppMain::ST_RoomListInit(AppMain *this, __int64 a2, __int64 a3, int a4)
{
  GfxManager *v5; // rax
  __int64 v6; // rax
  extension::SoundHashKey *m_keys; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v9; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v10; // r9
  char *v11; // r8
  char *m_str; // rax
  signed __int64 v13; // r8
  int v14; // ecx
  int v15; // edx
  Fw::ROOM_ATTR *s_RoomListInfo; // rbx
  Fw::ROOM_ATTR *m_SearchEndRoomAttr; // rax
  __int64 v18; // rcx
  int v19; // ecx
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
  GfxManager::LoadRequest(v5, FILE_14_ROOMLIST, 0i64, a4);
  v6 = 113i64;
  if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x800000) == 0 )
    v6 = 102i64;
  m_keys = s_soundIndex.m_keys;
  m_ptr = s_soundIndex.m_keys[v6].m_sharedBuffer.m_ptr;
  soundName.m_sharedBuffer.m_ptr = m_ptr;
  if ( m_ptr )
  {
    m_keys = (extension::SoundHashKey *)m_ptr->m_refCount.m_ptr;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&m_keys[2], 1ui64);
  }
  p_soundName = &soundName;
  AppMain::Sound_BGMPlay_GetSoundHashKey((AppMain *)m_keys, &result);
  v9 = result.m_sharedBuffer.m_ptr;
  if ( !result.m_sharedBuffer.m_ptr )
    goto LABEL_15;
  v10 = soundName.m_sharedBuffer.m_ptr;
  v11 = soundName.m_sharedBuffer.m_ptr ? soundName.m_sharedBuffer.m_ptr->m_str : 0i64;
  m_str = result.m_sharedBuffer.m_ptr->m_str;
  v13 = v11 - result.m_sharedBuffer.m_ptr->m_str;
  do
  {
    v14 = (unsigned __int8)m_str[v13];
    v15 = (unsigned __int8)*m_str - v14;
    if ( v15 )
      break;
    ++m_str;
  }
  while ( v14 );
  if ( v15 )
  {
LABEL_15:
    AppMain::Sound_PlayBGMByName(this, &soundName, 0.0, 0.0, 0);
    extension::SoundHashKey::operator=(&this->m_nowPlayBGM, &soundName);
    v10 = soundName.m_sharedBuffer.m_ptr;
  }
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v9->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))result.m_sharedBuffer.m_ptr->~RefCountableWeakSupportBase)(
        result.m_sharedBuffer.m_ptr,
        1i64);
    v10 = soundName.m_sharedBuffer.m_ptr;
  }
  if ( v10
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v10->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v10->~RefCountableWeakSupportBase)(
      v10,
      1i64);
  }
  s_SceneSequence_2 = 0;
  s_RoomListInfo = this->s_RoomListInfo;
  memset(this->s_RoomListInfo, 0, sizeof(this->s_RoomListInfo));
  m_SearchEndRoomAttr = g_NetworkManager.m_SearchEndRoomAttr;
  v18 = 421i64;
  do
  {
    *(_OWORD *)&s_RoomListInfo->m_Attr[0].num = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[0].num;
    *(_OWORD *)&s_RoomListInfo->m_Attr[1].attributeIndex = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[1].attributeIndex;
    *(_OWORD *)&s_RoomListInfo->m_Attr[2].searchOperator = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[2].searchOperator;
    *(_OWORD *)&s_RoomListInfo->m_Attr[4].num = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[4].num;
    *(_OWORD *)&s_RoomListInfo->m_Attr[5].attributeIndex = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[5].attributeIndex;
    *(_OWORD *)&s_RoomListInfo->m_Attr[6].searchOperator = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[6].searchOperator;
    *(_OWORD *)&s_RoomListInfo->m_Attr[8].num = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[8].num;
    s_RoomListInfo = (Fw::ROOM_ATTR *)((char *)s_RoomListInfo + 128);
    *(_OWORD *)&s_RoomListInfo[-1].m_RoomId.m_steamid.m_comp = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[9].attributeIndex;
    m_SearchEndRoomAttr = (Fw::ROOM_ATTR *)((char *)m_SearchEndRoomAttr + 128);
    --v18;
  }
  while ( v18 );
  *(_OWORD *)&s_RoomListInfo->m_Attr[0].num = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[0].num;
  *(_OWORD *)&s_RoomListInfo->m_Attr[1].attributeIndex = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[1].attributeIndex;
  *(_OWORD *)&s_RoomListInfo->m_Attr[2].searchOperator = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[2].searchOperator;
  *(_OWORD *)&s_RoomListInfo->m_Attr[4].num = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[4].num;
  *(_OWORD *)&s_RoomListInfo->m_Attr[5].attributeIndex = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[5].attributeIndex;
  *(_OWORD *)&s_RoomListInfo->m_Attr[6].searchOperator = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[6].searchOperator;
  *(_OWORD *)&s_RoomListInfo->m_Attr[8].num = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[8].num;
  if ( this->m_iFadeAlpha )
  {
    this->m_bFadeEnd = 0;
    this->m_iFadeFrame = 10;
    v19 = 1000 * this->m_iFadeColor.s.a;
    this->m_iFadeAlpha = v19;
    this->m_iFadeRate = v19 / 10;
    this->m_bFadeLock = 0;
    this->m_FuncFT = 171;
  }
  this->iReserveScene = -1;
  this->m_FuncST = 154;
  this->m_FuncBT = 155;
  AppMain::SceneFunc(this, 154);
  this->m_FuncExit = 153;
}

void __fastcall AppMain::ST_RoomListLoop(AppMain *this)
{
  GfxManager *v2; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // r15
  GfxManager *v4; // rax
  extension::GFXIMovieStack *v5; // rax
  int v6; // edi
  int v7; // ebx
  EasyIndicator *Instance; // rax
  GfxManager *v9; // rax
  __int64 v10; // rdi
  signed int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rax
  double v14; // xmm0_8
  char v15; // al
  GfxManager *v16; // rax
  Scaleform::GFx::Value *v17; // rax
  GfxManager *v18; // rax
  Scaleform::GFx::Value *v19; // rax
  unsigned int v20; // edi
  __int64 v21; // r14
  __int64 i; // rbx
  int v23; // eax
  int v24; // eax
  GfxManager *v25; // rax
  extension::gfxi_detail::MovieProxy *v26; // rbx
  GfxManager *v27; // rax
  GameDataInfo *v28; // rcx
  GAME_MODE v29; // ecx
  bool v30; // zf
  GfxManager *v31; // [rsp+38h] [rbp-D0h]
  GfxManager *v32; // [rsp+38h] [rbp-D0h]
  GfxManager *v33; // [rsp+38h] [rbp-D0h]
  GfxManager *v34; // [rsp+38h] [rbp-D0h]
  GfxManager *v35; // [rsp+38h] [rbp-D0h]
  extension::gfxi_detail::MovieProxy *v36; // [rsp+40h] [rbp-C8h]
  extension::gfxi_detail::MovieProxy *v37; // [rsp+40h] [rbp-C8h]
  Scaleform::GFx::Value v38; // [rsp+48h] [rbp-C0h] BYREF
  Scaleform::GFx::Value ptr; // [rsp+80h] [rbp-88h] BYREF
  Scaleform::GFx::Value value; // [rsp+B0h] [rbp-58h] BYREF
  Scaleform::GFx::Value pargs; // [rsp+E8h] [rbp-20h] BYREF
  Scaleform::GFx::Value v42; // [rsp+118h] [rbp+10h] BYREF
  void *block; // [rsp+148h] [rbp+40h]
  Scaleform::GFx::Value result; // [rsp+150h] [rbp+48h] BYREF
  Scaleform::GFx::Value val; // [rsp+180h] [rbp+78h] BYREF
  int v46[104]; // [rsp+1B8h] [rbp+B0h]

  block = (void *)-2i64;
  v2 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v38.pPrev = (Scaleform::GFx::Value *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)v38.pPrev);
    GfxManager::instance = v2;
  }
  v38.pPrev = (Scaleform::GFx::Value *)v2;
  if ( !v2 )
  {
    v36 = (extension::gfxi_detail::MovieProxy *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)v36);
    GfxManager::instance = v2;
  }
  m_ptr = v2->m_GFXMovie.m_movieProxy.m_ptr;
  v37 = v2->m_GFXMovie.m_movieProxy.m_ptr;
  if ( v2->m_GFXMovie.m_movieProxy.m_ptr )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 1ui64);
    m_ptr = v37;
  }
  SyncMenuImage::Update(&this->m_SyncMenuBG);
  if ( !GfxManager::instance )
  {
    v31 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v31);
    GfxManager::instance = v4;
  }
  if ( GfxManager::instance->m_SystemMessageState != SYSTEM_MESSAGE_OPEN || !GfxManager::instance->m_SystemMessageLock )
  {
    v5 = extension::GFXIMovieStack::Instance();
    extension::GFXIMovieStack::advance(v5, 0.016666668);
  }
  if ( s_SceneSequence_2 )
  {
    if ( s_SceneSequence_2 == 1 )
    {
      v6 = 920 * GAME_SCREEN_HEIGHT / 1080;
      v7 = 1760 * GAME_SCREEN_WIDTH / 1920;
      Instance = EasyIndicator::getInstance();
      EasyIndicator::RequestDraw(Instance, v7, v6, TYPE_CONNECTING);
      if ( g_NetworkManager.gamedata.onlineState == NET_STATE_WAITSTART )
      {
        this->RoomInitializeFlag = 0;
        s_SceneSequence_2 = 0;
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
        if ( m_ptr && Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.EndStart") )
          Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.EndStart", 0i64, &ptr, 1u);
        GfxManager::getInstance();
        GfxManager::GFv_CloseSystemMessage(v9);
        `eh vector destructor iterator'(
          &ptr,
          0x30ui64,
          1ui64,
          (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
      }
    }
    else if ( s_SceneSequence_2 == 2 )
    {
      if ( g_NetworkManager.gamedata.onlineState )
      {
        if ( g_NetworkManager.gamedata.onlineState == NET_STATE_SELECTROOM )
        {
          s_SceneSequence_2 = 0;
          if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.updateRoomList") )
            Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.updateRoomList", 0i64, 0i64, 0);
        }
      }
      else if ( g_NetworkManager.gamedata.m_SearchRoomLimit )
      {
        if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.NotFoundRoom") )
          Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.NotFoundRoom", 0i64, 0i64, 0);
        g_NetworkManager.gamedata.m_SearchRoomLimit = 0;
        s_SceneSequence_2 = 0;
      }
    }
  }
  else
  {
    v10 = *(_QWORD *)&AppMain::pApp;
    EnterCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.roomsRTTMutex);
    v11 = 0;
    v12 = 0i64;
    do
    {
      v13 = g_NetworkManager.obtainedRoomsRTT[v12];
      if ( (_DWORD)v13 == -1 )
        break;
      v46[v12 + 52] = v13;
      v46[v12] = 4;
      v14 = (double)*(int *)(1080 * v13 + v10 + 39652) * 0.5 * 1.100000023841858;
      if ( v14 < 111000.0 )
      {
        if ( v14 < 95000.0 )
        {
          if ( v14 < 78000.0 )
          {
            if ( v14 < 61000.0 )
            {
              if ( v14 < 44500.0 )
              {
                if ( v14 < 28000.0 )
                {
                  v15 = 0;
                  if ( v14 >= 11150.0 )
                    v15 = -1;
                }
                else
                {
                  v15 = -2;
                }
              }
              else
              {
                v15 = -3;
              }
            }
            else
            {
              v15 = -4;
            }
          }
          else
          {
            v15 = -5;
          }
        }
        else
        {
          v15 = -6;
        }
      }
      else
      {
        v15 = -7;
      }
      switch ( v15 )
      {
        case -7:
        case -6:
          v46[v12] = 1;
          break;
        case -5:
        case -4:
          v46[v12] = 2;
          break;
        case -3:
        case -2:
          v46[v12] = 3;
          break;
        default:
          break;
      }
      g_NetworkManager.obtainedRoomsRTT[v12] = -1;
      ++v11;
      ++v12;
    }
    while ( v11 < 50 );
    LeaveCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.roomsRTTMutex);
    if ( v11 > 0 )
    {
      `eh vector constructor iterator'(
        &pargs,
        0x30ui64,
        2ui64,
        (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
        (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
      v16 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        v32 = (GfxManager *)operator new(0x108ui64);
        GfxManager::GfxManager(v32);
        GfxManager::instance = v16;
      }
      v17 = extension::GFXIMovie::createASArray(&v16->m_GFXMovie, &result);
      if ( &pargs != v17 )
        Scaleform::GFx::Value::operator=(&pargs, v17);
      if ( (result.Type & 0x40) != 0 )
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          result.pObjectInterface,
          &result,
          result.mValue.pStringManaged);
      Scaleform::GFx::Value::ObjectInterface::SetArraySize(pargs.pObjectInterface, pargs.mValue.pStringManaged, v11);
      v18 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        v33 = (GfxManager *)operator new(0x108ui64);
        GfxManager::GfxManager(v33);
        GfxManager::instance = v18;
      }
      v19 = extension::GFXIMovie::createASArray(&v18->m_GFXMovie, &val);
      if ( &v42 != v19 )
        Scaleform::GFx::Value::operator=(&v42, v19);
      if ( (val.Type & 0x40) != 0 )
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      Scaleform::GFx::Value::ObjectInterface::SetArraySize(v42.pObjectInterface, v42.mValue.pStringManaged, v11);
      v20 = 0;
      v21 = v11;
      for ( i = 0i64; i < v21; ++i )
      {
        value.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
        value.pObjectInterface = 0i64;
        *(Scaleform::ListNode<Scaleform::GFx::Value> *)&v38.pNext = value.Scaleform::ListNode<Scaleform::GFx::Value>;
        *(_QWORD *)&v38.Type = 0i64;
        v23 = v46[i + 52];
        value.Type = VT_Float;
        value.mValue.IValue = v23;
        v24 = v46[i];
        v38.mValue.IValue = 3;
        LODWORD(v38.DataAux) = v24;
        Scaleform::GFx::Value::ObjectInterface::SetElement(
          pargs.pObjectInterface,
          pargs.mValue.pStringManaged,
          v20,
          &value);
        Scaleform::GFx::Value::ObjectInterface::SetElement(
          v42.pObjectInterface,
          v42.mValue.pStringManaged,
          v20,
          (const Scaleform::GFx::Value *)&v38.8);
        if ( (v38.mValue.BValue & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
            *(Scaleform::GFx::Value::ObjectInterface **)&v38.Type,
            (Scaleform::GFx::Value *)&v38.8,
            (void *)v38.DataAux);
          *(_QWORD *)&v38.Type = 0i64;
        }
        v38.mValue.IValue = 0;
        if ( (value.Type & 0x40) != 0 )
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
            value.pObjectInterface,
            &value,
            value.mValue.pStringManaged);
        ++v20;
      }
      v25 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        v34 = (GfxManager *)operator new(0x108ui64);
        GfxManager::GfxManager(v34);
        GfxManager::instance = v25;
      }
      v26 = v25->m_GFXMovie.m_movieProxy.m_ptr;
      if ( Scaleform::GFx::Movie::IsAvailable(
             v25->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
             "_root.updateAntennas") )
      {
        Scaleform::GFx::Movie::Invoke(v26->m_movie.pObject, "_root.updateAntennas", 0i64, &pargs, 2u);
      }
      `eh vector destructor iterator'(
        &pargs,
        0x30ui64,
        2ui64,
        (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
    }
  }
  if ( HIBYTE(v38.pPrev[3].pObjectInterface) )
  {
    if ( !GfxManager::instance )
    {
      v35 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v35);
      GfxManager::instance = v27;
    }
    if ( GfxManager::instance->m_QuitResultCode == RESULT_CODE_ROOM )
    {
      this->s_RoomInitFlag = 1;
      this->m_FadeST = 148;
    }
    else
    {
      if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                                + 40i64) )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v28);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        }
      }
      v29 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
      if ( v29 == GAME_MODE_ONLINETRAINING )
      {
        this->m_FadeST = 156;
      }
      else if ( v29 == GAME_MODE_RANKMATCH )
      {
        this->m_FadeST = 128;
      }
      else
      {
        this->m_FadeST = 136;
      }
    }
    v30 = this->m_FuncFT == 170;
    this->m_bExitFuncWaitFrame = 0;
    this->m_FadeExitFunc = 153;
    this->m_FuncST = 0;
    this->iReserveScene = -1;
    if ( !v30 )
      this->m_FuncFT = 172;
  }
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::gfxi_detail::MovieProxy::~MovieProxy(v37);
      operator delete(v37, 0xE8ui64);
    }
  }
}

