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
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/replace.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netutl.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/crc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"

long long sendMessageCount; // 0x140AC3E38
BattleReplay replayBattle; // 0x140AC3E40
std::piecewise_construct_t std::piecewise_construct; // 0x14089E3A5
NetBattleCommandManager * pBtlNet; // 0x140AC3E30
long NetworkDelayFrame; // 0x140AA37BC
NetBattleCommandManager BtlNet; // 0x140A5C2C0
void(*BtlNet$initializer$)(); // 0x1407407F8
SEND_MESSAGE sendMessage[2]; // 0x140AC42E0
void SendBattleKey(const long isReq, const long controller, const long time, BATTLE_COMMAND_PACKET * pCmdPacket); // 0x14015FF40
void SendBattleKeyTcp(const long isReq, const long controller, const long time, BATTLE_COMMAND_PACKET * pCmdPacket, long len); // 0x140160090
void BTLNT_Start(); // 0x1401601E0
void BTLNT_Cleanup(bool replayBattleFlag); // 0x140160310
void BTLNT_StartBattle(); // 0x140160390
void BTLNT_UpdateKeyRequest(long nController); // 0x1401604F0
void NetBattleCommandManager::Initialize(bool onlineFlag, bool replayFlag); // 0x1401607A0
bool NetBattleCommandManager::getKey(long requestTime, BATTLE_COMMAND_PACKET * pSendCmdPacket, long getKeyNum); // 0x140160950
void NetBattleCommandManager::updateKeyLog(long playerId, unsigned char * pKey, long time); // 0x140160A10
bool NetBattleCommandManager::btlnt_Phase_Update(BT_NET_PHASE phaseId); // 0x140160B00
bool NetBattleCommandManager::parse(); // 0x140160BA0
void NetBattleCommandManager::SetReplayDataInfo(long long tick, NET_USER_DATA * pMemberList); // 0x140160D90
void NetBattleCommandManager::SetReplayRoundCommandBuffer(long round, BATTLE_RESULT_TYPE result); // 0x1401613C0
void NetBattleCommandManager::SetReplayRoundInfo(long round, const BattleSystem::BattleRoundInfo & roundInfo); // 0x140161510
void AddOpponentList(unsigned long long tick, NET_USER_DATA * pMemberList); // 0x140161740
void AddOpponentList2(unsigned long long tick, NET_USER_DATA * pMemberList); // 0x140161B60
bool SetReplayDataSaveData(); // 0x140161C30
void SetCommandBufferForReplay(long round); // 0x140161CC0//decompilation failure at 140AC3E38!
//decompilation failure at 140AC3E40!
//decompilation failure at 14089E3A5!
//decompilation failure at 140AC3E30!
//decompilation failure at 140AA37BC!
//decompilation failure at 140A5C2C0!
//decompilation failure at 1407407F8!
//decompilation failure at 140AC42E0!
void __fastcall AddOpponentList2(unsigned __int64 tick, NET_USER_DATA *pMemberList)
{
  AppMain *v2; // rsi
  GAME_MODE v4; // ecx
  int i; // edi
  GameDataInfo *v6; // rcx
  Fw::ONLINEID pOnlineId; // [rsp+30h] [rbp+8h] BYREF

  pOnlineId.data = tick;
  v2 = *(AppMain **)&AppMain::pApp;
  if ( *(_QWORD *)&AppMain::pApp )
  {
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
    v4 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
    if ( (unsigned int)(v4 - 4) <= 2 || v4 == GAME_MODE_ONLINETRAINING )
    {
      for ( i = 0; i < 2; ++i )
      {
        if ( pMemberList->steamId == Fw::NetworkCommon::m_NpOnlineId.data )
          break;
        pOnlineId.data = pMemberList->steamId;
        AppMain::SetOpponentList(v2, &pOnlineId, BATTLE_RESULT_TYPE_NONE, g_NetworkManager.gamedata.gameRule);
        ++pMemberList;
      }
    }
  }
}

void __fastcall AddOpponentList(unsigned __int64 tick, NET_USER_DATA *pMemberList)
{
  __int64 v4; // rsi
  GameDataInfo *v5; // rcx
  GAME_MODE v6; // ecx
  BattleSystem::BattleController *v7; // r13
  BattleSystem::BattleController *v8; // rax
  GAME_RULE v9; // er9
  NETWORK_MATCHING_TYPE matchMode; // er10
  char *v11; // rcx
  __int64 v12; // r8
  CHARACTER_NO *v13; // rdx
  CHARACTER_NO *v14; // rdx
  char gameRule; // r12
  __int32 v16; // er10
  __int64 v17; // rbx
  __int64 v18; // r15
  __int32 v19; // er9
  __int32 v20; // er9
  __int64 v21; // r14
  _DWORD *v22; // rdi
  __int64 v23; // r10
  __int64 v24; // rax
  _QWORD *v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 *v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // r8
  __int128 *v32; // rax
  __int64 v33; // rdx
  __int128 v34; // xmm2
  __int128 v35; // xmm3
  __int64 v36; // xmm4_8
  Fw::ONLINEID pOnlineId; // [rsp+20h] [rbp-40h] BYREF
  __int64 v38; // [rsp+28h] [rbp-38h]
  __int128 v39; // [rsp+30h] [rbp-30h]
  __int128 v40; // [rsp+40h] [rbp-20h] BYREF
  __int64 v41; // [rsp+50h] [rbp-10h]

  v38 = -2i64;
  v4 = *(_QWORD *)&AppMain::pApp;
  if ( !*(_QWORD *)&AppMain::pApp )
    return;
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
  v6 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  if ( (unsigned int)(v6 - 4) > 2 && v6 != GAME_MODE_ONLINETRAINING )
    return;
  v7 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    pOnlineId.data = (unsigned __int64)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController((BattleSystem::BattleController *)pOnlineId.data);
    v7 = v8;
    BattleSystem::BattleController::instance = v8;
  }
  v9 = `GameDataInfo::getInstance'::`2'::instance.m_GameRule[`GameDataInfo::getInstance'::`2'::instance.m_GameRuleIndex];
  *(_QWORD *)&v39 = 0i64;
  v40 = 0ui64;
  v41 = 0i64;
  *((_QWORD *)&v39 + 1) = tick;
  matchMode = g_NetworkManager.gamedata.matchMode;
  v11 = (char *)&v40 + 2;
  v12 = 2i64;
  if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_RANK )
  {
    v13 = &v7->resultMember.rankBefore[0].rankMatchCharacterNo[1];
    do
    {
      *(v11 - 1) = *((_BYTE *)v13 - 4);
      *v11 = *(_BYTE *)v13;
      v11[1] = *((_BYTE *)v13 + 4);
      v13 += 45;
      v11 += 3;
      --v12;
    }
    while ( v12 );
  }
  else
  {
    v14 = &v7->resultMember.freematch[0].rankMatchCharacterNo[1];
    do
    {
      *(v11 - 1) = *((_BYTE *)v14 - 4);
      *v11 = *(_BYTE *)v14;
      v11[1] = *((_BYTE *)v14 + 4);
      v14 += 110;
      v11 += 3;
      --v12;
    }
    while ( v12 );
  }
  BYTE7(v40) = v7->resultMember.battleWinnerID;
  gameRule = g_NetworkManager.gamedata.gameRule;
  BYTE9(v40) = g_NetworkManager.gamedata.gameRule;
  v16 = matchMode - 1;
  if ( v16 )
  {
    if ( v16 == 1 )
      BYTE8(v40) = 5;
  }
  else
  {
    BYTE8(v40) = 6;
  }
  BYTE10(v40) = (*(_DWORD *)(v4 + 2187768) & 0x100000) != 0;
  if ( LOBYTE(g_NetworkManager.gamedata.gameRule) == 2 )
    BYTE11(v40) = ((*(_DWORD *)(v4 + 2187760) >> 11) & 3) - 1;
  else
    BYTE11(v40) = 0;
  if ( ((*(_DWORD *)(v4 + 2187800) >> 3) & 3) == 1 )
  {
    HIBYTE(v40) = 3;
  }
  else if ( ((*(_DWORD *)(v4 + 2187800) >> 3) & 3) == 2 )
  {
    HIBYTE(v40) = 4;
  }
  else
  {
    HIBYTE(v40) = 0;
  }
  v17 = 0i64;
  v18 = 0i64;
  if ( v9 )
  {
    v19 = v9 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 != 1 )
          goto LABEL_35;
        goto LABEL_34;
      }
      v18 = 6i64;
      v21 = 0i64;
    }
    else
    {
      v18 = 2i64;
      v21 = 0i64;
    }
LABEL_36:
    v22 = (_DWORD *)((char *)pMemberList + 16);
    while ( 1 )
    {
      if ( ((*(_DWORD *)(v4 + 2187768) ^ *v22) & 0x100000) != 0 )
      {
        pOnlineId.data = *((_QWORD *)v22 - 2);
        AppMain::SetOpponentList(
          (AppMain *)v4,
          &pOnlineId,
          v7->resultMember.onlineResult,
          g_NetworkManager.gamedata.gameRule);
        *(_QWORD *)&v39 = *((_QWORD *)v22 - 2);
        if ( ((v22[8] >> 3) & 3) == 1 )
        {
          LOBYTE(v41) = 3;
        }
        else if ( ((v22[8] >> 3) & 3) == 2 )
        {
          LOBYTE(v41) = 4;
        }
        else
        {
          LOBYTE(v41) = 0;
        }
        LOBYTE(v40) = (*(v22 - 1) >> 14) & 0x7F;
        BYTE12(v40) = (*v22 & 0x100000) != 0;
        if ( gameRule == 2 )
          BYTE13(v40) = ((*(v22 - 2) >> 11) & 3) - 1;
        else
          BYTE13(v40) = 0;
        v23 = -1i64;
        v24 = 0i64;
        v25 = (_QWORD *)(v4 + 2288480);
        while ( *v25 )
        {
          ++v24;
          v25 += 5;
          if ( v24 >= 100 )
            goto LABEL_51;
        }
        v23 = v24;
        if ( v24 != -1 )
        {
LABEL_56:
          v30 = 5 * v23;
          *(_OWORD *)(v4 + 8 * v30 + 2288480) = v39;
          *(_OWORD *)(v4 + 8 * v30 + 2288496) = v40;
          *(_QWORD *)(v4 + 8 * v30 + 2288512) = v41;
          goto LABEL_57;
        }
LABEL_51:
        v26 = *(_QWORD *)(v4 + 2288488);
        v27 = 1i64;
        v28 = (unsigned __int64 *)(v4 + 2288528);
        v29 = 99i64;
        do
        {
          if ( *v28 < v26 )
          {
            v26 = *v28;
            v23 = v27;
          }
          ++v27;
          v28 += 5;
          --v29;
        }
        while ( v29 );
        if ( v23 != -1 )
          goto LABEL_56;
      }
LABEL_57:
      ++v21;
      v22 = (_DWORD *)((char *)v22 + 118);
      if ( v21 >= v18 )
        goto LABEL_58;
    }
  }
LABEL_34:
  v18 = 2i64;
LABEL_35:
  v21 = 0i64;
  if ( v18 )
    goto LABEL_36;
LABEL_58:
  v31 = 99i64;
  do
  {
    if ( v17 < 99 )
    {
      v32 = (__int128 *)(v4 + 2292400);
      v33 = 99 - v17;
      do
      {
        if ( *((_QWORD *)v32 + 1) < *((_QWORD *)v32 + 6) )
        {
          v34 = *v32;
          v35 = v32[1];
          v36 = *((_QWORD *)v32 + 4);
          *v32 = *(__int128 *)((char *)v32 + 40);
          v32[1] = *(__int128 *)((char *)v32 + 56);
          *((_QWORD *)v32 + 4) = *((_QWORD *)v32 + 9);
          *(__int128 *)((char *)v32 + 40) = v34;
          *(__int128 *)((char *)v32 + 56) = v35;
          *((_QWORD *)v32 + 9) = v36;
        }
        v32 = (__int128 *)((char *)v32 - 40);
        --v33;
      }
      while ( v33 );
    }
    ++v17;
    --v31;
  }
  while ( v31 );
}

void __fastcall BTLNT_Cleanup(bool replayBattleFlag)
{
  NetBattleCommandManager *v1; // rbx
  unsigned int (*m_BufferSize)[2]; // rax
  __int64 v3; // rdi

  v1 = pBtlNet;
  if ( pBtlNet )
  {
    if ( replayBattleFlag )
    {
      m_BufferSize = replayBattle.m_BufferSize;
      do
      {
        *((_QWORD *)m_BufferSize + 136) = 0i64;
        *(_QWORD *)m_BufferSize++ = 0i64;
      }
      while ( (__int64)m_BufferSize < (__int64)replayBattle.m_UserInfo );
    }
    v3 = 2i64;
    do
    {
      if ( v1->keyLogMan[0].pKeyLog )
      {
        aligned_free(v1->keyLogMan[0].pKeyLog);
        v1->keyLogMan[0].pKeyLog = 0i64;
      }
      v1 = (NetBattleCommandManager *)((char *)v1 + 24);
      --v3;
    }
    while ( v3 );
  }
}

void BTLNT_Start(void)
{
  GameDataInfo *v0; // rcx
  _DWORD *v1; // rdi
  GAME_MODE v2; // edx
  bool v3; // bl
  bool m_ReplayFlag; // r8
  NetBattleCommandManager *v5; // rax

  v0 = (GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  v1 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v1 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v0 = (GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v0 = (GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  v2 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  v3 = (unsigned int)(v2 - 4) <= 2 || v2 == GAME_MODE_ONLINETRAINING;
  if ( (int)v0 > *v1 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v0);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  m_ReplayFlag = `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag;
  if ( !v3 || `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
  {
    if ( pBtlNet )
    {
      pBtlNet->phase = BT_NET_PHASE_STANDALONE;
      NetBattleCommandManager::Initialize((NetBattleCommandManager *)v0, v3, m_ReplayFlag);
    }
  }
  else
  {
    v5 = pBtlNet;
    if ( pBtlNet )
    {
      if ( pBtlNet->setupFlag )
      {
        pBtlNet->phase = BT_NET_PHASE_WAIT;
      }
      else
      {
        *(_QWORD *)&pBtlNet->phase = 1i64;
        v5->setupFlag = 1;
      }
    }
  }
}

void BTLNT_StartBattle(void)
{
  __int64 v0; // rbx
  int v1; // eax
  bool m_ReplayFlag; // di
  NetBattleCommandManager *v3; // rcx
  bool v4; // al
  NetBattleCommandManager *v5; // rax
  double v6; // xmm0_8
  unsigned __int64 v7; // rax
  GameDataInfo *v8; // rcx
  GameDataInfo *v9; // rcx

  if ( pBtlNet )
  {
    v0 = *(_QWORD *)NtCurrentTeb()->Reserved1[11];
    v1 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v0 + 40) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v1 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v8);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        v1 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      }
    }
    m_ReplayFlag = `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag;
    if ( v1 > *(_DWORD *)(v0 + 40) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v9);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    v3 = (NetBattleCommandManager *)(unsigned int)`GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
    if ( (unsigned int)((_DWORD)v3 - 4) <= 2 || (v4 = 0, (_DWORD)v3 == 11) )
      v4 = 1;
    NetBattleCommandManager::Initialize(v3, v4, m_ReplayFlag);
    v5 = pBtlNet;
    pBtlNet->tcp_send_time = -1;
    v5->tcp_send_time_crc = 0;
    v6 = AgClock::getSystemTime() * 1000000.0;
    v7 = 0i64;
    if ( v6 >= 9.223372036854776e18 )
    {
      v6 = v6 - 9.223372036854776e18;
      if ( v6 < 9.223372036854776e18 )
        v7 = 0x8000000000000000ui64;
    }
    pBtlNet->lastRecvTimeForTimeout = v7 + (unsigned int)(int)v6;
  }
}

void __fastcall BTLNT_UpdateKeyRequest(int nController)
{
  __int64 v1; // r14
  GAME_MODE v2; // ecx
  NetBattleCommandManager *v3; // rcx
  unsigned __int8 v4; // r9
  int seqTime2; // esi
  int v6; // er8
  int v7; // edx
  int v8; // ecx
  __int64 v9; // r8
  NetBattleCommandManager *v10; // rcx
  NetBattleCommandManager *v11; // rbp
  int tcp_send_time; // eax
  int len; // edi
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 key; // rcx
  NetBattleCommandManager *v17; // rax
  GameDataInfo *v18; // rcx
  BATTLE_COMMAND_PACKET pSendCmdPacket[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v20; // [rsp+38h] [rbp-60h]
  __int64 v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+48h] [rbp-50h]
  __int64 v23; // [rsp+50h] [rbp-48h]
  __int64 v24; // [rsp+58h] [rbp-40h]
  __int64 v25; // [rsp+60h] [rbp-38h]
  int v26; // [rsp+68h] [rbp-30h]

  v1 = nController;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v18);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v2 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  if ( (unsigned int)(v2 - 4) <= 2 || v2 == GAME_MODE_ONLINETRAINING )
  {
    v3 = pBtlNet;
    *(_QWORD *)&pSendCmdPacket[0].key = 0i64;
    v20 = 0i64;
    v21 = 0i64;
    v22 = 0i64;
    v23 = 0i64;
    v24 = 0i64;
    v25 = 0i64;
    v26 = 0;
    v4 = pBtlNet->sendKeyBuffer[v1];
    seqTime2 = pBtlNet->seqTime2;
    pBtlNet->sendTime = seqTime2;
    v3->sendKeyBuffer[v1] = 0;
    v6 = v3->seqTime2;
    if ( v6 )
      v7 = v6 % 100;
    else
      v7 = 0;
    if ( !v3->logBuffer[v7].flag || v3->logBuffer[v7].time_buf_log != v6 || v3->logBuffer[v7].key_buf_log == v4 )
    {
      v3->logBuffer[v7].playerId_buf_log = v1;
      v3->logBuffer[v7].key_buf_log = v4;
      v3->logBuffer[v7].time_buf_log = v6;
      v3->logBuffer[v7].flag = 1;
    }
    NetBattleCommandManager::getKey(v3, seqTime2, pSendCmdPacket, 5);
    SendBattleKey(v8, v1, seqTime2, pSendCmdPacket);
    v9 = sendMessageCount;
    v10 = (NetBattleCommandManager *)(60 * (sendMessageCount / 60));
    if ( (NetBattleCommandManager *)sendMessageCount == v10 )
    {
      v11 = pBtlNet;
      *(_QWORD *)&pSendCmdPacket[0].key = 0i64;
      v20 = 0i64;
      v21 = 0i64;
      v22 = 0i64;
      v23 = 0i64;
      v24 = 0i64;
      v25 = 0i64;
      v26 = 0;
      tcp_send_time = pBtlNet->tcp_send_time;
      if ( tcp_send_time == -1 )
        len = seqTime2 + 1;
      else
        len = seqTime2 - tcp_send_time;
      if ( len > 60 )
        len = 60;
      NetBattleCommandManager::getKey(v10, seqTime2, pSendCmdPacket, len);
      v14 = 0i64;
      v15 = 0xFFFF;
      do
      {
        key = pSendCmdPacket[v14++].key;
        v15 = (v15 << 8) ^ crctable[key ^ BYTE1(v15)];
      }
      while ( v14 < 60 );
      if ( len > 0 && (v11->tcp_send_time != seqTime2 || v11->tcp_send_time_crc != (_WORD)v15) )
      {
        SendBattleKeyTcp(key, v1, seqTime2, pSendCmdPacket, len);
        v17 = pBtlNet;
        pBtlNet->tcp_send_time = seqTime2;
        v17->tcp_send_time_crc = v15;
      }
      v9 = 0i64;
    }
    sendMessageCount = v9 + 1;
  }
}

void __fastcall NetBattleCommandManager::Initialize(NetBattleCommandManager *this, bool onlineFlag, bool replayFlag)
{
  NetBattleCommandManager *v3; // r13
  __int64 v4; // rbp
  __int64 v7; // r14
  int v8; // esi
  int *p_keyLogEnd; // rbx
  int *v10; // rdi
  void *v11; // rax
  int m_DelayFrame; // er11
  unsigned __int8 *recvKeyBuffer; // rax
  __int64 i; // r10
  int j; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  char v18; // cl
  int *logBuffer; // rbx

  v3 = pBtlNet;
  v4 = 2i64;
  v7 = 2i64;
  v8 = 0;
  p_keyLogEnd = &pBtlNet->keyLogMan[0].keyLogEnd;
  v10 = &pBtlNet->keyLogMan[0].keyLogEnd;
  do
  {
    if ( *(_QWORD *)(v10 - 3) || (v11 = aligned_malloc(0x20000ui64, 0x20ui64), (*(_QWORD *)(v10 - 3) = v11) != 0i64) )
      memset(*(void **)(v10 - 3), 0, 0x20000ui64);
    *(_QWORD *)(v10 - 1) = 0i64;
    v10[1] = 0;
    *((_BYTE *)v10 + 8) = 0;
    v10 += 6;
    --v7;
  }
  while ( v7 );
  if ( onlineFlag )
  {
    if ( replayFlag )
    {
      m_DelayFrame = replayBattle.m_DelayFrame;
      NetworkDelayFrame = replayBattle.m_DelayFrame;
    }
    else
    {
      m_DelayFrame = LOBYTE(g_NetworkManager.gamedata.addDelayFrame);
      NetworkDelayFrame = LOBYTE(g_NetworkManager.gamedata.addDelayFrame);
    }
  }
  else
  {
    m_DelayFrame = 0;
    NetworkDelayFrame = 0;
  }
  v3->seqTime = m_DelayFrame;
  recvKeyBuffer = v3->recvKeyBuffer;
  v3->seqTime2 = m_DelayFrame;
  v3->sendTime = 0;
  do
  {
    *(recvKeyBuffer - 2) = 0;
    *recvKeyBuffer++ = 0;
    --v4;
  }
  while ( v4 );
  for ( i = 0i64; i < 2; ++i )
  {
    for ( j = 0; j < m_DelayFrame; ++j )
    {
      if ( j >= 0 && (unsigned __int64)i <= 1 )
      {
        v16 = *(_QWORD *)(p_keyLogEnd - 3);
        if ( v16 )
        {
          if ( p_keyLogEnd[1] < j )
            p_keyLogEnd[1] = j;
          v17 = j & 0x3FFF;
          if ( j > *(_DWORD *)(v16 + 8 * v17) && *p_keyLogEnd - (int)v17 >= -10 )
          {
            *(_BYTE *)(v16 + 8i64 * *p_keyLogEnd + 4) = 0;
            *(_DWORD *)(*(_QWORD *)(p_keyLogEnd - 3) + 8 * v17) = j;
            *p_keyLogEnd = ((unsigned __int16)*p_keyLogEnd + 1) & 0x3FFF;
            v18 = 1;
            if ( j < 0x3FFF )
              v18 = *((_BYTE *)p_keyLogEnd + 8);
            *((_BYTE *)p_keyLogEnd + 8) = v18;
          }
        }
      }
    }
    p_keyLogEnd += 6;
  }
  logBuffer = (int *)v3->logBuffer;
  memset(v3->logBuffer, 0, sizeof(v3->logBuffer));
  do
  {
    *logBuffer = v8;
    logBuffer += 2;
    ++v8;
  }
  while ( v8 < 100 );
}

void __fastcall SendBattleKey(const int isReq, const int controller, const int time, BATTLE_COMMAND_PACKET *pCmdPacket)
{
  int v4; // ebx
  unsigned int v5; // er8
  unsigned __int8 key; // al
  __int64 v7; // r9
  __int64 v8; // rcx
  int optNum; // eax
  NetBattleCommandManager *v10; // rdi
  unsigned __int8 *p_key; // r8
  Fw::ONLINEID pNameList; // [rsp+30h] [rbp-78h] BYREF

  sendMessage[0].msgBattleCommand.time = time;
  sendMessage[0].msgType = 17;
  sendMessage[0].msgTableComplete.common.stageTelop[5] = controller;
  v4 = 0;
  v5 = 0xFFFF;
  sendMessage[0].msgVoiceData.bufSize = *(_DWORD *)&pCmdPacket->key;
  key = pCmdPacket[4].key;
  v7 = 0i64;
  sendMessage[0].msgTableComplete.common.stageTelop[4] = key;
  sendMessage[0].msgBattleCommand.crc = 0;
  do
  {
    v8 = *(&sendMessage[0].msgJoinComplete.memberNum + v7++);
    v5 = (v5 << 8) ^ crctable[v8 ^ BYTE1(v5)];
  }
  while ( v7 < 12 );
  sendMessage[0].msgBattleCommand.crc = v5;
  if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_RANK )
  {
    NetManager::SendMessageW(&g_NetworkManager, sendMessage, 0i64, 1, 0);
  }
  else if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_FREE )
  {
    optNum = NetManager::GetBattleMemberNameList(
               (NetManager *)(unsigned int)(g_NetworkManager.gamedata.matchMode - 1),
               &pNameList);
    if ( optNum > 0 )
      NetManager::SendMessageW(&g_NetworkManager, sendMessage, &pNameList, 2, optNum);
  }
  v10 = pBtlNet;
  p_key = &sendMessage[0].msgBattleCommand.cmd[0].key;
  do
  {
    if ( v10 )
      NetBattleCommandManager::updateKeyLog(
        v10,
        sendMessage[0].msgTableComplete.common.stageTelop[5],
        p_key,
        sendMessage[0].msgBattleCommand.time - v4);
    ++v4;
    ++p_key;
  }
  while ( v4 < 5 );
}

void __fastcall SendBattleKeyTcp(
        const int isReq,
        const int controller,
        const int time,
        BATTLE_COMMAND_PACKET *pCmdPacket,
        int len)
{
  int v6; // eax
  int optNum; // eax
  int v8[4]; // [rsp+30h] [rbp-88h] BYREF
  Fw::ONLINEID pNameList; // [rsp+40h] [rbp-78h] BYREF

  sendMessage[1].msgTableComplete.common.stageTelop[0] = controller;
  sendMessage[1].msgBattleCommand.time = time;
  sendMessage[1].msgType = 18;
  sendMessage[1].msgTableComplete.common.stageTelop[1] ^= (len ^ sendMessage[1].msgTableComplete.common.stageTelop[1]) & 0x7F;
  v8[0] = 60;
  if ( (unsigned int)compress((char *)&sendMessage[1].msgBattleLeave + 7, v8, pCmdPacket, (unsigned int)len)
    || v8[0] <= 0
    || v8[0] >= len )
  {
    *(_OWORD *)((char *)&sendMessage[1].msgBattleLeave + 7) = *(_OWORD *)&pCmdPacket->key;
    *(_OWORD *)((char *)&sendMessage[1].msgRoomFull + 23) = *(_OWORD *)&pCmdPacket[16].key;
    *(_OWORD *)((char *)&sendMessage[1].msgPing + 39) = *(_OWORD *)&pCmdPacket[32].key;
    *(_QWORD *)((char *)&sendMessage[1].msgPing + 55) = *(_QWORD *)&pCmdPacket[48].key;
    v6 = *(_DWORD *)&pCmdPacket[56].key;
    sendMessage[1].msgTableComplete.common.stageTelop[1] &= ~0x80u;
    *(_DWORD *)((char *)&sendMessage[1].msgPing + 63) = v6;
    sendMessage[1].msgTableComplete.common.stageTelop[2] = len;
  }
  else
  {
    sendMessage[1].msgTableComplete.common.stageTelop[1] |= 0x80u;
    sendMessage[1].msgTableComplete.common.stageTelop[2] = v8[0];
  }
  if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_RANK )
  {
    NetManager::SendMessageW(&g_NetworkManager, &sendMessage[1], 0i64, 1, 0);
  }
  else if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_FREE )
  {
    optNum = NetManager::GetBattleMemberNameList(
               (NetManager *)(unsigned int)(g_NetworkManager.gamedata.matchMode - 1),
               &pNameList);
    if ( optNum > 0 )
      NetManager::SendMessageW(&g_NetworkManager, &sendMessage[1], &pNameList, 2, optNum);
  }
}

void __fastcall SetCommandBufferForReplay(int round)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 m_ReplayNo; // r8
  BattleReplay *v4; // rax
  __int128 *v5; // rdx
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // er9
  GameDataInfo *v13; // rcx

  v1 = *(_QWORD *)&AppMain::pApp;
  v2 = round;
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
  m_ReplayNo = (int)`GameDataInfo::getInstance'::`2'::instance.m_ReplayNo;
  if ( !(_DWORD)v2 )
  {
    v4 = &replayBattle;
    v5 = (__int128 *)(1184i64 * (int)`GameDataInfo::getInstance'::`2'::instance.m_ReplayNo + v1 + 2388168);
    v6 = 8i64;
    do
    {
      v4 = (BattleReplay *)((char *)v4 + 128);
      v7 = *v5;
      v5 += 8;
      *(_OWORD *)&v4[-1].m_StageTelop[16] = v7;
      *(_OWORD *)&v4[-1].m_StageTelop[32] = *(v5 - 7);
      *(_OWORD *)&v4[-1].m_StageTelop[48] = *(v5 - 6);
      *(_OWORD *)v4[-1].m_pBuffer = *(v5 - 5);
      *(_OWORD *)&v4[-1].m_pBuffer[2] = *(v5 - 4);
      *(_OWORD *)&v4[-1].m_pBuffer[4] = *(v5 - 3);
      *(_OWORD *)&v4[-1].m_UploadOnlineId.data = *(v5 - 2);
      *(_OWORD *)&v4[-1].m_Lock = *(v5 - 1);
      --v6;
    }
    while ( v6 );
    *(_OWORD *)&v4->m_Date = *v5;
    *(_OWORD *)&v4->m_BufferSize[0][0] = v5[1];
    *(_OWORD *)&v4->m_BufferSize[2][0] = v5[2];
    *(_OWORD *)&v4->m_BufferSize[4][0] = v5[3];
    *(_OWORD *)&v4->m_UserInfo[0][0].onlineId.data = v5[4];
  }
  v8 = 148 * m_ReplayNo;
  v9 = v2;
  v10 = (unsigned __int8)v2 + v8;
  v11 = *(_DWORD *)(v1 + 8 * v10 + 2388184);
  v12 = *(_DWORD *)(v1 + 8 * v10 + 2388188);
  replayBattle.m_pBuffer[v9] = *(char **)(v1 + 8 * v10 + 2389272);
  replayBattle.m_BufferSize[v9][0] = v11;
  replayBattle.m_BufferSize[v9][1] = v12;
}

void __fastcall NetBattleCommandManager::SetReplayDataInfo(
        NetBattleCommandManager *this,
        __int64 tick,
        NET_USER_DATA *pMemberList)
{
  BattleSystem::BattleController *v5; // r13
  BattleSystem::BattleController *v6; // rax
  GameDataInfo *Instance; // rsi
  GAME_RULE v8; // er14
  GameDataInfo *v9; // rax
  GAME_MODE v10; // edx
  REPLAY_USER_INFO (*m_UserInfo)[3]; // rbx
  char *v12; // rdi
  BattleSystem::BattleController **v13; // r15
  char *v14; // r14
  __int64 v15; // rbp
  const char *CString; // rax
  __int64 j; // r15
  __int64 v18; // r14
  unsigned __int8 *v19; // rbx
  CHARACTER_NO *v20; // rdi
  CHARACTER_COLOR v21; // ebp
  int v22; // eax
  __int64 v23; // rbp
  __int64 v24; // r9
  unsigned int *v25; // r8
  int v26; // eax
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 i; // r15
  __int64 v31; // r14
  unsigned __int8 *p_characterColorId; // rdi
  CHARACTER_NO *v33; // rbx
  CHARACTER_COLOR v34; // ebp
  int v35; // eax
  __int128 v36; // xmm3
  __int128 v37; // xmm0
  __int64 v38; // xmm1_8
  int v39; // eax
  char v40; // cl
  unsigned __int8 v41; // [rsp+20h] [rbp-E8h]
  BattleSystem::BattleController *v42[3]; // [rsp+28h] [rbp-E0h] BYREF
  char destination[128]; // [rsp+40h] [rbp-C8h] BYREF

  v42[1] = (BattleSystem::BattleController *)-2i64;
  if ( !*(_QWORD *)&AppMain::pApp || replayBattle.m_Over )
    return;
  v5 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v42[0] = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v42[0]);
    v5 = v6;
    BattleSystem::BattleController::instance = v6;
  }
  Instance = GameDataInfo::getInstance();
  v8 = Instance->m_GameRule[Instance->m_GameRuleIndex];
  v41 = v8;
  replayBattle.m_Ver = 16;
  replayBattle.m_Date = tick;
  replayBattle.m_UploadDate = 0i64;
  replayBattle.m_GameMode = Instance->m_GameMode[Instance->m_GameModeIndex];
  v9 = GameDataInfo::getInstance();
  v10 = v9->m_GameMode[v9->m_GameModeIndex];
  if ( (unsigned int)(v10 - 4) <= 2 || v10 == GAME_MODE_ONLINETRAINING )
  {
    v23 = 0i64;
    switch ( v8 )
    {
      case GAME_RULE_SINGLE:
        goto LABEL_32;
      case GAME_RULE_TEAM:
        v23 = 2i64;
        v24 = 0i64;
        break;
      case GAME_RULE_PARTY:
        v23 = 6i64;
        v24 = 0i64;
        break;
      case GAME_RULE_TRAINING:
LABEL_32:
        v23 = 2i64;
        goto LABEL_33;
      default:
LABEL_33:
        v24 = 0i64;
        if ( !v23 )
          goto LABEL_44;
        break;
    }
    v25 = (unsigned int *)((char *)pMemberList + 16);
    do
    {
      if ( v23 == 2 )
        v26 = 0;
      else
        v26 = ((*(v25 - 2) >> 11) & 3) - 1;
      replayBattle.m_UserInfo[0][2 * ((*v25 >> 20) & 1) + v26 + ((*v25 >> 20) & 1)].onlineId.data = *((_QWORD *)v25 - 2);
      replayBattle.m_UserInfo[0][2 * ((*v25 >> 20) & 1) + v26 + ((*v25 >> 20) & 1)].grade = (*(v25 - 1) >> 21) & 0x3F;
      replayBattle.m_UserInfo[0][2 * ((*v25 >> 20) & 1) + v26 + ((*v25 >> 20) & 1)].titleId = (*v25 >> 21) & 0x1FF;
      v27 = *v25;
      if ( ((v25[8] >> 3) & 3) == 1 )
      {
        replayBattle.m_UserInfo[0][2 * ((v27 >> 20) & 1) + v26 + ((v27 >> 20) & 1)].disconnectLevel = 3;
      }
      else
      {
        v28 = (v27 >> 20) & 1;
        v29 = v26 + 2 * v28;
        if ( ((v25[8] >> 3) & 3) == 2 )
          replayBattle.m_UserInfo[0][v29 + v28].disconnectLevel = 4;
        else
          replayBattle.m_UserInfo[0][v29 + v28].disconnectLevel = 0;
      }
      ++v24;
      v25 = (unsigned int *)((char *)v25 + 118);
    }
    while ( v24 < v23 );
LABEL_44:
    for ( i = 0i64; i < 2; ++i )
    {
      v31 = 0i64;
      p_characterColorId = &replayBattle.m_UserInfo[i][0].characterColorId;
      v33 = Instance->m_CharacterNo[i];
      do
      {
        *(p_characterColorId - 1) = *(_BYTE *)v33;
        v34 = *((_DWORD *)v33 + 8);
        if ( GameDataInfo::IsSameColorSelected(Instance, *v33, v34, *((_DWORD *)v33 + 39)) )
          v34 = Instance->m_CharacterColorRand[0][2 * i + v31 + i];
        *p_characterColorId = v34;
        p_characterColorId[2] = *((_BYTE *)v33 + 156);
        if ( i == -1 )
          LOBYTE(v35) = -1;
        else
          v35 = Instance->m_Order[0][2 * i + v31 + i];
        p_characterColorId[1] = v35;
        ++v31;
        ++v33;
        p_characterColorId += 24;
      }
      while ( v31 < 3 );
    }
    if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_RANK )
    {
      replayBattle.m_GameMode = 6;
    }
    else if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_FREE )
    {
      replayBattle.m_GameMode = 5;
    }
    replayBattle.m_DelayFrame = g_NetworkManager.gamedata.addDelayFrame;
    goto LABEL_58;
  }
  v42[0] = *(BattleSystem::BattleController **)Instance->m_ControllerSetting;
  if ( HIDWORD(v42[0]) == 1 || LODWORD(v42[0]) == 1 )
  {
    memset(destination, 0, sizeof(destination));
    m_UserInfo = replayBattle.m_UserInfo;
    v12 = destination;
    v13 = v42;
    v14 = destination;
    v15 = 2i64;
    do
    {
      if ( *(_DWORD *)v13 )
      {
        UserGameOperation::Instance();
        if ( Framework::GLManager::glm )
        {
          CString = AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
          strcpy_s(v14, 0x40ui64, CString);
        }
      }
      else
      {
        strncpy_s(v14, 0x40ui64, "CPU", 3ui64);
      }
      *(_OWORD *)m_UserInfo = *(_OWORD *)v12;
      *(_OWORD *)&(*m_UserInfo)[0].disconnectLevel = *((_OWORD *)v12 + 1);
      *(_OWORD *)&(*m_UserInfo)[1].icon = *((_OWORD *)v12 + 2);
      *(_OWORD *)&(*m_UserInfo)[2].onlineId.data = *((_OWORD *)v12 + 3);
      *(_OWORD *)&(*m_UserInfo)[2].disconnectLevel = *((_OWORD *)v12 + 4);
      *(_OWORD *)&(*m_UserInfo)[3].icon = *((_OWORD *)v12 + 5);
      *(_OWORD *)&(*m_UserInfo)[4].onlineId.data = *((_OWORD *)v12 + 6);
      *(_OWORD *)&(*m_UserInfo)[4].disconnectLevel = *((_OWORD *)v12 + 7);
      (*m_UserInfo)[5].icon = v12[128];
      v14 += 64;
      v13 = (BattleSystem::BattleController **)((char *)v13 + 4);
      v12 += 64;
      ++m_UserInfo;
      --v15;
    }
    while ( v15 );
    for ( j = 0i64; j < 2; ++j )
    {
      v18 = 0i64;
      v19 = &replayBattle.m_UserInfo[j][0].characterColorId;
      v20 = Instance->m_CharacterNo[j];
      do
      {
        *(v19 - 1) = *(_BYTE *)v20;
        v21 = *((_DWORD *)v20 + 8);
        if ( GameDataInfo::IsSameColorSelected(Instance, *v20, v21, *((_DWORD *)v20 + 39)) )
          v21 = Instance->m_CharacterColorRand[0][2 * j + v18 + j];
        *v19 = v21;
        v19[2] = *((_BYTE *)v20 + 156);
        if ( j == -1 )
          LOBYTE(v22) = -1;
        else
          v22 = Instance->m_Order[0][2 * j + v18 + j];
        v19[1] = v22;
        *(v19 - 4) = 0;
        *(_WORD *)(v19 - 3) = 0;
        v19[3] = 0;
        ++v18;
        ++v20;
        v19 += 24;
      }
      while ( v18 < 3 );
    }
    replayBattle.m_DelayFrame = 0;
LABEL_58:
    replayBattle.m_Handicap[0] = Instance->m_HandicapSetting[0];
    replayBattle.m_Handicap[1] = Instance->m_HandicapSetting[1];
    replayBattle.m_GameRule = v41;
    replayBattle.m_Stage = Instance->m_StageID;
    v36 = *(_OWORD *)&Instance->m_StageTelop[16];
    v37 = *(_OWORD *)&Instance->m_StageTelop[32];
    v38 = *(_QWORD *)&Instance->m_StageTelop[48];
    v39 = *(_DWORD *)&Instance->m_StageTelop[56];
    v40 = Instance->m_StageTelop[60];
    *(_OWORD *)replayBattle.m_StageTelop = *(_OWORD *)Instance->m_StageTelop;
    *(_OWORD *)&replayBattle.m_StageTelop[16] = v36;
    *(_OWORD *)&replayBattle.m_StageTelop[32] = v37;
    *(_QWORD *)&replayBattle.m_StageTelop[48] = v38;
    *(_DWORD *)&replayBattle.m_StageTelop[56] = v39;
    replayBattle.m_StageTelop[60] = v40;
    replayBattle.m_RoundTimerType = Instance->m_TimeSetting;
    replayBattle.m_WinRoundCount = Instance->m_WinRoundCount;
    replayBattle.m_Result = v5->resultMember.battleWinnerID;
    replayBattle.m_RandSeed[0] = Instance->m_RandSeed[0];
    replayBattle.m_RandSeed[1] = Instance->m_RandSeed[1];
    replayBattle.m_RandSeed[2] = Instance->m_RandSeed[2];
    replayBattle.m_RandSeed[3] = Instance->m_RandSeed[3];
    replayBattle.m_RandSeed[4] = Instance->m_RandSeed[4];
    replayBattle.m_RandSeed[5] = Instance->m_RandSeed[5];
    replayBattle.m_UploadOnlineId = Fw::NetworkCommon::m_NpOnlineId;
    replayBattle.m_DownloadDate = 0i64;
    replayBattle.m_Download = 0;
  }
}

_BOOL8 __fastcall SetReplayDataSaveData()
{
  bool v0; // si
  void **m_pBuffer; // rbx
  __int64 v2; // rdi

  v0 = 0;
  if ( *(_QWORD *)&AppMain::pApp )
    v0 = AppMain::SetReplaySaveData(*(AppMain **)&AppMain::pApp, &replayBattle);
  if ( pBtlNet )
  {
    m_pBuffer = (void **)replayBattle.m_pBuffer;
    v2 = 6i64;
    do
    {
      if ( *m_pBuffer )
      {
        aligned_free(*m_pBuffer);
        *m_pBuffer = 0i64;
      }
      *(m_pBuffer - 136) = 0i64;
      ++m_pBuffer;
      --v2;
    }
    while ( v2 );
  }
  return v0;
}

void __fastcall NetBattleCommandManager::SetReplayRoundCommandBuffer(
        NetBattleCommandManager *this,
        int round,
        BATTLE_RESULT_TYPE result)
{
  unsigned __int8 v3; // r15
  NetBattleCommandManager *v4; // rbx
  int v5; // edi
  __int64 v6; // rbp
  char *v7; // rcx
  __int64 keyLogEnd; // rsi
  unsigned int v9; // er14
  char *v10; // rax
  unsigned __int8 *v11; // rdx
  int v12; // er9
  __int64 v13; // r8
  char *v14; // r8
  __int64 v15; // rdx

  v3 = result;
  v4 = pBtlNet;
  if ( !replayBattle.m_Over )
  {
    if ( pBtlNet->keyLogMan[0].LogOver || pBtlNet->keyLogMan[1].LogOver )
    {
      replayBattle.m_Over = 1;
    }
    else
    {
      v5 = 0;
      v6 = round;
      v7 = replayBattle.m_pBuffer[round];
      if ( v7 )
      {
        aligned_free(v7);
        replayBattle.m_pBuffer[v6] = 0i64;
      }
      keyLogEnd = v4->keyLogMan[0].keyLogEnd;
      v9 = v4->keyLogMan[1].keyLogEnd;
      v10 = (char *)aligned_malloc(v9 + (unsigned int)keyLogEnd, 0x20ui64);
      replayBattle.m_pBuffer[v6] = v10;
      v11 = (unsigned __int8 *)v10;
      if ( v10 )
      {
        v12 = 0;
        if ( v4->keyLogMan[0].keyLogEnd > 0 )
        {
          v13 = 0i64;
          do
          {
            ++v13;
            ++v12;
            *v11++ = v4->keyLogMan[0].pKeyLog[v13 - 1].key;
          }
          while ( v12 < v4->keyLogMan[0].keyLogEnd );
        }
        v14 = &replayBattle.m_pBuffer[v6][keyLogEnd];
        if ( v4->keyLogMan[1].keyLogEnd > 0 )
        {
          v15 = 0i64;
          do
          {
            ++v15;
            ++v5;
            *v14++ = v4->keyLogMan[1].pKeyLog[v15 - 1].key;
          }
          while ( v5 < v4->keyLogMan[1].keyLogEnd );
        }
        replayBattle.m_BufferSize[v6][0] = keyLogEnd;
        replayBattle.m_BufferSize[v6][1] = v9;
        replayBattle.m_RoundResult[v6] = v3;
      }
      else
      {
        replayBattle.m_Over = 1;
      }
    }
  }
}

void __fastcall NetBattleCommandManager::SetReplayRoundInfo(
        NetBattleCommandManager *this,
        int round,
        const BattleSystem::BattleRoundInfo *roundInfo)
{
  char *p_iRoundSetCount; // rax
  unsigned __int64 v4; // rcx
  unsigned __int8 *v5; // r9
  char *v6; // r8
  char *v7; // r11
  char *v8; // rbx
  char *v9; // rdi
  char *v10; // rsi
  char *v11; // r14
  char *v12; // r15
  char *v13; // r12
  char *v14; // rbp
  char *v15; // r13
  __int64 v16; // rdx
  int v17; // ecx
  char *v18; // [rsp+0h] [rbp-68h]
  char *v19; // [rsp+8h] [rbp-60h]
  char *v20; // [rsp+10h] [rbp-58h]
  char *v21; // [rsp+18h] [rbp-50h]
  unsigned __int8 *v22; // [rsp+20h] [rbp-48h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]
  unsigned __int8 *v24; // [rsp+70h] [rbp+8h]
  char *v26; // [rsp+88h] [rbp+20h]

  p_iRoundSetCount = &roundInfo->playerData[0].iRoundSetCount;
  v23 = 76i64 * round;
  v4 = v23 - (_QWORD)roundInfo;
  v5 = &replayBattle.m_UserInfo[1][2].disconnectLevel + v23 - (_QWORD)roundInfo + 7;
  v22 = v5;
  v6 = (char *)&replayBattle + v23 - (_QWORD)roundInfo;
  v7 = (char *)&replayBattle + v4;
  v8 = (char *)&replayBattle + v4;
  v9 = (char *)&replayBattle + v4;
  v10 = (char *)&replayBattle + v4;
  v11 = (char *)&replayBattle + v4;
  v12 = (char *)&replayBattle + v4;
  v13 = (char *)&replayBattle + v4;
  v14 = (char *)&replayBattle + v4;
  v15 = (char *)&replayBattle + v4;
  v24 = &replayBattle.m_RoundInfo[0].player[0].pad + v4;
  v26 = (char *)&replayBattle.m_RoundInfo[0].player[0].xVital + v4 + 3;
  v18 = (char *)&replayBattle.m_RoundInfo[0].player[0].xExPower + v4 + 3;
  v19 = (char *)&replayBattle.m_RoundInfo[0].player[0].xClimaxTime + v4 + 3;
  v20 = (char *)&replayBattle.m_RoundInfo[0].player[0].xGuardPower + v4 + 3;
  v16 = 2i64;
  v21 = (char *)&replayBattle.m_RoundInfo[0].player[0].xStunPower + v4 + 3;
  do
  {
    p_iRoundSetCount[(_QWORD)v5] = *(p_iRoundSetCount - 1);
    p_iRoundSetCount[(_QWORD)v6 + 208] = *p_iRoundSetCount;
    p_iRoundSetCount[(_QWORD)v6 + 209] = p_iRoundSetCount[1];
    p_iRoundSetCount[(_QWORD)v7 + 210] = p_iRoundSetCount[2];
    p_iRoundSetCount[(_QWORD)v8 + 211] = p_iRoundSetCount[3];
    p_iRoundSetCount[(_QWORD)v9 + 212] = p_iRoundSetCount[4];
    p_iRoundSetCount[(_QWORD)v10 + 213] = p_iRoundSetCount[5];
    p_iRoundSetCount[(_QWORD)v11 + 214] = p_iRoundSetCount[6];
    p_iRoundSetCount[(_QWORD)v12 + 215] = p_iRoundSetCount[7];
    p_iRoundSetCount[(_QWORD)v13 + 216] = p_iRoundSetCount[8];
    v14[(_QWORD)p_iRoundSetCount + 217] = p_iRoundSetCount[9];
    v15[(_QWORD)p_iRoundSetCount + 218] = 0;
    *(_DWORD *)&p_iRoundSetCount[(_QWORD)v24] = *(_DWORD *)(p_iRoundSetCount + 11);
    v17 = *(_DWORD *)(p_iRoundSetCount + 15);
    p_iRoundSetCount += 36;
    *(_DWORD *)&p_iRoundSetCount[(_QWORD)v26 - 36] = v17;
    *(_DWORD *)&p_iRoundSetCount[(_QWORD)v18 - 36] = *(_DWORD *)(p_iRoundSetCount - 17);
    *(_DWORD *)&p_iRoundSetCount[(_QWORD)v19 - 36] = *(_DWORD *)(p_iRoundSetCount - 13);
    *(_DWORD *)&p_iRoundSetCount[(_QWORD)v20 - 36] = *(_DWORD *)(p_iRoundSetCount - 9);
    *(_DWORD *)&v21[(_QWORD)p_iRoundSetCount - 36] = *(_DWORD *)(p_iRoundSetCount - 5);
    v5 = v22;
    --v16;
  }
  while ( v16 );
  replayBattle.m_RoundInfo[v23 / 0x4C].iRoundCount = roundInfo->iRoundCount;
  replayBattle.m_RoundInfo[v23 / 0x4C].bExtraRound = roundInfo->bExtraRound;
}

bool __fastcall NetBattleCommandManager::btlnt_Phase_Update(NetBattleCommandManager *this, BT_NET_PHASE phaseId)
{
  __int32 v3; // edx
  __int32 v4; // edx
  unsigned __int8 *sendKeyBuffer; // r8
  int i; // edi
  __int64 v8; // r8

  if ( phaseId )
  {
    v3 = phaseId - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        return v4 != 1 || NetBattleCommandManager::parse(this);
      }
      else
      {
        if ( g_NetworkManager.gamedata.onlineState == NET_STATE_BATTLE )
          this->phase = BT_NET_PHASE_SYNC;
        return 0;
      }
    }
    else
    {
      if ( ++this->phaseCount >= 60 )
        this->phase = BT_NET_PHASE_WAIT;
      return 0;
    }
  }
  else
  {
    sendKeyBuffer = this->sendKeyBuffer;
    for ( i = 0; i < 2; ++i )
    {
      NetBattleCommandManager::updateKeyLog(this, i, sendKeyBuffer, this->seqTime2);
      sendKeyBuffer = (unsigned __int8 *)(v8 + 1);
    }
    return NetBattleCommandManager::parse(this);
  }
}

char __fastcall NetBattleCommandManager::getKey(
        NetBattleCommandManager *this,
        int requestTime,
        BATTLE_COMMAND_PACKET *pSendCmdPacket,
        int getKeyNum)
{
  NetBattleCommandManager *v4; // rdi
  int v5; // er10
  int v7; // er11
  __int64 v8; // rcx
  NetBattleCommandManager::LOG_BUFFER *i; // rax
  __int64 j; // r8
  signed int v12; // ecx

  v4 = pBtlNet;
  v5 = 0;
  v7 = 0;
  v8 = 0i64;
  for ( i = pBtlNet->logBuffer; i->time_buf_log != requestTime; ++i )
  {
    ++v7;
    if ( ++v8 >= 100 )
      return 0;
  }
  if ( v7 < 0 )
    return 0;
  for ( j = 0i64; j < getKeyNum; ++j )
  {
    v12 = (requestTime - v5++) % 0x64u;
    pSendCmdPacket[j] = (BATTLE_COMMAND_PACKET)v4->logBuffer[v12].key_buf_log;
  }
  return 1;
}

char __fastcall NetBattleCommandManager::parse(NetBattleCommandManager *this)
{
  int v2; // ebp
  int v3; // edi
  __int64 gameRule; // r15
  BattleSystem::BattleController *v5; // r9
  NET_PACKET_KEY *pKeyLog; // rcx
  __int64 p_key; // rax
  BattleSystem::BattleController *v8; // rax
  bool v9; // si
  BattleSystem::BattleController *v10; // rax
  double v11; // xmm0_8
  unsigned __int64 v12; // rcx
  __int64 v14[3]; // [rsp+28h] [rbp-70h]
  char v15; // [rsp+A0h] [rbp+8h] BYREF
  BattleSystem::BattleController *v16; // [rsp+A8h] [rbp+10h]
  BattleSystem::BattleController *v17; // [rsp+B0h] [rbp+18h]

  v15 = 0;
  v2 = this->seqTime2 - NetworkDelayFrame;
  v3 = 0;
  gameRule = g_NetworkManager.gamedata.gameRule;
  v5 = BattleSystem::BattleController::instance;
  do
  {
    pKeyLog = this->keyLogMan[v3].pKeyLog;
    if ( pKeyLog && pKeyLog[v2 % 0x4000].time == v2 )
      p_key = (__int64)&pKeyLog[v2 % 0x4000].key;
    else
      p_key = 0i64;
    v14[v3] = p_key;
    if ( p_key )
    {
      v11 = AgClock::getSystemTime() * 1000000.0;
      v12 = 0i64;
      if ( v11 >= 9.223372036854776e18 )
      {
        v11 = v11 - 9.223372036854776e18;
        if ( v11 < 9.223372036854776e18 )
          v12 = 0x8000000000000000ui64;
      }
      this->lastRecvTime[v3] = v12 + (unsigned int)(int)v11;
      v5 = BattleSystem::BattleController::instance;
    }
    else
    {
      if ( !v5 )
      {
        v16 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
        BattleSystem::BattleController::BattleController(v16);
        v5 = v8;
        BattleSystem::BattleController::instance = v8;
      }
      v9 = g_NetworkManager.gamedata.disconnectBattleUser[(unsigned __int8)v3][LOBYTE(v5->playerInfo[v3].iMemberReferIndex)];
      if ( !v5 )
      {
        v17 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
        BattleSystem::BattleController::BattleController(v17);
        v5 = v10;
        BattleSystem::BattleController::instance = v10;
      }
      if ( v5->roundPhase <= DIE && (!v9 || gameRule != 2) )
        return 0;
      v14[v3] = (__int64)&v15;
    }
    ++v3;
  }
  while ( v3 < 2 );
  this->keyLogMan[0].keyLogBegin = ((unsigned __int16)this->keyLogMan[0].keyLogBegin + 1) & 0x3FFF;
  this->recvKeyBuffer[0] = *(_BYTE *)v14[0];
  this->keyLogMan[1].keyLogBegin = ((unsigned __int16)this->keyLogMan[1].keyLogBegin + 1) & 0x3FFF;
  this->recvKeyBuffer[1] = *(_BYTE *)v14[1];
  return 1;
}

void __fastcall NetBattleCommandManager::updateKeyLog(
        NetBattleCommandManager *this,
        int playerId,
        unsigned __int8 *pKey,
        int time)
{
  __int64 v5; // rdx
  NET_PACKET_KEY *pKeyLog; // r10
  unsigned __int64 v7; // rdi
  unsigned __int8 *p_key; // rcx
  bool LogOver; // al

  if ( time >= 0 && (unsigned int)playerId <= 1 )
  {
    v5 = playerId;
    pKeyLog = this->keyLogMan[v5].pKeyLog;
    if ( pKeyLog )
    {
      if ( this->keyLogMan[v5].LastTime < time )
        this->keyLogMan[v5].LastTime = time;
      v7 = time & 0x3FFF;
      if ( time > pKeyLog[v7].time && this->keyLogMan[v5].keyLogEnd - (time & 0x3FFF) >= -10 )
      {
        if ( pKey )
        {
          if ( pKeyLog[time & 0x3FFF].time == time )
          {
            p_key = &pKeyLog[time & 0x3FFF].key;
            if ( p_key )
            {
              *p_key = *pKey;
              return;
            }
          }
          pKeyLog[v7].key = *pKey;
        }
        else
        {
          pKeyLog[this->keyLogMan[v5].keyLogEnd].key = 0;
        }
        this->keyLogMan[v5].pKeyLog[v7].time = time;
        this->keyLogMan[v5].keyLogEnd = ((unsigned __int16)this->keyLogMan[v5].keyLogEnd + 1) & 0x3FFF;
        LogOver = 1;
        if ( time < 0x3FFF )
          LogOver = this->keyLogMan[v5].LogOver;
        this->keyLogMan[v5].LogOver = LogOver;
      }
    }
  }
}

