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
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battlemain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"

const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5CC90
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0AFF
void LoadCompleteEventPause(); // 0x1401BAFA0
void AppMain::BattlePauseInit(); // 0x1401BB4E0
void AppMain::BattlePauseExit(); // 0x1401BB630
void AppMain::BattlePauseFunc(); // 0x1401BB920
void AppMain::BattlePauseSetTrainingSetting(TrainingSetting & training); // 0x1401BC030
void AppMain::BattlePauseReplayRoundMove(long round); // 0x1401BC130//decompilation failure at 140A5CC90!
//decompilation failure at 1408A0AFF!
void __fastcall AppMain::BattlePauseExit(AppMain *this)
{
  BattleSystem::BattleController *v2; // rbx
  BattleSystem::BattleController *v3; // rax
  UserGameOperation *v4; // rax
  __int64 v5; // rsi
  GameDataInfo *v6; // rcx
  GAME_MODE v7; // edx
  BattleSystem::PauseController *Instance; // rax
  int v9; // ecx
  GAME_MODE v10; // edx
  TrainingSetting *p_m_TrainingSetting; // rbx
  double v12; // xmm0_8
  unsigned __int64 v13; // rcx
  GameDataInfo *v14; // rcx
  BattleSystem::PauseController *v15; // rax
  BattleSystem::BattleController *v16; // [rsp+58h] [rbp+10h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v16 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v16);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  v4 = UserGameOperation::Instance();
  UserGameOperation::clear(v4);
  v5 = *(_QWORD *)NtCurrentTeb()->Reserved1[11];
  v6 = (GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v6 = (GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v6 = (GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  v7 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  if ( (unsigned int)(v7 - 4) > 2 && v7 != GAME_MODE_ONLINETRAINING )
    goto LABEL_13;
  if ( (int)v6 > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v6);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
LABEL_13:
    AppMain::Sound_PauseBattleSE((AppMain *)v6, 0);
  else
    AppMain::Sound_Volume_SE_Modulation((AppMain *)v6, 1.0, 0.25);
  anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_BGM, 1.0, 0.25);
  Instance = BattleSystem::PauseController::GetInstance();
  Instance->m_Pause = 0;
  Instance->m_InputContorollerID = CONTROLLER_ID_NONE;
  v9 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v5 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v9 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v9 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  v10 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  if ( v10 == GAME_MODE_TRAINING )
  {
    if ( v9 > *(_DWORD *)(v5 + 40) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v14);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    if ( `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn )
    {
      v15 = BattleSystem::PauseController::GetInstance();
      v15->m_Pause = 1;
      v15->m_InputContorollerID = CONTROLLER_ID_NONE;
    }
    AppMain::BattlePauseSetTrainingSetting(this, &`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting);
  }
  else if ( ((unsigned int)(v10 - 4) <= 2 || v10 == GAME_MODE_ONLINETRAINING)
         && v2->battleInfo.battleMode == TRAINING
         && (*((_BYTE *)&g_NetworkManager.gamedata.player_data[(unsigned __int8)g_NetworkManager.gamedata.myNo] + 16) & 0x7F)
          % 12 == 1 )
  {
    p_m_TrainingSetting = &GameDataInfo::getInstance()->m_TrainingSetting;
    if ( GameDataInfo::getInstance()->m_TrainingSettingUpdate || p_m_TrainingSetting->m_bRestartOn )
    {
      p_m_TrainingSetting->m_bRestartOn = 1;
      v12 = AgClock::getSystemTime() * 1000000.0;
      v13 = 0i64;
      if ( v12 >= 9.223372036854776e18 )
      {
        v12 = v12 - 9.223372036854776e18;
        if ( v12 < 9.223372036854776e18 )
          v13 = 0x8000000000000000ui64;
      }
      if ( v13 + (unsigned int)(int)v12 - s_OnlineTrainingStartTime >= 0xF4240 )
      {
        AppMain::BattlePauseSetTrainingSetting(this, p_m_TrainingSetting);
        AppMain::OnlineTrainingSendSetting(this, p_m_TrainingSetting);
      }
    }
    else
    {
      AppMain::BattlePauseSetTrainingSetting(this, p_m_TrainingSetting);
    }
    GameDataInfo::getInstance()->m_TrainingSettingUpdate = 0;
  }
}

void __fastcall AppMain::BattlePauseFunc(AppMain *this)
{
  BattleSystem::BattleController *v2; // rdi
  BattleSystem::BattleController *v3; // rax
  GameDataInfo *v4; // rcx
  __int64 v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // rbp
  GfxManager *v8; // rax
  __int64 v9; // rax
  AppMain *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  AppMain *v13; // rcx
  __int64 myNo; // rdx
  __m128i v15; // xmm3
  __int64 v16; // rdx
  GfxManager *v17; // rax
  GfxManager *v18; // rax
  int v19; // eax
  GfxManager *v20; // rax
  BattleSystem::BattleController *v21; // rcx
  GfxManager *v22; // rax
  BattleSystem::BattleController *v23; // rcx
  GfxManager *v24; // rax
  BattleSystem::BattleController *v25; // rcx
  GfxManager *v26; // rax
  int iRoundCount; // edx
  GfxManager *v28; // rax
  GfxManager *v29; // rax
  extension::GFXIMovieStack *v30; // rax
  BattleSystem::BattleController *v31; // [rsp+30h] [rbp-388h]
  GfxManager *v32; // [rsp+30h] [rbp-388h]
  NET_USER_DATA pList[6]; // [rsp+C0h] [rbp-2F8h] BYREF

  if ( BattleSystem::PauseController::GetInstance()->m_Pause )
  {
    v2 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v31 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v31);
      v2 = v3;
      BattleSystem::BattleController::instance = v3;
    }
    if ( ++this->m_SceneTime == 2
      && s_soundIndex.m_keys[22].m_sharedBuffer.m_ptr
      && !extension::SoundList::playSEByName(&this->m_Snd_Lists[5], &s_soundIndex.m_keys[22], 0i64) )
    {
      extension::SoundList::playSEByName(this->m_Snd_Lists, &s_soundIndex.m_keys[22], 0i64);
    }
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
    v5 = 0i64;
    if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_TRAINING
      && *(_QWORD *)&Fw::MatchingTarget::m_RoomId.m_steamid.m_comp
      && !bEntryStatus )
    {
      GfxManager::getInstance();
      v7 = *v6;
      if ( Scaleform::GFx::Movie::IsAvailable(*(Scaleform::GFx::Movie **)(*v6 + 40), "_root.EntryStart") )
        Scaleform::GFx::Movie::Invoke(*(Scaleform::GFx::Movie **)(v7 + 40), "_root.EntryStart", 0i64, 0i64, 0);
      bEntryStatus = 1;
    }
    v8 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v32 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v32);
      GfxManager::instance = v8;
    }
    *(_WORD *)&v8->m_RequestAdvance = 257;
    if ( v2->restartPosition == NONE && v8->m_bQuitGFXMovie )
    {
      GfxManager::getInstance();
      switch ( *(_DWORD *)(v9 + 168) )
      {
        case 0xFFFFFFFF:
          AppMain::BattlePauseExit(this);
          break;
        case 1:
          *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2507448i64) = 1;
          this->bAT_NextBattleExit = 0;
          this->iReserveScene = -1;
          this->m_FadeST = 16;
          this->m_FuncST = 0;
          this->m_FadeExitFunc = 181;
          *(_WORD *)&this->m_bFadeEnd = 0;
          this->m_iFadeFrame = 30;
          *(_QWORD *)&this->m_iFadeColor.rgba = 255i64;
          this->m_iFadeRate = 1000 * this->m_iFadeColor.s.a / 30;
          this->m_bFadeLock = 0;
          this->m_FuncFT = 170;
          if ( GameDataInfo::getInstance()->m_ReplayFlag )
          {
            anonymous_namespace_::SoundVolumeModulation::GetInstance()->modulationParam[1].bDisable = 0;
            this->m_PrevScene = 0;
          }
          goto LABEL_25;
        case 2:
          *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2507448i64) = 1;
          this->bAT_NextBattleExit = 0;
          GfxManager::getInstance();
          *(_BYTE *)(v11 + 257) = 0;
          this->m_FadeST = 24;
          goto LABEL_27;
        case 3:
          *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2507448i64) = 1;
          this->bAT_NextBattleExit = 0;
          GfxManager::getInstance();
          *(_BYTE *)(v12 + 257) = 0;
          this->m_FadeST = 28;
          goto LABEL_27;
        case 4:
          *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2507448i64) = 1;
          this->bAT_NextBattleExit = 0;
          this->m_FadeST = 56;
          goto LABEL_27;
        case 5:
          *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2507448i64) = 1;
          this->bAT_NextBattleExit = 0;
          this->m_FadeST = 160;
LABEL_27:
          this->iReserveScene = -1;
          this->m_FuncST = 0;
          this->m_FadeExitFunc = 181;
          *(_WORD *)&this->m_bFadeEnd = 0;
          this->m_iFadeFrame = 30;
          *(_QWORD *)&this->m_iFadeColor.rgba = 255i64;
          v10 = (AppMain *)(1000 * (unsigned int)this->m_iFadeColor.s.a);
          this->m_iFadeRate = (int)v10 / 30;
          this->m_bFadeLock = 0;
          this->m_FuncFT = 170;
          goto LABEL_25;
        case 9:
          *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2507448i64) = 1;
          this->bAT_NextBattleExit = 0;
          AppMain::SendRoomBack(this, 0);
          this->iReserveScene = -1;
          this->m_FadeST = 148;
          this->m_FuncST = 0;
          this->m_FadeExitFunc = 181;
          *(_WORD *)&this->m_bFadeEnd = 0;
          this->m_iFadeFrame = 30;
          *(_QWORD *)&this->m_iFadeColor.rgba = 255i64;
          v13 = (AppMain *)(1000 * (unsigned int)this->m_iFadeColor.s.a);
          this->m_iFadeRate = (int)v13 / 30;
          this->m_bFadeLock = 0;
          this->m_FuncFT = 170;
          AppMain::StopBGMUtil(v13, 0.5);
          if ( g_NetworkManager.gamedata.onlinePlay && g_NetworkManager.gamedata.gameRule == GAME_RULE_TRAINING )
          {
            memset(pList, 0, sizeof(pList));
            myNo = (unsigned __int8)g_NetworkManager.gamedata.myNo;
            v15 = *(__m128i *)&g_NetworkManager.gamedata.player_data[myNo].steamId;
            NetManager::GetFreeMatchResultMember(
              &g_NetworkManager,
              *((_DWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 4) & 0x7F,
              pList);
            if ( (_mm_cvtsi128_si32(_mm_srli_si128(v15, 12)) & 0x78000000) == 0 )
              v5 = 1i64;
            SetPlayedWith((CSteamID)pList[v5].steamId, v16);
          }
          break;
        case 0xB:
          GfxManager::getInstance();
          GfxManager::ReleaseGFXMovie(v22, 0);
          v2->iNextMissionID = BattleSystem::BattleController::GetPlayingMissionID(v23) + 1;
          break;
        case 0xC:
          GfxManager::getInstance();
          GfxManager::ReleaseGFXMovie(v24, 0);
          v2->iNextMissionID = BattleSystem::BattleController::GetPlayingMissionID(v25) - 1;
          break;
        case 0xD:
          GfxManager::getInstance();
          GfxManager::ReleaseGFXMovie(v20, 0);
          v2->iNextMissionID = BattleSystem::BattleController::GetPlayingMissionID(v21);
          break;
        case 0xE:
          GfxManager::getInstance();
          GfxManager::ReleaseGFXMovie(v17, 0);
          v2->missionSampleMode = REVERSAL;
          break;
        case 0xF:
          GfxManager::getInstance();
          GfxManager::ReleaseGFXMovie(v18, 0);
          v19 = 2;
          if ( v2->roundPhase < DIE )
            v19 = 0;
          v2->restartPosition = v19;
          break;
        case 0x10:
          GfxManager::getInstance();
          GfxManager::ReleaseGFXMovie(v26, 0);
          iRoundCount = -1;
          goto LABEL_48;
        case 0x11:
          GfxManager::getInstance();
          GfxManager::ReleaseGFXMovie(v28, 0);
          iRoundCount = v2->battleInfo.iRoundCount;
          goto LABEL_48;
        case 0x12:
          GfxManager::getInstance();
          GfxManager::ReleaseGFXMovie(v29, 0);
          iRoundCount = v2->battleInfo.iRoundCount - 2;
LABEL_48:
          AppMain::BattlePauseReplayRoundMove(this, iRoundCount);
          break;
        case 0x13:
          *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2507448i64) = 1;
          this->bAT_NextBattleExit = 0;
          this->iReserveScene = -1;
          this->m_FadeST = this->m_PrevScene;
          this->m_FuncST = 0;
          this->m_FadeExitFunc = 181;
          *(_WORD *)&this->m_bFadeEnd = 0;
          this->m_iFadeFrame = 30;
          *(_QWORD *)&this->m_iFadeColor.rgba = 255i64;
          this->m_iFadeRate = 1000 * this->m_iFadeColor.s.a / 30;
          this->m_bFadeLock = 0;
          this->m_FuncFT = 170;
          anonymous_namespace_::SoundVolumeModulation::GetInstance()->modulationParam[1].bDisable = 0;
LABEL_25:
          AppMain::StopBGMUtil(v10, 0.5);
          break;
        default:
          break;
      }
      v30 = extension::GFXIMovieStack::Instance();
      extension::GFXIMovieStack::advance(v30, 0.0);
    }
  }
}

void __fastcall AppMain::BattlePauseInit(AppMain *this)
{
  GfxManager *v2; // rax
  __int64 *v3; // rax
  __int64 v4; // rbx
  GameDataInfo *v5; // rcx
  GAME_MODE v6; // edx
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  LoadCompleteEventPause();
  v2 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v2;
  }
  if ( v2->m_GFXMovie.m_movieProxy.m_ptr )
  {
    v2->m_GFXMovie.m_movieProxy.m_ptr->m_bAdvance = 1;
    if ( v2->m_GFXMovie.m_movieProxy.m_ptr )
      v2->m_GFXMovie.m_movieProxy.m_ptr->m_bRender = 1;
  }
  v3 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v4 = *v3;
  v5 = (GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v3 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v5 = (GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v5 = (GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  v6 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  if ( (unsigned int)(v6 - 4) > 2 && v6 != GAME_MODE_ONLINETRAINING )
    goto LABEL_16;
  if ( (int)v5 > *(_DWORD *)(v4 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v5);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
LABEL_16:
    AppMain::Sound_PauseBattleSE((AppMain *)v5, 1);
  else
    AppMain::Sound_Volume_SE_Modulation((AppMain *)v5, 0.30000001, 0.25);
  anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_BGM, 0.30000001, 0.25);
  this->m_SceneTime = 0;
}

void __fastcall AppMain::BattlePauseReplayRoundMove(AppMain *this, int round)
{
  __int64 v2; // r9
  AppMain *v3; // r8
  __int128 *v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int64 v7; // r8
  signed __int64 v8; // rdx
  signed __int64 v9; // r10
  signed __int64 v10; // r11
  signed __int64 v11; // rbx
  signed __int64 v12; // rdi
  signed __int64 v13; // rsi
  signed __int64 v14; // r14
  signed __int64 v15; // r15
  signed __int64 v16; // r12
  signed __int64 v17; // r13
  ROUND_INFO *v18; // rax
  signed __int64 v19; // rcx
  signed __int64 v20; // r8
  int xVital; // ecx
  __int128 v22; // xmm1
  char v23; // al
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  signed __int64 v26; // [rsp+0h] [rbp-79h]
  signed __int64 v27; // [rsp+8h] [rbp-71h]
  signed __int64 v28; // [rsp+10h] [rbp-69h]
  signed __int64 v29; // [rsp+18h] [rbp-61h]
  signed __int64 v30; // [rsp+20h] [rbp-59h]
  signed __int64 v31; // [rsp+28h] [rbp-51h]
  signed __int64 v32; // [rsp+30h] [rbp-49h]
  unsigned __int64 v33; // [rsp+38h] [rbp-41h]
  __int128 v35; // [rsp+50h] [rbp-29h] BYREF
  __int128 v36; // [rsp+60h] [rbp-19h] BYREF
  __int128 v37[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v38; // [rsp+90h] [rbp+17h]
  int v39; // [rsp+98h] [rbp+1Fh]

  v2 = 2i64;
  v3 = this;
  v4 = &v36;
  v5 = 2i64;
  do
  {
    *(_QWORD *)((char *)v4 - 4) = 0i64;
    *(_QWORD *)((char *)v4 + 4) = 0i64;
    *(_QWORD *)((char *)v4 + 12) = 0i64;
    v4 = (__int128 *)((char *)v4 + 36);
    --v5;
  }
  while ( v5 );
  if ( round > -1 )
  {
    v7 = 76i64 * round;
    v8 = (char *)&v35 - v7 - (char *)replayBattle.m_RoundInfo;
    v33 = v7;
    v9 = (char *)&v35 - v7 + 1 - (char *)replayBattle.m_RoundInfo;
    v10 = (char *)&v35 - v7 + 2 - (char *)replayBattle.m_RoundInfo;
    v11 = (char *)&v35 - v7 + 3 - (char *)replayBattle.m_RoundInfo;
    v12 = (char *)&v35 - v7 + 4 - (char *)replayBattle.m_RoundInfo;
    v13 = (char *)&v35 - v7 + 5 - (char *)replayBattle.m_RoundInfo;
    v14 = (char *)&v35 - v7 + 6 - (char *)replayBattle.m_RoundInfo;
    v15 = (char *)&v35 - v7 + 7 - (char *)replayBattle.m_RoundInfo;
    v16 = (char *)&v35 - v7 + 8 - (char *)replayBattle.m_RoundInfo;
    v17 = (char *)&v35 - v7 + 9 - (char *)replayBattle.m_RoundInfo;
    v18 = &replayBattle.m_RoundInfo[v7 / 0x4C];
    v27 = (char *)&v35 - v7 + 10 - (char *)replayBattle.m_RoundInfo;
    v28 = (char *)&v35 - v7 + 12 - (char *)replayBattle.m_RoundInfo;
    v29 = (char *)&v37[-1] - v7 - (char *)replayBattle.m_RoundInfo;
    v30 = (char *)&v36 - v7 + 4 - (char *)replayBattle.m_RoundInfo;
    v31 = (char *)&v36 - v7 + 8 - (char *)replayBattle.m_RoundInfo;
    v26 = (char *)&v36 - v7 + 12 - (char *)replayBattle.m_RoundInfo;
    v19 = (char *)v37 - v7 - (char *)replayBattle.m_RoundInfo;
    v20 = v27;
    v32 = v19;
    do
    {
      *(&v18->player[0].iMemberReferIndex + v8) = v18->player[0].iMemberReferIndex;
      *(&v18->player[0].iMemberReferIndex + v9) = v18->player[0].iRoundSetCount;
      *(&v18->player[0].iMemberReferIndex + v10) = v18->player[0].iStraightSetCount;
      *(&v18->player[0].iMemberReferIndex + v11) = v18->player[0].iPerfectRoundCount;
      *(&v18->player[0].iMemberReferIndex + v12) = v18->player[0].iMaxExPowerExtend;
      *(&v18->player[0].iMemberReferIndex + v13) = v18->player[0].iFinishSkill[0];
      *(&v18->player[0].iMemberReferIndex + v14) = v18->player[0].iFinishSkill[1];
      *(&v18->player[0].iMemberReferIndex + v15) = v18->player[0].iFinishSkill[2];
      *(&v18->player[0].iMemberReferIndex + v16) = v18->player[0].iFinishSkill[3];
      *(&v18->player[0].iMemberReferIndex + v17) = v18->player[0].iFinishSkill[4];
      *(&v18->player[0].iMemberReferIndex + v20) = v18->player[0].bTakeOverActor;
      xVital = v18->player[0].xVital;
      v18 = (ROUND_INFO *)((char *)v18 + 36);
      *(_DWORD *)(&v18->player[-1].iMemberReferIndex + v28) = xVital;
      *(_DWORD *)(&v18->player[-1].iMemberReferIndex + v29) = v18[-1].player[1].xClimaxTime;
      *(_DWORD *)(&v18->player[-1].iMemberReferIndex + v30) = v18[-1].player[1].xGuardPower;
      *(_DWORD *)(&v18->player[-1].iMemberReferIndex + v31) = v18[-1].player[1].xStunPower;
      *(_DWORD *)(&v18->player[-1].iMemberReferIndex + v26) = v18[-1].player[1].xRecoveryVital;
      *(_DWORD *)(&v18->player[-1].iMemberReferIndex + v32) = *(_DWORD *)&v18[-1].iRoundCount;
      v20 = v27;
      --v2;
    }
    while ( v2 );
    v3 = this;
    v22 = v36;
    LOBYTE(v39) = *(&replayBattle.m_RoundInfo[0].player[2].iMemberReferIndex + v33);
    v23 = *(&replayBattle.m_RoundInfo[0].bExtraRound + v33);
    *(_OWORD *)&this->m_ReplayRoundInfo.playerData[0].iMemberReferIndex = v35;
    BYTE1(v39) = v23;
    v24 = v37[0];
    v6 = v39;
    *(_OWORD *)&this->m_ReplayRoundInfo.playerData[0].xExPower.value = v22;
    v25 = v37[1];
    *(_OWORD *)&this->m_ReplayRoundInfo.playerData[0].xRecoveryVital.value = v24;
    *(_QWORD *)&v24 = v38;
    *(_OWORD *)&this->m_ReplayRoundInfo.playerData[1].xVital.value = v25;
    *(_QWORD *)&this->m_ReplayRoundInfo.playerData[1].xStunPower.value = v24;
  }
  else
  {
    v6 = 0;
    *(_QWORD *)&v3->m_ReplayRoundInfo.playerData[0].iMemberReferIndex = 0i64;
    *(_QWORD *)&v3->m_ReplayRoundInfo.playerData[0].iFinishSkill[3] = 0i64;
    *(_QWORD *)&v3->m_ReplayRoundInfo.playerData[0].xExPower.value = 0i64;
    *(_QWORD *)&v3->m_ReplayRoundInfo.playerData[0].xGuardPower.value = 0i64;
    *(_QWORD *)&v3->m_ReplayRoundInfo.playerData[0].xRecoveryVital.value = 0i64;
    *(_QWORD *)&v3->m_ReplayRoundInfo.playerData[1].iMaxExPowerExtend = 0i64;
    *(_QWORD *)&v3->m_ReplayRoundInfo.playerData[1].xVital.value = 0i64;
    *(_QWORD *)&v3->m_ReplayRoundInfo.playerData[1].xClimaxTime.value = 0i64;
    *(_QWORD *)&v3->m_ReplayRoundInfo.playerData[1].xStunPower.value = 0i64;
  }
  *(_DWORD *)&v3->m_ReplayRoundInfo.iRoundCount = v6;
  v3->m_ReplayRoundMoveFlag = 1;
}

void __fastcall AppMain::BattlePauseSetTrainingSetting(AppMain *this, TrainingSetting *training)
{
  BattleSystem::BattleController *v4; // rbx
  BattleSystem::BattleController *v5; // rax
  __int64 v6; // r8
  int v7; // eax
  InputKeyHistory *m_KeyHistory; // rcx
  __int64 v9; // rdx
  RestrictRingBuffer<InputKeyHistory::History> *Myval2; // rax
  BattleSystem::BattleController *v11; // [rsp+40h] [rbp+8h]

  v4 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v11 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v11);
    v4 = v5;
    BattleSystem::BattleController::instance = v5;
  }
  BattleSystem::BattleController::SetTrainingSetting(v4, training);
  v6 = 2i64;
  if ( training->m_bRestartOn )
  {
    if ( training->m_iRestart )
    {
      if ( training->m_iRestart == CENTER )
      {
        v7 = 2;
        if ( v4->roundPhase < DIE )
          v7 = 0;
      }
      else
      {
        if ( training->m_iRestart != RIGHT )
        {
LABEL_15:
          training->m_bRestartOn = 0;
          goto LABEL_16;
        }
        v7 = 3;
        if ( v4->roundPhase < DIE )
          v7 = 0;
      }
    }
    else
    {
      v7 = v4->roundPhase >= DIE;
    }
    v4->restartPosition = v7;
    goto LABEL_15;
  }
LABEL_16:
  m_KeyHistory = this->m_KeyHistory;
  v9 = 0i64;
  if ( this->m_KeyHistory > (InputKeyHistory *)&this->m_iMissionLoadDataCharaID )
    v6 = 0i64;
  if ( this->m_KeyHistory <= (InputKeyHistory *)&this->m_iMissionLoadDataCharaID )
  {
    do
    {
      Myval2 = m_KeyHistory->pKeyHistory._Mypair._Myval2;
      Myval2->uiDataSize = 0;
      *(_QWORD *)&Myval2->uiBeginIndex = 0i64;
      ++m_KeyHistory;
      ++v9;
    }
    while ( v9 != v6 );
  }
}

void __fastcall LoadCompleteEventPause()
{
  __int64 *v0; // rax
  __int64 v1; // rsi
  GameDataInfo *v2; // rcx
  BattleSystem::BattleController *v3; // rdi
  BattleSystem::BattleController *v4; // rax
  int v5; // ebx
  BattleSystem::BATTLE_MODE battleMode; // eax
  BattleSystem::BATTLE_MODE v7; // eax
  GameDataInfo *v8; // rcx
  __int64 m_InputContorollerID; // rdi
  FighterOperation *v10; // rax
  int *v11; // rax
  int v12; // edi
  GfxManager *v13; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rdi
  UserGameOperation *v15; // rax
  extension::GFXIMovieStack *v16; // rax
  GameDataInfo *v17; // rcx
  GfxManager *v18; // rax
  Scaleform::GFx::Value presult; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h]
  Scaleform::GFx::Value ptr; // [rsp+78h] [rbp-90h] BYREF
  Scaleform::GFx::Value val; // [rsp+A8h] [rbp-60h] BYREF

  v20 = -2i64;
  v0 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v1 = *v0;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v0 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v2);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    presult.pPrev = (Scaleform::GFx::Value *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController((BattleSystem::BattleController *)presult.pPrev);
    v3 = v4;
    BattleSystem::BattleController::instance = v4;
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
  v5 = 5;
  switch ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] )
  {
    case GAME_MODE_TUTORIAL:
      v5 = 1;
      battleMode = v3->battleInfo.battleMode;
      if ( (battleMode == MISSION || battleMode == MISSION_DEVELOP)
        && v3->roundPhase == (WALL|HIT)
        && v3->uiRoundPhaseFrame )
      {
        v5 = 2;
      }
      break;
    case GAME_MODE_STORY:
      v5 = 4;
      break;
    case GAME_MODE_TRAINING:
      v5 = 23;
      bEntryStatus = Fw::MatchingTarget::m_RoomId.m_steamid.m_comp != 0i64;
      break;
    case GAME_MODE_ONLINE:
    case GAME_MODE_FREEMATCH:
    case GAME_MODE_RANKMATCH:
    case GAME_MODE_ONLINETRAINING:
      if ( v3->battleInfo.battleMode == TRAINING )
      {
        v5 = ((*((_BYTE *)&g_NetworkManager.gamedata.player_data[(unsigned __int8)g_NetworkManager.gamedata.myNo] + 16) & 0x7F)
            % 12 != 1)
           + 25;
      }
      else if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_FREE )
      {
        v5 = 40;
        if ( (*((_DWORD *)&g_NetworkManager.gamedata.player_data[(unsigned __int8)g_NetworkManager.gamedata.myNo] + 4) & 0xC0000) != 0 )
          v5 = 21;
      }
      break;
    case GAME_MODE_MISSION_TRIAL:
      v5 = 8;
      v7 = v3->battleInfo.battleMode;
      if ( (v7 == MISSION || v7 == MISSION_DEVELOP) && v3->roundPhase == (WALL|HIT) && v3->uiRoundPhaseFrame )
        v5 = 9;
      break;
    default:
      break;
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v1 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v8);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
    v5 = 7;
  m_InputContorollerID = BattleSystem::PauseController::GetInstance()->m_InputContorollerID;
  v10 = FighterOperation::Instance();
  if ( (unsigned int)(m_InputContorollerID - 1) > 1
    || (v11 = (int *)&v10[-1].m_slots[m_InputContorollerID + 1].operationMapper.m_mapping[4]) == 0i64
    || (v12 = *v11) == 0 )
  {
    v12 = 1;
  }
  if ( (ptr.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
    ptr.pObjectInterface = 0i64;
  }
  ptr.Type = VT_Float;
  ptr.mValue.IValue = v5;
  if ( (val.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
    val.pObjectInterface = 0i64;
  }
  val.Type = VT_Float;
  val.mValue.IValue = v12 - 1;
  v13 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    presult.pPrev = (Scaleform::GFx::Value *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)presult.pPrev);
    GfxManager::instance = v13;
  }
  m_ptr = v13->m_GFXMovie.m_movieProxy.m_ptr;
  if ( v13->m_GFXMovie.m_movieProxy.m_ptr )
  {
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.callScreenMenuInit") )
      Scaleform::GFx::Movie::Invoke(
        m_ptr->m_movie.pObject,
        "_root.callScreenMenuInit",
        (Scaleform::GFx::Value *)&presult.8,
        &ptr,
        2u);
    v13 = GfxManager::instance;
  }
  if ( v5 == 21 )
  {
    if ( !v13 )
    {
      presult.pPrev = (Scaleform::GFx::Value *)operator new(0x108ui64);
      GfxManager::GfxManager((GfxManager *)presult.pPrev);
      GfxManager::instance = v13;
    }
    if ( v13->m_GFXMovie.m_movieProxy.m_ptr )
      v13->m_GFXMovie.m_movieProxy.m_ptr->m_operationGenerator.m_multiControllerMode = Default;
  }
  else
  {
    if ( !v13 )
    {
      presult.pPrev = (Scaleform::GFx::Value *)operator new(0x108ui64);
      GfxManager::GfxManager((GfxManager *)presult.pPrev);
      GfxManager::instance = v13;
    }
    if ( v13->m_GFXMovie.m_movieProxy.m_ptr )
      v13->m_GFXMovie.m_movieProxy.m_ptr->m_operationGenerator.m_multiControllerMode = ByUser;
  }
  if ( !v13 )
  {
    presult.pPrev = (Scaleform::GFx::Value *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)presult.pPrev);
    GfxManager::instance = v13;
  }
  v13->m_bQuitGFXMovie = 0;
  v15 = UserGameOperation::Instance();
  UserGameOperation::clear(v15);
  v16 = extension::GFXIMovieStack::Instance();
  extension::GFXIMovieStack::advance(v16, 0.0);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v1 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v17);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSettingUpdate = 0;
  v18 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    presult.pPrev = (Scaleform::GFx::Value *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)presult.pPrev);
    GfxManager::instance = v18;
  }
  if ( v18->m_GFXMovie.m_movieProxy.m_ptr )
  {
    v18->m_GFXMovie.m_movieProxy.m_ptr->m_bAdvance = 0;
    if ( v18->m_GFXMovie.m_movieProxy.m_ptr )
      v18->m_GFXMovie.m_movieProxy.m_ptr->m_bRender = 0;
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

