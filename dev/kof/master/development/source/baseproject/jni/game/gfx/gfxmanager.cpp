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
#include "dev/kof/master/development/source/baseproject/jni/game/network/netbattle.h"
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
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_renderer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/scene_roommember.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/roommembers.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/debug/gameinfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/onlinesavedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"

GfxManager::GfxManager(); // 0x140157330
void GfxManager::LoadRequestBG(); // 0x140157480
void GfxManager::LoadRequestNotification(); // 0x140157650
void GfxManager::LoadRequestTutorial(); // 0x140157820
void GfxManager::LoadRequestMissionTrial(); // 0x1401579E0
void GfxManager::LoadRequestSystem(); // 0x140157BA0
void GfxManager::LoadRequest(GfxManager::GFX_FILE_INDEX fileIndex, void(*pCompleteFunc)(), long priority); // 0x140157D70
void GfxManager::UpdateLoadMovie(); // 0x140157F60
void GfxManager::ReleaseGFXMovie(bool release); // 0x140158450
Scaleform::GFx::Value GfxManager::GFn_GetMenuCursor(const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140158520
void GfxManager::GFn_SetSingleMember(const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140158570
void GfxManager::GFn_SetTeamMember(const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140158670
void GfxManager::GFn_SetTeamOrder(const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140158810
void GfxManager::GFn_SetControllerSetting(const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1401588A0
void GfxManager::GFn_SetDisplayOption(const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140158A70
void GfxManager::GFn_SaveDisplayOption(const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140158B70
void GfxManager::GFn_SetButtonConfig(const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140158C90
void GfxManager::GFn_SetOperationMapper(const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1401591D0
void GfxManager::GFn_SetHudPosition(const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140159330
void GfxManager::GFn_SetKeyDataStatus(const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1401593E0
void GfxManager::GFn_SetAttackDataStatus(const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140159660
Scaleform::GFx::Value GfxManager::GFn_GetOnlineIDStatus(const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1401598E0
void GfxManager::GFn_GetUserNameToBC(const Scaleform::GFx::Value * argv, unsigned long arg); // 0x140159930
enum GAME_PARAM
{
	GP_GAME_MODE = 0,
	GP_GAME_RULE = 1,
	GP_USER_NAME = 2,
	GP_PLAYER_USER_NAME = 3,
	GP_MEMBER_ID = 4,
	GP_CONTROLLER_SETTING = 5,
	GP_IS_USE_MYMEMBER = 6,
	GP_GET_MYMEMBER_ID = 7,
	GP_IS_USE_CONTROLLER_SELECT = 8,
	GP_IS_PSX_MODE = 9,
	GP_LANGUAGE_NAME = 10,
	GP_IS_USE_CUSTOM = 11,
	GP_GET_COSTUME_NUM = 12,
	GP_GET_COSTUME_NO = 13,
	GP_IS_CIRCLE_OK = 14,
	GP_RESULT_WIN = 15,
	GP_RESULT_LIFE_BONUS = 16,
	GP_RESULT_TIME_BONUS = 17,
	GP_RESULT_PERFECT_BONUS = 18,
	GP_RESULT_STRAIGHT_BONUS = 19,
	GP_RESULT_MAX_COMBO = 20,
	GP_RESULT_NO_CONT_BONUS = 21,
	GP_RESULT_TOTAL_POINT = 22,
	GP_RESULT_BATTLE_BONUS = 23,
	GP_RESULT_CPU_BONUS = 24,
	GP_RESULT_RANK = 25,
	GP_RESULT_WIN_COUNT = 26,
	GP_RESULT_LOSE_COUNT = 27,
	GP_RESULT_DRAW_COUNT = 28,
	GP_RESULT_RATE = 29,
	GP_RESULT_STRAIGHT_COUNT = 30,
	GP_RESULT_TIME = 31,
	GP_RESULT_BEAT_BY = 32,
	GP_BUTTON_CONFIG = 33,
	GP_USE_MAP = 34,
	GP_PLAY_TIME = 35,
	GP_STORY_SCORE = 36,
	GP_STORY_CHARACTER = 37,
	GP_TIMEATTACK_SCORE = 38,
	GP_TIMEATTACK_CHARACTER = 39,
	GP_SURVIVAL_SCORE = 40,
	GP_SURVIVAL_CHARACTER = 41,
	GP_REPLAY_VS_DATE = 42,
	GP_REPLAY_UPLOAD_DATE = 43,
	GP_IS_EMPTY_BEST_REPLAY = 44,
	GP_USER_COLOR = 45,
	GP_REPLAY_DATE_NUM = 46,
	GP_TRIAL_RATE = 47,
	GP_GALLERY_RATE = 48,
	GP_TITLE_RATE = 49,
	GP_REPLAY_AUTO_SAVE = 50,
	GP_SLOT_MAX = 51,
	GP_SKIP_GRADE_NOTICE = 52,
	GP_ONLINE_USER_NAME = 53,
	GP_ONLINE_RESULT_USER_NAME = 54,
	GP_ONLINE_RESULT_CHARACTER_NO = 55,
	GP_ONLINE_RESULT_RANK = 56,
	GP_ONLINE_RESULT_RANK_BEFORE = 57,
	GP_ONLINE_RESULT_RANKMATCH_POINT = 58,
	GP_ONLINE_RESULT_RANKMATCH_POINT_BEFORE = 59,
	GP_ONLINE_RESULT_BATTLE_NUM = 60,
	GP_ONLINE_RESULT_BATTLE_WIN = 61,
	GP_ONLINE_RESULT_BATTLE_LOSE = 62,
	GP_ONLINE_RESULT_BATTLE_DRAW = 63,
	GP_ONLINE_RESULT_BATTLE_RATE = 64,
	GP_ONLINE_RESULT_BATTLE_WINS = 65,
	GP_OPTION_HUD_HP_Y = 66,
	GP_OPTION_HUD_COMBO_X = 67,
	GP_OPTION_HUD_GAUGE_Y = 68,
	GP_AUTO_ACTING = 69,
	GP_COMMENT_GAYA = 70,
	GP_ONLINE_MY_PLAYER_ID = 71,
	GP_ONLINE_MY_PLAYER_INDEX = 72,
	GP_ONLINE_RESULT_LOSE_PUB = 73,
	GP_ONLINE_RESULT_DRAW_PUB = 74,
	GP_ONLINE_RESULT_RATE_PUB = 75,
	GP_NOW_ROUND = 76,
	GP_REPLAY_END_ROUND = 77,
	GP_IS_JOYSTICK = 78,
	GP_GAME_VERSION = 79,
	GP_DOWNLOAD_DATE = 80,
	GP_STAGE_ID = 81,
	GP_TELOP_OWNER_ID = 82,
	GP_TELOP_OWNER_ID_REPLAY = 83,
	GP_MY_DISSCONNECT_MARKER = 84,
	GP_ONLINE_USER_MARKER = 85,
	GP_ONLINE_RESULT_USER_MARKER = 86,
	GP_KEYBOARD_CONFIG = 87,
};
char stringBuff[1024]; // 0x140AC2700
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5C1A0
std::piecewise_construct_t std::piecewise_construct; // 0x14089E3A2
Scaleform::GFx::Value GfxManager::GFn_GetGameParam(const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140159AD0
Scaleform::GFx::Value GfxManager::GFn_Test(const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14015AF50
void GfxManager::GFv_AddController(USER_ID userCont, long userPos, const char * useName, long userColor); // 0x14015B370
void GfxManager::GFv_SetResult(); // 0x14015B680
void GfxManager::GFv_SetTelop(const char * telop); // 0x14015B6D0
void GfxManager::GFv_RemoveTelop(bool fadeOut); // 0x14015B880
void GfxManager::GFv_SetSetTransitionMenu(PLAYER_ID playerID); // 0x14015BA20
void GfxManager::GFv_UpdateTransitionMenu(PLAYER_ID playerID, long item, bool decide); // 0x14015BB80
void GfxManager::GFv_CallScreenMenu(GfxManager::MENU_TYPE_ID menuID, PLAYER_ID contID); // 0x14015BD30
void GfxManager::GFv_CallScreeMenuSetPhrase(); // 0x14015BE90
bool GfxManager::GFv_IsOpenScreenMenu(); // 0x14015C180
void GfxManager::GFv_ExitScreenMenu(); // 0x14015C230
void GfxManager::GFv_HideScreenMenu(); // 0x14015C280
void GfxManager::GFv_SetImage(long image); // 0x14015C2D0
void GfxManager::GFv_DecideOrder(PLAYER_ID playerID, long pos); // 0x14015C480
void GfxManager::GFv_CancelOrder(PLAYER_ID playerID, long pos); // 0x14015C650
void GfxManager::GFv_OnlineUserDecide(PLAYER_ID playerID, long index, CHARACTER_NO charaNo, long colorID, unsigned char fix, const char * userName, RANKMATCH_DISCONNECT_MARKER marker); // 0x14015C820
void GfxManager::GFv_Tutorial_SetMessage(TUTORIAL_ID tutorialID, bool clear, long unique); // 0x14015CAF0
void GfxManager::GFv_Tutorial_SetSubject(long pageNo); // 0x14015CC80
void GfxManager::GFv_ComboMission_SetMissionCommand(); // 0x14015CD70
void GfxManager::GFv_ComboMission_InitMissionCommand(); // 0x14015CF90
void GfxManager::GFv_SetSystemMessage(const char * message, GfxManager::SYSTEM_MESSAGE_TYPE type, long cursor, bool lock, const char * title, const char * title_name, const char * size); // 0x14015CFE0
void GfxManager::GFv_CloseSystemMessage(); // 0x14015D230
void GfxManager::GFv_onNetworkError(NETWORK_ERROR_TYPE type); // 0x14015D280
void GfxManager::GFv_AddNotificationGallery(GALLERY_TYPE type, long category, long no); // 0x14015D390
void GfxManager::GFv_AddNotification(const char * string, GfxManager::NOTIFICATION_ICON icon); // 0x14015D500
bool GfxManager::GFv_IsItemDisplay(); // 0x14015D640
void GfxManager::GFv_AllDeleteNotification(); // 0x14015D6F0
bool GfxManager::GFv_IsHasNotification(); // 0x14015D740//decompilation failure at 140AC2700!
//decompilation failure at 140A5C1A0!
//decompilation failure at 14089E3A2!
void __fastcall GfxManager::GfxManager(GfxManager *this)
{
  this->m_GFXMovie.m_movieProxy.m_ptr = 0i64;
  this->m_GFXMovieBG.m_movieProxy.m_ptr = 0i64;
  this->m_GFXMovieCommon.m_movieProxy.m_ptr = 0i64;
  this->m_GFXMovieNotification.m_movieProxy.m_ptr = 0i64;
  this->m_GFXMovieTutorial.m_movieProxy.m_ptr = 0i64;
  this->m_GFXMovieSystem.m_movieProxy.m_ptr = 0i64;
  this->m_GFXMovieCross.m_movieProxy.m_ptr = 0i64;
  this->m_FutureGFXMovie.m_isNoCache = 0;
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty(&this->m_FutureGFXMovie.m_body);
  this->m_FutureGFXMovieBG.m_isNoCache = 0;
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty(&this->m_FutureGFXMovieBG.m_body);
  this->m_FutureGFXMovieCommon.m_isNoCache = 0;
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty(&this->m_FutureGFXMovieCommon.m_body);
  this->m_FutureGFXMovieNotification.m_isNoCache = 0;
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty(&this->m_FutureGFXMovieNotification.m_body);
  this->m_FutureGFXMovieTutorial.m_isNoCache = 0;
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty(&this->m_FutureGFXMovieTutorial.m_body);
  this->m_FutureGFXMovieSystem.m_isNoCache = 0;
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty(&this->m_FutureGFXMovieSystem.m_body);
  this->m_pCompleteFunc = 0i64;
  this->m_Priority = 0;
  *(_WORD *)&this->m_RequestAdvance = 0;
  *(_QWORD *)&this->m_bDisposeGFXMovie = 0i64;
  this->m_ReleaseFlag = 0;
  *(_WORD *)&this->m_SystemMessageLock = 0;
  *(_DWORD *)this->m_ControlerLive = 0;
  this->m_ControlerLive[4] = 0;
  *(_QWORD *)this->m_MenuCursor = 0i64;
  *(_QWORD *)&this->m_MenuCursor[2] = 0i64;
  *(_QWORD *)&this->m_MenuCursor[4] = 0i64;
  *(_QWORD *)&this->m_MenuCursor[6] = 0i64;
  *(_QWORD *)&this->m_MenuCursor[8] = 0i64;
  *(_QWORD *)&this->m_MenuCursor[10] = 0i64;
  *(_QWORD *)&this->m_SystemMessageState = 0i64;
  this->m_pCallBackEventFunc = 0i64;
}

Scaleform::GFx::Value *__fastcall Scaleform::GFx::Value::operator=(
        Scaleform::GFx::Value *this,
        const Scaleform::GFx::Value *src)
{
  Scaleform::GFx::Value::ObjectInterface *pObjectInterface; // rcx
  void *pStringManaged; // r8

  if ( (this->Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(this->pObjectInterface, this, this->mValue.pStringManaged);
    this->pObjectInterface = 0i64;
  }
  this->Type = src->Type;
  this->mValue.pString = src->mValue.pString;
  this->DataAux = src->DataAux;
  if ( (src->Type & 0x40) != 0 )
  {
    pObjectInterface = src->pObjectInterface;
    pStringManaged = this->mValue.pStringManaged;
    this->pObjectInterface = pObjectInterface;
    Scaleform::GFx::Value::ObjectInterface::ObjectAddRef(pObjectInterface, this, pStringManaged);
  }
  return this;
}

void __fastcall FighterOperation::AssignUser(int fighterIndex, int userIndex, int maskType)
{
  FighterOperation *v6; // rax

  v6 = FighterOperation::Instance();
  FighterOperation::assignUser(v6, fighterIndex, userIndex, maskType);
}

Scaleform::GFx::Value *__fastcall GfxManager::GFn_GetGameParam(
        GfxManager *this,
        Scaleform::GFx::Value *result,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int v6; // er14
  __int64 v7; // r15
  __int64 *v8; // rax
  __int64 v9; // r13
  GameDataInfo *v10; // rcx
  BattleSystem::BattleController *v11; // rbx
  BattleSystem::BattleController *v12; // rax
  BattleSystem::BattleController *v13; // rax
  GameDataInfo *v14; // rcx
  int v15; // er12
  int PlayerID; // er8
  int rankMatchLosePublication; // edx
  char **Name; // rbx
  const char *CString; // rax
  bool v20; // cl
  const char *v21; // rcx
  int UseableCostumeCount; // ebx
  int IValue; // ecx
  BattleSystem::WINNER_ID::ID battleWinnerID; // eax
  int v25; // er8
  int v26; // er8
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // edx
  int v33; // ebx
  GameDataInfo *v34; // rcx
  unsigned int v35; // ecx
  unsigned int v36; // edx
  unsigned int v37; // edx
  unsigned int v38; // ecx
  int v39; // eax
  unsigned int v40; // edx
  int v41; // ecx
  __int64 v42; // rbx
  const std::piecewise_construct_t *v43; // rdx
  std::tuple<> *v44; // r9
  __int64 v45; // r12
  std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> >,0> > *v46; // r15
  const AgControllerUID *Myhead; // rbx
  AgControllerUID v48; // rsi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *_Newnode; // rax
  unsigned __int64 v50; // rcx
  int v51; // edx
  __int64 v52; // rax
  double v53; // xmm0_8
  unsigned int v54; // ecx
  unsigned int v55; // edx
  unsigned int v56; // ecx
  unsigned int v57; // edx
  unsigned int v58; // ecx
  unsigned int v59; // edx
  tm *v60; // rax
  tm *v61; // rax
  bool IsEmptyBestReplay; // bl
  bool v63; // al
  int PlayerIndex; // eax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  int rankMatchDisconnectMarker; // eax
  __int64 v69; // rax
  __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // rax
  int rankMatchRank; // eax
  int rankMatchPoint; // edx
  unsigned int v75; // er8
  int v76; // ecx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  unsigned int v80; // er11
  unsigned int v81; // er9
  __int64 v82; // rdx
  int rankMatchBattleLose; // edx
  unsigned int v84; // er8
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // r10
  unsigned int v88; // ecx
  unsigned int v89; // edx
  int v90; // er11
  unsigned int v91; // er9
  unsigned int v92; // edx
  int v93; // er10
  __int64 v94; // rax
  unsigned int v95; // edx
  int v96; // eax
  unsigned int v97; // ecx
  unsigned int v98; // ecx
  int v99; // eax
  unsigned int v100; // edx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  int v106; // eax
  std::tuple<AgControllerUID const &> v108; // [rsp+40h] [rbp-C0h] BYREF
  int v109; // [rsp+48h] [rbp-B8h]
  __int64 v110; // [rsp+70h] [rbp-90h]
  Scaleform::GFx::Value *v111; // [rsp+78h] [rbp-88h]
  AgControllerUID userID[2]; // [rsp+80h] [rbp-80h] BYREF
  NET_USER_DATA pInfo[12]; // [rsp+90h] [rbp-70h] BYREF

  v110 = -2i64;
  v111 = result;
  v6 = 0;
  v109 = 0;
  v7 = *(_QWORD *)&AppMain::pApp;
  v8 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v9 = *v8;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v8 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v10);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v11 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v108._Myfirst._Val = (const AgControllerUID *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController((BattleSystem::BattleController *)v108._Myfirst._Val);
    v11 = v12;
    BattleSystem::BattleController::instance = v12;
    if ( !v12 )
    {
      v108._Myfirst._Val = (const AgControllerUID *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController((BattleSystem::BattleController *)v108._Myfirst._Val);
      v11 = v13;
      BattleSystem::BattleController::instance = v13;
    }
  }
  v14 = (GameDataInfo *)0x140000000i64;
  v15 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  *(_DWORD *)userID[0].m_uid = `GameDataInfo::getInstance'::`2'::instance.m_GameRule[`GameDataInfo::getInstance'::`2'::instance.m_GameRuleIndex];
  if ( Fw::MatchingTarget::m_RoomId.m_steamid.m_comp )
  {
    PlayerID = NetManager::GetPlayerID(&g_NetworkManager, -1);
  }
  else
  {
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v9 + 40) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v14);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    PlayerID = `GameDataInfo::getInstance'::`2'::instance.m_MyPlayerID;
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  rankMatchLosePublication = 1;
  v109 = 1;
  switch ( argv->mValue.IValue )
  {
    case 0:
      result->mValue.IValue = v15;
      goto LABEL_207;
    case 1:
      goto LABEL_122;
    case 2:
      UserGameOperation::Instance();
      Name = (char **)stringBuff;
      goto LABEL_16;
    case 3:
      Name = (char **)stringBuff;
      if ( `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[argv[1].mValue.IValue] )
      {
        UserGameOperation::Instance();
LABEL_16:
        if ( Framework::GLManager::glm )
        {
          CString = AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
          strcpy_s(stringBuff, 0x100ui64, CString);
        }
      }
      else
      {
        strcpy(stringBuff, "CPU");
      }
      goto LABEL_18;
    case 4:
      result->mValue.IValue = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[argv[1].mValue.IValue][argv[2].mValue.IValue];
      goto LABEL_207;
    case 5:
      result->mValue.IValue = `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[argv[1].mValue.IValue];
      goto LABEL_207;
    case 6:
    case 9:
    case 0xE:
    case 0x45:
    case 0x4E:
      result->Type = VT_Int64;
      result->mValue.BValue = 0;
      return result;
    case 7:
    case 0x22:
      goto $LN112_2;
    case 8:
      v20 = 1;
      if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] != GAME_MODE_VERSUS
        || !`GameDataInfo::getInstance'::`2'::instance.m_ControllerSelect )
      {
        v20 = 0;
      }
      result->Type = VT_Int64;
      result->mValue.BValue = v20;
      return result;
    case 0xA:
      v21 = language_name[1][*(int *)(v7 + 2197384)];
      result->Type = 6;
      result->mValue.pString = v21;
      return result;
    case 0xB:
      result->Type = VT_Int64;
      result->mValue.BValue = 1;
      return result;
    case 0xC:
      UseableCostumeCount = CharaProjectData::GetUseableCostumeCount(
                              *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                              argv[1].mValue.IValue);
      goto LABEL_34;
    case 0xD:
      UseableCostumeCount = CharaProjectData::GetAnotherCostumeCharaID(
                              *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                              argv[1].mValue.IValue,
                              argv[2].mValue.IValue);
      if ( (result->Type & 0x40) != 0 )
        goto LABEL_38;
      goto LABEL_36;
    case 0xF:
      IValue = argv[1].mValue.IValue;
      battleWinnerID = v11->resultMember.battleWinnerID;
      if ( battleWinnerID == REVERSAL )
        goto LABEL_204;
      if ( !IValue )
      {
        if ( battleWinnerID != COUNTER_HIT )
          goto LABEL_206;
        goto LABEL_45;
      }
      if ( IValue == 1 && battleWinnerID == GUARD_CRASH )
LABEL_45:
        rankMatchLosePublication = 0;
LABEL_206:
      result->mValue.IValue = rankMatchLosePublication;
LABEL_207:
      result->Type = VT_Float;
      return result;
    case 0x10:
      result->mValue.IValue = v11->resultMember.scoreInfo.iLifeBonus;
      goto LABEL_207;
    case 0x11:
      result->mValue.IValue = v11->resultMember.scoreInfo.iTimeBonus;
      goto LABEL_207;
    case 0x12:
      result->mValue.IValue = v11->resultMember.scoreInfo.iPerfectBonus;
      goto LABEL_207;
    case 0x13:
      result->mValue.IValue = v11->resultMember.scoreInfo.iStraightSetBonus;
      goto LABEL_207;
    case 0x14:
      result->mValue.IValue = 1000;
      goto LABEL_207;
    case 0x15:
      result->mValue.IValue = v11->resultMember.scoreInfo.iNoContinueBonus;
      goto LABEL_207;
    case 0x16:
      v25 = v11->resultMember.scoreInfo.iBattleScore
          + *(_QWORD *)&v11->resultMember.scoreInfo.iCpuLevelBonus
          + _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v11->resultMember.scoreInfo.iLifeBonus, 8))
          + HIDWORD(_mm_srli_si128(*(__m128i *)&v11->resultMember.scoreInfo.iLifeBonus, 8).m128i_u64[0])
          + _mm_cvtsi128_si32(*(__m128i *)&v11->resultMember.scoreInfo.iLifeBonus)
          + HIDWORD(*(_QWORD *)&v11->resultMember.scoreInfo.iCpuLevelBonus)
          + HIDWORD(*(_QWORD *)&v11->resultMember.scoreInfo.iLifeBonus);
      rankMatchLosePublication = 99999999;
      if ( v25 < 99999999 )
        rankMatchLosePublication = v25;
      goto LABEL_206;
    case 0x17:
      result->mValue.IValue = v11->resultMember.scoreInfo.iBattleScore;
      goto LABEL_207;
    case 0x18:
      result->mValue.IValue = v11->resultMember.scoreInfo.iCpuLevelBonus;
      goto LABEL_207;
    case 0x19:
      v26 = v11->resultMember.scoreInfo.iBattleScore
          + *(_QWORD *)&v11->resultMember.scoreInfo.iCpuLevelBonus
          + _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v11->resultMember.scoreInfo.iLifeBonus, 8))
          + HIDWORD(_mm_srli_si128(*(__m128i *)&v11->resultMember.scoreInfo.iLifeBonus, 8).m128i_u64[0])
          + _mm_cvtsi128_si32(*(__m128i *)&v11->resultMember.scoreInfo.iLifeBonus)
          + HIDWORD(*(_QWORD *)&v11->resultMember.scoreInfo.iCpuLevelBonus)
          + HIDWORD(*(_QWORD *)&v11->resultMember.scoreInfo.iLifeBonus);
      result->Type = 6;
      if ( v26 < 300000 )
      {
        if ( v26 < 200000 )
        {
          if ( v26 < 100000 )
          {
            if ( v26 < 50000 )
              result->mValue.pString = "C";
            else
              result->mValue.pString = "B";
          }
          else
          {
            result->mValue.pString = "A";
          }
        }
        else
        {
          result->mValue.pString = "S";
        }
      }
      else
      {
        result->mValue.pString = "SS";
      }
      return result;
    case 0x1A:
      v27 = v11->resultMember.iWinCount[argv[1].mValue.IValue] ^ 0x7B48A35E;
      v28 = ((unsigned __int16)v27 ^ (unsigned __int16)(v27 >> 14)) & 0xCCCC ^ v27 ^ ((((unsigned __int16)v27 ^ (unsigned __int16)(v27 >> 14)) & 0xCCCC) << 14);
      result->mValue.IValue = (v28 ^ (v28 >> 7)) & 0x550055 ^ v28 ^ (((v28 ^ (v28 >> 7)) & 0x550055) << 7);
      goto LABEL_207;
    case 0x1B:
      v29 = v11->resultMember.iLoseCount[argv[1].mValue.IValue] ^ 0x7B48A35E;
      v30 = v29 ^ ((unsigned __int16)v29 ^ (unsigned __int16)(v29 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v29 ^ (unsigned __int16)(v29 >> 14)) & 0xCCCC) << 14);
      result->mValue.IValue = v30 ^ (v30 ^ (v30 >> 7)) & 0x550055 ^ (((v30 ^ (v30 >> 7)) & 0x550055) << 7);
      goto LABEL_207;
    case 0x1C:
      v31 = v11->resultMember.iDrawCount[argv[1].mValue.IValue] ^ 0x7B48A35E;
      v32 = v31 ^ ((unsigned __int16)v31 ^ (unsigned __int16)(v31 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v31 ^ (unsigned __int16)(v31 >> 14)) & 0xCCCC) << 14);
      result->mValue.IValue = v32 ^ (v32 ^ (v32 >> 7)) & 0x550055 ^ (((v32 ^ (v32 >> 7)) & 0x550055) << 7);
      goto LABEL_207;
    case 0x1D:
      v33 = argv[1].mValue.IValue;
      GameDataInfo::getInstance();
      UseableCostumeCount = GameDataInfo::GetRsultRate(v34, (PLAYER_ID)v33);
      if ( (result->Type & 0x40) == 0 )
        goto LABEL_36;
LABEL_38:
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
        result->pObjectInterface,
        result,
        result->mValue.pStringManaged);
      result->pObjectInterface = 0i64;
      result->mValue.IValue = UseableCostumeCount;
      goto LABEL_207;
    case 0x1E:
      v35 = v11->resultMember.iStraightWin[argv[1].mValue.IValue] ^ 0x7B48A35E;
      v36 = v35 ^ ((unsigned __int16)v35 ^ (unsigned __int16)(v35 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v35 ^ (unsigned __int16)(v35 >> 14)) & 0xCCCC) << 14);
      result->mValue.IValue = (v36 ^ (v36 >> 7)) & 0x550055 ^ v36 ^ (((v36 ^ (v36 >> 7)) & 0x550055) << 7);
      goto LABEL_207;
    case 0x1F:
      v37 = v11->resultMember.uiTotalBattleFrame ^ 0x7B48A35E ^ (LOWORD(v11->resultMember.uiTotalBattleFrame) ^ 0xA35E ^ (unsigned __int16)((v11->resultMember.uiTotalBattleFrame ^ 0x7B48A35E) >> 14)) & 0xCCCC ^ (((LOWORD(v11->resultMember.uiTotalBattleFrame) ^ 0xA35E ^ (unsigned __int16)((v11->resultMember.uiTotalBattleFrame ^ 0x7B48A35E) >> 14)) & 0xCCCC) << 14);
      rankMatchLosePublication = (int)(1000
                                     * (v37 ^ (v37 ^ (v37 >> 7)) & 0x550055 ^ (((v37 ^ (v37 >> 7)) & 0x550055) << 7)))
                               / 60;
      goto LABEL_206;
    case 0x20:
      v38 = GameDataInfo::getInstance()->m_SurvivalWinCount ^ 0x7B48A35E;
      v39 = ((unsigned __int16)v38 ^ (unsigned __int16)(v38 >> 14)) & 0xCCCC;
      v40 = v39 ^ v38 ^ (v39 << 14);
      v41 = (v40 ^ (v40 >> 7)) & 0x550055;
      UseableCostumeCount = 9999;
      if ( (int)(v41 ^ v40 ^ (v41 << 7)) < 9999 )
        UseableCostumeCount = v41 ^ v40 ^ (v41 << 7);
      goto LABEL_34;
    case 0x21:
      v42 = argv[1].mValue.IValue;
      AppMain::GetControllerUIDForUser((AppMain *)v14, userID, argv[1].mValue.IValue);
      v45 = argv[3].mValue.IValue;
      v46 = (std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> >,0> > *)(1056 * v42 + v7);
      Myhead = (const AgControllerUID *)v46[137344]._Mypair._Myval2._Myval2._Myhead;
      v48 = Myhead[1];
      while ( !*(_BYTE *)(*(_QWORD *)&v48 + 25i64) )
      {
        if ( operator<((const AgControllerUID *)(*(_QWORD *)&v48 + 28i64), userID) )
        {
          v48 = *(AgControllerUID *)(*(_QWORD *)&v48 + 16i64);
        }
        else
        {
          Myhead = (const AgControllerUID *)v48;
          v48 = **(AgControllerUID **)&v48;
        }
      }
      if ( Myhead == (const AgControllerUID *)v46[137344]._Mypair._Myval2._Myval2._Myhead
        || operator<(userID, (const AgControllerUID *)((char *)Myhead + 28)) )
      {
        v108._Myfirst._Val = userID;
        _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
                     v46 + 137344,
                     v43,
                     &v108,
                     v44);
        std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
          v46 + 137344,
          (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > > *)&v108,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)Myhead,
          &_Newnode->_Myval,
          _Newnode);
        Myhead = v108._Myfirst._Val;
      }
      if ( (unsigned int)v45 > 9 )
        UseableCostumeCount = 0;
      else
        UseableCostumeCount = *(_DWORD *)&Myhead[4].m_uid[4 * v45 + 4];
      goto LABEL_34;
    case 0x23:
      v52 = *(_QWORD *)(v7 + 2506568);
      goto LABEL_95;
    case 0x24:
      v54 = *(_DWORD *)(v7 + 16i64 * argv[1].mValue.IValue + 2204824) ^ 0x7B48A35E;
      v55 = v54 ^ ((unsigned __int16)v54 ^ (unsigned __int16)(v54 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v54 ^ (unsigned __int16)(v54 >> 14)) & 0xCCCC) << 14);
      result->mValue.IValue = (v55 ^ (v55 >> 7)) & 0x550055 ^ v55 ^ (((v55 ^ (v55 >> 7)) & 0x550055) << 7);
      goto LABEL_207;
    case 0x25:
      result->mValue.IValue = *(_DWORD *)(v7 + 4 * (argv[2].mValue.IValue + 4i64 * argv[1].mValue.IValue) + 2204812);
      goto LABEL_207;
    case 0x26:
      v56 = *(_DWORD *)(v7 + 8i64 * argv[1].mValue.IValue + 2205008) ^ 0x7B48A35E;
      v57 = v56 ^ ((unsigned __int16)v56 ^ (unsigned __int16)(v56 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v56 ^ (unsigned __int16)(v56 >> 14)) & 0xCCCC) << 14);
      result->mValue.IValue = (v57 ^ (v57 >> 7)) & 0x550055 ^ v57 ^ (((v57 ^ (v57 >> 7)) & 0x550055) << 7);
      goto LABEL_207;
    case 0x27:
      result->mValue.IValue = *(_DWORD *)(v7 + 8i64 * argv[1].mValue.IValue + 2205004);
      goto LABEL_207;
    case 0x28:
      v58 = *(_DWORD *)(v7 + 8i64 * argv[1].mValue.IValue + 2204944) ^ 0x7B48A35E;
      v59 = v58 ^ ((unsigned __int16)v58 ^ (unsigned __int16)(v58 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v58 ^ (unsigned __int16)(v58 >> 14)) & 0xCCCC) << 14);
      result->mValue.IValue = (v59 ^ (v59 >> 7)) & 0x550055 ^ v59 ^ (((v59 ^ (v59 >> 7)) & 0x550055) << 7);
      goto LABEL_207;
    case 0x29:
      result->mValue.IValue = *(_DWORD *)(v7 + 8i64 * argv[1].mValue.IValue + 2204940);
      goto LABEL_207;
    case 0x2A:
      v108._Myfirst._Val = *(const AgControllerUID **)(1184i64 * argv[1].mValue.IValue + v7 + 2388168);
      v60 = localtime64((const __int64 *)&v108);
      Name = (char **)stringBuff;
      sprintf(
        stringBuff,
        "%04d-%02d-%02dT%02d:%02d:%02d",
        (unsigned int)(v60->tm_year + 1900),
        (unsigned int)(v60->tm_mon + 1),
        v60->tm_mday,
        v60->tm_hour,
        v60->tm_min,
        v60->tm_sec);
      sprintf(stringBuff, "%.10s", stringBuff);
      goto LABEL_18;
    case 0x2B:
      v108._Myfirst._Val = *(const AgControllerUID **)(1184i64 * argv[1].mValue.IValue + v7 + 2388176);
      v61 = localtime64((const __int64 *)&v108);
      Name = (char **)stringBuff;
      sprintf(
        stringBuff,
        "%04d-%02d-%02dT%02d:%02d:%02d",
        (unsigned int)(v61->tm_year + 1900),
        (unsigned int)(v61->tm_mon + 1),
        v61->tm_mday,
        v61->tm_hour,
        v61->tm_min,
        v61->tm_sec);
      sprintf(stringBuff, "%.10s", stringBuff);
      goto LABEL_18;
    case 0x2C:
      IsEmptyBestReplay = AppMain::IsEmptyBestReplay((AppMain *)v7);
      if ( (result->Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          result->pObjectInterface,
          result,
          result->mValue.pStringManaged);
        result->pObjectInterface = 0i64;
      }
      result->Type = VT_Int64;
      result->mValue.BValue = IsEmptyBestReplay;
      return result;
    case 0x2D:
      UseableCostumeCount = argv[1].mValue.IValue;
      UserGameOperation::Instance();
      if ( !Framework::GLManager::glm )
        UseableCostumeCount = -1;
      goto LABEL_34;
    case 0x2E:
      v52 = *(_QWORD *)(1184i64 * argv[1].mValue.IValue + v7 + 2388168);
      goto LABEL_95;
    case 0x2F:
      UseableCostumeCount = (int)(float)((float)(SaveRecord_PlayerData::GetTrialsAchivedRate((SaveRecord_PlayerData *)(v7 + 2202784))
                                               * 100.0)
                                       * 100.0);
      goto LABEL_34;
    case 0x30:
      result->mValue.IValue = (int)(float)((float)(AppMain::GetGalleryRate((AppMain *)v7) * 100.0) * 100.0);
      goto LABEL_207;
    case 0x31:
      result->mValue.IValue = (int)(float)((float)(AppMain::GetNetworkTitleRate((AppMain *)v7) * 100.0) * 100.0);
      goto LABEL_207;
    case 0x32:
      result->mValue.IValue = *(unsigned __int8 *)(v7 + 2197389);
      goto LABEL_207;
    case 0x33:
      result->mValue.IValue = g_NetworkManager.gamedata.maxSlot;
      goto LABEL_207;
    case 0x34:
      v63 = (*(_DWORD *)(v7 + 2208108) & 0x40000000) != 0;
      result->Type = VT_Int64;
      result->mValue.BValue = v63;
      return result;
    case 0x35:
      Name = (char **)stringBuff;
      NetManager::GetPlayerName(
        (NetManager *)v14,
        (PLAYER_ID)argv[1].mValue.IValue,
        stringBuff,
        0i64,
        argv[2].mValue.IValue);
      goto LABEL_18;
    case 0x36:
      v65 = argv[1].mValue.IValue;
      v66 = argv[2].mValue.IValue;
      result->Type = 6;
      if ( v15 == 6 )
        result->mValue.pString = v11->resultMember.rankAfter[v65].rankMatchName;
      else
        result->mValue.pString = v11->resultMember.freematch[v65].rankMatchName[v66];
      return result;
    case 0x37:
      v69 = argv[1].mValue.IValue;
      v70 = argv[2].mValue.IValue;
      if ( v15 == 6 )
        v71 = v11->resultMember.rankAfter[v69].rankMatchCharacterNo[v70];
      else
        v71 = v11->resultMember.freematch[v69].rankMatchCharacterNo[v70];
      result->mValue.IValue = v71;
      goto LABEL_207;
    case 0x38:
      v72 = argv[1].mValue.IValue;
      if ( v15 == 6 )
        rankMatchRank = v11->resultMember.rankAfter[v72].rankMatchRank;
      else
        rankMatchRank = v11->resultMember.freematch[v72].rankMatchRank[argv[2].mValue.IValue];
      result->mValue.IValue = rankMatchRank;
      goto LABEL_207;
    case 0x39:
      result->mValue.IValue = v11->resultMember.rankBefore[argv[1].mValue.IValue].rankMatchRank;
      goto LABEL_207;
    case 0x3A:
      rankMatchPoint = v11->resultMember.rankAfter[argv[1].mValue.IValue].rankMatchPoint;
      goto LABEL_143;
    case 0x3B:
      rankMatchPoint = v11->resultMember.rankBefore[argv[1].mValue.IValue].rankMatchPoint;
      goto LABEL_143;
    case 0x3C:
      v77 = argv[1].mValue.IValue;
      if ( (_DWORD)v77 != PlayerID )
      {
        v78 = v77;
        if ( !v11->resultMember.rankAfter[v77].rankMatchLosePublication
          || !v11->resultMember.rankAfter[v78].rankMatchDrawPublication
          || !v11->resultMember.rankAfter[v78].rankMatchRatePublication )
        {
          goto LABEL_152;
        }
      }
      v79 = 180 * v77;
      v80 = *(int *)((char *)&v11->resultMember.rankAfter[0].rankMatchBattleWin + v79) ^ 0x7B48A35E ^ (*(_WORD *)((char *)&v11->resultMember.rankAfter[0].rankMatchBattleWin + v79) ^ 0xA35E ^ (unsigned __int16)((*(int *)((char *)&v11->resultMember.rankAfter[0].rankMatchBattleWin + v79) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)((char *)&v11->resultMember.rankAfter[0].rankMatchBattleWin + v79) ^ 0xA35E ^ (unsigned __int16)((*(int *)((char *)&v11->resultMember.rankAfter[0].rankMatchBattleWin + v79) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      v81 = *(int *)((char *)&v11->resultMember.rankAfter[0].rankMatchBattleLose + v79) ^ 0x7B48A35E ^ (*(_WORD *)((char *)&v11->resultMember.rankAfter[0].rankMatchBattleLose + v79) ^ 0xA35E ^ (unsigned __int16)((*(int *)((char *)&v11->resultMember.rankAfter[0].rankMatchBattleLose + v79) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)((char *)&v11->resultMember.rankAfter[0].rankMatchBattleLose + v79) ^ 0xA35E ^ (unsigned __int16)((*(int *)((char *)&v11->resultMember.rankAfter[0].rankMatchBattleLose + v79) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      LODWORD(v79) = *(int *)((char *)&v11->resultMember.rankAfter[0].rankMatchBattleDraw + v79) ^ 0x7B48A35E ^ (*(_WORD *)((char *)&v11->resultMember.rankAfter[0].rankMatchBattleDraw + v79) ^ 0xA35E ^ (unsigned __int16)((*(int *)((char *)&v11->resultMember.rankAfter[0].rankMatchBattleDraw + v79) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)((char *)&v11->resultMember.rankAfter[0].rankMatchBattleDraw + v79) ^ 0xA35E ^ (unsigned __int16)((*(int *)((char *)&v11->resultMember.rankAfter[0].rankMatchBattleDraw + v79) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      v76 = ((v80 ^ (v80 >> 7)) & 0x550055 ^ v80 ^ (((v80 ^ (v80 >> 7)) & 0x550055) << 7))
          + ((v81 ^ (v81 >> 7)) & 0x550055 ^ v81 ^ (((v81 ^ (v81 >> 7)) & 0x550055) << 7))
          + ((v79 ^ ((unsigned int)v79 >> 7)) & 0x550055 ^ v79 ^ ((((unsigned int)v79 ^ ((unsigned int)v79 >> 7)) & 0x550055) << 7));
      goto LABEL_144;
    case 0x3D:
      rankMatchPoint = v11->resultMember.rankAfter[argv[1].mValue.IValue].rankMatchBattleWin;
LABEL_143:
      v75 = rankMatchPoint ^ 0x7B48A35E ^ ((unsigned __int16)rankMatchPoint ^ 0xA35E ^ (unsigned __int16)((rankMatchPoint ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)rankMatchPoint ^ 0xA35E ^ (unsigned __int16)((rankMatchPoint ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      v76 = v75 ^ (v75 ^ (v75 >> 7)) & 0x550055 ^ (((v75 ^ (v75 >> 7)) & 0x550055) << 7);
LABEL_144:
      rankMatchLosePublication = 99999999;
      if ( v76 < 99999999 )
        rankMatchLosePublication = v76;
      goto LABEL_206;
    case 0x3E:
      v82 = argv[1].mValue.IValue;
      if ( (_DWORD)v82 != PlayerID && !v11->resultMember.rankAfter[v82].rankMatchLosePublication )
        goto LABEL_152;
      rankMatchBattleLose = v11->resultMember.rankAfter[v82].rankMatchBattleLose;
      goto LABEL_158;
    case 0x3F:
      v85 = argv[1].mValue.IValue;
      if ( (_DWORD)v85 != PlayerID && !v11->resultMember.rankAfter[v85].rankMatchDrawPublication )
        goto LABEL_152;
      rankMatchBattleLose = v11->resultMember.rankAfter[v85].rankMatchBattleDraw;
LABEL_158:
      v84 = rankMatchBattleLose ^ 0x7B48A35E ^ ((unsigned __int16)rankMatchBattleLose ^ 0xA35E ^ (unsigned __int16)((rankMatchBattleLose ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)rankMatchBattleLose ^ 0xA35E ^ (unsigned __int16)((rankMatchBattleLose ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      rankMatchLosePublication = 99999999;
      if ( (int)((v84 ^ (v84 >> 7)) & 0x550055 ^ v84 ^ (((v84 ^ (v84 >> 7)) & 0x550055) << 7)) < 99999999 )
        rankMatchLosePublication = (v84 ^ (v84 >> 7)) & 0x550055 ^ v84 ^ (((v84 ^ (v84 >> 7)) & 0x550055) << 7);
      goto LABEL_206;
    case 0x40:
      v86 = argv[1].mValue.IValue;
      if ( (_DWORD)v86 == PlayerID || v11->resultMember.rankAfter[v86].rankMatchRatePublication )
      {
        v87 = v86;
        v88 = v11->resultMember.rankAfter[v86].rankMatchBattleWin ^ 0x7B48A35E;
        v89 = v88 ^ ((unsigned __int16)v88 ^ (unsigned __int16)(v88 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v88 ^ (unsigned __int16)(v88 >> 14)) & 0xCCCC) << 14);
        v90 = (v89 ^ (v89 >> 7)) & 0x550055 ^ v89 ^ (((v89 ^ (v89 >> 7)) & 0x550055) << 7);
        v91 = v11->resultMember.rankAfter[v87].rankMatchBattleLose ^ 0x7B48A35E ^ (LOWORD(v11->resultMember.rankAfter[v87].rankMatchBattleLose) ^ 0xA35E ^ (unsigned __int16)((v11->resultMember.rankAfter[v87].rankMatchBattleLose ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(v11->resultMember.rankAfter[v87].rankMatchBattleLose) ^ 0xA35E ^ (unsigned __int16)((v11->resultMember.rankAfter[v87].rankMatchBattleLose ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
        v92 = v11->resultMember.rankAfter[v87].rankMatchBattleDraw ^ 0x7B48A35E ^ (LOWORD(v11->resultMember.rankAfter[v87].rankMatchBattleDraw) ^ 0xA35E ^ (unsigned __int16)((v11->resultMember.rankAfter[v87].rankMatchBattleDraw ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(v11->resultMember.rankAfter[v87].rankMatchBattleDraw) ^ 0xA35E ^ (unsigned __int16)((v11->resultMember.rankAfter[v87].rankMatchBattleDraw ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
        v93 = v90
            + (v92 ^ (((v92 ^ (v92 >> 7)) & 0x550055) << 7) ^ (v92 ^ (v92 >> 7)) & 0x550055)
            + ((v91 ^ (v91 >> 7)) & 0x550055 ^ v91 ^ (((v91 ^ (v91 >> 7)) & 0x550055) << 7));
        if ( v93 )
          v6 = 10000 * v90 / v93;
$LN112_2:
        result->mValue.IValue = v6;
      }
      else
      {
LABEL_152:
        result->mValue.IValue = -1;
      }
      goto LABEL_207;
    case 0x41:
      v94 = argv[1].mValue.IValue;
      if ( v15 == 6 )
      {
        v95 = v11->resultMember.rankAfter[v94].rankMatchBattleWins ^ 0x7B48A35E;
        v96 = (LOWORD(v11->resultMember.rankAfter[v94].rankMatchBattleWins) ^ 0xA35E ^ (unsigned __int16)(v95 >> 14)) & 0xCCCC;
        v97 = v95 ^ v96 ^ (v96 << 14);
        PlayerID = v97 ^ (v97 ^ (v97 >> 7)) & 0x550055 ^ (((v97 ^ (v97 >> 7)) & 0x550055) << 7);
      }
      else
      {
        v98 = v11->resultMember.freematch[v94].rankMatchBattleWins[argv[2].mValue.IValue] ^ 0x7B48A35E;
        v99 = (LOWORD(v11->resultMember.freematch[v94].rankMatchBattleWins[argv[2].mValue.IValue]) ^ 0xA35E ^ (unsigned __int16)(v98 >> 14)) & 0xCCCC;
        v100 = v98 ^ v99 ^ (v99 << 14);
        PlayerID = (v100 ^ (v100 >> 7)) & 0x550055 ^ v100 ^ (((v100 ^ (v100 >> 7)) & 0x550055) << 7);
      }
      if ( PlayerID >= 99999999 )
        PlayerID = 99999999;
      goto $LN1637;
    case 0x42:
      result->mValue.IValue = *(_DWORD *)(v7 + 2197476);
      goto LABEL_207;
    case 0x43:
      result->mValue.IValue = *(_DWORD *)(v7 + 2197480);
      goto LABEL_207;
    case 0x44:
      result->mValue.IValue = *(_DWORD *)(v7 + 2197484);
      goto LABEL_207;
    case 0x46:
      result->mValue.IValue = *(unsigned __int8 *)(v7 + 2197436);
      goto LABEL_207;
    case 0x47:
      goto $LN1637;
    case 0x48:
      PlayerIndex = NetManager::GetPlayerIndex((NetManager *)v14, -1);
      if ( PlayerIndex <= 0 )
        PlayerIndex = 0;
      result->mValue.IValue = PlayerIndex;
      goto LABEL_207;
    case 0x49:
      v101 = argv[1].mValue.IValue;
      if ( (_DWORD)v101 != PlayerID )
        rankMatchLosePublication = v11->resultMember.rankAfter[v101].rankMatchLosePublication;
      goto LABEL_206;
    case 0x4A:
      v102 = argv[1].mValue.IValue;
      if ( (_DWORD)v102 != PlayerID )
        rankMatchLosePublication = v11->resultMember.rankAfter[v102].rankMatchDrawPublication;
      goto LABEL_206;
    case 0x4B:
      v103 = argv[1].mValue.IValue;
      if ( (_DWORD)v103 != PlayerID )
        rankMatchLosePublication = v11->resultMember.rankAfter[v103].rankMatchRatePublication;
      goto LABEL_206;
    case 0x4C:
      BattleSystem::BattleController::GetActionSystem();
      UseableCostumeCount = *(_DWORD *)(v104 + 246100);
      goto LABEL_34;
    case 0x4D:
      if ( replayBattle.m_RoundInfo[0].iRoundCount )
        rankMatchLosePublication = replayBattle.m_RoundInfo[0].iRoundCount + 1;
      if ( replayBattle.m_RoundInfo[1].iRoundCount )
        rankMatchLosePublication = replayBattle.m_RoundInfo[1].iRoundCount + 1;
      if ( replayBattle.m_RoundInfo[2].iRoundCount )
        rankMatchLosePublication = replayBattle.m_RoundInfo[2].iRoundCount + 1;
      if ( replayBattle.m_RoundInfo[3].iRoundCount )
        rankMatchLosePublication = replayBattle.m_RoundInfo[3].iRoundCount + 1;
      if ( replayBattle.m_RoundInfo[4].iRoundCount )
        rankMatchLosePublication = replayBattle.m_RoundInfo[4].iRoundCount + 1;
      if ( replayBattle.m_RoundInfo[5].iRoundCount )
        rankMatchLosePublication = replayBattle.m_RoundInfo[5].iRoundCount + 1;
      goto LABEL_206;
    case 0x4F:
      result->mValue.IValue = 16;
      goto LABEL_207;
    case 0x50:
      v52 = *(_QWORD *)(1184i64 * argv[1].mValue.IValue + v7 + 2389328);
LABEL_95:
      v53 = (double)(int)v52;
      if ( v52 < 0 )
        v53 = v53 + 1.844674407370955e19;
      result->Type = 5;
      result->mValue.NValue = v53;
      return result;
    case 0x51:
      BattleSystem::BattleController::GetActionSystem();
      UseableCostumeCount = *(_DWORD *)(v105 + 246080);
LABEL_34:
      if ( (result->Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          result->pObjectInterface,
          result,
          result->mValue.pStringManaged);
        result->pObjectInterface = 0i64;
      }
LABEL_36:
      result->mValue.IValue = UseableCostumeCount;
      goto LABEL_207;
    case 0x52:
      memset(pInfo, 0, sizeof(pInfo));
      NetManager::GetBattleStartTableRoomMemberInfo(&g_NetworkManager, pInfo);
      Name = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)pInfo[0].steamId);
      goto LABEL_18;
    case 0x53:
      Name = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)replayBattle.m_UserInfo[0][0].onlineId.data);
LABEL_18:
      if ( (result->Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          result->pObjectInterface,
          result,
          result->mValue.pStringManaged);
        result->pObjectInterface = 0i64;
      }
      result->Type = 6;
      result->mValue.pString = (const char *)Name;
      return result;
    case 0x54:
      v106 = *(_DWORD *)(v7 + 2202852);
      if ( v106 < 4 )
        rankMatchLosePublication = v106 >= 3;
      else
LABEL_204:
        rankMatchLosePublication = 2;
      goto LABEL_206;
    case 0x55:
      *(_DWORD *)userID[0].m_uid = 0;
      NetManager::GetPlayerName(
        (NetManager *)v14,
        (PLAYER_ID)argv[1].mValue.IValue,
        stringBuff,
        (RANKMATCH_DISCONNECT_MARKER *)userID,
        argv[2].mValue.IValue);
      if ( (result->Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          result->pObjectInterface,
          result,
          result->mValue.pStringManaged);
        result->pObjectInterface = 0i64;
      }
LABEL_122:
      result->mValue.IValue = *(_DWORD *)userID[0].m_uid;
      goto LABEL_207;
    case 0x56:
      v67 = argv[1].mValue.IValue;
      if ( v15 == 6 )
        rankMatchDisconnectMarker = v11->resultMember.rankAfter[v67].rankMatchDisconnectMarker;
      else
        rankMatchDisconnectMarker = v11->resultMember.freematch[v67].rankMatchDisconnectMarker[argv[2].mValue.IValue];
      result->mValue.IValue = rankMatchDisconnectMarker;
      goto LABEL_207;
    case 0x57:
      PlayerID = 0;
      v50 = 0i64;
      while ( 1 )
      {
        v51 = v50 > 0xFF ? 0 : *(_DWORD *)(v7 + 4 * (v50 + 264i64 * argv[1].mValue.IValue) + 2197520);
        if ( v51 == argv[2].mValue.IValue )
          break;
        ++PlayerID;
        if ( (__int64)++v50 >= 256 )
          return result;
      }
$LN1637:
      result->mValue.IValue = PlayerID;
      goto LABEL_207;
    default:
      return result;
  }
}

Scaleform::GFx::Value *__fastcall GfxManager::GFn_GetMenuCursor(
        GfxManager *this,
        Scaleform::GFx::Value *result,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // rax
  int v5; // ecx

  IValue = argv->mValue.IValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  v5 = this->m_MenuCursor[IValue];
  result->Type = VT_Float;
  result->mValue.IValue = v5;
  return result;
}

Scaleform::GFx::Value *__fastcall GfxManager::GFn_GetOnlineIDStatus(
        GfxManager *this,
        Scaleform::GFx::Value *result,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int v4; // ecx

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  v4 = *(char *)(*(_QWORD *)&AppMain::pApp + 2205592i64);
  result->Type = VT_Float;
  result->mValue.IValue = v4;
  return result;
}

void __fastcall GfxManager::GFn_GetUserNameToBC(GfxManager *this, const Scaleform::GFx::Value *argv, unsigned int arg)
{
  const char *CString; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value presult; // [rsp+30h] [rbp-1418h] BYREF
  __int64 v7; // [rsp+60h] [rbp-13E8h]
  Scaleform::GFx::Value ptr[100]; // [rsp+70h] [rbp-13D8h] BYREF
  char destination[256]; // [rsp+1330h] [rbp-118h] BYREF

  v7 = -2i64;
  `eh vector constructor iterator'(
    ptr,
    0x30ui64,
    0x64ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  presult.pObjectInterface = 0i64;
  presult.Type = VT_None;
  UserGameOperation::Instance();
  if ( Framework::GLManager::glm )
  {
    CString = AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
    strcpy_s(destination, 0x100ui64, CString);
  }
  if ( (ptr[0].Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr[0].pObjectInterface, ptr, ptr[0].mValue.pStringManaged);
    ptr[0].pObjectInterface = 0i64;
  }
  ptr[0].Type = 6;
  ptr[0].mValue.pString = destination;
  m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
  if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.loader_obj.content.GetUserNameToBC") )
    Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.loader_obj.content.GetUserNameToBC", &presult, ptr, 1u);
  if ( (presult.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      presult.pObjectInterface,
      &presult,
      presult.mValue.pStringManaged);
    presult.pObjectInterface = 0i64;
  }
  presult.Type = VT_None;
  `eh vector destructor iterator'(ptr, 0x30ui64, 0x64ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::GFn_SaveDisplayOption(
        GfxManager *this,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v3; // rbx
  bool v4; // al
  __int64 IValue; // rdi
  int v6; // esi
  __int64 v7; // xmm0_8
  AgDisplayMode *NativeMode; // rax
  unsigned int v9; // edx
  int v10; // ecx
  const AgDisplayMode *v11; // rax
  AgDisplayMode v12; // [rsp+38h] [rbp-30h] BYREF
  AgPointer<AgDisplay> result; // [rsp+48h] [rbp-20h] BYREF

  v3 = *(_QWORD *)&AppMain::pApp;
  v4 = argv[1].mValue.IValue != 0;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197432i64) = argv->mValue.IValue;
  *(_BYTE *)(v3 + 2197436) = v4;
  IValue = argv[2].mValue.IValue;
  v6 = argv[3].mValue.IValue;
  AgDisplayManager::getDisplayByIndex((AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance, &result, 0);
  if ( (_DWORD)IValue == 1 )
  {
    v7 = *(_QWORD *)&AgDisplay::getMode(result.m_ptr, &v12, v6)->m_width;
  }
  else
  {
    NativeMode = AgDisplay::getNativeMode(result.m_ptr, &v12);
    if ( (_DWORD)IValue == 2 )
    {
      v7 = *(_QWORD *)&NativeMode->m_width;
    }
    else
    {
      v9 = NativeMode->m_width >> 2;
      v10 = 0;
      v11 = fixedAspectRatioModes_1;
      do
      {
        if ( v11->m_width >= v9 )
          break;
        ++v10;
        ++v11;
      }
      while ( (__int64)v11 < (__int64)&fixedAspectRatioModes_1[23] );
      v7 = *(_QWORD *)&fixedAspectRatioModes_1[v10 + v6].m_width;
    }
  }
  *(_DWORD *)(v3 + 4 * IValue + 2197440) = v7;
  *(_DWORD *)(v3 + 4 * IValue + 2197452) = HIDWORD(v7);
  *(_DWORD *)(v3 + 2197464) = IValue;
  if ( (int)IValue > 0 )
    *(_DWORD *)(v3 + 2197468) = IValue;
  *(_BYTE *)(v3 + 2197472) = 1;
  AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&result);
}

void __fastcall GfxManager::GFn_SetAttackDataStatus(
        GfxManager *this,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _DWORD *v4; // rbx
  int v5; // eax
  GameDataInfo *v6; // rcx
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  __int128 v9; // xmm4
  __int128 v10; // xmm5
  __int128 v11; // xmm6
  __int128 v12; // xmm7
  int IValue; // edi
  GameDataInfo *v14; // rcx
  BattleSystem::BattleController *v15; // rax
  __m128i v16; // [rsp+20h] [rbp-128h]
  __m128i v17; // [rsp+30h] [rbp-118h]
  __int128 v18; // [rsp+40h] [rbp-108h]
  __int128 v19; // [rsp+50h] [rbp-F8h]
  __int128 v20; // [rsp+60h] [rbp-E8h]
  __int128 v21; // [rsp+70h] [rbp-D8h]
  __m128i v22; // [rsp+88h] [rbp-C0h]
  __int128 v23; // [rsp+B0h] [rbp-98h]
  BattleSystem::BattleController *v24; // [rsp+150h] [rbp+8h]

  v4 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  v5 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v4 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v5 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v6);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v5 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  v22 = *(__m128i *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart;
  v23 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAttack;
  v7 = *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge;
  v16 = *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge;
  v8 = *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge;
  v17 = *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge;
  v9 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn;
  v18 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn;
  v10 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0];
  v19 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0];
  v11 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][4];
  v20 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][4];
  v12 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2];
  v21 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2];
  IValue = argv->mValue.IValue;
  HIDWORD(v23) = IValue;
  if ( v5 > *v4 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v14);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
    v12 = v21;
    v11 = v20;
    v10 = v19;
    v9 = v18;
    v8 = v17;
    v7 = v16;
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart != _mm_cvtsi128_si32(v22)
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge[0] != _mm_cvtsi128_si32(v7)
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge[1] != _mm_cvtsi128_si32(_mm_srli_si128(v7, 4))
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge[0] != _mm_cvtsi128_si32(_mm_srli_si128(v7, 8))
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge[1] != _mm_cvtsi128_si32(_mm_srli_si128(v7, 12))
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge[0] != _mm_cvtsi128_si32(v8)
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge[1] != _mm_cvtsi128_si32(_mm_srli_si128(v8, 4))
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[0] != _mm_cvtsi128_si32(_mm_srli_si128(v8, 8))
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[1] != _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) )
  {
    `GameDataInfo::getInstance'::`2'::instance.m_TrainingSettingUpdate = 1;
  }
  *(__m128i *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart = v22;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAttack = v23;
  *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge = v7;
  *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge = v8;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn = v9;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0] = v10;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][4] = v11;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2] = v12;
  v15 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v24 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v24);
    BattleSystem::BattleController::instance = v15;
  }
  v15->bAttackData = IValue != 0;
}

void __fastcall GfxManager::GFn_SetButtonConfig(GfxManager *this, const Scaleform::GFx::Value *argv, unsigned int argc)
{
  __int64 IValue; // rsi
  const Scaleform::GFx::Value *v4; // rdi
  __int64 v5; // rbx
  const std::piecewise_construct_t *v6; // rdx
  std::tuple<> *v7; // r9
  int v8; // eax
  int v9; // er14
  int v10; // er15
  int v11; // er12
  int v12; // er13
  std::map<AgControllerUID,FighterOperationMapper> *v13; // rsi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Myhead; // rbx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Parent; // rdi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *_Newnode; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Ptr; // rbx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v18; // rdi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v19; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v20; // rbx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v21; // rdi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v22; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v23; // rbx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v24; // rdi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v25; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v26; // rbx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v27; // rdi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v28; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v29; // rbx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v30; // rdi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v31; // rax
  std::tuple<> *v32; // r9
  std::tuple<> *v33; // r9
  std::tuple<> *v34; // r9
  int v35; // ebx
  FighterOperationKeyboardMapper *v36; // rax
  std::map<AgControllerUID,FighterOperationMapper> *v37; // rcx
  __int64 v38; // rdx
  std::map<AgControllerUID,FighterOperationMapper> v39; // xmm0
  std::map<AgControllerUID,FighterOperationMapper> v40; // xmm1
  std::map<AgControllerUID,FighterOperationMapper> v41; // xmm0
  std::map<AgControllerUID,FighterOperationMapper> v42; // xmm1
  std::map<AgControllerUID,FighterOperationMapper> v43; // xmm0
  std::map<AgControllerUID,FighterOperationMapper> v44; // xmm1
  std::map<AgControllerUID,FighterOperationMapper> v45; // xmm0
  std::map<AgControllerUID,FighterOperationMapper> v46; // xmm1
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >,bool> v47; // [rsp+30h] [rbp-D0h] BYREF
  int v48; // [rsp+40h] [rbp-C0h]
  int v49; // [rsp+44h] [rbp-BCh]
  FighterOperationMapper::Mapped v50; // [rsp+48h] [rbp-B8h]
  FighterOperationMapper::Mapped v51; // [rsp+4Ch] [rbp-B4h]
  FighterOperationMapper::Mapped v52; // [rsp+50h] [rbp-B0h]
  FighterOperationMapper::Mapped v53; // [rsp+54h] [rbp-ACh]
  int userIndex; // [rsp+58h] [rbp-A8h]
  std::map<AgControllerUID,FighterOperationMapper> *v55; // [rsp+60h] [rbp-A0h]
  AgControllerUID userID; // [rsp+68h] [rbp-98h] BYREF
  FighterOperationKeyboardMapper v57; // [rsp+70h] [rbp-90h] BYREF

  IValue = argv->mValue.IValue;
  v4 = argv;
  v5 = *(_QWORD *)&AppMain::pApp;
  userIndex = IValue;
  AppMain::GetControllerUIDForUser((AppMain *)this, &userID, IValue);
  v8 = v4[7].mValue.IValue;
  v4 += 3;
  v48 = v8;
  v9 = v4->mValue.IValue;
  v10 = v4[1].mValue.IValue;
  v11 = v4[2].mValue.IValue;
  v12 = v4[3].mValue.IValue;
  v49 = v4[5].mValue.IValue;
  v50 = v4[6].mValue.IValue;
  v51 = v4[7].mValue.IValue;
  v52 = v4[8].mValue.IValue;
  v53 = v4[9].mValue.IValue;
  v55 = (std::map<AgControllerUID,FighterOperationMapper> *)(v5 + 1056 * IValue);
  v13 = v55 + 137344;
  Myhead = v55[137344]._Mypair._Myval2._Myval2._Myhead;
  Parent = Myhead->_Parent;
  while ( !Parent->_Isnil )
  {
    if ( operator<(&Parent->_Myval.first, &userID) )
    {
      Parent = Parent->_Right;
    }
    else
    {
      Myhead = Parent;
      Parent = Parent->_Left;
    }
  }
  if ( Myhead == v13->_Mypair._Myval2._Myval2._Myhead || operator<(&userID, &Myhead->_Myval.first) )
  {
    v47.first._Ptr = (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)&userID;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
                 v13,
                 v6,
                 (std::tuple<AgControllerUID const &> *)&v47,
                 v7);
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      v13,
      &v47.first,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)Myhead,
      &_Newnode->_Myval,
      _Newnode);
    Myhead = v47.first._Ptr;
  }
  Myhead->_Myval.second.m_mapping[0] = v9;
  Ptr = v13->_Mypair._Myval2._Myval2._Myhead;
  v18 = v13->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v18->_Isnil )
  {
    if ( operator<(&v18->_Myval.first, &userID) )
    {
      v18 = v18->_Right;
    }
    else
    {
      Ptr = v18;
      v18 = v18->_Left;
    }
  }
  if ( Ptr == v13->_Mypair._Myval2._Myval2._Myhead || operator<(&userID, &Ptr->_Myval.first) )
  {
    v47.first._Ptr = (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)&userID;
    v19 = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
            v13,
            v6,
            (std::tuple<AgControllerUID const &> *)&v47,
            v7);
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      v13,
      &v47.first,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)Ptr,
      &v19->_Myval,
      v19);
    Ptr = v47.first._Ptr;
  }
  Ptr->_Myval.second.m_mapping[1] = v10;
  v20 = v13->_Mypair._Myval2._Myval2._Myhead;
  v21 = v13->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v21->_Isnil )
  {
    if ( operator<(&v21->_Myval.first, &userID) )
    {
      v21 = v21->_Right;
    }
    else
    {
      v20 = v21;
      v21 = v21->_Left;
    }
  }
  if ( v20 == v13->_Mypair._Myval2._Myval2._Myhead || operator<(&userID, &v20->_Myval.first) )
  {
    v47.first._Ptr = (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)&userID;
    v22 = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
            v13,
            v6,
            (std::tuple<AgControllerUID const &> *)&v47,
            v7);
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      v13,
      &v47.first,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)v20,
      &v22->_Myval,
      v22);
    v20 = v47.first._Ptr;
  }
  v20->_Myval.second.m_mapping[2] = v11;
  v23 = v13->_Mypair._Myval2._Myval2._Myhead;
  v24 = v13->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v24->_Isnil )
  {
    if ( operator<(&v24->_Myval.first, &userID) )
    {
      v24 = v24->_Right;
    }
    else
    {
      v23 = v24;
      v24 = v24->_Left;
    }
  }
  if ( v23 == v13->_Mypair._Myval2._Myval2._Myhead || operator<(&userID, &v23->_Myval.first) )
  {
    v47.first._Ptr = (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)&userID;
    v25 = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
            v13,
            v6,
            (std::tuple<AgControllerUID const &> *)&v47,
            v7);
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      v13,
      &v47.first,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)v23,
      &v25->_Myval,
      v25);
    v23 = v47.first._Ptr;
  }
  v23->_Myval.second.m_mapping[3] = v12;
  v26 = v13->_Mypair._Myval2._Myval2._Myhead;
  v27 = v13->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v27->_Isnil )
  {
    if ( operator<(&v27->_Myval.first, &userID) )
    {
      v27 = v27->_Right;
    }
    else
    {
      v26 = v27;
      v27 = v27->_Left;
    }
  }
  if ( v26 == v13->_Mypair._Myval2._Myval2._Myhead || operator<(&userID, &v26->_Myval.first) )
  {
    v47.first._Ptr = (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)&userID;
    v28 = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
            v13,
            v6,
            (std::tuple<AgControllerUID const &> *)&v47,
            v7);
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      v13,
      &v47.first,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)v26,
      &v28->_Myval,
      v28);
    v26 = v47.first._Ptr;
  }
  v26->_Myval.second.m_mapping[4] = v48;
  v29 = v13->_Mypair._Myval2._Myval2._Myhead;
  v30 = v13->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v30->_Isnil )
  {
    if ( operator<(&v30->_Myval.first, &userID) )
    {
      v30 = v30->_Right;
    }
    else
    {
      v29 = v30;
      v30 = v30->_Left;
    }
  }
  if ( v29 == v13->_Mypair._Myval2._Myval2._Myhead || operator<(&userID, &v29->_Myval.first) )
  {
    v47.first._Ptr = (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)&userID;
    v31 = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
            v13,
            v6,
            (std::tuple<AgControllerUID const &> *)&v47,
            v7);
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      v13,
      &v47.first,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)v29,
      &v31->_Myval,
      v31);
    v29 = v47.first._Ptr;
  }
  v29->_Myval.second.m_mapping[5] = v49;
  std::map<AgControllerUID,FighterOperationMapper>::_Try_emplace<AgControllerUID const &,>(v13, &v47, &userID, v7);
  v47.first._Ptr->_Myval.second.m_mapping[6] = v50;
  std::map<AgControllerUID,FighterOperationMapper>::_Try_emplace<AgControllerUID const &,>(v13, &v47, &userID, v32);
  v47.first._Ptr->_Myval.second.m_mapping[7] = v51;
  std::map<AgControllerUID,FighterOperationMapper>::_Try_emplace<AgControllerUID const &,>(v13, &v47, &userID, v33);
  v47.first._Ptr->_Myval.second.m_mapping[8] = v52;
  std::map<AgControllerUID,FighterOperationMapper>::_Try_emplace<AgControllerUID const &,>(v13, &v47, &userID, v34);
  v35 = userIndex;
  v47.first._Ptr->_Myval.second.m_mapping[9] = v53;
  if ( (unsigned int)(v35 - 1) <= 1 )
  {
    FighterOperationKeyboardMapper::reset(&v57, 1);
    FighterOperationKeyboardMapper::reset(&v57, v35);
    v36 = &v57;
    v37 = v55 + 137345;
    v38 = 8i64;
    do
    {
      v37 += 8;
      v39 = *(std::map<AgControllerUID,FighterOperationMapper> *)v36->m_mapping;
      v40 = *(std::map<AgControllerUID,FighterOperationMapper> *)&v36->m_mapping[4];
      v36 = (FighterOperationKeyboardMapper *)((char *)v36 + 128);
      v37[-8] = v39;
      v41 = *(std::map<AgControllerUID,FighterOperationMapper> *)&v36[-1].m_mapping[232];
      v37[-7] = v40;
      v42 = *(std::map<AgControllerUID,FighterOperationMapper> *)&v36[-1].m_mapping[236];
      v37[-6] = v41;
      v43 = *(std::map<AgControllerUID,FighterOperationMapper> *)&v36[-1].m_mapping[240];
      v37[-5] = v42;
      v44 = *(std::map<AgControllerUID,FighterOperationMapper> *)&v36[-1].m_mapping[244];
      v37[-4] = v43;
      v45 = *(std::map<AgControllerUID,FighterOperationMapper> *)&v36[-1].m_mapping[248];
      v37[-3] = v44;
      v46 = *(std::map<AgControllerUID,FighterOperationMapper> *)&v36[-1].m_mapping[252];
      v37[-2] = v45;
      v37[-1] = v46;
      --v38;
    }
    while ( v38 );
  }
}

void __fastcall GfxManager::GFn_SetControllerSetting(
        GfxManager *this,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned int UIValue; // ebp
  unsigned int v5; // esi
  _DWORD *v6; // rbx
  int v7; // eax
  FighterOperation *v8; // rax
  FighterOperation::Slot *m_slots; // rdx
  int userIndex; // ecx
  FighterOperation::ListenerNode *p_m_assignListenerListEnd; // r14
  extension::BiLinkable<FighterOperation::ListenerNode> *m_Next; // rbx
  extension::BiLinkable<FighterOperation::ListenerNode> **p_m_Next; // rcx
  FighterOperation *v14; // rax
  FighterOperation::Slot *v15; // rdx
  int v16; // ecx
  FighterOperation::ListenerNode *v17; // r14
  extension::BiLinkable<FighterOperation::ListenerNode> *v18; // rbx
  extension::BiLinkable<FighterOperation::ListenerNode> **v19; // rcx
  GameDataInfo *v20; // rcx
  GameDataInfo *v21; // rcx

  UIValue = argv[1].mValue.UIValue;
  v5 = argv->mValue.UIValue;
  v6 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  v7 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v6 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v7 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v20);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v7 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0] = v5;
  if ( v7 > *v6 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v21);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1] = UIValue;
  v8 = FighterOperation::Instance();
  m_slots = v8->m_slots;
  if ( v8 != (FighterOperation *)-8i64 )
  {
    userIndex = m_slots->userIndex;
    m_slots->userIndex = v5;
    v8->m_slots[0].userId = v5;
    if ( userIndex != v5 )
    {
      p_m_assignListenerListEnd = &v8->m_assignListenerListEnd;
      m_Next = v8->m_assignListenerListEnd.m_Next;
      if ( m_Next != &v8->m_assignListenerListEnd )
      {
        do
        {
          p_m_Next = &m_Next[-1].m_Next;
          if ( !m_Next )
            p_m_Next = 0i64;
          ((void (__fastcall *)(extension::BiLinkable<FighterOperation::ListenerNode> **, __int64, _QWORD))(*p_m_Next)->m_Next)(
            p_m_Next,
            1i64,
            v5);
          m_Next = m_Next->m_Next;
        }
        while ( m_Next != p_m_assignListenerListEnd );
      }
    }
  }
  v14 = FighterOperation::Instance();
  v15 = &v14->m_slots[1];
  if ( v14 != (FighterOperation *)-1488i64 )
  {
    v16 = v15->userIndex;
    v15->userIndex = UIValue;
    v14->m_slots[1].userId = UIValue;
    if ( v16 != UIValue )
    {
      v17 = &v14->m_assignListenerListEnd;
      v18 = v14->m_assignListenerListEnd.m_Next;
      if ( v18 != &v14->m_assignListenerListEnd )
      {
        do
        {
          v19 = &v18[-1].m_Next;
          if ( !v18 )
            v19 = 0i64;
          ((void (__fastcall *)(extension::BiLinkable<FighterOperation::ListenerNode> **, __int64, _QWORD))(*v19)->m_Next)(
            v19,
            2i64,
            UIValue);
          v18 = v18->m_Next;
        }
        while ( v18 != v17 );
      }
    }
  }
  if ( v5 || UIValue )
  {
    if ( this->m_GFXMovie.m_movieProxy.m_ptr )
      this->m_GFXMovie.m_movieProxy.m_ptr->m_operationGenerator.m_multiControllerMode = ByFighter;
  }
  else if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    this->m_GFXMovie.m_movieProxy.m_ptr->m_operationGenerator.m_multiControllerMode = ByUser;
    this->m_ControllerSelect = 0;
    return;
  }
  this->m_ControllerSelect = 0;
}

void __fastcall GfxManager::GFn_SetDisplayOption(
        GfxManager *this,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // ebx
  int v4; // edi
  __int64 v5; // xmm0_8
  unsigned int v6; // edx
  int v7; // ecx
  const AgDisplayMode *v8; // rax
  AgDisplayMode v9; // [rsp+48h] [rbp-40h] BYREF
  AgDisplayMode v10; // [rsp+54h] [rbp-34h] BYREF
  AgDisplayMode v11; // [rsp+60h] [rbp-28h] BYREF
  AgPointer<AgDisplay> result; // [rsp+70h] [rbp-18h] BYREF

  if ( argc > 2 )
  {
    IValue = argv[2].mValue.IValue;
    v4 = argv[3].mValue.IValue;
    AgDisplayManager::getDisplayByIndex((AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance, &result, 0);
    if ( IValue == 1 )
    {
      v5 = *(_QWORD *)&AgDisplay::getMode(result.m_ptr, &v9, v4)->m_width;
    }
    else if ( IValue == 2 )
    {
      v5 = *(_QWORD *)&AgDisplay::getNativeMode(result.m_ptr, &v10)->m_width;
    }
    else
    {
      v6 = AgDisplay::getNativeMode(result.m_ptr, &v11)->m_width >> 2;
      v7 = 0;
      v8 = fixedAspectRatioModes_1;
      do
      {
        if ( v8->m_width >= v6 )
          break;
        ++v7;
        ++v8;
      }
      while ( (__int64)v8 < (__int64)&fixedAspectRatioModes_1[23] );
      v5 = *(_QWORD *)&fixedAspectRatioModes_1[v7 + v4].m_width;
    }
    AppMain::ResizeDisplay(*(AppMain **)&AppMain::pApp, v5, SHIDWORD(v5), (AgWindowMode)IValue, 1);
    AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&result);
  }
}

void __fastcall GfxManager::GFn_SetHudPosition(GfxManager *this, const Scaleform::GFx::Value *argv, __int64 argc)
{
  __int64 v3; // rbx
  int IValue; // edi
  int v5; // ebp
  int v6; // esi
  unsigned __int8 (__fastcall ***v7)(_QWORD, const Scaleform::GFx::Value *, __int64); // rcx

  v3 = *(_QWORD *)&AppMain::pApp;
  IValue = argv->mValue.IValue;
  v5 = argv[1].mValue.IValue;
  v6 = argv[2].mValue.IValue;
  v7 = (unsigned __int8 (__fastcall ***)(_QWORD, const Scaleform::GFx::Value *, __int64))(*(_QWORD *)&AppMain::pApp
                                                                                        + 2182616i64);
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197476i64) = IValue;
  *(_DWORD *)(v3 + 2197480) = v5;
  *(_DWORD *)(v3 + 2197484) = v6;
  if ( !(**v7)(v7, argv, argc) && *(_BYTE *)(v3 + 2182636) )
    *(_DWORD *)(v3 + 2182796) = IValue;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v3 + 2182616))(v3 + 2182616) && *(_BYTE *)(v3 + 2182636) )
    *(_DWORD *)(v3 + 2182800) = v5;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v3 + 2182616))(v3 + 2182616) )
  {
    if ( *(_BYTE *)(v3 + 2182636) )
      *(_DWORD *)(v3 + 2182800) = v6;
  }
}

void __fastcall GfxManager::GFn_SetKeyDataStatus(
        GfxManager *this,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _DWORD *v4; // rbx
  int v5; // eax
  GameDataInfo *v6; // rcx
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  __int128 v9; // xmm4
  __int128 v10; // xmm5
  __int128 v11; // xmm6
  __int128 v12; // xmm7
  int IValue; // edi
  GameDataInfo *v14; // rcx
  BattleSystem::BattleController *v15; // rax
  __m128i v16; // [rsp+20h] [rbp-128h]
  __m128i v17; // [rsp+30h] [rbp-118h]
  __int128 v18; // [rsp+40h] [rbp-108h]
  __int128 v19; // [rsp+50h] [rbp-F8h]
  __int128 v20; // [rsp+60h] [rbp-E8h]
  __int128 v21; // [rsp+70h] [rbp-D8h]
  __m128i v22; // [rsp+88h] [rbp-C0h]
  __int128 v23; // [rsp+B0h] [rbp-98h]
  BattleSystem::BattleController *v24; // [rsp+150h] [rbp+8h]

  v4 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  v5 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v4 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v5 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v6);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v5 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  v22 = *(__m128i *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart;
  v23 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAttack;
  v7 = *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge;
  v16 = *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge;
  v8 = *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge;
  v17 = *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge;
  v9 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn;
  v18 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn;
  v10 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0];
  v19 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0];
  v11 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][4];
  v20 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][4];
  v12 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2];
  v21 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2];
  IValue = argv->mValue.IValue;
  DWORD2(v23) = IValue;
  if ( v5 > *v4 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v14);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
    v12 = v21;
    v11 = v20;
    v10 = v19;
    v9 = v18;
    v8 = v17;
    v7 = v16;
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart != _mm_cvtsi128_si32(v22)
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge[0] != _mm_cvtsi128_si32(v7)
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge[1] != _mm_cvtsi128_si32(_mm_srli_si128(v7, 4))
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge[0] != _mm_cvtsi128_si32(_mm_srli_si128(v7, 8))
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge[1] != _mm_cvtsi128_si32(_mm_srli_si128(v7, 12))
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge[0] != _mm_cvtsi128_si32(v8)
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge[1] != _mm_cvtsi128_si32(_mm_srli_si128(v8, 4))
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[0] != _mm_cvtsi128_si32(_mm_srli_si128(v8, 8))
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[1] != _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) )
  {
    `GameDataInfo::getInstance'::`2'::instance.m_TrainingSettingUpdate = 1;
  }
  *(__m128i *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart = v22;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAttack = v23;
  *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge = v7;
  *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge = v8;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn = v9;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0] = v10;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][4] = v11;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2] = v12;
  v15 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v24 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v24);
    BattleSystem::BattleController::instance = v15;
  }
  v15->bKeyData = IValue != 0;
}

void __fastcall GfxManager::GFn_SetOperationMapper(
        GfxManager *this,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  AppMain *v3; // rsi
  _DWORD *v4; // rbx
  int v5; // eax
  USER_ID v6; // edi
  USER_ID v7; // ebp
  FighterOperationMapper *SaveDataKeyConfigMyMapper; // rbx
  FighterOperation *v9; // rax
  FighterOperationMapper *v10; // rbx
  FighterOperation *v11; // rax
  GameDataInfo *v12; // rcx
  GameDataInfo *v13; // rcx
  FighterOperationMapper result; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(AppMain **)&AppMain::pApp;
  v4 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  v5 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v4 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v5 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v12);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v5 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  v6 = `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0];
  if ( v5 > *v4 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v13);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v7 = `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1];
  SaveDataKeyConfigMyMapper = AppMain::GetSaveDataKeyConfigMyMapper(v3, &result, v6);
  v9 = FighterOperation::Instance();
  if ( v9 != (FighterOperation *)-8i64 )
  {
    *(_OWORD *)v9->m_slots[0].operationMapper.m_mapping = *(_OWORD *)SaveDataKeyConfigMyMapper->m_mapping;
    *(_OWORD *)&v9->m_slots[0].operationMapper.m_mapping[4] = *(_OWORD *)&SaveDataKeyConfigMyMapper->m_mapping[4];
    *(_QWORD *)&v9->m_slots[0].operationMapper.m_mapping[8] = *(_QWORD *)&SaveDataKeyConfigMyMapper->m_mapping[8];
    FighterOperation::ReverseOperationMapper::assign(&v9->m_slots[0].reverseMapper, &v9->m_slots[0].operationMapper);
  }
  v10 = AppMain::GetSaveDataKeyConfigMyMapper(v3, &result, v7);
  v11 = FighterOperation::Instance();
  if ( v11 != (FighterOperation *)-1488i64 )
  {
    *(_OWORD *)v11->m_slots[1].operationMapper.m_mapping = *(_OWORD *)v10->m_mapping;
    *(_OWORD *)&v11->m_slots[1].operationMapper.m_mapping[4] = *(_OWORD *)&v10->m_mapping[4];
    *(_QWORD *)&v11->m_slots[1].operationMapper.m_mapping[8] = *(_QWORD *)&v10->m_mapping[8];
    FighterOperation::ReverseOperationMapper::assign(&v11->m_slots[1].reverseMapper, &v11->m_slots[1].operationMapper);
  }
}

void __fastcall GfxManager::GFn_SetSingleMember(GfxManager *this, const Scaleform::GFx::Value *argv, unsigned int argc)
{
  __int64 IValue; // rbx
  int v4; // esi
  int v5; // ebp
  int v6; // er14
  __int64 v7; // rax
  __int64 v8; // rdi
  GameDataInfo *v9; // rcx

  IValue = argv->mValue.IValue;
  v4 = argv[1].mValue.IValue;
  v5 = argv[2].mValue.IValue;
  v6 = argv[3].mValue.IValue;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v9);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v7 = IValue;
  v8 = IValue;
  `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[IValue][0] = v4;
  `GameDataInfo::getInstance'::`2'::instance.m_EditRandom[v7][0] = 0;
  `GameDataInfo::getInstance'::`2'::instance.m_EditRandom[v7][0] = 0;
  `GameDataInfo::getInstance'::`2'::instance.m_TeamRandom[IValue] = 0;
  `GameDataInfo::getInstance'::`2'::instance.m_ColorSelectedTime[IValue][0] = (unsigned int)(int)(double)(int)time64(0i64);
  `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[v8][0] = v5;
  `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[v8][0] = v6;
}

void __fastcall GfxManager::GFn_SetTeamMember(GfxManager *this, const Scaleform::GFx::Value *argv, unsigned int argc)
{
  __int64 *v3; // rax
  int v4; // er8
  __int64 IValue; // rbx
  __int64 v6; // r14
  __int64 v7; // rdi
  int v8; // er15
  int v9; // ebp
  int v10; // esi
  bool BValue; // r12
  bool v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rbx
  bool v15; // cc
  GameDataInfo *v16; // rcx
  GameDataInfo *v17; // rcx
  GameDataInfo *v18; // rcx

  v3 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v4 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  IValue = argv->mValue.IValue;
  v6 = argv[1].mValue.IValue;
  v7 = *v3;
  v8 = argv[2].mValue.IValue;
  v9 = argv[3].mValue.IValue;
  v10 = argv[4].mValue.IValue;
  BValue = argv[6].mValue.BValue;
  v12 = argv[7].mValue.BValue;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v3 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v4 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v16);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v4 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  v13 = IValue;
  v14 = v6 + 3 * IValue;
  `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][v14] = v8;
  `GameDataInfo::getInstance'::`2'::instance.m_EditRandom[0][v14] = BValue;
  `GameDataInfo::getInstance'::`2'::instance.m_TeamRandom[v13] = v12;
  if ( v4 > *(_DWORD *)(v7 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v17);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_ColorSelectedTime[0][v14] = (unsigned int)(int)(double)(int)time64(0i64);
  v15 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA <= *(_DWORD *)(v7 + 40);
  `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[0][v14] = v9;
  if ( !v15 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v18);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][v14] = v10;
}

void __fastcall GfxManager::GFn_SetTeamOrder(GfxManager *this, const Scaleform::GFx::Value *argv, unsigned int argc)
{
  __int64 IValue; // rcx
  GameDataInfo *v5; // rcx

  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v5);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  IValue = argv->mValue.IValue;
  `GameDataInfo::getInstance'::`2'::instance.m_Order[IValue][0] = argv[1].mValue.IValue;
  `GameDataInfo::getInstance'::`2'::instance.m_Order[IValue][1] = argv[2].mValue.IValue;
  `GameDataInfo::getInstance'::`2'::instance.m_Order[IValue][2] = argv[3].mValue.IValue;
}

Scaleform::GFx::Value *__fastcall GfxManager::GFn_Test(
        GfxManager *this,
        Scaleform::GFx::Value *result,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  const char **v6; // rax
  const char *v7; // r8
  GameDataInfo *v8; // rcx
  int v9; // ecx
  Scaleform::GFx::Value::ObjectInterface *pObjectInterface; // r9
  char Type; // al
  GAME_MODE v12; // ecx
  Scaleform::GFx::Value::ObjectInterface *v13; // r9
  char BValue; // al
  GAME_MODE v15; // ecx
  Scaleform::GFx::Value::ObjectInterface *v16; // r9
  char v17; // al
  GAME_RULE v18; // ecx
  Scaleform::GFx::Value::ObjectInterface *v19; // r9
  char v20; // al
  Scaleform::GFx::Value::ObjectInterface *v21; // rcx
  char v22; // al
  Scaleform::GFx::Value *ASArray; // rax
  signed int i; // ebx
  Scaleform::GFx::Value val; // [rsp+20h] [rbp-E8h] BYREF
  Scaleform::GFx::Value v27; // [rsp+58h] [rbp-B0h] BYREF
  Scaleform::GFx::Value value; // [rsp+90h] [rbp-78h] BYREF
  Scaleform::GFx::Value v29; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-18h]
  Scaleform::GFx::Value resulta; // [rsp+F8h] [rbp-10h] BYREF

  v30 = -2i64;
  LODWORD(v27.pPrev) = 0;
  v6 = (const char **)NtCurrentTeb()->Reserved1[11];
  v7 = *v6;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *((_DWORD *)*v6 + 10) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v8);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v9 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  value.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  pObjectInterface = 0i64;
  value.pObjectInterface = 0i64;
  Type = 3;
  value.Type = VT_Float;
  value.mValue.IValue = v9;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    Scaleform::GFx::Movie::SetVariable(
      this->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
      "_root.super.GameMode",
      &value,
      SV_Sticky);
    Type = value.Type;
    pObjectInterface = value.pObjectInterface;
  }
  if ( (Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pObjectInterface, &value, value.mValue.pStringManaged);
    value.pObjectInterface = 0i64;
  }
  value.Type = VT_None;
  v12 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  *(__m128i *)&val.pNext = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v13 = 0i64;
  *(_QWORD *)&val.Type = 0i64;
  BValue = 3;
  val.mValue.IValue = 3;
  LODWORD(val.DataAux) = v12;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    Scaleform::GFx::Movie::SetVariable(
      this->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
      "_root.GameMode_static",
      (const Scaleform::GFx::Value *)&val.8,
      SV_Sticky);
    BValue = val.mValue.BValue;
    v13 = *(Scaleform::GFx::Value::ObjectInterface **)&val.Type;
  }
  if ( (BValue & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v13, (Scaleform::GFx::Value *)&val.8, (void *)val.DataAux);
  v15 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  *(__m128i *)&val.pNext = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v16 = 0i64;
  *(_QWORD *)&val.Type = 0i64;
  v17 = 3;
  val.mValue.IValue = 3;
  LODWORD(val.DataAux) = v15;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    Scaleform::GFx::Movie::SetVariable(
      this->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
      "_root.GameMode_no_static",
      (const Scaleform::GFx::Value *)&val.8,
      SV_Sticky);
    v17 = val.mValue.BValue;
    v16 = *(Scaleform::GFx::Value::ObjectInterface **)&val.Type;
  }
  if ( (v17 & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v16, (Scaleform::GFx::Value *)&val.8, (void *)val.DataAux);
  v18 = `GameDataInfo::getInstance'::`2'::instance.m_GameRule[`GameDataInfo::getInstance'::`2'::instance.m_GameRuleIndex];
  *(__m128i *)&val.pNext = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v19 = 0i64;
  *(_QWORD *)&val.Type = 0i64;
  v20 = 3;
  val.mValue.IValue = 3;
  LODWORD(val.DataAux) = v18;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    Scaleform::GFx::Movie::SetVariable(
      this->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
      "_root.GameRule",
      (const Scaleform::GFx::Value *)&val.8,
      SV_Sticky);
    v20 = val.mValue.BValue;
    v19 = *(Scaleform::GFx::Value::ObjectInterface **)&val.Type;
  }
  if ( (v20 & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v19, (Scaleform::GFx::Value *)&val.8, (void *)val.DataAux);
  *(__m128i *)&val.pNext = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v21 = 0i64;
  *(_QWORD *)&val.Type = 0i64;
  v22 = 3;
  val.mValue.IValue = 3;
  LODWORD(val.DataAux) = 32;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    Scaleform::GFx::Movie::SetVariable(
      this->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
      "_root.testParam",
      (const Scaleform::GFx::Value *)&val.8,
      SV_Sticky);
    v22 = val.mValue.BValue;
    v21 = *(Scaleform::GFx::Value::ObjectInterface **)&val.Type;
  }
  if ( (v22 & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v21, (Scaleform::GFx::Value *)&val.8, (void *)val.DataAux);
  extension::GFXIMovie::getASVariable(&this->m_GFXMovie, &resulta, v7);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  LODWORD(v27.pPrev) = 1;
  *(__m128i *)&v27.pNext = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  *(_QWORD *)&v27.Type = 0i64;
  v27.mValue.IValue = 0;
  v29.Scaleform::ListNode<Scaleform::GFx::Value> = *(Scaleform::ListNode<Scaleform::GFx::Value> *)&v27.pNext;
  v29.pObjectInterface = 0i64;
  v29.Type = VT_None;
  ASArray = extension::GFXIMovie::createASArray(&this->m_GFXMovie, (Scaleform::GFx::Value *)&val.8);
  if ( result != ASArray )
    Scaleform::GFx::Value::operator=(result, ASArray);
  if ( (val.mValue.BValue & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      *(Scaleform::GFx::Value::ObjectInterface **)&val.Type,
      (Scaleform::GFx::Value *)&val.8,
      (void *)val.DataAux);
  for ( i = 0; i < 10; ++i )
  {
    if ( (v27.mValue.BValue & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
        *(Scaleform::GFx::Value::ObjectInterface **)&v27.Type,
        (Scaleform::GFx::Value *)&v27.8,
        (void *)v27.DataAux);
      *(_QWORD *)&v27.Type = 0i64;
    }
    v27.mValue.IValue = 3;
    LODWORD(v27.DataAux) = i;
    Scaleform::GFx::Value::ObjectInterface::SetElement(
      result->pObjectInterface,
      result->mValue.pStringManaged,
      i,
      (const Scaleform::GFx::Value *)&v27.8);
  }
  if ( (v29.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v29.pObjectInterface, &v29, v29.mValue.pStringManaged);
    v29.pObjectInterface = 0i64;
  }
  v29.Type = VT_None;
  if ( (v27.mValue.BValue & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      *(Scaleform::GFx::Value::ObjectInterface **)&v27.Type,
      (Scaleform::GFx::Value *)&v27.8,
      (void *)v27.DataAux);
    *(_QWORD *)&v27.Type = 0i64;
  }
  v27.mValue.IValue = 0;
  if ( (resulta.Type & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      resulta.pObjectInterface,
      &resulta,
      resulta.mValue.pStringManaged);
  return result;
}

void __fastcall GfxManager::GFv_AddController(
        GfxManager *this,
        USER_ID userCont,
        int userPos,
        const char *useName,
        int userColor)
{
  __int64 v6; // rsi
  GameDataInfo *v8; // rcx
  const char *v9; // rax
  const char *v10; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value presult; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h]
  Scaleform::GFx::Value ptr; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::GFx::Value val; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::GFx::Value v16; // [rsp+D0h] [rbp-30h] BYREF

  v13 = -2i64;
  v6 = userCont;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v8);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0x64ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  presult.pObjectInterface = 0i64;
  presult.Type = VT_None;
  if ( (ptr.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
    ptr.pObjectInterface = 0i64;
  }
  ptr.Type = 6;
  ptr.mValue.pString = &pnewText;
  if ( userColor )
  {
    switch ( userColor )
    {
      case 1:
        if ( (val.Type & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
          val.pObjectInterface = 0i64;
        }
        v9 = "red";
        break;
      case 2:
        if ( (val.Type & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
          val.pObjectInterface = 0i64;
        }
        v9 = "green";
        break;
      case 3:
        if ( (val.Type & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
          val.pObjectInterface = 0i64;
        }
        v9 = "purple";
        break;
      default:
        if ( (val.Type & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
          val.pObjectInterface = 0i64;
        }
        v9 = "error";
        break;
    }
  }
  else
  {
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    v9 = "blue";
  }
  val.Type = 6;
  val.mValue.pString = v9;
  if ( userPos == 1 )
  {
    if ( (v16.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v16.pObjectInterface, &v16, v16.mValue.pStringManaged);
      v16.pObjectInterface = 0i64;
    }
    v10 = "L";
  }
  else if ( userPos == 2 )
  {
    if ( (v16.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v16.pObjectInterface, &v16, v16.mValue.pStringManaged);
      v16.pObjectInterface = 0i64;
    }
    v10 = "R";
  }
  else
  {
    if ( (v16.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v16.pObjectInterface, &v16, v16.mValue.pStringManaged);
      v16.pObjectInterface = 0i64;
    }
    v10 = "C";
  }
  v16.Type = 6;
  v16.mValue.pString = v10;
  m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
  if ( Scaleform::GFx::Movie::IsAvailable(
         this->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
         "_root.controller_select.AddController") )
  {
    Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.controller_select.AddController", &presult, &ptr, 3u);
  }
  this->m_ControlerLive[v6] = 1;
  if ( (presult.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      presult.pObjectInterface,
      &presult,
      presult.mValue.pStringManaged);
    presult.pObjectInterface = 0i64;
  }
  presult.Type = VT_None;
  `eh vector destructor iterator'(&ptr, 0x30ui64, 0x64ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::GFv_AddNotification(
        GfxManager *this,
        const char *string,
        GfxManager::NOTIFICATION_ICON icon)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value val; // [rsp+40h] [rbp-68h] BYREF
  Scaleform::GFx::Value v8; // [rsp+70h] [rbp-38h] BYREF

  `eh vector constructor iterator'(
    &val,
    0x30ui64,
    2ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  if ( this->m_GFXMovieNotification.m_movieProxy.m_ptr )
  {
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = 6;
    val.mValue.pString = string;
    if ( (v8.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v8.pObjectInterface, &v8, v8.mValue.pStringManaged);
      v8.pObjectInterface = 0i64;
    }
    v8.Type = VT_Float;
    v8.mValue.IValue = icon;
    m_ptr = this->m_GFXMovieNotification.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.AddNotification") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.AddNotification", 0i64, &val, 2u);
  }
  `eh vector destructor iterator'(&val, 0x30ui64, 2ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::GFv_AddNotificationGallery(GfxManager *this, GALLERY_TYPE type, int category, int no)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value ptr; // [rsp+48h] [rbp-59h] BYREF
  Scaleform::GFx::Value val; // [rsp+78h] [rbp-29h] BYREF
  Scaleform::GFx::Value v11; // [rsp+A8h] [rbp+7h] BYREF

  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    3ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  if ( this->m_GFXMovieNotification.m_movieProxy.m_ptr )
  {
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = type;
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = category;
    if ( (v11.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v11.pObjectInterface, &v11, v11.mValue.pStringManaged);
      v11.pObjectInterface = 0i64;
    }
    v11.Type = VT_Float;
    v11.mValue.IValue = no;
    m_ptr = this->m_GFXMovieNotification.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.AddNotificationGallery") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.AddNotificationGallery", 0i64, &ptr, 3u);
  }
  `eh vector destructor iterator'(&ptr, 0x30ui64, 3ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::GFv_AllDeleteNotification(GfxManager *this)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx

  m_ptr = this->m_GFXMovieNotification.m_movieProxy.m_ptr;
  if ( m_ptr )
  {
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.AllDeleteNotification") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.AllDeleteNotification", 0i64, 0i64, 0);
  }
}

void __fastcall GfxManager::GFv_CallScreeMenuSetPhrase(GfxManager *this)
{
  BattleSystem::PauseController *Instance; // rax
  GameDataInfo *v3; // rcx
  AppMain *v4; // rcx
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  GfxManager *v6; // rax
  UserGameOperation *v7; // rax
  extension::GFXIMovieStack *v8; // rax
  GfxManager *v9; // rax
  Scaleform::GFx::Value presult; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+70h] [rbp-98h]
  Scaleform::GFx::Value ptr; // [rsp+78h] [rbp-90h] BYREF
  Scaleform::GFx::Value val; // [rsp+A8h] [rbp-60h] BYREF

  v11 = -2i64;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    `eh vector constructor iterator'(
      &ptr,
      0x30ui64,
      0xAui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
    *(__m128i *)&presult.pNext = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    *(_QWORD *)&presult.Type = 0i64;
    presult.mValue.IValue = 0;
    Instance = BattleSystem::PauseController::GetInstance();
    Instance->m_Pause = 1;
    Instance->m_InputContorollerID = CONTROLLER_ID_1P;
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
    v4 = (AppMain *)(unsigned int)`GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
    if ( (unsigned int)((_DWORD)v4 - 4) <= 2 || (_DWORD)v4 == 11 )
      AppMain::Sound_Volume_SE_Modulation(v4, 0.30000001, 0.25);
    else
      AppMain::Sound_PauseBattleSE(v4, 1);
    anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_BGM, 0.30000001, 0.25);
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = 28;
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = 0;
    m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.callScreenMenuInit") )
      Scaleform::GFx::Movie::Invoke(
        m_ptr->m_movie.pObject,
        "_root.callScreenMenuInit",
        (Scaleform::GFx::Value *)&presult.8,
        &ptr,
        2u);
    v6 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      presult.pPrev = (Scaleform::GFx::Value *)operator new(0x108ui64);
      GfxManager::GfxManager((GfxManager *)presult.pPrev);
      GfxManager::instance = v6;
    }
    v6->m_bQuitGFXMovie = 0;
    v7 = UserGameOperation::Instance();
    UserGameOperation::clear(v7);
    v8 = extension::GFXIMovieStack::Instance();
    extension::GFXIMovieStack::advance(v8, 0.0);
    v9 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      presult.pPrev = (Scaleform::GFx::Value *)operator new(0x108ui64);
      GfxManager::GfxManager((GfxManager *)presult.pPrev);
      GfxManager::instance = v9;
    }
    if ( v9->m_GFXMovie.m_movieProxy.m_ptr )
    {
      v9->m_GFXMovie.m_movieProxy.m_ptr->m_bAdvance = 0;
      if ( v9->m_GFXMovie.m_movieProxy.m_ptr )
        v9->m_GFXMovie.m_movieProxy.m_ptr->m_bRender = 0;
    }
    if ( !v9 )
    {
      presult.pPrev = (Scaleform::GFx::Value *)operator new(0x108ui64);
      GfxManager::GfxManager((GfxManager *)presult.pPrev);
      GfxManager::instance = v9;
    }
    if ( v9->m_GFXMovie.m_movieProxy.m_ptr )
    {
      v9->m_GFXMovie.m_movieProxy.m_ptr->m_bAdvance = 1;
      if ( v9->m_GFXMovie.m_movieProxy.m_ptr )
        v9->m_GFXMovie.m_movieProxy.m_ptr->m_bRender = 1;
    }
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
  }
}

void __fastcall GfxManager::GFv_CallScreenMenu(GfxManager *this, GfxManager::MENU_TYPE_ID menuID, PLAYER_ID contID)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value v7; // [rsp+38h] [rbp-59h]
  Scaleform::GFx::Value ptr; // [rsp+68h] [rbp-29h] BYREF
  Scaleform::GFx::Value val; // [rsp+98h] [rbp+7h] BYREF
  __int64 v10; // [rsp+C8h] [rbp+37h]

  v10 = -2i64;
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    2ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  v7.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v7.pObjectInterface = 0i64;
  v7.Type = VT_None;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = menuID;
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = contID;
    m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(this->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject, "_root.CallScreeMenu") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.CallScreeMenu", 0i64, &ptr, 2u);
  }
  v7.Type = VT_None;
  `eh vector destructor iterator'(&ptr, 0x30ui64, 2ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::GFv_CancelOrder(GfxManager *this, PLAYER_ID playerID, int pos)
{
  GameDataInfo *v6; // rcx
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value presult; // [rsp+30h] [rbp-248h] BYREF
  __int64 v9; // [rsp+60h] [rbp-218h]
  Scaleform::GFx::Value ptr; // [rsp+70h] [rbp-208h] BYREF
  Scaleform::GFx::Value v11; // [rsp+A0h] [rbp-1D8h] BYREF

  v9 = -2i64;
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
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0xAui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  presult.pObjectInterface = 0i64;
  presult.Type = VT_None;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = playerID;
    if ( (v11.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v11.pObjectInterface, &v11, v11.mValue.pStringManaged);
      v11.pObjectInterface = 0i64;
    }
    v11.Type = VT_Float;
    v11.mValue.IValue = pos;
    m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(
           this->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
           "_root.GFv_CancelOrder") )
    {
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.GFv_CancelOrder", &presult, &ptr, 2u);
    }
  }
  if ( (presult.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      presult.pObjectInterface,
      &presult,
      presult.mValue.pStringManaged);
    presult.pObjectInterface = 0i64;
  }
  presult.Type = VT_None;
  `eh vector destructor iterator'(&ptr, 0x30ui64, 0xAui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::GFv_CloseSystemMessage(GfxManager *this)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx

  m_ptr = this->m_GFXMovieSystem.m_movieProxy.m_ptr;
  if ( m_ptr )
  {
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.CloseSystemMessage") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.CloseSystemMessage", 0i64, 0i64, 0);
  }
}

void __fastcall GfxManager::GFv_ComboMission_InitMissionCommand(GfxManager *this)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx

  m_ptr = this->m_GFXMovieTutorial.m_movieProxy.m_ptr;
  if ( m_ptr )
  {
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.initMissionCommand") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.initMissionCommand", 0i64, 0i64, 0);
  }
}

void __fastcall GfxManager::GFv_ComboMission_SetMissionCommand(GfxManager *this)
{
  BattleSystem::BattleController *v2; // rbx
  BattleSystem::BattleController *v3; // rax
  int *p_iTermCount; // rcx
  int v5; // edi
  int v6; // er11
  __int64 i; // r10
  const ComboMissionData::MissionData *pMissionData; // rcx
  char **pCommandStr; // rdx
  const char *v10; // r9
  char *v11; // rdx
  char *v12; // rcx
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value ptr; // [rsp+40h] [rbp-78h] BYREF
  Scaleform::GFx::Value val; // [rsp+70h] [rbp-48h] BYREF
  BattleSystem::BattleController *v16; // [rsp+C0h] [rbp+8h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v16 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v16);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  p_iTermCount = &v2->comboMission.pMissionData->settingData.iTermCount;
  if ( p_iTermCount )
    v5 = *p_iTermCount;
  else
    v5 = 0;
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    2ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  stringBuff[0] = 0;
  v6 = 0;
  for ( i = 0i64; i < v5; ++i )
  {
    pMissionData = v2->comboMission.pMissionData;
    if ( pMissionData )
    {
      if ( i >= 0 && v6 < pMissionData->settingData.iTermCount )
      {
        pCommandStr = pMissionData->pCommandStr;
        if ( pCommandStr )
        {
          v10 = pCommandStr[i];
          if ( v10 )
          {
            v11 = &stringBuff[-1];
            do
              ++v11;
            while ( *v11 );
            strcpy(v11, v10);
            if ( v6 != v5 - 1 )
            {
              v12 = &stringBuff[-1];
              do
                ++v12;
              while ( *v12 );
              strcpy(v12, "\n");
            }
          }
        }
      }
    }
    ++v6;
  }
  if ( this->m_GFXMovieTutorial.m_movieProxy.m_ptr )
  {
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = 6;
    ptr.mValue.pString = stringBuff;
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = v5;
    m_ptr = this->m_GFXMovieTutorial.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.SetMissionCommand") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.SetMissionCommand", 0i64, &ptr, 2u);
  }
  `eh vector destructor iterator'(&ptr, 0x30ui64, 2ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::GFv_DecideOrder(GfxManager *this, PLAYER_ID playerID, int pos)
{
  GameDataInfo *v6; // rcx
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value presult; // [rsp+30h] [rbp-248h] BYREF
  __int64 v9; // [rsp+60h] [rbp-218h]
  Scaleform::GFx::Value ptr; // [rsp+70h] [rbp-208h] BYREF
  Scaleform::GFx::Value v11; // [rsp+A0h] [rbp-1D8h] BYREF

  v9 = -2i64;
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
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0xAui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  presult.pObjectInterface = 0i64;
  presult.Type = VT_None;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = playerID;
    if ( (v11.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v11.pObjectInterface, &v11, v11.mValue.pStringManaged);
      v11.pObjectInterface = 0i64;
    }
    v11.Type = VT_Float;
    v11.mValue.IValue = pos;
    m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(
           this->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
           "_root.GFv_DecideOrder") )
    {
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.GFv_DecideOrder", &presult, &ptr, 2u);
    }
  }
  if ( (presult.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      presult.pObjectInterface,
      &presult,
      presult.mValue.pStringManaged);
    presult.pObjectInterface = 0i64;
  }
  presult.Type = VT_None;
  `eh vector destructor iterator'(&ptr, 0x30ui64, 0xAui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::GFv_ExitScreenMenu(GfxManager *this)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx

  m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.exitScreenMenu") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.exitScreenMenu", 0i64, 0i64, 0);
  }
}

void __fastcall GfxManager::GFv_HideScreenMenu(GfxManager *this)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx

  m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.setScreenMenuVisible") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.setScreenMenuVisible", 0i64, 0i64, 0);
  }
}

_BOOL8 __fastcall GfxManager::GFv_IsHasNotification(GfxManager *this)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  bool v2; // bl
  Scaleform::GFx::Value presult; // [rsp+38h] [rbp-40h] BYREF

  presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  presult.pObjectInterface = 0i64;
  presult.Type = VT_None;
  m_ptr = this->m_GFXMovieNotification.m_movieProxy.m_ptr;
  v2 = m_ptr
    && Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.IsHasNotification")
    && Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.IsHasNotification", &presult, 0i64, 0)
    && presult.mValue.BValue;
  if ( (presult.Type & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      presult.pObjectInterface,
      &presult,
      presult.mValue.pStringManaged);
  return v2;
}

_BOOL8 __fastcall GfxManager::GFv_IsItemDisplay(GfxManager *this)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  bool v2; // bl
  Scaleform::GFx::Value presult; // [rsp+38h] [rbp-40h] BYREF

  presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  presult.pObjectInterface = 0i64;
  presult.Type = VT_None;
  m_ptr = this->m_GFXMovieNotification.m_movieProxy.m_ptr;
  v2 = m_ptr
    && Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.IsItemDisplay")
    && Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.IsItemDisplay", &presult, 0i64, 0)
    && presult.mValue.BValue;
  if ( (presult.Type & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      presult.pObjectInterface,
      &presult,
      presult.mValue.pStringManaged);
  return v2;
}

_BOOL8 __fastcall GfxManager::GFv_IsOpenScreenMenu(GfxManager *this)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  bool v2; // bl
  Scaleform::GFx::Value presult; // [rsp+38h] [rbp-40h] BYREF

  presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  presult.pObjectInterface = 0i64;
  presult.Type = VT_None;
  m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
  v2 = this->m_GFXMovie.m_movieProxy.m_ptr
    && Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.IsOpenScreenMenu")
    && Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.IsOpenScreenMenu", &presult, 0i64, 0)
    && presult.mValue.BValue;
  if ( (presult.Type & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      presult.pObjectInterface,
      &presult,
      presult.mValue.pStringManaged);
  return v2;
}

void __fastcall GfxManager::GFv_OnlineUserDecide(
        GfxManager *this,
        PLAYER_ID playerID,
        int index,
        CHARACTER_NO charaNo,
        int colorID,
        unsigned __int8 fix,
        const char *userName,
        RANKMATCH_DISCONNECT_MARKER marker)
{
  GameDataInfo *v12; // rcx
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value presult; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-A0h]
  Scaleform::GFx::Value ptr; // [rsp+78h] [rbp-90h] BYREF
  Scaleform::GFx::Value val; // [rsp+A8h] [rbp-60h] BYREF
  Scaleform::GFx::Value v18; // [rsp+D8h] [rbp-30h] BYREF
  Scaleform::GFx::Value v19; // [rsp+108h] [rbp+0h] BYREF
  Scaleform::GFx::Value v20; // [rsp+138h] [rbp+30h] BYREF
  Scaleform::GFx::Value v21; // [rsp+168h] [rbp+60h] BYREF
  Scaleform::GFx::Value v22; // [rsp+198h] [rbp+90h] BYREF

  v15 = -2i64;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v12);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0xAui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  *(__m128i *)&presult.pNext = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  *(_QWORD *)&presult.Type = 0i64;
  presult.mValue.IValue = 0;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = playerID;
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = index;
    if ( (v18.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v18.pObjectInterface, &v18, v18.mValue.pStringManaged);
      v18.pObjectInterface = 0i64;
    }
    v18.Type = VT_Float;
    v18.mValue.IValue = charaNo;
    if ( (v19.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v19.pObjectInterface, &v19, v19.mValue.pStringManaged);
      v19.pObjectInterface = 0i64;
    }
    v19.Type = VT_Float;
    v19.mValue.IValue = colorID;
    if ( (v20.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v20.pObjectInterface, &v20, v20.mValue.pStringManaged);
      v20.pObjectInterface = 0i64;
    }
    v20.Type = VT_Int64;
    v20.mValue.BValue = fix != 0;
    if ( (v21.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v21.pObjectInterface, &v21, v21.mValue.pStringManaged);
      v21.pObjectInterface = 0i64;
    }
    v21.Type = 6;
    v21.mValue.pString = userName;
    if ( (v22.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v22.pObjectInterface, &v22, v22.mValue.pStringManaged);
      v22.pObjectInterface = 0i64;
    }
    v22.Type = VT_Float;
    v22.mValue.IValue = marker;
    m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(
           this->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
           "_root.GFv_OnlineUserDecide") )
    {
      Scaleform::GFx::Movie::Invoke(
        m_ptr->m_movie.pObject,
        "_root.GFv_OnlineUserDecide",
        (Scaleform::GFx::Value *)&presult.8,
        &ptr,
        7u);
    }
  }
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
}

void __fastcall GfxManager::GFv_RemoveTelop(GfxManager *this, bool fadeOut)
{
  GameDataInfo *v3; // rcx
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value presult; // [rsp+30h] [rbp-238h] BYREF
  __int64 v6; // [rsp+60h] [rbp-208h]
  Scaleform::GFx::Value ptr[10]; // [rsp+70h] [rbp-1F8h] BYREF

  v6 = -2i64;
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
  `eh vector constructor iterator'(
    ptr,
    0x30ui64,
    0xAui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  presult.pObjectInterface = 0i64;
  presult.Type = VT_None;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    if ( (ptr[0].Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr[0].pObjectInterface, ptr, ptr[0].mValue.pStringManaged);
      ptr[0].pObjectInterface = 0i64;
    }
    ptr[0].Type = VT_Int64;
    ptr[0].mValue.BValue = 0;
    m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.RemoveTelop") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.RemoveTelop", &presult, ptr, 1u);
  }
  if ( (presult.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      presult.pObjectInterface,
      &presult,
      presult.mValue.pStringManaged);
    presult.pObjectInterface = 0i64;
  }
  presult.Type = VT_None;
  `eh vector destructor iterator'(ptr, 0x30ui64, 0xAui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::GFv_SetImage(GfxManager *this, int image)
{
  GameDataInfo *v4; // rcx
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value presult; // [rsp+30h] [rbp-238h] BYREF
  __int64 v7; // [rsp+60h] [rbp-208h]
  Scaleform::GFx::Value ptr[10]; // [rsp+70h] [rbp-1F8h] BYREF

  v7 = -2i64;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v4);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `eh vector constructor iterator'(
    ptr,
    0x30ui64,
    0xAui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  presult.pObjectInterface = 0i64;
  presult.Type = VT_None;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    if ( (ptr[0].Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr[0].pObjectInterface, ptr, ptr[0].mValue.pStringManaged);
      ptr[0].pObjectInterface = 0i64;
    }
    ptr[0].Type = VT_Float;
    ptr[0].mValue.IValue = image;
    m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
    if ( (unsigned __int8)Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.SetImage") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.SetImage", &presult, ptr, 1u);
  }
  if ( (presult.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      presult.pObjectInterface,
      &presult,
      presult.mValue.pStringManaged);
    presult.pObjectInterface = 0i64;
  }
  presult.Type = VT_None;
  `eh vector destructor iterator'(ptr, 0x30ui64, 0xAui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::GFv_SetResult(GfxManager *this)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx

  m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.SetResult") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.SetResult", 0i64, 0i64, 0);
  }
}

void __fastcall GfxManager::GFv_SetSetTransitionMenu(GfxManager *this, PLAYER_ID playerID)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value val; // [rsp+30h] [rbp-238h]
  __int64 v6; // [rsp+60h] [rbp-208h]
  Scaleform::GFx::Value ptr[10]; // [rsp+70h] [rbp-1F8h] BYREF

  v6 = -2i64;
  `eh vector constructor iterator'(
    ptr,
    0x30ui64,
    0xAui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  val.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  val.pObjectInterface = 0i64;
  val.Type = VT_None;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    if ( (ptr[0].Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr[0].pObjectInterface, ptr, ptr[0].mValue.pStringManaged);
      ptr[0].pObjectInterface = 0i64;
    }
    ptr[0].Type = VT_Float;
    ptr[0].mValue.IValue = playerID;
    m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.SetTransitionMenu") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.SetTransitionMenu", 0i64, ptr, 1u);
  }
  val.Type = VT_None;
  `eh vector destructor iterator'(ptr, 0x30ui64, 0xAui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::GFv_SetSystemMessage(
        GfxManager *this,
        const char *message,
        GfxManager::SYSTEM_MESSAGE_TYPE type,
        int cursor,
        bool lock,
        const char *title,
        const char *title_name,
        const char *size)
{
  Scaleform::GFx::Viewport *p_m_defaultMovieViewport; // rdx
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  extension::gfxi_detail::MovieProxy *v14; // rbx
  Scaleform::GFx::Value ptr; // [rsp+48h] [rbp-C0h] BYREF
  Scaleform::GFx::Value val; // [rsp+78h] [rbp-90h] BYREF
  Scaleform::GFx::Value v17; // [rsp+A8h] [rbp-60h] BYREF
  Scaleform::GFx::Value v18; // [rsp+D8h] [rbp-30h] BYREF
  Scaleform::GFx::Value v19; // [rsp+108h] [rbp+0h] BYREF
  Scaleform::GFx::Value v20; // [rsp+138h] [rbp+30h] BYREF

  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0xAui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  if ( this->m_GFXMovieSystem.m_movieProxy.m_ptr )
  {
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = 6;
    ptr.mValue.pString = message;
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = type;
    if ( (v17.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v17.pObjectInterface, &v17, v17.mValue.pStringManaged);
      v17.pObjectInterface = 0i64;
    }
    v17.Type = VT_Float;
    v17.mValue.IValue = cursor;
    if ( (v18.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v18.pObjectInterface, &v18, v18.mValue.pStringManaged);
      v18.pObjectInterface = 0i64;
    }
    v18.Type = 6;
    v18.mValue.pString = title;
    if ( (v19.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v19.pObjectInterface, &v19, v19.mValue.pStringManaged);
      v19.pObjectInterface = 0i64;
    }
    v19.Type = 6;
    v19.mValue.pString = title_name;
    if ( (v20.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v20.pObjectInterface, &v20, v20.mValue.pStringManaged);
      v20.pObjectInterface = 0i64;
    }
    v20.Type = 6;
    v20.mValue.pString = size;
    this->m_SystemMessageState = SYSTEM_MESSAGE_OPEN;
    this->m_SystemMessageCursor = cursor;
    this->m_pCallBackEventFunc = 0i64;
    this->m_SystemMessageLock = lock;
    p_m_defaultMovieViewport = &extension::GFXIRenderer::Instance()->m_defaultMovieViewport;
    m_ptr = this->m_GFXMovieSystem.m_movieProxy.m_ptr;
    if ( m_ptr )
      m_ptr->m_movie.pObject->SetViewport(m_ptr->m_movie.pObject, p_m_defaultMovieViewport);
    v14 = this->m_GFXMovieSystem.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(v14->m_movie.pObject, "_root.SetSystemMessage") )
      Scaleform::GFx::Movie::Invoke(v14->m_movie.pObject, "_root.SetSystemMessage", 0i64, &ptr, 6u);
  }
  `eh vector destructor iterator'(&ptr, 0x30ui64, 0xAui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::GFv_SetTelop(GfxManager *this, const char *telop)
{
  GameDataInfo *v4; // rcx
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value presult; // [rsp+30h] [rbp-238h] BYREF
  __int64 v7; // [rsp+60h] [rbp-208h]
  Scaleform::GFx::Value ptr[10]; // [rsp+70h] [rbp-1F8h] BYREF

  v7 = -2i64;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v4);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `eh vector constructor iterator'(
    ptr,
    0x30ui64,
    0xAui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  presult.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  presult.pObjectInterface = 0i64;
  presult.Type = VT_None;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    if ( (ptr[0].Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr[0].pObjectInterface, ptr, ptr[0].mValue.pStringManaged);
      ptr[0].pObjectInterface = 0i64;
    }
    ptr[0].Type = 6;
    ptr[0].mValue.pString = telop;
    m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.SetTelop") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.SetTelop", &presult, ptr, 1u);
  }
  if ( (presult.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      presult.pObjectInterface,
      &presult,
      presult.mValue.pStringManaged);
    presult.pObjectInterface = 0i64;
  }
  presult.Type = VT_None;
  `eh vector destructor iterator'(ptr, 0x30ui64, 0xAui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::GFv_Tutorial_SetMessage(GfxManager *this, TUTORIAL_ID tutorialID, bool clear, int unique)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value ptr; // [rsp+40h] [rbp-208h] BYREF
  Scaleform::GFx::Value val; // [rsp+70h] [rbp-1D8h] BYREF
  Scaleform::GFx::Value v11; // [rsp+A0h] [rbp-1A8h] BYREF

  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0xAui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  if ( this->m_GFXMovieTutorial.m_movieProxy.m_ptr )
  {
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = tutorialID;
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Int64;
    val.mValue.BValue = clear;
    if ( (v11.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v11.pObjectInterface, &v11, v11.mValue.pStringManaged);
      v11.pObjectInterface = 0i64;
    }
    v11.Type = VT_Float;
    v11.mValue.IValue = unique;
    m_ptr = this->m_GFXMovieTutorial.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.SetMessage") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.SetMessage", 0i64, &ptr, 3u);
  }
  `eh vector destructor iterator'(&ptr, 0x30ui64, 0xAui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::GFv_Tutorial_SetSubject(GfxManager *this, int pageNo)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value ptr[2]; // [rsp+40h] [rbp-68h] BYREF

  `eh vector constructor iterator'(
    ptr,
    0x30ui64,
    2ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  if ( this->m_GFXMovieTutorial.m_movieProxy.m_ptr )
  {
    if ( (ptr[0].Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr[0].pObjectInterface, ptr, ptr[0].mValue.pStringManaged);
      ptr[0].pObjectInterface = 0i64;
    }
    ptr[0].Type = VT_Float;
    ptr[0].mValue.IValue = 0;
    m_ptr = this->m_GFXMovieTutorial.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.SetSubject") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.SetSubject", 0i64, ptr, 1u);
  }
  `eh vector destructor iterator'(ptr, 0x30ui64, 2ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::GFv_UpdateTransitionMenu(GfxManager *this, PLAYER_ID playerID, int item, bool decide)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value val; // [rsp+30h] [rbp-248h]
  __int64 v9; // [rsp+60h] [rbp-218h]
  Scaleform::GFx::Value ptr; // [rsp+70h] [rbp-208h] BYREF
  Scaleform::GFx::Value v11; // [rsp+A0h] [rbp-1D8h] BYREF
  Scaleform::GFx::Value v12; // [rsp+D0h] [rbp-1A8h] BYREF

  v9 = -2i64;
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0xAui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  val.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  val.pObjectInterface = 0i64;
  val.Type = VT_None;
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = playerID;
    if ( (v11.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v11.pObjectInterface, &v11, v11.mValue.pStringManaged);
      v11.pObjectInterface = 0i64;
    }
    v11.Type = VT_Float;
    v11.mValue.IValue = item;
    if ( (v12.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v12.pObjectInterface, &v12, v12.mValue.pStringManaged);
      v12.pObjectInterface = 0i64;
    }
    v12.Type = VT_Int64;
    v12.mValue.BValue = 1;
    m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(
           this->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
           "_root.GFv_UpdateTransitionMenu") )
    {
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.GFv_UpdateTransitionMenu", 0i64, &ptr, 3u);
    }
  }
  val.Type = VT_None;
  `eh vector destructor iterator'(&ptr, 0x30ui64, 0xAui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::GFv_onNetworkError(GfxManager *this, NETWORK_ERROR_TYPE type)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  Scaleform::GFx::Value ptr[3]; // [rsp+40h] [rbp-A8h] BYREF

  `eh vector constructor iterator'(
    ptr,
    0x30ui64,
    3ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  if ( this->m_GFXMovie.m_movieProxy.m_ptr )
  {
    if ( (ptr[0].Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr[0].pObjectInterface, ptr, ptr[0].mValue.pStringManaged);
      ptr[0].pObjectInterface = 0i64;
    }
    ptr[0].Type = VT_Float;
    ptr[0].mValue.IValue = type;
    m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.onNetworkError") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.onNetworkError", 0i64, ptr, 1u);
  }
  `eh vector destructor iterator'(ptr, 0x30ui64, 3ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
}

void __fastcall GfxManager::LoadRequest(
        GfxManager *this,
        GfxManager::GFX_FILE_INDEX fileIndex,
        void (__fastcall *pCompleteFunc)(),
        int priority)
{
  __int64 v5; // rbx
  const char *v7; // rdx
  unsigned __int64 v8; // r8
  extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache *v9; // rcx
  const void *v10; // r9
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *m_ptr; // r8
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v12; // rdx
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v13; // rcx
  char *Ptr; // rcx
  char *v15; // rax
  extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> v16; // [rsp+28h] [rbp-80h] BYREF
  std::string v17; // [rsp+30h] [rbp-78h] BYREF
  __int64 v18; // [rsp+50h] [rbp-58h]
  std::string _Right; // [rsp+60h] [rbp-48h] BYREF

  v18 = -2i64;
  v5 = fileIndex;
  extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(&this->m_FutureGFXMovie);
  v7 = GfxFileTable[0][v5];
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *v7 )
  {
    v8 = -1i64;
    do
      ++v8;
    while ( v7[v8] );
  }
  else
  {
    v8 = 0i64;
  }
  std::string::assign(&_Right, v7, v8);
  v17._Mypair._Myval2._Myres = 15i64;
  v17._Mypair._Myval2._Mysize = 0i64;
  v17._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v17, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::getCachedOrLoadStart(v9, &v16, &v17, v10);
  this->m_FutureGFXMovie.m_isNoCache = 0;
  m_ptr = v16.m_ptr;
  v12 = v16.m_ptr;
  if ( v16.m_ptr )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v16.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
    m_ptr = v16.m_ptr;
  }
  v13 = this->m_FutureGFXMovie.m_body.m_ptr;
  this->m_FutureGFXMovie.m_body.m_ptr = v12;
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v13->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))v13->~RefCountableWeakSupportBase)(
        v13,
        1i64);
    m_ptr = v16.m_ptr;
  }
  if ( m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
      m_ptr,
      1i64);
  }
  if ( _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v15 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v15 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  this->m_pCompleteFunc = pCompleteFunc;
  this->m_Priority = 500;
  this->m_bQuitGFXMovie = 0;
  this->m_ReleaseFlag = 0;
}

void __fastcall GfxManager::LoadRequestBG(GfxManager *this)
{
  extension::BasicFutureObject<extension::GFXIMovieData,void> *p_m_FutureGFXMovieBG; // rdi
  unsigned __int64 v2; // r8
  extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache *v3; // rcx
  const void *v4; // r9
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *m_ptr; // r8
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v6; // rdx
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v7; // rcx
  char *Ptr; // rcx
  char *v9; // rax
  extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> v10; // [rsp+28h] [rbp-70h] BYREF
  std::string v11; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+50h] [rbp-48h]
  std::string _Right; // [rsp+60h] [rbp-38h] BYREF

  v12 = -2i64;
  if ( !this->m_GFXMovieBG.m_movieProxy.m_ptr )
  {
    p_m_FutureGFXMovieBG = &this->m_FutureGFXMovieBG;
    extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(&this->m_FutureGFXMovieBG);
    _Right._Mypair._Myval2._Myres = 15i64;
    _Right._Mypair._Myval2._Mysize = 0i64;
    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( *GfxFileTable[0][39] )
    {
      v2 = -1i64;
      do
        ++v2;
      while ( GfxFileTable[0][39][v2] );
    }
    else
    {
      v2 = 0i64;
    }
    std::string::assign(&_Right, GfxFileTable[0][39], v2);
    v11._Mypair._Myval2._Myres = 15i64;
    v11._Mypair._Myval2._Mysize = 0i64;
    v11._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v11, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::getCachedOrLoadStart(v3, &v10, &v11, v4);
    p_m_FutureGFXMovieBG->m_isNoCache = 0;
    m_ptr = v10.m_ptr;
    v6 = v10.m_ptr;
    if ( v10.m_ptr )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v10.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
      m_ptr = v10.m_ptr;
    }
    v7 = p_m_FutureGFXMovieBG->m_body.m_ptr;
    p_m_FutureGFXMovieBG->m_body.m_ptr = v6;
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&v7->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
        ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))v7->~RefCountableWeakSupportBase)(
          v7,
          1i64);
      m_ptr = v10.m_ptr;
    }
    if ( m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
    }
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
    {
      Ptr = _Right._Mypair._Myval2._Bx._Ptr;
      if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v9 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        if ( v9 >= _Right._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(Ptr);
    }
  }
}

void __fastcall GfxManager::LoadRequestMissionTrial(GfxManager *this)
{
  extension::BasicFutureObject<extension::GFXIMovieData,void> *p_m_FutureGFXMovieTutorial; // rdi
  unsigned __int64 v2; // r8
  extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache *v3; // rcx
  const void *v4; // r9
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *m_ptr; // r8
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v6; // rdx
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v7; // rcx
  char *Ptr; // rcx
  char *v9; // rax
  extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> v10; // [rsp+28h] [rbp-70h] BYREF
  std::string v11; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+50h] [rbp-48h]
  std::string _Right; // [rsp+60h] [rbp-38h] BYREF

  v12 = -2i64;
  p_m_FutureGFXMovieTutorial = &this->m_FutureGFXMovieTutorial;
  extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(&this->m_FutureGFXMovieTutorial);
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *GfxFileTable[0][19] )
  {
    v2 = -1i64;
    do
      ++v2;
    while ( GfxFileTable[0][19][v2] );
  }
  else
  {
    v2 = 0i64;
  }
  std::string::assign(&_Right, GfxFileTable[0][19], v2);
  v11._Mypair._Myval2._Myres = 15i64;
  v11._Mypair._Myval2._Mysize = 0i64;
  v11._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v11, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::getCachedOrLoadStart(v3, &v10, &v11, v4);
  p_m_FutureGFXMovieTutorial->m_isNoCache = 0;
  m_ptr = v10.m_ptr;
  v6 = v10.m_ptr;
  if ( v10.m_ptr )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v10.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
    m_ptr = v10.m_ptr;
  }
  v7 = p_m_FutureGFXMovieTutorial->m_body.m_ptr;
  p_m_FutureGFXMovieTutorial->m_body.m_ptr = v6;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v7->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))v7->~RefCountableWeakSupportBase)(
        v7,
        1i64);
    m_ptr = v10.m_ptr;
  }
  if ( m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
      m_ptr,
      1i64);
  }
  if ( _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v9 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v9 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
}

void __fastcall GfxManager::LoadRequestNotification(GfxManager *this)
{
  extension::BasicFutureObject<extension::GFXIMovieData,void> *p_m_FutureGFXMovieNotification; // rdi
  unsigned __int64 v2; // r8
  extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache *v3; // rcx
  const void *v4; // r9
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *m_ptr; // r8
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v6; // rdx
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v7; // rcx
  char *Ptr; // rcx
  char *v9; // rax
  extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> v10; // [rsp+28h] [rbp-70h] BYREF
  std::string v11; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+50h] [rbp-48h]
  std::string _Right; // [rsp+60h] [rbp-38h] BYREF

  v12 = -2i64;
  if ( !this->m_GFXMovieNotification.m_movieProxy.m_ptr )
  {
    p_m_FutureGFXMovieNotification = &this->m_FutureGFXMovieNotification;
    extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(&this->m_FutureGFXMovieNotification);
    _Right._Mypair._Myval2._Myres = 15i64;
    _Right._Mypair._Myval2._Mysize = 0i64;
    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( *GfxFileTable[0][37] )
    {
      v2 = -1i64;
      do
        ++v2;
      while ( GfxFileTable[0][37][v2] );
    }
    else
    {
      v2 = 0i64;
    }
    std::string::assign(&_Right, GfxFileTable[0][37], v2);
    v11._Mypair._Myval2._Myres = 15i64;
    v11._Mypair._Myval2._Mysize = 0i64;
    v11._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v11, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::getCachedOrLoadStart(v3, &v10, &v11, v4);
    p_m_FutureGFXMovieNotification->m_isNoCache = 0;
    m_ptr = v10.m_ptr;
    v6 = v10.m_ptr;
    if ( v10.m_ptr )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v10.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
      m_ptr = v10.m_ptr;
    }
    v7 = p_m_FutureGFXMovieNotification->m_body.m_ptr;
    p_m_FutureGFXMovieNotification->m_body.m_ptr = v6;
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&v7->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
        ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))v7->~RefCountableWeakSupportBase)(
          v7,
          1i64);
      m_ptr = v10.m_ptr;
    }
    if ( m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
    }
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
    {
      Ptr = _Right._Mypair._Myval2._Bx._Ptr;
      if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v9 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        if ( v9 >= _Right._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(Ptr);
    }
  }
}

void __fastcall GfxManager::LoadRequestSystem(GfxManager *this)
{
  extension::BasicFutureObject<extension::GFXIMovieData,void> *p_m_FutureGFXMovieSystem; // rdi
  unsigned __int64 v2; // r8
  extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache *v3; // rcx
  const void *v4; // r9
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *m_ptr; // r8
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v6; // rdx
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v7; // rcx
  char *Ptr; // rcx
  char *v9; // rax
  extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> v10; // [rsp+28h] [rbp-70h] BYREF
  std::string v11; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+50h] [rbp-48h]
  std::string _Right; // [rsp+60h] [rbp-38h] BYREF

  v12 = -2i64;
  if ( !this->m_GFXMovieSystem.m_movieProxy.m_ptr )
  {
    p_m_FutureGFXMovieSystem = &this->m_FutureGFXMovieSystem;
    extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(&this->m_FutureGFXMovieSystem);
    _Right._Mypair._Myval2._Myres = 15i64;
    _Right._Mypair._Myval2._Mysize = 0i64;
    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( *GfxFileTable[0][36] )
    {
      v2 = -1i64;
      do
        ++v2;
      while ( GfxFileTable[0][36][v2] );
    }
    else
    {
      v2 = 0i64;
    }
    std::string::assign(&_Right, GfxFileTable[0][36], v2);
    v11._Mypair._Myval2._Myres = 15i64;
    v11._Mypair._Myval2._Mysize = 0i64;
    v11._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v11, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::getCachedOrLoadStart(v3, &v10, &v11, v4);
    p_m_FutureGFXMovieSystem->m_isNoCache = 0;
    m_ptr = v10.m_ptr;
    v6 = v10.m_ptr;
    if ( v10.m_ptr )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v10.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
      m_ptr = v10.m_ptr;
    }
    v7 = p_m_FutureGFXMovieSystem->m_body.m_ptr;
    p_m_FutureGFXMovieSystem->m_body.m_ptr = v6;
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&v7->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
        ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))v7->~RefCountableWeakSupportBase)(
          v7,
          1i64);
      m_ptr = v10.m_ptr;
    }
    if ( m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
    }
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
    {
      Ptr = _Right._Mypair._Myval2._Bx._Ptr;
      if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v9 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        if ( v9 >= _Right._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(Ptr);
    }
  }
}

void __fastcall GfxManager::LoadRequestTutorial(GfxManager *this)
{
  extension::BasicFutureObject<extension::GFXIMovieData,void> *p_m_FutureGFXMovieTutorial; // rdi
  unsigned __int64 v2; // r8
  extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache *v3; // rcx
  const void *v4; // r9
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *m_ptr; // r8
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v6; // rdx
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *v7; // rcx
  char *Ptr; // rcx
  char *v9; // rax
  extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> v10; // [rsp+28h] [rbp-70h] BYREF
  std::string v11; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+50h] [rbp-48h]
  std::string _Right; // [rsp+60h] [rbp-38h] BYREF

  v12 = -2i64;
  p_m_FutureGFXMovieTutorial = &this->m_FutureGFXMovieTutorial;
  extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(&this->m_FutureGFXMovieTutorial);
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *GfxFileTable[0][9] )
  {
    v2 = -1i64;
    do
      ++v2;
    while ( GfxFileTable[0][9][v2] );
  }
  else
  {
    v2 = 0i64;
  }
  std::string::assign(&_Right, GfxFileTable[0][9], v2);
  v11._Mypair._Myval2._Myres = 15i64;
  v11._Mypair._Myval2._Mysize = 0i64;
  v11._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v11, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::getCachedOrLoadStart(v3, &v10, &v11, v4);
  p_m_FutureGFXMovieTutorial->m_isNoCache = 0;
  m_ptr = v10.m_ptr;
  v6 = v10.m_ptr;
  if ( v10.m_ptr )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v10.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
    m_ptr = v10.m_ptr;
  }
  v7 = p_m_FutureGFXMovieTutorial->m_body.m_ptr;
  p_m_FutureGFXMovieTutorial->m_body.m_ptr = v6;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v7->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))v7->~RefCountableWeakSupportBase)(
        v7,
        1i64);
    m_ptr = v10.m_ptr;
  }
  if ( m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
      m_ptr,
      1i64);
  }
  if ( _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v9 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v9 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
}

void __fastcall GfxManager::ReleaseGFXMovie(GfxManager *this, bool release)
{
  bool v2; // r8
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  extension::gfxi_detail::MovieProxy *v5; // rbx

  v2 = 1;
  if ( !this->m_ReleaseFlag )
    v2 = release;
  this->m_bQuitGFXMovie = 0;
  this->m_QuitResultCode = RESULT_CODE_OK;
  if ( v2 )
  {
    extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(&this->m_FutureGFXMovie);
    m_ptr = this->m_GFXMovie.m_movieProxy.m_ptr;
    this->m_GFXMovie.m_movieProxy.m_ptr = 0i64;
    if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::gfxi_detail::MovieProxy::~MovieProxy(m_ptr);
      operator delete(m_ptr, 0xE8ui64);
    }
    v5 = this->m_GFXMovieCross.m_movieProxy.m_ptr;
    this->m_GFXMovieCross.m_movieProxy.m_ptr = 0i64;
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        extension::gfxi_detail::MovieProxy::~MovieProxy(v5);
        operator delete(v5, 0xE8ui64);
      }
    }
  }
}

void __fastcall GfxManager::UpdateLoadMovie(GfxManager *this, extension::AsyncStatus::Step a2)
{
  extension::AsyncContent<extension::GFXIMovieData> *m_ptr; // rax
  extension::AsyncContent<extension::GFXIMovieData> *v4; // rbx
  extension::AsyncContent<extension::GFXIMovieData> *v5; // rbx
  extension::GFXIMovieData *Myval2; // rcx
  extension::gfxi_detail::MovieProxy *v7; // rcx
  extension::gfxi_detail::MovieProxy *v8; // rbx
  extension::gfxi_detail::MovieProxy *v9; // rbx
  extension::AsyncContent<extension::GFXIMovieData> *v10; // rax
  extension::AsyncContent<extension::GFXIMovieData> *v11; // rbx
  extension::AsyncContent<extension::GFXIMovieData> *v12; // rbx
  extension::GFXIMovieData *v13; // rcx
  extension::gfxi_detail::MovieProxy *v14; // rcx
  extension::gfxi_detail::MovieProxy *v15; // rbx
  extension::gfxi_detail::MovieProxy *v16; // rbx
  extension::GFXIMovieStack *v17; // rax
  bool v18; // r9
  extension::AsyncContent<extension::GFXIMovieData> *v19; // rax
  extension::AsyncContent<extension::GFXIMovieData> *v20; // rbx
  extension::exsound_detail::SoundBankImpl *v21; // rax
  const extension::GFXIMovie *v22; // rax
  extension::gfxi_detail::MovieProxy *v23; // rax
  extension::GFXIMovieStack *v24; // rax
  bool v25; // r9
  extension::AsyncStatus::Step v26; // edx
  extension::exsound_detail::SoundBankImpl *v27; // rax
  const extension::GFXIMovie *v28; // rax
  extension::GFXIMovieStack *v29; // rax
  bool v30; // r9
  extension::AsyncStatus::Step v31; // edx
  extension::exsound_detail::SoundBankImpl *v32; // rax
  const extension::GFXIMovie *v33; // rax
  extension::gfxi_detail::MovieProxy *v34; // rax
  extension::AsyncStatus::Step v35; // edx
  extension::gfxi_detail::MovieProxy *v36; // rax
  bool v37; // bp
  extension::exsound_detail::SoundBankImpl *v38; // rax
  const extension::GFXIMovie *v39; // rax
  extension::GFXIMovieStack *v40; // rax
  bool v41; // r9
  void (*m_pCompleteFunc)(void); // rax
  extension::GFXIMovie v43; // [rsp+30h] [rbp-48h] BYREF
  extension::GFXIMovie v44; // [rsp+38h] [rbp-40h] BYREF
  extension::GFXIMovie v45; // [rsp+40h] [rbp-38h] BYREF
  extension::GFXIMovie result; // [rsp+88h] [rbp+10h] BYREF
  extension::GFXIMovie v47; // [rsp+90h] [rbp+18h] BYREF
  extension::GFXIMovie v48; // [rsp+98h] [rbp+20h] BYREF

  m_ptr = this->m_FutureGFXMovieCommon.m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased || (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) != 0 )
  {
    v4 = this->m_FutureGFXMovieCommon.m_body.m_ptr->m_content.m_ptr;
    if ( v4 )
    {
      if ( !v4->m_isDataReleased )
      {
        if ( (v4->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v4->m_status, a2);
        if ( v4->m_data._Mypair._Myval2 )
        {
          v5 = this->m_FutureGFXMovieCommon.m_body.m_ptr->m_content.m_ptr;
          if ( !v5 || v5->m_isDataReleased )
          {
            Myval2 = 0i64;
          }
          else
          {
            if ( (v5->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&v5->m_status, a2);
            Myval2 = v5->m_data._Mypair._Myval2;
          }
          v7 = extension::GFXIMovieData::createInstance(Myval2, &result)->m_movieProxy.m_ptr;
          if ( v7 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 1ui64);
          v8 = this->m_GFXMovieCommon.m_movieProxy.m_ptr;
          this->m_GFXMovieCommon.m_movieProxy.m_ptr = v7;
          if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            extension::gfxi_detail::MovieProxy::~MovieProxy(v8);
            operator delete(v8, 0xE8ui64);
          }
          v9 = result.m_movieProxy.m_ptr;
          if ( result.m_movieProxy.m_ptr
            && _InterlockedExchangeAdd64((volatile signed __int64 *)result.m_movieProxy.m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1
            && v9 )
          {
            extension::gfxi_detail::MovieProxy::~MovieProxy(v9);
            operator delete(v9, 0xE8ui64);
          }
          extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(&this->m_FutureGFXMovieCommon);
        }
      }
    }
  }
  v10 = this->m_FutureGFXMovieBG.m_body.m_ptr->m_content.m_ptr;
  if ( !v10 || v10->m_isDataReleased || (v10->m_status.m_stateFlags.m_value._My_val & 1) != 0 )
  {
    v11 = this->m_FutureGFXMovieBG.m_body.m_ptr->m_content.m_ptr;
    if ( v11 )
    {
      if ( !v11->m_isDataReleased )
      {
        if ( (v11->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v11->m_status, a2);
        if ( v11->m_data._Mypair._Myval2 )
        {
          v12 = this->m_FutureGFXMovieBG.m_body.m_ptr->m_content.m_ptr;
          if ( !v12 || v12->m_isDataReleased )
          {
            v13 = 0i64;
          }
          else
          {
            if ( (v12->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&v12->m_status, a2);
            v13 = v12->m_data._Mypair._Myval2;
          }
          v14 = extension::GFXIMovieData::createInstance(v13, &v47)->m_movieProxy.m_ptr;
          if ( v14 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)v14, 1ui64);
          v15 = this->m_GFXMovieBG.m_movieProxy.m_ptr;
          this->m_GFXMovieBG.m_movieProxy.m_ptr = v14;
          if ( v15 && _InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            extension::gfxi_detail::MovieProxy::~MovieProxy(v15);
            operator delete(v15, 0xE8ui64);
          }
          v16 = v47.m_movieProxy.m_ptr;
          if ( v47.m_movieProxy.m_ptr
            && _InterlockedExchangeAdd64((volatile signed __int64 *)v47.m_movieProxy.m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1
            && v16 )
          {
            extension::gfxi_detail::MovieProxy::~MovieProxy(v16);
            operator delete(v16, 0xE8ui64);
          }
          extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(&this->m_FutureGFXMovieBG);
          v17 = extension::GFXIMovieStack::Instance();
          extension::GFXIMovieStack::pushPriority(v17, &this->m_GFXMovieBG, 100, v18);
        }
      }
    }
  }
  v19 = this->m_FutureGFXMovieNotification.m_body.m_ptr->m_content.m_ptr;
  if ( !v19 || v19->m_isDataReleased || (v19->m_status.m_stateFlags.m_value._My_val & 1) != 0 )
  {
    v20 = this->m_FutureGFXMovieNotification.m_body.m_ptr->m_content.m_ptr;
    if ( v20 )
    {
      if ( !v20->m_isDataReleased )
      {
        if ( (v20->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v20->m_status, a2);
        if ( v20->m_data._Mypair._Myval2 )
        {
          v21 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                  (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_FutureGFXMovieNotification,
                  a2);
          v22 = extension::GFXIMovieData::createInstance((extension::GFXIMovieData *)v21, &v48);
          extension::GFXIMovie::operator=(&this->m_GFXMovieNotification, v22);
          extension::GFXIMovie::~GFXIMovie(&v48);
          extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(&this->m_FutureGFXMovieNotification);
          v23 = this->m_GFXMovieNotification.m_movieProxy.m_ptr;
          if ( v23 )
            v23->m_operationGenerator.m_multiControllerMode = ByUser;
          v24 = extension::GFXIMovieStack::Instance();
          extension::GFXIMovieStack::pushPriority(v24, &this->m_GFXMovieNotification, 800, v25);
        }
      }
    }
  }
  if ( extension::BasicFutureObject<extension::GFXIMovieData,void>::hasData(
         (extension::BasicFutureObject<Image,extension::FutureImageOption> *)&this->m_FutureGFXMovieTutorial,
         a2) )
  {
    v27 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
            (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_FutureGFXMovieTutorial,
            v26);
    v28 = extension::GFXIMovieData::createInstance((extension::GFXIMovieData *)v27, &v43);
    extension::GFXIMovie::operator=(&this->m_GFXMovieTutorial, v28);
    extension::GFXIMovie::~GFXIMovie(&v43);
    extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(&this->m_FutureGFXMovieTutorial);
    v29 = extension::GFXIMovieStack::Instance();
    extension::GFXIMovieStack::pushPriority(v29, &this->m_GFXMovieTutorial, 400, v30);
  }
  if ( extension::BasicFutureObject<extension::GFXIMovieData,void>::hasData(
         (extension::BasicFutureObject<Image,extension::FutureImageOption> *)&this->m_FutureGFXMovieSystem,
         v26) )
  {
    v32 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
            (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_FutureGFXMovieSystem,
            v31);
    v33 = extension::GFXIMovieData::createInstance((extension::GFXIMovieData *)v32, &v44);
    extension::GFXIMovie::operator=(&this->m_GFXMovieSystem, v33);
    extension::GFXIMovie::~GFXIMovie(&v44);
    extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(&this->m_FutureGFXMovieSystem);
    v34 = this->m_GFXMovieSystem.m_movieProxy.m_ptr;
    if ( v34 )
      v34->m_operationGenerator.m_multiControllerMode = Default;
  }
  if ( extension::BasicFutureObject<extension::GFXIMovieData,void>::hasData(
         (extension::BasicFutureObject<Image,extension::FutureImageOption> *)&this->m_FutureGFXMovie,
         v31) )
  {
    v36 = this->m_GFXMovie.m_movieProxy.m_ptr;
    if ( this->m_GFXMovie.m_movieProxy.m_ptr )
      v37 = !v36->m_bAdvance;
    else
      v37 = 0;
    if ( v36 )
    {
      if ( this->m_bLockGFXMovie )
        return;
      if ( this->m_bCrossGFXMovie )
      {
        extension::GFXIMovie::invoke(&this->m_GFXMovie, "_root.onChangeToPassive", 0i64, 0i64, 0);
        extension::GFXIMovie::dispose(&this->m_GFXMovieCross);
        extension::GFXIMovie::operator=(&this->m_GFXMovieCross, &this->m_GFXMovie);
      }
      extension::GFXIMovie::dispose(&this->m_GFXMovie);
    }
    v38 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
            (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_FutureGFXMovie,
            v35);
    v39 = extension::GFXIMovieData::createInstance((extension::GFXIMovieData *)v38, &v45);
    extension::GFXIMovie::operator=(&this->m_GFXMovie, v39);
    extension::GFXIMovie::~GFXIMovie(&v45);
    extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(&this->m_FutureGFXMovie);
    if ( v37 && this->m_GFXMovie.m_movieProxy.m_ptr )
      this->m_GFXMovie.m_movieProxy.m_ptr->m_bAdvance = 0;
    v40 = extension::GFXIMovieStack::Instance();
    extension::GFXIMovieStack::pushPriority(v40, &this->m_GFXMovie, this->m_Priority, v41);
    if ( this->m_GFXMovie.m_movieProxy.m_ptr )
      this->m_GFXMovie.m_movieProxy.m_ptr->m_operationGenerator.m_multiControllerMode = Default;
    m_pCompleteFunc = this->m_pCompleteFunc;
    if ( m_pCompleteFunc )
      m_pCompleteFunc();
  }
  if ( this->m_GFXMovieCross.m_movieProxy.m_ptr )
  {
    if ( this->m_bDisposeGFXMovie )
      extension::GFXIMovie::dispose(&this->m_GFXMovieCross);
    this->m_bDisposeGFXMovie = 0;
  }
  if ( this->m_GFXMovieSystem.m_movieProxy.m_ptr )
  {
    if ( this->m_SystemMessageState == SYSTEM_MESSAGE_OPEN )
      extension::GFXIMovie::advance(&this->m_GFXMovieSystem, 0.016666668);
  }
}

