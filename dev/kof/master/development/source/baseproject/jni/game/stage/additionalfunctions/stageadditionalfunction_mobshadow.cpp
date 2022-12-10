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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/additionalfunctions/stageadditionalfunction_mobshadow.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageevent.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfigure.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B33
void StageAdditionalFunction_MobShadow::release(); // 0x140208940
void StageAdditionalFunction_MobShadow::setup(BattleStage * pStage); // 0x140208A60
void StageAdditionalFunction_MobShadow::draw(BattleStage * pStage); // 0x140209210
void StageAdditionalFunction_MobShadow::updateShadowTransform(); // 0x1402092A0
void StageAdditionalFunction_MobShadow::updateVertex(); // 0x140209BB0//decompilation failure at 1408A0B33!
void __fastcall StageAdditionalFunction_MobShadow::draw(
        StageAdditionalFunction_MobShadow *this,
        BattleStage *pStage,
        __int64 a3,
        int a4)
{
  int v5; // edi
  OGLRender *v6; // rbp
  __int64 v7; // rbx
  StageAdditionalFunction_MobShadow::ShadowModelParams *m_pShadowModels; // rax
  OGLModel *pOGLModelShadow; // rdx

  if ( this->m_bEnable )
  {
    v5 = 0;
    v6 = *(OGLRender **)(*(_QWORD *)&AppMain::pApp + 80i64);
    if ( this->m_shadowModelCount > 0 )
    {
      v7 = 0i64;
      do
      {
        m_pShadowModels = this->m_pShadowModels;
        pOGLModelShadow = m_pShadowModels[v7].pOGLModelShadow;
        if ( pOGLModelShadow )
        {
          if ( m_pShadowModels[v7].pShadows )
            OGLRender::addStack(v6, pOGLModelShadow, 1.0, a4);
        }
        ++v5;
        ++v7;
      }
      while ( v5 < this->m_shadowModelCount );
    }
  }
}

void __fastcall StageAdditionalFunction_MobShadow::release(
        StageAdditionalFunction_MobShadow *this,
        unsigned __int64 a2)
{
  int v3; // ebp
  __int64 v4; // r14
  StageAdditionalFunction_MobShadow::ShadowModelParams *m_pShadowModels; // rbx
  __int64 v6; // rcx
  StageAdditionalFunction_MobShadow::ShadowParams *pShadows; // rcx
  OGLModel *pOGLModelShadow; // rcx
  OGLFigure *m_pFigure; // rsi
  StageAdditionalFunction_MobShadow::ShadowModelParams *v10; // rcx

  if ( this->m_pShadowModels )
  {
    v3 = 0;
    if ( this->m_shadowModelCount > 0 )
    {
      v4 = 0i64;
      do
      {
        m_pShadowModels = this->m_pShadowModels;
        a2 = 0i64;
        if ( m_pShadowModels[v4].shadowCount > 0 )
        {
          v6 = 0i64;
          do
          {
            m_pShadowModels[v4].pShadows[v6].pOGLModelBindTarget = 0i64;
            m_pShadowModels[v4].pShadows[v6].pDataObject = 0i64;
            a2 = (unsigned int)(a2 + 1);
            ++v6;
          }
          while ( (int)a2 < m_pShadowModels[v4].shadowCount );
        }
        pShadows = m_pShadowModels[v4].pShadows;
        if ( pShadows )
        {
          operator delete(pShadows, a2);
          m_pShadowModels[v4].pShadows = 0i64;
        }
        pOGLModelShadow = m_pShadowModels[v4].pOGLModelShadow;
        if ( pOGLModelShadow )
        {
          m_pFigure = pOGLModelShadow->m_pFigure;
          ((void (__fastcall *)(OGLModel *, __int64))pOGLModelShadow->~AgIThreadHost)(pOGLModelShadow, 1i64);
          m_pShadowModels[v4].pOGLModelShadow = 0i64;
          if ( m_pFigure )
          {
            OGLFigure::finalize(m_pFigure, a2);
            operator delete(m_pFigure, 0x108ui64);
          }
        }
        ++v3;
        ++v4;
      }
      while ( v3 < this->m_shadowModelCount );
    }
    v10 = this->m_pShadowModels;
    if ( v10 )
    {
      operator delete(v10, a2);
      this->m_pShadowModels = 0i64;
    }
    this->m_pShadowModels = 0i64;
    this->m_bEnable = 0;
  }
}

void __fastcall StageAdditionalFunction_MobShadow::setup(StageAdditionalFunction_MobShadow *this, BattleStage *pStage)
{
  BattleStage *v2; // rsi
  StageAdditionalFunction_MobShadow *v3; // r14
  int v4; // er11
  int v5; // er10
  int v6; // ebp
  BattleStageEvent **Mylast; // rcx
  int v8; // er8
  BattleStageEvent **Myfirst; // rax
  BattleStageEvent *v10; // r9
  int v11; // edx
  BattleStageEvent **v12; // rax
  int v13; // edx
  bool v14; // dl
  int v15; // eax
  unsigned __int64 v16; // rbx
  void *v17; // r15
  unsigned __int64 v18; // rax
  size_t v19; // rbx
  void *v20; // r12
  int v21; // edi
  __int64 v22; // r10
  int v23; // ebx
  _DWORD *v24; // r11
  signed __int64 v25; // r13
  BattleStageEvent **v26; // rax
  int v27; // er8
  BattleStageEvent **v28; // rcx
  BattleStageEvent *v29; // r9
  int v30; // edx
  BattleStageEvent **v31; // rax
  BattleStageEvent **i; // rcx
  int v33; // edx
  BSDataEvent *m_pEvent; // rax
  BSDataObject *m_pObject; // rax
  BSDataEvent *v36; // rcx
  BSDataObject *v37; // rcx
  int m_shadowModelUID; // edx
  __int64 v39; // rcx
  bool v40; // r8
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  void (__fastcall *v43)(OGLFigure *, int, int); // r9
  int v44; // ebp
  _DWORD *v45; // r14
  __int64 v46; // rdi
  StageAdditionalFunction_MobShadow::ShadowModelParams *m_pShadowModels; // rsi
  int v48; // eax
  __int64 v49; // rbx
  _QWORD *v50; // rax
  StageAdditionalFunction_MobShadow::ShadowParams *v51; // rcx
  _QWORD *v52; // rax
  size_t v53; // r8
  BattleStageResourceContainer *m_pResourceContainer; // rax
  int v55; // edx
  __int64 v56; // rbx
  StageAdditionalFunction_MobShadow::ShadowModelParams *v57; // rdi
  TknData *v58; // rcx
  const char *m_pUserName; // rcx
  int v60; // edx
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  OGLModel *v64; // rax
  __int64 v65; // r10
  int v66; // eax
  BattleStageEvent **v67; // rcx
  int v68; // er8
  BattleStageEvent **v69; // rax
  BattleStageEvent *v70; // r13
  int v71; // edx
  BattleStageEvent **v72; // rax
  BattleStageEvent **j; // rcx
  int v74; // edx
  BSDataEvent *v75; // rax
  BSDataObject *v76; // r15
  void (__fastcall *v77)(OGLFigure *, int, int); // r12
  __int64 v78; // r14
  OGLModel *m_pOGLModel; // rcx
  char *v80; // rsi
  const char *v81; // rdi
  const char *v82; // rbp
  OGLFigure *m_pFigure; // rax
  int v84; // ecx
  int v85; // er11
  __int64 m_uiBoneCount; // rbx
  unsigned __int8 **p_m_cName; // r9
  const char *v88; // rax
  __int64 v89; // r8
  int v90; // ecx
  int v91; // edx
  __int64 v92; // rax
  int v93; // ecx
  int v94; // er11
  __int64 v95; // rbx
  const char **v96; // r9
  const char *v97; // rax
  __int64 v98; // r8
  int v99; // ecx
  int v100; // edx
  __int64 v101; // [rsp+20h] [rbp-B8h]
  void (__fastcall *v102)(OGLFigure *, int, int); // [rsp+28h] [rbp-B0h]
  StageAdditionalFunction_MobShadow::ShadowModelParams *v103; // [rsp+30h] [rbp-A8h]
  BattleStageResourceContainer *v104; // [rsp+38h] [rbp-A0h]
  int v105; // [rsp+40h] [rbp-98h]
  OGLMatrix v106; // [rsp+50h] [rbp-88h] BYREF
  int v109; // [rsp+F0h] [rbp+18h]
  void *v110; // [rsp+F8h] [rbp+20h]
  int v111; // [rsp+F8h] [rbp+20h]

  v2 = pStage;
  v3 = this;
  StageAdditionalFunction_MobShadow::release(this, (unsigned __int64)pStage);
  if ( !v2 )
    return;
  v4 = 0;
  v5 = 0;
  v6 = v2->m_pGlobalEvents._Mypair._Myval2._Mylast
     - v2->m_pGlobalEvents._Mypair._Myval2._Myfirst
     + v2->m_pLocalEvents._Mypair._Myval2._Mylast
     - v2->m_pLocalEvents._Mypair._Myval2._Myfirst;
  v105 = v6;
  if ( v6 <= 0 )
    return;
  Mylast = v2->m_pGlobalEvents._Mypair._Myval2._Mylast;
  do
  {
    v8 = v5;
    Myfirst = v2->m_pGlobalEvents._Mypair._Myval2._Myfirst;
    if ( Myfirst == Mylast )
    {
LABEL_7:
      v12 = v2->m_pLocalEvents._Mypair._Myval2._Myfirst;
      if ( v12 == v2->m_pLocalEvents._Mypair._Myval2._Mylast )
        goto LABEL_10;
      while ( 1 )
      {
        v10 = *v12;
        v13 = v8--;
        if ( v13 <= 0 )
          break;
        if ( ++v12 == v2->m_pLocalEvents._Mypair._Myval2._Mylast )
          goto LABEL_10;
      }
    }
    else
    {
      while ( 1 )
      {
        v10 = *Myfirst;
        v11 = v8--;
        if ( v11 <= 0 )
          break;
        if ( ++Myfirst == Mylast )
          goto LABEL_7;
      }
    }
    if ( !v10
      || (m_pEvent = v10->m_pEvent) == 0i64
      || (m_pObject = m_pEvent->m_pObject) == 0i64
      || m_pObject->m_sceneRegistCategory == SCENE_REGIST_LOCAL )
    {
LABEL_10:
      v14 = 0;
      goto LABEL_11;
    }
    v14 = m_pObject->m_shadowModelUID != 0;
LABEL_11:
    ++v5;
    v15 = v4 + 1;
    if ( !v14 )
      v15 = v4;
    v4 = v15;
  }
  while ( v5 < v6 );
  if ( v15 <= 0 )
    return;
  v16 = v15;
  v17 = operator new[](saturated_mul(v15, 4ui64));
  v18 = 4 * v16;
  if ( !is_mul_ok(v16, 4ui64) )
    v18 = -1i64;
  v19 = 4 * v16;
  v110 = operator new[](v18);
  v20 = v110;
  v21 = 0;
  memset(v17, 0, v19);
  memset(v110, 0, v19);
  v22 = 0i64;
  v23 = 0;
  v24 = v110;
  v25 = (_BYTE *)v17 - (_BYTE *)v110;
  while ( 2 )
  {
    v26 = v2->m_pGlobalEvents._Mypair._Myval2._Myfirst;
    v27 = v23;
    v28 = v2->m_pGlobalEvents._Mypair._Myval2._Mylast;
    if ( v26 == v28 )
    {
LABEL_21:
      v31 = v2->m_pLocalEvents._Mypair._Myval2._Myfirst;
      for ( i = v2->m_pLocalEvents._Mypair._Myval2._Mylast; v31 != i; ++v31 )
      {
        v29 = *v31;
        v33 = v27--;
        if ( v33 <= 0 )
          goto LABEL_30;
      }
    }
    else
    {
      while ( 1 )
      {
        v29 = *v26;
        v30 = v27--;
        if ( v30 <= 0 )
          break;
        if ( ++v26 == v28 )
          goto LABEL_21;
      }
LABEL_30:
      if ( v29 )
      {
        v36 = v29->m_pEvent;
        if ( v36 )
        {
          v37 = v36->m_pObject;
          if ( v37 )
          {
            if ( v37->m_sceneRegistCategory != SCENE_REGIST_LOCAL && v37->m_shadowModelUID )
            {
              m_shadowModelUID = v37->m_shadowModelUID;
              v39 = 0i64;
              if ( v22 <= 0 )
                goto LABEL_41;
              while ( 1 )
              {
                v40 = *((_DWORD *)v17 + v39) == m_shadowModelUID;
                if ( *((_DWORD *)v17 + v39) == m_shadowModelUID )
                  break;
                if ( ++v39 >= v22 )
                  goto LABEL_40;
              }
              ++*((_DWORD *)v110 + v39);
LABEL_40:
              if ( !v40 )
              {
LABEL_41:
                *(_DWORD *)((char *)v24 + v25) = m_shadowModelUID;
                ++v21;
                ++*v24;
                ++v22;
                ++v24;
              }
            }
          }
        }
      }
    }
    if ( ++v23 < v6 )
      continue;
    break;
  }
  v41 = 40i64 * v21;
  v3->m_shadowModelCount = v21;
  if ( !is_mul_ok(v21, 0x28ui64) )
    v41 = -1i64;
  v3->m_pShadowModels = (StageAdditionalFunction_MobShadow::ShadowModelParams *)operator new[](v41);
  v44 = 0;
  if ( v3->m_shadowModelCount > 0 )
  {
    v45 = v110;
    v46 = 0i64;
    do
    {
      m_pShadowModels = this->m_pShadowModels;
      m_pShadowModels[v46].shadowModelUID = *(_DWORD *)((char *)v45 + v25);
      m_pShadowModels[v46].pOGLModelShadow = 0i64;
      m_pShadowModels[v46].originalVertexCount = 0;
      v48 = 2 * *v45;
      v49 = v48;
      m_pShadowModels[v46].shadowCount = v48;
      v50 = operator new[](saturated_mul(v48, 0x78ui64));
      v51 = (StageAdditionalFunction_MobShadow::ShadowParams *)v50;
      if ( v50 )
      {
        if ( v49 )
        {
          v52 = v50 + 13;
          do
          {
            *(v52 - 10) = 0i64;
            *(v52 - 9) = 0i64;
            *(v52 - 8) = 0i64;
            *(v52 - 7) = 0i64;
            *(v52 - 6) = 0i64;
            *(v52 - 5) = 0i64;
            *(v52 - 4) = 0i64;
            *(v52 - 3) = 0i64;
            *(v52 - 1) = 0i64;
            *v52 = 0i64;
            v52[1] = 0i64;
            v52 += 15;
            --v49;
          }
          while ( v49 );
        }
      }
      else
      {
        v51 = 0i64;
      }
      v53 = 120i64 * m_pShadowModels[v46].shadowCount;
      m_pShadowModels[v46].pShadows = v51;
      memset(v51, 0, v53);
      ++v44;
      ++v46;
      ++v45;
    }
    while ( v44 < this->m_shadowModelCount );
    v20 = v110;
    v2 = pStage;
    v3 = this;
  }
  if ( v17 )
    operator delete(v17, v42);
  if ( v20 )
    operator delete(v20, v42);
  m_pResourceContainer = v2->m_pResourceContainer;
  v104 = m_pResourceContainer;
  if ( !m_pResourceContainer || !m_pResourceContainer->m_bActived )
  {
    m_pResourceContainer = 0i64;
    v104 = 0i64;
  }
  v55 = 0;
  v111 = 0;
  if ( v3->m_shadowModelCount > 0 )
  {
    v56 = 0i64;
    v101 = 0i64;
    while ( 1 )
    {
      v57 = v3->m_pShadowModels;
      v103 = v57;
      v58 = m_pResourceContainer->m_pDatas[*(int *)((char *)&v57->shadowModelUID + v56)];
      if ( v58 )
      {
        if ( v58->m_dataType == DATATYPE_MODEL )
        {
          m_pUserName = v58[3].m_pUserName;
          if ( m_pUserName )
            break;
        }
      }
LABEL_114:
      m_pResourceContainer = v104;
      ++v55;
      v56 += 40i64;
      v111 = v55;
      v101 = v56;
      if ( v55 >= v3->m_shadowModelCount )
        goto LABEL_115;
    }
    *(int *)((char *)&v57->originalVertexCount + v56) = *(_DWORD *)(*((_QWORD *)m_pUserName + 45) + 16i64);
    v60 = *(int *)((char *)&v57->shadowCount + v56);
    v61 = *(_OWORD *)(m_pUserName + 248);
    *(_OWORD *)v106.m = *(_OWORD *)(m_pUserName + 232);
    v62 = *(_OWORD *)(m_pUserName + 264);
    *(_OWORD *)&v106.m[4] = v61;
    v63 = *(_OWORD *)(m_pUserName + 280);
    *(_OWORD *)&v106.m[8] = v62;
    *(_OWORD *)&v106.m[12] = v63;
    v64 = BSUtil::createOGLModelMultiple((const OGLModel *)m_pUserName, v60, &v106, v43);
    v65 = 0i64;
    *(OGLModel **)((char *)&v57->pOGLModelShadow + v56) = v64;
    v66 = 0;
    v43 = 0i64;
    v109 = 0;
    while ( 2 )
    {
      v67 = v2->m_pGlobalEvents._Mypair._Myval2._Mylast;
      v68 = v66;
      v69 = v2->m_pGlobalEvents._Mypair._Myval2._Myfirst;
      if ( v69 == v67 )
      {
LABEL_71:
        v72 = v2->m_pLocalEvents._Mypair._Myval2._Myfirst;
        for ( j = v2->m_pLocalEvents._Mypair._Myval2._Mylast; v72 != j; ++v72 )
        {
          v70 = *v72;
          v74 = v68--;
          if ( v74 <= 0 )
            goto LABEL_75;
        }
      }
      else
      {
        while ( 1 )
        {
          v70 = *v69;
          v71 = v68--;
          if ( v71 <= 0 )
            break;
          if ( ++v69 == v67 )
            goto LABEL_71;
        }
LABEL_75:
        if ( v70 )
        {
          v75 = v70->m_pEvent;
          if ( v75 )
          {
            v76 = v75->m_pObject;
            if ( v76 )
            {
              if ( v76->m_sceneRegistCategory != SCENE_REGIST_LOCAL
                && v76->m_shadowModelUID
                && *(int *)((char *)&v57->shadowModelUID + v56) == v76->m_shadowModelUID )
              {
                v77 = v43;
                v78 = 0i64;
                v102 = (void (__fastcall *)(OGLFigure *, int, int))((char *)v43 + 240);
                do
                {
                  m_pOGLModel = v70->m_pOGLModel;
                  v80 = (char *)v77 + *(unsigned __int64 *)((char *)&v57->pShadows + v56);
                  v77 = (void (__fastcall *)(OGLFigure *, int, int))((char *)v77 + 120);
                  *(_QWORD *)v80 = m_pOGLModel;
                  *((_QWORD *)v80 + 2) = v76;
                  v81 = v76->m_shadowBindBoneNames[v78];
                  v82 = v76->m_shadowBindBoneNamesSub[v78];
                  if ( v81 )
                  {
                    m_pFigure = m_pOGLModel->m_pFigure;
                    if ( m_pFigure && (v84 = m_pFigure->m_uiBoneCount) != 0 )
                    {
                      v85 = 0;
                      if ( v84 <= 0 )
                      {
LABEL_93:
                        v85 = -1;
                      }
                      else
                      {
                        m_uiBoneCount = (int)m_pFigure->m_uiBoneCount;
                        p_m_cName = &m_pFigure->m_pBone->m_cName;
                        while ( 1 )
                        {
                          v88 = (const char *)*p_m_cName;
                          if ( *p_m_cName )
                          {
                            v89 = v81 - v88;
                            do
                            {
                              v90 = (unsigned __int8)v88[v89];
                              v91 = *(unsigned __int8 *)v88 - v90;
                              if ( v91 )
                                break;
                              ++v88;
                            }
                            while ( v90 );
                            if ( !v91 )
                              break;
                          }
                          ++v85;
                          ++v65;
                          p_m_cName += 29;
                          if ( v65 >= m_uiBoneCount )
                            goto LABEL_93;
                        }
                      }
                      v65 = 0i64;
                    }
                    else
                    {
                      v85 = -1;
                    }
                    *((_DWORD *)v80 + 2) = v85;
                  }
                  if ( v82 )
                  {
                    v92 = *(_QWORD *)(*(_QWORD *)v80 + 360i64);
                    if ( v92 && (v93 = *(_DWORD *)(v92 + 136)) != 0 && (v94 = 0, v93 > 0) )
                    {
                      v95 = *(int *)(v92 + 136);
                      v96 = (const char **)(*(_QWORD *)(v92 + 112) + 112i64);
                      while ( 1 )
                      {
                        v97 = *v96;
                        if ( *v96 )
                        {
                          v98 = v82 - v97;
                          do
                          {
                            v99 = (unsigned __int8)v97[v98];
                            v100 = *(unsigned __int8 *)v97 - v99;
                            if ( v100 )
                              break;
                            ++v97;
                          }
                          while ( v99 );
                          if ( !v100 )
                            break;
                        }
                        ++v94;
                        ++v65;
                        v96 += 29;
                        if ( v65 >= v95 )
                          goto LABEL_108;
                      }
                    }
                    else
                    {
LABEL_108:
                      v94 = -1;
                    }
                    *((_DWORD *)v80 + 3) = v94;
                    v65 = 0i64;
                  }
                  v56 = v101;
                  ++v78;
                  v57 = v103;
                  *((_QWORD *)v80 + 3) = 1065353216i64;
                  *((_DWORD *)v80 + 10) = 0;
                  *((_QWORD *)v80 + 7) = 0i64;
                  *((_QWORD *)v80 + 9) = 0i64;
                  *(_QWORD *)(v80 + 44) = 1065353216i64;
                  *((_QWORD *)v80 + 4) = 0i64;
                  *((_QWORD *)v80 + 8) = 1065353216i64;
                  *((_DWORD *)v80 + 20) = 0;
                  *((_DWORD *)v80 + 13) = 0;
                  *((_DWORD *)v80 + 21) = 1065353216;
                  *((_DWORD *)v80 + 23) = 1094713344;
                }
                while ( v78 < 2 );
                v2 = pStage;
                v43 = v102;
              }
            }
          }
        }
      }
      v66 = v109 + 1;
      v109 = v66;
      if ( v66 >= v105 )
      {
        v55 = v111;
        v3 = this;
        goto LABEL_114;
      }
      continue;
    }
  }
LABEL_115:
  v3->m_bEnable = 1;
}

void __fastcall StageAdditionalFunction_MobShadow::updateShadowTransform(StageAdditionalFunction_MobShadow *this)
{
  int v1; // eax
  __int64 i; // r15
  StageAdditionalFunction_MobShadow::ShadowModelParams *m_pShadowModels; // r13
  int v4; // er14
  __int64 v5; // rdi
  StageAdditionalFunction_MobShadow::ShadowParams *pShadows; // rsi
  float *pDataObject; // rax
  OGLModel *pOGLModelBindTarget; // rcx
  float v9; // xmm9_4
  float v10; // xmm10_4
  OGLMatrix *p_transMatrix; // rbx
  OGLModel *v12; // r8
  __int64 bindBoneNo; // rcx
  OGLMatrix *p_mRot; // rdx
  __int64 v15; // r8
  float v16; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm1_4
  __int64 bindBoneNoSub; // rcx
  float v20; // xmm4_4
  float v21; // xmm4_4
  float *v22; // rdx
  float v23; // xmm1_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  float v26; // xmm1_4
  float blendCount; // xmm3_4
  float v28; // xmm3_4
  float v29; // xmm3_4
  float v30; // eax
  bool v31; // r12
  float v32; // xmm6_4
  float v33; // xmm6_4
  float v34; // xmm15_4
  float v35; // xmm14_4
  OGLModel *v36; // rcx
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  float v40; // xmm6_4
  float v41; // xmm7_4
  OGLModel *v42; // rcx
  __m128 v43; // xmm6
  OGLMatrix *v44; // rcx
  float v45; // xmm6_4
  BSDataObject *v46; // rax
  float v47; // xmm6_4
  float m_shadowEraseDistance; // xmm0_4
  float v49; // xmm1_4
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  float v52; // xmm6_4
  float m_shadowScaleH; // xmm2_4
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  OGLMatrix *v56; // rcx
  OGLMatrix v57; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v58; // [rsp+68h] [rbp-A0h]
  __int64 v59; // [rsp+70h] [rbp-98h]
  OGLMatrix v60; // [rsp+78h] [rbp-90h] BYREF
  OGLMatrix In; // [rsp+B8h] [rbp-50h] BYREF
  OGLVec3 result; // [rsp+F8h] [rbp-10h] BYREF
  OGLMatrix oglMatrix; // [rsp+108h] [rbp+0h] BYREF
  StageAdditionalFunction_MobShadow *v64; // [rsp+268h] [rbp+160h]
  int v65; // [rsp+270h] [rbp+168h]
  float v66; // [rsp+278h] [rbp+170h]

  v64 = this;
  v1 = 0;
  v65 = 0;
  if ( this->m_shadowModelCount > 0 )
  {
    for ( i = 0i64; ; ++i )
    {
      m_pShadowModels = this->m_pShadowModels;
      if ( m_pShadowModels[i].pOGLModelShadow )
      {
        if ( m_pShadowModels[i].pShadows )
        {
          v4 = 0;
          if ( m_pShadowModels[i].shadowCount > 0 )
            break;
        }
      }
LABEL_41:
      v65 = ++v1;
      if ( v1 >= this->m_shadowModelCount )
        return;
    }
    v5 = 0i64;
    while ( 1 )
    {
      pShadows = m_pShadowModels[i].pShadows;
      pDataObject = (float *)pShadows[v5].pDataObject;
      if ( pDataObject )
      {
        pOGLModelBindTarget = pShadows[v5].pOGLModelBindTarget;
        if ( pOGLModelBindTarget )
        {
          v9 = pDataObject[37];
          v10 = pDataObject[39];
          v66 = pDataObject[38];
          OGLModel::syncPosture(pOGLModelBindTarget);
          p_transMatrix = &pShadows[v5].transMatrix;
          *(_QWORD *)p_transMatrix->m = 1065353216i64;
          p_transMatrix->m[4] = 0.0;
          *(_QWORD *)&p_transMatrix->m[8] = 0i64;
          *(_QWORD *)&p_transMatrix->m[12] = 0i64;
          *(_QWORD *)&p_transMatrix->m[5] = 1065353216i64;
          *(_QWORD *)&p_transMatrix->m[2] = 0i64;
          *(_QWORD *)&p_transMatrix->m[10] = 1065353216i64;
          p_transMatrix->m[14] = 0.0;
          p_transMatrix->m[7] = 0.0;
          p_transMatrix->m[15] = 1.0;
          v12 = pShadows[v5].pOGLModelBindTarget;
          bindBoneNo = pShadows[v5].bindBoneNo;
          if ( (int)bindBoneNo < (signed int)v12->m_pFigure->m_uiBoneCount )
          {
            p_mRot = &v12->m_pBoneInfo[bindBoneNo].mRot;
            if ( p_mRot )
            {
              *(_QWORD *)v60.m = 1065353216i64;
              v60.m[4] = 0.0;
              *(_QWORD *)&v60.m[5] = 1065353216i64;
              v60.m[14] = 0.0;
              v60.m[7] = 0.0;
              v60.m[15] = 1.0;
              *(_QWORD *)&v60.m[8] = 0i64;
              *(_QWORD *)&v60.m[12] = 0i64;
              *(_QWORD *)&v60.m[2] = 0i64;
              *(_QWORD *)&v60.m[10] = 1065353216i64;
              OGLMatrix::multiply(&v60, p_mRot);
              HIDWORD(v58) = 0;
              v16 = (float)((float)(v60.m[4] * 0.0) + (float)(v60.m[0] * 0.0)) + v60.m[8];
              *(float *)&v58 = v16;
              v17 = (float)((float)(v60.m[6] * 0.0) + (float)(v60.m[2] * 0.0)) + v60.m[10];
              v18 = fmaxf(v16, v17);
              *(float *)&v59 = v17;
              if ( v18 <= 0.0 )
                LODWORD(v18) ^= _xmm;
              if ( pShadows[v5].pDataObject->m_shadowSubBoneEffectRate <= v18
                || (bindBoneNoSub = pShadows[v5].bindBoneNoSub, (_DWORD)bindBoneNoSub == -1) )
              {
                blendCount = pShadows[v5].blendCount;
                if ( blendCount < 12.0 )
                {
                  v28 = fminf(blendCount + 1.0, 12.0);
                  pShadows[v5].blendCount = v28;
                  v29 = v28 / 12.0;
                  v17 = (float)((float)(1.0 - v29) * pShadows[v5].blendDirectionSub.z) + (float)(v29 * v17);
                  v16 = (float)((float)(1.0 - v29) * pShadows[v5].blendDirectionSub.x) + (float)(v29 * v16);
                  *(float *)&v59 = v17;
                  *(float *)&v58 = v16;
                }
                v30 = *(float *)&v59;
                *(_QWORD *)&pShadows[v5].blendDirection.x = v58;
                pShadows[v5].blendDirection.z = v30;
                goto LABEL_21;
              }
              v20 = fmaxf(pShadows[v5].blendCount - 1.0, 0.0);
              pShadows[v5].blendCount = v20;
              v21 = v20 / 12.0;
              if ( (int)bindBoneNoSub < *(_DWORD *)(*(_QWORD *)(v15 + 360) + 136i64) )
              {
                v22 = (float *)(536 * bindBoneNoSub + *(_QWORD *)(v15 + 1256) + 212i64);
                if ( v22 )
                {
                  v23 = 1.0 - v21;
                  v24 = v21 * pShadows[v5].blendDirection.x;
                  v25 = v21 * pShadows[v5].blendDirection.z;
                  v16 = v24 + (float)(v23 * (float)((float)((float)(v22[4] * 0.0) + (float)(*v22 * 0.0)) + v22[8]));
                  v26 = v23 * (float)((float)((float)(v22[6] * 0.0) + (float)(v22[2] * 0.0)) + v22[10]);
                  *(float *)&v58 = v16;
                  v17 = v25 + v26;
                  *(_QWORD *)&pShadows[v5].blendDirectionSub.x = v58;
                  *(float *)&v59 = v17;
                  pShadows[v5].blendDirectionSub.z = v17;
LABEL_21:
                  v31 = v16 > 0.0;
                  v32 = (float)((float)((float)(v16 * 0.0) + 0.0) + v17)
                      / sqrtf((float)((float)(v16 * v16) + 0.0) + (float)(v17 * v17));
                  if ( v31 )
                    LODWORD(v32) ^= _xmm;
                  v33 = acosf(v32);
                  v34 = sinf(v33);
                  v35 = cosf(v33);
                  In.m[1] = 0.0;
                  In.m[3] = 0.0;
                  In.m[4] = 0.0;
                  In.m[9] = 0.0;
                  In.m[11] = 0.0;
                  In.m[14] = 0.0;
                  In.m[0] = v35;
                  In.m[8] = v34;
                  LODWORD(In.m[2]) = LODWORD(v34) ^ _xmm;
                  In.m[10] = v35;
                  In.m[5] = 1.0;
                  In.m[15] = 1.0;
                  *(_QWORD *)&In.m[6] = 0i64;
                  *(_QWORD *)&In.m[12] = 0i64;
                  OGLMatrix::multiply(&pShadows[v5].transMatrix, &In);
                  v57.m[12] = v60.m[12];
                  v57.m[1] = 0.0;
                  v57.m[4] = 0.0;
                  v57.m[11] = 0.0;
                  *(_QWORD *)&v57.m[2] = 0i64;
                  *(_QWORD *)&v57.m[6] = 0i64;
                  *(_QWORD *)&v57.m[8] = 0i64;
                  v57.m[13] = 0.0;
                  LODWORD(v57.m[14]) = LODWORD(v60.m[14]) ^ _xmm;
                  v57.m[0] = 1.0;
                  v57.m[5] = 1.0;
                  v57.m[10] = 1.0;
                  v57.m[15] = 1.0;
                  OGLMatrix::multiply(&pShadows[v5].transMatrix, &v57);
                  v36 = pShadows[v5].pOGLModelBindTarget;
                  v37 = *(_OWORD *)&v36->m_mWorld.m[4];
                  *(_OWORD *)oglMatrix.m = *(_OWORD *)v36->m_mWorld.m;
                  v38 = *(_OWORD *)&v36->m_mWorld.m[8];
                  *(_OWORD *)&oglMatrix.m[4] = v37;
                  v39 = *(_OWORD *)&v36->m_mWorld.m[12];
                  *(_OWORD *)&oglMatrix.m[8] = v38;
                  *(_OWORD *)&oglMatrix.m[12] = v39;
                  BSUtil::toRotate(&result, &oglMatrix);
                  v40 = (float)((float)(360.0 - result.y) * 3.1415927) / 180.0;
                  v41 = sinf(v40);
                  *(float *)&v38 = cosf(v40);
                  v57.m[1] = 0.0;
                  LODWORD(v57.m[0]) = v38;
                  v57.m[3] = 0.0;
                  v57.m[4] = 0.0;
                  *(_QWORD *)&v57.m[6] = 0i64;
                  v57.m[9] = 0.0;
                  v57.m[11] = 0.0;
                  *(_QWORD *)&v57.m[12] = 0i64;
                  *(_QWORD *)&v57.m[14] = 0x3F80000000000000i64;
                  v57.m[8] = v41;
                  LODWORD(v57.m[10]) = v38;
                  LODWORD(v57.m[2]) = LODWORD(v41) ^ _xmm;
                  v57.m[5] = 1.0;
                  OGLMatrix::multiply(&pShadows[v5].transMatrix, &v57);
                  v42 = pShadows[v5].pOGLModelBindTarget;
                  *(_QWORD *)&v57.m[12] = 0i64;
                  *(_QWORD *)&v57.m[14] = 0i64;
                  v43 = *(__m128 *)&v42->m_mWorld.m[12];
                  v57.m[1] = 0.0;
                  v57.m[4] = 0.0;
                  v57.m[11] = 0.0;
                  *(_QWORD *)&v57.m[2] = 0i64;
                  *(_QWORD *)&v57.m[6] = 0i64;
                  *(_QWORD *)&v57.m[8] = 0i64;
                  v57.m[0] = 1.0;
                  v57.m[5] = 1.0;
                  v57.m[10] = 1.0;
                  v57.m[15] = 1.0;
                  LODWORD(v57.m[12]) = v43.m128_i32[0];
                  v57.m[13] = (float)((float)(v4 + 1) * 0.0099999998) + v66;
                  LODWORD(v57.m[14]) = _mm_shuffle_ps(v43, v43, 170).m128_u32[0];
                  OGLMatrix::multiply(&pShadows[v5].transMatrix, &v57);
                  v45 = (float)(_mm_shuffle_ps(v43, v43, 85).m128_f32[0] + v60.m[13]) - pShadows[v5].transMatrix.m[13];
                  if ( v45 <= 0.0 )
                    LODWORD(v45) ^= _xmm;
                  v46 = pShadows[v5].pDataObject;
                  v47 = v45 - 1.0;
                  pShadows[v5].length = v47;
                  m_shadowEraseDistance = v46->m_shadowEraseDistance;
                  if ( m_shadowEraseDistance <= v47 )
                    v49 = v46->m_shadowEraseDistance;
                  else
                    v49 = v47;
                  if ( v49 >= 0.0 )
                  {
                    if ( m_shadowEraseDistance <= v47 )
                      v47 = v46->m_shadowEraseDistance;
                  }
                  else
                  {
                    v47 = 0.0;
                  }
                  v50 = *(_OWORD *)p_transMatrix->m;
                  v51 = *(_OWORD *)&p_transMatrix->m[4];
                  pShadows[v5].length = v47;
                  v52 = v47 / v46->m_shadowEraseDistance;
                  m_shadowScaleH = v46->m_shadowScaleH;
                  *(_OWORD *)v57.m = v50;
                  v54 = *(_OWORD *)&p_transMatrix->m[8];
                  *(_OWORD *)&v57.m[4] = v51;
                  v55 = *(_OWORD *)&p_transMatrix->m[12];
                  *(_OWORD *)&v57.m[8] = v54;
                  *(float *)&v54 = v46->m_shadowScaleW;
                  *(_QWORD *)p_transMatrix->m = 0i64;
                  *(_QWORD *)&p_transMatrix->m[2] = 0i64;
                  *(_QWORD *)&p_transMatrix->m[4] = 0i64;
                  *(_QWORD *)&p_transMatrix->m[6] = 0i64;
                  *(_QWORD *)&p_transMatrix->m[8] = 0i64;
                  *(_QWORD *)&p_transMatrix->m[10] = 0i64;
                  *(_QWORD *)&p_transMatrix->m[12] = 0i64;
                  *(_QWORD *)&p_transMatrix->m[14] = 0i64;
                  p_transMatrix->m[5] = 1.0;
                  p_transMatrix->m[15] = 1.0;
                  p_transMatrix->m[0] = *(float *)&v54 * (float)(1.0 - v52);
                  *(_OWORD *)&v57.m[12] = v55;
                  p_transMatrix->m[10] = m_shadowScaleH * (float)(1.0 - v52);
                  OGLMatrix::multiply(v44, &v57);
                  if ( v9 != 0.0 || v10 != 0.0 )
                  {
                    if ( (v4 & 1) == 0 )
                      LODWORD(v9) ^= _xmm;
                    if ( v31 )
                    {
                      LODWORD(v9) ^= _xmm;
                      LODWORD(v10) ^= _xmm;
                    }
                    v57.m[1] = 0.0;
                    v57.m[4] = 0.0;
                    v57.m[11] = 0.0;
                    *(_QWORD *)&v57.m[2] = 0i64;
                    *(_QWORD *)&v57.m[6] = 0i64;
                    *(_QWORD *)&v57.m[8] = 0i64;
                    *((float *)&v58 + 1) = (float)((float)(In.m[1] * v9) + 0.0) + (float)(In.m[9] * v10);
                    v57.m[0] = 1.0;
                    v57.m[12] = (float)((float)(v35 * v9) + (float)(In.m[4] * 0.0)) + (float)(v34 * v10);
                    v57.m[5] = 1.0;
                    v57.m[13] = 0.0;
                    v57.m[10] = 1.0;
                    v57.m[15] = 1.0;
                    v57.m[14] = (float)((float)(COERCE_FLOAT(LODWORD(v34) ^ _xmm) * v9) + (float)(In.m[6] * 0.0))
                              + (float)(v35 * v10);
                    OGLMatrix::multiply(v56, &v57);
                  }
                }
              }
            }
          }
        }
      }
      ++v4;
      ++v5;
      if ( v4 >= m_pShadowModels[i].shadowCount )
      {
        v1 = v65;
        this = v64;
        goto LABEL_41;
      }
    }
  }
}

void __fastcall StageAdditionalFunction_MobShadow::updateVertex(StageAdditionalFunction_MobShadow *this)
{
  int v1; // ebx
  StageAdditionalFunction_MobShadow *v2; // rax
  __int64 v3; // rdi
  StageAdditionalFunction_MobShadow::ShadowModelParams *m_pShadowModels; // rbp
  int v5; // esi
  OGLModel *pOGLModelShadow; // r15
  int originalVertexCount; // er14
  char *m_pfVertexBuffer; // r13
  char *v9; // r12
  int v10; // ebx
  __int64 v11; // rcx
  StageAdditionalFunction_MobShadow::ShadowParams *pShadows; // rdx
  __int64 v13; // r10
  __int64 v14; // r11
  char *v15; // r9
  float *v16; // r8
  unsigned __int64 v17; // rax
  float v18; // xmm2_4
  float v19; // xmm2_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  __int64 v25; // r10
  char *v26; // r9
  float *v27; // r8
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  unsigned int vertexBuffer; // edx
  int v34; // [rsp+78h] [rbp+10h]

  v1 = 0;
  v2 = this;
  v34 = 0;
  if ( this->m_shadowModelCount > 0 )
  {
    v3 = 0i64;
    do
    {
      m_pShadowModels = v2->m_pShadowModels;
      v5 = 0;
      pOGLModelShadow = m_pShadowModels[v3].pOGLModelShadow;
      originalVertexCount = m_pShadowModels[v3].originalVertexCount;
      m_pfVertexBuffer = (char *)pOGLModelShadow->m_pfVertexBuffer;
      v9 = (char *)pOGLModelShadow->m_pFigure->m_pfVertexBuffer;
      if ( m_pShadowModels[v3].shadowCount > 0 )
      {
        v10 = 0;
        v11 = 0i64;
        do
        {
          pShadows = m_pShadowModels[v3].pShadows;
          v13 = v10 + originalVertexCount;
          v14 = v10;
          if ( v10 < v13 )
          {
            if ( v13 - v10 >= 4 )
            {
              v15 = &m_pfVertexBuffer[88 * v10 + 8];
              v16 = (float *)&v9[136 * v10 + 144];
              v17 = ((unsigned __int64)(v13 - v10 - 4) >> 2) + 1;
              v14 = v10 + 4 * v17;
              do
              {
                *((float *)v15 - 2) = (float)((float)((float)(pShadows[v11].transMatrix.m[4] * *(v16 - 35))
                                                    + (float)(pShadows[v11].transMatrix.m[0] * *(v16 - 36)))
                                            + (float)(pShadows[v11].transMatrix.m[8] * *(v16 - 34)))
                                    + pShadows[v11].transMatrix.m[12];
                *((float *)v15 - 1) = (float)((float)((float)(pShadows[v11].transMatrix.m[1] * *(v16 - 36))
                                                    + (float)(pShadows[v11].transMatrix.m[5] * *(v16 - 35)))
                                            + (float)(*(v16 - 34) * pShadows[v11].transMatrix.m[9]))
                                    + pShadows[v11].transMatrix.m[13];
                v18 = (float)((float)((float)(pShadows[v11].transMatrix.m[2] * *(v16 - 36))
                                    + (float)(pShadows[v11].transMatrix.m[6] * *(v16 - 35)))
                            + (float)(*(v16 - 34) * pShadows[v11].transMatrix.m[10]))
                    + pShadows[v11].transMatrix.m[14];
                *(_QWORD *)(v15 + 36) = 0i64;
                *((_DWORD *)v15 + 8) = 0;
                *((_DWORD *)v15 + 11) = 1132396544;
                *(_DWORD *)v15 = LODWORD(v18) ^ _xmm;
                *((float *)v15 + 20) = (float)((float)((float)(pShadows[v11].transMatrix.m[4] * *(v16 - 1))
                                                     + (float)(pShadows[v11].transMatrix.m[0] * *(v16 - 2)))
                                             + (float)(*v16 * pShadows[v11].transMatrix.m[8]))
                                     + pShadows[v11].transMatrix.m[12];
                *((float *)v15 + 21) = (float)((float)((float)(pShadows[v11].transMatrix.m[1] * *(v16 - 2))
                                                     + (float)(pShadows[v11].transMatrix.m[5] * *(v16 - 1)))
                                             + (float)(*v16 * pShadows[v11].transMatrix.m[9]))
                                     + pShadows[v11].transMatrix.m[13];
                v19 = (float)((float)((float)(pShadows[v11].transMatrix.m[2] * *(v16 - 2))
                                    + (float)(pShadows[v11].transMatrix.m[6] * *(v16 - 1)))
                            + (float)(*v16 * pShadows[v11].transMatrix.m[10]))
                    + pShadows[v11].transMatrix.m[14];
                *(_QWORD *)(v15 + 124) = 0i64;
                *((_DWORD *)v15 + 30) = 0;
                *((_DWORD *)v15 + 33) = 1132396544;
                *((_DWORD *)v15 + 22) = LODWORD(v19) ^ _xmm;
                *((float *)v15 + 42) = (float)((float)((float)(pShadows[v11].transMatrix.m[4] * v16[33])
                                                     + (float)(pShadows[v11].transMatrix.m[0] * v16[32]))
                                             + (float)(pShadows[v11].transMatrix.m[8] * v16[34]))
                                     + pShadows[v11].transMatrix.m[12];
                *((float *)v15 + 43) = (float)((float)((float)(pShadows[v11].transMatrix.m[1] * v16[32])
                                                     + (float)(pShadows[v11].transMatrix.m[5] * v16[33]))
                                             + (float)(v16[34] * pShadows[v11].transMatrix.m[9]))
                                     + pShadows[v11].transMatrix.m[13];
                v20 = (float)((float)((float)(pShadows[v11].transMatrix.m[2] * v16[32])
                                    + (float)(pShadows[v11].transMatrix.m[6] * v16[33]))
                            + (float)(v16[34] * pShadows[v11].transMatrix.m[10]))
                    + pShadows[v11].transMatrix.m[14];
                *(_QWORD *)(v15 + 212) = 0i64;
                *((_DWORD *)v15 + 52) = 0;
                *((_DWORD *)v15 + 55) = 1132396544;
                *((_DWORD *)v15 + 44) = LODWORD(v20) ^ _xmm;
                *((float *)v15 + 64) = (float)((float)((float)(pShadows[v11].transMatrix.m[4] * v16[67])
                                                     + (float)(pShadows[v11].transMatrix.m[0] * v16[66]))
                                             + (float)(pShadows[v11].transMatrix.m[8] * v16[68]))
                                     + pShadows[v11].transMatrix.m[12];
                *((float *)v15 + 65) = (float)((float)((float)(pShadows[v11].transMatrix.m[1] * v16[66])
                                                     + (float)(pShadows[v11].transMatrix.m[5] * v16[67]))
                                             + (float)(v16[68] * pShadows[v11].transMatrix.m[9]))
                                     + pShadows[v11].transMatrix.m[13];
                v21 = v16[68];
                v22 = pShadows[v11].transMatrix.m[2] * v16[66];
                v23 = pShadows[v11].transMatrix.m[6] * v16[67];
                v16 += 136;
                v24 = (float)((float)(v22 + v23) + (float)(v21 * pShadows[v11].transMatrix.m[10]))
                    + pShadows[v11].transMatrix.m[14];
                *(_QWORD *)(v15 + 300) = 0i64;
                *((_DWORD *)v15 + 74) = 0;
                *((_DWORD *)v15 + 77) = 1132396544;
                *((_DWORD *)v15 + 66) = LODWORD(v24) ^ _xmm;
                v15 += 352;
                --v17;
              }
              while ( v17 );
            }
            if ( v14 < v13 )
            {
              v25 = v13 - v14;
              v26 = &m_pfVertexBuffer[88 * v14 + 8];
              v27 = (float *)&v9[136 * v14 + 8];
              do
              {
                *((float *)v26 - 2) = (float)((float)((float)(pShadows[v11].transMatrix.m[4] * *(v27 - 1))
                                                    + (float)(pShadows[v11].transMatrix.m[0] * *(v27 - 2)))
                                            + (float)(pShadows[v11].transMatrix.m[8] * *v27))
                                    + pShadows[v11].transMatrix.m[12];
                *((float *)v26 - 1) = (float)((float)((float)(pShadows[v11].transMatrix.m[1] * *(v27 - 2))
                                                    + (float)(pShadows[v11].transMatrix.m[5] * *(v27 - 1)))
                                            + (float)(*v27 * pShadows[v11].transMatrix.m[9]))
                                    + pShadows[v11].transMatrix.m[13];
                v28 = *v27;
                v29 = pShadows[v11].transMatrix.m[2] * *(v27 - 2);
                v30 = pShadows[v11].transMatrix.m[6] * *(v27 - 1);
                v27 += 34;
                v31 = (float)((float)(v29 + v30) + (float)(v28 * pShadows[v11].transMatrix.m[10]))
                    + pShadows[v11].transMatrix.m[14];
                *(_QWORD *)(v26 + 36) = 0i64;
                *((_DWORD *)v26 + 8) = 0;
                *((_DWORD *)v26 + 11) = 1132396544;
                *(_DWORD *)v26 = LODWORD(v31) ^ _xmm;
                v26 += 88;
                --v25;
              }
              while ( v25 );
            }
          }
          ++v5;
          v10 += originalVertexCount;
          ++v11;
        }
        while ( v5 < m_pShadowModels[v3].shadowCount );
        v1 = v34;
      }
      if ( !OGLModel::checkCreateBuffers(pOGLModelShadow) )
      {
        vertexBuffer = pOGLModelShadow->vertexBuffer;
        if ( vertexBuffer )
        {
          if ( pOGLModelShadow->m_pFigure )
          {
            _glewBindBuffer(0x8892u, vertexBuffer);
            _glewBufferData(
              0x8892u,
              88i64 * pOGLModelShadow->m_pFigure->m_usVertexCoordCount,
              pOGLModelShadow->m_pfVertexBuffer,
              0x88E4u);
            _glewBindBuffer(0x8892u, 0);
          }
        }
      }
      v2 = this;
      ++v1;
      ++v3;
      v34 = v1;
    }
    while ( v1 < this->m_shadowModelCount );
  }
}

