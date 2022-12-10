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
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/onlinesample/st_onlineroom.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/commonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/exutil.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/auxscript.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/invitationcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/invitationsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imetargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imetargetpad.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imetargetkb.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingtargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/menudata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/menuutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/scene_roommember.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/roommembers.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"

enum SCENE_ROOM
{
	LOAD = 0,
	COMPLETE = 1,
};
bool MikeFlagBuffer[12]; // 0x140AC65F8
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B2A
void(*argID$initializer$)(); // 0x140740828
const SCENE_ROOM LOAD = 0x0;
bool ChatOffFlagBuffer[12]; // 0x140AC65E8
bool s_CursorSetFlag; // 0x140A97648
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5F2D0
Scaleform::GFx::Value argID[16]; // 0x140AC1D50
unsigned long long s_TextChatTick[8]; // 0x140AC6610
void LoadCompleteEventRoom(); // 0x140202370
void AppMain::ST_RoomInit(); // 0x1402023E0
void AppMain::ST_RoomExit(); // 0x1402029B0
std::string ReplaceString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > tgt, std::basic_string<char,std::char_traits<char>,std::allocator<char> > a, std::basic_string<char,std::char_traits<char>,std::allocator<char> > b); // 0x140202A30
void AppMain::ST_RoomLoop(); // 0x140202B70
void AppMain::ST_RoomDraw(); // 0x1401C06B0
void AppMain::ST_RoomSeatSit(long seatid, unsigned char waitstate); // 0x1402037A0
void AppMain::ST_RoomSeatLeave(); // 0x140203A80
void AppMain::ST_RoomSeatBattleReady(); // 0x140203B30
void AppMain::ST_RoomSeatBattleReadyCancel(); // 0x140203D80
void AppMain::ST_RoomTableBattleTypeChange(NETWORK_ROOM_BATTLE_TYPE battleType); // 0x140203EA0
void AppMain::ST_RoomSendSeatFlag(char myNo, unsigned char seatNo, SEAT_FLAG seatFlag, BATTLE_WAIT_STATE battleWaitState, NETWORK_ROOM_BATTLE_TYPE battleType); // 0x140203F50
void AppMain::ST_RoomInviteFriend(); // 0x140204100
bool AppMain::ST_RoomMemberInfoChangeCheck(long seatNumMax); // 0x1402041C0//decompilation failure at 140AC65F8!
//decompilation failure at 1408A0B2A!
//decompilation failure at 140740828!
//decompilation failure at 140AC65E8!
//decompilation failure at 140A97648!
//decompilation failure at 140A5F2D0!
//decompilation failure at 140AC1D50!
//decompilation failure at 140AC6610!
void __fastcall LoadCompleteEventRoom()
{
  __int64 v0; // rbx
  bool v1; // zf

  v0 = *(_QWORD *)&AppMain::pApp;
  v1 = *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 38560i64) == 0;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 11084i64) = 1;
  if ( !v1
    && s_soundIndex.m_keys[35].m_sharedBuffer.m_ptr
    && !extension::SoundList::playSEByName((extension::SoundList *)(v0 + 2197144), &s_soundIndex.m_keys[35], 0i64) )
  {
    extension::SoundList::playSEByName((extension::SoundList *)(v0 + 2196904), &s_soundIndex.m_keys[35], 0i64);
  }
  *(_BYTE *)(v0 + 38560) = 0;
}

std::string *__fastcall ReplaceString(std::string *result, std::string *tgt, std::string *a, std::string *b)
{
  std::string *Ptr; // rdx
  unsigned __int64 i; // r14
  std::string *v10; // rax
  std::string *v11; // rdx
  std::string *v12; // rax

  if ( a->_Mypair._Myval2._Myres < 0x10 )
    Ptr = a;
  else
    Ptr = (std::string *)a->_Mypair._Myval2._Bx._Ptr;
  for ( i = std::string::find(tgt, Ptr->_Mypair._Myval2._Bx._Buf, 0i64, a->_Mypair._Myval2._Mysize);
        i != -1i64;
        i = std::string::find(
              tgt,
              v11->_Mypair._Myval2._Bx._Buf,
              b->_Mypair._Myval2._Mysize + i,
              a->_Mypair._Myval2._Mysize) )
  {
    v10 = std::string::replace(tgt, i, a->_Mypair._Myval2._Mysize, b, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    if ( tgt != v10 )
      std::string::assign(tgt, v10, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    if ( a->_Mypair._Myval2._Myres < 0x10 )
      v11 = a;
    else
      v11 = (std::string *)a->_Mypair._Myval2._Bx._Ptr;
  }
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  if ( result->_Mypair._Myval2._Myres < 0x10 )
    v12 = result;
  else
    v12 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  v12->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::_Assign_rv(result, tgt);
  std::string::~string(tgt);
  std::string::~string(a);
  std::string::~string(b);
  return result;
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

void __fastcall AppMain::ST_RoomExit(AppMain *this)
{
  int m_Status; // eax
  GfxManager *v2; // rax
  GfxManager *v3; // [rsp+40h] [rbp+8h]

  m_Status = Fw::ImeTarget::m_IMEPad.m_Status;
  if ( Fw::ImeTarget::m_currentIME == IME_KEYBOARD )
    m_Status = Fw::ImeTarget::m_IMEKeyboard.m_Status;
  if ( m_Status == 1 )
  {
    Fw::ImeTargetKB::Abort((Fw::ImeTargetKB *)this);
    Fw::ImeTarget::m_IMEPad.m_Status = 3;
  }
  v2 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v3 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v3);
    GfxManager::instance = v2;
  }
  GfxManager::ReleaseGFXMovie(v2, 0);
}

void __fastcall AppMain::ST_RoomInit(AppMain *this, __int64 a2, __int64 a3, int a4)
{
  GfxManager *v5; // rax
  GfxManager *v6; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  extension::gfxi_detail::MovieProxy *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v11; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v12; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v13; // r8
  char *m_str; // r9
  char *v15; // rax
  signed __int64 v16; // r9
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  Scene_RoomMember *pScene; // rbx
  RoomMembers *m_pRoomMembers; // rax
  int i; // edx
  GfxManager *v23; // rax
  GfxManager *v24; // rax
  GfxManager *v25; // rax
  EasyIndicator *v26; // rbx
  EasyIndicator *v27; // rbx
  EasyIndicator *v28; // rbx
  Scene_RoomMember *v29; // rbx
  unsigned __int64 v30; // rdx
  __int64 v31; // rbx
  int v32; // eax
  GameDataInfo *v33; // rcx
  GameDataInfo *v34; // rcx
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
  GfxManager::LoadRequest(v5, FILE_14_ROOM, LoadCompleteEventRoom, a4);
  this->m_SceneState = 0;
  SyncMenuImage::Load(
    &this->m_SyncMenuBG,
    (const ImageDataInfo *)MenuImageDataTbl[*(int *)(*(_QWORD *)&AppMain::pApp + 2197384i64)] + 26,
    FADE_IN);
  v6 = GfxManager::instance;
  if ( !GfxManager::instance )
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
  v9 = 113i64;
  v10 = 102i64;
  if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x800000) == 0 )
    v9 = 102i64;
  v11 = s_soundIndex.m_keys[v9].m_sharedBuffer.m_ptr;
  soundName.m_sharedBuffer.m_ptr = v11;
  if ( v11 )
  {
    v10 = (__int64)v11->m_refCount.m_ptr;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 16), 1ui64);
  }
  p_soundName = &soundName;
  AppMain::Sound_BGMPlay_GetSoundHashKey((AppMain *)v10, &result);
  v12 = result.m_sharedBuffer.m_ptr;
  if ( !result.m_sharedBuffer.m_ptr )
    goto LABEL_22;
  v13 = soundName.m_sharedBuffer.m_ptr;
  m_str = 0i64;
  if ( soundName.m_sharedBuffer.m_ptr )
    m_str = soundName.m_sharedBuffer.m_ptr->m_str;
  v15 = result.m_sharedBuffer.m_ptr->m_str;
  v16 = m_str - result.m_sharedBuffer.m_ptr->m_str;
  do
  {
    v17 = (unsigned __int8)v15[v16];
    v18 = (unsigned __int8)*v15 - v17;
    if ( v18 )
      break;
    ++v15;
  }
  while ( v17 );
  if ( v18 )
  {
LABEL_22:
    AppMain::Sound_PlayBGMByName(this, &soundName, 0.0, 0.0, 0);
    extension::SoundHashKey::operator=(&this->m_nowPlayBGM, &soundName);
    v13 = soundName.m_sharedBuffer.m_ptr;
  }
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v12->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))result.m_sharedBuffer.m_ptr->~RefCountableWeakSupportBase)(
        result.m_sharedBuffer.m_ptr,
        1i64);
    v13 = soundName.m_sharedBuffer.m_ptr;
  }
  if ( v13
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v13->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v13->~RefCountableWeakSupportBase)(
      v13,
      1i64);
  }
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
  if ( this->s_RoomInitFlag )
  {
    memset(this->s_TextChatSendBuffer, 0, sizeof(this->s_TextChatSendBuffer));
    memset(stringChatBuf, 0, sizeof(stringChatBuf));
    memset(this->s_TextChatLog, 0, sizeof(this->s_TextChatLog));
    memset(this->s_RoomMemberInfo, 0, sizeof(this->s_RoomMemberInfo));
    AppMain::setupOnlineRoomMembers(this);
    pScene = this->m_onlineRoomMemberParams.pScene;
    if ( pScene )
    {
      if ( !pScene->isError(this->m_onlineRoomMemberParams.pScene) )
      {
        m_pRoomMembers = pScene->m_pRoomMembers;
        if ( m_pRoomMembers )
        {
          m_pRoomMembers->m_alpha.m_power = -0.1;
          m_pRoomMembers->m_alpha.m_bAnimation = 1;
        }
      }
    }
  }
  if ( !this->SaveDataMain.PlayerData.m_VoiceChatStatus )
  {
    for ( i = 0; i < 12; ++i )
      g_NetworkManager.gamedata.playerDataSub[(unsigned __int8)i].chatOffFlag = 1;
  }
  v23 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    result.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)result.m_sharedBuffer.m_ptr);
    GfxManager::instance = v23;
  }
  GfxManager::LoadRequestBG(v23);
  v24 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v24;
  }
  GfxManager::LoadRequestNotification(v24);
  v25 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v25;
  }
  GfxManager::LoadRequestSystem(v25);
  v26 = EasyIndicator::instance;
  if ( !EasyIndicator::instance )
  {
    v26 = (EasyIndicator *)operator new(0x150ui64);
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)v26;
    memset(v26->m_IndicatorStack, 0, sizeof(v26->m_IndicatorStack));
    v26->m_Image = 0i64;
    v26->m_DrawCount = 0;
    EasyIndicator::instance = v26;
  }
  EasyIndicator::Load(v26, IMAGE_SAVING);
  v27 = EasyIndicator::instance;
  if ( !EasyIndicator::instance )
  {
    v27 = (EasyIndicator *)operator new(0x150ui64);
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)v27;
    memset(v27->m_IndicatorStack, 0, sizeof(v27->m_IndicatorStack));
    v27->m_Image = 0i64;
    v27->m_DrawCount = 0;
    EasyIndicator::instance = v27;
  }
  EasyIndicator::Load(v27, IMAGE_LOADING);
  v28 = EasyIndicator::instance;
  if ( !EasyIndicator::instance )
  {
    v28 = (EasyIndicator *)operator new(0x150ui64);
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)v28;
    memset(v28->m_IndicatorStack, 0, sizeof(v28->m_IndicatorStack));
    v28->m_Image = 0i64;
    v28->m_DrawCount = 0;
    EasyIndicator::instance = v28;
  }
  EasyIndicator::Load(v28, IMAGE_CONNECTING);
  v29 = this->m_onlineRoomMemberParams.pScene;
  if ( v29 )
  {
    v29->m_bBattleMode = 0;
    if ( !v29->isError(v29) )
    {
      if ( v29->m_pRoomMembers )
        Scene_RoomMember::setupRoomMembers(v29, v30);
    }
  }
  s_TextChatTick[0] = 0i64;
  s_TextChatTick[1] = 0i64;
  s_TextChatTick[2] = 0i64;
  s_TextChatTick[3] = 0i64;
  s_TextChatTick[4] = 0i64;
  s_TextChatTick[5] = 0i64;
  s_TextChatTick[6] = 0i64;
  s_TextChatTick[7] = 0i64;
  v31 = *(_QWORD *)NtCurrentTeb()->Reserved1[11];
  v32 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v31 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v32 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v33);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v32 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0] = USER_ID_1P;
  if ( v32 > *(_DWORD *)(v31 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v34);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1] = USER_ID_CPU;
  this->iReserveScene = -1;
  this->m_FuncST = 150;
  this->m_FuncBT = 151;
  AppMain::SceneFunc(this, 150);
  this->m_FuncExit = 149;
  *(_QWORD *)&this->m_Room_PlayTogether_WaitCnt = 0i64;
}

void __fastcall AppMain::ST_RoomInviteFriend(AppMain *this, __int64 a2)
{
  __int64 v3; // rax
  char v4; // al
  LANGUAGE_MODE iUILanguage; // ebx
  extension::TranslateTable *v6; // rax
  const std::pair<char const *,enum LANGUAGE_MODE> *v7; // rcx
  const char *first; // rcx
  const char *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax

  v3 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, a2);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 16) + 336i64))(*(_QWORD *)(v3 + 16));
  if ( (v4 & 0x10) == 0 && (v4 & 0x20) == 0 )
  {
    iUILanguage = this->SaveDataMain.SysOptionData.iUILanguage;
    v6 = extension::TranslateTable::Instance();
    v7 = extension::auxscript::MyLangCodeNameTable;
    while ( v7->second != iUILanguage )
    {
      if ( ++v7 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
      {
        first = 0i64;
        goto LABEL_8;
      }
    }
    first = v7->first;
LABEL_8:
    v9 = "en_US";
    if ( first )
      v9 = first;
    extension::TranslateTable::executeTranslate(v6, "ROOM_INVITE_MES", v9);
    if ( Fw::InvitationCommon::m_SessionFlag )
    {
      v11 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v10);
      (*(void (__fastcall **)(_QWORD, const char *))(**(_QWORD **)(v11 + 16) + 224i64))(
        *(_QWORD *)(v11 + 16),
        "LobbyInvite");
    }
  }
}

void __fastcall AppMain::ST_RoomLoop(AppMain *this)
{
  GfxManager *v2; // r13
  GfxManager *v3; // rax
  GfxManager *v4; // rax
  NET_USER_DATA *s_RoomMemberInfo; // rsi
  NET_USER_DATA *v6; // rcx
  NET_USER_DATA *player_data; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  Scaleform::GFx::Value *v10; // rax
  LANGUAGE_MODE iUILanguage; // ebx
  extension::TranslateTable *v12; // rax
  const std::pair<char const *,enum LANGUAGE_MODE> *v13; // rcx
  const char *first; // rcx
  const char *v15; // r8
  const char *v16; // rbx
  std::string *v17; // rax
  GfxManager *v18; // rax
  ONLINE_STATE onlineState; // er12
  int v20; // ebx
  GfxManager *v21; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // r15
  GfxManager *v23; // rax
  extension::gfxi_detail::MovieProxy *v24; // r15
  NET_USER_DATA *RoomMemberInfoBuffer; // rcx
  int v26; // ecx
  bool *p_chatOffFlag; // r8
  __int64 v28; // rdx
  Fw::ImeTargetKB *v29; // rcx
  NETWORK_ROOM_BATTLE_TYPE *TableBattleTypeInfoBuffer; // rdx
  int m_Status; // eax
  GfxManager *v32; // rax
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  char *m_textBuffer; // rbx
  unsigned __int64 v37; // rdx
  unsigned int v38; // er8
  unsigned __int64 v39; // rcx
  Fw::ROOM_CHATMESSAGE_INFO *v40; // rbx
  GfxManager *v41; // rax
  extension::gfxi_detail::MovieProxy *v42; // rbx
  int v43; // eax
  char *v44; // rbx
  unsigned __int64 v45; // rdx
  unsigned int v46; // er8
  unsigned __int64 v47; // rcx
  char *s_TextChatSendBuffer; // rsi
  char *v49; // rax
  __int64 v50; // rdx
  char *v51; // r14
  int v52; // ebx
  int v53; // eax
  __int64 v54; // rax
  char v55; // al
  __int64 v56; // rbx
  __int64 v57; // rax
  signed int numArgs; // er12
  int v59; // er14
  unsigned __int64 *v60; // r15
  unsigned __int64 *p_tick; // rsi
  Scaleform::GFx::Value::ValueType *p_Type; // rbx
  CSteamID v63; // rdx
  const char *Name; // r8
  GfxManager *v65; // rax
  extension::gfxi_detail::MovieProxy *v66; // rbx
  GfxManager *v67; // rax
  GfxManager::RESULT_CODE m_QuitResultCode; // ecx
  Scene_RoomMember *pScene; // rcx
  char string[8]; // [rsp+38h] [rbp-D0h] BYREF
  GfxManager *v71; // [rsp+40h] [rbp-C8h]
  GfxManager *v72; // [rsp+48h] [rbp-C0h]
  Scaleform::GFx::Value presult; // [rsp+50h] [rbp-B8h] BYREF
  std::string v74; // [rsp+88h] [rbp-80h] BYREF
  std::string v75; // [rsp+A8h] [rbp-60h] BYREF
  Scaleform::GFx::Value pargs; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v77; // [rsp+F8h] [rbp-10h]
  std::string *v78; // [rsp+100h] [rbp-8h]
  std::string v79; // [rsp+108h] [rbp+0h] BYREF
  std::string v80; // [rsp+128h] [rbp+20h] BYREF
  char destination[8]; // [rsp+148h] [rbp+40h] BYREF
  unsigned __int64 m_textLength; // [rsp+248h] [rbp+140h]

  v77 = -2i64;
  v2 = GfxManager::instance;
  v72 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v3 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v3);
    v2 = v4;
    v72 = v4;
    GfxManager::instance = v4;
  }
  SyncMenuImage::Update(&this->m_SyncMenuBG);
  pargs.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  pargs.pObjectInterface = 0i64;
  pargs.Type = VT_None;
  *(Scaleform::ListNode<Scaleform::GFx::Value> *)&presult.pNext = pargs.Scaleform::ListNode<Scaleform::GFx::Value>;
  *(_QWORD *)&presult.Type = 0i64;
  presult.mValue.IValue = 0;
  s_RoomMemberInfo = this->s_RoomMemberInfo;
  v6 = this->s_RoomMemberInfo;
  player_data = g_NetworkManager.gamedata.player_data;
  v8 = 11i64;
  v9 = 11i64;
  do
  {
    *(_OWORD *)&v6->steamId = *(_OWORD *)&player_data->steamId;
    *((_OWORD *)v6 + 1) = *((_OWORD *)player_data + 1);
    *((_OWORD *)v6 + 2) = *((_OWORD *)player_data + 2);
    *((_OWORD *)v6 + 3) = *((_OWORD *)player_data + 3);
    *(_OWORD *)&v6->stageTelop[12] = *(_OWORD *)&player_data->stageTelop[12];
    *(_OWORD *)&v6->stageTelop[28] = *(_OWORD *)&player_data->stageTelop[28];
    *(_OWORD *)&v6->stageTelop[44] = *(_OWORD *)&player_data->stageTelop[44];
    v6 = (NET_USER_DATA *)((char *)v6 + 128);
    *(_OWORD *)&v6[-1].stageTelop[50] = *(_OWORD *)&player_data->stageTelop[60];
    player_data = (NET_USER_DATA *)((char *)player_data + 128);
    --v9;
  }
  while ( v9 );
  v6->steamId = player_data->steamId;
  if ( !this->m_SceneState )
    goto LABEL_136;
  v10 = (Scaleform::GFx::Value *)cPlayTogether::instance_;
  if ( !cPlayTogether::instance_ )
  {
    v10 = (Scaleform::GFx::Value *)operator new(2ui64);
    presult.pPrev = v10;
    LOWORD(v10->pPrev) = 0;
    cPlayTogether::instance_ = (cPlayTogether *)v10;
  }
  if ( LOBYTE(v10->pPrev) )
  {
    if ( !this->m_Room_PlayTogether_StartFlag && ++this->m_Room_PlayTogether_WaitCnt > 300 )
    {
      this->m_Room_PlayTogether_StartFlag = 1;
      iUILanguage = this->SaveDataMain.SysOptionData.iUILanguage;
      v12 = extension::TranslateTable::Instance();
      v13 = extension::auxscript::MyLangCodeNameTable;
      while ( v13->second != iUILanguage )
      {
        if ( ++v13 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
        {
          first = 0i64;
          goto LABEL_16;
        }
      }
      first = v13->first;
LABEL_16:
      v15 = "en_US";
      if ( first )
        v15 = first;
      v16 = extension::TranslateTable::executeTranslate(v12, "ROOM_INVITE_MES", v15);
      presult.pPrev = (Scaleform::GFx::Value *)&v74;
      v78 = &v75;
      v74._Mypair._Myval2._Myres = 15i64;
      v74._Mypair._Myval2._Mysize = 0i64;
      v74._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v74, "\\\"", 2ui64);
      v75._Mypair._Myval2._Myres = 15i64;
      v75._Mypair._Myval2._Mysize = 0i64;
      v75._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v75, "\"", 1ui64);
      std::string::string(&v79, v16);
      ReplaceString(&v80, v17, &v75, &v74);
      std::string::~string(&v80);
      v10 = (Scaleform::GFx::Value *)cPlayTogether::instance_;
    }
  }
  if ( !v10 )
  {
    v18 = (GfxManager *)operator new(2ui64);
    v71 = v18;
    LOWORD(v18->m_GFXMovie.m_movieProxy.m_ptr) = 0;
    cPlayTogether::instance_ = (cPlayTogether *)v18;
  }
  onlineState = g_NetworkManager.gamedata.onlineState;
  v20 = 6;
  if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY )
  {
    v20 = 2;
  }
  else if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_TRAINING )
  {
    v20 = 1;
  }
  if ( AppMain::ST_RoomMemberInfoChangeCheck(this, v20) )
  {
    v21 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v71 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v71);
      GfxManager::instance = v21;
    }
    m_ptr = v21->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(
           v21->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
           "_root.updateGetRoomMenberData") )
    {
      Scaleform::GFx::Movie::Invoke(
        m_ptr->m_movie.pObject,
        "_root.updateGetRoomMenberData",
        (Scaleform::GFx::Value *)&presult.8,
        &pargs,
        0);
    }
  }
  if ( s_CursorSetFlag )
  {
    s_CursorSetFlag = 0;
    v23 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v71 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v71);
      GfxManager::instance = v23;
    }
    v24 = v23->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(
           v23->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
           "_root.CursorPosSetting") )
    {
      Scaleform::GFx::Movie::Invoke(v24->m_movie.pObject, "_root.CursorPosSetting", 0i64, 0i64, 0);
    }
  }
  RoomMemberInfoBuffer = this->RoomMemberInfoBuffer;
  do
  {
    *(_OWORD *)&RoomMemberInfoBuffer->steamId = *(_OWORD *)&s_RoomMemberInfo->steamId;
    *((_OWORD *)RoomMemberInfoBuffer + 1) = *((_OWORD *)s_RoomMemberInfo + 1);
    *((_OWORD *)RoomMemberInfoBuffer + 2) = *((_OWORD *)s_RoomMemberInfo + 2);
    *((_OWORD *)RoomMemberInfoBuffer + 3) = *((_OWORD *)s_RoomMemberInfo + 3);
    *(_OWORD *)&RoomMemberInfoBuffer->stageTelop[12] = *(_OWORD *)&s_RoomMemberInfo->stageTelop[12];
    *(_OWORD *)&RoomMemberInfoBuffer->stageTelop[28] = *(_OWORD *)&s_RoomMemberInfo->stageTelop[28];
    *(_OWORD *)&RoomMemberInfoBuffer->stageTelop[44] = *(_OWORD *)&s_RoomMemberInfo->stageTelop[44];
    RoomMemberInfoBuffer = (NET_USER_DATA *)((char *)RoomMemberInfoBuffer + 128);
    *(_OWORD *)&RoomMemberInfoBuffer[-1].stageTelop[50] = *(_OWORD *)&s_RoomMemberInfo->stageTelop[60];
    s_RoomMemberInfo = (NET_USER_DATA *)((char *)s_RoomMemberInfo + 128);
    --v8;
  }
  while ( v8 );
  RoomMemberInfoBuffer->steamId = s_RoomMemberInfo->steamId;
  v26 = 0;
  p_chatOffFlag = &g_NetworkManager.gamedata.playerDataSub[0].chatOffFlag;
  v28 = 0i64;
  do
  {
    ChatOffFlagBuffer[v28] = *p_chatOffFlag;
    MikeFlagBuffer[v28] = g_NetworkManager.gamedata.speakFlag[(char)v26++] > 0;
    p_chatOffFlag += 35;
    ++v28;
  }
  while ( v26 < 12 );
  LODWORD(v29) = 0;
  TableBattleTypeInfoBuffer = this->TableBattleTypeInfoBuffer;
  do
  {
    *TableBattleTypeInfoBuffer = g_NetworkManager.gamedata.tableBattleType[(unsigned __int8)v29];
    v29 = (Fw::ImeTargetKB *)(unsigned int)((_DWORD)v29 + 1);
    ++TableBattleTypeInfoBuffer;
  }
  while ( (int)v29 < v20 );
  if ( g_NetworkManager.gamedata.error )
  {
    *(_QWORD *)&g_NetworkManager.gamedata.error = 0i64;
    m_Status = Fw::ImeTarget::m_IMEPad.m_Status;
    if ( Fw::ImeTarget::m_currentIME == IME_KEYBOARD )
      m_Status = Fw::ImeTarget::m_IMEKeyboard.m_Status;
    if ( m_Status == 1 )
    {
      Fw::ImeTargetKB::Abort(v29);
      Fw::ImeTarget::m_IMEPad.m_Status = 3;
    }
    v32 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v71 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v71);
      GfxManager::instance = v32;
    }
    GfxManager::ReleaseGFXMovie(v32, 0);
    this->m_FadeST = 136;
    this->m_bExitFuncWaitFrame = 0;
    goto LABEL_131;
  }
  v33 = Fw::ImeTarget::m_IMEPad.m_Status;
  v34 = Fw::ImeTarget::m_IMEPad.m_Status;
  v35 = Fw::ImeTarget::m_IMEKeyboard.m_Status;
  if ( Fw::ImeTarget::m_currentIME == IME_KEYBOARD )
    v34 = Fw::ImeTarget::m_IMEKeyboard.m_Status;
  if ( v34 == 1 )
  {
    if ( Fw::ImeTarget::m_currentIME )
    {
      if ( Fw::ImeTarget::m_IMEPad.m_Status == 2 )
      {
        strcpy_s(destination, 0x100ui64, Fw::ImeTarget::m_IMEPad.m_textBuffer);
        m_textLength = Fw::ImeTarget::m_IMEPad.m_textLength;
        Fw::ImeTarget::m_IMEPad.m_Status = 0;
      }
    }
    else
    {
      if ( Fw::ImeTarget::m_IMEKeyboard.m_Status == 2 )
        v35 = 0;
      Fw::ImeTarget::m_IMEKeyboard.m_Status = v35;
      m_textBuffer = Fw::ImeTarget::m_IMEKeyboard.m_textBuffer;
      strcpy_s(destination, 0x100ui64, Fw::ImeTarget::m_IMEKeyboard.m_textBuffer);
      v37 = 0i64;
      v38 = 0;
      if ( Fw::ImeTarget::m_IMEKeyboard.m_textBuffer[0] )
      {
        do
        {
          if ( v38 >= 0x100 )
            break;
          v39 = v37 + 1;
          if ( (*m_textBuffer & 0xC0) == 0x80 )
            v39 = v37;
          v37 = v39;
          ++v38;
          ++m_textBuffer;
        }
        while ( *m_textBuffer );
      }
      m_textLength = v37;
    }
    v40 = &Fw::MatchingTarget::m_RoomChatMessage[Fw::MatchingTarget::m_RoomChatMessageCount];
    v40->npId = 0i64;
    v40->message[0] = 49;
    strcpy_s(&v40->message[1], 0xFFui64, destination);
    v40->tick = -1i64;
    goto LABEL_94;
  }
  if ( Fw::ImeTarget::m_currentIME == IME_KEYBOARD )
    v33 = Fw::ImeTarget::m_IMEKeyboard.m_Status;
  if ( v33 != 2 )
    goto LABEL_94;
  v41 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v71 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v71);
    GfxManager::instance = v41;
  }
  v42 = v41->m_GFXMovie.m_movieProxy.m_ptr;
  if ( Scaleform::GFx::Movie::IsAvailable(v41->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject, "_root.CloseIME") )
    Scaleform::GFx::Movie::Invoke(v42->m_movie.pObject, "_root.CloseIME", 0i64, 0i64, 0);
  if ( Fw::ImeTarget::m_currentIME )
  {
    if ( Fw::ImeTarget::m_IMEPad.m_Status == 2 )
    {
      strcpy_s(destination, 0x100ui64, Fw::ImeTarget::m_IMEPad.m_textBuffer);
      v45 = Fw::ImeTarget::m_IMEPad.m_textLength;
      m_textLength = Fw::ImeTarget::m_IMEPad.m_textLength;
      Fw::ImeTarget::m_IMEPad.m_Status = 0;
    }
    else
    {
      v45 = m_textLength;
    }
  }
  else
  {
    v43 = Fw::ImeTarget::m_IMEKeyboard.m_Status;
    if ( Fw::ImeTarget::m_IMEKeyboard.m_Status == 2 )
      v43 = 0;
    Fw::ImeTarget::m_IMEKeyboard.m_Status = v43;
    v44 = Fw::ImeTarget::m_IMEKeyboard.m_textBuffer;
    strcpy_s(destination, 0x100ui64, Fw::ImeTarget::m_IMEKeyboard.m_textBuffer);
    v45 = 0i64;
    v46 = 0;
    if ( Fw::ImeTarget::m_IMEKeyboard.m_textBuffer[0] )
    {
      do
      {
        if ( v46 >= 0x100 )
          break;
        v47 = v45 + 1;
        if ( (*v44 & 0xC0) == 0x80 )
          v47 = v45;
        v45 = v47;
        ++v46;
        ++v44;
      }
      while ( *v44 );
    }
    m_textLength = v45;
  }
  if ( !v45 )
    goto LABEL_94;
  s_TextChatSendBuffer = this->s_TextChatSendBuffer;
  v49 = strstr(destination, "|$SETPHRASES_");
  v51 = v49;
  if ( v49
    && (string[0] = v49[13],
        string[1] = v49[14],
        string[2] = 0,
        v52 = atol(string),
        string[0] = v51[16],
        string[1] = v51[17],
        v53 = atol(string),
        !v52)
    && v53 )
  {
    *s_TextChatSendBuffer = 48;
    this->s_TextChatSendBuffer[1] = v53;
  }
  else
  {
    v54 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v50);
    v55 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v54 + 16) + 336i64))(*(_QWORD *)(v54 + 16));
    if ( (v55 & 0x10) != 0 || (v55 & 0xA) != 0 )
      goto LABEL_94;
    sprintf_s(this->s_TextChatSendBuffer, 0x100ui64, "1%s", destination);
  }
  v56 = -1i64;
  do
    ++v56;
  while ( s_TextChatSendBuffer[v56] );
  v57 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v50);
  (*(void (__fastcall **)(_QWORD, CSteamID::SteamID_t, char *, _QWORD))(**(_QWORD **)(v57 + 32) + 208i64))(
    *(_QWORD *)(v57 + 32),
    Fw::MatchingTarget::m_RoomId.m_steamid,
    this->s_TextChatSendBuffer,
    (unsigned int)(v56 + 1));
LABEL_94:
  if ( (unsigned int)(onlineState - 9) <= 3 )
  {
    *(_QWORD *)this->SaveDataMain.PlayerData.m_AchivementCount_TMP = 0i64;
    *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[2] = 0i64;
    *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[4] = 0i64;
    *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[6] = 0i64;
    *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[8] = 0i64;
    *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[10] = 0i64;
    *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[12] = 0i64;
    *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[14] = 0i64;
    s_CursorSetFlag = 1;
    *(_WORD *)&v2->m_bDisposeGFXMovie = 1;
    this->m_FadeST = 144;
    this->m_bExitFuncWaitFrame = 0;
    goto LABEL_131;
  }
  NetManager::RecvRoomChatMessage(&g_NetworkManager, this->s_TextChatLog);
  numArgs = 0;
  v59 = 0;
  v60 = s_TextChatTick;
  p_tick = &this->s_TextChatLog[0].tick;
  p_Type = &argID[0].Type;
  do
  {
    if ( !*p_tick )
      break;
    v63.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)*(p_tick - 1);
    if ( v63.m_steamid.m_comp )
      Name = (const char *)SteamNameCache::getName(SteamNameCache::ms_instance, v63);
    else
      Name = "YOU";
    sprintf(stringChatBuf[(__int64)v59], "%s:\n%s", Name, this->s_TextChatLog[v59].message);
    if ( (*p_Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
        *((Scaleform::GFx::Value::ObjectInterface **)p_Type - 1),
        (Scaleform::GFx::Value *)(p_Type - 6),
        *((void **)p_Type + 1));
      *((_QWORD *)p_Type - 1) = 0i64;
    }
    *p_Type = 6;
    *((_QWORD *)p_Type + 1) = stringChatBuf[(__int64)v59];
    *v60 = *p_tick;
    ++v59;
    p_Type += 12;
    p_tick += 34;
    ++v60;
    ++numArgs;
  }
  while ( v59 < 8 );
  if ( numArgs > 0 )
  {
    v65 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v71 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v71);
      GfxManager::instance = v65;
    }
    v66 = v65->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(
           v65->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
           "_root.UpdateTextChatLog") )
    {
      Scaleform::GFx::Movie::Invoke(v66->m_movie.pObject, "_root.UpdateTextChatLog", 0i64, argID, numArgs);
    }
  }
  v67 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v71 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v71);
    GfxManager::instance = v67;
  }
  if ( v67->m_SystemMessageState != SYSTEM_MESSAGE_OPEN || !v67->m_SystemMessageLock )
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
    v67 = GfxManager::instance;
  }
  if ( v72->m_bQuitGFXMovie )
  {
    if ( !v67 )
    {
      v71 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v71);
      GfxManager::instance = v67;
    }
    m_QuitResultCode = v67->m_QuitResultCode;
    switch ( m_QuitResultCode )
    {
      case RESULT_CODE_CANCEL:
        pScene = this->m_onlineRoomMemberParams.pScene;
        if ( pScene )
        {
          ((void (__fastcall *)(Scene_RoomMember *, __int64))pScene->~ErrorChecker)(pScene, 1i64);
          this->m_onlineRoomMemberParams.pScene = 0i64;
        }
        this->iReserveScene = -1;
        this->m_FuncST = 0;
        this->m_FadeExitFunc = 149;
        this->m_bExitFuncWaitFrame = 0;
        if ( this->MatchingGameRule == GAME_RULE_TRAINING )
          this->m_FadeST = 156;
        else
          this->m_FadeST = 136;
        goto LABEL_132;
      case RESULT_CODE_MY_TEAM:
        v67->m_MenuCursor[5] = 2;
        break;
      case RESULT_CODE_MY_SINGLE:
        v67->m_MenuCursor[5] = 3;
        break;
      case RESULT_CODE_MY_STAGE:
        v67->m_MenuCursor[5] = 4;
        break;
      default:
        goto LABEL_136;
    }
    this->m_PrevScene = 148;
    this->m_FadeST = 80;
    this->m_bExitFuncWaitFrame = 0;
LABEL_131:
    this->iReserveScene = -1;
    this->m_FadeExitFunc = 149;
    this->m_FuncST = 0;
LABEL_132:
    if ( this->m_FuncFT != 170 )
      this->m_FuncFT = 172;
  }
LABEL_136:
  if ( (presult.mValue.BValue & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      *(Scaleform::GFx::Value::ObjectInterface **)&presult.Type,
      (Scaleform::GFx::Value *)&presult.8,
      (void *)presult.DataAux);
    *(_QWORD *)&presult.Type = 0i64;
  }
  presult.mValue.IValue = 0;
  if ( (pargs.Type & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pargs.pObjectInterface, &pargs, pargs.mValue.pStringManaged);
}

char __fastcall AppMain::ST_RoomMemberInfoChangeCheck(AppMain *this, int seatNumMax)
{
  int v2; // er8
  __int64 v3; // r14
  bool *p_chatOffFlag; // rsi
  char *i; // r9
  int v8; // ecx
  int v9; // edi
  int v10; // er10
  int v11; // er11
  int v12; // edx
  int v13; // ebx

  v2 = 0;
  v3 = 0i64;
  p_chatOffFlag = &g_NetworkManager.gamedata.playerDataSub[0].chatOffFlag;
  for ( i = (char *)this->RoomMemberInfoBuffer + 8; ; i += 118 )
  {
    v8 = *(_DWORD *)(i + 2158327);
    v9 = *((_DWORD *)i + 2);
    if ( ((v9 ^ v8) & 0x40000000) != 0 )
      break;
    if ( ((v9 ^ v8) & 0x38000) != 0 )
      break;
    if ( ((v9 ^ v8) & 0xC0000) != 0 )
      break;
    if ( *(_DWORD *)(i + 2158331) != *((_DWORD *)i + 3) )
      break;
    v10 = *(_DWORD *)(i + 2158319);
    v11 = *(_DWORD *)i;
    if ( (((unsigned __int8)*(_DWORD *)i ^ (unsigned __int8)i[2158319]) & 0x3F) != 0 )
      break;
    if ( ((v11 ^ v10) & 0xFC000) != 0 )
      break;
    v12 = *(_DWORD *)(i + 2158323);
    v13 = *((_DWORD *)i + 1);
    if ( (((unsigned __int8)v13 ^ (unsigned __int8)i[2158323]) & 0x3F) != 0
      || ((v11 ^ v10) & 0x2000) != 0
      || ((v11 ^ v10) & 0x8000000) != 0
      || ((v13 ^ v12) & 0x2000) != 0
      || ((v13 ^ v12) & 0x7E00000) != 0
      || ((v13 ^ v12) & 0x1FC000) != 0
      || ((v11 ^ v10) & 0x1800) != 0
      || ((v11 ^ v10) & 0x6000000) != 0
      || ((v13 ^ v12) & 0x1800) != 0
      || ((v13 ^ v12) & 0x78000000) != 0
      || ((v9 ^ v8) & 0x380) != 0
      || (((unsigned __int8)v9 ^ (unsigned __int8)v8) & 0x7F) != 0
      || ((v9 ^ v8) & 0x100000) != 0
      || ((v9 ^ v8) & 0x3FE00000) != 0
      || *p_chatOffFlag != ChatOffFlagBuffer[v3]
      || (((unsigned __int8)i[2158359] ^ (unsigned __int8)i[40]) & 0x18) != 0 )
    {
      break;
    }
    ++v3;
    p_chatOffFlag += 35;
    if ( (__int64)p_chatOffFlag >= (__int64)&g_NetworkManager.gamedata.tableBattleType[2] + 2 )
    {
      if ( seatNumMax <= 0 )
        return 0;
      while ( g_NetworkManager.gamedata.tableBattleType[(unsigned __int8)v2] == this->TableBattleTypeInfoBuffer[v2] )
      {
        if ( ++v2 >= seatNumMax )
          return 0;
      }
      return 1;
    }
  }
  return 1;
}

void __fastcall AppMain::ST_RoomSeatBattleReady(AppMain *this)
{
  unsigned __int8 myNo; // r15
  GAME_RULE gameRule; // edi
  _DWORD *v4; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  const char *v7; // rcx
  NetManager *v8; // rcx
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // r8
  __int32 v11; // edi
  __int32 v12; // edi
  char v13; // di
  SEND_MESSAGE *p_s_Msg; // rdx
  int v15; // er9
  NET_USER_DATA *s_RoomMemberInfo; // rdx
  __int64 v17; // r8
  int time; // eax
  NetManager *v19; // rcx

  myNo = g_NetworkManager.gamedata.myNo;
  gameRule = g_NetworkManager.gamedata.gameRule;
  v4 = (_DWORD *)((char *)&this->s_RoomMemberInfo[g_NetworkManager.gamedata.myNo] + 16);
  v5 = *v4 & 0x7F;
  AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
  if ( Fw::MatchingTarget::IsRoomOwner(v7, v6) )
  {
    v9 = 1;
    v10 = *(_BYTE *)v4 & 0x7F;
    if ( v10 > 0xCu )
    {
      v8 = (NetManager *)((unsigned int)v10 - 1);
      v9 = 12 * ((int)v8 / 12) + 1;
    }
    if ( gameRule )
    {
      v11 = gameRule - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 )
        {
          if ( v9 <= v10 )
          {
            v8 = (NetManager *)((unsigned int)v9 + 6);
LABEL_10:
            if ( v10 < (unsigned int)v8 )
              goto LABEL_12;
          }
LABEL_11:
          if ( ((*v4 >> 18) & 3) != 0 )
            return;
LABEL_12:
          if ( (*v4 & 0x380) == 384 )
            return;
          v13 = NetManager::SitSeatRequest(
                  v8,
                  myNo,
                  v10,
                  SEAT_FLAG_BATTLEWAIT,
                  NETWORK_ROOM_BATTLE_TYPE_NONE,
                  BATTLE_WAIT_STATE_NONE,
                  0i64,
                  0i64);
          if ( NetManager::IsTableBattleStartComplete(&g_NetworkManager, *(_BYTE *)v4 & 0x7F) )
          {
            NetManager::SendReadyTableBattleStart(&g_NetworkManager, v5, 0i64);
            return;
          }
          if ( v13 )
          {
            this->s_Msg.msgBattleCommand.time &= 0xFFFFFFF0;
            p_s_Msg = &this->s_Msg;
            v15 = 1;
            this->s_Msg.msgType = 5;
            this->s_Msg.msgBattleCommand.time |= myNo & 0xF;
            this->s_Msg.msgBattleCommand.time = this->s_Msg.msgBattleCommand.time & 0xFFFF002F | ((*v4 & 0x7F) << 7) | 0x20;
LABEL_27:
            NetManager::SendMessageW(&g_NetworkManager, p_s_Msg, 0i64, v15, 0);
            return;
          }
          return;
        }
        if ( v12 != 1 )
          goto LABEL_11;
      }
    }
    if ( v9 <= v10 )
    {
      v8 = (NetManager *)((unsigned int)v9 + 2);
      goto LABEL_10;
    }
    goto LABEL_11;
  }
  s_RoomMemberInfo = this->s_RoomMemberInfo;
  v17 = 0i64;
  while ( !s_RoomMemberInfo->steamId
       || s_RoomMemberInfo->steamId != Fw::NetworkCommon::m_NpOnlineId.data
       || (*((_DWORD *)s_RoomMemberInfo + 4) & 0x380) != 128 )
  {
    ++v17;
    ++s_RoomMemberInfo;
    if ( v17 >= 12 )
      return;
  }
  if ( (*v4 & 0xC0000) == 0 )
  {
    this->s_Msg.msgBattleCommand.time &= 0xFFFFFFF0;
    this->s_Msg.msgBattleCommand.time |= myNo & 0xF;
    time = this->s_Msg.msgBattleCommand.time;
    this->s_Msg.msgType = 4;
    v19 = (NetManager *)(time & 0xFFFFC02F | ((*v4 & 0x7F) << 7) | 0x20);
    this->s_Msg.msgBattleCommand.time = (int)v19;
    NetManager::SetSeatBattleInfoFromUserInfo(v19, (MsgSeatRequest *)&this->s_Msg.1, gameRule);
    v15 = 3;
    p_s_Msg = &this->s_Msg;
    goto LABEL_27;
  }
}

void __fastcall AppMain::ST_RoomSeatBattleReadyCancel(AppMain *this)
{
  unsigned __int8 myNo; // r14
  int v3; // ebp
  int battleWaitState; // esi
  NETWORK_ROOM_BATTLE_TYPE battleType; // ebx
  __int64 v6; // rdx
  const char *v7; // rcx
  SEAT_FLAG v8; // er9

  myNo = g_NetworkManager.gamedata.myNo;
  v3 = *((_DWORD *)&this->s_RoomMemberInfo[g_NetworkManager.gamedata.myNo] + 4) & 0x7F;
  battleWaitState = (*((_DWORD *)&this->s_RoomMemberInfo[g_NetworkManager.gamedata.myNo] + 4) >> 18) & 3;
  battleType = g_NetworkManager.gamedata.tableBattleType[(unsigned __int8)(v3 / 12)];
  if ( ((*((_DWORD *)&this->s_RoomMemberInfo[g_NetworkManager.gamedata.myNo] + 4) >> 7) & 7) == 2 )
  {
    AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
    if ( Fw::MatchingTarget::IsRoomOwner(v7, v6) )
    {
      NetManager::UpdateSeatSit(
        &g_NetworkManager,
        myNo,
        v3,
        v8,
        (BATTLE_WAIT_STATE)battleWaitState,
        battleType,
        &this->s_Msg,
        0);
    }
    else
    {
      this->s_Msg.msgBattleCommand.time &= 0xFFF00090;
      this->s_Msg.msgType = 4;
      this->s_Msg.msgBattleCommand.time |= myNo & 0xF | 0x10 | ((v3 & 0x7F | ((battleWaitState & 3 | (4 * (battleType & 7))) << 7)) << 8);
      NetManager::SendMessageW(&g_NetworkManager, &this->s_Msg, 0i64, 3, 0);
    }
  }
}

void __fastcall AppMain::ST_RoomSeatLeave(AppMain *this)
{
  unsigned __int8 myNo; // di
  __int64 v3; // rdx
  const char *v4; // rcx
  unsigned int v5; // eax

  myNo = g_NetworkManager.gamedata.myNo;
  if ( ((*((_DWORD *)&this->s_RoomMemberInfo[g_NetworkManager.gamedata.myNo] + 4) >> 7) & 7) == 1 )
  {
    AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
    if ( Fw::MatchingTarget::IsRoomOwner(v4, v3) )
    {
      NetManager::UpdateSeatLeave(&g_NetworkManager, myNo, &this->s_Msg);
    }
    else
    {
      v5 = this->s_Msg.msgBattleCommand.time & 0xFFFFFF80;
      this->s_Msg.msgType = 4;
      this->s_Msg.msgBattleCommand.time = v5 | myNo & 0xF;
      NetManager::SendMessageW(&g_NetworkManager, &this->s_Msg, 0i64, 3, 0);
    }
  }
}

void __fastcall AppMain::ST_RoomSeatSit(AppMain *this, int seatid, unsigned __int8 waitstate)
{
  unsigned __int8 myNo; // r14
  unsigned __int8 v4; // si
  NETWORK_ROOM_BATTLE_TYPE battleType; // ebx
  char v7; // r11
  _BYTE *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  const char *v11; // rcx
  NetManager *v12; // rcx
  SEND_MESSAGE *p_s_Msg; // rdx
  int v14; // er9
  __int64 v15; // rdx
  const char *v16; // rcx
  NetManager *v17; // rcx
  char v18; // al
  __int64 v19; // rdx
  const char *v20; // rcx
  BATTLE_WAIT_STATE battleWaitState; // [rsp+28h] [rbp-40h]
  BATTLE_WAIT_STATE pBattleWaitState; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 pSeatNo; // [rsp+78h] [rbp+10h] BYREF

  myNo = g_NetworkManager.gamedata.myNo;
  v4 = seatid;
  battleType = g_NetworkManager.gamedata.tableBattleType[(unsigned __int8)(((int)((unsigned __int64)(715827883i64 * seatid) >> 32) >> 1 < 0)
                                                                         + ((int)((unsigned __int64)(715827883i64 * seatid) >> 32) >> 1))];
  if ( (unsigned __int8)NetManager::GetSpectatorStartSeatNo(
                          (NetManager *)this,
                          seatid,
                          g_NetworkManager.gamedata.gameRule) )
  {
    if ( v7 == 1 )
    {
      AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
      if ( Fw::MatchingTarget::IsRoomOwner(v16, v15) )
      {
        battleWaitState = BATTLE_WAIT_STATE_PARTICIPANT;
LABEL_13:
        pBattleWaitState = BATTLE_WAIT_STATE_NONE;
        pSeatNo = 0;
        if ( !NetManager::SitSeatRequest(
                v17,
                myNo,
                v4,
                SEAT_FLAG_SIT,
                battleType,
                battleWaitState,
                &pSeatNo,
                &pBattleWaitState) )
          return;
        v18 = pBattleWaitState;
        p_s_Msg = &this->s_Msg;
        this->s_Msg.msgBattleCommand.time &= 0xFFF00090;
        this->s_Msg.msgType = 5;
        v14 = 1;
        this->s_Msg.msgBattleCommand.time |= myNo & 0xF | 0x10 | ((pSeatNo & 0x7F | ((v18 & 3 | (4 * (battleType & 7))) << 7)) << 8);
        goto LABEL_21;
      }
      this->s_Msg.msgBattleCommand.time &= 0xFFF08090;
      this->s_Msg.msgBattleCommand.time |= myNo & 0xF | ((((battleType & 7) << 9) | v4 & 0x7F) << 8) | 0x8010;
    }
    else
    {
      if ( v7 != 2 )
        return;
      AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
      if ( Fw::MatchingTarget::IsRoomOwner(v20, v19) )
      {
        battleWaitState = BATTLE_WAIT_STATE_SPECTATOR;
        goto LABEL_13;
      }
      this->s_Msg.msgBattleCommand.time &= 0xFFF10090;
      this->s_Msg.msgBattleCommand.time |= myNo & 0xF | ((((battleType & 7) << 9) | v4 & 0x7F) << 8) | 0x10010;
    }
LABEL_20:
    p_s_Msg = &this->s_Msg;
    v14 = 3;
    this->s_Msg.msgType = 4;
LABEL_21:
    NetManager::SendMessageW(&g_NetworkManager, p_s_Msg, 0i64, v14, 0);
    return;
  }
  v8 = (char *)this->s_RoomMemberInfo + 16;
  v9 = 0i64;
  while ( !*((_QWORD *)v8 - 2) || (*v8 & 0x7F) != v4 )
  {
    ++v9;
    v8 += 118;
    if ( v9 >= 12 )
    {
      AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
      if ( !Fw::MatchingTarget::IsRoomOwner(v11, v10) )
      {
        this->s_Msg.msgBattleCommand.time = this->s_Msg.msgBattleCommand.time & 0xFFF00090 | myNo & 0xF | 0x10 | ((v4 & 0x7F | ((battleType & 7) << 9)) << 8);
        goto LABEL_20;
      }
      if ( !NetManager::SitSeatRequest(v12, myNo, v4, SEAT_FLAG_SIT, battleType, BATTLE_WAIT_STATE_NONE, 0i64, 0i64) )
        return;
      p_s_Msg = &this->s_Msg;
      this->s_Msg.msgType = 5;
      v14 = 1;
      this->s_Msg.msgBattleCommand.time = this->s_Msg.msgBattleCommand.time & 0xFFF00090 | myNo & 0xF | 0x10 | ((v4 & 0x7F | ((battleType & 7) << 9)) << 8);
      goto LABEL_21;
    }
  }
}

void __fastcall AppMain::ST_RoomSendSeatFlag(
        AppMain *this,
        char myNo,
        unsigned __int8 seatNo,
        SEAT_FLAG seatFlag,
        BATTLE_WAIT_STATE battleWaitState,
        NETWORK_ROOM_BATTLE_TYPE battleType)
{
  __int64 v10; // rdx
  const char *v11; // rcx
  NetManager *v12; // rcx

  AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
  if ( !Fw::MatchingTarget::IsRoomOwner(v11, v10) )
  {
    if ( seatFlag )
    {
      if ( seatFlag != SEAT_FLAG_SIT )
        return;
      this->s_Msg.msgBattleCommand.time &= 0xFFF000FF;
      this->s_Msg.msgBattleCommand.time |= (seatNo & 0x7F | ((battleWaitState & 3 | (4 * (battleType & 7))) << 7)) << 8;
    }
    this->s_Msg.msgBattleCommand.time &= 0xFFFFFF80;
    this->s_Msg.msgType = 4;
    this->s_Msg.msgBattleCommand.time |= (16 * (seatFlag & 7)) | myNo & 0xF;
    NetManager::SendMessageW(&g_NetworkManager, &this->s_Msg, 0i64, 3, 0);
    return;
  }
  if ( NetManager::SitSeatRequest(v12, myNo, seatNo, seatFlag, battleType, battleWaitState, 0i64, 0i64) )
  {
    this->s_Msg.msgType = 5;
    if ( seatFlag )
    {
      if ( seatFlag == SEAT_FLAG_SIT )
      {
        this->s_Msg.msgBattleCommand.time &= 0xFFF00090;
        this->s_Msg.msgBattleCommand.time |= myNo & 0xF | 0x10 | ((seatNo & 0x7F | ((battleWaitState & 3 | (4 * (battleType & 7))) << 7)) << 8);
      }
    }
    else
    {
      this->s_Msg.msgBattleCommand.time &= 0xFFFFFF80;
      this->s_Msg.msgBattleCommand.time |= myNo & 0xF;
    }
    NetManager::SendMessageW(&g_NetworkManager, &this->s_Msg, 0i64, 1, 0);
  }
}

void __fastcall AppMain::ST_RoomTableBattleTypeChange(AppMain *this, NETWORK_ROOM_BATTLE_TYPE battleType)
{
  unsigned int v2; // er10
  int v3; // er11
  unsigned int v4; // er8
  int battleWaitState; // er10
  NETWORK_ROOM_BATTLE_TYPE v6; // eax

  v2 = *((_DWORD *)&this->s_RoomMemberInfo[g_NetworkManager.gamedata.myNo] + 4);
  v3 = (v2 >> 7) & 7;
  v4 = v2 & 0x7F;
  battleWaitState = (v2 >> 18) & 3;
  if ( g_NetworkManager.gamedata.roomBattleType == NETWORK_ROOM_BATTLE_TYPE_FREE && v4 % 0xC == 1 )
  {
    if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY )
    {
      v6 = battleType;
      if ( battleType > NETWORK_ROOM_BATTLE_TYPE_SHFFLE )
        v6 = NETWORK_ROOM_BATTLE_TYPE_FIX;
    }
    else
    {
      v6 = NETWORK_ROOM_BATTLE_TYPE_LOSE;
      if ( battleType <= NETWORK_ROOM_BATTLE_TYPE_CONTINUE )
        v6 = battleType;
    }
    AppMain::ST_RoomSendSeatFlag(
      this,
      g_NetworkManager.gamedata.myNo,
      v4,
      (SEAT_FLAG)v3,
      (BATTLE_WAIT_STATE)battleWaitState,
      v6);
  }
}

