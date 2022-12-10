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
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/menudata.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"

const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5F750
bool s_TrophyThankYou; // 0x140AC4BC1
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B2F
BattleSystem::CpuSequence::CpuSequence(const BattleSystem::CpuSequence & __that); // 0x140207820
void LoadCompleteEventThankYou(); // 0x140206CC0
void AppMain::ST_ThankYouInit(); // 0x140206E10
void AppMain::ST_ThankYouLoop(); // 0x140206F60
void AppMain::ST_ThankYouDraw(); // 0x1401C0BF0
void AppMain::ST_ThankYouTrophy(); // 0x140207130//decompilation failure at 140A5F750!
//decompilation failure at 140AC4BC1!
//decompilation failure at 1408A0B2F!
BattleSystem::SequenceCandidateInfo *__fastcall std::_Uninitialized_move_al_unchecked1<BattleSystem::SequenceCandidateInfo *,BattleSystem::SequenceCandidateInfo *,std::allocator<BattleSystem::SequenceCandidateInfo>>(
        const BattleSystem::SequenceCandidateInfo *_First,
        const BattleSystem::SequenceCandidateInfo *_Last,
        BattleSystem::SequenceCandidateInfo *_Dest,
        std::_Wrap_alloc<std::allocator<BattleSystem::SequenceCandidateInfo> > *_Al)
{
  for ( ; _First != _Last; ++_First )
  {
    if ( _Dest )
      *_Dest = *_First;
    ++_Dest;
  }
  return _Dest;
}

void __fastcall std::vector<BattleSystem::SequenceCandidateInfo>::vector<BattleSystem::SequenceCandidateInfo>(
        std::vector<BattleSystem::SequenceCandidateInfo> *this,
        const std::vector<BattleSystem::SequenceCandidateInfo> *_Right)
{
  unsigned __int64 v4; // rdi
  BattleSystem::SequenceCandidateInfo *v5; // rax
  std::_Wrap_alloc<std::allocator<BattleSystem::SequenceCandidateInfo> > *v6; // r9

  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  v4 = _Right->_Mypair._Myval2._Mylast - _Right->_Mypair._Myval2._Myfirst;
  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    v5 = (BattleSystem::SequenceCandidateInfo *)std::allocator<AgDelegate1<AgControllerAddedEvent const &,void>>::allocate(
                                                  (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > *)this,
                                                  v4);
    this->_Mypair._Myval2._Myfirst = v5;
    this->_Mypair._Myval2._Mylast = v5;
    this->_Mypair._Myval2._Myend = &this->_Mypair._Myval2._Myfirst[v4];
    this->_Mypair._Myval2._Mylast = std::_Uninitialized_move_al_unchecked1<BattleSystem::SequenceCandidateInfo *,BattleSystem::SequenceCandidateInfo *,std::allocator<BattleSystem::SequenceCandidateInfo>>(
                                      _Right->_Mypair._Myval2._Myfirst,
                                      _Right->_Mypair._Myval2._Mylast,
                                      v5,
                                      v6);
  }
}

void __fastcall BattleSystem::CpuSequence::CpuSequence(
        BattleSystem::CpuSequence *this,
        const BattleSystem::CpuSequence *__that)
{
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *p_cmdCheckFunc; // rbx
  std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int> *v5; // rcx

  this->pOwner = __that->pOwner;
  this->pEnemyShot = __that->pEnemyShot;
  this->fFrontMoveX = __that->fFrontMoveX;
  this->fBackMoveX = __that->fBackMoveX;
  *(_OWORD *)&this->jumpInfo[0].fMovX = *(_OWORD *)&__that->jumpInfo[0].fMovX;
  *(_OWORD *)&this->jumpInfo[0].fFrame = *(_OWORD *)&__that->jumpInfo[0].fFrame;
  *(_OWORD *)&this->jumpInfo[1].fDist = *(_OWORD *)&__that->jumpInfo[1].fDist;
  *(_OWORD *)&this->jumpInfo[2].fAddY = *(_OWORD *)&__that->jumpInfo[2].fAddY;
  *(_OWORD *)&this->jumpInfo[3].fMovY = *(_OWORD *)&__that->jumpInfo[3].fMovY;
  *(_OWORD *)&this->jumpInfo[4].fMovX = *(_OWORD *)&__that->jumpInfo[4].fMovX;
  *(_OWORD *)&this->jumpInfo[4].fFrame = *(_OWORD *)&__that->jumpInfo[4].fFrame;
  *(_OWORD *)&this->jumpInfo[5].fDist = *(_OWORD *)&__that->jumpInfo[5].fDist;
  *(_OWORD *)&this->jumpInfo[6].fAddY = *(_OWORD *)&__that->jumpInfo[6].fAddY;
  *(_OWORD *)&this->jumpInfo[7].fMovY = *(_OWORD *)&__that->jumpInfo[7].fMovY;
  *(_OWORD *)&this->jumpInfo[8].fMovX = *(_OWORD *)&__that->jumpInfo[8].fMovX;
  *(_OWORD *)&this->jumpInfo[8].fFrame = *(_OWORD *)&__that->jumpInfo[8].fFrame;
  *(_QWORD *)&this->jumpInfo[9].fDist = *(_QWORD *)&__that->jumpInfo[9].fDist;
  *(_QWORD *)this->fNormalThrowRange = *(_QWORD *)__that->fNormalThrowRange;
  this->iDifficulty = __that->iDifficulty;
  this->iCpuLevel = __that->iCpuLevel;
  this->guardType = __that->guardType;
  p_cmdCheckFunc = &this->cmdCheckFunc;
  this->cmdCheckFunc._Mystorage._Ptrs[7] = 0i64;
  v5 = __that->cmdCheckFunc._Mystorage._Ptrs[7];
  if ( v5 )
    p_cmdCheckFunc->_Mystorage._Ptrs[7] = (std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int> *)v5->_Copy(v5, p_cmdCheckFunc);
  this->iCmdFuncOption = __that->iCmdFuncOption;
  this->pValidCommand = __that->pValidCommand;
  this->xSeqWaitFrame.value = __that->xSeqWaitFrame.value;
  this->bReconsideration = __that->bReconsideration;
  this->bTrainingCPU = __that->bTrainingCPU;
  this->bDamageReversal = __that->bDamageReversal;
  *(_OWORD *)&this->nowSeq.iType = *(_OWORD *)&__that->nowSeq.iType;
  *(_OWORD *)&this->nowSeq.xMaxFrame.value = *(_OWORD *)&__that->nowSeq.xMaxFrame.value;
  this->nowSeq.type.guardDamage.iCancelType = __that->nowSeq.type.guardDamage.iCancelType;
  *(_OWORD *)&this->reqSeq.iType = *(_OWORD *)&__that->reqSeq.iType;
  *(_OWORD *)&this->reqSeq.xMaxFrame.value = *(_OWORD *)&__that->reqSeq.xMaxFrame.value;
  this->reqSeq.type.guardDamage.iCancelType = __that->reqSeq.type.guardDamage.iCancelType;
  this->pSeqData = __that->pSeqData;
  std::vector<BattleSystem::SequenceCandidateInfo>::vector<BattleSystem::SequenceCandidateInfo>(
    &this->seqCtrl.seqCandidateList,
    &__that->seqCtrl.seqCandidateList);
  this->seqCtrl.pOwner = __that->seqCtrl.pOwner;
  this->seqCtrl.pCpuData = __that->seqCtrl.pCpuData;
  this->seqCtrl.iSeqListIndex = __that->seqCtrl.iSeqListIndex;
  this->seqCtrl.iSeqCommandIndex = __that->seqCtrl.iSeqCommandIndex;
  this->seqCtrl.iStandCharge = __that->seqCtrl.iStandCharge;
  this->seqCtrl.iCrouchCharge = __that->seqCtrl.iCrouchCharge;
  this->seqCtrl.iButtonCharge = __that->seqCtrl.iButtonCharge;
  this->iDebugCpuLevel = __that->iDebugCpuLevel;
  this->bSequenceTestMode = __that->bSequenceTestMode;
  this->bSequenceTestPlay = __that->bSequenceTestPlay;
  this->iSequenceTestIndex = __that->iSequenceTestIndex;
}

void __fastcall LoadCompleteEventThankYou()
{
  AppMain *v0; // rdi
  GameDataInfo *v1; // rcx
  int v2; // ebx
  const CHARACTER_NO *v3; // rax
  int v4; // ecx
  GfxManager *v5; // rax
  GfxManager *v6; // [rsp+40h] [rbp+8h]

  v0 = *(AppMain **)&AppMain::pApp;
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
  v2 = 0;
  v3 = &SpecialCombinationData[0][1];
  while ( 1 )
  {
    v4 = *((_DWORD *)v3 - 1);
    if ( (v4 == `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0]
       || *v3 == `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0]
       || *((_DWORD *)v3 + 1) == `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0])
      && (v4 == `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][1]
       || *v3 == `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][1]
       || *((_DWORD *)v3 + 1) == `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][1])
      && (v4 == `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][2]
       || *v3 == `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][2]
       || *((_DWORD *)v3 + 1) == `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][2]) )
    {
      break;
    }
    ++v2;
    v3 += 3;
    if ( v2 >= 10 )
    {
      v2 = -1;
      goto LABEL_18;
    }
  }
  if ( v2 != -1 )
    AppMain::UnlockGallery(v0, (GALLERY_ID)(v2 + 600), 1);
LABEL_18:
  SyncMenuImage::Load(
    &v0->m_SyncMenuBG,
    (const ImageDataInfo *)MenuImageDataTbl[*(int *)(*(_QWORD *)&AppMain::pApp + 2197384i64)] + 26,
    FADE_IN);
  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v6 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v6);
    GfxManager::instance = v5;
  }
  GfxManager::GFv_SetImage(v5, v2);
}

void __fastcall AppMain::ST_CreditDraw(AppMain *this)
{
  Graphics *v2; // rcx
  Graphics *g; // rdx
  GfxManager *v4; // rax
  extension::GFXIMovieStack *v5; // rax
  GfxManager *v6; // [rsp+40h] [rbp+8h]

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
  if ( !GfxManager::instance )
  {
    v6 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v6);
    GfxManager::instance = v4;
  }
  v5 = extension::GFXIMovieStack::Instance();
  extension::GFXIMovieStack::render(v5);
  Graphics::drawStack(this->g->g);
}

void __fastcall AppMain::ST_ThankYouInit(AppMain *this, __int64 a2, __int64 a3, int a4)
{
  GfxManager *v5; // rax
  GfxManager *v6; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  extension::gfxi_detail::MovieProxy *v8; // rcx
  UserGameOperation *v9; // rax
  int v10; // ecx
  GfxManager *v11; // [rsp+40h] [rbp+8h]
  GfxManager *v12; // [rsp+40h] [rbp+8h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v11 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v11);
    GfxManager::instance = v5;
  }
  GfxManager::LoadRequest(v5, FILE_09_THANKYOU, LoadCompleteEventThankYou, a4);
  v6 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v12 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v12);
    GfxManager::instance = v6;
  }
  if ( v6->m_GFXMovieBG.m_movieProxy.m_ptr )
  {
    m_ptr = v6->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( m_ptr )
      m_ptr->m_bAdvance = 0;
    v8 = v6->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( v8 )
      v8->m_bRender = 0;
  }
  v9 = UserGameOperation::Instance();
  UserGameOperation::clear(v9);
  this->m_SceneTime = 0;
  s_TrophyThankYou = 0;
  if ( this->m_iFadeAlpha )
  {
    this->m_bFadeEnd = 0;
    this->m_iFadeFrame = 10;
    v10 = 1000 * this->m_iFadeColor.s.a;
    this->m_iFadeAlpha = v10;
    this->m_iFadeRate = v10 / 10;
    this->m_bFadeLock = 0;
    this->m_FuncFT = 171;
  }
  this->iReserveScene = -1;
  this->m_FuncST = 37;
  this->m_FuncBT = 38;
  AppMain::SceneFunc(this, 37);
  this->m_FuncExit = 39;
}

void __fastcall AppMain::ST_ThankYouLoop(AppMain *this)
{
  GfxManager *v2; // rax
  GfxManager *v3; // rdi
  extension::GFXIMovieStack *v4; // rax
  bool v5; // al
  int v6; // eax
  int v7; // eax
  GfxManager *v8; // [rsp+40h] [rbp+8h]
  GfxManager *v9; // [rsp+40h] [rbp+8h]

  v2 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v2;
  }
  v3 = v2;
  if ( !v2 )
  {
    v9 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v9);
    GfxManager::instance = v2;
  }
  if ( v2->m_SystemMessageState != SYSTEM_MESSAGE_OPEN || !v2->m_SystemMessageLock )
  {
    v4 = extension::GFXIMovieStack::Instance();
    extension::GFXIMovieStack::advance(v4, 0.016666668);
  }
  ++this->m_SceneTime;
  v5 = s_TrophyThankYou;
  if ( this->m_SceneTime >= 60 && !s_TrophyThankYou )
  {
    s_TrophyThankYou = 1;
    AppMain::ST_ThankYouTrophy(this);
    v5 = s_TrophyThankYou;
  }
  if ( this->m_SceneTime < 600 )
  {
    if ( !v3->m_bQuitGFXMovie )
      return;
    if ( !v5 )
      AppMain::ST_ThankYouTrophy(this);
    v7 = 72;
    if ( this->m_NewMyRanking == -1 )
      v7 = 16;
    this->m_FadeST = v7;
    this->m_iFadeFrame = 1;
    this->m_iFadeColor.rgba = -1;
    this->m_iFadeRate = 1000 * this->m_iFadeColor.s.a;
  }
  else
  {
    if ( !v5 )
      AppMain::ST_ThankYouTrophy(this);
    v6 = 72;
    if ( this->m_NewMyRanking == -1 )
      v6 = 16;
    this->m_FadeST = v6;
    this->m_iFadeFrame = 30;
    this->m_iFadeColor.rgba = -1;
    this->m_iFadeRate = 1000 * this->m_iFadeColor.s.a / 30;
  }
  this->m_FuncFT = 170;
  this->m_bFadeLock = 0;
  this->m_iFadeAlpha = 0;
  *(_WORD *)&this->m_bFadeEnd = 0;
  this->m_FadeExitFunc = 39;
  this->m_FuncST = 0;
  this->iReserveScene = -1;
}

void __fastcall AppMain::ST_ThankYouTrophy(AppMain *this)
{
  BattleSystem::BattleController *v1; // rax
  BattleSystem::BattleController *v2; // r10
  BattleSystem::BattleController *v3; // rax
  unsigned int v4; // er9
  unsigned int v5; // edx
  BattleSystem::BattleController *v6; // rax
  BattleSystem::ResultMemberInfo *p_resultMember; // rcx
  char *v8; // rax
  __int64 v9; // rdx
  CharaProjectData *v10; // rbx
  int v11; // ebp
  int CharaDataIndex; // eax
  int v13; // edi
  int iBaseCharaID; // esi
  CharaProjectData *v15; // rbx
  int v16; // er13
  int v17; // eax
  int v18; // ebp
  CharaProjectData *v19; // rbx
  int v20; // er12
  int v21; // eax
  int v22; // er14
  GameDataInfo *v23; // rcx
  int v24; // edx
  const CHARACTER_NO *v25; // rbx
  const CHARACTER_NO *v26; // rax
  int v27; // ecx
  int v28; // er15
  __int64 v29; // rcx
  CharaProjectData *v30; // rsi
  int v31; // eax
  int v32; // esi
  GameDataInfo *v33; // rcx
  int v34; // er14
  const CHARACTER_NO *v35; // rax
  CharaProjectData *v36; // rsi
  int v37; // eax
  int v38; // esi
  GameDataInfo *v39; // rcx
  int v40; // ebp
  const CHARACTER_NO *v41; // rax
  CharaProjectData *v42; // rsi
  int v43; // er13
  int v44; // eax
  GameDataInfo *v45; // rcx
  int v46; // eax
  std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *v47; // rcx
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *p_cmdCheckFunc; // rdx
  BattleSystem::BattleController *v49; // [rsp+20h] [rbp-9C8h]
  BattleSystem::BattleController *v50; // [rsp+20h] [rbp-9C8h]
  BattleSystem::BattleController *v51; // [rsp+20h] [rbp-9C8h]
  _DWORD *v52; // [rsp+20h] [rbp-9C8h]
  __int128 v53; // [rsp+70h] [rbp-978h]
  char v54; // [rsp+E0h] [rbp-908h] BYREF
  int v55; // [rsp+E8h] [rbp-900h]
  int v56; // [rsp+ECh] [rbp-8FCh]
  int id; // [rsp+F0h] [rbp-8F8h]
  BattleSystem::CpuSequence v58; // [rsp+7C0h] [rbp-228h] BYREF

  if ( *(char *)(*(_QWORD *)&AppMain::pApp + 2205122i64) <= 1 )
  {
    *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205122i64) = 1;
    AgAchievementsManager::unlock(
      (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
      (AgAchievementPlatformData *)&stru_140A9BD50);
  }
  v1 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v49 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v49);
    BattleSystem::BattleController::instance = v1;
  }
  BattleSystem::CpuSequence::CpuSequence(&v58, v1->cpuPlayer);
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v50 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v50);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  v53 = *(_OWORD *)&v2->playerInfo[0].iPerfectRoundCount;
  if ( v58.iDifficulty == AiLevel_VeryHard )
  {
    v4 = DWORD2(v53) ^ 0x7B48A35E ^ (WORD4(v53) ^ 0xA35E ^ (unsigned __int16)((DWORD2(v53) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((WORD4(v53) ^ 0xA35E ^ (unsigned __int16)((DWORD2(v53) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v5 = HIDWORD(v53) ^ 0x7B48A35E ^ (WORD6(v53) ^ 0xA35E ^ (unsigned __int16)((HIDWORD(v53) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((WORD6(v53) ^ 0xA35E ^ (unsigned __int16)((HIDWORD(v53) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    if ( !(((v4 ^ (v4 >> 7)) & 0x550055 ^ v4 ^ (((v4 ^ (v4 >> 7)) & 0x550055) << 7))
         + ((v5 ^ (v5 >> 7)) & 0x550055 ^ v5 ^ (((v5 ^ (v5 >> 7)) & 0x550055) << 7)))
      && *(char *)(*(_QWORD *)&AppMain::pApp + 2205123i64) <= 1 )
    {
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205123i64) = 1;
      AgAchievementsManager::unlock(
        (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance,
        (AgAchievementPlatformData *)&stru_140A9BD60);
      v2 = BattleSystem::BattleController::instance;
    }
  }
  if ( !v2 )
  {
    v51 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v51);
    v2 = v6;
    BattleSystem::BattleController::instance = v6;
  }
  p_resultMember = &v2->resultMember;
  v8 = &v54;
  v9 = 13i64;
  do
  {
    *(_OWORD *)v8 = *(_OWORD *)&p_resultMember->battleWinnerID;
    *((_OWORD *)v8 + 1) = *(_OWORD *)&p_resultMember->charaNo[2];
    *((_OWORD *)v8 + 2) = *(_OWORD *)&p_resultMember->rivalCharaNo;
    *((_OWORD *)v8 + 3) = *(_OWORD *)&p_resultMember->pActor[1];
    *((_OWORD *)v8 + 4) = *(_OWORD *)&p_resultMember->bFinalKO;
    *((_OWORD *)v8 + 5) = *(_OWORD *)p_resultMember->iLoseCount;
    *((_OWORD *)v8 + 6) = *(_OWORD *)p_resultMember->iStraightWin;
    v8 += 128;
    *((_OWORD *)v8 - 1) = *(_OWORD *)&p_resultMember->scoreInfo.iPerfectBonus;
    p_resultMember = (BattleSystem::ResultMemberInfo *)((char *)p_resultMember + 128);
    --v9;
  }
  while ( v9 );
  *(_OWORD *)v8 = *(_OWORD *)&p_resultMember->battleWinnerID;
  *((_OWORD *)v8 + 1) = *(_OWORD *)&p_resultMember->charaNo[2];
  *((_OWORD *)v8 + 2) = *(_OWORD *)&p_resultMember->rivalCharaNo;
  *((_OWORD *)v8 + 3) = *(_OWORD *)&p_resultMember->pActor[1];
  *((_OWORD *)v8 + 4) = *(_OWORD *)&p_resultMember->bFinalKO;
  *((_QWORD *)v8 + 10) = *(_QWORD *)p_resultMember->iLoseCount;
  v10 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
  v11 = id;
  CharaDataIndex = CharaProjectData::GetCharaDataIndex(v10, id);
  v13 = -1;
  if ( CharaDataIndex >= 0 )
  {
    iBaseCharaID = v10->pCharaData[CharaDataIndex].iBaseCharaID;
    if ( iBaseCharaID < 0 )
      iBaseCharaID = v11;
  }
  else
  {
    iBaseCharaID = -1;
  }
  v15 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
  v16 = v56;
  v17 = CharaProjectData::GetCharaDataIndex(v15, v56);
  if ( v17 >= 0 )
  {
    v18 = v15->pCharaData[v17].iBaseCharaID;
    if ( v18 < 0 )
      v18 = v16;
  }
  else
  {
    v18 = -1;
  }
  v19 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
  v20 = v55;
  v21 = CharaProjectData::GetCharaDataIndex(v19, v55);
  if ( v21 >= 0 )
  {
    v22 = v19->pCharaData[v21].iBaseCharaID;
    if ( v22 < 0 )
      v22 = v20;
  }
  else
  {
    v22 = -1;
  }
  v52 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v52 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v23);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v24 = 0;
  v25 = &TeamCombinationData[0][1];
  v26 = &TeamCombinationData[0][1];
  do
  {
    v27 = *((_DWORD *)v26 - 1);
    v28 = 254;
    if ( (v27 == v22 || *v26 == v22 || *((_DWORD *)v26 + 1) == v22)
      && (v27 == v18 || *v26 == v18 || *((_DWORD *)v26 + 1) == v18)
      && (v27 == iBaseCharaID || *v26 == iBaseCharaID || *((_DWORD *)v26 + 1) == iBaseCharaID) )
    {
      v29 = *(_QWORD *)&AppMain::pApp;
      *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205232i64) |= 1 << v24;
      goto LABEL_90;
    }
    ++v24;
    v26 += 3;
  }
  while ( v24 < 18 );
  v30 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
  v31 = CharaProjectData::GetCharaDataIndex(v30, v20);
  if ( v31 >= 0 )
  {
    v32 = v30->pCharaData[v31].iBaseCharaID;
    if ( v32 < 0 )
      v32 = v20;
  }
  else
  {
    v32 = -1;
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v52 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v33);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v34 = 0;
  v35 = &TeamCombinationData[0][1];
  while ( *((_DWORD *)v35 - 1) != v32 && *v35 != v32 && *((_DWORD *)v35 + 1) != v32 )
  {
    ++v34;
    v35 += 3;
    if ( (__int64)v35 >= (__int64)&STR_RANKP + 4 )
    {
      v34 = 254;
      break;
    }
  }
  v36 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
  v37 = CharaProjectData::GetCharaDataIndex(v36, v16);
  if ( v37 >= 0 )
  {
    v38 = v36->pCharaData[v37].iBaseCharaID;
    if ( v38 < 0 )
      v38 = v16;
  }
  else
  {
    v38 = -1;
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v52 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v39);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v40 = 0;
  v41 = &TeamCombinationData[0][1];
  while ( *((_DWORD *)v41 - 1) != v38 && *v41 != v38 && *((_DWORD *)v41 + 1) != v38 )
  {
    ++v40;
    v41 += 3;
    if ( (__int64)v41 >= (__int64)&STR_RANKP + 4 )
    {
      v40 = 254;
      break;
    }
  }
  v42 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
  v43 = id;
  v44 = CharaProjectData::GetCharaDataIndex(v42, id);
  if ( v44 >= 0 )
  {
    v13 = v42->pCharaData[v44].iBaseCharaID;
    if ( v13 < 0 )
      v13 = v43;
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v52 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v45);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v46 = 0;
  while ( *((_DWORD *)v25 - 1) != v13 && *v25 != v13 && *((_DWORD *)v25 + 1) != v13 )
  {
    ++v46;
    v25 += 3;
    if ( (__int64)v25 >= (__int64)&STR_RANKP + 4 )
      goto LABEL_82;
  }
  v28 = v46;
LABEL_82:
  v29 = *(_QWORD *)&AppMain::pApp;
  if ( v34 == 16 || v40 == 16 || v28 == 16 )
    *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205232i64) |= 0x10000u;
  if ( v34 == 17 || v40 == 17 || v28 == 17 )
    *(_DWORD *)(v29 + 2205232) |= 0x20000u;
LABEL_90:
  SaveRecord_PlayerData::CheckAchivementStroyTeam((SaveRecord_PlayerData *)(v29 + 2202784));
  if ( v58.seqCtrl.seqCandidateList._Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      v47,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)v58.seqCtrl.seqCandidateList._Mypair._Myval2._Myfirst,
      v58.seqCtrl.seqCandidateList._Mypair._Myval2._Myend - v58.seqCtrl.seqCandidateList._Mypair._Myval2._Myfirst);
    memset(&v58.seqCtrl, 0, 24);
  }
  if ( v58.cmdCheckFunc._Mystorage._Ptrs[7] )
  {
    p_cmdCheckFunc = &v58.cmdCheckFunc;
    LOBYTE(p_cmdCheckFunc) = v58.cmdCheckFunc._Mystorage._Ptrs[7] != (std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int> *)&v58.cmdCheckFunc;
    v58.cmdCheckFunc._Mystorage._Ptrs[7]->_Delete_this(v58.cmdCheckFunc._Mystorage._Ptrs[7], (bool)p_cmdCheckFunc);
  }
}

