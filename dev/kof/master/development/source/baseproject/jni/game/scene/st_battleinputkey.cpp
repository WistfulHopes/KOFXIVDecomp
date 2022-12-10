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
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netbattle.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A0AF9
void AppMain::SetControllerSetting(); // 0x1401A8F70
void AppMain::InputKeyApply(); // 0x1401A97D0
void AppMain::InputKeyRecv(); // 0x1401A9EB0
void AppMain::InputKeySend(); // 0x1401A9F20
void AppMain::InputKeyReplay(); // 0x1401AA1F0//decompilation failure at 1408A0AF9!
std::bitset<98>::reference *__fastcall std::bitset<98>::operator[](
        std::bitset<98> *this,
        std::bitset<98>::reference *result,
        unsigned __int64 _Pos)
{
  result->_Mypos = _Pos;
  result->_Pbitset = &ActionDebugFlags;
  return result;
}

unsigned __int8 __fastcall std::bitset<98>::reference::operator bool(std::bitset<98>::reference *this)
{
  unsigned __int64 Mypos; // rdx
  unsigned __int64 v2; // rax

  Mypos = this->_Mypos;
  if ( Mypos >= 0x62 )
    std::_Xout_of_range("invalid bitset<N> position");
  v2 = this->_Pbitset->_Array[Mypos >> 6];
  return _bittest64((const __int64 *)&v2, this->_Mypos & 0x3F);
}

void __fastcall AppMain::InputKeyApply(AppMain *this)
{
  int v1; // ebp
  unsigned int v2; // edi
  BattleSystem::BattleController *v3; // r13
  BattleSystem::BattleController *v4; // rax
  BattleSystem::BattleController *v5; // rbx
  BattleSystem::BattleController *v6; // rax
  BattleSystem::BattleController::KEY_RECORD_MODE keyRecordMode; // er9
  InputKeyRecord *PlayKeyRecord; // rax
  int v9; // er9
  InputKeyRecord (*m_KeyRecord)[6]; // rax
  BattleSystem::BattleController *v11; // rcx
  InputKeyRecord *v12; // rax
  BattleSystem::BattleController::KEY_RECORD_MODE v13; // edx
  RestrictRingBuffer<InputKeyRecord::RecordKey> *Myval2; // rdx
  unsigned int uiMaxRecordFrame; // ecx
  InputKeyRecord (*v16)[6]; // rax
  BattleSystem::BattleController *v17; // rcx
  const int *v18; // r12
  InputKeyRecord (*v19)[6]; // rax
  BattleSystem::BattleController *v20; // rcx
  int v21; // er9
  __int64 iKeyRecordType; // r14
  int *v23; // rsi
  int v24; // edi
  std::bitset<61>::reference *v25; // rax
  unsigned int v26; // er9
  __int64 v27; // r10
  __int64 v28; // r11
  unsigned __int64 Mypos; // rdx
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  BattleSystem::BattleController *v34; // rax
  int v35; // eax
  InputKeyRecord *v36; // rax
  InputKeyRecord *v37; // rdi
  unsigned int i; // eax
  int Key; // eax
  InputKeyHistory *v40; // r9
  int v41; // er11
  InputKeyRecord *v42; // rax
  int v43; // er14
  BattleSystem::CpuSequence::SeqParam *p_nowSeq; // r15
  BattleSystem::PLAYER_TYPE *p_playerType; // r12
  ActorChara **pPlayer; // rsi
  AppMain *v47; // r11
  char *v48; // r8
  bool *v49; // r13
  int v50; // edi
  BattleSystem::BattleController::KEY_RECORD_MODE v51; // edx
  int InputKey; // eax
  __int64 v53; // r8
  unsigned int v54; // ecx
  int *v55; // r8
  int v56; // edx
  int iCAngleBuf; // er8
  _DWORD *v58; // rcx
  InputKeyRecord *v59; // rax
  int v60; // er9
  __int64 v61; // rcx
  __int64 v62; // rdx
  int v63; // edx
  int v64; // eax
  int v65; // er8
  int v66; // eax
  BattleSystem::BattleController *v67; // [rsp+28h] [rbp-70h]
  BattleSystem::BattleController *v68; // [rsp+28h] [rbp-70h]
  BattleSystem::BattleController *v69; // [rsp+28h] [rbp-70h]
  char *v70; // [rsp+28h] [rbp-70h]
  std::bitset<61>::reference result; // [rsp+40h] [rbp-58h] BYREF
  int v73[6]; // [rsp+50h] [rbp-48h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v67 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v67);
    v3 = v4;
    BattleSystem::BattleController::instance = v4;
  }
  v5 = v3;
  if ( !v3 )
  {
    v68 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v68);
    v3 = v6;
    BattleSystem::BattleController::instance = v6;
  }
  keyRecordMode = v5->keyRecordMode;
  switch ( keyRecordMode )
  {
    case 1:
    case 7:
      PlayKeyRecord = BattleSystem::BattleController::GetPlayKeyRecord(v5);
      if ( PlayKeyRecord->uiPlayCount >= PlayKeyRecord->pKeyBuffer._Mypair._Myval2->uiDataSize )
      {
        if ( v9 )
        {
          v5->keyRecordMode = STOP;
          m_KeyRecord = v5->m_KeyRecord;
          if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)v5->m_KeyRecord != &v5->missionSampleMode )
          {
            do
            {
              v11 = (BattleSystem::BattleController *)&(*m_KeyRecord)[6];
              if ( m_KeyRecord != (InputKeyRecord (*)[6])&(*m_KeyRecord)[6] )
              {
                do
                {
                  (*m_KeyRecord)[0].uiPlayCount = 0;
                  m_KeyRecord = (InputKeyRecord (*)[6])((char *)m_KeyRecord + 16);
                }
                while ( m_KeyRecord != (InputKeyRecord (*)[6])v11 );
              }
              m_KeyRecord = (InputKeyRecord (*)[6])v11;
            }
            while ( v11 != (BattleSystem::BattleController *)&v5->missionSampleMode );
          }
        }
        goto LABEL_12;
      }
      break;
    case 2:
      v12 = BattleSystem::BattleController::GetPlayKeyRecord(v5);
      if ( v12->uiPlayCount >= v12->pKeyBuffer._Mypair._Myval2->uiDataSize )
      {
        BattleSystem::BattleController::GetPlayKeyRecord(v5)->uiPlayCount = 0;
        v13 = SKIP;
        goto LABEL_58;
      }
      break;
    case 3:
    case 5:
      Myval2 = v5->m_KeyRecord[v5->keyRecordInfo.iKeyRecordType][v5->keyRecordInfo.iKeyRecordSlot].pKeyBuffer._Mypair._Myval2;
      uiMaxRecordFrame = v5->m_KeyRecord[v5->keyRecordInfo.iKeyRecordType][v5->keyRecordInfo.iKeyRecordSlot].uiMaxRecordFrame;
      if ( Myval2->uiDataSize >= uiMaxRecordFrame || uiMaxRecordFrame == Myval2->uiDataSize )
      {
        if ( keyRecordMode )
        {
          v5->keyRecordMode = STOP;
          v16 = v5->m_KeyRecord;
          if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)v5->m_KeyRecord != &v5->missionSampleMode )
          {
            do
            {
              v17 = (BattleSystem::BattleController *)&(*v16)[6];
              if ( v16 != (InputKeyRecord (*)[6])&(*v16)[6] )
              {
                do
                {
                  (*v16)[0].uiPlayCount = 0;
                  v16 = (InputKeyRecord (*)[6])((char *)v16 + 16);
                }
                while ( v16 != (InputKeyRecord (*)[6])v17 );
              }
              v16 = (InputKeyRecord (*)[6])v17;
            }
            while ( v17 != (BattleSystem::BattleController *)&v5->missionSampleMode );
          }
        }
LABEL_12:
        v5->keyRecordInfo.iKeyPlaySlot = -1;
        v5->keyRecordMode = STOP;
      }
      break;
    case 4:
    case 6:
      v18 = (const int *)v3->actSystem.pPlayer[1];
      if ( v18
        && (*(unsigned __int8 (__fastcall **)(ActorChara *, unsigned __int64))(*(_QWORD *)v18 + 4240i64))(
             v3->actSystem.pPlayer[1],
             0x140000000ui64) )
      {
        BattleSystem::BattleController::ResetKeyPlayCountAll(v5);
        if ( v5->keyRecordMode != 4 )
        {
          v5->keyRecordMode = STOP;
          v19 = v5->m_KeyRecord;
          if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)v5->m_KeyRecord != &v5->missionSampleMode )
          {
            do
            {
              v20 = (BattleSystem::BattleController *)&(*v19)[6];
              if ( v19 != (InputKeyRecord (*)[6])&(*v19)[6] )
              {
                do
                {
                  (*v19)[0].uiPlayCount = 0;
                  v19 = (InputKeyRecord (*)[6])((char *)v19 + 16);
                }
                while ( v19 != (InputKeyRecord (*)[6])v20 );
              }
              v19 = (InputKeyRecord (*)[6])v20;
            }
            while ( v20 != (BattleSystem::BattleController *)&v5->missionSampleMode );
          }
        }
        v21 = 1;
        iKeyRecordType = v5->keyRecordInfo.iKeyRecordType;
        v23 = v73;
        do
        {
          v24 = v2 | 0x10;
          v25 = std::bitset<21>::operator[](
                  (std::bitset<61> *)&v5->keyRecordInfo.enableKeyPlaySlot[iKeyRecordType],
                  &result,
                  v21);
          Mypos = v25->_Mypos;
          if ( Mypos >= 6 )
            std::_Xout_of_range("invalid bitset<N> position");
          v30 = v25->_Mypos & 0x1F;
          v31 = *((_DWORD *)v25->_Pbitset->_Array + (Mypos >> 5));
          if ( !_bittest(&v31, v30) || v26 > 5 )
            goto LABEL_41;
          v32 = iKeyRecordType;
          if ( (unsigned int)iKeyRecordType > 1 )
            v32 = iKeyRecordType;
          if ( v32 == 1 ? *(_DWORD *)(*(_QWORD *)v27 + 16i64) >= 0xB4u : v5->m_KeyRecord[v32][v28].pKeyBuffer._Mypair._Myval2->uiDataSize != 0 )
          {
            v2 = v24 & 0xFFFFFFEF;
            *v23 = v26;
            ++v1;
            ++v23;
          }
          else
          {
LABEL_41:
            v2 = v24 & 0xFFFFFFEF;
          }
          v21 = v26 + 1;
        }
        while ( v21 < 6 );
        if ( v1 <= 0 )
        {
          v5->keyRecordInfo.iKeyPlaySlot = -1;
          v1 = 0;
          v35 = 0;
        }
        else
        {
          v34 = BattleSystem::BattleController::instance;
          if ( !BattleSystem::BattleController::instance )
          {
            v69 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
            BattleSystem::BattleController::BattleController(v69);
            BattleSystem::BattleController::instance = v34;
          }
          v5->keyRecordInfo.iKeyPlaySlot = v73[(int)((unsigned int)RandomMT::getRand32(&v34->randMT) >> 1) % v1];
          v35 = 4;
          v1 = 0;
        }
        v5->keyRecordMode = v35;
        if ( v5->keyRecordInfo.iKeyPlaySlot >= 0 )
        {
          v36 = BattleSystem::BattleController::GetPlayKeyRecord(v5);
          v37 = v36;
          if ( v36->pKeyBuffer._Mypair._Myval2->uiDataSize >= 0xB3 )
          {
            for ( i = v36->uiPlayCount; i < 0xB3; i = v37->uiPlayCount )
            {
              if ( i >= v37->pKeyBuffer._Mypair._Myval2->uiDataSize )
                break;
              Key = InputKeyRecord::GetKey(v37, v18[100]);
              InputKeyCheck::AddKey(&this->m_CmdKeyData[1], Key);
              InputKeyHistory::AddKey(v40 + 274057, v41);
            }
          }
        }
      }
      else if ( v5->keyRecordMode == 4 )
      {
        v42 = BattleSystem::BattleController::GetPlayKeyRecord(v5);
        if ( v42->uiPlayCount >= v42->pKeyBuffer._Mypair._Myval2->uiDataSize )
        {
          v13 = 6;
LABEL_58:
          BattleSystem::BattleController::SetKeyRecordMode(v5, v13);
        }
      }
      break;
    default:
      break;
  }
  v43 = 0;
  p_nowSeq = &v5->cpuPlayer[0].nowSeq;
  p_playerType = &v5->playerInfo[0].playerType;
  pPlayer = v3->actSystem.pPlayer;
  v47 = this;
  v48 = (char *)((char *)this - (char *)v3 + 1955200);
  v70 = v48;
  v49 = (bool *)((char *)this - (char *)v3 + 1955216);
  do
  {
    v50 = 0;
    if ( (unsigned int)(v5->roundPhase - 5) > 1 )
      goto LABEL_88;
    v51 = v5->keyRecordMode;
    if ( (unsigned int)(v51 - 1) > 4 && *p_playerType )
    {
      if ( (unsigned int)(v51 - 1) <= 4 || *p_playerType != CROUCH || p_nowSeq->iType != 18 )
        goto LABEL_87;
      InputKey = BattleSystem::CpuSequence::GetInputKey(&v5->cpuPlayer[v43]);
      goto LABEL_86;
    }
    v53 = *(__int64 *)((char *)pPlayer + (_QWORD)v48);
    v54 = *(_DWORD *)(v53 + 40);
    if ( *(_DWORD *)(v53 + 16) > v54 )
    {
      v55 = (int *)(*(_QWORD *)(v53 + 24) + 4i64 * (*(_DWORD *)(v53 + 12) & (*(_DWORD *)(v53 + 36) - v54 - 1)));
      if ( v55 )
        v50 = *v55;
    }
    if ( BattleSystem::BattleController::IsMissionMode(v5) )
    {
      if ( !v43 )
      {
        if ( v56 == 8 )
        {
          iCAngleBuf = 0;
          if ( *pPlayer )
            iCAngleBuf = (*pPlayer)->iCAngleBuf;
          InputKeyRecord::AddKey(
            &v5->m_KeyRecord[v5->keyRecordInfo.iKeyRecordType][v5->keyRecordInfo.iKeyRecordSlot],
            v50,
            iCAngleBuf);
          goto LABEL_87;
        }
        if ( v56 == 7 )
        {
LABEL_85:
          v59 = BattleSystem::BattleController::GetPlayKeyRecord(v5);
          InputKey = InputKeyRecord::GetKey(v59, v60);
LABEL_86:
          v50 = InputKey;
        }
      }
    }
    else if ( v43 == 1 )
    {
      if ( ((v56 - 3) & 0xFFFFFFFD) == 0 )
      {
        v58 = *pPlayer;
        if ( *pPlayer )
        {
          v1 = v58[100];
          if ( v56 == 5 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v58 + 4216i64))(v58);
        }
        InputKeyRecord::AddKey(
          &v5->m_KeyRecord[v5->keyRecordInfo.iKeyRecordType][v5->keyRecordInfo.iKeyRecordSlot],
          v50,
          v1);
        v1 = 0;
        goto LABEL_87;
      }
      if ( BattleSystem::BattleController::IsKeyRecordPlay(v5) )
        goto LABEL_85;
    }
LABEL_87:
    InputKeyHistory::AddKey(&v47->m_KeyHistory[v43], v50);
LABEL_88:
    v61 = *(_QWORD *)&v49[(_QWORD)pPlayer];
    v62 = *(_QWORD *)(v61 + 24);
    if ( v62 )
    {
      *(_DWORD *)(v62 + 4i64 * *(unsigned int *)(v61 + 36)) = v50;
      v63 = *(_DWORD *)(v61 + 12);
      v64 = v63 & (*(_DWORD *)(v61 + 36) + 1);
      *(_DWORD *)(v61 + 36) = v64;
      v65 = *(_DWORD *)(v61 + 32);
      if ( v64 == v65 )
        *(_DWORD *)(v61 + 32) = v63 & (v65 + 1);
      v66 = *(_DWORD *)(v61 + 16);
      if ( *(_DWORD *)(v61 + 8) != v66 )
        *(_DWORD *)(v61 + 16) = v66 + 1;
    }
    ++v43;
    ++pPlayer;
    p_playerType += 42;
    p_nowSeq = (BattleSystem::CpuSequence::SeqParam *)((char *)p_nowSeq + 496);
    v48 = v70;
  }
  while ( v43 < 2 );
}

void __fastcall AppMain::InputKeyRecv(AppMain *this)
{
  NetBattleCommandManager *v1; // r11
  InputKeyCheck *m_KeyData; // r9
  __int64 i; // r8
  unsigned __int8 v4; // cl
  RestrictRingBuffer<int> *Myval2; // rax
  int *pBuffer; // r10
  unsigned int uiBufferMask; // edx
  unsigned int uiBeginIndex; // er10
  int v9; // ecx
  unsigned int uiDataSize; // ecx

  v1 = pBtlNet;
  m_KeyData = this->m_KeyData;
  for ( i = 0i64; i < 2; ++i )
  {
    if ( v1 )
      v4 = v1->recvKeyBuffer[i];
    else
      v4 = 0;
    Myval2 = m_KeyData->pKeyBuffer._Mypair._Myval2;
    pBuffer = m_KeyData->pKeyBuffer._Mypair._Myval2->pBuffer;
    if ( pBuffer )
    {
      pBuffer[Myval2->uiEndIndex] = v4;
      uiBufferMask = Myval2->uiBufferMask;
      uiBeginIndex = Myval2->uiBeginIndex;
      v9 = uiBufferMask & (Myval2->uiEndIndex + 1);
      Myval2->uiEndIndex = v9;
      if ( v9 == uiBeginIndex )
        Myval2->uiBeginIndex = uiBufferMask & (uiBeginIndex + 1);
      uiDataSize = Myval2->uiDataSize;
      if ( Myval2->uiBufferSize != uiDataSize )
        Myval2->uiDataSize = uiDataSize + 1;
    }
    ++m_KeyData;
  }
}

void __fastcall AppMain::InputKeyReplay(AppMain *this)
{
  BattleSystem::BattleController *v1; // rdi
  BattleSystem::BattleController *v2; // rax
  GameDataInfo *v3; // rcx
  __int64 v4; // rdx
  NetBattleCommandManager *v5; // rbx
  __int64 iRoundCount; // rax
  char *v7; // r9
  signed int v8; // ecx
  __int64 seqTime; // r8
  unsigned __int8 v10; // cl
  BattleSystem::BattleController *v11; // [rsp+40h] [rbp+8h]

  v1 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v11 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v11);
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
  if ( `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
  {
    v4 = 0i64;
    v5 = pBtlNet;
    while ( 1 )
    {
      iRoundCount = v1->battleInfo.iRoundCount;
      v7 = replayBattle.m_pBuffer[iRoundCount];
      if ( !v7 )
        goto LABEL_15;
      v8 = v4 == 1 ? replayBattle.m_BufferSize[iRoundCount][0] : 0;
      if ( v5 )
        break;
LABEL_19:
      if ( ++v4 > 1 )
      {
        if ( v5 )
        {
          v5->seqTime2 = v5->seqTime;
          if ( NetBattleCommandManager::btlnt_Phase_Update(v5, v5->phase) )
          {
            v5->pauseFlag = 0;
            if ( v5->phase != BT_NET_PHASE_IDLE )
            {
              ++v5->seqTime;
              v5->PauseTime = 0;
            }
          }
          else
          {
            v5->pauseFlag = 1;
          }
        }
        return;
      }
    }
    seqTime = v5->seqTime;
    if ( (int)seqTime >= (signed int)replayBattle.m_BufferSize[iRoundCount][v4] )
LABEL_15:
      v10 = 0;
    else
      v10 = v7[seqTime + v8];
    if ( v5 && v5->seqTime != v5->sendTime )
      v5->sendKeyBuffer[v4] = v10;
    goto LABEL_19;
  }
}

void __fastcall AppMain::InputKeySend(AppMain *this)
{
  BattleSystem::BattleController *v2; // rbx
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v4; // rax
  _DWORD *v5; // rdi
  int v6; // ecx
  GAME_MODE v7; // edx
  bool v8; // r15
  GameDataInfo *v9; // rcx
  bool m_ReplayFlag; // di
  _BOOL8 m_Pause; // rcx
  std::bitset<98>::reference *v12; // rax
  unsigned __int8 v13; // al
  bool v14; // r12
  char v15; // r8
  int v16; // er9
  int v17; // edi
  int *p_iBattleMemberIndex; // r14
  NetBattleCommandManager *v19; // rbx
  int v20; // edx
  int v21; // esi
  unsigned __int8 v22; // cl
  unsigned __int8 v23; // bl
  BattleSystem::PauseController *Instance; // rax
  std::bitset<98>::reference result; // [rsp+28h] [rbp-40h] BYREF
  BattleSystem::BattleController *v26; // [rsp+78h] [rbp+10h]
  BattleSystem::BattleController *v27; // [rsp+78h] [rbp+10h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v26 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v26);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
    if ( !v3 )
    {
      v27 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v27);
      v2 = v4;
      BattleSystem::BattleController::instance = v4;
    }
  }
  v5 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  v6 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v6 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v6 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  v7 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  v8 = (unsigned int)(v7 - 4) <= 2 || v7 == GAME_MODE_ONLINETRAINING;
  if ( v6 > *v5 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v9);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  m_ReplayFlag = `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag;
  m_Pause = BattleSystem::PauseController::GetInstance()->m_Pause;
  if ( (v8 || !m_Pause) && !m_ReplayFlag && (!v8 || g_NetworkManager.gamedata.onlineState == NET_STATE_BATTLE) )
  {
    if ( !m_Pause )
    {
      v12 = std::bitset<98>::operator[]((std::bitset<98> *)m_Pause, &result, 0x1Fui64);
      v13 = std::bitset<98>::reference::operator bool(v12);
      BattleSystem::BattleController::CheckKeyRecordButton(v2, v13);
    }
    v14 = ((v2->keyRecordMode - 3) & 0xFFFFFFFD) == 0;
    v15 = 0;
    v16 = -1;
    v17 = 0;
    p_iBattleMemberIndex = &v2->playerInfo[0].iBattleMemberIndex;
    v19 = pBtlNet;
    while ( 1 )
    {
      v20 = *p_iBattleMemberIndex;
      v21 = v17;
      if ( !v8 )
        break;
      if ( v17 == ((*((_DWORD *)&this->myRoomMemberInfo + 4) >> 20) & 1)
        && (((*((_DWORD *)&this->myRoomMemberInfo + 2) >> 11) & 3) - 1 == v20
         || ((*((_DWORD *)&this->myRoomMemberInfo + 2) >> 25) & 3) - 1 == v20
         || ((*((_DWORD *)&this->myRoomMemberInfo + 3) >> 11) & 3) - 1 == v20) )
      {
        v23 = PadInputCheck(1);
        v21 = (*((_DWORD *)&this->myRoomMemberInfo + 4) >> 20) & 1;
        Instance = BattleSystem::PauseController::GetInstance();
        v22 = v23;
        if ( Instance->m_Pause )
          v22 = 0;
        goto LABEL_30;
      }
LABEL_35:
      ++v17;
      p_iBattleMemberIndex += 42;
      if ( v17 > 1 )
      {
        if ( v15 )
        {
          BTLNT_UpdateKeyRequest(v16);
          v19 = pBtlNet;
        }
        if ( v19 )
        {
          v19->seqTime2 = v19->seqTime;
          if ( NetBattleCommandManager::btlnt_Phase_Update(v19, v19->phase) )
          {
            v19->pauseFlag = 0;
            if ( v19->phase != BT_NET_PHASE_IDLE )
            {
              ++v19->seqTime;
              v19->PauseTime = 0;
            }
          }
          else
          {
            v19->pauseFlag = 1;
          }
        }
        return;
      }
    }
    v22 = PadInputCheck((unsigned int)(v17 != 0) + 1);
LABEL_30:
    if ( v14 )
      v21 = v21 == 0;
    v15 = 1;
    v16 = v17;
    v19 = pBtlNet;
    if ( pBtlNet && pBtlNet->seqTime != pBtlNet->sendTime )
      pBtlNet->sendKeyBuffer[v21] = v22;
    goto LABEL_35;
  }
}

bool __fastcall BattleSystem::BattleController::IsKeyRecordPlay(BattleSystem::BattleController *this)
{
  BattleSystem::BattleController::KEY_RECORD_MODE keyRecordMode; // edx

  keyRecordMode = this->keyRecordMode;
  return ((keyRecordMode - 1) & 0xFFFFFFFC) == 0 && keyRecordMode != (SKIP|PLAY);
}

void __fastcall AppMain::SetControllerSetting(AppMain *this)
{
  _DWORD *v2; // r12
  int v3; // eax
  __int64 v4; // r14
  __int64 v5; // rbp
  FighterOperationMapper *SaveDataKeyConfigMyMapper; // rbx
  FighterOperation *v7; // rax
  FighterOperationMapper *v8; // rbx
  FighterOperation *v9; // rax
  __int64 v10; // rbx
  char *v11; // rcx
  __int64 v12; // rdx
  FighterOperationKeyboardMapper *p_keyboardMap; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  FighterOperation *v22; // rax
  FighterOperation::Slot *m_slots; // r9
  const FighterOperationKeyboardMapper *p_operationKeyboardMapper; // rdx
  __int64 v25; // r8
  FighterOperationKeyboardMapper *v26; // rax
  char *v27; // rcx
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  char *v36; // rcx
  __int64 v37; // rdx
  FighterOperationKeyboardMapper *v38; // rax
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  FighterOperation *v47; // rax
  FighterOperation::Slot *v48; // r8
  const FighterOperationKeyboardMapper *v49; // rdx
  FighterOperationKeyboardMapper *v50; // rax
  char *v51; // rcx
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  FighterOperation *v60; // rax
  int v61; // ebx
  FighterOperation::Slot *v62; // rdx
  int userIndex; // ecx
  FighterOperation::ListenerNode *p_m_assignListenerListEnd; // rsi
  extension::BiLinkable<FighterOperation::ListenerNode> *m_Next; // rdi
  extension::BiLinkable<FighterOperation::ListenerNode> **p_m_Next; // rcx
  FighterOperation *v67; // rax
  FighterOperation::Slot *v68; // rdx
  int v69; // ecx
  FighterOperation::ListenerNode *v70; // rsi
  extension::BiLinkable<FighterOperation::ListenerNode> *v71; // rdi
  extension::BiLinkable<FighterOperation::ListenerNode> **v72; // rcx
  bool v73; // bp
  GAME_MODE v74; // er8
  FighterOperation *v75; // rax
  FighterOperation::Slot *v76; // rdx
  int v77; // ecx
  FighterOperation::ListenerNode *v78; // rsi
  extension::BiLinkable<FighterOperation::ListenerNode> *v79; // rdi
  extension::BiLinkable<FighterOperation::ListenerNode> **v80; // rcx
  FighterOperation *v81; // rax
  FighterOperation::Slot *v82; // rdx
  int v83; // ecx
  FighterOperation::ListenerNode *v84; // rsi
  extension::BiLinkable<FighterOperation::ListenerNode> *v85; // rdi
  extension::BiLinkable<FighterOperation::ListenerNode> **v86; // rcx
  GameDataInfo *Instance; // rax
  GAME_RULE v88; // edi
  FighterOperation *v89; // rax
  unsigned int v90; // er8
  __int64 v91; // rax
  unsigned __int8 v92; // dl
  unsigned __int8 v93; // r8
  FighterOperation::Slot *v94; // rax
  int v95; // ebx
  FighterOperation::Slot *v96; // rax
  int v97; // ebx
  FighterOperation::Slot *v98; // rax
  int v99; // ebx
  FighterOperation::Slot *v100; // rax
  int v101; // ebx
  bool v102; // cl
  __int64 v103; // rax
  GameDataInfo *v104; // rcx
  GameDataInfo *v105; // rcx
  GameDataInfo *v106; // rcx
  GameDataInfo *v107; // rcx
  FighterOperationMapper result; // [rsp+20h] [rbp-448h] BYREF
  char v109[1024]; // [rsp+50h] [rbp-418h] BYREF

  v2 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  v3 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v2 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v3 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v104);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v3 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  v4 = `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0];
  if ( v3 > *v2 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v105);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v5 = `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1];
  SaveDataKeyConfigMyMapper = AppMain::GetSaveDataKeyConfigMyMapper(this, &result, (USER_ID)v4);
  v7 = FighterOperation::Instance();
  if ( v7 != (FighterOperation *)-8i64 )
  {
    *(_OWORD *)v7->m_slots[0].operationMapper.m_mapping = *(_OWORD *)SaveDataKeyConfigMyMapper->m_mapping;
    *(_OWORD *)&v7->m_slots[0].operationMapper.m_mapping[4] = *(_OWORD *)&SaveDataKeyConfigMyMapper->m_mapping[4];
    *(_QWORD *)&v7->m_slots[0].operationMapper.m_mapping[8] = *(_QWORD *)&SaveDataKeyConfigMyMapper->m_mapping[8];
    FighterOperation::ReverseOperationMapper::assign(&v7->m_slots[0].reverseMapper, &v7->m_slots[0].operationMapper);
  }
  v8 = AppMain::GetSaveDataKeyConfigMyMapper(this, &result, (USER_ID)v5);
  v9 = FighterOperation::Instance();
  if ( v9 != (FighterOperation *)-1488i64 )
  {
    *(_OWORD *)v9->m_slots[1].operationMapper.m_mapping = *(_OWORD *)v8->m_mapping;
    *(_OWORD *)&v9->m_slots[1].operationMapper.m_mapping[4] = *(_OWORD *)&v8->m_mapping[4];
    *(_QWORD *)&v9->m_slots[1].operationMapper.m_mapping[8] = *(_QWORD *)&v8->m_mapping[8];
    FighterOperation::ReverseOperationMapper::assign(&v9->m_slots[1].reverseMapper, &v9->m_slots[1].operationMapper);
  }
  v10 = 8i64;
  v11 = v109;
  v12 = 8i64;
  p_keyboardMap = &this->SaveDataMain.ButtonConfData.buttonConfig[v4].keyboardMap;
  do
  {
    v11 += 128;
    v14 = *(_OWORD *)p_keyboardMap->m_mapping;
    v15 = *(_OWORD *)&p_keyboardMap->m_mapping[4];
    p_keyboardMap = (FighterOperationKeyboardMapper *)((char *)p_keyboardMap + 128);
    *((_OWORD *)v11 - 8) = v14;
    v16 = *(_OWORD *)&p_keyboardMap[-1].m_mapping[232];
    *((_OWORD *)v11 - 7) = v15;
    v17 = *(_OWORD *)&p_keyboardMap[-1].m_mapping[236];
    *((_OWORD *)v11 - 6) = v16;
    v18 = *(_OWORD *)&p_keyboardMap[-1].m_mapping[240];
    *((_OWORD *)v11 - 5) = v17;
    v19 = *(_OWORD *)&p_keyboardMap[-1].m_mapping[244];
    *((_OWORD *)v11 - 4) = v18;
    v20 = *(_OWORD *)&p_keyboardMap[-1].m_mapping[248];
    *((_OWORD *)v11 - 3) = v19;
    v21 = *(_OWORD *)&p_keyboardMap[-1].m_mapping[252];
    *((_OWORD *)v11 - 2) = v20;
    *((_OWORD *)v11 - 1) = v21;
    --v12;
  }
  while ( v12 );
  v22 = FighterOperation::Instance();
  m_slots = v22->m_slots;
  if ( v22 != (FighterOperation *)-8i64 )
  {
    p_operationKeyboardMapper = &v22->m_slots[0].operationKeyboardMapper;
    v25 = 8i64;
    v26 = &v22->m_slots[0].operationKeyboardMapper;
    v27 = v109;
    do
    {
      v26 = (FighterOperationKeyboardMapper *)((char *)v26 + 128);
      v28 = *(_OWORD *)v27;
      v29 = *((_OWORD *)v27 + 1);
      v27 += 128;
      *(_OWORD *)&v26[-1].m_mapping[224] = v28;
      v30 = *((_OWORD *)v27 - 6);
      *(_OWORD *)&v26[-1].m_mapping[228] = v29;
      v31 = *((_OWORD *)v27 - 5);
      *(_OWORD *)&v26[-1].m_mapping[232] = v30;
      v32 = *((_OWORD *)v27 - 4);
      *(_OWORD *)&v26[-1].m_mapping[236] = v31;
      v33 = *((_OWORD *)v27 - 3);
      *(_OWORD *)&v26[-1].m_mapping[240] = v32;
      v34 = *((_OWORD *)v27 - 2);
      *(_OWORD *)&v26[-1].m_mapping[244] = v33;
      v35 = *((_OWORD *)v27 - 1);
      *(_OWORD *)&v26[-1].m_mapping[248] = v34;
      *(_OWORD *)&v26[-1].m_mapping[252] = v35;
      --v25;
    }
    while ( v25 );
    FighterOperation::ReverseOperationKeyboardMapper::assign(&m_slots->reverseKeyboardMapper, p_operationKeyboardMapper);
  }
  v36 = v109;
  v37 = 8i64;
  v38 = &this->SaveDataMain.ButtonConfData.buttonConfig[v5].keyboardMap;
  do
  {
    v36 += 128;
    v39 = *(_OWORD *)v38->m_mapping;
    v40 = *(_OWORD *)&v38->m_mapping[4];
    v38 = (FighterOperationKeyboardMapper *)((char *)v38 + 128);
    *((_OWORD *)v36 - 8) = v39;
    v41 = *(_OWORD *)&v38[-1].m_mapping[232];
    *((_OWORD *)v36 - 7) = v40;
    v42 = *(_OWORD *)&v38[-1].m_mapping[236];
    *((_OWORD *)v36 - 6) = v41;
    v43 = *(_OWORD *)&v38[-1].m_mapping[240];
    *((_OWORD *)v36 - 5) = v42;
    v44 = *(_OWORD *)&v38[-1].m_mapping[244];
    *((_OWORD *)v36 - 4) = v43;
    v45 = *(_OWORD *)&v38[-1].m_mapping[248];
    *((_OWORD *)v36 - 3) = v44;
    v46 = *(_OWORD *)&v38[-1].m_mapping[252];
    *((_OWORD *)v36 - 2) = v45;
    *((_OWORD *)v36 - 1) = v46;
    --v37;
  }
  while ( v37 );
  v47 = FighterOperation::Instance();
  v48 = &v47->m_slots[1];
  if ( v47 != (FighterOperation *)-1488i64 )
  {
    v49 = &v47->m_slots[1].operationKeyboardMapper;
    v50 = &v47->m_slots[1].operationKeyboardMapper;
    v51 = v109;
    do
    {
      v50 = (FighterOperationKeyboardMapper *)((char *)v50 + 128);
      v52 = *(_OWORD *)v51;
      v53 = *((_OWORD *)v51 + 1);
      v51 += 128;
      *(_OWORD *)&v50[-1].m_mapping[224] = v52;
      v54 = *((_OWORD *)v51 - 6);
      *(_OWORD *)&v50[-1].m_mapping[228] = v53;
      v55 = *((_OWORD *)v51 - 5);
      *(_OWORD *)&v50[-1].m_mapping[232] = v54;
      v56 = *((_OWORD *)v51 - 4);
      *(_OWORD *)&v50[-1].m_mapping[236] = v55;
      v57 = *((_OWORD *)v51 - 3);
      *(_OWORD *)&v50[-1].m_mapping[240] = v56;
      v58 = *((_OWORD *)v51 - 2);
      *(_OWORD *)&v50[-1].m_mapping[244] = v57;
      v59 = *((_OWORD *)v51 - 1);
      *(_OWORD *)&v50[-1].m_mapping[248] = v58;
      *(_OWORD *)&v50[-1].m_mapping[252] = v59;
      --v10;
    }
    while ( v10 );
    FighterOperation::ReverseOperationKeyboardMapper::assign(&v48->reverseKeyboardMapper, v49);
  }
  v60 = FighterOperation::Instance();
  v61 = 0;
  v62 = v60->m_slots;
  if ( v60 != (FighterOperation *)-8i64 )
  {
    userIndex = v62->userIndex;
    v62->userIndex = v4;
    v60->m_slots[0].userId = v4;
    if ( userIndex != (_DWORD)v4 )
    {
      p_m_assignListenerListEnd = &v60->m_assignListenerListEnd;
      m_Next = v60->m_assignListenerListEnd.m_Next;
      if ( m_Next != &v60->m_assignListenerListEnd )
      {
        do
        {
          p_m_Next = &m_Next[-1].m_Next;
          if ( !m_Next )
            p_m_Next = 0i64;
          ((void (__fastcall *)(extension::BiLinkable<FighterOperation::ListenerNode> **, __int64, _QWORD))(*p_m_Next)->m_Next)(
            p_m_Next,
            1i64,
            (unsigned int)v4);
          m_Next = m_Next->m_Next;
        }
        while ( m_Next != p_m_assignListenerListEnd );
      }
    }
  }
  v67 = FighterOperation::Instance();
  v68 = &v67->m_slots[1];
  if ( v67 != (FighterOperation *)-1488i64 )
  {
    v69 = v68->userIndex;
    v68->userIndex = v5;
    v67->m_slots[1].userId = v5;
    if ( v69 != (_DWORD)v5 )
    {
      v70 = &v67->m_assignListenerListEnd;
      v71 = v67->m_assignListenerListEnd.m_Next;
      if ( v71 != &v67->m_assignListenerListEnd )
      {
        do
        {
          v72 = &v71[-1].m_Next;
          if ( !v71 )
            v72 = 0i64;
          ((void (__fastcall *)(extension::BiLinkable<FighterOperation::ListenerNode> **, __int64, _QWORD))(*v72)->m_Next)(
            v72,
            2i64,
            (unsigned int)v5);
          v71 = v71->m_Next;
        }
        while ( v71 != v70 );
      }
    }
  }
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v2 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v106);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v73 = !this->SaveDataMain.SysOptionData.bVibration;
  v74 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  if ( (unsigned int)(v74 - 4) > 2 && v74 != GAME_MODE_ONLINETRAINING )
  {
    FighterOperation::SetInvalidVibration(1, v73);
    FighterOperation::SetInvalidVibration(2, v73);
    goto LABEL_65;
  }
  v75 = FighterOperation::Instance();
  v76 = v75->m_slots;
  if ( v75 != (FighterOperation *)-8i64 )
  {
    v77 = v76->userIndex;
    *(_QWORD *)&v76->userIndex = 0i64;
    if ( v77 )
    {
      v78 = &v75->m_assignListenerListEnd;
      v79 = v75->m_assignListenerListEnd.m_Next;
      if ( v79 != &v75->m_assignListenerListEnd )
      {
        do
        {
          v80 = &v79[-1].m_Next;
          if ( !v79 )
            v80 = 0i64;
          ((void (__fastcall *)(extension::BiLinkable<FighterOperation::ListenerNode> **, __int64, _QWORD))(*v80)->m_Next)(
            v80,
            1i64,
            0i64);
          v79 = v79->m_Next;
        }
        while ( v79 != v78 );
      }
    }
  }
  v81 = FighterOperation::Instance();
  v82 = &v81->m_slots[1];
  if ( v81 != (FighterOperation *)-1488i64 )
  {
    v83 = v82->userIndex;
    *(_QWORD *)&v82->userIndex = 0i64;
    if ( v83 )
    {
      v84 = &v81->m_assignListenerListEnd;
      v85 = v81->m_assignListenerListEnd.m_Next;
      if ( v85 != &v81->m_assignListenerListEnd )
      {
        do
        {
          v86 = &v85[-1].m_Next;
          if ( !v85 )
            v86 = 0i64;
          ((void (__fastcall *)(extension::BiLinkable<FighterOperation::ListenerNode> **, __int64, _QWORD))(*v86)->m_Next)(
            v86,
            2i64,
            0i64);
          v85 = v85->m_Next;
        }
        while ( v85 != v84 );
      }
    }
  }
  Instance = GameDataInfo::getInstance();
  v88 = Instance->m_GameRule[Instance->m_GameRuleIndex];
  if ( v88 == GAME_RULE_PARTY )
  {
    if ( (*((_DWORD *)&this->myRoomMemberInfo + 2) & 0x1800) != 0 )
    {
      BattleSystem::BattleController::GetActionSystem();
      v90 = *((_DWORD *)&this->myRoomMemberInfo + 4);
      if ( ((*((_DWORD *)&this->myRoomMemberInfo + 2) >> 11) & 3) - 1 == *(_DWORD *)(168 * (((v90 >> 20) & 1) + 1466i64)
                                                                                   + v91) )
      {
        LOBYTE(v61) = (v90 & 0x100000) != 0;
        FighterOperation::AssignUser(1, v4, v61 + 1);
      }
    }
  }
  else if ( (*((_DWORD *)&this->myRoomMemberInfo + 2) & 0x1800) != 0 )
  {
    LOBYTE(v61) = (*((_DWORD *)&this->myRoomMemberInfo + 4) & 0x100000) != 0;
    v89 = FighterOperation::Instance();
    FighterOperation::assignUser(v89, 1, v4, v61 + 1);
  }
  v92 = 1;
  v93 = *((_BYTE *)&this->myRoomMemberInfo + 16) & 0x7F;
  if ( v93 > 0xCu )
    v92 = 12 * ((v93 - 1) / 12) + 1;
  if ( v88 == GAME_RULE_SINGLE )
  {
LABEL_83:
    if ( v92 > v93 || v93 >= (unsigned int)v92 + 2 )
      goto LABEL_59;
    goto LABEL_82;
  }
  if ( v88 != GAME_RULE_TEAM )
  {
    if ( v88 == GAME_RULE_PARTY )
    {
      if ( v92 <= v93 && v93 < (unsigned int)v92 + 6 )
      {
        BattleSystem::BattleController::GetActionSystem();
        v102 = 1;
        if ( ((*((_DWORD *)&this->myRoomMemberInfo + 2) >> 11) & 3) - 1 == *(_DWORD *)(168
                                                                                     * (((*((_DWORD *)&this->myRoomMemberInfo
                                                                                          + 4) >> 20) & 1)
                                                                                      + 1466i64)
                                                                                     + v103) )
          v102 = v73;
        FighterOperation::SetInvalidVibration(1, v102);
        goto LABEL_62;
      }
      goto LABEL_59;
    }
    if ( v88 != GAME_RULE_TRAINING )
    {
LABEL_59:
      v94 = FighterOperation::Instance()->m_slots;
      if ( v94 )
      {
        v94->bInvalidVibration = 1;
        v95 = v94->userIndex;
        UserGameOperation::Instance();
        if ( Framework::GLManager::glm )
          Framework::Input::ControllerContext::stopVibration(&Framework::GLManager::glm->m_controllerContext, v95);
      }
      goto LABEL_62;
    }
    goto LABEL_83;
  }
  if ( v92 > v93 || v93 >= (unsigned int)v92 + 2 )
    goto LABEL_59;
LABEL_82:
  FighterOperation::SetInvalidVibration(1, v73);
LABEL_62:
  v96 = &FighterOperation::Instance()->m_slots[1];
  if ( v96 )
  {
    v96->bInvalidVibration = 1;
    v97 = v96->userIndex;
    UserGameOperation::Instance();
    if ( Framework::GLManager::glm )
      Framework::Input::ControllerContext::stopVibration(&Framework::GLManager::glm->m_controllerContext, v97);
  }
LABEL_65:
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v2 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v107);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
  {
    v98 = FighterOperation::Instance()->m_slots;
    if ( v98 )
    {
      v98->bInvalidVibration = 1;
      v99 = v98->userIndex;
      UserGameOperation::Instance();
      if ( Framework::GLManager::glm )
        Framework::Input::ControllerContext::stopVibration(&Framework::GLManager::glm->m_controllerContext, v99);
    }
    v100 = &FighterOperation::Instance()->m_slots[1];
    if ( v100 )
    {
      v100->bInvalidVibration = 1;
      v101 = v100->userIndex;
      UserGameOperation::Instance();
      if ( Framework::GLManager::glm )
        Framework::Input::ControllerContext::stopVibration(&Framework::GLManager::glm->m_controllerContext, v101);
    }
    anonymous_namespace_::SoundVolumeModulation::GetInstance()->modulationParam[1].bDisable = 1;
  }
}

void __fastcall FighterOperation::SetInvalidVibration(int fighterIndex, bool flag)
{
  __int64 v3; // rbx
  FighterOperation *v4; // rax
  int *v5; // r8
  int v6; // ebx

  v3 = fighterIndex;
  v4 = FighterOperation::Instance();
  if ( (unsigned int)(v3 - 1) <= 1 )
  {
    v5 = (int *)&v4[-1].m_slots[v3 + 1].operationMapper.m_mapping[4];
    if ( v5 )
    {
      LOBYTE((&v4->__vftable)[185 * v3]) = flag;
      if ( flag && (unsigned int)(v3 - 1) <= 1 )
      {
        v6 = *v5;
        UserGameOperation::Instance();
        if ( Framework::GLManager::glm )
          Framework::Input::ControllerContext::stopVibration(&Framework::GLManager::glm->m_controllerContext, v6);
      }
    }
  }
}

