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
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_fontman.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
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
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/menuutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/content/contentsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/menudata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"

enum SCENE_MEMBER
{
	LOAD = 0,
	PLAY = 1,
	START = 2,
};
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5D8F0
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B0F
void LoadCompleteEventMemberSelect(); // 0x1401C4E90
void AppMain::MemberSelectStart(); // 0x1401C5230
void AppMain::ST_MemberSelectInit(); // 0x1401C5310
void AppMain::ST_MemberSelectLoop(); // 0x1401C5B00
void AppMain::ST_MemberSelectDraw(); // 0x1401C06B0
void AppMain::MembserSelectAddController(USER_ID userID, long userPos); // 0x1401C6780
void AppMain::MembserSelectPartyConnection(); // 0x1401C6810
void AppMain::MembserSelectNormalConnection(); // 0x1401C6F40//decompilation failure at 140A5D8F0!
//decompilation failure at 1408A0B0F!
void __fastcall LoadCompleteEventMemberSelect()
{
  GfxManager *v0; // rdi
  GfxManager *v1; // rax
  __int64 v2; // rsi
  _DWORD *v3; // r15
  GameDataInfo *v4; // rcx
  USER_ID v5; // er14
  FighterOperation *v6; // rax
  int *p_userIndex; // rdx
  int v8; // ebp
  int v9; // ecx
  FighterOperation::ListenerNode *p_m_assignListenerListEnd; // r13
  extension::BiLinkable<FighterOperation::ListenerNode> *m_Next; // rbx
  extension::BiLinkable<FighterOperation::ListenerNode> **p_m_Next; // rcx
  GameDataInfo *v13; // rcx
  USER_ID v14; // er14
  FighterOperation *v15; // rax
  int *v16; // rdx
  int v17; // ecx
  FighterOperation::ListenerNode *v18; // r13
  extension::BiLinkable<FighterOperation::ListenerNode> *v19; // rbx
  extension::BiLinkable<FighterOperation::ListenerNode> **v20; // rcx
  GameDataInfo *v21; // rcx
  GAME_MODE *m_GameMode; // rcx
  int v23; // eax
  USER_ID v24; // edi
  USER_ID v25; // ebx
  int v26; // er8
  AppMain *v27; // rcx
  GameDataInfo *v28; // rcx
  int v29; // ecx
  __int64 v30; // [rsp+20h] [rbp-38h]
  GfxManager *v31; // [rsp+60h] [rbp+8h]

  v30 = -2i64;
  v0 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v31 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v31);
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
  v5 = `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0];
  v6 = FighterOperation::Instance();
  p_userIndex = &v6->m_slots[0].userIndex;
  v8 = 0;
  if ( v6 != (FighterOperation *)-8i64 )
  {
    v9 = *p_userIndex;
    *p_userIndex = v5;
    v6->m_slots[0].userId = v5;
    if ( v9 != v5 )
    {
      p_m_assignListenerListEnd = &v6->m_assignListenerListEnd;
      m_Next = v6->m_assignListenerListEnd.m_Next;
      if ( m_Next != &v6->m_assignListenerListEnd )
      {
        do
        {
          p_m_Next = &m_Next[-1].m_Next;
          if ( !m_Next )
            p_m_Next = 0i64;
          ((void (__fastcall *)(extension::BiLinkable<FighterOperation::ListenerNode> **, __int64, _QWORD))(*p_m_Next)->m_Next)(
            p_m_Next,
            1i64,
            (unsigned int)v5);
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
      GameDataInfo::GameDataInfo(v13);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v14 = `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1];
  v15 = FighterOperation::Instance();
  v16 = &v15->m_slots[1].userIndex;
  if ( v15 != (FighterOperation *)-1488i64 )
  {
    v17 = *v16;
    *v16 = v14;
    v15->m_slots[1].userId = v14;
    if ( v17 != v14 )
    {
      v18 = &v15->m_assignListenerListEnd;
      v19 = v15->m_assignListenerListEnd.m_Next;
      if ( v19 != &v15->m_assignListenerListEnd )
      {
        do
        {
          v20 = &v19[-1].m_Next;
          if ( !v19 )
            v20 = 0i64;
          ((void (__fastcall *)(extension::BiLinkable<FighterOperation::ListenerNode> **, __int64, _QWORD, __int64, __int64))(*v20)->m_Next)(
            v20,
            2i64,
            (unsigned int)v14,
            0xFFFFFFFFi64,
            v30);
          v19 = v19->m_Next;
        }
        while ( v19 != v18 );
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
  m_GameMode = `GameDataInfo::getInstance'::`2'::instance.m_GameMode;
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_VERSUS
    && `GameDataInfo::getInstance'::`2'::instance.m_ControllerSelect )
  {
    if ( v0->m_GFXMovie.m_movieProxy.m_ptr )
      v0->m_GFXMovie.m_movieProxy.m_ptr->m_operationGenerator.m_multiControllerMode = ByUser;
    v0->m_ControllerSelect = 1;
    v23 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v23 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo((GameDataInfo *)m_GameMode);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        v23 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      }
    }
    v24 = `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0];
    if ( v23 > *v3 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo((GameDataInfo *)m_GameMode);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    v25 = `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1];
    if ( v24 == USER_ID_1P )
    {
      v26 = 1;
    }
    else
    {
      v26 = 0;
      if ( `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1] == USER_ID_1P )
        v26 = 2;
    }
    AppMain::MembserSelectAddController((AppMain *)m_GameMode, USER_ID_1P, v26);
    if ( v24 == USER_ID_2P )
    {
      v8 = 1;
    }
    else if ( v25 == USER_ID_2P )
    {
      v8 = 2;
    }
    AppMain::MembserSelectAddController(v27, USER_ID_2P, v8);
  }
  else
  {
    v0->m_ControllerSelect = 0;
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v28);
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
  }
  if ( !*(_DWORD *)(v2 + 11084) )
    *(_DWORD *)(v2 + 11084) = 1;
  if ( *(_DWORD *)(v2 + 2507460) )
  {
    *(_BYTE *)(v2 + 2507472) = 0;
    *(_DWORD *)(v2 + 2507452) = 40;
    v29 = 1000 * *(unsigned __int8 *)(v2 + 2507456);
    *(_DWORD *)(v2 + 2507460) = v29;
    *(_DWORD *)(v2 + 2507464) = v29 / 40;
    *(_BYTE *)(v2 + 2507474) = 0;
    *(_DWORD *)(v2 + 7364) = 171;
  }
}

void __fastcall AppMain::MemberSelectStart(AppMain *this)
{
  GfxManager *v2; // rax
  GfxManager *v3; // rax
  GfxManager *v4; // [rsp+40h] [rbp+8h]
  GfxManager *v5; // [rsp+40h] [rbp+8h]

  this->m_SceneState = 2;
  if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x4000000) != 0 )
  {
    this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] &= ~0x4000000u;
    v2 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v4 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v4);
      GfxManager::instance = v2;
    }
    GfxManager::GFv_AddNotification(v2, "$CHARACTER_USE_INFO_ANT", ICON_NO_ANT);
  }
  if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x2000000) != 0 )
  {
    this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] &= ~0x2000000u;
    v3 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v5 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v5);
      GfxManager::instance = v3;
    }
    GfxManager::GFv_AddNotification(v3, "$CHARACTER_USE_INFO_VRS", ICON_NO_VRS);
  }
}

void __fastcall AppMain::MembserSelectAddController(AppMain *this, USER_ID userID, int userPos)
{
  const char *v5; // r9
  int userColor; // ebx
  GfxManager *v7; // rax
  GfxManager *v8; // [rsp+50h] [rbp+8h]

  UserGameOperation::Instance();
  userColor = userID;
  if ( !Framework::GLManager::glm )
    userColor = -1;
  v7 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v7;
  }
  GfxManager::GFv_AddController(v7, userID, userPos, v5, userColor);
}

void __fastcall AppMain::MembserSelectNormalConnection(AppMain *this)
{
  unsigned __int8 myNo; // r14
  __int64 v2; // rbx
  _DWORD *v3; // r12
  GameDataInfo *v4; // rcx
  GAME_RULE v5; // ecx
  int v6; // er13
  int v7; // er15
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  int v11; // esi
  GameDataInfo *v12; // rcx
  __int64 v13; // rdi
  CHARACTER_NO v14; // ebp
  GameDataInfo *v15; // rcx
  CHARACTER_COLOR v16; // ebx
  GameDataInfo *v17; // rcx
  int v18; // edi
  unsigned __int8 v19; // bl
  char *v20; // rdx
  char *v21; // rdx
  char *v22; // rdx
  GameDataInfo *v23; // rcx
  unsigned __int8 m_MyBustupCharacterNo; // r8
  __int64 v25; // rbp
  unsigned __int8 v26; // bl
  int PNo; // eax
  unsigned int index; // edi
  __int64 v29; // rbx
  unsigned __int8 m_CharacterId; // cl
  int v31; // ecx
  CHARACTER_NO m_CharacterId_low; // er15
  unsigned __int8 v33; // si
  int v34; // ecx
  unsigned __int8 m_ColorId; // cl
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  int v38; // ebp
  NetManager *v39; // rcx
  GfxManager *v40; // rcx
  GfxManager *v41; // rax
  CHARACTER_NO v42; // er9
  char v43; // [rsp+40h] [rbp-108h]
  PLAYER_ID playerID; // [rsp+44h] [rbp-104h]
  __int64 v45; // [rsp+48h] [rbp-100h]
  __int64 v46; // [rsp+50h] [rbp-F8h]
  __int64 v47; // [rsp+58h] [rbp-F0h]
  RANKMATCH_DISCONNECT_MARKER maker; // [rsp+60h] [rbp-E8h] BYREF
  _DWORD *v49; // [rsp+68h] [rbp-E0h]
  __int64 v50; // [rsp+70h] [rbp-D8h]
  GfxManager *v51; // [rsp+78h] [rbp-D0h]
  char name[144]; // [rsp+80h] [rbp-C8h] BYREF

  v50 = -2i64;
  if ( this->m_SceneState < 2 )
    return;
  myNo = g_NetworkManager.gamedata.myNo;
  v43 = g_NetworkManager.gamedata.myNo;
  v2 = (int)NetManager::GetPlayerID(&g_NetworkManager, g_NetworkManager.gamedata.myNo);
  v3 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  v49 = v3;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v4);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v5 = `GameDataInfo::getInstance'::`2'::instance.m_GameRule[`GameDataInfo::getInstance'::`2'::instance.m_GameRuleIndex];
  if ( v5 == GAME_RULE_SINGLE || (v6 = 3, v5 == GAME_RULE_TRAINING) )
    v6 = 1;
  v7 = 0;
  playerID = PLAYER_ID_1P;
  v8 = v2;
  v47 = v2;
  v45 = 0i64;
  v9 = 0i64;
  v46 = 0i64;
  v10 = 0i64;
  do
  {
    if ( v10 != v8 )
    {
      PNo = NetManager::GetPNo(&g_NetworkManager, (PLAYER_ID)v7, 0);
      index = 0;
      v29 = PNo;
      while ( 1 )
      {
        m_CharacterId = -1;
        if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY )
          break;
        if ( v29 != -1 )
        {
          if ( index )
          {
            if ( index == 1 )
            {
              v31 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[v29] + 2) >> 14;
            }
            else
            {
              if ( index != 2 )
                goto LABEL_58;
              LOBYTE(v31) = *((_BYTE *)&g_NetworkManager.gamedata.player_data[v29] + 12);
            }
            goto LABEL_57;
          }
LABEL_56:
          LOBYTE(v31) = *((_BYTE *)&g_NetworkManager.gamedata.player_data[v29] + 8);
LABEL_57:
          m_CharacterId = v31 & 0x3F;
          goto LABEL_58;
        }
        if ( index <= 2 )
          m_CharacterId = g_NetworkManager.gamedata.userInfo.m_Character[index].m_CharacterId;
LABEL_58:
        m_CharacterId_low = m_CharacterId;
        if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY )
        {
          if ( v29 == -1 )
            goto LABEL_67;
LABEL_68:
          v34 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[v29] + 2) >> 13;
LABEL_69:
          v33 = v34 & 1;
          goto LABEL_70;
        }
        if ( v29 == -1 )
        {
          v33 = g_NetworkManager.gamedata.userInfo.m_CharacterFix[(unsigned __int8)index];
          goto LABEL_70;
        }
        v33 = 0;
        if ( !(_BYTE)index )
          goto LABEL_68;
        if ( (unsigned __int8)index == 1 )
        {
          v34 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[v29] + 2) >> 27;
          goto LABEL_69;
        }
        if ( (unsigned __int8)index == 2 )
          v33 = (*((_DWORD *)&g_NetworkManager.gamedata.player_data[v29] + 3) & 0x2000) != 0;
LABEL_70:
        m_ColorId = 0;
        if ( v29 == -1 )
        {
          if ( index <= 2 )
            m_ColorId = g_NetworkManager.gamedata.userInfo.m_Character[index].m_ColorId;
          goto LABEL_81;
        }
        switch ( index )
        {
          case 0u:
            v36 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[v29] + 2);
LABEL_79:
            v37 = v36 >> 6;
LABEL_80:
            m_ColorId = v37 & 7;
            break;
          case 1u:
            v37 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[v29] + 2) >> 20;
            goto LABEL_80;
          case 2u:
            v36 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[v29] + 3);
            goto LABEL_79;
        }
LABEL_81:
        v38 = m_ColorId;
        strcpy(name, "name");
        memset(&name[5], 0, 0x7Cui64);
        maker = RANKMATCH_DISCONNECT_MARKER_NON;
        NetManager::GetPlayerName(v39, playerID, name, &maker, index);
        _DummyLogging("$$$ GFv_OnlineUserDecide playerID:%d index:%d charaNo:%d colorID:%d fix:%d name:%s");
        v40 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v51 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v51);
          v40 = v41;
          GfxManager::instance = v41;
        }
        v42 = m_CharacterId_low;
        v7 = playerID;
        GfxManager::GFv_OnlineUserDecide(v40, playerID, index, v42, v38, v33 != 0, name, maker);
        if ( v33 )
        {
          if ( (int)++index < v6 )
            continue;
        }
        v3 = v49;
        myNo = v43;
        goto LABEL_86;
      }
      if ( v29 == -1 )
      {
        m_CharacterId_low = LOBYTE(g_NetworkManager.gamedata.userInfo.m_Character[0].m_CharacterId);
LABEL_67:
        v33 = g_NetworkManager.gamedata.userInfo.m_CharacterFix[0];
        goto LABEL_70;
      }
      goto LABEL_56;
    }
    v11 = 0;
    while ( 1 )
    {
      if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v12);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        }
      }
      v13 = v9 + v11;
      v14 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][v13];
      if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v15);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        }
      }
      v16 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[0][v13];
      if ( GameDataInfo::IsSameColorSelected(
             &`GameDataInfo::getInstance'::`2'::instance,
             `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][v13],
             v16,
             `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][v13]) )
      {
        v16 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColorRand[0][v13];
      }
      if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v17);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        }
      }
      v18 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[0][v13];
      if ( v14 == CHARACTER_NO_NONE )
        break;
      v19 = v16 - 1;
      if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY || !(_BYTE)v11 )
      {
        v22 = (char *)&g_NetworkManager + 118 * myNo;
        *(_DWORD *)(v22 + 1465) &= 0xFFFFF800;
        *(_DWORD *)(v22 + 1465) |= v14 & 0x3F | ((v19 & 7 | (8 * (v18 & 3 | 0x10))) << 6);
        g_NetworkManager.gamedata.userInfo.m_Character[0].m_CharacterId = (unsigned __int8)v14;
        g_NetworkManager.gamedata.userInfo.m_Character[0].m_ColorId = v19;
        g_NetworkManager.gamedata.userInfo.m_Character[0].m_CostumeId = v18;
        g_NetworkManager.gamedata.userInfo.m_CharacterFix[0] = 1;
      }
      else if ( (unsigned __int8)v11 == 1 )
      {
        v21 = (char *)&g_NetworkManager + 118 * myNo;
        *(_DWORD *)(v21 + 1465) &= 0xFE003FFF;
        *(_DWORD *)(v21 + 1465) |= (v14 & 0x3F | ((v19 & 7 | (8 * (v18 & 3 | 0x10))) << 6)) << 14;
        g_NetworkManager.gamedata.userInfo.m_Character[1].m_CharacterId = (unsigned __int8)v14;
        g_NetworkManager.gamedata.userInfo.m_Character[1].m_ColorId = v19;
        g_NetworkManager.gamedata.userInfo.m_Character[1].m_CostumeId = v18;
        g_NetworkManager.gamedata.userInfo.m_CharacterFix[1] = 1;
      }
      else if ( (unsigned __int8)v11 == 2 )
      {
        v20 = (char *)&g_NetworkManager + 118 * myNo;
        *(_DWORD *)(v20 + 1469) &= 0xFFFFF800;
        *(_DWORD *)(v20 + 1469) |= v14 & 0x3F | ((v19 & 7 | (8 * (v18 & 3 | 0x10))) << 6);
        g_NetworkManager.gamedata.userInfo.m_Character[2].m_CharacterId = (unsigned __int8)v14;
        g_NetworkManager.gamedata.userInfo.m_Character[2].m_ColorId = v19;
        g_NetworkManager.gamedata.userInfo.m_Character[2].m_CostumeId = v18;
        g_NetworkManager.gamedata.userInfo.m_CharacterFix[2] = 1;
      }
LABEL_34:
      ++v11;
      v9 = v46;
      if ( v11 >= v6 )
      {
        v25 = v45;
        goto LABEL_88;
      }
    }
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v3 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v23);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    m_MyBustupCharacterNo = `GameDataInfo::getInstance'::`2'::instance.m_MyBustupCharacterNo;
    if ( `GameDataInfo::getInstance'::`2'::instance.m_MyBustupCharacterNo == CHARACTER_NO_NONE )
      goto LABEL_34;
    v26 = v16 - 1;
    if ( g_NetworkManager.gamedata.gameRule != GAME_RULE_PARTY && (_BYTE)v11 )
    {
      v25 = v45;
      if ( (unsigned __int8)v11 == 1 )
      {
        *((_DWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 2) = *((_DWORD *)&g_NetworkManager.gamedata.player_data[myNo]
                                                                        + 2) & 0xF6003FFF | ((`GameDataInfo::getInstance'::`2'::instance.m_MyBustupCharacterNo & 0x3F | ((v26 & 7 | (8 * (v18 & 3))) << 6)) << 14);
        g_NetworkManager.gamedata.userInfo.m_Character[1].m_CharacterId = m_MyBustupCharacterNo;
        g_NetworkManager.gamedata.userInfo.m_Character[1].m_ColorId = v26;
        g_NetworkManager.gamedata.userInfo.m_Character[1].m_CostumeId = v18;
        g_NetworkManager.gamedata.userInfo.m_CharacterFix[1] = 0;
      }
      else if ( (unsigned __int8)v11 == 2 )
      {
        *((_DWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 3) = *((_DWORD *)&g_NetworkManager.gamedata.player_data[myNo]
                                                                        + 3) & 0xFFFFD800 | `GameDataInfo::getInstance'::`2'::instance.m_MyBustupCharacterNo & 0x3F | ((v26 & 7 | (8 * (v18 & 3))) << 6);
        g_NetworkManager.gamedata.userInfo.m_Character[2].m_CharacterId = m_MyBustupCharacterNo;
        g_NetworkManager.gamedata.userInfo.m_Character[2].m_ColorId = v26;
        g_NetworkManager.gamedata.userInfo.m_Character[2].m_CostumeId = v18;
        g_NetworkManager.gamedata.userInfo.m_CharacterFix[2] = 0;
      }
      goto LABEL_87;
    }
    *((_DWORD *)&g_NetworkManager.gamedata.player_data[myNo] + 2) = *((_DWORD *)&g_NetworkManager.gamedata.player_data[myNo]
                                                                    + 2) & 0xFFFFD800 | `GameDataInfo::getInstance'::`2'::instance.m_MyBustupCharacterNo & 0x3F | ((v26 & 7 | (8 * (v18 & 3))) << 6);
    g_NetworkManager.gamedata.userInfo.m_Character[0].m_CharacterId = m_MyBustupCharacterNo;
    g_NetworkManager.gamedata.userInfo.m_Character[0].m_ColorId = v26;
    g_NetworkManager.gamedata.userInfo.m_Character[0].m_CostumeId = v18;
    g_NetworkManager.gamedata.userInfo.m_CharacterFix[0] = 0;
LABEL_86:
    v25 = v45;
LABEL_87:
    v9 = v46;
LABEL_88:
    v8 = v47;
    playerID = ++v7;
    v10 = v25 + 1;
    v45 = v10;
    v9 += 3i64;
    v46 = v9;
  }
  while ( v7 < 2 );
}

void __fastcall AppMain::MembserSelectPartyConnection(AppMain *this)
{
  int myNo; // er12
  int v2; // er13
  __int64 PlayerID; // rdi
  NetManager *v4; // rcx
  int PlayerIndex; // esi
  _DWORD *v6; // r14
  int v7; // ebx
  GameDataInfo *v8; // rcx
  __int64 v9; // rbp
  CHARACTER_NO v10; // er15
  GameDataInfo *v11; // rcx
  CHARACTER_COLOR v12; // edi
  GameDataInfo *v13; // rcx
  int v14; // ebx
  unsigned __int8 v15; // di
  char *v16; // rdx
  int v17; // ecx
  int v18; // ecx
  char *v19; // rdx
  int v20; // ecx
  int v21; // ecx
  char *v22; // rdx
  int v23; // ecx
  int v24; // ecx
  CHARACTER_NO m_MyBustupCharacterNo; // er8
  unsigned __int8 v26; // di
  __int64 v27; // rdx
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // ecx
  __int64 v33; // rdx
  int v34; // ecx
  int v35; // ecx
  int i; // er14
  int index; // ebx
  int PNo; // eax
  unsigned __int8 m_CharacterId; // dl
  int v40; // edx
  CHARACTER_NO m_CharacterId_low; // esi
  unsigned __int8 v42; // dl
  unsigned int v43; // edx
  unsigned int v44; // edx
  bool fix; // bp
  unsigned __int8 m_ColorId; // dl
  unsigned int v47; // edx
  unsigned int v48; // edx
  int v49; // edi
  NetManager *v50; // rcx
  GfxManager *v51; // rcx
  GfxManager *v52; // rax
  RANKMATCH_DISCONNECT_MARKER maker; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v54; // [rsp+48h] [rbp-E0h]
  GfxManager *v55; // [rsp+50h] [rbp-D8h]
  char name[144]; // [rsp+60h] [rbp-C8h] BYREF

  v54 = -2i64;
  if ( this->m_SceneState >= 2 )
  {
    myNo = g_NetworkManager.gamedata.myNo;
    v2 = g_NetworkManager.gamedata.myNo;
    PlayerID = (int)NetManager::GetPlayerID(&g_NetworkManager, g_NetworkManager.gamedata.myNo);
    PlayerIndex = NetManager::GetPlayerIndex(v4, myNo);
    v6 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
    v7 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v6 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v7 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v8);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        v7 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      }
    }
    v9 = PlayerID;
    v10 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[PlayerID][0];
    if ( v7 > *v6 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v7 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v11);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        v7 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      }
    }
    v12 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColor[v9][0];
    if ( GameDataInfo::IsSameColorSelected(
           &`GameDataInfo::getInstance'::`2'::instance,
           `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[v9][0],
           v12,
           `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[v9][0]) )
    {
      v12 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterColorRand[v9][0];
    }
    if ( v7 > *v6 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v13);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    v14 = `GameDataInfo::getInstance'::`2'::instance.m_CharacterCostume[v9][0];
    if ( PlayerIndex >= 0 )
    {
      if ( v10 == CHARACTER_NO_NONE )
      {
        m_MyBustupCharacterNo = GameDataInfo::getInstance()->m_MyBustupCharacterNo;
        if ( m_MyBustupCharacterNo != CHARACTER_NO_NONE )
        {
          v26 = v12 - 1;
          if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY || !(_BYTE)PlayerIndex )
          {
            v33 = (unsigned __int8)myNo;
            v34 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[v33] + 2) ^ (*((_DWORD *)&g_NetworkManager.gamedata.player_data[v33]
                                                                                  + 2) ^ (unsigned __int8)m_MyBustupCharacterNo) & 0x3F;
            v35 = ((unsigned __int16)v34 ^ (v26 << 6)) & 0x1C0 ^ v34;
            *((_DWORD *)&g_NetworkManager.gamedata.player_data[v33] + 2) = (((unsigned __int16)v35 ^ (unsigned __int16)((unsigned __int8)v14 << 9)) & 0x600 ^ v35) & 0xFFFFDFFF;
            g_NetworkManager.gamedata.userInfo.m_Character[0].m_CharacterId = (unsigned __int8)m_MyBustupCharacterNo;
            g_NetworkManager.gamedata.userInfo.m_Character[0].m_ColorId = v26;
            g_NetworkManager.gamedata.userInfo.m_Character[0].m_CostumeId = v14;
            g_NetworkManager.gamedata.userInfo.m_CharacterFix[0] = 0;
          }
          else if ( (unsigned __int8)PlayerIndex == 1 )
          {
            v30 = (unsigned __int8)myNo;
            v31 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[v30] + 2) ^ (*((_DWORD *)&g_NetworkManager.gamedata.player_data[v30]
                                                                                  + 2) ^ ((unsigned __int8)m_MyBustupCharacterNo << 14)) & 0xFC000;
            v32 = (v31 ^ (v26 << 20)) & 0x700000 ^ v31;
            *((_DWORD *)&g_NetworkManager.gamedata.player_data[v30] + 2) = ((v32 ^ ((unsigned __int8)v14 << 23)) & 0x1800000 ^ v32) & 0xF7FFFFFF;
            g_NetworkManager.gamedata.userInfo.m_Character[1].m_CharacterId = (unsigned __int8)m_MyBustupCharacterNo;
            g_NetworkManager.gamedata.userInfo.m_Character[1].m_ColorId = v26;
            g_NetworkManager.gamedata.userInfo.m_Character[1].m_CostumeId = v14;
            g_NetworkManager.gamedata.userInfo.m_CharacterFix[1] = 0;
          }
          else if ( (unsigned __int8)PlayerIndex == 2 )
          {
            v27 = (unsigned __int8)myNo;
            v28 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[v27] + 3) ^ (*((_DWORD *)&g_NetworkManager.gamedata.player_data[v27]
                                                                                  + 3) ^ (unsigned __int8)m_MyBustupCharacterNo) & 0x3F;
            v29 = ((unsigned __int16)v28 ^ (v26 << 6)) & 0x1C0 ^ v28;
            *((_DWORD *)&g_NetworkManager.gamedata.player_data[v27] + 3) = (((unsigned __int16)v29 ^ (unsigned __int16)((unsigned __int8)v14 << 9)) & 0x600 ^ v29) & 0xFFFFDFFF;
            g_NetworkManager.gamedata.userInfo.m_Character[2].m_CharacterId = (unsigned __int8)m_MyBustupCharacterNo;
            g_NetworkManager.gamedata.userInfo.m_Character[2].m_ColorId = v26;
            g_NetworkManager.gamedata.userInfo.m_Character[2].m_CostumeId = v14;
            g_NetworkManager.gamedata.userInfo.m_CharacterFix[2] = 0;
          }
        }
      }
      else
      {
        v15 = v12 - 1;
        if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY || !(_BYTE)PlayerIndex )
        {
          v22 = (char *)&g_NetworkManager + 118 * (unsigned __int8)myNo;
          v23 = *(_DWORD *)(v22 + 1465) ^ ((unsigned __int8)v10 ^ (unsigned __int8)*(_DWORD *)(v22 + 1465)) & 0x3F;
          v24 = ((unsigned __int16)v23 ^ (v15 << 6)) & 0x1C0 ^ v23;
          *(_DWORD *)(v22 + 1465) = ((unsigned __int16)v24 ^ (unsigned __int16)((unsigned __int8)v14 << 9)) & 0x600 ^ v24 | 0x2000;
          g_NetworkManager.gamedata.userInfo.m_Character[0].m_CharacterId = (unsigned __int8)v10;
          g_NetworkManager.gamedata.userInfo.m_Character[0].m_ColorId = v15;
          g_NetworkManager.gamedata.userInfo.m_Character[0].m_CostumeId = v14;
          g_NetworkManager.gamedata.userInfo.m_CharacterFix[0] = 1;
        }
        else if ( (unsigned __int8)PlayerIndex == 1 )
        {
          v19 = (char *)&g_NetworkManager + 118 * (unsigned __int8)myNo;
          v20 = *(_DWORD *)(v19 + 1465) ^ (*(_DWORD *)(v19 + 1465) ^ ((unsigned __int8)v10 << 14)) & 0xFC000;
          v21 = (v20 ^ (v15 << 20)) & 0x700000 ^ v20;
          *(_DWORD *)(v19 + 1465) = (v21 ^ ((unsigned __int8)v14 << 23)) & 0x1800000 ^ v21 | 0x8000000;
          g_NetworkManager.gamedata.userInfo.m_Character[1].m_CharacterId = (unsigned __int8)v10;
          g_NetworkManager.gamedata.userInfo.m_Character[1].m_ColorId = v15;
          g_NetworkManager.gamedata.userInfo.m_Character[1].m_CostumeId = v14;
          g_NetworkManager.gamedata.userInfo.m_CharacterFix[1] = 1;
        }
        else if ( (unsigned __int8)PlayerIndex == 2 )
        {
          v16 = (char *)&g_NetworkManager + 118 * (unsigned __int8)myNo;
          v17 = *(_DWORD *)(v16 + 1469) ^ ((unsigned __int8)v10 ^ (unsigned __int8)*(_DWORD *)(v16 + 1469)) & 0x3F;
          v18 = ((unsigned __int16)v17 ^ (v15 << 6)) & 0x1C0 ^ v17;
          *(_DWORD *)(v16 + 1469) = ((unsigned __int16)v18 ^ (unsigned __int16)((unsigned __int8)v14 << 9)) & 0x600 ^ v18 | 0x2000;
          g_NetworkManager.gamedata.userInfo.m_Character[2].m_CharacterId = (unsigned __int8)v10;
          g_NetworkManager.gamedata.userInfo.m_Character[2].m_ColorId = v15;
          g_NetworkManager.gamedata.userInfo.m_Character[2].m_CostumeId = v14;
          g_NetworkManager.gamedata.userInfo.m_CharacterFix[2] = 1;
        }
      }
    }
    for ( i = 0; i < 2; ++i )
    {
      for ( index = 0; index < 3; ++index )
      {
        PNo = NetManager::GetPNo(&g_NetworkManager, (PLAYER_ID)i, index);
        if ( PNo == v2 )
          continue;
        m_CharacterId = -1;
        if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY )
        {
          if ( PNo == -1 )
          {
            m_CharacterId_low = LOBYTE(g_NetworkManager.gamedata.userInfo.m_Character[0].m_CharacterId);
LABEL_55:
            v42 = g_NetworkManager.gamedata.userInfo.m_CharacterFix[0];
            goto LABEL_59;
          }
LABEL_44:
          LOBYTE(v40) = *((_BYTE *)&g_NetworkManager.gamedata.player_data[PNo] + 8);
LABEL_45:
          m_CharacterId = v40 & 0x3F;
          goto LABEL_46;
        }
        if ( PNo != -1 )
        {
          switch ( index )
          {
            case 0:
              goto LABEL_44;
            case 1:
              v40 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[PNo] + 2) >> 14;
              break;
            case 2:
              LOBYTE(v40) = *((_BYTE *)&g_NetworkManager.gamedata.player_data[PNo] + 12);
              break;
            default:
              goto LABEL_46;
          }
          goto LABEL_45;
        }
        if ( (unsigned int)index <= 2 )
          m_CharacterId = g_NetworkManager.gamedata.userInfo.m_Character[index].m_CharacterId;
LABEL_46:
        m_CharacterId_low = m_CharacterId;
        if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY )
        {
          if ( PNo == -1 )
            goto LABEL_55;
LABEL_56:
          v43 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[PNo] + 2);
LABEL_57:
          v44 = v43 >> 13;
          goto LABEL_58;
        }
        if ( PNo == -1 )
        {
          v42 = g_NetworkManager.gamedata.userInfo.m_CharacterFix[(unsigned __int8)index];
          goto LABEL_59;
        }
        v42 = 0;
        if ( !(_BYTE)index )
          goto LABEL_56;
        if ( (unsigned __int8)index != 1 )
        {
          if ( (unsigned __int8)index != 2 )
            goto LABEL_59;
          v43 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[PNo] + 3);
          goto LABEL_57;
        }
        v44 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[PNo] + 2) >> 27;
LABEL_58:
        v42 = v44 & 1;
LABEL_59:
        fix = v42 != 0;
        m_ColorId = 0;
        if ( PNo == -1 )
        {
          if ( (unsigned int)index <= 2 )
            m_ColorId = g_NetworkManager.gamedata.userInfo.m_Character[index].m_ColorId;
          goto LABEL_70;
        }
        switch ( index )
        {
          case 0:
            v47 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[PNo] + 2);
LABEL_68:
            v48 = v47 >> 6;
LABEL_69:
            m_ColorId = v48 & 7;
            break;
          case 1:
            v48 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[PNo] + 2) >> 20;
            goto LABEL_69;
          case 2:
            v47 = *((_DWORD *)&g_NetworkManager.gamedata.player_data[PNo] + 3);
            goto LABEL_68;
        }
LABEL_70:
        v49 = m_ColorId;
        strcpy(name, "name");
        memset(&name[5], 0, 0x7Cui64);
        maker = RANKMATCH_DISCONNECT_MARKER_NON;
        NetManager::GetPlayerName(v50, (PLAYER_ID)i, name, &maker, index);
        v51 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v55 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v55);
          v51 = v52;
          GfxManager::instance = v52;
        }
        GfxManager::GFv_OnlineUserDecide(v51, (PLAYER_ID)i, index, m_CharacterId_low, v49, fix, name, maker);
      }
    }
  }
}

void __fastcall AppMain::ST_OnlineMenuDraw(AppMain *this)
{
  Graphics *v2; // rcx
  int v3; // er8
  int v4; // er9
  Graphics *g; // rdx
  GfxManager *v6; // rax
  extension::GFXIMovieStack *v7; // rax
  GfxManager *v8; // [rsp+50h] [rbp+8h]

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
  SyncMenuImage::Draw(&this->m_SyncMenuBG, this->g, v3, v4, 1.0);
  Graphics::drawStack(this->g->g);
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  v7 = extension::GFXIMovieStack::Instance();
  extension::GFXIMovieStack::render(v7);
  Graphics::drawStack(this->g->g);
}

void __fastcall AppMain::ST_MemberSelectInit(AppMain *this)
{
  Fw::ContentCommon *Instance; // rax
  __int64 v3; // rdx
  int v4; // er9
  GfxManager *v5; // rax
  GfxManager *v6; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  extension::gfxi_detail::MovieProxy *v8; // rcx
  UserGameOperation *v9; // rax
  GfxManager *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rbx
  int v13; // ecx
  GameDataInfo *v14; // rcx
  BattleSystem::BattleController *v15; // rax
  GameDataInfo *v16; // rcx
  GameDataInfo *v17; // rcx
  int v18; // er10
  GameDataInfo *v19; // rcx
  GameDataInfo *v20; // rcx
  int v21; // er10
  __int64 v22; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v23; // rcx
  __int64 v24; // r8
  char *m_str; // rax
  unsigned __int64 v26; // r8
  int v27; // ecx
  int v28; // edx
  volatile signed __int64 *v29; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v30; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v31; // r8
  char *v32; // r9
  char *v33; // rax
  signed __int64 v34; // r9
  int v35; // ecx
  int v36; // edx
  GameDataInfo *v37; // rax
  GAME_MODE v38; // edx
  unsigned __int8 myNo; // bl
  NetManager *v40; // rcx
  extension::SoundHashKey soundName; // [rsp+90h] [rbp+40h] BYREF
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v42; // [rsp+98h] [rbp+48h]
  extension::SoundHashKey result; // [rsp+A0h] [rbp+50h] BYREF
  extension::SoundHashKey v44; // [rsp+A8h] [rbp+58h] BYREF

  Instance = Fw::ContentCommon::GetInstance();
  Fw::ContentCommon::CheckAddContent(Instance, v3);
  *(_QWORD *)this->SaveDataMain.PlayerData.m_AchivementCount_TMP = 0i64;
  *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[2] = 0i64;
  *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[4] = 0i64;
  *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[6] = 0i64;
  *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[8] = 0i64;
  *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[10] = 0i64;
  *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[12] = 0i64;
  *(_QWORD *)&this->SaveDataMain.PlayerData.m_AchivementCount_TMP[14] = 0i64;
  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v5;
  }
  GfxManager::LoadRequest(v5, FILE_03_MEMBERSELECT, LoadCompleteEventMemberSelect, v4);
  this->m_SceneState = 0;
  v6 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v6;
  }
  if ( v6->m_GFXMovie.m_movieProxy.m_ptr )
  {
    v6->m_GFXMovie.m_movieProxy.m_ptr->m_bAdvance = 1;
    if ( v6->m_GFXMovie.m_movieProxy.m_ptr )
      v6->m_GFXMovie.m_movieProxy.m_ptr->m_bRender = 1;
  }
  if ( !v6 )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v6;
  }
  if ( v6->m_GFXMovieBG.m_movieProxy.m_ptr )
  {
    m_ptr = v6->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( m_ptr )
      m_ptr->m_bAdvance = 1;
    v8 = v6->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( v8 )
      v8->m_bRender = 1;
  }
  else
  {
    GfxManager::LoadRequestBG(v6);
  }
  v9 = UserGameOperation::Instance();
  UserGameOperation::clear(v9);
  v10 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v10;
  }
  *(_DWORD *)v10->m_ControlerLive = 0;
  v10->m_ControlerLive[4] = 0;
  if ( !v10 )
  {
    soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)soundName.m_sharedBuffer.m_ptr);
    GfxManager::instance = v10;
  }
  v10->m_ControllerSelect = 0;
  v11 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v12 = *v11;
  v13 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*v11 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v13 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v13 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_MISSION_SURVIVAL )
    goto LABEL_104;
  if ( v13 > *(_DWORD *)(v12 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v13 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v13 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_MISSION_TIMEATTACK )
  {
LABEL_104:
    if ( v13 > *(_DWORD *)(v12 + 40) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v14);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    `GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount = -2068357983;
    v15 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController((BattleSystem::BattleController *)soundName.m_sharedBuffer.m_ptr);
      BattleSystem::BattleController::instance = v15;
    }
    BattleSystem::BattleController::BattleResultInit(v15);
    v13 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  }
  if ( v13 > *(_DWORD *)(v12 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v13 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v13 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_TRAINING )
  {
    if ( v13 > *(_DWORD *)(v12 + 40) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v13 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        v13 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      }
    }
    `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0] = USER_ID_1P;
    if ( v13 > *(_DWORD *)(v12 + 40) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v13 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo((GameDataInfo *)(unsigned int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        v13 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
      }
    }
    `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1] = USER_ID_CPU;
    if ( v13 > *(_DWORD *)(v12 + 40) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v16);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting = this->SaveDataMain.GameData.m_TrainingSetting;
    `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAction = STAND;
  }
  SyncMenuImage::Load(
    &this->m_SyncMenuBG,
    (const ImageDataInfo *)MenuImageDataTbl[*(int *)(*(_QWORD *)&AppMain::pApp + 2197384i64)] + 26,
    FADE_IN);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(v12 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v17);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  GameDataInfo::InitCharacter(&`GameDataInfo::getInstance'::`2'::instance, PLAYER_ID_1P);
  if ( v18 > *(_DWORD *)(v12 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v19);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  GameDataInfo::InitCharacter(&`GameDataInfo::getInstance'::`2'::instance, PLAYER_ID_2P);
  if ( v21 > *(_DWORD *)(v12 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v21 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v20);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v21 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_MyBustupCharacterNo = CHARACTER_NO_NONE;
  if ( v21 > *(_DWORD *)(v12 + 40) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v20);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex] == GAME_MODE_VERSUS
    && `GameDataInfo::getInstance'::`2'::instance.m_ControllerSelect )
  {
    AppMain::Sound_BGMPlay_GetSoundHashKey((AppMain *)v20, &result);
    v22 = 113i64;
    if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x800000) == 0 )
      v22 = 102i64;
    v23 = s_soundIndex.m_keys[v22].m_sharedBuffer.m_ptr;
    v42 = v23;
    if ( v23 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v23->m_refCount.m_ptr->m_sharedCount, 1ui64);
    if ( !result.m_sharedBuffer.m_ptr )
      goto LABEL_74;
    v24 = v42 ? (__int64)v42->m_str : 0i64;
    m_str = result.m_sharedBuffer.m_ptr->m_str;
    v26 = v24 - (unsigned __int64)result.m_sharedBuffer.m_ptr->m_str;
    do
    {
      v27 = (unsigned __int8)m_str[v26];
      v28 = (unsigned __int8)*m_str - v27;
      if ( v28 )
        break;
      ++m_str;
    }
    while ( v27 );
    if ( v28 )
    {
LABEL_74:
      v29 = (volatile signed __int64 *)s_soundIndex.m_keys[67].m_sharedBuffer.m_ptr;
      soundName.m_sharedBuffer.m_ptr = s_soundIndex.m_keys[67].m_sharedBuffer.m_ptr;
      if ( s_soundIndex.m_keys[67].m_sharedBuffer.m_ptr )
      {
        v29 = (volatile signed __int64 *)s_soundIndex.m_keys[67].m_sharedBuffer.m_ptr->m_refCount.m_ptr;
        _InterlockedExchangeAdd64(v29 + 2, 1ui64);
      }
      AppMain::Sound_BGMPlay_GetSoundHashKey((AppMain *)v29, &v44);
      v30 = v44.m_sharedBuffer.m_ptr;
      if ( !v44.m_sharedBuffer.m_ptr )
        goto LABEL_83;
      v31 = soundName.m_sharedBuffer.m_ptr;
      v32 = 0i64;
      if ( soundName.m_sharedBuffer.m_ptr )
        v32 = soundName.m_sharedBuffer.m_ptr->m_str;
      v33 = v44.m_sharedBuffer.m_ptr->m_str;
      v34 = v32 - v44.m_sharedBuffer.m_ptr->m_str;
      do
      {
        v35 = (unsigned __int8)v33[v34];
        v36 = (unsigned __int8)*v33 - v35;
        if ( v36 )
          break;
        ++v33;
      }
      while ( v35 );
      if ( v36 )
      {
LABEL_83:
        AppMain::Sound_PlayBGMByName(this, &soundName, 0.0, 0.0, 0);
        extension::SoundHashKey::operator=(&this->m_nowPlayBGM, &soundName);
        v31 = soundName.m_sharedBuffer.m_ptr;
      }
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&v30->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
          ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v44.m_sharedBuffer.m_ptr->~RefCountableWeakSupportBase)(
            v44.m_sharedBuffer.m_ptr,
            1i64);
        v31 = soundName.m_sharedBuffer.m_ptr;
      }
      if ( v31
        && _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&v31->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v31->~RefCountableWeakSupportBase)(
          v31,
          1i64);
      }
    }
    if ( v42
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v42->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v42->~RefCountableWeakSupportBase)(
        v42,
        1i64);
    }
    if ( result.m_sharedBuffer.m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&result.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))result.m_sharedBuffer.m_ptr->~RefCountableWeakSupportBase)(
        result.m_sharedBuffer.m_ptr,
        1i64);
    }
  }
  v37 = GameDataInfo::getInstance();
  v38 = v37->m_GameMode[v37->m_GameModeIndex];
  if ( (unsigned int)(v38 - 4) <= 2 || v38 == GAME_MODE_ONLINETRAINING )
  {
    myNo = g_NetworkManager.gamedata.myNo;
    if ( (unsigned int)NetManager::GetPlayerID(&g_NetworkManager, g_NetworkManager.gamedata.myNo) == 1 )
      NetManager::RequestChangeCharacter(v40, myNo, 0, 0xCu, 1u, 0, 0);
  }
  this->m_SceneTime = 0;
  this->iReserveScene = -1;
  this->m_FuncST = 26;
  this->m_FuncBT = 27;
  AppMain::SceneFunc(this, 26);
  this->m_FuncExit = 25;
}

void __fastcall AppMain::ST_MemberSelectLoop(AppMain *this)
{
  GfxManager *v2; // rbx
  GfxManager *v3; // rax
  GfxManager *v4; // rax
  extension::GFXIMovieStack *v5; // rax
  GfxManager *v6; // rax
  __int64 v7; // rax
  GameDataInfo *Instance; // rax
  GameDataInfo *v9; // rax
  GameDataInfo *v10; // rax
  GAME_MODE v11; // edx
  char *m_str; // r15
  __int64 v13; // rax
  GameDataInfo *v14; // rax
  __int64 v15; // rax
  extension::GFXIMovieStack *v16; // rax
  __int64 v17; // rax
  int v18; // edi
  GameDataInfo *v19; // rax
  GAME_MODE v20; // esi
  AppMain *v21; // rcx
  __int64 v22; // rdx
  int v23; // er8
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rbx
  __int64 v25; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v26; // rdx
  char *v27; // rax
  signed __int64 v28; // r15
  AppMain *v29; // rcx
  int v30; // edx
  int v31; // edx
  __int64 v32; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v33; // rdx
  char *v34; // rax
  signed __int64 v35; // r15
  AppMain *v36; // rcx
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v40; // r8
  char *v41; // r8
  char *v42; // rax
  signed __int64 v43; // r8
  AppMain *v44; // rcx
  int v45; // edx
  GameDataInfo *v46; // rax
  __int64 v47; // rax
  __int64 v48; // r14
  bool v49; // si
  int v50; // ebp
  CHARACTER_COLOR v51; // edi
  CHARACTER_NO v52; // ecx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r12
  __int64 v56; // rbx
  bool v57; // bp
  bool v58; // di
  unsigned int v59; // er14
  unsigned int v60; // esi
  unsigned int v61; // ecx
  __int64 v62; // rdx
  GameDataInfo *v63; // rax
  int v64; // ecx
  GameDataInfo *v65; // rax
  int v66; // ecx
  __int64 v67; // rax
  int v68; // ecx
  __int64 v69; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v70; // rdx
  char *v71; // rdx
  signed __int64 v72; // rdx
  int v73; // eax
  AppMain *v74; // rcx
  __int64 v75; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v76; // rdx
  char *v77; // rax
  signed __int64 v78; // r15
  AppMain *v79; // rcx
  int v80; // edx
  AppMain *v81; // rcx
  signed __int64 v82; // r12
  GameDataInfo *v83; // rax
  PLAYER_ID v84; // edx
  GameDataInfo *v85; // rax
  __int64 v86; // rax
  GameDataInfo *v87; // rax
  __int64 v88; // rax
  GameDataInfo *v89; // rax
  int v90; // edx
  GameDataInfo *v91; // rax
  unsigned __int64 v92; // rbx
  CHARACTER_NO v93; // edx
  int v94; // edx
  GameDataInfo *v95; // rdi
  CHARACTER_COLOR v96; // esi
  unsigned int v97; // ecx
  int v98; // eax
  unsigned int v99; // edx
  GameDataInfo *v100; // rax
  GameDataInfo *v101; // rax
  RandomMT *v102; // rax
  __int64 v103; // rcx
  CHARACTER_NO v104; // ebx
  AppMain *v105; // rcx
  GameDataInfo *v106; // rax
  __int64 v107; // rax
  bool v108; // dl
  int v109; // edx
  GameDataInfo *v110; // rax
  int v111; // er8
  AppMain *v112; // rcx
  __int64 v113; // rax
  int v114; // edx
  __int64 v115; // rax
  GameDataInfo *v116; // rax
  extension::SoundHashKey result; // [rsp+70h] [rbp+8h] BYREF
  __int64 v118; // [rsp+78h] [rbp+10h]
  __int64 v119; // [rsp+80h] [rbp+18h]

  v2 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    result.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)result.m_sharedBuffer.m_ptr);
    v2 = v3;
    GfxManager::instance = v3;
  }
  SyncMenuImage::Update(&this->m_SyncMenuBG);
  v4 = GfxManager::instance;
  if ( !this->m_SceneState )
  {
    if ( !GfxManager::instance )
    {
      result.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
      GfxManager::GfxManager((GfxManager *)result.m_sharedBuffer.m_ptr);
      GfxManager::instance = v4;
    }
    if ( v4->m_SystemMessageState != SYSTEM_MESSAGE_OPEN || !v4->m_SystemMessageLock )
    {
      v5 = extension::GFXIMovieStack::Instance();
      extension::GFXIMovieStack::advance(v5, 0.016666668);
    }
    return;
  }
  if ( !GfxManager::instance )
  {
    result.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)result.m_sharedBuffer.m_ptr);
    GfxManager::instance = v4;
  }
  if ( AppMain::InputCheckNewChallenger(this, v4->m_ControllerSelect) )
  {
    v6 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      result.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(0x108ui64);
      GfxManager::GfxManager((GfxManager *)result.m_sharedBuffer.m_ptr);
      GfxManager::instance = v6;
    }
    v6->m_ReleaseFlag = 1;
    GameDataInfo::getInstance()->m_ControllerSelect = 1;
    goto LABEL_15;
  }
  if ( AppMain::InputCheckNewChallengerTraining(this) )
  {
    GfxManager::getInstance();
    *(_BYTE *)(v7 + 172) = 1;
    Instance = GameDataInfo::getInstance();
    Instance->m_GameMode[Instance->m_GameModeIndex] = GAME_MODE_RANKMATCH;
    v9 = GameDataInfo::getInstance();
    v9->m_GameRule[v9->m_GameRuleIndex] = GAME_RULE_TEAM;
LABEL_15:
    this->iReserveScene = -1;
    this->m_FadeST = 124;
    this->m_FuncST = 0;
    this->m_FadeExitFunc = 25;
    this->m_bExitFuncWaitFrame = 0;
    if ( this->m_FuncFT != 170 )
      this->m_FuncFT = 172;
    return;
  }
  v10 = GameDataInfo::getInstance();
  v11 = v10->m_GameMode[v10->m_GameModeIndex];
  m_str = 0i64;
  if ( (unsigned int)(v11 - 4) <= 2 || v11 == GAME_MODE_ONLINETRAINING )
  {
    if ( (g_NetworkManager.gamedata.onlineState == NET_STATE_ORDERSELECT
       || g_NetworkManager.gamedata.onlineState == NET_STATE_BATTLELOADING)
      && ++this->m_SceneTime > 600 )
    {
      GfxManager::getInstance();
      *(_DWORD *)(v13 + 168) = 0;
      *(_WORD *)(v13 + 166) = 256;
      *(_BYTE *)(v13 + 165) = 0;
    }
    v14 = GameDataInfo::getInstance();
    if ( v14->m_GameRule[v14->m_GameRuleIndex] == GAME_RULE_PARTY )
      AppMain::MembserSelectPartyConnection(this);
    else
      AppMain::MembserSelectNormalConnection(this);
  }
  GfxManager::getInstance();
  if ( *(_DWORD *)(v15 + 240) != 1 || !*(_BYTE *)(v15 + 256) )
  {
    v16 = extension::GFXIMovieStack::Instance();
    extension::GFXIMovieStack::advance(v16, 0.016666668);
  }
  if ( v2->m_bQuitGFXMovie )
  {
    GfxManager::getInstance();
    v18 = *(_DWORD *)(v17 + 168);
    v19 = GameDataInfo::getInstance();
    v20 = v19->m_GameMode[v19->m_GameModeIndex];
    GameDataInfo::getInstance()->m_ControllerSelect = 0;
    AppMain::Sound_BGMPlay_GetSoundHashKey(v21, &result);
    m_ptr = result.m_sharedBuffer.m_ptr;
    if ( v18 == 1 )
    {
      if ( result.m_sharedBuffer.m_ptr )
      {
        v25 = 113i64;
        if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x800000) == 0 )
          v25 = 102i64;
        v26 = s_soundIndex.m_keys[v25].m_sharedBuffer.m_ptr;
        if ( v26 )
          m_str = v26->m_str;
        v27 = result.m_sharedBuffer.m_ptr->m_str;
        v28 = m_str - result.m_sharedBuffer.m_ptr->m_str;
        do
        {
          v29 = (AppMain *)(unsigned __int8)v27[v28];
          v30 = (unsigned __int8)*v27 - (_DWORD)v29;
          if ( v30 )
            break;
          ++v27;
        }
        while ( (_DWORD)v29 );
        if ( v30 )
          AppMain::StopBGMUtil(v29, 1.0);
      }
      v31 = 16;
      goto LABEL_118;
    }
    if ( v18 == 23 )
    {
      NetManager::RequestLeaveRoom(&g_NetworkManager, v22, v23);
      if ( m_ptr )
      {
        v32 = 113i64;
        if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x800000) == 0 )
          v32 = 102i64;
        v33 = s_soundIndex.m_keys[v32].m_sharedBuffer.m_ptr;
        if ( v33 )
          m_str = v33->m_str;
        v34 = m_ptr->m_str;
        v35 = m_str - m_ptr->m_str;
        do
        {
          v36 = (AppMain *)(unsigned __int8)v34[v35];
          v37 = (unsigned __int8)*v34 - (_DWORD)v36;
          if ( v37 )
            break;
          ++v34;
        }
        while ( (_DWORD)v36 );
        if ( v37 )
          AppMain::StopBGMUtil(v36, 1.0);
      }
      v31 = 100;
      goto LABEL_118;
    }
    GfxManager::getInstance();
    if ( v18 == 9 )
    {
      *(_BYTE *)(v38 + 172) = 1;
      if ( m_ptr )
      {
        v39 = 113i64;
        if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x800000) == 0 )
          v39 = 102i64;
        v40 = s_soundIndex.m_keys[v39].m_sharedBuffer.m_ptr;
        if ( v40 )
          v41 = v40->m_str;
        else
          v41 = 0i64;
        v42 = m_ptr->m_str;
        v43 = v41 - m_ptr->m_str;
        do
        {
          v44 = (AppMain *)(unsigned __int8)v42[v43];
          v45 = (unsigned __int8)*v42 - (_DWORD)v44;
          if ( v45 )
            break;
          ++v42;
        }
        while ( (_DWORD)v44 );
        if ( v45 )
          AppMain::StopBGMUtil(v44, 1.0);
      }
      AppMain::SendRoomBack(this, 0);
      this->iReserveScene = -1;
      this->m_FadeST = 148;
      this->m_FuncST = 0;
      this->m_FadeExitFunc = 25;
      *(_WORD *)&this->m_bFadeEnd = 0;
      this->m_iFadeFrame = 20;
      this->m_iFadeColor.rgba = -1;
      this->m_iFadeRate = 12750;
      this->m_iFadeAlpha = 0;
      this->m_bFadeLock = 0;
      this->m_FuncFT = 170;
      goto LABEL_120;
    }
    if ( *(_BYTE *)(v38 + 257) )
    {
      if ( v18 != -1 )
      {
        v46 = GameDataInfo::getInstance();
        if ( v46->m_GameRule[v46->m_GameRuleIndex] )
        {
          GfxManager::getInstance();
          v54 = *(int *)(v53 + 216);
          v55 = 0i64;
          v56 = 659i64;
          v118 = 3 * v54;
          v119 = 3 * (v54 + 880);
          do
          {
            v57 = GameDataInfo::getInstance()->m_TeamRandom[0];
            v58 = GameDataInfo::getInstance()->m_EditRandom[0][v55];
            v59 = GameDataInfo::getInstance()->randMT.mt[v56 + 31];
            v60 = GameDataInfo::getInstance()->randMT.mt[v56];
            v61 = GameDataInfo::getInstance()->randMT.mt[v56 - 8];
            if ( v58 )
              v61 = 63;
            if ( v57 )
              v61 = 62;
            v62 = v118;
            this->SaveDataMain.ButtonConfData.buttonConfig[4].keyboardMap.m_mapping[v118 + 243 + v56] = v61;
            this->SaveDataMain.ButtonConfData.buttonConfig[4].keyboardMap.m_mapping[v62 + 252 + v56] = v60;
            *((_BYTE *)&this->SaveDataMain.PlayerData.m_Version + v119 + v55++) = v59;
            ++v56;
          }
          while ( v56 < 662 );
          m_ptr = result.m_sharedBuffer.m_ptr;
          m_str = 0i64;
        }
        else
        {
          GfxManager::getInstance();
          v48 = *(int *)(v47 + 220);
          v49 = GameDataInfo::getInstance()->m_EditRandom[0][0];
          v50 = GameDataInfo::getInstance()->m_CharacterCostume[0][0];
          v51 = GameDataInfo::getInstance()->m_CharacterColor[0][0];
          v52 = GameDataInfo::getInstance()->m_CharacterNo[0][0];
          this->SaveDataMain.PlayerData.m_MyFavoriteSingleRandom = v52;
          this->SaveDataMain.PlayerData.m_MyFavoriteSingleColorRandom = v51;
          if ( v49 )
            v52 = CHARACTER_NO_E_R;
          this->SaveDataMain.PlayerData.m_MyFavoriteSingle[v48] = v52;
          this->SaveDataMain.PlayerData.m_MyFavoriteSingleColor[v48] = v51;
          this->SaveDataMain.PlayerData.m_MyFavoriteSingleCostume[v48] = v50;
        }
      }
      v63 = GameDataInfo::getInstance();
      v64 = v63->m_GameModeIndex - 1;
      if ( v64 <= 0 )
        v64 = 0;
      v63->m_GameModeIndex = v64;
      v65 = GameDataInfo::getInstance();
      v66 = v65->m_GameRuleIndex - 1;
      if ( v66 <= 0 )
        v66 = 0;
      v65->m_GameRuleIndex = v66;
      GfxManager::getInstance();
      *(_BYTE *)(v67 + 257) = 0;
      v68 = this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0];
      if ( v68 >= 0 || (v68 & 0x180000) == 1572864 )
      {
        v69 = 113i64;
        if ( (v68 & 0x800000) == 0 )
          v69 = 102i64;
        v70 = s_soundIndex.m_keys[v69].m_sharedBuffer.m_ptr;
        if ( v70 )
          v71 = v70->m_str;
        else
          v71 = 0i64;
        if ( m_ptr )
          m_str = m_ptr->m_str;
        v72 = v71 - m_str;
        do
        {
          v73 = (unsigned __int8)m_str[v72];
          v74 = (AppMain *)((unsigned int)(unsigned __int8)*m_str - v73);
          if ( (_DWORD)v74 )
            break;
          ++m_str;
        }
        while ( v73 );
        if ( (_DWORD)v74 )
          AppMain::StopBGMUtil(v74, 1.0);
        AppMain::StopBGMUtil(v74, 1.0);
        v31 = 80;
      }
      else
      {
        v31 = 100;
      }
      goto LABEL_118;
    }
    if ( v18 == -1 )
    {
      if ( m_ptr )
      {
        v75 = 113i64;
        if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x800000) == 0 )
          v75 = 102i64;
        v76 = s_soundIndex.m_keys[v75].m_sharedBuffer.m_ptr;
        if ( v76 )
          m_str = v76->m_str;
        v77 = m_ptr->m_str;
        v78 = m_str - m_ptr->m_str;
        do
        {
          v79 = (AppMain *)(unsigned __int8)v77[v78];
          v80 = (unsigned __int8)*v77 - (_DWORD)v79;
          if ( v80 )
            break;
          ++v77;
        }
        while ( (_DWORD)v79 );
        if ( v80 )
          AppMain::StopBGMUtil(v79, 1.0);
      }
      if ( v20 != GAME_MODE_VERSUS )
      {
        v81 = this;
        if ( (unsigned int)(v20 - 7) > 2 )
          v31 = 16;
        else
          v31 = 52;
        goto LABEL_119;
      }
      v31 = 20;
LABEL_118:
      v81 = this;
LABEL_119:
      AppMain::setNonFadeSTExit(v81, v31, 25);
LABEL_120:
      if ( !m_ptr )
        return;
      v82 = _InterlockedExchangeAdd64(
              (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
              0xFFFFFFFFFFFFFFFFui64);
      goto LABEL_169;
    }
    switch ( v20 )
    {
      case GAME_MODE_STORY:
        v83 = GameDataInfo::getInstance();
        GameDataInfo::MakeStoryEnemyTable(v83, v84);
        if ( GameDataInfo::getInstance()->m_StoryWinCount == -1 )
        {
          GameDataInfo::getInstance()->m_StoryWinCount = 0;
          v85 = GameDataInfo::getInstance();
          GameDataInfo::CreateStageID_Special(v85);
          this->iReserveScene = -1;
          this->m_FadeST = 112;
          this->m_FuncST = 0;
          this->m_FadeExitFunc = 0;
          *(_WORD *)&this->m_bFadeEnd = 0;
          this->m_iFadeFrame = 20;
          *(_QWORD *)&this->m_iFadeColor.rgba = 255i64;
          this->m_iFadeRate = 50 * this->m_iFadeColor.s.a;
          this->m_bFadeLock = 0;
          this->m_FuncFT = 170;
        }
        else
        {
          GfxManager::getInstance();
          *(_BYTE *)(v86 + 257) = 0;
          AppMain::setNonFadeSTExit(this, 28, 25);
        }
        v87 = GameDataInfo::getInstance();
        GameDataInfo::CommitStoryEnemy(v87);
        break;
      case GAME_MODE_VERSUS:
      case GAME_MODE_TRAINING:
        GfxManager::getInstance();
        *(_BYTE *)(v88 + 257) = 0;
        v89 = GameDataInfo::getInstance();
        v90 = 28;
        if ( v89->m_GameRule[v89->m_GameRuleIndex] == GAME_RULE_SINGLE )
          v90 = 32;
        AppMain::setNonFadeSTExit(this, v90, 25);
        if ( g_NetworkManager.gamedata.onlinePlay )
        {
          v91 = GameDataInfo::getInstance();
          if ( v91->m_GameMode[v91->m_GameModeIndex] == GAME_MODE_TRAINING )
          {
            v92 = 690i64;
            do
            {
              v93 = GameDataInfo::getInstance()->randMT.mt[v92 - 39];
              if ( (_DWORD)m_str )
              {
                if ( (_DWORD)m_str == 1 )
                  g_NetworkManager.rank_traning_wait.chara2 = v93;
              }
              else
              {
                g_NetworkManager.rank_traning_wait.chara1 = v93;
              }
              v94 = GameDataInfo::getInstance()->randMT.mt[v92];
              if ( (_DWORD)m_str )
              {
                if ( (_DWORD)m_str == 1 )
                  g_NetworkManager.rank_traning_wait.costume2 = v94;
              }
              else
              {
                g_NetworkManager.rank_traning_wait.costume1 = v94;
              }
              v95 = GameDataInfo::getInstance();
              v96 = v95->randMT.mt[v92 - 31];
              if ( GameDataInfo::IsSameColorSelected(
                     v95,
                     (CHARACTER_NO)v95->randMT.mt[v92 - 39],
                     v96,
                     v95->randMT.mt[v92]) )
              {
                v96 = v95->randMT.mt[v92 - 12];
              }
              if ( (_DWORD)m_str )
              {
                if ( (_DWORD)m_str == 1 )
                  g_NetworkManager.rank_traning_wait.color2 = v96;
              }
              else
              {
                g_NetworkManager.rank_traning_wait.color1 = v96;
              }
              LODWORD(m_str) = (_DWORD)m_str + 1;
              v92 += 3i64;
            }
            while ( (int)m_str < 2 );
          }
        }
        break;
      case GAME_MODE_FREEMATCH:
      case GAME_MODE_RANKMATCH:
      case GAME_MODE_ONLINETRAINING:
        if ( g_NetworkManager.gamedata.onlineState == NET_STATE_BATTLELOADING
          || g_NetworkManager.gamedata.onlineState == NET_STATE_ORDERSELECT )
        {
          NetManager::keepRandomFlag(&g_NetworkManager);
          v110 = GameDataInfo::getInstance();
          if ( v110->m_GameRule[v110->m_GameRuleIndex] == GAME_RULE_SINGLE )
          {
            NetManager::ChangeState(&g_NetworkManager, NET_STATE_BATTLELOADING, v111);
            AppMain::SetBattleInfoFromRoom(v112);
            goto LABEL_156;
          }
          GfxManager::getInstance();
          *(_BYTE *)(v113 + 257) = 0;
          v114 = 28;
          goto LABEL_166;
        }
        break;
      case GAME_MODE_MISSION_TIMEATTACK:
      case GAME_MODE_MISSION_SURVIVAL:
        v97 = GameDataInfo::getInstance()->m_SurvivalWinCount ^ 0x7B48A35E;
        v98 = ((unsigned __int16)v97 ^ (unsigned __int16)(v97 >> 14)) & 0xCCCC;
        v99 = v97 ^ v98 ^ (v98 << 14);
        if ( (v99 ^ (v99 ^ (v99 >> 7)) & 0x550055 ^ (((v99 ^ (v99 >> 7)) & 0x550055) << 7)) == -1 )
        {
          GameDataInfo::getInstance()->m_SurvivalWinCount = 2068357982;
          v100 = GameDataInfo::getInstance();
          GameDataInfo::MakeSurvivalEnemyTable(v100);
        }
        v101 = GameDataInfo::getInstance();
        GameDataInfo::CommitSurvivalEnemy(v101);
        v102 = (RandomMT *)GameDataInfo::getInstance();
        v102[1].mt[0] = 20;
        if ( (RandomMT::getRand32(v102) & 2) == 0 )
          *(_DWORD *)(v103 + 2500) = 22;
        *(_BYTE *)(v103 + 2504) = 0;
        v104 = GameDataInfo::getInstance()->m_CharacterNo[0][0];
        do
        {
          if ( StageProjectData::IsHostTeamCharacter(&AppMain::s_stageProjData, (STAGE_ID)m_str, v104) )
          {
            v106 = GameDataInfo::getInstance();
            v106->m_StageID = (int)m_str;
            v106->m_StageRandom = 0;
          }
          LODWORD(m_str) = (_DWORD)m_str + 1;
        }
        while ( (int)m_str < 24 );
LABEL_156:
        AppMain::StopBGMUtil(v105, 1.0);
        GfxManager::getInstance();
        *(_BYTE *)(v107 + 172) = 1;
        AppMain::SetBattleSetting(this, v108);
        AppMain::SetBattleLoadingNonFade(this, v109, 25);
        break;
      case GAME_MODE_MISSION_TRIAL:
        GameDataInfo::getInstance()->m_MissionTrialNo = 0;
        GameDataInfo::getInstance()->m_MissionTrialNo = 0;
        this->m_iMissionLoadDataCharaID = GameDataInfo::getInstance()->m_CharacterNo[0][0];
        this->m_iLoadingNextFunc = 56;
        this->iReserveScene = -1;
        this->m_FadeST = 187;
        this->m_FuncST = 0;
        this->m_FadeExitFunc = 25;
        this->m_bExitFuncWaitFrame = 0;
        if ( this->m_FuncFT != 170 )
          this->m_FuncFT = 172;
        break;
      default:
        GfxManager::getInstance();
        *(_BYTE *)(v115 + 257) = 0;
        v116 = GameDataInfo::getInstance();
        v114 = 28;
        if ( v116->m_GameRule[v116->m_GameRuleIndex] == GAME_RULE_SINGLE )
          v114 = 32;
LABEL_166:
        AppMain::setNonFadeSTExit(this, v114, 25);
        break;
    }
    if ( result.m_sharedBuffer.m_ptr )
    {
      v82 = _InterlockedExchangeAdd64(
              (volatile signed __int64 *)&result.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
              0xFFFFFFFFFFFFFFFFui64);
LABEL_169:
      if ( v82 == 1 )
        ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))result.m_sharedBuffer.m_ptr->~RefCountableWeakSupportBase)(
          result.m_sharedBuffer.m_ptr,
          1i64);
    }
  }
}

