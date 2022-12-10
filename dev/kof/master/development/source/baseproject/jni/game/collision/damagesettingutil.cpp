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
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.cpp"

long DamageSettingUtil::GetHitBackAngle(const ActorObject & atkActor, const ActorObject & psvActor, const long iHitNokeDir); // 0x1400E6F70
void DamageSettingUtil::SetAttackHitOffset(const Collision::HitRectWork & atk, const Collision::HitRectWork & psv, bool bGroundSet); // 0x1400E7010
void DamageSettingUtil::BoundMoveCalc(ActorChara & actor, long iBoundEndFrame); // 0x1400E70C0
void DamageSettingUtil::RequestCharaSound(Actor & actor, long soundID, float centerX); // 0x1400E7160
void DamageSettingUtil::RequestAttackSound(ActorObject & actor, const CharaAttackData::SoundSettingData & sound, float centerX); // 0x1400E7290
void <lambda_1c3cbe424a4ce0281cf4385146677901>::operator()(long commonID, long uniqueID); // 0x1400E7480
class DamageSettingUtil::RequestAttackSound::__l2::<lambda_1c3cbe424a4ce0281cf4385146677901>
{
public:
	void operator()(long, long);
	<lambda_1c3cbe424a4ce0281cf4385146677901>(DamageSettingUtil::RequestAttackSound::__l2::<lambda_1c3cbe424a4ce0281cf4385146677901> &);
	<lambda_1c3cbe424a4ce0281cf4385146677901>();
	<lambda_1c3cbe424a4ce0281cf4385146677901>(ActorObject &, long &, const CharaAttackData::SoundSettingData &, float &, AppMain * &);
private:
	ActorObject & actor; // 0x0
	long & bankID; // 0x8
	const CharaAttackData::SoundSettingData & sound; // 0x10
	float & centerX; // 0x18
	AppMain * & p; // 0x20
public:
	DamageSettingUtil::RequestAttackSound::__l2::<lambda_1c3cbe424a4ce0281cf4385146677901> & operator=(const DamageSettingUtil::RequestAttackSound::__l2::<lambda_1c3cbe424a4ce0281cf4385146677901> &);
};
const CharaBone::NAME_INDEX DamageSettingUtil::ciFireDamageEffectBindBone[1]; // 0x14089B35C
std::piecewise_construct_t std::piecewise_construct; // 0x14089B37C
void DamageSettingUtil::RequestGuardSound(ActorObject & actor, const CharaAttackData::AttackData & atkData, float centerX); // 0x1400E7610
SoundId DamageSettingUtil::CheckExtraFinishSound(const CharaAttackData::SoundSettingData & sound); // 0x1400E77E0
void DamageSettingUtil::RequestFinishHitSound(const CharaAttackData::AttackData & atkData, ActorChara * pTarget, float centerX); // 0x1400E7860
void DamageSettingUtil::RequestFinishGuardSound(const CharaAttackData::AttackData & atkData, ActorChara * pTarget, float centerX); // 0x1400E7A10
bool DamageSettingUtil::RequestCountHitSound(const CharaAttackData::AttackData & atkData, float centerX); // 0x1400E7B30
void DamageSettingUtil::RequestStopVoice(long playerID); // 0x1400E7CC0
void DamageSettingUtil::RequestDamagedVoice(ActorChara & actor, const CharaAttackData::AttackData & atkData); // 0x1400E7D20
void DamageSettingUtil::CreateHitEffect(const Collision::HitRectWork & atk, const Collision::HitRect & centerRect, bool bGuard); // 0x1400E7F80
ActorEffect * DamageSettingUtil::CreateCommonEffect(float x, float y, float z, CommonEffect::EFFECT_INDEX::ID effectID, long iCAngle, bool bUseZOffset, long iOptionFlag); // 0x1400E81E0
void DamageSettingUtil::SetFireDamageEffect(ActorChara * pTarget, long damageAttr, long iActNo); // 0x1400E82F0
void DamageSettingUtil::SetDamageEffect(ActorChara * pTarget, long damageAttr); // 0x1400E8450//decompilation failure at 14089B35C!
//decompilation failure at 14089B37C!
void __fastcall lambda_1c3cbe424a4ce0281cf4385146677901_::operator()(__int64 **commonID, int uniqueID, int a3)
{
  int v3; // esi
  char v6; // al
  __int64 *v7; // rcx
  bool v8; // zf
  __int64 v9; // rax
  int v10; // ecx
  char v11; // bp
  __int64 *v12; // rcx
  char *v13; // rdi
  BattleSystem::BattleController *v14; // rcx
  BattleSystem::BattleController *v15; // rax
  float SoundPanPosition; // xmm0_4
  __int64 v17; // rcx
  __int64 v18; // rdx
  extension::SoundList *v19; // rcx
  BattleSystem::BattleController *v20; // [rsp+28h] [rbp-30h]
  extension::SoundOneshotParameters optionParams; // [rsp+30h] [rbp-28h] BYREF
  extension::SoundObject o; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( a3 >= 0
    || ((v6 = (*(__int64 (__fastcall **)(__int64 *))(**commonID + 1016))(*commonID),
         v7 = *commonID,
         v8 = v6 == 0,
         v9 = **commonID,
         v8) ? (v10 = (*(__int64 (__fastcall **)(__int64 *))(v9 + 1008))(v7) + 1) : (v10 = (*(__int64 (__fastcall **)(__int64 *))(v9 + 1008))(v7)
                                                                                         + 3),
        *(_DWORD *)commonID[1] = v10,
        v3 = uniqueID,
        uniqueID >= 0) )
  {
    v11 = 0;
    optionParams.userTag = 0;
    optionParams.audioSelect = -1;
    optionParams.pitchBendCent = 0;
    *(_QWORD *)&optionParams.pitchBendRandomRange = 200i64;
    v12 = commonID[2];
    optionParams.priority = *((_DWORD *)v12 + 3);
    optionParams.expressionVolume = *(float *)v12;
    v13 = (char *)operator new(0x60ui64);
    *(_QWORD *)v13 = 1i64;
    *((_WORD *)v13 + 4) = 1;
    *(_QWORD *)(v13 + 12) = 0i64;
    *(_QWORD *)(v13 + 20) = 0i64;
    *((_DWORD *)v13 + 7) = 1120403456;
    *((_QWORD *)v13 + 11) = 0i64;
    o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v13;
    v14 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v20 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v20);
      v14 = v15;
      BattleSystem::BattleController::instance = v15;
    }
    SoundPanPosition = ActionSystem::GetSoundPanPosition(&v14->actSystem, *(float *)commonID[3]);
    if ( v13[8] || *((float *)v13 + 6) != SoundPanPosition )
      v11 = 1;
    v13[8] = v11;
    *((float *)v13 + 6) = SoundPanPosition;
    v13[9] = 0;
    v17 = *(int *)commonID[1];
    v18 = *commonID[4];
    if ( (unsigned int)v17 <= 8 )
    {
      v19 = (extension::SoundList *)(v18 + 48 * v17 + 2196904);
      if ( v19 )
        extension::SoundList::playSE(v19, &o, v3, &optionParams);
    }
    extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
      &o.m_runtimeEffector,
      v18);
  }
}

void __fastcall DamageSettingUtil::BoundMoveCalc(ActorChara *actor, int iBoundEndFrame)
{
  ((void (__fastcall *)(ActorChara *, ActorChara_vtbl *, _QWORD))actor->SetSpeed)(
    actor,
    actor->ActorCharaBase::ActorObject::Actor::__vftable,
    (unsigned int)iBoundEndFrame);
}

__int64 __fastcall DamageSettingUtil::CheckExtraFinishSound(const CharaAttackData::SoundSettingData *sound)
{
  unsigned int v1; // ebx
  extension::SoundHashKey result; // [rsp+30h] [rbp+8h] BYREF

  v1 = 139;
  AppMain::Sound_GetName(*(AppMain **)&AppMain::pApp, &result, SoundList_Common, sound->iCommonID);
  if ( s_soundIndex.m_keys[137].m_sharedBuffer.m_ptr == result.m_sharedBuffer.m_ptr )
  {
    v1 = 140;
  }
  else if ( s_soundIndex.m_keys[135].m_sharedBuffer.m_ptr == result.m_sharedBuffer.m_ptr
         || s_soundIndex.m_keys[136].m_sharedBuffer.m_ptr == result.m_sharedBuffer.m_ptr )
  {
    v1 = 141;
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
  return v1;
}

Actor *__fastcall DamageSettingUtil::CreateCommonEffect(
        float x,
        float y,
        float z,
        CommonEffect::EFFECT_INDEX::ID effectID,
        int iCAngle,
        bool bUseZOffset,
        int iOptionFlag)
{
  __int64 v8; // rdi
  BattleSystem::BattleController *v9; // rax
  Actor *v10; // rax
  Actor *v11; // rbx
  _BOOL8 v12; // rdx
  BattleSystem::BattleController *v13; // [rsp+48h] [rbp-50h]
  int v14[3]; // [rsp+50h] [rbp-48h] BYREF
  __int16 v15; // [rsp+5Ch] [rbp-3Ch]
  int v16; // [rsp+5Eh] [rbp-3Ah]
  __int16 v17; // [rsp+62h] [rbp-36h]
  int v18; // [rsp+64h] [rbp-34h]

  if ( effectID <= NONE )
    return 0i64;
  *(float *)v14 = x;
  *(float *)&v14[1] = y;
  *(float *)&v14[2] = z;
  v16 = 1;
  v18 = 512;
  v15 = 2;
  v17 = effectID;
  v8 = *(_QWORD *)&AppMain::pApp;
  v9 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v13 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v13);
    BattleSystem::BattleController::instance = v9;
  }
  v10 = ActionSystem::Entry(&v9->actSystem, EFFECT, 7);
  v11 = v10;
  if ( v10 )
  {
    ((void (__fastcall *)(Actor *, _QWORD, int *, _QWORD, _QWORD, _QWORD, int))v10->__vftable[1].SetSpeedDataSub)(
      v10,
      *(_QWORD *)(v8 + 2182576),
      v14,
      0i64,
      0i64,
      0i64,
      iCAngle);
    LOBYTE(v12) = 1;
    v11->SetUseZOffset(v11, v12);
  }
  return v11;
}

void __fastcall DamageSettingUtil::CreateHitEffect(
        const Collision::HitRectWork *atk,
        const Collision::HitRect *centerRect,
        bool bGuard)
{
  float v3; // xmm0_4
  float v5; // xmm1_4
  int v6; // eax
  int v7; // eax
  __int16 v8; // cx
  ActorObject *v9; // rdx
  ActorEffect *v10; // rax
  _BOOL8 v11; // rdx
  float v12; // xmm1_4
  float v13; // xmm0_4
  float fAngleX; // ecx
  int iActNo; // ecx
  int iSkillType; // edx
  __int16 iListID; // ax
  bool v18; // sf
  ActorObject *pOwner; // rdx
  ActorEffect *v20; // rax
  _BOOL8 v21; // rdx
  float fAngleZ; // xmm1_4
  float fAngleY; // xmm0_4
  ActorEffect_vtbl *v24; // r8
  ActorObject *v25; // rdx
  __int16 v26; // ax
  ActorEffect_vtbl *v27; // r8
  CharaActionData::Effect::Type::Set setData; // [rsp+20h] [rbp-28h] BYREF

  v3 = centerRect->w * 0.5;
  setData.iTermFlag = 0;
  v5 = centerRect->h * 0.5;
  setData.iOptionFlag = 512;
  setData.iPosBase = 2;
  setData.fPosX = v3 + centerRect->x;
  setData.fPosY = centerRect->y - v5;
  setData.fPosZ = 0.0;
  if ( !bGuard )
  {
    iActNo = atk->data.atk.hitEffect1.iActNo;
    if ( iActNo >= 0 )
    {
      iListID = atk->data.atk.hitEffect1.iListID;
      setData.iActFileID = iListID;
      v18 = iActNo < 0;
      if ( !iActNo )
      {
        if ( iListID == 1 )
          goto LABEL_31;
        goto LABEL_29;
      }
LABEL_28:
      if ( v18 )
        goto LABEL_31;
      goto LABEL_29;
    }
    if ( !atk->data.atk.iDataType )
    {
      iSkillType = atk->data.atk.iSkillType;
      setData.iActFileID = 1;
      if ( iSkillType == 1 )
      {
        LOWORD(iActNo) = 1;
        goto LABEL_29;
      }
      if ( iSkillType > 1 )
      {
        if ( iSkillType > 3 )
        {
          if ( (unsigned int)(iSkillType - 5) <= 4 )
          {
            LOWORD(iActNo) = 3;
            goto LABEL_29;
          }
          goto LABEL_27;
        }
        LOWORD(iActNo) = 2;
LABEL_29:
        pOwner = atk->pOwner;
        setData.iActNo = iActNo;
        v20 = ActorEffect::CreateActorEffectSingle(&setData, pOwner, pOwner->iCAngle);
        if ( v20 )
        {
          LOBYTE(v21) = 1;
          fAngleZ = atk->data.atk.hitEffect1.fAngleZ;
          fAngleY = atk->data.atk.hitEffect1.fAngleY;
          v24 = v20->__vftable;
          v20->vAngle.x = atk->data.atk.hitEffect1.fAngleX;
          v20->vAngle.y = fAngleY;
          v20->vAngle.z = fAngleZ;
          v24->SetUseZOffset(v20, v21);
        }
LABEL_31:
        if ( atk->data.atk.hitEffect2.iActNo >= 0 )
        {
          v25 = atk->pOwner;
          v26 = atk->data.atk.hitEffect2.iListID;
          setData.iActNo = atk->data.atk.hitEffect2.iActNo;
          setData.iActFileID = v26;
          v10 = ActorEffect::CreateActorEffectSingle(&setData, v25, v25->iCAngle);
          if ( v10 )
          {
            v12 = atk->data.atk.hitEffect2.fAngleZ;
            v13 = atk->data.atk.hitEffect2.fAngleY;
            fAngleX = atk->data.atk.hitEffect2.fAngleX;
LABEL_34:
            v27 = v10->__vftable;
            LOBYTE(v11) = 1;
            v10->vAngle.x = fAngleX;
            v10->vAngle.y = v13;
            v10->vAngle.z = v12;
            v27->SetUseZOffset(v10, v11);
            return;
          }
        }
        return;
      }
    }
LABEL_27:
    v18 = iActNo < 0;
    goto LABEL_28;
  }
  v6 = atk->data.atk.guardEffect.iActNo;
  if ( v6 < 0 )
  {
    if ( atk->data.atk.iDataType )
      return;
    setData.iActFileID = 1;
    v7 = atk->data.atk.iSkillType;
    if ( v7 == 1 )
    {
      LOWORD(v6) = 4;
    }
    else
    {
      if ( v7 <= 1 )
        return;
      if ( v7 <= 3 )
      {
        LOWORD(v6) = 5;
      }
      else
      {
        if ( (unsigned int)(v7 - 5) > 4 )
          return;
        LOWORD(v6) = 6;
      }
    }
    goto LABEL_13;
  }
  v8 = atk->data.atk.guardEffect.iListID;
  setData.iActFileID = v8;
  if ( v6 || v8 != 1 )
  {
LABEL_13:
    v9 = atk->pOwner;
    setData.iActNo = v6;
    v10 = ActorEffect::CreateActorEffectSingle(&setData, v9, v9->iCAngle);
    if ( !v10 )
      return;
    v12 = atk->data.atk.guardEffect.fAngleZ;
    v13 = atk->data.atk.guardEffect.fAngleY;
    fAngleX = atk->data.atk.guardEffect.fAngleX;
    goto LABEL_34;
  }
}

__int64 __fastcall DamageSettingUtil::GetHitBackAngle(
        const ActorObject *atkActor,
        const ActorObject *psvActor,
        const int iHitNokeDir)
{
  unsigned int iCAngle; // er9
  int v4; // er8
  int v5; // er8
  int v6; // er8
  int v7; // er8
  float x; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4

  iCAngle = atkActor->iCAngle;
  v4 = iHitNokeDir - 1;
  if ( !v4 )
    return iCAngle == 0;
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
        return (unsigned int)psvActor->iCAngle;
      if ( v7 == 1 )
        return psvActor->iCAngle == 0;
      return iCAngle;
    }
    x = atkActor->vPos.x;
    v10 = psvActor->vPos.x;
    if ( x <= v10 )
    {
      if ( v10 > x )
        return 1i64;
      return iCAngle;
    }
    return 0i64;
  }
  v11 = atkActor->vPos.x;
  v12 = psvActor->vPos.x;
  if ( v11 > v12 )
    return 1i64;
  if ( v12 > v11 )
    return 0i64;
  return iCAngle;
}

void __fastcall DamageSettingUtil::RequestAttackSound(
        ActorObject *actor,
        const CharaAttackData::SoundSettingData *sound,
        float centerX)
{
  BattleSystem::BattleController *v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rdi
  bool v8; // zf
  ActorObject_vtbl *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int iGroupID; // ebx
  __int16 *v16; // rbx
  __int16 *i; // rdi
  int iCommonID; // er8
  __int64 v19[2]; // [rsp+20h] [rbp-48h] BYREF
  BattleSystem::BattleController *v20; // [rsp+30h] [rbp-38h]
  int commonID[2]; // [rsp+38h] [rbp-30h] BYREF
  int *v22; // [rsp+40h] [rbp-28h]
  const CharaAttackData::SoundSettingData *v23; // [rsp+48h] [rbp-20h]
  float *v24; // [rsp+50h] [rbp-18h]
  __int64 *v25; // [rsp+58h] [rbp-10h]
  float v26; // [rsp+80h] [rbp+18h] BYREF
  int v27; // [rsp+88h] [rbp+20h] BYREF

  v26 = centerX;
  v19[1] = -2i64;
  v19[0] = *(_QWORD *)&AppMain::pApp;
  v27 = 0;
  v5 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v20 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v20);
    BattleSystem::BattleController::instance = v5;
  }
  if ( !v5->bAkebonoKO && v5->roundPhase != (WALL|ERASE) )
  {
    *(_QWORD *)commonID = actor;
    v22 = &v27;
    v23 = sound;
    v24 = &v26;
    v25 = v19;
    if ( sound->iGroupID <= 0 )
    {
      iCommonID = sound->iCommonID;
      if ( iCommonID )
        lambda_1c3cbe424a4ce0281cf4385146677901_::operator()((__int64 **)commonID, sound->iUniqueID, iCommonID);
    }
    else
    {
      if ( actor->GetFounderPlayerID(actor) >= 0 )
      {
        v8 = !actor->IsOptionAsset(actor);
        v9 = actor->__vftable;
        if ( v8 )
        {
          v13 = v9->GetFounderPlayerID(actor);
          if ( !*(_QWORD *)(v19[0] + 8 * v13 + 2182544) )
            return;
          v14 = actor->GetFounderPlayerID(actor);
          v12 = *(_QWORD *)(v19[0] + 8 * v14 + 2182544);
        }
        else
        {
          v10 = v9->GetFounderPlayerID(actor);
          if ( !*(_QWORD *)(v19[0] + 8 * v10 + 2182560) )
            return;
          v11 = actor->GetFounderPlayerID(actor);
          v12 = *(_QWORD *)(v19[0] + 8 * v11 + 2182560);
        }
        v7 = *(_QWORD **)(v12 + 80);
      }
      else
      {
        v6 = *(_QWORD *)(v19[0] + 2182576);
        if ( !v6 )
          return;
        v7 = *(_QWORD **)(v6 + 80);
      }
      if ( v7 )
      {
        iGroupID = sound->iGroupID;
        if ( (*(int (__fastcall **)(_QWORD *))(*v7 + 72i64))(v7) > iGroupID )
        {
          v16 = (__int16 *)(v7[6] + 16i64 * (__int16)iGroupID);
          for ( i = v16 + 8; v16 != i; v16 += 2 )
          {
            if ( v16[1] )
              lambda_1c3cbe424a4ce0281cf4385146677901_::operator()((__int64 **)commonID, *v16, v16[1]);
          }
        }
      }
    }
  }
}

void __fastcall DamageSettingUtil::RequestCharaSound(Actor *actor, __int64 soundID, float centerX)
{
  __int64 v4; // rbp
  bool v5; // zf
  Actor_vtbl *v6; // rax
  unsigned int v7; // edi
  char *v8; // rbx
  char v9; // si
  BattleSystem::BattleController *v10; // rax
  __int64 v11; // rdx
  float SoundPanPosition; // xmm0_4
  extension::SoundList *v13; // rcx
  extension::SoundObject o; // [rsp+60h] [rbp+8h] BYREF
  BattleSystem::BattleController *v15; // [rsp+78h] [rbp+20h]

  v4 = *(_QWORD *)&AppMain::pApp;
  v5 = ((unsigned __int8 (__fastcall *)(Actor *, __int64))actor->IsOptionAsset)(actor, soundID) == 0;
  v6 = actor->__vftable;
  if ( v5 )
    v7 = ((__int64 (__fastcall *)(Actor *))v6->GetFounderPlayerID)(actor) + 1;
  else
    v7 = ((__int64 (__fastcall *)(Actor *))v6->GetFounderPlayerID)(actor) + 3;
  v8 = (char *)operator new(0x60ui64);
  *(_QWORD *)v8 = 1i64;
  *((_WORD *)v8 + 4) = 1;
  v9 = 0;
  *(_QWORD *)(v8 + 12) = 0i64;
  *(_QWORD *)(v8 + 20) = 0i64;
  *((_DWORD *)v8 + 7) = 1120403456;
  *((_QWORD *)v8 + 11) = 0i64;
  o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v8;
  v10 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v15 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v15);
    BattleSystem::BattleController::instance = v10;
  }
  SoundPanPosition = ActionSystem::GetSoundPanPosition(&v10->actSystem, centerX);
  if ( v8[8] || *((float *)v8 + 6) != SoundPanPosition )
    v9 = 1;
  v8[8] = v9;
  *((float *)v8 + 6) = SoundPanPosition;
  v8[9] = 0;
  if ( v7 <= 8 )
  {
    v13 = (extension::SoundList *)(v4 + 48i64 * (int)v7 + 2196904);
    if ( v13 )
      extension::SoundList::playSEByName(v13, &o, &s_soundIndex.m_keys[158], 0i64);
  }
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
    &o.m_runtimeEffector,
    v11);
}

char __fastcall DamageSettingUtil::RequestCountHitSound(const CharaAttackData::AttackData *atkData, float centerX)
{
  BattleSystem::BattleController *v3; // rax
  __int64 v4; // rsi
  int iCommonID; // eax
  char *v6; // rbx
  char v7; // di
  ActionSystem *v8; // rax
  __int64 v9; // rdx
  float SoundPanPosition; // xmm0_4
  extension::SoundObject o; // [rsp+60h] [rbp+18h] BYREF

  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController((BattleSystem::BattleController *)o.m_runtimeEffector.m_ptr);
    BattleSystem::BattleController::instance = v3;
  }
  if ( v3->bAkebonoKO )
    return 0;
  if ( v3->roundPhase == (WALL|ERASE) )
    return 0;
  if ( atkData->iSkillType >= 4 )
    return 0;
  v4 = *(_QWORD *)&AppMain::pApp;
  iCommonID = atkData->hitSound1.iCommonID;
  if ( !iCommonID
    && atkData->hitSound2.iCommonID <= 0
    && atkData->hitSound2.iUniqueID < 0
    && atkData->hitSound2.iGroupID <= 0 )
  {
    return 0;
  }
  if ( atkData->hitSound1.iUniqueID >= 0
    || atkData->hitSound1.iGroupID > 0
    || iCommonID > 0 && (unsigned int)DamageSettingUtil::CheckExtraFinishSound(&atkData->hitSound1) != 139 )
  {
    return 0;
  }
  v6 = (char *)operator new(0x60ui64);
  *(_QWORD *)v6 = 1i64;
  *((_WORD *)v6 + 4) = 1;
  v7 = 0;
  *(_QWORD *)(v6 + 12) = 0i64;
  *(_QWORD *)(v6 + 20) = 0i64;
  *((_DWORD *)v6 + 7) = 1120403456;
  *((_QWORD *)v6 + 11) = 0i64;
  o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v6;
  BattleSystem::BattleController::GetActionSystem();
  SoundPanPosition = ActionSystem::GetSoundPanPosition(v8, centerX);
  if ( v6[8] || *((float *)v6 + 6) != SoundPanPosition )
    v7 = 1;
  v6[8] = v7;
  *((float *)v6 + 6) = SoundPanPosition;
  v6[9] = 0;
  if ( v4 != -2196904 )
    extension::SoundList::playSEByName((extension::SoundList *)(v4 + 2196904), &o, &s_soundIndex.m_keys[142], 0i64);
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
    &o.m_runtimeEffector,
    v9);
  return 1;
}

void __fastcall DamageSettingUtil::RequestDamagedVoice(ActorChara *actor, const CharaAttackData::AttackData *atkData)
{
  __int64 v4; // r15
  int v5; // eax
  unsigned int v6; // esi
  extension::SoundManager *v7; // rax
  __int64 v8; // rbp
  bool v9; // zf
  ActorChara_vtbl *v10; // rax
  unsigned int v11; // edi
  char *v12; // rsi
  char v13; // r14
  __int64 v14; // rdx
  float SoundPanPosition; // xmm0_4
  extension::SoundList *v16; // rcx
  OGLVec3 *v17; // rax
  char v18[64]; // [rsp+28h] [rbp-40h] BYREF
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> group; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_QWORD *)&AppMain::pApp;
  if ( !actor->IsKO(actor) )
  {
    if ( !actor->IsDamaged(actor) )
    {
      v5 = actor->GetPlayerID(actor);
      group.m_ptr = (extension::exsound_detail::RuntimeEffector *)0x500000004i64;
      v6 = *((_DWORD *)&group.m_ptr + v5);
      v7 = extension::SoundManager::the_instance;
      if ( !extension::SoundManager::the_instance )
      {
        group.m_ptr = (extension::exsound_detail::RuntimeEffector *)operator new(0x310ui64);
        extension::SoundManager::SoundManager((extension::SoundManager *)group.m_ptr);
        extension::SoundManager::the_instance = v7;
      }
      extension::SoundManager::stopGroupSE(v7, v6);
    }
    if ( atkData->hitVoice.iCommonID >= 0 || atkData->hitVoice.iUniqueID >= 0 || atkData->hitVoice.iGroupID > 0 )
    {
      v17 = actor->GetCenterPosition(actor, v18);
      DamageSettingUtil::RequestAttackSound(actor, &atkData->hitVoice, v17->x);
    }
    else if ( atkData->iDataType <= 1u || (unsigned int)(atkData->iDataType - 3) <= 1 )
    {
      switch ( atkData->iSkillType )
      {
        case 1:
        case 2:
          v8 = 159i64;
          goto LABEL_16;
        case 3:
          v8 = 161i64;
          goto LABEL_16;
        case 4:
          v8 = 162i64;
          goto LABEL_16;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
          v8 = 160i64;
LABEL_16:
          v9 = !actor->IsOptionAsset(actor);
          v10 = actor->ActorCharaBase::ActorObject::Actor::__vftable;
          if ( v9 )
            v11 = ((__int64 (__fastcall *)(ActorChara *))v10->GetFounderPlayerID)(actor) + 1;
          else
            v11 = ((__int64 (__fastcall *)(ActorChara *))v10->GetFounderPlayerID)(actor) + 3;
          v12 = (char *)operator new(0x60ui64);
          *(_QWORD *)v12 = 1i64;
          *((_WORD *)v12 + 4) = 1;
          v13 = 0;
          *(_QWORD *)(v12 + 12) = 0i64;
          *(_QWORD *)(v12 + 20) = 0i64;
          *((_DWORD *)v12 + 7) = 1120403456;
          *((_QWORD *)v12 + 11) = 0i64;
          group.m_ptr = (extension::exsound_detail::RuntimeEffector *)v12;
          SoundPanPosition = Actor::GetSoundPanPosition(actor);
          if ( v12[8] || *((float *)v12 + 6) != SoundPanPosition )
            v13 = 1;
          v12[8] = v13;
          *((float *)v12 + 6) = SoundPanPosition;
          v12[9] = 0;
          if ( v11 <= 8 )
          {
            v16 = (extension::SoundList *)(v4 + 48i64 * (int)v11 + 2196904);
            if ( v16 )
              extension::SoundList::playSEByName(
                v16,
                (const extension::SoundObject *)&group,
                &s_soundIndex.m_keys[v8],
                0i64);
          }
          extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
            &group,
            v14);
          break;
        default:
          return;
      }
    }
  }
}

void __fastcall DamageSettingUtil::RequestFinishGuardSound(
        const CharaAttackData::AttackData *atkData,
        ActorChara *pTarget,
        float centerX)
{
  __int64 v5; // rbp
  char *v6; // rbx
  char v7; // si
  ActionSystem *v8; // rax
  float SoundPanPosition; // xmm0_4
  __int64 v10; // rdx
  extension::SoundObject o; // [rsp+58h] [rbp+10h] BYREF

  if ( !pTarget->xVital.value && !pTarget->IsPlayedFinishHitSound(pTarget) && atkData->guardSound.iCommonID )
  {
    v5 = *(_QWORD *)&AppMain::pApp;
    v6 = (char *)operator new(0x60ui64);
    *(_QWORD *)v6 = 1i64;
    *((_WORD *)v6 + 4) = 1;
    v7 = 0;
    *(_QWORD *)(v6 + 12) = 0i64;
    *(_QWORD *)(v6 + 20) = 0i64;
    *((_DWORD *)v6 + 7) = 1120403456;
    *((_QWORD *)v6 + 11) = 0i64;
    o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v6;
    BattleSystem::BattleController::GetActionSystem();
    SoundPanPosition = ActionSystem::GetSoundPanPosition(v8, centerX);
    if ( v6[8] || *((float *)v6 + 6) != SoundPanPosition )
      v7 = 1;
    v6[8] = v7;
    *((float *)v6 + 6) = SoundPanPosition;
    v6[9] = 0;
    if ( v5 != -2196904 )
      extension::SoundList::playSEByName((extension::SoundList *)(v5 + 2196904), &o, &s_soundIndex.m_keys[139], 0i64);
    pTarget->SetPlayedFinishHitSound(pTarget);
    extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
      &o.m_runtimeEffector,
      v10);
  }
}

void __fastcall DamageSettingUtil::RequestFinishHitSound(
        const CharaAttackData::AttackData *atkData,
        ActorChara *pTarget,
        float centerX)
{
  __int64 v5; // r14
  int v6; // edi
  int iCommonID; // eax
  bool v8; // cc
  int v9; // eax
  int v10; // eax
  char *v11; // rbx
  char v12; // bp
  BattleSystem::BattleController *v13; // rax
  __int64 v14; // rdx
  float SoundPanPosition; // xmm0_4
  SoundIndex *v16; // r8
  __int64 v17; // rdx
  extension::SoundObject o; // [rsp+68h] [rbp+10h] BYREF
  BattleSystem::BattleController *v19; // [rsp+78h] [rbp+20h]

  if ( !pTarget->xVital.value && !pTarget->IsPlayedFinishHitSound(pTarget) )
  {
    v5 = *(_QWORD *)&AppMain::pApp;
    v6 = 139;
    iCommonID = atkData->hitSound1.iCommonID;
    v8 = iCommonID <= 0;
    if ( !iCommonID )
    {
      if ( atkData->hitSound2.iCommonID <= 0 && atkData->hitSound2.iUniqueID < 0 && atkData->hitSound2.iGroupID <= 0 )
        return;
      v8 = 1;
    }
    if ( !v8 )
    {
      v9 = DamageSettingUtil::CheckExtraFinishSound(&atkData->hitSound1);
      if ( v9 != 139 )
        v6 = v9;
    }
    if ( atkData->hitSound2.iCommonID > 0 )
    {
      v10 = DamageSettingUtil::CheckExtraFinishSound(&atkData->hitSound2);
      if ( v10 != 139 )
        v6 = v10;
    }
    v11 = (char *)operator new(0x60ui64);
    *(_QWORD *)v11 = 1i64;
    *((_WORD *)v11 + 4) = 1;
    v12 = 0;
    *(_QWORD *)(v11 + 12) = 0i64;
    *(_QWORD *)(v11 + 20) = 0i64;
    *((_DWORD *)v11 + 7) = 1120403456;
    *((_QWORD *)v11 + 11) = 0i64;
    o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v11;
    v13 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v19 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v19);
      BattleSystem::BattleController::instance = v13;
    }
    SoundPanPosition = ActionSystem::GetSoundPanPosition(&v13->actSystem, centerX);
    if ( v11[8] || *((float *)v11 + 6) != SoundPanPosition )
      v12 = 1;
    v11[8] = v12;
    *((float *)v11 + 6) = SoundPanPosition;
    v11[9] = 0;
    if ( (unsigned __int64)v6 >= 0x11A )
      v16 = &s_soundIndex;
    else
      v16 = (SoundIndex *)&s_soundIndex.m_keys[v6];
    if ( v5 != -2196904 )
      extension::SoundList::playSEByName((extension::SoundList *)(v5 + 2196904), &o, &v16->m_nullKey, 0i64);
    ((void (__fastcall *)(ActorChara *, __int64, SoundIndex *))pTarget->SetPlayedFinishHitSound)(pTarget, v14, v16);
    extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
      &o.m_runtimeEffector,
      v17);
  }
}

void __fastcall DamageSettingUtil::RequestGuardSound(
        ActorObject *actor,
        const CharaAttackData::AttackData *atkData,
        float centerX)
{
  __int64 v5; // r14
  BattleSystem::BattleController *v6; // rax
  int iSkillType; // ecx
  __int64 v8; // rbp
  bool v9; // zf
  ActorObject_vtbl *v10; // rax
  unsigned int v11; // ebx
  char *v12; // rdi
  char v13; // si
  ActionSystem *v14; // rax
  __int64 v15; // rdx
  float SoundPanPosition; // xmm0_4
  extension::SoundList *v17; // rcx
  extension::SoundObject o; // [rsp+78h] [rbp+20h] BYREF

  v5 = *(_QWORD *)&AppMain::pApp;
  v6 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController((BattleSystem::BattleController *)o.m_runtimeEffector.m_ptr);
    BattleSystem::BattleController::instance = v6;
  }
  if ( !v6->bAkebonoKO && v6->roundPhase != (WALL|ERASE) )
  {
    if ( atkData->guardSound.iCommonID >= 0 || atkData->guardSound.iUniqueID >= 0 || atkData->guardSound.iGroupID > 0 )
    {
      DamageSettingUtil::RequestAttackSound(actor, &atkData->guardSound, centerX);
      return;
    }
    iSkillType = atkData->iSkillType;
    if ( iSkillType == 1 )
    {
      v8 = 155i64;
    }
    else
    {
      if ( ((iSkillType - 2) & 0xFFFFFFF8) != 0 || iSkillType == 4 )
        return;
      v8 = 156i64;
    }
    v9 = !actor->IsOptionAsset(actor);
    v10 = actor->__vftable;
    if ( v9 )
      v11 = ((__int64 (__fastcall *)(ActorObject *))v10->GetFounderPlayerID)(actor) + 1;
    else
      v11 = ((__int64 (__fastcall *)(ActorObject *))v10->GetFounderPlayerID)(actor) + 3;
    v12 = (char *)operator new(0x60ui64);
    *(_QWORD *)v12 = 1i64;
    *((_WORD *)v12 + 4) = 1;
    v13 = 0;
    *(_QWORD *)(v12 + 12) = 0i64;
    *(_QWORD *)(v12 + 20) = 0i64;
    *((_DWORD *)v12 + 7) = 1120403456;
    *((_QWORD *)v12 + 11) = 0i64;
    o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v12;
    BattleSystem::BattleController::GetActionSystem();
    SoundPanPosition = ActionSystem::GetSoundPanPosition(v14, centerX);
    if ( v12[8] || *((float *)v12 + 6) != SoundPanPosition )
      v13 = 1;
    v12[8] = v13;
    *((float *)v12 + 6) = SoundPanPosition;
    v12[9] = 0;
    if ( v11 <= 8 )
    {
      v17 = (extension::SoundList *)(v5 + 48i64 * (int)v11 + 2196904);
      if ( v17 )
        extension::SoundList::playSEByName(v17, &o, &s_soundIndex.m_keys[v8], 0i64);
    }
    extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
      &o.m_runtimeEffector,
      v15);
  }
}

void __fastcall DamageSettingUtil::RequestStopVoice(int playerID)
{
  unsigned int v1; // ebx
  extension::SoundManager *v2; // rax
  __int64 v3; // [rsp+48h] [rbp+10h]

  v3 = 0x500000004i64;
  v1 = *((_DWORD *)&v3 + playerID);
  v2 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v3 = (__int64)operator new(0x310ui64);
    extension::SoundManager::SoundManager((extension::SoundManager *)v3);
    extension::SoundManager::the_instance = v2;
  }
  extension::SoundManager::stopGroupSE(v2, v1);
}

void __fastcall DamageSettingUtil::SetAttackHitOffset(
        const Collision::HitRectWork *atk,
        const Collision::HitRectWork *psv,
        bool bGroundSet)
{
  CharaAttackData::HitOffsetData *p_hitOffset; // rbx
  ActorChara *pParent; // rcx
  ActorChara_vtbl *v7; // rax

  p_hitOffset = &atk->data.atk.hitOffset;
  psv->pParent->RequestPositionAtkOffset(
    psv->pParent,
    atk->pOwner,
    (const CharaAttackData::HitOffsetData *)((char *)&atk->data.hit + 220));
  pParent = psv->pParent;
  if ( (pParent->iMoveOption & 1) != 0 )
  {
    if ( !p_hitOffset->iSettingX )
      ((void (__fastcall *)(ActorChara *))pParent->RequestPositionX)(pParent);
    if ( !p_hitOffset->iSettingY )
    {
      v7 = psv->pParent->__vftable;
LABEL_9:
      ((void (*)(void))v7->RequestPositionY)();
    }
  }
  else if ( !p_hitOffset->iSettingY && bGroundSet )
  {
    v7 = pParent->ActorCharaBase::ActorObject::Actor::__vftable;
    goto LABEL_9;
  }
}

void __fastcall DamageSettingUtil::SetDamageEffect(ActorChara *pTarget, int damageAttr)
{
  int v4; // er8

  if ( pTarget->GetDamageAttr(pTarget) != damageAttr )
  {
    switch ( damageAttr )
    {
      case 1:
        v4 = 32;
        goto LABEL_11;
      case 2:
        v4 = 33;
        goto LABEL_11;
      case 3:
        v4 = 34;
        goto LABEL_11;
      case 4:
        v4 = 37;
        goto LABEL_11;
      case 5:
        v4 = 38;
        goto LABEL_11;
      case 6:
        v4 = 39;
        goto LABEL_11;
      case 7:
        v4 = 40;
        goto LABEL_11;
      case 8:
        v4 = 41;
LABEL_11:
        DamageSettingUtil::SetFireDamageEffect(pTarget, damageAttr, v4);
        break;
      default:
        break;
    }
    pTarget->iDamageAttr = damageAttr;
  }
}

void __fastcall DamageSettingUtil::SetFireDamageEffect(ActorChara *pTarget, int damageAttr, int iActNo)
{
  __int64 v5; // rsi
  Actor::SYSTEM_STAT systemStat; // eax
  BattleSystem::BattleController *v7; // rax
  Actor *v8; // rax
  Actor *v9; // rdi
  BattleSystem::BattleController *v10; // [rsp+48h] [rbp-40h]
  __int64 v11; // [rsp+50h] [rbp-38h] BYREF
  int v12; // [rsp+58h] [rbp-30h]
  __int16 v13; // [rsp+5Ch] [rbp-2Ch]
  int v14; // [rsp+5Eh] [rbp-2Ah]
  __int16 v15; // [rsp+62h] [rbp-26h]
  int v16; // [rsp+64h] [rbp-24h]

  v11 = 0i64;
  v12 = 0;
  v14 = 1;
  v15 = iActNo;
  v16 = 1;
  v13 = 13;
  v5 = *(_QWORD *)&AppMain::pApp;
  if ( !pTarget || (systemStat = pTarget->systemStat) != INIT && systemStat != ERASE )
  {
    v7 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v10 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v10);
      BattleSystem::BattleController::instance = v7;
    }
    v8 = ActionSystem::Entry(&v7->actSystem, EFFECT, 7);
    v9 = v8;
    if ( v8 )
    {
      ((void (__fastcall *)(Actor *, _QWORD, __int64 *, ActorChara *, ActorChara *, ActorChara *, int))v8->__vftable[1].SetSpeedDataSub)(
        v8,
        *(_QWORD *)(v5 + 2182576),
        &v11,
        pTarget,
        pTarget,
        pTarget,
        -1);
      ((void (__fastcall *)(Actor *, __int64))v9->__vftable[1]._branchIsAir)(v9, 1i64);
      LODWORD(v9[1].vMovPrev.z) = damageAttr;
      ((void (__fastcall *)(Actor *, _QWORD))v9->__vftable[1]._branchIsLand)(v9, 0i64);
    }
  }
}

