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
#include "dev/kof/master/development/source/baseproject/jni/game/network/netbattle.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
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
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedata.h"
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
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netbattle.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectmanager/effecttaskmanager.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playedwith.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/onlinesavedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/scene_roommember.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/roommembers.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/exutil.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/auxscript.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.cpp"

enum SCENE_RESLUT
{
	LOAD = 0,
	INIT = 1,
	MOTION = 2,
	ANNOUNCE = 3,
	TELOP = 4,
	RESLUT = 5,
	RESLUT_END = 6,
	CONTINUE = 7,
	POPUP = 8,
	POPUP_WAIT = 9,
	FADEOUT = 10,
};
enum RESULT_TROPHY
{
	RANK_SS = 0,
	RANK_S = 1,
	MEDIUM_BOSS = 2,
	LAST_BOSS = 3,
	TIMEATTACK_1ST = 4,
	TIMEATTACK_SPEED = 5,
	FREE_SINGLE = 6,
	FREE_PARTY = 7,
	FREE_TEAM = 8,
	RANKMATCH_WIN = 9,
	RANKMATCH_LOSE = 10,
	RANKMATCH_DRAW = 11,
	VERSUS = 12,
	MAX = 13,
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B29
const SCENE_RESLUT LOAD = 0x0;
NETWORK_ROOM_BATTLE_TYPE s_BattleType; // 0x140AC65D4
bool g_dirty_flag_result_random; // 0x140AC4B8B
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5F1B0
ONLINE_STATE s_OnlineState; // 0x140AC65E4
void AppMain::ResultRankmatchInit(bool testMode); // 0x1401FC640
void LoadCompleteEventResult(); // 0x1401FC970
void SystemMessageCallback_ReplaySave(long cursor); // 0x1401FCCF0
void AppMain::ST_ResultInit(); // 0x1401FCDA0
void AppMain::ST_ResultExit(); // 0x1401FDDE0
void AppMain::ST_ResultLoop(); // 0x1401FDEA0
void AppMain::ST_ResultLoopPartial(); // 0x1401FF600
bool AppMain::IsResultActionMode(); // 0x1401FFD50
bool AppMain::IsResultContinueMode(); // 0x1401FFE00
bool AppMain::IsResultGameOverMode(); // 0x1401FFEB0
void AppMain::ResultSkip(); // 0x1401FFF70
void AppMain::ResultBGDraw(); // 0x1402000B0
void AppMain::ST_ResultDraw(); // 0x140200290
void AppMain::ResultActionInit(); // 0x140200360
void AppMain::ResultActionExit(); // 0x1402004F0
void AppMain::ResultActionLoop(); // 0x140200680
void AppMain::ResultActionDraw(); // 0x140200E50
void AppMain::ResultTrophyUpdate(); // 0x140201570//decompilation failure at 1408A0B29!
//decompilation failure at 140AC65D4!
//decompilation failure at 140AC4B8B!
//decompilation failure at 140A5F1B0!
//decompilation failure at 140AC65E4!
std::_List_node<int,void *> *__fastcall std::_List_buy<int>::_Buynode<int>(
        std::_List_buy<int> *this,
        std::_List_node<int,void *> *_Next,
        std::_List_node<int,void *> *_Prev,
        int *<_Val_0>)
{
  std::_List_node<int,void *> *result; // rax

  result = (std::_List_node<int,void *> *)std::_List_alloc<std::_List_base_types<std::pair<int const,int>>>::_Buynode0(
                                            (std::_List_alloc<std::_List_base_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand>> > *)this,
                                            (std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *)_Next,
                                            (std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *)_Prev);
  if ( result != (std::_List_node<int,void *> *)-16i64 )
    result->_Myval = *<_Val_0>;
  return result;
}

void __fastcall std::list<int>::_Insert_range<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>>>>(
        std::list<int> *this,
        std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int> >,std::_Iterator_base0> _Where,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > > _First,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > > _Last)
{
  std::_List_node<int,void *> *v4; // rbx
  std::list<int> *v5; // rdi
  std::_List_node<int,void *> *v6; // rdx
  unsigned __int64 Mysize; // rax
  std::_List_node<int,void *> *v9; // [rsp+60h] [rbp+18h]
  std::_List_node<int,void *> *Ptr; // [rsp+68h] [rbp+20h]

  Ptr = _Last._Ptr;
  v9 = _First._Ptr;
  v4 = _Where._Ptr;
  v5 = this;
  while ( _First._Ptr != _Last._Ptr )
  {
    v6 = std::_List_buy<int>::_Buynode<int>(this, v4, v4->_Prev, &_First._Ptr->_Myval);
    Mysize = v5->_Mypair._Myval2._Mysize;
    this = (std::list<int> *)(0xAAAAAAAAAAAAAA9i64 - Mysize);
    if ( Mysize == 0xAAAAAAAAAAAAAA9i64 )
      std::_Xlength_error("list<T> too long");
    v5->_Mypair._Myval2._Mysize = Mysize + 1;
    v4->_Prev = v6;
    v6->_Prev->_Next = v6;
    _First._Ptr = v9->_Next;
    v9 = v9->_Next;
    _Last._Ptr = Ptr;
    v4 = _Where._Ptr;
  }
}

void __fastcall std::list<int>::list<int>(std::list<int> *this, const std::list<int> *_Right)
{
  std::_List_node<int,void *> *v4; // rax

  this->_Mypair._Myval2._Myhead = 0i64;
  this->_Mypair._Myval2._Mysize = 0i64;
  v4 = (std::_List_node<int,void *> *)std::_List_alloc<std::_List_base_types<std::pair<int const,int>>>::_Buynode0(
                                        (std::_List_alloc<std::_List_base_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand>> > *)this,
                                        0i64,
                                        0i64);
  this->_Mypair._Myval2._Myhead = v4;
  std::list<int>::_Insert_range<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>>>>(
    this,
    (std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int> >,std::_Iterator_base0>)v4->_Next,
    (std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >)_Right->_Mypair._Myval2._Myhead->_Next,
    (std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >)_Right->_Mypair._Myval2._Myhead);
}

bool __fastcall AppMain::IsResultActionMode(AppMain *this)
{
  BattleSystem::BattleController *v1; // rbx
  BattleSystem::BattleController *v2; // rax
  GameDataInfo *v3; // rcx
  BattleSystem::BattleController *v5; // [rsp+40h] [rbp+8h]

  v1 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v5 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v5);
    v1 = v2;
    BattleSystem::BattleController::instance = v2;
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v3);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  return v1->resultMember.battleWinnerID != REVERSAL;
}

bool __fastcall AppMain::IsResultContinueMode(AppMain *this)
{
  GameDataInfo *v1; // rcx
  GAME_MODE v2; // ebx
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v5; // [rsp+40h] [rbp+8h]

  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v1);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v2 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v5 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v5);
    BattleSystem::BattleController::instance = v3;
  }
  return v2 == GAME_MODE_STORY && v3->resultMember.battleWinnerID == GUARD_CRASH;
}

char __fastcall AppMain::IsResultGameOverMode(AppMain *this)
{
  GameDataInfo *v1; // rcx
  GAME_MODE v2; // ebx
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v5; // [rsp+40h] [rbp+8h]

  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v1);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v2 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v5 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v5);
    BattleSystem::BattleController::instance = v3;
  }
  if ( v2 == GAME_MODE_MISSION_TIMEATTACK )
  {
    if ( v3->resultMember.battleWinnerID == GUARD_CRASH )
      return 1;
  }
  else if ( v2 == GAME_MODE_MISSION_SURVIVAL )
  {
    return 1;
  }
  return 0;
}

void __fastcall LoadCompleteEventResult()
{
  GfxManager *v0; // rdi
  GfxManager *v1; // rax
  __int64 v2; // r14
  _DWORD *v3; // rbx
  GameDataInfo *v4; // rcx
  GAME_MODE v5; // ecx
  GameDataInfo *v6; // rcx
  GameDataInfo *v7; // rcx
  GameDataInfo *v8; // rcx
  __int64 m_MyPlayerID; // rsi
  GameDataInfo *v10; // rcx
  GameDataInfo *v11; // rcx
  GameDataInfo *v12; // rcx
  GameDataInfo *v13; // rcx
  USER_ID v14; // esi
  FighterOperation *v15; // rax
  int *p_userIndex; // rdx
  int v17; // ecx
  FighterOperation::ListenerNode *p_m_assignListenerListEnd; // rbp
  extension::BiLinkable<FighterOperation::ListenerNode> *m_Next; // rdi
  extension::BiLinkable<FighterOperation::ListenerNode> **p_m_Next; // rcx
  GameDataInfo *v21; // rcx
  USER_ID v22; // edi
  FighterOperation *v23; // rax
  AppMain *v24; // rcx
  _DWORD *v25; // rdx
  FighterOperation::ListenerNode *v26; // rsi
  extension::BiLinkable<FighterOperation::ListenerNode> *v27; // rbx
  extension::BiLinkable<FighterOperation::ListenerNode> **v28; // rcx
  GfxManager *v29; // [rsp+50h] [rbp+8h]

  v0 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v29 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v29);
    v0 = v1;
    GfxManager::instance = v1;
  }
  v2 = *(_QWORD *)&AppMain::pApp;
  v3 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v4);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v5 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  if ( (unsigned int)(v5 - 4) <= 2 || v5 == GAME_MODE_ONLINETRAINING )
  {
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v6);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0] = USER_ID_CPU;
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v7);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1] = USER_ID_CPU;
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v8);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    m_MyPlayerID = `GameDataInfo::getInstance'::`2'::instance.m_MyPlayerID;
    if ( `GameDataInfo::getInstance'::`2'::instance.m_MyPlayerID != PLAYER_ID_NONE )
      GameDataInfo::getInstance()->m_ControllerSetting[m_MyPlayerID] = USER_ID_1P;
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v10);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0]
    || `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1] )
  {
    if ( v0->m_GFXMovie.m_movieProxy.m_ptr )
      v0->m_GFXMovie.m_movieProxy.m_ptr->m_operationGenerator.m_multiControllerMode = ByFighter;
  }
  else if ( v0->m_GFXMovie.m_movieProxy.m_ptr )
  {
    v0->m_GFXMovie.m_movieProxy.m_ptr->m_operationGenerator.m_multiControllerMode = ByUser;
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v11);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v12);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v13);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v14 = `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0];
  v15 = FighterOperation::Instance();
  p_userIndex = &v15->m_slots[0].userIndex;
  if ( v15 != (FighterOperation *)-8i64 )
  {
    v17 = *p_userIndex;
    *p_userIndex = v14;
    v15->m_slots[0].userId = v14;
    if ( v17 != v14 )
    {
      p_m_assignListenerListEnd = &v15->m_assignListenerListEnd;
      m_Next = v15->m_assignListenerListEnd.m_Next;
      if ( m_Next != &v15->m_assignListenerListEnd )
      {
        do
        {
          p_m_Next = &m_Next[-1].m_Next;
          if ( !m_Next )
            p_m_Next = 0i64;
          ((void (__fastcall *)(extension::BiLinkable<FighterOperation::ListenerNode> **, __int64, _QWORD))(*p_m_Next)->m_Next)(
            p_m_Next,
            1i64,
            (unsigned int)v14);
          m_Next = m_Next->m_Next;
        }
        while ( m_Next != p_m_assignListenerListEnd );
      }
    }
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v21);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v22 = `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1];
  v23 = FighterOperation::Instance();
  v25 = &v23->m_slots[1].userIndex;
  if ( v23 != (FighterOperation *)-1488i64 )
  {
    v24 = (AppMain *)(unsigned int)*v25;
    *v25 = v22;
    v23->m_slots[1].userId = v22;
    if ( (_DWORD)v24 != v22 )
    {
      v26 = &v23->m_assignListenerListEnd;
      v27 = v23->m_assignListenerListEnd.m_Next;
      if ( v27 != &v23->m_assignListenerListEnd )
      {
        do
        {
          v28 = &v27[-1].m_Next;
          if ( !v27 )
            v28 = 0i64;
          ((void (__fastcall *)(extension::BiLinkable<FighterOperation::ListenerNode> **, __int64, _QWORD))(*v28)->m_Next)(
            v28,
            2i64,
            (unsigned int)v22);
          v27 = v27->m_Next;
        }
        while ( v27 != v26 );
      }
    }
  }
  AppMain::Sound_UnloadAll(v24, (bool)v25);
  *(_DWORD *)(v2 + 11084) = 1;
}

void __fastcall AppMain::ResultActionDraw(AppMain *this)
{
  BattleSystem::BattleController *v2; // rdi
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v4; // rax
  BattleSystem::BattleController::ROUND_PHASE roundPhase; // eax
  unsigned __int8 v6; // r8
  int v7; // esi
  OGLRender *m_pRender; // rdx
  int m_ShadowBlur; // eax
  int v10; // edx
  int v11; // er9
  OGLRender *v12; // rax
  OGLRender *v13; // rax
  int v14; // ebp
  BattleSystem::BattleController *v15; // rax
  BattleSystem::ResultMemberInfo *p_resultMember; // rax
  int *v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // ecx
  OGLRender *v20; // rax
  int v21; // edx
  unsigned int v22; // ecx
  int v23; // edx
  OGLRender *v24; // rax
  EffectTaskManager *effSystem; // rcx
  int v26; // edx
  Framework::GLManager *v27; // rbx
  unsigned int v28; // ecx
  int v29; // [rsp+40h] [rbp-708h] BYREF
  BattleSystem::BattleController *v30; // [rsp+758h] [rbp+10h] BYREF

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v30 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v30);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
    if ( !v3 )
    {
      v30 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v30);
      BattleSystem::BattleController::instance = v4;
    }
  }
  roundPhase = v2->roundPhase;
  if ( roundPhase && roundPhase != (WALL|DIE) && AppMain::IsResultActionMode(this) )
  {
    v7 = 5;
    if ( v2->roundPhase != 16 )
    {
      if ( !Framework::GLManager::glm->m_paused )
        ++this->ModelRoomSettings.motionBlurFrame;
      if ( this->ModelRoomSettings.motionBlurFrame > this->ModelRoomSettings.motionBlurMaxFrames - 1 )
        this->ModelRoomSettings.motionBlurFrame = 0;
      if ( this->ModelRoomSettings.CharaInfo[0].ppModel._Mypair._Myval2 )
        AppMain::ModelRoomShadowPass(this, 2, v6);
      if ( this->ModelRoomSettings.CharaInfo[1].ppModel._Mypair._Myval2 )
        AppMain::ModelRoomShadowPass(this, 3, v6);
      if ( this->m_pRender->m_WorldLightManager.m_ShadowFXAA )
      {
        AppMain::ApplyFXAAToShadows(this, 0);
        AppMain::ApplyFXAAToShadows(this, 1);
      }
      m_pRender = this->m_pRender;
      m_ShadowBlur = m_pRender->m_WorldLightManager.m_ShadowBlur;
      if ( m_ShadowBlur > 0 )
      {
        AppMain::SimpleBoxBlurEffect(this, m_pRender->m_renderTextures.m_ShadowDepthMap, (float)m_ShadowBlur);
        AppMain::SimpleBoxBlurEffect(
          this,
          &this->m_pRender->m_renderTextures.m_ShadowDepthMap[1],
          (float)this->m_pRender->m_WorldLightManager.m_ShadowBlur);
      }
      AppMain::updateGameLights(this, this->ModelRoomSettings.fCamPos, this->ModelRoomSettings.fCamUp, 0);
      if ( _glewPushGroupMarkerEXT )
        _glewPushGroupMarkerEXT(0, "Model Room Depth Pass");
      if ( _glewPushDebugGroup )
        _glewPushDebugGroup(0x824Au, 1u, 21, "Model Room Depth Pass");
      ++markerCount;
      AppMain::ModelDepthPass(this, 3, 2);
      AppMain::ModelDepthPass(this, 5, 3);
      if ( _glewPopGroupMarkerEXT )
        _glewPopGroupMarkerEXT();
      if ( _glewPopDebugGroup )
        _glewPopDebugGroup();
      --markerCount;
      AppMain::ModelRoomRenderToTexturePass(this, v10, -1, v11);
      v12 = this->m_pRender;
      *(_QWORD *)v12->m_sModelStackCount = 0i64;
      *(_QWORD *)&v12->m_sModelStackCount[2] = 0i64;
      *(_QWORD *)&v12->m_sModelStackCount[4] = 0i64;
      *(_QWORD *)&v12->m_sModelStackCount[6] = 0i64;
    }
    AppMain::ResultBGDraw(this);
    v13 = this->m_pRender;
    *(_QWORD *)v13->m_sModelStackCount = 0i64;
    *(_QWORD *)&v13->m_sModelStackCount[2] = 0i64;
    *(_QWORD *)&v13->m_sModelStackCount[4] = 0i64;
    *(_QWORD *)&v13->m_sModelStackCount[6] = 0i64;
    v14 = 3;
    v15 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v30 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v30);
      BattleSystem::BattleController::instance = v15;
    }
    p_resultMember = &v15->resultMember;
    v17 = &v29;
    v18 = 13i64;
    do
    {
      *(_OWORD *)v17 = *(_OWORD *)&p_resultMember->battleWinnerID;
      *((_OWORD *)v17 + 1) = *(_OWORD *)&p_resultMember->charaNo[2];
      *((_OWORD *)v17 + 2) = *(_OWORD *)&p_resultMember->rivalCharaNo;
      *((_OWORD *)v17 + 3) = *(_OWORD *)&p_resultMember->pActor[1];
      *((_OWORD *)v17 + 4) = *(_OWORD *)&p_resultMember->bFinalKO;
      *((_OWORD *)v17 + 5) = *(_OWORD *)p_resultMember->iLoseCount;
      *((_OWORD *)v17 + 6) = *(_OWORD *)p_resultMember->iStraightWin;
      v17 += 32;
      *((_OWORD *)v17 - 1) = *(_OWORD *)&p_resultMember->scoreInfo.iPerfectBonus;
      p_resultMember = (BattleSystem::ResultMemberInfo *)((char *)p_resultMember + 128);
      --v18;
    }
    while ( v18 );
    *(_OWORD *)v17 = *(_OWORD *)&p_resultMember->battleWinnerID;
    *((_OWORD *)v17 + 1) = *(_OWORD *)&p_resultMember->charaNo[2];
    *((_OWORD *)v17 + 2) = *(_OWORD *)&p_resultMember->rivalCharaNo;
    *((_OWORD *)v17 + 3) = *(_OWORD *)&p_resultMember->pActor[1];
    *((_OWORD *)v17 + 4) = *(_OWORD *)&p_resultMember->bFinalKO;
    *((_QWORD *)v17 + 10) = *(_QWORD *)p_resultMember->iLoseCount;
    if ( v29 == 2 )
    {
      v14 = 5;
      v7 = 3;
    }
    AppMain::ResultScreenBlendFrameBuffers(this, v14, v7);
    AppMain::BlendMasks(this);
    glBindRenderbufferAG(v19, this->m_pRender->m_renderTextures.m_FullScreenTexture[0].m_FrameBufferID);
    v20 = this->m_pRender;
    *(_QWORD *)v20->m_sModelStackCount = 0i64;
    *(_QWORD *)&v20->m_sModelStackCount[2] = 0i64;
    *(_QWORD *)&v20->m_sModelStackCount[4] = 0i64;
    *(_QWORD *)&v20->m_sModelStackCount[6] = 0i64;
    GraphicsOpt::lock(this->g);
    glClearAG(0x100u);
    if ( dword_140A9606C != 1 )
    {
      dword_140A9606C = 1;
      glEnable(0xB71u);
    }
    glDepthFunc(0x203u);
    if ( m_DepthMask != 1 )
    {
      m_DepthMask = 1;
      glDepthMask(1u);
    }
    if ( dword_140A96054 != 1 )
    {
      dword_140A96054 = 1;
      glEnable(0xB44u);
    }
    glCullFace(0x405u);
    OGLRender::setProjection(this->m_pRender, this->ModelRoomSettings.mProj);
    OGLRender::setViewTrans(this->m_pRender, &this->ModelRoomSettings.mView);
    OGLRender::setInvViewTrans(this->m_pRender, &this->ModelRoomSettings.mInvView);
    EffectTaskManager::renderStack(this->effSystem, 2);
    Graphics::drawStack(this->g->g);
    if ( this->ModelRoomSettings.postprocessSettings.bgBloomSettings.bloomOn
      && this->SaveDataMain.GraphicsOptionData.bBloomEnabled )
    {
      AppMain::PreBloomEffectPass(this, v21);
      if ( this->ModelRoomSettings.postprocessSettings.charBloomSettings.bloomOn )
      {
        AppMain::ResultsSceneHighlightExtractionPass(this, v14, 1);
        AppMain::ResultsSceneHighlightExtractionPass(this, v7, 0);
      }
      if ( this->ModelRoomSettings.postprocessSettings.bgBloomSettings.bloomMethod )
        AppMain::ResultsSceneNewBloomEffectPass(this, v23);
      else
        AppMain::ResultsSceneBloomEffectPass(this, v23);
    }
    if ( this->ModelRoomSettings.postprocessSettings.dofSettings.fightDofOn
      && this->SaveDataMain.GraphicsOptionData.bDOFEnabled )
    {
      AppMain::DepthOfFieldEffect(
        this,
        this->ModelRoomSettings.postprocessSettings.dofSettings.fightDofNear,
        this->ModelRoomSettings.postprocessSettings.dofSettings.fightDofFar,
        this->ModelRoomSettings.postprocessSettings.dofSettings.fightDofStrength);
    }
    glBindRenderbufferAG(v22, this->m_pRender->m_renderTextures.m_FullScreenTexture[0].m_FrameBufferID);
    v24 = this->m_pRender;
    *(_QWORD *)v24->m_sModelStackCount = 0i64;
    *(_QWORD *)&v24->m_sModelStackCount[2] = 0i64;
    *(_QWORD *)&v24->m_sModelStackCount[4] = 0i64;
    *(_QWORD *)&v24->m_sModelStackCount[6] = 0i64;
    GraphicsOpt::lock(this->g);
    glClearAG(0x100u);
    if ( dword_140A9606C != 1 )
    {
      dword_140A9606C = 1;
      glEnable(0xB71u);
    }
    glDepthFunc(0x203u);
    if ( m_DepthMask != 1 )
    {
      m_DepthMask = 1;
      glDepthMask(1u);
    }
    if ( dword_140A96054 != 1 )
    {
      dword_140A96054 = 1;
      glEnable(0xB44u);
    }
    glCullFace(0x405u);
    OGLRender::setProjection(this->m_pRender, this->ModelRoomSettings.mProj);
    OGLRender::setViewTrans(this->m_pRender, &this->ModelRoomSettings.mView);
    OGLRender::setInvViewTrans(this->m_pRender, &this->ModelRoomSettings.mInvView);
    ((void (__fastcall *)(EffectPs4System *))this->effSystem->m_EffectPs4System.setBufferDownScale)(&this->effSystem->m_EffectPs4System);
    EffectTaskManager::renderStack(this->effSystem, 3);
    EffectTaskManager::renderStack(this->effSystem, 4);
    if ( v2->roundPhase != 16 )
    {
      effSystem = this->effSystem;
      effSystem->m_renderThreadStack._Mypair._Myval2._Mylast = effSystem->m_renderThreadStack._Mypair._Myval2._Myfirst;
      effSystem->updateVertexBufferFlag = 0;
    }
    OGLRender::drawStack(this->m_pRender, 1u, 0);
    Graphics::drawStack(this->g->g);
    if ( this->ModelRoomSettings.postprocessSettings.fxaaSettings.fxaaOn
      && this->SaveDataMain.GraphicsOptionData.bFXAAEnabled )
    {
      AppMain::ApplyFXAA(this, v26);
    }
    if ( v2->roundPhase == MAIN )
    {
      v27 = Framework::GLManager::glm;
      v28 = Framework::GLManager::glm->systemRenderID[Framework::GLManager::glm->m_backBufferIndex];
      Framework::GLManager::glm->currentRenderID = v28;
      v27->m_bOpenGLBlocked = 1;
      _glewBindFramebuffer(0x8D40u, *(_DWORD *)&v27->m_buffer.m_freeIDs[12 * (unsigned __int8)v28 + 15]);
      v27->m_bOpenGLBlocked = 0;
      LODWORD(v30) = 36064;
      _glewDrawBuffers(1, (const unsigned int *)&v30);
      v27->m_outputMask = 1;
    }
    else
    {
      AppMain::DrawFullScreenTextureToScreen(this);
    }
  }
  else
  {
    GraphicsOpt::lock(this->g);
    if ( m_DepthMask != 1 )
    {
      m_DepthMask = 1;
      glDepthMask(1u);
    }
    glClearAG(0x100u);
    Graphics::drawStack(this->g->g);
  }
}

void __fastcall AppMain::ResultActionExit(AppMain *this)
{
  unsigned int i; // ebx
  extension::SoundManager *v3; // rax
  BattleSystem::BattleController *v4; // rax
  AppMain *j; // rbx
  CharaDataUnify *bv; // rdi
  AppMain *k; // rbx
  CharaDataUnify *v8; // rdi
  CharaDataUnify *Myval2; // rbx
  bool v10; // dl
  AppMain *v11; // rcx
  extension::SoundManager *v12; // [rsp+50h] [rbp+8h]
  BattleSystem::BattleController *v13; // [rsp+50h] [rbp+8h]

  for ( i = 0; i < 0x11; ++i )
  {
    v3 = extension::SoundManager::the_instance;
    if ( !extension::SoundManager::the_instance )
    {
      v12 = (extension::SoundManager *)operator new(0x310ui64);
      extension::SoundManager::SoundManager(v12);
      extension::SoundManager::the_instance = v3;
    }
    extension::SoundManager::stopGroupSE(v3, i);
  }
  v4 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v13 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v13);
    BattleSystem::BattleController::instance = v4;
  }
  ActionSystem::AllDelete(&v4->actSystem);
  AppMain::releasePS4ModelRoom(this, 0);
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset((extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 16i64));
  for ( j = (AppMain *)this->m_pPlayerCharaData; j != (AppMain *)this->m_pSupportCharaData; j = (AppMain *)((char *)j + 8) )
  {
    bv = (CharaDataUnify *)j->bv;
    j->bv = 0i64;
    if ( bv )
    {
      CharaDataUnify::ReleaseData(bv);
      operator delete(bv, 0x68ui64);
    }
  }
  for ( k = (AppMain *)this->m_pSupportCharaData; k != (AppMain *)&this->m_pCommonCharaData; k = (AppMain *)((char *)k + 8) )
  {
    v8 = (CharaDataUnify *)k->bv;
    k->bv = 0i64;
    if ( v8 )
    {
      CharaDataUnify::ReleaseData(v8);
      operator delete(v8, 0x68ui64);
    }
  }
  Myval2 = this->m_pCommonCharaData._Mypair._Myval2;
  this->m_pCommonCharaData._Mypair._Myval2 = 0i64;
  if ( Myval2 )
  {
    CharaDataUnify::ReleaseData(Myval2);
    operator delete(Myval2, 0x68ui64);
  }
  EffectTaskManager::cleanup(this->effSystem);
  AppMain::Sound_UnloadAll(v11, v10);
}

void __fastcall AppMain::ResultActionInit(AppMain *this)
{
  RestrictRingBuffer<int> *Myval2; // rax
  RestrictRingBuffer<int> *v3; // rax
  RestrictRingBuffer<InputKeyHistory::History> *v4; // rax
  RestrictRingBuffer<int> *v5; // rax
  RestrictRingBuffer<int> *v6; // rax
  RestrictRingBuffer<InputKeyHistory::History> *v7; // rax
  BattleSystem::BattleController *v8; // rax
  BattleSystem::BattleController *v9; // rax
  SoundVolumeModulation *v10; // rax
  __int64 v11; // rdx
  float *p_fCurrent; // rcx
  BattleSystem::BattleController *v13; // [rsp+48h] [rbp+10h]
  BattleSystem::BattleController *v14; // [rsp+48h] [rbp+10h]

  Myval2 = this->m_KeyData[0].pKeyBuffer._Mypair._Myval2;
  Myval2->uiDataSize = 0;
  *(_QWORD *)&Myval2->uiBeginIndex = 0i64;
  v3 = this->m_CmdKeyData[0].pKeyBuffer._Mypair._Myval2;
  v3->uiDataSize = 0;
  *(_QWORD *)&v3->uiBeginIndex = 0i64;
  v4 = this->m_KeyHistory[0].pKeyHistory._Mypair._Myval2;
  v4->uiDataSize = 0;
  *(_QWORD *)&v4->uiBeginIndex = 0i64;
  v5 = this->m_KeyData[1].pKeyBuffer._Mypair._Myval2;
  v5->uiDataSize = 0;
  *(_QWORD *)&v5->uiBeginIndex = 0i64;
  v6 = this->m_CmdKeyData[1].pKeyBuffer._Mypair._Myval2;
  v6->uiDataSize = 0;
  *(_QWORD *)&v6->uiBeginIndex = 0i64;
  v7 = this->m_KeyHistory[1].pKeyHistory._Mypair._Myval2;
  v7->uiDataSize = 0;
  *(_QWORD *)&v7->uiBeginIndex = 0i64;
  if ( AppMain::IsResultActionMode(this) )
  {
    AppMain::SetUpModelRoomCamera(this);
    AppMain::SetupWorldLights(this);
    AppMain::SetUpPlayerLights(this);
    AppMain::SetUpStageLights(this);
    EffectTaskManager::initialize(this->effSystem);
    v8 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v13 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v13);
      BattleSystem::BattleController::instance = v8;
    }
    BattleSystem::BattleController::ResultInit(v8);
  }
  else
  {
    v9 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v14 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v14);
      BattleSystem::BattleController::instance = v9;
    }
    *(_QWORD *)&v9->roundPhase = 16i64;
  }
  v10 = `anonymous namespace'::SoundVolumeModulation::instance;
  if ( !`anonymous namespace'::SoundVolumeModulation::instance )
  {
    v10 = (SoundVolumeModulation *)operator new(0xB8ui64);
    v11 = 7i64;
    p_fCurrent = &v10->modulationParam[0].fCurrent;
    do
    {
      *(p_fCurrent - 2) = 1.0;
      *(p_fCurrent - 1) = 1.0;
      *p_fCurrent = 1.0;
      *(_QWORD *)(p_fCurrent + 1) = 1065353216i64;
      *((_BYTE *)p_fCurrent + 12) = 0;
      p_fCurrent += 6;
      --v11;
    }
    while ( v11 );
    v10->lastFrameTimePoint = 0i64;
    v10->lastFrameTimePointIsValid = 0;
    `anonymous namespace'::SoundVolumeModulation::instance = v10;
  }
  *(_QWORD *)&v10->modulationParam[0].fTo = 1065353216i64;
  v10->modulationParam[0].fCurrent = 1.0;
}

void __fastcall AppMain::ResultActionLoop(AppMain *this)
{
  BattleSystem::BattleController *v2; // rdi
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v4; // r13
  BattleSystem::BattleController *v5; // rax
  bool v6; // r12
  int i; // ebx
  int j; // ebx
  __int64 k; // r14
  ActionSystem::ActorList *m; // rbx
  Actor *pActor; // rcx
  int n; // ebx
  int ii; // ebx
  __int64 jj; // r14
  ActionSystem::ActorList *kk; // rbx
  Actor *v16; // rcx
  int mm; // ebx
  int v18; // er14
  int nn; // ebx
  int i1; // ebx
  __int64 i2; // r15
  ActionSystem::ActorList *i3; // rbx
  Actor *v23; // rcx
  Fw::cJobManager *v24; // rdx
  EffectTaskManager *effSystem; // rcx
  int v26; // eax
  Fw::cJobManager *v27; // rdx
  float upFogStrength; // xmm3_4
  float upFogHeightExp; // xmm2_4
  float upFogHeight; // xmm1_4
  float upFogDistExp; // xmm0_4
  OGLFog *p_m_GroundFog; // rcx
  float downFogStrength; // xmm3_4
  float downFogHeightExp; // xmm2_4
  float downFogHeight; // xmm1_4
  float downFogDistExp; // xmm0_4
  OGLFog *v37; // rcx
  OGLRender *m_pRender; // rax
  float v39; // xmm4_4
  float v40; // xmm3_4
  float v41; // xmm2_4
  float v42; // xmm0_4
  float v43; // xmm3_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm0_4
  OGLFog *p_m_SkyFog; // rcx
  float v48; // xmm3_4
  float v49; // xmm2_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  OGLFog *v52; // rcx
  OGLRender *v53; // rax
  float v54; // xmm4_4
  float v55; // xmm3_4
  float v56; // xmm1_4
  float v57; // xmm0_4
  BattleSystem::BattleController::ROUND_PHASE roundPhase; // eax
  OGLRender *v59; // rax
  OGLRender *v60; // rax
  EffectTaskManager *v61; // rcx
  std::function<void __cdecl(Actor &)> v62; // [rsp+28h] [rbp-58h] BYREF
  BattleSystem::BattleController *v63; // [rsp+B8h] [rbp+38h]
  BattleSystem::BattleController *v64; // [rsp+B8h] [rbp+38h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v63 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v63);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  v4 = v2;
  if ( !v2 )
  {
    v64 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v64);
    v2 = v5;
    BattleSystem::BattleController::instance = v5;
  }
  v6 = bBattleLastUpdateFrame;
  if ( v4->roundPhase == MAIN )
  {
    this->m_bFadeLock = 0;
    BattleSystem::BattleController::SetResultActionPhase(v4);
  }
  if ( AppMain::IsResultActionMode(this) && v4->roundPhase != 16 )
  {
    BattleSystem::BattleController::Update(v4);
    for ( i = 0; i <= 3; ++i )
      ActionSystem::PreCaller(&v2->actSystem, i);
    for ( j = 0; j <= 3; ++j )
      ActionSystem::MainCaller(&v2->actSystem, j);
    for ( k = 0i64; k <= 3; ++k )
    {
      for ( m = v2->actSystem.ppPriStart[k]; m; m = m->pNext )
      {
        pActor = m->pActor;
        if ( pActor->systemStat == MAIN && !pActor->bSkipSyncPosture )
          pActor->SyncPosture(pActor);
      }
    }
    for ( n = 4; n <= 6; ++n )
      ActionSystem::PreCaller(&v2->actSystem, n);
    for ( ii = 4; ii <= 6; ++ii )
      ActionSystem::MainCaller(&v2->actSystem, ii);
    for ( jj = 4i64; jj <= 6; ++jj )
    {
      for ( kk = v2->actSystem.ppPriStart[jj]; kk; kk = kk->pNext )
      {
        v16 = kk->pActor;
        if ( v16->systemStat == MAIN && !v16->bSkipSyncPosture )
          v16->SyncPosture(v16);
      }
    }
    for ( mm = 0; mm <= 6; ++mm )
      ActionSystem::LateCaller(&v2->actSystem, mm);
    v18 = 7;
    for ( nn = 7; nn <= 8; ++nn )
      ActionSystem::PreCaller(&v2->actSystem, nn);
    for ( i1 = 7; i1 <= 8; ++i1 )
      ActionSystem::MainCaller(&v2->actSystem, i1);
    for ( i2 = 7i64; i2 <= 8; ++i2 )
    {
      for ( i3 = v2->actSystem.ppPriStart[i2]; i3; i3 = i3->pNext )
      {
        v23 = i3->pActor;
        if ( v23->systemStat == MAIN && !v23->bSkipSyncPosture )
          v23->SyncPosture(v23);
      }
    }
    do
      ActionSystem::LateCaller(&v2->actSystem, v18++);
    while ( v18 <= 8 );
    EffectTaskManager::updateStack(this->effSystem, v24);
    if ( v6 )
    {
      effSystem = this->effSystem;
      v26 = ++effSystem->UseDataBufferNum;
      if ( v26 >= 2 )
        v26 = 0;
      effSystem->UseDataBufferNum = v26;
    }
    ActionSystem::CameraLateCalc(&v2->actSystem);
    AppMain::checkSpecialEffectSetting(this);
    AppMain::renderSetCamera(this, 0, -1);
    EffectTaskManager::updateBufferStack(this->effSystem, v27);
    this->m_pRender->m_GroundFog.m_bOn = this->ModelRoomSettings.postprocessSettings.groundFogSettings.fogOn;
    if ( this->ModelRoomSettings.postprocessSettings.groundFogSettings.fogOn )
    {
      this->m_pRender->m_GroundFog.m_calcType = this->ModelRoomSettings.postprocessSettings.groundFogSettings.calcType;
      upFogStrength = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogStrength;
      upFogHeightExp = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogHeightExp;
      upFogHeight = (float)this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogHeight;
      upFogDistExp = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogDistExp;
      p_m_GroundFog = &this->m_pRender->m_GroundFog;
      p_m_GroundFog->m_fUpDistance = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogDist;
      p_m_GroundFog->m_fUpDistanceExp = upFogDistExp;
      p_m_GroundFog->m_fUpHeight = upFogHeight;
      p_m_GroundFog->m_fUpHeightExp = upFogHeightExp;
      p_m_GroundFog->m_fUpStrength = upFogStrength;
      p_m_GroundFog->m_UpColour[0] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogColour[0];
      p_m_GroundFog->m_UpColour[1] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogColour[1];
      p_m_GroundFog->m_UpColour[2] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogColour[2];
      p_m_GroundFog->m_UpColour[3] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogColour[3];
      downFogStrength = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogStrength;
      downFogHeightExp = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogHeightExp;
      downFogHeight = (float)this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogHeight;
      downFogDistExp = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogDistExp;
      v37 = &this->m_pRender->m_GroundFog;
      v37->m_fDownDistance = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogDist;
      v37->m_fDownDistanceExp = downFogDistExp;
      v37->m_fDownHeight = downFogHeight;
      v37->m_fDownHeightExp = downFogHeightExp;
      v37->m_fDownStrength = downFogStrength;
      v37->m_DownColour[0] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogColour[0];
      v37->m_DownColour[1] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogColour[1];
      v37->m_DownColour[2] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogColour[2];
      v37->m_DownColour[3] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogColour[3];
      m_pRender = this->m_pRender;
      v39 = 1.0 / (float)(m_pRender->m_GroundFog.m_fDownHeight + 200.0);
      v40 = (float)(m_pRender->m_GroundFog.m_fUpDistance - 1.0) * 0.00024420026;
      v41 = (float)(m_pRender->m_GroundFog.m_fUpHeight + 200.0) / 400.0;
      v42 = (float)(m_pRender->m_GroundFog.m_fDownDistance - 1.0) * 0.00024420026;
      m_pRender->m_GroundFog.m_fShaderDistDivisor = 0.00024420026;
      m_pRender->m_GroundFog.m_fShaderUpDistance = v40;
      m_pRender->m_GroundFog.m_fShaderUpHeight = v41;
      m_pRender->m_GroundFog.m_fShaderDownDistance = v42;
      m_pRender->m_GroundFog.m_fShaderExtraHeightSetting = v39;
    }
    this->m_pRender->m_SkyFog.m_bOn = this->ModelRoomSettings.postprocessSettings.skyFogSettings.fogOn;
    if ( this->ModelRoomSettings.postprocessSettings.skyFogSettings.fogOn )
    {
      this->m_pRender->m_SkyFog.m_calcType = this->ModelRoomSettings.postprocessSettings.skyFogSettings.calcType;
      v43 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogStrength;
      v44 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogHeightExp;
      v45 = (float)this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogHeight;
      v46 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogDistExp;
      p_m_SkyFog = &this->m_pRender->m_SkyFog;
      p_m_SkyFog->m_fUpDistance = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogDist;
      p_m_SkyFog->m_fUpDistanceExp = v46;
      p_m_SkyFog->m_fUpHeight = v45;
      p_m_SkyFog->m_fUpHeightExp = v44;
      p_m_SkyFog->m_fUpStrength = v43;
      p_m_SkyFog->m_UpColour[0] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogColour[0];
      p_m_SkyFog->m_UpColour[1] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogColour[1];
      p_m_SkyFog->m_UpColour[2] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogColour[2];
      p_m_SkyFog->m_UpColour[3] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogColour[3];
      v48 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogStrength;
      v49 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogHeightExp;
      v50 = (float)this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogHeight;
      v51 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogDistExp;
      v52 = &this->m_pRender->m_SkyFog;
      v52->m_fDownDistance = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogDist;
      v52->m_fDownDistanceExp = v51;
      v52->m_fDownHeight = v50;
      v52->m_fDownHeightExp = v49;
      v52->m_fDownStrength = v48;
      v52->m_DownColour[0] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogColour[0];
      v52->m_DownColour[1] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogColour[1];
      v52->m_DownColour[2] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogColour[2];
      v52->m_DownColour[3] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogColour[3];
      v53 = this->m_pRender;
      v54 = 1.0 / (float)(1000.0 - v53->m_SkyFog.m_fDownHeight);
      v55 = (float)(v53->m_SkyFog.m_fUpDistance - 1.0) * 0.00024420026;
      v56 = 1.0 / (float)(1000.0 - v53->m_SkyFog.m_fUpHeight);
      v57 = (float)(v53->m_SkyFog.m_fDownDistance - 1.0) * 0.00024420026;
      v53->m_SkyFog.m_fShaderDistDivisor = 0.00024420026;
      v53->m_SkyFog.m_fShaderUpDistance = v55;
      v53->m_SkyFog.m_fShaderUpHeight = v56;
      v53->m_SkyFog.m_fShaderDownDistance = v57;
      v53->m_SkyFog.m_fShaderExtraHeightSetting = v54;
    }
    if ( this->m_ReslutAlpha >= 255 && v4->resultMember.bFinalKO )
    {
      this->ModelRoomSettings.framebufferColour[0] = 255;
      this->ModelRoomSettings.framebufferColour[1] = 255;
      this->ModelRoomSettings.framebufferColour[2] = 255;
    }
    else
    {
      *(_QWORD *)this->ModelRoomSettings.framebufferColour = 0i64;
      this->ModelRoomSettings.framebufferColour[2] = 0;
    }
    roundPhase = v4->roundPhase;
    if ( roundPhase && roundPhase != (WALL|DIE) )
    {
      v59 = this->m_pRender;
      if ( v59->m_RenderStackNo < 8 )
        v59->m_RenderStackNo = 2;
      ActionSystem::DrawCaller(&v2->actSystem, 2);
      v60 = this->m_pRender;
      if ( v60->m_RenderStackNo < 8 )
        v60->m_RenderStackNo = 3;
      ActionSystem::DrawCaller(&v2->actSystem, 3);
      v62._Mystorage._Ptrs[7] = 0i64;
      if ( AppMain::CheckProjBlendActor )
      {
        v62._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<void (*)(Actor &),std::allocator<int>,void,Actor &>::`vftable';
        v62._Mystorage._Ptrs[1] = (std::_Func_base<void,Actor &> *)AppMain::CheckProjBlendActor;
        v62._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v62;
      }
      ActionSystem::FuncCallRequest(&v2->actSystem, (Actor *)2, &v62);
      v62._Mystorage._Ptrs[7] = 0i64;
      if ( AppMain::CheckProjBlendActor )
      {
        v62._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<void (*)(Actor &),std::allocator<int>,void,Actor &>::`vftable';
        v62._Mystorage._Ptrs[1] = (std::_Func_base<void,Actor &> *)AppMain::CheckProjBlendActor;
        v62._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v62;
      }
      ActionSystem::FuncCallRequest(&v2->actSystem, (Actor *)3, &v62);
      v62._Mystorage._Ptrs[7] = 0i64;
      if ( AppMain::CheckProjBlendActor )
      {
        v62._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<void (*)(Actor &),std::allocator<int>,void,Actor &>::`vftable';
        v62._Mystorage._Ptrs[1] = (std::_Func_base<void,Actor &> *)AppMain::CheckProjBlendActor;
        v62._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v62;
      }
      ActionSystem::FuncCallRequest(&v2->actSystem, (Actor *)4, &v62);
      v62._Mystorage._Ptrs[7] = 0i64;
      if ( AppMain::CheckProjBlendActor )
      {
        v62._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<void (*)(Actor &),std::allocator<int>,void,Actor &>::`vftable';
        v62._Mystorage._Ptrs[1] = (std::_Func_base<void,Actor &> *)AppMain::CheckProjBlendActor;
        v62._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v62;
      }
      ActionSystem::FuncCallRequest(&v2->actSystem, (Actor *)5, &v62);
      ActionSystem::DrawCaller(&v2->actSystem, 0, 1);
      ActionSystem::DrawCaller(&v2->actSystem, 6, 9);
      if ( !v6 )
      {
        v61 = this->effSystem;
        v61->m_renderThreadStack._Mypair._Myval2._Mylast = v61->m_renderThreadStack._Mypair._Myval2._Myfirst;
        v61->updateVertexBufferFlag = 0;
      }
      if ( v4->roundPhase != 16 && v6 )
      {
        AppMain::setupLightUniforms(this, -1);
        AppMain::setupShadowMatrices(this);
      }
    }
  }
}

void __fastcall AppMain::ResultBGDraw(AppMain *this)
{
  BattleSystem::BattleController *v2; // rdi
  BattleSystem::BattleController *v3; // rax
  unsigned int v4; // ecx
  int v5; // esi
  Graphics *v6; // rcx
  int v7; // edx
  int v8; // er8
  int v9; // er9
  unsigned int roundPhase; // eax
  unsigned int v11; // edx
  Graphics *v12; // rcx
  extension::GFXIMovieStack *v13; // rax
  int m_ReslutAlpha; // eax
  unsigned int color; // eax
  int v16; // edx
  BattleSystem::BattleController *v17; // [rsp+68h] [rbp+10h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v17 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v17);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  v5 = -16777216;
  if ( !AppMain::IsResultActionMode(this) )
  {
    GraphicsOpt::lock(this->g);
    v7 = -16777216;
    if ( v2->resultMember.bFinalKO )
      v7 = -1;
    Graphics::clearScreen(v6, v7);
    if ( this->m_ReslutAlpha >= 255 )
      goto LABEL_24;
    goto LABEL_14;
  }
  roundPhase = v2->roundPhase;
  if ( roundPhase <= 1 || roundPhase == 14 )
  {
    GraphicsOpt::lock(this->g);
    v16 = -16777216;
    if ( v2->resultMember.bFinalKO )
      v16 = -1;
  }
  else
  {
    v11 = this->m_pRender->m_renderTextures.m_RenderBufferID[6];
    if ( !v11 )
      return;
    glBindRenderbufferAG(v4, v11);
    Framework::GLManager::glm->currentFramebufferID = Framework::GLManager::glm->systemBufferID[Framework::GLManager::glm->m_backBufferIndex];
    GraphicsOpt::lock(this->g);
    if ( dword_140A9606C )
    {
      dword_140A9606C = 0;
      glDisable(0xB71u);
    }
    glDepthMask(0);
    if ( this->m_ReslutAlpha < 255 )
    {
LABEL_14:
      SyncMenuImage::Draw(&this->m_SyncMenuBG, this->g, v8, v9, 1.0);
      Graphics::drawStack(this->g->g);
      v13 = extension::GFXIMovieStack::Instance();
      extension::GFXIMovieStack::renderPriority(v13, 0, 100);
      m_ReslutAlpha = this->m_ReslutAlpha;
      if ( m_ReslutAlpha > 0 )
      {
        color = m_ReslutAlpha << 24;
        if ( v2->resultMember.bFinalKO )
          color += 0xFFFFFF;
        GraphicsOpt::fillRect(this->g, 0, 0, this->m_iScreenW, this->m_iScreenH, color);
      }
      goto LABEL_24;
    }
    if ( v2->resultMember.bFinalKO )
      v5 = -1;
    v16 = v5;
  }
  Graphics::clearScreen(v12, v16);
LABEL_24:
  Graphics::drawStack(this->g->g);
}

void __fastcall AppMain::ResultRankmatchInit(AppMain *this, bool testMode)
{
  BattleSystem::BattleController *v4; // rbx
  BattleSystem::BattleController *v5; // rax
  GameDataInfo *v6; // rcx
  BATTLE_RESULT_TYPE onlineResult; // ecx
  __int32 v8; // ecx
  std::bitset<61>::reference *v9; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v11; // rax
  unsigned __int64 v12; // rdx
  std::bitset<61>::reference *v13; // rax
  unsigned __int64 v14; // rdx
  clasChkDisconOnlineSv *v15; // rax
  bool v16; // dl
  NETWORK_TITLE updated; // eax
  __int64 v18; // rdx
  const char *NetworkTitleName; // rax
  GfxManager *v20; // rax
  __int64 v21; // rax
  int v22; // er8
  __int64 v23; // rdx
  const char *v24; // rcx
  bool IsRoomOwner; // al
  bool v26; // dl
  BattleSystem::BattleController *v27; // [rsp+20h] [rbp-1E8h]
  GfxManager *v28; // [rsp+20h] [rbp-1E8h]
  __int128 v29; // [rsp+20h] [rbp-1E8h]
  std::bitset<61>::reference result; // [rsp+38h] [rbp-1D0h] BYREF
  std::bitset<61>::reference v31; // [rsp+48h] [rbp-1C0h] BYREF
  std::bitset<61>::reference v32; // [rsp+58h] [rbp-1B0h] BYREF
  char _Buffer[256]; // [rsp+F0h] [rbp-118h] BYREF

  AppMain::CheckGradeSkipEnd(this);
  if ( !testMode )
  {
    v4 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v27 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v27);
      v4 = v5;
      BattleSystem::BattleController::instance = v5;
    }
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                              + 40i64) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v6);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    if ( !`GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag
      && (*((_DWORD *)&g_NetworkManager.gamedata.player_data[(unsigned __int8)g_NetworkManager.gamedata.myNo] + 4) & 0xC0000) == 0 )
    {
      onlineResult = v4->resultMember.onlineResult;
      if ( onlineResult )
      {
        v8 = onlineResult - 1;
        if ( v8 )
        {
          if ( v8 == 1 )
          {
            v9 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 0xBui64);
            Mypos = v9->_Mypos;
            if ( Mypos >= 0xD )
              std::_Xout_of_range("invalid bitset<N> position");
            *((_DWORD *)v9->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (v9->_Mypos & 0x1F);
          }
        }
        else
        {
          v11 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &v31, 0xAui64);
          v12 = v11->_Mypos;
          if ( v12 >= 0xD )
            std::_Xout_of_range("invalid bitset<N> position");
          *((_DWORD *)v11->_Pbitset->_Array + (v12 >> 5)) |= 1 << (v11->_Mypos & 0x1F);
        }
      }
      else
      {
        v13 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &v32, 9ui64);
        v14 = v13->_Mypos;
        if ( v14 >= 0xD )
          std::_Xout_of_range("invalid bitset<N> position");
        *((_DWORD *)v13->_Pbitset->_Array + (v14 >> 5)) |= 1 << (v13->_Mypos & 0x1F);
      }
    }
    v15 = clasChkDisconOnlineSv::_instance;
    if ( !clasChkDisconOnlineSv::_instance )
    {
      v15 = (clasChkDisconOnlineSv *)operator new((unsigned int)((_DWORD)clasChkDisconOnlineSv::_instance + 2));
      *v15 = 0;
      clasChkDisconOnlineSv::_instance = v15;
    }
    v15->m_RankmatchGameStart = 0;
    AppMain::TusSetOnlineProfile(*(AppMain **)&AppMain::pApp);
    updated = (unsigned int)AppMain::UpdateNetworkTitle(this, v16);
    if ( updated )
    {
      NetworkTitleName = AppMain::GetNetworkTitleName(this, updated);
      sprintf(_Buffer, "$POPUP_NEWTITLE|\n%s", NetworkTitleName);
      v20 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        v28 = (GfxManager *)operator new(0x108ui64);
        GfxManager::GfxManager(v28);
        GfxManager::instance = v20;
      }
      GfxManager::GFv_AddNotification(v20, _Buffer, ICON_NO_NONE);
    }
    v29 = *(_OWORD *)&g_NetworkManager.gamedata.player_data[g_NetworkManager.gamedata.myNo == 0].steamId;
    v21 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v18);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v21 + 16) + 256i64))(*(_QWORD *)(v21 + 16), v29);
    if ( Fw::MatchingTarget::m_RoomId.m_steamid.m_comp )
    {
      if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_FREE )
      {
        AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
        IsRoomOwner = Fw::MatchingTarget::IsRoomOwner(v24, v23);
        v26 = Fw::InvitationCommon::m_SessionFlag;
        if ( !IsRoomOwner )
          v26 = 0;
        Fw::InvitationCommon::m_SessionFlag = v26;
      }
      NetManager::ChangeState(&g_NetworkManager, NET_STATE_LEAVEROOM, v22);
    }
  }
}

void __fastcall AppMain::ResultSkip(AppMain *this)
{
  GameDataInfo *v2; // rcx
  GfxManager *v3; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rdi
  extension::gfxi_detail::MovieProxy *v5; // rcx
  extension::gfxi_detail::MovieProxy *v6; // rcx
  GfxManager *v7; // [rsp+50h] [rbp+8h]
  GfxManager *v8; // [rsp+50h] [rbp+8h]

  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v2);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v3 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v3;
  }
  m_ptr = v3->m_GFXMovie.m_movieProxy.m_ptr;
  if ( v3->m_GFXMovie.m_movieProxy.m_ptr )
  {
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.SetResult") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.SetResult", 0i64, 0i64, 0);
    v3 = GfxManager::instance;
  }
  if ( !v3 )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v3;
  }
  if ( v3->m_GFXMovieNotification.m_movieProxy.m_ptr )
  {
    v5 = v3->m_GFXMovieNotification.m_movieProxy.m_ptr;
    if ( v5 )
      v5->m_bAdvance = 1;
    v6 = v3->m_GFXMovieNotification.m_movieProxy.m_ptr;
    if ( v6 )
      v6->m_bRender = 1;
  }
  else
  {
    GfxManager::LoadRequestNotification(v3);
  }
  this->m_ReslutTimer = 0;
  this->m_SceneState = 5;
}

void __fastcall AppMain::ResultTrophyUpdate(AppMain *this)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v4; // rcx
  int v5; // eax
  std::bitset<61>::reference *v6; // rax
  unsigned __int64 v7; // rdx
  std::bitset<61>::reference *v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  std::bitset<61>::reference *v12; // rax
  unsigned __int64 v13; // rdx
  std::bitset<61>::reference *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  std::bitset<61>::reference *v18; // rax
  unsigned __int64 v19; // rdx
  std::bitset<61>::reference *v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  std::bitset<61>::reference *v24; // rax
  unsigned __int64 v25; // rdx
  std::bitset<61>::reference *v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  std::bitset<61>::reference *v30; // rax
  unsigned __int64 v31; // rdx
  std::bitset<61>::reference *v32; // rax
  unsigned __int64 v33; // rdx
  std::_List_alloc<std::_List_base_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand>> > *v34; // rcx
  int v35; // eax
  std::bitset<61>::reference *v36; // rax
  unsigned __int64 v37; // rdx
  std::_List_node<int,void *> *Myhead; // rbx
  std::bitset<61>::reference *v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  std::bitset<61>::reference *v43; // rax
  unsigned __int64 v44; // rdx
  std::_List_buy<int> *v45; // rcx
  std::_List_node<int,void *> *v46; // rax
  std::bitset<61>::reference *v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // eax
  std::bitset<61>::reference *v51; // rax
  unsigned __int64 v52; // rdx
  std::_List_buy<int> *v53; // rcx
  std::_List_node<int,void *> *v54; // rax
  std::bitset<61>::reference *v55; // rax
  unsigned __int64 v56; // rdx
  __int64 v57; // rcx
  int v58; // eax
  std::bitset<61>::reference *v59; // rax
  unsigned __int64 v60; // rdx
  std::_List_buy<int> *v61; // rcx
  std::_List_node<int,void *> *v62; // rax
  std::bitset<61>::reference *v63; // rax
  unsigned __int64 v64; // rdx
  __int64 v65; // rcx
  int v66; // eax
  std::bitset<61>::reference *v67; // rax
  unsigned __int64 v68; // rdx
  BattleSystem::BattleController *v69; // r9
  BattleSystem::BattleController *v70; // rax
  unsigned int v71; // er8
  BattleSystem::BattleController *v72; // rax
  unsigned int v73; // edx
  BattleSystem::BattleController *v74; // rax
  unsigned int v75; // edx
  BattleSystem::BattleController *v76; // rax
  unsigned int v77; // edx
  BattleSystem::BattleController *v78; // rax
  unsigned int v79; // edx
  std::bitset<61>::reference *v80; // rax
  unsigned __int64 v81; // rcx
  __int64 v82; // rdx
  std::_List_buy<int> *Prev; // rcx
  int v84; // eax
  std::bitset<61>::reference *v85; // rax
  unsigned __int64 v86; // rdx
  std::_List_buy<int> *v87; // rcx
  std::_List_node<int,void *> *v88; // rax
  int v89; // edi
  unsigned int *m_AchivementCount_TMP; // rsi
  std::_List_node<int,void *> *v91; // rax
  std::list<int> *v92; // rax
  std::_List_node<int,void *> *v93; // rdi
  std::_List_node<int,void *> *Next; // rcx
  std::_List_node<int,void *> *v95; // rbx
  std::list<int> _Right; // [rsp+28h] [rbp-28h] BYREF
  std::bitset<61>::reference result; // [rsp+38h] [rbp-18h] BYREF
  BattleSystem::BattleController *v98; // [rsp+78h] [rbp+28h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 1ui64);
  Mypos = v2->_Mypos;
  if ( Mypos >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v4 = v2->_Mypos & 0x1F;
  v5 = *((_DWORD *)v2->_Pbitset->_Array + (Mypos >> 5));
  if ( _bittest(&v5, v4) )
  {
    v6 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 1ui64);
    v7 = v6->_Mypos;
    if ( v7 >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v6->_Pbitset->_Array + (v7 >> 5)) &= ~(1 << (v7 & 0x1F));
    if ( *(char *)(*(_QWORD *)&AppMain::pApp + 2205125i64) <= 1 )
    {
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205125i64) = 1;
      AgAchievementsManager::unlock(
        (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
        (AgAchievementPlatformData *)&stru_140A9BD80);
    }
  }
  v8 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 0i64);
  v9 = v8->_Mypos;
  if ( v9 >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v10 = v8->_Mypos & 0x1F;
  v11 = *((_DWORD *)v8->_Pbitset->_Array + (v9 >> 5));
  if ( _bittest(&v11, v10) )
  {
    v12 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 0i64);
    v13 = v12->_Mypos;
    if ( v13 >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v12->_Pbitset->_Array + (v13 >> 5)) &= ~(1 << (v13 & 0x1F));
    if ( *(char *)(*(_QWORD *)&AppMain::pApp + 2205126i64) <= 1 )
    {
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205126i64) = 1;
      AgAchievementsManager::unlock(
        (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
        (AgAchievementPlatformData *)&stru_140A9BD90);
    }
  }
  v14 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 2ui64);
  v15 = v14->_Mypos;
  if ( v15 >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v16 = v14->_Mypos & 0x1F;
  v17 = *((_DWORD *)v14->_Pbitset->_Array + (v15 >> 5));
  if ( _bittest(&v17, v16) )
  {
    v18 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 2ui64);
    v19 = v18->_Mypos;
    if ( v19 >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v18->_Pbitset->_Array + (v19 >> 5)) &= ~(1 << (v19 & 0x1F));
    if ( *(char *)(*(_QWORD *)&AppMain::pApp + 2205127i64) <= 1 )
    {
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205127i64) = 1;
      AgAchievementsManager::unlock(
        (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
        (AgAchievementPlatformData *)&stru_140A9BDA0);
    }
  }
  v20 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 3ui64);
  v21 = v20->_Mypos;
  if ( v21 >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v22 = v20->_Mypos & 0x1F;
  v23 = *((_DWORD *)v20->_Pbitset->_Array + (v21 >> 5));
  if ( _bittest(&v23, v22) )
  {
    v24 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 3ui64);
    v25 = v24->_Mypos;
    if ( v25 >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v24->_Pbitset->_Array + (v25 >> 5)) &= ~(1 << (v25 & 0x1F));
    if ( *(char *)(*(_QWORD *)&AppMain::pApp + 2205128i64) <= 1 )
    {
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205128i64) = 1;
      AgAchievementsManager::unlock(
        (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
        (AgAchievementPlatformData *)&stru_140A9BDB0);
    }
  }
  v26 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 4ui64);
  v27 = v26->_Mypos;
  if ( v27 >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v28 = v26->_Mypos & 0x1F;
  v29 = *((_DWORD *)v26->_Pbitset->_Array + (v27 >> 5));
  if ( _bittest(&v29, v28) )
  {
    v30 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 4ui64);
    v31 = v30->_Mypos;
    if ( v31 >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v30->_Pbitset->_Array + (v31 >> 5)) &= ~(1 << (v31 & 0x1F));
    if ( *(char *)(*(_QWORD *)&AppMain::pApp + 2205142i64) <= 1 )
    {
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205142i64) = 1;
      AgAchievementsManager::unlock(
        (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
        (AgAchievementPlatformData *)&stru_140A9BE90);
    }
  }
  v32 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 5ui64);
  v33 = v32->_Mypos;
  if ( v33 >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v34 = (std::_List_alloc<std::_List_base_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand>> > *)(v32->_Mypos & 0x1F);
  v35 = *((_DWORD *)v32->_Pbitset->_Array + (v33 >> 5));
  if ( _bittest(&v35, (unsigned int)v34) )
  {
    v36 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 5ui64);
    v37 = v36->_Mypos;
    if ( v37 >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    v34 = (std::_List_alloc<std::_List_base_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand>> > *)((char *)v36->_Pbitset + 4 * (v37 >> 5));
    LODWORD(v34->_Mypair._Myval2._Myhead) &= ~(1 << (v37 & 0x1F));
    if ( *(char *)(*(_QWORD *)&AppMain::pApp + 2205143i64) <= 1 )
    {
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205143i64) = 1;
      AgAchievementsManager::unlock(
        (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
        (AgAchievementPlatformData *)&stru_140A9BEA0);
    }
  }
  _Right._Mypair._Myval2._Mysize = 0i64;
  Myhead = (std::_List_node<int,void *> *)std::_List_alloc<std::_List_base_types<std::pair<int const,int>>>::_Buynode0(
                                            v34,
                                            0i64,
                                            0i64);
  _Right._Mypair._Myval2._Myhead = Myhead;
  v39 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 6ui64);
  v40 = v39->_Mypos;
  if ( v40 >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v41 = v39->_Mypos & 0x1F;
  v42 = *((_DWORD *)v39->_Pbitset->_Array + (v40 >> 5));
  if ( _bittest(&v42, v41) )
  {
    v43 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 6ui64);
    v44 = v43->_Mypos;
    if ( v44 >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    v45 = (std::_List_buy<int> *)((char *)v43->_Pbitset + 4 * (v44 >> 5));
    LODWORD(v45->_Mypair._Myval2._Myhead) &= ~(1 << (v44 & 0x1F));
    LODWORD(v98) = 10;
    v46 = std::_List_buy<int>::_Buynode<int>(v45, Myhead, Myhead->_Prev, (int *)&v98);
    if ( _Right._Mypair._Myval2._Mysize == 0xAAAAAAAAAAAAAA9i64 )
      std::_Xlength_error("list<T> too long");
    ++_Right._Mypair._Myval2._Mysize;
    Myhead->_Prev = v46;
    v46->_Prev->_Next = v46;
    Myhead = _Right._Mypair._Myval2._Myhead;
  }
  v47 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 7ui64);
  v48 = v47->_Mypos;
  if ( v48 >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v49 = v47->_Mypos & 0x1F;
  v50 = *((_DWORD *)v47->_Pbitset->_Array + (v48 >> 5));
  if ( _bittest(&v50, v49) )
  {
    v51 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 7ui64);
    v52 = v51->_Mypos;
    if ( v52 >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    v53 = (std::_List_buy<int> *)((char *)v51->_Pbitset + 4 * (v52 >> 5));
    LODWORD(v53->_Mypair._Myval2._Myhead) &= ~(1 << (v52 & 0x1F));
    LODWORD(v98) = 11;
    v54 = std::_List_buy<int>::_Buynode<int>(v53, Myhead, Myhead->_Prev, (int *)&v98);
    if ( _Right._Mypair._Myval2._Mysize == 0xAAAAAAAAAAAAAA9i64 )
      std::_Xlength_error("list<T> too long");
    ++_Right._Mypair._Myval2._Mysize;
    Myhead->_Prev = v54;
    v54->_Prev->_Next = v54;
    Myhead = _Right._Mypair._Myval2._Myhead;
  }
  v55 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 8ui64);
  v56 = v55->_Mypos;
  if ( v56 >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v57 = v55->_Mypos & 0x1F;
  v58 = *((_DWORD *)v55->_Pbitset->_Array + (v56 >> 5));
  if ( _bittest(&v58, v57) )
  {
    v59 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 8ui64);
    v60 = v59->_Mypos;
    if ( v60 >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    v61 = (std::_List_buy<int> *)((char *)v59->_Pbitset + 4 * (v60 >> 5));
    LODWORD(v61->_Mypair._Myval2._Myhead) &= ~(1 << (v60 & 0x1F));
    LODWORD(v98) = 12;
    v62 = std::_List_buy<int>::_Buynode<int>(v61, Myhead, Myhead->_Prev, (int *)&v98);
    if ( _Right._Mypair._Myval2._Mysize == 0xAAAAAAAAAAAAAA9i64 )
      std::_Xlength_error("list<T> too long");
    ++_Right._Mypair._Myval2._Mysize;
    Myhead->_Prev = v62;
    v62->_Prev->_Next = v62;
    Myhead = _Right._Mypair._Myval2._Myhead;
  }
  v63 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 9ui64);
  v64 = v63->_Mypos;
  if ( v64 >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v65 = v63->_Mypos & 0x1F;
  v66 = *((_DWORD *)v63->_Pbitset->_Array + (v64 >> 5));
  if ( _bittest(&v66, v65) )
  {
    v67 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 9ui64);
    v68 = v67->_Mypos;
    if ( v68 >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v67->_Pbitset->_Array + (v68 >> 5)) &= ~(1 << (v67->_Mypos & 0x1F));
    v69 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v98 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v98);
      v69 = v70;
      BattleSystem::BattleController::instance = v70;
    }
    v71 = v69->rank_win_cnt ^ 0x7B48A35E ^ (LOWORD(v69->rank_win_cnt) ^ 0xA35E ^ (unsigned __int16)((v69->rank_win_cnt ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(v69->rank_win_cnt) ^ 0xA35E ^ (unsigned __int16)((v69->rank_win_cnt ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    if ( (int)((v71 ^ (v71 >> 7)) & 0x550055 ^ v71 ^ (((v71 ^ (v71 >> 7)) & 0x550055) << 7)) >= 1
      && *(char *)(*(_QWORD *)&AppMain::pApp + 2205158i64) <= 1 )
    {
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205158i64) = 1;
      AgAchievementsManager::unlock(
        (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
        (AgAchievementPlatformData *)&stru_140A9BF90);
      v69 = BattleSystem::BattleController::instance;
    }
    if ( !v69 )
    {
      v98 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v98);
      v69 = v72;
      BattleSystem::BattleController::instance = v72;
    }
    v73 = v69->rank_win_cnt ^ 0x7B48A35E ^ (LOWORD(v69->rank_win_cnt) ^ 0xA35E ^ (unsigned __int16)((v69->rank_win_cnt ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(v69->rank_win_cnt) ^ 0xA35E ^ (unsigned __int16)((v69->rank_win_cnt ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    if ( (int)((v73 ^ (v73 >> 7)) & 0x550055 ^ v73 ^ (((v73 ^ (v73 >> 7)) & 0x550055) << 7)) >= 50
      && *(char *)(*(_QWORD *)&AppMain::pApp + 2205159i64) <= 1 )
    {
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205159i64) = 1;
      AgAchievementsManager::unlock(
        (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
        (AgAchievementPlatformData *)&stru_140A9BFA0);
      v69 = BattleSystem::BattleController::instance;
    }
    if ( !v69 )
    {
      v98 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v98);
      v69 = v74;
      BattleSystem::BattleController::instance = v74;
    }
    v75 = v69->rank_win_cnt ^ 0x7B48A35E ^ (LOWORD(v69->rank_win_cnt) ^ 0xA35E ^ (unsigned __int16)((v69->rank_win_cnt ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(v69->rank_win_cnt) ^ 0xA35E ^ (unsigned __int16)((v69->rank_win_cnt ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    if ( (int)((v75 ^ (v75 >> 7)) & 0x550055 ^ v75 ^ (((v75 ^ (v75 >> 7)) & 0x550055) << 7)) >= 100
      && *(char *)(*(_QWORD *)&AppMain::pApp + 2205160i64) <= 1 )
    {
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205160i64) = 1;
      AgAchievementsManager::unlock(
        (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
        (AgAchievementPlatformData *)&stru_140A9BFB0);
      v69 = BattleSystem::BattleController::instance;
    }
    if ( !v69 )
    {
      v98 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v98);
      v69 = v76;
      BattleSystem::BattleController::instance = v76;
    }
    v77 = v69->rank_continuous_win_cnt ^ 0x7B48A35E ^ (LOWORD(v69->rank_continuous_win_cnt) ^ 0xA35E ^ (unsigned __int16)((v69->rank_continuous_win_cnt ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(v69->rank_continuous_win_cnt) ^ 0xA35E ^ (unsigned __int16)((v69->rank_continuous_win_cnt ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    if ( (int)((v77 ^ (v77 >> 7)) & 0x550055 ^ v77 ^ (((v77 ^ (v77 >> 7)) & 0x550055) << 7)) >= 5
      && *(char *)(*(_QWORD *)&AppMain::pApp + 2205162i64) <= 1 )
    {
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205162i64) = 1;
      AgAchievementsManager::unlock(
        (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
        (AgAchievementPlatformData *)&stru_140A9BFD0);
      v69 = BattleSystem::BattleController::instance;
    }
    if ( !v69 )
    {
      v98 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v98);
      v69 = v78;
      BattleSystem::BattleController::instance = v78;
    }
    v79 = v69->rank_continuous_win_cnt ^ 0x7B48A35E ^ (LOWORD(v69->rank_continuous_win_cnt) ^ 0xA35E ^ (unsigned __int16)((v69->rank_continuous_win_cnt ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(v69->rank_continuous_win_cnt) ^ 0xA35E ^ (unsigned __int16)((v69->rank_continuous_win_cnt ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    if ( (int)((v79 ^ (v79 >> 7)) & 0x550055 ^ v79 ^ (((v79 ^ (v79 >> 7)) & 0x550055) << 7)) >= 10
      && *(char *)(*(_QWORD *)&AppMain::pApp + 2205163i64) <= 1 )
    {
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205163i64) = 1;
      AgAchievementsManager::unlock(
        (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
        (AgAchievementPlatformData *)&stru_140A9BFE0);
    }
  }
  v80 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 0xCui64);
  v81 = v80->_Mypos;
  if ( v81 >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v82 = v80->_Mypos & 0x1F;
  Prev = (std::_List_buy<int> *)(v81 >> 5);
  v84 = *((_DWORD *)v80->_Pbitset->_Array + (_QWORD)Prev);
  if ( _bittest(&v84, v82) )
  {
    v85 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, 0xCui64);
    v86 = v85->_Mypos;
    if ( v86 >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    v87 = (std::_List_buy<int> *)((char *)v85->_Pbitset + 4 * (v86 >> 5));
    LODWORD(v87->_Mypair._Myval2._Myhead) &= ~(1 << (v86 & 0x1F));
    LODWORD(v98) = 15;
    v88 = std::_List_buy<int>::_Buynode<int>(v87, Myhead, Myhead->_Prev, (int *)&v98);
    Prev = (std::_List_buy<int> *)(0xAAAAAAAAAAAAAA9i64 - _Right._Mypair._Myval2._Mysize);
    if ( _Right._Mypair._Myval2._Mysize == 0xAAAAAAAAAAAAAA9i64 )
      std::_Xlength_error("list<T> too long");
    ++_Right._Mypair._Myval2._Mysize;
    Myhead->_Prev = v88;
    v88->_Prev->_Next = v88;
    Myhead = _Right._Mypair._Myval2._Myhead;
  }
  v89 = 0;
  m_AchivementCount_TMP = this->SaveDataMain.PlayerData.m_AchivementCount_TMP;
  do
  {
    if ( *m_AchivementCount_TMP == -1 )
    {
      *m_AchivementCount_TMP = 0;
      LODWORD(v98) = v89;
      v91 = std::_List_buy<int>::_Buynode<int>(Prev, Myhead, Myhead->_Prev, (int *)&v98);
      if ( _Right._Mypair._Myval2._Mysize == 0xAAAAAAAAAAAAAA9i64 )
        std::_Xlength_error("list<T> too long");
      ++_Right._Mypair._Myval2._Mysize;
      Myhead->_Prev = v91;
      Prev = (std::_List_buy<int> *)v91->_Prev;
      Prev->_Mypair._Myval2._Myhead = v91;
      Myhead = _Right._Mypair._Myval2._Myhead;
    }
    ++v89;
    ++m_AchivementCount_TMP;
  }
  while ( v89 < 16 );
  std::list<int>::list<int>((std::list<int> *)&result, &_Right);
  SaveRecord_PlayerData::CheckAchivementCountComplete(
    (SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64),
    v92);
  v93 = _Right._Mypair._Myval2._Myhead;
  Next = _Right._Mypair._Myval2._Myhead->_Next;
  _Right._Mypair._Myval2._Myhead->_Next = _Right._Mypair._Myval2._Myhead;
  v93->_Prev = v93;
  if ( Next != v93 )
  {
    do
    {
      v95 = Next->_Next;
      operator delete(Next);
      Next = v95;
    }
    while ( v95 != v93 );
  }
  operator delete(v93);
}

void __fastcall AppMain::ST_ResultDraw(AppMain *this)
{
  BattleSystem::BattleController *v2; // rbx
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v4; // rax
  BattleSystem::BattleController::ROUND_PHASE roundPhase; // eax
  extension::GFXIMovieStack *v6; // rax
  BattleSystem::BattleController *v7; // [rsp+40h] [rbp+8h]
  BattleSystem::BattleController *v8; // [rsp+40h] [rbp+8h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v7 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v7);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
    if ( !v3 )
    {
      v8 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v8);
      BattleSystem::BattleController::instance = v4;
    }
  }
  roundPhase = v2->roundPhase;
  if ( roundPhase && roundPhase != (WALL|DIE) && AppMain::IsResultActionMode(this) )
    AppMain::ResultActionDraw(this);
  else
    AppMain::ResultBGDraw(this);
  GraphicsOpt::lock(this->g);
  v6 = extension::GFXIMovieStack::Instance();
  extension::GFXIMovieStack::renderPriority(v6, 101, 10000);
  Graphics::drawStack(this->g->g);
}

void __fastcall AppMain::ST_ResultExit(AppMain *this)
{
  GfxManager *v2; // rax
  GfxManager *v3; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  extension::gfxi_detail::MovieProxy *v5; // rcx
  GfxManager *v6; // [rsp+40h] [rbp+8h]
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  AppMain::ResultActionExit(this);
  v2 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v6 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v6);
    GfxManager::instance = v2;
  }
  GfxManager::ReleaseGFXMovie(v2, 1);
  this->m_ReslutTimer = 0;
  v3 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v3;
  }
  if ( v3->m_GFXMovieNotification.m_movieProxy.m_ptr )
  {
    m_ptr = v3->m_GFXMovieNotification.m_movieProxy.m_ptr;
    if ( m_ptr )
      m_ptr->m_bAdvance = 1;
    v5 = v3->m_GFXMovieNotification.m_movieProxy.m_ptr;
    if ( v5 )
      v5->m_bRender = 1;
  }
  else
  {
    GfxManager::LoadRequestNotification(v3);
  }
}

void __fastcall AppMain::ST_ResultInit(AppMain *this)
{
  BattleSystem::BattleController *v2; // rax
  BattleSystem::BattleController *v3; // r13
  BattleSystem::ResultMemberInfo *p_resultMember; // rax
  int *v5; // rcx
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rdi
  GameDataInfo *v9; // rcx
  GAME_MODE v10; // esi
  UserGameOperation *v11; // rax
  int v12; // er9
  GfxManager *v13; // rax
  int i; // er9
  std::bitset<61>::reference *v15; // rax
  int v16; // er9
  unsigned __int64 Mypos; // rdx
  GameDataInfo *v18; // rcx
  int v19; // er10
  std::bitset<61>::reference *v20; // rax
  unsigned __int64 v21; // rdx
  std::bitset<61>::reference *v22; // rax
  unsigned __int64 v23; // rdx
  GameDataInfo *v24; // rcx
  std::bitset<61>::reference *v25; // rax
  unsigned __int64 v26; // rdx
  GameDataInfo *v27; // rcx
  std::bitset<61>::reference *v28; // rax
  unsigned __int64 v29; // rdx
  GameDataInfo *v30; // rcx
  CHARACTER_NO v31; // er15
  GameDataInfo *v32; // rcx
  CHARACTER_NO v33; // er14
  GameDataInfo *v34; // rcx
  unsigned int v35; // er11
  int updated; // eax
  std::bitset<61>::reference *v37; // rax
  unsigned __int64 v38; // rdx
  unsigned int v39; // esi
  unsigned int v40; // edx
  std::bitset<61>::reference *v41; // rax
  unsigned __int64 v42; // rdx
  GameDataInfo *v43; // rcx
  unsigned __int8 v44; // r14
  unsigned int v45; // edx
  int v46; // esi
  int v47; // eax
  unsigned int v48; // edx
  NetManager *v49; // rcx
  DISCONNECT_LEVEL m_DisconnectLevel; // ecx
  unsigned __int8 v51; // si
  LEADERBOARD_INFO *v52; // rdx
  LEADERBOARD_ID v53; // ecx
  int v54; // eax
  GameDataInfo *v55; // rcx
  CHARACTER_NO v56; // er15
  GameDataInfo *v57; // rcx
  unsigned int v58; // edx
  int v59; // er14
  int v60; // eax
  unsigned __int8 v61; // si
  unsigned int v62; // edx
  NetManager *v63; // rcx
  DISCONNECT_LEVEL v64; // ecx
  GameDataInfo *v65; // rcx
  GameDataInfo *v66; // rcx
  GAME_RULE v67; // edx
  __int32 v68; // edx
  __int64 v69; // rdx
  std::bitset<61>::reference *v70; // rax
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  std::bitset<61>::reference *v73; // rax
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // rcx
  std::bitset<61>::reference *v76; // rax
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rcx
  NETWORK_TITLE v79; // eax
  const char *NetworkTitleName; // rax
  GfxManager *v81; // rax
  __int64 myNo; // rcx
  int v83; // edx
  Scene_RoomMember *pScene; // rsi
  unsigned __int64 v85; // rdx
  GameDataInfo *v86; // rcx
  std::bitset<61>::reference *v87; // rax
  unsigned __int64 v88; // rdx
  GameDataInfo *v89; // rcx
  GameDataInfo *v90; // rcx
  Scene_RoomMember *v91; // rdi
  RoomMembers *m_pRoomMembers; // rax
  GfxManager *v93; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  extension::gfxi_detail::MovieProxy *v95; // rdx
  extension::gfxi_detail::MovieProxy *v96; // rcx
  extension::gfxi_detail::MovieProxy *v97; // rcx
  extension::SoundManager *v98; // rax
  BattleSystem::BattleController *v99; // [rsp+40h] [rbp-C8h]
  BattleSystem::BattleController *v100; // [rsp+40h] [rbp-C8h]
  GfxManager *v101; // [rsp+40h] [rbp-C8h]
  GfxManager *v102; // [rsp+40h] [rbp-C8h]
  GfxManager *v103; // [rsp+40h] [rbp-C8h]
  GfxManager *v104; // [rsp+40h] [rbp-C8h]
  GfxManager *v105; // [rsp+40h] [rbp-C8h]
  extension::SoundManager *v106; // [rsp+40h] [rbp-C8h]
  std::bitset<61>::reference v107; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v108; // [rsp+58h] [rbp-B0h]
  __int64 v109[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v110; // [rsp+78h] [rbp-90h]
  int v111; // [rsp+7Ch] [rbp-8Ch]
  char v112; // [rsp+80h] [rbp-88h]
  unsigned __int8 v113[103]; // [rsp+81h] [rbp-87h] BYREF
  std::bitset<61>::reference result; // [rsp+E8h] [rbp-20h] BYREF
  std::bitset<61>::reference v115; // [rsp+F8h] [rbp-10h] BYREF
  std::bitset<61>::reference v116; // [rsp+108h] [rbp+0h] BYREF
  std::bitset<61>::reference v117; // [rsp+118h] [rbp+10h] BYREF
  std::bitset<61>::reference v118; // [rsp+128h] [rbp+20h] BYREF
  int v119; // [rsp+138h] [rbp+30h] BYREF
  int v120; // [rsp+158h] [rbp+50h]
  bool v121; // [rsp+179h] [rbp+71h]
  int v122; // [rsp+1A0h] [rbp+98h]
  int v123; // [rsp+1A4h] [rbp+9Ch]
  int v124; // [rsp+1A8h] [rbp+A0h]
  int v125; // [rsp+1ACh] [rbp+A4h]
  int v126; // [rsp+1B0h] [rbp+A8h]
  int v127; // [rsp+1B4h] [rbp+ACh]
  int v128; // [rsp+1B8h] [rbp+B0h]
  int v129; // [rsp+1BCh] [rbp+B4h]
  LEADERBOARD_ID id[4]; // [rsp+818h] [rbp+710h] BYREF
  int v131; // [rsp+828h] [rbp+720h]
  int UserCountry; // [rsp+82Ch] [rbp+724h]
  char m_ProfileIcon; // [rsp+830h] [rbp+728h]
  unsigned __int8 pCountry[7]; // [rsp+831h] [rbp+729h] BYREF
  __int128 v135; // [rsp+838h] [rbp+730h]
  __int128 v136; // [rsp+848h] [rbp+740h]
  __int128 v137; // [rsp+858h] [rbp+750h]
  __int128 v138; // [rsp+868h] [rbp+760h]
  __int128 v139; // [rsp+878h] [rbp+770h]
  int v140; // [rsp+888h] [rbp+780h]
  __int16 v141; // [rsp+88Ch] [rbp+784h]
  char _Buffer[256]; // [rsp+898h] [rbp+790h] BYREF

  v108 = -2i64;
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v99 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v99);
    BattleSystem::BattleController::instance = v2;
  }
  v3 = v2;
  if ( !v2 )
  {
    v100 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v100);
    BattleSystem::BattleController::instance = v2;
  }
  p_resultMember = &v2->resultMember;
  v5 = &v119;
  v6 = 13i64;
  do
  {
    *(_OWORD *)v5 = *(_OWORD *)&p_resultMember->battleWinnerID;
    *((_OWORD *)v5 + 1) = *(_OWORD *)&p_resultMember->charaNo[2];
    *((_OWORD *)v5 + 2) = *(_OWORD *)&p_resultMember->rivalCharaNo;
    *((_OWORD *)v5 + 3) = *(_OWORD *)&p_resultMember->pActor[1];
    *((_OWORD *)v5 + 4) = *(_OWORD *)&p_resultMember->bFinalKO;
    *((_OWORD *)v5 + 5) = *(_OWORD *)p_resultMember->iLoseCount;
    *((_OWORD *)v5 + 6) = *(_OWORD *)p_resultMember->iStraightWin;
    v5 += 32;
    *((_OWORD *)v5 - 1) = *(_OWORD *)&p_resultMember->scoreInfo.iPerfectBonus;
    p_resultMember = (BattleSystem::ResultMemberInfo *)((char *)p_resultMember + 128);
    --v6;
  }
  while ( v6 );
  *(_OWORD *)v5 = *(_OWORD *)&p_resultMember->battleWinnerID;
  *((_OWORD *)v5 + 1) = *(_OWORD *)&p_resultMember->charaNo[2];
  *((_OWORD *)v5 + 2) = *(_OWORD *)&p_resultMember->rivalCharaNo;
  *((_OWORD *)v5 + 3) = *(_OWORD *)&p_resultMember->pActor[1];
  *((_OWORD *)v5 + 4) = *(_OWORD *)&p_resultMember->bFinalKO;
  *((_QWORD *)v5 + 10) = *(_QWORD *)p_resultMember->iLoseCount;
  v7 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v8 = *v7;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v7 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v9);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v10 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  AppMain::ResultActionInit(this);
  v11 = UserGameOperation::Instance();
  UserGameOperation::clear(v11);
  this->m_SceneState = 0;
  v13 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v101 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v101);
    GfxManager::instance = v13;
  }
  GfxManager::LoadRequest(v13, FILE_06_RESULT, LoadCompleteEventResult, v12);
  *(_QWORD *)&this->m_NewMyRanking = -1i64;
  for ( i = 0; i < 13; i = v16 + 1 )
  {
    v15 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &result, i);
    Mypos = v15->_Mypos;
    if ( Mypos >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v15->_Pbitset->_Array + (Mypos >> 5)) &= ~(1 << (v15->_Mypos & 0x1F));
  }
  g_dirty_flag_result_random = 0;
  switch ( v10 )
  {
    case GAME_MODE_STORY:
      if ( v119 == 1 )
      {
        AppMain::UnlockGallery_ItemRandom(this);
        if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v8 + 40) )
        {
          Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
          {
            GameDataInfo::GameDataInfo(v18);
            Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          }
        }
        if ( !`GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
        {
          v19 = v122 + v124 + v126 + v125 + v128 + v127 + v123;
          if ( v19 >= 300000 )
          {
            v20 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &v115, 0i64);
            v21 = v20->_Mypos;
            if ( v21 >= 0xD )
              std::_Xout_of_range("invalid bitset<N> position");
            *((_DWORD *)v20->_Pbitset->_Array + (v21 >> 5)) |= 1 << (v20->_Mypos & 0x1F);
          }
          if ( v19 >= 200000 )
          {
            v22 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &v116, 1ui64);
            v23 = v22->_Mypos;
            if ( v23 >= 0xD )
              std::_Xout_of_range("invalid bitset<N> position");
            *((_DWORD *)v22->_Pbitset->_Array + (v23 >> 5)) |= 1 << (v22->_Mypos & 0x1F);
          }
          if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v8 + 40) )
          {
            Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
            if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
            {
              GameDataInfo::GameDataInfo(v24);
              Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
            }
          }
          if ( `GameDataInfo::getInstance'::`2'::instance.m_StoryWinCount == 9 )
          {
            v25 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &v117, 2ui64);
            v26 = v25->_Mypos;
            if ( v26 >= 0xD )
              std::_Xout_of_range("invalid bitset<N> position");
            *((_DWORD *)v25->_Pbitset->_Array + (v26 >> 5)) |= 1 << (v25->_Mypos & 0x1F);
          }
          if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v8 + 40) )
          {
            Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
            if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
            {
              GameDataInfo::GameDataInfo(v27);
              Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
            }
          }
          if ( `GameDataInfo::getInstance'::`2'::instance.m_StoryWinCount == 10 )
          {
            v28 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &v107, 3ui64);
            v29 = v28->_Mypos;
            if ( v29 >= 0xD )
              std::_Xout_of_range("invalid bitset<N> position");
            *((_DWORD *)v28->_Pbitset->_Array + (v29 >> 5)) |= 1 << (v28->_Mypos & 0x1F);
          }
        }
        if ( v120 == 48 )
        {
          if ( (this->SaveDataMain.PlayerData.m_EnableCharcterFlag & 0x1000000000000i64) == 0 )
          {
            this->SaveDataMain.PlayerData.m_EnableCharcterFlag |= 0x1000000000000ui64;
            this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] |= 0x4000000u;
          }
          if ( (this->SaveDataMain.PlayerData.m_IconEnableFlag[1] & 0x8000) == 0 )
          {
            this->SaveDataMain.PlayerData.m_IconEnableFlag[1] |= 0x8000u;
            this->SaveDataMain.PlayerData.m_IconNewFlag[1] |= 0x8000u;
          }
        }
        else if ( v120 == 49 )
        {
          if ( (this->SaveDataMain.PlayerData.m_EnableCharcterFlag & 0x2000000000000i64) == 0 )
          {
            this->SaveDataMain.PlayerData.m_EnableCharcterFlag |= 0x2000000000000ui64;
            this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] |= 0x2010000u;
          }
          if ( (this->SaveDataMain.PlayerData.m_IconEnableFlag[1] & 0x4000) == 0 )
          {
            this->SaveDataMain.PlayerData.m_IconEnableFlag[1] |= 0x4000u;
            this->SaveDataMain.PlayerData.m_IconNewFlag[1] |= 0x4000u;
          }
          if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x1000000) == 0 )
            this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] |= 0x1800000u;
          if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v8 + 40) )
          {
            Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
            if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
            {
              GameDataInfo::GameDataInfo(v30);
              Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
            }
          }
          v31 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0];
          if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v8 + 40) )
          {
            Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
            if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
            {
              GameDataInfo::GameDataInfo(v32);
              Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
            }
          }
          v33 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][1];
          if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v8 + 40) )
          {
            Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
            if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
            {
              GameDataInfo::GameDataInfo(v34);
              Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
            }
          }
          v35 = (LOWORD(v3->playerInfo[0].iTotalScore) ^ 0xA35E ^ (unsigned __int16)((v3->playerInfo[0].iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ v3->playerInfo[0].iTotalScore ^ 0x7B48A35E ^ (((LOWORD(v3->playerInfo[0].iTotalScore) ^ 0xA35E ^ (unsigned __int16)((v3->playerInfo[0].iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
          updated = SaveRecord_PlayerData::UpdateStoryScore(
                      &this->SaveDataMain.PlayerData,
                      v31,
                      v33,
                      `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][2],
                      (v35 ^ (v35 >> 7)) & 0x550055 ^ v35 ^ (((v35 ^ (v35 >> 7)) & 0x550055) << 7));
          if ( updated != -1 )
          {
            this->m_NewMyRanking = 0;
            this->m_NewMyRankingRank = updated;
          }
        }
      }
      break;
    case GAME_MODE_MISSION_TIMEATTACK:
      if ( v119 != 1 )
        break;
      v37 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &v107, 4ui64);
      v38 = v37->_Mypos;
      if ( v38 >= 0xD )
        std::_Xout_of_range("invalid bitset<N> position");
      *((_DWORD *)v37->_Pbitset->_Array + (v38 >> 5)) |= 1 << (v37->_Mypos & 0x1F);
      v39 = v129 ^ 0x7B48A35E;
      v40 = v129 ^ 0x7B48A35E ^ ((unsigned __int16)v129 ^ 0xA35E ^ (unsigned __int16)((v129 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)v129 ^ 0xA35E ^ (unsigned __int16)((v129 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      if ( (int)(1000 * ((v40 ^ (v40 >> 7)) & 0x550055 ^ v40 ^ (((v40 ^ (v40 >> 7)) & 0x550055) << 7))) < 14400060 )
      {
        v41 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &v107, 5ui64);
        v42 = v41->_Mypos;
        if ( v42 >= 0xD )
          std::_Xout_of_range("invalid bitset<N> position");
        *((_DWORD *)v41->_Pbitset->_Array + (v42 >> 5)) |= 1 << (v41->_Mypos & 0x1F);
      }
      if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v8 + 40) )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v43);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        }
      }
      v44 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0];
      v45 = ((unsigned __int16)v39 ^ (unsigned __int16)(v39 >> 14)) & 0xCCCC ^ v39 ^ ((((unsigned __int16)v39 ^ (unsigned __int16)(v39 >> 14)) & 0xCCCC) << 14);
      v46 = (int)(1000 * ((v45 ^ (v45 >> 7)) & 0x550055 ^ v45 ^ (((v45 ^ (v45 >> 7)) & 0x550055) << 7))) / 60;
      v47 = SaveRecord_PlayerData::UpdateTimeAttackScore(
              &this->SaveDataMain.PlayerData,
              `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0],
              v46);
      if ( v47 != -1 )
      {
        this->m_NewMyRanking = 1;
        this->m_NewMyRankingRank = v47;
      }
      id[0] = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL;
      v48 = v46 ^ (v46 ^ (v46 >> 7)) & 0x550055 ^ (((v46 ^ (v46 >> 7)) & 0x550055) << 7);
      v49 = (NetManager *)((unsigned __int16)(v48 ^ (v48 >> 14)) & 0xCCCC);
      *(_QWORD *)&id[2] = (int)(v48 ^ (unsigned int)v49 ^ ((((unsigned __int16)v48 ^ (unsigned __int16)(v48 >> 14)) & 0xCCCC) << 14)) ^ 0x7B48A35Ei64;
      v131 = 0;
      UserCountry = NetManager::GetUserCountry(v49, pCountry);
      m_ProfileIcon = this->SaveDataMain.PlayerData.m_ProfileIcon;
      pCountry[1] = v44;
      m_DisconnectLevel = this->SaveDataMain.PlayerData.m_DisconnectLevel;
      if ( m_DisconnectLevel < DISCONNECT_LEVEL4 )
        v51 = m_DisconnectLevel >= DISCONNECT_LEVEL3;
      else
        v51 = 2;
      pCountry[2] = v51;
      v52 = (LEADERBOARD_INFO *)id;
      v53 = id[0];
LABEL_138:
      SubmitScore(v53, v52, 0);
      break;
    case GAME_MODE_MISSION_SURVIVAL:
      v54 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v8 + 40) )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        v54 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v55);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          v54 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
        }
      }
      v56 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0];
      if ( v54 > *(_DWORD *)(v8 + 40) )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v57);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        }
      }
      v58 = `GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount ^ 0x7B48A35E ^ (LOWORD(`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)((`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)((`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      v59 = (v58 ^ (v58 >> 7)) & 0x550055 ^ v58 ^ (((v58 ^ (v58 >> 7)) & 0x550055) << 7);
      v60 = SaveRecord_PlayerData::UpdateSurvivalScore(&this->SaveDataMain.PlayerData, v56, v59);
      v61 = 2;
      if ( v60 != -1 )
      {
        this->m_NewMyRanking = 2;
        this->m_NewMyRankingRank = v60;
      }
      LODWORD(v109[0]) = 21;
      v62 = v59 ^ (v59 ^ (v59 >> 7)) & 0x550055 ^ (((v59 ^ (v59 >> 7)) & 0x550055) << 7);
      v63 = (NetManager *)((unsigned __int16)(v62 ^ (v62 >> 14)) & 0xCCCC);
      v109[1] = (int)((unsigned int)v63 ^ v62 ^ ((((unsigned __int16)v62 ^ (unsigned __int16)(v62 >> 14)) & 0xCCCC) << 14)) ^ 0x7B48A35Ei64;
      v110 = 0;
      v111 = NetManager::GetUserCountry(v63, v113);
      v112 = this->SaveDataMain.PlayerData.m_ProfileIcon;
      v113[1] = v56;
      v64 = this->SaveDataMain.PlayerData.m_DisconnectLevel;
      if ( v64 < DISCONNECT_LEVEL4 )
        v61 = v64 >= DISCONNECT_LEVEL3;
      v113[2] = v61;
      if ( v59 )
      {
        v52 = (LEADERBOARD_INFO *)v109;
        v53 = v109[0];
        goto LABEL_138;
      }
      break;
    case GAME_MODE_FREEMATCH:
      if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v8 + 40) )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v65);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        }
      }
      if ( !`GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag
        && (*((_DWORD *)&g_NetworkManager.gamedata.player_data[(unsigned __int8)g_NetworkManager.gamedata.myNo] + 4) & 0xC0000) == 0 )
      {
        if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v8 + 40) )
        {
          Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
          {
            GameDataInfo::GameDataInfo(v66);
            Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          }
        }
        v67 = `GameDataInfo::getInstance'::`2'::instance.m_GameRule[`GameDataInfo::getInstance'::`2'::instance.m_GameRuleIndex];
        if ( v67 )
        {
          v68 = v67 - 1;
          if ( v68 )
          {
            LODWORD(v69) = v68 - 1;
            if ( !(_DWORD)v69 )
            {
              v70 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &v107, 7ui64);
              v71 = v70->_Mypos;
              if ( v71 >= 0xD )
                std::_Xout_of_range("invalid bitset<N> position");
              v72 = v71 >> 5;
              v69 = v70->_Mypos & 0x1F;
              *((_DWORD *)v70->_Pbitset->_Array + v72) |= 1 << v69;
            }
          }
          else
          {
            v73 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &v107, 8ui64);
            v74 = v73->_Mypos;
            if ( v74 >= 0xD )
              std::_Xout_of_range("invalid bitset<N> position");
            v75 = v74 >> 5;
            v69 = v73->_Mypos & 0x1F;
            *((_DWORD *)v73->_Pbitset->_Array + v75) |= 1 << v69;
          }
        }
        else
        {
          v76 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &v107, 6ui64);
          v77 = v76->_Mypos;
          if ( v77 >= 0xD )
            std::_Xout_of_range("invalid bitset<N> position");
          v78 = v77 >> 5;
          v69 = v76->_Mypos & 0x1F;
          *((_DWORD *)v76->_Pbitset->_Array + v78) |= 1 << v69;
        }
        v79 = (unsigned int)AppMain::UpdateNetworkTitle(this, v69);
        if ( v79 )
        {
          NetworkTitleName = AppMain::GetNetworkTitleName(this, v79);
          sprintf(_Buffer, "$POPUP_NEWTITLE|\n%s", NetworkTitleName);
          v81 = GfxManager::instance;
          if ( !GfxManager::instance )
          {
            v102 = (GfxManager *)operator new(0x108ui64);
            GfxManager::GfxManager(v102);
            GfxManager::instance = v81;
          }
          GfxManager::GFv_AddNotification(v81, _Buffer, ICON_NO_NONE);
        }
      }
      myNo = (unsigned __int8)g_NetworkManager.gamedata.myNo;
      *(_OWORD *)id = *(_OWORD *)&g_NetworkManager.gamedata.player_data[myNo].steamId;
      v135 = *((_OWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 2);
      v136 = *((_OWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 3);
      v137 = *(_OWORD *)&g_NetworkManager.gamedata.player_data[myNo].stageTelop[12];
      v138 = *(_OWORD *)&g_NetworkManager.gamedata.player_data[myNo].stageTelop[28];
      v139 = *(_OWORD *)&g_NetworkManager.gamedata.player_data[myNo].stageTelop[44];
      v140 = *(_DWORD *)&g_NetworkManager.gamedata.player_data[myNo].stageTelop[60];
      v141 = *(_WORD *)&g_NetworkManager.gamedata.player_data[myNo].country[3];
      LOBYTE(v83) = 0;
      if ( (*((_BYTE *)&g_NetworkManager.gamedata.player_data[myNo] + 16) & 0x7Fu) > 0xC )
        v83 = ((*((_DWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 4) & 0x7F) - 1) / 12;
      if ( g_NetworkManager.gamedata.tableBattleType[(unsigned __int8)v83] != NETWORK_ROOM_BATTLE_TYPE_CONTINUE )
      {
        pScene = this->m_onlineRoomMemberParams.pScene;
        if ( pScene )
        {
          pScene->m_bBattleMode = 0;
          if ( !pScene->isError(pScene) )
          {
            if ( pScene->m_pRoomMembers )
              Scene_RoomMember::setupRoomMembers(pScene, v85);
          }
        }
      }
      break;
    case GAME_MODE_VERSUS:
      if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v8 + 40) )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v86);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        }
      }
      if ( !`GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
      {
        v87 = std::bitset<21>::operator[]((std::bitset<61> *)&s_bitTrophy, &v118, 0xCui64);
        v88 = v87->_Mypos;
        if ( v88 >= 0xD )
          std::_Xout_of_range("invalid bitset<N> position");
        *((_DWORD *)v87->_Pbitset->_Array + (v88 >> 5)) |= 1 << (v87->_Mypos & 0x1F);
      }
      break;
    case GAME_MODE_RANKMATCH:
      AppMain::ResultRankmatchInit(this, v121);
      break;
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v8 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v89);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_FREEMATCH )
    goto LABEL_147;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v8 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v90);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_ONLINETRAINING )
  {
LABEL_147:
    v91 = this->m_onlineRoomMemberParams.pScene;
    if ( v91 )
    {
      if ( !v91->isError(this->m_onlineRoomMemberParams.pScene) )
      {
        m_pRoomMembers = v91->m_pRoomMembers;
        if ( m_pRoomMembers )
        {
          m_pRoomMembers->m_alpha.m_power = -0.1;
          m_pRoomMembers->m_alpha.m_bAnimation = 1;
        }
      }
    }
  }
  s_OnlineState = NET_STATE_GAMERESULT;
  s_BattleType = NETWORK_ROOM_BATTLE_TYPE_NONE;
  v93 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v103 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v103);
    GfxManager::instance = v93;
  }
  if ( v93->m_GFXMovie.m_movieProxy.m_ptr )
  {
    v93->m_GFXMovie.m_movieProxy.m_ptr->m_bAdvance = 1;
    if ( v93->m_GFXMovie.m_movieProxy.m_ptr )
      v93->m_GFXMovie.m_movieProxy.m_ptr->m_bRender = 1;
  }
  if ( !v93 )
  {
    v104 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v104);
    GfxManager::instance = v93;
  }
  if ( v93->m_GFXMovieBG.m_movieProxy.m_ptr )
  {
    m_ptr = v93->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( m_ptr )
      m_ptr->m_bAdvance = 1;
    v95 = v93->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( v95 )
      v95->m_bRender = 1;
  }
  else
  {
    GfxManager::LoadRequestBG(v93);
    v93 = GfxManager::instance;
  }
  if ( !v93 )
  {
    v105 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v105);
    GfxManager::instance = v93;
  }
  if ( v93->m_GFXMovieNotification.m_movieProxy.m_ptr )
  {
    v96 = v93->m_GFXMovieNotification.m_movieProxy.m_ptr;
    if ( v96 )
      v96->m_bAdvance = 0;
    v97 = v93->m_GFXMovieNotification.m_movieProxy.m_ptr;
    if ( v97 )
      v97->m_bRender = 0;
  }
  v98 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v106 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v106);
    extension::SoundManager::the_instance = v98;
  }
  extension::SoundManager::stopSE(v98, 0.30000001);
  this->m_bFadeEnd = 0;
  this->m_FuncFT = 0;
  this->m_FadeExitFunc = 0;
  this->m_bFadeLock = 0;
  this->m_ReslutAlpha = 255;
  this->iReserveScene = -1;
  this->m_FuncST = 42;
  this->m_FuncBT = 43;
  AppMain::SceneFunc(this, 42);
  this->m_FuncExit = 41;
}

void __fastcall AppMain::ST_ResultLoop(AppMain *this)
{
  GfxManager *v2; // rax
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v4; // r13
  BattleSystem::ResultMemberInfo *p_resultMember; // r15
  __int64 *v6; // rax
  __int64 v7; // rdi
  GameDataInfo *v8; // rcx
  GAME_MODE v9; // ebx
  int v10; // er14
  GfxManager *v11; // rax
  GfxManager *v12; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  GfxManager *v17; // rax
  int v18; // edx
  PLAYER_ID m_MyPlayerID; // er12
  UserGameOperation *v20; // rax
  GfxManager *v21; // rax
  PLAYER_ID v22; // er8
  GfxManager::MENU_TYPE_ID v23; // edx
  ONLINE_STATE onlineState; // eax
  AppMain *v25; // rcx
  char IsResultGameOverMode; // al
  const extension::SoundHashKey *v27; // rdx
  int BaseCharaNo; // eax
  std::string *WinnersVoiceFilePath; // rax
  std::string *Ptr; // r8
  GameDataInfo *Instance; // rax
  const ImageDataInfo *MenuBGImageDataInfo; // rax
  USER_ID v33; // er15
  FighterOperation *v34; // rax
  int *p_userIndex; // rdx
  int v36; // ecx
  FighterOperation::ListenerNode *p_m_assignListenerListEnd; // r13
  extension::BiLinkable<FighterOperation::ListenerNode> *m_Next; // rbx
  extension::BiLinkable<FighterOperation::ListenerNode> **p_m_Next; // rcx
  USER_ID v40; // er15
  FighterOperation *v41; // rax
  AppMain *v42; // rcx
  _DWORD *v43; // rdx
  FighterOperation::ListenerNode *v44; // r13
  extension::BiLinkable<FighterOperation::ListenerNode> *v45; // rbx
  extension::BiLinkable<FighterOperation::ListenerNode> **v46; // rcx
  int v47; // edx
  GfxManager *v48; // rax
  extension::gfxi_detail::MovieProxy *v49; // rcx
  extension::gfxi_detail::MovieProxy *v50; // rcx
  GameDataInfo *v51; // rcx
  int v52; // eax
  __int64 *v53; // rax
  __int64 v54; // rbx
  int SaveDataMyAnnounceType; // eax
  SoundId v56; // edx
  int v57; // eax
  GameDataInfo *v58; // rcx
  CHARACTER_NO v59; // ebx
  GameDataInfo *v60; // rax
  LANGUAGE_MODE iUILanguage; // ebx
  extension::TranslateTable *v62; // rax
  const std::pair<char const *,enum LANGUAGE_MODE> *v63; // rcx
  const char *first; // rcx
  const char *v65; // r8
  const char *v66; // rbx
  GfxManager *v67; // rax
  GameDataInfo *v68; // rax
  const extension::SoundHashKey *IfExist; // rax
  __int64 v70; // rcx
  extension::SoundList *v71; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v72; // rcx
  int v73; // eax
  GfxManager *v74; // rax
  int v75; // edx
  __int64 v76; // rdx
  int v77; // er8
  int v78; // er9
  int v79; // eax
  char v80; // r12
  UserGameOperation *v81; // rax
  std::bitset<16> *v82; // r8
  __int64 v83; // rdx
  std::bitset<16> *v84; // rcx
  __int64 v85; // rdx
  signed __int64 v86; // r8
  __int64 v87; // r8
  __int64 i; // rdx
  GameDataInfo *v89; // rax
  __int64 v90; // rcx
  extension::SoundList *v91; // rcx
  bool v92; // di
  GameDataInfo *v93; // rax
  int v94; // edx
  __int64 v95; // rax
  unsigned __int8 iReplayAutoSave; // al
  GfxManager *v97; // rax
  __int64 v98; // rax
  AppMain *v99; // rcx
  __int64 v100; // rax
  GameDataInfo *v101; // rax
  int v102; // eax
  __int64 v103; // rax
  GfxManager *v104; // rax
  AppMain *v105; // rcx
  __int64 *v106; // rax
  __int64 v107; // rbx
  const char *v108; // rdx
  __int64 *v109; // rax
  GfxManager *v110; // rax
  PLAYER_ID PlayerID; // ebx
  GfxManager *v112; // rax
  __int64 v113; // rax
  GfxManager *v114; // rax
  AppMain *v115; // rcx
  GfxManager *v116; // rax
  GfxManager *v117; // rax
  int v118; // eax
  AppMain *v119; // rcx
  GameDataInfo *v120; // rax
  int v121; // er15
  GfxManager *v122; // rax
  GfxManager *v123; // r12
  int *m_ResultTransition; // r13
  char resultMenuCursor; // al
  int v126; // ebx
  GfxManager *v127; // rax
  bool v128; // r9
  __int64 v129; // rax
  __int64 v130; // rax
  GfxManager *v131; // rax
  __int64 myNo; // rbx
  unsigned __int8 FreeMatchResultMember; // al
  GAME_RULE gameRule; // edi
  int v135; // er8
  _BYTE *v136; // r9
  int v137; // edx
  _DWORD *v138; // rcx
  unsigned __int8 v139; // al
  _BYTE *v140; // r8
  _DWORD *v141; // rcx
  int v142; // eax
  GameDataInfo *v143; // rax
  int v144; // er15
  GfxManager *v145; // rax
  GfxManager *v146; // r12
  int *v147; // r13
  char v148; // al
  int v149; // ebx
  GfxManager *v150; // rax
  bool v151; // r9
  AppMain *v152; // rcx
  GfxManager *v153; // rax
  __int64 *v154; // rax
  __int64 v155; // rdi
  GfxManager *v156; // rax
  bool v157; // dl
  AppMain *v158; // rcx
  GameDataInfo *v159; // rax
  int StoryDemoMovieID; // ebx
  GameDataInfo *v161; // rax
  int v162; // edx
  __int64 v163; // rax
  CHARACTER_NO v164; // edi
  CHARACTER_NO v165; // ebx
  GameDataInfo *v166; // rax
  unsigned int v167; // er10
  int updated; // eax
  int v169; // eax
  int v170; // ecx
  int v171; // ecx
  int v172; // ecx
  __int64 v173; // rax
  __int64 v174; // rax
  GameDataInfo *v175; // rax
  GameDataInfo *v176; // rax
  GameDataInfo *v177; // rax
  GameDataInfo *v178; // rax
  bool v179; // dl
  int v180; // edx
  __int64 v181; // rax
  __int64 v182; // rax
  GfxManager *v183; // rax
  extension::GFXIMovieStack *v184; // rax
  char *v185; // rcx
  char *v186; // rax
  GfxManager *v187; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v188; // [rsp+50h] [rbp-B8h] BYREF
  extension::SoundHashKey v189; // [rsp+58h] [rbp-B0h] BYREF
  extension::SoundOneshotParameters optionParams; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v191; // [rsp+80h] [rbp-88h]
  std::string v192; // [rsp+88h] [rbp-80h] BYREF
  __int128 v193; // [rsp+A8h] [rbp-60h]
  __int128 v194; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v195[8]; // [rsp+C8h] [rbp-40h]
  std::string result; // [rsp+1E8h] [rbp+E0h] BYREF
  NET_USER_DATA pList[12]; // [rsp+208h] [rbp+100h] BYREF
  NET_USER_DATA v198[12]; // [rsp+798h] [rbp+690h] BYREF
  char key[256]; // [rsp+D28h] [rbp+C20h] BYREF

  v191 = -2i64;
  if ( !GfxManager::instance )
  {
    v189.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)v189.m_sharedBuffer.m_ptr);
    GfxManager::instance = v2;
  }
  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v189.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController((BattleSystem::BattleController *)v189.m_sharedBuffer.m_ptr);
    BattleSystem::BattleController::instance = v3;
  }
  v4 = v3;
  if ( !v3 )
  {
    v189.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController((BattleSystem::BattleController *)v189.m_sharedBuffer.m_ptr);
    BattleSystem::BattleController::instance = v3;
  }
  p_resultMember = &v3->resultMember;
  v6 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v7 = *v6;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v6 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v8);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v9 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  v192._Mypair._Myval2._Myres = 15i64;
  v10 = 0;
  v192._Mypair._Myval2._Mysize = 0i64;
  v192._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( !GfxManager::instance )
  {
    v189.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)v189.m_sharedBuffer.m_ptr);
    GfxManager::instance = v11;
  }
  if ( GfxManager::GFv_IsItemDisplay(GfxManager::instance) )
  {
    v12 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v189.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
      GfxManager::GfxManager((GfxManager *)v189.m_sharedBuffer.m_ptr);
      GfxManager::instance = v12;
    }
    if ( v12->m_GFXMovieNotification.m_movieProxy.m_ptr )
    {
      m_ptr = v12->m_GFXMovieNotification.m_movieProxy.m_ptr;
      if ( m_ptr )
      {
        if ( m_ptr->m_bAdvance )
        {
          extension::gfxi_detail::MovieOperationGenerator::postKeyboardEvent(
            &m_ptr->m_operationGenerator,
            m_ptr->m_movie.pObject);
          LOBYTE(v14) = 1;
          ((void (__fastcall *)(Scaleform::GFx::Movie *, __int64, __int64, __int64))m_ptr->m_movie.pObject->Advance)(
            m_ptr->m_movie.pObject,
            v15,
            2i64,
            v14);
        }
      }
    }
    goto LABEL_287;
  }
  if ( this->m_SceneState && AppMain::InputCheckNewChallenger(this, 0) )
  {
    GfxManager::getInstance();
    *(_BYTE *)(v16 + 172) = 1;
    GameDataInfo::getInstance()->m_ControllerSelect = 1;
    this->iReserveScene = -1;
    this->m_FadeST = 124;
    this->m_FuncST = 0;
    this->m_FadeExitFunc = 41;
    this->m_bExitFuncWaitFrame = 0;
    if ( this->m_FuncFT != 170 )
      this->m_FuncFT = 172;
    goto LABEL_287;
  }
  if ( v9 == GAME_MODE_FREEMATCH )
  {
    v17 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v189.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
      GfxManager::GfxManager((GfxManager *)v189.m_sharedBuffer.m_ptr);
      GfxManager::instance = v17;
    }
    if ( !GfxManager::GFv_IsOpenScreenMenu(v17) )
    {
      if ( this->m_SceneState )
      {
        m_MyPlayerID = GameDataInfo::getInstance()->m_MyPlayerID;
        if ( UserGameOperation::Test(1, GameOp_GameStart, Test_OnEdge) )
        {
          v20 = UserGameOperation::Instance();
          UserGameOperation::clear(v20);
          if ( (*((_DWORD *)&g_NetworkManager.gamedata.player_data[(unsigned __int8)g_NetworkManager.gamedata.myNo] + 4) & 0xC0000) != 0 )
          {
            GfxManager::getInstance();
            v22 = PLAYER_ID_1P;
            v23 = MENU_TYPE_ID_BATTLE_WATCH_RESULT;
          }
          else
          {
            GfxManager::getInstance();
            v22 = m_MyPlayerID;
            v23 = MENU_TYPE_ID_BATTLE_PARTICIPANT;
          }
          GfxManager::GFv_CallScreenMenu(v21, v23, v22);
        }
      }
    }
    if ( (unsigned int)(g_NetworkManager.gamedata.onlineState - 9) <= 3 )
    {
      onlineState = s_OnlineState;
      if ( s_OnlineState == NET_STATE_GAMERESULT )
        onlineState = g_NetworkManager.gamedata.onlineState;
      s_OnlineState = onlineState;
    }
    else
    {
      s_OnlineState = g_NetworkManager.gamedata.onlineState;
    }
    if ( s_BattleType == NETWORK_ROOM_BATTLE_TYPE_NONE )
      s_BattleType = (unsigned int)NetManager::GetMyTableBattleTypeFromSeat(&g_NetworkManager, v18);
    AppMain::PartyBattleDisconnectNotification(this);
  }
  SyncMenuImage::Update(&this->m_SyncMenuBG);
  switch ( this->m_SceneState )
  {
    case 1:
      if ( AppMain::IsResultContinueMode((AppMain *)0x140000000i64)
        || (IsResultGameOverMode = AppMain::IsResultGameOverMode(v25),
            v27 = &s_soundIndex.m_keys[69],
            IsResultGameOverMode) )
      {
        v27 = &s_soundIndex.m_keys[103];
      }
      AppMain::Sound_PlayBGMByName(this, v27, 0.0, 0.0, 0);
      BaseCharaNo = 518;
      if ( p_resultMember->charaNo[0] != CHARACTER_NO_GES_NMG )
        BaseCharaNo = BattleSystem::ResultMemberInfo::GetBaseCharaNo(p_resultMember, 0);
      WinnersVoiceFilePath = CharaProjectData::GetWinnersVoiceFilePath(
                               *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                               &result,
                               BaseCharaNo);
      std::string::assign(&v192, WinnersVoiceFilePath);
      std::string::~string(&result);
      if ( v192._Mypair._Myval2._Mysize )
      {
        Ptr = &v192;
        if ( v192._Mypair._Myval2._Myres >= 0x10 )
          Ptr = (std::string *)v192._Mypair._Myval2._Bx._Ptr;
        AppMain::Sound_LoadAppendPCharacter(
          this,
          (p_resultMember->battleWinnerID == GUARD_CRASH) + 1,
          Ptr->_Mypair._Myval2._Bx._Buf);
      }
      Instance = GameDataInfo::getInstance();
      MenuBGImageDataInfo = GetMenuBGImageDataInfo(Instance->m_StageID);
      SyncMenuImage::Load(&this->m_SyncMenuBG, MenuBGImageDataInfo, FADE_NONE);
      this->m_SceneState = 2;
      this->m_ReslutTimer = 0;
      v33 = GameDataInfo::getInstance()->m_ControllerSetting[0];
      v34 = FighterOperation::Instance();
      p_userIndex = &v34->m_slots[0].userIndex;
      if ( v34 != (FighterOperation *)-8i64 )
      {
        v36 = *p_userIndex;
        *p_userIndex = v33;
        v34->m_slots[0].userId = v33;
        if ( v36 != v33 )
        {
          p_m_assignListenerListEnd = &v34->m_assignListenerListEnd;
          m_Next = v34->m_assignListenerListEnd.m_Next;
          if ( m_Next != &v34->m_assignListenerListEnd )
          {
            do
            {
              p_m_Next = &m_Next[-1].m_Next;
              if ( !m_Next )
                p_m_Next = 0i64;
              ((void (__fastcall *)(extension::BiLinkable<FighterOperation::ListenerNode> **, __int64, _QWORD, __int64))(*p_m_Next)->m_Next)(
                p_m_Next,
                1i64,
                (unsigned int)v33,
                0xFFFFFFFFi64);
              m_Next = m_Next->m_Next;
            }
            while ( m_Next != p_m_assignListenerListEnd );
          }
        }
      }
      v40 = GameDataInfo::getInstance()->m_ControllerSetting[1];
      v41 = FighterOperation::Instance();
      v43 = &v41->m_slots[1].userIndex;
      if ( v41 != (FighterOperation *)-1488i64 )
      {
        v42 = (AppMain *)(unsigned int)*v43;
        *v43 = v40;
        v41->m_slots[1].userId = v40;
        if ( (_DWORD)v42 != v40 )
        {
          v44 = &v41->m_assignListenerListEnd;
          v45 = v41->m_assignListenerListEnd.m_Next;
          if ( v45 != &v41->m_assignListenerListEnd )
          {
            do
            {
              v46 = &v45[-1].m_Next;
              if ( !v45 )
                v46 = 0i64;
              ((void (__fastcall *)(extension::BiLinkable<FighterOperation::ListenerNode> **, __int64, _QWORD, __int64))(*v46)->m_Next)(
                v46,
                2i64,
                (unsigned int)v40,
                0xFFFFFFFFi64);
              v45 = v45->m_Next;
            }
            while ( v45 != v44 );
          }
        }
      }
      if ( !AppMain::IsResultActionMode(v42) )
      {
        AppMain::ResultSkip(this);
        AppMain::SaveDataAsyncSave(this, v47);
      }
      goto LABEL_280;
    case 2:
      ++this->m_ReslutTimer;
      if ( v4->roundPhase == 16 )
      {
        GfxManager::getInstance();
        if ( v48->m_GFXMovieNotification.m_movieProxy.m_ptr )
        {
          v49 = v48->m_GFXMovieNotification.m_movieProxy.m_ptr;
          if ( v49 )
            v49->m_bAdvance = 1;
          v50 = v48->m_GFXMovieNotification.m_movieProxy.m_ptr;
          if ( v50 )
            v50->m_bRender = 1;
        }
        else
        {
          GfxManager::LoadRequestNotification(v48);
        }
        if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v7 + 40) )
        {
          Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
          {
            GameDataInfo::GameDataInfo(v51);
            Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          }
        }
        v52 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
        if ( v52 <= 0 || v52 > 2 && (unsigned int)(v52 - 5) > 1 )
        {
          this->m_ReslutTimer = 40;
        }
        else
        {
          GfxManager::getInstance();
          v54 = *v53;
          if ( *v53
            && Scaleform::GFx::Movie::IsAvailable(*(Scaleform::GFx::Movie **)(v54 + 40), "_root.SetVictoryAnnounce") )
          {
            Scaleform::GFx::Movie::Invoke(
              *(Scaleform::GFx::Movie **)(v54 + 40),
              "_root.SetVictoryAnnounce",
              0i64,
              0i64,
              0);
          }
          if ( s_soundIndex.m_keys[39].m_sharedBuffer.m_ptr
            && !extension::SoundList::playSEByName(&this->m_Snd_Lists[5], &s_soundIndex.m_keys[39], 0i64) )
          {
            extension::SoundList::playSEByName(this->m_Snd_Lists, &s_soundIndex.m_keys[39], 0i64);
          }
          SaveDataMyAnnounceType = AppMain::GetSaveDataMyAnnounceType(
                                     this,
                                     (PLAYER_ID)(p_resultMember->battleWinnerID != COUNTER_HIT));
          v56 = SND_SYSVOICE_WINNER_F;
          if ( !SaveDataMyAnnounceType )
            v56 = SND_SYSVOICE_WINNER_M;
          AppMain::RequestPlaySE(this, v56);
          this->m_ReslutTimer = 0;
        }
        this->m_SceneState = 3;
      }
      goto LABEL_280;
    case 3:
      ++this->m_ReslutTimer;
      v57 = 0;
      if ( this->m_ReslutAlpha - 16 >= 0 )
        v57 = this->m_ReslutAlpha - 16;
      this->m_ReslutAlpha = v57;
      if ( (double)this->m_ReslutTimer < 72.0 )
        goto LABEL_280;
      this->m_ReslutAlpha = 0;
      if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v7 + 40) )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v58);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        }
      }
      if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_MISSION_SURVIVAL )
      {
        this->m_ReslutTimer = 40;
        goto LABEL_279;
      }
      memset(key, 0, sizeof(key));
      v59 = (unsigned int)BattleSystem::ResultMemberInfo::GetBaseCharaNo(p_resultMember, 0);
      v60 = GameDataInfo::getInstance();
      GameDataInfo::GetWinMesKey(v60, v59, p_resultMember->rivalCharaNo, key, p_resultMember->iRandomMessageNo);
      iUILanguage = this->SaveDataMain.SysOptionData.iUILanguage;
      v62 = extension::TranslateTable::Instance();
      v63 = extension::auxscript::MyLangCodeNameTable;
      while ( v63->second != iUILanguage )
      {
        if ( ++v63 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
        {
          first = 0i64;
          goto LABEL_101;
        }
      }
      first = v63->first;
LABEL_101:
      v65 = "en_US";
      if ( first )
        v65 = first;
      v66 = extension::TranslateTable::executeTranslate(v62, key, v65);
      GfxManager::getInstance();
      GfxManager::GFv_SetTelop(v67, v66);
      LODWORD(v66) = BattleSystem::ResultMemberInfo::GetBaseCharaNo(p_resultMember, 0);
      v68 = GameDataInfo::getInstance();
      GameDataInfo::GetWinVoiceName(
        v68,
        (CHARACTER_NO)v66,
        p_resultMember->rivalCharaNo,
        key,
        p_resultMember->iRandomMessageNo);
      LODWORD(optionParams.expressionVolume) = FLOAT_1_0;
      optionParams.userTag = 0;
      optionParams.audioSelect = -1;
      optionParams.pitchBendCent = 0;
      *(_QWORD *)&optionParams.pitchBendRandomRange = 200i64;
      optionParams.priority = 105;
      LODWORD(v66) = p_resultMember->battleWinnerID;
      IfExist = extension::SoundHashKey::MakeIfExist(&v189, key);
      v70 = 1i64;
      if ( (_DWORD)v66 == 2 )
        v70 = 2i64;
      v71 = &this->m_Snd_Lists[v70];
      if ( v71 )
        extension::SoundList::playSEByName(v71, IfExist, &optionParams);
      v72 = v189.m_sharedBuffer.m_ptr;
      if ( v189.m_sharedBuffer.m_ptr
        && _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&v189.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v72->~RefCountableWeakSupportBase)(
          v72,
          1i64);
      }
      this->m_ReslutTimer = 0;
LABEL_279:
      this->m_SceneState = 4;
      goto LABEL_280;
    case 4:
      v73 = this->m_ReslutTimer + 1;
      this->m_ReslutTimer = v73;
      if ( (double)v73 >= 60.0 )
      {
        this->m_ReslutTimer = 0;
        GfxManager::getInstance();
        GfxManager::GFv_SetResult(v74);
        if ( AppMain::SaveDataAsyncSave(this, v75) )
          AppMain::SetTusGalleryFlag(this, v76, v77, v78);
        this->m_ReslutTimer = 0;
        this->m_SceneState = 5;
      }
      goto LABEL_280;
    case 5:
      ++this->m_ReslutTimer;
      v79 = 0;
      if ( this->m_ReslutAlpha - 16 >= 0 )
        v79 = this->m_ReslutAlpha - 16;
      this->m_ReslutAlpha = v79;
      if ( this->m_ReslutTimer == 60 )
        AppMain::ResultTrophyUpdate(this);
      v80 = 0;
      v81 = UserGameOperation::Instance();
      if ( v81 == (UserGameOperation *)-2464i64 )
        goto LABEL_143;
      v82 = &v81->m_ButtonConfig[4];
      LODWORD(v187) = 0xFFFF;
      v83 = 0i64;
      v84 = &v81->m_ButtonConfig[4];
      while ( v84->_Array[0] == *(unsigned int *)((char *)v84->_Array + (char *)&v187 - (char *)&v81->m_ButtonConfig[4]) )
      {
        --v84;
        if ( --v83 < 0 )
          goto LABEL_129;
      }
      LODWORD(v188) = v81->m_anyUserSlot.m_pressedEventChannels._Array[0] & v82->_Array[0];
      v85 = 0i64;
      v86 = (char *)v82 - (char *)&v188;
      while ( *((_DWORD *)&v188 + v85) == *(_DWORD *)((char *)&v188 + 4 * v85 + v86) )
      {
        if ( --v85 < 0 )
          goto LABEL_135;
      }
LABEL_129:
      v193 = *(_OWORD *)v81->m_KeyboardButtonConfig[4]._Array;
      v194 = *(_OWORD *)&v81->m_KeyboardButtonConfig[4]._Array[2];
      v87 = 3i64;
      for ( i = 3i64; i >= 0; --i )
        *((_QWORD *)&v193 + i) &= *(_QWORD *)((char *)&v195[3]
                                            + 8 * i
                                            + (char *)&v81->m_anyUserSlot
                                            - ((char *)&v194
                                             + 8)
                                            + 8);
      v195[0] = v193;
      v195[1] = v194;
      while ( !*((_QWORD *)v195 + v87) )
      {
        if ( --v87 < 0 )
          goto LABEL_143;
      }
LABEL_135:
      v89 = GameDataInfo::getInstance();
      v90 = 1i64;
      if ( p_resultMember->battleWinnerID == GUARD_CRASH )
        v90 = 2i64;
      v91 = &this->m_Snd_Lists[v90];
      if ( v91 )
        extension::SoundList::stopSEByName(v91, v89->m_WinVoiceName, 0.5);
      if ( s_soundIndex.m_keys[29].m_sharedBuffer.m_ptr
        && !extension::SoundList::playSEByName(&this->m_Snd_Lists[5], &s_soundIndex.m_keys[29], 0i64) )
      {
        extension::SoundList::playSEByName(this->m_Snd_Lists, &s_soundIndex.m_keys[29], 0i64);
      }
      v80 = 1;
LABEL_143:
      v92 = 0;
      if ( v9 == GAME_MODE_FREEMATCH )
      {
        v93 = GameDataInfo::getInstance();
        v94 = 300;
        if ( v93->m_GameRule[v93->m_GameRuleIndex] == GAME_RULE_PARTY )
          v94 = 600;
        v92 = this->m_ReslutTimer >= v94;
      }
      if ( v80 || v92 )
      {
        AppMain::ResultTrophyUpdate(this);
        BattleSystem::BattleController::GetActionSystem();
        if ( *(_BYTE *)(v95 + 249328) )
        {
          iReplayAutoSave = this->SaveDataMain.SysOptionData.iReplayAutoSave;
          if ( iReplayAutoSave == 1 )
          {
            if ( SetReplayDataSaveData() )
              AppMain::SaveDataAsyncSaveReplay(this);
          }
          else if ( iReplayAutoSave == 2 )
          {
            this->m_ReslutTimer = 0;
            GfxManager::getInstance();
            GfxManager::GFv_SetSystemMessage(
              v97,
              "$POPUP_REPLAYSAVE",
              SYSTEM_MESSAGE_YESNO,
              1,
              1,
              "no_title",
              &pnewText,
              "size_s");
            GfxManager::getInstance();
            *(_QWORD *)(v98 + 248) = SystemMessageCallback_ReplaySave;
          }
        }
        this->m_SceneState = 6;
      }
      goto LABEL_280;
    case 6:
      GfxManager::getInstance();
      if ( *(_DWORD *)(v100 + 240) != 1 )
      {
        if ( AppMain::IsResultContinueMode(v99) )
        {
          AppMain::RequestPlayBGMUtil(this, SND_BGM_CONTINUE, BGM_MODE_NORMAL, 0.0, 0.0, 0);
          GfxManager::getInstance();
          v107 = *v106;
          if ( !*v106
            || !Scaleform::GFx::Movie::IsAvailable(*(Scaleform::GFx::Movie **)(v107 + 40), "_root.SetContinueCount") )
          {
            goto LABEL_165;
          }
          v108 = "_root.SetContinueCount";
        }
        else
        {
          if ( !AppMain::IsResultGameOverMode(v105) )
          {
            if ( v9 == GAME_MODE_VERSUS )
            {
              GfxManager::getInstance();
              GfxManager::GFv_SetSetTransitionMenu(v110, PLAYER_ID_1P);
            }
            else
            {
              if ( v9 != GAME_MODE_FREEMATCH || s_BattleType != NETWORK_ROOM_BATTLE_TYPE_CONTINUE || this->windowErrorNo )
              {
LABEL_178:
                GfxManager::getInstance();
                GfxManager::GFv_AllDeleteNotification(v114);
                AppMain::StopBGMUtil(v115, 0.5);
                this->m_bFadeEnd = 0;
                this->m_iFadeFrame = 15;
                this->m_iFadeColor.rgba = -1;
                this->m_iFadeRate = 17000;
                this->m_iFadeAlpha = 0;
                this->m_bFadeLock = 0;
                this->m_FuncFT = 170;
                goto LABEL_179;
              }
              PlayerID = (unsigned int)NetManager::GetPlayerID(&g_NetworkManager, -1);
              GfxManager::getInstance();
              GfxManager::GFv_SetSetTransitionMenu(v112, PlayerID);
            }
            this->m_ResultTransition[0] = -1;
            this->m_ResultTransition[1] = -1;
            this->m_SceneState = 8;
            goto LABEL_280;
          }
          GfxManager::getInstance();
          v107 = *v109;
          if ( !*v109
            || !Scaleform::GFx::Movie::IsAvailable(*(Scaleform::GFx::Movie **)(v107 + 40), "_root.SetGameOver") )
          {
LABEL_165:
            this->m_SceneState = 7;
            goto LABEL_280;
          }
          v108 = "_root.SetGameOver";
        }
        Scaleform::GFx::Movie::Invoke(*(Scaleform::GFx::Movie **)(v107 + 40), v108, 0i64, 0i64, 0);
        goto LABEL_165;
      }
      v101 = GameDataInfo::getInstance();
      if ( v101->m_GameMode[v101->m_GameModeIndex] == GAME_MODE_FREEMATCH )
      {
        v102 = this->m_ReslutTimer + 1;
        this->m_ReslutTimer = v102;
        if ( v102 == 600 )
        {
          GfxManager::getInstance();
          *(_QWORD *)(v103 + 248) = 0i64;
          GfxManager::getInstance();
          GfxManager::GFv_CloseSystemMessage(v104);
        }
      }
LABEL_280:
      if ( this->m_SceneState == 2 )
        AppMain::ResultActionLoop(this);
      v183 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        v187 = (GfxManager *)operator new(0x108ui64);
        GfxManager::GfxManager(v187);
        GfxManager::instance = v183;
      }
      if ( v183->m_SystemMessageState != SYSTEM_MESSAGE_OPEN || !v183->m_SystemMessageLock )
      {
        v184 = extension::GFXIMovieStack::Instance();
        extension::GFXIMovieStack::advance(v184, 0.016666668);
      }
LABEL_287:
      if ( v192._Mypair._Myval2._Myres >= 0x10 )
      {
        v185 = v192._Mypair._Myval2._Bx._Ptr;
        if ( v192._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (v192._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v186 = (char *)*((_QWORD *)v192._Mypair._Myval2._Bx._Ptr - 1);
          if ( v186 >= v192._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(v192._Mypair._Myval2._Bx._Ptr - v186) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(v192._Mypair._Myval2._Bx._Ptr - v186) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          v185 = (char *)*((_QWORD *)v192._Mypair._Myval2._Bx._Ptr - 1);
        }
        operator delete(v185);
      }
      return;
    case 7:
      GfxManager::getInstance();
      if ( *(_BYTE *)(v113 + 167) )
        goto LABEL_178;
      goto LABEL_280;
    case 8:
      if ( v9 == GAME_MODE_VERSUS )
      {
        GfxManager::getInstance();
        GfxManager::GFv_AllDeleteNotification(v117);
        v118 = this->m_ResultTransition[0];
        if ( v118 == -1 )
          goto LABEL_280;
        this->m_bFadeEnd = 0;
        this->m_iFadeFrame = 15;
        this->m_bFadeLock = 0;
        this->m_FuncFT = 170;
        if ( v118 )
        {
          this->m_iFadeColor.rgba = -1;
          this->m_iFadeAlpha = 0;
        }
        else
        {
          *(_QWORD *)&this->m_iFadeColor.rgba = 255i64;
        }
        v119 = (AppMain *)(1000 * (unsigned int)this->m_iFadeColor.s.a);
        this->m_iFadeRate = (int)v119 / 15;
        AppMain::StopBGMUtil(v119, 0.5);
LABEL_179:
        GfxManager::getInstance();
        GfxManager::GFv_ExitScreenMenu(v116);
        this->m_SceneState = 10;
        goto LABEL_280;
      }
      if ( v9 != GAME_MODE_FREEMATCH )
        goto LABEL_280;
      v120 = GameDataInfo::getInstance();
      if ( v120->m_GameRule[v120->m_GameRuleIndex] == GAME_RULE_PARTY )
        goto LABEL_280;
      if ( !g_dirty_flag_result_random )
      {
        g_dirty_flag_result_random = 1;
        NetManager::RandomCharaState(&g_NetworkManager);
      }
      v121 = 0;
      v122 = (GfxManager *)(int)NetManager::GetPlayerID(&g_NetworkManager, -1);
      v187 = (GfxManager *)(int)v122;
      v123 = 0i64;
      m_ResultTransition = this->m_ResultTransition;
      while ( v122 == v123 )
      {
        if ( *m_ResultTransition != -1 )
        {
          AppMain::SendResultMenu(this, *m_ResultTransition);
LABEL_196:
          v122 = v187;
        }
        ++v121;
        v123 = (GfxManager *)((char *)v123 + 1);
        ++m_ResultTransition;
        if ( v121 >= 2 )
        {
          if ( (unsigned int)(s_OnlineState - 8) <= 4 || s_OnlineState == NET_STATE_WAITCLIENT )
          {
            memset(pList, 0, sizeof(pList));
            myNo = (unsigned __int8)g_NetworkManager.gamedata.myNo;
            FreeMatchResultMember = NetManager::GetFreeMatchResultMember(
                                      &g_NetworkManager,
                                      *((_DWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 4) & 0x7F,
                                      pList);
            gameRule = g_NetworkManager.gamedata.gameRule;
            if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY )
            {
              v137 = 0;
              if ( FreeMatchResultMember )
              {
                v138 = (_DWORD *)((char *)pList + 8);
                do
                {
                  if ( (v138[2] & 0x100000) == 0 && ((*v138 >> 11) & 3) == 1 )
                    break;
                  ++v137;
                  v138 = (_DWORD *)((char *)v138 + 118);
                }
                while ( v137 < FreeMatchResultMember );
              }
            }
            else
            {
              v135 = 0;
              if ( FreeMatchResultMember )
              {
                v136 = (char *)pList + 16;
                do
                {
                  if ( (*v136 & 0x7F) % 12 == 1 )
                    break;
                  ++v135;
                  v136 += 118;
                }
                while ( v135 < FreeMatchResultMember );
              }
            }
            memset(v198, 0, sizeof(v198));
            v139 = NetManager::GetFreeMatchResultMember(
                     &g_NetworkManager,
                     *((_DWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 4) & 0x7F,
                     v198);
            if ( gameRule == GAME_RULE_PARTY )
            {
              if ( v139 )
              {
                v141 = (_DWORD *)((char *)v198 + 8);
                do
                {
                  if ( (v141[2] & 0x100000) != 0 && ((*v141 >> 11) & 3) == 1 )
                    break;
                  ++v10;
                  v141 = (_DWORD *)((char *)v141 + 118);
                }
                while ( v10 < v139 );
              }
            }
            else if ( v139 )
            {
              v140 = (char *)v198 + 16;
              do
              {
                if ( (*v140 & 0x7F) % 12 != 1 )
                  break;
                ++v10;
                v140 += 118;
              }
              while ( v10 < v139 );
            }
            this->m_ReslutTimer = 60;
            this->m_SceneState = 9;
          }
          else
          {
            GfxManager::getInstance();
            if ( *(_BYTE *)(v129 + 167) )
            {
              GfxManager::getInstance();
              if ( *(_DWORD *)(v130 + 168) == 9 )
              {
                AppMain::SendRoomBack(this, 0);
                this->iReserveScene = -1;
                this->m_FadeST = 148;
                this->m_FuncST = 0;
                this->m_FadeExitFunc = 41;
                *(_WORD *)&this->m_bFadeEnd = 0;
                this->m_iFadeFrame = 20;
                this->m_iFadeColor.rgba = -1;
                this->m_iFadeRate = 12750;
                this->m_iFadeAlpha = 0;
                this->m_bFadeLock = 0;
                this->m_FuncFT = 170;
              }
              GfxManager::getInstance();
              GfxManager::ReleaseGFXMovie(v131, 0);
            }
          }
          goto LABEL_280;
        }
      }
      resultMenuCursor = g_NetworkManager.gamedata.playerDataSub[(unsigned __int8)NetManager::GetPNo(
                                                                                    &g_NetworkManager,
                                                                                    (PLAYER_ID)v121,
                                                                                    0)].resultMenuCursor;
      if ( resultMenuCursor != -1 )
      {
        v126 = resultMenuCursor;
        GfxManager::getInstance();
        GfxManager::GFv_UpdateTransitionMenu(v127, (PLAYER_ID)v121, v126, v128);
      }
      goto LABEL_196;
    case 9:
      v142 = this->m_ReslutTimer - 1;
      this->m_ReslutTimer = v142;
      if ( v142 > 0 )
        goto LABEL_280;
      if ( v9 != GAME_MODE_FREEMATCH )
        goto LABEL_238;
      v143 = GameDataInfo::getInstance();
      if ( v143->m_GameRule[v143->m_GameRuleIndex] == GAME_RULE_PARTY )
        goto LABEL_238;
      v144 = 0;
      v145 = (GfxManager *)(int)NetManager::GetPlayerID(&g_NetworkManager, -1);
      v187 = (GfxManager *)(int)v145;
      v146 = 0i64;
      v147 = this->m_ResultTransition;
      break;
    case 0xA:
      if ( !this->m_bFadeEnd && this->m_iFadeAlpha )
        goto LABEL_280;
      GfxManager::getInstance();
      v155 = *v154;
      if ( *v154
        && Scaleform::GFx::Movie::IsAvailable(*(Scaleform::GFx::Movie **)(v155 + 40), "_root.RemoveVictoryAnnounce") )
      {
        Scaleform::GFx::Movie::Invoke(
          *(Scaleform::GFx::Movie **)(v155 + 40),
          "_root.RemoveVictoryAnnounce",
          0i64,
          0i64,
          0);
      }
      GfxManager::getInstance();
      GfxManager::GFv_RemoveTelop(v156, v157);
      switch ( v9 )
      {
        case GAME_MODE_STORY:
          if ( p_resultMember->battleWinnerID == COUNTER_HIT )
          {
            v159 = GameDataInfo::getInstance();
            StoryDemoMovieID = GameDataInfo::GetStoryDemoMovieID(v159);
            if ( StoryDemoMovieID != 9 )
            {
              v161 = GameDataInfo::getInstance();
              GameDataInfo::CommitCharacterNoRand(v161);
            }
            if ( StoryDemoMovieID != -1 )
            {
              v162 = 112;
              goto LABEL_275;
            }
$LN113_6:
            GfxManager::getInstance();
            *(_BYTE *)(v181 + 257) = 0;
            goto LABEL_274;
          }
          GfxManager::getInstance();
          if ( *(_DWORD *)(v163 + 168) != -1 )
            goto LABEL_264;
          v164 = GameDataInfo::getInstance()->m_CharacterNo[0][0];
          v165 = GameDataInfo::getInstance()->m_CharacterNo[0][1];
          v166 = GameDataInfo::getInstance();
          v167 = v4->playerInfo[0].iTotalScore ^ 0x7B48A35E ^ (LOWORD(v4->playerInfo[0].iTotalScore) ^ 0xA35E ^ (unsigned __int16)((v4->playerInfo[0].iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(v4->playerInfo[0].iTotalScore) ^ 0xA35E ^ (unsigned __int16)((v4->playerInfo[0].iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
          updated = SaveRecord_PlayerData::UpdateStoryScore(
                      &this->SaveDataMain.PlayerData,
                      v164,
                      v165,
                      v166->m_CharacterNo[0][2],
                      (v167 ^ (v167 >> 7)) & 0x550055 ^ v167 ^ (((v167 ^ (v167 >> 7)) & 0x550055) << 7));
          if ( updated != -1 )
          {
            this->m_NewMyRanking = 0;
            this->m_NewMyRankingRank = updated;
          }
          goto $LN102_6;
        case GAME_MODE_VERSUS:
          v170 = this->m_ResultTransition[0];
          if ( v170 )
          {
            v171 = v170 - 1;
            if ( v171 )
            {
              v172 = v171 - 1;
              if ( v172 )
              {
                if ( v172 != 1 )
                  goto LABEL_287;
LABEL_263:
                v162 = 16;
              }
              else
              {
LABEL_264:
                GfxManager::getInstance();
                *(_BYTE *)(v173 + 257) = 0;
                v162 = 24;
              }
            }
            else
            {
              GfxManager::getInstance();
              *(_BYTE *)(v174 + 257) = 0;
              v175 = GameDataInfo::getInstance();
              GameDataInfo::CommitCharacterNoRand(v175);
              v176 = GameDataInfo::getInstance();
              GameDataInfo::CommitStageIDRand(v176);
LABEL_274:
              v162 = 28;
            }
LABEL_275:
            AppMain::setNonFadeSTExit(this, v162, 41);
          }
          else
          {
            v177 = GameDataInfo::getInstance();
            GameDataInfo::CommitCharacterNoRand(v177);
            v178 = GameDataInfo::getInstance();
            GameDataInfo::CommitStageIDRand(v178);
LABEL_272:
            AppMain::SetBattleSetting(this, v179);
            AppMain::SetBattleLoadingNonFade(this, v180, 41);
          }
          break;
        case GAME_MODE_FREEMATCH:
          switch ( s_OnlineState )
          {
            case NET_STATE_TOP:
              AppMain::setNonFadeSTExit(this, 100, 41);
              break;
            case NET_STATE_WAITCLIENT:
            case NET_STATE_WAITSTART:
            case NET_STATE_GAMERESULT:
              AppMain::SendRoomBack(this, 0);
              AppMain::setNonFadeSTExit(this, 148, 41);
              break;
            case NET_STATE_ORDERSELECT:
              goto $LN113_6;
            case NET_STATE_CHARACTERSELECT:
            case NET_STATE_CHARACTERSELECT_NOT_PARTY:
              GfxManager::getInstance();
              *(_BYTE *)(v182 + 257) = 0;
              AppMain::setNonFadeSTExit(this, 24, 41);
              break;
            case NET_STATE_BATTLELOADING:
              AppMain::SetBattleInfoFromRoom(v158);
              goto LABEL_272;
            default:
              goto LABEL_263;
          }
          goto LABEL_287;
        case GAME_MODE_RANKMATCH:
          if ( g_NetworkManager.rank_traning_wait.stageID == STAGE_ID_NONE )
            AppMain::setNonFadeSTExit(this, 128, 41);
          else
            AppMain::TraningWait4RankmatchSTExit(this, 41);
          goto LABEL_287;
        case GAME_MODE_MISSION_TIMEATTACK:
        case GAME_MODE_MISSION_SURVIVAL:
$LN102_6:
          v169 = 72;
          if ( this->m_NewMyRanking == -1 )
            v169 = 16;
          v162 = v169;
          goto LABEL_275;
        default:
          goto LABEL_263;
      }
      goto LABEL_287;
    default:
      goto LABEL_280;
  }
  while ( v145 == v146 )
  {
    if ( *v147 != -1 )
    {
      AppMain::SendResultMenu(this, *v147);
LABEL_236:
      v145 = v187;
    }
    ++v144;
    v146 = (GfxManager *)((char *)v146 + 1);
    ++v147;
    if ( v144 >= 2 )
    {
LABEL_238:
      this->m_bFadeEnd = 0;
      this->m_iFadeFrame = 15;
      this->m_bFadeLock = 0;
      this->m_FuncFT = 170;
      if ( s_OnlineState == NET_STATE_BATTLELOADING )
      {
        *(_QWORD *)&this->m_iFadeColor.rgba = 255i64;
      }
      else
      {
        this->m_iFadeColor.rgba = -1;
        this->m_iFadeAlpha = 0;
      }
      v152 = (AppMain *)(1000 * (unsigned int)this->m_iFadeColor.s.a);
      this->m_iFadeRate = (int)v152 / 15;
      AppMain::StopBGMUtil(v152, 0.5);
      GfxManager::getInstance();
      GfxManager::GFv_AllDeleteNotification(v153);
      goto LABEL_179;
    }
  }
  v148 = g_NetworkManager.gamedata.playerDataSub[(unsigned __int8)NetManager::GetPNo(
                                                                    &g_NetworkManager,
                                                                    (PLAYER_ID)v144,
                                                                    0)].resultMenuCursor;
  if ( v148 != -1 )
  {
    v149 = v148;
    GfxManager::getInstance();
    GfxManager::GFv_UpdateTransitionMenu(v150, (PLAYER_ID)v144, v149, v151);
  }
  goto LABEL_236;
}

void __fastcall AppMain::ST_ResultLoopPartial(AppMain *this)
{
  AppMain *v2; // rcx
  BattleSystem::BattleController *v3; // rdi
  BattleSystem::BattleController *v4; // rax
  BattleSystem::BattleController *v5; // r13
  BattleSystem::BattleController *v6; // rax
  __int64 i; // r14
  ActionSystem::ActorList *j; // rbx
  Actor *pActor; // rcx
  __int64 k; // r14
  ActionSystem::ActorList *m; // rbx
  Actor *v12; // rcx
  int n; // ebx
  int v14; // er14
  __int64 ii; // r15
  ActionSystem::ActorList *jj; // rbx
  Actor *v17; // rcx
  Fw::cJobManager *v18; // rdx
  EffectTaskManager *effSystem; // rax
  Fw::cJobManager *v20; // rdx
  float upFogStrength; // xmm3_4
  float upFogHeightExp; // xmm2_4
  float upFogHeight; // xmm1_4
  float upFogDistExp; // xmm0_4
  OGLFog *p_m_GroundFog; // rcx
  float downFogStrength; // xmm3_4
  float downFogHeightExp; // xmm2_4
  float downFogHeight; // xmm1_4
  float downFogDistExp; // xmm0_4
  OGLFog *v30; // rcx
  OGLRender *m_pRender; // rax
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  OGLFog *p_m_SkyFog; // rcx
  float v41; // xmm3_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  OGLFog *v45; // rcx
  OGLRender *v46; // rax
  float v47; // xmm4_4
  float v48; // xmm3_4
  float v49; // xmm1_4
  float v50; // xmm0_4
  BattleSystem::BattleController::ROUND_PHASE roundPhase; // eax
  OGLRender *v52; // rax
  OGLRender *v53; // rax
  std::function<void __cdecl(Actor &)> v54; // [rsp+28h] [rbp-58h] BYREF
  BattleSystem::BattleController *v55; // [rsp+B0h] [rbp+30h]
  BattleSystem::BattleController *v56; // [rsp+B0h] [rbp+30h]

  SyncMenuImage::Update(&this->m_SyncMenuBG);
  if ( this->m_SceneState == 2 )
  {
    v3 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v55 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v55);
      v3 = v4;
      BattleSystem::BattleController::instance = v4;
    }
    v5 = v3;
    if ( !v3 )
    {
      v56 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v56);
      v3 = v6;
      BattleSystem::BattleController::instance = v6;
    }
    if ( AppMain::IsResultActionMode(v2) && v5->roundPhase != 16 )
    {
      ActionSystem::PreCaller(&v3->actSystem, 0, 3);
      ActionSystem::MainCaller(&v3->actSystem, 0, 3);
      for ( i = 0i64; i <= 3; ++i )
      {
        for ( j = v3->actSystem.ppPriStart[i]; j; j = j->pNext )
        {
          pActor = j->pActor;
          if ( pActor->systemStat == MAIN && !pActor->bSkipSyncPosture )
            pActor->SyncPosture(pActor);
        }
      }
      ActionSystem::PreCaller(&v3->actSystem, 4, 6);
      ActionSystem::MainCaller(&v3->actSystem, 4, 6);
      for ( k = 4i64; k <= 6; ++k )
      {
        for ( m = v3->actSystem.ppPriStart[k]; m; m = m->pNext )
        {
          v12 = m->pActor;
          if ( v12->systemStat == MAIN && !v12->bSkipSyncPosture )
            v12->SyncPosture(v12);
        }
      }
      for ( n = 0; n <= 6; ++n )
        ActionSystem::LateCaller(&v3->actSystem, n);
      v14 = 7;
      ActionSystem::PreCaller(&v3->actSystem, 7, 8);
      ActionSystem::MainCaller(&v3->actSystem, 7, 8);
      for ( ii = 7i64; ii <= 8; ++ii )
      {
        for ( jj = v3->actSystem.ppPriStart[ii]; jj; jj = jj->pNext )
        {
          v17 = jj->pActor;
          if ( v17->systemStat == MAIN && !v17->bSkipSyncPosture )
            v17->SyncPosture(v17);
        }
      }
      do
        ActionSystem::LateCaller(&v3->actSystem, v14++);
      while ( v14 <= 8 );
      EffectTaskManager::updateStack(this->effSystem, v18);
      effSystem = this->effSystem;
      if ( ++effSystem->UseDataBufferNum >= 2 )
        effSystem->UseDataBufferNum = 0;
      ActionSystem::CameraLateCalc(&v3->actSystem);
      AppMain::checkSpecialEffectSetting(this);
      AppMain::renderSetCamera(this, 0, -1);
      EffectTaskManager::updateBufferStack(this->effSystem, v20);
      this->m_pRender->m_GroundFog.m_bOn = this->ModelRoomSettings.postprocessSettings.groundFogSettings.fogOn;
      if ( this->ModelRoomSettings.postprocessSettings.groundFogSettings.fogOn )
      {
        this->m_pRender->m_GroundFog.m_calcType = this->ModelRoomSettings.postprocessSettings.groundFogSettings.calcType;
        upFogStrength = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogStrength;
        upFogHeightExp = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogHeightExp;
        upFogHeight = (float)this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogHeight;
        upFogDistExp = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogDistExp;
        p_m_GroundFog = &this->m_pRender->m_GroundFog;
        p_m_GroundFog->m_fUpDistance = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogDist;
        p_m_GroundFog->m_fUpDistanceExp = upFogDistExp;
        p_m_GroundFog->m_fUpHeight = upFogHeight;
        p_m_GroundFog->m_fUpHeightExp = upFogHeightExp;
        p_m_GroundFog->m_fUpStrength = upFogStrength;
        p_m_GroundFog->m_UpColour[0] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogColour[0];
        p_m_GroundFog->m_UpColour[1] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogColour[1];
        p_m_GroundFog->m_UpColour[2] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogColour[2];
        p_m_GroundFog->m_UpColour[3] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.upFogColour[3];
        downFogStrength = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogStrength;
        downFogHeightExp = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogHeightExp;
        downFogHeight = (float)this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogHeight;
        downFogDistExp = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogDistExp;
        v30 = &this->m_pRender->m_GroundFog;
        v30->m_fDownDistance = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogDist;
        v30->m_fDownDistanceExp = downFogDistExp;
        v30->m_fDownHeight = downFogHeight;
        v30->m_fDownHeightExp = downFogHeightExp;
        v30->m_fDownStrength = downFogStrength;
        v30->m_DownColour[0] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogColour[0];
        v30->m_DownColour[1] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogColour[1];
        v30->m_DownColour[2] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogColour[2];
        v30->m_DownColour[3] = this->ModelRoomSettings.postprocessSettings.groundFogSettings.downFogColour[3];
        m_pRender = this->m_pRender;
        v32 = 1.0 / (float)(m_pRender->m_GroundFog.m_fDownHeight + 200.0);
        v33 = (float)(m_pRender->m_GroundFog.m_fUpDistance - 1.0) * 0.00024420026;
        v34 = (float)(m_pRender->m_GroundFog.m_fUpHeight + 200.0) / 400.0;
        v35 = (float)(m_pRender->m_GroundFog.m_fDownDistance - 1.0) * 0.00024420026;
        m_pRender->m_GroundFog.m_fShaderDistDivisor = 0.00024420026;
        m_pRender->m_GroundFog.m_fShaderUpDistance = v33;
        m_pRender->m_GroundFog.m_fShaderUpHeight = v34;
        m_pRender->m_GroundFog.m_fShaderDownDistance = v35;
        m_pRender->m_GroundFog.m_fShaderExtraHeightSetting = v32;
      }
      this->m_pRender->m_SkyFog.m_bOn = this->ModelRoomSettings.postprocessSettings.skyFogSettings.fogOn;
      if ( this->ModelRoomSettings.postprocessSettings.skyFogSettings.fogOn )
      {
        this->m_pRender->m_SkyFog.m_calcType = this->ModelRoomSettings.postprocessSettings.skyFogSettings.calcType;
        v36 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogStrength;
        v37 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogHeightExp;
        v38 = (float)this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogHeight;
        v39 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogDistExp;
        p_m_SkyFog = &this->m_pRender->m_SkyFog;
        p_m_SkyFog->m_fUpDistance = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogDist;
        p_m_SkyFog->m_fUpDistanceExp = v39;
        p_m_SkyFog->m_fUpHeight = v38;
        p_m_SkyFog->m_fUpHeightExp = v37;
        p_m_SkyFog->m_fUpStrength = v36;
        p_m_SkyFog->m_UpColour[0] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogColour[0];
        p_m_SkyFog->m_UpColour[1] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogColour[1];
        p_m_SkyFog->m_UpColour[2] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogColour[2];
        p_m_SkyFog->m_UpColour[3] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.upFogColour[3];
        v41 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogStrength;
        v42 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogHeightExp;
        v43 = (float)this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogHeight;
        v44 = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogDistExp;
        v45 = &this->m_pRender->m_SkyFog;
        v45->m_fDownDistance = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogDist;
        v45->m_fDownDistanceExp = v44;
        v45->m_fDownHeight = v43;
        v45->m_fDownHeightExp = v42;
        v45->m_fDownStrength = v41;
        v45->m_DownColour[0] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogColour[0];
        v45->m_DownColour[1] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogColour[1];
        v45->m_DownColour[2] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogColour[2];
        v45->m_DownColour[3] = this->ModelRoomSettings.postprocessSettings.skyFogSettings.downFogColour[3];
        v46 = this->m_pRender;
        v47 = 1.0 / (float)(1000.0 - v46->m_SkyFog.m_fDownHeight);
        v48 = (float)(v46->m_SkyFog.m_fUpDistance - 1.0) * 0.00024420026;
        v49 = 1.0 / (float)(1000.0 - v46->m_SkyFog.m_fUpHeight);
        v50 = (float)(v46->m_SkyFog.m_fDownDistance - 1.0) * 0.00024420026;
        v46->m_SkyFog.m_fShaderDistDivisor = 0.00024420026;
        v46->m_SkyFog.m_fShaderUpDistance = v48;
        v46->m_SkyFog.m_fShaderUpHeight = v49;
        v46->m_SkyFog.m_fShaderDownDistance = v50;
        v46->m_SkyFog.m_fShaderExtraHeightSetting = v47;
      }
      if ( this->m_ReslutAlpha >= 255 && v5->resultMember.bFinalKO )
      {
        this->ModelRoomSettings.framebufferColour[0] = 255;
        this->ModelRoomSettings.framebufferColour[1] = 255;
        this->ModelRoomSettings.framebufferColour[2] = 255;
      }
      else
      {
        *(_QWORD *)this->ModelRoomSettings.framebufferColour = 0i64;
        this->ModelRoomSettings.framebufferColour[2] = 0;
      }
      roundPhase = v5->roundPhase;
      if ( roundPhase && roundPhase != (WALL|DIE) )
      {
        v52 = this->m_pRender;
        if ( v52->m_RenderStackNo < 8 )
          v52->m_RenderStackNo = 2;
        ActionSystem::DrawCaller(&v3->actSystem, 2);
        v53 = this->m_pRender;
        if ( v53->m_RenderStackNo < 8 )
          v53->m_RenderStackNo = 3;
        ActionSystem::DrawCaller(&v3->actSystem, 3);
        v54._Mystorage._Ptrs[7] = 0i64;
        if ( AppMain::CheckProjBlendActor )
        {
          v54._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<void (*)(Actor &),std::allocator<int>,void,Actor &>::`vftable';
          v54._Mystorage._Ptrs[1] = (std::_Func_base<void,Actor &> *)AppMain::CheckProjBlendActor;
          v54._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v54;
        }
        ActionSystem::FuncCallRequest(&v3->actSystem, (Actor *)2, &v54);
        v54._Mystorage._Ptrs[7] = 0i64;
        if ( AppMain::CheckProjBlendActor )
        {
          v54._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<void (*)(Actor &),std::allocator<int>,void,Actor &>::`vftable';
          v54._Mystorage._Ptrs[1] = (std::_Func_base<void,Actor &> *)AppMain::CheckProjBlendActor;
          v54._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v54;
        }
        ActionSystem::FuncCallRequest(&v3->actSystem, (Actor *)3, &v54);
        v54._Mystorage._Ptrs[7] = 0i64;
        if ( AppMain::CheckProjBlendActor )
        {
          v54._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<void (*)(Actor &),std::allocator<int>,void,Actor &>::`vftable';
          v54._Mystorage._Ptrs[1] = (std::_Func_base<void,Actor &> *)AppMain::CheckProjBlendActor;
          v54._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v54;
        }
        ActionSystem::FuncCallRequest(&v3->actSystem, (Actor *)4, &v54);
        v54._Mystorage._Ptrs[7] = 0i64;
        if ( AppMain::CheckProjBlendActor )
        {
          v54._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<void (*)(Actor &),std::allocator<int>,void,Actor &>::`vftable';
          v54._Mystorage._Ptrs[1] = (std::_Func_base<void,Actor &> *)AppMain::CheckProjBlendActor;
          v54._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v54;
        }
        ActionSystem::FuncCallRequest(&v3->actSystem, (Actor *)5, &v54);
        ActionSystem::DrawCaller(&v3->actSystem, 0, 1);
        ActionSystem::DrawCaller(&v3->actSystem, 6, 9);
        if ( v5->roundPhase != 16 )
        {
          AppMain::setupLightUniforms(this, -1);
          AppMain::setupShadowMatrices(this);
        }
      }
    }
  }
}

void __fastcall SystemMessageCallback_ReplaySave(int cursor)
{
  AppMain *v1; // rsi
  bool v2; // bp
  void **m_pBuffer; // rbx
  __int64 v4; // rdi

  if ( !cursor )
  {
    v1 = *(AppMain **)&AppMain::pApp;
    v2 = 0;
    if ( *(_QWORD *)&AppMain::pApp )
      v2 = AppMain::SetReplaySaveData(*(AppMain **)&AppMain::pApp, &replayBattle);
    if ( pBtlNet )
    {
      m_pBuffer = (void **)replayBattle.m_pBuffer;
      v4 = 6i64;
      do
      {
        if ( *m_pBuffer )
        {
          aligned_free(*m_pBuffer);
          *m_pBuffer = 0i64;
        }
        *(m_pBuffer - 136) = 0i64;
        ++m_pBuffer;
        --v4;
      }
      while ( v4 );
    }
    if ( v2 )
      AppMain::SaveDataAsyncSaveReplay(v1);
  }
}

std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *__fastcall std::_List_alloc<std::_List_base_types<std::pair<int const,int>>>::_Buynode0(
        std::_List_alloc<std::_List_base_types<Scaleform::Ptr<Scaleform::Render::ThreadCommand>> > *this,
        std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *_Next,
        std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *_Prev)
{
  std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *result; // rax

  result = (std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *)operator new(0x18ui64);
  if ( !_Next )
  {
    _Next = result;
    _Prev = result;
  }
  if ( result )
    result->_Next = _Next;
  if ( result != (std::_List_node<Scaleform::Ptr<Scaleform::Render::ThreadCommand>,void *> *)-8i64 )
    result->_Prev = _Prev;
  return result;
}

