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
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/network/netbattle.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/commonpc.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A06FB
void AppMain::SetBattleInfoFromRoom(); // 0x1401A6F10//decompilation failure at 1408A06FB!
void __fastcall AppMain::SetBattleInfoFromRoom(AppMain *this)
{
  GAME_RULE gameRule; // er13
  unsigned int v2; // edi
  unsigned int v3; // ebx
  int v4; // er9
  unsigned __int64 v5; // rcx
  NET_USER_DATA *p_pMemberList; // rax
  __int64 v7; // rcx
  char v8; // cl
  int v9; // edx
  int v10; // edx
  int v11; // er9
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int *v14; // r12
  unsigned int v15; // er13
  unsigned int v16; // er15
  _BOOL8 v17; // rdi
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rcx
  bool m_ReplaySaveFlag; // al
  unsigned int v22; // er15
  unsigned int v23; // ebx
  unsigned int v24; // er9
  unsigned int v25; // esi
  unsigned int v26; // edi
  unsigned int v27; // er14
  NET_USER_DATA *v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // esi
  unsigned int v31; // ebx
  unsigned int v32; // er9
  unsigned int v33; // edi
  NET_USER_DATA *v34; // rax
  __int64 v35; // rcx
  unsigned int randseed; // esi
  unsigned __int64 steamId; // r15
  __int64 v38; // rbx
  unsigned __int64 v39; // r12
  unsigned int v40; // edi
  char **Name; // r14
  char **v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  char v45; // al
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  char v48; // al
  __int128 v49; // xmm0
  __int64 v50; // xmm1_8
  GameDataInfo *v51; // rcx
  unsigned __int8 v52; // [rsp+30h] [rbp-D0h]
  int v53; // [rsp+34h] [rbp-CCh]
  int v54; // [rsp+38h] [rbp-C8h]
  GAME_RULE v55; // [rsp+3Ch] [rbp-C4h]
  __int64 result; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v57; // [rsp+48h] [rbp-B8h]
  NET_USER_DATA pInfo[12]; // [rsp+50h] [rbp-B0h] BYREF
  NET_USER_DATA pMemberList; // [rsp+5E0h] [rbp+4E0h] BYREF

  memset(pInfo, 0, sizeof(pInfo));
  NetManager::GetBattleStartTableRoomMemberInfo(&g_NetworkManager, pInfo);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v51);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  gameRule = g_NetworkManager.gamedata.gameRule;
  v55 = g_NetworkManager.gamedata.gameRule;
  GameDataInfo::Init(&`GameDataInfo::getInstance'::`2'::instance);
  `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1] = USER_ID_2P;
  `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0] = USER_ID_1P;
  `GameDataInfo::getInstance'::`2'::instance.m_ReplaySaveFlag = 0;
  v52 = 0;
  switch ( gameRule )
  {
    case GAME_RULE_SINGLE:
      v30 = *((_DWORD *)pInfo + 2);
      v31 = *((_DWORD *)pInfo + 4);
      v32 = *((_DWORD *)pInfo + 2);
      v33 = *((_DWORD *)&pInfo[1] + 2);
      `GameDataInfo::getInstance'::`2'::instance.m_GameRule[`GameDataInfo::getInstance'::`2'::instance.m_GameRuleIndex] = GAME_RULE_SINGLE;
      `GameDataInfo::getInstance'::`2'::instance.m_StageID = (v31 >> 10) & 0x1F;
      `GameDataInfo::getInstance'::`2'::instance.m_StageRandom = 0;
      `GameDataInfo::getInstance'::`2'::instance.m_EditRandom[0][0] = 0;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0] = v30 & 0x3F;
      *(_WORD *)`GameDataInfo::getInstance'::`2'::instance.m_TeamRandom = 0;
      `GameDataInfo::getInstance'::`2'::instance.m_EditRandom[1][0] = 0;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[1][0] = v33 & 0x3F;
      GameDataInfo::SetCharacterColor(
        &`GameDataInfo::getInstance'::`2'::instance,
        PLAYER_ID_1P,
        0,
        (CHARACTER_COLOR)(((v32 >> 6) & 7) + 1));
      GameDataInfo::SetCharacterColor(
        &`GameDataInfo::getInstance'::`2'::instance,
        PLAYER_ID_2P,
        0,
        (CHARACTER_COLOR)(((v33 >> 6) & 7) + 1));
      `GameDataInfo::getInstance'::`2'::instance.m_NetworkTile[1][0] = (*((_DWORD *)&pInfo[1] + 4) >> 21) & 0x1FF;
      v34 = pInfo;
      `GameDataInfo::getInstance'::`2'::instance.m_NetworkTile[0][0] = (v31 >> 21) & 0x1FF;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][0] = (v30 >> 9) & 3;
      v35 = 0i64;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[1][0] = (v33 >> 9) & 3;
      while ( v34->steamId != Fw::NetworkCommon::m_NpOnlineId.data )
      {
        ++v35;
        ++v34;
        if ( v35 >= 2 )
          goto LABEL_40;
      }
      goto LABEL_39;
    case GAME_RULE_TEAM:
      v22 = *((_DWORD *)pInfo + 2);
      v23 = *((_DWORD *)pInfo + 4);
      v24 = *((_DWORD *)pInfo + 2);
      v25 = *((_DWORD *)pInfo + 3);
      v26 = *((_DWORD *)&pInfo[1] + 3);
      `GameDataInfo::getInstance'::`2'::instance.m_GameRule[`GameDataInfo::getInstance'::`2'::instance.m_GameRuleIndex] = GAME_RULE_TEAM;
      v27 = *((_DWORD *)&pInfo[1] + 2);
      `GameDataInfo::getInstance'::`2'::instance.m_StageID = (v23 >> 10) & 0x1F;
      `GameDataInfo::getInstance'::`2'::instance.m_StageRandom = 0;
      *(_DWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_EditRandom[0][0] = 0;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0] = v22 & 0x3F;
      *(_WORD *)&`GameDataInfo::getInstance'::`2'::instance.m_EditRandom[1][2] = 0;
      `GameDataInfo::getInstance'::`2'::instance.m_EditRandom[1][1] = 0;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][1] = (v22 >> 14) & 0x3F;
      `GameDataInfo::getInstance'::`2'::instance.m_TeamRandom[1] = 0;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][2] = v25 & 0x3F;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[1][0] = *((_BYTE *)&pInfo[1] + 8) & 0x3F;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[1][1] = (*((_DWORD *)&pInfo[1] + 2) >> 14) & 0x3F;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[1][2] = v26 & 0x3F;
      GameDataInfo::SetCharacterColor(
        &`GameDataInfo::getInstance'::`2'::instance,
        PLAYER_ID_1P,
        0,
        (CHARACTER_COLOR)(((v24 >> 6) & 7) + 1));
      GameDataInfo::SetCharacterColor(
        &`GameDataInfo::getInstance'::`2'::instance,
        PLAYER_ID_1P,
        1,
        (CHARACTER_COLOR)(((v22 >> 20) & 7) + 1));
      GameDataInfo::SetCharacterColor(
        &`GameDataInfo::getInstance'::`2'::instance,
        PLAYER_ID_1P,
        2,
        (CHARACTER_COLOR)(((v25 >> 6) & 7) + 1));
      GameDataInfo::SetCharacterColor(
        &`GameDataInfo::getInstance'::`2'::instance,
        PLAYER_ID_2P,
        0,
        (CHARACTER_COLOR)(((v27 >> 6) & 7) + 1));
      GameDataInfo::SetCharacterColor(
        &`GameDataInfo::getInstance'::`2'::instance,
        PLAYER_ID_2P,
        1,
        (CHARACTER_COLOR)(((v27 >> 20) & 7) + 1));
      GameDataInfo::SetCharacterColor(
        &`GameDataInfo::getInstance'::`2'::instance,
        PLAYER_ID_2P,
        2,
        (CHARACTER_COLOR)(((v26 >> 6) & 7) + 1));
      `GameDataInfo::getInstance'::`2'::instance.m_Order[0][0] = ((v22 >> 11) & 3) - 1;
      `GameDataInfo::getInstance'::`2'::instance.m_NetworkTile[0][0] = (v23 >> 21) & 0x1FF;
      `GameDataInfo::getInstance'::`2'::instance.m_Order[0][1] = ((v22 >> 25) & 3) - 1;
      `GameDataInfo::getInstance'::`2'::instance.m_Order[0][2] = ((v25 >> 11) & 3) - 1;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][2] = (v25 >> 9) & 3;
      `GameDataInfo::getInstance'::`2'::instance.m_Order[1][0] = ((v27 >> 11) & 3) - 1;
      `GameDataInfo::getInstance'::`2'::instance.m_Order[1][1] = ((v27 >> 25) & 3) - 1;
      `GameDataInfo::getInstance'::`2'::instance.m_Order[1][2] = ((v26 >> 11) & 3) - 1;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[1][2] = (v26 >> 9) & 3;
      `GameDataInfo::getInstance'::`2'::instance.m_NetworkTile[1][0] = (*((_DWORD *)&pInfo[1] + 4) >> 21) & 0x1FF;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][0] = (v22 >> 9) & 3;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][1] = (v22 >> 23) & 3;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[1][0] = (v27 >> 9) & 3;
      v28 = pInfo;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[1][1] = (v27 >> 23) & 3;
      v29 = 0i64;
      while ( v28->steamId != Fw::NetworkCommon::m_NpOnlineId.data )
      {
        ++v29;
        ++v28;
        if ( v29 >= 2 )
          goto LABEL_40;
      }
      `GameDataInfo::getInstance'::`2'::instance.m_ReplaySaveFlag = 1;
      break;
    case GAME_RULE_PARTY:
      v8 = 1;
      `GameDataInfo::getInstance'::`2'::instance.m_GameRule[`GameDataInfo::getInstance'::`2'::instance.m_GameRuleIndex] = GAME_RULE_PARTY;
      if ( (*((_BYTE *)pInfo + 16) & 0x7Fu) > 0xC )
        v8 = 12 * (((*((_BYTE *)pInfo + 16) & 0x7F) - 1) / 12) + 1;
      v9 = 0;
      while ( v8 != (*((_DWORD *)&pInfo[v9] + 4) & 0x7F) )
      {
        if ( ++v9 >= 6 )
          goto LABEL_17;
      }
      `GameDataInfo::getInstance'::`2'::instance.m_StageRandom = 0;
      v52 = v9;
      `GameDataInfo::getInstance'::`2'::instance.m_StageID = (*((_DWORD *)&pInfo[v9] + 4) >> 10) & 0x1F;
LABEL_17:
      v10 = 0;
      v54 = 0;
      do
      {
        v11 = 1;
        v53 = 1;
        v12 = 1i64;
        result = 1i64;
        do
        {
          v13 = 12i64;
          v14 = (unsigned int *)((char *)pInfo + 16);
          v57 = 12i64;
          do
          {
            if ( *((_QWORD *)v14 - 2) )
            {
              v15 = *v14;
              if ( ((*v14 >> 20) & 1) == v10 )
              {
                v16 = *(v14 - 2);
                if ( ((v16 >> 11) & 3) == v11 )
                {
                  v17 = v10 != 0;
                  v18 = 3 * v17 + v12;
                  `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[v18 + 1] = *(v14 - 2) & 0x3F;
                  *((_BYTE *)&`GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[1][2] + 2 * v17 + v17 + v12 + 3) = 0;
                  `GameDataInfo::getInstance'::`2'::instance.m_TeamRandom[v17] = 0;
                  v19 = time64(0i64);
                  v12 = result;
                  v11 = v53;
                  *(_QWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[1][4 * v17
                                                                                           + 2
                                                                                           + 2 * v17
                                                                                           + 2 * result] = (unsigned int)(int)(double)v19;
                  v20 = 3 * v17 + v12;
                  v10 = v54;
                  *(_DWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_EditRandom[1][4 * v18 + 1] = ((v16 >> 6) & 7) + 1;
                  `GameDataInfo::getInstance'::`2'::instance.m_CharacterColorRand[1][v20 + 2] = ((v16 >> 11) & 3) - 1;
                  `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[1][v20 + 2] = (v15 >> 21) & 0x1FF;
                  `GameDataInfo::getInstance'::`2'::instance.m_Order[1][v20 + 2] = (v16 >> 9) & 3;
                  m_ReplaySaveFlag = `GameDataInfo::getInstance'::`2'::instance.m_ReplaySaveFlag;
                  v13 = v57;
                  if ( *((_QWORD *)v14 - 2) == Fw::NetworkCommon::m_NpOnlineId.data )
                    m_ReplaySaveFlag = 1;
                  `GameDataInfo::getInstance'::`2'::instance.m_ReplaySaveFlag = m_ReplaySaveFlag;
                }
              }
            }
            v14 = (unsigned int *)((char *)v14 + 118);
            v57 = --v13;
          }
          while ( v13 );
          ++v11;
          ++v12;
          v53 = v11;
          result = v12;
        }
        while ( v12 <= 3 );
        v54 = ++v10;
      }
      while ( v10 < 2 );
      break;
    case GAME_RULE_TRAINING:
      v2 = *((_DWORD *)pInfo + 2);
      v3 = *((_DWORD *)&pInfo[1] + 2);
      v4 = *((_DWORD *)pInfo + 2) >> 6;
      `GameDataInfo::getInstance'::`2'::instance.m_GameRule[`GameDataInfo::getInstance'::`2'::instance.m_GameRuleIndex] = GAME_RULE_SINGLE;
      *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuard = 0i64;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0] = v2 & 0x3F;
      `GameDataInfo::getInstance'::`2'::instance.m_StageID = STAGE_ID_TRA;
      `GameDataInfo::getInstance'::`2'::instance.m_StageRandom = 0;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[1][0] = v3 & 0x3F;
      `GameDataInfo::getInstance'::`2'::instance.m_TrainingSettingUpdate = 1;
      `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart = CENTER;
      `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAction = PLAYER;
      *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iKeyData = 0i64;
      *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge = _mm_load_si128((const __m128i *)&_xmm);
      `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[0] = 100;
      `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[1] = 100;
      *(_QWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRecordMode = 0i64;
      `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRecordSlot = SLOT_1;
      `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][1] = 1;
      *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][2] = 0ui64;
      `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][1] = 1;
      *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2] = 0ui64;
      `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn = 0;
      `GameDataInfo::getInstance'::`2'::instance.m_EditRandom[0][0] = 0;
      *(_WORD *)`GameDataInfo::getInstance'::`2'::instance.m_TeamRandom = 0;
      `GameDataInfo::getInstance'::`2'::instance.m_EditRandom[1][0] = 0;
      GameDataInfo::SetCharacterColor(
        &`GameDataInfo::getInstance'::`2'::instance,
        PLAYER_ID_1P,
        0,
        (CHARACTER_COLOR)((v4 & 7) + 1));
      GameDataInfo::SetCharacterColor(
        &`GameDataInfo::getInstance'::`2'::instance,
        PLAYER_ID_2P,
        0,
        (CHARACTER_COLOR)(((v3 >> 6) & 7) + 1));
      `GameDataInfo::getInstance'::`2'::instance.m_NetworkTile[0][0] = (*((_DWORD *)pInfo + 4) >> 21) & 0x1FF;
      `GameDataInfo::getInstance'::`2'::instance.m_NetworkTile[1][0] = (*((_DWORD *)&pInfo[1] + 4) >> 21) & 0x1FF;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][0] = (v2 >> 9) & 3;
      `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[1][0] = (v3 >> 9) & 3;
      time64(&result);
      NetManager::GetBattleStartTableRoomMemberInfo(&g_NetworkManager, &pMemberList);
      AddOpponentList2(v5, &pMemberList);
      p_pMemberList = &pMemberList;
      v7 = 0i64;
      while ( p_pMemberList->steamId != Fw::NetworkCommon::m_NpOnlineId.data )
      {
        ++v7;
        ++p_pMemberList;
        if ( v7 >= 2 )
          goto LABEL_40;
      }
LABEL_39:
      `GameDataInfo::getInstance'::`2'::instance.m_ReplaySaveFlag = 1;
      break;
  }
LABEL_40:
  randseed = g_NetworkManager.gamedata.randseed;
  steamId = pInfo[1].steamId;
  v38 = 0i64;
  v39 = pInfo[0].steamId;
  do
  {
    v40 = 0;
    Name = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)v39);
    v42 = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)steamId);
    switch ( randseed )
    {
      case 0u:
        v40 = *((char *)Name + v38);
        break;
      case 1u:
        v40 = *((char *)Name + v38 + 1);
        break;
      case 2u:
        v40 = *((char *)Name + v38 + 2);
        break;
      case 3u:
        v40 = *((char *)Name + v38 + 3);
        break;
      case 4u:
        v40 = *((char *)v42 + v38);
        break;
      case 5u:
        v40 = *((char *)v42 + v38 + 1);
        break;
      case 6u:
        v40 = *((char *)v42 + v38 + 2);
        break;
      case 7u:
        v40 = *((char *)v42 + v38 + 3);
        break;
      default:
        break;
    }
    `GameDataInfo::getInstance'::`2'::instance.m_RandSeed[v38++] = v40;
  }
  while ( v38 < 6 );
  if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_RANK )
  {
    `GameDataInfo::getInstance'::`2'::instance.m_TimeSetting = BATTLE_ROUND_TIMER_TYPE_60;
  }
  else if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_FREE )
  {
    `GameDataInfo::getInstance'::`2'::instance.m_TimeSetting = g_NetworkManager.gamedata.roundTimerType;
    if ( v55 == GAME_RULE_SINGLE )
    {
      switch ( g_NetworkManager.gamedata.roundType )
      {
        case NETWORK_ROUND_SELECT_1:
          `GameDataInfo::getInstance'::`2'::instance.m_WinRoundCount = WIN_ROUND_COUNT_1;
          break;
        case NETWORK_ROUND_SELECT_3:
          `GameDataInfo::getInstance'::`2'::instance.m_WinRoundCount = WIN_ROUND_COUNT_2;
          break;
        case NETWORK_ROUND_SELECT_5:
          `GameDataInfo::getInstance'::`2'::instance.m_WinRoundCount = WIN_ROUND_COUNT_3;
          break;
      }
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_ReplayNo = -1;
  v44 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v43);
  v45 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v44 + 16) + 336i64))(*(_QWORD *)(v44 + 16));
  if ( (v45 & 0x10) != 0 || (v45 & 2) != 0 )
  {
    strcpy(`GameDataInfo::getInstance'::`2'::instance.m_StageTelop, "THE KING OF FIGHTERS");
    *(_DWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_StageTelop[56] = *(_DWORD *)"TERS XIV";
    v49 = *(_OWORD *)"se";
    v48 = `anonymous namespace'::MySaveDataTraits<SaveRecord_Replay>::titleText[20];
    `GameDataInfo::getInstance'::`2'::instance.m_StageTelop[21] = 0;
    *(_WORD *)&`GameDataInfo::getInstance'::`2'::instance.m_StageTelop[22] = 0;
    *(_QWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_StageTelop[24] = *(_QWORD *)"C";
    v50 = *(_QWORD *)" OF FIGHTERS XIV";
  }
  else
  {
    v46 = *(_OWORD *)pInfo[v52].stageTelop;
    v47 = *(_OWORD *)&pInfo[v52].stageTelop[16];
    *(_DWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_StageTelop[56] = *(_DWORD *)&pInfo[v52].stageTelop[56];
    v48 = pInfo[v52].stageTelop[60];
    *(_OWORD *)`GameDataInfo::getInstance'::`2'::instance.m_StageTelop = v46;
    v49 = *(_OWORD *)&pInfo[v52].stageTelop[32];
    *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_StageTelop[16] = v47;
    v50 = *(_QWORD *)&pInfo[v52].stageTelop[48];
  }
  `GameDataInfo::getInstance'::`2'::instance.m_StageTelop[60] = v48;
  *(_QWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_StageTelop[48] = v50;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_StageTelop[32] = v49;
}

