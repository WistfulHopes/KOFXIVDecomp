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
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playedwith.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/onlinesavedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/onlinesample/st_onlineresultrank.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/debug/gameinfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.cpp"

struct BattleSystem::RivalDemoBGMTable
{
	CHARACTER_NO charaID1; // 0x0
	CHARACTER_NO charaID2; // 0x4
	SoundId demoBGM; // 0x8
	SoundId battleBGM; // 0xC
	bool bExtraData; // 0x10
	bool IsExistRivalDemo(const CHARACTER_NO, const CHARACTER_NO);
	bool IsExistExtraDemo(const CHARACTER_NO);
};
struct BattleSystem::ResultCharaPosition
{
	OGLVec3 startPos; // 0x0
	OGLVec3 endPos; // 0xC
	long iStartFrame; // 0x18
	long iMoveFrame; // 0x1C
	OGLVec3 poseAngle; // 0x20
	ResultCharaPosition(BattleSystem::ResultCharaPosition &);
	ResultCharaPosition(const BattleSystem::ResultCharaPosition &);
	ResultCharaPosition();
};
void BattleSystem::BattleController::DefaultBattleInit(); // 0x14022E420
void BattleSystem::BattleController::AllInit(BattleSystem::BATTLE_MODE mode, long maxWinCount, bool partyBattle); // 0x14022E4A0
void BattleSystem::BattleController::BattleResultInit(); // 0x14022E6B0
void BattleSystem::BattleController::SetBattleBGMFadeStop(); // 0x14022E750
void BattleSystem::BattleController::CheckBattleBGMStart(); // 0x14022E8A0
void BattleSystem::BattleController::SetRivalDemoLoopSound(); // 0x14022EB00
void BattleSystem::BattleController::BattleStart(); // 0x14022EDA0
void BattleSystem::BattleController::SetRivalDemoActionPhase(); // 0x14022EDF0
bool BattleSystem::BattleController::IsRivalDemoActionEnd(); // 0x14022EED0
void BattleSystem::BattleController::SetRoundCallPhaseFromRivalDemo(); // 0x14022EF50
void BattleSystem::BattleController::SetRoundEndPausePhase(); // 0x14022F040
bool BattleSystem::BattleController::IsGotoRoundEndPausePhase(); // 0x14022F0D0
void BattleSystem::BattleController::BattleInit(bool bKeepBGM); // 0x14022F1A0
void BattleSystem::BattleController::RoundInit(GAME_MODE gameMode, unsigned long randomSeed); // 0x14022F290
void BattleSystem::BattleController::Update(); // 0x14022FCC0
class BattleSystem::BattleController::Update::__l15::<lambda_60860bae646c1a25c68b7e5eea623519>
{
public:
	void operator()(Actor &);
	<lambda_60860bae646c1a25c68b7e5eea623519>(BattleSystem::BattleController::Update::__l15::<lambda_60860bae646c1a25c68b7e5eea623519> &);
	<lambda_60860bae646c1a25c68b7e5eea623519>();
	<lambda_60860bae646c1a25c68b7e5eea623519>(bool &);
private:
	bool & bEndSetup; // 0x0
public:
	BattleSystem::BattleController::Update::__l15::<lambda_60860bae646c1a25c68b7e5eea623519> & operator=(const BattleSystem::BattleController::Update::__l15::<lambda_60860bae646c1a25c68b7e5eea623519> &);
};
class BattleSystem::BattleController::Update::__l301::<lambda_ad3ff183b2c7791a4bd3e61110463e86>
{
public:
	void operator()(Actor &);
	<lambda_ad3ff183b2c7791a4bd3e61110463e86>(BattleSystem::BattleController::Update::__l301::<lambda_ad3ff183b2c7791a4bd3e61110463e86> &);
	<lambda_ad3ff183b2c7791a4bd3e61110463e86>();
	<lambda_ad3ff183b2c7791a4bd3e61110463e86>(bool &);
private:
	bool & bEndSetup; // 0x0
public:
	BattleSystem::BattleController::Update::__l301::<lambda_ad3ff183b2c7791a4bd3e61110463e86> & operator=(const BattleSystem::BattleController::Update::__l301::<lambda_ad3ff183b2c7791a4bd3e61110463e86> &);
};
const BattleSystem::RivalDemoBGMTable BattleSystem::rivalDemoBGMTable[75]; // 0x1408A0B50
const BattleSystem::ResultCharaPosition BattleSystem::resultPosition[33]; // 0x140A5FCF0
const SoundId BattleSystem::ciStageSoundIDTable[24]; // 0x1408A0C80
const float BattleSystem::resultCameraBillboard[16]; // 0x1408A0CE0
const long BattleSystem::ciShadowMapID[2]; // 0x1408A0D20
const float BattleSystem::resultCameraView[16]; // 0x1408A0D30
const SoundId BattleSystem::ciCharacterSoundIDTable[61]; // 0x1408A0D70
const float BattleSystem::resultCameraProj[16]; // 0x1408A0E80
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5FBD0
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B4E
bool BattleSystem::BattleController::IsRoundWinnerPlayer(long playerID); // 0x140230E10
bool BattleSystem::BattleController::IsPerfectWin(); // 0x140230E40
bool BattleSystem::BattleController::IsFinalRound(); // 0x140230E80
bool BattleSystem::BattleController::IsSuccessiveBattle(); // 0x140230EF0
bool BattleSystem::BattleController::IsTimeAttackMode(); // 0x140230FC0
bool BattleSystem::BattleController::IsSuccessiveBattleEnd(); // 0x140231030
bool BattleSystem::BattleController::IsTutorialMode(); // 0x1402310C0
bool BattleSystem::BattleController::IsComboMissionMode(); // 0x140231130
bool BattleSystem::BattleController::IsMainBGMPlayer2(); // 0x1402311A0
SoundId BattleSystem::BattleController::GetStageBGMSoundID(); // 0x1402311E0
void BattleSystem::BattleController::SetComboMissionSetting(); // 0x1402313C0
long BattleSystem::BattleController::GetPlayingMissionID(); // 0x140231610
void BattleSystem::BattleController::SetupNextMissionData(const ComboMissionData * pMission); // 0x1402316B0
void BattleSystem::BattleController::SetTrainingSetting(const TrainingSetting & training); // 0x140231770
void BattleSystem::BattleController::CheckKeyRecordButton(bool debugKeyRecord); // 0x140231D20
void BattleSystem::BattleController::SetKeyRecordMode(BattleSystem::BattleController::KEY_RECORD_MODE mode); // 0x140232050
void BattleSystem::BattleController::SetKeyRecordType(BattleSystem::BattleController::KEY_RECORD_TYPE::ID type); // 0x140232360
void BattleSystem::BattleController::SetKeyRecordSlot(long slot); // 0x1402323F0
bool BattleSystem::BattleController::IsValidKeyRecordData(long slot, long type); // 0x140232490
void BattleSystem::BattleController::ResetKeyRecordAll(); // 0x1402324F0
void BattleSystem::BattleController::ResetKeyPlayCountAll(); // 0x140232550
InputKeyRecord & BattleSystem::BattleController::GetPlayKeyRecord(); // 0x1402325A0
void BattleSystem::BattleController::SetKeyPlaySlotsOnRecStart(); // 0x1402325E0
void BattleSystem::BattleController::ResultInit(); // 0x140232720
void BattleSystem::BattleController::BattleResultInitRankMatch(unsigned long long tick); // 0x140232D60
void BattleSystem::PlayedWidth(Fw::WEBAPI_PLAYED_WITH GameType, NET_USER_DATA * player); // 0x140234670
void BattleSystem::BattleController::BattleResultInitFreeMatch(); // 0x140234810
void BattleSystem::BattleController::SetResultActionPhase(); // 0x140235280
bool BattleSystem::BattleController::IsResultActionEnd(); // 0x140235390
bool BattleSystem::BattleController::IsNeedLoadChara(PLAYER_ID playerID); // 0x140235410
void BattleSystem::BattleController::SetLoadComplete(); // 0x140235470
void BattleSystem::BattleController::SetResultData(bool bFinalKO); // 0x140235510
bool BattleSystem::BattleController::IsMaxSetCount(long playerID); // 0x140235890
void BattleSystem::BattleController::CheckDemoAction(GAME_MODE gameMode, ActorChara * pPlayer1, ActorChara * pPlayer2, bool bDirectionSkip); // 0x1402358E0
bool BattleSystem::BattleController::CheckFinalKO(BattleSystem::WINNER_ID::ID winID); // 0x140235D80
void BattleSystem::BattleController::PlayerActorSetting(ActorChara * pActor, long iPlayerID, ActorChara * pRival); // 0x140235EF0
void BattleSystem::BattleController::ResultPlayerActorSetting(ActorChara * pActor, long iPlayerID, BattleSystem::RESULT_CHARA_PART::ID partType); // 0x1402369D0
extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> & <lambda_61f3453c215ee27b58ca0b7ede976f4e>::operator()(); // 0x1402370E0
class BattleSystem::BattleController::ResultPlayerActorSetting::__l2::<lambda_61f3453c215ee27b58ca0b7ede976f4e>
{
public:
	extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> & operator()();
	<lambda_61f3453c215ee27b58ca0b7ede976f4e>(BattleSystem::BattleController::ResultPlayerActorSetting::__l2::<lambda_61f3453c215ee27b58ca0b7ede976f4e> &);
	<lambda_61f3453c215ee27b58ca0b7ede976f4e>();
	<lambda_61f3453c215ee27b58ca0b7ede976f4e>(BattleSystem::RESULT_CHARA_PART::ID &, CharaDataUnify * &, AppMain * &, long &, long &, ActorChara * &);
private:
	BattleSystem::RESULT_CHARA_PART::ID & partType; // 0x0
	CharaDataUnify * & pResultCharaData; // 0x8
	AppMain * & pApp; // 0x10
	long & iPlayerID; // 0x18
	long & assetID; // 0x20
	ActorChara * & pActor; // 0x28
public:
	BattleSystem::BattleController::ResultPlayerActorSetting::__l2::<lambda_61f3453c215ee27b58ca0b7ede976f4e> & operator=(const BattleSystem::BattleController::ResultPlayerActorSetting::__l2::<lambda_61f3453c215ee27b58ca0b7ede976f4e> &);
};
void BattleSystem::BattleController::SetInitialStartAction(); // 0x1402372F0
class BattleSystem::BattleController::SetInitialStartAction::__l2::<lambda_844476951c63c99cc400950c54c0e1fd>
{
public:
	void operator()(Actor &);
	<lambda_844476951c63c99cc400950c54c0e1fd>(BattleSystem::BattleController::SetInitialStartAction::__l2::<lambda_844476951c63c99cc400950c54c0e1fd> &);
	<lambda_844476951c63c99cc400950c54c0e1fd>();
	<lambda_844476951c63c99cc400950c54c0e1fd>(BattleSystem::BattleController *);
private:
	BattleSystem::BattleController * __this; // 0x0
public:
	BattleSystem::BattleController::SetInitialStartAction::__l2::<lambda_844476951c63c99cc400950c54c0e1fd> & operator=(const BattleSystem::BattleController::SetInitialStartAction::__l2::<lambda_844476951c63c99cc400950c54c0e1fd> &);
};
void BattleSystem::BattleController::KOTimeStopInfo::Update(); // 0x1402373F0
void BattleSystem::BattleController::SetRealTimeMultiPlayFlag(); // 0x1402374F0//decompilation failure at 1408A0B50!
//decompilation failure at 140A5FCF0!
//decompilation failure at 1408A0C80!
//decompilation failure at 1408A0CE0!
//decompilation failure at 1408A0D20!
//decompilation failure at 1408A0D30!
//decompilation failure at 1408A0D70!
//decompilation failure at 1408A0E80!
//decompilation failure at 140A5FBD0!
//decompilation failure at 1408A0B4E!
std::bitset<61>::reference *__fastcall std::bitset<61>::reference::operator=(
        std::bitset<61>::reference *this,
        bool _Val)
{
  unsigned __int64 Mypos; // rdx
  std::bitset<61> *Pbitset; // rcx

  Mypos = this->_Mypos;
  Pbitset = this->_Pbitset;
  if ( Mypos >= 0x3D )
    std::_Xout_of_range("invalid bitset<N> position");
  Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (Mypos & 0x3F);
  return this;
}

std::bitset<61>::reference *__fastcall std::bitset<21>::operator[](
        std::bitset<61> *this,
        std::bitset<61>::reference *result,
        unsigned __int64 _Pos)
{
  std::bitset<61>::reference *v3; // rax

  result->_Pbitset = this;
  v3 = result;
  result->_Mypos = _Pos;
  return v3;
}

unsigned __int8 __fastcall std::bitset<61>::reference::operator bool(std::bitset<61>::reference *this)
{
  unsigned __int64 Mypos; // rdx
  unsigned __int64 v2; // rax

  Mypos = this->_Mypos;
  if ( Mypos >= 0x3D )
    std::_Xout_of_range("invalid bitset<N> position");
  v2 = this->_Pbitset[Mypos >> 6]._Array[0];
  return _bittest64((const __int64 *)&v2, this->_Mypos & 0x3F);
}

extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *__fastcall lambda_61f3453c215ee27b58ca0b7ede976f4e_::operator()(
        int **a1)
{
  int v2; // ecx
  int *v3; // rax
  int v4; // er8
  __int64 v5; // rdx
  BattleSystem::BattleController *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  BattleSystem::BattleController *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  BattleSystem::BattleController *v14; // rax
  __int64 v15; // rdx
  BattleSystem::BattleController *v16; // [rsp+40h] [rbp+8h]
  BattleSystem::BattleController *v17; // [rsp+40h] [rbp+8h]
  BattleSystem::BattleController *v18; // [rsp+40h] [rbp+8h]

  v2 = **a1;
  v3 = a1[3];
  if ( v2 == 1 )
  {
    v4 = 0;
    v5 = 0i64;
    if ( !*v3 )
      v5 = 8i64;
    *(_QWORD *)a1[1] = *(_QWORD *)(v5 + *(_QWORD *)a1[2] + 2182544);
    LOBYTE(v4) = *a1[3] == 0;
    *a1[4] = v4;
    v6 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v16 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v16);
      BattleSystem::BattleController::instance = v6;
    }
    v7 = *a1[4];
    if ( (unsigned int)v7 <= 3 )
      v6->actSystem.pDrawActor[v7] = *(Actor **)a1[5];
    v8 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64);
    if ( !*a1[3] )
      return (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(v8 + 48);
    return (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(v8 + 32);
  }
  if ( v2 != 2 )
  {
    *(_QWORD *)a1[1] = *(_QWORD *)(*(_QWORD *)a1[2] + 8i64 * *v3 + 2182544);
    *a1[4] = *a1[3];
    v14 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v18 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v18);
      BattleSystem::BattleController::instance = v14;
    }
    v15 = *a1[3];
    if ( (unsigned int)v15 <= 3 )
      v14->actSystem.pDrawActor[v15] = *(Actor **)a1[5];
    v8 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64);
    if ( *a1[3] )
      return (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(v8 + 48);
    return (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(v8 + 32);
  }
  v9 = 0i64;
  if ( !*v3 )
    v9 = 8i64;
  *(_QWORD *)a1[1] = *(_QWORD *)(v9 + *(_QWORD *)a1[2] + 2182560);
  *a1[4] = 3 - (*a1[3] != 0);
  v10 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v17 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v17);
    BattleSystem::BattleController::instance = v10;
  }
  v11 = *a1[4];
  if ( (unsigned int)v11 <= 3 )
    v10->actSystem.pDrawActor[v11] = *(Actor **)a1[5];
  v12 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64);
  if ( *a1[3] )
    return (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(v12 + 64);
  else
    return (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)(v12 + 80);
}

void __fastcall BattleSystem::BattleController::AllInit(
        BattleSystem::BattleController *this,
        BattleSystem::BATTLE_MODE mode,
        int maxWinCount,
        bool partyBattle)
{
  BattleSystem::BattleSystemInfo *p_battleInfo; // rcx
  BattleSystem::BattlePlayerInfo *i; // rcx
  BattleSystem::BattlePlayerInfo *v8; // rcx
  InputKeyRecord (*m_KeyRecord)[6]; // rcx
  BattleSystem::BattleController *v10; // rdx
  RestrictRingBuffer<InputKeyRecord::RecordKey> *Myval2; // rax
  BattleSystem::PauseController *v12; // rax
  __int64 v13; // r8
  BattleSystem::PauseController *keyWatch; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  _QWORD *j; // rcx
  BattleSystem::ComboMissionJudge::TermClearInfo *v18; // rcx
  bool *p_bClear; // rbx

  p_battleInfo = &this->battleInfo;
  p_battleInfo->bRoundTimeStop = 0;
  p_battleInfo->iRoundCount = 0;
  *(_QWORD *)&p_battleInfo->roundWinnerID = 0i64;
  p_battleInfo->roundFinishType = NONE;
  p_battleInfo->bExtraRound = 0;
  BattleSystem::BattleSystemInfo::SetBattleMode(p_battleInfo, mode, maxWinCount);
  for ( i = this->playerInfo; i != (BattleSystem::BattlePlayerInfo *)&this->loadedInfo; i = v8 + 1 )
    BattleSystem::BattlePlayerInfo::Init(i, 0);
  this->bNeedBattleInit = 1;
  this->playBGMID = SND_NONE;
  *(_QWORD *)&this->fNormalStageBGMPos = 0i64;
  *(_WORD *)&this->bHudVisible = 1;
  this->bKeyData = 0;
  this->keyRecordMode = STOP;
  m_KeyRecord = this->m_KeyRecord;
  if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
  {
    do
    {
      v10 = (BattleSystem::BattleController *)&(*m_KeyRecord)[6];
      if ( m_KeyRecord != (InputKeyRecord (*)[6])&(*m_KeyRecord)[6] )
      {
        do
        {
          Myval2 = (*m_KeyRecord)[0].pKeyBuffer._Mypair._Myval2;
          Myval2->uiDataSize = 0;
          *(_QWORD *)&Myval2->uiBeginIndex = 0i64;
          (*m_KeyRecord)[0].uiPlayCount = 0;
          m_KeyRecord = (InputKeyRecord (*)[6])((char *)m_KeyRecord + 16);
        }
        while ( m_KeyRecord != (InputKeyRecord (*)[6])v10 );
      }
      m_KeyRecord = (InputKeyRecord (*)[6])v10;
    }
    while ( v10 != (BattleSystem::BattleController *)&this->missionSampleMode );
  }
  BattleSystem::BattleController::KeyRecordInfo::Reset(&this->keyRecordInfo);
  this->bEnableKeyRecord = 0;
  this->iNextMissionID = -1;
  this->bPartyBattle = partyBattle;
  v12 = BattleSystem::PauseController::instance;
  if ( !BattleSystem::PauseController::instance )
  {
    v12 = (BattleSystem::PauseController *)operator new((unsigned int)((_DWORD)BattleSystem::PauseController::instance
                                                                     + 32));
    v13 = 3i64;
    keyWatch = (BattleSystem::PauseController *)v12->keyWatch;
    v15 = (_QWORD *)v12->keyWatch;
    do
    {
      *v15++ = 0i64;
      --v13;
    }
    while ( v13 );
    v12->m_Pause = 0;
    if ( v12->keyWatch != (BattleSystem::PauseController::KeyWatch *)&v12[1] )
    {
      do
      {
        *(_QWORD *)&keyWatch->m_Pause = 0i64;
        keyWatch = (BattleSystem::PauseController *)((char *)keyWatch + 8);
      }
      while ( keyWatch != &v12[1] );
    }
    BattleSystem::PauseController::instance = v12;
  }
  v12->m_Pause = 0;
  v16 = (_QWORD *)v12->keyWatch;
  for ( j = v16 + 3; v16 != j; ++v16 )
    *v16 = 0i64;
  this->comboMission.pMissionData = 0i64;
  this->comboMission.pPlayer = 0i64;
  this->comboMission.pEnemy = 0i64;
  *(_QWORD *)&this->comboMission.iCompleteCount = 0i64;
  v18 = this->comboMission.pClearInfo._Mypair._Myval2;
  this->comboMission.pClearInfo._Mypair._Myval2 = 0i64;
  if ( v18 )
  {
    p_bClear = &v18[-1].bClear;
    `eh vector destructor iterator'(
      v18,
      0x10ui64,
      *(_QWORD *)&v18[-1].bClear,
      (void (__fastcall *)(void *))BattleSystem::ComboMissionJudge::TermClearInfo::~TermClearInfo);
    operator delete[](p_bClear, 16i64 * *(_QWORD *)p_bClear + 8);
  }
  *(_DWORD *)&this->comboMission.bOneTermClear = 0;
  this->missionSampleMode = NONE;
  *(_QWORD *)&this->roundPhase = 0i64;
}

void __fastcall BattleSystem::BattleController::BattleInit(BattleSystem::BattleController *this, bool bKeepBGM)
{
  BattleSystem::BattlePlayerInfo *playerInfo; // rcx
  BattleSystem::BattlePlayerInfo *i; // rdi
  BattleSystem::BattlePlayerInfo *v5; // rcx

  *(_WORD *)&this->bBattleEnd = 0;
  this->bDirectStart = 0;
  this->iNextMissionID = -1;
  this->matchedDemoChara._Array[0] = 0i64;
  this->battleInfo.iRoundCount = 0;
  *(_QWORD *)&this->battleInfo.roundWinnerID = 0i64;
  this->battleInfo.roundFinishType = NONE;
  this->battleInfo.bExtraRound = 0;
  if ( !bKeepBGM )
  {
    this->playBGMID = SND_NONE;
    this->fNormalStageBGMPos = 0.0;
  }
  playerInfo = this->playerInfo;
  for ( i = playerInfo + 2; playerInfo != i; playerInfo = v5 + 1 )
    BattleSystem::BattlePlayerInfo::BattleInit(playerInfo, this->battleInfo.battleMode);
  memset(this->roundInfo, 0, sizeof(this->roundInfo));
  if ( this->successiveBattleTakeOverInfo.bTakeOver )
  {
    *(_OWORD *)&this->playerInfo[0].roundEndInfo.xVital.value = *(_OWORD *)&this->successiveBattleTakeOverInfo.roundEndInfo.xVital.value;
    *(_QWORD *)&this->playerInfo[0].roundEndInfo.xStunPower.value = *(_QWORD *)&this->successiveBattleTakeOverInfo.roundEndInfo.xStunPower.value;
    *(_DWORD *)&this->playerInfo[0].roundEndInfo.bTakeOverActor = *(_DWORD *)&this->successiveBattleTakeOverInfo.roundEndInfo.bTakeOverActor;
    this->playBGMID = this->successiveBattleTakeOverInfo.playBGMID;
  }
}

void __fastcall BattleSystem::BattleController::BattleResultInit(BattleSystem::BattleController *this)
{
  int *p_iLoseCount; // rax

  if ( this->playerInfo != (BattleSystem::BattlePlayerInfo *)&this->loadedInfo )
  {
    p_iLoseCount = &this->playerInfo[0].iLoseCount;
    do
    {
      *(p_iLoseCount - 1) = 2068357982;
      *p_iLoseCount = 2068357982;
      p_iLoseCount[1] = 2068357982;
      p_iLoseCount[2] = 2068357982;
      p_iLoseCount[12] = 2068357982;
      p_iLoseCount[13] = 2068357982;
      p_iLoseCount += 42;
    }
    while ( p_iLoseCount - 18 != (int *)&this->loadedInfo );
  }
  this->battleInfo.uiTotalBattleFrame = 2068357982;
  this->successiveBattleTakeOverInfo.bTakeOver = 0;
  *(_QWORD *)&this->successiveBattleTakeOverInfo.roundEndInfo.xVital.value = 0i64;
  *(_QWORD *)&this->successiveBattleTakeOverInfo.roundEndInfo.xClimaxTime.value = 0i64;
  *(_QWORD *)&this->successiveBattleTakeOverInfo.roundEndInfo.xStunPower.value = 0i64;
  this->successiveBattleTakeOverInfo.roundEndInfo.bTakeOverActor = 0;
  this->successiveBattleTakeOverInfo.playBGMID = SND_NONE;
}

void __fastcall BattleSystem::BattleController::BattleResultInitFreeMatch(BattleSystem::BattleController *this)
{
  int v2; // edi
  int v3; // esi
  GAME_RULE gameRule; // er9
  BATTLE_RESULT_TYPE v5; // er10
  unsigned int v6; // er12
  unsigned int v7; // ebx
  __int64 v8; // r11
  unsigned int v9; // edx
  unsigned int v10; // ecx
  int v11; // er8
  unsigned int v12; // edx
  __int64 v13; // rdi
  unsigned int v14; // edx
  unsigned int v15; // ecx
  int v16; // er8
  unsigned int v17; // edx
  __int32 v18; // er9
  __int64 v19; // rdi
  CHARACTER_NO *rankMatchCharacterNo; // r12
  int *v21; // rbx
  __int64 v22; // r15
  int v23; // esi
  CharaProjectData *v24; // r14
  int CharaDataIndex; // eax
  int iBaseCharaID; // eax
  _DWORD *v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r8
  int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // edx
  int v35; // ecx
  int v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // edx
  int v39; // ecx
  char **v40; // rax
  char *v41; // r8
  char v42; // cl
  __int64 v43; // rcx
  __int64 v44; // rdi
  CHARACTER_NO *v45; // rax
  int *v46; // rbx
  __int64 v47; // r15
  int v48; // esi
  CharaProjectData *v49; // r14
  int v50; // eax
  int v51; // eax
  int v52; // ecx
  unsigned int v53; // edx
  unsigned int v54; // edx
  int v55; // ecx
  unsigned __int64 v56; // rdi
  char **v57; // rax
  char *v58; // rdx
  char v59; // cl
  int v60; // ecx
  unsigned int v61; // edx
  unsigned int v62; // edx
  int v63; // ecx
  char **v64; // rax
  char *v65; // rdx
  char v66; // cl
  __int64 v67; // rcx
  __int64 v68; // rcx
  NetManager *v69; // rdx
  int v70; // er12
  int v71; // ecx
  unsigned int v72; // edx
  unsigned int v73; // edx
  int v74; // ecx
  unsigned __int64 steamId; // rdi
  char **Name; // rax
  char *v77; // rdx
  char v78; // cl
  int v79; // ecx
  unsigned int v80; // edx
  unsigned int v81; // edx
  int v82; // ecx
  char **v83; // rax
  char *v84; // rdx
  char v85; // cl
  __int64 v86; // rcx
  __int64 myNo; // rcx
  __int64 v88; // rax
  __int64 v89; // [rsp+28h] [rbp-E0h]
  CHARACTER_NO *v90; // [rsp+30h] [rbp-D8h]
  __int128 v91; // [rsp+30h] [rbp-D8h]
  __m128i v92; // [rsp+58h] [rbp-B0h]
  NET_USER_DATA pList[6]; // [rsp+C8h] [rbp-40h] BYREF

  memset(pList, 0, sizeof(pList));
  v92 = *((__m128i *)&g_NetworkManager.gamedata.player_data[(unsigned __int8)g_NetworkManager.gamedata.myNo] + 1);
  NetManager::GetFreeMatchResultMember(&g_NetworkManager, _mm_cvtsi128_si32(v92) & 0x7F, pList);
  v2 = 0;
  v89 = 0i64;
  v3 = 0;
  gameRule = g_NetworkManager.gamedata.gameRule;
  v5 = BATTLE_RESULT_TYPE_DRAW;
  v6 = *((_DWORD *)&pList[1] + 3);
  v7 = *((_DWORD *)pList + 3);
  if ( this->resultMember.battleWinnerID == COUNTER_HIT )
  {
    v2 = 1;
    LODWORD(v89) = 1;
    v5 = ((unsigned int)v92.m128i_i32[0] >> 20) & 1;
    if ( g_NetworkManager.gamedata.gameRule != GAME_RULE_PARTY )
    {
      *((_DWORD *)&g_NetworkManager.gamedata.player_data[(*((_DWORD *)&pList[1] + 3) >> 27) & 0xF] + 5) = 2068357982;
      v13 = (v7 >> 27) & 0xF;
      v14 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[v13] + 5);
      if ( v14 < 0x63 )
      {
        v15 = v14 ^ 0x7B48A35E ^ ((unsigned __int16)v14 ^ 0xA35E ^ (unsigned __int16)((v14 ^ 0x7B48A35E) >> 14)) & 0xCCCC ^ ((((unsigned __int16)v14 ^ 0xA35E ^ (unsigned __int16)((v14 ^ 0x7B48A35E) >> 14)) & 0xCCCC) << 14);
        v16 = ((v15 ^ (v15 >> 7)) & 0x550055 ^ v15 ^ (((v15 ^ (v15 >> 7)) & 0x550055) << 7)) + 1;
        v17 = v16 ^ (v16 ^ (v16 >> 7)) & 0x550055 ^ (((v16 ^ (v16 >> 7)) & 0x550055) << 7);
        *((_DWORD *)&g_NetworkManager.gamedata.player_data[v13] + 5) = ((unsigned __int16)v17 ^ (unsigned __int16)(v17 >> 14)) & 0xCCCC ^ v17 ^ ((((unsigned __int16)v17 ^ (unsigned __int16)(v17 >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
      }
      v2 = 1;
    }
  }
  else if ( this->resultMember.battleWinnerID == GUARD_CRASH )
  {
    v3 = 1;
    HIDWORD(v89) = 1;
    v5 = (((unsigned int)v92.m128i_i32[0] >> 20) & 1) == 0;
    if ( g_NetworkManager.gamedata.gameRule != GAME_RULE_PARTY )
    {
      *((_DWORD *)&g_NetworkManager.gamedata.player_data[(*((_DWORD *)pList + 3) >> 27) & 0xF] + 5) = 2068357982;
      v8 = (v6 >> 27) & 0xF;
      v9 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[v8] + 5);
      if ( v9 < 0x63 )
      {
        v10 = v9 ^ 0x7B48A35E ^ ((unsigned __int16)v9 ^ 0xA35E ^ (unsigned __int16)((v9 ^ 0x7B48A35E) >> 14)) & 0xCCCC ^ ((((unsigned __int16)v9 ^ 0xA35E ^ (unsigned __int16)((v9 ^ 0x7B48A35E) >> 14)) & 0xCCCC) << 14);
        v11 = ((v10 ^ (v10 >> 7)) & 0x550055 ^ v10 ^ (((v10 ^ (v10 >> 7)) & 0x550055) << 7)) + 1;
        v12 = v11 ^ (v11 ^ (v11 >> 7)) & 0x550055 ^ (((v11 ^ (v11 >> 7)) & 0x550055) << 7);
        *((_DWORD *)&g_NetworkManager.gamedata.player_data[v8] + 5) = ((unsigned __int16)v12 ^ (unsigned __int16)(v12 >> 14)) & 0xCCCC ^ v12 ^ ((((unsigned __int16)v12 ^ (unsigned __int16)(v12 >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
      }
    }
  }
  else if ( this->resultMember.battleWinnerID == REVERSAL && g_NetworkManager.gamedata.gameRule != GAME_RULE_PARTY )
  {
    *((_DWORD *)&g_NetworkManager.gamedata.player_data[(*((_DWORD *)pList + 3) >> 27) & 0xF] + 5) = 2068357982;
    *((_DWORD *)&g_NetworkManager.gamedata.player_data[(v6 >> 27) & 0xF] + 5) = 2068357982;
  }
  this->resultMember.onlineResult = v5;
  if ( gameRule == GAME_RULE_SINGLE )
  {
    this->resultMember.freematch[0].rankMatchRank[0] = (v7 >> 21) & 0x3F;
    this->resultMember.freematch[0].rankMatchCharacterNo[0] = BattleSystem::BattlePlayerInfo::GetBaseCharaID(this->playerInfo[0].charaNo[0]);
    if ( v2 )
    {
      v72 = *((_DWORD *)pList + 5) ^ 0x7B48A35E ^ (*((_WORD *)pList + 10) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)pList + 5) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*((_WORD *)pList + 10) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)pList + 5) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      v71 = v2 + ((v72 ^ (v72 >> 7)) & 0x550055 ^ v72 ^ (((v72 ^ (v72 >> 7)) & 0x550055) << 7));
    }
    else
    {
      v71 = 0;
    }
    v73 = v71 ^ (v71 ^ (v71 >> 7)) & 0x550055 ^ (((v71 ^ (v71 >> 7)) & 0x550055) << 7);
    v74 = ((unsigned __int16)v73 ^ (unsigned __int16)(v73 >> 14)) & 0xCCCC;
    this->resultMember.freematch[0].rankMatchBattleWins[0] = v73 ^ v74 ^ (v74 << 14) ^ 0x7B48A35E;
    steamId = pList[0].steamId;
    Name = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)pList[0].steamId);
    v77 = (char *)((char *)this - (char *)Name);
    do
    {
      v78 = *(_BYTE *)Name;
      *((_BYTE *)Name + (_QWORD)v77 + 248464) = *(_BYTE *)Name;
      Name = (char **)((char *)Name + 1);
    }
    while ( v78 );
    this->resultMember.freematch[0].rankMatchDisconnectMarker[0] = (*((_DWORD *)pList + 12) >> 3) & 3;
    this->resultMember.freematch[1].rankMatchRank[0] = (v6 >> 21) & 0x3F;
    this->resultMember.freematch[1].rankMatchCharacterNo[0] = BattleSystem::BattlePlayerInfo::GetBaseCharaID(this->playerInfo[1].charaNo[0]);
    if ( v3 )
    {
      v80 = *((_DWORD *)&pList[1] + 5) ^ 0x7B48A35E ^ (*((_WORD *)&pList[1] + 10) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)&pList[1] + 5) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*((_WORD *)&pList[1] + 10) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)&pList[1] + 5) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      v79 = v3 + ((v80 ^ (v80 >> 7)) & 0x550055 ^ v80 ^ (((v80 ^ (v80 >> 7)) & 0x550055) << 7));
    }
    else
    {
      v79 = 0;
    }
    v81 = v79 ^ (v79 ^ (v79 >> 7)) & 0x550055 ^ (((v79 ^ (v79 >> 7)) & 0x550055) << 7);
    v82 = ((unsigned __int16)v81 ^ (unsigned __int16)(v81 >> 14)) & 0xCCCC;
    this->resultMember.freematch[1].rankMatchBattleWins[0] = v81 ^ v82 ^ (v82 << 14) ^ 0x7B48A35E;
    v83 = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)pList[1].steamId);
    v84 = (char *)((char *)this - (char *)v83);
    do
    {
      v85 = *(_BYTE *)v83;
      *((_BYTE *)v83 + (_QWORD)v84 + 248904) = *(_BYTE *)v83;
      v83 = (char **)((char *)v83 + 1);
    }
    while ( v85 );
    this->resultMember.freematch[1].rankMatchDisconnectMarker[0] = (*((_DWORD *)&pList[1] + 12) >> 3) & 3;
    v69 = *(NetManager **)&AppMain::pApp;
    v86 = *(unsigned int *)(*(_QWORD *)&AppMain::pApp + 2205208i64) + 1i64;
    if ( v86 < 0 )
    {
      *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205208i64) = 0;
    }
    else if ( v86 >= 0xFFFFFFFFi64 )
    {
      *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205208i64) = -1;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205208i64) = v86;
    }
    myNo = (unsigned __int8)g_NetworkManager.gamedata.myNo;
    if ( (*((_DWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 4) & 0xC0000) != 0 )
      return;
    if ( steamId == g_NetworkManager.gamedata.player_data[myNo].steamId )
    {
      v70 = (v6 >> 27) & 0xF;
      goto LABEL_88;
    }
LABEL_87:
    v70 = (v7 >> 27) & 0xF;
    goto LABEL_88;
  }
  v18 = gameRule - 1;
  if ( v18 )
  {
    if ( v18 == 1 )
    {
      v19 = 0x3FFFFFFFFFFFFDBAi64;
      rankMatchCharacterNo = this->resultMember.freematch[0].rankMatchCharacterNo;
      do
      {
        v21 = (int *)rankMatchCharacterNo;
        v22 = 3i64;
        do
        {
          v23 = v21[v19];
          v24 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
          CharaDataIndex = CharaProjectData::GetCharaDataIndex(v24, v23);
          if ( CharaDataIndex >= 0 )
          {
            iBaseCharaID = v24->pCharaData[CharaDataIndex].iBaseCharaID;
            if ( iBaseCharaID < 0 )
              iBaseCharaID = v23;
          }
          else
          {
            iBaseCharaID = -1;
          }
          *v21++ = iBaseCharaID;
          --v22;
        }
        while ( v22 );
        rankMatchCharacterNo += 110;
        v19 -= 68i64;
      }
      while ( v19 > -718 );
      v27 = (_DWORD *)((char *)pList + 8);
      v28 = 6i64;
      do
      {
        v29 = (v27[2] >> 20) & 1;
        v30 = ((*v27 >> 11) & 3) - 1;
        v31 = v30 + 110 * v29;
        this->resultMember.freematch[0].rankMatchRank[v31] = (v27[1] >> 21) & 0x3F;
        if ( (_DWORD)v29 )
        {
          if ( HIDWORD(v89) )
          {
            v37 = v27[3] ^ 0x7B48A35E ^ (*((_WORD *)v27 + 6) ^ 0xA35E ^ (unsigned __int16)((v27[3] ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*((_WORD *)v27 + 6) ^ 0xA35E ^ (unsigned __int16)((v27[3] ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
            v36 = HIDWORD(v89) + ((v37 ^ (v37 >> 7)) & 0x550055 ^ v37 ^ (((v37 ^ (v37 >> 7)) & 0x550055) << 7));
          }
          else
          {
            v36 = 0;
          }
          v38 = v36 ^ (v36 ^ (v36 >> 7)) & 0x550055 ^ (((v36 ^ (v36 >> 7)) & 0x550055) << 7);
          v39 = ((unsigned __int16)(v36 ^ (v36 ^ (v36 >> 7)) & 0x55 ^ ((((unsigned __int16)v36 ^ (unsigned __int16)(v36 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v38 >> 14)) & 0xCCCC;
          this->resultMember.freematch[0].rankMatchBattleWins[v31] = v38 ^ v39 ^ (v39 << 14) ^ 0x7B48A35E;
        }
        else
        {
          if ( (_DWORD)v89 )
          {
            v33 = v27[3] ^ 0x7B48A35E ^ (*((_WORD *)v27 + 6) ^ 0xA35E ^ (unsigned __int16)((v27[3] ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*((_WORD *)v27 + 6) ^ 0xA35E ^ (unsigned __int16)((v27[3] ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
            v32 = v89 + ((v33 ^ (v33 >> 7)) & 0x550055 ^ v33 ^ (((v33 ^ (v33 >> 7)) & 0x550055) << 7));
          }
          else
          {
            v32 = 0;
          }
          v34 = v32 ^ (v32 ^ (v32 >> 7)) & 0x550055 ^ (((v32 ^ (v32 >> 7)) & 0x550055) << 7);
          v35 = ((unsigned __int16)(v32 ^ (v32 ^ (v32 >> 7)) & 0x55 ^ ((((unsigned __int16)v32 ^ (unsigned __int16)(v32 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v34 >> 14)) & 0xCCCC;
          this->resultMember.freematch[0].rankMatchBattleWins[v30] = v34 ^ v35 ^ (v35 << 14) ^ 0x7B48A35E;
        }
        v40 = SteamNameCache::getName(SteamNameCache::ms_instance, *(CSteamID *)(v27 - 2));
        v41 = (char *)this + 130 * v30 + 440 * v29 - (_QWORD)v40;
        do
        {
          v42 = *(_BYTE *)v40;
          v41[(_QWORD)v40 + 248464] = *(_BYTE *)v40;
          v40 = (char **)((char *)v40 + 1);
        }
        while ( v42 );
        this->resultMember.freematch[v29].rankMatchDisconnectMarker[v30] = (v27[10] >> 3) & 3;
        v27 = (_DWORD *)((char *)v27 + 118);
        --v28;
      }
      while ( v28 );
      v43 = *(unsigned int *)(*(_QWORD *)&AppMain::pApp + 2205212i64) + 1i64;
      if ( v43 < 0 )
      {
        *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205212i64) = 0;
      }
      else if ( v43 >= 0xFFFFFFFFi64 )
      {
        *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205212i64) = -1;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205212i64) = v43;
      }
      BattleSystem::PlayedWidth(PARTY, pList);
    }
    return;
  }
  v44 = 0x3FFFFFFFFFFFFDBAi64;
  v45 = this->resultMember.freematch[0].rankMatchCharacterNo;
  v90 = this->resultMember.freematch[0].rankMatchCharacterNo;
  do
  {
    v46 = (int *)v45;
    v47 = 3i64;
    do
    {
      v48 = v46[v44];
      v49 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
      v50 = CharaProjectData::GetCharaDataIndex(v49, v48);
      if ( v50 >= 0 )
      {
        v51 = v49->pCharaData[v50].iBaseCharaID;
        if ( v51 < 0 )
          v51 = v48;
      }
      else
      {
        v51 = -1;
      }
      *v46++ = v51;
      --v47;
    }
    while ( v47 );
    v45 = v90 + 110;
    v90 += 110;
    v44 -= 68i64;
  }
  while ( v44 > -718 );
  v7 = *((_DWORD *)pList + 3);
  this->resultMember.freematch[0].rankMatchRank[0] = (*((_DWORD *)pList + 3) >> 21) & 0x3F;
  if ( (_DWORD)v89 )
  {
    v53 = *((_DWORD *)pList + 5) ^ 0x7B48A35E ^ (*((_WORD *)pList + 10) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)pList + 5) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*((_WORD *)pList + 10) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)pList + 5) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v52 = v89 + ((v53 ^ (v53 >> 7)) & 0x550055 ^ v53 ^ (((v53 ^ (v53 >> 7)) & 0x550055) << 7));
  }
  else
  {
    v52 = 0;
  }
  v54 = v52 ^ (v52 ^ (v52 >> 7)) & 0x550055 ^ (((v52 ^ (v52 >> 7)) & 0x550055) << 7);
  v55 = ((unsigned __int16)v54 ^ (unsigned __int16)(v54 >> 14)) & 0xCCCC;
  this->resultMember.freematch[0].rankMatchBattleWins[0] = v54 ^ v55 ^ (v55 << 14) ^ 0x7B48A35E;
  v56 = pList[0].steamId;
  v57 = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)pList[0].steamId);
  v58 = (char *)((char *)this - (char *)v57);
  do
  {
    v59 = *(_BYTE *)v57;
    *((_BYTE *)v57 + (_QWORD)v58 + 248464) = *(_BYTE *)v57;
    v57 = (char **)((char *)v57 + 1);
  }
  while ( v59 );
  this->resultMember.freematch[0].rankMatchDisconnectMarker[0] = (*((_DWORD *)pList + 12) >> 3) & 3;
  this->resultMember.freematch[1].rankMatchRank[0] = (v6 >> 21) & 0x3F;
  if ( HIDWORD(v89) )
  {
    v61 = *((_DWORD *)&pList[1] + 5) ^ 0x7B48A35E ^ (*((_WORD *)&pList[1] + 10) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)&pList[1] + 5) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*((_WORD *)&pList[1] + 10) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)&pList[1] + 5) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v60 = HIDWORD(v89) + ((v61 ^ (v61 >> 7)) & 0x550055 ^ v61 ^ (((v61 ^ (v61 >> 7)) & 0x550055) << 7));
  }
  else
  {
    v60 = 0;
  }
  v62 = v60 ^ (v60 ^ (v60 >> 7)) & 0x550055 ^ (((v60 ^ (v60 >> 7)) & 0x550055) << 7);
  v63 = ((unsigned __int16)v62 ^ (unsigned __int16)(v62 >> 14)) & 0xCCCC;
  this->resultMember.freematch[1].rankMatchBattleWins[0] = v62 ^ v63 ^ (v63 << 14) ^ 0x7B48A35E;
  v64 = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)pList[1].steamId);
  v65 = (char *)((char *)this - (char *)v64);
  do
  {
    v66 = *(_BYTE *)v64;
    *((_BYTE *)v64 + (_QWORD)v65 + 248904) = *(_BYTE *)v64;
    v64 = (char **)((char *)v64 + 1);
  }
  while ( v66 );
  this->resultMember.freematch[1].rankMatchDisconnectMarker[0] = (*((_DWORD *)&pList[1] + 12) >> 3) & 3;
  v67 = *(unsigned int *)(*(_QWORD *)&AppMain::pApp + 2205216i64) + 1i64;
  if ( v67 < 0 )
  {
    *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205216i64) = 0;
  }
  else if ( v67 >= 0xFFFFFFFFi64 )
  {
    *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205216i64) = -1;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205216i64) = v67;
  }
  v68 = (unsigned __int8)g_NetworkManager.gamedata.myNo;
  v69 = &g_NetworkManager;
  if ( (*((_DWORD *)&g_NetworkManager.gamedata.player_data[v68] + 4) & 0xC0000) == 0 )
  {
    if ( v56 == g_NetworkManager.gamedata.player_data[v68].steamId )
    {
      v70 = (v6 >> 27) & 0xF;
LABEL_88:
      v91 = *(_OWORD *)&g_NetworkManager.gamedata.player_data[v70].steamId;
      v88 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v69);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v88 + 16) + 256i64))(*(_QWORD *)(v88 + 16), v91);
      return;
    }
    goto LABEL_87;
  }
}

void __fastcall BattleSystem::BattleController::BattleResultInitRankMatch(
        BattleSystem::BattleController *this,
        unsigned __int64 tick)
{
  unsigned int v3; // ecx
  int v4; // edx
  unsigned int v5; // er8
  NetManager *v6; // rcx
  unsigned int v7; // eax
  NET_USER_DATA *v8; // r8
  int v9; // er11
  int v10; // er11
  NET_USER_DATA *v11; // r8
  CHARACTER_NO *rankMatchCharacterNo; // r12
  __int64 v13; // r15
  int *v14; // rbx
  __int64 v15; // r14
  int v16; // edi
  CharaProjectData *v17; // rsi
  int CharaDataIndex; // eax
  int iBaseCharaID; // eax
  __int64 v20; // rbx
  char *v21; // r13
  char **Name; // rax
  unsigned int v23; // ecx
  unsigned int v24; // er12
  int v25; // er12
  unsigned int v26; // eax
  SteamNameCache *v27; // rcx
  _BOOL8 v28; // rbx
  char *v29; // rdi
  char **v30; // rax
  unsigned int v31; // er8
  unsigned __int64 v32; // r11
  unsigned int v33; // er15
  char v34; // al
  int v35; // er15
  BattleSystem::BattleController *v36; // r9
  __int64 v37; // rdx
  BattleSystem::ResultRankInfo *rankAfter; // rcx
  BattleSystem::ResultRankInfo *rankBefore; // rax
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  BATTLE_RESULT_TYPE v48; // edx
  BATTLE_RESULT_TYPE v49; // esi
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int64 v55; // rax
  __int64 v56; // rbx
  unsigned int v57; // edx
  int v58; // ecx
  unsigned int v59; // edx
  int v60; // ecx
  int v61; // eax
  unsigned int v62; // edx
  int v63; // ecx
  unsigned int v64; // edx
  int v65; // ecx
  int v66; // eax
  unsigned int v67; // edx
  int v68; // ecx
  unsigned int v69; // edx
  int v70; // ecx
  int v71; // eax
  unsigned int v72; // edx
  int v73; // ecx
  unsigned int v74; // edx
  int v75; // ecx
  int v76; // eax
  bool prisonFlag; // r10
  __int64 v78; // r11
  unsigned int v79; // ecx
  unsigned int v80; // edx
  int v81; // er8
  unsigned __int64 v82; // rcx
  unsigned int v83; // edx
  __int128 *v84; // rax
  __int128 *p_si128; // rax
  int CalcGradePointSaveData; // eax
  bool v87; // r8
  AppMain *v88; // rcx
  unsigned int v89; // edx
  int v90; // er14
  int v91; // er15
  unsigned int v92; // edx
  unsigned int v93; // ecx
  unsigned int v94; // edx
  int v95; // ecx
  unsigned int v96; // edx
  int v97; // ecx
  unsigned int v98; // edx
  unsigned int v99; // edx
  int v100; // ecx
  unsigned int v101; // edx
  GRADE_THRESHOLD_TABLE *v102; // r9
  int v103; // edx
  unsigned int v104; // edx
  GRADE_THRESHOLD_TABLE *v105; // rcx
  int v106; // eax
  int v107; // er8
  int v108; // er8
  int i; // eax
  __int32 v110; // esi
  unsigned int v111; // ecx
  unsigned int v112; // edx
  int v113; // ecx
  unsigned int v114; // edx
  int v115; // ecx
  unsigned int v116; // ecx
  unsigned int v117; // edx
  int v118; // ecx
  unsigned int v119; // edx
  int v120; // ecx
  unsigned int v121; // edx
  int v122; // ecx
  unsigned int v123; // edx
  unsigned int v124; // ecx
  unsigned int v125; // edx
  int v126; // ecx
  unsigned int v127; // edx
  int v128; // ecx
  int v129; // er8
  unsigned int v130; // edx
  WIN_COUNT_BONUS *winBonus; // rax
  int point; // eax
  int v133; // er15
  int v134; // er14
  unsigned int v135; // edx
  unsigned int v136; // ecx
  int v137; // er10
  unsigned int v138; // ecx
  int v139; // edx
  unsigned int v140; // edx
  int v141; // ecx
  unsigned int v142; // edx
  int v143; // er8
  int v144; // eax
  GRADE_THRESHOLD_TABLE *v145; // rcx
  int v146; // er11
  int v147; // esi
  unsigned int v148; // edx
  int v149; // ecx
  GRADE_THRESHOLD_TABLE *v150; // rax
  int v151; // ecx
  int v152; // eax
  unsigned int v153; // edx
  int v154; // ecx
  unsigned int v155; // edx
  int v156; // ecx
  unsigned int v157; // edx
  int v158; // eax
  int v159; // ecx
  int v160; // eax
  unsigned int v161; // edx
  int v162; // ecx
  unsigned int v163; // edx
  int v164; // ecx
  int v165; // er10
  unsigned __int8 v166; // si
  __int64 v167; // r10
  int *p_rankMatchBattleWin; // r8
  unsigned int v169; // er9
  unsigned int v170; // edx
  unsigned int v171; // ecx
  int v172; // er9
  int v173; // eax
  int v174; // edx
  unsigned int v175; // er9
  unsigned int v176; // edx
  unsigned int v177; // ecx
  int v178; // er9
  int v179; // eax
  int v180; // edx
  unsigned int v181; // er9
  unsigned int v182; // edx
  unsigned int v183; // ecx
  int v184; // er9
  int v185; // eax
  int v186; // edx
  unsigned int v187; // er9
  unsigned int v188; // edx
  unsigned int v189; // ecx
  int v190; // er9
  int v191; // eax
  int v192; // edx
  unsigned int v193; // er9
  unsigned int v194; // edx
  unsigned int v195; // ecx
  int v196; // er9
  int v197; // eax
  int v198; // edx
  unsigned int v199; // er9
  unsigned int v200; // edx
  unsigned int v201; // ecx
  int v202; // er9
  int v203; // eax
  int v204; // edx
  unsigned int v205; // er9
  unsigned int v206; // edx
  unsigned int v207; // ecx
  int v208; // er9
  int v209; // eax
  int v210; // edx
  unsigned int v211; // er9
  unsigned int v212; // edx
  unsigned int v213; // ecx
  int v214; // er9
  int v215; // eax
  int v216; // edx
  unsigned int v217; // er9
  unsigned int v218; // edx
  unsigned int v219; // ecx
  int v220; // er9
  int v221; // eax
  int v222; // edx
  unsigned int v223; // er9
  unsigned int v224; // edx
  unsigned int v225; // ecx
  int v226; // er9
  NetManager *v227; // rcx
  int v228; // ecx
  unsigned __int8 v229; // al
  __int64 v230; // rax
  unsigned int v231; // edx
  int v232; // eax
  bool v233; // [rsp+30h] [rbp-D0h]
  bool v234; // [rsp+30h] [rbp-D0h]
  unsigned __int8 myNo; // [rsp+31h] [rbp-CFh]
  BATTLE_RESULT_TYPE result; // [rsp+34h] [rbp-CCh]
  char enemyGrade; // [rsp+38h] [rbp-C8h]
  RANKMATCH_RANK enemyGradea; // [rsp+38h] [rbp-C8h]
  char v240; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v242; // [rsp+58h] [rbp-A8h]
  LEADERBOARD_INFO v243; // [rsp+60h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+E0h] [rbp-20h] BYREF
  __m128i v245; // [rsp+F0h] [rbp-10h]
  NET_USER_DATA pInfo[2]; // [rsp+100h] [rbp+0h] BYREF

  v3 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2202836i64) ^ 0x7B48A35E ^ (*(_WORD *)(*(_QWORD *)&AppMain::pApp
                                                                                    + 2202836i64) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2202836i64) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)(*(_QWORD *)&AppMain::pApp + 2202836i64) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2202836i64) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v4 = ((v3 ^ (v3 >> 7)) & 0x550055 ^ v3 ^ (((v3 ^ (v3 >> 7)) & 0x550055) << 7)) + 1;
  v5 = v4 ^ (v4 ^ (v4 >> 7)) & 0x550055 ^ (((v4 ^ (v4 >> 7)) & 0x550055) << 7);
  v6 = (NetManager *)((unsigned __int16)(v5 ^ (v5 >> 14)) & 0xCCCC);
  v7 = v5 ^ (unsigned int)v6 ^ ((_DWORD)v6 << 14) ^ 0x7B48A35E;
  v8 = pInfo;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2202836i64) = v7;
  v9 = 0;
  this->rank_win_cnt = 2068357982;
  this->rank_continuous_win_cnt = 2068357982;
  do
  {
    NetManager::GetBattleStartTableRoomMemberInfo(v6, v9, v8);
    v9 = v10 + 1;
    v8 = v11 + 1;
  }
  while ( v9 < 2 );
  rankMatchCharacterNo = this->resultMember.rankBefore[0].rankMatchCharacterNo;
  myNo = g_NetworkManager.gamedata.myNo;
  v13 = 0x3FFFFFFFFFFFFE70i64;
  v233 = g_NetworkManager.gamedata.myNo == 0;
  do
  {
    v14 = (int *)rankMatchCharacterNo;
    v15 = 3i64;
    do
    {
      v16 = v14[v13];
      v17 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
      CharaDataIndex = CharaProjectData::GetCharaDataIndex(v17, v16);
      if ( CharaDataIndex >= 0 )
      {
        iBaseCharaID = v17->pCharaData[CharaDataIndex].iBaseCharaID;
        if ( iBaseCharaID < 0 )
          iBaseCharaID = v16;
      }
      else
      {
        iBaseCharaID = -1;
      }
      *v14++ = iBaseCharaID;
      --v15;
    }
    while ( v15 );
    rankMatchCharacterNo += 45;
    v13 -= 3i64;
  }
  while ( v13 > -406 );
  v20 = myNo;
  v21 = (char *)this + 180 * myNo;
  Name = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)pInfo[v20].steamId);
  strncpy(v21 + 247736, (const char *)Name, 0x81ui64);
  v23 = *((_DWORD *)&pInfo[v20] + 12);
  v24 = *((_DWORD *)&pInfo[v20] + 3);
  v242 = v24;
  *((_DWORD *)v21 + 61967) = *((_DWORD *)&pInfo[v20] + 6);
  *((_DWORD *)v21 + 61968) = *((_DWORD *)&pInfo[v20] + 7);
  *((_DWORD *)v21 + 61969) = *((_DWORD *)&pInfo[v20] + 8);
  *((_DWORD *)v21 + 61970) = *((_DWORD *)&pInfo[v20] + 9);
  *((_DWORD *)v21 + 61971) = *((_DWORD *)&pInfo[v20] + 10);
  *((_DWORD *)v21 + 61972) = *((_DWORD *)&pInfo[v20] + 11);
  v240 = v23;
  v21[247892] = *((_BYTE *)&pInfo[v20] + 48) & 1;
  v21[247893] = (v23 & 2) != 0;
  v25 = (v24 >> 21) & 0x3F;
  *((_DWORD *)v21 + 61930) = v25;
  v21[247894] = (v23 & 4) != 0;
  v26 = v23;
  v27 = SteamNameCache::ms_instance;
  *((_DWORD *)v21 + 61974) = (v26 >> 3) & 3;
  v28 = v233;
  v29 = (char *)this + 180 * v233;
  v30 = SteamNameCache::getName(v27, (CSteamID)pInfo[v28].steamId);
  strncpy(v29 + 247736, (const char *)v30, 0x81ui64);
  v31 = *((_DWORD *)&pInfo[v28] + 12);
  v32 = *((unsigned int *)&pInfo[v28] + 3);
  v33 = *((_DWORD *)&pInfo[v28] + 3);
  *((_DWORD *)v29 + 61967) = *((_DWORD *)&pInfo[v28] + 6);
  *((_DWORD *)v29 + 61968) = *((_DWORD *)&pInfo[v28] + 7);
  *((_DWORD *)v29 + 61969) = *((_DWORD *)&pInfo[v28] + 8);
  *((_DWORD *)v29 + 61970) = *((_DWORD *)&pInfo[v28] + 9);
  *((_DWORD *)v29 + 61971) = *((_DWORD *)&pInfo[v28] + 10);
  *((_DWORD *)v29 + 61972) = *((_DWORD *)&pInfo[v28] + 11);
  v34 = *((_BYTE *)&pInfo[v28] + 48);
  v35 = (v33 >> 21) & 0x3F;
  enemyGrade = v31;
  *((_DWORD *)v29 + 61930) = v35;
  v29[247892] = v34 & 1;
  v36 = this;
  v37 = 2i64;
  v29[247893] = (v31 & 2) != 0;
  rankAfter = this->resultMember.rankAfter;
  v29[247894] = (v31 & 4) != 0;
  *((_DWORD *)v29 + 61974) = (v31 >> 3) & 3;
  rankBefore = this->resultMember.rankBefore;
  do
  {
    rankAfter = (BattleSystem::ResultRankInfo *)((char *)rankAfter + 128);
    v40 = *(_OWORD *)&rankBefore->rankMatchRank;
    v41 = *(_OWORD *)rankBefore->rankMatchName;
    rankBefore = (BattleSystem::ResultRankInfo *)((char *)rankBefore + 128);
    *(_OWORD *)&rankAfter[-1].rankMatchName[36] = v40;
    v42 = *(_OWORD *)&rankBefore[-1].rankMatchName[68];
    *(_OWORD *)&rankAfter[-1].rankMatchName[52] = v41;
    v43 = *(_OWORD *)&rankBefore[-1].rankMatchName[84];
    *(_OWORD *)&rankAfter[-1].rankMatchName[68] = v42;
    v44 = *(_OWORD *)&rankBefore[-1].rankMatchName[100];
    *(_OWORD *)&rankAfter[-1].rankMatchName[84] = v43;
    v45 = *(_OWORD *)&rankBefore[-1].rankMatchName[116];
    *(_OWORD *)&rankAfter[-1].rankMatchName[100] = v44;
    v46 = *(_OWORD *)&rankBefore[-1].rankMatchPoint;
    *(_OWORD *)&rankAfter[-1].rankMatchName[116] = v45;
    v47 = *(_OWORD *)&rankBefore[-1].rankMatchBattleWins;
    *(_OWORD *)&rankAfter[-1].rankMatchPoint = v46;
    *(_OWORD *)&rankAfter[-1].rankMatchBattleWins = v47;
    --v37;
  }
  while ( v37 );
  v48 = BATTLE_RESULT_TYPE_DRAW;
  v49 = BATTLE_RESULT_TYPE_DRAW;
  v50 = *(_OWORD *)rankBefore->rankMatchName;
  result = BATTLE_RESULT_TYPE_DRAW;
  *(_OWORD *)&rankAfter->rankMatchRank = *(_OWORD *)&rankBefore->rankMatchRank;
  v51 = *(_OWORD *)&rankBefore->rankMatchName[16];
  *(_OWORD *)rankAfter->rankMatchName = v50;
  v52 = *(_OWORD *)&rankBefore->rankMatchName[32];
  *(_OWORD *)&rankAfter->rankMatchName[16] = v51;
  v53 = *(_OWORD *)&rankBefore->rankMatchName[48];
  *(_OWORD *)&rankAfter->rankMatchName[32] = v52;
  v54 = *(_OWORD *)&rankBefore->rankMatchName[64];
  v55 = *(_QWORD *)&rankBefore->rankMatchName[80];
  *(_OWORD *)&rankAfter->rankMatchName[48] = v53;
  *(_OWORD *)&rankAfter->rankMatchName[64] = v54;
  *(_QWORD *)&rankAfter->rankMatchName[80] = v55;
  if ( this->resultMember.battleWinnerID == COUNTER_HIT )
  {
    if ( myNo )
    {
      v48 = BATTLE_RESULT_TYPE_LOSE;
      v49 = BATTLE_RESULT_TYPE_WIN;
    }
    else
    {
      v48 = BATTLE_RESULT_TYPE_WIN;
      v49 = BATTLE_RESULT_TYPE_LOSE;
    }
  }
  else
  {
    if ( this->resultMember.battleWinnerID != GUARD_CRASH )
      goto LABEL_20;
    v48 = myNo == 0;
    v49 = myNo != 0;
  }
  result = v48;
LABEL_20:
  v56 = *(_QWORD *)&AppMain::pApp;
  this->resultMember.rankMyPlayerNo = myNo;
  this->resultMember.onlineResult = v48;
  if ( v48 )
  {
    if ( v48 == BATTLE_RESULT_TYPE_LOSE )
    {
      v62 = *(_DWORD *)(v56 + 2202820) ^ 0x7B48A35E ^ (*(_WORD *)(v56 + 2202820) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202820) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)(v56 + 2202820) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202820) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      v63 = ((v62 ^ (v62 >> 7)) & 0x550055 ^ v62 ^ (((v62 ^ (v62 >> 7)) & 0x550055) << 7)) + 1;
      if ( v63 > 99999999 )
        v63 = 99999999;
      v64 = v63 ^ (v63 ^ (v63 >> 7)) & 0x550055 ^ (((v63 ^ (v63 >> 7)) & 0x550055) << 7);
      v65 = ((unsigned __int16)(v63 ^ (v63 ^ (v63 >> 7)) & 0x55 ^ ((((unsigned __int16)v63 ^ (unsigned __int16)(v63 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v64 >> 14)) & 0xCCCC;
      v66 = v64 ^ v65 ^ (v65 << 14) ^ 0x7B48A35E;
      *(_DWORD *)(v56 + 2202820) = v66;
      *((_DWORD *)v21 + 62059) = v66;
    }
    else
    {
      if ( v48 != BATTLE_RESULT_TYPE_DRAW )
        goto LABEL_35;
      v57 = *(_DWORD *)(v56 + 2202824) ^ 0x7B48A35E ^ (*(_WORD *)(v56 + 2202824) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202824) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)(v56 + 2202824) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202824) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      v58 = ((v57 ^ (v57 >> 7)) & 0x550055 ^ v57 ^ (((v57 ^ (v57 >> 7)) & 0x550055) << 7)) + 1;
      if ( v58 > 99999999 )
        v58 = 99999999;
      v59 = v58 ^ (v58 ^ (v58 >> 7)) & 0x550055 ^ (((v58 ^ (v58 >> 7)) & 0x550055) << 7);
      v60 = ((unsigned __int16)(v58 ^ (v58 ^ (v58 >> 7)) & 0x55 ^ ((((unsigned __int16)v58 ^ (unsigned __int16)(v58 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v59 >> 14)) & 0xCCCC;
      v61 = v59 ^ v60 ^ (v60 << 14) ^ 0x7B48A35E;
      *(_DWORD *)(v56 + 2202824) = v61;
      *((_DWORD *)v21 + 62060) = v61;
    }
    *(_DWORD *)(v56 + 2202828) = 2068357982;
    *((_DWORD *)v21 + 62061) = 2068357982;
  }
  else
  {
    v67 = *(_DWORD *)(v56 + 2202816) ^ 0x7B48A35E ^ (*(_WORD *)(v56 + 2202816) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202816) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)(v56 + 2202816) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202816) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v68 = ((v67 ^ (v67 >> 7)) & 0x550055 ^ v67 ^ (((v67 ^ (v67 >> 7)) & 0x550055) << 7)) + 1;
    if ( v68 > 99999999 )
      v68 = 99999999;
    v69 = v68 ^ (v68 ^ (v68 >> 7)) & 0x550055 ^ (((v68 ^ (v68 >> 7)) & 0x550055) << 7);
    v70 = ((unsigned __int16)v69 ^ (unsigned __int16)(v69 >> 14)) & 0xCCCC;
    v71 = v69 ^ v70 ^ (v70 << 14) ^ 0x7B48A35E;
    *(_DWORD *)(v56 + 2202816) = v71;
    *((_DWORD *)v21 + 62058) = v71;
    v72 = *(_DWORD *)(v56 + 2202828) ^ 0x7B48A35E ^ (*(_WORD *)(v56 + 2202828) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202828) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)(v56 + 2202828) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202828) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v73 = ((v72 ^ (v72 >> 7)) & 0x550055 ^ v72 ^ (((v72 ^ (v72 >> 7)) & 0x550055) << 7)) + 1;
    if ( v73 > 99999999 )
      v73 = 99999999;
    v74 = v73 ^ (v73 ^ (v73 >> 7)) & 0x550055 ^ (((v73 ^ (v73 >> 7)) & 0x550055) << 7);
    v75 = ((unsigned __int16)(v73 ^ (v73 ^ (v73 >> 7)) & 0x55 ^ ((((unsigned __int16)v73 ^ (unsigned __int16)(v73 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v74 >> 14)) & 0xCCCC;
    v76 = v74 ^ v75 ^ (v75 << 14) ^ 0x7B48A35E;
    *(_DWORD *)(v56 + 2202828) = v76;
    *((_DWORD *)v21 + 62061) = v76;
    AppMain::UpdateRankMatchMaxWinsSaveData((AppMain *)v56);
    LOBYTE(v31) = enemyGrade;
    v36 = this;
  }
LABEL_35:
  *(_QWORD *)(v56 + 2202840) = tick;
  prisonFlag = (v240 & 0x18) == 16 || (v31 & 0x18) == 16;
  v78 = (v32 >> 27) & 0xF;
  v234 = prisonFlag;
  v79 = v36->resultMember.rankAfter[(v242 >> 27) & 0xF].rankMatchBattleWin ^ 0x7B48A35E;
  v80 = v79 ^ ((unsigned __int16)v79 ^ (unsigned __int16)(v79 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v79 ^ (unsigned __int16)(v79 >> 14)) & 0xCCCC) << 14);
  v81 = (v80 ^ (v80 >> 7)) & 0x550055 ^ v80 ^ (((v80 ^ (v80 >> 7)) & 0x550055) << 7);
  v82 = v36->resultMember.rankAfter[v78].rankMatchBattleWin ^ 0x7B48A35Eu;
  v83 = v82 ^ (LOWORD(v36->resultMember.rankAfter[v78].rankMatchBattleWin) ^ 0xA35E ^ (unsigned __int16)((v36->resultMember.rankAfter[v78].rankMatchBattleWin ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(v36->resultMember.rankAfter[v78].rankMatchBattleWin) ^ 0xA35E ^ (unsigned __int16)((v36->resultMember.rankAfter[v78].rankMatchBattleWin ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  if ( v25 )
  {
    enemyGradea = v25;
  }
  else
  {
    v84 = (__int128 *)&si128;
    v82 = 0i64;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v245 = _mm_load_si128((const __m128i *)&_xmm);
    while ( *((_DWORD *)v84 + 1) > v81 )
    {
      v82 = (unsigned int)(v82 + 1);
      v84 = (__int128 *)((char *)v84 + 8);
      if ( (unsigned int)v82 >= 4 )
      {
        enemyGradea = RANKMATCH_RANK_DEFAULT;
        goto LABEL_42;
      }
    }
    enemyGradea = *(_DWORD *)v84;
  }
LABEL_42:
  if ( !v35 )
  {
    p_si128 = (__int128 *)&si128;
    v82 = 0i64;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v245 = _mm_load_si128((const __m128i *)&_xmm);
    while ( *((_DWORD *)p_si128 + 1) > (signed int)((v83 ^ (v83 >> 7)) & 0x550055 ^ v83 ^ (((v83 ^ (v83 >> 7)) & 0x550055) << 7)) )
    {
      v82 = (unsigned int)(v82 + 1);
      p_si128 = (__int128 *)((char *)p_si128 + 8);
      if ( (unsigned int)v82 >= 4 )
      {
        v35 = 1;
        goto LABEL_48;
      }
    }
    v35 = *(_DWORD *)p_si128;
  }
LABEL_48:
  CalcGradePointSaveData = AppMain::GetCalcGradePointSaveData(
                             (AppMain *)v82,
                             result,
                             (RANKMATCH_RANK)v25,
                             (RANKMATCH_RANK)v35,
                             prisonFlag);
  if ( CalcGradePointSaveData )
  {
    v90 = AppMain::AddGradePointSaveData((AppMain *)v56, CalcGradePointSaveData, v87);
  }
  else
  {
    v88 = (AppMain *)(*(_DWORD *)(v56 + 2202812) ^ 0x7B48A35Eu);
    v89 = (unsigned int)v88 ^ (*(_WORD *)(v56 + 2202812) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202812) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)(v56 + 2202812) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202812) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v90 = (v89 ^ (v89 >> 7)) & 0x550055 ^ v89 ^ (((v89 ^ (v89 >> 7)) & 0x550055) << 7);
  }
  v91 = AppMain::GetCalcGradePointSaveData(v88, v49, (RANKMATCH_RANK)v35, enemyGradea, v234);
  v92 = v90 ^ (v90 ^ (v90 >> 7)) & 0x550055 ^ (((v90 ^ (v90 >> 7)) & 0x550055) << 7);
  v93 = *((_DWORD *)v21 + 62062) ^ 0x7B48A35E;
  *((_DWORD *)v21 + 62057) = v92 ^ ((unsigned __int16)v92 ^ (unsigned __int16)(v92 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v92 ^ (unsigned __int16)(v92 >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
  v94 = v93 ^ ((unsigned __int16)v93 ^ (unsigned __int16)(v93 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v93 ^ (unsigned __int16)(v93 >> 14)) & 0xCCCC) << 14);
  v95 = ((v94 ^ (v94 >> 7)) & 0x550055 ^ v94 ^ (((v94 ^ (v94 >> 7)) & 0x550055) << 7)) + 1;
  v96 = v95 ^ (v95 ^ (v95 >> 7)) & 0x550055 ^ (((v95 ^ (v95 >> 7)) & 0x550055) << 7);
  v97 = ((unsigned __int16)(v95 ^ (v95 ^ (v95 >> 7)) & 0x55 ^ ((((unsigned __int16)v95 ^ (unsigned __int16)(v95 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v96 >> 14)) & 0xCCCC;
  *((_DWORD *)v21 + 62062) = v96 ^ v97 ^ (v97 << 14) ^ 0x7B48A35E;
  if ( (*(_DWORD *)(v56 + 2208108) & 0x20000000) != 0 )
  {
    v98 = *(_DWORD *)(v56 + 2202836) ^ 0x7B48A35E ^ (*(_WORD *)(v56 + 2202836) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202836) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)(v56 + 2202836) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202836) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    if ( (int)((v98 ^ (v98 >> 7)) & 0x550055 ^ v98 ^ (((v98 ^ (v98 >> 7)) & 0x550055) << 7)) >= 10 )
    {
      AppMain::SetBattleGradeForSkipGradeSaveData((AppMain *)v56);
      *(_DWORD *)(v56 + 2208108) &= ~0x20000000u;
      *(_BYTE *)(v56 + 2202811) = 0;
      *((_DWORD *)v21 + 61967) = 2068357982;
      v99 = *(_DWORD *)(v56 + 2202812) ^ 0x7B48A35E ^ (*(_WORD *)(v56 + 2202812) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202812) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)(v56 + 2202812) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202812) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      v100 = (v99 ^ (v99 >> 7)) & 0x550055 ^ v99 ^ (((v99 ^ (v99 >> 7)) & 0x550055) << 7);
      v101 = v100 ^ (v100 ^ (v100 >> 7)) & 0x550055 ^ (((v100 ^ (v100 >> 7)) & 0x550055) << 7);
      *((_DWORD *)v21 + 62057) = v101 ^ ((unsigned __int16)v101 ^ (unsigned __int16)(v101 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v101 ^ (unsigned __int16)(v101 >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
    }
  }
  v102 = &_grade_change_table[1];
  if ( (*(_DWORD *)(v56 + 2208108) & 0x20000000) != 0 )
  {
    v103 = 0;
  }
  else
  {
    v104 = *(_DWORD *)(v56 + 2202812) ^ 0x7B48A35E ^ (*(_WORD *)(v56 + 2202812) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202812) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)(v56 + 2202812) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202812) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v105 = &_grade_change_table[1];
    v106 = (v104 ^ (v104 >> 7)) & 0x550055;
    v107 = v104 ^ (v106 << 7);
    v103 = 1;
    v108 = v106 ^ v107;
    for ( i = 1; i < 44; ++i )
    {
      if ( v105->point > v108 )
        break;
      v103 = i;
      ++v105;
    }
  }
  *((_DWORD *)v21 + 62020) = v103;
  if ( v49 )
  {
    v110 = v49 - 1;
    if ( v110 )
    {
      if ( v110 == 1 )
      {
        v111 = *((_DWORD *)v29 + 62060) ^ 0x7B48A35E;
        *((_DWORD *)v29 + 62061) = 2068357982;
        v112 = v111 ^ ((unsigned __int16)v111 ^ (unsigned __int16)(v111 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v111 ^ (unsigned __int16)(v111 >> 14)) & 0xCCCC) << 14);
        v113 = ((v112 ^ (v112 >> 7)) & 0x550055 ^ v112 ^ (((v112 ^ (v112 >> 7)) & 0x550055) << 7)) + 1;
        v114 = v113 ^ (v113 ^ (v113 >> 7)) & 0x550055 ^ (((v113 ^ (v113 >> 7)) & 0x550055) << 7);
        v115 = ((unsigned __int16)(v113 ^ (v113 ^ (v113 >> 7)) & 0x55 ^ ((((unsigned __int16)v113 ^ (unsigned __int16)(v113 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v114 >> 14)) & 0xCCCC;
        *((_DWORD *)v29 + 62060) = v114 ^ v115 ^ (v115 << 14) ^ 0x7B48A35E;
      }
    }
    else
    {
      v116 = *((_DWORD *)v29 + 62059) ^ 0x7B48A35E;
      *((_DWORD *)v29 + 62061) = 2068357982;
      v117 = v116 ^ ((unsigned __int16)v116 ^ (unsigned __int16)(v116 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v116 ^ (unsigned __int16)(v116 >> 14)) & 0xCCCC) << 14);
      v118 = ((v117 ^ (v117 >> 7)) & 0x550055 ^ v117 ^ (((v117 ^ (v117 >> 7)) & 0x550055) << 7)) + 1;
      v119 = v118 ^ (v118 ^ (v118 >> 7)) & 0x550055 ^ (((v118 ^ (v118 >> 7)) & 0x550055) << 7);
      v120 = ((unsigned __int16)(v118 ^ (v118 ^ (v118 >> 7)) & 0x55 ^ ((((unsigned __int16)v118 ^ (unsigned __int16)(v118 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v119 >> 14)) & 0xCCCC;
      *((_DWORD *)v29 + 62059) = v119 ^ v120 ^ (v120 << 14) ^ 0x7B48A35E;
    }
  }
  else
  {
    v121 = (*((_WORD *)v29 + 124116) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)v29 + 62058) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ *((_DWORD *)v29 + 62058) ^ 0x7B48A35E ^ (((*((_WORD *)v29 + 124116) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)v29 + 62058) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v122 = (v121 ^ (v121 ^ (v121 >> 7)) & 0x550055 ^ (((v121 ^ (v121 >> 7)) & 0x550055) << 7)) + 1;
    v123 = (v122 ^ (v122 >> 7)) & 0x550055 ^ v122 ^ (((v122 ^ (v122 >> 7)) & 0x550055) << 7);
    v124 = *((_DWORD *)v29 + 62061) ^ 0x7B48A35E;
    *((_DWORD *)v29 + 62058) = v123 ^ ((unsigned __int16)v123 ^ (unsigned __int16)(v123 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v123 ^ (unsigned __int16)(v123 >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
    v125 = v124 ^ ((unsigned __int16)v124 ^ (unsigned __int16)(v124 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v124 ^ (unsigned __int16)(v124 >> 14)) & 0xCCCC) << 14);
    v126 = ((v125 ^ (v125 >> 7)) & 0x550055 ^ v125 ^ (((v125 ^ (v125 >> 7)) & 0x550055) << 7)) + 1;
    v127 = v126 ^ (v126 ^ (v126 >> 7)) & 0x550055 ^ (((v126 ^ (v126 >> 7)) & 0x550055) << 7);
    v128 = ((unsigned __int16)(v126 ^ (v126 ^ (v126 >> 7)) & 0x55 ^ ((((unsigned __int16)v126 ^ (unsigned __int16)(v126 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v127 >> 14)) & 0xCCCC;
    *((_DWORD *)v29 + 62061) = v127 ^ v128 ^ (v128 << 14) ^ 0x7B48A35E;
  }
  v129 = 0;
  winBonus = _rank_match_change_table.winBonus;
  while ( 1 )
  {
    v130 = *((_DWORD *)v29 + 62061) ^ 0x7B48A35E ^ (*((_WORD *)v29 + 124122) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)v29 + 62061) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*((_WORD *)v29 + 124122) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)v29 + 62061) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    if ( winBonus->winCount <= (signed int)((v130 ^ (v130 >> 7)) & 0x550055 ^ v130 ^ (((v130 ^ (v130 >> 7)) & 0x550055) << 7)) )
      break;
    ++v129;
    if ( (__int64)++winBonus >= (__int64)&g_stage )
    {
      point = 0;
      goto LABEL_70;
    }
  }
  point = _rank_match_change_table.winBonus[v129].point;
LABEL_70:
  v133 = point + v91;
  v134 = *((_DWORD *)v29 + 62020);
  v135 = *((_DWORD *)v29 + 62057) ^ 0x7B48A35E;
  v136 = v135 ^ (*((_WORD *)v29 + 124114) ^ 0xA35E ^ (unsigned __int16)(v135 >> 14)) & 0xCCCC ^ (((*((_WORD *)v29 + 124114) ^ 0xA35E ^ (unsigned __int16)(v135 >> 14)) & 0xCCCC) << 14);
  v137 = (v136 ^ (v136 >> 7)) & 0x550055 ^ v136 ^ (((v136 ^ (v136 >> 7)) & 0x550055) << 7);
  if ( v134 )
  {
    v138 = v135 ^ ((unsigned __int16)v135 ^ (unsigned __int16)(v135 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v135 ^ (unsigned __int16)(v135 >> 14)) & 0xCCCC) << 14);
    v139 = v133 + ((v138 ^ (v138 >> 7)) & 0x550055 ^ v138 ^ (((v138 ^ (v138 >> 7)) & 0x550055) << 7));
    *((_DWORD *)v29 + 62057) = v139 ^ (v139 ^ (v139 >> 7)) & 0x550055 ^ (((v139 ^ (v139 >> 7)) & 0x550055) << 7) ^ ((unsigned __int16)(v139 ^ (v139 ^ (v139 >> 7)) & 0x55 ^ ((((unsigned __int16)v139 ^ (unsigned __int16)(v139 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)((v139 ^ (v139 ^ (v139 >> 7)) & 0x550055 ^ (((v139 ^ (v139 >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(v139 ^ (v139 ^ (v139 >> 7)) & 0x55 ^ ((((unsigned __int16)v139 ^ (unsigned __int16)(v139 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)((v139 ^ (v139 ^ (v139 >> 7)) & 0x550055 ^ (((v139 ^ (v139 >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
  }
  v140 = *((_DWORD *)v29 + 62062) ^ 0x7B48A35E ^ (*((_WORD *)v29 + 124124) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)v29 + 62062) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*((_WORD *)v29 + 124124) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)v29 + 62062) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v141 = ((v140 ^ (v140 >> 7)) & 0x550055 ^ v140 ^ (((v140 ^ (v140 >> 7)) & 0x550055) << 7)) + 1;
  v142 = v141 ^ (v141 ^ (v141 >> 7)) & 0x550055 ^ (((v141 ^ (v141 >> 7)) & 0x550055) << 7);
  v143 = v142 ^ ((unsigned __int16)v142 ^ (unsigned __int16)(v142 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v142 ^ (unsigned __int16)(v142 >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
  *((_DWORD *)v29 + 62062) = v143;
  if ( v133 < 0 )
  {
    v144 = 1;
    v145 = &_grade_change_table[1];
    v146 = 1;
    do
    {
      if ( v145->point > v137 )
        break;
      v146 = v144;
      ++v145;
      ++v144;
    }
    while ( v144 < 44 );
    v147 = 1;
    v149 = 1;
    v150 = &_grade_change_table[1];
    do
    {
      v148 = *((_DWORD *)v29 + 62057) ^ 0x7B48A35E ^ (*((_WORD *)v29 + 124114) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)v29 + 62057) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*((_WORD *)v29 + 124114) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)v29 + 62057) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      if ( v150->point > (signed int)((v148 ^ (v148 >> 7)) & 0x550055 ^ v148 ^ (((v148 ^ (v148 >> 7)) & 0x550055) << 7)) )
        break;
      v147 = v149;
      ++v150;
      ++v149;
    }
    while ( v149 < 44 );
    if ( v147 < v146 && v146 >= 1 && v147 <= 10 )
    {
      v151 = _grade_change_table[v146].point;
      v152 = (v151 ^ (v151 >> 7)) & 0x550055;
      v153 = v152 ^ v151 ^ (v152 << 7);
      v154 = ((unsigned __int16)(v152 ^ v151 ^ ((_WORD)v152 << 7)) ^ (unsigned __int16)(v153 >> 14)) & 0xCCCC;
      *((_DWORD *)v29 + 62057) = v153 ^ v154 ^ (v154 << 14) ^ 0x7B48A35E;
    }
  }
  if ( v134 )
  {
    v164 = 1;
    v165 = 1;
    do
    {
      v163 = *((_DWORD *)v29 + 62057) ^ 0x7B48A35E ^ (*((_WORD *)v29 + 124114) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)v29 + 62057) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*((_WORD *)v29 + 124114) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)v29 + 62057) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      if ( v102->point > (signed int)((v163 ^ (v163 >> 7)) & 0x550055 ^ v163 ^ (((v163 ^ (v163 >> 7)) & 0x550055) << 7)) )
        break;
      v165 = v164;
      ++v102;
      ++v164;
    }
    while ( v164 < 44 );
    *((_DWORD *)v29 + 62020) = v165;
  }
  else
  {
    v155 = v143 ^ 0x7B48A35E ^ ((unsigned __int16)v143 ^ 0xA35E ^ (unsigned __int16)((v143 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)v143 ^ 0xA35E ^ (unsigned __int16)((v143 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    if ( (int)((v155 ^ (v155 >> 7)) & 0x550055 ^ v155 ^ (((v155 ^ (v155 >> 7)) & 0x550055) << 7)) >= 10 )
    {
      v156 = *((_DWORD *)v29 + 62058);
      if ( v156 == -1 )
      {
        v157 = *(_DWORD *)(v56 + 2202816) ^ 0x7B48A35E ^ (*(_WORD *)(v56 + 2202816) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202816) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)(v56 + 2202816) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v56 + 2202816) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
        v156 = (v157 ^ (v157 >> 7)) & 0x550055 ^ v157 ^ (((v157 ^ (v157 >> 7)) & 0x550055) << 7);
      }
      if ( _GradeSkipWinTable[0].win > v156 )
      {
        if ( dword_140A5A920 > v156 )
        {
          if ( dword_140A5A928 > v156 )
          {
            v158 = 1;
            if ( dword_140A5A930 <= v156 )
              v158 = dword_140A5A934;
          }
          else
          {
            v158 = dword_140A5A92C;
          }
        }
        else
        {
          v158 = dword_140A5A924;
        }
      }
      else
      {
        v158 = dword_140A5A91C;
      }
      *((_DWORD *)v29 + 62020) = v158;
      *((_DWORD *)v29 + 61967) = 2068357982;
      v159 = _grade_change_table[v158].point;
      v160 = (v159 ^ (v159 >> 7)) & 0x550055;
      v161 = v159 ^ v160 ^ (v160 << 7);
      v162 = ((unsigned __int16)(v159 ^ v160 ^ ((_WORD)v160 << 7)) ^ (unsigned __int16)(v161 >> 14)) & 0xCCCC;
      *((_DWORD *)v29 + 62057) = v161 ^ v162 ^ (v162 << 14) ^ 0x7B48A35E;
    }
  }
  v166 = 2;
  v167 = 2i64;
  p_rankMatchBattleWin = &this->resultMember.rankBefore[0].rankMatchBattleWin;
  do
  {
    v169 = *(p_rankMatchBattleWin - 1) ^ 0x7B48A35E;
    v170 = v169 ^ (*((_WORD *)p_rankMatchBattleWin - 2) ^ 0xA35E ^ (unsigned __int16)(v169 >> 14)) & 0xCCCC ^ (((*((_WORD *)p_rankMatchBattleWin - 2) ^ 0xA35E ^ (unsigned __int16)(v169 >> 14)) & 0xCCCC) << 14);
    if ( (int)((v170 ^ (v170 >> 7)) & 0x550055 ^ v170 ^ (((v170 ^ (v170 >> 7)) & 0x550055) << 7)) >= 99999999 )
    {
      v172 = 99999999;
    }
    else
    {
      v171 = v169 ^ ((unsigned __int16)v169 ^ (unsigned __int16)(v169 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v169 ^ (unsigned __int16)(v169 >> 14)) & 0xCCCC) << 14);
      v172 = (v171 ^ (v171 >> 7)) & 0x550055 ^ v171 ^ (((v171 ^ (v171 >> 7)) & 0x550055) << 7);
    }
    v173 = (v172 ^ (v172 >> 7)) & 0x550055;
    v174 = v172 ^ (v173 << 7);
    v175 = *p_rankMatchBattleWin ^ 0x7B48A35E;
    *(p_rankMatchBattleWin - 1) = v173 ^ v174 ^ ((unsigned __int16)(v173 ^ v174) ^ (unsigned __int16)((v173 ^ (unsigned int)v174) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(v173 ^ v174) ^ (unsigned __int16)((v173 ^ (unsigned int)v174) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
    v176 = v175 ^ ((unsigned __int16)v175 ^ (unsigned __int16)(v175 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v175 ^ (unsigned __int16)(v175 >> 14)) & 0xCCCC) << 14);
    if ( (int)((v176 ^ (v176 >> 7)) & 0x550055 ^ v176 ^ (((v176 ^ (v176 >> 7)) & 0x550055) << 7)) >= 99999999 )
    {
      v178 = 99999999;
    }
    else
    {
      v177 = v175 ^ ((unsigned __int16)v175 ^ (unsigned __int16)(v175 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v175 ^ (unsigned __int16)(v175 >> 14)) & 0xCCCC) << 14);
      v178 = (v177 ^ (v177 >> 7)) & 0x550055 ^ v177 ^ (((v177 ^ (v177 >> 7)) & 0x550055) << 7);
    }
    v179 = (v178 ^ (v178 >> 7)) & 0x550055;
    v180 = v178 ^ (v179 << 7);
    v181 = p_rankMatchBattleWin[1] ^ 0x7B48A35E;
    *p_rankMatchBattleWin = v179 ^ v180 ^ ((unsigned __int16)(v179 ^ v180) ^ (unsigned __int16)((v179 ^ (unsigned int)v180) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(v179 ^ v180) ^ (unsigned __int16)((v179 ^ (unsigned int)v180) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
    v182 = v181 ^ ((unsigned __int16)v181 ^ (unsigned __int16)(v181 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v181 ^ (unsigned __int16)(v181 >> 14)) & 0xCCCC) << 14);
    if ( (int)((v182 ^ (v182 >> 7)) & 0x550055 ^ v182 ^ (((v182 ^ (v182 >> 7)) & 0x550055) << 7)) >= 99999999 )
    {
      v184 = 99999999;
    }
    else
    {
      v183 = v181 ^ ((unsigned __int16)v181 ^ (unsigned __int16)(v181 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v181 ^ (unsigned __int16)(v181 >> 14)) & 0xCCCC) << 14);
      v184 = (v183 ^ (v183 >> 7)) & 0x550055 ^ v183 ^ (((v183 ^ (v183 >> 7)) & 0x550055) << 7);
    }
    v185 = (v184 ^ (v184 >> 7)) & 0x550055;
    v186 = v184 ^ (v185 << 7);
    v187 = p_rankMatchBattleWin[2] ^ 0x7B48A35E;
    p_rankMatchBattleWin[1] = v185 ^ v186 ^ ((unsigned __int16)(v185 ^ v186) ^ (unsigned __int16)((v185 ^ (unsigned int)v186) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(v185 ^ v186) ^ (unsigned __int16)((v185 ^ (unsigned int)v186) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
    v188 = v187 ^ ((unsigned __int16)v187 ^ (unsigned __int16)(v187 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v187 ^ (unsigned __int16)(v187 >> 14)) & 0xCCCC) << 14);
    if ( (int)((v188 ^ (v188 >> 7)) & 0x550055 ^ v188 ^ (((v188 ^ (v188 >> 7)) & 0x550055) << 7)) >= 99999999 )
    {
      v190 = 99999999;
    }
    else
    {
      v189 = v187 ^ ((unsigned __int16)v187 ^ (unsigned __int16)(v187 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v187 ^ (unsigned __int16)(v187 >> 14)) & 0xCCCC) << 14);
      v190 = (v189 ^ (v189 >> 7)) & 0x550055 ^ v189 ^ (((v189 ^ (v189 >> 7)) & 0x550055) << 7);
    }
    v191 = (v190 ^ (v190 >> 7)) & 0x550055;
    v192 = v190 ^ (v191 << 7);
    v193 = p_rankMatchBattleWin[3] ^ 0x7B48A35E;
    p_rankMatchBattleWin[2] = v191 ^ v192 ^ ((unsigned __int16)(v191 ^ v192) ^ (unsigned __int16)((v191 ^ (unsigned int)v192) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(v191 ^ v192) ^ (unsigned __int16)((v191 ^ (unsigned int)v192) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
    v194 = v193 ^ ((unsigned __int16)v193 ^ (unsigned __int16)(v193 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v193 ^ (unsigned __int16)(v193 >> 14)) & 0xCCCC) << 14);
    if ( (int)((v194 ^ (v194 >> 7)) & 0x550055 ^ v194 ^ (((v194 ^ (v194 >> 7)) & 0x550055) << 7)) >= 99999999 )
    {
      v196 = 99999999;
    }
    else
    {
      v195 = v193 ^ ((unsigned __int16)v193 ^ (unsigned __int16)(v193 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v193 ^ (unsigned __int16)(v193 >> 14)) & 0xCCCC) << 14);
      v196 = (v195 ^ (v195 >> 7)) & 0x550055 ^ v195 ^ (((v195 ^ (v195 >> 7)) & 0x550055) << 7);
    }
    v197 = (v196 ^ (v196 >> 7)) & 0x550055;
    v198 = v196 ^ (v197 << 7);
    v199 = p_rankMatchBattleWin[89] ^ 0x7B48A35E;
    p_rankMatchBattleWin[3] = v197 ^ v198 ^ ((unsigned __int16)(v197 ^ v198) ^ (unsigned __int16)((v197 ^ (unsigned int)v198) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(v197 ^ v198) ^ (unsigned __int16)((v197 ^ (unsigned int)v198) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
    v200 = v199 ^ ((unsigned __int16)v199 ^ (unsigned __int16)(v199 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v199 ^ (unsigned __int16)(v199 >> 14)) & 0xCCCC) << 14);
    if ( (int)((v200 ^ (v200 >> 7)) & 0x550055 ^ v200 ^ (((v200 ^ (v200 >> 7)) & 0x550055) << 7)) >= 99999999 )
    {
      v202 = 99999999;
    }
    else
    {
      v201 = v199 ^ ((unsigned __int16)v199 ^ (unsigned __int16)(v199 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v199 ^ (unsigned __int16)(v199 >> 14)) & 0xCCCC) << 14);
      v202 = (v201 ^ (v201 >> 7)) & 0x550055 ^ v201 ^ (((v201 ^ (v201 >> 7)) & 0x550055) << 7);
    }
    v203 = (v202 ^ (v202 >> 7)) & 0x550055;
    v204 = v202 ^ (v203 << 7);
    v205 = p_rankMatchBattleWin[90] ^ 0x7B48A35E;
    p_rankMatchBattleWin[89] = v203 ^ v204 ^ ((unsigned __int16)(v203 ^ v204) ^ (unsigned __int16)((v203 ^ (unsigned int)v204) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(v203 ^ v204) ^ (unsigned __int16)((v203 ^ (unsigned int)v204) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
    v206 = v205 ^ ((unsigned __int16)v205 ^ (unsigned __int16)(v205 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v205 ^ (unsigned __int16)(v205 >> 14)) & 0xCCCC) << 14);
    if ( (int)((v206 ^ (v206 >> 7)) & 0x550055 ^ v206 ^ (((v206 ^ (v206 >> 7)) & 0x550055) << 7)) >= 99999999 )
    {
      v208 = 99999999;
    }
    else
    {
      v207 = v205 ^ ((unsigned __int16)v205 ^ (unsigned __int16)(v205 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v205 ^ (unsigned __int16)(v205 >> 14)) & 0xCCCC) << 14);
      v208 = (v207 ^ (v207 >> 7)) & 0x550055 ^ v207 ^ (((v207 ^ (v207 >> 7)) & 0x550055) << 7);
    }
    v209 = (v208 ^ (v208 >> 7)) & 0x550055;
    v210 = v208 ^ (v209 << 7);
    v211 = p_rankMatchBattleWin[91] ^ 0x7B48A35E;
    p_rankMatchBattleWin[90] = v209 ^ v210 ^ ((unsigned __int16)(v209 ^ v210) ^ (unsigned __int16)((v209 ^ (unsigned int)v210) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(v209 ^ v210) ^ (unsigned __int16)((v209 ^ (unsigned int)v210) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
    v212 = v211 ^ ((unsigned __int16)v211 ^ (unsigned __int16)(v211 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v211 ^ (unsigned __int16)(v211 >> 14)) & 0xCCCC) << 14);
    if ( (int)((v212 ^ (v212 >> 7)) & 0x550055 ^ v212 ^ (((v212 ^ (v212 >> 7)) & 0x550055) << 7)) >= 99999999 )
    {
      v214 = 99999999;
    }
    else
    {
      v213 = v211 ^ ((unsigned __int16)v211 ^ (unsigned __int16)(v211 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v211 ^ (unsigned __int16)(v211 >> 14)) & 0xCCCC) << 14);
      v214 = (v213 ^ (v213 >> 7)) & 0x550055 ^ v213 ^ (((v213 ^ (v213 >> 7)) & 0x550055) << 7);
    }
    v215 = (v214 ^ (v214 >> 7)) & 0x550055;
    v216 = v214 ^ (v215 << 7);
    v217 = p_rankMatchBattleWin[92] ^ 0x7B48A35E;
    p_rankMatchBattleWin[91] = v215 ^ v216 ^ ((unsigned __int16)(v215 ^ v216) ^ (unsigned __int16)((v215 ^ (unsigned int)v216) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(v215 ^ v216) ^ (unsigned __int16)((v215 ^ (unsigned int)v216) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
    v218 = v217 ^ ((unsigned __int16)v217 ^ (unsigned __int16)(v217 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v217 ^ (unsigned __int16)(v217 >> 14)) & 0xCCCC) << 14);
    if ( (int)((v218 ^ (v218 >> 7)) & 0x550055 ^ v218 ^ (((v218 ^ (v218 >> 7)) & 0x550055) << 7)) >= 99999999 )
    {
      v220 = 99999999;
    }
    else
    {
      v219 = v217 ^ ((unsigned __int16)v217 ^ (unsigned __int16)(v217 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v217 ^ (unsigned __int16)(v217 >> 14)) & 0xCCCC) << 14);
      v220 = (v219 ^ (v219 >> 7)) & 0x550055 ^ v219 ^ (((v219 ^ (v219 >> 7)) & 0x550055) << 7);
    }
    v221 = (v220 ^ (v220 >> 7)) & 0x550055;
    v222 = v220 ^ (v221 << 7);
    v223 = p_rankMatchBattleWin[93] ^ 0x7B48A35E;
    p_rankMatchBattleWin[92] = v221 ^ v222 ^ ((unsigned __int16)(v221 ^ v222) ^ (unsigned __int16)((v221 ^ (unsigned int)v222) >> 14)) & 0xCCCC ^ ((((unsigned __int16)(v221 ^ v222) ^ (unsigned __int16)((v221 ^ (unsigned int)v222) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
    v224 = v223 ^ ((unsigned __int16)v223 ^ (unsigned __int16)(v223 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v223 ^ (unsigned __int16)(v223 >> 14)) & 0xCCCC) << 14);
    if ( (int)((v224 ^ (v224 >> 7)) & 0x550055 ^ v224 ^ (((v224 ^ (v224 >> 7)) & 0x550055) << 7)) >= 99999999 )
    {
      v226 = 99999999;
    }
    else
    {
      v225 = v223 ^ ((unsigned __int16)v223 ^ (unsigned __int16)(v223 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v223 ^ (unsigned __int16)(v223 >> 14)) & 0xCCCC) << 14);
      v226 = (v225 ^ (v225 >> 7)) & 0x550055 ^ v225 ^ (((v225 ^ (v225 >> 7)) & 0x550055) << 7);
    }
    v227 = (NetManager *)((((unsigned __int16)v226 ^ (unsigned __int16)(v226 >> 7)) & 0x55 ^ (unsigned __int16)(v226 ^ ((((unsigned __int16)v226 ^ (unsigned __int16)(v226 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(((v226 ^ (v226 >> 7)) & 0x550055 ^ v226 ^ (((v226 ^ (v226 >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC);
    p_rankMatchBattleWin[93] = (v226 ^ (v226 >> 7)) & 0x550055 ^ v226 ^ (((v226 ^ (v226 >> 7)) & 0x550055) << 7) ^ (unsigned int)v227 ^ (((((unsigned __int16)v226 ^ (unsigned __int16)(v226 >> 7)) & 0x55 ^ (unsigned __int16)(v226 ^ ((((unsigned __int16)v226 ^ (unsigned __int16)(v226 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(((v226 ^ (v226 >> 7)) & 0x550055 ^ v226 ^ (((v226 ^ (v226 >> 7)) & 0x550055u) << 7)) >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
    p_rankMatchBattleWin += 45;
    --v167;
  }
  while ( v167 );
  v243.m_PcId = 0;
  if ( result == BATTLE_RESULT_TYPE_WIN )
  {
    v243.m_Area = NetManager::GetUserCountry(v227, &v243.m_RankWin.m_Country);
    v243.m_RankWin.m_Icon = *(_BYTE *)(v56 + 2202800);
    v228 = *(_DWORD *)(v56 + 2202852);
    v229 = v228 < 4 ? v228 >= 3 : 2;
    v243.m_RankWin.m_DisconnectMarker = v229;
    v230 = *((int *)v21 + 62058);
    v243.m_BoardId = LEADERBOARD_ID_RANKMATCH_WIN_TOTAL_ALL;
    v243.m_Score = v230;
    SubmitScore(LEADERBOARD_ID_RANKMATCH_WIN_TOTAL_ALL, &v243, 0);
    this->rank_win_cnt = *((_DWORD *)v21 + 62058);
    if ( *(_DWORD *)(v56 + 2292480) )
    {
      v243.m_BoardId = LEADERBOARD_ID_RANKMATCH_WIN_MONTHLY_ALL;
      v243.m_Score = (unsigned int)(*(_DWORD *)(v56 + 2292480) + 1);
      SubmitScore(LEADERBOARD_ID_RANKMATCH_WIN_MONTHLY_ALL, &v243, 0);
      *(_DWORD *)(v56 + 2292480) = v243.m_Score;
    }
    else
    {
      AppMain::ReadRankingRankingRankMatchWinMonthly(
        (AppMain *)v56,
        (PROFILE_ICON)v243.m_RankWin.m_Icon,
        v243.m_Area,
        (RANKMATCH_DISCONNECT_MARKER)v243.m_RankWin.m_DisconnectMarker);
    }
    v231 = *((_DWORD *)v21 + 62061) ^ 0x7B48A35E ^ (*((_WORD *)v21 + 124122) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)v21 + 62061) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*((_WORD *)v21 + 124122) ^ 0xA35E ^ (unsigned __int16)((*((_DWORD *)v21 + 62061) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v227 = (NetManager *)((v231 ^ (v231 >> 7)) & 0x550055);
    if ( (int)((unsigned int)v227 ^ v231 ^ (((v231 ^ (v231 >> 7)) & 0x550055) << 7)) > 0 )
    {
      v243.m_Score = *((int *)v21 + 62061);
      v243.m_BoardId = LEADERBOARD_ID_RANKMATCH_WINS_TOTAL_ALL;
      SubmitScore(LEADERBOARD_ID_RANKMATCH_WINS_TOTAL_ALL, &v243, 0);
      this->rank_continuous_win_cnt = *((_DWORD *)v21 + 62061);
    }
  }
  v243.m_BoardId = LEADERBOARD_ID_GRADE_ALL;
  v243.m_Grade.m_Icon = *(_BYTE *)(v56 + 2202800);
  v243.m_Area = NetManager::GetUserCountry(v227, &v243.m_Grade.m_Country);
  v243.m_Grade.m_Point = *((int *)v21 + 62057);
  v232 = *(_DWORD *)(v56 + 2202852);
  if ( v232 < 4 )
    v166 = v232 >= 3;
  v243.m_Grade.m_DisconnectMarker = v166;
  SubmitScore(v243.m_BoardId, &v243, 0);
}

void __fastcall BattleSystem::BattleController::BattleStart(BattleSystem::BattleController *this)
{
  BattleSystem::BattleController *v2; // rcx

  if ( this->roundPhase < DIE )
  {
    AppMain::UnlockStageBGMSoundGallery(*(AppMain **)&AppMain::pApp, this->playBGMID);
    *(_QWORD *)&this->roundPhase = 6i64;
    this->uiSystemCount = 0;
    BattleSystem::BattleController::SetRealTimeMultiPlayFlag(v2);
  }
}

void __fastcall BattleSystem::BattleController::CheckBattleBGMStart(BattleSystem::BattleController *this)
{
  AppMain *v2; // rdi
  __int64 v3; // r8
  SoundId battleBGM; // er9
  SoundId v5; // eax
  SoundId playBGMID; // ecx
  __int64 iRivalBGMTableID; // rax
  BattleSystem::BattleController *v8; // rcx
  SoundId StageBGMSoundID; // esi
  float fNormalStageBGMPos; // xmm0_4
  SoundId v11; // eax
  float v12; // xmm0_4
  bool v13; // [rsp+20h] [rbp-18h]

  v2 = *(AppMain **)&AppMain::pApp;
  if ( this->iRivalBGMTableID < 0 )
  {
    if ( AppMain::Sound_BGMPlay_IsActive((AppMain *)this) )
    {
      StageBGMSoundID = BattleSystem::BattleController::GetStageBGMSoundID(this);
      if ( StageBGMSoundID != this->playBGMID )
      {
        if ( BattleSystem::BattleController::IsSuccessiveBattle(v8)
          && StageBGMSoundID == SND_BGM_10_PSYCHO
          && this->playBGMID == SND_BGM_29_RIVAL_ATHENA_VS_KENSOU )
        {
          this->playBGMID = SND_BGM_10_PSYCHO;
          AppMain::RequestPlayBGM(v2, SND_BGM_10_PSYCHO, -1.0, 0.5, v13);
        }
        else if ( this->playBGMID == SND_NONE )
        {
          fNormalStageBGMPos = this->fNormalStageBGMPos;
          this->playBGMID = StageBGMSoundID;
          if ( fNormalStageBGMPos <= 0.0 )
            AppMain::RequestPlayBGM(v2, StageBGMSoundID, 0.0, 0.0, v13);
          else
            AppMain::RequestPlayBGM(v2, StageBGMSoundID, fNormalStageBGMPos, 2.0, v13);
          this->fNormalStageBGMPos = 0.0;
        }
      }
    }
    else
    {
      v11 = BattleSystem::BattleController::GetStageBGMSoundID(this);
      v12 = this->fNormalStageBGMPos;
      this->playBGMID = v11;
      if ( v12 <= 0.0 )
        AppMain::RequestPlayBGM(v2, v11, 0.0, 0.0, v13);
      else
        AppMain::RequestPlayBGM(v2, v11, v12, 2.0, v13);
      this->fNormalStageBGMPos = 0.0;
    }
  }
  else
  {
    if ( !AppMain::Sound_BGMPlay_IsActive((AppMain *)this) )
    {
      iRivalBGMTableID = this->iRivalBGMTableID;
      if ( (int)iRivalBGMTableID < 0 || (unsigned int)iRivalBGMTableID >= 0xF )
        battleBGM = SND_NONE;
      else
        battleBGM = BattleSystem::rivalDemoBGMTable[iRivalBGMTableID].battleBGM;
      goto LABEL_21;
    }
    v3 = this->iRivalBGMTableID;
    battleBGM = SND_NONE;
    if ( (int)v3 < 0 || (unsigned int)v3 >= 0xF )
      v5 = SND_NONE;
    else
      v5 = BattleSystem::rivalDemoBGMTable[v3].battleBGM;
    playBGMID = this->playBGMID;
    if ( playBGMID != v5 )
    {
      if ( playBGMID == SND_BGM_10_PSYCHO
        && (int)v3 >= 0
        && (unsigned int)v3 < 0xF
        && BattleSystem::rivalDemoBGMTable[v3].battleBGM == SND_BGM_29_RIVAL_ATHENA_VS_KENSOU )
      {
        this->playBGMID = SND_BGM_29_RIVAL_ATHENA_VS_KENSOU;
        AppMain::RequestPlayBGM(v2, SND_BGM_29_RIVAL_ATHENA_VS_KENSOU, -1.0, 0.5, v13);
        return;
      }
      if ( playBGMID == SND_NONE )
      {
        if ( (int)v3 >= 0 && (unsigned int)v3 < 0xF )
          battleBGM = BattleSystem::rivalDemoBGMTable[v3].battleBGM;
LABEL_21:
        this->playBGMID = battleBGM;
        AppMain::RequestPlayBGM(v2, battleBGM, 0.0, 0.0, v13);
      }
    }
  }
}

void __fastcall BattleSystem::BattleController::CheckDemoAction(
        BattleSystem::BattleController *this,
        GAME_MODE gameMode,
        ActorChara *pPlayer1,
        ActorChara *pPlayer2,
        bool bDirectionSkip)
{
  BattleSystem::BATTLE_MODE battleMode; // eax
  BattleSystem::BattleController::START_ACTION v6; // er15
  BattleSystem::BattleController *v10; // rbx
  unsigned int v11; // edx
  CHARACTER_NO battleCharaNo; // edx
  CHARACTER_NO v13; // er8
  const BattleSystem::RivalDemoBGMTable *v14; // rax
  int iCharNo; // er9
  CHARACTER_NO *p_charaID2; // rax
  int v17; // er8
  unsigned int v18; // edx
  BattleSystem::BATTLE_MODE v19; // eax
  int v20; // esi
  CharaProjectData *v21; // rdi
  int CharaDataIndex; // eax
  int iBaseCharaID; // edi
  int BaseCharaID; // eax
  unsigned __int64 v25; // rsi
  std::bitset<61>::reference *v26; // rax
  std::bitset<61>::reference *v27; // rax
  std::bitset<61>::reference *v28; // rax
  bool v29; // dl
  std::bitset<61>::reference *v30; // rax
  bool v31; // dl
  BattleSystem::BattleController::START_ACTION *v32; // rdi
  std::bitset<61>::reference *p_result; // r14
  bool *p_bTakeOverActor; // rbp
  __int64 v35; // rsi
  unsigned int v36; // edx
  BattleSystem::BattleController::START_ACTION *initialStartAction; // rcx
  __int64 v38; // rsi
  GameDataInfo *v39; // rcx
  std::bitset<61>::reference result; // [rsp+20h] [rbp-48h] BYREF
  std::bitset<61>::reference v41; // [rsp+30h] [rbp-38h] BYREF

  battleMode = this->battleInfo.battleMode;
  v6 = READY;
  this->bRivalDemo = 0;
  this->iRivalBGMTableID = -1;
  v10 = this;
  if ( battleMode == MISSION || battleMode == MISSION_DEVELOP )
    goto LABEL_35;
  if ( !this->battleInfo.bExtraRound )
  {
    if ( this->playerInfo[0].roundEndInfo.bTakeOverActor )
    {
      if ( !this->playerInfo[1].roundEndInfo.bTakeOverActor )
      {
        battleCharaNo = this->playerInfo[1].battleCharaNo;
        v13 = this->playerInfo[0].battleCharaNo;
        goto LABEL_19;
      }
    }
    else if ( this->playerInfo[1].roundEndInfo.bTakeOverActor )
    {
      battleCharaNo = this->playerInfo[0].battleCharaNo;
      v13 = this->playerInfo[1].battleCharaNo;
      goto LABEL_19;
    }
    if ( BattleSystem::BattleController::IsMainBGMPlayer2(this) )
    {
      battleCharaNo = v10->playerInfo[1].battleCharaNo;
      v13 = v10->playerInfo[0].battleCharaNo;
    }
    else
    {
      battleCharaNo = v10->playerInfo[0].battleCharaNo;
      v13 = v10->playerInfo[1].battleCharaNo;
    }
LABEL_19:
    this = 0i64;
    v14 = BattleSystem::rivalDemoBGMTable;
    while ( !v14->bExtraData || battleCharaNo != v14->charaID1 || v14->charaID2 != v13 )
    {
      this = (BattleSystem::BattleController *)(unsigned int)((_DWORD)this + 1);
      ++v14;
      if ( (unsigned int)this >= 0xF )
        goto LABEL_26;
    }
    v10->iRivalBGMTableID = (int)this;
    goto LABEL_26;
  }
  v11 = 0;
  this = (BattleSystem::BattleController *)&BattleSystem::rivalDemoBGMTable[0].battleBGM;
  while ( !BYTE4(this->actSystem.actorCharaQue.pFront)
       || LODWORD(this->actSystem.actorCharaQue.pFront) != v10->playBGMID )
  {
    ++v11;
    this = (BattleSystem::BattleController *)((char *)this + 20);
    if ( v11 >= 0xF )
      goto LABEL_26;
  }
  v10->iRivalBGMTableID = v11;
LABEL_26:
  if ( v10->iRivalBGMTableID < 0 )
  {
    iCharNo = pPlayer2->iCharNo;
    p_charaID2 = &BattleSystem::rivalDemoBGMTable[0].charaID2;
    v17 = pPlayer1->iCharNo;
    v18 = 0;
    while ( 1 )
    {
      if ( !*((_BYTE *)p_charaID2 + 12) )
      {
        this = (BattleSystem::BattleController *)*((unsigned int *)p_charaID2 - 1);
        if ( __PAIR64__(iCharNo, v17) == *(_QWORD *)(p_charaID2 - 1) || iCharNo == (_DWORD)this && v17 == *p_charaID2 )
          break;
      }
      ++v18;
      p_charaID2 += 5;
      if ( v18 >= 0xF )
        goto LABEL_35;
    }
    v10->iRivalBGMTableID = v18;
  }
LABEL_35:
  if ( bDirectionSkip || (v19 = v10->battleInfo.battleMode, v19 == MISSION) || v19 == MISSION_DEVELOP )
  {
    *(_QWORD *)v10->initialStartAction = 0i64;
  }
  else
  {
    if ( (gameMode == GAME_MODE_STORY || v19 == DEVELOP)
      && (v19 == TEAM && !v10->battleInfo.bExtraRound || !v10->battleInfo.iRoundCount) )
    {
      v20 = pPlayer2->iCharNo;
      v21 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
      CharaDataIndex = CharaProjectData::GetCharaDataIndex(v21, v20);
      if ( CharaDataIndex >= 0 )
      {
        iBaseCharaID = v21->pCharaData[CharaDataIndex].iBaseCharaID;
        if ( iBaseCharaID < 0 )
          iBaseCharaID = v20;
      }
      else
      {
        iBaseCharaID = -1;
      }
      if ( pPlayer1->IsExistRivalDemoAction(pPlayer1, iBaseCharaID) )
      {
        BaseCharaID = BattleSystem::BattlePlayerInfo::GetBaseCharaID((CHARACTER_NO)pPlayer1->iCharNo);
        v25 = BaseCharaID;
        if ( pPlayer2->IsExistRivalDemoAction(pPlayer2, BaseCharaID) )
        {
          if ( (int)v25 >= 61 || iBaseCharaID >= 61 || (unsigned int)(v10->battleInfo.battleMode - 4) <= 1 )
          {
            v10->bRivalDemo = 1;
          }
          else
          {
            v26 = std::bitset<21>::operator[](&v10->matchedDemoChara, &result, v25);
            if ( !std::bitset<61>::reference::operator bool(v26)
              || (v27 = std::bitset<21>::operator[](&v10->matchedDemoChara, &v41, iBaseCharaID),
                  !std::bitset<61>::reference::operator bool(v27)) )
            {
              v10->bRivalDemo = 1;
              v28 = std::bitset<21>::operator[](&v10->matchedDemoChara, &v41, v25);
              std::bitset<61>::reference::operator=(v28, v29);
              v30 = std::bitset<21>::operator[](&v10->matchedDemoChara, &v41, iBaseCharaID);
              std::bitset<61>::reference::operator=(v30, v31);
            }
          }
        }
      }
    }
    if ( v10->bRivalDemo )
    {
      v10->initialStartAction[0] = SETUP;
LABEL_58:
      v10->initialStartAction[1] = SETUP;
      return;
    }
    if ( v10->battleInfo.battleMode )
    {
      if ( BattleSystem::BattleController::IsSuccessiveBattle(this) )
      {
        if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                                  + 40i64) )
        {
          Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
          {
            GameDataInfo::GameDataInfo(v39);
            Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          }
        }
        v36 = `GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount ^ 0x7B48A35E ^ (LOWORD(`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)((`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)((`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
        LOBYTE(v6) = (v36 ^ (((v36 ^ (v36 >> 7)) & 0x550055) << 7)) == ((v36 ^ (v36 >> 7)) & 0x550055);
        v10->initialStartAction[0] = v6;
        goto LABEL_58;
      }
      initialStartAction = v10->initialStartAction;
      v38 = 2i64;
      do
      {
        *((_DWORD *)++initialStartAction - 1) = v10->battleInfo.iRoundCount == 0;
        --v38;
      }
      while ( v38 );
    }
    else
    {
      result._Pbitset = (std::bitset<61> *)pPlayer1;
      v32 = v10->initialStartAction;
      p_result = &result;
      result._Mypos = (unsigned __int64)pPlayer2;
      p_bTakeOverActor = &v10->playerInfo[0].roundEndInfo.bTakeOverActor;
      v35 = 2i64;
      do
      {
        *v32++ = p_result->_Pbitset
              && (*(unsigned __int8 (__fastcall **)(std::bitset<61> *, __int64))(p_result->_Pbitset->_Array[0] + 3320))(
                   p_result->_Pbitset,
                   0xFFFFFFFFi64)
              || !*p_bTakeOverActor && !v10->battleInfo.bExtraRound;
        p_result = (std::bitset<61>::reference *)((char *)p_result + 8);
        p_bTakeOverActor += 168;
        --v35;
      }
      while ( v35 );
    }
  }
}

char __fastcall BattleSystem::BattleController::CheckFinalKO(
        BattleSystem::BattleController *this,
        BattleSystem::WINNER_ID::ID winID)
{
  BattleSystem::BattleController *battleMode; // rcx
  bool v5; // zf
  char v6; // di
  bool v7; // zf
  char v8; // bp
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // edx
  char result; // al
  GameDataInfo *v13; // rcx

  battleMode = (BattleSystem::BattleController *)(unsigned int)this->battleInfo.battleMode;
  if ( (_DWORD)battleMode )
    v5 = this->battleInfo.iMaxRoundWinCount - 1 == this->playerInfo[0].iRoundSetCount;
  else
    v5 = this->playerInfo[1].iMemberCount == this->playerInfo[1].iMemberReferIndex + 1;
  v6 = v5;
  if ( (_DWORD)battleMode )
    v7 = this->battleInfo.iMaxRoundWinCount - 1 == this->playerInfo[1].iRoundSetCount;
  else
    v7 = this->playerInfo[0].iMemberCount == this->playerInfo[0].iMemberReferIndex + 1;
  v8 = v7;
  if ( BattleSystem::BattleController::IsSuccessiveBattle(battleMode) )
  {
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                              + 40i64) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v13);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] != GAME_MODE_MISSION_TIMEATTACK
      || (GameDataInfo::getInstance(),
          v9 = GameDataInfo::getInstance()->m_SurvivalWinCount ^ 0x7B48A35E,
          v10 = ((unsigned __int16)v9 ^ (unsigned __int16)(v9 >> 14)) & 0xCCCC,
          v11 = v9 ^ v10 ^ (v10 << 14),
          (int)((v11 ^ (v11 >> 7)) & 0x550055 ^ v11 ^ (((v11 ^ (v11 >> 7)) & 0x550055) << 7)) < 9)
      || winID != COUNTER_HIT )
    {
      v6 = 0;
    }
  }
  else if ( this->battleInfo.bExtraRound )
  {
    return 1;
  }
  if ( winID == REVERSAL )
    return v6 != v8;
  if ( winID == COUNTER_HIT )
    return v6;
  result = 0;
  if ( winID == GUARD_CRASH )
    return v8;
  return result;
}

void __fastcall BattleSystem::BattleController::CheckKeyRecordButton(
        BattleSystem::BattleController *this,
        bool debugKeyRecord)
{
  FighterOperation *v3; // rax
  int v4; // edx
  BattleSystem::BattleController::KEY_RECORD_MODE keyRecordMode; // ecx
  InputKeyRecord (*m_KeyRecord)[6]; // rax
  BattleSystem::BattleController *v7; // rcx
  InputKeyRecord (*v8)[6]; // rax
  BattleSystem::BattleController *v9; // rcx
  __int64 v10; // r8
  RestrictRingBuffer<InputKeyRecord::RecordKey> *Myval2; // rax
  InputKeyRecord (*v12)[6]; // rax
  BattleSystem::BattleController *v13; // rcx
  __int64 v14; // rdx
  RestrictRingBuffer<InputKeyRecord::RecordKey> *v15; // rax
  FighterOperation *v16; // rax
  int v17; // edx
  unsigned int v18; // eax
  int v19; // ecx
  InputKeyRecord (*v20)[6]; // rax
  BattleSystem::BattleController *v21; // rcx
  BattleSystem::BattleController *v22; // rcx
  BattleSystem::BattleController::KEY_RECORD_MODE v23; // edx
  FighterOperation *v24; // rax
  int v25; // edx
  unsigned int v26; // eax
  int v27; // ecx
  InputKeyRecord (*v28)[6]; // rax
  BattleSystem::BattleController *v29; // rcx

  if ( debugKeyRecord || this->bEnableKeyRecord )
  {
    v3 = FighterOperation::Instance();
    if ( FighterOperation::testEdge(v3, v4, FighterOp_REC) )
    {
      keyRecordMode = this->keyRecordMode;
      if ( ((keyRecordMode - 3) & 0xFFFFFFFD) == 0 )
      {
        if ( keyRecordMode )
        {
          this->keyRecordMode = STOP;
          m_KeyRecord = this->m_KeyRecord;
          if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
          {
            do
            {
              v7 = (BattleSystem::BattleController *)&(*m_KeyRecord)[6];
              if ( m_KeyRecord != (InputKeyRecord (*)[6])&(*m_KeyRecord)[6] )
              {
                do
                {
                  (*m_KeyRecord)[0].uiPlayCount = 0;
                  m_KeyRecord = (InputKeyRecord (*)[6])((char *)m_KeyRecord + 16);
                }
                while ( m_KeyRecord != (InputKeyRecord (*)[6])v7 );
              }
              m_KeyRecord = (InputKeyRecord (*)[6])v7;
            }
            while ( v7 != (BattleSystem::BattleController *)&this->missionSampleMode );
          }
        }
LABEL_31:
        this->keyRecordInfo.iKeyPlaySlot = -1;
        this->keyRecordMode = STOP;
        return;
      }
      if ( this->keyRecordInfo.iKeyRecordType == 1 )
      {
        if ( this->keyRecordInfo.iKeyRecordSlot )
        {
          this->keyRecordMode = STOP;
          v8 = this->m_KeyRecord;
          if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
          {
            do
            {
              v9 = (BattleSystem::BattleController *)&(*v8)[6];
              if ( v8 != (InputKeyRecord (*)[6])&(*v8)[6] )
              {
                do
                {
                  (*v8)[0].uiPlayCount = 0;
                  v8 = (InputKeyRecord (*)[6])((char *)v8 + 16);
                }
                while ( v8 != (InputKeyRecord (*)[6])v9 );
              }
              v8 = (InputKeyRecord (*)[6])v9;
            }
            while ( v9 != (BattleSystem::BattleController *)&this->missionSampleMode );
          }
          this->keyRecordInfo.iKeyPlaySlot = -1;
          this->keyRecordMode = 5;
          v10 = this->keyRecordInfo.iKeyRecordSlot + 6i64 * this->keyRecordInfo.iKeyRecordType;
          Myval2 = this->m_KeyRecord[this->keyRecordInfo.iKeyRecordType][this->keyRecordInfo.iKeyRecordSlot].pKeyBuffer._Mypair._Myval2;
          Myval2->uiDataSize = 0;
          *(_QWORD *)&Myval2->uiBeginIndex = 0i64;
          this->m_KeyRecord[0][v10].uiPlayCount = 0;
          BattleSystem::BattleController::SetKeyPlaySlotsOnRecStart(this);
        }
      }
      else if ( this->keyRecordInfo.iKeyRecordSlot )
      {
        this->keyRecordMode = STOP;
        v12 = this->m_KeyRecord;
        if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
        {
          do
          {
            v13 = (BattleSystem::BattleController *)&(*v12)[6];
            if ( v12 != (InputKeyRecord (*)[6])&(*v12)[6] )
            {
              do
              {
                (*v12)[0].uiPlayCount = 0;
                v12 = (InputKeyRecord (*)[6])((char *)v12 + 16);
              }
              while ( v12 != (InputKeyRecord (*)[6])v13 );
            }
            v12 = (InputKeyRecord (*)[6])v13;
          }
          while ( v13 != (BattleSystem::BattleController *)&this->missionSampleMode );
        }
        this->keyRecordInfo.iKeyPlaySlot = -1;
        this->keyRecordMode = SKIP|PLAY;
        v14 = this->keyRecordInfo.iKeyRecordSlot + 6i64 * this->keyRecordInfo.iKeyRecordType;
        v15 = this->m_KeyRecord[this->keyRecordInfo.iKeyRecordType][this->keyRecordInfo.iKeyRecordSlot].pKeyBuffer._Mypair._Myval2;
        v15->uiDataSize = 0;
        *(_QWORD *)&v15->uiBeginIndex = 0i64;
        this->m_KeyRecord[0][v14].uiPlayCount = 0;
        BattleSystem::BattleController::SetKeyPlaySlotsOnRecStart(this);
      }
    }
    else
    {
      v16 = FighterOperation::Instance();
      if ( FighterOperation::testEdge(v16, v17, FighterOp_REPEAT) )
      {
        v18 = this->keyRecordMode;
        if ( v18 <= 6 )
        {
          v19 = 86;
          if ( _bittest(&v19, v18) )
          {
            if ( v18 )
            {
              this->keyRecordMode = STOP;
              v20 = this->m_KeyRecord;
              if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
              {
                do
                {
                  v21 = (BattleSystem::BattleController *)&(*v20)[6];
                  if ( v20 != (InputKeyRecord (*)[6])&(*v20)[6] )
                  {
                    do
                    {
                      (*v20)[0].uiPlayCount = 0;
                      v20 = (InputKeyRecord (*)[6])((char *)v20 + 16);
                    }
                    while ( v20 != (InputKeyRecord (*)[6])v21 );
                  }
                  v20 = (InputKeyRecord (*)[6])v21;
                }
                while ( v21 != (BattleSystem::BattleController *)&this->missionSampleMode );
              }
            }
            goto LABEL_31;
          }
        }
        v22 = this;
        if ( this->keyRecordInfo.iKeyRecordType == 1 )
          v23 = 6;
        else
          v23 = SKIP;
      }
      else
      {
        v24 = FighterOperation::Instance();
        if ( !FighterOperation::testEdge(v24, v25, FighterOp_PLAY) )
          return;
        v26 = this->keyRecordMode;
        if ( v26 <= 6 )
        {
          v27 = 86;
          if ( _bittest(&v27, v26) )
          {
            if ( v26 )
            {
              this->keyRecordMode = STOP;
              v28 = this->m_KeyRecord;
              if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
              {
                do
                {
                  v29 = (BattleSystem::BattleController *)&(*v28)[6];
                  if ( v28 != (InputKeyRecord (*)[6])&(*v28)[6] )
                  {
                    do
                    {
                      (*v28)[0].uiPlayCount = 0;
                      v28 = (InputKeyRecord (*)[6])((char *)v28 + 16);
                    }
                    while ( v28 != (InputKeyRecord (*)[6])v29 );
                  }
                  v28 = (InputKeyRecord (*)[6])v29;
                }
                while ( v29 != (BattleSystem::BattleController *)&this->missionSampleMode );
              }
            }
            goto LABEL_31;
          }
        }
        v22 = this;
        v23 = 6;
        if ( this->keyRecordInfo.iKeyRecordType != 1 )
          v23 = PLAY;
      }
      BattleSystem::BattleController::SetKeyRecordMode(v22, v23);
    }
  }
}

void __fastcall BattleSystem::BattleController::CharaBoneData::Clear(
        BattleSystem::BattleController::CharaBoneData *this)
{
  __int64 v1; // rax
  int *iBoneIndex; // r8
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v6; // r9
  int *v7; // rdx
  CharaBone *p_extendChara; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  int *v11; // rdx

  v1 = 0i64;
  iBoneIndex = this->mainChara.iBoneIndex;
  this->mainChara.pModel = 0i64;
  v3 = 100i64;
  v4 = 100i64;
  if ( this->mainChara.iBoneIndex > (int *)&this->optionChara )
    v4 = 0i64;
  v6 = 0i64;
  if ( this->mainChara.iBoneIndex <= (int *)&this->optionChara )
  {
    do
    {
      ++v6;
      *iBoneIndex++ = -1;
    }
    while ( v6 != v4 );
  }
  v7 = this->optionChara.iBoneIndex;
  this->optionChara.pModel = 0i64;
  p_extendChara = &this->extendChara;
  v9 = 100i64;
  v10 = 0i64;
  if ( v7 > (int *)p_extendChara )
    v9 = 0i64;
  if ( v7 <= (int *)p_extendChara )
  {
    do
    {
      ++v10;
      *v7++ = -1;
    }
    while ( v10 != v9 );
  }
  v11 = this->extendChara.iBoneIndex;
  this->extendChara.pModel = 0i64;
  if ( this->extendChara.iBoneIndex > (int *)&this[1] )
    v3 = 0i64;
  if ( this->extendChara.iBoneIndex <= (int *)&this[1] )
  {
    do
    {
      ++v1;
      *v11++ = -1;
    }
    while ( v1 != v3 );
  }
}

void __fastcall BattleSystem::BattleController::DefaultBattleInit(BattleSystem::BattleController *this)
{
  int *p_iMemberCount; // rax
  __int64 v3; // rcx

  BattleSystem::BattleController::AllInit(this, TRAINING, -1, 0);
  this->battleInfo.iRoundLimitFrame = -1;
  this->battleInfo.uiRoundPassFrame = 0;
  *(_QWORD *)&this->battleInfo.timeLimit = 0i64;
  if ( this->playerInfo != (BattleSystem::BattlePlayerInfo *)&this->loadedInfo )
  {
    p_iMemberCount = &this->playerInfo[0].iMemberCount;
    do
    {
      v3 = *p_iMemberCount;
      if ( (int)v3 < 3 )
      {
        p_iMemberCount[v3 - 6] = 0;
        p_iMemberCount[(*p_iMemberCount)++ - 3] = 1;
      }
      p_iMemberCount += 42;
    }
    while ( p_iMemberCount - 6 != (int *)&this->loadedInfo );
  }
}

InputKeyRecord *__fastcall BattleSystem::BattleController::GetPlayKeyRecord(BattleSystem::BattleController *this)
{
  __int64 iKeyPlaySlot; // rdx
  __int64 iKeyRecordType; // rax

  iKeyPlaySlot = this->keyRecordInfo.iKeyPlaySlot;
  iKeyRecordType = this->keyRecordInfo.iKeyRecordType;
  if ( (int)iKeyPlaySlot >= 0 )
    return &this->m_KeyRecord[iKeyRecordType][iKeyPlaySlot];
  else
    return this->m_KeyRecord[iKeyRecordType];
}

__int64 __fastcall BattleSystem::BattleController::GetPlayingMissionID(BattleSystem::BattleController *this)
{
  bool v1; // zf
  int v2; // eax
  GameDataInfo *v4; // rcx
  GameDataInfo *v5; // rcx

  v1 = !BattleSystem::BattleController::IsTutorialMode(this);
  v2 = *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  if ( v1 )
  {
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > v2 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v5);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    return (unsigned int)`GameDataInfo::getInstance'::`2'::instance.m_MissionTrialNo;
  }
  else
  {
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > v2 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v4);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    return (unsigned int)`GameDataInfo::getInstance'::`2'::instance.m_TutorialNo;
  }
}

__int64 __fastcall BattleSystem::BattleController::GetStageBGMSoundID(BattleSystem::BattleController *this)
{
  unsigned int battleStageID; // eax
  BattleSystem::BattleController *v2; // r13
  __int64 v3; // r15
  int *p_iMemberCount; // rsi
  int v5; // ebx
  __int64 v6; // rdi
  int v7; // ebp
  CharaProjectData *v8; // r14
  int v9; // eax
  int v10; // edx
  int iBaseCharaID; // ebx
  int v13; // edi
  CharaProjectData *v14; // rbx
  int CharaDataIndex; // eax
  BattleSystem::BATTLE_MODE battleMode; // eax
  GameDataInfo *Instance; // rax

  battleStageID = this->battleInfo.battleStageID;
  v2 = this;
  if ( battleStageID != 22 )
  {
    if ( battleStageID > 0x17
      || (this = (BattleSystem::BattleController *)9437185, !_bittest((const int *)&this, battleStageID)) )
    {
      Instance = GameDataInfo::getInstance();
      if ( Instance->m_GameMode[Instance->m_GameModeIndex] == GAME_MODE_STORY
        && v2->battleInfo.battleStageID == STAGE_ID_MBS )
      {
        return 64i64;
      }
      else
      {
        return (unsigned int)BattleSystem::ciStageSoundIDTable[v2->battleInfo.battleStageID];
      }
    }
LABEL_16:
    if ( v2->playerInfo[0].iMemberCount > 0 )
    {
      v13 = v2->playerInfo[0].charaNo[0];
      v14 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
      CharaDataIndex = CharaProjectData::GetCharaDataIndex(v14, v13);
      if ( CharaDataIndex >= 0 )
      {
        this = (BattleSystem::BattleController *)(18i64 * CharaDataIndex);
        iBaseCharaID = v14->pCharaData[CharaDataIndex].iBaseCharaID;
        if ( iBaseCharaID < 0 )
          iBaseCharaID = v13;
      }
      else
      {
        iBaseCharaID = -1;
      }
    }
    else
    {
      iBaseCharaID = -1;
    }
    battleMode = v2->battleInfo.battleMode;
    if ( battleMode == TRAINING
      || battleMode != MISSION
      && battleMode != MISSION_DEVELOP
      && !BattleSystem::BattleController::IsSuccessiveBattle(this)
      && v2->playerInfo[1].playerType )
    {
      if ( v2->playerInfo[1].iMemberCount <= 0 )
        return 0xFFFFFFFFi64;
      iBaseCharaID = BattleSystem::BattlePlayerInfo::GetBaseCharaID(v2->playerInfo[1].charaNo[0]);
    }
    if ( iBaseCharaID >= 0 && (unsigned int)iBaseCharaID < 0x3D )
      return (unsigned int)BattleSystem::ciCharacterSoundIDTable[iBaseCharaID];
    return 0xFFFFFFFFi64;
  }
  v3 = 0i64;
  p_iMemberCount = &this->playerInfo[0].iMemberCount;
  while ( 1 )
  {
    v5 = 0;
    v6 = 0i64;
    if ( *p_iMemberCount > 0 )
      break;
LABEL_11:
    ++v3;
    p_iMemberCount += 42;
    if ( v3 >= 2 )
      goto LABEL_16;
  }
  while ( 1 )
  {
    if ( v6 >= 0 && v5 < *p_iMemberCount )
    {
      v7 = p_iMemberCount[v6 - 6];
      v8 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
      v9 = CharaProjectData::GetCharaDataIndex(v8, v7);
      if ( v9 >= 0 )
      {
        this = (BattleSystem::BattleController *)(18i64 * v9);
        v10 = v8->pCharaData[v9].iBaseCharaID;
        if ( v10 < 0 )
          v10 = v7;
        if ( v10 == 6 )
          return 119i64;
      }
    }
    ++v5;
    ++v6;
    if ( v5 >= *p_iMemberCount )
      goto LABEL_11;
  }
}

bool __fastcall BattleSystem::BattleController::IsComboMissionMode(BattleSystem::BattleController *this)
{
  GameDataInfo *v2; // rcx

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
  return `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_MISSION_TRIAL;
}

bool __fastcall BattleSystem::BattleController::IsFinalRound(BattleSystem::BattleController *this)
{
  bool result; // al
  BattleSystem::BATTLE_MODE battleMode; // edx
  bool v3; // zf

  if ( this->battleInfo.bExtraRound )
    return 0;
  battleMode = this->battleInfo.battleMode;
  if ( battleMode )
    v3 = this->battleInfo.iMaxRoundWinCount - 1 == this->playerInfo[0].iRoundSetCount;
  else
    v3 = this->playerInfo[1].iMemberCount == this->playerInfo[1].iMemberReferIndex + 1;
  result = 0;
  if ( v3
    && (battleMode ? this->battleInfo.iMaxRoundWinCount - 1 == this->playerInfo[1].iRoundSetCount : this->playerInfo[0].iMemberCount == this->playerInfo[0].iMemberReferIndex + 1) )
  {
    return 1;
  }
  return result;
}

char __fastcall BattleSystem::BattleController::IsGotoRoundEndPausePhase(BattleSystem::BattleController *this)
{
  ActorChara **pPlayer; // rsi
  __int64 v3; // rdi
  ActorChara *v4; // rbx

  if ( this->roundPhase != WALL )
    return 0;
  if ( this->uiRoundPhaseFrame >= 0x708 )
    return 1;
  pPlayer = this->actSystem.pPlayer;
  v3 = 0i64;
  while ( 1 )
  {
    if ( (unsigned __int64)v3 > 1 )
      goto LABEL_12;
    v4 = *pPlayer;
    if ( !*pPlayer )
      goto LABEL_12;
    if ( !v4->IsGotoNextRound(*pPlayer) && !v4->IsReady(v4) )
      return 0;
    if ( v4->IsClimaxMode(v4) )
      v4->EndClimaxMode(v4);
LABEL_12:
    ++v3;
    ++pPlayer;
    if ( v3 >= 2 )
      return 1;
  }
}

bool __fastcall BattleSystem::BattleController::IsMainBGMPlayer2(BattleSystem::BattleController *this)
{
  BattleSystem::BATTLE_MODE battleMode; // eax

  battleMode = this->battleInfo.battleMode;
  return battleMode == TRAINING
      || battleMode != MISSION
      && battleMode != MISSION_DEVELOP
      && !BattleSystem::BattleController::IsSuccessiveBattle(this)
      && this->playerInfo[1].playerType;
}

bool __fastcall BattleSystem::BattleController::IsMaxSetCount(BattleSystem::BattleController *this, int playerID)
{
  if ( this->battleInfo.battleMode )
    return this->battleInfo.iMaxRoundWinCount <= this->playerInfo[playerID].iRoundSetCount;
  if ( playerID )
    return this->playerInfo[0].iMemberCount <= this->playerInfo[0].iMemberReferIndex;
  return this->playerInfo[1].iMemberCount <= this->playerInfo[1].iMemberReferIndex;
}

bool __fastcall BattleSystem::BattleController::IsNeedLoadChara(
        BattleSystem::BattleController *this,
        PLAYER_ID playerID)
{
  __int64 v2; // r9
  int v3; // er8
  BattleSystem::BattlePlayerInfo *v4; // rdx
  __int64 iMemberReferIndex; // rax
  int v6; // eax
  __int64 v7; // rax

  v2 = playerID;
  v3 = -1;
  v4 = &this->playerInfo[playerID];
  iMemberReferIndex = v4->iMemberReferIndex;
  if ( v4->iMemberCount > (int)iMemberReferIndex )
    v6 = v4->charaNo[iMemberReferIndex];
  else
    v6 = -1;
  if ( this->loadedInfo.loadedChara[v2].charaNo != v6 )
    return 1;
  v7 = v4->iMemberReferIndex;
  if ( v4->iMemberCount > (int)v7 )
    v3 = v4->iCharaColor[v7];
  return this->loadedInfo.loadedChara[v2].iCharaColor != v3;
}

bool __fastcall BattleSystem::BattleController::IsPerfectWin(BattleSystem::BattleController *this)
{
  ActorChara *v1; // rcx

  if ( this->battleInfo.roundWinnerID == COUNTER_HIT )
  {
    v1 = this->actSystem.pPlayer[0];
  }
  else
  {
    if ( this->battleInfo.roundWinnerID != GUARD_CRASH )
      return 0;
    v1 = this->actSystem.pPlayer[1];
  }
  if ( !v1 )
    return 0;
  return v1->IsVitalMax(v1);
}

char __fastcall BattleSystem::BattleController::IsResultActionEnd(BattleSystem::BattleController *this)
{
  int v3; // ebx
  ActorChara **i; // rdi

  if ( this->resultMember.battleWinnerID == REVERSAL )
    return 1;
  v3 = 0;
  if ( this->resultMember.iMemberCount <= 0 )
    return 1;
  for ( i = this->resultMember.pActor; !*i || (*i)->IsResultDemoEnd(*i); ++i )
  {
    if ( ++v3 >= this->resultMember.iMemberCount )
      return 1;
  }
  return 0;
}

char __fastcall BattleSystem::BattleController::IsRivalDemoActionEnd(BattleSystem::BattleController *this)
{
  unsigned __int64 v1; // rbx
  ActorChara **i; // rsi
  ActorChara *v3; // rdi

  v1 = 0i64;
  for ( i = this->actSystem.pPlayer; ; ++i )
  {
    if ( v1 <= 1 )
    {
      v3 = *i;
      if ( *i )
      {
        if ( !v3->IsRivalDemoActionEnd(*i) && !v3->IsReady(v3) )
          break;
      }
    }
    if ( (__int64)++v1 >= 2 )
      return 1;
  }
  return 0;
}

char __fastcall BattleSystem::BattleController::IsRoundWinnerPlayer(BattleSystem::BattleController *this, int playerID)
{
  if ( playerID )
  {
    if ( playerID != 1 || this->battleInfo.roundWinnerID != GUARD_CRASH )
      return 0;
  }
  else if ( this->battleInfo.roundWinnerID != COUNTER_HIT )
  {
    return 0;
  }
  return 1;
}

bool __fastcall BattleSystem::BattleController::IsSuccessiveBattle(BattleSystem::BattleController *this)
{
  int v1; // ecx
  _DWORD *v2; // rbx
  GameDataInfo *v4; // rcx

  v1 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  v2 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v2 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v1 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v1 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_MISSION_SURVIVAL )
    return 1;
  if ( v1 > *v2 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v4);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  return `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_MISSION_TIMEATTACK;
}

bool __fastcall BattleSystem::BattleController::IsSuccessiveBattleEnd(BattleSystem::BattleController *this)
{
  BattleSystem::BattleController *v2; // rcx
  bool result; // al
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // edx

  result = 0;
  if ( BattleSystem::BattleController::IsSuccessiveBattle(this) && this->bBattleEnd )
  {
    if ( this->battleInfo.battleWinnerID != COUNTER_HIT )
      return 1;
    if ( BattleSystem::BattleController::IsTimeAttackMode(v2) )
    {
      GameDataInfo::getInstance();
      v4 = GameDataInfo::getInstance()->m_SurvivalWinCount ^ 0x7B48A35E;
      v5 = ((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC;
      v6 = v4 ^ v5 ^ (v5 << 14);
      if ( (int)((v6 ^ (v6 >> 7)) & 0x550055 ^ v6 ^ (((v6 ^ (v6 >> 7)) & 0x550055) << 7)) >= 10 )
        return 1;
    }
  }
  return result;
}

bool __fastcall BattleSystem::BattleController::IsTimeAttackMode(BattleSystem::BattleController *this)
{
  GameDataInfo *v2; // rcx

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
  return `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_MISSION_TIMEATTACK;
}

bool __fastcall BattleSystem::BattleController::IsTutorialMode(BattleSystem::BattleController *this)
{
  GameDataInfo *v2; // rcx

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
  return `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_TUTORIAL;
}

bool __fastcall BattleSystem::BattleController::IsValidKeyRecordData(
        BattleSystem::BattleController *this,
        int slot,
        int type)
{
  bool v3; // zf

  if ( (unsigned int)slot > 5 )
    return 0;
  v3 = type == 1;
  if ( (unsigned int)type > 1 )
  {
    type = this->keyRecordInfo.iKeyRecordType;
    v3 = type == 1;
  }
  if ( v3 )
    return this->m_KeyRecord[1][slot].pKeyBuffer._Mypair._Myval2->uiDataSize >= 0xB4;
  else
    return this->m_KeyRecord[type][slot].pKeyBuffer._Mypair._Myval2->uiDataSize != 0;
}

void __fastcall BattleSystem::PlayedWidth(Fw::WEBAPI_PLAYED_WITH GameType, NET_USER_DATA *player)
{
  __int64 myNo; // rdx
  unsigned int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 steamId; // rbx
  __int64 v9; // rax
  char *Ptr; // rcx
  char *v11; // rax
  __int128 v12; // [rsp+38h] [rbp-69h]
  std::string v13; // [rsp+B8h] [rbp+17h] BYREF

  myNo = (unsigned __int8)g_NetworkManager.gamedata.myNo;
  if ( (*((_DWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 4) & 0xC0000) == 0 )
  {
    if ( GameType == PARTY )
    {
      v12 = *(_OWORD *)&g_NetworkManager.gamedata.player_data[myNo].steamId;
      v13._Mypair._Myval2._Myres = 15i64;
      v13._Mypair._Myval2._Mysize = 0i64;
      v13._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v13, &pnewText, 0i64);
      v7 = 6i64;
      do
      {
        steamId = player->steamId;
        if ( player->steamId != (_QWORD)v12 )
        {
          v9 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v6);
          (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(v9 + 16) + 256i64))(
            *(_QWORD *)(v9 + 16),
            steamId);
        }
        ++player;
        --v7;
      }
      while ( v7 );
      if ( v13._Mypair._Myval2._Myres >= 0x10 )
      {
        Ptr = v13._Mypair._Myval2._Bx._Ptr;
        if ( v13._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (v13._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v11 = (char *)*((_QWORD *)v13._Mypair._Myval2._Bx._Ptr - 1);
          if ( v11 >= v13._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(v13._Mypair._Myval2._Bx._Ptr - v11) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(v13._Mypair._Myval2._Bx._Ptr - v11) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          Ptr = (char *)*((_QWORD *)v13._Mypair._Myval2._Bx._Ptr - 1);
        }
        operator delete(Ptr);
      }
    }
    else
    {
      if ( player->steamId == g_NetworkManager.gamedata.player_data[myNo].steamId )
        v4 = *((_DWORD *)&player[1] + 3);
      else
        v4 = *((_DWORD *)player + 3);
      v13._Mypair._Myval2._Bx = *(std::_String_val<std::_Simple_types<char> >::_Bxty *)&g_NetworkManager.gamedata.player_data[(v4 >> 27) & 0xF].steamId;
      v5 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, myNo * 118);
      (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v5 + 16) + 256i64))(
        *(_QWORD *)(v5 + 16),
        v13._Mypair._Myval2._Bx._Ptr);
    }
  }
}

void __fastcall BattleSystem::BattleController::PlayerActorSetting(
        BattleSystem::BattleController *this,
        ActorChara *pActor,
        int iPlayerID,
        ActorChara *pRival)
{
  __int64 v5; // r15
  __int64 v8; // r13
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v9; // rax
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v10; // rsi
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v11; // rdi
  extension::exsound_detail::SoundBankImpl *v12; // rax
  OGLModel *v13; // rcx
  extension::AsyncStatus::Step v14; // edx
  extension::exsound_detail::SoundBankImpl *v15; // rax
  OGLModel *v16; // rcx
  extension::AsyncStatus::Step v17; // edx
  extension::exsound_detail::SoundBankImpl *v18; // rax
  OGLModel *v19; // rdx
  __int64 v20; // r12
  extension::AsyncStatus::Step v21; // edx
  extension::exsound_detail::SoundBankImpl *v22; // rax
  _BOOL8 v23; // rdx
  OGLModel *v24; // rcx
  OGLModel *pModel; // rbx
  const char *v26; // rdx
  ActorChara_vtbl *v27; // rbx
  extension::exsound_detail::SoundBankImpl *v28; // rax
  MaterialShowControl *defaultMaterialData; // rcx
  extension::AsyncStatus::Step v30; // edx
  extension::exsound_detail::SoundBankImpl *v31; // rax
  OGLModel *v32; // rdx
  float v33; // xmm0_4
  int v34; // eax
  __int64 v35; // rax
  extension::exsound_detail::SoundBankImpl *v36; // rdx
  int v37; // er15
  int v38; // edi
  __int64 v39; // r13
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *m_ptr; // rbx
  extension::exsound_detail::SoundBankImpl *Myval2; // rcx
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *v42; // rbx
  int v43; // ecx
  extension::exsound_detail::SoundBankImpl *v44; // rax
  extension::exsound_detail::PreloadedAudioSet *v45; // rbx
  BOOL v46; // edx
  const char *BoneName; // rax
  const char *v48; // r9
  const char *v49; // rax
  extension::AsyncStatus::Step v50; // edx
  OGLFigure *v51; // rax
  int v52; // er8
  extension::AsyncStatus::Step v53; // edx
  extension::exsound_detail::SoundBankImpl *v54; // rax
  OGLModel *v55; // rdx
  MaterialShowControl *v56; // rcx
  std::bitset<61>::reference *v57; // rax
  unsigned __int64 Mypos; // rdx
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *v59; // rbx
  extension::exsound_detail::SoundBankImpl *v60; // rcx
  OGLModel *v61; // rdx
  Actor *ActorWeapon; // rax
  Actor *v63; // r8
  OGLModel *v64; // rax
  MaterialShowControl *v65; // rcx
  const CharaDataUnify *v66; // rcx
  __int64 v67; // rsi
  __int64 v68; // rsi
  __int64 v69; // rdx
  ActorOption *ActorOption; // rdi
  __int64 v71; // rbx
  __int64 v72; // rcx
  OGLModel *v73; // rcx
  __int64 v74; // r14
  OGLModel *v75; // rbx
  __int64 iAssetID; // rax
  MaterialShowControl *v77; // rcx
  BattleSystem::BattleController *v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // rbx
  __int64 v83; // rcx
  __int64 v84; // rbx
  const char *v85; // rax
  __int64 v86; // rax
  MaterialShowControl *v87; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v88; // [rsp+20h] [rbp-88h]
  __int64 i; // [rsp+28h] [rbp-80h]
  __int64 v90; // [rsp+30h] [rbp-78h]
  __int64 v91; // [rsp+38h] [rbp-70h]
  __int64 v92; // [rsp+40h] [rbp-68h]
  __int64 v93; // [rsp+48h] [rbp-60h]
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v94; // [rsp+50h] [rbp-58h]
  std::bitset<61>::reference result; // [rsp+60h] [rbp-48h] BYREF
  int v96; // [rsp+B8h] [rbp+10h]
  BattleSystem::BattleController *v97; // [rsp+B8h] [rbp+10h]

  if ( pActor )
  {
    v5 = iPlayerID;
    v8 = *(_QWORD *)&AppMain::pApp;
    v90 = *(_QWORD *)&AppMain::pApp;
    if ( (unsigned int)iPlayerID <= 1 )
    {
      v9 = *(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> **)(*(_QWORD *)&AppMain::pApp
                                                                                           + 11064i64);
      if ( iPlayerID )
      {
        v10 = v9 + 3;
        v11 = v9 + 2;
      }
      else
      {
        v10 = v9 + 2;
        v11 = v9 + 3;
      }
      v88 = v11;
      v12 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
              v10,
              (extension::AsyncStatus::Step)pActor);
      if ( (int)(v12->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
               - v12->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) <= 0 )
        v13 = 0i64;
      else
        v13 = (OGLModel *)*v12->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
      OGLModel::setMotion(v13, 0);
      v15 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(v11, v14);
      if ( (int)(v15->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
               - v15->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) <= 0 )
        v16 = 0i64;
      else
        v16 = (OGLModel *)*v15->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
      OGLModel::setMotion(v16, 0);
      v18 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(v10, v17);
      if ( (int)(v18->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
               - v18->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) <= 0 )
        v19 = 0i64;
      else
        v19 = (OGLModel *)*v18->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
      v20 = v5;
      v91 = v5;
      CharaBone::CreateBoneIndex(&this->charaBoneData[v5].mainChara, v19);
      pActor->ParamInit(
        pActor,
        *(const CharaDataUnify **)(v8 + 8 * v5 + 2182544),
        *(const CharaDataUnify **)(v8 + 2182576),
        (InputKeyCheck *)(v8 + 2192432 + 8 * v5));
      pActor->pTarget = pRival;
      v22 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(v10, v21);
      if ( (int)(v22->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
               - v22->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) <= 0 )
        v24 = 0i64;
      else
        v24 = (OGLModel *)*v22->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
      pActor->pModel = v24;
      if ( v24->m_pSecondary )
        v24->m_SecondaryEnable = 1;
      pActor->pModel->m_lowAccuracyShadowBias = 1;
      pActor->pModel->m_normalMapCreateFlg = 1;
      pActor->pModel->m_createMaskFlg = 1;
      pActor->pModel->m_shadowTextureId = BattleSystem::ciShadowMapID[v5];
      pActor->iAssetID = v5;
      LOBYTE(v23) = 1;
      pActor->EnableFollowBone(pActor, v23);
      pModel = pActor->pModel;
      v26 = "C_Hips";
      if ( "C_Hips" )
        pModel->m_iMirrorBaseBoneNo = OGLModel::searchMotionBoneFromName(pActor->pModel, "C_Hips");
      else
        pModel->m_iMirrorBaseBoneNo = -1;
      pActor->pCharaBone = &this->charaBoneData[v5].mainChara;
      v94 = (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(v8 + 2182584);
      v27 = pActor->ActorCharaBase::ActorObject::Actor::__vftable;
      v28 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
              (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(v8 + 2182584),
              (extension::AsyncStatus::Step)v26);
      v27->SetOffsetScaleFigure(pActor, (OGLFigure *)v28);
      defaultMaterialData = this->actSystem.defaultMaterialData;
      if ( (int)v5 < 4 )
        defaultMaterialData += v5;
      MaterialShowControl::CreateMaterialIndex(
        defaultMaterialData,
        0,
        pActor->pModel,
        *(const CharaMaterialSetting **)(*(_QWORD *)(v8 + 8 * v5 + 2182544) + 96i64));
      v31 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(v11, v30);
      if ( (int)(v31->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
               - v31->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) <= 0 )
        v32 = 0i64;
      else
        v32 = (OGLModel *)*v31->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
      OGLModel::createExternalIndex(pActor->pModel, v32);
      if ( this->restartPosition == COUNTER_HIT )
      {
        v33 = ActionSystem::cfPlayerInitialPosX[0][v5];
      }
      else if ( this->restartPosition == REVERSAL )
      {
        v33 = ActionSystem::cfPlayerInitialPosX[2][v5];
      }
      else
      {
        v33 = ActionSystem::cfPlayerInitialPosX[1][v5];
      }
      pActor->vPos.x = v33;
      v34 = v5 != 0;
      pActor->iCAngle = v34;
      pActor->iCAngleBuf = v34;
      pActor->iPlayerID = v5;
      pActor->iCharNo = BattleSystem::BattlePlayerInfo::GetBattleBaseCharaNo(&this->playerInfo[v5]);
      v96 = v5 + 2;
      pActor->iDrawPri = v5 + 2;
      pActor->SetupAction(pActor, 0, 0);
      BattleSystem::BattleController::GetActionSystem();
      if ( (int)v5 < 4 )
        *(_QWORD *)(v35 + 8 * v5 + 237232) = pActor;
      BattleSystem::BattlePlayerInfo::RoundInit(&this->playerInfo[v5], pActor, this->battleInfo.iRoundCount == 0);
      v37 = 1;
      v38 = 1;
      v93 = 8i64;
      v39 = 1i64;
      v92 = 4i64;
      for ( i = 4i64; ; i += 4i64 )
      {
        m_ptr = v10->m_body.m_ptr->m_content.m_ptr;
        if ( !m_ptr || m_ptr->m_isDataReleased )
        {
          Myval2 = 0i64;
        }
        else
        {
          if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&m_ptr->m_status, (extension::AsyncStatus::Step)v36);
          Myval2 = m_ptr->m_data._Mypair._Myval2;
        }
        if ( v38 >= (int)(Myval2->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
                        - Myval2->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) )
          break;
        v42 = v10->m_body.m_ptr->m_content.m_ptr;
        if ( !v42 || v42->m_isDataReleased )
        {
          v36 = 0i64;
        }
        else
        {
          if ( (v42->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v42->m_status, (extension::AsyncStatus::Step)v36);
          v36 = v42->m_data._Mypair._Myval2;
        }
        if ( v38 >= 0
          && v38 < (unsigned __int64)((__int64)(v36[1].m_bankFileDir._Mypair._Myval2._Myres
                                              - v36[1].m_bankFileDir._Mypair._Myval2._Mysize) >> 2)
          && (v43 = *(_DWORD *)(i + v36[1].m_bankFileDir._Mypair._Myval2._Mysize), ((v43 + 1) & 0xFFFFFFFD) != 0) )
        {
          if ( v43 == 2 )
          {
            v44 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                    v10,
                    (extension::AsyncStatus::Step)v36);
            v45 = v38 >= (int)(v44->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
                             - v44->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) ? 0i64 : v44->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast[v39];
            if ( v45 )
            {
              OGLModel::setMotion((OGLModel *)v45, 0);
              if ( v45[12].m_loadedCheckIt._Ptr )
                BYTE1(v45[12].m_data._Mypair._Myval2._Myend) = 1;
              WORD2(v45[185].m_data._Mypair._Myval2._Mylast) = 257;
              BYTE3(v45[185].m_data._Mypair._Myval2._Mylast) = 1;
              HIDWORD(v45[185].m_data._Mypair._Myval2._Myend) = BattleSystem::ciShadowMapID[v20];
              CharaBone::GetBoneName(HIP_FOLLOW, 0);
              BoneName = CharaBone::GetBoneName((CharaBone::NAME_INDEX)(v46 + 16), v46);
              OGLModel::setFollowBone((OGLModel *)v45, BoneName, v48);
              v49 = CharaBone::GetBoneName(C_HIPS, 0);
              if ( v49 )
                LODWORD(v45[180].m_data._Mypair._Myval2._Myfirst) = OGLModel::searchMotionBoneFromName(
                                                                      (OGLModel *)v45,
                                                                      v49);
              else
                LODWORD(v45[180].m_data._Mypair._Myval2._Myfirst) = -1;
              v51 = (OGLFigure *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(v94, v50);
              OGLModel::setOffsetScaleInit((OGLModel *)v45, v51, v52);
              if ( v45[7].m_data._Mypair._Myval2._Mylast )
              {
                BYTE4(v45[176].m_loadedCheckIt._Ptr) = 0;
                HIDWORD(v45[177].m_refCount.m_value._My_val) = -1;
                HIDWORD(v45[177].m_data._Mypair._Myval2._Myfirst) = 1065353216;
              }
              v54 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(v88, v53);
              if ( (int)(v54->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
                       - v54->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) <= 0 )
                v55 = 0i64;
              else
                v55 = (OGLModel *)*v54->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
              OGLModel::createExternalIndex((OGLModel *)v45, v55);
              OGLModel::createFigureIndex((OGLModel *)v45, pActor->pModel);
              v56 = this->actSystem.defaultMaterialData;
              if ( iPlayerID < 4 )
                v56 += v20;
              MaterialShowControl::CreateMaterialIndex(
                v56,
                v38,
                (OGLModel *)v45,
                *(const CharaMaterialSetting **)(*(_QWORD *)(v90 + 8 * v20 + 2182544) + 96i64));
              v57 = std::bitset<21>::operator[]((std::bitset<61> *)&pActor->systemFlag, &result, 0x3Aui64);
              Mypos = v57->_Mypos;
              if ( Mypos >= 0x3E )
                std::_Xout_of_range("invalid bitset<N> position");
              v57->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (v57->_Mypos & 0x3F);
              CharaBone::CreateBoneIndex(&this->charaBoneData[v91].extendChara, (OGLModel *)v45);
            }
          }
        }
        else
        {
          v59 = v10->m_body.m_ptr->m_content.m_ptr;
          if ( !v59 || v59->m_isDataReleased )
          {
            v60 = 0i64;
          }
          else
          {
            if ( (v59->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&v59->m_status, (extension::AsyncStatus::Step)v36);
            v60 = v59->m_data._Mypair._Myval2;
          }
          if ( v38 < 0
            || v38 >= (int)(v60->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
                          - v60->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) )
          {
            v61 = 0i64;
          }
          else
          {
            v61 = (OGLModel *)v60->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast[v39];
          }
          ActorWeapon = ActorWeapon::CreateActorWeapon(pActor, v61, v38);
          v63 = ActorWeapon;
          if ( ActorWeapon )
          {
            v64 = ActorWeapon->pModel;
            if ( v64->m_pSecondary )
              v64->m_SecondaryEnable = 1;
            v63->pModel->m_normalMapCreateFlg = 1;
            v63->pModel->m_createMaskFlg = 1;
            v63->pModel->m_shadowTextureId = BattleSystem::ciShadowMapID[v20];
            v63->pModel->m_lowAccuracyShadowBias = 1;
            v65 = this->actSystem.defaultMaterialData;
            if ( iPlayerID < 4 )
              v65 += v20;
            MaterialShowControl::CreateMaterialIndex(
              v65,
              v38,
              v63->pModel,
              *(const CharaMaterialSetting **)(*(_QWORD *)(v90 + 8 * v20 + 2182544) + 96i64));
          }
        }
        ++v38;
        ++v39;
      }
      v66 = *(const CharaDataUnify **)(v90 + 8 * v20 + 2182560);
      if ( v66 )
      {
        v67 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64);
        if ( iPlayerID )
          v68 = v67 + 80;
        else
          v68 = v67 + 64;
        ActorOption = ActorOption::CreateActorOption(v66, pActor);
        if ( ActorOption )
        {
          v71 = *(_QWORD *)(*(_QWORD *)(v68 + 8) + 16i64);
          if ( !v71 || *(_BYTE *)(v71 + 96) )
          {
            v72 = 0i64;
          }
          else
          {
            if ( (*(_QWORD *)(v71 + 88) & 1) == 0 )
              extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v71 + 88), (extension::AsyncStatus::Step)v69);
            v72 = *(_QWORD *)(v71 + 72);
          }
          if ( (int)((__int64)(*(_QWORD *)(v72 + 208) - *(_QWORD *)(v72 + 200)) >> 3) <= 0 )
            v73 = 0i64;
          else
            v73 = **(OGLModel ***)(v72 + 200);
          ActorOption->pModel = v73;
          v73->m_normalMapCreateFlg = 1;
          ActorOption->pModel->m_createMaskFlg = 1;
          ActorOption->pModel->m_shadowTextureId = BattleSystem::ciShadowMapID[v20];
          v74 = v96;
          ActorOption->iAssetID = v96;
          LOBYTE(v69) = 1;
          ActorOption->EnableFollowBone(ActorOption, v69);
          v75 = ActorOption->pModel;
          if ( "C_Hips" )
            v75->m_iMirrorBaseBoneNo = OGLModel::searchMotionBoneFromName(ActorOption->pModel, "C_Hips");
          else
            v75->m_iMirrorBaseBoneNo = -1;
          CharaBone::CreateBoneIndex(&this->charaBoneData[v91].optionChara, ActorOption->pModel);
          ActorOption->pCharaBone = &this->charaBoneData[v91].optionChara;
          iAssetID = ActorOption->iAssetID;
          if ( (unsigned int)iAssetID > 3 )
            v77 = this->actSystem.defaultMaterialData;
          else
            v77 = &this->actSystem.defaultMaterialData[iAssetID];
          MaterialShowControl::CreateMaterialIndex(
            v77,
            0,
            ActorOption->pModel,
            *(const CharaMaterialSetting **)(*(_QWORD *)(v90 + 8 * v20 + 2182560) + 96i64));
          ActorOption->SetupAction(ActorOption, 0, 0);
          v78 = BattleSystem::BattleController::instance;
          if ( !BattleSystem::BattleController::instance )
          {
            v97 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
            BattleSystem::BattleController::BattleController(v97);
            BattleSystem::BattleController::instance = v78;
          }
          if ( (unsigned int)v74 <= 3 )
            v78->actSystem.pDrawActor[v74] = ActorOption;
        }
        while ( 1 )
        {
          v79 = *(_QWORD *)(*(_QWORD *)(v68 + 8) + 16i64);
          if ( !v79 || *(_BYTE *)(v79 + 96) )
          {
            v80 = 0i64;
          }
          else
          {
            if ( (*(_QWORD *)(v79 + 88) & 1) == 0 )
              extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v79 + 88), (extension::AsyncStatus::Step)v69);
            v80 = *(_QWORD *)(v79 + 72);
          }
          if ( v37 >= (int)((__int64)(*(_QWORD *)(v80 + 208) - *(_QWORD *)(v80 + 200)) >> 3) )
            break;
          v81 = *(_QWORD *)(*(_QWORD *)(v68 + 8) + 16i64);
          if ( !v81 || *(_BYTE *)(v81 + 96) )
          {
            v69 = 0i64;
          }
          else
          {
            if ( (*(_QWORD *)(v81 + 88) & 1) == 0 )
              extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v81 + 88), (extension::AsyncStatus::Step)v69);
            v69 = *(_QWORD *)(v81 + 72);
          }
          if ( v37 >= 0
            && v37 < (unsigned __int64)((__int64)(*(_QWORD *)(v69 + 240) - *(_QWORD *)(v69 + 232)) >> 2)
            && *(_DWORD *)(v92 + *(_QWORD *)(v69 + 232)) == 3 )
          {
            v82 = *(_QWORD *)(*(_QWORD *)(v68 + 8) + 16i64);
            if ( !v82 || *(_BYTE *)(v82 + 96) )
            {
              v83 = 0i64;
            }
            else
            {
              if ( (*(_QWORD *)(v82 + 88) & 1) == 0 )
                extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v82 + 88), (extension::AsyncStatus::Step)v69);
              v83 = *(_QWORD *)(v82 + 72);
            }
            if ( v37 >= (int)((__int64)(*(_QWORD *)(v83 + 208) - *(_QWORD *)(v83 + 200)) >> 3) )
              v84 = 0i64;
            else
              v84 = *(_QWORD *)(v93 + *(_QWORD *)(v83 + 200));
            if ( v84 )
            {
              OGLModel::setMotion((OGLModel *)v84, 0);
              *(_WORD *)(v84 + 8907) = 257;
              *(_DWORD *)(v84 + 8916) = BattleSystem::ciShadowMapID[v20];
              v85 = CharaBone::GetBoneName(C_HIPS, 0);
              if ( v85 )
                *(_DWORD *)(v84 + 8656) = OGLModel::searchMotionBoneFromName((OGLModel *)v84, v85);
              else
                *(_DWORD *)(v84 + 8656) = -1;
              if ( ActorOption )
              {
                ActorOption->bExistExtraModel = 1;
                v86 = ActorOption->iAssetID;
                if ( (unsigned int)v86 > 3 )
                  v87 = this->actSystem.defaultMaterialData;
                else
                  v87 = &this->actSystem.defaultMaterialData[v86];
                MaterialShowControl::CreateMaterialIndex(
                  v87,
                  v37,
                  (OGLModel *)v84,
                  *(const CharaMaterialSetting **)(*(_QWORD *)(v90 + 8 * v20 + 2182560) + 96i64));
              }
              CharaBone::CreateBoneIndex(&this->charaBoneData[v91].extendChara, (OGLModel *)v84);
            }
          }
          ++v37;
          v92 += 4i64;
          v93 += 8i64;
        }
      }
    }
  }
}

void __fastcall BattleSystem::BattleController::KeyRecordInfo::Reset(
        BattleSystem::BattleController::KeyRecordInfo *this)
{
  int v1; // er10
  std::bitset<61> *enableKeyPlaySlot; // rcx
  std::bitset<61>::reference *v3; // rax
  __int64 v4; // rcx
  std::bitset<61> *v5; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v1 = 0;
  this->iKeyRecordType = 0;
  this->iKeyRecordSlot = 1;
  this->iKeyPlaySlot = -1;
  this->reversalType = ALL;
  enableKeyPlaySlot = (std::bitset<61> *)this->enableKeyPlaySlot;
  if ( enableKeyPlaySlot != &enableKeyPlaySlot[1] )
  {
    do
    {
      LODWORD(enableKeyPlaySlot->_Array[0]) = v1;
      v3 = std::bitset<21>::operator[](enableKeyPlaySlot, &result, 1ui64);
      Mypos = v3->_Mypos;
      if ( Mypos >= 6 )
        std::_Xout_of_range("invalid bitset<N> position");
      *((_DWORD *)v3->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (v3->_Mypos & 0x1F);
      enableKeyPlaySlot = (std::bitset<61> *)(v4 + 4);
    }
    while ( enableKeyPlaySlot != v5 );
  }
}

void __fastcall BattleSystem::BattleController::ResetKeyPlayCountAll(BattleSystem::BattleController *this)
{
  InputKeyRecord (*m_KeyRecord)[6]; // rax
  BattleSystem::BattleController::MISSION_SAMPLE_MODE *p_missionSampleMode; // rdx
  InputKeyRecord (*i)[6]; // rcx

  m_KeyRecord = this->m_KeyRecord;
  p_missionSampleMode = &this->missionSampleMode;
  this->keyRecordMode = STOP;
  if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
  {
    do
    {
      for ( i = m_KeyRecord + 1; m_KeyRecord != i; m_KeyRecord = (InputKeyRecord (*)[6])((char *)m_KeyRecord + 16) )
        (*m_KeyRecord)[0].uiPlayCount = 0;
      m_KeyRecord = i;
    }
    while ( i != (InputKeyRecord (*)[6])p_missionSampleMode );
  }
}

void __fastcall BattleSystem::BattleController::ResetKeyRecordAll(BattleSystem::BattleController *this)
{
  InputKeyRecord (*m_KeyRecord)[6]; // rax
  BattleSystem::BattleController::MISSION_SAMPLE_MODE *p_missionSampleMode; // r8
  InputKeyRecord (*i)[6]; // rdx
  RestrictRingBuffer<InputKeyRecord::RecordKey> *Myval2; // rcx

  m_KeyRecord = this->m_KeyRecord;
  p_missionSampleMode = &this->missionSampleMode;
  this->keyRecordMode = STOP;
  if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
  {
    do
    {
      for ( i = m_KeyRecord + 1; m_KeyRecord != i; m_KeyRecord = (InputKeyRecord (*)[6])((char *)m_KeyRecord + 16) )
      {
        Myval2 = (*m_KeyRecord)[0].pKeyBuffer._Mypair._Myval2;
        Myval2->uiDataSize = 0;
        *(_QWORD *)&Myval2->uiBeginIndex = 0i64;
        (*m_KeyRecord)[0].uiPlayCount = 0;
      }
      m_KeyRecord = i;
    }
    while ( i != (InputKeyRecord (*)[6])p_missionSampleMode );
  }
}

void __fastcall BattleSystem::BattleController::ResultInit(BattleSystem::BattleController *this)
{
  __int64 v2; // r8
  EffectDataListManager **v3; // rsi
  EffectDataListManager **pEffectMgr; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  BattleSystem::BattleController::CharaBoneData *charaBoneData; // rsi
  float v28; // xmm0_4
  float v29; // xmm5_4
  float v30; // xmm2_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  bool v33; // zf
  _BOOL8 v34; // rbp
  ActorChara *v35; // rax
  ActorChara **pActor; // r14
  int v37; // esi
  ActorChara **v38; // r15
  int i; // esi
  __int64 *v40; // rax
  int v41; // ecx
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // r8
  GameDataInfo *v49; // rcx
  OGLMatrix v50; // [rsp+20h] [rbp-B8h] BYREF

  if ( this->resultMember.battleWinnerID == REVERSAL )
  {
    *(_QWORD *)&this->roundPhase = 16i64;
  }
  else
  {
    v2 = 5i64;
    pEffectMgr = this->actSystem.pEffectMgr;
    v3 = pEffectMgr;
    if ( v3 > v3 + 5 )
      v2 = 0i64;
    v5 = 0i64;
    if ( pEffectMgr <= pEffectMgr + 5 )
    {
      do
      {
        ++v5;
        *pEffectMgr++ = 0i64;
      }
      while ( v5 != v2 );
    }
    v6 = *(_QWORD *)&AppMain::pApp;
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 24i64);
    v8 = *(_QWORD *)(v7 + 16);
    if ( v8 && !*(_BYTE *)(v8 + 96) )
    {
      v9 = *(_QWORD *)(v7 + 16);
      if ( *(_BYTE *)(v8 + 96) )
      {
        v10 = 0i64;
      }
      else
      {
        if ( (*(_QWORD *)(v8 + 88) & 1) == 0 )
          extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v8 + 88), (extension::AsyncStatus::Step)v5);
        v10 = *(_QWORD *)(v9 + 72);
        v6 = *(_QWORD *)&AppMain::pApp;
      }
      *v3 = *(EffectDataListManager **)(v10 + 224);
    }
    v11 = *(_QWORD *)(*(_QWORD *)(v6 + 11064) + 40i64);
    v12 = *(_QWORD *)(v11 + 16);
    if ( v12 && !*(_BYTE *)(v12 + 96) )
    {
      v13 = *(_QWORD *)(v11 + 16);
      if ( *(_BYTE *)(v12 + 96) )
      {
        v14 = 0i64;
      }
      else
      {
        if ( (*(_QWORD *)(v12 + 88) & 1) == 0 )
          extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v12 + 88), (extension::AsyncStatus::Step)v5);
        v14 = *(_QWORD *)(v13 + 72);
        v6 = *(_QWORD *)&AppMain::pApp;
      }
      this->actSystem.pEffectMgr[1] = *(EffectDataListManager **)(v14 + 224);
    }
    v15 = *(_QWORD *)(*(_QWORD *)(v6 + 11064) + 56i64);
    v16 = *(_QWORD *)(v15 + 16);
    if ( v16 && !*(_BYTE *)(v16 + 96) )
    {
      v17 = *(_QWORD *)(v15 + 16);
      if ( *(_BYTE *)(v16 + 96) )
      {
        v18 = 0i64;
      }
      else
      {
        if ( (*(_QWORD *)(v16 + 88) & 1) == 0 )
          extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v16 + 88), (extension::AsyncStatus::Step)v5);
        v18 = *(_QWORD *)(v17 + 72);
        v6 = *(_QWORD *)&AppMain::pApp;
      }
      this->actSystem.pEffectMgr[2] = *(EffectDataListManager **)(v18 + 224);
    }
    v19 = *(_QWORD *)(*(_QWORD *)(v6 + 11064) + 72i64);
    v20 = *(_QWORD *)(v19 + 16);
    if ( v20 && !*(_BYTE *)(v20 + 96) )
    {
      v21 = *(_QWORD *)(v19 + 16);
      if ( *(_BYTE *)(v20 + 96) )
      {
        v22 = 0i64;
      }
      else
      {
        if ( (*(_QWORD *)(v20 + 88) & 1) == 0 )
          extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v20 + 88), (extension::AsyncStatus::Step)v5);
        v22 = *(_QWORD *)(v21 + 72);
        v6 = *(_QWORD *)&AppMain::pApp;
      }
      this->actSystem.pEffectMgr[3] = *(EffectDataListManager **)(v22 + 224);
    }
    v23 = *(_QWORD *)(*(_QWORD *)(v6 + 11064) + 88i64);
    v24 = *(_QWORD *)(v23 + 16);
    if ( v24 && !*(_BYTE *)(v24 + 96) )
    {
      v25 = *(_QWORD *)(v23 + 16);
      if ( *(_BYTE *)(v24 + 96) )
      {
        v26 = 0i64;
      }
      else
      {
        if ( (*(_QWORD *)(v24 + 88) & 1) == 0 )
          extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v24 + 88), (extension::AsyncStatus::Step)v5);
        v26 = *(_QWORD *)(v25 + 72);
      }
      this->actSystem.pEffectMgr[4] = *(EffectDataListManager **)(v26 + 224);
    }
    ActionSystem::SystemInit(&this->actSystem);
    this->actSystem.bFreeCameraMode = 1;
    this->actSystem.freeCamera.fProjBlendBase = 0.0;
    *(_OWORD *)this->actSystem.freeCamera.mView.m = *(_OWORD *)BattleSystem::resultCameraView;
    this->actSystem.freeCamera.bNoUpdate = 1;
    *(_OWORD *)this->actSystem.freeCamera.mProj.m = *(_OWORD *)BattleSystem::resultCameraProj;
    *(_OWORD *)this->actSystem.freeCamera.mBillboard.m = *(_OWORD *)BattleSystem::resultCameraBillboard;
    *(_OWORD *)&this->actSystem.freeCamera.mView.m[4] = *(_OWORD *)&BattleSystem::resultCameraView[4];
    *(_OWORD *)&this->actSystem.freeCamera.mProj.m[4] = *(_OWORD *)&BattleSystem::resultCameraProj[4];
    *(_OWORD *)&this->actSystem.freeCamera.mBillboard.m[4] = *(_OWORD *)&BattleSystem::resultCameraBillboard[4];
    *(_OWORD *)&this->actSystem.freeCamera.mView.m[8] = *(_OWORD *)&BattleSystem::resultCameraView[8];
    *(_OWORD *)&this->actSystem.freeCamera.mProj.m[8] = *(_OWORD *)&BattleSystem::resultCameraProj[8];
    *(_OWORD *)&this->actSystem.freeCamera.mBillboard.m[8] = *(_OWORD *)&BattleSystem::resultCameraBillboard[8];
    *(_OWORD *)&this->actSystem.freeCamera.mView.m[12] = *(_OWORD *)&BattleSystem::resultCameraView[12];
    *(_OWORD *)&this->actSystem.freeCamera.mProj.m[12] = *(_OWORD *)&BattleSystem::resultCameraProj[12];
    *(_OWORD *)&this->actSystem.freeCamera.mBillboard.m[12] = *(_OWORD *)&BattleSystem::resultCameraBillboard[12];
    v50 = *(OGLMatrix *)BattleSystem::resultCameraView;
    OGLMatrix::inverse(&v50);
    charaBoneData = this->charaBoneData;
    v28 = v50.m[13];
    v29 = v50.m[12];
    v30 = v50.m[14];
    this->actSystem.freeCamera.vPos.z = v50.m[14];
    this->actSystem.freeCamera.vPos.y = v28;
    this->actSystem.freeCamera.vPos.x = v29;
    v31 = v30 - this->actSystem.freeCamera.mView.m[10];
    v32 = v28 - this->actSystem.freeCamera.mView.m[6];
    this->actSystem.freeCamera.vLook.x = v29 - this->actSystem.freeCamera.mView.m[2];
    this->actSystem.freeCamera.vLook.z = v31;
    this->actSystem.freeCamera.vLook.y = v32;
    this->actSystem.freeCamera.vUp.x = 0.0;
    for ( *(_QWORD *)&this->actSystem.freeCamera.vUp.y = 1065353216i64;
          charaBoneData != (BattleSystem::BattleController::CharaBoneData *)&this->successiveBattleTakeOverInfo;
          ++charaBoneData )
    {
      BattleSystem::BattleController::CharaBoneData::Clear(charaBoneData);
    }
    v33 = this->resultMember.battleWinnerID == COUNTER_HIT;
    *(_QWORD *)&this->uiRoundPhaseFrame = 0i64;
    this->bAkebonoKO = 0;
    this->roundPhase = WALL|DIE;
    v34 = !v33;
    v35 = (ActorChara *)ActionSystem::Entry(&this->actSystem, CHARA, 2);
    this->actSystem.pPlayer[v34] = v35;
    pActor = this->resultMember.pActor;
    this->resultMember.pActor[0] = v35;
    if ( v35 )
    {
      v37 = 1;
      if ( this->resultMember.iMemberCount > 1 )
      {
        v38 = &this->resultMember.pActor[1];
        do
        {
          *v38++ = (ActorChara *)ActionSystem::Entry(&this->actSystem, CHARA, 3);
          ++v37;
        }
        while ( v37 < this->resultMember.iMemberCount );
      }
      for ( i = 0; i < this->resultMember.iMemberCount; ++pActor )
        BattleSystem::BattleController::ResultPlayerActorSetting(
          this,
          *pActor,
          v34,
          (BattleSystem::RESULT_CHARA_PART::ID)i++);
      v40 = (__int64 *)NtCurrentTeb()->Reserved1[11];
      v41 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      v42 = *v40;
      if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v40 + 40) )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        v41 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          v41 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
        }
      }
      if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] != GAME_MODE_VERSUS )
        goto LABEL_64;
      if ( v41 > *(_DWORD *)(v42 + 40) )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v49);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        }
      }
      if ( `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
      {
LABEL_64:
        v43 = *(_QWORD *)&AppMain::pApp;
      }
      else
      {
        v43 = *(_QWORD *)&AppMain::pApp;
        v44 = *(unsigned int *)(*(_QWORD *)&AppMain::pApp + 2205228i64) + 1i64;
        if ( v44 < 0 )
        {
          *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205228i64) = 0;
        }
        else if ( v44 >= 0xFFFFFFFFi64 )
        {
          *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205228i64) = -1;
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205228i64) = v44;
        }
      }
      v45 = 2384i64;
      v46 = 16i64;
      do
      {
        v47 = *(int *)(v43 + v45 + 2202852);
        if ( (int)v47 > 0 )
        {
          v48 = v47 + *(unsigned int *)(v43 + v45 + 2202784);
          if ( v48 < 0 )
          {
            *(_DWORD *)(v43 + v45 + 2202784) = 0;
          }
          else if ( v48 >= 0xFFFFFFFFi64 )
          {
            *(_DWORD *)(v43 + v45 + 2202784) = -1;
          }
          else
          {
            *(_DWORD *)(v43 + v45 + 2202784) = v48;
          }
          *(_DWORD *)(v43 + v45 + 2202852) = -1;
        }
        v45 += 4i64;
        --v46;
      }
      while ( v46 );
    }
  }
}

void __fastcall BattleSystem::BattleController::ResultPlayerActorSetting(
        BattleSystem::BattleController *this,
        ActorChara *pActor,
        int iPlayerID,
        BattleSystem::RESULT_CHARA_PART::ID partType)
{
  OGLModel *v4; // rdi
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *v6; // rax
  extension::AsyncStatus::Step v7; // edx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v8; // r15
  int v9; // esi
  extension::exsound_detail::SoundBankImpl *v10; // rax
  OGLModel *v11; // rcx
  extension::AsyncStatus::Step v12; // edx
  extension::exsound_detail::SoundBankImpl *v13; // rax
  OGLModel *v14; // rcx
  int *v15; // rdx
  int v16; // eax
  const char *v17; // rdx
  OGLModel *pModel; // rbx
  extension::exsound_detail::SoundBankImpl *v19; // rax
  BattleSystem::BattleController::CharaBoneData *p_optionChara; // rbx
  OGLModel *v21; // rdx
  extension::exsound_detail::SoundBankImpl *v22; // rax
  CharaBone *p_mainChara; // rbx
  ActorCharaBase_vtbl *v24; // rbx
  extension::AsyncStatus::Step v25; // edx
  extension::exsound_detail::SoundBankImpl *v26; // rax
  ActorCharaBase *v27; // rdx
  __int64 v28; // rcx
  int BaseCharaID; // eax
  BattleSystem::BattleController *v30; // rcx
  _BOOL8 v31; // rdx
  extension::exsound_detail::SoundBankImpl *v32; // rdx
  int v33; // ebx
  __int64 v34; // r12
  __int64 i; // r13
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *m_ptr; // rsi
  extension::exsound_detail::SoundBankImpl *Myval2; // rcx
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *v38; // rsi
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *v39; // rsi
  extension::exsound_detail::SoundBankImpl *v40; // rcx
  OGLModel *v41; // rdx
  Actor *ActorWeapon; // rax
  Actor *v43; // r8
  OGLModel *v44; // rax
  BattleSystem::BattleController *v45; // rcx
  const CharaDataUnify *v46; // rcx
  __int64 v47; // rsi
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v48; // rsi
  extension::AsyncStatus::Step v49; // edx
  ActorOption *ActorOption; // rbx
  extension::exsound_detail::SoundBankImpl *v51; // rax
  unsigned __int64 v52; // rdx
  OGLModel *v53; // rdi
  __int64 iAssetID; // rax
  BattleSystem::BattleController *v55; // rcx
  _BOOL8 v56; // rdx
  unsigned int v57; // [rsp+28h] [rbp-29h] BYREF
  __int64 v58; // [rsp+30h] [rbp-21h] BYREF
  __int64 v59; // [rsp+38h] [rbp-19h] BYREF
  int *v60; // [rsp+40h] [rbp-11h]
  int *v61[6]; // [rsp+48h] [rbp-9h] BYREF
  ActorCharaBase *pOwner; // [rsp+C0h] [rbp+6Fh] BYREF
  int v63; // [rsp+C8h] [rbp+77h] BYREF
  int v64; // [rsp+D0h] [rbp+7Fh] BYREF

  if ( pActor )
  {
    v64 = partType;
    v63 = iPlayerID;
    pOwner = pActor;
    v4 = 0i64;
    v59 = *(_QWORD *)&AppMain::pApp;
    v58 = 0i64;
    v57 = 0;
    if ( (unsigned int)iPlayerID <= 1 )
    {
      v61[0] = &v64;
      v61[1] = (int *)&v58;
      v61[2] = (int *)&v59;
      v61[3] = &v63;
      v61[4] = (int *)&v57;
      v61[5] = (int *)&pOwner;
      v6 = lambda_61f3453c215ee27b58ca0b7ede976f4e_::operator()(v61);
      v8 = (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)v6;
      v9 = v63;
      if ( v64 )
        v9 = v63 == 0;
      v10 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
              (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)v6,
              v7);
      if ( (int)(v10->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
               - v10->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) <= 0 )
        v11 = 0i64;
      else
        v11 = (OGLModel *)*v10->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
      OGLModel::setMotion(v11, 0);
      ((void (__fastcall *)(ActorCharaBase *, __int64, _QWORD, __int64))pOwner->__vftable[1]._branchIsAttackHit)(
        pOwner,
        v58,
        *(_QWORD *)(v59 + 2182576),
        v59 + 8 * (v63 + 274054i64));
      pOwner->pTarget = 0i64;
      v13 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(v8, v12);
      if ( (int)(v13->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
               - v13->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) <= 0 )
        v14 = 0i64;
      else
        v14 = (OGLModel *)*v13->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
      pOwner->pModel = v14;
      if ( v14->m_pSecondary )
        v14->m_SecondaryEnable = 1;
      v15 = (int *)&BattleSystem::ciShadowMapID[v9];
      v60 = v15;
      pOwner->pModel->m_lowAccuracyShadowBias = 1;
      pOwner->pModel->m_normalMapCreateFlg = 1;
      pOwner->pModel->m_createMaskFlg = 0;
      v16 = *v15;
      LOBYTE(v15) = 1;
      pOwner->pModel->m_shadowTextureId = v16;
      pOwner->iAssetID = v57;
      pOwner->EnableFollowBone(pOwner, (bool)v15);
      v17 = "C_Hips";
      pModel = pOwner->pModel;
      if ( "C_Hips" )
        pModel->m_iMirrorBaseBoneNo = OGLModel::searchMotionBoneFromName(pOwner->pModel, "C_Hips");
      else
        pModel->m_iMirrorBaseBoneNo = -1;
      if ( v64 == 2 )
      {
        v19 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                v8,
                (extension::AsyncStatus::Step)v17);
        if ( (int)(v19->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
                 - v19->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) <= 0 )
        {
          v21 = 0i64;
          p_optionChara = (BattleSystem::BattleController::CharaBoneData *)&this->charaBoneData[0].optionChara;
        }
        else
        {
          p_optionChara = (BattleSystem::BattleController::CharaBoneData *)&this->charaBoneData[0].optionChara;
          v21 = (OGLModel *)*v19->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
        }
      }
      else
      {
        v22 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                v8,
                (extension::AsyncStatus::Step)v17);
        if ( (int)(v22->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
                 - v22->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) <= 0 )
          v21 = 0i64;
        else
          v21 = (OGLModel *)*v22->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
        p_optionChara = this->charaBoneData;
      }
      p_mainChara = &p_optionChara[v9].mainChara;
      CharaBone::CreateBoneIndex(p_mainChara, v21);
      pOwner->pCharaBone = p_mainChara;
      v24 = pOwner->__vftable;
      v26 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
              (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(v59 + 2182584),
              v25);
      v24->SetOffsetScaleFigure(pOwner, (OGLFigure *)v26);
      v27 = pOwner;
      v28 = v64;
      *(_QWORD *)&pOwner->vPos.x = *(_QWORD *)&BattleSystem::resultPosition[v28].startPos.x;
      v27->vPos.z = BattleSystem::resultPosition[v28].startPos.z;
      pOwner->vBasePos = pOwner->vPos;
      pOwner->iCAngle = 0;
      pOwner->iCAngleBuf = pOwner->iCAngle;
      pOwner->iPlayerID = v63;
      BaseCharaID = CharaProjectData::GetBaseCharaID(*(CharaProjectData **)(v58 + 16), *(_DWORD *)v58);
      pOwner->iCharNo = BaseCharaID;
      if ( !v64 || v64 == 1 || v64 == 2 )
        pOwner->iDrawPri = (v9 != 0) + 2;
      if ( v57 > 3 )
        v30 = this;
      else
        v30 = (BattleSystem::BattleController *)((char *)this + 1240 * (int)v57);
      MaterialShowControl::CreateMaterialIndex(
        v30->actSystem.defaultMaterialData,
        0,
        pOwner->pModel,
        *(const CharaMaterialSetting **)(v58 + 96));
      LOBYTE(v31) = 1;
      pOwner->SetupAction(pOwner, v31, v64);
      v33 = 1;
      v34 = 1i64;
      for ( i = 4i64; ; i += 4i64 )
      {
        m_ptr = v8->m_body.m_ptr->m_content.m_ptr;
        if ( !m_ptr || m_ptr->m_isDataReleased )
        {
          Myval2 = 0i64;
        }
        else
        {
          if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&m_ptr->m_status, (extension::AsyncStatus::Step)v32);
          Myval2 = m_ptr->m_data._Mypair._Myval2;
        }
        if ( v33 >= (int)(Myval2->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
                        - Myval2->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) )
          break;
        v38 = v8->m_body.m_ptr->m_content.m_ptr;
        if ( !v38 || v38->m_isDataReleased )
        {
          v32 = 0i64;
        }
        else
        {
          if ( (v38->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v38->m_status, (extension::AsyncStatus::Step)v32);
          v32 = v38->m_data._Mypair._Myval2;
        }
        if ( v33 < 0
          || v33 >= (unsigned __int64)((__int64)(v32[1].m_bankFileDir._Mypair._Myval2._Myres
                                               - v32[1].m_bankFileDir._Mypair._Myval2._Mysize) >> 2)
          || ((*(_DWORD *)(v32[1].m_bankFileDir._Mypair._Myval2._Mysize + i) + 1) & 0xFFFFFFFD) == 0 )
        {
          v39 = v8->m_body.m_ptr->m_content.m_ptr;
          if ( !v39 || v39->m_isDataReleased )
          {
            v40 = 0i64;
          }
          else
          {
            if ( (v39->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&v39->m_status, (extension::AsyncStatus::Step)v32);
            v40 = v39->m_data._Mypair._Myval2;
          }
          if ( v33 < 0
            || v33 >= (int)(v40->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
                          - v40->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) )
          {
            v41 = 0i64;
          }
          else
          {
            v41 = (OGLModel *)v40->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast[v34];
          }
          ActorWeapon = ActorWeapon::CreateActorWeapon(pOwner, v41, v33);
          v43 = ActorWeapon;
          if ( ActorWeapon )
          {
            v44 = ActorWeapon->pModel;
            if ( v44->m_pSecondary )
              v44->m_SecondaryEnable = 1;
            v43->pModel->m_normalMapCreateFlg = 1;
            v43->pModel->m_createMaskFlg = 0;
            v43->pModel->m_shadowTextureId = *v60;
            v43->pModel->m_lowAccuracyShadowBias = 1;
            if ( v57 > 3 )
              v45 = this;
            else
              v45 = (BattleSystem::BattleController *)((char *)this + 1240 * (int)v57);
            MaterialShowControl::CreateMaterialIndex(
              v45->actSystem.defaultMaterialData,
              v33,
              v43->pModel,
              *(const CharaMaterialSetting **)(v58 + 96));
          }
        }
        ++v33;
        ++v34;
      }
      if ( !v64 )
      {
        if ( this->resultMember.bSpecialDirection )
          pOwner->__vftable[1].GetPlayerID(pOwner);
        v46 = *(const CharaDataUnify **)(v59 + 8i64 * v63 + 2182560);
        if ( v46 )
        {
          v47 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64);
          v48 = (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(v63 ? v47 + 80 : v47 + 64);
          ActorOption = ActorOption::CreateActorOption(v46, (ActorChara *)pOwner);
          if ( ActorOption )
          {
            v51 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(v48, v49);
            if ( (int)(v51->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
                     - v51->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) > 0 )
              v4 = (OGLModel *)*v51->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
            ActorOption->pModel = v4;
            v52 = 0x140000000ui64;
            v4->m_normalMapCreateFlg = 1;
            ActorOption->pModel->m_createMaskFlg = 0;
            LOBYTE(v52) = 1;
            ActorOption->pModel->m_shadowTextureId = BattleSystem::ciShadowMapID[v63];
            ActorOption->iAssetID = v63 + 2;
            ActorOption->EnableFollowBone(ActorOption, v52);
            v53 = ActorOption->pModel;
            if ( "C_Hips" )
              v53->m_iMirrorBaseBoneNo = OGLModel::searchMotionBoneFromName(ActorOption->pModel, "C_Hips");
            else
              v53->m_iMirrorBaseBoneNo = -1;
            CharaBone::CreateBoneIndex(&this->charaBoneData[v63].optionChara, ActorOption->pModel);
            ActorOption->pCharaBone = &this->charaBoneData[v63].optionChara;
            iAssetID = ActorOption->iAssetID;
            if ( (unsigned int)iAssetID > 3 )
              v55 = this;
            else
              v55 = (BattleSystem::BattleController *)((char *)this + 1240 * iAssetID);
            MaterialShowControl::CreateMaterialIndex(
              v55->actSystem.defaultMaterialData,
              0,
              ActorOption->pModel,
              *(const CharaMaterialSetting **)(*(_QWORD *)(v59 + 8i64 * v63 + 2182560) + 96i64));
            LOBYTE(v56) = 1;
            ActorOption->SetupAction(ActorOption, v56, 0);
          }
        }
      }
    }
  }
}

void __fastcall BattleSystem::BattleController::RoundInit(
        BattleSystem::BattleController *this,
        GAME_MODE gameMode,
        unsigned int randomSeed)
{
  BattleSystem::PauseController *Instance; // rax
  _QWORD *keyWatch; // rax
  _QWORD *i; // rcx
  GfxManager *v9; // rax
  BattleSystem::PauseController *v10; // rax
  _QWORD *v11; // rax
  _QWORD *j; // rcx
  GfxManager *v13; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rdi
  BattleSystem::PauseController *v15; // rax
  _QWORD *v16; // rax
  _QWORD *k; // rcx
  UserGameOperation *v18; // rcx
  InputKeyRecord (*m_KeyRecord)[6]; // rax
  BattleSystem::BattleController *v20; // rcx
  BattleSystem::BATTLE_MODE battleMode; // eax
  const ComboMissionData::MissionData *pMissionData; // rax
  InputKeyRecord (*v23)[6]; // rax
  BattleSystem::BattleController *v24; // rcx
  InputKeyRecord (*v25)[6]; // rax
  BattleSystem::BattleController *v26; // rcx
  EffectDataListManager **pEffectMgr; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rax
  float v45; // xmm0_4
  __int64 v46; // xmm0_8
  __int64 v47; // xmm0_8
  __int64 v48; // xmm0_8
  float z; // eax
  BattleSystem::BattleController::CharaBoneData *m; // rdi
  BattleSystem::ROUND_TIME_LIMIT::ID timeLimit; // ecx
  ActorChara *v52; // rsi
  ActorChara *v53; // rax
  ActorChara *v54; // r14
  BattleSystem::CpuSequence *cpuPlayer; // rdi
  _BOOL8 v56; // rdx
  __int64 v57; // rbp
  int v58; // eax
  GameDataInfo *v59; // rcx
  GameDataInfo *v60; // rcx
  GameDataInfo *v61; // rcx
  __int64 v62; // r12
  GameDataInfo *v63; // rcx
  BattleSystem::BATTLE_MODE v64; // eax
  GfxManager *v65; // [rsp+30h] [rbp-C8h]

  if ( this->bNeedBattleInit )
  {
    BattleSystem::BattleController::BattleInit(this, 0);
    Instance = BattleSystem::PauseController::GetInstance();
    Instance->m_Pause = 0;
    keyWatch = (_QWORD *)Instance->keyWatch;
    for ( i = keyWatch + 3; keyWatch != i; ++keyWatch )
      *keyWatch = 0i64;
  }
  else if ( gameMode == GAME_MODE_ONLINETRAINING )
  {
    if ( (*((_DWORD *)&g_NetworkManager.gamedata.player_data[(unsigned __int8)g_NetworkManager.gamedata.myNo] + 4) & 0x100000) == 0 )
    {
      GfxManager::getInstance();
      GfxManager::GFv_HideScreenMenu(v9);
      v10 = BattleSystem::PauseController::GetInstance();
      v10->m_Pause = 0;
      v11 = (_QWORD *)v10->keyWatch;
      for ( j = v11 + 3; v11 != j; ++v11 )
        *v11 = 0i64;
    }
  }
  else
  {
    v13 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v65 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v65);
      GfxManager::instance = v13;
    }
    m_ptr = v13->m_GFXMovie.m_movieProxy.m_ptr;
    if ( v13->m_GFXMovie.m_movieProxy.m_ptr
      && Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.setScreenMenuVisible") )
    {
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.setScreenMenuVisible", 0i64, 0i64, 0);
    }
    v15 = BattleSystem::PauseController::GetInstance();
    v15->m_Pause = 0;
    v16 = (_QWORD *)v15->keyWatch;
    for ( k = v16 + 3; v16 != k; ++v16 )
      *v16 = 0i64;
  }
  this->randMT.mt[0] = randomSeed;
  this->randMT.mti = 1;
  do
  {
    this->randMT.mt[this->randMT.mti] = this->randMT.mti
                                      + 1812433253
                                      * (*(&this->koTimeStopInfo.uiStopFrame + this->randMT.mti) ^ (*(&this->koTimeStopInfo.uiStopFrame + this->randMT.mti) >> 30));
    ++this->randMT.mti;
  }
  while ( this->randMT.mti < 624 );
  this->uiSeedValue = randomSeed;
  UserGameOperation::Instance();
  UserGameOperation::Instance();
  UserGameOperation::stopVibrationAll(v18);
  if ( this->keyRecordMode )
  {
    this->keyRecordMode = STOP;
    m_KeyRecord = this->m_KeyRecord;
    if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
    {
      do
      {
        v20 = (BattleSystem::BattleController *)&(*m_KeyRecord)[6];
        if ( m_KeyRecord != (InputKeyRecord (*)[6])&(*m_KeyRecord)[6] )
        {
          do
          {
            (*m_KeyRecord)[0].uiPlayCount = 0;
            m_KeyRecord = (InputKeyRecord (*)[6])((char *)m_KeyRecord + 16);
          }
          while ( m_KeyRecord != (InputKeyRecord (*)[6])v20 );
        }
        m_KeyRecord = (InputKeyRecord (*)[6])v20;
      }
      while ( v20 != (BattleSystem::BattleController *)&this->missionSampleMode );
    }
  }
  this->keyRecordInfo.iKeyPlaySlot = -1;
  this->keyRecordMode = STOP;
  battleMode = this->battleInfo.battleMode;
  if ( battleMode == MISSION || battleMode == MISSION_DEVELOP )
  {
    pMissionData = this->comboMission.pMissionData;
    if ( pMissionData )
    {
      if ( pMissionData->settingData.iStartPos )
      {
        if ( pMissionData->settingData.iStartPos == 1 )
        {
          this->restartPosition = COUNTER_HIT;
        }
        else if ( pMissionData->settingData.iStartPos == 2 )
        {
          this->restartPosition = REVERSAL;
        }
      }
      else
      {
        this->restartPosition = GUARD_CRASH;
      }
    }
    if ( this->missionSampleMode == REVERSAL )
    {
      this->missionSampleMode = COUNTER_HIT;
      this->keyRecordMode = STOP;
      v25 = this->m_KeyRecord;
      if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
      {
        do
        {
          v26 = (BattleSystem::BattleController *)&(*v25)[6];
          if ( v25 != (InputKeyRecord (*)[6])&(*v25)[6] )
          {
            do
            {
              (*v25)[0].uiPlayCount = 0;
              v25 = (InputKeyRecord (*)[6])((char *)v25 + 16);
            }
            while ( v25 != (InputKeyRecord (*)[6])v26 );
          }
          v25 = (InputKeyRecord (*)[6])v26;
        }
        while ( v26 != (BattleSystem::BattleController *)&this->missionSampleMode );
      }
      *(_QWORD *)&this->keyRecordMode = 7i64;
      this->keyRecordInfo.iKeyPlaySlot = 1;
    }
    else if ( this->missionSampleMode == SUPER_CANCEL )
    {
      BattleSystem::BattleController::ResetKeyRecordAll(this);
      this->missionSampleMode = GUARD_CRASH;
      if ( this->keyRecordMode != 8 )
      {
        this->keyRecordMode = STOP;
        v23 = this->m_KeyRecord;
        if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
        {
          do
          {
            v24 = (BattleSystem::BattleController *)&(*v23)[6];
            if ( v23 != (InputKeyRecord (*)[6])&(*v23)[6] )
            {
              do
              {
                (*v23)[0].uiPlayCount = 0;
                v23 = (InputKeyRecord (*)[6])((char *)v23 + 16);
              }
              while ( v23 != (InputKeyRecord (*)[6])v24 );
            }
            v23 = (InputKeyRecord (*)[6])v24;
          }
          while ( v24 != (BattleSystem::BattleController *)&this->missionSampleMode );
        }
      }
      this->keyRecordInfo.iKeyRecordType = 0;
      this->keyRecordInfo.iKeyRecordSlot = 1;
      this->keyRecordMode = 8;
    }
    else
    {
      this->missionSampleMode = NONE;
    }
  }
  else
  {
    this->missionSampleMode = NONE;
  }
  pEffectMgr = this->actSystem.pEffectMgr;
  v28 = 0i64;
  v29 = 5i64;
  if ( this->actSystem.pEffectMgr > (EffectDataListManager **)&this->actSystem.iThrowChildPlayerID )
    v29 = 0i64;
  if ( this->actSystem.pEffectMgr <= (EffectDataListManager **)&this->actSystem.iThrowChildPlayerID )
  {
    do
    {
      *pEffectMgr++ = 0i64;
      ++v28;
    }
    while ( v28 != v29 );
  }
  v30 = *(_QWORD *)&AppMain::pApp;
  v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 24i64) + 16i64);
  if ( !v31 || *(_BYTE *)(v31 + 96) )
  {
    v32 = 0i64;
  }
  else
  {
    if ( (*(_QWORD *)(v31 + 88) & 1) == 0 )
      extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v31 + 88), AppMain::pApp);
    v32 = *(_QWORD *)(v31 + 72);
    v30 = *(_QWORD *)&AppMain::pApp;
  }
  this->actSystem.pEffectMgr[0] = *(EffectDataListManager **)(v32 + 224);
  v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 11064) + 40i64) + 16i64);
  if ( !v33 || *(_BYTE *)(v33 + 96) )
  {
    v34 = 0i64;
  }
  else
  {
    if ( (*(_QWORD *)(v33 + 88) & 1) == 0 )
      extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v33 + 88), (extension::AsyncStatus::Step)v30);
    v34 = *(_QWORD *)(v33 + 72);
    v30 = *(_QWORD *)&AppMain::pApp;
  }
  this->actSystem.pEffectMgr[1] = *(EffectDataListManager **)(v34 + 224);
  v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 11064) + 56i64) + 16i64);
  if ( !v35 || *(_BYTE *)(v35 + 96) )
  {
    v36 = 0i64;
  }
  else
  {
    if ( (*(_QWORD *)(v35 + 88) & 1) == 0 )
      extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v35 + 88), (extension::AsyncStatus::Step)v30);
    v36 = *(_QWORD *)(v35 + 72);
    v30 = *(_QWORD *)&AppMain::pApp;
  }
  this->actSystem.pEffectMgr[2] = *(EffectDataListManager **)(v36 + 224);
  v37 = *(_QWORD *)(*(_QWORD *)(v30 + 11064) + 72i64);
  v38 = *(_QWORD *)(v37 + 16);
  if ( v38 && !*(_BYTE *)(v38 + 96) )
  {
    v39 = *(_QWORD *)(v37 + 16);
    if ( *(_BYTE *)(v38 + 96) )
    {
      v40 = 0i64;
    }
    else
    {
      if ( (*(_QWORD *)(v38 + 88) & 1) == 0 )
        extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v38 + 88), (extension::AsyncStatus::Step)v30);
      v40 = *(_QWORD *)(v39 + 72);
      v30 = *(_QWORD *)&AppMain::pApp;
    }
    this->actSystem.pEffectMgr[3] = *(EffectDataListManager **)(v40 + 224);
  }
  v41 = *(_QWORD *)(*(_QWORD *)(v30 + 11064) + 88i64);
  v42 = *(_QWORD *)(v41 + 16);
  if ( v42 && !*(_BYTE *)(v42 + 96) )
  {
    v43 = *(_QWORD *)(v41 + 16);
    if ( *(_BYTE *)(v42 + 96) )
    {
      v44 = 0i64;
    }
    else
    {
      if ( (*(_QWORD *)(v42 + 88) & 1) == 0 )
        extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v42 + 88), (extension::AsyncStatus::Step)v30);
      v44 = *(_QWORD *)(v43 + 72);
    }
    this->actSystem.pEffectMgr[4] = *(EffectDataListManager **)(v44 + 224);
  }
  ActionSystem::SystemInit(&this->actSystem);
  if ( this->restartPosition == COUNTER_HIT )
  {
    this->actSystem.cameraCtrl.fDist = 52.5;
    this->actSystem.cameraCtrl.fHeight = 12.5;
    this->actSystem.cameraCtrl.fAngle = 0.0;
    this->actSystem.cameraCtrl.vBasePos.y = 12.5;
    *(_QWORD *)&this->actSystem.cameraCtrl.vBasePos.z = 1112670208i64;
    this->actSystem.cameraCtrl.vBaseLook.y = 13.5;
    this->actSystem.cameraCtrl.vBaseLook.z = 2.5;
    *(_QWORD *)&this->actSystem.cameraCtrl.vBaseUp.y = 1065353216i64;
    v45 = (float)((float)((float)((float)(this->actSystem.cameraCtrl.vBasePos.z - 52.5) / 7.0) * 4.75) + 21.5) - 80.0;
  }
  else
  {
    if ( this->restartPosition != REVERSAL )
      goto LABEL_91;
    this->actSystem.cameraCtrl.fDist = 52.5;
    this->actSystem.cameraCtrl.fHeight = 12.5;
    this->actSystem.cameraCtrl.fAngle = 0.0;
    this->actSystem.cameraCtrl.vBasePos.y = 12.5;
    *(_QWORD *)&this->actSystem.cameraCtrl.vBasePos.z = 1112670208i64;
    this->actSystem.cameraCtrl.vBaseLook.y = 13.5;
    this->actSystem.cameraCtrl.vBaseLook.z = 2.5;
    *(_QWORD *)&this->actSystem.cameraCtrl.vBaseUp.y = 1065353216i64;
    v45 = 80.0 - (float)((float)((float)((float)(this->actSystem.cameraCtrl.vBasePos.z - 52.5) / 7.0) * 4.75) + 21.5);
  }
  this->actSystem.cameraCtrl.vBaseLook.x = v45;
  this->actSystem.cameraCtrl.vBasePos.x = v45;
  *(_QWORD *)&this->actSystem.cameraCtrl.vBasePosPrev.x = *(_QWORD *)&this->actSystem.cameraCtrl.vBasePos.x;
  v46 = *(_QWORD *)&this->actSystem.cameraCtrl.vBaseLook.x;
  this->actSystem.cameraCtrl.vBasePosPrev.z = this->actSystem.cameraCtrl.vBasePos.z;
  *(_QWORD *)&this->actSystem.cameraCtrl.vBaseLookPrev.x = v46;
  v47 = *(_QWORD *)&this->actSystem.cameraCtrl.vBaseUp.x;
  this->actSystem.cameraCtrl.vBaseLookPrev.z = this->actSystem.cameraCtrl.vBaseLook.z;
  *(_QWORD *)&this->actSystem.cameraCtrl.vBaseUpPrev.x = v47;
  v48 = *(_QWORD *)&this->actSystem.cameraCtrl.vBasePos.x;
  this->actSystem.cameraCtrl.vBaseUpPrev.z = this->actSystem.cameraCtrl.vBaseUp.z;
  *(_QWORD *)&this->actSystem.cameraCtrl.vBaseWallPos.x = v48;
  z = this->actSystem.cameraCtrl.vBasePos.z;
  *(_QWORD *)&this->actSystem.cameraCtrl.fLookDistAdj = 0i64;
  this->actSystem.cameraCtrl.vBaseWallPos.z = z;
LABEL_91:
  for ( m = this->charaBoneData;
        m != (BattleSystem::BattleController::CharaBoneData *)&this->successiveBattleTakeOverInfo;
        ++m )
  {
    BattleSystem::BattleController::CharaBoneData::Clear(m);
  }
  *(_QWORD *)&this->uiRoundPhaseFrame = 0i64;
  this->bAkebonoKO = 0;
  this->iRivalBGMTableID = -1;
  this->iNextMissionID = -1;
  timeLimit = this->battleInfo.timeLimit;
  if ( (unsigned int)(this->battleInfo.battleMode - 3) <= 1 )
    timeLimit = ACTOR_HIT_PUSH;
  this->battleInfo.uiRoundPassFrame = 0;
  this->battleInfo.iRoundLimitFrame = BattleSystem::ciRoundTimeLimitMaxCount[timeLimit];
  this->battleInfo.timeLimit = timeLimit;
  this->battleInfo.roundWinnerID = NONE;
  this->battleInfo.roundFinishType = NONE;
  *(_QWORD *)&this->roundPhase = 0i64;
  v52 = (ActorChara *)ActionSystem::Entry(&this->actSystem, CHARA, 2);
  this->actSystem.pPlayer[0] = v52;
  v53 = (ActorChara *)ActionSystem::Entry(&this->actSystem, CHARA, 3);
  v54 = v53;
  this->actSystem.pPlayer[1] = v53;
  if ( v52 && v53 )
  {
    BattleSystem::BattleController::PlayerActorSetting(this, v52, 0, v53);
    BattleSystem::BattleController::PlayerActorSetting(this, v54, 1, v52);
    cpuPlayer = this->cpuPlayer;
    BattleSystem::CpuSequence::SetCpuActor(this->cpuPlayer, v52);
    BattleSystem::CpuSequence::SetCpuActor(&this->cpuPlayer[1], v54);
    if ( this->battleInfo.battleMode == DEVELOP )
    {
      this->playerInfo[0].playerType = STAND;
      this->playerInfo[1].playerType = STAND;
    }
    else
    {
      v57 = *(_QWORD *)NtCurrentTeb()->Reserved1[11];
      v58 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v57 + 40) )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        v58 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v59);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          v58 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
        }
      }
      if ( `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
      {
        this->playerInfo[0].playerType = STAND;
        this->playerInfo[1].playerType = STAND;
      }
      else
      {
        if ( v58 > *(_DWORD *)(v57 + 40) )
        {
          Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
          {
            GameDataInfo::GameDataInfo(v60);
            Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          }
        }
        this->playerInfo[0].playerType = `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0] == USER_ID_CPU;
        if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v57 + 40) )
        {
          Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
          {
            GameDataInfo::GameDataInfo(v61);
            Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          }
        }
        this->playerInfo[1].playerType = `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1] == USER_ID_CPU;
      }
    }
    if ( this->cpuPlayer != (BattleSystem::CpuSequence *)&this->comboMission )
    {
      v62 = *(_QWORD *)NtCurrentTeb()->Reserved1[11];
      do
      {
        BattleSystem::CpuSequence::CancelTrainingCpu(cpuPlayer, v56);
        if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v62 + 40) )
        {
          Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
          {
            GameDataInfo::GameDataInfo(v63);
            Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          }
        }
        cpuPlayer->iDifficulty = `GameDataInfo::getInstance'::`2'::instance.m_AiLevel;
        ++cpuPlayer;
      }
      while ( cpuPlayer != (BattleSystem::CpuSequence *)&this->comboMission );
    }
    BattleSystem::BattleController::CheckDemoAction(this, gameMode, v52, v54, this->bDirectStart);
    this->restartPosition = NONE;
    *(_QWORD *)&this->koTimeStopInfo.winnerID = 0i64;
    *(_QWORD *)&this->koTimeStopInfo.uiStartDelay = 0i64;
    v64 = this->battleInfo.battleMode;
    if ( v64 == MISSION || v64 == MISSION_DEVELOP )
    {
      if ( this->comboMission.pMissionData )
      {
        this->comboMission.pPlayer = v52;
        this->comboMission.pEnemy = v54;
        v52->SetComboMissionAtkEvent(v52, &this->comboMission);
        BattleSystem::ComboMissionJudge::Reset(&this->comboMission);
        this->comboMission.iCompleteCount = 0;
      }
      BattleSystem::BattleController::SetComboMissionSetting(this);
    }
  }
}

void __fastcall BattleSystem::BattleController::SetBattleBGMFadeStop(BattleSystem::BattleController *this)
{
  __int64 v1; // rsi
  extension::SoundList *v3; // rdi
  BattleSystem::BattleController *v4; // rcx
  AppMain *v5; // rcx
  __int64 iRivalBGMTableID; // rdx
  SoundId battleBGM; // er8
  SoundId playBGMID; // eax
  AppMain *v9; // rcx
  AppMain *v10; // rcx
  int StageBGMSoundID; // eax

  v1 = *(_QWORD *)&AppMain::pApp;
  v3 = (extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 2197144i64);
  if ( (*(_QWORD *)&AppMain::pApp == -2197144i64
     || !extension::SoundList::isPlayingSEByName(
           (extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 2197144i64),
           &s_soundIndex.m_keys[171]))
    && s_soundIndex.m_keys[171].m_sharedBuffer.m_ptr
    && !extension::SoundList::playSEByName(v3, &s_soundIndex.m_keys[171], 0i64) )
  {
    extension::SoundList::playSEByName((extension::SoundList *)(v1 + 2196904), &s_soundIndex.m_keys[171], 0i64);
  }
  anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_AMBIENCE, 1.0, 0.5);
  if ( this->iRivalBGMTableID < 0 )
  {
    if ( BattleSystem::BattleController::IsSuccessiveBattle(v4) && AppMain::Sound_BGMPlay_IsActive(v10) )
    {
      StageBGMSoundID = BattleSystem::BattleController::GetStageBGMSoundID(this);
      if ( (StageBGMSoundID != 57 || this->playBGMID != SND_BGM_29_RIVAL_ATHENA_VS_KENSOU)
        && StageBGMSoundID != this->playBGMID )
      {
        goto LABEL_23;
      }
    }
  }
  else if ( AppMain::Sound_BGMPlay_IsActive((AppMain *)v4) )
  {
    iRivalBGMTableID = this->iRivalBGMTableID;
    if ( (int)iRivalBGMTableID < 0 || (unsigned int)iRivalBGMTableID >= 0xF )
    {
      battleBGM = SND_NONE;
    }
    else
    {
      v5 = (AppMain *)(5 * iRivalBGMTableID);
      battleBGM = BattleSystem::rivalDemoBGMTable[iRivalBGMTableID].battleBGM;
    }
    playBGMID = this->playBGMID;
    if ( playBGMID != battleBGM )
    {
      if ( playBGMID != SND_BGM_10_PSYCHO
        || (int)iRivalBGMTableID < 0
        || (unsigned int)iRivalBGMTableID >= 0xF
        || (v5 = (AppMain *)(5 * iRivalBGMTableID),
            BattleSystem::rivalDemoBGMTable[iRivalBGMTableID].battleBGM != SND_BGM_29_RIVAL_ATHENA_VS_KENSOU) )
      {
        this->fNormalStageBGMPos = AppMain::Sound_BGMPlay_GetPosition(v5);
LABEL_23:
        AppMain::StopBGMUtil(v9, 0.5);
        this->playBGMID = SND_NONE;
      }
    }
  }
}

void __fastcall BattleSystem::BattleController::SetComboMissionSetting(BattleSystem::BattleController *this)
{
  const ComboMissionData::MissionData *pMissionData; // rdi
  ActorChara *v2; // rax
  const ComboMissionData::MissionData *v3; // rdx
  ActorChara *v4; // rbx
  _BOOL8 v5; // rdx
  _BOOL8 v6; // rdx
  __int64 v7; // rdx
  __int64 *v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17[3]; // [rsp+20h] [rbp-18h] BYREF

  pMissionData = this->comboMission.pMissionData;
  if ( pMissionData )
  {
    v2 = this->actSystem.pPlayer[0];
    v3 = this->comboMission.pMissionData;
    v4 = this->actSystem.pPlayer[1];
    this->playerInfo[1].playerType = CROUCH;
    v17[0] = (__int64)v2;
    v17[1] = (__int64)v4;
    BattleSystem::CpuSequence::SetComboMissionCpu(&this->cpuPlayer[1], &v3->settingData);
    if ( pMissionData->settingData.iGuardSetting )
    {
      if ( pMissionData->settingData.iGuardSetting != 1 )
      {
        if ( pMissionData->settingData.iGuardSetting == 2 )
        {
          v4->SetAllGuardMode(v4, 0);
          LOBYTE(v6) = 1;
LABEL_10:
          v4->SetOneHitGuardMode(v4, v6);
          v4->SetInvalidGuardChange(v4, 0);
          v4->SetRandomGuard(v4, 0);
          v4->SetAllJustGuard(v4, 0);
LABEL_11:
          if ( pMissionData->settingData.iCounterSetting )
          {
            if ( pMissionData->settingData.iCounterSetting != 1 )
            {
LABEL_16:
              v8 = v17;
              v9 = (char *)pMissionData - (char *)v17 + 9;
              v10 = 2i64;
              while ( 1 )
              {
                v11 = *v8;
                LOBYTE(v5) = 1;
                (*(void (__fastcall **)(__int64, _BOOL8))(*(_QWORD *)*v8 + 3944i64))(*v8, v5);
                LOBYTE(v12) = 1;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 4072i64))(v11, v12);
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 4088i64))(v11, 0i64);
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 4104i64))(v11, 0i64);
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 4040i64))(v11, 0i64);
                if ( !*((_BYTE *)v8 + v9 - 1) )
                  break;
                if ( *((_BYTE *)v8 + v9 - 1) != 1 )
                {
                  if ( *((_BYTE *)v8 + v9 - 1) != 2 )
                    goto LABEL_25;
                  v13 = 1i64;
                  goto LABEL_23;
                }
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 3952i64))(v11, 0i64);
                LOBYTE(v14) = 1;
LABEL_24:
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 3960i64))(v11, v14);
LABEL_25:
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 3544i64))(
                  v11,
                  (unsigned int)(*((char *)v8 + v9) + 3));
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 3576i64))(
                  v11,
                  (unsigned int)*((char *)v8 + v9 + 1));
                if ( *((_BYTE *)v8 + v9 + 2) )
                {
                  if ( *((_BYTE *)v8 + v9 + 2) != 1 )
                    goto LABEL_30;
                  v15 = 1i64;
                }
                else
                {
                  v15 = 0i64;
                }
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 4056i64))(v11, v15);
LABEL_30:
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 3640i64))(
                  v11,
                  (unsigned int)*((char *)v8 + v9 + 3));
                if ( !*((_BYTE *)v8 + v9 + 4) )
                {
                  v16 = 0i64;
                  goto LABEL_34;
                }
                if ( *((_BYTE *)v8 + v9 + 4) == 1 )
                {
                  v16 = 1i64;
LABEL_34:
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 4024i64))(v11, v16);
                }
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 3616i64))(
                  v11,
                  (unsigned int)*((char *)v8++ + v9 + 5));
                if ( !--v10 )
                  return;
              }
              v13 = 0i64;
LABEL_23:
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 3952i64))(v11, v13);
              v14 = 0i64;
              goto LABEL_24;
            }
            v7 = 1i64;
          }
          else
          {
            v7 = 0i64;
          }
          v4->SetAlwaysCounter(v4, v7);
          v4->SetRandomCounter(v4, 0);
          goto LABEL_16;
        }
        if ( pMissionData->settingData.iGuardSetting != 3 )
          goto LABEL_11;
      }
      LOBYTE(v5) = 1;
    }
    else
    {
      v5 = 0i64;
    }
    v4->SetAllGuardMode(v4, v5);
    v6 = 0i64;
    goto LABEL_10;
  }
}

void __fastcall BattleSystem::BattleController::SetInitialStartAction(
        BattleSystem::BattleController *this,
        __int64 a2,
        _BOOL8 a3)
{
  __int64 v4; // rbx
  BattleSystem::BattleController::START_ACTION *initialStartAction; // rdi
  ActorChara **pPlayer; // rsi
  ActorChara *v7; // rcx
  __int64 *v8; // rcx
  _QWORD *i; // rbx
  __int64 *v10; // rdx
  __int64 v11[7]; // [rsp+28h] [rbp-50h] BYREF
  __int64 *v12; // [rsp+60h] [rbp-18h]

  v4 = 0i64;
  initialStartAction = this->initialStartAction;
  pPlayer = this->actSystem.pPlayer;
  do
  {
    if ( (unsigned __int64)v4 <= 1 )
    {
      v7 = *pPlayer;
      if ( *pPlayer )
      {
        if ( *initialStartAction )
        {
          if ( *initialStartAction == SETUP )
            v7->SetRoundStartWaitAction(v7);
        }
        else
        {
          LOBYTE(a3) = 1;
          v7->SetReady(v7, 0, a3);
        }
      }
    }
    ++v4;
    ++pPlayer;
    ++initialStartAction;
  }
  while ( v4 < 2 );
  v11[0] = (__int64)&std::_Func_impl<_lambda_844476951c63c99cc400950c54c0e1fd_,std::allocator<int>,void,Actor &>::`vftable';
  v11[1] = (__int64)this;
  v8 = v11;
  v12 = v11;
  for ( i = (_QWORD *)*((_QWORD *)this->actSystem.ppPriStart + 5); i; i = (_QWORD *)*i )
  {
    if ( *(_DWORD *)(i[2] + 20i64) == 1 )
    {
      if ( !v8 )
        std::_Xbad_function_call();
      (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
      v8 = v12;
    }
  }
  if ( v8 )
  {
    v10 = v11;
    LOBYTE(v10) = v8 != v11;
    (*(void (__fastcall **)(__int64 *, __int64 *))(*v8 + 32))(v8, v10);
  }
}

void __fastcall BattleSystem::BattleController::SetKeyPlaySlotsOnRecStart(BattleSystem::BattleController *this)
{
  int i; // er9
  std::bitset<61>::reference *v3; // rax
  unsigned __int64 Mypos; // rcx
  std::bitset<61> *Pbitset; // rdx
  unsigned __int64 v6; // rax
  char v7; // cl
  int *v8; // rdx
  int v9; // eax
  int v10; // eax
  GameDataInfo *v11; // rcx
  int v12; // er8
  __int64 v13; // r11
  unsigned __int64 v14; // r10
  int v15; // er9
  unsigned int v16; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  for ( i = 0; i < 6; ++i )
  {
    if ( (unsigned int)i <= 5 )
    {
      v3 = std::bitset<21>::operator[](
             (std::bitset<61> *)&this->keyRecordInfo.enableKeyPlaySlot[this->keyRecordInfo.iKeyRecordType],
             &result,
             i);
      Mypos = v3->_Mypos;
      Pbitset = v3->_Pbitset;
      if ( Mypos >= 6 )
        std::_Xout_of_range("invalid bitset<N> position");
      v6 = Mypos >> 5;
      v7 = Mypos & 0x1F;
      v8 = (int *)Pbitset + v6;
      v9 = *v8;
      if ( this->keyRecordInfo.iKeyRecordSlot == i )
        v10 = v9 | (1 << v7);
      else
        v10 = v9 & ~(1 << v7);
      *v8 = v10;
    }
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v11);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v12 = 1;
  v13 = 1i64;
  v14 = 1i64;
  do
  {
    v15 = 0;
    if ( (unsigned int)v12 <= 5 )
    {
      v16 = this->keyRecordInfo.enableKeyPlaySlot[this->keyRecordInfo.iKeyRecordType + (v14 >> 5)]._Array[0];
      LOBYTE(v15) = _bittest((const int *)&v16, v14 & 0x1F);
    }
    `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRecordMode][v13] = v15;
    ++v12;
    ++v14;
    ++v13;
  }
  while ( v12 < 6 );
}

void __fastcall BattleSystem::BattleController::SetKeyRecordMode(
        BattleSystem::BattleController *this,
        BattleSystem::BattleController::KEY_RECORD_MODE mode)
{
  BattleSystem::BattleController::KEY_RECORD_MODE v2; // er13
  InputKeyRecord (*m_KeyRecord)[6]; // rax
  BattleSystem::BattleController::MISSION_SAMPLE_MODE *p_missionSampleMode; // rdx
  InputKeyRecord (*i)[6]; // rcx
  int v7; // ebp
  int v8; // er10
  __int64 iKeyRecordType; // r14
  __int64 v10; // rsi
  int *v11; // rdi
  std::bitset<61>::reference *v12; // rax
  __int64 v13; // r9
  unsigned int v14; // er10
  unsigned __int64 Mypos; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  bool v19; // al
  BattleSystem::BattleController *v20; // rax
  int v21; // edi
  int v22; // er10
  std::bitset<61> *v23; // rsi
  std::bitset<61>::reference *v24; // rax
  int v25; // er10
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  bool v29; // cl
  int v30; // eax
  BattleSystem::BattleController *v31; // [rsp+20h] [rbp-68h]
  std::bitset<61>::reference result; // [rsp+30h] [rbp-58h] BYREF
  int v33[6]; // [rsp+40h] [rbp-48h] BYREF

  v2 = mode;
  if ( mode != this->keyRecordMode )
  {
    this->keyRecordMode = STOP;
    m_KeyRecord = this->m_KeyRecord;
    p_missionSampleMode = &this->missionSampleMode;
    if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
    {
      do
      {
        for ( i = m_KeyRecord + 1; m_KeyRecord != i; m_KeyRecord = (InputKeyRecord (*)[6])((char *)m_KeyRecord + 16) )
          (*m_KeyRecord)[0].uiPlayCount = 0;
        m_KeyRecord = i;
      }
      while ( i != (InputKeyRecord (*)[6])p_missionSampleMode );
    }
  }
  switch ( v2 )
  {
    case 1:
    case 2:
    case 4:
      v7 = 0;
      v8 = 1;
      iKeyRecordType = this->keyRecordInfo.iKeyRecordType;
      v10 = 1i64;
      v11 = v33;
      do
      {
        v12 = std::bitset<21>::operator[](
                (std::bitset<61> *)&this->keyRecordInfo.enableKeyPlaySlot[iKeyRecordType],
                &result,
                v8);
        Mypos = v12->_Mypos;
        if ( Mypos >= 6 )
          std::_Xout_of_range("invalid bitset<N> position");
        v16 = v12->_Mypos & 0x1F;
        v17 = *((_DWORD *)v12->_Pbitset->_Array + (Mypos >> 5));
        if ( _bittest(&v17, v16) && v14 <= 5 )
        {
          v18 = iKeyRecordType;
          if ( (unsigned int)iKeyRecordType > 1 )
            v18 = iKeyRecordType;
          if ( v18 == 1 )
            v19 = *(_DWORD *)(*(_QWORD *)v13 + 16i64) >= 0xB4u;
          else
            v19 = this->m_KeyRecord[v18][v10].pKeyBuffer._Mypair._Myval2->uiDataSize != 0;
          if ( v19 )
          {
            *v11 = v14;
            ++v7;
            ++v11;
          }
        }
        v8 = v14 + 1;
        ++v10;
      }
      while ( v8 < 6 );
      if ( v7 <= 0 )
        goto LABEL_34;
      v20 = BattleSystem::BattleController::instance;
      if ( !BattleSystem::BattleController::instance )
      {
        v31 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
        BattleSystem::BattleController::BattleController(v31);
        BattleSystem::BattleController::instance = v20;
      }
      this->keyRecordInfo.iKeyPlaySlot = v33[(int)((unsigned int)RandomMT::getRand32(&v20->randMT) >> 1) % v7];
      break;
    case 6:
      v21 = 0;
      v22 = 1;
      v23 = (std::bitset<61> *)&this->keyRecordInfo.enableKeyPlaySlot[this->keyRecordInfo.iKeyRecordType];
      do
      {
        v24 = std::bitset<21>::operator[](v23, &result, v22);
        v26 = v24->_Mypos;
        if ( v26 >= 6 )
          std::_Xout_of_range("invalid bitset<N> position");
        v27 = v24->_Mypos & 0x1F;
        v28 = *((_DWORD *)v24->_Pbitset->_Array + (v26 >> 5));
        v29 = _bittest(&v28, v27)
           && BattleSystem::BattleController::IsValidKeyRecordData(this, v25, this->keyRecordInfo.iKeyRecordType);
        v30 = v21 + 1;
        if ( !v29 )
          v30 = v21;
        v21 = v30;
        v22 = v25 + 1;
      }
      while ( v22 < 6 );
      if ( v30 < 1 )
      {
LABEL_34:
        v2 = STOP;
        goto LABEL_38;
      }
      break;
    case 7:
      this->keyRecordInfo.iKeyRecordType = 0;
      this->keyRecordInfo.iKeyPlaySlot = 1;
      break;
    case 8:
      this->keyRecordInfo.iKeyRecordType = 0;
      this->keyRecordInfo.iKeyRecordSlot = 1;
      break;
    default:
LABEL_38:
      this->keyRecordInfo.iKeyPlaySlot = -1;
      break;
  }
  this->keyRecordMode = v2;
}

void __fastcall BattleSystem::BattleController::SetKeyRecordSlot(BattleSystem::BattleController *this, int slot)
{
  InputKeyRecord (*m_KeyRecord)[6]; // rax
  BattleSystem::BattleController::MISSION_SAMPLE_MODE *p_missionSampleMode; // rdx
  InputKeyRecord (*i)[6]; // rcx

  if ( (unsigned int)slot <= 5 )
  {
    if ( slot != this->keyRecordInfo.iKeyRecordSlot )
    {
      if ( this->keyRecordMode )
      {
        this->keyRecordMode = STOP;
        m_KeyRecord = this->m_KeyRecord;
        p_missionSampleMode = &this->missionSampleMode;
        if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
        {
          do
          {
            for ( i = m_KeyRecord + 1; m_KeyRecord != i; m_KeyRecord = (InputKeyRecord (*)[6])((char *)m_KeyRecord + 16) )
              (*m_KeyRecord)[0].uiPlayCount = 0;
            m_KeyRecord = i;
          }
          while ( i != (InputKeyRecord (*)[6])p_missionSampleMode );
        }
      }
      this->keyRecordInfo.iKeyPlaySlot = -1;
      this->keyRecordMode = STOP;
    }
    this->keyRecordInfo.iKeyRecordSlot = slot;
  }
}

void __fastcall BattleSystem::BattleController::SetKeyRecordType(
        BattleSystem::BattleController *this,
        BattleSystem::BattleController::KEY_RECORD_TYPE::ID type)
{
  InputKeyRecord (*m_KeyRecord)[6]; // rax
  BattleSystem::BattleController::MISSION_SAMPLE_MODE *p_missionSampleMode; // rdx
  InputKeyRecord (*i)[6]; // rcx

  if ( type == this->keyRecordInfo.iKeyRecordType )
  {
    this->keyRecordInfo.iKeyRecordType = type;
  }
  else
  {
    if ( this->keyRecordMode )
    {
      this->keyRecordMode = STOP;
      m_KeyRecord = this->m_KeyRecord;
      p_missionSampleMode = &this->missionSampleMode;
      if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
      {
        do
        {
          for ( i = m_KeyRecord + 1; m_KeyRecord != i; m_KeyRecord = (InputKeyRecord (*)[6])((char *)m_KeyRecord + 16) )
            (*m_KeyRecord)[0].uiPlayCount = 0;
          m_KeyRecord = i;
        }
        while ( i != (InputKeyRecord (*)[6])p_missionSampleMode );
      }
    }
    this->keyRecordInfo.iKeyPlaySlot = -1;
    this->keyRecordMode = STOP;
    this->keyRecordInfo.iKeyRecordType = type;
  }
}

void __fastcall FighterOperation::SetLightBar(
        int fighterIndex,
        unsigned __int8 r,
        unsigned __int8 g,
        unsigned __int8 b)
{
  __int64 v4; // rbx
  FighterOperation *v5; // rax

  v4 = fighterIndex;
  v5 = FighterOperation::Instance();
  if ( (unsigned int)(v4 - 1) <= 1 )
  {
    if ( &v5[-1].m_slots[v4 + 1].operationMapper.m_mapping[4] )
      UserGameOperation::Instance();
  }
}

void __fastcall BattleSystem::BattleController::SetLoadComplete(BattleSystem::BattleController *this)
{
  int *p_iCharaColor; // r8
  __int64 v2; // r10
  int *p_iMemberReferIndex; // rax
  __int64 v4; // rcx
  int v5; // ecx
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rdx
  int v9; // er9
  int v10; // ecx
  int v11; // ecx

  p_iCharaColor = &this->loadedInfo.loadedChara[0].iCharaColor;
  this->loadedInfo.loadedStageID = this->battleInfo.battleStageID;
  v2 = 2i64;
  p_iMemberReferIndex = &this->playerInfo[0].iMemberReferIndex;
  this->loadedInfo.bLoadedCommonData = 1;
  do
  {
    v4 = *p_iMemberReferIndex;
    if ( *(p_iMemberReferIndex - 1) > (int)v4 )
      v5 = p_iMemberReferIndex[v4 - 7];
    else
      v5 = -1;
    *(p_iCharaColor - 1) = v5;
    v6 = *p_iMemberReferIndex;
    if ( *(p_iMemberReferIndex - 1) > (int)v6 )
      v7 = p_iMemberReferIndex[v6 - 4];
    else
      v7 = -1;
    *p_iCharaColor = v7;
    v8 = *p_iMemberReferIndex;
    v9 = *(p_iMemberReferIndex - 1);
    if ( v9 > (int)v8 )
      v10 = p_iMemberReferIndex[v8 - 7];
    else
      v10 = -1;
    p_iMemberReferIndex[32] = v10;
    if ( v9 > (int)v8 )
      v11 = p_iMemberReferIndex[v8 - 4];
    else
      v11 = -1;
    p_iMemberReferIndex[33] = v11;
    p_iCharaColor += 2;
    p_iMemberReferIndex[34] = v8;
    p_iMemberReferIndex += 42;
    --v2;
  }
  while ( v2 );
}

void __fastcall BattleSystem::BattleController::SetRealTimeMultiPlayFlag(BattleSystem::BattleController *this)
{
  _DWORD *v1; // rbx
  int v2; // eax
  GameDataInfo *v3; // rcx
  GameDataInfo *v4; // rcx

  v1 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  v2 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v1 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v2 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v3);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v2 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  if ( !`GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag && v2 > *v1 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v4);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
}

void __fastcall BattleSystem::BattleController::SetResultActionPhase(BattleSystem::BattleController *this)
{
  __int64 i; // rbx
  ActorChara *v3; // rcx
  AppMain *v4; // rsi
  int j; // ebx

  if ( this->roundPhase == MAIN && this->resultMember.battleWinnerID != REVERSAL )
  {
    for ( i = 0i64; i < 3; ++i )
    {
      v3 = this->resultMember.pActor[i];
      if ( v3 )
      {
        *(_QWORD *)&v3->vPos.x = *(_QWORD *)&BattleSystem::resultPosition[i].startPos.x;
        v3->vPos.z = BattleSystem::resultPosition[i].startPos.z;
        *(_QWORD *)&v3->vBasePos.x = *(_QWORD *)&BattleSystem::resultPosition[i].startPos.x;
        v3->vBasePos.z = BattleSystem::resultPosition[i].startPos.z;
        *(_QWORD *)&v3->vAngle.x = *(_QWORD *)&BattleSystem::resultPosition[i].poseAngle.x;
        v3->vAngle.z = BattleSystem::resultPosition[i].poseAngle.z;
        if ( i == 1 )
          v3->CAngleChangeReq(v3, 1);
      }
    }
    v4 = *(AppMain **)&AppMain::pApp;
    if ( *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2182360i64) != -1 )
      *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2182364i64) = 0;
    v4->cameraMotionPreview.iPreviewSide = -1;
    for ( j = 0; j < 4; ++j )
      AppMain::setEffectLightOn(v4, j, 0);
    *(_QWORD *)&this->roundPhase = 15i64;
  }
}

void __fastcall BattleSystem::BattleController::SetResultData(BattleSystem::BattleController *this, bool bFinalKO)
{
  BattleSystem::ResultMemberInfo *p_resultMember; // rdi
  _QWORD *v5; // rax
  _DWORD *v6; // r15
  unsigned int v7; // edx
  int v8; // ecx
  unsigned int v9; // edx
  ActorChara *v10; // rcx
  BattleSystem::BattlePlayerInfo *playerInfo; // rdi
  BattleSystem::BattlePlayerInfo *v12; // r14
  int iMemberCount; // eax
  int v14; // ecx
  int *p_iBattleMemberIndex; // r8
  int *v16; // rdx
  int v17; // ebp
  CharaProjectData *v18; // rsi
  int CharaDataIndex; // eax
  CHARACTER_NO v20; // edi
  int iBaseCharaID; // esi
  signed int v22; // eax
  int v23; // ecx
  int v24; // edx
  __int64 v25; // rax
  int battleCharaNo; // esi
  CharaProjectData *v27; // rbp
  int v28; // eax
  GameDataInfo *v29; // rcx
  GameDataInfo *v30; // rcx

  p_resultMember = &this->resultMember;
  BattleSystem::ResultMemberInfo::Clear(&this->resultMember);
  v5 = NtCurrentTeb()->Reserved1[11];
  p_resultMember->battleWinnerID = this->battleInfo.battleWinnerID;
  v6 = (_DWORD *)(*v5 + 40i64);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v6 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v29);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_STORY
    || `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_MISSION_TIMEATTACK )
  {
    if ( p_resultMember->battleWinnerID == REVERSAL )
      p_resultMember->battleWinnerID = GUARD_CRASH;
  }
  else if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_MISSION_SURVIVAL )
  {
    p_resultMember->battleWinnerID = COUNTER_HIT;
  }
  this->resultMember.bFinalKO = bFinalKO;
  this->resultMember.iLoseCount[0] = this->playerInfo[0].iLoseCount;
  this->resultMember.iWinCount[0] = this->playerInfo[0].iWinCount;
  this->resultMember.iDrawCount[0] = this->playerInfo[0].iDrawCount;
  this->resultMember.iStraightWin[0] = this->playerInfo[0].iStraightWin;
  this->resultMember.iLoseCount[1] = this->playerInfo[1].iLoseCount;
  this->resultMember.iWinCount[1] = this->playerInfo[1].iWinCount;
  this->resultMember.iDrawCount[1] = this->playerInfo[1].iDrawCount;
  this->resultMember.iStraightWin[1] = this->playerInfo[1].iStraightWin;
  v7 = this->battleInfo.uiTotalBattleFrame ^ 0x7B48A35E ^ (LOWORD(this->battleInfo.uiTotalBattleFrame) ^ 0xA35E ^ (unsigned __int16)((this->battleInfo.uiTotalBattleFrame ^ 0x7B48A35E) >> 14)) & 0xCCCC ^ (((LOWORD(this->battleInfo.uiTotalBattleFrame) ^ 0xA35E ^ (unsigned __int16)((this->battleInfo.uiTotalBattleFrame ^ 0x7B48A35E) >> 14)) & 0xCCCC) << 14);
  v8 = (v7 ^ (v7 >> 7)) & 0x550055 ^ v7 ^ (((v7 ^ (v7 >> 7)) & 0x550055) << 7);
  v9 = v8 ^ (v8 ^ (v8 >> 7)) & 0x550055 ^ (((v8 ^ (v8 >> 7)) & 0x550055) << 7);
  this->resultMember.uiTotalBattleFrame = ((unsigned __int16)v9 ^ (unsigned __int16)(v9 >> 14)) & 0xCCCC ^ v9 ^ ((((unsigned __int16)v9 ^ (unsigned __int16)(v9 >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
  if ( p_resultMember->battleWinnerID != REVERSAL )
  {
    if ( p_resultMember->battleWinnerID == COUNTER_HIT )
    {
      v10 = this->actSystem.pPlayer[0];
      playerInfo = this->playerInfo;
      v12 = &this->playerInfo[1];
    }
    else
    {
      v10 = this->actSystem.pPlayer[1];
      playerInfo = &this->playerInfo[1];
      v12 = this->playerInfo;
    }
    if ( v10 )
      this->resultMember.bSpecialDirection = v10->IsSpecialWinDirection(v10);
    *(_OWORD *)&this->resultMember.scoreInfo.iLifeBonus = *(_OWORD *)&playerInfo->scoreInfo.iLifeBonus;
    *(_QWORD *)&this->resultMember.scoreInfo.iCpuLevelBonus = *(_QWORD *)&playerInfo->scoreInfo.iCpuLevelBonus;
    this->resultMember.scoreInfo.iBattleScore = playerInfo->scoreInfo.iBattleScore;
    iMemberCount = playerInfo->iMemberCount;
    if ( iMemberCount > 3 )
      iMemberCount = 3;
    v14 = 0;
    this->resultMember.iMemberCount = iMemberCount;
    this->resultMember.charaNo[0] = playerInfo->battleCharaNo;
    this->resultMember.iCharaColor[0] = playerInfo->iBattleCharaColor;
    if ( this->resultMember.iMemberCount > 0 )
    {
      p_iBattleMemberIndex = &playerInfo->iBattleMemberIndex;
      v16 = &this->resultMember.iCharaColor[1];
      do
      {
        if ( v14 != *p_iBattleMemberIndex )
        {
          *(v16 - 3) = playerInfo->charaNo[0];
          *v16++ = playerInfo->iCharaColor[0];
        }
        ++v14;
        playerInfo = (BattleSystem::BattlePlayerInfo *)((char *)playerInfo + 4);
      }
      while ( v14 < this->resultMember.iMemberCount );
    }
    v17 = this->resultMember.charaNo[0];
    v18 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
    CharaDataIndex = CharaProjectData::GetCharaDataIndex(v18, v17);
    v20 = CHARACTER_NO_NONE;
    if ( CharaDataIndex >= 0 )
    {
      iBaseCharaID = v18->pCharaData[CharaDataIndex].iBaseCharaID;
      if ( iBaseCharaID < 0 )
        iBaseCharaID = v17;
    }
    else
    {
      iBaseCharaID = -1;
    }
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v6 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v30);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    v22 = (unsigned int)RandomMT::getRand32(&`GameDataInfo::getInstance'::`2'::instance.randMT) >> 1;
    v23 = 4;
    if ( iBaseCharaID != 49 )
      v23 = 25;
    v24 = v22 % v23;
    v25 = *(_QWORD *)&AppMain::pApp;
    this->resultMember.iRandomMessageNo = v24 + 1;
    battleCharaNo = v12->battleCharaNo;
    v27 = *(CharaProjectData **)(v25 + 10888);
    v28 = CharaProjectData::GetCharaDataIndex(v27, battleCharaNo);
    if ( v28 >= 0 )
    {
      v20 = v27->pCharaData[v28].iBaseCharaID;
      if ( v20 < CHARACTER_NO_KYO )
        v20 = battleCharaNo;
    }
    this->resultMember.bReplaySaveTarget = this->battleInfo.bReplaySaveTarget;
    this->resultMember.rivalCharaNo = v20;
  }
}

void __fastcall BattleSystem::BattleController::SetRivalDemoActionPhase(BattleSystem::BattleController *this)
{
  ActorChara **pPlayer; // rsi
  __int64 i; // rdi
  ActorChara *v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // ebp
  CharaProjectData *v7; // r14
  int CharaDataIndex; // eax
  __int64 iBaseCharaID; // rdx

  if ( this->roundPhase == MAIN )
  {
    pPlayer = this->actSystem.pPlayer;
    for ( i = 0i64; i < 2; ++i )
    {
      if ( (unsigned __int64)i <= 1 )
      {
        v4 = *pPlayer;
        if ( *pPlayer )
        {
          v5 = (__int64)v4->GetTargetActor(*pPlayer);
          if ( v5 )
          {
            v6 = *(_DWORD *)(v5 + 384);
            v7 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
            CharaDataIndex = CharaProjectData::GetCharaDataIndex(v7, v6);
            if ( CharaDataIndex >= 0 )
            {
              iBaseCharaID = (unsigned int)v7->pCharaData[CharaDataIndex].iBaseCharaID;
              if ( (int)iBaseCharaID < 0 )
                iBaseCharaID = v6;
            }
            else
            {
              iBaseCharaID = 0xFFFFFFFFi64;
            }
            v4->SetRivalDemoAction(v4, iBaseCharaID);
          }
        }
      }
      ++pPlayer;
    }
    *(_QWORD *)&this->roundPhase = 2i64;
  }
}

void __fastcall BattleSystem::BattleController::SetRivalDemoLoopSound(BattleSystem::BattleController *this)
{
  AppMain *v1; // rbp
  extension::SoundList *v3; // rdi
  bool IsActive; // al
  __int64 iRivalBGMTableID; // rdx
  SoundId playBGMID; // eax
  AppMain *v7; // rcx
  __int64 v8; // rax
  SoundId demoBGM; // edi
  float v10; // xmm3_4
  SoundId battleBGM; // eax
  AppMain *v12; // rcx
  __int64 v13; // rax
  BattleSystem::BattleController *v14; // rcx
  SoundId StageBGMSoundID; // eax
  float fNormalStageBGMPos; // xmm2_4
  bool v17; // [rsp+20h] [rbp-18h]

  v1 = *(AppMain **)&AppMain::pApp;
  v3 = (extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 2197144i64);
  if ( (*(_QWORD *)&AppMain::pApp == -2197144i64
     || !extension::SoundList::isPlayingSEByName(
           (extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 2197144i64),
           &s_soundIndex.m_keys[171]))
    && s_soundIndex.m_keys[171].m_sharedBuffer.m_ptr
    && !extension::SoundList::playSEByName(v3, &s_soundIndex.m_keys[171], 0i64) )
  {
    extension::SoundList::playSEByName(v1->m_Snd_Lists, &s_soundIndex.m_keys[171], 0i64);
  }
  if ( this->iRivalBGMTableID < 0 )
  {
    if ( AppMain::Sound_BGMPlay_IsActive((AppMain *)this) )
    {
      anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_BGM, 0.30000001, 0.5);
      if ( BattleSystem::BattleController::IsSuccessiveBattle(v14)
        && (unsigned int)BattleSystem::BattleController::GetStageBGMSoundID(this) != this->playBGMID )
      {
        StageBGMSoundID = (unsigned int)BattleSystem::BattleController::GetStageBGMSoundID(this);
        fNormalStageBGMPos = this->fNormalStageBGMPos;
        this->playBGMID = StageBGMSoundID;
        AppMain::RequestPlayBGM(v1, StageBGMSoundID, fNormalStageBGMPos, 1.0, v17);
      }
    }
  }
  else
  {
    IsActive = AppMain::Sound_BGMPlay_IsActive((AppMain *)this);
    iRivalBGMTableID = this->iRivalBGMTableID;
    if ( !IsActive )
    {
      if ( (int)iRivalBGMTableID >= 0 )
      {
        if ( (unsigned int)iRivalBGMTableID < 0xF
          && BattleSystem::rivalDemoBGMTable[iRivalBGMTableID].demoBGM == SND_BGM_10_PSYCHO )
        {
          return;
        }
        if ( (int)iRivalBGMTableID >= 0 && (unsigned int)iRivalBGMTableID < 0xF )
        {
          v10 = 0.0;
          demoBGM = BattleSystem::rivalDemoBGMTable[iRivalBGMTableID].demoBGM;
          this->playBGMID = demoBGM;
          goto LABEL_21;
        }
      }
      demoBGM = SND_NONE;
      v10 = 0.0;
      this->playBGMID = SND_NONE;
      goto LABEL_21;
    }
    if ( (int)iRivalBGMTableID < 0
      || (unsigned int)iRivalBGMTableID >= 0xF
      || BattleSystem::rivalDemoBGMTable[iRivalBGMTableID].demoBGM != SND_BGM_10_PSYCHO )
    {
      demoBGM = SND_NONE;
      if ( (int)iRivalBGMTableID < 0 || (unsigned int)iRivalBGMTableID >= 0xF )
        battleBGM = SND_NONE;
      else
        battleBGM = BattleSystem::rivalDemoBGMTable[iRivalBGMTableID].battleBGM;
      if ( this->playBGMID == battleBGM )
      {
        anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_BGM, 0.30000001, 0.5);
        return;
      }
      if ( (unsigned int)BattleSystem::BattleController::GetStageBGMSoundID(this) == this->playBGMID )
        this->fNormalStageBGMPos = AppMain::Sound_BGMPlay_GetPosition(v12);
      v13 = this->iRivalBGMTableID;
      if ( (int)v13 >= 0 && (unsigned int)v13 < 0xF )
      {
        v12 = (AppMain *)(5 * v13);
        demoBGM = BattleSystem::rivalDemoBGMTable[v13].demoBGM;
      }
      this->playBGMID = demoBGM;
      if ( demoBGM == SND_NONE )
      {
        AppMain::StopBGMUtil(v12, 1.0);
        return;
      }
      goto LABEL_20;
    }
    anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_BGM, 0.30000001, 0.5);
    playBGMID = this->playBGMID;
    if ( playBGMID != SND_BGM_10_PSYCHO && playBGMID != SND_BGM_29_RIVAL_ATHENA_VS_KENSOU )
    {
      if ( (unsigned int)BattleSystem::BattleController::GetStageBGMSoundID(this) == this->playBGMID )
        this->fNormalStageBGMPos = AppMain::Sound_BGMPlay_GetPosition(v7);
      v8 = this->iRivalBGMTableID;
      if ( (int)v8 < 0 || (unsigned int)v8 >= 0xF )
        demoBGM = SND_NONE;
      else
        demoBGM = BattleSystem::rivalDemoBGMTable[v8].demoBGM;
      this->playBGMID = demoBGM;
LABEL_20:
      v10 = *(float *)&FLOAT_1_0;
LABEL_21:
      AppMain::RequestPlayBGM(v1, demoBGM, 0.0, v10, v17);
    }
  }
}

void __fastcall BattleSystem::BattleController::SetRoundCallPhaseFromRivalDemo(BattleSystem::BattleController *this)
{
  __int64 v2; // rdi
  ActorChara **pPlayer; // rsi
  ActorChara *v4; // rbx
  _BOOL8 v5; // r8
  unsigned int iPlayerID; // eax
  char v7; // bl
  int v8; // ebx
  extension::SoundManager *v9; // rax
  extension::SoundManager *v10; // [rsp+40h] [rbp+8h]

  if ( this->roundPhase == SCREEN_OUT )
  {
    v2 = 0i64;
    pPlayer = this->actSystem.pPlayer;
    do
    {
      if ( (unsigned __int64)v2 <= 1 )
      {
        v4 = *pPlayer;
        if ( *pPlayer )
        {
          if ( !v4->IsReady(*pPlayer) )
          {
            LOBYTE(v5) = 1;
            v4->SetReady(v4, 0, v5);
          }
          iPlayerID = v4->iPlayerID;
          v7 = 0;
          if ( iPlayerID <= 1 )
            v7 = iPlayerID + 1;
          v8 = v7 & 3;
          v9 = extension::SoundManager::the_instance;
          if ( !extension::SoundManager::the_instance )
          {
            v10 = (extension::SoundManager *)operator new(0x310ui64);
            extension::SoundManager::SoundManager(v10);
            extension::SoundManager::the_instance = v9;
          }
          extension::SoundManager::stopUserTagedSE(v9, v8, 0.0);
        }
      }
      ++v2;
      ++pPlayer;
    }
    while ( v2 < 2 );
    this->actSystem.bUseSubCamera = 0;
    *(_QWORD *)&this->roundPhase = 4i64;
  }
}

void __fastcall BattleSystem::BattleController::SetRoundEndPausePhase(BattleSystem::BattleController *this)
{
  BattleSystem::WINNER_ID::ID roundWinnerID; // eax
  ActorChara *v3; // rdi
  int v4; // er8

  if ( this->roundPhase == WALL )
  {
    roundWinnerID = this->battleInfo.roundWinnerID;
    if ( roundWinnerID == COUNTER_HIT )
    {
      v3 = this->actSystem.pPlayer[0];
    }
    else
    {
      if ( roundWinnerID != GUARD_CRASH )
      {
LABEL_9:
        *(_QWORD *)&this->roundPhase = 10i64;
        return;
      }
      v3 = this->actSystem.pPlayer[1];
    }
    if ( v3 && v3->IsReady(v3) )
    {
      CameraControl::RequestWinnersCamera(&this->actSystem.cameraCtrl, v3, v4);
      *(_QWORD *)&this->roundPhase = 9i64;
      return;
    }
    goto LABEL_9;
  }
}

void __fastcall BattleSystem::BattleController::SetTrainingSetting(
        BattleSystem::BattleController *this,
        const TrainingSetting *training)
{
  ActorChara *v4; // rbx
  TrainingSetting::GUARD m_iGuard; // er14
  TrainingSetting::COUNTER m_iCounter; // edi
  TrainingSetting::ACTION m_iAction; // ecx
  int v8; // ebp
  InputKeyRecord (*v9)[6]; // rax
  BattleSystem::BattleController *v10; // rcx
  BattleSystem::BattleController::KEY_RECORD_MODE keyRecordMode; // ecx
  InputKeyRecord (*v12)[6]; // rax
  BattleSystem::BattleController *v13; // rcx
  InputKeyRecord (*m_KeyRecord)[6]; // rax
  BattleSystem::BattleController *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int32 v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rdx
  std::bitset<61>::reference *p_result; // r12
  int *m_iMAXModeGauge; // r14
  __int64 v24; // r13
  std::bitset<61> *Pbitset; // rdi
  int v26; // eax
  __int64 v27; // rdx
  unsigned int v28; // ebx
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  TrainingSetting::RECORD_TYPE m_iRecordMode; // ecx
  BattleSystem::BattleController::KEY_RECORD_TYPE::ID v36; // edx
  TrainingSetting::REVERSAL_TYPE m_iReversalType; // ecx
  __int32 v38; // ecx
  __int32 v39; // ecx
  __int64 v40; // r9
  std::bitset<61>::reference *v41; // rax
  int v42; // er10
  unsigned __int64 Mypos; // rdx
  std::bitset<61> *v44; // rcx
  unsigned __int64 v45; // rax
  char v46; // dl
  int *v47; // rcx
  int v48; // eax
  int v49; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-50h] BYREF
  __int64 v51; // [rsp+38h] [rbp-40h]

  v51 = -2i64;
  v4 = this->actSystem.pPlayer[1];
  result._Pbitset = (std::bitset<61> *)this->actSystem.pPlayer[0];
  result._Mypos = (unsigned __int64)v4;
  m_iGuard = training->m_iGuard;
  m_iCounter = training->m_iCounter;
  m_iAction = training->m_iAction;
  v8 = 1;
  if ( m_iAction == PLAYER )
  {
    m_iGuard = GUARD_OFF;
    m_iCounter = COUNTER_OFF;
    this->playerInfo[1].playerType = STAND;
    this->bEnableKeyRecord = 0;
    if ( this->keyRecordMode )
    {
      this->keyRecordMode = STOP;
      m_KeyRecord = this->m_KeyRecord;
      if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
      {
        do
        {
          v15 = (BattleSystem::BattleController *)&(*m_KeyRecord)[6];
          if ( m_KeyRecord != (InputKeyRecord (*)[6])&(*m_KeyRecord)[6] )
          {
            do
            {
              (*m_KeyRecord)[0].uiPlayCount = 0;
              m_KeyRecord = (InputKeyRecord (*)[6])((char *)m_KeyRecord + 16);
            }
            while ( m_KeyRecord != (InputKeyRecord (*)[6])v15 );
          }
          m_KeyRecord = (InputKeyRecord (*)[6])v15;
        }
        while ( v15 != (BattleSystem::BattleController *)&this->missionSampleMode );
      }
    }
    goto LABEL_24;
  }
  if ( (unsigned int)(m_iAction - 17) <= 4 )
  {
    m_iGuard = GUARD_OFF;
    m_iCounter = COUNTER_OFF;
    this->playerInfo[1].playerType = CROUCH;
    BattleSystem::CpuSequence::CancelTrainingCpu(&this->cpuPlayer[1], (_BOOL8)training);
    this->cpuPlayer[1].iDifficulty = training->m_iAction - 17;
    this->bEnableKeyRecord = 0;
    if ( this->keyRecordMode )
    {
      this->keyRecordMode = STOP;
      v9 = this->m_KeyRecord;
      if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
      {
        do
        {
          v10 = (BattleSystem::BattleController *)&(*v9)[6];
          if ( v9 != (InputKeyRecord (*)[6])&(*v9)[6] )
          {
            do
            {
              (*v9)[0].uiPlayCount = 0;
              v9 = (InputKeyRecord (*)[6])((char *)v9 + 16);
            }
            while ( v9 != (InputKeyRecord (*)[6])v10 );
          }
          v9 = (InputKeyRecord (*)[6])v10;
        }
        while ( v10 != (BattleSystem::BattleController *)&this->missionSampleMode );
      }
    }
LABEL_24:
    this->keyRecordMode = STOP;
    this->keyRecordInfo.iKeyPlaySlot = -1;
    goto LABEL_25;
  }
  if ( (unsigned int)m_iAction > CROUCH )
    m_iGuard = GUARD_OFF;
  this->bEnableKeyRecord = 1;
  keyRecordMode = this->keyRecordMode;
  if ( ((keyRecordMode - 3) & 0xFFFFFFFD) == 0 )
  {
    if ( keyRecordMode )
    {
      this->keyRecordMode = STOP;
      v12 = this->m_KeyRecord;
      if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)this->m_KeyRecord != &this->missionSampleMode )
      {
        do
        {
          v13 = (BattleSystem::BattleController *)&(*v12)[6];
          if ( v12 != (InputKeyRecord (*)[6])&(*v12)[6] )
          {
            do
            {
              (*v12)[0].uiPlayCount = 0;
              v12 = (InputKeyRecord (*)[6])((char *)v12 + 16);
            }
            while ( v12 != (InputKeyRecord (*)[6])v13 );
          }
          v12 = (InputKeyRecord (*)[6])v13;
        }
        while ( v13 != (BattleSystem::BattleController *)&this->missionSampleMode );
      }
    }
    this->keyRecordInfo.iKeyPlaySlot = -1;
    this->keyRecordMode = STOP;
  }
  this->playerInfo[1].playerType = CROUCH;
  BattleSystem::CpuSequence::SetTrainingCpu(&this->cpuPlayer[1], training);
LABEL_25:
  switch ( m_iGuard )
  {
    case GUARD_OFF:
      v16 = 0i64;
      goto LABEL_27;
    case GUARD_ON:
      v4->SetAllGuardMode(v4, 1);
      v4->SetOneHitGuardMode(v4, 0);
      v4->SetInvalidGuardChange(v4, 1);
      v18 = 0i64;
      goto LABEL_33;
    case ALLGUARD:
    case ONEGUARD_JUMP:
    case GC_FRONT:
    case GC_BACK:
    case GC_ATTACK:
      v16 = 1i64;
LABEL_27:
      v4->SetAllGuardMode(v4, v16);
      v17 = 0i64;
      goto LABEL_28;
    case ONEHIT_GUARD:
      v4->SetAllGuardMode(v4, 0);
      v17 = 1i64;
LABEL_28:
      v4->SetOneHitGuardMode(v4, v17);
      v4->SetInvalidGuardChange(v4, 0);
      v18 = 0i64;
      goto LABEL_33;
    case GUARD_RANDOM:
      v4->SetAllGuardMode(v4, 0);
      v4->SetOneHitGuardMode(v4, 0);
      v4->SetInvalidGuardChange(v4, 0);
      v18 = 1i64;
LABEL_33:
      v4->SetRandomGuard(v4, v18);
      v4->SetAllJustGuard(v4, 0);
      break;
    default:
      break;
  }
  if ( m_iCounter == COUNTER_OFF )
  {
    v21 = 0i64;
    goto LABEL_40;
  }
  v19 = m_iCounter - 1;
  if ( !v19 )
  {
    v21 = 1i64;
LABEL_40:
    v4->SetAlwaysCounter(v4, v21);
    v20 = 0i64;
    goto LABEL_41;
  }
  if ( v19 == 1 )
  {
    v4->SetAlwaysCounter(v4, 0);
    v20 = 1i64;
LABEL_41:
    v4->SetRandomCounter(v4, v20);
  }
  p_result = &result;
  m_iMAXModeGauge = training->m_iMAXModeGauge;
  v24 = 2i64;
  do
  {
    Pbitset = p_result->_Pbitset;
    (*(void (__fastcall **)(std::bitset<61> *, __int64))(p_result->_Pbitset->_Array[0] + 3944))(
      p_result->_Pbitset,
      1i64);
    (*(void (__fastcall **)(std::bitset<61> *, __int64))(Pbitset->_Array[0] + 4072))(Pbitset, 1i64);
    (*(void (__fastcall **)(std::bitset<61> *, _QWORD))(Pbitset->_Array[0] + 4088))(Pbitset, 0i64);
    (*(void (__fastcall **)(std::bitset<61> *, _QWORD))(Pbitset->_Array[0] + 4104))(Pbitset, 0i64);
    (*(void (__fastcall **)(std::bitset<61> *, _QWORD))(Pbitset->_Array[0] + 4040))(Pbitset, 0i64);
    (*(void (__fastcall **)(std::bitset<61> *, _QWORD))(Pbitset->_Array[0] + 4184))(Pbitset, 0i64);
    v26 = *(m_iMAXModeGauge - 2);
    if ( v26 < 6 )
    {
      v28 = 65536000 * v26;
      (*(void (__fastcall **)(std::bitset<61> *, _QWORD))(Pbitset->_Array[0] + 3952))(Pbitset, 0i64);
      v27 = v28;
    }
    else
    {
      (*(void (__fastcall **)(std::bitset<61> *, __int64))(Pbitset->_Array[0] + 3952))(Pbitset, 1i64);
      v27 = 327680000i64;
    }
    (*(void (__fastcall **)(std::bitset<61> *, __int64))(Pbitset->_Array[0] + 3552))(Pbitset, v27);
    v29 = Pbitset->_Array[0];
    if ( *m_iMAXModeGauge < 3 )
    {
      (*(void (__fastcall **)(std::bitset<61> *, _QWORD))(v29 + 4200))(Pbitset, 0i64);
      v30 = (unsigned int)*m_iMAXModeGauge;
    }
    else
    {
      (*(void (__fastcall **)(std::bitset<61> *, __int64))(v29 + 4200))(Pbitset, 1i64);
      v30 = 2i64;
    }
    (*(void (__fastcall **)(std::bitset<61> *, __int64))(Pbitset->_Array[0] + 3576))(Pbitset, v30);
    v31 = Pbitset->_Array[0];
    if ( (unsigned int)(m_iMAXModeGauge[2] - 1) > 0x63 )
    {
      (*(void (__fastcall **)(std::bitset<61> *, __int64))(v31 + 4056))(Pbitset, 1i64);
      v32 = 100i64;
    }
    else
    {
      (*(void (__fastcall **)(std::bitset<61> *, _QWORD))(v31 + 4056))(Pbitset, 0i64);
      v32 = (unsigned int)m_iMAXModeGauge[2];
    }
    (*(void (__fastcall **)(std::bitset<61> *, __int64))(Pbitset->_Array[0] + 3640))(Pbitset, v32);
    v33 = Pbitset->_Array[0];
    if ( (unsigned int)(m_iMAXModeGauge[4] - 1) > 0x63 )
    {
      (*(void (__fastcall **)(std::bitset<61> *, __int64))(v33 + 4024))(Pbitset, 1i64);
      v34 = 100i64;
    }
    else
    {
      (*(void (__fastcall **)(std::bitset<61> *, _QWORD))(v33 + 4024))(Pbitset, 0i64);
      v34 = (unsigned int)m_iMAXModeGauge[4];
    }
    (*(void (__fastcall **)(std::bitset<61> *, __int64))(Pbitset->_Array[0] + 3616))(Pbitset, v34);
    ++m_iMAXModeGauge;
    p_result = (std::bitset<61>::reference *)((char *)p_result + 8);
    --v24;
  }
  while ( v24 );
  m_iRecordMode = training->m_iRecordMode;
  if ( m_iRecordMode )
  {
    if ( m_iRecordMode != STAND_GUARD )
      goto LABEL_61;
    v36 = STAND_GUARD;
  }
  else
  {
    v36 = NORMAL;
  }
  BattleSystem::BattleController::SetKeyRecordType(this, v36);
LABEL_61:
  m_iReversalType = training->m_iReversalType;
  if ( m_iReversalType )
  {
    v38 = m_iReversalType - 1;
    if ( v38 )
    {
      v39 = v38 - 1;
      if ( v39 )
      {
        if ( v39 == 1 )
          this->keyRecordInfo.reversalType = BIND_ACTION;
      }
      else
      {
        this->keyRecordInfo.reversalType = BIND_ALL;
      }
    }
    else
    {
      this->keyRecordInfo.reversalType = ACTION;
    }
  }
  else
  {
    this->keyRecordInfo.reversalType = ALL;
  }
  BattleSystem::BattleController::SetKeyRecordSlot(this, training->m_iRecordSlot);
  v40 = 1i64;
  do
  {
    if ( (unsigned int)v8 <= 5 )
    {
      v41 = std::bitset<21>::operator[](
              (std::bitset<61> *)&this->keyRecordInfo.enableKeyPlaySlot[this->keyRecordInfo.iKeyRecordType],
              &result,
              v8);
      Mypos = v41->_Mypos;
      v44 = v41->_Pbitset;
      if ( Mypos >= 6 )
        std::_Xout_of_range("invalid bitset<N> position");
      v45 = Mypos >> 5;
      v46 = Mypos & 0x1F;
      v47 = (int *)v44 + v45;
      v48 = *v47;
      if ( v42 )
        v49 = v48 | (1 << v46);
      else
        v49 = v48 & ~(1 << v46);
      *v47 = v49;
    }
    ++v8;
    ++v40;
  }
  while ( v8 < 6 );
  this->bAttackData = training->m_iAttackData != 0;
  this->bKeyData = training->m_iKeyData != 0;
}

void __fastcall BattleSystem::BattleController::SetupNextMissionData(
        BattleSystem::BattleController *this,
        const ComboMissionData *pMission)
{
  BattleSystem::BattleController *v4; // rcx
  bool IsTutorialMode; // al
  int iNextMissionID; // ebx

  if ( pMission )
  {
    if ( this->iNextMissionID >= 0 && this->iNextMissionID < pMission->GetDataCount((ComboMissionData *)pMission) )
    {
      IsTutorialMode = BattleSystem::BattleController::IsTutorialMode(v4);
      iNextMissionID = this->iNextMissionID;
      if ( IsTutorialMode )
        GameDataInfo::getInstance()->m_TutorialNo = iNextMissionID;
      else
        GameDataInfo::getInstance()->m_MissionTrialNo = iNextMissionID;
      BattleSystem::ComboMissionJudge::SetMission(&this->comboMission, &pMission->pMissionData[this->iNextMissionID]);
      this->missionSampleMode = NONE;
    }
    this->iNextMissionID = -1;
  }
  else
  {
    this->iNextMissionID = -1;
  }
}

void __fastcall BattleSystem::BattleController::Update(
        BattleSystem::BattleController *this,
        __int64 a2,
        int *p_iMemberReferIndex)
{
  bool v4; // r13
  __int64 v5; // rbx
  AppMain *v6; // rdi
  BattleSystem::BattleController::ROUND_PHASE roundPhase; // eax
  unsigned __int64 v8; // r9
  unsigned int v9; // eax
  ActorChara **pPlayer; // rdi
  char v11; // al
  unsigned int uiRoundPhaseFrame; // eax
  char v13; // r14
  ActorChara **v14; // rdi
  int v15; // er15
  BattleSystem::BATTLE_MODE battleMode; // eax
  const ComboMissionData::MissionData *pMissionData; // rax
  bool v18; // cl
  const ComboMissionData::MissionData *v19; // rax
  bool v20; // r13
  int v21; // edi
  BattleSystem::WINNER_ID::ID v22; // eax
  int v23; // edi
  ActorChara **v24; // r12
  unsigned int v25; // edi
  extension::SoundManager *v26; // rax
  BattleSystem::WINNER_ID::ID roundWinnerID; // edx
  _BOOL8 v28; // rdx
  unsigned __int8 v29; // r9
  int v30; // er12
  __int64 iRoundSetCount; // rax
  int v32; // eax
  int v33; // er15
  __int64 v34; // rax
  int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // r8
  ActionBlackout::BLACKOUT_TYPE v38; // edx
  ActorChara *v39; // rcx
  ActorChara *v40; // rcx
  unsigned __int8 v41; // r9
  int TrophyPlayerID; // eax
  int v43; // edi
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // edi
  int v47; // edi
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // edx
  unsigned __int8 v55; // r8
  int iRoundLimitFrame; // er9
  ActorChara *v57; // rcx
  ActorChara *v58; // r12
  int v59; // er15
  int v60; // edi
  BattleSystem::WINNER_ID::ID v61; // eax
  unsigned __int8 v62; // dl
  unsigned __int8 v63; // r8
  unsigned __int8 v64; // r9
  char v65; // r15
  unsigned int v66; // eax
  ActorChara *v67; // rcx
  __int64 v68; // rdi
  ActorChara **v69; // r14
  ActorChara *v70; // rbx
  BattleSystem::BATTLE_MODE v71; // ebx
  int v72; // er12
  Fix32 *p_xRecoveryVital; // r15
  ActorChara **v74; // r14
  __int64 v75; // rax
  ActorChara *v76; // r14
  int index; // edi
  char IsRoundWinnerPlayer; // bl
  __int64 v79; // r8
  CHARACTER_NO BattleBaseCharaNo; // eax
  BattleSystem::BattleController *v81; // rcx
  bool IsPerfectWin; // al
  BattleSystem::BattlePlayerInfo *v83; // rcx
  unsigned int uiRoundPassFrame; // ecx
  int v85; // eax
  int v86; // eax
  SaveRecord_PlayerData *v87; // rcx
  __int64 v88; // rax
  int v89; // edx
  char v90; // dl
  BattleSystem::BattlePlayerInfo *v91; // rcx
  int v92; // er13
  int v93; // edx
  BattleSystem::BattleController *v94; // rcx
  GameDataInfo *v95; // rax
  BattleSystem::BattleController *v96; // rcx
  GameDataInfo *v97; // rax
  GameDataInfo *v98; // rax
  GameDataInfo *v99; // rax
  bool v100; // dl
  __int64 v101; // rax
  __int64 v102; // rcx
  const ComboMissionData::MissionData *v103; // rax
  GameDataInfo *Instance; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  GameDataInfo *v107; // rax
  int v108; // edi
  ActorChara **pActor; // rbx
  char v110; // al
  int v111; // er15
  int *p_iMoveFrame; // rdi
  ActorChara **v113; // r12
  ActorChara *v114; // rbx
  unsigned int iStartFrame; // er14
  __int64 iMemberCount; // rax
  __int64 v117; // rdx
  unsigned int v118; // edx
  BattleSystem::PLAYER_TYPE *p_playerType; // rbx
  BattleSystem::CpuSequence *cpuPlayer; // rdi
  ActorChara **v121; // [rsp+30h] [rbp-69h]
  OGLVec3 result; // [rsp+38h] [rbp-61h] BYREF
  __int64 v123; // [rsp+48h] [rbp-51h]
  std::function<void __cdecl(Actor &)> v124; // [rsp+50h] [rbp-49h] BYREF
  __int64 v125; // [rsp+90h] [rbp-9h]
  extension::SoundManager *v126; // [rsp+100h] [rbp+67h] BYREF
  BattleSystem::BATTLE_MODE v127; // [rsp+108h] [rbp+6Fh]
  int v128; // [rsp+110h] [rbp+77h]
  __int64 v129; // [rsp+118h] [rbp+7Fh]

  v125 = -2i64;
  v4 = 0;
  v5 = 0i64;
  v6 = *(AppMain **)&AppMain::pApp;
  *(_QWORD *)&result.x = *(_QWORD *)&AppMain::pApp;
  roundPhase = this->roundPhase;
  v123 = 2i64;
  v8 = 0x140000000ui64;
  while ( 2 )
  {
    switch ( roundPhase )
    {
      case INIT:
        LOBYTE(v126) = 1;
        pPlayer = this->actSystem.pPlayer;
        do
        {
          if ( (unsigned __int64)v5 <= 1
            && *pPlayer
            && !((unsigned __int8 (__fastcall *)(ActorChara *, __int64, int *, unsigned __int64))(*pPlayer)->IsEndSetup)(
                  *pPlayer,
                  a2,
                  p_iMemberReferIndex,
                  v8) )
          {
            v11 = 0;
            LOBYTE(v126) = 0;
            goto LABEL_18;
          }
          ++v5;
          ++pPlayer;
        }
        while ( v5 < 2 );
        v11 = (char)v126;
        if ( (_BYTE)v126 )
        {
          v124._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<_lambda_60860bae646c1a25c68b7e5eea623519_,std::allocator<int>,void,Actor &>::`vftable';
          v124._Mystorage._Ptrs[1] = (std::_Func_base<void,Actor &> *)&v126;
          v124._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v124;
          ActionSystem::FuncCallRequest(&this->actSystem, (Actor *)5, &v124);
          v11 = (char)v126;
        }
LABEL_18:
        LODWORD(v5) = 0;
        if ( v11 )
        {
          LODWORD(v5) = 1;
          BattleSystem::BattleController::SetInitialStartAction(this, a2, (_BOOL8)p_iMemberReferIndex);
        }
        goto LABEL_284;
      case SCREEN_OUT:
        if ( !this->uiRoundPhaseFrame )
          this->actSystem.bUseSubCamera = 1;
        goto LABEL_284;
      case ERASE:
        uiRoundPhaseFrame = this->uiRoundPhaseFrame;
        if ( uiRoundPhaseFrame )
        {
          if ( uiRoundPhaseFrame != 1 )
          {
            v13 = 1;
            v14 = this->actSystem.pPlayer;
            while ( (unsigned __int64)v5 > 1
                 || !*v14
                 || ((unsigned __int8 (__fastcall *)(ActorChara *, __int64, int *, unsigned __int64))(*v14)->IsReady)(
                      *v14,
                      a2,
                      p_iMemberReferIndex,
                      v8) )
            {
              ++v5;
              ++v14;
              if ( v5 >= 2 )
                goto LABEL_36;
            }
            v13 = 0;
LABEL_36:
            LODWORD(v5) = 0;
            if ( v13 )
              LODWORD(v5) = 4;
            goto LABEL_284;
          }
          v5 = (__int64)this->actSystem.pPlayer[1];
        }
        else
        {
          v5 = (__int64)this->actSystem.pPlayer[0];
        }
        if ( !v5
          || (*(unsigned __int8 (__fastcall **)(__int64, __int64, int *, unsigned __int64))(*(_QWORD *)v5 + 2168i64))(
               v5,
               a2,
               p_iMemberReferIndex,
               0x140000000ui64) )
        {
          goto LABEL_258;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 3280i64))(v5);
        LODWORD(v5) = 0;
        goto LABEL_284;
      case GUARD:
        v9 = this->uiRoundPhaseFrame;
        if ( v9 )
        {
          if ( this->bDirectStart && v9 >= 8 )
          {
            BattleSystem::BattleController::BattleStart(this);
            v6 = *(AppMain **)&AppMain::pApp;
            *(_QWORD *)&result.x = *(_QWORD *)&AppMain::pApp;
            roundPhase = this->roundPhase;
            v8 = 0x140000000ui64;
            if ( (unsigned int)roundPhase <= (WALL|GROUND) )
              continue;
          }
        }
        else
        {
          BattleSystem::BattleController::SetRealTimeMultiPlayFlag(this);
        }
        goto LABEL_284;
      case DIE:
        v15 = 0;
        battleMode = this->battleInfo.battleMode;
        if ( battleMode == MISSION || battleMode == MISSION_DEVELOP )
        {
          BattleSystem::ComboMissionJudge::Update(&this->comboMission);
          pMissionData = this->comboMission.pMissionData;
          if ( pMissionData )
            v18 = pMissionData->settingData.iCompleteCount <= this->comboMission.iCompleteCount;
          else
            v18 = 1;
          v19 = this->comboMission.pMissionData;
          if ( v19 )
            v20 = v19->settingData.iCompleteType == 1 && this->comboMission.bOneTermClear;
          else
            v20 = 1;
          v4 = v18 || v20;
        }
        if ( this->bPartyBattle && !GameDataInfo::getInstance()->m_ReplayFlag )
        {
          v21 = 0;
          LODWORD(a2) = 0;
          p_iMemberReferIndex = &this->playerInfo[0].iMemberReferIndex;
          v8 = 0x140000000ui64;
          do
          {
            if ( g_NetworkManager.gamedata.disconnectBattleUser[(unsigned __int8)a2][*(unsigned __int8 *)p_iMemberReferIndex] )
              v21 |= 1 << a2;
            a2 = (unsigned int)(a2 + 1);
            p_iMemberReferIndex += 42;
          }
          while ( (int)a2 < 2 );
          if ( v21 )
          {
            this->battleInfo.bReplaySaveTarget = 0;
            *(_DWORD *)(*(_QWORD *)&result.x + 2507532i64) = 1;
            LODWORD(v5) = 8;
            UserGameOperation::Instance();
            if ( v21 == 1 )
            {
              this->battleInfo.roundWinnerID = GUARD_CRASH;
            }
            else
            {
              v22 = REVERSAL;
              if ( v21 == 2 )
                v22 = COUNTER_HIT;
              this->battleInfo.roundWinnerID = v22;
            }
            this->battleInfo.roundFinishType = REVERSAL;
          }
        }
        v23 = 0;
        v24 = this->actSystem.pPlayer;
        do
        {
          if ( (unsigned int)v23 <= 1
            && *v24
            && ((unsigned __int8 (__fastcall *)(ActorChara *, __int64, int *, unsigned __int64))(*v24)->IsKO)(
                 *v24,
                 a2,
                 p_iMemberReferIndex,
                 v8) )
          {
            v15 |= 1 << v23;
          }
          ++v23;
          ++v24;
        }
        while ( v23 < 2 );
        if ( v4 )
        {
          LODWORD(v5) = 8;
          UserGameOperation::Instance();
          this->battleInfo.roundWinnerID = COUNTER_HIT;
          this->battleInfo.roundFinishType = SUPER_CANCEL;
          goto LABEL_152;
        }
        if ( v15 <= 0 )
        {
          BattleSystem::BattleSystemInfo::UpdateRoundTime(
            &this->battleInfo,
            this->actSystem.actBlack.data[this->actSystem.actBlack.iPriTarget].attr >= CLIMAX_CANCEL);
          iRoundLimitFrame = this->battleInfo.iRoundLimitFrame;
          if ( iRoundLimitFrame )
          {
            if ( iRoundLimitFrame > 0 )
            {
              if ( this->battleInfo.timeLimit == ACTOR_HIT_PUSH
                || (v54 = this->battleInfo.iRoundLimitFrame / 90, v54 <= 10) )
              {
                FighterOperation::SetLightBar(1, v54, v55, iRoundLimitFrame);
                FighterOperation::SetLightBar(2, v62, v63, v64);
              }
            }
          }
          else
          {
            LODWORD(v5) = 8;
            UserGameOperation::Instance();
            v57 = this->actSystem.pPlayer[0];
            v58 = this->actSystem.pPlayer[1];
            v59 = 0;
            v60 = 0;
            if ( v57 )
              v59 = v57->GetVitalPercent(v57);
            if ( v58 )
              v60 = v58->GetVitalPercent(v58);
            if ( v59 >= v60 )
            {
              v61 = REVERSAL;
              if ( v59 > v60 )
                v61 = COUNTER_HIT;
              this->battleInfo.roundWinnerID = v61;
            }
            else
            {
              this->battleInfo.roundWinnerID = GUARD_CRASH;
            }
            this->battleInfo.roundFinishType = REVERSAL;
          }
LABEL_152:
          ++this->uiSystemCount;
          goto LABEL_284;
        }
        v25 = 0;
        UserGameOperation::Instance();
        v26 = extension::SoundManager::the_instance;
        if ( !extension::SoundManager::the_instance )
        {
          v126 = (extension::SoundManager *)operator new(0x310ui64);
          extension::SoundManager::SoundManager(v126);
          extension::SoundManager::the_instance = v26;
        }
        extension::SoundManager::stopUserTagedSE(v26, 0x200u, 0.0);
        switch ( v15 )
        {
          case 1:
            this->battleInfo.roundWinnerID = GUARD_CRASH;
            break;
          case 2:
            this->battleInfo.roundWinnerID = COUNTER_HIT;
            break;
          case 3:
            this->battleInfo.roundWinnerID = REVERSAL;
            break;
        }
        roundWinnerID = this->battleInfo.roundWinnerID;
        this->battleInfo.roundFinishType = (roundWinnerID == REVERSAL) + 1;
        LODWORD(v5) = 7;
        if ( BattleSystem::BattleController::CheckFinalKO(this, roundWinnerID) )
          LODWORD(v5) = 11;
        v30 = v15 & 1;
        if ( (v15 & 1) == 0 )
          goto LABEL_87;
        iRoundSetCount = this->playerInfo[1].iRoundSetCount;
        if ( (int)iRoundSetCount >= 5 )
          goto LABEL_86;
        v32 = this->playerInfo[1].iFinishSkill[iRoundSetCount];
        if ( v32 == 9 )
        {
          v25 = 2;
        }
        else
        {
          v25 = 1;
          if ( (unsigned int)(v32 - 7) > 1 )
LABEL_86:
            v25 = 0;
        }
LABEL_87:
        v33 = v15 & 2;
        if ( !v33 )
          goto LABEL_95;
        v34 = this->playerInfo[0].iRoundSetCount;
        if ( (int)v34 >= 5 )
          goto LABEL_95;
        v35 = this->playerInfo[0].iFinishSkill[v34];
        if ( v35 == 9 )
        {
          v36 = 2;
        }
        else
        {
          if ( (unsigned int)(v35 - 7) > 1 )
            goto LABEL_95;
          v36 = 1;
        }
        if ( v36 > v25 )
          v25 = v36;
LABEL_95:
        if ( this->actSystem.actBlack.data[this->actSystem.actBlack.iPriTarget].type != CLIMAX_CANCEL )
        {
          v37 = v25 - 1;
          if ( v25 == 1 )
          {
            v38 = THROW_ESCAPE;
          }
          else
          {
            if ( v25 != 2 )
              goto LABEL_102;
            v38 = GUARD_CANCEL;
          }
          ActionBlackout::RequestAkebono(&this->actSystem.actBlack, v38);
        }
        anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_BGM, 0.30000001, 0.0);
        this->bAkebonoKO = 1;
LABEL_102:
        if ( v30 )
        {
          v39 = this->actSystem.pPlayer[0];
          if ( v39 )
          {
            LOBYTE(v37) = v25 != 0;
            LOBYTE(v28) = (_DWORD)v5 == 11;
            v39->SetKOVoice(v39, v28, v37);
          }
        }
        if ( v33 )
        {
          v40 = this->actSystem.pPlayer[1];
          if ( v40 )
          {
            LOBYTE(v37) = v25 != 0;
            LOBYTE(v28) = (_DWORD)v5 == 11;
            v40->SetKOVoice(v40, v28, v37);
          }
        }
        if ( this->bAkebonoKO )
        {
          FighterOperation::SetVibration(1, 0.8, 0xC8u, v29);
          FighterOperation::SetVibration(2, 0.8, 0xC8u, v41);
        }
        this->koTimeStopInfo.winnerID = this->battleInfo.roundWinnerID;
        this->koTimeStopInfo.uiCount = 0;
        this->koTimeStopInfo.uiStartDelay = 4;
        this->koTimeStopInfo.uiStopFrame = 60;
        TrophyPlayerID = getTrophyPlayerID();
        v43 = 0;
        if ( TrophyPlayerID )
        {
          if ( TrophyPlayerID == 1 )
          {
            if ( v30 )
            {
              v45 = this->playerInfo[1].iRoundSetCount;
              v43 = 0;
              if ( (int)v45 < 5 )
                v43 = this->playerInfo[1].iFinishSkill[v45];
            }
          }
        }
        else if ( v33 )
        {
          v44 = this->playerInfo[0].iRoundSetCount;
          if ( (int)v44 < 5 )
            v43 = this->playerInfo[0].iFinishSkill[v44];
        }
        if ( IsEnableGameMode4TorophyCntup() )
        {
          v46 = v43 - 7;
          if ( v46 )
          {
            v47 = v46 - 1;
            if ( v47 )
            {
              if ( v47 == 1 )
              {
                v48 = *(_QWORD *)&AppMain::pApp;
                v49 = *(unsigned int *)(*(_QWORD *)&AppMain::pApp + 2205184i64) + 1i64;
                if ( v49 < 0 )
                {
                  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205184i64) = 0;
                }
                else if ( v49 >= 0xFFFFFFFFi64 )
                {
                  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205184i64) = -1;
                }
                else
                {
                  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205184i64) = v49;
                  SaveRecord_PlayerData::CheckAchivementCountComplete(
                    (SaveRecord_PlayerData *)(v48 + 2202784),
                    FINISH_CRIMAX_SSP);
                }
              }
            }
            else
            {
              v50 = *(_QWORD *)&AppMain::pApp;
              v51 = *(unsigned int *)(*(_QWORD *)&AppMain::pApp + 2205180i64) + 1i64;
              if ( v51 < 0 )
              {
                *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205180i64) = 0;
              }
              else if ( v51 >= 0xFFFFFFFFi64 )
              {
                *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205180i64) = -1;
              }
              else
              {
                *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205180i64) = v51;
                SaveRecord_PlayerData::CheckAchivementCountComplete(
                  (SaveRecord_PlayerData *)(v50 + 2202784),
                  FINISH_MAX_SSP);
              }
            }
          }
          else
          {
            v52 = *(_QWORD *)&AppMain::pApp;
            v53 = *(unsigned int *)(*(_QWORD *)&AppMain::pApp + 2205176i64) + 1i64;
            if ( v53 < 0 )
            {
              *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205176i64) = 0;
            }
            else if ( v53 >= 0xFFFFFFFFi64 )
            {
              *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205176i64) = -1;
            }
            else
            {
              *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205176i64) = v53;
              SaveRecord_PlayerData::CheckAchivementCountComplete((SaveRecord_PlayerData *)(v52 + 2202784), FINISH_SSP);
            }
          }
        }
        goto LABEL_152;
      case GROUND:
        if ( this->uiRoundPhaseFrame >= 0xB4 )
        {
          anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_BGM, 1.0, 4.0);
          ActionSystem::SetPlaySpeed(&this->actSystem, 1.0);
          this->bAkebonoKO = 0;
          LODWORD(v5) = 8;
        }
        goto LABEL_284;
      case WALL|MAIN:
        LODWORD(v5) = 10;
        if ( !this->uiRoundPhaseFrame )
          LODWORD(v5) = 0;
        goto LABEL_284;
      case WALL|SCREEN_OUT:
        v65 = 0;
        v66 = this->uiRoundPhaseFrame;
        if ( v66 )
        {
          if ( v66 != 1 )
          {
            v65 = 1;
            if ( v66 < 0x384 )
            {
              v68 = 0i64;
              v69 = this->actSystem.pPlayer;
              do
              {
                if ( (unsigned __int64)v68 <= 1 )
                {
                  v70 = *v69;
                  if ( *v69 )
                  {
                    if ( !((unsigned __int8 (__fastcall *)(ActorChara *, __int64, int *, unsigned __int64))v70->IsGotoNextRound)(
                            *v69,
                            a2,
                            p_iMemberReferIndex,
                            v8) )
                    {
                      v65 = 0;
                      if ( !v70->IsRoundEndState(v70) )
                        v70->SetRoundEndAction(v70);
                    }
                  }
                }
                ++v68;
                ++v69;
              }
              while ( v68 < 2 );
            }
LABEL_172:
            LODWORD(v5) = v65 != 0 ? 0xC : 0;
            goto LABEL_284;
          }
          v67 = this->actSystem.pPlayer[1];
        }
        else
        {
          v67 = this->actSystem.pPlayer[0];
        }
        if ( v67 )
          ((void (__fastcall *)(ActorChara *, __int64, int *, unsigned __int64))v67->SetRoundEndAction)(
            v67,
            a2,
            p_iMemberReferIndex,
            0x140000000ui64);
        goto LABEL_172;
      case WALL|ERASE:
      case WALL|HIT:
        if ( this->uiRoundPhaseFrame )
          goto LABEL_258;
        v71 = this->battleInfo.battleMode;
        v127 = v71;
        if ( v71 == MISSION || v71 == MISSION_DEVELOP )
        {
          if ( (unsigned int)(this->missionSampleMode - 1) <= 1 )
          {
            BattleSystem::BattleController::SetKeyRecordMode(this, STOP);
          }
          else
          {
            v103 = this->comboMission.pMissionData;
            if ( !v103 || v103->settingData.iCompleteCount <= this->comboMission.iCompleteCount )
            {
              if ( BattleSystem::BattleController::IsTutorialMode(this) )
              {
                Instance = GameDataInfo::getInstance();
                v105 = *(_QWORD *)&AppMain::pApp;
                v106 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 2205112i64);
                _bittestandset64(&v106, Instance->m_TutorialNo);
                *(_QWORD *)(v105 + 2205112) = v106;
              }
              else
              {
                v107 = GameDataInfo::getInstance();
                v105 = v107->m_CharacterNo[0][0];
                if ( (_DWORD)v105 != -1 )
                {
                  v105 *= 32i64;
                  *(_DWORD *)(v105 + *(_QWORD *)&AppMain::pApp + 2202888) |= 1 << v107->m_MissionTrialNo;
                }
              }
              AppMain::SaveDataAsyncSave(v6, v105);
            }
          }
          goto LABEL_258;
        }
        v128 = 0;
        LOBYTE(v126) = v71 == TEAM;
        v72 = 0;
        v129 = 0i64;
        v121 = this->actSystem.pPlayer;
        p_xRecoveryVital = &this->playerInfo[0].roundEndInfo.xRecoveryVital;
        v74 = this->actSystem.pPlayer;
        v75 = 0i64;
        break;
      case WALL|DIE:
        LOBYTE(v126) = 1;
        v108 = 0;
        if ( this->resultMember.iMemberCount <= 0 )
          goto LABEL_267;
        pActor = this->resultMember.pActor;
        while ( !*pActor
             || ((unsigned __int8 (__fastcall *)(ActorChara *, __int64, int *, unsigned __int64))(*pActor)->IsEndSetup)(
                  *pActor,
                  a2,
                  p_iMemberReferIndex,
                  v8) )
        {
          ++v108;
          ++pActor;
          if ( v108 >= this->resultMember.iMemberCount )
          {
            v110 = (char)v126;
            if ( (_BYTE)v126 )
            {
LABEL_267:
              v124._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<_lambda_ad3ff183b2c7791a4bd3e61110463e86_,std::allocator<int>,void,Actor &>::`vftable';
              v124._Mystorage._Ptrs[1] = (std::_Func_base<void,Actor &> *)&v126;
              v124._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v124;
              ActionSystem::FuncCallRequest(&this->actSystem, (Actor *)5, &v124);
              v110 = (char)v126;
            }
            goto LABEL_268;
          }
        }
        v110 = 0;
LABEL_268:
        LODWORD(v5) = v110 != 0;
        goto LABEL_284;
      case WALL|GROUND:
        v111 = 0;
        p_iMoveFrame = &BattleSystem::resultPosition[0].iMoveFrame;
        v113 = this->resultMember.pActor;
        do
        {
          v114 = *v113;
          if ( *v113 )
          {
            iStartFrame = *(p_iMoveFrame - 1);
            if ( !v111 )
            {
              iMemberCount = this->resultMember.iMemberCount;
              if ( (int)iMemberCount < 3 )
                iStartFrame = BattleSystem::resultPosition[iMemberCount].iStartFrame;
            }
            v117 = this->uiRoundPhaseFrame;
            if ( iStartFrame + *p_iMoveFrame > (unsigned int)v117 )
            {
              if ( iStartFrame == (_DWORD)v117 )
                ((void (__fastcall *)(ActorChara *, __int64, int *, unsigned __int64))v114->SetResultDemoAction)(
                  *v113,
                  v117,
                  p_iMemberReferIndex,
                  0x140000000ui64);
              v118 = this->uiRoundPhaseFrame;
              if ( iStartFrame <= v118 )
              {
                CameraControl::Easing(
                  &result,
                  &BattleSystem::resultPosition[v111].startPos,
                  &BattleSystem::resultPosition[v111].endPos,
                  (float)(int)(v118 - iStartFrame) / (float)*p_iMoveFrame,
                  2);
                v114->vPos = result;
              }
            }
            else
            {
              *(_QWORD *)&v114->vPos.x = *((_QWORD *)p_iMoveFrame - 2);
              LODWORD(v114->vPos.z) = *(p_iMoveFrame - 2);
            }
            *(_QWORD *)&v114->vBasePos.x = *(_QWORD *)&v114->vPos.x;
            v114->vBasePos.z = v114->vPos.z;
          }
          ++v111;
          ++v113;
          p_iMoveFrame += 11;
        }
        while ( v111 < 3 );
        LODWORD(v5) = 0;
        if ( BattleSystem::BattleController::IsResultActionEnd(this) )
          LODWORD(v5) = 16;
        goto LABEL_284;
      default:
        goto LABEL_284;
    }
    break;
  }
  do
  {
    if ( (unsigned int)v72 <= 1 )
    {
      v76 = *v74;
      if ( !v76 )
      {
LABEL_208:
        v74 = v121;
        goto LABEL_209;
      }
      index = p_xRecoveryVital[4].value;
      IsRoundWinnerPlayer = BattleSystem::BattleController::IsRoundWinnerPlayer(this, v72);
      BattleBaseCharaNo = (unsigned int)BattleSystem::BattlePlayerInfo::GetBattleBaseCharaNo((BattleSystem::BattlePlayerInfo *)((char *)this + v79));
      AppMain::UpdatePlayerDataCharaUseCount(
        *(AppMain **)&result.x,
        (PLAYER_ID)v72,
        BattleBaseCharaNo,
        IsRoundWinnerPlayer,
        index);
      if ( !BattleSystem::BattleController::IsRoundWinnerPlayer(this, v72) )
      {
        v90 = (char)v126;
        if ( this->battleInfo.roundWinnerID == REVERSAL )
        {
          ++p_xRecoveryVital[-23].value;
          v91 = (BattleSystem::BattlePlayerInfo *)&p_xRecoveryVital[-37];
        }
        else
        {
          v91 = (BattleSystem::BattlePlayerInfo *)((char *)this->playerInfo + v129);
        }
        BattleSystem::BattlePlayerInfo::SetRoundLose(v91, v90, v76);
        v71 = v127;
        goto LABEL_207;
      }
      IsPerfectWin = BattleSystem::BattleController::IsPerfectWin(v81);
      v83 = (BattleSystem::BattlePlayerInfo *)((char *)this->playerInfo + v129);
      if ( IsPerfectWin )
        BattleSystem::BattlePlayerInfo::SetPerfectWin(v83, (bool)v126, v76);
      else
        BattleSystem::BattlePlayerInfo::SetRoundWin(v83, (bool)v126, v76);
      v71 = v127;
      if ( v127 == TEAM )
      {
        uiRoundPassFrame = this->battleInfo.uiRoundPassFrame;
        if ( uiRoundPassFrame > 0x654 )
        {
          if ( uiRoundPassFrame > 0xA8C )
          {
            v85 = 6553600;
            if ( uiRoundPassFrame <= 0xEC4 )
              v85 = 9830400;
            p_xRecoveryVital->value = v85;
          }
          else
          {
            p_xRecoveryVital->value = 16384000;
          }
        }
        else
        {
          p_xRecoveryVital->value = 19660800;
        }
      }
      v86 = getTrophyPlayerID();
      if ( v86 )
      {
        if ( v86 != 1 || v72 != 1 )
          goto LABEL_207;
      }
      else if ( v72 )
      {
LABEL_207:
        v75 = v129;
        goto LABEL_208;
      }
      if ( BattleSystem::BattleController::IsPerfectWin(this) && IsEnableGameMode4TorophyCntup() )
      {
        v87 = (SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64);
        v88 = *(unsigned int *)(*(_QWORD *)&AppMain::pApp + 2205168i64) + 1i64;
        if ( v88 < 0 )
        {
          v89 = 0;
          *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205168i64) = 0;
          v74 = v121;
          v75 = v129;
          goto LABEL_210;
        }
        if ( v88 >= 0xFFFFFFFFi64 )
        {
          *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205168i64) = -1;
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205168i64) = v88;
          SaveRecord_PlayerData::CheckAchivementCountComplete(v87, WIN_PERFECT);
        }
      }
      goto LABEL_207;
    }
LABEL_209:
    v89 = 0;
LABEL_210:
    ++v72;
    v75 += 168i64;
    v129 = v75;
    v121 = ++v74;
    p_xRecoveryVital += 42;
  }
  while ( v72 < 2 );
  v92 = v128;
  do
  {
    if ( BattleSystem::BattleController::IsMaxSetCount(this, v89) )
      v92 |= 1 << v93;
    v89 = v93 + 1;
  }
  while ( v89 < 2 );
  v128 = v92;
  if ( v92 == 3 )
  {
    if ( this->battleInfo.bExtraRound || BattleSystem::BattleController::IsSuccessiveBattle(v94) )
    {
      BattleSystem::BattlePlayerInfo::SetBattleDraw(this->playerInfo);
      BattleSystem::BattlePlayerInfo::SetBattleDraw(&this->playerInfo[1]);
      this->battleInfo.battleWinnerID = REVERSAL;
      this->bBattleEnd = 1;
    }
    else
    {
      this->battleInfo.bExtraRound = 1;
      ++this->battleInfo.iRoundCount;
      --this->playerInfo[0].iRoundSetCount;
      if ( v71 == TEAM )
        this->playerInfo[0].iMemberReferIndex = this->playerInfo[0].iMemberCount - 1;
      --this->playerInfo[1].iRoundSetCount;
      if ( v71 == TEAM )
        this->playerInfo[1].iMemberReferIndex = this->playerInfo[1].iMemberCount - 1;
    }
    goto LABEL_246;
  }
  if ( v128 == 1 )
  {
    BattleSystem::BattlePlayerInfo::SetBattleWin(this->playerInfo);
    BattleSystem::BattlePlayerInfo::SetBattleLose(&this->playerInfo[1]);
    this->battleInfo.battleWinnerID = COUNTER_HIT;
    this->bBattleEnd = 1;
    v95 = GameDataInfo::getInstance();
    if ( v95->m_GameMode[v95->m_GameModeIndex] == GAME_MODE_STORY )
    {
      v97 = GameDataInfo::getInstance();
      BattleSystem::BattlePlayerInfo::AddCpuLevelBonus(this->playerInfo, v97->m_AiLevel);
      v98 = GameDataInfo::getInstance();
      GameDataInfo::NextStoryEnemy(v98);
    }
    else if ( BattleSystem::BattleController::IsSuccessiveBattle(v96) )
    {
      v99 = GameDataInfo::getInstance();
      GameDataInfo::NextSurvivalEnemy(v99, v100);
      this->successiveBattleTakeOverInfo.bTakeOver = 1;
      this->successiveBattleTakeOverInfo.playBGMID = this->playBGMID;
      *(_OWORD *)&this->successiveBattleTakeOverInfo.roundEndInfo.xVital.value = *(_OWORD *)&this->playerInfo[0].roundEndInfo.xVital.value;
      *(_QWORD *)&this->successiveBattleTakeOverInfo.roundEndInfo.xStunPower.value = *(_QWORD *)&this->playerInfo[0].roundEndInfo.xStunPower.value;
      *(_DWORD *)&this->successiveBattleTakeOverInfo.roundEndInfo.bTakeOverActor = *(_DWORD *)&this->playerInfo[0].roundEndInfo.bTakeOverActor;
      this->successiveBattleTakeOverInfo.roundEndInfo.bTakeOverActor = 1;
      this->successiveBattleTakeOverInfo.roundEndInfo.xRecoveryVital.value = 19660800;
    }
    if ( IsEnableGameMode4TorophyCntup()
      && !(unsigned int)getTrophyPlayerID()
      && !this->playerInfo[1].iRoundSetCount
      && !this->battleInfo.bExtraRound )
    {
      v101 = *(_QWORD *)&AppMain::pApp;
      v102 = *(unsigned int *)(*(_QWORD *)&AppMain::pApp + 2205172i64) + 1i64;
      if ( v102 >= 0 )
      {
        if ( v102 < 0xFFFFFFFFi64 )
        {
LABEL_234:
          *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205172i64) = v102;
          SaveRecord_PlayerData::CheckAchivementCountComplete((SaveRecord_PlayerData *)(v101 + 2202784), WIN_STRAIGHT);
          goto LABEL_246;
        }
LABEL_235:
        *(_DWORD *)(v101 + 2205172) = -1;
        goto LABEL_246;
      }
      goto LABEL_236;
    }
  }
  else
  {
    if ( v128 != 2 )
    {
      ++this->battleInfo.iRoundCount;
      goto LABEL_246;
    }
    BattleSystem::BattlePlayerInfo::SetBattleLose(this->playerInfo);
    BattleSystem::BattlePlayerInfo::SetBattleWin(&this->playerInfo[1]);
    this->battleInfo.battleWinnerID = GUARD_CRASH;
    this->bBattleEnd = 1;
    if ( IsEnableGameMode4TorophyCntup()
      && (unsigned int)getTrophyPlayerID() == 1
      && !this->playerInfo[0].iRoundSetCount
      && !this->battleInfo.bExtraRound )
    {
      v101 = *(_QWORD *)&AppMain::pApp;
      v102 = *(unsigned int *)(*(_QWORD *)&AppMain::pApp + 2205172i64) + 1i64;
      if ( v102 >= 0 )
      {
        if ( v102 < 0xFFFFFFFFi64 )
          goto LABEL_234;
        goto LABEL_235;
      }
LABEL_236:
      *(_DWORD *)(v101 + 2205172) = 0;
    }
  }
LABEL_246:
  if ( this->bBattleEnd )
    BattleSystem::BattleController::SetResultData(this, this->roundPhase == (WALL|ERASE));
  else
    BattleSystem::BattleRoundInfo::SetRoundInfo(
      &this->roundInfo[this->battleInfo.iRoundCount],
      &this->battleInfo,
      this->playerInfo,
      &this->playerInfo[1]);
LABEL_258:
  LODWORD(v5) = 0;
LABEL_284:
  BattleSystem::BattleController::KOTimeStopInfo::Update(&this->koTimeStopInfo);
  ++this->uiRoundPhaseFrame;
  if ( (int)v5 > 0 )
  {
    this->roundPhase = v5;
    this->uiRoundPhaseFrame = 0;
  }
  if ( (unsigned int)(this->roundPhase - 5) <= 3 )
  {
    p_playerType = &this->playerInfo[0].playerType;
    cpuPlayer = this->cpuPlayer;
    do
    {
      if ( (unsigned int)(this->keyRecordMode - 1) > 4 && *p_playerType == CROUCH )
        BattleSystem::CpuSequence::Update(cpuPlayer);
      ++cpuPlayer;
      p_playerType += 42;
      --v123;
    }
    while ( v123 );
  }
  ActionSystem::SystemUpdate(&this->actSystem);
}

void __fastcall BattleSystem::BattleController::KOTimeStopInfo::Update(
        BattleSystem::BattleController::KOTimeStopInfo *this)
{
  BattleSystem::BattleController *v2; // r11
  BattleSystem::BattleController *v3; // rax
  unsigned int uiCount; // edx
  unsigned int uiStartDelay; // ecx
  __int64 v6; // r10
  __int64 v7; // r11
  Actor *v8; // rdx
  ActionBlackout::BlackoutReq req; // [rsp+28h] [rbp-30h] BYREF
  BattleSystem::BattleController *v10; // [rsp+60h] [rbp+8h]

  if ( this->winnerID )
  {
    v2 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v10 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v10);
      v2 = v3;
      BattleSystem::BattleController::instance = v3;
    }
    uiCount = this->uiCount;
    uiStartDelay = this->uiStartDelay;
    if ( uiCount == uiStartDelay )
    {
      memset(&req.color, 0, 21);
      *(_QWORD *)&req.attr = 1i64;
      req.frame = this->uiStopFrame;
      ActionBlackout::RequestBlackout(&v2->actSystem.actBlack, 5, &req);
      if ( (unsigned int)(*(_DWORD *)(v7 + 237896) - 3) > 1
        && (*(_DWORD *)(v7 + 237896) != 1 || *(_DWORD *)(v7 + 237960) >= *(_DWORD *)(v7 + 237964)) )
      {
        if ( this->winnerID == GUARD_CRASH )
          v8 = *(Actor **)(v7 + 237224);
        else
          v8 = *(Actor **)(v7 + 237216);
        CameraControl::RequestKOCamera((CameraControl *)(v7 + 237776), v8);
        goto LABEL_15;
      }
    }
    else
    {
      if ( uiCount < this->uiStopFrame + uiStartDelay )
      {
LABEL_15:
        ++this->uiCount;
        return;
      }
      CameraControl::RequestMoveCameraOut(&v2->actSystem.cameraCtrl, 45, 1);
      v6 = 0i64;
    }
    *(_QWORD *)&this->winnerID = v6;
    *(_QWORD *)&this->uiStartDelay = v6;
  }
}

std::_Func_base<void,Actor &> *__fastcall std::_Func_impl<_lambda_60860bae646c1a25c68b7e5eea623519_,std::allocator<int>,void,Actor &>::_Copy(
        std::_Func_impl<<lambda_60860bae646c1a25c68b7e5eea623519>,std::allocator<int>,void,Actor &> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<_lambda_60860bae646c1a25c68b7e5eea623519_,std::allocator<int>,void,Actor &>::`vftable';
    *((_QWORD *)_Where + 1) = this->_Mypair._Myval2.bEndSetup;
  }
  return (std::_Func_base<void,Actor &> *)_Where;
}

std::_Func_base<void,Actor &> *__fastcall std::_Func_impl<_lambda_844476951c63c99cc400950c54c0e1fd_,std::allocator<int>,void,Actor &>::_Move(
        std::_Func_impl<<lambda_844476951c63c99cc400950c54c0e1fd>,std::allocator<int>,void,Actor &> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<_lambda_844476951c63c99cc400950c54c0e1fd_,std::allocator<int>,void,Actor &>::`vftable';
    *((_QWORD *)_Where + 1) = this->_Mypair._Myval2.__this;
  }
  return (std::_Func_base<void,Actor &> *)_Where;
}

std::_Func_base<void,Actor &> *__fastcall std::_Func_impl<_lambda_ad3ff183b2c7791a4bd3e61110463e86_,std::allocator<int>,void,Actor &>::_Move(
        std::_Func_impl<<lambda_ad3ff183b2c7791a4bd3e61110463e86>,std::allocator<int>,void,Actor &> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<_lambda_ad3ff183b2c7791a4bd3e61110463e86_,std::allocator<int>,void,Actor &>::`vftable';
    *((_QWORD *)_Where + 1) = this->_Mypair._Myval2.bEndSetup;
  }
  return (std::_Func_base<void,Actor &> *)_Where;
}

void __fastcall std::_Func_impl<_lambda_536343e0c1c203f5657bb579fcc2982e_,std::allocator<int>,void,Actor &>::_Delete_this(
        std::_Func_impl<<lambda_ad3ff183b2c7791a4bd3e61110463e86>,std::allocator<int>,void,Actor &> *this,
        bool _Deallocate)
{
  this->__vftable = (std::_Func_impl<<lambda_ad3ff183b2c7791a4bd3e61110463e86>,std::allocator<int>,void,Actor &>_vtbl *)&std::_Func_base<void,Actor &>::`vftable';
  if ( _Deallocate )
    operator delete(this);
}

void __fastcall std::_Func_impl<_lambda_ad3ff183b2c7791a4bd3e61110463e86_,std::allocator<int>,void,Actor &>::_Do_call(
        std::_Func_impl<<lambda_ad3ff183b2c7791a4bd3e61110463e86>,std::allocator<int>,void,Actor &> *this,
        Actor *<_Args_0>)
{
  if ( <_Args_0>->GetActorType(<_Args_0>) == OPTION
    && !((unsigned __int8 (__fastcall *)(Actor *))<_Args_0>->__vftable[1].SetPositionX)(<_Args_0>) )
  {
    *this->_Mypair._Myval2.bEndSetup = 0;
  }
}

void __fastcall std::_Func_impl<_lambda_844476951c63c99cc400950c54c0e1fd_,std::allocator<int>,void,Actor &>::_Do_call(
        std::_Func_impl<<lambda_844476951c63c99cc400950c54c0e1fd>,std::allocator<int>,void,Actor &> *this,
        Actor *<_Args_0>)
{
  __int64 v4; // rdx

  if ( <_Args_0>->GetActorType(<_Args_0>) == OPTION )
  {
    v4 = (unsigned int)this->_Mypair._Myval2.__this->initialStartAction[<_Args_0>->iPlayerID];
    if ( !(_DWORD)v4 || (_DWORD)v4 == 1 )
    {
      LOBYTE(v4) = 1;
      ((void (__fastcall *)(Actor *, __int64))<_Args_0>->__vftable[1].GetRivalDistance)(<_Args_0>, v4);
    }
  }
}

std::_Align_type<double,64> *__fastcall __Get____Func_impl_U_unnamed_type_nothing___1__InstallGFxInterface_extension__YAXXZ_V__allocator_H_std__VValue_GFx_Scaleform__AEAVGFXIMovieContext_3_PEBV678_I_std__EEBAPEBXXZ(
        _Mtx_internal_imp_t *mtx)
{
  return &mtx->cs;
}

const type_info *__fastcall std::_Func_impl<_lambda_60860bae646c1a25c68b7e5eea623519_,std::allocator<int>,void,Actor &>::_Target_type(
        std::_Func_impl<<lambda_60860bae646c1a25c68b7e5eea623519>,std::allocator<int>,void,Actor &> *this)
{
  return (const type_info *)&_lambda_60860bae646c1a25c68b7e5eea623519_ `RTTI Type Descriptor';
}

const type_info *__fastcall std::_Func_impl<_lambda_844476951c63c99cc400950c54c0e1fd_,std::allocator<int>,void,Actor &>::_Target_type(
        std::_Func_impl<<lambda_844476951c63c99cc400950c54c0e1fd>,std::allocator<int>,void,Actor &> *this)
{
  return (const type_info *)&_lambda_844476951c63c99cc400950c54c0e1fd_ `RTTI Type Descriptor';
}

const type_info *__fastcall std::_Func_impl<_lambda_ad3ff183b2c7791a4bd3e61110463e86_,std::allocator<int>,void,Actor &>::_Target_type(
        std::_Func_impl<<lambda_ad3ff183b2c7791a4bd3e61110463e86>,std::allocator<int>,void,Actor &> *this)
{
  return (const type_info *)&_lambda_ad3ff183b2c7791a4bd3e61110463e86_ `RTTI Type Descriptor';
}

