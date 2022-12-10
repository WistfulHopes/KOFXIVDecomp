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
#include "dev/kof/master/development/source/baseproject/jni/game/prefightfaceoff/prefightfaceoff_rendermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/prefightfaceoff/prefightfaceoff_messageinfo.h"
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
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_drawtext.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/prefightfaceoff/prefightfaceoff_ui.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofshadermanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogltexture.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageevent.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/exutil.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/auxscript.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_drawtext.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_fontman.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectmanager/effecttaskmanager.cpp"

enum PreFightFaceOff::`anonymous-namespace'::DRAW_TARGETS
{
	DRAWTARGET_NONE = 0,
	DRAWTARGET_P1 = 2,
	DRAWTARGET_P2 = 4,
	DRAWTARGET_STAGE = 8,
	DRAWTARGET_PLAYERS = 6,
	DRAWTARGET_P1_AND_STAGE = 10,
	DRAWTARGET_P2_AND_STAGE = 12,
	DRAWTARGET_ALL = 14,
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408A061E
PreFightFaceOff::RenderManager::RenderManager(); // 0x1401A2C10
PreFightFaceOff::RenderManager::~RenderManager(); // 0x1401A2D10
void PreFightFaceOff::RenderManager::release(); // 0x1401A2DB0
bool PreFightFaceOff::RenderManager::isInitialized(); // 0x1401A2FE0
void PreFightFaceOff::RenderManager::initialize(); // 0x1401A3110
void PreFightFaceOff::RenderManager::update(); // 0x1401A3640
void PreFightFaceOff::RenderManager::draw(); // 0x1401A3B50
void PreFightFaceOff::RenderManager::renderTextureByCamerView(); // 0x1401A3D30
void PreFightFaceOff::RenderManager::saveViewAndProjectionParams(); // 0x1401A3E90
void PreFightFaceOff::RenderManager::loadViewAndProjectionParams(); // 0x1401A3FA0
void PreFightFaceOff::RenderManager::setMessage(const char * pMessage1, const char * pMessage2); // 0x1401A40F0
void PreFightFaceOff::RenderManager::renderMessageIcons(); // 0x1401A44F0//decompilation failure at 1408A061E!
void __fastcall PreFightFaceOff::RenderManager::RenderManager(PreFightFaceOff::RenderManager *this)
{
  this->m_bError = 0;
  this->__vftable = (PreFightFaceOff::RenderManager_vtbl *)&PreFightFaceOff::RenderManager::`vftable';
  this->m_bInitialize = 0;
  this->m_pTextureCameraViewP1 = 0i64;
  this->m_pTextureCameraViewP2 = 0i64;
  this->m_messageInfo.pMessage1 = 0i64;
  this->m_messageInfo.pMessage2 = 0i64;
  *(_WORD *)&this->m_bMessageRefresh = 0;
  this->m_pGfxText = 0i64;
  *(_QWORD *)&this->m_cameraPos.x = 0i64;
  this->m_cameraPos.z = 0.0;
  memset(this->m_originalProjections, 0, sizeof(this->m_originalProjections));
  this->m_bResourcesLoaded = 0;
  this->m_imageHeart.m_isNoCache = 0;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty(&this->m_imageHeart.m_body);
  this->m_imageNote.m_isNoCache = 0;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty(&this->m_imageNote.m_body);
  this->m_useIconType = OutQuad;
  this->m_pUI = 0i64;
}

void __fastcall PreFightFaceOff::RenderManager::~RenderManager(PreFightFaceOff::RenderManager *this)
{
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v3; // rcx

  this->__vftable = (PreFightFaceOff::RenderManager_vtbl *)&PreFightFaceOff::RenderManager::`vftable';
  PreFightFaceOff::RenderManager::release(this);
  m_ptr = this->m_imageNote.m_body.m_ptr;
  if ( m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
      m_ptr,
      1i64);
  }
  v3 = this->m_imageHeart.m_body.m_ptr;
  if ( v3
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v3->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v3->~RefCountableWeakSupportBase)(
      v3,
      1i64);
  }
  this->__vftable = (PreFightFaceOff::RenderManager_vtbl *)&ErrorChecker::`vftable';
}

void __fastcall ActionSystem::CameraLateCalc(ActionSystem *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  float *p_z; // rbx
  float *v5; // rdi
  ActionSystem *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // xmm0_8
  int v11; // eax
  int v12; // eax
  __int64 v13; // xmm0_8
  int v14; // eax
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm0_4

  CameraControl::CameraLateCalc(&this->cameraCtrl, this);
  if ( this->bUseSubCamera && this->subCameraCtrl != (CameraControl *)&this->freeCamera )
  {
    p_z = &this->subCameraCtrl[0].vPos.z;
    do
    {
      v5 = p_z - 129;
      CameraControl::MotionCameraCheck((CameraControl *)(p_z - 129), this, v2, v3);
      CameraControl::QuakeCameraCalc((CameraControl *)(p_z - 129), this);
      switch ( *((_DWORD *)p_z - 99) )
      {
        case 1:
          CameraControl::MoveCameraCalc((CameraControl *)(p_z - 129), this, v7, v8);
          break;
        case 2:
          CameraControl::MoveCameraOutCalc((CameraControl *)(p_z - 129), this);
          break;
        case 5:
          if ( this->actBlack.data[5].attr != COUNTER_HIT || *((_BYTE *)p_z - 68) )
          {
            *((_DWORD *)p_z - 83) += this->xPlaySpeed.value;
            if ( *((_DWORD *)p_z - 83) >= *((_DWORD *)p_z - 82) )
              CameraOffsetData::Reset((CameraOffsetData *)(p_z - 99));
          }
          v9 = *((_DWORD *)p_z - 124);
          *((_QWORD *)p_z - 1) = *((_QWORD *)p_z - 63);
          *(_QWORD *)(p_z - 5) = *(_QWORD *)v5;
          v10 = *(_QWORD *)(p_z - 123);
          *(_DWORD *)p_z = v9;
          *(p_z - 3) = v5[2];
          v11 = *((_DWORD *)p_z - 121);
          *(_QWORD *)(p_z + 1) = v10;
          *((_DWORD *)p_z + 3) = v11;
          break;
        case 6:
          CameraControl::NormalFixYCheck((CameraControl *)(p_z - 129), v6);
          break;
      }
      if ( !*((_DWORD *)p_z - 99) )
      {
        v12 = *((_DWORD *)p_z - 124);
        *((_QWORD *)p_z - 1) = *((_QWORD *)p_z - 63);
        *(_QWORD *)(p_z - 5) = *(_QWORD *)v5;
        v13 = *(_QWORD *)(p_z - 123);
        *(_DWORD *)p_z = v12;
        *(p_z - 3) = v5[2];
        v14 = *((_DWORD *)p_z - 121);
        *(_QWORD *)(p_z + 1) = v13;
        *((_DWORD *)p_z + 3) = v14;
      }
      v15 = *p_z;
      *(p_z - 2) = *(p_z - 2) + *(p_z - 15);
      *(p_z - 1) = *(p_z - 14) + *(p_z - 1);
      *p_z = v15 + *(p_z - 13);
      v16 = *(p_z - 4);
      *(p_z - 5) = *(p_z - 5) + *(p_z - 15);
      v17 = *(p_z - 3);
      *(p_z - 4) = v16 + *(p_z - 14);
      *(p_z - 3) = v17 + *(p_z - 13);
      CameraControl::_calcCamMatrix((CameraControl *)(p_z - 129));
      p_z += 242;
    }
    while ( p_z - 129 != (float *)&this->freeCamera );
  }
}

std::_Func_base<void,Actor &> *__fastcall std::_Func_impl<void (*)(Actor &),std::allocator<int>,void,Actor &>::_Copy(
        std::_Func_impl<void (__cdecl*)(Actor &),std::allocator<int>,void,Actor &> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<void (*)(Actor &),std::allocator<int>,void,Actor &>::`vftable';
    *((_QWORD *)_Where + 1) = this->_Mypair._Myval2;
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

void __fastcall std::_Func_impl<void (*)(Actor &),std::allocator<int>,void,Actor &>::_Do_call(
        std::_Func_impl<void (__cdecl*)(Actor &),std::allocator<int>,void,Actor &> *this,
        Actor *<_Args_0>)
{
  this->_Mypair._Myval2(<_Args_0>);
}

std::_Align_type<double,64> *__fastcall __Get____Func_impl_U_unnamed_type_nothing___1__InstallGFxInterface_extension__YAXXZ_V__allocator_H_std__VValue_GFx_Scaleform__AEAVGFXIMovieContext_3_PEBV678_I_std__EEBAPEBXXZ(
        _Mtx_internal_imp_t *mtx)
{
  return &mtx->cs;
}

void ***__fastcall std::_Func_impl<void (*)(Actor &),std::allocator<int>,void,Actor &>::_Target_type(
        std::_Func_impl<void (__cdecl*)(Actor &),std::allocator<int>,void,Actor &> *this)
{
  return &void (*)(Actor &) `RTTI Type Descriptor';
}

void __fastcall PreFightFaceOff::RenderManager::draw(PreFightFaceOff::RenderManager *this)
{
  Framework::GLManager *v1; // rbp
  AppMain *v2; // rsi
  unsigned int v4; // ecx
  Framework::GLManager *v5; // rbx
  unsigned int m_FrameBufferID; // ecx
  int v7; // er8
  int m_iScreenW; // er15
  int textureHeight; // ebx
  OGLTexture *m_pTextureCameraViewP1; // rdx
  OGLTexture *m_pTextureCameraViewP2; // rdx
  BattleStage *pBattleStage; // rcx
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF

  v1 = Framework::GLManager::glm;
  v2 = *(AppMain **)&AppMain::pApp;
  PreFightFaceOff::RenderManager::renderTextureByCamerView(this);
  if ( this->m_bResourcesLoaded )
  {
    if ( this->m_bRenderScreen[0] && this->m_bRenderScreen[1] )
    {
      v5 = Framework::GLManager::glm;
      m_FrameBufferID = v2->m_pRender->m_renderTextures.m_FullScreenTexture[0].m_FrameBufferID;
      Framework::GLManager::glm->currentRenderID = m_FrameBufferID;
      v5->m_bOpenGLBlocked = 1;
      _glewBindFramebuffer(0x8D40u, *(_DWORD *)&v5->m_buffer.m_freeIDs[12 * (unsigned __int8)m_FrameBufferID + 15]);
      v5->m_bOpenGLBlocked = 0;
      v13 = 36064;
      _glewDrawBuffers(1, &v13);
      v5->m_outputMask = 1;
      glClearAG(0x100u);
      m_iScreenW = v2->m_iScreenW;
      textureHeight = v2->m_iScreenH;
      m_pTextureCameraViewP1 = this->m_pTextureCameraViewP1;
      if ( m_pTextureCameraViewP1 )
        PreFightFaceOff::_anonymous_namespace_::DrawBillboardTexture(
          v2,
          m_pTextureCameraViewP1,
          v7,
          m_iScreenW,
          textureHeight,
          0,
          0,
          m_iScreenW / 2,
          v2->m_iScreenH);
      m_pTextureCameraViewP2 = this->m_pTextureCameraViewP2;
      if ( m_pTextureCameraViewP2 )
        PreFightFaceOff::_anonymous_namespace_::DrawBillboardTexture(
          v2,
          m_pTextureCameraViewP2,
          v7,
          m_iScreenW,
          textureHeight,
          m_iScreenW / 2,
          0,
          m_iScreenW / 2,
          textureHeight);
      if ( v2->ModelRoomSettings.postprocessSettings.fxaaSettings.fxaaOn )
        AppMain::ApplyFXAA(v2, (int)m_pTextureCameraViewP2);
      if ( v2->ModelRoomSettings.postprocessSettings.extraBGSettings.monitorOn )
        AppMain::RenderGameScreen(v2, (int)m_pTextureCameraViewP2);
      AppMain::DrawFullScreenTextureToScreen(v2);
    }
    if ( this->m_bResourcesLoaded && this->m_bInitialize )
    {
      PreFightFaceOff::UI::draw(this->m_pUI);
      PreFightFaceOff::RenderManager::renderMessageIcons(this);
    }
  }
  glBindRenderbufferAG(v4, v1->systemRenderID[v1->m_backBufferIndex]);
  pBattleStage = v2->pBattleStage;
  if ( pBattleStage )
  {
    if ( !pBattleStage->m_bResourcesInitialized )
      BattleStage::resoucesInitialize(pBattleStage);
  }
}

void __fastcall PreFightFaceOff::RenderManager::initialize(PreFightFaceOff::RenderManager *this)
{
  char *v2; // rax
  char *v3; // rax
  BattleSystem::BattleController *v4; // rax
  float x; // xmm2_4
  __m128 y_low; // xmm1
  int v7; // er12
  float v8; // xmm1_4
  BattleSystem::BattleController *v9; // rsi
  unsigned int v10; // edx
  SimpleQueue<ActorChara,4>::Queue *v11; // rax
  float v12; // xmm6_4
  extension::gfxi_detail::TextProxy *v13; // rax
  extension::GFXIText *m_pGfxText; // rsi
  extension::gfxi_detail::TextProxy *v15; // rsi
  Scaleform::GFx::DrawText *pObject; // rcx
  extension::GFXIFontManager *v17; // rax
  Scaleform::Render::Size<float> *HtmlTextExtent; // rax
  float Height; // xmm0_4
  extension::GFXIText *v20; // rcx
  extension::gfxi_detail::TextProxy *v21; // rax
  Scaleform::GFx::DrawText *v22; // rcx
  extension::GFXIText *v23; // rcx
  extension::GFXIText *v24; // rcx
  extension::gfxi_detail::TextProxy *v25; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v26; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *m_ptr; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v28; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v29; // rcx
  char *v30; // rbx
  BattleSystem::BattleController *v31[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-C0h]
  Scaleform::Render::Size<float> result; // [rsp+50h] [rbp-B8h] BYREF
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> other; // [rsp+58h] [rbp-B0h] BYREF
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> v35; // [rsp+68h] [rbp-A0h] BYREF
  std::string v36; // [rsp+78h] [rbp-90h] BYREF
  std::string v37; // [rsp+98h] [rbp-70h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-50h]
  std::string _Right; // [rsp+C0h] [rbp-48h] BYREF
  std::string v40; // [rsp+E0h] [rbp-28h] BYREF

  v38 = -2i64;
  PreFightFaceOff::RenderManager::release(this);
  this->m_bInitialize = 1;
  v2 = (char *)operator new(0x50ui64);
  *(_QWORD *)v2 = &OGLTexture::`vftable';
  *((_QWORD *)v2 + 1) = 0i64;
  *((_QWORD *)v2 + 2) = 0i64;
  v2[24] = 1;
  *((_DWORD *)v2 + 7) = 0;
  *((_WORD *)v2 + 24) = 1;
  *((_DWORD *)v2 + 13) = 0;
  *((_QWORD *)v2 + 5) = 0i64;
  *((_WORD *)v2 + 28) = 0;
  *(_QWORD *)(v2 + 60) = 0i64;
  *((_QWORD *)v2 + 9) = 0i64;
  this->m_pTextureCameraViewP1 = (OGLTexture *)v2;
  v3 = (char *)operator new(0x50ui64);
  v31[0] = (BattleSystem::BattleController *)v3;
  *(_QWORD *)v3 = &OGLTexture::`vftable';
  *((_QWORD *)v3 + 1) = 0i64;
  *((_QWORD *)v3 + 2) = 0i64;
  v3[24] = 1;
  *((_DWORD *)v3 + 7) = 0;
  *((_WORD *)v3 + 24) = 1;
  *((_DWORD *)v3 + 13) = 0;
  *((_QWORD *)v3 + 5) = 0i64;
  *((_WORD *)v3 + 28) = 0;
  *(_QWORD *)(v3 + 60) = 0i64;
  *((_QWORD *)v3 + 9) = 0i64;
  this->m_pTextureCameraViewP2 = (OGLTexture *)v3;
  v4 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v31[0] = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v31[0]);
    BattleSystem::BattleController::instance = v4;
  }
  x = v4->actSystem.pPlayer[0]->vPos.x;
  y_low = (__m128)LODWORD(v4->actSystem.freeCamera.vPos.y);
  *(float *)&v32 = v4->actSystem.freeCamera.vPos.z;
  *(_QWORD *)&this->m_cameraPos.x = _mm_unpacklo_ps((__m128)LODWORD(v4->actSystem.freeCamera.vPos.x), y_low).m128_u64[0];
  LODWORD(this->m_cameraPos.z) = v32;
  this->m_cameraPos.x = x;
  this->m_updateStageViewTextures = 1;
  *(_WORD *)&this->m_bRenderPlayer1Screen = 1;
  this->m_bRenderScreen[1] = 0;
  v7 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 28i64);
  v8 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 32i64) / 1080.0;
  v9 = (BattleSystem::BattleController *)operator new(8ui64);
  v31[0] = v9;
  result = (Scaleform::Render::Size<float>)operator new(0xA8ui64);
  extension::gfxi_detail::TextProxy::TextProxy(*(extension::gfxi_detail::TextProxy **)&result, v10);
  v9->actSystem.actorCharaQue.pFront = v11;
  this->m_pGfxText = (extension::GFXIText *)v9;
  v12 = (float)(int)(float)(v8 * 26.0);
  if ( *(float *)&v9->actSystem.actorCharaQue.pFront[2].pNext != v12 )
  {
    v13 = extension::GFXIText::cloneIfShared((extension::GFXIText *)v9);
    extension::gfxi_detail::TextProxy::setFontSize(v13, v12);
  }
  m_pGfxText = this->m_pGfxText;
  if ( strcmp(
         (const char *)((m_pGfxText->m_body.m_ptr->m_textParams.FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
         "$font_system_m") )
  {
    v15 = extension::GFXIText::cloneIfShared(m_pGfxText);
    if ( strcmp(
           (const char *)((v15->m_textParams.FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
           "$font_system_m") )
    {
      Scaleform::String::operator=(&v15->m_textParams.FontName, "$font_system_m");
      pObject = v15->m_gtext.pObject;
      if ( pObject )
      {
        pObject->SetFont(pObject, "$font_system_m", 0i64, -1ui64);
        v17 = extension::GFXIFontManager::Instance();
        HtmlTextExtent = extension::gfxi_detail::CustomDrawTextManager::GetHtmlTextExtent(
                           (extension::gfxi_detail::CustomDrawTextManager *)v17->m_drawTextManager.pObject,
                           &result,
                           &v15->m_htmlStr,
                           v15->m_recommendWidth,
                           &v15->m_textParams);
        Height = HtmlTextExtent->Height;
        v15->m_size.Width = HtmlTextExtent->Width;
        v15->m_size.Height = Height;
        extension::gfxi_detail::TextProxy::applyTextRect(v15, v15->m_gtext.pObject);
      }
    }
  }
  extension::GFXIText::setPosition(this->m_pGfxText, 0.0, (float)(int)(float)(v8 * 930.0));
  v20 = this->m_pGfxText;
  if ( v20->m_body.m_ptr->m_textParams.TextColor.Raw != 16448250 )
  {
    v21 = extension::GFXIText::cloneIfShared(v20);
    v21->m_textParams.TextColor.Raw = 16448250;
    v22 = v21->m_gtext.pObject;
    if ( v22 )
    {
      LODWORD(v31[0]) = 16448250;
      ((void (__fastcall *)(Scaleform::GFx::DrawText *, BattleSystem::BattleController **, _QWORD, __int64))v22->SetColor)(
        v22,
        v31,
        0i64,
        -1i64);
    }
  }
  v23 = this->m_pGfxText;
  if ( v23->m_body.m_ptr->m_recommendWidth != (float)v7 )
    extension::GFXIText::cloneIfShared(v23)->m_recommendWidth = (float)v7;
  extension::GFXIText::setHAlign(this->m_pGfxText, HAlign_Center);
  v24 = this->m_pGfxText;
  if ( v24->m_body.m_ptr->m_textParams.LineSpacing != -0.1 )
  {
    v25 = extension::GFXIText::cloneIfShared(v24);
    extension::gfxi_detail::TextProxy::setLineSpacing(v25, -0.1);
  }
  this->m_textAnimationTimer = 0.0;
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&_Right, "ui/battle_ui/PreFightFaceOff/99_txt_sbl_00.obm", 0x2Eui64);
  other.m_isNoCache = 0;
  v36._Mypair._Myval2._Myres = 15i64;
  v36._Mypair._Myval2._Mysize = 0i64;
  v36._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v36, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
    v26,
    (extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *)&other.m_body,
    &v36,
    0i64);
  extension::BasicFutureObject<OGLSecondary,void>::operator=(
    (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_imageHeart,
    &other);
  m_ptr = other.m_body.m_ptr;
  if ( other.m_body.m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&other.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
      m_ptr,
      1i64);
  }
  std::string::~string(&_Right);
  v40._Mypair._Myval2._Myres = 15i64;
  v40._Mypair._Myval2._Mysize = 0i64;
  v40._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v40, "ui/battle_ui/PreFightFaceOff/99_txt_sbl_01.obm", 0x2Eui64);
  v35.m_isNoCache = 0;
  v37._Mypair._Myval2._Myres = 15i64;
  v37._Mypair._Myval2._Mysize = 0i64;
  v37._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v37, &v40, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
    v28,
    (extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *)&v35.m_body,
    &v37,
    0i64);
  extension::BasicFutureObject<OGLSecondary,void>::operator=(
    (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_imageNote,
    &v35);
  v29 = v35.m_body.m_ptr;
  if ( v35.m_body.m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v35.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v29->~RefCountableWeakSupportBase)(
      v29,
      1i64);
  }
  std::string::~string(&v40);
  if ( !this->m_pUI )
  {
    v30 = (char *)operator new(0x28ui64);
    v31[1] = (BattleSystem::BattleController *)v30;
    v30[8] = 0;
    *(_QWORD *)v30 = &PreFightFaceOff::UI::`vftable';
    result = (Scaleform::Render::Size<float>)(v30 + 16);
    v30[17] = 0;
    extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty((extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *)v30 + 3);
    v30[32] = 0;
    this->m_pUI = (PreFightFaceOff::UI *)v30;
  }
  PreFightFaceOff::UI::create(this->m_pUI);
}

bool __fastcall PreFightFaceOff::RenderManager::isInitialized(PreFightFaceOff::RenderManager *this)
{
  bool result; // al
  PreFightFaceOff::UI *m_pUI; // rcx
  extension::AsyncContent<Image> *m_ptr; // rax
  extension::AsyncContent<Image> *v5; // rax
  PreFightFaceOff::UI *v6; // rdi
  extension::AsyncStatus::Step v7; // edx
  extension::AsyncContent<Image> *v8; // rax
  extension::AsyncStatus::Step v9; // edx

  if ( this->m_bResourcesLoaded )
    return 1;
  if ( this->isError(this) )
    return 1;
  m_pUI = this->m_pUI;
  if ( !m_pUI || m_pUI->isError(m_pUI) )
    return 1;
  if ( !this->m_bInitialize )
    return 0;
  m_ptr = this->m_imageNote.m_body.m_ptr->m_content.m_ptr;
  if ( m_ptr )
  {
    if ( !m_ptr->m_isDataReleased && (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      return 0;
  }
  v5 = this->m_imageHeart.m_body.m_ptr->m_content.m_ptr;
  if ( v5 )
  {
    if ( !v5->m_isDataReleased && (v5->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      return 0;
  }
  v6 = this->m_pUI;
  if ( !v6->isError(v6) && !v6->m_bResourcesCreated )
  {
    v8 = v6->m_image.m_body.m_ptr->m_content.m_ptr;
    if ( v8 )
    {
      if ( !v8->m_isDataReleased )
      {
        result = v8->m_status.m_stateFlags.m_value._My_val & 1;
        if ( !result )
          return result;
        v6->m_bResourcesCreated = 1;
        if ( (unsigned int)extension::BasicFutureObject<Image,extension::FutureImageOption>::getErrorCode(
                             &v6->m_image,
                             v7) )
          v6->m_bError = 1;
      }
    }
  }
  this->m_bResourcesLoaded = 1;
  if ( (unsigned int)extension::BasicFutureObject<Image,extension::FutureImageOption>::getErrorCode(
                       &this->m_imageNote,
                       v7)
    || (unsigned int)extension::BasicFutureObject<Image,extension::FutureImageOption>::getErrorCode(
                       &this->m_imageHeart,
                       v9)
    || ((__int64 (__fastcall *)(PreFightFaceOff::UI *))this->m_pUI->isError)(this->m_pUI) )
  {
    this->m_bError = 1;
  }
  return 1;
}

void __fastcall PreFightFaceOff::RenderManager::loadViewAndProjectionParams(PreFightFaceOff::RenderManager *this)
{
  __int64 v1; // rdx
  BattleSystem::BattleController *v2; // rax
  BattleSystem::BattleController *v3; // [rsp+40h] [rbp+8h]

  v1 = *(_QWORD *)&AppMain::pApp;
  *(_OWORD *)(*(_QWORD *)&AppMain::pApp + 1551480i64) = *(_OWORD *)this->m_originalProjections[0].m;
  *(_OWORD *)(v1 + 1551496) = *(_OWORD *)&this->m_originalProjections[0].m[4];
  *(_OWORD *)(v1 + 1551512) = *(_OWORD *)&this->m_originalProjections[0].m[8];
  *(_OWORD *)(v1 + 1551528) = *(_OWORD *)&this->m_originalProjections[0].m[12];
  *(OGLMatrix *)(v1 + 1551544) = this->m_originalProjections[1];
  *(OGLMatrix *)(v1 + 1551608) = this->m_originalProjections[2];
  *(OGLMatrix *)(v1 + 1551672) = this->m_originalProjections[3];
  *(_DWORD *)(*(_QWORD *)(v1 + 112) + 44i64) = this->m_originalDislpayX;
  *(_DWORD *)(*(_QWORD *)(v1 + 112) + 52i64) = this->m_originalDislpayWidth;
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v3 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v3);
    BattleSystem::BattleController::instance = v2;
  }
  v2->actSystem.bFreeCameraMode = 0;
}

void __fastcall PreFightFaceOff::RenderManager::release(PreFightFaceOff::RenderManager *this, __int64 a2, bool a3)
{
  OGLTexture *m_pTextureCameraViewP1; // rdx
  unsigned int *v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int *v8; // rax
  unsigned int *p_m_TexID; // rdx
  GLuint v10; // er8
  OGLTexture *v11; // rcx
  OGLTexture *v12; // rcx
  OGLTexture *m_pTextureCameraViewP2; // rdx
  __int64 v14; // rcx
  unsigned int *v15; // rax
  unsigned int *v16; // rdx
  GLuint v17; // er8
  OGLTexture *v18; // rcx
  OGLTexture *v19; // rcx
  extension::GFXIText *m_pGfxText; // rcx
  PreFightFaceOff::UI *m_pUI; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned int *v24; // rax
  const GLuint *v25; // rdx
  GLuint v26; // er8
  const GLuint *v27; // rdx
  GLuint v28; // eax

  m_pTextureCameraViewP1 = this->m_pTextureCameraViewP1;
  v4 = m_TexID;
  this->m_bInitialize = 0;
  v6 = 32i64;
  if ( m_pTextureCameraViewP1 )
  {
    glDeleteRenderbuffersAG(1, &m_pTextureCameraViewP1->m_FrameBufferID);
    v7 = 32i64;
    this->m_pTextureCameraViewP1->m_FrameBufferID = 0;
    v8 = m_TexID;
    p_m_TexID = &this->m_pTextureCameraViewP1->m_TexID;
    v10 = *p_m_TexID;
    do
    {
      if ( v10 == *v8 )
        *v8 = 0;
      ++v8;
      --v7;
    }
    while ( v7 );
    glDeleteTextures(1, p_m_TexID);
    this->m_pTextureCameraViewP1->m_TexID = 0;
  }
  v11 = this->m_pTextureCameraViewP1;
  if ( v11 )
    OGLTexture::finalize(v11, (unsigned __int64)m_pTextureCameraViewP1, a3);
  v12 = this->m_pTextureCameraViewP1;
  if ( v12 )
  {
    ((void (__fastcall *)(OGLTexture *, __int64))v12->~OGLTexture)(v12, 1i64);
    this->m_pTextureCameraViewP1 = 0i64;
  }
  m_pTextureCameraViewP2 = this->m_pTextureCameraViewP2;
  if ( m_pTextureCameraViewP2 )
  {
    glDeleteRenderbuffersAG(1, &m_pTextureCameraViewP2->m_FrameBufferID);
    v14 = 32i64;
    this->m_pTextureCameraViewP2->m_FrameBufferID = 0;
    v15 = m_TexID;
    v16 = &this->m_pTextureCameraViewP2->m_TexID;
    v17 = *v16;
    do
    {
      if ( v17 == *v15 )
        *v15 = 0;
      ++v15;
      --v14;
    }
    while ( v14 );
    glDeleteTextures(1, v16);
    this->m_pTextureCameraViewP2->m_TexID = 0;
  }
  v18 = this->m_pTextureCameraViewP2;
  if ( v18 )
    OGLTexture::finalize(v18, (unsigned __int64)m_pTextureCameraViewP2, a3);
  v19 = this->m_pTextureCameraViewP2;
  if ( v19 )
  {
    ((void (__fastcall *)(OGLTexture *, __int64))v19->~OGLTexture)(v19, 1i64);
    this->m_pTextureCameraViewP2 = 0i64;
  }
  m_pGfxText = this->m_pGfxText;
  if ( m_pGfxText )
  {
    extension::GFXIText::`scalar deleting destructor'(m_pGfxText, (unsigned int)m_pTextureCameraViewP2);
    this->m_pGfxText = 0i64;
  }
  this->m_bResourcesLoaded = 0;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::reset(&this->m_imageNote);
  extension::BasicFutureObject<Image,extension::FutureImageOption>::reset(&this->m_imageHeart);
  m_pUI = this->m_pUI;
  if ( m_pUI )
  {
    ((void (__fastcall *)(PreFightFaceOff::UI *, __int64))m_pUI->~ErrorChecker)(m_pUI, 1i64);
    this->m_pUI = 0i64;
  }
  this->m_bError = 0;
  v22 = *(_QWORD *)&AppMain::pApp;
  glDeleteRenderbuffersAG(1, (unsigned int *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 80i64) + 783180i64));
  v23 = 32i64;
  *(_DWORD *)(*(_QWORD *)(v22 + 80) + 783180i64) = 0;
  v24 = m_TexID;
  v25 = (const GLuint *)(*(_QWORD *)(v22 + 80) + 783136i64);
  v26 = *v25;
  do
  {
    if ( v26 == *v24 )
      *v24 = 0;
    ++v24;
    --v23;
  }
  while ( v23 );
  glDeleteTextures(1, v25);
  *(_DWORD *)(*(_QWORD *)(v22 + 80) + 783136i64) = 0;
  glDeleteRenderbuffersAG(1, (unsigned int *)(*(_QWORD *)(v22 + 80) + 783260i64));
  *(_DWORD *)(*(_QWORD *)(v22 + 80) + 783260i64) = 0;
  v27 = (const GLuint *)(*(_QWORD *)(v22 + 80) + 783216i64);
  v28 = *v27;
  do
  {
    if ( v28 == *v4 )
      *v4 = 0;
    ++v4;
    --v6;
  }
  while ( v6 );
  glDeleteTextures(1, v27);
  *(_DWORD *)(*(_QWORD *)(v22 + 80) + 783216i64) = 0;
}

void __fastcall PreFightFaceOff::RenderManager::renderMessageIcons(PreFightFaceOff::RenderManager *this)
{
  GraphicsOpt *v2; // rdi
  Graphics *g; // rdx
  float v4; // xmm0_4
  bool v5; // zf
  extension::AsyncContent<Image> *m_ptr; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption> *p_m_imageNote; // rcx
  extension::AsyncContent<Image> *v8; // rax
  float m_useIconPosX; // xmm7_4
  float m_useIconPosY; // xmm6_4
  Image *v11; // rax

  if ( this->m_useIconType )
  {
    v2 = *(GraphicsOpt **)(*(_QWORD *)&AppMain::pApp + 112i64);
    GraphicsOpt::lock(v2);
    g = v2->g;
    v4 = this->m_useIconAlpha * 255.0;
    v5 = g->m_bPreDrawMode == 0;
    g->m_Operator = 3;
    g->m_DstRatio = 255;
    g->m_SrcRatio = (unsigned __int8)(int)v4;
    if ( v5 )
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
    if ( this->m_useIconType == OutQuad )
    {
      m_ptr = this->m_imageNote.m_body.m_ptr->m_content.m_ptr;
      if ( m_ptr && !m_ptr->m_isDataReleased && (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
        goto LABEL_24;
      p_m_imageNote = &this->m_imageNote;
    }
    else
    {
      v8 = this->m_imageHeart.m_body.m_ptr->m_content.m_ptr;
      if ( v8 && !v8->m_isDataReleased && (v8->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
        goto LABEL_24;
      p_m_imageNote = &this->m_imageHeart;
    }
    m_useIconPosX = (float)this->m_useIconPosX;
    m_useIconPosY = (float)this->m_useIconPosY;
    v11 = (Image *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                     (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)p_m_imageNote,
                     (extension::AsyncStatus::Step)g);
    GraphicsOpt::drawImage(v2, v11, m_useIconPosX, m_useIconPosY);
LABEL_24:
    Graphics::drawStack(v2->g);
    Graphics::drawStack(v2->g);
  }
}

void __fastcall PreFightFaceOff::RenderManager::renderTextureByCamerView(
        PreFightFaceOff::RenderManager *this,
        __int64 a2,
        float a3)
{
  AppMain *v3; // rdi
  GraphicsOpt *g; // rax
  int m_iScreenW; // edx
  Fw::cJobManager *v7; // rdx
  int v8; // ecx
  OGLTexture *m_pTextureCameraViewP1; // r8
  int v10; // ecx
  Fw::cJobManager *v11; // rdx
  int v12; // ecx
  OGLTexture *m_pTextureCameraViewP2; // r8

  v3 = *(AppMain **)&AppMain::pApp;
  PreFightFaceOff::RenderManager::saveViewAndProjectionParams(this);
  g = v3->g;
  if ( this->m_bRenderPlayer1Screen )
  {
    m_iScreenW = v3->m_iScreenW;
    g->m_iDisplayX = 0;
    v3->g->m_iDisplayW = (int)(float)((float)m_iScreenW * 0.5);
    AppMain::checkGameLightFlag(v3);
    AppMain::checkSpecialEffectSetting(v3);
    AppMain::renderSetCamera(v3, 0, 0);
    EffectTaskManager::updateBufferStack(v3->effSystem, v7);
    PreFightFaceOff::_anonymous_namespace_::MD_drawCameraView(v3, DRAWTARGET_P1_AND_STAGE, a3);
    m_pTextureCameraViewP1 = this->m_pTextureCameraViewP1;
    if ( v3->m_pRender != (OGLRender *)-777632i64
      && m_pTextureCameraViewP1
      && v3->m_pRender->m_renderTextures.m_FullScreenTexture[0].m_TexID )
    {
      PreFightFaceOff::_anonymous_namespace_::ApplyShaderToTexture(
        v8,
        v3->m_pRender->m_renderTextures.m_FullScreenTexture,
        m_pTextureCameraViewP1,
        v3->m_iScreenW,
        v3->m_iScreenH);
    }
    this->m_bRenderScreen[0] = 1;
  }
  else
  {
    v10 = v3->m_iScreenW;
    g->m_iDisplayX = 0;
    v3->g->m_iDisplayW = (int)(float)((float)v10 * 0.5);
    AppMain::checkGameLightFlag(v3);
    AppMain::checkSpecialEffectSetting(v3);
    AppMain::renderSetCamera(v3, 0, 1);
    EffectTaskManager::updateBufferStack(v3->effSystem, v11);
    PreFightFaceOff::_anonymous_namespace_::MD_drawCameraView(v3, DRAWTARGET_P2_AND_STAGE, a3);
    m_pTextureCameraViewP2 = this->m_pTextureCameraViewP2;
    if ( v3->m_pRender != (OGLRender *)-777632i64
      && m_pTextureCameraViewP2
      && v3->m_pRender->m_renderTextures.m_FullScreenTexture[0].m_TexID )
    {
      PreFightFaceOff::_anonymous_namespace_::ApplyShaderToTexture(
        v12,
        v3->m_pRender->m_renderTextures.m_FullScreenTexture,
        m_pTextureCameraViewP2,
        v3->m_iScreenW,
        v3->m_iScreenH);
    }
    this->m_bRenderScreen[1] = 1;
  }
  this->m_bRenderPlayer1Screen ^= 1u;
  PreFightFaceOff::RenderManager::loadViewAndProjectionParams(this);
}

void __fastcall PreFightFaceOff::RenderManager::saveViewAndProjectionParams(PreFightFaceOff::RenderManager *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)&AppMain::pApp;
  *(_OWORD *)this->m_originalProjections[0].m = *(_OWORD *)(*(_QWORD *)&AppMain::pApp + 1551480i64);
  *(_OWORD *)&this->m_originalProjections[0].m[4] = *(_OWORD *)(v1 + 1551496);
  *(_OWORD *)&this->m_originalProjections[0].m[8] = *(_OWORD *)(v1 + 1551512);
  *(_OWORD *)&this->m_originalProjections[0].m[12] = *(_OWORD *)(v1 + 1551528);
  this->m_originalProjections[1] = *(OGLMatrix *)(v1 + 1551544);
  this->m_originalProjections[2] = *(OGLMatrix *)(v1 + 1551608);
  this->m_originalProjections[3] = *(OGLMatrix *)(v1 + 1551672);
  this->m_originalDislpayX = *(_DWORD *)(*(_QWORD *)(v1 + 112) + 44i64);
  this->m_originalDislpayWidth = *(_DWORD *)(*(_QWORD *)(v1 + 112) + 52i64);
}

void __fastcall PreFightFaceOff::RenderManager::setMessage(
        PreFightFaceOff::RenderManager *this,
        const char *pMessage1,
        const char *pMessage2)
{
  int v6; // esi
  const std::pair<char const *,enum LANGUAGE_MODE> *v7; // rdi
  extension::TranslateTable *v8; // r9
  const std::pair<char const *,enum LANGUAGE_MODE> *v9; // rcx
  const char *first; // rax
  const char *v11; // r14
  const char *v12; // r8
  const char *v13; // rax
  extension::TranslateTable *v14; // rax
  const char *v15; // rcx
  const char *v16; // r9
  __int64 v17; // rcx
  const char *v19; // rdx
  char *v20; // rax
  char *v21; // rax
  char str2[8]; // [rsp+20h] [rbp-258h] BYREF
  char v23[8]; // [rsp+28h] [rbp-250h] BYREF
  char _Buffer[512]; // [rsp+30h] [rbp-248h] BYREF

  this->m_useIconType = Linear;
  if ( pMessage1 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64);
    v7 = extension::auxscript::MyLangCodeNameTable;
    v8 = extension::TranslateTable::Instance();
    v9 = extension::auxscript::MyLangCodeNameTable;
    while ( v9->second != v6 )
    {
      if ( ++v9 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
      {
        first = 0i64;
        goto LABEL_7;
      }
    }
    first = v9->first;
LABEL_7:
    v11 = "en_US";
    v12 = "en_US";
    if ( first )
      v12 = first;
    v13 = extension::TranslateTable::executeTranslate(v8, pMessage1, v12);
    sprintf(_Buffer, "%s", v13);
    if ( pMessage2 )
    {
      v14 = extension::TranslateTable::Instance();
      while ( v7->second != v6 )
      {
        if ( ++v7 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
        {
          v15 = 0i64;
          goto LABEL_15;
        }
      }
      v15 = v7->first;
LABEL_15:
      if ( v15 )
        v11 = v15;
      v16 = extension::TranslateTable::executeTranslate(v14, pMessage2, v11);
      v17 = -1i64;
      while ( _Buffer[++v17] != 0 )
        ;
      v19 = "%s%s";
      if ( _Buffer[v17 - 1] != 10 )
        v19 = "%s\n%s";
      sprintf(_Buffer, v19, _Buffer, v16);
    }
    strcpy(v23, "[HEART]");
    strcpy(str2, "[ONNPU]");
    v20 = strstr(_Buffer, str2);
    if ( v20 )
    {
      *(_DWORD *)v20 = 538976288;
      *((_WORD *)v20 + 2) = 8224;
      v20[6] = 32;
      this->m_useIconType = OutQuad;
      this->m_useIconAlpha = 0.0;
      if ( v6 )
      {
        switch ( v6 )
        {
          case 4:
            this->m_useIconPosX = 1211;
            this->m_useIconPosY = 960;
            break;
          case 2:
            this->m_useIconPosX = 1163;
            this->m_useIconPosY = 931;
            break;
          case 3:
            this->m_useIconPosX = 1163;
            this->m_useIconPosY = 931;
            break;
          default:
            this->m_useIconType = OutQuad;
            break;
        }
      }
      else
      {
        this->m_useIconPosX = 1233;
        this->m_useIconPosY = 936;
      }
    }
    v21 = strstr(_Buffer, v23);
    if ( v21 )
    {
      *(_DWORD *)v21 = 538976288;
      *((_WORD *)v21 + 2) = 8224;
      v21[6] = 32;
      this->m_useIconType = InQuad;
      this->m_useIconAlpha = 0.0;
      switch ( v6 )
      {
        case 0:
          this->m_useIconPosX = 1519;
          this->m_useIconPosY = 936;
          break;
        case 1:
          this->m_useIconPosX = 1259;
          this->m_useIconPosY = 975;
          break;
        case 2:
          this->m_useIconPosX = 1337;
          this->m_useIconPosY = 930;
          break;
        case 3:
          this->m_useIconPosX = 1413;
          this->m_useIconPosY = 930;
          break;
        case 4:
          this->m_useIconPosX = 1392;
          this->m_useIconPosY = 930;
          break;
        case 5:
          this->m_useIconPosX = 1328;
          this->m_useIconPosY = 975;
          break;
        case 6:
          this->m_useIconPosX = 1281;
          this->m_useIconPosY = 975;
          break;
        case 7:
          this->m_useIconPosX = 1361;
          this->m_useIconPosY = 975;
          break;
        case 8:
          this->m_useIconPosX = 1261;
          this->m_useIconPosY = 975;
          break;
        case 9:
          this->m_useIconPosX = 1265;
          this->m_useIconPosY = 975;
          break;
        case 10:
          this->m_useIconPosX = 1223;
          this->m_useIconPosY = 975;
          break;
        case 11:
        case 12:
          this->m_useIconPosX = 1173;
          this->m_useIconPosY = 975;
          break;
        default:
          this->m_useIconType = OutQuad;
          break;
      }
    }
    extension::GFXIText::setStr(this->m_pGfxText, _Buffer);
  }
}

void __fastcall PreFightFaceOff::RenderManager::update(PreFightFaceOff::RenderManager *this)
{
  AppMain *v2; // r15
  BattleSystem::BattleController *v3; // rdi
  BattleSystem::BattleController *v4; // rax
  BattleSystem::BattleController *v5; // rbx
  BattleSystem::BattleController *v6; // rax
  bool v7; // r12
  int i; // ebx
  int j; // ebx
  __int64 k; // rsi
  ActionSystem::ActorList *m; // rbx
  Actor *pActor; // rcx
  _QWORD *n; // rbx
  __int64 v14; // rcx
  _QWORD *ii; // rbx
  __int64 v16; // rcx
  int v17; // ebx
  int jj; // esi
  __int64 kk; // rsi
  ActionSystem::ActorList *mm; // rbx
  Actor *v21; // rcx
  int nn; // ebx
  int v23; // ebp
  int i1; // ebx
  int i2; // ebx
  __int64 i3; // rsi
  ActionSystem::ActorList *i4; // rbx
  Actor *v28; // rcx
  Fw::cJobManager *v29; // rdx
  BattleStage *pBattleStage; // rcx
  EffectTaskManager *effSystem; // rdx
  int v32; // eax
  int v33; // edx
  float m_textAnimationTimer; // xmm1_4
  int v35; // ebx
  extension::GFXIText *m_pGfxText; // rcx
  extension::gfxi_detail::TextProxy *v37; // rax
  Scaleform::GFx::DrawText *pObject; // rcx
  EffectTaskManager *v39; // rcx
  BattleSystem::BattleController *v40; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(AppMain **)&AppMain::pApp;
  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v40 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v40);
    v3 = v4;
    BattleSystem::BattleController::instance = v4;
  }
  v5 = v3;
  if ( !v3 )
  {
    v40 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v40);
    v3 = v6;
    BattleSystem::BattleController::instance = v6;
  }
  v7 = bBattleLastUpdateFrame;
  BattleSystem::BattleController::Update(v5);
  for ( i = 0; i <= 1; ++i )
    ActionSystem::PreCaller(&v3->actSystem, i);
  ActionSystem::PreCaller(&v3->actSystem, 2);
  ActionSystem::PreCaller(&v3->actSystem, 3);
  for ( j = 0; j <= 1; ++j )
    ActionSystem::MainCaller(&v3->actSystem, j);
  ActionSystem::MainCaller(&v3->actSystem, 2);
  ActionSystem::MainCaller(&v3->actSystem, 3);
  for ( k = 0i64; k <= 1; ++k )
  {
    for ( m = v3->actSystem.ppPriStart[k]; m; m = m->pNext )
    {
      pActor = m->pActor;
      if ( pActor->systemStat == MAIN && !pActor->bSkipSyncPosture )
        pActor->SyncPosture(pActor);
    }
  }
  for ( n = (_QWORD *)*((_QWORD *)v3->actSystem.ppPriStart + 2); n; n = (_QWORD *)*n )
  {
    v14 = n[2];
    if ( *(_DWORD *)(v14 + 20) == 1 && !*(_BYTE *)(v14 + 727) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 776i64))(v14);
  }
  for ( ii = (_QWORD *)*((_QWORD *)v3->actSystem.ppPriStart + 3); ii; ii = (_QWORD *)*ii )
  {
    v16 = ii[2];
    if ( *(_DWORD *)(v16 + 20) == 1 && !*(_BYTE *)(v16 + 727) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 776i64))(v16);
  }
  v17 = 4;
  for ( jj = 4; jj <= 6; ++jj )
    ActionSystem::PreCaller(&v3->actSystem, jj);
  do
    ActionSystem::MainCaller(&v3->actSystem, v17++);
  while ( v17 <= 6 );
  for ( kk = 4i64; kk <= 6; ++kk )
  {
    for ( mm = v3->actSystem.ppPriStart[kk]; mm; mm = mm->pNext )
    {
      v21 = mm->pActor;
      if ( v21->systemStat == MAIN && !v21->bSkipSyncPosture )
        v21->SyncPosture(v21);
    }
  }
  for ( nn = 0; nn <= 6; ++nn )
    ActionSystem::LateCaller(&v3->actSystem, nn);
  v23 = 7;
  for ( i1 = 7; i1 <= 8; ++i1 )
    ActionSystem::PreCaller(&v3->actSystem, i1);
  for ( i2 = 7; i2 <= 8; ++i2 )
    ActionSystem::MainCaller(&v3->actSystem, i2);
  for ( i3 = 7i64; i3 <= 8; ++i3 )
  {
    for ( i4 = v3->actSystem.ppPriStart[i3]; i4; i4 = i4->pNext )
    {
      v28 = i4->pActor;
      if ( v28->systemStat == MAIN && !v28->bSkipSyncPosture )
        v28->SyncPosture(v28);
    }
  }
  do
    ActionSystem::LateCaller(&v3->actSystem, v23++);
  while ( v23 <= 8 );
  pBattleStage = v2->pBattleStage;
  if ( pBattleStage )
    BattleStage::update(
      pBattleStage,
      (float)((float)(unsigned __int16)v3->actSystem.xPlaySpeed.value * 0.000015258789)
    + (float)(v3->actSystem.xPlaySpeed.value >> 16));
  EffectTaskManager::updateStack(v2->effSystem, v29);
  if ( v7 )
  {
    effSystem = v2->effSystem;
    v32 = ++effSystem->UseDataBufferNum;
    if ( v32 >= 2 )
      v32 = 0;
    effSystem->UseDataBufferNum = v32;
  }
  ActionSystem::CameraLateCalc(&v3->actSystem);
  if ( this->m_bRenderPlayer1Screen )
  {
    AppMain::renderSetCamera(v2, 0, 0);
    AppMain::updateGameLights(v2, v2->ModelRoomSettings.fCamPos, v2->ModelRoomSettings.fCamUp, 0);
    if ( v7 )
    {
      AppMain::setupLightUniforms(v2, 0);
      v33 = 2;
LABEL_61:
      AppMain::setupShadowMatrices(v2, v33);
    }
  }
  else
  {
    AppMain::renderSetCamera(v2, 0, 1);
    AppMain::updateGameLights(v2, v2->ModelRoomSettings.fCamPos, v2->ModelRoomSettings.fCamUp, 0);
    if ( v7 )
    {
      AppMain::setupLightUniforms(v2, 1);
      v33 = 3;
      goto LABEL_61;
    }
  }
  if ( this->m_bInitialize && this->m_bMessageRefresh )
  {
    this->m_useIconAlpha = 0.0;
    m_textAnimationTimer = this->m_textAnimationTimer;
    if ( m_textAnimationTimer <= 7.0 )
    {
      if ( m_textAnimationTimer == 7.0 )
      {
        PreFightFaceOff::RenderManager::setMessage(this, this->m_messageInfo.pMessage1, this->m_messageInfo.pMessage2);
      }
      else if ( m_textAnimationTimer <= 0.0 )
      {
        this->m_useIconAlpha = 1.0;
        this->m_bMessageRefresh = 0;
      }
      else
      {
        this->m_useIconAlpha = 1.0 - (float)(m_textAnimationTimer / 7.0);
      }
    }
    else
    {
      this->m_useIconAlpha = (float)(m_textAnimationTimer - 7.0) / 7.0;
    }
    v35 = ((int)(float)(this->m_useIconAlpha * 255.0) << 24) | 0xFAFAFA;
    m_pGfxText = this->m_pGfxText;
    if ( m_pGfxText->m_body.m_ptr->m_textParams.TextColor.Raw != v35 )
    {
      v37 = extension::GFXIText::cloneIfShared(m_pGfxText);
      v37->m_textParams.TextColor.Raw = v35;
      pObject = v37->m_gtext.pObject;
      if ( pObject )
      {
        LODWORD(v40) = v35;
        ((void (__fastcall *)(Scaleform::GFx::DrawText *, BattleSystem::BattleController **, _QWORD, __int64, __int64))pObject->SetColor)(
          pObject,
          &v40,
          0i64,
          -1i64,
          -2i64);
      }
    }
    this->m_textAnimationTimer = this->m_textAnimationTimer - 1.0;
  }
  Framework::GLManager::glm->m_frameProgressSpeed = 1.0;
  if ( !v7 )
  {
    v2->effSystem->m_updateBufferThreadStack._Mypair._Myval2._Mylast = v2->effSystem->m_updateBufferThreadStack._Mypair._Myval2._Myfirst;
    v39 = v2->effSystem;
    v39->m_renderThreadStack._Mypair._Myval2._Mylast = v39->m_renderThreadStack._Mypair._Myval2._Myfirst;
    v39->updateVertexBufferFlag = 0;
  }
}

