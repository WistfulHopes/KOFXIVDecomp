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
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/replace.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/onlinesavedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/taskfunc/generaltask.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/ctasksystem.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/commonpc.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.cpp"

AppMain::ONLINEPROFILE_LOAD_STATE s_OnlineProfileLoadState; // 0x140AC65B8
char buf[5]; // 0x140AC65B0
CSteamID * friendNpId; // 0x140AC65C0
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5EC10
bool firnedLoadingFlag; // 0x140AA4F79
Fw::cTusResult tusResult[4]; // 0x140AC1CF0
long loadFriendNum; // 0x140AC65AC
void(*tusResult$initializer$)(); // 0x140740810
long s_OnlineProfileDataIndex; // 0x140AC65A8
OnlineProfileData * s_pOnlineProfileData; // 0x140AC65A0
long loadFriendIndex; // 0x140AC4C7C
Fw::ONLINEID s_pOnlineProfileDataId; // 0x140AC4C98
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B23
OnlineProfileData s_OnlineProfileDataTemp[100]; // 0x140AC4CA0
Fw::ONLINEID s_OnlineProfileDataId[100]; // 0x140AC6280
bool friendHandle; // 0x140AA37BB
bool liveStatusLoadingFlag[4]; // 0x140AC4BC4
bool AppMain::OnlineProfileDownloadFriendList(); // 0x1401D0910
bool AppMain::OnlineProfileAddFriend(long friendNo, long status); // 0x1401D0C70
bool AppMain::OnlineProfileAddFriendEnd(); // 0x1401D1030
bool AppMain::OnlineProfileDowloadOnlineSaveData(); // 0x1401D10B0
bool AppMain::OnlineProfileRequestOnlineSaveData(const Fw::ONLINEID & userID); // 0x1401D1140
bool AppMain::OnlineProfileUpdateOnlineSaveData(); // 0x1401D1340
void LoadCompleteEventProfile(); // 0x1401D1CC0
void AppMain::ST_ProfileInit(); // 0x1401D1D30
void AppMain::ST_ProfileLoop(); // 0x1401D1E60
void AppMain::ST_ProfileDraw(); // 0x1401C06B0
bool AppMain::UpdateOpponentListFriend(); // 0x1401D21F0//decompilation failure at 140AC65B8!
//decompilation failure at 140AC65B0!
//decompilation failure at 140AC65C0!
//decompilation failure at 140A5EC10!
//decompilation failure at 140AA4F79!
//decompilation failure at 140AC1CF0!
//decompilation failure at 140AC65AC!
//decompilation failure at 140740810!
//decompilation failure at 140AC65A8!
//decompilation failure at 140AC65A0!
//decompilation failure at 140AC4C7C!
//decompilation failure at 140AC4C98!
//decompilation failure at 1408A0B23!
//decompilation failure at 140AC4CA0!
//decompilation failure at 140AC6280!
//decompilation failure at 140AA37BB!
//decompilation failure at 140AC4BC4!
void __fastcall LoadCompleteEventProfile()
{
  __int64 v0; // r8
  int v1; // ecx

  v0 = *(_QWORD *)&AppMain::pApp;
  firnedLoadingFlag = 1;
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

__int64 __fastcall AppMain::OnlineProfileAddFriend(AppMain *this, int friendNo, int status)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  int v10; // er10
  Fw::SceNpTusVariable **p_m_pTusVariableArray; // r9
  int v12; // er8
  Fw::SceNpTusVariable *v13; // rax
  __int64 v14; // rax
  int v15; // eax
  bool v16; // si
  int v17; // edi
  int v18; // edi
  OpponentList *m_OpponentList; // r8
  int v20; // edx
  __int64 v21; // rcx
  OpponentList *v22; // rax
  __int64 v23; // rcx
  OpponentList *v24; // rax
  int v25; // edx
  __int64 v26; // rcx
  OpponentList *v27; // rax
  unsigned __int8 v28; // bl
  char **Name; // rdi
  GfxManager *v30; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value presult; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h]
  Scaleform::GFx::Value ptr; // [rsp+78h] [rbp-90h] BYREF
  Scaleform::GFx::Value val; // [rsp+A8h] [rbp-60h] BYREF
  Scaleform::GFx::Value v37; // [rsp+D8h] [rbp-30h] BYREF
  Scaleform::GFx::Value v38; // [rsp+108h] [rbp+0h] BYREF
  Scaleform::GFx::Value v39; // [rsp+138h] [rbp+30h] BYREF

  v34 = -2i64;
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0xAui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  *(__m128i *)&presult.pNext = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  *(_QWORD *)&presult.Type = 0i64;
  presult.mValue.IValue = 0;
  v7 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v6);
  v9 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, Scaleform::GFx::Value *, _QWORD, __int64))(**(_QWORD **)(v7 + 16)
                                                                                              + 32i64))(
                    *(_QWORD *)(v7 + 16),
                    &presult,
                    (unsigned int)friendNo,
                    4i64);
  v10 = 0;
  if ( loadFriendIndex >= 0 )
  {
    p_m_pTusVariableArray = &tusResult[0].m_Variable.m_pTusVariableArray;
    while ( 1 )
    {
      v8 = 0i64;
      v12 = *((_DWORD *)p_m_pTusVariableArray - 2);
      if ( v12 > 0 )
        break;
LABEL_7:
      ++v10;
      p_m_pTusVariableArray += 3;
      if ( v10 > loadFriendIndex )
        goto LABEL_8;
    }
    v13 = *p_m_pTusVariableArray;
    while ( v9 != v13->ownerId.m_steamid.m_unAll64Bits )
    {
      v8 = (unsigned int)(v8 + 1);
      ++v13;
      if ( (int)v8 >= v12 )
        goto LABEL_7;
    }
  }
LABEL_8:
  v14 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v8);
  v15 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(v14 + 16) + 48i64))(
          *(_QWORD *)(v14 + 16),
          v9);
  v16 = v15 != 0;
  v17 = status - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( v18 )
    {
      if ( v18 != 1 || v15 )
        goto LABEL_28;
      m_OpponentList = this->SaveDataMain.GameData.m_OpponentList;
      v20 = 0;
      v21 = 0i64;
      v22 = this->SaveDataMain.GameData.m_OpponentList;
      while ( v9 != v22->m_OnlineId.data )
      {
        ++v20;
        ++v21;
        ++v22;
        if ( v21 >= 2000 )
          goto LABEL_29;
      }
    }
    else
    {
      if ( !v15 )
      {
LABEL_28:
        v28 = 0;
        goto LABEL_44;
      }
      m_OpponentList = this->SaveDataMain.GameData.m_OpponentList;
      v20 = 0;
      v23 = 0i64;
      v24 = this->SaveDataMain.GameData.m_OpponentList;
      while ( v9 != v24->m_OnlineId.data )
      {
        ++v20;
        ++v23;
        ++v24;
        if ( v23 >= 2000 )
          goto LABEL_29;
      }
    }
    if ( &m_OpponentList[v20] )
      goto LABEL_28;
  }
  else
  {
    v25 = 0;
    v26 = 0i64;
    v27 = this->SaveDataMain.GameData.m_OpponentList;
    while ( v9 != v27->m_OnlineId.data )
    {
      ++v25;
      ++v26;
      ++v27;
      if ( v26 >= 2000 )
        goto LABEL_28;
    }
    if ( !&this->SaveDataMain.GameData.m_OpponentList[v25] )
      goto LABEL_28;
  }
LABEL_29:
  Name = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)v9);
  if ( (ptr.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
    ptr.pObjectInterface = 0i64;
  }
  ptr.Type = 6;
  ptr.mValue.pString = (const char *)Name;
  ui64toa_s(v9, steamID, 0x41ui64, 10);
  if ( (val.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
    val.pObjectInterface = 0i64;
  }
  val.Type = 6;
  val.mValue.pString = steamID;
  if ( (v37.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v37.pObjectInterface, &v37, v37.mValue.pStringManaged);
    v37.pObjectInterface = 0i64;
  }
  v37.Type = VT_Int64;
  v37.mValue.BValue = v16;
  if ( (v38.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v38.pObjectInterface, &v38, v38.mValue.pStringManaged);
    v38.pObjectInterface = 0i64;
  }
  v38.Type = VT_Int64;
  v38.mValue.BValue = 0;
  if ( (v39.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v39.pObjectInterface, &v39, v39.mValue.pStringManaged);
    v39.pObjectInterface = 0i64;
  }
  v39.Type = VT_Float;
  v39.mValue.IValue = -1;
  v30 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    presult.pPrev = (Scaleform::GFx::Value *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)presult.pPrev);
    GfxManager::instance = v30;
  }
  m_ptr = v30->m_GFXMovie.m_movieProxy.m_ptr;
  if ( Scaleform::GFx::Movie::IsAvailable(v30->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject, "_root.AddFriend") )
    Scaleform::GFx::Movie::Invoke(
      m_ptr->m_movie.pObject,
      "_root.AddFriend",
      (Scaleform::GFx::Value *)&presult.8,
      &ptr,
      5u);
  v28 = 1;
LABEL_44:
  if ( (presult.mValue.BValue & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      *(Scaleform::GFx::Value::ObjectInterface **)&presult.Type,
      (Scaleform::GFx::Value *)&presult.8,
      (void *)presult.DataAux);
    *(_QWORD *)&presult.Type = 0i64;
  }
  presult.mValue.IValue = 0;
  `eh vector destructor iterator'(&ptr, 0x30ui64, 0xAui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  return v28;
}

bool __fastcall AppMain::OnlineProfileAddFriendEnd(AppMain *this)
{
  GfxManager *v1; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  bool result; // al
  GfxManager *v4; // [rsp+50h] [rbp+8h]

  v1 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v4 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v4);
    GfxManager::instance = v1;
  }
  m_ptr = v1->m_GFXMovie.m_movieProxy.m_ptr;
  result = Scaleform::GFx::Movie::IsAvailable(v1->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject, "_root.AddFriendEnd");
  if ( result )
    return Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.AddFriendEnd", 0i64, 0i64, 0);
  return result;
}

char __fastcall AppMain::OnlineProfileDowloadOnlineSaveData(AppMain *this)
{
  __int64 v1; // rax

  if ( s_OnlineProfileLoadState != ONLINEPROFILE_LOAD_STATE_LOADCOMPLETE )
    return 0;
  s_pOnlineProfileData = 0i64;
  s_pOnlineProfileDataId.data = s_OnlineProfileDataId[s_OnlineProfileDataIndex].data;
  v1 = s_OnlineProfileDataIndex;
  if ( s_OnlineProfileDataTemp[v1].find )
  {
    if ( !s_OnlineProfileDataTemp[v1].notplay )
      s_pOnlineProfileData = &s_OnlineProfileDataTemp[v1];
    s_OnlineProfileDataIndex = (s_OnlineProfileDataIndex + 1) % -100;
  }
  s_OnlineProfileLoadState = ONLINEPROFILE_LOAD_STATE_NONE;
  return 1;
}

bool __fastcall AppMain::OnlineProfileDownloadFriendList(AppMain *this, __int64 a2)
{
  bool result; // al
  __int64 v4; // rbx
  char v5; // dl
  int v6; // er9
  int v7; // ecx
  __m128i v8; // xmm2
  __m128i v9; // xmm1
  int v10; // ecx
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm1
  __m128i v14; // xmm1
  __m128i v15; // xmm1
  bool *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  unsigned __int64 v20; // r15
  int v21; // ebx
  bool *v22; // r8
  __int64 v23; // rdx
  bool v24; // cl
  int v25; // eax
  unsigned int v26; // eax
  unsigned __int64 v27; // rdi
  CSteamID *v28; // rax
  __int64 v29; // rdx
  CSteamID v30; // rcx
  int v31; // ebx
  unsigned int v32; // ebp
  __int64 v33; // r14
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rsi
  _QWORD *v37; // rax
  CSteamID *v38; // r8
  __int64 v39; // rax
  CSteamID *v40; // rax
  CSteamID *v41; // [rsp+68h] [rbp+10h] BYREF
  char v42; // [rsp+70h] [rbp+18h] BYREF

  if ( !firnedLoadingFlag )
    return 0;
  if ( friendHandle )
  {
    v4 = 0i64;
    v5 = 0;
    v6 = 0;
    v7 = loadFriendIndex + 1;
    if ( loadFriendIndex < 0 )
      goto LABEL_14;
    if ( (unsigned int)v7 >= 0x20 )
    {
      v8 = 0i64;
      v9 = 0i64;
      v10 = v7 % 32;
      do
      {
        v6 += 32;
        v8 = _mm_or_si128(_mm_loadu_si128((const __m128i *)&liveStatusLoadingFlag[v4]), v8);
        v11 = _mm_loadu_si128((const __m128i *)&liveStatusLoadingFlag[v4 + 16]);
        v4 += 32i64;
        v9 = _mm_or_si128(v9, v11);
      }
      while ( v4 <= loadFriendIndex - v10 );
      v12 = _mm_or_si128(v9, v8);
      v13 = _mm_or_si128(v12, _mm_srli_si128(v12, 8));
      v14 = _mm_or_si128(v13, _mm_srli_si128(v13, 4));
      v15 = _mm_or_si128(v14, _mm_srli_si128(v14, 2));
      v5 = _mm_cvtsi128_si32(_mm_or_si128(v15, _mm_srli_si128(v15, 1)));
    }
    if ( v6 <= loadFriendIndex )
    {
      v16 = &liveStatusLoadingFlag[v6];
      v17 = (unsigned int)(loadFriendIndex - v6 + 1);
      do
      {
        v5 |= *v16++;
        --v17;
      }
      while ( v17 );
    }
    if ( v5 )
    {
      return 0;
    }
    else
    {
LABEL_14:
      result = 1;
      firnedLoadingFlag = 0;
    }
  }
  else
  {
    friendHandle = 1;
    v18 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, a2);
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v18 + 16) + 24i64))(*(_QWORD *)(v18 + 16), 4i64);
    v20 = v19;
    if ( v19 > 0 )
    {
      v26 = 8 * v19;
      v27 = v20;
      if ( !is_mul_ok(v20, 8ui64) )
        v26 = -1;
      v28 = (CSteamID *)aligned_malloc(v26, 0x20ui64);
      v31 = 0;
      v41 = v28;
      if ( v28 )
      {
        if ( (_DWORD)v20 )
        {
          v30.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)((char *)&v28->m_steamid.m_unAll64Bits + 4);
          do
          {
            **(_DWORD **)&v30.m_steamid.m_comp &= 0xFF0FFFFF;
            *(_BYTE *)(*(_QWORD *)&v30.m_steamid.m_comp + 3i64) = 0;
            **(_DWORD **)&v30.m_steamid.m_comp &= 0xFFF00000;
            *(_DWORD *)(*(_QWORD *)&v30.m_steamid.m_comp - 4i64) = 0;
            *(_QWORD *)&v30.m_steamid.m_comp += 8i64;
            --v27;
          }
          while ( v27 );
        }
      }
      else
      {
        v28 = 0i64;
      }
      friendNpId = v28;
      v32 = 0;
      if ( (int)v20 <= 0 )
        goto LABEL_39;
      v33 = 0i64;
      do
      {
        v34 = *(_QWORD *)(SteamInternal_ContextInit(
                            &`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext,
                            v29)
                        + 16);
        v36 = *(_QWORD *)(SteamInternal_ContextInit(
                            &`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext,
                            v35)
                        + 16);
        v37 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, CSteamID **, _QWORD, __int64))(*(_QWORD *)v34 + 32i64))(
                          v34,
                          &v41,
                          v32,
                          4i64);
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v36 + 48i64))(v36, *v37) == 1 )
        {
          v39 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v29);
          v40 = (CSteamID *)(*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, __int64))(**(_QWORD **)(v39 + 16) + 32i64))(
                              *(_QWORD *)(v39 + 16),
                              &v42,
                              v32,
                              4i64);
          ++v31;
          v30.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)v40->m_steamid.m_unAll64Bits;
          friendNpId[v33++] = (CSteamID)v40->m_steamid.m_comp;
        }
        ++v32;
      }
      while ( (int)v32 < (int)v20 );
      if ( v31 <= 0 )
      {
LABEL_39:
        if ( (unsigned __int64)loadFriendIndex >= 4 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD))_report_rangecheckfailure)(
            (CSteamID::SteamID_t)v30.m_steamid.m_comp,
            v29);
          JUMPOUT(0x1401D0C60i64);
        }
        liveStatusLoadingFlag[loadFriendIndex] = 0;
      }
      else
      {
        AppMain::GetLiveStreamingStatusFlag(
          this,
          v31,
          v38,
          &liveStatusLoadingFlag[loadFriendIndex],
          &tusResult[loadFriendIndex]);
      }
      loadFriendNum += v20;
      return 0;
    }
    else
    {
      v21 = 0;
      if ( loadFriendIndex <= 0 )
        goto LABEL_23;
      v22 = liveStatusLoadingFlag;
      v23 = (unsigned int)loadFriendIndex;
      do
      {
        v24 = *v22;
        v25 = v21 + 1;
        ++v22;
        if ( !v24 )
          v25 = v21;
        v21 = v25;
        --v23;
      }
      while ( v23 );
      if ( v25 >= loadFriendIndex )
      {
LABEL_23:
        result = 1;
        firnedLoadingFlag = 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}

char __fastcall AppMain::OnlineProfileRequestOnlineSaveData(AppMain *this, const Fw::ONLINEID *userID, int a3, int a4)
{
  unsigned __int64 data; // rdi
  Fw::ONLINEID *v5; // rax
  OnlineProfileData *v7; // r12
  GENERAL_TASK *v8; // rax
  GENERAL_TASK *v9; // r14
  char *pBuffer; // r15
  _DWORD *v11; // rax
  void *v12; // rax
  bool v13; // r8
  unsigned __int64 *v14; // rcx
  void **v15; // rbx
  __m128i si128; // xmm3
  __int64 v17; // rdx
  __m128i *v18; // rax
  __m128i v19; // xmm1
  __int64 v20; // rcx
  int MultiSlotVariable; // eax
  void *v22; // rcx
  int iStat; // eax
  GENERAL_TASK *v25; // [rsp+20h] [rbp-38h]

  data = userID->data;
  v5 = s_OnlineProfileDataId;
  while ( v5->data != data )
  {
    if ( (__int64)++v5 >= (__int64)&s_pOnlineProfileData )
    {
      v7 = &s_OnlineProfileDataTemp[s_OnlineProfileDataIndex];
      if ( v7 )
      {
        v8 = CTaskSystem::Entry(
               &this->m_TS,
               (int (__fastcall *)(GENERAL_TASK *))GT_TusGetOnlineProfileData,
               a3,
               a4,
               v25);
        v9 = v8;
        if ( v8 )
        {
          pBuffer = (char *)v8->pBuffer;
          v11 = aligned_malloc(8ui64, 0x20ui64);
          if ( v11 )
          {
            v11[1] &= 0xFF0FFFFF;
            *((_BYTE *)v11 + 7) = 0;
            v11[1] &= 0xFFF00000;
            *v11 = 0;
          }
          *((_QWORD *)pBuffer + 3) = v11;
          v12 = aligned_malloc(0x30ui64, 0x20ui64);
          v14 = (unsigned __int64 *)*((_QWORD *)pBuffer + 3);
          v15 = (void **)(pBuffer + 16);
          *((_QWORD *)pBuffer + 2) = v12;
          if ( !v14 || !v12 )
            goto LABEL_27;
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          v17 = 0i64;
          *v14 = data;
          *((_DWORD *)pBuffer + 2) = 12;
          v18 = (__m128i *)*v15;
          if ( *v15 > v15 || (char *)*v15 + 44 < (char *)v15 )
          {
            v19 = _mm_add_epi32(_mm_add_epi32(_mm_load_si128((const __m128i *)&_xmm), si128), (__m128i)_xmm);
            v17 = 8i64;
            *v18 = _mm_add_epi32(si128, (__m128i)_xmm);
            v18[1] = v19;
          }
          if ( (int)v17 < 12i64 )
          {
            v20 = 4i64 * (int)v17;
            LODWORD(v17) = v17 + 12;
            do
            {
              *(_DWORD *)((char *)*v15 + v20) = v17;
              v17 = (unsigned int)(v17 + 1);
              v20 += 4i64;
            }
            while ( v20 < 48 );
          }
          *((_QWORD *)pBuffer + 9) = v7;
          *((_QWORD *)pBuffer + 10) = &s_OnlineProfileLoadState;
          s_OnlineProfileLoadState = ONLINEPROFILE_LOAD_STATE_LOAD;
          MultiSlotVariable = Fw::TitleStorageSystem::TusBeginReadMultiSlotVariable(
                                (const Fw::cTusReadRequest *)(pBuffer + 8),
                                (Fw::HeapMemory *)v17,
                                v13);
          *(_DWORD *)pBuffer = MultiSlotVariable;
          if ( !MultiSlotVariable )
          {
LABEL_27:
            if ( *v15 )
            {
              aligned_free(*v15);
              *v15 = 0i64;
            }
            v22 = (void *)*((_QWORD *)pBuffer + 3);
            if ( v22 )
            {
              aligned_free(v22);
              *((_QWORD *)pBuffer + 3) = 0i64;
            }
            iStat = v9->iStat;
            if ( (iStat & 1) != 0 )
              v9->iStat = iStat | 6;
          }
        }
      }
      s_OnlineProfileDataId[s_OnlineProfileDataIndex] = (Fw::ONLINEID)userID->data;
      return 1;
    }
  }
  return 1;
}

_BOOL8 __fastcall AppMain::OnlineProfileUpdateOnlineSaveData(AppMain *this)
{
  Scaleform::GFx::Value::ObjectInterface *v2; // rcx
  bool BValue; // al
  bool v4; // bl
  char **Name; // rax
  const char *CString; // rbx
  GfxManager *v7; // rax
  extension::gfxi_detail::MovieProxy *v8; // rbx
  int m_ProfileIcon; // ebx
  int m_Rank; // ebx
  int m_MyNetWorkTitle; // ebx
  unsigned __int8 m_Country; // cl
  const char *iso3166_3; // rcx
  char v14; // al
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // edi
  int m_RankRate; // ebx
  int m_RankSuccesRate; // ebx
  int m_RankMatchLosePublication; // ebx
  int m_RankMatchDrawPublication; // ebx
  int m_RankMatchRatePublication; // ebx
  int v25; // er8
  __int64 v26; // rdx
  OpponentList *m_OpponentList; // rcx
  OpponentList *v28; // rcx
  bool v29; // r14
  int m_BattleWinNum; // ebx
  int m_BattleLoseNum; // edi
  int m_BattleDrawNum; // esi
  int v33; // er15
  int m_TrainingNum; // er12
  float v35; // xmm1_4
  int m_RankMatchDisConnectMarker; // ebx
  GfxManager *v37; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value presult; // [rsp+38h] [rbp-D0h] BYREF
  AgString v41; // [rsp+70h] [rbp-98h] BYREF
  __int64 v42; // [rsp+80h] [rbp-88h]
  Scaleform::GFx::Value ptr; // [rsp+88h] [rbp-80h] BYREF
  Scaleform::GFx::Value val; // [rsp+B8h] [rbp-50h] BYREF
  Scaleform::GFx::Value v45; // [rsp+E8h] [rbp-20h] BYREF
  Scaleform::GFx::Value v46; // [rsp+118h] [rbp+10h] BYREF
  Scaleform::GFx::Value v47; // [rsp+148h] [rbp+40h] BYREF
  Scaleform::GFx::Value v48; // [rsp+178h] [rbp+70h] BYREF
  Scaleform::GFx::Value v49; // [rsp+1A8h] [rbp+A0h] BYREF
  Scaleform::GFx::Value v50; // [rsp+1D8h] [rbp+D0h] BYREF
  Scaleform::GFx::Value v51; // [rsp+208h] [rbp+100h] BYREF
  Scaleform::GFx::Value v52; // [rsp+238h] [rbp+130h] BYREF
  Scaleform::GFx::Value v53; // [rsp+268h] [rbp+160h] BYREF
  Scaleform::GFx::Value v54; // [rsp+298h] [rbp+190h] BYREF
  Scaleform::GFx::Value v55; // [rsp+2C8h] [rbp+1C0h] BYREF
  Scaleform::GFx::Value v56; // [rsp+2F8h] [rbp+1F0h] BYREF
  Scaleform::GFx::Value v57; // [rsp+328h] [rbp+220h] BYREF
  Scaleform::GFx::Value v58; // [rsp+358h] [rbp+250h] BYREF
  Scaleform::GFx::Value v59; // [rsp+388h] [rbp+280h] BYREF
  Scaleform::GFx::Value v60; // [rsp+3B8h] [rbp+2B0h] BYREF
  Scaleform::GFx::Value v61; // [rsp+3E8h] [rbp+2E0h] BYREF
  Scaleform::GFx::Value v62; // [rsp+418h] [rbp+310h] BYREF
  Scaleform::GFx::Value v63; // [rsp+448h] [rbp+340h] BYREF
  Scaleform::GFx::Value v64; // [rsp+478h] [rbp+370h] BYREF

  v42 = -2i64;
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0x28ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  *(__m128i *)&presult.pNext = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v2 = 0i64;
  *(_QWORD *)&presult.Type = 0i64;
  BValue = 0;
  presult.mValue.IValue = 0;
  if ( s_pOnlineProfileDataId.data )
  {
    Name = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)s_pOnlineProfileDataId.data);
    AgString::AgString(&v41, (const char *)Name, -1);
    CString = AgString::getCString(&v41);
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = 6;
    ptr.mValue.pString = CString;
    if ( s_pOnlineProfileData )
    {
      m_ProfileIcon = s_pOnlineProfileData->m_ProfileIcon;
      if ( (val.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
        val.pObjectInterface = 0i64;
      }
      val.Type = VT_Float;
      val.mValue.IValue = m_ProfileIcon;
      m_Rank = s_pOnlineProfileData->m_Rank;
      if ( (v45.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v45.pObjectInterface, &v45, v45.mValue.pStringManaged);
        v45.pObjectInterface = 0i64;
      }
      v45.Type = VT_Float;
      v45.mValue.IValue = m_Rank;
      m_MyNetWorkTitle = s_pOnlineProfileData->m_MyNetWorkTitle;
      if ( (v46.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v46.pObjectInterface, &v46, v46.mValue.pStringManaged);
        v46.pObjectInterface = 0i64;
      }
      v46.Type = VT_Float;
      v46.mValue.IValue = m_MyNetWorkTitle;
      m_Country = s_pOnlineProfileData->m_Country;
      if ( m_Country >= 0x47u )
        iso3166_3 = Fw::NetworkCommon::m_ContryList[0].iso3166_3;
      else
        iso3166_3 = Fw::NetworkCommon::m_ContryList[m_Country].iso3166_3;
      *(_WORD *)buf = *(_WORD *)iso3166_3;
      v14 = iso3166_3[2];
      buf[3] = 0;
      buf[2] = v14;
      if ( (v47.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v47.pObjectInterface, &v47, v47.mValue.pStringManaged);
        v47.pObjectInterface = 0i64;
      }
      v47.Type = 6;
      v47.mValue.pString = buf;
      v15 = (LOWORD(s_pOnlineProfileData->m_RankMatchRankPoint) ^ 0xA35E ^ (unsigned __int16)((s_pOnlineProfileData->m_RankMatchRankPoint ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ s_pOnlineProfileData->m_RankMatchRankPoint ^ 0x7B48A35E ^ (((LOWORD(s_pOnlineProfileData->m_RankMatchRankPoint) ^ 0xA35E ^ (unsigned __int16)((s_pOnlineProfileData->m_RankMatchRankPoint ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      if ( (v48.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v48.pObjectInterface, &v48, v48.mValue.pStringManaged);
        v48.pObjectInterface = 0i64;
      }
      v48.Type = VT_Float;
      v48.mValue.IValue = (v15 ^ (v15 >> 7)) & 0x550055 ^ v15 ^ (((v15 ^ (v15 >> 7)) & 0x550055) << 7);
      v16 = (LOWORD(s_pOnlineProfileData->m_RankMatchWin) ^ 0xA35E ^ (unsigned __int16)((s_pOnlineProfileData->m_RankMatchWin ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ s_pOnlineProfileData->m_RankMatchWin ^ 0x7B48A35E ^ (((LOWORD(s_pOnlineProfileData->m_RankMatchWin) ^ 0xA35E ^ (unsigned __int16)((s_pOnlineProfileData->m_RankMatchWin ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      if ( (v49.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v49.pObjectInterface, &v49, v49.mValue.pStringManaged);
        v49.pObjectInterface = 0i64;
      }
      v49.Type = VT_Float;
      v49.mValue.IValue = (v16 ^ (v16 >> 7)) & 0x550055 ^ v16 ^ (((v16 ^ (v16 >> 7)) & 0x550055) << 7);
      v17 = (LOWORD(s_pOnlineProfileData->m_RankMatchLose) ^ 0xA35E ^ (unsigned __int16)((s_pOnlineProfileData->m_RankMatchLose ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ s_pOnlineProfileData->m_RankMatchLose ^ 0x7B48A35E ^ (((LOWORD(s_pOnlineProfileData->m_RankMatchLose) ^ 0xA35E ^ (unsigned __int16)((s_pOnlineProfileData->m_RankMatchLose ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      if ( (v50.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v50.pObjectInterface, &v50, v50.mValue.pStringManaged);
        v50.pObjectInterface = 0i64;
      }
      v50.Type = VT_Float;
      v50.mValue.IValue = (v17 ^ (v17 >> 7)) & 0x550055 ^ v17 ^ (((v17 ^ (v17 >> 7)) & 0x550055) << 7);
      v18 = (LOWORD(s_pOnlineProfileData->m_RankMatchMaxWins) ^ 0xA35E ^ (unsigned __int16)((s_pOnlineProfileData->m_RankMatchMaxWins ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ s_pOnlineProfileData->m_RankMatchMaxWins ^ 0x7B48A35E ^ (((LOWORD(s_pOnlineProfileData->m_RankMatchMaxWins) ^ 0xA35E ^ (unsigned __int16)((s_pOnlineProfileData->m_RankMatchMaxWins ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      if ( (v51.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v51.pObjectInterface, &v51, v51.mValue.pStringManaged);
        v51.pObjectInterface = 0i64;
      }
      v51.Type = VT_Float;
      v51.mValue.IValue = (v18 ^ (v18 >> 7)) & 0x550055 ^ v18 ^ (((v18 ^ (v18 >> 7)) & 0x550055) << 7);
      v19 = (LOWORD(s_pOnlineProfileData->m_RankMatchDraw) ^ 0xA35E ^ (unsigned __int16)((s_pOnlineProfileData->m_RankMatchDraw ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ s_pOnlineProfileData->m_RankMatchDraw ^ 0x7B48A35E ^ (((LOWORD(s_pOnlineProfileData->m_RankMatchDraw) ^ 0xA35E ^ (unsigned __int16)((s_pOnlineProfileData->m_RankMatchDraw ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      if ( (v52.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v52.pObjectInterface, &v52, v52.mValue.pStringManaged);
        v52.pObjectInterface = 0i64;
      }
      v52.Type = VT_Float;
      v52.mValue.IValue = (v19 ^ (v19 >> 7)) & 0x550055 ^ v19 ^ (((v19 ^ (v19 >> 7)) & 0x550055) << 7);
      m_RankRate = (int)s_pOnlineProfileData->m_RankRate;
      if ( (v53.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v53.pObjectInterface, &v53, v53.mValue.pStringManaged);
        v53.pObjectInterface = 0i64;
      }
      v53.Type = VT_Float;
      v53.mValue.IValue = m_RankRate;
      m_RankSuccesRate = (int)s_pOnlineProfileData->m_RankSuccesRate;
      if ( (v54.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v54.pObjectInterface, &v54, v54.mValue.pStringManaged);
        v54.pObjectInterface = 0i64;
      }
      v54.Type = VT_Float;
      v54.mValue.IValue = m_RankSuccesRate;
      m_RankMatchLosePublication = s_pOnlineProfileData->m_RankMatchLosePublication;
      if ( (v55.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v55.pObjectInterface, &v55, v55.mValue.pStringManaged);
        v55.pObjectInterface = 0i64;
      }
      v55.Type = VT_Float;
      v55.mValue.IValue = m_RankMatchLosePublication;
      m_RankMatchDrawPublication = s_pOnlineProfileData->m_RankMatchDrawPublication;
      if ( (v56.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v56.pObjectInterface, &v56, v56.mValue.pStringManaged);
        v56.pObjectInterface = 0i64;
      }
      v56.Type = VT_Float;
      v56.mValue.IValue = m_RankMatchDrawPublication;
      m_RankMatchRatePublication = s_pOnlineProfileData->m_RankMatchRatePublication;
      if ( (v57.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v57.pObjectInterface, &v57, v57.mValue.pStringManaged);
        v57.pObjectInterface = 0i64;
      }
      v57.Type = VT_Float;
      v57.mValue.IValue = m_RankMatchRatePublication;
      v25 = 0;
      v26 = 0i64;
      m_OpponentList = this->SaveDataMain.GameData.m_OpponentList;
      while ( s_pOnlineProfileDataId.data != m_OpponentList->m_OnlineId.data )
      {
        ++v25;
        ++v26;
        ++m_OpponentList;
        if ( v26 >= 2000 )
        {
          v28 = 0i64;
          goto LABEL_47;
        }
      }
      v28 = &this->SaveDataMain.GameData.m_OpponentList[v25];
LABEL_47:
      v29 = 0;
      m_BattleWinNum = 0;
      m_BattleLoseNum = 0;
      m_BattleDrawNum = 0;
      v33 = 0;
      m_TrainingNum = 0;
      if ( v28 )
      {
        v29 = 1;
        m_BattleWinNum = v28->m_BattleWinNum;
        m_BattleLoseNum = v28->m_BattleLoseNum;
        m_BattleDrawNum = v28->m_BattleDrawNum;
        v35 = 0.0;
        if ( m_BattleWinNum + m_BattleDrawNum + m_BattleLoseNum )
          v35 = (float)m_BattleWinNum / (float)(m_BattleWinNum + m_BattleDrawNum + m_BattleLoseNum);
        v33 = (int)(float)(v35 * 10000.0);
        m_TrainingNum = v28->m_TrainingNum;
      }
      if ( (v58.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v58.pObjectInterface, &v58, v58.mValue.pStringManaged);
        v58.pObjectInterface = 0i64;
      }
      v58.Type = VT_Int64;
      v58.mValue.BValue = v29;
      if ( (v59.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v59.pObjectInterface, &v59, v59.mValue.pStringManaged);
        v59.pObjectInterface = 0i64;
      }
      v59.Type = VT_Float;
      v59.mValue.IValue = m_BattleWinNum;
      if ( (v60.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v60.pObjectInterface, &v60, v60.mValue.pStringManaged);
        v60.pObjectInterface = 0i64;
      }
      v60.Type = VT_Float;
      v60.mValue.IValue = m_BattleLoseNum;
      if ( (v61.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v61.pObjectInterface, &v61, v61.mValue.pStringManaged);
        v61.pObjectInterface = 0i64;
      }
      v61.Type = VT_Float;
      v61.mValue.IValue = m_BattleDrawNum;
      if ( (v62.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v62.pObjectInterface, &v62, v62.mValue.pStringManaged);
        v62.pObjectInterface = 0i64;
      }
      v62.Type = VT_Float;
      v62.mValue.IValue = v33;
      if ( (v63.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v63.pObjectInterface, &v63, v63.mValue.pStringManaged);
        v63.pObjectInterface = 0i64;
      }
      v63.Type = VT_Float;
      v63.mValue.IValue = m_TrainingNum;
      m_RankMatchDisConnectMarker = s_pOnlineProfileData->m_RankMatchDisConnectMarker;
      if ( (v64.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v64.pObjectInterface, &v64, v64.mValue.pStringManaged);
        v64.pObjectInterface = 0i64;
      }
      v64.Type = VT_Float;
      v64.mValue.IValue = m_RankMatchDisConnectMarker;
      v37 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        presult.pPrev = (Scaleform::GFx::Value *)operator new(0x108ui64);
        GfxManager::GfxManager((GfxManager *)presult.pPrev);
        GfxManager::instance = v37;
      }
      m_ptr = v37->m_GFXMovie.m_movieProxy.m_ptr;
      v4 = Scaleform::GFx::Movie::IsAvailable(
             v37->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
             "_root.UpdateOnlineSaveData")
        && Scaleform::GFx::Movie::Invoke(
             m_ptr->m_movie.pObject,
             "_root.UpdateOnlineSaveData",
             (Scaleform::GFx::Value *)&presult.8,
             &ptr,
             0x16u);
    }
    else
    {
      v7 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        presult.pPrev = (Scaleform::GFx::Value *)operator new(0x108ui64);
        GfxManager::GfxManager((GfxManager *)presult.pPrev);
        GfxManager::instance = v7;
      }
      v8 = v7->m_GFXMovie.m_movieProxy.m_ptr;
      if ( Scaleform::GFx::Movie::IsAvailable(
             v7->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
             "_root.UpdateOnlineSaveDataNone") )
      {
        Scaleform::GFx::Movie::Invoke(
          v8->m_movie.pObject,
          "_root.UpdateOnlineSaveDataNone",
          (Scaleform::GFx::Value *)&presult.8,
          &ptr,
          1u);
      }
      v4 = 0;
    }
    AgString::~AgString(&v41);
    BValue = presult.mValue.BValue;
    v2 = *(Scaleform::GFx::Value::ObjectInterface **)&presult.Type;
  }
  else
  {
    v4 = 0;
  }
  if ( (BValue & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      v2,
      (Scaleform::GFx::Value *)&presult.8,
      (void *)presult.DataAux);
    *(_QWORD *)&presult.Type = 0i64;
  }
  presult.mValue.IValue = 0;
  `eh vector destructor iterator'(&ptr, 0x30ui64, 0x28ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  return v4;
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

void __fastcall AppMain::ST_ProfileInit(AppMain *this, __int64 a2, __int64 a3, int a4)
{
  GfxManager *v5; // rax
  UserGameOperation *v6; // rax
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v5;
  }
  GfxManager::LoadRequest(v5, FILE_17_PROFILE, LoadCompleteEventProfile, a4);
  v6 = UserGameOperation::Instance();
  UserGameOperation::clear(v6);
  loadFriendIndex = 0;
  loadFriendNum = 0;
  friendHandle = 0;
  firnedLoadingFlag = 0;
  s_OnlineProfileLoadState = ONLINEPROFILE_LOAD_STATE_NONE;
  memset(s_OnlineProfileDataTemp, 0, sizeof(s_OnlineProfileDataTemp));
  memset(s_OnlineProfileDataId, 0, sizeof(s_OnlineProfileDataId));
  s_OnlineProfileDataIndex = 0;
  s_pOnlineProfileData = 0i64;
  *(_DWORD *)liveStatusLoadingFlag = 0;
  memset(tusResult, 0, sizeof(tusResult));
  if ( friendNpId )
  {
    aligned_free(friendNpId);
    friendNpId = 0i64;
  }
  this->iReserveScene = -1;
  this->m_FuncST = 94;
  this->m_FuncBT = 95;
  AppMain::SceneFunc(this, 94);
  this->m_FuncExit = 93;
}

void __fastcall AppMain::ST_ProfileLoop(AppMain *this, __int64 a2)
{
  GfxManager *v3; // r14
  GfxManager *v4; // rax
  AppMain *v5; // rcx
  int v6; // esi
  int i; // ebp
  int j; // ebx
  GfxManager *v9; // rbx
  GfxManager *v10; // rax
  EasyIndicator *v11; // rsi
  GfxManager *v12; // rax
  GfxManager::RESULT_CODE m_QuitResultCode; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  int v16; // ecx
  GfxManager *v17; // [rsp+50h] [rbp+8h]
  GfxManager *v18; // [rsp+50h] [rbp+8h]
  GfxManager *v19; // [rsp+50h] [rbp+8h]

  v3 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v17 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v17);
    v3 = v4;
    GfxManager::instance = v4;
  }
  if ( AppMain::OnlineProfileDownloadFriendList(this, a2) )
  {
    v6 = 0;
    for ( i = 1; i <= 3; ++i )
    {
      for ( j = 0; j < loadFriendNum; ++j )
      {
        if ( (unsigned __int8)AppMain::OnlineProfileAddFriend(this, j, i) )
        {
          if ( ++v6 >= 100 )
            break;
        }
      }
    }
    AppMain::OnlineProfileAddFriendEnd(v5);
  }
  if ( AppMain::OnlineProfileDowloadOnlineSaveData(v5) )
    AppMain::OnlineProfileUpdateOnlineSaveData(this);
  SyncMenuImage::Update(&this->m_SyncMenuBG);
  v9 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v18 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v18);
    v9 = v10;
    GfxManager::instance = v10;
  }
  if ( v9->m_SystemMessageState != SYSTEM_MESSAGE_OPEN || !v9->m_SystemMessageLock )
  {
    if ( dword_140ACDF74 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
    {
      Init_thread_header(&dword_140ACDF74);
      if ( dword_140ACDF74 == -1 )
      {
        *(_WORD *)&the_instance_0.m_isAdvanceCalled = 0;
        the_instance_0.m_lastTick = -1i64;
        the_instance_0.m_maxDeltaT = FLOAT_0_31999999;
        the_instance_0.m_movieListEnd.m_Prev = &the_instance_0.m_movieListEnd;
        the_instance_0.m_movieListEnd.m_Next = &the_instance_0.m_movieListEnd;
        atexit(extension::GFXIMovieStack::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
        Init_thread_footer(&dword_140ACDF74);
      }
    }
    extension::GFXIMovieStack::advance(&the_instance_0, 0.016666668);
    v9 = GfxManager::instance;
  }
  if ( firnedLoadingFlag || s_OnlineProfileLoadState == ONLINEPROFILE_LOAD_STATE_LOAD )
  {
    v11 = EasyIndicator::instance;
    if ( !EasyIndicator::instance )
    {
      v11 = (EasyIndicator *)operator new(0x150ui64);
      memset(v11->m_IndicatorStack, 0, sizeof(v11->m_IndicatorStack));
      v11->m_Image = 0i64;
      v11->m_DrawCount = 0;
      EasyIndicator::instance = v11;
      v9 = GfxManager::instance;
    }
    EasyIndicator::RequestDraw(v11, 1760 * GAME_SCREEN_WIDTH / 1920, 920 * GAME_SCREEN_HEIGHT / 1080, TYPE_CONNECTING);
  }
  if ( v3->m_bQuitGFXMovie )
  {
    if ( !v9 )
    {
      v19 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v19);
      v9 = v12;
      GfxManager::instance = v12;
    }
    m_QuitResultCode = v9->m_QuitResultCode;
    if ( m_QuitResultCode == RESULT_CODE_CANCEL )
    {
      this->m_FadeST = 100;
    }
    else
    {
      v14 = m_QuitResultCode - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            if ( v16 != 1 )
              return;
            this->m_PrevScene = 92;
            v9->m_MenuCursor[8] = -1;
            this->m_FadeST = 80;
          }
          else
          {
            this->m_PrevScene = 92;
            v9->m_MenuCursor[7] = -1;
            this->m_FadeST = 80;
          }
        }
        else
        {
          this->m_PrevScene = 92;
          v9->m_MenuCursor[6] = -1;
          this->m_FadeST = 80;
        }
      }
      else
      {
        this->m_PrevScene = 92;
        this->m_FadeST = 76;
      }
    }
    this->iReserveScene = -1;
    this->m_FuncST = 0;
    this->m_FadeExitFunc = 93;
    this->m_bExitFuncWaitFrame = 0;
    if ( this->m_FuncFT != 170 )
      this->m_FuncFT = 172;
  }
}

__int64 __fastcall AppMain::UpdateOpponentListFriend(AppMain *this, __int64 a2)
{
  unsigned __int8 v2; // si
  bool *p_m_FriendFlag; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax

  v2 = 0;
  p_m_FriendFlag = &this->SaveDataMain.GameData.m_OpponentList[0].m_FriendFlag;
  v4 = 2000i64;
  do
  {
    if ( *((_QWORD *)p_m_FriendFlag - 3) )
    {
      v5 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, a2);
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 16) + 40i64))(
             *(_QWORD *)(v5 + 16),
             *((_QWORD *)p_m_FriendFlag - 4)) == 3
        && !*p_m_FriendFlag )
      {
        *p_m_FriendFlag = 1;
        v2 = 1;
      }
    }
    p_m_FriendFlag += 40;
    --v4;
  }
  while ( v4 );
  return v2;
}

