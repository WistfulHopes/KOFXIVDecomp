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
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofshadermanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogltexture.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudrenderer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/battlecallanimation.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netbattle.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.cpp"

void AppMain::renderSetCamera(bool bNoCalc, long subCameraPlayerID); // 0x1401BC520
void AppMain::CheckProjBlendActor(Actor & actor); // 0x1401BCBF0
void AppMain::CheckProjBlendActorP1(Actor & actor); // 0x1401BCC10
void AppMain::CheckProjBlendActorP2(Actor & actor); // 0x1401BCC50
void AppMain::checkGameLightFlag(); // 0x1401BCC90
void AppMain::checkSpecialEffectSetting(); // 0x1401BCDD0
void AppMain::CheckBGColorSetting(); // 0x1401BCED0
class AppMain::CheckBGColorSetting::__l28::<lambda_b96c9f0c3bce8ccd57f7791319f17781>
{
public:
	void operator()(EffectDataListManager &);
	<lambda_b96c9f0c3bce8ccd57f7791319f17781>(AppMain::CheckBGColorSetting::__l28::<lambda_b96c9f0c3bce8ccd57f7791319f17781> &);
	<lambda_b96c9f0c3bce8ccd57f7791319f17781>();
	<lambda_b96c9f0c3bce8ccd57f7791319f17781>(OGLVec4 &);
private:
	OGLVec4 & colvec; // 0x0
public:
	AppMain::CheckBGColorSetting::__l28::<lambda_b96c9f0c3bce8ccd57f7791319f17781> & operator=(const AppMain::CheckBGColorSetting::__l28::<lambda_b96c9f0c3bce8ccd57f7791319f17781> &);
};
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5CDB0
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B00
void AppMain::SetBattleRoundTransition(const BattleSystem::BattleRoundInfo & info); // 0x1401BD2E0
void AppMain::SetRoundRestart(bool bRoundRestart, bool bReload); // 0x1401BD510
void AppMain::BattleRestartCheck(); // 0x1401BD700
void AppMain::BattleEndCheck(); // 0x1401BD900
void AppMain::BattleRoundStartCheck(); // 0x1401BE040
void AppMain::BattleKOStateCheck(); // 0x1401BE3B0
void AppMain::DrawKeyHistory(PLAYER_ID playerID, InputKeyHistory * pKeyHistory); // 0x1401BED00
void AppMain::BattleAttackDataDraw(); // 0x1401BEDC0
void AppMain::BattleKeyRecordDraw(); // 0x1401BEF40
void AppMain::BattleEnteringDraw(); // 0x1401BF200
void AppMain::MaskTextureDraw(OGLTexture * pMask, bool bFullScreen); // 0x1401BF310
bool AppMain::BattleNewChallengerCheck(); // 0x1401BFC20
void SystemMessageCallback_PartyBattleDisconnectNotification(long cursor); // 0x1401BFE50
void SystemMessageCallback_NotPartyBattleDisconnectNotification(long cursor); // 0x1401BFE70
void AppMain::PartyBattleDisconnectNotification(); // 0x1401BFF90
void AppMain::UpdatePlayerDataCharaUseCount(PLAYER_ID playerID, CHARACTER_NO charNo, bool bWinner, long index); // 0x1401C0170
const BattleEventHandler::Listener::CharacterStatus * AppMain::createBattleCharacterStatus(BattleEventHandler::Listener::CharacterStatus * pStatus); // 0x1401C0280
long AppMain::GetBattleRound(); // 0x1401C03E0//decompilation failure at 140A5CDB0!
//decompilation failure at 1408A0B00!
void __fastcall std::_Func_class<void,>::~_Func_class<void,>(std::function<void __cdecl(void)> *this, __int64 a2)
{
  std::function<void __cdecl(void)> *v3; // rcx

  v3 = (std::function<void __cdecl(void)> *)this->_Mystorage._Ptrs[7];
  if ( v3 )
  {
    LOBYTE(a2) = v3 != this;
    ((void (__fastcall *)(std::function<void __cdecl(void)> *, __int64))v3->_Mystorage._Ptrs[0][4].__vftable)(v3, a2);
    this->_Mystorage._Ptrs[7] = 0i64;
  }
}

void __fastcall AppMain::BattleAttackDataDraw(AppMain *this)
{
  BattleSystem::BattleController *v2; // rdx
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v4; // rbx
  BattleSystem::BattleController *v5; // rax
  __int64 v6; // rcx
  char *v7; // rax
  int v8; // edi
  BattleHud::AttackData **v9; // rbx
  char *v10; // r14
  char *v11; // rbp
  signed __int64 v12; // rdx
  signed __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // r15
  _DWORD *v16; // rax
  BattleHud::AttackData *pAttackDataP1[2]; // [rsp+28h] [rbp-60h] BYREF
  char v18; // [rsp+38h] [rbp-50h] BYREF
  char v19; // [rsp+3Ch] [rbp-4Ch] BYREF
  char v20; // [rsp+40h] [rbp-48h] BYREF
  BattleSystem::BattleController *v21; // [rsp+98h] [rbp+10h]
  BattleSystem::BattleController *v22; // [rsp+98h] [rbp+10h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v21 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v21);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  v4 = v2;
  if ( !v2 )
  {
    v22 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v22);
    v2 = v5;
    BattleSystem::BattleController::instance = v5;
  }
  if ( v4->bAttackData )
  {
    v6 = 2i64;
    v7 = &v20;
    do
    {
      *((_QWORD *)v7 - 1) = 0i64;
      *(_QWORD *)v7 = 0i64;
      v7 += 16;
      --v6;
    }
    while ( v6 );
    v8 = 0;
    v9 = pAttackDataP1;
    v10 = &v19;
    v11 = &v18;
    v12 = (char *)v2 - (char *)pAttackDataP1;
    v13 = v12 + 237216;
    do
    {
      *v9 = 0i64;
      if ( (unsigned int)v8 <= 1 )
      {
        v14 = *(__int64 *)((char *)v9 + v13);
        if ( v14 )
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, signed __int64, _QWORD))(*(_QWORD *)v14 + 2368i64))(
                  *(BattleHud::AttackData **)((char *)v9 + v13),
                  v12,
                  0i64);
          if ( v15 )
          {
            v16 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 3832i64))(v14);
            *((_DWORD *)v10 - 1) = v16[4];
            *(_DWORD *)v10 = v16[5];
            *((_DWORD *)v10 + 1) = v16[7];
            *((_DWORD *)v10 + 2) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 3448i64))(v15);
            *v9 = (BattleHud::AttackData *)v11;
          }
        }
      }
      ++v8;
      v11 += 16;
      v10 += 16;
      ++v9;
    }
    while ( v8 < 2 );
    BattleHud::drawAttackData(&this->m_BattleHud, pAttackDataP1[0], pAttackDataP1[1]);
  }
}

void __fastcall AppMain::BattleEndCheck(AppMain *this, float a2)
{
  BattleSystem::BattleController *v3; // rsi
  BattleSystem::BattleController *v4; // rax
  BattleSystem::BATTLE_MODE battleMode; // eax
  int iRoundCount; // er14
  NetBattleCommandManager *roundWinnerID; // rcx
  BATTLE_RESULT_TYPE v8; // er8
  signed int v9; // edi
  NetBattleCommandManager *v10; // rbp
  __int64 v11; // r8
  Fix32 *p_xClimaxTime; // r9
  __int64 v13; // rdx
  GameDataInfo *v14; // rax
  int v15; // er8
  NetBattleCommandManager *m_GameModeIndex; // rcx
  GAME_MODE v17; // edx
  int v18; // edx
  int v19; // er8
  __int64 v20; // rdi
  BattleSystem::BattleController *v21; // rax
  BattleSystem::BattleController *v22; // rax
  int v23; // edx
  int v24; // er8
  NetBattleCommandManager *v25; // rcx
  GameDataInfo *v26; // rax
  GameDataInfo *v27; // rax
  AppMain *v28; // rcx
  GameDataInfo *Instance; // rax
  bool v30; // r8
  GameDataInfo *v31; // rax
  GAME_MODE v32; // ecx
  GameDataInfo *v33; // rax
  int v34; // er8
  GAME_MODE v35; // edx
  int v36; // er8
  bool v37; // r8
  int v38; // esi
  extension::SoundManager *v39; // rax
  int v40; // edx
  GameDataInfo *v41; // rax
  int v42; // er8
  GAME_MODE v43; // edx
  BattleSystem::BattleController::ROUND_PHASE roundPhase; // eax
  BattleSystem::BattleController *v45; // rcx
  AppMain *v46; // rcx
  BattleEventHandler *v47; // rdi
  BattleEventHandler::Listener **i; // rbx
  AppMain *v49; // rcx
  __int64 result[2]; // [rsp+20h] [rbp-5D8h] BYREF
  NET_USER_DATA pInfo; // [rsp+30h] [rbp-5C8h] BYREF

  result[1] = -2i64;
  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    result[0] = (__int64)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController((BattleSystem::BattleController *)result[0]);
    v3 = v4;
    BattleSystem::BattleController::instance = v4;
  }
  if ( !this->m_FadeExitFunc && v3->roundPhase > DIE )
  {
    battleMode = v3->battleInfo.battleMode;
    if ( battleMode != MISSION && battleMode != MISSION_DEVELOP )
    {
      this->bBattleFastForward = 0;
      if ( this->m_FuncFT == 170 )
      {
        if ( this->m_bFadeEnd || !this->m_iFadeAlpha )
        {
          iRoundCount = v3->battleInfo.iRoundCount;
          if ( v3->bBattleEnd )
            ++iRoundCount;
          roundWinnerID = (NetBattleCommandManager *)(unsigned int)v3->battleInfo.roundWinnerID;
          v8 = BATTLE_RESULT_TYPE_NONE;
          if ( (_DWORD)roundWinnerID == 3 )
            v8 = BATTLE_RESULT_TYPE_DRAW;
          v9 = 0;
          if ( (_DWORD)roundWinnerID != 3 )
            v8 = (_DWORD)roundWinnerID != 1;
          if ( v3->battleInfo.bReplaySaveTarget )
          {
            v10 = pBtlNet;
            if ( pBtlNet )
            {
              NetBattleCommandManager::SetReplayRoundCommandBuffer(roundWinnerID, iRoundCount - 1, v8);
              v10 = pBtlNet;
            }
            if ( v10 )
              NetBattleCommandManager::SetReplayRoundInfo(
                (NetBattleCommandManager *)(76i64 * v3->battleInfo.iRoundCount),
                iRoundCount - 1,
                &v3->roundInfo[v3->battleInfo.iRoundCount]);
            v11 = 0i64;
            p_xClimaxTime = &v3->playerInfo[0].roundEndInfo.xClimaxTime;
            do
            {
              if ( v10 )
              {
                v13 = v11 + 2 * (iRoundCount - 1i64);
                replayBattle.m_RoundEndInfo[0][v13].xVital = p_xClimaxTime[-2].value;
                replayBattle.m_RoundEndInfo[0][v13].xExPower = p_xClimaxTime[-1].value;
                replayBattle.m_RoundEndInfo[0][v13].xClimaxTime = p_xClimaxTime->value;
                replayBattle.m_RoundEndInfo[0][v13].xGuardPower = p_xClimaxTime[1].value;
                replayBattle.m_RoundEndInfo[0][v13].xStunPower = p_xClimaxTime[2].value;
                replayBattle.m_RoundEndInfo[0][v13].xRecoveryVital = p_xClimaxTime[3].value;
                replayBattle.m_RoundEndInfo[0][v13].bTakeOverActor = p_xClimaxTime[4].value;
              }
              ++v11;
              p_xClimaxTime += 42;
            }
            while ( v11 < 2 );
          }
          if ( v3->bBattleEnd )
          {
            BattleHud::hideUsernames(&this->m_BattleHud);
            if ( (unsigned int)(v3->battleInfo.battleMode - 3) <= 2 )
            {
              BTLNT_Start();
              BTLNT_StartBattle();
              AppMain::Sound_StopBattleSE(v28, a2);
              Instance = GameDataInfo::getInstance();
              GameDataInfo::AutoSetRandSeed(Instance);
              BattleSystem::BattleController::BattleInit(v3, 0);
              AppMain::BattleRoundInit(this, 0, v30);
            }
            else if ( GameDataInfo::getInstance()->m_ReplayFlag )
            {
              this->bAT_NextBattleExit = 0;
              this->iReserveScene = -1;
              this->m_FadeST = this->m_PrevScene;
              this->m_FuncST = 0;
              this->m_FadeExitFunc = 181;
              *(_WORD *)&this->m_bFadeEnd = 0;
              this->m_iFadeFrame = 0;
              this->m_iFadeColor.rgba = 255;
              *(_QWORD *)&this->m_iFadeAlpha = 255000i64;
              this->m_bFadeLock = 0;
              this->m_FuncFT = 170;
              anonymous_namespace_::SoundVolumeModulation::GetInstance()->modulationParam[1].bDisable = 0;
            }
            else
            {
              time64(result);
              v14 = GameDataInfo::getInstance();
              m_GameModeIndex = (NetBattleCommandManager *)v14->m_GameModeIndex;
              v17 = v14->m_GameMode[(_QWORD)m_GameModeIndex];
              if ( (unsigned int)(v17 - 4) <= 2 || v17 == GAME_MODE_ONLINETRAINING )
              {
                this->bAT_NextBattleExit = 0;
                v20 = result[0];
                if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_RANK )
                {
                  BattleSystem::BattleController::GetActionSystem();
                  BattleSystem::BattleController::BattleResultInitRankMatch(v21, v20);
                }
                else if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_FREE )
                {
                  BattleSystem::BattleController::GetActionSystem();
                  BattleSystem::BattleController::BattleResultInitFreeMatch(v22);
                }
                NetManager::ChangeState(&g_NetworkManager, NET_STATE_GAMERESULT, v15);
                NetManager::GetBattleStartTableRoomMemberInfo(&g_NetworkManager, &pInfo);
                if ( this->m_DevMode == DEV_MODE_NONE )
                {
                  AppMain::SetResultLoadingNonFade(this, v23, v24);
                  if ( v3->battleInfo.bReplaySaveTarget )
                  {
                    AddOpponentList(v20, &pInfo);
                    if ( pBtlNet )
                      NetBattleCommandManager::SetReplayDataInfo(v25, v20, &pInfo);
                    if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_RANK )
                    {
                      v26 = GameDataInfo::getInstance();
                      v26->m_GameMode[v26->m_GameModeIndex] = GAME_MODE_RANKMATCH;
                    }
                    else
                    {
                      v27 = GameDataInfo::getInstance();
                      v27->m_GameMode[v27->m_GameModeIndex] = GAME_MODE_FREEMATCH;
                    }
                  }
                }
              }
              else
              {
                if ( v3->battleInfo.bReplaySaveTarget && pBtlNet )
                  NetBattleCommandManager::SetReplayDataInfo(m_GameModeIndex, result[0], 0i64);
                if ( BattleSystem::BattleController::IsSuccessiveBattle((BattleSystem::BattleController *)m_GameModeIndex)
                  && !BattleSystem::BattleController::IsSuccessiveBattleEnd(v3) )
                {
                  AppMain::SetBattleLoadingNonFade(this, v18, 181);
                }
                else
                {
                  this->bAT_NextBattleExit = 0;
                  AppMain::SetResultLoadingNonFade(this, v18, v19);
                }
              }
            }
          }
          else if ( (v3->battleInfo.bExtraRound || v3->battleInfo.battleMode)
                 && (v31 = GameDataInfo::getInstance(),
                     v32 = v31->m_GameMode[v31->m_GameModeIndex],
                     (unsigned int)(v32 - 4) > 2)
                 && v32 != GAME_MODE_ONLINETRAINING )
          {
            if ( GameDataInfo::getInstance()->m_ReplayFlag )
              SetCommandBufferForReplay(iRoundCount);
            v33 = GameDataInfo::getInstance();
            v35 = v33->m_GameMode[v33->m_GameModeIndex];
            if ( (unsigned int)(v35 - 4) <= 2 || v35 == GAME_MODE_ONLINETRAINING )
            {
              NetManager::ChangeState(&g_NetworkManager, NET_STATE_BATTLELOADING, v34);
              NetManager::ChangeState(&g_NetworkManager, NET_STATE_BATTLELOADINGEND, v36);
            }
            BTLNT_Start();
            BTLNT_StartBattle();
            v38 = 133124;
            do
            {
              if ( (unsigned int)v9 > 0x11 || !_bittest(&v38, v9) )
              {
                v39 = extension::SoundManager::the_instance;
                if ( !extension::SoundManager::the_instance )
                {
                  result[0] = (__int64)operator new(0x310ui64);
                  extension::SoundManager::SoundManager((extension::SoundManager *)result[0]);
                  extension::SoundManager::the_instance = v39;
                }
                extension::SoundManager::stopGroupSE(v39, v9);
              }
              ++v9;
            }
            while ( v9 < 18 );
            AppMain::BattleRoundInit(this, 0, v37);
          }
          else
          {
            this->bAT_NextBattleExit = 1;
            BattleHud::hideUsernames(&this->m_BattleHud);
            AppMain::SetBattleLoadingNonFade(this, v40, 181);
            v41 = GameDataInfo::getInstance();
            v43 = v41->m_GameMode[v41->m_GameModeIndex];
            if ( (unsigned int)(v43 - 4) <= 2 || v43 == GAME_MODE_ONLINETRAINING )
              NetManager::ChangeState(&g_NetworkManager, NET_STATE_BATTLELOADING, v42);
          }
        }
      }
      else
      {
        roundPhase = v3->roundPhase;
        if ( roundPhase == (WALL|HIT) && v3->uiRoundPhaseFrame )
        {
          this->m_bFadeEnd = 0;
          this->m_iFadeFrame = 20;
          *(_QWORD *)&this->m_iFadeColor.rgba = 255i64;
          v45 = (BattleSystem::BattleController *)(50 * (unsigned int)this->m_iFadeColor.s.a);
          this->m_iFadeRate = (int)v45;
          this->m_bFadeLock = 0;
          this->m_FuncFT = 170;
          if ( v3->bBattleEnd )
          {
            if ( !BattleSystem::BattleController::IsSuccessiveBattle(v45)
              || BattleSystem::BattleController::IsSuccessiveBattleEnd(v3) )
            {
              AppMain::StopBGMUtil(v46, 0.40000001);
            }
            AppMain::Sound_Volume_SE_Modulation(v46, 0.0, 0.40000001);
          }
          else
          {
            anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_AMBIENCE, 0.0, 0.40000001);
          }
          if ( this->m_watchingParams.operationType )
            this->m_watchingParams.bOpenGFxMenu = 0;
          v47 = BattleEventHandler::getInstance();
          for ( i = v47->m_pListenerList->m_items._Mypair._Myval2._Myfirst;
                i != v47->m_pListenerList->m_items._Mypair._Myval2._Mylast;
                ++i )
          {
            (*i)->OnEventFadeOut(*i);
          }
        }
        else if ( roundPhase == (WALL|ERASE) && v3->uiRoundPhaseFrame )
        {
          this->m_bFadeEnd = 0;
          this->m_iFadeFrame = 180;
          this->m_iFadeColor.rgba = -1;
          v49 = (AppMain *)(1000 * (unsigned int)this->m_iFadeColor.s.a);
          this->m_iFadeRate = (int)v49 / 180;
          this->m_iFadeAlpha = 0;
          this->m_bFadeLock = 0;
          this->m_FuncFT = 170;
          AppMain::StopBGMUtil(v49, 2.0);
          anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_AMBIENCE, 0.0, 2.0);
          anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_SYSTEM_VOICE, 0.0, 2.0);
        }
      }
    }
  }
}

void __fastcall AppMain::BattleEnteringDraw(AppMain *this)
{
  BattleSystem::BattleController *v2; // rax
  GameDataInfo *v3; // rcx
  BattleHudRenderer::RenderParams params; // [rsp+28h] [rbp-20h] BYREF
  BattleSystem::BattleController *v5; // [rsp+58h] [rbp+10h]

  if ( !BattleSystem::BattleController::instance )
  {
    v5 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v5);
    BattleSystem::BattleController::instance = v2;
  }
  if ( Fw::MatchingTarget::m_RoomId.m_steamid.m_comp )
  {
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
    if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_TRAINING
      && !this->m_BattleHud.isError(&this->m_BattleHud.ErrorChecker)
      && this->m_BattleHud.m_bInitialize
      && this->m_BattleHud.m_bResoucesActived )
    {
      params.positionPlusX = 0;
      params.barRenderColor = -1;
      LODWORD(params.barLengthRate) = FLOAT_1_0;
      params.positionPlusY = this->m_BattleHud.m_gaugeRenderParams.upperGaugePositionPlusY;
      params.gaugeRenderColor = this->m_BattleHud.m_gaugeRenderParams.gaugeRenderColor;
      BattleHudRenderer::renderEntering(this->m_BattleHud.m_pRenderer, &params);
    }
  }
}

void __fastcall AppMain::BattleKOStateCheck(AppMain *this)
{
  AppMain *v1; // r15
  BattleSystem::BattleController *v2; // rdi
  BattleSystem::BattleController *v3; // rax
  AppMain *v4; // rcx
  const ComboMissionData::MissionData *pMissionData; // rax
  BattleSystem::BattleController::ROUND_PHASE roundPhase; // er10
  BattleCall *p_m_BattleCall; // rsi
  int v8; // er13
  BattleCallAnimation *Animation; // rax
  int PlayingAnimationCategory; // eax
  int v11; // ebp
  int v12; // er8
  __int64 v13; // rdx
  int SaveDataMyAnnounceType; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  BattleSystem::WINNER_ID::ID v17; // ecx
  _BOOL8 v18; // rcx
  ActorChara *v19; // rbx
  __int64 v20; // rbp
  char *v21; // rcx
  __int64 v22; // rax
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  BattleSystem::WINNER_ID::ID roundWinnerID; // ecx
  _BOOL8 v27; // rcx
  ActorChara *v28; // rbx
  __int64 v29; // rbp
  char *v30; // rcx
  __int64 v31; // rax
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  BattleCall *v35; // rcx
  BattleEventHandler::Listener::CharacterStatus *v36; // rdx
  STAGE_ID m_StageID; // er12
  BattleSystem::WINNER_ID::ID v38; // eax
  unsigned int v39; // ebp
  BattleEventHandler *v40; // r15
  AppMain *m_pListenerList; // rcx
  BattleEventHandler::Listener **j; // rbx
  BattleSystem::BATTLE_MODE battleMode; // eax
  BattleSystem::BATTLE_MODE v44; // eax
  bool v45; // bl
  GameDataInfo *v46; // rax
  bool v47; // dl
  GAME_MODE v48; // eax
  BattleCall *v49; // rcx
  BattleCall *v50; // rcx
  const ComboMissionData::MissionData *v51; // rax
  BattleCallAnimation *v52; // rax
  BattleCallAnimation *v53; // rax
  int v54; // eax
  BattleCallAnimation *v55; // rax
  BattleCallDefines::EAnimationType::Type m_animationType; // ecx
  BattleCallAnimation *v57; // rax
  float m_animationFrame; // xmm1_4
  STAGE_ID v59; // ebp
  BattleEventHandler::Listener::CharacterStatus *v60; // rdx
  BattleEventHandler *v61; // rsi
  BattleEventHandler::Listener **k; // rbx
  BattleEventHandler::Listener::BattleResult v63; // er14
  char v64; // r9
  InputKeyCheck *m_KeyData; // r8
  __int64 v66; // r13
  unsigned int uiDelay; // ecx
  int *v68; // rdx
  int v69; // eax
  __int64 v70; // rdx
  GameDataInfo *v71; // rcx
  GAME_MODE v72; // eax
  unsigned int v73; // ebp
  int iRoundLimitFrame; // ecx
  BattleEventHandler *Instance; // rsi
  BattleEventHandler::Listener **i; // rbx
  int v77; // ecx
  BattleEventHandler *v78; // rdi
  BattleEventHandler::Listener **m; // rbx
  BattleSystem::BattleController *v81[2]; // [rsp+30h] [rbp-48h] BYREF

  v1 = this;
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v81[0] = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v81[0]);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  if ( BattleSystem::BattleController::IsComboMissionMode((BattleSystem::BattleController *)this) )
  {
    if ( v2->comboMission.bComboTermFailed )
    {
      AppMain::BattleMissionFailedEvent(v4);
    }
    else
    {
      pMissionData = v2->comboMission.pMissionData;
      if ( !pMissionData || !pMissionData->settingData.iCompleteType && v2->comboMission.bOneTermClear )
        AppMain::BattleMissionNextEvent(v4);
    }
  }
  if ( !v2->bPartyBattle || !v1->battleDisconnectMessageState )
  {
    roundPhase = v2->roundPhase;
    if ( (unsigned int)(roundPhase - 7) > 1 )
    {
      if ( (unsigned int)(roundPhase - 9) <= 1 )
      {
        v63 = BATTLERESULT_YOU_WIN;
        v64 = 0;
        m_KeyData = v1->m_KeyData;
        v66 = 2i64;
        do
        {
          uiDelay = m_KeyData->pKeyBuffer._Mypair._Myval2->uiDelay;
          if ( uiDelay < m_KeyData->pKeyBuffer._Mypair._Myval2->uiDataSize
            && (v68 = &m_KeyData->pKeyBuffer._Mypair._Myval2->pBuffer[m_KeyData->pKeyBuffer._Mypair._Myval2->uiBufferMask & (m_KeyData->pKeyBuffer._Mypair._Myval2->uiEndIndex - uiDelay - 1)]) != 0i64 )
          {
            v69 = *v68;
          }
          else
          {
            LOBYTE(v69) = 0;
          }
          v64 |= v69;
          ++m_KeyData;
          --v66;
        }
        while ( v66 );
        if ( (v64 & 0xF0) != 0 && (unsigned int)(roundPhase - 9) <= 1 )
          *(_QWORD *)&v2->roundPhase = 12i64;
        if ( !v1->m_eventCheckValues.bRoundEnd )
        {
          v1->m_eventCheckValues.bRoundEnd = 1;
          v70 = 40i64;
          if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                                    + 40i64) )
          {
            Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
            if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
            {
              GameDataInfo::GameDataInfo(v71);
              Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
            }
          }
          v72 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
          if ( v72 == GAME_MODE_STORY || (unsigned int)(v72 - 7) <= 1 )
          {
            LOBYTE(v63) = v2->battleInfo.roundWinnerID != COUNTER_HIT;
          }
          else
          {
            LOBYTE(v63) = v2->battleInfo.roundWinnerID != COUNTER_HIT;
            v63 += 3;
          }
          if ( v2->battleInfo.timeLimit )
          {
            iRoundLimitFrame = v2->battleInfo.iRoundLimitFrame;
            LODWORD(v70) = (unsigned __int64)(-1240768329i64 * iRoundLimitFrame) >> 32;
            v73 = iRoundLimitFrame / 90;
          }
          else
          {
            v73 = -1;
          }
          AppMain::createBattleCharacterStatus((AppMain *)v81, (BattleEventHandler::Listener::CharacterStatus *)v70);
          Instance = BattleEventHandler::getInstance();
          for ( i = Instance->m_pListenerList->m_items._Mypair._Myval2._Myfirst;
                i != Instance->m_pListenerList->m_items._Mypair._Myval2._Mylast;
                ++i )
          {
            (*i)->OnEventRoundEnd(*i, v63, v73, (const BattleEventHandler::Listener::CharacterStatus *)v81);
          }
        }
      }
      goto LABEL_154;
    }
    p_m_BattleCall = &v1->m_BattleCall;
    v8 = 2;
    if ( !v1->m_BattleCall.m_bActived
      || !v1->m_BattleCall.m_bAnimationPlaying
      || (Animation = BattleCall::getAnimation(&v1->m_BattleCall), !Animation->m_bAnimationPlaying)
      || Animation->m_bAnimationFinished )
    {
      PlayingAnimationCategory = BattleCall::getPlayingAnimationCategory(&v1->m_BattleCall);
      switch ( PlayingAnimationCategory )
      {
        case 0:
          BattleCall::clear(&v1->m_BattleCall);
          v11 = -1;
          if ( v2->battleInfo.roundWinnerID == REVERSAL )
          {
            v1->m_BattleCall.m_voiceType = VOICETYPE_SYSTEM;
            v12 = 0;
            if ( v1->m_BattleCall.m_entryAnimatoinCount > 0 )
            {
              v13 = 0i64;
              do
              {
                v1->m_BattleCall.m_pAnimations[v13].animation->m_voiceType = v1->m_BattleCall.m_voiceType;
                ++v12;
                ++v13;
              }
              while ( v12 < v1->m_BattleCall.m_entryAnimatoinCount );
            }
            goto LABEL_68;
          }
          SaveDataMyAnnounceType = AppMain::GetSaveDataMyAnnounceType(
                                     v1,
                                     (PLAYER_ID)(v2->battleInfo.roundWinnerID != COUNTER_HIT));
          v16 = 0i64;
          if ( SaveDataMyAnnounceType )
          {
            v1->m_BattleCall.m_voiceType = VOICETYPE_FEMALE;
            if ( v1->m_BattleCall.m_entryAnimatoinCount > 0 )
            {
              v15 = 0i64;
              do
              {
                v1->m_BattleCall.m_pAnimations[v15].animation->m_voiceType = v1->m_BattleCall.m_voiceType;
                v16 = (unsigned int)(v16 + 1);
                ++v15;
              }
              while ( (int)v16 < v1->m_BattleCall.m_entryAnimatoinCount );
            }
            roundWinnerID = v2->battleInfo.roundWinnerID;
            if ( roundWinnerID == REVERSAL || v2->roundPhase <= DIE )
              goto LABEL_68;
            v27 = roundWinnerID == GUARD_CRASH;
            v28 = v2->actSystem.pPlayer[v27];
            v29 = v27;
            v30 = (char *)v2 + 168 * v27;
            v31 = *((int *)v30 + 61545);
            if ( (int)v31 < 5 )
              v32 = *(_DWORD *)&v30[4 * v31 + 246160];
            else
              v32 = 0;
            v33 = v32 - 7;
            if ( !v33 )
            {
              v11 = 261;
              goto LABEL_68;
            }
            v34 = v33 - 1;
            if ( !v34 )
            {
              v11 = 262;
              goto LABEL_68;
            }
            if ( v34 == 1 )
            {
              v11 = 263;
              goto LABEL_68;
            }
            if ( v28 )
            {
              if ( ((unsigned __int8 (__fastcall *)(ActorChara *, __int64, __int64))v28->IsVitalMax)(v28, v15 * 32, v16) )
              {
                v11 = 264;
                goto LABEL_68;
              }
              if ( v28->GetVitalPercent(v28) <= 250 )
              {
                v11 = 265;
                goto LABEL_68;
              }
            }
            if ( v2->playerInfo[v29].iStraightSetCount == 1 )
              v11 = 260;
            else
              v11 = v2->playerInfo[v29].iRoundSetCount & 1 | 0x102;
          }
          else
          {
            v1->m_BattleCall.m_voiceType = VOICETYPE_MALE;
            if ( v1->m_BattleCall.m_entryAnimatoinCount > 0 )
            {
              v15 = 0i64;
              do
              {
                v1->m_BattleCall.m_pAnimations[v15].animation->m_voiceType = v1->m_BattleCall.m_voiceType;
                v16 = (unsigned int)(v16 + 1);
                ++v15;
              }
              while ( (int)v16 < v1->m_BattleCall.m_entryAnimatoinCount );
            }
            v17 = v2->battleInfo.roundWinnerID;
            if ( v17 == REVERSAL || v2->roundPhase <= DIE )
              goto LABEL_68;
            v18 = v17 == GUARD_CRASH;
            v19 = v2->actSystem.pPlayer[v18];
            v20 = v18;
            v21 = (char *)v2 + 168 * v18;
            v22 = *((int *)v21 + 61545);
            if ( (int)v22 < 5 )
              v23 = *(_DWORD *)&v21[4 * v22 + 246160];
            else
              v23 = 0;
            v24 = v23 - 7;
            if ( !v24 )
            {
              v11 = 253;
              goto LABEL_68;
            }
            v25 = v24 - 1;
            if ( !v25 )
            {
              v11 = 254;
              goto LABEL_68;
            }
            if ( v25 == 1 )
            {
              v11 = 255;
              goto LABEL_68;
            }
            if ( v19 )
            {
              if ( ((unsigned __int8 (__fastcall *)(ActorChara *, __int64, __int64))v19->IsVitalMax)(v19, v15 * 32, v16) )
              {
                v11 = 256;
                goto LABEL_68;
              }
              if ( v19->GetVitalPercent(v19) <= 250 )
              {
                v11 = 257;
                goto LABEL_68;
              }
            }
            if ( v2->playerInfo[v20].iStraightSetCount == 1 )
              v11 = 252;
            else
              v11 = v2->playerInfo[v20].iRoundSetCount & 1 | 0xFA;
          }
LABEL_68:
          if ( v2->battleInfo.roundFinishType == GUARD_CRASH )
          {
            BattleCall::entryAnimation_DoubleKO(&v1->m_BattleCall);
          }
          else if ( v2->battleInfo.roundFinishType == REVERSAL )
          {
            BattleCall::entryAnimation_TimeUp(&v1->m_BattleCall);
          }
          else
          {
            v35 = &v1->m_BattleCall;
            if ( v2->battleInfo.roundFinishType == SUPER_CANCEL )
            {
              BattleCall::entryAnimation_Complete(v35);
            }
            else
            {
              BattleCall::entryAnimation_KO(v35, (SoundId)v11);
              BattleCall::getAnimation(&v1->m_BattleCall)->m_nextScneWaitPlayendSoundID = v11;
            }
          }
          BattleCall::start(&v1->m_BattleCall);
          m_StageID = GameDataInfo::getInstance()->m_StageID;
          v38 = v2->battleInfo.roundWinnerID;
          if ( v38 == REVERSAL )
            v39 = 2;
          else
            v39 = (v38 != COUNTER_HIT) + 3;
          AppMain::createBattleCharacterStatus((AppMain *)v81, v36);
          v40 = BattleEventHandler::getInstance();
          m_pListenerList = (AppMain *)v40->m_pListenerList;
          for ( j = v40->m_pListenerList->m_items._Mypair._Myval2._Myfirst;
                j != v40->m_pListenerList->m_items._Mypair._Myval2._Mylast;
                ++j )
          {
            (*j)->OnEventRoundEndKO(
              *j,
              m_StageID,
              (BattleEventHandler::Listener::BattleResult)v39,
              (const BattleEventHandler::Listener::CharacterStatus *)v81);
          }
          battleMode = v2->battleInfo.battleMode;
          if ( battleMode == MISSION || battleMode == MISSION_DEVELOP )
            AppMain::BattleMissionNextEvent(m_pListenerList);
          v1 = this;
          break;
        case 2:
          if ( BattleSystem::BattleController::IsGotoRoundEndPausePhase(v2) )
          {
            v44 = v2->battleInfo.battleMode;
            if ( v44 == MISSION || v44 == MISSION_DEVELOP )
            {
              BattleCall::clear(&v1->m_BattleCall);
              v51 = v2->comboMission.pMissionData;
              if ( v51 && v51->settingData.iCompleteCount > v2->comboMission.iCompleteCount )
              {
                *(_QWORD *)&v2->roundPhase = 6i64;
              }
              else if ( v2->roundPhase == WALL )
              {
                *(_QWORD *)&v2->roundPhase = 12i64;
              }
            }
            else
            {
              v45 = BattleSystem::BattleController::IsPerfectWin(v2) && v2->battleInfo.roundFinishType != REVERSAL;
              BattleCall::clear(&v1->m_BattleCall);
              if ( v2->battleInfo.roundWinnerID == REVERSAL )
              {
                BattleCall::entryAnimation_Draw(&v1->m_BattleCall);
              }
              else
              {
                v46 = GameDataInfo::getInstance();
                v48 = v46->m_GameMode[v46->m_GameModeIndex];
                if ( v48 == GAME_MODE_STORY || (unsigned int)(v48 - 7) <= 1 )
                {
                  v50 = &v1->m_BattleCall;
                  if ( v2->battleInfo.roundWinnerID == COUNTER_HIT )
                    BattleCall::entryAnimation_YouWin(v50, v45);
                  else
                    BattleCall::entryAnimation_YouLose(v50, v47);
                }
                else
                {
                  v49 = &v1->m_BattleCall;
                  if ( v2->battleInfo.roundWinnerID == COUNTER_HIT )
                    BattleCall::entryAnimation_PlayerWin(v49, PLAYER_ID_1P, v45);
                  else
                    BattleCall::entryAnimation_PlayerWin(v49, PLAYER_ID_2P, v45);
                }
              }
              BattleCall::start(&v1->m_BattleCall);
            }
          }
          break;
        case 3:
          BattleCall::clear(&v1->m_BattleCall);
          BattleSystem::BattleController::SetRoundEndPausePhase(v2);
          break;
      }
    }
    BattleCall::getAnimation(p_m_BattleCall);
    if ( p_m_BattleCall->m_bAnimationPlaying )
    {
      v52 = BattleCall::getAnimation(p_m_BattleCall);
      BattleCallAnimation::update(v52, 1.0);
      v53 = BattleCall::getAnimation(p_m_BattleCall);
      if ( !v53->m_bAnimationPlaying || v53->m_bAnimationFinished )
      {
        v54 = p_m_BattleCall->m_animationIndex + 1;
        if ( v54 < p_m_BattleCall->m_entryAnimatoinCount )
        {
          p_m_BattleCall->m_animationIndex = v54;
          v55 = BattleCall::getAnimation(p_m_BattleCall);
          BattleCallAnimation::start(v55);
        }
        else
        {
          p_m_BattleCall->m_bAnimationPlaying = 0;
        }
      }
    }
    if ( !p_m_BattleCall->m_bActived )
      goto LABEL_154;
    m_animationType = BattleCall::getAnimation(p_m_BattleCall)->m_animationType;
    if ( m_animationType == COUNTER_HIT )
    {
      v8 = 1;
      goto LABEL_124;
    }
    if ( m_animationType > COUNTER_HIT )
    {
      if ( m_animationType <= ADVANCED_CANCEL )
      {
LABEL_124:
        if ( v8 == 2 )
        {
          v57 = BattleCall::getAnimation(p_m_BattleCall);
          m_animationFrame = v57->m_animationFrame;
          if ( v57->m_drawAnimationFrame != m_animationFrame
            && v57->m_animationFrameOld < 186.0
            && m_animationFrame >= 186.0 )
          {
            v59 = GameDataInfo::getInstance()->m_StageID;
            AppMain::createBattleCharacterStatus((AppMain *)v81, v60);
            v61 = BattleEventHandler::getInstance();
            for ( k = v61->m_pListenerList->m_items._Mypair._Myval2._Myfirst;
                  k != v61->m_pListenerList->m_items._Mypair._Myval2._Mylast;
                  ++k )
            {
              (*k)->OnEventBattleEnd(*k, v59, (const BattleEventHandler::Listener::CharacterStatus *)v81);
            }
          }
        }
LABEL_154:
        v77 = v2->roundPhase;
        if ( v77 == 11 && v2->uiRoundPhaseFrame || (unsigned int)(v77 - 7) <= 1 )
        {
          if ( v77 > 6 )
          {
            if ( v2->bAkebonoKO )
            {
              if ( !v1->m_BattleHud.isError(&v1->m_BattleHud.ErrorChecker) && v1->m_BattleHud.m_bInitialize )
                v1->m_BattleHud.m_visibleFlags = 12;
            }
            else if ( (v77 != 11 || !v2->uiRoundPhaseFrame)
                   && !v1->m_BattleHud.isError(&v1->m_BattleHud.ErrorChecker)
                   && v1->m_BattleHud.m_bInitialize )
            {
              v1->m_BattleHud.m_visibleFlags = 255;
            }
          }
          if ( !v1->m_eventCheckValues.bAkebonoKO
            && (v2->roundPhase == (WALL|ERASE) && v2->uiRoundPhaseFrame || v2->bAkebonoKO) )
          {
            v1->m_eventCheckValues.bAkebonoKO = 1;
            v78 = BattleEventHandler::getInstance();
            for ( m = v78->m_pListenerList->m_items._Mypair._Myval2._Myfirst;
                  m != v78->m_pListenerList->m_items._Mypair._Myval2._Mylast;
                  ++m )
            {
              (*m)->OnEventAkebonoKO(*m);
            }
          }
        }
        return;
      }
      if ( m_animationType <= STUN )
      {
        v8 = 3;
        goto LABEL_124;
      }
    }
    v8 = 0;
    goto LABEL_124;
  }
}

void __fastcall AppMain::BattleKeyRecordDraw(AppMain *this)
{
  BattleSystem::BattleController *v2; // r9
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController::KEY_RECORD_MODE keyRecordMode; // er10
  __int64 v5; // rsi
  unsigned int v6; // edx
  signed int v7; // edi
  int uiPlayCount; // ebp
  BattleSystem::BattleController *v9; // r9
  int v10; // esi
  __int64 v11; // r9
  int v12; // er14
  int v13; // er10
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 iKeyRecordSlot; // rsi
  unsigned int uiDataSize; // ecx
  unsigned int uiMaxRecordFrame; // eax
  int v21; // edi
  const BattleHudRenderer::RenderParams *v22; // r9
  BattleSystem::BattleController *v23; // [rsp+68h] [rbp+10h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v23 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v23);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  keyRecordMode = v2->keyRecordMode;
  if ( keyRecordMode )
  {
    if ( keyRecordMode == (SKIP|PLAY) || keyRecordMode == 8 )
    {
      iKeyRecordSlot = v2->keyRecordInfo.iKeyRecordSlot;
      uiDataSize = v2->m_KeyRecord[v2->keyRecordInfo.iKeyRecordType][iKeyRecordSlot].pKeyBuffer._Mypair._Myval2->uiDataSize;
      uiMaxRecordFrame = v2->m_KeyRecord[v2->keyRecordInfo.iKeyRecordType][iKeyRecordSlot].uiMaxRecordFrame;
      if ( uiDataSize < uiMaxRecordFrame )
        v21 = uiMaxRecordFrame - uiDataSize;
      else
        v21 = 0;
      if ( !this->m_BattleHud.isError(&this->m_BattleHud.ErrorChecker)
        && this->m_BattleHud.m_bInitialize
        && this->m_BattleHud.m_bResoucesActived )
      {
        BattleHudRenderer::renderKeyRecording(this->m_BattleHud.m_pRenderer, v21, iKeyRecordSlot, v22);
      }
    }
    else if ( keyRecordMode == 5 )
    {
      v5 = v2->keyRecordInfo.iKeyRecordSlot;
      v6 = v2->m_KeyRecord[v2->keyRecordInfo.iKeyRecordType][v5].pKeyBuffer._Mypair._Myval2->uiDataSize;
      v7 = 180 - v6;
      if ( (int)(180 - v6) >= 0 )
      {
        if ( !this->m_BattleHud.isError(&this->m_BattleHud.ErrorChecker)
          && this->m_BattleHud.m_bInitialize
          && this->m_BattleHud.m_bResoucesActived )
        {
          BattleHudRenderer::renderKeyReady(this->m_BattleHud.m_pRenderer, v7 / 60, 100 * (v7 % 60) / 60, v5);
        }
      }
      else
      {
        BattleHud::drawKeyRecordingFrame(&this->m_BattleHud, v6 - 180, v5);
      }
    }
    else if ( ((keyRecordMode - 1) & 0xFFFFFFFC) != 0 )
    {
      if ( keyRecordMode == 6 )
        BattleHud::drawReversalReplay(&this->m_BattleHud);
    }
    else
    {
      uiPlayCount = BattleSystem::BattleController::GetPlayKeyRecord(v2)->uiPlayCount;
      v10 = BattleSystem::BattleController::GetPlayKeyRecord(v9)->pKeyBuffer._Mypair._Myval2->uiDataSize;
      v12 = *(_DWORD *)(v11 + 255128);
      if ( v13 == 4 )
      {
        uiPlayCount -= 180;
        v10 -= 180;
      }
      v14 = v11 + 4 * (*(int *)(v11 + 255120) + 63784i64);
      v15 = 0i64;
      v16 = 0i64;
      v17 = 4i64;
      if ( v14 > v14 + 4 )
        v17 = 0i64;
      if ( v14 <= v14 + 4 )
      {
        do
          v15 += byte_140912620[*(unsigned __int8 *)(v14 + v16++)];
        while ( v16 != v17 );
        if ( v15 > 1 )
        {
          v12 = -1;
          v10 = -1;
        }
      }
      if ( !((__int64 (__fastcall *)(ErrorChecker *, unsigned __int64, __int64))this->m_BattleHud.isError)(
              &this->m_BattleHud.ErrorChecker,
              v14,
              v17)
        && this->m_BattleHud.m_bInitialize
        && this->m_BattleHud.m_bResoucesActived )
      {
        BattleHudRenderer::renderKeyPlaying(this->m_BattleHud.m_pRenderer, uiPlayCount, v10, v12);
      }
    }
  }
}

char __fastcall AppMain::BattleNewChallengerCheck(AppMain *this)
{
  GameDataInfo *v2; // rcx
  BattleSystem::BattleController *v3; // rdi
  BattleSystem::BattleController *v4; // rax
  __int64 v5; // rax
  AppMain *v6; // rcx
  __int64 v8; // rax
  GameDataInfo *Instance; // rax
  GameDataInfo *v10; // rax
  AppMain *v11; // rcx
  GameDataInfo *v12; // rax
  FighterOperation::Slot *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  BattleSystem::BattleController *v16; // [rsp+48h] [rbp+10h]

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
  if ( `GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag )
    return 0;
  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v16 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v16);
    v3 = v4;
    BattleSystem::BattleController::instance = v4;
  }
  if ( v3->roundPhase != DIE )
    return 0;
  if ( !AppMain::InputCheckNewChallenger(this, 0) )
  {
    if ( AppMain::InputCheckNewChallengerTraining(this) )
    {
      GfxManager::getInstance();
      *(_BYTE *)(v8 + 172) = 1;
      Instance = GameDataInfo::getInstance();
      Instance->m_GameMode[Instance->m_GameModeIndex] = GAME_MODE_RANKMATCH;
      v10 = GameDataInfo::getInstance();
      v10->m_GameRule[v10->m_GameRuleIndex] = GAME_RULE_TEAM;
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2507448i64) = 1;
      this->bAT_NextBattleExit = 0;
      AppMain::setNonFadeSTExit(this, 124, 181);
      AppMain::StopBGMUtil(v11, 0.5);
      return 1;
    }
    if ( v3->battleInfo.battleMode == TRAINING )
    {
      v12 = GameDataInfo::getInstance();
      if ( v12->m_GameMode[v12->m_GameModeIndex] != GAME_MODE_ONLINETRAINING
        && !BattleSystem::PauseController::GetInstance()->m_Pause
        && GameDataInfo::getInstance()->m_TrainingSetting.m_iAction == PLAYER )
      {
        v13 = &FighterOperation::Instance()->m_slots[1];
        if ( !v13 || !v13->userIndex )
        {
          GfxManager::getInstance();
          *(_BYTE *)(v14 + 173) = 1;
          GfxManager::getInstance();
          *(_BYTE *)(v15 + 174) = 1;
        }
      }
    }
    return 0;
  }
  GfxManager::getInstance();
  *(_BYTE *)(v5 + 172) = 1;
  GameDataInfo::getInstance()->m_ControllerSelect = 1;
  *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2507448i64) = 1;
  this->bAT_NextBattleExit = 0;
  this->iReserveScene = -1;
  this->m_FadeST = 124;
  this->m_FuncST = 0;
  this->m_FadeExitFunc = 181;
  this->m_bExitFuncWaitFrame = 0;
  if ( this->m_FuncFT != 170 )
    this->m_FuncFT = 172;
  AppMain::StopBGMUtil(v6, 0.5);
  return 1;
}

void __fastcall AppMain::BattleRestartCheck(AppMain *this, bool a2, bool a3)
{
  float v3; // xmm1_4
  BattleSystem::BattleController *v5; // rdi
  BattleSystem::BattleController *v6; // rax
  BattleSystem::BATTLE_MODE battleMode; // eax
  BattleSystem::BattleController *v8; // rcx
  BattleSystem::BattleController::MISSION_SAMPLE_MODE missionSampleMode; // eax
  BattleSystem::BattleController *v10; // rcx
  GameDataInfo *v11; // rax
  bool v12; // r8
  GameDataInfo *Instance; // rax
  bool v14; // r8
  AppMain *v15; // rcx
  BattleSystem::BattleController *v16; // [rsp+48h] [rbp+10h]

  v5 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v16 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v16);
    v5 = v6;
    BattleSystem::BattleController::instance = v6;
  }
  battleMode = v5->battleInfo.battleMode;
  if ( battleMode != MISSION && battleMode != MISSION_DEVELOP
    || v5->iNextMissionID < 0 && (unsigned int)(v5->missionSampleMode - 3) > 1 )
  {
    if ( v5->restartPosition == NONE )
      return;
    if ( this->m_FuncFT == 170 )
    {
      if ( this->m_bFadeEnd || !this->m_iFadeAlpha )
        AppMain::SetRoundRestart(this, a2, a3);
      return;
    }
LABEL_22:
    *(_QWORD *)&this->m_iFadeColor.rgba = 255i64;
    v15 = (AppMain *)(100 * (unsigned int)this->m_iFadeColor.s.a);
    this->m_bFadeEnd = 0;
    this->m_iFadeFrame = 10;
    this->m_iFadeRate = (int)v15;
    this->m_bFadeLock = 0;
    this->m_FuncFT = 170;
    AppMain::Sound_Volume_SE_Modulation(v15, 0.0, 0.125);
    return;
  }
  if ( this->m_FuncFT != 170 )
    goto LABEL_22;
  if ( !this->m_bFadeEnd && this->m_iFadeAlpha )
    return;
  AppMain::Sound_StopBattleSE(this, v3);
  missionSampleMode = v5->missionSampleMode;
  if ( missionSampleMode != REVERSAL )
  {
    if ( missionSampleMode != SUPER_CANCEL )
    {
      BattleSystem::BattleController::SetupNextMissionData(v5, this->m_pComboMissionData._Mypair._Myval2);
      Instance = GameDataInfo::getInstance();
      GameDataInfo::AutoSetRandSeed(Instance);
      BattleSystem::BattleController::BattleInit(v5, 1);
      AppMain::BattleRoundInit(this, 0, v14);
      return;
    }
LABEL_20:
    v11 = GameDataInfo::getInstance();
    GameDataInfo::AutoSetRandSeed(v11);
    BattleSystem::BattleController::BattleInit(v5, 1);
    AppMain::BattleRoundInit(this, 1, v12);
    return;
  }
  if ( this->m_iMissionKeyDataID == BattleSystem::BattleController::GetPlayingMissionID(v8) )
    goto LABEL_20;
  this->m_iMissionKeyDataID = BattleSystem::BattleController::GetPlayingMissionID(v10);
  this->m_iLoadingNextFunc = 178;
  this->iReserveScene = -1;
  this->m_FadeST = 191;
  this->m_FuncST = 0;
  this->m_FadeExitFunc = 0;
  this->m_bExitFuncWaitFrame = 0;
  if ( this->m_FuncFT != 170 )
    this->m_FuncFT = 172;
}

void __fastcall AppMain::BattleRoundStartCheck(AppMain *this)
{
  AppMain *v1; // rbp
  BattleSystem::BattleController *v2; // rsi
  BattleSystem::BattleController *v3; // rax
  int roundPhase; // eax
  STAGE_ID battleStageID; // er14
  unsigned int BattleRound; // er15
  AppMain **Instance; // rdi
  ViewController *i; // rbx
  STAGE_ID v9; // esi
  AppMain *v10; // rcx
  unsigned int v11; // er14
  int v12; // edx
  BattleEventHandler *v13; // rdi
  int v14; // er8
  BattleEventHandler::Listener **j; // rbx
  STAGE_ID v16; // edi
  int v17; // ebx
  BattleEventHandler *v18; // rax
  BattleCall *p_m_BattleCall; // rbp
  BattleCallAnimation *Animation; // rax
  GameDataInfo *v21; // rax
  char v22; // r8
  bool v23; // r9
  GameDataInfo *v24; // rax
  char v25; // r8
  bool v26; // r9
  STAGE_ID m_StageID; // ebp
  BattleEventHandler::Listener::CharacterStatus *v28; // rdx
  const BattleEventHandler::Listener::CharacterStatus *BattleCharacterStatus; // r14
  AppMain *v30; // rcx
  unsigned int v31; // er15
  BattleEventHandler *v32; // rdi
  BattleEventHandler::Listener **k; // rbx
  __int64 v34; // [rsp+20h] [rbp-38h]
  char v35; // [rsp+28h] [rbp-30h] BYREF
  BattleSystem::BattleController *v36; // [rsp+68h] [rbp+10h]

  v34 = -2i64;
  v1 = this;
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v36 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v36);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  roundPhase = v2->roundPhase;
  if ( roundPhase < 6 )
  {
    if ( roundPhase == 1 )
    {
      if ( v1->m_bFadeLock )
      {
        battleStageID = v2->battleInfo.battleStageID;
        BattleRound = AppMain::GetBattleRound(this);
        Instance = (AppMain **)BattleEventHandler::getInstance();
        this = *Instance;
        for ( i = (*Instance)->bv; i != (ViewController *)(*Instance)->e; i = (ViewController *)((char *)i + 8) )
          (*(void (__fastcall **)(EAGLView *, _QWORD, _QWORD))(*(_QWORD *)&i->glView->m_FPSValue + 48i64))(
            i->glView,
            (unsigned int)battleStageID,
            BattleRound);
      }
      if ( v2->bRivalDemo )
      {
        BattleSystem::BattleController::SetRivalDemoActionPhase(v2);
        v9 = v2->battleInfo.battleStageID;
        v11 = AppMain::GetBattleRound(v10);
        v13 = BattleEventHandler::getInstance();
        for ( j = v13->m_pListenerList->m_items._Mypair._Myval2._Myfirst;
              j != v13->m_pListenerList->m_items._Mypair._Myval2._Mylast;
              ++j )
        {
          (*j)->OnEventRoundStartTalkStart(*j, v9, v11);
        }
        AppMain::StartPreFightFaceOffScene(v1, v12, v14);
      }
      else
      {
        if ( v1->m_bFadeLock )
        {
          v16 = v2->battleInfo.battleStageID;
          v17 = AppMain::GetBattleRound(this);
          v18 = BattleEventHandler::getInstance();
          BattleEventHandler::CallEvent_RoundStartTalkOut(v18, v16, v17);
          BattleSystem::BattleController::SetBattleBGMFadeStop(v2);
        }
        v1->m_bFadeLock = 0;
        if ( v1->m_bFadeEnd || !v1->m_iFadeAlpha )
        {
          v1->m_bFadeEnd = 0;
          v1->m_FuncFT = 0;
          v1->m_FadeExitFunc = 0;
          v1->m_bFadeLock = 0;
          if ( v2->roundPhase == MAIN )
          {
            if ( v2->bDirectStart )
              *(_QWORD *)&v2->roundPhase = 5i64;
            else
              *(_QWORD *)&v2->roundPhase = 3i64;
          }
        }
      }
    }
    else if ( roundPhase )
    {
      BattleSystem::BattleController::CheckBattleBGMStart(v2);
      if ( v2->roundPhase == HIT )
      {
        if ( v1->m_bFadeEnd || !v1->m_iFadeAlpha )
        {
          v1->m_bFadeEnd = 0;
          v1->m_FuncFT = 0;
          v1->m_FadeExitFunc = 0;
          v1->m_bFadeLock = 0;
          if ( AppMain::BattleMissionStartMessage(v1) )
          {
            BattleCall::start(&v1->m_BattleCall);
            *(_QWORD *)&v2->roundPhase = 5i64;
          }
        }
        else
        {
          v1->m_bFadeLock = 0;
        }
      }
      p_m_BattleCall = &v1->m_BattleCall;
      Animation = BattleCall::getAnimation(p_m_BattleCall);
      if ( Animation->m_bAnimationPlaying && Animation->m_animationType == COUNTER_HIT )
      {
        BattleCall::update(p_m_BattleCall, 1.0);
        if ( BattleCall::isAnimationFinished(p_m_BattleCall) )
        {
          v21 = GameDataInfo::getInstance();
          if ( v21->m_GameMode[v21->m_GameModeIndex] == GAME_MODE_TRAINING )
            SaveRecord_PlayerData::SetAchivementLog(
              (SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64),
              ACHIEVMENT_LOG_018,
              v22,
              v23);
          v24 = GameDataInfo::getInstance();
          if ( v24->m_GameMode[v24->m_GameModeIndex] == GAME_MODE_ONLINETRAINING
            && v2->playerInfo[0].playerType != CROUCH
            && v2->playerInfo[1].playerType != CROUCH )
          {
            SaveRecord_PlayerData::SetAchivementLog(
              (SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64),
              ACHIEVMENT_LOG_047,
              v25,
              v26);
          }
          BattleCall::clear(p_m_BattleCall);
          m_StageID = GameDataInfo::getInstance()->m_StageID;
          BattleCharacterStatus = AppMain::createBattleCharacterStatus((AppMain *)&v35, v28);
          v31 = AppMain::GetBattleRound(v30);
          v32 = BattleEventHandler::getInstance();
          for ( k = v32->m_pListenerList->m_items._Mypair._Myval2._Myfirst;
                k != v32->m_pListenerList->m_items._Mypair._Myval2._Mylast;
                ++k )
          {
            ((void (__fastcall *)(BattleEventHandler::Listener *, _QWORD, _QWORD, const BattleEventHandler::Listener::CharacterStatus *, __int64))(*k)->OnEventBattleStart)(
              *k,
              (unsigned int)m_StageID,
              v31,
              BattleCharacterStatus,
              v34);
          }
          BattleSystem::BattleController::BattleStart(v2);
        }
      }
    }
  }
}

void __fastcall AppMain::CheckBGColorSetting(AppMain *this)
{
  BattleSystem::BattleController *v2; // r8
  BattleSystem::BattleController *v3; // rax
  EffectDataListManager *v4; // rax
  EffectDataListManager *v5; // rax
  EffectDataListManager *v6; // rax
  EffectDataListManager *v7; // rax
  EffectDataListManager *v8; // rax
  ActionBlackout *p_actBlack; // rdx
  int type; // eax
  __m128 color; // xmm2
  __int64 iPriTarget; // rcx
  float fFadeAlpha; // xmm3_4
  EffectDataListManager *v14; // r9
  float v15; // xmm1_4
  __int64 v16; // rax
  float v17; // xmm0_4
  EffectDataListManager *v18; // r9
  __int64 v19; // rax
  float v20; // xmm0_4
  EffectDataListManager *v21; // r9
  __int64 v22; // rax
  float v23; // xmm0_4
  EffectDataListManager *v24; // r9
  __int64 v25; // rax
  float v26; // xmm0_4
  EffectDataListManager *v27; // r9
  __int64 v28; // rax
  BattleStage *pBattleStage; // rcx
  _BYTE v30[24]; // [rsp+28h] [rbp-11h] BYREF
  std::function<void __cdecl(EffectDataListManager &)> v31; // [rsp+48h] [rbp+Fh] BYREF
  BattleSystem::BattleController *v32; // [rsp+A0h] [rbp+67h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v32 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v32);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  this->ModelRoomSettings.modelFillSettings.fillSettings[4].fillType = 0;
  *(_QWORD *)this->ModelRoomSettings.framebufferColour = 0i64;
  this->ModelRoomSettings.framebufferColour[2] = 0;
  v4 = v2->actSystem.pEffectMgr[0];
  if ( v4 )
    v4->m_FillColor.OGLVec4 = 0i64;
  v5 = v2->actSystem.pEffectMgr[1];
  if ( v5 )
    v5->m_FillColor.OGLVec4 = 0i64;
  v6 = v2->actSystem.pEffectMgr[2];
  if ( v6 )
    v6->m_FillColor.OGLVec4 = 0i64;
  v7 = v2->actSystem.pEffectMgr[3];
  if ( v7 )
    v7->m_FillColor.OGLVec4 = 0i64;
  v8 = v2->actSystem.pEffectMgr[4];
  if ( v8 )
    v8->m_FillColor.OGLVec4 = 0i64;
  p_actBlack = &v2->actSystem.actBlack;
  type = v2->actSystem.actBlack.data[v2->actSystem.actBlack.iPriTarget].type;
  if ( type <= 0 || type > 4 && (type > 6 || p_actBlack->data[v2->actSystem.actBlack.iPriTarget].fFadeAlpha < 1.0) )
  {
    if ( (unsigned int)(v2->actSystem.actBlack.data[v2->actSystem.actBlack.iPriTarget].type - 5) > 1 )
    {
      this->m_pRender->m_fBloomStrength = 1.0;
    }
    else
    {
      iPriTarget = v2->actSystem.actBlack.iPriTarget;
      *(ColorHolder *)v30 = v2->actSystem.actBlack.data[v2->actSystem.actBlack.iPriTarget].color;
      fFadeAlpha = p_actBlack->data[iPriTarget].fFadeAlpha;
      if ( (unsigned int)(v2->actSystem.actBlack.data[v2->actSystem.actBlack.iPriTarget].type - 7) > 1
        && (unsigned int)(v2->actSystem.actBlack.data[0].type - 7) > 1 )
      {
        this->ModelRoomSettings.modelFillSettings.fillSettings[4].fillType = 1;
        *(_QWORD *)this->ModelRoomSettings.modelFillSettings.fillSettings[4].fillColour = *(_QWORD *)v30;
        this->ModelRoomSettings.modelFillSettings.fillSettings[4].fillColour[2] = *(float *)&v30[8];
        this->ModelRoomSettings.modelFillSettings.fillSettings[4].fillColour[3] = fFadeAlpha;
      }
      this->m_pRender->m_fBloomStrength = 1.0 - fFadeAlpha;
    }
  }
  else
  {
    color = (__m128)v2->actSystem.actBlack.data[v2->actSystem.actBlack.iPriTarget].color;
    this->ModelRoomSettings.framebufferColour[0] = (unsigned __int8)(int)(float)(color.m128_f32[0] * 255.0);
    this->ModelRoomSettings.framebufferColour[1] = (unsigned __int8)(int)(float)(_mm_shuffle_ps(color, color, 85).m128_f32[0]
                                                                               * 255.0);
    this->ModelRoomSettings.framebufferColour[2] = (unsigned __int8)(int)(float)(_mm_shuffle_ps(color, color, 170).m128_f32[0]
                                                                               * 255.0);
    this->m_pRender->m_fBloomStrength = 0.0;
  }
  if ( p_actBlack->data[v2->actSystem.actBlack.iPriTarget].type == CLIMAX_CANCEL )
  {
    v14 = v2->actSystem.pEffectMgr[0];
    v15 = 0.0;
    if ( v14 )
    {
      v16 = v2->actSystem.actBlack.iPriTarget;
      v17 = 0.0;
      if ( p_actBlack->data[v16].type == CLIMAX_CANCEL )
        v17 = p_actBlack->data[v16].fFadeAlpha;
      *(_QWORD *)&v30[8] = 0i64;
      *(_DWORD *)&v30[16] = 0;
      *(float *)&v30[20] = v17;
      v14->m_FillColor.OGLVec4 = *(OGLVec4 *)&v30[8];
    }
    v18 = v2->actSystem.pEffectMgr[1];
    if ( v18 )
    {
      v19 = v2->actSystem.actBlack.iPriTarget;
      v20 = 0.0;
      if ( p_actBlack->data[v19].type == CLIMAX_CANCEL )
        v20 = p_actBlack->data[v19].fFadeAlpha;
      *(_QWORD *)&v30[8] = 0i64;
      *(_DWORD *)&v30[16] = 0;
      *(float *)&v30[20] = v20;
      v18->m_FillColor.OGLVec4 = *(OGLVec4 *)&v30[8];
    }
    v21 = v2->actSystem.pEffectMgr[2];
    if ( v21 )
    {
      v22 = v2->actSystem.actBlack.iPriTarget;
      v23 = 0.0;
      if ( p_actBlack->data[v22].type == CLIMAX_CANCEL )
        v23 = p_actBlack->data[v22].fFadeAlpha;
      *(_QWORD *)&v30[8] = 0i64;
      *(_DWORD *)&v30[16] = 0;
      *(float *)&v30[20] = v23;
      v21->m_FillColor.OGLVec4 = *(OGLVec4 *)&v30[8];
    }
    v24 = v2->actSystem.pEffectMgr[3];
    if ( v24 )
    {
      v25 = v2->actSystem.actBlack.iPriTarget;
      v26 = 0.0;
      if ( p_actBlack->data[v25].type == CLIMAX_CANCEL )
        v26 = p_actBlack->data[v25].fFadeAlpha;
      *(_QWORD *)&v30[8] = 0i64;
      *(_DWORD *)&v30[16] = 0;
      *(float *)&v30[20] = v26;
      v24->m_FillColor.OGLVec4 = *(OGLVec4 *)&v30[8];
    }
    v27 = v2->actSystem.pEffectMgr[4];
    if ( v27 )
    {
      v28 = v2->actSystem.actBlack.iPriTarget;
      if ( p_actBlack->data[v28].type == CLIMAX_CANCEL )
        v15 = p_actBlack->data[v28].fFadeAlpha;
      *(_QWORD *)&v30[8] = 0i64;
      *(_DWORD *)&v30[16] = 0;
      *(float *)&v30[20] = v15;
      v27->m_FillColor.OGLVec4 = *(OGLVec4 *)&v30[8];
    }
  }
  pBattleStage = this->pBattleStage;
  if ( pBattleStage )
  {
    *(_OWORD *)v30 = 0i64;
    if ( this->ModelRoomSettings.modelFillSettings.fillSettings[4].fillType == 1 )
      *(_OWORD *)v30 = *(_OWORD *)this->ModelRoomSettings.modelFillSettings.fillSettings[4].fillColour;
    v31._Mystorage._Ptrs[0] = (std::_Func_base<void,EffectDataListManager &> *)&std::_Func_impl<_lambda_b96c9f0c3bce8ccd57f7791319f17781_,std::allocator<int>,void,EffectDataListManager &>::`vftable';
    v31._Mystorage._Ptrs[1] = (std::_Func_base<void,EffectDataListManager &> *)v30;
    v31._Mystorage._Ptrs[7] = (std::_Func_base<void,EffectDataListManager &> *)&v31;
    BattleStage::callEffectManagers(pBattleStage, &v31);
  }
}

void __fastcall AppMain::CheckProjBlendActor(Actor *actor)
{
  AppMain::_MODELROOM_SETTINGS::SetBlendProjection(
    (AppMain::_MODELROOM_SETTINGS *)(*(_QWORD *)&AppMain::pApp + 92648i64),
    actor->pModel);
}

void __fastcall AppMain::CheckProjBlendActorP1(Actor *actor)
{
  if ( !actor->GetFounderPlayerID(actor) )
    AppMain::_MODELROOM_SETTINGS::SetBlendProjection(
      (AppMain::_MODELROOM_SETTINGS *)(*(_QWORD *)&AppMain::pApp + 92648i64),
      actor->pModel);
}

void __fastcall AppMain::CheckProjBlendActorP2(Actor *actor)
{
  if ( actor->GetFounderPlayerID(actor) == 1 )
    AppMain::_MODELROOM_SETTINGS::SetBlendProjection(
      (AppMain::_MODELROOM_SETTINGS *)(*(_QWORD *)&AppMain::pApp + 92648i64),
      actor->pModel);
}

void __fastcall AppMain::DrawKeyHistory(AppMain *this, PLAYER_ID playerID, InputKeyHistory *pKeyHistory)
{
  __int64 v4; // rbx
  BattleSystem::BattleController *v6; // r9
  BattleSystem::BattleController *v7; // rax
  BattleSystem::BATTLE_MODE battleMode; // edx
  BattleSystem::BattleController *v9; // [rsp+58h] [rbp+20h]

  v4 = playerID;
  v6 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v9 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v9);
    v6 = v7;
    BattleSystem::BattleController::instance = v7;
  }
  if ( v6->bKeyData )
  {
    battleMode = v6->battleInfo.battleMode;
    if ( (unsigned int)(battleMode - 4) <= 1
      || v6->missionSampleMode != COUNTER_HIT && v6->playerInfo[v4].playerType != CROUCH )
    {
      BattleHud::drawKeyHistory(
        &this->m_BattleHud,
        (PLAYER_ID)v4,
        pKeyHistory,
        (unsigned int)(battleMode - 4) <= 1 || this->m_CheatCommand);
    }
  }
}

__int64 __fastcall AppMain::GetBattleRound(AppMain *this)
{
  BattleSystem::BattleController *v1; // rcx
  BattleSystem::BattleController *v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax
  BattleSystem::BattleController *v5; // [rsp+40h] [rbp+8h]

  v1 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v5 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v5);
    v1 = v2;
    BattleSystem::BattleController::instance = v2;
  }
  if ( BattleSystem::BattleController::IsFinalRound(v1) )
    return 0xFFFFFFFFi64;
  result = 4294967294i64;
  if ( !*(_BYTE *)(v3 + 246104) )
    return *(unsigned int *)(v3 + 246100);
  return result;
}

void __fastcall AppMain::MaskTextureDraw(AppMain *this, OGLTexture *pMask, bool bFullScreen)
{
  Framework::GLManager *v4; // rbx
  float v6; // xmm6_4
  float m_targetWidth; // xmm1_4
  float m_targetHeight; // xmm7_4
  GraphicsOpt *g; // rcx
  OGLShader *v10; // r15
  Framework::GLManager *v11; // rcx
  int v12; // edi
  unsigned __int64 v13; // r8
  char *v14; // rax
  int *v15; // r8
  char *v16; // r14
  __int64 *v17; // rdx
  __int64 v18; // r9
  _QWORD *v19; // rcx
  int v20; // xmm0_4
  __m128 v21; // xmm1
  int v22; // eax
  unsigned __int64 v23; // xmm0_8
  __m128 v24; // xmm1
  OGLRender *m_pRender; // rax
  __m128 v26; // xmm2
  __m128 v27; // xmm3
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128 v30; // xmm6
  __m128 v31; // xmm7
  __m128 v32; // xmm8
  __m128 v33; // xmm9
  KOFShaderManager *v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rdx
  AgSingleton<KOFShaderManager>_vtbl *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int128 *v40; // rax
  __int64 m_currentProgramSlot; // rdx
  __int128 *v42; // rax
  int v43; // er8
  _QWORD *v44; // rcx
  __int64 v45; // rcx
  int v46; // er11
  signed int v47; // er10
  int renderSize; // ecx
  int v49; // eax
  int v50; // er8
  _QWORD *v51; // rcx
  __int64 v52; // rcx
  int v53; // eax
  signed int v54; // ecx
  struct __GLsync *m_sync; // rcx
  unsigned int m_TexID; // edx
  Framework::GLManager *v57; // rcx
  int location; // [rsp+38h] [rbp-D0h]
  int locationa; // [rsp+38h] [rbp-D0h]
  char *v60; // [rsp+40h] [rbp-C8h]
  __int64 v61; // [rsp+48h] [rbp-C0h]
  void **v62; // [rsp+48h] [rbp-C0h]
  AgSingleton<KOFShaderManager>_vtbl *v63; // [rsp+50h] [rbp-B8h]
  __int64 index; // [rsp+50h] [rbp-B8h]
  __int128 v65; // [rsp+68h] [rbp-A0h]
  __int128 v66; // [rsp+78h] [rbp-90h]
  __int128 v67; // [rsp+88h] [rbp-80h]
  __int128 v68; // [rsp+98h] [rbp-70h]
  __int128 v69; // [rsp+A8h] [rbp-60h]
  __int128 v70; // [rsp+B8h] [rbp-50h]
  __int128 v71; // [rsp+C8h] [rbp-40h]
  __int128 v72; // [rsp+D8h] [rbp-30h]
  __int128 Buf2[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v74[4]; // [rsp+128h] [rbp+20h] BYREF
  int v75[6]; // [rsp+168h] [rbp+60h] BYREF
  float v76; // [rsp+180h] [rbp+78h]
  float v77; // [rsp+184h] [rbp+7Ch]
  __int64 v78; // [rsp+188h] [rbp+80h]
  __int64 v79; // [rsp+190h] [rbp+88h] BYREF
  float v80; // [rsp+198h] [rbp+90h]
  int v81; // [rsp+19Ch] [rbp+94h]
  float v82; // [rsp+1A0h] [rbp+98h]
  __int64 v83; // [rsp+1A4h] [rbp+9Ch]
  float v84; // [rsp+1ACh] [rbp+A4h]
  float v85; // [rsp+1B0h] [rbp+A8h]
  int v86; // [rsp+1B4h] [rbp+ACh]

  if ( pMask )
  {
    v4 = Framework::GLManager::glm;
    v6 = *(float *)&FLOAT_290_0;
    m_targetWidth = (float)(int)Framework::GLManager::glm->m_config.m_targetWidth;
    m_targetHeight = (float)(int)Framework::GLManager::glm->m_config.m_targetHeight;
    if ( this->m_iNeoMode )
      v6 = FLOAT_390_0;
    g = this->g;
    v79 = 0i64;
    v78 = 0i64;
    v83 = 0i64;
    v86 = 0;
    v81 = 0;
    v84 = m_targetWidth + 0.0;
    v85 = v6 + 0.0;
    v80 = v6 + 0.0;
    v82 = m_targetWidth + 0.0;
    v77 = (float)(v6 + 0.0) / m_targetHeight;
    *(float *)&v75[3] = v77;
    *(float *)&v75[2] = 0.0 / m_targetWidth;
    *(float *)v75 = 0.0 / m_targetWidth;
    *(float *)&v75[5] = 0.0 / m_targetHeight;
    *(float *)&v75[1] = 0.0 / m_targetHeight;
    v76 = (float)(m_targetWidth + 0.0) / m_targetWidth;
    *(float *)&v75[4] = v76;
    GraphicsOpt::lock(g);
    if ( dword_140A9606C )
    {
      dword_140A9606C = 0;
      glDisable(0xB71u);
    }
    if ( dword_140A96068 != 1 )
    {
      dword_140A96068 = 1;
      glEnable(0xB90u);
    }
    glDepthMask(0);
    glColorMask(0, 0, 0, 0);
    glStencilFunc(0x207u, 1, 1u);
    glStencilOp(0x1E00u, 0x1E00u, 0x1E01u);
    glClearStencil(0);
    glClearAG(0x400u);
    v10 = this->m_pRender->m_ShaderFXTbl[7926];
    if ( v10 )
    {
      if ( v10->m_Program )
      {
        KOFShaderManager::useProgramSlot(
          (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance,
          v10->m_programSlot);
        v11 = Framework::GLManager::glm;
        v12 = 64;
        Framework::GLManager::glm->renderSize = 64;
        v14 = (char *)AgFrameAllocator<AgAllocator<1>>::allocate(&v11->m_agDrawAllocator, 0x100ui64, v13);
        v15 = v75;
        v16 = v14;
        v17 = &v79;
        v18 = 4i64;
        v60 = v14 + 56;
        v19 = v14 + 56;
        do
        {
          v20 = *(_DWORD *)v17;
          v15 += 2;
          v21 = (__m128)*((unsigned int *)v17 - 1);
          v17 = (__int64 *)((char *)v17 + 12);
          v22 = v20;
          v23 = _mm_unpacklo_ps((__m128)*((unsigned int *)v17 - 5), v21).m128_u64[0];
          v24 = (__m128)(unsigned int)*(v15 - 1);
          *(v19 - 7) = v23;
          *v19 = _mm_unpacklo_ps((__m128)(unsigned int)*(v15 - 2), v24).m128_u64[0];
          *((_DWORD *)v19 - 12) = v22;
          *((_OWORD *)v19 - 1) = _xmm;
          v19 += 8;
          --v18;
        }
        while ( v18 );
        v4->m_vertexInfoCount = 4;
        m_pRender = this->m_pRender;
        v26 = *(__m128 *)m_pRender->m_View.m;
        v27 = *(__m128 *)&m_pRender->m_View.m[4];
        v28 = *(__m128 *)&m_pRender->m_View.m[8];
        v29 = *(__m128 *)&m_pRender->m_View.m[12];
        v30 = *(__m128 *)m_pRender->m_Proj.m;
        v31 = *(__m128 *)&m_pRender->m_Proj.m[4];
        v32 = *(__m128 *)&m_pRender->m_Proj.m[8];
        v33 = *(__m128 *)&m_pRender->m_Proj.m[12];
        *(_QWORD *)&v65 = __PAIR64__(v27.m128_u32[0], v26.m128_u32[0]);
        LODWORD(v66) = _mm_shuffle_ps(v26, v26, 85).m128_u32[0];
        LODWORD(v67) = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
        DWORD1(v66) = _mm_shuffle_ps(v27, v27, 85).m128_u32[0];
        DWORD1(v67) = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
        DWORD2(v66) = _mm_shuffle_ps(v28, v28, 85).m128_u32[0];
        DWORD2(v67) = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
        HIDWORD(v66) = _mm_shuffle_ps(v29, v29, 85).m128_u32[0];
        HIDWORD(v67) = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
        LODWORD(v70) = _mm_shuffle_ps(v30, v30, 85).m128_u32[0];
        LODWORD(v71) = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
        DWORD1(v70) = _mm_shuffle_ps(v31, v31, 85).m128_u32[0];
        DWORD1(v71) = _mm_shuffle_ps(v31, v31, 170).m128_u32[0];
        *((_QWORD *)&v65 + 1) = __PAIR64__(v29.m128_u32[0], v28.m128_u32[0]);
        LODWORD(v68) = _mm_shuffle_ps(v26, v26, 255).m128_u32[0];
        DWORD1(v68) = _mm_shuffle_ps(v27, v27, 255).m128_u32[0];
        DWORD2(v68) = _mm_shuffle_ps(v28, v28, 255).m128_u32[0];
        HIDWORD(v68) = _mm_shuffle_ps(v29, v29, 255).m128_u32[0];
        *(_QWORD *)&v69 = __PAIR64__(v31.m128_u32[0], v30.m128_u32[0]);
        *((_QWORD *)&v69 + 1) = __PAIR64__(v33.m128_u32[0], v32.m128_u32[0]);
        DWORD2(v72) = _mm_shuffle_ps(v32, v32, 255).m128_u32[0];
        LODWORD(v72) = _mm_shuffle_ps(v30, v30, 255).m128_u32[0];
        DWORD1(v72) = _mm_shuffle_ps(v31, v31, 255).m128_u32[0];
        DWORD2(v70) = _mm_shuffle_ps(v32, v32, 85).m128_u32[0];
        DWORD2(v71) = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
        Buf2[0] = v65;
        Buf2[1] = v66;
        Buf2[2] = v67;
        Buf2[3] = v68;
        v34 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
        v35 = *v10->m_piGLUniform;
        v36 = 11i64 * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable);
        HIDWORD(v70) = _mm_shuffle_ps(v33, v33, 85).m128_u32[0];
        HIDWORD(v71) = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
        location = *v10->m_piGLUniform;
        HIDWORD(v72) = _mm_shuffle_ps(v33, v33, 255).m128_u32[0];
        v37 = AgSingleton<KOFShaderManager>::ms_instance[v36 + 11].__vftable;
        v74[0] = v69;
        v74[1] = v70;
        v74[2] = v71;
        v38 = *((int *)&v37->~AgSingleton<KOFShaderManager> + 4 * v35);
        v39 = SHIDWORD(AgSingleton<KOFShaderManager>::ms_instance[v36 + 5].__vftable);
        v61 = v38;
        v74[3] = v72;
        v63 = AgSingleton<KOFShaderManager>::ms_instance[v39 + 494188].__vftable;
        if ( memcmp(*((const void **)&v63->~AgSingleton<KOFShaderManager> + v38), Buf2, 0x40ui64) )
        {
          v40 = (__int128 *)*((_QWORD *)&v63->~AgSingleton<KOFShaderManager> + v61);
          *v40 = v65;
          v40[1] = v66;
          v40[2] = v67;
          v40[3] = v68;
          KOFShaderManager::setUniformWriteMask(v34, location);
        }
        m_currentProgramSlot = v34->m_currentProgramSlot;
        locationa = v10->m_piGLUniform[1];
        index = v34->m_program[m_currentProgramSlot].m_uniformAttrib[locationa].index;
        v62 = v34->m_shaderUniformPtr[v34->m_program[m_currentProgramSlot].m_linkID];
        if ( memcmp(v62[index], v74, 0x40ui64) )
        {
          v42 = (__int128 *)v62[index];
          *v42 = v69;
          v42[1] = v70;
          v42[2] = v71;
          v42[3] = v72;
          KOFShaderManager::setUniformWriteMask(v34, locationa);
        }
        v43 = v10->m_piGLUniform[5];
        v44 = v34->m_shaderUniformPtr[v34->m_program[v34->m_currentProgramSlot].m_linkID][v34->m_program[v34->m_currentProgramSlot].m_uniformAttrib[v43].index];
        if ( *v44 != (_QWORD)_xmm || v44[1] != _mm_srli_si128((__m128i)_xmm, 8).m128i_u64[0] )
        {
          *(_OWORD *)v44 = _xmm;
          KOFShaderManager::setUniformWriteMask(v34, v43);
        }
        v45 = *(unsigned int *)v34->m_program[v34->m_currentProgramSlot].m_pOglShader->m_piGLAttrib.glValue;
        if ( (unsigned int)v45 < g_maxEnabledVertexAttribArrays )
        {
          g_vertexAttribIndex[v45] = 0;
          g_pendingVertexAttribArrays |= 1 << v45;
        }
        v46 = 144;
        v47 = *v34->m_program[v34->m_currentProgramSlot].m_pOglShader->m_piGLAttrib.glValue;
        renderSize = Framework::GLManager::glm->renderSize;
        switch ( renderSize )
        {
          case 64:
            v49 = 64;
            break;
          case 280:
            v49 = 136;
            break;
          case 208:
            v49 = 64;
            break;
          default:
            v49 = 88;
            if ( renderSize == 144 )
              v49 = 144;
            break;
        }
        if ( v47 >= 0 )
        {
          _glewVertexAttribPointer(v47, 3, 0x1406u, 0, v49, v16);
          v34 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
          v46 = 144;
        }
        v50 = v10->m_piGLUniform[5];
        v51 = v34->m_shaderUniformPtr[v34->m_program[v34->m_currentProgramSlot].m_linkID][v34->m_program[v34->m_currentProgramSlot].m_uniformAttrib[v50].index];
        if ( *v51 != (_QWORD)_xmm || v51[1] != _mm_srli_si128((__m128i)_xmm, 8).m128i_u64[0] )
        {
          *(_OWORD *)v51 = _xmm;
          KOFShaderManager::setUniformWriteMask(v34, v50);
        }
        v52 = *((unsigned int *)v34->m_program[v34->m_currentProgramSlot].m_pOglShader->m_piGLAttrib.glValue + 4);
        if ( (unsigned int)v52 < g_maxEnabledVertexAttribArrays )
        {
          g_pendingVertexAttribArrays |= 1 << v52;
          g_vertexAttribIndex[v52] = 4;
        }
        v53 = Framework::GLManager::glm->renderSize;
        v54 = v34->m_program[v34->m_currentProgramSlot].m_pOglShader->m_piGLAttrib.glValue[4];
        if ( v53 != 64 )
        {
          if ( v53 == 280 )
          {
            v12 = 8;
LABEL_44:
            if ( v54 >= 0 )
              _glewVertexAttribPointer(v54, 2, 0x1406u, 0, v12, v16);
            if ( m_ActiveTexture )
            {
              m_ActiveTexture = 0;
              _glewActiveTexture(0x84C0u);
            }
            m_sync = pMask->m_sync;
            if ( m_sync )
            {
              _glewWaitSync(m_sync, 0, 0xFFFFFFFFFFFFFFFFui64);
              _glewDeleteSync(pMask->m_sync);
              pMask->m_sync = 0i64;
            }
            m_TexID = pMask->m_TexID;
            if ( m_TexID != ::m_TexID[m_ActiveTexture] || !m_TexID )
            {
              v57 = Framework::GLManager::glm;
              ::m_TexID[m_ActiveTexture] = m_TexID;
              v57->m_textureID = m_TexID;
              while ( v57->m_bOpenGLBlocked )
                ;
              glBindTexture(0xDE1u, m_TexID);
            }
            glDrawArraysAG((unsigned int)m_sync, m_TexID, 4);
            Graphics::drawStack(this->g->g);
            glColorMask(1u, 1u, 1u, 1u);
            return;
          }
          if ( v53 != 208 )
          {
            if ( v53 == v46 )
            {
              v12 = v46;
              goto LABEL_44;
            }
            v12 = 88;
          }
        }
        v16 = v60;
        goto LABEL_44;
      }
    }
  }
}

void __fastcall AppMain::PartyBattleDisconnectNotification(AppMain *this)
{
  int battleDisconnectMessageState; // eax
  GfxManager *v3; // rax
  GfxManager *v4; // rax
  GfxManager *v5; // rax
  __int64 v6; // rax
  GfxManager *v7; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  GfxManager *v9; // [rsp+60h] [rbp+8h]
  GfxManager *v10; // [rsp+60h] [rbp+8h]
  GfxManager *v11; // [rsp+60h] [rbp+8h]

  battleDisconnectMessageState = this->battleDisconnectMessageState;
  switch ( battleDisconnectMessageState )
  {
    case 0:
      return;
    case 1:
      this->m_bInvitePermit = 0;
      v3 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        v9 = (GfxManager *)operator new(0x108ui64);
        GfxManager::GfxManager(v9);
        GfxManager::instance = v3;
      }
      GfxManager::GFv_SetSystemMessage(
        v3,
        "$ERROR_CUTTING_2",
        SYSTEM_MESSAGE_NONE,
        0,
        1,
        "no_title",
        &pnewText,
        "size_s");
      v4 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        v10 = (GfxManager *)operator new(0x108ui64);
        GfxManager::GfxManager(v10);
        GfxManager::instance = v4;
      }
      v4->m_pCallBackEventFunc = SystemMessageCallback_PartyBattleDisconnectNotification;
      break;
    case 2:
      this->m_bInvitePermit = 0;
      GfxManager::getInstance();
      GfxManager::GFv_SetSystemMessage(v5, "$ERROR_CUTTING_2", SYSTEM_MESSAGE_OK, 0, 1, "no_title", &pnewText, "size_s");
      GfxManager::getInstance();
      *(_QWORD *)(v6 + 248) = SystemMessageCallback_NotPartyBattleDisconnectNotification;
      GfxManager::getInstance();
      break;
    default:
      goto LABEL_11;
  }
  GfxManager::GFv_onNetworkError(v4, NETWORK_ERROR_TYPE_CONNECTION);
  this->battleDisconnectMessageState = 10;
LABEL_11:
  if ( ++this->battleDisconnectMessageState == 310 )
  {
    v7 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v11 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v11);
      GfxManager::instance = v7;
    }
    m_ptr = v7->m_GFXMovieSystem.m_movieProxy.m_ptr;
    if ( m_ptr )
    {
      if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.CloseSystemMessage") )
        Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.CloseSystemMessage", 0i64, 0i64, 0);
    }
  }
}

void __fastcall AppMain::SetBattleLoadingNonFade(AppMain *this, int nextFunc, int exitFunc)
{
  bool v3; // zf

  v3 = this->m_FuncFT == 170;
  this->m_iLoadingNextFunc = 177;
  this->iReserveScene = -1;
  this->m_FadeST = 183;
  this->m_FuncST = 0;
  this->m_FadeExitFunc = exitFunc;
  this->m_bExitFuncWaitFrame = 0;
  if ( !v3 )
    this->m_FuncFT = 172;
}

void __fastcall AppMain::SetBattleRoundTransition(AppMain *this, const BattleSystem::BattleRoundInfo *info)
{
  BattleSystem::BattleController *v4; // rdi
  BattleSystem::BattleController *v5; // rax
  signed int v6; // ebx
  unsigned int i; // esi
  extension::SoundManager *v8; // rax
  bool v9; // r8
  __int64 iMemberReferIndex; // rax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // edi
  extension::SoundManager *v19; // rax
  BattleSystem::BattleController *v20; // [rsp+48h] [rbp+10h]
  extension::SoundManager *v21; // [rsp+48h] [rbp+10h]
  extension::SoundManager *v22; // [rsp+48h] [rbp+10h]

  v4 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v20 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v20);
    v4 = v5;
    BattleSystem::BattleController::instance = v5;
  }
  BTLNT_StartBattle();
  v6 = 0;
  if ( info->iRoundCount > 0 )
  {
    BattleSystem::BattleRoundInfo::RestorRoundInfo(
      (BattleSystem::BattleRoundInfo *)info,
      &v4->battleInfo,
      v4->playerInfo,
      &v4->playerInfo[1]);
  }
  else
  {
    for ( i = 0; i < 0x11; ++i )
    {
      v8 = extension::SoundManager::the_instance;
      if ( !extension::SoundManager::the_instance )
      {
        v21 = (extension::SoundManager *)operator new(0x310ui64);
        extension::SoundManager::SoundManager(v21);
        extension::SoundManager::the_instance = v8;
      }
      extension::SoundManager::stopGroupSE(v8, i);
    }
    BattleSystem::BattleController::BattleInit(v4, 0);
  }
  iMemberReferIndex = v4->playerInfo[0].iMemberReferIndex;
  if ( v4->playerInfo[0].iMemberCount > (int)iMemberReferIndex )
    v11 = v4->playerInfo[0].charaNo[iMemberReferIndex];
  else
    v11 = -1;
  if ( v4->loadedInfo.loadedChara[0].charaNo == v11
    && ((v12 = v4->playerInfo[0].iMemberReferIndex, v4->playerInfo[0].iMemberCount > (int)v12) ? (v13 = v4->playerInfo[0].iCharaColor[v12]) : (v13 = -1),
        v4->loadedInfo.loadedChara[0].iCharaColor == v13
     && ((v14 = v4->playerInfo[1].iMemberReferIndex, v4->playerInfo[1].iMemberCount > (int)v14) ? (v15 = v4->playerInfo[1].charaNo[v14]) : (v15 = -1),
         v4->loadedInfo.loadedChara[1].charaNo == v15
      && ((v16 = v4->playerInfo[1].iMemberReferIndex, v4->playerInfo[1].iMemberCount > (int)v16) ? (v17 = v4->playerInfo[1].iCharaColor[v16]) : (v17 = -1),
          v4->loadedInfo.loadedChara[1].iCharaColor == v17))) )
  {
    v18 = 133124;
    do
    {
      if ( (unsigned int)v6 > 0x11 || !_bittest(&v18, v6) )
      {
        v19 = extension::SoundManager::the_instance;
        if ( !extension::SoundManager::the_instance )
        {
          v22 = (extension::SoundManager *)operator new(0x310ui64);
          extension::SoundManager::SoundManager(v22);
          extension::SoundManager::the_instance = v19;
        }
        extension::SoundManager::stopGroupSE(v19, v6);
      }
      ++v6;
    }
    while ( v6 < 18 );
    AppMain::BattleRoundInit(this, 0, v9);
  }
  else
  {
    this->bAT_NextBattleExit = 1;
    BattleHud::hideUsernames(&this->m_BattleHud);
    this->m_iLoadingNextFunc = 177;
    this->iReserveScene = -1;
    this->m_FadeST = 183;
    this->m_FuncST = 0;
    this->m_FadeExitFunc = 181;
    this->m_bExitFuncWaitFrame = 0;
    if ( this->m_FuncFT != 170 )
      this->m_FuncFT = 172;
  }
}

void __fastcall AppMain::SetResultLoadingNonFade(AppMain *this, int nextFunc, int exitFunc)
{
  bool v3; // zf

  v3 = this->m_FuncFT == 170;
  this->m_iLoadingNextFunc = 40;
  this->iReserveScene = -1;
  this->m_FadeST = 199;
  this->m_FuncST = 0;
  this->m_FadeExitFunc = 182;
  this->m_bExitFuncWaitFrame = 0;
  if ( !v3 )
    this->m_FuncFT = 172;
}

void __fastcall AppMain::SetRoundRestart(AppMain *this, bool bRoundRestart, bool bReload)
{
  BattleSystem::BattleController *v4; // rdi
  BattleSystem::BattleController *v5; // rax
  int v6; // ebx
  extension::SoundManager *v7; // rax
  extension::SoundManager *v8; // rax
  AppMain *v9; // rcx
  bool v10; // r8
  __int64 *v11; // rax
  __int64 v12; // rbx
  GameDataInfo *v13; // rcx
  GAME_MODE v14; // edx
  unsigned int *m_RandSeed; // rbx
  BattleSystem::BattleController *v16; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v17; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v18; // [rsp+40h] [rbp+8h]

  v4 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v16 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v16);
    v4 = v5;
    BattleSystem::BattleController::instance = v5;
  }
  v6 = 0;
  if ( v4->battleInfo.battleStageID == STAGE_ID_GTR )
  {
    do
    {
      if ( v6 != 2 )
      {
        v7 = extension::SoundManager::the_instance;
        if ( !extension::SoundManager::the_instance )
        {
          v17 = (extension::SoundManager *)operator new(0x310ui64);
          extension::SoundManager::SoundManager(v17);
          extension::SoundManager::the_instance = v7;
        }
        extension::SoundManager::stopGroupSE(v7, v6);
      }
      ++v6;
    }
    while ( v6 < 17 );
  }
  else
  {
    do
    {
      v8 = extension::SoundManager::the_instance;
      if ( !extension::SoundManager::the_instance )
      {
        v18 = (extension::SoundManager *)operator new(0x310ui64);
        extension::SoundManager::SoundManager(v18);
        extension::SoundManager::the_instance = v8;
      }
      extension::SoundManager::stopGroupSE(v8, v6++);
    }
    while ( (unsigned int)v6 < 0x11 );
  }
  anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(GROUP_BGM, 1.0, 0.0);
  AppMain::Sound_Volume_SE_Modulation(v9, 1.0, 0.0);
  if ( (unsigned int)(v4->battleInfo.battleMode - 2) <= 3 )
  {
    v11 = (__int64 *)NtCurrentTeb()->Reserved1[11];
    v12 = *v11;
    v13 = (GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v11 + 40) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v13 = (GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        v13 = (GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      }
    }
    v14 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
    if ( (unsigned int)(v14 - 4) > 2 && v14 != GAME_MODE_ONLINETRAINING )
    {
      if ( (int)v13 > *(_DWORD *)(v12 + 40) )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v13);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        }
      }
      m_RandSeed = `GameDataInfo::getInstance'::`2'::instance.m_RandSeed;
      do
        *m_RandSeed++ = Xtime_get_ticks(v13);
      while ( (__int64)m_RandSeed < (__int64)&`GameDataInfo::getInstance'::`2'::instance.m_ReplayFlag );
    }
  }
  AppMain::BattleRoundInit(this, 1, v10);
  this->m_eventCheckValues = 0;
}

void __fastcall SystemMessageCallback_NotPartyBattleDisconnectNotification(int cursor)
{
  __int64 v1; // rbx
  AppMain *v2; // rcx

  if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY )
  {
    *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507532i64) = 0;
  }
  else
  {
    v1 = *(_QWORD *)&AppMain::pApp;
    if ( ((*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 7352i64) - 16) & 0xFFFFFFFD) != 0 )
    {
      *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2507448i64) = 1;
      *(_BYTE *)(v1 + 2182456) = 0;
      AppMain::SendRoomBack((AppMain *)v1, 1);
      *(_QWORD *)(v1 + 2507456) = 255i64;
      v2 = (AppMain *)(1000 * (unsigned int)*(unsigned __int8 *)(v1 + 2507456));
      *(_DWORD *)(v1 + 7376) = -1;
      *(_DWORD *)(v1 + 7368) = 148;
      *(_DWORD *)(v1 + 7352) = 0;
      *(_DWORD *)(v1 + 2507468) = 181;
      *(_WORD *)(v1 + 2507472) = 0;
      *(_DWORD *)(v1 + 2507452) = 30;
      *(_BYTE *)(v1 + 2507474) = 0;
      *(_DWORD *)(v1 + 7364) = 170;
      *(_DWORD *)(v1 + 2507464) = (int)v2 / 30;
      AppMain::StopBGMUtil(v2, 0.5);
    }
    *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507532i64) = 0;
  }
}

void __fastcall SystemMessageCallback_PartyBattleDisconnectNotification(int cursor)
{
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507532i64) = 0;
}

void __fastcall AppMain::UpdatePlayerDataCharaUseCount(
        AppMain *this,
        PLAYER_ID playerID,
        CHARACTER_NO charNo,
        bool bWinner,
        int index)
{
  __int64 v5; // rbx
  __int64 v7; // rsi
  GameDataInfo *Instance; // rax
  GAME_MODE v10; // edx
  AppMain *m_GameRuleIndex; // rcx
  GameDataInfo *v12; // rax
  GALLERY_ID GalleryID; // eax

  v5 = charNo;
  v7 = playerID;
  if ( (unsigned int)charNo <= CHARACTER_NO_NJD
    && playerID != PLAYER_ID_NONE
    && !GameDataInfo::getInstance()->m_ReplayFlag )
  {
    Instance = GameDataInfo::getInstance();
    v10 = Instance->m_GameMode[Instance->m_GameModeIndex];
    if ( (unsigned int)(v10 - 4) > 2 && v10 != GAME_MODE_ONLINETRAINING )
    {
      if ( GameDataInfo::getInstance()->m_ControllerSetting[v7] != USER_ID_1P )
        return;
      ++this->SaveDataMain.PlayerData.m_CharacterData[v5].iUseCountOffLine;
      if ( bWinner )
        ++this->SaveDataMain.PlayerData.m_CharacterData[v5].iWinCountOffLine;
      goto LABEL_14;
    }
    if ( (unsigned int)NetManager::GetPlayerID(&g_NetworkManager, -1) == (_DWORD)v7 )
    {
      v12 = GameDataInfo::getInstance();
      m_GameRuleIndex = (AppMain *)v12->m_GameRuleIndex;
      if ( v12->m_GameRule[(_QWORD)m_GameRuleIndex] != GAME_RULE_PARTY
        || (unsigned int)NetManager::GetPlayerIndex((NetManager *)m_GameRuleIndex, -1) == index )
      {
        ++this->SaveDataMain.PlayerData.m_CharacterData[v5].iUseCountOnLine;
        if ( bWinner )
          ++this->SaveDataMain.PlayerData.m_CharacterData[v5].iWinCountOnLine;
LABEL_14:
        GalleryID = (unsigned int)AppMain::GetGalleryID(m_GameRuleIndex, (CHARACTER_NO)v5);
        AppMain::UnlockGallery(this, GalleryID, 1);
      }
    }
  }
}

std::_Func_base<void,EffectDataListManager &> *__fastcall std::_Func_impl<_lambda_b96c9f0c3bce8ccd57f7791319f17781_,std::allocator<int>,void,EffectDataListManager &>::_Move(
        std::_Func_impl<<lambda_b96c9f0c3bce8ccd57f7791319f17781>,std::allocator<int>,void,EffectDataListManager &> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<_lambda_b96c9f0c3bce8ccd57f7791319f17781_,std::allocator<int>,void,EffectDataListManager &>::`vftable';
    *((_QWORD *)_Where + 1) = this->_Mypair._Myval2.colvec;
  }
  return (std::_Func_base<void,EffectDataListManager &> *)_Where;
}

void __fastcall std::_Func_impl<_lambda_b96c9f0c3bce8ccd57f7791319f17781_,std::allocator<int>,void,EffectDataListManager &>::_Delete_this(
        std::_Func_impl<<lambda_b96c9f0c3bce8ccd57f7791319f17781>,std::allocator<int>,void,EffectDataListManager &> *this,
        bool _Deallocate)
{
  this->__vftable = (std::_Func_impl<<lambda_b96c9f0c3bce8ccd57f7791319f17781>,std::allocator<int>,void,EffectDataListManager &>_vtbl *)&std::_Func_base<void,EffectDataListManager &>::`vftable';
  if ( _Deallocate )
    operator delete(this);
}

void __fastcall std::_Func_impl<_lambda_b96c9f0c3bce8ccd57f7791319f17781_,std::allocator<int>,void,EffectDataListManager &>::_Do_call(
        std::_Func_impl<<lambda_b96c9f0c3bce8ccd57f7791319f17781>,std::allocator<int>,void,EffectDataListManager &> *this,
        EffectDataListManager *<_Args_0>)
{
  <_Args_0>->m_FillColor.OGLVec4 = *this->_Mypair._Myval2.colvec;
}

std::_Align_type<double,64> *__fastcall __Get____Func_impl_U_unnamed_type_nothing___1__InstallGFxInterface_extension__YAXXZ_V__allocator_H_std__VValue_GFx_Scaleform__AEAVGFXIMovieContext_3_PEBV678_I_std__EEBAPEBXXZ(
        _Mtx_internal_imp_t *mtx)
{
  return &mtx->cs;
}

const type_info *__fastcall std::_Func_impl<_lambda_b96c9f0c3bce8ccd57f7791319f17781_,std::allocator<int>,void,EffectDataListManager &>::_Target_type(
        std::_Func_impl<<lambda_b96c9f0c3bce8ccd57f7791319f17781>,std::allocator<int>,void,EffectDataListManager &> *this)
{
  return (const type_info *)&_lambda_b96c9f0c3bce8ccd57f7791319f17781_ `RTTI Type Descriptor';
}

void __fastcall AppMain::checkGameLightFlag(AppMain *this)
{
  BattleSystem::BattleController *v2; // r14
  BattleSystem::BattleController *v3; // rax
  int i; // ebx
  int v5; // ebx
  unsigned __int64 v6; // rbp
  bool *p_bApply; // rsi
  unsigned __int64 v8; // rcx
  char *v9; // rax
  char v10; // dl
  BattleSystem::BattleController *v11; // [rsp+58h] [rbp+10h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v11 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v11);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  if ( (unsigned int)(v2->actSystem.cameraCtrl.offset.type - 3) <= 2 || v2->actSystem.bUseSubCamera )
  {
    for ( i = 0; i < 4; ++i )
      AppMain::setEffectLightOn(this, i, 0);
    this->cameraMotionPreview.iPreviewSide = 0;
  }
  else
  {
    if ( this->cameraMotionPreview.iPreviewSide != -1 )
      this->cameraMotionPreview.iPlayMode = 0;
    this->cameraMotionPreview.iPreviewSide = -1;
  }
  v5 = 0;
  v6 = 0i64;
  p_bApply = &v2->actSystem.cameraLightParam[0].bApply;
  do
  {
    if ( (unsigned int)v5 <= 3 && *p_bApply )
    {
      v8 = v6;
      if ( v6 > 3 )
        v8 = 0i64;
      *(&v2->actSystem.cameraLightParam[0].bApply + 2 * v8 + v8) = 0;
      v9 = (char *)v2 + 2 * v8;
      v10 = v9[v8 + 241048];
      if ( v10 <= 0 )
        AppMain::SwitchBackToGameLights(this, v5);
      else
        AppMain::SwitchToCameraLights(this, v5, v10 - 1, v9[v8 + 241049] != 0);
    }
    ++v5;
    ++v6;
    p_bApply += 3;
  }
  while ( v5 < 4 );
}

void __fastcall AppMain::checkSpecialEffectSetting(AppMain *this)
{
  BattleSystem::BattleController *v2; // rax
  int v3; // ebx
  __int64 v4; // rsi
  ActorChara **pPlayer; // r14
  ActorChara *v6; // rdi
  bool v7; // r15
  BattleSystem::BattleController *v8; // [rsp+58h] [rbp+10h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v8 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v8);
    BattleSystem::BattleController::instance = v2;
  }
  v3 = 0;
  v4 = 0i64;
  pPlayer = v2->actSystem.pPlayer;
  do
  {
    if ( (unsigned int)v3 <= 1 )
    {
      v6 = *pPlayer;
      if ( *pPlayer )
      {
        v7 = 0;
        if ( v6->GetBlurEffectCount(*pPlayer) <= 0 )
        {
          if ( this->ModelRoomSettings.postprocessSettings.motionBlurSettings[v4].motionBlurOn )
            AppMain::ClearMotionBlurFrames(this, v3);
        }
        else
        {
          v7 = 1;
          this->ModelRoomSettings.motionBlurMaxFrames = v6->GetBlurEffectCount(v6);
          this->ModelRoomSettings.motionBlurShowBit[v4] = v6->GetBlurFrameFlag(v6);
        }
        this->ModelRoomSettings.postprocessSettings.motionBlurSettings[v4].motionBlurOn = v7;
      }
    }
    ++v3;
    ++v4;
    ++pPlayer;
  }
  while ( v3 < 2 );
}

AppMain *__fastcall AppMain::createBattleCharacterStatus(
        AppMain *this,
        BattleEventHandler::Listener::CharacterStatus *pStatus)
{
  BattleSystem::BattleController *v3; // rbx
  BattleSystem::BattleController *v4; // rax
  BattleSystem::BattleController *v5; // rdi
  BattleSystem::BattleController *v6; // rax
  ActorChara *v7; // r12
  ActorChara *v8; // r14
  int battleCharaNo; // ebp
  CharaProjectData *v10; // r15
  int CharaDataIndex; // eax
  int v12; // edi
  int iBaseCharaID; // eax
  int v14; // ebx
  CharaProjectData *v15; // rbp
  int v16; // eax
  char v18[64]; // [rsp+28h] [rbp-40h] BYREF
  BattleSystem::BattleController *v19; // [rsp+70h] [rbp+8h]
  BattleSystem::BattleController *v20; // [rsp+70h] [rbp+8h]

  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v19 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v19);
    v3 = v4;
    BattleSystem::BattleController::instance = v4;
  }
  v5 = v3;
  if ( !v3 )
  {
    v20 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v20);
    v3 = v6;
    BattleSystem::BattleController::instance = v6;
  }
  v7 = v5->actSystem.pPlayer[0];
  v8 = v5->actSystem.pPlayer[1];
  battleCharaNo = v3->playerInfo[0].battleCharaNo;
  v10 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
  CharaDataIndex = CharaProjectData::GetCharaDataIndex(v10, battleCharaNo);
  v12 = -1;
  if ( CharaDataIndex >= 0 )
  {
    iBaseCharaID = v10->pCharaData[CharaDataIndex].iBaseCharaID;
    if ( iBaseCharaID < 0 )
      iBaseCharaID = battleCharaNo;
  }
  else
  {
    iBaseCharaID = -1;
  }
  LODWORD(this->bv) = iBaseCharaID;
  HIDWORD(this->bv) = LODWORD(v7->GetCenterPosition(v7, (OGLVec3 *)v18)->x);
  v14 = v3->playerInfo[1].battleCharaNo;
  v15 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
  v16 = CharaProjectData::GetCharaDataIndex(v15, v14);
  if ( v16 >= 0 )
  {
    v12 = v15->pCharaData[v16].iBaseCharaID;
    if ( v12 < 0 )
      v12 = v14;
  }
  LODWORD(this->e) = v12;
  HIDWORD(this->e) = LODWORD(v8->GetCenterPosition(v8, (OGLVec3 *)v18)->x);
  return this;
}

void __fastcall AppMain::renderSetCamera(AppMain *this, bool bNoCalc, int subCameraPlayerID)
{
  __int64 v3; // rsi
  BattleSystem::BattleController *v6; // rbx
  BattleSystem::BattleController *v7; // rax
  BattleSystem::BattleController *v8; // rax
  __int128 v9; // xmm1
  bool bFreeCameraMode; // cl
  float y; // xmm1_4
  float z; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm7_4
  float v19; // xmm6_4
  float v20; // xmm5_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm10_4
  float v25; // xmm9_4
  float v26; // xmm8_4
  float fProjBlendBase; // xmm0_4
  ActorChara *v28; // rcx
  bool v29; // si
  float v30; // xmm0_4
  bool v31; // al
  ActorChara *v32; // rcx
  float v33; // xmm0_4
  __int64 v34; // [rsp+30h] [rbp-51h]
  float x; // [rsp+30h] [rbp-51h]
  float v36; // [rsp+34h] [rbp-4Dh]
  __int64 v37; // [rsp+40h] [rbp-41h]
  float v38; // [rsp+48h] [rbp-39h]
  float v39; // [rsp+58h] [rbp-29h]
  float v40; // [rsp+60h] [rbp-21h]
  BattleSystem::BattleController *v41; // [rsp+E8h] [rbp+67h]
  BattleSystem::BattleController *v42; // [rsp+E8h] [rbp+67h]

  v3 = subCameraPlayerID;
  v6 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v41 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v41);
    v6 = v7;
    BattleSystem::BattleController::instance = v7;
    if ( !v7 )
    {
      v42 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v42);
      v6 = v8;
      BattleSystem::BattleController::instance = v8;
    }
  }
  if ( v6->actSystem.bFreeCameraMode )
  {
    if ( !bNoCalc )
      FreeCameraControl::Update(&v6->actSystem.freeCamera);
    *(_OWORD *)this->ModelRoomSettings.mView.m = *(_OWORD *)v6->actSystem.freeCamera.mView.m;
    *(_OWORD *)&this->ModelRoomSettings.mView.m[4] = *(_OWORD *)&v6->actSystem.freeCamera.mView.m[4];
    *(_OWORD *)&this->ModelRoomSettings.mView.m[8] = *(_OWORD *)&v6->actSystem.freeCamera.mView.m[8];
    *(_OWORD *)&this->ModelRoomSettings.mView.m[12] = *(_OWORD *)&v6->actSystem.freeCamera.mView.m[12];
    *(_OWORD *)this->ModelRoomSettings.mBillboard.m = *(_OWORD *)v6->actSystem.freeCamera.mBillboard.m;
    *(_OWORD *)&this->ModelRoomSettings.mBillboard.m[4] = *(_OWORD *)&v6->actSystem.freeCamera.mBillboard.m[4];
    *(_OWORD *)&this->ModelRoomSettings.mBillboard.m[8] = *(_OWORD *)&v6->actSystem.freeCamera.mBillboard.m[8];
    *(_OWORD *)&this->ModelRoomSettings.mBillboard.m[12] = *(_OWORD *)&v6->actSystem.freeCamera.mBillboard.m[12];
    *(_OWORD *)this->ModelRoomSettings.mProj[0].m = *(_OWORD *)v6->actSystem.freeCamera.mProj.m;
    *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[4] = *(_OWORD *)&v6->actSystem.freeCamera.mProj.m[4];
    *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[8] = *(_OWORD *)&v6->actSystem.freeCamera.mProj.m[8];
    v9 = *(_OWORD *)&v6->actSystem.freeCamera.mProj.m[12];
    goto LABEL_8;
  }
  if ( (int)v3 < 0 )
  {
    *(_OWORD *)this->ModelRoomSettings.mView.m = *(_OWORD *)v6->actSystem.cameraCtrl.mView.m;
    *(_OWORD *)&this->ModelRoomSettings.mView.m[4] = *(_OWORD *)&v6->actSystem.cameraCtrl.mView.m[4];
    *(_OWORD *)&this->ModelRoomSettings.mView.m[8] = *(_OWORD *)&v6->actSystem.cameraCtrl.mView.m[8];
    *(_OWORD *)&this->ModelRoomSettings.mView.m[12] = *(_OWORD *)&v6->actSystem.cameraCtrl.mView.m[12];
    *(_OWORD *)this->ModelRoomSettings.mBillboard.m = *(_OWORD *)v6->actSystem.cameraCtrl.mBillboard.m;
    *(_OWORD *)&this->ModelRoomSettings.mBillboard.m[4] = *(_OWORD *)&v6->actSystem.cameraCtrl.mBillboard.m[4];
    *(_OWORD *)&this->ModelRoomSettings.mBillboard.m[8] = *(_OWORD *)&v6->actSystem.cameraCtrl.mBillboard.m[8];
    *(_OWORD *)&this->ModelRoomSettings.mBillboard.m[12] = *(_OWORD *)&v6->actSystem.cameraCtrl.mBillboard.m[12];
    *(_OWORD *)this->ModelRoomSettings.mProj[0].m = *(_OWORD *)v6->actSystem.cameraCtrl.mProj.m;
    *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[4] = *(_OWORD *)&v6->actSystem.cameraCtrl.mProj.m[4];
    *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[8] = *(_OWORD *)&v6->actSystem.cameraCtrl.mProj.m[8];
    v9 = *(_OWORD *)&v6->actSystem.cameraCtrl.mProj.m[12];
LABEL_8:
    *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[12] = v9;
    bFreeCameraMode = v6->actSystem.bFreeCameraMode;
    if ( bFreeCameraMode )
    {
      *(float *)&v34 = v6->actSystem.freeCamera.vPos.x;
      y = v6->actSystem.freeCamera.vPos.y;
      z = v6->actSystem.freeCamera.vPos.z;
    }
    else if ( (unsigned int)(v6->actSystem.cameraCtrl.offset.type - 3) <= 2 )
    {
      *(float *)&v34 = v6->actSystem.cameraCtrl.offset.vStart.x;
      y = v6->actSystem.cameraCtrl.offset.vStart.y;
      z = v6->actSystem.cameraCtrl.offset.vStart.z;
    }
    else
    {
      *(float *)&v34 = v6->actSystem.cameraCtrl.vPos.x;
      y = v6->actSystem.cameraCtrl.vPos.y;
      z = v6->actSystem.cameraCtrl.vPos.z;
    }
    *((float *)&v34 + 1) = y;
    v38 = z;
    v37 = v34;
    if ( bFreeCameraMode )
    {
      x = v6->actSystem.freeCamera.vLook.x;
      v13 = v6->actSystem.freeCamera.vLook.y;
      v14 = v6->actSystem.freeCamera.vLook.z;
    }
    else if ( (unsigned int)(v6->actSystem.cameraCtrl.offset.type - 3) <= 2 )
    {
      x = v6->actSystem.cameraCtrl.offset.vStartLook.x;
      v13 = v6->actSystem.cameraCtrl.offset.vStartLook.y;
      v14 = v6->actSystem.cameraCtrl.offset.vStartLook.z;
    }
    else
    {
      x = v6->actSystem.cameraCtrl.vLook.x;
      v13 = v6->actSystem.cameraCtrl.vLook.y;
      v14 = v6->actSystem.cameraCtrl.vLook.z;
    }
    v36 = v13;
    v39 = v14;
    if ( bFreeCameraMode )
    {
      v40 = v6->actSystem.freeCamera.vUp.x;
      v15 = v6->actSystem.freeCamera.vUp.y;
      v16 = v6->actSystem.freeCamera.vUp.z;
    }
    else
    {
      v40 = v6->actSystem.cameraCtrl.vUp.x;
      v15 = v6->actSystem.cameraCtrl.vUp.y;
      v16 = v6->actSystem.cameraCtrl.vUp.z;
    }
    v24 = v40;
    v25 = v15;
    v26 = v16;
    v21 = x;
    v22 = v36;
    v23 = v39;
    v18 = *(float *)&v37;
    v19 = *((float *)&v37 + 1);
    v20 = v38;
    goto LABEL_31;
  }
  v17 = v3;
  *(_OWORD *)this->ModelRoomSettings.mView.m = *(_OWORD *)v6->actSystem.subCameraCtrl[v3].mView.m;
  *(_OWORD *)&this->ModelRoomSettings.mView.m[4] = *(_OWORD *)&v6->actSystem.subCameraCtrl[v3].mView.m[4];
  *(_OWORD *)&this->ModelRoomSettings.mView.m[8] = *(_OWORD *)&v6->actSystem.subCameraCtrl[v3].mView.m[8];
  *(_OWORD *)&this->ModelRoomSettings.mView.m[12] = *(_OWORD *)&v6->actSystem.subCameraCtrl[v3].mView.m[12];
  *(_OWORD *)this->ModelRoomSettings.mBillboard.m = *(_OWORD *)v6->actSystem.subCameraCtrl[v3].mBillboard.m;
  *(_OWORD *)&this->ModelRoomSettings.mBillboard.m[4] = *(_OWORD *)&v6->actSystem.subCameraCtrl[v3].mBillboard.m[4];
  *(_OWORD *)&this->ModelRoomSettings.mBillboard.m[8] = *(_OWORD *)&v6->actSystem.subCameraCtrl[v3].mBillboard.m[8];
  *(_OWORD *)&this->ModelRoomSettings.mBillboard.m[12] = *(_OWORD *)&v6->actSystem.subCameraCtrl[v3].mBillboard.m[12];
  *(_OWORD *)this->ModelRoomSettings.mProj[0].m = *(_OWORD *)v6->actSystem.subCameraCtrl[v3].mProj.m;
  *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[4] = *(_OWORD *)&v6->actSystem.subCameraCtrl[v3].mProj.m[4];
  *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[8] = *(_OWORD *)&v6->actSystem.subCameraCtrl[v3].mProj.m[8];
  *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[12] = *(_OWORD *)&v6->actSystem.subCameraCtrl[v3].mProj.m[12];
  if ( (unsigned int)(v6->actSystem.subCameraCtrl[v3].offset.type - 3) <= 2 )
  {
    v18 = v6->actSystem.subCameraCtrl[v17].offset.vStart.x;
    v19 = v6->actSystem.subCameraCtrl[v17].offset.vStart.y;
    v20 = v6->actSystem.subCameraCtrl[v17].offset.vStart.z;
  }
  else
  {
    v18 = v6->actSystem.subCameraCtrl[v17].vPos.x;
    v19 = v6->actSystem.subCameraCtrl[v17].vPos.y;
    v20 = v6->actSystem.subCameraCtrl[v17].vPos.z;
  }
  if ( (unsigned int)(v6->actSystem.subCameraCtrl[v17].offset.type - 3) <= 2 )
  {
    v21 = v6->actSystem.subCameraCtrl[v17].offset.vStartLook.x;
    v22 = v6->actSystem.subCameraCtrl[v17].offset.vStartLook.y;
    v23 = v6->actSystem.subCameraCtrl[v17].offset.vStartLook.z;
  }
  else
  {
    v21 = v6->actSystem.subCameraCtrl[v17].vLook.x;
    v22 = v6->actSystem.subCameraCtrl[v17].vLook.y;
    v23 = v6->actSystem.subCameraCtrl[v17].vLook.z;
  }
  v24 = v6->actSystem.subCameraCtrl[v17].vUp.x;
  v25 = v6->actSystem.subCameraCtrl[v17].vUp.y;
  v26 = v6->actSystem.subCameraCtrl[v17].vUp.z;
LABEL_31:
  *(_OWORD *)this->ModelRoomSettings.mProj[3].m = *(_OWORD *)this->ModelRoomSettings.mProj[0].m;
  *(_OWORD *)&this->ModelRoomSettings.mProj[3].m[4] = *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[4];
  *(_OWORD *)&this->ModelRoomSettings.mProj[3].m[8] = *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[8];
  *(_OWORD *)&this->ModelRoomSettings.mProj[3].m[12] = *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[12];
  *(_OWORD *)this->ModelRoomSettings.mProj[2].m = *(_OWORD *)this->ModelRoomSettings.mProj[0].m;
  *(_OWORD *)&this->ModelRoomSettings.mProj[2].m[4] = *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[4];
  *(_OWORD *)&this->ModelRoomSettings.mProj[2].m[8] = *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[8];
  *(_OWORD *)&this->ModelRoomSettings.mProj[2].m[12] = *(_OWORD *)&this->ModelRoomSettings.mProj[0].m[12];
  this->ModelRoomSettings.fCamPos[0] = v18;
  this->ModelRoomSettings.fCamPos[1] = v19;
  this->ModelRoomSettings.fCamPos[2] = v20;
  this->ModelRoomSettings.fCamLook[0] = v21;
  this->ModelRoomSettings.fCamLook[1] = v22;
  this->ModelRoomSettings.fCamLook[2] = v23;
  this->ModelRoomSettings.fCamUp[0] = v24;
  this->ModelRoomSettings.fCamUp[1] = v25;
  this->ModelRoomSettings.fCamUp[2] = v26;
  if ( bNoCalc )
    return;
  if ( v6->actSystem.bFreeCameraMode )
  {
    fProjBlendBase = v6->actSystem.freeCamera.fProjBlendBase;
  }
  else if ( v6->actSystem.bUseSubCamera )
  {
    fProjBlendBase = 0.0;
  }
  else
  {
    fProjBlendBase = v6->actSystem.cameraCtrl.fProjBlendValue;
  }
  this->m_pRender->m_fOrthoProjRatio = fProjBlendBase;
  AppMain::_MODELROOM_SETTINGS::CalcBlendProjParam(&this->ModelRoomSettings);
  v28 = v6->actSystem.pPlayer[0];
  v29 = 1;
  if ( v28 )
  {
    v30 = v28->GetBaseAnimeAlpha(v28);
    if ( v30 > 0.0 && v30 < 1.0 )
    {
      v31 = 1;
      goto LABEL_43;
    }
  }
  else
  {
    v30 = *(float *)&FLOAT_1_0;
  }
  v31 = 0;
LABEL_43:
  this->ModelRoomSettings.postprocessSettings.bufferTransparencySettings.transparencyOn[0] = v31;
  this->ModelRoomSettings.postprocessSettings.bufferTransparencySettings.opacity[0] = v30;
  v32 = v6->actSystem.pPlayer[1];
  if ( v32 )
  {
    v33 = v32->GetBaseAnimeAlpha(v32);
    if ( v33 > 0.0 && v33 < 1.0 )
      goto LABEL_48;
  }
  else
  {
    v33 = *(float *)&FLOAT_1_0;
  }
  v29 = 0;
LABEL_48:
  this->ModelRoomSettings.postprocessSettings.bufferTransparencySettings.transparencyOn[1] = v29;
  this->ModelRoomSettings.postprocessSettings.bufferTransparencySettings.opacity[1] = v33;
}

