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
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/attackhitutil.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089B33C
void Collision::AttackHitCheck(ActionSystem & actSys); // 0x1400DE040
void Collision::PlayerAttackCheck(); // 0x1400DE1B0
void Collision::PlayerGuardCheck(); // 0x1400DE530
void Collision::PlayerGuardPointCheck(); // 0x1400DE780
void Collision::PlayerAtemiCheck(); // 0x1400DEA40
void Collision::PlayerGuardRangeCheck(ActionSystem & actSys); // 0x1400DED00
void Collision::PlayerCatchCheck(ActionSystem & actSys); // 0x1400DEF20
void Collision::PlayerThrowDamageCheck(); // 0x1400DF350
void Collision::PlayerReserveDamageCheck(ActionSystem & actSys); // 0x1400DF440
bool Collision::AttackVsPlayer(const Collision::HitRectWork & atk, const Collision::HitRectWork & psv); // 0x1400DF7C0
bool Collision::AttackVsGuard(const Collision::HitRectWork & atk, const Collision::HitRectWork & psv); // 0x1400DFA30
bool Collision::AttackVsGuardPoint(const Collision::HitRectWork & atk, const Collision::HitRectWork & psv); // 0x1400DFC50
bool Collision::GuardRangeVsCenter(const Collision::HitRectWork & atk, ActorChara & actor); // 0x1400DFD60
bool Collision::CatchVsPlayer(const Collision::HitRectWork & atk, const Collision::HitRectWork & psv, Collision::HitRect & centerRect); // 0x1400DFE20//decompilation failure at 14089B33C!
Collision::HitRectWork *__fastcall std::_Uninitialized_move_al_unchecked1<Collision::HitRectWork *,Collision::HitRectWork *,std::allocator<Collision::HitRectWork>>(
        Collision::HitRectWork *_First,
        Collision::HitRectWork *_Last,
        Collision::HitRectWork *_Dest,
        std::_Wrap_alloc<std::allocator<Collision::HitRectWork> > *_Al)
{
  Collision::HitRectWork *i; // r9
  Collision::HitRectWork *v6; // rdx
  Collision::HitRectWork *v7; // rax
  __int64 v8; // rcx

  for ( i = _First; i != _Last; ++i )
  {
    if ( _Dest )
    {
      v6 = _Dest;
      v7 = i;
      v8 = 3i64;
      do
      {
        *(_OWORD *)&v6->type = *(_OWORD *)&v7->type;
        *(_OWORD *)&v6->rect.h = *(_OWORD *)&v7->rect.h;
        *(_OWORD *)&v6->pOwner = *(_OWORD *)&v7->pOwner;
        *(_OWORD *)&v6->data.atk.iDataType = *(_OWORD *)&v7->data.atk.iDataType;
        *(_OWORD *)&v6->data.hit.iBindIndex = *(_OWORD *)&v7->data.hit.iBindIndex;
        *((_OWORD *)&v6->data.hit + 2) = *((_OWORD *)&v7->data.hit + 2);
        *((_OWORD *)&v6->data.hit + 3) = *((_OWORD *)&v7->data.hit + 3);
        v6 = (Collision::HitRectWork *)((char *)v6 + 128);
        *(_OWORD *)((char *)&v6[-1].data.hit + 440) = *((_OWORD *)&v7->data.hit + 4);
        v7 = (Collision::HitRectWork *)((char *)v7 + 128);
        --v8;
      }
      while ( v8 );
      *(_OWORD *)&v6->type = *(_OWORD *)&v7->type;
      *(_OWORD *)&v6->rect.h = *(_OWORD *)&v7->rect.h;
      *(_OWORD *)&v6->pOwner = *(_OWORD *)&v7->pOwner;
      *(_OWORD *)&v6->data.atk.iDataType = *(_OWORD *)&v7->data.atk.iDataType;
      *(_OWORD *)&v6->data.hit.iBindIndex = *(_OWORD *)&v7->data.hit.iBindIndex;
      *((_OWORD *)&v6->data.hit + 2) = *((_OWORD *)&v7->data.hit + 2);
      *((_OWORD *)&v6->data.hit + 3) = *((_OWORD *)&v7->data.hit + 3);
      *((_QWORD *)&v6->data.hit + 8) = *((_QWORD *)&v7->data.hit + 8);
    }
    ++_Dest;
  }
  return _Dest;
}

void __fastcall std::_Wrap_alloc<std::allocator<Collision::HitRectWork>>::construct<Collision::HitRectWork,Collision::HitRectWork>(
        std::_Wrap_alloc<std::allocator<Collision::HitRectWork> > *this,
        Collision::HitRectWork *_Ptr,
        Collision::HitRectWork *<_Args_0>)
{
  __int64 v3; // rax
  __int128 v4; // xmm0

  if ( _Ptr )
  {
    v3 = 3i64;
    do
    {
      _Ptr = (Collision::HitRectWork *)((char *)_Ptr + 128);
      v4 = *(_OWORD *)&<_Args_0>->type;
      <_Args_0> = (Collision::HitRectWork *)((char *)<_Args_0> + 128);
      *(_OWORD *)((char *)&_Ptr[-1].data.hit + 328) = v4;
      *(_OWORD *)((char *)&_Ptr[-1].data.hit + 344) = *(_OWORD *)((char *)&<_Args_0>[-1].data.hit + 344);
      *(_OWORD *)(&_Ptr[-1].data.hit + 15) = *(_OWORD *)(&<_Args_0>[-1].data.hit + 15);
      *(_OWORD *)((char *)&_Ptr[-1].data.hit + 376) = *(_OWORD *)((char *)&<_Args_0>[-1].data.hit + 376);
      *(_OWORD *)((char *)&_Ptr[-1].data.hit + 392) = *(_OWORD *)((char *)&<_Args_0>[-1].data.hit + 392);
      *(_OWORD *)(&_Ptr[-1].data.hit + 17) = *(_OWORD *)(&<_Args_0>[-1].data.hit + 17);
      *(_OWORD *)((char *)&_Ptr[-1].data.hit + 424) = *(_OWORD *)((char *)&<_Args_0>[-1].data.hit + 424);
      *(_OWORD *)((char *)&_Ptr[-1].data.hit + 440) = *(_OWORD *)((char *)&<_Args_0>[-1].data.hit + 440);
      --v3;
    }
    while ( v3 );
    *(_OWORD *)&_Ptr->type = *(_OWORD *)&<_Args_0>->type;
    *(_OWORD *)&_Ptr->rect.h = *(_OWORD *)&<_Args_0>->rect.h;
    *(_OWORD *)&_Ptr->pOwner = *(_OWORD *)&<_Args_0>->pOwner;
    *(_OWORD *)&_Ptr->data.atk.iDataType = *(_OWORD *)&<_Args_0>->data.atk.iDataType;
    *(_OWORD *)&_Ptr->data.hit.iBindIndex = *(_OWORD *)&<_Args_0>->data.hit.iBindIndex;
    *((_OWORD *)&_Ptr->data.hit + 2) = *((_OWORD *)&<_Args_0>->data.hit + 2);
    *((_OWORD *)&_Ptr->data.hit + 3) = *((_OWORD *)&<_Args_0>->data.hit + 3);
    *((_QWORD *)&_Ptr->data.hit + 8) = *((_QWORD *)&<_Args_0>->data.hit + 8);
  }
}

void __fastcall BattleSystem::ComboMissionJudge::TermClearInfo::TermClearInfo(
        std::unique_ptr<Collision::HitRectList> *this)
{
  this->_Mypair._Myval2 = 0i64;
}

void __fastcall DamageSetControl::DamageSetControl(DamageSetControl *this)
{
  ActorChara **p_pParent; // rbx
  __int64 v2; // rdi

  p_pParent = &this->dmgSet[0].psv.pParent;
  v2 = 2i64;
  do
  {
    *((_DWORD *)p_pParent - 132) = 0;
    *(ActorChara **)((char *)p_pParent - 524) = 0i64;
    *(ActorChara **)((char *)p_pParent - 516) = 0i64;
    *(p_pParent - 63) = 0i64;
    *(p_pParent - 62) = 0i64;
    *(p_pParent - 61) = 0i64;
    memset(p_pParent - 60, 0, 0x1C4ui64);
    *((_DWORD *)p_pParent - 6) = 0;
    *(ActorChara **)((char *)p_pParent - 20) = 0i64;
    *(ActorChara **)((char *)p_pParent - 12) = 0i64;
    *p_pParent = 0i64;
    p_pParent[1] = 0i64;
    p_pParent[2] = 0i64;
    memset(p_pParent + 3, 0, 0x1C4ui64);
    p_pParent[60] = 0i64;
    *((_DWORD *)p_pParent + 122) = 0;
    p_pParent += 128;
    --v2;
  }
  while ( v2 );
}

void __fastcall Collision::HitRectCollection::HitRectCollection(Collision::HitRectCollection *this)
{
  Collision::HitRectCollection *v2; // rdi
  const int *v3; // rsi
  Collision::HitRectList *v4; // r14
  unsigned __int64 v5; // rcx
  Collision::HitRectList *Myval2; // rbx
  Collision::HitRectWork *Myfirst; // r9

  `eh vector constructor iterator'(
    this,
    8ui64,
    0xFui64,
    (void (__fastcall *)(void *))BattleSystem::ComboMissionJudge::TermClearInfo::TermClearInfo,
    (void (__fastcall *)(void *))std::unique_ptr<Collision::HitRectList>::~unique_ptr<Collision::HitRectList>);
  v2 = this;
  v3 = Collision::HitRectCollection::ciRectListWorkMax;
  do
  {
    v4 = (Collision::HitRectList *)operator new(0x20ui64);
    v5 = *v3;
    v4->iWorkSize = v5;
    v4->rectList._Mypair._Myval2._Myfirst = 0i64;
    v4->rectList._Mypair._Myval2._Mylast = 0i64;
    v4->rectList._Mypair._Myval2._Myend = 0i64;
    if ( ((unsigned __int64)((unsigned __int128)(0 * (__int128)(__int64)0x8208208208208209ui64) >> 64) >> 63)
       + ((__int64)((unsigned __int128)(0 * (__int128)(__int64)0x8208208208208209ui64) >> 64) >> 8) < v5 )
    {
      if ( v5 > 0x82082082082082i64 )
        std::_Xlength_error("vector<T> too long");
      std::vector<Collision::HitRectWork>::_Reallocate(&v4->rectList, v5);
    }
    Myval2 = v2->pRectList[0]._Mypair._Myval2;
    v2->pRectList[0]._Mypair._Myval2 = v4;
    if ( Myval2 )
    {
      Myfirst = Myval2->rectList._Mypair._Myval2._Myfirst;
      if ( Myfirst )
      {
        std::_Wrap_alloc<std::allocator<Collision::HitRectWork>>::deallocate(
          (std::_Wrap_alloc<std::allocator<Collision::HitRectWork> > *)((char *)Myval2->rectList._Mypair._Myval2._Myend
                                                                      - (char *)Myfirst),
          Myval2->rectList._Mypair._Myval2._Myfirst,
          Myval2->rectList._Mypair._Myval2._Myend - Myfirst);
        Myval2->rectList._Mypair._Myval2._Myfirst = 0i64;
        Myval2->rectList._Mypair._Myval2._Mylast = 0i64;
        Myval2->rectList._Mypair._Myval2._Myend = 0i64;
      }
      operator delete(Myval2, 0x20ui64);
    }
    ++v3;
    v2 = (Collision::HitRectCollection *)((char *)v2 + 8);
  }
  while ( (__int64)v3 < (__int64)&std::piecewise_construct_198 );
}

void __fastcall Collision::AttackHitCheck(ActionSystem *actSys)
{
  DamageSetControl *v1; // rax
  ActionSystem *v2; // rbp
  __int64 v3; // rbx
  ActorChara **pPlayer; // rsi
  __int64 v5; // rdi
  ActionSystem **v6; // r14
  Collision *v7; // rcx
  Collision *v8; // rcx
  Collision *v9; // rcx
  Collision *v10; // rcx
  ActionSystem *v11; // rcx
  Collision *v12; // rcx
  Collision *v13; // rcx
  Collision *v14; // rcx
  DamageSetControl *v15; // rax
  DamageSetControl *v16; // [rsp+48h] [rbp+10h]
  DamageSetControl *v17; // [rsp+48h] [rbp+10h]

  v1 = DamageSetControl::instance;
  v2 = actSys;
  if ( !DamageSetControl::instance )
  {
    v16 = (DamageSetControl *)operator new(0x800ui64);
    DamageSetControl::DamageSetControl(v16);
    DamageSetControl::instance = v1;
  }
  v3 = 0i64;
  if ( v1 != &v1[1] )
  {
    actSys = (ActionSystem *)&v1->dmgSet[0].damageType;
    do
    {
      *(_QWORD *)&actSys[-1].photoModeData.iCursor = 0i64;
      LODWORD(actSys->actorCharaQue.pFront) = 0;
      BYTE4(actSys->actorCharaQue.pFront) = 0;
      actSys = (ActionSystem *)((char *)actSys + 1024);
    }
    while ( &actSys[-1].defaultMaterialData[3].defaultMaterialData[22].iOptionFlag != (int *)&v1[1] );
  }
  pPlayer = v2->pPlayer;
  v5 = 0i64;
  v6 = (ActionSystem **)v2->pPlayer;
  do
  {
    if ( (unsigned __int64)v5 <= 1 )
    {
      actSys = *v6;
      if ( *v6 )
        ((void (__fastcall *)(ActionSystem *))actSys->actorCharaQue.pFront[234].pData)(actSys);
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 2 );
  Collision::ShotReflectCheck((Collision *)actSys);
  Collision::ShotEraseCheck(v7);
  Collision::ShotBodyCheck(v8);
  Collision::PlayerAtemiCheck(v9);
  Collision::PlayerThrowDamageCheck(v10);
  Collision::PlayerCatchCheck(v11);
  Collision::PlayerGuardRangeCheck(v2);
  Collision::PlayerGuardCheck(v12);
  Collision::PlayerGuardPointCheck(v13);
  Collision::PlayerReserveDamageCheck(v2);
  Collision::PlayerAttackCheck(v14);
  do
  {
    if ( (unsigned __int64)v3 <= 1 && *pPlayer )
      (*pPlayer)->ReserveRecoverCalc(*pPlayer);
    ++v3;
    ++pPlayer;
  }
  while ( v3 < 2 );
  v15 = DamageSetControl::instance;
  if ( !DamageSetControl::instance )
  {
    v17 = (DamageSetControl *)operator new(0x800ui64);
    DamageSetControl::DamageSetControl(v17);
    DamageSetControl::instance = v15;
  }
  DamageSetControl::DamageSet(v15);
  DamageSetControl::PlayerStatusCheck(v2);
}

char __fastcall Collision::AttackVsGuard(const Collision::HitRectWork *atk, const Collision::HitRectWork *psv)
{
  int iTargetFlag; // eax
  ActorObject *pOwner; // rdx
  ActorChara *pParent; // rcx
  DAMAGE_SET_TYPE type; // edi
  __int64 v9; // rbp
  __int64 v10; // rax
  int iGuardAttr; // eax
  int v12; // eax
  DamageSetControl *Instance; // rax
  Collision::HitRect center; // [rsp+30h] [rbp-18h] BYREF

  if ( atk->pOwner->IsAttackGroupID(atk->pOwner, atk->iGroupID) )
    return 0;
  iTargetFlag = atk->data.atk.iTargetFlag;
  if ( !iTargetFlag )
    iTargetFlag = Collision::ciDefaultAttackTargetFlag[atk->data.atk.iDataType];
  if ( (iTargetFlag & 1) == 0 )
    return 0;
  if ( atk->data.atk.iGuardAttr == 3 )
    return 0;
  pOwner = psv->pOwner;
  if ( pOwner->vPos.y > 0.0 )
    return 0;
  if ( !Collision::AttackDirectionJudge(atk->pOwner, pOwner, atk->data.atk.iDirectionAttr) )
    return 0;
  if ( !Collision::AttackTargetStateJudge(atk, psv) )
    return 0;
  pParent = psv->pParent;
  if ( !pParent )
    return 0;
  type = STAND_GUARD;
  v9 = ((int (*)(void))pParent->GetPlayerID)();
  BattleSystem::BattleController::GetActionSystem();
  if ( (unsigned int)(*(_DWORD *)(v10 + 255116) - 1) > 4 && *(_DWORD *)(168 * v9 + v10 + 246156) == 1 )
  {
    if ( psv->pParent->IsInputCrouchGuard(psv->pParent)
      || psv->pParent->IsAutoGuardOK(psv->pParent) && psv->pParent->IsCrouch(psv->pParent) )
    {
      type = CROUCH_GUARD;
    }
  }
  else if ( (((__int64 (__fastcall *)(ActorChara *, _QWORD))psv->pParent->GetInputKey)(psv->pParent, 0i64) & 8) != 0 )
  {
    type = CROUCH_GUARD;
  }
  if ( psv->pParent->IsAutoGuardOK(psv->pParent) && !psv->pParent->IsInvalidGuardChange(psv->pParent) )
  {
    iGuardAttr = atk->data.atk.iGuardAttr;
    if ( iGuardAttr == 1 && type == CROUCH_GUARD )
    {
      type = STAND_GUARD;
    }
    else if ( iGuardAttr == 2 && type == STAND_GUARD )
    {
      type = CROUCH_GUARD;
    }
  }
  v12 = atk->data.atk.iGuardAttr;
  if ( v12 == 1 && type == CROUCH_GUARD
    || v12 == 2 && type == STAND_GUARD
    || !Collision::HitRectWork::IsIntersect((Collision::HitRectWork *)atk, psv, &center) )
  {
    return 0;
  }
  if ( (atk->data.atk.iAttackFlag & 0x4000000) == 0 )
    atk->pOwner->SetActionBranchKey(atk->pOwner, atk->data.atk.iActionBranchKey);
  Instance = DamageSetControl::GetInstance();
  DamageSetControl::PlayerAttackDamage(Instance, atk, psv, &center, type);
  atk->pOwner->SetAttackGroupID(atk->pOwner, atk->iGroupID);
  return 1;
}

char __fastcall Collision::AttackVsGuardPoint(const Collision::HitRectWork *atk, const Collision::HitRectWork *psv)
{
  int iDirectionAttr; // ecx
  ActorObject *pOwner; // rdx
  float v7; // xmm1_4
  int v8; // ecx
  DamageSetControl *v9; // rcx
  Collision::HitRect center; // [rsp+20h] [rbp-18h] BYREF

  if ( atk->pOwner->IsAttackGroupID(atk->pOwner, atk->iGroupID) )
    return 0;
  iDirectionAttr = atk->data.atk.iDirectionAttr;
  pOwner = atk->pOwner;
  if ( iDirectionAttr )
  {
    v7 = psv->pOwner->vPos.x - pOwner->vPos.x;
    if ( pOwner->iCAngle )
      LODWORD(v7) ^= _xmm;
    if ( iDirectionAttr == 1 )
    {
      if ( v7 < 0.0 )
        return 0;
    }
    else if ( iDirectionAttr != 2 || v7 >= 0.0 )
    {
      return 0;
    }
  }
  if ( !Collision::AttackTargetStateJudge(atk, psv)
    || !psv->pParent
    || !Collision::AttackGuardPointFlagJudge(v8, atk, psv)
    || !Collision::HitRectWork::IsIntersect((Collision::HitRectWork *)atk, psv, &center) )
  {
    return 0;
  }
  if ( (atk->data.atk.iAttackFlag & 0x4000000) == 0 )
    atk->pOwner->SetActionBranchKey(atk->pOwner, atk->data.atk.iActionBranchKey);
  DamageSetControl::GetInstance();
  DamageSetControl::PlayerGuardPointSetting(v9, atk, psv, &center);
  atk->pOwner->SetAttackGroupID(atk->pOwner, atk->iGroupID);
  return 1;
}

char __fastcall Collision::AttackVsPlayer(const Collision::HitRectWork *atk, const Collision::HitRectWork *psv)
{
  int iTargetFlag; // esi
  int iDirectionAttr; // ecx
  ActorObject *pOwner; // rdx
  float v8; // xmm0_4
  ActorObject *v9; // rcx
  const Collision::HitRect *v10; // rax
  ActorObject *v11; // rax
  float x; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  ActorObject *v15; // rax
  float v16; // xmm3_4
  float y; // xmm0_4
  DamageSetControl *Instance; // rax
  Collision::HitRect center; // [rsp+30h] [rbp-28h] BYREF
  Collision::HitRect rect; // [rsp+40h] [rbp-18h]

  if ( atk->pOwner->IsAttackGroupID(atk->pOwner, atk->iGroupID) )
    return 0;
  iTargetFlag = atk->data.atk.iTargetFlag;
  if ( !iTargetFlag )
    iTargetFlag = Collision::ciDefaultAttackTargetFlag[atk->data.atk.iDataType];
  if ( psv->type == REVERSAL )
  {
    if ( (iTargetFlag & 0xA) == 0 )
      return 0;
  }
  else if ( (iTargetFlag & 5) == 0 )
  {
    return 0;
  }
  iDirectionAttr = atk->data.atk.iDirectionAttr;
  pOwner = atk->pOwner;
  if ( iDirectionAttr )
  {
    v8 = psv->pOwner->vPos.x - pOwner->vPos.x;
    if ( pOwner->iCAngle )
      LODWORD(v8) ^= _xmm;
    if ( iDirectionAttr == 1 )
    {
      if ( v8 < 0.0 )
        return 0;
    }
    else if ( iDirectionAttr != 2 || v8 >= 0.0 )
    {
      return 0;
    }
  }
  if ( !Collision::AttackTargetStateJudge(atk, psv) )
    return 0;
  if ( psv->type == REVERSAL )
  {
    if ( (iTargetFlag & 2) == 0
      || (v9 = psv->pOwner, v9->bodyPush.iRectID <= 0)
      || (v10 = (const Collision::HitRect *)((__int64 (__fastcall *)(ActorObject *))v9->GetHitRect)(v9)) == 0i64
      || !Collision::HitRectWork::IsIntersect(
            (Collision::HitRectWork *)atk,
            v10,
            psv->pOwner,
            &center,
            psv->pOwner->bodyPush.iBindIndex,
            psv->pOwner->bodyPush.iFlag & 0x10000) )
    {
      if ( (iTargetFlag & 8) == 0 )
        return 0;
      v11 = atk->pOwner;
      rect = atk->rect;
      x = rect.x;
      if ( v11->iCAngle )
        x = COERCE_FLOAT(LODWORD(rect.x) ^ _xmm) - rect.w;
      v13 = x + v11->vPos.x;
      v14 = rect.y + v11->vPos.y;
      v15 = psv->pOwner;
      v16 = v15->vPos.x;
      if ( v16 < v13 )
        return 0;
      if ( (float)(rect.w + v13) < v16 )
        return 0;
      y = v15->vPos.y;
      if ( v14 < y || y < (float)(v14 - rect.h) )
        return 0;
      center.x = v15->vPos.x;
      center.y = y;
      *(_QWORD *)&center.w = 0i64;
    }
  }
  else if ( psv->pParent->xPerfectMutekiCount.value
         || !Collision::AttackHitFlagJudge(iTargetFlag, atk, psv)
         || !Collision::HitRectWork::IsIntersect((Collision::HitRectWork *)atk, psv, &center) )
  {
    return 0;
  }
  atk->pOwner->SetActionBranchKey(atk->pOwner, atk->data.atk.iActionBranchKey);
  if ( atk->data.atk.iDataType != 6 )
  {
    Instance = DamageSetControl::GetInstance();
    DamageSetControl::PlayerAttackDamage(Instance, atk, psv, &center, NORMAL);
  }
  atk->pOwner->SetAttackGroupID(atk->pOwner, atk->iGroupID);
  return 1;
}

char __fastcall Collision::CatchVsPlayer(
        const Collision::HitRectWork *atk,
        const Collision::HitRectWork *psv,
        Collision::HitRect *centerRect)
{
  ActorChara *pParent; // rcx
  int iTargetFlag; // esi
  ActorObject *v9; // rcx
  const Collision::HitRect *v10; // rax
  ActorObject *pOwner; // rax
  float v12; // xmm2_4
  float x; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  ActorObject *v16; // rax
  float v17; // xmm3_4
  float y; // xmm0_4
  Collision::HitRect rect; // [rsp+30h] [rbp-18h]

  if ( atk->pOwner->IsAttackGroupID(atk->pOwner, atk->iGroupID) )
    return 0;
  if ( !atk->pParent )
    return 0;
  pParent = psv->pParent;
  if ( !pParent
    || pParent->IsAirAtkDamage(pParent)
    && psv->pParent->IsNokezori(psv->pParent)
    && (atk->data.atk.iAttackFlag & 0x8000) == 0 )
  {
    return 0;
  }
  iTargetFlag = atk->data.atk.iTargetFlag;
  if ( !iTargetFlag )
    iTargetFlag = Collision::ciDefaultAttackTargetFlag[atk->data.atk.iDataType];
  if ( psv->type == REVERSAL )
  {
    if ( (iTargetFlag & 0xA) == 0 )
      return 0;
  }
  else if ( (iTargetFlag & 5) == 0 )
  {
    return 0;
  }
  if ( !Collision::AttackDirectionJudge(atk->pOwner, psv->pOwner, atk->data.atk.iDirectionAttr)
    || !Collision::AttackTargetStateJudge(atk, psv) )
  {
    return 0;
  }
  if ( psv->type == REVERSAL )
  {
    if ( (iTargetFlag & 2) == 0
      || (v9 = psv->pOwner, v9->bodyPush.iRectID <= 0)
      || (v10 = (const Collision::HitRect *)((__int64 (__fastcall *)(ActorObject *))v9->GetHitRect)(v9)) == 0i64
      || !Collision::HitRectWork::IsIntersect(
            (Collision::HitRectWork *)atk,
            v10,
            psv->pOwner,
            centerRect,
            psv->pOwner->bodyPush.iBindIndex,
            psv->pOwner->bodyPush.iFlag & 0x10000) )
    {
      if ( (iTargetFlag & 8) == 0 )
        return 0;
      pOwner = atk->pOwner;
      rect = atk->rect;
      LODWORD(v12) = *(_QWORD *)&atk->rect.w;
      x = rect.x;
      if ( pOwner->iCAngle )
        x = COERCE_FLOAT(LODWORD(rect.x) ^ _xmm) - v12;
      v14 = x + pOwner->vPos.x;
      v15 = rect.y + pOwner->vPos.y;
      v16 = psv->pOwner;
      v17 = v16->vPos.x;
      if ( v17 < v14 )
        return 0;
      if ( (float)(v12 + v14) < v17 )
        return 0;
      y = v16->vPos.y;
      if ( v15 < y || y < (float)(v15 - rect.h) )
        return 0;
      centerRect->x = v17;
      *(_QWORD *)&centerRect->w = 0i64;
      centerRect->y = y;
    }
  }
  else if ( psv->pParent->xThrowMutekiCount.value
         || !Collision::CatchHitFlagJudge(iTargetFlag, atk, psv)
         || !Collision::HitRectWork::IsIntersect((Collision::HitRectWork *)atk, psv, centerRect) )
  {
    return 0;
  }
  return 1;
}

void __fastcall DamageSetControl::DamageSet(DamageSetControl *this)
{
  DamageSetControl *v1; // rdi
  ActorChara **p_pParent; // rbx
  int v3; // eax

  v1 = this + 1;
  if ( this != &this[1] )
  {
    p_pParent = &this->dmgSet[0].atk.pParent;
    do
    {
      if ( p_pParent[123] )
      {
        if ( *p_pParent )
          (*p_pParent)->damageInfo.bEnableAdvantageFrame = 0;
        v3 = *((_DWORD *)p_pParent + 248);
        if ( v3 >= 0 )
        {
          if ( v3 <= 3 )
          {
            DamageSetting::PlayerDamageSetting((DamageSetting *)(p_pParent - 3));
          }
          else if ( v3 == 5 )
          {
            DamageSetting::PlayerCatchSetting((DamageSetting *)(p_pParent - 3));
          }
        }
      }
      p_pParent += 128;
    }
    while ( p_pParent - 3 != (ActorChara **)v1 );
  }
}

void __fastcall DamageSetControl::GetInstance()
{
  DamageSetControl *v0; // rax
  DamageSetControl *v1; // [rsp+30h] [rbp+8h]

  if ( !DamageSetControl::instance )
  {
    v1 = (DamageSetControl *)operator new(0x800ui64);
    DamageSetControl::DamageSetControl(v1);
    DamageSetControl::instance = v0;
  }
}

Collision::HitRectCollection *__fastcall Collision::HitRectCollection::GetInstance(int i)
{
  __int64 v1; // rdi
  Collision::HitRectCollection *v2; // rbx
  _QWORD *v3; // rax

  v1 = i;
  v2 = Collision::HitRectCollection::instance;
  if ( !Collision::HitRectCollection::instance )
  {
    v3 = operator new[](0xF8ui64);
    if ( v3 )
    {
      *v3 = 2i64;
      v2 = (Collision::HitRectCollection *)(v3 + 1);
      `eh vector constructor iterator'(
        v3 + 1,
        0x78ui64,
        2ui64,
        (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
        (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
    }
    else
    {
      v2 = 0i64;
    }
    Collision::HitRectCollection::instance = v2;
  }
  return &v2[v1];
}

char __fastcall Collision::GuardRangeVsCenter(const Collision::HitRectWork *atk, ActorChara *actor)
{
  ActorObject *pOwner; // rax
  float v3; // xmm0_4
  float v4; // xmm0_4
  float x; // xmm2_4
  std::bitset<61>::reference *v6; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( atk->data.atk.iSkillType == 4 )
    return 0;
  result = (std::bitset<61>::reference)atk->rect;
  pOwner = atk->pOwner;
  v3 = *(float *)&result._Pbitset;
  if ( pOwner->iCAngle )
    v3 = COERCE_FLOAT(LODWORD(result._Pbitset) ^ _xmm) - *(float *)&result._Mypos;
  v4 = v3 + pOwner->vPos.x;
  x = actor->vPos.x;
  if ( v4 > x || x > (float)(*(float *)&result._Mypos + v4) )
    return 0;
  v6 = std::bitset<21>::operator[]((std::bitset<61> *)&actor->systemFlag, &result, 8ui64);
  Mypos = v6->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v6->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (v6->_Mypos & 0x3F);
  return 1;
}

void __fastcall Collision::PlayerAtemiCheck(Collision *this)
{
  int v1; // ecx
  __int64 v2; // rax
  __int64 v3; // rdi
  Collision::HitRectCollection *v4; // rbx
  __int64 v5; // r12
  _QWORD *v6; // rax
  char *v7; // r13
  _QWORD *v8; // rax
  char *v9; // r15
  __int64 v10; // rbp
  const Collision::HitRectWork *v11; // rdi
  const Collision::HitRectWork *v12; // rbp
  ActorObject *pOwner; // rbx
  __int64 v14; // rsi
  const Collision::HitRectWork *v15; // rbx
  const Collision::HitRectWork *v16; // rsi
  ActorObject *v17; // r14
  __int64 v18; // rbp
  const Collision::HitRectWork *v19; // rdi
  const Collision::HitRectWork *v20; // rbp
  ActorObject *v21; // rbx
  __int64 v22; // rsi
  const Collision::HitRectWork *v23; // rbx
  const Collision::HitRectWork *v24; // rsi
  ActorObject *v25; // r14
  int v26; // [rsp+90h] [rbp+8h]
  __int64 v27; // [rsp+98h] [rbp+10h]
  __int64 v28; // [rsp+A0h] [rbp+18h]

  v1 = 0;
  v2 = 0i64;
  v3 = 0i64;
  v27 = 0i64;
  v4 = Collision::HitRectCollection::instance;
  do
  {
    v26 = ++v1;
    v28 = ++v2;
    if ( v2 < 2 )
    {
      v5 = v3 + 120;
      do
      {
        if ( !v4 )
        {
          v6 = operator new[](0xF8ui64);
          if ( v6 )
          {
            *v6 = 2i64;
            v4 = (Collision::HitRectCollection *)(v6 + 1);
            `eh vector constructor iterator'(
              v6 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v4 = 0i64;
          }
          Collision::HitRectCollection::instance = v4;
        }
        v7 = (char *)v4 + v3;
        if ( !v4 )
        {
          v8 = operator new[](0xF8ui64);
          if ( v8 )
          {
            *v8 = 2i64;
            v4 = (Collision::HitRectCollection *)(v8 + 1);
            `eh vector constructor iterator'(
              v8 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v4 = 0i64;
          }
          Collision::HitRectCollection::instance = v4;
        }
        v9 = (char *)v4 + v5;
        v10 = *((_QWORD *)v7 + 9);
        v11 = *(const Collision::HitRectWork **)(v10 + 8);
        v12 = *(const Collision::HitRectWork **)(v10 + 16);
        if ( v11 != v12 )
        {
          while ( 1 )
          {
            pOwner = v11->pOwner;
            if ( pOwner->GetActorType(pOwner) == CHARA || (pOwner->bsCollisionFlag._Array[0] & 0xA8) == 0 )
            {
              v14 = *((_QWORD *)v9 + 5);
              v15 = *(const Collision::HitRectWork **)(v14 + 8);
              v16 = *(const Collision::HitRectWork **)(v14 + 16);
              if ( v15 != v16 )
                break;
            }
LABEL_23:
            if ( ++v11 == v12 )
              goto LABEL_24;
          }
          while ( 1 )
          {
            v17 = v15->pOwner;
            if ( (v17->GetActorType(v17) == CHARA || (v17->bsCollisionFlag._Array[0] & 0xA8) == 0)
              && (v15->pOwner->IsInvalidHitCheck(v15->pOwner) || Collision::AttackVsGuardPoint(v11, v15)) )
            {
              break;
            }
            if ( ++v15 == v16 )
              goto LABEL_23;
          }
LABEL_24:
          v4 = Collision::HitRectCollection::instance;
        }
        v18 = *((_QWORD *)v9 + 9);
        v19 = *(const Collision::HitRectWork **)(v18 + 8);
        v20 = *(const Collision::HitRectWork **)(v18 + 16);
        if ( v19 != v20 )
        {
          while ( 1 )
          {
            v21 = v19->pOwner;
            if ( v21->GetActorType(v21) == CHARA || (v21->bsCollisionFlag._Array[0] & 0xA8) == 0 )
            {
              v22 = *((_QWORD *)v7 + 5);
              v23 = *(const Collision::HitRectWork **)(v22 + 8);
              v24 = *(const Collision::HitRectWork **)(v22 + 16);
              if ( v23 != v24 )
                break;
            }
LABEL_34:
            if ( ++v19 == v20 )
              goto LABEL_35;
          }
          while ( 1 )
          {
            v25 = v23->pOwner;
            if ( (v25->GetActorType(v25) == CHARA || (v25->bsCollisionFlag._Array[0] & 0xA8) == 0)
              && (v23->pOwner->IsInvalidHitCheck(v23->pOwner) || Collision::AttackVsGuardPoint(v19, v23)) )
            {
              break;
            }
            if ( ++v23 == v24 )
              goto LABEL_34;
          }
LABEL_35:
          v4 = Collision::HitRectCollection::instance;
        }
        v5 += 120i64;
        v3 = v27;
      }
      while ( v5 < 240 );
      v2 = v28;
      v1 = v26;
    }
    v3 += 120i64;
    v27 = v3;
  }
  while ( v2 < 2 );
}

void __fastcall Collision::PlayerAttackCheck(Collision *this)
{
  int v1; // ecx
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r12
  _QWORD *v5; // rax
  Collision::HitRectCollection *v6; // rbx
  _QWORD *v7; // r13
  _QWORD *v8; // rax
  Collision::HitRectCollection *v9; // rbx
  _QWORD *v10; // r15
  __int64 v11; // rdi
  const Collision::HitRectWork *v12; // rbp
  const Collision::HitRectWork *i; // rdi
  ActorObject *pOwner; // rbx
  __int64 v15; // rbx
  const Collision::HitRectWork *v16; // rsi
  const Collision::HitRectWork *j; // rbx
  ActorObject *v18; // r14
  __int64 v19; // rdi
  const Collision::HitRectWork *v20; // rbp
  const Collision::HitRectWork *k; // rdi
  ActorObject *v22; // rbx
  __int64 v23; // rbx
  const Collision::HitRectWork *v24; // rsi
  const Collision::HitRectWork *m; // rbx
  __int64 v26; // rdi
  const Collision::HitRectWork *v27; // rbp
  const Collision::HitRectWork *n; // rdi
  ActorObject *v29; // rbx
  __int64 v30; // rbx
  const Collision::HitRectWork *v31; // rsi
  const Collision::HitRectWork *ii; // rbx
  ActorObject *v33; // r14
  __int64 v34; // rdi
  const Collision::HitRectWork *v35; // rbp
  const Collision::HitRectWork *jj; // rdi
  ActorObject *v37; // rbx
  __int64 v38; // rbx
  const Collision::HitRectWork *v39; // rsi
  const Collision::HitRectWork *kk; // rbx
  int v41; // [rsp+90h] [rbp+8h]
  __int64 v42; // [rsp+98h] [rbp+10h]
  __int64 v43; // [rsp+A0h] [rbp+18h]

  v1 = 0;
  v2 = 0i64;
  v3 = 0i64;
  v42 = 0i64;
  do
  {
    v41 = ++v1;
    v43 = ++v2;
    if ( v2 < 2 )
    {
      v4 = v3 + 120;
      do
      {
        if ( !Collision::HitRectCollection::instance )
        {
          v5 = operator new[](0xF8ui64);
          if ( v5 )
          {
            *v5 = 2i64;
            v6 = (Collision::HitRectCollection *)(v5 + 1);
            `eh vector constructor iterator'(
              v5 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v6 = 0i64;
          }
          Collision::HitRectCollection::instance = v6;
        }
        v7 = (_QWORD *)((char *)Collision::HitRectCollection::instance + v3);
        if ( !Collision::HitRectCollection::instance )
        {
          v8 = operator new[](0xF8ui64);
          if ( v8 )
          {
            *v8 = 2i64;
            v9 = (Collision::HitRectCollection *)(v8 + 1);
            `eh vector constructor iterator'(
              v8 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v9 = 0i64;
          }
          Collision::HitRectCollection::instance = v9;
        }
        v10 = (_QWORD *)((char *)Collision::HitRectCollection::instance + v4);
        v11 = v7[9];
        v12 = *(const Collision::HitRectWork **)(v11 + 16);
        for ( i = *(const Collision::HitRectWork **)(v11 + 8); i != v12; ++i )
        {
          pOwner = i->pOwner;
          if ( pOwner->GetActorType(pOwner) == CHARA || (pOwner->bsCollisionFlag._Array[0] & 0xA8) == 0 )
          {
            v15 = v10[1];
            v16 = *(const Collision::HitRectWork **)(v15 + 16);
            for ( j = *(const Collision::HitRectWork **)(v15 + 8); j != v16; ++j )
            {
              if ( !j->pOwner->IsInvalidHitCheck(j->pOwner) )
              {
                v18 = j->pOwner;
                if ( v18->GetActorType(v18) == CHARA || (v18->bsCollisionFlag._Array[0] & 0xA8) == 0 )
                  Collision::AttackVsPlayer(i, j);
              }
            }
          }
        }
        v19 = v7[14];
        v20 = *(const Collision::HitRectWork **)(v19 + 16);
        for ( k = *(const Collision::HitRectWork **)(v19 + 8); k != v20; ++k )
        {
          v22 = k->pOwner;
          if ( v22->GetActorType(v22) == CHARA || (v22->bsCollisionFlag._Array[0] & 0xA8) == 0 )
          {
            v23 = v10[1];
            v24 = *(const Collision::HitRectWork **)(v23 + 16);
            for ( m = *(const Collision::HitRectWork **)(v23 + 8); m != v24; ++m )
              Collision::AttackVsPlayer(k, m);
          }
        }
        v26 = v10[9];
        v27 = *(const Collision::HitRectWork **)(v26 + 16);
        for ( n = *(const Collision::HitRectWork **)(v26 + 8); n != v27; ++n )
        {
          v29 = n->pOwner;
          if ( v29->GetActorType(v29) == CHARA || (v29->bsCollisionFlag._Array[0] & 0xA8) == 0 )
          {
            v30 = v7[1];
            v31 = *(const Collision::HitRectWork **)(v30 + 16);
            for ( ii = *(const Collision::HitRectWork **)(v30 + 8); ii != v31; ++ii )
            {
              if ( !ii->pOwner->IsInvalidHitCheck(ii->pOwner) )
              {
                v33 = ii->pOwner;
                if ( v33->GetActorType(v33) == CHARA || (v33->bsCollisionFlag._Array[0] & 0xA8) == 0 )
                  Collision::AttackVsPlayer(n, ii);
              }
            }
          }
        }
        v34 = v10[14];
        v35 = *(const Collision::HitRectWork **)(v34 + 16);
        for ( jj = *(const Collision::HitRectWork **)(v34 + 8); jj != v35; ++jj )
        {
          v37 = jj->pOwner;
          if ( v37->GetActorType(v37) == CHARA || (v37->bsCollisionFlag._Array[0] & 0xA8) == 0 )
          {
            v38 = v7[1];
            v39 = *(const Collision::HitRectWork **)(v38 + 16);
            for ( kk = *(const Collision::HitRectWork **)(v38 + 8); kk != v39; ++kk )
              Collision::AttackVsPlayer(jj, kk);
          }
        }
        v4 += 120i64;
        v3 = v42;
      }
      while ( v4 < 240 );
      v2 = v43;
      v1 = v41;
    }
    v3 += 120i64;
    v42 = v3;
  }
  while ( v2 < 2 );
}

void __fastcall Collision::PlayerCatchCheck(ActionSystem *actSys)
{
  const Collision::HitRectWork *v1; // r12
  const Collision::HitRectWork *v2; // rsi
  BattleSystem::BattleController *v3; // rax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rdi
  _QWORD *v8; // rax
  Collision::HitRectCollection *v9; // rbx
  char *v10; // r15
  _QWORD *v11; // rax
  Collision::HitRectCollection *v12; // rbx
  char *v13; // r13
  __int64 v14; // rbp
  const Collision::HitRectWork *v15; // rdi
  const Collision::HitRectWork *v16; // rbp
  ActorObject *pOwner; // rbx
  __int64 v18; // rsi
  const Collision::HitRectWork *v19; // rbx
  const Collision::HitRectWork *v20; // rsi
  ActorObject *v21; // r14
  int iSkillType; // eax
  int v23; // ecx
  __int64 v24; // rbp
  const Collision::HitRectWork *v25; // rdi
  const Collision::HitRectWork *v26; // rbp
  ActorObject *v27; // rbx
  __int64 v28; // rsi
  const Collision::HitRectWork *v29; // rbx
  const Collision::HitRectWork *v30; // rsi
  ActorObject *v31; // r14
  int v32; // eax
  int v33; // ecx
  DamageSetControl *v34; // rax
  const Collision::HitRectWork *v35; // [rsp+30h] [rbp-98h]
  __int64 v36; // [rsp+38h] [rbp-90h]
  __int64 v37; // [rsp+40h] [rbp-88h]
  __int64 v38; // [rsp+48h] [rbp-80h]
  Collision::HitRect centerRect; // [rsp+68h] [rbp-60h] BYREF
  BattleSystem::BattleController *v40; // [rsp+D0h] [rbp+8h]
  int v41; // [rsp+D0h] [rbp+8h]
  DamageSetControl *v42; // [rsp+D0h] [rbp+8h]
  unsigned int uiSystemCount; // [rsp+D8h] [rbp+10h]
  int v44; // [rsp+E0h] [rbp+18h]
  int v45; // [rsp+E8h] [rbp+20h]

  v1 = 0i64;
  v2 = 0i64;
  v35 = 0i64;
  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v40 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v40);
    BattleSystem::BattleController::instance = v3;
  }
  uiSystemCount = v3->uiSystemCount;
  v4 = 0;
  v44 = 0;
  v5 = 0i64;
  v6 = 0i64;
  v36 = 0i64;
  do
  {
    v45 = ++v4;
    v41 = v4;
    v38 = ++v5;
    if ( v5 < 2 )
    {
      v7 = v6 + 120;
      v37 = v6 + 120;
      do
      {
        if ( !Collision::HitRectCollection::instance )
        {
          v8 = operator new[](0xF8ui64);
          if ( v8 )
          {
            *v8 = 2i64;
            v9 = (Collision::HitRectCollection *)(v8 + 1);
            `eh vector constructor iterator'(
              v8 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v9 = 0i64;
          }
          Collision::HitRectCollection::instance = v9;
        }
        v10 = (char *)Collision::HitRectCollection::instance + v6;
        if ( !Collision::HitRectCollection::instance )
        {
          v11 = operator new[](0xF8ui64);
          if ( v11 )
          {
            *v11 = 2i64;
            v12 = (Collision::HitRectCollection *)(v11 + 1);
            `eh vector constructor iterator'(
              v11 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v12 = 0i64;
          }
          Collision::HitRectCollection::instance = v12;
        }
        v13 = (char *)Collision::HitRectCollection::instance + v7;
        v14 = *(__int64 *)((char *)&Collision::HitRectCollection::instance->pRectList[2]._Mypair._Myval2 + v7);
        v15 = *(const Collision::HitRectWork **)(v14 + 8);
        v16 = *(const Collision::HitRectWork **)(v14 + 16);
        if ( v15 != v16 )
        {
          while ( 1 )
          {
            pOwner = v15->pOwner;
            if ( pOwner->GetActorType(pOwner) == CHARA || (pOwner->bsCollisionFlag._Array[0] & 0xA8) == 0 )
            {
              if ( v15->pOwner->IsInvalidHitCheck(v15->pOwner) )
                goto LABEL_32;
              v18 = *((_QWORD *)v10 + 11);
              v19 = *(const Collision::HitRectWork **)(v18 + 8);
              v20 = *(const Collision::HitRectWork **)(v18 + 16);
              if ( v19 != v20 )
                break;
            }
LABEL_25:
            if ( ++v15 == v16 )
              goto LABEL_32;
          }
          while ( 1 )
          {
            v21 = v19->pOwner;
            if ( v21->GetActorType(v21) == CHARA || (v21->bsCollisionFlag._Array[0] & 0xA8) == 0 )
            {
              if ( Collision::CatchVsPlayer(v19, v15, &centerRect) )
                break;
            }
            if ( ++v19 == v20 )
              goto LABEL_25;
          }
          if ( !v1
            || (iSkillType = v19->data.atk.iSkillType, v23 = v1->data.atk.iSkillType, iSkillType > v23)
            || iSkillType == v23 && (uiSystemCount & 1) == v44 )
          {
            v1 = v19;
            v2 = v15;
            v35 = v15;
            goto $EXIT_CATCH_JUDGE1;
          }
LABEL_32:
          v2 = v35;
        }
$EXIT_CATCH_JUDGE1:
        v24 = *((_QWORD *)v10 + 2);
        v25 = *(const Collision::HitRectWork **)(v24 + 8);
        v26 = *(const Collision::HitRectWork **)(v24 + 16);
        if ( v25 != v26 )
        {
          while ( 1 )
          {
            v27 = v25->pOwner;
            if ( v27->GetActorType(v27) == CHARA || (v27->bsCollisionFlag._Array[0] & 0xA8) == 0 )
            {
              if ( v25->pOwner->IsInvalidHitCheck(v25->pOwner) )
                goto LABEL_49;
              v28 = *((_QWORD *)v13 + 11);
              v29 = *(const Collision::HitRectWork **)(v28 + 8);
              v30 = *(const Collision::HitRectWork **)(v28 + 16);
              if ( v29 != v30 )
                break;
            }
LABEL_42:
            if ( ++v25 == v26 )
              goto LABEL_49;
          }
          while ( 1 )
          {
            v31 = v29->pOwner;
            if ( v31->GetActorType(v31) == CHARA || (v31->bsCollisionFlag._Array[0] & 0xA8) == 0 )
            {
              if ( Collision::CatchVsPlayer(v29, v25, &centerRect) )
                break;
            }
            if ( ++v29 == v30 )
              goto LABEL_42;
          }
          if ( !v1
            || (v32 = v29->data.atk.iSkillType, v33 = v1->data.atk.iSkillType, v32 > v33)
            || v32 == v33 && (uiSystemCount & 1) == v41 )
          {
            v1 = v29;
            v2 = v25;
            v35 = v25;
            goto $EXIT_CATCH_JUDGE2;
          }
LABEL_49:
          v2 = v35;
        }
$EXIT_CATCH_JUDGE2:
        ++v41;
        v7 = v37 + 120;
        v37 = v7;
        v6 = v36;
      }
      while ( v7 < 240 );
      v5 = v38;
      v4 = v45;
    }
    v44 = v4;
    v6 += 120i64;
    v36 = v6;
  }
  while ( v5 < 2 );
  if ( v1 )
  {
    v1->pOwner->SetActionBranchKey(v1->pOwner, v1->data.atk.iActionBranchKey);
    v34 = DamageSetControl::instance;
    if ( !DamageSetControl::instance )
    {
      v42 = (DamageSetControl *)operator new(0x800ui64);
      DamageSetControl::DamageSetControl(v42);
      DamageSetControl::instance = v34;
    }
    DamageSetControl::PlayerCatchDamage(v34, v1, v2, &centerRect);
    v1->pOwner->SetAttackGroupID(v1->pOwner, v1->iGroupID);
  }
}

void __fastcall Collision::PlayerGuardCheck(Collision *this)
{
  int v1; // ecx
  __int64 v2; // rax
  __int64 v3; // r13
  Collision::HitRectCollection *v4; // rbx
  __int64 v5; // r12
  _QWORD *v6; // rax
  Collision::HitRectCollection *v7; // r15
  _QWORD *v8; // rax
  char *v9; // r14
  Collision::HitRectList *Myval2; // rbp
  const Collision::HitRectWork *Myfirst; // rdi
  const Collision::HitRectWork *Mylast; // rbp
  ActorObject *pOwner; // rbx
  __int64 v14; // rsi
  const Collision::HitRectWork *v15; // rbx
  const Collision::HitRectWork *v16; // rsi
  __int64 v17; // rbp
  const Collision::HitRectWork *v18; // rdi
  const Collision::HitRectWork *v19; // rbp
  ActorObject *v20; // rbx
  Collision::HitRectList *v21; // rsi
  const Collision::HitRectWork *v22; // rbx
  const Collision::HitRectWork *v23; // rsi
  int v24; // [rsp+90h] [rbp+8h]
  __int64 v25; // [rsp+98h] [rbp+10h]

  v1 = 0;
  v2 = 0i64;
  v3 = 0i64;
  v4 = Collision::HitRectCollection::instance;
  do
  {
    v24 = ++v1;
    v25 = ++v2;
    if ( v2 < 2 )
    {
      v5 = v3 * 120 + 120;
      do
      {
        if ( !v4 )
        {
          v6 = operator new[](0xF8ui64);
          if ( v6 )
          {
            *v6 = 2i64;
            v4 = (Collision::HitRectCollection *)(v6 + 1);
            `eh vector constructor iterator'(
              v6 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v4 = 0i64;
          }
          Collision::HitRectCollection::instance = v4;
        }
        v7 = &v4[v3];
        if ( !v4 )
        {
          v8 = operator new[](0xF8ui64);
          if ( v8 )
          {
            *v8 = 2i64;
            v4 = (Collision::HitRectCollection *)(v8 + 1);
            `eh vector constructor iterator'(
              v8 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v4 = 0i64;
          }
          Collision::HitRectCollection::instance = v4;
        }
        v9 = (char *)v4 + v5;
        Myval2 = v7->pRectList[9]._Mypair._Myval2;
        Myfirst = Myval2->rectList._Mypair._Myval2._Myfirst;
        Mylast = Myval2->rectList._Mypair._Myval2._Mylast;
        if ( Myfirst != Mylast )
        {
          while ( 1 )
          {
            pOwner = Myfirst->pOwner;
            if ( pOwner->GetActorType(pOwner) == CHARA || (pOwner->bsCollisionFlag._Array[0] & 0xA8) == 0 )
            {
              v14 = *((_QWORD *)v9 + 3);
              v15 = *(const Collision::HitRectWork **)(v14 + 8);
              v16 = *(const Collision::HitRectWork **)(v14 + 16);
              if ( v15 != v16 )
                break;
            }
LABEL_21:
            if ( ++Myfirst == Mylast )
              goto LABEL_22;
          }
          while ( !v15->pOwner->IsInvalidHitCheck(v15->pOwner) && !Collision::AttackVsGuard(Myfirst, v15) )
          {
            if ( ++v15 == v16 )
              goto LABEL_21;
          }
LABEL_22:
          v4 = Collision::HitRectCollection::instance;
        }
        v17 = *((_QWORD *)v9 + 9);
        v18 = *(const Collision::HitRectWork **)(v17 + 8);
        v19 = *(const Collision::HitRectWork **)(v17 + 16);
        if ( v18 != v19 )
        {
          while ( 1 )
          {
            v20 = v18->pOwner;
            if ( v20->GetActorType(v20) == CHARA || (v20->bsCollisionFlag._Array[0] & 0xA8) == 0 )
            {
              v21 = v7->pRectList[3]._Mypair._Myval2;
              v22 = v21->rectList._Mypair._Myval2._Myfirst;
              v23 = v21->rectList._Mypair._Myval2._Mylast;
              if ( v22 != v23 )
                break;
            }
LABEL_30:
            if ( ++v18 == v19 )
              goto LABEL_31;
          }
          while ( !v22->pOwner->IsInvalidHitCheck(v22->pOwner) && !Collision::AttackVsGuard(v18, v22) )
          {
            if ( ++v22 == v23 )
              goto LABEL_30;
          }
LABEL_31:
          v4 = Collision::HitRectCollection::instance;
        }
        v5 += 120i64;
      }
      while ( v5 < 240 );
      v2 = v25;
      v1 = v24;
    }
    ++v3;
  }
  while ( v2 < 2 );
}

void __fastcall Collision::PlayerGuardPointCheck(Collision *this)
{
  int v1; // ecx
  __int64 v2; // rax
  __int64 v3; // rdi
  Collision::HitRectCollection *v4; // rbx
  __int64 v5; // r12
  _QWORD *v6; // rax
  char *v7; // r13
  _QWORD *v8; // rax
  char *v9; // r15
  __int64 v10; // rbp
  const Collision::HitRectWork *v11; // rdi
  const Collision::HitRectWork *v12; // rbp
  ActorObject *pOwner; // rbx
  __int64 v14; // rsi
  const Collision::HitRectWork *v15; // rbx
  const Collision::HitRectWork *v16; // rsi
  ActorObject *v17; // r14
  __int64 v18; // rbp
  const Collision::HitRectWork *v19; // rdi
  const Collision::HitRectWork *v20; // rbp
  ActorObject *v21; // rbx
  __int64 v22; // rsi
  const Collision::HitRectWork *v23; // rbx
  const Collision::HitRectWork *v24; // rsi
  ActorObject *v25; // r14
  int v26; // [rsp+90h] [rbp+8h]
  __int64 v27; // [rsp+98h] [rbp+10h]
  __int64 v28; // [rsp+A0h] [rbp+18h]

  v1 = 0;
  v2 = 0i64;
  v3 = 0i64;
  v27 = 0i64;
  v4 = Collision::HitRectCollection::instance;
  do
  {
    v26 = ++v1;
    v28 = ++v2;
    if ( v2 < 2 )
    {
      v5 = v3 + 120;
      do
      {
        if ( !v4 )
        {
          v6 = operator new[](0xF8ui64);
          if ( v6 )
          {
            *v6 = 2i64;
            v4 = (Collision::HitRectCollection *)(v6 + 1);
            `eh vector constructor iterator'(
              v6 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v4 = 0i64;
          }
          Collision::HitRectCollection::instance = v4;
        }
        v7 = (char *)v4 + v3;
        if ( !v4 )
        {
          v8 = operator new[](0xF8ui64);
          if ( v8 )
          {
            *v8 = 2i64;
            v4 = (Collision::HitRectCollection *)(v8 + 1);
            `eh vector constructor iterator'(
              v8 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v4 = 0i64;
          }
          Collision::HitRectCollection::instance = v4;
        }
        v9 = (char *)v4 + v5;
        v10 = *((_QWORD *)v7 + 9);
        v11 = *(const Collision::HitRectWork **)(v10 + 8);
        v12 = *(const Collision::HitRectWork **)(v10 + 16);
        if ( v11 != v12 )
        {
          while ( 1 )
          {
            pOwner = v11->pOwner;
            if ( pOwner->GetActorType(pOwner) == CHARA || (pOwner->bsCollisionFlag._Array[0] & 0xA8) == 0 )
            {
              v14 = *((_QWORD *)v9 + 4);
              v15 = *(const Collision::HitRectWork **)(v14 + 8);
              v16 = *(const Collision::HitRectWork **)(v14 + 16);
              if ( v15 != v16 )
                break;
            }
LABEL_23:
            if ( ++v11 == v12 )
              goto LABEL_24;
          }
          while ( 1 )
          {
            v17 = v15->pOwner;
            if ( (v17->GetActorType(v17) == CHARA || (v17->bsCollisionFlag._Array[0] & 0xA8) == 0)
              && (v15->pOwner->IsInvalidHitCheck(v15->pOwner) || Collision::AttackVsGuardPoint(v11, v15)) )
            {
              break;
            }
            if ( ++v15 == v16 )
              goto LABEL_23;
          }
LABEL_24:
          v4 = Collision::HitRectCollection::instance;
        }
        v18 = *((_QWORD *)v9 + 9);
        v19 = *(const Collision::HitRectWork **)(v18 + 8);
        v20 = *(const Collision::HitRectWork **)(v18 + 16);
        if ( v19 != v20 )
        {
          while ( 1 )
          {
            v21 = v19->pOwner;
            if ( v21->GetActorType(v21) == CHARA || (v21->bsCollisionFlag._Array[0] & 0xA8) == 0 )
            {
              v22 = *((_QWORD *)v7 + 4);
              v23 = *(const Collision::HitRectWork **)(v22 + 8);
              v24 = *(const Collision::HitRectWork **)(v22 + 16);
              if ( v23 != v24 )
                break;
            }
LABEL_34:
            if ( ++v19 == v20 )
              goto LABEL_35;
          }
          while ( 1 )
          {
            v25 = v23->pOwner;
            if ( (v25->GetActorType(v25) == CHARA || (v25->bsCollisionFlag._Array[0] & 0xA8) == 0)
              && (v23->pOwner->IsInvalidHitCheck(v23->pOwner) || Collision::AttackVsGuardPoint(v19, v23)) )
            {
              break;
            }
            if ( ++v23 == v24 )
              goto LABEL_34;
          }
LABEL_35:
          v4 = Collision::HitRectCollection::instance;
        }
        v5 += 120i64;
        v3 = v27;
      }
      while ( v5 < 240 );
      v2 = v28;
      v1 = v26;
    }
    v3 += 120i64;
    v27 = v3;
  }
  while ( v2 < 2 );
}

void __fastcall Collision::PlayerGuardRangeCheck(ActionSystem *actSys)
{
  ActionSystem *v1; // r9
  int v2; // ecx
  __int64 v3; // rax
  Collision::HitRectCollection *v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r12
  ActorChara **v9; // r8
  ActorChara *PlayerActor; // r15
  _QWORD *v11; // rax
  char *v12; // rbx
  ActorChara *v13; // rbp
  _QWORD *v14; // rax
  Collision::HitRectCollection *v15; // r14
  __int64 v16; // rbx
  const Collision::HitRectWork *v17; // rdi
  const Collision::HitRectWork *v18; // rbx
  Collision::HitRectList *Myval2; // rbx
  const Collision::HitRectWork *Mylast; // rdi
  const Collision::HitRectWork *Myfirst; // rbx
  __int64 v22; // [rsp+30h] [rbp-78h]
  __int64 v23; // [rsp+38h] [rbp-70h]
  int v25; // [rsp+B8h] [rbp+10h]
  int v26; // [rsp+C0h] [rbp+18h]
  ActorChara **v27; // [rsp+C8h] [rbp+20h]

  v1 = actSys;
  v2 = 0;
  v25 = 0;
  v3 = 0i64;
  v4 = Collision::HitRectCollection::instance;
  do
  {
    v26 = v2 + 1;
    v5 = v3 + 1;
    v23 = v3 + 1;
    v6 = v3 + 1;
    if ( v3 + 1 < 2 )
    {
      v7 = 120 * v3;
      v22 = 120 * v3;
      v8 = v5;
      v27 = &v1->pPlayer[v3 + 1];
      do
      {
        PlayerActor = ActionSystem::GetPlayerActor(v1, v2);
        if ( !v4 )
        {
          v11 = operator new[](0xF8ui64);
          if ( v11 )
          {
            *v11 = 2i64;
            v4 = (Collision::HitRectCollection *)(v11 + 1);
            `eh vector constructor iterator'(
              v11 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v4 = 0i64;
          }
          Collision::HitRectCollection::instance = v4;
          v9 = v27;
        }
        v12 = (char *)v4 + v7;
        if ( v6 > 1 )
          v13 = 0i64;
        else
          v13 = *v9;
        if ( !v4 )
        {
          v14 = operator new[](0xF8ui64);
          if ( v14 )
          {
            *v14 = 2i64;
            v4 = (Collision::HitRectCollection *)(v14 + 1);
            `eh vector constructor iterator'(
              v14 + 1,
              0x78ui64,
              2ui64,
              (void (__fastcall *)(void *))Collision::HitRectCollection::HitRectCollection,
              (void (__fastcall *)(void *))Collision::HitRectCollection::~HitRectCollection);
          }
          else
          {
            v4 = 0i64;
          }
          Collision::HitRectCollection::instance = v4;
        }
        v15 = &v4[v8];
        v16 = *((_QWORD *)v12 + 13);
        v17 = *(const Collision::HitRectWork **)(v16 + 16);
        v18 = *(const Collision::HitRectWork **)(v16 + 8);
        if ( v18 != v17 )
        {
          do
            Collision::GuardRangeVsCenter(v18++, v13);
          while ( v18 != v17 );
          v4 = Collision::HitRectCollection::instance;
        }
        Myval2 = v15->pRectList[13]._Mypair._Myval2;
        Mylast = Myval2->rectList._Mypair._Myval2._Mylast;
        Myfirst = Myval2->rectList._Mypair._Myval2._Myfirst;
        if ( Myfirst != Mylast )
        {
          do
            Collision::GuardRangeVsCenter(Myfirst++, PlayerActor);
          while ( Myfirst != Mylast );
          v4 = Collision::HitRectCollection::instance;
        }
        ++v6;
        ++v27;
        ++v8;
        v2 = v25;
        v7 = v22;
        v1 = actSys;
      }
      while ( v8 < 2 );
      v5 = v23;
    }
    v2 = v26;
    v25 = v26;
    v3 = v5;
  }
  while ( v26 < 2 );
}

void __fastcall Collision::PlayerReserveDamageCheck(ActionSystem *actSys)
{
  ActorChara **pPlayer; // r14
  __int64 i; // rsi
  ActorChara *v3; // rbx
  ActorChara *v4; // rdi
  __int64 v5; // r15
  OGLVec3 *v6; // rax
  ActorChara_vtbl *v7; // r8
  __int64 v8; // rax
  int v9; // xmm0_4
  __int128 v10; // xmm6
  __int64 v11; // rax
  Collision::HitRectWork::Data *p_data; // rcx
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  ActorChara_vtbl *v17; // rax
  __int64 v18; // rdx
  DamageSetControl *v19; // rax
  _QWORD centerRect[4]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h]
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  int v23; // [rsp+6Ch] [rbp-9Ch] BYREF
  Collision::HitRectWork psv; // [rsp+74h] [rbp-94h] BYREF
  Collision::HitRectWork atk; // [rsp+278h] [rbp+170h] BYREF

  pPlayer = actSys->pPlayer;
  for ( i = 0i64; i < 2; ++i )
  {
    if ( (unsigned __int64)i <= 1 )
    {
      v3 = *pPlayer;
      if ( *pPlayer )
      {
        if ( !v3->IsInvalidHitCheck(*pPlayer) )
        {
          v4 = v3->GetTargetActor(v3);
          if ( v4 )
          {
            if ( v3->damageReserve.iAtkID < 1 || !v3->damageReserve.iCondition || v3->IsStun(v3) )
            {
              v3->damageReserve = 0i64;
            }
            else if ( !v3->IsInvalidHitCheck(v3)
                   && ((v3->damageReserve.iCondition & 4) != 0 && v3->iActorStat == 49 && v3->bActionEnd
                    || (!v3->IsThrowDamaged(v3) || !v4->IsAttackThrow(v4))
                    && ((v3->damageReserve.iCondition & 1) != 0 && v3->IsWallHit(v3)
                     || (v3->damageReserve.iCondition & 2) != 0 && v3->IsLanding(v3) && (v3->iActFlg1 & 0x100) == 0)) )
            {
              v5 = (__int64)v4->GetAttackData(v4, v3->damageReserve.iAtkID);
              if ( v5 )
              {
                v6 = v3->GetCenterPosition(v3, (OGLVec3 *)&v22);
                v7 = v3->ActorCharaBase::ActorObject::Actor::__vftable;
                *(float *)&centerRect[1] = v6->x;
                v8 = (__int64)v7->GetCenterPosition(v3, (OGLVec3 *)&v23);
                centerRect[2] = 0x3F8000003F800000i64;
                v21 = 0i64;
                v9 = *(_DWORD *)(v8 + 4);
                LOWORD(v8) = v3->damageReserve.iAtkID;
                HIDWORD(centerRect[1]) = v9;
                v10 = *(_OWORD *)&centerRect[1];
                atk.type = COUNTER_HIT;
                atk.pParent = v4;
                atk.rect = *(Collision::HitRect *)&centerRect[1];
                atk.pOwner = v4;
                atk.iGroupID = 0;
                atk.iDataID = v8;
                memset(&atk.iFlag, 0, 0x1C8ui64);
                v11 = v5;
                p_data = &atk.data;
                v13 = 3i64;
                do
                {
                  p_data = (Collision::HitRectWork::Data *)((char *)p_data + 128);
                  v14 = *(_OWORD *)v11;
                  v11 += 128i64;
                  *(_OWORD *)((char *)&p_data[-1].hit + 324) = v14;
                  *(_OWORD *)((char *)&p_data[-1].hit + 340) = *(_OWORD *)(v11 - 112);
                  *(_OWORD *)((char *)&p_data[-1].hit + 356) = *(_OWORD *)(v11 - 96);
                  *(_OWORD *)((char *)&p_data[-1].hit + 372) = *(_OWORD *)(v11 - 80);
                  *(_OWORD *)((char *)&p_data[-1].hit + 388) = *(_OWORD *)(v11 - 64);
                  *(_OWORD *)((char *)&p_data[-1].hit + 404) = *(_OWORD *)(v11 - 48);
                  *(_OWORD *)((char *)&p_data[-1].hit + 420) = *(_OWORD *)(v11 - 32);
                  *(_OWORD *)((char *)&p_data[-1].hit + 436) = *(_OWORD *)(v11 - 16);
                  --v13;
                }
                while ( v13 );
                v15 = *(_OWORD *)v11;
                LODWORD(psv.rect.x) = 2;
                *(_OWORD *)&psv.rect.y = v10;
                *(ActorChara **)((char *)&psv.pParent + 4) = v3;
                *(_OWORD *)&p_data->atk.iDataType = v15;
                *(ActorObject **)((char *)&psv.pOwner + 4) = v3;
                v16 = *(_OWORD *)(v11 + 16);
                psv.iFlag = 0;
                *(_OWORD *)&p_data->hit.iBindIndex = v16;
                *((_OWORD *)&p_data->hit + 2) = *(_OWORD *)(v11 + 32);
                *((_OWORD *)&p_data->hit + 3) = *(_OWORD *)(v11 + 48);
                p_data->atk.guardData.iKnockBackFrame = *(_DWORD *)(v11 + 64);
                memset(&psv.data, 0, 0x1C8ui64);
                v17 = v4->ActorCharaBase::ActorObject::Actor::__vftable;
                v18 = *(unsigned int *)(v5 + 188);
                *(_OWORD *)&psv.data.hit.iRectAttr = 0i64;
                *(_QWORD *)&psv.data.hit.fPushRate = v21;
                v17->SetActionBranchKey(v4, v18);
                DamageSetControl::GetInstance();
                DamageSetControl::PlayerAttackDamage(
                  v19,
                  &atk,
                  (const Collision::HitRectWork *)&psv.rect,
                  (const Collision::HitRect *)&centerRect[1],
                  RESERVE_DAMAGE);
              }
            }
          }
        }
      }
    }
    ++pPlayer;
  }
}

void __fastcall Collision::PlayerThrowDamageCheck(Collision *this)
{
  int i; // esi
  Collision::HitRectList *Myval2; // rdi
  const Collision::HitRectWork *Myfirst; // rbx
  Collision::HitRectWork *j; // rdi
  ActorChara *pParent; // rcx
  __int64 v6; // rax
  DamageSetControl *v7; // rcx
  DamageSetControl *v8; // rax
  DamageSetControl *v9; // [rsp+30h] [rbp+8h]

  for ( i = 0; i < 2; ++i )
  {
    Myval2 = Collision::HitRectCollection::GetInstance(i)->pRectList[12]._Mypair._Myval2;
    Myfirst = Myval2->rectList._Mypair._Myval2._Myfirst;
    for ( j = Myval2->rectList._Mypair._Myval2._Mylast; Myfirst != j; ++Myfirst )
    {
      if ( !Myfirst->pOwner->IsAttackGroupID(Myfirst->pOwner, Myfirst->iGroupID) )
      {
        pParent = Myfirst->pParent;
        if ( pParent )
        {
          v6 = (__int64)pParent->GetTargetActor(pParent);
          if ( v6 )
          {
            if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 1248i64))(v6) )
            {
              Myfirst->pOwner->SetActionBranchKey(Myfirst->pOwner, Myfirst->data.atk.iActionBranchKey);
              if ( !DamageSetControl::instance )
              {
                v9 = (DamageSetControl *)operator new(0x800ui64);
                DamageSetControl::DamageSetControl(v9);
                DamageSetControl::instance = v8;
              }
              DamageSetControl::SetThrowDamage(v7, Myfirst);
              Myfirst->pOwner->SetAttackGroupID(Myfirst->pOwner, Myfirst->iGroupID);
            }
          }
        }
      }
    }
  }
}

void __fastcall std::vector<Collision::HitRectWork>::_Reallocate(
        std::vector<Collision::HitRectWork> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<Collision::HitRectWork> > *a4)
{
  Collision::HitRectWork *v6; // rbx
  unsigned __int64 v7; // rcx
  void *v8; // rax
  signed __int64 v9; // r14

  if ( _Count )
  {
    if ( _Count > 0x82082082082082i64 )
      std::_Xbad_alloc();
    v7 = 504 * _Count;
    if ( 504 * _Count < 0x1000 )
    {
      v6 = (Collision::HitRectWork *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = operator new(v7 + 39);
      v6 = (Collision::HitRectWork *)(((unsigned __int64)v8 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
      *((_QWORD *)&v6[-1].data.hit + 56) = v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<Collision::HitRectWork *,Collision::HitRectWork *,std::allocator<Collision::HitRectWork>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v6,
    a4);
  v9 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<Collision::HitRectWork>>::deallocate(
      (std::_Wrap_alloc<std::allocator<Collision::HitRectWork> > *)((char *)this->_Mypair._Myval2._Myend
                                                                  - (char *)this->_Mypair._Myval2._Myfirst),
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = &v6[_Count];
  this->_Mypair._Myval2._Mylast = &v6[v9];
  this->_Mypair._Myval2._Myfirst = v6;
}

