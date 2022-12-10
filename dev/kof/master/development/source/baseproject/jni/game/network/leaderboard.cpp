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
#include "dev/kof/master/development/source/baseproject/jni/game/taskfunc/generaltask.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/ctasksystem.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingwritepc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingtargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingwriteworkpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.cpp"

struct LEADERBOARD_SUBMIT_WORK
{
	Fw::RANKING_HANDLE m_RankingHandle; // 0x0
};
Fw::RANKING_HANDLE SubmitScore(LEADERBOARD_ID id, LEADERBOARD_INFO * pInfo, bool getHandleFlag); // 0x14015D8B0
long GT_LeaderboardSubmit(GENERAL_TASK * pGT); // 0x14015FDE0
class LeaderboardCallbackHandler
{
public:
	LeaderboardCallbackHandler();
	void OnLeaderboardFindResult(LeaderboardFindResult_t *, bool);
	CCallResult<LeaderboardCallbackHandler,LeaderboardFindResult_t> m_CallResultLeaderboardFindResult; // 0x0
	~LeaderboardCallbackHandler();
};
class CCallResult<LeaderboardCallbackHandler,LeaderboardFindResult_t> :
	protected CCallbackBase
{
	typedef void(*func_t)(LeaderboardFindResult_t *, bool);
public:
	CCallResult<LeaderboardCallbackHandler,LeaderboardFindResult_t>();
	~CCallResult<LeaderboardCallbackHandler,LeaderboardFindResult_t>();
	void Set(unsigned long long, LeaderboardCallbackHandler *, void(*)(LeaderboardFindResult_t *, bool));
	bool IsActive();
	void Cancel();
	void SetGameserverFlag();
private:
	virtual void Run(void *, bool, unsigned long long);
	virtual void Run(void *);
	virtual long GetCallbackSizeBytes();
	unsigned long long m_hAPICall; // 0x10
	LeaderboardCallbackHandler * m_pObj; // 0x18
	void(*m_Func)(LeaderboardFindResult_t *, bool); // 0x20
};
std::piecewise_construct_t std::piecewise_construct; // 0x14089E3A4
long s_leaderboardFindId; // 0x140A5A938
LeaderboardCallbackHandler * s_leaderboardCallbackHandler; // 0x140A97530
const char * s_leaderboardName[614]; // 0x14089E650
unsigned long long s_leaderboardHandle[614]; // 0x140AC2B00
void LeaderboardCallbackHandler::OnLeaderboardFindResult(LeaderboardFindResult_t * pParam, bool bIOFailure); // 0x14015FE40
unsigned long long GetLeaderboardHandle(LEADERBOARD_ID id); // 0x14015FE60//decompilation failure at 14089E3A4!
//decompilation failure at 140A5A938!
//decompilation failure at 140A97530!
//decompilation failure at 14089E650!
//decompilation failure at 140AC2B00!
__int64 __fastcall GT_LeaderboardSubmit(GENERAL_TASK *pGT)
{
  Fw::RANKING_HANDLE *pBuffer; // rdi
  Fw::RANKING_HANDLE v3; // er11
  bool v4; // zf
  int iStat; // eax

  pBuffer = (Fw::RANKING_HANDLE *)pGT->pBuffer;
  if ( pBuffer )
  {
    if ( (unsigned int)Fw::RankingTarget::GetResult(*pBuffer) )
    {
      Fw::RankingSystem::ReleaseHandle(v3);
      v4 = *(_QWORD *)&AppMain::pApp == 0i64;
      *pBuffer = RANKING_HANDLE_INVALID;
      if ( !v4 )
      {
        iStat = pGT->iStat;
        if ( (iStat & 1) != 0 )
          pGT->iStat = iStat | 6;
      }
    }
  }
  return 0i64;
}

__int64 __fastcall Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand>::GetSize(
        Scaleform::Render::DICommand_Histogram *this)
{
  return 16i64;
}

unsigned __int64 __fastcall GetLeaderboardHandle(LEADERBOARD_ID id, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rax
  LeaderboardCallbackHandler *v5; // rbx
  __int64 v6; // rdi

  v2 = id;
  if ( s_leaderboardHandle[v2] || s_leaderboardFindId == id )
    return s_leaderboardHandle[v2];
  s_leaderboardFindId = id;
  v3 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, a2);
  v4 = (*(__int64 (__fastcall **)(_QWORD, const char *))(**(_QWORD **)(v3 + 40) + 184i64))(
         *(_QWORD *)(v3 + 40),
         s_leaderboardName[v2]);
  v5 = s_leaderboardCallbackHandler;
  v6 = v4;
  if ( s_leaderboardCallbackHandler->m_CallResultLeaderboardFindResult.m_hAPICall )
    SteamAPI_UnregisterCallResult(s_leaderboardCallbackHandler);
  v5->m_CallResultLeaderboardFindResult.m_hAPICall = v6;
  v5->m_CallResultLeaderboardFindResult.m_Func = LeaderboardCallbackHandler::OnLeaderboardFindResult;
  v5->m_CallResultLeaderboardFindResult.m_pObj = v5;
  if ( v6 )
    SteamAPI_RegisterCallResult(v5, v6);
  return s_leaderboardHandle[v2];
}

void __fastcall LeaderboardCallbackHandler::OnLeaderboardFindResult(
        LeaderboardCallbackHandler *this,
        LeaderboardFindResult_t *pParam,
        bool bIOFailure)
{
  __int64 v3; // rcx
  unsigned __int64 m_hSteamLeaderboard; // rax

  v3 = s_leaderboardFindId;
  m_hSteamLeaderboard = pParam->m_hSteamLeaderboard;
  s_leaderboardFindId = -1;
  s_leaderboardHandle[v3] = m_hSteamLeaderboard;
}

void __fastcall CCallResult<Fw::cRankingWriteWork,RemoteStorageFileShareResult_t>::Run(
        CCallResult<LeaderboardCallbackHandler,LeaderboardFindResult_t> *this,
        void *pvParam)
{
  this->m_hAPICall = 0i64;
  this->m_Func(this->m_pObj, (LeaderboardFindResult_t *)pvParam, 0);
}

void __fastcall CCallResult<Fw::cRankingReadWork,RemoteStorageDownloadUGCResult_t>::Run(
        CCallResult<LeaderboardCallbackHandler,LeaderboardFindResult_t> *this,
        void *pvParam,
        _BOOL8 bIOFailure,
        unsigned __int64 hSteamAPICall)
{
  if ( hSteamAPICall == this->m_hAPICall )
  {
    this->m_hAPICall = 0i64;
    this->m_Func(this->m_pObj, (LeaderboardFindResult_t *)pvParam, bIOFailure);
  }
}

__int64 __fastcall SubmitScore(LEADERBOARD_ID id, LEADERBOARD_INFO *pInfo, bool getHandleFlag)
{
  int m_PcId; // edx
  LEADERBOARD_INFO *v6; // rdx
  LEADERBOARD_ID v7; // ecx
  unsigned __int8 m_DisconnectMarker; // al
  unsigned int v9; // edx
  LEADERBOARD_ID v10; // ecx
  LEADERBOARD_ID v11; // ecx
  LEADERBOARD_ID v12; // ecx
  LEADERBOARD_ID v13; // ecx
  LEADERBOARD_ID v14; // ecx
  LEADERBOARD_ID v15; // ecx
  LEADERBOARD_ID v16; // ecx
  int v17; // ecx
  Fw::cRankingWriteWork *v18; // rax
  LEADERBOARD_ID v19; // ecx
  LEADERBOARD_ID v20; // ecx
  LEADERBOARD_ID v21; // ecx
  LEADERBOARD_ID v22; // ecx
  LEADERBOARD_ID v23; // ecx
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  Fw::cRankingWriteWork *v30; // rbx
  unsigned int v31; // edi
  unsigned int v32; // eax
  Fw::ScoreGameInfo *v33; // rax
  int v34; // er8
  int v35; // er9
  GENERAL_TASK *v36; // rax
  Fw::ScoreGameInfo *m_pGameInfo; // rcx
  GENERAL_TASK *v39; // [rsp+20h] [rbp-69h]
  __int64 v40[22]; // [rsp+30h] [rbp-59h] BYREF
  int v41; // [rsp+F0h] [rbp+67h]

  memset(v40, 0, 0x98ui64);
  m_PcId = pInfo->m_PcId;
  v40[0] = pInfo->m_Score;
  v40[1] = __PAIR64__(m_PcId, id);
  v41 = m_PcId;
  if ( id > LEADERBOARD_ID_TIMEATTACK_SCORE_ALL )
  {
    if ( id > LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_WHP )
    {
      if ( (unsigned int)(id - 554) > 0x3B )
        goto LABEL_351;
      goto $LN664;
    }
    if ( id >= LEADERBOARD_ID_SURVIVAL_SCORE_ALL_ROC )
    {
$LN664:
      WORD2(v40[2]) = *(_WORD *)&pInfo->m_RankWin.m_Icon;
      m_DisconnectMarker = pInfo->m_Survival.m_DisconnectMarker;
      goto LABEL_350;
    }
    if ( id > LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER )
    {
      if ( id > LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_VRS )
      {
        if ( id == LEADERBOARD_ID_REPLAY_RANK )
        {
          v24 = *(_OWORD *)&pInfo->m_RankWin.m_Icon;
          LODWORD(v40[2]) = 96;
          v25 = *(_OWORD *)&pInfo->m_Replay.m_User[0][0].icon;
          *(_OWORD *)((char *)&v40[2] + 4) = v24;
          v26 = *(_OWORD *)&pInfo->m_Replay.m_User[0][2].onlineId;
          *(_OWORD *)((char *)&v40[4] + 4) = v25;
          v27 = *(_OWORD *)((char *)&pInfo->m_Replay.m_User[1][0].onlineId + 4);
          *(_OWORD *)((char *)&v40[6] + 4) = v26;
          v28 = *(_OWORD *)&pInfo->m_Replay.m_User[1][1].icon;
          *(_OWORD *)((char *)&v40[8] + 4) = v27;
          v29 = *(_OWORD *)&pInfo->m_Replay.m_Character[0][0].characterId;
          *(_OWORD *)((char *)&v40[10] + 4) = v28;
          *(_OWORD *)((char *)&v40[12] + 4) = v29;
        }
        goto LABEL_351;
      }
      goto $LN664;
    }
LABEL_355:
    HIDWORD(v40[2]) = *(_DWORD *)&pInfo->m_RankWin.m_Icon;
    LODWORD(v40[2]) = 4;
    goto LABEL_351;
  }
  if ( id == LEADERBOARD_ID_TIMEATTACK_SCORE_ALL )
  {
    switch ( pInfo->m_Area )
    {
      case LEADERBOARD_AREA_ASIA:
        switch ( pInfo->m_RankWin.m_DisconnectMarker )
        {
          case 0u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_KYO;
            break;
          case 1u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_BEN;
            break;
          case 2u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_DMN;
            break;
          case 3u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_RYO;
            break;
          case 4u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_RBT;
            break;
          case 5u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_YRI;
            break;
          case 6u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_TRY;
            break;
          case 7u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_ADY;
            break;
          case 8u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_JOE;
            break;
          case 9u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_LEO;
            break;
          case 0xAu:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_RLF;
            break;
          case 0xBu:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_CLK;
            break;
          case 0xCu:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_IOR;
            break;
          case 0xDu:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_MTR;
            break;
          case 0xEu:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_VIC;
            break;
          case 0xFu:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_KKK;
            break;
          case 0x10u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_KLA;
            break;
          case 0x11u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_MXI;
            break;
          case 0x12u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_GES;
            break;
          case 0x13u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_BLY;
            break;
          case 0x14u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_SSL;
            break;
          case 0x15u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_KNG;
            break;
          case 0x16u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_MAI;
            break;
          case 0x17u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_ALC;
            break;
          case 0x18u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_KIM;
            break;
          case 0x19u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_GAN;
            break;
          case 0x1Au:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_LUO;
            break;
          case 0x1Bu:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_ATN;
            break;
          case 0x1Cu:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_KNS;
            break;
          case 0x1Du:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_CHN;
            break;
          case 0x1Eu:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_XND;
            break;
          case 0x1Fu:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_CNG;
            break;
          case 0x20u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_CHO;
            break;
          case 0x21u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_NKR;
            break;
          case 0x22u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_MUI;
            break;
          case 0x23u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_LVH;
            break;
          case 0x24u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_RMN;
            break;
          case 0x25u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_AGL;
            break;
          case 0x26u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_KOD;
            break;
          case 0x27u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_SHU;
            break;
          case 0x28u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_TUN;
            break;
          case 0x29u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_MTK;
            break;
          case 0x2Au:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_ZRN;
            break;
          case 0x2Bu:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_BDR;
            break;
          case 0x2Cu:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_NEL;
            break;
          case 0x2Du:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_SLV;
            break;
          case 0x2Eu:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_KKR;
            break;
          case 0x2Fu:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_MIA;
            break;
          case 0x30u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_ANT;
            break;
          case 0x31u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_VRS;
            break;
          case 0x32u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_ROC;
            break;
          case 0x33u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_MRY;
            break;
          case 0x34u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_YMZ;
            break;
          case 0x35u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_VNS;
            break;
          case 0x36u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_OSW;
            break;
          case 0x38u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_HDR;
            break;
          case 0x39u:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_WHP;
            break;
          case 0x3Cu:
            v23 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA_NJD;
            break;
          default:
            return 0i64;
        }
        SubmitScore(v23, pInfo, 0);
        v20 = LEADERBOARD_ID_TIMEATTACK_SCORE_ASIA;
        break;
      case LEADERBOARD_AREA_NORTHAMERICA:
        switch ( pInfo->m_RankWin.m_DisconnectMarker )
        {
          case 0u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_KYO;
            break;
          case 1u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_BEN;
            break;
          case 2u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_DMN;
            break;
          case 3u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_RYO;
            break;
          case 4u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_RBT;
            break;
          case 5u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_YRI;
            break;
          case 6u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_TRY;
            break;
          case 7u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_ADY;
            break;
          case 8u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_JOE;
            break;
          case 9u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_LEO;
            break;
          case 0xAu:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_RLF;
            break;
          case 0xBu:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_CLK;
            break;
          case 0xCu:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_IOR;
            break;
          case 0xDu:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_MTR;
            break;
          case 0xEu:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_VIC;
            break;
          case 0xFu:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_KKK;
            break;
          case 0x10u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_KLA;
            break;
          case 0x11u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_MXI;
            break;
          case 0x12u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_GES;
            break;
          case 0x13u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_BLY;
            break;
          case 0x14u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_SSL;
            break;
          case 0x15u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_KNG;
            break;
          case 0x16u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_MAI;
            break;
          case 0x17u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_ALC;
            break;
          case 0x18u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_KIM;
            break;
          case 0x19u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_GAN;
            break;
          case 0x1Au:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_LUO;
            break;
          case 0x1Bu:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_ATN;
            break;
          case 0x1Cu:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_KNS;
            break;
          case 0x1Du:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_CHN;
            break;
          case 0x1Eu:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_XND;
            break;
          case 0x1Fu:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_CNG;
            break;
          case 0x20u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_CHO;
            break;
          case 0x21u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_NKR;
            break;
          case 0x22u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_MUI;
            break;
          case 0x23u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_LVH;
            break;
          case 0x24u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_RMN;
            break;
          case 0x25u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_AGL;
            break;
          case 0x26u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_KOD;
            break;
          case 0x27u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_SHU;
            break;
          case 0x28u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_TUN;
            break;
          case 0x29u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_MTK;
            break;
          case 0x2Au:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_ZRN;
            break;
          case 0x2Bu:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_BDR;
            break;
          case 0x2Cu:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_NEL;
            break;
          case 0x2Du:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_SLV;
            break;
          case 0x2Eu:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_KKR;
            break;
          case 0x2Fu:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_MIA;
            break;
          case 0x30u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_ANT;
            break;
          case 0x31u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_VRS;
            break;
          case 0x32u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_ROC;
            break;
          case 0x33u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_MRY;
            break;
          case 0x34u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_YMZ;
            break;
          case 0x35u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_VNS;
            break;
          case 0x36u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_OSW;
            break;
          case 0x38u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_HDR;
            break;
          case 0x39u:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_WHP;
            break;
          case 0x3Cu:
            v22 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA_NJD;
            break;
          default:
            return 0i64;
        }
        SubmitScore(v22, pInfo, 0);
        v20 = LEADERBOARD_ID_TIMEATTACK_SCORE_NORTHAMERICA;
        break;
      case LEADERBOARD_AREA_EUROPE:
        switch ( pInfo->m_RankWin.m_DisconnectMarker )
        {
          case 0u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_KYO;
            break;
          case 1u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_BEN;
            break;
          case 2u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_DMN;
            break;
          case 3u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_RYO;
            break;
          case 4u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_RBT;
            break;
          case 5u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_YRI;
            break;
          case 6u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_TRY;
            break;
          case 7u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_ADY;
            break;
          case 8u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_JOE;
            break;
          case 9u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_LEO;
            break;
          case 0xAu:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_RLF;
            break;
          case 0xBu:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_CLK;
            break;
          case 0xCu:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_IOR;
            break;
          case 0xDu:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_MTR;
            break;
          case 0xEu:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_VIC;
            break;
          case 0xFu:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_KKK;
            break;
          case 0x10u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_KLA;
            break;
          case 0x11u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_MXI;
            break;
          case 0x12u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_GES;
            break;
          case 0x13u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_BLY;
            break;
          case 0x14u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_SSL;
            break;
          case 0x15u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_KNG;
            break;
          case 0x16u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_MAI;
            break;
          case 0x17u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_ALC;
            break;
          case 0x18u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_KIM;
            break;
          case 0x19u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_GAN;
            break;
          case 0x1Au:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_LUO;
            break;
          case 0x1Bu:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_ATN;
            break;
          case 0x1Cu:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_KNS;
            break;
          case 0x1Du:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_CHN;
            break;
          case 0x1Eu:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_XND;
            break;
          case 0x1Fu:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_CNG;
            break;
          case 0x20u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_CHO;
            break;
          case 0x21u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_NKR;
            break;
          case 0x22u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_MUI;
            break;
          case 0x23u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_LVH;
            break;
          case 0x24u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_RMN;
            break;
          case 0x25u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_AGL;
            break;
          case 0x26u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_KOD;
            break;
          case 0x27u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_SHU;
            break;
          case 0x28u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_TUN;
            break;
          case 0x29u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_MTK;
            break;
          case 0x2Au:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_ZRN;
            break;
          case 0x2Bu:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_BDR;
            break;
          case 0x2Cu:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_NEL;
            break;
          case 0x2Du:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_SLV;
            break;
          case 0x2Eu:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_KKR;
            break;
          case 0x2Fu:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_MIA;
            break;
          case 0x30u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_ANT;
            break;
          case 0x31u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_VRS;
            break;
          case 0x32u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_ROC;
            break;
          case 0x33u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_MRY;
            break;
          case 0x34u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_YMZ;
            break;
          case 0x35u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_VNS;
            break;
          case 0x36u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_OSW;
            break;
          case 0x38u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_HDR;
            break;
          case 0x39u:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_WHP;
            break;
          case 0x3Cu:
            v21 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE_NJD;
            break;
          default:
            return 0i64;
        }
        SubmitScore(v21, pInfo, 0);
        v20 = LEADERBOARD_ID_TIMEATTACK_SCORE_EUROPE;
        break;
      default:
        switch ( pInfo->m_RankWin.m_DisconnectMarker )
        {
          case 0u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_KYO;
            break;
          case 1u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_BEN;
            break;
          case 2u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_DMN;
            break;
          case 3u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_RYO;
            break;
          case 4u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_RBT;
            break;
          case 5u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_YRI;
            break;
          case 6u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_TRY;
            break;
          case 7u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_ADY;
            break;
          case 8u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_JOE;
            break;
          case 9u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_LEO;
            break;
          case 0xAu:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_RLF;
            break;
          case 0xBu:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_CLK;
            break;
          case 0xCu:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_IOR;
            break;
          case 0xDu:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_MTR;
            break;
          case 0xEu:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_VIC;
            break;
          case 0xFu:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_KKK;
            break;
          case 0x10u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_KLA;
            break;
          case 0x11u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_MXI;
            break;
          case 0x12u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_GES;
            break;
          case 0x13u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_BLY;
            break;
          case 0x14u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_SSL;
            break;
          case 0x15u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_KNG;
            break;
          case 0x16u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_MAI;
            break;
          case 0x17u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_ALC;
            break;
          case 0x18u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_KIM;
            break;
          case 0x19u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_GAN;
            break;
          case 0x1Au:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_LUO;
            break;
          case 0x1Bu:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_ATN;
            break;
          case 0x1Cu:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_KNS;
            break;
          case 0x1Du:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_CHN;
            break;
          case 0x1Eu:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_XND;
            break;
          case 0x1Fu:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_CNG;
            break;
          case 0x20u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_CHO;
            break;
          case 0x21u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_NKR;
            break;
          case 0x22u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_MUI;
            break;
          case 0x23u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_LVH;
            break;
          case 0x24u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_RMN;
            break;
          case 0x25u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_AGL;
            break;
          case 0x26u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_KOD;
            break;
          case 0x27u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_SHU;
            break;
          case 0x28u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_TUN;
            break;
          case 0x29u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_MTK;
            break;
          case 0x2Au:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_ZRN;
            break;
          case 0x2Bu:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_BDR;
            break;
          case 0x2Cu:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_NEL;
            break;
          case 0x2Du:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_SLV;
            break;
          case 0x2Eu:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_KKR;
            break;
          case 0x2Fu:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_MIA;
            break;
          case 0x30u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_ANT;
            break;
          case 0x31u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_VRS;
            break;
          case 0x32u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_ROC;
            break;
          case 0x33u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_MRY;
            break;
          case 0x34u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_YMZ;
            break;
          case 0x35u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_VNS;
            break;
          case 0x36u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_OSW;
            break;
          case 0x38u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_HDR;
            break;
          case 0x39u:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_WHP;
            break;
          case 0x3Cu:
            v19 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER_NJD;
            break;
          default:
            return 0i64;
        }
        SubmitScore(v19, pInfo, 0);
        v20 = LEADERBOARD_ID_TIMEATTACK_SCORE_OTHER;
        break;
    }
    SubmitScore(v20, pInfo, 0);
    switch ( pInfo->m_RankWin.m_DisconnectMarker )
    {
      case 0u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_KYO;
        break;
      case 1u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_BEN;
        break;
      case 2u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_DMN;
        break;
      case 3u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_RYO;
        break;
      case 4u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_RBT;
        break;
      case 5u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_YRI;
        break;
      case 6u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_TRY;
        break;
      case 7u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_ADY;
        break;
      case 8u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_JOE;
        break;
      case 9u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_LEO;
        break;
      case 0xAu:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_RLF;
        break;
      case 0xBu:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_CLK;
        break;
      case 0xCu:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_IOR;
        break;
      case 0xDu:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_MTR;
        break;
      case 0xEu:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_VIC;
        break;
      case 0xFu:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_KKK;
        break;
      case 0x10u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_KLA;
        break;
      case 0x11u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_MXI;
        break;
      case 0x12u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_GES;
        break;
      case 0x13u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_BLY;
        break;
      case 0x14u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_SSL;
        break;
      case 0x15u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_KNG;
        break;
      case 0x16u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_MAI;
        break;
      case 0x17u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_ALC;
        break;
      case 0x18u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_KIM;
        break;
      case 0x19u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_GAN;
        break;
      case 0x1Au:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_LUO;
        break;
      case 0x1Bu:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_ATN;
        break;
      case 0x1Cu:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_KNS;
        break;
      case 0x1Du:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_CHN;
        break;
      case 0x1Eu:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_XND;
        break;
      case 0x1Fu:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_CNG;
        break;
      case 0x20u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_CHO;
        break;
      case 0x21u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_NKR;
        break;
      case 0x22u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_MUI;
        break;
      case 0x23u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_LVH;
        break;
      case 0x24u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_RMN;
        break;
      case 0x25u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_AGL;
        break;
      case 0x26u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_KOD;
        break;
      case 0x27u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_SHU;
        break;
      case 0x28u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_TUN;
        break;
      case 0x29u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_MTK;
        break;
      case 0x2Au:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_ZRN;
        break;
      case 0x2Bu:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_BDR;
        break;
      case 0x2Cu:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_NEL;
        break;
      case 0x2Du:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_SLV;
        break;
      case 0x2Eu:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_KKR;
        break;
      case 0x2Fu:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_MIA;
        break;
      case 0x30u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_ANT;
        break;
      case 0x31u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_VRS;
        break;
      case 0x32u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_ROC;
        break;
      case 0x33u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_MRY;
        break;
      case 0x34u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_YMZ;
        break;
      case 0x35u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_VNS;
        break;
      case 0x36u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_OSW;
        break;
      case 0x38u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_HDR;
        break;
      case 0x39u:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_WHP;
        break;
      case 0x3Cu:
        v16 = LEADERBOARD_ID_TIMEATTACK_SCORE_ALL_NJD;
        break;
      default:
        return 0i64;
    }
LABEL_347:
    SubmitScore(v16, pInfo, 0);
    m_PcId = v41;
    HIDWORD(v40[2]) = *(_DWORD *)&pInfo->m_RankWin.m_Icon;
    LODWORD(v40[2]) = 4;
    goto LABEL_351;
  }
  if ( id <= LEADERBOARD_ID_RANKMATCH_WINS_TOTAL_OTHER )
  {
    if ( id < LEADERBOARD_ID_RANKMATCH_WINS_TOTAL_ASIA )
    {
      switch ( id )
      {
        case LEADERBOARD_ID_RANKMATCH_WIN_TOTAL_ALL:
          v6 = pInfo;
          switch ( pInfo->m_Area )
          {
            case LEADERBOARD_AREA_ASIA:
              v7 = LEADERBOARD_ID_RANKMATCH_WIN_TOTAL_ASIA;
              break;
            case LEADERBOARD_AREA_NORTHAMERICA:
              v7 = LEADERBOARD_ID_RANKMATCH_WIN_TOTAL_NORTHAMERICA;
              break;
            case LEADERBOARD_AREA_EUROPE:
              v7 = LEADERBOARD_ID_RANKMATCH_WIN_TOTAL_EUROPE;
              break;
            default:
              v7 = LEADERBOARD_ID_RANKMATCH_WIN_TOTAL_OTHER;
              break;
          }
          goto LABEL_30;
        case LEADERBOARD_ID_RANKMATCH_WIN_TOTAL_ASIA:
        case LEADERBOARD_ID_RANKMATCH_WIN_TOTAL_EUROPE:
        case LEADERBOARD_ID_RANKMATCH_WIN_TOTAL_NORTHAMERICA:
        case LEADERBOARD_ID_RANKMATCH_WIN_TOTAL_OTHER:
        case LEADERBOARD_ID_RANKMATCH_WIN_MONTHLY_ASIA:
        case LEADERBOARD_ID_RANKMATCH_WIN_MONTHLY_EUROPE:
        case LEADERBOARD_ID_RANKMATCH_WIN_MONTHLY_NORTHAMERICA:
        case LEADERBOARD_ID_RANKMATCH_WIN_MONTHLY_OTHER:
          break;
        case LEADERBOARD_ID_RANKMATCH_WIN_MONTHLY_ALL:
          v6 = pInfo;
          switch ( pInfo->m_Area )
          {
            case LEADERBOARD_AREA_ASIA:
              v7 = LEADERBOARD_ID_RANKMATCH_WIN_MONTHLY_ASIA;
              break;
            case LEADERBOARD_AREA_NORTHAMERICA:
              v7 = LEADERBOARD_ID_RANKMATCH_WIN_MONTHLY_NORTHAMERICA;
              break;
            case LEADERBOARD_AREA_EUROPE:
              v7 = LEADERBOARD_ID_RANKMATCH_WIN_MONTHLY_EUROPE;
              break;
            default:
              v7 = LEADERBOARD_ID_RANKMATCH_WIN_MONTHLY_OTHER;
              break;
          }
          goto LABEL_30;
        case LEADERBOARD_ID_RANKMATCH_WINS_TOTAL_ALL:
          v6 = pInfo;
          switch ( pInfo->m_Area )
          {
            case LEADERBOARD_AREA_ASIA:
              v7 = LEADERBOARD_ID_RANKMATCH_WINS_TOTAL_ASIA;
              break;
            case LEADERBOARD_AREA_NORTHAMERICA:
              v7 = LEADERBOARD_ID_RANKMATCH_WINS_TOTAL_NORTHAMERICA;
              break;
            case LEADERBOARD_AREA_EUROPE:
              v7 = LEADERBOARD_ID_RANKMATCH_WINS_TOTAL_EUROPE;
              break;
            default:
              v7 = LEADERBOARD_ID_RANKMATCH_WINS_TOTAL_OTHER;
              break;
          }
LABEL_30:
          SubmitScore(v7, v6, 0);
          m_PcId = v41;
          WORD2(v40[2]) = *(_WORD *)&pInfo->m_RankWin.m_Icon;
          m_DisconnectMarker = pInfo->m_RankWin.m_DisconnectMarker;
          goto LABEL_350;
        default:
          goto LABEL_351;
      }
    }
    WORD2(v40[2]) = *(_WORD *)&pInfo->m_RankWin.m_Icon;
    m_DisconnectMarker = pInfo->m_RankWin.m_DisconnectMarker;
    goto LABEL_350;
  }
  if ( id > LEADERBOARD_ID_SURVIVAL_SCORE_ALL )
  {
    if ( id > LEADERBOARD_ID_SURVIVAL_SCORE_OTHER )
      goto $LN664;
    goto LABEL_355;
  }
  if ( id == LEADERBOARD_ID_SURVIVAL_SCORE_ALL )
  {
    if ( pInfo->m_Area != LEADERBOARD_AREA_ASIA )
    {
      if ( pInfo->m_Area != LEADERBOARD_AREA_NORTHAMERICA )
      {
        if ( pInfo->m_Area != LEADERBOARD_AREA_EUROPE )
        {
          switch ( pInfo->m_RankWin.m_DisconnectMarker )
          {
            case 0u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_KYO;
              goto LABEL_107;
            case 1u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_BEN;
              goto LABEL_107;
            case 2u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_DMN;
              goto LABEL_107;
            case 3u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_RYO;
              goto LABEL_107;
            case 4u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_RBT;
              goto LABEL_107;
            case 5u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_YRI;
              goto LABEL_107;
            case 6u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_TRY;
              goto LABEL_107;
            case 7u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_ADY;
              goto LABEL_107;
            case 8u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_JOE;
              goto LABEL_107;
            case 9u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_LEO;
              goto LABEL_107;
            case 0xAu:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_RLF;
              goto LABEL_107;
            case 0xBu:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_CLK;
              goto LABEL_107;
            case 0xCu:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_IOR;
              goto LABEL_107;
            case 0xDu:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_MTR;
              goto LABEL_107;
            case 0xEu:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_VIC;
              goto LABEL_107;
            case 0xFu:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_KKK;
              goto LABEL_107;
            case 0x10u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_KLA;
              goto LABEL_107;
            case 0x11u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_MXI;
              goto LABEL_107;
            case 0x12u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_GES;
              goto LABEL_107;
            case 0x13u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_BLY;
              goto LABEL_107;
            case 0x14u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_SSL;
              goto LABEL_107;
            case 0x15u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_KNG;
              goto LABEL_107;
            case 0x16u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_MAI;
              goto LABEL_107;
            case 0x17u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_ALC;
              goto LABEL_107;
            case 0x18u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_KIM;
              goto LABEL_107;
            case 0x19u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_GAN;
              goto LABEL_107;
            case 0x1Au:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_LUO;
              goto LABEL_107;
            case 0x1Bu:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_ATN;
              goto LABEL_107;
            case 0x1Cu:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_KNS;
              goto LABEL_107;
            case 0x1Du:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_CHN;
              goto LABEL_107;
            case 0x1Eu:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_XND;
              goto LABEL_107;
            case 0x1Fu:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_CNG;
              goto LABEL_107;
            case 0x20u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_CHO;
              goto LABEL_107;
            case 0x21u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_NKR;
              goto LABEL_107;
            case 0x22u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_MUI;
              goto LABEL_107;
            case 0x23u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_LVH;
              goto LABEL_107;
            case 0x24u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_RMN;
              goto LABEL_107;
            case 0x25u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_AGL;
              goto LABEL_107;
            case 0x26u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_KOD;
              goto LABEL_107;
            case 0x27u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_SHU;
              goto LABEL_107;
            case 0x28u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_TUN;
              goto LABEL_107;
            case 0x29u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_MTK;
              goto LABEL_107;
            case 0x2Au:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_ZRN;
              goto LABEL_107;
            case 0x2Bu:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_BDR;
              goto LABEL_107;
            case 0x2Cu:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_NEL;
              goto LABEL_107;
            case 0x2Du:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_SLV;
              goto LABEL_107;
            case 0x2Eu:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_KKR;
              goto LABEL_107;
            case 0x2Fu:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_MIA;
              goto LABEL_107;
            case 0x30u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_ANT;
              goto LABEL_107;
            case 0x31u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_VRS;
              goto LABEL_107;
            case 0x32u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_ROC;
              goto LABEL_107;
            case 0x33u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_MRY;
              goto LABEL_107;
            case 0x34u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_YMZ;
              goto LABEL_107;
            case 0x35u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_VNS;
              goto LABEL_107;
            case 0x36u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_OSW;
              goto LABEL_107;
            case 0x38u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_HDR;
              goto LABEL_107;
            case 0x39u:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_WHP;
              goto LABEL_107;
            case 0x3Cu:
              v11 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER_NJD;
LABEL_107:
              SubmitScore(v11, pInfo, 0);
              v12 = LEADERBOARD_ID_SURVIVAL_SCORE_OTHER;
              goto LABEL_288;
            default:
              return 0i64;
          }
        }
        switch ( pInfo->m_RankWin.m_DisconnectMarker )
        {
          case 0u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_KYO;
            goto LABEL_167;
          case 1u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_BEN;
            goto LABEL_167;
          case 2u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_DMN;
            goto LABEL_167;
          case 3u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_RYO;
            goto LABEL_167;
          case 4u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_RBT;
            goto LABEL_167;
          case 5u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_YRI;
            goto LABEL_167;
          case 6u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_TRY;
            goto LABEL_167;
          case 7u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_ADY;
            goto LABEL_167;
          case 8u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_JOE;
            goto LABEL_167;
          case 9u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_LEO;
            goto LABEL_167;
          case 0xAu:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_RLF;
            goto LABEL_167;
          case 0xBu:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_CLK;
            goto LABEL_167;
          case 0xCu:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_IOR;
            goto LABEL_167;
          case 0xDu:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_MTR;
            goto LABEL_167;
          case 0xEu:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_VIC;
            goto LABEL_167;
          case 0xFu:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_KKK;
            goto LABEL_167;
          case 0x10u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_KLA;
            goto LABEL_167;
          case 0x11u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_MXI;
            goto LABEL_167;
          case 0x12u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_GES;
            goto LABEL_167;
          case 0x13u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_BLY;
            goto LABEL_167;
          case 0x14u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_SSL;
            goto LABEL_167;
          case 0x15u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_KNG;
            goto LABEL_167;
          case 0x16u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_MAI;
            goto LABEL_167;
          case 0x17u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_ALC;
            goto LABEL_167;
          case 0x18u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_KIM;
            goto LABEL_167;
          case 0x19u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_GAN;
            goto LABEL_167;
          case 0x1Au:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_LUO;
            goto LABEL_167;
          case 0x1Bu:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_ATN;
            goto LABEL_167;
          case 0x1Cu:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_KNS;
            goto LABEL_167;
          case 0x1Du:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_CHN;
            goto LABEL_167;
          case 0x1Eu:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_XND;
            goto LABEL_167;
          case 0x1Fu:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_CNG;
            goto LABEL_167;
          case 0x20u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_CHO;
            goto LABEL_167;
          case 0x21u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_NKR;
            goto LABEL_167;
          case 0x22u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_MUI;
            goto LABEL_167;
          case 0x23u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_LVH;
            goto LABEL_167;
          case 0x24u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_RMN;
            goto LABEL_167;
          case 0x25u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_AGL;
            goto LABEL_167;
          case 0x26u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_KOD;
            goto LABEL_167;
          case 0x27u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_SHU;
            goto LABEL_167;
          case 0x28u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_TUN;
            goto LABEL_167;
          case 0x29u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_MTK;
            goto LABEL_167;
          case 0x2Au:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_ZRN;
            goto LABEL_167;
          case 0x2Bu:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_BDR;
            goto LABEL_167;
          case 0x2Cu:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_NEL;
            goto LABEL_167;
          case 0x2Du:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_SLV;
            goto LABEL_167;
          case 0x2Eu:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_KKR;
            goto LABEL_167;
          case 0x2Fu:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_MIA;
            goto LABEL_167;
          case 0x30u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_ANT;
            goto LABEL_167;
          case 0x31u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_VRS;
            goto LABEL_167;
          case 0x32u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_ROC;
            goto LABEL_167;
          case 0x33u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_MRY;
            goto LABEL_167;
          case 0x34u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_YMZ;
            goto LABEL_167;
          case 0x35u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_VNS;
            goto LABEL_167;
          case 0x36u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_OSW;
            goto LABEL_167;
          case 0x38u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_HDR;
            goto LABEL_167;
          case 0x39u:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_WHP;
            goto LABEL_167;
          case 0x3Cu:
            v13 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE_NJD;
LABEL_167:
            SubmitScore(v13, pInfo, 0);
            v12 = LEADERBOARD_ID_SURVIVAL_SCORE_EUROPE;
            goto LABEL_288;
          default:
            return 0i64;
        }
      }
      switch ( pInfo->m_RankWin.m_DisconnectMarker )
      {
        case 0u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_KYO;
          goto LABEL_227;
        case 1u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_BEN;
          goto LABEL_227;
        case 2u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_DMN;
          goto LABEL_227;
        case 3u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_RYO;
          goto LABEL_227;
        case 4u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_RBT;
          goto LABEL_227;
        case 5u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_YRI;
          goto LABEL_227;
        case 6u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_TRY;
          goto LABEL_227;
        case 7u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_ADY;
          goto LABEL_227;
        case 8u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_JOE;
          goto LABEL_227;
        case 9u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_LEO;
          goto LABEL_227;
        case 0xAu:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_RLF;
          goto LABEL_227;
        case 0xBu:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_CLK;
          goto LABEL_227;
        case 0xCu:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_IOR;
          goto LABEL_227;
        case 0xDu:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_MTR;
          goto LABEL_227;
        case 0xEu:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_VIC;
          goto LABEL_227;
        case 0xFu:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_KKK;
          goto LABEL_227;
        case 0x10u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_KLA;
          goto LABEL_227;
        case 0x11u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_MXI;
          goto LABEL_227;
        case 0x12u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_GES;
          goto LABEL_227;
        case 0x13u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_BLY;
          goto LABEL_227;
        case 0x14u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_SSL;
          goto LABEL_227;
        case 0x15u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_KNG;
          goto LABEL_227;
        case 0x16u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_MAI;
          goto LABEL_227;
        case 0x17u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_ALC;
          goto LABEL_227;
        case 0x18u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_KIM;
          goto LABEL_227;
        case 0x19u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_GAN;
          goto LABEL_227;
        case 0x1Au:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_LUO;
          goto LABEL_227;
        case 0x1Bu:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_ATN;
          goto LABEL_227;
        case 0x1Cu:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_KNS;
          goto LABEL_227;
        case 0x1Du:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_CHN;
          goto LABEL_227;
        case 0x1Eu:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_XND;
          goto LABEL_227;
        case 0x1Fu:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_CNG;
          goto LABEL_227;
        case 0x20u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_CHO;
          goto LABEL_227;
        case 0x21u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_NKR;
          goto LABEL_227;
        case 0x22u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_MUI;
          goto LABEL_227;
        case 0x23u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_LVH;
          goto LABEL_227;
        case 0x24u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_RMN;
          goto LABEL_227;
        case 0x25u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_AGL;
          goto LABEL_227;
        case 0x26u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_KOD;
          goto LABEL_227;
        case 0x27u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_SHU;
          goto LABEL_227;
        case 0x28u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_TUN;
          goto LABEL_227;
        case 0x29u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_MTK;
          goto LABEL_227;
        case 0x2Au:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_ZRN;
          goto LABEL_227;
        case 0x2Bu:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_BDR;
          goto LABEL_227;
        case 0x2Cu:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_NEL;
          goto LABEL_227;
        case 0x2Du:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_SLV;
          goto LABEL_227;
        case 0x2Eu:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_KKR;
          goto LABEL_227;
        case 0x2Fu:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_MIA;
          goto LABEL_227;
        case 0x30u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_ANT;
          goto LABEL_227;
        case 0x31u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_VRS;
          goto LABEL_227;
        case 0x32u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_ROC;
          goto LABEL_227;
        case 0x33u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_MRY;
          goto LABEL_227;
        case 0x34u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_YMZ;
          goto LABEL_227;
        case 0x35u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_VNS;
          goto LABEL_227;
        case 0x36u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_OSW;
          goto LABEL_227;
        case 0x38u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_HDR;
          goto LABEL_227;
        case 0x39u:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_WHP;
          goto LABEL_227;
        case 0x3Cu:
          v14 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA_NJD;
LABEL_227:
          SubmitScore(v14, pInfo, 0);
          v12 = LEADERBOARD_ID_SURVIVAL_SCORE_NORTHAMERICA;
          goto LABEL_288;
        default:
          return 0i64;
      }
    }
    switch ( pInfo->m_RankWin.m_DisconnectMarker )
    {
      case 0u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_KYO;
        goto LABEL_287;
      case 1u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_BEN;
        goto LABEL_287;
      case 2u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_DMN;
        goto LABEL_287;
      case 3u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_RYO;
        goto LABEL_287;
      case 4u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_RBT;
        goto LABEL_287;
      case 5u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_YRI;
        goto LABEL_287;
      case 6u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_TRY;
        goto LABEL_287;
      case 7u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_ADY;
        goto LABEL_287;
      case 8u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_JOE;
        goto LABEL_287;
      case 9u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_LEO;
        goto LABEL_287;
      case 0xAu:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_RLF;
        goto LABEL_287;
      case 0xBu:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_CLK;
        goto LABEL_287;
      case 0xCu:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_IOR;
        goto LABEL_287;
      case 0xDu:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_MTR;
        goto LABEL_287;
      case 0xEu:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_VIC;
        goto LABEL_287;
      case 0xFu:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_KKK;
        goto LABEL_287;
      case 0x10u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_KLA;
        goto LABEL_287;
      case 0x11u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_MXI;
        goto LABEL_287;
      case 0x12u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_GES;
        goto LABEL_287;
      case 0x13u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_BLY;
        goto LABEL_287;
      case 0x14u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_SSL;
        goto LABEL_287;
      case 0x15u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_KNG;
        goto LABEL_287;
      case 0x16u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_MAI;
        goto LABEL_287;
      case 0x17u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_ALC;
        goto LABEL_287;
      case 0x18u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_KIM;
        goto LABEL_287;
      case 0x19u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_GAN;
        goto LABEL_287;
      case 0x1Au:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_LUO;
        goto LABEL_287;
      case 0x1Bu:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_ATN;
        goto LABEL_287;
      case 0x1Cu:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_KNS;
        goto LABEL_287;
      case 0x1Du:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_CHN;
        goto LABEL_287;
      case 0x1Eu:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_XND;
        goto LABEL_287;
      case 0x1Fu:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_CNG;
        goto LABEL_287;
      case 0x20u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_CHO;
        goto LABEL_287;
      case 0x21u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_NKR;
        goto LABEL_287;
      case 0x22u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_MUI;
        goto LABEL_287;
      case 0x23u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_LVH;
        goto LABEL_287;
      case 0x24u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_RMN;
        goto LABEL_287;
      case 0x25u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_AGL;
        goto LABEL_287;
      case 0x26u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_KOD;
        goto LABEL_287;
      case 0x27u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_SHU;
        goto LABEL_287;
      case 0x28u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_TUN;
        goto LABEL_287;
      case 0x29u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_MTK;
        goto LABEL_287;
      case 0x2Au:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_ZRN;
        goto LABEL_287;
      case 0x2Bu:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_BDR;
        goto LABEL_287;
      case 0x2Cu:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_NEL;
        goto LABEL_287;
      case 0x2Du:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_SLV;
        goto LABEL_287;
      case 0x2Eu:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_KKR;
        goto LABEL_287;
      case 0x2Fu:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_MIA;
        goto LABEL_287;
      case 0x30u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_ANT;
        goto LABEL_287;
      case 0x31u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_VRS;
        goto LABEL_287;
      case 0x32u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_ROC;
        goto LABEL_287;
      case 0x33u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_MRY;
        goto LABEL_287;
      case 0x34u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_YMZ;
        goto LABEL_287;
      case 0x35u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_VNS;
        goto LABEL_287;
      case 0x36u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_OSW;
        goto LABEL_287;
      case 0x38u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_HDR;
        goto LABEL_287;
      case 0x39u:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_WHP;
        goto LABEL_287;
      case 0x3Cu:
        v15 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA_NJD;
LABEL_287:
        SubmitScore(v15, pInfo, 0);
        v12 = LEADERBOARD_ID_SURVIVAL_SCORE_ASIA;
LABEL_288:
        SubmitScore(v12, pInfo, 0);
        switch ( pInfo->m_RankWin.m_DisconnectMarker )
        {
          case 0u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_KYO;
            goto LABEL_347;
          case 1u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_BEN;
            goto LABEL_347;
          case 2u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_DMN;
            goto LABEL_347;
          case 3u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_RYO;
            goto LABEL_347;
          case 4u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_RBT;
            goto LABEL_347;
          case 5u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_YRI;
            goto LABEL_347;
          case 6u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_TRY;
            goto LABEL_347;
          case 7u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_ADY;
            goto LABEL_347;
          case 8u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_JOE;
            goto LABEL_347;
          case 9u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_LEO;
            goto LABEL_347;
          case 0xAu:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_RLF;
            goto LABEL_347;
          case 0xBu:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_CLK;
            goto LABEL_347;
          case 0xCu:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_IOR;
            goto LABEL_347;
          case 0xDu:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_MTR;
            goto LABEL_347;
          case 0xEu:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_VIC;
            goto LABEL_347;
          case 0xFu:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_KKK;
            goto LABEL_347;
          case 0x10u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_KLA;
            goto LABEL_347;
          case 0x11u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_MXI;
            goto LABEL_347;
          case 0x12u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_GES;
            goto LABEL_347;
          case 0x13u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_BLY;
            goto LABEL_347;
          case 0x14u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_SSL;
            goto LABEL_347;
          case 0x15u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_KNG;
            goto LABEL_347;
          case 0x16u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_MAI;
            goto LABEL_347;
          case 0x17u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_ALC;
            goto LABEL_347;
          case 0x18u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_KIM;
            goto LABEL_347;
          case 0x19u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_GAN;
            goto LABEL_347;
          case 0x1Au:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_LUO;
            goto LABEL_347;
          case 0x1Bu:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_ATN;
            goto LABEL_347;
          case 0x1Cu:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_KNS;
            goto LABEL_347;
          case 0x1Du:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_CHN;
            goto LABEL_347;
          case 0x1Eu:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_XND;
            goto LABEL_347;
          case 0x1Fu:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_CNG;
            goto LABEL_347;
          case 0x20u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_CHO;
            goto LABEL_347;
          case 0x21u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_NKR;
            goto LABEL_347;
          case 0x22u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_MUI;
            goto LABEL_347;
          case 0x23u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_LVH;
            goto LABEL_347;
          case 0x24u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_RMN;
            goto LABEL_347;
          case 0x25u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_AGL;
            goto LABEL_347;
          case 0x26u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_KOD;
            goto LABEL_347;
          case 0x27u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_SHU;
            goto LABEL_347;
          case 0x28u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_TUN;
            goto LABEL_347;
          case 0x29u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_MTK;
            goto LABEL_347;
          case 0x2Au:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_ZRN;
            goto LABEL_347;
          case 0x2Bu:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_BDR;
            goto LABEL_347;
          case 0x2Cu:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_NEL;
            goto LABEL_347;
          case 0x2Du:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_SLV;
            goto LABEL_347;
          case 0x2Eu:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_KKR;
            goto LABEL_347;
          case 0x2Fu:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_MIA;
            goto LABEL_347;
          case 0x30u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_ANT;
            goto LABEL_347;
          case 0x31u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_VRS;
            goto LABEL_347;
          case 0x32u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_ROC;
            goto LABEL_347;
          case 0x33u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_MRY;
            goto LABEL_347;
          case 0x34u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_YMZ;
            goto LABEL_347;
          case 0x35u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_VNS;
            goto LABEL_347;
          case 0x36u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_OSW;
            goto LABEL_347;
          case 0x38u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_HDR;
            goto LABEL_347;
          case 0x39u:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_WHP;
            goto LABEL_347;
          case 0x3Cu:
            v16 = LEADERBOARD_ID_SURVIVAL_SCORE_ALL_NJD;
            goto LABEL_347;
          default:
            return 0i64;
        }
      default:
        return 0i64;
    }
    return 0i64;
  }
  if ( id == LEADERBOARD_ID_GRADE_ALL )
  {
    v9 = *(_DWORD *)&pInfo->m_RankWin.m_Icon ^ 0x7B48A35E ^ (*(_WORD *)&pInfo->m_RankWin.m_Icon ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)&pInfo->m_RankWin.m_Icon ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)&pInfo->m_RankWin.m_Icon ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)&pInfo->m_RankWin.m_Icon ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    if ( (v9 ^ (((v9 ^ (v9 >> 7)) & 0x550055) << 7)) == ((v9 ^ (v9 >> 7)) & 0x550055) )
      return 0i64;
    switch ( pInfo->m_Area )
    {
      case LEADERBOARD_AREA_ASIA:
        v10 = LEADERBOARD_ID_GRADE_ASIA;
        break;
      case LEADERBOARD_AREA_NORTHAMERICA:
        v10 = LEADERBOARD_ID_GRADE_NORTHAMERICA;
        break;
      case LEADERBOARD_AREA_EUROPE:
        v10 = LEADERBOARD_ID_GRADE_EUROPE;
        break;
      default:
        v10 = LEADERBOARD_ID_GRADE_OTHER;
        break;
    }
    SubmitScore(v10, pInfo, 0);
    m_PcId = v41;
    v40[0] = pInfo->m_Grade.m_Point;
    WORD2(v40[2]) = *(_WORD *)((char *)&pInfo->m_Replay.m_User[0][0].onlineId + 1);
    m_DisconnectMarker = pInfo->m_Grade.m_DisconnectMarker;
    goto LABEL_350;
  }
  if ( (unsigned int)(id - 17) <= 3 )
  {
    v40[0] = pInfo->m_Grade.m_Point;
    WORD2(v40[2]) = *(_WORD *)((char *)&pInfo->m_Replay.m_User[0][0].onlineId + 1);
    m_DisconnectMarker = pInfo->m_Grade.m_DisconnectMarker;
LABEL_350:
    LODWORD(v40[2]) = 3;
    BYTE6(v40[2]) = m_DisconnectMarker;
  }
LABEL_351:
  v17 = 0;
  v18 = Fw::RankingWrite::m_pWork;
  while ( v18->m_WorkHandle )
  {
    ++v17;
    if ( (__int64)++v18 >= (__int64)Fw::VoiceChat::m_VoiceQos )
      return 0i64;
  }
  v30 = &Fw::RankingWrite::m_pWork[v17];
  if ( v30 )
  {
    v31 = Fw::RankingWrite::m_CycleWorkHandle + 1;
    if ( Fw::RankingWrite::m_CycleWorkHandle + 1 > 50331647 )
      v31 = 0x2000000;
    Fw::RankingWrite::m_CycleWorkHandle = v31;
    if ( v30->m_Rno )
      goto LABEL_677;
    v32 = v40[0];
    v30->m_PcId = m_PcId;
    *(_QWORD *)&v30->m_Flag = 0i64;
    v30->m_Result = RANKING_RESULT_CONTINUE;
    v30->m_pErrorMessage = 0i64;
    v30->m_BoardId = id;
    v30->m_Score = v32;
    v33 = (Fw::ScoreGameInfo *)aligned_malloc(0x84ui64, 0x20ui64);
    v30->m_pGameInfo = v33;
    if ( !v33 )
    {
LABEL_677:
      m_pGameInfo = v30->m_pGameInfo;
      if ( m_pGameInfo )
      {
        aligned_free(m_pGameInfo);
        v30->m_pGameInfo = 0i64;
      }
    }
    else
    {
      memmove(v33, &v40[2], SLODWORD(v40[2]) + 4i64);
      v30->m_Rno = RNO_WRITE_VARIABLE_MULTISLOT_BEGIN;
      v30->m_WorkHandle = v31;
      if ( v31 )
      {
        if ( getHandleFlag )
          return v31;
        v36 = CTaskSystem::Entry(
                (CTaskSystem *)(*(_QWORD *)&AppMain::pApp + 10824i64),
                (int (__fastcall *)(GENERAL_TASK *))GT_LeaderboardSubmit,
                v34,
                v35,
                v39);
        if ( v36 )
        {
          *(_DWORD *)v36->pBuffer = v31;
          return v31;
        }
      }
    }
  }
  return 0i64;
}

