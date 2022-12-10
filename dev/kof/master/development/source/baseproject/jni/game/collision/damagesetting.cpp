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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesettingutil.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrect.cpp"

CharaDamageSetting::Setting FukitobiKODamageSettingData; // 0x14089B340
CharaDamageSetting::Setting StunDamageSettingData; // 0x14089B360
const ActorChara::ACTOR_STATUS::ID ciDamageGroupActorStat[12]; // 0x14089B380
CharaDamageSetting::Setting SpecialKODamageSettingData; // 0x14089B410
const long ciGuardCancelEvadeTargetStop[10]; // 0x14089B430
std::piecewise_construct_t std::piecewise_construct; // 0x14089B33F
CharaDamageSetting::Setting CheapKODamageSettingData; // 0x14089B458
CharaDamageSetting::Setting LowAtkKODamageSettingData; // 0x14089B478
bool DamageSetting::EntryDamageSet(const Collision::HitRectWork & atk, const Collision::HitRectWork & psv, const CharaDamageSetting::Setting * pDamageSetting, DAMAGE_SET_TYPE type, bool bCounter); // 0x1400E1B20
void DamageSetting::PlayerDamageSetting(); // 0x1400E1CE0
void DamageSetting::PlayerCatchSetting(); // 0x1400E32E0
void DamageSetControl::SetThrowDamage(const Collision::HitRectWork & atk); // 0x1400E3D00
bool DamageSetControl::CheckNextDamageSetting(ActorChara & actor); // 0x1400E4030
void DamageSetControl::SetNextDamageAction(ActorChara & actor); // 0x1400E4250
void DamageSetControl::PlayerStatusCheck(ActionSystem & actSys); // 0x1400E4CF0
void DamageSetControl::PowerGaugeCalc(ActorChara & target, const Collision::HitRectWork & atk, bool bGuard, bool bAtkPow, bool bPsvPow); // 0x1400E54E0
void DamageSetControl::DamageCalc(ActorChara & target, const Collision::HitRectWork & atk, bool bCounter, DAMAGE_SET_TYPE type); // 0x1400E5600
void DamageSetControl::PlayerAttackDamage(const Collision::HitRectWork & atk, const Collision::HitRectWork & psv, const Collision::HitRect & centerRect, DAMAGE_SET_TYPE type); // 0x1400E5F00
void DamageSetControl::PlayerCatchDamage(const Collision::HitRectWork & atk, const Collision::HitRectWork & psv, const Collision::HitRect & centerRect); // 0x1400E6790
void DamageSetControl::PlayerGuardPointSetting(const Collision::HitRectWork & atk, const Collision::HitRectWork & psv, const Collision::HitRect & centerRect); // 0x1400E6B40//decompilation failure at 14089B340!
//decompilation failure at 14089B360!
//decompilation failure at 14089B380!
//decompilation failure at 14089B410!
//decompilation failure at 14089B430!
//decompilation failure at 14089B33F!
//decompilation failure at 14089B458!
//decompilation failure at 14089B478!
void __fastcall BattleSystem::BattleController::AddBattleScore(
        BattleSystem::BattleController *this,
        int playerID,
        int score)
{
  BattleSystem::BattlePlayerInfo *v3; // r9
  int iBattleScore; // eax
  int iTotalScore; // ecx
  unsigned int v6; // edx
  int v7; // ecx
  unsigned int v8; // edx
  int v9; // ecx

  v3 = &this->playerInfo[playerID];
  v3->scoreInfo.iBattleScore += score;
  iBattleScore = v3->scoreInfo.iBattleScore;
  iTotalScore = v3->iTotalScore;
  if ( iBattleScore > 99999999 )
    iBattleScore = 99999999;
  v3->scoreInfo.iBattleScore = iBattleScore;
  v6 = iTotalScore ^ 0x7B48A35E ^ ((unsigned __int16)iTotalScore ^ 0xA35E ^ (unsigned __int16)((iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)iTotalScore ^ 0xA35E ^ (unsigned __int16)((iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v7 = score + ((v6 ^ (v6 >> 7)) & 0x550055 ^ v6 ^ (((v6 ^ (v6 >> 7)) & 0x550055) << 7));
  if ( v7 > 99999999 )
    v7 = 99999999;
  v8 = v7 ^ (v7 ^ (v7 >> 7)) & 0x550055 ^ (((v7 ^ (v7 >> 7)) & 0x550055) << 7);
  v9 = ((unsigned __int16)(v7 ^ (v7 ^ (v7 >> 7)) & 0x55 ^ ((((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v8 >> 14)) & 0xCCCC;
  v3->iTotalScore = v8 ^ v9 ^ (v9 << 14) ^ 0x7B48A35E;
}

bool __fastcall DamageSetControl::CheckNextDamageSetting(ActorChara *actor)
{
  ActorChara *v2; // rax
  __int64 v3; // rax
  char v4; // r14
  const CharaDamageSetting::Setting *v5; // rdi
  __int64 iGroupID; // rax
  const CharaBaseStatus *pBaseStat; // rsi
  __int64 iActionID; // rbp
  int v9; // esi
  __int64 v10; // rcx
  int v11; // ebp
  int v12; // eax

  v2 = actor->GetTargetActor(actor);
  v3 = (__int64)v2->GetDamageSetting(v2, actor->iNextDamageID);
  v4 = 0;
  v5 = (const CharaDamageSetting::Setting *)v3;
  if ( v3 )
  {
    if ( actor->IsKO(actor) )
    {
      iGroupID = v5->iGroupID;
      if ( cpKODamageSettingList[iGroupID] )
        v5 = cpKODamageSettingList[iGroupID];
    }
    pBaseStat = actor->pBaseStat;
    iActionID = v5->iActionID;
    if ( pBaseStat->CheckFileID(&pBaseStat->CharaFileBase)
      && (unsigned int)iActionID < pBaseStat->dataHeader.uiCommonActionCount
      && (v9 = pBaseStat->pCommonAct[iActionID].iActionID, v9 >= 0) )
    {
      v10 = v5->iGroupID;
      v11 = ciDamageGroupActorStat[v10];
      switch ( (int)v10 )
      {
        case 0:
        case 5:
        case 9:
        case 10:
        case 11:
          ((void (__fastcall *)(ActorChara *))actor->SetSpeed)(actor);
          goto LABEL_15;
        case 1:
        case 2:
        case 4:
          LOBYTE(v3) = 0;
          return v3;
        case 3:
          v4 = 1;
          v12 = actor->GetActionEndFrame(actor, v9, 1);
          DamageSettingUtil::BoundMoveCalc(actor, v12);
          goto LABEL_15;
        case 6:
        case 7:
          actor->ResetSpeed(actor);
          v4 = 1;
          goto LABEL_15;
        case 8:
          v4 = 1;
          ((void (__fastcall *)(ActorChara *))actor->SetSpeed)(actor);
          goto LABEL_15;
        default:
LABEL_15:
          actor->ActionChangeReq(actor, v9, 0);
          actor->StateChangeReq(actor, v11);
          actor->iNextDamageID = v5->iNextDamageID;
          if ( v4 )
            ((void (__fastcall *)(ActorChara *))actor->RequestPositionY)(actor);
          LOBYTE(v3) = 1;
          break;
      }
    }
    else
    {
      LOBYTE(v3) = 0;
    }
  }
  return v3;
}

void __fastcall DamageSetControl::DamageCalc(
        ActorChara *target,
        const Collision::HitRectWork *atk,
        bool bCounter,
        DAMAGE_SET_TYPE type)
{
  int iDamage; // ebx
  int v8; // er15
  unsigned int iVitalRecovery; // er12
  int iCheapDamage; // er14
  __int64 v11; // rdi
  ActorChara *pParent; // rcx
  __int64 v13; // rcx
  unsigned __int64 *v14; // rax
  int v15; // ecx
  __int64 iSkillType; // r9
  int v17; // er8
  int iScore; // edi
  BattleSystem::BattleController *v19; // rbx
  BattleSystem::BattleController *v20; // rax
  int v21; // eax
  ActorChara *v22; // rdi
  int v23; // ebx
  ActorChara_vtbl *v24; // rbx
  _BOOL8 v25; // r8
  ActorChara *v26; // rcx
  ActorChara *v27; // rcx
  int v28; // er13
  int v29; // edx
  unsigned int v30; // edx
  int v31; // edi
  bool v32; // r9
  bool v33; // r14
  __int64 v35; // rbx
  int v36; // er8
  __int64 v37; // rax
  BattleSystem::BattlePlayerInfo *v38; // rcx
  __int64 iRoundSetCount; // rax
  int v40; // er8
  int v41; // er8
  int v42; // edx
  std::bitset<61>::reference *v43; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61> *v45; // rax
  std::bitset<61>::reference *v46; // rax
  unsigned __int64 v47; // rdx
  ActorChara *v48; // rcx
  int iGuard; // ebx
  ActorChara *v50; // rax
  int v51; // ebx
  std::bitset<61>::reference *v52; // rax
  unsigned __int64 v53; // rdx
  ActorChara *v54; // rcx
  int iCombo; // ecx
  int iOneHitScore; // eax
  int v57; // eax
  int iComboDamage; // eax
  int iComboStunDamage; // eax
  int iAddComboCount; // eax
  int v61; // eax
  int v62; // eax
  int iComboRevise; // ecx
  int v64; // ecx
  int v65; // ecx
  bool v66; // [rsp+30h] [rbp-98h]
  bool v67; // [rsp+31h] [rbp-97h]
  std::bitset<61>::reference result; // [rsp+38h] [rbp-90h] BYREF
  __int64 v70; // [rsp+48h] [rbp-80h]
  __int128 v71[2]; // [rsp+50h] [rbp-78h]
  int v72; // [rsp+70h] [rbp-58h]
  int v73; // [rsp+74h] [rbp-54h]

  v70 = -2i64;
  iDamage = atk->data.atk.iDamage;
  v66 = (unsigned int)(type - 1) <= 1;
  v67 = 0;
  v8 = 0;
  iVitalRecovery = 0;
  target->damageInfo.iOneHitScore = 0;
  if ( (unsigned int)(type - 1) <= 1 )
  {
    iCheapDamage = atk->data.atk.iCheapDamage;
    if ( iCheapDamage < 0 )
    {
      if ( atk->data.atk.iSkillType < 5 )
        iCheapDamage = 0;
      else
        iCheapDamage = iDamage / 6;
    }
    goto LABEL_35;
  }
  v11 = ((__int64 (__fastcall *)(ActorObject *, _QWORD, _QWORD))atk->pOwner->GetActionOptionFlag)(
          atk->pOwner,
          (unsigned int)atk->pOwner->iActNo,
          0i64) & 4;
  v67 = atk->data.atk.iDamage > 0;
  pParent = atk->pParent;
  if ( pParent && (atk->data.atk.iAttackFlag & 0x1000000) != 0 )
    iDamage += pParent->GetExtraDamage(pParent);
  if ( bCounter )
    iDamage = 1250 * iDamage / 1000;
  v13 = 1i64;
  v14 = &atk->pOwner->attackHitGroupBit._Array[1];
  while ( !*v14 )
  {
    --v14;
    if ( --v13 < 0 )
    {
      if ( !(_DWORD)v11 )
        target->damageInfo.iComboAdjust = target->damageInfo.iNextComboAdjust;
      break;
    }
  }
  v15 = 50 * (20 - target->damageInfo.iComboAdjust);
  iSkillType = atk->data.atk.iSkillType;
  if ( (int)iSkillType >= 7 )
  {
    v17 = 500;
    if ( v15 < 500 )
      goto LABEL_21;
    goto LABEL_20;
  }
  v17 = 200;
  if ( v15 >= 200 )
LABEL_20:
    v17 = 50 * (20 - target->damageInfo.iComboAdjust);
LABEL_21:
  iCheapDamage = iDamage * v17 / 1000;
  if ( (atk->data.atk.iAttackFlag & 0x80000) != 0 )
    iVitalRecovery = atk->data.atk.iVitalRecovery;
  else
    iVitalRecovery = v17 * atk->data.atk.iVitalRecovery / 1000;
  if ( iCheapDamage < atk->data.atk.iLowerDamage )
    iCheapDamage = atk->data.atk.iLowerDamage;
  if ( target->xVital.value > 0 )
  {
    iScore = atk->data.atk.iScore;
    if ( iScore <= 0 )
    {
      v71[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
      v71[1] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
      v72 = 13;
      v73 = 14;
      iScore = 10 * ((atk->data.atk.iDamage * *((_DWORD *)v71 + iSkillType) + 9) / 10);
    }
    v19 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      result._Pbitset = (std::bitset<61> *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController((BattleSystem::BattleController *)result._Pbitset);
      v19 = v20;
      BattleSystem::BattleController::instance = v20;
    }
    v21 = atk->pOwner->GetPlayerID(atk->pOwner);
    BattleSystem::BattleController::AddBattleScore(v19, v21, iScore);
    target->damageInfo.iOneHitScore = iScore;
  }
  if ( atk->pParent )
  {
    v22 = atk->pParent;
    v23 = atk->pOwner->GetPlayerID(atk->pOwner);
    if ( v22->GetPlayerID(v22) == v23 )
    {
      v24 = atk->pParent->__vftable;
      LOBYTE(v25) = atk->pOwner->GetActorType(atk->pOwner) == OPTION;
      v24->CallComboMissionAtkEvent(atk->pParent, atk->iDataID, v25);
    }
  }
LABEL_35:
  v26 = atk->pParent;
  if ( v26 && (atk->data.atk.iAttackFlag & 0x2000000) != 0 )
    v26->ResetExtraDamage(v26);
  v27 = atk->pParent;
  v28 = 1000;
  if ( v27 )
    v29 = (int)(float)(v27->damageMagnification.fAtkDamage * 1000.0);
  else
    v29 = 1000;
  v30 = (int)((unsigned __int64)(274877907i64 * iCheapDamage * v29) >> 32) >> 6;
  v31 = (int)(((v30 >> 31) + v30) * (int)(float)(target->damageMagnification.fDefDamage * 1000.0)) / 1000;
  if ( v27 && v27->IsOneAtkKO(v27) && v31 > 0 )
    v31 = target->GetMaxVital(target);
  if ( v31 < 1 && v67 )
    v31 = 1;
  if ( target->xVital.value <= 0 )
  {
    v33 = v66;
    goto LABEL_75;
  }
  target->SetVitalDamage(target, v31);
  if ( target->xVital.value >= 0x10000 )
  {
    v33 = v66;
  }
  else
  {
    v33 = v66;
    if ( !target->IsDisableKO(target)
      && (v66 ? (*((_BYTE *)&atk->data.hit + 184) & 0x10) == 0 : (*((_BYTE *)&atk->data.hit + 184) & 2) == 0) )
    {
      target->xVital.value = 0;
      if ( target->IsKO(target) )
        goto LABEL_65;
      v35 = atk->pParent->GetFounderPlayerID(atk->pParent);
      BattleSystem::BattleController::GetActionSystem();
      v36 = atk->data.atk.iSkillType;
      v38 = (BattleSystem::BattlePlayerInfo *)(v37 + 246124 + 168 * v35);
      iRoundSetCount = v38->iRoundSetCount;
      if ( (int)iRoundSetCount >= 5 || v38->iFinishSkill[iRoundSetCount] )
        goto LABEL_65;
      v38->iFinishSkill[iRoundSetCount] = v36;
      v40 = v36 - 7;
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( v41 )
        {
          if ( v41 != 1 )
          {
LABEL_65:
            v43 = std::bitset<21>::operator[]((std::bitset<61> *)&target->systemFlag, &result, 0x18ui64);
            Mypos = v43->_Mypos;
            if ( Mypos >= 0x3E )
              std::_Xout_of_range("invalid bitset<N> position");
            v43->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (v43->_Mypos & 0x3F);
            v45 = (std::bitset<61> *)target->GetTargetActor(target);
            v46 = std::bitset<21>::operator[](v45 + 101, &result, 4ui64);
            v47 = v46->_Mypos;
            if ( v47 >= 6 )
              std::_Xout_of_range("invalid bitset<N> position");
            *((_DWORD *)v46->_Pbitset->_Array + (v47 >> 5)) |= 1 << (v46->_Mypos & 0x1F);
            goto LABEL_72;
          }
          v42 = 50000;
        }
        else
        {
          v42 = 30000;
        }
      }
      else
      {
        v42 = 15000;
      }
      BattleSystem::BattlePlayerInfo::AddBattleScore(v38, v42);
      goto LABEL_65;
    }
    target->xVital.value = 0x10000;
  }
LABEL_72:
  DamageSetControl::PowerGaugeCalc(target, atk, (unsigned int)(type - 1) <= 1, v32, 1);
  v48 = atk->pParent;
  if ( v48 )
    v48->SetReserveRecoverValue(v48, iVitalRecovery);
LABEL_75:
  if ( v33 )
  {
    if ( target->xVital.value > 0 )
    {
      if ( target->xGuardPower.value > 0 )
      {
        iGuard = atk->data.atk.iGuard;
        if ( target->IsJustGuard(target) )
          iGuard /= 2;
        v50 = atk->pParent;
        if ( v50 )
          v28 = (int)(float)(v50->damageMagnification.fAtkGuard * 1000.0);
        v51 = v28 * iGuard / 1000 * (int)(float)(target->damageMagnification.fDefGuard * 1000.0) / 1000;
        if ( target->IsGuardCrashMode(target) && v51 > 0 )
          v51 = 20000;
        target->SetGuardPowerDamage(target, v51);
        if ( target->xGuardPower.value < 0x10000 )
        {
          if ( (*((_BYTE *)&atk->data.hit + 184) & 8) != 0 )
            target->xGuardPower.value = 0x10000;
          else
            target->xGuardPower.value = 0;
        }
        target->SetGuardPowerWaitCount(target);
      }
      if ( (*((_BYTE *)&atk->data.hit + 206) & 8) != 0 )
        target->SetPoisonDamage(target, (const CharaAttackData::PoisonDamageData *)((char *)&atk->data.hit + 200));
    }
    target->damageInfo.iOneHitDamage = v31;
    target->damageInfo.iOneHitStunDamage = 0;
    if ( v31 > 0 )
    {
      v52 = std::bitset<21>::operator[]((std::bitset<61> *)&target->systemFlag, &result, 0x17ui64);
      v53 = v52->_Mypos;
      if ( v53 >= 0x3E )
        std::_Xout_of_range("invalid bitset<N> position");
      v52->_Pbitset[v53 >> 6]._Array[0] |= 1i64 << (v52->_Mypos & 0x3F);
    }
    return;
  }
  if ( target->xVital.value > 0 )
  {
    if ( !target->IsStunDamaged(target) )
    {
      v54 = atk->pParent;
      if ( v54 )
        v28 = (int)(float)(v54->damageMagnification.fAtkStun * 1000.0);
      v8 = v28 * atk->data.atk.iStun / 1000 * (int)(float)(target->damageMagnification.fDefStun * 1000.0) / 1000;
      if ( v54 && v54->IsOneHitStun(v54) && v8 > 0 )
        v8 = target->GetMaxStunPower(target);
      target->SetStunPowerDamage(target, v8);
      if ( target->xStunPower.value < 0x10000 )
        target->xStunPower.value = (*((_BYTE *)&atk->data.hit + 184) & 4) << 14;
      target->SetStunWaitCount(target);
    }
    target->SetPoisonDamage(target, (const CharaAttackData::PoisonDamageData *)((char *)&atk->data.hit + 200));
  }
  iCombo = target->damageInfo.iCombo;
  iOneHitScore = target->damageInfo.iOneHitScore;
  if ( iCombo >= 1 )
  {
    target->damageInfo.iComboDamage += v31;
    target->damageInfo.iComboStunDamage += v8;
    target->damageInfo.iComboScore += iOneHitScore;
    if ( atk->data.atk.iSkillType != target->damageInfo.iPrevDamageSkill )
    {
      v57 = ++target->damageInfo.iSkillBonusCount;
      if ( v57 > 999 )
        v57 = 999;
      target->damageInfo.iSkillBonusCount = v57;
    }
  }
  else
  {
    target->damageInfo.iComboDamage = v31;
    target->damageInfo.iComboStunDamage = v8;
    target->damageInfo.iComboScore = iOneHitScore;
  }
  iComboDamage = target->damageInfo.iComboDamage;
  if ( iComboDamage > target->damageInfo.iMaxComboDamage )
    target->damageInfo.iMaxComboDamage = iComboDamage;
  iComboStunDamage = target->damageInfo.iComboStunDamage;
  if ( iComboStunDamage > target->damageInfo.iMaxComboStunDamage )
    target->damageInfo.iMaxComboStunDamage = iComboStunDamage;
  target->damageInfo.iOneHitDamage = v31;
  target->damageInfo.iOneHitStunDamage = v8;
  target->damageInfo.iPrevDamageSkill = atk->data.atk.iSkillType;
  if ( (*((_BYTE *)&atk->data.hit + 184) & 0x20) == 0 )
  {
    iAddComboCount = atk->data.atk.iAddComboCount;
    if ( iAddComboCount <= 0 )
      v61 = iCombo + 1;
    else
      v61 = iCombo + iAddComboCount;
    target->damageInfo.iCombo = v61;
    if ( v61 > 999 )
      target->damageInfo.iCombo = 999;
    v62 = target->damageInfo.iCombo;
    if ( v62 > target->damageInfo.iMaxCombo )
      target->damageInfo.iMaxCombo = v62;
  }
  iComboRevise = atk->data.atk.iComboRevise;
  if ( iComboRevise >= 1 )
  {
    if ( (unsigned int)(iComboRevise - 4) <= 2 )
    {
      if ( iComboRevise < 14 )
      {
        v65 = iComboRevise - 3;
        goto LABEL_135;
      }
    }
    else if ( iComboRevise < 14 )
    {
      if ( iComboRevise >= 7 )
        iComboRevise -= 3;
      v64 = target->damageInfo.iComboAdjust + iComboRevise;
      goto LABEL_136;
    }
    v65 = iComboRevise - 10;
LABEL_135:
    v64 = target->damageInfo.iComboAdjust + v65;
    target->damageInfo.iComboAdjust = v64;
LABEL_136:
    target->damageInfo.iNextComboAdjust = v64;
  }
}

bool __fastcall DamageSetting::EntryDamageSet(
        DamageSetting *this,
        const Collision::HitRectWork *atk,
        const Collision::HitRectWork *psv,
        const CharaDamageSetting::Setting *pDamageSetting,
        DAMAGE_SET_TYPE type,
        bool bCounter)
{
  DamageSetting *v7; // r10
  bool result; // al
  __int64 v9; // r9
  __int64 v10; // rax
  __int128 v11; // xmm0
  Collision::HitRectWork *p_psv; // rax
  __int128 v13; // xmm0

  v7 = this;
  if ( !pDamageSetting
    || this->pDmgSet
    && (ciDamageSetTypePri[this->damageType] > ciDamageSetTypePri[type]
     || this->atk.data.atk.iDamageActPri > atk->data.atk.iDamageActPri) )
  {
    return 0;
  }
  v9 = 3i64;
  v10 = 3i64;
  do
  {
    this = (DamageSetting *)((char *)this + 128);
    v11 = *(_OWORD *)&atk->type;
    atk = (const Collision::HitRectWork *)((char *)atk + 128);
    *(_OWORD *)((char *)&this[-1].psv.data.hit + 344) = v11;
    *(_OWORD *)(&this[-1].psv.data.hit + 15) = *(_OWORD *)((char *)&atk[-1].data.hit + 344);
    *(_OWORD *)((char *)&this[-1].psv.data.hit + 376) = *(_OWORD *)(&atk[-1].data.hit + 15);
    *(_OWORD *)((char *)&this[-1].psv.data.hit + 392) = *(_OWORD *)((char *)&atk[-1].data.hit + 376);
    *(_OWORD *)(&this[-1].psv.data.hit + 17) = *(_OWORD *)((char *)&atk[-1].data.hit + 392);
    *(_OWORD *)((char *)&this[-1].psv.data.hit + 424) = *(_OWORD *)(&atk[-1].data.hit + 17);
    *(_OWORD *)((char *)&this[-1].psv.data.hit + 440) = *(_OWORD *)((char *)&atk[-1].data.hit + 424);
    *(_OWORD *)&this[-1].pDmgSet = *(_OWORD *)((char *)&atk[-1].data.hit + 440);
    --v10;
  }
  while ( v10 );
  *(_OWORD *)&this->atk.type = *(_OWORD *)&atk->type;
  *(_OWORD *)&this->atk.rect.h = *(_OWORD *)&atk->rect.h;
  *(_OWORD *)&this->atk.pOwner = *(_OWORD *)&atk->pOwner;
  *(_OWORD *)&this->atk.data.atk.iDataType = *(_OWORD *)&atk->data.atk.iDataType;
  *(_OWORD *)&this->atk.data.hit.iBindIndex = *(_OWORD *)&atk->data.hit.iBindIndex;
  *((_OWORD *)&this->atk.data.hit + 2) = *((_OWORD *)&atk->data.hit + 2);
  *((_OWORD *)&this->atk.data.hit + 3) = *((_OWORD *)&atk->data.hit + 3);
  *((_QWORD *)&this->atk.data.hit + 8) = *((_QWORD *)&atk->data.hit + 8);
  p_psv = &v7->psv;
  do
  {
    v13 = *(_OWORD *)&psv->type;
    psv = (const Collision::HitRectWork *)((char *)psv + 128);
    *(_OWORD *)&p_psv->type = v13;
    *(_OWORD *)&p_psv->rect.h = *(_OWORD *)((char *)&psv[-1].data.hit + 344);
    *(_OWORD *)&p_psv->pOwner = *(_OWORD *)(&psv[-1].data.hit + 15);
    *(_OWORD *)&p_psv->data.atk.iDataType = *(_OWORD *)((char *)&psv[-1].data.hit + 376);
    *(_OWORD *)&p_psv->data.hit.iBindIndex = *(_OWORD *)((char *)&psv[-1].data.hit + 392);
    *((_OWORD *)&p_psv->data.hit + 2) = *(_OWORD *)(&psv[-1].data.hit + 17);
    *((_OWORD *)&p_psv->data.hit + 3) = *(_OWORD *)((char *)&psv[-1].data.hit + 424);
    p_psv = (Collision::HitRectWork *)((char *)p_psv + 128);
    *(_OWORD *)((char *)&p_psv[-1].data.hit + 440) = *(_OWORD *)((char *)&psv[-1].data.hit + 440);
    --v9;
  }
  while ( v9 );
  *(_OWORD *)&p_psv->type = *(_OWORD *)&psv->type;
  *(_OWORD *)&p_psv->rect.h = *(_OWORD *)&psv->rect.h;
  *(_OWORD *)&p_psv->pOwner = *(_OWORD *)&psv->pOwner;
  *(_OWORD *)&p_psv->data.atk.iDataType = *(_OWORD *)&psv->data.atk.iDataType;
  *(_OWORD *)&p_psv->data.hit.iBindIndex = *(_OWORD *)&psv->data.hit.iBindIndex;
  *((_OWORD *)&p_psv->data.hit + 2) = *((_OWORD *)&psv->data.hit + 2);
  *((_OWORD *)&p_psv->data.hit + 3) = *((_OWORD *)&psv->data.hit + 3);
  *((_QWORD *)&p_psv->data.hit + 8) = *((_QWORD *)&psv->data.hit + 8);
  v7->bCounterDamage = bCounter;
  result = 1;
  v7->pDmgSet = pDamageSetting;
  v7->damageType = type;
  return result;
}

void __fastcall DamageSetControl::PlayerAttackDamage(
        DamageSetControl *this,
        const Collision::HitRectWork *atk,
        const Collision::HitRectWork *psv,
        const Collision::HitRect *centerRect,
        DAMAGE_SET_TYPE type)
{
  ActorChara *pParent; // rcx
  bool v9; // r12
  bool v10; // zf
  ActorChara_vtbl *v11; // rax
  char v12; // al
  ActorObject *v13; // rcx
  ActorObject_vtbl *v14; // rax
  __int64 iNokezori; // rdx
  __int64 iDownDown; // rdx
  const CharaDamageSetting::Setting *v17; // rbp
  __int64 iCounterStand; // rdx
  bool v19; // al
  ActorObject *v20; // rcx
  ActorObject_vtbl *v21; // rax
  __int64 iJump; // rdx
  ActorObject *pOwner; // rcx
  __int64 iGuardStand; // rdx
  __int64 iActionID; // r14
  const CharaBaseStatus *pBaseStat; // rbx
  ActorChara *v27; // rcx
  int iGuardInputCount; // ebx
  std::bitset<62>::reference *v29; // rax
  unsigned __int64 Mypos; // rdx
  ActorChara *v31; // rcx
  _BOOL8 v32; // rdx
  std::bitset<61>::reference *v33; // rax
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  unsigned __int8 v36; // r9
  std::bitset<61>::reference *v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // rdx
  ActorChara *v41; // rcx
  char *v42; // rbx
  char v43; // r14
  const extension::SoundOneshotParameters *v44; // r9
  float SoundPanPosition; // xmm0_4
  float v46; // xmm6_4
  __int64 v47; // rdx
  bool bCounter; // [rsp+28h] [rbp-B0h]
  int v49; // [rsp+30h] [rbp-A8h]
  AppMain *v50; // [rsp+40h] [rbp-98h]
  std::bitset<61>::reference result; // [rsp+50h] [rbp-88h] BYREF
  __int64 v53; // [rsp+60h] [rbp-78h]
  extension::SoundObject obj; // [rsp+68h] [rbp-70h] BYREF
  int v55; // [rsp+70h] [rbp-68h]

  v53 = -2i64;
  v50 = *(AppMain **)&AppMain::pApp;
  pParent = psv->pParent;
  if ( !pParent )
    return;
  v9 = (psv->data.atk.iDamage & 0x2000) != 0 || pParent->IsInviteCounter(pParent);
  if ( psv->pParent->IsAlwaysCounter(psv->pParent) || psv->pParent->IsRandomCounterValid(psv->pParent) )
    v9 = 1;
  if ( type )
  {
    pOwner = atk->pOwner;
    if ( type == RESERVE_DAMAGE )
    {
      obj.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)((char *)&atk->data.hit + 32);
      v17 = pOwner->GetDamageSetting(pOwner, atk->data.atk.damageAction.iStand);
    }
    else
    {
      obj.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)((char *)&atk->data.hit + 56);
      if ( type == STAND_GUARD )
        iGuardStand = (unsigned int)atk->data.atk.damageAction.iGuardStand;
      else
        iGuardStand = (unsigned int)atk->data.atk.damageAction.iGuardCrouch;
      v17 = pOwner->GetDamageSetting(pOwner, iGuardStand);
      if ( !v17 )
        return;
      v9 = 0;
    }
    goto LABEL_52;
  }
  obj.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)((char *)&atk->data.hit + 32);
  if ( psv->pParent->IsNokezori(psv->pParent) || psv->pParent->IsLandThrowDamaged(psv->pParent) )
  {
    iNokezori = (unsigned int)atk->data.atk.damageAction.iNokezori;
    goto LABEL_27;
  }
  v10 = !psv->pParent->IsKuzure(psv->pParent);
  v11 = psv->pParent->__vftable;
  if ( !v10 )
  {
    v12 = ((__int64 (*)(void))v11->IsAir)();
    v13 = atk->pOwner;
    v10 = v12 == 0;
    v14 = v13->__vftable;
    if ( v10 )
      iNokezori = (unsigned int)atk->data.atk.damageAction.iKuzure;
    else
      iNokezori = (unsigned int)atk->data.atk.damageAction.iFukitobi;
LABEL_28:
    v17 = v14->GetDamageSetting(v13, iNokezori);
    if ( !v17 )
      goto LABEL_29;
    goto LABEL_52;
  }
  if ( ((unsigned __int8 (*)(void))v11->IsAirDamaged)() || psv->pParent->IsAirThrowDamaged(psv->pParent) )
  {
    iNokezori = (unsigned int)atk->data.atk.damageAction.iFukitobi;
LABEL_27:
    v13 = atk->pOwner;
    v14 = v13->__vftable;
    goto LABEL_28;
  }
  if ( !psv->pParent->IsBound(psv->pParent) && !psv->pParent->IsDown(psv->pParent) )
  {
LABEL_29:
    if ( !v9
      || (!psv->pParent->IsAir(psv->pParent) ? (!psv->pParent->IsCrouch(psv->pParent) ? (iCounterStand = (unsigned int)atk->data.atk.damageAction.iCounterStand) : (iCounterStand = (unsigned int)atk->data.atk.damageAction.iCounterCrouch)) : (iCounterStand = (unsigned int)atk->data.atk.damageAction.iCounterJump),
          (v17 = atk->pOwner->GetDamageSetting(atk->pOwner, iCounterStand)) == 0i64) )
    {
      if ( psv->pParent->IsAir(psv->pParent)
        || psv->pParent->IsBound(psv->pParent)
        || psv->pParent->IsDown(psv->pParent) )
      {
        v20 = atk->pOwner;
        v21 = v20->__vftable;
        iJump = (unsigned int)atk->data.atk.damageAction.iJump;
      }
      else
      {
        v19 = psv->pParent->IsCrouch(psv->pParent);
        v20 = atk->pOwner;
        v10 = !v19;
        v21 = v20->__vftable;
        iJump = v10 ? (unsigned int)atk->data.atk.damageAction.iStand : (unsigned int)atk->data.atk.damageAction.iCrouch;
      }
      v17 = v21->GetDamageSetting(v20, iJump);
      if ( !v17 )
        return;
    }
    goto LABEL_52;
  }
  if ( psv->pParent->GetActionCategoryID(psv->pParent, psv->pParent->iActNo, 0) == 4 )
    iDownDown = (unsigned int)atk->data.atk.damageAction.iDownDown;
  else
    iDownDown = (unsigned int)atk->data.atk.damageAction.iDown;
  v17 = atk->pOwner->GetDamageSetting(atk->pOwner, iDownDown);
  if ( !v17 )
    return;
LABEL_52:
  if ( v17->iGroupID != 2 )
  {
    iActionID = v17->iActionID;
    pBaseStat = psv->pParent->pBaseStat;
    if ( pBaseStat->CheckFileID(&pBaseStat->CharaFileBase)
      && (unsigned int)iActionID < pBaseStat->dataHeader.uiCommonActionCount
      && pBaseStat->pCommonAct[iActionID].iActionID >= 0 )
    {
      if ( (unsigned int)(type - 1) <= 1 )
      {
        v27 = psv->pParent;
        iGuardInputCount = v27->iGuardInputCount;
        if ( v27->IsAutoGuardOK(v27) && !psv->pParent->IsInputGuard(psv->pParent) )
          iGuardInputCount = 30;
        if ( (psv->pParent->IsAllJustGuardMode(psv->pParent) || iGuardInputCount <= 8)
          && (psv->pParent->IsInputGuard(psv->pParent) || psv->pParent->IsAutoGuardOK(psv->pParent)) )
        {
          v29 = (std::bitset<62>::reference *)std::bitset<21>::operator[](
                                                (std::bitset<61> *)&psv->pParent->systemFlag,
                                                &result,
                                                0x22ui64);
          Mypos = v29->_Mypos;
          if ( Mypos >= 0x3E )
            std::_Xout_of_range("invalid bitset<N> position");
          v29->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (v29->_Mypos & 0x3F);
          std::bitset<62>::reference::operator bool(v29);
          psv->pParent->iGuardInputCount = 30;
        }
        else
        {
          psv->pParent->IsJustGuard(psv->pParent);
        }
      }
      DamageSetControl::DamageCalc(psv->pParent, atk, v9, type);
      if ( psv->pParent->IsKO(psv->pParent) && (atk->data.atk.iAttackFlag & 0x100000) != 0 )
      {
        v31 = atk->pParent;
        if ( v31 )
          v31->SetSpecialWinDirection(v31);
      }
      atk->pOwner->SetHitStop(atk->pOwner, LODWORD(obj.m_runtimeEffector.m_ptr->m_soundObjectPosition.y), 0);
      obj.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)0x100010001000001i64;
      v55 = 16843009;
      if ( *((_BYTE *)&obj.m_runtimeEffector.m_ptr + v17->iGroupID) )
        psv->pParent->SetInvalidAttackID(psv->pParent, atk->data.atk.iSetInvalidAttackID);
      if ( atk->pOwner->GetActorType(atk->pOwner) == SHOT )
      {
        ((void (__fastcall *)(ActorObject *))atk->pOwner->__vftable[1]._branchIsFlag2)(atk->pOwner);
        ActorObject::SetEraseEffectInvalid(atk->pOwner, (psv->data.atk.iDamage & 0x40000) != 0);
      }
      if ( (unsigned int)(type - 1) <= 1 )
      {
        psv->pParent->SetInvalidHitCheck(psv->pParent);
        atk->pOwner->SetAttackHit(atk->pOwner, 0);
        v37 = std::bitset<21>::operator[]((std::bitset<61> *)&atk->pOwner->bsAttackFlag, &result, 5ui64);
        v38 = v37->_Mypos;
        if ( v38 >= 6 )
          std::_Xout_of_range("invalid bitset<N> position");
        v39 = v38 >> 5;
        v40 = v37->_Mypos & 0x1F;
        *((_DWORD *)v37->_Pbitset->_Array + v39) &= ~(1 << v40);
        LOBYTE(v40) = 1;
        atk->pOwner->SetAttackGuard(atk->pOwner, v40);
        v41 = psv->pParent;
        if ( v41->xGuardPower.value )
        {
          v46 = FLOAT_0_5;
          DamageSettingUtil::RequestGuardSound(v41, &atk->data.atk, (float)(centerRect->w * 0.5) + centerRect->x);
          DamageSettingUtil::CreateHitEffect(atk, centerRect, 1);
        }
        else
        {
          v42 = (char *)operator new(0x60ui64);
          *(_QWORD *)v42 = 1i64;
          *((_WORD *)v42 + 4) = 1;
          v43 = 0;
          *(_QWORD *)(v42 + 12) = 0i64;
          *(_QWORD *)(v42 + 20) = 0i64;
          *((_DWORD *)v42 + 7) = 1120403456;
          *((_QWORD *)v42 + 11) = 0i64;
          obj.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v42;
          SoundPanPosition = Actor::GetSoundPanPosition(psv->pParent);
          if ( v42[8] || *((float *)v42 + 6) != SoundPanPosition )
            v43 = 1;
          v42[8] = v43;
          *((float *)v42 + 6) = SoundPanPosition;
          v42[9] = 0;
          AppMain::Sound_PlaySEByName(v50, &s_soundIndex.m_keys[150], &obj, v44);
          v46 = FLOAT_0_5;
          DamageSettingUtil::CreateCommonEffect(
            (float)(centerRect->w * 0.5) + centerRect->x,
            centerRect->y - (float)(centerRect->h * 0.5),
            0.0,
            (CommonEffect::EFFECT_INDEX::ID)20,
            atk->pOwner->iCAngle,
            bCounter,
            v49);
          extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
            &obj.m_runtimeEffector,
            v47);
        }
        DamageSettingUtil::RequestFinishGuardSound(
          &atk->data.atk,
          psv->pParent,
          (float)(centerRect->w * v46) + centerRect->x);
      }
      else
      {
        if ( type == RESERVE_DAMAGE )
        {
          psv->pParent->SetInvalidHitCheck(psv->pParent);
        }
        else
        {
          LOBYTE(v32) = 1;
          atk->pOwner->SetAttackHit(atk->pOwner, v32);
          ActorObject::SetAttackCounter(atk->pOwner, v9);
          atk->pOwner->SetAttackGuard(atk->pOwner, 0);
          DamageSettingUtil::CreateHitEffect(atk, centerRect, 0);
        }
        v33 = std::bitset<21>::operator[]((std::bitset<61> *)&psv->pParent->systemFlag, &result, 0x12ui64);
        if ( (atk->data.atk.iAttackFlag & 0x20000) != 0 )
        {
          v34 = v33->_Mypos;
          if ( v34 >= 0x3E )
            std::_Xout_of_range("invalid bitset<N> position");
          v33->_Pbitset[v34 >> 6]._Array[0] |= 1i64 << (v33->_Mypos & 0x3F);
        }
        else
        {
          v35 = v33->_Mypos;
          if ( v35 >= 0x3E )
            std::_Xout_of_range("invalid bitset<N> position");
          v33->_Pbitset[v35 >> 6]._Array[0] &= ~(1i64 << (v33->_Mypos & 0x3F));
        }
        if ( v9 )
        {
          DamageSettingUtil::RequestCountHitSound(&atk->data.atk, (float)(centerRect->w * 0.5) + centerRect->x);
          FighterOperation::SetVibration(atk->pOwner->iPlayerID + 1, 0.2, 0xAAu, v36);
        }
        psv->pParent->ResetExtraDamage(psv->pParent);
        DamageSettingUtil::RequestAttackSound(
          atk->pOwner,
          &atk->data.atk.hitSound1,
          (float)(centerRect->w * 0.5) + centerRect->x);
        DamageSettingUtil::RequestAttackSound(
          atk->pOwner,
          &atk->data.atk.hitSound2,
          (float)(centerRect->w * 0.5) + centerRect->x);
        DamageSettingUtil::RequestDamagedVoice(psv->pParent, &atk->data.atk);
        DamageSettingUtil::RequestFinishHitSound(
          &atk->data.atk,
          psv->pParent,
          (float)(centerRect->w * 0.5) + centerRect->x);
      }
      DamageSetting::EntryDamageSet(&this->dmgSet[(__int64)psv->pParent->iPlayerID], atk, psv, v17, type, v9);
    }
  }
}

void __fastcall DamageSetControl::PlayerCatchDamage(
        DamageSetControl *this,
        const Collision::HitRectWork *atk,
        const Collision::HitRectWork *psv,
        const Collision::HitRect *centerRect)
{
  bool v8; // zf
  ActorChara_vtbl *v9; // rax
  char v10; // al
  ActorObject *pOwner; // rcx
  ActorObject_vtbl *v12; // rax
  __int64 iNokezori; // rdx
  int v14; // eax
  const CharaDamageSetting::Setting *v15; // rsi
  __int64 iJump; // rdx
  std::bitset<61>::reference *v17; // rax
  unsigned __int64 Mypos; // rdx
  unsigned __int64 v19; // rdx
  std::bitset<61>::reference result; // [rsp+38h] [rbp-20h] BYREF

  if ( psv->pParent->IsNokezori(psv->pParent) || psv->pParent->IsLandThrowDamaged(psv->pParent) )
  {
    iNokezori = (unsigned int)atk->data.atk.damageAction.iNokezori;
    goto LABEL_16;
  }
  v8 = !psv->pParent->IsKuzure(psv->pParent);
  v9 = psv->pParent->__vftable;
  if ( !v8 )
  {
    v10 = ((__int64 (*)(void))v9->IsAir)();
    pOwner = atk->pOwner;
    v8 = v10 == 0;
    v12 = pOwner->__vftable;
    if ( v8 )
      iNokezori = (unsigned int)atk->data.atk.damageAction.iKuzure;
    else
      iNokezori = (unsigned int)atk->data.atk.damageAction.iFukitobi;
    goto LABEL_17;
  }
  if ( ((unsigned __int8 (*)(void))v9->IsAirDamaged)() || psv->pParent->IsAirThrowDamaged(psv->pParent) )
  {
    iNokezori = (unsigned int)atk->data.atk.damageAction.iFukitobi;
LABEL_16:
    pOwner = atk->pOwner;
    v12 = pOwner->__vftable;
    goto LABEL_17;
  }
  if ( psv->pParent->IsBound(psv->pParent) || psv->pParent->IsDown(psv->pParent) )
  {
    v14 = psv->pParent->GetActionCategoryID(psv->pParent, psv->pParent->iActNo, 0);
    pOwner = atk->pOwner;
    v8 = v14 == 4;
    v12 = pOwner->__vftable;
    if ( v8 )
      iNokezori = (unsigned int)atk->data.atk.damageAction.iDownDown;
    else
      iNokezori = (unsigned int)atk->data.atk.damageAction.iDown;
LABEL_17:
    v15 = v12->GetDamageSetting(pOwner, iNokezori);
    if ( v15 )
      goto LABEL_26;
  }
  if ( psv->pParent->IsAir(psv->pParent) || psv->pParent->IsBound(psv->pParent) || psv->pParent->IsDown(psv->pParent) )
  {
    iJump = (unsigned int)atk->data.atk.damageAction.iJump;
  }
  else
  {
    if ( !psv->pParent->IsCrouch(psv->pParent) )
      goto LABEL_25;
    iJump = (unsigned int)atk->data.atk.damageAction.iCrouch;
  }
  v15 = atk->pOwner->GetDamageSetting(atk->pOwner, iJump);
  if ( !v15 )
  {
LABEL_25:
    v15 = atk->pOwner->GetDamageSetting(atk->pOwner, (unsigned int)atk->data.atk.damageAction.iStand);
    if ( !v15 )
      return;
  }
LABEL_26:
  if ( v15->iGroupID == 2 && v15->iActionID >= 0 )
  {
    atk->pParent->SetInvalidHitCheck(atk->pParent);
    psv->pParent->SetInvalidHitCheck(psv->pParent);
    if ( atk->pOwner->GetActorType(atk->pOwner) )
    {
      atk->pOwner->ResetHitStop(atk->pOwner);
      atk->pOwner->SetInvalidHitCheck(atk->pOwner);
      if ( atk->pOwner->GetActorType(atk->pOwner) == SHOT )
      {
        ((void (__fastcall *)(ActorObject *))atk->pOwner->__vftable[1]._branchIsFlag2)(atk->pOwner);
        ActorObject::SetEraseEffectInvalid(atk->pOwner, (psv->data.atk.iDamage & 0x40000) != 0);
      }
    }
    if ( psv->pOwner->GetActorType(psv->pOwner) )
    {
      psv->pOwner->SetInvalidHitCheck(psv->pOwner);
      psv->pOwner->CancelBlackout(psv->pOwner);
    }
    v17 = std::bitset<21>::operator[]((std::bitset<61> *)&psv->pParent->systemFlag, &result, 0x12ui64);
    if ( (atk->data.atk.iAttackFlag & 0x20000) != 0 )
    {
      Mypos = v17->_Mypos;
      if ( Mypos >= 0x3E )
        std::_Xout_of_range("invalid bitset<N> position");
      v17->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (v17->_Mypos & 0x3F);
    }
    else
    {
      v19 = v17->_Mypos;
      if ( v19 >= 0x3E )
        std::_Xout_of_range("invalid bitset<N> position");
      v17->_Pbitset[v19 >> 6]._Array[0] &= ~(1i64 << (v17->_Mypos & 0x3F));
    }
    psv->pParent->ResetExtraDamage(psv->pParent);
    DamageSettingUtil::RequestAttackSound(
      atk->pOwner,
      &atk->data.atk.hitSound1,
      (float)(centerRect->w * 0.5) + centerRect->x);
    DamageSettingUtil::RequestAttackSound(
      atk->pOwner,
      &atk->data.atk.hitSound2,
      (float)(centerRect->w * 0.5) + centerRect->x);
    DamageSettingUtil::RequestDamagedVoice(psv->pParent, &atk->data.atk);
    DamageSettingUtil::CreateHitEffect(atk, centerRect, 0);
    DamageSetting::EntryDamageSet(&this->dmgSet[(__int64)psv->pParent->iPlayerID], atk, psv, v15, CATCH_DAMAGE, 0);
  }
}

void __fastcall DamageSetting::PlayerCatchSetting(DamageSetting *this)
{
  int iActionID; // edi
  int HitBackAngle; // ebp
  __int64 v4; // r10
  ActionSystem *v5; // rcx
  int iPursuitFrameAdd; // eax
  std::bitset<61>::reference *v7; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v9; // rax
  unsigned __int64 v10; // rdx
  std::bitset<61>::reference *v11; // rax
  unsigned __int64 v12; // rdx
  std::bitset<61>::reference *v13; // rax
  unsigned __int64 v14; // rdx
  std::bitset<61>::reference *v15; // rax
  unsigned __int64 v16; // rdx
  std::bitset<61>::reference *v17; // rax
  unsigned __int64 v18; // rdx
  std::bitset<61>::reference *v19; // rax
  unsigned __int64 v20; // rdx
  std::bitset<61>::reference *v21; // rax
  unsigned __int64 v22; // rdx
  std::bitset<61>::reference *v23; // rax
  unsigned __int64 v24; // rdx
  std::bitset<61>::reference *v25; // rax
  unsigned __int64 v26; // rdx
  std::bitset<61>::reference *v27; // rax
  unsigned __int64 v28; // rdx
  std::bitset<61>::reference *v29; // rax
  unsigned __int64 v30; // rdx
  std::bitset<61>::reference *v31; // rax
  unsigned __int64 v32; // rdx
  std::bitset<61>::reference *v33; // rax
  unsigned __int64 v34; // rdx
  std::bitset<61>::reference *v35; // rax
  unsigned __int64 v36; // rdx
  std::bitset<61>::reference *v37; // rax
  char v38; // r9
  unsigned __int64 v39; // rdx
  std::bitset<61> *Pbitset; // r8
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  std::bitset<61>::reference *v45; // rax
  unsigned __int64 v46; // rdx
  std::bitset<61>::reference *v47; // rax
  unsigned __int64 v48; // rdx
  std::bitset<61>::reference *v49; // rax
  unsigned __int64 v50; // rdx
  std::bitset<61>::reference *v51; // rax
  unsigned __int64 v52; // rdx
  int v53; // esi
  ActorChara *pParent; // rcx
  std::bitset<61>::reference *v55; // rax
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rdx
  ActionSystem *v58; // rax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  iActionID = this->pDmgSet->iActionID;
  if ( iActionID >= 0 )
  {
    HitBackAngle = DamageSettingUtil::GetHitBackAngle(
                     this->atk.pOwner,
                     this->psv.pParent,
                     this->atk.data.atk.iHitNokeDir);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 624i64))(v4);
    ActionSystem::RequestSoundStopDamaged(v5, this->psv.pParent);
    if ( this->psv.pParent->IsPursuitDamaged(this->psv.pParent) )
      iPursuitFrameAdd = this->atk.data.atk.iPursuitFrameAdd;
    else
      iPursuitFrameAdd = this->atk.data.atk.iPursuitFrame;
    this->psv.pParent->xPursuitFrame.value = iPursuitFrameAdd << 16;
    if ( this->atk.data.atk.iDownFrame <= 0 || this->psv.pParent->IsStun(this->psv.pParent) )
      this->psv.pParent->xDownFrame.value = 655360;
    else
      this->psv.pParent->xDownFrame.value = this->atk.data.atk.iDownFrame << 16;
    this->psv.pParent->SetInvalidAttackID(this->psv.pParent, this->atk.data.atk.iSetInvalidAttackID);
    this->psv.pParent->SetDamageActionDeclare(this->psv.pParent);
    v7 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &result, 0xAui64);
    Mypos = v7->_Mypos;
    if ( Mypos >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v7->_Pbitset[Mypos >> 6]._Array[0] &= ~(1i64 << (v7->_Mypos & 0x3F));
    v9 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &result, 0xBui64);
    v10 = v9->_Mypos;
    if ( v10 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v9->_Pbitset[v10 >> 6]._Array[0] &= ~(1i64 << (v9->_Mypos & 0x3F));
    v11 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &result, 0xCui64);
    v12 = v11->_Mypos;
    if ( v12 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v11->_Pbitset[v12 >> 6]._Array[0] &= ~(1i64 << (v11->_Mypos & 0x3F));
    v13 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &result, 0xDui64);
    v14 = v13->_Mypos;
    if ( v14 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v13->_Pbitset[v14 >> 6]._Array[0] &= ~(1i64 << (v13->_Mypos & 0x3F));
    v15 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->bsCollisionFlag, &result, 8ui64);
    v16 = v15->_Mypos;
    if ( v16 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v15->_Pbitset->_Array + (v16 >> 5)) &= ~(1 << (v15->_Mypos & 0x1F));
    v17 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->bsCollisionFlag, &result, 9ui64);
    v18 = v17->_Mypos;
    if ( v18 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v17->_Pbitset->_Array + (v18 >> 5)) &= ~(1 << (v17->_Mypos & 0x1F));
    v19 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->bsCollisionFlag, &result, 2ui64);
    v20 = v19->_Mypos;
    if ( v20 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v19->_Pbitset->_Array + (v20 >> 5)) &= ~(1 << (v19->_Mypos & 0x1F));
    v21 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->bsCollisionFlag, &result, 0i64);
    v22 = v21->_Mypos;
    if ( v22 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v21->_Pbitset->_Array + (v22 >> 5)) &= ~(1 << (v21->_Mypos & 0x1F));
    v23 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &result, 0x11ui64);
    v24 = v23->_Mypos;
    if ( v24 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v23->_Pbitset[v24 >> 6]._Array[0] |= 1i64 << (v23->_Mypos & 0x3F);
    v25 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->bsCollisionFlag, &result, 1ui64);
    v26 = v25->_Mypos;
    if ( v26 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v25->_Pbitset->_Array + (v26 >> 5)) |= 1 << (v25->_Mypos & 0x1F);
    ActorObject::SetCollisionHitDirection(this->psv.pOwner, this->atk.pOwner);
    if ( this->psv.pOwner->GetActorType(this->psv.pOwner) )
    {
      v27 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pOwner->bsCollisionFlag, &result, 8ui64);
      v28 = v27->_Mypos;
      if ( v28 >= 0xF )
        std::_Xout_of_range("invalid bitset<N> position");
      *((_DWORD *)v27->_Pbitset->_Array + (v28 >> 5)) &= ~(1 << (v27->_Mypos & 0x1F));
      v29 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pOwner->bsCollisionFlag, &result, 9ui64);
      v30 = v29->_Mypos;
      if ( v30 >= 0xF )
        std::_Xout_of_range("invalid bitset<N> position");
      *((_DWORD *)v29->_Pbitset->_Array + (v30 >> 5)) &= ~(1 << (v29->_Mypos & 0x1F));
      v31 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pOwner->bsCollisionFlag, &result, 1ui64);
      v32 = v31->_Mypos;
      if ( v32 >= 0xF )
        std::_Xout_of_range("invalid bitset<N> position");
      *((_DWORD *)v31->_Pbitset->_Array + (v32 >> 5)) |= 1 << (v31->_Mypos & 0x1F);
      v33 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pOwner->bsCollisionFlag, &result, 0i64);
      v34 = v33->_Mypos;
      if ( v34 >= 0xF )
        std::_Xout_of_range("invalid bitset<N> position");
      *((_DWORD *)v33->_Pbitset->_Array + (v34 >> 5)) &= ~(1 << (v33->_Mypos & 0x1F));
      v35 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pOwner->bsCollisionFlag, &result, 2ui64);
      v36 = v35->_Mypos;
      if ( v36 >= 0xF )
        std::_Xout_of_range("invalid bitset<N> position");
      *((_DWORD *)v35->_Pbitset->_Array + (v36 >> 5)) &= ~(1 << (v35->_Mypos & 0x1F));
      ActorObject::SetCollisionHitDirection(this->psv.pParent, this->psv.pOwner);
    }
    v37 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &result, 0x13ui64);
    v39 = v37->_Mypos;
    Pbitset = v37->_Pbitset;
    if ( v39 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v41 = v39 >> 6;
    v42 = v37->_Mypos & 0x3F;
    v43 = Pbitset[v41]._Array[0];
    if ( v38 )
      v44 = v43 | (1i64 << v42);
    else
      v44 = v43 & ~(1i64 << v42);
    Pbitset[v41]._Array[0] = v44;
    v45 = std::bitset<21>::operator[]((std::bitset<61> *)&this->atk.pOwner->bsAttackFlag, &result, 3ui64);
    v46 = v45->_Mypos;
    if ( v46 >= 6 )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v45->_Pbitset->_Array + (v46 >> 5)) |= 1 << (v45->_Mypos & 0x1F);
    v47 = std::bitset<21>::operator[]((std::bitset<61> *)&this->atk.pParent->bsAttackFlag, &result, 3ui64);
    v48 = v47->_Mypos;
    if ( v48 >= 6 )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v47->_Pbitset->_Array + (v48 >> 5)) |= 1 << (v47->_Mypos & 0x1F);
    v49 = std::bitset<21>::operator[]((std::bitset<61> *)&this->atk.pOwner->bsAttackFlag, &result, 5ui64);
    v50 = v49->_Mypos;
    if ( v50 >= 6 )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v49->_Pbitset->_Array + (v50 >> 5)) &= ~(1 << (v49->_Mypos & 0x1F));
    v51 = std::bitset<21>::operator[]((std::bitset<61> *)&this->atk.pParent->bsAttackFlag, &result, 5ui64);
    v52 = v51->_Mypos;
    if ( v52 >= 6 )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v51->_Pbitset->_Array + (v52 >> 5)) &= ~(1 << (v51->_Mypos & 0x1F));
    this->psv.pParent->iDamageSkillType = this->atk.data.atk.iSkillType;
    v53 = 0;
    this->psv.pParent->xHitBackFrame.value = 0;
    this->psv.pParent->damageReserve = *(CharaAttackData::DamageReserveData *)((char *)&this->atk.data.hit + 172);
    this->atk.pParent->ResetHitStop(this->atk.pParent);
    this->psv.pParent->ResetHitStop(this->psv.pParent);
    this->psv.pParent->ActionChangeReq(this->psv.pParent, iActionID, 0);
    this->psv.pParent->StateChangeReq(this->psv.pParent, 49);
    this->psv.pParent->iNextDamageID = this->pDmgSet->iNextDamageID;
    this->psv.pParent->iHitBackAngle = HitBackAngle;
    this->psv.pParent->iActFlg2 &= ~0x400u;
    if ( this->atk.data.atk.hitOffset.iSettingX || this->atk.data.atk.hitOffset.iSettingY )
    {
      this->psv.pParent->RequestPositionAtkOffset(
        this->psv.pParent,
        this->atk.pOwner,
        (const CharaAttackData::HitOffsetData *)((char *)&this->atk.data.hit + 220));
      pParent = this->psv.pParent;
      if ( (pParent->iMoveOption & 1) != 0 )
      {
        if ( !this->atk.data.atk.hitOffset.iSettingX )
          ((void (__fastcall *)(ActorChara *))pParent->RequestPositionX)(pParent);
        if ( !this->atk.data.atk.hitOffset.iSettingY )
          ((void (__fastcall *)(ActorChara *))this->psv.pParent->RequestPositionY)(this->psv.pParent);
      }
    }
    else
    {
      ((void (__fastcall *)(ActorChara *))this->psv.pParent->RequestPositionTargetOffset)(this->psv.pParent);
    }
    LOBYTE(v53) = this->atk.pOwner->iCAngle == 0;
    this->psv.pParent->CAngleChangeReq(this->psv.pParent, v53);
    this->psv.pParent->ChangeActionDataTargetReq(this->psv.pParent);
    this->psv.pParent->CancelBlackout(this->psv.pParent);
    if ( this->atk.pOwner->GetActorType(this->atk.pOwner) )
      this->atk.pOwner->ResetHitStop(this->atk.pOwner);
    if ( this->psv.pOwner->GetActorType(this->psv.pOwner) )
      this->psv.pOwner->CancelBlackout(this->psv.pOwner);
    v55 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &result, 0x12ui64);
    if ( (this->atk.data.atk.iAttackFlag & 0x20000) != 0 )
    {
      v56 = v55->_Mypos;
      if ( v56 >= 0x3E )
        std::_Xout_of_range("invalid bitset<N> position");
      v55->_Pbitset[v56 >> 6]._Array[0] |= 1i64 << (v55->_Mypos & 0x3F);
    }
    else
    {
      v57 = v55->_Mypos;
      if ( v57 >= 0x3E )
        std::_Xout_of_range("invalid bitset<N> position");
      v55->_Pbitset[v57 >> 6]._Array[0] &= ~(1i64 << (v55->_Mypos & 0x3F));
    }
    this->psv.pParent->SetThrowEscapePermit(this->psv.pParent);
    v58 = this->psv.pParent->GetActionSystem(this->psv.pParent);
    CameraControl::RequestQuakeCamera(&v58->cameraCtrl, &this->atk.data.atk.quakeCamera);
    DamageSettingUtil::SetDamageEffect(this->psv.pParent, this->atk.data.atk.iDamageAttr);
  }
}

void __fastcall DamageSetting::PlayerDamageSetting(DamageSetting *this)
{
  bool v2; // r15
  __int64 iActionID; // rsi
  const CharaBaseStatus *pBaseStat; // rbx
  ActionSystem *v5; // rcx
  int CommonActionID; // er14
  int iHitNokeDir; // ebx
  DAMAGE_SET_TYPE damageType; // eax
  __int64 v9; // rsi
  std::bitset<61> *v10; // r10
  CharaDamageSetting::Setting *v11; // rbx
  DAMAGE_SET_TYPE v12; // eax
  int iSkillType; // eax
  std::bitset<61>::reference *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 iGroupID; // rcx
  std::bitset<61>::reference *v17; // rax
  unsigned __int64 v18; // rdx
  std::bitset<61>::reference *v19; // rax
  unsigned __int64 v20; // rdx
  int v21; // eax
  ActorChara *v22; // rcx
  std::bitset<61>::reference *v23; // rax
  unsigned __int64 v24; // rdx
  std::bitset<61>::reference *v25; // rax
  unsigned __int64 v26; // rdx
  int v27; // ebx
  BattleSystem::BattleController *v28; // rax
  PLAYER_ID v29; // ebx
  BattleEventHandler *v30; // rax
  bool v31; // al
  int v32; // edx
  ActorChara *pParent; // rcx
  std::bitset<61>::reference *v34; // rax
  unsigned __int64 Mypos; // rdx
  int v36; // ebx
  BattleSystem::BattleController *v37; // rax
  PLAYER_ID v38; // ebx
  BattleEventHandler *Instance; // rax
  _BOOL8 v40; // r8
  _BOOL8 v41; // rdx
  ActorChara *v42; // rcx
  int iAttackFlag; // edx
  ActorChara *v44; // rcx
  float x; // xmm0_4
  float v46; // xmm1_4
  __int64 iCAngle; // rdx
  int v48; // er13
  ActorChara *v49; // rcx
  int iCAngleReserve; // ebx
  ActorChara *v51; // rax
  const CharaDamageSetting::Setting *pDmgSet; // rdx
  __int64 v53; // rcx
  unsigned __int64 v54; // r8
  int v55; // ebx
  bool v56; // r15
  float v57; // xmm6_4
  int v58; // esi
  int v59; // ecx
  ActorChara *v60; // rax
  ActorChara *v61; // rcx
  int v62; // er15
  ActorChara *v63; // rcx
  int value_high; // esi
  int v65; // eax
  ActorChara *v66; // rcx
  int v67; // esi
  ActorChara *v68; // rbx
  int JumpMoveFrame; // eax
  ActorChara *v70; // rcx
  int v71; // eax
  const CharaDamageSetting::Setting *v72; // rax
  int iPursuitFrameAdd; // eax
  std::bitset<61>::reference *v74; // rax
  unsigned __int64 v75; // rdx
  std::bitset<61>::reference *v76; // rax
  unsigned __int64 v77; // rdx
  std::bitset<61>::reference *v78; // rax
  unsigned __int64 v79; // rdx
  std::bitset<61>::reference *v80; // rax
  unsigned __int64 v81; // rdx
  std::bitset<61>::reference *v82; // rax
  unsigned __int64 v83; // rdx
  std::bitset<61>::reference *v84; // rax
  unsigned __int64 v85; // rdx
  std::bitset<61>::reference *v86; // rax
  unsigned __int64 v87; // rdx
  ActorChara_vtbl *v88; // rax
  std::bitset<61>::reference *v89; // rax
  unsigned __int64 v90; // rdx
  std::bitset<61>::reference *v91; // rax
  unsigned __int64 v92; // rdx
  std::bitset<61>::reference *v93; // rax
  unsigned __int64 v94; // rdx
  ActionSystem *v95; // rax
  std::bitset<61>::reference *v96; // rax
  unsigned __int64 v97; // rdx
  ActorChara *v98; // rcx
  std::bitset<61>::reference *v99; // rax
  unsigned __int64 v100; // rdx
  std::bitset<61>::reference *v101; // rax
  unsigned __int64 v102; // rdx
  std::bitset<61>::reference *v103; // rax
  unsigned __int64 v104; // rdx
  ActionSystem *v105; // rax
  std::bitset<61>::reference *v106; // rax
  unsigned __int64 v107; // rdx
  std::bitset<61>::reference *v108; // rax
  unsigned __int64 v109; // rdx
  std::bitset<61>::reference *v110; // rax
  unsigned __int64 v111; // rdx
  Actor::ACTOR_TYPE v112; // eax
  std::bitset<62> *p_systemFlag; // rcx
  std::bitset<61>::reference *v114; // rax
  unsigned __int64 v115; // rdx
  std::bitset<61>::reference *v116; // rax
  unsigned __int64 v117; // rdx
  std::bitset<61>::reference *v118; // rax
  unsigned __int64 v119; // rdx
  std::bitset<61>::reference *v120; // rax
  unsigned __int64 v121; // rdx
  std::bitset<61>::reference *v122; // rax
  unsigned __int64 v123; // rdx
  BattleSystem::BattleController *v124; // rbx
  BattleSystem::BattleController *v125; // rax
  int v126; // eax
  PLAYER_ID v127; // ebx
  BattleEventHandler *v128; // rax
  std::bitset<61>::reference *v129; // rax
  char v130; // r9
  unsigned __int64 v131; // rdx
  std::bitset<61> *Pbitset; // r8
  unsigned __int64 v133; // rcx
  __int64 v134; // rdx
  unsigned __int64 v135; // rax
  __int64 v136; // rax
  int HitBackAngle; // [rsp+48h] [rbp-70h]
  BattleSystem::BattleController *v138; // [rsp+48h] [rbp-70h]
  std::bitset<61>::reference v139; // [rsp+58h] [rbp-60h] BYREF

  v2 = 0;
  iActionID = this->pDmgSet->iActionID;
  pBaseStat = this->psv.pParent->pBaseStat;
  if ( !pBaseStat->CheckFileID(&pBaseStat->CharaFileBase) )
    return;
  if ( (unsigned int)iActionID >= pBaseStat->dataHeader.uiCommonActionCount )
    return;
  CommonActionID = pBaseStat->pCommonAct[iActionID].iActionID;
  if ( CommonActionID < 0 )
    return;
  iHitNokeDir = this->atk.data.atk.iHitNokeDir;
  damageType = this->damageType;
  if ( damageType == NORMAL )
    goto LABEL_12;
  if ( damageType <= NORMAL )
    return;
  if ( damageType > CROUCH_GUARD )
  {
    if ( damageType != RESERVE_DAMAGE )
      return;
LABEL_12:
    ActionSystem::RequestSoundStopDamaged(v5, this->psv.pParent);
    v9 = 80i64;
    goto LABEL_13;
  }
  iHitNokeDir = this->atk.data.atk.iGuardNokeDir;
  if ( this->psv.pParent->IsJustGuard(this->psv.pParent) )
    this->psv.pParent->iGuardInputCount = 30;
  v9 = 104i64;
LABEL_13:
  HitBackAngle = DamageSettingUtil::GetHitBackAngle(this->atk.pOwner, this->psv.pParent, iHitNokeDir);
  if ( HIDWORD(v10[138]._Array[0]) )
  {
    if ( (unsigned int)(this->damageType - 1) <= 1 )
    {
      if ( !LODWORD(v10[143]._Array[0])
        && !(*(unsigned __int8 (__fastcall **)(std::bitset<61> *))(v10->_Array[0] + 2864))(v10) )
      {
        v31 = this->psv.pParent->IsCrouch(this->psv.pParent);
        v32 = 198;
        if ( !v31 )
          v32 = 196;
        CommonActionID = CharaBaseStatus::GetCommonActionID((CharaBaseStatus *)this->psv.pParent->pBaseStat, v32);
        pParent = this->psv.pParent;
        if ( CommonActionID >= 0 )
        {
          v34 = std::bitset<21>::operator[]((std::bitset<61> *)&pParent->systemFlag, &v139, 9ui64);
          Mypos = v34->_Mypos;
          if ( Mypos >= 0x3E )
            std::_Xout_of_range("invalid bitset<N> position");
          v34->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (v34->_Mypos & 0x3F);
          v36 = this->atk.pOwner->GetPlayerID(this->atk.pOwner);
          BattleSystem::BattleController::GetActionSystem();
          BattleSystem::BattleController::AddBattleScore(v37, v36, 5000);
          v38 = this->atk.pOwner->GetPlayerID(this->atk.pOwner);
          Instance = BattleEventHandler::getInstance();
          BattleEventHandler::CallEvent_CharacterActivity(Instance, v38, GUARD_CRASH, 5000);
          this->psv.pParent->ResetGuardPower(this->psv.pParent);
        }
        else
        {
          CommonActionID = CharaBaseStatus::GetCommonActionID(
                             (CharaBaseStatus *)pParent->pBaseStat,
                             this->pDmgSet->iActionID);
          this->psv.pParent->xGuardPower.value = 0x10000;
        }
      }
    }
    else if ( !HIDWORD(v10[144]._Array[0])
           && !(*(unsigned __int8 (__fastcall **)(std::bitset<61> *))(v10->_Array[0] + 2864))(v10) )
    {
      CommonActionID = CharaBaseStatus::GetCommonActionID((CharaBaseStatus *)this->psv.pParent->pBaseStat, 192);
      v22 = this->psv.pParent;
      if ( CommonActionID >= 0 )
      {
        this->pDmgSet = &StunDamageSettingData;
        v23 = std::bitset<21>::operator[]((std::bitset<61> *)&v22->systemFlag, &v139, 0x15ui64);
        v24 = v23->_Mypos;
        if ( v24 >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        v23->_Pbitset[v24 >> 6]._Array[0] |= 1i64 << (v23->_Mypos & 0x3F);
        v25 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &v139, 0x16ui64);
        v26 = v25->_Mypos;
        if ( v26 >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        v25->_Pbitset[v26 >> 6]._Array[0] |= 1i64 << (v25->_Mypos & 0x3F);
        v27 = this->atk.pOwner->GetPlayerID(this->atk.pOwner);
        BattleSystem::BattleController::GetActionSystem();
        BattleSystem::BattleController::AddBattleScore(v28, v27, 1000);
        v29 = this->atk.pOwner->GetPlayerID(this->atk.pOwner);
        v30 = BattleEventHandler::getInstance();
        BattleEventHandler::CallEvent_CharacterActivity(v30, v29, STUN, 1000);
        this->psv.pParent->xStunDamageFrame.value = 11796480;
      }
      else
      {
        CommonActionID = CharaBaseStatus::GetCommonActionID((CharaBaseStatus *)v22->pBaseStat, this->pDmgSet->iActionID);
        this->psv.pParent->xStunPower.value = 0x10000;
      }
    }
  }
  else
  {
    v11 = 0i64;
    if ( (*((_BYTE *)&this->atk.data.hit + 184) & 2) == 0 )
    {
      v12 = this->damageType;
      if ( v12 )
      {
        if ( v12 == RESERVE_DAMAGE )
        {
          iGroupID = this->pDmgSet->iGroupID;
          if ( (_DWORD)iGroupID == 1 )
          {
            v11 = &LowAtkKODamageSettingData;
            v17 = std::bitset<21>::operator[](v10 + 137, &v139, 0x19ui64);
            v18 = v17->_Mypos;
            if ( v18 >= 0x3E )
              std::_Xout_of_range("invalid bitset<N> position");
            v17->_Pbitset[v18 >> 6]._Array[0] |= 1i64 << (v17->_Mypos & 0x3F);
          }
          else
          {
            v11 = (CharaDamageSetting::Setting *)cpKODamageSettingList[iGroupID];
          }
        }
      }
      else
      {
        v11 = (CharaDamageSetting::Setting *)cpKODamageSettingList[this->pDmgSet->iGroupID];
        if ( v11
          && ((*(unsigned __int8 (__fastcall **)(std::bitset<61> *))(v10->_Array[0] + 2464))(v10)
           || this->psv.pParent->IsCrouch(this->psv.pParent)) )
        {
          iSkillType = this->atk.data.atk.iSkillType;
          if ( iSkillType == 1 )
          {
            v11 = &LowAtkKODamageSettingData;
            v14 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &v139, 0x19ui64);
            v15 = v14->_Mypos;
            if ( v15 >= 0x3E )
              std::_Xout_of_range("invalid bitset<N> position");
            v14->_Pbitset[v15 >> 6]._Array[0] |= 1i64 << (v14->_Mypos & 0x3F);
          }
          else if ( iSkillType >= 5 )
          {
            v11 = &SpecialKODamageSettingData;
          }
        }
      }
    }
    if ( (unsigned int)(this->damageType - 1) > 1 )
    {
      if ( !v11 )
        goto LABEL_57;
    }
    else
    {
      v11 = &CheapKODamageSettingData;
      v19 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &v139, 0x19ui64);
      v20 = v19->_Mypos;
      if ( v20 >= 0x3E )
        std::_Xout_of_range("invalid bitset<N> position");
      v19->_Pbitset[v20 >> 6]._Array[0] |= 1i64 << (v19->_Mypos & 0x3F);
    }
    v21 = CharaBaseStatus::GetCommonActionID((CharaBaseStatus *)this->psv.pParent->pBaseStat, v11->iActionID);
    if ( v21 > 0 )
    {
      CommonActionID = v21;
      this->pDmgSet = v11;
    }
  }
LABEL_57:
  this->atk.pOwner->SetHitStop(this->atk.pOwner, *(unsigned int *)((char *)&this->atk.rect.h + v9), 0);
  LOBYTE(v40) = 1;
  this->psv.pParent->SetHitStop(this->psv.pParent, *(unsigned int *)((char *)&this->atk.rect + v9 + 16), v40);
  v42 = this->psv.pParent;
  if ( v42->xHitStopFrame.value > 0 )
  {
    LOBYTE(v41) = 1;
    v42->SetHitStopVibrate(v42, v41);
  }
  iAttackFlag = this->atk.data.atk.iAttackFlag;
  if ( (iAttackFlag & 0x10000) == 0
    || (v44 = this->psv.pParent, x = this->atk.pOwner->vPos.x, v46 = v44->vPos.x, x == v46) )
  {
    if ( (iAttackFlag & 0x2000) != 0 )
    {
      iCAngle = (unsigned int)this->atk.pOwner->iCAngle;
    }
    else
    {
      if ( (iAttackFlag & 0x200000) != 0 )
        goto LABEL_67;
      iCAngle = this->atk.pOwner->iCAngle == 0;
    }
    this->psv.pParent->CAngleChangeReq(this->psv.pParent, iCAngle);
    goto LABEL_67;
  }
  v44->CAngleChangeReq(v44, v46 > x);
LABEL_67:
  if ( this->psv.pParent->IsGuardCrash(this->psv.pParent) )
  {
    this->psv.pParent->ResetSpeed(this->psv.pParent);
    v48 = 55;
    v2 = 1;
    this->psv.pParent->xPursuitFrame.value = -65536;
    this->psv.pParent->ResetInvalidAttackID(this->psv.pParent);
    v49 = this->psv.pParent;
    iCAngleReserve = v49->iCAngleReserve;
    v49->GetActionEndFrame(v49, CommonActionID, 1);
    v51 = this->psv.pParent;
    if ( v51->xHitStopFrame.value > 0 )
      v51->xHitStopFrame.value += 0x10000;
    ((void (__fastcall *)(ActorChara *))this->psv.pParent->SetSpeed)(this->psv.pParent);
  }
  else
  {
    pDmgSet = this->pDmgSet;
    v53 = pDmgSet->iGroupID;
    v48 = ciDamageGroupActorStat[v53];
    v54 = 0x140000000ui64;
    switch ( (int)v53 )
    {
      case 0:
      case 5:
      case 9:
      case 10:
      case 11:
        ((void (__fastcall *)(ActorChara *, const CharaDamageSetting::Setting *, unsigned __int64))this->psv.pParent->SetSpeed)(
          this->psv.pParent,
          pDmgSet,
          0x140000000ui64);
        break;
      case 1:
      case 4:
        v55 = this->psv.pParent->GetHitBackEndFrame(this->psv.pParent, CommonActionID, 1);
        if ( v55 <= 0 )
          v55 = 1;
        v56 = this->psv.pParent->IsLoopAction(this->psv.pParent, CommonActionID, 1);
        if ( v56 && v55 > 20 )
          v55 = 20;
        v57 = (float)v55;
        ((void (__fastcall *)(ActorChara *))this->psv.pParent->SetSpeed)(this->psv.pParent);
        v58 = *(_DWORD *)((char *)&this->atk.rect.y + v9);
        if ( this->psv.pParent->IsJustGuard(this->psv.pParent) && v58 < 0 )
          v58 = 0;
        if ( !v56 )
        {
          v59 = v58
              + v55
              - ((__int64 (__fastcall *)(ActorChara *, _QWORD, __int64, __int64))this->psv.pParent->GetActionEndFrame)(
                  this->psv.pParent,
                  (unsigned int)CommonActionID,
                  1i64,
                  1i64);
          if ( v59 < 1 )
            v59 = 1;
          v60 = this->psv.pParent;
          if ( v60->xHitStopFrame.value > 0 )
            v57 = v57 + -1.0;
          v60->fActionPlayRateReserve = v57 / (float)v59;
          this->psv.pParent->fActionPlayRateReserve = this->psv.pParent->fActionPlayRateReserve + 0.000001;
        }
        v61 = this->atk.pParent;
        if ( v61 && v61->IsCheckAdvantageFrame(v61) )
        {
          v62 = v58 + SHIWORD(this->psv.pParent->xHitStopFrame.value);
          v63 = this->atk.pParent;
          value_high = SHIWORD(v63->xHitStopFrame.value);
          v65 = v63->GetActionEndFrame(v63, v63->iActNo, 1, 0);
          v66 = this->atk.pParent;
          v67 = -1 - v66->iActFrame + v65 + value_high;
          if ( v66->GetActionCategoryID(v66, v66->iActNo, 0) == 2 )
          {
            v68 = this->atk.pParent;
            JumpMoveFrame = (int)BattleSystem::GetJumpMoveFrame(v68->vMov.y, v68->vAdd.y, v68->vPos.y);
            if ( JumpMoveFrame > 0 )
              v67 = JumpMoveFrame + SHIWORD(v68->xHitStopFrame.value);
          }
          this->atk.pParent->damageInfo.iAdvantageFrame = v62 - v67;
          this->atk.pParent->damageInfo.bEnableAdvantageFrame = 1;
        }
        v2 = 1;
        break;
      case 2:
        goto $LN64_2;
      case 3:
        v2 = 1;
        if ( !((unsigned __int8 (__fastcall *)(ActorChara *, const CharaDamageSetting::Setting *, unsigned __int64))this->psv.pParent->IsAirDamaged)(
                this->psv.pParent,
                pDmgSet,
                0x140000000ui64)
          && !this->psv.pParent->IsAirThrowDamaged(this->psv.pParent) )
        {
          goto $LN64_2;
        }
        v70 = this->psv.pParent;
        if ( v70->vMov.x == 0.0 )
          goto $LN64_2;
        v71 = v70->GetActionEndFrame(v70, CommonActionID, 1);
        DamageSettingUtil::BoundMoveCalc(this->psv.pParent, v71);
        break;
      case 6:
      case 7:
        v2 = 1;
$LN64_2:
        ((void (__fastcall *)(ActorChara *, const CharaDamageSetting::Setting *, unsigned __int64))this->psv.pParent->ResetSpeed)(
          this->psv.pParent,
          pDmgSet,
          v54);
        break;
      case 8:
        v48 = 46;
        v2 = 1;
        ((void (__fastcall *)(ActorChara *, const CharaDamageSetting::Setting *, unsigned __int64))this->psv.pParent->SetSpeed)(
          this->psv.pParent,
          pDmgSet,
          0x140000000ui64);
        break;
      default:
        break;
    }
    v72 = this->pDmgSet;
    v139._Pbitset = (std::bitset<61> *)0x100010001000001i64;
    LODWORD(v139._Mypos) = 16843009;
    if ( *((_BYTE *)&v139._Pbitset + v72->iGroupID) )
    {
      if ( ((unsigned __int8 (__fastcall *)(ActorChara *, const CharaDamageSetting::Setting *, unsigned __int64))this->psv.pParent->IsAirDamaged)(
             this->psv.pParent,
             pDmgSet,
             v54)
        || this->psv.pParent->IsAirThrowDamaged(this->psv.pParent) )
      {
        iPursuitFrameAdd = this->atk.data.atk.iPursuitFrameAdd;
      }
      else
      {
        iPursuitFrameAdd = this->atk.data.atk.iPursuitFrame;
      }
      this->psv.pParent->xPursuitFrame.value = iPursuitFrameAdd << 16;
      if ( this->bCounterDamage )
        this->psv.pParent->xPursuitFrame.value = -65536;
      this->psv.pParent->SetInvalidAttackID(this->psv.pParent, this->atk.data.atk.iSetInvalidAttackID);
    }
    else
    {
      this->psv.pParent->xPursuitFrame.value = -65536;
    }
    if ( this->atk.data.atk.iDownFrame <= 0 || this->psv.pParent->IsStun(this->psv.pParent) )
      this->psv.pParent->xDownFrame.value = 655360;
    else
      this->psv.pParent->xDownFrame.value = this->atk.data.atk.iDownFrame << 16;
    iCAngleReserve = HitBackAngle;
  }
  this->psv.pParent->SetDamageActionDeclare(this->psv.pParent);
  v74 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &v139, 0xAui64);
  v75 = v74->_Mypos;
  if ( v75 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v74->_Pbitset[v75 >> 6]._Array[0] &= ~(1i64 << (v74->_Mypos & 0x3F));
  v76 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &v139, 0xBui64);
  v77 = v76->_Mypos;
  if ( v77 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v76->_Pbitset[v77 >> 6]._Array[0] &= ~(1i64 << (v76->_Mypos & 0x3F));
  v78 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &v139, 0xCui64);
  v79 = v78->_Mypos;
  if ( v79 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v78->_Pbitset[v79 >> 6]._Array[0] &= ~(1i64 << (v78->_Mypos & 0x3F));
  v80 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &v139, 0xDui64);
  v81 = v80->_Mypos;
  if ( v81 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v80->_Pbitset[v81 >> 6]._Array[0] &= ~(1i64 << (v80->_Mypos & 0x3F));
  v82 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &v139, 0x11ui64);
  v83 = v82->_Mypos;
  if ( v83 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v82->_Pbitset[v83 >> 6]._Array[0] &= ~(1i64 << (v82->_Mypos & 0x3F));
  v84 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->bsCollisionFlag, &v139, 8ui64);
  v85 = v84->_Mypos;
  if ( v85 >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v84->_Pbitset->_Array + (v85 >> 5)) &= ~(1 << (v84->_Mypos & 0x1F));
  v86 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->bsCollisionFlag, &v139, 9ui64);
  v87 = v86->_Mypos;
  if ( v87 >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v86->_Pbitset->_Array + (v87 >> 5)) &= ~(1 << (v86->_Mypos & 0x1F));
  this->psv.pParent->CancelBlackout(this->psv.pParent);
  this->psv.pParent->ActionChangeReq(this->psv.pParent, CommonActionID, 0);
  this->psv.pParent->StateChangeReq(this->psv.pParent, v48);
  this->psv.pParent->iNextDamageID = this->pDmgSet->iNextDamageID;
  this->psv.pParent->iHitBackAngle = iCAngleReserve;
  this->psv.pParent->iActFlg2 &= ~0x400u;
  v88 = this->psv.pParent->__vftable;
  if ( (unsigned int)(this->damageType - 1) <= 1 )
  {
    if ( !((unsigned __int8 (*)(void))v88->IsGuardCrash)() )
    {
      v96 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &v139, 0xDui64);
      v97 = v96->_Mypos;
      if ( v97 >= 0x3E )
        std::_Xout_of_range("invalid bitset<N> position");
      v96->_Pbitset[v97 >> 6]._Array[0] |= 1i64 << (v96->_Mypos & 0x3F);
      this->psv.pParent->SetGuardActionDeclare(this->psv.pParent);
    }
    v98 = this->psv.pParent;
    if ( (v98->iMoveOption & 1) != 0 )
    {
      ((void (*)(void))v98->RequestPositionX)();
      ((void (*)(void))this->psv.pParent->RequestPositionY)();
    }
    if ( v2 )
      ((void (__fastcall *)(ActorChara *))this->psv.pParent->RequestPositionY)(this->psv.pParent);
    v99 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->bsCollisionFlag, &v139, 2ui64);
    v100 = v99->_Mypos;
    if ( v100 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v99->_Pbitset->_Array + (v100 >> 5)) |= 1 << (v99->_Mypos & 0x1F);
    v101 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->bsCollisionFlag, &v139, 0i64);
    v102 = v101->_Mypos;
    if ( v102 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v101->_Pbitset->_Array + (v102 >> 5)) &= ~(1 << (v101->_Mypos & 0x1F));
    v103 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->bsCollisionFlag, &v139, 1ui64);
    v104 = v103->_Mypos;
    if ( v104 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v103->_Pbitset->_Array + (v104 >> 5)) &= ~(1 << (v103->_Mypos & 0x1F));
    this->psv.pParent->iDamageAttr = 0;
    if ( (this->atk.data.atk.iAttackFlag & 0x40000) != 0 )
    {
      v105 = this->psv.pParent->GetActionSystem(this->psv.pParent);
      CameraControl::RequestQuakeCamera(&v105->cameraCtrl, &this->atk.data.atk.quakeCamera);
    }
  }
  else
  {
    if ( ((unsigned __int8 (*)(void))v88->IsStun)() )
      this->psv.pParent->damageReserve.iAtkID = 0;
    else
      this->psv.pParent->damageReserve = *(CharaAttackData::DamageReserveData *)((char *)&this->atk.data.hit + 172);
    this->psv.pParent->xThrowMutekiCount.value = 0;
    DamageSettingUtil::SetAttackHitOffset(&this->atk, &this->psv, v2);
    v89 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->bsCollisionFlag, &v139, 2ui64);
    v90 = v89->_Mypos;
    if ( v90 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v89->_Pbitset->_Array + (v90 >> 5)) &= ~(1 << (v89->_Mypos & 0x1F));
    v91 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->bsCollisionFlag, &v139, 0i64);
    v92 = v91->_Mypos;
    if ( v92 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v91->_Pbitset->_Array + (v92 >> 5)) |= 1 << (v91->_Mypos & 0x1F);
    v93 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->bsCollisionFlag, &v139, 1ui64);
    v94 = v93->_Mypos;
    if ( v94 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v93->_Pbitset->_Array + (v94 >> 5)) &= ~(1 << (v93->_Mypos & 0x1F));
    v95 = this->psv.pParent->GetActionSystem(this->psv.pParent);
    CameraControl::RequestQuakeCamera(&v95->cameraCtrl, &this->atk.data.atk.quakeCamera);
    DamageSettingUtil::SetDamageEffect(this->psv.pParent, this->atk.data.atk.iDamageAttr);
  }
  ActorObject::SetCollisionHitDirection(this->psv.pOwner, this->atk.pOwner);
  if ( this->psv.pOwner->GetActorType(this->psv.pOwner) )
  {
    v106 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pOwner->bsCollisionFlag, &v139, 8ui64);
    v107 = v106->_Mypos;
    if ( v107 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v106->_Pbitset->_Array + (v107 >> 5)) &= ~(1 << (v106->_Mypos & 0x1F));
    v108 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pOwner->bsCollisionFlag, &v139, 9ui64);
    v109 = v108->_Mypos;
    if ( v109 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v108->_Pbitset->_Array + (v109 >> 5)) &= ~(1 << (v108->_Mypos & 0x1F));
    v110 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pOwner->bsCollisionFlag, &v139, 1ui64);
    v111 = v110->_Mypos;
    if ( v111 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v110->_Pbitset->_Array + (v111 >> 5)) &= ~(1 << (v110->_Mypos & 0x1F));
    ActorObject::SetCollisionHit(this->psv.pOwner, this->psv.pParent->bsCollisionFlag._Array[0] & 1);
    ActorObject::SetCollisionGuard(this->psv.pOwner, (this->psv.pParent->bsCollisionFlag._Array[0] & 4) != 0);
    this->psv.pOwner->CancelBlackout(this->psv.pOwner);
    ActorObject::SetCollisionHitDirection(this->psv.pParent, this->psv.pOwner);
  }
  v112 = this->atk.pOwner->GetActorType(this->atk.pOwner);
  p_systemFlag = &this->psv.pParent->systemFlag;
  if ( v112 )
  {
    v118 = std::bitset<21>::operator[]((std::bitset<61> *)p_systemFlag, &v139, 0xBui64);
    v119 = v118->_Mypos;
    if ( v119 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v118->_Pbitset[v119 >> 6]._Array[0] |= 1i64 << (v118->_Mypos & 0x3F);
  }
  else if ( this->atk.data.atk.iDataType == 1 )
  {
    v114 = std::bitset<21>::operator[]((std::bitset<61> *)p_systemFlag, &v139, 0xBui64);
    v115 = v114->_Mypos;
    if ( v115 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v114->_Pbitset[v115 >> 6]._Array[0] |= 1i64 << (v114->_Mypos & 0x3F);
  }
  else
  {
    v116 = std::bitset<21>::operator[]((std::bitset<61> *)p_systemFlag, &v139, 0xAui64);
    v117 = v116->_Mypos;
    if ( v117 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v116->_Pbitset[v117 >> 6]._Array[0] |= 1i64 << (v116->_Mypos & 0x3F);
  }
  if ( this->atk.pOwner->GetActionCategoryID(this->atk.pOwner, this->atk.pOwner->iActNo, 0) == 2 )
  {
    v120 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &v139, 0xCui64);
    v121 = v120->_Mypos;
    if ( v121 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v120->_Pbitset[v121 >> 6]._Array[0] |= 1i64 << (v120->_Mypos & 0x3F);
  }
  if ( this->bCounterDamage )
  {
    v122 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &v139, 0xEui64);
    v123 = v122->_Mypos;
    if ( v123 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v122->_Pbitset[v123 >> 6]._Array[0] |= 1i64 << (v122->_Mypos & 0x3F);
    v124 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v138 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v138);
      v124 = v125;
      BattleSystem::BattleController::instance = v125;
    }
    v126 = this->atk.pOwner->GetPlayerID(this->atk.pOwner);
    BattleSystem::BattleController::AddBattleScore(v124, v126, 1000);
    v127 = this->atk.pOwner->GetPlayerID(this->atk.pOwner);
    v128 = BattleEventHandler::getInstance();
    BattleEventHandler::CallEvent_CharacterActivity(v128, v127, COUNTER_HIT, 1000);
  }
  v129 = std::bitset<21>::operator[]((std::bitset<61> *)&this->psv.pParent->systemFlag, &v139, 0x13ui64);
  v131 = v129->_Mypos;
  Pbitset = v129->_Pbitset;
  if ( v131 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v133 = v131 >> 6;
  v134 = v129->_Mypos & 0x3F;
  v135 = Pbitset[v133]._Array[0];
  if ( v130 )
    v136 = v135 | (1i64 << v134);
  else
    v136 = v135 & ~(1i64 << v134);
  Pbitset[v133]._Array[0] = v136;
  this->psv.pParent->iDamageSkillType = this->atk.data.atk.iSkillType;
  this->psv.pParent->xHitBackFrame.value = 0;
}

void __fastcall DamageSetControl::PlayerGuardPointSetting(
        DamageSetControl *this,
        const Collision::HitRectWork *atk,
        const Collision::HitRectWork *psv,
        const Collision::HitRect *centerRect)
{
  ActorChara *pParent; // r14
  __int64 iGaugeAddMine; // rdx
  ActorChara *v9; // rcx
  Actor::ACTOR_TYPE v10; // eax
  ActorChara *pOwner; // rcx
  bool v12; // zf
  ActorChara_vtbl *v13; // rax
  __int64 iHitStopFrameMine; // rdx
  __int64 v15; // rdx
  std::bitset<61>::reference *v16; // rax
  unsigned __int64 Mypos; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  std::bitset<15> *p_bsCollisionFlag; // rcx
  std::bitset<61>::reference *v21; // rax
  unsigned __int64 v22; // rdx
  std::bitset<61>::reference *v23; // rax
  unsigned __int64 v24; // rdx
  float v25; // xmm6_4
  CommonEffect::EFFECT_INDEX::ID v26; // er9
  std::bitset<61>::reference *v27; // rax
  unsigned __int64 v28; // rdx
  std::bitset<61>::reference *v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  ActorObject *v33; // rcx
  float v34; // xmm2_4
  bool v35; // [rsp+28h] [rbp-50h]
  int v36; // [rsp+30h] [rbp-48h]
  std::bitset<61>::reference result; // [rsp+48h] [rbp-30h] BYREF

  pParent = psv->pParent;
  if ( !pParent )
    return;
  iGaugeAddMine = (unsigned int)atk->data.atk.guardData.iGaugeAddMine;
  if ( (_DWORD)iGaugeAddMine == -1 )
  {
    if ( atk->data.atk.iSkillType < 6 )
      iGaugeAddMine = (unsigned int)(500 * atk->data.atk.iDamage / 1000);
    else
      iGaugeAddMine = 0i64;
  }
  v9 = atk->pParent;
  if ( v9 )
    v9->AddExPower(v9, iGaugeAddMine, 0);
  pParent->AddExPower(pParent, 0, 0);
  v10 = atk->pOwner->GetActorType(atk->pOwner);
  pOwner = (ActorChara *)atk->pOwner;
  v12 = v10 == CHARA;
  v13 = pOwner->ActorCharaBase::ActorObject::Actor::__vftable;
  if ( !v12 )
  {
    if ( ((unsigned int (*)(void))v13->GetActorType)() == 2 )
    {
      ((void (__fastcall *)(ActorObject *))atk->pOwner->__vftable[1]._branchIsFlag2)(atk->pOwner);
      ActorObject::SetEraseEffectInvalid(atk->pOwner, (psv->data.atk.iDamage & 0x40000) != 0);
    }
    goto LABEL_18;
  }
  if ( psv->data.atk.iSkillType != 7 )
  {
    v15 = 14i64;
    goto LABEL_14;
  }
  if ( atk->data.atk.iDataType != 1 )
  {
    v15 = 12i64;
LABEL_14:
    v13->SetHitStop(pOwner, v15, 0);
    pOwner = psv->pParent;
    v13 = pOwner->ActorCharaBase::ActorObject::Actor::__vftable;
    iHitStopFrameMine = 12i64;
    goto LABEL_15;
  }
  iHitStopFrameMine = (unsigned int)atk->data.atk.guardData.iHitStopFrameMine;
LABEL_15:
  v13->SetHitStop(pOwner, iHitStopFrameMine, 0);
LABEL_18:
  atk->pOwner->SetAttackHit(atk->pOwner, 0);
  v16 = std::bitset<21>::operator[]((std::bitset<61> *)&atk->pOwner->bsAttackFlag, &result, 5ui64);
  Mypos = v16->_Mypos;
  if ( Mypos >= 6 )
    std::_Xout_of_range("invalid bitset<N> position");
  v18 = Mypos >> 5;
  v19 = v16->_Mypos & 0x1F;
  *((_DWORD *)v16->_Pbitset->_Array + v18) &= ~(1 << v19);
  LOBYTE(v19) = 1;
  atk->pOwner->SetAttackGuard(atk->pOwner, v19);
  psv->pParent->iDamageSkillType = atk->data.atk.iSkillType;
  psv->pParent->SetInvalidHitCheck(psv->pParent);
  psv->pParent->SetActionBranchKey(psv->pParent, psv->data.atk.iLowerDamage);
  ActorObject::SetCollisionHitDirection(psv->pOwner, atk->pOwner);
  if ( psv->pOwner->GetActorType(psv->pOwner) )
  {
    psv->pOwner->SetInvalidHitCheck(psv->pOwner);
    psv->pOwner->SetActionBranchKey(psv->pOwner, psv->data.atk.iLowerDamage);
    ActorObject::SetCollisionHitDirection(psv->pParent, psv->pOwner);
  }
  p_bsCollisionFlag = &psv->pOwner->bsCollisionFlag;
  if ( psv->data.atk.iSkillType == 7 )
  {
    v21 = std::bitset<21>::operator[]((std::bitset<61> *)p_bsCollisionFlag, &result, 8ui64);
    v22 = v21->_Mypos;
    if ( v22 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v21->_Pbitset->_Array + (v22 >> 5)) |= 1 << (v21->_Mypos & 0x1F);
    v23 = std::bitset<21>::operator[]((std::bitset<61> *)&psv->pParent->bsCollisionFlag, &result, 8ui64);
    v24 = v23->_Mypos;
    if ( v24 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v23->_Pbitset->_Array + (v24 >> 5)) |= 1 << (v23->_Mypos & 0x1F);
    v25 = FLOAT_0_5;
    DamageSettingUtil::RequestGuardSound(psv->pOwner, &atk->data.atk, (float)(centerRect->w * 0.5) + centerRect->x);
    v26 = SUPER_MOVE_FINISH|0x10;
  }
  else
  {
    v27 = std::bitset<21>::operator[]((std::bitset<61> *)p_bsCollisionFlag, &result, 9ui64);
    v28 = v27->_Mypos;
    if ( v28 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v27->_Pbitset->_Array + (v28 >> 5)) |= 1 << (v27->_Mypos & 0x1F);
    v29 = std::bitset<21>::operator[]((std::bitset<61> *)&psv->pParent->bsCollisionFlag, &result, 9ui64);
    v30 = v29->_Mypos;
    if ( v30 >= 0xF )
      std::_Xout_of_range("invalid bitset<N> position");
    v31 = v30 >> 5;
    v32 = v29->_Mypos & 0x1F;
    *((_DWORD *)v29->_Pbitset->_Array + v31) |= 1 << v32;
    v33 = psv->pOwner;
    v25 = FLOAT_0_5;
    v34 = (float)(centerRect->w * 0.5) + centerRect->x;
    if ( v33->iCharNo == 3 )
      DamageSettingUtil::RequestCharaSound(v33, v32, v34);
    else
      DamageSettingUtil::RequestGuardSound(v33, &atk->data.atk, v34);
    v26 = STUN|0x20;
  }
  DamageSettingUtil::CreateCommonEffect(
    (float)(centerRect->w * v25) + centerRect->x,
    centerRect->y - (float)(centerRect->h * v25),
    0.0,
    v26,
    atk->pOwner->iCAngle,
    v35,
    v36);
}

void __fastcall DamageSetControl::PlayerStatusCheck(ActionSystem *actSys)
{
  ActionSystem *v1; // r14
  __int64 v2; // r13
  __int64 v3; // r15
  ActorChara **pPlayer; // r12
  ActorChara *v5; // rdi
  int *v6; // rbx
  int v7; // edx
  __int64 v8; // rax
  BattleSystem::BattleController *v9; // r9
  BattleSystem::BattleController *v10; // rax
  __int64 iPlayerID; // r8
  int iBattleScore; // ecx
  unsigned int v13; // edx
  int v14; // ecx
  unsigned int v15; // edx
  int v16; // ecx
  int v17; // er14
  BattleEventHandler *Instance; // rsi
  BattleEventHandler::Listener **i; // rbx
  char *v20; // rbx
  Actor::SYSTEM_STAT systemStat; // eax
  float *v22; // rax
  float SoundPanPosition; // xmm2_4
  char v24; // al
  const extension::SoundHashKey *SoundNameKey; // rax
  __int64 v26; // rdx
  const extension::SoundHashKey *v27; // r14
  char *v28; // rcx
  std::bitset<61>::reference *v29; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  BattleSystem::BattleController *v33; // r9
  BattleSystem::BattleController *v34; // rax
  __int64 v35; // r8
  int v36; // ecx
  unsigned int v37; // edx
  int v38; // ecx
  unsigned int v39; // edx
  int v40; // ecx
  int v41; // er14
  BattleEventHandler *v42; // rsi
  BattleEventHandler::Listener **j; // rbx
  char *v44; // rbx
  Actor::SYSTEM_STAT v45; // eax
  float *v46; // rax
  float v47; // xmm2_4
  char v48; // al
  const extension::SoundHashKey *v49; // rax
  __int64 v50; // rdx
  const extension::SoundHashKey *v51; // r14
  char *v52; // rcx
  BattleSystem::BattleController *v53; // r9
  BattleSystem::BattleController *v54; // rax
  __int64 v55; // r8
  int v56; // ecx
  unsigned int v57; // edx
  int v58; // ecx
  unsigned int v59; // edx
  int v60; // ecx
  int v61; // esi
  BattleEventHandler *v62; // rdi
  BattleEventHandler::Listener **k; // rbx
  ActionBlackout::BlackoutReq req; // [rsp+20h] [rbp-E0h] BYREF
  ActionBlackout::BlackoutReq v65; // [rsp+48h] [rbp-B8h] BYREF
  ActionBlackout::BlackoutReq v66; // [rsp+70h] [rbp-90h] BYREF
  __int64 v67; // [rsp+98h] [rbp-68h]
  BattleSystem::BattleController *v68; // [rsp+A0h] [rbp-60h]
  BattleSystem::BattleController *v69; // [rsp+A8h] [rbp-58h]
  __int128 v70; // [rsp+B0h] [rbp-50h] BYREF
  OGLVec3 v71; // [rsp+C0h] [rbp-40h] BYREF
  OGLVec3 v72; // [rsp+CCh] [rbp-34h] BYREF
  std::bitset<61>::reference result; // [rsp+D8h] [rbp-28h] BYREF
  extension::SoundObject o; // [rsp+158h] [rbp+58h] BYREF
  extension::SoundObject v76; // [rsp+160h] [rbp+60h] BYREF
  BattleSystem::BattleController *v77; // [rsp+168h] [rbp+68h]

  v67 = -2i64;
  v1 = actSys;
  v2 = *(_QWORD *)&AppMain::pApp;
  v3 = 0i64;
  pPlayer = actSys->pPlayer;
  while ( 1 )
  {
    if ( (unsigned __int64)v3 > 1 )
      v5 = 0i64;
    else
      v5 = *pPlayer;
    v6 = (int *)v5->GetTargetActor(v5);
    if ( v5->IsGuardCancelEvade(v5) )
    {
      memset(&req.color, 0, 21);
      *(_QWORD *)&req.attr = 4i64;
      req.frame = 4;
      ActionBlackout::RequestBlackout(&v1->actBlack, ciTargetID[v3], &req);
      if ( !(*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v6 + 3024i64))(v6)
        && v1->actBlack.reqData[ciTargetID[v6[97]]].attr <= NONE )
      {
        v7 = ciGuardCancelEvadeTargetStop[v5->iDamageSkillType];
        v8 = v6[97];
        memset(&v65.color, 0, 21);
        *(_QWORD *)&v65.attr = 4i64;
        v65.frame = v7;
        ActionBlackout::RequestBlackout(&v1->actBlack, ciTargetID[v8], &v65);
      }
      v9 = BattleSystem::BattleController::instance;
      if ( !BattleSystem::BattleController::instance )
      {
        v77 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
        BattleSystem::BattleController::BattleController(v77);
        v9 = v10;
        BattleSystem::BattleController::instance = v10;
      }
      iPlayerID = v5->iPlayerID;
      v9->playerInfo[iPlayerID].scoreInfo.iBattleScore += 5000;
      iBattleScore = v9->playerInfo[iPlayerID].scoreInfo.iBattleScore;
      if ( iBattleScore > 99999999 )
        iBattleScore = 99999999;
      v9->playerInfo[iPlayerID].scoreInfo.iBattleScore = iBattleScore;
      v13 = v9->playerInfo[iPlayerID].iTotalScore ^ 0x7B48A35E ^ (LOWORD(v9->playerInfo[iPlayerID].iTotalScore) ^ 0xA35E ^ (unsigned __int16)((v9->playerInfo[iPlayerID].iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(v9->playerInfo[iPlayerID].iTotalScore) ^ 0xA35E ^ (unsigned __int16)((v9->playerInfo[iPlayerID].iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      v14 = ((v13 ^ (v13 >> 7)) & 0x550055 ^ v13 ^ (((v13 ^ (v13 >> 7)) & 0x550055) << 7)) + 5000;
      if ( v14 > 99999999 )
        v14 = 99999999;
      v15 = v14 ^ (v14 ^ (v14 >> 7)) & 0x550055 ^ (((v14 ^ (v14 >> 7)) & 0x550055) << 7);
      v16 = ((unsigned __int16)(v14 ^ (v14 ^ (v14 >> 7)) & 0x55 ^ ((((unsigned __int16)v14 ^ (unsigned __int16)(v14 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v15 >> 14)) & 0xCCCC;
      v9->playerInfo[iPlayerID].iTotalScore = v16 ^ v15 ^ (v16 << 14) ^ 0x7B48A35E;
      v17 = v5->iPlayerID;
      Instance = BattleEventHandler::getInstance();
      for ( i = Instance->m_pListenerList->m_items._Mypair._Myval2._Myfirst;
            i != Instance->m_pListenerList->m_items._Mypair._Myval2._Mylast;
            ++i )
      {
        (*i)->OnEventCharacterActivity(*i, (PLAYER_ID)v17, GUARD_CANCEL, 5000);
      }
      v20 = (char *)operator new(0x60ui64);
      *(_QWORD *)v20 = 1i64;
      *((_WORD *)v20 + 4) = 1;
      *(_QWORD *)(v20 + 12) = 0i64;
      *(_QWORD *)(v20 + 20) = 0i64;
      *((_DWORD *)v20 + 7) = 1120403456;
      *((_QWORD *)v20 + 11) = 0i64;
      o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v20;
      systemStat = v5->systemStat;
      if ( systemStat == INIT || systemStat == ERASE )
      {
        SoundPanPosition = FLOAT_N100_0;
      }
      else
      {
        v22 = (float *)v5->GetCenterPosition(v5, &v71);
        SoundPanPosition = ActionSystem::GetSoundPanPosition(v5->pActSys, *v22);
      }
      if ( v20[8] || (v24 = 0, *((float *)v20 + 6) != SoundPanPosition) )
        v24 = 1;
      v20[8] = v24;
      *((float *)v20 + 6) = SoundPanPosition;
      v20[9] = 0;
      SoundNameKey = GetSoundNameKey(SND_SE_GUARD_CANCEL);
      v27 = SoundNameKey;
      if ( SoundNameKey->m_sharedBuffer.m_ptr
        && !extension::SoundList::playSEByName((extension::SoundList *)(v2 + 2197144), &o, SoundNameKey, 0i64) )
      {
        extension::SoundList::playSEByName((extension::SoundList *)(v2 + 2196904), &o, v27, 0i64);
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        v28 = (char *)*((_QWORD *)v20 + 11);
        if ( v28 )
        {
          LOBYTE(v26) = v28 != v20 + 32;
          (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v28 + 32i64))(v28, v26);
          *((_QWORD *)v20 + 11) = 0i64;
        }
        operator delete(v20, 0x60ui64);
      }
      v1 = actSys;
    }
    if ( v5->IsGuardCancelBlowAtk(v5) )
    {
      v29 = std::bitset<21>::operator[]((std::bitset<61> *)&v5->systemFlag, &result, 0x21ui64);
      Mypos = v29->_Mypos;
      if ( Mypos >= 0x3E )
        std::_Xout_of_range("invalid bitset<N> position");
      v31 = v29->_Mypos & 0x3F;
      v32 = v29->_Pbitset[Mypos >> 6]._Array[0];
      if ( _bittest64((const __int64 *)&v32, v31) )
      {
        memset(&v66.color, 0, 21);
        *(_QWORD *)&v66.attr = 4i64;
        v66.frame = 4;
        ActionBlackout::RequestBlackout(&v1->actBlack, ciTargetID[v3], &v66);
      }
      v33 = BattleSystem::BattleController::instance;
      if ( !BattleSystem::BattleController::instance )
      {
        v68 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
        BattleSystem::BattleController::BattleController(v68);
        v33 = v34;
        BattleSystem::BattleController::instance = v34;
      }
      v35 = v5->iPlayerID;
      v33->playerInfo[v35].scoreInfo.iBattleScore += 5000;
      v36 = v33->playerInfo[v35].scoreInfo.iBattleScore;
      if ( v36 > 99999999 )
        v36 = 99999999;
      v33->playerInfo[v35].scoreInfo.iBattleScore = v36;
      v37 = v33->playerInfo[v35].iTotalScore ^ 0x7B48A35E ^ (LOWORD(v33->playerInfo[v35].iTotalScore) ^ 0xA35E ^ (unsigned __int16)((v33->playerInfo[v35].iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(v33->playerInfo[v35].iTotalScore) ^ 0xA35E ^ (unsigned __int16)((v33->playerInfo[v35].iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      v38 = ((v37 ^ (v37 >> 7)) & 0x550055 ^ v37 ^ (((v37 ^ (v37 >> 7)) & 0x550055) << 7)) + 5000;
      if ( v38 > 99999999 )
        v38 = 99999999;
      v39 = v38 ^ (v38 ^ (v38 >> 7)) & 0x550055 ^ (((v38 ^ (v38 >> 7)) & 0x550055) << 7);
      v40 = ((unsigned __int16)(v38 ^ (v38 ^ (v38 >> 7)) & 0x55 ^ ((((unsigned __int16)v38 ^ (unsigned __int16)(v38 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v39 >> 14)) & 0xCCCC;
      v33->playerInfo[v35].iTotalScore = v40 ^ v39 ^ (v40 << 14) ^ 0x7B48A35E;
      v41 = v5->iPlayerID;
      v42 = BattleEventHandler::getInstance();
      for ( j = v42->m_pListenerList->m_items._Mypair._Myval2._Myfirst;
            j != v42->m_pListenerList->m_items._Mypair._Myval2._Mylast;
            ++j )
      {
        (*j)->OnEventCharacterActivity(*j, (PLAYER_ID)v41, GUARD_CANCEL, 5000);
      }
      v44 = (char *)operator new(0x60ui64);
      *(_QWORD *)v44 = 1i64;
      *((_WORD *)v44 + 4) = 1;
      *(_QWORD *)(v44 + 12) = 0i64;
      *(_QWORD *)(v44 + 20) = 0i64;
      *((_DWORD *)v44 + 7) = 1120403456;
      *((_QWORD *)v44 + 11) = 0i64;
      v76.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v44;
      v45 = v5->systemStat;
      if ( v45 == INIT || v45 == ERASE )
      {
        v47 = FLOAT_N100_0;
      }
      else
      {
        v46 = (float *)v5->GetCenterPosition(v5, &v72);
        v47 = ActionSystem::GetSoundPanPosition(v5->pActSys, *v46);
      }
      if ( v44[8] || (v48 = 0, *((float *)v44 + 6) != v47) )
        v48 = 1;
      v44[8] = v48;
      *((float *)v44 + 6) = v47;
      v44[9] = 0;
      v49 = GetSoundNameKey(SND_SE_GUARD_CANCEL);
      v51 = v49;
      if ( v49->m_sharedBuffer.m_ptr
        && !extension::SoundList::playSEByName((extension::SoundList *)(v2 + 2197144), &v76, v49, 0i64) )
      {
        extension::SoundList::playSEByName((extension::SoundList *)(v2 + 2196904), &v76, v51, 0i64);
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v44, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        v52 = (char *)*((_QWORD *)v44 + 11);
        if ( v52 )
        {
          LOBYTE(v50) = v52 != v44 + 32;
          (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v52 + 32i64))(v52, v50);
          *((_QWORD *)v44 + 11) = 0i64;
        }
        operator delete(v44, 0x60ui64);
      }
    }
    if ( v5->IsJustGuard(v5) )
    {
      v70 = _xmm;
      v5->SetFadeOutColor(v5, (const ColorHolder *)&v70, 6, 1610612736);
      v53 = BattleSystem::BattleController::instance;
      if ( !BattleSystem::BattleController::instance )
      {
        v69 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
        BattleSystem::BattleController::BattleController(v69);
        v53 = v54;
        BattleSystem::BattleController::instance = v54;
      }
      v55 = v5->iPlayerID;
      v53->playerInfo[v55].scoreInfo.iBattleScore += 1000;
      v56 = v53->playerInfo[v55].scoreInfo.iBattleScore;
      if ( v56 > 99999999 )
        v56 = 99999999;
      v53->playerInfo[v55].scoreInfo.iBattleScore = v56;
      v57 = v53->playerInfo[v55].iTotalScore ^ 0x7B48A35E ^ (LOWORD(v53->playerInfo[v55].iTotalScore) ^ 0xA35E ^ (unsigned __int16)((v53->playerInfo[v55].iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(v53->playerInfo[v55].iTotalScore) ^ 0xA35E ^ (unsigned __int16)((v53->playerInfo[v55].iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      v58 = ((v57 ^ (v57 >> 7)) & 0x550055 ^ v57 ^ (((v57 ^ (v57 >> 7)) & 0x550055) << 7)) + 1000;
      if ( v58 > 99999999 )
        v58 = 99999999;
      v59 = v58 ^ (v58 ^ (v58 >> 7)) & 0x550055 ^ (((v58 ^ (v58 >> 7)) & 0x550055) << 7);
      v60 = ((unsigned __int16)(v58 ^ (v58 ^ (v58 >> 7)) & 0x55 ^ ((((unsigned __int16)v58 ^ (unsigned __int16)(v58 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v59 >> 14)) & 0xCCCC;
      v53->playerInfo[v55].iTotalScore = v59 ^ v60 ^ (v60 << 14) ^ 0x7B48A35E;
      v61 = v5->iPlayerID;
      v62 = BattleEventHandler::getInstance();
      for ( k = v62->m_pListenerList->m_items._Mypair._Myval2._Myfirst;
            k != v62->m_pListenerList->m_items._Mypair._Myval2._Mylast;
            ++k )
      {
        (*k)->OnEventCharacterActivity(*k, (PLAYER_ID)v61, JUST_GUARD, 1000);
      }
    }
    ++v3;
    ++pPlayer;
    if ( v3 >= 2 )
      break;
    v1 = actSys;
  }
}

void __fastcall DamageSetControl::PowerGaugeCalc(
        ActorChara *target,
        const Collision::HitRectWork *atk,
        __int64 bGuard,
        __int64 bAtkPow,
        bool bPsvPow)
{
  unsigned int iGaugeAddTarget; // ebx
  const Collision::HitRectWork *v6; // rdi
  unsigned int iGaugeAddMine; // esi
  int v9; // ecx
  int v10; // ecx
  ActorChara *pParent; // rcx

  iGaugeAddTarget = 0;
  v6 = atk;
  if ( (_BYTE)bGuard )
  {
    iGaugeAddMine = atk->data.atk.guardData.iGaugeAddMine;
    if ( iGaugeAddMine == -1 )
    {
      if ( atk->data.atk.iSkillType < 6 )
      {
        v9 = 500 * atk->data.atk.iDamage;
        LODWORD(atk) = (unsigned __int64)(274877907i64 * v9) >> 32;
        iGaugeAddMine = v9 / 1000;
      }
      else
      {
        iGaugeAddMine = 0;
      }
    }
    if ( bPsvPow )
    {
      iGaugeAddTarget = v6->data.atk.guardData.iGaugeAddTarget;
      if ( iGaugeAddTarget == -1 )
      {
        if ( v6->data.atk.iSkillType < 5 )
          v10 = 700 * v6->data.atk.iDamage;
        else
          v10 = 1200 * v6->data.atk.iDamage;
        LODWORD(atk) = (unsigned __int64)(274877907i64 * v10) >> 32;
        iGaugeAddTarget = v10 / 1000;
      }
      if ( ((unsigned __int8 (__fastcall *)(ActorChara *, const Collision::HitRectWork *, __int64, __int64))target->IsJustGuard)(
             target,
             atk,
             bGuard,
             bAtkPow) )
      {
        iGaugeAddTarget += 10;
      }
    }
  }
  else
  {
    iGaugeAddMine = atk->data.atk.hitData.iGaugeAddMine;
    if ( iGaugeAddMine == -1 )
    {
      iGaugeAddMine = 0;
      if ( atk->data.atk.iSkillType < 6 )
        iGaugeAddMine = atk->data.atk.iDamage;
    }
    if ( bPsvPow )
    {
      iGaugeAddTarget = atk->data.atk.hitData.iGaugeAddTarget;
      if ( iGaugeAddTarget == -1 )
        iGaugeAddTarget = 1200 * atk->data.atk.iDamage / 1000;
    }
  }
  pParent = v6->pParent;
  if ( pParent )
    ((void (__fastcall *)(ActorChara *, _QWORD, _QWORD, __int64))pParent->AddExPower)(
      pParent,
      iGaugeAddMine,
      0i64,
      bAtkPow);
  ((void (__fastcall *)(ActorChara *, _QWORD, _QWORD, __int64))target->AddExPower)(
    target,
    iGaugeAddTarget,
    0i64,
    bAtkPow);
}

void __fastcall DamageSetControl::SetNextDamageAction(ActorChara *actor)
{
  const CharaActionData::ActionDataInfo *v2; // rbx
  _BOOL8 v3; // r9
  __int64 v4; // rdx
  ActorChara_vtbl *v5; // rax
  ActorChara_vtbl *v6; // rax
  int iActorStat; // eax
  _BOOL8 v8; // r9
  _BOOL8 v9; // r8
  int v10; // eax
  ActorChara *v11; // rcx
  _BOOL8 v12; // r9
  _BOOL8 v13; // r8
  int v14; // eax
  _BOOL8 v15; // r9
  float x; // xmm1_4
  int v17; // esi
  int v18; // eax
  _BOOL8 v19; // r9
  bool v20; // al
  _BOOL8 v21; // r9
  ActorChara *v22; // rcx
  __int64 v23; // rdx
  ActorChara_vtbl *v24; // rax
  std::bitset<61>::reference *v25; // rax
  unsigned __int64 Mypos; // rdx
  bool v27; // al
  _BOOL8 v28; // r9
  bool v29; // zf
  ActorChara_vtbl *v30; // rax
  __int64 v31; // rdx
  int v32; // ebx
  _BOOL8 v33; // r9
  unsigned int v34; // eax
  char v35; // bl
  int v36; // ebx
  Actor::ACTOR_TYPE v37; // eax
  __int32 v38; // eax
  __int32 v39; // eax
  char *v40; // rax
  __int64 v41; // rbx
  unsigned int v42; // eax
  __int64 v43; // rdx
  extension::SoundList *v44; // rcx
  __int64 v45; // rdx
  _BOOL8 v46; // r8
  _BOOL8 v47; // rdx
  _BOOL8 v48; // r9
  int v49; // ebx
  _BOOL8 v50; // rdx
  _BOOL8 v51; // r9
  ActorChara_vtbl *v52; // rax
  std::bitset<61>::reference *v53; // rax
  unsigned __int64 v54; // rdx
  std::bitset<61>::reference *v55; // rax
  unsigned __int64 v56; // rdx
  extension::SoundOneshotParameters result; // [rsp+48h] [rbp-21h] BYREF
  std::function<float __cdecl(void)> v58; // [rsp+68h] [rbp-1h] BYREF
  extension::SoundObject o; // [rsp+D0h] [rbp+67h] BYREF

  v2 = actor->GetActionDataInfo(actor, (unsigned int)actor->iActNo, 0i64);
  if ( v2 )
  {
    v4 = (unsigned int)(actor->iActorStat - 26);
    switch ( actor->iActorStat )
    {
      case 0x1A:
      case 0x20:
      case 0x2A:
      case 0x30:
      case 0x38:
        v5 = actor->ActorCharaBase::ActorObject::Actor::__vftable;
        if ( actor->bActionEnd )
        {
          LOBYTE(v4) = v2->iCategoryID == 1;
          v5->SetReady(actor, v4, 0);
        }
        else
        {
          if ( !v5->IsReadyFlag(actor) )
            return;
          actor->StateChangeReq(actor, v2->iCategoryID == 1);
          actor->SetReadyFlags(actor);
        }
        v6 = actor->ActorCharaBase::ActorObject::Actor::__vftable;
        actor->bNextStatCommandCheck = 1;
        v6->SetReversalChance(actor);
        iActorStat = actor->iActorStat;
        if ( iActorStat != 56 && iActorStat != 32 )
          actor->xThrowMutekiCount.value = 720896;
        if ( actor->iActorStat == 48 )
          goto LABEL_33;
        break;
      case 0x2B:
      case 0x3B:
      case 0x3C:
        if ( actor->IsLanding(actor) && (actor->iActFlg1 & 0x100) == 0 )
        {
          if ( actor->IsStun(actor) )
          {
            LOBYTE(v8) = 1;
            actor->ActionChangeReqBase(actor, 193, 0, v8);
            LOBYTE(v9) = 1;
            v10 = actor->GetActionEndFrame(actor, actor->iActReserveNo, v9);
            v11 = actor;
            if ( v10 < 1 )
              goto LABEL_19;
            ((void (__fastcall *)(ActorChara *))actor->SetSpeed)(actor);
          }
          else if ( !DamageSetControl::CheckNextDamageSetting(actor) )
          {
            goto LABEL_18;
          }
        }
        break;
      case 0x2C:
        if ( !actor->IsLanding(actor) || (actor->iActFlg1 & 0x100) != 0 )
        {
          if ( actor->IsReadyFlag(actor) )
          {
            v18 = actor->GetJumpState(actor, 0);
            actor->StateChangeReq(actor, v18);
            goto LABEL_32;
          }
        }
        else
        {
          x = actor->vMov.x;
          if ( actor->iCAngle )
            LODWORD(x) ^= _xmm;
          if ( x <= 0.30000001 )
            v17 = (x >= -0.30000001) + 25;
          else
            v17 = 24;
          LOBYTE(v15) = 1;
          actor->ActionChangeReqBase(actor, v17, 0, v15);
          actor->StateChangeReq(actor, 54);
          actor->ResetSpeed(actor);
          actor->xPerfectMutekiCount.value = 0x20000;
        }
        break;
      case 0x2D:
      case 0x39:
      case 0x3A:
        if ( actor->bActionEnd )
        {
          if ( !DamageSetControl::CheckNextDamageSetting(actor) )
          {
            LOBYTE(v19) = 1;
            actor->ActionChangeReqBase(actor, 187, 0, v19);
            actor->ResetSpeed(actor);
          }
          goto LABEL_115;
        }
        break;
      case 0x2E:
        if ( actor->bActionEnd )
        {
          v20 = actor->IsStun(actor);
          v22 = actor;
          if ( v20 )
          {
            v23 = 194i64;
            goto LABEL_113;
          }
          if ( !DamageSetControl::CheckNextDamageSetting(actor) )
          {
            v22 = actor;
            v23 = 187i64;
            if ( v2->iCategoryID != 4 )
              v23 = 186i64;
            goto LABEL_113;
          }
          goto LABEL_115;
        }
        break;
      case 0x2F:
        if ( !actor->xDownFrame.value )
        {
          v24 = actor->ActorCharaBase::ActorObject::Actor::__vftable;
          if ( actor->xVital.value )
          {
            v27 = v24->IsStun(actor);
            LOBYTE(v28) = 1;
            v29 = !v27;
            v30 = actor->ActorCharaBase::ActorObject::Actor::__vftable;
            if ( v29 )
            {
              v31 = 189i64;
              if ( v2->iCategoryID != 4 )
                v31 = 188i64;
              v30->ActionChangeReqBase(actor, v31, 0, v28);
              actor->SetStandUpVoice(actor);
            }
            else
            {
              v30->ActionChangeReqBase(actor, 195, 0, v28);
              actor->ResetStunDamageFlags(actor);
            }
            goto LABEL_114;
          }
          v24->ResetSpeed(actor);
          actor->ResetDamageFlags(actor);
          v25 = std::bitset<21>::operator[](
                  (std::bitset<61> *)&actor->systemFlag,
                  (std::bitset<61>::reference *)&result,
                  0x35ui64);
          Mypos = v25->_Mypos;
          if ( Mypos >= 0x3E )
            std::_Xout_of_range("invalid bitset<N> position");
          v25->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (v25->_Mypos & 0x3F);
        }
        break;
      case 0x31:
        if ( actor->IsThrowEscape(actor) )
        {
          LOBYTE(v48) = 1;
          actor->ActionChangeReqBase(actor, 47, 0, v48);
          actor->CAngleChangeReq(actor);
          ((void (__fastcall *)(ActorChara *))actor->RequestPositionY)(actor);
          actor->ResetDamageFlags(actor);
        }
        else if ( v2->iCategoryID == 2 )
        {
          if ( !actor->IsThrowLock(actor) )
          {
            v49 = actor->iActorStat;
            actor->iActorStat = 43;
            DamageSetControl::SetNextDamageAction(actor);
            actor->iActorStat = v49;
          }
        }
        else if ( actor->bActionEnd )
        {
          actor->SetBackActionDataReq(actor);
          actor->iDamageAttr = 0;
          if ( !DamageSetControl::CheckNextDamageSetting(actor) )
          {
            v29 = !actor->IsKO(actor);
            v52 = actor->ActorCharaBase::ActorObject::Actor::__vftable;
            if ( v29 )
            {
              LOBYTE(v50) = v2->iCategoryID == 1;
              v52->SetReady(actor, v50, 0);
              actor->bNextStatCommandCheck = 1;
              actor->SetReversalChance(actor);
              actor->xThrowMutekiCount.value = 720896;
            }
            else
            {
              LOBYTE(v51) = 1;
              v52->ActionChangeReqBase(actor, 226, 0, v51);
              actor->ResetSpeed(actor);
              ((void (__fastcall *)(ActorChara *))actor->RequestPositionY)(actor);
              v53 = std::bitset<21>::operator[](
                      (std::bitset<61> *)&actor->systemFlag,
                      (std::bitset<61>::reference *)&result,
                      0x19ui64);
              v54 = v53->_Mypos;
              if ( v54 >= 0x3E )
                std::_Xout_of_range("invalid bitset<N> position");
              v53->_Pbitset[v54 >> 6]._Array[0] |= 1i64 << (v53->_Mypos & 0x3F);
            }
          }
        }
        break;
      case 0x32:
        v32 = 1;
        if ( (((__int64 (__fastcall *)(ActorChara *, _QWORD))actor->GetInputTrigger)(actor, 0i64) & 0xF) != 0 )
        {
          v32 = 6;
          actor->xStunRapidFrame.value += 0x8000;
        }
        if ( (((__int64 (__fastcall *)(ActorChara *, _QWORD))actor->GetInputTrigger)(actor, 0i64) & 0xF0) != 0 )
        {
          v32 += 5;
          actor->xStunRapidFrame.value += 0x8000;
        }
        actor->xStunRapidFrame.value -= (4915i64 * actor->xStunRapidFrame.value) >> 16;
        if ( actor->xStunRapidFrame.value < 0 )
          actor->xStunRapidFrame.value = 0;
        if ( actor->xStunRapidFrame.value > 196608 )
          actor->xStunRapidFrame.value = 196608;
        actor->xStunDamageFrame.value += (int)(float)((float)(actor->GetActionSystemSpeed(actor) * (float)v32) * -65536.0);
        if ( actor->xStunDamageFrame.value <= 0 )
        {
          LOBYTE(v33) = 1;
          actor->ActionChangeReqBase(actor, 191, 0, v33);
          actor->SetReadyFlags(actor);
          actor->bNextStatCommandCheck = 1;
          actor->SetReversalChance(actor);
        }
        else
        {
          if ( !actor->iActionLoopCount && !actor->iActFrame && actor->bActionNewFrame )
          {
            *(_QWORD *)&result.priority = 0x3F80000000000000i64;
            result.audioSelect = -1;
            result.pitchBendCent = 0;
            *(_QWORD *)&result.pitchBendRandomRange = 200i64;
            v34 = actor->GetPlayerID(actor);
            v35 = 0;
            if ( v34 <= 1 )
              v35 = v34 + 1;
            v36 = v35 & 3;
            v37 = actor->GetActorType(actor);
            if ( v37 )
            {
              v38 = v37 - 1;
              if ( v38 )
              {
                v39 = v38 - 1;
                if ( v39 )
                {
                  if ( v39 == 2 )
                    v36 |= 0x100u;
                }
                else
                {
                  v36 |= 0x40u;
                }
              }
              else
              {
                v36 |= 0x80u;
              }
            }
            else
            {
              v36 |= 0x20u;
            }
            result.userTag = v36 | 0xC;
            v40 = (char *)operator new(0x60ui64);
            *(_QWORD *)v40 = 1i64;
            *((_WORD *)v40 + 4) = 1;
            *(_QWORD *)(v40 + 12) = 0i64;
            *(_QWORD *)(v40 + 20) = 0i64;
            *((_DWORD *)v40 + 7) = 1120403456;
            *((_QWORD *)v40 + 11) = 0i64;
            o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v40;
            v58._Mystorage._Ptrs[0] = (std::_Func_base<float> *)&std::_Func_impl<std::_Binder<std::_Unforced,float (Actor::*)(void)const,ActorChara *>,std::allocator<int>,float,>::`vftable';
            v58._Mystorage._Ptrs[1] = (std::_Func_base<float> *) Actor::`vcall'{1536,{flat}};
            v58._Mystorage._Ptrs[2] = (std::_Func_base<float> *)actor;
            v58._Mystorage._Ptrs[7] = (std::_Func_base<float> *)&v58;
            extension::SoundObject::setPanPositionFunc(&o, &v58);
            v41 = *(_QWORD *)&AppMain::pApp;
            if ( *(_QWORD *)&AppMain::pApp != -2196904i64 )
            {
              extension::SoundList::playSEByName(
                (extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 2196904i64),
                &o,
                &s_soundIndex.m_keys[149],
                &result);
              v41 = *(_QWORD *)&AppMain::pApp;
            }
            v42 = ((__int64 (__fastcall *)(ActorChara *))actor->GetFounderPlayerID)(actor) + 1;
            if ( v42 <= 8 )
            {
              v44 = (extension::SoundList *)(v41 + 48i64 * (int)v42 + 2196904);
              if ( v44 )
                extension::SoundList::playSEByName(v44, &o, &s_soundIndex.m_keys[163], &result);
            }
            extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
              &o.m_runtimeEffector,
              v43);
          }
          if ( actor->GetActionSystemSpeed(actor) >= 1.0 )
          {
            actor->ActionFrameChangeReq(actor, SHIWORD(actor->xStunRapidFrame.value) + 1 + actor->iActFrame);
            actor->fActReserveFrameFraction = (float)LOWORD(actor->xStunRapidFrame.value) * 0.000015258789;
          }
        }
        break;
      case 0x33:
        if ( actor->bActionEnd )
        {
          LOBYTE(v3) = 1;
          actor->ActionChangeReqBase(actor, 190, 0, v3);
          actor->xStunRapidFrame.value = 0;
        }
        break;
      case 0x34:
        if ( !actor->IsLanding(actor) || (actor->iActFlg1 & 0x100) != 0 )
        {
          if ( actor->IsWallHit(actor) )
          {
            DamageSetControl::CheckNextDamageSetting(actor);
            v55 = std::bitset<21>::operator[](
                    (std::bitset<61> *)&actor->systemFlag,
                    (std::bitset<61>::reference *)&result,
                    0xFui64);
            v56 = v55->_Mypos;
            if ( v56 >= 0x3E )
              std::_Xout_of_range("invalid bitset<N> position");
            v55->_Pbitset[v56 >> 6]._Array[0] |= 1i64 << (v55->_Mypos & 0x3F);
          }
        }
        else
        {
          actor->iDamageAttr = 0;
LABEL_18:
          LOBYTE(v12) = 1;
          actor->ActionChangeReqBase(actor, 158, 0, v12);
          LOBYTE(v13) = 1;
          v14 = actor->GetActionEndFrame(actor, actor->iActReserveNo, v13);
          v11 = actor;
          if ( v14 >= 1 )
            DamageSettingUtil::BoundMoveCalc(actor, v14);
          else
LABEL_19:
            actor->ResetSpeed(v11);
        }
        break;
      case 0x35:
        if ( actor->IsLanding(actor) && (actor->iActFlg1 & 0x100) == 0 )
        {
          if ( !DamageSetControl::CheckNextDamageSetting(actor) )
          {
            v23 = 172i64;
            v22 = actor;
LABEL_113:
            LOBYTE(v21) = 1;
            actor->ActionChangeReqBase(v22, v23, 0, v21);
LABEL_114:
            actor->ResetSpeed(actor);
            ((void (__fastcall *)(ActorChara *))actor->RequestPositionY)(actor);
          }
LABEL_115:
          actor->iDamageAttr = 0;
        }
        break;
      case 0x36:
        actor->StateChangeReq(actor, 21);
LABEL_32:
        actor->SetReadyFlags(actor);
        actor->bNextStatCommandCheck = 1;
        actor->SetReversalChance(actor);
        actor->xThrowMutekiCount.value = 720896;
LABEL_33:
        actor->xNormalThrowDisableCount.value = 327680;
        break;
      case 0x37:
        if ( actor->bActionEnd )
        {
          LOBYTE(v3) = 1;
          v45 = 199i64;
          if ( v2->iCategoryID != 1 )
            v45 = 197i64;
          actor->ActionChangeReqBase(actor, v45, 0, v3);
          LOBYTE(v46) = 1;
          actor->SetHitStop(actor, 21, v46);
          LOBYTE(v47) = 1;
          actor->SetHitStopVibrate(actor, v47);
        }
        break;
      default:
        return;
    }
  }
}

void __fastcall DamageSetControl::SetThrowDamage(DamageSetControl *this, const Collision::HitRectWork *atk)
{
  ActorChara *v3; // rdi
  ActorChara *pParent; // rcx
  _BOOL8 v5; // r8
  _BOOL8 v6; // rdx
  int iDownFrame; // eax
  std::bitset<61>::reference *v8; // rax
  char v9; // r9
  unsigned __int64 Mypos; // rdx
  std::bitset<61> *Pbitset; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  std::bitset<61>::reference *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  Collision::HitRect *RealHitRect; // rax
  Collision::HitRect *v20; // rax
  Collision::HitRect *v21; // rax
  const Collision::HitRect *v22; // rax
  __int64 v23; // rax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v3 = atk->pParent->GetTargetActor(atk->pParent);
  DamageSetControl::DamageCalc(v3, atk, 0, NORMAL);
  if ( v3->IsKO(v3) && (atk->data.atk.iAttackFlag & 0x100000) != 0 )
  {
    pParent = atk->pParent;
    if ( pParent )
      pParent->SetSpecialWinDirection(pParent);
  }
  if ( !v3->xStunPower.value )
    v3->xStunPower.value = 0x10000;
  atk->pOwner->SetHitStop(atk->pOwner, atk->data.atk.hitData.iHitStopFrameMine, 0);
  LOBYTE(v5) = 1;
  v3->SetHitStop(v3, atk->data.atk.hitData.iHitStopFrameTarget, v5);
  if ( v3->xHitStopFrame.value > 0 )
  {
    LOBYTE(v6) = 1;
    v3->SetHitStopVibrate(v3, v6);
  }
  v3->xPursuitFrame.value = atk->data.atk.iPursuitFrame << 16;
  iDownFrame = atk->data.atk.iDownFrame;
  if ( iDownFrame > 0 )
    v3->xDownFrame.value = iDownFrame << 16;
  else
    v3->xDownFrame.value = 655360;
  v3->SetInvalidAttackID(v3, atk->data.atk.iSetInvalidAttackID);
  v8 = std::bitset<21>::operator[]((std::bitset<61> *)&v3->systemFlag, &result, 0x13ui64);
  Mypos = v8->_Mypos;
  Pbitset = v8->_Pbitset;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v12 = Mypos >> 6;
  v13 = v8->_Mypos & 0x3F;
  v14 = Pbitset[v12]._Array[0];
  if ( v9 )
    v15 = v14 | (1i64 << v13);
  else
    v15 = v14 & ~(1i64 << v13);
  Pbitset[v12]._Array[0] = v15;
  v3->iDamageSkillType = atk->data.atk.iSkillType;
  v3->iHitBackAngle = DamageSettingUtil::GetHitBackAngle(atk->pOwner, v3, atk->data.atk.iHitNokeDir);
  v3->damageReserve = *(CharaAttackData::DamageReserveData *)((char *)&atk->data.hit + 172);
  if ( atk->pOwner->GetActorType(atk->pOwner) == SHOT )
    ((void (__fastcall *)(ActorObject *))atk->pOwner->__vftable[1]._branchIsFlag2)(atk->pOwner);
  v16 = std::bitset<21>::operator[]((std::bitset<61> *)&v3->systemFlag, &result, 0x12ui64);
  if ( (atk->data.atk.iAttackFlag & 0x20000) != 0 )
  {
    v17 = v16->_Mypos;
    if ( v17 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v16->_Pbitset[v17 >> 6]._Array[0] |= 1i64 << (v16->_Mypos & 0x3F);
  }
  else
  {
    v18 = v16->_Mypos;
    if ( v18 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v16->_Pbitset[v18 >> 6]._Array[0] &= ~(1i64 << (v16->_Mypos & 0x3F));
  }
  v3->ResetExtraDamage(v3);
  RealHitRect = Collision::HitRectWork::GetRealHitRect((Collision::HitRectWork *)atk, (Collision::HitRect *)&result);
  DamageSettingUtil::RequestAttackSound(
    atk->pOwner,
    &atk->data.atk.hitSound1,
    (float)(RealHitRect->w * 0.5) + RealHitRect->x);
  v20 = Collision::HitRectWork::GetRealHitRect((Collision::HitRectWork *)atk, (Collision::HitRect *)&result);
  DamageSettingUtil::RequestAttackSound(atk->pOwner, &atk->data.atk.hitSound2, (float)(v20->w * 0.5) + v20->x);
  DamageSettingUtil::RequestDamagedVoice(v3, &atk->data.atk);
  v21 = Collision::HitRectWork::GetRealHitRect((Collision::HitRectWork *)atk, (Collision::HitRect *)&result);
  DamageSettingUtil::RequestFinishHitSound(&atk->data.atk, v3, (float)(v21->w * 0.5) + v21->x);
  v22 = Collision::HitRectWork::GetRealHitRect((Collision::HitRectWork *)atk, (Collision::HitRect *)&result);
  DamageSettingUtil::CreateHitEffect(atk, v22, 0);
  v23 = (__int64)v3->GetActionSystem(v3);
  CameraControl::RequestQuakeCamera((CameraControl *)(v23 + 237776), &atk->data.atk.quakeCamera);
  DamageSettingUtil::SetDamageEffect(v3, atk->data.atk.iDamageAttr);
}

void __fastcall FighterOperation::SetVibration(
        int fighterIndex,
        long double vibSec,
        unsigned __int8 largeMotor,
        unsigned __int8 smallMotor)
{
  __int64 v5; // rbx
  FighterOperation *v6; // rax
  __int64 v7; // rax
  int v8; // ebx
  unsigned __int8 v9; // [rsp+20h] [rbp-28h]

  v5 = fighterIndex;
  v6 = FighterOperation::Instance();
  if ( (unsigned int)(v5 - 1) <= 1 )
  {
    v7 = (__int64)&v6[-1].m_slots[v5 + 1].operationMapper.m_mapping[4];
    if ( v7 )
    {
      if ( !*(_BYTE *)(v7 + 1472) )
      {
        v8 = *(_DWORD *)v7;
        UserGameOperation::Instance();
        if ( Framework::GLManager::glm )
          Framework::Input::ControllerContext::setVibration(
            &Framework::GLManager::glm->m_controllerContext,
            v8,
            vibSec,
            largeMotor,
            v9);
      }
    }
  }
}

std::_Func_base<float> *__fastcall std::_Func_impl<std::_Binder<std::_Unforced,float (Actor::*)(void)const,ActorChara *>,std::allocator<int>,float,>::_Move(
        std::_Func_impl<std::_Binder<std::_Unforced,float (__cdecl Actor::*)(void)const ,ActorChara *>,std::allocator<int>,float> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<std::_Binder<std::_Unforced,float (Actor::*)(void)const,ActorChara *>,std::allocator<int>,float,>::`vftable';
    *(std::_Compressed_pair<std::allocator<int>,std::_Binder<std::_Unforced,float (__cdecl Actor::*)(void)const ,ActorChara *>,1> *)((char *)_Where + 8) = this->_Mypair;
  }
  return (std::_Func_base<float> *)_Where;
}

void __fastcall std::_Func_impl<std::_Binder<std::_Unforced,float (Actor::*)(void)const,ActorChara *>,std::allocator<int>,float,>::_Delete_this(
        std::_Func_impl<std::_Binder<std::_Unforced,float (__cdecl Actor::*)(void)const ,ActorChara * const>,std::allocator<int>,float> *this,
        bool _Deallocate)
{
  this->__vftable = (std::_Func_impl<std::_Binder<std::_Unforced,float (__cdecl Actor::*)(void)const ,ActorChara * const>,std::allocator<int>,float>_vtbl *)&std::_Func_base<float,>::`vftable';
  if ( _Deallocate )
    operator delete(this);
}

void __fastcall std::_Func_impl<std::_Binder<std::_Unforced,float (Actor::*)(void)const,Actor *>,std::allocator<int>,float,>::_Do_call(
        std::_Func_impl<std::_Binder<std::_Unforced,float (__cdecl Actor::*)(void)const ,ActorChara * const>,std::allocator<int>,float> *this)
{
  this->_Mypair._Myval2._Mypair._Myval1(this->_Mypair._Myval2._Mypair._Myval2._Myfirst._Val);
}

std::_Align_type<double,64> *__fastcall __Get____Func_impl_U_unnamed_type_nothing___1__InstallGFxInterface_extension__YAXXZ_V__allocator_H_std__VValue_GFx_Scaleform__AEAVGFXIMovieContext_3_PEBV678_I_std__EEBAPEBXXZ(
        _Mtx_internal_imp_t *mtx)
{
  return &mtx->cs;
}

void ***__fastcall std::_Func_impl<std::_Binder<std::_Unforced,float (Actor::*)(void)const,ActorChara *>,std::allocator<int>,float,>::_Target_type(
        std::_Func_impl<std::_Binder<std::_Unforced,float (__cdecl Actor::*)(void)const ,ActorChara *>,std::allocator<int>,float> *this)
{
  return &std::_Binder<std::_Unforced,float (Actor::*)(void)const,ActorChara *> `RTTI Type Descriptor';
}

