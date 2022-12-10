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
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementsystem.cpp"

const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5BDA0
const long GalleyBGMTable[2][43]; // 0x14089B540
std::piecewise_construct_t std::piecewise_construct; // 0x14089B474
float AppMain::GetGalleryRate(); // 0x1400F4460
void AppMain::UnlockGallery(GALLERY_ID id, bool notification); // 0x1400F4870
void AppMain::UnlockStageBGMSoundGallery(SoundId soundID); // 0x1400F4AF0
void AppMain::UnlockGallery_ItemRandom(); // 0x1400F4DF0
long AppMain::GetGalleryCategory(GALLERY_ID id); // 0x1400F4EB0
long AppMain::GetGalleryNo(GALLERY_ID id); // 0x1400F4F80
GALLERY_ID AppMain::ExportLocalToGlobal(long tab, long category, long id); // 0x1400F5190
GALLERY_ID AppMain::GetGalleryID(CHARACTER_NO charaNo); // 0x1400F52E0//decompilation failure at 140A5BDA0!
//decompilation failure at 14089B540!
//decompilation failure at 14089B474!
__int64 __fastcall AppMain::ExportLocalToGlobal(AppMain *this, int tab, int category, int id)
{
  int v4; // edx
  int v5; // edx
  __int64 result; // rax

  if ( tab )
  {
    v4 = tab - 1;
    if ( !v4 )
      return (unsigned int)(id + 450);
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        return (unsigned int)(id + 600);
      return (unsigned int)id;
    }
    if ( category )
    {
      if ( category == 2 )
      {
        switch ( id )
        {
          case '"':
            return 610i64;
          case '#':
            return 611i64;
          case '$':
            return 612i64;
          case '%':
            return 613i64;
          case '&':
            return 614i64;
          case '\'':
            return 615i64;
          case '(':
            return 616i64;
          case ')':
            return 617i64;
          default:
            return (unsigned int)(id + 553);
        }
      }
      else
      {
        return (unsigned int)(id + 550);
      }
    }
    else
    {
      switch ( id )
      {
        case '2':
          return 587i64;
        case '3':
          return 588i64;
        case '4':
          return 589i64;
        case '5':
          return 590i64;
        case '6':
          return 618i64;
        case '7':
          return 619i64;
        case '8':
          return 620i64;
        case '9':
          return 621i64;
        default:
          if ( id > 49 )
            return 0xFFFFFFFFi64;
          else
            return (unsigned int)(id + 500);
      }
    }
  }
  else
  {
    if ( !category )
      return (unsigned int)id;
    if ( category == 1 )
    {
      return (unsigned int)(id + 88);
    }
    else
    {
      result = (unsigned int)(id + 107);
      if ( category != 2 )
        return (unsigned int)(id + 364);
    }
  }
  return result;
}

__int64 __fastcall AppMain::GetGalleryCategory(AppMain *this, GALLERY_ID id)
{
  int v2; // er8
  int v3; // ecx
  int v4; // ecx

  v2 = 0;
  if ( id >= GALLERY_ID_MOVIE )
  {
    if ( id >= GALLERY_ID_SOUND )
    {
      if ( id >= GALLERY_ID_ART )
        v3 = (id < GALLERY_ID_SOUND_BGM_HEIDERN) + 2;
      else
        v3 = 2;
    }
    else
    {
      v3 = 1;
    }
  }
  else
  {
    v3 = 0;
  }
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4
      && v4 == 1
      && id >= GALLERY_ID_SOUND
      && id != GALLERY_ID_SOUND_CH_ROC
      && id != GALLERY_ID_SOUND_CH_YMZ
      && id != GALLERY_ID_SOUND_CH_VNS
      && id != GALLERY_ID_SOUND_CH_WHP
      && id != GALLERY_ID_SOUND_CH_HDR
      && id != GALLERY_ID_SOUND_CH_OSW
      && id != GALLERY_ID_SOUND_CH_MRY
      && id != GALLERY_ID_SOUND_CH_NJD )
    {
      LOBYTE(v2) = id >= GALLERY_ID_SOUND_AN;
      return (unsigned int)(v2 + 1);
    }
    return 0i64;
  }
  if ( id < GALLERY_ID_ITEM_C_0_SIZE )
    return 0i64;
  if ( id < GALLERY_ID_ITEM_C_2 )
    return 1i64;
  LOBYTE(v2) = id >= GALLERY_ID_ITEM_C_3;
  return (unsigned int)(v2 + 2);
}

__int64 __fastcall AppMain::GetGalleryID(AppMain *this, CHARACTER_NO charaNo)
{
  switch ( charaNo )
  {
    case CHARACTER_NO_ROC:
      return 587i64;
    case CHARACTER_NO_YMZ:
      return 588i64;
    case CHARACTER_NO_VNS:
      return 589i64;
    case CHARACTER_NO_WHP:
      return 590i64;
    case CHARACTER_NO_HDR:
      return 618i64;
    case CHARACTER_NO_OSW:
      return 619i64;
    case CHARACTER_NO_MRY:
      return 620i64;
    case CHARACTER_NO_NJD:
      return 621i64;
  }
  if ( charaNo > CHARACTER_NO_VRS )
    return 0xFFFFFFFFi64;
  return (unsigned int)(charaNo + 500);
}

__int64 __fastcall AppMain::GetGalleryNo(AppMain *this, GALLERY_ID id)
{
  int GalleryCategory; // eax
  unsigned int v3; // edx
  int v4; // er9
  int v5; // er9
  int v6; // er9
  __int64 result; // rax
  bool v8; // zf

  GalleryCategory = AppMain::GetGalleryCategory(this, id);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          return v3 - 600;
        else
          return 0i64;
      }
      else if ( GalleryCategory )
      {
        if ( GalleryCategory == 2 )
        {
          switch ( v3 )
          {
            case 0x262u:
              return 34i64;
            case 0x263u:
              return 35i64;
            case 0x264u:
              return 36i64;
            case 0x265u:
              return 37i64;
            case 0x266u:
              return 38i64;
            case 0x267u:
              return 39i64;
            case 0x268u:
              return 40i64;
            case 0x269u:
              return 41i64;
            default:
              return v3 - 553;
          }
        }
        else
        {
          return v3 - 550;
        }
      }
      else
      {
        switch ( v3 )
        {
          case 0x24Bu:
            return 50i64;
          case 0x24Cu:
            return 51i64;
          case 0x24Du:
            return 52i64;
          case 0x24Eu:
            return 53i64;
          case 0x26Au:
            return 54i64;
          case 0x26Bu:
            return 55i64;
          case 0x26Cu:
            return 56i64;
          case 0x26Du:
            return 57i64;
          default:
            return v3 - 500;
        }
      }
    }
    return v3 - 450;
  }
  switch ( GalleryCategory )
  {
    case 0:
      return v3;
    case 1:
      return v3 - 88;
    case 2:
      return v3 - 107;
  }
  v8 = GalleryCategory == 3;
  result = v3 - 364;
  if ( !v8 )
    return v3 - 450;
  return result;
}

float __fastcall AppMain::GetGalleryRate(AppMain *this)
{
  __int64 v1; // rbp
  int v3; // er11
  unsigned int v4; // edi
  __int64 v5; // rsi
  int v6; // er9
  int v7; // er8
  int v8; // er9
  int v9; // er10
  unsigned int v10; // er8
  char v11; // cl
  int v12; // er8
  unsigned __int64 v13; // rax
  char v14; // cl
  unsigned int v15; // edx
  int v16; // eax
  int v17; // er8
  unsigned __int64 v18; // rax
  char v19; // cl
  unsigned int v20; // edx
  int v21; // eax
  unsigned int v22; // edx
  int v23; // eax
  __int64 v24; // rdi
  unsigned int v25; // er11
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // er10
  int v36; // er9
  int v37; // er8
  int v38; // er9
  int v39; // er10
  int v40; // er9
  unsigned int v41; // er8
  char v42; // cl
  unsigned int v43; // er11
  int v44; // er9
  int v45; // er8
  int v46; // er9
  int v47; // er10
  int v48; // er9
  unsigned int v49; // er8
  char v50; // cl

  v1 = 2i64;
  v3 = 0;
  v4 = 2;
  v5 = 87i64;
  do
  {
    v6 = v3 + 1;
    if ( ((0x80000000 >> ((v4 - 2) & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)(v4 - 2) >> 5]) == 0 )
      v6 = v3;
    v7 = v6 + 1;
    if ( ((0x80000000 >> ((v4 - 1) & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)(v4 - 1) >> 5]) == 0 )
      v7 = v6;
    v8 = v7 + 1;
    if ( ((0x80000000 >> (v4 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v4 >> 5]) == 0 )
      v8 = v7;
    v9 = v8 + 1;
    v10 = v4 + 2;
    v11 = v4 + 2;
    if ( ((0x80000000 >> ((v4 + 1) & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)(v4 + 1) >> 5]) == 0 )
      v9 = v8;
    v4 += 5;
    v3 = v9 + 1;
    if ( ((0x80000000 >> (v11 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v10 >> 5]) == 0 )
      v3 = v9;
    --v5;
  }
  while ( v5 );
  v12 = 450;
  do
  {
    v13 = (unsigned __int64)(unsigned int)v12 >> 5;
    v14 = v12++ & 0x1F;
    v15 = this->SaveDataMain.GameData.m_Gallery.m_Flag[v13] & (0x80000000 >> v14);
    v16 = v3 + 1;
    if ( !v15 )
      v16 = v3;
    v3 = v16;
  }
  while ( v12 < 479 );
  v17 = 500;
  do
  {
    v18 = (unsigned __int64)(unsigned int)v17 >> 5;
    v19 = v17++ & 0x1F;
    v20 = this->SaveDataMain.GameData.m_Gallery.m_Flag[v18] & (0x80000000 >> v19);
    v21 = v3 + 1;
    if ( !v20 )
      v21 = v3;
    v3 = v21;
  }
  while ( v17 < 591 );
  v22 = this->SaveDataMain.GameData.m_Gallery.m_Flag[18];
  v23 = v21 + 1;
  v24 = 2i64;
  if ( (v22 & 0x80u) == 0 )
    v23 = v3;
  v25 = 581;
  v26 = v23 + 1;
  if ( (v22 & 0x40) == 0 )
    v26 = v23;
  v27 = v26 + 1;
  if ( (v22 & 0x20) == 0 )
    v27 = v26;
  v28 = v27 + 1;
  if ( (v22 & 0x10) == 0 )
    v28 = v27;
  v29 = v28 + 1;
  if ( (v22 & 8) == 0 )
    v29 = v28;
  v30 = v29 + 1;
  if ( (v22 & 4) == 0 )
    v30 = v29;
  v31 = v30 + 1;
  if ( (v22 & 2) == 0 )
    v31 = v30;
  v32 = v31 + 1;
  if ( (v22 & 1) == 0 )
    v32 = v31;
  v33 = this->SaveDataMain.GameData.m_Gallery.m_Flag[19];
  v34 = v32 + 1;
  if ( v33 >= 0 )
    v34 = v32;
  v35 = v34 + 1;
  if ( (v33 & 0x40000000) == 0 )
    v35 = v34;
  do
  {
    v36 = v35 + 1;
    if ( ((0x80000000 >> ((v25 - 2) & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)(v25 - 2) >> 5]) == 0 )
      v36 = v35;
    v37 = v36 + 1;
    if ( ((0x80000000 >> ((v25 - 1) & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)(v25 - 1) >> 5]) == 0 )
      v37 = v36;
    v38 = v37 + 1;
    if ( ((0x80000000 >> (v25 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v25 >> 5]) == 0 )
      v38 = v37;
    v39 = v38 + 1;
    if ( ((0x80000000 >> ((v25 + 1) & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)(v25 + 1) >> 5]) == 0 )
      v39 = v38;
    v40 = v39 + 1;
    v41 = v25 + 3;
    v42 = v25 + 3;
    if ( ((0x80000000 >> ((v25 + 2) & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)(v25 + 2) >> 5]) == 0 )
      v40 = v39;
    v25 += 6;
    v35 = v40 + 1;
    if ( ((0x80000000 >> (v42 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v41 >> 5]) == 0 )
      v35 = v40;
    --v24;
  }
  while ( v24 );
  v43 = 612;
  do
  {
    v44 = v35 + 1;
    if ( ((0x80000000 >> ((v43 - 2) & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)(v43 - 2) >> 5]) == 0 )
      v44 = v35;
    v45 = v44 + 1;
    if ( ((0x80000000 >> ((v43 - 1) & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)(v43 - 1) >> 5]) == 0 )
      v45 = v44;
    v46 = v45 + 1;
    if ( ((0x80000000 >> (v43 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v43 >> 5]) == 0 )
      v46 = v45;
    v47 = v46 + 1;
    if ( ((0x80000000 >> ((v43 + 1) & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)(v43 + 1) >> 5]) == 0 )
      v47 = v46;
    v48 = v47 + 1;
    v49 = v43 + 3;
    v50 = v43 + 3;
    if ( ((0x80000000 >> ((v43 + 2) & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)(v43 + 2) >> 5]) == 0 )
      v48 = v47;
    v43 += 6;
    v35 = v48 + 1;
    if ( ((0x80000000 >> (v50 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v49 >> 5]) == 0 )
      v35 = v48;
    --v1;
  }
  while ( v1 );
  return (float)v35 / 589.0;
}

void __fastcall AppMain::UnlockGallery(AppMain *this, GALLERY_ID id, bool notification)
{
  unsigned int v5; // edx
  unsigned __int64 v6; // rcx
  unsigned int v7; // er14
  unsigned int v8; // er15
  unsigned int v9; // esi
  GALLERY_TYPE v10; // er12
  int GalleryNo; // edi
  GALLERY_ID v12; // edx
  AppMain *v13; // rcx
  int GalleryCategory; // ebx
  GfxManager *v15; // rax
  AgAchievementsManager *v16; // rcx
  unsigned int v17; // er9
  unsigned int v18; // er8
  unsigned int v19; // er9
  AgAchievementsManager *v20; // rcx
  unsigned __int64 v21; // [rsp+60h] [rbp+8h]
  unsigned int v22; // [rsp+68h] [rbp+10h]

  v5 = 0x80000000 >> (id & 0x1F);
  v6 = (unsigned __int64)(unsigned int)id >> 5;
  v22 = v5;
  v21 = v6;
  if ( (v5 & this->SaveDataMain.GameData.m_Gallery.m_Flag[v6]) != 0 )
    return;
  v7 = 450;
  v8 = 0;
  v9 = 500;
  if ( notification )
  {
    if ( id < GALLERY_ID_MOVIE )
    {
      v10 = GALLERY_TYPE_ITEM;
LABEL_9:
      GalleryNo = AppMain::GetGalleryNo((AppMain *)v6, id);
      GalleryCategory = AppMain::GetGalleryCategory(v13, v12);
      GfxManager::getInstance();
      GfxManager::GFv_AddNotificationGallery(v15, v10, GalleryCategory, GalleryNo);
      v5 = v22;
      v6 = v21;
      goto LABEL_11;
    }
    if ( id < GALLERY_ID_SOUND )
    {
      v10 = GALLERY_TYPE_MOVIE;
      goto LABEL_9;
    }
    if ( (unsigned int)(id - 600) <= 9 )
    {
      v10 = GALLERY_TYPE_ARTWORK;
      goto LABEL_9;
    }
    this->m_NotificationGalleryID = id;
  }
LABEL_11:
  this->SaveDataMain.GameData.m_Gallery.m_Flag[v6] |= v5;
  this->SaveDataMain.GameData.m_Gallery.m_NewFlag[v6] |= v5;
  this->SaveDataMain.GameData.m_Gallery.m_NewFlag[v6] |= v5;
  while ( ((0x80000000 >> (v8 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v8 >> 5]) != 0 )
  {
    if ( (int)++v8 >= 435 )
    {
      if ( id <= 449 && *(char *)(*(_QWORD *)&AppMain::pApp + 2205140i64) <= 1 )
      {
        v16 = (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance;
        *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205140i64) = 1;
        AgAchievementsManager::unlock(v16, (AgAchievementPlatformData *)&achievementData);
      }
      while ( ((0x80000000 >> (v7 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v7 >> 5]) != 0 )
      {
        if ( (int)++v7 >= 479 )
        {
          while ( ((0x80000000 >> (v9 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v9 >> 5]) != 0 )
          {
            if ( (int)++v9 >= 591 )
            {
              v17 = 600;
              v18 = 610;
              while ( ((0x80000000 >> (v17 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v17 >> 5]) != 0 )
              {
                if ( (int)++v17 >= 610 )
                {
                  v19 = 579;
                  while ( ((0x80000000 >> (v19 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v19 >> 5]) != 0 )
                  {
                    if ( (int)++v19 >= 591 )
                    {
                      while ( ((0x80000000 >> (v18 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v18 >> 5]) != 0 )
                      {
                        if ( (int)++v18 >= 622 )
                        {
                          if ( *(char *)(*(_QWORD *)&AppMain::pApp + 2205141i64) <= 1 )
                          {
                            v20 = (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance;
                            *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205141i64) = 1;
                            AgAchievementsManager::unlock(v20, (AgAchievementPlatformData *)&stru_140A9BE80);
                          }
                          return;
                        }
                      }
                      return;
                    }
                  }
                  return;
                }
              }
              return;
            }
          }
          return;
        }
      }
      return;
    }
  }
}

void __fastcall AppMain::UnlockGallery_ItemRandom(AppMain *this)
{
  int v2; // ebx
  GALLERY_ID *v3; // r8
  int i; // eax
  unsigned int Rand32; // eax
  GALLERY_ID id[436]; // [rsp+20h] [rbp-6E8h] BYREF

  memset(id, 0, 0x6CCui64);
  v2 = 0;
  v3 = id;
  for ( i = 0; i < 435; ++i )
  {
    if ( ((0x80000000 >> (i & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)(unsigned int)i >> 5]) == 0 )
    {
      ++v2;
      *v3++ = i;
    }
  }
  if ( v2 )
  {
    Rand32 = RandomMT::getRand32(&this->randMT);
    AppMain::UnlockGallery(this, id[(int)(Rand32 >> 1) % v2], 1);
  }
}

void __fastcall AppMain::UnlockStageBGMSoundGallery(AppMain *this, SoundId soundID)
{
  unsigned int v3; // ebp
  int v4; // er8
  __int64 v5; // rcx
  int v6; // eax
  GALLERY_ID v7; // er12
  AppMain *v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // ebx
  unsigned int v11; // er14
  unsigned int v12; // er15
  int v13; // er13
  GALLERY_ID v14; // edx
  AppMain *v15; // rcx
  unsigned int v16; // er10
  unsigned __int64 v17; // r11
  GfxManager *v18; // rax
  unsigned int v19; // er8
  unsigned int v20; // [rsp+20h] [rbp-58h]
  GfxManager *v21; // [rsp+38h] [rbp-40h]
  int no; // [rsp+90h] [rbp+18h]
  int category; // [rsp+98h] [rbp+20h]

  v3 = 0;
  v4 = 0;
  v5 = 0i64;
  v6 = 48;
  while ( v6 != soundID )
  {
    ++v4;
    v6 = GalleyBGMTable[++v5][0];
    if ( v6 == -1 )
      return;
  }
  v7 = GalleyBGMTable[v4][1];
  if ( v7 != GALLERY_ID_NONE )
  {
    v8 = (AppMain *)(v7 & 0x1F);
    v20 = 0x80000000 >> (char)v8;
    if ( ((0x80000000 >> (char)v8) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)(unsigned int)v7 >> 5]) == 0 )
    {
      v9 = 600;
      v10 = 610;
      v11 = 500;
      v12 = 450;
      if ( v7 >= GALLERY_ID_MOVIE )
      {
        if ( v7 >= GALLERY_ID_SOUND )
        {
          if ( v7 >= GALLERY_ID_ART )
            v13 = (v7 < GALLERY_ID_SOUND_BGM_HEIDERN) + 2;
          else
            v13 = 2;
        }
        else
        {
          v13 = 1;
        }
      }
      else
      {
        v13 = 0;
      }
      category = AppMain::GetGalleryCategory(v8, v7);
      no = AppMain::GetGalleryNo(v15, v14);
      if ( v13 == 2 )
      {
        this->m_NotificationGalleryID = v7;
      }
      else
      {
        v18 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v21 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v21);
          GfxManager::instance = v18;
        }
        GfxManager::GFv_AddNotificationGallery(v18, (GALLERY_TYPE)v13, category, no);
        v16 = v20;
        v17 = (unsigned __int64)(unsigned int)v7 >> 5;
      }
      this->SaveDataMain.GameData.m_Gallery.m_Flag[v17] |= v16;
      this->SaveDataMain.GameData.m_Gallery.m_NewFlag[v17] |= v16;
      this->SaveDataMain.GameData.m_Gallery.m_NewFlag[v17] |= v16;
      while ( ((0x80000000 >> (v3 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v3 >> 5]) != 0 )
      {
        if ( (int)++v3 >= 435 )
        {
          if ( v7 <= 449 && *(char *)(*(_QWORD *)&AppMain::pApp + 2205140i64) <= 1 )
          {
            *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205140i64) = 1;
            AgAchievementsManager::unlock(
              (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
              (AgAchievementPlatformData *)&achievementData);
          }
          while ( ((0x80000000 >> (v12 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v12 >> 5]) != 0 )
          {
            if ( (int)++v12 >= 479 )
            {
              while ( ((0x80000000 >> (v11 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v11 >> 5]) != 0 )
              {
                if ( (int)++v11 >= 591 )
                {
                  while ( ((0x80000000 >> (v9 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v9 >> 5]) != 0 )
                  {
                    if ( (int)++v9 >= 610 )
                    {
                      v19 = 579;
                      while ( ((0x80000000 >> (v19 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v19 >> 5]) != 0 )
                      {
                        if ( (int)++v19 >= 591 )
                        {
                          while ( ((0x80000000 >> (v10 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)v10 >> 5]) != 0 )
                          {
                            if ( (int)++v10 >= 622 )
                            {
                              if ( *(char *)(*(_QWORD *)&AppMain::pApp + 2205141i64) <= 1 )
                              {
                                *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205141i64) = 1;
                                AgAchievementsManager::unlock(
                                  (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
                                  (AgAchievementPlatformData *)&stru_140A9BE80);
                              }
                              return;
                            }
                          }
                          return;
                        }
                      }
                      return;
                    }
                  }
                  return;
                }
              }
              return;
            }
          }
          return;
        }
      }
    }
  }
}

