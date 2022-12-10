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
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/network/netbattle.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/roommembers.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/imagestring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/scene_roommember.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/roommembers.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A0AFD
unsigned long long s_OnlineTrainingStartTime; // 0x140A97630
void AppMain::CallGayaSe(NETWORK_GAYA_TYPE seNo, bool bSendSERequest); // 0x1401B90C0
void AppMain::OnlineTrainingSendSetting(TrainingSetting & training); // 0x1401B9250
void AppMain::setupOnlineRoomMembers(); // 0x1401B93C0
void AppMain::switchingOnlineRoomMembers(bool bVisible); // 0x1401B9430
void AppMain::OnlineInitializeGUIParams(); // 0x1401B94F0
void AppMain::OnlineSetupGUIParams(); // 0x1401B98F0
void AppMain::OnlineUpdateGUI(); // 0x1401B9AB0
void AppMain::OnlineDrawGUI(); // 0x1401B9E10
OGLModel * AppMain::getPlayerModel(PLAYER_ID playerID); // 0x1401B9ED0//decompilation failure at 1408A0AFD!
//decompilation failure at 140A97630!
void __fastcall AppMain::CallGayaSe(AppMain *this, NETWORK_GAYA_TYPE seNo, bool bSendSERequest)
{
  SEND_MESSAGE *p_s_Msg; // r14
  unsigned __int8 v5; // al
  int optNum; // er11
  unsigned __int8 v7; // bl
  char *v8; // r10
  _DWORD *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r9
  unsigned int v12; // er8
  __int64 v13; // rbx
  const char *GayaSEName; // rax
  const extension::SoundHashKey *IfExist; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx
  extension::SoundHashKey result; // [rsp+30h] [rbp-98h] BYREF
  __int64 v18; // [rsp+38h] [rbp-90h]
  char opt[96]; // [rsp+40h] [rbp-88h] BYREF

  v18 = -2i64;
  if ( bSendSERequest )
  {
    p_s_Msg = &this->s_Msg;
    this->s_Msg.msgType = 23;
    this->s_Msg.msgBattleCommand.time &= 0xFFFFFFF0;
    this->s_Msg.msgBattleCommand.time |= seNo & 0xF;
    v5 = *((_BYTE *)&this->myRoomMemberInfo + 16) & 0x7F;
    optNum = 0;
    v7 = 1;
    if ( v5 > 0xCu )
      v7 = 12 * ((v5 - 1) / 12) + 1;
    v8 = opt;
    v9 = (_DWORD *)((char *)g_NetworkManager.gamedata.player_data + 16);
    v10 = 12i64;
    do
    {
      v11 = *((_QWORD *)v9 - 2);
      if ( v11 )
      {
        v12 = *v9 & 0x7F;
        if ( v7 <= v12 && v12 < (unsigned __int8)(v7 + 12) && (*v9 & 0x380) == 384 )
        {
          *(_QWORD *)v8 = v11;
          ++optNum;
          v8 += 8;
        }
      }
      v9 = (_DWORD *)((char *)v9 + 118);
      --v10;
    }
    while ( v10 );
    NetManager::SendMessageW(&g_NetworkManager, p_s_Msg, opt, 2, optNum);
  }
  v13 = *(_QWORD *)&AppMain::pApp;
  if ( *(_QWORD *)&AppMain::pApp )
  {
    GayaSEName = NetManager::GetGayaSEName((NetManager *)this, seNo);
    IfExist = extension::SoundHashKey::MakeIfExist(&result, GayaSEName);
    if ( v13 != -2197288 )
      extension::SoundList::playSEByName((extension::SoundList *)(v13 + 2197288), IfExist, 0i64);
    m_ptr = result.m_sharedBuffer.m_ptr;
    if ( result.m_sharedBuffer.m_ptr )
    {
      if ( _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&result.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
        ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))m_ptr->~RefCountableWeakSupportBase)(
          m_ptr,
          1i64);
    }
  }
}

void __fastcall AppMain::OnlineDrawGUI(AppMain *this)
{
  __int64 v2; // rdx
  BattleHudCommonNumbers::EOperateDescription::Type descriptionType; // er8

  if ( this->m_OnlineBattleGUIParams.bOnlineGUIEnabled && this->m_OnlineBattleGUIParams.bInitialize )
  {
    if ( this->SaveDataMain.DisplayOptionData.bCommentDraw
      && !this->m_BattleHud.isError(&this->m_BattleHud.ErrorChecker)
      && this->m_BattleHud.m_bInitialize
      && (this->m_BattleHud.m_onlineVisibleFlags & 4) != 0 )
    {
      BattleHudNico2Chat::draw(this->m_BattleHud.m_pNico2Chat);
    }
    BattleHud::drawOnline(&this->m_BattleHud);
    if ( this->m_OnlineBattleGUIParams.bOnlineBattleWatching && this->m_watchingParams.operationType )
    {
      descriptionType = this->m_watchingParams.descriptionType;
      if ( descriptionType )
      {
        if ( !this->SaveDataMain.DisplayOptionData.bCommentDraw )
          descriptionType = InQuad;
      }
      BattleHudRenderer::renderOperateDescription(this->m_BattleHud.m_pRenderer, v2, descriptionType, 1.0);
    }
  }
}

void __fastcall AppMain::OnlineInitializeGUIParams(AppMain *this)
{
  AppMain *v1; // rbp
  BattleHud *p_m_BattleHud; // rsi
  __int64 v3; // r15
  GameDataInfo *Instance; // rax
  __int64 v5; // rdx
  GameDataInfo *v6; // rbx
  __int64 m_ReplayNo; // rcx
  unsigned __int16 *p_titleId; // rax
  __int64 v9; // r14
  int v10; // ebx
  unsigned __int16 *v11; // rdi
  unsigned __int64 v12; // rbp
  int playerRank; // er12
  int v14; // er13
  int v15; // edi
  unsigned __int16 *v16; // rbx
  NetManager *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // r14
  _DWORD *v21; // rbx
  unsigned __int64 v22; // r10
  unsigned int v23; // er9
  int v24; // edx
  unsigned int v25; // ecx
  __int64 v26; // rdx
  unsigned int v27; // er8
  int v28; // edx
  unsigned int v29; // ecx
  __int64 v30; // rdx
  unsigned __int64 *p_tick; // rcx
  unsigned __int64 v32; // rax
  unsigned __int16 *v33; // [rsp+40h] [rbp-5D8h]
  NET_USER_DATA pInfo[12]; // [rsp+50h] [rbp-5C8h] BYREF

  v1 = this;
  if ( !this->m_OnlineBattleGUIParams.bInitialize )
  {
    *(_WORD *)&this->m_OnlineBattleGUIParams.bInitialize = 1;
    if ( anonymous_namespace_::isOnlineBattleMode() )
    {
      p_m_BattleHud = &v1->m_BattleHud;
      v1->m_OnlineBattleGUIParams.bOnlineGUIEnabled = 1;
      v1->m_OnlineBattleGUIParams.bPlayWatching = 0;
      v1->m_OnlineBattleGUIParams.battleCharacterPlayerID = PLAYER_ID_NONE;
      BattleHud::initializeOnlineParams(&v1->m_BattleHud);
      memset(v1->m_OnlineBattleGUIParams.s_TextChatLog, 0, sizeof(v1->m_OnlineBattleGUIParams.s_TextChatLog));
      v3 = 0i64;
      v1->m_OnlineBattleGUIParams.s_TextChatTick = 0i64;
      Instance = GameDataInfo::getInstance();
      v6 = Instance;
      if ( Instance->m_ReplayFlag )
      {
        m_ReplayNo = (int)Instance->m_ReplayNo;
        if ( v1->SaveDataReplay.m_Replay[m_ReplayNo].m_GameRule == 2 )
        {
          p_titleId = &v1->SaveDataReplay.m_Replay[m_ReplayNo].m_UserInfo[0][0].titleId;
          v9 = 128i64;
          v33 = p_titleId;
          do
          {
            v10 = 0;
            v11 = p_titleId;
            do
            {
              v12 = *(_QWORD *)(v11 - 5);
              if ( v12 )
              {
                playerRank = *((unsigned __int8 *)v11 - 1);
                v14 = *v11;
                if ( !p_m_BattleHud->isError(&p_m_BattleHud->ErrorChecker)
                  && p_m_BattleHud->m_bInitialize
                  && ((v9 - 128) & 0xFFFFFFFFFFFFFFF7ui64) == 0
                  && (unsigned int)v10 <= 2 )
                {
                  BattleHudGauge::setupMemberOnlineParams(
                    *(BattleHudGauge **)((char *)&p_m_BattleHud->BattleEventHandler::Listener::__vftable + v9),
                    v10,
                    v12,
                    v14,
                    playerRank,
                    0);
                }
              }
              ++v10;
              v11 += 12;
            }
            while ( v10 < 12 );
            v9 += 8i64;
            p_titleId = v33 + 36;
            v33 += 36;
          }
          while ( v9 < 144 );
          v1 = this;
        }
        else
        {
          v15 = 0;
          v16 = &v1->SaveDataReplay.m_Replay[m_ReplayNo].m_UserInfo[0][0].titleId;
          do
          {
            BattleHud::setupOnlineTeamMember(
              &v1->m_BattleHud,
              v5,
              (PLAYER_ID)v15++,
              *(_QWORD *)(v16 - 5),
              *v16,
              *((unsigned __int8 *)v16 - 1),
              0);
            v16 += 36;
          }
          while ( v15 < 2 );
        }
      }
      else
      {
        memset(pInfo, 0, sizeof(pInfo));
        NetManager::GetBattleMemberInfo(v17, pInfo);
        v18 = 12i64;
        v19 = v6->m_GameRule[v6->m_GameRuleIndex];
        v20 = v6->m_GameMode[v6->m_GameModeIndex];
        v21 = (_DWORD *)((char *)pInfo + 40);
        do
        {
          v22 = *((_QWORD *)v21 - 5);
          if ( v22 )
          {
            if ( v19 == 2 )
            {
              v23 = *(v21 - 8);
              if ( (v23 & 0x1800) != 0 )
              {
                if ( v20 == 6 )
                  v24 = *v21;
                else
                  v24 = *(v21 - 5);
                v25 = v24 ^ 0x7B48A35E ^ ((unsigned __int16)v24 ^ 0xA35E ^ (unsigned __int16)((v24 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)v24 ^ 0xA35E ^ (unsigned __int16)((v24 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
                v26 = (v25 ^ (v25 >> 7)) & 0x550055 ^ v25 ^ (((v25 ^ (v25 >> 7)) & 0x550055) << 7);
                BattleHud::setupOnlineTeamMember(
                  &v1->m_BattleHud,
                  v26,
                  (PLAYER_ID)((*(v21 - 6) >> 20) & 1),
                  ((v23 >> 11) & 3) - 1,
                  v22,
                  (*(v21 - 6) >> 21) & 0x1FF,
                  (*(v21 - 7) >> 21) & 0x3F,
                  v26);
              }
            }
            else
            {
              v27 = *(v21 - 6);
              if ( (v27 & 0xC0000) == 0 )
              {
                if ( v20 == 6 )
                  v28 = *v21;
                else
                  v28 = *(v21 - 5);
                v29 = v28 ^ 0x7B48A35E ^ ((unsigned __int16)v28 ^ 0xA35E ^ (unsigned __int16)((v28 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)v28 ^ 0xA35E ^ (unsigned __int16)((v28 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
                v30 = (v29 ^ (v29 >> 7)) & 0x550055 ^ v29 ^ (((v29 ^ (v29 >> 7)) & 0x550055) << 7);
                BattleHud::setupOnlineTeamMember(
                  &v1->m_BattleHud,
                  v30,
                  (PLAYER_ID)((v27 >> 20) & 1),
                  *((_QWORD *)v21 - 5),
                  (v27 >> 21) & 0x1FF,
                  (*(v21 - 7) >> 21) & 0x3F,
                  v30);
              }
            }
          }
          v21 = (_DWORD *)((char *)v21 + 118);
          --v18;
        }
        while ( v18 );
      }
      NetManager::RecvRoomChatMessage(&g_NetworkManager, v1->m_OnlineBattleGUIParams.s_TextChatLog);
      p_tick = &v1->m_OnlineBattleGUIParams.s_TextChatLog[0].tick;
      do
      {
        v32 = *p_tick;
        if ( !*p_tick )
          break;
        if ( v32 <= v1->m_OnlineBattleGUIParams.s_TextChatTick )
          break;
        ++v3;
        v1->m_OnlineBattleGUIParams.s_TextChatTick = v32;
        p_tick += 34;
      }
      while ( v3 < 8 );
    }
  }
}

void __fastcall AppMain::OnlineSetupGUIParams(AppMain *this)
{
  float v2; // xmm1_4
  float v3; // xmm0_4
  GameDataInfo **v4; // rax
  __int64 v5; // rdi
  GameDataInfo *v6; // rcx
  PLAYER_ID OnlineBattlePlayerByOnlineID; // edi
  OGLModel *PlayerModel; // rax
  int v9; // er8
  OGLModel *v10; // rsi
  int v11; // er8
  int BoneNoFromName; // eax
  PLAYER_ID battleCharacterPlayerID; // edx

  if ( this->m_OnlineBattleGUIParams.bOnlineGUIEnabled && this->m_OnlineBattleGUIParams.bInitialize )
  {
    v2 = 0.0;
    v3 = fminf(this->m_BattleHud.m_fadeAnimSESelector.m_number, 1.0);
    *(_QWORD *)&this->m_BattleHud.m_fadeAnimSESelector.m_max = 1065353216i64;
    if ( v3 >= 0.0 )
      v2 = v3;
    this->m_BattleHud.m_fadeAnimSESelector.m_number = v2;
    this->m_BattleHud.m_fadeAnimSESelector.m_power = -0.1;
    this->m_BattleHud.m_fadeAnimSESelector.m_bAnimation = 1;
    if ( GameDataInfo::getInstance()->m_ReplayFlag )
    {
      this->m_OnlineBattleGUIParams.bOnlineBattleWatching = 0;
    }
    else
    {
      v4 = (GameDataInfo **)NtCurrentTeb()->Reserved1[11];
      v5 = *(_QWORD *)&AppMain::pApp;
      v6 = *v4;
      if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > (signed int)(*v4)->randMT.mt[10] )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v6);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        }
      }
      if ( `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
        OnlineBattlePlayerByOnlineID = PLAYER_ID_NONE;
      else
        OnlineBattlePlayerByOnlineID = (unsigned int)BattleHud::findOnlineBattlePlayerByOnlineID(
                                                       (BattleHud *)(v5 + 2182608),
                                                       Fw::NetworkCommon::m_NpOnlineId.data);
      LOBYTE(v6) = OnlineBattlePlayerByOnlineID == PLAYER_ID_NONE;
      this->m_OnlineBattleGUIParams.bOnlineBattleWatching = (char)v6;
      if ( OnlineBattlePlayerByOnlineID == PLAYER_ID_NONE )
      {
        AppMain::BattleOnlineWatchingInitialize(this);
        if ( !this->m_OnlineBattleGUIParams.bPlayWatching )
          this->m_BattleHud.m_descriptVisibleCount = 168.0;
        this->m_OnlineBattleGUIParams.bPlayWatching = 1;
      }
      if ( !this->m_OnlineBattleGUIParams.bOnlineBattleWatching )
      {
        PlayerModel = AppMain::getPlayerModel((AppMain *)v6, OnlineBattlePlayerByOnlineID);
        v10 = PlayerModel;
        if ( PlayerModel )
        {
          this->m_OnlineBattleGUIParams.battleCharacterPlayerID = OnlineBattlePlayerByOnlineID;
          this->m_OnlineBattleGUIParams.boneIndexRoot = OGLModel::getBoneNoFromName(PlayerModel, "C_Hips", v9);
          BoneNoFromName = OGLModel::getBoneNoFromName(v10, "C_FaceRoot", v11);
          battleCharacterPlayerID = this->m_OnlineBattleGUIParams.battleCharacterPlayerID;
          this->m_OnlineBattleGUIParams.boneIndexHead = BoneNoFromName;
          *(_QWORD *)&this->m_OnlineBattleGUIParams.beforePosX = 0i64;
          BattleHud::setOnlineUserCharacterSymbol(&this->m_BattleHud, battleCharacterPlayerID);
        }
      }
    }
  }
  else if ( this->m_OnlineBattleGUIParams.bOnlineBattleWatching )
  {
    AppMain::BattleOnlineWatchingInitialize(this);
  }
}

void __fastcall AppMain::OnlineTrainingSendSetting(AppMain *this, TrainingSetting *training)
{
  int time; // eax
  SEND_MESSAGE *p_s_Msg; // r10
  int v5; // er8
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // er8
  double v11; // xmm0_8
  unsigned __int64 v12; // rcx

  time = this->s_Msg.msgBattleCommand.time;
  p_s_Msg = &this->s_Msg;
  this->s_Msg.msgType = 21;
  this->s_Msg.msgBattleCommand.time ^= (training->m_iRestart ^ time) & 3;
  v5 = this->s_Msg.msgBattleCommand.time ^ ((unsigned __int8)this->s_Msg.msgBattleCommand.time ^ (unsigned __int8)(4 * training->m_iPowerGauge[0])) & 0x1C;
  this->s_Msg.msgBattleCommand.time = v5;
  v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(32 * training->m_iPowerGauge[1])) & 0xE0;
  this->s_Msg.msgBattleCommand.time = v6;
  v7 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)((unsigned __int16)training->m_iMAXModeGauge[0] << 8)) & 0x300;
  this->s_Msg.msgBattleCommand.time = v7;
  v8 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)((unsigned __int16)training->m_iMAXModeGauge[1] << 10)) & 0xC00;
  this->s_Msg.msgBattleCommand.time = v8;
  v9 = v8 ^ (v8 ^ (training->m_iGuardGauge[0] << 12)) & 0x7F000;
  this->s_Msg.msgBattleCommand.time = v9;
  this->s_Msg.msgBattleCommand.time = v9 ^ (v9 ^ (training->m_iGuardGauge[1] << 19)) & 0x3F80000;
  this->s_Msg.msgVoiceData.bufSize ^= (this->s_Msg.msgVoiceData.bufSize ^ training->m_iStun[0]) & 0x7F;
  this->s_Msg.msgVoiceData.bufSize ^= ((unsigned __int16)*((_DWORD *)&this->s_Msg.msgSeatRequest.waiting + 1) ^ (unsigned __int16)((unsigned __int16)training->m_iStun[1] << 7)) & 0x3F80;
  NetManager::SendMessageW(&g_NetworkManager, p_s_Msg, 0i64, 1, 0);
  NetManager::ChangeState(&g_NetworkManager, NET_STATE_BATTLELOADINGEND, v10);
  BTLNT_Start();
  BTLNT_StartBattle();
  v11 = AgClock::getSystemTime() * 1000000.0;
  v12 = 0i64;
  if ( v11 >= 9.223372036854776e18 )
  {
    v11 = v11 - 9.223372036854776e18;
    if ( v11 < 9.223372036854776e18 )
      v12 = 0x8000000000000000ui64;
  }
  s_OnlineTrainingStartTime = v12 + (unsigned int)(int)v11;
}

void __fastcall AppMain::OnlineUpdateGUI(AppMain *this)
{
  __int64 v2; // r15
  Scene_RoomMember *pScene; // r14
  RoomMembers *m_pRoomMembers; // r14
  int v5; // esi
  unsigned __int64 *p_tick; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  RoomMembers::Member *MemberByOnlineID; // rax
  OGLModel *PlayerModel; // rax
  OGLModel *v11; // rdx
  OGLFigure *m_pFigure; // rcx
  __int64 boneIndexRoot; // rax
  int m_uiBoneCount; // er8
  __int64 p_mRot; // rax
  int v16; // xmm1_4
  float v17; // xmm0_4
  __int64 boneIndexHead; // rax
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __m128i v27; // xmm0
  float x; // xmm4_4
  float beforePosY; // xmm3_4
  float v30; // xmm2_4
  OGLVec3 outVec; // [rsp+40h] [rbp-C8h] BYREF
  OGLVec3 pos; // [rsp+50h] [rbp-B8h] BYREF
  OGLMatrix matProj; // [rsp+60h] [rbp-A8h] BYREF
  OGLMatrix matView; // [rsp+A0h] [rbp-68h] BYREF

  if ( this->m_OnlineBattleGUIParams.bOnlineGUIEnabled && this->m_OnlineBattleGUIParams.bInitialize )
  {
    v2 = 0i64;
    if ( this->SaveDataMain.DisplayOptionData.bCommentDraw )
    {
      pScene = this->m_onlineRoomMemberParams.pScene;
      if ( pScene )
      {
        m_pRoomMembers = pScene->m_pRoomMembers;
        if ( m_pRoomMembers )
        {
          NetManager::RecvRoomChatMessage(&g_NetworkManager, this->m_OnlineBattleGUIParams.s_TextChatLog);
          v5 = 0;
          p_tick = &this->m_OnlineBattleGUIParams.s_TextChatLog[0].tick;
          do
          {
            v7 = *p_tick;
            if ( !*p_tick || v7 <= this->m_OnlineBattleGUIParams.s_TextChatTick )
              break;
            this->m_OnlineBattleGUIParams.s_TextChatTick = v7;
            v8 = *(p_tick - 1);
            MemberByOnlineID = RoomMembers::findMemberByOnlineID(m_pRoomMembers, v8);
            if ( MemberByOnlineID )
              BattleHud::entryOnlineChatMessage(
                &this->m_BattleHud,
                v8,
                this->m_OnlineBattleGUIParams.s_TextChatLog[v5].message,
                MemberByOnlineID->color);
            ++v5;
            p_tick += 34;
          }
          while ( v5 < 8 );
        }
      }
    }
    if ( this->m_OnlineBattleGUIParams.bOnlineBattleWatching )
      AppMain::BattleOnlineWatchingUpdate(this);
    if ( this->m_BattleHud.m_userCharacterSymbol.bEnabled )
    {
      PlayerModel = AppMain::getPlayerModel(this, this->m_OnlineBattleGUIParams.battleCharacterPlayerID);
      v11 = PlayerModel;
      if ( PlayerModel )
      {
        m_pFigure = PlayerModel->m_pFigure;
        boneIndexRoot = this->m_OnlineBattleGUIParams.boneIndexRoot;
        m_uiBoneCount = m_pFigure->m_uiBoneCount;
        if ( (int)boneIndexRoot < m_uiBoneCount )
          p_mRot = (__int64)&v11->m_pBoneInfo[boneIndexRoot].mRot;
        else
          p_mRot = 0i64;
        v16 = *(_DWORD *)(p_mRot + 56);
        v17 = v11->m_mWorld.m[12] + *(float *)(p_mRot + 48);
        boneIndexHead = this->m_OnlineBattleGUIParams.boneIndexHead;
        LODWORD(pos.z) = v16 ^ _xmm;
        pos.x = v17;
        if ( (int)boneIndexHead < m_uiBoneCount )
          v2 = (__int64)&v11->m_pBoneInfo[boneIndexHead].mRot;
        pos.y = *(float *)(v2 + 52);
        BattleSystem::BattleController::GetActionSystem();
        BattleSystem::BattleController::GetActionSystem();
        v20 = *(_OWORD *)(v19 + 238344);
        v19 += 237776i64;
        *(_QWORD *)&outVec.x = 0i64;
        *(_OWORD *)matView.m = v20;
        v21 = *(_OWORD *)(v19 + 600);
        *(_OWORD *)&matView.m[4] = *(_OWORD *)(v19 + 584);
        v22 = *(_OWORD *)(v19 + 616);
        *(_OWORD *)&matView.m[8] = v21;
        v23 = *(_OWORD *)(v19 + 632);
        *(_OWORD *)&matView.m[12] = v22;
        v24 = *(_OWORD *)(v19 + 648);
        *(_OWORD *)matProj.m = v23;
        v25 = *(_OWORD *)(v19 + 664);
        *(_OWORD *)&matProj.m[4] = v24;
        v26 = *(_OWORD *)(v19 + 680);
        *(_OWORD *)&matProj.m[8] = v25;
        v27 = _mm_cvtsi32_si128(this->m_iScreenH);
        *(_OWORD *)&matProj.m[12] = v26;
        BSUtil::wordToScreen(
          &outVec,
          &pos,
          &matView,
          &matProj,
          0.0,
          0.0,
          (float)this->m_iScreenW,
          _mm_cvtepi32_ps(v27).m128_f32[0]);
        x = outVec.x;
        beforePosY = outVec.y - 140.0;
        *(float *)v27.m128i_i32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(outVec.x
                                                                            - this->m_OnlineBattleGUIParams.beforePosX)) & _xmm);
        if ( *(float *)v27.m128i_i32 > 1.0 )
          this->m_OnlineBattleGUIParams.beforePosX = outVec.x;
        else
          x = this->m_OnlineBattleGUIParams.beforePosX;
        v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(beforePosY - this->m_OnlineBattleGUIParams.beforePosY)) & _xmm);
        if ( v30 > 1.0 )
          this->m_OnlineBattleGUIParams.beforePosY = beforePosY;
        else
          beforePosY = this->m_OnlineBattleGUIParams.beforePosY;
        if ( this->m_BattleHud.m_userCharacterSymbol.bEnabled )
        {
          this->m_BattleHud.m_userCharacterSymbol.x = (int)x;
          this->m_BattleHud.m_userCharacterSymbol.y = (int)beforePosY;
        }
      }
    }
  }
}

OGLModel *__fastcall AppMain::getPlayerModel(AppMain *this, PLAYER_ID playerID)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx

  v2 = 0i64;
  v3 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64);
  if ( playerID )
    v4 = *(_QWORD *)(v3 + 56);
  else
    v4 = *(_QWORD *)(v3 + 40);
  v5 = *(_QWORD *)(v4 + 16);
  if ( !v5 || *(_BYTE *)(v5 + 96) )
  {
    v6 = 0i64;
  }
  else
  {
    if ( (*(_QWORD *)(v5 + 88) & 1) == 0 )
      extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v5 + 88), (extension::AsyncStatus::Step)playerID);
    v6 = *(_QWORD *)(v5 + 72);
  }
  if ( (int)((__int64)(*(_QWORD *)(v6 + 208) - *(_QWORD *)(v6 + 200)) >> 3) > 0 )
    return **(OGLModel ***)(v6 + 200);
  return (OGLModel *)v2;
}

void __fastcall AppMain::setupOnlineRoomMembers(AppMain *this)
{
  Scene_RoomMember *pScene; // rcx
  Scene_RoomMember *v3; // rax

  pScene = this->m_onlineRoomMemberParams.pScene;
  if ( pScene )
  {
    ((void (__fastcall *)(Scene_RoomMember *, __int64))pScene->~ErrorChecker)(pScene, 1i64);
    this->m_onlineRoomMemberParams.pScene = 0i64;
  }
  v3 = (Scene_RoomMember *)operator new(0x20ui64);
  v3->__vftable = (Scene_RoomMember_vtbl *)&Scene_RoomMember::`vftable';
  v3->m_bError = 0;
  v3->m_pRoomMembers = 0i64;
  v3->m_bBattleMode = 0;
  this->m_onlineRoomMemberParams.pScene = v3;
  Scene_RoomMember::setup(v3);
}

void __fastcall AppMain::switchingOnlineRoomMembers(AppMain *this, __int64 bVisible)
{
  Scene_RoomMember *pScene; // rbx
  RoomMembers *m_pRoomMembers; // rax

  pScene = this->m_onlineRoomMemberParams.pScene;
  if ( !((unsigned __int64 (__fastcall *)(Scene_RoomMember *, __int64))pScene->isError)(pScene, bVisible) )
  {
    m_pRoomMembers = pScene->m_pRoomMembers;
    if ( m_pRoomMembers )
    {
      m_pRoomMembers->m_alpha.m_power = -0.1;
      m_pRoomMembers->m_alpha.m_bAnimation = 1;
    }
  }
}

